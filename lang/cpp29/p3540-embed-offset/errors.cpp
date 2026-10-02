// RUN: verify
// P3540R3: an offset that is not a constant-expression of a value >= 0, twice, or defined in it.

constexpr unsigned char a[] = {
#embed <jump.wav> offset(1) offset(2) // expected-error {{cannot specify parameter 'offset' twice in the same '#embed' directive}}
};
constexpr unsigned char b[] = {
#embed <jump.wav> offset(-1) // expected-error {{invalid value '-1'; must be positive}}
};
constexpr unsigned char c[] = {
#embed <jump.wav> offset(defined(X)) // expected-error {{'defined' cannot appear within this context}}
};
constexpr unsigned char d[] = {
#embed <jump.wav> offset // expected-error {{expected '('}}
};
// It is the same parameter as the vendor's spelling: both cannot appear.
constexpr unsigned char e[] = {
#embed <jump.wav> offset(1) clang::offset(2) // expected-error {{cannot specify parameter 'clang::offset' twice in the same '#embed' directive}}
};
