// RUN: verify
// expected-no-diagnostics
// P1967R14 (#embed in C++26): the examples of [cpp.embed.gen] and [cpp.embed.param], with the data files
// next to this test (i.dat: 42; d.bin: 104 101 0 255; data.dat: 1 2 3 4 5 6; jump.wav: 10 11 12 13 14;
// ches.glsl: 97 98; empty.dat: no bytes; 3c.dat: 1).

// [cpp.embed.gen]: the directive is replaced by a comma-delimited list of integer literals.
constexpr int i = {
#embed "i.dat"
}; // well-formed if i.dat produces a single value
static_assert(i == 42);
constexpr int i2 =
#embed "i.dat"
; // also well-formed if i.dat produces a single value
static_assert(i2 == 42);

constexpr unsigned char d[] = {
#embed <d.bin>
};
static_assert(sizeof(d) == 4 && d[0] == 104 && d[1] == 101 && d[2] == 0 && d[3] == 255);

struct s {
  double a, b, c;
  struct { double e, f, g; } x;
  double h, i, j;
};
constexpr s x = {
// well-formed if the directive produces nine or fewer values
#embed "d.bin"
};
static_assert(x.a == 104 && x.c == 0 && x.x.e == 255);

// A "name" resource is searched for next to this file first (and, if not found, as <name>).
constexpr unsigned char sig[] = {
#embed "jump.wav"
};
static_assert(sizeof(sig) == 5);

// [cpp.embed.param.limit]
constexpr unsigned char sound_signature[] = {
// a hypothetical resource capable of expanding to four or more elements
#embed <jump.wav> limit(2+2)
};
static_assert(sizeof(sound_signature) == 4); // ok
static_assert(sound_signature[3] == 13);

constexpr unsigned char beyond[] = {
#embed <data.dat> limit(100) // limit is at most the resource's size
};
static_assert(sizeof(beyond) == 6);

constexpr unsigned char nothing[] = {
  0
#embed <data.dat> limit(0)
};
static_assert(sizeof(nothing) == 1);

// The parameter's tokens are replaced as normal text once, and what they became is not replaced again.
#define LIM 3
constexpr unsigned char by_macro[] = {
#embed <data.dat> limit(LIM)
};
static_assert(sizeof(by_macro) == 3);

// __has_include is fine in the limit of a #embed directive.
constexpr unsigned char by_has_include[] = {
  0,
#embed <data.dat> limit(__has_include("examples.cpp"))
};
static_assert(sizeof(by_has_include) == 2 && by_has_include[1] == 1);

// [cpp.embed.param.prefix], [cpp.embed.param.suffix]
constexpr unsigned char whl[] = {
#embed "ches.glsl" \
  prefix(0xEF, 0xBB, 0xBF, ) /* a sequence of bytes */ \
  suffix(,)
  0
};
// always null terminated, contains the sequence if not empty
constexpr bool is_empty = sizeof(whl) == 1 && whl[0] == '\0';
constexpr bool is_not_empty = sizeof(whl) >= 4
  && whl[sizeof(whl) - 1] == '\0'
  && whl[0] == 0xEF && whl[1] == 0xBB && whl[2] == 0xBF; // (the paper compares with '\xEF', a negative char)
static_assert(is_empty || is_not_empty);
static_assert(is_not_empty && sizeof(whl) == 6);

constexpr unsigned char whl_empty[] = {
#embed "empty.dat" \
  prefix(0xEF, 0xBB, 0xBF, ) \
  suffix(,)
  0
};
static_assert(whl_empty[0] == 0 && sizeof(whl_empty) == 1); // prefix and suffix are ignored when it is empty

// [cpp.embed.param.if.empty]
constexpr int by_limit_zero[] = {
#embed <data.dat> if_empty(42203) limit(0)
};
static_assert(sizeof(by_limit_zero) == sizeof(int) && by_limit_zero[0] == 42203);

constexpr int by_empty[] = {
#embed <empty.dat> if_empty(1, 2)
};
static_assert(sizeof(by_empty) == 2 * sizeof(int) && by_empty[1] == 2);

constexpr int not_empty[] = {
#embed <d.bin> if_empty(42203)
};
static_assert(sizeof(not_empty) == 4 * sizeof(int));

// [cpp.embed.gen]: the whole directive is replaced as normal text, once, in its third form (the paper's
// example, with a THE_ADDITION that makes the list of integers one).
#define prefix(ARG) suffix(ARG)
#define THE_ADDITION , 'x', 'y'
#define THE_RESOURCE "3c.dat"
constexpr unsigned char third[] = {
#embed "3c.dat"        prefix(THE_ADDITION)
};
constexpr unsigned char third_form[] = {
#embed THE_RESOURCE prefix(THE_ADDITION)
};
// both are equivalent to: #embed "3c.dat" suffix(, 'x', 'y')
static_assert(sizeof(third) == 3 && sizeof(third_form) == 3);
static_assert(third[0] == 1 && third[1] == 'x' && third_form[0] == 1 && third_form[2] == 'y');

#if __has_embed("3c.dat") != __STDC_EMBED_FOUND__
#error
#endif

// [cpp.embed.gen]: no tokens at all around an #embed directive that is skipped.
#if 0
#embed <this file does not exist>
#embed <d.bin> limit(this is not an expression)
#endif
