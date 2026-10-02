# P1967R14 `#embed` (C++26)

Part of the C++26 / C++29 line S4 of the MC++ plan (ML.3, phase I node MF.2): the preprocessor and lexer papers.
Branch `ml/s4-preprocessor`.

| | |
|---|---|
| Paper | [P1967R14](https://wg21.link/P1967R14), `#embed` -- a scannable, tooling-friendly binary resource inclusion mechanism (C++26) |
| Source | **ours**, on Clang's C23 `#embed` (`PPDirectives.cpp`, `PPMacroExpansion.cpp`), which 23.1 has in every C++ mode as an extension. LLVM main (2026-10-02, `clang/www/cxx_status.html`) still says "No" for this paper: nothing to backport |
| Commit | `713a6ef` (with P3540R3) |
| Option | `-std=c++2c` and later. Before C++26 `#embed` stays what it was, an extension that works with a warning (now `-Wc++2c-extensions`, "#embed is a C++2c extension"; it was `-Wc23-extensions`, "a Clang extension") |
| Status | complete for the paper; one defect report not done (below) |
| Tests | 9 files, here: `examples.cpp` (every example of [cpp.embed.gen] and [cpp.embed.param], their data files beside), `has-embed.cpp`, `errors.cpp`, `not-found.cpp`, `has-include-in-has-embed.cpp`, `feature-test-macro.cpp`, `cxx23-extension.cpp`, `compat.cpp`, `run.cpp` (compiled, linked, run) |

## What C23's implementation lacked for C++ (and what this commit does)

- **`__cpp_pp_embed`**: defined as `202502L` from C++26 on (GCC does the same; not in earlier modes, where the feature
  is only an extension). P3540R3 raises it with a value the editors choose later: still `202502L` in C++2d.
- **No extension warning in C++26.** The warning is `-Wc++2c-extensions` before it and `-Wpre-c++2c-compat` (off by
  default) in it, through `DiagnosticIDs::getCXXCompatDiagId`, as Clang does for every C++ feature of a standard.
- **`__has_include` in an embed parameter of `__has_embed` is an error** (the paper's example; it is fine in a `#embed`
  directive's `limit`): `Preprocessor::InHasEmbedParameters`, only in C++26 and later.
- **`__has_embed(<r> limit(N))` with N larger than the resource said "empty"** (Clang 23.1 and LLVM main:
  `EvaluateHasEmbed` took a limit larger than what is left for zero). resource-count is the smaller of the two, so
  the resource is found (C23 6.10.3.2 says the same). Fixed for every mode; worth sending upstream.
- Everything else the paper says is what Clang's C23 code already does and the tests check it: the three forms of the
  directive (a `"name"` that is not found next to the file is searched as `<name>`, in the `--embed-dir`s; the third
  form is replaced whole, once), `limit`, `prefix`, `suffix`, `if_empty` (with `limit(0)` making a resource empty),
  the parameters replaced as normal text once, `defined` rejected in `limit`, `__has_embed` giving 0, 1, 2 (an
  unrecognized parameter is not an error there: 0), `__has_embed` as a defined macro, and the elements being `int`s
  that a `constexpr unsigned char[]` takes without narrowing. `__limit__` and the other `__name__` spellings are C's
  (C23 6.10p5): the C++ paper dropped them (4.2.1.4) but expects dual compilers to keep them, and Clang does.

## Not done

- **CWG3013** (an embed parameter name defined as a macro makes `__has_embed(...)` ill-formed; in the working draft
  now, llvm/llvm-project#224769 is open): not in P1967R14, not here.
- `std::embed`-style library features (P3642 and friends) are library papers.

## Differences from MC++'s own front end (`modules/frontend`, branch `worktree-agent-aafc3791c47edde95`)

| Case | Clang fork | MC++ front end | Follows the paper |
|---|---|---|---|
| `__has_embed("r" limit(N))`, N larger than the resource | found (this commit; 23.1 said empty) | found | both now |
| `#embed` where the file's standard or MC1 level does not have it | extension warning (`-Wc++2c-extensions`) and the directive is processed | gate diagnostic naming `c++26:embed` and P1967R14, directive processed | neither contradicts it: the paper does not say what an implementation does before C++26; MC++ gates by MC1 |
| `__cpp_pp_embed` | `202502L` from C++26 | `202502L` when the feature is on | same |
| `__limit__(2)` and other `__name__` spellings | accepted | accepted | same (the paper's grammar has no such spelling; implementations may) |
| `__has_include` in `__has_embed`'s `limit` | error (C++26 and later) | error | same |
