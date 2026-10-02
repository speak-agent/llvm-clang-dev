// RUN: verify
// ARGS: -std=c++2c
// P3540R3 is C++2d's: in C++26 the unprefixed offset is not an embed parameter (clang::offset, the vendor's,
// is).

constexpr unsigned char ok[] = {
#embed <jump.wav> clang::offset(3)
};
static_assert(sizeof(ok) == 2);

constexpr unsigned char a[] = {
#embed <jump.wav> offset(3) // expected-error {{unknown embed preprocessor parameter 'offset'}}
};

// In __has_embed an embed parameter that is not supported is not an error, the resource is not found.
#if __has_embed(<jump.wav> offset(1)) != __STDC_EMBED_NOT_FOUND__
#error "offset in C++26"
#endif
#if __has_embed(<jump.wav> clang::offset(1)) != __STDC_EMBED_FOUND__
#error "clang::offset"
#endif
