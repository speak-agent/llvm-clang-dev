# llvm-clang-dev

Clang and LLVM **frontend libraries** (23.1.0), built by **mcpp** on **openkal** — the same toolchain,
C library (openkal-musl) and C++ runtime (libc++) that mcpp-built programs such as mcppls use, so the
libraries link into them in process. No CMake: mcpp is the build system, after the pattern of
`openkal-musl` and `openkal-llvm-runtime`.

| Directory | What |
|---|---|
| `llvm/` | upstream llvm-project at `UPSTREAM-REV`, the subset these libraries need (`llvm/`, `clang/`, `libc/` headers, `third-party/siphash`); byte for byte, no patches |
| `llvm-generated/` | what upstream's CMake would generate: configuration headers (`tools/gen_config.py`; per platform in `platform/<os>/`) and every TableGen output (`tools/gen_tablegen.py`) |
| `tools/tblgen/` | mcpp workspace building llvm-min-tblgen, llvm-tblgen (option emitters only) and clang-tblgen, used to regenerate `llvm-generated/` |
| `mcpp.toml` | the package `llvm.clang-dev`: the frontend libraries |
| `codegen/mcpp.toml` | the package `llvm.codegen-dev`: Clang CodeGen, the LLVM optimizer, code generator and object writers for x86-64 and AArch64. Separate because mcpp links every object of a library into its consumers: a program that only reads C++ stays its size |
| `driver/mcpp.toml` | the package `llvm.clang-driver`: clang itself -- `clang_main`, cc1 and cc1as in process (upstream's `clang/tools/driver`), FrontendTool; the consumer provides `main()` and registers the targets |
| `tools/smoke`, `tools/codegen-smoke`, `tools/driver-smoke` | the smallest programs over each package; `driver-smoke` is a working clang |

The compiler runs on openkal (`LLVM_HOST_TRIPLE` x86_64-unknown-linux-musl) and compiles, when a
command names no target, for x86_64-unknown-linux-gnu (`LLVM_DEFAULT_TARGET_TRIPLE`), as xim's LLVM
does: MC++'s compiler serves as the llvm toolchain of a glibc Linux, and a build tool that passes
`--no-default-config` for a native build must get that target, not the compiler's own C library
(since packaging revision 23.1.0.3; 23.1.0.4 adds the Windows and macOS targets below).

## Platforms

One source, three openkal targets, all cross-built from Linux (`mcpp build --target ...`):

| Target | What the compiler sees | Configuration |
|---|---|---|
| linux-x64 (`x86_64-linux-gnu`) | `__linux__`, openkal-musl | `llvm-generated/platform/linux` |
| win32-x64 (`x86_64-windows-gnu`) | a PE object compiled as `x86_64-pc-cygwin` with `__CYGWIN__` removed: `__unix__` and none of `__linux__`, `__CYGWIN__`, `_WIN32`; openkal-musl | `llvm-generated/platform/windows`, and `openkal-host.h` forced into this package's sources: LLVM's host code reads the platform as Linux's, which openkal-musl implements. `CLANG_BUILD_STATIC` (in its `llvm-config.h`, so every program that includes the headers agrees) and the ABI-breaking-checks guard off (a weak definition in every unit, which COFF does not merge). Paths in Windows' style (a path there has a drive, `C:/Users/x`): a `llvm/Support/Path.h` written from upstream's, whose native style is Windows' where `__MCPP_TARGET_WINDOWS__` is defined as where `_WIN32` is, with `/` preferred; the platform directory comes before `llvm/llvm/include`, so every program that includes the headers reads the same one |
| darwin-arm64 (`aarch64-macos`) | `__APPLE__`, Darwin's integer types, openkal-musl, the kernel's own calls | `llvm-generated/platform/macos`; `port/include/darwin/` declares the few Darwin functions LLVM's `__APPLE__` code names, `port/src/Darwin.cpp` defines them over the kernel's system calls; `port/include/darwin/openkal-host.h` gives the 64-bit limits the typedefs' type (openkal-musl's are `long`, its `int64_t` is `long long`) |

`__APPLE__` stays defined on macOS, in the libraries and in their consumers alike: `RWMutex.h` and
libc++ lay out types by it. On Windows, where the difference is only which host functions get compiled,
the libraries read the platform as Linux's and their consumers need not (the headers do not lay out
anything by `__linux__`).

A COFF link reports undefined references in objects it later discards, which an ELF link does not:
`port/src/Unsupported.cpp` defines, weakly, the three TransformUtils functions `lib/Frontend/Offloading`
names. The smoke program parses a module interface on each platform (`module=m ... errors=0`); CI
cross-builds it, runs the Windows one under wine, and runs both on their own runners.

Regenerating after an upstream bump:

```
python3 tools/gen_config.py
python3 tools/gen_tablegen.py      # builds the tblgen tools with mcpp, then runs the 223 steps
```

Part of the MC++ work (Sunrisepeak/mcpp-safe): this package is `E-IDX-1` of its milestone plan.
