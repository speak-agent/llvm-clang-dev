#!/usr/bin/env python3
"""Fill LLVM's and Clang's CMake configuration templates for openkal (x86_64, musl, libc++).

What CMake's configure step would write, written once here instead: the templates are upstream's
own (`llvm/**/Config/*.cmake`, `*.def.in`, `Version.inc.in`), the answers are this port's, and the
output goes to `llvm-generated/include`, which comes before the upstream include directories.

    tools/gen_config.py            regenerate llvm-generated/include/{llvm,clang}/...

Every HAVE_* answer below was checked against openkal-musl 0.19.2 (the C library a program built
on openkal links): its sources, its port layer and its `[c-abi-absent]` table. An answer that was
not checked is the conservative one (0), so a missing facility is never assumed.
"""
import pathlib
import re
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
UP = ROOT / "llvm"
OUT = ROOT / "llvm-generated" / "include"

VERSION = (23, 1, 0)
# Where the compiler runs (an openkal program: static, musl) and what it compiles for when a command
# names no target. The two differ on purpose: MC++'s compiler is used as the llvm toolchain of a
# Linux distribution's glibc (xim:llvm's layout and default, MC5 section 7), and a build tool that
# passes --no-default-config for a native build gets the host's target, not the compiler's own libc.
TRIPLE = "x86_64-unknown-linux-musl"
DEFAULT_TARGET = "x86_64-unknown-linux-gnu"

