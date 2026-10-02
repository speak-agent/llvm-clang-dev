# P1306R5 expansion statements (`template for`)

Clang 23.1 implements the enumerating (`template for (x : {a, b, c})`) and destructuring (arrays, classes,
tuple-like) forms; the iterating form (a range with `begin()`/`end()`) was a diagnostic ("iterating expansion
statements are not yet supported"). This line completes it:

* `clang/lib/Sema/SemaExpand.cpp`: the `iter` variable (`begin + decltype(begin - begin){i}`), and the expansion
  size, computed as `end - begin` evaluated as a constant expression (the wording builds a consteval lambda that
  counts; `begin + i` already requires a random access iterator, so the two agree), lifetime extension of the range.

The source of the rest is upstream LLVM (the enumerating/destructuring support and the AST nodes
`CXXExpansionStmtPattern`/`CXXExpansionStmtDecl`/`CXXExpansionStmtInstantiation`). bloomberg/clang-p2996's own
implementation (`CXXExpansionStmt` family) is a different design that does not support iterating expansion over
constexpr ranges either (its README: "expansions over constexpr ranges are not supported"), so it is not ported.

Tests: `enumerating.cpp`, `destructuring.cpp`, `iterating.cpp` (run), `errors.cpp` (verify).
