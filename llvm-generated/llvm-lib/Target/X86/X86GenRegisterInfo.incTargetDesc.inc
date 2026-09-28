/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Register and Register Classes Information                           *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace llvm {

extern const MCRegisterClassStorage<135, 1296, 2329, 1070, 16, 979> X86MCRegisterClassStorage;

static const MVT::SimpleValueType X86VTLists[] = {
  /* 0 */ MVT::i8, MVT::Other,
  /* 2 */ MVT::i16, MVT::Other,
  /* 4 */ MVT::i32, MVT::Other,
  /* 6 */ MVT::i64, MVT::Other,
  /* 8 */ MVT::f16, MVT::Other,
  /* 10 */ MVT::f80, MVT::f64, MVT::f32, MVT::Other,
  /* 14 */ MVT::f64, MVT::Other,
  /* 16 */ MVT::f80, MVT::Other,
  /* 18 */ MVT::v4f32, MVT::v2f64, MVT::v8f16, MVT::v8bf16, MVT::v16i8, MVT::v8i16, MVT::v4i32, MVT::v2i64, MVT::f128, MVT::Other,
  /* 28 */ MVT::v1i1, MVT::Other,
  /* 30 */ MVT::v2i1, MVT::Other,
  /* 32 */ MVT::v4i1, MVT::Other,
  /* 34 */ MVT::v8i1, MVT::Other,
  /* 36 */ MVT::v16i1, MVT::Other,
  /* 38 */ MVT::v32i1, MVT::Other,
  /* 40 */ MVT::v64i1, MVT::Other,
  /* 42 */ MVT::v8f32, MVT::v4f64, MVT::v16f16, MVT::v16bf16, MVT::v32i8, MVT::v16i16, MVT::v8i32, MVT::v4i64, MVT::Other,
  /* 51 */ MVT::v16f32, MVT::v8f64, MVT::v32f16, MVT::v32bf16, MVT::v64i8, MVT::v32i16, MVT::v16i32, MVT::v8i64, MVT::Other,
  /* 60 */ MVT::v16f32, MVT::v8f64, MVT::v64i8, MVT::v32i16, MVT::v16i32, MVT::v8i64, MVT::Other,
  /* 67 */ MVT::x86mmx, MVT::Other,
  /* 69 */ MVT::Untyped, MVT::Other,
  /* 71 */ MVT::x86amx, MVT::Other,
};

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
static constexpr char X86SubRegIndexStrings[] = {
  /* 0 */ "sub_mask_0\000"
  /* 11 */ "sub_mask_1\000"
  /* 22 */ "sub_16bit_hi\000"
  /* 35 */ "sub_8bit_hi\000"
  /* 47 */ "sub_xmm\000"
  /* 55 */ "sub_ymm\000"
  /* 63 */ "sub_32bit\000"
  /* 73 */ "sub_16bit\000"
  /* 83 */ "sub_8bit\000"
  /* 92 */ "sub_8bit_hi_phony\000"
};
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif


static constexpr uint32_t X86SubRegIndexNameOffsets[] = {
  83, 
  35, 
  92, 
  73, 
  22, 
  63, 
  0, 
  11, 
  47, 
  55, 
};

static const TargetRegisterInfo::SubRegCoveredBits X86SubRegIdxRangeTable[] = {
  { 4294967295, 4294967295 },
  { 0, 8 },	// sub_8bit
  { 8, 8 },	// sub_8bit_hi
  { 8, 8 },	// sub_8bit_hi_phony
  { 0, 16 },	// sub_16bit
  { 16, 16 },	// sub_16bit_hi
  { 0, 32 },	// sub_32bit
  { 0, 4294967295 },	// sub_mask_0
  { 4294967295, 4294967295 },	// sub_mask_1
  { 0, 128 },	// sub_xmm
  { 0, 256 },	// sub_ymm
  { 4294967295, 4294967295 },
  { 0, 8 },	// sub_8bit
  { 8, 8 },	// sub_8bit_hi
  { 8, 8 },	// sub_8bit_hi_phony
  { 0, 16 },	// sub_16bit
  { 16, 16 },	// sub_16bit_hi
  { 0, 32 },	// sub_32bit
  { 0, 4294967295 },	// sub_mask_0
  { 4294967295, 4294967295 },	// sub_mask_1
  { 0, 128 },	// sub_xmm
  { 0, 256 },	// sub_ymm
  { 4294967295, 4294967295 },
  { 0, 8 },	// sub_8bit
  { 8, 8 },	// sub_8bit_hi
  { 8, 8 },	// sub_8bit_hi_phony
  { 0, 16 },	// sub_16bit
  { 16, 16 },	// sub_16bit_hi
  { 0, 32 },	// sub_32bit
  { 0, 4294967295 },	// sub_mask_0
  { 4294967295, 4294967295 },	// sub_mask_1
  { 0, 128 },	// sub_xmm
  { 0, 256 },	// sub_ymm
};


static const LaneBitmask X86SubRegIndexLaneMaskTable[] = {
  LaneBitmask::getAll(),
  LaneBitmask(0x0000000000000001), // sub_8bit
  LaneBitmask(0x0000000000000002), // sub_8bit_hi
  LaneBitmask(0x0000000000000004), // sub_8bit_hi_phony
  LaneBitmask(0x0000000000000007), // sub_16bit
  LaneBitmask(0x0000000000000008), // sub_16bit_hi
  LaneBitmask(0x000000000000000F), // sub_32bit
  LaneBitmask(0x0000000000000010), // sub_mask_0
  LaneBitmask(0x0000000000000020), // sub_mask_1
  LaneBitmask(0x0000000000000040), // sub_xmm
  LaneBitmask(0x0000000000000040), // sub_ymm
 };



static const TargetRegisterInfo::RegClassInfo X86RegClassInfos[] = {
  // Mode = 0 (DefaultMode)
  { 8, 8, 8, /*X86VTLists+*/0 },    // GR8
  { 8, 8, 8, /*X86VTLists+*/0 },    // GRH8
  { 8, 8, 8, /*X86VTLists+*/0 },    // GR8_NOREX2
  { 8, 8, 8, /*X86VTLists+*/0 },    // GR8_NOREX
  { 8, 8, 8, /*X86VTLists+*/0 },    // GR8_ABCD_H
  { 8, 8, 8, /*X86VTLists+*/0 },    // GR8_ABCD_L
  { 16, 16, 16, /*X86VTLists+*/2 },    // GRH16
  { 16, 16, 16, /*X86VTLists+*/2 },    // GR16
  { 16, 16, 16, /*X86VTLists+*/2 },    // GR16_NOREX2
  { 16, 16, 16, /*X86VTLists+*/2 },    // GR16_NOREX
  { 16, 16, 16, /*X86VTLists+*/28 },    // VK1
  { 16, 16, 16, /*X86VTLists+*/36 },    // VK16
  { 16, 16, 16, /*X86VTLists+*/30 },    // VK2
  { 16, 16, 16, /*X86VTLists+*/32 },    // VK4
  { 16, 16, 16, /*X86VTLists+*/34 },    // VK8
  { 16, 16, 16, /*X86VTLists+*/36 },    // VK16WM
  { 16, 16, 16, /*X86VTLists+*/28 },    // VK1WM
  { 16, 16, 16, /*X86VTLists+*/30 },    // VK2WM
  { 16, 16, 16, /*X86VTLists+*/32 },    // VK4WM
  { 16, 16, 16, /*X86VTLists+*/34 },    // VK8WM
  { 16, 16, 16, /*X86VTLists+*/2 },    // SEGMENT_REG
  { 16, 16, 16, /*X86VTLists+*/2 },    // GR16_ABCD
  { 16, 16, 16, /*X86VTLists+*/2 },    // FPCCR
  { 32, 32, 16, /*X86VTLists+*/8 },    // FR16X
  { 32, 32, 16, /*X86VTLists+*/8 },    // FR16
  { 32, 32, 16, /*X86VTLists+*/69 },    // VK16PAIR
  { 32, 32, 16, /*X86VTLists+*/69 },    // VK1PAIR
  { 32, 32, 16, /*X86VTLists+*/69 },    // VK2PAIR
  { 32, 32, 16, /*X86VTLists+*/69 },    // VK4PAIR
  { 32, 32, 16, /*X86VTLists+*/69 },    // VK8PAIR
  { 32, 32, 16, /*X86VTLists+*/69 },    // VK1PAIR_with_sub_mask_0_in_VK1WM
  { 32, 32, 32, /*X86VTLists+*/4 },    // LOW32_ADDR_ACCESS_RBP
  { 32, 32, 32, /*X86VTLists+*/4 },    // LOW32_ADDR_ACCESS
  { 32, 32, 32, /*X86VTLists+*/4 },    // LOW32_ADDR_ACCESS_RBP_with_sub_8bit
  { 32, 32, 32, /*X86VTLists+*/12 },    // FR32X
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_NOSP
  { 32, 32, 32, /*X86VTLists+*/4 },    // LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX2
  { 32, 32, 32, /*X86VTLists+*/4 },    // DEBUG_REG
  { 32, 32, 32, /*X86VTLists+*/12 },    // FR32
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_NOREX2
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_NOREX2_NOSP
  { 32, 32, 32, /*X86VTLists+*/4 },    // LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_NOREX
  { 32, 32, 32, /*X86VTLists+*/38 },    // VK32
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_NOREX_NOSP
  { 32, 32, 32, /*X86VTLists+*/12 },    // RFP32
  { 32, 32, 32, /*X86VTLists+*/38 },    // VK32WM
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_ABCD
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_TC
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_ABCD_and_GR32_TC
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_AD
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_ArgRef
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_BPSP
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_BSI
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_CB
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_DC
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_DIBP
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_SIDI
  { 32, 32, 32, /*X86VTLists+*/4 },    // LOW32_ADDR_ACCESS_RBP_with_sub_32bit
  { 32, 32, 32, /*X86VTLists+*/4 },    // CCR
  { 32, 32, 32, /*X86VTLists+*/4 },    // DFCCR
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_ABCD_and_GR32_BSI
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_AD_and_GR32_ArgRef
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_ArgRef_and_GR32_CB
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_BPSP_and_GR32_DIBP
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_BPSP_and_GR32_TC
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_BSI_and_GR32_SIDI
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_DIBP_and_GR32_SIDI
  { 32, 32, 32, /*X86VTLists+*/4 },    // LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit
  { 32, 32, 32, /*X86VTLists+*/4 },    // LOW32_ADDR_ACCESS_with_sub_32bit
  { 64, 64, 32, /*X86VTLists+*/14 },    // RFP64
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64
  { 64, 64, 64, /*X86VTLists+*/14 },    // FR64X
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_8bit
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_NOSP
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_NOREX2
  { 64, 64, 64, /*X86VTLists+*/6 },    // CONTROL_REG
  { 64, 64, 64, /*X86VTLists+*/14 },    // FR64
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_16bit_in_GR16_NOREX2
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_NOREX2_NOSP
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64PLTSafe
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_TC
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_NOREX
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_TCW64
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_TC_with_sub_8bit
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_NOREX2_NOSP_and_GR64_TC
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_TCW64_with_sub_8bit
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_TC_and_GR64_TCW64
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_16bit_in_GR16_NOREX
  { 64, 64, 64, /*X86VTLists+*/40 },    // VK64
  { 64, 64, 64, /*X86VTLists+*/67 },    // VR64
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64PLTSafe_and_GR64_TC
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_NOREX2_NOSP_and_GR64_TCW64
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_NOREX_NOSP
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_NOREX_and_GR64_TC
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_TCW64_and_GR64_TC_with_sub_8bit
  { 64, 64, 64, /*X86VTLists+*/40 },    // VK64WM
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_TC_and_GR64_NOREX2_NOSP_and_GR64_TCW64
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREX
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64PLTSafe_and_GR64_TCW64
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_NOREX_and_GR64PLTSafe_and_GR64_TC
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_NOREX_and_GR64_TCW64
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_ABCD
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_TC
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_AD
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_ArgRef
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_and_LOW32_ADDR_ACCESS_RBP
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_ArgRef
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_BPSP
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_BSI
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_CB
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_DIBP
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_SIDI
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_A
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_ArgRef_and_GR64_TC
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_and_LOW32_ADDR_ACCESS
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSI
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_AD_and_GR32_ArgRef
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_ArgRef_and_GR32_CB
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBP
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TC
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDI
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDI
  { 80, 80, 32, /*X86VTLists+*/10 },    // RST
  { 80, 80, 32, /*X86VTLists+*/16 },    // RFP80
  { 80, 80, 32, /*X86VTLists+*/16 },    // RFP80_7
  { 128, 128, 128, /*X86VTLists+*/18 },    // VR128X
  { 128, 128, 128, /*X86VTLists+*/18 },    // VR128
  { 256, 256, 256, /*X86VTLists+*/42 },    // VR256X
  { 256, 256, 256, /*X86VTLists+*/42 },    // VR256
  { 512, 512, 512, /*X86VTLists+*/51 },    // VR512
  { 512, 512, 512, /*X86VTLists+*/60 },    // VR512_0_15
  { 8192, 8192, 8192, /*X86VTLists+*/71 },    // TILE
  // Mode = 1 (X86_64)
  { 8, 8, 8, /*X86VTLists+*/0 },    // GR8
  { 8, 8, 8, /*X86VTLists+*/0 },    // GRH8
  { 8, 8, 8, /*X86VTLists+*/0 },    // GR8_NOREX2
  { 8, 8, 8, /*X86VTLists+*/0 },    // GR8_NOREX
  { 8, 8, 8, /*X86VTLists+*/0 },    // GR8_ABCD_H
  { 8, 8, 8, /*X86VTLists+*/0 },    // GR8_ABCD_L
  { 16, 16, 16, /*X86VTLists+*/2 },    // GRH16
  { 16, 16, 16, /*X86VTLists+*/2 },    // GR16
  { 16, 16, 16, /*X86VTLists+*/2 },    // GR16_NOREX2
  { 16, 16, 16, /*X86VTLists+*/2 },    // GR16_NOREX
  { 16, 16, 16, /*X86VTLists+*/28 },    // VK1
  { 16, 16, 16, /*X86VTLists+*/36 },    // VK16
  { 16, 16, 16, /*X86VTLists+*/30 },    // VK2
  { 16, 16, 16, /*X86VTLists+*/32 },    // VK4
  { 16, 16, 16, /*X86VTLists+*/34 },    // VK8
  { 16, 16, 16, /*X86VTLists+*/36 },    // VK16WM
  { 16, 16, 16, /*X86VTLists+*/28 },    // VK1WM
  { 16, 16, 16, /*X86VTLists+*/30 },    // VK2WM
  { 16, 16, 16, /*X86VTLists+*/32 },    // VK4WM
  { 16, 16, 16, /*X86VTLists+*/34 },    // VK8WM
  { 16, 16, 16, /*X86VTLists+*/2 },    // SEGMENT_REG
  { 16, 16, 16, /*X86VTLists+*/2 },    // GR16_ABCD
  { 16, 16, 16, /*X86VTLists+*/2 },    // FPCCR
  { 32, 32, 16, /*X86VTLists+*/8 },    // FR16X
  { 32, 32, 16, /*X86VTLists+*/8 },    // FR16
  { 32, 32, 16, /*X86VTLists+*/69 },    // VK16PAIR
  { 32, 32, 16, /*X86VTLists+*/69 },    // VK1PAIR
  { 32, 32, 16, /*X86VTLists+*/69 },    // VK2PAIR
  { 32, 32, 16, /*X86VTLists+*/69 },    // VK4PAIR
  { 32, 32, 16, /*X86VTLists+*/69 },    // VK8PAIR
  { 32, 32, 16, /*X86VTLists+*/69 },    // VK1PAIR_with_sub_mask_0_in_VK1WM
  { 32, 32, 32, /*X86VTLists+*/4 },    // LOW32_ADDR_ACCESS_RBP
  { 32, 32, 32, /*X86VTLists+*/4 },    // LOW32_ADDR_ACCESS
  { 32, 32, 32, /*X86VTLists+*/4 },    // LOW32_ADDR_ACCESS_RBP_with_sub_8bit
  { 32, 32, 32, /*X86VTLists+*/12 },    // FR32X
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_NOSP
  { 32, 32, 32, /*X86VTLists+*/4 },    // LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX2
  { 32, 32, 32, /*X86VTLists+*/4 },    // DEBUG_REG
  { 32, 32, 32, /*X86VTLists+*/12 },    // FR32
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_NOREX2
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_NOREX2_NOSP
  { 32, 32, 32, /*X86VTLists+*/4 },    // LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_NOREX
  { 32, 32, 32, /*X86VTLists+*/38 },    // VK32
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_NOREX_NOSP
  { 32, 32, 32, /*X86VTLists+*/12 },    // RFP32
  { 32, 32, 32, /*X86VTLists+*/38 },    // VK32WM
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_ABCD
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_TC
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_ABCD_and_GR32_TC
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_AD
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_ArgRef
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_BPSP
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_BSI
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_CB
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_DC
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_DIBP
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_SIDI
  { 32, 32, 32, /*X86VTLists+*/4 },    // LOW32_ADDR_ACCESS_RBP_with_sub_32bit
  { 32, 32, 32, /*X86VTLists+*/4 },    // CCR
  { 32, 32, 32, /*X86VTLists+*/4 },    // DFCCR
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_ABCD_and_GR32_BSI
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_AD_and_GR32_ArgRef
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_ArgRef_and_GR32_CB
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_BPSP_and_GR32_DIBP
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_BPSP_and_GR32_TC
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_BSI_and_GR32_SIDI
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_DIBP_and_GR32_SIDI
  { 32, 32, 32, /*X86VTLists+*/4 },    // LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit
  { 32, 32, 32, /*X86VTLists+*/4 },    // LOW32_ADDR_ACCESS_with_sub_32bit
  { 64, 64, 32, /*X86VTLists+*/14 },    // RFP64
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64
  { 64, 64, 64, /*X86VTLists+*/14 },    // FR64X
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_8bit
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_NOSP
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_NOREX2
  { 64, 64, 64, /*X86VTLists+*/6 },    // CONTROL_REG
  { 64, 64, 64, /*X86VTLists+*/14 },    // FR64
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_16bit_in_GR16_NOREX2
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_NOREX2_NOSP
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64PLTSafe
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_TC
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_NOREX
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_TCW64
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_TC_with_sub_8bit
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_NOREX2_NOSP_and_GR64_TC
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_TCW64_with_sub_8bit
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_TC_and_GR64_TCW64
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_16bit_in_GR16_NOREX
  { 64, 64, 64, /*X86VTLists+*/40 },    // VK64
  { 64, 64, 64, /*X86VTLists+*/67 },    // VR64
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64PLTSafe_and_GR64_TC
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_NOREX2_NOSP_and_GR64_TCW64
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_NOREX_NOSP
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_NOREX_and_GR64_TC
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_TCW64_and_GR64_TC_with_sub_8bit
  { 64, 64, 64, /*X86VTLists+*/40 },    // VK64WM
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_TC_and_GR64_NOREX2_NOSP_and_GR64_TCW64
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREX
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64PLTSafe_and_GR64_TCW64
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_NOREX_and_GR64PLTSafe_and_GR64_TC
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_NOREX_and_GR64_TCW64
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_ABCD
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_TC
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_AD
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_ArgRef
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_and_LOW32_ADDR_ACCESS_RBP
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_ArgRef
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_BPSP
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_BSI
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_CB
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_DIBP
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_SIDI
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_A
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_ArgRef_and_GR64_TC
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_and_LOW32_ADDR_ACCESS
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSI
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_AD_and_GR32_ArgRef
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_ArgRef_and_GR32_CB
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBP
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TC
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDI
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDI
  { 80, 80, 32, /*X86VTLists+*/10 },    // RST
  { 80, 80, 32, /*X86VTLists+*/16 },    // RFP80
  { 80, 80, 32, /*X86VTLists+*/16 },    // RFP80_7
  { 128, 128, 128, /*X86VTLists+*/18 },    // VR128X
  { 128, 128, 128, /*X86VTLists+*/18 },    // VR128
  { 256, 256, 256, /*X86VTLists+*/42 },    // VR256X
  { 256, 256, 256, /*X86VTLists+*/42 },    // VR256
  { 512, 512, 512, /*X86VTLists+*/51 },    // VR512
  { 512, 512, 512, /*X86VTLists+*/60 },    // VR512_0_15
  { 8192, 8192, 8192, /*X86VTLists+*/71 },    // TILE
  // Mode = 2 (X86_64_X32)
  { 8, 8, 8, /*X86VTLists+*/0 },    // GR8
  { 8, 8, 8, /*X86VTLists+*/0 },    // GRH8
  { 8, 8, 8, /*X86VTLists+*/0 },    // GR8_NOREX2
  { 8, 8, 8, /*X86VTLists+*/0 },    // GR8_NOREX
  { 8, 8, 8, /*X86VTLists+*/0 },    // GR8_ABCD_H
  { 8, 8, 8, /*X86VTLists+*/0 },    // GR8_ABCD_L
  { 16, 16, 16, /*X86VTLists+*/2 },    // GRH16
  { 16, 16, 16, /*X86VTLists+*/2 },    // GR16
  { 16, 16, 16, /*X86VTLists+*/2 },    // GR16_NOREX2
  { 16, 16, 16, /*X86VTLists+*/2 },    // GR16_NOREX
  { 16, 16, 16, /*X86VTLists+*/28 },    // VK1
  { 16, 16, 16, /*X86VTLists+*/36 },    // VK16
  { 16, 16, 16, /*X86VTLists+*/30 },    // VK2
  { 16, 16, 16, /*X86VTLists+*/32 },    // VK4
  { 16, 16, 16, /*X86VTLists+*/34 },    // VK8
  { 16, 16, 16, /*X86VTLists+*/36 },    // VK16WM
  { 16, 16, 16, /*X86VTLists+*/28 },    // VK1WM
  { 16, 16, 16, /*X86VTLists+*/30 },    // VK2WM
  { 16, 16, 16, /*X86VTLists+*/32 },    // VK4WM
  { 16, 16, 16, /*X86VTLists+*/34 },    // VK8WM
  { 16, 16, 16, /*X86VTLists+*/2 },    // SEGMENT_REG
  { 16, 16, 16, /*X86VTLists+*/2 },    // GR16_ABCD
  { 16, 16, 16, /*X86VTLists+*/2 },    // FPCCR
  { 32, 32, 16, /*X86VTLists+*/8 },    // FR16X
  { 32, 32, 16, /*X86VTLists+*/8 },    // FR16
  { 32, 32, 16, /*X86VTLists+*/69 },    // VK16PAIR
  { 32, 32, 16, /*X86VTLists+*/69 },    // VK1PAIR
  { 32, 32, 16, /*X86VTLists+*/69 },    // VK2PAIR
  { 32, 32, 16, /*X86VTLists+*/69 },    // VK4PAIR
  { 32, 32, 16, /*X86VTLists+*/69 },    // VK8PAIR
  { 32, 32, 16, /*X86VTLists+*/69 },    // VK1PAIR_with_sub_mask_0_in_VK1WM
  { 32, 32, 32, /*X86VTLists+*/4 },    // LOW32_ADDR_ACCESS_RBP
  { 32, 32, 32, /*X86VTLists+*/4 },    // LOW32_ADDR_ACCESS
  { 32, 32, 32, /*X86VTLists+*/4 },    // LOW32_ADDR_ACCESS_RBP_with_sub_8bit
  { 32, 32, 32, /*X86VTLists+*/12 },    // FR32X
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_NOSP
  { 32, 32, 32, /*X86VTLists+*/4 },    // LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX2
  { 32, 32, 32, /*X86VTLists+*/4 },    // DEBUG_REG
  { 32, 32, 32, /*X86VTLists+*/12 },    // FR32
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_NOREX2
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_NOREX2_NOSP
  { 32, 32, 32, /*X86VTLists+*/4 },    // LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_NOREX
  { 32, 32, 32, /*X86VTLists+*/38 },    // VK32
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_NOREX_NOSP
  { 32, 32, 32, /*X86VTLists+*/12 },    // RFP32
  { 32, 32, 32, /*X86VTLists+*/38 },    // VK32WM
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_ABCD
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_TC
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_ABCD_and_GR32_TC
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_AD
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_ArgRef
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_BPSP
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_BSI
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_CB
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_DC
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_DIBP
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_SIDI
  { 32, 32, 32, /*X86VTLists+*/4 },    // LOW32_ADDR_ACCESS_RBP_with_sub_32bit
  { 32, 32, 32, /*X86VTLists+*/4 },    // CCR
  { 32, 32, 32, /*X86VTLists+*/4 },    // DFCCR
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_ABCD_and_GR32_BSI
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_AD_and_GR32_ArgRef
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_ArgRef_and_GR32_CB
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_BPSP_and_GR32_DIBP
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_BPSP_and_GR32_TC
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_BSI_and_GR32_SIDI
  { 32, 32, 32, /*X86VTLists+*/4 },    // GR32_DIBP_and_GR32_SIDI
  { 32, 32, 32, /*X86VTLists+*/4 },    // LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit
  { 32, 32, 32, /*X86VTLists+*/4 },    // LOW32_ADDR_ACCESS_with_sub_32bit
  { 64, 64, 32, /*X86VTLists+*/14 },    // RFP64
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64
  { 64, 64, 64, /*X86VTLists+*/14 },    // FR64X
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_8bit
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_NOSP
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_NOREX2
  { 64, 64, 64, /*X86VTLists+*/6 },    // CONTROL_REG
  { 64, 64, 64, /*X86VTLists+*/14 },    // FR64
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_16bit_in_GR16_NOREX2
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_NOREX2_NOSP
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64PLTSafe
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_TC
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_NOREX
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_TCW64
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_TC_with_sub_8bit
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_NOREX2_NOSP_and_GR64_TC
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_TCW64_with_sub_8bit
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_TC_and_GR64_TCW64
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_16bit_in_GR16_NOREX
  { 64, 64, 64, /*X86VTLists+*/40 },    // VK64
  { 64, 64, 64, /*X86VTLists+*/67 },    // VR64
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64PLTSafe_and_GR64_TC
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_NOREX2_NOSP_and_GR64_TCW64
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_NOREX_NOSP
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_NOREX_and_GR64_TC
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_TCW64_and_GR64_TC_with_sub_8bit
  { 64, 64, 64, /*X86VTLists+*/40 },    // VK64WM
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_TC_and_GR64_NOREX2_NOSP_and_GR64_TCW64
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREX
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64PLTSafe_and_GR64_TCW64
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_NOREX_and_GR64PLTSafe_and_GR64_TC
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_NOREX_and_GR64_TCW64
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_ABCD
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_TC
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_AD
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_ArgRef
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_and_LOW32_ADDR_ACCESS_RBP
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_ArgRef
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_BPSP
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_BSI
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_CB
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_DIBP
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_SIDI
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_A
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_ArgRef_and_GR64_TC
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_and_LOW32_ADDR_ACCESS
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSI
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_AD_and_GR32_ArgRef
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_ArgRef_and_GR32_CB
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBP
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TC
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDI
  { 64, 64, 64, /*X86VTLists+*/6 },    // GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDI
  { 80, 80, 32, /*X86VTLists+*/10 },    // RST
  { 80, 80, 32, /*X86VTLists+*/16 },    // RFP80
  { 80, 80, 32, /*X86VTLists+*/16 },    // RFP80_7
  { 128, 128, 128, /*X86VTLists+*/18 },    // VR128X
  { 128, 128, 128, /*X86VTLists+*/18 },    // VR128
  { 256, 256, 256, /*X86VTLists+*/42 },    // VR256X
  { 256, 256, 256, /*X86VTLists+*/42 },    // VR256
  { 512, 512, 512, /*X86VTLists+*/51 },    // VR512
  { 512, 512, 512, /*X86VTLists+*/60 },    // VR512_0_15
  { 8192, 8192, 8192, /*X86VTLists+*/71 },    // TILE
};

static inline unsigned GR8AltOrderSelect(const MachineFunction &MF, bool Rev) {
    return MF.getSubtarget<X86Subtarget>().is64Bit();
  }

static ArrayRef<MCPhysReg> GR8GetRawAllocationOrder(const TargetRegisterClass &RC, const MachineFunction &MF, bool Rev) {
  static const MCPhysReg AltOrder1[] = { X86::AL, X86::CL, X86::DL, X86::BL, X86::SIL, X86::DIL, X86::BPL, X86::SPL, X86::R8B, X86::R9B, X86::R10B, X86::R11B, X86::R16B, X86::R17B, X86::R18B, X86::R19B, X86::R22B, X86::R23B, X86::R24B, X86::R25B, X86::R26B, X86::R27B, X86::R14B, X86::R15B, X86::R12B, X86::R13B, X86::R20B, X86::R21B, X86::R28B, X86::R29B, X86::R30B, X86::R31B };
  const ArrayRef<MCPhysReg> Order[] = {
    RC.getRegisters(),
    ArrayRef(AltOrder1)
  };
  const unsigned Select = GR8AltOrderSelect(MF, Rev);
  assert(Select < 2);
  return Order[Select];
}

static inline unsigned GR8_NOREX2AltOrderSelect(const MachineFunction &MF, bool Rev) {
    return MF.getSubtarget<X86Subtarget>().is64Bit();
  }

static ArrayRef<MCPhysReg> GR8_NOREX2GetRawAllocationOrder(const TargetRegisterClass &RC, const MachineFunction &MF, bool Rev) {
  static const MCPhysReg AltOrder1[] = { X86::AL, X86::CL, X86::DL, X86::BL, X86::SIL, X86::DIL, X86::BPL, X86::SPL, X86::R8B, X86::R9B, X86::R10B, X86::R11B, X86::R14B, X86::R15B, X86::R12B, X86::R13B };
  const ArrayRef<MCPhysReg> Order[] = {
    RC.getRegisters(),
    ArrayRef(AltOrder1)
  };
  const unsigned Select = GR8_NOREX2AltOrderSelect(MF, Rev);
  assert(Select < 2);
  return Order[Select];
}

static inline unsigned GR8_NOREXAltOrderSelect(const MachineFunction &MF, bool Rev) {
    return MF.getSubtarget<X86Subtarget>().is64Bit();
  }

static ArrayRef<MCPhysReg> GR8_NOREXGetRawAllocationOrder(const TargetRegisterClass &RC, const MachineFunction &MF, bool Rev) {
  static const MCPhysReg AltOrder1[] = { X86::AL, X86::CL, X86::DL, X86::BL };
  const ArrayRef<MCPhysReg> Order[] = {
    RC.getRegisters(),
    ArrayRef(AltOrder1)
  };
  const unsigned Select = GR8_NOREXAltOrderSelect(MF, Rev);
  assert(Select < 2);
  return Order[Select];
}

static inline unsigned FR32XAltOrderSelect(const MachineFunction &MF, bool Rev) {
    return Rev;
  }

static ArrayRef<MCPhysReg> FR32XGetRawAllocationOrder(const TargetRegisterClass &RC, const MachineFunction &MF, bool Rev) {
  static const MCPhysReg AltOrder1[] = { X86::XMM16, X86::XMM17, X86::XMM18, X86::XMM19, X86::XMM20, X86::XMM21, X86::XMM22, X86::XMM23, X86::XMM24, X86::XMM25, X86::XMM26, X86::XMM27, X86::XMM28, X86::XMM29, X86::XMM30, X86::XMM31, X86::XMM0, X86::XMM1, X86::XMM2, X86::XMM3, X86::XMM4, X86::XMM5, X86::XMM6, X86::XMM7, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15 };
  const ArrayRef<MCPhysReg> Order[] = {
    RC.getRegisters(),
    ArrayRef(AltOrder1)
  };
  const unsigned Select = FR32XAltOrderSelect(MF, Rev);
  assert(Select < 2);
  return Order[Select];
}

static inline unsigned FR64XAltOrderSelect(const MachineFunction &MF, bool Rev) {
    return Rev;
  }

static ArrayRef<MCPhysReg> FR64XGetRawAllocationOrder(const TargetRegisterClass &RC, const MachineFunction &MF, bool Rev) {
  static const MCPhysReg AltOrder1[] = { X86::XMM16, X86::XMM17, X86::XMM18, X86::XMM19, X86::XMM20, X86::XMM21, X86::XMM22, X86::XMM23, X86::XMM24, X86::XMM25, X86::XMM26, X86::XMM27, X86::XMM28, X86::XMM29, X86::XMM30, X86::XMM31, X86::XMM0, X86::XMM1, X86::XMM2, X86::XMM3, X86::XMM4, X86::XMM5, X86::XMM6, X86::XMM7, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15 };
  const ArrayRef<MCPhysReg> Order[] = {
    RC.getRegisters(),
    ArrayRef(AltOrder1)
  };
  const unsigned Select = FR64XAltOrderSelect(MF, Rev);
  assert(Select < 2);
  return Order[Select];
}

static inline unsigned VR128XAltOrderSelect(const MachineFunction &MF, bool Rev) {
    return Rev;
  }

static ArrayRef<MCPhysReg> VR128XGetRawAllocationOrder(const TargetRegisterClass &RC, const MachineFunction &MF, bool Rev) {
  static const MCPhysReg AltOrder1[] = { X86::XMM16, X86::XMM17, X86::XMM18, X86::XMM19, X86::XMM20, X86::XMM21, X86::XMM22, X86::XMM23, X86::XMM24, X86::XMM25, X86::XMM26, X86::XMM27, X86::XMM28, X86::XMM29, X86::XMM30, X86::XMM31, X86::XMM0, X86::XMM1, X86::XMM2, X86::XMM3, X86::XMM4, X86::XMM5, X86::XMM6, X86::XMM7, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15 };
  const ArrayRef<MCPhysReg> Order[] = {
    RC.getRegisters(),
    ArrayRef(AltOrder1)
  };
  const unsigned Select = VR128XAltOrderSelect(MF, Rev);
  assert(Select < 2);
  return Order[Select];
}

static inline unsigned VR256XAltOrderSelect(const MachineFunction &MF, bool Rev) {
    return Rev;
  }

static ArrayRef<MCPhysReg> VR256XGetRawAllocationOrder(const TargetRegisterClass &RC, const MachineFunction &MF, bool Rev) {
  static const MCPhysReg AltOrder1[] = { X86::YMM16, X86::YMM17, X86::YMM18, X86::YMM19, X86::YMM20, X86::YMM21, X86::YMM22, X86::YMM23, X86::YMM24, X86::YMM25, X86::YMM26, X86::YMM27, X86::YMM28, X86::YMM29, X86::YMM30, X86::YMM31, X86::YMM0, X86::YMM1, X86::YMM2, X86::YMM3, X86::YMM4, X86::YMM5, X86::YMM6, X86::YMM7, X86::YMM8, X86::YMM9, X86::YMM10, X86::YMM11, X86::YMM12, X86::YMM13, X86::YMM14, X86::YMM15 };
  const ArrayRef<MCPhysReg> Order[] = {
    RC.getRegisters(),
    ArrayRef(AltOrder1)
  };
  const unsigned Select = VR256XAltOrderSelect(MF, Rev);
  assert(Select < 2);
  return Order[Select];
}

static const uint8_t X86CostPerUseTable[] = { 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };


static const bool X86InAllocatableClassTable[] = { 
false, true, true, true, true, true, true, false, true, true, true, true, true, true, false, true, true, false, true, true, true, true, true, true, true, true, true, true, false, false, false, true, true, true, false, false, true, false, true, false, false, false, false, false, false, false, false, false, false, false, false, true, true, true, true, true, true, false, true, false, true, true, true, false, true, true, false, true, true, false, false, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, false, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, false, false, false, false, false, false, false, false, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, false, false, false, false, false, false, false, false, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, false, false, false, false, false, false, false, false, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, false, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, };


static const TargetRegisterInfoDesc X86RegInfoDesc = { // Extra Descriptors
X86CostPerUseTable, 1, X86InAllocatableClassTable};

unsigned X86GenRegisterInfo::composeSubRegIndicesImpl(unsigned IdxA, unsigned IdxB) const {
  static const uint8_t Rows[1][10] = {
    { X86::sub_8bit, X86::sub_8bit_hi, X86::sub_8bit_hi_phony, X86::sub_16bit, X86::sub_16bit_hi, 0, 0, 0, X86::sub_xmm, 0, },
  };

  --IdxA; assert(IdxA < 10); (void) IdxA;
  --IdxB; assert(IdxB < 10);
  return Rows[0][IdxB];
}

unsigned X86GenRegisterInfo::reverseComposeSubRegIndicesImpl(unsigned IdxA, unsigned IdxB) const {
  static const uint8_t Table[10][10] = {
    { X86::sub_8bit, X86::sub_8bit_hi, X86::sub_8bit_hi_phony, X86::sub_16bit, X86::sub_16bit_hi, 0, 0, 0, X86::sub_xmm, 0, },
    { X86::sub_8bit, X86::sub_8bit_hi, X86::sub_8bit_hi_phony, X86::sub_16bit, X86::sub_16bit_hi, 0, 0, 0, X86::sub_xmm, 0, },
    { X86::sub_8bit, X86::sub_8bit_hi, X86::sub_8bit_hi_phony, X86::sub_16bit, X86::sub_16bit_hi, 0, 0, 0, X86::sub_xmm, 0, },
    { X86::sub_8bit, X86::sub_8bit_hi, X86::sub_8bit_hi_phony, X86::sub_16bit, X86::sub_16bit_hi, 0, 0, 0, X86::sub_xmm, 0, },
    { X86::sub_8bit, X86::sub_8bit_hi, X86::sub_8bit_hi_phony, X86::sub_16bit, X86::sub_16bit_hi, 0, 0, 0, X86::sub_xmm, 0, },
    { X86::sub_8bit, X86::sub_8bit_hi, X86::sub_8bit_hi_phony, X86::sub_16bit, X86::sub_16bit_hi, 0, 0, 0, X86::sub_xmm, 0, },
    { X86::sub_8bit, X86::sub_8bit_hi, X86::sub_8bit_hi_phony, X86::sub_16bit, X86::sub_16bit_hi, 0, 0, 0, X86::sub_xmm, 0, },
    { X86::sub_8bit, X86::sub_8bit_hi, X86::sub_8bit_hi_phony, X86::sub_16bit, X86::sub_16bit_hi, 0, 0, 0, X86::sub_xmm, 0, },
    { X86::sub_8bit, X86::sub_8bit_hi, X86::sub_8bit_hi_phony, X86::sub_16bit, X86::sub_16bit_hi, 0, 0, 0, X86::sub_xmm, 0, },
    { X86::sub_8bit, X86::sub_8bit_hi, X86::sub_8bit_hi_phony, X86::sub_16bit, X86::sub_16bit_hi, 0, 0, 0, X86::sub_xmm, 0, },
  };

  --IdxA; assert(IdxA < 10);
  --IdxB; assert(IdxB < 10);
  return Table[IdxA][IdxB];
  }

  struct MaskRolOp {
    LaneBitmask Mask;
    uint8_t  RotateLeft;
  };
  static const MaskRolOp LaneMaskComposeSequences[] = {
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  0 }, { LaneBitmask::getNone(), 0 },   // Sequence 0
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  1 }, { LaneBitmask::getNone(), 0 },   // Sequence 2
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  2 }, { LaneBitmask::getNone(), 0 },   // Sequence 4
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  3 }, { LaneBitmask::getNone(), 0 },   // Sequence 6
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  4 }, { LaneBitmask::getNone(), 0 },   // Sequence 8
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  5 }, { LaneBitmask::getNone(), 0 },   // Sequence 10
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  6 }, { LaneBitmask::getNone(), 0 }  // Sequence 12
  };
  static const uint8_t CompositeSequences[] = {
    0, // to sub_8bit
    2, // to sub_8bit_hi
    4, // to sub_8bit_hi_phony
    0, // to sub_16bit
    6, // to sub_16bit_hi
    0, // to sub_32bit
    8, // to sub_mask_0
    10, // to sub_mask_1
    12, // to sub_xmm
    0 // to sub_ymm
  };