values = {
    # Version and identity.
    "LLVM_VERSION_MAJOR": VERSION[0], "LLVM_VERSION_MINOR": VERSION[1], "LLVM_VERSION_PATCH": VERSION[2],
    "PACKAGE_VERSION": "%d.%d.%d" % VERSION, "PACKAGE_NAME": "LLVM", "PACKAGE_STRING": "LLVM %d.%d.%d" % VERSION,
    "PACKAGE_BUGREPORT": "https://github.com/llvm/llvm-project/issues/", "PACKAGE_VENDOR": "",
    "BUG_REPORT_URL": "https://github.com/llvm/llvm-project/issues/",
    "LLVM_DEFAULT_TARGET_TRIPLE": DEFAULT_TARGET, "LLVM_HOST_TRIPLE": TRIPLE, "LLVM_TARGET_TRIPLE_ENV": "",
    "LLVM_NATIVE_ARCH": "X86", "LLVM_ON_UNIX": 1, "LLVM_PLUGIN_EXT": ".so", "LTDL_SHLIB_EXT": ".so",
    "HOST_LINK_VERSION": "", "LLVM_GISEL_COV_PREFIX": "",
    # Features this port turns off: no compression libraries, no network, no JIT helpers.
    "LLVM_ENABLE_THREADS": 1, "LLVM_HAS_ATOMICS": 1, "LLVM_ENABLE_ZLIB": 0, "LLVM_ENABLE_ZSTD": 0,
    "LLVM_ENABLE_LIBXML2": 0, "LLVM_ENABLE_CURL": 0, "LLVM_ENABLE_HTTPLIB": 0, "LLVM_WITH_Z3": 0,
    "LLVM_ENABLE_ABI_BREAKING_CHECKS": 0, "LLVM_ENABLE_REVERSE_ITERATION": 0, "LLVM_FORCE_ENABLE_STATS": 0,
    "LLVM_ENABLE_CRASH_DUMPS": 0, "LLVM_ENABLE_DIA_SDK": 0, "LLVM_ENABLE_TELEMETRY": 0, "LLVM_ENABLE_ONDISK_CAS": 0,
    "LLVM_ENABLE_IO_SANDBOX": 0, "LLVM_ENABLE_DEBUGLOC_TRACKING_COVERAGE": 0, "LLVM_ENABLE_DEBUGLOC_TRACKING_ORIGIN": 0,
    "LLVM_UNREACHABLE_OPTIMIZE": 1, "LLVM_USE_INTEL_JITEVENTS": 0, "LLVM_USE_OPROFILE": 0, "LLVM_USE_PERF": 0,
    "LLVM_SUPPORT_XCODE_SIGNPOSTS": 0, "LLVM_WINDOWS_PREFER_FORWARD_SLASH": 0, "LLVM_GISEL_COV_ENABLED": 0,
    "LLVM_VERSION_PRINTER_SHOW_BUILD_CONFIG": 0, "LLVM_VERSION_PRINTER_SHOW_HOST_TARGET_INFO": 1,
    "LLVM_FORCE_USE_OLD_TOOLCHAIN": 0, "ENABLE_BACKTRACES": 0, "ENABLE_CRASH_OVERRIDES": 0,
    "HAVE_CRASHREPORTER_INFO": 0, "HAVE_CRASHREPORTERCLIENT_H": 0,
    # The C library (openkal-musl 0.19.2).
    "HAVE_BACKTRACE": 0, "BACKTRACE_HEADER": "execinfo.h",   # no <execinfo.h> in musl
    "HAVE_DLOPEN": 0,                                        # static programs: dlopen is a stub that always fails
    "HAVE_REGISTER_FRAME": 0, "HAVE_DEREGISTER_FRAME": 0, "HAVE_UNW_ADD_DYNAMIC_FDE": 0,
    "HAVE__UNWIND_BACKTRACE": 1,                             # libunwind (openkal-llvm-runtime)
    "HAVE_FFI_CALL": 0, "HAVE_FFI_FFI_H": 0, "HAVE_FFI_H": 0,
    "HAVE_FUTIMENS": 1, "HAVE_FUTIMES": 1, "HAVE_GETPAGESIZE": 1, "HAVE_GETRUSAGE": 1, "HAVE_GETAUXVAL": 1,
    "HAVE_LIBEDIT": 0, "HAVE_LIBPFM": 0, "LIBPFM_HAS_FIELD_CYCLES": 0, "HAVE_LIBPSAPI": 0, "HAVE_LIBPTHREAD": 1,
    "HAVE_PTHREAD_GETNAME_NP": 1, "HAVE_PTHREAD_SETNAME_NP": 1, "HAVE_PTHREAD_GET_NAME_NP": 0, "HAVE_PTHREAD_SET_NAME_NP": 0,
    "HAVE_MACH_MACH_H": 0, "HAVE_MALLCTL": 0, "HAVE_MALLINFO": 0, "HAVE_MALLINFO2": 0, "HAVE_MALLOC_MALLOC_H": 0,
    "HAVE_MALLOC_ZONE_STATISTICS": 0,
    "HAVE_POSIX_SPAWN": 1,                                   # port/src/okm_spawn.c
    "HAVE_PREAD": 0,                                         # no pread64 in openkal-musl's dispatcher (ENOSYS)
    "HAVE_PTHREAD_H": 1, "HAVE_PTHREAD_MUTEX_LOCK": 1, "HAVE_PTHREAD_RWLOCK_INIT": 1,
    "HAVE_SBRK": 0, "HAVE_SETENV": 1, "HAVE_SIGALTSTACK": 1, "HAVE_STRERROR_R": 1, "HAVE_SYSCONF": 1,
    "HAVE_SYS_MMAN_H": 1, "HAVE_SYS_IOCTL_H": 1, "HAVE_SYSEXITS_H": 1, "HAVE_UNISTD_H": 1,
    "HAVE_STRUCT_STAT_ST_MTIMESPEC_TV_NSEC": 0, "HAVE_STRUCT_STAT_ST_MTIM_TV_NSEC": 1,
    "HAVE_VALGRIND_VALGRIND_H": 0, "HAVE__CHSIZE_S": 0, "HAVE_BUILTIN_THREAD_POINTER": 1,
    "HAVE_DECL_ARC4RANDOM": 0, "HAVE_DECL_FE_ALL_EXCEPT": 1, "HAVE_DECL_FE_INEXACT": 1, "HAVE_DECL_STRERROR_S": 0,
    "HAVE_ICONV": 0, "HAVE_ICU": 0, "HAVE_WINDOWS_ICU": 0,
    "HAVE_ISATTY": 1, "HAVE_PROC_PID_RUSAGE": 0,
    "strdup": None, "stricmp": None,   # Windows-only spellings
    # Static libraries, no plugins; no native code generation target in this package.
    "LLVM_BUILD_LLVM_DYLIB": 0, "LLVM_BUILD_SHARED_LIBS": 0, "LLVM_ENABLE_DUMP": 0, "LLVM_ENABLE_PLUGINS": 0,
    "LLVM_ENABLE_LLVM_C_EXPORT_ANNOTATIONS": 0, "LLVM_ENABLE_LLVM_EXPORT_ANNOTATIONS": 0, "LLVM_ENABLE_PROFCHECK": 0,
    "LLVM_HAS_LOGF128": 0, "LLVM_HAVE_TFLITE": 0,
    **{k: 0 for k in ["LLVM_NATIVE_ASMPARSER", "LLVM_NATIVE_ASMPRINTER", "LLVM_NATIVE_DISASSEMBLER", "LLVM_NATIVE_TARGET",
                      "LLVM_NATIVE_TARGETINFO", "LLVM_NATIVE_TARGETMC", "LLVM_NATIVE_TARGETMCA"]},
    # Compiler-runtime probes used only by the JIT: none.
    **{k: 0 for k in ["HAVE__ALLOCA", "HAVE___ALLOCA", "HAVE___ASHLDI3", "HAVE___ASHRDI3", "HAVE____CHKSTK",
                      "HAVE___CHKSTK", "HAVE____CHKSTK_MS", "HAVE___CHKSTK_MS", "HAVE___CMPDI2", "HAVE___DIVDI3",
                      "HAVE___FIXDFDI", "HAVE___FIXSFDI", "HAVE___FLOATDIDF", "HAVE___LSHRDI3", "HAVE___MAIN",
                      "HAVE___MODDI3", "HAVE___UDIVDI3", "HAVE___UMODDI3"]},
    # No LLVM code generation targets in this package: the frontend libraries need none.
    **{"LLVM_HAS_%s_TARGET" % t: 0 for t in ["AARCH64", "AMDGPU", "ARC", "ARM", "AVR", "BPF", "CSKY", "DIRECTX",
                                               "HEXAGON", "LANAI", "LOONGARCH", "M68K", "MIPS", "MSP430", "NVPTX",
                                               "POWERPC", "RISCV", "SPARC", "SPIRV", "SYSTEMZ", "VE", "WEBASSEMBLY",
                                               "X86", "XCORE", "XTENSA"]},
    "LLVM_ENUM_TARGETS": "", "LLVM_ENUM_ASM_PRINTERS": "", "LLVM_ENUM_ASM_PARSERS": "", "LLVM_ENUM_DISASSEMBLERS": "",
    "LLVM_ENUM_TARGETMCAS": "", "LLVM_ENUM_EXEGESIS": "",
    "PPC_LINUX_DEFAULT_IEEELONGDOUBLE": 0, "ENABLE_X86_RELAX_RELOCATIONS": 1, "ENABLE_LINKER_BUILD_ID": 0,
    # Clang.
    "CLANG_VERSION": "%d.%d.%d" % VERSION, "CLANG_VERSION_MAJOR": VERSION[0], "CLANG_VERSION_MINOR": VERSION[1],
    "CLANG_VERSION_PATCHLEVEL": VERSION[2], "MAX_CLANG_ABI_COMPAT_VERSION": VERSION[0],
    "CLANG_DEFAULT_PIE_ON_LINUX": 1, "CLANG_ENABLE_CIR": 0, "CLANG_ENABLE_OBJC_REWRITER": 0,
    "CLANG_ENABLE_STATIC_ANALYZER": 0, "CLANG_SPAWN_CC1": 0, "CLANG_USE_EXPERIMENTAL_CONST_INTERP": 0,
    "CLANG_DEFAULT_CXX_STDLIB": "", "CLANG_DEFAULT_LINKER": "", "CLANG_DEFAULT_OBJCOPY": "objcopy",
    "CLANG_DEFAULT_OPENMP_RUNTIME": "libomp", "CLANG_DEFAULT_RTLIB": "", "CLANG_DEFAULT_UNWINDLIB": "",
    "CLANG_INSTALL_LIBDIR_BASENAME": "lib", "CLANG_RESOURCE_DIR": "", "CLANG_SYSTEMZ_DEFAULT_ARCH": "z10",
    "C_INCLUDE_DIRS": "", "DEFAULT_SYSROOT": "", "GCC_INSTALL_PREFIX": "",
    "CLANG_HAVE_DLADDR": 0, "CLANG_HAVE_DLFCN_H": 1, "CLANG_HAVE_LIBXML": 0, "CLANG_HAVE_RLIMITS": 1,
    "CLANG_CONFIG_FILE_SYSTEM_DIR": None, "CLANG_CONFIG_FILE_USER_DIR": None, "CLANG_USE_XCSELECT": None,
    "CLANG_XCSELECT_HOST_SDK_POLICY": None,
}


