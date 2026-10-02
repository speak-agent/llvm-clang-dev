// RUN: verify
// expected-no-diagnostics
// P1967R14, [cpp.cond]: __has_embed is 1 (__STDC_EMBED_FOUND__) for a resource with elements, 2
// (__STDC_EMBED_EMPTY__) for an empty one, 0 (__STDC_EMBED_NOT_FOUND__) for none or for an embed parameter
// that is not supported, and the standard treats it as the name of a defined macro.

static_assert(__STDC_EMBED_NOT_FOUND__ == 0 && __STDC_EMBED_FOUND__ == 1 && __STDC_EMBED_EMPTY__ == 2);

#if __has_embed(<d.bin>) != __STDC_EMBED_FOUND__
#error "found"
#endif
#if __has_embed("d.bin") != 1
#error "found, in quotes"
#endif
#if __has_embed(<empty.dat>) != __STDC_EMBED_EMPTY__
#error "empty"
#endif
#if __has_embed(<does-not-exist.bin>) != __STDC_EMBED_NOT_FOUND__
#error "not found"
#endif

// limit(0) makes a resource empty, __has_embed too.
#if __has_embed(<d.bin> limit(0)) != __STDC_EMBED_EMPTY__
#error "limit(0)"
#endif
#if __has_embed(<d.bin> limit(1)) != __STDC_EMBED_FOUND__
#error "limit(1)"
#endif
// The limit is the most the resource counts: one larger than the resource is not an empty resource (Clang
// 23.1 said it was empty: fixed in this fork).
#if __has_embed(<d.bin> limit(4)) != __STDC_EMBED_FOUND__
#error "limit(4)"
#endif
#if __has_embed(<d.bin> limit(100)) != __STDC_EMBED_FOUND__
#error "limit(100)"
#endif
#if __has_embed(<empty.dat> limit(100)) != __STDC_EMBED_EMPTY__
#error "empty with limit(100)"
#endif

// [Example] This resource is considered empty due to the limit(0) embed-parameter, always, including in
// __has_embed clauses.
int infinity_zero() {
#if __has_embed(<d.bin> limit(0) prefix(some tokens)) == __STDC_EMBED_EMPTY__
  return 0;
#else
#error "The resource does not exist"
#endif
}

// [Example] DATA_LIMIT is not a macro, the limit is the 0 an identifier is in #if.
#undef DATA_LIMIT
#if __has_embed(<data.dat> limit(DATA_LIMIT)) != __STDC_EMBED_EMPTY__
#error "DATA_LIMIT"
#endif

// An embed parameter that is not recognized is not an error: the resource is not found.
#if __has_embed(<d.bin> acme::open_mode("x")) != __STDC_EMBED_NOT_FOUND__
#error "unsupported parameter"
#endif
#if __has_embed(<d.bin> unknown_standard_looking_parameter) != __STDC_EMBED_NOT_FOUND__
#error "unsupported parameter"
#endif

// The standard treats __has_embed as if it were the name of a defined macro.
#if !defined(__has_embed) || !defined __has_embed
#error "defined"
#endif
#ifndef __has_embed
#error "ifdef"
#endif

// The parenthesized tokens are processed as the third form of #embed: macros first.
#define NAME <d.bin>
#define ONE limit(1)
#if __has_embed(NAME ONE) != __STDC_EMBED_FOUND__
#error "third form"
#endif

// In an expression of #if.
#if __has_embed(<d.bin>) && !__has_embed(<does-not-exist.bin>) && __has_embed(<d.bin>) == __has_embed("d.bin")
#else
#error "expression"
#endif
