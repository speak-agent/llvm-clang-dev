// llvm-clang-dev port (openkal macOS): what LLVM uses of this Darwin header, declared over openkal-musl;
// port/src/Darwin.cpp defines the functions.
#pragma once
#include <time.h>
#ifdef __cplusplus
extern "C" {
#endif
typedef unsigned char uuid_t[16];
typedef char uuid_string_t[37];
void uuid_unparse(const uuid_t uu, char *out);
// The machine's hardware UUID (Darwin system call 142); declared in <unistd.h> on Darwin.
int gethostuuid(uuid_t id, const struct timespec *wait);
#ifdef __cplusplus
}
#endif
