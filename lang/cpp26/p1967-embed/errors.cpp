// RUN: verify
// P1967R14: what makes an #embed directive ill-formed (a resource that is not found is fatal, it has its
// own test: not-found.cpp).

constexpr unsigned char a[] = {
#embed <d.bin> limit(1) limit(2) // expected-error {{cannot specify parameter 'limit' twice in the same '#embed' directive}}
};
constexpr unsigned char b[] = {
#embed <d.bin> prefix(1,) prefix(2,) // expected-error {{cannot specify parameter 'prefix' twice in the same '#embed' directive}}
};
constexpr unsigned char c[] = {
#embed <d.bin> if_empty(1) if_empty(2) // expected-error {{cannot specify parameter 'if_empty' twice in the same '#embed' directive}}
};
constexpr unsigned char d[] = {
#embed <d.bin> limit(-1) // expected-error {{invalid value '-1'; must be positive}}
};
constexpr unsigned char e[] = {
#embed <d.bin> limit(defined(X)) // expected-error {{'defined' cannot appear within this context}}
};
constexpr unsigned char f[] = {
#embed <d.bin> foo::bar(3) // expected-error {{unknown embed preprocessor parameter 'foo::bar'}}
};
constexpr unsigned char g[] = {
#embed <d.bin> unknown // expected-error {{unknown embed preprocessor parameter 'unknown'}}
};
constexpr unsigned char h[] = {
#embed // expected-error {{expected "FILENAME" or <FILENAME>}}
};
constexpr unsigned char i[] = {
#embed d.bin // expected-error {{expected "FILENAME" or <FILENAME>}}
};
constexpr unsigned char j[] = {
#embed <d.bin> limit(1 // expected-error {{expected ')'}}
};
constexpr unsigned char k[] = {
#embed <d.bin> limit // expected-error {{expected '('}}
};
// Adjacent string literals are not concatenated, so this is not a resource name followed by nothing.
constexpr unsigned char l[] = {
#embed "d.bin" "empty.dat" // expected-error {{expected identifier}}
};
