// llvm-clang-dev port: forced into this package's sources on openkal's macOS target (-include).
//
// openkal-musl on macOS gives the 64-bit integer types Darwin's ABI (`long long`) but keeps musl's
// literal limits, whose type is `long`: INT64_MAX and uint64_t then differ, and an overload that takes
// one of them and a bool becomes ambiguous (LLParser's `(0, UINT64_MAX)`). The limits are redefined in
// the typedefs' own type.
#pragma once
#include <stdint.h>
#undef INT64_MIN
#undef INT64_MAX
#undef UINT64_MAX
#define INT64_MIN (-1 - 0x7fffffffffffffffLL)
#define INT64_MAX (0x7fffffffffffffffLL)
#define UINT64_MAX (0xffffffffffffffffULL)
// And the constant macros, for the same reason: musl's INT64_C(0) is `0L`, which converts to int64_t
// and uint64_t alike, so MachineIRBuilder's `SrcOp(INT64_C(0))` (SrcOp(int64_t), SrcOp(uint64_t)) is
// ambiguous where the code generator is built (llvm.codegen-dev, llvm.clang-driver).
#undef INT64_C
#undef UINT64_C
#define INT64_C(c) c##LL
#define UINT64_C(c) c##ULL

// Darwin's release where LLVM reads the host's: the default triple becomes darwin<release>, and a
// target's default deployment version follows from it. openkal-musl's uname names openkal and its own
// version (arm64-apple-darwin0.19.8, and so -triple arm64-apple-macosx10.4.0); the port's asks the
// kernel (kern.osrelease). Calls only: the declaration <sys/utsname.h> makes comes before the name.
#include <sys/utsname.h>
#ifdef __cplusplus
extern "C"
#endif
int openkal_darwin_uname(struct utsname *);
#define uname(u) openkal_darwin_uname(u)

// Darwin's <sys/resource.h> constants LLVM names for a background thread (CrashRecoveryContext); musl's
// setpriority does not know them and fails, which LLVM ignores.
#ifndef PRIO_DARWIN_THREAD
#define PRIO_DARWIN_THREAD 3
#define PRIO_DARWIN_BG 0x1000
#endif

// Darwin's <sys/mount.h> declares statfs and fstatfs; musl's are in <sys/vfs.h>. MNT_LOCAL is Darwin's
// f_flags bit for a local volume: where the flags do not carry it, a file reads as remote to LLVM
// (is_local false: read into memory rather than mapped), which is slower and never wrong.
#include <sys/vfs.h>
#ifndef MNT_LOCAL
#define MNT_LOCAL 0x00001000
#endif

#ifdef __cplusplus
#include <pthread.h>
// Darwin names the calling thread (one argument); musl's names any thread.
inline int pthread_setname_np(const char *name) { return pthread_setname_np(pthread_self(), name); }
#endif
