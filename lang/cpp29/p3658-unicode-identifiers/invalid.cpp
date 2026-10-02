// RUN: verify
// P3658R1: what neither XID_Start/XID_Continue nor the profile's characters are stays invalid; the
// continue-only characters of the profile (superscripts, subscripts) cannot start an identifier.

extern int ₉; // expected-error {{character <U+2089> not allowed at the start of an identifier}} expected-warning {{declaration does not declare anything}}
extern int ²; // expected-error {{character <U+00B2> not allowed at the start of an identifier}} expected-warning {{declaration does not declare anything}}
extern int a\N{PICKLE}; // expected-error {{character <U+1FADD> not allowed in an identifier}}
