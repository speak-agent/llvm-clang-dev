// RUN: verify
// P3733R1 More named universal character escapes (Clang 23.1 baseline): a C++29 test of the harness.
// expected-no-diagnostics

constexpr char32_t lf = U'\N{LF}';
static_assert(lf == U'\n');