LaneBitmask X86GenRegisterInfo::composeSubRegIndexLaneMaskImpl(unsigned IdxA, LaneBitmask LaneMask) const {
  --IdxA; assert(IdxA < 10 && "Subregister index out of bounds");
  LaneBitmask Result;
  for (const MaskRolOp *Ops =
       &LaneMaskComposeSequences[CompositeSequences[IdxA]];
       Ops->Mask.any(); ++Ops) {
    LaneBitmask::Type M = LaneMask.getAsInteger() & Ops->Mask.getAsInteger();
    if (unsigned S = Ops->RotateLeft)
      Result |= LaneBitmask((M << S) | (M >> (LaneBitmask::BitWidth - S)));
    else
      Result |= LaneBitmask(M);
  }
  return Result;
}

LaneBitmask X86GenRegisterInfo::reverseComposeSubRegIndexLaneMaskImpl(unsigned IdxA,  LaneBitmask LaneMask) const {
  LaneMask &= getSubRegIndexLaneMask(IdxA);
  --IdxA; assert(IdxA < 10 && "Subregister index out of bounds");
  LaneBitmask Result;
  for (const MaskRolOp *Ops =
       &LaneMaskComposeSequences[CompositeSequences[IdxA]];
       Ops->Mask.any(); ++Ops) {
    LaneBitmask::Type M = LaneMask.getAsInteger();
    if (unsigned S = Ops->RotateLeft)
      Result |= LaneBitmask((M >> S) | (M << (LaneBitmask::BitWidth - S)));
    else
      Result |= LaneBitmask(M);
  }
  return Result;
}

