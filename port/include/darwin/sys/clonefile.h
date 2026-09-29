// llvm-clang-dev port (openkal macOS): what LLVM uses of this Darwin header, declared over openkal-musl;
// port/src/Darwin.cpp defines the functions.
#pragma once
#ifdef __cplusplus
extern "C" {
#endif
// Always fails with ENOTSUP: LLVM then copies (copyfile).
int clonefile(const char *src, const char *dst, unsigned int flags);
#ifdef __cplusplus
}
#endif
