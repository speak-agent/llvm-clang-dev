// RUN: verify
// expected-no-diagnostics
// P1967R14: __cpp_pp_embed is defined in C++26 (and later) with the paper's value, and no #embed warning
// is given there (it is an extension, with a warning, before).

#ifndef __cpp_pp_embed
#error "__cpp_pp_embed"
#endif
static_assert(__cpp_pp_embed == 202502L);

#if !defined(__STDC_EMBED_NOT_FOUND__) || !defined(__STDC_EMBED_FOUND__) || !defined(__STDC_EMBED_EMPTY__)
#error "__STDC_EMBED_*"
#endif

constexpr unsigned char a[] = {
#embed "d.bin"
};
static_assert(sizeof(a) == 4);
