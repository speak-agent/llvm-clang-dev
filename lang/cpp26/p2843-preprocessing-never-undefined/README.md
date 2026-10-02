# P2843R3 Preprocessing is never undefined (C++26)

Part of the C++26 / C++29 line S4 of the MC++ plan (ML.3, phase I node MF.2). Branch `ml/s4-preprocessor`.

| | |
|---|---|
| Paper | [P2843R3](https://wg21.link/P2843R3): what the preprocessor and lexer left undefined is ill-formed (diagnosed) or well-formed |
| Source | **ours**. Upstream implemented it (`42e0cdf2fc`, #192073, 2026-04-16; reverted for a Windows libc++ build failure, `b104dab739`; reapplied with more diagnostics on by default, `22e8c55ccf`, #196989; reverted for LLVM libc, `4979904f7e`, #198641, 2026-05-19) and it is not in LLVM main now (open: #218322 for the keyword part). Neither commit is taken: both made the new warnings default in **every** mode, which is what broke those builds. This is the same checks, behind `-std=c++2c` |
| Commit | `2fb26e6` |
| Option | `-std=c++2c` and later; earlier modes are byte for byte what they were |
| Status | complete for every case of the paper the compiler can diagnose; Clang diagnoses with a **warning** by default (`-Wpreprocessing-undefined`, an error with `-pedantic-errors` or `-Werror=preprocessing-undefined`), which the paper allows ("a conforming implementation may accept ... as long as it issues a diagnostic"). The two cases the paper keeps IFNDR (a `defined` produced by macro replacement, an `#include` whose replaced form is not one of the two) are not made errors |
| Tests | 13 files |

## Case by case

| Clause | The paper | Clang 23.1 | This commit | Test |
|---|---|---|---|---|
| [cpp.predefined]/4 | `#define`/`#undef` of a predefined macro or of `defined`: ill-formed | `defined`: error; the standard's macros Clang defines (`__cplusplus`, `__STDC*`, `__cpp_*`, `__DATE__`, ..., `__has_*`): `-Wbuiltin-macro-redefined` warning, default on | unchanged; `__cpp_pp_embed` joins them | `cpp.predefined.cpp` |
| [cpp.replace.general]/9 | no `#define`/`#undef` of a keyword, an identifier with special meaning (`final import module override post pre`) or an attribute-token; `likely` and `unlikely` may be function-like macros and be undefined | none (`-Wkeyword-macro` and `-Wreserved-attribute-identifier` are off, `#undef` of a keyword was never reported) | warning `ext_pp_cxx26_reserved_macro_name`, not in system headers; an alternative token stays the error it was | `macro.names.cpp` |
| [cpp.replace.general]/13 | a directive in a macro's arguments: ill-formed | `-Wembedded-directive`, only with `-pedantic`; `#include`, `#pragma`, ... an error | a warning for each directive that reaches the directive handler; `#include`, `#pragma` stay errors | `embedded-directives.cpp` |
| [cpp.line]/3, /5 | a number 0 or above 2147483647: ill-formed; a form that is not `# line digit-sequence ["string"]` after replacement: ill-formed | errors for the forms, a warning for tokens after the string, `-pedantic`-only extensions for 0 and a large number | the two numbers are default warnings | `cpp.line.cpp`, `line-zero.cpp`, `line-too-big.cpp`, `line-max.cpp`, `line-compat.cpp` |
| [cpp.stringize]/2 | an invalid string literal (a final backslash): ill-formed; a new-line in a raw string literal is `\n` | warning "ignoring final '\\'" (default); the raw string is `\n` | unchanged | `cpp.stringize.cpp` |
| [cpp.concat]/3 | an invalid token from `##`: ill-formed | error | unchanged | `cpp.concat.cpp` |
| [cpp.include]/4 | tokens after the header name are not concatenated: ill-formed | `-Wextra-tokens` warning (default) | unchanged | `cpp.include.cpp` |
| [cpp.cond] | `defined` malformed: ill-formed; produced by a macro: IFNDR | errors; `-Wexpansion-to-defined` warning | unchanged | `cpp.cond.cpp` |
| [lex.comment] | form feed / vertical tab in `//`: well-formed | accepted | unchanged | `lex.comment.cpp` |

## Differences from MC++'s own front end

MC++ makes every case an error when the feature is on in the file (MC1 level not `deny`), and nothing when it is
not; Clang warns and goes on. Where the result differs beyond severity, which follows the paper:

| Case | Clang fork | MC++ front end | Follows the paper |
|---|---|---|---|
| identifiers with special meaning | `final import module override post pre` | `final import module override`: **no `pre`, `post`** | Clang (the working draft's [lex.name.special] has the six; `pre` and `post` came with contracts) |
| `#undef likely`, `#undef unlikely` | allowed | to check: the draft says "may be defined as function-like macros **and may be undefined**" | Clang |
| the `#endif` of a conditional that was opened inside macro arguments, when its `#else` was taken | not diagnosed (the conditional-block skipper consumes it; the `#if` and `#else` are) | diagnosed (its test: lines 5, 7, 9) | MC++ (every sequence that would act as a directive) |
| `contract_assert` as a macro name | not a keyword in 23.1: not flagged until P2900R14 lands in this fork (line S2) | flagged | MC++ for C++26; Clang follows once the keyword exists |
| `#line 0`, `#line 2147483648` | warning in C++26 | error | both (EWG made it ill-formed; the diagnostic's severity is the implementation's) |
| `#include "a" ""` and other tokens after the header name | warning `-Wextra-tokens` | error | both |
| a `defined` from a macro, an `#include` that is not a header name | warning / error as before | not an error | same (IFNDR in the paper) |
