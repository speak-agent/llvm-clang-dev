// RUN: verify
// P2843R3, [cpp.line]/3: the digit-sequence shall not specify zero (ill-formed; Clang accepted it, as a GNU
// extension, with a warning in -pedantic only).

#line 0 // expected-warning {{#line directive with zero argument is ill-formed in C++26}}