const TargetRegisterClass *X86GenRegisterInfo::getSubClassWithSubReg(const TargetRegisterClass *RC, unsigned Idx) const {
  static constexpr uint8_t Table[135][10] = {
    {	// GR8
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GRH8
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR8_NOREX2
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR8_NOREX
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR8_ABCD_H
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR8_ABCD_L
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GRH16
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR16
      8,	// sub_8bit -> GR16
      22,	// sub_8bit_hi -> GR16_ABCD
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR16_NOREX2
      9,	// sub_8bit -> GR16_NOREX2
      22,	// sub_8bit_hi -> GR16_ABCD
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR16_NOREX
      10,	// sub_8bit -> GR16_NOREX
      22,	// sub_8bit_hi -> GR16_ABCD
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK1
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK16
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK2
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK4
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK8
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK16WM
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK1WM
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK2WM
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK4WM
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK8WM
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// SEGMENT_REG
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR16_ABCD
      22,	// sub_8bit -> GR16_ABCD
      22,	// sub_8bit_hi -> GR16_ABCD
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// FPCCR
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// FR16X
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// FR16
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK16PAIR
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      26,	// sub_mask_0 -> VK16PAIR
      26,	// sub_mask_1 -> VK16PAIR
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK1PAIR
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      27,	// sub_mask_0 -> VK1PAIR
      27,	// sub_mask_1 -> VK1PAIR
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK2PAIR
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      28,	// sub_mask_0 -> VK2PAIR
      28,	// sub_mask_1 -> VK2PAIR
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK4PAIR
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      29,	// sub_mask_0 -> VK4PAIR
      29,	// sub_mask_1 -> VK4PAIR
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK8PAIR
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      30,	// sub_mask_0 -> VK8PAIR
      30,	// sub_mask_1 -> VK8PAIR
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK1PAIR_with_sub_mask_0_in_VK1WM
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      31,	// sub_mask_0 -> VK1PAIR_with_sub_mask_0_in_VK1WM
      31,	// sub_mask_1 -> VK1PAIR_with_sub_mask_0_in_VK1WM
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// LOW32_ADDR_ACCESS_RBP
      34,	// sub_8bit -> LOW32_ADDR_ACCESS_RBP_with_sub_8bit
      49,	// sub_8bit_hi -> GR32_ABCD
      0,	// sub_8bit_hi_phony
      32,	// sub_16bit -> LOW32_ADDR_ACCESS_RBP
      32,	// sub_16bit_hi -> LOW32_ADDR_ACCESS_RBP
      60,	// sub_32bit -> LOW32_ADDR_ACCESS_RBP_with_sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// LOW32_ADDR_ACCESS
      36,	// sub_8bit -> GR32
      49,	// sub_8bit_hi -> GR32_ABCD
      0,	// sub_8bit_hi_phony
      33,	// sub_16bit -> LOW32_ADDR_ACCESS
      33,	// sub_16bit_hi -> LOW32_ADDR_ACCESS
      71,	// sub_32bit -> LOW32_ADDR_ACCESS_with_sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// LOW32_ADDR_ACCESS_RBP_with_sub_8bit
      34,	// sub_8bit -> LOW32_ADDR_ACCESS_RBP_with_sub_8bit
      49,	// sub_8bit_hi -> GR32_ABCD
      0,	// sub_8bit_hi_phony
      34,	// sub_16bit -> LOW32_ADDR_ACCESS_RBP_with_sub_8bit
      34,	// sub_16bit_hi -> LOW32_ADDR_ACCESS_RBP_with_sub_8bit
      70,	// sub_32bit -> LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// FR32X
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32
      36,	// sub_8bit -> GR32
      49,	// sub_8bit_hi -> GR32_ABCD
      0,	// sub_8bit_hi_phony
      36,	// sub_16bit -> GR32
      36,	// sub_16bit_hi -> GR32
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_NOSP
      37,	// sub_8bit -> GR32_NOSP
      49,	// sub_8bit_hi -> GR32_ABCD
      0,	// sub_8bit_hi_phony
      37,	// sub_16bit -> GR32_NOSP
      37,	// sub_16bit_hi -> GR32_NOSP
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX2
      38,	// sub_8bit -> LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX2
      49,	// sub_8bit_hi -> GR32_ABCD
      0,	// sub_8bit_hi_phony
      38,	// sub_16bit -> LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX2
      38,	// sub_16bit_hi -> LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX2
      70,	// sub_32bit -> LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// DEBUG_REG
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// FR32
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_NOREX2
      41,	// sub_8bit -> GR32_NOREX2
      49,	// sub_8bit_hi -> GR32_ABCD
      0,	// sub_8bit_hi_phony
      41,	// sub_16bit -> GR32_NOREX2
      41,	// sub_16bit_hi -> GR32_NOREX2
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_NOREX2_NOSP
      42,	// sub_8bit -> GR32_NOREX2_NOSP
      49,	// sub_8bit_hi -> GR32_ABCD
      0,	// sub_8bit_hi_phony
      42,	// sub_16bit -> GR32_NOREX2_NOSP
      42,	// sub_16bit_hi -> GR32_NOREX2_NOSP
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX
      43,	// sub_8bit -> LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX
      49,	// sub_8bit_hi -> GR32_ABCD
      0,	// sub_8bit_hi_phony
      43,	// sub_16bit -> LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX
      43,	// sub_16bit_hi -> LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX
      70,	// sub_32bit -> LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_NOREX
      44,	// sub_8bit -> GR32_NOREX
      49,	// sub_8bit_hi -> GR32_ABCD
      0,	// sub_8bit_hi_phony
      44,	// sub_16bit -> GR32_NOREX
      44,	// sub_16bit_hi -> GR32_NOREX
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK32
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_NOREX_NOSP
      46,	// sub_8bit -> GR32_NOREX_NOSP
      49,	// sub_8bit_hi -> GR32_ABCD
      0,	// sub_8bit_hi_phony
      46,	// sub_16bit -> GR32_NOREX_NOSP
      46,	// sub_16bit_hi -> GR32_NOREX_NOSP
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// RFP32
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK32WM
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_ABCD
      49,	// sub_8bit -> GR32_ABCD
      49,	// sub_8bit_hi -> GR32_ABCD
      0,	// sub_8bit_hi_phony
      49,	// sub_16bit -> GR32_ABCD
      49,	// sub_16bit_hi -> GR32_ABCD
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_TC
      50,	// sub_8bit -> GR32_TC
      51,	// sub_8bit_hi -> GR32_ABCD_and_GR32_TC
      0,	// sub_8bit_hi_phony
      50,	// sub_16bit -> GR32_TC
      50,	// sub_16bit_hi -> GR32_TC
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_ABCD_and_GR32_TC
      51,	// sub_8bit -> GR32_ABCD_and_GR32_TC
      51,	// sub_8bit_hi -> GR32_ABCD_and_GR32_TC
      0,	// sub_8bit_hi_phony
      51,	// sub_16bit -> GR32_ABCD_and_GR32_TC
      51,	// sub_16bit_hi -> GR32_ABCD_and_GR32_TC
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_AD
      52,	// sub_8bit -> GR32_AD
      52,	// sub_8bit_hi -> GR32_AD
      0,	// sub_8bit_hi_phony
      52,	// sub_16bit -> GR32_AD
      52,	// sub_16bit_hi -> GR32_AD
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_ArgRef
      53,	// sub_8bit -> GR32_ArgRef
      53,	// sub_8bit_hi -> GR32_ArgRef
      0,	// sub_8bit_hi_phony
      53,	// sub_16bit -> GR32_ArgRef
      53,	// sub_16bit_hi -> GR32_ArgRef
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_BPSP
      54,	// sub_8bit -> GR32_BPSP
      0,	// sub_8bit_hi
      54,	// sub_8bit_hi_phony -> GR32_BPSP
      54,	// sub_16bit -> GR32_BPSP
      54,	// sub_16bit_hi -> GR32_BPSP
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_BSI
      55,	// sub_8bit -> GR32_BSI
      63,	// sub_8bit_hi -> GR32_ABCD_and_GR32_BSI
      0,	// sub_8bit_hi_phony
      55,	// sub_16bit -> GR32_BSI
      55,	// sub_16bit_hi -> GR32_BSI
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_CB
      56,	// sub_8bit -> GR32_CB
      56,	// sub_8bit_hi -> GR32_CB
      0,	// sub_8bit_hi_phony
      56,	// sub_16bit -> GR32_CB
      56,	// sub_16bit_hi -> GR32_CB
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_DC
      57,	// sub_8bit -> GR32_DC
      57,	// sub_8bit_hi -> GR32_DC
      0,	// sub_8bit_hi_phony
      57,	// sub_16bit -> GR32_DC
      57,	// sub_16bit_hi -> GR32_DC
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_DIBP
      58,	// sub_8bit -> GR32_DIBP
      0,	// sub_8bit_hi
      58,	// sub_8bit_hi_phony -> GR32_DIBP
      58,	// sub_16bit -> GR32_DIBP
      58,	// sub_16bit_hi -> GR32_DIBP
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_SIDI
      59,	// sub_8bit -> GR32_SIDI
      0,	// sub_8bit_hi
      59,	// sub_8bit_hi_phony -> GR32_SIDI
      59,	// sub_16bit -> GR32_SIDI
      59,	// sub_16bit_hi -> GR32_SIDI
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// LOW32_ADDR_ACCESS_RBP_with_sub_32bit
      70,	// sub_8bit -> LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      60,	// sub_16bit -> LOW32_ADDR_ACCESS_RBP_with_sub_32bit
      60,	// sub_16bit_hi -> LOW32_ADDR_ACCESS_RBP_with_sub_32bit
      60,	// sub_32bit -> LOW32_ADDR_ACCESS_RBP_with_sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// CCR
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// DFCCR
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_ABCD_and_GR32_BSI
      63,	// sub_8bit -> GR32_ABCD_and_GR32_BSI
      63,	// sub_8bit_hi -> GR32_ABCD_and_GR32_BSI
      0,	// sub_8bit_hi_phony
      63,	// sub_16bit -> GR32_ABCD_and_GR32_BSI
      63,	// sub_16bit_hi -> GR32_ABCD_and_GR32_BSI
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_AD_and_GR32_ArgRef
      64,	// sub_8bit -> GR32_AD_and_GR32_ArgRef
      64,	// sub_8bit_hi -> GR32_AD_and_GR32_ArgRef
      0,	// sub_8bit_hi_phony
      64,	// sub_16bit -> GR32_AD_and_GR32_ArgRef
      64,	// sub_16bit_hi -> GR32_AD_and_GR32_ArgRef
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_ArgRef_and_GR32_CB
      65,	// sub_8bit -> GR32_ArgRef_and_GR32_CB
      65,	// sub_8bit_hi -> GR32_ArgRef_and_GR32_CB
      0,	// sub_8bit_hi_phony
      65,	// sub_16bit -> GR32_ArgRef_and_GR32_CB
      65,	// sub_16bit_hi -> GR32_ArgRef_and_GR32_CB
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_BPSP_and_GR32_DIBP
      66,	// sub_8bit -> GR32_BPSP_and_GR32_DIBP
      0,	// sub_8bit_hi
      66,	// sub_8bit_hi_phony -> GR32_BPSP_and_GR32_DIBP
      66,	// sub_16bit -> GR32_BPSP_and_GR32_DIBP
      66,	// sub_16bit_hi -> GR32_BPSP_and_GR32_DIBP
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_BPSP_and_GR32_TC
      67,	// sub_8bit -> GR32_BPSP_and_GR32_TC
      0,	// sub_8bit_hi
      67,	// sub_8bit_hi_phony -> GR32_BPSP_and_GR32_TC
      67,	// sub_16bit -> GR32_BPSP_and_GR32_TC
      67,	// sub_16bit_hi -> GR32_BPSP_and_GR32_TC
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_BSI_and_GR32_SIDI
      68,	// sub_8bit -> GR32_BSI_and_GR32_SIDI
      0,	// sub_8bit_hi
      68,	// sub_8bit_hi_phony -> GR32_BSI_and_GR32_SIDI
      68,	// sub_16bit -> GR32_BSI_and_GR32_SIDI
      68,	// sub_16bit_hi -> GR32_BSI_and_GR32_SIDI
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_DIBP_and_GR32_SIDI
      69,	// sub_8bit -> GR32_DIBP_and_GR32_SIDI
      0,	// sub_8bit_hi
      69,	// sub_8bit_hi_phony -> GR32_DIBP_and_GR32_SIDI
      69,	// sub_16bit -> GR32_DIBP_and_GR32_SIDI
      69,	// sub_16bit_hi -> GR32_DIBP_and_GR32_SIDI
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit
      70,	// sub_8bit -> LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit
      0,	// sub_8bit_hi
      70,	// sub_8bit_hi_phony -> LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit
      70,	// sub_16bit -> LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit
      70,	// sub_16bit_hi -> LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit
      70,	// sub_32bit -> LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// LOW32_ADDR_ACCESS_with_sub_32bit
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      71,	// sub_16bit -> LOW32_ADDR_ACCESS_with_sub_32bit
      71,	// sub_16bit_hi -> LOW32_ADDR_ACCESS_with_sub_32bit
      71,	// sub_32bit -> LOW32_ADDR_ACCESS_with_sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// RFP64
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64
      75,	// sub_8bit -> GR64_with_sub_8bit
      104,	// sub_8bit_hi -> GR64_ABCD
      0,	// sub_8bit_hi_phony
      73,	// sub_16bit -> GR64
      73,	// sub_16bit_hi -> GR64
      73,	// sub_32bit -> GR64
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// FR64X
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_8bit
      75,	// sub_8bit -> GR64_with_sub_8bit
      104,	// sub_8bit_hi -> GR64_ABCD
      0,	// sub_8bit_hi_phony
      75,	// sub_16bit -> GR64_with_sub_8bit
      75,	// sub_16bit_hi -> GR64_with_sub_8bit
      75,	// sub_32bit -> GR64_with_sub_8bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_NOSP
      76,	// sub_8bit -> GR64_NOSP
      104,	// sub_8bit_hi -> GR64_ABCD
      0,	// sub_8bit_hi_phony
      76,	// sub_16bit -> GR64_NOSP
      76,	// sub_16bit_hi -> GR64_NOSP
      76,	// sub_32bit -> GR64_NOSP
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_NOREX2
      80,	// sub_8bit -> GR64_with_sub_16bit_in_GR16_NOREX2
      104,	// sub_8bit_hi -> GR64_ABCD
      0,	// sub_8bit_hi_phony
      77,	// sub_16bit -> GR64_NOREX2
      77,	// sub_16bit_hi -> GR64_NOREX2
      77,	// sub_32bit -> GR64_NOREX2
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// CONTROL_REG
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// FR64
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_16bit_in_GR16_NOREX2
      80,	// sub_8bit -> GR64_with_sub_16bit_in_GR16_NOREX2
      104,	// sub_8bit_hi -> GR64_ABCD
      0,	// sub_8bit_hi_phony
      80,	// sub_16bit -> GR64_with_sub_16bit_in_GR16_NOREX2
      80,	// sub_16bit_hi -> GR64_with_sub_16bit_in_GR16_NOREX2
      80,	// sub_32bit -> GR64_with_sub_16bit_in_GR16_NOREX2
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_NOREX2_NOSP
      81,	// sub_8bit -> GR64_NOREX2_NOSP
      104,	// sub_8bit_hi -> GR64_ABCD
      0,	// sub_8bit_hi_phony
      81,	// sub_16bit -> GR64_NOREX2_NOSP
      81,	// sub_16bit_hi -> GR64_NOREX2_NOSP
      81,	// sub_32bit -> GR64_NOREX2_NOSP
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64PLTSafe
      82,	// sub_8bit -> GR64PLTSafe
      104,	// sub_8bit_hi -> GR64_ABCD
      0,	// sub_8bit_hi_phony
      82,	// sub_16bit -> GR64PLTSafe
      82,	// sub_16bit_hi -> GR64PLTSafe
      82,	// sub_32bit -> GR64PLTSafe
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_TC
      86,	// sub_8bit -> GR64_TC_with_sub_8bit
      106,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      0,	// sub_8bit_hi_phony
      83,	// sub_16bit -> GR64_TC
      83,	// sub_16bit_hi -> GR64_TC
      83,	// sub_32bit -> GR64_TC
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_NOREX
      90,	// sub_8bit -> GR64_with_sub_16bit_in_GR16_NOREX
      104,	// sub_8bit_hi -> GR64_ABCD
      0,	// sub_8bit_hi_phony
      84,	// sub_16bit -> GR64_NOREX
      84,	// sub_16bit_hi -> GR64_NOREX
      84,	// sub_32bit -> GR64_NOREX
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_TCW64
      88,	// sub_8bit -> GR64_TCW64_with_sub_8bit
      106,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      0,	// sub_8bit_hi_phony
      85,	// sub_16bit -> GR64_TCW64
      85,	// sub_16bit_hi -> GR64_TCW64
      85,	// sub_32bit -> GR64_TCW64
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_TC_with_sub_8bit
      86,	// sub_8bit -> GR64_TC_with_sub_8bit
      106,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      0,	// sub_8bit_hi_phony
      86,	// sub_16bit -> GR64_TC_with_sub_8bit
      86,	// sub_16bit_hi -> GR64_TC_with_sub_8bit
      86,	// sub_32bit -> GR64_TC_with_sub_8bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_NOREX2_NOSP_and_GR64_TC
      87,	// sub_8bit -> GR64_NOREX2_NOSP_and_GR64_TC
      106,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      0,	// sub_8bit_hi_phony
      87,	// sub_16bit -> GR64_NOREX2_NOSP_and_GR64_TC
      87,	// sub_16bit_hi -> GR64_NOREX2_NOSP_and_GR64_TC
      87,	// sub_32bit -> GR64_NOREX2_NOSP_and_GR64_TC
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_TCW64_with_sub_8bit
      88,	// sub_8bit -> GR64_TCW64_with_sub_8bit
      106,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      0,	// sub_8bit_hi_phony
      88,	// sub_16bit -> GR64_TCW64_with_sub_8bit
      88,	// sub_16bit_hi -> GR64_TCW64_with_sub_8bit
      88,	// sub_32bit -> GR64_TCW64_with_sub_8bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_TC_and_GR64_TCW64
      97,	// sub_8bit -> GR64_TCW64_and_GR64_TC_with_sub_8bit
      106,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      0,	// sub_8bit_hi_phony
      89,	// sub_16bit -> GR64_TC_and_GR64_TCW64
      89,	// sub_16bit_hi -> GR64_TC_and_GR64_TCW64
      89,	// sub_32bit -> GR64_TC_and_GR64_TCW64
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_16bit_in_GR16_NOREX
      90,	// sub_8bit -> GR64_with_sub_16bit_in_GR16_NOREX
      104,	// sub_8bit_hi -> GR64_ABCD
      0,	// sub_8bit_hi_phony
      90,	// sub_16bit -> GR64_with_sub_16bit_in_GR16_NOREX
      90,	// sub_16bit_hi -> GR64_with_sub_16bit_in_GR16_NOREX
      90,	// sub_32bit -> GR64_with_sub_16bit_in_GR16_NOREX
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK64
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VR64
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64PLTSafe_and_GR64_TC
      93,	// sub_8bit -> GR64PLTSafe_and_GR64_TC
      106,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      0,	// sub_8bit_hi_phony
      93,	// sub_16bit -> GR64PLTSafe_and_GR64_TC
      93,	// sub_16bit_hi -> GR64PLTSafe_and_GR64_TC
      93,	// sub_32bit -> GR64PLTSafe_and_GR64_TC
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_NOREX2_NOSP_and_GR64_TCW64
      94,	// sub_8bit -> GR64_NOREX2_NOSP_and_GR64_TCW64
      106,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      0,	// sub_8bit_hi_phony
      94,	// sub_16bit -> GR64_NOREX2_NOSP_and_GR64_TCW64
      94,	// sub_16bit_hi -> GR64_NOREX2_NOSP_and_GR64_TCW64
      94,	// sub_32bit -> GR64_NOREX2_NOSP_and_GR64_TCW64
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_NOREX_NOSP
      95,	// sub_8bit -> GR64_NOREX_NOSP
      104,	// sub_8bit_hi -> GR64_ABCD
      0,	// sub_8bit_hi_phony
      95,	// sub_16bit -> GR64_NOREX_NOSP
      95,	// sub_16bit_hi -> GR64_NOREX_NOSP
      95,	// sub_32bit -> GR64_NOREX_NOSP
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_NOREX_and_GR64_TC
      100,	// sub_8bit -> GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREX
      106,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      0,	// sub_8bit_hi_phony
      96,	// sub_16bit -> GR64_NOREX_and_GR64_TC
      96,	// sub_16bit_hi -> GR64_NOREX_and_GR64_TC
      96,	// sub_32bit -> GR64_NOREX_and_GR64_TC
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_TCW64_and_GR64_TC_with_sub_8bit
      97,	// sub_8bit -> GR64_TCW64_and_GR64_TC_with_sub_8bit
      106,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      0,	// sub_8bit_hi_phony
      97,	// sub_16bit -> GR64_TCW64_and_GR64_TC_with_sub_8bit
      97,	// sub_16bit_hi -> GR64_TCW64_and_GR64_TC_with_sub_8bit
      97,	// sub_32bit -> GR64_TCW64_and_GR64_TC_with_sub_8bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK64WM
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_TC_and_GR64_NOREX2_NOSP_and_GR64_TCW64
      99,	// sub_8bit -> GR64_TC_and_GR64_NOREX2_NOSP_and_GR64_TCW64
      106,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      0,	// sub_8bit_hi_phony
      99,	// sub_16bit -> GR64_TC_and_GR64_NOREX2_NOSP_and_GR64_TCW64
      99,	// sub_16bit_hi -> GR64_TC_and_GR64_NOREX2_NOSP_and_GR64_TCW64
      99,	// sub_32bit -> GR64_TC_and_GR64_NOREX2_NOSP_and_GR64_TCW64
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREX
      100,	// sub_8bit -> GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREX
      106,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      0,	// sub_8bit_hi_phony
      100,	// sub_16bit -> GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREX
      100,	// sub_16bit_hi -> GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREX
      100,	// sub_32bit -> GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREX
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64PLTSafe_and_GR64_TCW64
      101,	// sub_8bit -> GR64PLTSafe_and_GR64_TCW64
      106,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      0,	// sub_8bit_hi_phony
      101,	// sub_16bit -> GR64PLTSafe_and_GR64_TCW64
      101,	// sub_16bit_hi -> GR64PLTSafe_and_GR64_TCW64
      101,	// sub_32bit -> GR64PLTSafe_and_GR64_TCW64
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_NOREX_and_GR64PLTSafe_and_GR64_TC
      102,	// sub_8bit -> GR64_NOREX_and_GR64PLTSafe_and_GR64_TC
      106,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      0,	// sub_8bit_hi_phony
      102,	// sub_16bit -> GR64_NOREX_and_GR64PLTSafe_and_GR64_TC
      102,	// sub_16bit_hi -> GR64_NOREX_and_GR64PLTSafe_and_GR64_TC
      102,	// sub_32bit -> GR64_NOREX_and_GR64PLTSafe_and_GR64_TC
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_NOREX_and_GR64_TCW64
      105,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_TC
      106,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      0,	// sub_8bit_hi_phony
      103,	// sub_16bit -> GR64_NOREX_and_GR64_TCW64
      103,	// sub_16bit_hi -> GR64_NOREX_and_GR64_TCW64
      103,	// sub_32bit -> GR64_NOREX_and_GR64_TCW64
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_ABCD
      104,	// sub_8bit -> GR64_ABCD
      104,	// sub_8bit_hi -> GR64_ABCD
      0,	// sub_8bit_hi_phony
      104,	// sub_16bit -> GR64_ABCD
      104,	// sub_16bit_hi -> GR64_ABCD
      104,	// sub_32bit -> GR64_ABCD
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_TC
      105,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_TC
      106,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      0,	// sub_8bit_hi_phony
      105,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_TC
      105,	// sub_16bit_hi -> GR64_with_sub_32bit_in_GR32_TC
      105,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_TC
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      106,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      106,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      0,	// sub_8bit_hi_phony
      106,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      106,	// sub_16bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      106,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_AD
      107,	// sub_8bit -> GR64_AD
      107,	// sub_8bit_hi -> GR64_AD
      0,	// sub_8bit_hi_phony
      107,	// sub_16bit -> GR64_AD
      107,	// sub_16bit_hi -> GR64_AD
      107,	// sub_32bit -> GR64_AD
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_ArgRef
      108,	// sub_8bit -> GR64_ArgRef
      0,	// sub_8bit_hi
      108,	// sub_8bit_hi_phony -> GR64_ArgRef
      108,	// sub_16bit -> GR64_ArgRef
      108,	// sub_16bit_hi -> GR64_ArgRef
      108,	// sub_32bit -> GR64_ArgRef
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_and_LOW32_ADDR_ACCESS_RBP
      122,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBP
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      109,	// sub_16bit -> GR64_and_LOW32_ADDR_ACCESS_RBP
      109,	// sub_16bit_hi -> GR64_and_LOW32_ADDR_ACCESS_RBP
      109,	// sub_32bit -> GR64_and_LOW32_ADDR_ACCESS_RBP
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_ArgRef
      110,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_ArgRef
      110,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ArgRef
      0,	// sub_8bit_hi_phony
      110,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_ArgRef
      110,	// sub_16bit_hi -> GR64_with_sub_32bit_in_GR32_ArgRef
      110,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_ArgRef
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_BPSP
      111,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_BPSP
      0,	// sub_8bit_hi
      111,	// sub_8bit_hi_phony -> GR64_with_sub_32bit_in_GR32_BPSP
      111,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_BPSP
      111,	// sub_16bit_hi -> GR64_with_sub_32bit_in_GR32_BPSP
      111,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_BPSP
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_BSI
      112,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_BSI
      119,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSI
      0,	// sub_8bit_hi_phony
      112,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_BSI
      112,	// sub_16bit_hi -> GR64_with_sub_32bit_in_GR32_BSI
      112,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_BSI
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_CB
      113,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_CB
      113,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_CB
      0,	// sub_8bit_hi_phony
      113,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_CB
      113,	// sub_16bit_hi -> GR64_with_sub_32bit_in_GR32_CB
      113,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_CB
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_DIBP
      114,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_DIBP
      0,	// sub_8bit_hi
      114,	// sub_8bit_hi_phony -> GR64_with_sub_32bit_in_GR32_DIBP
      114,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_DIBP
      114,	// sub_16bit_hi -> GR64_with_sub_32bit_in_GR32_DIBP
      114,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_DIBP
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_SIDI
      115,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_SIDI
      0,	// sub_8bit_hi
      115,	// sub_8bit_hi_phony -> GR64_with_sub_32bit_in_GR32_SIDI
      115,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_SIDI
      115,	// sub_16bit_hi -> GR64_with_sub_32bit_in_GR32_SIDI
      115,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_SIDI
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_A
      116,	// sub_8bit -> GR64_A
      116,	// sub_8bit_hi -> GR64_A
      0,	// sub_8bit_hi_phony
      116,	// sub_16bit -> GR64_A
      116,	// sub_16bit_hi -> GR64_A
      116,	// sub_32bit -> GR64_A
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_ArgRef_and_GR64_TC
      117,	// sub_8bit -> GR64_ArgRef_and_GR64_TC
      0,	// sub_8bit_hi
      117,	// sub_8bit_hi_phony -> GR64_ArgRef_and_GR64_TC
      117,	// sub_16bit -> GR64_ArgRef_and_GR64_TC
      117,	// sub_16bit_hi -> GR64_ArgRef_and_GR64_TC
      117,	// sub_32bit -> GR64_ArgRef_and_GR64_TC
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_and_LOW32_ADDR_ACCESS
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      118,	// sub_16bit -> GR64_and_LOW32_ADDR_ACCESS
      118,	// sub_16bit_hi -> GR64_and_LOW32_ADDR_ACCESS
      118,	// sub_32bit -> GR64_and_LOW32_ADDR_ACCESS
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSI
      119,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSI
      119,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSI
      0,	// sub_8bit_hi_phony
      119,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSI
      119,	// sub_16bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSI
      119,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSI
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_AD_and_GR32_ArgRef
      120,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_AD_and_GR32_ArgRef
      120,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_AD_and_GR32_ArgRef
      0,	// sub_8bit_hi_phony
      120,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_AD_and_GR32_ArgRef
      120,	// sub_16bit_hi -> GR64_with_sub_32bit_in_GR32_AD_and_GR32_ArgRef
      120,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_AD_and_GR32_ArgRef
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_ArgRef_and_GR32_CB
      121,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_ArgRef_and_GR32_CB
      121,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ArgRef_and_GR32_CB
      0,	// sub_8bit_hi_phony
      121,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_ArgRef_and_GR32_CB
      121,	// sub_16bit_hi -> GR64_with_sub_32bit_in_GR32_ArgRef_and_GR32_CB
      121,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_ArgRef_and_GR32_CB
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBP
      122,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBP
      0,	// sub_8bit_hi
      122,	// sub_8bit_hi_phony -> GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBP
      122,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBP
      122,	// sub_16bit_hi -> GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBP
      122,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBP
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TC
      123,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TC
      0,	// sub_8bit_hi
      123,	// sub_8bit_hi_phony -> GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TC
      123,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TC
      123,	// sub_16bit_hi -> GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TC
      123,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TC
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDI
      124,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDI
      0,	// sub_8bit_hi
      124,	// sub_8bit_hi_phony -> GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDI
      124,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDI
      124,	// sub_16bit_hi -> GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDI
      124,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDI
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDI
      125,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDI
      0,	// sub_8bit_hi
      125,	// sub_8bit_hi_phony -> GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDI
      125,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDI
      125,	// sub_16bit_hi -> GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDI
      125,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDI
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// RST
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// RFP80
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// RFP80_7
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VR128X
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VR128
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VR256X
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      131,	// sub_xmm -> VR256X
      0,	// sub_ymm
    },
    {	// VR256
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      132,	// sub_xmm -> VR256
      0,	// sub_ymm
    },
    {	// VR512
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      133,	// sub_xmm -> VR512
      133,	// sub_ymm -> VR512
    },
    {	// VR512_0_15
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      134,	// sub_xmm -> VR512_0_15
      134,	// sub_ymm -> VR512_0_15
    },
    {	// TILE
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },

  };
  assert(RC && "Missing regclass");
  if (!Idx) return RC;
  --Idx;
  assert(Idx < 10 && "Bad subreg");
  unsigned TV = Table[RC->getID()][Idx];
  return TV ? getRegClass(TV - 1) : nullptr;
}const TargetRegisterClass *X86GenRegisterInfo::getSubRegisterClass(const TargetRegisterClass *RC, unsigned Idx) const {
  static constexpr uint8_t Table[135][10] = {
    {	// GR8
      0,	// GR8:sub_8bit
      0,	// GR8:sub_8bit_hi
      0,	// GR8:sub_8bit_hi_phony
      0,	// GR8:sub_16bit
      0,	// GR8:sub_16bit_hi
      0,	// GR8:sub_32bit
      0,	// GR8:sub_mask_0
      0,	// GR8:sub_mask_1
      0,	// GR8:sub_xmm
      0,	// GR8:sub_ymm
    },
    {	// GRH8
      0,	// GRH8:sub_8bit
      0,	// GRH8:sub_8bit_hi
      0,	// GRH8:sub_8bit_hi_phony
      0,	// GRH8:sub_16bit
      0,	// GRH8:sub_16bit_hi
      0,	// GRH8:sub_32bit
      0,	// GRH8:sub_mask_0
      0,	// GRH8:sub_mask_1
      0,	// GRH8:sub_xmm
      0,	// GRH8:sub_ymm
    },
    {	// GR8_NOREX2
      0,	// GR8_NOREX2:sub_8bit
      0,	// GR8_NOREX2:sub_8bit_hi
      0,	// GR8_NOREX2:sub_8bit_hi_phony
      0,	// GR8_NOREX2:sub_16bit
      0,	// GR8_NOREX2:sub_16bit_hi
      0,	// GR8_NOREX2:sub_32bit
      0,	// GR8_NOREX2:sub_mask_0
      0,	// GR8_NOREX2:sub_mask_1
      0,	// GR8_NOREX2:sub_xmm
      0,	// GR8_NOREX2:sub_ymm
    },
    {	// GR8_NOREX
      0,	// GR8_NOREX:sub_8bit
      0,	// GR8_NOREX:sub_8bit_hi
      0,	// GR8_NOREX:sub_8bit_hi_phony
      0,	// GR8_NOREX:sub_16bit
      0,	// GR8_NOREX:sub_16bit_hi
      0,	// GR8_NOREX:sub_32bit
      0,	// GR8_NOREX:sub_mask_0
      0,	// GR8_NOREX:sub_mask_1
      0,	// GR8_NOREX:sub_xmm
      0,	// GR8_NOREX:sub_ymm
    },
    {	// GR8_ABCD_H
      0,	// GR8_ABCD_H:sub_8bit
      0,	// GR8_ABCD_H:sub_8bit_hi
      0,	// GR8_ABCD_H:sub_8bit_hi_phony
      0,	// GR8_ABCD_H:sub_16bit
      0,	// GR8_ABCD_H:sub_16bit_hi
      0,	// GR8_ABCD_H:sub_32bit
      0,	// GR8_ABCD_H:sub_mask_0
      0,	// GR8_ABCD_H:sub_mask_1
      0,	// GR8_ABCD_H:sub_xmm
      0,	// GR8_ABCD_H:sub_ymm
    },
    {	// GR8_ABCD_L
      0,	// GR8_ABCD_L:sub_8bit
      0,	// GR8_ABCD_L:sub_8bit_hi
      0,	// GR8_ABCD_L:sub_8bit_hi_phony
      0,	// GR8_ABCD_L:sub_16bit
      0,	// GR8_ABCD_L:sub_16bit_hi
      0,	// GR8_ABCD_L:sub_32bit
      0,	// GR8_ABCD_L:sub_mask_0
      0,	// GR8_ABCD_L:sub_mask_1
      0,	// GR8_ABCD_L:sub_xmm
      0,	// GR8_ABCD_L:sub_ymm
    },
    {	// GRH16
      0,	// GRH16:sub_8bit
      0,	// GRH16:sub_8bit_hi
      0,	// GRH16:sub_8bit_hi_phony
      0,	// GRH16:sub_16bit
      0,	// GRH16:sub_16bit_hi
      0,	// GRH16:sub_32bit
      0,	// GRH16:sub_mask_0
      0,	// GRH16:sub_mask_1
      0,	// GRH16:sub_xmm
      0,	// GRH16:sub_ymm
    },
    {	// GR16
      1,	// GR16:sub_8bit -> GR8
      5,	// GR16:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR16:sub_8bit_hi_phony
      0,	// GR16:sub_16bit
      0,	// GR16:sub_16bit_hi
      0,	// GR16:sub_32bit
      0,	// GR16:sub_mask_0
      0,	// GR16:sub_mask_1
      0,	// GR16:sub_xmm
      0,	// GR16:sub_ymm
    },
    {	// GR16_NOREX2
      3,	// GR16_NOREX2:sub_8bit -> GR8_NOREX2
      5,	// GR16_NOREX2:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR16_NOREX2:sub_8bit_hi_phony
      0,	// GR16_NOREX2:sub_16bit
      0,	// GR16_NOREX2:sub_16bit_hi
      0,	// GR16_NOREX2:sub_32bit
      0,	// GR16_NOREX2:sub_mask_0
      0,	// GR16_NOREX2:sub_mask_1
      0,	// GR16_NOREX2:sub_xmm
      0,	// GR16_NOREX2:sub_ymm
    },
    {	// GR16_NOREX
      3,	// GR16_NOREX:sub_8bit -> GR8_NOREX2
      5,	// GR16_NOREX:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR16_NOREX:sub_8bit_hi_phony
      0,	// GR16_NOREX:sub_16bit
      0,	// GR16_NOREX:sub_16bit_hi
      0,	// GR16_NOREX:sub_32bit
      0,	// GR16_NOREX:sub_mask_0
      0,	// GR16_NOREX:sub_mask_1
      0,	// GR16_NOREX:sub_xmm
      0,	// GR16_NOREX:sub_ymm
    },
    {	// VK1
      0,	// VK1:sub_8bit
      0,	// VK1:sub_8bit_hi
      0,	// VK1:sub_8bit_hi_phony
      0,	// VK1:sub_16bit
      0,	// VK1:sub_16bit_hi
      0,	// VK1:sub_32bit
      0,	// VK1:sub_mask_0
      0,	// VK1:sub_mask_1
      0,	// VK1:sub_xmm
      0,	// VK1:sub_ymm
    },
    {	// VK16
      0,	// VK16:sub_8bit
      0,	// VK16:sub_8bit_hi
      0,	// VK16:sub_8bit_hi_phony
      0,	// VK16:sub_16bit
      0,	// VK16:sub_16bit_hi
      0,	// VK16:sub_32bit
      0,	// VK16:sub_mask_0
      0,	// VK16:sub_mask_1
      0,	// VK16:sub_xmm
      0,	// VK16:sub_ymm
    },
    {	// VK2
      0,	// VK2:sub_8bit
      0,	// VK2:sub_8bit_hi
      0,	// VK2:sub_8bit_hi_phony
      0,	// VK2:sub_16bit
      0,	// VK2:sub_16bit_hi
      0,	// VK2:sub_32bit
      0,	// VK2:sub_mask_0
      0,	// VK2:sub_mask_1
      0,	// VK2:sub_xmm
      0,	// VK2:sub_ymm
    },
    {	// VK4
      0,	// VK4:sub_8bit
      0,	// VK4:sub_8bit_hi
      0,	// VK4:sub_8bit_hi_phony
      0,	// VK4:sub_16bit
      0,	// VK4:sub_16bit_hi
      0,	// VK4:sub_32bit
      0,	// VK4:sub_mask_0
      0,	// VK4:sub_mask_1
      0,	// VK4:sub_xmm
      0,	// VK4:sub_ymm
    },
    {	// VK8
      0,	// VK8:sub_8bit
      0,	// VK8:sub_8bit_hi
      0,	// VK8:sub_8bit_hi_phony
      0,	// VK8:sub_16bit
      0,	// VK8:sub_16bit_hi
      0,	// VK8:sub_32bit
      0,	// VK8:sub_mask_0
      0,	// VK8:sub_mask_1
      0,	// VK8:sub_xmm
      0,	// VK8:sub_ymm
    },
    {	// VK16WM
      0,	// VK16WM:sub_8bit
      0,	// VK16WM:sub_8bit_hi
      0,	// VK16WM:sub_8bit_hi_phony
      0,	// VK16WM:sub_16bit
      0,	// VK16WM:sub_16bit_hi
      0,	// VK16WM:sub_32bit
      0,	// VK16WM:sub_mask_0
      0,	// VK16WM:sub_mask_1
      0,	// VK16WM:sub_xmm
      0,	// VK16WM:sub_ymm
    },
    {	// VK1WM
      0,	// VK1WM:sub_8bit
      0,	// VK1WM:sub_8bit_hi
      0,	// VK1WM:sub_8bit_hi_phony
      0,	// VK1WM:sub_16bit
      0,	// VK1WM:sub_16bit_hi
      0,	// VK1WM:sub_32bit
      0,	// VK1WM:sub_mask_0
      0,	// VK1WM:sub_mask_1
      0,	// VK1WM:sub_xmm
      0,	// VK1WM:sub_ymm
    },
    {	// VK2WM
      0,	// VK2WM:sub_8bit
      0,	// VK2WM:sub_8bit_hi
      0,	// VK2WM:sub_8bit_hi_phony
      0,	// VK2WM:sub_16bit
      0,	// VK2WM:sub_16bit_hi
      0,	// VK2WM:sub_32bit
      0,	// VK2WM:sub_mask_0
      0,	// VK2WM:sub_mask_1
      0,	// VK2WM:sub_xmm
      0,	// VK2WM:sub_ymm
    },
    {	// VK4WM
      0,	// VK4WM:sub_8bit
      0,	// VK4WM:sub_8bit_hi
      0,	// VK4WM:sub_8bit_hi_phony
      0,	// VK4WM:sub_16bit
      0,	// VK4WM:sub_16bit_hi
      0,	// VK4WM:sub_32bit
      0,	// VK4WM:sub_mask_0
      0,	// VK4WM:sub_mask_1
      0,	// VK4WM:sub_xmm
      0,	// VK4WM:sub_ymm
    },
    {	// VK8WM
      0,	// VK8WM:sub_8bit
      0,	// VK8WM:sub_8bit_hi
      0,	// VK8WM:sub_8bit_hi_phony
      0,	// VK8WM:sub_16bit
      0,	// VK8WM:sub_16bit_hi
      0,	// VK8WM:sub_32bit
      0,	// VK8WM:sub_mask_0
      0,	// VK8WM:sub_mask_1
      0,	// VK8WM:sub_xmm
      0,	// VK8WM:sub_ymm
    },
    {	// SEGMENT_REG
      0,	// SEGMENT_REG:sub_8bit
      0,	// SEGMENT_REG:sub_8bit_hi
      0,	// SEGMENT_REG:sub_8bit_hi_phony
      0,	// SEGMENT_REG:sub_16bit
      0,	// SEGMENT_REG:sub_16bit_hi
      0,	// SEGMENT_REG:sub_32bit
      0,	// SEGMENT_REG:sub_mask_0
      0,	// SEGMENT_REG:sub_mask_1
      0,	// SEGMENT_REG:sub_xmm
      0,	// SEGMENT_REG:sub_ymm
    },
    {	// GR16_ABCD
      6,	// GR16_ABCD:sub_8bit -> GR8_ABCD_L
      5,	// GR16_ABCD:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR16_ABCD:sub_8bit_hi_phony
      0,	// GR16_ABCD:sub_16bit
      0,	// GR16_ABCD:sub_16bit_hi
      0,	// GR16_ABCD:sub_32bit
      0,	// GR16_ABCD:sub_mask_0
      0,	// GR16_ABCD:sub_mask_1
      0,	// GR16_ABCD:sub_xmm
      0,	// GR16_ABCD:sub_ymm
    },
    {	// FPCCR
      0,	// FPCCR:sub_8bit
      0,	// FPCCR:sub_8bit_hi
      0,	// FPCCR:sub_8bit_hi_phony
      0,	// FPCCR:sub_16bit
      0,	// FPCCR:sub_16bit_hi
      0,	// FPCCR:sub_32bit
      0,	// FPCCR:sub_mask_0
      0,	// FPCCR:sub_mask_1
      0,	// FPCCR:sub_xmm
      0,	// FPCCR:sub_ymm
    },
    {	// FR16X
      0,	// FR16X:sub_8bit
      0,	// FR16X:sub_8bit_hi
      0,	// FR16X:sub_8bit_hi_phony
      0,	// FR16X:sub_16bit
      0,	// FR16X:sub_16bit_hi
      0,	// FR16X:sub_32bit
      0,	// FR16X:sub_mask_0
      0,	// FR16X:sub_mask_1
      0,	// FR16X:sub_xmm
      0,	// FR16X:sub_ymm
    },
    {	// FR16
      0,	// FR16:sub_8bit
      0,	// FR16:sub_8bit_hi
      0,	// FR16:sub_8bit_hi_phony
      0,	// FR16:sub_16bit
      0,	// FR16:sub_16bit_hi
      0,	// FR16:sub_32bit
      0,	// FR16:sub_mask_0
      0,	// FR16:sub_mask_1
      0,	// FR16:sub_xmm
      0,	// FR16:sub_ymm
    },
    {	// VK16PAIR
      0,	// VK16PAIR:sub_8bit
      0,	// VK16PAIR:sub_8bit_hi
      0,	// VK16PAIR:sub_8bit_hi_phony
      0,	// VK16PAIR:sub_16bit
      0,	// VK16PAIR:sub_16bit_hi
      0,	// VK16PAIR:sub_32bit
      91,	// VK16PAIR:sub_mask_0 -> VK64
      98,	// VK16PAIR:sub_mask_1 -> VK64WM
      0,	// VK16PAIR:sub_xmm
      0,	// VK16PAIR:sub_ymm
    },
    {	// VK1PAIR
      0,	// VK1PAIR:sub_8bit
      0,	// VK1PAIR:sub_8bit_hi
      0,	// VK1PAIR:sub_8bit_hi_phony
      0,	// VK1PAIR:sub_16bit
      0,	// VK1PAIR:sub_16bit_hi
      0,	// VK1PAIR:sub_32bit
      91,	// VK1PAIR:sub_mask_0 -> VK64
      98,	// VK1PAIR:sub_mask_1 -> VK64WM
      0,	// VK1PAIR:sub_xmm
      0,	// VK1PAIR:sub_ymm
    },
    {	// VK2PAIR
      0,	// VK2PAIR:sub_8bit
      0,	// VK2PAIR:sub_8bit_hi
      0,	// VK2PAIR:sub_8bit_hi_phony
      0,	// VK2PAIR:sub_16bit
      0,	// VK2PAIR:sub_16bit_hi
      0,	// VK2PAIR:sub_32bit
      91,	// VK2PAIR:sub_mask_0 -> VK64
      98,	// VK2PAIR:sub_mask_1 -> VK64WM
      0,	// VK2PAIR:sub_xmm
      0,	// VK2PAIR:sub_ymm
    },
    {	// VK4PAIR
      0,	// VK4PAIR:sub_8bit
      0,	// VK4PAIR:sub_8bit_hi
      0,	// VK4PAIR:sub_8bit_hi_phony
      0,	// VK4PAIR:sub_16bit
      0,	// VK4PAIR:sub_16bit_hi
      0,	// VK4PAIR:sub_32bit
      91,	// VK4PAIR:sub_mask_0 -> VK64
      98,	// VK4PAIR:sub_mask_1 -> VK64WM
      0,	// VK4PAIR:sub_xmm
      0,	// VK4PAIR:sub_ymm
    },
    {	// VK8PAIR
      0,	// VK8PAIR:sub_8bit
      0,	// VK8PAIR:sub_8bit_hi
      0,	// VK8PAIR:sub_8bit_hi_phony
      0,	// VK8PAIR:sub_16bit
      0,	// VK8PAIR:sub_16bit_hi
      0,	// VK8PAIR:sub_32bit
      91,	// VK8PAIR:sub_mask_0 -> VK64
      98,	// VK8PAIR:sub_mask_1 -> VK64WM
      0,	// VK8PAIR:sub_xmm
      0,	// VK8PAIR:sub_ymm
    },
    {	// VK1PAIR_with_sub_mask_0_in_VK1WM
      0,	// VK1PAIR_with_sub_mask_0_in_VK1WM:sub_8bit
      0,	// VK1PAIR_with_sub_mask_0_in_VK1WM:sub_8bit_hi
      0,	// VK1PAIR_with_sub_mask_0_in_VK1WM:sub_8bit_hi_phony
      0,	// VK1PAIR_with_sub_mask_0_in_VK1WM:sub_16bit
      0,	// VK1PAIR_with_sub_mask_0_in_VK1WM:sub_16bit_hi
      0,	// VK1PAIR_with_sub_mask_0_in_VK1WM:sub_32bit
      98,	// VK1PAIR_with_sub_mask_0_in_VK1WM:sub_mask_0 -> VK64WM
      98,	// VK1PAIR_with_sub_mask_0_in_VK1WM:sub_mask_1 -> VK64WM
      0,	// VK1PAIR_with_sub_mask_0_in_VK1WM:sub_xmm
      0,	// VK1PAIR_with_sub_mask_0_in_VK1WM:sub_ymm
    },
    {	// LOW32_ADDR_ACCESS_RBP
      1,	// LOW32_ADDR_ACCESS_RBP:sub_8bit -> GR8
      5,	// LOW32_ADDR_ACCESS_RBP:sub_8bit_hi -> GR8_ABCD_H
      0,	// LOW32_ADDR_ACCESS_RBP:sub_8bit_hi_phony
      8,	// LOW32_ADDR_ACCESS_RBP:sub_16bit -> GR16
      0,	// LOW32_ADDR_ACCESS_RBP:sub_16bit_hi
      66,	// LOW32_ADDR_ACCESS_RBP:sub_32bit -> GR32_BPSP_and_GR32_DIBP
      0,	// LOW32_ADDR_ACCESS_RBP:sub_mask_0
      0,	// LOW32_ADDR_ACCESS_RBP:sub_mask_1
      0,	// LOW32_ADDR_ACCESS_RBP:sub_xmm
      0,	// LOW32_ADDR_ACCESS_RBP:sub_ymm
    },
    {	// LOW32_ADDR_ACCESS
      1,	// LOW32_ADDR_ACCESS:sub_8bit -> GR8
      5,	// LOW32_ADDR_ACCESS:sub_8bit_hi -> GR8_ABCD_H
      0,	// LOW32_ADDR_ACCESS:sub_8bit_hi_phony
      8,	// LOW32_ADDR_ACCESS:sub_16bit -> GR16
      0,	// LOW32_ADDR_ACCESS:sub_16bit_hi
      0,	// LOW32_ADDR_ACCESS:sub_32bit
      0,	// LOW32_ADDR_ACCESS:sub_mask_0
      0,	// LOW32_ADDR_ACCESS:sub_mask_1
      0,	// LOW32_ADDR_ACCESS:sub_xmm
      0,	// LOW32_ADDR_ACCESS:sub_ymm
    },
    {	// LOW32_ADDR_ACCESS_RBP_with_sub_8bit
      1,	// LOW32_ADDR_ACCESS_RBP_with_sub_8bit:sub_8bit -> GR8
      5,	// LOW32_ADDR_ACCESS_RBP_with_sub_8bit:sub_8bit_hi -> GR8_ABCD_H
      0,	// LOW32_ADDR_ACCESS_RBP_with_sub_8bit:sub_8bit_hi_phony
      8,	// LOW32_ADDR_ACCESS_RBP_with_sub_8bit:sub_16bit -> GR16
      0,	// LOW32_ADDR_ACCESS_RBP_with_sub_8bit:sub_16bit_hi
      66,	// LOW32_ADDR_ACCESS_RBP_with_sub_8bit:sub_32bit -> GR32_BPSP_and_GR32_DIBP
      0,	// LOW32_ADDR_ACCESS_RBP_with_sub_8bit:sub_mask_0
      0,	// LOW32_ADDR_ACCESS_RBP_with_sub_8bit:sub_mask_1
      0,	// LOW32_ADDR_ACCESS_RBP_with_sub_8bit:sub_xmm
      0,	// LOW32_ADDR_ACCESS_RBP_with_sub_8bit:sub_ymm
    },
    {	// FR32X
      0,	// FR32X:sub_8bit
      0,	// FR32X:sub_8bit_hi
      0,	// FR32X:sub_8bit_hi_phony
      0,	// FR32X:sub_16bit
      0,	// FR32X:sub_16bit_hi
      0,	// FR32X:sub_32bit
      0,	// FR32X:sub_mask_0
      0,	// FR32X:sub_mask_1
      0,	// FR32X:sub_xmm
      0,	// FR32X:sub_ymm
    },
    {	// GR32
      1,	// GR32:sub_8bit -> GR8
      5,	// GR32:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR32:sub_8bit_hi_phony
      8,	// GR32:sub_16bit -> GR16
      0,	// GR32:sub_16bit_hi
      0,	// GR32:sub_32bit
      0,	// GR32:sub_mask_0
      0,	// GR32:sub_mask_1
      0,	// GR32:sub_xmm
      0,	// GR32:sub_ymm
    },
    {	// GR32_NOSP
      1,	// GR32_NOSP:sub_8bit -> GR8
      5,	// GR32_NOSP:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR32_NOSP:sub_8bit_hi_phony
      8,	// GR32_NOSP:sub_16bit -> GR16
      0,	// GR32_NOSP:sub_16bit_hi
      0,	// GR32_NOSP:sub_32bit
      0,	// GR32_NOSP:sub_mask_0
      0,	// GR32_NOSP:sub_mask_1
      0,	// GR32_NOSP:sub_xmm
      0,	// GR32_NOSP:sub_ymm
    },
    {	// LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX2
      3,	// LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX2:sub_8bit -> GR8_NOREX2
      5,	// LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX2:sub_8bit_hi -> GR8_ABCD_H
      0,	// LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX2:sub_8bit_hi_phony
      9,	// LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX2:sub_16bit -> GR16_NOREX2
      0,	// LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX2:sub_16bit_hi
      66,	// LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX2:sub_32bit -> GR32_BPSP_and_GR32_DIBP
      0,	// LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX2:sub_mask_0
      0,	// LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX2:sub_mask_1
      0,	// LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX2:sub_xmm
      0,	// LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX2:sub_ymm
    },
    {	// DEBUG_REG
      0,	// DEBUG_REG:sub_8bit
      0,	// DEBUG_REG:sub_8bit_hi
      0,	// DEBUG_REG:sub_8bit_hi_phony
      0,	// DEBUG_REG:sub_16bit
      0,	// DEBUG_REG:sub_16bit_hi
      0,	// DEBUG_REG:sub_32bit
      0,	// DEBUG_REG:sub_mask_0
      0,	// DEBUG_REG:sub_mask_1
      0,	// DEBUG_REG:sub_xmm
      0,	// DEBUG_REG:sub_ymm
    },
    {	// FR32
      0,	// FR32:sub_8bit
      0,	// FR32:sub_8bit_hi
      0,	// FR32:sub_8bit_hi_phony
      0,	// FR32:sub_16bit
      0,	// FR32:sub_16bit_hi
      0,	// FR32:sub_32bit
      0,	// FR32:sub_mask_0
      0,	// FR32:sub_mask_1
      0,	// FR32:sub_xmm
      0,	// FR32:sub_ymm
    },
    {	// GR32_NOREX2
      3,	// GR32_NOREX2:sub_8bit -> GR8_NOREX2
      5,	// GR32_NOREX2:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR32_NOREX2:sub_8bit_hi_phony
      9,	// GR32_NOREX2:sub_16bit -> GR16_NOREX2
      0,	// GR32_NOREX2:sub_16bit_hi
      0,	// GR32_NOREX2:sub_32bit
      0,	// GR32_NOREX2:sub_mask_0
      0,	// GR32_NOREX2:sub_mask_1
      0,	// GR32_NOREX2:sub_xmm
      0,	// GR32_NOREX2:sub_ymm
    },
    {	// GR32_NOREX2_NOSP
      3,	// GR32_NOREX2_NOSP:sub_8bit -> GR8_NOREX2
      5,	// GR32_NOREX2_NOSP:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR32_NOREX2_NOSP:sub_8bit_hi_phony
      9,	// GR32_NOREX2_NOSP:sub_16bit -> GR16_NOREX2
      0,	// GR32_NOREX2_NOSP:sub_16bit_hi
      0,	// GR32_NOREX2_NOSP:sub_32bit
      0,	// GR32_NOREX2_NOSP:sub_mask_0
      0,	// GR32_NOREX2_NOSP:sub_mask_1
      0,	// GR32_NOREX2_NOSP:sub_xmm
      0,	// GR32_NOREX2_NOSP:sub_ymm
    },
    {	// LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX
      3,	// LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX:sub_8bit -> GR8_NOREX2
      5,	// LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX:sub_8bit_hi -> GR8_ABCD_H
      0,	// LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX:sub_8bit_hi_phony
      10,	// LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX:sub_16bit -> GR16_NOREX
      0,	// LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX:sub_16bit_hi
      66,	// LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX:sub_32bit -> GR32_BPSP_and_GR32_DIBP
      0,	// LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX:sub_mask_0
      0,	// LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX:sub_mask_1
      0,	// LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX:sub_xmm
      0,	// LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX:sub_ymm
    },
    {	// GR32_NOREX
      3,	// GR32_NOREX:sub_8bit -> GR8_NOREX2
      5,	// GR32_NOREX:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR32_NOREX:sub_8bit_hi_phony
      10,	// GR32_NOREX:sub_16bit -> GR16_NOREX
      0,	// GR32_NOREX:sub_16bit_hi
      0,	// GR32_NOREX:sub_32bit
      0,	// GR32_NOREX:sub_mask_0
      0,	// GR32_NOREX:sub_mask_1
      0,	// GR32_NOREX:sub_xmm
      0,	// GR32_NOREX:sub_ymm
    },
    {	// VK32
      0,	// VK32:sub_8bit
      0,	// VK32:sub_8bit_hi
      0,	// VK32:sub_8bit_hi_phony
      0,	// VK32:sub_16bit
      0,	// VK32:sub_16bit_hi
      0,	// VK32:sub_32bit
      0,	// VK32:sub_mask_0
      0,	// VK32:sub_mask_1
      0,	// VK32:sub_xmm
      0,	// VK32:sub_ymm
    },
    {	// GR32_NOREX_NOSP
      3,	// GR32_NOREX_NOSP:sub_8bit -> GR8_NOREX2
      5,	// GR32_NOREX_NOSP:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR32_NOREX_NOSP:sub_8bit_hi_phony
      10,	// GR32_NOREX_NOSP:sub_16bit -> GR16_NOREX
      0,	// GR32_NOREX_NOSP:sub_16bit_hi
      0,	// GR32_NOREX_NOSP:sub_32bit
      0,	// GR32_NOREX_NOSP:sub_mask_0
      0,	// GR32_NOREX_NOSP:sub_mask_1
      0,	// GR32_NOREX_NOSP:sub_xmm
      0,	// GR32_NOREX_NOSP:sub_ymm
    },
    {	// RFP32
      0,	// RFP32:sub_8bit
      0,	// RFP32:sub_8bit_hi
      0,	// RFP32:sub_8bit_hi_phony
      0,	// RFP32:sub_16bit
      0,	// RFP32:sub_16bit_hi
      0,	// RFP32:sub_32bit
      0,	// RFP32:sub_mask_0
      0,	// RFP32:sub_mask_1
      0,	// RFP32:sub_xmm
      0,	// RFP32:sub_ymm
    },
    {	// VK32WM
      0,	// VK32WM:sub_8bit
      0,	// VK32WM:sub_8bit_hi
      0,	// VK32WM:sub_8bit_hi_phony
      0,	// VK32WM:sub_16bit
      0,	// VK32WM:sub_16bit_hi
      0,	// VK32WM:sub_32bit
      0,	// VK32WM:sub_mask_0
      0,	// VK32WM:sub_mask_1
      0,	// VK32WM:sub_xmm
      0,	// VK32WM:sub_ymm
    },
    {	// GR32_ABCD
      6,	// GR32_ABCD:sub_8bit -> GR8_ABCD_L
      5,	// GR32_ABCD:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR32_ABCD:sub_8bit_hi_phony
      22,	// GR32_ABCD:sub_16bit -> GR16_ABCD
      0,	// GR32_ABCD:sub_16bit_hi
      0,	// GR32_ABCD:sub_32bit
      0,	// GR32_ABCD:sub_mask_0
      0,	// GR32_ABCD:sub_mask_1
      0,	// GR32_ABCD:sub_xmm
      0,	// GR32_ABCD:sub_ymm
    },
    {	// GR32_TC
      3,	// GR32_TC:sub_8bit -> GR8_NOREX2
      5,	// GR32_TC:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR32_TC:sub_8bit_hi_phony
      10,	// GR32_TC:sub_16bit -> GR16_NOREX
      0,	// GR32_TC:sub_16bit_hi
      0,	// GR32_TC:sub_32bit
      0,	// GR32_TC:sub_mask_0
      0,	// GR32_TC:sub_mask_1
      0,	// GR32_TC:sub_xmm
      0,	// GR32_TC:sub_ymm
    },
    {	// GR32_ABCD_and_GR32_TC
      6,	// GR32_ABCD_and_GR32_TC:sub_8bit -> GR8_ABCD_L
      5,	// GR32_ABCD_and_GR32_TC:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR32_ABCD_and_GR32_TC:sub_8bit_hi_phony
      22,	// GR32_ABCD_and_GR32_TC:sub_16bit -> GR16_ABCD
      0,	// GR32_ABCD_and_GR32_TC:sub_16bit_hi
      0,	// GR32_ABCD_and_GR32_TC:sub_32bit
      0,	// GR32_ABCD_and_GR32_TC:sub_mask_0
      0,	// GR32_ABCD_and_GR32_TC:sub_mask_1
      0,	// GR32_ABCD_and_GR32_TC:sub_xmm
      0,	// GR32_ABCD_and_GR32_TC:sub_ymm
    },
    {	// GR32_AD
      6,	// GR32_AD:sub_8bit -> GR8_ABCD_L
      5,	// GR32_AD:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR32_AD:sub_8bit_hi_phony
      22,	// GR32_AD:sub_16bit -> GR16_ABCD
      0,	// GR32_AD:sub_16bit_hi
      0,	// GR32_AD:sub_32bit
      0,	// GR32_AD:sub_mask_0
      0,	// GR32_AD:sub_mask_1
      0,	// GR32_AD:sub_xmm
      0,	// GR32_AD:sub_ymm
    },
    {	// GR32_ArgRef
      6,	// GR32_ArgRef:sub_8bit -> GR8_ABCD_L
      5,	// GR32_ArgRef:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR32_ArgRef:sub_8bit_hi_phony
      22,	// GR32_ArgRef:sub_16bit -> GR16_ABCD
      0,	// GR32_ArgRef:sub_16bit_hi
      0,	// GR32_ArgRef:sub_32bit
      0,	// GR32_ArgRef:sub_mask_0
      0,	// GR32_ArgRef:sub_mask_1
      0,	// GR32_ArgRef:sub_xmm
      0,	// GR32_ArgRef:sub_ymm
    },
    {	// GR32_BPSP
      3,	// GR32_BPSP:sub_8bit -> GR8_NOREX2
      0,	// GR32_BPSP:sub_8bit_hi
      0,	// GR32_BPSP:sub_8bit_hi_phony
      10,	// GR32_BPSP:sub_16bit -> GR16_NOREX
      0,	// GR32_BPSP:sub_16bit_hi
      0,	// GR32_BPSP:sub_32bit
      0,	// GR32_BPSP:sub_mask_0
      0,	// GR32_BPSP:sub_mask_1
      0,	// GR32_BPSP:sub_xmm
      0,	// GR32_BPSP:sub_ymm
    },
    {	// GR32_BSI
      3,	// GR32_BSI:sub_8bit -> GR8_NOREX2
      5,	// GR32_BSI:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR32_BSI:sub_8bit_hi_phony
      10,	// GR32_BSI:sub_16bit -> GR16_NOREX
      0,	// GR32_BSI:sub_16bit_hi
      0,	// GR32_BSI:sub_32bit
      0,	// GR32_BSI:sub_mask_0
      0,	// GR32_BSI:sub_mask_1
      0,	// GR32_BSI:sub_xmm
      0,	// GR32_BSI:sub_ymm
    },
    {	// GR32_CB
      6,	// GR32_CB:sub_8bit -> GR8_ABCD_L
      5,	// GR32_CB:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR32_CB:sub_8bit_hi_phony
      22,	// GR32_CB:sub_16bit -> GR16_ABCD
      0,	// GR32_CB:sub_16bit_hi
      0,	// GR32_CB:sub_32bit
      0,	// GR32_CB:sub_mask_0
      0,	// GR32_CB:sub_mask_1
      0,	// GR32_CB:sub_xmm
      0,	// GR32_CB:sub_ymm
    },
    {	// GR32_DC
      6,	// GR32_DC:sub_8bit -> GR8_ABCD_L
      5,	// GR32_DC:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR32_DC:sub_8bit_hi_phony
      22,	// GR32_DC:sub_16bit -> GR16_ABCD
      0,	// GR32_DC:sub_16bit_hi
      0,	// GR32_DC:sub_32bit
      0,	// GR32_DC:sub_mask_0
      0,	// GR32_DC:sub_mask_1
      0,	// GR32_DC:sub_xmm
      0,	// GR32_DC:sub_ymm
    },
    {	// GR32_DIBP
      3,	// GR32_DIBP:sub_8bit -> GR8_NOREX2
      0,	// GR32_DIBP:sub_8bit_hi
      0,	// GR32_DIBP:sub_8bit_hi_phony
      10,	// GR32_DIBP:sub_16bit -> GR16_NOREX
      0,	// GR32_DIBP:sub_16bit_hi
      0,	// GR32_DIBP:sub_32bit
      0,	// GR32_DIBP:sub_mask_0
      0,	// GR32_DIBP:sub_mask_1
      0,	// GR32_DIBP:sub_xmm
      0,	// GR32_DIBP:sub_ymm
    },
    {	// GR32_SIDI
      3,	// GR32_SIDI:sub_8bit -> GR8_NOREX2
      0,	// GR32_SIDI:sub_8bit_hi
      0,	// GR32_SIDI:sub_8bit_hi_phony
      10,	// GR32_SIDI:sub_16bit -> GR16_NOREX
      0,	// GR32_SIDI:sub_16bit_hi
      0,	// GR32_SIDI:sub_32bit
      0,	// GR32_SIDI:sub_mask_0
      0,	// GR32_SIDI:sub_mask_1
      0,	// GR32_SIDI:sub_xmm
      0,	// GR32_SIDI:sub_ymm
    },
    {	// LOW32_ADDR_ACCESS_RBP_with_sub_32bit
      3,	// LOW32_ADDR_ACCESS_RBP_with_sub_32bit:sub_8bit -> GR8_NOREX2
      0,	// LOW32_ADDR_ACCESS_RBP_with_sub_32bit:sub_8bit_hi
      0,	// LOW32_ADDR_ACCESS_RBP_with_sub_32bit:sub_8bit_hi_phony
      10,	// LOW32_ADDR_ACCESS_RBP_with_sub_32bit:sub_16bit -> GR16_NOREX
      0,	// LOW32_ADDR_ACCESS_RBP_with_sub_32bit:sub_16bit_hi
      66,	// LOW32_ADDR_ACCESS_RBP_with_sub_32bit:sub_32bit -> GR32_BPSP_and_GR32_DIBP
      0,	// LOW32_ADDR_ACCESS_RBP_with_sub_32bit:sub_mask_0
      0,	// LOW32_ADDR_ACCESS_RBP_with_sub_32bit:sub_mask_1
      0,	// LOW32_ADDR_ACCESS_RBP_with_sub_32bit:sub_xmm
      0,	// LOW32_ADDR_ACCESS_RBP_with_sub_32bit:sub_ymm
    },
    {	// CCR
      0,	// CCR:sub_8bit
      0,	// CCR:sub_8bit_hi
      0,	// CCR:sub_8bit_hi_phony
      0,	// CCR:sub_16bit
      0,	// CCR:sub_16bit_hi
      0,	// CCR:sub_32bit
      0,	// CCR:sub_mask_0
      0,	// CCR:sub_mask_1
      0,	// CCR:sub_xmm
      0,	// CCR:sub_ymm
    },
    {	// DFCCR
      0,	// DFCCR:sub_8bit
      0,	// DFCCR:sub_8bit_hi
      0,	// DFCCR:sub_8bit_hi_phony
      0,	// DFCCR:sub_16bit
      0,	// DFCCR:sub_16bit_hi
      0,	// DFCCR:sub_32bit
      0,	// DFCCR:sub_mask_0
      0,	// DFCCR:sub_mask_1
      0,	// DFCCR:sub_xmm
      0,	// DFCCR:sub_ymm
    },
    {	// GR32_ABCD_and_GR32_BSI
      6,	// GR32_ABCD_and_GR32_BSI:sub_8bit -> GR8_ABCD_L
      5,	// GR32_ABCD_and_GR32_BSI:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR32_ABCD_and_GR32_BSI:sub_8bit_hi_phony
      22,	// GR32_ABCD_and_GR32_BSI:sub_16bit -> GR16_ABCD
      0,	// GR32_ABCD_and_GR32_BSI:sub_16bit_hi
      0,	// GR32_ABCD_and_GR32_BSI:sub_32bit
      0,	// GR32_ABCD_and_GR32_BSI:sub_mask_0
      0,	// GR32_ABCD_and_GR32_BSI:sub_mask_1
      0,	// GR32_ABCD_and_GR32_BSI:sub_xmm
      0,	// GR32_ABCD_and_GR32_BSI:sub_ymm
    },
    {	// GR32_AD_and_GR32_ArgRef
      6,	// GR32_AD_and_GR32_ArgRef:sub_8bit -> GR8_ABCD_L
      5,	// GR32_AD_and_GR32_ArgRef:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR32_AD_and_GR32_ArgRef:sub_8bit_hi_phony
      22,	// GR32_AD_and_GR32_ArgRef:sub_16bit -> GR16_ABCD
      0,	// GR32_AD_and_GR32_ArgRef:sub_16bit_hi
      0,	// GR32_AD_and_GR32_ArgRef:sub_32bit
      0,	// GR32_AD_and_GR32_ArgRef:sub_mask_0
      0,	// GR32_AD_and_GR32_ArgRef:sub_mask_1
      0,	// GR32_AD_and_GR32_ArgRef:sub_xmm
      0,	// GR32_AD_and_GR32_ArgRef:sub_ymm
    },
    {	// GR32_ArgRef_and_GR32_CB
      6,	// GR32_ArgRef_and_GR32_CB:sub_8bit -> GR8_ABCD_L
      5,	// GR32_ArgRef_and_GR32_CB:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR32_ArgRef_and_GR32_CB:sub_8bit_hi_phony
      22,	// GR32_ArgRef_and_GR32_CB:sub_16bit -> GR16_ABCD
      0,	// GR32_ArgRef_and_GR32_CB:sub_16bit_hi
      0,	// GR32_ArgRef_and_GR32_CB:sub_32bit
      0,	// GR32_ArgRef_and_GR32_CB:sub_mask_0
      0,	// GR32_ArgRef_and_GR32_CB:sub_mask_1
      0,	// GR32_ArgRef_and_GR32_CB:sub_xmm
      0,	// GR32_ArgRef_and_GR32_CB:sub_ymm
    },
    {	// GR32_BPSP_and_GR32_DIBP
      3,	// GR32_BPSP_and_GR32_DIBP:sub_8bit -> GR8_NOREX2
      0,	// GR32_BPSP_and_GR32_DIBP:sub_8bit_hi
      0,	// GR32_BPSP_and_GR32_DIBP:sub_8bit_hi_phony
      10,	// GR32_BPSP_and_GR32_DIBP:sub_16bit -> GR16_NOREX
      0,	// GR32_BPSP_and_GR32_DIBP:sub_16bit_hi
      0,	// GR32_BPSP_and_GR32_DIBP:sub_32bit
      0,	// GR32_BPSP_and_GR32_DIBP:sub_mask_0
      0,	// GR32_BPSP_and_GR32_DIBP:sub_mask_1
      0,	// GR32_BPSP_and_GR32_DIBP:sub_xmm
      0,	// GR32_BPSP_and_GR32_DIBP:sub_ymm
    },
    {	// GR32_BPSP_and_GR32_TC
      3,	// GR32_BPSP_and_GR32_TC:sub_8bit -> GR8_NOREX2
      0,	// GR32_BPSP_and_GR32_TC:sub_8bit_hi
      0,	// GR32_BPSP_and_GR32_TC:sub_8bit_hi_phony
      10,	// GR32_BPSP_and_GR32_TC:sub_16bit -> GR16_NOREX
      0,	// GR32_BPSP_and_GR32_TC:sub_16bit_hi
      0,	// GR32_BPSP_and_GR32_TC:sub_32bit
      0,	// GR32_BPSP_and_GR32_TC:sub_mask_0
      0,	// GR32_BPSP_and_GR32_TC:sub_mask_1
      0,	// GR32_BPSP_and_GR32_TC:sub_xmm
      0,	// GR32_BPSP_and_GR32_TC:sub_ymm
    },
    {	// GR32_BSI_and_GR32_SIDI
      3,	// GR32_BSI_and_GR32_SIDI:sub_8bit -> GR8_NOREX2
      0,	// GR32_BSI_and_GR32_SIDI:sub_8bit_hi
      0,	// GR32_BSI_and_GR32_SIDI:sub_8bit_hi_phony
      10,	// GR32_BSI_and_GR32_SIDI:sub_16bit -> GR16_NOREX
      0,	// GR32_BSI_and_GR32_SIDI:sub_16bit_hi
      0,	// GR32_BSI_and_GR32_SIDI:sub_32bit
      0,	// GR32_BSI_and_GR32_SIDI:sub_mask_0
      0,	// GR32_BSI_and_GR32_SIDI:sub_mask_1
      0,	// GR32_BSI_and_GR32_SIDI:sub_xmm
      0,	// GR32_BSI_and_GR32_SIDI:sub_ymm
    },
    {	// GR32_DIBP_and_GR32_SIDI
      3,	// GR32_DIBP_and_GR32_SIDI:sub_8bit -> GR8_NOREX2
      0,	// GR32_DIBP_and_GR32_SIDI:sub_8bit_hi
      0,	// GR32_DIBP_and_GR32_SIDI:sub_8bit_hi_phony
      10,	// GR32_DIBP_and_GR32_SIDI:sub_16bit -> GR16_NOREX
      0,	// GR32_DIBP_and_GR32_SIDI:sub_16bit_hi
      0,	// GR32_DIBP_and_GR32_SIDI:sub_32bit
      0,	// GR32_DIBP_and_GR32_SIDI:sub_mask_0
      0,	// GR32_DIBP_and_GR32_SIDI:sub_mask_1
      0,	// GR32_DIBP_and_GR32_SIDI:sub_xmm
      0,	// GR32_DIBP_and_GR32_SIDI:sub_ymm
    },
    {	// LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit
      3,	// LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit:sub_8bit -> GR8_NOREX2
      0,	// LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit:sub_8bit_hi
      0,	// LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit:sub_8bit_hi_phony
      10,	// LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit:sub_16bit -> GR16_NOREX
      0,	// LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit:sub_16bit_hi
      66,	// LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit:sub_32bit -> GR32_BPSP_and_GR32_DIBP
      0,	// LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit:sub_mask_0
      0,	// LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit:sub_mask_1
      0,	// LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit:sub_xmm
      0,	// LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit:sub_ymm
    },
    {	// LOW32_ADDR_ACCESS_with_sub_32bit
      0,	// LOW32_ADDR_ACCESS_with_sub_32bit:sub_8bit
      0,	// LOW32_ADDR_ACCESS_with_sub_32bit:sub_8bit_hi
      0,	// LOW32_ADDR_ACCESS_with_sub_32bit:sub_8bit_hi_phony
      0,	// LOW32_ADDR_ACCESS_with_sub_32bit:sub_16bit
      0,	// LOW32_ADDR_ACCESS_with_sub_32bit:sub_16bit_hi
      0,	// LOW32_ADDR_ACCESS_with_sub_32bit:sub_32bit
      0,	// LOW32_ADDR_ACCESS_with_sub_32bit:sub_mask_0
      0,	// LOW32_ADDR_ACCESS_with_sub_32bit:sub_mask_1
      0,	// LOW32_ADDR_ACCESS_with_sub_32bit:sub_xmm
      0,	// LOW32_ADDR_ACCESS_with_sub_32bit:sub_ymm
    },
    {	// RFP64
      0,	// RFP64:sub_8bit
      0,	// RFP64:sub_8bit_hi
      0,	// RFP64:sub_8bit_hi_phony
      0,	// RFP64:sub_16bit
      0,	// RFP64:sub_16bit_hi
      0,	// RFP64:sub_32bit
      0,	// RFP64:sub_mask_0
      0,	// RFP64:sub_mask_1
      0,	// RFP64:sub_xmm
      0,	// RFP64:sub_ymm
    },
    {	// GR64
      1,	// GR64:sub_8bit -> GR8
      5,	// GR64:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR64:sub_8bit_hi_phony
      8,	// GR64:sub_16bit -> GR16
      0,	// GR64:sub_16bit_hi
      36,	// GR64:sub_32bit -> GR32
      0,	// GR64:sub_mask_0
      0,	// GR64:sub_mask_1
      0,	// GR64:sub_xmm
      0,	// GR64:sub_ymm
    },
    {	// FR64X
      0,	// FR64X:sub_8bit
      0,	// FR64X:sub_8bit_hi
      0,	// FR64X:sub_8bit_hi_phony
      0,	// FR64X:sub_16bit
      0,	// FR64X:sub_16bit_hi
      0,	// FR64X:sub_32bit
      0,	// FR64X:sub_mask_0
      0,	// FR64X:sub_mask_1
      0,	// FR64X:sub_xmm
      0,	// FR64X:sub_ymm
    },
    {	// GR64_with_sub_8bit
      1,	// GR64_with_sub_8bit:sub_8bit -> GR8
      5,	// GR64_with_sub_8bit:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR64_with_sub_8bit:sub_8bit_hi_phony
      8,	// GR64_with_sub_8bit:sub_16bit -> GR16
      0,	// GR64_with_sub_8bit:sub_16bit_hi
      36,	// GR64_with_sub_8bit:sub_32bit -> GR32
      0,	// GR64_with_sub_8bit:sub_mask_0
      0,	// GR64_with_sub_8bit:sub_mask_1
      0,	// GR64_with_sub_8bit:sub_xmm
      0,	// GR64_with_sub_8bit:sub_ymm
    },
    {	// GR64_NOSP
      1,	// GR64_NOSP:sub_8bit -> GR8
      5,	// GR64_NOSP:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR64_NOSP:sub_8bit_hi_phony
      8,	// GR64_NOSP:sub_16bit -> GR16
      0,	// GR64_NOSP:sub_16bit_hi
      37,	// GR64_NOSP:sub_32bit -> GR32_NOSP
      0,	// GR64_NOSP:sub_mask_0
      0,	// GR64_NOSP:sub_mask_1
      0,	// GR64_NOSP:sub_xmm
      0,	// GR64_NOSP:sub_ymm
    },
    {	// GR64_NOREX2
      3,	// GR64_NOREX2:sub_8bit -> GR8_NOREX2
      5,	// GR64_NOREX2:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR64_NOREX2:sub_8bit_hi_phony
      9,	// GR64_NOREX2:sub_16bit -> GR16_NOREX2
      0,	// GR64_NOREX2:sub_16bit_hi
      41,	// GR64_NOREX2:sub_32bit -> GR32_NOREX2
      0,	// GR64_NOREX2:sub_mask_0
      0,	// GR64_NOREX2:sub_mask_1
      0,	// GR64_NOREX2:sub_xmm
      0,	// GR64_NOREX2:sub_ymm
    },
    {	// CONTROL_REG
      0,	// CONTROL_REG:sub_8bit
      0,	// CONTROL_REG:sub_8bit_hi
      0,	// CONTROL_REG:sub_8bit_hi_phony
      0,	// CONTROL_REG:sub_16bit
      0,	// CONTROL_REG:sub_16bit_hi
      0,	// CONTROL_REG:sub_32bit
      0,	// CONTROL_REG:sub_mask_0
      0,	// CONTROL_REG:sub_mask_1
      0,	// CONTROL_REG:sub_xmm
      0,	// CONTROL_REG:sub_ymm
    },
    {	// FR64
      0,	// FR64:sub_8bit
      0,	// FR64:sub_8bit_hi
      0,	// FR64:sub_8bit_hi_phony
      0,	// FR64:sub_16bit
      0,	// FR64:sub_16bit_hi
      0,	// FR64:sub_32bit
      0,	// FR64:sub_mask_0
      0,	// FR64:sub_mask_1
      0,	// FR64:sub_xmm
      0,	// FR64:sub_ymm
    },
    {	// GR64_with_sub_16bit_in_GR16_NOREX2
      3,	// GR64_with_sub_16bit_in_GR16_NOREX2:sub_8bit -> GR8_NOREX2
      5,	// GR64_with_sub_16bit_in_GR16_NOREX2:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR64_with_sub_16bit_in_GR16_NOREX2:sub_8bit_hi_phony
      9,	// GR64_with_sub_16bit_in_GR16_NOREX2:sub_16bit -> GR16_NOREX2
      0,	// GR64_with_sub_16bit_in_GR16_NOREX2:sub_16bit_hi
      41,	// GR64_with_sub_16bit_in_GR16_NOREX2:sub_32bit -> GR32_NOREX2
      0,	// GR64_with_sub_16bit_in_GR16_NOREX2:sub_mask_0
      0,	// GR64_with_sub_16bit_in_GR16_NOREX2:sub_mask_1
      0,	// GR64_with_sub_16bit_in_GR16_NOREX2:sub_xmm
      0,	// GR64_with_sub_16bit_in_GR16_NOREX2:sub_ymm
    },
    {	// GR64_NOREX2_NOSP
      3,	// GR64_NOREX2_NOSP:sub_8bit -> GR8_NOREX2
      5,	// GR64_NOREX2_NOSP:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR64_NOREX2_NOSP:sub_8bit_hi_phony
      9,	// GR64_NOREX2_NOSP:sub_16bit -> GR16_NOREX2
      0,	// GR64_NOREX2_NOSP:sub_16bit_hi
      42,	// GR64_NOREX2_NOSP:sub_32bit -> GR32_NOREX2_NOSP
      0,	// GR64_NOREX2_NOSP:sub_mask_0
      0,	// GR64_NOREX2_NOSP:sub_mask_1
      0,	// GR64_NOREX2_NOSP:sub_xmm
      0,	// GR64_NOREX2_NOSP:sub_ymm
    },
    {	// GR64PLTSafe
      3,	// GR64PLTSafe:sub_8bit -> GR8_NOREX2
      5,	// GR64PLTSafe:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR64PLTSafe:sub_8bit_hi_phony
      9,	// GR64PLTSafe:sub_16bit -> GR16_NOREX2
      0,	// GR64PLTSafe:sub_16bit_hi
      42,	// GR64PLTSafe:sub_32bit -> GR32_NOREX2_NOSP
      0,	// GR64PLTSafe:sub_mask_0
      0,	// GR64PLTSafe:sub_mask_1
      0,	// GR64PLTSafe:sub_xmm
      0,	// GR64PLTSafe:sub_ymm
    },
    {	// GR64_TC
      3,	// GR64_TC:sub_8bit -> GR8_NOREX2
      5,	// GR64_TC:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR64_TC:sub_8bit_hi_phony
      9,	// GR64_TC:sub_16bit -> GR16_NOREX2
      0,	// GR64_TC:sub_16bit_hi
      41,	// GR64_TC:sub_32bit -> GR32_NOREX2
      0,	// GR64_TC:sub_mask_0
      0,	// GR64_TC:sub_mask_1
      0,	// GR64_TC:sub_xmm
      0,	// GR64_TC:sub_ymm
    },
    {	// GR64_NOREX
      3,	// GR64_NOREX:sub_8bit -> GR8_NOREX2
      5,	// GR64_NOREX:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR64_NOREX:sub_8bit_hi_phony
      10,	// GR64_NOREX:sub_16bit -> GR16_NOREX
      0,	// GR64_NOREX:sub_16bit_hi
      44,	// GR64_NOREX:sub_32bit -> GR32_NOREX
      0,	// GR64_NOREX:sub_mask_0
      0,	// GR64_NOREX:sub_mask_1
      0,	// GR64_NOREX:sub_xmm
      0,	// GR64_NOREX:sub_ymm
    },
    {	// GR64_TCW64
      3,	// GR64_TCW64:sub_8bit -> GR8_NOREX2
      5,	// GR64_TCW64:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR64_TCW64:sub_8bit_hi_phony
      9,	// GR64_TCW64:sub_16bit -> GR16_NOREX2
      0,	// GR64_TCW64:sub_16bit_hi
      41,	// GR64_TCW64:sub_32bit -> GR32_NOREX2
      0,	// GR64_TCW64:sub_mask_0
      0,	// GR64_TCW64:sub_mask_1
      0,	// GR64_TCW64:sub_xmm
      0,	// GR64_TCW64:sub_ymm
    },
    {	// GR64_TC_with_sub_8bit
      3,	// GR64_TC_with_sub_8bit:sub_8bit -> GR8_NOREX2
      5,	// GR64_TC_with_sub_8bit:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR64_TC_with_sub_8bit:sub_8bit_hi_phony
      9,	// GR64_TC_with_sub_8bit:sub_16bit -> GR16_NOREX2
      0,	// GR64_TC_with_sub_8bit:sub_16bit_hi
      41,	// GR64_TC_with_sub_8bit:sub_32bit -> GR32_NOREX2
      0,	// GR64_TC_with_sub_8bit:sub_mask_0
      0,	// GR64_TC_with_sub_8bit:sub_mask_1
      0,	// GR64_TC_with_sub_8bit:sub_xmm
      0,	// GR64_TC_with_sub_8bit:sub_ymm
    },
    {	// GR64_NOREX2_NOSP_and_GR64_TC
      3,	// GR64_NOREX2_NOSP_and_GR64_TC:sub_8bit -> GR8_NOREX2
      5,	// GR64_NOREX2_NOSP_and_GR64_TC:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR64_NOREX2_NOSP_and_GR64_TC:sub_8bit_hi_phony
      9,	// GR64_NOREX2_NOSP_and_GR64_TC:sub_16bit -> GR16_NOREX2
      0,	// GR64_NOREX2_NOSP_and_GR64_TC:sub_16bit_hi
      42,	// GR64_NOREX2_NOSP_and_GR64_TC:sub_32bit -> GR32_NOREX2_NOSP
      0,	// GR64_NOREX2_NOSP_and_GR64_TC:sub_mask_0
      0,	// GR64_NOREX2_NOSP_and_GR64_TC:sub_mask_1
      0,	// GR64_NOREX2_NOSP_and_GR64_TC:sub_xmm
      0,	// GR64_NOREX2_NOSP_and_GR64_TC:sub_ymm
    },
    {	// GR64_TCW64_with_sub_8bit
      3,	// GR64_TCW64_with_sub_8bit:sub_8bit -> GR8_NOREX2
      5,	// GR64_TCW64_with_sub_8bit:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR64_TCW64_with_sub_8bit:sub_8bit_hi_phony
      9,	// GR64_TCW64_with_sub_8bit:sub_16bit -> GR16_NOREX2
      0,	// GR64_TCW64_with_sub_8bit:sub_16bit_hi
      41,	// GR64_TCW64_with_sub_8bit:sub_32bit -> GR32_NOREX2
      0,	// GR64_TCW64_with_sub_8bit:sub_mask_0
      0,	// GR64_TCW64_with_sub_8bit:sub_mask_1
      0,	// GR64_TCW64_with_sub_8bit:sub_xmm
      0,	// GR64_TCW64_with_sub_8bit:sub_ymm
    },
    {	// GR64_TC_and_GR64_TCW64
      3,	// GR64_TC_and_GR64_TCW64:sub_8bit -> GR8_NOREX2
      5,	// GR64_TC_and_GR64_TCW64:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR64_TC_and_GR64_TCW64:sub_8bit_hi_phony
      9,	// GR64_TC_and_GR64_TCW64:sub_16bit -> GR16_NOREX2
      0,	// GR64_TC_and_GR64_TCW64:sub_16bit_hi
      41,	// GR64_TC_and_GR64_TCW64:sub_32bit -> GR32_NOREX2
      0,	// GR64_TC_and_GR64_TCW64:sub_mask_0
      0,	// GR64_TC_and_GR64_TCW64:sub_mask_1
      0,	// GR64_TC_and_GR64_TCW64:sub_xmm
      0,	// GR64_TC_and_GR64_TCW64:sub_ymm
    },
    {	// GR64_with_sub_16bit_in_GR16_NOREX
      3,	// GR64_with_sub_16bit_in_GR16_NOREX:sub_8bit -> GR8_NOREX2
      5,	// GR64_with_sub_16bit_in_GR16_NOREX:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR64_with_sub_16bit_in_GR16_NOREX:sub_8bit_hi_phony
      10,	// GR64_with_sub_16bit_in_GR16_NOREX:sub_16bit -> GR16_NOREX
      0,	// GR64_with_sub_16bit_in_GR16_NOREX:sub_16bit_hi
      44,	// GR64_with_sub_16bit_in_GR16_NOREX:sub_32bit -> GR32_NOREX
      0,	// GR64_with_sub_16bit_in_GR16_NOREX:sub_mask_0
      0,	// GR64_with_sub_16bit_in_GR16_NOREX:sub_mask_1
      0,	// GR64_with_sub_16bit_in_GR16_NOREX:sub_xmm
      0,	// GR64_with_sub_16bit_in_GR16_NOREX:sub_ymm
    },
    {	// VK64
      0,	// VK64:sub_8bit
      0,	// VK64:sub_8bit_hi
      0,	// VK64:sub_8bit_hi_phony
      0,	// VK64:sub_16bit
      0,	// VK64:sub_16bit_hi
      0,	// VK64:sub_32bit
      0,	// VK64:sub_mask_0
      0,	// VK64:sub_mask_1
      0,	// VK64:sub_xmm
      0,	// VK64:sub_ymm
    },
    {	// VR64
      0,	// VR64:sub_8bit
      0,	// VR64:sub_8bit_hi
      0,	// VR64:sub_8bit_hi_phony
      0,	// VR64:sub_16bit
      0,	// VR64:sub_16bit_hi
      0,	// VR64:sub_32bit
      0,	// VR64:sub_mask_0
      0,	// VR64:sub_mask_1
      0,	// VR64:sub_xmm
      0,	// VR64:sub_ymm
    },
    {	// GR64PLTSafe_and_GR64_TC
      3,	// GR64PLTSafe_and_GR64_TC:sub_8bit -> GR8_NOREX2
      5,	// GR64PLTSafe_and_GR64_TC:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR64PLTSafe_and_GR64_TC:sub_8bit_hi_phony
      9,	// GR64PLTSafe_and_GR64_TC:sub_16bit -> GR16_NOREX2
      0,	// GR64PLTSafe_and_GR64_TC:sub_16bit_hi
      42,	// GR64PLTSafe_and_GR64_TC:sub_32bit -> GR32_NOREX2_NOSP
      0,	// GR64PLTSafe_and_GR64_TC:sub_mask_0
      0,	// GR64PLTSafe_and_GR64_TC:sub_mask_1
      0,	// GR64PLTSafe_and_GR64_TC:sub_xmm
      0,	// GR64PLTSafe_and_GR64_TC:sub_ymm
    },
    {	// GR64_NOREX2_NOSP_and_GR64_TCW64
      3,	// GR64_NOREX2_NOSP_and_GR64_TCW64:sub_8bit -> GR8_NOREX2
      5,	// GR64_NOREX2_NOSP_and_GR64_TCW64:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR64_NOREX2_NOSP_and_GR64_TCW64:sub_8bit_hi_phony
      9,	// GR64_NOREX2_NOSP_and_GR64_TCW64:sub_16bit -> GR16_NOREX2
      0,	// GR64_NOREX2_NOSP_and_GR64_TCW64:sub_16bit_hi
      42,	// GR64_NOREX2_NOSP_and_GR64_TCW64:sub_32bit -> GR32_NOREX2_NOSP
      0,	// GR64_NOREX2_NOSP_and_GR64_TCW64:sub_mask_0
      0,	// GR64_NOREX2_NOSP_and_GR64_TCW64:sub_mask_1
      0,	// GR64_NOREX2_NOSP_and_GR64_TCW64:sub_xmm
      0,	// GR64_NOREX2_NOSP_and_GR64_TCW64:sub_ymm
    },
    {	// GR64_NOREX_NOSP
      3,	// GR64_NOREX_NOSP:sub_8bit -> GR8_NOREX2
      5,	// GR64_NOREX_NOSP:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR64_NOREX_NOSP:sub_8bit_hi_phony
      10,	// GR64_NOREX_NOSP:sub_16bit -> GR16_NOREX
      0,	// GR64_NOREX_NOSP:sub_16bit_hi
      46,	// GR64_NOREX_NOSP:sub_32bit -> GR32_NOREX_NOSP
      0,	// GR64_NOREX_NOSP:sub_mask_0
      0,	// GR64_NOREX_NOSP:sub_mask_1
      0,	// GR64_NOREX_NOSP:sub_xmm
      0,	// GR64_NOREX_NOSP:sub_ymm
    },
    {	// GR64_NOREX_and_GR64_TC
      3,	// GR64_NOREX_and_GR64_TC:sub_8bit -> GR8_NOREX2
      5,	// GR64_NOREX_and_GR64_TC:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR64_NOREX_and_GR64_TC:sub_8bit_hi_phony
      10,	// GR64_NOREX_and_GR64_TC:sub_16bit -> GR16_NOREX
      0,	// GR64_NOREX_and_GR64_TC:sub_16bit_hi
      44,	// GR64_NOREX_and_GR64_TC:sub_32bit -> GR32_NOREX
      0,	// GR64_NOREX_and_GR64_TC:sub_mask_0
      0,	// GR64_NOREX_and_GR64_TC:sub_mask_1
      0,	// GR64_NOREX_and_GR64_TC:sub_xmm
      0,	// GR64_NOREX_and_GR64_TC:sub_ymm
    },
    {	// GR64_TCW64_and_GR64_TC_with_sub_8bit
      3,	// GR64_TCW64_and_GR64_TC_with_sub_8bit:sub_8bit -> GR8_NOREX2
      5,	// GR64_TCW64_and_GR64_TC_with_sub_8bit:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR64_TCW64_and_GR64_TC_with_sub_8bit:sub_8bit_hi_phony
      9,	// GR64_TCW64_and_GR64_TC_with_sub_8bit:sub_16bit -> GR16_NOREX2
      0,	// GR64_TCW64_and_GR64_TC_with_sub_8bit:sub_16bit_hi
      41,	// GR64_TCW64_and_GR64_TC_with_sub_8bit:sub_32bit -> GR32_NOREX2
      0,	// GR64_TCW64_and_GR64_TC_with_sub_8bit:sub_mask_0
      0,	// GR64_TCW64_and_GR64_TC_with_sub_8bit:sub_mask_1
      0,	// GR64_TCW64_and_GR64_TC_with_sub_8bit:sub_xmm
      0,	// GR64_TCW64_and_GR64_TC_with_sub_8bit:sub_ymm
    },
    {	// VK64WM
      0,	// VK64WM:sub_8bit
      0,	// VK64WM:sub_8bit_hi
      0,	// VK64WM:sub_8bit_hi_phony
      0,	// VK64WM:sub_16bit
      0,	// VK64WM:sub_16bit_hi
      0,	// VK64WM:sub_32bit
      0,	// VK64WM:sub_mask_0
      0,	// VK64WM:sub_mask_1
      0,	// VK64WM:sub_xmm
      0,	// VK64WM:sub_ymm
    },
    {	// GR64_TC_and_GR64_NOREX2_NOSP_and_GR64_TCW64
      3,	// GR64_TC_and_GR64_NOREX2_NOSP_and_GR64_TCW64:sub_8bit -> GR8_NOREX2
      5,	// GR64_TC_and_GR64_NOREX2_NOSP_and_GR64_TCW64:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR64_TC_and_GR64_NOREX2_NOSP_and_GR64_TCW64:sub_8bit_hi_phony
      9,	// GR64_TC_and_GR64_NOREX2_NOSP_and_GR64_TCW64:sub_16bit -> GR16_NOREX2
      0,	// GR64_TC_and_GR64_NOREX2_NOSP_and_GR64_TCW64:sub_16bit_hi
      42,	// GR64_TC_and_GR64_NOREX2_NOSP_and_GR64_TCW64:sub_32bit -> GR32_NOREX2_NOSP
      0,	// GR64_TC_and_GR64_NOREX2_NOSP_and_GR64_TCW64:sub_mask_0
      0,	// GR64_TC_and_GR64_NOREX2_NOSP_and_GR64_TCW64:sub_mask_1
      0,	// GR64_TC_and_GR64_NOREX2_NOSP_and_GR64_TCW64:sub_xmm
      0,	// GR64_TC_and_GR64_NOREX2_NOSP_and_GR64_TCW64:sub_ymm
    },
    {	// GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREX
      3,	// GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREX:sub_8bit -> GR8_NOREX2
      5,	// GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREX:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREX:sub_8bit_hi_phony
      10,	// GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREX:sub_16bit -> GR16_NOREX
      0,	// GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREX:sub_16bit_hi
      44,	// GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREX:sub_32bit -> GR32_NOREX
      0,	// GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREX:sub_mask_0
      0,	// GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREX:sub_mask_1
      0,	// GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREX:sub_xmm
      0,	// GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREX:sub_ymm
    },
    {	// GR64PLTSafe_and_GR64_TCW64
      3,	// GR64PLTSafe_and_GR64_TCW64:sub_8bit -> GR8_NOREX2
      5,	// GR64PLTSafe_and_GR64_TCW64:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR64PLTSafe_and_GR64_TCW64:sub_8bit_hi_phony
      9,	// GR64PLTSafe_and_GR64_TCW64:sub_16bit -> GR16_NOREX2
      0,	// GR64PLTSafe_and_GR64_TCW64:sub_16bit_hi
      42,	// GR64PLTSafe_and_GR64_TCW64:sub_32bit -> GR32_NOREX2_NOSP
      0,	// GR64PLTSafe_and_GR64_TCW64:sub_mask_0
      0,	// GR64PLTSafe_and_GR64_TCW64:sub_mask_1
      0,	// GR64PLTSafe_and_GR64_TCW64:sub_xmm
      0,	// GR64PLTSafe_and_GR64_TCW64:sub_ymm
    },
    {	// GR64_NOREX_and_GR64PLTSafe_and_GR64_TC
      3,	// GR64_NOREX_and_GR64PLTSafe_and_GR64_TC:sub_8bit -> GR8_NOREX2
      5,	// GR64_NOREX_and_GR64PLTSafe_and_GR64_TC:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR64_NOREX_and_GR64PLTSafe_and_GR64_TC:sub_8bit_hi_phony
      10,	// GR64_NOREX_and_GR64PLTSafe_and_GR64_TC:sub_16bit -> GR16_NOREX
      0,	// GR64_NOREX_and_GR64PLTSafe_and_GR64_TC:sub_16bit_hi
      46,	// GR64_NOREX_and_GR64PLTSafe_and_GR64_TC:sub_32bit -> GR32_NOREX_NOSP
      0,	// GR64_NOREX_and_GR64PLTSafe_and_GR64_TC:sub_mask_0
      0,	// GR64_NOREX_and_GR64PLTSafe_and_GR64_TC:sub_mask_1
      0,	// GR64_NOREX_and_GR64PLTSafe_and_GR64_TC:sub_xmm
      0,	// GR64_NOREX_and_GR64PLTSafe_and_GR64_TC:sub_ymm
    },
    {	// GR64_NOREX_and_GR64_TCW64
      3,	// GR64_NOREX_and_GR64_TCW64:sub_8bit -> GR8_NOREX2
      5,	// GR64_NOREX_and_GR64_TCW64:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR64_NOREX_and_GR64_TCW64:sub_8bit_hi_phony
      10,	// GR64_NOREX_and_GR64_TCW64:sub_16bit -> GR16_NOREX
      0,	// GR64_NOREX_and_GR64_TCW64:sub_16bit_hi
      50,	// GR64_NOREX_and_GR64_TCW64:sub_32bit -> GR32_TC
      0,	// GR64_NOREX_and_GR64_TCW64:sub_mask_0
      0,	// GR64_NOREX_and_GR64_TCW64:sub_mask_1
      0,	// GR64_NOREX_and_GR64_TCW64:sub_xmm
      0,	// GR64_NOREX_and_GR64_TCW64:sub_ymm
    },
    {	// GR64_ABCD
      6,	// GR64_ABCD:sub_8bit -> GR8_ABCD_L
      5,	// GR64_ABCD:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR64_ABCD:sub_8bit_hi_phony
      22,	// GR64_ABCD:sub_16bit -> GR16_ABCD
      0,	// GR64_ABCD:sub_16bit_hi
      49,	// GR64_ABCD:sub_32bit -> GR32_ABCD
      0,	// GR64_ABCD:sub_mask_0
      0,	// GR64_ABCD:sub_mask_1
      0,	// GR64_ABCD:sub_xmm
      0,	// GR64_ABCD:sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_TC
      3,	// GR64_with_sub_32bit_in_GR32_TC:sub_8bit -> GR8_NOREX2
      5,	// GR64_with_sub_32bit_in_GR32_TC:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR64_with_sub_32bit_in_GR32_TC:sub_8bit_hi_phony
      10,	// GR64_with_sub_32bit_in_GR32_TC:sub_16bit -> GR16_NOREX
      0,	// GR64_with_sub_32bit_in_GR32_TC:sub_16bit_hi
      50,	// GR64_with_sub_32bit_in_GR32_TC:sub_32bit -> GR32_TC
      0,	// GR64_with_sub_32bit_in_GR32_TC:sub_mask_0
      0,	// GR64_with_sub_32bit_in_GR32_TC:sub_mask_1
      0,	// GR64_with_sub_32bit_in_GR32_TC:sub_xmm
      0,	// GR64_with_sub_32bit_in_GR32_TC:sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      6,	// GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC:sub_8bit -> GR8_ABCD_L
      5,	// GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC:sub_8bit_hi_phony
      22,	// GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC:sub_16bit -> GR16_ABCD
      0,	// GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC:sub_16bit_hi
      51,	// GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC:sub_32bit -> GR32_ABCD_and_GR32_TC
      0,	// GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC:sub_mask_0
      0,	// GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC:sub_mask_1
      0,	// GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC:sub_xmm
      0,	// GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC:sub_ymm
    },
    {	// GR64_AD
      6,	// GR64_AD:sub_8bit -> GR8_ABCD_L
      5,	// GR64_AD:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR64_AD:sub_8bit_hi_phony
      22,	// GR64_AD:sub_16bit -> GR16_ABCD
      0,	// GR64_AD:sub_16bit_hi
      52,	// GR64_AD:sub_32bit -> GR32_AD
      0,	// GR64_AD:sub_mask_0
      0,	// GR64_AD:sub_mask_1
      0,	// GR64_AD:sub_xmm
      0,	// GR64_AD:sub_ymm
    },
    {	// GR64_ArgRef
      3,	// GR64_ArgRef:sub_8bit -> GR8_NOREX2
      0,	// GR64_ArgRef:sub_8bit_hi
      0,	// GR64_ArgRef:sub_8bit_hi_phony
      9,	// GR64_ArgRef:sub_16bit -> GR16_NOREX2
      0,	// GR64_ArgRef:sub_16bit_hi
      42,	// GR64_ArgRef:sub_32bit -> GR32_NOREX2_NOSP
      0,	// GR64_ArgRef:sub_mask_0
      0,	// GR64_ArgRef:sub_mask_1
      0,	// GR64_ArgRef:sub_xmm
      0,	// GR64_ArgRef:sub_ymm
    },
    {	// GR64_and_LOW32_ADDR_ACCESS_RBP
      3,	// GR64_and_LOW32_ADDR_ACCESS_RBP:sub_8bit -> GR8_NOREX2
      0,	// GR64_and_LOW32_ADDR_ACCESS_RBP:sub_8bit_hi
      0,	// GR64_and_LOW32_ADDR_ACCESS_RBP:sub_8bit_hi_phony
      10,	// GR64_and_LOW32_ADDR_ACCESS_RBP:sub_16bit -> GR16_NOREX
      0,	// GR64_and_LOW32_ADDR_ACCESS_RBP:sub_16bit_hi
      66,	// GR64_and_LOW32_ADDR_ACCESS_RBP:sub_32bit -> GR32_BPSP_and_GR32_DIBP
      0,	// GR64_and_LOW32_ADDR_ACCESS_RBP:sub_mask_0
      0,	// GR64_and_LOW32_ADDR_ACCESS_RBP:sub_mask_1
      0,	// GR64_and_LOW32_ADDR_ACCESS_RBP:sub_xmm
      0,	// GR64_and_LOW32_ADDR_ACCESS_RBP:sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_ArgRef
      6,	// GR64_with_sub_32bit_in_GR32_ArgRef:sub_8bit -> GR8_ABCD_L
      5,	// GR64_with_sub_32bit_in_GR32_ArgRef:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR64_with_sub_32bit_in_GR32_ArgRef:sub_8bit_hi_phony
      22,	// GR64_with_sub_32bit_in_GR32_ArgRef:sub_16bit -> GR16_ABCD
      0,	// GR64_with_sub_32bit_in_GR32_ArgRef:sub_16bit_hi
      53,	// GR64_with_sub_32bit_in_GR32_ArgRef:sub_32bit -> GR32_ArgRef
      0,	// GR64_with_sub_32bit_in_GR32_ArgRef:sub_mask_0
      0,	// GR64_with_sub_32bit_in_GR32_ArgRef:sub_mask_1
      0,	// GR64_with_sub_32bit_in_GR32_ArgRef:sub_xmm
      0,	// GR64_with_sub_32bit_in_GR32_ArgRef:sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_BPSP
      3,	// GR64_with_sub_32bit_in_GR32_BPSP:sub_8bit -> GR8_NOREX2
      0,	// GR64_with_sub_32bit_in_GR32_BPSP:sub_8bit_hi
      0,	// GR64_with_sub_32bit_in_GR32_BPSP:sub_8bit_hi_phony
      10,	// GR64_with_sub_32bit_in_GR32_BPSP:sub_16bit -> GR16_NOREX
      0,	// GR64_with_sub_32bit_in_GR32_BPSP:sub_16bit_hi
      54,	// GR64_with_sub_32bit_in_GR32_BPSP:sub_32bit -> GR32_BPSP
      0,	// GR64_with_sub_32bit_in_GR32_BPSP:sub_mask_0
      0,	// GR64_with_sub_32bit_in_GR32_BPSP:sub_mask_1
      0,	// GR64_with_sub_32bit_in_GR32_BPSP:sub_xmm
      0,	// GR64_with_sub_32bit_in_GR32_BPSP:sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_BSI
      3,	// GR64_with_sub_32bit_in_GR32_BSI:sub_8bit -> GR8_NOREX2
      5,	// GR64_with_sub_32bit_in_GR32_BSI:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR64_with_sub_32bit_in_GR32_BSI:sub_8bit_hi_phony
      10,	// GR64_with_sub_32bit_in_GR32_BSI:sub_16bit -> GR16_NOREX
      0,	// GR64_with_sub_32bit_in_GR32_BSI:sub_16bit_hi
      55,	// GR64_with_sub_32bit_in_GR32_BSI:sub_32bit -> GR32_BSI
      0,	// GR64_with_sub_32bit_in_GR32_BSI:sub_mask_0
      0,	// GR64_with_sub_32bit_in_GR32_BSI:sub_mask_1
      0,	// GR64_with_sub_32bit_in_GR32_BSI:sub_xmm
      0,	// GR64_with_sub_32bit_in_GR32_BSI:sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_CB
      6,	// GR64_with_sub_32bit_in_GR32_CB:sub_8bit -> GR8_ABCD_L
      5,	// GR64_with_sub_32bit_in_GR32_CB:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR64_with_sub_32bit_in_GR32_CB:sub_8bit_hi_phony
      22,	// GR64_with_sub_32bit_in_GR32_CB:sub_16bit -> GR16_ABCD
      0,	// GR64_with_sub_32bit_in_GR32_CB:sub_16bit_hi
      56,	// GR64_with_sub_32bit_in_GR32_CB:sub_32bit -> GR32_CB
      0,	// GR64_with_sub_32bit_in_GR32_CB:sub_mask_0
      0,	// GR64_with_sub_32bit_in_GR32_CB:sub_mask_1
      0,	// GR64_with_sub_32bit_in_GR32_CB:sub_xmm
      0,	// GR64_with_sub_32bit_in_GR32_CB:sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_DIBP
      3,	// GR64_with_sub_32bit_in_GR32_DIBP:sub_8bit -> GR8_NOREX2
      0,	// GR64_with_sub_32bit_in_GR32_DIBP:sub_8bit_hi
      0,	// GR64_with_sub_32bit_in_GR32_DIBP:sub_8bit_hi_phony
      10,	// GR64_with_sub_32bit_in_GR32_DIBP:sub_16bit -> GR16_NOREX
      0,	// GR64_with_sub_32bit_in_GR32_DIBP:sub_16bit_hi
      58,	// GR64_with_sub_32bit_in_GR32_DIBP:sub_32bit -> GR32_DIBP
      0,	// GR64_with_sub_32bit_in_GR32_DIBP:sub_mask_0
      0,	// GR64_with_sub_32bit_in_GR32_DIBP:sub_mask_1
      0,	// GR64_with_sub_32bit_in_GR32_DIBP:sub_xmm
      0,	// GR64_with_sub_32bit_in_GR32_DIBP:sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_SIDI
      3,	// GR64_with_sub_32bit_in_GR32_SIDI:sub_8bit -> GR8_NOREX2
      0,	// GR64_with_sub_32bit_in_GR32_SIDI:sub_8bit_hi
      0,	// GR64_with_sub_32bit_in_GR32_SIDI:sub_8bit_hi_phony
      10,	// GR64_with_sub_32bit_in_GR32_SIDI:sub_16bit -> GR16_NOREX
      0,	// GR64_with_sub_32bit_in_GR32_SIDI:sub_16bit_hi
      59,	// GR64_with_sub_32bit_in_GR32_SIDI:sub_32bit -> GR32_SIDI
      0,	// GR64_with_sub_32bit_in_GR32_SIDI:sub_mask_0
      0,	// GR64_with_sub_32bit_in_GR32_SIDI:sub_mask_1
      0,	// GR64_with_sub_32bit_in_GR32_SIDI:sub_xmm
      0,	// GR64_with_sub_32bit_in_GR32_SIDI:sub_ymm
    },
    {	// GR64_A
      6,	// GR64_A:sub_8bit -> GR8_ABCD_L
      5,	// GR64_A:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR64_A:sub_8bit_hi_phony
      22,	// GR64_A:sub_16bit -> GR16_ABCD
      0,	// GR64_A:sub_16bit_hi
      52,	// GR64_A:sub_32bit -> GR32_AD
      0,	// GR64_A:sub_mask_0
      0,	// GR64_A:sub_mask_1
      0,	// GR64_A:sub_xmm
      0,	// GR64_A:sub_ymm
    },
    {	// GR64_ArgRef_and_GR64_TC
      3,	// GR64_ArgRef_and_GR64_TC:sub_8bit -> GR8_NOREX2
      0,	// GR64_ArgRef_and_GR64_TC:sub_8bit_hi
      0,	// GR64_ArgRef_and_GR64_TC:sub_8bit_hi_phony
      9,	// GR64_ArgRef_and_GR64_TC:sub_16bit -> GR16_NOREX2
      0,	// GR64_ArgRef_and_GR64_TC:sub_16bit_hi
      42,	// GR64_ArgRef_and_GR64_TC:sub_32bit -> GR32_NOREX2_NOSP
      0,	// GR64_ArgRef_and_GR64_TC:sub_mask_0
      0,	// GR64_ArgRef_and_GR64_TC:sub_mask_1
      0,	// GR64_ArgRef_and_GR64_TC:sub_xmm
      0,	// GR64_ArgRef_and_GR64_TC:sub_ymm
    },
    {	// GR64_and_LOW32_ADDR_ACCESS
      0,	// GR64_and_LOW32_ADDR_ACCESS:sub_8bit
      0,	// GR64_and_LOW32_ADDR_ACCESS:sub_8bit_hi
      0,	// GR64_and_LOW32_ADDR_ACCESS:sub_8bit_hi_phony
      0,	// GR64_and_LOW32_ADDR_ACCESS:sub_16bit
      0,	// GR64_and_LOW32_ADDR_ACCESS:sub_16bit_hi
      0,	// GR64_and_LOW32_ADDR_ACCESS:sub_32bit
      0,	// GR64_and_LOW32_ADDR_ACCESS:sub_mask_0
      0,	// GR64_and_LOW32_ADDR_ACCESS:sub_mask_1
      0,	// GR64_and_LOW32_ADDR_ACCESS:sub_xmm
      0,	// GR64_and_LOW32_ADDR_ACCESS:sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSI
      6,	// GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSI:sub_8bit -> GR8_ABCD_L
      5,	// GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSI:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSI:sub_8bit_hi_phony
      22,	// GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSI:sub_16bit -> GR16_ABCD
      0,	// GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSI:sub_16bit_hi
      63,	// GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSI:sub_32bit -> GR32_ABCD_and_GR32_BSI
      0,	// GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSI:sub_mask_0
      0,	// GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSI:sub_mask_1
      0,	// GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSI:sub_xmm
      0,	// GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSI:sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_AD_and_GR32_ArgRef
      6,	// GR64_with_sub_32bit_in_GR32_AD_and_GR32_ArgRef:sub_8bit -> GR8_ABCD_L
      5,	// GR64_with_sub_32bit_in_GR32_AD_and_GR32_ArgRef:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR64_with_sub_32bit_in_GR32_AD_and_GR32_ArgRef:sub_8bit_hi_phony
      22,	// GR64_with_sub_32bit_in_GR32_AD_and_GR32_ArgRef:sub_16bit -> GR16_ABCD
      0,	// GR64_with_sub_32bit_in_GR32_AD_and_GR32_ArgRef:sub_16bit_hi
      64,	// GR64_with_sub_32bit_in_GR32_AD_and_GR32_ArgRef:sub_32bit -> GR32_AD_and_GR32_ArgRef
      0,	// GR64_with_sub_32bit_in_GR32_AD_and_GR32_ArgRef:sub_mask_0
      0,	// GR64_with_sub_32bit_in_GR32_AD_and_GR32_ArgRef:sub_mask_1
      0,	// GR64_with_sub_32bit_in_GR32_AD_and_GR32_ArgRef:sub_xmm
      0,	// GR64_with_sub_32bit_in_GR32_AD_and_GR32_ArgRef:sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_ArgRef_and_GR32_CB
      6,	// GR64_with_sub_32bit_in_GR32_ArgRef_and_GR32_CB:sub_8bit -> GR8_ABCD_L
      5,	// GR64_with_sub_32bit_in_GR32_ArgRef_and_GR32_CB:sub_8bit_hi -> GR8_ABCD_H
      0,	// GR64_with_sub_32bit_in_GR32_ArgRef_and_GR32_CB:sub_8bit_hi_phony
      22,	// GR64_with_sub_32bit_in_GR32_ArgRef_and_GR32_CB:sub_16bit -> GR16_ABCD
      0,	// GR64_with_sub_32bit_in_GR32_ArgRef_and_GR32_CB:sub_16bit_hi
      65,	// GR64_with_sub_32bit_in_GR32_ArgRef_and_GR32_CB:sub_32bit -> GR32_ArgRef_and_GR32_CB
      0,	// GR64_with_sub_32bit_in_GR32_ArgRef_and_GR32_CB:sub_mask_0
      0,	// GR64_with_sub_32bit_in_GR32_ArgRef_and_GR32_CB:sub_mask_1
      0,	// GR64_with_sub_32bit_in_GR32_ArgRef_and_GR32_CB:sub_xmm
      0,	// GR64_with_sub_32bit_in_GR32_ArgRef_and_GR32_CB:sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBP
      3,	// GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBP:sub_8bit -> GR8_NOREX2
      0,	// GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBP:sub_8bit_hi
      0,	// GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBP:sub_8bit_hi_phony
      10,	// GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBP:sub_16bit -> GR16_NOREX
      0,	// GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBP:sub_16bit_hi
      66,	// GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBP:sub_32bit -> GR32_BPSP_and_GR32_DIBP
      0,	// GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBP:sub_mask_0
      0,	// GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBP:sub_mask_1
      0,	// GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBP:sub_xmm
      0,	// GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBP:sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TC
      3,	// GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TC:sub_8bit -> GR8_NOREX2
      0,	// GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TC:sub_8bit_hi
      0,	// GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TC:sub_8bit_hi_phony
      10,	// GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TC:sub_16bit -> GR16_NOREX
      0,	// GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TC:sub_16bit_hi
      67,	// GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TC:sub_32bit -> GR32_BPSP_and_GR32_TC
      0,	// GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TC:sub_mask_0
      0,	// GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TC:sub_mask_1
      0,	// GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TC:sub_xmm
      0,	// GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TC:sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDI
      3,	// GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDI:sub_8bit -> GR8_NOREX2
      0,	// GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDI:sub_8bit_hi
      0,	// GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDI:sub_8bit_hi_phony
      10,	// GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDI:sub_16bit -> GR16_NOREX
      0,	// GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDI:sub_16bit_hi
      68,	// GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDI:sub_32bit -> GR32_BSI_and_GR32_SIDI
      0,	// GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDI:sub_mask_0
      0,	// GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDI:sub_mask_1
      0,	// GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDI:sub_xmm
      0,	// GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDI:sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDI
      3,	// GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDI:sub_8bit -> GR8_NOREX2
      0,	// GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDI:sub_8bit_hi
      0,	// GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDI:sub_8bit_hi_phony
      10,	// GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDI:sub_16bit -> GR16_NOREX
      0,	// GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDI:sub_16bit_hi
      69,	// GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDI:sub_32bit -> GR32_DIBP_and_GR32_SIDI
      0,	// GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDI:sub_mask_0
      0,	// GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDI:sub_mask_1
      0,	// GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDI:sub_xmm
      0,	// GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDI:sub_ymm
    },
    {	// RST
      0,	// RST:sub_8bit
      0,	// RST:sub_8bit_hi
      0,	// RST:sub_8bit_hi_phony
      0,	// RST:sub_16bit
      0,	// RST:sub_16bit_hi
      0,	// RST:sub_32bit
      0,	// RST:sub_mask_0
      0,	// RST:sub_mask_1
      0,	// RST:sub_xmm
      0,	// RST:sub_ymm
    },
    {	// RFP80
      0,	// RFP80:sub_8bit
      0,	// RFP80:sub_8bit_hi
      0,	// RFP80:sub_8bit_hi_phony
      0,	// RFP80:sub_16bit
      0,	// RFP80:sub_16bit_hi
      0,	// RFP80:sub_32bit
      0,	// RFP80:sub_mask_0
      0,	// RFP80:sub_mask_1
      0,	// RFP80:sub_xmm
      0,	// RFP80:sub_ymm
    },
    {	// RFP80_7
      0,	// RFP80_7:sub_8bit
      0,	// RFP80_7:sub_8bit_hi
      0,	// RFP80_7:sub_8bit_hi_phony
      0,	// RFP80_7:sub_16bit
      0,	// RFP80_7:sub_16bit_hi
      0,	// RFP80_7:sub_32bit
      0,	// RFP80_7:sub_mask_0
      0,	// RFP80_7:sub_mask_1
      0,	// RFP80_7:sub_xmm
      0,	// RFP80_7:sub_ymm
    },
    {	// VR128X
      0,	// VR128X:sub_8bit
      0,	// VR128X:sub_8bit_hi
      0,	// VR128X:sub_8bit_hi_phony
      0,	// VR128X:sub_16bit
      0,	// VR128X:sub_16bit_hi
      0,	// VR128X:sub_32bit
      0,	// VR128X:sub_mask_0
      0,	// VR128X:sub_mask_1
      0,	// VR128X:sub_xmm
      0,	// VR128X:sub_ymm
    },
    {	// VR128
      0,	// VR128:sub_8bit
      0,	// VR128:sub_8bit_hi
      0,	// VR128:sub_8bit_hi_phony
      0,	// VR128:sub_16bit
      0,	// VR128:sub_16bit_hi
      0,	// VR128:sub_32bit
      0,	// VR128:sub_mask_0
      0,	// VR128:sub_mask_1
      0,	// VR128:sub_xmm
      0,	// VR128:sub_ymm
    },
    {	// VR256X
      0,	// VR256X:sub_8bit
      0,	// VR256X:sub_8bit_hi
      0,	// VR256X:sub_8bit_hi_phony
      0,	// VR256X:sub_16bit
      0,	// VR256X:sub_16bit_hi
      0,	// VR256X:sub_32bit
      0,	// VR256X:sub_mask_0
      0,	// VR256X:sub_mask_1
      24,	// VR256X:sub_xmm -> FR16X
      0,	// VR256X:sub_ymm
    },
    {	// VR256
      0,	// VR256:sub_8bit
      0,	// VR256:sub_8bit_hi
      0,	// VR256:sub_8bit_hi_phony
      0,	// VR256:sub_16bit
      0,	// VR256:sub_16bit_hi
      0,	// VR256:sub_32bit
      0,	// VR256:sub_mask_0
      0,	// VR256:sub_mask_1
      25,	// VR256:sub_xmm -> FR16
      0,	// VR256:sub_ymm
    },
    {	// VR512
      0,	// VR512:sub_8bit
      0,	// VR512:sub_8bit_hi
      0,	// VR512:sub_8bit_hi_phony
      0,	// VR512:sub_16bit
      0,	// VR512:sub_16bit_hi
      0,	// VR512:sub_32bit
      0,	// VR512:sub_mask_0
      0,	// VR512:sub_mask_1
      24,	// VR512:sub_xmm -> FR16X
      131,	// VR512:sub_ymm -> VR256X
    },
    {	// VR512_0_15
      0,	// VR512_0_15:sub_8bit
      0,	// VR512_0_15:sub_8bit_hi
      0,	// VR512_0_15:sub_8bit_hi_phony
      0,	// VR512_0_15:sub_16bit
      0,	// VR512_0_15:sub_16bit_hi
      0,	// VR512_0_15:sub_32bit
      0,	// VR512_0_15:sub_mask_0
      0,	// VR512_0_15:sub_mask_1
      25,	// VR512_0_15:sub_xmm -> FR16
      132,	// VR512_0_15:sub_ymm -> VR256
    },
    {	// TILE
      0,	// TILE:sub_8bit
      0,	// TILE:sub_8bit_hi
      0,	// TILE:sub_8bit_hi_phony
      0,	// TILE:sub_16bit
      0,	// TILE:sub_16bit_hi
      0,	// TILE:sub_32bit
      0,	// TILE:sub_mask_0
      0,	// TILE:sub_mask_1
      0,	// TILE:sub_xmm
      0,	// TILE:sub_ymm
    },

  };
  assert(RC && "Missing regclass");
  if (!Idx) return RC;
  --Idx;
  assert(Idx < 10 && "Bad subreg");
  unsigned TV = Table[RC->getID()][Idx];
  return TV ? getRegClass(TV - 1) : nullptr;
}/// Get the weight in units of pressure for this register class.
const RegClassWeight &X86GenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {1, 36},  	// GR8
    {0, 0},  	// GRH8
    {1, 20},  	// GR8_NOREX2
    {1, 8},  	// GR8_NOREX
    {1, 4},  	// GR8_ABCD_H
    {1, 4},  	// GR8_ABCD_L
    {0, 0},  	// GRH16
    {2, 64},  	// GR16
    {2, 32},  	// GR16_NOREX2
    {2, 16},  	// GR16_NOREX
    {1, 8},  	// VK1
    {1, 8},  	// VK16
    {1, 8},  	// VK2
    {1, 8},  	// VK4
    {1, 8},  	// VK8
    {1, 7},  	// VK16WM
    {1, 7},  	// VK1WM
    {1, 7},  	// VK2WM
    {1, 7},  	// VK4WM
    {1, 7},  	// VK8WM
    {1, 6},  	// SEGMENT_REG
    {2, 8},  	// GR16_ABCD
    {0, 0},  	// FPCCR
    {1, 32},  	// FR16X
    {1, 16},  	// FR16
    {2, 8},  	// VK16PAIR
    {2, 8},  	// VK1PAIR
    {2, 8},  	// VK2PAIR
    {2, 8},  	// VK4PAIR
    {2, 8},  	// VK8PAIR
    {2, 6},  	// VK1PAIR_with_sub_mask_0_in_VK1WM
    {2, 66},  	// LOW32_ADDR_ACCESS_RBP
    {2, 66},  	// LOW32_ADDR_ACCESS
    {2, 64},  	// LOW32_ADDR_ACCESS_RBP_with_sub_8bit
    {1, 32},  	// FR32X
    {2, 64},  	// GR32
    {2, 62},  	// GR32_NOSP
    {2, 32},  	// LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX2
    {1, 16},  	// DEBUG_REG
    {1, 16},  	// FR32
    {2, 32},  	// GR32_NOREX2
    {2, 30},  	// GR32_NOREX2_NOSP
    {2, 16},  	// LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX
    {2, 16},  	// GR32_NOREX
    {1, 8},  	// VK32
    {2, 14},  	// GR32_NOREX_NOSP
    {1, 7},  	// RFP32
    {1, 7},  	// VK32WM
    {2, 8},  	// GR32_ABCD
    {2, 8},  	// GR32_TC
    {2, 6},  	// GR32_ABCD_and_GR32_TC
    {2, 4},  	// GR32_AD
    {2, 4},  	// GR32_ArgRef
    {2, 4},  	// GR32_BPSP
    {2, 4},  	// GR32_BSI
    {2, 4},  	// GR32_CB
    {2, 4},  	// GR32_DC
    {2, 4},  	// GR32_DIBP
    {2, 4},  	// GR32_SIDI
    {2, 4},  	// LOW32_ADDR_ACCESS_RBP_with_sub_32bit
    {0, 0},  	// CCR
    {0, 0},  	// DFCCR
    {2, 2},  	// GR32_ABCD_and_GR32_BSI
    {2, 2},  	// GR32_AD_and_GR32_ArgRef
    {2, 2},  	// GR32_ArgRef_and_GR32_CB
    {2, 2},  	// GR32_BPSP_and_GR32_DIBP
    {2, 2},  	// GR32_BPSP_and_GR32_TC
    {2, 2},  	// GR32_BSI_and_GR32_SIDI
    {2, 2},  	// GR32_DIBP_and_GR32_SIDI
    {2, 2},  	// LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit
    {2, 2},  	// LOW32_ADDR_ACCESS_with_sub_32bit
    {1, 7},  	// RFP64
    {2, 66},  	// GR64
    {1, 32},  	// FR64X
    {2, 64},  	// GR64_with_sub_8bit
    {2, 62},  	// GR64_NOSP
    {2, 34},  	// GR64_NOREX2
    {1, 16},  	// CONTROL_REG
    {1, 16},  	// FR64
    {2, 32},  	// GR64_with_sub_16bit_in_GR16_NOREX2
    {2, 30},  	// GR64_NOREX2_NOSP
    {2, 26},  	// GR64PLTSafe
    {2, 20},  	// GR64_TC
    {2, 18},  	// GR64_NOREX
    {2, 18},  	// GR64_TCW64
    {2, 18},  	// GR64_TC_with_sub_8bit
    {2, 16},  	// GR64_NOREX2_NOSP_and_GR64_TC
    {2, 16},  	// GR64_TCW64_with_sub_8bit
    {2, 16},  	// GR64_TC_and_GR64_TCW64
    {2, 16},  	// GR64_with_sub_16bit_in_GR16_NOREX
    {1, 8},  	// VK64
    {1, 8},  	// VR64
    {2, 14},  	// GR64PLTSafe_and_GR64_TC
    {2, 14},  	// GR64_NOREX2_NOSP_and_GR64_TCW64
    {2, 14},  	// GR64_NOREX_NOSP
    {2, 14},  	// GR64_NOREX_and_GR64_TC
    {2, 14},  	// GR64_TCW64_and_GR64_TC_with_sub_8bit
    {1, 7},  	// VK64WM
    {2, 12},  	// GR64_TC_and_GR64_NOREX2_NOSP_and_GR64_TCW64
    {2, 12},  	// GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREX
    {2, 10},  	// GR64PLTSafe_and_GR64_TCW64
    {2, 10},  	// GR64_NOREX_and_GR64PLTSafe_and_GR64_TC
    {2, 10},  	// GR64_NOREX_and_GR64_TCW64
    {2, 8},  	// GR64_ABCD
    {2, 8},  	// GR64_with_sub_32bit_in_GR32_TC
    {2, 6},  	// GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
    {2, 4},  	// GR64_AD
    {2, 4},  	// GR64_ArgRef
    {2, 4},  	// GR64_and_LOW32_ADDR_ACCESS_RBP
    {2, 4},  	// GR64_with_sub_32bit_in_GR32_ArgRef
    {2, 4},  	// GR64_with_sub_32bit_in_GR32_BPSP
    {2, 4},  	// GR64_with_sub_32bit_in_GR32_BSI
    {2, 4},  	// GR64_with_sub_32bit_in_GR32_CB
    {2, 4},  	// GR64_with_sub_32bit_in_GR32_DIBP
    {2, 4},  	// GR64_with_sub_32bit_in_GR32_SIDI
    {2, 2},  	// GR64_A
    {2, 2},  	// GR64_ArgRef_and_GR64_TC
    {2, 2},  	// GR64_and_LOW32_ADDR_ACCESS
    {2, 2},  	// GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSI
    {2, 2},  	// GR64_with_sub_32bit_in_GR32_AD_and_GR32_ArgRef
    {2, 2},  	// GR64_with_sub_32bit_in_GR32_ArgRef_and_GR32_CB
    {2, 2},  	// GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBP
    {2, 2},  	// GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TC
    {2, 2},  	// GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDI
    {2, 2},  	// GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDI
    {0, 0},  	// RST
    {1, 7},  	// RFP80
    {0, 0},  	// RFP80_7
    {1, 32},  	// VR128X
    {1, 16},  	// VR128
    {1, 32},  	// VR256X
    {1, 16},  	// VR256
    {1, 32},  	// VR512
    {1, 16},  	// VR512_0_15
    {1, 8},  	// TILE
  };
  return RCWeightTable[RC->getID()];
}

