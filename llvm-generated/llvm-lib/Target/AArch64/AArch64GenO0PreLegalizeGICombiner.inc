/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* AArch64O0PreLegalizerCombinerImpl Combiner Match Table                     *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_GICOMBINER_DEPS

#include "llvm/ADT/SparseBitVector.h"
namespace llvm {

extern cl::OptionCategory GICombinerOptionCategory;

} // namespace llvm

#endif // GET_GICOMBINER_DEPS

#ifdef GET_GICOMBINER_TYPES

struct AArch64O0PreLegalizerCombinerImplRuleConfig {
  SparseBitVector<> DisabledRules;

  bool isRuleEnabled(unsigned RuleID) const;
  bool parseCommandLineOption();
  bool setRuleEnabled(StringRef RuleIdentifier);
  bool setRuleDisabled(StringRef RuleIdentifier);
};

static std::optional<uint64_t> getRuleIdxForIdentifier(StringRef RuleIdentifier) {
  uint64_t I;
  // getAtInteger(...) returns false on success
  bool Parsed = !RuleIdentifier.getAsInteger(0, I);
  if (Parsed)
    return I;

#ifndef NDEBUG
  switch (RuleIdentifier.size()) {
  default: break;
  case 9:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "copy_prop", 9) != 0)
      break;
    return 0;	 // "copy_prop"
  case 10:	 // 3 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "mit_bzero", 9) != 0)
        break;
      return 17;	 // "emit_bzero"
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ul_to_shl", 9) != 0)
        break;
      return 1;	 // "mul_to_shl"
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ub_to_add", 9) != 0)
        break;
      return 2;	 // "sub_to_add"
    }
    break;
  case 12:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "not_cmp_fold", 12) != 0)
      break;
    return 9;	 // "not_cmp_fold"
  case 13:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "load_and_mask", 13) != 0)
      break;
    return 8;	 // "load_and_mask"
  case 14:	 // 3 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'c':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "ombine_mem", 10) != 0)
        break;
      switch (RuleIdentifier[11]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+12, "py", 2) != 0)
          break;
        return 14;	 // "combine_memcpy"
      case 's':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+12, "et", 2) != 0)
          break;
        return 16;	 // "combine_memset"
      }
      break;
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ul_by_neg_one", 13) != 0)
        break;
      return 4;	 // "mul_by_neg_one"
    }
    break;
  case 15:	 // 3 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ombine_memmove", 14) != 0)
        break;
      return 15;	 // "combine_memmove"
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "xtending_loads", 14) != 0)
        break;
      return 7;	 // "extending_loads"
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "dempotent_prop", 14) != 0)
        break;
      return 5;	 // "idempotent_prop"
    }
    break;
  case 17:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "add_p2i_to_ptradd", 17) != 0)
      break;
    return 3;	 // "add_p2i_to_ptradd"
  case 19:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "ptr_add_immed_chain", 19) != 0)
      break;
    return 6;	 // "ptr_add_immed_chain"
  case 21:	 // 3 strings to match.
    if (memcmp(RuleIdentifier.data()+0, "combine_", 8) != 0)
      break;
    switch (RuleIdentifier[8]) {
    default: break;
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+9, "oncat_vector", 12) != 0)
        break;
      return 10;	 // "combine_concat_vector"
    case 'm':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+9, "em", 2) != 0)
        break;
      switch (RuleIdentifier[11]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+12, "py_inline", 9) != 0)
          break;
        return 12;	 // "combine_memcpy_inline"
      case 's':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+12, "et_inline", 9) != 0)
          break;
        return 13;	 // "combine_memset_inline"
      }
      break;
    }
    break;
  case 22:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "combine_shuffle_vector", 22) != 0)
      break;
    return 11;	 // "combine_shuffle_vector"
  }
#endif // ifndef NDEBUG

  return std::nullopt;
}
static std::optional<std::pair<uint64_t, uint64_t>> getRuleRangeForIdentifier(StringRef RuleIdentifier) {
  std::pair<StringRef, StringRef> RangePair = RuleIdentifier.split('-');
  if (!RangePair.second.empty()) {
    const auto First = getRuleIdxForIdentifier(RangePair.first);
    const auto Last = getRuleIdxForIdentifier(RangePair.second);
    if (!First || !Last)
      return std::nullopt;
    if (First >= Last)
      report_fatal_error("Beginning of range should be before end of range");
    return {{*First, *Last + 1}};
  }
  if (RangePair.first == "*") {
    return {{0, 18}};
  }
  const auto I = getRuleIdxForIdentifier(RangePair.first);
  if (!I)
    return std::nullopt;
  return {{*I, *I + 1}};
}

