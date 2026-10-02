// RUN: verify
// ARGS: -Wpre-c++2d-compat
// P3658R1: in C++2d -Wpre-c++2d-compat tells that these characters were not identifiers' before.

extern int 𝛛; // expected-warning {{mathematical notation character <U+1D6DB> in an identifier is incompatible with C++ standards before C++2d}}
int a¹b₍₄₂₎∇; // expected-warning 6{{mathematical notation character}}
int \u{221E} = 1; // expected-warning {{mathematical notation character <U+221E> in an identifier is incompatible with C++ standards before C++2d}}
int plain, Hawaiʻi; // no warning
