/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Register Information Header Fragment                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "llvm/CodeGen/TargetRegisterInfo.h"

namespace llvm {

class X86FrameLowering;

extern const MCRegisterClassStorage<135, 1296, 2329, 1070, 16, 979> X86MCRegisterClassStorage;

struct X86GenRegisterInfo : public TargetRegisterInfo {
  explicit X86GenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0,
      unsigned PC = 0, unsigned HwMode = 0);
  unsigned composeSubRegIndicesImpl(unsigned, unsigned) const override;
  unsigned reverseComposeSubRegIndicesImpl(unsigned, unsigned) const override;
  LaneBitmask composeSubRegIndexLaneMaskImpl(unsigned, LaneBitmask) const override;
  LaneBitmask reverseComposeSubRegIndexLaneMaskImpl(unsigned, LaneBitmask) const override;
  const TargetRegisterClass *getSubClassWithSubReg(const TargetRegisterClass *, unsigned) const override;
  const TargetRegisterClass *getSubRegisterClass(const TargetRegisterClass *, unsigned) const override;
  const RegClassWeight &getRegClassWeight(const TargetRegisterClass *RC) const override;
  unsigned getRegUnitWeight(MCRegUnit RegUnit) const override;
  unsigned getNumRegPressureSets() const override;
  const char *getRegPressureSetName(unsigned Idx) const override;
  unsigned getRegPressureSetLimit(const MachineFunction &MF, unsigned Idx) const override;
  const int *getRegClassPressureSets(const TargetRegisterClass *RC) const override;
  const int *getRegUnitPressureSets(MCRegUnit RegUnit) const override;
  ArrayRef<const char *> getRegMaskNames() const override;
  ArrayRef<const uint32_t *> getRegMasks() const override;
  bool isGeneralPurposeRegister(const MachineFunction &, MCRegister) const override;
  bool isGeneralPurposeRegisterClass(const TargetRegisterClass *RC) const override;
  bool isFixedRegister(const MachineFunction &, MCRegister) const override;
  bool isArgumentRegister(const MachineFunction &, MCRegister) const override;
  bool isConstantPhysReg(MCRegister PhysReg) const override final;
  /// Devirtualized TargetFrameLowering.
  static const X86FrameLowering *getFrameLowering(
      const MachineFunction &MF);
   ArrayRef<MCPhysReg> getRawAllocationOrder(const TargetRegisterClass &RC, const MachineFunction &MF, bool Rev) const override;
  const TargetRegisterClass *getMinimalPhysRegClass(MCRegister Reg) const override;
};