/// Get the weight in units of pressure for this register unit.
unsigned X86GenRegisterInfo::
getRegUnitWeight(MCRegUnit RegUnit) const {
  assert(static_cast<unsigned>(RegUnit) < 221 && "invalid register unit");
  // All register units have unit weight.
  return 1;
}


// Get the number of dimensions of register pressure.
unsigned X86GenRegisterInfo::getNumRegPressureSets() const {
  return 36;
}

// Get the name of this register unit pressure set.
const char *X86GenRegisterInfo::
getRegPressureSetName(unsigned Idx) const {
  static const char *PressureNameTable[] = {
    "SEGMENT_REG",
    "GR32_BPSP",
    "LOW32_ADDR_ACCESS_with_sub_32bit",
    "GR32_BSI",
    "GR32_SIDI",
    "GR32_DIBP_with_GR32_SIDI",
    "GR32_DIBP_with_LOW32_ADDR_ACCESS_with_sub_32bit",
    "RFP32",
    "GR8_ABCD_H_with_GR32_BSI",
    "GR8_ABCD_L_with_GR32_BSI",
    "VK1",
    "VR64",
    "TILE",
    "GR8_NOREX",
    "GR32_TC",
    "GR32_BPSP_with_GR32_TC",
    "FR16",
    "DEBUG_REG",
    "CONTROL_REG",
    "GR64_NOREX",
    "GR64_TCW64",
    "GR32_BPSP_with_GR64_TCW64",
    "GR64_TC_with_GR64_TCW64",
    "GR64_TC",
    "FR16X",
    "GR64PLTSafe_with_GR64_TC",
    "GR8",
    "GR8_with_GR32_DIBP",
    "GR8_with_GR32_BSI",
    "GR8_with_LOW32_ADDR_ACCESS_with_sub_32bit",
    "GR8_with_GR64_NOREX",
    "GR8_with_GR64_TCW64",
    "GR8_with_GR64_TC",
    "GR8_with_GR64PLTSafe",
    "GR8_with_LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX2",
    "GR16",
  };
  return PressureNameTable[Idx];
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned X86GenRegisterInfo::
getRegPressureSetLimit(const MachineFunction &MF, unsigned Idx) const {
  static const uint8_t PressureLimitTable[] = {
    6,  	// 0: SEGMENT_REG
    6,  	// 1: GR32_BPSP
    6,  	// 2: LOW32_ADDR_ACCESS_with_sub_32bit
    6,  	// 3: GR32_BSI
    6,  	// 4: GR32_SIDI
    6,  	// 5: GR32_DIBP_with_GR32_SIDI
    6,  	// 6: GR32_DIBP_with_LOW32_ADDR_ACCESS_with_sub_32bit
    7,  	// 7: RFP32
    7,  	// 8: GR8_ABCD_H_with_GR32_BSI
    7,  	// 9: GR8_ABCD_L_with_GR32_BSI
    8,  	// 10: VK1
    8,  	// 11: VR64
    8,  	// 12: TILE
    10,  	// 13: GR8_NOREX
    12,  	// 14: GR32_TC
    12,  	// 15: GR32_BPSP_with_GR32_TC
    16,  	// 16: FR16
    16,  	// 17: DEBUG_REG
    16,  	// 18: CONTROL_REG
    18,  	// 19: GR64_NOREX
    20,  	// 20: GR64_TCW64
    20,  	// 21: GR32_BPSP_with_GR64_TCW64
    22,  	// 22: GR64_TC_with_GR64_TCW64
    26,  	// 23: GR64_TC
    32,  	// 24: FR16X
    34,  	// 25: GR64PLTSafe_with_GR64_TC
    38,  	// 26: GR8
    38,  	// 27: GR8_with_GR32_DIBP
    38,  	// 28: GR8_with_GR32_BSI
    39,  	// 29: GR8_with_LOW32_ADDR_ACCESS_with_sub_32bit
    42,  	// 30: GR8_with_GR64_NOREX
    43,  	// 31: GR8_with_GR64_TCW64
    44,  	// 32: GR8_with_GR64_TC
    45,  	// 33: GR8_with_GR64PLTSafe
    48,  	// 34: GR8_with_LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX2
    66,  	// 35: GR16
  };
  return PressureLimitTable[Idx];
}

/// Table of pressure sets per register class or unit.
static const int RCSetsTable[] = {
  /* 0 */ 0, -1,
  /* 2 */ 7, -1,
  /* 4 */ 10, -1,
  /* 6 */ 11, -1,
  /* 8 */ 12, -1,
  /* 10 */ 17, -1,
  /* 12 */ 18, -1,
  /* 14 */ 16, 24, -1,
  /* 17 */ 25, 35, -1,
  /* 20 */ 19, 23, 25, 30, 35, -1,
  /* 26 */ 2, 6, 15, 19, 21, 23, 25, 29, 30, 35, -1,
  /* 37 */ 20, 21, 22, 23, 25, 31, 35, -1,
  /* 45 */ 22, 23, 25, 32, 35, -1,
  /* 51 */ 19, 22, 23, 25, 30, 32, 35, -1,
  /* 59 */ 20, 21, 22, 23, 25, 31, 32, 35, -1,
  /* 68 */ 14, 15, 19, 20, 21, 22, 23, 25, 30, 31, 32, 35, -1,
  /* 81 */ 2, 6, 14, 15, 19, 20, 21, 22, 23, 25, 29, 30, 31, 32, 35, -1,
  /* 97 */ 25, 34, 35, -1,
  /* 101 */ 19, 23, 25, 30, 34, 35, -1,
  /* 108 */ 1, 2, 15, 19, 21, 23, 25, 26, 30, 34, 35, -1,
  /* 120 */ 20, 21, 22, 23, 25, 31, 34, 35, -1,
  /* 129 */ 22, 23, 25, 32, 34, 35, -1,
  /* 136 */ 19, 22, 23, 25, 30, 32, 34, 35, -1,
  /* 145 */ 20, 21, 22, 23, 25, 31, 32, 34, 35, -1,
  /* 155 */ 1, 2, 14, 15, 19, 20, 21, 22, 23, 25, 26, 30, 31, 32, 34, 35, -1,
  /* 172 */ 25, 33, 34, 35, -1,
  /* 177 */ 19, 23, 25, 30, 33, 34, 35, -1,
  /* 185 */ 1, 5, 6, 19, 23, 25, 27, 30, 33, 34, 35, -1,
  /* 197 */ 1, 2, 5, 6, 15, 19, 21, 23, 25, 26, 27, 29, 30, 33, 34, 35, -1,
  /* 214 */ 22, 23, 25, 32, 33, 34, 35, -1,
  /* 222 */ 3, 4, 8, 9, 13, 19, 23, 25, 28, 30, 32, 33, 34, 35, -1,
  /* 237 */ 4, 5, 19, 22, 23, 25, 28, 30, 32, 33, 34, 35, -1,
  /* 250 */ 3, 4, 5, 8, 9, 13, 19, 22, 23, 25, 28, 30, 32, 33, 34, 35, -1,
  /* 267 */ 1, 4, 5, 6, 19, 22, 23, 25, 27, 28, 30, 32, 33, 34, 35, -1,
  /* 283 */ 20, 21, 22, 23, 25, 31, 32, 33, 34, 35, -1,
  /* 294 */ 3, 13, 14, 19, 20, 23, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, -1,
  /* 312 */ 8, 13, 14, 19, 20, 23, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, -1,
  /* 330 */ 3, 4, 8, 9, 13, 14, 19, 20, 23, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, -1,
  /* 351 */ 1, 2, 5, 6, 15, 19, 21, 23, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, -1,
  /* 371 */ 1, 4, 5, 6, 19, 22, 23, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, -1,
  /* 390 */ 3, 4, 5, 8, 9, 13, 19, 22, 23, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, -1,
  /* 411 */ 1, 2, 14, 15, 19, 20, 21, 22, 23, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, -1,
  /* 432 */ 3, 13, 14, 15, 19, 20, 21, 22, 23, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, -1,
  /* 453 */ 3, 8, 13, 14, 15, 19, 20, 21, 22, 23, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, -1,
  /* 475 */ 3, 9, 13, 14, 15, 19, 20, 21, 22, 23, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, -1,
};

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int *X86GenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const uint16_t RCSetStartTable[] = {
    301,1,300,295,312,333,1,18,97,101,4,4,4,4,4,4,4,4,4,4,0,295,1,15,14,4,4,4,4,4,4,18,18,18,15,18,18,97,10,14,97,97,101,101,4,177,2,4,295,157,433,433,433,108,222,294,433,185,237,26,1,1,330,433,432,197,155,250,267,197,81,2,18,15,18,18,17,12,14,97,97,172,45,20,37,129,129,120,59,101,4,6,214,120,177,51,145,4,145,136,283,239,68,295,157,433,433,120,26,433,108,222,294,185,237,433,145,81,330,433,432,197,155,250,267,1,2,1,15,14,15,14,15,14,8,};
  return &RCSetsTable[RCSetStartTable[RC->getID()]];
}