bool AArch64O0PreLegalizerCombinerImplRuleConfig::setRuleEnabled(StringRef RuleIdentifier) {
  auto MaybeRange = getRuleRangeForIdentifier(RuleIdentifier);
  if (!MaybeRange)
    return false;
  for (auto I = MaybeRange->first; I < MaybeRange->second; ++I)
    DisabledRules.reset(I);
  return true;
}

bool AArch64O0PreLegalizerCombinerImplRuleConfig::setRuleDisabled(StringRef RuleIdentifier) {
  auto MaybeRange = getRuleRangeForIdentifier(RuleIdentifier);
  if (!MaybeRange)
    return false;
  for (auto I = MaybeRange->first; I < MaybeRange->second; ++I)
    DisabledRules.set(I);
  return true;
}

static std::vector<std::string> AArch64O0PreLegalizerCombinerOption;
static cl::list<std::string> AArch64O0PreLegalizerCombinerDisableOption(
    "aarch64o0prelegalizercombiner-disable-rule",
    cl::desc("Disable one or more combiner rules temporarily in the AArch64O0PreLegalizerCombiner pass"),
    cl::CommaSeparated,
    cl::Hidden,
    cl::cat(GICombinerOptionCategory),
    cl::callback([](const std::string &Str) {
      AArch64O0PreLegalizerCombinerOption.push_back(Str);
    }));
static cl::list<std::string> AArch64O0PreLegalizerCombinerOnlyEnableOption(
    "aarch64o0prelegalizercombiner-only-enable-rule",
    cl::desc("Disable all rules in the AArch64O0PreLegalizerCombiner pass then re-enable the specified ones"),
    cl::Hidden,
    cl::cat(GICombinerOptionCategory),
    cl::callback([](const std::string &CommaSeparatedArg) {
      StringRef Str = CommaSeparatedArg;
      AArch64O0PreLegalizerCombinerOption.push_back("*");
      do {
        auto X = Str.split(",");
        AArch64O0PreLegalizerCombinerOption.push_back(("!" + X.first).str());
        Str = X.second;
      } while (!Str.empty());
    }));


bool AArch64O0PreLegalizerCombinerImplRuleConfig::isRuleEnabled(unsigned RuleID) const {
    return  !DisabledRules.test(RuleID);
}
bool AArch64O0PreLegalizerCombinerImplRuleConfig::parseCommandLineOption() {
  for (StringRef Identifier : AArch64O0PreLegalizerCombinerOption) {
    bool Enabled = Identifier.consume_front("!");
    if (Enabled && !setRuleEnabled(Identifier))
      return false;
    if (!Enabled && !setRuleDisabled(Identifier))
      return false;
  }
  return true;
}


#endif // GET_GICOMBINER_TYPES

#ifdef GET_GICOMBINER_TYPES

const unsigned MAX_SUBTARGET_PREDICATES = 0;
using PredicateBitset = llvm::Bitset<MAX_SUBTARGET_PREDICATES>;

#endif // GET_GICOMBINER_TYPES

#ifdef GET_GICOMBINER_CLASS_MEMBERS

PredicateBitset AvailableModuleFeatures;
mutable PredicateBitset AvailableFunctionFeatures;
PredicateBitset getAvailableFeatures() const {
  return AvailableModuleFeatures | AvailableFunctionFeatures;
}
PredicateBitset
computeAvailableModuleFeatures(const AArch64Subtarget *Subtarget) const;
PredicateBitset
computeAvailableFunctionFeatures(const AArch64Subtarget *Subtarget,
                                 const MachineFunction *MF) const;
void setupGeneratedPerFunctionState(MachineFunction &MF) override;

#endif // GET_GICOMBINER_CLASS_MEMBERS

#ifdef GET_GICOMBINER_CLASS_MEMBERS

  mutable MatcherState State;
  typedef ComplexRendererFns(AArch64O0PreLegalizerCombinerImpl::*ComplexMatcherMemFn)(MachineOperand &) const;
  typedef void(AArch64O0PreLegalizerCombinerImpl::*CustomRendererFn)(MachineInstrBuilder &, const MachineInstr &, int) const;
  const ExecInfoTy<PredicateBitset, ComplexMatcherMemFn, CustomRendererFn> ExecInfo;
  static AArch64O0PreLegalizerCombinerImpl::ComplexMatcherMemFn ComplexPredicateFns[];
  static AArch64O0PreLegalizerCombinerImpl::CustomRendererFn CustomRenderers[];
  bool testImmPredicate_I64(unsigned PredicateID, int64_t Imm) const override;
  bool testImmPredicate_APInt(unsigned PredicateID, const APInt &Imm) const override;
  bool testImmPredicate_APFloat(unsigned PredicateID, const APFloat &Imm) const override;
  const uint8_t *getMatchTable() const override;
  bool testMIPredicate_MI(unsigned PredicateID, const MachineInstr &MI, const MatcherState &State) const override;
  bool testMOPredicate_MO(unsigned PredicateID, const MachineOperand &MO, const MatcherState &State) const override;
  bool testSimplePredicate(unsigned PredicateID) const override;
  bool runCustomAction(unsigned FnID, const MatcherState &State, NewMIVector &OutMIs) const override;

