/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Pseudo-instruction MC lowering Source Fragment                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

bool MipsAsmPrinter::
emitPseudoExpansionLowering(MCStreamer &OutStreamer,
                            const MachineInstr *MI) {
  switch (MI->getOpcode()) {
    default: return false;
    case Mips::BAL_BR: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(Mips::BGEZAL);
      // Operand: rs
      TmpInst.addOperand(MCOperand::CreateReg(Mips::ZERO));
      // Operand: offset
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case Mips::JALR64Pseudo: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(Mips::JALR);
      // Operand: rd
      TmpInst.addOperand(MCOperand::CreateReg(Mips::RA));
      // Operand: rs
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case Mips::JALRPseudo: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(Mips::JALR);
      // Operand: rd
      TmpInst.addOperand(MCOperand::CreateReg(Mips::RA));
      // Operand: rs
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case Mips::NOP: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(Mips::SLL);
      // Operand: rd
      TmpInst.addOperand(MCOperand::CreateReg(Mips::ZERO));
      // Operand: rt
      TmpInst.addOperand(MCOperand::CreateReg(Mips::ZERO));
      // Operand: shamt
      TmpInst.addOperand(MCOperand::CreateImm(0));
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case Mips::PseudoCMPU_EQ_QB: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(Mips::CMPU_EQ_QB);
      // Operand: rs
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: rt
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case Mips::PseudoCMPU_LE_QB: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(Mips::CMPU_LE_QB);
      // Operand: rs
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: rt
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case Mips::PseudoCMPU_LT_QB: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(Mips::CMPU_LT_QB);
      // Operand: rs
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: rt
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case Mips::PseudoCMP_EQ_PH: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(Mips::CMP_EQ_PH);
      // Operand: rs
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: rt
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case Mips::PseudoCMP_LE_PH: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(Mips::CMP_LE_PH);
      // Operand: rs
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: rt
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case Mips::PseudoCMP_LT_PH: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(Mips::CMP_LT_PH);
      // Operand: rs
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: rt
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case Mips::PseudoDMULT: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(Mips::DMULT);
      // Operand: rs
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: rt
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case Mips::PseudoDMULTu: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(Mips::DMULTu);
      // Operand: rs
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: rt
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case Mips::PseudoDSDIV: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(Mips::DSDIV);
      // Operand: rs
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: rt
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case Mips::PseudoDUDIV: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(Mips::DUDIV);
      // Operand: rs
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: rt
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case Mips::PseudoMADD: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(Mips::MADD);
      // Operand: rs
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: rt
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case Mips::PseudoMADDU: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(Mips::MADDU);
      // Operand: rs
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: rt
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case Mips::PseudoMSUB: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(Mips::MSUB);
      // Operand: rs
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: rt
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case Mips::PseudoMSUBU: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(Mips::MSUBU);
      // Operand: rs
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: rt
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case Mips::PseudoMULT: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(Mips::MULT);
      // Operand: rs
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: rt
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case Mips::PseudoMULTu: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(Mips::MULTu);
      // Operand: rs
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: rt
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case Mips::PseudoPICK_PH: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(Mips::PICK_PH);
      // Operand: rd
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: rs
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: rt
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case Mips::PseudoPICK_QB: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(Mips::PICK_QB);
      // Operand: rd
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: rs
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: rt
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case Mips::PseudoSDIV: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(Mips::SDIV);
      // Operand: rs
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: rt
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case Mips::PseudoUDIV: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(Mips::UDIV);
      // Operand: rs
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: rt
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
  }
  return true;
}

