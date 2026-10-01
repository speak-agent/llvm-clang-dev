// llvm-clang-dev port (openkal macOS): what LLVM uses of this Darwin header, declared over openkal-musl;
// port/src/Darwin.cpp defines the functions.
#pragma once
#ifdef __cplusplus
extern "C" {
#endif
char ***_NSGetEnviron(void);   // musl's environ
#ifdef __cplusplus
}
#endif
