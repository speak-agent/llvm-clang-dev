// RUN: verify
// P1967R14: a resource that is not found makes the directive ill-formed (the diagnostic is fatal in Clang).

constexpr unsigned char a[] = {
#embed <does-not-exist.bin> // expected-error {{'does-not-exist.bin' file not found}}
};
