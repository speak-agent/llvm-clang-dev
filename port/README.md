# port

Code this package adds to upstream, as openkal-musl's `port/` does. Upstream sources under
`../llvm/` are never edited; what they need and this build leaves out is supplied here.

| File | What | Why |
|---|---|---|
| `src/OMPIRBuilderSubset.cpp` | `OpenMPIRBuilder::getOpenMPDefaultSimdAlign`, verbatim from upstream | `OMPIRBuilder.cpp` needs LLVM's optimizer; clang's `ASTContext` calls only this static member |
| `src/Unsupported.cpp` | `InstrProfCorrelator::get` (fails with `unable_to_correlate_profile`), `InstrProfCorrelatorImpl<T>::classof` (false), `MCSFrameEmitter::emit`/`encodeFuncOffset` (no .sframe); `appendToCompilerUsed`, `appendToGlobalCtors`, `appendToGlobalDtors` (a fatal error: code generation) | `InstrProfCorrelator.cpp` and `MCSFrame.cpp` need LLVM's DWARF reader; the frontend never correlates profiles or writes object files |
| `src/Darwin.cpp`, `include/darwin/` | openkal's macOS target only: `mach_thread_self` (Darwin's `thread_selfid`), `sysctl`/`sysctlbyname`, `_NSGetExecutablePath` (`proc_info`), `gethostuuid` -- each the kernel's system call; `_NSGetEnviron` (musl's `environ`), `copyfile` (`COPYFILE_DATA`: read and written), `clonefile` (`ENOTSUP`: LLVM copies), `pthread_set_qos_class_self_np` (accepted, a hint), `sys_icache_invalidate`; the declarations LLVM's `__APPLE__` code includes | openkal-macos issues the kernel's calls itself and links two names of the system's library; LLVM's Darwin code names a few more |
