//===- Darwin.cpp - what LLVM's Darwin code asks of the system -----------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// llvm-clang-dev port, openkal's macOS target. A program there is an openkal one: openkal-musl above
// the kernel's own calls, and nothing of the system's C library but two names (openkal-macos's
// libSystem stub). LLVM's __APPLE__ code still names a few Darwin functions -- a thread's identity, a
// sysctl, the executable's path, the environment, copying a file, the host's UUID, a thread's QoS.
// They are defined here, as openkal-macos defines its own: with the kernel's system calls where the
// answer matters, and as "not supported" where LLVM has a fallback (clonefile) or only asks a favour
// (QoS). The declarations are port/include/darwin/, on this target's include path only.
//
//===----------------------------------------------------------------------===//

#if defined(__APPLE__)

#include <copyfile.h>
#include <crt_externs.h>
#include <mach-o/dyld.h>
#include <mach/mach.h>
#include <pthread/qos.h>
#include <sys/clonefile.h>
#include <sys/sysctl.h>
#include <uuid/uuid.h>

#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

extern "C" char **environ;

namespace {

// A Darwin system call: on arm64 `svc #0x80`, its number in x16, the carry flag set when it failed and
// x0 then the errno. x1 may come back as a second result.
long darwin_call(long number, long a0, long a1, long a2, long a3, long a4, long a5) {
#if defined(__aarch64__)
  register long x0 __asm__("x0") = a0;
  register long x1 __asm__("x1") = a1;
  register long x2 __asm__("x2") = a2;
  register long x3 __asm__("x3") = a3;
  register long x4 __asm__("x4") = a4;
  register long x5 __asm__("x5") = a5;
  register long x16 __asm__("x16") = number;
  long failed;
  __asm__ volatile("svc #0x80\n\tcset %[failed], cs"
                   : "+r"(x0), "+r"(x1), [failed] "=r"(failed)
                   : "r"(x2), "r"(x3), "r"(x4), "r"(x5), "r"(x16)
                   : "memory", "cc");
  if (failed) {
    errno = static_cast<int>(x0);
    return -1;
  }
  return x0;
#else
  (void)number, (void)a0, (void)a1, (void)a2, (void)a3, (void)a4, (void)a5;
  errno = ENOSYS;
  return -1;
#endif
}

constexpr long SYS_getpid = 20;
constexpr long SYS_gethostuuid = 142;
constexpr long SYS_sysctl = 202;
constexpr long SYS_sysctlbyname = 274;
constexpr long SYS_proc_info = 336;
constexpr long SYS_thread_selfid = 372;
constexpr long PROC_INFO_CALL_PIDINFO = 2;
constexpr long PROC_PIDPATHINFO = 11;
constexpr size_t PROC_PIDPATHINFO_MAXSIZE = 4096;

} // namespace

