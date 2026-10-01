// llvm-clang-dev port (openkal macOS): what LLVM uses of this Darwin header, declared over openkal-musl;
// port/src/Darwin.cpp defines the functions.
#pragma once
#ifdef __cplusplus
extern "C" {
#endif
typedef enum {
    QOS_CLASS_USER_INTERACTIVE = 0x21, QOS_CLASS_USER_INITIATED = 0x19, QOS_CLASS_DEFAULT = 0x15,
    QOS_CLASS_UTILITY = 0x11, QOS_CLASS_BACKGROUND = 0x09, QOS_CLASS_UNSPECIFIED = 0x00,
} qos_class_t;
// Accepted and not applied: a thread's QoS class is a scheduling hint.
int pthread_set_qos_class_self_np(qos_class_t qos, int relative_priority);
#ifdef __cplusplus
}
#endif
