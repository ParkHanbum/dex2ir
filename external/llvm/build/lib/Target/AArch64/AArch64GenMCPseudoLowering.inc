/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Pseudo-instruction MC lowering Source Fragment                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

bool AArch64AsmPrinter::
emitPseudoExpansionLowering(MCStreamer &OutStreamer,
                            const MachineInstr *MI) {
  switch (MI->getOpcode()) {
    default: return false;
    case AArch64::RET: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::RETx);
      // Operand: Rn
      TmpInst.addOperand(MCOperand::CreateReg(AArch64::X30));
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case AArch64::TAIL_BRx: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::BRx);
      // Operand: Rn
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case AArch64::TAIL_Bimm: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::Bimm);
      // Operand: Label
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
  }
  return true;
}

