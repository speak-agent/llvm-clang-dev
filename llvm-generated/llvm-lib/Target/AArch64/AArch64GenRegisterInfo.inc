#ifdef GET_REGINFO_ENUM
#undef GET_REGINFO_ENUM

#include "AArch64GenRegisterInfo.incEnums.inc"

#endif // GET_REGINFO_ENUM

#ifdef GET_REGINFO_MC_DESC
#undef GET_REGINFO_MC_DESC

#include "AArch64GenRegisterInfo.incMCDesc.inc"

#endif // GET_REGINFO_MC_DESC

#ifdef GET_REGINFO_HEADER
#undef GET_REGINFO_HEADER

#include "AArch64GenRegisterInfo.incHeader.inc"

#endif // GET_REGINFO_HEADER

#ifdef GET_REGINFO_TARGET_DESC
#undef GET_REGINFO_TARGET_DESC

#include "AArch64GenRegisterInfo.incTargetDesc.inc"

#endif // GET_REGINFO_TARGET_DESC

