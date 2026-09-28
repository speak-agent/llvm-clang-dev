# llvm-clang-dev

Clang and LLVM **frontend libraries** (23.1.0), built by **mcpp** on **openkal** — the same toolchain,
C library (openkal-musl) and C++ runtime (libc++) that mcpp-built programs such as mcppls use, so the
libraries link into them in process. No CMake: mcpp is the build system, after the pattern of
`openkal-musl` and `openkal-llvm-runtime`.

| Directory | What |
|---|---|
| `llvm/` | upstream llvm-project at `UPSTREAM-REV`, the subset these libraries need (`llvm/`, `clang/`, `libc/` headers, `third-party/siphash`); byte for byte, no patches |
| `llvm-generated/` | what upstream's CMake would generate: configuration headers (`tools/gen_config.py`) and every TableGen output (`tools/gen_tablegen.py`) |
| `tools/tblgen/` | mcpp workspace building llvm-min-tblgen, llvm-tblgen (option emitters only) and clang-tblgen, used to regenerate `llvm-generated/` |
| `mcpp.toml` | the package `llvm.clang-dev`: the frontend libraries |
| `codegen/mcpp.toml` | the package `llvm.codegen-dev`: Clang CodeGen, the LLVM optimizer, code generator and object writers for x86-64 and AArch64. Separate because mcpp links every object of a library into its consumers: a program that only reads C++ stays its size |
| `tools/smoke`, `tools/codegen-smoke` | the smallest programs over each package |

Regenerating after an upstream bump:

```
python3 tools/gen_config.py
python3 tools/gen_tablegen.py      # builds the tblgen tools with mcpp, then runs the 223 steps
```

Part of the MC++ work (Sunrisepeak/mcpp-safe): this package is `E-IDX-1` of its milestone plan.
