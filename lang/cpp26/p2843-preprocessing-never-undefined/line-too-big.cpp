// RUN: verify
// P2843R3, [cpp.line]/3: ... or a number greater than 2147483647.

#line 2147483648 // expected-warning {{#line number must be less than 2147483648 in C++26}}
