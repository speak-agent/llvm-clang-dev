// llvm-clang-dev port (openkal macOS): what LLVM uses of this Darwin header, declared over openkal-musl;
// port/src/Darwin.cpp defines the functions.
#pragma once
#include <stddef.h>
#ifdef __cplusplus
extern "C" {
#endif
#define CTL_HW 6
#define HW_AVAILCPU 25
// The kernel's own sysctl, by MIB (Darwin system call 202) and by name (274).
int sysctl(int *name, unsigned int namelen, void *oldp, size_t *oldlenp, void *newp, size_t newlen);
int sysctlbyname(const char *name, void *oldp, size_t *oldlenp, void *newp, size_t newlen);
#ifdef __cplusplus
}
#endif
