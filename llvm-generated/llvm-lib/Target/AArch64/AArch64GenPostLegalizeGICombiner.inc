/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* AArch64PostLegalizerCombinerImpl Combiner Match Table                      *|
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

struct AArch64PostLegalizerCombinerImplRuleConfig {
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
      return 0;	 // "copy_prop"
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ul_const", 8) != 0)
        break;
      return 39;	 // "mul_const"
    case 'o':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "r_to_bsp", 8) != 0)
        break;
      return 107;	 // "or_to_bsp"
    }
    break;
  case 10:	 // 3 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "2p_to_p2i", 9) != 0)
        break;
      return 76;	 // "i2p_to_p2i"
    case 'p':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "2i_to_i2p", 9) != 0)
        break;
      return 75;	 // "p2i_to_i2p"
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "elect_not", 9) != 0)
        break;
      return 55;	 // "select_not"
    }
    break;
  case 11:	 // 6 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "dd_sub_reg", 10) != 0)
        break;
      return 81;	 // "add_sub_reg"
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "atch_addos", 10) != 0)
        break;
      return 47;	 // "match_addos"
    case 't':	 // 3 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "runc_", 5) != 0)
        break;
      switch (RuleIdentifier[6]) {
      default: break;
      case 's':	 // 2 strings to match.
        if (memcmp(RuleIdentifier.data()+7, "sat", 3) != 0)
          break;
        switch (RuleIdentifier[10]) {
        default: break;
        case 's':	 // 1 string to match.
          return 119;	 // "trunc_ssats"
        case 'u':	 // 1 string to match.
          return 120;	 // "trunc_ssatu"
        }
        break;
      case 'u':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+7, "satu", 4) != 0)
          break;
        return 121;	 // "trunc_usatu"
      }
      break;
    case 'u':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nmerge_cst", 10) != 0)
        break;
      return 60;	 // "unmerge_cst"
    }
    break;
  case 12:	 // 4 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "xtmultomull", 11) != 0)
        break;
      return 117;	 // "extmultomull"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "edundant_or", 11) != 0)
        break;
      return 38;	 // "redundant_or"
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ext_of_sext", 11) != 0)
        break;
      return 6;	 // "sext_of_sext"
    case 'z':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ext_of_zext", 11) != 0)
        break;
      return 4;	 // "zext_of_zext"
    }
    break;
  case 13:	 // 7 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'l':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "oad_and_mask", 12) != 0)
        break;
      return 31;	 // "load_and_mask"
    case 'm':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "tch_selects", 11) != 0)
          break;
        return 52;	 // "match_selects"
      case 'e':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "rge_unmerge", 11) != 0)
          break;
        return 59;	 // "merge_unmerge"
      }
      break;
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "edundant_and", 12) != 0)
        break;
      return 35;	 // "redundant_and"
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ame_val_zero", 12) != 0)
        break;
      return 72;	 // "same_val_zero"
    case 'u':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "nmerge_", 7) != 0)
        break;
      switch (RuleIdentifier[8]) {
      default: break;
      case 'm':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+9, "erge", 4) != 0)
          break;
        return 58;	 // "unmerge_merge"
      case 'u':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+9, "ndef", 4) != 0)
          break;
        return 61;	 // "unmerge_undef"
      }
      break;
    }
    break;
  case 14:	 // 6 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'a':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "nyext_of_", 9) != 0)
        break;
      switch (RuleIdentifier[10]) {
      default: break;
      case 's':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+11, "ext", 3) != 0)
          break;
        return 10;	 // "anyext_of_sext"
      case 'z':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+11, "ext", 3) != 0)
          break;
        return 9;	 // "anyext_of_zext"
      }
      break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "inop_same_val", 13) != 0)
        break;
      return 71;	 // "binop_same_val"
    case 'f':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "neg_fneg_fold", 13) != 0)
        break;
      return 78;	 // "fneg_fneg_fold"
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ext_of_anyext", 13) != 0)
        break;
      return 7;	 // "sext_of_anyext"
    case 'z':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ext_of_anyext", 13) != 0)
        break;
      return 5;	 // "zext_of_anyext"
    }
    break;
  case 15:	 // 3 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "xtending_loads", 14) != 0)
        break;
      return 30;	 // "extending_loads"
    case 'o':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "verlapping_and", 14) != 0)
        break;
      return 92;	 // "overlapping_and"
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "elect_same_val", 14) != 0)
        break;
      return 69;	 // "select_same_val"
    }
    break;
  case 16:	 // 9 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nyext_of_anyext", 15) != 0)
        break;
      return 8;	 // "anyext_of_anyext"
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ombine_mul_cmlt", 15) != 0)
        break;
      return 115;	 // "combine_mul_cmlt"
    case 's':	 // 4 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'e':	 // 3 strings to match.
        if (memcmp(RuleIdentifier.data()+2, "lect_", 5) != 0)
          break;
        switch (RuleIdentifier[7]) {
        default: break;
        case 't':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+8, "o_minmax", 8) != 0)
            break;
          return 106;	 // "select_to_minmax"
        case 'u':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+8, "ndef_cmp", 8) != 0)
            break;
          return 49;	 // "select_undef_cmp"
        case 'z':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+8, "ero_true", 8) != 0)
            break;
          return 53;	 // "select_zero_true"
        }
        break;
      case 'u':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "baddmulreassoc", 14) != 0)
          break;
        return 118;	 // "subaddmulreassoc"
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
        return 2;	 // "truncate_of_sext"
      case 'z':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+13, "ext", 3) != 0)
          break;
        return 1;	 // "truncate_of_zext"
      }
      break;
    case 'u':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ndef_to_fp_zero", 15) != 0)
        break;
      return 94;	 // "undef_to_fp_zero"
    }
    break;
  case 17:	 // 5 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nyext_trunc_fold", 16) != 0)
        break;
      return 77;	 // "anyext_trunc_fold"
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "rase_undef_store", 16) != 0)
        break;
      return 104;	 // "erase_undef_store"
    case 's':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "elect_", 6) != 0)
        break;
      switch (RuleIdentifier[7]) {
      default: break;
      case 't':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+8, "o_iminmax", 9) != 0)
          break;
        return 51;	 // "select_to_iminmax"
      case 'z':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+8, "ero_false", 9) != 0)
          break;
        return 54;	 // "select_zero_false"
      }
      break;
    case 'u':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ndef_to_int_zero", 16) != 0)
        break;
      return 95;	 // "undef_to_int_zero"
    }
    break;
  case 18:	 // 6 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "inop_left_to_zero", 17) != 0)
        break;
      return 73;	 // "binop_left_to_zero"
    case 'c':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "onstant_fold_f", 14) != 0)
        break;
      switch (RuleIdentifier[15]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+16, "bs", 2) != 0)
          break;
        return 13;	 // "constant_fold_fabs"
      case 'n':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+16, "eg", 2) != 0)
          break;
        return 12;	 // "constant_fold_fneg"
      }
      break;
    case 'f':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'o':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "ld_merge_to_zext", 16) != 0)
          break;
        return 56;	 // "fold_merge_to_zext"
      case 'p':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "trunc_fpext_fold", 16) != 0)
          break;
        return 87;	 // "fptrunc_fpext_fold"
      }
      break;
    case 't':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "runcate_of_anyext", 17) != 0)
        break;
      return 3;	 // "truncate_of_anyext"
    }
    break;
  case 19:	 // 15 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "inop_right_to_zero", 18) != 0)
        break;
      return 74;	 // "binop_right_to_zero"
    case 'c':	 // 6 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "onstant_fold_", 13) != 0)
        break;
      switch (RuleIdentifier[14]) {
      default: break;
      case 'b':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+15, "inop", 4) != 0)
          break;
        return 67;	 // "constant_fold_binop"
      case 'f':	 // 5 strings to match.
        switch (RuleIdentifier[15]) {
        default: break;
        case 'c':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+16, "eil", 3) != 0)
            break;
          return 18;	 // "constant_fold_fceil"
        case 'l':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+16, "og2", 3) != 0)
            break;
          return 15;	 // "constant_fold_flog2"
        case 'p':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+16, "ext", 3) != 0)
            break;
          return 17;	 // "constant_fold_fpext"
        case 'r':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+16, "int", 3) != 0)
            break;
          return 23;	 // "constant_fold_frint"
        case 's':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+16, "qrt", 3) != 0)
            break;
          return 14;	 // "constant_fold_fsqrt"
        }
        break;
      }
      break;
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nteger_of_truncate", 18) != 0)
        break;
      return 28;	 // "integer_of_truncate"
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "erge_of_x_and_zero", 18) != 0)
        break;
      return 65;	 // "merge_of_x_and_zero"
    case 'p':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "tr_add_immed_chain", 18) != 0)
        break;
      return 91;	 // "ptr_add_immed_chain"
    case 'r':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'i':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "ght_identity_zero", 17) != 0)
          break;
        return 70;	 // "right_identity_zero"
      case 'o':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "tate_out_of_range", 17) != 0)
          break;
        return 45;	 // "rotate_out_of_range"
      }
      break;
    case 's':	 // 2 strings to match.
      if (RuleIdentifier[1] != 'e')
        break;
      switch (RuleIdentifier[2]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "ect_constant_cmp", 16) != 0)
          break;
        return 50;	 // "select_constant_cmp"
      case 'x':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "t_trunc_sextload", 16) != 0)
          break;
        return 33;	 // "sext_trunc_sextload"
      }
      break;
    case 'u':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nary_undef_to_zero", 18) != 0)
        break;
      return 99;	 // "unary_undef_to_zero"
    }
    break;
  case 20:	 // 7 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "itcast_bitcast_fold", 19) != 0)
        break;
      return 85;	 // "bitcast_bitcast_fold"
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "onstant_fold_ffloor", 19) != 0)
        break;
      return 19;	 // "constant_fold_ffloor"
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "erge_of_x_and_undef", 19) != 0)
        break;
      return 64;	 // "merge_of_x_and_undef"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "edundant_sext_inreg", 19) != 0)
        break;
      return 40;	 // "redundant_sext_inreg"
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "plit_store_zero_128", 19) != 0)
        break;
      return 93;	 // "split_store_zero_128"
    case 'u':	 // 2 strings to match.
      if (RuleIdentifier[1] != 'n')
        break;
      switch (RuleIdentifier[2]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "ry_undef_to_undef", 17) != 0)
          break;
        return 100;	 // "unary_undef_to_undef"
      case 'm':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "erge_zext_to_zext", 17) != 0)
          break;
        return 63;	 // "unmerge_zext_to_zext"
      }
      break;
    }
    break;
  case 21:	 // 8 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'c':	 // 3 strings to match.
      if (RuleIdentifier[1] != 'o')
        break;
      switch (RuleIdentifier[2]) {
      default: break;
      case 'm':	 // 2 strings to match.
        if (memcmp(RuleIdentifier.data()+3, "bine_", 5) != 0)
          break;
        switch (RuleIdentifier[8]) {
        default: break;
        case 'b':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+9, "uild_unmerge", 12) != 0)
            break;
          return 66;	 // "combine_build_unmerge"
        case 'c':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+9, "oncat_vector", 12) != 0)
            break;
          return 108;	 // "combine_concat_vector"
        }
        break;
      case 'n':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "stant_fold_fptrunc", 18) != 0)
          break;
        return 16;	 // "constant_fold_fptrunc"
      }
      break;
    case 'l':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "shr_of_trunc_of_lshr", 20) != 0)
        break;
      return 123;	 // "lshr_of_trunc_of_lshr"
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "utate_anyext_to_zext", 20) != 0)
        break;
      return 29;	 // "mutate_anyext_to_zext"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ight_identity_one_fp", 20) != 0)
        break;
      return 80;	 // "right_identity_one_fp"
    case 'u':	 // 2 strings to match.
      if (RuleIdentifier[1] != 'n')
        break;
      switch (RuleIdentifier[2]) {
      default: break;
      case 'd':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "ef_to_negative_one", 18) != 0)
          break;
        return 96;	 // "undef_to_negative_one"
      case 'm':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "erge_dead_to_trunc", 18) != 0)
          break;
        return 62;	 // "unmerge_dead_to_trunc"
      }
      break;
    }
    break;
  case 22:	 // 5 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "onstant_fold_fp_binop", 21) != 0)
        break;
      return 68;	 // "constant_fold_fp_binop"
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "atch_subo_no_overflow", 21) != 0)
        break;
      return 48;	 // "match_subo_no_overflow"
    case 'p':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ropagate_undef_any_op", 21) != 0)
        break;
      return 101;	 // "propagate_undef_any_op"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ight_identity_one_int", 21) != 0)
        break;
      return 79;	 // "right_identity_one_int"
    case 't':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "runc_buildvector_fold", 21) != 0)
        break;
      return 83;	 // "trunc_buildvector_fold"
    }
    break;
  case 23:	 // 5 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "uildvector_of_truncate", 22) != 0)
        break;
      return 27;	 // "buildvector_of_truncate"
    case 'i':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "tof_const_zero_fold_", 20) != 0)
        break;
      switch (RuleIdentifier[21]) {
      default: break;
      case 's':	 // 1 string to match.
        if (RuleIdentifier[22] != 'i')
          break;
        return 25;	 // "itof_const_zero_fold_si"
      case 'u':	 // 1 string to match.
        if (RuleIdentifier[22] != 'i')
          break;
        return 26;	 // "itof_const_zero_fold_ui"
      }
      break;
    case 'p':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ropagate_undef_all_ops", 22) != 0)
        break;
      return 102;	 // "propagate_undef_all_ops"
    case 't':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "runcusatu_to_fptouisat", 22) != 0)
        break;
      return 122;	 // "truncusatu_to_fptouisat"
    }
    break;
  case 24:	 // 4 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "inop_left_undef_to_zero", 23) != 0)
        break;
      return 97;	 // "binop_left_undef_to_zero"
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "onstant_fold_fnearbyint", 23) != 0)
        break;
      return 24;	 // "constant_fold_fnearbyint"
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ext_inreg_of_sext_inreg", 23) != 0)
        break;
      return 11;	 // "sext_inreg_of_sext_inreg"
    case 'x':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "or_of_and_with_same_reg", 23) != 0)
        break;
      return 36;	 // "xor_of_and_with_same_reg"
    }
    break;
  case 25:	 // 5 strings to match.
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
          return 42;	 // "bitfield_extract_from_and"
        case 's':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+23, "hr", 2) != 0)
            break;
          return 43;	 // "bitfield_extract_from_shr"
        }
        break;
      case 'u':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "ildvector_identity_fold", 23) != 0)
          break;
        return 82;	 // "buildvector_identity_fold"
      }
      break;
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "xtract_vec_elt_build_vec", 24) != 0)
        break;
      return 112;	 // "extract_vec_elt_build_vec"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ight_identity_neg_one_fp", 24) != 0)
        break;
      return 90;	 // "right_identity_neg_one_fp"
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
        return 98;	 // "binop_right_undef_to_undef"
      case 't':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "cast_bitcast_to_bitcast", 23) != 0)
          break;
        return 86;	 // "bitcast_bitcast_to_bitcast"
      }
      break;
    case 'c':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "om", 2) != 0)
        break;
      switch (RuleIdentifier[3]) {
      default: break;
      case 'b':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+4, "ine_indexed_load_store", 22) != 0)
          break;
        return 32;	 // "combine_indexed_load_store"
      case 'm':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+4, "ute_fp_constant_to_rhs", 22) != 0)
          break;
        return 111;	 // "commute_fp_constant_to_rhs"
      }
      break;
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "xtractvecelt_pairwise_add", 25) != 0)
        break;
      return 37;	 // "extractvecelt_pairwise_add"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ight_identity_neg_zero_fp", 25) != 0)
        break;
      return 88;	 // "right_identity_neg_zero_fp"
    }
    break;
  case 27:	 // 4 strings to match.
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
        return 116;	 // "combine_use_vector_truncate"
      case 'm':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+4, "ute_int_constant_to_rhs", 23) != 0)
          break;
        return 110;	 // "commute_int_constant_to_rhs"
      }
      break;
    case 't':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "runc_lshr_buildvector_fold", 26) != 0)
        break;
      return 84;	 // "trunc_lshr_buildvector_fold"
    case 'u':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nmerge_anyext_build_vector", 26) != 0)
        break;
      return 57;	 // "unmerge_anyext_build_vector"
    }
    break;
  case 28:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "propagate_undef_shuffle_mask", 28) != 0)
      break;
    return 103;	 // "propagate_undef_shuffle_mask"
  case 29:	 // 4 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "itfield_extract_from_shr_and", 28) != 0)
        break;
      return 44;	 // "bitfield_extract_from_shr_and"
    case 'c':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "onstant_fold_intrinsic_", 23) != 0)
        break;
      switch (RuleIdentifier[24]) {
      default: break;
      case 'r':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+25, "ound", 4) != 0)
          break;
        return 21;	 // "constant_fold_intrinsic_round"
      case 't':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+25, "runc", 4) != 0)
          break;
        return 20;	 // "constant_fold_intrinsic_trunc"
      }
      break;
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "cmp_to_true_false_known_bits", 28) != 0)
        break;
      return 46;	 // "icmp_to_true_false_known_bits"
    }
    break;
  case 30:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "right_identity_neg_zero_fp_nsz", 30) != 0)
      break;
    return 89;	 // "right_identity_neg_zero_fp_nsz"
  case 31:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "combine_build_vector_of_bitcast", 31) != 0)
      break;
    return 109;	 // "combine_build_vector_of_bitcast"
  case 32:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "bitfield_extract_from_sext_inreg", 32) != 0)
      break;
    return 41;	 // "bitfield_extract_from_sext_inreg"
  case 33:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "constant_fold_intrinsic_roundeven", 33) != 0)
      break;
    return 22;	 // "constant_fold_intrinsic_roundeven"
  case 34:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "extract_all_elts_from_build_vector", 34) != 0)
      break;
    return 113;	 // "extract_all_elts_from_build_vector"
  case 36:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "insert_extract_vec_elt_out_of_bounds", 36) != 0)
      break;
    return 105;	 // "insert_extract_vec_elt_out_of_bounds"
  case 37:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "hoist_logic_op_with_same_opcode_hands", 37) != 0)
      break;
    return 34;	 // "hoist_logic_op_with_same_opcode_hands"
  case 46:	 // 2 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'f':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "unnel_shift_from_or_shift_constants_are_legal", 45) != 0)
        break;
      return 124;	 // "funnel_shift_from_or_shift_constants_are_legal"
    case 'p':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ush_freeze_to_prevent_poison_from_propagating", 45) != 0)
        break;
      return 114;	 // "push_freeze_to_prevent_poison_from_propagating"
    }
    break;
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
    return {{0, 125}};
  }
  const auto I = getRuleIdxForIdentifier(RangePair.first);
  if (!I)
    return std::nullopt;
  return {{*I, *I + 1}};
}

bool AArch64PostLegalizerCombinerImplRuleConfig::setRuleEnabled(StringRef RuleIdentifier) {
  auto MaybeRange = getRuleRangeForIdentifier(RuleIdentifier);
  if (!MaybeRange)
    return false;
  for (auto I = MaybeRange->first; I < MaybeRange->second; ++I)
    DisabledRules.reset(I);
  return true;
}

bool AArch64PostLegalizerCombinerImplRuleConfig::setRuleDisabled(StringRef RuleIdentifier) {
  auto MaybeRange = getRuleRangeForIdentifier(RuleIdentifier);
  if (!MaybeRange)
    return false;
  for (auto I = MaybeRange->first; I < MaybeRange->second; ++I)
    DisabledRules.set(I);
  return true;
}

static std::vector<std::string> AArch64PostLegalizerCombinerOption;
static cl::list<std::string> AArch64PostLegalizerCombinerDisableOption(
    "aarch64postlegalizercombiner-disable-rule",
    cl::desc("Disable one or more combiner rules temporarily in the AArch64PostLegalizerCombiner pass"),
    cl::CommaSeparated,
    cl::Hidden,
    cl::cat(GICombinerOptionCategory),
    cl::callback([](const std::string &Str) {
      AArch64PostLegalizerCombinerOption.push_back(Str);
    }));
static cl::list<std::string> AArch64PostLegalizerCombinerOnlyEnableOption(
    "aarch64postlegalizercombiner-only-enable-rule",
    cl::desc("Disable all rules in the AArch64PostLegalizerCombiner pass then re-enable the specified ones"),
    cl::Hidden,
    cl::cat(GICombinerOptionCategory),
    cl::callback([](const std::string &CommaSeparatedArg) {
      StringRef Str = CommaSeparatedArg;
      AArch64PostLegalizerCombinerOption.push_back("*");
      do {
        auto X = Str.split(",");
        AArch64PostLegalizerCombinerOption.push_back(("!" + X.first).str());
        Str = X.second;
      } while (!Str.empty());
    }));


