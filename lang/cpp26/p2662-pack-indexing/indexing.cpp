// RUN: verify
// P2662R3 Pack indexing (Clang 23.1 baseline): the harness's own check that a verify test passes.
// expected-no-diagnostics

template <class... T> constexpr auto second(T... t) { return t...[1]; }
static_assert(second(1, 2, 3) == 2);

template <class... T> using First = T...[0];
static_assert(__is_same(First<int, long>, int));