namespace X86 {

// Register classes
static constexpr const TargetRegisterClass &GR8RegClass = X86MCRegisterClassStorage.Classes[0];
static constexpr const TargetRegisterClass &GRH8RegClass = X86MCRegisterClassStorage.Classes[1];
static constexpr const TargetRegisterClass &GR8_NOREX2RegClass = X86MCRegisterClassStorage.Classes[2];
static constexpr const TargetRegisterClass &GR8_NOREXRegClass = X86MCRegisterClassStorage.Classes[3];
static constexpr const TargetRegisterClass &GR8_ABCD_HRegClass = X86MCRegisterClassStorage.Classes[4];
static constexpr const TargetRegisterClass &GR8_ABCD_LRegClass = X86MCRegisterClassStorage.Classes[5];
static constexpr const TargetRegisterClass &GRH16RegClass = X86MCRegisterClassStorage.Classes[6];
static constexpr const TargetRegisterClass &GR16RegClass = X86MCRegisterClassStorage.Classes[7];
static constexpr const TargetRegisterClass &GR16_NOREX2RegClass = X86MCRegisterClassStorage.Classes[8];
static constexpr const TargetRegisterClass &GR16_NOREXRegClass = X86MCRegisterClassStorage.Classes[9];
static constexpr const TargetRegisterClass &VK1RegClass = X86MCRegisterClassStorage.Classes[10];
static constexpr const TargetRegisterClass &VK16RegClass = X86MCRegisterClassStorage.Classes[11];
static constexpr const TargetRegisterClass &VK2RegClass = X86MCRegisterClassStorage.Classes[12];
static constexpr const TargetRegisterClass &VK4RegClass = X86MCRegisterClassStorage.Classes[13];
static constexpr const TargetRegisterClass &VK8RegClass = X86MCRegisterClassStorage.Classes[14];
static constexpr const TargetRegisterClass &VK16WMRegClass = X86MCRegisterClassStorage.Classes[15];
static constexpr const TargetRegisterClass &VK1WMRegClass = X86MCRegisterClassStorage.Classes[16];
static constexpr const TargetRegisterClass &VK2WMRegClass = X86MCRegisterClassStorage.Classes[17];
static constexpr const TargetRegisterClass &VK4WMRegClass = X86MCRegisterClassStorage.Classes[18];
static constexpr const TargetRegisterClass &VK8WMRegClass = X86MCRegisterClassStorage.Classes[19];
static constexpr const TargetRegisterClass &SEGMENT_REGRegClass = X86MCRegisterClassStorage.Classes[20];
static constexpr const TargetRegisterClass &GR16_ABCDRegClass = X86MCRegisterClassStorage.Classes[21];
static constexpr const TargetRegisterClass &FPCCRRegClass = X86MCRegisterClassStorage.Classes[22];
static constexpr const TargetRegisterClass &FR16XRegClass = X86MCRegisterClassStorage.Classes[23];
static constexpr const TargetRegisterClass &FR16RegClass = X86MCRegisterClassStorage.Classes[24];
static constexpr const TargetRegisterClass &VK16PAIRRegClass = X86MCRegisterClassStorage.Classes[25];
static constexpr const TargetRegisterClass &VK1PAIRRegClass = X86MCRegisterClassStorage.Classes[26];
static constexpr const TargetRegisterClass &VK2PAIRRegClass = X86MCRegisterClassStorage.Classes[27];
static constexpr const TargetRegisterClass &VK4PAIRRegClass = X86MCRegisterClassStorage.Classes[28];
static constexpr const TargetRegisterClass &VK8PAIRRegClass = X86MCRegisterClassStorage.Classes[29];
static constexpr const TargetRegisterClass &VK1PAIR_with_sub_mask_0_in_VK1WMRegClass = X86MCRegisterClassStorage.Classes[30];
static constexpr const TargetRegisterClass &LOW32_ADDR_ACCESS_RBPRegClass = X86MCRegisterClassStorage.Classes[31];
static constexpr const TargetRegisterClass &LOW32_ADDR_ACCESSRegClass = X86MCRegisterClassStorage.Classes[32];
static constexpr const TargetRegisterClass &LOW32_ADDR_ACCESS_RBP_with_sub_8bitRegClass = X86MCRegisterClassStorage.Classes[33];
static constexpr const TargetRegisterClass &FR32XRegClass = X86MCRegisterClassStorage.Classes[34];
static constexpr const TargetRegisterClass &GR32RegClass = X86MCRegisterClassStorage.Classes[35];
static constexpr const TargetRegisterClass &GR32_NOSPRegClass = X86MCRegisterClassStorage.Classes[36];
static constexpr const TargetRegisterClass &LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX2RegClass = X86MCRegisterClassStorage.Classes[37];
static constexpr const TargetRegisterClass &DEBUG_REGRegClass = X86MCRegisterClassStorage.Classes[38];
static constexpr const TargetRegisterClass &FR32RegClass = X86MCRegisterClassStorage.Classes[39];
static constexpr const TargetRegisterClass &GR32_NOREX2RegClass = X86MCRegisterClassStorage.Classes[40];
static constexpr const TargetRegisterClass &GR32_NOREX2_NOSPRegClass = X86MCRegisterClassStorage.Classes[41];
static constexpr const TargetRegisterClass &LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREXRegClass = X86MCRegisterClassStorage.Classes[42];
static constexpr const TargetRegisterClass &GR32_NOREXRegClass = X86MCRegisterClassStorage.Classes[43];
static constexpr const TargetRegisterClass &VK32RegClass = X86MCRegisterClassStorage.Classes[44];
static constexpr const TargetRegisterClass &GR32_NOREX_NOSPRegClass = X86MCRegisterClassStorage.Classes[45];
static constexpr const TargetRegisterClass &RFP32RegClass = X86MCRegisterClassStorage.Classes[46];
static constexpr const TargetRegisterClass &VK32WMRegClass = X86MCRegisterClassStorage.Classes[47];
static constexpr const TargetRegisterClass &GR32_ABCDRegClass = X86MCRegisterClassStorage.Classes[48];
static constexpr const TargetRegisterClass &GR32_TCRegClass = X86MCRegisterClassStorage.Classes[49];
static constexpr const TargetRegisterClass &GR32_ABCD_and_GR32_TCRegClass = X86MCRegisterClassStorage.Classes[50];
static constexpr const TargetRegisterClass &GR32_ADRegClass = X86MCRegisterClassStorage.Classes[51];
static constexpr const TargetRegisterClass &GR32_ArgRefRegClass = X86MCRegisterClassStorage.Classes[52];
static constexpr const TargetRegisterClass &GR32_BPSPRegClass = X86MCRegisterClassStorage.Classes[53];
static constexpr const TargetRegisterClass &GR32_BSIRegClass = X86MCRegisterClassStorage.Classes[54];
static constexpr const TargetRegisterClass &GR32_CBRegClass = X86MCRegisterClassStorage.Classes[55];
static constexpr const TargetRegisterClass &GR32_DCRegClass = X86MCRegisterClassStorage.Classes[56];
static constexpr const TargetRegisterClass &GR32_DIBPRegClass = X86MCRegisterClassStorage.Classes[57];
static constexpr const TargetRegisterClass &GR32_SIDIRegClass = X86MCRegisterClassStorage.Classes[58];
static constexpr const TargetRegisterClass &LOW32_ADDR_ACCESS_RBP_with_sub_32bitRegClass = X86MCRegisterClassStorage.Classes[59];
static constexpr const TargetRegisterClass &CCRRegClass = X86MCRegisterClassStorage.Classes[60];
static constexpr const TargetRegisterClass &DFCCRRegClass = X86MCRegisterClassStorage.Classes[61];
static constexpr const TargetRegisterClass &GR32_ABCD_and_GR32_BSIRegClass = X86MCRegisterClassStorage.Classes[62];
static constexpr const TargetRegisterClass &GR32_AD_and_GR32_ArgRefRegClass = X86MCRegisterClassStorage.Classes[63];
static constexpr const TargetRegisterClass &GR32_ArgRef_and_GR32_CBRegClass = X86MCRegisterClassStorage.Classes[64];
static constexpr const TargetRegisterClass &GR32_BPSP_and_GR32_DIBPRegClass = X86MCRegisterClassStorage.Classes[65];
static constexpr const TargetRegisterClass &GR32_BPSP_and_GR32_TCRegClass = X86MCRegisterClassStorage.Classes[66];
static constexpr const TargetRegisterClass &GR32_BSI_and_GR32_SIDIRegClass = X86MCRegisterClassStorage.Classes[67];
static constexpr const TargetRegisterClass &GR32_DIBP_and_GR32_SIDIRegClass = X86MCRegisterClassStorage.Classes[68];
static constexpr const TargetRegisterClass &LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bitRegClass = X86MCRegisterClassStorage.Classes[69];
static constexpr const TargetRegisterClass &LOW32_ADDR_ACCESS_with_sub_32bitRegClass = X86MCRegisterClassStorage.Classes[70];
static constexpr const TargetRegisterClass &RFP64RegClass = X86MCRegisterClassStorage.Classes[71];
static constexpr const TargetRegisterClass &GR64RegClass = X86MCRegisterClassStorage.Classes[72];
static constexpr const TargetRegisterClass &FR64XRegClass = X86MCRegisterClassStorage.Classes[73];
static constexpr const TargetRegisterClass &GR64_with_sub_8bitRegClass = X86MCRegisterClassStorage.Classes[74];
static constexpr const TargetRegisterClass &GR64_NOSPRegClass = X86MCRegisterClassStorage.Classes[75];
static constexpr const TargetRegisterClass &GR64_NOREX2RegClass = X86MCRegisterClassStorage.Classes[76];
static constexpr const TargetRegisterClass &CONTROL_REGRegClass = X86MCRegisterClassStorage.Classes[77];
static constexpr const TargetRegisterClass &FR64RegClass = X86MCRegisterClassStorage.Classes[78];
static constexpr const TargetRegisterClass &GR64_with_sub_16bit_in_GR16_NOREX2RegClass = X86MCRegisterClassStorage.Classes[79];
static constexpr const TargetRegisterClass &GR64_NOREX2_NOSPRegClass = X86MCRegisterClassStorage.Classes[80];
static constexpr const TargetRegisterClass &GR64PLTSafeRegClass = X86MCRegisterClassStorage.Classes[81];
static constexpr const TargetRegisterClass &GR64_TCRegClass = X86MCRegisterClassStorage.Classes[82];
static constexpr const TargetRegisterClass &GR64_NOREXRegClass = X86MCRegisterClassStorage.Classes[83];
static constexpr const TargetRegisterClass &GR64_TCW64RegClass = X86MCRegisterClassStorage.Classes[84];
static constexpr const TargetRegisterClass &GR64_TC_with_sub_8bitRegClass = X86MCRegisterClassStorage.Classes[85];
static constexpr const TargetRegisterClass &GR64_NOREX2_NOSP_and_GR64_TCRegClass = X86MCRegisterClassStorage.Classes[86];
static constexpr const TargetRegisterClass &GR64_TCW64_with_sub_8bitRegClass = X86MCRegisterClassStorage.Classes[87];
static constexpr const TargetRegisterClass &GR64_TC_and_GR64_TCW64RegClass = X86MCRegisterClassStorage.Classes[88];
static constexpr const TargetRegisterClass &GR64_with_sub_16bit_in_GR16_NOREXRegClass = X86MCRegisterClassStorage.Classes[89];
static constexpr const TargetRegisterClass &VK64RegClass = X86MCRegisterClassStorage.Classes[90];
static constexpr const TargetRegisterClass &VR64RegClass = X86MCRegisterClassStorage.Classes[91];
static constexpr const TargetRegisterClass &GR64PLTSafe_and_GR64_TCRegClass = X86MCRegisterClassStorage.Classes[92];
static constexpr const TargetRegisterClass &GR64_NOREX2_NOSP_and_GR64_TCW64RegClass = X86MCRegisterClassStorage.Classes[93];
static constexpr const TargetRegisterClass &GR64_NOREX_NOSPRegClass = X86MCRegisterClassStorage.Classes[94];
static constexpr const TargetRegisterClass &GR64_NOREX_and_GR64_TCRegClass = X86MCRegisterClassStorage.Classes[95];
static constexpr const TargetRegisterClass &GR64_TCW64_and_GR64_TC_with_sub_8bitRegClass = X86MCRegisterClassStorage.Classes[96];
static constexpr const TargetRegisterClass &VK64WMRegClass = X86MCRegisterClassStorage.Classes[97];
static constexpr const TargetRegisterClass &GR64_TC_and_GR64_NOREX2_NOSP_and_GR64_TCW64RegClass = X86MCRegisterClassStorage.Classes[98];
static constexpr const TargetRegisterClass &GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREXRegClass = X86MCRegisterClassStorage.Classes[99];
static constexpr const TargetRegisterClass &GR64PLTSafe_and_GR64_TCW64RegClass = X86MCRegisterClassStorage.Classes[100];
static constexpr const TargetRegisterClass &GR64_NOREX_and_GR64PLTSafe_and_GR64_TCRegClass = X86MCRegisterClassStorage.Classes[101];
static constexpr const TargetRegisterClass &GR64_NOREX_and_GR64_TCW64RegClass = X86MCRegisterClassStorage.Classes[102];
static constexpr const TargetRegisterClass &GR64_ABCDRegClass = X86MCRegisterClassStorage.Classes[103];
static constexpr const TargetRegisterClass &GR64_with_sub_32bit_in_GR32_TCRegClass = X86MCRegisterClassStorage.Classes[104];
static constexpr const TargetRegisterClass &GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TCRegClass = X86MCRegisterClassStorage.Classes[105];
static constexpr const TargetRegisterClass &GR64_ADRegClass = X86MCRegisterClassStorage.Classes[106];
static constexpr const TargetRegisterClass &GR64_ArgRefRegClass = X86MCRegisterClassStorage.Classes[107];
static constexpr const TargetRegisterClass &GR64_and_LOW32_ADDR_ACCESS_RBPRegClass = X86MCRegisterClassStorage.Classes[108];
static constexpr const TargetRegisterClass &GR64_with_sub_32bit_in_GR32_ArgRefRegClass = X86MCRegisterClassStorage.Classes[109];
static constexpr const TargetRegisterClass &GR64_with_sub_32bit_in_GR32_BPSPRegClass = X86MCRegisterClassStorage.Classes[110];
static constexpr const TargetRegisterClass &GR64_with_sub_32bit_in_GR32_BSIRegClass = X86MCRegisterClassStorage.Classes[111];
static constexpr const TargetRegisterClass &GR64_with_sub_32bit_in_GR32_CBRegClass = X86MCRegisterClassStorage.Classes[112];
static constexpr const TargetRegisterClass &GR64_with_sub_32bit_in_GR32_DIBPRegClass = X86MCRegisterClassStorage.Classes[113];
static constexpr const TargetRegisterClass &GR64_with_sub_32bit_in_GR32_SIDIRegClass = X86MCRegisterClassStorage.Classes[114];
static constexpr const TargetRegisterClass &GR64_ARegClass = X86MCRegisterClassStorage.Classes[115];
static constexpr const TargetRegisterClass &GR64_ArgRef_and_GR64_TCRegClass = X86MCRegisterClassStorage.Classes[116];
static constexpr const TargetRegisterClass &GR64_and_LOW32_ADDR_ACCESSRegClass = X86MCRegisterClassStorage.Classes[117];
static constexpr const TargetRegisterClass &GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSIRegClass = X86MCRegisterClassStorage.Classes[118];
static constexpr const TargetRegisterClass &GR64_with_sub_32bit_in_GR32_AD_and_GR32_ArgRefRegClass = X86MCRegisterClassStorage.Classes[119];
static constexpr const TargetRegisterClass &GR64_with_sub_32bit_in_GR32_ArgRef_and_GR32_CBRegClass = X86MCRegisterClassStorage.Classes[120];
static constexpr const TargetRegisterClass &GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBPRegClass = X86MCRegisterClassStorage.Classes[121];
static constexpr const TargetRegisterClass &GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TCRegClass = X86MCRegisterClassStorage.Classes[122];
static constexpr const TargetRegisterClass &GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDIRegClass = X86MCRegisterClassStorage.Classes[123];
static constexpr const TargetRegisterClass &GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDIRegClass = X86MCRegisterClassStorage.Classes[124];
static constexpr const TargetRegisterClass &RSTRegClass = X86MCRegisterClassStorage.Classes[125];
static constexpr const TargetRegisterClass &RFP80RegClass = X86MCRegisterClassStorage.Classes[126];
static constexpr const TargetRegisterClass &RFP80_7RegClass = X86MCRegisterClassStorage.Classes[127];
static constexpr const TargetRegisterClass &VR128XRegClass = X86MCRegisterClassStorage.Classes[128];
static constexpr const TargetRegisterClass &VR128RegClass = X86MCRegisterClassStorage.Classes[129];
static constexpr const TargetRegisterClass &VR256XRegClass = X86MCRegisterClassStorage.Classes[130];
static constexpr const TargetRegisterClass &VR256RegClass = X86MCRegisterClassStorage.Classes[131];
static constexpr const TargetRegisterClass &VR512RegClass = X86MCRegisterClassStorage.Classes[132];
static constexpr const TargetRegisterClass &VR512_0_15RegClass = X86MCRegisterClassStorage.Classes[133];
static constexpr const TargetRegisterClass &TILERegClass = X86MCRegisterClassStorage.Classes[134];

} // namespace X86

} // namespace llvm
