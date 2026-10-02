// RUN: verify
// expected-no-diagnostics
// P3540R3 (the offset embed parameter, C++2d): the paper's examples and the rules of its design: offset is
// applied to the resource's size before limit is, offset 0 does nothing, an offset at or past the size
// leaves the resource empty. Data files next to this test: jump.wav: 10 11 12 13 14; single_byte.bin: 7;
// data.dat: 1 2 3 4 5 6; empty.dat: no bytes.

constexpr const unsigned char arr[] = {
  // a hypothetical resource capable of expanding to four or more elements
#embed <jump.wav>
};

constexpr const unsigned char offset_arr[] = {
  // the same hypothetical resource capable of expanding to four or more elements
#embed <jump.wav> offset(2)
};

constexpr const unsigned char offset_limit_arr[] = {
  // the same hypothetical resource capable of expanding to four or more elements
#embed <jump.wav> offset(1) limit(1)
};

static_assert(arr[2] == offset_arr[0]);
static_assert(arr[3] == offset_arr[1]);
static_assert(arr[1] == offset_limit_arr[0]);
static_assert(sizeof(offset_arr) == 3 && sizeof(offset_limit_arr) == 1);

// limit does not shrink the resource before offset: the order of the parameters does not matter.
constexpr unsigned char limit_then_offset[] = {
#embed <jump.wav> limit(2) offset(1)
};
static_assert(sizeof(limit_then_offset) == 2 && limit_then_offset[0] == 11 && limit_then_offset[1] == 12);
constexpr unsigned char limit_beyond[] = {
#embed <jump.wav> limit(3) offset(3)
};
static_assert(sizeof(limit_beyond) == 2 && limit_beyond[0] == 13 && limit_beyond[1] == 14);

// offset(0) does nothing.
constexpr unsigned char zero[] = {
#embed <jump.wav> offset(0)
};
static_assert(sizeof(zero) == 5 && zero[0] == 10);

// The parameter is a constant-expression, its tokens replaced as normal text once.
#define SKIP 1 + 1
constexpr unsigned char expression[] = {
#embed <jump.wav> offset(SKIP)
};
static_assert(sizeof(expression) == 3 && expression[0] == 12);

// At the size, or past it, the resource is empty.
constexpr unsigned char at_size[] = {
  0
#embed <jump.wav> offset(5) prefix(1,) suffix(,2)
};
static_assert(sizeof(at_size) == 1);
constexpr unsigned char past_size[] = {
  0
#embed <jump.wav> offset(500)
};
static_assert(sizeof(past_size) == 1);

// [cpp.embed.param.if.empty]: Given a resource <single_byte.bin> that has an implementation-resource-count of 1,
constexpr int example[] = {
#embed <single_byte.bin> offset(1) if_empty(42203)
};
// is replaced with 42203
static_assert(sizeof(example) == sizeof(int) && example[0] == 42203);

constexpr int not_empty[] = {
#embed <single_byte.bin> offset(0) if_empty(42203)
};
static_assert(sizeof(not_empty) == sizeof(int) && not_empty[0] == 7);

constexpr int offset_is_the_empty_one[] = {
#embed <empty.dat> offset(1) if_empty(1, 2)
};
static_assert(sizeof(offset_is_the_empty_one) == 2 * sizeof(int));

// prefix and suffix go around what is left.
constexpr unsigned char around[] = {
#embed <data.dat> offset(4) prefix(0xAA,) suffix(,0xBB)
};
static_assert(sizeof(around) == 4 && around[0] == 0xAA && around[1] == 5 && around[2] == 6 && around[3] == 0xBB);

// The vendor's spelling (Clang's, GCC has gnu::offset) is the same parameter.
constexpr unsigned char vendor[] = {
#embed <jump.wav> clang::offset(3)
};
static_assert(sizeof(vendor) == 2 && vendor[0] == 13);

// __has_embed: the same resource-count, so an offset makes a resource empty.
#if __has_embed(<jump.wav> offset(1)) != __STDC_EMBED_FOUND__
#error "offset(1)"
#endif
#if __has_embed(<jump.wav> offset(4) limit(100)) != __STDC_EMBED_FOUND__
#error "offset(4)"
#endif
#if __has_embed(<jump.wav> offset(5)) != __STDC_EMBED_EMPTY__
#error "offset(5)"
#endif
#if __has_embed(<jump.wav> offset(1) limit(0)) != __STDC_EMBED_EMPTY__
#error "limit(0)"
#endif
#if __has_embed(<jump.wav> limit(2) offset(2)) != __STDC_EMBED_FOUND__
#error "limit(2) offset(2)"
#endif