/// Get the dimensions of register pressure impacted by this register unit.
/// Returns a -1 terminated array of pressure set IDs
const int *X86GenRegisterInfo::
getRegUnitPressureSets(MCRegUnit RegUnit) const {
  assert(static_cast<unsigned>(RegUnit) < 221 && "invalid register unit");
  static const uint16_t RUSetStartTable[] = {
    454,476,330,330,351,1,453,475,0,1,454,371,1,476,0,1,1,1,1,1,1,1,81,1,1,0,390,1,1,411,1,1,1,1,0,1,0,1,1,1,1,0,1,1,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,2,2,2,2,2,2,2,1,6,6,6,6,6,6,6,6,416,1,1,416,1,1,416,1,1,416,1,1,300,1,1,300,1,1,300,1,1,300,1,1,1,1,1,1,1,1,1,1,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,4,4,4,4,4,4,4,4,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,1,8,8,8,8,8,8,8,8,301,1,1,301,1,1,301,1,1,301,1,1,301,1,1,301,1,1,301,1,1,301,1,1,301,1,1,301,1,1,301,1,1,301,1,1,301,1,1,301,1,1,301,1,1,301,1,1,};
  return &RCSetsTable[RUSetStartTable[static_cast<unsigned>(RegUnit)]];
}

ArrayRef<MCPhysReg> X86GenRegisterInfo::getRawAllocationOrder(const TargetRegisterClass &RC, const MachineFunction &MF, bool Rev) const {
  switch (RC.getID()) {
  case X86::GR8RegClassID:
    return GR8GetRawAllocationOrder(RC, MF, Rev);
  case X86::GR8_NOREX2RegClassID:
    return GR8_NOREX2GetRawAllocationOrder(RC, MF, Rev);
  case X86::GR8_NOREXRegClassID:
    return GR8_NOREXGetRawAllocationOrder(RC, MF, Rev);
  case X86::FR32XRegClassID:
    return FR32XGetRawAllocationOrder(RC, MF, Rev);
  case X86::FR64XRegClassID:
    return FR64XGetRawAllocationOrder(RC, MF, Rev);
  case X86::VR128XRegClassID:
    return VR128XGetRawAllocationOrder(RC, MF, Rev);
  case X86::VR256XRegClassID:
    return VR256XGetRawAllocationOrder(RC, MF, Rev);
  }
  return RC.getRegisters();
}


