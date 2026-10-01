# lang: C++26 and C++29 core-language features

The papers of C++26 and C++29 that are in the working draft and that Clang 23.1 lacks, implemented in this
fork (MC++'s plan, ML; mcpp-safe's `.agents/docs/2026-09-28-mcxx-milestones-acceptance.md`, ML.3). One
directory per standard generation and one per paper:

```
lang/cpp26/p2996-reflection/     the paper's tests (and notes on where the implementation is)
lang/cpp29/p3097-virtual-contracts/
```

The implementation itself lives where Clang's code is (`llvm/clang/...`); a paper's directory holds its tests
and a `README.md` naming the commits, the source it came from (a backport from LLVM main, a port from
bloomberg/clang-p2996, or ours) and the option it is behind, if any.

## Tests

`lang/run.py --clang <clang> [--ld-path <ld.lld>]` runs every test with the clang this repository builds
(`tools/driver-smoke`); CI runs it in the `build and smoke` job and keeps `lang-report.json`. A test is one
source file whose first comment lines say what to do:

| Line | Meaning |
|---|---|
| `// RUN: verify` | `-fsyntax-only -Xclang -verify`: the file's `expected-error`/`expected-warning`/`expected-note` directives, or `expected-no-diagnostics`, are exactly what clang reports |
| `// RUN: run` | compiled, linked and run; it exits with 0. No C++ library (`-nostdlib++`): it declares the C functions it calls |
| `// ARGS: ...` | further arguments for this file |

The standard is the generation's: `cpp26` is `-std=c++2c`, `cpp29` is `-std=c++2d`. Each paper's tests take its
examples, with the paper's expected outcome. The two baseline papers here (`p2662-pack-indexing`,
`p3733-named-escapes`) are the harness's own checks.

## Branches

Each line of work (ML.3's S1-S6) is developed on its own branch `ml/<line>`; CI builds and tests such a branch
on Linux only, and the other platforms build what is merged into `mcxx`.