bool AArch64PostLegalizerCombinerImplRuleConfig::isRuleEnabled(unsigned RuleID) const {
    return  !DisabledRules.test(RuleID);
}
bool AArch64PostLegalizerCombinerImplRuleConfig::parseCommandLineOption() {
  for (StringRef Identifier : AArch64PostLegalizerCombinerOption) {
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
  typedef ComplexRendererFns(AArch64PostLegalizerCombinerImpl::*ComplexMatcherMemFn)(MachineOperand &) const;
  typedef void(AArch64PostLegalizerCombinerImpl::*CustomRendererFn)(MachineInstrBuilder &, const MachineInstr &, int) const;
  const ExecInfoTy<PredicateBitset, ComplexMatcherMemFn, CustomRendererFn> ExecInfo;
  static AArch64PostLegalizerCombinerImpl::ComplexMatcherMemFn ComplexPredicateFns[];
  static AArch64PostLegalizerCombinerImpl::CustomRendererFn CustomRenderers[];
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

PredicateBitset AArch64PostLegalizerCombinerImpl::
computeAvailableModuleFeatures(const AArch64Subtarget *Subtarget) const {
  PredicateBitset Features{};
  return Features;
}

void AArch64PostLegalizerCombinerImpl::setupGeneratedPerFunctionState(MachineFunction &MF) {
  AvailableFunctionFeatures = computeAvailableFunctionFeatures((const AArch64Subtarget *)&MF.getSubtarget(), &MF);
}
PredicateBitset AArch64PostLegalizerCombinerImpl::
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

AArch64PostLegalizerCombinerImpl::ComplexMatcherMemFn
AArch64PostLegalizerCombinerImpl::ComplexPredicateFns[] = {
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
};
bool AArch64PostLegalizerCombinerImpl::testMIPredicate_MI(unsigned PredicateID, const MachineInstr & MI, const MatcherState &State) const {
  switch (PredicateID) {
  case GICXXPred_MI_Predicate_GICombiner0: {
    return MRI.getType(State.MIs[0]->getOperand(1).getReg()) == MRI.getType(State.MIs[0]->getOperand(0).getReg()) &&
                      VT->computeNumSignBits(State.MIs[0]->getOperand(1).getReg()) == MRI.getType(State.MIs[0]->getOperand(0).getReg()).getScalarSizeInBits();
  }
  case GICXXPred_MI_Predicate_GICombiner1: {
    return Helper.matchConstantFPOp(State.MIs[0]->getOperand(2), 1.0);
  }
  case GICXXPred_MI_Predicate_GICombiner2: {
    return MRI.getType(State.MIs[1]->getOperand(1).getReg()) != MRI.getType(State.MIs[0]->getOperand(0).getReg());
  }
  case GICXXPred_MI_Predicate_GICombiner3: {
    return Helper.matchConstantFPOp(State.MIs[0]->getOperand(2), -0.0);
  }
  case GICXXPred_MI_Predicate_GICombiner4: {
    return Helper.matchConstantFPOp(State.MIs[0]->getOperand(2), 0.0);
  }
  case GICXXPred_MI_Predicate_GICombiner5: {
    return Helper.matchConstantFPOp(State.MIs[0]->getOperand(2), -1.0);
  }
  case GICXXPred_MI_Predicate_GICombiner6: {
    return Helper.matchTruncUSatU(*State.MIs[0], *State.MIs[1]);
  }
  case GICXXPred_MI_Predicate_GICombiner7: {
    return Helper.matchTruncUSatUToFPTOUISat(*State.MIs[0], *State.MIs[1]);
  }
  }
  llvm_unreachable("Unknown predicate");
  return false;
}
bool AArch64PostLegalizerCombinerImpl::testMOPredicate_MO(unsigned PredicateID, const MachineOperand & MO, const MatcherState &State) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool AArch64PostLegalizerCombinerImpl::testImmPredicate_I64(unsigned PredicateID, int64_t Imm) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool AArch64PostLegalizerCombinerImpl::testImmPredicate_APFloat(unsigned PredicateID, const APFloat & Imm) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool AArch64PostLegalizerCombinerImpl::testImmPredicate_APInt(unsigned PredicateID, const APInt & Imm) const {
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
};

bool AArch64PostLegalizerCombinerImpl::testSimplePredicate(unsigned Predicate) const {
    return RuleConfig.isRuleEnabled(Predicate - GICXXPred_Invalid - 1);
}
// Custom renderers.
enum {
  GICR_Invalid,
};
AArch64PostLegalizerCombinerImpl::CustomRendererFn
AArch64PostLegalizerCombinerImpl::CustomRenderers[] = {
  nullptr, // GICR_Invalid
};

static bool AArch64PostLegalizerCombinerImpl_canMatchOpcode(unsigned Opc) {
  switch (Opc) {
  case TargetOpcode::G_SELECT:
  case TargetOpcode::G_ADD:
  case TargetOpcode::G_AND:
  case TargetOpcode::G_ASHR:
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
  case TargetOpcode::G_FREM:
  case TargetOpcode::G_FSUB:
  case TargetOpcode::G_LSHR:
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
  case TargetOpcode::G_ANYEXT:
  case TargetOpcode::G_BITCAST:
  case TargetOpcode::G_BUILD_VECTOR:
  case TargetOpcode::G_FABS:
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
  case TargetOpcode::G_STORE:
  case TargetOpcode::G_TRUNC:
  case TargetOpcode::G_TRUNC_USAT_U:
  case TargetOpcode::G_UITOFP:
  case TargetOpcode::G_ZEXT:
  case TargetOpcode::G_ABS:
  case TargetOpcode::G_BUILD_VECTOR_TRUNC:
  case TargetOpcode::G_CONCAT_VECTORS:
  case TargetOpcode::G_EXTRACT_VECTOR_ELT:
  case TargetOpcode::G_FMAXNUM_IEEE:
  case TargetOpcode::G_FMINNUM_IEEE:
  case TargetOpcode::G_ICMP:
  case TargetOpcode::G_INSERT_VECTOR_ELT:
  case TargetOpcode::G_LOAD:
  case TargetOpcode::G_SADDO:
  case TargetOpcode::G_SADDSAT:
  case TargetOpcode::G_SEXTLOAD:
  case TargetOpcode::G_SHUFFLE_VECTOR:
  case TargetOpcode::G_SMAX:
  case TargetOpcode::G_SMIN:
  case TargetOpcode::G_SMULFIX:
  case TargetOpcode::G_SMULFIXSAT:
  case TargetOpcode::G_SMULH:
  case TargetOpcode::G_SMULO:
  case TargetOpcode::G_SSUBO:
  case TargetOpcode::G_UADDO:
  case TargetOpcode::G_UADDSAT:
  case TargetOpcode::G_UMAX:
  case TargetOpcode::G_UMIN:
  case TargetOpcode::G_UMULFIX:
  case TargetOpcode::G_UMULFIXSAT:
  case TargetOpcode::G_UMULH:
  case TargetOpcode::G_UMULO:
  case TargetOpcode::G_UNMERGE_VALUES:
  case TargetOpcode::G_USUBO:
  case TargetOpcode::G_ZEXTLOAD:
    return true;
  default:
    return false;
  }
}

bool AArch64PostLegalizerCombinerImpl::tryCombineAll(MachineInstr &I) const {
  if (!AArch64PostLegalizerCombinerImpl_canMatchOpcode(I.getOpcode()))
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
};
bool AArch64PostLegalizerCombinerImpl::runCustomAction(unsigned ApplyID, const MatcherState &State, NewMIVector &OutMIs) const {
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
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchTruncateOfExt(*State.MIs[0], *State.MIs[1], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner2:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtOfExt(*State.MIs[0], *State.MIs[1], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner3:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchRedundantSextInReg(*State.MIs[0], *State.MIs[1], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner4:{
    // Apply Patterns
    Helper.applyCombineConstantFoldFpUnary(*State.MIs[0], State.MIs[1]->getOperand(1).getFPImm());
    return true;
  }
  case GICXXCustomAction_GICombiner5:{
    // Apply Patterns
    Helper.replaceInstWithFConstant(*State.MIs[0]->getOperand(0).getParent(), 0.0);
    return true;
  }
  case GICXXCustomAction_GICombiner6:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCastOfBuildVector(*State.MIs[0], *State.MIs[1], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner7:{
    APInt GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCastOfInteger(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithConstant(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner8:{
    // Match Patterns
    if(![&](){return matchMutateAnyExtToZExt(*State.MIs[0], MRI);}()) {
      return false;
    }
    // Apply Patterns
    applyMutateAnyExtToZExt(*State.MIs[0], MRI, B, Observer);
    return true;
  }
  case GICXXCustomAction_GICombiner9:{
    PreferredTuple GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineExtendingLoads(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineExtendingLoads(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner10:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineLoadWithAndMask(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner11:{
    IndexedLoadStoreMatchInfo GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineIndexedLoadStore(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineIndexedLoadStore(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner12:{
    // Match Patterns
    if(![&](){return Helper.matchSextTruncSextLoad(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applySextTruncSextLoad(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner13:{
    InstructionStepsMatchInfo GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchHoistLogicOpWithSameOpcodeHands(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildInstructionSteps(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner14:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchRedundantAnd(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner15:{
    std::pair<Register, Register> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchXorOfAndWithSameReg(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyXorOfAndWithSameReg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner16:{
    std::tuple<unsigned, LLT, Register> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchExtractVecEltPairwiseAdd(*State.MIs[0], MRI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyExtractVecEltPairwiseAdd(*State.MIs[0], MRI, B, GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner17:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchRedundantOr(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner18:{
    std::function<void(MachineIRBuilder&, Register)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchAArch64MulConstCombine(*State.MIs[0], MRI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyAArch64MulConstCombine(*State.MIs[0], MRI, B, GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner19:{
    // Match Patterns
    if(![&](){return Helper.matchRedundantSExtInReg(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithOperand(*State.MIs[0], 1);
    return true;
  }
  case GICXXCustomAction_GICombiner20:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchBitfieldExtractFromSExtInReg(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner21:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchBitfieldExtractFromAnd(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner22:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchBitfieldExtractFromShr(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner23:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchBitfieldExtractFromShrAnd(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner24:{
    // Match Patterns
    if(![&](){return Helper.matchRotateOutOfRange(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyRotateOutOfRange(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner25:{
    int64_t GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchICmpToTrueFalseKnownBits(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithConstant(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner26:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchAddOverflow(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner27:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchSuboCarryOut(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner28:{
    unsigned GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchConstantSelectCmp(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithOperand(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner29:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchSelectIMinMax(State.MIs[0]->getOperand(0), GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner30:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchSelect(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner31:{
    // Match Patterns
    if(![&](){return matchFoldMergeToZext(*State.MIs[0], MRI);}()) {
      return false;
    }
    // Apply Patterns
    applyFoldMergeToZext(*State.MIs[0], MRI, B, Observer);
    return true;
  }
  case GICXXCustomAction_GICombiner32:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchUnmergeValuesAnyExtBuildVector(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner33:{
    SmallVector<Register> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineUnmergeMergeToPlainValues(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineUnmergeMergeToPlainValues(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner34:{
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
  case GICXXCustomAction_GICombiner35:{
    SmallVector<APInt, 8> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineUnmergeConstant(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineUnmergeConstant(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner36:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineUnmergeUndef(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner37:{
    // Match Patterns
    if(![&](){return Helper.matchCombineUnmergeWithDeadLanesToTrunc(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineUnmergeWithDeadLanesToTrunc(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner38:{
    // Match Patterns
    if(![&](){return Helper.matchCombineUnmergeZExtToZExt(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineUnmergeZExtToZExt(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner39:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchMergeXAndUndef(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner40:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchMergeXAndZero(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner41:{
    Register GIMatchData_unmergeSrc;
    // Match Patterns
    if(![&](){return Helper.matchCombineBuildUnmerge(*State.MIs[0], MRI, GIMatchData_unmergeSrc);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineBuildUnmerge(*State.MIs[0], MRI, B, GIMatchData_unmergeSrc);
    return true;
  }
  case GICXXCustomAction_GICombiner42:{
    APInt GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchConstantFoldBinOp(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithConstant(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner43:{
    ConstantFP* GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchConstantFoldFPBinOp(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithFConstant(*State.MIs[0], GIMatchData_matchinfo);
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
    PtrAddChain GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchPtrAddImmedChain(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyPtrAddImmedChain(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner53:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchOverlappingAnd(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner54:{
    // Match Patterns
    if(![&](){return matchSplitStoreZero128(*State.MIs[0], MRI);}()) {
      return false;
    }
    // Apply Patterns
    applySplitStoreZero128(*State.MIs[0], MRI, B, Observer);
    return true;
  }
  case GICXXCustomAction_GICombiner55:{
    // Match Patterns
    if(![&](){return Helper.matchAnyExplicitUseIsUndef(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithFConstant(*State.MIs[0], 0.0);
    return true;
  }
  case GICXXCustomAction_GICombiner56:{
    // Match Patterns
    if(![&](){return Helper.matchAnyExplicitUseIsUndef(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithConstant(*State.MIs[0], 0);
    return true;
  }
  case GICXXCustomAction_GICombiner57:{
    // Match Patterns
    if(![&](){return Helper.matchAnyExplicitUseIsUndef(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithConstant(*State.MIs[0], -1);
    return true;
  }
  case GICXXCustomAction_GICombiner58:{
    // Match Patterns
    if(![&](){return Helper.matchOperandIsUndef(*State.MIs[0], 1);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithConstant(*State.MIs[0], 0);
    return true;
  }
  case GICXXCustomAction_GICombiner59:{
    // Match Patterns
    if(![&](){return Helper.matchOperandIsUndef(*State.MIs[0], 2);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithUndef(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner60:{
    // Apply Patterns
    Helper.replaceInstWithUndef(*State.MIs[0]->getOperand(0).getParent());
    return true;
  }
  case GICXXCustomAction_GICombiner61:{
    // Match Patterns
    if(![&](){return Helper.matchAnyExplicitUseIsUndef(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithUndef(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner62:{
    // Match Patterns
    if(![&](){return Helper.matchAllExplicitUsesAreUndef(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithUndef(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner63:{
    // Match Patterns
    if(![&](){return Helper.matchUndefShuffleVectorMask(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithUndef(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner64:{
    // Match Patterns
    if(![&](){return Helper.matchUndefStore(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.eraseInst(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner65:{
    // Match Patterns
    if(![&](){return Helper.matchInsertExtractVecEltOutOfBounds(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithUndef(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner66:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchSimplifySelectToMinMax(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner67:{
    std::tuple<Register, Register, Register> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchOrToBSP(*State.MIs[0], MRI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyOrToBSP(*State.MIs[0], MRI, B, GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner68:{
    SmallVector<Register> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineConcatVectors(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineConcatVectors(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner69:{
    SmallVector<Register> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineBuildVectorOfBitcast(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineBuildVectorOfBitcast(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner70:{
    // Match Patterns
    if(![&](){return Helper.matchCommuteConstantToRHS(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCommuteBinOpOperands(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner71:{
    // Match Patterns
    if(![&](){return Helper.matchCommuteFPConstantToRHS(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCommuteBinOpOperands(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner72:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtractVecEltBuildVec(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyExtractVecEltBuildVec(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner73:{
    SmallVector<std::pair<Register, MachineInstr*>> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtractAllEltsFromBuildVector(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyExtractAllEltsFromBuildVector(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner74:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return !isGuaranteedNotToBePoison(State.MIs[0]->getOperand(1).getReg(), MRI) && Helper.matchFreezeOfSingleMaybePoisonOperand(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner75:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchCombineMulCMLT(*State.MIs[0], MRI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyCombineMulCMLT(*State.MIs[0], MRI, B, GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner76:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchUseVectorTruncate(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyUseVectorTruncate(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner77:{
    std::tuple<bool, Register, Register> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchExtMulToMULL(*State.MIs[0], MRI, VT, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyExtMulToMULL(*State.MIs[0], MRI, B, Observer, GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner78:{
    // Match Patterns
    if(![&](){return matchSubAddMulReassoc(State.MIs[1]->getOperand(1).getReg(), State.MIs[1]->getOperand(2).getReg(),
                                                 State.MIs[0]->getOperand(2).getReg(), State.MIs[0]->getOperand(1).getReg(), MRI);}()) {
      return false;
    }
    // Apply Patterns
    applySubAddMulReassoc(*State.MIs[0], *State.MIs[1], MRI, B, Observer);
    return true;
  }
  case GICXXCustomAction_GICombiner79:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchTruncSSatS(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyTruncSSatS(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner80:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchTruncSSatU(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyTruncSSatU(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner81:{
    LshrOfTruncOfLshr GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchLshrOfTruncOfLshr(*State.MIs[0], GIMatchData_matchinfo, *State.MIs[2]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyLshrOfTruncOfLshr(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner82:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchOrShiftToFunnelShift(*State.MIs[0], true, GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
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
const uint8_t *AArch64PostLegalizerCombinerImpl::getMatchTable() const {
  constexpr static uint8_t MatchTable0[] = {
     /*    0 */ GIM_SwitchOpcode, /*MI*/0, /*[*/GIMT_Encode2(20), GIMT_Encode2(285), /*)*//*default:*//*Label 91*/ GIMT_Encode4(4942),
     /*   10 */ /*TargetOpcode::COPY*//*Label 0*/ GIMT_Encode4(1070), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  150 */ /*TargetOpcode::G_ADD*//*Label 1*/ GIMT_Encode4(1082),
     /*  154 */ /*TargetOpcode::G_SUB*//*Label 2*/ GIMT_Encode4(1207),
     /*  158 */ /*TargetOpcode::G_MUL*//*Label 3*/ GIMT_Encode4(1313),
     /*  162 */ /*TargetOpcode::G_SDIV*//*Label 4*/ GIMT_Encode4(1466),
     /*  166 */ /*TargetOpcode::G_UDIV*//*Label 5*/ GIMT_Encode4(1518),
     /*  170 */ /*TargetOpcode::G_SREM*//*Label 6*/ GIMT_Encode4(1581),
     /*  174 */ /*TargetOpcode::G_UREM*//*Label 7*/ GIMT_Encode4(1633), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  186 */ /*TargetOpcode::G_AND*//*Label 8*/ GIMT_Encode4(1696),
     /*  190 */ /*TargetOpcode::G_OR*//*Label 9*/ GIMT_Encode4(1835),
     /*  194 */ /*TargetOpcode::G_XOR*//*Label 10*/ GIMT_Encode4(1960), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  250 */ /*TargetOpcode::G_UNMERGE_VALUES*//*Label 11*/ GIMT_Encode4(2078), GIMT_Encode4(0),
     /*  258 */ /*TargetOpcode::G_MERGE_VALUES*//*Label 12*/ GIMT_Encode4(2145),
     /*  262 */ /*TargetOpcode::G_BUILD_VECTOR*//*Label 13*/ GIMT_Encode4(2233),
     /*  266 */ /*TargetOpcode::G_BUILD_VECTOR_TRUNC*//*Label 14*/ GIMT_Encode4(2309),
     /*  270 */ /*TargetOpcode::G_CONCAT_VECTORS*//*Label 15*/ GIMT_Encode4(2321),
     /*  274 */ /*TargetOpcode::G_PTRTOINT*//*Label 16*/ GIMT_Encode4(2333),
     /*  278 */ /*TargetOpcode::G_INTTOPTR*//*Label 17*/ GIMT_Encode4(2376),
     /*  282 */ /*TargetOpcode::G_BITCAST*//*Label 18*/ GIMT_Encode4(2409),
     /*  286 */ /*TargetOpcode::G_FREEZE*//*Label 19*/ GIMT_Encode4(2484), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  298 */ /*TargetOpcode::G_INTRINSIC_TRUNC*//*Label 20*/ GIMT_Encode4(2496),
     /*  302 */ /*TargetOpcode::G_INTRINSIC_ROUND*//*Label 21*/ GIMT_Encode4(2518), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  314 */ /*TargetOpcode::G_INTRINSIC_ROUNDEVEN*//*Label 22*/ GIMT_Encode4(2540), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  326 */ /*TargetOpcode::G_LOAD*//*Label 23*/ GIMT_Encode4(2562),
     /*  330 */ /*TargetOpcode::G_SEXTLOAD*//*Label 24*/ GIMT_Encode4(2585),
     /*  334 */ /*TargetOpcode::G_ZEXTLOAD*//*Label 25*/ GIMT_Encode4(2608), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  354 */ /*TargetOpcode::G_STORE*//*Label 26*/ GIMT_Encode4(2631), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  502 */ /*TargetOpcode::G_ANYEXT*//*Label 27*/ GIMT_Encode4(2665),
     /*  506 */ /*TargetOpcode::G_TRUNC*//*Label 28*/ GIMT_Encode4(2772), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  518 */ /*TargetOpcode::G_TRUNC_USAT_U*//*Label 29*/ GIMT_Encode4(2978), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  538 */ /*TargetOpcode::G_SEXT*//*Label 30*/ GIMT_Encode4(3011),
     /*  542 */ /*TargetOpcode::G_SEXT_INREG*//*Label 31*/ GIMT_Encode4(3054),
     /*  546 */ /*TargetOpcode::G_ZEXT*//*Label 32*/ GIMT_Encode4(3109),
     /*  550 */ /*TargetOpcode::G_SHL*//*Label 33*/ GIMT_Encode4(3152),
     /*  554 */ /*TargetOpcode::G_LSHR*//*Label 34*/ GIMT_Encode4(3249),
     /*  558 */ /*TargetOpcode::G_ASHR*//*Label 35*/ GIMT_Encode4(3386), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  570 */ /*TargetOpcode::G_ROTR*//*Label 36*/ GIMT_Encode4(3494),
     /*  574 */ /*TargetOpcode::G_ROTL*//*Label 37*/ GIMT_Encode4(3529),
     /*  578 */ /*TargetOpcode::G_ICMP*//*Label 38*/ GIMT_Encode4(3564), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  594 */ /*TargetOpcode::G_SELECT*//*Label 39*/ GIMT_Encode4(3576),
     /*  598 */ /*TargetOpcode::G_UADDO*//*Label 40*/ GIMT_Encode4(3836), GIMT_Encode4(0),
     /*  606 */ /*TargetOpcode::G_USUBO*//*Label 41*/ GIMT_Encode4(3859), GIMT_Encode4(0),
     /*  614 */ /*TargetOpcode::G_SADDO*//*Label 42*/ GIMT_Encode4(3871), GIMT_Encode4(0),
     /*  622 */ /*TargetOpcode::G_SSUBO*//*Label 43*/ GIMT_Encode4(3894), GIMT_Encode4(0),
     /*  630 */ /*TargetOpcode::G_UMULO*//*Label 44*/ GIMT_Encode4(3906),
     /*  634 */ /*TargetOpcode::G_SMULO*//*Label 45*/ GIMT_Encode4(3918),
     /*  638 */ /*TargetOpcode::G_UMULH*//*Label 46*/ GIMT_Encode4(3930),
     /*  642 */ /*TargetOpcode::G_SMULH*//*Label 47*/ GIMT_Encode4(3942),
     /*  646 */ /*TargetOpcode::G_UADDSAT*//*Label 48*/ GIMT_Encode4(3954),
     /*  650 */ /*TargetOpcode::G_SADDSAT*//*Label 49*/ GIMT_Encode4(3966), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  670 */ /*TargetOpcode::G_SMULFIX*//*Label 50*/ GIMT_Encode4(3978),
     /*  674 */ /*TargetOpcode::G_UMULFIX*//*Label 51*/ GIMT_Encode4(3990),
     /*  678 */ /*TargetOpcode::G_SMULFIXSAT*//*Label 52*/ GIMT_Encode4(4002),
     /*  682 */ /*TargetOpcode::G_UMULFIXSAT*//*Label 53*/ GIMT_Encode4(4014), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  702 */ /*TargetOpcode::G_FADD*//*Label 54*/ GIMT_Encode4(4026),
     /*  706 */ /*TargetOpcode::G_FSUB*//*Label 55*/ GIMT_Encode4(4101),
     /*  710 */ /*TargetOpcode::G_FMUL*//*Label 56*/ GIMT_Encode4(4113), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  722 */ /*TargetOpcode::G_FDIV*//*Label 57*/ GIMT_Encode4(4179),
     /*  726 */ /*TargetOpcode::G_FREM*//*Label 58*/ GIMT_Encode4(4191), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  758 */ /*TargetOpcode::G_FLOG2*//*Label 59*/ GIMT_Encode4(4203), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  774 */ /*TargetOpcode::G_FNEG*//*Label 60*/ GIMT_Encode4(4225),
     /*  778 */ /*TargetOpcode::G_FPEXT*//*Label 61*/ GIMT_Encode4(4276),
     /*  782 */ /*TargetOpcode::G_FPTRUNC*//*Label 62*/ GIMT_Encode4(4298),
     /*  786 */ /*TargetOpcode::G_FPTOSI*//*Label 63*/ GIMT_Encode4(4341),
     /*  790 */ /*TargetOpcode::G_FPTOUI*//*Label 64*/ GIMT_Encode4(4363),
     /*  794 */ /*TargetOpcode::G_SITOFP*//*Label 65*/ GIMT_Encode4(4385),
     /*  798 */ /*TargetOpcode::G_UITOFP*//*Label 66*/ GIMT_Encode4(4412), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  810 */ /*TargetOpcode::G_FABS*//*Label 67*/ GIMT_Encode4(4439),
     /*  814 */ /*TargetOpcode::G_FCOPYSIGN*//*Label 68*/ GIMT_Encode4(4461), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  826 */ /*TargetOpcode::G_FMINNUM*//*Label 69*/ GIMT_Encode4(4473),
     /*  830 */ /*TargetOpcode::G_FMAXNUM*//*Label 70*/ GIMT_Encode4(4496),
     /*  834 */ /*TargetOpcode::G_FMINNUM_IEEE*//*Label 71*/ GIMT_Encode4(4519),
     /*  838 */ /*TargetOpcode::G_FMAXNUM_IEEE*//*Label 72*/ GIMT_Encode4(4531),
     /*  842 */ /*TargetOpcode::G_FMINIMUM*//*Label 73*/ GIMT_Encode4(4543),
     /*  846 */ /*TargetOpcode::G_FMAXIMUM*//*Label 74*/ GIMT_Encode4(4566),
     /*  850 */ /*TargetOpcode::G_FMINIMUMNUM*//*Label 75*/ GIMT_Encode4(4589),
     /*  854 */ /*TargetOpcode::G_FMAXIMUMNUM*//*Label 76*/ GIMT_Encode4(4601), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  890 */ /*TargetOpcode::G_PTR_ADD*//*Label 77*/ GIMT_Encode4(4613), GIMT_Encode4(0),
     /*  898 */ /*TargetOpcode::G_SMIN*//*Label 78*/ GIMT_Encode4(4659),
     /*  902 */ /*TargetOpcode::G_SMAX*//*Label 79*/ GIMT_Encode4(4682),
     /*  906 */ /*TargetOpcode::G_UMIN*//*Label 80*/ GIMT_Encode4(4705),
     /*  910 */ /*TargetOpcode::G_UMAX*//*Label 81*/ GIMT_Encode4(4728),
     /*  914 */ /*TargetOpcode::G_ABS*//*Label 82*/ GIMT_Encode4(4751), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /*  946 */ /*TargetOpcode::G_INSERT_VECTOR_ELT*//*Label 83*/ GIMT_Encode4(4763),
     /*  950 */ /*TargetOpcode::G_EXTRACT_VECTOR_ELT*//*Label 84*/ GIMT_Encode4(4775),
     /*  954 */ /*TargetOpcode::G_SHUFFLE_VECTOR*//*Label 85*/ GIMT_Encode4(4809), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /* 1006 */ /*TargetOpcode::G_FCEIL*//*Label 86*/ GIMT_Encode4(4832), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
     /* 1054 */ /*TargetOpcode::G_FSQRT*//*Label 87*/ GIMT_Encode4(4854),
     /* 1058 */ /*TargetOpcode::G_FFLOOR*//*Label 88*/ GIMT_Encode4(4876),
     /* 1062 */ /*TargetOpcode::G_FRINT*//*Label 89*/ GIMT_Encode4(4898),
     /* 1066 */ /*TargetOpcode::G_FNEARBYINT*//*Label 90*/ GIMT_Encode4(4920),
     /* 1070 */ // Label 0: @1070
     /* 1070 */ GIM_Try, /*On fail goto*//*Label 92*/ GIMT_Encode4(1081), // Rule ID 0 //
     /* 1075 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule0Enabled),
     /* 1078 */   // MIs[0] d
     /* 1078 */   // No operand predicates
     /* 1078 */   // MIs[0] s
     /* 1078 */   // No operand predicates
     /* 1078 */   // Combiner Rule #0: copy_prop
     /* 1078 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner0),
     /* 1081 */ // Label 92: @1081
     /* 1081 */ GIM_Reject,
     /* 1082 */ // Label 1: @1082
     /* 1082 */ GIM_Try, /*On fail goto*//*Label 93*/ GIMT_Encode4(1093), // Rule ID 79 //
     /* 1087 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule67Enabled),
     /* 1090 */   // Combiner Rule #67: constant_fold_binop; wip_match_opcode 'G_ADD'
     /* 1090 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner42),
     /* 1093 */ // Label 93: @1093
     /* 1093 */ GIM_Try, /*On fail goto*//*Label 94*/ GIMT_Encode4(1104), // Rule ID 173 //
     /* 1098 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule101Enabled),
     /* 1101 */   // Combiner Rule #101: propagate_undef_any_op; wip_match_opcode 'G_ADD'
     /* 1101 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner61),
     /* 1104 */ // Label 94: @1104
     /* 1104 */ GIM_Try, /*On fail goto*//*Label 95*/ GIMT_Encode4(1115), // Rule ID 186 //
     /* 1109 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule110Enabled),
     /* 1112 */   // Combiner Rule #110: commute_int_constant_to_rhs; wip_match_opcode 'G_ADD'
     /* 1112 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner70),
     /* 1115 */ // Label 95: @1115
     /* 1115 */ GIM_Try, /*On fail goto*//*Label 96*/ GIMT_Encode4(1149), // Rule ID 140 //
     /* 1120 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule81Enabled),
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
     /* 1143 */   // Combiner Rule #81: add_sub_reg @ [__add_sub_reg_match_0[1]]
     /* 1143 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
     /* 1148 */   GIR_EraseRootFromParent_Done,
     /* 1149 */ // Label 96: @1149
     /* 1149 */ GIM_Try, /*On fail goto*//*Label 97*/ GIMT_Encode4(1183), // Rule ID 139 //
     /* 1154 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule81Enabled),
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
     /* 1177 */   // Combiner Rule #81: add_sub_reg @ [__add_sub_reg_match_0[0]]
     /* 1177 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
     /* 1182 */   GIR_EraseRootFromParent_Done,
     /* 1183 */ // Label 97: @1183
     /* 1183 */ GIM_Try, /*On fail goto*//*Label 98*/ GIMT_Encode4(1206), // Rule ID 111 //
     /* 1188 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule70Enabled),
     /* 1191 */   // MIs[0] dst
     /* 1191 */   // No operand predicates
     /* 1191 */   // MIs[0] lhs
     /* 1191 */   // No operand predicates
     /* 1191 */   // MIs[0] Operand 2
     /* 1191 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /* 1195 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1200 */   // Combiner Rule #70: right_identity_zero @ [__right_identity_zero_match_0[1]]
     /* 1200 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1205 */   GIR_EraseRootFromParent_Done,
     /* 1206 */ // Label 98: @1206
     /* 1206 */ GIM_Reject,
     /* 1207 */ // Label 2: @1207
     /* 1207 */ GIM_Try, /*On fail goto*//*Label 99*/ GIMT_Encode4(1218), // Rule ID 87 //
     /* 1212 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule67Enabled),
     /* 1215 */   // Combiner Rule #67: constant_fold_binop; wip_match_opcode 'G_SUB'
     /* 1215 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner42),
     /* 1218 */ // Label 99: @1218
     /* 1218 */ GIM_Try, /*On fail goto*//*Label 100*/ GIMT_Encode4(1229), // Rule ID 174 //
     /* 1223 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule101Enabled),
     /* 1226 */   // Combiner Rule #101: propagate_undef_any_op; wip_match_opcode 'G_SUB'
     /* 1226 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner61),
     /* 1229 */ // Label 100: @1229
     /* 1229 */ GIM_Try, /*On fail goto*//*Label 101*/ GIMT_Encode4(1268), // Rule ID 122 //
     /* 1234 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule72Enabled),
     /* 1237 */   // MIs[0] dst
     /* 1237 */   // No operand predicates
     /* 1237 */   // MIs[0] x
     /* 1237 */   GIM_RecordRegType, /*MI*/0, /*Op*/1, /*TempTypeIdx*/255,
     /* 1241 */   // MIs[0] x
     /* 1241 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
     /* 1246 */   GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/255,
     /* 1249 */   GIR_BuildConstant, /*TempRegID*/0, /*Val*/GIMT_Encode8(0),
     /* 1259 */   // Combiner Rule #72: same_val_zero @ [__same_val_zero_match_0[0]]
     /* 1259 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::COPY),
     /* 1262 */   GIR_RootToRootCopy, /*OpIdx*/0, // dst
     /* 1264 */   GIR_AddSimpleTempRegister, /*InsnID*/0, /*TempRegID*/0,
     /* 1267 */   GIR_EraseRootFromParent_Done,
     /* 1268 */ // Label 101: @1268
     /* 1268 */ GIM_Try, /*On fail goto*//*Label 102*/ GIMT_Encode4(1289), // Rule ID 221 //
     /* 1273 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule118Enabled),
     /* 1276 */   // MIs[0] dst
     /* 1276 */   // No operand predicates
     /* 1276 */   // MIs[0] src3
     /* 1276 */   // No operand predicates
     /* 1276 */   // MIs[0] tmp
     /* 1276 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
     /* 1280 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ADD),
     /* 1284 */   // MIs[1] src1
     /* 1284 */   // No operand predicates
     /* 1284 */   // MIs[1] src2
     /* 1284 */   // No operand predicates
     /* 1284 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1286 */   // Combiner Rule #118: subaddmulreassoc
     /* 1286 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner78),
     /* 1289 */ // Label 102: @1289
     /* 1289 */ GIM_Try, /*On fail goto*//*Label 103*/ GIMT_Encode4(1312), // Rule ID 110 //
     /* 1294 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule70Enabled),
     /* 1297 */   // MIs[0] dst
     /* 1297 */   // No operand predicates
     /* 1297 */   // MIs[0] lhs
     /* 1297 */   // No operand predicates
     /* 1297 */   // MIs[0] Operand 2
     /* 1297 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /* 1301 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1306 */   // Combiner Rule #70: right_identity_zero @ [__right_identity_zero_match_0[0]]
     /* 1306 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1311 */   GIR_EraseRootFromParent_Done,
     /* 1312 */ // Label 103: @1312
     /* 1312 */ GIM_Reject,
     /* 1313 */ // Label 3: @1313
     /* 1313 */ GIM_Try, /*On fail goto*//*Label 104*/ GIMT_Encode4(1324), // Rule ID 46 //
     /* 1318 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule39Enabled),
     /* 1321 */   // Combiner Rule #39: mul_const; wip_match_opcode 'G_MUL'
     /* 1321 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner18),
     /* 1324 */ // Label 104: @1324
     /* 1324 */ GIM_Try, /*On fail goto*//*Label 105*/ GIMT_Encode4(1335), // Rule ID 84 //
     /* 1329 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule67Enabled),
     /* 1332 */   // Combiner Rule #67: constant_fold_binop; wip_match_opcode 'G_MUL'
     /* 1332 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner42),
     /* 1335 */ // Label 105: @1335
     /* 1335 */ GIM_Try, /*On fail goto*//*Label 106*/ GIMT_Encode4(1346), // Rule ID 157 //
     /* 1340 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule95Enabled),
     /* 1343 */   // Combiner Rule #95: undef_to_int_zero; wip_match_opcode 'G_MUL'
     /* 1343 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner56),
     /* 1346 */ // Label 106: @1346
     /* 1346 */ GIM_Try, /*On fail goto*//*Label 107*/ GIMT_Encode4(1357), // Rule ID 187 //
     /* 1351 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule110Enabled),
     /* 1354 */   // Combiner Rule #110: commute_int_constant_to_rhs; wip_match_opcode 'G_MUL'
     /* 1354 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner70),
     /* 1357 */ // Label 107: @1357
     /* 1357 */ GIM_Try, /*On fail goto*//*Label 108*/ GIMT_Encode4(1368), // Rule ID 218 //
     /* 1362 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule115Enabled),
     /* 1365 */   // Combiner Rule #115: combine_mul_cmlt; wip_match_opcode 'G_MUL'
     /* 1365 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner75),
     /* 1368 */ // Label 108: @1368
     /* 1368 */ GIM_Try, /*On fail goto*//*Label 109*/ GIMT_Encode4(1408), // Rule ID 131 //
     /* 1373 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule73Enabled),
     /* 1376 */   // MIs[0] dst
     /* 1376 */   // No operand predicates
     /* 1376 */   // MIs[0] zero
     /* 1376 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1380 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /* 1384 */   // MIs[1] Operand 1
     /* 1384 */   GIM_CheckLiteralInt, /*MI*/1, /*Op*/1, GIMT_Encode8(0),
     /* 1395 */   // MIs[0] rhs
     /* 1395 */   // No operand predicates
     /* 1395 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1400 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1402 */   // Combiner Rule #73: binop_left_to_zero @ [__binop_left_to_zero_match_0[7]]
     /* 1402 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1407 */   GIR_EraseRootFromParent_Done,
     /* 1408 */ // Label 109: @1408
     /* 1408 */ GIM_Try, /*On fail goto*//*Label 110*/ GIMT_Encode4(1431), // Rule ID 132 //
     /* 1413 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule74Enabled),
     /* 1416 */   // MIs[0] dst
     /* 1416 */   // No operand predicates
     /* 1416 */   // MIs[0] lhs
     /* 1416 */   // No operand predicates
     /* 1416 */   // MIs[0] zero
     /* 1416 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /* 1420 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/2,
     /* 1425 */   // Combiner Rule #74: binop_right_to_zero
     /* 1425 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/2,
     /* 1430 */   GIR_EraseRootFromParent_Done,
     /* 1431 */ // Label 110: @1431
     /* 1431 */ GIM_Try, /*On fail goto*//*Label 111*/ GIMT_Encode4(1454), // Rule ID 137 //
     /* 1436 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule79Enabled),
     /* 1439 */   // MIs[0] dst
     /* 1439 */   // No operand predicates
     /* 1439 */   // MIs[0] x
     /* 1439 */   // No operand predicates
     /* 1439 */   // MIs[0] Operand 2
     /* 1439 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 1,
     /* 1443 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1448 */   // Combiner Rule #79: right_identity_one_int
     /* 1448 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1453 */   GIR_EraseRootFromParent_Done,
     /* 1454 */ // Label 111: @1454
     /* 1454 */ GIM_Try, /*On fail goto*//*Label 112*/ GIMT_Encode4(1465), // Rule ID 220 //
     /* 1459 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule117Enabled),
     /* 1462 */   // MIs[0] dst
     /* 1462 */   // No operand predicates
     /* 1462 */   // MIs[0] src1
     /* 1462 */   // No operand predicates
     /* 1462 */   // MIs[0] src2
     /* 1462 */   // No operand predicates
     /* 1462 */   // Combiner Rule #117: extmultomull
     /* 1462 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner77),
     /* 1465 */ // Label 112: @1465
     /* 1465 */ GIM_Reject,
     /* 1466 */ // Label 4: @1466
     /* 1466 */ GIM_Try, /*On fail goto*//*Label 113*/ GIMT_Encode4(1477), // Rule ID 90 //
     /* 1471 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule67Enabled),
     /* 1474 */   // Combiner Rule #67: constant_fold_binop; wip_match_opcode 'G_SDIV'
     /* 1474 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner42),
     /* 1477 */ // Label 113: @1477
     /* 1477 */ GIM_Try, /*On fail goto*//*Label 114*/ GIMT_Encode4(1517), // Rule ID 127 //
     /* 1482 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule73Enabled),
     /* 1485 */   // MIs[0] dst
     /* 1485 */   // No operand predicates
     /* 1485 */   // MIs[0] zero
     /* 1485 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1489 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /* 1493 */   // MIs[1] Operand 1
     /* 1493 */   GIM_CheckLiteralInt, /*MI*/1, /*Op*/1, GIMT_Encode8(0),
     /* 1504 */   // MIs[0] rhs
     /* 1504 */   // No operand predicates
     /* 1504 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1509 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1511 */   // Combiner Rule #73: binop_left_to_zero @ [__binop_left_to_zero_match_0[3]]
     /* 1511 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1516 */   GIR_EraseRootFromParent_Done,
     /* 1517 */ // Label 114: @1517
     /* 1517 */ GIM_Reject,
     /* 1518 */ // Label 5: @1518
     /* 1518 */ GIM_Try, /*On fail goto*//*Label 115*/ GIMT_Encode4(1529), // Rule ID 89 //
     /* 1523 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule67Enabled),
     /* 1526 */   // Combiner Rule #67: constant_fold_binop; wip_match_opcode 'G_UDIV'
     /* 1526 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner42),
     /* 1529 */ // Label 115: @1529
     /* 1529 */ GIM_Try, /*On fail goto*//*Label 116*/ GIMT_Encode4(1540), // Rule ID 160 //
     /* 1534 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule97Enabled),
     /* 1537 */   // Combiner Rule #97: binop_left_undef_to_zero; wip_match_opcode 'G_UDIV'
     /* 1537 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner58),
     /* 1540 */ // Label 116: @1540
     /* 1540 */ GIM_Try, /*On fail goto*//*Label 117*/ GIMT_Encode4(1580), // Rule ID 128 //
     /* 1545 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule73Enabled),
     /* 1548 */   // MIs[0] dst
     /* 1548 */   // No operand predicates
     /* 1548 */   // MIs[0] zero
     /* 1548 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1552 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /* 1556 */   // MIs[1] Operand 1
     /* 1556 */   GIM_CheckLiteralInt, /*MI*/1, /*Op*/1, GIMT_Encode8(0),
     /* 1567 */   // MIs[0] rhs
     /* 1567 */   // No operand predicates
     /* 1567 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1572 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1574 */   // Combiner Rule #73: binop_left_to_zero @ [__binop_left_to_zero_match_0[4]]
     /* 1574 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1579 */   GIR_EraseRootFromParent_Done,
     /* 1580 */ // Label 117: @1580
     /* 1580 */ GIM_Reject,
     /* 1581 */ // Label 6: @1581
     /* 1581 */ GIM_Try, /*On fail goto*//*Label 118*/ GIMT_Encode4(1592), // Rule ID 92 //
     /* 1586 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule67Enabled),
     /* 1589 */   // Combiner Rule #67: constant_fold_binop; wip_match_opcode 'G_SREM'
     /* 1589 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner42),
     /* 1592 */ // Label 118: @1592
     /* 1592 */ GIM_Try, /*On fail goto*//*Label 119*/ GIMT_Encode4(1632), // Rule ID 129 //
     /* 1597 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule73Enabled),
     /* 1600 */   // MIs[0] dst
     /* 1600 */   // No operand predicates
     /* 1600 */   // MIs[0] zero
     /* 1600 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1604 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /* 1608 */   // MIs[1] Operand 1
     /* 1608 */   GIM_CheckLiteralInt, /*MI*/1, /*Op*/1, GIMT_Encode8(0),
     /* 1619 */   // MIs[0] rhs
     /* 1619 */   // No operand predicates
     /* 1619 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1624 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1626 */   // Combiner Rule #73: binop_left_to_zero @ [__binop_left_to_zero_match_0[5]]
     /* 1626 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1631 */   GIR_EraseRootFromParent_Done,
     /* 1632 */ // Label 119: @1632
     /* 1632 */ GIM_Reject,
     /* 1633 */ // Label 7: @1633
     /* 1633 */ GIM_Try, /*On fail goto*//*Label 120*/ GIMT_Encode4(1644), // Rule ID 91 //
     /* 1638 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule67Enabled),
     /* 1641 */   // Combiner Rule #67: constant_fold_binop; wip_match_opcode 'G_UREM'
     /* 1641 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner42),
     /* 1644 */ // Label 120: @1644
     /* 1644 */ GIM_Try, /*On fail goto*//*Label 121*/ GIMT_Encode4(1655), // Rule ID 161 //
     /* 1649 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule97Enabled),
     /* 1652 */   // Combiner Rule #97: binop_left_undef_to_zero; wip_match_opcode 'G_UREM'
     /* 1652 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner58),
     /* 1655 */ // Label 121: @1655
     /* 1655 */ GIM_Try, /*On fail goto*//*Label 122*/ GIMT_Encode4(1695), // Rule ID 130 //
     /* 1660 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule73Enabled),
     /* 1663 */   // MIs[0] dst
     /* 1663 */   // No operand predicates
     /* 1663 */   // MIs[0] zero
     /* 1663 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1667 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /* 1671 */   // MIs[1] Operand 1
     /* 1671 */   GIM_CheckLiteralInt, /*MI*/1, /*Op*/1, GIMT_Encode8(0),
     /* 1682 */   // MIs[0] rhs
     /* 1682 */   // No operand predicates
     /* 1682 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1687 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 1689 */   // Combiner Rule #73: binop_left_to_zero @ [__binop_left_to_zero_match_0[6]]
     /* 1689 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1694 */   GIR_EraseRootFromParent_Done,
     /* 1695 */ // Label 122: @1695
     /* 1695 */ GIM_Reject,
     /* 1696 */ // Label 8: @1696
     /* 1696 */ GIM_Try, /*On fail goto*//*Label 123*/ GIMT_Encode4(1707), // Rule ID 33 //
     /* 1701 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule31Enabled),
     /* 1704 */   // Combiner Rule #31: load_and_mask; wip_match_opcode 'G_AND'
     /* 1704 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner10),
     /* 1707 */ // Label 123: @1707
     /* 1707 */ GIM_Try, /*On fail goto*//*Label 124*/ GIMT_Encode4(1718), // Rule ID 39 //
     /* 1712 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule34Enabled),
     /* 1715 */   // Combiner Rule #34: hoist_logic_op_with_same_opcode_hands; wip_match_opcode 'G_AND'
     /* 1715 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner13),
     /* 1718 */ // Label 124: @1718
     /* 1718 */ GIM_Try, /*On fail goto*//*Label 125*/ GIMT_Encode4(1729), // Rule ID 42 //
     /* 1723 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule35Enabled),
     /* 1726 */   // Combiner Rule #35: redundant_and; wip_match_opcode 'G_AND'
     /* 1726 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner14),
     /* 1729 */ // Label 125: @1729
     /* 1729 */ GIM_Try, /*On fail goto*//*Label 126*/ GIMT_Encode4(1740), // Rule ID 81 //
     /* 1734 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule67Enabled),
     /* 1737 */   // Combiner Rule #67: constant_fold_binop; wip_match_opcode 'G_AND'
     /* 1737 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner42),
     /* 1740 */ // Label 126: @1740
     /* 1740 */ GIM_Try, /*On fail goto*//*Label 127*/ GIMT_Encode4(1751), // Rule ID 152 //
     /* 1745 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule92Enabled),
     /* 1748 */   // Combiner Rule #92: overlapping_and; wip_match_opcode 'G_AND'
     /* 1748 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner53),
     /* 1751 */ // Label 127: @1751
     /* 1751 */ GIM_Try, /*On fail goto*//*Label 128*/ GIMT_Encode4(1762), // Rule ID 156 //
     /* 1756 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule95Enabled),
     /* 1759 */   // Combiner Rule #95: undef_to_int_zero; wip_match_opcode 'G_AND'
     /* 1759 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner56),
     /* 1762 */ // Label 128: @1762
     /* 1762 */ GIM_Try, /*On fail goto*//*Label 129*/ GIMT_Encode4(1773), // Rule ID 188 //
     /* 1767 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule110Enabled),
     /* 1770 */   // Combiner Rule #110: commute_int_constant_to_rhs; wip_match_opcode 'G_AND'
     /* 1770 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner70),
     /* 1773 */ // Label 129: @1773
     /* 1773 */ GIM_Try, /*On fail goto*//*Label 130*/ GIMT_Encode4(1810), // Rule ID 49 //
     /* 1778 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule42Enabled),
     /* 1781 */   // MIs[0] root
     /* 1781 */   // No operand predicates
     /* 1781 */   // MIs[0] shift
     /* 1781 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 1785 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_LSHR),
     /* 1789 */   // MIs[1] x
     /* 1789 */   // No operand predicates
     /* 1789 */   // MIs[1] lsb
     /* 1789 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
     /* 1793 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /* 1797 */   // MIs[2] imm1
     /* 1797 */   // No operand predicates
     /* 1797 */   // MIs[0] mask
     /* 1797 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/3, /*MI*/0, /*OpIdx*/2, // MIs[3]
     /* 1801 */   GIM_CheckOpcode, /*MI*/3, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /* 1805 */   // MIs[3] imm2
     /* 1805 */   // No operand predicates
     /* 1805 */   GIM_CheckIsSafeToFold, /*NumInsns*/3,
     /* 1807 */   // Combiner Rule #42: bitfield_extract_from_and
     /* 1807 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner21),
     /* 1810 */ // Label 130: @1810
     /* 1810 */ GIM_Try, /*On fail goto*//*Label 131*/ GIMT_Encode4(1834), // Rule ID 120 //
     /* 1815 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule71Enabled),
     /* 1818 */   // MIs[0] dst
     /* 1818 */   // No operand predicates
     /* 1818 */   // MIs[0] src
     /* 1818 */   // No operand predicates
     /* 1818 */   // MIs[0] src
     /* 1818 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
     /* 1823 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1828 */   // Combiner Rule #71: binop_same_val @ [__binop_same_val_match_0[0]]
     /* 1828 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1833 */   GIR_EraseRootFromParent_Done,
     /* 1834 */ // Label 131: @1834
     /* 1834 */ GIM_Reject,
     /* 1835 */ // Label 9: @1835
     /* 1835 */ GIM_Try, /*On fail goto*//*Label 132*/ GIMT_Encode4(1846), // Rule ID 40 //
     /* 1840 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule34Enabled),
     /* 1843 */   // Combiner Rule #34: hoist_logic_op_with_same_opcode_hands; wip_match_opcode 'G_OR'
     /* 1843 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner13),
     /* 1846 */ // Label 132: @1846
     /* 1846 */ GIM_Try, /*On fail goto*//*Label 133*/ GIMT_Encode4(1857), // Rule ID 45 //
     /* 1851 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule38Enabled),
     /* 1854 */   // Combiner Rule #38: redundant_or; wip_match_opcode 'G_OR'
     /* 1854 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner17),
     /* 1857 */ // Label 133: @1857
     /* 1857 */ GIM_Try, /*On fail goto*//*Label 134*/ GIMT_Encode4(1868), // Rule ID 85 //
     /* 1862 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule67Enabled),
     /* 1865 */   // Combiner Rule #67: constant_fold_binop; wip_match_opcode 'G_OR'
     /* 1865 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner42),
     /* 1868 */ // Label 134: @1868
     /* 1868 */ GIM_Try, /*On fail goto*//*Label 135*/ GIMT_Encode4(1879), // Rule ID 158 //
     /* 1873 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule96Enabled),
     /* 1876 */   // Combiner Rule #96: undef_to_negative_one; wip_match_opcode 'G_OR'
     /* 1876 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner57),
     /* 1879 */ // Label 135: @1879
     /* 1879 */ GIM_Try, /*On fail goto*//*Label 136*/ GIMT_Encode4(1890), // Rule ID 189 //
     /* 1884 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule110Enabled),
     /* 1887 */   // Combiner Rule #110: commute_int_constant_to_rhs; wip_match_opcode 'G_OR'
     /* 1887 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner70),
     /* 1890 */ // Label 136: @1890
     /* 1890 */ GIM_Try, /*On fail goto*//*Label 137*/ GIMT_Encode4(1901), // Rule ID 227 //
     /* 1895 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule124Enabled),
     /* 1898 */   // Combiner Rule #124: funnel_shift_from_or_shift_constants_are_legal; wip_match_opcode 'G_OR'
     /* 1898 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner82),
     /* 1901 */ // Label 137: @1901
     /* 1901 */ GIM_Try, /*On fail goto*//*Label 138*/ GIMT_Encode4(1925), // Rule ID 121 //
     /* 1906 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule71Enabled),
     /* 1909 */   // MIs[0] dst
     /* 1909 */   // No operand predicates
     /* 1909 */   // MIs[0] src
     /* 1909 */   // No operand predicates
     /* 1909 */   // MIs[0] src
     /* 1909 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
     /* 1914 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1919 */   // Combiner Rule #71: binop_same_val @ [__binop_same_val_match_0[1]]
     /* 1919 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1924 */   GIR_EraseRootFromParent_Done,
     /* 1925 */ // Label 138: @1925
     /* 1925 */ GIM_Try, /*On fail goto*//*Label 139*/ GIMT_Encode4(1948), // Rule ID 112 //
     /* 1930 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule70Enabled),
     /* 1933 */   // MIs[0] dst
     /* 1933 */   // No operand predicates
     /* 1933 */   // MIs[0] lhs
     /* 1933 */   // No operand predicates
     /* 1933 */   // MIs[0] Operand 2
     /* 1933 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /* 1937 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1942 */   // Combiner Rule #70: right_identity_zero @ [__right_identity_zero_match_0[2]]
     /* 1942 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 1947 */   GIR_EraseRootFromParent_Done,
     /* 1948 */ // Label 139: @1948
     /* 1948 */ GIM_Try, /*On fail goto*//*Label 140*/ GIMT_Encode4(1959), // Rule ID 183 //
     /* 1953 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule107Enabled),
     /* 1956 */   // MIs[0] dst
     /* 1956 */   // No operand predicates
     /* 1956 */   // MIs[0] src1
     /* 1956 */   // No operand predicates
     /* 1956 */   // MIs[0] src2
     /* 1956 */   // No operand predicates
     /* 1956 */   // Combiner Rule #107: or_to_bsp
     /* 1956 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner67),
     /* 1959 */ // Label 140: @1959
     /* 1959 */ GIM_Reject,
     /* 1960 */ // Label 10: @1960
     /* 1960 */ GIM_Try, /*On fail goto*//*Label 141*/ GIMT_Encode4(1971), // Rule ID 41 //
     /* 1965 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule34Enabled),
     /* 1968 */   // Combiner Rule #34: hoist_logic_op_with_same_opcode_hands; wip_match_opcode 'G_XOR'
     /* 1968 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner13),
     /* 1971 */ // Label 141: @1971
     /* 1971 */ GIM_Try, /*On fail goto*//*Label 142*/ GIMT_Encode4(1982), // Rule ID 43 //
     /* 1976 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule36Enabled),
     /* 1979 */   // Combiner Rule #36: xor_of_and_with_same_reg; wip_match_opcode 'G_XOR'
     /* 1979 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner15),
     /* 1982 */ // Label 142: @1982
     /* 1982 */ GIM_Try, /*On fail goto*//*Label 143*/ GIMT_Encode4(1993), // Rule ID 88 //
     /* 1987 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule67Enabled),
     /* 1990 */   // Combiner Rule #67: constant_fold_binop; wip_match_opcode 'G_XOR'
     /* 1990 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner42),
     /* 1993 */ // Label 143: @1993
     /* 1993 */ GIM_Try, /*On fail goto*//*Label 144*/ GIMT_Encode4(2004), // Rule ID 175 //
     /* 1998 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule101Enabled),
     /* 2001 */   // Combiner Rule #101: propagate_undef_any_op; wip_match_opcode 'G_XOR'
     /* 2001 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner61),
     /* 2004 */ // Label 144: @2004
     /* 2004 */ GIM_Try, /*On fail goto*//*Label 145*/ GIMT_Encode4(2015), // Rule ID 190 //
     /* 2009 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule110Enabled),
     /* 2012 */   // Combiner Rule #110: commute_int_constant_to_rhs; wip_match_opcode 'G_XOR'
     /* 2012 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner70),
     /* 2015 */ // Label 145: @2015
     /* 2015 */ GIM_Try, /*On fail goto*//*Label 146*/ GIMT_Encode4(2054), // Rule ID 123 //
     /* 2020 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule72Enabled),
     /* 2023 */   // MIs[0] dst
     /* 2023 */   // No operand predicates
     /* 2023 */   // MIs[0] x
     /* 2023 */   GIM_RecordRegType, /*MI*/0, /*Op*/1, /*TempTypeIdx*/255,
     /* 2027 */   // MIs[0] x
     /* 2027 */   GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
     /* 2032 */   GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/255,
     /* 2035 */   GIR_BuildConstant, /*TempRegID*/0, /*Val*/GIMT_Encode8(0),
     /* 2045 */   // Combiner Rule #72: same_val_zero @ [__same_val_zero_match_0[1]]
     /* 2045 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::COPY),
     /* 2048 */   GIR_RootToRootCopy, /*OpIdx*/0, // dst
     /* 2050 */   GIR_AddSimpleTempRegister, /*InsnID*/0, /*TempRegID*/0,
     /* 2053 */   GIR_EraseRootFromParent_Done,
     /* 2054 */ // Label 146: @2054
     /* 2054 */ GIM_Try, /*On fail goto*//*Label 147*/ GIMT_Encode4(2077), // Rule ID 113 //
     /* 2059 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule70Enabled),
     /* 2062 */   // MIs[0] dst
     /* 2062 */   // No operand predicates
     /* 2062 */   // MIs[0] lhs
     /* 2062 */   // No operand predicates
     /* 2062 */   // MIs[0] Operand 2
     /* 2062 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /* 2066 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2071 */   // Combiner Rule #70: right_identity_zero @ [__right_identity_zero_match_0[3]]
     /* 2071 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 2076 */   GIR_EraseRootFromParent_Done,
     /* 2077 */ // Label 147: @2077
     /* 2077 */ GIM_Reject,
     /* 2078 */ // Label 11: @2078
     /* 2078 */ GIM_Try, /*On fail goto*//*Label 148*/ GIMT_Encode4(2089), // Rule ID 69 //
     /* 2083 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule57Enabled),
     /* 2086 */   // Combiner Rule #57: unmerge_anyext_build_vector; wip_match_opcode 'G_UNMERGE_VALUES'
     /* 2086 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner32),
     /* 2089 */ // Label 148: @2089
     /* 2089 */ GIM_Try, /*On fail goto*//*Label 149*/ GIMT_Encode4(2100), // Rule ID 70 //
     /* 2094 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule58Enabled),
     /* 2097 */   // Combiner Rule #58: unmerge_merge; wip_match_opcode 'G_UNMERGE_VALUES'
     /* 2097 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner33),
     /* 2100 */ // Label 149: @2100
     /* 2100 */ GIM_Try, /*On fail goto*//*Label 150*/ GIMT_Encode4(2111), // Rule ID 72 //
     /* 2105 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule60Enabled),
     /* 2108 */   // Combiner Rule #60: unmerge_cst; wip_match_opcode 'G_UNMERGE_VALUES'
     /* 2108 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner35),
     /* 2111 */ // Label 150: @2111
     /* 2111 */ GIM_Try, /*On fail goto*//*Label 151*/ GIMT_Encode4(2122), // Rule ID 73 //
     /* 2116 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule61Enabled),
     /* 2119 */   // Combiner Rule #61: unmerge_undef; wip_match_opcode 'G_UNMERGE_VALUES'
     /* 2119 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner36),
     /* 2122 */ // Label 151: @2122
     /* 2122 */ GIM_Try, /*On fail goto*//*Label 152*/ GIMT_Encode4(2133), // Rule ID 74 //
     /* 2127 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule62Enabled),
     /* 2130 */   // Combiner Rule #62: unmerge_dead_to_trunc; wip_match_opcode 'G_UNMERGE_VALUES'
     /* 2130 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner37),
     /* 2133 */ // Label 152: @2133
     /* 2133 */ GIM_Try, /*On fail goto*//*Label 153*/ GIMT_Encode4(2144), // Rule ID 75 //
     /* 2138 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule63Enabled),
     /* 2141 */   // Combiner Rule #63: unmerge_zext_to_zext; wip_match_opcode 'G_UNMERGE_VALUES'
     /* 2141 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner38),
     /* 2144 */ // Label 153: @2144
     /* 2144 */ GIM_Reject,
     /* 2145 */ // Label 12: @2145
     /* 2145 */ GIM_Try, /*On fail goto*//*Label 154*/ GIMT_Encode4(2156), // Rule ID 68 //
     /* 2150 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule56Enabled),
     /* 2153 */   // Combiner Rule #56: fold_merge_to_zext; wip_match_opcode 'G_MERGE_VALUES'
     /* 2153 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner31),
     /* 2156 */ // Label 154: @2156
     /* 2156 */ GIM_Try, /*On fail goto*//*Label 155*/ GIMT_Encode4(2170), // Rule ID 71 //
     /* 2161 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule59Enabled),
     /* 2164 */   GIM_CheckNumOperandsGE, /*MI*/0, /*Expected*/2,
     /* 2167 */   // MIs[0] dst
     /* 2167 */   // No operand predicates
     /* 2167 */   // MIs[0] merge_srcs
     /* 2167 */   // No operand predicates
     /* 2167 */   // Combiner Rule #59: merge_unmerge
     /* 2167 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner34),
     /* 2170 */ // Label 155: @2170
     /* 2170 */ GIM_Try, /*On fail goto*//*Label 156*/ GIMT_Encode4(2232),
     /* 2175 */   GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
     /* 2178 */   GIM_Try, /*On fail goto*//*Label 157*/ GIMT_Encode4(2199), // Rule ID 76 //
     /* 2183 */     GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule64Enabled),
     /* 2186 */     // MIs[0] root
     /* 2186 */     // No operand predicates
     /* 2186 */     // MIs[0] x
     /* 2186 */     // No operand predicates
     /* 2186 */     // MIs[0] undef
     /* 2186 */     GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
     /* 2190 */     GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
     /* 2194 */     GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2196 */     // Combiner Rule #64: merge_of_x_and_undef
     /* 2196 */     GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner39),
     /* 2199 */   // Label 157: @2199
     /* 2199 */   GIM_Try, /*On fail goto*//*Label 158*/ GIMT_Encode4(2231), // Rule ID 77 //
     /* 2204 */     GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule65Enabled),
     /* 2207 */     // MIs[0] root
     /* 2207 */     // No operand predicates
     /* 2207 */     // MIs[0] x
     /* 2207 */     // No operand predicates
     /* 2207 */     // MIs[0] zero
     /* 2207 */     GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
     /* 2211 */     GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /* 2215 */     // MIs[1] Operand 1
     /* 2215 */     GIM_CheckLiteralInt, /*MI*/1, /*Op*/1, GIMT_Encode8(0),
     /* 2226 */     GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2228 */     // Combiner Rule #65: merge_of_x_and_zero
     /* 2228 */     GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner40),
     /* 2231 */   // Label 158: @2231
     /* 2231 */   GIM_Reject,
     /* 2232 */ // Label 156: @2232
     /* 2232 */ GIM_Reject,
     /* 2233 */ // Label 13: @2233
     /* 2233 */ GIM_Try, /*On fail goto*//*Label 159*/ GIMT_Encode4(2244), // Rule ID 142 //
     /* 2238 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule82Enabled),
     /* 2241 */   // Combiner Rule #82: buildvector_identity_fold; wip_match_opcode 'G_BUILD_VECTOR'
     /* 2241 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner48),
     /* 2244 */ // Label 159: @2244
     /* 2244 */ GIM_Try, /*On fail goto*//*Label 160*/ GIMT_Encode4(2255), // Rule ID 177 //
     /* 2249 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule102Enabled),
     /* 2252 */   // Combiner Rule #102: propagate_undef_all_ops; wip_match_opcode 'G_BUILD_VECTOR'
     /* 2252 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner62),
     /* 2255 */ // Label 160: @2255
     /* 2255 */ GIM_Try, /*On fail goto*//*Label 161*/ GIMT_Encode4(2266), // Rule ID 216 //
     /* 2260 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule113Enabled),
     /* 2263 */   // Combiner Rule #113: extract_all_elts_from_build_vector; wip_match_opcode 'G_BUILD_VECTOR'
     /* 2263 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner73),
     /* 2266 */ // Label 161: @2266
     /* 2266 */ GIM_Try, /*On fail goto*//*Label 162*/ GIMT_Encode4(2308),
     /* 2271 */   GIM_CheckNumOperandsGE, /*MI*/0, /*Expected*/2,
     /* 2274 */   GIM_Try, /*On fail goto*//*Label 163*/ GIMT_Encode4(2285), // Rule ID 78 //
     /* 2279 */     GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule66Enabled),
     /* 2282 */     // MIs[0] dst
     /* 2282 */     // No operand predicates
     /* 2282 */     // MIs[0] unused
     /* 2282 */     // No operand predicates
     /* 2282 */     // Combiner Rule #66: combine_build_unmerge
     /* 2282 */     GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner41),
     /* 2285 */   // Label 163: @2285
     /* 2285 */   GIM_Try, /*On fail goto*//*Label 164*/ GIMT_Encode4(2296), // Rule ID 185 //
     /* 2290 */     GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule109Enabled),
     /* 2293 */     // MIs[0] dst
     /* 2293 */     // No operand predicates
     /* 2293 */     // MIs[0] unused
     /* 2293 */     // No operand predicates
     /* 2293 */     // Combiner Rule #109: combine_build_vector_of_bitcast
     /* 2293 */     GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner69),
     /* 2296 */   // Label 164: @2296
     /* 2296 */   GIM_Try, /*On fail goto*//*Label 165*/ GIMT_Encode4(2307), // Rule ID 219 //
     /* 2301 */     GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule116Enabled),
     /* 2304 */     // MIs[0] dst
     /* 2304 */     // No operand predicates
     /* 2304 */     // MIs[0] unused
     /* 2304 */     // No operand predicates
     /* 2304 */     // Combiner Rule #116: combine_use_vector_truncate
     /* 2304 */     GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner76),
     /* 2307 */   // Label 165: @2307
     /* 2307 */   GIM_Reject,
     /* 2308 */ // Label 162: @2308
     /* 2308 */ GIM_Reject,
     /* 2309 */ // Label 14: @2309
     /* 2309 */ GIM_Try, /*On fail goto*//*Label 166*/ GIMT_Encode4(2320), // Rule ID 141 //
     /* 2314 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule82Enabled),
     /* 2317 */   // Combiner Rule #82: buildvector_identity_fold; wip_match_opcode 'G_BUILD_VECTOR_TRUNC'
     /* 2317 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner48),
     /* 2320 */ // Label 166: @2320
     /* 2320 */ GIM_Reject,
     /* 2321 */ // Label 15: @2321
     /* 2321 */ GIM_Try, /*On fail goto*//*Label 167*/ GIMT_Encode4(2332), // Rule ID 184 //
     /* 2326 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule108Enabled),
     /* 2329 */   // Combiner Rule #108: combine_concat_vector; wip_match_opcode 'G_CONCAT_VECTORS'
     /* 2329 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner68),
     /* 2332 */ // Label 167: @2332
     /* 2332 */ GIM_Reject,
     /* 2333 */ // Label 16: @2333
     /* 2333 */ GIM_Try, /*On fail goto*//*Label 168*/ GIMT_Encode4(2354), // Rule ID 134 //
     /* 2338 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule76Enabled),
     /* 2341 */   // MIs[0] dst
     /* 2341 */   // No operand predicates
     /* 2341 */   // MIs[0] t
     /* 2341 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2345 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_INTTOPTR),
     /* 2349 */   // MIs[1] ptr
     /* 2349 */   // No operand predicates
     /* 2349 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2351 */   // Combiner Rule #76: i2p_to_p2i
     /* 2351 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner46),
     /* 2354 */ // Label 168: @2354
     /* 2354 */ GIM_Try, /*On fail goto*//*Label 169*/ GIMT_Encode4(2375), // Rule ID 169 //
     /* 2359 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule100Enabled),
     /* 2362 */   // MIs[0] dst
     /* 2362 */   // No operand predicates
     /* 2362 */   // MIs[0] __unary_undef_to_undef_match_0.x
     /* 2362 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2366 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
     /* 2370 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2372 */   // Combiner Rule #100: unary_undef_to_undef @ [__unary_undef_to_undef_match_0[3]]
     /* 2372 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner60),
     /* 2375 */ // Label 169: @2375
     /* 2375 */ GIM_Reject,
     /* 2376 */ // Label 17: @2376
     /* 2376 */ GIM_Try, /*On fail goto*//*Label 170*/ GIMT_Encode4(2387), // Rule ID 133 //
     /* 2381 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule75Enabled),
     /* 2384 */   // Combiner Rule #75: p2i_to_i2p; wip_match_opcode 'G_INTTOPTR'
     /* 2384 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner45),
     /* 2387 */ // Label 170: @2387
     /* 2387 */ GIM_Try, /*On fail goto*//*Label 171*/ GIMT_Encode4(2408), // Rule ID 170 //
     /* 2392 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule100Enabled),
     /* 2395 */   // MIs[0] dst
     /* 2395 */   // No operand predicates
     /* 2395 */   // MIs[0] __unary_undef_to_undef_match_0.x
     /* 2395 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2399 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
     /* 2403 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2405 */   // Combiner Rule #100: unary_undef_to_undef @ [__unary_undef_to_undef_match_0[4]]
     /* 2405 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner60),
     /* 2408 */ // Label 171: @2408
     /* 2408 */ GIM_Reject,
     /* 2409 */ // Label 18: @2409
     /* 2409 */ GIM_Try, /*On fail goto*//*Label 172*/ GIMT_Encode4(2441), // Rule ID 146 //
     /* 2414 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule86Enabled),
     /* 2417 */   // MIs[0] dst
     /* 2417 */   // No operand predicates
     /* 2417 */   // MIs[0] src1
     /* 2417 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2421 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BITCAST),
     /* 2425 */   // MIs[1] src0
     /* 2425 */   // No operand predicates
     /* 2425 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner2),
     /* 2429 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2431 */   // Combiner Rule #86: bitcast_bitcast_to_bitcast
     /* 2431 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_BITCAST),
     /* 2434 */   GIR_RootToRootCopy, /*OpIdx*/0, // dst
     /* 2436 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src0
     /* 2440 */   GIR_EraseRootFromParent_Done,
     /* 2441 */ // Label 172: @2441
     /* 2441 */ GIM_Try, /*On fail goto*//*Label 173*/ GIMT_Encode4(2462), // Rule ID 145 //
     /* 2446 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule85Enabled),
     /* 2449 */   // MIs[0] dst
     /* 2449 */   // No operand predicates
     /* 2449 */   // MIs[0] src1
     /* 2449 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2453 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BITCAST),
     /* 2457 */   // MIs[1] src0
     /* 2457 */   // No operand predicates
     /* 2457 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2459 */   // Combiner Rule #85: bitcast_bitcast_fold
     /* 2459 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner51),
     /* 2462 */ // Label 173: @2462
     /* 2462 */ GIM_Try, /*On fail goto*//*Label 174*/ GIMT_Encode4(2483), // Rule ID 167 //
     /* 2467 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule100Enabled),
     /* 2470 */   // MIs[0] dst
     /* 2470 */   // No operand predicates
     /* 2470 */   // MIs[0] __unary_undef_to_undef_match_0.x
     /* 2470 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2474 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
     /* 2478 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2480 */   // Combiner Rule #100: unary_undef_to_undef @ [__unary_undef_to_undef_match_0[1]]
     /* 2480 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner60),
     /* 2483 */ // Label 174: @2483
     /* 2483 */ GIM_Reject,
     /* 2484 */ // Label 19: @2484
     /* 2484 */ GIM_Try, /*On fail goto*//*Label 175*/ GIMT_Encode4(2495), // Rule ID 217 //
     /* 2489 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule114Enabled),
     /* 2492 */   // MIs[0] dst
     /* 2492 */   // No operand predicates
     /* 2492 */   // MIs[0] src
     /* 2492 */   // No operand predicates
     /* 2492 */   // Combiner Rule #114: push_freeze_to_prevent_poison_from_propagating
     /* 2492 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner74),
     /* 2495 */ // Label 175: @2495
     /* 2495 */ GIM_Reject,
     /* 2496 */ // Label 20: @2496
     /* 2496 */ GIM_Try, /*On fail goto*//*Label 176*/ GIMT_Encode4(2517), // Rule ID 20 //
     /* 2501 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule20Enabled),
     /* 2504 */   // MIs[0] dst
     /* 2504 */   // No operand predicates
     /* 2504 */   // MIs[0] src0
     /* 2504 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2508 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 2512 */   // MIs[1] cst
     /* 2512 */   // No operand predicates
     /* 2512 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2514 */   // Combiner Rule #20: constant_fold_intrinsic_trunc
     /* 2514 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner4),
     /* 2517 */ // Label 176: @2517
     /* 2517 */ GIM_Reject,
     /* 2518 */ // Label 21: @2518
     /* 2518 */ GIM_Try, /*On fail goto*//*Label 177*/ GIMT_Encode4(2539), // Rule ID 21 //
     /* 2523 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule21Enabled),
     /* 2526 */   // MIs[0] dst
     /* 2526 */   // No operand predicates
     /* 2526 */   // MIs[0] src0
     /* 2526 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2530 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 2534 */   // MIs[1] cst
     /* 2534 */   // No operand predicates
     /* 2534 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2536 */   // Combiner Rule #21: constant_fold_intrinsic_round
     /* 2536 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner4),
     /* 2539 */ // Label 177: @2539
     /* 2539 */ GIM_Reject,
     /* 2540 */ // Label 22: @2540
     /* 2540 */ GIM_Try, /*On fail goto*//*Label 178*/ GIMT_Encode4(2561), // Rule ID 22 //
     /* 2545 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule22Enabled),
     /* 2548 */   // MIs[0] dst
     /* 2548 */   // No operand predicates
     /* 2548 */   // MIs[0] src0
     /* 2548 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2552 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 2556 */   // MIs[1] cst
     /* 2556 */   // No operand predicates
     /* 2556 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2558 */   // Combiner Rule #22: constant_fold_intrinsic_roundeven
     /* 2558 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner4),
     /* 2561 */ // Label 178: @2561
     /* 2561 */ GIM_Reject,
     /* 2562 */ // Label 23: @2562
     /* 2562 */ GIM_Try, /*On fail goto*//*Label 179*/ GIMT_Encode4(2573), // Rule ID 30 //
     /* 2567 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule30Enabled),
     /* 2570 */   // Combiner Rule #30: extending_loads; wip_match_opcode 'G_LOAD'
     /* 2570 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner9),
     /* 2573 */ // Label 179: @2573
     /* 2573 */ GIM_Try, /*On fail goto*//*Label 180*/ GIMT_Encode4(2584), // Rule ID 34 //
     /* 2578 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule32Enabled),
     /* 2581 */   // Combiner Rule #32: combine_indexed_load_store; wip_match_opcode 'G_LOAD'
     /* 2581 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner11),
     /* 2584 */ // Label 180: @2584
     /* 2584 */ GIM_Reject,
     /* 2585 */ // Label 24: @2585
     /* 2585 */ GIM_Try, /*On fail goto*//*Label 181*/ GIMT_Encode4(2596), // Rule ID 31 //
     /* 2590 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule30Enabled),
     /* 2593 */   // Combiner Rule #30: extending_loads; wip_match_opcode 'G_SEXTLOAD'
     /* 2593 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner9),
     /* 2596 */ // Label 181: @2596
     /* 2596 */ GIM_Try, /*On fail goto*//*Label 182*/ GIMT_Encode4(2607), // Rule ID 35 //
     /* 2601 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule32Enabled),
     /* 2604 */   // Combiner Rule #32: combine_indexed_load_store; wip_match_opcode 'G_SEXTLOAD'
     /* 2604 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner11),
     /* 2607 */ // Label 182: @2607
     /* 2607 */ GIM_Reject,
     /* 2608 */ // Label 25: @2608
     /* 2608 */ GIM_Try, /*On fail goto*//*Label 183*/ GIMT_Encode4(2619), // Rule ID 32 //
     /* 2613 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule30Enabled),
     /* 2616 */   // Combiner Rule #30: extending_loads; wip_match_opcode 'G_ZEXTLOAD'
     /* 2616 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner9),
     /* 2619 */ // Label 183: @2619
     /* 2619 */ GIM_Try, /*On fail goto*//*Label 184*/ GIMT_Encode4(2630), // Rule ID 36 //
     /* 2624 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule32Enabled),
     /* 2627 */   // Combiner Rule #32: combine_indexed_load_store; wip_match_opcode 'G_ZEXTLOAD'
     /* 2627 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner11),
     /* 2630 */ // Label 184: @2630
     /* 2630 */ GIM_Reject,
     /* 2631 */ // Label 26: @2631
     /* 2631 */ GIM_Try, /*On fail goto*//*Label 185*/ GIMT_Encode4(2642), // Rule ID 37 //
     /* 2636 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule32Enabled),
     /* 2639 */   // Combiner Rule #32: combine_indexed_load_store; wip_match_opcode 'G_STORE'
     /* 2639 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner11),
     /* 2642 */ // Label 185: @2642
     /* 2642 */ GIM_Try, /*On fail goto*//*Label 186*/ GIMT_Encode4(2653), // Rule ID 179 //
     /* 2647 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule104Enabled),
     /* 2650 */   // Combiner Rule #104: erase_undef_store; wip_match_opcode 'G_STORE'
     /* 2650 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner64),
     /* 2653 */ // Label 186: @2653
     /* 2653 */ GIM_Try, /*On fail goto*//*Label 187*/ GIMT_Encode4(2664), // Rule ID 153 //
     /* 2658 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule93Enabled),
     /* 2661 */   // MIs[0] src
     /* 2661 */   // No operand predicates
     /* 2661 */   // MIs[0] addr
     /* 2661 */   // No operand predicates
     /* 2661 */   // Combiner Rule #93: split_store_zero_128
     /* 2661 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner54),
     /* 2664 */ // Label 187: @2664
     /* 2664 */ GIM_Reject,
     /* 2665 */ // Label 27: @2665
     /* 2665 */ GIM_Try, /*On fail goto*//*Label 188*/ GIMT_Encode4(2676), // Rule ID 29 //
     /* 2670 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule29Enabled),
     /* 2673 */   // Combiner Rule #29: mutate_anyext_to_zext; wip_match_opcode 'G_ANYEXT'
     /* 2673 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner8),
     /* 2676 */ // Label 188: @2676
     /* 2676 */ GIM_Try, /*On fail goto*//*Label 189*/ GIMT_Encode4(2687), // Rule ID 135 //
     /* 2681 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule77Enabled),
     /* 2684 */   // Combiner Rule #77: anyext_trunc_fold; wip_match_opcode 'G_ANYEXT'
     /* 2684 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner47),
     /* 2687 */ // Label 189: @2687
     /* 2687 */ GIM_Try, /*On fail goto*//*Label 190*/ GIMT_Encode4(2708), // Rule ID 8 //
     /* 2692 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule8Enabled),
     /* 2695 */   // MIs[0] root
     /* 2695 */   // No operand predicates
     /* 2695 */   // MIs[0] second
     /* 2695 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2699 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ANYEXT),
     /* 2703 */   // MIs[1] src
     /* 2703 */   // No operand predicates
     /* 2703 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2705 */   // Combiner Rule #8: anyext_of_anyext
     /* 2705 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner2),
     /* 2708 */ // Label 190: @2708
     /* 2708 */ GIM_Try, /*On fail goto*//*Label 191*/ GIMT_Encode4(2729), // Rule ID 10 //
     /* 2713 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule10Enabled),
     /* 2716 */   // MIs[0] root
     /* 2716 */   // No operand predicates
     /* 2716 */   // MIs[0] second
     /* 2716 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2720 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SEXT),
     /* 2724 */   // MIs[1] src
     /* 2724 */   // No operand predicates
     /* 2724 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2726 */   // Combiner Rule #10: anyext_of_sext
     /* 2726 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner2),
     /* 2729 */ // Label 191: @2729
     /* 2729 */ GIM_Try, /*On fail goto*//*Label 192*/ GIMT_Encode4(2750), // Rule ID 9 //
     /* 2734 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule9Enabled),
     /* 2737 */   // MIs[0] root
     /* 2737 */   // No operand predicates
     /* 2737 */   // MIs[0] second
     /* 2737 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2741 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ZEXT),
     /* 2745 */   // MIs[1] src
     /* 2745 */   // No operand predicates
     /* 2745 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2747 */   // Combiner Rule #9: anyext_of_zext
     /* 2747 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner2),
     /* 2750 */ // Label 192: @2750
     /* 2750 */ GIM_Try, /*On fail goto*//*Label 193*/ GIMT_Encode4(2771), // Rule ID 168 //
     /* 2755 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule100Enabled),
     /* 2758 */   // MIs[0] dst
     /* 2758 */   // No operand predicates
     /* 2758 */   // MIs[0] __unary_undef_to_undef_match_0.x
     /* 2758 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2762 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
     /* 2766 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2768 */   // Combiner Rule #100: unary_undef_to_undef @ [__unary_undef_to_undef_match_0[2]]
     /* 2768 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner60),
     /* 2771 */ // Label 193: @2771
     /* 2771 */ GIM_Reject,
     /* 2772 */ // Label 28: @2772
     /* 2772 */ GIM_Try, /*On fail goto*//*Label 194*/ GIMT_Encode4(2783), // Rule ID 143 //
     /* 2777 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule83Enabled),
     /* 2780 */   // Combiner Rule #83: trunc_buildvector_fold; wip_match_opcode 'G_TRUNC'
     /* 2780 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner49),
     /* 2783 */ // Label 194: @2783
     /* 2783 */ GIM_Try, /*On fail goto*//*Label 195*/ GIMT_Encode4(2794), // Rule ID 144 //
     /* 2788 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule84Enabled),
     /* 2791 */   // Combiner Rule #84: trunc_lshr_buildvector_fold; wip_match_opcode 'G_TRUNC'
     /* 2791 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner50),
     /* 2794 */ // Label 195: @2794
     /* 2794 */ GIM_Try, /*On fail goto*//*Label 196*/ GIMT_Encode4(2826), // Rule ID 224 //
     /* 2799 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule121Enabled),
     /* 2802 */   // MIs[0] dst
     /* 2802 */   // No operand predicates
     /* 2802 */   // MIs[0] min
     /* 2802 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2806 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_UMIN),
     /* 2810 */   // MIs[1] x
     /* 2810 */   // No operand predicates
     /* 2810 */   // MIs[1] y
     /* 2810 */   // No operand predicates
     /* 2810 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner6),
     /* 2814 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2816 */   // Combiner Rule #121: trunc_usatu
     /* 2816 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_TRUNC_USAT_U),
     /* 2819 */   GIR_RootToRootCopy, /*OpIdx*/0, // dst
     /* 2821 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // x
     /* 2825 */   GIR_EraseRootFromParent_Done,
     /* 2826 */ // Label 196: @2826
     /* 2826 */ GIM_Try, /*On fail goto*//*Label 197*/ GIMT_Encode4(2847), // Rule ID 3 //
     /* 2831 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule3Enabled),
     /* 2834 */   // MIs[0] root
     /* 2834 */   // No operand predicates
     /* 2834 */   // MIs[0] ext
     /* 2834 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2838 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ANYEXT),
     /* 2842 */   // MIs[1] src
     /* 2842 */   // No operand predicates
     /* 2842 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2844 */   // Combiner Rule #3: truncate_of_anyext
     /* 2844 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner1),
     /* 2847 */ // Label 197: @2847
     /* 2847 */ GIM_Try, /*On fail goto*//*Label 198*/ GIMT_Encode4(2871), // Rule ID 27 //
     /* 2852 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule27Enabled),
     /* 2855 */   // MIs[0] root
     /* 2855 */   // No operand predicates
     /* 2855 */   // MIs[0] bv
     /* 2855 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2859 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR),
     /* 2863 */   GIM_CheckNumOperandsGE, /*MI*/1, /*Expected*/2,
     /* 2866 */   // MIs[1] unused
     /* 2866 */   // No operand predicates
     /* 2866 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2868 */   // Combiner Rule #27: buildvector_of_truncate
     /* 2868 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner6),
     /* 2871 */ // Label 198: @2871
     /* 2871 */ GIM_Try, /*On fail goto*//*Label 199*/ GIMT_Encode4(2892), // Rule ID 2 //
     /* 2876 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule2Enabled),
     /* 2879 */   // MIs[0] root
     /* 2879 */   // No operand predicates
     /* 2879 */   // MIs[0] ext
     /* 2879 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2883 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SEXT),
     /* 2887 */   // MIs[1] src
     /* 2887 */   // No operand predicates
     /* 2887 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2889 */   // Combiner Rule #2: truncate_of_sext
     /* 2889 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner1),
     /* 2892 */ // Label 199: @2892
     /* 2892 */ GIM_Try, /*On fail goto*//*Label 200*/ GIMT_Encode4(2913), // Rule ID 1 //
     /* 2897 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule1Enabled),
     /* 2900 */   // MIs[0] root
     /* 2900 */   // No operand predicates
     /* 2900 */   // MIs[0] ext
     /* 2900 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2904 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ZEXT),
     /* 2908 */   // MIs[1] src
     /* 2908 */   // No operand predicates
     /* 2908 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2910 */   // Combiner Rule #1: truncate_of_zext
     /* 2910 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner1),
     /* 2913 */ // Label 200: @2913
     /* 2913 */ GIM_Try, /*On fail goto*//*Label 201*/ GIMT_Encode4(2934), // Rule ID 166 //
     /* 2918 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule100Enabled),
     /* 2921 */   // MIs[0] dst
     /* 2921 */   // No operand predicates
     /* 2921 */   // MIs[0] __unary_undef_to_undef_match_0.x
     /* 2921 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2925 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
     /* 2929 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2931 */   // Combiner Rule #100: unary_undef_to_undef @ [__unary_undef_to_undef_match_0[0]]
     /* 2931 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner60),
     /* 2934 */ // Label 201: @2934
     /* 2934 */ GIM_Try, /*On fail goto*//*Label 202*/ GIMT_Encode4(2955), // Rule ID 28 //
     /* 2939 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule28Enabled),
     /* 2942 */   // MIs[0] root
     /* 2942 */   // No operand predicates
     /* 2942 */   // MIs[0] int
     /* 2942 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2946 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /* 2950 */   // MIs[1] imm
     /* 2950 */   // No operand predicates
     /* 2950 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 2952 */   // Combiner Rule #28: integer_of_truncate
     /* 2952 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner7),
     /* 2955 */ // Label 202: @2955
     /* 2955 */ GIM_Try, /*On fail goto*//*Label 203*/ GIMT_Encode4(2966), // Rule ID 222 //
     /* 2960 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule119Enabled),
     /* 2963 */   // MIs[0] dst
     /* 2963 */   // No operand predicates
     /* 2963 */   // MIs[0] src
     /* 2963 */   // No operand predicates
     /* 2963 */   // Combiner Rule #119: trunc_ssats
     /* 2963 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner79),
     /* 2966 */ // Label 203: @2966
     /* 2966 */ GIM_Try, /*On fail goto*//*Label 204*/ GIMT_Encode4(2977), // Rule ID 223 //
     /* 2971 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule120Enabled),
     /* 2974 */   // MIs[0] dst
     /* 2974 */   // No operand predicates
     /* 2974 */   // MIs[0] src
     /* 2974 */   // No operand predicates
     /* 2974 */   // Combiner Rule #120: trunc_ssatu
     /* 2974 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner80),
     /* 2977 */ // Label 204: @2977
     /* 2977 */ GIM_Reject,
     /* 2978 */ // Label 29: @2978
     /* 2978 */ GIM_Try, /*On fail goto*//*Label 205*/ GIMT_Encode4(3010), // Rule ID 225 //
     /* 2983 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule122Enabled),
     /* 2986 */   // MIs[0] dst
     /* 2986 */   // No operand predicates
     /* 2986 */   // MIs[0] src
     /* 2986 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 2990 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FPTOUI),
     /* 2994 */   // MIs[1] x
     /* 2994 */   // No operand predicates
     /* 2994 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner7),
     /* 2998 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 3000 */   // Combiner Rule #122: truncusatu_to_fptouisat
     /* 3000 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_FPTOUI_SAT),
     /* 3003 */   GIR_RootToRootCopy, /*OpIdx*/0, // dst
     /* 3005 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // x
     /* 3009 */   GIR_EraseRootFromParent_Done,
     /* 3010 */ // Label 205: @3010
     /* 3010 */ GIM_Reject,
     /* 3011 */ // Label 30: @3011
     /* 3011 */ GIM_Try, /*On fail goto*//*Label 206*/ GIMT_Encode4(3032), // Rule ID 7 //
     /* 3016 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule7Enabled),
     /* 3019 */   // MIs[0] root
     /* 3019 */   // No operand predicates
     /* 3019 */   // MIs[0] second
     /* 3019 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 3023 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ANYEXT),
     /* 3027 */   // MIs[1] src
     /* 3027 */   // No operand predicates
     /* 3027 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 3029 */   // Combiner Rule #7: sext_of_anyext
     /* 3029 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner2),
     /* 3032 */ // Label 206: @3032
     /* 3032 */ GIM_Try, /*On fail goto*//*Label 207*/ GIMT_Encode4(3053), // Rule ID 6 //
     /* 3037 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule6Enabled),
     /* 3040 */   // MIs[0] root
     /* 3040 */   // No operand predicates
     /* 3040 */   // MIs[0] second
     /* 3040 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 3044 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SEXT),
     /* 3048 */   // MIs[1] src
     /* 3048 */   // No operand predicates
     /* 3048 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 3050 */   // Combiner Rule #6: sext_of_sext
     /* 3050 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner2),
     /* 3053 */ // Label 207: @3053
     /* 3053 */ GIM_Reject,
     /* 3054 */ // Label 31: @3054
     /* 3054 */ GIM_Try, /*On fail goto*//*Label 208*/ GIMT_Encode4(3065), // Rule ID 38 //
     /* 3059 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule33Enabled),
     /* 3062 */   // Combiner Rule #33: sext_trunc_sextload; wip_match_opcode 'G_SEXT_INREG'
     /* 3062 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner12),
     /* 3065 */ // Label 208: @3065
     /* 3065 */ GIM_Try, /*On fail goto*//*Label 209*/ GIMT_Encode4(3076), // Rule ID 47 //
     /* 3070 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule40Enabled),
     /* 3073 */   // Combiner Rule #40: redundant_sext_inreg; wip_match_opcode 'G_SEXT_INREG'
     /* 3073 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner19),
     /* 3076 */ // Label 209: @3076
     /* 3076 */ GIM_Try, /*On fail goto*//*Label 210*/ GIMT_Encode4(3087), // Rule ID 48 //
     /* 3081 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule41Enabled),
     /* 3084 */   // Combiner Rule #41: bitfield_extract_from_sext_inreg; wip_match_opcode 'G_SEXT_INREG'
     /* 3084 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner20),
     /* 3087 */ // Label 210: @3087
     /* 3087 */ GIM_Try, /*On fail goto*//*Label 211*/ GIMT_Encode4(3108), // Rule ID 11 //
     /* 3092 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule11Enabled),
     /* 3095 */   // MIs[0] dst
     /* 3095 */   // No operand predicates
     /* 3095 */   // MIs[0] x
     /* 3095 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 3099 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SEXT_INREG),
     /* 3103 */   // MIs[1] src
     /* 3103 */   // No operand predicates
     /* 3103 */   // MIs[1] a
     /* 3103 */   // No operand predicates
     /* 3103 */   // MIs[0] b
     /* 3103 */   // No operand predicates
     /* 3103 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 3105 */   // Combiner Rule #11: sext_inreg_of_sext_inreg
     /* 3105 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner3),
     /* 3108 */ // Label 211: @3108
     /* 3108 */ GIM_Reject,
     /* 3109 */ // Label 32: @3109
     /* 3109 */ GIM_Try, /*On fail goto*//*Label 212*/ GIMT_Encode4(3130), // Rule ID 5 //
     /* 3114 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule5Enabled),
     /* 3117 */   // MIs[0] root
     /* 3117 */   // No operand predicates
     /* 3117 */   // MIs[0] second
     /* 3117 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 3121 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ANYEXT),
     /* 3125 */   // MIs[1] src
     /* 3125 */   // No operand predicates
     /* 3125 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 3127 */   // Combiner Rule #5: zext_of_anyext
     /* 3127 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner2),
     /* 3130 */ // Label 212: @3130
     /* 3130 */ GIM_Try, /*On fail goto*//*Label 213*/ GIMT_Encode4(3151), // Rule ID 4 //
     /* 3135 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule4Enabled),
     /* 3138 */   // MIs[0] root
     /* 3138 */   // No operand predicates
     /* 3138 */   // MIs[0] second
     /* 3138 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 3142 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ZEXT),
     /* 3146 */   // MIs[1] src
     /* 3146 */   // No operand predicates
     /* 3146 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 3148 */   // Combiner Rule #4: zext_of_zext
     /* 3148 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner2),
     /* 3151 */ // Label 213: @3151
     /* 3151 */ GIM_Reject,
     /* 3152 */ // Label 33: @3152
     /* 3152 */ GIM_Try, /*On fail goto*//*Label 214*/ GIMT_Encode4(3163), // Rule ID 86 //
     /* 3157 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule67Enabled),
     /* 3160 */   // Combiner Rule #67: constant_fold_binop; wip_match_opcode 'G_SHL'
     /* 3160 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner42),
     /* 3163 */ // Label 214: @3163
     /* 3163 */ GIM_Try, /*On fail goto*//*Label 215*/ GIMT_Encode4(3174), // Rule ID 159 //
     /* 3168 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule97Enabled),
     /* 3171 */   // Combiner Rule #97: binop_left_undef_to_zero; wip_match_opcode 'G_SHL'
     /* 3171 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner58),
     /* 3174 */ // Label 215: @3174
     /* 3174 */ GIM_Try, /*On fail goto*//*Label 216*/ GIMT_Encode4(3185), // Rule ID 162 //
     /* 3179 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule98Enabled),
     /* 3182 */   // Combiner Rule #98: binop_right_undef_to_undef; wip_match_opcode 'G_SHL'
     /* 3182 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner59),
     /* 3185 */ // Label 216: @3185
     /* 3185 */ GIM_Try, /*On fail goto*//*Label 217*/ GIMT_Encode4(3225), // Rule ID 124 //
     /* 3190 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule73Enabled),
     /* 3193 */   // MIs[0] dst
     /* 3193 */   // No operand predicates
     /* 3193 */   // MIs[0] zero
     /* 3193 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 3197 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /* 3201 */   // MIs[1] Operand 1
     /* 3201 */   GIM_CheckLiteralInt, /*MI*/1, /*Op*/1, GIMT_Encode8(0),
     /* 3212 */   // MIs[0] rhs
     /* 3212 */   // No operand predicates
     /* 3212 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 3217 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 3219 */   // Combiner Rule #73: binop_left_to_zero @ [__binop_left_to_zero_match_0[0]]
     /* 3219 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 3224 */   GIR_EraseRootFromParent_Done,
     /* 3225 */ // Label 217: @3225
     /* 3225 */ GIM_Try, /*On fail goto*//*Label 218*/ GIMT_Encode4(3248), // Rule ID 114 //
     /* 3230 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule70Enabled),
     /* 3233 */   // MIs[0] dst
     /* 3233 */   // No operand predicates
     /* 3233 */   // MIs[0] lhs
     /* 3233 */   // No operand predicates
     /* 3233 */   // MIs[0] Operand 2
     /* 3233 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /* 3237 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 3242 */   // Combiner Rule #70: right_identity_zero @ [__right_identity_zero_match_0[4]]
     /* 3242 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 3247 */   GIR_EraseRootFromParent_Done,
     /* 3248 */ // Label 218: @3248
     /* 3248 */ GIM_Reject,
     /* 3249 */ // Label 34: @3249
     /* 3249 */ GIM_Try, /*On fail goto*//*Label 219*/ GIMT_Encode4(3260), // Rule ID 51 //
     /* 3254 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule43Enabled),
     /* 3257 */   // Combiner Rule #43: bitfield_extract_from_shr; wip_match_opcode 'G_LSHR'
     /* 3257 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner22),
     /* 3260 */ // Label 219: @3260
     /* 3260 */ GIM_Try, /*On fail goto*//*Label 220*/ GIMT_Encode4(3271), // Rule ID 53 //
     /* 3265 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule44Enabled),
     /* 3268 */   // Combiner Rule #44: bitfield_extract_from_shr_and; wip_match_opcode 'G_LSHR'
     /* 3268 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner23),
     /* 3271 */ // Label 220: @3271
     /* 3271 */ GIM_Try, /*On fail goto*//*Label 221*/ GIMT_Encode4(3282), // Rule ID 83 //
     /* 3276 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule67Enabled),
     /* 3279 */   // Combiner Rule #67: constant_fold_binop; wip_match_opcode 'G_LSHR'
     /* 3279 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner42),
     /* 3282 */ // Label 221: @3282
     /* 3282 */ GIM_Try, /*On fail goto*//*Label 222*/ GIMT_Encode4(3293), // Rule ID 164 //
     /* 3287 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule98Enabled),
     /* 3290 */   // Combiner Rule #98: binop_right_undef_to_undef; wip_match_opcode 'G_LSHR'
     /* 3290 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner59),
     /* 3293 */ // Label 222: @3293
     /* 3293 */ GIM_Try, /*On fail goto*//*Label 223*/ GIMT_Encode4(3322), // Rule ID 226 //
     /* 3298 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule123Enabled),
     /* 3301 */   // MIs[0] dst
     /* 3301 */   // No operand predicates
     /* 3301 */   // MIs[0] d2
     /* 3301 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 3305 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_TRUNC),
     /* 3309 */   // MIs[1] d1
     /* 3309 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/1, // MIs[2]
     /* 3313 */   GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_LSHR),
     /* 3317 */   // MIs[2] x
     /* 3317 */   // No operand predicates
     /* 3317 */   // MIs[2] y
     /* 3317 */   // No operand predicates
     /* 3317 */   // MIs[0] z
     /* 3317 */   // No operand predicates
     /* 3317 */   GIM_CheckIsSafeToFold, /*NumInsns*/2,
     /* 3319 */   // Combiner Rule #123: lshr_of_trunc_of_lshr
     /* 3319 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner81),
     /* 3322 */ // Label 223: @3322
     /* 3322 */ GIM_Try, /*On fail goto*//*Label 224*/ GIMT_Encode4(3362), // Rule ID 125 //
     /* 3327 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule73Enabled),
     /* 3330 */   // MIs[0] dst
     /* 3330 */   // No operand predicates
     /* 3330 */   // MIs[0] zero
     /* 3330 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 3334 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /* 3338 */   // MIs[1] Operand 1
     /* 3338 */   GIM_CheckLiteralInt, /*MI*/1, /*Op*/1, GIMT_Encode8(0),
     /* 3349 */   // MIs[0] rhs
     /* 3349 */   // No operand predicates
     /* 3349 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 3354 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 3356 */   // Combiner Rule #73: binop_left_to_zero @ [__binop_left_to_zero_match_0[1]]
     /* 3356 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 3361 */   GIR_EraseRootFromParent_Done,
     /* 3362 */ // Label 224: @3362
     /* 3362 */ GIM_Try, /*On fail goto*//*Label 225*/ GIMT_Encode4(3385), // Rule ID 116 //
     /* 3367 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule70Enabled),
     /* 3370 */   // MIs[0] dst
     /* 3370 */   // No operand predicates
     /* 3370 */   // MIs[0] lhs
     /* 3370 */   // No operand predicates
     /* 3370 */   // MIs[0] Operand 2
     /* 3370 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /* 3374 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 3379 */   // Combiner Rule #70: right_identity_zero @ [__right_identity_zero_match_0[6]]
     /* 3379 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 3384 */   GIR_EraseRootFromParent_Done,
     /* 3385 */ // Label 225: @3385
     /* 3385 */ GIM_Reject,
     /* 3386 */ // Label 35: @3386
     /* 3386 */ GIM_Try, /*On fail goto*//*Label 226*/ GIMT_Encode4(3397), // Rule ID 50 //
     /* 3391 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule43Enabled),
     /* 3394 */   // Combiner Rule #43: bitfield_extract_from_shr; wip_match_opcode 'G_ASHR'
     /* 3394 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner22),
     /* 3397 */ // Label 226: @3397
     /* 3397 */ GIM_Try, /*On fail goto*//*Label 227*/ GIMT_Encode4(3408), // Rule ID 52 //
     /* 3402 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule44Enabled),
     /* 3405 */   // Combiner Rule #44: bitfield_extract_from_shr_and; wip_match_opcode 'G_ASHR'
     /* 3405 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner23),
     /* 3408 */ // Label 227: @3408
     /* 3408 */ GIM_Try, /*On fail goto*//*Label 228*/ GIMT_Encode4(3419), // Rule ID 82 //
     /* 3413 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule67Enabled),
     /* 3416 */   // Combiner Rule #67: constant_fold_binop; wip_match_opcode 'G_ASHR'
     /* 3416 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner42),
     /* 3419 */ // Label 228: @3419
     /* 3419 */ GIM_Try, /*On fail goto*//*Label 229*/ GIMT_Encode4(3430), // Rule ID 163 //
     /* 3424 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule98Enabled),
     /* 3427 */   // Combiner Rule #98: binop_right_undef_to_undef; wip_match_opcode 'G_ASHR'
     /* 3427 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner59),
     /* 3430 */ // Label 229: @3430
     /* 3430 */ GIM_Try, /*On fail goto*//*Label 230*/ GIMT_Encode4(3470), // Rule ID 126 //
     /* 3435 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule73Enabled),
     /* 3438 */   // MIs[0] dst
     /* 3438 */   // No operand predicates
     /* 3438 */   // MIs[0] zero
     /* 3438 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 3442 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
     /* 3446 */   // MIs[1] Operand 1
     /* 3446 */   GIM_CheckLiteralInt, /*MI*/1, /*Op*/1, GIMT_Encode8(0),
     /* 3457 */   // MIs[0] rhs
     /* 3457 */   // No operand predicates
     /* 3457 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 3462 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 3464 */   // Combiner Rule #73: binop_left_to_zero @ [__binop_left_to_zero_match_0[2]]
     /* 3464 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 3469 */   GIR_EraseRootFromParent_Done,
     /* 3470 */ // Label 230: @3470
     /* 3470 */ GIM_Try, /*On fail goto*//*Label 231*/ GIMT_Encode4(3493), // Rule ID 115 //
     /* 3475 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule70Enabled),
     /* 3478 */   // MIs[0] dst
     /* 3478 */   // No operand predicates
     /* 3478 */   // MIs[0] lhs
     /* 3478 */   // No operand predicates
     /* 3478 */   // MIs[0] Operand 2
     /* 3478 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /* 3482 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 3487 */   // Combiner Rule #70: right_identity_zero @ [__right_identity_zero_match_0[5]]
     /* 3487 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 3492 */   GIR_EraseRootFromParent_Done,
     /* 3493 */ // Label 231: @3493
     /* 3493 */ GIM_Reject,
     /* 3494 */ // Label 36: @3494
     /* 3494 */ GIM_Try, /*On fail goto*//*Label 232*/ GIMT_Encode4(3505), // Rule ID 54 //
     /* 3499 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule45Enabled),
     /* 3502 */   // Combiner Rule #45: rotate_out_of_range; wip_match_opcode 'G_ROTR'
     /* 3502 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner24),
     /* 3505 */ // Label 232: @3505
     /* 3505 */ GIM_Try, /*On fail goto*//*Label 233*/ GIMT_Encode4(3528), // Rule ID 119 //
     /* 3510 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule70Enabled),
     /* 3513 */   // MIs[0] dst
     /* 3513 */   // No operand predicates
     /* 3513 */   // MIs[0] lhs
     /* 3513 */   // No operand predicates
     /* 3513 */   // MIs[0] Operand 2
     /* 3513 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /* 3517 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 3522 */   // Combiner Rule #70: right_identity_zero @ [__right_identity_zero_match_0[9]]
     /* 3522 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 3527 */   GIR_EraseRootFromParent_Done,
     /* 3528 */ // Label 233: @3528
     /* 3528 */ GIM_Reject,
     /* 3529 */ // Label 37: @3529
     /* 3529 */ GIM_Try, /*On fail goto*//*Label 234*/ GIMT_Encode4(3540), // Rule ID 55 //
     /* 3534 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule45Enabled),
     /* 3537 */   // Combiner Rule #45: rotate_out_of_range; wip_match_opcode 'G_ROTL'
     /* 3537 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner24),
     /* 3540 */ // Label 234: @3540
     /* 3540 */ GIM_Try, /*On fail goto*//*Label 235*/ GIMT_Encode4(3563), // Rule ID 118 //
     /* 3545 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule70Enabled),
     /* 3548 */   // MIs[0] dst
     /* 3548 */   // No operand predicates
     /* 3548 */   // MIs[0] lhs
     /* 3548 */   // No operand predicates
     /* 3548 */   // MIs[0] Operand 2
     /* 3548 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /* 3552 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 3557 */   // Combiner Rule #70: right_identity_zero @ [__right_identity_zero_match_0[8]]
     /* 3557 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 3562 */   GIR_EraseRootFromParent_Done,
     /* 3563 */ // Label 235: @3563
     /* 3563 */ GIM_Reject,
     /* 3564 */ // Label 38: @3564
     /* 3564 */ GIM_Try, /*On fail goto*//*Label 236*/ GIMT_Encode4(3575), // Rule ID 56 //
     /* 3569 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule46Enabled),
     /* 3572 */   // Combiner Rule #46: icmp_to_true_false_known_bits; wip_match_opcode 'G_ICMP'
     /* 3572 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner25),
     /* 3575 */ // Label 236: @3575
     /* 3575 */ GIM_Reject,
     /* 3576 */ // Label 39: @3576
     /* 3576 */ GIM_Try, /*On fail goto*//*Label 237*/ GIMT_Encode4(3587), // Rule ID 62 //
     /* 3581 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule50Enabled),
     /* 3584 */   // Combiner Rule #50: select_constant_cmp; wip_match_opcode 'G_SELECT'
     /* 3584 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner28),
     /* 3587 */ // Label 237: @3587
     /* 3587 */ GIM_Try, /*On fail goto*//*Label 238*/ GIMT_Encode4(3598), // Rule ID 64 //
     /* 3592 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule52Enabled),
     /* 3595 */   // Combiner Rule #52: match_selects; wip_match_opcode 'G_SELECT'
     /* 3595 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner30),
     /* 3598 */ // Label 238: @3598
     /* 3598 */ GIM_Try, /*On fail goto*//*Label 239*/ GIMT_Encode4(3609), // Rule ID 109 //
     /* 3603 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule69Enabled),
     /* 3606 */   // Combiner Rule #69: select_same_val; wip_match_opcode 'G_SELECT'
     /* 3606 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner44),
     /* 3609 */ // Label 239: @3609
     /* 3609 */ GIM_Try, /*On fail goto*//*Label 240*/ GIMT_Encode4(3620), // Rule ID 182 //
     /* 3614 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule106Enabled),
     /* 3617 */   // Combiner Rule #106: select_to_minmax; wip_match_opcode 'G_SELECT'
     /* 3617 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner66),
     /* 3620 */ // Label 240: @3620
     /* 3620 */ GIM_Try, /*On fail goto*//*Label 241*/ GIMT_Encode4(3700), // Rule ID 65 //
     /* 3625 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule53Enabled),
     /* 3628 */   // MIs[0] dst
     /* 3628 */   GIM_RecordRegType, /*MI*/0, /*Op*/0, /*TempTypeIdx*/255,
     /* 3632 */   // MIs[0] c
     /* 3632 */   // No operand predicates
     /* 3632 */   // MIs[0] Operand 2
     /* 3632 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /* 3636 */   // MIs[0] x
     /* 3636 */   // No operand predicates
     /* 3636 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner0),
     /* 3640 */   GIR_MakeTempReg, /*TempRegID*/2, /*TypeID*/255,
     /* 3643 */   GIR_MakeTempReg, /*TempRegID*/1, /*TypeID*/255,
     /* 3646 */   GIR_BuildConstant, /*TempRegID*/1, /*Val*/GIMT_Encode8(18446744073709551615u),
     /* 3656 */   GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/255,
     /* 3659 */   // Combiner Rule #53: select_zero_true
     /* 3659 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_XOR),
     /* 3662 */   GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/GIMT_Encode2(static_cast<uint16_t>(RegState::Define)),
     /* 3667 */   GIR_RootToRootCopy, /*OpIdx*/1, // c
     /* 3669 */   GIR_AddSimpleTempRegister, /*InsnID*/0, /*TempRegID*/1,
     /* 3672 */   GIR_BuildMI, /*InsnID*/1, /*Opcode*/GIMT_Encode2(TargetOpcode::G_FREEZE),
     /* 3676 */   GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/2, /*TempRegFlags*/GIMT_Encode2(static_cast<uint16_t>(RegState::Define)),
     /* 3681 */   GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/0, /*OpIdx*/3, // x
     /* 3685 */   GIR_BuildMI, /*InsnID*/2, /*Opcode*/GIMT_Encode2(TargetOpcode::G_AND),
     /* 3689 */   GIR_Copy, /*NewInsnID*/2, /*OldInsnID*/0, /*OpIdx*/0, // dst
     /* 3693 */   GIR_AddSimpleTempRegister, /*InsnID*/2, /*TempRegID*/0,
     /* 3696 */   GIR_AddSimpleTempRegister, /*InsnID*/2, /*TempRegID*/2,
     /* 3699 */   GIR_EraseRootFromParent_Done,
     /* 3700 */ // Label 241: @3700
     /* 3700 */ GIM_Try, /*On fail goto*//*Label 242*/ GIMT_Encode4(3749), // Rule ID 66 //
     /* 3705 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule54Enabled),
     /* 3708 */   // MIs[0] dst
     /* 3708 */   GIM_RecordRegType, /*MI*/0, /*Op*/0, /*TempTypeIdx*/255,
     /* 3712 */   // MIs[0] c
     /* 3712 */   // No operand predicates
     /* 3712 */   // MIs[0] x
     /* 3712 */   // No operand predicates
     /* 3712 */   // MIs[0] Operand 3
     /* 3712 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/3, 0,
     /* 3716 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner0),
     /* 3720 */   GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/255,
     /* 3723 */   // Combiner Rule #54: select_zero_false
     /* 3723 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_FREEZE),
     /* 3726 */   GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/GIMT_Encode2(static_cast<uint16_t>(RegState::Define)),
     /* 3731 */   GIR_RootToRootCopy, /*OpIdx*/2, // x
     /* 3733 */   GIR_BuildMI, /*InsnID*/1, /*Opcode*/GIMT_Encode2(TargetOpcode::G_AND),
     /* 3737 */   GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/0, /*OpIdx*/0, // dst
     /* 3741 */   GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/0, /*OpIdx*/1, // c
     /* 3745 */   GIR_AddSimpleTempRegister, /*InsnID*/1, /*TempRegID*/0,
     /* 3748 */   GIR_EraseRootFromParent_Done,
     /* 3749 */ // Label 242: @3749
     /* 3749 */ GIM_Try, /*On fail goto*//*Label 243*/ GIMT_Encode4(3770), // Rule ID 63 //
     /* 3754 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule51Enabled),
     /* 3757 */   // MIs[0] root
     /* 3757 */   // No operand predicates
     /* 3757 */   // MIs[0] tst
     /* 3757 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 3761 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ICMP),
     /* 3765 */   // MIs[1] tst1
     /* 3765 */   // No operand predicates
     /* 3765 */   // MIs[1] a
     /* 3765 */   // No operand predicates
     /* 3765 */   // MIs[1] b
     /* 3765 */   // No operand predicates
     /* 3765 */   // MIs[0] x
     /* 3765 */   // No operand predicates
     /* 3765 */   // MIs[0] y
     /* 3765 */   // No operand predicates
     /* 3765 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 3767 */   // Combiner Rule #51: select_to_iminmax
     /* 3767 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner29),
     /* 3770 */ // Label 243: @3770
     /* 3770 */ GIM_Try, /*On fail goto*//*Label 244*/ GIMT_Encode4(3806), // Rule ID 67 //
     /* 3775 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule55Enabled),
     /* 3778 */   // MIs[0] dst
     /* 3778 */   // No operand predicates
     /* 3778 */   // MIs[0] c
     /* 3778 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 3782 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_XOR),
     /* 3786 */   // MIs[1] src
     /* 3786 */   // No operand predicates
     /* 3786 */   // MIs[1] Operand 2
     /* 3786 */   GIM_CheckConstantInt8, /*MI*/1, /*Op*/2, 255,
     /* 3790 */   // MIs[0] x
     /* 3790 */   // No operand predicates
     /* 3790 */   // MIs[0] y
     /* 3790 */   // No operand predicates
     /* 3790 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 3792 */   // Combiner Rule #55: select_not
     /* 3792 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SELECT),
     /* 3795 */   GIR_RootToRootCopy, /*OpIdx*/0, // dst
     /* 3797 */   GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
     /* 3801 */   GIR_RootToRootCopy, /*OpIdx*/3, // y
     /* 3803 */   GIR_RootToRootCopy, /*OpIdx*/2, // x
     /* 3805 */   GIR_EraseRootFromParent_Done,
     /* 3806 */ // Label 244: @3806
     /* 3806 */ GIM_Try, /*On fail goto*//*Label 245*/ GIMT_Encode4(3835), // Rule ID 61 //
     /* 3811 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule49Enabled),
     /* 3814 */   // MIs[0] dst
     /* 3814 */   // No operand predicates
     /* 3814 */   // MIs[0] undef
     /* 3814 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 3818 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
     /* 3822 */   // MIs[0] x
     /* 3822 */   // No operand predicates
     /* 3822 */   // MIs[0] y
     /* 3822 */   // No operand predicates
     /* 3822 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/3,
     /* 3827 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 3829 */   // Combiner Rule #49: select_undef_cmp
     /* 3829 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/3,
     /* 3834 */   GIR_EraseRootFromParent_Done,
     /* 3835 */ // Label 245: @3835
     /* 3835 */ GIM_Reject,
     /* 3836 */ // Label 40: @3836
     /* 3836 */ GIM_Try, /*On fail goto*//*Label 246*/ GIMT_Encode4(3847), // Rule ID 58 //
     /* 3841 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule47Enabled),
     /* 3844 */   // Combiner Rule #47: match_addos; wip_match_opcode 'G_UADDO'
     /* 3844 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner26),
     /* 3847 */ // Label 246: @3847
     /* 3847 */ GIM_Try, /*On fail goto*//*Label 247*/ GIMT_Encode4(3858), // Rule ID 195 //
     /* 3852 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule110Enabled),
     /* 3855 */   // Combiner Rule #110: commute_int_constant_to_rhs; wip_match_opcode 'G_UADDO'
     /* 3855 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner70),
     /* 3858 */ // Label 247: @3858
     /* 3858 */ GIM_Reject,
     /* 3859 */ // Label 41: @3859
     /* 3859 */ GIM_Try, /*On fail goto*//*Label 248*/ GIMT_Encode4(3870), // Rule ID 60 //
     /* 3864 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule48Enabled),
     /* 3867 */   // Combiner Rule #48: match_subo_no_overflow; wip_match_opcode 'G_USUBO'
     /* 3867 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner27),
     /* 3870 */ // Label 248: @3870
     /* 3870 */ GIM_Reject,
     /* 3871 */ // Label 42: @3871
     /* 3871 */ GIM_Try, /*On fail goto*//*Label 249*/ GIMT_Encode4(3882), // Rule ID 57 //
     /* 3876 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule47Enabled),
     /* 3879 */   // Combiner Rule #47: match_addos; wip_match_opcode 'G_SADDO'
     /* 3879 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner26),
     /* 3882 */ // Label 249: @3882
     /* 3882 */ GIM_Try, /*On fail goto*//*Label 250*/ GIMT_Encode4(3893), // Rule ID 196 //
     /* 3887 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule110Enabled),
     /* 3890 */   // Combiner Rule #110: commute_int_constant_to_rhs; wip_match_opcode 'G_SADDO'
     /* 3890 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner70),
     /* 3893 */ // Label 250: @3893
     /* 3893 */ GIM_Reject,
     /* 3894 */ // Label 43: @3894
     /* 3894 */ GIM_Try, /*On fail goto*//*Label 251*/ GIMT_Encode4(3905), // Rule ID 59 //
     /* 3899 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule48Enabled),
     /* 3902 */   // Combiner Rule #48: match_subo_no_overflow; wip_match_opcode 'G_SSUBO'
     /* 3902 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner27),
     /* 3905 */ // Label 251: @3905
     /* 3905 */ GIM_Reject,
     /* 3906 */ // Label 44: @3906
     /* 3906 */ GIM_Try, /*On fail goto*//*Label 252*/ GIMT_Encode4(3917), // Rule ID 197 //
     /* 3911 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule110Enabled),
     /* 3914 */   // Combiner Rule #110: commute_int_constant_to_rhs; wip_match_opcode 'G_UMULO'
     /* 3914 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner70),
     /* 3917 */ // Label 252: @3917
     /* 3917 */ GIM_Reject,
     /* 3918 */ // Label 45: @3918
     /* 3918 */ GIM_Try, /*On fail goto*//*Label 253*/ GIMT_Encode4(3929), // Rule ID 198 //
     /* 3923 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule110Enabled),
     /* 3926 */   // Combiner Rule #110: commute_int_constant_to_rhs; wip_match_opcode 'G_SMULO'
     /* 3926 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner70),
     /* 3929 */ // Label 253: @3929
     /* 3929 */ GIM_Reject,
     /* 3930 */ // Label 46: @3930
     /* 3930 */ GIM_Try, /*On fail goto*//*Label 254*/ GIMT_Encode4(3941), // Rule ID 199 //
     /* 3935 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule110Enabled),
     /* 3938 */   // Combiner Rule #110: commute_int_constant_to_rhs; wip_match_opcode 'G_UMULH'
     /* 3938 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner70),
     /* 3941 */ // Label 254: @3941
     /* 3941 */ GIM_Reject,
     /* 3942 */ // Label 47: @3942
     /* 3942 */ GIM_Try, /*On fail goto*//*Label 255*/ GIMT_Encode4(3953), // Rule ID 200 //
     /* 3947 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule110Enabled),
     /* 3950 */   // Combiner Rule #110: commute_int_constant_to_rhs; wip_match_opcode 'G_SMULH'
     /* 3950 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner70),
     /* 3953 */ // Label 255: @3953
     /* 3953 */ GIM_Reject,
     /* 3954 */ // Label 48: @3954
     /* 3954 */ GIM_Try, /*On fail goto*//*Label 256*/ GIMT_Encode4(3965), // Rule ID 201 //
     /* 3959 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule110Enabled),
     /* 3962 */   // Combiner Rule #110: commute_int_constant_to_rhs; wip_match_opcode 'G_UADDSAT'
     /* 3962 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner70),
     /* 3965 */ // Label 256: @3965
     /* 3965 */ GIM_Reject,
     /* 3966 */ // Label 49: @3966
     /* 3966 */ GIM_Try, /*On fail goto*//*Label 257*/ GIMT_Encode4(3977), // Rule ID 202 //
     /* 3971 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule110Enabled),
     /* 3974 */   // Combiner Rule #110: commute_int_constant_to_rhs; wip_match_opcode 'G_SADDSAT'
     /* 3974 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner70),
     /* 3977 */ // Label 257: @3977
     /* 3977 */ GIM_Reject,
     /* 3978 */ // Label 50: @3978
     /* 3978 */ GIM_Try, /*On fail goto*//*Label 258*/ GIMT_Encode4(3989), // Rule ID 203 //
     /* 3983 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule110Enabled),
     /* 3986 */   // Combiner Rule #110: commute_int_constant_to_rhs; wip_match_opcode 'G_SMULFIX'
     /* 3986 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner70),
     /* 3989 */ // Label 258: @3989
     /* 3989 */ GIM_Reject,
     /* 3990 */ // Label 51: @3990
     /* 3990 */ GIM_Try, /*On fail goto*//*Label 259*/ GIMT_Encode4(4001), // Rule ID 204 //
     /* 3995 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule110Enabled),
     /* 3998 */   // Combiner Rule #110: commute_int_constant_to_rhs; wip_match_opcode 'G_UMULFIX'
     /* 3998 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner70),
     /* 4001 */ // Label 259: @4001
     /* 4001 */ GIM_Reject,
     /* 4002 */ // Label 52: @4002
     /* 4002 */ GIM_Try, /*On fail goto*//*Label 260*/ GIMT_Encode4(4013), // Rule ID 205 //
     /* 4007 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule110Enabled),
     /* 4010 */   // Combiner Rule #110: commute_int_constant_to_rhs; wip_match_opcode 'G_SMULFIXSAT'
     /* 4010 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner70),
     /* 4013 */ // Label 260: @4013
     /* 4013 */ GIM_Reject,
     /* 4014 */ // Label 53: @4014
     /* 4014 */ GIM_Try, /*On fail goto*//*Label 261*/ GIMT_Encode4(4025), // Rule ID 206 //
     /* 4019 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule110Enabled),
     /* 4022 */   // Combiner Rule #110: commute_int_constant_to_rhs; wip_match_opcode 'G_UMULFIXSAT'
     /* 4022 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner70),
     /* 4025 */ // Label 261: @4025
     /* 4025 */ GIM_Reject,
     /* 4026 */ // Label 54: @4026
     /* 4026 */ GIM_Try, /*On fail goto*//*Label 262*/ GIMT_Encode4(4037), // Rule ID 207 //
     /* 4031 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule111Enabled),
     /* 4034 */   // Combiner Rule #111: commute_fp_constant_to_rhs; wip_match_opcode 'G_FADD'
     /* 4034 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner71),
     /* 4037 */ // Label 262: @4037
     /* 4037 */ GIM_Try, /*On fail goto*//*Label 263*/ GIMT_Encode4(4060), // Rule ID 148 //
     /* 4042 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule88Enabled),
     /* 4045 */   // MIs[0] dst
     /* 4045 */   // No operand predicates
     /* 4045 */   // MIs[0] x
     /* 4045 */   // No operand predicates
     /* 4045 */   // MIs[0] y
     /* 4045 */   // No operand predicates
     /* 4045 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner3),
     /* 4049 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 4054 */   // Combiner Rule #88: right_identity_neg_zero_fp
     /* 4054 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 4059 */   GIR_EraseRootFromParent_Done,
     /* 4060 */ // Label 263: @4060
     /* 4060 */ GIM_Try, /*On fail goto*//*Label 264*/ GIMT_Encode4(4089), // Rule ID 149 //
     /* 4065 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule89Enabled),
     /* 4068 */   GIM_MIFlags, /*MI*/0, GIMT_Encode4(MachineInstr::FmNsz),
     /* 4074 */   // MIs[0] dst
     /* 4074 */   // No operand predicates
     /* 4074 */   // MIs[0] x
     /* 4074 */   // No operand predicates
     /* 4074 */   // MIs[0] y
     /* 4074 */   // No operand predicates
     /* 4074 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner4),
     /* 4078 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 4083 */   // Combiner Rule #89: right_identity_neg_zero_fp_nsz
     /* 4083 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 4088 */   GIR_EraseRootFromParent_Done,
     /* 4089 */ // Label 264: @4089
     /* 4089 */ GIM_Try, /*On fail goto*//*Label 265*/ GIMT_Encode4(4100), // Rule ID 97 //
     /* 4094 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule68Enabled),
     /* 4097 */   // MIs[0] d
     /* 4097 */   // No operand predicates
     /* 4097 */   // MIs[0] mi.src0
     /* 4097 */   // No operand predicates
     /* 4097 */   // MIs[0] mi.src1
     /* 4097 */   // No operand predicates
     /* 4097 */   // Combiner Rule #68: constant_fold_fp_binop @ [mi[0]]
     /* 4097 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner43),
     /* 4100 */ // Label 265: @4100
     /* 4100 */ GIM_Reject,
     /* 4101 */ // Label 55: @4101
     /* 4101 */ GIM_Try, /*On fail goto*//*Label 266*/ GIMT_Encode4(4112), // Rule ID 98 //
     /* 4106 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule68Enabled),
     /* 4109 */   // MIs[0] d
     /* 4109 */   // No operand predicates
     /* 4109 */   // MIs[0] mi.src0
     /* 4109 */   // No operand predicates
     /* 4109 */   // MIs[0] mi.src1
     /* 4109 */   // No operand predicates
     /* 4109 */   // Combiner Rule #68: constant_fold_fp_binop @ [mi[1]]
     /* 4109 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner43),
     /* 4112 */ // Label 266: @4112
     /* 4112 */ GIM_Reject,
     /* 4113 */ // Label 56: @4113
     /* 4113 */ GIM_Try, /*On fail goto*//*Label 267*/ GIMT_Encode4(4124), // Rule ID 208 //
     /* 4118 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule111Enabled),
     /* 4121 */   // Combiner Rule #111: commute_fp_constant_to_rhs; wip_match_opcode 'G_FMUL'
     /* 4121 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner71),
     /* 4124 */ // Label 267: @4124
     /* 4124 */ GIM_Try, /*On fail goto*//*Label 268*/ GIMT_Encode4(4147), // Rule ID 138 //
     /* 4129 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule80Enabled),
     /* 4132 */   // MIs[0] dst
     /* 4132 */   // No operand predicates
     /* 4132 */   // MIs[0] x
     /* 4132 */   // No operand predicates
     /* 4132 */   // MIs[0] y
     /* 4132 */   // No operand predicates
     /* 4132 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner1),
     /* 4136 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 4141 */   // Combiner Rule #80: right_identity_one_fp
     /* 4141 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 4146 */   GIR_EraseRootFromParent_Done,
     /* 4147 */ // Label 268: @4147
     /* 4147 */ GIM_Try, /*On fail goto*//*Label 269*/ GIMT_Encode4(4167), // Rule ID 150 //
     /* 4152 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule90Enabled),
     /* 4155 */   // MIs[0] dst
     /* 4155 */   // No operand predicates
     /* 4155 */   // MIs[0] x
     /* 4155 */   // No operand predicates
     /* 4155 */   // MIs[0] y
     /* 4155 */   // No operand predicates
     /* 4155 */   GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner5),
     /* 4159 */   // Combiner Rule #90: right_identity_neg_one_fp
     /* 4159 */   GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_FNEG),
     /* 4162 */   GIR_RootToRootCopy, /*OpIdx*/0, // dst
     /* 4164 */   GIR_RootToRootCopy, /*OpIdx*/1, // x
     /* 4166 */   GIR_EraseRootFromParent_Done,
     /* 4167 */ // Label 269: @4167
     /* 4167 */ GIM_Try, /*On fail goto*//*Label 270*/ GIMT_Encode4(4178), // Rule ID 99 //
     /* 4172 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule68Enabled),
     /* 4175 */   // MIs[0] d
     /* 4175 */   // No operand predicates
     /* 4175 */   // MIs[0] mi.src0
     /* 4175 */   // No operand predicates
     /* 4175 */   // MIs[0] mi.src1
     /* 4175 */   // No operand predicates
     /* 4175 */   // Combiner Rule #68: constant_fold_fp_binop @ [mi[2]]
     /* 4175 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner43),
     /* 4178 */ // Label 270: @4178
     /* 4178 */ GIM_Reject,
     /* 4179 */ // Label 57: @4179
     /* 4179 */ GIM_Try, /*On fail goto*//*Label 271*/ GIMT_Encode4(4190), // Rule ID 100 //
     /* 4184 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule68Enabled),
     /* 4187 */   // MIs[0] d
     /* 4187 */   // No operand predicates
     /* 4187 */   // MIs[0] mi.src0
     /* 4187 */   // No operand predicates
     /* 4187 */   // MIs[0] mi.src1
     /* 4187 */   // No operand predicates
     /* 4187 */   // Combiner Rule #68: constant_fold_fp_binop @ [mi[3]]
     /* 4187 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner43),
     /* 4190 */ // Label 271: @4190
     /* 4190 */ GIM_Reject,
     /* 4191 */ // Label 58: @4191
     /* 4191 */ GIM_Try, /*On fail goto*//*Label 272*/ GIMT_Encode4(4202), // Rule ID 101 //
     /* 4196 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule68Enabled),
     /* 4199 */   // MIs[0] d
     /* 4199 */   // No operand predicates
     /* 4199 */   // MIs[0] mi.src0
     /* 4199 */   // No operand predicates
     /* 4199 */   // MIs[0] mi.src1
     /* 4199 */   // No operand predicates
     /* 4199 */   // Combiner Rule #68: constant_fold_fp_binop @ [mi[4]]
     /* 4199 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner43),
     /* 4202 */ // Label 272: @4202
     /* 4202 */ GIM_Reject,
     /* 4203 */ // Label 59: @4203
     /* 4203 */ GIM_Try, /*On fail goto*//*Label 273*/ GIMT_Encode4(4224), // Rule ID 15 //
     /* 4208 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule15Enabled),
     /* 4211 */   // MIs[0] dst
     /* 4211 */   // No operand predicates
     /* 4211 */   // MIs[0] src0
     /* 4211 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 4215 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 4219 */   // MIs[1] cst
     /* 4219 */   // No operand predicates
     /* 4219 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 4221 */   // Combiner Rule #15: constant_fold_flog2
     /* 4221 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner4),
     /* 4224 */ // Label 273: @4224
     /* 4224 */ GIM_Reject,
     /* 4225 */ // Label 60: @4225
     /* 4225 */ GIM_Try, /*On fail goto*//*Label 274*/ GIMT_Encode4(4246), // Rule ID 12 //
     /* 4230 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule12Enabled),
     /* 4233 */   // MIs[0] dst
     /* 4233 */   // No operand predicates
     /* 4233 */   // MIs[0] src0
     /* 4233 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 4237 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 4241 */   // MIs[1] cst
     /* 4241 */   // No operand predicates
     /* 4241 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 4243 */   // Combiner Rule #12: constant_fold_fneg
     /* 4243 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner4),
     /* 4246 */ // Label 274: @4246
     /* 4246 */ GIM_Try, /*On fail goto*//*Label 275*/ GIMT_Encode4(4275), // Rule ID 136 //
     /* 4251 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule78Enabled),
     /* 4254 */   // MIs[0] dst
     /* 4254 */   // No operand predicates
     /* 4254 */   // MIs[0] t
     /* 4254 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 4258 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FNEG),
     /* 4262 */   // MIs[1] src
     /* 4262 */   // No operand predicates
     /* 4262 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
     /* 4267 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 4269 */   // Combiner Rule #78: fneg_fneg_fold
     /* 4269 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
     /* 4274 */   GIR_EraseRootFromParent_Done,
     /* 4275 */ // Label 275: @4275
     /* 4275 */ GIM_Reject,
     /* 4276 */ // Label 61: @4276
     /* 4276 */ GIM_Try, /*On fail goto*//*Label 276*/ GIMT_Encode4(4297), // Rule ID 17 //
     /* 4281 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule17Enabled),
     /* 4284 */   // MIs[0] dst
     /* 4284 */   // No operand predicates
     /* 4284 */   // MIs[0] src0
     /* 4284 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 4288 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 4292 */   // MIs[1] cst
     /* 4292 */   // No operand predicates
     /* 4292 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 4294 */   // Combiner Rule #17: constant_fold_fpext
     /* 4294 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner4),
     /* 4297 */ // Label 276: @4297
     /* 4297 */ GIM_Reject,
     /* 4298 */ // Label 62: @4298
     /* 4298 */ GIM_Try, /*On fail goto*//*Label 277*/ GIMT_Encode4(4319), // Rule ID 16 //
     /* 4303 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule16Enabled),
     /* 4306 */   // MIs[0] dst
     /* 4306 */   // No operand predicates
     /* 4306 */   // MIs[0] src0
     /* 4306 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 4310 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 4314 */   // MIs[1] cst
     /* 4314 */   // No operand predicates
     /* 4314 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 4316 */   // Combiner Rule #16: constant_fold_fptrunc
     /* 4316 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner4),
     /* 4319 */ // Label 277: @4319
     /* 4319 */ GIM_Try, /*On fail goto*//*Label 278*/ GIMT_Encode4(4340), // Rule ID 147 //
     /* 4324 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule87Enabled),
     /* 4327 */   // MIs[0] dst
     /* 4327 */   // No operand predicates
     /* 4327 */   // MIs[0] src1
     /* 4327 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 4331 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FPEXT),
     /* 4335 */   // MIs[1] src0
     /* 4335 */   // No operand predicates
     /* 4335 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 4337 */   // Combiner Rule #87: fptrunc_fpext_fold
     /* 4337 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner51),
     /* 4340 */ // Label 278: @4340
     /* 4340 */ GIM_Reject,
     /* 4341 */ // Label 63: @4341
     /* 4341 */ GIM_Try, /*On fail goto*//*Label 279*/ GIMT_Encode4(4362), // Rule ID 171 //
     /* 4346 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule100Enabled),
     /* 4349 */   // MIs[0] dst
     /* 4349 */   // No operand predicates
     /* 4349 */   // MIs[0] __unary_undef_to_undef_match_0.x
     /* 4349 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 4353 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
     /* 4357 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 4359 */   // Combiner Rule #100: unary_undef_to_undef @ [__unary_undef_to_undef_match_0[5]]
     /* 4359 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner60),
     /* 4362 */ // Label 279: @4362
     /* 4362 */ GIM_Reject,
     /* 4363 */ // Label 64: @4363
     /* 4363 */ GIM_Try, /*On fail goto*//*Label 280*/ GIMT_Encode4(4384), // Rule ID 172 //
     /* 4368 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule100Enabled),
     /* 4371 */   // MIs[0] dst
     /* 4371 */   // No operand predicates
     /* 4371 */   // MIs[0] __unary_undef_to_undef_match_0.x
     /* 4371 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 4375 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
     /* 4379 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 4381 */   // Combiner Rule #100: unary_undef_to_undef @ [__unary_undef_to_undef_match_0[6]]
     /* 4381 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner60),
     /* 4384 */ // Label 280: @4384
     /* 4384 */ GIM_Reject,
     /* 4385 */ // Label 65: @4385
     /* 4385 */ GIM_Try, /*On fail goto*//*Label 281*/ GIMT_Encode4(4396), // Rule ID 155 //
     /* 4390 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule94Enabled),
     /* 4393 */   // Combiner Rule #94: undef_to_fp_zero; wip_match_opcode 'G_SITOFP'
     /* 4393 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner55),
     /* 4396 */ // Label 281: @4396
     /* 4396 */ GIM_Try, /*On fail goto*//*Label 282*/ GIMT_Encode4(4411), // Rule ID 25 //
     /* 4401 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule25Enabled),
     /* 4404 */   // MIs[0] dst
     /* 4404 */   // No operand predicates
     /* 4404 */   // MIs[0] Operand 1
     /* 4404 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/1, 0,
     /* 4408 */   // Combiner Rule #25: itof_const_zero_fold_si
     /* 4408 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner5),
     /* 4411 */ // Label 282: @4411
     /* 4411 */ GIM_Reject,
     /* 4412 */ // Label 66: @4412
     /* 4412 */ GIM_Try, /*On fail goto*//*Label 283*/ GIMT_Encode4(4423), // Rule ID 154 //
     /* 4417 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule94Enabled),
     /* 4420 */   // Combiner Rule #94: undef_to_fp_zero; wip_match_opcode 'G_UITOFP'
     /* 4420 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner55),
     /* 4423 */ // Label 283: @4423
     /* 4423 */ GIM_Try, /*On fail goto*//*Label 284*/ GIMT_Encode4(4438), // Rule ID 26 //
     /* 4428 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule26Enabled),
     /* 4431 */   // MIs[0] dst
     /* 4431 */   // No operand predicates
     /* 4431 */   // MIs[0] Operand 1
     /* 4431 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/1, 0,
     /* 4435 */   // Combiner Rule #26: itof_const_zero_fold_ui
     /* 4435 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner5),
     /* 4438 */ // Label 284: @4438
     /* 4438 */ GIM_Reject,
     /* 4439 */ // Label 67: @4439
     /* 4439 */ GIM_Try, /*On fail goto*//*Label 285*/ GIMT_Encode4(4460), // Rule ID 13 //
     /* 4444 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule13Enabled),
     /* 4447 */   // MIs[0] dst
     /* 4447 */   // No operand predicates
     /* 4447 */   // MIs[0] src0
     /* 4447 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 4451 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 4455 */   // MIs[1] cst
     /* 4455 */   // No operand predicates
     /* 4455 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 4457 */   // Combiner Rule #13: constant_fold_fabs
     /* 4457 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner4),
     /* 4460 */ // Label 285: @4460
     /* 4460 */ GIM_Reject,
     /* 4461 */ // Label 68: @4461
     /* 4461 */ GIM_Try, /*On fail goto*//*Label 286*/ GIMT_Encode4(4472), // Rule ID 102 //
     /* 4466 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule68Enabled),
     /* 4469 */   // MIs[0] d
     /* 4469 */   // No operand predicates
     /* 4469 */   // MIs[0] mi.src0
     /* 4469 */   // No operand predicates
     /* 4469 */   // MIs[0] mi.src1
     /* 4469 */   // No operand predicates
     /* 4469 */   // Combiner Rule #68: constant_fold_fp_binop @ [mi[5]]
     /* 4469 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner43),
     /* 4472 */ // Label 286: @4472
     /* 4472 */ GIM_Reject,
     /* 4473 */ // Label 69: @4473
     /* 4473 */ GIM_Try, /*On fail goto*//*Label 287*/ GIMT_Encode4(4484), // Rule ID 209 //
     /* 4478 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule111Enabled),
     /* 4481 */   // Combiner Rule #111: commute_fp_constant_to_rhs; wip_match_opcode 'G_FMINNUM'
     /* 4481 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner71),
     /* 4484 */ // Label 287: @4484
     /* 4484 */ GIM_Try, /*On fail goto*//*Label 288*/ GIMT_Encode4(4495), // Rule ID 103 //
     /* 4489 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule68Enabled),
     /* 4492 */   // MIs[0] d
     /* 4492 */   // No operand predicates
     /* 4492 */   // MIs[0] mi.src0
     /* 4492 */   // No operand predicates
     /* 4492 */   // MIs[0] mi.src1
     /* 4492 */   // No operand predicates
     /* 4492 */   // Combiner Rule #68: constant_fold_fp_binop @ [mi[6]]
     /* 4492 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner43),
     /* 4495 */ // Label 288: @4495
     /* 4495 */ GIM_Reject,
     /* 4496 */ // Label 70: @4496
     /* 4496 */ GIM_Try, /*On fail goto*//*Label 289*/ GIMT_Encode4(4507), // Rule ID 210 //
     /* 4501 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule111Enabled),
     /* 4504 */   // Combiner Rule #111: commute_fp_constant_to_rhs; wip_match_opcode 'G_FMAXNUM'
     /* 4504 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner71),
     /* 4507 */ // Label 289: @4507
     /* 4507 */ GIM_Try, /*On fail goto*//*Label 290*/ GIMT_Encode4(4518), // Rule ID 104 //
     /* 4512 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule68Enabled),
     /* 4515 */   // MIs[0] d
     /* 4515 */   // No operand predicates
     /* 4515 */   // MIs[0] mi.src0
     /* 4515 */   // No operand predicates
     /* 4515 */   // MIs[0] mi.src1
     /* 4515 */   // No operand predicates
     /* 4515 */   // Combiner Rule #68: constant_fold_fp_binop @ [mi[7]]
     /* 4515 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner43),
     /* 4518 */ // Label 290: @4518
     /* 4518 */ GIM_Reject,
     /* 4519 */ // Label 71: @4519
     /* 4519 */ GIM_Try, /*On fail goto*//*Label 291*/ GIMT_Encode4(4530), // Rule ID 211 //
     /* 4524 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule111Enabled),
     /* 4527 */   // Combiner Rule #111: commute_fp_constant_to_rhs; wip_match_opcode 'G_FMINNUM_IEEE'
     /* 4527 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner71),
     /* 4530 */ // Label 291: @4530
     /* 4530 */ GIM_Reject,
     /* 4531 */ // Label 72: @4531
     /* 4531 */ GIM_Try, /*On fail goto*//*Label 292*/ GIMT_Encode4(4542), // Rule ID 212 //
     /* 4536 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule111Enabled),
     /* 4539 */   // Combiner Rule #111: commute_fp_constant_to_rhs; wip_match_opcode 'G_FMAXNUM_IEEE'
     /* 4539 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner71),
     /* 4542 */ // Label 292: @4542
     /* 4542 */ GIM_Reject,
     /* 4543 */ // Label 73: @4543
     /* 4543 */ GIM_Try, /*On fail goto*//*Label 293*/ GIMT_Encode4(4554), // Rule ID 213 //
     /* 4548 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule111Enabled),
     /* 4551 */   // Combiner Rule #111: commute_fp_constant_to_rhs; wip_match_opcode 'G_FMINIMUM'
     /* 4551 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner71),
     /* 4554 */ // Label 293: @4554
     /* 4554 */ GIM_Try, /*On fail goto*//*Label 294*/ GIMT_Encode4(4565), // Rule ID 105 //
     /* 4559 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule68Enabled),
     /* 4562 */   // MIs[0] d
     /* 4562 */   // No operand predicates
     /* 4562 */   // MIs[0] mi.src0
     /* 4562 */   // No operand predicates
     /* 4562 */   // MIs[0] mi.src1
     /* 4562 */   // No operand predicates
     /* 4562 */   // Combiner Rule #68: constant_fold_fp_binop @ [mi[8]]
     /* 4562 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner43),
     /* 4565 */ // Label 294: @4565
     /* 4565 */ GIM_Reject,
     /* 4566 */ // Label 74: @4566
     /* 4566 */ GIM_Try, /*On fail goto*//*Label 295*/ GIMT_Encode4(4577), // Rule ID 214 //
     /* 4571 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule111Enabled),
     /* 4574 */   // Combiner Rule #111: commute_fp_constant_to_rhs; wip_match_opcode 'G_FMAXIMUM'
     /* 4574 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner71),
     /* 4577 */ // Label 295: @4577
     /* 4577 */ GIM_Try, /*On fail goto*//*Label 296*/ GIMT_Encode4(4588), // Rule ID 106 //
     /* 4582 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule68Enabled),
     /* 4585 */   // MIs[0] d
     /* 4585 */   // No operand predicates
     /* 4585 */   // MIs[0] mi.src0
     /* 4585 */   // No operand predicates
     /* 4585 */   // MIs[0] mi.src1
     /* 4585 */   // No operand predicates
     /* 4585 */   // Combiner Rule #68: constant_fold_fp_binop @ [mi[9]]
     /* 4585 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner43),
     /* 4588 */ // Label 296: @4588
     /* 4588 */ GIM_Reject,
     /* 4589 */ // Label 75: @4589
     /* 4589 */ GIM_Try, /*On fail goto*//*Label 297*/ GIMT_Encode4(4600), // Rule ID 107 //
     /* 4594 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule68Enabled),
     /* 4597 */   // MIs[0] d
     /* 4597 */   // No operand predicates
     /* 4597 */   // MIs[0] mi.src0
     /* 4597 */   // No operand predicates
     /* 4597 */   // MIs[0] mi.src1
     /* 4597 */   // No operand predicates
     /* 4597 */   // Combiner Rule #68: constant_fold_fp_binop @ [mi[10]]
     /* 4597 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner43),
     /* 4600 */ // Label 297: @4600
     /* 4600 */ GIM_Reject,
     /* 4601 */ // Label 76: @4601
     /* 4601 */ GIM_Try, /*On fail goto*//*Label 298*/ GIMT_Encode4(4612), // Rule ID 108 //
     /* 4606 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule68Enabled),
     /* 4609 */   // MIs[0] d
     /* 4609 */   // No operand predicates
     /* 4609 */   // MIs[0] mi.src0
     /* 4609 */   // No operand predicates
     /* 4609 */   // MIs[0] mi.src1
     /* 4609 */   // No operand predicates
     /* 4609 */   // Combiner Rule #68: constant_fold_fp_binop @ [mi[11]]
     /* 4609 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner43),
     /* 4612 */ // Label 298: @4612
     /* 4612 */ GIM_Reject,
     /* 4613 */ // Label 77: @4613
     /* 4613 */ GIM_Try, /*On fail goto*//*Label 299*/ GIMT_Encode4(4624), // Rule ID 80 //
     /* 4618 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule67Enabled),
     /* 4621 */   // Combiner Rule #67: constant_fold_binop; wip_match_opcode 'G_PTR_ADD'
     /* 4621 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner42),
     /* 4624 */ // Label 299: @4624
     /* 4624 */ GIM_Try, /*On fail goto*//*Label 300*/ GIMT_Encode4(4635), // Rule ID 151 //
     /* 4629 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule91Enabled),
     /* 4632 */   // Combiner Rule #91: ptr_add_immed_chain; wip_match_opcode 'G_PTR_ADD'
     /* 4632 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner52),
     /* 4635 */ // Label 300: @4635
     /* 4635 */ GIM_Try, /*On fail goto*//*Label 301*/ GIMT_Encode4(4658), // Rule ID 117 //
     /* 4640 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule70Enabled),
     /* 4643 */   // MIs[0] dst
     /* 4643 */   // No operand predicates
     /* 4643 */   // MIs[0] lhs
     /* 4643 */   // No operand predicates
     /* 4643 */   // MIs[0] Operand 2
     /* 4643 */   GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
     /* 4647 */   GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 4652 */   // Combiner Rule #70: right_identity_zero @ [__right_identity_zero_match_0[7]]
     /* 4652 */   GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
     /* 4657 */   GIR_EraseRootFromParent_Done,
     /* 4658 */ // Label 301: @4658
     /* 4658 */ GIM_Reject,
     /* 4659 */ // Label 78: @4659
     /* 4659 */ GIM_Try, /*On fail goto*//*Label 302*/ GIMT_Encode4(4670), // Rule ID 93 //
     /* 4664 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule67Enabled),
     /* 4667 */   // Combiner Rule #67: constant_fold_binop; wip_match_opcode 'G_SMIN'
     /* 4667 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner42),
     /* 4670 */ // Label 302: @4670
     /* 4670 */ GIM_Try, /*On fail goto*//*Label 303*/ GIMT_Encode4(4681), // Rule ID 191 //
     /* 4675 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule110Enabled),
     /* 4678 */   // Combiner Rule #110: commute_int_constant_to_rhs; wip_match_opcode 'G_SMIN'
     /* 4678 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner70),
     /* 4681 */ // Label 303: @4681
     /* 4681 */ GIM_Reject,
     /* 4682 */ // Label 79: @4682
     /* 4682 */ GIM_Try, /*On fail goto*//*Label 304*/ GIMT_Encode4(4693), // Rule ID 94 //
     /* 4687 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule67Enabled),
     /* 4690 */   // Combiner Rule #67: constant_fold_binop; wip_match_opcode 'G_SMAX'
     /* 4690 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner42),
     /* 4693 */ // Label 304: @4693
     /* 4693 */ GIM_Try, /*On fail goto*//*Label 305*/ GIMT_Encode4(4704), // Rule ID 192 //
     /* 4698 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule110Enabled),
     /* 4701 */   // Combiner Rule #110: commute_int_constant_to_rhs; wip_match_opcode 'G_SMAX'
     /* 4701 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner70),
     /* 4704 */ // Label 305: @4704
     /* 4704 */ GIM_Reject,
     /* 4705 */ // Label 80: @4705
     /* 4705 */ GIM_Try, /*On fail goto*//*Label 306*/ GIMT_Encode4(4716), // Rule ID 95 //
     /* 4710 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule67Enabled),
     /* 4713 */   // Combiner Rule #67: constant_fold_binop; wip_match_opcode 'G_UMIN'
     /* 4713 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner42),
     /* 4716 */ // Label 306: @4716
     /* 4716 */ GIM_Try, /*On fail goto*//*Label 307*/ GIMT_Encode4(4727), // Rule ID 193 //
     /* 4721 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule110Enabled),
     /* 4724 */   // Combiner Rule #110: commute_int_constant_to_rhs; wip_match_opcode 'G_UMIN'
     /* 4724 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner70),
     /* 4727 */ // Label 307: @4727
     /* 4727 */ GIM_Reject,
     /* 4728 */ // Label 81: @4728
     /* 4728 */ GIM_Try, /*On fail goto*//*Label 308*/ GIMT_Encode4(4739), // Rule ID 96 //
     /* 4733 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule67Enabled),
     /* 4736 */   // Combiner Rule #67: constant_fold_binop; wip_match_opcode 'G_UMAX'
     /* 4736 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner42),
     /* 4739 */ // Label 308: @4739
     /* 4739 */ GIM_Try, /*On fail goto*//*Label 309*/ GIMT_Encode4(4750), // Rule ID 194 //
     /* 4744 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule110Enabled),
     /* 4747 */   // Combiner Rule #110: commute_int_constant_to_rhs; wip_match_opcode 'G_UMAX'
     /* 4747 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner70),
     /* 4750 */ // Label 309: @4750
     /* 4750 */ GIM_Reject,
     /* 4751 */ // Label 82: @4751
     /* 4751 */ GIM_Try, /*On fail goto*//*Label 310*/ GIMT_Encode4(4762), // Rule ID 165 //
     /* 4756 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule99Enabled),
     /* 4759 */   // Combiner Rule #99: unary_undef_to_zero; wip_match_opcode 'G_ABS'
     /* 4759 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner58),
     /* 4762 */ // Label 310: @4762
     /* 4762 */ GIM_Reject,
     /* 4763 */ // Label 83: @4763
     /* 4763 */ GIM_Try, /*On fail goto*//*Label 311*/ GIMT_Encode4(4774), // Rule ID 180 //
     /* 4768 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule105Enabled),
     /* 4771 */   // Combiner Rule #105: insert_extract_vec_elt_out_of_bounds; wip_match_opcode 'G_INSERT_VECTOR_ELT'
     /* 4771 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner65),
     /* 4774 */ // Label 311: @4774
     /* 4774 */ GIM_Reject,
     /* 4775 */ // Label 84: @4775
     /* 4775 */ GIM_Try, /*On fail goto*//*Label 312*/ GIMT_Encode4(4786), // Rule ID 44 //
     /* 4780 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule37Enabled),
     /* 4783 */   // Combiner Rule #37: extractvecelt_pairwise_add; wip_match_opcode 'G_EXTRACT_VECTOR_ELT'
     /* 4783 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner16),
     /* 4786 */ // Label 312: @4786
     /* 4786 */ GIM_Try, /*On fail goto*//*Label 313*/ GIMT_Encode4(4797), // Rule ID 181 //
     /* 4791 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule105Enabled),
     /* 4794 */   // Combiner Rule #105: insert_extract_vec_elt_out_of_bounds; wip_match_opcode 'G_EXTRACT_VECTOR_ELT'
     /* 4794 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner65),
     /* 4797 */ // Label 313: @4797
     /* 4797 */ GIM_Try, /*On fail goto*//*Label 314*/ GIMT_Encode4(4808), // Rule ID 215 //
     /* 4802 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule112Enabled),
     /* 4805 */   // Combiner Rule #112: extract_vec_elt_build_vec; wip_match_opcode 'G_EXTRACT_VECTOR_ELT'
     /* 4805 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner72),
     /* 4808 */ // Label 314: @4808
     /* 4808 */ GIM_Reject,
     /* 4809 */ // Label 85: @4809
     /* 4809 */ GIM_Try, /*On fail goto*//*Label 315*/ GIMT_Encode4(4820), // Rule ID 176 //
     /* 4814 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule102Enabled),
     /* 4817 */   // Combiner Rule #102: propagate_undef_all_ops; wip_match_opcode 'G_SHUFFLE_VECTOR'
     /* 4817 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner62),
     /* 4820 */ // Label 315: @4820
     /* 4820 */ GIM_Try, /*On fail goto*//*Label 316*/ GIMT_Encode4(4831), // Rule ID 178 //
     /* 4825 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule103Enabled),
     /* 4828 */   // Combiner Rule #103: propagate_undef_shuffle_mask; wip_match_opcode 'G_SHUFFLE_VECTOR'
     /* 4828 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner63),
     /* 4831 */ // Label 316: @4831
     /* 4831 */ GIM_Reject,
     /* 4832 */ // Label 86: @4832
     /* 4832 */ GIM_Try, /*On fail goto*//*Label 317*/ GIMT_Encode4(4853), // Rule ID 18 //
     /* 4837 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule18Enabled),
     /* 4840 */   // MIs[0] dst
     /* 4840 */   // No operand predicates
     /* 4840 */   // MIs[0] src0
     /* 4840 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 4844 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 4848 */   // MIs[1] cst
     /* 4848 */   // No operand predicates
     /* 4848 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 4850 */   // Combiner Rule #18: constant_fold_fceil
     /* 4850 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner4),
     /* 4853 */ // Label 317: @4853
     /* 4853 */ GIM_Reject,
     /* 4854 */ // Label 87: @4854
     /* 4854 */ GIM_Try, /*On fail goto*//*Label 318*/ GIMT_Encode4(4875), // Rule ID 14 //
     /* 4859 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule14Enabled),
     /* 4862 */   // MIs[0] dst
     /* 4862 */   // No operand predicates
     /* 4862 */   // MIs[0] src0
     /* 4862 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 4866 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 4870 */   // MIs[1] cst
     /* 4870 */   // No operand predicates
     /* 4870 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 4872 */   // Combiner Rule #14: constant_fold_fsqrt
     /* 4872 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner4),
     /* 4875 */ // Label 318: @4875
     /* 4875 */ GIM_Reject,
     /* 4876 */ // Label 88: @4876
     /* 4876 */ GIM_Try, /*On fail goto*//*Label 319*/ GIMT_Encode4(4897), // Rule ID 19 //
     /* 4881 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule19Enabled),
     /* 4884 */   // MIs[0] dst
     /* 4884 */   // No operand predicates
     /* 4884 */   // MIs[0] src0
     /* 4884 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 4888 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 4892 */   // MIs[1] cst
     /* 4892 */   // No operand predicates
     /* 4892 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 4894 */   // Combiner Rule #19: constant_fold_ffloor
     /* 4894 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner4),
     /* 4897 */ // Label 319: @4897
     /* 4897 */ GIM_Reject,
     /* 4898 */ // Label 89: @4898
     /* 4898 */ GIM_Try, /*On fail goto*//*Label 320*/ GIMT_Encode4(4919), // Rule ID 23 //
     /* 4903 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule23Enabled),
     /* 4906 */   // MIs[0] dst
     /* 4906 */   // No operand predicates
     /* 4906 */   // MIs[0] src0
     /* 4906 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 4910 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 4914 */   // MIs[1] cst
     /* 4914 */   // No operand predicates
     /* 4914 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 4916 */   // Combiner Rule #23: constant_fold_frint
     /* 4916 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner4),
     /* 4919 */ // Label 320: @4919
     /* 4919 */ GIM_Reject,
     /* 4920 */ // Label 90: @4920
     /* 4920 */ GIM_Try, /*On fail goto*//*Label 321*/ GIMT_Encode4(4941), // Rule ID 24 //
     /* 4925 */   GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule24Enabled),
     /* 4928 */   // MIs[0] dst
     /* 4928 */   // No operand predicates
     /* 4928 */   // MIs[0] src0
     /* 4928 */   GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
     /* 4932 */   GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
     /* 4936 */   // MIs[1] cst
     /* 4936 */   // No operand predicates
     /* 4936 */   GIM_CheckIsSafeToFold, /*NumInsns*/1,
     /* 4938 */   // Combiner Rule #24: constant_fold_fnearbyint
     /* 4938 */   GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner4),
     /* 4941 */ // Label 321: @4941
     /* 4941 */ GIM_Reject,
     /* 4942 */ // Label 91: @4942
     /* 4942 */ GIM_Reject,
     /* 4943 */ }; // Size: 4943 bytes
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

