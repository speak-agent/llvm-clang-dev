/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Register Bank Source Fragments                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_REGBANK_DECLARATIONS
#undef GET_REGBANK_DECLARATIONS

namespace llvm::AArch64 {

enum : unsigned {
  InvalidRegBankID = ~0u,
  CCRegBankID = 0,
  FPRRegBankID = 1,
  GPRRegBankID = 2,
  NumRegisterBanks,
};

} // namespace llvm::AArch64

#endif // GET_REGBANK_DECLARATIONS

#ifdef GET_TARGET_REGBANK_CLASS
#undef GET_TARGET_REGBANK_CLASS

private:
  static const RegisterBank *RegBanks[];
  static const unsigned Sizes[];

public:
  const RegisterBank &getRegBankFromRegClass(const TargetRegisterClass &RC, LLT Ty) const override;
protected:
  AArch64GenRegisterBankInfo(unsigned HwMode = 0);


#endif // GET_TARGET_REGBANK_CLASS

#ifdef GET_TARGET_REGBANK_IMPL
#undef GET_TARGET_REGBANK_IMPL

namespace llvm {

namespace AArch64 {

const uint32_t CCRegBankCoverageData[] = {
    // 0-31
    0,
    // 32-63
    (1u << (AArch64::CCRRegClassID - 32)) |
    0,
    // 64-95
    0,
    // 96-127
    0,
    // 128-159
    0,
    // 160-191
    0,
    // 192-223
    0,
    // 224-255
    0,
    // 256-287
    0,
    // 288-319
    0,
    // 320-351
    0,
    // 352-383
    0,
    // 384-415
    0,
    // 416-447
    0,
    // 448-479
    0,
    // 480-511
    0,
    // 512-543
    0,
};
const uint32_t FPRRegBankCoverageData[] = {
    // 0-31
    (1u << (AArch64::FPR8RegClassID - 0)) |
    (1u << (AArch64::FPR16RegClassID - 0)) |
    (1u << (AArch64::FPR16_loRegClassID - 0)) |
    0,
    // 32-63
    (1u << (AArch64::FPR32RegClassID - 32)) |
    (1u << (AArch64::FPR64RegClassID - 32)) |
    (1u << (AArch64::FPR32_with_hsub_in_FPR16_loRegClassID - 32)) |
    0,
    // 64-95
    (1u << (AArch64::DDRegClassID - 64)) |
    (1u << (AArch64::FPR128RegClassID - 64)) |
    (1u << (AArch64::FPR64_loRegClassID - 64)) |
    (1u << (AArch64::DD_with_dsub0_in_FPR64_loRegClassID - 64)) |
    (1u << (AArch64::DD_with_dsub1_in_FPR64_loRegClassID - 64)) |
    (1u << (AArch64::FPR128_loRegClassID - 64)) |
    (1u << (AArch64::DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_loRegClassID - 64)) |
    (1u << (AArch64::ZPRRegClassID - 64)) |
    (1u << (AArch64::ZPRMul2RegClassID - 64)) |
    0,
    // 96-127
    (1u << (AArch64::DDDRegClassID - 96)) |
    (1u << (AArch64::DDDDRegClassID - 96)) |
    (1u << (AArch64::QQRegClassID - 96)) |
    (1u << (AArch64::DDD_with_dsub0_in_FPR64_loRegClassID - 96)) |
    (1u << (AArch64::DDD_with_dsub1_in_FPR64_loRegClassID - 96)) |
    (1u << (AArch64::DDDD_with_dsub1_in_FPR64_loRegClassID - 96)) |
    (1u << (AArch64::DDD_with_dsub2_in_FPR64_loRegClassID - 96)) |
    (1u << (AArch64::DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_loRegClassID - 96)) |
    (1u << (AArch64::DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loRegClassID - 96)) |
    (1u << (AArch64::DDDD_with_dsub2_in_FPR64_loRegClassID - 96)) |
    (1u << (AArch64::DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loRegClassID - 96)) |
    (1u << (AArch64::DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loRegClassID - 96)) |
    (1u << (AArch64::DDDD_with_dsub3_in_FPR64_loRegClassID - 96)) |
    (1u << (AArch64::DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loRegClassID - 96)) |
    (1u << (AArch64::DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loRegClassID - 96)) |
    (1u << (AArch64::DDDD_with_dsub0_in_FPR64_loRegClassID - 96)) |
    (1u << (AArch64::DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_loRegClassID - 96)) |
    (1u << (AArch64::DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loRegClassID - 96)) |
    (1u << (AArch64::DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loRegClassID - 96)) |
    (1u << (AArch64::FPR128_0to7RegClassID - 96)) |
    (1u << (AArch64::ZPRMul2_HiRegClassID - 96)) |
    (1u << (AArch64::ZPRMul2_Hi_and_ZPRMul4RegClassID - 96)) |
    (1u << (AArch64::ZPRMul4_and_ZPR_KRegClassID - 96)) |
    (1u << (AArch64::ZPRMul2_and_ZPR_KRegClassID - 96)) |
    (1u << (AArch64::ZPRMul2_LoRegClassID - 96)) |
    (1u << (AArch64::ZPRMul2_Lo_and_ZPRMul4RegClassID - 96)) |
    (1u << (AArch64::ZPRMul4_and_ZPR_3bRegClassID - 96)) |
    (1u << (AArch64::ZPRMul2_and_ZPR_3bRegClassID - 96)) |
    (1u << (AArch64::ZPRMul4RegClassID - 96)) |
    (1u << (AArch64::ZPR_4bRegClassID - 96)) |
    (1u << (AArch64::ZPR_3bRegClassID - 96)) |
    (1u << (AArch64::ZPR_KRegClassID - 96)) |
    0,
    // 128-159
    (1u << (AArch64::QQ_with_dsub1_in_FPR64_loRegClassID - 128)) |
    (1u << (AArch64::QQ_with_qsub0_in_FPR128_loRegClassID - 128)) |
    (1u << (AArch64::QQ_with_qsub0_in_FPR128_lo_and_QQ_with_dsub1_in_FPR64_loRegClassID - 128)) |
    (1u << (AArch64::QQ_with_qsub0_in_FPR128_0to7RegClassID - 128)) |
    (1u << (AArch64::QQ_with_qsub1_in_FPR128_0to7RegClassID - 128)) |
    0,
    // 160-191
    (1u << (AArch64::QQ_with_qsub0_in_FPR128_0to7_and_QQ_with_qsub1_in_FPR128_0to7RegClassID - 160)) |
    0,
    // 192-223
    (1u << (AArch64::QQQRegClassID - 192)) |
    (1u << (AArch64::QQQ_with_dsub1_in_FPR64_loRegClassID - 192)) |
    (1u << (AArch64::QQQ_with_qsub0_in_FPR128_loRegClassID - 192)) |
    (1u << (AArch64::QQQ_with_dsub2_in_FPR64_loRegClassID - 192)) |
    (1u << (AArch64::QQQ_with_dsub1_in_FPR64_lo_and_QQQ_with_dsub2_in_FPR64_loRegClassID - 192)) |
    (1u << (AArch64::QQQ_with_qsub0_in_FPR128_lo_and_QQQ_with_dsub1_in_FPR64_loRegClassID - 192)) |
    (1u << (AArch64::QQQ_with_qsub0_in_FPR128_lo_and_QQQ_with_dsub2_in_FPR64_loRegClassID - 192)) |
    (1u << (AArch64::QQQ_with_qsub0_in_FPR128_0to7RegClassID - 192)) |
    (1u << (AArch64::QQQ_with_qsub1_in_FPR128_0to7RegClassID - 192)) |
    (1u << (AArch64::QQQ_with_qsub2_in_FPR128_0to7RegClassID - 192)) |
    0,
    // 224-255
    (1u << (AArch64::QQQ_with_qsub0_in_FPR128_0to7_and_QQQ_with_qsub1_in_FPR128_0to7RegClassID - 224)) |
    (1u << (AArch64::QQQ_with_dsub1_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_0to7RegClassID - 224)) |
    (1u << (AArch64::QQQ_with_qsub0_in_FPR128_0to7_and_QQQ_with_qsub2_in_FPR128_0to7RegClassID - 224)) |
    0,
    // 256-287
    0,
    // 288-319
    (1u << (AArch64::QQQQRegClassID - 288)) |
    (1u << (AArch64::QQQQ_with_dsub1_in_FPR64_loRegClassID - 288)) |
    (1u << (AArch64::QQQQ_with_dsub1_in_FPR64_lo_and_QQQQ_with_dsub2_in_FPR64_loRegClassID - 288)) |
    (1u << (AArch64::QQQQ_with_dsub1_in_FPR64_lo_and_QQQQ_with_dsub3_in_FPR64_loRegClassID - 288)) |
    (1u << (AArch64::QQQQ_with_qsub0_in_FPR128_lo_and_QQQQ_with_dsub3_in_FPR64_loRegClassID - 288)) |
    (1u << (AArch64::QQQQ_with_qsub0_in_FPR128_lo_and_QQQQ_with_dsub2_in_FPR64_loRegClassID - 288)) |
    (1u << (AArch64::QQQQ_with_qsub0_in_FPR128_lo_and_QQQQ_with_dsub1_in_FPR64_loRegClassID - 288)) |
    (1u << (AArch64::QQQQ_with_dsub2_in_FPR64_loRegClassID - 288)) |
    (1u << (AArch64::QQQQ_with_dsub2_in_FPR64_lo_and_QQQQ_with_dsub3_in_FPR64_loRegClassID - 288)) |
    (1u << (AArch64::QQQQ_with_dsub3_in_FPR64_loRegClassID - 288)) |
    (1u << (AArch64::QQQQ_with_qsub0_in_FPR128_loRegClassID - 288)) |
    0,
    // 320-351
    (1u << (AArch64::QQQQ_with_qsub0_in_FPR128_0to7RegClassID - 320)) |
    (1u << (AArch64::QQQQ_with_qsub1_in_FPR128_0to7RegClassID - 320)) |
    (1u << (AArch64::QQQQ_with_dsub1_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_0to7RegClassID - 320)) |
    (1u << (AArch64::QQQQ_with_qsub2_in_FPR128_0to7RegClassID - 320)) |
    (1u << (AArch64::QQQQ_with_dsub2_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_0to7RegClassID - 320)) |
    (1u << (AArch64::QQQQ_with_qsub3_in_FPR128_0to7RegClassID - 320)) |
    0,
    // 352-383
    (1u << (AArch64::QQQQ_with_qsub0_in_FPR128_0to7_and_QQQQ_with_qsub1_in_FPR128_0to7RegClassID - 352)) |
    (1u << (AArch64::QQQQ_with_qsub0_in_FPR128_0to7_and_QQQQ_with_qsub2_in_FPR128_0to7RegClassID - 352)) |
    (1u << (AArch64::QQQQ_with_qsub0_in_FPR128_0to7_and_QQQQ_with_qsub3_in_FPR128_0to7RegClassID - 352)) |
    (1u << (AArch64::QQQQ_with_dsub1_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_0to7RegClassID - 352)) |
    0,
    // 384-415
    0,
    // 416-447
    0,
    // 448-479
    0,
    // 480-511
    0,
    // 512-543
    0,
};
const uint32_t GPRRegBankCoverageData[] = {
    // 0-31
    0,
    // 32-63
    (1u << (AArch64::GPR32allRegClassID - 32)) |
    (1u << (AArch64::GPR32RegClassID - 32)) |
    (1u << (AArch64::GPR32spRegClassID - 32)) |
    (1u << (AArch64::GPR32commonRegClassID - 32)) |
    (1u << (AArch64::WSeqPairsClassRegClassID - 32)) |
    (1u << (AArch64::GPR64allRegClassID - 32)) |
    (1u << (AArch64::GPR64RegClassID - 32)) |
    (1u << (AArch64::GPR64spRegClassID - 32)) |
    (1u << (AArch64::GPR64commonRegClassID - 32)) |
    (1u << (AArch64::WSeqPairsClass_with_subo32_in_GPR32commonRegClassID - 32)) |
    (1u << (AArch64::GPR64noipRegClassID - 32)) |
    (1u << (AArch64::GPR64common_and_GPR64noipRegClassID - 32)) |
    (1u << (AArch64::tcGPR64RegClassID - 32)) |
    (1u << (AArch64::tcGPRnotx16RegClassID - 32)) |
    (1u << (AArch64::tcGPRnotx16x17RegClassID - 32)) |
    (1u << (AArch64::GPR32argRegClassID - 32)) |
    (1u << (AArch64::WSeqPairsClass_with_sube32_in_GPR32argRegClassID - 32)) |
    (1u << (AArch64::MatrixIndexGPR32_12_15RegClassID - 32)) |
    (1u << (AArch64::WSeqPairsClass_with_sube32_in_MatrixIndexGPR32_12_15RegClassID - 32)) |
    (1u << (AArch64::MatrixIndexGPR32_8_11RegClassID - 32)) |
    (1u << (AArch64::WSeqPairsClass_with_sube32_in_MatrixIndexGPR32_8_11RegClassID - 32)) |
    0,
    // 64-95
    (1u << (AArch64::XSeqPairsClassRegClassID - 64)) |
    (1u << (AArch64::XSeqPairsClass_with_subo64_in_GPR64commonRegClassID - 64)) |
    (1u << (AArch64::XSeqPairsClass_with_sube64_in_GPR64noipRegClassID - 64)) |
    (1u << (AArch64::XSeqPairsClass_with_sube64_in_tcGPRnotx16RegClassID - 64)) |
    (1u << (AArch64::XSeqPairsClass_with_subo64_in_tcGPRnotx16x17RegClassID - 64)) |
    (1u << (AArch64::XSeqPairsClass_with_sube64_in_GPR64argRegClassID - 64)) |
    (1u << (AArch64::GPR64argRegClassID - 64)) |
    (1u << (AArch64::XSeqPairsClass_with_sube64_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15RegClassID - 64)) |
    (1u << (AArch64::GPR64_with_sub_32_in_MatrixIndexGPR32_12_15RegClassID - 64)) |
    (1u << (AArch64::XSeqPairsClass_with_sube64_in_GPR64_with_sub_32_in_MatrixIndexGPR32_8_11RegClassID - 64)) |
    (1u << (AArch64::GPR64_with_sub_32_in_MatrixIndexGPR32_8_11RegClassID - 64)) |
    (1u << (AArch64::XSeqPairsClass_with_subo64_in_FIXED_REGSRegClassID - 64)) |
    (1u << (AArch64::FIXED_REGSRegClassID - 64)) |
    (1u << (AArch64::FIXED_REGS_with_sub_32RegClassID - 64)) |
    (1u << (AArch64::FIXED_REGS_and_GPR64RegClassID - 64)) |
    (1u << (AArch64::XSeqPairsClass_with_sube64_in_tcGPR64RegClassID - 64)) |
    (1u << (AArch64::XSeqPairsClass_with_subo64_in_tcGPR64RegClassID - 64)) |
    (1u << (AArch64::XSeqPairsClass_with_sube64_in_tcGPRx16x17RegClassID - 64)) |
    (1u << (AArch64::tcGPRx16x17RegClassID - 64)) |
    (1u << (AArch64::tcGPRx17RegClassID - 64)) |
    (1u << (AArch64::XSeqPairsClass_with_subo64_in_GPR64noipRegClassID - 64)) |
    0,
    // 96-127
    0,
    // 128-159
    0,
    // 160-191
    0,
    // 192-223
    0,
    // 224-255
    0,
    // 256-287
    0,
    // 288-319
    0,
    // 320-351
    0,
    // 352-383
    0,
    // 384-415
    0,
    // 416-447
    0,
    // 448-479
    0,
    // 480-511
    0,
    // 512-543
    0,
};

constexpr RegisterBank CCRegBank(/* ID */ AArch64::CCRegBankID, /* Name */ "CC", /* CoveredRegClasses */ CCRegBankCoverageData, /* NumRegClasses */ 530);
constexpr RegisterBank FPRRegBank(/* ID */ AArch64::FPRRegBankID, /* Name */ "FPR", /* CoveredRegClasses */ FPRRegBankCoverageData, /* NumRegClasses */ 530);
constexpr RegisterBank GPRRegBank(/* ID */ AArch64::GPRRegBankID, /* Name */ "GPR", /* CoveredRegClasses */ GPRRegBankCoverageData, /* NumRegClasses */ 530);

} // namespace AArch64

const RegisterBank *AArch64GenRegisterBankInfo::RegBanks[] = {
    &AArch64::CCRegBank,
    &AArch64::FPRRegBank,
    &AArch64::GPRRegBank,
};

const unsigned AArch64GenRegisterBankInfo::Sizes[] = {
    // Mode = 0 (DefaultMode)
    32,
    512,
    128,
};

AArch64GenRegisterBankInfo::AArch64GenRegisterBankInfo(unsigned HwMode)
    : RegisterBankInfo(RegBanks, AArch64::NumRegisterBanks, Sizes, HwMode) {
  // Assert that RegBank indices match their ID's
#ifndef NDEBUG
  for (auto RB : enumerate(RegBanks))
    assert(RB.index() == RB.value()->getID() && "Index != ID");
#endif // NDEBUG
}

const RegisterBank &
AArch64GenRegisterBankInfo::getRegBankFromRegClass(const TargetRegisterClass &RC, LLT) const {
  constexpr uint32_t InvalidRegBankID = uint32_t(AArch64::InvalidRegBankID) & 3;
  static const uint32_t RegClass2RegBank[24] = {
    (uint32_t(InvalidRegBankID) << 0) |
    (uint32_t(InvalidRegBankID) << 2) |
    (uint32_t(InvalidRegBankID) << 4) |
    (uint32_t(InvalidRegBankID) << 6) |
    (uint32_t(InvalidRegBankID) << 8) |
    (uint32_t(InvalidRegBankID) << 10) |
    (uint32_t(AArch64::FPRRegBankID) << 12) | // FPR8RegClassID
    (uint32_t(AArch64::FPRRegBankID) << 14) | // FPR16RegClassID
    (uint32_t(InvalidRegBankID) << 16) |
    (uint32_t(AArch64::FPRRegBankID) << 18) | // FPR16_loRegClassID
    (uint32_t(InvalidRegBankID) << 20) |
    (uint32_t(InvalidRegBankID) << 22) |
    (uint32_t(InvalidRegBankID) << 24) |
    (uint32_t(InvalidRegBankID) << 26) |
    (uint32_t(InvalidRegBankID) << 28) |
    (uint32_t(InvalidRegBankID) << 30),
    (uint32_t(InvalidRegBankID) << 0) |
    (uint32_t(InvalidRegBankID) << 2) |
    (uint32_t(InvalidRegBankID) << 4) |
    (uint32_t(InvalidRegBankID) << 6) |
    (uint32_t(InvalidRegBankID) << 8) |
    (uint32_t(InvalidRegBankID) << 10) |
    (uint32_t(InvalidRegBankID) << 12) |
    (uint32_t(InvalidRegBankID) << 14) |
    (uint32_t(InvalidRegBankID) << 16) |
    (uint32_t(InvalidRegBankID) << 18) |
    (uint32_t(InvalidRegBankID) << 20) |
    (uint32_t(InvalidRegBankID) << 22) |
    (uint32_t(InvalidRegBankID) << 24) |
    (uint32_t(InvalidRegBankID) << 26) |
    (uint32_t(InvalidRegBankID) << 28) |
    (uint32_t(InvalidRegBankID) << 30),
    (uint32_t(InvalidRegBankID) << 0) |
    (uint32_t(InvalidRegBankID) << 2) |
    (uint32_t(InvalidRegBankID) << 4) |
    (uint32_t(InvalidRegBankID) << 6) |
    (uint32_t(InvalidRegBankID) << 8) |
    (uint32_t(InvalidRegBankID) << 10) |
    (uint32_t(AArch64::GPRRegBankID) << 12) | // GPR32allRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 14) | // FPR32RegClassID
    (uint32_t(AArch64::GPRRegBankID) << 16) | // GPR32RegClassID
    (uint32_t(AArch64::GPRRegBankID) << 18) | // GPR32spRegClassID
    (uint32_t(AArch64::GPRRegBankID) << 20) | // GPR32commonRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 22) | // FPR32_with_hsub_in_FPR16_loRegClassID
    (uint32_t(AArch64::GPRRegBankID) << 24) | // GPR32argRegClassID
    (uint32_t(AArch64::GPRRegBankID) << 26) | // MatrixIndexGPR32_12_15RegClassID
    (uint32_t(AArch64::GPRRegBankID) << 28) | // MatrixIndexGPR32_8_11RegClassID
    (uint32_t(AArch64::CCRegBankID) << 30), // CCRRegClassID
    (uint32_t(InvalidRegBankID) << 0) |
    (uint32_t(AArch64::GPRRegBankID) << 2) | // WSeqPairsClassRegClassID
    (uint32_t(AArch64::GPRRegBankID) << 4) | // WSeqPairsClass_with_subo32_in_GPR32commonRegClassID
    (uint32_t(AArch64::GPRRegBankID) << 6) | // WSeqPairsClass_with_sube32_in_GPR32argRegClassID
    (uint32_t(AArch64::GPRRegBankID) << 8) | // WSeqPairsClass_with_sube32_in_MatrixIndexGPR32_12_15RegClassID
    (uint32_t(AArch64::GPRRegBankID) << 10) | // WSeqPairsClass_with_sube32_in_MatrixIndexGPR32_8_11RegClassID
    (uint32_t(AArch64::GPRRegBankID) << 12) | // GPR64allRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 14) | // FPR64RegClassID
    (uint32_t(AArch64::GPRRegBankID) << 16) | // GPR64RegClassID
    (uint32_t(AArch64::GPRRegBankID) << 18) | // GPR64spRegClassID
    (uint32_t(AArch64::GPRRegBankID) << 20) | // GPR64commonRegClassID
    (uint32_t(AArch64::GPRRegBankID) << 22) | // GPR64noipRegClassID
    (uint32_t(AArch64::GPRRegBankID) << 24) | // GPR64common_and_GPR64noipRegClassID
    (uint32_t(AArch64::GPRRegBankID) << 26) | // tcGPR64RegClassID
    (uint32_t(AArch64::GPRRegBankID) << 28) | // tcGPRnotx16RegClassID
    (uint32_t(AArch64::GPRRegBankID) << 30), // tcGPRnotx16x17RegClassID
    (uint32_t(AArch64::FPRRegBankID) << 0) | // FPR64_loRegClassID
    (uint32_t(AArch64::GPRRegBankID) << 2) | // GPR64argRegClassID
    (uint32_t(AArch64::GPRRegBankID) << 4) | // FIXED_REGSRegClassID
    (uint32_t(AArch64::GPRRegBankID) << 6) | // GPR64_with_sub_32_in_MatrixIndexGPR32_12_15RegClassID
    (uint32_t(AArch64::GPRRegBankID) << 8) | // GPR64_with_sub_32_in_MatrixIndexGPR32_8_11RegClassID
    (uint32_t(AArch64::GPRRegBankID) << 10) | // FIXED_REGS_with_sub_32RegClassID
    (uint32_t(AArch64::GPRRegBankID) << 12) | // tcGPRx16x17RegClassID
    (uint32_t(AArch64::GPRRegBankID) << 14) | // FIXED_REGS_and_GPR64RegClassID
    (uint32_t(InvalidRegBankID) << 16) |
    (uint32_t(AArch64::GPRRegBankID) << 18) | // tcGPRx17RegClassID
    (uint32_t(AArch64::FPRRegBankID) << 20) | // DDRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 22) | // DD_with_dsub0_in_FPR64_loRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 24) | // DD_with_dsub1_in_FPR64_loRegClassID
    (uint32_t(AArch64::GPRRegBankID) << 26) | // XSeqPairsClassRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 28) | // DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_loRegClassID
    (uint32_t(AArch64::GPRRegBankID) << 30), // XSeqPairsClass_with_subo64_in_GPR64commonRegClassID
    (uint32_t(AArch64::GPRRegBankID) << 0) | // XSeqPairsClass_with_subo64_in_GPR64noipRegClassID
    (uint32_t(AArch64::GPRRegBankID) << 2) | // XSeqPairsClass_with_sube64_in_GPR64noipRegClassID
    (uint32_t(AArch64::GPRRegBankID) << 4) | // XSeqPairsClass_with_sube64_in_tcGPR64RegClassID
    (uint32_t(AArch64::GPRRegBankID) << 6) | // XSeqPairsClass_with_sube64_in_tcGPRnotx16RegClassID
    (uint32_t(AArch64::GPRRegBankID) << 8) | // XSeqPairsClass_with_subo64_in_tcGPR64RegClassID
    (uint32_t(AArch64::GPRRegBankID) << 10) | // XSeqPairsClass_with_subo64_in_tcGPRnotx16x17RegClassID
    (uint32_t(AArch64::GPRRegBankID) << 12) | // XSeqPairsClass_with_sube64_in_GPR64argRegClassID
    (uint32_t(AArch64::GPRRegBankID) << 14) | // XSeqPairsClass_with_sube64_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15RegClassID
    (uint32_t(AArch64::GPRRegBankID) << 16) | // XSeqPairsClass_with_sube64_in_GPR64_with_sub_32_in_MatrixIndexGPR32_8_11RegClassID
    (uint32_t(AArch64::GPRRegBankID) << 18) | // XSeqPairsClass_with_sube64_in_tcGPRx16x17RegClassID
    (uint32_t(AArch64::GPRRegBankID) << 20) | // XSeqPairsClass_with_subo64_in_FIXED_REGSRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 22) | // FPR128RegClassID
    (uint32_t(AArch64::FPRRegBankID) << 24) | // ZPRRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 26) | // FPR128_loRegClassID
    (uint32_t(InvalidRegBankID) << 28) |
    (uint32_t(AArch64::FPRRegBankID) << 30), // ZPRMul2RegClassID
    (uint32_t(AArch64::FPRRegBankID) << 0) | // ZPR_4bRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 2) | // FPR128_0to7RegClassID
    (uint32_t(AArch64::FPRRegBankID) << 4) | // ZPRMul2_HiRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 6) | // ZPRMul2_LoRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 8) | // ZPRMul4RegClassID
    (uint32_t(AArch64::FPRRegBankID) << 10) | // ZPR_3bRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 12) | // ZPR_KRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 14) | // ZPRMul2_Hi_and_ZPRMul4RegClassID
    (uint32_t(AArch64::FPRRegBankID) << 16) | // ZPRMul2_Lo_and_ZPRMul4RegClassID
    (uint32_t(AArch64::FPRRegBankID) << 18) | // ZPRMul2_and_ZPR_3bRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 20) | // ZPRMul2_and_ZPR_KRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 22) | // ZPRMul4_and_ZPR_3bRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 24) | // ZPRMul4_and_ZPR_KRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 26) | // DDDRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 28) | // DDD_with_dsub0_in_FPR64_loRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 30), // DDD_with_dsub1_in_FPR64_loRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 0) | // DDD_with_dsub2_in_FPR64_loRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 2) | // DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_loRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 4) | // DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 6) | // DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 8) | // DDDDRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 10) | // DDDD_with_dsub0_in_FPR64_loRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 12) | // DDDD_with_dsub1_in_FPR64_loRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 14) | // DDDD_with_dsub2_in_FPR64_loRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 16) | // DDDD_with_dsub3_in_FPR64_loRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 18) | // DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_loRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 20) | // DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 22) | // DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 24) | // DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 26) | // DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 28) | // DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 30), // QQRegClassID
    (uint32_t(InvalidRegBankID) << 0) |
    (uint32_t(InvalidRegBankID) << 2) |
    (uint32_t(InvalidRegBankID) << 4) |
    (uint32_t(AArch64::FPRRegBankID) << 6) | // QQ_with_dsub1_in_FPR64_loRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 8) | // QQ_with_qsub0_in_FPR128_loRegClassID
    (uint32_t(InvalidRegBankID) << 10) |
    (uint32_t(InvalidRegBankID) << 12) |
    (uint32_t(InvalidRegBankID) << 14) |
    (uint32_t(InvalidRegBankID) << 16) |
    (uint32_t(InvalidRegBankID) << 18) |
    (uint32_t(InvalidRegBankID) << 20) |
    (uint32_t(AArch64::FPRRegBankID) << 22) | // QQ_with_qsub0_in_FPR128_lo_and_QQ_with_dsub1_in_FPR64_loRegClassID
    (uint32_t(InvalidRegBankID) << 24) |
    (uint32_t(InvalidRegBankID) << 26) |
    (uint32_t(InvalidRegBankID) << 28) |
    (uint32_t(InvalidRegBankID) << 30),
    (uint32_t(InvalidRegBankID) << 0) |
    (uint32_t(AArch64::FPRRegBankID) << 2) | // QQ_with_qsub0_in_FPR128_0to7RegClassID
    (uint32_t(AArch64::FPRRegBankID) << 4) | // QQ_with_qsub1_in_FPR128_0to7RegClassID
    (uint32_t(InvalidRegBankID) << 6) |
    (uint32_t(InvalidRegBankID) << 8) |
    (uint32_t(InvalidRegBankID) << 10) |
    (uint32_t(InvalidRegBankID) << 12) |
    (uint32_t(InvalidRegBankID) << 14) |
    (uint32_t(InvalidRegBankID) << 16) |
    (uint32_t(InvalidRegBankID) << 18) |
    (uint32_t(InvalidRegBankID) << 20) |
    (uint32_t(InvalidRegBankID) << 22) |
    (uint32_t(InvalidRegBankID) << 24) |
    (uint32_t(InvalidRegBankID) << 26) |
    (uint32_t(InvalidRegBankID) << 28) |
    (uint32_t(InvalidRegBankID) << 30),
    (uint32_t(InvalidRegBankID) << 0) |
    (uint32_t(InvalidRegBankID) << 2) |
    (uint32_t(AArch64::FPRRegBankID) << 4) | // QQ_with_qsub0_in_FPR128_0to7_and_QQ_with_qsub1_in_FPR128_0to7RegClassID
    (uint32_t(InvalidRegBankID) << 6) |
    (uint32_t(InvalidRegBankID) << 8) |
    (uint32_t(InvalidRegBankID) << 10) |
    (uint32_t(InvalidRegBankID) << 12) |
    (uint32_t(InvalidRegBankID) << 14) |
    (uint32_t(InvalidRegBankID) << 16) |
    (uint32_t(InvalidRegBankID) << 18) |
    (uint32_t(InvalidRegBankID) << 20) |
    (uint32_t(InvalidRegBankID) << 22) |
    (uint32_t(InvalidRegBankID) << 24) |
    (uint32_t(InvalidRegBankID) << 26) |
    (uint32_t(InvalidRegBankID) << 28) |
    (uint32_t(InvalidRegBankID) << 30),
    (uint32_t(InvalidRegBankID) << 0) |
    (uint32_t(InvalidRegBankID) << 2) |
    (uint32_t(InvalidRegBankID) << 4) |
    (uint32_t(InvalidRegBankID) << 6) |
    (uint32_t(InvalidRegBankID) << 8) |
    (uint32_t(InvalidRegBankID) << 10) |
    (uint32_t(InvalidRegBankID) << 12) |
    (uint32_t(InvalidRegBankID) << 14) |
    (uint32_t(InvalidRegBankID) << 16) |
    (uint32_t(InvalidRegBankID) << 18) |
    (uint32_t(InvalidRegBankID) << 20) |
    (uint32_t(InvalidRegBankID) << 22) |
    (uint32_t(InvalidRegBankID) << 24) |
    (uint32_t(InvalidRegBankID) << 26) |
    (uint32_t(InvalidRegBankID) << 28) |
    (uint32_t(InvalidRegBankID) << 30),
    (uint32_t(InvalidRegBankID) << 0) |
    (uint32_t(InvalidRegBankID) << 2) |
    (uint32_t(InvalidRegBankID) << 4) |
    (uint32_t(InvalidRegBankID) << 6) |
    (uint32_t(InvalidRegBankID) << 8) |
    (uint32_t(InvalidRegBankID) << 10) |
    (uint32_t(InvalidRegBankID) << 12) |
    (uint32_t(InvalidRegBankID) << 14) |
    (uint32_t(InvalidRegBankID) << 16) |
    (uint32_t(InvalidRegBankID) << 18) |
    (uint32_t(InvalidRegBankID) << 20) |
    (uint32_t(InvalidRegBankID) << 22) |
    (uint32_t(InvalidRegBankID) << 24) |
    (uint32_t(AArch64::FPRRegBankID) << 26) | // QQQRegClassID
    (uint32_t(InvalidRegBankID) << 28) |
    (uint32_t(AArch64::FPRRegBankID) << 30), // QQQ_with_dsub1_in_FPR64_loRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 0) | // QQQ_with_dsub2_in_FPR64_loRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 2) | // QQQ_with_qsub0_in_FPR128_loRegClassID
    (uint32_t(InvalidRegBankID) << 4) |
    (uint32_t(InvalidRegBankID) << 6) |
    (uint32_t(InvalidRegBankID) << 8) |
    (uint32_t(InvalidRegBankID) << 10) |
    (uint32_t(InvalidRegBankID) << 12) |
    (uint32_t(AArch64::FPRRegBankID) << 14) | // QQQ_with_dsub1_in_FPR64_lo_and_QQQ_with_dsub2_in_FPR64_loRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 16) | // QQQ_with_qsub0_in_FPR128_lo_and_QQQ_with_dsub1_in_FPR64_loRegClassID
    (uint32_t(InvalidRegBankID) << 18) |
    (uint32_t(InvalidRegBankID) << 20) |
    (uint32_t(AArch64::FPRRegBankID) << 22) | // QQQ_with_qsub0_in_FPR128_lo_and_QQQ_with_dsub2_in_FPR64_loRegClassID
    (uint32_t(InvalidRegBankID) << 24) |
    (uint32_t(AArch64::FPRRegBankID) << 26) | // QQQ_with_qsub0_in_FPR128_0to7RegClassID
    (uint32_t(AArch64::FPRRegBankID) << 28) | // QQQ_with_qsub1_in_FPR128_0to7RegClassID
    (uint32_t(AArch64::FPRRegBankID) << 30), // QQQ_with_qsub2_in_FPR128_0to7RegClassID
    (uint32_t(InvalidRegBankID) << 0) |
    (uint32_t(InvalidRegBankID) << 2) |
    (uint32_t(InvalidRegBankID) << 4) |
    (uint32_t(InvalidRegBankID) << 6) |
    (uint32_t(InvalidRegBankID) << 8) |
    (uint32_t(InvalidRegBankID) << 10) |
    (uint32_t(InvalidRegBankID) << 12) |
    (uint32_t(InvalidRegBankID) << 14) |
    (uint32_t(InvalidRegBankID) << 16) |
    (uint32_t(InvalidRegBankID) << 18) |
    (uint32_t(InvalidRegBankID) << 20) |
    (uint32_t(InvalidRegBankID) << 22) |
    (uint32_t(InvalidRegBankID) << 24) |
    (uint32_t(InvalidRegBankID) << 26) |
    (uint32_t(InvalidRegBankID) << 28) |
    (uint32_t(InvalidRegBankID) << 30),
    (uint32_t(AArch64::FPRRegBankID) << 0) | // QQQ_with_dsub1_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_0to7RegClassID
    (uint32_t(AArch64::FPRRegBankID) << 2) | // QQQ_with_qsub0_in_FPR128_0to7_and_QQQ_with_qsub1_in_FPR128_0to7RegClassID
    (uint32_t(InvalidRegBankID) << 4) |
    (uint32_t(InvalidRegBankID) << 6) |
    (uint32_t(InvalidRegBankID) << 8) |
    (uint32_t(InvalidRegBankID) << 10) |
    (uint32_t(InvalidRegBankID) << 12) |
    (uint32_t(AArch64::FPRRegBankID) << 14) | // QQQ_with_qsub0_in_FPR128_0to7_and_QQQ_with_qsub2_in_FPR128_0to7RegClassID
    (uint32_t(InvalidRegBankID) << 16) |
    (uint32_t(InvalidRegBankID) << 18) |
    (uint32_t(InvalidRegBankID) << 20) |
    (uint32_t(InvalidRegBankID) << 22) |
    (uint32_t(InvalidRegBankID) << 24) |
    (uint32_t(InvalidRegBankID) << 26) |
    (uint32_t(InvalidRegBankID) << 28) |
    (uint32_t(InvalidRegBankID) << 30),
    (uint32_t(InvalidRegBankID) << 0) |
    (uint32_t(InvalidRegBankID) << 2) |
    (uint32_t(InvalidRegBankID) << 4) |
    (uint32_t(InvalidRegBankID) << 6) |
    (uint32_t(InvalidRegBankID) << 8) |
    (uint32_t(InvalidRegBankID) << 10) |
    (uint32_t(InvalidRegBankID) << 12) |
    (uint32_t(InvalidRegBankID) << 14) |
    (uint32_t(InvalidRegBankID) << 16) |
    (uint32_t(InvalidRegBankID) << 18) |
    (uint32_t(InvalidRegBankID) << 20) |
    (uint32_t(InvalidRegBankID) << 22) |
    (uint32_t(InvalidRegBankID) << 24) |
    (uint32_t(InvalidRegBankID) << 26) |
    (uint32_t(InvalidRegBankID) << 28) |
    (uint32_t(InvalidRegBankID) << 30),
    (uint32_t(InvalidRegBankID) << 0) |
    (uint32_t(InvalidRegBankID) << 2) |
    (uint32_t(InvalidRegBankID) << 4) |
    (uint32_t(InvalidRegBankID) << 6) |
    (uint32_t(InvalidRegBankID) << 8) |
    (uint32_t(InvalidRegBankID) << 10) |
    (uint32_t(InvalidRegBankID) << 12) |
    (uint32_t(InvalidRegBankID) << 14) |
    (uint32_t(InvalidRegBankID) << 16) |
    (uint32_t(InvalidRegBankID) << 18) |
    (uint32_t(InvalidRegBankID) << 20) |
    (uint32_t(InvalidRegBankID) << 22) |
    (uint32_t(InvalidRegBankID) << 24) |
    (uint32_t(InvalidRegBankID) << 26) |
    (uint32_t(InvalidRegBankID) << 28) |
    (uint32_t(InvalidRegBankID) << 30),
    (uint32_t(InvalidRegBankID) << 0) |
    (uint32_t(InvalidRegBankID) << 2) |
    (uint32_t(InvalidRegBankID) << 4) |
    (uint32_t(InvalidRegBankID) << 6) |
    (uint32_t(InvalidRegBankID) << 8) |
    (uint32_t(InvalidRegBankID) << 10) |
    (uint32_t(InvalidRegBankID) << 12) |
    (uint32_t(InvalidRegBankID) << 14) |
    (uint32_t(AArch64::FPRRegBankID) << 16) | // QQQQRegClassID
    (uint32_t(InvalidRegBankID) << 18) |
    (uint32_t(AArch64::FPRRegBankID) << 20) | // QQQQ_with_dsub1_in_FPR64_loRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 22) | // QQQQ_with_dsub2_in_FPR64_loRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 24) | // QQQQ_with_dsub3_in_FPR64_loRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 26) | // QQQQ_with_qsub0_in_FPR128_loRegClassID
    (uint32_t(InvalidRegBankID) << 28) |
    (uint32_t(InvalidRegBankID) << 30),
    (uint32_t(InvalidRegBankID) << 0) |
    (uint32_t(InvalidRegBankID) << 2) |
    (uint32_t(InvalidRegBankID) << 4) |
    (uint32_t(InvalidRegBankID) << 6) |
    (uint32_t(InvalidRegBankID) << 8) |
    (uint32_t(AArch64::FPRRegBankID) << 10) | // QQQQ_with_dsub1_in_FPR64_lo_and_QQQQ_with_dsub2_in_FPR64_loRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 12) | // QQQQ_with_dsub2_in_FPR64_lo_and_QQQQ_with_dsub3_in_FPR64_loRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 14) | // QQQQ_with_qsub0_in_FPR128_lo_and_QQQQ_with_dsub1_in_FPR64_loRegClassID
    (uint32_t(InvalidRegBankID) << 16) |
    (uint32_t(InvalidRegBankID) << 18) |
    (uint32_t(InvalidRegBankID) << 20) |
    (uint32_t(AArch64::FPRRegBankID) << 22) | // QQQQ_with_dsub1_in_FPR64_lo_and_QQQQ_with_dsub3_in_FPR64_loRegClassID
    (uint32_t(AArch64::FPRRegBankID) << 24) | // QQQQ_with_qsub0_in_FPR128_lo_and_QQQQ_with_dsub2_in_FPR64_loRegClassID
    (uint32_t(InvalidRegBankID) << 26) |
    (uint32_t(InvalidRegBankID) << 28) |
    (uint32_t(AArch64::FPRRegBankID) << 30), // QQQQ_with_qsub0_in_FPR128_lo_and_QQQQ_with_dsub3_in_FPR64_loRegClassID
    (uint32_t(InvalidRegBankID) << 0) |
    (uint32_t(InvalidRegBankID) << 2) |
    (uint32_t(InvalidRegBankID) << 4) |
    (uint32_t(AArch64::FPRRegBankID) << 6) | // QQQQ_with_qsub0_in_FPR128_0to7RegClassID
    (uint32_t(AArch64::FPRRegBankID) << 8) | // QQQQ_with_qsub1_in_FPR128_0to7RegClassID
    (uint32_t(AArch64::FPRRegBankID) << 10) | // QQQQ_with_qsub2_in_FPR128_0to7RegClassID
    (uint32_t(AArch64::FPRRegBankID) << 12) | // QQQQ_with_qsub3_in_FPR128_0to7RegClassID
    (uint32_t(InvalidRegBankID) << 14) |
    (uint32_t(InvalidRegBankID) << 16) |
    (uint32_t(InvalidRegBankID) << 18) |
    (uint32_t(InvalidRegBankID) << 20) |
    (uint32_t(InvalidRegBankID) << 22) |
    (uint32_t(InvalidRegBankID) << 24) |
    (uint32_t(InvalidRegBankID) << 26) |
    (uint32_t(InvalidRegBankID) << 28) |
    (uint32_t(InvalidRegBankID) << 30),
    (uint32_t(InvalidRegBankID) << 0) |
    (uint32_t(InvalidRegBankID) << 2) |
    (uint32_t(InvalidRegBankID) << 4) |
    (uint32_t(InvalidRegBankID) << 6) |
    (uint32_t(InvalidRegBankID) << 8) |
    (uint32_t(InvalidRegBankID) << 10) |
    (uint32_t(InvalidRegBankID) << 12) |
    (uint32_t(InvalidRegBankID) << 14) |
    (uint32_t(InvalidRegBankID) << 16) |
    (uint32_t(InvalidRegBankID) << 18) |
    (uint32_t(InvalidRegBankID) << 20) |
    (uint32_t(InvalidRegBankID) << 22) |
    (uint32_t(InvalidRegBankID) << 24) |
    (uint32_t(InvalidRegBankID) << 26) |
    (uint32_t(AArch64::FPRRegBankID) << 28) | // QQQQ_with_dsub1_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_0to7RegClassID
    (uint32_t(AArch64::FPRRegBankID) << 30), // QQQQ_with_dsub2_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_0to7RegClassID
    (uint32_t(AArch64::FPRRegBankID) << 0) | // QQQQ_with_qsub0_in_FPR128_0to7_and_QQQQ_with_qsub1_in_FPR128_0to7RegClassID
    (uint32_t(InvalidRegBankID) << 2) |
    (uint32_t(InvalidRegBankID) << 4) |
    (uint32_t(InvalidRegBankID) << 6) |
    (uint32_t(InvalidRegBankID) << 8) |
    (uint32_t(InvalidRegBankID) << 10) |
    (uint32_t(InvalidRegBankID) << 12) |
    (uint32_t(InvalidRegBankID) << 14) |
    (uint32_t(InvalidRegBankID) << 16) |
    (uint32_t(AArch64::FPRRegBankID) << 18) | // QQQQ_with_dsub1_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_0to7RegClassID
    (uint32_t(AArch64::FPRRegBankID) << 20) | // QQQQ_with_qsub0_in_FPR128_0to7_and_QQQQ_with_qsub2_in_FPR128_0to7RegClassID
    (uint32_t(InvalidRegBankID) << 22) |
    (uint32_t(InvalidRegBankID) << 24) |
    (uint32_t(InvalidRegBankID) << 26) |
    (uint32_t(InvalidRegBankID) << 28) |
    (uint32_t(InvalidRegBankID) << 30),
    (uint32_t(InvalidRegBankID) << 0) |
    (uint32_t(InvalidRegBankID) << 2) |
    (uint32_t(InvalidRegBankID) << 4) |
    (uint32_t(InvalidRegBankID) << 6) |
    (uint32_t(InvalidRegBankID) << 8) |
    (uint32_t(AArch64::FPRRegBankID) << 10) // QQQQ_with_qsub0_in_FPR128_0to7_and_QQQQ_with_qsub3_in_FPR128_0to7RegClassID
  };
  const unsigned RegClassID = RC.getID();
  if (LLVM_LIKELY(RegClassID < 374)) {
    unsigned RegBankID = (RegClass2RegBank[RegClassID / 16] >> ((RegClassID % 16) * 2)) & 3;
    if (RegBankID != InvalidRegBankID)
      return getRegBank(RegBankID);
  }
  llvm_unreachable(llvm::Twine("Target needs to handle register class ID 0x").concat(llvm::Twine::utohexstr(RegClassID)).str().c_str());
}

} // namespace llvm

#endif // GET_TARGET_REGBANK_IMPL