def render(text: str, path: str) -> str:
    missing = set()

    def value(name):
        if name not in values:
            missing.add(name)
            return None
        return values[name]

    def subst(s):
        s = re.sub(r"\$\{(\w+)\}", lambda m: "" if value(m.group(1)) is None else str(value(m.group(1))), s)
        return re.sub(r"@(\w+)@", lambda m: "" if value(m.group(1)) is None else str(value(m.group(1))), s)

    out = []
    for line in text.splitlines():
        m = re.match(r"^#cmakedefine01\s+(\w+)\s*$", line)
        if m:
            v = value(m.group(1))
            out.append("#define %s %d" % (m.group(1), 1 if v else 0))
            continue
        m = re.match(r"^#cmakedefine\s+(\w+)(.*)$", line)
        if m:
            v = value(m.group(1))
            if v in (None, 0, "", False):
                out.append("/* #undef %s */" % m.group(1))
            else:
                rest = subst(m.group(2))
                out.append("#define %s%s" % (m.group(1), rest if rest.strip() else ""))
            continue
        out.append(subst(line))
    if missing:
        sys.exit("%s: no answer for %s" % (path, ", ".join(sorted(missing))))
    return "\n".join(out) + "\n"


def emit(template: pathlib.Path, output: pathlib.Path):
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(render(template.read_text(), str(template.relative_to(ROOT))))
    print("wrote", output.relative_to(ROOT))


