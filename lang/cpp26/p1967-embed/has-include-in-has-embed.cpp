// RUN: verify
// P1967R14 [cpp.embed.param.limit]: __has_include is fine in the limit of a #embed directive, and cannot
// appear in an embed parameter of __has_embed.

constexpr unsigned char a[] = {
#embed "d.bin" limit(__has_include("d.bin"))
};
static_assert(sizeof(a) == 1);

#if __has_embed(<d.bin> limit(__has_include("a.h"))) // expected-error {{'__has_include' cannot appear in an embed parameter of '__has_embed'}}
#endif

// What is around it is fine, and so is __has_include elsewhere in the same expression.
#if __has_include("d.bin") && __has_embed(<d.bin> limit(1)) == 1
#else
#error "outside the parameter"
#endif
