# llvm-clang-dev

Clang and LLVM **frontend libraries** (23.1.0), built by **mcpp** on **openkal** — the same toolchain,
C library (openkal-musl) and C++ runtime (libc++) that mcpp-built programs such as mcppls use, so the
libraries link into them in process. No CMake: mcpp is the build system, after the pattern of
`openkal-musl` and `openkal-llvm-runtime`.

| Directory | What |
|---|---|
| `llvm/` | upstream llvm-project at `UPSTREAM-REV`, the subset these libraries need (`llvm/`, `clang/`, `libc/` headers, `third-party/siphash`); byte for byte but for the upstream fixes listed under Backports |
| `llvm-generated/` | what upstream's CMake would generate: configuration headers (`tools/gen_config.py`; per platform in `platform/<os>/`) and every TableGen output (`tools/gen_tablegen.py`), the resource directory's generated intrinsics headers among them (`clang-lib/Headers/`: `arm_neon.h` and the other ARM, AArch64 and RISC-V ones, which `clang/lib/Headers` does not hold; since 23.1.0.5) |
| `tools/tblgen/` | mcpp workspace building llvm-min-tblgen, llvm-tblgen (option emitters only) and clang-tblgen, used to regenerate `llvm-generated/` |
| `mcpp.toml` | the package `llvm.clang-dev`: the frontend libraries |
| `codegen/mcpp.toml` | the package `llvm.codegen-dev`: Clang CodeGen, the LLVM optimizer, code generator and object writers for x86-64 and AArch64. Separate because mcpp links every object of a library into its consumers: a program that only reads C++ stays its size |
| `driver/mcpp.toml` | the package `llvm.clang-driver`: clang itself -- `clang_main`, cc1 and cc1as in process (upstream's `clang/tools/driver`), FrontendTool; the consumer provides `main()` and registers the targets |
| `tools/smoke`, `tools/codegen-smoke`, `tools/driver-smoke` | the smallest programs over each package; `driver-smoke` is a working clang |

The compiler runs on openkal (`LLVM_HOST_TRIPLE` x86_64-unknown-linux-musl) and compiles, when a
command names no target, for x86_64-unknown-linux-gnu (`LLVM_DEFAULT_TARGET_TRIPLE`), as xim's LLVM
does: MC++'s compiler serves as the llvm toolchain of a glibc Linux, and a build tool that passes
`--no-default-config` for a native build must get that target, not the compiler's own C library
(since packaging revision 23.1.0.3; 23.1.0.4 adds the Windows and macOS targets below). On Windows
the default target is MSVC's, `x86_64-pc-windows-msvc`, as xim's LLVM there has (since 23.1.0.9): mcpp
passes `--no-default-config` for a std module and gives the compiler MSVC's toolset and STL, which the
MinGW triple the program itself runs as does not build for.

## Backports

Upstream commits after `UPSTREAM-REV` that `llvm/` carries, each unchanged (but where its row says a name differs):

| Commit | Since | What it fixes |
|---|---|---|
| [`5277447`](https://github.com/llvm/llvm-project/commit/52774473867e49b5891ab9381accf4e5a3ce0024) (#219151, llvm/llvm-project#218152) | 23.1.0.6 | `std::align_val_t` declared inside `extern "C++"` in a named module (MSVC's STL builds its `std` module so) was not taken as the one Clang declares implicitly -- which 23.1 puts in `std`'s lookup table (#187347) -- and every use of it was ambiguous: MSVC's `std.ixx` did not compile. `clang/lib/Sema/SemaDecl.cpp`, one line. |
| [`2f6ec89`](https://github.com/llvm/llvm-project/commit/2f6ec89938aa12ba5190477032b974524c956b54) (#212131, P3658R1; branch `ml/s4-preprocessor`, commit `f14d380`) | unreleased | C++ identifiers follow UAX #31's mathematical compatibility notation profile (`∇f`, `x²`), a defect report against all C++ modes: Clang had accepted the characters since 2022 as an extension, and now says they are a C++2d extension (`-Wc++2d-extensions`) before C++2d and `-Wpre-c++2d-compat` in it. `Lexer.cpp`, `UnicodeCharSets.h` (comments), `DiagnosticLexKinds.td`; two names differ from upstream's text because 23.1 has them under older ones (`getCXXCompatDiagId`, `codepointAsHexString`; see `lang/cpp29/p3658-unicode-identifiers/README.md`). |

## Language features (lang/)

C++26 and C++29 core-language papers that Clang 23.1 lacks, one directory per paper under `lang/<generation>/`
(`lang/README.md`: the harness; `lang/run.py` runs every test with the clang this repository builds). Each paper's
`README.md` names its commits, where it came from and its option.

Line S4 (branch `ml/s4-preprocessor`): the preprocessor and lexer papers.

| Paper | Source | Option | Changed files (under `llvm/clang`) |
|---|---|---|---|
| P1967R14 `#embed` (C++26): `lang/cpp26/p1967-embed` | ours, on Clang's C23 `#embed`; `__cpp_pp_embed`, no extension warning in C++26, `__has_include` in `__has_embed` an error, `__has_embed`'s `limit` fix | `-std=c++2c` | `lib/Lex/PPDirectives.cpp`, `lib/Lex/PPMacroExpansion.cpp`, `lib/Frontend/InitPreprocessor.cpp`, `include/clang/Lex/Preprocessor.h`, `include/clang/Basic/DiagnosticLexKinds.td` |
| P3540R3 `offset` (C++2d): `lang/cpp29/p3540-embed-offset` | ours, `offset` is `clang::offset` | `-std=c++2d` | `lib/Lex/PPDirectives.cpp` |
| P2843R3 preprocessing is never undefined (C++26): `lang/cpp26/p2843-preprocessing-never-undefined` | ours (upstream's was reverted twice and is not in LLVM main) | `-std=c++2c`; warnings `-Wpreprocessing-undefined` | `lib/Lex/PPDirectives.cpp`, `include/clang/Basic/DiagnosticLexKinds.td`, `DiagnosticGroups.td` |
| P3658R1 identifiers (C++2d, a DR against all modes): `lang/cpp29/p3658-unicode-identifiers` | backport of LLVM `2f6ec89938` (Backports above) | warnings by mode | `lib/Lex/Lexer.cpp`, `lib/Lex/UnicodeCharSets.h`, `include/clang/Basic/DiagnosticLexKinds.td` |

Every change to a `.td` file regenerates `llvm-generated/` (`tools/gen_tablegen.py`): diagnostic ids are numbered
across all components, so a new diagnostic touches every `Diagnostic*Kinds.inc`; two branches that both add
diagnostics merge by regenerating, not by merging the generated files.

## Platforms

One source, three openkal targets, all cross-built from Linux (`mcpp build --target ...`):

| Target | What the compiler sees | Configuration |
|---|---|---|
| linux-x64 (`x86_64-linux-gnu`) | `__linux__`, openkal-musl | `llvm-generated/platform/linux` |
| win32-x64 (`x86_64-windows-gnu`) | a PE object compiled as `x86_64-pc-cygwin` with `__CYGWIN__` removed: `__unix__` and none of `__linux__`, `__CYGWIN__`, `_WIN32`; openkal-musl | `llvm-generated/platform/windows`, and `openkal-host.h` forced into this package's sources: LLVM's host code reads the platform as Linux's, which openkal-musl implements. `CLANG_BUILD_STATIC` (in its `llvm-config.h`, so every program that includes the headers agrees) and the ABI-breaking-checks guard off (a weak definition in every unit, which COFF does not merge). Paths in Windows' style (a path there has a drive, `C:/Users/x`): a `llvm/Support/Path.h` written from upstream's, whose native style is Windows' where `__MCPP_TARGET_WINDOWS__` is defined as where `_WIN32` is, with `/` preferred; the platform directory comes before `llvm/llvm/include`, so every program that includes the headers reads the same one |
| darwin-arm64 (`aarch64-macos`) | `__APPLE__`, Darwin's integer types, openkal-musl, the kernel's own calls | `llvm-generated/platform/macos`; `port/include/darwin/` declares the few Darwin functions LLVM's `__APPLE__` code names, `port/src/Darwin.cpp` defines them over the kernel's system calls; `port/include/darwin/openkal-host.h` gives the 64-bit limits and the `INT64_C`/`UINT64_C` constants the typedefs' type (openkal-musl's are `long`, its `int64_t` is `long long`; the constants since 23.1.0.7, where the code generator's `SrcOp(INT64_C(0))` was ambiguous) |

`__APPLE__` stays defined on macOS, in the libraries and in their consumers alike: `RWMutex.h` and
libc++ lay out types by it. On Windows, where the difference is only which host functions get compiled,
the libraries read the platform as Linux's and their consumers need not (the headers do not lay out
anything by `__linux__`).

A COFF link reports undefined references in objects it later discards, which an ELF link does not:
`port/src/Unsupported.cpp` defines, weakly, the three TransformUtils functions `lib/Frontend/Offloading`
names. The smoke program parses a module interface on each platform (`module=m ... errors=0`); CI
cross-builds it, runs the Windows one under wine, and runs both on their own runners. Since 23.1.0.7
CI also cross-builds `tools/driver-smoke` (clang in process over the code generator, what MC++'s
compiler is built from) for both targets, and on each runner it reports Clang 23.1 and compiles an
object for that platform.
Since 23.1.0.8 `_NSGetExecutablePath` (macOS) takes the kernel's 0 for PROC_PIDPATHINFO as the
success it is (it took it for a failure, and every program was left without its own path: clang's
driver then found neither its resource directory nor its configuration files); CI checks that the
macOS driver reports its own directory, and that on Windows, started by its absolute path with
`-no-canonical-prefixes`, it places its resource directory beside itself (LLVM, built as for Linux
there, has no `/proc/self/exe`).
Since 23.1.0.9 the macOS port asks the kernel for the process's identifier (openkal-musl's `getpid`
answers 1 by design, and the kernel's path for process 1 is `/sbin/launchd`), and LLVM's `uname`
calls get Darwin's name and the kernel's release (`kern.osrelease`; openkal-musl names openkal and
its own version, which made the host `arm64-apple-darwin0.19.8`); the Windows default target is
MSVC's (above).
Since 23.1.0.10 LLVM knows the Mach-O subarchitecture `arm64e.x1` that Xcode 27's SDK lists in its
`.tbd` stubs (`targets: [ ..., arm64e.x1-macos, ... ]`): the libraries' part of LLVM's
`[ld64.lld, llvm-otool] Minimal arm64e.x1 support` (llvm/llvm-project#222721), as release/23.x
backported it (532fa5afbe2b and its "Avoid abi break", ee66426152f9; no release has it yet) --
`BinaryFormat/MachO`, `TargetParser/Triple`, `TextAPI/Architecture`, `Object/MachOObjectFile`.
LLVM 22.x and 23.1.2 reject such a stub ("could not load TAPI file ... unknown target"); validated
by speak-agent/llvm-macos27-lab on the `xcode-27` runner image.

Regenerating after an upstream bump:

```
python3 tools/gen_config.py
python3 tools/gen_tablegen.py      # builds the tblgen tools with mcpp, then runs the 223 steps
```

Part of the MC++ work (Sunrisepeak/mcpp-safe): this package is `E-IDX-1` of its milestone plan.
