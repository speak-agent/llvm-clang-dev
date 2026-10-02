// RUN: verify
// ARGS: -Wpre-c++26-compat
// P1967R14: in C++26 -Wpre-c++26-compat tells that #embed is not there before.

constexpr unsigned char a[] = {
#embed "d.bin" // expected-warning {{#embed is incompatible with C++ standards before C++2c}}
};
