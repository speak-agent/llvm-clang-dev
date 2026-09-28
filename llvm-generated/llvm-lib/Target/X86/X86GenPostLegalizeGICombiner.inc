/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* X86PostLegalizerCombinerImpl Combiner Match Table                          *|
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

struct X86PostLegalizerCombinerImplRuleConfig {
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
    return 38;	 // "copy_prop"
  case 10:	 // 2 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "2p_to_p2i", 9) != 0)
        break;
      return 23;	 // "i2p_to_p2i"
    case 'p':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "2i_to_i2p", 9) != 0)
        break;
      return 22;	 // "p2i_to_i2p"
    }
    break;
  case 11:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "add_sub_reg", 11) != 0)
      break;
    return 28;	 // "add_sub_reg"
  case 12:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "redundant_or", 12) != 0)
      break;
    return 0;	 // "redundant_or"
  case 13:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "same_val_zero", 13) != 0)
      break;
    return 19;	 // "same_val_zero"
  case 14:	 // 2 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "inop_same_val", 13) != 0)
        break;
      return 18;	 // "binop_same_val"
    case 'f':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "neg_fneg_fold", 13) != 0)
        break;
      return 25;	 // "fneg_fneg_fold"
    }
    break;
  case 15:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "select_same_val", 15) != 0)
      break;
    return 16;	 // "select_same_val"
  case 17:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "anyext_trunc_fold", 17) != 0)
      break;
    return 24;	 // "anyext_trunc_fold"
  case 18:	 // 4 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "inop_left_to_zero", 17) != 0)
        break;
      return 20;	 // "binop_left_to_zero"
    case 'c':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "onstant_fold_f", 14) != 0)
        break;
      switch (RuleIdentifier[15]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+16, "bs", 2) != 0)
          break;
        return 2;	 // "constant_fold_fabs"
      case 'n':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+16, "eg", 2) != 0)
          break;
        return 1;	 // "constant_fold_fneg"
      }
      break;
    case 'f':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ptrunc_fpext_fold", 17) != 0)
        break;
      return 34;	 // "fptrunc_fpext_fold"
    }
    break;
  case 19:	 // 7 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "inop_right_to_zero", 18) != 0)
        break;
      return 21;	 // "binop_right_to_zero"
    case 'c':	 // 5 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "onstant_fold_f", 14) != 0)
        break;
      switch (RuleIdentifier[15]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+16, "eil", 3) != 0)
          break;
        return 7;	 // "constant_fold_fceil"
      case 'l':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+16, "og2", 3) != 0)
          break;
        return 4;	 // "constant_fold_flog2"
      case 'p':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+16, "ext", 3) != 0)
          break;
        return 6;	 // "constant_fold_fpext"
      case 'r':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+16, "int", 3) != 0)
          break;
        return 12;	 // "constant_fold_frint"
      case 's':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+16, "qrt", 3) != 0)
          break;
        return 3;	 // "constant_fold_fsqrt"
      }
      break;
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ight_identity_zero", 18) != 0)
        break;
      return 17;	 // "right_identity_zero"
    }
    break;
  case 20:	 // 2 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "itcast_bitcast_fold", 19) != 0)
        break;
      return 32;	 // "bitcast_bitcast_fold"
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "onstant_fold_ffloor", 19) != 0)
        break;
      return 8;	 // "constant_fold_ffloor"
    }
    break;
  case 21:	 // 2 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "onstant_fold_fptrunc", 20) != 0)
        break;
      return 5;	 // "constant_fold_fptrunc"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ight_identity_one_fp", 20) != 0)
        break;
      return 27;	 // "right_identity_one_fp"
    }
    break;
  case 22:	 // 2 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ight_identity_one_int", 21) != 0)
        break;
      return 26;	 // "right_identity_one_int"
    case 't':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "runc_buildvector_fold", 21) != 0)
        break;
      return 30;	 // "trunc_buildvector_fold"
    }
    break;
  case 23:	 // 2 strings to match.
    if (memcmp(RuleIdentifier.data()+0, "itof_const_zero_fold_", 21) != 0)
      break;
    switch (RuleIdentifier[21]) {
    default: break;
    case 's':	 // 1 string to match.
      if (RuleIdentifier[22] != 'i')
        break;
      return 14;	 // "itof_const_zero_fold_si"
    case 'u':	 // 1 string to match.
      if (RuleIdentifier[22] != 'i')
        break;
      return 15;	 // "itof_const_zero_fold_ui"
    }
    break;
  case 24:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "constant_fold_fnearbyint", 24) != 0)
      break;
    return 13;	 // "constant_fold_fnearbyint"
  case 25:	 // 2 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "uildvector_identity_fold", 24) != 0)
        break;
      return 29;	 // "buildvector_identity_fold"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ight_identity_neg_one_fp", 24) != 0)
        break;
      return 37;	 // "right_identity_neg_one_fp"
    }
    break;
  case 26:	 // 2 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "itcast_bitcast_to_bitcast", 25) != 0)
        break;
      return 33;	 // "bitcast_bitcast_to_bitcast"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ight_identity_neg_zero_fp", 25) != 0)
        break;
      return 35;	 // "right_identity_neg_zero_fp"
    }
    break;
  case 27:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "trunc_lshr_buildvector_fold", 27) != 0)
      break;
    return 31;	 // "trunc_lshr_buildvector_fold"
  case 29:	 // 2 strings to match.
    if (memcmp(RuleIdentifier.data()+0, "constant_fold_intrinsic_", 24) != 0)
      break;
    switch (RuleIdentifier[24]) {
    default: break;
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+25, "ound", 4) != 0)
        break;
      return 10;	 // "constant_fold_intrinsic_round"
    case 't':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+25, "runc", 4) != 0)
        break;
      return 9;	 // "constant_fold_intrinsic_trunc"
    }
    break;
  case 30:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "right_identity_neg_zero_fp_nsz", 30) != 0)
      break;
    return 36;	 // "right_identity_neg_zero_fp_nsz"
  case 33:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "constant_fold_intrinsic_roundeven", 33) != 0)
      break;
    return 11;	 // "constant_fold_intrinsic_roundeven"
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
    return {{0, 39}};
  }
  const auto I = getRuleIdxForIdentifier(RangePair.first);
  if (!I)
    return std::nullopt;
  return {{*I, *I + 1}};
}

bool X86PostLegalizerCombinerImplRuleConfig::setRuleEnabled(StringRef RuleIdentifier) {
  auto MaybeRange = getRuleRangeForIdentifier(RuleIdentifier);
  if (!MaybeRange)
    return false;
  for (auto I = MaybeRange->first; I < MaybeRange->second; ++I)
    DisabledRules.reset(I);
  return true;
}

bool X86PostLegalizerCombinerImplRuleConfig::setRuleDisabled(StringRef RuleIdentifier) {
  auto MaybeRange = getRuleRangeForIdentifier(RuleIdentifier);
  if (!MaybeRange)
    return false;
  for (auto I = MaybeRange->first; I < MaybeRange->second; ++I)
    DisabledRules.set(I);
  return true;
}

static std::vector<std::string> X86PostLegalizerCombinerOption;
static cl::list<std::string> X86PostLegalizerCombinerDisableOption(
    "x86postlegalizercombiner-disable-rule",
    cl::desc("Disable one or more combiner rules temporarily in the X86PostLegalizerCombiner pass"),
    cl::CommaSeparated,
    cl::Hidden,
    cl::cat(GICombinerOptionCategory),
    cl::callback([](const std::string &Str) {
      X86PostLegalizerCombinerOption.push_back(Str);
    }));
static cl::list<std::string> X86PostLegalizerCombinerOnlyEnableOption(
    "x86postlegalizercombiner-only-enable-rule",
    cl::desc("Disable all rules in the X86PostLegalizerCombiner pass then re-enable the specified ones"),
    cl::Hidden,
    cl::cat(GICombinerOptionCategory),
    cl::callback([](const std::string &CommaSeparatedArg) {
      StringRef Str = CommaSeparatedArg;
      X86PostLegalizerCombinerOption.push_back("*");
      do {
        auto X = Str.split(",");
        X86PostLegalizerCombinerOption.push_back(("!" + X.first).str());
        Str = X.second;
      } while (!Str.empty());
    }));