# What depends on the platform the libraries run on: the host and default triples, the native
# architecture, a shared library's extension. On every one the C library is openkal-musl and the
# program an openkal one, so the HAVE_* answers above hold everywhere; these two headers are written
# per platform into llvm-generated/platform/<os>/, which the manifest adds for that target only.
# openkal's Windows target compiles as x86_64-pc-cygwin (a POSIX world, LLVM_ON_UNIX), its macOS
# target as a Darwin one; the default target is what a toolchain on that platform is asked for.
PLATFORMS = {
    "linux": {"LLVM_HOST_TRIPLE": TRIPLE, "LLVM_DEFAULT_TARGET_TRIPLE": DEFAULT_TARGET, "LLVM_NATIVE_ARCH": "X86",
              "LLVM_PLUGIN_EXT": ".so", "LTDL_SHLIB_EXT": ".so"},
    "windows": {"LLVM_HOST_TRIPLE": "x86_64-w64-windows-gnu", "LLVM_DEFAULT_TARGET_TRIPLE": "x86_64-w64-windows-gnu",
                "LLVM_NATIVE_ARCH": "X86", "LLVM_PLUGIN_EXT": ".dll", "LTDL_SHLIB_EXT": ".dll",
                "LLVM_WINDOWS_PREFER_FORWARD_SLASH": 1},
    "macos": {"LLVM_HOST_TRIPLE": "arm64-apple-darwin", "LLVM_DEFAULT_TARGET_TRIPLE": "arm64-apple-macosx",
              "LLVM_NATIVE_ARCH": "AArch64", "LLVM_PLUGIN_EXT": ".dylib", "LTDL_SHLIB_EXT": ".dylib"},
}
PLATFORM_OUT = ROOT / "llvm-generated" / "platform"

cfg = UP / "llvm/include/llvm/Config"
common = dict(values)
for os_name, answers in PLATFORMS.items():
    values.clear()
    values.update(common, **answers)
    for name in ["config.h", "llvm-config.h", "abi-breaking.h"]:
        emit(cfg / (name + ".cmake"), PLATFORM_OUT / os_name / "llvm/Config" / name)
    if os_name == "windows":
        # The check it enforces is a weak definition in every unit that includes it, which upstream
        # leaves out for _WIN32 and __CYGWIN__ (COFF); this PE target has neither macro.
        out = PLATFORM_OUT / os_name / "llvm/Config/abi-breaking.h"
        out.write_text("/* openkal's Windows target: a PE object (tools/gen_config.py). */\n"
                       "#ifndef LLVM_DISABLE_ABI_BREAKING_CHECKS_ENFORCING\n#define LLVM_DISABLE_ABI_BREAKING_CHECKS_ENFORCING 1\n#endif\n"
                       + out.read_text())
        # A PE object with neither _WIN32 nor __ELF__: Clang's export annotation (clang/Support/Compiler.h,
        # which includes this header first) has no case for it. These are static libraries -- what
        # CLANG_BUILD_STATIC says -- for the libraries and for every program that includes their headers.
        out = PLATFORM_OUT / os_name / "llvm/Config/llvm-config.h"
        out.write_text(out.read_text() + "\n/* openkal's Windows target: static libraries (tools/gen_config.py). */\n"
                       "#ifndef CLANG_BUILD_STATIC\n#define CLANG_BUILD_STATIC 1\n#endif\n")
values.clear()
values.update(common)
for stale in ["config.h", "llvm-config.h", "abi-breaking.h"]:
    (OUT / "llvm/Config" / stale).unlink(missing_ok=True)
