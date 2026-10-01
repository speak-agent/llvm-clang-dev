//===- Unsupported.cpp - facilities this package leaves out --------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// llvm-clang-dev port. Two upstream sources are left out because they need LLVM's DWARF reader,
// which the frontend libraries do not otherwise carry:
//
//   llvm/lib/ProfileData/InstrProfCorrelator.cpp  correlating a raw profile with debug info
//   llvm/lib/MC/MCSFrame.cpp                     emitting an .sframe section
//
// Objects that stay in (InstrProfReader, MCObjectStreamer, MCAssembler) still name a few of their
// members. Those are defined here to report, in the error channel the caller already handles,
// that the facility is not in this build -- never to pretend to have done the work.
//
// Three functions of LLVM's TransformUtils (ModuleUtils), which this package does not build, are named
// by llvm/lib/Frontend/Offloading (a device image's registration code). An ELF link that discards the
// unused sections forgets those references; a COFF link (openkal's Windows target) reports them first.
// Reaching one without llvm.codegen-dev is a bug, and says so.
//
// Every definition is weak: llvm.codegen-dev compiles the real sources, and a program that links it
// gets those instead.
//
//===----------------------------------------------------------------------===//

#include "llvm/MC/MCSFrame.h"
#include "llvm/ProfileData/InstrProf.h"
#include "llvm/ProfileData/InstrProfCorrelator.h"
#include "llvm/Support/ErrorHandling.h"
#include "llvm/Transforms/Utils/ModuleUtils.h"

using namespace llvm;

[[gnu::weak]] Expected<std::unique_ptr<InstrProfCorrelator>>
InstrProfCorrelator::get(StringRef, ProfCorrelatorKind, const object::BuildIDFetcher *,
                         const ArrayRef<object::BuildID>) {
  return make_error<InstrProfError>(instrprof_error::unable_to_correlate_profile,
                                    "profile correlation is not part of llvm-clang-dev");
}

// No correlator is ever created (get above always fails), so none is of either kind.
template <> [[gnu::weak]] bool InstrProfCorrelatorImpl<uint32_t>::classof(const InstrProfCorrelator *) { return false; }
template <> [[gnu::weak]] bool InstrProfCorrelatorImpl<uint64_t>::classof(const InstrProfCorrelator *) { return false; }

// Reached only when an object file is written with .sframe requested; this package emits no
// object files. Emitting nothing leaves the section out rather than writing a wrong one.
[[gnu::weak]] void MCSFrameEmitter::emit(MCObjectStreamer &) {}
[[gnu::weak]] void MCSFrameEmitter::encodeFuncOffset(MCContext &, uint64_t, SmallVectorImpl<char> &, MCFragment *) {}

// Offloading's registration code, when a device image is wrapped: code generation, llvm.codegen-dev's.
[[gnu::weak]] void llvm::appendToCompilerUsed(Module &, ArrayRef<GlobalValue *>) {
  report_fatal_error("appendToCompilerUsed: LLVM's TransformUtils are llvm.codegen-dev's, not linked");
}
[[gnu::weak]] void llvm::appendToGlobalCtors(Module &, Function *, int, Constant *) {
  report_fatal_error("appendToGlobalCtors: LLVM's TransformUtils are llvm.codegen-dev's, not linked");
}
[[gnu::weak]] void llvm::appendToGlobalDtors(Module &, Function *, int, Constant *) {
  report_fatal_error("appendToGlobalDtors: LLVM's TransformUtils are llvm.codegen-dev's, not linked");
}