#endif // GET_GICOMBINER_CLASS_MEMBERS

#ifdef GET_GICOMBINER_IMPL

// LLT Objects.
enum {
  GILLT_s1,
};
const static size_t NumTypeObjects = 1;
const static LLT TypeObjects[] = {
  LLT::scalar(1),
};

// Bits for subtarget features that participate in instruction matching.
enum SubtargetFeatureBits : uint8_t {
};

PredicateBitset AArch64O0PreLegalizerCombinerImpl::
computeAvailableModuleFeatures(const AArch64Subtarget *Subtarget) const {
  PredicateBitset Features{};
  return Features;
}

void AArch64O0PreLegalizerCombinerImpl::setupGeneratedPerFunctionState(MachineFunction &MF) {
  AvailableFunctionFeatures = computeAvailableFunctionFeatures((const AArch64Subtarget *)&MF.getSubtarget(), &MF);
}
PredicateBitset AArch64O0PreLegalizerCombinerImpl::
computeAvailableFunctionFeatures(const AArch64Subtarget *Subtarget, const MachineFunction *MF) const {
  PredicateBitset Features{};
  return Features;
}

// Feature bitsets.
enum {
  GIFBS_Invalid,
};
constexpr static PredicateBitset FeatureBitsets[] {
  {}, // GIFBS_Invalid
};

// ComplexPattern predicates.
enum {
  GICP_Invalid,
};
// See constructor for table contents

AArch64O0PreLegalizerCombinerImpl::ComplexMatcherMemFn
AArch64O0PreLegalizerCombinerImpl::ComplexPredicateFns[] = {
  nullptr, // GICP_Invalid
};

bool AArch64O0PreLegalizerCombinerImpl::testMIPredicate_MI(unsigned PredicateID, const MachineInstr & MI, const MatcherState &State) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool AArch64O0PreLegalizerCombinerImpl::testMOPredicate_MO(unsigned PredicateID, const MachineOperand & MO, const MatcherState &State) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool AArch64O0PreLegalizerCombinerImpl::testImmPredicate_I64(unsigned PredicateID, int64_t Imm) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool AArch64O0PreLegalizerCombinerImpl::testImmPredicate_APFloat(unsigned PredicateID, const APFloat & Imm) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool AArch64O0PreLegalizerCombinerImpl::testImmPredicate_APInt(unsigned PredicateID, const APInt & Imm) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
enum {
  GICXXPred_Simple_IsRule0Enabled = GICXXPred_Invalid + 1,
  GICXXPred_Simple_IsRule1Enabled,
  GICXXPred_Simple_IsRule2Enabled,
  GICXXPred_Simple_IsRule3Enabled,
  GICXXPred_Simple_IsRule4Enabled,
  GICXXPred_Simple_IsRule5Enabled,
  GICXXPred_Simple_IsRule6Enabled,
  GICXXPred_Simple_IsRule7Enabled,
  GICXXPred_Simple_IsRule8Enabled,
  GICXXPred_Simple_IsRule9Enabled,
  GICXXPred_Simple_IsRule10Enabled,
  GICXXPred_Simple_IsRule11Enabled,
  GICXXPred_Simple_IsRule12Enabled,
  GICXXPred_Simple_IsRule13Enabled,
  GICXXPred_Simple_IsRule14Enabled,
  GICXXPred_Simple_IsRule15Enabled,
  GICXXPred_Simple_IsRule16Enabled,
  GICXXPred_Simple_IsRule17Enabled,
};

bool AArch64O0PreLegalizerCombinerImpl::testSimplePredicate(unsigned Predicate) const {
    return RuleConfig.isRuleEnabled(Predicate - GICXXPred_Invalid - 1);
}
// Custom renderers.
enum {
  GICR_Invalid,
};
AArch64O0PreLegalizerCombinerImpl::CustomRendererFn
AArch64O0PreLegalizerCombinerImpl::CustomRenderers[] = {
  nullptr, // GICR_Invalid
};