// Register to minimal register class mapping

const TargetRegisterClass *X86GenRegisterInfo::getMinimalPhysRegClass(MCRegister Reg) const {
  static const uint16_t InvalidRegClassID = UINT16_MAX;

  static const uint16_t Mapping[388] = {
    InvalidRegClassID,  // NoRegister
    X86::GR8_ABCD_HRegClassID,  // AH
    X86::GR8_ABCD_LRegClassID,  // AL
    X86::GR16_ABCDRegClassID,  // AX
    X86::GR8_ABCD_HRegClassID,  // BH
    X86::GR8_ABCD_LRegClassID,  // BL
    X86::GR16_NOREXRegClassID,  // BP
    X86::GRH8RegClassID,  // BPH
    X86::GR8_NOREX2RegClassID,  // BPL
    X86::GR16_ABCDRegClassID,  // BX
    X86::GR8_ABCD_HRegClassID,  // CH
    X86::GR8_ABCD_LRegClassID,  // CL
    X86::SEGMENT_REGRegClassID,  // CS
    X86::GR16_ABCDRegClassID,  // CX
    X86::DFCCRRegClassID,  // DF
    X86::GR8_ABCD_HRegClassID,  // DH
    X86::GR16_NOREXRegClassID,  // DI
    X86::GRH8RegClassID,  // DIH
    X86::GR8_NOREX2RegClassID,  // DIL
    X86::GR8_ABCD_LRegClassID,  // DL
    X86::SEGMENT_REGRegClassID,  // DS
    X86::GR16_ABCDRegClassID,  // DX
    X86::GR32_ADRegClassID,  // EAX
    X86::GR32_BPSP_and_GR32_DIBPRegClassID,  // EBP
    X86::GR32_ABCD_and_GR32_BSIRegClassID,  // EBX
    X86::GR32_ArgRef_and_GR32_CBRegClassID,  // ECX
    X86::GR32_DIBP_and_GR32_SIDIRegClassID,  // EDI
    X86::GR32_AD_and_GR32_ArgRefRegClassID,  // EDX
    X86::CCRRegClassID,  // EFLAGS
    InvalidRegClassID,  // EIP
    InvalidRegClassID,  // EIZ
    X86::SEGMENT_REGRegClassID,  // ES
    X86::GR32_BSI_and_GR32_SIDIRegClassID,  // ESI
    X86::GR32_BPSP_and_GR32_TCRegClassID,  // ESP
    InvalidRegClassID,  // FPCW
    X86::FPCCRRegClassID,  // FPSW
    X86::SEGMENT_REGRegClassID,  // FS
    InvalidRegClassID,  // FS_BASE
    X86::SEGMENT_REGRegClassID,  // GS
    InvalidRegClassID,  // GS_BASE
    X86::GRH16RegClassID,  // HAX
    X86::GRH16RegClassID,  // HBP
    X86::GRH16RegClassID,  // HBX
    X86::GRH16RegClassID,  // HCX
    X86::GRH16RegClassID,  // HDI
    X86::GRH16RegClassID,  // HDX
    X86::GRH16RegClassID,  // HIP
    X86::GRH16RegClassID,  // HSI
    X86::GRH16RegClassID,  // HSP
    InvalidRegClassID,  // IP
    InvalidRegClassID,  // MXCSR
    X86::GR64_ARegClassID,  // RAX
    X86::GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBPRegClassID,  // RBP
    X86::GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSIRegClassID,  // RBX
    X86::GR64_with_sub_32bit_in_GR32_ArgRef_and_GR32_CBRegClassID,  // RCX
    X86::GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDIRegClassID,  // RDI
    X86::GR64_with_sub_32bit_in_GR32_AD_and_GR32_ArgRefRegClassID,  // RDX
    InvalidRegClassID,  // RFLAGS
    X86::GR64_and_LOW32_ADDR_ACCESSRegClassID,  // RIP
    InvalidRegClassID,  // RIZ
    X86::GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDIRegClassID,  // RSI
    X86::GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TCRegClassID,  // RSP
    X86::GR16_NOREXRegClassID,  // SI
    X86::GRH8RegClassID,  // SIH
    X86::GR8_NOREX2RegClassID,  // SIL
    X86::GR16_NOREXRegClassID,  // SP
    X86::GRH8RegClassID,  // SPH
    X86::GR8_NOREX2RegClassID,  // SPL
    X86::SEGMENT_REGRegClassID,  // SS
    InvalidRegClassID,  // SSP
    InvalidRegClassID,  // _EFLAGS
    X86::CONTROL_REGRegClassID,  // CR0
    X86::CONTROL_REGRegClassID,  // CR1
    X86::CONTROL_REGRegClassID,  // CR2
    X86::CONTROL_REGRegClassID,  // CR3
    X86::CONTROL_REGRegClassID,  // CR4
    X86::CONTROL_REGRegClassID,  // CR5
    X86::CONTROL_REGRegClassID,  // CR6
    X86::CONTROL_REGRegClassID,  // CR7
    X86::CONTROL_REGRegClassID,  // CR8
    X86::CONTROL_REGRegClassID,  // CR9
    X86::CONTROL_REGRegClassID,  // CR10
    X86::CONTROL_REGRegClassID,  // CR11
    X86::CONTROL_REGRegClassID,  // CR12
    X86::CONTROL_REGRegClassID,  // CR13
    X86::CONTROL_REGRegClassID,  // CR14
    X86::CONTROL_REGRegClassID,  // CR15
    X86::DEBUG_REGRegClassID,  // DR0
    X86::DEBUG_REGRegClassID,  // DR1
    X86::DEBUG_REGRegClassID,  // DR2
    X86::DEBUG_REGRegClassID,  // DR3
    X86::DEBUG_REGRegClassID,  // DR4
    X86::DEBUG_REGRegClassID,  // DR5
    X86::DEBUG_REGRegClassID,  // DR6
    X86::DEBUG_REGRegClassID,  // DR7
    X86::DEBUG_REGRegClassID,  // DR8
    X86::DEBUG_REGRegClassID,  // DR9
    X86::DEBUG_REGRegClassID,  // DR10
    X86::DEBUG_REGRegClassID,  // DR11
    X86::DEBUG_REGRegClassID,  // DR12
    X86::DEBUG_REGRegClassID,  // DR13
    X86::DEBUG_REGRegClassID,  // DR14
    X86::DEBUG_REGRegClassID,  // DR15
    X86::RFP80RegClassID,  // FP0
    X86::RFP80RegClassID,  // FP1
    X86::RFP80RegClassID,  // FP2
    X86::RFP80RegClassID,  // FP3
    X86::RFP80RegClassID,  // FP4
    X86::RFP80RegClassID,  // FP5
    X86::RFP80RegClassID,  // FP6
    X86::RFP80_7RegClassID,  // FP7
    X86::VR64RegClassID,  // MM0
    X86::VR64RegClassID,  // MM1
    X86::VR64RegClassID,  // MM2
    X86::VR64RegClassID,  // MM3
    X86::VR64RegClassID,  // MM4
    X86::VR64RegClassID,  // MM5
    X86::VR64RegClassID,  // MM6
    X86::VR64RegClassID,  // MM7
    X86::GR64PLTSafe_and_GR64_TCW64RegClassID,  // R8
    X86::GR64PLTSafe_and_GR64_TCW64RegClassID,  // R9
    X86::GR64_ArgRefRegClassID,  // R10
    X86::GR64_ArgRef_and_GR64_TCRegClassID,  // R11
    X86::GR64PLTSafeRegClassID,  // R12
    X86::GR64PLTSafeRegClassID,  // R13
    X86::GR64PLTSafeRegClassID,  // R14
    X86::GR64PLTSafeRegClassID,  // R15
    X86::RSTRegClassID,  // ST0
    X86::RSTRegClassID,  // ST1
    X86::RSTRegClassID,  // ST2
    X86::RSTRegClassID,  // ST3
    X86::RSTRegClassID,  // ST4
    X86::RSTRegClassID,  // ST5
    X86::RSTRegClassID,  // ST6
    X86::RSTRegClassID,  // ST7
    X86::VR128RegClassID,  // XMM0
    X86::VR128RegClassID,  // XMM1
    X86::VR128RegClassID,  // XMM2
    X86::VR128RegClassID,  // XMM3
    X86::VR128RegClassID,  // XMM4
    X86::VR128RegClassID,  // XMM5
    X86::VR128RegClassID,  // XMM6
    X86::VR128RegClassID,  // XMM7
    X86::VR128RegClassID,  // XMM8
    X86::VR128RegClassID,  // XMM9
    X86::VR128RegClassID,  // XMM10
    X86::VR128RegClassID,  // XMM11
    X86::VR128RegClassID,  // XMM12
    X86::VR128RegClassID,  // XMM13
    X86::VR128RegClassID,  // XMM14
    X86::VR128RegClassID,  // XMM15
    X86::GR8_NOREX2RegClassID,  // R8B
    X86::GR8_NOREX2RegClassID,  // R9B
    X86::GR8_NOREX2RegClassID,  // R10B
    X86::GR8_NOREX2RegClassID,  // R11B
    X86::GR8_NOREX2RegClassID,  // R12B
    X86::GR8_NOREX2RegClassID,  // R13B
    X86::GR8_NOREX2RegClassID,  // R14B
    X86::GR8_NOREX2RegClassID,  // R15B
    X86::GRH8RegClassID,  // R8BH
    X86::GRH8RegClassID,  // R9BH
    X86::GRH8RegClassID,  // R10BH
    X86::GRH8RegClassID,  // R11BH
    X86::GRH8RegClassID,  // R12BH
    X86::GRH8RegClassID,  // R13BH
    X86::GRH8RegClassID,  // R14BH
    X86::GRH8RegClassID,  // R15BH
    X86::GR32_NOREX2_NOSPRegClassID,  // R8D
    X86::GR32_NOREX2_NOSPRegClassID,  // R9D
    X86::GR32_NOREX2_NOSPRegClassID,  // R10D
    X86::GR32_NOREX2_NOSPRegClassID,  // R11D
    X86::GR32_NOREX2_NOSPRegClassID,  // R12D
    X86::GR32_NOREX2_NOSPRegClassID,  // R13D
    X86::GR32_NOREX2_NOSPRegClassID,  // R14D
    X86::GR32_NOREX2_NOSPRegClassID,  // R15D
    X86::GR16_NOREX2RegClassID,  // R8W
    X86::GR16_NOREX2RegClassID,  // R9W
    X86::GR16_NOREX2RegClassID,  // R10W
    X86::GR16_NOREX2RegClassID,  // R11W
    X86::GR16_NOREX2RegClassID,  // R12W
    X86::GR16_NOREX2RegClassID,  // R13W
    X86::GR16_NOREX2RegClassID,  // R14W
    X86::GR16_NOREX2RegClassID,  // R15W
    X86::GRH16RegClassID,  // R8WH
    X86::GRH16RegClassID,  // R9WH
    X86::GRH16RegClassID,  // R10WH
    X86::GRH16RegClassID,  // R11WH
    X86::GRH16RegClassID,  // R12WH
    X86::GRH16RegClassID,  // R13WH
    X86::GRH16RegClassID,  // R14WH
    X86::GRH16RegClassID,  // R15WH
    X86::VR256RegClassID,  // YMM0
    X86::VR256RegClassID,  // YMM1
    X86::VR256RegClassID,  // YMM2
    X86::VR256RegClassID,  // YMM3
    X86::VR256RegClassID,  // YMM4
    X86::VR256RegClassID,  // YMM5
    X86::VR256RegClassID,  // YMM6
    X86::VR256RegClassID,  // YMM7
    X86::VR256RegClassID,  // YMM8
    X86::VR256RegClassID,  // YMM9
    X86::VR256RegClassID,  // YMM10
    X86::VR256RegClassID,  // YMM11
    X86::VR256RegClassID,  // YMM12
    X86::VR256RegClassID,  // YMM13
    X86::VR256RegClassID,  // YMM14
    X86::VR256RegClassID,  // YMM15
    X86::VK64RegClassID,  // K0
    X86::VK64WMRegClassID,  // K1
    X86::VK64WMRegClassID,  // K2
    X86::VK64WMRegClassID,  // K3
    X86::VK64WMRegClassID,  // K4
    X86::VK64WMRegClassID,  // K5
    X86::VK64WMRegClassID,  // K6
    X86::VK64WMRegClassID,  // K7
    X86::VR128XRegClassID,  // XMM16
    X86::VR128XRegClassID,  // XMM17
    X86::VR128XRegClassID,  // XMM18
    X86::VR128XRegClassID,  // XMM19
    X86::VR128XRegClassID,  // XMM20
    X86::VR128XRegClassID,  // XMM21
    X86::VR128XRegClassID,  // XMM22
    X86::VR128XRegClassID,  // XMM23
    X86::VR128XRegClassID,  // XMM24
    X86::VR128XRegClassID,  // XMM25
    X86::VR128XRegClassID,  // XMM26
    X86::VR128XRegClassID,  // XMM27
    X86::VR128XRegClassID,  // XMM28
    X86::VR128XRegClassID,  // XMM29
    X86::VR128XRegClassID,  // XMM30
    X86::VR128XRegClassID,  // XMM31
    X86::VR256XRegClassID,  // YMM16
    X86::VR256XRegClassID,  // YMM17
    X86::VR256XRegClassID,  // YMM18
    X86::VR256XRegClassID,  // YMM19
    X86::VR256XRegClassID,  // YMM20
    X86::VR256XRegClassID,  // YMM21
    X86::VR256XRegClassID,  // YMM22
    X86::VR256XRegClassID,  // YMM23
    X86::VR256XRegClassID,  // YMM24
    X86::VR256XRegClassID,  // YMM25
    X86::VR256XRegClassID,  // YMM26
    X86::VR256XRegClassID,  // YMM27
    X86::VR256XRegClassID,  // YMM28
    X86::VR256XRegClassID,  // YMM29
    X86::VR256XRegClassID,  // YMM30
    X86::VR256XRegClassID,  // YMM31
    X86::VR512_0_15RegClassID,  // ZMM0
    X86::VR512_0_15RegClassID,  // ZMM1
    X86::VR512_0_15RegClassID,  // ZMM2
    X86::VR512_0_15RegClassID,  // ZMM3
    X86::VR512_0_15RegClassID,  // ZMM4
    X86::VR512_0_15RegClassID,  // ZMM5
    X86::VR512_0_15RegClassID,  // ZMM6
    X86::VR512_0_15RegClassID,  // ZMM7
    X86::VR512_0_15RegClassID,  // ZMM8
    X86::VR512_0_15RegClassID,  // ZMM9
    X86::VR512_0_15RegClassID,  // ZMM10
    X86::VR512_0_15RegClassID,  // ZMM11
    X86::VR512_0_15RegClassID,  // ZMM12
    X86::VR512_0_15RegClassID,  // ZMM13
    X86::VR512_0_15RegClassID,  // ZMM14
    X86::VR512_0_15RegClassID,  // ZMM15
    X86::VR512RegClassID,  // ZMM16
    X86::VR512RegClassID,  // ZMM17
    X86::VR512RegClassID,  // ZMM18
    X86::VR512RegClassID,  // ZMM19
    X86::VR512RegClassID,  // ZMM20
    X86::VR512RegClassID,  // ZMM21
    X86::VR512RegClassID,  // ZMM22
    X86::VR512RegClassID,  // ZMM23
    X86::VR512RegClassID,  // ZMM24
    X86::VR512RegClassID,  // ZMM25
    X86::VR512RegClassID,  // ZMM26
    X86::VR512RegClassID,  // ZMM27
    X86::VR512RegClassID,  // ZMM28
    X86::VR512RegClassID,  // ZMM29
    X86::VR512RegClassID,  // ZMM30
    X86::VR512RegClassID,  // ZMM31
    X86::VK8PAIRRegClassID,  // K0_K1
    X86::VK1PAIR_with_sub_mask_0_in_VK1WMRegClassID,  // K2_K3
    X86::VK1PAIR_with_sub_mask_0_in_VK1WMRegClassID,  // K4_K5
    X86::VK1PAIR_with_sub_mask_0_in_VK1WMRegClassID,  // K6_K7
    InvalidRegClassID,  // TMMCFG
    X86::TILERegClassID,  // TMM0
    X86::TILERegClassID,  // TMM1
    X86::TILERegClassID,  // TMM2
    X86::TILERegClassID,  // TMM3
    X86::TILERegClassID,  // TMM4
    X86::TILERegClassID,  // TMM5
    X86::TILERegClassID,  // TMM6
    X86::TILERegClassID,  // TMM7
    X86::GR64_NOSPRegClassID,  // R16
    X86::GR64_NOSPRegClassID,  // R17
    X86::GR64_NOSPRegClassID,  // R18
    X86::GR64_NOSPRegClassID,  // R19
    X86::GR64_NOSPRegClassID,  // R20
    X86::GR64_NOSPRegClassID,  // R21
    X86::GR64_NOSPRegClassID,  // R22
    X86::GR64_NOSPRegClassID,  // R23
    X86::GR64_NOSPRegClassID,  // R24
    X86::GR64_NOSPRegClassID,  // R25
    X86::GR64_NOSPRegClassID,  // R26
    X86::GR64_NOSPRegClassID,  // R27
    X86::GR64_NOSPRegClassID,  // R28
    X86::GR64_NOSPRegClassID,  // R29
    X86::GR64_NOSPRegClassID,  // R30
    X86::GR64_NOSPRegClassID,  // R31
    X86::GR8RegClassID,  // R16B
    X86::GR8RegClassID,  // R17B
    X86::GR8RegClassID,  // R18B
    X86::GR8RegClassID,  // R19B
    X86::GR8RegClassID,  // R20B
    X86::GR8RegClassID,  // R21B
    X86::GR8RegClassID,  // R22B
    X86::GR8RegClassID,  // R23B
    X86::GR8RegClassID,  // R24B
    X86::GR8RegClassID,  // R25B
    X86::GR8RegClassID,  // R26B
    X86::GR8RegClassID,  // R27B
    X86::GR8RegClassID,  // R28B
    X86::GR8RegClassID,  // R29B
    X86::GR8RegClassID,  // R30B
    X86::GR8RegClassID,  // R31B
    X86::GRH8RegClassID,  // R16BH
    X86::GRH8RegClassID,  // R17BH
    X86::GRH8RegClassID,  // R18BH
    X86::GRH8RegClassID,  // R19BH
    X86::GRH8RegClassID,  // R20BH
    X86::GRH8RegClassID,  // R21BH
    X86::GRH8RegClassID,  // R22BH
    X86::GRH8RegClassID,  // R23BH
    X86::GRH8RegClassID,  // R24BH
    X86::GRH8RegClassID,  // R25BH
    X86::GRH8RegClassID,  // R26BH
    X86::GRH8RegClassID,  // R27BH
    X86::GRH8RegClassID,  // R28BH
    X86::GRH8RegClassID,  // R29BH
    X86::GRH8RegClassID,  // R30BH
    X86::GRH8RegClassID,  // R31BH
    X86::GR32_NOSPRegClassID,  // R16D
    X86::GR32_NOSPRegClassID,  // R17D
    X86::GR32_NOSPRegClassID,  // R18D
    X86::GR32_NOSPRegClassID,  // R19D
    X86::GR32_NOSPRegClassID,  // R20D
    X86::GR32_NOSPRegClassID,  // R21D
    X86::GR32_NOSPRegClassID,  // R22D
    X86::GR32_NOSPRegClassID,  // R23D
    X86::GR32_NOSPRegClassID,  // R24D
    X86::GR32_NOSPRegClassID,  // R25D
    X86::GR32_NOSPRegClassID,  // R26D
    X86::GR32_NOSPRegClassID,  // R27D
    X86::GR32_NOSPRegClassID,  // R28D
    X86::GR32_NOSPRegClassID,  // R29D
    X86::GR32_NOSPRegClassID,  // R30D
    X86::GR32_NOSPRegClassID,  // R31D
    X86::GR16RegClassID,  // R16W
    X86::GR16RegClassID,  // R17W
    X86::GR16RegClassID,  // R18W
    X86::GR16RegClassID,  // R19W
    X86::GR16RegClassID,  // R20W
    X86::GR16RegClassID,  // R21W
    X86::GR16RegClassID,  // R22W
    X86::GR16RegClassID,  // R23W
    X86::GR16RegClassID,  // R24W
    X86::GR16RegClassID,  // R25W
    X86::GR16RegClassID,  // R26W
    X86::GR16RegClassID,  // R27W
    X86::GR16RegClassID,  // R28W
    X86::GR16RegClassID,  // R29W
    X86::GR16RegClassID,  // R30W
    X86::GR16RegClassID,  // R31W
    X86::GRH16RegClassID,  // R16WH
    X86::GRH16RegClassID,  // R17WH
    X86::GRH16RegClassID,  // R18WH
    X86::GRH16RegClassID,  // R19WH
    X86::GRH16RegClassID,  // R20WH
    X86::GRH16RegClassID,  // R21WH
    X86::GRH16RegClassID,  // R22WH
    X86::GRH16RegClassID,  // R23WH
    X86::GRH16RegClassID,  // R24WH
    X86::GRH16RegClassID,  // R25WH
    X86::GRH16RegClassID,  // R26WH
    X86::GRH16RegClassID,  // R27WH
    X86::GRH16RegClassID,  // R28WH
    X86::GRH16RegClassID,  // R29WH
    X86::GRH16RegClassID,  // R30WH
    X86::GRH16RegClassID,  // R31WH
  };

  assert(Reg < ArrayRef(Mapping).size());
  unsigned RCID = Mapping[Reg.id()];
  if (RCID == InvalidRegClassID)
    return nullptr;
  return &X86MCRegisterClassStorage.Classes[RCID];
}
extern const MCRegisterDesc X86RegDesc[];
extern const int16_t X86RegDiffLists[];
extern const LaneBitmask X86LaneMaskLists[];
extern const char X86RegStrings[];
extern const char X86RegClassStrings[];
extern const MCPhysReg X86RegUnitRoots[][2];
extern const uint16_t X86SubRegIdxLists[];
extern const uint16_t X86RegEncodingTable[];
// X86 Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair X86DwarfFlavour0Dwarf2L[];
extern const unsigned X86DwarfFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair X86DwarfFlavour1Dwarf2L[];
extern const unsigned X86DwarfFlavour1Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair X86DwarfFlavour2Dwarf2L[];
extern const unsigned X86DwarfFlavour2Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair X86EHFlavour0Dwarf2L[];
extern const unsigned X86EHFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair X86EHFlavour1Dwarf2L[];
extern const unsigned X86EHFlavour1Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair X86EHFlavour2Dwarf2L[];
extern const unsigned X86EHFlavour2Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair X86DwarfFlavour0L2Dwarf[];
extern const unsigned X86DwarfFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair X86DwarfFlavour1L2Dwarf[];
extern const unsigned X86DwarfFlavour1L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair X86DwarfFlavour2L2Dwarf[];
extern const unsigned X86DwarfFlavour2L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair X86EHFlavour0L2Dwarf[];
extern const unsigned X86EHFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair X86EHFlavour1L2Dwarf[];
extern const unsigned X86EHFlavour1L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair X86EHFlavour2L2Dwarf[];
extern const unsigned X86EHFlavour2L2DwarfSize;


