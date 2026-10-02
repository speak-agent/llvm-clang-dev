# P3540R3 `#embed` `offset` parameter (C++2d, "C++29")

Part of the C++26 / C++29 line S4 of the MC++ plan (ML.3, phase I node MF.2). Branch `ml/s4-preprocessor`.

| | |
|---|---|
| Paper | [P3540R3](https://wg21.link/P3540R3), `#embed` `offset` parameter (C++29, `-std=c++2d`) |
| Source | **ours**, on Clang's `clang::offset` (the vendor spelling of the same parameter: Clang 23.1 and LLVM main have it; GCC has `gnu::offset`); LLVM main says "No" for the paper |
| Commit | `713a6ef` (with P1967R14), 3 lines of `PPDirectives.cpp` |
| Option | `-std=c++2d`: `offset` is accepted as `clang::offset` is. In C++26 and before it is an unknown embed parameter (an error in a directive, 0 in `__has_embed`); `clang::offset` works in every mode, as it did |
| Status | complete |
| Tests | 5 files: `examples.cpp` (the paper's examples and its design: offset before limit in either order, offset 0, an offset at or past the size, `if_empty` with an offset), `errors.cpp`, `cxx26.cpp` (C++26 reads it as unknown), `run.cpp`, `feature-test-macro.cpp` |

The semantics are the paper's resource-count, which Clang's code already had for the vendor spelling: offset is applied
to the resource's size first, then limit (`max(min(limit, size - offset), 0)`), in the directive and in `__has_embed`.
`offset` and `clang::offset` are the same parameter, so both in one directive is "twice". `__offset__` follows the
other `__name__` spellings (accepted).

## Differences from MC++'s own front end

| Case | Clang fork | MC++ front end | Follows the paper |
|---|---|---|---|
| `offset` in a C++26 file | unknown embed parameter, an error (and 0 in `__has_embed`) | read as `offset`, with a gate diagnostic naming `c++29:embed-offset-parameter` and P3540R3 | both reject it as C++26; MC++'s recovery is gentler |
| `clang::offset` | works in every mode | works in every mode, no gate | same |
| `offset(N)`, N at or past the size | empty (`if_empty` used) | empty | same |