bool X86PostLegalizerCombinerImplRuleConfig::isRuleEnabled(unsigned RuleID) const {
    return  !DisabledRules.test(RuleID);
}
bool X86PostLegalizerCombinerImplRuleConfig::parseCommandLineOption() {
  for (StringRef Identifier : X86PostLegalizerCombinerOption) {
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
computeAvailableModuleFeatures(const X86Subtarget *Subtarget) const;
PredicateBitset
computeAvailableFunctionFeatures(const X86Subtarget *Subtarget,
                                 const MachineFunction *MF) const;
void setupGeneratedPerFunctionState(MachineFunction &MF) override;

#endif // GET_GICOMBINER_CLASS_MEMBERS

#ifdef GET_GICOMBINER_CLASS_MEMBERS

  mutable MatcherState State;
  typedef ComplexRendererFns(X86PostLegalizerCombinerImpl::*ComplexMatcherMemFn)(MachineOperand &) const;
  typedef void(X86PostLegalizerCombinerImpl::*CustomRendererFn)(MachineInstrBuilder &, const MachineInstr &, int) const;
  const ExecInfoTy<PredicateBitset, ComplexMatcherMemFn, CustomRendererFn> ExecInfo;
  static X86PostLegalizerCombinerImpl::ComplexMatcherMemFn ComplexPredicateFns[];
  static X86PostLegalizerCombinerImpl::CustomRendererFn CustomRenderers[];
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

PredicateBitset X86PostLegalizerCombinerImpl::
computeAvailableModuleFeatures(const X86Subtarget *Subtarget) const {
  PredicateBitset Features{};
  return Features;
}

void X86PostLegalizerCombinerImpl::setupGeneratedPerFunctionState(MachineFunction &MF) {
  AvailableFunctionFeatures = computeAvailableFunctionFeatures((const X86Subtarget *)&MF.getSubtarget(), &MF);
}
PredicateBitset X86PostLegalizerCombinerImpl::
computeAvailableFunctionFeatures(const X86Subtarget *Subtarget, const MachineFunction *MF) const {
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

X86PostLegalizerCombinerImpl::ComplexMatcherMemFn
X86PostLegalizerCombinerImpl::ComplexPredicateFns[] = {
  nullptr, // GICP_Invalid
};

enum {
  GICXXPred_MI_Predicate_GICombiner0 = GICXXPred_Invalid + 1,
  GICXXPred_MI_Predicate_GICombiner1,
  GICXXPred_MI_Predicate_GICombiner2,
  GICXXPred_MI_Predicate_GICombiner3,
  GICXXPred_MI_Predicate_GICombiner4,
};
bool X86PostLegalizerCombinerImpl::testMIPredicate_MI(unsigned PredicateID, const MachineInstr & MI, const MatcherState &State) const {
  switch (PredicateID) {
  case GICXXPred_MI_Predicate_GICombiner0: {
    return Helper.matchConstantFPOp(State.MIs[0]->getOperand(2), 1.0);
  }
  case GICXXPred_MI_Predicate_GICombiner1: {
    return MRI.getType(State.MIs[1]->getOperand(1).getReg()) != MRI.getType(State.MIs[0]->getOperand(0).getReg());
  }
  case GICXXPred_MI_Predicate_GICombiner2: {
    return Helper.matchConstantFPOp(State.MIs[0]->getOperand(2), -0.0);
  }
  case GICXXPred_MI_Predicate_GICombiner3: {
    return Helper.matchConstantFPOp(State.MIs[0]->getOperand(2), 0.0);
  }
  case GICXXPred_MI_Predicate_GICombiner4: {
    return Helper.matchConstantFPOp(State.MIs[0]->getOperand(2), -1.0);
  }
  }
  llvm_unreachable("Unknown predicate");
  return false;
}
bool X86PostLegalizerCombinerImpl::testMOPredicate_MO(unsigned PredicateID, const MachineOperand & MO, const MatcherState &State) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool X86PostLegalizerCombinerImpl::testImmPredicate_I64(unsigned PredicateID, int64_t Imm) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool X86PostLegalizerCombinerImpl::testImmPredicate_APFloat(unsigned PredicateID, const APFloat & Imm) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool X86PostLegalizerCombinerImpl::testImmPredicate_APInt(unsigned PredicateID, const APInt & Imm) const {
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
  GICXXPred_Simple_IsRule27Enabled,
  GICXXPred_Simple_IsRule28Enabled,
  GICXXPred_Simple_IsRule29Enabled,
  GICXXPred_Simple_IsRule30Enabled,
  GICXXPred_Simple_IsRule31Enabled,
  GICXXPred_Simple_IsRule32Enabled,
  GICXXPred_Simple_IsRule33Enabled,
  GICXXPred_Simple_IsRule34Enabled,
  GICXXPred_Simple_IsRule35Enabled,
  GICXXPred_Simple_IsRule36Enabled,
  GICXXPred_Simple_IsRule37Enabled,
  GICXXPred_Simple_IsRule38Enabled,
};

bool X86PostLegalizerCombinerImpl::testSimplePredicate(unsigned Predicate) const {
    return RuleConfig.isRuleEnabled(Predicate - GICXXPred_Invalid - 1);
}
// Custom renderers.
enum {
  GICR_Invalid,
};
X86PostLegalizerCombinerImpl::CustomRendererFn
X86PostLegalizerCombinerImpl::CustomRenderers[] = {
  nullptr, // GICR_Invalid
};

static bool X86PostLegalizerCombinerImpl_canMatchOpcode(unsigned Opc) {
  switch (Opc) {
  case TargetOpcode::G_ADD:
  case TargetOpcode::G_AND:
  case TargetOpcode::G_ASHR:
  case TargetOpcode::G_FADD:
  case TargetOpcode::G_FMUL:
  case TargetOpcode::G_LSHR:
  case TargetOpcode::G_MUL:
  case TargetOpcode::G_OR:
  case TargetOpcode::G_PTR_ADD:
  case TargetOpcode::G_ROTL:
  case TargetOpcode::G_ROTR:
  case TargetOpcode::G_SDIV:
  case TargetOpcode::G_SHL:
  case TargetOpcode::G_SREM:
  case TargetOpcode::G_SUB:
  case TargetOpcode::G_UDIV:
  case TargetOpcode::G_UREM:
  case TargetOpcode::G_XOR:
  case TargetOpcode::COPY:
  case TargetOpcode::G_BITCAST:
  case TargetOpcode::G_FABS:
  case TargetOpcode::G_FCEIL:
  case TargetOpcode::G_FFLOOR:
  case TargetOpcode::G_FLOG2:
  case TargetOpcode::G_FNEARBYINT:
  case TargetOpcode::G_FNEG:
  case TargetOpcode::G_FPEXT:
  case TargetOpcode::G_FPTRUNC:
  case TargetOpcode::G_FRINT:
  case TargetOpcode::G_FSQRT:
  case TargetOpcode::G_INTRINSIC_ROUND:
  case TargetOpcode::G_INTRINSIC_ROUNDEVEN:
  case TargetOpcode::G_INTRINSIC_TRUNC:
  case TargetOpcode::G_PTRTOINT:
  case TargetOpcode::G_SITOFP:
  case TargetOpcode::G_UITOFP:
  case TargetOpcode::G_ANYEXT:
  case TargetOpcode::G_BUILD_VECTOR:
  case TargetOpcode::G_BUILD_VECTOR_TRUNC:
  case TargetOpcode::G_INTTOPTR:
  case TargetOpcode::G_SELECT:
  case TargetOpcode::G_TRUNC:
    return true;
  default:
    return false;
  }
}

bool X86PostLegalizerCombinerImpl::tryCombineAllImpl(MachineInstr &I) const {
  if (!X86PostLegalizerCombinerImpl_canMatchOpcode(I.getOpcode()))
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
};
bool X86PostLegalizerCombinerImpl::runCustomAction(unsigned ApplyID, const MatcherState &State, NewMIVector &OutMIs) const {
  Helper.getBuilder().setInstrAndDebugLoc(*State.MIs[0]);
  switch(ApplyID) {
  case GICXXCustomAction_GICombiner0:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchRedundantOr(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner1:{
    // Apply Patterns
    Helper.applyCombineConstantFoldFpUnary(*State.MIs[0], State.MIs[1]->getOperand(1).getFPImm());
    return true;
  }
  case GICXXCustomAction_GICombiner2:{
    // Apply Patterns
    Helper.replaceInstWithFConstant(*State.MIs[0]->getOperand(0).getParent(), 0.0);
    return true;
  }
  case GICXXCustomAction_GICombiner3:{
    // Match Patterns
    if(![&](){return Helper.matchSelectSameVal(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithOperand(*State.MIs[0], 2);
    return true;
  }
  case GICXXCustomAction_GICombiner4:{
    Register GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineI2PToP2I(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineI2PToP2I(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner5:{
    Register GIMatchData_info;
    // Match Patterns
    if(![&](){GIMatchData_info = State.MIs[1]->getOperand(1).getReg(); return true;}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineP2IToI2P(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner6:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineAnyExtTrunc(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner7:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchBuildVectorIdentityFold(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner8:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchTruncBuildVectorFold(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner9:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchTruncLshrBuildVectorFold(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner10:{
    // Match Patterns
    if(![&](){return MRI.getType(State.MIs[1]->getOperand(1).getReg()) == MRI.getType(State.MIs[0]->getOperand(0).getReg());}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], State.MIs[1]->getOperand(1).getReg());
    return true;
  }
  case GICXXCustomAction_GICombiner11:{
    // Match Patterns
    if(![&](){return Helper.matchCombineCopy(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineCopy(*State.MIs[0]);
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
const uint8_t *X86PostLegalizerCombinerImpl::getMatchTable() const {
  constexpr static uint8_t MatchTable0[] = {
     /*    0 */ GIM_SwitchOpcode, /*MI*/0, /*[*/GIMT_Encode2(20), GIMT_Encode2(285), /*)*//*default:*//*Label 42*/ GIMT_Encode4(2523),
     /*   10 */ /*TargetOpcode::COPY*//*Label 0*/ GIMT_Encode4(1070), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  150 */ /*TargetOpcode::G_ADD*//*Label 1*/ GIMT_Encode4(1082),
     /*  154 */ /*TargetOpcode::G_SUB*//*Label 2*/ GIMT_Encode4(1174),
     /*  158 */ /*TargetOpcode::G_MUL*//*Label 3*/ GIMT_Encode4(1237),
     /*  162 */ /*TargetOpcode::G_SDIV*//*Label 4*/ GIMT_Encode4(1324),
     /*  166 */ /*TargetOpcode::G_UDIV*//*Label 5*/ GIMT_Encode4(1365),
     /*  170 */ /*TargetOpcode::G_SREM*//*Label 6*/ GIMT_Encode4(1406),
     /*  174 */ /*TargetOpcode::G_UREM*//*Label 7*/ GIMT_Encode4(1447), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  186 */ /*TargetOpcode::G_AND*//*Label 8*/ GIMT_Encode4(1488),
     /*  190 */ /*TargetOpcode::G_OR*//*Label 9*/ GIMT_Encode4(1513),
     /*  194 */ /*TargetOpcode::G_XOR*//*Label 10*/ GIMT_Encode4(1572), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  262 */ /*TargetOpcode::G_BUILD_VECTOR*//*Label 11*/ GIMT_Encode4(1635),
     /*  266 */ /*TargetOpcode::G_BUILD_VECTOR_TRUNC*//*Label 12*/ GIMT_Encode4(1647), GIMT_Encode4(0),
     /*  274 */ /*TargetOpcode::G_PTRTOINT*//*Label 13*/ GIMT_Encode4(1659),
     /*  278 */ /*TargetOpcode::G_INTTOPTR*//*Label 14*/ GIMT_Encode4(1681),
     /*  282 */ /*TargetOpcode::G_BITCAST*//*Label 15*/ GIMT_Encode4(1693), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  298 */ /*TargetOpcode::G_INTRINSIC_TRUNC*//*Label 16*/ GIMT_Encode4(1747),
     /*  302 */ /*TargetOpcode::G_INTRINSIC_ROUND*//*Label 17*/ GIMT_Encode4(1769), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  314 */ /*TargetOpcode::G_INTRINSIC_ROUNDEVEN*//*Label 18*/ GIMT_Encode4(1791), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  502 */ /*TargetOpcode::G_ANYEXT*//*Label 19*/ GIMT_Encode4(1813),
     /*  506 */ /*TargetOpcode::G_TRUNC*//*Label 20*/ GIMT_Encode4(1825), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  550 */ /*TargetOpcode::G_SHL*//*Label 21*/ GIMT_Encode4(1848),
     /*  554 */ /*TargetOpcode::G_LSHR*//*Label 22*/ GIMT_Encode4(1912),
     /*  558 */ /*TargetOpcode::G_ASHR*//*Label 23*/ GIMT_Encode4(1976), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  570 */ /*TargetOpcode::G_ROTR*//*Label 24*/ GIMT_Encode4(2040),
     /*  574 */ /*TargetOpcode::G_ROTL*//*Label 25*/ GIMT_Encode4(2064), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  594 */ /*TargetOpcode::G_SELECT*//*Label 26*/ GIMT_Encode4(2088), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  702 */ /*TargetOpcode::G_FADD*//*Label 27*/ GIMT_Encode4(2100), GIMT_Encode4(0),
     /*  710 */ /*TargetOpcode::G_FMUL*//*Label 28*/ GIMT_Encode4(2153), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  758 */ /*TargetOpcode::G_FLOG2*//*Label 29*/ GIMT_Encode4(2197), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  774 */ /*TargetOpcode::G_FNEG*//*Label 30*/ GIMT_Encode4(2219),
     /*  778 */ /*TargetOpcode::G_FPEXT*//*Label 31*/ GIMT_Encode4(2270),
     /*  782 */ /*TargetOpcode::G_FPTRUNC*//*Label 32*/ GIMT_Encode4(2292), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  794 */ /*TargetOpcode::G_SITOFP*//*Label 33*/ GIMT_Encode4(2335),
     /*  798 */ /*TargetOpcode::G_UITOFP*//*Label 34*/ GIMT_Encode4(2351), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  810 */ /*TargetOpcode::G_FABS*//*Label 35*/ GIMT_Encode4(2367), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  890 */ /*TargetOpcode::G_PTR_ADD*//*Label 36*/ GIMT_Encode4(2389), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /* 1006 */ /*TargetOpcode::G_FCEIL*//*Label 37*/ GIMT_Encode4(2413), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /* 1054 */ /*TargetOpcode::G_FSQRT*//*Label 38*/ GIMT_Encode4(2435),
     /* 1058 */ /*TargetOpcode::G_FFLOOR*//*Label 39*/ GIMT_Encode4(2457),
     /* 1062 */ /*TargetOpcode::G_FRINT*//*Label 40*/ GIMT_Encode4(2479),
     /* 1066 */ /*TargetOpcode::G_FNEARBYINT*//*Label 41*/ GIMT_Encode4(2501),
     /* 1070 */ // Label 0: @1070
     /* 1070 */ GIM_Try, /*On fail goto*//*Label 43*/ GIMT_Encode4(1081), // Rule ID 58 //
     /* 1075 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule38Enabled),
     /* 1078 */   // MIs[0] d
     /* 1078 */   // No operand predicates
     /* 1078 */   // MIs[0] s
     /* 1078 */   // No operand predicates
     /* 1078 */   // Combiner Rule #38: copy_prop
     /* 1078 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner11),
     /* 1081 */ // Label 43: @1081
     /* 1081 */ GIM_Reject,
     /* 1082 */ // Label 1: @1082
     /* 1082 */ GIM_Try, /*On fail goto*//*Label 44*/ GIMT_Encode4(1116), // Rule ID 47 //
     /* 1087 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule28Enabled),
     /* 1090 */   // MIs[0] dst
     /* 1090 */   // No operand predicates
     /* 1090 */   // MIs[0] __add_sub_reg_match_0.tmp
     /* 1090 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1094 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
     /* 1098 */   // MIs[1] src
     /* 1098 */   // No operand predicates
     /* 1098 */   // MIs[1] __add_sub_reg_match_0.x
     /* 1098 */   // No operand predicates
     /* 1098 */   // MIs[0] __add_sub_reg_match_0.x
     /* 1098 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/2,
     /* 1103 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
     /* 1108 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1110 */   // Combiner Rule #28: add_sub_reg @ [__add_sub_reg_match_0[1]]
     /* 1110 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
     /* 1115 */   GIR_EraseRootFromParent_Done,
     /* 1116 */ // Label 44: @1116
     /* 1116 */ GIM_Try, /*On fail goto*//*Label 45*/ GIMT_Encode4(1150), // Rule ID 46 //
     /* 1121 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule28Enabled),
     /* 1124 */   // MIs[0] dst
     /* 1124 */   // No operand predicates
     /* 1124 */   // MIs[0] __add_sub_reg_match_0.x
     /* 1124 */   // No operand predicates
     /* 1124 */   // MIs[0] __add_sub_reg_match_0.tmp
     /* 1124 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
     /* 1128 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
     /* 1132 */   // MIs[1] src
     /* 1132 */   // No operand predicates
     /* 1132 */   // MIs[1] __add_sub_reg_match_0.x
     /* 1132 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/1, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
     /* 1137 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
     /* 1142 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1144 */   // Combiner Rule #28: add_sub_reg @ [__add_sub_reg_match_0[0]]
     /* 1144 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
     /* 1149 */   GIR_EraseRootFromParent_Done,
     /* 1150 */ // Label 45: @1150
     /* 1150 */ GIM_Try, /*On fail goto*//*Label 46*/ GIMT_Encode4(1173), // Rule ID 18 //
     /* 1155 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule17Enabled),
     /* 1158 */   // MIs[0] dst
     /* 1158 */   // No operand predicates
     /* 1158 */   // MIs[0] lhs
     /* 1158 */   // No operand predicates
     /* 1158 */   // MIs[0] Operand 2
     /* 1158 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /* 1162 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1167 */   // Combiner Rule #17: right_identity_zero @ [__right_identity_zero_match_0[1]]
     /* 1167 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1172 */   GIR_EraseRootFromParent_Done,
     /* 1173 */ // Label 46: @1173
     /* 1173 */ GIM_Reject,
     /* 1174 */ // Label 2: @1174
     /* 1174 */ GIM_Try, /*On fail goto*//*Label 47*/ GIMT_Encode4(1213), // Rule ID 29 //
     /* 1179 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule19Enabled),
     /* 1182 */   // MIs[0] dst
     /* 1182 */   // No operand predicates
     /* 1182 */   // MIs[0] x
     /* 1182 */   GIM_RecordRegType, /*MI*/0, /*Op*/1, /*TempTypeIdx*/255,
     /* 1186 */   // MIs[0] x
     /* 1186 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
     /* 1191 */   GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/255,
     /* 1194 */   GIR_BuildConstant, /*TempRegID*/0, /*Val*/GIMT_Encode8(0),
     /* 1204 */   // Combiner Rule #19: same_val_zero @ [__same_val_zero_match_0[0]]
     /* 1204 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::COPY),
     /* 1207 */   GIR_RootToRootCopy, /*OpIdx*/0, // dst
     /* 1209 */   GIR_AddSimpleTempRegister, /*InsnID*/0, /*TempRegID*/0,
     /* 1212 */   GIR_EraseRootFromParent_Done,
     /* 1213 */ // Label 47: @1213
     /* 1213 */ GIM_Try, /*On fail goto*//*Label 48*/ GIMT_Encode4(1236), // Rule ID 17 //
     /* 1218 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule17Enabled),
     /* 1221 */   // MIs[0] dst
     /* 1221 */   // No operand predicates
     /* 1221 */   // MIs[0] lhs
     /* 1221 */   // No operand predicates
     /* 1221 */   // MIs[0] Operand 2
     /* 1221 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /* 1225 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1230 */   // Combiner Rule #17: right_identity_zero @ [__right_identity_zero_match_0[0]]
     /* 1230 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1235 */   GIR_EraseRootFromParent_Done,
     /* 1236 */ // Label 48: @1236
     /* 1236 */ GIM_Reject,
     /* 1237 */ // Label 3: @1237
     /* 1237 */ GIM_Try, /*On fail goto*//*Label 49*/ GIMT_Encode4(1277), // Rule ID 38 //
     /* 1242 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule20Enabled),
     /* 1245 */   // MIs[0] dst
     /* 1245 */   // No operand predicates
     /* 1245 */   // MIs[0] zero
     /* 1245 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1249 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /* 1253 */   // MIs[1] Operand 1
     /* 1253 */   GIM_CheckLiteralInt, /*MI*/1, /*Op*/1, GIMT_Encode8(0),
     /* 1264 */   // MIs[0] rhs
     /* 1264 */   // No operand predicates
     /* 1264 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1269 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1271 */   // Combiner Rule #20: binop_left_to_zero @ [__binop_left_to_zero_match_0[7]]
     /* 1271 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1276 */   GIR_EraseRootFromParent_Done,
     /* 1277 */ // Label 49: @1277
     /* 1277 */ GIM_Try, /*On fail goto*//*Label 50*/ GIMT_Encode4(1300), // Rule ID 39 //
     /* 1282 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule21Enabled),
     /* 1285 */   // MIs[0] dst
     /* 1285 */   // No operand predicates
     /* 1285 */   // MIs[0] lhs
     /* 1285 */   // No operand predicates
     /* 1285 */   // MIs[0] zero
     /* 1285 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /* 1289 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/2,
     /* 1294 */   // Combiner Rule #21: binop_right_to_zero
     /* 1294 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/2,
     /* 1299 */   GIR_EraseRootFromParent_Done,
     /* 1300 */ // Label 50: @1300
     /* 1300 */ GIM_Try, /*On fail goto*//*Label 51*/ GIMT_Encode4(1323), // Rule ID 44 //
     /* 1305 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule26Enabled),
     /* 1308 */   // MIs[0] dst
     /* 1308 */   // No operand predicates
     /* 1308 */   // MIs[0] x
     /* 1308 */   // No operand predicates
     /* 1308 */   // MIs[0] Operand 2
     /* 1308 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 1,
     /* 1312 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1317 */   // Combiner Rule #26: right_identity_one_int
     /* 1317 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1322 */   GIR_EraseRootFromParent_Done,
     /* 1323 */ // Label 51: @1323
     /* 1323 */ GIM_Reject,
     /* 1324 */ // Label 4: @1324
     /* 1324 */ GIM_Try, /*On fail goto*//*Label 52*/ GIMT_Encode4(1364), // Rule ID 34 //
     /* 1329 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule20Enabled),
     /* 1332 */   // MIs[0] dst
     /* 1332 */   // No operand predicates
     /* 1332 */   // MIs[0] zero
     /* 1332 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1336 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /* 1340 */   // MIs[1] Operand 1
     /* 1340 */   GIM_CheckLiteralInt, /*MI*/1, /*Op*/1, GIMT_Encode8(0),
     /* 1351 */   // MIs[0] rhs
     /* 1351 */   // No operand predicates
     /* 1351 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1356 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1358 */   // Combiner Rule #20: binop_left_to_zero @ [__binop_left_to_zero_match_0[3]]
     /* 1358 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1363 */   GIR_EraseRootFromParent_Done,
     /* 1364 */ // Label 52: @1364
     /* 1364 */ GIM_Reject,
     /* 1365 */ // Label 5: @1365
     /* 1365 */ GIM_Try, /*On fail goto*//*Label 53*/ GIMT_Encode4(1405), // Rule ID 35 //
     /* 1370 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule20Enabled),
     /* 1373 */   // MIs[0] dst
     /* 1373 */   // No operand predicates
     /* 1373 */   // MIs[0] zero
     /* 1373 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1377 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /* 1381 */   // MIs[1] Operand 1
     /* 1381 */   GIM_CheckLiteralInt, /*MI*/1, /*Op*/1, GIMT_Encode8(0),
     /* 1392 */   // MIs[0] rhs
     /* 1392 */   // No operand predicates
     /* 1392 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1397 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1399 */   // Combiner Rule #20: binop_left_to_zero @ [__binop_left_to_zero_match_0[4]]
     /* 1399 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1404 */   GIR_EraseRootFromParent_Done,
     /* 1405 */ // Label 53: @1405
     /* 1405 */ GIM_Reject,
     /* 1406 */ // Label 6: @1406
     /* 1406 */ GIM_Try, /*On fail goto*//*Label 54*/ GIMT_Encode4(1446), // Rule ID 36 //
     /* 1411 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule20Enabled),
     /* 1414 */   // MIs[0] dst
     /* 1414 */   // No operand predicates
     /* 1414 */   // MIs[0] zero
     /* 1414 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1418 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /* 1422 */   // MIs[1] Operand 1
     /* 1422 */   GIM_CheckLiteralInt, /*MI*/1, /*Op*/1, GIMT_Encode8(0),
     /* 1433 */   // MIs[0] rhs
     /* 1433 */   // No operand predicates
     /* 1433 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1438 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1440 */   // Combiner Rule #20: binop_left_to_zero @ [__binop_left_to_zero_match_0[5]]
     /* 1440 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1445 */   GIR_EraseRootFromParent_Done,
     /* 1446 */ // Label 54: @1446
     /* 1446 */ GIM_Reject,
     /* 1447 */ // Label 7: @1447
     /* 1447 */ GIM_Try, /*On fail goto*//*Label 55*/ GIMT_Encode4(1487), // Rule ID 37 //
     /* 1452 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule20Enabled),
     /* 1455 */   // MIs[0] dst
     /* 1455 */   // No operand predicates
     /* 1455 */   // MIs[0] zero
     /* 1455 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1459 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /* 1463 */   // MIs[1] Operand 1
     /* 1463 */   GIM_CheckLiteralInt, /*MI*/1, /*Op*/1, GIMT_Encode8(0),
     /* 1474 */   // MIs[0] rhs
     /* 1474 */   // No operand predicates
     /* 1474 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1479 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1481 */   // Combiner Rule #20: binop_left_to_zero @ [__binop_left_to_zero_match_0[6]]
     /* 1481 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1486 */   GIR_EraseRootFromParent_Done,
     /* 1487 */ // Label 55: @1487
     /* 1487 */ GIM_Reject,
     /* 1488 */ // Label 8: @1488
     /* 1488 */ GIM_Try, /*On fail goto*//*Label 56*/ GIMT_Encode4(1512), // Rule ID 27 //
     /* 1493 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule18Enabled),
     /* 1496 */   // MIs[0] dst
     /* 1496 */   // No operand predicates
     /* 1496 */   // MIs[0] src
     /* 1496 */   // No operand predicates
     /* 1496 */   // MIs[0] src
     /* 1496 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
     /* 1501 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1506 */   // Combiner Rule #18: binop_same_val @ [__binop_same_val_match_0[0]]
     /* 1506 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1511 */   GIR_EraseRootFromParent_Done,
     /* 1512 */ // Label 56: @1512
     /* 1512 */ GIM_Reject,
     /* 1513 */ // Label 9: @1513
     /* 1513 */ GIM_Try, /*On fail goto*//*Label 57*/ GIMT_Encode4(1524), // Rule ID 0 //
     /* 1518 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule0Enabled),
     /* 1521 */   // Combiner Rule #0: redundant_or; wip_match_opcode 'G_OR'
     /* 1521 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner0),
     /* 1524 */ // Label 57: @1524
     /* 1524 */ GIM_Try, /*On fail goto*//*Label 58*/ GIMT_Encode4(1548), // Rule ID 28 //
     /* 1529 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule18Enabled),
     /* 1532 */   // MIs[0] dst
     /* 1532 */   // No operand predicates
     /* 1532 */   // MIs[0] src
     /* 1532 */   // No operand predicates
     /* 1532 */   // MIs[0] src
     /* 1532 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
     /* 1537 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1542 */   // Combiner Rule #18: binop_same_val @ [__binop_same_val_match_0[1]]
     /* 1542 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1547 */   GIR_EraseRootFromParent_Done,
     /* 1548 */ // Label 58: @1548
     /* 1548 */ GIM_Try, /*On fail goto*//*Label 59*/ GIMT_Encode4(1571), // Rule ID 19 //
     /* 1553 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule17Enabled),
     /* 1556 */   // MIs[0] dst
     /* 1556 */   // No operand predicates
     /* 1556 */   // MIs[0] lhs
     /* 1556 */   // No operand predicates
     /* 1556 */   // MIs[0] Operand 2
     /* 1556 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /* 1560 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1565 */   // Combiner Rule #17: right_identity_zero @ [__right_identity_zero_match_0[2]]
     /* 1565 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1570 */   GIR_EraseRootFromParent_Done,
     /* 1571 */ // Label 59: @1571
     /* 1571 */ GIM_Reject,
     /* 1572 */ // Label 10: @1572
     /* 1572 */ GIM_Try, /*On fail goto*//*Label 60*/ GIMT_Encode4(1611), // Rule ID 30 //
     /* 1577 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule19Enabled),
     /* 1580 */   // MIs[0] dst
     /* 1580 */   // No operand predicates
     /* 1580 */   // MIs[0] x
     /* 1580 */   GIM_RecordRegType, /*MI*/0, /*Op*/1, /*TempTypeIdx*/255,
     /* 1584 */   // MIs[0] x
     /* 1584 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
     /* 1589 */   GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/255,
     /* 1592 */   GIR_BuildConstant, /*TempRegID*/0, /*Val*/GIMT_Encode8(0),
     /* 1602 */   // Combiner Rule #19: same_val_zero @ [__same_val_zero_match_0[1]]
     /* 1602 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::COPY),
     /* 1605 */   GIR_RootToRootCopy, /*OpIdx*/0, // dst
     /* 1607 */   GIR_AddSimpleTempRegister, /*InsnID*/0, /*TempRegID*/0,
     /* 1610 */   GIR_EraseRootFromParent_Done,
     /* 1611 */ // Label 60: @1611
     /* 1611 */ GIM_Try, /*On fail goto*//*Label 61*/ GIMT_Encode4(1634), // Rule ID 20 //
     /* 1616 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule17Enabled),
     /* 1619 */   // MIs[0] dst
     /* 1619 */   // No operand predicates
     /* 1619 */   // MIs[0] lhs
     /* 1619 */   // No operand predicates
     /* 1619 */   // MIs[0] Operand 2
     /* 1619 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /* 1623 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1628 */   // Combiner Rule #17: right_identity_zero @ [__right_identity_zero_match_0[3]]
     /* 1628 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1633 */   GIR_EraseRootFromParent_Done,
     /* 1634 */ // Label 61: @1634
     /* 1634 */ GIM_Reject,
     /* 1635 */ // Label 11: @1635
     /* 1635 */ GIM_Try, /*On fail goto*//*Label 62*/ GIMT_Encode4(1646), // Rule ID 49 //
     /* 1640 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule29Enabled),
     /* 1643 */   // Combiner Rule #29: buildvector_identity_fold; wip_match_opcode 'G_BUILD_VECTOR'
     /* 1643 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner7),
     /* 1646 */ // Label 62: @1646
     /* 1646 */ GIM_Reject,
     /* 1647 */ // Label 12: @1647
     /* 1647 */ GIM_Try, /*On fail goto*//*Label 63*/ GIMT_Encode4(1658), // Rule ID 48 //
     /* 1652 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule29Enabled),
     /* 1655 */   // Combiner Rule #29: buildvector_identity_fold; wip_match_opcode 'G_BUILD_VECTOR_TRUNC'
     /* 1655 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner7),
     /* 1658 */ // Label 63: @1658
     /* 1658 */ GIM_Reject,
     /* 1659 */ // Label 13: @1659
     /* 1659 */ GIM_Try, /*On fail goto*//*Label 64*/ GIMT_Encode4(1680), // Rule ID 41 //
     /* 1664 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule23Enabled),
     /* 1667 */   // MIs[0] dst
     /* 1667 */   // No operand predicates
     /* 1667 */   // MIs[0] t
     /* 1667 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1671 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_INTTOPTR),
     /* 1675 */   // MIs[1] ptr
     /* 1675 */   // No operand predicates
     /* 1675 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1677 */   // Combiner Rule #23: i2p_to_p2i
     /* 1677 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner5),
     /* 1680 */ // Label 64: @1680
     /* 1680 */ GIM_Reject,
     /* 1681 */ // Label 14: @1681
     /* 1681 */ GIM_Try, /*On fail goto*//*Label 65*/ GIMT_Encode4(1692), // Rule ID 40 //
     /* 1686 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule22Enabled),
     /* 1689 */   // Combiner Rule #22: p2i_to_i2p; wip_match_opcode 'G_INTTOPTR'
     /* 1689 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner4),
     /* 1692 */ // Label 65: @1692
     /* 1692 */ GIM_Reject,
     /* 1693 */ // Label 15: @1693
     /* 1693 */ GIM_Try, /*On fail goto*//*Label 66*/ GIMT_Encode4(1725), // Rule ID 53 //
     /* 1698 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule33Enabled),
     /* 1701 */   // MIs[0] dst
     /* 1701 */   // No operand predicates
     /* 1701 */   // MIs[0] src1
     /* 1701 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1705 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BITCAST),
     /* 1709 */   // MIs[1] src0
     /* 1709 */   // No operand predicates
     /* 1709 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner1),
     /* 1713 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1715 */   // Combiner Rule #33: bitcast_bitcast_to_bitcast
     /* 1715 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_BITCAST),
     /* 1718 */   GIR_RootToRootCopy, /*OpIdx*/0, // dst
     /* 1720 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src0
     /* 1724 */   GIR_EraseRootFromParent_Done,
     /* 1725 */ // Label 66: @1725
     /* 1725 */ GIM_Try, /*On fail goto*//*Label 67*/ GIMT_Encode4(1746), // Rule ID 52 //
     /* 1730 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule32Enabled),
     /* 1733 */   // MIs[0] dst
     /* 1733 */   // No operand predicates
     /* 1733 */   // MIs[0] src1
     /* 1733 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1737 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BITCAST),
     /* 1741 */   // MIs[1] src0
     /* 1741 */   // No operand predicates
     /* 1741 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1743 */   // Combiner Rule #32: bitcast_bitcast_fold
     /* 1743 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner10),
     /* 1746 */ // Label 67: @1746
     /* 1746 */ GIM_Reject,
     /* 1747 */ // Label 16: @1747
     /* 1747 */ GIM_Try, /*On fail goto*//*Label 68*/ GIMT_Encode4(1768), // Rule ID 9 //
     /* 1752 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule9Enabled),
     /* 1755 */   // MIs[0] dst
     /* 1755 */   // No operand predicates
     /* 1755 */   // MIs[0] src0
     /* 1755 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1759 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 1763 */   // MIs[1] cst
     /* 1763 */   // No operand predicates
     /* 1763 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1765 */   // Combiner Rule #9: constant_fold_intrinsic_trunc
     /* 1765 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner1),
     /* 1768 */ // Label 68: @1768
     /* 1768 */ GIM_Reject,
     /* 1769 */ // Label 17: @1769
     /* 1769 */ GIM_Try, /*On fail goto*//*Label 69*/ GIMT_Encode4(1790), // Rule ID 10 //
     /* 1774 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule10Enabled),
     /* 1777 */   // MIs[0] dst
     /* 1777 */   // No operand predicates
     /* 1777 */   // MIs[0] src0
     /* 1777 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1781 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 1785 */   // MIs[1] cst
     /* 1785 */   // No operand predicates
     /* 1785 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1787 */   // Combiner Rule #10: constant_fold_intrinsic_round
     /* 1787 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner1),
     /* 1790 */ // Label 69: @1790
     /* 1790 */ GIM_Reject,
     /* 1791 */ // Label 18: @1791
     /* 1791 */ GIM_Try, /*On fail goto*//*Label 70*/ GIMT_Encode4(1812), // Rule ID 11 //
     /* 1796 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule11Enabled),
     /* 1799 */   // MIs[0] dst
     /* 1799 */   // No operand predicates
     /* 1799 */   // MIs[0] src0
     /* 1799 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1803 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 1807 */   // MIs[1] cst
     /* 1807 */   // No operand predicates
     /* 1807 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1809 */   // Combiner Rule #11: constant_fold_intrinsic_roundeven
     /* 1809 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner1),
     /* 1812 */ // Label 70: @1812
     /* 1812 */ GIM_Reject,
     /* 1813 */ // Label 19: @1813
     /* 1813 */ GIM_Try, /*On fail goto*//*Label 71*/ GIMT_Encode4(1824), // Rule ID 42 //
     /* 1818 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule24Enabled),
     /* 1821 */   // Combiner Rule #24: anyext_trunc_fold; wip_match_opcode 'G_ANYEXT'
     /* 1821 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner6),
     /* 1824 */ // Label 71: @1824
     /* 1824 */ GIM_Reject,
     /* 1825 */ // Label 20: @1825
     /* 1825 */ GIM_Try, /*On fail goto*//*Label 72*/ GIMT_Encode4(1836), // Rule ID 50 //
     /* 1830 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule30Enabled),
     /* 1833 */   // Combiner Rule #30: trunc_buildvector_fold; wip_match_opcode 'G_TRUNC'
     /* 1833 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner8),
     /* 1836 */ // Label 72: @1836
     /* 1836 */ GIM_Try, /*On fail goto*//*Label 73*/ GIMT_Encode4(1847), // Rule ID 51 //
     /* 1841 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule31Enabled),
     /* 1844 */   // Combiner Rule #31: trunc_lshr_buildvector_fold; wip_match_opcode 'G_TRUNC'
     /* 1844 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner9),
     /* 1847 */ // Label 73: @1847
     /* 1847 */ GIM_Reject,
     /* 1848 */ // Label 21: @1848
     /* 1848 */ GIM_Try, /*On fail goto*//*Label 74*/ GIMT_Encode4(1888), // Rule ID 31 //
     /* 1853 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule20Enabled),
     /* 1856 */   // MIs[0] dst
     /* 1856 */   // No operand predicates
     /* 1856 */   // MIs[0] zero
     /* 1856 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1860 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /* 1864 */   // MIs[1] Operand 1
     /* 1864 */   GIM_CheckLiteralInt, /*MI*/1, /*Op*/1, GIMT_Encode8(0),
     /* 1875 */   // MIs[0] rhs
     /* 1875 */   // No operand predicates
     /* 1875 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1880 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1882 */   // Combiner Rule #20: binop_left_to_zero @ [__binop_left_to_zero_match_0[0]]
     /* 1882 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1887 */   GIR_EraseRootFromParent_Done,
     /* 1888 */ // Label 74: @1888
     /* 1888 */ GIM_Try, /*On fail goto*//*Label 75*/ GIMT_Encode4(1911), // Rule ID 21 //
     /* 1893 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule17Enabled),
     /* 1896 */   // MIs[0] dst
     /* 1896 */   // No operand predicates
     /* 1896 */   // MIs[0] lhs
     /* 1896 */   // No operand predicates
     /* 1896 */   // MIs[0] Operand 2
     /* 1896 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /* 1900 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1905 */   // Combiner Rule #17: right_identity_zero @ [__right_identity_zero_match_0[4]]
     /* 1905 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1910 */   GIR_EraseRootFromParent_Done,
     /* 1911 */ // Label 75: @1911
     /* 1911 */ GIM_Reject,
     /* 1912 */ // Label 22: @1912
     /* 1912 */ GIM_Try, /*On fail goto*//*Label 76*/ GIMT_Encode4(1952), // Rule ID 32 //
     /* 1917 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule20Enabled),
     /* 1920 */   // MIs[0] dst
     /* 1920 */   // No operand predicates
     /* 1920 */   // MIs[0] zero
     /* 1920 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1924 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /* 1928 */   // MIs[1] Operand 1
     /* 1928 */   GIM_CheckLiteralInt, /*MI*/1, /*Op*/1, GIMT_Encode8(0),
     /* 1939 */   // MIs[0] rhs
     /* 1939 */   // No operand predicates
     /* 1939 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1944 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1946 */   // Combiner Rule #20: binop_left_to_zero @ [__binop_left_to_zero_match_0[1]]
     /* 1946 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1951 */   GIR_EraseRootFromParent_Done,
     /* 1952 */ // Label 76: @1952
     /* 1952 */ GIM_Try, /*On fail goto*//*Label 77*/ GIMT_Encode4(1975), // Rule ID 23 //
     /* 1957 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule17Enabled),
     /* 1960 */   // MIs[0] dst
     /* 1960 */   // No operand predicates
     /* 1960 */   // MIs[0] lhs
     /* 1960 */   // No operand predicates
     /* 1960 */   // MIs[0] Operand 2
     /* 1960 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /* 1964 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1969 */   // Combiner Rule #17: right_identity_zero @ [__right_identity_zero_match_0[6]]
     /* 1969 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1974 */   GIR_EraseRootFromParent_Done,
     /* 1975 */ // Label 77: @1975
     /* 1975 */ GIM_Reject,
     /* 1976 */ // Label 23: @1976
     /* 1976 */ GIM_Try, /*On fail goto*//*Label 78*/ GIMT_Encode4(2016), // Rule ID 33 //
     /* 1981 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule20Enabled),
     /* 1984 */   // MIs[0] dst
     /* 1984 */   // No operand predicates
     /* 1984 */   // MIs[0] zero
     /* 1984 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1988 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /* 1992 */   // MIs[1] Operand 1
     /* 1992 */   GIM_CheckLiteralInt, /*MI*/1, /*Op*/1, GIMT_Encode8(0),
     /* 2003 */   // MIs[0] rhs
     /* 2003 */   // No operand predicates
     /* 2003 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2008 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2010 */   // Combiner Rule #20: binop_left_to_zero @ [__binop_left_to_zero_match_0[2]]
     /* 2010 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2015 */   GIR_EraseRootFromParent_Done,
     /* 2016 */ // Label 78: @2016
     /* 2016 */ GIM_Try, /*On fail goto*//*Label 79*/ GIMT_Encode4(2039), // Rule ID 22 //
     /* 2021 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule17Enabled),
     /* 2024 */   // MIs[0] dst
     /* 2024 */   // No operand predicates
     /* 2024 */   // MIs[0] lhs
     /* 2024 */   // No operand predicates
     /* 2024 */   // MIs[0] Operand 2
     /* 2024 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /* 2028 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2033 */   // Combiner Rule #17: right_identity_zero @ [__right_identity_zero_match_0[5]]
     /* 2033 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2038 */   GIR_EraseRootFromParent_Done,
     /* 2039 */ // Label 79: @2039
     /* 2039 */ GIM_Reject,
     /* 2040 */ // Label 24: @2040
     /* 2040 */ GIM_Try, /*On fail goto*//*Label 80*/ GIMT_Encode4(2063), // Rule ID 26 //
     /* 2045 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule17Enabled),
     /* 2048 */   // MIs[0] dst
     /* 2048 */   // No operand predicates
     /* 2048 */   // MIs[0] lhs
     /* 2048 */   // No operand predicates
     /* 2048 */   // MIs[0] Operand 2
     /* 2048 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /* 2052 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2057 */   // Combiner Rule #17: right_identity_zero @ [__right_identity_zero_match_0[9]]
     /* 2057 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2062 */   GIR_EraseRootFromParent_Done,
     /* 2063 */ // Label 80: @2063
     /* 2063 */ GIM_Reject,
     /* 2064 */ // Label 25: @2064
     /* 2064 */ GIM_Try, /*On fail goto*//*Label 81*/ GIMT_Encode4(2087), // Rule ID 25 //
     /* 2069 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule17Enabled),
     /* 2072 */   // MIs[0] dst
     /* 2072 */   // No operand predicates
     /* 2072 */   // MIs[0] lhs
     /* 2072 */   // No operand predicates
     /* 2072 */   // MIs[0] Operand 2
     /* 2072 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /* 2076 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2081 */   // Combiner Rule #17: right_identity_zero @ [__right_identity_zero_match_0[8]]
     /* 2081 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2086 */   GIR_EraseRootFromParent_Done,
     /* 2087 */ // Label 81: @2087
     /* 2087 */ GIM_Reject,
     /* 2088 */ // Label 26: @2088
     /* 2088 */ GIM_Try, /*On fail goto*//*Label 82*/ GIMT_Encode4(2099), // Rule ID 16 //
     /* 2093 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule16Enabled),
     /* 2096 */   // Combiner Rule #16: select_same_val; wip_match_opcode 'G_SELECT'
     /* 2096 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner3),
     /* 2099 */ // Label 82: @2099
     /* 2099 */ GIM_Reject,
     /* 2100 */ // Label 27: @2100
     /* 2100 */ GIM_Try, /*On fail goto*//*Label 83*/ GIMT_Encode4(2123), // Rule ID 55 //
     /* 2105 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule35Enabled),
     /* 2108 */   // MIs[0] dst
     /* 2108 */   // No operand predicates
     /* 2108 */   // MIs[0] x
     /* 2108 */   // No operand predicates
     /* 2108 */   // MIs[0] y
     /* 2108 */   // No operand predicates
     /* 2108 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner2),
     /* 2112 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2117 */   // Combiner Rule #35: right_identity_neg_zero_fp
     /* 2117 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2122 */   GIR_EraseRootFromParent_Done,
     /* 2123 */ // Label 83: @2123
     /* 2123 */ GIM_Try, /*On fail goto*//*Label 84*/ GIMT_Encode4(2152), // Rule ID 56 //
     /* 2128 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule36Enabled),
     /* 2131 */   GIM_MIFlags, /*MI*/0, GIMT_Encode4(MachineInstr::FmNsz),
     /* 2137 */   // MIs[0] dst
     /* 2137 */   // No operand predicates
     /* 2137 */   // MIs[0] x
     /* 2137 */   // No operand predicates
     /* 2137 */   // MIs[0] y
     /* 2137 */   // No operand predicates
     /* 2137 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner3),
     /* 2141 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2146 */   // Combiner Rule #36: right_identity_neg_zero_fp_nsz
     /* 2146 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2151 */   GIR_EraseRootFromParent_Done,
     /* 2152 */ // Label 84: @2152
     /* 2152 */ GIM_Reject,
     /* 2153 */ // Label 28: @2153
     /* 2153 */ GIM_Try, /*On fail goto*//*Label 85*/ GIMT_Encode4(2176), // Rule ID 45 //
     /* 2158 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule27Enabled),
     /* 2161 */   // MIs[0] dst
     /* 2161 */   // No operand predicates
     /* 2161 */   // MIs[0] x
     /* 2161 */   // No operand predicates
     /* 2161 */   // MIs[0] y
     /* 2161 */   // No operand predicates
     /* 2161 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner0),
     /* 2165 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2170 */   // Combiner Rule #27: right_identity_one_fp
     /* 2170 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2175 */   GIR_EraseRootFromParent_Done,
     /* 2176 */ // Label 85: @2176
     /* 2176 */ GIM_Try, /*On fail goto*//*Label 86*/ GIMT_Encode4(2196), // Rule ID 57 //
     /* 2181 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule37Enabled),
     /* 2184 */   // MIs[0] dst
     /* 2184 */   // No operand predicates
     /* 2184 */   // MIs[0] x
     /* 2184 */   // No operand predicates
     /* 2184 */   // MIs[0] y
     /* 2184 */   // No operand predicates
     /* 2184 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner4),
     /* 2188 */   // Combiner Rule #37: right_identity_neg_one_fp
     /* 2188 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_FNEG),
     /* 2191 */   GIR_RootToRootCopy, /*OpIdx*/0, // dst
     /* 2193 */   GIR_RootToRootCopy, /*OpIdx*/1, // x
     /* 2195 */   GIR_EraseRootFromParent_Done,
     /* 2196 */ // Label 86: @2196
     /* 2196 */ GIM_Reject,
     /* 2197 */ // Label 29: @2197
     /* 2197 */ GIM_Try, /*On fail goto*//*Label 87*/ GIMT_Encode4(2218), // Rule ID 4 //
     /* 2202 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule4Enabled),
     /* 2205 */   // MIs[0] dst
     /* 2205 */   // No operand predicates
     /* 2205 */   // MIs[0] src0
     /* 2205 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2209 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 2213 */   // MIs[1] cst
     /* 2213 */   // No operand predicates
     /* 2213 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2215 */   // Combiner Rule #4: constant_fold_flog2
     /* 2215 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner1),
     /* 2218 */ // Label 87: @2218
     /* 2218 */ GIM_Reject,
     /* 2219 */ // Label 30: @2219
     /* 2219 */ GIM_Try, /*On fail goto*//*Label 88*/ GIMT_Encode4(2240), // Rule ID 1 //
     /* 2224 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule1Enabled),
     /* 2227 */   // MIs[0] dst
     /* 2227 */   // No operand predicates
     /* 2227 */   // MIs[0] src0
     /* 2227 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2231 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 2235 */   // MIs[1] cst
     /* 2235 */   // No operand predicates
     /* 2235 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2237 */   // Combiner Rule #1: constant_fold_fneg
     /* 2237 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner1),
     /* 2240 */ // Label 88: @2240
     /* 2240 */ GIM_Try, /*On fail goto*//*Label 89*/ GIMT_Encode4(2269), // Rule ID 43 //
     /* 2245 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule25Enabled),
     /* 2248 */   // MIs[0] dst
     /* 2248 */   // No operand predicates
     /* 2248 */   // MIs[0] t
     /* 2248 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2252 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FNEG),
     /* 2256 */   // MIs[1] src
     /* 2256 */   // No operand predicates
     /* 2256 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
     /* 2261 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2263 */   // Combiner Rule #25: fneg_fneg_fold
     /* 2263 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
     /* 2268 */   GIR_EraseRootFromParent_Done,
     /* 2269 */ // Label 89: @2269
     /* 2269 */ GIM_Reject,
     /* 2270 */ // Label 31: @2270
     /* 2270 */ GIM_Try, /*On fail goto*//*Label 90*/ GIMT_Encode4(2291), // Rule ID 6 //
     /* 2275 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule6Enabled),
     /* 2278 */   // MIs[0] dst
     /* 2278 */   // No operand predicates
     /* 2278 */   // MIs[0] src0
     /* 2278 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2282 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 2286 */   // MIs[1] cst
     /* 2286 */   // No operand predicates
     /* 2286 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2288 */   // Combiner Rule #6: constant_fold_fpext
     /* 2288 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner1),
     /* 2291 */ // Label 90: @2291
     /* 2291 */ GIM_Reject,
     /* 2292 */ // Label 32: @2292
     /* 2292 */ GIM_Try, /*On fail goto*//*Label 91*/ GIMT_Encode4(2313), // Rule ID 5 //
     /* 2297 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule5Enabled),
     /* 2300 */   // MIs[0] dst
     /* 2300 */   // No operand predicates
     /* 2300 */   // MIs[0] src0
     /* 2300 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2304 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 2308 */   // MIs[1] cst
     /* 2308 */   // No operand predicates
     /* 2308 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2310 */   // Combiner Rule #5: constant_fold_fptrunc
     /* 2310 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner1),
     /* 2313 */ // Label 91: @2313
     /* 2313 */ GIM_Try, /*On fail goto*//*Label 92*/ GIMT_Encode4(2334), // Rule ID 54 //
     /* 2318 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule34Enabled),
     /* 2321 */   // MIs[0] dst
     /* 2321 */   // No operand predicates
     /* 2321 */   // MIs[0] src1
     /* 2321 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2325 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FPEXT),
     /* 2329 */   // MIs[1] src0
     /* 2329 */   // No operand predicates
     /* 2329 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2331 */   // Combiner Rule #34: fptrunc_fpext_fold
     /* 2331 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner10),
     /* 2334 */ // Label 92: @2334
     /* 2334 */ GIM_Reject,
     /* 2335 */ // Label 33: @2335
     /* 2335 */ GIM_Try, /*On fail goto*//*Label 93*/ GIMT_Encode4(2350), // Rule ID 14 //
     /* 2340 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule14Enabled),
     /* 2343 */   // MIs[0] dst
     /* 2343 */   // No operand predicates
     /* 2343 */   // MIs[0] Operand 1
     /* 2343 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/1, 0,
     /* 2347 */   // Combiner Rule #14: itof_const_zero_fold_si
     /* 2347 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner2),
     /* 2350 */ // Label 93: @2350
     /* 2350 */ GIM_Reject,
     /* 2351 */ // Label 34: @2351
     /* 2351 */ GIM_Try, /*On fail goto*//*Label 94*/ GIMT_Encode4(2366), // Rule ID 15 //
     /* 2356 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule15Enabled),
     /* 2359 */   // MIs[0] dst
     /* 2359 */   // No operand predicates
     /* 2359 */   // MIs[0] Operand 1
     /* 2359 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/1, 0,
     /* 2363 */   // Combiner Rule #15: itof_const_zero_fold_ui
     /* 2363 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner2),
     /* 2366 */ // Label 94: @2366
     /* 2366 */ GIM_Reject,
     /* 2367 */ // Label 35: @2367
     /* 2367 */ GIM_Try, /*On fail goto*//*Label 95*/ GIMT_Encode4(2388), // Rule ID 2 //
     /* 2372 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule2Enabled),
     /* 2375 */   // MIs[0] dst
     /* 2375 */   // No operand predicates
     /* 2375 */   // MIs[0] src0
     /* 2375 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2379 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 2383 */   // MIs[1] cst
     /* 2383 */   // No operand predicates
     /* 2383 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2385 */   // Combiner Rule #2: constant_fold_fabs
     /* 2385 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner1),
     /* 2388 */ // Label 95: @2388
     /* 2388 */ GIM_Reject,
     /* 2389 */ // Label 36: @2389
     /* 2389 */ GIM_Try, /*On fail goto*//*Label 96*/ GIMT_Encode4(2412), // Rule ID 24 //
     /* 2394 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule17Enabled),
     /* 2397 */   // MIs[0] dst
     /* 2397 */   // No operand predicates
     /* 2397 */   // MIs[0] lhs
     /* 2397 */   // No operand predicates
     /* 2397 */   // MIs[0] Operand 2
     /* 2397 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /* 2401 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2406 */   // Combiner Rule #17: right_identity_zero @ [__right_identity_zero_match_0[7]]
     /* 2406 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2411 */   GIR_EraseRootFromParent_Done,
     /* 2412 */ // Label 96: @2412
     /* 2412 */ GIM_Reject,
     /* 2413 */ // Label 37: @2413
     /* 2413 */ GIM_Try, /*On fail goto*//*Label 97*/ GIMT_Encode4(2434), // Rule ID 7 //
     /* 2418 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule7Enabled),
     /* 2421 */   // MIs[0] dst
     /* 2421 */   // No operand predicates
     /* 2421 */   // MIs[0] src0
     /* 2421 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2425 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 2429 */   // MIs[1] cst
     /* 2429 */   // No operand predicates
     /* 2429 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2431 */   // Combiner Rule #7: constant_fold_fceil
     /* 2431 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner1),
     /* 2434 */ // Label 97: @2434
     /* 2434 */ GIM_Reject,
     /* 2435 */ // Label 38: @2435
     /* 2435 */ GIM_Try, /*On fail goto*//*Label 98*/ GIMT_Encode4(2456), // Rule ID 3 //
     /* 2440 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule3Enabled),
     /* 2443 */   // MIs[0] dst
     /* 2443 */   // No operand predicates
     /* 2443 */   // MIs[0] src0
     /* 2443 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2447 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 2451 */   // MIs[1] cst
     /* 2451 */   // No operand predicates
     /* 2451 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2453 */   // Combiner Rule #3: constant_fold_fsqrt
     /* 2453 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner1),
     /* 2456 */ // Label 98: @2456
     /* 2456 */ GIM_Reject,
     /* 2457 */ // Label 39: @2457
     /* 2457 */ GIM_Try, /*On fail goto*//*Label 99*/ GIMT_Encode4(2478), // Rule ID 8 //
     /* 2462 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule8Enabled),
     /* 2465 */   // MIs[0] dst
     /* 2465 */   // No operand predicates
     /* 2465 */   // MIs[0] src0
     /* 2465 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2469 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 2473 */   // MIs[1] cst
     /* 2473 */   // No operand predicates
     /* 2473 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2475 */   // Combiner Rule #8: constant_fold_ffloor
     /* 2475 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner1),
     /* 2478 */ // Label 99: @2478
     /* 2478 */ GIM_Reject,
     /* 2479 */ // Label 40: @2479
     /* 2479 */ GIM_Try, /*On fail goto*//*Label 100*/ GIMT_Encode4(2500), // Rule ID 12 //
     /* 2484 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule12Enabled),
     /* 2487 */   // MIs[0] dst
     /* 2487 */   // No operand predicates
     /* 2487 */   // MIs[0] src0
     /* 2487 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2491 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 2495 */   // MIs[1] cst
     /* 2495 */   // No operand predicates
     /* 2495 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2497 */   // Combiner Rule #12: constant_fold_frint
     /* 2497 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner1),
     /* 2500 */ // Label 100: @2500
     /* 2500 */ GIM_Reject,
     /* 2501 */ // Label 41: @2501
     /* 2501 */ GIM_Try, /*On fail goto*//*Label 101*/ GIMT_Encode4(2522), // Rule ID 13 //
     /* 2506 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule13Enabled),
     /* 2509 */   // MIs[0] dst
     /* 2509 */   // No operand predicates
     /* 2509 */   // MIs[0] src0
     /* 2509 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2513 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 2517 */   // MIs[1] cst
     /* 2517 */   // No operand predicates
     /* 2517 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2519 */   // Combiner Rule #13: constant_fold_fnearbyint
     /* 2519 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner1),
     /* 2522 */ // Label 101: @2522
     /* 2522 */ GIM_Reject,
     /* 2523 */ // Label 42: @2523
     /* 2523 */ GIM_Reject,
     /* 2524 */ }; // Size: 2524 bytes
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

