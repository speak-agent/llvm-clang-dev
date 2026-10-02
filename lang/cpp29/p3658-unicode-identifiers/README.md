# P3658R1 Adjust identifiers following the new Unicode recommendations (C++2d, a defect report against all modes)

Part of the C++26 / C++29 line S4 of the MC++ plan (ML.3, phase I node MF.2). Branch `ml/s4-preprocessor`.

| | |
|---|---|
| Paper | [P3658R1](https://wg21.link/P3658R1): identifiers are XID_Start/XID_Continue plus ID_Compat_Math_Start/ID_Compat_Math_Continue (UAX #31's mathematical compatibility notation profile: `∇f`, `x²`, `C∞`), a DR against all C++ modes |
| Source | **backport** of llvm/llvm-project `2f6ec89938` "[Clang] Implement P3658R1" (#212131, 2026-07-28, after the 23.1 branch), the three source files unchanged but for two names 23.1 has under older ones |
| Commit | `f14d380` |
| Option | none: the characters were accepted in every C++ mode since 2022 (llvm/llvm-project#54732), as a Clang extension. What the commit changes is the warning: in C++ before C++2d it is "a C++2d extension" (`-Wc++2d-extensions`, was `-Wmathematical-notation-identifier-extension`), in C++2d it is off and `-Wpre-c++2d-compat` says "incompatible with C++ standards before C++2d". C stays "a Clang extension" |
| Status | complete |
| Tests | 4 files (upstream's `clang/test/Lexer/unicode.c` is a C file with RUN lines; its C++ checks are re-written here): `identifiers.cpp` (the paper's table in C++2d), `extension-cxx23.cpp`, `compat.cpp`, `invalid.cpp` |

## What the backport had to adapt (the two differences from upstream's text)

- `DiagnosticIDs::getCompatDiagId` is `getCXXCompatDiagId` in 23.1 (renamed by #216693, after the branch).
- `EscapeSingleCodepointForDiagnostic` is `codepointAsHexString` in 23.1: the message keeps 23.1's `<U+XXXX>`, so the
  `defm mathematical_notation` message reads `mathematical notation character <U+%0> in an identifier is`.

`UnicodeCharSets.h` is upstream's, byte for byte (comments only: Unicode 18.0's `ID_Compat_Math_*`). Upstream's
`ReleaseNotes.md`, `cxx_status.html` and `unicode.c` changes are not in this fork's `llvm/` subset.

## Differences from MC++'s own front end

| Case | Clang fork | MC++ front end | Follows the paper |
|---|---|---|---|
| the profile's characters in every mode | one identifier, as before | one identifier, as before | same |
| a use before C++2d | warning "a C++2d extension" | gate diagnostic naming `c++29:unicode-identifier-recommendations` and P3658R1 (error at level deny, MC1) | the paper is a DR: strictly the characters are valid in every mode, so neither is a conformance matter; both tell the user |
| emoji (`🜅`), a continue-only character at the start (`₉`, `²`) | invalid | invalid | same |