extern "C" {

thread_port_t mach_thread_self(void) {
  const long id = darwin_call(SYS_thread_selfid, 0, 0, 0, 0, 0, 0);
  return id < 0 ? 0 : static_cast<thread_port_t>(id);
}

mach_port_t mach_task_self(void) { return 0; }

// Nothing was allocated: mach_thread_self above names no port.
kern_return_t mach_port_deallocate(mach_port_t, mach_port_t) { return KERN_SUCCESS; }

int sysctl(int *name, unsigned int namelen, void *oldp, size_t *oldlenp, void *newp, size_t newlen) {
  return static_cast<int>(darwin_call(SYS_sysctl, reinterpret_cast<long>(name), static_cast<long>(namelen), reinterpret_cast<long>(oldp),
                                      reinterpret_cast<long>(oldlenp), reinterpret_cast<long>(newp), static_cast<long>(newlen)));
}

int sysctlbyname(const char *name, void *oldp, size_t *oldlenp, void *newp, size_t newlen) {
  return static_cast<int>(darwin_call(SYS_sysctlbyname, reinterpret_cast<long>(name), static_cast<long>(strlen(name)),
                                      reinterpret_cast<long>(oldp), reinterpret_cast<long>(oldlenp),
                                      reinterpret_cast<long>(newp), static_cast<long>(newlen)));
}

// The kernel answers PROC_PIDPATHINFO with 0 and the path in the buffer (its return value is not the
// length: libproc's proc_pidpath takes anything but -1 as success and measures the string). Taking 0
// for a failure left every program without its own path -- clang's driver then had no directory to
// find its resource directory and configuration files in (mcxx on macOS: "'stdarg.h' file not found").
//
// The kernel's process identifier, not openkal-musl's getpid: that one answers 1 by design (openkal has
// no process identifiers to give), and the kernel's path for process 1 is /sbin/launchd -- where clang
// then looked for its resource directory, and which it re-invoked for cc1.
int _NSGetExecutablePath(char *buf, uint32_t *bufsize) {
  char path[PROC_PIDPATHINFO_MAXSIZE];
  path[0] = 0;
  const long self = darwin_call(SYS_getpid, 0, 0, 0, 0, 0, 0);
  if (self <= 0)
    return -1;
  const long n = darwin_call(SYS_proc_info, PROC_INFO_CALL_PIDINFO, self, PROC_PIDPATHINFO, 0,
                             reinterpret_cast<long>(path), static_cast<long>(sizeof path));
  if (n < 0 || path[0] == 0)
    return -1;
  const size_t len = strnlen(path, sizeof path);
  if (len + 1 > *bufsize) {
    *bufsize = static_cast<uint32_t>(len + 1);
    return -1;
  }
  memcpy(buf, path, len + 1);
  return 0;
}

char ***_NSGetEnviron(void) { return &environ; }

// openkal-musl's uname, with Darwin's name and the kernel's release (openkal-host.h sends LLVM's calls
// here; `(uname)` is the C library's).
int openkal_darwin_uname(struct utsname *u) {
  if ((uname)(u) != 0)
    return -1;
  char release[sizeof u->release];
  size_t n = sizeof release;
  if (sysctlbyname("kern.osrelease", release, &n, nullptr, 0) == 0 && n > 0) {
    release[sizeof release - 1] = 0;
    memcpy(u->release, release, strnlen(release, sizeof release) + 1);
  }
  static const char sysname[] = "Darwin";
  memcpy(u->sysname, sysname, sizeof sysname);
  return 0;
}

int clonefile(const char *, const char *, unsigned int) {
  errno = ENOTSUP;
  return -1;
}

int copyfile(const char *from, const char *to, copyfile_state_t, copyfile_flags_t flags) {
  if (flags != COPYFILE_DATA) {
    errno = ENOTSUP;
    return -1;
  }
  const int in = open(from, O_RDONLY | O_CLOEXEC);
  if (in < 0)
    return -1;
  const int out = open(to, O_WRONLY | O_CREAT | O_TRUNC | O_CLOEXEC, 0666);
  if (out < 0) {
    const int saved = errno;
    close(in);
    errno = saved;
    return -1;
  }
  char chunk[1 << 16];
  int result = 0;
  for (;;) {
    const ssize_t got = read(in, chunk, sizeof chunk);
    if (got == 0)
      break;
    if (got < 0) {
      if (errno == EINTR)
        continue;
      result = -1;
      break;
    }
    for (ssize_t done = 0; done < got;) {
      const ssize_t put = write(out, chunk + done, static_cast<size_t>(got - done));
      if (put < 0) {
        if (errno == EINTR)
          continue;
        result = -1;
        break;
      }
      done += put;
    }
    if (result != 0)
      break;
  }
  const int saved = errno;
  close(in);
  if (close(out) != 0 && result == 0)
    result = -1;
  else
    errno = saved;
  return result;
}

int gethostuuid(uuid_t id, const struct timespec *wait) {
  return static_cast<int>(darwin_call(SYS_gethostuuid, reinterpret_cast<long>(id), reinterpret_cast<long>(wait), 0, 0, 0, 0));
}

void uuid_unparse(const uuid_t uu, char *out) {
  snprintf(out, 37, "%02X%02X%02X%02X-%02X%02X-%02X%02X-%02X%02X-%02X%02X%02X%02X%02X%02X", uu[0], uu[1], uu[2], uu[3],
           uu[4], uu[5], uu[6], uu[7], uu[8], uu[9], uu[10], uu[11], uu[12], uu[13], uu[14], uu[15]);
}

int pthread_set_qos_class_self_np(qos_class_t, int) { return 0; }

void sys_icache_invalidate(const void *addr, size_t len) {
  char *begin = static_cast<char *>(const_cast<void *>(addr));
  __builtin___clear_cache(begin, begin + len);
}

} // extern "C"

#endif // __APPLE__
