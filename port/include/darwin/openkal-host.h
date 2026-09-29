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
