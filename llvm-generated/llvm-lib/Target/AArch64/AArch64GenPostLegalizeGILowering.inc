/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* AArch64PostLegalizerLoweringImpl Combiner Match Table                      *|
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

struct AArch64PostLegalizerLoweringImplRuleConfig {
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
  case 3:	 // 6 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'd':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "up", 2) != 0)
        break;
      return 0;	 // "dup"
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "xt", 2) != 0)
        break;
      return 3;	 // "ext"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ev", 2) != 0)
        break;
      return 2;	 // "rev"
    case 't':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "rn", 2) != 0)
        break;
      return 6;	 // "trn"
    case 'u':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "zp", 2) != 0)
        break;
      return 5;	 // "uzp"
    case 'z':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ip", 2) != 0)
        break;
      return 4;	 // "zip"
    }
    break;
  case 7:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "fullrev", 7) != 0)
      break;
    return 7;	 // "fullrev"
  case 11:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "shuf_to_ins", 11) != 0)
      break;
    return 8;	 // "shuf_to_ins"
  case 12:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "form_duplane", 12) != 0)
      break;
    return 1;	 // "form_duplane"
  case 14:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "lower_mulv2s64", 14) != 0)
      break;
    return 18;	 // "lower_mulv2s64"
  case 15:	 // 3 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "djust_icmp_imm", 14) != 0)
        break;
      return 10;	 // "adjust_icmp_imm"
    case 'f':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "orm_truncstore", 14) != 0)
        break;
      return 15;	 // "form_truncstore"
    case 'v':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ashr_vlshr_imm", 14) != 0)
        break;
      return 9;	 // "vashr_vlshr_imm"
    }
    break;
  case 16:	 // 2 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "xtract_duplane8", 15) != 0)
        break;
      return 24;	 // "extract_duplane8"
    case 'u':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nmerge_duplane8", 15) != 0)
        break;
      return 21;	 // "unmerge_duplane8"
    }
    break;
  case 17:	 // 5 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'e':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "xtract_duplane", 14) != 0)
        break;
      switch (RuleIdentifier[15]) {
      default: break;
      case '1':	 // 1 string to match.
        if (RuleIdentifier[16] != '6')
          break;
        return 25;	 // "extract_duplane16"
      case '3':	 // 1 string to match.
        if (RuleIdentifier[16] != '2')
          break;
        return 26;	 // "extract_duplane32"
      }
      break;
    case 'l':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ower_vector_fcmp", 16) != 0)
        break;
      return 14;	 // "lower_vector_fcmp"
    case 'u':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "nmerge_duplane", 14) != 0)
        break;
      switch (RuleIdentifier[15]) {
      default: break;
      case '1':	 // 1 string to match.
        if (RuleIdentifier[16] != '6')
          break;
        return 22;	 // "unmerge_duplane16"
      case '3':	 // 1 string to match.
        if (RuleIdentifier[16] != '2')
          break;
        return 23;	 // "unmerge_duplane32"
      }
      break;
    }
    break;
  case 18:	 // 2 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nsertelt_nonconst", 17) != 0)
        break;
      return 20;	 // "insertelt_nonconst"
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "wap_icmp_operands", 17) != 0)
        break;
      return 11;	 // "swap_icmp_operands"
    }
    break;
  case 19:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "build_vector_to_dup", 19) != 0)
      break;
    return 12;	 // "build_vector_to_dup"
  case 22:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "unmerge_ext_to_unmerge", 22) != 0)
      break;
    return 17;	 // "unmerge_ext_to_unmerge"
  case 23:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "vector_unmerge_lowering", 23) != 0)
      break;
    return 19;	 // "vector_unmerge_lowering"
  case 26:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "vector_sext_inreg_to_shift", 26) != 0)
      break;
    return 16;	 // "vector_sext_inreg_to_shift"
  case 29:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "build_vector_to_vector_insert", 29) != 0)
      break;
    return 13;	 // "build_vector_to_vector_insert"
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
    return {{0, 27}};
  }
  const auto I = getRuleIdxForIdentifier(RangePair.first);
  if (!I)
    return std::nullopt;
  return {{*I, *I + 1}};
}

bool AArch64PostLegalizerLoweringImplRuleConfig::setRuleEnabled(StringRef RuleIdentifier) {
  auto MaybeRange = getRuleRangeForIdentifier(RuleIdentifier);
  if (!MaybeRange)
    return false;
  for (auto I = MaybeRange->first; I < MaybeRange->second; ++I)
    DisabledRules.reset(I);
  return true;
}

bool AArch64PostLegalizerLoweringImplRuleConfig::setRuleDisabled(StringRef RuleIdentifier) {
  auto MaybeRange = getRuleRangeForIdentifier(RuleIdentifier);
  if (!MaybeRange)
    return false;
  for (auto I = MaybeRange->first; I < MaybeRange->second; ++I)
    DisabledRules.set(I);
  return true;
}

