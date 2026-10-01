// llvm-clang-dev port (openkal macOS): what LLVM uses of this Darwin header, declared over openkal-musl;
// port/src/Darwin.cpp defines the functions.
#pragma once
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
typedef unsigned int mach_port_t;
typedef mach_port_t thread_port_t;
typedef mach_port_t host_t;
typedef int kern_return_t;
typedef unsigned int mach_msg_type_number_t;
#define KERN_SUCCESS 0
// A thread's identity (llvm::get_threadid): Darwin's thread_selfid, which is unique while the thread runs.
thread_port_t mach_thread_self(void);
mach_port_t mach_task_self(void);
kern_return_t mach_port_deallocate(mach_port_t task, mach_port_t name);
#ifdef __cplusplus
}
#endif