static bool AArch64O0PreLegalizerCombinerImpl_canMatchOpcode(unsigned Opc) {
  switch (Opc) {
  case TargetOpcode::G_MEMCPY:
  case TargetOpcode::G_MEMMOVE:
  case TargetOpcode::G_MEMSET:
  case TargetOpcode::G_MEMCPY_INLINE:
  case TargetOpcode::G_MEMSET_INLINE:
  case TargetOpcode::G_MUL:
  case TargetOpcode::G_SUB:
  case TargetOpcode::COPY:
  case TargetOpcode::G_FABS:
  case TargetOpcode::G_FCANONICALIZE:
  case TargetOpcode::G_FREEZE:
  case TargetOpcode::G_ADD:
  case TargetOpcode::G_AND:
  case TargetOpcode::G_CONCAT_VECTORS:
  case TargetOpcode::G_LOAD:
  case TargetOpcode::G_PTR_ADD:
  case TargetOpcode::G_SEXTLOAD:
  case TargetOpcode::G_SHUFFLE_VECTOR:
  case TargetOpcode::G_XOR:
  case TargetOpcode::G_ZEXTLOAD:
    return true;
  default:
    return false;
  }
}

bool AArch64O0PreLegalizerCombinerImpl::tryCombineAllImpl(MachineInstr &I) const {
  if (!AArch64O0PreLegalizerCombinerImpl_canMatchOpcode(I.getOpcode()))
    return false;
  const PredicateBitset AvailableFeatures = getAvailableFeatures();
  State.MIs.clear();
  State.MIs.push_back(&I);
  if (executeMatchTable(*this, State, ExecInfo, B, getMatchTable(), Helper.getTII(), MRI, Helper.getTRI(), Helper.getRBI(), AvailableFeatures, /*CoverageInfo*/ nullptr)) {
    return true;
  }

  return false;
}

