// RUN: verify
// ARGS: -std=c++23
// P1967R14: before C++26 #embed is an extension (a warning, as in C23's case before C23), and the
// feature-test macro is not defined.

#ifdef __cpp_pp_embed
#error "__cpp_pp_embed is C++26's"
#endif

constexpr unsigned char a[] = {
#embed "d.bin" // expected-warning {{#embed is a C++2c extension}}
};
static_assert(sizeof(a) == 4);
constexpr unsigned char b[] = {
#embed "d.bin" limit(2) // expected-warning {{#embed is a C++2c extension}}
};
static_assert(sizeof(b) == 2);
// An embed parameter's names are the paper's in every mode.
#if __has_embed("d.bin") != __STDC_EMBED_FOUND__
#error "__has_embed"
#endif