# A path on openkal's Windows target has a drive (`C:/Users/x`; no name there starts with `/`), which
# LLVM's POSIX rules read as relative, and Clang then prefixes with its working directory. LLVM has
# Windows' rules -- the native style its Path.h picks when _WIN32 is defined, which this target does not
# define. Its Path.h is written here from upstream's with that one condition also true for the target
# (__MCPP_TARGET_WINDOWS__, which every unit built for it has, so the libraries and every program that
# includes the header agree), and '/' preferred (LLVM_WINDOWS_PREFER_FORWARD_SLASH above).
path_h = (UP / "llvm/include/llvm/Support/Path.h").read_text()
condition = "constexpr bool is_style_posix(Style S) {\n  if (S == Style::posix)\n    return true;\n  if (S != Style::native)\n    return false;\n#if defined(_WIN32)"
assert path_h.count(condition) == 1, "upstream Path.h changed: update gen_config.py"
out = PLATFORM_OUT / "windows/llvm/Support/Path.h"
out.parent.mkdir(parents=True, exist_ok=True)
out.write_text("// Written by tools/gen_config.py from upstream's llvm/Support/Path.h: on openkal's Windows target the\n"
               "// native path style is Windows' (a path has a drive), as it is where _WIN32 is defined.\n"
               + path_h.replace(condition, condition.replace("#if defined(_WIN32)", "#if defined(_WIN32) || defined(__MCPP_TARGET_WINDOWS__)")))
print("wrote", out.relative_to(ROOT))

# A header the C library has under another name on a non-Linux target: LLVM's bit.h asks for
# <machine/endian.h> where neither __linux__ nor _WIN32 is defined.
for os_name in ["windows", "macos"]:
    shim = PLATFORM_OUT / os_name / "machine/endian.h"
    shim.parent.mkdir(parents=True, exist_ok=True)
    shim.write_text("// openkal-musl has <endian.h>; LLVM asks for the BSD spelling off Linux.\n#pragma once\n#include <endian.h>\n")
# openkal's Windows target compiles as x86_64-pc-cygwin with __CYGWIN__ taken away: __unix__, and no
# __linux__, __CYGWIN__ or _WIN32. Its C library is openkal-musl, Linux's C interface over openkal's
# kernel layer, which is what LLVM's Linux branches expect; so its host code is read as Linux's. Forced
# in by the manifest for that target (-include), before any source line.
(PLATFORM_OUT / "windows/openkal-host.h").write_text(
    "// Forced in on openkal's Windows target (tools/gen_config.py): LLVM's host code reads the platform\n"
    "// from __linux__, which this world implements through openkal-musl.\n"
    "#ifndef __linux__\n#define __linux__ 1\n#define __linux 1\n#endif\n")
for name in ["Targets.h"]:
    emit(cfg / (name + ".cmake"), OUT / "llvm/Config" / name)
for name in ["Targets.def", "AsmPrinters.def", "AsmParsers.def", "Disassemblers.def", "TargetMCAs.def", "TargetExegesis.def"]:
    emit(cfg / (name + ".in"), OUT / "llvm/Config" / name)
emit(UP / "clang/include/clang/Config/config.h.cmake", OUT / "clang/Config/config.h")
emit(UP / "clang/include/clang/Basic/Version.inc.in", OUT / "clang/Basic/Version.inc")

# llvm/include/llvm/CMakeLists.txt: file(READ InstrumentorRuntimeHelper.h) into a raw string of
# InstrumentorVariables.inc (the Instrumentor pass, in llvm.codegen-dev).
values["LLVM_INSTRUMENTOR_RUNTIME_HELPER"] = (UP / "llvm/include/llvm/Transforms/IPO/InstrumentorRuntimeHelper.h").read_text()
emit(UP / "llvm/include/llvm/Transforms/IPO/InstrumentorVariables.inc.in", OUT / "llvm/Transforms/IPO/InstrumentorVariables.inc")

rev = (ROOT / "UPSTREAM-REV").read_text().split()[0] if (ROOT / "UPSTREAM-REV").exists() else "llvmorg-%d.%d.%d" % VERSION
(OUT / "llvm/Support").mkdir(parents=True, exist_ok=True)
(OUT / "llvm/Support/VCSRevision.h").write_text('#define LLVM_REVISION "%s"\n#define LLVM_REPOSITORY "https://github.com/llvm/llvm-project"\n' % rev)
(OUT / "llvm/Support/Extension.def").write_text("// No statically registered extensions.\n#undef HANDLE_EXTENSION\n")
(ROOT / "llvm-generated/clang-lib/Basic").mkdir(parents=True, exist_ok=True)
(ROOT / "llvm-generated/clang-lib/Basic/VCSVersion.inc").write_text('#define LLVM_REVISION "%s"\n#define LLVM_REPOSITORY "https://github.com/llvm/llvm-project"\n#define CLANG_REVISION "%s"\n#define CLANG_REPOSITORY "https://github.com/llvm/llvm-project"\n' % (rev, rev))
print("wrote VCSRevision.h, Extension.def, VCSVersion.inc")