X86GenRegisterInfo::
X86GenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour,
    unsigned PC, unsigned HwMode)
  : TargetRegisterInfo(&X86RegInfoDesc,
      X86SubRegIndexStrings, X86SubRegIndexNameOffsets,
      X86SubRegIdxRangeTable, X86SubRegIndexLaneMaskTable,

  LaneBitmask(0xFFFFFFFFFFFFFFB0), X86RegClassInfos, X86VTLists, HwMode) {
  InitMCRegisterInfo(X86RegDesc, 388, RA, PC,
    &getX86MCRegisterClass(0), 135, X86RegUnitRoots, 221, X86RegDiffLists,
    X86LaneMaskLists, X86RegStrings, X86RegClassStrings, X86SubRegIdxLists, 11,
    X86RegEncodingTable, nullptr);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(X86DwarfFlavour0Dwarf2L, X86DwarfFlavour0Dwarf2LSize, false);
    break;
  case 1:
    mapDwarfRegsToLLVMRegs(X86DwarfFlavour1Dwarf2L, X86DwarfFlavour1Dwarf2LSize, false);
    break;
  case 2:
    mapDwarfRegsToLLVMRegs(X86DwarfFlavour2Dwarf2L, X86DwarfFlavour2Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(X86EHFlavour0Dwarf2L, X86EHFlavour0Dwarf2LSize, true);
    break;
  case 1:
    mapDwarfRegsToLLVMRegs(X86EHFlavour1Dwarf2L, X86EHFlavour1Dwarf2LSize, true);
    break;
  case 2:
    mapDwarfRegsToLLVMRegs(X86EHFlavour2Dwarf2L, X86EHFlavour2Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(X86DwarfFlavour0L2Dwarf, X86DwarfFlavour0L2DwarfSize, false);
    break;
  case 1:
    mapLLVMRegsToDwarfRegs(X86DwarfFlavour1L2Dwarf, X86DwarfFlavour1L2DwarfSize, false);
    break;
  case 2:
    mapLLVMRegsToDwarfRegs(X86DwarfFlavour2L2Dwarf, X86DwarfFlavour2L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(X86EHFlavour0L2Dwarf, X86EHFlavour0L2DwarfSize, true);
    break;
  case 1:
    mapLLVMRegsToDwarfRegs(X86EHFlavour1L2Dwarf, X86EHFlavour1L2DwarfSize, true);
    break;
  case 2:
    mapLLVMRegsToDwarfRegs(X86EHFlavour2L2Dwarf, X86EHFlavour2L2DwarfSize, true);
    break;
  }
}

static const MCPhysReg CSR_32_SaveList[] = { X86::ESI, X86::EDI, X86::EBX, X86::EBP, 0 };
static const uint32_t CSR_32_RegMask[] = { 0x058703f0, 0xc0009601, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_32EHRet_SaveList[] = { X86::EAX, X86::EDX, X86::ESI, X86::EDI, X86::EBX, X86::EBP, 0 };
static const uint32_t CSR_32EHRet_RegMask[] = { 0x0def83fe, 0xc000b701, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_32_AllRegs_SaveList[] = { X86::EAX, X86::EBX, X86::ECX, X86::EDX, X86::EBP, X86::ESI, X86::EDI, 0 };
static const uint32_t CSR_32_AllRegs_RegMask[] = { 0x0fefaffe, 0xc000bf01, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_32_AllRegs_AVX_SaveList[] = { X86::EAX, X86::EBX, X86::ECX, X86::EDX, X86::EBP, X86::ESI, X86::EDI, X86::YMM0, X86::YMM1, X86::YMM2, X86::YMM3, X86::YMM4, X86::YMM5, X86::YMM6, X86::YMM7, 0 };
static const uint32_t CSR_32_AllRegs_AVX_RegMask[] = { 0x0fefaffe, 0xc000bf01, 0x00000001, 0x00000000, 0x00007f80, 0x80000000, 0x0000007f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_32_AllRegs_AVX512_SaveList[] = { X86::EAX, X86::EBX, X86::ECX, X86::EDX, X86::EBP, X86::ESI, X86::EDI, X86::ZMM0, X86::ZMM1, X86::ZMM2, X86::ZMM3, X86::ZMM4, X86::ZMM5, X86::ZMM6, X86::ZMM7, X86::K0, X86::K1, X86::K2, X86::K3, X86::K4, X86::K5, X86::K6, X86::K7, 0 };
static const uint32_t CSR_32_AllRegs_AVX512_RegMask[] = { 0x0fefaffe, 0xc000bf01, 0x00000001, 0x00000000, 0x00007f80, 0x80000000, 0x007f807f, 0x7f800000, 0x07800000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_32_AllRegs_SSE_SaveList[] = { X86::EAX, X86::EBX, X86::ECX, X86::EDX, X86::EBP, X86::ESI, X86::EDI, X86::XMM0, X86::XMM1, X86::XMM2, X86::XMM3, X86::XMM4, X86::XMM5, X86::XMM6, X86::XMM7, 0 };
static const uint32_t CSR_32_AllRegs_SSE_RegMask[] = { 0x0fefaffe, 0xc000bf01, 0x00000001, 0x00000000, 0x00007f80, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_32_RegCall_SaveList[] = { X86::ESI, X86::EDI, X86::EBX, X86::EBP, X86::XMM4, X86::XMM5, X86::XMM6, X86::XMM7, 0 };
static const uint32_t CSR_32_RegCall_RegMask[] = { 0x058703f0, 0xc0009601, 0x00000001, 0x00000000, 0x00007800, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_32_RegCall_NoSSE_SaveList[] = { X86::ESI, X86::EDI, X86::EBX, X86::EBP, 0 };
static const uint32_t CSR_32_RegCall_NoSSE_RegMask[] = { 0x058703f0, 0xc0009601, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_64_SaveList[] = { X86::RBX, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, 0 };
static const uint32_t CSR_64_RegMask[] = { 0x018003f0, 0x00300600, 0x00000000, 0x78000000, 0x78000000, 0x78787878, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_64EHRet_SaveList[] = { X86::RAX, X86::RDX, X86::RBX, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, 0 };
static const uint32_t CSR_64EHRet_RegMask[] = { 0x09e883fe, 0x01382700, 0x00000000, 0x78000000, 0x78000000, 0x78787878, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_64_AllRegs_SaveList[] = { X86::RBX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R10, X86::R11, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, X86::XMM0, X86::XMM1, X86::XMM2, X86::XMM3, X86::XMM4, X86::XMM5, X86::XMM6, X86::XMM7, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, X86::RAX, 0 };
static const uint32_t CSR_64_AllRegs_RegMask[] = { 0x0fefaffe, 0xd1f8bf01, 0x00000001, 0x7f800000, 0xffffff80, 0x7fffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_64_AllRegs_AVX_SaveList[] = { X86::RBX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R10, X86::R11, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, X86::RAX, X86::YMM0, X86::YMM1, X86::YMM2, X86::YMM3, X86::YMM4, X86::YMM5, X86::YMM6, X86::YMM7, X86::YMM8, X86::YMM9, X86::YMM10, X86::YMM11, X86::YMM12, X86::YMM13, X86::YMM14, X86::YMM15, 0 };
static const uint32_t CSR_64_AllRegs_AVX_RegMask[] = { 0x0fefaffe, 0xd1f8bf01, 0x00000001, 0x7f800000, 0xffffff80, 0xffffffff, 0x00007fff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_64_AllRegs_AVX512_SaveList[] = { X86::RBX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R10, X86::R11, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, X86::RAX, X86::ZMM0, X86::ZMM1, X86::ZMM2, X86::ZMM3, X86::ZMM4, X86::ZMM5, X86::ZMM6, X86::ZMM7, X86::ZMM8, X86::ZMM9, X86::ZMM10, X86::ZMM11, X86::ZMM12, X86::ZMM13, X86::ZMM14, X86::ZMM15, X86::ZMM16, X86::ZMM17, X86::ZMM18, X86::ZMM19, X86::ZMM20, X86::ZMM21, X86::ZMM22, X86::ZMM23, X86::ZMM24, X86::ZMM25, X86::ZMM26, X86::ZMM27, X86::ZMM28, X86::ZMM29, X86::ZMM30, X86::ZMM31, X86::K0, X86::K1, X86::K2, X86::K3, X86::K4, X86::K5, X86::K6, X86::K7, 0 };
static const uint32_t CSR_64_AllRegs_AVX512_RegMask[] = { 0x0fefaffe, 0xd1f8bf01, 0x00000001, 0x7f800000, 0xffffff80, 0xffffffff, 0xffffffff, 0xffffffff, 0x07ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_64_AllRegs_NoSSE_SaveList[] = { X86::RAX, X86::RBX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R10, X86::R11, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, 0 };
static const uint32_t CSR_64_AllRegs_NoSSE_RegMask[] = { 0x0fefaffe, 0xd1f8bf01, 0x00000001, 0x7f800000, 0xff800000, 0x7fffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_64_CXX_TLS_Darwin_PE_SaveList[] = { X86::RBP, 0 };
static const uint32_t CSR_64_CXX_TLS_Darwin_PE_RegMask[] = { 0x008001c0, 0x00100200, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_64_CXX_TLS_Darwin_ViaCopy_SaveList[] = { X86::RBX, X86::R12, X86::R13, X86::R14, X86::R15, X86::RCX, X86::RDX, X86::RSI, X86::R8, X86::R9, X86::R10, X86::R11, 0 };
static const uint32_t CSR_64_CXX_TLS_Darwin_ViaCopy_RegMask[] = { 0x0b28ae30, 0xd160ac01, 0x00000001, 0x7f800000, 0xff800000, 0x7fffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_64_Intel_OCL_BI_SaveList[] = { X86::RBX, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, 0 };
static const uint32_t CSR_64_Intel_OCL_BI_RegMask[] = { 0x018003f0, 0x00300600, 0x00000000, 0x78000000, 0x787f8000, 0x78787878, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_64_Intel_OCL_BI_AVX_SaveList[] = { X86::RBX, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, X86::YMM8, X86::YMM9, X86::YMM10, X86::YMM11, X86::YMM12, X86::YMM13, X86::YMM14, X86::YMM15, 0 };
static const uint32_t CSR_64_Intel_OCL_BI_AVX_RegMask[] = { 0x018003f0, 0x00300600, 0x00000000, 0x78000000, 0x787f8000, 0x78787878, 0x00007f80, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_64_Intel_OCL_BI_AVX512_SaveList[] = { X86::RBX, X86::RSI, X86::R14, X86::R15, X86::ZMM16, X86::ZMM17, X86::ZMM18, X86::ZMM19, X86::ZMM20, X86::ZMM21, X86::ZMM22, X86::ZMM23, X86::ZMM24, X86::ZMM25, X86::ZMM26, X86::ZMM27, X86::ZMM28, X86::ZMM29, X86::ZMM30, X86::ZMM31, X86::K4, X86::K5, X86::K6, X86::K7, 0 };
static const uint32_t CSR_64_Intel_OCL_BI_AVX512_RegMask[] = { 0x01000230, 0xd0208401, 0x00000001, 0x60000000, 0x60000000, 0x60606060, 0xfff80000, 0x007fffff, 0x067fff80, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_64_MostRegs_SaveList[] = { X86::RBX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R10, X86::R11, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, X86::XMM0, X86::XMM1, X86::XMM2, X86::XMM3, X86::XMM4, X86::XMM5, X86::XMM6, X86::XMM7, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, 0 };
static const uint32_t CSR_64_MostRegs_RegMask[] = { 0x0fafaff0, 0xd1f0be01, 0x00000001, 0x7f800000, 0xffffff80, 0x7fffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_64_NoneRegs_SaveList[] = { X86::RBP, 0 };
static const uint32_t CSR_64_NoneRegs_RegMask[] = { 0x008001c0, 0x00100200, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_64_RT_AllRegs_SaveList[] = { X86::RBX, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, X86::RAX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R10, X86::XMM0, X86::XMM1, X86::XMM2, X86::XMM3, X86::XMM4, X86::XMM5, X86::XMM6, X86::XMM7, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, 0 };
static const uint32_t CSR_64_RT_AllRegs_RegMask[] = { 0x0fefaffe, 0xd1f8bf01, 0x00000001, 0x7b800000, 0xfbffff80, 0x7bfbfbfb, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_64_RT_AllRegs_AVX_SaveList[] = { X86::RBX, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, X86::RAX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R10, X86::YMM0, X86::YMM1, X86::YMM2, X86::YMM3, X86::YMM4, X86::YMM5, X86::YMM6, X86::YMM7, X86::YMM8, X86::YMM9, X86::YMM10, X86::YMM11, X86::YMM12, X86::YMM13, X86::YMM14, X86::YMM15, 0 };
static const uint32_t CSR_64_RT_AllRegs_AVX_RegMask[] = { 0x0fefaffe, 0xd1f8bf01, 0x00000001, 0x7b800000, 0xfbffff80, 0xfbfbfbfb, 0x00007fff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_64_RT_MostRegs_SaveList[] = { X86::RBX, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, X86::RAX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R10, 0 };
static const uint32_t CSR_64_RT_MostRegs_RegMask[] = { 0x0fefaffe, 0xd1f8bf01, 0x00000001, 0x7b800000, 0xfb800000, 0x7bfbfbfb, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_64_SwiftError_SaveList[] = { X86::RBX, X86::R13, X86::R14, X86::R15, X86::RBP, 0 };
static const uint32_t CSR_64_SwiftError_RegMask[] = { 0x018003f0, 0x00300600, 0x00000000, 0x70000000, 0x70000000, 0x70707070, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_64_SwiftTail_SaveList[] = { X86::RBX, X86::R12, X86::R15, X86::RBP, 0 };
static const uint32_t CSR_64_SwiftTail_RegMask[] = { 0x018003f0, 0x00300600, 0x00000000, 0x48000000, 0x48000000, 0x48484848, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_64_TLS_Darwin_SaveList[] = { X86::RBX, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, X86::RCX, X86::RDX, X86::RSI, X86::R8, X86::R9, X86::R10, X86::R11, 0 };
static const uint32_t CSR_64_TLS_Darwin_RegMask[] = { 0x0ba8aff0, 0xd170ae01, 0x00000001, 0x7f800000, 0xff800000, 0x7fffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_IPRA_32_SaveList[] = { X86::EBP, X86::ESI, 0 };
static const uint32_t CSR_IPRA_32_RegMask[] = { 0x008001c0, 0xc0008201, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_IPRA_64_SaveList[] = { X86::RBP, X86::RBX, 0 };
static const uint32_t CSR_IPRA_64_RegMask[] = { 0x018003f0, 0x00300600, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_NoRegs_SaveList[] = { 0 };
static const uint32_t CSR_NoRegs_RegMask[] = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_SysV64_RegCall_SaveList[] = { X86::RBX, X86::RBP, X86::R12, X86::R13, X86::R14, X86::R15, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, 0 };
static const uint32_t CSR_SysV64_RegCall_RegMask[] = { 0x018003f0, 0x00300600, 0x00000000, 0x78000000, 0x787f8000, 0x78787878, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_SysV64_RegCall_NoSSE_SaveList[] = { X86::RBX, X86::RBP, X86::R12, X86::R13, X86::R14, X86::R15, 0 };
static const uint32_t CSR_SysV64_RegCall_NoSSE_RegMask[] = { 0x018003f0, 0x00300600, 0x00000000, 0x78000000, 0x78000000, 0x78787878, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_Win32_CFGuard_Check_SaveList[] = { X86::ESI, X86::EDI, X86::EBX, X86::EBP, X86::XMM4, X86::XMM5, X86::XMM6, X86::XMM7, X86::ECX, 0 };
static const uint32_t CSR_Win32_CFGuard_Check_RegMask[] = { 0x07872ff0, 0xc0009e01, 0x00000001, 0x00000000, 0x00007800, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_Win32_CFGuard_Check_NoSSE_SaveList[] = { X86::ESI, X86::EDI, X86::EBX, X86::EBP, X86::ECX, 0 };
static const uint32_t CSR_Win32_CFGuard_Check_NoSSE_RegMask[] = { 0x07872ff0, 0xc0009e01, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_Win64_SaveList[] = { X86::RBX, X86::RBP, X86::RDI, X86::RSI, X86::R12, X86::R13, X86::R14, X86::R15, X86::XMM6, X86::XMM7, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, 0 };
static const uint32_t CSR_Win64_RegMask[] = { 0x058703f0, 0xd0b09601, 0x00000001, 0x78000000, 0x787fe000, 0x78787878, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_Win64_APX_SaveList[] = { X86::RBX, X86::RBP, X86::RDI, X86::RSI, X86::R12, X86::R13, X86::R14, X86::R15, X86::R30, X86::R31, X86::XMM6, X86::XMM7, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, 0 };
static const uint32_t CSR_Win64_APX_RegMask[] = { 0x058703f0, 0xd0b09601, 0x00000001, 0x78000000, 0x787fe000, 0x78787878, 0x00000000, 0x00000000, 0x00000000, 0x000c0000, 0x000c000c, 0x000c000c, 0x0000000c, };
static const MCPhysReg CSR_Win64_APX_CFGuard_Check_SaveList[] = { X86::RBX, X86::RBP, X86::R10, X86::R11, X86::R12, X86::R13, X86::R14, X86::R15, X86::R16, X86::R17, X86::R18, X86::R19, X86::R20, X86::R21, X86::R22, X86::R23, X86::R24, X86::R25, X86::R26, X86::R27, X86::R28, X86::R29, X86::R30, X86::R31, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, X86::RCX, 0 };
static const uint32_t CSR_Win64_APX_CFGuard_Check_RegMask[] = { 0x03802ff0, 0x00700e00, 0x00000000, 0x7e000000, 0x7e7f8000, 0x7e7e7e7e, 0x00000000, 0x00000000, 0x00000000, 0xfffffff0, 0xffffffff, 0xffffffff, 0x0000000f, };
static const MCPhysReg CSR_Win64_APX_Intel_OCL_BI_AVX_SaveList[] = { X86::RBX, X86::RBP, X86::RDI, X86::RSI, X86::R12, X86::R13, X86::R14, X86::R15, X86::R30, X86::R31, X86::YMM6, X86::YMM7, X86::YMM8, X86::YMM9, X86::YMM10, X86::YMM11, X86::YMM12, X86::YMM13, X86::YMM14, X86::YMM15, 0 };
static const uint32_t CSR_Win64_APX_Intel_OCL_BI_AVX_RegMask[] = { 0x058703f0, 0xd0b09601, 0x00000001, 0x78000000, 0x787fe000, 0x78787878, 0x00007fe0, 0x00000000, 0x00000000, 0x000c0000, 0x000c000c, 0x000c000c, 0x0000000c, };
static const MCPhysReg CSR_Win64_APX_Intel_OCL_BI_AVX512_SaveList[] = { X86::RBX, X86::RBP, X86::RDI, X86::RSI, X86::R12, X86::R13, X86::R14, X86::R15, X86::R30, X86::R31, X86::ZMM6, X86::ZMM7, X86::ZMM8, X86::ZMM9, X86::ZMM10, X86::ZMM11, X86::ZMM12, X86::ZMM13, X86::ZMM14, X86::ZMM15, X86::ZMM16, X86::ZMM17, X86::ZMM18, X86::ZMM19, X86::ZMM20, X86::ZMM21, X86::K4, X86::K5, X86::K6, X86::K7, 0 };
static const uint32_t CSR_Win64_APX_Intel_OCL_BI_AVX512_RegMask[] = { 0x058703f0, 0xd0b09601, 0x00000001, 0x78000000, 0x787fe000, 0x78787878, 0x1ff87fe0, 0xe0001f80, 0x06001fff, 0x000c0000, 0x000c000c, 0x000c000c, 0x0000000c, };
static const MCPhysReg CSR_Win64_APX_RT_MostRegs_SaveList[] = { X86::RBX, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, X86::RAX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R10, X86::R30, X86::R31, X86::XMM6, X86::XMM7, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, 0 };
static const uint32_t CSR_Win64_APX_RT_MostRegs_RegMask[] = { 0x0fefaffe, 0xd1f8bf01, 0x00000001, 0x7b800000, 0xfbffe000, 0x7bfbfbfb, 0x00000000, 0x00000000, 0x00000000, 0x000c0000, 0x000c000c, 0x000c000c, 0x0000000c, };
static const MCPhysReg CSR_Win64_APX_RegCall_SaveList[] = { X86::RBX, X86::RBP, X86::R10, X86::R11, X86::R12, X86::R13, X86::R14, X86::R15, X86::R30, X86::R31, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, 0 };
static const uint32_t CSR_Win64_APX_RegCall_RegMask[] = { 0x018003f0, 0x00300600, 0x00000000, 0x7e000000, 0x7e7f8000, 0x7e7e7e7e, 0x00000000, 0x00000000, 0x00000000, 0x000c0000, 0x000c000c, 0x000c000c, 0x0000000c, };
static const MCPhysReg CSR_Win64_APX_SwiftError_SaveList[] = { X86::RBX, X86::RBP, X86::RDI, X86::RSI, X86::R13, X86::R14, X86::R15, X86::R30, X86::R31, X86::XMM6, X86::XMM7, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, 0 };
static const uint32_t CSR_Win64_APX_SwiftError_RegMask[] = { 0x058703f0, 0xd0b09601, 0x00000001, 0x70000000, 0x707fe000, 0x70707070, 0x00000000, 0x00000000, 0x00000000, 0x000c0000, 0x000c000c, 0x000c000c, 0x0000000c, };
static const MCPhysReg CSR_Win64_APX_SwiftTail_SaveList[] = { X86::RBX, X86::RBP, X86::RDI, X86::RSI, X86::R12, X86::R15, X86::R30, X86::R31, X86::XMM6, X86::XMM7, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, 0 };
static const uint32_t CSR_Win64_APX_SwiftTail_RegMask[] = { 0x058703f0, 0xd0b09601, 0x00000001, 0x48000000, 0x487fe000, 0x48484848, 0x00000000, 0x00000000, 0x00000000, 0x000c0000, 0x000c000c, 0x000c000c, 0x0000000c, };
static const MCPhysReg CSR_Win64_CFGuard_Check_SaveList[] = { X86::RBX, X86::RBP, X86::R10, X86::R11, X86::R12, X86::R13, X86::R14, X86::R15, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, X86::RCX, 0 };
static const uint32_t CSR_Win64_CFGuard_Check_RegMask[] = { 0x03802ff0, 0x00700e00, 0x00000000, 0x7e000000, 0x7e7f8000, 0x7e7e7e7e, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_Win64_CFGuard_Check_NoSSE_SaveList[] = { X86::RBX, X86::RBP, X86::R10, X86::R11, X86::R12, X86::R13, X86::R14, X86::R15, X86::RCX, 0 };
static const uint32_t CSR_Win64_CFGuard_Check_NoSSE_RegMask[] = { 0x03802ff0, 0x00700e00, 0x00000000, 0x7e000000, 0x7e000000, 0x7e7e7e7e, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_Win64_Intel_OCL_BI_AVX_SaveList[] = { X86::RBX, X86::RBP, X86::RDI, X86::RSI, X86::R12, X86::R13, X86::R14, X86::R15, X86::YMM6, X86::YMM7, X86::YMM8, X86::YMM9, X86::YMM10, X86::YMM11, X86::YMM12, X86::YMM13, X86::YMM14, X86::YMM15, 0 };
static const uint32_t CSR_Win64_Intel_OCL_BI_AVX_RegMask[] = { 0x058703f0, 0xd0b09601, 0x00000001, 0x78000000, 0x787fe000, 0x78787878, 0x00007fe0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_Win64_Intel_OCL_BI_AVX512_SaveList[] = { X86::RBX, X86::RBP, X86::RDI, X86::RSI, X86::R12, X86::R13, X86::R14, X86::R15, X86::ZMM6, X86::ZMM7, X86::ZMM8, X86::ZMM9, X86::ZMM10, X86::ZMM11, X86::ZMM12, X86::ZMM13, X86::ZMM14, X86::ZMM15, X86::ZMM16, X86::ZMM17, X86::ZMM18, X86::ZMM19, X86::ZMM20, X86::ZMM21, X86::K4, X86::K5, X86::K6, X86::K7, 0 };
static const uint32_t CSR_Win64_Intel_OCL_BI_AVX512_RegMask[] = { 0x058703f0, 0xd0b09601, 0x00000001, 0x78000000, 0x787fe000, 0x78787878, 0x1ff87fe0, 0xe0001f80, 0x06001fff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_Win64_NoSSE_SaveList[] = { X86::RBX, X86::RBP, X86::RDI, X86::RSI, X86::R12, X86::R13, X86::R14, X86::R15, 0 };
static const uint32_t CSR_Win64_NoSSE_RegMask[] = { 0x058703f0, 0xd0b09601, 0x00000001, 0x78000000, 0x78000000, 0x78787878, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_Win64_RT_MostRegs_SaveList[] = { X86::RBX, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, X86::RAX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R10, X86::XMM6, X86::XMM7, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, 0 };
static const uint32_t CSR_Win64_RT_MostRegs_RegMask[] = { 0x0fefaffe, 0xd1f8bf01, 0x00000001, 0x7b800000, 0xfbffe000, 0x7bfbfbfb, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_Win64_RegCall_SaveList[] = { X86::RBX, X86::RBP, X86::R10, X86::R11, X86::R12, X86::R13, X86::R14, X86::R15, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, 0 };
static const uint32_t CSR_Win64_RegCall_RegMask[] = { 0x018003f0, 0x00300600, 0x00000000, 0x7e000000, 0x7e7f8000, 0x7e7e7e7e, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_Win64_RegCall_NoSSE_SaveList[] = { X86::RBX, X86::RBP, X86::R10, X86::R11, X86::R12, X86::R13, X86::R14, X86::R15, 0 };
static const uint32_t CSR_Win64_RegCall_NoSSE_RegMask[] = { 0x018003f0, 0x00300600, 0x00000000, 0x7e000000, 0x7e000000, 0x7e7e7e7e, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_Win64_SwiftError_SaveList[] = { X86::RBX, X86::RBP, X86::RDI, X86::RSI, X86::R13, X86::R14, X86::R15, X86::XMM6, X86::XMM7, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, 0 };
static const uint32_t CSR_Win64_SwiftError_RegMask[] = { 0x058703f0, 0xd0b09601, 0x00000001, 0x70000000, 0x707fe000, 0x70707070, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_Win64_SwiftTail_SaveList[] = { X86::RBX, X86::RBP, X86::RDI, X86::RSI, X86::R12, X86::R15, X86::XMM6, X86::XMM7, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, 0 };
static const uint32_t CSR_Win64_SwiftTail_RegMask[] = { 0x058703f0, 0xd0b09601, 0x00000001, 0x48000000, 0x487fe000, 0x48484848, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };


ArrayRef<const uint32_t *> X86GenRegisterInfo::getRegMasks() const {
  static const uint32_t *const Masks[] = {
    CSR_32_RegMask,
    CSR_32EHRet_RegMask,
    CSR_32_AllRegs_RegMask,
    CSR_32_AllRegs_AVX_RegMask,
    CSR_32_AllRegs_AVX512_RegMask,
    CSR_32_AllRegs_SSE_RegMask,
    CSR_32_RegCall_RegMask,
    CSR_32_RegCall_NoSSE_RegMask,
    CSR_64_RegMask,
    CSR_64EHRet_RegMask,
    CSR_64_AllRegs_RegMask,
    CSR_64_AllRegs_AVX_RegMask,
    CSR_64_AllRegs_AVX512_RegMask,
    CSR_64_AllRegs_NoSSE_RegMask,
    CSR_64_CXX_TLS_Darwin_PE_RegMask,
    CSR_64_CXX_TLS_Darwin_ViaCopy_RegMask,
    CSR_64_Intel_OCL_BI_RegMask,
    CSR_64_Intel_OCL_BI_AVX_RegMask,
    CSR_64_Intel_OCL_BI_AVX512_RegMask,
    CSR_64_MostRegs_RegMask,
    CSR_64_NoneRegs_RegMask,
    CSR_64_RT_AllRegs_RegMask,
    CSR_64_RT_AllRegs_AVX_RegMask,
    CSR_64_RT_MostRegs_RegMask,
    CSR_64_SwiftError_RegMask,
    CSR_64_SwiftTail_RegMask,
    CSR_64_TLS_Darwin_RegMask,
    CSR_IPRA_32_RegMask,
    CSR_IPRA_64_RegMask,
    CSR_NoRegs_RegMask,
    CSR_SysV64_RegCall_RegMask,
    CSR_SysV64_RegCall_NoSSE_RegMask,
    CSR_Win32_CFGuard_Check_RegMask,
    CSR_Win32_CFGuard_Check_NoSSE_RegMask,
    CSR_Win64_RegMask,
    CSR_Win64_APX_RegMask,
    CSR_Win64_APX_CFGuard_Check_RegMask,
    CSR_Win64_APX_Intel_OCL_BI_AVX_RegMask,
    CSR_Win64_APX_Intel_OCL_BI_AVX512_RegMask,
    CSR_Win64_APX_RT_MostRegs_RegMask,
    CSR_Win64_APX_RegCall_RegMask,
    CSR_Win64_APX_SwiftError_RegMask,
    CSR_Win64_APX_SwiftTail_RegMask,
    CSR_Win64_CFGuard_Check_RegMask,
    CSR_Win64_CFGuard_Check_NoSSE_RegMask,
    CSR_Win64_Intel_OCL_BI_AVX_RegMask,
    CSR_Win64_Intel_OCL_BI_AVX512_RegMask,
    CSR_Win64_NoSSE_RegMask,
    CSR_Win64_RT_MostRegs_RegMask,
    CSR_Win64_RegCall_RegMask,
    CSR_Win64_RegCall_NoSSE_RegMask,
    CSR_Win64_SwiftError_RegMask,
    CSR_Win64_SwiftTail_RegMask,
  };
  return ArrayRef(Masks);
}

bool X86GenRegisterInfo::
isGeneralPurposeRegister(const MachineFunction &MF, MCRegister PhysReg) const {
  return
      X86::GR64RegClass.contains(PhysReg) ||
      X86::GR32RegClass.contains(PhysReg) ||
      X86::GR16RegClass.contains(PhysReg) ||
      X86::GR8RegClass.contains(PhysReg) ||
      false;
}

bool X86GenRegisterInfo::
isGeneralPurposeRegisterClass(const TargetRegisterClass *RC) const {
  return
      X86::GR64RegClass.hasSubClassEq(RC) ||
      X86::GR32RegClass.hasSubClassEq(RC) ||
      X86::GR16RegClass.hasSubClassEq(RC) ||
      X86::GR8RegClass.hasSubClassEq(RC) ||
      false;
}

bool X86GenRegisterInfo::
isFixedRegister(const MachineFunction &MF, MCRegister PhysReg) const {
  return
      X86::DEBUG_REGRegClass.contains(PhysReg) ||
      X86::CONTROL_REGRegClass.contains(PhysReg) ||
      X86::CCRRegClass.contains(PhysReg) ||
      X86::FPCCRRegClass.contains(PhysReg) ||
      X86::DFCCRRegClass.contains(PhysReg) ||
      X86::TILERegClass.contains(PhysReg) ||
      X86::VK1PAIRRegClass.contains(PhysReg) ||
      X86::VK2PAIRRegClass.contains(PhysReg) ||
      X86::VK4PAIRRegClass.contains(PhysReg) ||
      X86::VK8PAIRRegClass.contains(PhysReg) ||
      X86::VK16PAIRRegClass.contains(PhysReg) ||
      false;
}

bool X86GenRegisterInfo::
isArgumentRegister(const MachineFunction &MF, MCRegister PhysReg) const {
  return
      false;
}

bool X86GenRegisterInfo::
isConstantPhysReg(MCRegister PhysReg) const {
  return
      false;
}

ArrayRef<const char *> X86GenRegisterInfo::getRegMaskNames() const {
  static const char *Names[] = {
    "CSR_32",
    "CSR_32EHRet",
    "CSR_32_AllRegs",
    "CSR_32_AllRegs_AVX",
    "CSR_32_AllRegs_AVX512",
    "CSR_32_AllRegs_SSE",
    "CSR_32_RegCall",
    "CSR_32_RegCall_NoSSE",
    "CSR_64",
    "CSR_64EHRet",
    "CSR_64_AllRegs",
    "CSR_64_AllRegs_AVX",
    "CSR_64_AllRegs_AVX512",
    "CSR_64_AllRegs_NoSSE",
    "CSR_64_CXX_TLS_Darwin_PE",
    "CSR_64_CXX_TLS_Darwin_ViaCopy",
    "CSR_64_Intel_OCL_BI",
    "CSR_64_Intel_OCL_BI_AVX",
    "CSR_64_Intel_OCL_BI_AVX512",
    "CSR_64_MostRegs",
    "CSR_64_NoneRegs",
    "CSR_64_RT_AllRegs",
    "CSR_64_RT_AllRegs_AVX",
    "CSR_64_RT_MostRegs",
    "CSR_64_SwiftError",
    "CSR_64_SwiftTail",
    "CSR_64_TLS_Darwin",
    "CSR_IPRA_32",
    "CSR_IPRA_64",
    "CSR_NoRegs",
    "CSR_SysV64_RegCall",
    "CSR_SysV64_RegCall_NoSSE",
    "CSR_Win32_CFGuard_Check",
    "CSR_Win32_CFGuard_Check_NoSSE",
    "CSR_Win64",
    "CSR_Win64_APX",
    "CSR_Win64_APX_CFGuard_Check",
    "CSR_Win64_APX_Intel_OCL_BI_AVX",
    "CSR_Win64_APX_Intel_OCL_BI_AVX512",
    "CSR_Win64_APX_RT_MostRegs",
    "CSR_Win64_APX_RegCall",
    "CSR_Win64_APX_SwiftError",
    "CSR_Win64_APX_SwiftTail",
    "CSR_Win64_CFGuard_Check",
    "CSR_Win64_CFGuard_Check_NoSSE",
    "CSR_Win64_Intel_OCL_BI_AVX",
    "CSR_Win64_Intel_OCL_BI_AVX512",
    "CSR_Win64_NoSSE",
    "CSR_Win64_RT_MostRegs",
    "CSR_Win64_RegCall",
    "CSR_Win64_RegCall_NoSSE",
    "CSR_Win64_SwiftError",
    "CSR_Win64_SwiftTail",
  };
  return ArrayRef(Names);
}

const X86FrameLowering *
X86GenRegisterInfo::getFrameLowering(const MachineFunction &MF) {
  return static_cast<const X86FrameLowering *>(
      MF.getSubtarget().getFrameLowering());
}


} // namespace llvm
