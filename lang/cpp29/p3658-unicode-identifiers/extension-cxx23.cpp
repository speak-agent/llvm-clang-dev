// RUN: verify
// ARGS: -std=c++23
// P3658R1 is a defect report: the characters are valid in every C++ mode. Before C++2d Clang says they are
// an extension of the C++2d standard (-Wc++2d-extensions) instead of "a Clang extension".

extern int 𝛛; // expected-warning {{mathematical notation character <U+1D6DB> in an identifier is a C++2d extension}}
int a¹b₍₄₂₎∇; // expected-warning 6{{mathematical notation character}}
int \u{221E} = 1; // expected-warning {{mathematical notation character <U+221E> in an identifier is a C++2d extension}}
int \N{MATHEMATICAL SANS-SERIF BOLD ITALIC PARTIAL DIFFERENTIAL} = 1;
  // expected-warning@-1 {{mathematical notation character <U+1D7C3> in an identifier is a C++2d extension}}
int c\N{SUBSCRIPT EQUALS SIGN} = 1; // expected-warning {{mathematical notation character <U+208C> in an identifier is a C++2d extension}}
int x²; // expected-warning {{mathematical notation character <U+00B2> in an identifier is a C++2d extension}}
int plain, Hawaiʻi; // what XID_Start and XID_Continue gave is not a use of the profile: no warning
