// Forced in on openkal's Windows target (tools/gen_config.py): LLVM's host code reads the platform
// from __linux__, which this world implements through openkal-musl.
#ifndef __linux__
#define __linux__ 1
#define __linux 1
#endif
