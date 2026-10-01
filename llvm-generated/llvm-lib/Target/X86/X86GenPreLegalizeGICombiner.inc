/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* X86PreLegalizerCombinerImpl Combiner Match Table                           *|
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

struct X86PreLegalizerCombinerImplRuleConfig {
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
  case 9:	 // 3 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "opy_prop", 8) != 0)
        break;
      return 58;	 // "copy_prop"
    case 'm':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "ulo_by_", 7) != 0)
        break;
      switch (RuleIdentifier[8]) {
      default: break;
      case '0':	 // 1 string to match.
        return 42;	 // "mulo_by_0"
      case '2':	 // 1 string to match.
        return 41;	 // "mulo_by_2"
      }
      break;
    }
    break;
  case 10:	 // 4 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "2p_to_p2i", 9) != 0)
        break;
      return 7;	 // "i2p_to_p2i"
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ul_to_shl", 9) != 0)
        break;
      return 59;	 // "mul_to_shl"
    case 'p':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "2i_to_i2p", 9) != 0)
        break;
      return 6;	 // "p2i_to_i2p"
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ub_to_add", 9) != 0)
        break;
      return 60;	 // "sub_to_add"
    }
    break;
  case 11:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "add_sub_reg", 11) != 0)
      break;
    return 12;	 // "add_sub_reg"
  case 12:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "adde_to_addo", 12) != 0)
      break;
    return 43;	 // "adde_to_addo"
  case 13:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "same_val_zero", 13) != 0)
      break;
    return 3;	 // "same_val_zero"
  case 14:	 // 4 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "inop_same_val", 13) != 0)
        break;
      return 2;	 // "binop_same_val"
    case 'f':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "neg_fneg_fold", 13) != 0)
        break;
      return 9;	 // "fneg_fneg_fold"
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ul_by_neg_one", 13) != 0)
        break;
      return 62;	 // "mul_by_neg_one"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "eassoc_ptradd", 13) != 0)
        break;
      return 22;	 // "reassoc_ptradd"
    }
    break;
  case 15:	 // 3 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "dempotent_prop", 14) != 0)
        break;
      return 63;	 // "idempotent_prop"
    case 'o':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "verlapping_and", 14) != 0)
        break;
      return 40;	 // "overlapping_and"
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "elect_same_val", 14) != 0)
        break;
      return 0;	 // "select_same_val"
    }
    break;
  case 16:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "undef_to_fp_zero", 16) != 0)
      break;
    return 46;	 // "undef_to_fp_zero"
  case 17:	 // 4 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'a':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'd':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "d_p2i_to_ptradd", 15) != 0)
          break;
        return 61;	 // "add_p2i_to_ptradd"
      case 'n':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "yext_trunc_fold", 15) != 0)
          break;
        return 8;	 // "anyext_trunc_fold"
      }
      break;
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "rase_undef_store", 16) != 0)
        break;
      return 56;	 // "erase_undef_store"
    case 'u':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ndef_to_int_zero", 16) != 0)
        break;
      return 47;	 // "undef_to_int_zero"
    }
    break;
  case 18:	 // 6 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "inop_left_to_zero", 17) != 0)
        break;
      return 4;	 // "binop_left_to_zero"
    case 'c':	 // 3 strings to match.
      if (RuleIdentifier[1] != 'o')
        break;
      switch (RuleIdentifier[2]) {
      default: break;
      case 'm':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "bine_minmax_nan", 15) != 0)
          break;
        return 44;	 // "combine_minmax_nan"
      case 'n':	 // 2 strings to match.
        if (memcmp(RuleIdentifier.data()+3, "stant_fold_f", 12) != 0)
          break;
        switch (RuleIdentifier[15]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+16, "bs", 2) != 0)
            break;
          return 25;	 // "constant_fold_fabs"
        case 'n':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+16, "eg", 2) != 0)
            break;
          return 24;	 // "constant_fold_fneg"
        }
        break;
      }
      break;
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "xpand_const_fpowi", 17) != 0)
        break;
      return 45;	 // "expand_const_fpowi"
    case 'f':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ptrunc_fpext_fold", 17) != 0)
        break;
      return 18;	 // "fptrunc_fpext_fold"
    }
    break;
  case 19:	 // 11 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "inop_right_to_zero", 18) != 0)
        break;
      return 5;	 // "binop_right_to_zero"
    case 'c':	 // 6 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "onst", 4) != 0)
        break;
      switch (RuleIdentifier[5]) {
      default: break;
      case '_':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+6, "ptradd_to_i2p", 13) != 0)
          break;
        return 39;	 // "const_ptradd_to_i2p"
      case 'a':	 // 5 strings to match.
        if (memcmp(RuleIdentifier.data()+6, "nt_fold_f", 9) != 0)
          break;
        switch (RuleIdentifier[15]) {
        default: break;
        case 'c':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+16, "eil", 3) != 0)
            break;
          return 30;	 // "constant_fold_fceil"
        case 'l':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+16, "og2", 3) != 0)
            break;
          return 27;	 // "constant_fold_flog2"
        case 'p':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+16, "ext", 3) != 0)
            break;
          return 29;	 // "constant_fold_fpext"
        case 'r':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+16, "int", 3) != 0)
            break;
          return 35;	 // "constant_fold_frint"
        case 's':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+16, "qrt", 3) != 0)
            break;
          return 26;	 // "constant_fold_fsqrt"
        }
        break;
      }
      break;
    case 'r':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "assoc_comm_binops", 17) != 0)
          break;
        return 23;	 // "reassoc_comm_binops"
      case 'i':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "ght_identity_zero", 17) != 0)
          break;
        return 1;	 // "right_identity_zero"
      }
      break;
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "implify_add_to_sub", 18) != 0)
        break;
      return 64;	 // "simplify_add_to_sub"
    case 'u':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nary_undef_to_zero", 18) != 0)
        break;
      return 51;	 // "unary_undef_to_zero"
    }
    break;
  case 20:	 // 3 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "itcast_bitcast_fold", 19) != 0)
        break;
      return 16;	 // "bitcast_bitcast_fold"
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "onstant_fold_ffloor", 19) != 0)
        break;
      return 31;	 // "constant_fold_ffloor"
    case 'u':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nary_undef_to_undef", 19) != 0)
        break;
      return 52;	 // "unary_undef_to_undef"
    }
    break;
  case 21:	 // 3 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "onstant_fold_fptrunc", 20) != 0)
        break;
      return 28;	 // "constant_fold_fptrunc"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ight_identity_one_fp", 20) != 0)
        break;
      return 11;	 // "right_identity_one_fp"
    case 'u':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ndef_to_negative_one", 20) != 0)
        break;
      return 48;	 // "undef_to_negative_one"
    }
    break;
  case 22:	 // 3 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'p':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ropagate_undef_any_op", 21) != 0)
        break;
      return 53;	 // "propagate_undef_any_op"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ight_identity_one_int", 21) != 0)
        break;
      return 10;	 // "right_identity_one_int"
    case 't':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "runc_buildvector_fold", 21) != 0)
        break;
      return 14;	 // "trunc_buildvector_fold"
    }
    break;
  case 23:	 // 3 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'i':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "tof_const_zero_fold_", 20) != 0)
        break;
      switch (RuleIdentifier[21]) {
      default: break;
      case 's':	 // 1 string to match.
        if (RuleIdentifier[22] != 'i')
          break;
        return 37;	 // "itof_const_zero_fold_si"
      case 'u':	 // 1 string to match.
        if (RuleIdentifier[22] != 'i')
          break;
        return 38;	 // "itof_const_zero_fold_ui"
      }
      break;
    case 'p':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ropagate_undef_all_ops", 22) != 0)
        break;
      return 54;	 // "propagate_undef_all_ops"
    }
    break;
  case 24:	 // 2 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "inop_left_undef_to_zero", 23) != 0)
        break;
      return 49;	 // "binop_left_undef_to_zero"
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "onstant_fold_fnearbyint", 23) != 0)
        break;
      return 36;	 // "constant_fold_fnearbyint"
    }
    break;
  case 25:	 // 2 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "uildvector_identity_fold", 24) != 0)
        break;
      return 13;	 // "buildvector_identity_fold"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ight_identity_neg_one_fp", 24) != 0)
        break;
      return 21;	 // "right_identity_neg_one_fp"
    }
    break;
  case 26:	 // 3 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 2 strings to match.
      if (RuleIdentifier[1] != 'i')
        break;
      switch (RuleIdentifier[2]) {
      default: break;
      case 'n':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "op_right_undef_to_undef", 23) != 0)
          break;
        return 50;	 // "binop_right_undef_to_undef"
      case 't':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "cast_bitcast_to_bitcast", 23) != 0)
          break;
        return 17;	 // "bitcast_bitcast_to_bitcast"
      }
      break;
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ight_identity_neg_zero_fp", 25) != 0)
        break;
      return 19;	 // "right_identity_neg_zero_fp"
    }
    break;
  case 27:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "trunc_lshr_buildvector_fold", 27) != 0)
      break;
    return 15;	 // "trunc_lshr_buildvector_fold"
  case 28:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "propagate_undef_shuffle_mask", 28) != 0)
      break;
    return 55;	 // "propagate_undef_shuffle_mask"
  case 29:	 // 2 strings to match.
    if (memcmp(RuleIdentifier.data()+0, "constant_fold_intrinsic_", 24) != 0)
      break;
    switch (RuleIdentifier[24]) {
    default: break;
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+25, "ound", 4) != 0)
        break;
      return 33;	 // "constant_fold_intrinsic_round"
    case 't':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+25, "runc", 4) != 0)
        break;
      return 32;	 // "constant_fold_intrinsic_trunc"
    }
    break;
  case 30:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "right_identity_neg_zero_fp_nsz", 30) != 0)
      break;
    return 20;	 // "right_identity_neg_zero_fp_nsz"
  case 33:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "constant_fold_intrinsic_roundeven", 33) != 0)
      break;
    return 34;	 // "constant_fold_intrinsic_roundeven"
  case 36:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "insert_extract_vec_elt_out_of_bounds", 36) != 0)
      break;
    return 57;	 // "insert_extract_vec_elt_out_of_bounds"
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
    return {{0, 65}};
  }
  const auto I = getRuleIdxForIdentifier(RangePair.first);
  if (!I)
    return std::nullopt;
  return {{*I, *I + 1}};
}

bool X86PreLegalizerCombinerImplRuleConfig::setRuleEnabled(StringRef RuleIdentifier) {
  auto MaybeRange = getRuleRangeForIdentifier(RuleIdentifier);
  if (!MaybeRange)
    return false;
  for (auto I = MaybeRange->first; I < MaybeRange->second; ++I)
    DisabledRules.reset(I);
  return true;
}

bool X86PreLegalizerCombinerImplRuleConfig::setRuleDisabled(StringRef RuleIdentifier) {
  auto MaybeRange = getRuleRangeForIdentifier(RuleIdentifier);
  if (!MaybeRange)
    return false;
  for (auto I = MaybeRange->first; I < MaybeRange->second; ++I)
    DisabledRules.set(I);
  return true;
}

static std::vector<std::string> X86PreLegalizerCombinerOption;
static cl::list<std::string> X86PreLegalizerCombinerDisableOption(
    "x86prelegalizercombiner-disable-rule",
    cl::desc("Disable one or more combiner rules temporarily in the X86PreLegalizerCombiner pass"),
    cl::CommaSeparated,
    cl::Hidden,
    cl::cat(GICombinerOptionCategory),
    cl::callback([](const std::string &Str) {
      X86PreLegalizerCombinerOption.push_back(Str);
    }));
static cl::list<std::string> X86PreLegalizerCombinerOnlyEnableOption(
    "x86prelegalizercombiner-only-enable-rule",
    cl::desc("Disable all rules in the X86PreLegalizerCombiner pass then re-enable the specified ones"),
    cl::Hidden,
    cl::cat(GICombinerOptionCategory),
    cl::callback([](const std::string &CommaSeparatedArg) {
      StringRef Str = CommaSeparatedArg;
      X86PreLegalizerCombinerOption.push_back("*");
      do {
        auto X = Str.split(",");
        X86PreLegalizerCombinerOption.push_back(("!" + X.first).str());
        Str = X.second;
      } while (!Str.empty());
    }));


