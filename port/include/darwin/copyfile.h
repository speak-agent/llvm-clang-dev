// llvm-clang-dev port (openkal macOS): what LLVM uses of this Darwin header, declared over openkal-musl;
// port/src/Darwin.cpp defines the functions.
#pragma once
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
typedef struct _copyfile_state *copyfile_state_t;
typedef uint32_t copyfile_flags_t;
#define COPYFILE_DATA (1 << 3)
// COPYFILE_DATA only: the file's bytes, read and written.
int copyfile(const char *from, const char *to, copyfile_state_t state, copyfile_flags_t flags);
#ifdef __cplusplus
}
#endif
