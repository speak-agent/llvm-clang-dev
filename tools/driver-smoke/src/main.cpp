// clang's main, as upstream's llvm-driver-template.cpp.in writes it, with the two back ends
// registered first (llvm/Config/Targets.def is empty in these packages).
#include <llvm/Support/InitLLVM.h>
#include <llvm/Support/LLVMDriver.h>

int clang_main(int argc, char** argv, const llvm::ToolContext&);

extern "C" {
void LLVMInitializeX86TargetInfo(); void LLVMInitializeX86Target(); void LLVMInitializeX86TargetMC();
void LLVMInitializeX86AsmPrinter(); void LLVMInitializeX86AsmParser();
void LLVMInitializeAArch64TargetInfo(); void LLVMInitializeAArch64Target(); void LLVMInitializeAArch64TargetMC();
void LLVMInitializeAArch64AsmPrinter(); void LLVMInitializeAArch64AsmParser();
}

int main(int argc, char** argv) {
    llvm::InitLLVM init { argc, argv };
    LLVMInitializeX86TargetInfo(); LLVMInitializeX86Target(); LLVMInitializeX86TargetMC();
    LLVMInitializeX86AsmPrinter(); LLVMInitializeX86AsmParser();
    LLVMInitializeAArch64TargetInfo(); LLVMInitializeAArch64Target(); LLVMInitializeAArch64TargetMC();
    LLVMInitializeAArch64AsmPrinter(); LLVMInitializeAArch64AsmParser();
    return clang_main(argc, argv, { argv[0], nullptr, false });
}