enum {
  GICXXCustomAction_GICombiner0 = GICXXCustomAction_Invalid + 1,
  GICXXCustomAction_GICombiner1,
  GICXXCustomAction_GICombiner2,
  GICXXCustomAction_GICombiner3,
  GICXXCustomAction_GICombiner4,
  GICXXCustomAction_GICombiner5,
  GICXXCustomAction_GICombiner6,
  GICXXCustomAction_GICombiner7,
  GICXXCustomAction_GICombiner8,
  GICXXCustomAction_GICombiner9,
  GICXXCustomAction_GICombiner10,
  GICXXCustomAction_GICombiner11,
  GICXXCustomAction_GICombiner12,
};
bool AArch64O0PreLegalizerCombinerImpl::runCustomAction(unsigned ApplyID, const MatcherState &State, NewMIVector &OutMIs) const {
  Helper.getBuilder().setInstrAndDebugLoc(*State.MIs[0]);
  switch(ApplyID) {
  case GICXXCustomAction_GICombiner0:{
    // Match Patterns
    if(![&](){return Helper.matchCombineCopy(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineCopy(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner1:{
    unsigned GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineMulToShl(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineMulToShl(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner2:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineSubToAdd(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnNoErase(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner3:{
    std::pair<Register, bool> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineAddP2IToPtrAdd(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineAddP2IToPtrAdd(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner4:{
    PtrAddChain GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchPtrAddImmedChain(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyPtrAddImmedChain(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner5:{
    PreferredTuple GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineExtendingLoads(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineExtendingLoads(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner6:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineLoadWithAndMask(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner7:{
    SmallVector<Register> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchNotCmp(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyNotCmp(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner8:{
    SmallVector<Register> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineConcatVectors(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineConcatVectors(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner9:{
    SmallVector<Register> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineShuffleVector(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineShuffleVector(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner10:{
    MemCpyFamilyLoweringInfo GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineMemCpyFamily(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineMemCpyFamily(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner11:{
    MemCpyFamilyLoweringInfo GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineMemCpyFamily(*State.MIs[0], GIMatchData_matchinfo,
                                                           CInfo.EnableOpt ? 0 : 32);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineMemCpyFamily(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner12:{
    // Match Patterns
    if(![&](){return llvm::AArch64GISelUtils::matchEmitBZero(*State.MIs[0], MRI,
                                                                   Libcalls,
                                                                   CInfo.EnableMinSize);}()) {
      return false;
    }
    // Apply Patterns
    llvm::AArch64GISelUtils::applyEmitBZero(*State.MIs[0], B);
    return true;
  }
  }
  llvm_unreachable("Unknown Apply Action");
}
#if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
#define GIMT_Encode2(Val) uint8_t(Val), uint8_t((Val) >> 8)
#define GIMT_Encode4(Val) uint8_t(Val), uint8_t((Val) >> 8), uint8_t((Val) >> 16), uint8_t((Val) >> 24)
#define GIMT_Encode8(Val) uint8_t(Val), uint8_t((Val) >> 8), uint8_t((Val) >> 16), uint8_t((Val) >> 24),  uint8_t(uint64_t(Val) >> 32), uint8_t(uint64_t(Val) >> 40), uint8_t(uint64_t(Val) >> 48), uint8_t(uint64_t(Val) >> 56)
#else
#define GIMT_Encode2(Val) uint8_t((Val) >> 8), uint8_t(Val)
#define GIMT_Encode4(Val) uint8_t((Val) >> 24), uint8_t((Val) >> 16), uint8_t((Val) >> 8), uint8_t(Val)
#define GIMT_Encode8(Val) uint8_t(uint64_t(Val) >> 56), uint8_t(uint64_t(Val) >> 48), uint8_t(uint64_t(Val) >> 40), uint8_t(uint64_t(Val) >> 32),  uint8_t((Val) >> 24), uint8_t((Val) >> 16), uint8_t((Val) >> 8), uint8_t(Val)
#endif
const uint8_t *AArch64O0PreLegalizerCombinerImpl::getMatchTable() const {
  constexpr static uint8_t MatchTable0[] = {
     /*    0 */ GIM_SwitchOpcode, /*MI*/0, /*[*/GIMT_Encode2(20), GIMT_Encode2(309), /*)*//*default:*//*Label 20*/ GIMT_Encode4(1521),
     /*   10 */ /*TargetOpcode::COPY*//*Label 0*/ GIMT_Encode4(1166), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  150 */ /*TargetOpcode::G_ADD*//*Label 1*/ GIMT_Encode4(1178),
     /*  154 */ /*TargetOpcode::G_SUB*//*Label 2*/ GIMT_Encode4(1190),
     /*  158 */ /*TargetOpcode::G_MUL*//*Label 3*/ GIMT_Encode4(1212), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  186 */ /*TargetOpcode::G_AND*//*Label 4*/ GIMT_Encode4(1264), GIMT_Encode4(0),
     /*  194 */ /*TargetOpcode::G_XOR*//*Label 5*/ GIMT_Encode4(1276), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  270 */ /*TargetOpcode::G_CONCAT_VECTORS*//*Label 6*/ GIMT_Encode4(1288), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  286 */ /*TargetOpcode::G_FREEZE*//*Label 7*/ GIMT_Encode4(1300), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  326 */ /*TargetOpcode::G_LOAD*//*Label 8*/ GIMT_Encode4(1330),
     /*  330 */ /*TargetOpcode::G_SEXTLOAD*//*Label 9*/ GIMT_Encode4(1342),
     /*  334 */ /*TargetOpcode::G_ZEXTLOAD*//*Label 10*/ GIMT_Encode4(1354), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  810 */ /*TargetOpcode::G_FABS*//*Label 11*/ GIMT_Encode4(1366), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  822 */ /*TargetOpcode::G_FCANONICALIZE*//*Label 12*/ GIMT_Encode4(1396), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  890 */ /*TargetOpcode::G_PTR_ADD*//*Label 13*/ GIMT_Encode4(1426), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  954 */ /*TargetOpcode::G_SHUFFLE_VECTOR*//*Label 14*/ GIMT_Encode4(1438), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /* 1142 */ /*TargetOpcode::G_MEMCPY*//*Label 15*/ GIMT_Encode4(1450),
     /* 1146 */ /*TargetOpcode::G_MEMCPY_INLINE*//*Label 16*/ GIMT_Encode4(1462),
     /* 1150 */ /*TargetOpcode::G_MEMMOVE*//*Label 17*/ GIMT_Encode4(1474),
     /* 1154 */ /*TargetOpcode::G_MEMSET*//*Label 18*/ GIMT_Encode4(1486), GIMT_Encode4(0),
     /* 1162 */ /*TargetOpcode::G_MEMSET_INLINE*//*Label 19*/ GIMT_Encode4(1509),
     /* 1166 */ // Label 0: @1166
     /* 1166 */ GIM_Try, /*On fail goto*//*Label 21*/ GIMT_Encode4(1177), // Rule ID 0 //
     /* 1171 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule0Enabled),
     /* 1174 */   // MIs[0] d
     /* 1174 */   // No operand predicates
     /* 1174 */   // MIs[0] s
     /* 1174 */   // No operand predicates
     /* 1174 */   // Combiner Rule #0: copy_prop
     /* 1174 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner0),
     /* 1177 */ // Label 21: @1177
     /* 1177 */ GIM_Reject,
     /* 1178 */ // Label 1: @1178
     /* 1178 */ GIM_Try, /*On fail goto*//*Label 22*/ GIMT_Encode4(1189), // Rule ID 3 //
     /* 1183 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule3Enabled),
     /* 1186 */   // Combiner Rule #3: add_p2i_to_ptradd; wip_match_opcode 'G_ADD'
     /* 1186 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner3),
     /* 1189 */ // Label 22: @1189
     /* 1189 */ GIM_Reject,
     /* 1190 */ // Label 2: @1190
     /* 1190 */ GIM_Try, /*On fail goto*//*Label 23*/ GIMT_Encode4(1211), // Rule ID 2 //
     /* 1195 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule2Enabled),
     /* 1198 */   // MIs[0] d
     /* 1198 */   // No operand predicates
     /* 1198 */   // MIs[0] op1
     /* 1198 */   // No operand predicates
     /* 1198 */   // MIs[0] c
     /* 1198 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
     /* 1202 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /* 1206 */   // MIs[1] imm
     /* 1206 */   // No operand predicates
     /* 1206 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1208 */   // Combiner Rule #2: sub_to_add
     /* 1208 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner2),
     /* 1211 */ // Label 23: @1211
     /* 1211 */ GIM_Reject,
     /* 1212 */ // Label 3: @1212
     /* 1212 */ GIM_Try, /*On fail goto*//*Label 24*/ GIMT_Encode4(1252), // Rule ID 4 //
     /* 1217 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule4Enabled),
     /* 1220 */   // MIs[0] dst
     /* 1220 */   GIM_RecordRegType, /*MI*/0, /*Op*/0, /*TempTypeIdx*/255,
     /* 1224 */   // MIs[0] x
     /* 1224 */   // No operand predicates
     /* 1224 */   // MIs[0] Operand 2
     /* 1224 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 255,
     /* 1228 */   GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/255,
     /* 1231 */   GIR_BuildConstant, /*TempRegID*/0, /*Val*/GIMT_Encode8(0),
     /* 1241 */   // Combiner Rule #4: mul_by_neg_one
     /* 1241 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SUB),
     /* 1244 */   GIR_RootToRootCopy, /*OpIdx*/0, // dst
     /* 1246 */   GIR_AddSimpleTempRegister, /*InsnID*/0, /*TempRegID*/0,
     /* 1249 */   GIR_RootToRootCopy, /*OpIdx*/1, // x
     /* 1251 */   GIR_EraseRootFromParent_Done,
     /* 1252 */ // Label 24: @1252
     /* 1252 */ GIM_Try, /*On fail goto*//*Label 25*/ GIMT_Encode4(1263), // Rule ID 1 //
     /* 1257 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule1Enabled),
     /* 1260 */   // MIs[0] d
     /* 1260 */   // No operand predicates
     /* 1260 */   // MIs[0] op1
     /* 1260 */   // No operand predicates
     /* 1260 */   // MIs[0] op2
     /* 1260 */   // No operand predicates
     /* 1260 */   // Combiner Rule #1: mul_to_shl
     /* 1260 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner1),
     /* 1263 */ // Label 25: @1263
     /* 1263 */ GIM_Reject,
     /* 1264 */ // Label 4: @1264
     /* 1264 */ GIM_Try, /*On fail goto*//*Label 26*/ GIMT_Encode4(1275), // Rule ID 12 //
     /* 1269 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule8Enabled),
     /* 1272 */   // Combiner Rule #8: load_and_mask; wip_match_opcode 'G_AND'
     /* 1272 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner6),
     /* 1275 */ // Label 26: @1275
     /* 1275 */ GIM_Reject,
     /* 1276 */ // Label 5: @1276
     /* 1276 */ GIM_Try, /*On fail goto*//*Label 27*/ GIMT_Encode4(1287), // Rule ID 13 //
     /* 1281 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule9Enabled),
     /* 1284 */   // Combiner Rule #9: not_cmp_fold; wip_match_opcode 'G_XOR'
     /* 1284 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner7),
     /* 1287 */ // Label 27: @1287
     /* 1287 */ GIM_Reject,
     /* 1288 */ // Label 6: @1288
     /* 1288 */ GIM_Try, /*On fail goto*//*Label 28*/ GIMT_Encode4(1299), // Rule ID 14 //
     /* 1293 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule10Enabled),
     /* 1296 */   // Combiner Rule #10: combine_concat_vector; wip_match_opcode 'G_CONCAT_VECTORS'
     /* 1296 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner8),
     /* 1299 */ // Label 28: @1299
     /* 1299 */ GIM_Reject,
     /* 1300 */ // Label 7: @1300
     /* 1300 */ GIM_Try, /*On fail goto*//*Label 29*/ GIMT_Encode4(1329), // Rule ID 5 //
     /* 1305 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule5Enabled),
     /* 1308 */   // MIs[0] dst
     /* 1308 */   // No operand predicates
     /* 1308 */   // MIs[0] src
     /* 1308 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1312 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FREEZE),
     /* 1316 */   // MIs[1] __idempotent_prop_match_0.x
     /* 1316 */   // No operand predicates
     /* 1316 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1321 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1323 */   // Combiner Rule #5: idempotent_prop @ [__idempotent_prop_match_0[0]]
     /* 1323 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1328 */   GIR_EraseRootFromParent_Done,
     /* 1329 */ // Label 29: @1329
     /* 1329 */ GIM_Reject,
     /* 1330 */ // Label 8: @1330
     /* 1330 */ GIM_Try, /*On fail goto*//*Label 30*/ GIMT_Encode4(1341), // Rule ID 9 //
     /* 1335 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule7Enabled),
     /* 1338 */   // Combiner Rule #7: extending_loads; wip_match_opcode 'G_LOAD'
     /* 1338 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner5),
     /* 1341 */ // Label 30: @1341
     /* 1341 */ GIM_Reject,
     /* 1342 */ // Label 9: @1342
     /* 1342 */ GIM_Try, /*On fail goto*//*Label 31*/ GIMT_Encode4(1353), // Rule ID 10 //
     /* 1347 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule7Enabled),
     /* 1350 */   // Combiner Rule #7: extending_loads; wip_match_opcode 'G_SEXTLOAD'
     /* 1350 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner5),
     /* 1353 */ // Label 31: @1353
     /* 1353 */ GIM_Reject,
     /* 1354 */ // Label 10: @1354
     /* 1354 */ GIM_Try, /*On fail goto*//*Label 32*/ GIMT_Encode4(1365), // Rule ID 11 //
     /* 1359 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule7Enabled),
     /* 1362 */   // Combiner Rule #7: extending_loads; wip_match_opcode 'G_ZEXTLOAD'
     /* 1362 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner5),
     /* 1365 */ // Label 32: @1365
     /* 1365 */ GIM_Reject,
     /* 1366 */ // Label 11: @1366
     /* 1366 */ GIM_Try, /*On fail goto*//*Label 33*/ GIMT_Encode4(1395), // Rule ID 6 //
     /* 1371 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule5Enabled),
     /* 1374 */   // MIs[0] dst
     /* 1374 */   // No operand predicates
     /* 1374 */   // MIs[0] src
     /* 1374 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1378 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FABS),
     /* 1382 */   // MIs[1] __idempotent_prop_match_0.x
     /* 1382 */   // No operand predicates
     /* 1382 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1387 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1389 */   // Combiner Rule #5: idempotent_prop @ [__idempotent_prop_match_0[1]]
     /* 1389 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1394 */   GIR_EraseRootFromParent_Done,
     /* 1395 */ // Label 33: @1395
     /* 1395 */ GIM_Reject,
     /* 1396 */ // Label 12: @1396
     /* 1396 */ GIM_Try, /*On fail goto*//*Label 34*/ GIMT_Encode4(1425), // Rule ID 7 //
     /* 1401 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule5Enabled),
     /* 1404 */   // MIs[0] dst
     /* 1404 */   // No operand predicates
     /* 1404 */   // MIs[0] src
     /* 1404 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1408 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCANONICALIZE),
     /* 1412 */   // MIs[1] __idempotent_prop_match_0.x
     /* 1412 */   // No operand predicates
     /* 1412 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1417 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1419 */   // Combiner Rule #5: idempotent_prop @ [__idempotent_prop_match_0[2]]
     /* 1419 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1424 */   GIR_EraseRootFromParent_Done,
     /* 1425 */ // Label 34: @1425
     /* 1425 */ GIM_Reject,
     /* 1426 */ // Label 13: @1426
     /* 1426 */ GIM_Try, /*On fail goto*//*Label 35*/ GIMT_Encode4(1437), // Rule ID 8 //
     /* 1431 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule6Enabled),
     /* 1434 */   // Combiner Rule #6: ptr_add_immed_chain; wip_match_opcode 'G_PTR_ADD'
     /* 1434 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner4),
     /* 1437 */ // Label 35: @1437
     /* 1437 */ GIM_Reject,
     /* 1438 */ // Label 14: @1438
     /* 1438 */ GIM_Try, /*On fail goto*//*Label 36*/ GIMT_Encode4(1449), // Rule ID 15 //
     /* 1443 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule11Enabled),
     /* 1446 */   // Combiner Rule #11: combine_shuffle_vector; wip_match_opcode 'G_SHUFFLE_VECTOR'
     /* 1446 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner9),
     /* 1449 */ // Label 36: @1449
     /* 1449 */ GIM_Reject,
     /* 1450 */ // Label 15: @1450
     /* 1450 */ GIM_Try, /*On fail goto*//*Label 37*/ GIMT_Encode4(1461), // Rule ID 18 //
     /* 1455 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule14Enabled),
     /* 1458 */   // MIs[0] dst_addr
     /* 1458 */   // No operand predicates
     /* 1458 */   // MIs[0] src_addr
     /* 1458 */   // No operand predicates
     /* 1458 */   // MIs[0] size
     /* 1458 */   // No operand predicates
     /* 1458 */   // MIs[0] tailcall
     /* 1458 */   // No operand predicates
     /* 1458 */   // Combiner Rule #14: combine_memcpy
     /* 1458 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner11),
     /* 1461 */ // Label 37: @1461
     /* 1461 */ GIM_Reject,
     /* 1462 */ // Label 16: @1462
     /* 1462 */ GIM_Try, /*On fail goto*//*Label 38*/ GIMT_Encode4(1473), // Rule ID 16 //
     /* 1467 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule12Enabled),
     /* 1470 */   // MIs[0] dst_addr
     /* 1470 */   // No operand predicates
     /* 1470 */   // MIs[0] src_addr
     /* 1470 */   // No operand predicates
     /* 1470 */   // MIs[0] size
     /* 1470 */   // No operand predicates
     /* 1470 */   // Combiner Rule #12: combine_memcpy_inline
     /* 1470 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner10),
     /* 1473 */ // Label 38: @1473
     /* 1473 */ GIM_Reject,
     /* 1474 */ // Label 17: @1474
     /* 1474 */ GIM_Try, /*On fail goto*//*Label 39*/ GIMT_Encode4(1485), // Rule ID 19 //
     /* 1479 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule15Enabled),
     /* 1482 */   // MIs[0] dst_addr
     /* 1482 */   // No operand predicates
     /* 1482 */   // MIs[0] src_addr
     /* 1482 */   // No operand predicates
     /* 1482 */   // MIs[0] size
     /* 1482 */   // No operand predicates
     /* 1482 */   // MIs[0] tailcall
     /* 1482 */   // No operand predicates
     /* 1482 */   // Combiner Rule #15: combine_memmove
     /* 1482 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner11),
     /* 1485 */ // Label 39: @1485
     /* 1485 */ GIM_Reject,
     /* 1486 */ // Label 18: @1486
     /* 1486 */ GIM_Try, /*On fail goto*//*Label 40*/ GIMT_Encode4(1497), // Rule ID 20 //
     /* 1491 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule16Enabled),
     /* 1494 */   // MIs[0] dst_addr
     /* 1494 */   // No operand predicates
     /* 1494 */   // MIs[0] value
     /* 1494 */   // No operand predicates
     /* 1494 */   // MIs[0] size
     /* 1494 */   // No operand predicates
     /* 1494 */   // MIs[0] tailcall
     /* 1494 */   // No operand predicates
     /* 1494 */   // Combiner Rule #16: combine_memset
     /* 1494 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner11),
     /* 1497 */ // Label 40: @1497
     /* 1497 */ GIM_Try, /*On fail goto*//*Label 41*/ GIMT_Encode4(1508), // Rule ID 21 //
     /* 1502 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule17Enabled),
     /* 1505 */   // MIs[0] dst_addr
     /* 1505 */   // No operand predicates
     /* 1505 */   // MIs[0] value
     /* 1505 */   // No operand predicates
     /* 1505 */   // MIs[0] size
     /* 1505 */   // No operand predicates
     /* 1505 */   // MIs[0] tailcall
     /* 1505 */   // No operand predicates
     /* 1505 */   // Combiner Rule #17: emit_bzero
     /* 1505 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner12),
     /* 1508 */ // Label 41: @1508
     /* 1508 */ GIM_Reject,
     /* 1509 */ // Label 19: @1509
     /* 1509 */ GIM_Try, /*On fail goto*//*Label 42*/ GIMT_Encode4(1520), // Rule ID 17 //
     /* 1514 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule13Enabled),
     /* 1517 */   // MIs[0] dst_addr
     /* 1517 */   // No operand predicates
     /* 1517 */   // MIs[0] value
     /* 1517 */   // No operand predicates
     /* 1517 */   // MIs[0] size
     /* 1517 */   // No operand predicates
     /* 1517 */   // Combiner Rule #13: combine_memset_inline
     /* 1517 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner10),
     /* 1520 */ // Label 42: @1520
     /* 1520 */ GIM_Reject,
     /* 1521 */ // Label 20: @1521
     /* 1521 */ GIM_Reject,
     /* 1522 */ }; // Size: 1522 bytes
  return MatchTable0;
}
#undef GIMT_Encode2
#undef GIMT_Encode4
#undef GIMT_Encode8


#endif // GET_GICOMBINER_IMPL

#ifdef GET_GICOMBINER_CONSTRUCTOR_INITS

AvailableModuleFeatures(computeAvailableModuleFeatures(&STI)),
AvailableFunctionFeatures()

#endif // GET_GICOMBINER_CONSTRUCTOR_INITS

#ifdef GET_GICOMBINER_CONSTRUCTOR_INITS

, State(0),
ExecInfo(TypeObjects, NumTypeObjects, FeatureBitsets, ComplexPredicateFns, CustomRenderers)

#endif // GET_GICOMBINER_CONSTRUCTOR_INITS

