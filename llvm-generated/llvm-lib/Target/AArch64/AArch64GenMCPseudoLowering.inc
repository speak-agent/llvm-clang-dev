/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Pseudo-instruction MC lowering Source Fragment                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

bool AArch64AsmPrinter::
lowerPseudoInstExpansion(const MachineInstr *MI, MCInst &Inst) {
  Inst.clear();
  switch (MI->getOpcode()) {
  default: return false;
  case AArch64::BLRNoIP: {
    MCOperand MCOp;
    Inst.setOpcode(AArch64::BLR);
    // Operand: Rn
    lowerOperand(MI->getOperand(0), MCOp);
    Inst.addOperand(MCOp);
    break;
  }
  case AArch64::BLR_X16: {
    MCOperand MCOp;
    Inst.setOpcode(AArch64::BLR);
    // Operand: Rn
    Inst.addOperand(MCOperand::createReg(AArch64::X16));
    break;
  }
  case AArch64::MRS_FPCR: {
    MCOperand MCOp;
    Inst.setOpcode(AArch64::MRS);
    // Operand: Rt
    lowerOperand(MI->getOperand(0), MCOp);
    Inst.addOperand(MCOp);
    // Operand: systemreg
    Inst.addOperand(MCOperand::createImm(55840));
    break;
  }
  case AArch64::MRS_FPSR: {
    MCOperand MCOp;
    Inst.setOpcode(AArch64::MRS);
    // Operand: Rt
    lowerOperand(MI->getOperand(0), MCOp);
    Inst.addOperand(MCOp);
    // Operand: systemreg
    Inst.addOperand(MCOperand::createImm(55841));
    break;
  }
  case AArch64::MSR_FPCR: {
    MCOperand MCOp;
    Inst.setOpcode(AArch64::MSR);
    // Operand: systemreg
    Inst.addOperand(MCOperand::createImm(55840));
    // Operand: Rt
    lowerOperand(MI->getOperand(0), MCOp);
    Inst.addOperand(MCOp);
    break;
  }
  case AArch64::MSR_FPSR: {
    MCOperand MCOp;
    Inst.setOpcode(AArch64::MSR);
    // Operand: systemreg
    Inst.addOperand(MCOperand::createImm(55841));
    // Operand: Rt
    lowerOperand(MI->getOperand(0), MCOp);
    Inst.addOperand(MCOp);
    break;
  }
  case AArch64::PTEST_PP_ANY: {
    MCOperand MCOp;
    Inst.setOpcode(AArch64::PTEST_PP);
    // Operand: Pg
    lowerOperand(MI->getOperand(0), MCOp);
    Inst.addOperand(MCOp);
    // Operand: Pn
    lowerOperand(MI->getOperand(1), MCOp);
    Inst.addOperand(MCOp);
    break;
  }
  case AArch64::PTEST_PP_FIRST: {
    MCOperand MCOp;
    Inst.setOpcode(AArch64::PTEST_PP);
    // Operand: Pg
    lowerOperand(MI->getOperand(0), MCOp);
    Inst.addOperand(MCOp);
    // Operand: Pn
    lowerOperand(MI->getOperand(1), MCOp);
    Inst.addOperand(MCOp);
    break;
  }
  }
  return true;
}

