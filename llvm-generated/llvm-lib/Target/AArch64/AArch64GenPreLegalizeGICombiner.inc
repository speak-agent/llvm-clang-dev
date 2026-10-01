/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* AArch64PreLegalizerCombinerImpl Combiner Match Table                       *|
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

struct AArch64PreLegalizerCombinerImplRuleConfig {
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
  case 9:	 // 7 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "dd_shift", 8) != 0)
        break;
      return 254;	 // "add_shift"
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "opy_prop", 8) != 0)
        break;
      return 19;	 // "copy_prop"
    case 'm':	 // 3 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "tch_ors", 7) != 0)
          break;
        return 219;	 // "match_ors"
      case 'u':	 // 2 strings to match.
        if (memcmp(RuleIdentifier.data()+2, "lo_by_", 6) != 0)
          break;
        switch (RuleIdentifier[8]) {
        default: break;
        case '0':	 // 1 string to match.
          return 163;	 // "mulo_by_0"
        case '2':	 // 1 string to match.
          return 162;	 // "mulo_by_2"
        }
        break;
      }
      break;
    case 'n':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "neg_zext", 8) != 0)
        break;
      return 230;	 // "nneg_zext"
    case 'o':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "r_xor_or", 8) != 0)
        break;
      return 224;	 // "or_xor_or"
    }
    break;
  case 10:	 // 12 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'S':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "ub", 2) != 0)
        break;
      switch (RuleIdentifier[3]) {
      default: break;
      case 'S':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+4, "maxSub", 6) != 0)
          break;
        return 259;	 // "SubSmaxSub"
      case 'U':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+4, "maxSub", 6) != 0)
          break;
        return 260;	 // "SubUmaxSub"
      }
      break;
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "mit_bzero", 9) != 0)
        break;
      return 284;	 // "emit_bzero"
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "2p_to_p2i", 9) != 0)
        break;
      return 96;	 // "i2p_to_p2i"
    case 'm':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "tch_ands", 8) != 0)
          break;
        return 218;	 // "match_ands"
      case 'u':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "l_to_shl", 8) != 0)
          break;
        return 20;	 // "mul_to_shl"
      }
      break;
    case 'o':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "r_xor_and", 9) != 0)
        break;
      return 225;	 // "or_xor_and"
    case 'p':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "2i_to_i2p", 9) != 0)
        break;
      return 95;	 // "p2i_to_i2p"
    case 's':	 // 3 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'e':	 // 2 strings to match.
        switch (RuleIdentifier[2]) {
        default: break;
        case 'l':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+3, "ect_not", 7) != 0)
            break;
          return 135;	 // "select_not"
        case 'x':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+3, "t_trunc", 7) != 0)
            break;
          return 228;	 // "sext_trunc"
        }
        break;
      case 'u':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "b_to_add", 8) != 0)
          break;
        return 21;	 // "sub_to_add"
      }
      break;
    case 'z':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ext_trunc", 9) != 0)
        break;
      return 229;	 // "zext_trunc"
    }
    break;
  case 11:	 // 8 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "dd_sub_reg", 10) != 0)
        break;
      return 101;	 // "add_sub_reg"
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "atch_addos", 10) != 0)
        break;
      return 245;	 // "match_addos"
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ub_add_reg", 10) != 0)
        break;
      return 213;	 // "sub_add_reg"
    case 't':	 // 4 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "runc_", 5) != 0)
        break;
      switch (RuleIdentifier[6]) {
      default: break;
      case 's':	 // 3 strings to match.
        switch (RuleIdentifier[7]) {
        default: break;
        case 'h':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+8, "ift", 3) != 0)
            break;
          return 142;	 // "trunc_shift"
        case 's':	 // 2 strings to match.
          if (memcmp(RuleIdentifier.data()+8, "at", 2) != 0)
            break;
          switch (RuleIdentifier[10]) {
          default: break;
          case 's':	 // 1 string to match.
            return 247;	 // "trunc_ssats"
          case 'u':	 // 1 string to match.
            return 248;	 // "trunc_ssatu"
          }
          break;
        }
        break;
      case 'u':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+7, "satu", 4) != 0)
          break;
        return 249;	 // "trunc_usatu"
      }
      break;
    case 'u':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nmerge_cst", 10) != 0)
        break;
      return 238;	 // "unmerge_cst"
    }
    break;
  case 12:	 // 12 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'A':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "PlusBMinusB", 11) != 0)
        break;
      return 4;	 // "APlusBMinusB"
    case 'B':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "MinusAPlusA", 11) != 0)
        break;
      return 5;	 // "BMinusAPlusA"
    case 'a':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "dde_to_addo", 11) != 0)
        break;
      return 164;	 // "adde_to_addo"
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "tlz_to_ctls", 11) != 0)
        break;
      return 252;	 // "ctlz_to_ctls"
    case 'f':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "sub_to_fneg", 11) != 0)
        break;
      return 215;	 // "fsub_to_fneg"
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ulh_to_lshr", 11) != 0)
        break;
      return 193;	 // "mulh_to_lshr"
    case 'n':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ot_cmp_fold", 11) != 0)
        break;
      return 143;	 // "not_cmp_fold"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "edundant_or", 11) != 0)
        break;
      return 138;	 // "redundant_or"
    case 's':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'd':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "iv_by_pow2", 10) != 0)
          break;
        return 209;	 // "sdiv_by_pow2"
      case 'e':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "xt_of_sext", 10) != 0)
          break;
        return 54;	 // "sext_of_sext"
      }
      break;
    case 'u':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "div_by_pow2", 11) != 0)
        break;
      return 208;	 // "udiv_by_pow2"
    case 'z':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ext_of_zext", 11) != 0)
        break;
      return 52;	 // "zext_of_zext"
    }
    break;
  case 13:	 // 19 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'A':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "MinusBMinus", 11) != 0)
        break;
      switch (RuleIdentifier[12]) {
      default: break;
      case 'A':	 // 1 string to match.
        return 12;	 // "AMinusBMinusA"
      case 'C':	 // 1 string to match.
        return 9;	 // "AMinusBMinusC"
      }
      break;
    case 'a':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "dd_of_vscale", 12) != 0)
        break;
      return 43;	 // "add_of_vscale"
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ommute_shift", 12) != 0)
        break;
      return 182;	 // "commute_shift"
    case 'l':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "oad_and_mask", 12) != 0)
        break;
      return 75;	 // "load_and_mask"
    case 'm':	 // 3 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "tch_selects", 11) != 0)
          break;
        return 133;	 // "match_selects"
      case 'e':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "rge_unmerge", 11) != 0)
          break;
        return 237;	 // "merge_unmerge"
      case 'u':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "l_of_vscale", 11) != 0)
          break;
        return 44;	 // "mul_of_vscale"
      }
      break;
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "edundant_and", 12) != 0)
        break;
      return 136;	 // "redundant_and"
    case 's':	 // 6 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "me_val_zero", 11) != 0)
          break;
        return 92;	 // "same_val_zero"
      case 'd':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "iv_by_const", 11) != 0)
          break;
        return 211;	 // "sdiv_by_const"
      case 'h':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "l_of_vscale", 11) != 0)
          break;
        return 45;	 // "shl_of_vscale"
      case 'r':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "em_by_const", 11) != 0)
          break;
        return 207;	 // "srem_by_const"
      case 'u':	 // 2 strings to match.
        if (memcmp(RuleIdentifier.data()+2, "b_", 2) != 0)
          break;
        switch (RuleIdentifier[4]) {
        default: break;
        case 'm':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+5, "inus_one", 8) != 0)
            break;
          return 257;	 // "sub_minus_one"
        case 'o':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+5, "f_vscale", 8) != 0)
            break;
          return 46;	 // "sub_of_vscale"
        }
        break;
      }
      break;
    case 'u':	 // 4 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'd':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "iv_by_const", 11) != 0)
          break;
        return 210;	 // "udiv_by_const"
      case 'n':	 // 2 strings to match.
        if (memcmp(RuleIdentifier.data()+2, "merge_", 6) != 0)
          break;
        switch (RuleIdentifier[8]) {
        default: break;
        case 'm':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+9, "erge", 4) != 0)
            break;
          return 236;	 // "unmerge_merge"
        case 'u':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+9, "ndef", 4) != 0)
            break;
          return 239;	 // "unmerge_undef"
        }
        break;
      case 'r':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "em_by_const", 11) != 0)
          break;
        return 206;	 // "urem_by_const"
      }
      break;
    }
    break;
  case 14:	 // 20 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'A':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'M':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "inusC1PlusC2", 12) != 0)
          break;
        return 18;	 // "AMinusC1PlusC2"
      case 'P':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "lusC1MinusC2", 12) != 0)
          break;
        return 14;	 // "APlusC1MinusC2"
      }
      break;
    case 'C':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "2MinusAPlusC1", 13) != 0)
        break;
      return 15;	 // "C2MinusAPlusC1"
    case 'N':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "otAPlusNegOne", 13) != 0)
        break;
      return 13;	 // "NotAPlusNegOne"
    case 'a':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "nyext_of_", 9) != 0)
        break;
      switch (RuleIdentifier[10]) {
      default: break;
      case 's':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+11, "ext", 3) != 0)
          break;
        return 58;	 // "anyext_of_sext"
      case 'z':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+11, "ext", 3) != 0)
          break;
        return 57;	 // "anyext_of_zext"
      }
      break;
    case 'b':	 // 3 strings to match.
      if (RuleIdentifier[1] != 'i')
        break;
      switch (RuleIdentifier[2]) {
      default: break;
      case 'n':	 // 2 strings to match.
        if (memcmp(RuleIdentifier.data()+3, "op_", 3) != 0)
          break;
        switch (RuleIdentifier[6]) {
        default: break;
        case 's':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+7, "ame_val", 7) != 0)
            break;
          return 91;	 // "binop_same_val"
        case 'w':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+7, "ith_neg", 7) != 0)
            break;
          return 256;	 // "binop_with_neg"
        }
        break;
      case 't':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "reverse_shl", 11) != 0)
          break;
        return 180;	 // "bitreverse_shl"
      }
      break;
    case 'c':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "ombine_mem", 10) != 0)
        break;
      switch (RuleIdentifier[11]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+12, "py", 2) != 0)
          break;
        return 281;	 // "combine_memcpy"
      case 's':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+12, "et", 2) != 0)
          break;
        return 283;	 // "combine_memset"
      }
      break;
    case 'f':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "bs_fneg_fold", 12) != 0)
          break;
        return 192;	 // "fabs_fneg_fold"
      case 'n':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "eg_fneg_fold", 12) != 0)
          break;
        return 98;	 // "fneg_fneg_fold"
      }
      break;
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ul_by_neg_one", 13) != 0)
        break;
      return 23;	 // "mul_by_neg_one"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "eassoc_ptradd", 13) != 0)
        break;
      return 115;	 // "reassoc_ptradd"
    case 's':	 // 4 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'e':	 // 2 strings to match.
        switch (RuleIdentifier[2]) {
        default: break;
        case 'l':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+3, "ect_of_zext", 11) != 0)
            break;
          return 60;	 // "select_of_zext"
        case 'x':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+3, "t_of_anyext", 11) != 0)
            break;
          return 55;	 // "sext_of_anyext"
        }
        break;
      case 'h':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "ifts_too_big", 12) != 0)
          break;
        return 114;	 // "shifts_too_big"
      case 'i':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "mplify_uaddo", 12) != 0)
          break;
        return 278;	 // "simplify_uaddo"
      }
      break;
    case 'z':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ext_of_anyext", 13) != 0)
        break;
      return 53;	 // "zext_of_anyext"
    }
    break;
  case 15:	 // 15 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'A':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'M':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "inusC1MinusC2", 13) != 0)
          break;
        return 16;	 // "AMinusC1MinusC2"
      case 'P':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "lusZeroMinusB", 13) != 0)
          break;
        return 3;	 // "APlusZeroMinusB"
      }
      break;
    case 'C':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "1Minus2MinusC2", 14) != 0)
        break;
      return 17;	 // "C1Minus2MinusC2"
    case 'Z':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "eroMinusAPlusB", 14) != 0)
        break;
      return 2;	 // "ZeroMinusAPlusB"
    case 'a':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "vgceil_", 7) != 0)
        break;
      switch (RuleIdentifier[8]) {
      default: break;
      case 's':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+9, "_match", 6) != 0)
          break;
        return 264;	 // "avgceil_s_match"
      case 'u':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+9, "_match", 6) != 0)
          break;
        return 263;	 // "avgceil_u_match"
      }
      break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "itreverse_lshr", 14) != 0)
        break;
      return 181;	 // "bitreverse_lshr"
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ombine_memmove", 14) != 0)
        break;
      return 282;	 // "combine_memmove"
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "xtending_loads", 14) != 0)
        break;
      return 74;	 // "extending_loads"
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "dempotent_prop", 14) != 0)
        break;
      return 24;	 // "idempotent_prop"
    case 'l':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "oad_or_combine", 14) != 0)
        break;
      return 171;	 // "load_or_combine"
    case 'n':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "arrow_binop_or", 14) != 0)
        break;
      return 68;	 // "narrow_binop_or"
    case 'o':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "verlapping_and", 14) != 0)
        break;
      return 161;	 // "overlapping_and"
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "elect_same_val", 14) != 0)
        break;
      return 89;	 // "select_same_val"
    case 'z':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ext_trunc_fold", 14) != 0)
        break;
      return 140;	 // "zext_trunc_fold"
    }
    break;
  case 16:	 // 19 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'A':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "MinusZeroMinusB", 15) != 0)
        break;
      return 11;	 // "AMinusZeroMinusB"
    case 'a':	 // 3 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'n':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "yext_of_anyext", 14) != 0)
          break;
        return 56;	 // "anyext_of_anyext"
      case 'v':	 // 2 strings to match.
        if (memcmp(RuleIdentifier.data()+2, "gfloor_", 7) != 0)
          break;
        switch (RuleIdentifier[9]) {
        default: break;
        case 's':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+10, "_match", 6) != 0)
            break;
          return 262;	 // "avgfloor_s_match"
        case 'u':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+10, "_match", 6) != 0)
            break;
          return 261;	 // "avgfloor_u_match"
        }
        break;
      }
      break;
    case 'n':	 // 5 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "arrow_binop_", 12) != 0)
        break;
      switch (RuleIdentifier[13]) {
      default: break;
      case 'a':	 // 2 strings to match.
        switch (RuleIdentifier[14]) {
        default: break;
        case 'd':	 // 1 string to match.
          if (RuleIdentifier[15] != 'd')
            break;
          return 64;	 // "narrow_binop_add"
        case 'n':	 // 1 string to match.
          if (RuleIdentifier[15] != 'd')
            break;
          return 67;	 // "narrow_binop_and"
        }
        break;
      case 'm':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+14, "ul", 2) != 0)
          break;
        return 66;	 // "narrow_binop_mul"
      case 's':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+14, "ub", 2) != 0)
          break;
        return 65;	 // "narrow_binop_sub"
      case 'x':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+14, "or", 2) != 0)
          break;
        return 69;	 // "narrow_binop_xor"
      }
      break;
    case 'o':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "r_and_xor_to_or", 15) != 0)
        break;
      return 220;	 // "or_and_xor_to_or"
    case 's':	 // 6 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'e':	 // 4 strings to match.
        if (memcmp(RuleIdentifier.data()+2, "lect_", 5) != 0)
          break;
        switch (RuleIdentifier[7]) {
        default: break;
        case 'o':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+8, "f_anyext", 8) != 0)
            break;
          return 61;	 // "select_of_anyext"
        case 't':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+8, "o_minmax", 8) != 0)
            break;
          return 214;	 // "select_to_minmax"
        case 'u':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+8, "ndef_cmp", 8) != 0)
            break;
          return 130;	 // "select_undef_cmp"
        case 'z':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+8, "ero_true", 8) != 0)
            break;
          return 266;	 // "select_zero_true"
        }
        break;
      case 'u':	 // 2 strings to match.
        if (memcmp(RuleIdentifier.data()+2, "b_o", 3) != 0)
          break;
        switch (RuleIdentifier[5]) {
        default: break;
        case 'f':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+6, "_mul_const", 10) != 0)
            break;
          return 258;	 // "sub_of_mul_const"
        case 'n':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+6, "e_from_sub", 10) != 0)
            break;
          return 255;	 // "sub_one_from_sub"
        }
        break;
      }
      break;
    case 't':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "runcate_of_", 11) != 0)
        break;
      switch (RuleIdentifier[12]) {
      default: break;
      case 's':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+13, "ext", 3) != 0)
          break;
        return 50;	 // "truncate_of_sext"
      case 'z':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+13, "ext", 3) != 0)
          break;
        return 49;	 // "truncate_of_zext"
      }
      break;
    case 'u':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ndef_to_fp_zero", 15) != 0)
        break;
      return 77;	 // "undef_to_fp_zero"
    }
    break;
  case 17:	 // 18 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'A':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "PlusBMinus", 10) != 0)
        break;
      switch (RuleIdentifier[11]) {
      default: break;
      case 'A':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+12, "plusC", 5) != 0)
          break;
        return 8;	 // "APlusBMinusAplusC"
      case 'C':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+12, "PlusA", 5) != 0)
          break;
        return 10;	 // "APlusBMinusCPlusA"
      }
      break;
    case 'a':	 // 3 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'd':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "d_p2i_to_ptradd", 15) != 0)
          break;
        return 22;	 // "add_p2i_to_ptradd"
      case 'n':	 // 2 strings to match.
        switch (RuleIdentifier[2]) {
        default: break;
        case 'd':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+3, "_xor_or_to_and", 14) != 0)
            break;
          return 222;	 // "and_xor_or_to_and"
        case 'y':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+3, "ext_trunc_fold", 14) != 0)
            break;
          return 97;	 // "anyext_trunc_fold"
        }
        break;
      }
      break;
    case 'c':	 // 4 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'a':	 // 2 strings to match.
        if (memcmp(RuleIdentifier.data()+2, "nonicalize_", 11) != 0)
          break;
        switch (RuleIdentifier[13]) {
        default: break;
        case 'f':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+14, "cmp", 3) != 0)
            break;
          return 119;	 // "canonicalize_fcmp"
        case 'i':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+14, "cmp", 3) != 0)
            break;
          return 118;	 // "canonicalize_icmp"
        }
        break;
      case 'o':	 // 2 strings to match.
        switch (RuleIdentifier[2]) {
        default: break;
        case 'm':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+3, "bine_or_of_and", 14) != 0)
            break;
          return 265;	 // "combine_or_of_and"
        case 'n':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+3, "stant_fold_fma", 14) != 0)
            break;
          return 189;	 // "constant_fold_fma"
        }
        break;
      }
      break;
    case 'd':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "iv_rem_to_divrem", 16) != 0)
        break;
      return 172;	 // "div_rem_to_divrem"
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "rase_undef_store", 16) != 0)
        break;
      return 87;	 // "erase_undef_store"
    case 'p':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "tr_add_with_zero", 16) != 0)
        break;
      return 168;	 // "ptr_add_with_zero"
    case 's':	 // 4 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'e':	 // 2 strings to match.
        if (memcmp(RuleIdentifier.data()+2, "lect_", 5) != 0)
          break;
        switch (RuleIdentifier[7]) {
        default: break;
        case 't':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+8, "o_iminmax", 9) != 0)
            break;
          return 132;	 // "select_to_iminmax"
        case 'z':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+8, "ero_false", 9) != 0)
            break;
          return 134;	 // "select_zero_false"
        }
        break;
      case 'h':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "ift_immed_chain", 15) != 0)
          break;
        return 169;	 // "shift_immed_chain"
      case 'r':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "em_pow2_to_mask", 15) != 0)
          break;
        return 205;	 // "srem_pow2_to_mask"
      }
      break;
    case 'u':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'n':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "def_to_int_zero", 15) != 0)
          break;
        return 78;	 // "undef_to_int_zero"
      case 'r':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "em_pow2_to_mask", 15) != 0)
          break;
        return 139;	 // "urem_pow2_to_mask"
      }
      break;
    }
    break;
  case 18:	 // 13 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'A':	 // 3 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'M':	 // 2 strings to match.
        if (memcmp(RuleIdentifier.data()+2, "inusBPlus", 9) != 0)
          break;
        switch (RuleIdentifier[11]) {
        default: break;
        case 'B':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+12, "MinusC", 6) != 0)
            break;
          return 7;	 // "AMinusBPlusBMinusC"
        case 'C':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+12, "MinusA", 6) != 0)
            break;
          return 6;	 // "AMinusBPlusCMinusA"
        }
        break;
      case 'P':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "lusBMinusCMinusB", 16) != 0)
          break;
        return 0;	 // "APlusBMinusCMinusB"
      }
      break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "inop_left_to_zero", 17) != 0)
        break;
      return 93;	 // "binop_left_to_zero"
    case 'c':	 // 3 strings to match.
      if (RuleIdentifier[1] != 'o')
        break;
      switch (RuleIdentifier[2]) {
      default: break;
      case 'm':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "bine_minmax_nan", 15) != 0)
          break;
        return 165;	 // "combine_minmax_nan"
      case 'n':	 // 2 strings to match.
        if (memcmp(RuleIdentifier.data()+3, "stant_fold_f", 12) != 0)
          break;
        switch (RuleIdentifier[15]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+16, "bs", 2) != 0)
            break;
          return 146;	 // "constant_fold_fabs"
        case 'n':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+16, "eg", 2) != 0)
            break;
          return 145;	 // "constant_fold_fneg"
        }
        break;
      }
      break;
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "xpand_const_fpowi", 17) != 0)
        break;
      return 166;	 // "expand_const_fpowi"
    case 'f':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'o':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "ld_global_offset", 16) != 0)
          break;
        return 269;	 // "fold_global_offset"
      case 'p':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "trunc_fpext_fold", 16) != 0)
          break;
        return 107;	 // "fptrunc_fpext_fold"
      }
      break;
    case 's':	 // 2 strings to match.
      if (RuleIdentifier[1] != 'e')
        break;
      switch (RuleIdentifier[2]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "ect_of_truncate", 15) != 0)
          break;
        return 62;	 // "select_of_truncate"
      case 'x':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "t_inreg_of_load", 15) != 0)
          break;
        return 127;	 // "sext_inreg_of_load"
      }
      break;
    case 't':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "runcate_of_anyext", 17) != 0)
        break;
      return 51;	 // "truncate_of_anyext"
    }
    break;
  case 19:	 // 20 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'A':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "MinusBMinusCMinusC", 18) != 0)
        break;
      return 1;	 // "AMinusBMinusCMinusC"
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "inop_right_to_zero", 18) != 0)
        break;
      return 94;	 // "binop_right_to_zero"
    case 'c':	 // 7 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "onst", 4) != 0)
        break;
      switch (RuleIdentifier[5]) {
      default: break;
      case '_':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+6, "ptradd_to_i2p", 13) != 0)
          break;
        return 160;	 // "const_ptradd_to_i2p"
      case 'a':	 // 6 strings to match.
        if (memcmp(RuleIdentifier.data()+6, "nt_fold_", 8) != 0)
          break;
        switch (RuleIdentifier[14]) {
        default: break;
        case 'b':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+15, "inop", 4) != 0)
            break;
          return 187;	 // "constant_fold_binop"
        case 'f':	 // 5 strings to match.
          switch (RuleIdentifier[15]) {
          default: break;
          case 'c':	 // 1 string to match.
            if (memcmp(RuleIdentifier.data()+16, "eil", 3) != 0)
              break;
            return 151;	 // "constant_fold_fceil"
          case 'l':	 // 1 string to match.
            if (memcmp(RuleIdentifier.data()+16, "og2", 3) != 0)
              break;
            return 148;	 // "constant_fold_flog2"
          case 'p':	 // 1 string to match.
            if (memcmp(RuleIdentifier.data()+16, "ext", 3) != 0)
              break;
            return 150;	 // "constant_fold_fpext"
          case 'r':	 // 1 string to match.
            if (memcmp(RuleIdentifier.data()+16, "int", 3) != 0)
              break;
            return 156;	 // "constant_fold_frint"
          case 's':	 // 1 string to match.
            if (memcmp(RuleIdentifier.data()+16, "qrt", 3) != 0)
              break;
            return 147;	 // "constant_fold_fsqrt"
          }
          break;
        }
        break;
      }
      break;
    case 'e':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "xt", 2) != 0)
        break;
      switch (RuleIdentifier[3]) {
      default: break;
      case '_':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+4, "uaddv_to_uaddlv", 15) != 0)
          break;
        return 271;	 // "ext_uaddv_to_uaddlv"
      case 'e':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+4, "nd_through_phis", 15) != 0)
          break;
        return 111;	 // "extend_through_phis"
      }
      break;
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nteger_of_truncate", 18) != 0)
        break;
      return 70;	 // "integer_of_truncate"
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "erge_of_x_and_zero", 18) != 0)
        break;
      return 243;	 // "merge_of_x_and_zero"
    case 'p':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "tr_add_immed_chain", 18) != 0)
        break;
      return 117;	 // "ptr_add_immed_chain"
    case 'r':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "assoc_comm_binops", 17) != 0)
          break;
        return 116;	 // "reassoc_comm_binops"
      case 'i':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "ght_identity_zero", 17) != 0)
          break;
        return 90;	 // "right_identity_zero"
      }
      break;
    case 's':	 // 3 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "lect_constant_cmp", 17) != 0)
          break;
        return 131;	 // "select_constant_cmp"
      case 'i':	 // 2 strings to match.
        if (memcmp(RuleIdentifier.data()+2, "mplify_", 7) != 0)
          break;
        switch (RuleIdentifier[9]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+10, "dd_to_sub", 9) != 0)
            break;
          return 112;	 // "simplify_add_to_sub"
        case 'n':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+10, "eg_minmax", 9) != 0)
            break;
          return 226;	 // "simplify_neg_minmax"
        }
        break;
      }
      break;
    case 'u':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nary_undef_to_zero", 18) != 0)
        break;
      return 82;	 // "unary_undef_to_zero"
    }
    break;
  case 20:	 // 10 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nd_or_disjoint_mask", 19) != 0)
        break;
      return 195;	 // "and_or_disjoint_mask"
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "itcast_bitcast_fold", 19) != 0)
        break;
      return 105;	 // "bitcast_bitcast_fold"
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "onstant_fold_ffloor", 19) != 0)
        break;
      return 152;	 // "constant_fold_ffloor"
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "cmp_redundant_trunc", 19) != 0)
        break;
      return 268;	 // "icmp_redundant_trunc"
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "erge_of_x_and_undef", 19) != 0)
        break;
      return 242;	 // "merge_of_x_and_undef"
    case 'o':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "r_and_xor_to_xor_or", 19) != 0)
        break;
      return 221;	 // "or_and_xor_to_xor_or"
    case 'r':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "edu", 3) != 0)
        break;
      switch (RuleIdentifier[4]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+5, "e_shl_of_extend", 15) != 0)
          break;
        return 128;	 // "reduce_shl_of_extend"
      case 'n':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+5, "dant_sext_inreg", 15) != 0)
          break;
        return 137;	 // "redundant_sext_inreg"
      }
      break;
    case 'u':	 // 2 strings to match.
      if (RuleIdentifier[1] != 'n')
        break;
      switch (RuleIdentifier[2]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "ry_undef_to_undef", 17) != 0)
          break;
        return 83;	 // "unary_undef_to_undef"
      case 'm':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "erge_zext_to_zext", 17) != 0)
          break;
        return 241;	 // "unmerge_zext_to_zext"
      }
      break;
    }
    break;
  case 21:	 // 20 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nd_xor_or_to_xor_and", 20) != 0)
        break;
      return 223;	 // "and_xor_or_to_xor_and"
    case 'c':	 // 6 strings to match.
      if (RuleIdentifier[1] != 'o')
        break;
      switch (RuleIdentifier[2]) {
      default: break;
      case 'm':	 // 4 strings to match.
        if (memcmp(RuleIdentifier.data()+3, "bine_", 5) != 0)
          break;
        switch (RuleIdentifier[8]) {
        default: break;
        case 'b':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+9, "uild_unmerge", 12) != 0)
            break;
          return 244;	 // "combine_build_unmerge"
        case 'c':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+9, "oncat_vector", 12) != 0)
            break;
          return 227;	 // "combine_concat_vector"
        case 'm':	 // 2 strings to match.
          if (memcmp(RuleIdentifier.data()+9, "em", 2) != 0)
            break;
          switch (RuleIdentifier[11]) {
          default: break;
          case 'c':	 // 1 string to match.
            if (memcmp(RuleIdentifier.data()+12, "py_inline", 9) != 0)
              break;
            return 279;	 // "combine_memcpy_inline"
          case 's':	 // 1 string to match.
            if (memcmp(RuleIdentifier.data()+12, "et_inline", 9) != 0)
              break;
            return 280;	 // "combine_memset_inline"
          }
          break;
        }
        break;
      case 'n':	 // 2 strings to match.
        if (memcmp(RuleIdentifier.data()+3, "stant_fold_", 11) != 0)
          break;
        switch (RuleIdentifier[14]) {
        default: break;
        case 'c':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+15, "ast_op", 6) != 0)
            break;
          return 190;	 // "constant_fold_cast_op"
        case 'f':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+15, "ptrunc", 6) != 0)
            break;
          return 149;	 // "constant_fold_fptrunc"
        }
        break;
      }
      break;
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "xt_addv_to_udot_addv", 20) != 0)
        break;
      return 270;	 // "ext_addv_to_udot_addv"
    case 'f':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "div_repeated_divison", 20) != 0)
        break;
      return 212;	 // "fdiv_repeated_divison"
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nsert_vector_elt_oob", 20) != 0)
        break;
      return 30;	 // "insert_vector_elt_oob"
    case 'l':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "shr_of_trunc_of_lshr", 20) != 0)
        break;
      return 251;	 // "lshr_of_trunc_of_lshr"
    case 'p':	 // 6 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "ush_", 4) != 0)
        break;
      switch (RuleIdentifier[5]) {
      default: break;
      case 'a':	 // 2 strings to match.
        if (memcmp(RuleIdentifier.data()+6, "dd_through_", 11) != 0)
          break;
        switch (RuleIdentifier[17]) {
        default: break;
        case 's':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+18, "ext", 3) != 0)
            break;
          return 276;	 // "push_add_through_sext"
        case 'z':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+18, "ext", 3) != 0)
            break;
          return 273;	 // "push_add_through_zext"
        }
        break;
      case 'm':	 // 2 strings to match.
        if (memcmp(RuleIdentifier.data()+6, "ul_through_", 11) != 0)
          break;
        switch (RuleIdentifier[17]) {
        default: break;
        case 's':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+18, "ext", 3) != 0)
            break;
          return 277;	 // "push_mul_through_sext"
        case 'z':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+18, "ext", 3) != 0)
            break;
          return 274;	 // "push_mul_through_zext"
        }
        break;
      case 's':	 // 2 strings to match.
        if (memcmp(RuleIdentifier.data()+6, "ub_through_", 11) != 0)
          break;
        switch (RuleIdentifier[17]) {
        default: break;
        case 's':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+18, "ext", 3) != 0)
            break;
          return 275;	 // "push_sub_through_sext"
        case 'z':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+18, "ext", 3) != 0)
            break;
          return 272;	 // "push_sub_through_zext"
        }
        break;
      }
      break;
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ight_identity_one_fp", 20) != 0)
        break;
      return 100;	 // "right_identity_one_fp"
    case 'u':	 // 2 strings to match.
      if (RuleIdentifier[1] != 'n')
        break;
      switch (RuleIdentifier[2]) {
      default: break;
      case 'd':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "ef_to_negative_one", 18) != 0)
          break;
        return 79;	 // "undef_to_negative_one"
      case 'm':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "erge_dead_to_trunc", 18) != 0)
          break;
        return 240;	 // "unmerge_dead_to_trunc"
      }
      break;
    }
    break;
  case 22:	 // 14 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'c':	 // 3 strings to match.
      if (RuleIdentifier[1] != 'o')
        break;
      switch (RuleIdentifier[2]) {
      default: break;
      case 'm':	 // 2 strings to match.
        if (memcmp(RuleIdentifier.data()+3, "bine_shuffle_", 13) != 0)
          break;
        switch (RuleIdentifier[16]) {
        default: break;
        case 'c':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+17, "oncat", 5) != 0)
            break;
          return 231;	 // "combine_shuffle_concat"
        case 'v':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+17, "ector", 5) != 0)
            break;
          return 267;	 // "combine_shuffle_vector"
        }
        break;
      case 'n':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "stant_fold_fp_binop", 19) != 0)
          break;
        return 188;	 // "constant_fold_fp_binop"
      }
      break;
    case 'f':	 // 4 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'o':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "ld_binop_into_select", 20) != 0)
          break;
        return 204;	 // "fold_binop_into_select"
      case 'u':	 // 3 strings to match.
        if (memcmp(RuleIdentifier.data()+2, "nnel_shift_", 11) != 0)
          break;
        switch (RuleIdentifier[13]) {
        default: break;
        case 'l':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+14, "eft_zero", 8) != 0)
            break;
          return 176;	 // "funnel_shift_left_zero"
        case 'o':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+14, "vershift", 8) != 0)
            break;
          return 177;	 // "funnel_shift_overshift"
        case 't':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+14, "o_rotate", 8) != 0)
            break;
          return 174;	 // "funnel_shift_to_rotate"
        }
        break;
      }
      break;
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "cmp_to_lhs_known_bits", 21) != 0)
        break;
      return 121;	 // "icmp_to_lhs_known_bits"
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "atch_subo_no_overflow", 21) != 0)
        break;
      return 246;	 // "match_subo_no_overflow"
    case 'p':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ropagate_undef_any_op", 21) != 0)
        break;
      return 84;	 // "propagate_undef_any_op"
    case 'r':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "dundant_neg_operands", 20) != 0)
          break;
        return 194;	 // "redundant_neg_operands"
      case 'i':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "ght_identity_one_int", 20) != 0)
          break;
        return 99;	 // "right_identity_one_int"
      }
      break;
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "hl_ashr_to_sext_inreg", 21) != 0)
        break;
      return 125;	 // "shl_ashr_to_sext_inreg"
    case 't':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "runc_buildvector_fold", 21) != 0)
        break;
      return 103;	 // "trunc_buildvector_fold"
    }
    break;
  case 23:	 // 6 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "uildvector_of_truncate", 22) != 0)
        break;
      return 63;	 // "buildvector_of_truncate"
    case 'f':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "unnel_shift_right_zero", 22) != 0)
        break;
      return 175;	 // "funnel_shift_right_zero"
    case 'i':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "tof_const_zero_fold_", 20) != 0)
        break;
      switch (RuleIdentifier[21]) {
      default: break;
      case 's':	 // 1 string to match.
        if (RuleIdentifier[22] != 'i')
          break;
        return 158;	 // "itof_const_zero_fold_si"
      case 'u':	 // 1 string to match.
        if (RuleIdentifier[22] != 'i')
          break;
        return 159;	 // "itof_const_zero_fold_ui"
      }
      break;
    case 'p':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ropagate_undef_all_ops", 22) != 0)
        break;
      return 85;	 // "propagate_undef_all_ops"
    case 't':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "runcusatu_to_fptouisat", 22) != 0)
        break;
      return 250;	 // "truncusatu_to_fptouisat"
    }
    break;
  case 24:	 // 8 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "inop_left_undef_to_zero", 23) != 0)
        break;
      return 80;	 // "binop_left_undef_to_zero"
    case 'c':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'o':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "nstant_fold_fnearbyint", 22) != 0)
          break;
        return 157;	 // "constant_fold_fnearbyint"
      case 't':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "lz_zero_poison_to_ctls", 22) != 0)
          break;
        return 253;	 // "ctlz_zero_poison_to_ctls"
      }
      break;
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "atch_extract_of_element", 23) != 0)
        break;
      return 29;	 // "match_extract_of_element"
    case 'n':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "arrow_binop_feeding_and", 23) != 0)
        break;
      return 129;	 // "narrow_binop_feeding_and"
    case 's':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "ext_inreg_", 10) != 0)
        break;
      switch (RuleIdentifier[11]) {
      default: break;
      case 'o':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+12, "f_sext_inreg", 12) != 0)
          break;
        return 59;	 // "sext_inreg_of_sext_inreg"
      case 't':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+12, "o_zext_inreg", 12) != 0)
          break;
        return 141;	 // "sext_inreg_to_zext_inreg"
      }
      break;
    case 'x':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "or_of_and_with_same_reg", 23) != 0)
        break;
      return 167;	 // "xor_of_and_with_same_reg"
    }
    break;
  case 25:	 // 7 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 3 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'i':	 // 2 strings to match.
        if (memcmp(RuleIdentifier.data()+2, "tfield_extract_from_", 20) != 0)
          break;
        switch (RuleIdentifier[22]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+23, "nd", 2) != 0)
            break;
          return 184;	 // "bitfield_extract_from_and"
        case 's':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+23, "hr", 2) != 0)
            break;
          return 185;	 // "bitfield_extract_from_shr"
        }
        break;
      case 'u':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "ildvector_identity_fold", 23) != 0)
          break;
        return 102;	 // "buildvector_identity_fold"
      }
      break;
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ombine_shuffle_undef_rhs", 24) != 0)
        break;
      return 232;	 // "combine_shuffle_undef_rhs"
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "xtract_vec_elt_build_vec", 24) != 0)
        break;
      return 72;	 // "extract_vec_elt_build_vec"
    case 'n':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "eg_and_one_to_sext_inreg", 24) != 0)
        break;
      return 126;	 // "neg_and_one_to_sext_inreg"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ight_identity_neg_one_fp", 24) != 0)
        break;
      return 110;	 // "right_identity_neg_one_fp"
    }
    break;
  case 26:	 // 6 strings to match.
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
        return 81;	 // "binop_right_undef_to_undef"
      case 't':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "cast_bitcast_to_bitcast", 23) != 0)
          break;
        return 106;	 // "bitcast_bitcast_to_bitcast"
      }
      break;
    case 'c':	 // 2 strings to match.
      if (RuleIdentifier[1] != 'o')
        break;
      switch (RuleIdentifier[2]) {
      default: break;
      case 'm':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "mute_fp_constant_to_rhs", 23) != 0)
          break;
        return 217;	 // "commute_fp_constant_to_rhs"
      case 'n':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "stant_fold_unary_int_op", 23) != 0)
          break;
        return 191;	 // "constant_fold_unary_int_op"
      }
      break;
    case 'f':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "unnel_shift_from_or_shift", 25) != 0)
        break;
      return 173;	 // "funnel_shift_from_or_shift"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ight_identity_neg_zero_fp", 25) != 0)
        break;
      return 108;	 // "right_identity_neg_zero_fp"
    }
    break;
  case 27:	 // 6 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'c':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "om", 2) != 0)
        break;
      switch (RuleIdentifier[3]) {
      default: break;
      case 'b':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+4, "ine_use_vector_truncate", 23) != 0)
          break;
        return 234;	 // "combine_use_vector_truncate"
      case 'm':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+4, "ute_int_constant_to_rhs", 23) != 0)
          break;
        return 216;	 // "commute_int_constant_to_rhs"
      }
      break;
    case 'd':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ouble_icmp_zero_or_combine", 26) != 0)
        break;
      return 123;	 // "double_icmp_zero_or_combine"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "edundant_binop_in_equality", 26) != 0)
        break;
      return 124;	 // "redundant_binop_in_equality"
    case 't':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "runc_lshr_buildvector_fold", 26) != 0)
        break;
      return 104;	 // "trunc_lshr_buildvector_fold"
    case 'u':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nmerge_anyext_build_vector", 26) != 0)
        break;
      return 235;	 // "unmerge_anyext_build_vector"
    }
    break;
  case 28:	 // 4 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'd':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ouble_icmp_zero_and_combine", 27) != 0)
        break;
      return 122;	 // "double_icmp_zero_and_combine"
    case 'o':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "pt_brcond_by_inverting_cond", 27) != 0)
        break;
      return 144;	 // "opt_brcond_by_inverting_cond"
    case 'p':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ropagate_undef_shuffle_mask", 27) != 0)
        break;
      return 86;	 // "propagate_undef_shuffle_mask"
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "hift_of_shifted_logic_chain", 27) != 0)
        break;
      return 170;	 // "shift_of_shifted_logic_chain"
    }
    break;
  case 29:	 // 6 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "itfield_extract_from_shr_and", 28) != 0)
        break;
      return 186;	 // "bitfield_extract_from_shr_and"
    case 'c':	 // 4 strings to match.
      if (RuleIdentifier[1] != 'o')
        break;
      switch (RuleIdentifier[2]) {
      default: break;
      case 'm':	 // 2 strings to match.
        if (memcmp(RuleIdentifier.data()+3, "bine_", 5) != 0)
          break;
        switch (RuleIdentifier[8]) {
        default: break;
        case 'e':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+9, "xtracted_vector_load", 20) != 0)
            break;
          return 76;	 // "combine_extracted_vector_load"
        case 's':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+9, "huffle_disjoint_mask", 20) != 0)
            break;
          return 233;	 // "combine_shuffle_disjoint_mask"
        }
        break;
      case 'n':	 // 2 strings to match.
        if (memcmp(RuleIdentifier.data()+3, "stant_fold_intrinsic_", 21) != 0)
          break;
        switch (RuleIdentifier[24]) {
        default: break;
        case 'r':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+25, "ound", 4) != 0)
            break;
          return 154;	 // "constant_fold_intrinsic_round"
        case 't':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+25, "runc", 4) != 0)
            break;
          return 153;	 // "constant_fold_intrinsic_trunc"
        }
        break;
      }
      break;
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "cmp_to_true_false_known_bits", 28) != 0)
        break;
      return 120;	 // "icmp_to_true_false_known_bits"
    }
    break;
  case 30:	 // 2 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'f':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "reeze_of_non_undef_non_poison", 29) != 0)
        break;
      return 47;	 // "freeze_of_non_undef_non_poison"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ight_identity_neg_zero_fp_nsz", 29) != 0)
        break;
      return 109;	 // "right_identity_neg_zero_fp_nsz"
    }
    break;
  case 31:	 // 2 strings to match.
    if (memcmp(RuleIdentifier.data()+0, "insert_vector_element_", 22) != 0)
      break;
    switch (RuleIdentifier[22]) {
    default: break;
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+23, "lt_undef", 8) != 0)
        break;
      return 28;	 // "insert_vector_element_elt_undef"
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+23, "dx_undef", 8) != 0)
        break;
      return 27;	 // "insert_vector_element_idx_undef"
    }
    break;
  case 32:	 // 4 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "itfield_extract_from_sext_inreg", 31) != 0)
        break;
      return 183;	 // "bitfield_extract_from_sext_inreg"
    case 'c':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "ombine_f", 8) != 0)
        break;
      switch (RuleIdentifier[9]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+10, "dd_fmul_to_fmad_or_fma", 22) != 0)
          break;
        return 196;	 // "combine_fadd_fmul_to_fmad_or_fma"
      case 's':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+10, "ub_fmul_to_fmad_or_fma", 22) != 0)
          break;
        return 200;	 // "combine_fsub_fmul_to_fmad_or_fma"
      }
      break;
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "xtract_vector_element_not_const", 31) != 0)
        break;
      return 31;	 // "extract_vector_element_not_const"
    }
    break;
  case 33:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "constant_fold_intrinsic_roundeven", 33) != 0)
      break;
    return 155;	 // "constant_fold_intrinsic_roundeven"
  case 34:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "extract_all_elts_from_build_vector", 34) != 0)
      break;
    return 73;	 // "extract_all_elts_from_build_vector"
  case 35:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "extract_vector_element_build_vector", 35) != 0)
      break;
    return 33;	 // "extract_vector_element_build_vector"
  case 36:	 // 4 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'c':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "ombine_", 7) != 0)
        break;
      switch (RuleIdentifier[8]) {
      default: break;
      case 'f':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+9, "add_fma_fmul_to_fmad_or_fma", 27) != 0)
          break;
        return 198;	 // "combine_fadd_fma_fmul_to_fmad_or_fma"
      case 'i':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+9, "nsert_vec_elts_build_vector", 27) != 0)
          break;
        return 71;	 // "combine_insert_vec_elts_build_vector"
      }
      break;
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nsert_extract_vec_elt_out_of_bounds", 35) != 0)
        break;
      return 88;	 // "insert_extract_vec_elt_out_of_bounds"
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "atch_extract_of_element_undef_index", 35) != 0)
        break;
      return 26;	 // "match_extract_of_element_undef_index"
    }
    break;
  case 37:	 // 4 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ombine_fsub_fneg_fmul_to_fmad_or_fma", 36) != 0)
        break;
      return 201;	 // "combine_fsub_fneg_fmul_to_fmad_or_fma"
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "xtract_vector_element_shuffle_vector", 36) != 0)
        break;
      return 41;	 // "extract_vector_element_shuffle_vector"
    case 'h':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "oist_logic_op_with_same_opcode_hands", 36) != 0)
        break;
      return 113;	 // "hoist_logic_op_with_same_opcode_hands"
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "atch_extract_of_element_undef_vector", 36) != 0)
        break;
      return 25;	 // "match_extract_of_element_undef_vector"
    }
    break;
  case 38:	 // 2 strings to match.
    if (memcmp(RuleIdentifier.data()+0, "combine_f", 9) != 0)
      break;
    switch (RuleIdentifier[9]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+10, "dd_fpext_fmul_to_fmad_or_fma", 28) != 0)
        break;
      return 197;	 // "combine_fadd_fpext_fmul_to_fmad_or_fma"
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+10, "ub_fpext_fmul_to_fmad_or_fma", 28) != 0)
        break;
      return 202;	 // "combine_fsub_fpext_fmul_to_fmad_or_fma"
    }
    break;
  case 40:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "extract_vector_element_different_indices", 40) != 0)
      break;
    return 32;	 // "extract_vector_element_different_indices"
  case 42:	 // 9 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ombine_fadd_fpext_fma_fmul_to_fmad_or_fma", 41) != 0)
        break;
      return 199;	 // "combine_fadd_fpext_fma_fmul_to_fmad_or_fma"
    case 'e':	 // 7 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "xtract_vector_element_build_vector_trunc", 40) != 0)
        break;
      switch (RuleIdentifier[41]) {
      default: break;
      case '2':	 // 1 string to match.
        return 34;	 // "extract_vector_element_build_vector_trunc2"
      case '3':	 // 1 string to match.
        return 35;	 // "extract_vector_element_build_vector_trunc3"
      case '4':	 // 1 string to match.
        return 36;	 // "extract_vector_element_build_vector_trunc4"
      case '5':	 // 1 string to match.
        return 37;	 // "extract_vector_element_build_vector_trunc5"
      case '6':	 // 1 string to match.
        return 38;	 // "extract_vector_element_build_vector_trunc6"
      case '7':	 // 1 string to match.
        return 39;	 // "extract_vector_element_build_vector_trunc7"
      case '8':	 // 1 string to match.
        return 40;	 // "extract_vector_element_build_vector_trunc8"
      }
      break;
    case 'f':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "unnel_shift_or_shift_to_funnel_shift_left", 41) != 0)
        break;
      return 178;	 // "funnel_shift_or_shift_to_funnel_shift_left"
    }
    break;
  case 43:	 // 2 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ombine_fsub_fpext_fneg_fmul_to_fmad_or_fma", 42) != 0)
        break;
      return 203;	 // "combine_fsub_fpext_fneg_fmul_to_fmad_or_fma"
    case 'f':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "unnel_shift_or_shift_to_funnel_shift_right", 42) != 0)
        break;
      return 179;	 // "funnel_shift_or_shift_to_funnel_shift_right"
    }
    break;
  case 44:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "insert_vector_element_extract_vector_element", 44) != 0)
      break;
    return 42;	 // "insert_vector_element_extract_vector_element"
  case 46:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "push_freeze_to_prevent_poison_from_propagating", 46) != 0)
      break;
    return 48;	 // "push_freeze_to_prevent_poison_from_propagating"
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
    return {{0, 285}};
  }
  const auto I = getRuleIdxForIdentifier(RangePair.first);
  if (!I)
    return std::nullopt;
  return {{*I, *I + 1}};
}

bool AArch64PreLegalizerCombinerImplRuleConfig::setRuleEnabled(StringRef RuleIdentifier) {
  auto MaybeRange = getRuleRangeForIdentifier(RuleIdentifier);
  if (!MaybeRange)
    return false;
  for (auto I = MaybeRange->first; I < MaybeRange->second; ++I)
    DisabledRules.reset(I);
  return true;
}

bool AArch64PreLegalizerCombinerImplRuleConfig::setRuleDisabled(StringRef RuleIdentifier) {
  auto MaybeRange = getRuleRangeForIdentifier(RuleIdentifier);
  if (!MaybeRange)
    return false;
  for (auto I = MaybeRange->first; I < MaybeRange->second; ++I)
    DisabledRules.set(I);
  return true;
}

static std::vector<std::string> AArch64PreLegalizerCombinerOption;
static cl::list<std::string> AArch64PreLegalizerCombinerDisableOption(
    "aarch64prelegalizercombiner-disable-rule",
    cl::desc("Disable one or more combiner rules temporarily in the AArch64PreLegalizerCombiner pass"),
    cl::CommaSeparated,
    cl::Hidden,
    cl::cat(GICombinerOptionCategory),
    cl::callback([](const std::string &Str) {
      AArch64PreLegalizerCombinerOption.push_back(Str);
    }));
static cl::list<std::string> AArch64PreLegalizerCombinerOnlyEnableOption(
    "aarch64prelegalizercombiner-only-enable-rule",
    cl::desc("Disable all rules in the AArch64PreLegalizerCombiner pass then re-enable the specified ones"),
    cl::Hidden,
    cl::cat(GICombinerOptionCategory),
    cl::callback([](const std::string &CommaSeparatedArg) {
      StringRef Str = CommaSeparatedArg;
      AArch64PreLegalizerCombinerOption.push_back("*");
      do {
        auto X = Str.split(",");
        AArch64PreLegalizerCombinerOption.push_back(("!" + X.first).str());
        Str = X.second;
      } while (!Str.empty());
    }));


bool AArch64PreLegalizerCombinerImplRuleConfig::isRuleEnabled(unsigned RuleID) const {
    return  !DisabledRules.test(RuleID);
}
bool AArch64PreLegalizerCombinerImplRuleConfig::parseCommandLineOption() {
  for (StringRef Identifier : AArch64PreLegalizerCombinerOption) {
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

const unsigned MAX_SUBTARGET_PREDICATES = 1;
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
  typedef ComplexRendererFns(AArch64PreLegalizerCombinerImpl::*ComplexMatcherMemFn)(MachineOperand &) const;
  typedef void(AArch64PreLegalizerCombinerImpl::*CustomRendererFn)(MachineInstrBuilder &, const MachineInstr &, int) const;
  const ExecInfoTy<PredicateBitset, ComplexMatcherMemFn, CustomRendererFn> ExecInfo;
  static AArch64PreLegalizerCombinerImpl::ComplexMatcherMemFn ComplexPredicateFns[];
  static AArch64PreLegalizerCombinerImpl::CustomRendererFn CustomRenderers[];
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
  Feature_HasDotProdBit = 0,
};

PredicateBitset AArch64PreLegalizerCombinerImpl::
computeAvailableModuleFeatures(const AArch64Subtarget *Subtarget) const {
  PredicateBitset Features{};
  if (Subtarget->hasDotProd())
    Features.set(Feature_HasDotProdBit);
  return Features;
}

void AArch64PreLegalizerCombinerImpl::setupGeneratedPerFunctionState(MachineFunction &MF) {
  AvailableFunctionFeatures = computeAvailableFunctionFeatures((const AArch64Subtarget *)&MF.getSubtarget(), &MF);
}
PredicateBitset AArch64PreLegalizerCombinerImpl::
computeAvailableFunctionFeatures(const AArch64Subtarget *Subtarget, const MachineFunction *MF) const {
  PredicateBitset Features{};
  return Features;
}

// Feature bitsets.
enum {
  GIFBS_Invalid,
  GIFBS_HasDotProd,
};
constexpr static PredicateBitset FeatureBitsets[] {
  {}, // GIFBS_Invalid
  {Feature_HasDotProdBit, },
};

// ComplexPattern predicates.
enum {
  GICP_Invalid,
};
// See constructor for table contents

AArch64PreLegalizerCombinerImpl::ComplexMatcherMemFn
AArch64PreLegalizerCombinerImpl::ComplexPredicateFns[] = {
  nullptr, // GICP_Invalid
};

enum {
  GICXXPred_MI_Predicate_GICombiner0 = GICXXPred_Invalid + 1,
  GICXXPred_MI_Predicate_GICombiner1,
  GICXXPred_MI_Predicate_GICombiner2,
  GICXXPred_MI_Predicate_GICombiner3,
  GICXXPred_MI_Predicate_GICombiner4,
  GICXXPred_MI_Predicate_GICombiner5,
  GICXXPred_MI_Predicate_GICombiner6,
  GICXXPred_MI_Predicate_GICombiner7,
  GICXXPred_MI_Predicate_GICombiner8,
  GICXXPred_MI_Predicate_GICombiner9,
  GICXXPred_MI_Predicate_GICombiner10,
  GICXXPred_MI_Predicate_GICombiner11,
  GICXXPred_MI_Predicate_GICombiner12,
  GICXXPred_MI_Predicate_GICombiner13,
  GICXXPred_MI_Predicate_GICombiner14,
  GICXXPred_MI_Predicate_GICombiner15,
  GICXXPred_MI_Predicate_GICombiner16,
  GICXXPred_MI_Predicate_GICombiner17,
  GICXXPred_MI_Predicate_GICombiner18,
  GICXXPred_MI_Predicate_GICombiner19,
  GICXXPred_MI_Predicate_GICombiner20,
  GICXXPred_MI_Predicate_GICombiner21,
  GICXXPred_MI_Predicate_GICombiner22,
  GICXXPred_MI_Predicate_GICombiner23,
};
bool AArch64PreLegalizerCombinerImpl::testMIPredicate_MI(unsigned PredicateID, const MachineInstr & MI, const MatcherState &State) const {
  switch (PredicateID) {
  case GICXXPred_MI_Predicate_GICombiner0: {
    return MRI.hasOneNonDBGUse(State.MIs[0]->getOperand(2).getReg());
  }
  case GICXXPred_MI_Predicate_GICombiner1: {
    return MRI.hasOneNonDBGUse(State.MIs[0]->getOperand(1).getReg());
  }
  case GICXXPred_MI_Predicate_GICombiner2: {
    return isGuaranteedNotToBePoison(State.MIs[0]->getOperand(1).getReg(), MRI);
  }
  case GICXXPred_MI_Predicate_GICombiner3: {
    return isGuaranteedNotToBeUndefOrPoison(State.MIs[0]->getOperand(1).getReg(), MRI);
  }
  case GICXXPred_MI_Predicate_GICombiner4: {
    return Helper.matchConstantFPOp(State.MIs[0]->getOperand(2), 1.0);
  }
  case GICXXPred_MI_Predicate_GICombiner5: {
    return MRI.getType(State.MIs[1]->getOperand(1).getReg()) != MRI.getType(State.MIs[0]->getOperand(0).getReg());
  }
  case GICXXPred_MI_Predicate_GICombiner6: {
    return Helper.matchConstantFPOp(State.MIs[0]->getOperand(2), -0.0);
  }
  case GICXXPred_MI_Predicate_GICombiner7: {
    return Helper.matchConstantFPOp(State.MIs[0]->getOperand(2), 0.0);
  }
  case GICXXPred_MI_Predicate_GICombiner8: {
    return Helper.matchConstantFPOp(State.MIs[0]->getOperand(2), -1.0);
  }
  case GICXXPred_MI_Predicate_GICombiner9: {
    return State.MIs[1]->getOperand(1).getPredicate() == CmpInst::ICMP_EQ &&
                               !MRI.getType(State.MIs[1]->getOperand(2).getReg()).getScalarType().isPointer() &&
                               (MRI.getType(State.MIs[1]->getOperand(2).getReg()) ==
                                   MRI.getType(State.MIs[2]->getOperand(2).getReg()));
  }
  case GICXXPred_MI_Predicate_GICombiner10: {
    return State.MIs[1]->getOperand(1).getPredicate() == CmpInst::ICMP_NE &&
                               !MRI.getType(State.MIs[1]->getOperand(2).getReg()).getScalarType().isPointer() &&
                               (MRI.getType(State.MIs[1]->getOperand(2).getReg()) ==
                                   MRI.getType(State.MIs[2]->getOperand(2).getReg()));
  }
  case GICXXPred_MI_Predicate_GICombiner11: {
    return MRI.hasOneNonDBGUse(State.MIs[0]->getOperand(2).getReg()) &&
                    Helper.isLegalOrBeforeLegalizer(
                      {TargetOpcode::G_SEXT_INREG, {MRI.getType(State.MIs[1]->getOperand(1).getReg())}});
  }
  case GICXXPred_MI_Predicate_GICombiner12: {
    return MRI.getType(State.MIs[0]->getOperand(1).getReg()) == MRI.getType(State.MIs[0]->getOperand(0).getReg()) &&
                      VT->computeNumSignBits(State.MIs[0]->getOperand(1).getReg()) == MRI.getType(State.MIs[0]->getOperand(0).getReg()).getScalarSizeInBits();
  }
  case GICXXPred_MI_Predicate_GICombiner13: {
    return Helper.isLegalOrBeforeLegalizer({TargetOpcode::G_LSHR,
                                                           {MRI.getType(State.MIs[2]->getOperand(1).getReg()),
                                                            MRI.getType(State.MIs[1]->getOperand(2).getReg())}});
  }
  case GICXXPred_MI_Predicate_GICombiner14: {
    return Helper.isLegalOrBeforeLegalizer({TargetOpcode::G_SHL,
                                                           {MRI.getType(State.MIs[2]->getOperand(1).getReg()),
                                                            MRI.getType(State.MIs[1]->getOperand(2).getReg())}});
  }
  case GICXXPred_MI_Predicate_GICombiner15: {
    return Helper.matchTruncUSatU(*State.MIs[0], *State.MIs[1]);
  }
  case GICXXPred_MI_Predicate_GICombiner16: {
    return Helper.matchTruncUSatUToFPTOUISat(*State.MIs[0], *State.MIs[1]);
  }
  case GICXXPred_MI_Predicate_GICombiner17: {
    return MRI.hasOneNonDBGUse(State.MIs[0]->getOperand(2).getReg()) &&
                               MRI.hasOneNonDBGUse(State.MIs[1]->getOperand(1).getReg());
  }
  case GICXXPred_MI_Predicate_GICombiner18: {
    return MRI.hasOneNonDBGUse(State.MIs[0]->getOperand(1).getReg()) &&
                               MRI.hasOneNonDBGUse(State.MIs[1]->getOperand(1).getReg());
  }
  case GICXXPred_MI_Predicate_GICombiner19: {
    return MRI.hasOneNonDBGUse(State.MIs[1]->getOperand(2).getReg()) &&
                            MRI.hasOneNonDBGUse(State.MIs[0]->getOperand(2).getReg());
  }
  case GICXXPred_MI_Predicate_GICombiner20: {
    return Helper.matchAVG(*State.MIs[0], MRI, State.MIs[2]->getOperand(1).getReg(), State.MIs[3]->getOperand(1).getReg(), TargetOpcode::G_UAVGFLOOR);
  }
  case GICXXPred_MI_Predicate_GICombiner21: {
    return Helper.matchAVG(*State.MIs[0], MRI, State.MIs[2]->getOperand(1).getReg(), State.MIs[3]->getOperand(1).getReg(), TargetOpcode::G_SAVGFLOOR);
  }
  case GICXXPred_MI_Predicate_GICombiner22: {
    return Helper.matchAVG(*State.MIs[0], MRI, State.MIs[3]->getOperand(1).getReg(), State.MIs[4]->getOperand(1).getReg(), TargetOpcode::G_UAVGCEIL);
  }
  case GICXXPred_MI_Predicate_GICombiner23: {
    return Helper.matchAVG(*State.MIs[0], MRI, State.MIs[3]->getOperand(1).getReg(), State.MIs[4]->getOperand(1).getReg(), TargetOpcode::G_SAVGCEIL);
  }
  }
  llvm_unreachable("Unknown predicate");
  return false;
}
bool AArch64PreLegalizerCombinerImpl::testMOPredicate_MO(unsigned PredicateID, const MachineOperand & MO, const MatcherState &State) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool AArch64PreLegalizerCombinerImpl::testImmPredicate_I64(unsigned PredicateID, int64_t Imm) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool AArch64PreLegalizerCombinerImpl::testImmPredicate_APFloat(unsigned PredicateID, const APFloat & Imm) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool AArch64PreLegalizerCombinerImpl::testImmPredicate_APInt(unsigned PredicateID, const APInt & Imm) const {
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
  GICXXPred_Simple_IsRule65Enabled,
  GICXXPred_Simple_IsRule66Enabled,
  GICXXPred_Simple_IsRule67Enabled,
  GICXXPred_Simple_IsRule68Enabled,
  GICXXPred_Simple_IsRule69Enabled,
  GICXXPred_Simple_IsRule70Enabled,
  GICXXPred_Simple_IsRule71Enabled,
  GICXXPred_Simple_IsRule72Enabled,
  GICXXPred_Simple_IsRule73Enabled,
  GICXXPred_Simple_IsRule74Enabled,
  GICXXPred_Simple_IsRule75Enabled,
  GICXXPred_Simple_IsRule76Enabled,
  GICXXPred_Simple_IsRule77Enabled,
  GICXXPred_Simple_IsRule78Enabled,
  GICXXPred_Simple_IsRule79Enabled,
  GICXXPred_Simple_IsRule80Enabled,
  GICXXPred_Simple_IsRule81Enabled,
  GICXXPred_Simple_IsRule82Enabled,
  GICXXPred_Simple_IsRule83Enabled,
  GICXXPred_Simple_IsRule84Enabled,
  GICXXPred_Simple_IsRule85Enabled,
  GICXXPred_Simple_IsRule86Enabled,
  GICXXPred_Simple_IsRule87Enabled,
  GICXXPred_Simple_IsRule88Enabled,
  GICXXPred_Simple_IsRule89Enabled,
  GICXXPred_Simple_IsRule90Enabled,
  GICXXPred_Simple_IsRule91Enabled,
  GICXXPred_Simple_IsRule92Enabled,
  GICXXPred_Simple_IsRule93Enabled,
  GICXXPred_Simple_IsRule94Enabled,
  GICXXPred_Simple_IsRule95Enabled,
  GICXXPred_Simple_IsRule96Enabled,
  GICXXPred_Simple_IsRule97Enabled,
  GICXXPred_Simple_IsRule98Enabled,
  GICXXPred_Simple_IsRule99Enabled,
  GICXXPred_Simple_IsRule100Enabled,
  GICXXPred_Simple_IsRule101Enabled,
  GICXXPred_Simple_IsRule102Enabled,
  GICXXPred_Simple_IsRule103Enabled,
  GICXXPred_Simple_IsRule104Enabled,
  GICXXPred_Simple_IsRule105Enabled,
  GICXXPred_Simple_IsRule106Enabled,
  GICXXPred_Simple_IsRule107Enabled,
  GICXXPred_Simple_IsRule108Enabled,
  GICXXPred_Simple_IsRule109Enabled,
  GICXXPred_Simple_IsRule110Enabled,
  GICXXPred_Simple_IsRule111Enabled,
  GICXXPred_Simple_IsRule112Enabled,
  GICXXPred_Simple_IsRule113Enabled,
  GICXXPred_Simple_IsRule114Enabled,
  GICXXPred_Simple_IsRule115Enabled,
  GICXXPred_Simple_IsRule116Enabled,
  GICXXPred_Simple_IsRule117Enabled,
  GICXXPred_Simple_IsRule118Enabled,
  GICXXPred_Simple_IsRule119Enabled,
  GICXXPred_Simple_IsRule120Enabled,
  GICXXPred_Simple_IsRule121Enabled,
  GICXXPred_Simple_IsRule122Enabled,
  GICXXPred_Simple_IsRule123Enabled,
  GICXXPred_Simple_IsRule124Enabled,
  GICXXPred_Simple_IsRule125Enabled,
  GICXXPred_Simple_IsRule126Enabled,
  GICXXPred_Simple_IsRule127Enabled,
  GICXXPred_Simple_IsRule128Enabled,
  GICXXPred_Simple_IsRule129Enabled,
  GICXXPred_Simple_IsRule130Enabled,
  GICXXPred_Simple_IsRule131Enabled,
  GICXXPred_Simple_IsRule132Enabled,
  GICXXPred_Simple_IsRule133Enabled,
  GICXXPred_Simple_IsRule134Enabled,
  GICXXPred_Simple_IsRule135Enabled,
  GICXXPred_Simple_IsRule136Enabled,
  GICXXPred_Simple_IsRule137Enabled,
  GICXXPred_Simple_IsRule138Enabled,
  GICXXPred_Simple_IsRule139Enabled,
  GICXXPred_Simple_IsRule140Enabled,
  GICXXPred_Simple_IsRule141Enabled,
  GICXXPred_Simple_IsRule142Enabled,
  GICXXPred_Simple_IsRule143Enabled,
  GICXXPred_Simple_IsRule144Enabled,
  GICXXPred_Simple_IsRule145Enabled,
  GICXXPred_Simple_IsRule146Enabled,
  GICXXPred_Simple_IsRule147Enabled,
  GICXXPred_Simple_IsRule148Enabled,
  GICXXPred_Simple_IsRule149Enabled,
  GICXXPred_Simple_IsRule150Enabled,
  GICXXPred_Simple_IsRule151Enabled,
  GICXXPred_Simple_IsRule152Enabled,
  GICXXPred_Simple_IsRule153Enabled,
  GICXXPred_Simple_IsRule154Enabled,
  GICXXPred_Simple_IsRule155Enabled,
  GICXXPred_Simple_IsRule156Enabled,
  GICXXPred_Simple_IsRule157Enabled,
  GICXXPred_Simple_IsRule158Enabled,
  GICXXPred_Simple_IsRule159Enabled,
  GICXXPred_Simple_IsRule160Enabled,
  GICXXPred_Simple_IsRule161Enabled,
  GICXXPred_Simple_IsRule162Enabled,
  GICXXPred_Simple_IsRule163Enabled,
  GICXXPred_Simple_IsRule164Enabled,
  GICXXPred_Simple_IsRule165Enabled,
  GICXXPred_Simple_IsRule166Enabled,
  GICXXPred_Simple_IsRule167Enabled,
  GICXXPred_Simple_IsRule168Enabled,
  GICXXPred_Simple_IsRule169Enabled,
  GICXXPred_Simple_IsRule170Enabled,
  GICXXPred_Simple_IsRule171Enabled,
  GICXXPred_Simple_IsRule172Enabled,
  GICXXPred_Simple_IsRule173Enabled,
  GICXXPred_Simple_IsRule174Enabled,
  GICXXPred_Simple_IsRule175Enabled,
  GICXXPred_Simple_IsRule176Enabled,
  GICXXPred_Simple_IsRule177Enabled,
  GICXXPred_Simple_IsRule178Enabled,
  GICXXPred_Simple_IsRule179Enabled,
  GICXXPred_Simple_IsRule180Enabled,
  GICXXPred_Simple_IsRule181Enabled,
  GICXXPred_Simple_IsRule182Enabled,
  GICXXPred_Simple_IsRule183Enabled,
  GICXXPred_Simple_IsRule184Enabled,
  GICXXPred_Simple_IsRule185Enabled,
  GICXXPred_Simple_IsRule186Enabled,
  GICXXPred_Simple_IsRule187Enabled,
  GICXXPred_Simple_IsRule188Enabled,
  GICXXPred_Simple_IsRule189Enabled,
  GICXXPred_Simple_IsRule190Enabled,
  GICXXPred_Simple_IsRule191Enabled,
  GICXXPred_Simple_IsRule192Enabled,
  GICXXPred_Simple_IsRule193Enabled,
  GICXXPred_Simple_IsRule194Enabled,
  GICXXPred_Simple_IsRule195Enabled,
  GICXXPred_Simple_IsRule196Enabled,
  GICXXPred_Simple_IsRule197Enabled,
  GICXXPred_Simple_IsRule198Enabled,
  GICXXPred_Simple_IsRule199Enabled,
  GICXXPred_Simple_IsRule200Enabled,
  GICXXPred_Simple_IsRule201Enabled,
  GICXXPred_Simple_IsRule202Enabled,
  GICXXPred_Simple_IsRule203Enabled,
  GICXXPred_Simple_IsRule204Enabled,
  GICXXPred_Simple_IsRule205Enabled,
  GICXXPred_Simple_IsRule206Enabled,
  GICXXPred_Simple_IsRule207Enabled,
  GICXXPred_Simple_IsRule208Enabled,
  GICXXPred_Simple_IsRule209Enabled,
  GICXXPred_Simple_IsRule210Enabled,
  GICXXPred_Simple_IsRule211Enabled,
  GICXXPred_Simple_IsRule212Enabled,
  GICXXPred_Simple_IsRule213Enabled,
  GICXXPred_Simple_IsRule214Enabled,
  GICXXPred_Simple_IsRule215Enabled,
  GICXXPred_Simple_IsRule216Enabled,
  GICXXPred_Simple_IsRule217Enabled,
  GICXXPred_Simple_IsRule218Enabled,
  GICXXPred_Simple_IsRule219Enabled,
  GICXXPred_Simple_IsRule220Enabled,
  GICXXPred_Simple_IsRule221Enabled,
  GICXXPred_Simple_IsRule222Enabled,
  GICXXPred_Simple_IsRule223Enabled,
  GICXXPred_Simple_IsRule224Enabled,
  GICXXPred_Simple_IsRule225Enabled,
  GICXXPred_Simple_IsRule226Enabled,
  GICXXPred_Simple_IsRule227Enabled,
  GICXXPred_Simple_IsRule228Enabled,
  GICXXPred_Simple_IsRule229Enabled,
  GICXXPred_Simple_IsRule230Enabled,
  GICXXPred_Simple_IsRule231Enabled,
  GICXXPred_Simple_IsRule232Enabled,
  GICXXPred_Simple_IsRule233Enabled,
  GICXXPred_Simple_IsRule234Enabled,
  GICXXPred_Simple_IsRule235Enabled,
  GICXXPred_Simple_IsRule236Enabled,
  GICXXPred_Simple_IsRule237Enabled,
  GICXXPred_Simple_IsRule238Enabled,
  GICXXPred_Simple_IsRule239Enabled,
  GICXXPred_Simple_IsRule240Enabled,
  GICXXPred_Simple_IsRule241Enabled,
  GICXXPred_Simple_IsRule242Enabled,
  GICXXPred_Simple_IsRule243Enabled,
  GICXXPred_Simple_IsRule244Enabled,
  GICXXPred_Simple_IsRule245Enabled,
  GICXXPred_Simple_IsRule246Enabled,
  GICXXPred_Simple_IsRule247Enabled,
  GICXXPred_Simple_IsRule248Enabled,
  GICXXPred_Simple_IsRule249Enabled,
  GICXXPred_Simple_IsRule250Enabled,
  GICXXPred_Simple_IsRule251Enabled,
  GICXXPred_Simple_IsRule252Enabled,
  GICXXPred_Simple_IsRule253Enabled,
  GICXXPred_Simple_IsRule254Enabled,
  GICXXPred_Simple_IsRule255Enabled,
  GICXXPred_Simple_IsRule256Enabled,
  GICXXPred_Simple_IsRule257Enabled,
  GICXXPred_Simple_IsRule258Enabled,
  GICXXPred_Simple_IsRule259Enabled,
  GICXXPred_Simple_IsRule260Enabled,
  GICXXPred_Simple_IsRule261Enabled,
  GICXXPred_Simple_IsRule262Enabled,
  GICXXPred_Simple_IsRule263Enabled,
  GICXXPred_Simple_IsRule264Enabled,
  GICXXPred_Simple_IsRule265Enabled,
  GICXXPred_Simple_IsRule266Enabled,
  GICXXPred_Simple_IsRule267Enabled,
  GICXXPred_Simple_IsRule268Enabled,
  GICXXPred_Simple_IsRule269Enabled,
  GICXXPred_Simple_IsRule270Enabled,
  GICXXPred_Simple_IsRule271Enabled,
  GICXXPred_Simple_IsRule272Enabled,
  GICXXPred_Simple_IsRule273Enabled,
  GICXXPred_Simple_IsRule274Enabled,
  GICXXPred_Simple_IsRule275Enabled,
  GICXXPred_Simple_IsRule276Enabled,
  GICXXPred_Simple_IsRule277Enabled,
  GICXXPred_Simple_IsRule278Enabled,
  GICXXPred_Simple_IsRule279Enabled,
  GICXXPred_Simple_IsRule280Enabled,
  GICXXPred_Simple_IsRule281Enabled,
  GICXXPred_Simple_IsRule282Enabled,
  GICXXPred_Simple_IsRule283Enabled,
  GICXXPred_Simple_IsRule284Enabled,
};

bool AArch64PreLegalizerCombinerImpl::testSimplePredicate(unsigned Predicate) const {
    return RuleConfig.isRuleEnabled(Predicate - GICXXPred_Invalid - 1);
}
// Custom renderers.
enum {
  GICR_Invalid,
};
AArch64PreLegalizerCombinerImpl::CustomRendererFn
AArch64PreLegalizerCombinerImpl::CustomRenderers[] = {
  nullptr, // GICR_Invalid
};

static bool AArch64PreLegalizerCombinerImpl_canMatchOpcode(unsigned Opc) {
  switch (Opc) {
  case TargetOpcode::G_FCMP:
  case TargetOpcode::G_FSHL:
  case TargetOpcode::G_FSHR:
  case TargetOpcode::G_ICMP:
  case TargetOpcode::G_INSERT_VECTOR_ELT:
  case TargetOpcode::G_MEMCPY:
  case TargetOpcode::G_MEMMOVE:
  case TargetOpcode::G_MEMSET:
  case TargetOpcode::G_SELECT:
  case TargetOpcode::G_SHUFFLE_VECTOR:
  case TargetOpcode::G_UADDO:
  case TargetOpcode::G_ADD:
  case TargetOpcode::G_AND:
  case TargetOpcode::G_ASHR:
  case TargetOpcode::G_EXTRACT_VECTOR_ELT:
  case TargetOpcode::G_FADD:
  case TargetOpcode::G_FCOPYSIGN:
  case TargetOpcode::G_FDIV:
  case TargetOpcode::G_FMAXIMUM:
  case TargetOpcode::G_FMAXIMUMNUM:
  case TargetOpcode::G_FMAXNUM:
  case TargetOpcode::G_FMINIMUM:
  case TargetOpcode::G_FMINIMUMNUM:
  case TargetOpcode::G_FMINNUM:
  case TargetOpcode::G_FMUL:
  case TargetOpcode::G_FPOWI:
  case TargetOpcode::G_FREM:
  case TargetOpcode::G_FSUB:
  case TargetOpcode::G_LSHR:
  case TargetOpcode::G_MEMCPY_INLINE:
  case TargetOpcode::G_MEMSET_INLINE:
  case TargetOpcode::G_MERGE_VALUES:
  case TargetOpcode::G_MUL:
  case TargetOpcode::G_OR:
  case TargetOpcode::G_PTR_ADD:
  case TargetOpcode::G_ROTL:
  case TargetOpcode::G_ROTR:
  case TargetOpcode::G_SDIV:
  case TargetOpcode::G_SEXT_INREG:
  case TargetOpcode::G_SHL:
  case TargetOpcode::G_SREM:
  case TargetOpcode::G_SUB:
  case TargetOpcode::G_UDIV:
  case TargetOpcode::G_UREM:
  case TargetOpcode::G_XOR:
  case TargetOpcode::COPY:
  case TargetOpcode::G_ABS:
  case TargetOpcode::G_ANYEXT:
  case TargetOpcode::G_BITCAST:
  case TargetOpcode::G_BITREVERSE:
  case TargetOpcode::G_BSWAP:
  case TargetOpcode::G_BUILD_VECTOR:
  case TargetOpcode::G_CTLZ:
  case TargetOpcode::G_CTLZ_ZERO_POISON:
  case TargetOpcode::G_CTPOP:
  case TargetOpcode::G_CTTZ:
  case TargetOpcode::G_CTTZ_ZERO_POISON:
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
  case TargetOpcode::G_SEXT:
  case TargetOpcode::G_SITOFP:
  case TargetOpcode::G_TRUNC:
  case TargetOpcode::G_TRUNC_USAT_U:
  case TargetOpcode::G_UITOFP:
  case TargetOpcode::G_ZEXT:
  case TargetOpcode::G_BR:
  case TargetOpcode::G_BUILD_VECTOR_TRUNC:
  case TargetOpcode::G_CONCAT_VECTORS:
  case TargetOpcode::G_FMA:
  case TargetOpcode::G_FMAD:
  case TargetOpcode::G_FMAXNUM_IEEE:
  case TargetOpcode::G_FMINNUM_IEEE:
  case TargetOpcode::G_GLOBAL_VALUE:
  case TargetOpcode::G_LOAD:
  case TargetOpcode::G_PHI:
  case TargetOpcode::G_SADDE:
  case TargetOpcode::G_SADDO:
  case TargetOpcode::G_SADDSAT:
  case TargetOpcode::G_SEXTLOAD:
  case TargetOpcode::G_SMAX:
  case TargetOpcode::G_SMIN:
  case TargetOpcode::G_SMULFIX:
  case TargetOpcode::G_SMULFIXSAT:
  case TargetOpcode::G_SMULH:
  case TargetOpcode::G_SMULO:
  case TargetOpcode::G_SSHLSAT:
  case TargetOpcode::G_SSUBE:
  case TargetOpcode::G_SSUBO:
  case TargetOpcode::G_STORE:
  case TargetOpcode::G_UADDE:
  case TargetOpcode::G_UADDSAT:
  case TargetOpcode::G_UMAX:
  case TargetOpcode::G_UMIN:
  case TargetOpcode::G_UMULFIX:
  case TargetOpcode::G_UMULFIXSAT:
  case TargetOpcode::G_UMULH:
  case TargetOpcode::G_UMULO:
  case TargetOpcode::G_UNMERGE_VALUES:
  case TargetOpcode::G_USHLSAT:
  case TargetOpcode::G_USUBE:
  case TargetOpcode::G_USUBO:
  case TargetOpcode::G_VECREDUCE_ADD:
  case TargetOpcode::G_ZEXTLOAD:
    return true;
  default:
    return false;
  }
}

bool AArch64PreLegalizerCombinerImpl::tryCombineAllImpl(MachineInstr &I) const {
  if (!AArch64PreLegalizerCombinerImpl_canMatchOpcode(I.getOpcode()))
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
  GICXXCustomAction_GICombiner35,
  GICXXCustomAction_GICombiner36,
  GICXXCustomAction_GICombiner37,
  GICXXCustomAction_GICombiner38,
  GICXXCustomAction_GICombiner39,
  GICXXCustomAction_GICombiner40,
  GICXXCustomAction_GICombiner41,
  GICXXCustomAction_GICombiner42,
  GICXXCustomAction_GICombiner43,
  GICXXCustomAction_GICombiner44,
  GICXXCustomAction_GICombiner45,
  GICXXCustomAction_GICombiner46,
  GICXXCustomAction_GICombiner47,
  GICXXCustomAction_GICombiner48,
  GICXXCustomAction_GICombiner49,
  GICXXCustomAction_GICombiner50,
  GICXXCustomAction_GICombiner51,
  GICXXCustomAction_GICombiner52,
  GICXXCustomAction_GICombiner53,
  GICXXCustomAction_GICombiner54,
  GICXXCustomAction_GICombiner55,
  GICXXCustomAction_GICombiner56,
  GICXXCustomAction_GICombiner57,
  GICXXCustomAction_GICombiner58,
  GICXXCustomAction_GICombiner59,
  GICXXCustomAction_GICombiner60,
  GICXXCustomAction_GICombiner61,
  GICXXCustomAction_GICombiner62,
  GICXXCustomAction_GICombiner63,
  GICXXCustomAction_GICombiner64,
  GICXXCustomAction_GICombiner65,
  GICXXCustomAction_GICombiner66,
  GICXXCustomAction_GICombiner67,
  GICXXCustomAction_GICombiner68,
  GICXXCustomAction_GICombiner69,
  GICXXCustomAction_GICombiner70,
  GICXXCustomAction_GICombiner71,
  GICXXCustomAction_GICombiner72,
  GICXXCustomAction_GICombiner73,
  GICXXCustomAction_GICombiner74,
  GICXXCustomAction_GICombiner75,
  GICXXCustomAction_GICombiner76,
  GICXXCustomAction_GICombiner77,
  GICXXCustomAction_GICombiner78,
  GICXXCustomAction_GICombiner79,
  GICXXCustomAction_GICombiner80,
  GICXXCustomAction_GICombiner81,
  GICXXCustomAction_GICombiner82,
  GICXXCustomAction_GICombiner83,
  GICXXCustomAction_GICombiner84,
  GICXXCustomAction_GICombiner85,
  GICXXCustomAction_GICombiner86,
  GICXXCustomAction_GICombiner87,
  GICXXCustomAction_GICombiner88,
  GICXXCustomAction_GICombiner89,
  GICXXCustomAction_GICombiner90,
  GICXXCustomAction_GICombiner91,
  GICXXCustomAction_GICombiner92,
  GICXXCustomAction_GICombiner93,
  GICXXCustomAction_GICombiner94,
  GICXXCustomAction_GICombiner95,
  GICXXCustomAction_GICombiner96,
  GICXXCustomAction_GICombiner97,
  GICXXCustomAction_GICombiner98,
  GICXXCustomAction_GICombiner99,
  GICXXCustomAction_GICombiner100,
  GICXXCustomAction_GICombiner101,
  GICXXCustomAction_GICombiner102,
  GICXXCustomAction_GICombiner103,
  GICXXCustomAction_GICombiner104,
  GICXXCustomAction_GICombiner105,
  GICXXCustomAction_GICombiner106,
  GICXXCustomAction_GICombiner107,
  GICXXCustomAction_GICombiner108,
  GICXXCustomAction_GICombiner109,
  GICXXCustomAction_GICombiner110,
  GICXXCustomAction_GICombiner111,
  GICXXCustomAction_GICombiner112,
  GICXXCustomAction_GICombiner113,
  GICXXCustomAction_GICombiner114,
  GICXXCustomAction_GICombiner115,
  GICXXCustomAction_GICombiner116,
  GICXXCustomAction_GICombiner117,
  GICXXCustomAction_GICombiner118,
  GICXXCustomAction_GICombiner119,
  GICXXCustomAction_GICombiner120,
  GICXXCustomAction_GICombiner121,
  GICXXCustomAction_GICombiner122,
  GICXXCustomAction_GICombiner123,
  GICXXCustomAction_GICombiner124,
  GICXXCustomAction_GICombiner125,
  GICXXCustomAction_GICombiner126,
  GICXXCustomAction_GICombiner127,
  GICXXCustomAction_GICombiner128,
  GICXXCustomAction_GICombiner129,
  GICXXCustomAction_GICombiner130,
  GICXXCustomAction_GICombiner131,
  GICXXCustomAction_GICombiner132,
  GICXXCustomAction_GICombiner133,
  GICXXCustomAction_GICombiner134,
  GICXXCustomAction_GICombiner135,
  GICXXCustomAction_GICombiner136,
  GICXXCustomAction_GICombiner137,
  GICXXCustomAction_GICombiner138,
  GICXXCustomAction_GICombiner139,
  GICXXCustomAction_GICombiner140,
  GICXXCustomAction_GICombiner141,
  GICXXCustomAction_GICombiner142,
  GICXXCustomAction_GICombiner143,
  GICXXCustomAction_GICombiner144,
  GICXXCustomAction_GICombiner145,
  GICXXCustomAction_GICombiner146,
  GICXXCustomAction_GICombiner147,
  GICXXCustomAction_GICombiner148,
  GICXXCustomAction_GICombiner149,
  GICXXCustomAction_GICombiner150,
  GICXXCustomAction_GICombiner151,
  GICXXCustomAction_GICombiner152,
  GICXXCustomAction_GICombiner153,
  GICXXCustomAction_GICombiner154,
  GICXXCustomAction_GICombiner155,
  GICXXCustomAction_GICombiner156,
  GICXXCustomAction_GICombiner157,
  GICXXCustomAction_GICombiner158,
  GICXXCustomAction_GICombiner159,
  GICXXCustomAction_GICombiner160,
  GICXXCustomAction_GICombiner161,
  GICXXCustomAction_GICombiner162,
  GICXXCustomAction_GICombiner163,
  GICXXCustomAction_GICombiner164,
  GICXXCustomAction_GICombiner165,
  GICXXCustomAction_GICombiner166,
  GICXXCustomAction_GICombiner167,
  GICXXCustomAction_GICombiner168,
};
bool AArch64PreLegalizerCombinerImpl::runCustomAction(unsigned ApplyID, const MatcherState &State, NewMIVector &OutMIs) const {
  Helper.getBuilder().setInstrAndDebugLoc(*State.MIs[0]);
  switch(ApplyID) {
  case GICXXCustomAction_GICombiner0:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchFoldAPlusC1MinusC2(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner1:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchFoldC2MinusAPlusC1(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner2:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchFoldAMinusC1MinusC2(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner3:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchFoldC1Minus2MinusC2(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner4:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchFoldAMinusC1PlusC2(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner5:{
    // Match Patterns
    if(![&](){return Helper.matchCombineCopy(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineCopy(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner6:{
    unsigned GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineMulToShl(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineMulToShl(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner7:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineSubToAdd(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnNoErase(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner8:{
    std::pair<Register, bool> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineAddP2IToPtrAdd(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineAddP2IToPtrAdd(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner9:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtractVectorElement(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner10:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchInsertVectorElementOOB(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner11:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtractVectorElementWithDifferentIndices(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner12:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtractVectorElementWithBuildVector(*State.MIs[0], *State.MIs[1],
              GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner13:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtractVectorElementWithBuildVectorTrunc(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner14:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtractVectorElementWithShuffleVector(*State.MIs[0], *State.MIs[1],
              GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner15:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchAddOfVScale(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner16:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchMulOfVScale(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner17:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchShlOfVScale(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner18:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchSubOfVScale(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner19:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return !isGuaranteedNotToBePoison(State.MIs[0]->getOperand(1).getReg(), MRI) && Helper.matchFreezeOfSingleMaybePoisonOperand(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner20:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchTruncateOfExt(*State.MIs[0], *State.MIs[1], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner21:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtOfExt(*State.MIs[0], *State.MIs[1], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner22:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchRedundantSextInReg(*State.MIs[0], *State.MIs[1], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner23:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCastOfSelect(*State.MIs[0], *State.MIs[1], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner24:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCastOfBuildVector(*State.MIs[0], *State.MIs[1], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner25:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchNarrowBinop(*State.MIs[0], *State.MIs[1], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner26:{
    APInt GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCastOfInteger(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithConstant(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner27:{
    SmallVector<Register> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineInsertVecElts(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineInsertVecElts(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner28:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtractVecEltBuildVec(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyExtractVecEltBuildVec(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner29:{
    SmallVector<std::pair<Register, MachineInstr*>> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtractAllEltsFromBuildVector(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyExtractAllEltsFromBuildVector(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner30:{
    PreferredTuple GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineExtendingLoads(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineExtendingLoads(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner31:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineLoadWithAndMask(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner32:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineExtractedVectorLoad(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner33:{
    // Match Patterns
    if(![&](){return Helper.matchAnyExplicitUseIsUndef(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithFConstant(*State.MIs[0], 0.0);
    return true;
  }
  case GICXXCustomAction_GICombiner34:{
    // Match Patterns
    if(![&](){return Helper.matchAnyExplicitUseIsUndef(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithConstant(*State.MIs[0], 0);
    return true;
  }
  case GICXXCustomAction_GICombiner35:{
    // Match Patterns
    if(![&](){return Helper.matchAnyExplicitUseIsUndef(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithConstant(*State.MIs[0], -1);
    return true;
  }
  case GICXXCustomAction_GICombiner36:{
    // Match Patterns
    if(![&](){return Helper.matchOperandIsUndef(*State.MIs[0], 1);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithConstant(*State.MIs[0], 0);
    return true;
  }
  case GICXXCustomAction_GICombiner37:{
    // Match Patterns
    if(![&](){return Helper.matchOperandIsUndef(*State.MIs[0], 2);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithUndef(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner38:{
    // Apply Patterns
    Helper.replaceInstWithUndef(*State.MIs[0]->getOperand(0).getParent());
    return true;
  }
  case GICXXCustomAction_GICombiner39:{
    // Match Patterns
    if(![&](){return Helper.matchAnyExplicitUseIsUndef(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithUndef(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner40:{
    // Match Patterns
    if(![&](){return Helper.matchAllExplicitUsesAreUndef(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithUndef(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner41:{
    // Match Patterns
    if(![&](){return Helper.matchUndefShuffleVectorMask(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithUndef(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner42:{
    // Match Patterns
    if(![&](){return Helper.matchUndefStore(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.eraseInst(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner43:{
    // Match Patterns
    if(![&](){return Helper.matchInsertExtractVecEltOutOfBounds(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithUndef(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner44:{
    // Match Patterns
    if(![&](){return Helper.matchSelectSameVal(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithOperand(*State.MIs[0], 2);
    return true;
  }
  case GICXXCustomAction_GICombiner45:{
    Register GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineI2PToP2I(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineI2PToP2I(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner46:{
    Register GIMatchData_info;
    // Match Patterns
    if(![&](){GIMatchData_info = State.MIs[1]->getOperand(1).getReg(); return true;}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineP2IToI2P(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner47:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineAnyExtTrunc(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner48:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchBuildVectorIdentityFold(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner49:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchTruncBuildVectorFold(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner50:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchTruncLshrBuildVectorFold(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner51:{
    // Match Patterns
    if(![&](){return MRI.getType(State.MIs[1]->getOperand(1).getReg()) == MRI.getType(State.MIs[0]->getOperand(0).getReg());}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], State.MIs[1]->getOperand(1).getReg());
    return true;
  }
  case GICXXCustomAction_GICombiner52:{
    MachineInstr* GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtendThroughPhis(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyExtendThroughPhis(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner53:{
    std::tuple<Register, Register> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchSimplifyAddToSub(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applySimplifyAddToSub(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner54:{
    InstructionStepsMatchInfo GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchHoistLogicOpWithSameOpcodeHands(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildInstructionSteps(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner55:{
    std::optional<int64_t> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchShiftsTooBig(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    if (GIMatchData_matchinfo) {
              Helper.replaceInstWithConstant(*State.MIs[0], *GIMatchData_matchinfo);
            } else {
              Helper.replaceInstWithUndef(*State.MIs[0]);
            }
    return true;
  }
  case GICXXCustomAction_GICombiner56:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchReassocPtrAdd(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnNoErase(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner57:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchReassocCommBinOp(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner58:{
    PtrAddChain GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchPtrAddImmedChain(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyPtrAddImmedChain(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner59:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCanonicalizeICmp(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner60:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCanonicalizeFCmp(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner61:{
    int64_t GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchICmpToTrueFalseKnownBits(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithConstant(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner62:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchICmpToLHSKnownBits(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner63:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchRedundantBinOpInEquality(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner64:{
    std::tuple<Register, int64_t> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchAshrShlToSextInreg(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyAshShlToSextInreg(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner65:{
    std::tuple<Register, unsigned> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchSextInRegOfLoad(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applySextInRegOfLoad(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner66:{
    RegisterImmPair GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineShlOfExtend(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineShlOfExtend(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner67:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchNarrowBinopFeedingAnd(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnNoErase(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner68:{
    unsigned GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchConstantSelectCmp(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithOperand(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner69:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchSelectIMinMax(State.MIs[0]->getOperand(0), GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner70:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchSelect(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner71:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchRedundantAnd(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner72:{
    // Match Patterns
    if(![&](){return Helper.matchRedundantSExtInReg(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithOperand(*State.MIs[0], 1);
    return true;
  }
  case GICXXCustomAction_GICombiner73:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchRedundantOr(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner74:{
    // Match Patterns
    if(![&](){return Helper.matchOperandIsKnownToBeAPowerOfTwo(State.MIs[0]->getOperand(2));}()) {
      return false;
    }
    // Apply Patterns
    Helper.applySimplifyURemByPow2(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner75:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineZextTrunc(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner76:{
    // Match Patterns
    if(![&](){unsigned BitWidth = MRI.getType(State.MIs[0]->getOperand(1).getReg()).getScalarSizeInBits();
                return Helper.getValueTracking()->maskedValueIsZero(State.MIs[0]->getOperand(1).getReg(),
                         APInt::getOneBitSet(BitWidth, State.MIs[0]->getOperand(2).getImm() - 1));}()) {
      return false;
    }
    // Apply Patterns
    Helper.getBuilder().setInstrAndDebugLoc(*State.MIs[0]);
              Helper.getBuilder().buildZExtInReg(State.MIs[0]->getOperand(0), State.MIs[0]->getOperand(1), State.MIs[0]->getOperand(2).getImm());
              State.MIs[0]->eraseFromParent();
    return true;
  }
  case GICXXCustomAction_GICombiner77:{
    std::pair<MachineInstr*, LLT> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineTruncOfShift(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineTruncOfShift(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner78:{
    SmallVector<Register> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchNotCmp(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyNotCmp(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner79:{
    MachineInstr * GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchOptBrCondByInvertingCond(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyOptBrCondByInvertingCond(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner80:{
    // Apply Patterns
    Helper.applyCombineConstantFoldFpUnary(*State.MIs[0], State.MIs[1]->getOperand(1).getFPImm());
    return true;
  }
  case GICXXCustomAction_GICombiner81:{
    // Apply Patterns
    Helper.replaceInstWithFConstant(*State.MIs[0]->getOperand(0).getParent(), 0.0);
    return true;
  }
  case GICXXCustomAction_GICombiner82:{
    APInt GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineConstPtrAddToI2P(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineConstPtrAddToI2P(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner83:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchOverlappingAnd(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner84:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchMulOBy2(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnNoErase(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner85:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchMulOBy0(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner86:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchAddEToAddO(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnNoErase(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner87:{
    unsigned GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineFMinMaxNaN(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithOperand(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner88:{
    // Match Patterns
    if(![&](){return Helper.matchFPowIExpansion(*State.MIs[0], State.MIs[1]->getOperand(1).getCImm()->getSExtValue());}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyExpandFPowI(*State.MIs[0], State.MIs[1]->getOperand(1).getCImm()->getSExtValue());
    return true;
  }
  case GICXXCustomAction_GICombiner89:{
    std::pair<Register, Register> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchXorOfAndWithSameReg(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyXorOfAndWithSameReg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner90:{
    // Match Patterns
    if(![&](){return Helper.matchPtrAddZero(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyPtrAddZero(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner91:{
    RegisterImmPair GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchShiftImmedChain(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyShiftImmedChain(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner92:{
    ShiftOfShiftedLogic GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchShiftOfShiftedLogic(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyShiftOfShiftedLogic(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner93:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchLoadOrCombine(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner94:{
    MachineInstr * GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineDivRem(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineDivRem(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner95:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchOrShiftToFunnelShift(*State.MIs[0], false, GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner96:{
    // Match Patterns
    if(![&](){return Helper.matchFunnelShiftToRotate(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyFunnelShiftToRotate(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner97:{
    // Match Patterns
    if(![&](){return Helper.matchConstantLargerBitWidth(*State.MIs[0], 3);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyFunnelShiftConstantModulo(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner98:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCommuteShift(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner99:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchBitfieldExtractFromSExtInReg(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner100:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchBitfieldExtractFromAnd(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner101:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchBitfieldExtractFromShr(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner102:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchBitfieldExtractFromShrAnd(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner103:{
    APInt GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchConstantFoldBinOp(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithConstant(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner104:{
    ConstantFP* GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchConstantFoldFPBinOp(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithFConstant(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner105:{
    ConstantFP* GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchConstantFoldFMA(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithFConstant(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner106:{
    APInt GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchConstantFoldCastOp(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithConstant(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner107:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchConstantFoldUnaryIntOp(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner108:{
    // Match Patterns
    if(![&](){return Helper.matchUMulHToLShr(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyUMulHToLShr(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner109:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchRedundantNegOperands(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnNoErase(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner110:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchAndOrDisjointMask(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnNoErase(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner111:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineFAddFMulToFMadOrFMA(*State.MIs[0],
                                                                  GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner112:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineFAddFpExtFMulToFMadOrFMA(*State.MIs[0],
                                                                       GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner113:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineFAddFMAFMulToFMadOrFMA(*State.MIs[0],
                                                                     GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner114:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineFAddFpExtFMulToFMadOrFMAAggressive(
                                                          *State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner115:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineFSubFMulToFMadOrFMA(*State.MIs[0],
                                                                  GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner116:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineFSubFNegFMulToFMadOrFMA(*State.MIs[0],
                                                                      GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner117:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineFSubFpExtFMulToFMadOrFMA(*State.MIs[0],
                                                                       GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner118:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineFSubFpExtFNegFMulToFMadOrFMA(
                                                    *State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner119:{
    unsigned GIMatchData_select_op_no;
    // Match Patterns
    if(![&](){return Helper.matchFoldBinOpIntoSelect(*State.MIs[0], GIMatchData_select_op_no);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyFoldBinOpIntoSelect(*State.MIs[0], GIMatchData_select_op_no);
    return true;
  }
  case GICXXCustomAction_GICombiner120:{
    // Match Patterns
    if(![&](){return Helper.matchOperandIsKnownToBeAPowerOfTwo(State.MIs[0]->getOperand(2),
                                                              /*OrNegative=*/true);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applySimplifySRemByPow2(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner121:{
    // Match Patterns
    if(![&](){return Helper.matchUDivOrURemByConst(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyUDivOrURemByConst(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner122:{
    // Match Patterns
    if(![&](){return Helper.matchSDivOrSRemByConst(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applySDivOrSRemByConst(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner123:{
    // Match Patterns
    if(![&](){return Helper.matchDivByPow2(*State.MIs[0], /*IsSigned=*/false);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyUDivByPow2(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner124:{
    // Match Patterns
    if(![&](){return Helper.matchDivByPow2(*State.MIs[0], /*IsSigned=*/true);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applySDivByPow2(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner125:{
    SmallVector<MachineInstr *> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchRepeatedFPDivisor(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyRepeatedFPDivisor(GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner126:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchSubAddSameReg(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner127:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchSimplifySelectToMinMax(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner128:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchFsubToFneg(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyFsubToFneg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner129:{
    // Match Patterns
    if(![&](){return Helper.matchCommuteConstantToRHS(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCommuteBinOpOperands(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner130:{
    // Match Patterns
    if(![&](){return Helper.matchCommuteFPConstantToRHS(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCommuteBinOpOperands(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner131:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchAnd(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner132:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchOr(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner133:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchSimplifyNegMinMax(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner134:{
    SmallVector<Register> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineConcatVectors(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineConcatVectors(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner135:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchSextOfTrunc(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner136:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchZextOfTrunc(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner137:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchNonNegZext(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner138:{
    SmallVector<Register> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineShuffleConcat(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineShuffleConcat(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner139:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchShuffleUndefRHS(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner140:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchShuffleDisjointMask(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner141:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchUseVectorTruncate(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyUseVectorTruncate(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner142:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchUnmergeValuesAnyExtBuildVector(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner143:{
    SmallVector<Register> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineUnmergeMergeToPlainValues(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineUnmergeMergeToPlainValues(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner144:{
    Register GIMatchData_src;
    // Match Patterns
    if(![&](){// Check if first source comes from G_UNMERGE_VALUES.
                   Register FirstMergeSrc = getRemainingOperands(*State.MIs[0], 1)[0].getReg();
                   MachineInstr *UnmergeMI = MRI.getVRegDef(FirstMergeSrc);
                   if (!UnmergeMI || UnmergeMI->getOpcode() != TargetOpcode::G_UNMERGE_VALUES)
                     return false;
        
                   // Check counts match.
                   unsigned NumMergeSrcs = getRemainingOperands(*State.MIs[0], 1).size();
                   unsigned NumUnmergeDefs = UnmergeMI->getNumDefs();
                   if (NumMergeSrcs != NumUnmergeDefs)
                     return false;
        
                   // Verify all merge sources match unmerge defs in order.
                   for (unsigned I = 0; I < NumMergeSrcs; ++I) {
                     Register MergeSrc = getRemainingOperands(*State.MIs[0], 1)[I].getReg();
                     Register UnmergeDef = UnmergeMI->getOperand(I).getReg();
        
                     if (MergeSrc != UnmergeDef)
                       return false;
        
                     if (!MRI.hasOneNonDBGUse(MergeSrc))
                       return false;
                   }
        
                   // Check size compatibility.
                   GIMatchData_src = UnmergeMI->getOperand(NumUnmergeDefs).getReg();
                   LLT SrcTy = MRI.getType(GIMatchData_src);
                   LLT DstTy = MRI.getType(State.MIs[0]->getOperand(0).getReg());
                   if (SrcTy.getSizeInBits() != DstTy.getSizeInBits())
                     return false;
        
                   // Check bitcast legality.
                   if (SrcTy != DstTy) {
                     std::array<LLT, 2> Types = {{DstTy, SrcTy}};
                     LegalityQuery Query(TargetOpcode::G_BITCAST, Types);
                     if (!Helper.isLegalOrBeforeLegalizer(Query))
                       return false;
                   }
        
                   return true;}()) {
      return false;
    }
    // Apply Patterns
    LLT SrcTy = MRI.getType(GIMatchData_src);
                   LLT DstTy = MRI.getType(State.MIs[0]->getOperand(0).getReg());
        
                   Helper.getBuilder().setInstrAndDebugLoc(*State.MIs[0]);
        
                   if (SrcTy == DstTy) {
                     Helper.replaceRegWith(MRI, State.MIs[0]->getOperand(0).getReg(), GIMatchData_src);
                   } else {
                     Helper.getBuilder().buildBitcast(State.MIs[0]->getOperand(0).getReg(), GIMatchData_src);
                   }
        
                   State.MIs[0]->eraseFromParent();
    return true;
  }
  case GICXXCustomAction_GICombiner145:{
    SmallVector<APInt, 8> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineUnmergeConstant(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineUnmergeConstant(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner146:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineUnmergeUndef(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner147:{
    // Match Patterns
    if(![&](){return Helper.matchCombineUnmergeWithDeadLanesToTrunc(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineUnmergeWithDeadLanesToTrunc(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner148:{
    // Match Patterns
    if(![&](){return Helper.matchCombineUnmergeZExtToZExt(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineUnmergeZExtToZExt(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner149:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchMergeXAndUndef(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner150:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchMergeXAndZero(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner151:{
    Register GIMatchData_unmergeSrc;
    // Match Patterns
    if(![&](){return Helper.matchCombineBuildUnmerge(*State.MIs[0], MRI, GIMatchData_unmergeSrc);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineBuildUnmerge(*State.MIs[0], MRI, B, GIMatchData_unmergeSrc);
    return true;
  }
  case GICXXCustomAction_GICombiner152:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchAddOverflow(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner153:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchSuboCarryOut(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner154:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchTruncSSatS(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyTruncSSatS(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner155:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchTruncSSatU(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyTruncSSatU(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner156:{
    LshrOfTruncOfLshr GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchLshrOfTruncOfLshr(*State.MIs[0], GIMatchData_matchinfo, *State.MIs[2]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyLshrOfTruncOfLshr(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner157:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCtls(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner158:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchBinopWithNeg(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner159:{
    SmallVector<Register> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineShuffleVector(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineShuffleVector(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner160:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchICmpRedundantTrunc(*State.MIs[0], MRI, Helper.getValueTracking(), GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyICmpRedundantTrunc(*State.MIs[0], MRI, B, Observer, GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner161:{
    std::pair<uint64_t, uint64_t> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchFoldGlobalOffset(*State.MIs[0], MRI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyFoldGlobalOffset(*State.MIs[0], MRI, B, Observer, GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner162:{
    std::tuple<Register, Register, bool> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchExtAddvToDotAddv(*State.MIs[0], MRI, STI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyExtAddvToDotAddv(*State.MIs[0], MRI, B, Observer, STI, GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner163:{
    std::pair<Register, bool> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchExtUaddvToUaddlv(*State.MIs[0], MRI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyExtUaddvToUaddlv(*State.MIs[0], MRI, B, Observer, GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner164:{
    // Match Patterns
    if(![&](){return matchPushAddSubExt(*State.MIs[0], MRI, State.MIs[0]->getOperand(0).getReg(), State.MIs[1]->getOperand(1).getReg(), State.MIs[2]->getOperand(1).getReg());}()) {
      return false;
    }
    // Apply Patterns
    applyPushAddSubExt(*State.MIs[0], MRI, B, State.MIs[1]->getOpcode() == TargetOpcode::G_SEXT, State.MIs[0]->getOperand(0).getReg(), State.MIs[1]->getOperand(1).getReg(), State.MIs[2]->getOperand(1).getReg());
    return true;
  }
  case GICXXCustomAction_GICombiner165:{
    std::pair<Register, Register> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchSimplifyUADDO(*State.MIs[0], MRI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applySimplifyUADDO(*State.MIs[0], MRI, B, Observer, Helper,
                                       GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner166:{
    MemCpyFamilyLoweringInfo GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineMemCpyFamily(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineMemCpyFamily(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner167:{
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
  case GICXXCustomAction_GICombiner168:{
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
const uint8_t *AArch64PreLegalizerCombinerImpl::getMatchTable() const {
  constexpr static uint8_t MatchTable0[] = {
     /*     0 */ GIM_SwitchOpcode, /*MI*/0, /*[*/GIMT_Encode2(20), GIMT_Encode2(321), /*)*//*default:*//*Label 120*/ GIMT_Encode4(10591),
     /*    10 */ /*TargetOpcode::COPY*//*Label 0*/ GIMT_Encode4(1214), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*   150 */ /*TargetOpcode::G_ADD*//*Label 1*/ GIMT_Encode4(1226),
     /*   154 */ /*TargetOpcode::G_SUB*//*Label 2*/ GIMT_Encode4(2017),
     /*   158 */ /*TargetOpcode::G_MUL*//*Label 3*/ GIMT_Encode4(3056),
     /*   162 */ /*TargetOpcode::G_SDIV*//*Label 4*/ GIMT_Encode4(3320),
     /*   166 */ /*TargetOpcode::G_UDIV*//*Label 5*/ GIMT_Encode4(3422),
     /*   170 */ /*TargetOpcode::G_SREM*//*Label 6*/ GIMT_Encode4(3535),
     /*   174 */ /*TargetOpcode::G_UREM*//*Label 7*/ GIMT_Encode4(3631), GIMT_Encode4(0), GIMT_Encode4(0),
     /*   186 */ /*TargetOpcode::G_AND*//*Label 8*/ GIMT_Encode4(3738),
     /*   190 */ /*TargetOpcode::G_OR*//*Label 9*/ GIMT_Encode4(4165),
     /*   194 */ /*TargetOpcode::G_XOR*//*Label 10*/ GIMT_Encode4(4980), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*   226 */ /*TargetOpcode::G_PHI*//*Label 11*/ GIMT_Encode4(5191), GIMT_Encode4(0),
     /*   234 */ /*TargetOpcode::G_GLOBAL_VALUE*//*Label 12*/ GIMT_Encode4(5203), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*   250 */ /*TargetOpcode::G_UNMERGE_VALUES*//*Label 13*/ GIMT_Encode4(5215), GIMT_Encode4(0),
     /*   258 */ /*TargetOpcode::G_MERGE_VALUES*//*Label 14*/ GIMT_Encode4(5282),
     /*   262 */ /*TargetOpcode::G_BUILD_VECTOR*//*Label 15*/ GIMT_Encode4(5359),
     /*   266 */ /*TargetOpcode::G_BUILD_VECTOR_TRUNC*//*Label 16*/ GIMT_Encode4(5424),
     /*   270 */ /*TargetOpcode::G_CONCAT_VECTORS*//*Label 17*/ GIMT_Encode4(5436),
     /*   274 */ /*TargetOpcode::G_PTRTOINT*//*Label 18*/ GIMT_Encode4(5448),
     /*   278 */ /*TargetOpcode::G_INTTOPTR*//*Label 19*/ GIMT_Encode4(5491),
     /*   282 */ /*TargetOpcode::G_BITCAST*//*Label 20*/ GIMT_Encode4(5524),
     /*   286 */ /*TargetOpcode::G_FREEZE*//*Label 21*/ GIMT_Encode4(5599), GIMT_Encode4(0), GIMT_Encode4(0),
     /*   298 */ /*TargetOpcode::G_INTRINSIC_TRUNC*//*Label 22*/ GIMT_Encode4(5663),
     /*   302 */ /*TargetOpcode::G_INTRINSIC_ROUND*//*Label 23*/ GIMT_Encode4(5685), GIMT_Encode4(0), GIMT_Encode4(0),
     /*   314 */ /*TargetOpcode::G_INTRINSIC_ROUNDEVEN*//*Label 24*/ GIMT_Encode4(5707), GIMT_Encode4(0), GIMT_Encode4(0),
     /*   326 */ /*TargetOpcode::G_LOAD*//*Label 25*/ GIMT_Encode4(5729),
     /*   330 */ /*TargetOpcode::G_SEXTLOAD*//*Label 26*/ GIMT_Encode4(5741),
     /*   334 */ /*TargetOpcode::G_ZEXTLOAD*//*Label 27*/ GIMT_Encode4(5753), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*   354 */ /*TargetOpcode::G_STORE*//*Label 28*/ GIMT_Encode4(5765), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*   502 */ /*TargetOpcode::G_ANYEXT*//*Label 29*/ GIMT_Encode4(5777),
     /*   506 */ /*TargetOpcode::G_TRUNC*//*Label 30*/ GIMT_Encode4(5905), GIMT_Encode4(0), GIMT_Encode4(0),
     /*   518 */ /*TargetOpcode::G_TRUNC_USAT_U*//*Label 31*/ GIMT_Encode4(6317), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*   538 */ /*TargetOpcode::G_SEXT*//*Label 32*/ GIMT_Encode4(6350),
     /*   542 */ /*TargetOpcode::G_SEXT_INREG*//*Label 33*/ GIMT_Encode4(6425),
     /*   546 */ /*TargetOpcode::G_ZEXT*//*Label 34*/ GIMT_Encode4(6491),
     /*   550 */ /*TargetOpcode::G_SHL*//*Label 35*/ GIMT_Encode4(6621),
     /*   554 */ /*TargetOpcode::G_LSHR*//*Label 36*/ GIMT_Encode4(6819),
     /*   558 */ /*TargetOpcode::G_ASHR*//*Label 37*/ GIMT_Encode4(7166),
     /*   562 */ /*TargetOpcode::G_FSHL*//*Label 38*/ GIMT_Encode4(7495),
     /*   566 */ /*TargetOpcode::G_FSHR*//*Label 39*/ GIMT_Encode4(7538),
     /*   570 */ /*TargetOpcode::G_ROTR*//*Label 40*/ GIMT_Encode4(7581),
     /*   574 */ /*TargetOpcode::G_ROTL*//*Label 41*/ GIMT_Encode4(7605),
     /*   578 */ /*TargetOpcode::G_ICMP*//*Label 42*/ GIMT_Encode4(7629),
     /*   582 */ /*TargetOpcode::G_FCMP*//*Label 43*/ GIMT_Encode4(7685), GIMT_Encode4(0), GIMT_Encode4(0),
     /*   594 */ /*TargetOpcode::G_SELECT*//*Label 44*/ GIMT_Encode4(7697),
     /*   598 */ /*TargetOpcode::G_UADDO*//*Label 45*/ GIMT_Encode4(7957),
     /*   602 */ /*TargetOpcode::G_UADDE*//*Label 46*/ GIMT_Encode4(7991),
     /*   606 */ /*TargetOpcode::G_USUBO*//*Label 47*/ GIMT_Encode4(8003),
     /*   610 */ /*TargetOpcode::G_USUBE*//*Label 48*/ GIMT_Encode4(8015),
     /*   614 */ /*TargetOpcode::G_SADDO*//*Label 49*/ GIMT_Encode4(8027),
     /*   618 */ /*TargetOpcode::G_SADDE*//*Label 50*/ GIMT_Encode4(8050),
     /*   622 */ /*TargetOpcode::G_SSUBO*//*Label 51*/ GIMT_Encode4(8062),
     /*   626 */ /*TargetOpcode::G_SSUBE*//*Label 52*/ GIMT_Encode4(8074),
     /*   630 */ /*TargetOpcode::G_UMULO*//*Label 53*/ GIMT_Encode4(8086),
     /*   634 */ /*TargetOpcode::G_SMULO*//*Label 54*/ GIMT_Encode4(8120),
     /*   638 */ /*TargetOpcode::G_UMULH*//*Label 55*/ GIMT_Encode4(8154),
     /*   642 */ /*TargetOpcode::G_SMULH*//*Label 56*/ GIMT_Encode4(8177),
     /*   646 */ /*TargetOpcode::G_UADDSAT*//*Label 57*/ GIMT_Encode4(8189),
     /*   650 */ /*TargetOpcode::G_SADDSAT*//*Label 58*/ GIMT_Encode4(8201), GIMT_Encode4(0), GIMT_Encode4(0),
     /*   662 */ /*TargetOpcode::G_USHLSAT*//*Label 59*/ GIMT_Encode4(8213),
     /*   666 */ /*TargetOpcode::G_SSHLSAT*//*Label 60*/ GIMT_Encode4(8236),
     /*   670 */ /*TargetOpcode::G_SMULFIX*//*Label 61*/ GIMT_Encode4(8259),
     /*   674 */ /*TargetOpcode::G_UMULFIX*//*Label 62*/ GIMT_Encode4(8271),
     /*   678 */ /*TargetOpcode::G_SMULFIXSAT*//*Label 63*/ GIMT_Encode4(8283),
     /*   682 */ /*TargetOpcode::G_UMULFIXSAT*//*Label 64*/ GIMT_Encode4(8295), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*   702 */ /*TargetOpcode::G_FADD*//*Label 65*/ GIMT_Encode4(8307),
     /*   706 */ /*TargetOpcode::G_FSUB*//*Label 66*/ GIMT_Encode4(8448),
     /*   710 */ /*TargetOpcode::G_FMUL*//*Label 67*/ GIMT_Encode4(8537),
     /*   714 */ /*TargetOpcode::G_FMA*//*Label 68*/ GIMT_Encode4(8625),
     /*   718 */ /*TargetOpcode::G_FMAD*//*Label 69*/ GIMT_Encode4(8648),
     /*   722 */ /*TargetOpcode::G_FDIV*//*Label 70*/ GIMT_Encode4(8671),
     /*   726 */ /*TargetOpcode::G_FREM*//*Label 71*/ GIMT_Encode4(8716), GIMT_Encode4(0), GIMT_Encode4(0),
     /*   738 */ /*TargetOpcode::G_FPOWI*//*Label 72*/ GIMT_Encode4(8739), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*   758 */ /*TargetOpcode::G_FLOG2*//*Label 73*/ GIMT_Encode4(8761), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*   774 */ /*TargetOpcode::G_FNEG*//*Label 74*/ GIMT_Encode4(8783),
     /*   778 */ /*TargetOpcode::G_FPEXT*//*Label 75*/ GIMT_Encode4(8834),
     /*   782 */ /*TargetOpcode::G_FPTRUNC*//*Label 76*/ GIMT_Encode4(8856),
     /*   786 */ /*TargetOpcode::G_FPTOSI*//*Label 77*/ GIMT_Encode4(8899),
     /*   790 */ /*TargetOpcode::G_FPTOUI*//*Label 78*/ GIMT_Encode4(8921),
     /*   794 */ /*TargetOpcode::G_SITOFP*//*Label 79*/ GIMT_Encode4(8943),
     /*   798 */ /*TargetOpcode::G_UITOFP*//*Label 80*/ GIMT_Encode4(8970), GIMT_Encode4(0), GIMT_Encode4(0),
     /*   810 */ /*TargetOpcode::G_FABS*//*Label 81*/ GIMT_Encode4(8997),
     /*   814 */ /*TargetOpcode::G_FCOPYSIGN*//*Label 82*/ GIMT_Encode4(9076), GIMT_Encode4(0),
     /*   822 */ /*TargetOpcode::G_FCANONICALIZE*//*Label 83*/ GIMT_Encode4(9088),
     /*   826 */ /*TargetOpcode::G_FMINNUM*//*Label 84*/ GIMT_Encode4(9118),
     /*   830 */ /*TargetOpcode::G_FMAXNUM*//*Label 85*/ GIMT_Encode4(9163),
     /*   834 */ /*TargetOpcode::G_FMINNUM_IEEE*//*Label 86*/ GIMT_Encode4(9208),
     /*   838 */ /*TargetOpcode::G_FMAXNUM_IEEE*//*Label 87*/ GIMT_Encode4(9220),
     /*   842 */ /*TargetOpcode::G_FMINIMUM*//*Label 88*/ GIMT_Encode4(9232),
     /*   846 */ /*TargetOpcode::G_FMAXIMUM*//*Label 89*/ GIMT_Encode4(9277),
     /*   850 */ /*TargetOpcode::G_FMINIMUMNUM*//*Label 90*/ GIMT_Encode4(9322),
     /*   854 */ /*TargetOpcode::G_FMAXIMUMNUM*//*Label 91*/ GIMT_Encode4(9334), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*   890 */ /*TargetOpcode::G_PTR_ADD*//*Label 92*/ GIMT_Encode4(9346), GIMT_Encode4(0),
     /*   898 */ /*TargetOpcode::G_SMIN*//*Label 93*/ GIMT_Encode4(9436),
     /*   902 */ /*TargetOpcode::G_SMAX*//*Label 94*/ GIMT_Encode4(9470),
     /*   906 */ /*TargetOpcode::G_UMIN*//*Label 95*/ GIMT_Encode4(9504),
     /*   910 */ /*TargetOpcode::G_UMAX*//*Label 96*/ GIMT_Encode4(9538),
     /*   914 */ /*TargetOpcode::G_ABS*//*Label 97*/ GIMT_Encode4(9572), GIMT_Encode4(0), GIMT_Encode4(0),
     /*   926 */ /*TargetOpcode::G_BR*//*Label 98*/ GIMT_Encode4(9595), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*   946 */ /*TargetOpcode::G_INSERT_VECTOR_ELT*//*Label 99*/ GIMT_Encode4(9607),
     /*   950 */ /*TargetOpcode::G_EXTRACT_VECTOR_ELT*//*Label 100*/ GIMT_Encode4(9737),
     /*   954 */ /*TargetOpcode::G_SHUFFLE_VECTOR*//*Label 101*/ GIMT_Encode4(10114), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*   970 */ /*TargetOpcode::G_CTTZ*//*Label 102*/ GIMT_Encode4(10191),
     /*   974 */ /*TargetOpcode::G_CTTZ_ZERO_POISON*//*Label 103*/ GIMT_Encode4(10203),
     /*   978 */ /*TargetOpcode::G_CTLZ*//*Label 104*/ GIMT_Encode4(10215),
     /*   982 */ /*TargetOpcode::G_CTLZ_ZERO_POISON*//*Label 105*/ GIMT_Encode4(10238), GIMT_Encode4(0),
     /*   990 */ /*TargetOpcode::G_CTPOP*//*Label 106*/ GIMT_Encode4(10261),
     /*   994 */ /*TargetOpcode::G_BSWAP*//*Label 107*/ GIMT_Encode4(10273),
     /*   998 */ /*TargetOpcode::G_BITREVERSE*//*Label 108*/ GIMT_Encode4(10285), GIMT_Encode4(0),
     /*  1006 */ /*TargetOpcode::G_FCEIL*//*Label 109*/ GIMT_Encode4(10385), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  1054 */ /*TargetOpcode::G_FSQRT*//*Label 110*/ GIMT_Encode4(10407),
     /*  1058 */ /*TargetOpcode::G_FFLOOR*//*Label 111*/ GIMT_Encode4(10429),
     /*  1062 */ /*TargetOpcode::G_FRINT*//*Label 112*/ GIMT_Encode4(10451),
     /*  1066 */ /*TargetOpcode::G_FNEARBYINT*//*Label 113*/ GIMT_Encode4(10473), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  1142 */ /*TargetOpcode::G_MEMCPY*//*Label 114*/ GIMT_Encode4(10495),
     /*  1146 */ /*TargetOpcode::G_MEMCPY_INLINE*//*Label 115*/ GIMT_Encode4(10507),
     /*  1150 */ /*TargetOpcode::G_MEMMOVE*//*Label 116*/ GIMT_Encode4(10519),
     /*  1154 */ /*TargetOpcode::G_MEMSET*//*Label 117*/ GIMT_Encode4(10531), GIMT_Encode4(0),
     /*  1162 */ /*TargetOpcode::G_MEMSET_INLINE*//*Label 118*/ GIMT_Encode4(10554), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  1210 */ /*TargetOpcode::G_VECREDUCE_ADD*//*Label 119*/ GIMT_Encode4(10566),
     /*  1214 */ // Label 0: @1214
     /*  1214 */ GIM_Try, /*On fail goto*//*Label 121*/ GIMT_Encode4(1225), // Rule ID 19 //
     /*  1219 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule19Enabled),
     /*  1222 */   // MIs[0] d
     /*  1222 */   // No operand predicates
     /*  1222 */   // MIs[0] s
     /*  1222 */   // No operand predicates
     /*  1222 */   // Combiner Rule #19: copy_prop
     /*  1222 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner5),
     /*  1225 */ // Label 121: @1225
     /*  1225 */ GIM_Reject,
     /*  1226 */ // Label 1: @1226
     /*  1226 */ GIM_Try, /*On fail goto*//*Label 122*/ GIMT_Encode4(1237), // Rule ID 22 //
     /*  1231 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule22Enabled),
     /*  1234 */   // Combiner Rule #22: add_p2i_to_ptradd; wip_match_opcode 'G_ADD'
     /*  1234 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner8),
     /*  1237 */ // Label 122: @1237
     /*  1237 */ GIM_Try, /*On fail goto*//*Label 123*/ GIMT_Encode4(1248), // Rule ID 100 //
     /*  1242 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule84Enabled),
     /*  1245 */   // Combiner Rule #84: propagate_undef_any_op; wip_match_opcode 'G_ADD'
     /*  1245 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner39),
     /*  1248 */ // Label 123: @1248
     /*  1248 */ GIM_Try, /*On fail goto*//*Label 124*/ GIMT_Encode4(1259), // Rule ID 152 //
     /*  1253 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule112Enabled),
     /*  1256 */   // Combiner Rule #112: simplify_add_to_sub; wip_match_opcode 'G_ADD'
     /*  1256 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner53),
     /*  1259 */ // Label 124: @1259
     /*  1259 */ GIM_Try, /*On fail goto*//*Label 125*/ GIMT_Encode4(1270), // Rule ID 256 //
     /*  1264 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule187Enabled),
     /*  1267 */   // Combiner Rule #187: constant_fold_binop; wip_match_opcode 'G_ADD'
     /*  1267 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner103),
     /*  1270 */ // Label 125: @1270
     /*  1270 */ GIM_Try, /*On fail goto*//*Label 126*/ GIMT_Encode4(1281), // Rule ID 316 //
     /*  1275 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule204Enabled),
     /*  1278 */   // Combiner Rule #204: fold_binop_into_select; wip_match_opcode 'G_ADD'
     /*  1278 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
     /*  1281 */ // Label 126: @1281
     /*  1281 */ GIM_Try, /*On fail goto*//*Label 127*/ GIMT_Encode4(1292), // Rule ID 353 //
     /*  1286 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule216Enabled),
     /*  1289 */   // Combiner Rule #216: commute_int_constant_to_rhs; wip_match_opcode 'G_ADD'
     /*  1289 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner129),
     /*  1292 */ // Label 127: @1292
     /*  1292 */ GIM_Try, /*On fail goto*//*Label 128*/ GIMT_Encode4(1380), // Rule ID 421 //
     /*  1297 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule254Enabled),
     /*  1300 */   // MIs[0] dst
     /*  1300 */   GIM_RecordRegType, /*MI*/0, /*Op*/0, /*TempTypeIdx*/255,
     /*  1304 */   // MIs[0] __add_shift_match_0.shl_neg
     /*  1304 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  1308 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SHL),
     /*  1312 */   // MIs[1] __add_shift_match_0.neg_y
     /*  1312 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/1, // MIs[2]
     /*  1316 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_SUB),
     /*  1320 */   // MIs[2] __add_shift_match_0.zero
     /*  1320 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/3, /*MI*/2, /*OpIdx*/1, // MIs[3]
     /*  1324 */   GIM_CheckOpcode, /*MI*/3, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /*  1328 */   // MIs[3] Operand 1
     /*  1328 */   GIM_CheckLiteralInt, /*MI*/3, /*Op*/1, GIMT_Encode8(0),
     /*  1339 */   // MIs[2] y
     /*  1339 */   // No operand predicates
     /*  1339 */   // MIs[1] n
     /*  1339 */   // No operand predicates
     /*  1339 */   // MIs[0] x
     /*  1339 */   // No operand predicates
     /*  1339 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner18),
     /*  1343 */   GIM_CheckIsSafeToFold, /*NumInsns*/3,
     /*  1345 */   GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/255,
     /*  1348 */   // Combiner Rule #254: add_shift @ [__add_shift_match_0[1]]
     /*  1348 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SHL),
     /*  1351 */   GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/GIMT_Encode2(static_cast<uint16_t>(RegState::Define)),
     /*  1356 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/2, // y
     /*  1360 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // n
     /*  1364 */   GIR_BuildMI, /*InsnID*/1, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SUB),
     /*  1368 */   GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/0, /*OpIdx*/0, // dst
     /*  1372 */   GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/0, /*OpIdx*/2, // x
     /*  1376 */   GIR_AddSimpleTempRegister, /*InsnID*/1, /*TempRegID*/0,
     /*  1379 */   GIR_EraseRootFromParent_Done,
     /*  1380 */ // Label 128: @1380
     /*  1380 */ GIM_Try, /*On fail goto*//*Label 129*/ GIMT_Encode4(1468), // Rule ID 420 //
     /*  1385 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule254Enabled),
     /*  1388 */   // MIs[0] dst
     /*  1388 */   GIM_RecordRegType, /*MI*/0, /*Op*/0, /*TempTypeIdx*/255,
     /*  1392 */   // MIs[0] x
     /*  1392 */   // No operand predicates
     /*  1392 */   // MIs[0] __add_shift_match_0.shl_neg
     /*  1392 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
     /*  1396 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SHL),
     /*  1400 */   // MIs[1] __add_shift_match_0.neg_y
     /*  1400 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/1, // MIs[2]
     /*  1404 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_SUB),
     /*  1408 */   // MIs[2] __add_shift_match_0.zero
     /*  1408 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/3, /*MI*/2, /*OpIdx*/1, // MIs[3]
     /*  1412 */   GIM_CheckOpcode, /*MI*/3, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /*  1416 */   // MIs[3] Operand 1
     /*  1416 */   GIM_CheckLiteralInt, /*MI*/3, /*Op*/1, GIMT_Encode8(0),
     /*  1427 */   // MIs[2] y
     /*  1427 */   // No operand predicates
     /*  1427 */   // MIs[1] n
     /*  1427 */   // No operand predicates
     /*  1427 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner17),
     /*  1431 */   GIM_CheckIsSafeToFold, /*NumInsns*/3,
     /*  1433 */   GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/255,
     /*  1436 */   // Combiner Rule #254: add_shift @ [__add_shift_match_0[0]]
     /*  1436 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SHL),
     /*  1439 */   GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/GIMT_Encode2(static_cast<uint16_t>(RegState::Define)),
     /*  1444 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/2, // y
     /*  1448 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // n
     /*  1452 */   GIR_BuildMI, /*InsnID*/1, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SUB),
     /*  1456 */   GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/0, /*OpIdx*/0, // dst
     /*  1460 */   GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/0, /*OpIdx*/1, // x
     /*  1464 */   GIR_AddSimpleTempRegister, /*InsnID*/1, /*TempRegID*/0,
     /*  1467 */   GIR_EraseRootFromParent_Done,
     /*  1468 */ // Label 129: @1468
     /*  1468 */ GIM_Try, /*On fail goto*//*Label 130*/ GIMT_Encode4(1502), // Rule ID 2 //
     /*  1473 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule2Enabled),
     /*  1476 */   // MIs[0] root
     /*  1476 */   // No operand predicates
     /*  1476 */   // MIs[0] sub
     /*  1476 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  1480 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
     /*  1484 */   // MIs[1] Operand 1
     /*  1484 */   GIM_CheckConstantInt8, /*MI*/1, /*Op*/1, 0,
     /*  1488 */   // MIs[1] A
     /*  1488 */   // No operand predicates
     /*  1488 */   // MIs[0] B
     /*  1488 */   // No operand predicates
     /*  1488 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  1490 */   // Combiner Rule #2: ZeroMinusAPlusB
     /*  1490 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SUB),
     /*  1493 */   GIR_RootToRootCopy, /*OpIdx*/0, // root
     /*  1495 */   GIR_RootToRootCopy, /*OpIdx*/2, // B
     /*  1497 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // A
     /*  1501 */   GIR_EraseRootFromParent_Done,
     /*  1502 */ // Label 130: @1502
     /*  1502 */ GIM_Try, /*On fail goto*//*Label 131*/ GIMT_Encode4(1539), // Rule ID 18 //
     /*  1507 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule18Enabled),
     /*  1510 */   // MIs[0] root
     /*  1510 */   // No operand predicates
     /*  1510 */   // MIs[0] sub
     /*  1510 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  1514 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
     /*  1518 */   // MIs[1] A
     /*  1518 */   // No operand predicates
     /*  1518 */   // MIs[1] c1
     /*  1518 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
     /*  1522 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /*  1526 */   // MIs[2] imm1
     /*  1526 */   // No operand predicates
     /*  1526 */   // MIs[0] c2
     /*  1526 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/3, /*MI*/0, /*OpIdx*/2, // MIs[3]
     /*  1530 */   GIM_CheckOpcode, /*MI*/3, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /*  1534 */   // MIs[3] imm2
     /*  1534 */   // No operand predicates
     /*  1534 */   GIM_CheckIsSafeToFold, /*NumInsns*/3,
     /*  1536 */   // Combiner Rule #18: AMinusC1PlusC2
     /*  1536 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner4),
     /*  1539 */ // Label 131: @1539
     /*  1539 */ GIM_Try, /*On fail goto*//*Label 132*/ GIMT_Encode4(1573), // Rule ID 5 //
     /*  1544 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule5Enabled),
     /*  1547 */   // MIs[0] root
     /*  1547 */   // No operand predicates
     /*  1547 */   // MIs[0] sub
     /*  1547 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  1551 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
     /*  1555 */   // MIs[1] B
     /*  1555 */   // No operand predicates
     /*  1555 */   // MIs[1] A
     /*  1555 */   // No operand predicates
     /*  1555 */   // MIs[0] A
     /*  1555 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/2,
     /*  1560 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
     /*  1565 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  1567 */   // Combiner Rule #5: BMinusAPlusA
     /*  1567 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
     /*  1572 */   GIR_EraseRootFromParent_Done,
     /*  1573 */ // Label 132: @1573
     /*  1573 */ GIM_Try, /*On fail goto*//*Label 133*/ GIMT_Encode4(1607), // Rule ID 140 //
     /*  1578 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule101Enabled),
     /*  1581 */   // MIs[0] dst
     /*  1581 */   // No operand predicates
     /*  1581 */   // MIs[0] __add_sub_reg_match_0.tmp
     /*  1581 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  1585 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
     /*  1589 */   // MIs[1] src
     /*  1589 */   // No operand predicates
     /*  1589 */   // MIs[1] __add_sub_reg_match_0.x
     /*  1589 */   // No operand predicates
     /*  1589 */   // MIs[0] __add_sub_reg_match_0.x
     /*  1589 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/2,
     /*  1594 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
     /*  1599 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  1601 */   // Combiner Rule #101: add_sub_reg @ [__add_sub_reg_match_0[1]]
     /*  1601 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
     /*  1606 */   GIR_EraseRootFromParent_Done,
     /*  1607 */ // Label 133: @1607
     /*  1607 */ GIM_Try, /*On fail goto*//*Label 134*/ GIMT_Encode4(1652), // Rule ID 7 //
     /*  1612 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule7Enabled),
     /*  1615 */   // MIs[0] root
     /*  1615 */   // No operand predicates
     /*  1615 */   // MIs[0] sub1
     /*  1615 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  1619 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
     /*  1623 */   // MIs[1] A
     /*  1623 */   // No operand predicates
     /*  1623 */   // MIs[1] B
     /*  1623 */   // No operand predicates
     /*  1623 */   // MIs[0] sub2
     /*  1623 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
     /*  1627 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_SUB),
     /*  1631 */   // MIs[2] B
     /*  1631 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/2, /*OpIdx*/1, /*OtherMI*/1, /*OtherOpIdx*/2,
     /*  1636 */   // MIs[2] C
     /*  1636 */   // No operand predicates
     /*  1636 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /*  1638 */   // Combiner Rule #7: AMinusBPlusBMinusC
     /*  1638 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SUB),
     /*  1641 */   GIR_RootToRootCopy, /*OpIdx*/0, // root
     /*  1643 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // A
     /*  1647 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/2, // C
     /*  1651 */   GIR_EraseRootFromParent_Done,
     /*  1652 */ // Label 134: @1652
     /*  1652 */ GIM_Try, /*On fail goto*//*Label 135*/ GIMT_Encode4(1697), // Rule ID 6 //
     /*  1657 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule6Enabled),
     /*  1660 */   // MIs[0] root
     /*  1660 */   // No operand predicates
     /*  1660 */   // MIs[0] sub1
     /*  1660 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  1664 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
     /*  1668 */   // MIs[1] A
     /*  1668 */   // No operand predicates
     /*  1668 */   // MIs[1] B
     /*  1668 */   // No operand predicates
     /*  1668 */   // MIs[0] sub2
     /*  1668 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
     /*  1672 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_SUB),
     /*  1676 */   // MIs[2] C
     /*  1676 */   // No operand predicates
     /*  1676 */   // MIs[2] A
     /*  1676 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/2, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/1,
     /*  1681 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /*  1683 */   // Combiner Rule #6: AMinusBPlusCMinusA
     /*  1683 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SUB),
     /*  1686 */   GIR_RootToRootCopy, /*OpIdx*/0, // root
     /*  1688 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // C
     /*  1692 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // B
     /*  1696 */   GIR_EraseRootFromParent_Done,
     /*  1697 */ // Label 135: @1697
     /*  1697 */ GIM_Try, /*On fail goto*//*Label 136*/ GIMT_Encode4(1726), // Rule ID 448 //
     /*  1702 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule276Enabled),
     /*  1705 */   // MIs[0] dst
     /*  1705 */   // No operand predicates
     /*  1705 */   // MIs[0] ext1
     /*  1705 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  1709 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SEXT),
     /*  1713 */   // MIs[1] src1
     /*  1713 */   // No operand predicates
     /*  1713 */   // MIs[0] ext2
     /*  1713 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
     /*  1717 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_SEXT),
     /*  1721 */   // MIs[2] src2
     /*  1721 */   // No operand predicates
     /*  1721 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /*  1723 */   // Combiner Rule #276: push_add_through_sext
     /*  1723 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner164),
     /*  1726 */ // Label 136: @1726
     /*  1726 */ GIM_Try, /*On fail goto*//*Label 137*/ GIMT_Encode4(1761), // Rule ID 45 //
     /*  1731 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule43Enabled),
     /*  1734 */   GIM_MIFlags, /*MI*/0, GIMT_Encode4(MachineInstr::NoSWrap),
     /*  1740 */   // MIs[0] root
     /*  1740 */   // No operand predicates
     /*  1740 */   // MIs[0] left
     /*  1740 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  1744 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_VSCALE),
     /*  1748 */   // MIs[1] imm1
     /*  1748 */   // No operand predicates
     /*  1748 */   // MIs[0] right
     /*  1748 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
     /*  1752 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_VSCALE),
     /*  1756 */   // MIs[2] imm2
     /*  1756 */   // No operand predicates
     /*  1756 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /*  1758 */   // Combiner Rule #43: add_of_vscale
     /*  1758 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner15),
     /*  1761 */ // Label 137: @1761
     /*  1761 */ GIM_Try, /*On fail goto*//*Label 138*/ GIMT_Encode4(1790), // Rule ID 445 //
     /*  1766 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule273Enabled),
     /*  1769 */   // MIs[0] dst
     /*  1769 */   // No operand predicates
     /*  1769 */   // MIs[0] ext1
     /*  1769 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  1773 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ZEXT),
     /*  1777 */   // MIs[1] src1
     /*  1777 */   // No operand predicates
     /*  1777 */   // MIs[0] ext2
     /*  1777 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
     /*  1781 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_ZEXT),
     /*  1785 */   // MIs[2] src2
     /*  1785 */   // No operand predicates
     /*  1785 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /*  1787 */   // Combiner Rule #273: push_add_through_zext
     /*  1787 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner164),
     /*  1790 */ // Label 138: @1790
     /*  1790 */ GIM_Try, /*On fail goto*//*Label 139*/ GIMT_Encode4(1824), // Rule ID 3 //
     /*  1795 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule3Enabled),
     /*  1798 */   // MIs[0] root
     /*  1798 */   // No operand predicates
     /*  1798 */   // MIs[0] A
     /*  1798 */   // No operand predicates
     /*  1798 */   // MIs[0] sub
     /*  1798 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
     /*  1802 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
     /*  1806 */   // MIs[1] Operand 1
     /*  1806 */   GIM_CheckConstantInt8, /*MI*/1, /*Op*/1, 0,
     /*  1810 */   // MIs[1] B
     /*  1810 */   // No operand predicates
     /*  1810 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  1812 */   // Combiner Rule #3: APlusZeroMinusB
     /*  1812 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SUB),
     /*  1815 */   GIR_RootToRootCopy, /*OpIdx*/0, // root
     /*  1817 */   GIR_RootToRootCopy, /*OpIdx*/1, // A
     /*  1819 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // B
     /*  1823 */   GIR_EraseRootFromParent_Done,
     /*  1824 */ // Label 139: @1824
     /*  1824 */ GIM_Try, /*On fail goto*//*Label 140*/ GIMT_Encode4(1858), // Rule ID 4 //
     /*  1829 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule4Enabled),
     /*  1832 */   // MIs[0] root
     /*  1832 */   // No operand predicates
     /*  1832 */   // MIs[0] A
     /*  1832 */   // No operand predicates
     /*  1832 */   // MIs[0] sub
     /*  1832 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
     /*  1836 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
     /*  1840 */   // MIs[1] B
     /*  1840 */   // No operand predicates
     /*  1840 */   // MIs[1] A
     /*  1840 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/1, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
     /*  1845 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
     /*  1850 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  1852 */   // Combiner Rule #4: APlusBMinusB
     /*  1852 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
     /*  1857 */   GIR_EraseRootFromParent_Done,
     /*  1858 */ // Label 140: @1858
     /*  1858 */ GIM_Try, /*On fail goto*//*Label 141*/ GIMT_Encode4(1892), // Rule ID 139 //
     /*  1863 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule101Enabled),
     /*  1866 */   // MIs[0] dst
     /*  1866 */   // No operand predicates
     /*  1866 */   // MIs[0] __add_sub_reg_match_0.x
     /*  1866 */   // No operand predicates
     /*  1866 */   // MIs[0] __add_sub_reg_match_0.tmp
     /*  1866 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
     /*  1870 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
     /*  1874 */   // MIs[1] src
     /*  1874 */   // No operand predicates
     /*  1874 */   // MIs[1] __add_sub_reg_match_0.x
     /*  1874 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/1, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
     /*  1879 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
     /*  1884 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  1886 */   // Combiner Rule #101: add_sub_reg @ [__add_sub_reg_match_0[0]]
     /*  1886 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
     /*  1891 */   GIR_EraseRootFromParent_Done,
     /*  1892 */ // Label 141: @1892
     /*  1892 */ GIM_Try, /*On fail goto*//*Label 142*/ GIMT_Encode4(1937), // Rule ID 8 //
     /*  1897 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule8Enabled),
     /*  1900 */   // MIs[0] root
     /*  1900 */   // No operand predicates
     /*  1900 */   // MIs[0] A
     /*  1900 */   // No operand predicates
     /*  1900 */   // MIs[0] sub1
     /*  1900 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
     /*  1904 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
     /*  1908 */   // MIs[1] B
     /*  1908 */   // No operand predicates
     /*  1908 */   // MIs[1] add1
     /*  1908 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
     /*  1912 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_ADD),
     /*  1916 */   // MIs[2] A
     /*  1916 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/2, /*OpIdx*/1, /*OtherMI*/0, /*OtherOpIdx*/1,
     /*  1921 */   // MIs[2] C
     /*  1921 */   // No operand predicates
     /*  1921 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /*  1923 */   // Combiner Rule #8: APlusBMinusAplusC
     /*  1923 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SUB),
     /*  1926 */   GIR_RootToRootCopy, /*OpIdx*/0, // root
     /*  1928 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // B
     /*  1932 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/2, // C
     /*  1936 */   GIR_EraseRootFromParent_Done,
     /*  1937 */ // Label 142: @1937
     /*  1937 */ GIM_Try, /*On fail goto*//*Label 143*/ GIMT_Encode4(1982), // Rule ID 10 //
     /*  1942 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule10Enabled),
     /*  1945 */   // MIs[0] root
     /*  1945 */   // No operand predicates
     /*  1945 */   // MIs[0] A
     /*  1945 */   // No operand predicates
     /*  1945 */   // MIs[0] sub1
     /*  1945 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
     /*  1949 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
     /*  1953 */   // MIs[1] B
     /*  1953 */   // No operand predicates
     /*  1953 */   // MIs[1] add1
     /*  1953 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
     /*  1957 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_ADD),
     /*  1961 */   // MIs[2] C
     /*  1961 */   // No operand predicates
     /*  1961 */   // MIs[2] A
     /*  1961 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/2, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
     /*  1966 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /*  1968 */   // Combiner Rule #10: APlusBMinusCPlusA
     /*  1968 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SUB),
     /*  1971 */   GIR_RootToRootCopy, /*OpIdx*/0, // root
     /*  1973 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // B
     /*  1977 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // C
     /*  1981 */   GIR_EraseRootFromParent_Done,
     /*  1982 */ // Label 143: @1982
     /*  1982 */ GIM_Try, /*On fail goto*//*Label 144*/ GIMT_Encode4(2005), // Rule ID 111 //
     /*  1987 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule90Enabled),
     /*  1990 */   // MIs[0] dst
     /*  1990 */   // No operand predicates
     /*  1990 */   // MIs[0] lhs
     /*  1990 */   // No operand predicates
     /*  1990 */   // MIs[0] Operand 2
     /*  1990 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /*  1994 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  1999 */   // Combiner Rule #90: right_identity_zero @ [__right_identity_zero_match_0[1]]
     /*  1999 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  2004 */   GIR_EraseRootFromParent_Done,
     /*  2005 */ // Label 144: @2005
     /*  2005 */ GIM_Try, /*On fail goto*//*Label 145*/ GIMT_Encode4(2016), // Rule ID 160 //
     /*  2010 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule116Enabled),
     /*  2013 */   // MIs[0] root
     /*  2013 */   // No operand predicates
     /*  2013 */   // MIs[0] src1
     /*  2013 */   // No operand predicates
     /*  2013 */   // MIs[0] src2
     /*  2013 */   // No operand predicates
     /*  2013 */   // Combiner Rule #116: reassoc_comm_binops
     /*  2013 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner57),
     /*  2016 */ // Label 145: @2016
     /*  2016 */ GIM_Reject,
     /*  2017 */ // Label 2: @2017
     /*  2017 */ GIM_Try, /*On fail goto*//*Label 146*/ GIMT_Encode4(2028), // Rule ID 101 //
     /*  2022 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule84Enabled),
     /*  2025 */   // Combiner Rule #84: propagate_undef_any_op; wip_match_opcode 'G_SUB'
     /*  2025 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner39),
     /*  2028 */ // Label 146: @2028
     /*  2028 */ GIM_Try, /*On fail goto*//*Label 147*/ GIMT_Encode4(2039), // Rule ID 264 //
     /*  2033 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule187Enabled),
     /*  2036 */   // Combiner Rule #187: constant_fold_binop; wip_match_opcode 'G_SUB'
     /*  2036 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner103),
     /*  2039 */ // Label 147: @2039
     /*  2039 */ GIM_Try, /*On fail goto*//*Label 148*/ GIMT_Encode4(2050), // Rule ID 317 //
     /*  2044 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule204Enabled),
     /*  2047 */   // Combiner Rule #204: fold_binop_into_select; wip_match_opcode 'G_SUB'
     /*  2047 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
     /*  2050 */ // Label 148: @2050
     /*  2050 */ GIM_Try, /*On fail goto*//*Label 149*/ GIMT_Encode4(2061), // Rule ID 350 //
     /*  2055 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule213Enabled),
     /*  2058 */   // Combiner Rule #213: sub_add_reg; wip_match_opcode 'G_SUB'
     /*  2058 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner126),
     /*  2061 */ // Label 149: @2061
     /*  2061 */ GIM_Try, /*On fail goto*//*Label 150*/ GIMT_Encode4(2072), // Rule ID 390 //
     /*  2066 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule226Enabled),
     /*  2069 */   // Combiner Rule #226: simplify_neg_minmax; wip_match_opcode 'G_SUB'
     /*  2069 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner133),
     /*  2072 */ // Label 150: @2072
     /*  2072 */ GIM_Try, /*On fail goto*//*Label 151*/ GIMT_Encode4(2149), // Rule ID 422 //
     /*  2077 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule255Enabled),
     /*  2080 */   // MIs[0] dst
     /*  2080 */   GIM_RecordRegType, /*MI*/0, /*Op*/0, /*TempTypeIdx*/255,
     /*  2084 */   // MIs[0] sub1
     /*  2084 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  2088 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
     /*  2092 */   // MIs[1] a
     /*  2092 */   // No operand predicates
     /*  2092 */   // MIs[1] b
     /*  2092 */   // No operand predicates
     /*  2092 */   // MIs[0] Operand 2
     /*  2092 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 1,
     /*  2096 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner1),
     /*  2100 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  2102 */   GIR_MakeTempReg, /*TempRegID*/1, /*TypeID*/255,
     /*  2105 */   GIR_BuildConstant, /*TempRegID*/1, /*Val*/GIMT_Encode8(18446744073709551615u),
     /*  2115 */   GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/255,
     /*  2118 */   // Combiner Rule #255: sub_one_from_sub
     /*  2118 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_XOR),
     /*  2121 */   GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/GIMT_Encode2(static_cast<uint16_t>(RegState::Define)),
     /*  2126 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // b
     /*  2130 */   GIR_AddSimpleTempRegister, /*InsnID*/0, /*TempRegID*/1,
     /*  2133 */   GIR_BuildMI, /*InsnID*/1, /*Opcode*/GIMT_Encode2(TargetOpcode::G_ADD),
     /*  2137 */   GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/0, /*OpIdx*/0, // dst
     /*  2141 */   GIR_AddSimpleTempRegister, /*InsnID*/1, /*TempRegID*/0,
     /*  2144 */   GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/1, // a
     /*  2148 */   GIR_EraseRootFromParent_Done,
     /*  2149 */ // Label 151: @2149
     /*  2149 */ GIM_Try, /*On fail goto*//*Label 152*/ GIMT_Encode4(2243), // Rule ID 428 //
     /*  2154 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule259Enabled),
     /*  2157 */   // MIs[0] root
     /*  2157 */   GIM_RecordRegType, /*MI*/0, /*Op*/0, /*TempTypeIdx*/255,
     /*  2161 */   // MIs[0] Operand 1
     /*  2161 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/1, 0,
     /*  2165 */   // MIs[0] max
     /*  2165 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
     /*  2169 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SMAX),
     /*  2173 */   // MIs[1] A
     /*  2173 */   // No operand predicates
     /*  2173 */   // MIs[1] sub
     /*  2173 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
     /*  2177 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_SUB),
     /*  2181 */   // MIs[2] Operand 1
     /*  2181 */   GIM_CheckConstantInt8, /*MI*/2, /*Op*/1, 0,
     /*  2185 */   // MIs[2] A
     /*  2185 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/2, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/1,
     /*  2190 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner19),
     /*  2194 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /*  2196 */   GIR_MakeTempReg, /*TempRegID*/1, /*TypeID*/255,
     /*  2199 */   GIR_BuildConstant, /*TempRegID*/1, /*Val*/GIMT_Encode8(0),
     /*  2209 */   GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/255,
     /*  2212 */   // Combiner Rule #259: SubSmaxSub
     /*  2212 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SUB),
     /*  2215 */   GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/GIMT_Encode2(static_cast<uint16_t>(RegState::Define)),
     /*  2220 */   GIR_AddSimpleTempRegister, /*InsnID*/0, /*TempRegID*/1,
     /*  2223 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // A
     /*  2227 */   GIR_BuildMI, /*InsnID*/1, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SMIN),
     /*  2231 */   GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/0, /*OpIdx*/0, // root
     /*  2235 */   GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/1, // A
     /*  2239 */   GIR_AddSimpleTempRegister, /*InsnID*/1, /*TempRegID*/0,
     /*  2242 */   GIR_EraseRootFromParent_Done,
     /*  2243 */ // Label 152: @2243
     /*  2243 */ GIM_Try, /*On fail goto*//*Label 153*/ GIMT_Encode4(2337), // Rule ID 429 //
     /*  2248 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule260Enabled),
     /*  2251 */   // MIs[0] root
     /*  2251 */   GIM_RecordRegType, /*MI*/0, /*Op*/0, /*TempTypeIdx*/255,
     /*  2255 */   // MIs[0] Operand 1
     /*  2255 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/1, 0,
     /*  2259 */   // MIs[0] max
     /*  2259 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
     /*  2263 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_UMAX),
     /*  2267 */   // MIs[1] A
     /*  2267 */   // No operand predicates
     /*  2267 */   // MIs[1] sub
     /*  2267 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
     /*  2271 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_SUB),
     /*  2275 */   // MIs[2] Operand 1
     /*  2275 */   GIM_CheckConstantInt8, /*MI*/2, /*Op*/1, 0,
     /*  2279 */   // MIs[2] A
     /*  2279 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/2, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/1,
     /*  2284 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner19),
     /*  2288 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /*  2290 */   GIR_MakeTempReg, /*TempRegID*/1, /*TypeID*/255,
     /*  2293 */   GIR_BuildConstant, /*TempRegID*/1, /*Val*/GIMT_Encode8(0),
     /*  2303 */   GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/255,
     /*  2306 */   // Combiner Rule #260: SubUmaxSub
     /*  2306 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SUB),
     /*  2309 */   GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/GIMT_Encode2(static_cast<uint16_t>(RegState::Define)),
     /*  2314 */   GIR_AddSimpleTempRegister, /*InsnID*/0, /*TempRegID*/1,
     /*  2317 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // A
     /*  2321 */   GIR_BuildMI, /*InsnID*/1, /*Opcode*/GIMT_Encode2(TargetOpcode::G_UMIN),
     /*  2325 */   GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/0, /*OpIdx*/0, // root
     /*  2329 */   GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/1, // A
     /*  2333 */   GIR_AddSimpleTempRegister, /*InsnID*/1, /*TempRegID*/0,
     /*  2336 */   GIR_EraseRootFromParent_Done,
     /*  2337 */ // Label 153: @2337
     /*  2337 */ GIM_Try, /*On fail goto*//*Label 154*/ GIMT_Encode4(2377), // Rule ID 426 //
     /*  2342 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule257Enabled),
     /*  2345 */   // MIs[0] root
     /*  2345 */   GIM_RecordRegType, /*MI*/0, /*Op*/0, /*TempTypeIdx*/255,
     /*  2349 */   // MIs[0] Operand 1
     /*  2349 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/1, 255,
     /*  2353 */   // MIs[0] op1
     /*  2353 */   // No operand predicates
     /*  2353 */   GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/255,
     /*  2356 */   GIR_BuildConstant, /*TempRegID*/0, /*Val*/GIMT_Encode8(18446744073709551615u),
     /*  2366 */   // Combiner Rule #257: sub_minus_one
     /*  2366 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_XOR),
     /*  2369 */   GIR_RootToRootCopy, /*OpIdx*/0, // root
     /*  2371 */   GIR_RootToRootCopy, /*OpIdx*/2, // op1
     /*  2373 */   GIR_AddSimpleTempRegister, /*InsnID*/0, /*TempRegID*/0,
     /*  2376 */   GIR_EraseRootFromParent_Done,
     /*  2377 */ // Label 154: @2377
     /*  2377 */ GIM_Try, /*On fail goto*//*Label 155*/ GIMT_Encode4(2477), // Rule ID 427 //
     /*  2382 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule258Enabled),
     /*  2385 */   // MIs[0] d
     /*  2385 */   GIM_RecordRegType, /*MI*/0, /*Op*/0, /*TempTypeIdx*/255,
     /*  2389 */   // MIs[0] a
     /*  2389 */   // No operand predicates
     /*  2389 */   // MIs[0] mul
     /*  2389 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
     /*  2393 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_MUL),
     /*  2397 */   // MIs[1] x
     /*  2397 */   // No operand predicates
     /*  2397 */   // MIs[1] c
     /*  2397 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
     /*  2401 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /*  2405 */   // MIs[2] imm
     /*  2405 */   // No operand predicates
     /*  2405 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner0),
     /*  2409 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /*  2411 */   GIR_MakeTempReg, /*TempRegID*/2, /*TypeID*/255,
     /*  2414 */   GIR_MakeTempReg, /*TempRegID*/1, /*TypeID*/255,
     /*  2417 */   GIR_BuildConstant, /*TempRegID*/1, /*Val*/GIMT_Encode8(0),
     /*  2427 */   GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/255,
     /*  2430 */   // Combiner Rule #258: sub_of_mul_const
     /*  2430 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SUB),
     /*  2433 */   GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/GIMT_Encode2(static_cast<uint16_t>(RegState::Define)),
     /*  2438 */   GIR_AddSimpleTempRegister, /*InsnID*/0, /*TempRegID*/1,
     /*  2441 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // c
     /*  2445 */   GIR_BuildMI, /*InsnID*/1, /*Opcode*/GIMT_Encode2(TargetOpcode::G_MUL),
     /*  2449 */   GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/2, /*TempRegFlags*/GIMT_Encode2(static_cast<uint16_t>(RegState::Define)),
     /*  2454 */   GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/1, // x
     /*  2458 */   GIR_AddSimpleTempRegister, /*InsnID*/1, /*TempRegID*/0,
     /*  2461 */   GIR_BuildMI, /*InsnID*/2, /*Opcode*/GIMT_Encode2(TargetOpcode::G_ADD),
     /*  2465 */   GIR_Copy, /*NewInsnID*/2, /*OldInsnID*/0, /*OpIdx*/0, // d
     /*  2469 */   GIR_Copy, /*NewInsnID*/2, /*OldInsnID*/0, /*OpIdx*/1, // a
     /*  2473 */   GIR_AddSimpleTempRegister, /*InsnID*/2, /*TempRegID*/2,
     /*  2476 */   GIR_EraseRootFromParent_Done,
     /*  2477 */ // Label 155: @2477
     /*  2477 */ GIM_Try, /*On fail goto*//*Label 156*/ GIMT_Encode4(2538), // Rule ID 9 //
     /*  2482 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule9Enabled),
     /*  2485 */   // MIs[0] root
     /*  2485 */   GIM_RecordRegType, /*MI*/0, /*Op*/0, /*TempTypeIdx*/255,
     /*  2489 */   // MIs[0] A
     /*  2489 */   // No operand predicates
     /*  2489 */   // MIs[0] sub1
     /*  2489 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
     /*  2493 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
     /*  2497 */   // MIs[1] B
     /*  2497 */   // No operand predicates
     /*  2497 */   // MIs[1] C
     /*  2497 */   // No operand predicates
     /*  2497 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner0),
     /*  2501 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  2503 */   GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/255,
     /*  2506 */   // Combiner Rule #9: AMinusBMinusC
     /*  2506 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SUB),
     /*  2509 */   GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/GIMT_Encode2(static_cast<uint16_t>(RegState::Define)),
     /*  2514 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // C
     /*  2518 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // B
     /*  2522 */   GIR_BuildMI, /*InsnID*/1, /*Opcode*/GIMT_Encode2(TargetOpcode::G_ADD),
     /*  2526 */   GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/0, /*OpIdx*/0, // root
     /*  2530 */   GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/0, /*OpIdx*/1, // A
     /*  2534 */   GIR_AddSimpleTempRegister, /*InsnID*/1, /*TempRegID*/0,
     /*  2537 */   GIR_EraseRootFromParent_Done,
     /*  2538 */ // Label 156: @2538
     /*  2538 */ GIM_Try, /*On fail goto*//*Label 157*/ GIMT_Encode4(2583), // Rule ID 0 //
     /*  2543 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule0Enabled),
     /*  2546 */   // MIs[0] root
     /*  2546 */   // No operand predicates
     /*  2546 */   // MIs[0] add1
     /*  2546 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  2550 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ADD),
     /*  2554 */   // MIs[1] A
     /*  2554 */   // No operand predicates
     /*  2554 */   // MIs[1] sub1
     /*  2554 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
     /*  2558 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_SUB),
     /*  2562 */   // MIs[2] B
     /*  2562 */   // No operand predicates
     /*  2562 */   // MIs[2] C
     /*  2562 */   // No operand predicates
     /*  2562 */   // MIs[0] B
     /*  2562 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/2, /*OtherOpIdx*/1,
     /*  2567 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /*  2569 */   // Combiner Rule #0: APlusBMinusCMinusB
     /*  2569 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SUB),
     /*  2572 */   GIR_RootToRootCopy, /*OpIdx*/0, // root
     /*  2574 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // A
     /*  2578 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/2, // C
     /*  2582 */   GIR_EraseRootFromParent_Done,
     /*  2583 */ // Label 157: @2583
     /*  2583 */ GIM_Try, /*On fail goto*//*Label 158*/ GIMT_Encode4(2620), // Rule ID 14 //
     /*  2588 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule14Enabled),
     /*  2591 */   // MIs[0] root
     /*  2591 */   // No operand predicates
     /*  2591 */   // MIs[0] add
     /*  2591 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  2595 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ADD),
     /*  2599 */   // MIs[1] A
     /*  2599 */   // No operand predicates
     /*  2599 */   // MIs[1] c1
     /*  2599 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
     /*  2603 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /*  2607 */   // MIs[2] imm1
     /*  2607 */   // No operand predicates
     /*  2607 */   // MIs[0] c2
     /*  2607 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/3, /*MI*/0, /*OpIdx*/2, // MIs[3]
     /*  2611 */   GIM_CheckOpcode, /*MI*/3, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /*  2615 */   // MIs[3] imm2
     /*  2615 */   // No operand predicates
     /*  2615 */   GIM_CheckIsSafeToFold, /*NumInsns*/3,
     /*  2617 */   // Combiner Rule #14: APlusC1MinusC2
     /*  2617 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner0),
     /*  2620 */ // Label 158: @2620
     /*  2620 */ GIM_Try, /*On fail goto*//*Label 159*/ GIMT_Encode4(2657), // Rule ID 17 //
     /*  2625 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule17Enabled),
     /*  2628 */   // MIs[0] root
     /*  2628 */   // No operand predicates
     /*  2628 */   // MIs[0] sub1
     /*  2628 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  2632 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
     /*  2636 */   // MIs[1] c1
     /*  2636 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/1, // MIs[2]
     /*  2640 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /*  2644 */   // MIs[2] imm1
     /*  2644 */   // No operand predicates
     /*  2644 */   // MIs[1] A
     /*  2644 */   // No operand predicates
     /*  2644 */   // MIs[0] c2
     /*  2644 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/3, /*MI*/0, /*OpIdx*/2, // MIs[3]
     /*  2648 */   GIM_CheckOpcode, /*MI*/3, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /*  2652 */   // MIs[3] imm2
     /*  2652 */   // No operand predicates
     /*  2652 */   GIM_CheckIsSafeToFold, /*NumInsns*/3,
     /*  2654 */   // Combiner Rule #17: C1Minus2MinusC2
     /*  2654 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner3),
     /*  2657 */ // Label 159: @2657
     /*  2657 */ GIM_Try, /*On fail goto*//*Label 160*/ GIMT_Encode4(2702), // Rule ID 1 //
     /*  2662 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule1Enabled),
     /*  2665 */   // MIs[0] root
     /*  2665 */   // No operand predicates
     /*  2665 */   // MIs[0] sub2
     /*  2665 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  2669 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
     /*  2673 */   // MIs[1] A
     /*  2673 */   // No operand predicates
     /*  2673 */   // MIs[1] sub1
     /*  2673 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
     /*  2677 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_SUB),
     /*  2681 */   // MIs[2] B
     /*  2681 */   // No operand predicates
     /*  2681 */   // MIs[2] C
     /*  2681 */   // No operand predicates
     /*  2681 */   // MIs[0] C
     /*  2681 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/2, /*OtherOpIdx*/2,
     /*  2686 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /*  2688 */   // Combiner Rule #1: AMinusBMinusCMinusC
     /*  2688 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SUB),
     /*  2691 */   GIR_RootToRootCopy, /*OpIdx*/0, // root
     /*  2693 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // A
     /*  2697 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // B
     /*  2701 */   GIR_EraseRootFromParent_Done,
     /*  2702 */ // Label 160: @2702
     /*  2702 */ GIM_Try, /*On fail goto*//*Label 161*/ GIMT_Encode4(2739), // Rule ID 16 //
     /*  2707 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule16Enabled),
     /*  2710 */   // MIs[0] root
     /*  2710 */   // No operand predicates
     /*  2710 */   // MIs[0] sub1
     /*  2710 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  2714 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
     /*  2718 */   // MIs[1] A
     /*  2718 */   // No operand predicates
     /*  2718 */   // MIs[1] c1
     /*  2718 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
     /*  2722 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /*  2726 */   // MIs[2] imm1
     /*  2726 */   // No operand predicates
     /*  2726 */   // MIs[0] c2
     /*  2726 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/3, /*MI*/0, /*OpIdx*/2, // MIs[3]
     /*  2730 */   GIM_CheckOpcode, /*MI*/3, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /*  2734 */   // MIs[3] imm2
     /*  2734 */   // No operand predicates
     /*  2734 */   GIM_CheckIsSafeToFold, /*NumInsns*/3,
     /*  2736 */   // Combiner Rule #16: AMinusC1MinusC2
     /*  2736 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner2),
     /*  2739 */ // Label 161: @2739
     /*  2739 */ GIM_Try, /*On fail goto*//*Label 162*/ GIMT_Encode4(2768), // Rule ID 447 //
     /*  2744 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule275Enabled),
     /*  2747 */   // MIs[0] dst
     /*  2747 */   // No operand predicates
     /*  2747 */   // MIs[0] ext1
     /*  2747 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  2751 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SEXT),
     /*  2755 */   // MIs[1] src1
     /*  2755 */   // No operand predicates
     /*  2755 */   // MIs[0] ext2
     /*  2755 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
     /*  2759 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_SEXT),
     /*  2763 */   // MIs[2] src2
     /*  2763 */   // No operand predicates
     /*  2763 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /*  2765 */   // Combiner Rule #275: push_sub_through_sext
     /*  2765 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner164),
     /*  2768 */ // Label 162: @2768
     /*  2768 */ GIM_Try, /*On fail goto*//*Label 163*/ GIMT_Encode4(2797), // Rule ID 444 //
     /*  2773 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule272Enabled),
     /*  2776 */   // MIs[0] dst
     /*  2776 */   // No operand predicates
     /*  2776 */   // MIs[0] ext1
     /*  2776 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  2780 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ZEXT),
     /*  2784 */   // MIs[1] src1
     /*  2784 */   // No operand predicates
     /*  2784 */   // MIs[0] ext2
     /*  2784 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
     /*  2788 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_ZEXT),
     /*  2792 */   // MIs[2] src2
     /*  2792 */   // No operand predicates
     /*  2792 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /*  2794 */   // Combiner Rule #272: push_sub_through_zext
     /*  2794 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner164),
     /*  2797 */ // Label 163: @2797
     /*  2797 */ GIM_Try, /*On fail goto*//*Label 164*/ GIMT_Encode4(2840), // Rule ID 170 //
     /*  2802 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule126Enabled),
     /*  2805 */   // MIs[0] dst
     /*  2805 */   // No operand predicates
     /*  2805 */   // MIs[0] Operand 1
     /*  2805 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/1, 0,
     /*  2809 */   // MIs[0] and
     /*  2809 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
     /*  2813 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_AND),
     /*  2817 */   // MIs[1] x
     /*  2817 */   // No operand predicates
     /*  2817 */   // MIs[1] Operand 2
     /*  2817 */   GIM_CheckConstantInt8, /*MI*/1, /*Op*/2, 1,
     /*  2821 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner11),
     /*  2825 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  2827 */   // Combiner Rule #126: neg_and_one_to_sext_inreg
     /*  2827 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SEXT_INREG),
     /*  2830 */   GIR_RootToRootCopy, /*OpIdx*/0, // dst
     /*  2832 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // x
     /*  2836 */   GIR_AddImm8, /*InsnID*/0, /*Imm*/1,
     /*  2839 */   GIR_EraseRootFromParent_Done,
     /*  2840 */ // Label 164: @2840
     /*  2840 */ GIM_Try, /*On fail goto*//*Label 165*/ GIMT_Encode4(2877), // Rule ID 15 //
     /*  2845 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule15Enabled),
     /*  2848 */   // MIs[0] root
     /*  2848 */   // No operand predicates
     /*  2848 */   // MIs[0] c2
     /*  2848 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  2852 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /*  2856 */   // MIs[1] imm2
     /*  2856 */   // No operand predicates
     /*  2856 */   // MIs[0] add
     /*  2856 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
     /*  2860 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_ADD),
     /*  2864 */   // MIs[2] A
     /*  2864 */   // No operand predicates
     /*  2864 */   // MIs[2] c1
     /*  2864 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/3, /*MI*/2, /*OpIdx*/2, // MIs[3]
     /*  2868 */   GIM_CheckOpcode, /*MI*/3, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /*  2872 */   // MIs[3] imm1
     /*  2872 */   // No operand predicates
     /*  2872 */   GIM_CheckIsSafeToFold, /*NumInsns*/3,
     /*  2874 */   // Combiner Rule #15: C2MinusAPlusC1
     /*  2874 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner1),
     /*  2877 */ // Label 165: @2877
     /*  2877 */ GIM_Try, /*On fail goto*//*Label 166*/ GIMT_Encode4(2916), // Rule ID 122 //
     /*  2882 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule92Enabled),
     /*  2885 */   // MIs[0] dst
     /*  2885 */   // No operand predicates
     /*  2885 */   // MIs[0] x
     /*  2885 */   GIM_RecordRegType, /*MI*/0, /*Op*/1, /*TempTypeIdx*/255,
     /*  2889 */   // MIs[0] x
     /*  2889 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
     /*  2894 */   GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/255,
     /*  2897 */   GIR_BuildConstant, /*TempRegID*/0, /*Val*/GIMT_Encode8(0),
     /*  2907 */   // Combiner Rule #92: same_val_zero @ [__same_val_zero_match_0[0]]
     /*  2907 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::COPY),
     /*  2910 */   GIR_RootToRootCopy, /*OpIdx*/0, // dst
     /*  2912 */   GIR_AddSimpleTempRegister, /*InsnID*/0, /*TempRegID*/0,
     /*  2915 */   GIR_EraseRootFromParent_Done,
     /*  2916 */ // Label 166: @2916
     /*  2916 */ GIM_Try, /*On fail goto*//*Label 167*/ GIMT_Encode4(2950), // Rule ID 12 //
     /*  2921 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule12Enabled),
     /*  2924 */   // MIs[0] root
     /*  2924 */   // No operand predicates
     /*  2924 */   // MIs[0] A
     /*  2924 */   // No operand predicates
     /*  2924 */   // MIs[0] add
     /*  2924 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
     /*  2928 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
     /*  2932 */   // MIs[1] A
     /*  2932 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/1, /*OpIdx*/1, /*OtherMI*/0, /*OtherOpIdx*/1,
     /*  2937 */   // MIs[1] B
     /*  2937 */   // No operand predicates
     /*  2937 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/2,
     /*  2942 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  2944 */   // Combiner Rule #12: AMinusBMinusA
     /*  2944 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/2,
     /*  2949 */   GIR_EraseRootFromParent_Done,
     /*  2950 */ // Label 167: @2950
     /*  2950 */ GIM_Try, /*On fail goto*//*Label 168*/ GIMT_Encode4(2984), // Rule ID 11 //
     /*  2955 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule11Enabled),
     /*  2958 */   // MIs[0] root
     /*  2958 */   // No operand predicates
     /*  2958 */   // MIs[0] A
     /*  2958 */   // No operand predicates
     /*  2958 */   // MIs[0] sub1
     /*  2958 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
     /*  2962 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
     /*  2966 */   // MIs[1] Operand 1
     /*  2966 */   GIM_CheckConstantInt8, /*MI*/1, /*Op*/1, 0,
     /*  2970 */   // MIs[1] B
     /*  2970 */   // No operand predicates
     /*  2970 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  2972 */   // Combiner Rule #11: AMinusZeroMinusB
     /*  2972 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_ADD),
     /*  2975 */   GIR_RootToRootCopy, /*OpIdx*/0, // root
     /*  2977 */   GIR_RootToRootCopy, /*OpIdx*/1, // A
     /*  2979 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // B
     /*  2983 */   GIR_EraseRootFromParent_Done,
     /*  2984 */ // Label 168: @2984
     /*  2984 */ GIM_Try, /*On fail goto*//*Label 169*/ GIMT_Encode4(3011), // Rule ID 48 //
     /*  2989 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule46Enabled),
     /*  2992 */   GIM_MIFlags, /*MI*/0, GIMT_Encode4(MachineInstr::NoSWrap),
     /*  2998 */   // MIs[0] root
     /*  2998 */   // No operand predicates
     /*  2998 */   // MIs[0] x
     /*  2998 */   // No operand predicates
     /*  2998 */   // MIs[0] right
     /*  2998 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
     /*  3002 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_VSCALE),
     /*  3006 */   // MIs[1] imm
     /*  3006 */   // No operand predicates
     /*  3006 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  3008 */   // Combiner Rule #46: sub_of_vscale
     /*  3008 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner18),
     /*  3011 */ // Label 169: @3011
     /*  3011 */ GIM_Try, /*On fail goto*//*Label 170*/ GIMT_Encode4(3034), // Rule ID 110 //
     /*  3016 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule90Enabled),
     /*  3019 */   // MIs[0] dst
     /*  3019 */   // No operand predicates
     /*  3019 */   // MIs[0] lhs
     /*  3019 */   // No operand predicates
     /*  3019 */   // MIs[0] Operand 2
     /*  3019 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /*  3023 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  3028 */   // Combiner Rule #90: right_identity_zero @ [__right_identity_zero_match_0[0]]
     /*  3028 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  3033 */   GIR_EraseRootFromParent_Done,
     /*  3034 */ // Label 170: @3034
     /*  3034 */ GIM_Try, /*On fail goto*//*Label 171*/ GIMT_Encode4(3055), // Rule ID 21 //
     /*  3039 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule21Enabled),
     /*  3042 */   // MIs[0] d
     /*  3042 */   // No operand predicates
     /*  3042 */   // MIs[0] op1
     /*  3042 */   // No operand predicates
     /*  3042 */   // MIs[0] c
     /*  3042 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
     /*  3046 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /*  3050 */   // MIs[1] imm
     /*  3050 */   // No operand predicates
     /*  3050 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  3052 */   // Combiner Rule #21: sub_to_add
     /*  3052 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner7),
     /*  3055 */ // Label 171: @3055
     /*  3055 */ GIM_Reject,
     /*  3056 */ // Label 3: @3056
     /*  3056 */ GIM_Try, /*On fail goto*//*Label 172*/ GIMT_Encode4(3067), // Rule ID 84 //
     /*  3061 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule78Enabled),
     /*  3064 */   // Combiner Rule #78: undef_to_int_zero; wip_match_opcode 'G_MUL'
     /*  3064 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner34),
     /*  3067 */ // Label 172: @3067
     /*  3067 */ GIM_Try, /*On fail goto*//*Label 173*/ GIMT_Encode4(3078), // Rule ID 261 //
     /*  3072 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule187Enabled),
     /*  3075 */   // Combiner Rule #187: constant_fold_binop; wip_match_opcode 'G_MUL'
     /*  3075 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner103),
     /*  3078 */ // Label 173: @3078
     /*  3078 */ GIM_Try, /*On fail goto*//*Label 174*/ GIMT_Encode4(3089), // Rule ID 354 //
     /*  3083 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule216Enabled),
     /*  3086 */   // Combiner Rule #216: commute_int_constant_to_rhs; wip_match_opcode 'G_MUL'
     /*  3086 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner129),
     /*  3089 */ // Label 174: @3089
     /*  3089 */ GIM_Try, /*On fail goto*//*Label 175*/ GIMT_Encode4(3129), // Rule ID 23 //
     /*  3094 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule23Enabled),
     /*  3097 */   // MIs[0] dst
     /*  3097 */   GIM_RecordRegType, /*MI*/0, /*Op*/0, /*TempTypeIdx*/255,
     /*  3101 */   // MIs[0] x
     /*  3101 */   // No operand predicates
     /*  3101 */   // MIs[0] Operand 2
     /*  3101 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 255,
     /*  3105 */   GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/255,
     /*  3108 */   GIR_BuildConstant, /*TempRegID*/0, /*Val*/GIMT_Encode8(0),
     /*  3118 */   // Combiner Rule #23: mul_by_neg_one
     /*  3118 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SUB),
     /*  3121 */   GIR_RootToRootCopy, /*OpIdx*/0, // dst
     /*  3123 */   GIR_AddSimpleTempRegister, /*InsnID*/0, /*TempRegID*/0,
     /*  3126 */   GIR_RootToRootCopy, /*OpIdx*/1, // x
     /*  3128 */   GIR_EraseRootFromParent_Done,
     /*  3129 */ // Label 175: @3129
     /*  3129 */ GIM_Try, /*On fail goto*//*Label 176*/ GIMT_Encode4(3158), // Rule ID 449 //
     /*  3134 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule277Enabled),
     /*  3137 */   // MIs[0] dst
     /*  3137 */   // No operand predicates
     /*  3137 */   // MIs[0] ext1
     /*  3137 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  3141 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SEXT),
     /*  3145 */   // MIs[1] src1
     /*  3145 */   // No operand predicates
     /*  3145 */   // MIs[0] ext2
     /*  3145 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
     /*  3149 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_SEXT),
     /*  3153 */   // MIs[2] src2
     /*  3153 */   // No operand predicates
     /*  3153 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /*  3155 */   // Combiner Rule #277: push_mul_through_sext
     /*  3155 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner164),
     /*  3158 */ // Label 176: @3158
     /*  3158 */ GIM_Try, /*On fail goto*//*Label 177*/ GIMT_Encode4(3193), // Rule ID 46 //
     /*  3163 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule44Enabled),
     /*  3166 */   GIM_MIFlags, /*MI*/0, GIMT_Encode4(MachineInstr::NoSWrap),
     /*  3172 */   // MIs[0] root
     /*  3172 */   // No operand predicates
     /*  3172 */   // MIs[0] left
     /*  3172 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  3176 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_VSCALE),
     /*  3180 */   // MIs[1] scale
     /*  3180 */   // No operand predicates
     /*  3180 */   // MIs[0] x
     /*  3180 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
     /*  3184 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /*  3188 */   // MIs[2] imm1
     /*  3188 */   // No operand predicates
     /*  3188 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /*  3190 */   // Combiner Rule #44: mul_of_vscale
     /*  3190 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner16),
     /*  3193 */ // Label 177: @3193
     /*  3193 */ GIM_Try, /*On fail goto*//*Label 178*/ GIMT_Encode4(3222), // Rule ID 446 //
     /*  3198 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule274Enabled),
     /*  3201 */   // MIs[0] dst
     /*  3201 */   // No operand predicates
     /*  3201 */   // MIs[0] ext1
     /*  3201 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  3205 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ZEXT),
     /*  3209 */   // MIs[1] src1
     /*  3209 */   // No operand predicates
     /*  3209 */   // MIs[0] ext2
     /*  3209 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
     /*  3213 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_ZEXT),
     /*  3217 */   // MIs[2] src2
     /*  3217 */   // No operand predicates
     /*  3217 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /*  3219 */   // Combiner Rule #274: push_mul_through_zext
     /*  3219 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner164),
     /*  3222 */ // Label 178: @3222
     /*  3222 */ GIM_Try, /*On fail goto*//*Label 179*/ GIMT_Encode4(3262), // Rule ID 131 //
     /*  3227 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule93Enabled),
     /*  3230 */   // MIs[0] dst
     /*  3230 */   // No operand predicates
     /*  3230 */   // MIs[0] zero
     /*  3230 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  3234 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /*  3238 */   // MIs[1] Operand 1
     /*  3238 */   GIM_CheckLiteralInt, /*MI*/1, /*Op*/1, GIMT_Encode8(0),
     /*  3249 */   // MIs[0] rhs
     /*  3249 */   // No operand predicates
     /*  3249 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  3254 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  3256 */   // Combiner Rule #93: binop_left_to_zero @ [__binop_left_to_zero_match_0[7]]
     /*  3256 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  3261 */   GIR_EraseRootFromParent_Done,
     /*  3262 */ // Label 179: @3262
     /*  3262 */ GIM_Try, /*On fail goto*//*Label 180*/ GIMT_Encode4(3285), // Rule ID 132 //
     /*  3267 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule94Enabled),
     /*  3270 */   // MIs[0] dst
     /*  3270 */   // No operand predicates
     /*  3270 */   // MIs[0] lhs
     /*  3270 */   // No operand predicates
     /*  3270 */   // MIs[0] zero
     /*  3270 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /*  3274 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/2,
     /*  3279 */   // Combiner Rule #94: binop_right_to_zero
     /*  3279 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/2,
     /*  3284 */   GIR_EraseRootFromParent_Done,
     /*  3285 */ // Label 180: @3285
     /*  3285 */ GIM_Try, /*On fail goto*//*Label 181*/ GIMT_Encode4(3308), // Rule ID 137 //
     /*  3290 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule99Enabled),
     /*  3293 */   // MIs[0] dst
     /*  3293 */   // No operand predicates
     /*  3293 */   // MIs[0] x
     /*  3293 */   // No operand predicates
     /*  3293 */   // MIs[0] Operand 2
     /*  3293 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 1,
     /*  3297 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  3302 */   // Combiner Rule #99: right_identity_one_int
     /*  3302 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  3307 */   GIR_EraseRootFromParent_Done,
     /*  3308 */ // Label 181: @3308
     /*  3308 */ GIM_Try, /*On fail goto*//*Label 182*/ GIMT_Encode4(3319), // Rule ID 20 //
     /*  3313 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule20Enabled),
     /*  3316 */   // MIs[0] d
     /*  3316 */   // No operand predicates
     /*  3316 */   // MIs[0] op1
     /*  3316 */   // No operand predicates
     /*  3316 */   // MIs[0] op2
     /*  3316 */   // No operand predicates
     /*  3316 */   // Combiner Rule #20: mul_to_shl
     /*  3316 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner6),
     /*  3319 */ // Label 182: @3319
     /*  3319 */ GIM_Reject,
     /*  3320 */ // Label 4: @3320
     /*  3320 */ GIM_Try, /*On fail goto*//*Label 183*/ GIMT_Encode4(3331), // Rule ID 232 //
     /*  3325 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule172Enabled),
     /*  3328 */   // Combiner Rule #172: div_rem_to_divrem; wip_match_opcode 'G_SDIV'
     /*  3328 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner94),
     /*  3331 */ // Label 183: @3331
     /*  3331 */ GIM_Try, /*On fail goto*//*Label 184*/ GIMT_Encode4(3342), // Rule ID 267 //
     /*  3336 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule187Enabled),
     /*  3339 */   // Combiner Rule #187: constant_fold_binop; wip_match_opcode 'G_SDIV'
     /*  3339 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner103),
     /*  3342 */ // Label 184: @3342
     /*  3342 */ GIM_Try, /*On fail goto*//*Label 185*/ GIMT_Encode4(3353), // Rule ID 322 //
     /*  3347 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule204Enabled),
     /*  3350 */   // Combiner Rule #204: fold_binop_into_select; wip_match_opcode 'G_SDIV'
     /*  3350 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
     /*  3353 */ // Label 185: @3353
     /*  3353 */ GIM_Try, /*On fail goto*//*Label 186*/ GIMT_Encode4(3393), // Rule ID 127 //
     /*  3358 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule93Enabled),
     /*  3361 */   // MIs[0] dst
     /*  3361 */   // No operand predicates
     /*  3361 */   // MIs[0] zero
     /*  3361 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  3365 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /*  3369 */   // MIs[1] Operand 1
     /*  3369 */   GIM_CheckLiteralInt, /*MI*/1, /*Op*/1, GIMT_Encode8(0),
     /*  3380 */   // MIs[0] rhs
     /*  3380 */   // No operand predicates
     /*  3380 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  3385 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  3387 */   // Combiner Rule #93: binop_left_to_zero @ [__binop_left_to_zero_match_0[3]]
     /*  3387 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  3392 */   GIR_EraseRootFromParent_Done,
     /*  3393 */ // Label 186: @3393
     /*  3393 */ GIM_Try, /*On fail goto*//*Label 187*/ GIMT_Encode4(3410), // Rule ID 346 //
     /*  3398 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule209Enabled),
     /*  3401 */   GIM_MIFlagsNot, /*MI*/0, GIMT_Encode4(MachineInstr::IsExact),
     /*  3407 */   // MIs[0] dst
     /*  3407 */   // No operand predicates
     /*  3407 */   // MIs[0] x
     /*  3407 */   // No operand predicates
     /*  3407 */   // MIs[0] y
     /*  3407 */   // No operand predicates
     /*  3407 */   // Combiner Rule #209: sdiv_by_pow2
     /*  3407 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner124),
     /*  3410 */ // Label 187: @3410
     /*  3410 */ GIM_Try, /*On fail goto*//*Label 188*/ GIMT_Encode4(3421), // Rule ID 348 //
     /*  3415 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule211Enabled),
     /*  3418 */   // MIs[0] dst
     /*  3418 */   // No operand predicates
     /*  3418 */   // MIs[0] x
     /*  3418 */   // No operand predicates
     /*  3418 */   // MIs[0] y
     /*  3418 */   // No operand predicates
     /*  3418 */   // Combiner Rule #211: sdiv_by_const
     /*  3418 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner122),
     /*  3421 */ // Label 188: @3421
     /*  3421 */ GIM_Reject,
     /*  3422 */ // Label 5: @3422
     /*  3422 */ GIM_Try, /*On fail goto*//*Label 189*/ GIMT_Encode4(3433), // Rule ID 87 //
     /*  3427 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule80Enabled),
     /*  3430 */   // Combiner Rule #80: binop_left_undef_to_zero; wip_match_opcode 'G_UDIV'
     /*  3430 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner36),
     /*  3433 */ // Label 189: @3433
     /*  3433 */ GIM_Try, /*On fail goto*//*Label 190*/ GIMT_Encode4(3444), // Rule ID 233 //
     /*  3438 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule172Enabled),
     /*  3441 */   // Combiner Rule #172: div_rem_to_divrem; wip_match_opcode 'G_UDIV'
     /*  3441 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner94),
     /*  3444 */ // Label 190: @3444
     /*  3444 */ GIM_Try, /*On fail goto*//*Label 191*/ GIMT_Encode4(3455), // Rule ID 266 //
     /*  3449 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule187Enabled),
     /*  3452 */   // Combiner Rule #187: constant_fold_binop; wip_match_opcode 'G_UDIV'
     /*  3452 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner103),
     /*  3455 */ // Label 191: @3455
     /*  3455 */ GIM_Try, /*On fail goto*//*Label 192*/ GIMT_Encode4(3466), // Rule ID 324 //
     /*  3460 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule204Enabled),
     /*  3463 */   // Combiner Rule #204: fold_binop_into_select; wip_match_opcode 'G_UDIV'
     /*  3463 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
     /*  3466 */ // Label 192: @3466
     /*  3466 */ GIM_Try, /*On fail goto*//*Label 193*/ GIMT_Encode4(3506), // Rule ID 128 //
     /*  3471 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule93Enabled),
     /*  3474 */   // MIs[0] dst
     /*  3474 */   // No operand predicates
     /*  3474 */   // MIs[0] zero
     /*  3474 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  3478 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /*  3482 */   // MIs[1] Operand 1
     /*  3482 */   GIM_CheckLiteralInt, /*MI*/1, /*Op*/1, GIMT_Encode8(0),
     /*  3493 */   // MIs[0] rhs
     /*  3493 */   // No operand predicates
     /*  3493 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  3498 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  3500 */   // Combiner Rule #93: binop_left_to_zero @ [__binop_left_to_zero_match_0[4]]
     /*  3500 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  3505 */   GIR_EraseRootFromParent_Done,
     /*  3506 */ // Label 193: @3506
     /*  3506 */ GIM_Try, /*On fail goto*//*Label 194*/ GIMT_Encode4(3523), // Rule ID 345 //
     /*  3511 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule208Enabled),
     /*  3514 */   GIM_MIFlagsNot, /*MI*/0, GIMT_Encode4(MachineInstr::IsExact),
     /*  3520 */   // MIs[0] dst
     /*  3520 */   // No operand predicates
     /*  3520 */   // MIs[0] x
     /*  3520 */   // No operand predicates
     /*  3520 */   // MIs[0] y
     /*  3520 */   // No operand predicates
     /*  3520 */   // Combiner Rule #208: udiv_by_pow2
     /*  3520 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner123),
     /*  3523 */ // Label 194: @3523
     /*  3523 */ GIM_Try, /*On fail goto*//*Label 195*/ GIMT_Encode4(3534), // Rule ID 347 //
     /*  3528 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule210Enabled),
     /*  3531 */   // MIs[0] dst
     /*  3531 */   // No operand predicates
     /*  3531 */   // MIs[0] x
     /*  3531 */   // No operand predicates
     /*  3531 */   // MIs[0] y
     /*  3531 */   // No operand predicates
     /*  3531 */   // Combiner Rule #210: udiv_by_const
     /*  3531 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner121),
     /*  3534 */ // Label 195: @3534
     /*  3534 */ GIM_Reject,
     /*  3535 */ // Label 6: @3535
     /*  3535 */ GIM_Try, /*On fail goto*//*Label 196*/ GIMT_Encode4(3546), // Rule ID 234 //
     /*  3540 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule172Enabled),
     /*  3543 */   // Combiner Rule #172: div_rem_to_divrem; wip_match_opcode 'G_SREM'
     /*  3543 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner94),
     /*  3546 */ // Label 196: @3546
     /*  3546 */ GIM_Try, /*On fail goto*//*Label 197*/ GIMT_Encode4(3557), // Rule ID 269 //
     /*  3551 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule187Enabled),
     /*  3554 */   // Combiner Rule #187: constant_fold_binop; wip_match_opcode 'G_SREM'
     /*  3554 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner103),
     /*  3557 */ // Label 197: @3557
     /*  3557 */ GIM_Try, /*On fail goto*//*Label 198*/ GIMT_Encode4(3568), // Rule ID 323 //
     /*  3562 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule204Enabled),
     /*  3565 */   // Combiner Rule #204: fold_binop_into_select; wip_match_opcode 'G_SREM'
     /*  3565 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
     /*  3568 */ // Label 198: @3568
     /*  3568 */ GIM_Try, /*On fail goto*//*Label 199*/ GIMT_Encode4(3608), // Rule ID 129 //
     /*  3573 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule93Enabled),
     /*  3576 */   // MIs[0] dst
     /*  3576 */   // No operand predicates
     /*  3576 */   // MIs[0] zero
     /*  3576 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  3580 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /*  3584 */   // MIs[1] Operand 1
     /*  3584 */   GIM_CheckLiteralInt, /*MI*/1, /*Op*/1, GIMT_Encode8(0),
     /*  3595 */   // MIs[0] rhs
     /*  3595 */   // No operand predicates
     /*  3595 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  3600 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  3602 */   // Combiner Rule #93: binop_left_to_zero @ [__binop_left_to_zero_match_0[5]]
     /*  3602 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  3607 */   GIR_EraseRootFromParent_Done,
     /*  3608 */ // Label 199: @3608
     /*  3608 */ GIM_Try, /*On fail goto*//*Label 200*/ GIMT_Encode4(3619), // Rule ID 342 //
     /*  3613 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule205Enabled),
     /*  3616 */   // MIs[0] dst
     /*  3616 */   // No operand predicates
     /*  3616 */   // MIs[0] x
     /*  3616 */   // No operand predicates
     /*  3616 */   // MIs[0] y
     /*  3616 */   // No operand predicates
     /*  3616 */   // Combiner Rule #205: srem_pow2_to_mask
     /*  3616 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner120),
     /*  3619 */ // Label 200: @3619
     /*  3619 */ GIM_Try, /*On fail goto*//*Label 201*/ GIMT_Encode4(3630), // Rule ID 344 //
     /*  3624 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule207Enabled),
     /*  3627 */   // MIs[0] dst
     /*  3627 */   // No operand predicates
     /*  3627 */   // MIs[0] x
     /*  3627 */   // No operand predicates
     /*  3627 */   // MIs[0] y
     /*  3627 */   // No operand predicates
     /*  3627 */   // Combiner Rule #207: srem_by_const
     /*  3627 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner122),
     /*  3630 */ // Label 201: @3630
     /*  3630 */ GIM_Reject,
     /*  3631 */ // Label 7: @3631
     /*  3631 */ GIM_Try, /*On fail goto*//*Label 202*/ GIMT_Encode4(3642), // Rule ID 88 //
     /*  3636 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule80Enabled),
     /*  3639 */   // Combiner Rule #80: binop_left_undef_to_zero; wip_match_opcode 'G_UREM'
     /*  3639 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner36),
     /*  3642 */ // Label 202: @3642
     /*  3642 */ GIM_Try, /*On fail goto*//*Label 203*/ GIMT_Encode4(3653), // Rule ID 235 //
     /*  3647 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule172Enabled),
     /*  3650 */   // Combiner Rule #172: div_rem_to_divrem; wip_match_opcode 'G_UREM'
     /*  3650 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner94),
     /*  3653 */ // Label 203: @3653
     /*  3653 */ GIM_Try, /*On fail goto*//*Label 204*/ GIMT_Encode4(3664), // Rule ID 268 //
     /*  3658 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule187Enabled),
     /*  3661 */   // Combiner Rule #187: constant_fold_binop; wip_match_opcode 'G_UREM'
     /*  3661 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner103),
     /*  3664 */ // Label 204: @3664
     /*  3664 */ GIM_Try, /*On fail goto*//*Label 205*/ GIMT_Encode4(3675), // Rule ID 325 //
     /*  3669 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule204Enabled),
     /*  3672 */   // Combiner Rule #204: fold_binop_into_select; wip_match_opcode 'G_UREM'
     /*  3672 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
     /*  3675 */ // Label 205: @3675
     /*  3675 */ GIM_Try, /*On fail goto*//*Label 206*/ GIMT_Encode4(3715), // Rule ID 130 //
     /*  3680 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule93Enabled),
     /*  3683 */   // MIs[0] dst
     /*  3683 */   // No operand predicates
     /*  3683 */   // MIs[0] zero
     /*  3683 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  3687 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /*  3691 */   // MIs[1] Operand 1
     /*  3691 */   GIM_CheckLiteralInt, /*MI*/1, /*Op*/1, GIMT_Encode8(0),
     /*  3702 */   // MIs[0] rhs
     /*  3702 */   // No operand predicates
     /*  3702 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  3707 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  3709 */   // Combiner Rule #93: binop_left_to_zero @ [__binop_left_to_zero_match_0[6]]
     /*  3709 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  3714 */   GIR_EraseRootFromParent_Done,
     /*  3715 */ // Label 206: @3715
     /*  3715 */ GIM_Try, /*On fail goto*//*Label 207*/ GIMT_Encode4(3726), // Rule ID 183 //
     /*  3720 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule139Enabled),
     /*  3723 */   // MIs[0] dst
     /*  3723 */   // No operand predicates
     /*  3723 */   // MIs[0] x
     /*  3723 */   // No operand predicates
     /*  3723 */   // MIs[0] y
     /*  3723 */   // No operand predicates
     /*  3723 */   // Combiner Rule #139: urem_pow2_to_mask
     /*  3723 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner74),
     /*  3726 */ // Label 207: @3726
     /*  3726 */ GIM_Try, /*On fail goto*//*Label 208*/ GIMT_Encode4(3737), // Rule ID 343 //
     /*  3731 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule206Enabled),
     /*  3734 */   // MIs[0] dst
     /*  3734 */   // No operand predicates
     /*  3734 */   // MIs[0] x
     /*  3734 */   // No operand predicates
     /*  3734 */   // MIs[0] y
     /*  3734 */   // No operand predicates
     /*  3734 */   // Combiner Rule #206: urem_by_const
     /*  3734 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner121),
     /*  3737 */ // Label 208: @3737
     /*  3737 */ GIM_Reject,
     /*  3738 */ // Label 8: @3738
     /*  3738 */ GIM_Try, /*On fail goto*//*Label 209*/ GIMT_Encode4(3749), // Rule ID 79 //
     /*  3743 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule75Enabled),
     /*  3746 */   // Combiner Rule #75: load_and_mask; wip_match_opcode 'G_AND'
     /*  3746 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner31),
     /*  3749 */ // Label 209: @3749
     /*  3749 */ GIM_Try, /*On fail goto*//*Label 210*/ GIMT_Encode4(3760), // Rule ID 83 //
     /*  3754 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule78Enabled),
     /*  3757 */   // Combiner Rule #78: undef_to_int_zero; wip_match_opcode 'G_AND'
     /*  3757 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner34),
     /*  3760 */ // Label 210: @3760
     /*  3760 */ GIM_Try, /*On fail goto*//*Label 211*/ GIMT_Encode4(3771), // Rule ID 153 //
     /*  3765 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule113Enabled),
     /*  3768 */   // Combiner Rule #113: hoist_logic_op_with_same_opcode_hands; wip_match_opcode 'G_AND'
     /*  3768 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner54),
     /*  3771 */ // Label 211: @3771
     /*  3771 */ GIM_Try, /*On fail goto*//*Label 212*/ GIMT_Encode4(3782), // Rule ID 173 //
     /*  3776 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule129Enabled),
     /*  3779 */   // Combiner Rule #129: narrow_binop_feeding_and; wip_match_opcode 'G_AND'
     /*  3779 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner67),
     /*  3782 */ // Label 212: @3782
     /*  3782 */ GIM_Try, /*On fail goto*//*Label 213*/ GIMT_Encode4(3793), // Rule ID 180 //
     /*  3787 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule136Enabled),
     /*  3790 */   // Combiner Rule #136: redundant_and; wip_match_opcode 'G_AND'
     /*  3790 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner71),
     /*  3793 */ // Label 213: @3793
     /*  3793 */ GIM_Try, /*On fail goto*//*Label 214*/ GIMT_Encode4(3804), // Rule ID 205 //
     /*  3798 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule161Enabled),
     /*  3801 */   // Combiner Rule #161: overlapping_and; wip_match_opcode 'G_AND'
     /*  3801 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner83),
     /*  3804 */ // Label 214: @3804
     /*  3804 */ GIM_Try, /*On fail goto*//*Label 215*/ GIMT_Encode4(3815), // Rule ID 258 //
     /*  3809 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule187Enabled),
     /*  3812 */   // Combiner Rule #187: constant_fold_binop; wip_match_opcode 'G_AND'
     /*  3812 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner103),
     /*  3815 */ // Label 215: @3815
     /*  3815 */ GIM_Try, /*On fail goto*//*Label 216*/ GIMT_Encode4(3826), // Rule ID 307 //
     /*  3820 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule195Enabled),
     /*  3823 */   // Combiner Rule #195: and_or_disjoint_mask; wip_match_opcode 'G_AND'
     /*  3823 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner110),
     /*  3826 */ // Label 216: @3826
     /*  3826 */ GIM_Try, /*On fail goto*//*Label 217*/ GIMT_Encode4(3837), // Rule ID 319 //
     /*  3831 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule204Enabled),
     /*  3834 */   // Combiner Rule #204: fold_binop_into_select; wip_match_opcode 'G_AND'
     /*  3834 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
     /*  3837 */ // Label 217: @3837
     /*  3837 */ GIM_Try, /*On fail goto*//*Label 218*/ GIMT_Encode4(3848), // Rule ID 355 //
     /*  3842 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule216Enabled),
     /*  3845 */   // Combiner Rule #216: commute_int_constant_to_rhs; wip_match_opcode 'G_AND'
     /*  3845 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner129),
     /*  3848 */ // Label 218: @3848
     /*  3848 */ GIM_Try, /*On fail goto*//*Label 219*/ GIMT_Encode4(3859), // Rule ID 382 //
     /*  3853 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule218Enabled),
     /*  3856 */   // Combiner Rule #218: match_ands; wip_match_opcode 'G_AND'
     /*  3856 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner131),
     /*  3859 */ // Label 219: @3859
     /*  3859 */ GIM_Try, /*On fail goto*//*Label 220*/ GIMT_Encode4(3870), // Rule ID 423 //
     /*  3864 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule256Enabled),
     /*  3867 */   // Combiner Rule #256: binop_with_neg; wip_match_opcode 'G_AND'
     /*  3867 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner158),
     /*  3870 */ // Label 220: @3870
     /*  3870 */ GIM_Try, /*On fail goto*//*Label 221*/ GIMT_Encode4(3956), // Rule ID 387 //
     /*  3875 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule223Enabled),
     /*  3878 */   // MIs[0] root
     /*  3878 */   GIM_RecordRegType, /*MI*/0, /*Op*/0, /*TempTypeIdx*/255,
     /*  3882 */   // MIs[0] or
     /*  3882 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  3886 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_OR),
     /*  3890 */   // MIs[1] x
     /*  3890 */   // No operand predicates
     /*  3890 */   // MIs[1] y
     /*  3890 */   // No operand predicates
     /*  3890 */   // MIs[0] not
     /*  3890 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
     /*  3894 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_XOR),
     /*  3898 */   // MIs[2] y
     /*  3898 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/2, /*OpIdx*/1, /*OtherMI*/1, /*OtherOpIdx*/2,
     /*  3903 */   // MIs[2] Operand 2
     /*  3903 */   GIM_CheckConstantInt8, /*MI*/2, /*Op*/2, 255,
     /*  3907 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /*  3909 */   GIR_MakeTempReg, /*TempRegID*/1, /*TypeID*/255,
     /*  3912 */   GIR_BuildConstant, /*TempRegID*/1, /*Val*/GIMT_Encode8(18446744073709551615u),
     /*  3922 */   GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/255,
     /*  3925 */   // Combiner Rule #223: and_xor_or_to_xor_and
     /*  3925 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_XOR),
     /*  3928 */   GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/GIMT_Encode2(static_cast<uint16_t>(RegState::Define)),
     /*  3933 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // y
     /*  3937 */   GIR_AddSimpleTempRegister, /*InsnID*/0, /*TempRegID*/1,
     /*  3940 */   GIR_BuildMI, /*InsnID*/1, /*Opcode*/GIMT_Encode2(TargetOpcode::G_AND),
     /*  3944 */   GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/0, /*OpIdx*/0, // root
     /*  3948 */   GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/1, // x
     /*  3952 */   GIR_AddSimpleTempRegister, /*InsnID*/1, /*TempRegID*/0,
     /*  3955 */   GIR_EraseRootFromParent_Done,
     /*  3956 */ // Label 221: @3956
     /*  3956 */ GIM_Try, /*On fail goto*//*Label 222*/ GIMT_Encode4(4054), // Rule ID 166 //
     /*  3961 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule122Enabled),
     /*  3964 */   // MIs[0] root
     /*  3964 */   // No operand predicates
     /*  3964 */   // MIs[0] d1
     /*  3964 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  3968 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ICMP),
     /*  3972 */   // MIs[1] p
     /*  3972 */   // No operand predicates
     /*  3972 */   // MIs[1] s1
     /*  3972 */   GIM_RecordRegType, /*MI*/1, /*Op*/2, /*TempTypeIdx*/255,
     /*  3976 */   // MIs[1] Operand 3
     /*  3976 */   GIM_CheckConstantInt8, /*MI*/1, /*Op*/3, 0,
     /*  3980 */   // MIs[0] d2
     /*  3980 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
     /*  3984 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_ICMP),
     /*  3988 */   // MIs[2] p
     /*  3988 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/2, /*OpIdx*/1, /*OtherMI*/1, /*OtherOpIdx*/1,
     /*  3993 */   // MIs[2] s2
     /*  3993 */   // No operand predicates
     /*  3993 */   // MIs[2] Operand 3
     /*  3993 */   GIM_CheckConstantInt8, /*MI*/2, /*Op*/3, 0,
     /*  3997 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner9),
     /*  4001 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /*  4003 */   GIR_MakeTempReg, /*TempRegID*/1, /*TypeID*/255,
     /*  4006 */   GIR_BuildConstant, /*TempRegID*/1, /*Val*/GIMT_Encode8(0),
     /*  4016 */   GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/255,
     /*  4019 */   // Combiner Rule #122: double_icmp_zero_and_combine
     /*  4019 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_OR),
     /*  4022 */   GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/GIMT_Encode2(static_cast<uint16_t>(RegState::Define)),
     /*  4027 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // s1
     /*  4031 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/2, // s2
     /*  4035 */   GIR_BuildMI, /*InsnID*/1, /*Opcode*/GIMT_Encode2(TargetOpcode::G_ICMP),
     /*  4039 */   GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/0, /*OpIdx*/0, // root
     /*  4043 */   GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/1, // p
     /*  4047 */   GIR_AddSimpleTempRegister, /*InsnID*/1, /*TempRegID*/0,
     /*  4050 */   GIR_AddSimpleTempRegister, /*InsnID*/1, /*TempRegID*/1,
     /*  4053 */   GIR_EraseRootFromParent_Done,
     /*  4054 */ // Label 222: @4054
     /*  4054 */ GIM_Try, /*On fail goto*//*Label 223*/ GIMT_Encode4(4091), // Rule ID 251 //
     /*  4059 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule184Enabled),
     /*  4062 */   // MIs[0] root
     /*  4062 */   // No operand predicates
     /*  4062 */   // MIs[0] shift
     /*  4062 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  4066 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_LSHR),
     /*  4070 */   // MIs[1] x
     /*  4070 */   // No operand predicates
     /*  4070 */   // MIs[1] lsb
     /*  4070 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
     /*  4074 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /*  4078 */   // MIs[2] imm1
     /*  4078 */   // No operand predicates
     /*  4078 */   // MIs[0] mask
     /*  4078 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/3, /*MI*/0, /*OpIdx*/2, // MIs[3]
     /*  4082 */   GIM_CheckOpcode, /*MI*/3, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /*  4086 */   // MIs[3] imm2
     /*  4086 */   // No operand predicates
     /*  4086 */   GIM_CheckIsSafeToFold, /*NumInsns*/3,
     /*  4088 */   // Combiner Rule #184: bitfield_extract_from_and
     /*  4088 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner100),
     /*  4091 */ // Label 223: @4091
     /*  4091 */ GIM_Try, /*On fail goto*//*Label 224*/ GIMT_Encode4(4140), // Rule ID 386 //
     /*  4096 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule222Enabled),
     /*  4099 */   // MIs[0] root
     /*  4099 */   // No operand predicates
     /*  4099 */   // MIs[0] or
     /*  4099 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  4103 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_OR),
     /*  4107 */   // MIs[1] x
     /*  4107 */   // No operand predicates
     /*  4107 */   // MIs[1] not
     /*  4107 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
     /*  4111 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_XOR),
     /*  4115 */   // MIs[2] y
     /*  4115 */   // No operand predicates
     /*  4115 */   // MIs[2] Operand 2
     /*  4115 */   GIM_CheckConstantInt8, /*MI*/2, /*Op*/2, 255,
     /*  4119 */   // MIs[0] y
     /*  4119 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/2, /*OtherOpIdx*/1,
     /*  4124 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /*  4126 */   // Combiner Rule #222: and_xor_or_to_and
     /*  4126 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_AND),
     /*  4129 */   GIR_RootToRootCopy, /*OpIdx*/0, // root
     /*  4131 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // x
     /*  4135 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // y
     /*  4139 */   GIR_EraseRootFromParent_Done,
     /*  4140 */ // Label 224: @4140
     /*  4140 */ GIM_Try, /*On fail goto*//*Label 225*/ GIMT_Encode4(4164), // Rule ID 120 //
     /*  4145 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule91Enabled),
     /*  4148 */   // MIs[0] dst
     /*  4148 */   // No operand predicates
     /*  4148 */   // MIs[0] src
     /*  4148 */   // No operand predicates
     /*  4148 */   // MIs[0] src
     /*  4148 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
     /*  4153 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  4158 */   // Combiner Rule #91: binop_same_val @ [__binop_same_val_match_0[0]]
     /*  4158 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  4163 */   GIR_EraseRootFromParent_Done,
     /*  4164 */ // Label 225: @4164
     /*  4164 */ GIM_Reject,
     /*  4165 */ // Label 9: @4165
     /*  4165 */ GIM_Try, /*On fail goto*//*Label 226*/ GIMT_Encode4(4176), // Rule ID 85 //
     /*  4170 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule79Enabled),
     /*  4173 */   // Combiner Rule #79: undef_to_negative_one; wip_match_opcode 'G_OR'
     /*  4173 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner35),
     /*  4176 */ // Label 226: @4176
     /*  4176 */ GIM_Try, /*On fail goto*//*Label 227*/ GIMT_Encode4(4187), // Rule ID 154 //
     /*  4181 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule113Enabled),
     /*  4184 */   // Combiner Rule #113: hoist_logic_op_with_same_opcode_hands; wip_match_opcode 'G_OR'
     /*  4184 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner54),
     /*  4187 */ // Label 227: @4187
     /*  4187 */ GIM_Try, /*On fail goto*//*Label 228*/ GIMT_Encode4(4198), // Rule ID 182 //
     /*  4192 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule138Enabled),
     /*  4195 */   // Combiner Rule #138: redundant_or; wip_match_opcode 'G_OR'
     /*  4195 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner73),
     /*  4198 */ // Label 228: @4198
     /*  4198 */ GIM_Try, /*On fail goto*//*Label 229*/ GIMT_Encode4(4209), // Rule ID 231 //
     /*  4203 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule171Enabled),
     /*  4206 */   // Combiner Rule #171: load_or_combine; wip_match_opcode 'G_OR'
     /*  4206 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner93),
     /*  4209 */ // Label 229: @4209
     /*  4209 */ GIM_Try, /*On fail goto*//*Label 230*/ GIMT_Encode4(4220), // Rule ID 236 //
     /*  4214 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule173Enabled),
     /*  4217 */   // Combiner Rule #173: funnel_shift_from_or_shift; wip_match_opcode 'G_OR'
     /*  4217 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner95),
     /*  4220 */ // Label 230: @4220
     /*  4220 */ GIM_Try, /*On fail goto*//*Label 231*/ GIMT_Encode4(4231), // Rule ID 262 //
     /*  4225 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule187Enabled),
     /*  4228 */   // Combiner Rule #187: constant_fold_binop; wip_match_opcode 'G_OR'
     /*  4228 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner103),
     /*  4231 */ // Label 231: @4231
     /*  4231 */ GIM_Try, /*On fail goto*//*Label 232*/ GIMT_Encode4(4242), // Rule ID 320 //
     /*  4236 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule204Enabled),
     /*  4239 */   // Combiner Rule #204: fold_binop_into_select; wip_match_opcode 'G_OR'
     /*  4239 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
     /*  4242 */ // Label 232: @4242
     /*  4242 */ GIM_Try, /*On fail goto*//*Label 233*/ GIMT_Encode4(4253), // Rule ID 356 //
     /*  4247 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule216Enabled),
     /*  4250 */   // Combiner Rule #216: commute_int_constant_to_rhs; wip_match_opcode 'G_OR'
     /*  4250 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner129),
     /*  4253 */ // Label 233: @4253
     /*  4253 */ GIM_Try, /*On fail goto*//*Label 234*/ GIMT_Encode4(4264), // Rule ID 383 //
     /*  4258 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule219Enabled),
     /*  4261 */   // Combiner Rule #219: match_ors; wip_match_opcode 'G_OR'
     /*  4261 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner132),
     /*  4264 */ // Label 234: @4264
     /*  4264 */ GIM_Try, /*On fail goto*//*Label 235*/ GIMT_Encode4(4275), // Rule ID 424 //
     /*  4269 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule256Enabled),
     /*  4272 */   // Combiner Rule #256: binop_with_neg; wip_match_opcode 'G_OR'
     /*  4272 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner158),
     /*  4275 */ // Label 235: @4275
     /*  4275 */ GIM_Try, /*On fail goto*//*Label 236*/ GIMT_Encode4(4361), // Rule ID 385 //
     /*  4280 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule221Enabled),
     /*  4283 */   // MIs[0] root
     /*  4283 */   GIM_RecordRegType, /*MI*/0, /*Op*/0, /*TempTypeIdx*/255,
     /*  4287 */   // MIs[0] and
     /*  4287 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  4291 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_AND),
     /*  4295 */   // MIs[1] x
     /*  4295 */   // No operand predicates
     /*  4295 */   // MIs[1] y
     /*  4295 */   // No operand predicates
     /*  4295 */   // MIs[0] not
     /*  4295 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
     /*  4299 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_XOR),
     /*  4303 */   // MIs[2] y
     /*  4303 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/2, /*OpIdx*/1, /*OtherMI*/1, /*OtherOpIdx*/2,
     /*  4308 */   // MIs[2] Operand 2
     /*  4308 */   GIM_CheckConstantInt8, /*MI*/2, /*Op*/2, 255,
     /*  4312 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /*  4314 */   GIR_MakeTempReg, /*TempRegID*/1, /*TypeID*/255,
     /*  4317 */   GIR_BuildConstant, /*TempRegID*/1, /*Val*/GIMT_Encode8(18446744073709551615u),
     /*  4327 */   GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/255,
     /*  4330 */   // Combiner Rule #221: or_and_xor_to_xor_or
     /*  4330 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_XOR),
     /*  4333 */   GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/GIMT_Encode2(static_cast<uint16_t>(RegState::Define)),
     /*  4338 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // y
     /*  4342 */   GIR_AddSimpleTempRegister, /*InsnID*/0, /*TempRegID*/1,
     /*  4345 */   GIR_BuildMI, /*InsnID*/1, /*Opcode*/GIMT_Encode2(TargetOpcode::G_OR),
     /*  4349 */   GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/0, /*OpIdx*/0, // root
     /*  4353 */   GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/1, // x
     /*  4357 */   GIR_AddSimpleTempRegister, /*InsnID*/1, /*TempRegID*/0,
     /*  4360 */   GIR_EraseRootFromParent_Done,
     /*  4361 */ // Label 236: @4361
     /*  4361 */ GIM_Try, /*On fail goto*//*Label 237*/ GIMT_Encode4(4408), // Rule ID 243 //
     /*  4366 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule178Enabled),
     /*  4369 */   // MIs[0] root
     /*  4369 */   // No operand predicates
     /*  4369 */   // MIs[0] out1
     /*  4369 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  4373 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FSHL),
     /*  4377 */   // MIs[1] __funnel_shift_or_shift_to_funnel_shift_left_match_0.x
     /*  4377 */   // No operand predicates
     /*  4377 */   // MIs[1] __funnel_shift_or_shift_to_funnel_shift_left_match_0.z
     /*  4377 */   // No operand predicates
     /*  4377 */   // MIs[1] __funnel_shift_or_shift_to_funnel_shift_left_match_0.y
     /*  4377 */   // No operand predicates
     /*  4377 */   // MIs[0] out2
     /*  4377 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
     /*  4381 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_SHL),
     /*  4385 */   // MIs[2] __funnel_shift_or_shift_to_funnel_shift_left_match_0.x
     /*  4385 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/2, /*OpIdx*/1, /*OtherMI*/1, /*OtherOpIdx*/1,
     /*  4390 */   // MIs[2] __funnel_shift_or_shift_to_funnel_shift_left_match_0.y
     /*  4390 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/2, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/3,
     /*  4395 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  4400 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /*  4402 */   // Combiner Rule #178: funnel_shift_or_shift_to_funnel_shift_left @ [__funnel_shift_or_shift_to_funnel_shift_left_match_0[0]]
     /*  4402 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  4407 */   GIR_EraseRootFromParent_Done,
     /*  4408 */ // Label 237: @4408
     /*  4408 */ GIM_Try, /*On fail goto*//*Label 238*/ GIMT_Encode4(4455), // Rule ID 245 //
     /*  4413 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule179Enabled),
     /*  4416 */   // MIs[0] root
     /*  4416 */   // No operand predicates
     /*  4416 */   // MIs[0] out1
     /*  4416 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  4420 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FSHR),
     /*  4424 */   // MIs[1] __funnel_shift_or_shift_to_funnel_shift_right_match_0.z
     /*  4424 */   // No operand predicates
     /*  4424 */   // MIs[1] __funnel_shift_or_shift_to_funnel_shift_right_match_0.x
     /*  4424 */   // No operand predicates
     /*  4424 */   // MIs[1] __funnel_shift_or_shift_to_funnel_shift_right_match_0.y
     /*  4424 */   // No operand predicates
     /*  4424 */   // MIs[0] out2
     /*  4424 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
     /*  4428 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_LSHR),
     /*  4432 */   // MIs[2] __funnel_shift_or_shift_to_funnel_shift_right_match_0.x
     /*  4432 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/2, /*OpIdx*/1, /*OtherMI*/1, /*OtherOpIdx*/2,
     /*  4437 */   // MIs[2] __funnel_shift_or_shift_to_funnel_shift_right_match_0.y
     /*  4437 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/2, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/3,
     /*  4442 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  4447 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /*  4449 */   // Combiner Rule #179: funnel_shift_or_shift_to_funnel_shift_right @ [__funnel_shift_or_shift_to_funnel_shift_right_match_0[0]]
     /*  4449 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  4454 */   GIR_EraseRootFromParent_Done,
     /*  4455 */ // Label 238: @4455
     /*  4455 */ GIM_Try, /*On fail goto*//*Label 239*/ GIMT_Encode4(4553), // Rule ID 167 //
     /*  4460 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule123Enabled),
     /*  4463 */   // MIs[0] root
     /*  4463 */   // No operand predicates
     /*  4463 */   // MIs[0] d1
     /*  4463 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  4467 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ICMP),
     /*  4471 */   // MIs[1] p
     /*  4471 */   // No operand predicates
     /*  4471 */   // MIs[1] s1
     /*  4471 */   GIM_RecordRegType, /*MI*/1, /*Op*/2, /*TempTypeIdx*/255,
     /*  4475 */   // MIs[1] Operand 3
     /*  4475 */   GIM_CheckConstantInt8, /*MI*/1, /*Op*/3, 0,
     /*  4479 */   // MIs[0] d2
     /*  4479 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
     /*  4483 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_ICMP),
     /*  4487 */   // MIs[2] p
     /*  4487 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/2, /*OpIdx*/1, /*OtherMI*/1, /*OtherOpIdx*/1,
     /*  4492 */   // MIs[2] s2
     /*  4492 */   // No operand predicates
     /*  4492 */   // MIs[2] Operand 3
     /*  4492 */   GIM_CheckConstantInt8, /*MI*/2, /*Op*/3, 0,
     /*  4496 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner10),
     /*  4500 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /*  4502 */   GIR_MakeTempReg, /*TempRegID*/1, /*TypeID*/255,
     /*  4505 */   GIR_BuildConstant, /*TempRegID*/1, /*Val*/GIMT_Encode8(0),
     /*  4515 */   GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/255,
     /*  4518 */   // Combiner Rule #123: double_icmp_zero_or_combine
     /*  4518 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_OR),
     /*  4521 */   GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/GIMT_Encode2(static_cast<uint16_t>(RegState::Define)),
     /*  4526 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // s1
     /*  4530 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/2, // s2
     /*  4534 */   GIR_BuildMI, /*InsnID*/1, /*Opcode*/GIMT_Encode2(TargetOpcode::G_ICMP),
     /*  4538 */   GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/0, /*OpIdx*/0, // root
     /*  4542 */   GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/1, // p
     /*  4546 */   GIR_AddSimpleTempRegister, /*InsnID*/1, /*TempRegID*/0,
     /*  4549 */   GIR_AddSimpleTempRegister, /*InsnID*/1, /*TempRegID*/1,
     /*  4552 */   GIR_EraseRootFromParent_Done,
     /*  4553 */ // Label 239: @4553
     /*  4553 */ GIM_Try, /*On fail goto*//*Label 240*/ GIMT_Encode4(4602), // Rule ID 384 //
     /*  4558 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule220Enabled),
     /*  4561 */   // MIs[0] root
     /*  4561 */   // No operand predicates
     /*  4561 */   // MIs[0] and
     /*  4561 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  4565 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_AND),
     /*  4569 */   // MIs[1] x
     /*  4569 */   // No operand predicates
     /*  4569 */   // MIs[1] not
     /*  4569 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
     /*  4573 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_XOR),
     /*  4577 */   // MIs[2] y
     /*  4577 */   // No operand predicates
     /*  4577 */   // MIs[2] Operand 2
     /*  4577 */   GIM_CheckConstantInt8, /*MI*/2, /*Op*/2, 255,
     /*  4581 */   // MIs[0] y
     /*  4581 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/2, /*OtherOpIdx*/1,
     /*  4586 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /*  4588 */   // Combiner Rule #220: or_and_xor_to_or
     /*  4588 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_OR),
     /*  4591 */   GIR_RootToRootCopy, /*OpIdx*/0, // root
     /*  4593 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // x
     /*  4597 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // y
     /*  4601 */   GIR_EraseRootFromParent_Done,
     /*  4602 */ // Label 240: @4602
     /*  4602 */ GIM_Try, /*On fail goto*//*Label 241*/ GIMT_Encode4(4636), // Rule ID 434 //
     /*  4607 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule265Enabled),
     /*  4610 */   // MIs[0] dst
     /*  4610 */   // No operand predicates
     /*  4610 */   // MIs[0] __combine_or_of_and_match_0.and
     /*  4610 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  4614 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_AND),
     /*  4618 */   // MIs[1] x
     /*  4618 */   // No operand predicates
     /*  4618 */   // MIs[1] y
     /*  4618 */   // No operand predicates
     /*  4618 */   // MIs[0] x
     /*  4618 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/1,
     /*  4623 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
     /*  4628 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  4630 */   // Combiner Rule #265: combine_or_of_and @ [__combine_or_of_and_match_0[0]]
     /*  4630 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
     /*  4635 */   GIR_EraseRootFromParent_Done,
     /*  4636 */ // Label 241: @4636
     /*  4636 */ GIM_Try, /*On fail goto*//*Label 242*/ GIMT_Encode4(4670), // Rule ID 435 //
     /*  4641 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule265Enabled),
     /*  4644 */   // MIs[0] dst
     /*  4644 */   // No operand predicates
     /*  4644 */   // MIs[0] __combine_or_of_and_match_0.and
     /*  4644 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  4648 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_AND),
     /*  4652 */   // MIs[1] y
     /*  4652 */   // No operand predicates
     /*  4652 */   // MIs[1] x
     /*  4652 */   // No operand predicates
     /*  4652 */   // MIs[0] x
     /*  4652 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/2,
     /*  4657 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/2,
     /*  4662 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  4664 */   // Combiner Rule #265: combine_or_of_and @ [__combine_or_of_and_match_0[1]]
     /*  4664 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/2,
     /*  4669 */   GIR_EraseRootFromParent_Done,
     /*  4670 */ // Label 242: @4670
     /*  4670 */ GIM_Try, /*On fail goto*//*Label 243*/ GIMT_Encode4(4717), // Rule ID 246 //
     /*  4675 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule179Enabled),
     /*  4678 */   // MIs[0] root
     /*  4678 */   // No operand predicates
     /*  4678 */   // MIs[0] out2
     /*  4678 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  4682 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_LSHR),
     /*  4686 */   // MIs[1] __funnel_shift_or_shift_to_funnel_shift_right_match_0.x
     /*  4686 */   // No operand predicates
     /*  4686 */   // MIs[1] __funnel_shift_or_shift_to_funnel_shift_right_match_0.y
     /*  4686 */   // No operand predicates
     /*  4686 */   // MIs[0] out1
     /*  4686 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
     /*  4690 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_FSHR),
     /*  4694 */   // MIs[2] __funnel_shift_or_shift_to_funnel_shift_right_match_0.z
     /*  4694 */   // No operand predicates
     /*  4694 */   // MIs[2] __funnel_shift_or_shift_to_funnel_shift_right_match_0.x
     /*  4694 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/2, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/1,
     /*  4699 */   // MIs[2] __funnel_shift_or_shift_to_funnel_shift_right_match_0.y
     /*  4699 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/2, /*OpIdx*/3, /*OtherMI*/1, /*OtherOpIdx*/2,
     /*  4704 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/2,
     /*  4709 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /*  4711 */   // Combiner Rule #179: funnel_shift_or_shift_to_funnel_shift_right @ [__funnel_shift_or_shift_to_funnel_shift_right_match_0[1]]
     /*  4711 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/2,
     /*  4716 */   GIR_EraseRootFromParent_Done,
     /*  4717 */ // Label 243: @4717
     /*  4717 */ GIM_Try, /*On fail goto*//*Label 244*/ GIMT_Encode4(4764), // Rule ID 244 //
     /*  4722 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule178Enabled),
     /*  4725 */   // MIs[0] root
     /*  4725 */   // No operand predicates
     /*  4725 */   // MIs[0] out2
     /*  4725 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  4729 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SHL),
     /*  4733 */   // MIs[1] __funnel_shift_or_shift_to_funnel_shift_left_match_0.x
     /*  4733 */   // No operand predicates
     /*  4733 */   // MIs[1] __funnel_shift_or_shift_to_funnel_shift_left_match_0.y
     /*  4733 */   // No operand predicates
     /*  4733 */   // MIs[0] out1
     /*  4733 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
     /*  4737 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_FSHL),
     /*  4741 */   // MIs[2] __funnel_shift_or_shift_to_funnel_shift_left_match_0.x
     /*  4741 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/2, /*OpIdx*/1, /*OtherMI*/1, /*OtherOpIdx*/1,
     /*  4746 */   // MIs[2] __funnel_shift_or_shift_to_funnel_shift_left_match_0.z
     /*  4746 */   // No operand predicates
     /*  4746 */   // MIs[2] __funnel_shift_or_shift_to_funnel_shift_left_match_0.y
     /*  4746 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/2, /*OpIdx*/3, /*OtherMI*/1, /*OtherOpIdx*/2,
     /*  4751 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/2,
     /*  4756 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /*  4758 */   // Combiner Rule #178: funnel_shift_or_shift_to_funnel_shift_left @ [__funnel_shift_or_shift_to_funnel_shift_left_match_0[1]]
     /*  4758 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/2,
     /*  4763 */   GIR_EraseRootFromParent_Done,
     /*  4764 */ // Label 244: @4764
     /*  4764 */ GIM_Try, /*On fail goto*//*Label 245*/ GIMT_Encode4(4814), // Rule ID 389 //
     /*  4769 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule225Enabled),
     /*  4772 */   // MIs[0] root
     /*  4772 */   // No operand predicates
     /*  4772 */   // MIs[0] xor
     /*  4772 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  4776 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_XOR),
     /*  4780 */   // MIs[1] x
     /*  4780 */   // No operand predicates
     /*  4780 */   // MIs[1] y
     /*  4780 */   // No operand predicates
     /*  4780 */   // MIs[0] and
     /*  4780 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
     /*  4784 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_AND),
     /*  4788 */   // MIs[2] x
     /*  4788 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/2, /*OpIdx*/1, /*OtherMI*/1, /*OtherOpIdx*/1,
     /*  4793 */   // MIs[2] y
     /*  4793 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/2, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/2,
     /*  4798 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /*  4800 */   // Combiner Rule #225: or_xor_and
     /*  4800 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_OR),
     /*  4803 */   GIR_RootToRootCopy, /*OpIdx*/0, // root
     /*  4805 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // x
     /*  4809 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // y
     /*  4813 */   GIR_EraseRootFromParent_Done,
     /*  4814 */ // Label 245: @4814
     /*  4814 */ GIM_Try, /*On fail goto*//*Label 246*/ GIMT_Encode4(4864), // Rule ID 388 //
     /*  4819 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule224Enabled),
     /*  4822 */   // MIs[0] root
     /*  4822 */   // No operand predicates
     /*  4822 */   // MIs[0] xor
     /*  4822 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  4826 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_XOR),
     /*  4830 */   // MIs[1] x
     /*  4830 */   // No operand predicates
     /*  4830 */   // MIs[1] y
     /*  4830 */   // No operand predicates
     /*  4830 */   // MIs[0] or
     /*  4830 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
     /*  4834 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_OR),
     /*  4838 */   // MIs[2] x
     /*  4838 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/2, /*OpIdx*/1, /*OtherMI*/1, /*OtherOpIdx*/1,
     /*  4843 */   // MIs[2] y
     /*  4843 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/2, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/2,
     /*  4848 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /*  4850 */   // Combiner Rule #224: or_xor_or
     /*  4850 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_OR),
     /*  4853 */   GIR_RootToRootCopy, /*OpIdx*/0, // root
     /*  4855 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // x
     /*  4859 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // y
     /*  4863 */   GIR_EraseRootFromParent_Done,
     /*  4864 */ // Label 246: @4864
     /*  4864 */ GIM_Try, /*On fail goto*//*Label 247*/ GIMT_Encode4(4888), // Rule ID 121 //
     /*  4869 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule91Enabled),
     /*  4872 */   // MIs[0] dst
     /*  4872 */   // No operand predicates
     /*  4872 */   // MIs[0] src
     /*  4872 */   // No operand predicates
     /*  4872 */   // MIs[0] src
     /*  4872 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
     /*  4877 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  4882 */   // Combiner Rule #91: binop_same_val @ [__binop_same_val_match_0[1]]
     /*  4882 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  4887 */   GIR_EraseRootFromParent_Done,
     /*  4888 */ // Label 247: @4888
     /*  4888 */ GIM_Try, /*On fail goto*//*Label 248*/ GIMT_Encode4(4922), // Rule ID 436 //
     /*  4893 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule265Enabled),
     /*  4896 */   // MIs[0] dst
     /*  4896 */   // No operand predicates
     /*  4896 */   // MIs[0] x
     /*  4896 */   // No operand predicates
     /*  4896 */   // MIs[0] __combine_or_of_and_match_0.and
     /*  4896 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
     /*  4900 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_AND),
     /*  4904 */   // MIs[1] x
     /*  4904 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/1, /*OpIdx*/1, /*OtherMI*/0, /*OtherOpIdx*/1,
     /*  4909 */   // MIs[1] y
     /*  4909 */   // No operand predicates
     /*  4909 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  4914 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  4916 */   // Combiner Rule #265: combine_or_of_and @ [__combine_or_of_and_match_0[2]]
     /*  4916 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  4921 */   GIR_EraseRootFromParent_Done,
     /*  4922 */ // Label 248: @4922
     /*  4922 */ GIM_Try, /*On fail goto*//*Label 249*/ GIMT_Encode4(4956), // Rule ID 437 //
     /*  4927 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule265Enabled),
     /*  4930 */   // MIs[0] dst
     /*  4930 */   // No operand predicates
     /*  4930 */   // MIs[0] x
     /*  4930 */   // No operand predicates
     /*  4930 */   // MIs[0] __combine_or_of_and_match_0.and
     /*  4930 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
     /*  4934 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_AND),
     /*  4938 */   // MIs[1] y
     /*  4938 */   // No operand predicates
     /*  4938 */   // MIs[1] x
     /*  4938 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/1, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
     /*  4943 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  4948 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  4950 */   // Combiner Rule #265: combine_or_of_and @ [__combine_or_of_and_match_0[3]]
     /*  4950 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  4955 */   GIR_EraseRootFromParent_Done,
     /*  4956 */ // Label 249: @4956
     /*  4956 */ GIM_Try, /*On fail goto*//*Label 250*/ GIMT_Encode4(4979), // Rule ID 112 //
     /*  4961 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule90Enabled),
     /*  4964 */   // MIs[0] dst
     /*  4964 */   // No operand predicates
     /*  4964 */   // MIs[0] lhs
     /*  4964 */   // No operand predicates
     /*  4964 */   // MIs[0] Operand 2
     /*  4964 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /*  4968 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  4973 */   // Combiner Rule #90: right_identity_zero @ [__right_identity_zero_match_0[2]]
     /*  4973 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  4978 */   GIR_EraseRootFromParent_Done,
     /*  4979 */ // Label 250: @4979
     /*  4979 */ GIM_Reject,
     /*  4980 */ // Label 10: @4980
     /*  4980 */ GIM_Try, /*On fail goto*//*Label 251*/ GIMT_Encode4(4991), // Rule ID 102 //
     /*  4985 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule84Enabled),
     /*  4988 */   // Combiner Rule #84: propagate_undef_any_op; wip_match_opcode 'G_XOR'
     /*  4988 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner39),
     /*  4991 */ // Label 251: @4991
     /*  4991 */ GIM_Try, /*On fail goto*//*Label 252*/ GIMT_Encode4(5002), // Rule ID 155 //
     /*  4996 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule113Enabled),
     /*  4999 */   // Combiner Rule #113: hoist_logic_op_with_same_opcode_hands; wip_match_opcode 'G_XOR'
     /*  4999 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner54),
     /*  5002 */ // Label 252: @5002
     /*  5002 */ GIM_Try, /*On fail goto*//*Label 253*/ GIMT_Encode4(5013), // Rule ID 187 //
     /*  5007 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule143Enabled),
     /*  5010 */   // Combiner Rule #143: not_cmp_fold; wip_match_opcode 'G_XOR'
     /*  5010 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner78),
     /*  5013 */ // Label 253: @5013
     /*  5013 */ GIM_Try, /*On fail goto*//*Label 254*/ GIMT_Encode4(5024), // Rule ID 219 //
     /*  5018 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule167Enabled),
     /*  5021 */   // Combiner Rule #167: xor_of_and_with_same_reg; wip_match_opcode 'G_XOR'
     /*  5021 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner89),
     /*  5024 */ // Label 254: @5024
     /*  5024 */ GIM_Try, /*On fail goto*//*Label 255*/ GIMT_Encode4(5035), // Rule ID 265 //
     /*  5029 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule187Enabled),
     /*  5032 */   // Combiner Rule #187: constant_fold_binop; wip_match_opcode 'G_XOR'
     /*  5032 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner103),
     /*  5035 */ // Label 255: @5035
     /*  5035 */ GIM_Try, /*On fail goto*//*Label 256*/ GIMT_Encode4(5046), // Rule ID 321 //
     /*  5040 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule204Enabled),
     /*  5043 */   // Combiner Rule #204: fold_binop_into_select; wip_match_opcode 'G_XOR'
     /*  5043 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
     /*  5046 */ // Label 256: @5046
     /*  5046 */ GIM_Try, /*On fail goto*//*Label 257*/ GIMT_Encode4(5057), // Rule ID 357 //
     /*  5051 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule216Enabled),
     /*  5054 */   // Combiner Rule #216: commute_int_constant_to_rhs; wip_match_opcode 'G_XOR'
     /*  5054 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner129),
     /*  5057 */ // Label 257: @5057
     /*  5057 */ GIM_Try, /*On fail goto*//*Label 258*/ GIMT_Encode4(5068), // Rule ID 425 //
     /*  5062 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule256Enabled),
     /*  5065 */   // Combiner Rule #256: binop_with_neg; wip_match_opcode 'G_XOR'
     /*  5065 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner158),
     /*  5068 */ // Label 258: @5068
     /*  5068 */ GIM_Try, /*On fail goto*//*Label 259*/ GIMT_Encode4(5128), // Rule ID 13 //
     /*  5073 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule13Enabled),
     /*  5076 */   // MIs[0] root
     /*  5076 */   GIM_RecordRegType, /*MI*/0, /*Op*/0, /*TempTypeIdx*/255,
     /*  5080 */   // MIs[0] add
     /*  5080 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  5084 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ADD),
     /*  5088 */   // MIs[1] A
     /*  5088 */   // No operand predicates
     /*  5088 */   // MIs[1] Operand 2
     /*  5088 */   GIM_CheckConstantInt8, /*MI*/1, /*Op*/2, 255,
     /*  5092 */   // MIs[0] Operand 2
     /*  5092 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 255,
     /*  5096 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner1),
     /*  5100 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  5102 */   GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/255,
     /*  5105 */   GIR_BuildConstant, /*TempRegID*/0, /*Val*/GIMT_Encode8(0),
     /*  5115 */   // Combiner Rule #13: NotAPlusNegOne
     /*  5115 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SUB),
     /*  5118 */   GIR_RootToRootCopy, /*OpIdx*/0, // root
     /*  5120 */   GIR_AddSimpleTempRegister, /*InsnID*/0, /*TempRegID*/0,
     /*  5123 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // A
     /*  5127 */   GIR_EraseRootFromParent_Done,
     /*  5128 */ // Label 259: @5128
     /*  5128 */ GIM_Try, /*On fail goto*//*Label 260*/ GIMT_Encode4(5167), // Rule ID 123 //
     /*  5133 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule92Enabled),
     /*  5136 */   // MIs[0] dst
     /*  5136 */   // No operand predicates
     /*  5136 */   // MIs[0] x
     /*  5136 */   GIM_RecordRegType, /*MI*/0, /*Op*/1, /*TempTypeIdx*/255,
     /*  5140 */   // MIs[0] x
     /*  5140 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
     /*  5145 */   GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/255,
     /*  5148 */   GIR_BuildConstant, /*TempRegID*/0, /*Val*/GIMT_Encode8(0),
     /*  5158 */   // Combiner Rule #92: same_val_zero @ [__same_val_zero_match_0[1]]
     /*  5158 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::COPY),
     /*  5161 */   GIR_RootToRootCopy, /*OpIdx*/0, // dst
     /*  5163 */   GIR_AddSimpleTempRegister, /*InsnID*/0, /*TempRegID*/0,
     /*  5166 */   GIR_EraseRootFromParent_Done,
     /*  5167 */ // Label 260: @5167
     /*  5167 */ GIM_Try, /*On fail goto*//*Label 261*/ GIMT_Encode4(5190), // Rule ID 113 //
     /*  5172 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule90Enabled),
     /*  5175 */   // MIs[0] dst
     /*  5175 */   // No operand predicates
     /*  5175 */   // MIs[0] lhs
     /*  5175 */   // No operand predicates
     /*  5175 */   // MIs[0] Operand 2
     /*  5175 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /*  5179 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  5184 */   // Combiner Rule #90: right_identity_zero @ [__right_identity_zero_match_0[3]]
     /*  5184 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  5189 */   GIR_EraseRootFromParent_Done,
     /*  5190 */ // Label 261: @5190
     /*  5190 */ GIM_Reject,
     /*  5191 */ // Label 11: @5191
     /*  5191 */ GIM_Try, /*On fail goto*//*Label 262*/ GIMT_Encode4(5202), // Rule ID 151 //
     /*  5196 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule111Enabled),
     /*  5199 */   // Combiner Rule #111: extend_through_phis; wip_match_opcode 'G_PHI'
     /*  5199 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner52),
     /*  5202 */ // Label 262: @5202
     /*  5202 */ GIM_Reject,
     /*  5203 */ // Label 12: @5203
     /*  5203 */ GIM_Try, /*On fail goto*//*Label 263*/ GIMT_Encode4(5214), // Rule ID 441 //
     /*  5208 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule269Enabled),
     /*  5211 */   // Combiner Rule #269: fold_global_offset; wip_match_opcode 'G_GLOBAL_VALUE'
     /*  5211 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner161),
     /*  5214 */ // Label 263: @5214
     /*  5214 */ GIM_Reject,
     /*  5215 */ // Label 13: @5215
     /*  5215 */ GIM_Try, /*On fail goto*//*Label 264*/ GIMT_Encode4(5226), // Rule ID 399 //
     /*  5220 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule235Enabled),
     /*  5223 */   // Combiner Rule #235: unmerge_anyext_build_vector; wip_match_opcode 'G_UNMERGE_VALUES'
     /*  5223 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner142),
     /*  5226 */ // Label 264: @5226
     /*  5226 */ GIM_Try, /*On fail goto*//*Label 265*/ GIMT_Encode4(5237), // Rule ID 400 //
     /*  5231 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule236Enabled),
     /*  5234 */   // Combiner Rule #236: unmerge_merge; wip_match_opcode 'G_UNMERGE_VALUES'
     /*  5234 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner143),
     /*  5237 */ // Label 265: @5237
     /*  5237 */ GIM_Try, /*On fail goto*//*Label 266*/ GIMT_Encode4(5248), // Rule ID 402 //
     /*  5242 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule238Enabled),
     /*  5245 */   // Combiner Rule #238: unmerge_cst; wip_match_opcode 'G_UNMERGE_VALUES'
     /*  5245 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner145),
     /*  5248 */ // Label 266: @5248
     /*  5248 */ GIM_Try, /*On fail goto*//*Label 267*/ GIMT_Encode4(5259), // Rule ID 403 //
     /*  5253 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule239Enabled),
     /*  5256 */   // Combiner Rule #239: unmerge_undef; wip_match_opcode 'G_UNMERGE_VALUES'
     /*  5256 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner146),
     /*  5259 */ // Label 267: @5259
     /*  5259 */ GIM_Try, /*On fail goto*//*Label 268*/ GIMT_Encode4(5270), // Rule ID 404 //
     /*  5264 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule240Enabled),
     /*  5267 */   // Combiner Rule #240: unmerge_dead_to_trunc; wip_match_opcode 'G_UNMERGE_VALUES'
     /*  5267 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner147),
     /*  5270 */ // Label 268: @5270
     /*  5270 */ GIM_Try, /*On fail goto*//*Label 269*/ GIMT_Encode4(5281), // Rule ID 405 //
     /*  5275 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule241Enabled),
     /*  5278 */   // Combiner Rule #241: unmerge_zext_to_zext; wip_match_opcode 'G_UNMERGE_VALUES'
     /*  5278 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner148),
     /*  5281 */ // Label 269: @5281
     /*  5281 */ GIM_Reject,
     /*  5282 */ // Label 14: @5282
     /*  5282 */ GIM_Try, /*On fail goto*//*Label 270*/ GIMT_Encode4(5296), // Rule ID 401 //
     /*  5287 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule237Enabled),
     /*  5290 */   GIM_CheckNumOperandsGE, /*MI*/0, /*Expected*/2,
     /*  5293 */   // MIs[0] dst
     /*  5293 */   // No operand predicates
     /*  5293 */   // MIs[0] merge_srcs
     /*  5293 */   // No operand predicates
     /*  5293 */   // Combiner Rule #237: merge_unmerge
     /*  5293 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner144),
     /*  5296 */ // Label 270: @5296
     /*  5296 */ GIM_Try, /*On fail goto*//*Label 271*/ GIMT_Encode4(5358),
     /*  5301 */   GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
     /*  5304 */   GIM_Try, /*On fail goto*//*Label 272*/ GIMT_Encode4(5325), // Rule ID 406 //
     /*  5309 */     GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule242Enabled),
     /*  5312 */     // MIs[0] root
     /*  5312 */     // No operand predicates
     /*  5312 */     // MIs[0] x
     /*  5312 */     // No operand predicates
     /*  5312 */     // MIs[0] undef
     /*  5312 */     GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
     /*  5316 */     GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
     /*  5320 */     GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  5322 */     // Combiner Rule #242: merge_of_x_and_undef
     /*  5322 */     GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner149),
     /*  5325 */   // Label 272: @5325
     /*  5325 */   GIM_Try, /*On fail goto*//*Label 273*/ GIMT_Encode4(5357), // Rule ID 407 //
     /*  5330 */     GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule243Enabled),
     /*  5333 */     // MIs[0] root
     /*  5333 */     // No operand predicates
     /*  5333 */     // MIs[0] x
     /*  5333 */     // No operand predicates
     /*  5333 */     // MIs[0] zero
     /*  5333 */     GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
     /*  5337 */     GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /*  5341 */     // MIs[1] Operand 1
     /*  5341 */     GIM_CheckLiteralInt, /*MI*/1, /*Op*/1, GIMT_Encode8(0),
     /*  5352 */     GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  5354 */     // Combiner Rule #243: merge_of_x_and_zero
     /*  5354 */     GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner150),
     /*  5357 */   // Label 273: @5357
     /*  5357 */   GIM_Reject,
     /*  5358 */ // Label 271: @5358
     /*  5358 */ GIM_Reject,
     /*  5359 */ // Label 15: @5359
     /*  5359 */ GIM_Try, /*On fail goto*//*Label 274*/ GIMT_Encode4(5370), // Rule ID 75 //
     /*  5364 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule73Enabled),
     /*  5367 */   // Combiner Rule #73: extract_all_elts_from_build_vector; wip_match_opcode 'G_BUILD_VECTOR'
     /*  5367 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner29),
     /*  5370 */ // Label 274: @5370
     /*  5370 */ GIM_Try, /*On fail goto*//*Label 275*/ GIMT_Encode4(5381), // Rule ID 104 //
     /*  5375 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule85Enabled),
     /*  5378 */   // Combiner Rule #85: propagate_undef_all_ops; wip_match_opcode 'G_BUILD_VECTOR'
     /*  5378 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner40),
     /*  5381 */ // Label 275: @5381
     /*  5381 */ GIM_Try, /*On fail goto*//*Label 276*/ GIMT_Encode4(5392), // Rule ID 142 //
     /*  5386 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule102Enabled),
     /*  5389 */   // Combiner Rule #102: buildvector_identity_fold; wip_match_opcode 'G_BUILD_VECTOR'
     /*  5389 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner48),
     /*  5392 */ // Label 276: @5392
     /*  5392 */ GIM_Try, /*On fail goto*//*Label 277*/ GIMT_Encode4(5423),
     /*  5397 */   GIM_CheckNumOperandsGE, /*MI*/0, /*Expected*/2,
     /*  5400 */   GIM_Try, /*On fail goto*//*Label 278*/ GIMT_Encode4(5411), // Rule ID 398 //
     /*  5405 */     GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule234Enabled),
     /*  5408 */     // MIs[0] dst
     /*  5408 */     // No operand predicates
     /*  5408 */     // MIs[0] unused
     /*  5408 */     // No operand predicates
     /*  5408 */     // Combiner Rule #234: combine_use_vector_truncate
     /*  5408 */     GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner141),
     /*  5411 */   // Label 278: @5411
     /*  5411 */   GIM_Try, /*On fail goto*//*Label 279*/ GIMT_Encode4(5422), // Rule ID 408 //
     /*  5416 */     GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule244Enabled),
     /*  5419 */     // MIs[0] dst
     /*  5419 */     // No operand predicates
     /*  5419 */     // MIs[0] unused
     /*  5419 */     // No operand predicates
     /*  5419 */     // Combiner Rule #244: combine_build_unmerge
     /*  5419 */     GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner151),
     /*  5422 */   // Label 279: @5422
     /*  5422 */   GIM_Reject,
     /*  5423 */ // Label 277: @5423
     /*  5423 */ GIM_Reject,
     /*  5424 */ // Label 16: @5424
     /*  5424 */ GIM_Try, /*On fail goto*//*Label 280*/ GIMT_Encode4(5435), // Rule ID 141 //
     /*  5429 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule102Enabled),
     /*  5432 */   // Combiner Rule #102: buildvector_identity_fold; wip_match_opcode 'G_BUILD_VECTOR_TRUNC'
     /*  5432 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner48),
     /*  5435 */ // Label 280: @5435
     /*  5435 */ GIM_Reject,
     /*  5436 */ // Label 17: @5436
     /*  5436 */ GIM_Try, /*On fail goto*//*Label 281*/ GIMT_Encode4(5447), // Rule ID 391 //
     /*  5441 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule227Enabled),
     /*  5444 */   // Combiner Rule #227: combine_concat_vector; wip_match_opcode 'G_CONCAT_VECTORS'
     /*  5444 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner134),
     /*  5447 */ // Label 281: @5447
     /*  5447 */ GIM_Reject,
     /*  5448 */ // Label 18: @5448
     /*  5448 */ GIM_Try, /*On fail goto*//*Label 282*/ GIMT_Encode4(5469), // Rule ID 134 //
     /*  5453 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule96Enabled),
     /*  5456 */   // MIs[0] dst
     /*  5456 */   // No operand predicates
     /*  5456 */   // MIs[0] t
     /*  5456 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  5460 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_INTTOPTR),
     /*  5464 */   // MIs[1] ptr
     /*  5464 */   // No operand predicates
     /*  5464 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  5466 */   // Combiner Rule #96: i2p_to_p2i
     /*  5466 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner46),
     /*  5469 */ // Label 282: @5469
     /*  5469 */ GIM_Try, /*On fail goto*//*Label 283*/ GIMT_Encode4(5490), // Rule ID 96 //
     /*  5474 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule83Enabled),
     /*  5477 */   // MIs[0] dst
     /*  5477 */   // No operand predicates
     /*  5477 */   // MIs[0] __unary_undef_to_undef_match_0.x
     /*  5477 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  5481 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
     /*  5485 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  5487 */   // Combiner Rule #83: unary_undef_to_undef @ [__unary_undef_to_undef_match_0[3]]
     /*  5487 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner38),
     /*  5490 */ // Label 283: @5490
     /*  5490 */ GIM_Reject,
     /*  5491 */ // Label 19: @5491
     /*  5491 */ GIM_Try, /*On fail goto*//*Label 284*/ GIMT_Encode4(5502), // Rule ID 133 //
     /*  5496 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule95Enabled),
     /*  5499 */   // Combiner Rule #95: p2i_to_i2p; wip_match_opcode 'G_INTTOPTR'
     /*  5499 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner45),
     /*  5502 */ // Label 284: @5502
     /*  5502 */ GIM_Try, /*On fail goto*//*Label 285*/ GIMT_Encode4(5523), // Rule ID 97 //
     /*  5507 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule83Enabled),
     /*  5510 */   // MIs[0] dst
     /*  5510 */   // No operand predicates
     /*  5510 */   // MIs[0] __unary_undef_to_undef_match_0.x
     /*  5510 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  5514 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
     /*  5518 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  5520 */   // Combiner Rule #83: unary_undef_to_undef @ [__unary_undef_to_undef_match_0[4]]
     /*  5520 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner38),
     /*  5523 */ // Label 285: @5523
     /*  5523 */ GIM_Reject,
     /*  5524 */ // Label 20: @5524
     /*  5524 */ GIM_Try, /*On fail goto*//*Label 286*/ GIMT_Encode4(5556), // Rule ID 146 //
     /*  5529 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule106Enabled),
     /*  5532 */   // MIs[0] dst
     /*  5532 */   // No operand predicates
     /*  5532 */   // MIs[0] src1
     /*  5532 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  5536 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BITCAST),
     /*  5540 */   // MIs[1] src0
     /*  5540 */   // No operand predicates
     /*  5540 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner5),
     /*  5544 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  5546 */   // Combiner Rule #106: bitcast_bitcast_to_bitcast
     /*  5546 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_BITCAST),
     /*  5549 */   GIR_RootToRootCopy, /*OpIdx*/0, // dst
     /*  5551 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src0
     /*  5555 */   GIR_EraseRootFromParent_Done,
     /*  5556 */ // Label 286: @5556
     /*  5556 */ GIM_Try, /*On fail goto*//*Label 287*/ GIMT_Encode4(5577), // Rule ID 145 //
     /*  5561 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule105Enabled),
     /*  5564 */   // MIs[0] dst
     /*  5564 */   // No operand predicates
     /*  5564 */   // MIs[0] src1
     /*  5564 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  5568 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BITCAST),
     /*  5572 */   // MIs[1] src0
     /*  5572 */   // No operand predicates
     /*  5572 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  5574 */   // Combiner Rule #105: bitcast_bitcast_fold
     /*  5574 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner51),
     /*  5577 */ // Label 287: @5577
     /*  5577 */ GIM_Try, /*On fail goto*//*Label 288*/ GIMT_Encode4(5598), // Rule ID 94 //
     /*  5582 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule83Enabled),
     /*  5585 */   // MIs[0] dst
     /*  5585 */   // No operand predicates
     /*  5585 */   // MIs[0] __unary_undef_to_undef_match_0.x
     /*  5585 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  5589 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
     /*  5593 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  5595 */   // Combiner Rule #83: unary_undef_to_undef @ [__unary_undef_to_undef_match_0[1]]
     /*  5595 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner38),
     /*  5598 */ // Label 288: @5598
     /*  5598 */ GIM_Reject,
     /*  5599 */ // Label 21: @5599
     /*  5599 */ GIM_Try, /*On fail goto*//*Label 289*/ GIMT_Encode4(5628), // Rule ID 24 //
     /*  5604 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule24Enabled),
     /*  5607 */   // MIs[0] dst
     /*  5607 */   // No operand predicates
     /*  5607 */   // MIs[0] src
     /*  5607 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  5611 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FREEZE),
     /*  5615 */   // MIs[1] __idempotent_prop_match_0.x
     /*  5615 */   // No operand predicates
     /*  5615 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  5620 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  5622 */   // Combiner Rule #24: idempotent_prop @ [__idempotent_prop_match_0[0]]
     /*  5622 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  5627 */   GIR_EraseRootFromParent_Done,
     /*  5628 */ // Label 289: @5628
     /*  5628 */ GIM_Try, /*On fail goto*//*Label 290*/ GIMT_Encode4(5651), // Rule ID 49 //
     /*  5633 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule47Enabled),
     /*  5636 */   // MIs[0] root
     /*  5636 */   // No operand predicates
     /*  5636 */   // MIs[0] src
     /*  5636 */   // No operand predicates
     /*  5636 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner3),
     /*  5640 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  5645 */   // Combiner Rule #47: freeze_of_non_undef_non_poison
     /*  5645 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  5650 */   GIR_EraseRootFromParent_Done,
     /*  5651 */ // Label 290: @5651
     /*  5651 */ GIM_Try, /*On fail goto*//*Label 291*/ GIMT_Encode4(5662), // Rule ID 50 //
     /*  5656 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule48Enabled),
     /*  5659 */   // MIs[0] dst
     /*  5659 */   // No operand predicates
     /*  5659 */   // MIs[0] src
     /*  5659 */   // No operand predicates
     /*  5659 */   // Combiner Rule #48: push_freeze_to_prevent_poison_from_propagating
     /*  5659 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner19),
     /*  5662 */ // Label 291: @5662
     /*  5662 */ GIM_Reject,
     /*  5663 */ // Label 22: @5663
     /*  5663 */ GIM_Try, /*On fail goto*//*Label 292*/ GIMT_Encode4(5684), // Rule ID 197 //
     /*  5668 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule153Enabled),
     /*  5671 */   // MIs[0] dst
     /*  5671 */   // No operand predicates
     /*  5671 */   // MIs[0] src0
     /*  5671 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  5675 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /*  5679 */   // MIs[1] cst
     /*  5679 */   // No operand predicates
     /*  5679 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  5681 */   // Combiner Rule #153: constant_fold_intrinsic_trunc
     /*  5681 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner80),
     /*  5684 */ // Label 292: @5684
     /*  5684 */ GIM_Reject,
     /*  5685 */ // Label 23: @5685
     /*  5685 */ GIM_Try, /*On fail goto*//*Label 293*/ GIMT_Encode4(5706), // Rule ID 198 //
     /*  5690 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule154Enabled),
     /*  5693 */   // MIs[0] dst
     /*  5693 */   // No operand predicates
     /*  5693 */   // MIs[0] src0
     /*  5693 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  5697 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /*  5701 */   // MIs[1] cst
     /*  5701 */   // No operand predicates
     /*  5701 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  5703 */   // Combiner Rule #154: constant_fold_intrinsic_round
     /*  5703 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner80),
     /*  5706 */ // Label 293: @5706
     /*  5706 */ GIM_Reject,
     /*  5707 */ // Label 24: @5707
     /*  5707 */ GIM_Try, /*On fail goto*//*Label 294*/ GIMT_Encode4(5728), // Rule ID 199 //
     /*  5712 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule155Enabled),
     /*  5715 */   // MIs[0] dst
     /*  5715 */   // No operand predicates
     /*  5715 */   // MIs[0] src0
     /*  5715 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  5719 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /*  5723 */   // MIs[1] cst
     /*  5723 */   // No operand predicates
     /*  5723 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  5725 */   // Combiner Rule #155: constant_fold_intrinsic_roundeven
     /*  5725 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner80),
     /*  5728 */ // Label 294: @5728
     /*  5728 */ GIM_Reject,
     /*  5729 */ // Label 25: @5729
     /*  5729 */ GIM_Try, /*On fail goto*//*Label 295*/ GIMT_Encode4(5740), // Rule ID 76 //
     /*  5734 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule74Enabled),
     /*  5737 */   // Combiner Rule #74: extending_loads; wip_match_opcode 'G_LOAD'
     /*  5737 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner30),
     /*  5740 */ // Label 295: @5740
     /*  5740 */ GIM_Reject,
     /*  5741 */ // Label 26: @5741
     /*  5741 */ GIM_Try, /*On fail goto*//*Label 296*/ GIMT_Encode4(5752), // Rule ID 77 //
     /*  5746 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule74Enabled),
     /*  5749 */   // Combiner Rule #74: extending_loads; wip_match_opcode 'G_SEXTLOAD'
     /*  5749 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner30),
     /*  5752 */ // Label 296: @5752
     /*  5752 */ GIM_Reject,
     /*  5753 */ // Label 27: @5753
     /*  5753 */ GIM_Try, /*On fail goto*//*Label 297*/ GIMT_Encode4(5764), // Rule ID 78 //
     /*  5758 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule74Enabled),
     /*  5761 */   // Combiner Rule #74: extending_loads; wip_match_opcode 'G_ZEXTLOAD'
     /*  5761 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner30),
     /*  5764 */ // Label 297: @5764
     /*  5764 */ GIM_Reject,
     /*  5765 */ // Label 28: @5765
     /*  5765 */ GIM_Try, /*On fail goto*//*Label 298*/ GIMT_Encode4(5776), // Rule ID 106 //
     /*  5770 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule87Enabled),
     /*  5773 */   // Combiner Rule #87: erase_undef_store; wip_match_opcode 'G_STORE'
     /*  5773 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner42),
     /*  5776 */ // Label 298: @5776
     /*  5776 */ GIM_Reject,
     /*  5777 */ // Label 29: @5777
     /*  5777 */ GIM_Try, /*On fail goto*//*Label 299*/ GIMT_Encode4(5788), // Rule ID 135 //
     /*  5782 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule97Enabled),
     /*  5785 */   // Combiner Rule #97: anyext_trunc_fold; wip_match_opcode 'G_ANYEXT'
     /*  5785 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner47),
     /*  5788 */ // Label 299: @5788
     /*  5788 */ GIM_Try, /*On fail goto*//*Label 300*/ GIMT_Encode4(5799), // Rule ID 290 //
     /*  5793 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule190Enabled),
     /*  5796 */   // Combiner Rule #190: constant_fold_cast_op; wip_match_opcode 'G_ANYEXT'
     /*  5796 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner106),
     /*  5799 */ // Label 300: @5799
     /*  5799 */ GIM_Try, /*On fail goto*//*Label 301*/ GIMT_Encode4(5820), // Rule ID 63 //
     /*  5804 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule61Enabled),
     /*  5807 */   // MIs[0] root
     /*  5807 */   // No operand predicates
     /*  5807 */   // MIs[0] select
     /*  5807 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  5811 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SELECT),
     /*  5815 */   // MIs[1] cond
     /*  5815 */   // No operand predicates
     /*  5815 */   // MIs[1] true
     /*  5815 */   // No operand predicates
     /*  5815 */   // MIs[1] false
     /*  5815 */   // No operand predicates
     /*  5815 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  5817 */   // Combiner Rule #61: select_of_anyext
     /*  5817 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner23),
     /*  5820 */ // Label 301: @5820
     /*  5820 */ GIM_Try, /*On fail goto*//*Label 302*/ GIMT_Encode4(5841), // Rule ID 58 //
     /*  5825 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule56Enabled),
     /*  5828 */   // MIs[0] root
     /*  5828 */   // No operand predicates
     /*  5828 */   // MIs[0] second
     /*  5828 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  5832 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ANYEXT),
     /*  5836 */   // MIs[1] src
     /*  5836 */   // No operand predicates
     /*  5836 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  5838 */   // Combiner Rule #56: anyext_of_anyext
     /*  5838 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner21),
     /*  5841 */ // Label 302: @5841
     /*  5841 */ GIM_Try, /*On fail goto*//*Label 303*/ GIMT_Encode4(5862), // Rule ID 60 //
     /*  5846 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule58Enabled),
     /*  5849 */   // MIs[0] root
     /*  5849 */   // No operand predicates
     /*  5849 */   // MIs[0] second
     /*  5849 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  5853 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SEXT),
     /*  5857 */   // MIs[1] src
     /*  5857 */   // No operand predicates
     /*  5857 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  5859 */   // Combiner Rule #58: anyext_of_sext
     /*  5859 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner21),
     /*  5862 */ // Label 303: @5862
     /*  5862 */ GIM_Try, /*On fail goto*//*Label 304*/ GIMT_Encode4(5883), // Rule ID 59 //
     /*  5867 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule57Enabled),
     /*  5870 */   // MIs[0] root
     /*  5870 */   // No operand predicates
     /*  5870 */   // MIs[0] second
     /*  5870 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  5874 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ZEXT),
     /*  5878 */   // MIs[1] src
     /*  5878 */   // No operand predicates
     /*  5878 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  5880 */   // Combiner Rule #57: anyext_of_zext
     /*  5880 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner21),
     /*  5883 */ // Label 304: @5883
     /*  5883 */ GIM_Try, /*On fail goto*//*Label 305*/ GIMT_Encode4(5904), // Rule ID 95 //
     /*  5888 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule83Enabled),
     /*  5891 */   // MIs[0] dst
     /*  5891 */   // No operand predicates
     /*  5891 */   // MIs[0] __unary_undef_to_undef_match_0.x
     /*  5891 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  5895 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
     /*  5899 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  5901 */   // Combiner Rule #83: unary_undef_to_undef @ [__unary_undef_to_undef_match_0[2]]
     /*  5901 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner38),
     /*  5904 */ // Label 305: @5904
     /*  5904 */ GIM_Reject,
     /*  5905 */ // Label 30: @5905
     /*  5905 */ GIM_Try, /*On fail goto*//*Label 306*/ GIMT_Encode4(5916), // Rule ID 143 //
     /*  5910 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule103Enabled),
     /*  5913 */   // Combiner Rule #103: trunc_buildvector_fold; wip_match_opcode 'G_TRUNC'
     /*  5913 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner49),
     /*  5916 */ // Label 306: @5916
     /*  5916 */ GIM_Try, /*On fail goto*//*Label 307*/ GIMT_Encode4(5927), // Rule ID 144 //
     /*  5921 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule104Enabled),
     /*  5924 */   // Combiner Rule #104: trunc_lshr_buildvector_fold; wip_match_opcode 'G_TRUNC'
     /*  5924 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner50),
     /*  5927 */ // Label 307: @5927
     /*  5927 */ GIM_Try, /*On fail goto*//*Label 308*/ GIMT_Encode4(5938), // Rule ID 186 //
     /*  5932 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule142Enabled),
     /*  5935 */   // Combiner Rule #142: trunc_shift; wip_match_opcode 'G_TRUNC'
     /*  5935 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner77),
     /*  5938 */ // Label 308: @5938
     /*  5938 */ GIM_Try, /*On fail goto*//*Label 309*/ GIMT_Encode4(5959), // Rule ID 64 //
     /*  5943 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule62Enabled),
     /*  5946 */   // MIs[0] root
     /*  5946 */   // No operand predicates
     /*  5946 */   // MIs[0] select
     /*  5946 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  5950 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SELECT),
     /*  5954 */   // MIs[1] cond
     /*  5954 */   // No operand predicates
     /*  5954 */   // MIs[1] true
     /*  5954 */   // No operand predicates
     /*  5954 */   // MIs[1] false
     /*  5954 */   // No operand predicates
     /*  5954 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  5956 */   // Combiner Rule #62: select_of_truncate
     /*  5956 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner23),
     /*  5959 */ // Label 309: @5959
     /*  5959 */ GIM_Try, /*On fail goto*//*Label 310*/ GIMT_Encode4(5988), // Rule ID 66 //
     /*  5964 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule64Enabled),
     /*  5967 */   // MIs[0] root
     /*  5967 */   // No operand predicates
     /*  5967 */   // MIs[0] binop
     /*  5967 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  5971 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ADD),
     /*  5975 */   // MIs[1] x
     /*  5975 */   // No operand predicates
     /*  5975 */   // MIs[1] const
     /*  5975 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
     /*  5979 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /*  5983 */   // MIs[2] imm
     /*  5983 */   // No operand predicates
     /*  5983 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /*  5985 */   // Combiner Rule #64: narrow_binop_add
     /*  5985 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner25),
     /*  5988 */ // Label 310: @5988
     /*  5988 */ GIM_Try, /*On fail goto*//*Label 311*/ GIMT_Encode4(6017), // Rule ID 69 //
     /*  5993 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule67Enabled),
     /*  5996 */   // MIs[0] root
     /*  5996 */   // No operand predicates
     /*  5996 */   // MIs[0] binop
     /*  5996 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  6000 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_AND),
     /*  6004 */   // MIs[1] x
     /*  6004 */   // No operand predicates
     /*  6004 */   // MIs[1] const
     /*  6004 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
     /*  6008 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /*  6012 */   // MIs[2] imm
     /*  6012 */   // No operand predicates
     /*  6012 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /*  6014 */   // Combiner Rule #67: narrow_binop_and
     /*  6014 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner25),
     /*  6017 */ // Label 311: @6017
     /*  6017 */ GIM_Try, /*On fail goto*//*Label 312*/ GIMT_Encode4(6046), // Rule ID 68 //
     /*  6022 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule66Enabled),
     /*  6025 */   // MIs[0] root
     /*  6025 */   // No operand predicates
     /*  6025 */   // MIs[0] binop
     /*  6025 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  6029 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_MUL),
     /*  6033 */   // MIs[1] x
     /*  6033 */   // No operand predicates
     /*  6033 */   // MIs[1] const
     /*  6033 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
     /*  6037 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /*  6041 */   // MIs[2] imm
     /*  6041 */   // No operand predicates
     /*  6041 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /*  6043 */   // Combiner Rule #66: narrow_binop_mul
     /*  6043 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner25),
     /*  6046 */ // Label 312: @6046
     /*  6046 */ GIM_Try, /*On fail goto*//*Label 313*/ GIMT_Encode4(6075), // Rule ID 70 //
     /*  6051 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule68Enabled),
     /*  6054 */   // MIs[0] root
     /*  6054 */   // No operand predicates
     /*  6054 */   // MIs[0] binop
     /*  6054 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  6058 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_OR),
     /*  6062 */   // MIs[1] x
     /*  6062 */   // No operand predicates
     /*  6062 */   // MIs[1] const
     /*  6062 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
     /*  6066 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /*  6070 */   // MIs[2] imm
     /*  6070 */   // No operand predicates
     /*  6070 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /*  6072 */   // Combiner Rule #68: narrow_binop_or
     /*  6072 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner25),
     /*  6075 */ // Label 313: @6075
     /*  6075 */ GIM_Try, /*On fail goto*//*Label 314*/ GIMT_Encode4(6104), // Rule ID 67 //
     /*  6080 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule65Enabled),
     /*  6083 */   // MIs[0] root
     /*  6083 */   // No operand predicates
     /*  6083 */   // MIs[0] binop
     /*  6083 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  6087 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
     /*  6091 */   // MIs[1] x
     /*  6091 */   // No operand predicates
     /*  6091 */   // MIs[1] const
     /*  6091 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
     /*  6095 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /*  6099 */   // MIs[2] imm
     /*  6099 */   // No operand predicates
     /*  6099 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /*  6101 */   // Combiner Rule #65: narrow_binop_sub
     /*  6101 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner25),
     /*  6104 */ // Label 314: @6104
     /*  6104 */ GIM_Try, /*On fail goto*//*Label 315*/ GIMT_Encode4(6136), // Rule ID 415 //
     /*  6109 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule249Enabled),
     /*  6112 */   // MIs[0] dst
     /*  6112 */   // No operand predicates
     /*  6112 */   // MIs[0] min
     /*  6112 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  6116 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_UMIN),
     /*  6120 */   // MIs[1] x
     /*  6120 */   // No operand predicates
     /*  6120 */   // MIs[1] y
     /*  6120 */   // No operand predicates
     /*  6120 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner15),
     /*  6124 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  6126 */   // Combiner Rule #249: trunc_usatu
     /*  6126 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_TRUNC_USAT_U),
     /*  6129 */   GIR_RootToRootCopy, /*OpIdx*/0, // dst
     /*  6131 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // x
     /*  6135 */   GIR_EraseRootFromParent_Done,
     /*  6136 */ // Label 315: @6136
     /*  6136 */ GIM_Try, /*On fail goto*//*Label 316*/ GIMT_Encode4(6165), // Rule ID 71 //
     /*  6141 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule69Enabled),
     /*  6144 */   // MIs[0] root
     /*  6144 */   // No operand predicates
     /*  6144 */   // MIs[0] binop
     /*  6144 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  6148 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_XOR),
     /*  6152 */   // MIs[1] x
     /*  6152 */   // No operand predicates
     /*  6152 */   // MIs[1] const
     /*  6152 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
     /*  6156 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /*  6160 */   // MIs[2] imm
     /*  6160 */   // No operand predicates
     /*  6160 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /*  6162 */   // Combiner Rule #69: narrow_binop_xor
     /*  6162 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner25),
     /*  6165 */ // Label 316: @6165
     /*  6165 */ GIM_Try, /*On fail goto*//*Label 317*/ GIMT_Encode4(6186), // Rule ID 53 //
     /*  6170 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule51Enabled),
     /*  6173 */   // MIs[0] root
     /*  6173 */   // No operand predicates
     /*  6173 */   // MIs[0] ext
     /*  6173 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  6177 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ANYEXT),
     /*  6181 */   // MIs[1] src
     /*  6181 */   // No operand predicates
     /*  6181 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  6183 */   // Combiner Rule #51: truncate_of_anyext
     /*  6183 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner20),
     /*  6186 */ // Label 317: @6186
     /*  6186 */ GIM_Try, /*On fail goto*//*Label 318*/ GIMT_Encode4(6210), // Rule ID 65 //
     /*  6191 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule63Enabled),
     /*  6194 */   // MIs[0] root
     /*  6194 */   // No operand predicates
     /*  6194 */   // MIs[0] bv
     /*  6194 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  6198 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR),
     /*  6202 */   GIM_CheckNumOperandsGE, /*MI*/1, /*Expected*/2,
     /*  6205 */   // MIs[1] unused
     /*  6205 */   // No operand predicates
     /*  6205 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  6207 */   // Combiner Rule #63: buildvector_of_truncate
     /*  6207 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner24),
     /*  6210 */ // Label 318: @6210
     /*  6210 */ GIM_Try, /*On fail goto*//*Label 319*/ GIMT_Encode4(6231), // Rule ID 52 //
     /*  6215 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule50Enabled),
     /*  6218 */   // MIs[0] root
     /*  6218 */   // No operand predicates
     /*  6218 */   // MIs[0] ext
     /*  6218 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  6222 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SEXT),
     /*  6226 */   // MIs[1] src
     /*  6226 */   // No operand predicates
     /*  6226 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  6228 */   // Combiner Rule #50: truncate_of_sext
     /*  6228 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner20),
     /*  6231 */ // Label 319: @6231
     /*  6231 */ GIM_Try, /*On fail goto*//*Label 320*/ GIMT_Encode4(6252), // Rule ID 51 //
     /*  6236 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule49Enabled),
     /*  6239 */   // MIs[0] root
     /*  6239 */   // No operand predicates
     /*  6239 */   // MIs[0] ext
     /*  6239 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  6243 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ZEXT),
     /*  6247 */   // MIs[1] src
     /*  6247 */   // No operand predicates
     /*  6247 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  6249 */   // Combiner Rule #49: truncate_of_zext
     /*  6249 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner20),
     /*  6252 */ // Label 320: @6252
     /*  6252 */ GIM_Try, /*On fail goto*//*Label 321*/ GIMT_Encode4(6273), // Rule ID 93 //
     /*  6257 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule83Enabled),
     /*  6260 */   // MIs[0] dst
     /*  6260 */   // No operand predicates
     /*  6260 */   // MIs[0] __unary_undef_to_undef_match_0.x
     /*  6260 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  6264 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
     /*  6268 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  6270 */   // Combiner Rule #83: unary_undef_to_undef @ [__unary_undef_to_undef_match_0[0]]
     /*  6270 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner38),
     /*  6273 */ // Label 321: @6273
     /*  6273 */ GIM_Try, /*On fail goto*//*Label 322*/ GIMT_Encode4(6294), // Rule ID 72 //
     /*  6278 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule70Enabled),
     /*  6281 */   // MIs[0] root
     /*  6281 */   // No operand predicates
     /*  6281 */   // MIs[0] int
     /*  6281 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  6285 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /*  6289 */   // MIs[1] imm
     /*  6289 */   // No operand predicates
     /*  6289 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  6291 */   // Combiner Rule #70: integer_of_truncate
     /*  6291 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner26),
     /*  6294 */ // Label 322: @6294
     /*  6294 */ GIM_Try, /*On fail goto*//*Label 323*/ GIMT_Encode4(6305), // Rule ID 413 //
     /*  6299 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule247Enabled),
     /*  6302 */   // MIs[0] dst
     /*  6302 */   // No operand predicates
     /*  6302 */   // MIs[0] src
     /*  6302 */   // No operand predicates
     /*  6302 */   // Combiner Rule #247: trunc_ssats
     /*  6302 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner154),
     /*  6305 */ // Label 323: @6305
     /*  6305 */ GIM_Try, /*On fail goto*//*Label 324*/ GIMT_Encode4(6316), // Rule ID 414 //
     /*  6310 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule248Enabled),
     /*  6313 */   // MIs[0] dst
     /*  6313 */   // No operand predicates
     /*  6313 */   // MIs[0] src
     /*  6313 */   // No operand predicates
     /*  6313 */   // Combiner Rule #248: trunc_ssatu
     /*  6313 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner155),
     /*  6316 */ // Label 324: @6316
     /*  6316 */ GIM_Reject,
     /*  6317 */ // Label 31: @6317
     /*  6317 */ GIM_Try, /*On fail goto*//*Label 325*/ GIMT_Encode4(6349), // Rule ID 416 //
     /*  6322 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule250Enabled),
     /*  6325 */   // MIs[0] dst
     /*  6325 */   // No operand predicates
     /*  6325 */   // MIs[0] src
     /*  6325 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  6329 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FPTOUI),
     /*  6333 */   // MIs[1] x
     /*  6333 */   // No operand predicates
     /*  6333 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner16),
     /*  6337 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  6339 */   // Combiner Rule #250: truncusatu_to_fptouisat
     /*  6339 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_FPTOUI_SAT),
     /*  6342 */   GIR_RootToRootCopy, /*OpIdx*/0, // dst
     /*  6344 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // x
     /*  6348 */   GIR_EraseRootFromParent_Done,
     /*  6349 */ // Label 325: @6349
     /*  6349 */ GIM_Reject,
     /*  6350 */ // Label 32: @6350
     /*  6350 */ GIM_Try, /*On fail goto*//*Label 326*/ GIMT_Encode4(6361), // Rule ID 289 //
     /*  6355 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule190Enabled),
     /*  6358 */   // Combiner Rule #190: constant_fold_cast_op; wip_match_opcode 'G_SEXT'
     /*  6358 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner106),
     /*  6361 */ // Label 326: @6361
     /*  6361 */ GIM_Try, /*On fail goto*//*Label 327*/ GIMT_Encode4(6382), // Rule ID 57 //
     /*  6366 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule55Enabled),
     /*  6369 */   // MIs[0] root
     /*  6369 */   // No operand predicates
     /*  6369 */   // MIs[0] second
     /*  6369 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  6373 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ANYEXT),
     /*  6377 */   // MIs[1] src
     /*  6377 */   // No operand predicates
     /*  6377 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  6379 */   // Combiner Rule #55: sext_of_anyext
     /*  6379 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner21),
     /*  6382 */ // Label 327: @6382
     /*  6382 */ GIM_Try, /*On fail goto*//*Label 328*/ GIMT_Encode4(6403), // Rule ID 56 //
     /*  6387 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule54Enabled),
     /*  6390 */   // MIs[0] root
     /*  6390 */   // No operand predicates
     /*  6390 */   // MIs[0] second
     /*  6390 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  6394 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SEXT),
     /*  6398 */   // MIs[1] src
     /*  6398 */   // No operand predicates
     /*  6398 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  6400 */   // Combiner Rule #54: sext_of_sext
     /*  6400 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner21),
     /*  6403 */ // Label 328: @6403
     /*  6403 */ GIM_Try, /*On fail goto*//*Label 329*/ GIMT_Encode4(6424), // Rule ID 392 //
     /*  6408 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule228Enabled),
     /*  6411 */   // MIs[0] root
     /*  6411 */   // No operand predicates
     /*  6411 */   // MIs[0] src
     /*  6411 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  6415 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_TRUNC),
     /*  6419 */   // MIs[1] x
     /*  6419 */   // No operand predicates
     /*  6419 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  6421 */   // Combiner Rule #228: sext_trunc
     /*  6421 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner135),
     /*  6424 */ // Label 329: @6424
     /*  6424 */ GIM_Reject,
     /*  6425 */ // Label 33: @6425
     /*  6425 */ GIM_Try, /*On fail goto*//*Label 330*/ GIMT_Encode4(6436), // Rule ID 171 //
     /*  6430 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule127Enabled),
     /*  6433 */   // Combiner Rule #127: sext_inreg_of_load; wip_match_opcode 'G_SEXT_INREG'
     /*  6433 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner65),
     /*  6436 */ // Label 330: @6436
     /*  6436 */ GIM_Try, /*On fail goto*//*Label 331*/ GIMT_Encode4(6447), // Rule ID 181 //
     /*  6441 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule137Enabled),
     /*  6444 */   // Combiner Rule #137: redundant_sext_inreg; wip_match_opcode 'G_SEXT_INREG'
     /*  6444 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner72),
     /*  6447 */ // Label 331: @6447
     /*  6447 */ GIM_Try, /*On fail goto*//*Label 332*/ GIMT_Encode4(6458), // Rule ID 250 //
     /*  6452 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule183Enabled),
     /*  6455 */   // Combiner Rule #183: bitfield_extract_from_sext_inreg; wip_match_opcode 'G_SEXT_INREG'
     /*  6455 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner99),
     /*  6458 */ // Label 332: @6458
     /*  6458 */ GIM_Try, /*On fail goto*//*Label 333*/ GIMT_Encode4(6479), // Rule ID 61 //
     /*  6463 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule59Enabled),
     /*  6466 */   // MIs[0] dst
     /*  6466 */   // No operand predicates
     /*  6466 */   // MIs[0] x
     /*  6466 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  6470 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SEXT_INREG),
     /*  6474 */   // MIs[1] src
     /*  6474 */   // No operand predicates
     /*  6474 */   // MIs[1] a
     /*  6474 */   // No operand predicates
     /*  6474 */   // MIs[0] b
     /*  6474 */   // No operand predicates
     /*  6474 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  6476 */   // Combiner Rule #59: sext_inreg_of_sext_inreg
     /*  6476 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner22),
     /*  6479 */ // Label 333: @6479
     /*  6479 */ GIM_Try, /*On fail goto*//*Label 334*/ GIMT_Encode4(6490), // Rule ID 185 //
     /*  6484 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule141Enabled),
     /*  6487 */   // MIs[0] dst
     /*  6487 */   // No operand predicates
     /*  6487 */   // MIs[0] src
     /*  6487 */   // No operand predicates
     /*  6487 */   // MIs[0] imm
     /*  6487 */   // No operand predicates
     /*  6487 */   // Combiner Rule #141: sext_inreg_to_zext_inreg
     /*  6487 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner76),
     /*  6490 */ // Label 334: @6490
     /*  6490 */ GIM_Reject,
     /*  6491 */ // Label 34: @6491
     /*  6491 */ GIM_Try, /*On fail goto*//*Label 335*/ GIMT_Encode4(6502), // Rule ID 184 //
     /*  6496 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule140Enabled),
     /*  6499 */   // Combiner Rule #140: zext_trunc_fold; wip_match_opcode 'G_ZEXT'
     /*  6499 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner75),
     /*  6502 */ // Label 335: @6502
     /*  6502 */ GIM_Try, /*On fail goto*//*Label 336*/ GIMT_Encode4(6513), // Rule ID 288 //
     /*  6507 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule190Enabled),
     /*  6510 */   // Combiner Rule #190: constant_fold_cast_op; wip_match_opcode 'G_ZEXT'
     /*  6510 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner106),
     /*  6513 */ // Label 336: @6513
     /*  6513 */ GIM_Try, /*On fail goto*//*Label 337*/ GIMT_Encode4(6534), // Rule ID 62 //
     /*  6518 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule60Enabled),
     /*  6521 */   // MIs[0] root
     /*  6521 */   // No operand predicates
     /*  6521 */   // MIs[0] select
     /*  6521 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  6525 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SELECT),
     /*  6529 */   // MIs[1] cond
     /*  6529 */   // No operand predicates
     /*  6529 */   // MIs[1] true
     /*  6529 */   // No operand predicates
     /*  6529 */   // MIs[1] false
     /*  6529 */   // No operand predicates
     /*  6529 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  6531 */   // Combiner Rule #60: select_of_zext
     /*  6531 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner23),
     /*  6534 */ // Label 337: @6534
     /*  6534 */ GIM_Try, /*On fail goto*//*Label 338*/ GIMT_Encode4(6555), // Rule ID 55 //
     /*  6539 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule53Enabled),
     /*  6542 */   // MIs[0] root
     /*  6542 */   // No operand predicates
     /*  6542 */   // MIs[0] second
     /*  6542 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  6546 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ANYEXT),
     /*  6550 */   // MIs[1] src
     /*  6550 */   // No operand predicates
     /*  6550 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  6552 */   // Combiner Rule #53: zext_of_anyext
     /*  6552 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner21),
     /*  6555 */ // Label 338: @6555
     /*  6555 */ GIM_Try, /*On fail goto*//*Label 339*/ GIMT_Encode4(6582), // Rule ID 393 //
     /*  6560 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule229Enabled),
     /*  6563 */   // MIs[0] root
     /*  6563 */   // No operand predicates
     /*  6563 */   // MIs[0] src
     /*  6563 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  6567 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_TRUNC),
     /*  6571 */   GIM_MIFlags, /*MI*/1, GIMT_Encode4(MachineInstr::NoUWrap),
     /*  6577 */   // MIs[1] x
     /*  6577 */   // No operand predicates
     /*  6577 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  6579 */   // Combiner Rule #229: zext_trunc
     /*  6579 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner136),
     /*  6582 */ // Label 339: @6582
     /*  6582 */ GIM_Try, /*On fail goto*//*Label 340*/ GIMT_Encode4(6603), // Rule ID 54 //
     /*  6587 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule52Enabled),
     /*  6590 */   // MIs[0] root
     /*  6590 */   // No operand predicates
     /*  6590 */   // MIs[0] second
     /*  6590 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  6594 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ZEXT),
     /*  6598 */   // MIs[1] src
     /*  6598 */   // No operand predicates
     /*  6598 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  6600 */   // Combiner Rule #52: zext_of_zext
     /*  6600 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner21),
     /*  6603 */ // Label 340: @6603
     /*  6603 */ GIM_Try, /*On fail goto*//*Label 341*/ GIMT_Encode4(6620), // Rule ID 394 //
     /*  6608 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule230Enabled),
     /*  6611 */   GIM_MIFlags, /*MI*/0, GIMT_Encode4(MachineInstr::NonNeg),
     /*  6617 */   // MIs[0] root
     /*  6617 */   // No operand predicates
     /*  6617 */   // MIs[0] x
     /*  6617 */   // No operand predicates
     /*  6617 */   // Combiner Rule #230: nneg_zext
     /*  6617 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner137),
     /*  6620 */ // Label 341: @6620
     /*  6620 */ GIM_Reject,
     /*  6621 */ // Label 35: @6621
     /*  6621 */ GIM_Try, /*On fail goto*//*Label 342*/ GIMT_Encode4(6632), // Rule ID 86 //
     /*  6626 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule80Enabled),
     /*  6629 */   // Combiner Rule #80: binop_left_undef_to_zero; wip_match_opcode 'G_SHL'
     /*  6629 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner36),
     /*  6632 */ // Label 342: @6632
     /*  6632 */ GIM_Try, /*On fail goto*//*Label 343*/ GIMT_Encode4(6643), // Rule ID 89 //
     /*  6637 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule81Enabled),
     /*  6640 */   // Combiner Rule #81: binop_right_undef_to_undef; wip_match_opcode 'G_SHL'
     /*  6640 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner37),
     /*  6643 */ // Label 343: @6643
     /*  6643 */ GIM_Try, /*On fail goto*//*Label 344*/ GIMT_Encode4(6654), // Rule ID 221 //
     /*  6648 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule169Enabled),
     /*  6651 */   // Combiner Rule #169: shift_immed_chain; wip_match_opcode 'G_SHL'
     /*  6651 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner91),
     /*  6654 */ // Label 344: @6654
     /*  6654 */ GIM_Try, /*On fail goto*//*Label 345*/ GIMT_Encode4(6665), // Rule ID 226 //
     /*  6659 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule170Enabled),
     /*  6662 */   // Combiner Rule #170: shift_of_shifted_logic_chain; wip_match_opcode 'G_SHL'
     /*  6662 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner92),
     /*  6665 */ // Label 345: @6665
     /*  6665 */ GIM_Try, /*On fail goto*//*Label 346*/ GIMT_Encode4(6676), // Rule ID 249 //
     /*  6670 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule182Enabled),
     /*  6673 */   // Combiner Rule #182: commute_shift; wip_match_opcode 'G_SHL'
     /*  6673 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner98),
     /*  6676 */ // Label 346: @6676
     /*  6676 */ GIM_Try, /*On fail goto*//*Label 347*/ GIMT_Encode4(6687), // Rule ID 263 //
     /*  6681 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule187Enabled),
     /*  6684 */   // Combiner Rule #187: constant_fold_binop; wip_match_opcode 'G_SHL'
     /*  6684 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner103),
     /*  6687 */ // Label 347: @6687
     /*  6687 */ GIM_Try, /*On fail goto*//*Label 348*/ GIMT_Encode4(6698), // Rule ID 328 //
     /*  6692 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule204Enabled),
     /*  6695 */   // Combiner Rule #204: fold_binop_into_select; wip_match_opcode 'G_SHL'
     /*  6695 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
     /*  6698 */ // Label 348: @6698
     /*  6698 */ GIM_Try, /*On fail goto*//*Label 349*/ GIMT_Encode4(6733), // Rule ID 47 //
     /*  6703 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule45Enabled),
     /*  6706 */   GIM_MIFlags, /*MI*/0, GIMT_Encode4(MachineInstr::NoSWrap),
     /*  6712 */   // MIs[0] root
     /*  6712 */   // No operand predicates
     /*  6712 */   // MIs[0] left
     /*  6712 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  6716 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_VSCALE),
     /*  6720 */   // MIs[1] imm
     /*  6720 */   // No operand predicates
     /*  6720 */   // MIs[0] x
     /*  6720 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
     /*  6724 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /*  6728 */   // MIs[2] imm1
     /*  6728 */   // No operand predicates
     /*  6728 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /*  6730 */   // Combiner Rule #45: shl_of_vscale
     /*  6730 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner17),
     /*  6733 */ // Label 349: @6733
     /*  6733 */ GIM_Try, /*On fail goto*//*Label 350*/ GIMT_Encode4(6773), // Rule ID 124 //
     /*  6738 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule93Enabled),
     /*  6741 */   // MIs[0] dst
     /*  6741 */   // No operand predicates
     /*  6741 */   // MIs[0] zero
     /*  6741 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  6745 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /*  6749 */   // MIs[1] Operand 1
     /*  6749 */   GIM_CheckLiteralInt, /*MI*/1, /*Op*/1, GIMT_Encode8(0),
     /*  6760 */   // MIs[0] rhs
     /*  6760 */   // No operand predicates
     /*  6760 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  6765 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  6767 */   // Combiner Rule #93: binop_left_to_zero @ [__binop_left_to_zero_match_0[0]]
     /*  6767 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  6772 */   GIR_EraseRootFromParent_Done,
     /*  6773 */ // Label 350: @6773
     /*  6773 */ GIM_Try, /*On fail goto*//*Label 351*/ GIMT_Encode4(6796), // Rule ID 114 //
     /*  6778 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule90Enabled),
     /*  6781 */   // MIs[0] dst
     /*  6781 */   // No operand predicates
     /*  6781 */   // MIs[0] lhs
     /*  6781 */   // No operand predicates
     /*  6781 */   // MIs[0] Operand 2
     /*  6781 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /*  6785 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  6790 */   // Combiner Rule #90: right_identity_zero @ [__right_identity_zero_match_0[4]]
     /*  6790 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  6795 */   GIR_EraseRootFromParent_Done,
     /*  6796 */ // Label 351: @6796
     /*  6796 */ GIM_Try, /*On fail goto*//*Label 352*/ GIMT_Encode4(6807), // Rule ID 156 //
     /*  6801 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule114Enabled),
     /*  6804 */   // MIs[0] root
     /*  6804 */   // No operand predicates
     /*  6804 */   // MIs[0] mi.shifted
     /*  6804 */   // No operand predicates
     /*  6804 */   // MIs[0] mi.amt
     /*  6804 */   // No operand predicates
     /*  6804 */   // Combiner Rule #114: shifts_too_big @ [mi[0]]
     /*  6804 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner55),
     /*  6807 */ // Label 352: @6807
     /*  6807 */ GIM_Try, /*On fail goto*//*Label 353*/ GIMT_Encode4(6818), // Rule ID 172 //
     /*  6812 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule128Enabled),
     /*  6815 */   // MIs[0] dst
     /*  6815 */   // No operand predicates
     /*  6815 */   // MIs[0] src0
     /*  6815 */   // No operand predicates
     /*  6815 */   // MIs[0] src1
     /*  6815 */   // No operand predicates
     /*  6815 */   // Combiner Rule #128: reduce_shl_of_extend
     /*  6815 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner66),
     /*  6818 */ // Label 353: @6818
     /*  6818 */ GIM_Reject,
     /*  6819 */ // Label 36: @6819
     /*  6819 */ GIM_Try, /*On fail goto*//*Label 354*/ GIMT_Encode4(6830), // Rule ID 91 //
     /*  6824 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule81Enabled),
     /*  6827 */   // Combiner Rule #81: binop_right_undef_to_undef; wip_match_opcode 'G_LSHR'
     /*  6827 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner37),
     /*  6830 */ // Label 354: @6830
     /*  6830 */ GIM_Try, /*On fail goto*//*Label 355*/ GIMT_Encode4(6841), // Rule ID 223 //
     /*  6835 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule169Enabled),
     /*  6838 */   // Combiner Rule #169: shift_immed_chain; wip_match_opcode 'G_LSHR'
     /*  6838 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner91),
     /*  6841 */ // Label 355: @6841
     /*  6841 */ GIM_Try, /*On fail goto*//*Label 356*/ GIMT_Encode4(6852), // Rule ID 228 //
     /*  6846 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule170Enabled),
     /*  6849 */   // Combiner Rule #170: shift_of_shifted_logic_chain; wip_match_opcode 'G_LSHR'
     /*  6849 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner92),
     /*  6852 */ // Label 356: @6852
     /*  6852 */ GIM_Try, /*On fail goto*//*Label 357*/ GIMT_Encode4(6863), // Rule ID 253 //
     /*  6857 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule185Enabled),
     /*  6860 */   // Combiner Rule #185: bitfield_extract_from_shr; wip_match_opcode 'G_LSHR'
     /*  6860 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner101),
     /*  6863 */ // Label 357: @6863
     /*  6863 */ GIM_Try, /*On fail goto*//*Label 358*/ GIMT_Encode4(6874), // Rule ID 255 //
     /*  6868 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule186Enabled),
     /*  6871 */   // Combiner Rule #186: bitfield_extract_from_shr_and; wip_match_opcode 'G_LSHR'
     /*  6871 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner102),
     /*  6874 */ // Label 358: @6874
     /*  6874 */ GIM_Try, /*On fail goto*//*Label 359*/ GIMT_Encode4(6885), // Rule ID 260 //
     /*  6879 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule187Enabled),
     /*  6882 */   // Combiner Rule #187: constant_fold_binop; wip_match_opcode 'G_LSHR'
     /*  6882 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner103),
     /*  6885 */ // Label 359: @6885
     /*  6885 */ GIM_Try, /*On fail goto*//*Label 360*/ GIMT_Encode4(6896), // Rule ID 326 //
     /*  6890 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule204Enabled),
     /*  6893 */   // Combiner Rule #204: fold_binop_into_select; wip_match_opcode 'G_LSHR'
     /*  6893 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
     /*  6896 */ // Label 360: @6896
     /*  6896 */ GIM_Try, /*On fail goto*//*Label 361*/ GIMT_Encode4(6985), // Rule ID 432 //
     /*  6901 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule263Enabled),
     /*  6904 */   // MIs[0] dst
     /*  6904 */   // No operand predicates
     /*  6904 */   // MIs[0] sum
     /*  6904 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  6908 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ADD),
     /*  6912 */   // MIs[1] inner
     /*  6912 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/1, // MIs[2]
     /*  6916 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_ADD),
     /*  6920 */   // MIs[2] ext1
     /*  6920 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/3, /*MI*/2, /*OpIdx*/1, // MIs[3]
     /*  6924 */   GIM_CheckOpcode, /*MI*/3, GIMT_Encode2(TargetOpcode::G_ZEXT),
     /*  6928 */   // MIs[3] x
     /*  6928 */   GIM_RecordRegType, /*MI*/3, /*Op*/1, /*TempTypeIdx*/255,
     /*  6932 */   // MIs[2] ext2
     /*  6932 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/4, /*MI*/2, /*OpIdx*/2, // MIs[4]
     /*  6936 */   GIM_CheckOpcode, /*MI*/4, GIMT_Encode2(TargetOpcode::G_ZEXT),
     /*  6940 */   // MIs[4] y
     /*  6940 */   // No operand predicates
     /*  6940 */   // MIs[1] Operand 2
     /*  6940 */   GIM_CheckConstantInt8, /*MI*/1, /*Op*/2, 1,
     /*  6944 */   // MIs[0] Operand 2
     /*  6944 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 1,
     /*  6948 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner22),
     /*  6952 */   GIM_CheckIsSafeToFold, /*NumInsns*/4,
     /*  6954 */   GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/255,
     /*  6957 */   // Combiner Rule #263: avgceil_u_match
     /*  6957 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_UAVGCEIL),
     /*  6960 */   GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/GIMT_Encode2(static_cast<uint16_t>(RegState::Define)),
     /*  6965 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/3, /*OpIdx*/1, // x
     /*  6969 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/4, /*OpIdx*/1, // y
     /*  6973 */   GIR_BuildMI, /*InsnID*/1, /*Opcode*/GIMT_Encode2(TargetOpcode::G_ZEXT),
     /*  6977 */   GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/0, /*OpIdx*/0, // dst
     /*  6981 */   GIR_AddSimpleTempRegister, /*InsnID*/1, /*TempRegID*/0,
     /*  6984 */   GIR_EraseRootFromParent_Done,
     /*  6985 */ // Label 361: @6985
     /*  6985 */ GIM_Try, /*On fail goto*//*Label 362*/ GIMT_Encode4(7062), // Rule ID 430 //
     /*  6990 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule261Enabled),
     /*  6993 */   // MIs[0] dst
     /*  6993 */   // No operand predicates
     /*  6993 */   // MIs[0] sum
     /*  6993 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  6997 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ADD),
     /*  7001 */   // MIs[1] ext1
     /*  7001 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/1, // MIs[2]
     /*  7005 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_ZEXT),
     /*  7009 */   // MIs[2] x
     /*  7009 */   GIM_RecordRegType, /*MI*/2, /*Op*/1, /*TempTypeIdx*/255,
     /*  7013 */   // MIs[1] ext2
     /*  7013 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/3, /*MI*/1, /*OpIdx*/2, // MIs[3]
     /*  7017 */   GIM_CheckOpcode, /*MI*/3, GIMT_Encode2(TargetOpcode::G_ZEXT),
     /*  7021 */   // MIs[3] y
     /*  7021 */   // No operand predicates
     /*  7021 */   // MIs[0] Operand 2
     /*  7021 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 1,
     /*  7025 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner20),
     /*  7029 */   GIM_CheckIsSafeToFold, /*NumInsns*/3,
     /*  7031 */   GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/255,
     /*  7034 */   // Combiner Rule #261: avgfloor_u_match
     /*  7034 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_UAVGFLOOR),
     /*  7037 */   GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/GIMT_Encode2(static_cast<uint16_t>(RegState::Define)),
     /*  7042 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // x
     /*  7046 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/3, /*OpIdx*/1, // y
     /*  7050 */   GIR_BuildMI, /*InsnID*/1, /*Opcode*/GIMT_Encode2(TargetOpcode::G_ZEXT),
     /*  7054 */   GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/0, /*OpIdx*/0, // dst
     /*  7058 */   GIR_AddSimpleTempRegister, /*InsnID*/1, /*TempRegID*/0,
     /*  7061 */   GIR_EraseRootFromParent_Done,
     /*  7062 */ // Label 362: @7062
     /*  7062 */ GIM_Try, /*On fail goto*//*Label 363*/ GIMT_Encode4(7091), // Rule ID 417 //
     /*  7067 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule251Enabled),
     /*  7070 */   // MIs[0] dst
     /*  7070 */   // No operand predicates
     /*  7070 */   // MIs[0] d2
     /*  7070 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  7074 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_TRUNC),
     /*  7078 */   // MIs[1] d1
     /*  7078 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/1, // MIs[2]
     /*  7082 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_LSHR),
     /*  7086 */   // MIs[2] x
     /*  7086 */   // No operand predicates
     /*  7086 */   // MIs[2] y
     /*  7086 */   // No operand predicates
     /*  7086 */   // MIs[0] z
     /*  7086 */   // No operand predicates
     /*  7086 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /*  7088 */   // Combiner Rule #251: lshr_of_trunc_of_lshr
     /*  7088 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner156),
     /*  7091 */ // Label 363: @7091
     /*  7091 */ GIM_Try, /*On fail goto*//*Label 364*/ GIMT_Encode4(7131), // Rule ID 125 //
     /*  7096 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule93Enabled),
     /*  7099 */   // MIs[0] dst
     /*  7099 */   // No operand predicates
     /*  7099 */   // MIs[0] zero
     /*  7099 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  7103 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /*  7107 */   // MIs[1] Operand 1
     /*  7107 */   GIM_CheckLiteralInt, /*MI*/1, /*Op*/1, GIMT_Encode8(0),
     /*  7118 */   // MIs[0] rhs
     /*  7118 */   // No operand predicates
     /*  7118 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  7123 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  7125 */   // Combiner Rule #93: binop_left_to_zero @ [__binop_left_to_zero_match_0[1]]
     /*  7125 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  7130 */   GIR_EraseRootFromParent_Done,
     /*  7131 */ // Label 364: @7131
     /*  7131 */ GIM_Try, /*On fail goto*//*Label 365*/ GIMT_Encode4(7154), // Rule ID 116 //
     /*  7136 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule90Enabled),
     /*  7139 */   // MIs[0] dst
     /*  7139 */   // No operand predicates
     /*  7139 */   // MIs[0] lhs
     /*  7139 */   // No operand predicates
     /*  7139 */   // MIs[0] Operand 2
     /*  7139 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /*  7143 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  7148 */   // Combiner Rule #90: right_identity_zero @ [__right_identity_zero_match_0[6]]
     /*  7148 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  7153 */   GIR_EraseRootFromParent_Done,
     /*  7154 */ // Label 365: @7154
     /*  7154 */ GIM_Try, /*On fail goto*//*Label 366*/ GIMT_Encode4(7165), // Rule ID 158 //
     /*  7159 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule114Enabled),
     /*  7162 */   // MIs[0] root
     /*  7162 */   // No operand predicates
     /*  7162 */   // MIs[0] mi.shifted
     /*  7162 */   // No operand predicates
     /*  7162 */   // MIs[0] mi.amt
     /*  7162 */   // No operand predicates
     /*  7162 */   // Combiner Rule #114: shifts_too_big @ [mi[2]]
     /*  7162 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner55),
     /*  7165 */ // Label 366: @7165
     /*  7165 */ GIM_Reject,
     /*  7166 */ // Label 37: @7166
     /*  7166 */ GIM_Try, /*On fail goto*//*Label 367*/ GIMT_Encode4(7177), // Rule ID 90 //
     /*  7171 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule81Enabled),
     /*  7174 */   // Combiner Rule #81: binop_right_undef_to_undef; wip_match_opcode 'G_ASHR'
     /*  7174 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner37),
     /*  7177 */ // Label 367: @7177
     /*  7177 */ GIM_Try, /*On fail goto*//*Label 368*/ GIMT_Encode4(7188), // Rule ID 169 //
     /*  7182 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule125Enabled),
     /*  7185 */   // Combiner Rule #125: shl_ashr_to_sext_inreg; wip_match_opcode 'G_ASHR'
     /*  7185 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner64),
     /*  7188 */ // Label 368: @7188
     /*  7188 */ GIM_Try, /*On fail goto*//*Label 369*/ GIMT_Encode4(7199), // Rule ID 222 //
     /*  7193 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule169Enabled),
     /*  7196 */   // Combiner Rule #169: shift_immed_chain; wip_match_opcode 'G_ASHR'
     /*  7196 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner91),
     /*  7199 */ // Label 369: @7199
     /*  7199 */ GIM_Try, /*On fail goto*//*Label 370*/ GIMT_Encode4(7210), // Rule ID 227 //
     /*  7204 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule170Enabled),
     /*  7207 */   // Combiner Rule #170: shift_of_shifted_logic_chain; wip_match_opcode 'G_ASHR'
     /*  7207 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner92),
     /*  7210 */ // Label 370: @7210
     /*  7210 */ GIM_Try, /*On fail goto*//*Label 371*/ GIMT_Encode4(7221), // Rule ID 252 //
     /*  7215 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule185Enabled),
     /*  7218 */   // Combiner Rule #185: bitfield_extract_from_shr; wip_match_opcode 'G_ASHR'
     /*  7218 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner101),
     /*  7221 */ // Label 371: @7221
     /*  7221 */ GIM_Try, /*On fail goto*//*Label 372*/ GIMT_Encode4(7232), // Rule ID 254 //
     /*  7226 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule186Enabled),
     /*  7229 */   // Combiner Rule #186: bitfield_extract_from_shr_and; wip_match_opcode 'G_ASHR'
     /*  7229 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner102),
     /*  7232 */ // Label 372: @7232
     /*  7232 */ GIM_Try, /*On fail goto*//*Label 373*/ GIMT_Encode4(7243), // Rule ID 259 //
     /*  7237 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule187Enabled),
     /*  7240 */   // Combiner Rule #187: constant_fold_binop; wip_match_opcode 'G_ASHR'
     /*  7240 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner103),
     /*  7243 */ // Label 373: @7243
     /*  7243 */ GIM_Try, /*On fail goto*//*Label 374*/ GIMT_Encode4(7254), // Rule ID 327 //
     /*  7248 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule204Enabled),
     /*  7251 */   // Combiner Rule #204: fold_binop_into_select; wip_match_opcode 'G_ASHR'
     /*  7251 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
     /*  7254 */ // Label 374: @7254
     /*  7254 */ GIM_Try, /*On fail goto*//*Label 375*/ GIMT_Encode4(7343), // Rule ID 433 //
     /*  7259 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule264Enabled),
     /*  7262 */   // MIs[0] dst
     /*  7262 */   // No operand predicates
     /*  7262 */   // MIs[0] sum
     /*  7262 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  7266 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ADD),
     /*  7270 */   // MIs[1] inner
     /*  7270 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/1, // MIs[2]
     /*  7274 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_ADD),
     /*  7278 */   // MIs[2] ext1
     /*  7278 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/3, /*MI*/2, /*OpIdx*/1, // MIs[3]
     /*  7282 */   GIM_CheckOpcode, /*MI*/3, GIMT_Encode2(TargetOpcode::G_SEXT),
     /*  7286 */   // MIs[3] x
     /*  7286 */   GIM_RecordRegType, /*MI*/3, /*Op*/1, /*TempTypeIdx*/255,
     /*  7290 */   // MIs[2] ext2
     /*  7290 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/4, /*MI*/2, /*OpIdx*/2, // MIs[4]
     /*  7294 */   GIM_CheckOpcode, /*MI*/4, GIMT_Encode2(TargetOpcode::G_SEXT),
     /*  7298 */   // MIs[4] y
     /*  7298 */   // No operand predicates
     /*  7298 */   // MIs[1] Operand 2
     /*  7298 */   GIM_CheckConstantInt8, /*MI*/1, /*Op*/2, 1,
     /*  7302 */   // MIs[0] Operand 2
     /*  7302 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 1,
     /*  7306 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner23),
     /*  7310 */   GIM_CheckIsSafeToFold, /*NumInsns*/4,
     /*  7312 */   GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/255,
     /*  7315 */   // Combiner Rule #264: avgceil_s_match
     /*  7315 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SAVGCEIL),
     /*  7318 */   GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/GIMT_Encode2(static_cast<uint16_t>(RegState::Define)),
     /*  7323 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/3, /*OpIdx*/1, // x
     /*  7327 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/4, /*OpIdx*/1, // y
     /*  7331 */   GIR_BuildMI, /*InsnID*/1, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SEXT),
     /*  7335 */   GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/0, /*OpIdx*/0, // dst
     /*  7339 */   GIR_AddSimpleTempRegister, /*InsnID*/1, /*TempRegID*/0,
     /*  7342 */   GIR_EraseRootFromParent_Done,
     /*  7343 */ // Label 375: @7343
     /*  7343 */ GIM_Try, /*On fail goto*//*Label 376*/ GIMT_Encode4(7420), // Rule ID 431 //
     /*  7348 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule262Enabled),
     /*  7351 */   // MIs[0] dst
     /*  7351 */   // No operand predicates
     /*  7351 */   // MIs[0] sum
     /*  7351 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  7355 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ADD),
     /*  7359 */   // MIs[1] ext1
     /*  7359 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/1, // MIs[2]
     /*  7363 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_SEXT),
     /*  7367 */   // MIs[2] x
     /*  7367 */   GIM_RecordRegType, /*MI*/2, /*Op*/1, /*TempTypeIdx*/255,
     /*  7371 */   // MIs[1] ext2
     /*  7371 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/3, /*MI*/1, /*OpIdx*/2, // MIs[3]
     /*  7375 */   GIM_CheckOpcode, /*MI*/3, GIMT_Encode2(TargetOpcode::G_SEXT),
     /*  7379 */   // MIs[3] y
     /*  7379 */   // No operand predicates
     /*  7379 */   // MIs[0] Operand 2
     /*  7379 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 1,
     /*  7383 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner21),
     /*  7387 */   GIM_CheckIsSafeToFold, /*NumInsns*/3,
     /*  7389 */   GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/255,
     /*  7392 */   // Combiner Rule #262: avgfloor_s_match
     /*  7392 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SAVGFLOOR),
     /*  7395 */   GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/GIMT_Encode2(static_cast<uint16_t>(RegState::Define)),
     /*  7400 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // x
     /*  7404 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/3, /*OpIdx*/1, // y
     /*  7408 */   GIR_BuildMI, /*InsnID*/1, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SEXT),
     /*  7412 */   GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/0, /*OpIdx*/0, // dst
     /*  7416 */   GIR_AddSimpleTempRegister, /*InsnID*/1, /*TempRegID*/0,
     /*  7419 */   GIR_EraseRootFromParent_Done,
     /*  7420 */ // Label 376: @7420
     /*  7420 */ GIM_Try, /*On fail goto*//*Label 377*/ GIMT_Encode4(7460), // Rule ID 126 //
     /*  7425 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule93Enabled),
     /*  7428 */   // MIs[0] dst
     /*  7428 */   // No operand predicates
     /*  7428 */   // MIs[0] zero
     /*  7428 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  7432 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /*  7436 */   // MIs[1] Operand 1
     /*  7436 */   GIM_CheckLiteralInt, /*MI*/1, /*Op*/1, GIMT_Encode8(0),
     /*  7447 */   // MIs[0] rhs
     /*  7447 */   // No operand predicates
     /*  7447 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  7452 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  7454 */   // Combiner Rule #93: binop_left_to_zero @ [__binop_left_to_zero_match_0[2]]
     /*  7454 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  7459 */   GIR_EraseRootFromParent_Done,
     /*  7460 */ // Label 377: @7460
     /*  7460 */ GIM_Try, /*On fail goto*//*Label 378*/ GIMT_Encode4(7483), // Rule ID 115 //
     /*  7465 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule90Enabled),
     /*  7468 */   // MIs[0] dst
     /*  7468 */   // No operand predicates
     /*  7468 */   // MIs[0] lhs
     /*  7468 */   // No operand predicates
     /*  7468 */   // MIs[0] Operand 2
     /*  7468 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /*  7472 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  7477 */   // Combiner Rule #90: right_identity_zero @ [__right_identity_zero_match_0[5]]
     /*  7477 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  7482 */   GIR_EraseRootFromParent_Done,
     /*  7483 */ // Label 378: @7483
     /*  7483 */ GIM_Try, /*On fail goto*//*Label 379*/ GIMT_Encode4(7494), // Rule ID 157 //
     /*  7488 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule114Enabled),
     /*  7491 */   // MIs[0] root
     /*  7491 */   // No operand predicates
     /*  7491 */   // MIs[0] mi.shifted
     /*  7491 */   // No operand predicates
     /*  7491 */   // MIs[0] mi.amt
     /*  7491 */   // No operand predicates
     /*  7491 */   // Combiner Rule #114: shifts_too_big @ [mi[1]]
     /*  7491 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner55),
     /*  7494 */ // Label 379: @7494
     /*  7494 */ GIM_Reject,
     /*  7495 */ // Label 38: @7495
     /*  7495 */ GIM_Try, /*On fail goto*//*Label 380*/ GIMT_Encode4(7506), // Rule ID 237 //
     /*  7500 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule174Enabled),
     /*  7503 */   // Combiner Rule #174: funnel_shift_to_rotate; wip_match_opcode 'G_FSHL'
     /*  7503 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner96),
     /*  7506 */ // Label 380: @7506
     /*  7506 */ GIM_Try, /*On fail goto*//*Label 381*/ GIMT_Encode4(7517), // Rule ID 241 //
     /*  7511 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule177Enabled),
     /*  7514 */   // Combiner Rule #177: funnel_shift_overshift; wip_match_opcode 'G_FSHL'
     /*  7514 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner97),
     /*  7517 */ // Label 381: @7517
     /*  7517 */ GIM_Try, /*On fail goto*//*Label 382*/ GIMT_Encode4(7537), // Rule ID 240 //
     /*  7522 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule176Enabled),
     /*  7525 */   // MIs[0] x
     /*  7525 */   // No operand predicates
     /*  7525 */   // MIs[0] y
     /*  7525 */   // No operand predicates
     /*  7525 */   // MIs[0] z
     /*  7525 */   // No operand predicates
     /*  7525 */   // MIs[0] Operand 3
     /*  7525 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/3, 0,
     /*  7529 */   // Combiner Rule #176: funnel_shift_left_zero
     /*  7529 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::COPY),
     /*  7532 */   GIR_RootToRootCopy, /*OpIdx*/0, // x
     /*  7534 */   GIR_RootToRootCopy, /*OpIdx*/1, // y
     /*  7536 */   GIR_EraseRootFromParent_Done,
     /*  7537 */ // Label 382: @7537
     /*  7537 */ GIM_Reject,
     /*  7538 */ // Label 39: @7538
     /*  7538 */ GIM_Try, /*On fail goto*//*Label 383*/ GIMT_Encode4(7549), // Rule ID 238 //
     /*  7543 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule174Enabled),
     /*  7546 */   // Combiner Rule #174: funnel_shift_to_rotate; wip_match_opcode 'G_FSHR'
     /*  7546 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner96),
     /*  7549 */ // Label 383: @7549
     /*  7549 */ GIM_Try, /*On fail goto*//*Label 384*/ GIMT_Encode4(7560), // Rule ID 242 //
     /*  7554 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule177Enabled),
     /*  7557 */   // Combiner Rule #177: funnel_shift_overshift; wip_match_opcode 'G_FSHR'
     /*  7557 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner97),
     /*  7560 */ // Label 384: @7560
     /*  7560 */ GIM_Try, /*On fail goto*//*Label 385*/ GIMT_Encode4(7580), // Rule ID 239 //
     /*  7565 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule175Enabled),
     /*  7568 */   // MIs[0] x
     /*  7568 */   // No operand predicates
     /*  7568 */   // MIs[0] y
     /*  7568 */   // No operand predicates
     /*  7568 */   // MIs[0] z
     /*  7568 */   // No operand predicates
     /*  7568 */   // MIs[0] Operand 3
     /*  7568 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/3, 0,
     /*  7572 */   // Combiner Rule #175: funnel_shift_right_zero
     /*  7572 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::COPY),
     /*  7575 */   GIR_RootToRootCopy, /*OpIdx*/0, // x
     /*  7577 */   GIR_RootToRootCopy, /*OpIdx*/2, // z
     /*  7579 */   GIR_EraseRootFromParent_Done,
     /*  7580 */ // Label 385: @7580
     /*  7580 */ GIM_Reject,
     /*  7581 */ // Label 40: @7581
     /*  7581 */ GIM_Try, /*On fail goto*//*Label 386*/ GIMT_Encode4(7604), // Rule ID 119 //
     /*  7586 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule90Enabled),
     /*  7589 */   // MIs[0] dst
     /*  7589 */   // No operand predicates
     /*  7589 */   // MIs[0] lhs
     /*  7589 */   // No operand predicates
     /*  7589 */   // MIs[0] Operand 2
     /*  7589 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /*  7593 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  7598 */   // Combiner Rule #90: right_identity_zero @ [__right_identity_zero_match_0[9]]
     /*  7598 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  7603 */   GIR_EraseRootFromParent_Done,
     /*  7604 */ // Label 386: @7604
     /*  7604 */ GIM_Reject,
     /*  7605 */ // Label 41: @7605
     /*  7605 */ GIM_Try, /*On fail goto*//*Label 387*/ GIMT_Encode4(7628), // Rule ID 118 //
     /*  7610 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule90Enabled),
     /*  7613 */   // MIs[0] dst
     /*  7613 */   // No operand predicates
     /*  7613 */   // MIs[0] lhs
     /*  7613 */   // No operand predicates
     /*  7613 */   // MIs[0] Operand 2
     /*  7613 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /*  7617 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  7622 */   // Combiner Rule #90: right_identity_zero @ [__right_identity_zero_match_0[8]]
     /*  7622 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  7627 */   GIR_EraseRootFromParent_Done,
     /*  7628 */ // Label 387: @7628
     /*  7628 */ GIM_Reject,
     /*  7629 */ // Label 42: @7629
     /*  7629 */ GIM_Try, /*On fail goto*//*Label 388*/ GIMT_Encode4(7640), // Rule ID 164 //
     /*  7634 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule120Enabled),
     /*  7637 */   // Combiner Rule #120: icmp_to_true_false_known_bits; wip_match_opcode 'G_ICMP'
     /*  7637 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner61),
     /*  7640 */ // Label 388: @7640
     /*  7640 */ GIM_Try, /*On fail goto*//*Label 389*/ GIMT_Encode4(7651), // Rule ID 165 //
     /*  7645 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule121Enabled),
     /*  7648 */   // Combiner Rule #121: icmp_to_lhs_known_bits; wip_match_opcode 'G_ICMP'
     /*  7648 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner62),
     /*  7651 */ // Label 389: @7651
     /*  7651 */ GIM_Try, /*On fail goto*//*Label 390*/ GIMT_Encode4(7662), // Rule ID 168 //
     /*  7656 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule124Enabled),
     /*  7659 */   // Combiner Rule #124: redundant_binop_in_equality; wip_match_opcode 'G_ICMP'
     /*  7659 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner63),
     /*  7662 */ // Label 390: @7662
     /*  7662 */ GIM_Try, /*On fail goto*//*Label 391*/ GIMT_Encode4(7673), // Rule ID 162 //
     /*  7667 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule118Enabled),
     /*  7670 */   // MIs[0] root
     /*  7670 */   // No operand predicates
     /*  7670 */   // MIs[0] pred
     /*  7670 */   // No operand predicates
     /*  7670 */   // MIs[0] lhs
     /*  7670 */   // No operand predicates
     /*  7670 */   // MIs[0] rhs
     /*  7670 */   // No operand predicates
     /*  7670 */   // Combiner Rule #118: canonicalize_icmp
     /*  7670 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner59),
     /*  7673 */ // Label 391: @7673
     /*  7673 */ GIM_Try, /*On fail goto*//*Label 392*/ GIMT_Encode4(7684), // Rule ID 440 //
     /*  7678 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule268Enabled),
     /*  7681 */   // MIs[0] dst
     /*  7681 */   // No operand predicates
     /*  7681 */   // MIs[0] tst
     /*  7681 */   // No operand predicates
     /*  7681 */   // MIs[0] src1
     /*  7681 */   // No operand predicates
     /*  7681 */   // MIs[0] src2
     /*  7681 */   // No operand predicates
     /*  7681 */   // Combiner Rule #268: icmp_redundant_trunc
     /*  7681 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner160),
     /*  7684 */ // Label 392: @7684
     /*  7684 */ GIM_Reject,
     /*  7685 */ // Label 43: @7685
     /*  7685 */ GIM_Try, /*On fail goto*//*Label 393*/ GIMT_Encode4(7696), // Rule ID 163 //
     /*  7690 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule119Enabled),
     /*  7693 */   // MIs[0] root
     /*  7693 */   // No operand predicates
     /*  7693 */   // MIs[0] pred
     /*  7693 */   // No operand predicates
     /*  7693 */   // MIs[0] lhs
     /*  7693 */   // No operand predicates
     /*  7693 */   // MIs[0] rhs
     /*  7693 */   // No operand predicates
     /*  7693 */   // Combiner Rule #119: canonicalize_fcmp
     /*  7693 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner60),
     /*  7696 */ // Label 393: @7696
     /*  7696 */ GIM_Reject,
     /*  7697 */ // Label 44: @7697
     /*  7697 */ GIM_Try, /*On fail goto*//*Label 394*/ GIMT_Encode4(7708), // Rule ID 109 //
     /*  7702 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule89Enabled),
     /*  7705 */   // Combiner Rule #89: select_same_val; wip_match_opcode 'G_SELECT'
     /*  7705 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner44),
     /*  7708 */ // Label 394: @7708
     /*  7708 */ GIM_Try, /*On fail goto*//*Label 395*/ GIMT_Encode4(7719), // Rule ID 175 //
     /*  7713 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule131Enabled),
     /*  7716 */   // Combiner Rule #131: select_constant_cmp; wip_match_opcode 'G_SELECT'
     /*  7716 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner68),
     /*  7719 */ // Label 395: @7719
     /*  7719 */ GIM_Try, /*On fail goto*//*Label 396*/ GIMT_Encode4(7730), // Rule ID 177 //
     /*  7724 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule133Enabled),
     /*  7727 */   // Combiner Rule #133: match_selects; wip_match_opcode 'G_SELECT'
     /*  7727 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner70),
     /*  7730 */ // Label 396: @7730
     /*  7730 */ GIM_Try, /*On fail goto*//*Label 397*/ GIMT_Encode4(7741), // Rule ID 351 //
     /*  7735 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule214Enabled),
     /*  7738 */   // Combiner Rule #214: select_to_minmax; wip_match_opcode 'G_SELECT'
     /*  7738 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner127),
     /*  7741 */ // Label 397: @7741
     /*  7741 */ GIM_Try, /*On fail goto*//*Label 398*/ GIMT_Encode4(7821), // Rule ID 438 //
     /*  7746 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule266Enabled),
     /*  7749 */   // MIs[0] dst
     /*  7749 */   GIM_RecordRegType, /*MI*/0, /*Op*/0, /*TempTypeIdx*/255,
     /*  7753 */   // MIs[0] c
     /*  7753 */   // No operand predicates
     /*  7753 */   // MIs[0] Operand 2
     /*  7753 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /*  7757 */   // MIs[0] x
     /*  7757 */   // No operand predicates
     /*  7757 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner12),
     /*  7761 */   GIR_MakeTempReg, /*TempRegID*/2, /*TypeID*/255,
     /*  7764 */   GIR_MakeTempReg, /*TempRegID*/1, /*TypeID*/255,
     /*  7767 */   GIR_BuildConstant, /*TempRegID*/1, /*Val*/GIMT_Encode8(18446744073709551615u),
     /*  7777 */   GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/255,
     /*  7780 */   // Combiner Rule #266: select_zero_true
     /*  7780 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_XOR),
     /*  7783 */   GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/GIMT_Encode2(static_cast<uint16_t>(RegState::Define)),
     /*  7788 */   GIR_RootToRootCopy, /*OpIdx*/1, // c
     /*  7790 */   GIR_AddSimpleTempRegister, /*InsnID*/0, /*TempRegID*/1,
     /*  7793 */   GIR_BuildMI, /*InsnID*/1, /*Opcode*/GIMT_Encode2(TargetOpcode::G_FREEZE),
     /*  7797 */   GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/2, /*TempRegFlags*/GIMT_Encode2(static_cast<uint16_t>(RegState::Define)),
     /*  7802 */   GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/0, /*OpIdx*/3, // x
     /*  7806 */   GIR_BuildMI, /*InsnID*/2, /*Opcode*/GIMT_Encode2(TargetOpcode::G_AND),
     /*  7810 */   GIR_Copy, /*NewInsnID*/2, /*OldInsnID*/0, /*OpIdx*/0, // dst
     /*  7814 */   GIR_AddSimpleTempRegister, /*InsnID*/2, /*TempRegID*/0,
     /*  7817 */   GIR_AddSimpleTempRegister, /*InsnID*/2, /*TempRegID*/2,
     /*  7820 */   GIR_EraseRootFromParent_Done,
     /*  7821 */ // Label 398: @7821
     /*  7821 */ GIM_Try, /*On fail goto*//*Label 399*/ GIMT_Encode4(7870), // Rule ID 178 //
     /*  7826 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule134Enabled),
     /*  7829 */   // MIs[0] dst
     /*  7829 */   GIM_RecordRegType, /*MI*/0, /*Op*/0, /*TempTypeIdx*/255,
     /*  7833 */   // MIs[0] c
     /*  7833 */   // No operand predicates
     /*  7833 */   // MIs[0] x
     /*  7833 */   // No operand predicates
     /*  7833 */   // MIs[0] Operand 3
     /*  7833 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/3, 0,
     /*  7837 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner12),
     /*  7841 */   GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/255,
     /*  7844 */   // Combiner Rule #134: select_zero_false
     /*  7844 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_FREEZE),
     /*  7847 */   GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/GIMT_Encode2(static_cast<uint16_t>(RegState::Define)),
     /*  7852 */   GIR_RootToRootCopy, /*OpIdx*/2, // x
     /*  7854 */   GIR_BuildMI, /*InsnID*/1, /*Opcode*/GIMT_Encode2(TargetOpcode::G_AND),
     /*  7858 */   GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/0, /*OpIdx*/0, // dst
     /*  7862 */   GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/0, /*OpIdx*/1, // c
     /*  7866 */   GIR_AddSimpleTempRegister, /*InsnID*/1, /*TempRegID*/0,
     /*  7869 */   GIR_EraseRootFromParent_Done,
     /*  7870 */ // Label 399: @7870
     /*  7870 */ GIM_Try, /*On fail goto*//*Label 400*/ GIMT_Encode4(7891), // Rule ID 176 //
     /*  7875 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule132Enabled),
     /*  7878 */   // MIs[0] root
     /*  7878 */   // No operand predicates
     /*  7878 */   // MIs[0] tst
     /*  7878 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  7882 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ICMP),
     /*  7886 */   // MIs[1] tst1
     /*  7886 */   // No operand predicates
     /*  7886 */   // MIs[1] a
     /*  7886 */   // No operand predicates
     /*  7886 */   // MIs[1] b
     /*  7886 */   // No operand predicates
     /*  7886 */   // MIs[0] x
     /*  7886 */   // No operand predicates
     /*  7886 */   // MIs[0] y
     /*  7886 */   // No operand predicates
     /*  7886 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  7888 */   // Combiner Rule #132: select_to_iminmax
     /*  7888 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner69),
     /*  7891 */ // Label 400: @7891
     /*  7891 */ GIM_Try, /*On fail goto*//*Label 401*/ GIMT_Encode4(7927), // Rule ID 179 //
     /*  7896 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule135Enabled),
     /*  7899 */   // MIs[0] dst
     /*  7899 */   // No operand predicates
     /*  7899 */   // MIs[0] c
     /*  7899 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  7903 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_XOR),
     /*  7907 */   // MIs[1] src
     /*  7907 */   // No operand predicates
     /*  7907 */   // MIs[1] Operand 2
     /*  7907 */   GIM_CheckConstantInt8, /*MI*/1, /*Op*/2, 255,
     /*  7911 */   // MIs[0] x
     /*  7911 */   // No operand predicates
     /*  7911 */   // MIs[0] y
     /*  7911 */   // No operand predicates
     /*  7911 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  7913 */   // Combiner Rule #135: select_not
     /*  7913 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SELECT),
     /*  7916 */   GIR_RootToRootCopy, /*OpIdx*/0, // dst
     /*  7918 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
     /*  7922 */   GIR_RootToRootCopy, /*OpIdx*/3, // y
     /*  7924 */   GIR_RootToRootCopy, /*OpIdx*/2, // x
     /*  7926 */   GIR_EraseRootFromParent_Done,
     /*  7927 */ // Label 401: @7927
     /*  7927 */ GIM_Try, /*On fail goto*//*Label 402*/ GIMT_Encode4(7956), // Rule ID 174 //
     /*  7932 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule130Enabled),
     /*  7935 */   // MIs[0] dst
     /*  7935 */   // No operand predicates
     /*  7935 */   // MIs[0] undef
     /*  7935 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  7939 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
     /*  7943 */   // MIs[0] x
     /*  7943 */   // No operand predicates
     /*  7943 */   // MIs[0] y
     /*  7943 */   // No operand predicates
     /*  7943 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/3,
     /*  7948 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  7950 */   // Combiner Rule #130: select_undef_cmp
     /*  7950 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/3,
     /*  7955 */   GIR_EraseRootFromParent_Done,
     /*  7956 */ // Label 402: @7956
     /*  7956 */ GIM_Reject,
     /*  7957 */ // Label 45: @7957
     /*  7957 */ GIM_Try, /*On fail goto*//*Label 403*/ GIMT_Encode4(7968), // Rule ID 362 //
     /*  7962 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule216Enabled),
     /*  7965 */   // Combiner Rule #216: commute_int_constant_to_rhs; wip_match_opcode 'G_UADDO'
     /*  7965 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner129),
     /*  7968 */ // Label 403: @7968
     /*  7968 */ GIM_Try, /*On fail goto*//*Label 404*/ GIMT_Encode4(7979), // Rule ID 410 //
     /*  7973 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule245Enabled),
     /*  7976 */   // Combiner Rule #245: match_addos; wip_match_opcode 'G_UADDO'
     /*  7976 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner152),
     /*  7979 */ // Label 404: @7979
     /*  7979 */ GIM_Try, /*On fail goto*//*Label 405*/ GIMT_Encode4(7990), // Rule ID 450 //
     /*  7984 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule278Enabled),
     /*  7987 */   // MIs[0] dst
     /*  7987 */   // No operand predicates
     /*  7987 */   // MIs[0] carry_out
     /*  7987 */   // No operand predicates
     /*  7987 */   // MIs[0] src1
     /*  7987 */   // No operand predicates
     /*  7987 */   // MIs[0] src2
     /*  7987 */   // No operand predicates
     /*  7987 */   // Combiner Rule #278: simplify_uaddo
     /*  7987 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner165),
     /*  7990 */ // Label 405: @7990
     /*  7990 */ GIM_Reject,
     /*  7991 */ // Label 46: @7991
     /*  7991 */ GIM_Try, /*On fail goto*//*Label 406*/ GIMT_Encode4(8002), // Rule ID 210 //
     /*  7996 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule164Enabled),
     /*  7999 */   // Combiner Rule #164: adde_to_addo; wip_match_opcode 'G_UADDE'
     /*  7999 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner86),
     /*  8002 */ // Label 406: @8002
     /*  8002 */ GIM_Reject,
     /*  8003 */ // Label 47: @8003
     /*  8003 */ GIM_Try, /*On fail goto*//*Label 407*/ GIMT_Encode4(8014), // Rule ID 412 //
     /*  8008 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule246Enabled),
     /*  8011 */   // Combiner Rule #246: match_subo_no_overflow; wip_match_opcode 'G_USUBO'
     /*  8011 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner153),
     /*  8014 */ // Label 407: @8014
     /*  8014 */ GIM_Reject,
     /*  8015 */ // Label 48: @8015
     /*  8015 */ GIM_Try, /*On fail goto*//*Label 408*/ GIMT_Encode4(8026), // Rule ID 212 //
     /*  8020 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule164Enabled),
     /*  8023 */   // Combiner Rule #164: adde_to_addo; wip_match_opcode 'G_USUBE'
     /*  8023 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner86),
     /*  8026 */ // Label 408: @8026
     /*  8026 */ GIM_Reject,
     /*  8027 */ // Label 49: @8027
     /*  8027 */ GIM_Try, /*On fail goto*//*Label 409*/ GIMT_Encode4(8038), // Rule ID 363 //
     /*  8032 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule216Enabled),
     /*  8035 */   // Combiner Rule #216: commute_int_constant_to_rhs; wip_match_opcode 'G_SADDO'
     /*  8035 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner129),
     /*  8038 */ // Label 409: @8038
     /*  8038 */ GIM_Try, /*On fail goto*//*Label 410*/ GIMT_Encode4(8049), // Rule ID 409 //
     /*  8043 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule245Enabled),
     /*  8046 */   // Combiner Rule #245: match_addos; wip_match_opcode 'G_SADDO'
     /*  8046 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner152),
     /*  8049 */ // Label 410: @8049
     /*  8049 */ GIM_Reject,
     /*  8050 */ // Label 50: @8050
     /*  8050 */ GIM_Try, /*On fail goto*//*Label 411*/ GIMT_Encode4(8061), // Rule ID 211 //
     /*  8055 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule164Enabled),
     /*  8058 */   // Combiner Rule #164: adde_to_addo; wip_match_opcode 'G_SADDE'
     /*  8058 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner86),
     /*  8061 */ // Label 411: @8061
     /*  8061 */ GIM_Reject,
     /*  8062 */ // Label 51: @8062
     /*  8062 */ GIM_Try, /*On fail goto*//*Label 412*/ GIMT_Encode4(8073), // Rule ID 411 //
     /*  8067 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule246Enabled),
     /*  8070 */   // Combiner Rule #246: match_subo_no_overflow; wip_match_opcode 'G_SSUBO'
     /*  8070 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner153),
     /*  8073 */ // Label 412: @8073
     /*  8073 */ GIM_Reject,
     /*  8074 */ // Label 52: @8074
     /*  8074 */ GIM_Try, /*On fail goto*//*Label 413*/ GIMT_Encode4(8085), // Rule ID 213 //
     /*  8079 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule164Enabled),
     /*  8082 */   // Combiner Rule #164: adde_to_addo; wip_match_opcode 'G_SSUBE'
     /*  8082 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner86),
     /*  8085 */ // Label 413: @8085
     /*  8085 */ GIM_Reject,
     /*  8086 */ // Label 53: @8086
     /*  8086 */ GIM_Try, /*On fail goto*//*Label 414*/ GIMT_Encode4(8097), // Rule ID 206 //
     /*  8091 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule162Enabled),
     /*  8094 */   // Combiner Rule #162: mulo_by_2; wip_match_opcode 'G_UMULO'
     /*  8094 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner84),
     /*  8097 */ // Label 414: @8097
     /*  8097 */ GIM_Try, /*On fail goto*//*Label 415*/ GIMT_Encode4(8108), // Rule ID 208 //
     /*  8102 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule163Enabled),
     /*  8105 */   // Combiner Rule #163: mulo_by_0; wip_match_opcode 'G_UMULO'
     /*  8105 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner85),
     /*  8108 */ // Label 415: @8108
     /*  8108 */ GIM_Try, /*On fail goto*//*Label 416*/ GIMT_Encode4(8119), // Rule ID 364 //
     /*  8113 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule216Enabled),
     /*  8116 */   // Combiner Rule #216: commute_int_constant_to_rhs; wip_match_opcode 'G_UMULO'
     /*  8116 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner129),
     /*  8119 */ // Label 416: @8119
     /*  8119 */ GIM_Reject,
     /*  8120 */ // Label 54: @8120
     /*  8120 */ GIM_Try, /*On fail goto*//*Label 417*/ GIMT_Encode4(8131), // Rule ID 207 //
     /*  8125 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule162Enabled),
     /*  8128 */   // Combiner Rule #162: mulo_by_2; wip_match_opcode 'G_SMULO'
     /*  8128 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner84),
     /*  8131 */ // Label 417: @8131
     /*  8131 */ GIM_Try, /*On fail goto*//*Label 418*/ GIMT_Encode4(8142), // Rule ID 209 //
     /*  8136 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule163Enabled),
     /*  8139 */   // Combiner Rule #163: mulo_by_0; wip_match_opcode 'G_SMULO'
     /*  8139 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner85),
     /*  8142 */ // Label 418: @8142
     /*  8142 */ GIM_Try, /*On fail goto*//*Label 419*/ GIMT_Encode4(8153), // Rule ID 365 //
     /*  8147 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule216Enabled),
     /*  8150 */   // Combiner Rule #216: commute_int_constant_to_rhs; wip_match_opcode 'G_SMULO'
     /*  8150 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner129),
     /*  8153 */ // Label 419: @8153
     /*  8153 */ GIM_Reject,
     /*  8154 */ // Label 55: @8154
     /*  8154 */ GIM_Try, /*On fail goto*//*Label 420*/ GIMT_Encode4(8165), // Rule ID 300 //
     /*  8159 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule193Enabled),
     /*  8162 */   // Combiner Rule #193: mulh_to_lshr; wip_match_opcode 'G_UMULH'
     /*  8162 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner108),
     /*  8165 */ // Label 420: @8165
     /*  8165 */ GIM_Try, /*On fail goto*//*Label 421*/ GIMT_Encode4(8176), // Rule ID 366 //
     /*  8170 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule216Enabled),
     /*  8173 */   // Combiner Rule #216: commute_int_constant_to_rhs; wip_match_opcode 'G_UMULH'
     /*  8173 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner129),
     /*  8176 */ // Label 421: @8176
     /*  8176 */ GIM_Reject,
     /*  8177 */ // Label 56: @8177
     /*  8177 */ GIM_Try, /*On fail goto*//*Label 422*/ GIMT_Encode4(8188), // Rule ID 367 //
     /*  8182 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule216Enabled),
     /*  8185 */   // Combiner Rule #216: commute_int_constant_to_rhs; wip_match_opcode 'G_SMULH'
     /*  8185 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner129),
     /*  8188 */ // Label 422: @8188
     /*  8188 */ GIM_Reject,
     /*  8189 */ // Label 57: @8189
     /*  8189 */ GIM_Try, /*On fail goto*//*Label 423*/ GIMT_Encode4(8200), // Rule ID 368 //
     /*  8194 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule216Enabled),
     /*  8197 */   // Combiner Rule #216: commute_int_constant_to_rhs; wip_match_opcode 'G_UADDSAT'
     /*  8197 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner129),
     /*  8200 */ // Label 423: @8200
     /*  8200 */ GIM_Reject,
     /*  8201 */ // Label 58: @8201
     /*  8201 */ GIM_Try, /*On fail goto*//*Label 424*/ GIMT_Encode4(8212), // Rule ID 369 //
     /*  8206 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule216Enabled),
     /*  8209 */   // Combiner Rule #216: commute_int_constant_to_rhs; wip_match_opcode 'G_SADDSAT'
     /*  8209 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner129),
     /*  8212 */ // Label 424: @8212
     /*  8212 */ GIM_Reject,
     /*  8213 */ // Label 59: @8213
     /*  8213 */ GIM_Try, /*On fail goto*//*Label 425*/ GIMT_Encode4(8224), // Rule ID 225 //
     /*  8218 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule169Enabled),
     /*  8221 */   // Combiner Rule #169: shift_immed_chain; wip_match_opcode 'G_USHLSAT'
     /*  8221 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner91),
     /*  8224 */ // Label 425: @8224
     /*  8224 */ GIM_Try, /*On fail goto*//*Label 426*/ GIMT_Encode4(8235), // Rule ID 229 //
     /*  8229 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule170Enabled),
     /*  8232 */   // Combiner Rule #170: shift_of_shifted_logic_chain; wip_match_opcode 'G_USHLSAT'
     /*  8232 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner92),
     /*  8235 */ // Label 426: @8235
     /*  8235 */ GIM_Reject,
     /*  8236 */ // Label 60: @8236
     /*  8236 */ GIM_Try, /*On fail goto*//*Label 427*/ GIMT_Encode4(8247), // Rule ID 224 //
     /*  8241 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule169Enabled),
     /*  8244 */   // Combiner Rule #169: shift_immed_chain; wip_match_opcode 'G_SSHLSAT'
     /*  8244 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner91),
     /*  8247 */ // Label 427: @8247
     /*  8247 */ GIM_Try, /*On fail goto*//*Label 428*/ GIMT_Encode4(8258), // Rule ID 230 //
     /*  8252 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule170Enabled),
     /*  8255 */   // Combiner Rule #170: shift_of_shifted_logic_chain; wip_match_opcode 'G_SSHLSAT'
     /*  8255 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner92),
     /*  8258 */ // Label 428: @8258
     /*  8258 */ GIM_Reject,
     /*  8259 */ // Label 61: @8259
     /*  8259 */ GIM_Try, /*On fail goto*//*Label 429*/ GIMT_Encode4(8270), // Rule ID 370 //
     /*  8264 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule216Enabled),
     /*  8267 */   // Combiner Rule #216: commute_int_constant_to_rhs; wip_match_opcode 'G_SMULFIX'
     /*  8267 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner129),
     /*  8270 */ // Label 429: @8270
     /*  8270 */ GIM_Reject,
     /*  8271 */ // Label 62: @8271
     /*  8271 */ GIM_Try, /*On fail goto*//*Label 430*/ GIMT_Encode4(8282), // Rule ID 371 //
     /*  8276 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule216Enabled),
     /*  8279 */   // Combiner Rule #216: commute_int_constant_to_rhs; wip_match_opcode 'G_UMULFIX'
     /*  8279 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner129),
     /*  8282 */ // Label 430: @8282
     /*  8282 */ GIM_Reject,
     /*  8283 */ // Label 63: @8283
     /*  8283 */ GIM_Try, /*On fail goto*//*Label 431*/ GIMT_Encode4(8294), // Rule ID 372 //
     /*  8288 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule216Enabled),
     /*  8291 */   // Combiner Rule #216: commute_int_constant_to_rhs; wip_match_opcode 'G_SMULFIXSAT'
     /*  8291 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner129),
     /*  8294 */ // Label 431: @8294
     /*  8294 */ GIM_Reject,
     /*  8295 */ // Label 64: @8295
     /*  8295 */ GIM_Try, /*On fail goto*//*Label 432*/ GIMT_Encode4(8306), // Rule ID 373 //
     /*  8300 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule216Enabled),
     /*  8303 */   // Combiner Rule #216: commute_int_constant_to_rhs; wip_match_opcode 'G_UMULFIXSAT'
     /*  8303 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner129),
     /*  8306 */ // Label 432: @8306
     /*  8306 */ GIM_Reject,
     /*  8307 */ // Label 65: @8307
     /*  8307 */ GIM_Try, /*On fail goto*//*Label 433*/ GIMT_Encode4(8318), // Rule ID 301 //
     /*  8312 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule194Enabled),
     /*  8315 */   // Combiner Rule #194: redundant_neg_operands; wip_match_opcode 'G_FADD'
     /*  8315 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner109),
     /*  8318 */ // Label 433: @8318
     /*  8318 */ GIM_Try, /*On fail goto*//*Label 434*/ GIMT_Encode4(8329), // Rule ID 308 //
     /*  8323 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule196Enabled),
     /*  8326 */   // Combiner Rule #196: combine_fadd_fmul_to_fmad_or_fma; wip_match_opcode 'G_FADD'
     /*  8326 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner111),
     /*  8329 */ // Label 434: @8329
     /*  8329 */ GIM_Try, /*On fail goto*//*Label 435*/ GIMT_Encode4(8340), // Rule ID 309 //
     /*  8334 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule197Enabled),
     /*  8337 */   // Combiner Rule #197: combine_fadd_fpext_fmul_to_fmad_or_fma; wip_match_opcode 'G_FADD'
     /*  8337 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner112),
     /*  8340 */ // Label 435: @8340
     /*  8340 */ GIM_Try, /*On fail goto*//*Label 436*/ GIMT_Encode4(8351), // Rule ID 310 //
     /*  8345 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule198Enabled),
     /*  8348 */   // Combiner Rule #198: combine_fadd_fma_fmul_to_fmad_or_fma; wip_match_opcode 'G_FADD'
     /*  8348 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner113),
     /*  8351 */ // Label 436: @8351
     /*  8351 */ GIM_Try, /*On fail goto*//*Label 437*/ GIMT_Encode4(8362), // Rule ID 311 //
     /*  8356 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule199Enabled),
     /*  8359 */   // Combiner Rule #199: combine_fadd_fpext_fma_fmul_to_fmad_or_fma; wip_match_opcode 'G_FADD'
     /*  8359 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner114),
     /*  8362 */ // Label 437: @8362
     /*  8362 */ GIM_Try, /*On fail goto*//*Label 438*/ GIMT_Encode4(8373), // Rule ID 334 //
     /*  8367 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule204Enabled),
     /*  8370 */   // Combiner Rule #204: fold_binop_into_select; wip_match_opcode 'G_FADD'
     /*  8370 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
     /*  8373 */ // Label 438: @8373
     /*  8373 */ GIM_Try, /*On fail goto*//*Label 439*/ GIMT_Encode4(8384), // Rule ID 374 //
     /*  8378 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule217Enabled),
     /*  8381 */   // Combiner Rule #217: commute_fp_constant_to_rhs; wip_match_opcode 'G_FADD'
     /*  8381 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner130),
     /*  8384 */ // Label 439: @8384
     /*  8384 */ GIM_Try, /*On fail goto*//*Label 440*/ GIMT_Encode4(8407), // Rule ID 148 //
     /*  8389 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule108Enabled),
     /*  8392 */   // MIs[0] dst
     /*  8392 */   // No operand predicates
     /*  8392 */   // MIs[0] x
     /*  8392 */   // No operand predicates
     /*  8392 */   // MIs[0] y
     /*  8392 */   // No operand predicates
     /*  8392 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner6),
     /*  8396 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  8401 */   // Combiner Rule #108: right_identity_neg_zero_fp
     /*  8401 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  8406 */   GIR_EraseRootFromParent_Done,
     /*  8407 */ // Label 440: @8407
     /*  8407 */ GIM_Try, /*On fail goto*//*Label 441*/ GIMT_Encode4(8436), // Rule ID 149 //
     /*  8412 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule109Enabled),
     /*  8415 */   GIM_MIFlags, /*MI*/0, GIMT_Encode4(MachineInstr::FmNsz),
     /*  8421 */   // MIs[0] dst
     /*  8421 */   // No operand predicates
     /*  8421 */   // MIs[0] x
     /*  8421 */   // No operand predicates
     /*  8421 */   // MIs[0] y
     /*  8421 */   // No operand predicates
     /*  8421 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner7),
     /*  8425 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  8430 */   // Combiner Rule #109: right_identity_neg_zero_fp_nsz
     /*  8430 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  8435 */   GIR_EraseRootFromParent_Done,
     /*  8436 */ // Label 441: @8436
     /*  8436 */ GIM_Try, /*On fail goto*//*Label 442*/ GIMT_Encode4(8447), // Rule ID 274 //
     /*  8441 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule188Enabled),
     /*  8444 */   // MIs[0] d
     /*  8444 */   // No operand predicates
     /*  8444 */   // MIs[0] mi.src0
     /*  8444 */   // No operand predicates
     /*  8444 */   // MIs[0] mi.src1
     /*  8444 */   // No operand predicates
     /*  8444 */   // Combiner Rule #188: constant_fold_fp_binop @ [mi[0]]
     /*  8444 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner104),
     /*  8447 */ // Label 442: @8447
     /*  8447 */ GIM_Reject,
     /*  8448 */ // Label 66: @8448
     /*  8448 */ GIM_Try, /*On fail goto*//*Label 443*/ GIMT_Encode4(8459), // Rule ID 302 //
     /*  8453 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule194Enabled),
     /*  8456 */   // Combiner Rule #194: redundant_neg_operands; wip_match_opcode 'G_FSUB'
     /*  8456 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner109),
     /*  8459 */ // Label 443: @8459
     /*  8459 */ GIM_Try, /*On fail goto*//*Label 444*/ GIMT_Encode4(8470), // Rule ID 312 //
     /*  8464 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule200Enabled),
     /*  8467 */   // Combiner Rule #200: combine_fsub_fmul_to_fmad_or_fma; wip_match_opcode 'G_FSUB'
     /*  8467 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner115),
     /*  8470 */ // Label 444: @8470
     /*  8470 */ GIM_Try, /*On fail goto*//*Label 445*/ GIMT_Encode4(8481), // Rule ID 313 //
     /*  8475 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule201Enabled),
     /*  8478 */   // Combiner Rule #201: combine_fsub_fneg_fmul_to_fmad_or_fma; wip_match_opcode 'G_FSUB'
     /*  8478 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner116),
     /*  8481 */ // Label 445: @8481
     /*  8481 */ GIM_Try, /*On fail goto*//*Label 446*/ GIMT_Encode4(8492), // Rule ID 314 //
     /*  8486 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule202Enabled),
     /*  8489 */   // Combiner Rule #202: combine_fsub_fpext_fmul_to_fmad_or_fma; wip_match_opcode 'G_FSUB'
     /*  8489 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner117),
     /*  8492 */ // Label 446: @8492
     /*  8492 */ GIM_Try, /*On fail goto*//*Label 447*/ GIMT_Encode4(8503), // Rule ID 315 //
     /*  8497 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule203Enabled),
     /*  8500 */   // Combiner Rule #203: combine_fsub_fpext_fneg_fmul_to_fmad_or_fma; wip_match_opcode 'G_FSUB'
     /*  8500 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner118),
     /*  8503 */ // Label 447: @8503
     /*  8503 */ GIM_Try, /*On fail goto*//*Label 448*/ GIMT_Encode4(8514), // Rule ID 335 //
     /*  8508 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule204Enabled),
     /*  8511 */   // Combiner Rule #204: fold_binop_into_select; wip_match_opcode 'G_FSUB'
     /*  8511 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
     /*  8514 */ // Label 448: @8514
     /*  8514 */ GIM_Try, /*On fail goto*//*Label 449*/ GIMT_Encode4(8525), // Rule ID 352 //
     /*  8519 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule215Enabled),
     /*  8522 */   // Combiner Rule #215: fsub_to_fneg; wip_match_opcode 'G_FSUB'
     /*  8522 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner128),
     /*  8525 */ // Label 449: @8525
     /*  8525 */ GIM_Try, /*On fail goto*//*Label 450*/ GIMT_Encode4(8536), // Rule ID 275 //
     /*  8530 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule188Enabled),
     /*  8533 */   // MIs[0] d
     /*  8533 */   // No operand predicates
     /*  8533 */   // MIs[0] mi.src0
     /*  8533 */   // No operand predicates
     /*  8533 */   // MIs[0] mi.src1
     /*  8533 */   // No operand predicates
     /*  8533 */   // Combiner Rule #188: constant_fold_fp_binop @ [mi[1]]
     /*  8533 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner104),
     /*  8536 */ // Label 450: @8536
     /*  8536 */ GIM_Reject,
     /*  8537 */ // Label 67: @8537
     /*  8537 */ GIM_Try, /*On fail goto*//*Label 451*/ GIMT_Encode4(8548), // Rule ID 303 //
     /*  8542 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule194Enabled),
     /*  8545 */   // Combiner Rule #194: redundant_neg_operands; wip_match_opcode 'G_FMUL'
     /*  8545 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner109),
     /*  8548 */ // Label 451: @8548
     /*  8548 */ GIM_Try, /*On fail goto*//*Label 452*/ GIMT_Encode4(8559), // Rule ID 333 //
     /*  8553 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule204Enabled),
     /*  8556 */   // Combiner Rule #204: fold_binop_into_select; wip_match_opcode 'G_FMUL'
     /*  8556 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
     /*  8559 */ // Label 452: @8559
     /*  8559 */ GIM_Try, /*On fail goto*//*Label 453*/ GIMT_Encode4(8570), // Rule ID 375 //
     /*  8564 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule217Enabled),
     /*  8567 */   // Combiner Rule #217: commute_fp_constant_to_rhs; wip_match_opcode 'G_FMUL'
     /*  8567 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner130),
     /*  8570 */ // Label 453: @8570
     /*  8570 */ GIM_Try, /*On fail goto*//*Label 454*/ GIMT_Encode4(8593), // Rule ID 138 //
     /*  8575 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule100Enabled),
     /*  8578 */   // MIs[0] dst
     /*  8578 */   // No operand predicates
     /*  8578 */   // MIs[0] x
     /*  8578 */   // No operand predicates
     /*  8578 */   // MIs[0] y
     /*  8578 */   // No operand predicates
     /*  8578 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner4),
     /*  8582 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  8587 */   // Combiner Rule #100: right_identity_one_fp
     /*  8587 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  8592 */   GIR_EraseRootFromParent_Done,
     /*  8593 */ // Label 454: @8593
     /*  8593 */ GIM_Try, /*On fail goto*//*Label 455*/ GIMT_Encode4(8613), // Rule ID 150 //
     /*  8598 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule110Enabled),
     /*  8601 */   // MIs[0] dst
     /*  8601 */   // No operand predicates
     /*  8601 */   // MIs[0] x
     /*  8601 */   // No operand predicates
     /*  8601 */   // MIs[0] y
     /*  8601 */   // No operand predicates
     /*  8601 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner8),
     /*  8605 */   // Combiner Rule #110: right_identity_neg_one_fp
     /*  8605 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_FNEG),
     /*  8608 */   GIR_RootToRootCopy, /*OpIdx*/0, // dst
     /*  8610 */   GIR_RootToRootCopy, /*OpIdx*/1, // x
     /*  8612 */   GIR_EraseRootFromParent_Done,
     /*  8613 */ // Label 455: @8613
     /*  8613 */ GIM_Try, /*On fail goto*//*Label 456*/ GIMT_Encode4(8624), // Rule ID 276 //
     /*  8618 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule188Enabled),
     /*  8621 */   // MIs[0] d
     /*  8621 */   // No operand predicates
     /*  8621 */   // MIs[0] mi.src0
     /*  8621 */   // No operand predicates
     /*  8621 */   // MIs[0] mi.src1
     /*  8621 */   // No operand predicates
     /*  8621 */   // Combiner Rule #188: constant_fold_fp_binop @ [mi[2]]
     /*  8621 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner104),
     /*  8624 */ // Label 456: @8624
     /*  8624 */ GIM_Reject,
     /*  8625 */ // Label 68: @8625
     /*  8625 */ GIM_Try, /*On fail goto*//*Label 457*/ GIMT_Encode4(8636), // Rule ID 287 //
     /*  8630 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule189Enabled),
     /*  8633 */   // Combiner Rule #189: constant_fold_fma; wip_match_opcode 'G_FMA'
     /*  8633 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner105),
     /*  8636 */ // Label 457: @8636
     /*  8636 */ GIM_Try, /*On fail goto*//*Label 458*/ GIMT_Encode4(8647), // Rule ID 306 //
     /*  8641 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule194Enabled),
     /*  8644 */   // Combiner Rule #194: redundant_neg_operands; wip_match_opcode 'G_FMA'
     /*  8644 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner109),
     /*  8647 */ // Label 458: @8647
     /*  8647 */ GIM_Reject,
     /*  8648 */ // Label 69: @8648
     /*  8648 */ GIM_Try, /*On fail goto*//*Label 459*/ GIMT_Encode4(8659), // Rule ID 286 //
     /*  8653 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule189Enabled),
     /*  8656 */   // Combiner Rule #189: constant_fold_fma; wip_match_opcode 'G_FMAD'
     /*  8656 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner105),
     /*  8659 */ // Label 459: @8659
     /*  8659 */ GIM_Try, /*On fail goto*//*Label 460*/ GIMT_Encode4(8670), // Rule ID 305 //
     /*  8664 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule194Enabled),
     /*  8667 */   // Combiner Rule #194: redundant_neg_operands; wip_match_opcode 'G_FMAD'
     /*  8667 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner109),
     /*  8670 */ // Label 460: @8670
     /*  8670 */ GIM_Reject,
     /*  8671 */ // Label 70: @8671
     /*  8671 */ GIM_Try, /*On fail goto*//*Label 461*/ GIMT_Encode4(8682), // Rule ID 304 //
     /*  8676 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule194Enabled),
     /*  8679 */   // Combiner Rule #194: redundant_neg_operands; wip_match_opcode 'G_FDIV'
     /*  8679 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner109),
     /*  8682 */ // Label 461: @8682
     /*  8682 */ GIM_Try, /*On fail goto*//*Label 462*/ GIMT_Encode4(8693), // Rule ID 336 //
     /*  8687 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule204Enabled),
     /*  8690 */   // Combiner Rule #204: fold_binop_into_select; wip_match_opcode 'G_FDIV'
     /*  8690 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
     /*  8693 */ // Label 462: @8693
     /*  8693 */ GIM_Try, /*On fail goto*//*Label 463*/ GIMT_Encode4(8704), // Rule ID 277 //
     /*  8698 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule188Enabled),
     /*  8701 */   // MIs[0] d
     /*  8701 */   // No operand predicates
     /*  8701 */   // MIs[0] mi.src0
     /*  8701 */   // No operand predicates
     /*  8701 */   // MIs[0] mi.src1
     /*  8701 */   // No operand predicates
     /*  8701 */   // Combiner Rule #188: constant_fold_fp_binop @ [mi[3]]
     /*  8701 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner104),
     /*  8704 */ // Label 463: @8704
     /*  8704 */ GIM_Try, /*On fail goto*//*Label 464*/ GIMT_Encode4(8715), // Rule ID 349 //
     /*  8709 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule212Enabled),
     /*  8712 */   // MIs[0] dst
     /*  8712 */   // No operand predicates
     /*  8712 */   // MIs[0] src1
     /*  8712 */   // No operand predicates
     /*  8712 */   // MIs[0] src2
     /*  8712 */   // No operand predicates
     /*  8712 */   // Combiner Rule #212: fdiv_repeated_divison
     /*  8712 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner125),
     /*  8715 */ // Label 464: @8715
     /*  8715 */ GIM_Reject,
     /*  8716 */ // Label 71: @8716
     /*  8716 */ GIM_Try, /*On fail goto*//*Label 465*/ GIMT_Encode4(8727), // Rule ID 337 //
     /*  8721 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule204Enabled),
     /*  8724 */   // Combiner Rule #204: fold_binop_into_select; wip_match_opcode 'G_FREM'
     /*  8724 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
     /*  8727 */ // Label 465: @8727
     /*  8727 */ GIM_Try, /*On fail goto*//*Label 466*/ GIMT_Encode4(8738), // Rule ID 278 //
     /*  8732 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule188Enabled),
     /*  8735 */   // MIs[0] d
     /*  8735 */   // No operand predicates
     /*  8735 */   // MIs[0] mi.src0
     /*  8735 */   // No operand predicates
     /*  8735 */   // MIs[0] mi.src1
     /*  8735 */   // No operand predicates
     /*  8735 */   // Combiner Rule #188: constant_fold_fp_binop @ [mi[4]]
     /*  8735 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner104),
     /*  8738 */ // Label 466: @8738
     /*  8738 */ GIM_Reject,
     /*  8739 */ // Label 72: @8739
     /*  8739 */ GIM_Try, /*On fail goto*//*Label 467*/ GIMT_Encode4(8760), // Rule ID 218 //
     /*  8744 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule166Enabled),
     /*  8747 */   // MIs[0] dst
     /*  8747 */   // No operand predicates
     /*  8747 */   // MIs[0] float
     /*  8747 */   // No operand predicates
     /*  8747 */   // MIs[0] int
     /*  8747 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
     /*  8751 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /*  8755 */   // MIs[1] imm
     /*  8755 */   // No operand predicates
     /*  8755 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  8757 */   // Combiner Rule #166: expand_const_fpowi
     /*  8757 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner88),
     /*  8760 */ // Label 467: @8760
     /*  8760 */ GIM_Reject,
     /*  8761 */ // Label 73: @8761
     /*  8761 */ GIM_Try, /*On fail goto*//*Label 468*/ GIMT_Encode4(8782), // Rule ID 192 //
     /*  8766 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule148Enabled),
     /*  8769 */   // MIs[0] dst
     /*  8769 */   // No operand predicates
     /*  8769 */   // MIs[0] src0
     /*  8769 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  8773 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /*  8777 */   // MIs[1] cst
     /*  8777 */   // No operand predicates
     /*  8777 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  8779 */   // Combiner Rule #148: constant_fold_flog2
     /*  8779 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner80),
     /*  8782 */ // Label 468: @8782
     /*  8782 */ GIM_Reject,
     /*  8783 */ // Label 74: @8783
     /*  8783 */ GIM_Try, /*On fail goto*//*Label 469*/ GIMT_Encode4(8804), // Rule ID 189 //
     /*  8788 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule145Enabled),
     /*  8791 */   // MIs[0] dst
     /*  8791 */   // No operand predicates
     /*  8791 */   // MIs[0] src0
     /*  8791 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  8795 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /*  8799 */   // MIs[1] cst
     /*  8799 */   // No operand predicates
     /*  8799 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  8801 */   // Combiner Rule #145: constant_fold_fneg
     /*  8801 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner80),
     /*  8804 */ // Label 469: @8804
     /*  8804 */ GIM_Try, /*On fail goto*//*Label 470*/ GIMT_Encode4(8833), // Rule ID 136 //
     /*  8809 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule98Enabled),
     /*  8812 */   // MIs[0] dst
     /*  8812 */   // No operand predicates
     /*  8812 */   // MIs[0] t
     /*  8812 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  8816 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FNEG),
     /*  8820 */   // MIs[1] src
     /*  8820 */   // No operand predicates
     /*  8820 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
     /*  8825 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  8827 */   // Combiner Rule #98: fneg_fneg_fold
     /*  8827 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
     /*  8832 */   GIR_EraseRootFromParent_Done,
     /*  8833 */ // Label 470: @8833
     /*  8833 */ GIM_Reject,
     /*  8834 */ // Label 75: @8834
     /*  8834 */ GIM_Try, /*On fail goto*//*Label 471*/ GIMT_Encode4(8855), // Rule ID 194 //
     /*  8839 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule150Enabled),
     /*  8842 */   // MIs[0] dst
     /*  8842 */   // No operand predicates
     /*  8842 */   // MIs[0] src0
     /*  8842 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  8846 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /*  8850 */   // MIs[1] cst
     /*  8850 */   // No operand predicates
     /*  8850 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  8852 */   // Combiner Rule #150: constant_fold_fpext
     /*  8852 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner80),
     /*  8855 */ // Label 471: @8855
     /*  8855 */ GIM_Reject,
     /*  8856 */ // Label 76: @8856
     /*  8856 */ GIM_Try, /*On fail goto*//*Label 472*/ GIMT_Encode4(8877), // Rule ID 193 //
     /*  8861 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule149Enabled),
     /*  8864 */   // MIs[0] dst
     /*  8864 */   // No operand predicates
     /*  8864 */   // MIs[0] src0
     /*  8864 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  8868 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /*  8872 */   // MIs[1] cst
     /*  8872 */   // No operand predicates
     /*  8872 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  8874 */   // Combiner Rule #149: constant_fold_fptrunc
     /*  8874 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner80),
     /*  8877 */ // Label 472: @8877
     /*  8877 */ GIM_Try, /*On fail goto*//*Label 473*/ GIMT_Encode4(8898), // Rule ID 147 //
     /*  8882 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule107Enabled),
     /*  8885 */   // MIs[0] dst
     /*  8885 */   // No operand predicates
     /*  8885 */   // MIs[0] src1
     /*  8885 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  8889 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FPEXT),
     /*  8893 */   // MIs[1] src0
     /*  8893 */   // No operand predicates
     /*  8893 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  8895 */   // Combiner Rule #107: fptrunc_fpext_fold
     /*  8895 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner51),
     /*  8898 */ // Label 473: @8898
     /*  8898 */ GIM_Reject,
     /*  8899 */ // Label 77: @8899
     /*  8899 */ GIM_Try, /*On fail goto*//*Label 474*/ GIMT_Encode4(8920), // Rule ID 98 //
     /*  8904 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule83Enabled),
     /*  8907 */   // MIs[0] dst
     /*  8907 */   // No operand predicates
     /*  8907 */   // MIs[0] __unary_undef_to_undef_match_0.x
     /*  8907 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  8911 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
     /*  8915 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  8917 */   // Combiner Rule #83: unary_undef_to_undef @ [__unary_undef_to_undef_match_0[5]]
     /*  8917 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner38),
     /*  8920 */ // Label 474: @8920
     /*  8920 */ GIM_Reject,
     /*  8921 */ // Label 78: @8921
     /*  8921 */ GIM_Try, /*On fail goto*//*Label 475*/ GIMT_Encode4(8942), // Rule ID 99 //
     /*  8926 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule83Enabled),
     /*  8929 */   // MIs[0] dst
     /*  8929 */   // No operand predicates
     /*  8929 */   // MIs[0] __unary_undef_to_undef_match_0.x
     /*  8929 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  8933 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
     /*  8937 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  8939 */   // Combiner Rule #83: unary_undef_to_undef @ [__unary_undef_to_undef_match_0[6]]
     /*  8939 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner38),
     /*  8942 */ // Label 475: @8942
     /*  8942 */ GIM_Reject,
     /*  8943 */ // Label 79: @8943
     /*  8943 */ GIM_Try, /*On fail goto*//*Label 476*/ GIMT_Encode4(8954), // Rule ID 82 //
     /*  8948 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule77Enabled),
     /*  8951 */   // Combiner Rule #77: undef_to_fp_zero; wip_match_opcode 'G_SITOFP'
     /*  8951 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner33),
     /*  8954 */ // Label 476: @8954
     /*  8954 */ GIM_Try, /*On fail goto*//*Label 477*/ GIMT_Encode4(8969), // Rule ID 202 //
     /*  8959 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule158Enabled),
     /*  8962 */   // MIs[0] dst
     /*  8962 */   // No operand predicates
     /*  8962 */   // MIs[0] Operand 1
     /*  8962 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/1, 0,
     /*  8966 */   // Combiner Rule #158: itof_const_zero_fold_si
     /*  8966 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner81),
     /*  8969 */ // Label 477: @8969
     /*  8969 */ GIM_Reject,
     /*  8970 */ // Label 80: @8970
     /*  8970 */ GIM_Try, /*On fail goto*//*Label 478*/ GIMT_Encode4(8981), // Rule ID 81 //
     /*  8975 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule77Enabled),
     /*  8978 */   // Combiner Rule #77: undef_to_fp_zero; wip_match_opcode 'G_UITOFP'
     /*  8978 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner33),
     /*  8981 */ // Label 478: @8981
     /*  8981 */ GIM_Try, /*On fail goto*//*Label 479*/ GIMT_Encode4(8996), // Rule ID 203 //
     /*  8986 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule159Enabled),
     /*  8989 */   // MIs[0] dst
     /*  8989 */   // No operand predicates
     /*  8989 */   // MIs[0] Operand 1
     /*  8989 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/1, 0,
     /*  8993 */   // Combiner Rule #159: itof_const_zero_fold_ui
     /*  8993 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner81),
     /*  8996 */ // Label 479: @8996
     /*  8996 */ GIM_Reject,
     /*  8997 */ // Label 81: @8997
     /*  8997 */ GIM_Try, /*On fail goto*//*Label 480*/ GIMT_Encode4(9026), // Rule ID 25 //
     /*  9002 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule24Enabled),
     /*  9005 */   // MIs[0] dst
     /*  9005 */   // No operand predicates
     /*  9005 */   // MIs[0] src
     /*  9005 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  9009 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FABS),
     /*  9013 */   // MIs[1] __idempotent_prop_match_0.x
     /*  9013 */   // No operand predicates
     /*  9013 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  9018 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  9020 */   // Combiner Rule #24: idempotent_prop @ [__idempotent_prop_match_0[1]]
     /*  9020 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  9025 */   GIR_EraseRootFromParent_Done,
     /*  9026 */ // Label 480: @9026
     /*  9026 */ GIM_Try, /*On fail goto*//*Label 481*/ GIMT_Encode4(9047), // Rule ID 190 //
     /*  9031 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule146Enabled),
     /*  9034 */   // MIs[0] dst
     /*  9034 */   // No operand predicates
     /*  9034 */   // MIs[0] src0
     /*  9034 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  9038 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /*  9042 */   // MIs[1] cst
     /*  9042 */   // No operand predicates
     /*  9042 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  9044 */   // Combiner Rule #146: constant_fold_fabs
     /*  9044 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner80),
     /*  9047 */ // Label 481: @9047
     /*  9047 */ GIM_Try, /*On fail goto*//*Label 482*/ GIMT_Encode4(9075), // Rule ID 299 //
     /*  9052 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule192Enabled),
     /*  9055 */   // MIs[0] dst
     /*  9055 */   // No operand predicates
     /*  9055 */   // MIs[0] tmp
     /*  9055 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  9059 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FNEG),
     /*  9063 */   // MIs[1] x
     /*  9063 */   // No operand predicates
     /*  9063 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  9065 */   // Combiner Rule #192: fabs_fneg_fold
     /*  9065 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_FABS),
     /*  9068 */   GIR_RootToRootCopy, /*OpIdx*/0, // dst
     /*  9070 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // x
     /*  9074 */   GIR_EraseRootFromParent_Done,
     /*  9075 */ // Label 482: @9075
     /*  9075 */ GIM_Reject,
     /*  9076 */ // Label 82: @9076
     /*  9076 */ GIM_Try, /*On fail goto*//*Label 483*/ GIMT_Encode4(9087), // Rule ID 279 //
     /*  9081 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule188Enabled),
     /*  9084 */   // MIs[0] d
     /*  9084 */   // No operand predicates
     /*  9084 */   // MIs[0] mi.src0
     /*  9084 */   // No operand predicates
     /*  9084 */   // MIs[0] mi.src1
     /*  9084 */   // No operand predicates
     /*  9084 */   // Combiner Rule #188: constant_fold_fp_binop @ [mi[5]]
     /*  9084 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner104),
     /*  9087 */ // Label 483: @9087
     /*  9087 */ GIM_Reject,
     /*  9088 */ // Label 83: @9088
     /*  9088 */ GIM_Try, /*On fail goto*//*Label 484*/ GIMT_Encode4(9117), // Rule ID 26 //
     /*  9093 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule24Enabled),
     /*  9096 */   // MIs[0] dst
     /*  9096 */   // No operand predicates
     /*  9096 */   // MIs[0] src
     /*  9096 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  9100 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCANONICALIZE),
     /*  9104 */   // MIs[1] __idempotent_prop_match_0.x
     /*  9104 */   // No operand predicates
     /*  9104 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  9109 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  9111 */   // Combiner Rule #24: idempotent_prop @ [__idempotent_prop_match_0[2]]
     /*  9111 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  9116 */   GIR_EraseRootFromParent_Done,
     /*  9117 */ // Label 484: @9117
     /*  9117 */ GIM_Reject,
     /*  9118 */ // Label 84: @9118
     /*  9118 */ GIM_Try, /*On fail goto*//*Label 485*/ GIMT_Encode4(9129), // Rule ID 214 //
     /*  9123 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule165Enabled),
     /*  9126 */   // Combiner Rule #165: combine_minmax_nan; wip_match_opcode 'G_FMINNUM'
     /*  9126 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner87),
     /*  9129 */ // Label 485: @9129
     /*  9129 */ GIM_Try, /*On fail goto*//*Label 486*/ GIMT_Encode4(9140), // Rule ID 338 //
     /*  9134 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule204Enabled),
     /*  9137 */   // Combiner Rule #204: fold_binop_into_select; wip_match_opcode 'G_FMINNUM'
     /*  9137 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
     /*  9140 */ // Label 486: @9140
     /*  9140 */ GIM_Try, /*On fail goto*//*Label 487*/ GIMT_Encode4(9151), // Rule ID 376 //
     /*  9145 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule217Enabled),
     /*  9148 */   // Combiner Rule #217: commute_fp_constant_to_rhs; wip_match_opcode 'G_FMINNUM'
     /*  9148 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner130),
     /*  9151 */ // Label 487: @9151
     /*  9151 */ GIM_Try, /*On fail goto*//*Label 488*/ GIMT_Encode4(9162), // Rule ID 280 //
     /*  9156 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule188Enabled),
     /*  9159 */   // MIs[0] d
     /*  9159 */   // No operand predicates
     /*  9159 */   // MIs[0] mi.src0
     /*  9159 */   // No operand predicates
     /*  9159 */   // MIs[0] mi.src1
     /*  9159 */   // No operand predicates
     /*  9159 */   // Combiner Rule #188: constant_fold_fp_binop @ [mi[6]]
     /*  9159 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner104),
     /*  9162 */ // Label 488: @9162
     /*  9162 */ GIM_Reject,
     /*  9163 */ // Label 85: @9163
     /*  9163 */ GIM_Try, /*On fail goto*//*Label 489*/ GIMT_Encode4(9174), // Rule ID 215 //
     /*  9168 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule165Enabled),
     /*  9171 */   // Combiner Rule #165: combine_minmax_nan; wip_match_opcode 'G_FMAXNUM'
     /*  9171 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner87),
     /*  9174 */ // Label 489: @9174
     /*  9174 */ GIM_Try, /*On fail goto*//*Label 490*/ GIMT_Encode4(9185), // Rule ID 339 //
     /*  9179 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule204Enabled),
     /*  9182 */   // Combiner Rule #204: fold_binop_into_select; wip_match_opcode 'G_FMAXNUM'
     /*  9182 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
     /*  9185 */ // Label 490: @9185
     /*  9185 */ GIM_Try, /*On fail goto*//*Label 491*/ GIMT_Encode4(9196), // Rule ID 377 //
     /*  9190 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule217Enabled),
     /*  9193 */   // Combiner Rule #217: commute_fp_constant_to_rhs; wip_match_opcode 'G_FMAXNUM'
     /*  9193 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner130),
     /*  9196 */ // Label 491: @9196
     /*  9196 */ GIM_Try, /*On fail goto*//*Label 492*/ GIMT_Encode4(9207), // Rule ID 281 //
     /*  9201 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule188Enabled),
     /*  9204 */   // MIs[0] d
     /*  9204 */   // No operand predicates
     /*  9204 */   // MIs[0] mi.src0
     /*  9204 */   // No operand predicates
     /*  9204 */   // MIs[0] mi.src1
     /*  9204 */   // No operand predicates
     /*  9204 */   // Combiner Rule #188: constant_fold_fp_binop @ [mi[7]]
     /*  9204 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner104),
     /*  9207 */ // Label 492: @9207
     /*  9207 */ GIM_Reject,
     /*  9208 */ // Label 86: @9208
     /*  9208 */ GIM_Try, /*On fail goto*//*Label 493*/ GIMT_Encode4(9219), // Rule ID 378 //
     /*  9213 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule217Enabled),
     /*  9216 */   // Combiner Rule #217: commute_fp_constant_to_rhs; wip_match_opcode 'G_FMINNUM_IEEE'
     /*  9216 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner130),
     /*  9219 */ // Label 493: @9219
     /*  9219 */ GIM_Reject,
     /*  9220 */ // Label 87: @9220
     /*  9220 */ GIM_Try, /*On fail goto*//*Label 494*/ GIMT_Encode4(9231), // Rule ID 379 //
     /*  9225 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule217Enabled),
     /*  9228 */   // Combiner Rule #217: commute_fp_constant_to_rhs; wip_match_opcode 'G_FMAXNUM_IEEE'
     /*  9228 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner130),
     /*  9231 */ // Label 494: @9231
     /*  9231 */ GIM_Reject,
     /*  9232 */ // Label 88: @9232
     /*  9232 */ GIM_Try, /*On fail goto*//*Label 495*/ GIMT_Encode4(9243), // Rule ID 216 //
     /*  9237 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule165Enabled),
     /*  9240 */   // Combiner Rule #165: combine_minmax_nan; wip_match_opcode 'G_FMINIMUM'
     /*  9240 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner87),
     /*  9243 */ // Label 495: @9243
     /*  9243 */ GIM_Try, /*On fail goto*//*Label 496*/ GIMT_Encode4(9254), // Rule ID 340 //
     /*  9248 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule204Enabled),
     /*  9251 */   // Combiner Rule #204: fold_binop_into_select; wip_match_opcode 'G_FMINIMUM'
     /*  9251 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
     /*  9254 */ // Label 496: @9254
     /*  9254 */ GIM_Try, /*On fail goto*//*Label 497*/ GIMT_Encode4(9265), // Rule ID 380 //
     /*  9259 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule217Enabled),
     /*  9262 */   // Combiner Rule #217: commute_fp_constant_to_rhs; wip_match_opcode 'G_FMINIMUM'
     /*  9262 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner130),
     /*  9265 */ // Label 497: @9265
     /*  9265 */ GIM_Try, /*On fail goto*//*Label 498*/ GIMT_Encode4(9276), // Rule ID 282 //
     /*  9270 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule188Enabled),
     /*  9273 */   // MIs[0] d
     /*  9273 */   // No operand predicates
     /*  9273 */   // MIs[0] mi.src0
     /*  9273 */   // No operand predicates
     /*  9273 */   // MIs[0] mi.src1
     /*  9273 */   // No operand predicates
     /*  9273 */   // Combiner Rule #188: constant_fold_fp_binop @ [mi[8]]
     /*  9273 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner104),
     /*  9276 */ // Label 498: @9276
     /*  9276 */ GIM_Reject,
     /*  9277 */ // Label 89: @9277
     /*  9277 */ GIM_Try, /*On fail goto*//*Label 499*/ GIMT_Encode4(9288), // Rule ID 217 //
     /*  9282 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule165Enabled),
     /*  9285 */   // Combiner Rule #165: combine_minmax_nan; wip_match_opcode 'G_FMAXIMUM'
     /*  9285 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner87),
     /*  9288 */ // Label 499: @9288
     /*  9288 */ GIM_Try, /*On fail goto*//*Label 500*/ GIMT_Encode4(9299), // Rule ID 341 //
     /*  9293 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule204Enabled),
     /*  9296 */   // Combiner Rule #204: fold_binop_into_select; wip_match_opcode 'G_FMAXIMUM'
     /*  9296 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
     /*  9299 */ // Label 500: @9299
     /*  9299 */ GIM_Try, /*On fail goto*//*Label 501*/ GIMT_Encode4(9310), // Rule ID 381 //
     /*  9304 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule217Enabled),
     /*  9307 */   // Combiner Rule #217: commute_fp_constant_to_rhs; wip_match_opcode 'G_FMAXIMUM'
     /*  9307 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner130),
     /*  9310 */ // Label 501: @9310
     /*  9310 */ GIM_Try, /*On fail goto*//*Label 502*/ GIMT_Encode4(9321), // Rule ID 283 //
     /*  9315 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule188Enabled),
     /*  9318 */   // MIs[0] d
     /*  9318 */   // No operand predicates
     /*  9318 */   // MIs[0] mi.src0
     /*  9318 */   // No operand predicates
     /*  9318 */   // MIs[0] mi.src1
     /*  9318 */   // No operand predicates
     /*  9318 */   // Combiner Rule #188: constant_fold_fp_binop @ [mi[9]]
     /*  9318 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner104),
     /*  9321 */ // Label 502: @9321
     /*  9321 */ GIM_Reject,
     /*  9322 */ // Label 90: @9322
     /*  9322 */ GIM_Try, /*On fail goto*//*Label 503*/ GIMT_Encode4(9333), // Rule ID 284 //
     /*  9327 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule188Enabled),
     /*  9330 */   // MIs[0] d
     /*  9330 */   // No operand predicates
     /*  9330 */   // MIs[0] mi.src0
     /*  9330 */   // No operand predicates
     /*  9330 */   // MIs[0] mi.src1
     /*  9330 */   // No operand predicates
     /*  9330 */   // Combiner Rule #188: constant_fold_fp_binop @ [mi[10]]
     /*  9330 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner104),
     /*  9333 */ // Label 503: @9333
     /*  9333 */ GIM_Reject,
     /*  9334 */ // Label 91: @9334
     /*  9334 */ GIM_Try, /*On fail goto*//*Label 504*/ GIMT_Encode4(9345), // Rule ID 285 //
     /*  9339 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule188Enabled),
     /*  9342 */   // MIs[0] d
     /*  9342 */   // No operand predicates
     /*  9342 */   // MIs[0] mi.src0
     /*  9342 */   // No operand predicates
     /*  9342 */   // MIs[0] mi.src1
     /*  9342 */   // No operand predicates
     /*  9342 */   // Combiner Rule #188: constant_fold_fp_binop @ [mi[11]]
     /*  9342 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner104),
     /*  9345 */ // Label 504: @9345
     /*  9345 */ GIM_Reject,
     /*  9346 */ // Label 92: @9346
     /*  9346 */ GIM_Try, /*On fail goto*//*Label 505*/ GIMT_Encode4(9357), // Rule ID 159 //
     /*  9351 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule115Enabled),
     /*  9354 */   // Combiner Rule #115: reassoc_ptradd; wip_match_opcode 'G_PTR_ADD'
     /*  9354 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner56),
     /*  9357 */ // Label 505: @9357
     /*  9357 */ GIM_Try, /*On fail goto*//*Label 506*/ GIMT_Encode4(9368), // Rule ID 161 //
     /*  9362 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule117Enabled),
     /*  9365 */   // Combiner Rule #117: ptr_add_immed_chain; wip_match_opcode 'G_PTR_ADD'
     /*  9365 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner58),
     /*  9368 */ // Label 506: @9368
     /*  9368 */ GIM_Try, /*On fail goto*//*Label 507*/ GIMT_Encode4(9379), // Rule ID 204 //
     /*  9373 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule160Enabled),
     /*  9376 */   // Combiner Rule #160: const_ptradd_to_i2p; wip_match_opcode 'G_PTR_ADD'
     /*  9376 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner82),
     /*  9379 */ // Label 507: @9379
     /*  9379 */ GIM_Try, /*On fail goto*//*Label 508*/ GIMT_Encode4(9390), // Rule ID 220 //
     /*  9384 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule168Enabled),
     /*  9387 */   // Combiner Rule #168: ptr_add_with_zero; wip_match_opcode 'G_PTR_ADD'
     /*  9387 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner90),
     /*  9390 */ // Label 508: @9390
     /*  9390 */ GIM_Try, /*On fail goto*//*Label 509*/ GIMT_Encode4(9401), // Rule ID 257 //
     /*  9395 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule187Enabled),
     /*  9398 */   // Combiner Rule #187: constant_fold_binop; wip_match_opcode 'G_PTR_ADD'
     /*  9398 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner103),
     /*  9401 */ // Label 509: @9401
     /*  9401 */ GIM_Try, /*On fail goto*//*Label 510*/ GIMT_Encode4(9412), // Rule ID 318 //
     /*  9406 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule204Enabled),
     /*  9409 */   // Combiner Rule #204: fold_binop_into_select; wip_match_opcode 'G_PTR_ADD'
     /*  9409 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
     /*  9412 */ // Label 510: @9412
     /*  9412 */ GIM_Try, /*On fail goto*//*Label 511*/ GIMT_Encode4(9435), // Rule ID 117 //
     /*  9417 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule90Enabled),
     /*  9420 */   // MIs[0] dst
     /*  9420 */   // No operand predicates
     /*  9420 */   // MIs[0] lhs
     /*  9420 */   // No operand predicates
     /*  9420 */   // MIs[0] Operand 2
     /*  9420 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /*  9424 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  9429 */   // Combiner Rule #90: right_identity_zero @ [__right_identity_zero_match_0[7]]
     /*  9429 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  9434 */   GIR_EraseRootFromParent_Done,
     /*  9435 */ // Label 511: @9435
     /*  9435 */ GIM_Reject,
     /*  9436 */ // Label 93: @9436
     /*  9436 */ GIM_Try, /*On fail goto*//*Label 512*/ GIMT_Encode4(9447), // Rule ID 270 //
     /*  9441 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule187Enabled),
     /*  9444 */   // Combiner Rule #187: constant_fold_binop; wip_match_opcode 'G_SMIN'
     /*  9444 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner103),
     /*  9447 */ // Label 512: @9447
     /*  9447 */ GIM_Try, /*On fail goto*//*Label 513*/ GIMT_Encode4(9458), // Rule ID 329 //
     /*  9452 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule204Enabled),
     /*  9455 */   // Combiner Rule #204: fold_binop_into_select; wip_match_opcode 'G_SMIN'
     /*  9455 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
     /*  9458 */ // Label 513: @9458
     /*  9458 */ GIM_Try, /*On fail goto*//*Label 514*/ GIMT_Encode4(9469), // Rule ID 358 //
     /*  9463 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule216Enabled),
     /*  9466 */   // Combiner Rule #216: commute_int_constant_to_rhs; wip_match_opcode 'G_SMIN'
     /*  9466 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner129),
     /*  9469 */ // Label 514: @9469
     /*  9469 */ GIM_Reject,
     /*  9470 */ // Label 94: @9470
     /*  9470 */ GIM_Try, /*On fail goto*//*Label 515*/ GIMT_Encode4(9481), // Rule ID 271 //
     /*  9475 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule187Enabled),
     /*  9478 */   // Combiner Rule #187: constant_fold_binop; wip_match_opcode 'G_SMAX'
     /*  9478 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner103),
     /*  9481 */ // Label 515: @9481
     /*  9481 */ GIM_Try, /*On fail goto*//*Label 516*/ GIMT_Encode4(9492), // Rule ID 330 //
     /*  9486 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule204Enabled),
     /*  9489 */   // Combiner Rule #204: fold_binop_into_select; wip_match_opcode 'G_SMAX'
     /*  9489 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
     /*  9492 */ // Label 516: @9492
     /*  9492 */ GIM_Try, /*On fail goto*//*Label 517*/ GIMT_Encode4(9503), // Rule ID 359 //
     /*  9497 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule216Enabled),
     /*  9500 */   // Combiner Rule #216: commute_int_constant_to_rhs; wip_match_opcode 'G_SMAX'
     /*  9500 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner129),
     /*  9503 */ // Label 517: @9503
     /*  9503 */ GIM_Reject,
     /*  9504 */ // Label 95: @9504
     /*  9504 */ GIM_Try, /*On fail goto*//*Label 518*/ GIMT_Encode4(9515), // Rule ID 272 //
     /*  9509 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule187Enabled),
     /*  9512 */   // Combiner Rule #187: constant_fold_binop; wip_match_opcode 'G_UMIN'
     /*  9512 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner103),
     /*  9515 */ // Label 518: @9515
     /*  9515 */ GIM_Try, /*On fail goto*//*Label 519*/ GIMT_Encode4(9526), // Rule ID 331 //
     /*  9520 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule204Enabled),
     /*  9523 */   // Combiner Rule #204: fold_binop_into_select; wip_match_opcode 'G_UMIN'
     /*  9523 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
     /*  9526 */ // Label 519: @9526
     /*  9526 */ GIM_Try, /*On fail goto*//*Label 520*/ GIMT_Encode4(9537), // Rule ID 360 //
     /*  9531 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule216Enabled),
     /*  9534 */   // Combiner Rule #216: commute_int_constant_to_rhs; wip_match_opcode 'G_UMIN'
     /*  9534 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner129),
     /*  9537 */ // Label 520: @9537
     /*  9537 */ GIM_Reject,
     /*  9538 */ // Label 96: @9538
     /*  9538 */ GIM_Try, /*On fail goto*//*Label 521*/ GIMT_Encode4(9549), // Rule ID 273 //
     /*  9543 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule187Enabled),
     /*  9546 */   // Combiner Rule #187: constant_fold_binop; wip_match_opcode 'G_UMAX'
     /*  9546 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner103),
     /*  9549 */ // Label 521: @9549
     /*  9549 */ GIM_Try, /*On fail goto*//*Label 522*/ GIMT_Encode4(9560), // Rule ID 332 //
     /*  9554 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule204Enabled),
     /*  9557 */   // Combiner Rule #204: fold_binop_into_select; wip_match_opcode 'G_UMAX'
     /*  9557 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
     /*  9560 */ // Label 522: @9560
     /*  9560 */ GIM_Try, /*On fail goto*//*Label 523*/ GIMT_Encode4(9571), // Rule ID 361 //
     /*  9565 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule216Enabled),
     /*  9568 */   // Combiner Rule #216: commute_int_constant_to_rhs; wip_match_opcode 'G_UMAX'
     /*  9568 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner129),
     /*  9571 */ // Label 523: @9571
     /*  9571 */ GIM_Reject,
     /*  9572 */ // Label 97: @9572
     /*  9572 */ GIM_Try, /*On fail goto*//*Label 524*/ GIMT_Encode4(9583), // Rule ID 92 //
     /*  9577 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule82Enabled),
     /*  9580 */   // Combiner Rule #82: unary_undef_to_zero; wip_match_opcode 'G_ABS'
     /*  9580 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner36),
     /*  9583 */ // Label 524: @9583
     /*  9583 */ GIM_Try, /*On fail goto*//*Label 525*/ GIMT_Encode4(9594), // Rule ID 296 //
     /*  9588 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule191Enabled),
     /*  9591 */   // MIs[0] dst
     /*  9591 */   // No operand predicates
     /*  9591 */   // MIs[0] mi.src
     /*  9591 */   // No operand predicates
     /*  9591 */   // Combiner Rule #191: constant_fold_unary_int_op @ [mi[5]]
     /*  9591 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner107),
     /*  9594 */ // Label 525: @9594
     /*  9594 */ GIM_Reject,
     /*  9595 */ // Label 98: @9595
     /*  9595 */ GIM_Try, /*On fail goto*//*Label 526*/ GIMT_Encode4(9606), // Rule ID 188 //
     /*  9600 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule144Enabled),
     /*  9603 */   // Combiner Rule #144: opt_brcond_by_inverting_cond; wip_match_opcode 'G_BR'
     /*  9603 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner79),
     /*  9606 */ // Label 526: @9606
     /*  9606 */ GIM_Reject,
     /*  9607 */ // Label 99: @9607
     /*  9607 */ GIM_Try, /*On fail goto*//*Label 527*/ GIMT_Encode4(9618), // Rule ID 32 //
     /*  9612 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule30Enabled),
     /*  9615 */   // Combiner Rule #30: insert_vector_elt_oob; wip_match_opcode 'G_INSERT_VECTOR_ELT'
     /*  9615 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner10),
     /*  9618 */ // Label 527: @9618
     /*  9618 */ GIM_Try, /*On fail goto*//*Label 528*/ GIMT_Encode4(9629), // Rule ID 73 //
     /*  9623 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule71Enabled),
     /*  9626 */   // Combiner Rule #71: combine_insert_vec_elts_build_vector; wip_match_opcode 'G_INSERT_VECTOR_ELT'
     /*  9626 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner27),
     /*  9629 */ // Label 528: @9629
     /*  9629 */ GIM_Try, /*On fail goto*//*Label 529*/ GIMT_Encode4(9640), // Rule ID 107 //
     /*  9634 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule88Enabled),
     /*  9637 */   // Combiner Rule #88: insert_extract_vec_elt_out_of_bounds; wip_match_opcode 'G_INSERT_VECTOR_ELT'
     /*  9637 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner43),
     /*  9640 */ // Label 529: @9640
     /*  9640 */ GIM_Try, /*On fail goto*//*Label 530*/ GIMT_Encode4(9679), // Rule ID 44 //
     /*  9645 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule42Enabled),
     /*  9648 */   // MIs[0] root
     /*  9648 */   // No operand predicates
     /*  9648 */   // MIs[0] src
     /*  9648 */   // No operand predicates
     /*  9648 */   // MIs[0] elt
     /*  9648 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
     /*  9652 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_EXTRACT_VECTOR_ELT),
     /*  9656 */   // MIs[1] src
     /*  9656 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/1, /*OpIdx*/1, /*OtherMI*/0, /*OtherOpIdx*/1,
     /*  9661 */   // MIs[1] idx
     /*  9661 */   // No operand predicates
     /*  9661 */   // MIs[0] idx
     /*  9661 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/3, /*OtherMI*/1, /*OtherOpIdx*/2,
     /*  9666 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  9671 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  9673 */   // Combiner Rule #42: insert_vector_element_extract_vector_element
     /*  9673 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  9678 */   GIR_EraseRootFromParent_Done,
     /*  9679 */ // Label 530: @9679
     /*  9679 */ GIM_Try, /*On fail goto*//*Label 531*/ GIMT_Encode4(9712), // Rule ID 30 //
     /*  9684 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule28Enabled),
     /*  9687 */   // MIs[0] root
     /*  9687 */   // No operand predicates
     /*  9687 */   // MIs[0] src
     /*  9687 */   // No operand predicates
     /*  9687 */   // MIs[0] elt
     /*  9687 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
     /*  9691 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
     /*  9695 */   // MIs[0] idx
     /*  9695 */   // No operand predicates
     /*  9695 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner2),
     /*  9699 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  9704 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  9706 */   // Combiner Rule #28: insert_vector_element_elt_undef
     /*  9706 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /*  9711 */   GIR_EraseRootFromParent_Done,
     /*  9712 */ // Label 531: @9712
     /*  9712 */ GIM_Try, /*On fail goto*//*Label 532*/ GIMT_Encode4(9736), // Rule ID 29 //
     /*  9717 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule27Enabled),
     /*  9720 */   // MIs[0] root
     /*  9720 */   // No operand predicates
     /*  9720 */   // MIs[0] src
     /*  9720 */   // No operand predicates
     /*  9720 */   // MIs[0] elt
     /*  9720 */   // No operand predicates
     /*  9720 */   // MIs[0] idx
     /*  9720 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
     /*  9724 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
     /*  9728 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  9730 */   // Combiner Rule #27: insert_vector_element_idx_undef
     /*  9730 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
     /*  9733 */   GIR_RootToRootCopy, /*OpIdx*/0, // root
     /*  9735 */   GIR_EraseRootFromParent_Done,
     /*  9736 */ // Label 532: @9736
     /*  9736 */ GIM_Reject,
     /*  9737 */ // Label 100: @9737
     /*  9737 */ GIM_Try, /*On fail goto*//*Label 533*/ GIMT_Encode4(9748), // Rule ID 31 //
     /*  9742 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule29Enabled),
     /*  9745 */   // Combiner Rule #29: match_extract_of_element; wip_match_opcode 'G_EXTRACT_VECTOR_ELT'
     /*  9745 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner9),
     /*  9748 */ // Label 533: @9748
     /*  9748 */ GIM_Try, /*On fail goto*//*Label 534*/ GIMT_Encode4(9759), // Rule ID 74 //
     /*  9753 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule72Enabled),
     /*  9756 */   // Combiner Rule #72: extract_vec_elt_build_vec; wip_match_opcode 'G_EXTRACT_VECTOR_ELT'
     /*  9756 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner28),
     /*  9759 */ // Label 534: @9759
     /*  9759 */ GIM_Try, /*On fail goto*//*Label 535*/ GIMT_Encode4(9770), // Rule ID 80 //
     /*  9764 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule76Enabled),
     /*  9767 */   // Combiner Rule #76: combine_extracted_vector_load; wip_match_opcode 'G_EXTRACT_VECTOR_ELT'
     /*  9767 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner32),
     /*  9770 */ // Label 535: @9770
     /*  9770 */ GIM_Try, /*On fail goto*//*Label 536*/ GIMT_Encode4(9781), // Rule ID 108 //
     /*  9775 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule88Enabled),
     /*  9778 */   // Combiner Rule #88: insert_extract_vec_elt_out_of_bounds; wip_match_opcode 'G_EXTRACT_VECTOR_ELT'
     /*  9778 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner43),
     /*  9781 */ // Label 536: @9781
     /*  9781 */ GIM_Try, /*On fail goto*//*Label 537*/ GIMT_Encode4(9805), // Rule ID 42 //
     /*  9786 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule40Enabled),
     /*  9789 */   // MIs[0] root
     /*  9789 */   // No operand predicates
     /*  9789 */   // MIs[0] src
     /*  9789 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  9793 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR_TRUNC),
     /*  9797 */   GIM_CheckNumOperands, /*MI*/1, /*Expected*/9,
     /*  9800 */   // MIs[1] x
     /*  9800 */   // No operand predicates
     /*  9800 */   // MIs[1] y
     /*  9800 */   // No operand predicates
     /*  9800 */   // MIs[1] z
     /*  9800 */   // No operand predicates
     /*  9800 */   // MIs[1] a
     /*  9800 */   // No operand predicates
     /*  9800 */   // MIs[1] b
     /*  9800 */   // No operand predicates
     /*  9800 */   // MIs[1] c
     /*  9800 */   // No operand predicates
     /*  9800 */   // MIs[1] d
     /*  9800 */   // No operand predicates
     /*  9800 */   // MIs[1] e
     /*  9800 */   // No operand predicates
     /*  9800 */   // MIs[0] idx
     /*  9800 */   // No operand predicates
     /*  9800 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  9802 */   // Combiner Rule #40: extract_vector_element_build_vector_trunc8
     /*  9802 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner13),
     /*  9805 */ // Label 537: @9805
     /*  9805 */ GIM_Try, /*On fail goto*//*Label 538*/ GIMT_Encode4(9829), // Rule ID 41 //
     /*  9810 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule39Enabled),
     /*  9813 */   // MIs[0] root
     /*  9813 */   // No operand predicates
     /*  9813 */   // MIs[0] src
     /*  9813 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  9817 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR_TRUNC),
     /*  9821 */   GIM_CheckNumOperands, /*MI*/1, /*Expected*/8,
     /*  9824 */   // MIs[1] x
     /*  9824 */   // No operand predicates
     /*  9824 */   // MIs[1] y
     /*  9824 */   // No operand predicates
     /*  9824 */   // MIs[1] z
     /*  9824 */   // No operand predicates
     /*  9824 */   // MIs[1] a
     /*  9824 */   // No operand predicates
     /*  9824 */   // MIs[1] b
     /*  9824 */   // No operand predicates
     /*  9824 */   // MIs[1] c
     /*  9824 */   // No operand predicates
     /*  9824 */   // MIs[1] d
     /*  9824 */   // No operand predicates
     /*  9824 */   // MIs[0] idx
     /*  9824 */   // No operand predicates
     /*  9824 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  9826 */   // Combiner Rule #39: extract_vector_element_build_vector_trunc7
     /*  9826 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner13),
     /*  9829 */ // Label 538: @9829
     /*  9829 */ GIM_Try, /*On fail goto*//*Label 539*/ GIMT_Encode4(9853), // Rule ID 40 //
     /*  9834 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule38Enabled),
     /*  9837 */   // MIs[0] root
     /*  9837 */   // No operand predicates
     /*  9837 */   // MIs[0] src
     /*  9837 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  9841 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR_TRUNC),
     /*  9845 */   GIM_CheckNumOperands, /*MI*/1, /*Expected*/7,
     /*  9848 */   // MIs[1] x
     /*  9848 */   // No operand predicates
     /*  9848 */   // MIs[1] y
     /*  9848 */   // No operand predicates
     /*  9848 */   // MIs[1] z
     /*  9848 */   // No operand predicates
     /*  9848 */   // MIs[1] a
     /*  9848 */   // No operand predicates
     /*  9848 */   // MIs[1] b
     /*  9848 */   // No operand predicates
     /*  9848 */   // MIs[1] c
     /*  9848 */   // No operand predicates
     /*  9848 */   // MIs[0] idx
     /*  9848 */   // No operand predicates
     /*  9848 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  9850 */   // Combiner Rule #38: extract_vector_element_build_vector_trunc6
     /*  9850 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner13),
     /*  9853 */ // Label 539: @9853
     /*  9853 */ GIM_Try, /*On fail goto*//*Label 540*/ GIMT_Encode4(9877), // Rule ID 39 //
     /*  9858 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule37Enabled),
     /*  9861 */   // MIs[0] root
     /*  9861 */   // No operand predicates
     /*  9861 */   // MIs[0] src
     /*  9861 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  9865 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR_TRUNC),
     /*  9869 */   GIM_CheckNumOperands, /*MI*/1, /*Expected*/6,
     /*  9872 */   // MIs[1] x
     /*  9872 */   // No operand predicates
     /*  9872 */   // MIs[1] y
     /*  9872 */   // No operand predicates
     /*  9872 */   // MIs[1] z
     /*  9872 */   // No operand predicates
     /*  9872 */   // MIs[1] a
     /*  9872 */   // No operand predicates
     /*  9872 */   // MIs[1] b
     /*  9872 */   // No operand predicates
     /*  9872 */   // MIs[0] idx
     /*  9872 */   // No operand predicates
     /*  9872 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  9874 */   // Combiner Rule #37: extract_vector_element_build_vector_trunc5
     /*  9874 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner13),
     /*  9877 */ // Label 540: @9877
     /*  9877 */ GIM_Try, /*On fail goto*//*Label 541*/ GIMT_Encode4(9901), // Rule ID 38 //
     /*  9882 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule36Enabled),
     /*  9885 */   // MIs[0] root
     /*  9885 */   // No operand predicates
     /*  9885 */   // MIs[0] src
     /*  9885 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  9889 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR_TRUNC),
     /*  9893 */   GIM_CheckNumOperands, /*MI*/1, /*Expected*/5,
     /*  9896 */   // MIs[1] x
     /*  9896 */   // No operand predicates
     /*  9896 */   // MIs[1] y
     /*  9896 */   // No operand predicates
     /*  9896 */   // MIs[1] z
     /*  9896 */   // No operand predicates
     /*  9896 */   // MIs[1] a
     /*  9896 */   // No operand predicates
     /*  9896 */   // MIs[0] idx
     /*  9896 */   // No operand predicates
     /*  9896 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  9898 */   // Combiner Rule #36: extract_vector_element_build_vector_trunc4
     /*  9898 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner13),
     /*  9901 */ // Label 541: @9901
     /*  9901 */ GIM_Try, /*On fail goto*//*Label 542*/ GIMT_Encode4(9925), // Rule ID 37 //
     /*  9906 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule35Enabled),
     /*  9909 */   // MIs[0] root
     /*  9909 */   // No operand predicates
     /*  9909 */   // MIs[0] src
     /*  9909 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  9913 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR_TRUNC),
     /*  9917 */   GIM_CheckNumOperands, /*MI*/1, /*Expected*/4,
     /*  9920 */   // MIs[1] x
     /*  9920 */   // No operand predicates
     /*  9920 */   // MIs[1] y
     /*  9920 */   // No operand predicates
     /*  9920 */   // MIs[1] z
     /*  9920 */   // No operand predicates
     /*  9920 */   // MIs[0] idx
     /*  9920 */   // No operand predicates
     /*  9920 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  9922 */   // Combiner Rule #35: extract_vector_element_build_vector_trunc3
     /*  9922 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner13),
     /*  9925 */ // Label 542: @9925
     /*  9925 */ GIM_Try, /*On fail goto*//*Label 543*/ GIMT_Encode4(9959), // Rule ID 33 //
     /*  9930 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule31Enabled),
     /*  9933 */   // MIs[0] root
     /*  9933 */   // No operand predicates
     /*  9933 */   // MIs[0] src
     /*  9933 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  9937 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_INSERT_VECTOR_ELT),
     /*  9941 */   // MIs[1] x
     /*  9941 */   // No operand predicates
     /*  9941 */   // MIs[1] value
     /*  9941 */   // No operand predicates
     /*  9941 */   // MIs[1] idx
     /*  9941 */   // No operand predicates
     /*  9941 */   // MIs[0] idx
     /*  9941 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/3,
     /*  9946 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/2,
     /*  9951 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  9953 */   // Combiner Rule #31: extract_vector_element_not_const
     /*  9953 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/2,
     /*  9958 */   GIR_EraseRootFromParent_Done,
     /*  9959 */ // Label 543: @9959
     /*  9959 */ GIM_Try, /*On fail goto*//*Label 544*/ GIMT_Encode4(9980), // Rule ID 34 //
     /*  9964 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule32Enabled),
     /*  9967 */   // MIs[0] root
     /*  9967 */   // No operand predicates
     /*  9967 */   // MIs[0] src
     /*  9967 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  9971 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_INSERT_VECTOR_ELT),
     /*  9975 */   // MIs[1] x
     /*  9975 */   // No operand predicates
     /*  9975 */   // MIs[1] value
     /*  9975 */   // No operand predicates
     /*  9975 */   // MIs[1] idx2
     /*  9975 */   // No operand predicates
     /*  9975 */   // MIs[0] idx1
     /*  9975 */   // No operand predicates
     /*  9975 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /*  9977 */   // Combiner Rule #32: extract_vector_element_different_indices
     /*  9977 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner11),
     /*  9980 */ // Label 544: @9980
     /*  9980 */ GIM_Try, /*On fail goto*//*Label 545*/ GIMT_Encode4(10009), // Rule ID 43 //
     /*  9985 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule41Enabled),
     /*  9988 */   // MIs[0] root
     /*  9988 */   // No operand predicates
     /*  9988 */   // MIs[0] src
     /*  9988 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /*  9992 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SHUFFLE_VECTOR),
     /*  9996 */   // MIs[1] src1
     /*  9996 */   // No operand predicates
     /*  9996 */   // MIs[1] src2
     /*  9996 */   // No operand predicates
     /*  9996 */   // MIs[1] mask
     /*  9996 */   // No operand predicates
     /*  9996 */   // MIs[0] idx
     /*  9996 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
     /* 10000 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /* 10004 */   // MIs[2] imm
     /* 10004 */   // No operand predicates
     /* 10004 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /* 10006 */   // Combiner Rule #41: extract_vector_element_shuffle_vector
     /* 10006 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner14),
     /* 10009 */ // Label 545: @10009
     /* 10009 */ GIM_Try, /*On fail goto*//*Label 546*/ GIMT_Encode4(10033), // Rule ID 36 //
     /* 10014 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule34Enabled),
     /* 10017 */   // MIs[0] root
     /* 10017 */   // No operand predicates
     /* 10017 */   // MIs[0] src
     /* 10017 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 10021 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR_TRUNC),
     /* 10025 */   GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
     /* 10028 */   // MIs[1] x
     /* 10028 */   // No operand predicates
     /* 10028 */   // MIs[1] y
     /* 10028 */   // No operand predicates
     /* 10028 */   // MIs[0] idx
     /* 10028 */   // No operand predicates
     /* 10028 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 10030 */   // Combiner Rule #34: extract_vector_element_build_vector_trunc2
     /* 10030 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner13),
     /* 10033 */ // Label 546: @10033
     /* 10033 */ GIM_Try, /*On fail goto*//*Label 547*/ GIMT_Encode4(10065), // Rule ID 35 //
     /* 10038 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule33Enabled),
     /* 10041 */   // MIs[0] root
     /* 10041 */   // No operand predicates
     /* 10041 */   // MIs[0] src
     /* 10041 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 10045 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR),
     /* 10049 */   GIM_CheckNumOperandsGE, /*MI*/1, /*Expected*/2,
     /* 10052 */   // MIs[1] unused
     /* 10052 */   // No operand predicates
     /* 10052 */   // MIs[0] idx
     /* 10052 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
     /* 10056 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /* 10060 */   // MIs[2] imm
     /* 10060 */   // No operand predicates
     /* 10060 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /* 10062 */   // Combiner Rule #33: extract_vector_element_build_vector
     /* 10062 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner12),
     /* 10065 */ // Label 547: @10065
     /* 10065 */ GIM_Try, /*On fail goto*//*Label 548*/ GIMT_Encode4(10089), // Rule ID 27 //
     /* 10070 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule25Enabled),
     /* 10073 */   // MIs[0] root
     /* 10073 */   // No operand predicates
     /* 10073 */   // MIs[0] vector
     /* 10073 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 10077 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
     /* 10081 */   // MIs[0] idx
     /* 10081 */   // No operand predicates
     /* 10081 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 10083 */   // Combiner Rule #25: match_extract_of_element_undef_vector
     /* 10083 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
     /* 10086 */   GIR_RootToRootCopy, /*OpIdx*/0, // root
     /* 10088 */   GIR_EraseRootFromParent_Done,
     /* 10089 */ // Label 548: @10089
     /* 10089 */ GIM_Try, /*On fail goto*//*Label 549*/ GIMT_Encode4(10113), // Rule ID 28 //
     /* 10094 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule26Enabled),
     /* 10097 */   // MIs[0] root
     /* 10097 */   // No operand predicates
     /* 10097 */   // MIs[0] vector
     /* 10097 */   // No operand predicates
     /* 10097 */   // MIs[0] idx
     /* 10097 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
     /* 10101 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
     /* 10105 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 10107 */   // Combiner Rule #26: match_extract_of_element_undef_index
     /* 10107 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
     /* 10110 */   GIR_RootToRootCopy, /*OpIdx*/0, // root
     /* 10112 */   GIR_EraseRootFromParent_Done,
     /* 10113 */ // Label 549: @10113
     /* 10113 */ GIM_Reject,
     /* 10114 */ // Label 101: @10114
     /* 10114 */ GIM_Try, /*On fail goto*//*Label 550*/ GIMT_Encode4(10125), // Rule ID 103 //
     /* 10119 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule85Enabled),
     /* 10122 */   // Combiner Rule #85: propagate_undef_all_ops; wip_match_opcode 'G_SHUFFLE_VECTOR'
     /* 10122 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner40),
     /* 10125 */ // Label 550: @10125
     /* 10125 */ GIM_Try, /*On fail goto*//*Label 551*/ GIMT_Encode4(10136), // Rule ID 105 //
     /* 10130 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule86Enabled),
     /* 10133 */   // Combiner Rule #86: propagate_undef_shuffle_mask; wip_match_opcode 'G_SHUFFLE_VECTOR'
     /* 10133 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner41),
     /* 10136 */ // Label 551: @10136
     /* 10136 */ GIM_Try, /*On fail goto*//*Label 552*/ GIMT_Encode4(10147), // Rule ID 395 //
     /* 10141 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule231Enabled),
     /* 10144 */   // Combiner Rule #231: combine_shuffle_concat; wip_match_opcode 'G_SHUFFLE_VECTOR'
     /* 10144 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner138),
     /* 10147 */ // Label 552: @10147
     /* 10147 */ GIM_Try, /*On fail goto*//*Label 553*/ GIMT_Encode4(10158), // Rule ID 397 //
     /* 10152 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule233Enabled),
     /* 10155 */   // Combiner Rule #233: combine_shuffle_disjoint_mask; wip_match_opcode 'G_SHUFFLE_VECTOR'
     /* 10155 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner140),
     /* 10158 */ // Label 553: @10158
     /* 10158 */ GIM_Try, /*On fail goto*//*Label 554*/ GIMT_Encode4(10169), // Rule ID 439 //
     /* 10163 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule267Enabled),
     /* 10166 */   // Combiner Rule #267: combine_shuffle_vector; wip_match_opcode 'G_SHUFFLE_VECTOR'
     /* 10166 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner159),
     /* 10169 */ // Label 554: @10169
     /* 10169 */ GIM_Try, /*On fail goto*//*Label 555*/ GIMT_Encode4(10190), // Rule ID 396 //
     /* 10174 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule232Enabled),
     /* 10177 */   // MIs[0] root
     /* 10177 */   // No operand predicates
     /* 10177 */   // MIs[0] src1
     /* 10177 */   // No operand predicates
     /* 10177 */   // MIs[0] undef
     /* 10177 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
     /* 10181 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
     /* 10185 */   // MIs[0] mask
     /* 10185 */   // No operand predicates
     /* 10185 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 10187 */   // Combiner Rule #232: combine_shuffle_undef_rhs
     /* 10187 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner139),
     /* 10190 */ // Label 555: @10190
     /* 10190 */ GIM_Reject,
     /* 10191 */ // Label 102: @10191
     /* 10191 */ GIM_Try, /*On fail goto*//*Label 556*/ GIMT_Encode4(10202), // Rule ID 293 //
     /* 10196 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule191Enabled),
     /* 10199 */   // MIs[0] dst
     /* 10199 */   // No operand predicates
     /* 10199 */   // MIs[0] mi.src
     /* 10199 */   // No operand predicates
     /* 10199 */   // Combiner Rule #191: constant_fold_unary_int_op @ [mi[2]]
     /* 10199 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner107),
     /* 10202 */ // Label 556: @10202
     /* 10202 */ GIM_Reject,
     /* 10203 */ // Label 103: @10203
     /* 10203 */ GIM_Try, /*On fail goto*//*Label 557*/ GIMT_Encode4(10214), // Rule ID 294 //
     /* 10208 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule191Enabled),
     /* 10211 */   // MIs[0] dst
     /* 10211 */   // No operand predicates
     /* 10211 */   // MIs[0] mi.src
     /* 10211 */   // No operand predicates
     /* 10211 */   // Combiner Rule #191: constant_fold_unary_int_op @ [mi[3]]
     /* 10211 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner107),
     /* 10214 */ // Label 557: @10214
     /* 10214 */ GIM_Reject,
     /* 10215 */ // Label 104: @10215
     /* 10215 */ GIM_Try, /*On fail goto*//*Label 558*/ GIMT_Encode4(10226), // Rule ID 291 //
     /* 10220 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule191Enabled),
     /* 10223 */   // MIs[0] dst
     /* 10223 */   // No operand predicates
     /* 10223 */   // MIs[0] mi.src
     /* 10223 */   // No operand predicates
     /* 10223 */   // Combiner Rule #191: constant_fold_unary_int_op @ [mi[0]]
     /* 10223 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner107),
     /* 10226 */ // Label 558: @10226
     /* 10226 */ GIM_Try, /*On fail goto*//*Label 559*/ GIMT_Encode4(10237), // Rule ID 418 //
     /* 10231 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule252Enabled),
     /* 10234 */   // MIs[0] dst
     /* 10234 */   // No operand predicates
     /* 10234 */   // MIs[0] src
     /* 10234 */   // No operand predicates
     /* 10234 */   // Combiner Rule #252: ctlz_to_ctls
     /* 10234 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner157),
     /* 10237 */ // Label 559: @10237
     /* 10237 */ GIM_Reject,
     /* 10238 */ // Label 105: @10238
     /* 10238 */ GIM_Try, /*On fail goto*//*Label 560*/ GIMT_Encode4(10249), // Rule ID 292 //
     /* 10243 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule191Enabled),
     /* 10246 */   // MIs[0] dst
     /* 10246 */   // No operand predicates
     /* 10246 */   // MIs[0] mi.src
     /* 10246 */   // No operand predicates
     /* 10246 */   // Combiner Rule #191: constant_fold_unary_int_op @ [mi[1]]
     /* 10246 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner107),
     /* 10249 */ // Label 560: @10249
     /* 10249 */ GIM_Try, /*On fail goto*//*Label 561*/ GIMT_Encode4(10260), // Rule ID 419 //
     /* 10254 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule253Enabled),
     /* 10257 */   // MIs[0] dst
     /* 10257 */   // No operand predicates
     /* 10257 */   // MIs[0] src
     /* 10257 */   // No operand predicates
     /* 10257 */   // Combiner Rule #253: ctlz_zero_poison_to_ctls
     /* 10257 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner157),
     /* 10260 */ // Label 561: @10260
     /* 10260 */ GIM_Reject,
     /* 10261 */ // Label 106: @10261
     /* 10261 */ GIM_Try, /*On fail goto*//*Label 562*/ GIMT_Encode4(10272), // Rule ID 295 //
     /* 10266 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule191Enabled),
     /* 10269 */   // MIs[0] dst
     /* 10269 */   // No operand predicates
     /* 10269 */   // MIs[0] mi.src
     /* 10269 */   // No operand predicates
     /* 10269 */   // Combiner Rule #191: constant_fold_unary_int_op @ [mi[4]]
     /* 10269 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner107),
     /* 10272 */ // Label 562: @10272
     /* 10272 */ GIM_Reject,
     /* 10273 */ // Label 107: @10273
     /* 10273 */ GIM_Try, /*On fail goto*//*Label 563*/ GIMT_Encode4(10284), // Rule ID 297 //
     /* 10278 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule191Enabled),
     /* 10281 */   // MIs[0] dst
     /* 10281 */   // No operand predicates
     /* 10281 */   // MIs[0] mi.src
     /* 10281 */   // No operand predicates
     /* 10281 */   // Combiner Rule #191: constant_fold_unary_int_op @ [mi[6]]
     /* 10281 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner107),
     /* 10284 */ // Label 563: @10284
     /* 10284 */ GIM_Reject,
     /* 10285 */ // Label 108: @10285
     /* 10285 */ GIM_Try, /*On fail goto*//*Label 564*/ GIMT_Encode4(10329), // Rule ID 248 //
     /* 10290 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule181Enabled),
     /* 10293 */   // MIs[0] d
     /* 10293 */   // No operand predicates
     /* 10293 */   // MIs[0] src
     /* 10293 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 10297 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_LSHR),
     /* 10301 */   // MIs[1] rev
     /* 10301 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/1, // MIs[2]
     /* 10305 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_BITREVERSE),
     /* 10309 */   // MIs[2] val
     /* 10309 */   // No operand predicates
     /* 10309 */   // MIs[1] amt
     /* 10309 */   // No operand predicates
     /* 10309 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner14),
     /* 10313 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /* 10315 */   // Combiner Rule #181: bitreverse_lshr
     /* 10315 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SHL),
     /* 10318 */   GIR_RootToRootCopy, /*OpIdx*/0, // d
     /* 10320 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // val
     /* 10324 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // amt
     /* 10328 */   GIR_EraseRootFromParent_Done,
     /* 10329 */ // Label 564: @10329
     /* 10329 */ GIM_Try, /*On fail goto*//*Label 565*/ GIMT_Encode4(10373), // Rule ID 247 //
     /* 10334 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule180Enabled),
     /* 10337 */   // MIs[0] d
     /* 10337 */   // No operand predicates
     /* 10337 */   // MIs[0] src
     /* 10337 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 10341 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SHL),
     /* 10345 */   // MIs[1] rev
     /* 10345 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/1, // MIs[2]
     /* 10349 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_BITREVERSE),
     /* 10353 */   // MIs[2] val
     /* 10353 */   // No operand predicates
     /* 10353 */   // MIs[1] amt
     /* 10353 */   // No operand predicates
     /* 10353 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner13),
     /* 10357 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /* 10359 */   // Combiner Rule #180: bitreverse_shl
     /* 10359 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_LSHR),
     /* 10362 */   GIR_RootToRootCopy, /*OpIdx*/0, // d
     /* 10364 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // val
     /* 10368 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // amt
     /* 10372 */   GIR_EraseRootFromParent_Done,
     /* 10373 */ // Label 565: @10373
     /* 10373 */ GIM_Try, /*On fail goto*//*Label 566*/ GIMT_Encode4(10384), // Rule ID 298 //
     /* 10378 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule191Enabled),
     /* 10381 */   // MIs[0] dst
     /* 10381 */   // No operand predicates
     /* 10381 */   // MIs[0] mi.src
     /* 10381 */   // No operand predicates
     /* 10381 */   // Combiner Rule #191: constant_fold_unary_int_op @ [mi[7]]
     /* 10381 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner107),
     /* 10384 */ // Label 566: @10384
     /* 10384 */ GIM_Reject,
     /* 10385 */ // Label 109: @10385
     /* 10385 */ GIM_Try, /*On fail goto*//*Label 567*/ GIMT_Encode4(10406), // Rule ID 195 //
     /* 10390 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule151Enabled),
     /* 10393 */   // MIs[0] dst
     /* 10393 */   // No operand predicates
     /* 10393 */   // MIs[0] src0
     /* 10393 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 10397 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 10401 */   // MIs[1] cst
     /* 10401 */   // No operand predicates
     /* 10401 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 10403 */   // Combiner Rule #151: constant_fold_fceil
     /* 10403 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner80),
     /* 10406 */ // Label 567: @10406
     /* 10406 */ GIM_Reject,
     /* 10407 */ // Label 110: @10407
     /* 10407 */ GIM_Try, /*On fail goto*//*Label 568*/ GIMT_Encode4(10428), // Rule ID 191 //
     /* 10412 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule147Enabled),
     /* 10415 */   // MIs[0] dst
     /* 10415 */   // No operand predicates
     /* 10415 */   // MIs[0] src0
     /* 10415 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 10419 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 10423 */   // MIs[1] cst
     /* 10423 */   // No operand predicates
     /* 10423 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 10425 */   // Combiner Rule #147: constant_fold_fsqrt
     /* 10425 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner80),
     /* 10428 */ // Label 568: @10428
     /* 10428 */ GIM_Reject,
     /* 10429 */ // Label 111: @10429
     /* 10429 */ GIM_Try, /*On fail goto*//*Label 569*/ GIMT_Encode4(10450), // Rule ID 196 //
     /* 10434 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule152Enabled),
     /* 10437 */   // MIs[0] dst
     /* 10437 */   // No operand predicates
     /* 10437 */   // MIs[0] src0
     /* 10437 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 10441 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 10445 */   // MIs[1] cst
     /* 10445 */   // No operand predicates
     /* 10445 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 10447 */   // Combiner Rule #152: constant_fold_ffloor
     /* 10447 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner80),
     /* 10450 */ // Label 569: @10450
     /* 10450 */ GIM_Reject,
     /* 10451 */ // Label 112: @10451
     /* 10451 */ GIM_Try, /*On fail goto*//*Label 570*/ GIMT_Encode4(10472), // Rule ID 200 //
     /* 10456 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule156Enabled),
     /* 10459 */   // MIs[0] dst
     /* 10459 */   // No operand predicates
     /* 10459 */   // MIs[0] src0
     /* 10459 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 10463 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 10467 */   // MIs[1] cst
     /* 10467 */   // No operand predicates
     /* 10467 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 10469 */   // Combiner Rule #156: constant_fold_frint
     /* 10469 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner80),
     /* 10472 */ // Label 570: @10472
     /* 10472 */ GIM_Reject,
     /* 10473 */ // Label 113: @10473
     /* 10473 */ GIM_Try, /*On fail goto*//*Label 571*/ GIMT_Encode4(10494), // Rule ID 201 //
     /* 10478 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule157Enabled),
     /* 10481 */   // MIs[0] dst
     /* 10481 */   // No operand predicates
     /* 10481 */   // MIs[0] src0
     /* 10481 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 10485 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 10489 */   // MIs[1] cst
     /* 10489 */   // No operand predicates
     /* 10489 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 10491 */   // Combiner Rule #157: constant_fold_fnearbyint
     /* 10491 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner80),
     /* 10494 */ // Label 571: @10494
     /* 10494 */ GIM_Reject,
     /* 10495 */ // Label 114: @10495
     /* 10495 */ GIM_Try, /*On fail goto*//*Label 572*/ GIMT_Encode4(10506), // Rule ID 453 //
     /* 10500 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule281Enabled),
     /* 10503 */   // MIs[0] dst_addr
     /* 10503 */   // No operand predicates
     /* 10503 */   // MIs[0] src_addr
     /* 10503 */   // No operand predicates
     /* 10503 */   // MIs[0] size
     /* 10503 */   // No operand predicates
     /* 10503 */   // MIs[0] tailcall
     /* 10503 */   // No operand predicates
     /* 10503 */   // Combiner Rule #281: combine_memcpy
     /* 10503 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner167),
     /* 10506 */ // Label 572: @10506
     /* 10506 */ GIM_Reject,
     /* 10507 */ // Label 115: @10507
     /* 10507 */ GIM_Try, /*On fail goto*//*Label 573*/ GIMT_Encode4(10518), // Rule ID 451 //
     /* 10512 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule279Enabled),
     /* 10515 */   // MIs[0] dst_addr
     /* 10515 */   // No operand predicates
     /* 10515 */   // MIs[0] src_addr
     /* 10515 */   // No operand predicates
     /* 10515 */   // MIs[0] size
     /* 10515 */   // No operand predicates
     /* 10515 */   // Combiner Rule #279: combine_memcpy_inline
     /* 10515 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner166),
     /* 10518 */ // Label 573: @10518
     /* 10518 */ GIM_Reject,
     /* 10519 */ // Label 116: @10519
     /* 10519 */ GIM_Try, /*On fail goto*//*Label 574*/ GIMT_Encode4(10530), // Rule ID 454 //
     /* 10524 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule282Enabled),
     /* 10527 */   // MIs[0] dst_addr
     /* 10527 */   // No operand predicates
     /* 10527 */   // MIs[0] src_addr
     /* 10527 */   // No operand predicates
     /* 10527 */   // MIs[0] size
     /* 10527 */   // No operand predicates
     /* 10527 */   // MIs[0] tailcall
     /* 10527 */   // No operand predicates
     /* 10527 */   // Combiner Rule #282: combine_memmove
     /* 10527 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner167),
     /* 10530 */ // Label 574: @10530
     /* 10530 */ GIM_Reject,
     /* 10531 */ // Label 117: @10531
     /* 10531 */ GIM_Try, /*On fail goto*//*Label 575*/ GIMT_Encode4(10542), // Rule ID 455 //
     /* 10536 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule283Enabled),
     /* 10539 */   // MIs[0] dst_addr
     /* 10539 */   // No operand predicates
     /* 10539 */   // MIs[0] value
     /* 10539 */   // No operand predicates
     /* 10539 */   // MIs[0] size
     /* 10539 */   // No operand predicates
     /* 10539 */   // MIs[0] tailcall
     /* 10539 */   // No operand predicates
     /* 10539 */   // Combiner Rule #283: combine_memset
     /* 10539 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner167),
     /* 10542 */ // Label 575: @10542
     /* 10542 */ GIM_Try, /*On fail goto*//*Label 576*/ GIMT_Encode4(10553), // Rule ID 456 //
     /* 10547 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule284Enabled),
     /* 10550 */   // MIs[0] dst_addr
     /* 10550 */   // No operand predicates
     /* 10550 */   // MIs[0] value
     /* 10550 */   // No operand predicates
     /* 10550 */   // MIs[0] size
     /* 10550 */   // No operand predicates
     /* 10550 */   // MIs[0] tailcall
     /* 10550 */   // No operand predicates
     /* 10550 */   // Combiner Rule #284: emit_bzero
     /* 10550 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner168),
     /* 10553 */ // Label 576: @10553
     /* 10553 */ GIM_Reject,
     /* 10554 */ // Label 118: @10554
     /* 10554 */ GIM_Try, /*On fail goto*//*Label 577*/ GIMT_Encode4(10565), // Rule ID 452 //
     /* 10559 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule280Enabled),
     /* 10562 */   // MIs[0] dst_addr
     /* 10562 */   // No operand predicates
     /* 10562 */   // MIs[0] value
     /* 10562 */   // No operand predicates
     /* 10562 */   // MIs[0] size
     /* 10562 */   // No operand predicates
     /* 10562 */   // Combiner Rule #280: combine_memset_inline
     /* 10562 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner166),
     /* 10565 */ // Label 577: @10565
     /* 10565 */ GIM_Reject,
     /* 10566 */ // Label 119: @10566
     /* 10566 */ GIM_Try_CheckFeatures, /*On fail goto*//*Label 578*/ GIMT_Encode4(10579), GIMT_Encode2(GIFBS_HasDotProd), // Rule ID 442 //
     /* 10573 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule270Enabled),
     /* 10576 */   // Combiner Rule #270: ext_addv_to_udot_addv; wip_match_opcode 'G_VECREDUCE_ADD'
     /* 10576 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner162),
     /* 10579 */ // Label 578: @10579
     /* 10579 */ GIM_Try, /*On fail goto*//*Label 579*/ GIMT_Encode4(10590), // Rule ID 443 //
     /* 10584 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule271Enabled),
     /* 10587 */   // Combiner Rule #271: ext_uaddv_to_uaddlv; wip_match_opcode 'G_VECREDUCE_ADD'
     /* 10587 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner163),
     /* 10590 */ // Label 579: @10590
     /* 10590 */ GIM_Reject,
     /* 10591 */ // Label 120: @10591
     /* 10591 */ GIM_Reject,
     /* 10592 */ }; // Size: 10592 bytes
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

