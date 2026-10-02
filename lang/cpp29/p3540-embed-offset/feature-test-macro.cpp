// RUN: verify
// expected-no-diagnostics
// P3540R3 raises __cpp_pp_embed (the value is the editors', not yet known: it is P1967R14's, 202502L).
#ifndef __cpp_pp_embed
#error "__cpp_pp_embed"
#endif
static_assert(__cpp_pp_embed >= 202502L);