static std::vector<std::string> AArch64PostLegalizerLoweringOption;
static cl::list<std::string> AArch64PostLegalizerLoweringDisableOption(
    "aarch64postlegalizerlowering-disable-rule",
    cl::desc("Disable one or more combiner rules temporarily in the AArch64PostLegalizerLowering pass"),
    cl::CommaSeparated,
    cl::Hidden,
    cl::cat(GICombinerOptionCategory),
    cl::callback([](const std::string &Str) {
      AArch64PostLegalizerLoweringOption.push_back(Str);
    }));
static cl::list<std::string> AArch64PostLegalizerLoweringOnlyEnableOption(
    "aarch64postlegalizerlowering-only-enable-rule",
    cl::desc("Disable all rules in the AArch64PostLegalizerLowering pass then re-enable the specified ones"),
    cl::Hidden,
    cl::cat(GICombinerOptionCategory),
    cl::callback([](const std::string &CommaSeparatedArg) {
      StringRef Str = CommaSeparatedArg;
      AArch64PostLegalizerLoweringOption.push_back("*");
      do {
        auto X = Str.split(",");
        AArch64PostLegalizerLoweringOption.push_back(("!" + X.first).str());
        Str = X.second;
      } while (!Str.empty());
    }));


bool AArch64PostLegalizerLoweringImplRuleConfig::isRuleEnabled(unsigned RuleID) const {
    return  !DisabledRules.test(RuleID);
}
bool AArch64PostLegalizerLoweringImplRuleConfig::parseCommandLineOption() {
  for (StringRef Identifier : AArch64PostLegalizerLoweringOption) {
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
  typedef ComplexRendererFns(AArch64PostLegalizerLoweringImpl::*ComplexMatcherMemFn)(MachineOperand &) const;
  typedef void(AArch64PostLegalizerLoweringImpl::*CustomRendererFn)(MachineInstrBuilder &, const MachineInstr &, int) const;
  const ExecInfoTy<PredicateBitset, ComplexMatcherMemFn, CustomRendererFn> ExecInfo;
  static AArch64PostLegalizerLoweringImpl::ComplexMatcherMemFn ComplexPredicateFns[];
  static AArch64PostLegalizerLoweringImpl::CustomRendererFn CustomRenderers[];
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

PredicateBitset AArch64PostLegalizerLoweringImpl::
computeAvailableModuleFeatures(const AArch64Subtarget *Subtarget) const {
  PredicateBitset Features{};
  return Features;
}

void AArch64PostLegalizerLoweringImpl::setupGeneratedPerFunctionState(MachineFunction &MF) {
  AvailableFunctionFeatures = computeAvailableFunctionFeatures((const AArch64Subtarget *)&MF.getSubtarget(), &MF);
}
PredicateBitset AArch64PostLegalizerLoweringImpl::
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

AArch64PostLegalizerLoweringImpl::ComplexMatcherMemFn
AArch64PostLegalizerLoweringImpl::ComplexPredicateFns[] = {
  nullptr, // GICP_Invalid
};

enum {
  GICXXPred_MI_Predicate_GICombiner0 = GICXXPred_Invalid + 1,
};
bool AArch64PostLegalizerLoweringImpl::testMIPredicate_MI(unsigned PredicateID, const MachineInstr & MI, const MatcherState &State) const {
  switch (PredicateID) {
  case GICXXPred_MI_Predicate_GICombiner0: {
    return MRI.getType(State.MIs[0]->getOperand(0).getReg()).getSizeInBits() == 64;
  }
  }
  llvm_unreachable("Unknown predicate");
  return false;
}
bool AArch64PostLegalizerLoweringImpl::testMOPredicate_MO(unsigned PredicateID, const MachineOperand & MO, const MatcherState &State) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool AArch64PostLegalizerLoweringImpl::testImmPredicate_I64(unsigned PredicateID, int64_t Imm) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool AArch64PostLegalizerLoweringImpl::testImmPredicate_APFloat(unsigned PredicateID, const APFloat & Imm) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool AArch64PostLegalizerLoweringImpl::testImmPredicate_APInt(unsigned PredicateID, const APInt & Imm) const {
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
  GICXXPred_Simple_IsRule18Enabled,
  GICXXPred_Simple_IsRule19Enabled,
  GICXXPred_Simple_IsRule20Enabled,
  GICXXPred_Simple_IsRule21Enabled,
  GICXXPred_Simple_IsRule22Enabled,
  GICXXPred_Simple_IsRule23Enabled,
  GICXXPred_Simple_IsRule24Enabled,
  GICXXPred_Simple_IsRule25Enabled,
  GICXXPred_Simple_IsRule26Enabled,
};

bool AArch64PostLegalizerLoweringImpl::testSimplePredicate(unsigned Predicate) const {
    return RuleConfig.isRuleEnabled(Predicate - GICXXPred_Invalid - 1);
}
// Custom renderers.
enum {
  GICR_Invalid,
};
AArch64PostLegalizerLoweringImpl::CustomRendererFn
AArch64PostLegalizerLoweringImpl::CustomRenderers[] = {
  nullptr, // GICR_Invalid
};

static bool AArch64PostLegalizerLoweringImpl_canMatchOpcode(unsigned Opc) {
  switch (Opc) {
  case TargetOpcode::G_FCMP:
  case TargetOpcode::G_ICMP:
  case TargetOpcode::G_SHUFFLE_VECTOR:
  case TargetOpcode::G_EXTRACT_SUBVECTOR:
  case TargetOpcode::G_MUL:
  case TargetOpcode::G_UNMERGE_VALUES:
  case TargetOpcode::G_BUILD_VECTOR:
  case TargetOpcode::G_STORE:
  case TargetOpcode::G_ASHR:
  case TargetOpcode::G_INSERT_VECTOR_ELT:
  case TargetOpcode::G_LSHR:
  case TargetOpcode::G_SEXT_INREG:
    return true;
  default:
    return false;
  }
}

bool AArch64PostLegalizerLoweringImpl::tryCombineAll(MachineInstr &I) const {
  if (!AArch64PostLegalizerLoweringImpl_canMatchOpcode(I.getOpcode()))
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
  GICXXCustomAction_GICombiner13,
  GICXXCustomAction_GICombiner14,
  GICXXCustomAction_GICombiner15,
  GICXXCustomAction_GICombiner16,
  GICXXCustomAction_GICombiner17,
  GICXXCustomAction_GICombiner18,
  GICXXCustomAction_GICombiner19,
  GICXXCustomAction_GICombiner20,
};
bool AArch64PostLegalizerLoweringImpl::runCustomAction(unsigned ApplyID, const MatcherState &State, NewMIVector &OutMIs) const {
  Helper.getBuilder().setInstrAndDebugLoc(*State.MIs[0]);
  switch(ApplyID) {
  case GICXXCustomAction_GICombiner0:{
    ShuffleVectorPseudo GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchDup(*State.MIs[0], MRI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyShuffleVectorPseudo(*State.MIs[0], MRI, GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner1:{
    std::pair<unsigned, int> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchDupLane(*State.MIs[0], MRI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyDupLane(*State.MIs[0], MRI, B, GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner2:{
    ShuffleVectorPseudo GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchREV(*State.MIs[0], MRI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyShuffleVectorPseudo(*State.MIs[0], MRI, GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner3:{
    ShuffleVectorPseudo GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchEXT(*State.MIs[0], MRI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyEXT(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner4:{
    ShuffleVectorPseudo GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchZip(*State.MIs[0], MRI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyShuffleVectorPseudo(*State.MIs[0], MRI, GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner5:{
    ShuffleVectorPseudo GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchUZP(*State.MIs[0], MRI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyShuffleVectorPseudo(*State.MIs[0], MRI, GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner6:{
    ShuffleVectorPseudo GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchTRN(*State.MIs[0], MRI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyShuffleVectorPseudo(*State.MIs[0], MRI, GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner7:{
    ShuffleVectorPseudo GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return ShuffleVectorInst::isReverseMask(State.MIs[0]->getOperand(3).getShuffleMask(),
                                                            State.MIs[0]->getOperand(3).getShuffleMask().size());}()) {
      return false;
    }
    // Apply Patterns
    applyFullRev(*State.MIs[0], MRI);
    return true;
  }
  case GICXXCustomAction_GICombiner8:{
    std::tuple<Register, int, Register, int> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchINS(*State.MIs[0], MRI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyINS(*State.MIs[0], MRI, B, GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner9:{
    int64_t GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchVAshrLshrImm(*State.MIs[0], MRI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyVAshrLshrImm(*State.MIs[0], MRI, GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner10:{
    std::pair<uint64_t, CmpInst::Predicate> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchAdjustICmpImmAndPred(*State.MIs[0], MRI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyAdjustICmpImmAndPred(*State.MIs[0], GIMatchData_matchinfo, B, Observer);
    return true;
  }
  case GICXXCustomAction_GICombiner11:{
    // Match Patterns
    if(![&](){return trySwapICmpOperands(*State.MIs[0], MRI);}()) {
      return false;
    }
    // Apply Patterns
    applySwapICmpOperands(*State.MIs[0], Observer);
    return true;
  }
  case GICXXCustomAction_GICombiner12:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchBuildVectorToDup(*State.MIs[0], GIMatchData_matchinfo, MRI);}()) {
      return false;
    }
    // Apply Patterns
    applyBuildVectorToDup(*State.MIs[0], GIMatchData_matchinfo, MRI, B);
    return true;
  }
  case GICXXCustomAction_GICombiner13:{
    // Match Patterns
    if(![&](){return matchLowerBuildToInsertVecElt(*State.MIs[0], MRI);}()) {
      return false;
    }
    // Apply Patterns
    applyLowerBuildToInsertVecElt(*State.MIs[0], MRI, B);
    return true;
  }
  case GICXXCustomAction_GICombiner14:{
    // Match Patterns
    if(![&](){return matchLowerVectorFCMP(*State.MIs[0], MRI, B);}()) {
      return false;
    }
    // Apply Patterns
    applyLowerVectorFCMP(*State.MIs[0], MRI, B);
    return true;
  }
  case GICXXCustomAction_GICombiner15:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchFormTruncstore(*State.MIs[0], MRI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyFormTruncstore(*State.MIs[0], MRI, B, Observer, GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner16:{
    // Match Patterns
    if(![&](){return matchVectorSextInReg(*State.MIs[0], MRI);}()) {
      return false;
    }
    // Apply Patterns
    applyVectorSextInReg(*State.MIs[0], MRI, B, Observer);
    return true;
  }
  case GICXXCustomAction_GICombiner17:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchUnmergeExtToUnmerge(*State.MIs[0], MRI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyUnmergeExtToUnmerge(*State.MIs[0], MRI, B, Observer, GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner18:{
    // Match Patterns
    if(![&](){return matchMulv2s64(*State.MIs[0], MRI);}()) {
      return false;
    }
    // Apply Patterns
    applyMulv2s64(*State.MIs[0], MRI, B, Observer);
    return true;
  }
  case GICXXCustomAction_GICombiner19:{
    // Match Patterns
    if(![&](){return matchScalarizeVectorUnmerge(*State.MIs[0], MRI);}()) {
      return false;
    }
    // Apply Patterns
    applyScalarizeVectorUnmerge(*State.MIs[0], MRI, B);
    return true;
  }
  case GICXXCustomAction_GICombiner20:{
    ShuffleVectorPseudo GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchNonConstInsert(*State.MIs[0], MRI);}()) {
      return false;
    }
    // Apply Patterns
    applyNonConstInsert(*State.MIs[0], MRI, B);
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
const uint8_t *AArch64PostLegalizerLoweringImpl::getMatchTable() const {
  constexpr static uint8_t MatchTable0[] = {
     /*    0 */ GIM_SwitchOpcode, /*MI*/0, /*[*/GIMT_Encode2(57), GIMT_Encode2(257), /*)*//*default:*//*Label 12*/ GIMT_Encode4(1332),
     /*   10 */ /*TargetOpcode::G_MUL*//*Label 0*/ GIMT_Encode4(810), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  102 */ /*TargetOpcode::G_UNMERGE_VALUES*//*Label 1*/ GIMT_Encode4(822), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  114 */ /*TargetOpcode::G_BUILD_VECTOR*//*Label 2*/ GIMT_Encode4(992), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  206 */ /*TargetOpcode::G_STORE*//*Label 3*/ GIMT_Encode4(1018), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  394 */ /*TargetOpcode::G_SEXT_INREG*//*Label 4*/ GIMT_Encode4(1030), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  406 */ /*TargetOpcode::G_LSHR*//*Label 5*/ GIMT_Encode4(1042),
     /*  410 */ /*TargetOpcode::G_ASHR*//*Label 6*/ GIMT_Encode4(1054), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  430 */ /*TargetOpcode::G_ICMP*//*Label 7*/ GIMT_Encode4(1066),
     /*  434 */ /*TargetOpcode::G_FCMP*//*Label 8*/ GIMT_Encode4(1089), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  794 */ /*TargetOpcode::G_EXTRACT_SUBVECTOR*//*Label 9*/ GIMT_Encode4(1101),
     /*  798 */ /*TargetOpcode::G_INSERT_VECTOR_ELT*//*Label 10*/ GIMT_Encode4(1210), GIMT_Encode4(0),
     /*  806 */ /*TargetOpcode::G_SHUFFLE_VECTOR*//*Label 11*/ GIMT_Encode4(1222),
     /*  810 */ // Label 0: @810
     /*  810 */ GIM_Try, /*On fail goto*//*Label 13*/ GIMT_Encode4(821), // Rule ID 19 //
     /*  815 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule18Enabled),
     /*  818 */   // MIs[0] dst
     /*  818 */   // No operand predicates
     /*  818 */   // MIs[0] src1
     /*  818 */   // No operand predicates
     /*  818 */   // MIs[0] src2
     /*  818 */   // No operand predicates
     /*  818 */   // Combiner Rule #18: lower_mulv2s64
     /*  818 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner18),
     /*  821 */ // Label 13: @821
     /*  821 */ GIM_Reject,
     /*  822 */ // Label 1: @822
     /*  822 */ GIM_Try, /*On fail goto*//*Label 14*/ GIMT_Encode4(833), // Rule ID 18 //
     /*  827 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule17Enabled),
     /*  830 */   // Combiner Rule #17: unmerge_ext_to_unmerge; wip_match_opcode 'G_UNMERGE_VALUES'
     /*  830 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner17),
     /*  833 */ // Label 14: @833
     /*  833 */ GIM_Try, /*On fail goto*//*Label 15*/ GIMT_Encode4(844), // Rule ID 20 //
     /*  838 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule19Enabled),
     /*  841 */   // Combiner Rule #19: vector_unmerge_lowering; wip_match_opcode 'G_UNMERGE_VALUES'
     /*  841 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner19),
     /*  844 */ // Label 15: @844
     /*  844 */ GIM_Try, /*On fail goto*//*Label 16*/ GIMT_Encode4(991),
     /*  849 */   GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
     /*  852 */   GIM_Try, /*On fail goto*//*Label 17*/ GIMT_Encode4(898), // Rule ID 23 //
     /*  857 */     GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule22Enabled),
     /*  860 */     // MIs[0] d1
     /*  860 */     // No operand predicates
     /*  860 */     // MIs[0] d2
     /*  860 */     // No operand predicates
     /*  860 */     // MIs[0] a
     /*  860 */     GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
     /*  864 */     GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(AArch64::G_DUPLANE16),
     /*  868 */     // MIs[1] src
     /*  868 */     // No operand predicates
     /*  868 */     // MIs[1] c
     /*  868 */     // No operand predicates
     /*  868 */     GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner0),
     /*  872 */     GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/1, /*NewInsnId*/0, /*NewOpIdx*/0,
     /*  877 */     GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  879 */     // Combiner Rule #22: unmerge_duplane16
     /*  879 */     GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(AArch64::G_DUPLANE16),
     /*  882 */     GIR_RootToRootCopy, /*OpIdx*/0, // d1
     /*  884 */     GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
     /*  888 */     GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // c
     /*  892 */     GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/1, /*NewInsnId*/0, /*NewOpIdx*/0,
     /*  897 */     GIR_EraseRootFromParent_Done,
     /*  898 */   // Label 17: @898
     /*  898 */   GIM_Try, /*On fail goto*//*Label 18*/ GIMT_Encode4(944), // Rule ID 24 //
     /*  903 */     GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule23Enabled),
     /*  906 */     // MIs[0] d1
     /*  906 */     // No operand predicates
     /*  906 */     // MIs[0] d2
     /*  906 */     // No operand predicates
     /*  906 */     // MIs[0] a
     /*  906 */     GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
     /*  910 */     GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(AArch64::G_DUPLANE32),
     /*  914 */     // MIs[1] src
     /*  914 */     // No operand predicates
     /*  914 */     // MIs[1] c
     /*  914 */     // No operand predicates
     /*  914 */     GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner0),
     /*  918 */     GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/1, /*NewInsnId*/0, /*NewOpIdx*/0,
     /*  923 */     GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  925 */     // Combiner Rule #23: unmerge_duplane32
     /*  925 */     GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(AArch64::G_DUPLANE32),
     /*  928 */     GIR_RootToRootCopy, /*OpIdx*/0, // d1
     /*  930 */     GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
     /*  934 */     GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // c
     /*  938 */     GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/1, /*NewInsnId*/0, /*NewOpIdx*/0,
     /*  943 */     GIR_EraseRootFromParent_Done,
     /*  944 */   // Label 18: @944
     /*  944 */   GIM_Try, /*On fail goto*//*Label 19*/ GIMT_Encode4(990), // Rule ID 22 //
     /*  949 */     GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule21Enabled),
     /*  952 */     // MIs[0] d1
     /*  952 */     // No operand predicates
     /*  952 */     // MIs[0] d2
     /*  952 */     // No operand predicates
     /*  952 */     // MIs[0] a
     /*  952 */     GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
     /*  956 */     GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(AArch64::G_DUPLANE8),
     /*  960 */     // MIs[1] src
     /*  960 */     // No operand predicates
     /*  960 */     // MIs[1] c
     /*  960 */     // No operand predicates
     /*  960 */     GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner0),
     /*  964 */     GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/1, /*NewInsnId*/0, /*NewOpIdx*/0,
     /*  969 */     GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  971 */     // Combiner Rule #21: unmerge_duplane8
     /*  971 */     GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(AArch64::G_DUPLANE8),
     /*  974 */     GIR_RootToRootCopy, /*OpIdx*/0, // d1
     /*  976 */     GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
     /*  980 */     GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // c
     /*  984 */     GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/1, /*NewInsnId*/0, /*NewOpIdx*/0,
     /*  989 */     GIR_EraseRootFromParent_Done,
     /*  990 */   // Label 19: @990
     /*  990 */   GIM_Reject,
     /*  991 */ // Label 16: @991
     /*  991 */ GIM_Reject,
     /*  992 */ // Label 2: @992
     /*  992 */ GIM_Try, /*On fail goto*//*Label 20*/ GIMT_Encode4(1003), // Rule ID 13 //
     /*  997 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule12Enabled),
     /* 1000 */   // Combiner Rule #12: build_vector_to_dup; wip_match_opcode 'G_BUILD_VECTOR'
     /* 1000 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner12),
     /* 1003 */ // Label 20: @1003
     /* 1003 */ GIM_Try, /*On fail goto*//*Label 21*/ GIMT_Encode4(1017), // Rule ID 14 //
     /* 1008 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule13Enabled),
     /* 1011 */   GIM_CheckNumOperandsGE, /*MI*/0, /*Expected*/2,
     /* 1014 */   // MIs[0] dst
     /* 1014 */   // No operand predicates
     /* 1014 */   // MIs[0] unused
     /* 1014 */   // No operand predicates
     /* 1014 */   // Combiner Rule #13: build_vector_to_vector_insert
     /* 1014 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner13),
     /* 1017 */ // Label 21: @1017
     /* 1017 */ GIM_Reject,
     /* 1018 */ // Label 3: @1018
     /* 1018 */ GIM_Try, /*On fail goto*//*Label 22*/ GIMT_Encode4(1029), // Rule ID 16 //
     /* 1023 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule15Enabled),
     /* 1026 */   // MIs[0] src
     /* 1026 */   // No operand predicates
     /* 1026 */   // MIs[0] addr
     /* 1026 */   // No operand predicates
     /* 1026 */   // Combiner Rule #15: form_truncstore
     /* 1026 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner15),
     /* 1029 */ // Label 22: @1029
     /* 1029 */ GIM_Reject,
     /* 1030 */ // Label 4: @1030
     /* 1030 */ GIM_Try, /*On fail goto*//*Label 23*/ GIMT_Encode4(1041), // Rule ID 17 //
     /* 1035 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule16Enabled),
     /* 1038 */   // Combiner Rule #16: vector_sext_inreg_to_shift; wip_match_opcode 'G_SEXT_INREG'
     /* 1038 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner16),
     /* 1041 */ // Label 23: @1041
     /* 1041 */ GIM_Reject,
     /* 1042 */ // Label 5: @1042
     /* 1042 */ GIM_Try, /*On fail goto*//*Label 24*/ GIMT_Encode4(1053), // Rule ID 10 //
     /* 1047 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule9Enabled),
     /* 1050 */   // Combiner Rule #9: vashr_vlshr_imm; wip_match_opcode 'G_LSHR'
     /* 1050 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner9),
     /* 1053 */ // Label 24: @1053
     /* 1053 */ GIM_Reject,
     /* 1054 */ // Label 6: @1054
     /* 1054 */ GIM_Try, /*On fail goto*//*Label 25*/ GIMT_Encode4(1065), // Rule ID 9 //
     /* 1059 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule9Enabled),
     /* 1062 */   // Combiner Rule #9: vashr_vlshr_imm; wip_match_opcode 'G_ASHR'
     /* 1062 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner9),
     /* 1065 */ // Label 25: @1065
     /* 1065 */ GIM_Reject,
     /* 1066 */ // Label 7: @1066
     /* 1066 */ GIM_Try, /*On fail goto*//*Label 26*/ GIMT_Encode4(1077), // Rule ID 11 //
     /* 1071 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule10Enabled),
     /* 1074 */   // MIs[0] dst
     /* 1074 */   // No operand predicates
     /* 1074 */   // MIs[0] tst
     /* 1074 */   // No operand predicates
     /* 1074 */   // MIs[0] src1
     /* 1074 */   // No operand predicates
     /* 1074 */   // MIs[0] src2
     /* 1074 */   // No operand predicates
     /* 1074 */   // Combiner Rule #10: adjust_icmp_imm
     /* 1074 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner10),
     /* 1077 */ // Label 26: @1077
     /* 1077 */ GIM_Try, /*On fail goto*//*Label 27*/ GIMT_Encode4(1088), // Rule ID 12 //
     /* 1082 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule11Enabled),
     /* 1085 */   // MIs[0] dst
     /* 1085 */   // No operand predicates
     /* 1085 */   // MIs[0] tst
     /* 1085 */   // No operand predicates
     /* 1085 */   // MIs[0] src1
     /* 1085 */   // No operand predicates
     /* 1085 */   // MIs[0] src2
     /* 1085 */   // No operand predicates
     /* 1085 */   // Combiner Rule #11: swap_icmp_operands
     /* 1085 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner11),
     /* 1088 */ // Label 27: @1088
     /* 1088 */ GIM_Reject,
     /* 1089 */ // Label 8: @1089
     /* 1089 */ GIM_Try, /*On fail goto*//*Label 28*/ GIMT_Encode4(1100), // Rule ID 15 //
     /* 1094 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule14Enabled),
     /* 1097 */   // MIs[0] dst
     /* 1097 */   // No operand predicates
     /* 1097 */   // MIs[0] tst
     /* 1097 */   // No operand predicates
     /* 1097 */   // MIs[0] src1
     /* 1097 */   // No operand predicates
     /* 1097 */   // MIs[0] src2
     /* 1097 */   // No operand predicates
     /* 1097 */   // Combiner Rule #14: lower_vector_fcmp
     /* 1097 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner14),
     /* 1100 */ // Label 28: @1100
     /* 1100 */ GIM_Reject,
     /* 1101 */ // Label 9: @1101
     /* 1101 */ GIM_Try, /*On fail goto*//*Label 29*/ GIMT_Encode4(1137), // Rule ID 26 //
     /* 1106 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule25Enabled),
     /* 1109 */   // MIs[0] d1
     /* 1109 */   // No operand predicates
     /* 1109 */   // MIs[0] a
     /* 1109 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1113 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(AArch64::G_DUPLANE16),
     /* 1117 */   // MIs[1] src
     /* 1117 */   // No operand predicates
     /* 1117 */   // MIs[1] c
     /* 1117 */   // No operand predicates
     /* 1117 */   // MIs[0] l
     /* 1117 */   // No operand predicates
     /* 1117 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner0),
     /* 1121 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1123 */   // Combiner Rule #25: extract_duplane16
     /* 1123 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(AArch64::G_DUPLANE16),
     /* 1126 */   GIR_RootToRootCopy, /*OpIdx*/0, // d1
     /* 1128 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
     /* 1132 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // c
     /* 1136 */   GIR_EraseRootFromParent_Done,
     /* 1137 */ // Label 29: @1137
     /* 1137 */ GIM_Try, /*On fail goto*//*Label 30*/ GIMT_Encode4(1173), // Rule ID 27 //
     /* 1142 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule26Enabled),
     /* 1145 */   // MIs[0] d1
     /* 1145 */   // No operand predicates
     /* 1145 */   // MIs[0] a
     /* 1145 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1149 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(AArch64::G_DUPLANE32),
     /* 1153 */   // MIs[1] src
     /* 1153 */   // No operand predicates
     /* 1153 */   // MIs[1] c
     /* 1153 */   // No operand predicates
     /* 1153 */   // MIs[0] l
     /* 1153 */   // No operand predicates
     /* 1153 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner0),
     /* 1157 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1159 */   // Combiner Rule #26: extract_duplane32
     /* 1159 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(AArch64::G_DUPLANE32),
     /* 1162 */   GIR_RootToRootCopy, /*OpIdx*/0, // d1
     /* 1164 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
     /* 1168 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // c
     /* 1172 */   GIR_EraseRootFromParent_Done,
     /* 1173 */ // Label 30: @1173
     /* 1173 */ GIM_Try, /*On fail goto*//*Label 31*/ GIMT_Encode4(1209), // Rule ID 25 //
     /* 1178 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule24Enabled),
     /* 1181 */   // MIs[0] d1
     /* 1181 */   // No operand predicates
     /* 1181 */   // MIs[0] a
     /* 1181 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1185 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(AArch64::G_DUPLANE8),
     /* 1189 */   // MIs[1] src
     /* 1189 */   // No operand predicates
     /* 1189 */   // MIs[1] c
     /* 1189 */   // No operand predicates
     /* 1189 */   // MIs[0] l
     /* 1189 */   // No operand predicates
     /* 1189 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner0),
     /* 1193 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1195 */   // Combiner Rule #24: extract_duplane8
     /* 1195 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(AArch64::G_DUPLANE8),
     /* 1198 */   GIR_RootToRootCopy, /*OpIdx*/0, // d1
     /* 1200 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
     /* 1204 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // c
     /* 1208 */   GIR_EraseRootFromParent_Done,
     /* 1209 */ // Label 31: @1209
     /* 1209 */ GIM_Reject,
     /* 1210 */ // Label 10: @1210
     /* 1210 */ GIM_Try, /*On fail goto*//*Label 32*/ GIMT_Encode4(1221), // Rule ID 21 //
     /* 1215 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule20Enabled),
     /* 1218 */   // Combiner Rule #20: insertelt_nonconst; wip_match_opcode 'G_INSERT_VECTOR_ELT'
     /* 1218 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner20),
     /* 1221 */ // Label 32: @1221
     /* 1221 */ GIM_Reject,
     /* 1222 */ // Label 11: @1222
     /* 1222 */ GIM_Try, /*On fail goto*//*Label 33*/ GIMT_Encode4(1233), // Rule ID 0 //
     /* 1227 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule0Enabled),
     /* 1230 */   // Combiner Rule #0: dup; wip_match_opcode 'G_SHUFFLE_VECTOR'
     /* 1230 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner0),
     /* 1233 */ // Label 33: @1233
     /* 1233 */ GIM_Try, /*On fail goto*//*Label 34*/ GIMT_Encode4(1244), // Rule ID 1 //
     /* 1238 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule1Enabled),
     /* 1241 */   // Combiner Rule #1: form_duplane; wip_match_opcode 'G_SHUFFLE_VECTOR'
     /* 1241 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner1),
     /* 1244 */ // Label 34: @1244
     /* 1244 */ GIM_Try, /*On fail goto*//*Label 35*/ GIMT_Encode4(1255), // Rule ID 2 //
     /* 1249 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule2Enabled),
     /* 1252 */   // Combiner Rule #2: rev; wip_match_opcode 'G_SHUFFLE_VECTOR'
     /* 1252 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner2),
     /* 1255 */ // Label 35: @1255
     /* 1255 */ GIM_Try, /*On fail goto*//*Label 36*/ GIMT_Encode4(1266), // Rule ID 3 //
     /* 1260 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule3Enabled),
     /* 1263 */   // Combiner Rule #3: ext; wip_match_opcode 'G_SHUFFLE_VECTOR'
     /* 1263 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner3),
     /* 1266 */ // Label 36: @1266
     /* 1266 */ GIM_Try, /*On fail goto*//*Label 37*/ GIMT_Encode4(1277), // Rule ID 4 //
     /* 1271 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule4Enabled),
     /* 1274 */   // Combiner Rule #4: zip; wip_match_opcode 'G_SHUFFLE_VECTOR'
     /* 1274 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner4),
     /* 1277 */ // Label 37: @1277
     /* 1277 */ GIM_Try, /*On fail goto*//*Label 38*/ GIMT_Encode4(1288), // Rule ID 5 //
     /* 1282 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule5Enabled),
     /* 1285 */   // Combiner Rule #5: uzp; wip_match_opcode 'G_SHUFFLE_VECTOR'
     /* 1285 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner5),
     /* 1288 */ // Label 38: @1288
     /* 1288 */ GIM_Try, /*On fail goto*//*Label 39*/ GIMT_Encode4(1299), // Rule ID 6 //
     /* 1293 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule6Enabled),
     /* 1296 */   // Combiner Rule #6: trn; wip_match_opcode 'G_SHUFFLE_VECTOR'
     /* 1296 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner6),
     /* 1299 */ // Label 39: @1299
     /* 1299 */ GIM_Try, /*On fail goto*//*Label 40*/ GIMT_Encode4(1310), // Rule ID 8 //
     /* 1304 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule8Enabled),
     /* 1307 */   // Combiner Rule #8: shuf_to_ins; wip_match_opcode 'G_SHUFFLE_VECTOR'
     /* 1307 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner8),
     /* 1310 */ // Label 40: @1310
     /* 1310 */ GIM_Try, /*On fail goto*//*Label 41*/ GIMT_Encode4(1331), // Rule ID 7 //
     /* 1315 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule7Enabled),
     /* 1318 */   // MIs[0] src
     /* 1318 */   // No operand predicates
     /* 1318 */   // MIs[0] src1
     /* 1318 */   // No operand predicates
     /* 1318 */   // MIs[0] src2
     /* 1318 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
     /* 1322 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
     /* 1326 */   // MIs[0] mask
     /* 1326 */   // No operand predicates
     /* 1326 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1328 */   // Combiner Rule #7: fullrev
     /* 1328 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner7),
     /* 1331 */ // Label 41: @1331
     /* 1331 */ GIM_Reject,
     /* 1332 */ // Label 12: @1332
     /* 1332 */ GIM_Reject,
     /* 1333 */ }; // Size: 1333 bytes
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

