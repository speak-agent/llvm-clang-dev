// Compile a C++ source to an x86-64 or AArch64 object file with Clang's CodeGen, in process:
//   codegen-smoke <triple> <input.cpp> <output.o> [cc1 arguments...]
#include <clang/Basic/DiagnosticOptions.h>
#include <clang/CodeGen/CodeGenAction.h>
#include <clang/Frontend/CompilerInstance.h>
#include <clang/Frontend/CompilerInvocation.h>
#include <clang/Frontend/TextDiagnosticPrinter.h>
#include <llvm/Support/TargetSelect.h>
#include <llvm/Support/VirtualFileSystem.h>
#include <llvm/Support/raw_ostream.h>
#include <cstdio>
#include <memory>
#include <string>
#include <vector>

extern "C" {
void LLVMInitializeX86TargetInfo();
void LLVMInitializeX86Target();
void LLVMInitializeX86TargetMC();
void LLVMInitializeX86AsmPrinter();
void LLVMInitializeX86AsmParser();
void LLVMInitializeAArch64TargetInfo();
void LLVMInitializeAArch64Target();
void LLVMInitializeAArch64TargetMC();
void LLVMInitializeAArch64AsmPrinter();
void LLVMInitializeAArch64AsmParser();
}

int main(int argc, char** argv) {
    if (argc < 4) {
        std::fprintf(stderr, "usage: codegen-smoke <triple> <input.cpp> <output.o> [cc1 arguments...]\n");
        return 2;
    }
    LLVMInitializeX86TargetInfo(); LLVMInitializeX86Target(); LLVMInitializeX86TargetMC();
    LLVMInitializeX86AsmPrinter(); LLVMInitializeX86AsmParser();
    LLVMInitializeAArch64TargetInfo(); LLVMInitializeAArch64Target(); LLVMInitializeAArch64TargetMC();
    LLVMInitializeAArch64AsmPrinter(); LLVMInitializeAArch64AsmParser();

    std::vector<std::string> args { "-triple", argv[1], "-emit-obj", "-O2", "-std=c++23", "-x", "c++", argv[2], "-o", argv[3] };
    for (int i = 4; i < argc; ++i) args.push_back(argv[i]);
    std::vector<const char*> cargs;
    for (auto& a : args) cargs.push_back(a.c_str());

    clang::DiagnosticOptions diagOptions;
    auto* printer = new clang::TextDiagnosticPrinter(llvm::errs(), diagOptions);
    auto vfs = llvm::vfs::getRealFileSystem();
    auto diags = clang::CompilerInstance::createDiagnostics(*vfs, diagOptions, printer, true);
    auto invocation = std::make_shared<clang::CompilerInvocation>();
    if (!clang::CompilerInvocation::CreateFromArgs(*invocation, cargs, *diags, argv[0])) return 1;
    clang::CompilerInstance instance { invocation };
    instance.setVirtualFileSystem(vfs);
    instance.createDiagnostics(printer, false);
    clang::EmitObjAction action;
    const bool ok { instance.ExecuteAction(action) };
    std::printf("%s: %s -> %s\n", ok ? "OK" : "FAILED", argv[2], argv[3]);
    return ok ? 0 : 1;
}
