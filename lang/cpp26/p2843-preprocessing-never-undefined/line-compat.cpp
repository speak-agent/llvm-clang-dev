// RUN: verify
// expected-no-diagnostics
// ARGS: -std=c++23
// P2843R3 is C++26's: before it #line 0 and a large number stay what they were, extensions that only
// -pedantic tells.

#line 0
#line 2147483648
