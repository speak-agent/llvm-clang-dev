// llvm-clang-dev port (openkal macOS): what LLVM uses of this Darwin header, declared over openkal-musl;
// port/src/Darwin.cpp defines the functions.
#pragma once
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
// This executable's path (Darwin's proc_info, PROC_PIDPATHINFO): 0, or -1 with *bufsize the size needed.
int _NSGetExecutablePath(char *buf, uint32_t *bufsize);
#ifdef __cplusplus
}
#endif