bool X86PreLegalizerCombinerImplRuleConfig::isRuleEnabled(unsigned RuleID) const {
    return  !DisabledRules.test(RuleID);
}
bool X86PreLegalizerCombinerImplRuleConfig::parseCommandLineOption() {
  for (StringRef Identifier : X86PreLegalizerCombinerOption) {
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
  typedef ComplexRendererFns(X86PreLegalizerCombinerImpl::*ComplexMatcherMemFn)(MachineOperand &) const;
  typedef void(X86PreLegalizerCombinerImpl::*CustomRendererFn)(MachineInstrBuilder &, const MachineInstr &, int) const;
  const ExecInfoTy<PredicateBitset, ComplexMatcherMemFn, CustomRendererFn> ExecInfo;
  static X86PreLegalizerCombinerImpl::ComplexMatcherMemFn ComplexPredicateFns[];
  static X86PreLegalizerCombinerImpl::CustomRendererFn CustomRenderers[];
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

PredicateBitset X86PreLegalizerCombinerImpl::
computeAvailableModuleFeatures(const X86Subtarget *Subtarget) const {
  PredicateBitset Features{};
  return Features;
}

void X86PreLegalizerCombinerImpl::setupGeneratedPerFunctionState(MachineFunction &MF) {
  AvailableFunctionFeatures = computeAvailableFunctionFeatures((const X86Subtarget *)&MF.getSubtarget(), &MF);
}
PredicateBitset X86PreLegalizerCombinerImpl::
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

X86PreLegalizerCombinerImpl::ComplexMatcherMemFn
X86PreLegalizerCombinerImpl::ComplexPredicateFns[] = {
  nullptr, // GICP_Invalid
};

enum {
  GICXXPred_MI_Predicate_GICombiner0 = GICXXPred_Invalid + 1,
  GICXXPred_MI_Predicate_GICombiner1,
  GICXXPred_MI_Predicate_GICombiner2,
  GICXXPred_MI_Predicate_GICombiner3,
  GICXXPred_MI_Predicate_GICombiner4,
};
bool X86PreLegalizerCombinerImpl::testMIPredicate_MI(unsigned PredicateID, const MachineInstr & MI, const MatcherState &State) const {
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
bool X86PreLegalizerCombinerImpl::testMOPredicate_MO(unsigned PredicateID, const MachineOperand & MO, const MatcherState &State) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool X86PreLegalizerCombinerImpl::testImmPredicate_I64(unsigned PredicateID, int64_t Imm) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool X86PreLegalizerCombinerImpl::testImmPredicate_APFloat(unsigned PredicateID, const APFloat & Imm) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool X86PreLegalizerCombinerImpl::testImmPredicate_APInt(unsigned PredicateID, const APInt & Imm) const {
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
  GICXXPred_Simple_IsRule39Enabled,
  GICXXPred_Simple_IsRule40Enabled,
  GICXXPred_Simple_IsRule41Enabled,
  GICXXPred_Simple_IsRule42Enabled,
  GICXXPred_Simple_IsRule43Enabled,
  GICXXPred_Simple_IsRule44Enabled,
  GICXXPred_Simple_IsRule45Enabled,
  GICXXPred_Simple_IsRule46Enabled,
  GICXXPred_Simple_IsRule47Enabled,
  GICXXPred_Simple_IsRule48Enabled,
  GICXXPred_Simple_IsRule49Enabled,
  GICXXPred_Simple_IsRule50Enabled,
  GICXXPred_Simple_IsRule51Enabled,
  GICXXPred_Simple_IsRule52Enabled,
  GICXXPred_Simple_IsRule53Enabled,
  GICXXPred_Simple_IsRule54Enabled,
  GICXXPred_Simple_IsRule55Enabled,
  GICXXPred_Simple_IsRule56Enabled,
  GICXXPred_Simple_IsRule57Enabled,
  GICXXPred_Simple_IsRule58Enabled,
  GICXXPred_Simple_IsRule59Enabled,
  GICXXPred_Simple_IsRule60Enabled,
  GICXXPred_Simple_IsRule61Enabled,
  GICXXPred_Simple_IsRule62Enabled,
  GICXXPred_Simple_IsRule63Enabled,
  GICXXPred_Simple_IsRule64Enabled,
};

bool X86PreLegalizerCombinerImpl::testSimplePredicate(unsigned Predicate) const {
    return RuleConfig.isRuleEnabled(Predicate - GICXXPred_Invalid - 1);
}
// Custom renderers.
enum {
  GICR_Invalid,
};
X86PreLegalizerCombinerImpl::CustomRendererFn
X86PreLegalizerCombinerImpl::CustomRenderers[] = {
  nullptr, // GICR_Invalid
};

static bool X86PreLegalizerCombinerImpl_canMatchOpcode(unsigned Opc) {
  switch (Opc) {
  case TargetOpcode::G_ADD:
  case TargetOpcode::G_AND:
  case TargetOpcode::G_ASHR:
  case TargetOpcode::G_FADD:
  case TargetOpcode::G_FMUL:
  case TargetOpcode::G_FPOWI:
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
  case TargetOpcode::G_ANYEXT:
  case TargetOpcode::G_BITCAST:
  case TargetOpcode::G_FABS:
  case TargetOpcode::G_FCANONICALIZE:
  case TargetOpcode::G_FCEIL:
  case TargetOpcode::G_FFLOOR:
  case TargetOpcode::G_FLOG2:
  case TargetOpcode::G_FNEARBYINT:
  case TargetOpcode::G_FNEG:
  case TargetOpcode::G_FPEXT:
  case TargetOpcode::G_FPTOSI:
  case TargetOpcode::G_FPTOUI:
  case TargetOpcode::G_FPTRUNC:
  case TargetOpcode::G_FREEZE:
  case TargetOpcode::G_FRINT:
  case TargetOpcode::G_FSQRT:
  case TargetOpcode::G_INTRINSIC_ROUND:
  case TargetOpcode::G_INTRINSIC_ROUNDEVEN:
  case TargetOpcode::G_INTRINSIC_TRUNC:
  case TargetOpcode::G_INTTOPTR:
  case TargetOpcode::G_PTRTOINT:
  case TargetOpcode::G_SITOFP:
  case TargetOpcode::G_TRUNC:
  case TargetOpcode::G_UITOFP:
  case TargetOpcode::G_ABS:
  case TargetOpcode::G_BUILD_VECTOR:
  case TargetOpcode::G_BUILD_VECTOR_TRUNC:
  case TargetOpcode::G_EXTRACT_VECTOR_ELT:
  case TargetOpcode::G_FMAXIMUM:
  case TargetOpcode::G_FMAXNUM:
  case TargetOpcode::G_FMINIMUM:
  case TargetOpcode::G_FMINNUM:
  case TargetOpcode::G_INSERT_VECTOR_ELT:
  case TargetOpcode::G_SADDE:
  case TargetOpcode::G_SELECT:
  case TargetOpcode::G_SHUFFLE_VECTOR:
  case TargetOpcode::G_SMULO:
  case TargetOpcode::G_SSUBE:
  case TargetOpcode::G_STORE:
  case TargetOpcode::G_UADDE:
  case TargetOpcode::G_UMULO:
  case TargetOpcode::G_USUBE:
    return true;
  default:
    return false;
  }
}

bool X86PreLegalizerCombinerImpl::tryCombineAllImpl(MachineInstr &I) const {
  if (!X86PreLegalizerCombinerImpl_canMatchOpcode(I.getOpcode()))
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
  GICXXCustomAction_GICombiner21,
  GICXXCustomAction_GICombiner22,
  GICXXCustomAction_GICombiner23,
  GICXXCustomAction_GICombiner24,
  GICXXCustomAction_GICombiner25,
  GICXXCustomAction_GICombiner26,
  GICXXCustomAction_GICombiner27,
  GICXXCustomAction_GICombiner28,
  GICXXCustomAction_GICombiner29,
  GICXXCustomAction_GICombiner30,
  GICXXCustomAction_GICombiner31,
  GICXXCustomAction_GICombiner32,
  GICXXCustomAction_GICombiner33,
  GICXXCustomAction_GICombiner34,
};
bool X86PreLegalizerCombinerImpl::runCustomAction(unsigned ApplyID, const MatcherState &State, NewMIVector &OutMIs) const {
  Helper.getBuilder().setInstrAndDebugLoc(*State.MIs[0]);
  switch(ApplyID) {
  case GICXXCustomAction_GICombiner0:{
    // Match Patterns
    if(![&](){return Helper.matchSelectSameVal(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithOperand(*State.MIs[0], 2);
    return true;
  }
  case GICXXCustomAction_GICombiner1:{
    Register GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineI2PToP2I(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineI2PToP2I(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner2:{
    Register GIMatchData_info;
    // Match Patterns
    if(![&](){GIMatchData_info = State.MIs[1]->getOperand(1).getReg(); return true;}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineP2IToI2P(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner3:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineAnyExtTrunc(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner4:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchBuildVectorIdentityFold(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner5:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchTruncBuildVectorFold(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner6:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchTruncLshrBuildVectorFold(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner7:{
    // Match Patterns
    if(![&](){return MRI.getType(State.MIs[1]->getOperand(1).getReg()) == MRI.getType(State.MIs[0]->getOperand(0).getReg());}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], State.MIs[1]->getOperand(1).getReg());
    return true;
  }
  case GICXXCustomAction_GICombiner8:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchReassocPtrAdd(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnNoErase(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner9:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchReassocCommBinOp(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner10:{
    // Apply Patterns
    Helper.applyCombineConstantFoldFpUnary(*State.MIs[0], State.MIs[1]->getOperand(1).getFPImm());
    return true;
  }
  case GICXXCustomAction_GICombiner11:{
    // Apply Patterns
    Helper.replaceInstWithFConstant(*State.MIs[0]->getOperand(0).getParent(), 0.0);
    return true;
  }
  case GICXXCustomAction_GICombiner12:{
    APInt GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineConstPtrAddToI2P(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineConstPtrAddToI2P(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner13:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchOverlappingAnd(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner14:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchMulOBy2(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnNoErase(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner15:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchMulOBy0(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner16:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchAddEToAddO(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnNoErase(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner17:{
    unsigned GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineFMinMaxNaN(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithOperand(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner18:{
    // Match Patterns
    if(![&](){return Helper.matchFPowIExpansion(*State.MIs[0], State.MIs[1]->getOperand(1).getCImm()->getSExtValue());}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyExpandFPowI(*State.MIs[0], State.MIs[1]->getOperand(1).getCImm()->getSExtValue());
    return true;
  }
  case GICXXCustomAction_GICombiner19:{
    // Match Patterns
    if(![&](){return Helper.matchAnyExplicitUseIsUndef(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithFConstant(*State.MIs[0], 0.0);
    return true;
  }
  case GICXXCustomAction_GICombiner20:{
    // Match Patterns
    if(![&](){return Helper.matchAnyExplicitUseIsUndef(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithConstant(*State.MIs[0], 0);
    return true;
  }
  case GICXXCustomAction_GICombiner21:{
    // Match Patterns
    if(![&](){return Helper.matchAnyExplicitUseIsUndef(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithConstant(*State.MIs[0], -1);
    return true;
  }
  case GICXXCustomAction_GICombiner22:{
    // Match Patterns
    if(![&](){return Helper.matchOperandIsUndef(*State.MIs[0], 1);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithConstant(*State.MIs[0], 0);
    return true;
  }
  case GICXXCustomAction_GICombiner23:{
    // Match Patterns
    if(![&](){return Helper.matchOperandIsUndef(*State.MIs[0], 2);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithUndef(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner24:{
    // Apply Patterns
    Helper.replaceInstWithUndef(*State.MIs[0]->getOperand(0).getParent());
    return true;
  }
  case GICXXCustomAction_GICombiner25:{
    // Match Patterns
    if(![&](){return Helper.matchAnyExplicitUseIsUndef(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithUndef(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner26:{
    // Match Patterns
    if(![&](){return Helper.matchAllExplicitUsesAreUndef(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithUndef(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner27:{
    // Match Patterns
    if(![&](){return Helper.matchUndefShuffleVectorMask(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithUndef(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner28:{
    // Match Patterns
    if(![&](){return Helper.matchUndefStore(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.eraseInst(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner29:{
    // Match Patterns
    if(![&](){return Helper.matchInsertExtractVecEltOutOfBounds(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithUndef(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner30:{
    // Match Patterns
    if(![&](){return Helper.matchCombineCopy(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineCopy(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner31:{
    unsigned GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineMulToShl(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineMulToShl(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner32:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineSubToAdd(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnNoErase(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner33:{
    std::pair<Register, bool> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineAddP2IToPtrAdd(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineAddP2IToPtrAdd(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner34:{
    std::tuple<Register, Register> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchSimplifyAddToSub(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applySimplifyAddToSub(*State.MIs[0], GIMatchData_info);
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
const uint8_t *X86PreLegalizerCombinerImpl::getMatchTable() const {
  constexpr static uint8_t MatchTable0[] = {
     /*    0 */ GIM_SwitchOpcode, /*MI*/0, /*[*/GIMT_Encode2(20), GIMT_Encode2(285), /*)*//*default:*//*Label 62*/ GIMT_Encode4(3288),
     /*   10 */ /*TargetOpcode::COPY*//*Label 0*/ GIMT_Encode4(1070), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  150 */ /*TargetOpcode::G_ADD*//*Label 1*/ GIMT_Encode4(1082),
     /*  154 */ /*TargetOpcode::G_SUB*//*Label 2*/ GIMT_Encode4(1218),
     /*  158 */ /*TargetOpcode::G_MUL*//*Label 3*/ GIMT_Encode4(1313),
     /*  162 */ /*TargetOpcode::G_SDIV*//*Label 4*/ GIMT_Encode4(1462),
     /*  166 */ /*TargetOpcode::G_UDIV*//*Label 5*/ GIMT_Encode4(1503),
     /*  170 */ /*TargetOpcode::G_SREM*//*Label 6*/ GIMT_Encode4(1555),
     /*  174 */ /*TargetOpcode::G_UREM*//*Label 7*/ GIMT_Encode4(1596), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  186 */ /*TargetOpcode::G_AND*//*Label 8*/ GIMT_Encode4(1648),
     /*  190 */ /*TargetOpcode::G_OR*//*Label 9*/ GIMT_Encode4(1695),
     /*  194 */ /*TargetOpcode::G_XOR*//*Label 10*/ GIMT_Encode4(1754), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  262 */ /*TargetOpcode::G_BUILD_VECTOR*//*Label 11*/ GIMT_Encode4(1828),
     /*  266 */ /*TargetOpcode::G_BUILD_VECTOR_TRUNC*//*Label 12*/ GIMT_Encode4(1851), GIMT_Encode4(0),
     /*  274 */ /*TargetOpcode::G_PTRTOINT*//*Label 13*/ GIMT_Encode4(1863),
     /*  278 */ /*TargetOpcode::G_INTTOPTR*//*Label 14*/ GIMT_Encode4(1906),
     /*  282 */ /*TargetOpcode::G_BITCAST*//*Label 15*/ GIMT_Encode4(1939),
     /*  286 */ /*TargetOpcode::G_FREEZE*//*Label 16*/ GIMT_Encode4(2014), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  298 */ /*TargetOpcode::G_INTRINSIC_TRUNC*//*Label 17*/ GIMT_Encode4(2044),
     /*  302 */ /*TargetOpcode::G_INTRINSIC_ROUND*//*Label 18*/ GIMT_Encode4(2066), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  314 */ /*TargetOpcode::G_INTRINSIC_ROUNDEVEN*//*Label 19*/ GIMT_Encode4(2088), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  354 */ /*TargetOpcode::G_STORE*//*Label 20*/ GIMT_Encode4(2110), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  502 */ /*TargetOpcode::G_ANYEXT*//*Label 21*/ GIMT_Encode4(2122),
     /*  506 */ /*TargetOpcode::G_TRUNC*//*Label 22*/ GIMT_Encode4(2155), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  550 */ /*TargetOpcode::G_SHL*//*Label 23*/ GIMT_Encode4(2199),
     /*  554 */ /*TargetOpcode::G_LSHR*//*Label 24*/ GIMT_Encode4(2285),
     /*  558 */ /*TargetOpcode::G_ASHR*//*Label 25*/ GIMT_Encode4(2360), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  570 */ /*TargetOpcode::G_ROTR*//*Label 26*/ GIMT_Encode4(2435),
     /*  574 */ /*TargetOpcode::G_ROTL*//*Label 27*/ GIMT_Encode4(2459), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  594 */ /*TargetOpcode::G_SELECT*//*Label 28*/ GIMT_Encode4(2483), GIMT_Encode4(0),
     /*  602 */ /*TargetOpcode::G_UADDE*//*Label 29*/ GIMT_Encode4(2495), GIMT_Encode4(0),
     /*  610 */ /*TargetOpcode::G_USUBE*//*Label 30*/ GIMT_Encode4(2507), GIMT_Encode4(0),
     /*  618 */ /*TargetOpcode::G_SADDE*//*Label 31*/ GIMT_Encode4(2519), GIMT_Encode4(0),
     /*  626 */ /*TargetOpcode::G_SSUBE*//*Label 32*/ GIMT_Encode4(2531),
     /*  630 */ /*TargetOpcode::G_UMULO*//*Label 33*/ GIMT_Encode4(2543),
     /*  634 */ /*TargetOpcode::G_SMULO*//*Label 34*/ GIMT_Encode4(2566), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  702 */ /*TargetOpcode::G_FADD*//*Label 35*/ GIMT_Encode4(2589), GIMT_Encode4(0),
     /*  710 */ /*TargetOpcode::G_FMUL*//*Label 36*/ GIMT_Encode4(2642), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  738 */ /*TargetOpcode::G_FPOWI*//*Label 37*/ GIMT_Encode4(2686), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  758 */ /*TargetOpcode::G_FLOG2*//*Label 38*/ GIMT_Encode4(2708), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  774 */ /*TargetOpcode::G_FNEG*//*Label 39*/ GIMT_Encode4(2730),
     /*  778 */ /*TargetOpcode::G_FPEXT*//*Label 40*/ GIMT_Encode4(2781),
     /*  782 */ /*TargetOpcode::G_FPTRUNC*//*Label 41*/ GIMT_Encode4(2803),
     /*  786 */ /*TargetOpcode::G_FPTOSI*//*Label 42*/ GIMT_Encode4(2846),
     /*  790 */ /*TargetOpcode::G_FPTOUI*//*Label 43*/ GIMT_Encode4(2868),
     /*  794 */ /*TargetOpcode::G_SITOFP*//*Label 44*/ GIMT_Encode4(2890),
     /*  798 */ /*TargetOpcode::G_UITOFP*//*Label 45*/ GIMT_Encode4(2917), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  810 */ /*TargetOpcode::G_FABS*//*Label 46*/ GIMT_Encode4(2944), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  822 */ /*TargetOpcode::G_FCANONICALIZE*//*Label 47*/ GIMT_Encode4(2995),
     /*  826 */ /*TargetOpcode::G_FMINNUM*//*Label 48*/ GIMT_Encode4(3025),
     /*  830 */ /*TargetOpcode::G_FMAXNUM*//*Label 49*/ GIMT_Encode4(3037), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  842 */ /*TargetOpcode::G_FMINIMUM*//*Label 50*/ GIMT_Encode4(3049),
     /*  846 */ /*TargetOpcode::G_FMAXIMUM*//*Label 51*/ GIMT_Encode4(3061), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  890 */ /*TargetOpcode::G_PTR_ADD*//*Label 52*/ GIMT_Encode4(3073), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  914 */ /*TargetOpcode::G_ABS*//*Label 53*/ GIMT_Encode4(3119), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  946 */ /*TargetOpcode::G_INSERT_VECTOR_ELT*//*Label 54*/ GIMT_Encode4(3131),
     /*  950 */ /*TargetOpcode::G_EXTRACT_VECTOR_ELT*//*Label 55*/ GIMT_Encode4(3143),
     /*  954 */ /*TargetOpcode::G_SHUFFLE_VECTOR*//*Label 56*/ GIMT_Encode4(3155), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /* 1006 */ /*TargetOpcode::G_FCEIL*//*Label 57*/ GIMT_Encode4(3178), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /* 1054 */ /*TargetOpcode::G_FSQRT*//*Label 58*/ GIMT_Encode4(3200),
     /* 1058 */ /*TargetOpcode::G_FFLOOR*//*Label 59*/ GIMT_Encode4(3222),
     /* 1062 */ /*TargetOpcode::G_FRINT*//*Label 60*/ GIMT_Encode4(3244),
     /* 1066 */ /*TargetOpcode::G_FNEARBYINT*//*Label 61*/ GIMT_Encode4(3266),
     /* 1070 */ // Label 0: @1070
     /* 1070 */ GIM_Try, /*On fail goto*//*Label 63*/ GIMT_Encode4(1081), // Rule ID 102 //
     /* 1075 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule58Enabled),
     /* 1078 */   // MIs[0] d
     /* 1078 */   // No operand predicates
     /* 1078 */   // MIs[0] s
     /* 1078 */   // No operand predicates
     /* 1078 */   // Combiner Rule #58: copy_prop
     /* 1078 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner30),
     /* 1081 */ // Label 63: @1081
     /* 1081 */ GIM_Reject,
     /* 1082 */ // Label 1: @1082
     /* 1082 */ GIM_Try, /*On fail goto*//*Label 64*/ GIMT_Encode4(1093), // Rule ID 93 //
     /* 1087 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule53Enabled),
     /* 1090 */   // Combiner Rule #53: propagate_undef_any_op; wip_match_opcode 'G_ADD'
     /* 1090 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner25),
     /* 1093 */ // Label 64: @1093
     /* 1093 */ GIM_Try, /*On fail goto*//*Label 65*/ GIMT_Encode4(1104), // Rule ID 105 //
     /* 1098 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule61Enabled),
     /* 1101 */   // Combiner Rule #61: add_p2i_to_ptradd; wip_match_opcode 'G_ADD'
     /* 1101 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner33),
     /* 1104 */ // Label 65: @1104
     /* 1104 */ GIM_Try, /*On fail goto*//*Label 66*/ GIMT_Encode4(1115), // Rule ID 110 //
     /* 1109 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule64Enabled),
     /* 1112 */   // Combiner Rule #64: simplify_add_to_sub; wip_match_opcode 'G_ADD'
     /* 1112 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner34),
     /* 1115 */ // Label 66: @1115
     /* 1115 */ GIM_Try, /*On fail goto*//*Label 67*/ GIMT_Encode4(1149), // Rule ID 31 //
     /* 1120 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule12Enabled),
     /* 1123 */   // MIs[0] dst
     /* 1123 */   // No operand predicates
     /* 1123 */   // MIs[0] __add_sub_reg_match_0.tmp
     /* 1123 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1127 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
     /* 1131 */   // MIs[1] src
     /* 1131 */   // No operand predicates
     /* 1131 */   // MIs[1] __add_sub_reg_match_0.x
     /* 1131 */   // No operand predicates
     /* 1131 */   // MIs[0] __add_sub_reg_match_0.x
     /* 1131 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/2,
     /* 1136 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
     /* 1141 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1143 */   // Combiner Rule #12: add_sub_reg @ [__add_sub_reg_match_0[1]]
     /* 1143 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
     /* 1148 */   GIR_EraseRootFromParent_Done,
     /* 1149 */ // Label 67: @1149
     /* 1149 */ GIM_Try, /*On fail goto*//*Label 68*/ GIMT_Encode4(1183), // Rule ID 30 //
     /* 1154 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule12Enabled),
     /* 1157 */   // MIs[0] dst
     /* 1157 */   // No operand predicates
     /* 1157 */   // MIs[0] __add_sub_reg_match_0.x
     /* 1157 */   // No operand predicates
     /* 1157 */   // MIs[0] __add_sub_reg_match_0.tmp
     /* 1157 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
     /* 1161 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
     /* 1165 */   // MIs[1] src
     /* 1165 */   // No operand predicates
     /* 1165 */   // MIs[1] __add_sub_reg_match_0.x
     /* 1165 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/1, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
     /* 1170 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
     /* 1175 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1177 */   // Combiner Rule #12: add_sub_reg @ [__add_sub_reg_match_0[0]]
     /* 1177 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
     /* 1182 */   GIR_EraseRootFromParent_Done,
     /* 1183 */ // Label 68: @1183
     /* 1183 */ GIM_Try, /*On fail goto*//*Label 69*/ GIMT_Encode4(1206), // Rule ID 2 //
     /* 1188 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule1Enabled),
     /* 1191 */   // MIs[0] dst
     /* 1191 */   // No operand predicates
     /* 1191 */   // MIs[0] lhs
     /* 1191 */   // No operand predicates
     /* 1191 */   // MIs[0] Operand 2
     /* 1191 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /* 1195 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1200 */   // Combiner Rule #1: right_identity_zero @ [__right_identity_zero_match_0[1]]
     /* 1200 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1205 */   GIR_EraseRootFromParent_Done,
     /* 1206 */ // Label 69: @1206
     /* 1206 */ GIM_Try, /*On fail goto*//*Label 70*/ GIMT_Encode4(1217), // Rule ID 43 //
     /* 1211 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule23Enabled),
     /* 1214 */   // MIs[0] root
     /* 1214 */   // No operand predicates
     /* 1214 */   // MIs[0] src1
     /* 1214 */   // No operand predicates
     /* 1214 */   // MIs[0] src2
     /* 1214 */   // No operand predicates
     /* 1214 */   // Combiner Rule #23: reassoc_comm_binops
     /* 1214 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner9),
     /* 1217 */ // Label 70: @1217
     /* 1217 */ GIM_Reject,
     /* 1218 */ // Label 2: @1218
     /* 1218 */ GIM_Try, /*On fail goto*//*Label 71*/ GIMT_Encode4(1229), // Rule ID 94 //
     /* 1223 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule53Enabled),
     /* 1226 */   // Combiner Rule #53: propagate_undef_any_op; wip_match_opcode 'G_SUB'
     /* 1226 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner25),
     /* 1229 */ // Label 71: @1229
     /* 1229 */ GIM_Try, /*On fail goto*//*Label 72*/ GIMT_Encode4(1268), // Rule ID 13 //
     /* 1234 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule3Enabled),
     /* 1237 */   // MIs[0] dst
     /* 1237 */   // No operand predicates
     /* 1237 */   // MIs[0] x
     /* 1237 */   GIM_RecordRegType, /*MI*/0, /*Op*/1, /*TempTypeIdx*/255,
     /* 1241 */   // MIs[0] x
     /* 1241 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
     /* 1246 */   GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/255,
     /* 1249 */   GIR_BuildConstant, /*TempRegID*/0, /*Val*/GIMT_Encode8(0),
     /* 1259 */   // Combiner Rule #3: same_val_zero @ [__same_val_zero_match_0[0]]
     /* 1259 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::COPY),
     /* 1262 */   GIR_RootToRootCopy, /*OpIdx*/0, // dst
     /* 1264 */   GIR_AddSimpleTempRegister, /*InsnID*/0, /*TempRegID*/0,
     /* 1267 */   GIR_EraseRootFromParent_Done,
     /* 1268 */ // Label 72: @1268
     /* 1268 */ GIM_Try, /*On fail goto*//*Label 73*/ GIMT_Encode4(1291), // Rule ID 1 //
     /* 1273 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule1Enabled),
     /* 1276 */   // MIs[0] dst
     /* 1276 */   // No operand predicates
     /* 1276 */   // MIs[0] lhs
     /* 1276 */   // No operand predicates
     /* 1276 */   // MIs[0] Operand 2
     /* 1276 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /* 1280 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1285 */   // Combiner Rule #1: right_identity_zero @ [__right_identity_zero_match_0[0]]
     /* 1285 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1290 */   GIR_EraseRootFromParent_Done,
     /* 1291 */ // Label 73: @1291
     /* 1291 */ GIM_Try, /*On fail goto*//*Label 74*/ GIMT_Encode4(1312), // Rule ID 104 //
     /* 1296 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule60Enabled),
     /* 1299 */   // MIs[0] d
     /* 1299 */   // No operand predicates
     /* 1299 */   // MIs[0] op1
     /* 1299 */   // No operand predicates
     /* 1299 */   // MIs[0] c
     /* 1299 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
     /* 1303 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /* 1307 */   // MIs[1] imm
     /* 1307 */   // No operand predicates
     /* 1307 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1309 */   // Combiner Rule #60: sub_to_add
     /* 1309 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner32),
     /* 1312 */ // Label 74: @1312
     /* 1312 */ GIM_Reject,
     /* 1313 */ // Label 3: @1313
     /* 1313 */ GIM_Try, /*On fail goto*//*Label 75*/ GIMT_Encode4(1324), // Rule ID 77 //
     /* 1318 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule47Enabled),
     /* 1321 */   // Combiner Rule #47: undef_to_int_zero; wip_match_opcode 'G_MUL'
     /* 1321 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner20),
     /* 1324 */ // Label 75: @1324
     /* 1324 */ GIM_Try, /*On fail goto*//*Label 76*/ GIMT_Encode4(1364), // Rule ID 106 //
     /* 1329 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule62Enabled),
     /* 1332 */   // MIs[0] dst
     /* 1332 */   GIM_RecordRegType, /*MI*/0, /*Op*/0, /*TempTypeIdx*/255,
     /* 1336 */   // MIs[0] x
     /* 1336 */   // No operand predicates
     /* 1336 */   // MIs[0] Operand 2
     /* 1336 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 255,
     /* 1340 */   GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/255,
     /* 1343 */   GIR_BuildConstant, /*TempRegID*/0, /*Val*/GIMT_Encode8(0),
     /* 1353 */   // Combiner Rule #62: mul_by_neg_one
     /* 1353 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SUB),
     /* 1356 */   GIR_RootToRootCopy, /*OpIdx*/0, // dst
     /* 1358 */   GIR_AddSimpleTempRegister, /*InsnID*/0, /*TempRegID*/0,
     /* 1361 */   GIR_RootToRootCopy, /*OpIdx*/1, // x
     /* 1363 */   GIR_EraseRootFromParent_Done,
     /* 1364 */ // Label 76: @1364
     /* 1364 */ GIM_Try, /*On fail goto*//*Label 77*/ GIMT_Encode4(1404), // Rule ID 22 //
     /* 1369 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule4Enabled),
     /* 1372 */   // MIs[0] dst
     /* 1372 */   // No operand predicates
     /* 1372 */   // MIs[0] zero
     /* 1372 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1376 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /* 1380 */   // MIs[1] Operand 1
     /* 1380 */   GIM_CheckLiteralInt, /*MI*/1, /*Op*/1, GIMT_Encode8(0),
     /* 1391 */   // MIs[0] rhs
     /* 1391 */   // No operand predicates
     /* 1391 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1396 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1398 */   // Combiner Rule #4: binop_left_to_zero @ [__binop_left_to_zero_match_0[7]]
     /* 1398 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1403 */   GIR_EraseRootFromParent_Done,
     /* 1404 */ // Label 77: @1404
     /* 1404 */ GIM_Try, /*On fail goto*//*Label 78*/ GIMT_Encode4(1427), // Rule ID 23 //
     /* 1409 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule5Enabled),
     /* 1412 */   // MIs[0] dst
     /* 1412 */   // No operand predicates
     /* 1412 */   // MIs[0] lhs
     /* 1412 */   // No operand predicates
     /* 1412 */   // MIs[0] zero
     /* 1412 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /* 1416 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/2,
     /* 1421 */   // Combiner Rule #5: binop_right_to_zero
     /* 1421 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/2,
     /* 1426 */   GIR_EraseRootFromParent_Done,
     /* 1427 */ // Label 78: @1427
     /* 1427 */ GIM_Try, /*On fail goto*//*Label 79*/ GIMT_Encode4(1450), // Rule ID 28 //
     /* 1432 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule10Enabled),
     /* 1435 */   // MIs[0] dst
     /* 1435 */   // No operand predicates
     /* 1435 */   // MIs[0] x
     /* 1435 */   // No operand predicates
     /* 1435 */   // MIs[0] Operand 2
     /* 1435 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 1,
     /* 1439 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1444 */   // Combiner Rule #10: right_identity_one_int
     /* 1444 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1449 */   GIR_EraseRootFromParent_Done,
     /* 1450 */ // Label 79: @1450
     /* 1450 */ GIM_Try, /*On fail goto*//*Label 80*/ GIMT_Encode4(1461), // Rule ID 103 //
     /* 1455 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule59Enabled),
     /* 1458 */   // MIs[0] d
     /* 1458 */   // No operand predicates
     /* 1458 */   // MIs[0] op1
     /* 1458 */   // No operand predicates
     /* 1458 */   // MIs[0] op2
     /* 1458 */   // No operand predicates
     /* 1458 */   // Combiner Rule #59: mul_to_shl
     /* 1458 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner31),
     /* 1461 */ // Label 80: @1461
     /* 1461 */ GIM_Reject,
     /* 1462 */ // Label 4: @1462
     /* 1462 */ GIM_Try, /*On fail goto*//*Label 81*/ GIMT_Encode4(1502), // Rule ID 18 //
     /* 1467 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule4Enabled),
     /* 1470 */   // MIs[0] dst
     /* 1470 */   // No operand predicates
     /* 1470 */   // MIs[0] zero
     /* 1470 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1474 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /* 1478 */   // MIs[1] Operand 1
     /* 1478 */   GIM_CheckLiteralInt, /*MI*/1, /*Op*/1, GIMT_Encode8(0),
     /* 1489 */   // MIs[0] rhs
     /* 1489 */   // No operand predicates
     /* 1489 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1494 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1496 */   // Combiner Rule #4: binop_left_to_zero @ [__binop_left_to_zero_match_0[3]]
     /* 1496 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1501 */   GIR_EraseRootFromParent_Done,
     /* 1502 */ // Label 81: @1502
     /* 1502 */ GIM_Reject,
     /* 1503 */ // Label 5: @1503
     /* 1503 */ GIM_Try, /*On fail goto*//*Label 82*/ GIMT_Encode4(1514), // Rule ID 80 //
     /* 1508 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule49Enabled),
     /* 1511 */   // Combiner Rule #49: binop_left_undef_to_zero; wip_match_opcode 'G_UDIV'
     /* 1511 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner22),
     /* 1514 */ // Label 82: @1514
     /* 1514 */ GIM_Try, /*On fail goto*//*Label 83*/ GIMT_Encode4(1554), // Rule ID 19 //
     /* 1519 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule4Enabled),
     /* 1522 */   // MIs[0] dst
     /* 1522 */   // No operand predicates
     /* 1522 */   // MIs[0] zero
     /* 1522 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1526 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /* 1530 */   // MIs[1] Operand 1
     /* 1530 */   GIM_CheckLiteralInt, /*MI*/1, /*Op*/1, GIMT_Encode8(0),
     /* 1541 */   // MIs[0] rhs
     /* 1541 */   // No operand predicates
     /* 1541 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1546 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1548 */   // Combiner Rule #4: binop_left_to_zero @ [__binop_left_to_zero_match_0[4]]
     /* 1548 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1553 */   GIR_EraseRootFromParent_Done,
     /* 1554 */ // Label 83: @1554
     /* 1554 */ GIM_Reject,
     /* 1555 */ // Label 6: @1555
     /* 1555 */ GIM_Try, /*On fail goto*//*Label 84*/ GIMT_Encode4(1595), // Rule ID 20 //
     /* 1560 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule4Enabled),
     /* 1563 */   // MIs[0] dst
     /* 1563 */   // No operand predicates
     /* 1563 */   // MIs[0] zero
     /* 1563 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1567 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /* 1571 */   // MIs[1] Operand 1
     /* 1571 */   GIM_CheckLiteralInt, /*MI*/1, /*Op*/1, GIMT_Encode8(0),
     /* 1582 */   // MIs[0] rhs
     /* 1582 */   // No operand predicates
     /* 1582 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1587 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1589 */   // Combiner Rule #4: binop_left_to_zero @ [__binop_left_to_zero_match_0[5]]
     /* 1589 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1594 */   GIR_EraseRootFromParent_Done,
     /* 1595 */ // Label 84: @1595
     /* 1595 */ GIM_Reject,
     /* 1596 */ // Label 7: @1596
     /* 1596 */ GIM_Try, /*On fail goto*//*Label 85*/ GIMT_Encode4(1607), // Rule ID 81 //
     /* 1601 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule49Enabled),
     /* 1604 */   // Combiner Rule #49: binop_left_undef_to_zero; wip_match_opcode 'G_UREM'
     /* 1604 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner22),
     /* 1607 */ // Label 85: @1607
     /* 1607 */ GIM_Try, /*On fail goto*//*Label 86*/ GIMT_Encode4(1647), // Rule ID 21 //
     /* 1612 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule4Enabled),
     /* 1615 */   // MIs[0] dst
     /* 1615 */   // No operand predicates
     /* 1615 */   // MIs[0] zero
     /* 1615 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1619 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /* 1623 */   // MIs[1] Operand 1
     /* 1623 */   GIM_CheckLiteralInt, /*MI*/1, /*Op*/1, GIMT_Encode8(0),
     /* 1634 */   // MIs[0] rhs
     /* 1634 */   // No operand predicates
     /* 1634 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1639 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1641 */   // Combiner Rule #4: binop_left_to_zero @ [__binop_left_to_zero_match_0[6]]
     /* 1641 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1646 */   GIR_EraseRootFromParent_Done,
     /* 1647 */ // Label 86: @1647
     /* 1647 */ GIM_Reject,
     /* 1648 */ // Label 8: @1648
     /* 1648 */ GIM_Try, /*On fail goto*//*Label 87*/ GIMT_Encode4(1659), // Rule ID 60 //
     /* 1653 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule40Enabled),
     /* 1656 */   // Combiner Rule #40: overlapping_and; wip_match_opcode 'G_AND'
     /* 1656 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner13),
     /* 1659 */ // Label 87: @1659
     /* 1659 */ GIM_Try, /*On fail goto*//*Label 88*/ GIMT_Encode4(1670), // Rule ID 76 //
     /* 1664 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule47Enabled),
     /* 1667 */   // Combiner Rule #47: undef_to_int_zero; wip_match_opcode 'G_AND'
     /* 1667 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner20),
     /* 1670 */ // Label 88: @1670
     /* 1670 */ GIM_Try, /*On fail goto*//*Label 89*/ GIMT_Encode4(1694), // Rule ID 11 //
     /* 1675 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule2Enabled),
     /* 1678 */   // MIs[0] dst
     /* 1678 */   // No operand predicates
     /* 1678 */   // MIs[0] src
     /* 1678 */   // No operand predicates
     /* 1678 */   // MIs[0] src
     /* 1678 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
     /* 1683 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1688 */   // Combiner Rule #2: binop_same_val @ [__binop_same_val_match_0[0]]
     /* 1688 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1693 */   GIR_EraseRootFromParent_Done,
     /* 1694 */ // Label 89: @1694
     /* 1694 */ GIM_Reject,
     /* 1695 */ // Label 9: @1695
     /* 1695 */ GIM_Try, /*On fail goto*//*Label 90*/ GIMT_Encode4(1706), // Rule ID 78 //
     /* 1700 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule48Enabled),
     /* 1703 */   // Combiner Rule #48: undef_to_negative_one; wip_match_opcode 'G_OR'
     /* 1703 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner21),
     /* 1706 */ // Label 90: @1706
     /* 1706 */ GIM_Try, /*On fail goto*//*Label 91*/ GIMT_Encode4(1730), // Rule ID 12 //
     /* 1711 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule2Enabled),
     /* 1714 */   // MIs[0] dst
     /* 1714 */   // No operand predicates
     /* 1714 */   // MIs[0] src
     /* 1714 */   // No operand predicates
     /* 1714 */   // MIs[0] src
     /* 1714 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
     /* 1719 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1724 */   // Combiner Rule #2: binop_same_val @ [__binop_same_val_match_0[1]]
     /* 1724 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1729 */   GIR_EraseRootFromParent_Done,
     /* 1730 */ // Label 91: @1730
     /* 1730 */ GIM_Try, /*On fail goto*//*Label 92*/ GIMT_Encode4(1753), // Rule ID 3 //
     /* 1735 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule1Enabled),
     /* 1738 */   // MIs[0] dst
     /* 1738 */   // No operand predicates
     /* 1738 */   // MIs[0] lhs
     /* 1738 */   // No operand predicates
     /* 1738 */   // MIs[0] Operand 2
     /* 1738 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /* 1742 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1747 */   // Combiner Rule #1: right_identity_zero @ [__right_identity_zero_match_0[2]]
     /* 1747 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1752 */   GIR_EraseRootFromParent_Done,
     /* 1753 */ // Label 92: @1753
     /* 1753 */ GIM_Reject,
     /* 1754 */ // Label 10: @1754
     /* 1754 */ GIM_Try, /*On fail goto*//*Label 93*/ GIMT_Encode4(1765), // Rule ID 95 //
     /* 1759 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule53Enabled),
     /* 1762 */   // Combiner Rule #53: propagate_undef_any_op; wip_match_opcode 'G_XOR'
     /* 1762 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner25),
     /* 1765 */ // Label 93: @1765
     /* 1765 */ GIM_Try, /*On fail goto*//*Label 94*/ GIMT_Encode4(1804), // Rule ID 14 //
     /* 1770 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule3Enabled),
     /* 1773 */   // MIs[0] dst
     /* 1773 */   // No operand predicates
     /* 1773 */   // MIs[0] x
     /* 1773 */   GIM_RecordRegType, /*MI*/0, /*Op*/1, /*TempTypeIdx*/255,
     /* 1777 */   // MIs[0] x
     /* 1777 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
     /* 1782 */   GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/255,
     /* 1785 */   GIR_BuildConstant, /*TempRegID*/0, /*Val*/GIMT_Encode8(0),
     /* 1795 */   // Combiner Rule #3: same_val_zero @ [__same_val_zero_match_0[1]]
     /* 1795 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::COPY),
     /* 1798 */   GIR_RootToRootCopy, /*OpIdx*/0, // dst
     /* 1800 */   GIR_AddSimpleTempRegister, /*InsnID*/0, /*TempRegID*/0,
     /* 1803 */   GIR_EraseRootFromParent_Done,
     /* 1804 */ // Label 94: @1804
     /* 1804 */ GIM_Try, /*On fail goto*//*Label 95*/ GIMT_Encode4(1827), // Rule ID 4 //
     /* 1809 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule1Enabled),
     /* 1812 */   // MIs[0] dst
     /* 1812 */   // No operand predicates
     /* 1812 */   // MIs[0] lhs
     /* 1812 */   // No operand predicates
     /* 1812 */   // MIs[0] Operand 2
     /* 1812 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /* 1816 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1821 */   // Combiner Rule #1: right_identity_zero @ [__right_identity_zero_match_0[3]]
     /* 1821 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1826 */   GIR_EraseRootFromParent_Done,
     /* 1827 */ // Label 95: @1827
     /* 1827 */ GIM_Reject,
     /* 1828 */ // Label 11: @1828
     /* 1828 */ GIM_Try, /*On fail goto*//*Label 96*/ GIMT_Encode4(1839), // Rule ID 33 //
     /* 1833 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule13Enabled),
     /* 1836 */   // Combiner Rule #13: buildvector_identity_fold; wip_match_opcode 'G_BUILD_VECTOR'
     /* 1836 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner4),
     /* 1839 */ // Label 96: @1839
     /* 1839 */ GIM_Try, /*On fail goto*//*Label 97*/ GIMT_Encode4(1850), // Rule ID 97 //
     /* 1844 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule54Enabled),
     /* 1847 */   // Combiner Rule #54: propagate_undef_all_ops; wip_match_opcode 'G_BUILD_VECTOR'
     /* 1847 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner26),
     /* 1850 */ // Label 97: @1850
     /* 1850 */ GIM_Reject,
     /* 1851 */ // Label 12: @1851
     /* 1851 */ GIM_Try, /*On fail goto*//*Label 98*/ GIMT_Encode4(1862), // Rule ID 32 //
     /* 1856 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule13Enabled),
     /* 1859 */   // Combiner Rule #13: buildvector_identity_fold; wip_match_opcode 'G_BUILD_VECTOR_TRUNC'
     /* 1859 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner4),
     /* 1862 */ // Label 98: @1862
     /* 1862 */ GIM_Reject,
     /* 1863 */ // Label 13: @1863
     /* 1863 */ GIM_Try, /*On fail goto*//*Label 99*/ GIMT_Encode4(1884), // Rule ID 25 //
     /* 1868 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule7Enabled),
     /* 1871 */   // MIs[0] dst
     /* 1871 */   // No operand predicates
     /* 1871 */   // MIs[0] t
     /* 1871 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1875 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_INTTOPTR),
     /* 1879 */   // MIs[1] ptr
     /* 1879 */   // No operand predicates
     /* 1879 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1881 */   // Combiner Rule #7: i2p_to_p2i
     /* 1881 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner2),
     /* 1884 */ // Label 99: @1884
     /* 1884 */ GIM_Try, /*On fail goto*//*Label 100*/ GIMT_Encode4(1905), // Rule ID 89 //
     /* 1889 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule52Enabled),
     /* 1892 */   // MIs[0] dst
     /* 1892 */   // No operand predicates
     /* 1892 */   // MIs[0] __unary_undef_to_undef_match_0.x
     /* 1892 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1896 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
     /* 1900 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1902 */   // Combiner Rule #52: unary_undef_to_undef @ [__unary_undef_to_undef_match_0[3]]
     /* 1902 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner24),
     /* 1905 */ // Label 100: @1905
     /* 1905 */ GIM_Reject,
     /* 1906 */ // Label 14: @1906
     /* 1906 */ GIM_Try, /*On fail goto*//*Label 101*/ GIMT_Encode4(1917), // Rule ID 24 //
     /* 1911 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule6Enabled),
     /* 1914 */   // Combiner Rule #6: p2i_to_i2p; wip_match_opcode 'G_INTTOPTR'
     /* 1914 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner1),
     /* 1917 */ // Label 101: @1917
     /* 1917 */ GIM_Try, /*On fail goto*//*Label 102*/ GIMT_Encode4(1938), // Rule ID 90 //
     /* 1922 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule52Enabled),
     /* 1925 */   // MIs[0] dst
     /* 1925 */   // No operand predicates
     /* 1925 */   // MIs[0] __unary_undef_to_undef_match_0.x
     /* 1925 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1929 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
     /* 1933 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1935 */   // Combiner Rule #52: unary_undef_to_undef @ [__unary_undef_to_undef_match_0[4]]
     /* 1935 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner24),
     /* 1938 */ // Label 102: @1938
     /* 1938 */ GIM_Reject,
     /* 1939 */ // Label 15: @1939
     /* 1939 */ GIM_Try, /*On fail goto*//*Label 103*/ GIMT_Encode4(1971), // Rule ID 37 //
     /* 1944 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule17Enabled),
     /* 1947 */   // MIs[0] dst
     /* 1947 */   // No operand predicates
     /* 1947 */   // MIs[0] src1
     /* 1947 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1951 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BITCAST),
     /* 1955 */   // MIs[1] src0
     /* 1955 */   // No operand predicates
     /* 1955 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner1),
     /* 1959 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1961 */   // Combiner Rule #17: bitcast_bitcast_to_bitcast
     /* 1961 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_BITCAST),
     /* 1964 */   GIR_RootToRootCopy, /*OpIdx*/0, // dst
     /* 1966 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src0
     /* 1970 */   GIR_EraseRootFromParent_Done,
     /* 1971 */ // Label 103: @1971
     /* 1971 */ GIM_Try, /*On fail goto*//*Label 104*/ GIMT_Encode4(1992), // Rule ID 36 //
     /* 1976 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule16Enabled),
     /* 1979 */   // MIs[0] dst
     /* 1979 */   // No operand predicates
     /* 1979 */   // MIs[0] src1
     /* 1979 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1983 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BITCAST),
     /* 1987 */   // MIs[1] src0
     /* 1987 */   // No operand predicates
     /* 1987 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1989 */   // Combiner Rule #16: bitcast_bitcast_fold
     /* 1989 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner7),
     /* 1992 */ // Label 104: @1992
     /* 1992 */ GIM_Try, /*On fail goto*//*Label 105*/ GIMT_Encode4(2013), // Rule ID 87 //
     /* 1997 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule52Enabled),
     /* 2000 */   // MIs[0] dst
     /* 2000 */   // No operand predicates
     /* 2000 */   // MIs[0] __unary_undef_to_undef_match_0.x
     /* 2000 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2004 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
     /* 2008 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2010 */   // Combiner Rule #52: unary_undef_to_undef @ [__unary_undef_to_undef_match_0[1]]
     /* 2010 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner24),
     /* 2013 */ // Label 105: @2013
     /* 2013 */ GIM_Reject,
     /* 2014 */ // Label 16: @2014
     /* 2014 */ GIM_Try, /*On fail goto*//*Label 106*/ GIMT_Encode4(2043), // Rule ID 107 //
     /* 2019 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule63Enabled),
     /* 2022 */   // MIs[0] dst
     /* 2022 */   // No operand predicates
     /* 2022 */   // MIs[0] src
     /* 2022 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2026 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FREEZE),
     /* 2030 */   // MIs[1] __idempotent_prop_match_0.x
     /* 2030 */   // No operand predicates
     /* 2030 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2035 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2037 */   // Combiner Rule #63: idempotent_prop @ [__idempotent_prop_match_0[0]]
     /* 2037 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2042 */   GIR_EraseRootFromParent_Done,
     /* 2043 */ // Label 106: @2043
     /* 2043 */ GIM_Reject,
     /* 2044 */ // Label 17: @2044
     /* 2044 */ GIM_Try, /*On fail goto*//*Label 107*/ GIMT_Encode4(2065), // Rule ID 52 //
     /* 2049 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule32Enabled),
     /* 2052 */   // MIs[0] dst
     /* 2052 */   // No operand predicates
     /* 2052 */   // MIs[0] src0
     /* 2052 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2056 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 2060 */   // MIs[1] cst
     /* 2060 */   // No operand predicates
     /* 2060 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2062 */   // Combiner Rule #32: constant_fold_intrinsic_trunc
     /* 2062 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner10),
     /* 2065 */ // Label 107: @2065
     /* 2065 */ GIM_Reject,
     /* 2066 */ // Label 18: @2066
     /* 2066 */ GIM_Try, /*On fail goto*//*Label 108*/ GIMT_Encode4(2087), // Rule ID 53 //
     /* 2071 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule33Enabled),
     /* 2074 */   // MIs[0] dst
     /* 2074 */   // No operand predicates
     /* 2074 */   // MIs[0] src0
     /* 2074 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2078 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 2082 */   // MIs[1] cst
     /* 2082 */   // No operand predicates
     /* 2082 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2084 */   // Combiner Rule #33: constant_fold_intrinsic_round
     /* 2084 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner10),
     /* 2087 */ // Label 108: @2087
     /* 2087 */ GIM_Reject,
     /* 2088 */ // Label 19: @2088
     /* 2088 */ GIM_Try, /*On fail goto*//*Label 109*/ GIMT_Encode4(2109), // Rule ID 54 //
     /* 2093 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule34Enabled),
     /* 2096 */   // MIs[0] dst
     /* 2096 */   // No operand predicates
     /* 2096 */   // MIs[0] src0
     /* 2096 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2100 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 2104 */   // MIs[1] cst
     /* 2104 */   // No operand predicates
     /* 2104 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2106 */   // Combiner Rule #34: constant_fold_intrinsic_roundeven
     /* 2106 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner10),
     /* 2109 */ // Label 109: @2109
     /* 2109 */ GIM_Reject,
     /* 2110 */ // Label 20: @2110
     /* 2110 */ GIM_Try, /*On fail goto*//*Label 110*/ GIMT_Encode4(2121), // Rule ID 99 //
     /* 2115 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule56Enabled),
     /* 2118 */   // Combiner Rule #56: erase_undef_store; wip_match_opcode 'G_STORE'
     /* 2118 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner28),
     /* 2121 */ // Label 110: @2121
     /* 2121 */ GIM_Reject,
     /* 2122 */ // Label 21: @2122
     /* 2122 */ GIM_Try, /*On fail goto*//*Label 111*/ GIMT_Encode4(2133), // Rule ID 26 //
     /* 2127 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule8Enabled),
     /* 2130 */   // Combiner Rule #8: anyext_trunc_fold; wip_match_opcode 'G_ANYEXT'
     /* 2130 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner3),
     /* 2133 */ // Label 111: @2133
     /* 2133 */ GIM_Try, /*On fail goto*//*Label 112*/ GIMT_Encode4(2154), // Rule ID 88 //
     /* 2138 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule52Enabled),
     /* 2141 */   // MIs[0] dst
     /* 2141 */   // No operand predicates
     /* 2141 */   // MIs[0] __unary_undef_to_undef_match_0.x
     /* 2141 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2145 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
     /* 2149 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2151 */   // Combiner Rule #52: unary_undef_to_undef @ [__unary_undef_to_undef_match_0[2]]
     /* 2151 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner24),
     /* 2154 */ // Label 112: @2154
     /* 2154 */ GIM_Reject,
     /* 2155 */ // Label 22: @2155
     /* 2155 */ GIM_Try, /*On fail goto*//*Label 113*/ GIMT_Encode4(2166), // Rule ID 34 //
     /* 2160 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule14Enabled),
     /* 2163 */   // Combiner Rule #14: trunc_buildvector_fold; wip_match_opcode 'G_TRUNC'
     /* 2163 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner5),
     /* 2166 */ // Label 113: @2166
     /* 2166 */ GIM_Try, /*On fail goto*//*Label 114*/ GIMT_Encode4(2177), // Rule ID 35 //
     /* 2171 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule15Enabled),
     /* 2174 */   // Combiner Rule #15: trunc_lshr_buildvector_fold; wip_match_opcode 'G_TRUNC'
     /* 2174 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner6),
     /* 2177 */ // Label 114: @2177
     /* 2177 */ GIM_Try, /*On fail goto*//*Label 115*/ GIMT_Encode4(2198), // Rule ID 86 //
     /* 2182 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule52Enabled),
     /* 2185 */   // MIs[0] dst
     /* 2185 */   // No operand predicates
     /* 2185 */   // MIs[0] __unary_undef_to_undef_match_0.x
     /* 2185 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2189 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
     /* 2193 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2195 */   // Combiner Rule #52: unary_undef_to_undef @ [__unary_undef_to_undef_match_0[0]]
     /* 2195 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner24),
     /* 2198 */ // Label 115: @2198
     /* 2198 */ GIM_Reject,
     /* 2199 */ // Label 23: @2199
     /* 2199 */ GIM_Try, /*On fail goto*//*Label 116*/ GIMT_Encode4(2210), // Rule ID 79 //
     /* 2204 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule49Enabled),
     /* 2207 */   // Combiner Rule #49: binop_left_undef_to_zero; wip_match_opcode 'G_SHL'
     /* 2207 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner22),
     /* 2210 */ // Label 116: @2210
     /* 2210 */ GIM_Try, /*On fail goto*//*Label 117*/ GIMT_Encode4(2221), // Rule ID 82 //
     /* 2215 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule50Enabled),
     /* 2218 */   // Combiner Rule #50: binop_right_undef_to_undef; wip_match_opcode 'G_SHL'
     /* 2218 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner23),
     /* 2221 */ // Label 117: @2221
     /* 2221 */ GIM_Try, /*On fail goto*//*Label 118*/ GIMT_Encode4(2261), // Rule ID 15 //
     /* 2226 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule4Enabled),
     /* 2229 */   // MIs[0] dst
     /* 2229 */   // No operand predicates
     /* 2229 */   // MIs[0] zero
     /* 2229 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2233 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /* 2237 */   // MIs[1] Operand 1
     /* 2237 */   GIM_CheckLiteralInt, /*MI*/1, /*Op*/1, GIMT_Encode8(0),
     /* 2248 */   // MIs[0] rhs
     /* 2248 */   // No operand predicates
     /* 2248 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2253 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2255 */   // Combiner Rule #4: binop_left_to_zero @ [__binop_left_to_zero_match_0[0]]
     /* 2255 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2260 */   GIR_EraseRootFromParent_Done,
     /* 2261 */ // Label 118: @2261
     /* 2261 */ GIM_Try, /*On fail goto*//*Label 119*/ GIMT_Encode4(2284), // Rule ID 5 //
     /* 2266 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule1Enabled),
     /* 2269 */   // MIs[0] dst
     /* 2269 */   // No operand predicates
     /* 2269 */   // MIs[0] lhs
     /* 2269 */   // No operand predicates
     /* 2269 */   // MIs[0] Operand 2
     /* 2269 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /* 2273 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2278 */   // Combiner Rule #1: right_identity_zero @ [__right_identity_zero_match_0[4]]
     /* 2278 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2283 */   GIR_EraseRootFromParent_Done,
     /* 2284 */ // Label 119: @2284
     /* 2284 */ GIM_Reject,
     /* 2285 */ // Label 24: @2285
     /* 2285 */ GIM_Try, /*On fail goto*//*Label 120*/ GIMT_Encode4(2296), // Rule ID 84 //
     /* 2290 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule50Enabled),
     /* 2293 */   // Combiner Rule #50: binop_right_undef_to_undef; wip_match_opcode 'G_LSHR'
     /* 2293 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner23),
     /* 2296 */ // Label 120: @2296
     /* 2296 */ GIM_Try, /*On fail goto*//*Label 121*/ GIMT_Encode4(2336), // Rule ID 16 //
     /* 2301 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule4Enabled),
     /* 2304 */   // MIs[0] dst
     /* 2304 */   // No operand predicates
     /* 2304 */   // MIs[0] zero
     /* 2304 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2308 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /* 2312 */   // MIs[1] Operand 1
     /* 2312 */   GIM_CheckLiteralInt, /*MI*/1, /*Op*/1, GIMT_Encode8(0),
     /* 2323 */   // MIs[0] rhs
     /* 2323 */   // No operand predicates
     /* 2323 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2328 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2330 */   // Combiner Rule #4: binop_left_to_zero @ [__binop_left_to_zero_match_0[1]]
     /* 2330 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2335 */   GIR_EraseRootFromParent_Done,
     /* 2336 */ // Label 121: @2336
     /* 2336 */ GIM_Try, /*On fail goto*//*Label 122*/ GIMT_Encode4(2359), // Rule ID 7 //
     /* 2341 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule1Enabled),
     /* 2344 */   // MIs[0] dst
     /* 2344 */   // No operand predicates
     /* 2344 */   // MIs[0] lhs
     /* 2344 */   // No operand predicates
     /* 2344 */   // MIs[0] Operand 2
     /* 2344 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /* 2348 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2353 */   // Combiner Rule #1: right_identity_zero @ [__right_identity_zero_match_0[6]]
     /* 2353 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2358 */   GIR_EraseRootFromParent_Done,
     /* 2359 */ // Label 122: @2359
     /* 2359 */ GIM_Reject,
     /* 2360 */ // Label 25: @2360
     /* 2360 */ GIM_Try, /*On fail goto*//*Label 123*/ GIMT_Encode4(2371), // Rule ID 83 //
     /* 2365 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule50Enabled),
     /* 2368 */   // Combiner Rule #50: binop_right_undef_to_undef; wip_match_opcode 'G_ASHR'
     /* 2368 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner23),
     /* 2371 */ // Label 123: @2371
     /* 2371 */ GIM_Try, /*On fail goto*//*Label 124*/ GIMT_Encode4(2411), // Rule ID 17 //
     /* 2376 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule4Enabled),
     /* 2379 */   // MIs[0] dst
     /* 2379 */   // No operand predicates
     /* 2379 */   // MIs[0] zero
     /* 2379 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2383 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /* 2387 */   // MIs[1] Operand 1
     /* 2387 */   GIM_CheckLiteralInt, /*MI*/1, /*Op*/1, GIMT_Encode8(0),
     /* 2398 */   // MIs[0] rhs
     /* 2398 */   // No operand predicates
     /* 2398 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2403 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2405 */   // Combiner Rule #4: binop_left_to_zero @ [__binop_left_to_zero_match_0[2]]
     /* 2405 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2410 */   GIR_EraseRootFromParent_Done,
     /* 2411 */ // Label 124: @2411
     /* 2411 */ GIM_Try, /*On fail goto*//*Label 125*/ GIMT_Encode4(2434), // Rule ID 6 //
     /* 2416 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule1Enabled),
     /* 2419 */   // MIs[0] dst
     /* 2419 */   // No operand predicates
     /* 2419 */   // MIs[0] lhs
     /* 2419 */   // No operand predicates
     /* 2419 */   // MIs[0] Operand 2
     /* 2419 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /* 2423 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2428 */   // Combiner Rule #1: right_identity_zero @ [__right_identity_zero_match_0[5]]
     /* 2428 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2433 */   GIR_EraseRootFromParent_Done,
     /* 2434 */ // Label 125: @2434
     /* 2434 */ GIM_Reject,
     /* 2435 */ // Label 26: @2435
     /* 2435 */ GIM_Try, /*On fail goto*//*Label 126*/ GIMT_Encode4(2458), // Rule ID 10 //
     /* 2440 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule1Enabled),
     /* 2443 */   // MIs[0] dst
     /* 2443 */   // No operand predicates
     /* 2443 */   // MIs[0] lhs
     /* 2443 */   // No operand predicates
     /* 2443 */   // MIs[0] Operand 2
     /* 2443 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /* 2447 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2452 */   // Combiner Rule #1: right_identity_zero @ [__right_identity_zero_match_0[9]]
     /* 2452 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2457 */   GIR_EraseRootFromParent_Done,
     /* 2458 */ // Label 126: @2458
     /* 2458 */ GIM_Reject,
     /* 2459 */ // Label 27: @2459
     /* 2459 */ GIM_Try, /*On fail goto*//*Label 127*/ GIMT_Encode4(2482), // Rule ID 9 //
     /* 2464 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule1Enabled),
     /* 2467 */   // MIs[0] dst
     /* 2467 */   // No operand predicates
     /* 2467 */   // MIs[0] lhs
     /* 2467 */   // No operand predicates
     /* 2467 */   // MIs[0] Operand 2
     /* 2467 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /* 2471 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2476 */   // Combiner Rule #1: right_identity_zero @ [__right_identity_zero_match_0[8]]
     /* 2476 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2481 */   GIR_EraseRootFromParent_Done,
     /* 2482 */ // Label 127: @2482
     /* 2482 */ GIM_Reject,
     /* 2483 */ // Label 28: @2483
     /* 2483 */ GIM_Try, /*On fail goto*//*Label 128*/ GIMT_Encode4(2494), // Rule ID 0 //
     /* 2488 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule0Enabled),
     /* 2491 */   // Combiner Rule #0: select_same_val; wip_match_opcode 'G_SELECT'
     /* 2491 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner0),
     /* 2494 */ // Label 128: @2494
     /* 2494 */ GIM_Reject,
     /* 2495 */ // Label 29: @2495
     /* 2495 */ GIM_Try, /*On fail goto*//*Label 129*/ GIMT_Encode4(2506), // Rule ID 65 //
     /* 2500 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule43Enabled),
     /* 2503 */   // Combiner Rule #43: adde_to_addo; wip_match_opcode 'G_UADDE'
     /* 2503 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner16),
     /* 2506 */ // Label 129: @2506
     /* 2506 */ GIM_Reject,
     /* 2507 */ // Label 30: @2507
     /* 2507 */ GIM_Try, /*On fail goto*//*Label 130*/ GIMT_Encode4(2518), // Rule ID 67 //
     /* 2512 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule43Enabled),
     /* 2515 */   // Combiner Rule #43: adde_to_addo; wip_match_opcode 'G_USUBE'
     /* 2515 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner16),
     /* 2518 */ // Label 130: @2518
     /* 2518 */ GIM_Reject,
     /* 2519 */ // Label 31: @2519
     /* 2519 */ GIM_Try, /*On fail goto*//*Label 131*/ GIMT_Encode4(2530), // Rule ID 66 //
     /* 2524 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule43Enabled),
     /* 2527 */   // Combiner Rule #43: adde_to_addo; wip_match_opcode 'G_SADDE'
     /* 2527 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner16),
     /* 2530 */ // Label 131: @2530
     /* 2530 */ GIM_Reject,
     /* 2531 */ // Label 32: @2531
     /* 2531 */ GIM_Try, /*On fail goto*//*Label 132*/ GIMT_Encode4(2542), // Rule ID 68 //
     /* 2536 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule43Enabled),
     /* 2539 */   // Combiner Rule #43: adde_to_addo; wip_match_opcode 'G_SSUBE'
     /* 2539 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner16),
     /* 2542 */ // Label 132: @2542
     /* 2542 */ GIM_Reject,
     /* 2543 */ // Label 33: @2543
     /* 2543 */ GIM_Try, /*On fail goto*//*Label 133*/ GIMT_Encode4(2554), // Rule ID 61 //
     /* 2548 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule41Enabled),
     /* 2551 */   // Combiner Rule #41: mulo_by_2; wip_match_opcode 'G_UMULO'
     /* 2551 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner14),
     /* 2554 */ // Label 133: @2554
     /* 2554 */ GIM_Try, /*On fail goto*//*Label 134*/ GIMT_Encode4(2565), // Rule ID 63 //
     /* 2559 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule42Enabled),
     /* 2562 */   // Combiner Rule #42: mulo_by_0; wip_match_opcode 'G_UMULO'
     /* 2562 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner15),
     /* 2565 */ // Label 134: @2565
     /* 2565 */ GIM_Reject,
     /* 2566 */ // Label 34: @2566
     /* 2566 */ GIM_Try, /*On fail goto*//*Label 135*/ GIMT_Encode4(2577), // Rule ID 62 //
     /* 2571 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule41Enabled),
     /* 2574 */   // Combiner Rule #41: mulo_by_2; wip_match_opcode 'G_SMULO'
     /* 2574 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner14),
     /* 2577 */ // Label 135: @2577
     /* 2577 */ GIM_Try, /*On fail goto*//*Label 136*/ GIMT_Encode4(2588), // Rule ID 64 //
     /* 2582 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule42Enabled),
     /* 2585 */   // Combiner Rule #42: mulo_by_0; wip_match_opcode 'G_SMULO'
     /* 2585 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner15),
     /* 2588 */ // Label 136: @2588
     /* 2588 */ GIM_Reject,
     /* 2589 */ // Label 35: @2589
     /* 2589 */ GIM_Try, /*On fail goto*//*Label 137*/ GIMT_Encode4(2612), // Rule ID 39 //
     /* 2594 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule19Enabled),
     /* 2597 */   // MIs[0] dst
     /* 2597 */   // No operand predicates
     /* 2597 */   // MIs[0] x
     /* 2597 */   // No operand predicates
     /* 2597 */   // MIs[0] y
     /* 2597 */   // No operand predicates
     /* 2597 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner2),
     /* 2601 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2606 */   // Combiner Rule #19: right_identity_neg_zero_fp
     /* 2606 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2611 */   GIR_EraseRootFromParent_Done,
     /* 2612 */ // Label 137: @2612
     /* 2612 */ GIM_Try, /*On fail goto*//*Label 138*/ GIMT_Encode4(2641), // Rule ID 40 //
     /* 2617 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule20Enabled),
     /* 2620 */   GIM_MIFlags, /*MI*/0, GIMT_Encode4(MachineInstr::FmNsz),
     /* 2626 */   // MIs[0] dst
     /* 2626 */   // No operand predicates
     /* 2626 */   // MIs[0] x
     /* 2626 */   // No operand predicates
     /* 2626 */   // MIs[0] y
     /* 2626 */   // No operand predicates
     /* 2626 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner3),
     /* 2630 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2635 */   // Combiner Rule #20: right_identity_neg_zero_fp_nsz
     /* 2635 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2640 */   GIR_EraseRootFromParent_Done,
     /* 2641 */ // Label 138: @2641
     /* 2641 */ GIM_Reject,
     /* 2642 */ // Label 36: @2642
     /* 2642 */ GIM_Try, /*On fail goto*//*Label 139*/ GIMT_Encode4(2665), // Rule ID 29 //
     /* 2647 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule11Enabled),
     /* 2650 */   // MIs[0] dst
     /* 2650 */   // No operand predicates
     /* 2650 */   // MIs[0] x
     /* 2650 */   // No operand predicates
     /* 2650 */   // MIs[0] y
     /* 2650 */   // No operand predicates
     /* 2650 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner0),
     /* 2654 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2659 */   // Combiner Rule #11: right_identity_one_fp
     /* 2659 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2664 */   GIR_EraseRootFromParent_Done,
     /* 2665 */ // Label 139: @2665
     /* 2665 */ GIM_Try, /*On fail goto*//*Label 140*/ GIMT_Encode4(2685), // Rule ID 41 //
     /* 2670 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule21Enabled),
     /* 2673 */   // MIs[0] dst
     /* 2673 */   // No operand predicates
     /* 2673 */   // MIs[0] x
     /* 2673 */   // No operand predicates
     /* 2673 */   // MIs[0] y
     /* 2673 */   // No operand predicates
     /* 2673 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner4),
     /* 2677 */   // Combiner Rule #21: right_identity_neg_one_fp
     /* 2677 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_FNEG),
     /* 2680 */   GIR_RootToRootCopy, /*OpIdx*/0, // dst
     /* 2682 */   GIR_RootToRootCopy, /*OpIdx*/1, // x
     /* 2684 */   GIR_EraseRootFromParent_Done,
     /* 2685 */ // Label 140: @2685
     /* 2685 */ GIM_Reject,
     /* 2686 */ // Label 37: @2686
     /* 2686 */ GIM_Try, /*On fail goto*//*Label 141*/ GIMT_Encode4(2707), // Rule ID 73 //
     /* 2691 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule45Enabled),
     /* 2694 */   // MIs[0] dst
     /* 2694 */   // No operand predicates
     /* 2694 */   // MIs[0] float
     /* 2694 */   // No operand predicates
     /* 2694 */   // MIs[0] int
     /* 2694 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
     /* 2698 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /* 2702 */   // MIs[1] imm
     /* 2702 */   // No operand predicates
     /* 2702 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2704 */   // Combiner Rule #45: expand_const_fpowi
     /* 2704 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner18),
     /* 2707 */ // Label 141: @2707
     /* 2707 */ GIM_Reject,
     /* 2708 */ // Label 38: @2708
     /* 2708 */ GIM_Try, /*On fail goto*//*Label 142*/ GIMT_Encode4(2729), // Rule ID 47 //
     /* 2713 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule27Enabled),
     /* 2716 */   // MIs[0] dst
     /* 2716 */   // No operand predicates
     /* 2716 */   // MIs[0] src0
     /* 2716 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2720 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 2724 */   // MIs[1] cst
     /* 2724 */   // No operand predicates
     /* 2724 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2726 */   // Combiner Rule #27: constant_fold_flog2
     /* 2726 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner10),
     /* 2729 */ // Label 142: @2729
     /* 2729 */ GIM_Reject,
     /* 2730 */ // Label 39: @2730
     /* 2730 */ GIM_Try, /*On fail goto*//*Label 143*/ GIMT_Encode4(2751), // Rule ID 44 //
     /* 2735 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule24Enabled),
     /* 2738 */   // MIs[0] dst
     /* 2738 */   // No operand predicates
     /* 2738 */   // MIs[0] src0
     /* 2738 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2742 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 2746 */   // MIs[1] cst
     /* 2746 */   // No operand predicates
     /* 2746 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2748 */   // Combiner Rule #24: constant_fold_fneg
     /* 2748 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner10),
     /* 2751 */ // Label 143: @2751
     /* 2751 */ GIM_Try, /*On fail goto*//*Label 144*/ GIMT_Encode4(2780), // Rule ID 27 //
     /* 2756 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule9Enabled),
     /* 2759 */   // MIs[0] dst
     /* 2759 */   // No operand predicates
     /* 2759 */   // MIs[0] t
     /* 2759 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2763 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FNEG),
     /* 2767 */   // MIs[1] src
     /* 2767 */   // No operand predicates
     /* 2767 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
     /* 2772 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2774 */   // Combiner Rule #9: fneg_fneg_fold
     /* 2774 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
     /* 2779 */   GIR_EraseRootFromParent_Done,
     /* 2780 */ // Label 144: @2780
     /* 2780 */ GIM_Reject,
     /* 2781 */ // Label 40: @2781
     /* 2781 */ GIM_Try, /*On fail goto*//*Label 145*/ GIMT_Encode4(2802), // Rule ID 49 //
     /* 2786 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule29Enabled),
     /* 2789 */   // MIs[0] dst
     /* 2789 */   // No operand predicates
     /* 2789 */   // MIs[0] src0
     /* 2789 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2793 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 2797 */   // MIs[1] cst
     /* 2797 */   // No operand predicates
     /* 2797 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2799 */   // Combiner Rule #29: constant_fold_fpext
     /* 2799 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner10),
     /* 2802 */ // Label 145: @2802
     /* 2802 */ GIM_Reject,
     /* 2803 */ // Label 41: @2803
     /* 2803 */ GIM_Try, /*On fail goto*//*Label 146*/ GIMT_Encode4(2824), // Rule ID 48 //
     /* 2808 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule28Enabled),
     /* 2811 */   // MIs[0] dst
     /* 2811 */   // No operand predicates
     /* 2811 */   // MIs[0] src0
     /* 2811 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2815 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 2819 */   // MIs[1] cst
     /* 2819 */   // No operand predicates
     /* 2819 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2821 */   // Combiner Rule #28: constant_fold_fptrunc
     /* 2821 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner10),
     /* 2824 */ // Label 146: @2824
     /* 2824 */ GIM_Try, /*On fail goto*//*Label 147*/ GIMT_Encode4(2845), // Rule ID 38 //
     /* 2829 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule18Enabled),
     /* 2832 */   // MIs[0] dst
     /* 2832 */   // No operand predicates
     /* 2832 */   // MIs[0] src1
     /* 2832 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2836 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FPEXT),
     /* 2840 */   // MIs[1] src0
     /* 2840 */   // No operand predicates
     /* 2840 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2842 */   // Combiner Rule #18: fptrunc_fpext_fold
     /* 2842 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner7),
     /* 2845 */ // Label 147: @2845
     /* 2845 */ GIM_Reject,
     /* 2846 */ // Label 42: @2846
     /* 2846 */ GIM_Try, /*On fail goto*//*Label 148*/ GIMT_Encode4(2867), // Rule ID 91 //
     /* 2851 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule52Enabled),
     /* 2854 */   // MIs[0] dst
     /* 2854 */   // No operand predicates
     /* 2854 */   // MIs[0] __unary_undef_to_undef_match_0.x
     /* 2854 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2858 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
     /* 2862 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2864 */   // Combiner Rule #52: unary_undef_to_undef @ [__unary_undef_to_undef_match_0[5]]
     /* 2864 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner24),
     /* 2867 */ // Label 148: @2867
     /* 2867 */ GIM_Reject,
     /* 2868 */ // Label 43: @2868
     /* 2868 */ GIM_Try, /*On fail goto*//*Label 149*/ GIMT_Encode4(2889), // Rule ID 92 //
     /* 2873 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule52Enabled),
     /* 2876 */   // MIs[0] dst
     /* 2876 */   // No operand predicates
     /* 2876 */   // MIs[0] __unary_undef_to_undef_match_0.x
     /* 2876 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2880 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
     /* 2884 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2886 */   // Combiner Rule #52: unary_undef_to_undef @ [__unary_undef_to_undef_match_0[6]]
     /* 2886 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner24),
     /* 2889 */ // Label 149: @2889
     /* 2889 */ GIM_Reject,
     /* 2890 */ // Label 44: @2890
     /* 2890 */ GIM_Try, /*On fail goto*//*Label 150*/ GIMT_Encode4(2901), // Rule ID 75 //
     /* 2895 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule46Enabled),
     /* 2898 */   // Combiner Rule #46: undef_to_fp_zero; wip_match_opcode 'G_SITOFP'
     /* 2898 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner19),
     /* 2901 */ // Label 150: @2901
     /* 2901 */ GIM_Try, /*On fail goto*//*Label 151*/ GIMT_Encode4(2916), // Rule ID 57 //
     /* 2906 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule37Enabled),
     /* 2909 */   // MIs[0] dst
     /* 2909 */   // No operand predicates
     /* 2909 */   // MIs[0] Operand 1
     /* 2909 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/1, 0,
     /* 2913 */   // Combiner Rule #37: itof_const_zero_fold_si
     /* 2913 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner11),
     /* 2916 */ // Label 151: @2916
     /* 2916 */ GIM_Reject,
     /* 2917 */ // Label 45: @2917
     /* 2917 */ GIM_Try, /*On fail goto*//*Label 152*/ GIMT_Encode4(2928), // Rule ID 74 //
     /* 2922 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule46Enabled),
     /* 2925 */   // Combiner Rule #46: undef_to_fp_zero; wip_match_opcode 'G_UITOFP'
     /* 2925 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner19),
     /* 2928 */ // Label 152: @2928
     /* 2928 */ GIM_Try, /*On fail goto*//*Label 153*/ GIMT_Encode4(2943), // Rule ID 58 //
     /* 2933 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule38Enabled),
     /* 2936 */   // MIs[0] dst
     /* 2936 */   // No operand predicates
     /* 2936 */   // MIs[0] Operand 1
     /* 2936 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/1, 0,
     /* 2940 */   // Combiner Rule #38: itof_const_zero_fold_ui
     /* 2940 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner11),
     /* 2943 */ // Label 153: @2943
     /* 2943 */ GIM_Reject,
     /* 2944 */ // Label 46: @2944
     /* 2944 */ GIM_Try, /*On fail goto*//*Label 154*/ GIMT_Encode4(2973), // Rule ID 108 //
     /* 2949 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule63Enabled),
     /* 2952 */   // MIs[0] dst
     /* 2952 */   // No operand predicates
     /* 2952 */   // MIs[0] src
     /* 2952 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2956 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FABS),
     /* 2960 */   // MIs[1] __idempotent_prop_match_0.x
     /* 2960 */   // No operand predicates
     /* 2960 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2965 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2967 */   // Combiner Rule #63: idempotent_prop @ [__idempotent_prop_match_0[1]]
     /* 2967 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2972 */   GIR_EraseRootFromParent_Done,
     /* 2973 */ // Label 154: @2973
     /* 2973 */ GIM_Try, /*On fail goto*//*Label 155*/ GIMT_Encode4(2994), // Rule ID 45 //
     /* 2978 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule25Enabled),
     /* 2981 */   // MIs[0] dst
     /* 2981 */   // No operand predicates
     /* 2981 */   // MIs[0] src0
     /* 2981 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2985 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 2989 */   // MIs[1] cst
     /* 2989 */   // No operand predicates
     /* 2989 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2991 */   // Combiner Rule #25: constant_fold_fabs
     /* 2991 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner10),
     /* 2994 */ // Label 155: @2994
     /* 2994 */ GIM_Reject,
     /* 2995 */ // Label 47: @2995
     /* 2995 */ GIM_Try, /*On fail goto*//*Label 156*/ GIMT_Encode4(3024), // Rule ID 109 //
     /* 3000 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule63Enabled),
     /* 3003 */   // MIs[0] dst
     /* 3003 */   // No operand predicates
     /* 3003 */   // MIs[0] src
     /* 3003 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 3007 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCANONICALIZE),
     /* 3011 */   // MIs[1] __idempotent_prop_match_0.x
     /* 3011 */   // No operand predicates
     /* 3011 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 3016 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 3018 */   // Combiner Rule #63: idempotent_prop @ [__idempotent_prop_match_0[2]]
     /* 3018 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 3023 */   GIR_EraseRootFromParent_Done,
     /* 3024 */ // Label 156: @3024
     /* 3024 */ GIM_Reject,
     /* 3025 */ // Label 48: @3025
     /* 3025 */ GIM_Try, /*On fail goto*//*Label 157*/ GIMT_Encode4(3036), // Rule ID 69 //
     /* 3030 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule44Enabled),
     /* 3033 */   // Combiner Rule #44: combine_minmax_nan; wip_match_opcode 'G_FMINNUM'
     /* 3033 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner17),
     /* 3036 */ // Label 157: @3036
     /* 3036 */ GIM_Reject,
     /* 3037 */ // Label 49: @3037
     /* 3037 */ GIM_Try, /*On fail goto*//*Label 158*/ GIMT_Encode4(3048), // Rule ID 70 //
     /* 3042 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule44Enabled),
     /* 3045 */   // Combiner Rule #44: combine_minmax_nan; wip_match_opcode 'G_FMAXNUM'
     /* 3045 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner17),
     /* 3048 */ // Label 158: @3048
     /* 3048 */ GIM_Reject,
     /* 3049 */ // Label 50: @3049
     /* 3049 */ GIM_Try, /*On fail goto*//*Label 159*/ GIMT_Encode4(3060), // Rule ID 71 //
     /* 3054 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule44Enabled),
     /* 3057 */   // Combiner Rule #44: combine_minmax_nan; wip_match_opcode 'G_FMINIMUM'
     /* 3057 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner17),
     /* 3060 */ // Label 159: @3060
     /* 3060 */ GIM_Reject,
     /* 3061 */ // Label 51: @3061
     /* 3061 */ GIM_Try, /*On fail goto*//*Label 160*/ GIMT_Encode4(3072), // Rule ID 72 //
     /* 3066 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule44Enabled),
     /* 3069 */   // Combiner Rule #44: combine_minmax_nan; wip_match_opcode 'G_FMAXIMUM'
     /* 3069 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner17),
     /* 3072 */ // Label 160: @3072
     /* 3072 */ GIM_Reject,
     /* 3073 */ // Label 52: @3073
     /* 3073 */ GIM_Try, /*On fail goto*//*Label 161*/ GIMT_Encode4(3084), // Rule ID 42 //
     /* 3078 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule22Enabled),
     /* 3081 */   // Combiner Rule #22: reassoc_ptradd; wip_match_opcode 'G_PTR_ADD'
     /* 3081 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner8),
     /* 3084 */ // Label 161: @3084
     /* 3084 */ GIM_Try, /*On fail goto*//*Label 162*/ GIMT_Encode4(3095), // Rule ID 59 //
     /* 3089 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule39Enabled),
     /* 3092 */   // Combiner Rule #39: const_ptradd_to_i2p; wip_match_opcode 'G_PTR_ADD'
     /* 3092 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner12),
     /* 3095 */ // Label 162: @3095
     /* 3095 */ GIM_Try, /*On fail goto*//*Label 163*/ GIMT_Encode4(3118), // Rule ID 8 //
     /* 3100 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule1Enabled),
     /* 3103 */   // MIs[0] dst
     /* 3103 */   // No operand predicates
     /* 3103 */   // MIs[0] lhs
     /* 3103 */   // No operand predicates
     /* 3103 */   // MIs[0] Operand 2
     /* 3103 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /* 3107 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 3112 */   // Combiner Rule #1: right_identity_zero @ [__right_identity_zero_match_0[7]]
     /* 3112 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 3117 */   GIR_EraseRootFromParent_Done,
     /* 3118 */ // Label 163: @3118
     /* 3118 */ GIM_Reject,
     /* 3119 */ // Label 53: @3119
     /* 3119 */ GIM_Try, /*On fail goto*//*Label 164*/ GIMT_Encode4(3130), // Rule ID 85 //
     /* 3124 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule51Enabled),
     /* 3127 */   // Combiner Rule #51: unary_undef_to_zero; wip_match_opcode 'G_ABS'
     /* 3127 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner22),
     /* 3130 */ // Label 164: @3130
     /* 3130 */ GIM_Reject,
     /* 3131 */ // Label 54: @3131
     /* 3131 */ GIM_Try, /*On fail goto*//*Label 165*/ GIMT_Encode4(3142), // Rule ID 100 //
     /* 3136 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule57Enabled),
     /* 3139 */   // Combiner Rule #57: insert_extract_vec_elt_out_of_bounds; wip_match_opcode 'G_INSERT_VECTOR_ELT'
     /* 3139 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner29),
     /* 3142 */ // Label 165: @3142
     /* 3142 */ GIM_Reject,
     /* 3143 */ // Label 55: @3143
     /* 3143 */ GIM_Try, /*On fail goto*//*Label 166*/ GIMT_Encode4(3154), // Rule ID 101 //
     /* 3148 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule57Enabled),
     /* 3151 */   // Combiner Rule #57: insert_extract_vec_elt_out_of_bounds; wip_match_opcode 'G_EXTRACT_VECTOR_ELT'
     /* 3151 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner29),
     /* 3154 */ // Label 166: @3154
     /* 3154 */ GIM_Reject,
     /* 3155 */ // Label 56: @3155
     /* 3155 */ GIM_Try, /*On fail goto*//*Label 167*/ GIMT_Encode4(3166), // Rule ID 96 //
     /* 3160 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule54Enabled),
     /* 3163 */   // Combiner Rule #54: propagate_undef_all_ops; wip_match_opcode 'G_SHUFFLE_VECTOR'
     /* 3163 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner26),
     /* 3166 */ // Label 167: @3166
     /* 3166 */ GIM_Try, /*On fail goto*//*Label 168*/ GIMT_Encode4(3177), // Rule ID 98 //
     /* 3171 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule55Enabled),
     /* 3174 */   // Combiner Rule #55: propagate_undef_shuffle_mask; wip_match_opcode 'G_SHUFFLE_VECTOR'
     /* 3174 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner27),
     /* 3177 */ // Label 168: @3177
     /* 3177 */ GIM_Reject,
     /* 3178 */ // Label 57: @3178
     /* 3178 */ GIM_Try, /*On fail goto*//*Label 169*/ GIMT_Encode4(3199), // Rule ID 50 //
     /* 3183 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule30Enabled),
     /* 3186 */   // MIs[0] dst
     /* 3186 */   // No operand predicates
     /* 3186 */   // MIs[0] src0
     /* 3186 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 3190 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 3194 */   // MIs[1] cst
     /* 3194 */   // No operand predicates
     /* 3194 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 3196 */   // Combiner Rule #30: constant_fold_fceil
     /* 3196 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner10),
     /* 3199 */ // Label 169: @3199
     /* 3199 */ GIM_Reject,
     /* 3200 */ // Label 58: @3200
     /* 3200 */ GIM_Try, /*On fail goto*//*Label 170*/ GIMT_Encode4(3221), // Rule ID 46 //
     /* 3205 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule26Enabled),
     /* 3208 */   // MIs[0] dst
     /* 3208 */   // No operand predicates
     /* 3208 */   // MIs[0] src0
     /* 3208 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 3212 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 3216 */   // MIs[1] cst
     /* 3216 */   // No operand predicates
     /* 3216 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 3218 */   // Combiner Rule #26: constant_fold_fsqrt
     /* 3218 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner10),
     /* 3221 */ // Label 170: @3221
     /* 3221 */ GIM_Reject,
     /* 3222 */ // Label 59: @3222
     /* 3222 */ GIM_Try, /*On fail goto*//*Label 171*/ GIMT_Encode4(3243), // Rule ID 51 //
     /* 3227 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule31Enabled),
     /* 3230 */   // MIs[0] dst
     /* 3230 */   // No operand predicates
     /* 3230 */   // MIs[0] src0
     /* 3230 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 3234 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 3238 */   // MIs[1] cst
     /* 3238 */   // No operand predicates
     /* 3238 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 3240 */   // Combiner Rule #31: constant_fold_ffloor
     /* 3240 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner10),
     /* 3243 */ // Label 171: @3243
     /* 3243 */ GIM_Reject,
     /* 3244 */ // Label 60: @3244
     /* 3244 */ GIM_Try, /*On fail goto*//*Label 172*/ GIMT_Encode4(3265), // Rule ID 55 //
     /* 3249 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule35Enabled),
     /* 3252 */   // MIs[0] dst
     /* 3252 */   // No operand predicates
     /* 3252 */   // MIs[0] src0
     /* 3252 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 3256 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 3260 */   // MIs[1] cst
     /* 3260 */   // No operand predicates
     /* 3260 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 3262 */   // Combiner Rule #35: constant_fold_frint
     /* 3262 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner10),
     /* 3265 */ // Label 172: @3265
     /* 3265 */ GIM_Reject,
     /* 3266 */ // Label 61: @3266
     /* 3266 */ GIM_Try, /*On fail goto*//*Label 173*/ GIMT_Encode4(3287), // Rule ID 56 //
     /* 3271 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule36Enabled),
     /* 3274 */   // MIs[0] dst
     /* 3274 */   // No operand predicates
     /* 3274 */   // MIs[0] src0
     /* 3274 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 3278 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 3282 */   // MIs[1] cst
     /* 3282 */   // No operand predicates
     /* 3282 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 3284 */   // Combiner Rule #36: constant_fold_fnearbyint
     /* 3284 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner10),
     /* 3287 */ // Label 173: @3287
     /* 3287 */ GIM_Reject,
     /* 3288 */ // Label 62: @3288
     /* 3288 */ GIM_Reject,
     /* 3289 */ }; // Size: 3289 bytes
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

