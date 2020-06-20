/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Assembly Matcher Source Fragment                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_ASSEMBLER_HEADER
#undef GET_ASSEMBLER_HEADER
  // This should be included into the middle of the declaration of
  // your subclasses implementation of MCTargetAsmParser.
  unsigned ComputeAvailableFeatures(uint64_t FeatureBits) const;
  void convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                       const SmallVectorImpl<MCParsedAsmOperand*> &Operands);
  void convertToMapAndConstraints(unsigned Kind,
                           const SmallVectorImpl<MCParsedAsmOperand*> &Operands);
  bool mnemonicIsValid(StringRef Mnemonic, unsigned VariantID);
  unsigned MatchInstructionImpl(
                           const SmallVectorImpl<MCParsedAsmOperand*> &Operands,
                                MCInst &Inst,
                                unsigned &ErrorInfo, bool matchingInlineAsm,
                                unsigned VariantID = 0);

  enum OperandMatchResultTy {
    MatchOperand_Success,    // operand matched successfully
    MatchOperand_NoMatch,    // operand did not match
    MatchOperand_ParseFail   // operand matched but had errors
  };
  OperandMatchResultTy MatchOperandParserImpl(
    SmallVectorImpl<MCParsedAsmOperand*> &Operands,
    StringRef Mnemonic);
  OperandMatchResultTy tryCustomParseOperand(
    SmallVectorImpl<MCParsedAsmOperand*> &Operands,
    unsigned MCK);

#endif // GET_ASSEMBLER_HEADER_INFO


#ifdef GET_OPERAND_DIAGNOSTIC_TYPES
#undef GET_OPERAND_DIAGNOSTIC_TYPES

#endif // GET_OPERAND_DIAGNOSTIC_TYPES


#ifdef GET_REGISTER_MATCHER
#undef GET_REGISTER_MATCHER

// Flags for subtarget features that participate in instruction matching.
enum SubtargetFeatureFlag {
  Feature_HasSEInReg = (1 << 9),
  Feature_HasBitCount = (1 << 0),
  Feature_HasSwap = (1 << 11),
  Feature_HasCondMov = (1 << 1),
  Feature_HasFPIdx = (1 << 4),
  Feature_HasMips32 = (1 << 5),
  Feature_HasMips32r2 = (1 << 6),
  Feature_HasMips64 = (1 << 7),
  Feature_NotMips64 = (1 << 19),
  Feature_HasMips64r2 = (1 << 8),
  Feature_IsN64 = (1 << 14),
  Feature_NotN64 = (1 << 20),
  Feature_InMips16Mode = (1 << 12),
  Feature_RelocStatic = (1 << 22),
  Feature_RelocPIC = (1 << 21),
  Feature_NoNaNsFPMath = (1 << 17),
  Feature_HasStdEnc = (1 << 10),
  Feature_IsFP64bit = (1 << 13),
  Feature_NotFP64bit = (1 << 18),
  Feature_IsSingleFloat = (1 << 16),
  Feature_IsNotSingleFloat = (1 << 15),
  Feature_HasDSP = (1 << 2),
  Feature_HasDSPR2 = (1 << 3),
  Feature_None = 0
};

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(unsigned Val) {
  switch(Val) {
  case Feature_HasSEInReg: return "";
  case Feature_HasBitCount: return "";
  case Feature_HasSwap: return "";
  case Feature_HasCondMov: return "";
  case Feature_HasFPIdx: return "";
  case Feature_HasMips32: return "";
  case Feature_HasMips32r2: return "";
  case Feature_HasMips64: return "";
  case Feature_NotMips64: return "";
  case Feature_HasMips64r2: return "";
  case Feature_IsN64: return "";
  case Feature_NotN64: return "";
  case Feature_InMips16Mode: return "";
  case Feature_RelocStatic: return "";
  case Feature_RelocPIC: return "";
  case Feature_NoNaNsFPMath: return "";
  case Feature_HasStdEnc: return "";
  case Feature_IsFP64bit: return "";
  case Feature_NotFP64bit: return "";
  case Feature_IsSingleFloat: return "";
  case Feature_IsNotSingleFloat: return "";
  case Feature_HasDSP: return "";
  case Feature_HasDSPR2: return "";
  default: return "(unknown)";
  }
}

#endif // GET_SUBTARGET_FEATURE_NAME


#ifdef GET_MATCHER_IMPLEMENTATION
#undef GET_MATCHER_IMPLEMENTATION

namespace {
enum OperatorConversionKind {
  CVT_Done,
  CVT_Reg,
  CVT_Tied,
  CVT_95_addRegAsmOperands,
  CVT_95_Reg,
  CVT_95_addImmOperands,
  CVT_regZERO,
  CVT_regFCC0,
  CVT_imm_0,
  CVT_regRA,
  CVT_95_addMemOperands,
  CVT_regZERO_64,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__AFGR64Asm1_0__AFGR64Asm1_1,
  Convert__FGR64Asm1_0__FGR64Asm1_1,
  Convert__FGR32Asm1_0__FGR32Asm1_1,
  Convert__Reg1_0__Reg1_1,
  Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2,
  Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2,
  Convert__AFGR64Asm1_0__AFGR64Asm1_1__AFGR64Asm1_2,
  Convert__FGR64Asm1_0__FGR64Asm1_1__FGR64Asm1_2,
  Convert__FGR32Asm1_0__FGR32Asm1_1__FGR32Asm1_2,
  Convert__GPR32Asm1_0__GPR32Asm1_0__Imm1_1,
  Convert__Reg1_0__Imm1_1,
  Convert__Imm1_1,
  Convert__Reg1_0__Reg1_1__Imm1_2,
  Convert__Reg1_0__Imm1_2,
  Convert__Reg1_0__Tie0__Imm1_1,
  Convert__Reg1_0__Reg1_1__Reg1_2,
  Convert__Reg1_0__Tie0__Reg1_1,
  Convert__Reg1_0__Reg1_1__Imm1_2__Tie0,
  Convert__Imm1_0,
  Convert__regZERO__Imm1_0,
  Convert__regFCC0__Imm1_0,
  Convert__FCCRegsAsm1_0__Imm1_1,
  Convert__GPR32Asm1_0__regZERO__Imm1_1,
  Convert__GPR32Asm1_0__Imm1_1,
  Convert__imm_0__imm_0,
  Convert_NoOperands,
  Convert__Imm1_0__imm_0,
  Convert__Imm1_0__Imm1_1,
  Convert__FGR64Asm1_0__FGR32Asm1_1,
  Convert__FGR32Asm1_0__AFGR64Asm1_1,
  Convert__FGR32Asm1_0__FGR64Asm1_1,
  Convert__GPR32Asm1_0__CCRAsm1_1,
  Convert__GPR32Asm1_0__GPR32Asm1_1,
  Convert__CCRAsm1_1__GPR32Asm1_0,
  Convert__AFGR64Asm1_0__FGR32Asm1_1,
  Convert__GPR64Asm1_0__GPR64Asm1_1__GPR64Asm1_2,
  Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2,
  Convert__GPR64Asm1_0__GPR64Asm1_0__Imm1_1,
  Convert__GPR64Asm1_0__GPR64Asm1_1,
  Convert__GPR64Asm1_1__GPR64Asm1_2,
  Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2__Imm1_3,
  Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2__Imm1_3__Tie0,
  Convert__Reg1_1__Reg1_2,
  Convert__GPR32Asm1_1__GPR32Asm1_2,
  Convert__GPR64Asm1_0__GPR64Asm1_1__imm_0,
  Convert__GPR64Asm1_0__FGR64Asm1_1,
  Convert__GPR64Asm1_1__imm_0__GPR64Asm1_0,
  Convert__GPR64Asm1_1__Imm1_2__GPR64Asm1_0,
  Convert__FGR64Asm1_1__GPR64Asm1_0,
  Convert__Reg1_0__Reg1_1__Reg1_2__Tie0,
  Convert__GPR64Asm1_0__GPR64Asm1_1__GPR32Asm1_2,
  Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2__Imm1_3,
  Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2__Imm1_3__Tie0,
  Convert__GPR32Asm1_0,
  Convert__regRA__GPR32Asm1_0,
  Convert__Reg1_0,
  Convert__GPR32Asm1_0__Mem2_1,
  Convert__Reg1_0__Reg1_3__Reg1_1,
  Convert__GPR64Asm1_0__Mem2_1,
  Convert__AFGR64Asm1_0__Mem2_1,
  Convert__FGR64Asm1_0__Mem2_1,
  Convert__GPR64Asm1_0__Mem2_1__Tie0,
  Convert__AFGR64Asm1_0__GPR32Asm1_3__GPR32Asm1_1,
  Convert__FGR64Asm1_0__GPR32Asm1_3__GPR32Asm1_1,
  Convert__ACRegsDSPAsm1_0__Mem2_1,
  Convert__Reg1_0__Mem2_1,
  Convert__Reg1_0__Reg1_3__Imm1_1,
  Convert__FGR32Asm1_0__Mem2_1,
  Convert__GPR32Asm1_0__Mem2_1__Tie0,
  Convert__FGR32Asm1_0__GPR32Asm1_3__GPR32Asm1_1,
  Convert__AFGR64Asm1_0__AFGR64Asm1_1__AFGR64Asm1_2__AFGR64Asm1_3,
  Convert__FGR32Asm1_0__FGR32Asm1_1__FGR32Asm1_2__FGR32Asm1_3,
  Convert__GPR32Asm1_0__GPR32Asm1_1__imm_0,
  Convert__GPR32Asm1_0__FGR32Asm1_1,
  Convert__GPR32Asm1_0__GPR32Asm1_1__regZERO,
  Convert__GPR64Asm1_0__GPR64Asm1_1__regZERO_64,
  Convert__GPR32Asm1_0__GPR32Asm1_1__FCCRegsAsm1_2__Tie0,
  Convert__AFGR64Asm1_0__AFGR64Asm1_1__FCCRegsAsm1_2__Tie0,
  Convert__FGR32Asm1_0__FGR32Asm1_1__FCCRegsAsm1_2__Tie0,
  Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2__Tie0,
  Convert__AFGR64Asm1_0__AFGR64Asm1_1__GPR32Asm1_2__Tie0,
  Convert__FGR32Asm1_0__FGR32Asm1_1__GPR32Asm1_2__Tie0,
  Convert__GPR32Asm1_1__imm_0__GPR32Asm1_0,
  Convert__GPR32Asm1_1__Imm1_2__GPR32Asm1_0,
  Convert__FGR32Asm1_1__GPR32Asm1_0,
  Convert__Reg1_1__Reg1_0,
  Convert__Reg1_1__Reg1_0__Tie0,
  Convert__GPR32Asm1_0__regZERO__GPR32Asm1_1,
  Convert__regZERO__regZERO__imm_0,
  Convert__GPR32Asm1_0__HWRegsAsm1_1,
  Convert__Reg1_0__Reg1_1__Imm1_2__Reg1_3,
  Convert__GPR32Asm1_0__Tie0__Mem2_1,
  Convert__GPR64Asm1_0__Tie0__Mem2_1,
  Convert__Reg1_0__Imm1_1__Tie0,
  Convert__Reg1_0__Reg1_1__Tie0,
  Convert__imm_0,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][11] = {
  // Convert__AFGR64Asm1_0__AFGR64Asm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__FGR64Asm1_0__FGR64Asm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__FGR32Asm1_0__FGR32Asm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 3, CVT_Done },
  // Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__AFGR64Asm1_0__AFGR64Asm1_1__AFGR64Asm1_2
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 3, CVT_Done },
  // Convert__FGR64Asm1_0__FGR64Asm1_1__FGR64Asm1_2
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 3, CVT_Done },
  // Convert__FGR32Asm1_0__FGR32Asm1_1__FGR32Asm1_2
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 3, CVT_Done },
  // Convert__GPR32Asm1_0__GPR32Asm1_0__Imm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Imm1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Imm1_1
  { CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Imm1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Imm1_2
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Tie0__Imm1_1
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_1
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Imm1_2__Tie0
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__regZERO__Imm1_0
  { CVT_regZERO, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__regFCC0__Imm1_0
  { CVT_regFCC0, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__FCCRegsAsm1_0__Imm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR32Asm1_0__regZERO__Imm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_regZERO, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR32Asm1_0__Imm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_0__imm_0
  { CVT_imm_0, 0, CVT_imm_0, 0, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__Imm1_0__imm_0
  { CVT_95_addImmOperands, 1, CVT_imm_0, 0, CVT_Done },
  // Convert__Imm1_0__Imm1_1
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__FGR64Asm1_0__FGR32Asm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__FGR32Asm1_0__AFGR64Asm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__FGR32Asm1_0__FGR64Asm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__GPR32Asm1_0__CCRAsm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__GPR32Asm1_0__GPR32Asm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__CCRAsm1_1__GPR32Asm1_0
  { CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 1, CVT_Done },
  // Convert__AFGR64Asm1_0__FGR32Asm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__GPR64Asm1_0__GPR64Asm1_1__GPR64Asm1_2
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 3, CVT_Done },
  // Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR64Asm1_0__GPR64Asm1_0__Imm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR64Asm1_0__GPR64Asm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__GPR64Asm1_1__GPR64Asm1_2
  { CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 3, CVT_Done },
  // Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2__Imm1_3
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2__Imm1_3__Tie0
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Tied, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_2
  { CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Done },
  // Convert__GPR32Asm1_1__GPR32Asm1_2
  { CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 3, CVT_Done },
  // Convert__GPR64Asm1_0__GPR64Asm1_1__imm_0
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_imm_0, 0, CVT_Done },
  // Convert__GPR64Asm1_0__FGR64Asm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__GPR64Asm1_1__imm_0__GPR64Asm1_0
  { CVT_95_addRegAsmOperands, 2, CVT_imm_0, 0, CVT_95_addRegAsmOperands, 1, CVT_Done },
  // Convert__GPR64Asm1_1__Imm1_2__GPR64Asm1_0
  { CVT_95_addRegAsmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addRegAsmOperands, 1, CVT_Done },
  // Convert__FGR64Asm1_1__GPR64Asm1_0
  { CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 1, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__Tie0
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Tied, 0, CVT_Done },
  // Convert__GPR64Asm1_0__GPR64Asm1_1__GPR32Asm1_2
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 3, CVT_Done },
  // Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2__Imm1_3
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2__Imm1_3__Tie0
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Tied, 0, CVT_Done },
  // Convert__GPR32Asm1_0
  { CVT_95_addRegAsmOperands, 1, CVT_Done },
  // Convert__regRA__GPR32Asm1_0
  { CVT_regRA, 0, CVT_95_addRegAsmOperands, 1, CVT_Done },
  // Convert__Reg1_0
  { CVT_95_Reg, 1, CVT_Done },
  // Convert__GPR32Asm1_0__Mem2_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_3__Reg1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_Reg, 2, CVT_Done },
  // Convert__GPR64Asm1_0__Mem2_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__AFGR64Asm1_0__Mem2_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__FGR64Asm1_0__Mem2_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPR64Asm1_0__Mem2_1__Tie0
  { CVT_95_addRegAsmOperands, 1, CVT_95_addMemOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__AFGR64Asm1_0__GPR32Asm1_3__GPR32Asm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 4, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__FGR64Asm1_0__GPR32Asm1_3__GPR32Asm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 4, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__ACRegsDSPAsm1_0__Mem2_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__Reg1_0__Mem2_1
  { CVT_95_Reg, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_3__Imm1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__FGR32Asm1_0__Mem2_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPR32Asm1_0__Mem2_1__Tie0
  { CVT_95_addRegAsmOperands, 1, CVT_95_addMemOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__FGR32Asm1_0__GPR32Asm1_3__GPR32Asm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 4, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__AFGR64Asm1_0__AFGR64Asm1_1__AFGR64Asm1_2__AFGR64Asm1_3
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 3, CVT_95_addRegAsmOperands, 4, CVT_Done },
  // Convert__FGR32Asm1_0__FGR32Asm1_1__FGR32Asm1_2__FGR32Asm1_3
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 3, CVT_95_addRegAsmOperands, 4, CVT_Done },
  // Convert__GPR32Asm1_0__GPR32Asm1_1__imm_0
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_imm_0, 0, CVT_Done },
  // Convert__GPR32Asm1_0__FGR32Asm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__GPR32Asm1_0__GPR32Asm1_1__regZERO
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_regZERO, 0, CVT_Done },
  // Convert__GPR64Asm1_0__GPR64Asm1_1__regZERO_64
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_regZERO_64, 0, CVT_Done },
  // Convert__GPR32Asm1_0__GPR32Asm1_1__FCCRegsAsm1_2__Tie0
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__AFGR64Asm1_0__AFGR64Asm1_1__FCCRegsAsm1_2__Tie0
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__FGR32Asm1_0__FGR32Asm1_1__FCCRegsAsm1_2__Tie0
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2__Tie0
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__AFGR64Asm1_0__AFGR64Asm1_1__GPR32Asm1_2__Tie0
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__FGR32Asm1_0__FGR32Asm1_1__GPR32Asm1_2__Tie0
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__GPR32Asm1_1__imm_0__GPR32Asm1_0
  { CVT_95_addRegAsmOperands, 2, CVT_imm_0, 0, CVT_95_addRegAsmOperands, 1, CVT_Done },
  // Convert__GPR32Asm1_1__Imm1_2__GPR32Asm1_0
  { CVT_95_addRegAsmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addRegAsmOperands, 1, CVT_Done },
  // Convert__FGR32Asm1_1__GPR32Asm1_0
  { CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 1, CVT_Done },
  // Convert__Reg1_1__Reg1_0
  { CVT_95_Reg, 2, CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_1__Reg1_0__Tie0
  { CVT_95_Reg, 2, CVT_95_Reg, 1, CVT_Tied, 0, CVT_Done },
  // Convert__GPR32Asm1_0__regZERO__GPR32Asm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_regZERO, 0, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__regZERO__regZERO__imm_0
  { CVT_regZERO, 0, CVT_regZERO, 0, CVT_imm_0, 0, CVT_Done },
  // Convert__GPR32Asm1_0__HWRegsAsm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Imm1_2__Reg1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_95_Reg, 4, CVT_Done },
  // Convert__GPR32Asm1_0__Tie0__Mem2_1
  { CVT_95_addRegAsmOperands, 1, CVT_Tied, 0, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPR64Asm1_0__Tie0__Mem2_1
  { CVT_95_addRegAsmOperands, 1, CVT_Tied, 0, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__Reg1_0__Imm1_1__Tie0
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Tie0
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_Done },
  // Convert__imm_0
  { CVT_imm_0, 0, CVT_Done },
};

void MipsAsmParser::
convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                const SmallVectorImpl<MCParsedAsmOperand*> &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  Inst.setOpcode(Opcode);
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      static_cast<MipsOperand*>(Operands[*(p + 1)])->addRegOperands(Inst, 1);
      break;
    case CVT_Tied:
      Inst.addOperand(Inst.getOperand(*(p + 1)));
      break;
    case CVT_95_addRegAsmOperands:
      static_cast<MipsOperand*>(Operands[*(p + 1)])->addRegAsmOperands(Inst, 1);
      break;
    case CVT_95_Reg:
      static_cast<MipsOperand*>(Operands[*(p + 1)])->addRegOperands(Inst, 1);
      break;
    case CVT_95_addImmOperands:
      static_cast<MipsOperand*>(Operands[*(p + 1)])->addImmOperands(Inst, 1);
      break;
    case CVT_regZERO:
      Inst.addOperand(MCOperand::CreateReg(Mips::ZERO));
      break;
    case CVT_regFCC0:
      Inst.addOperand(MCOperand::CreateReg(Mips::FCC0));
      break;
    case CVT_imm_0:
      Inst.addOperand(MCOperand::CreateImm(0));
      break;
    case CVT_regRA:
      Inst.addOperand(MCOperand::CreateReg(Mips::RA));
      break;
    case CVT_95_addMemOperands:
      static_cast<MipsOperand*>(Operands[*(p + 1)])->addMemOperands(Inst, 2);
      break;
    case CVT_regZERO_64:
      Inst.addOperand(MCOperand::CreateReg(Mips::ZERO_64));
      break;
    }
  }
}

void MipsAsmParser::
convertToMapAndConstraints(unsigned Kind,
                           const SmallVectorImpl<MCParsedAsmOperand*> &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  unsigned NumMCOperands = 0;
  const uint8_t *Converter = ConversionTable[Kind];
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      ++NumMCOperands;
      break;
    case CVT_Tied:
      ++NumMCOperands;
      break;
    case CVT_95_addRegAsmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      NumMCOperands += 1;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_regZERO:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_regFCC0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_imm_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_regRA:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addMemOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_regZERO_64:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    }
  }
}

namespace {

/// MatchClassKind - The kinds of classes which participate in
/// instruction matching.
enum MatchClassKind {
  InvalidMatchClass = 0,
  MCK__35_, // '#'
  MCK__40_, // '('
  MCK__41_, // ')'
  MCK__41__59_, // ');'
  MCK_0, // '0'
  MCK_16, // '16'
  MCK_bit, // 'bit'
  MCK_inst, // 'inst'
  MCK_GPR64, // register class 'GPR64'
  MCK_FGR32, // register class 'FGR32'
  MCK_ZERO, // register class 'ZERO'
  MCK_CPU16Regs, // register class 'CPU16Regs'
  MCK_CPUSPReg, // register class 'CPUSPReg,SP'
  MCK_CPU16RegsPlusSP, // register class 'CPU16RegsPlusSP'
  MCK_CPURAReg, // register class 'CPURAReg,RA'
  MCK_DSPRegs, // register class 'DSPRegs,GPR32'
  MCK_Reg8, // derived register class
  MCK_Reg10, // derived register class
  MCK_Reg9, // derived register class
  MCK_Reg11, // derived register class
  MCK_AFGR64, // register class 'AFGR64'
  MCK_FGR64, // register class 'FGR64'
  MCK_HIRegs, // register class 'HIRegs'
  MCK_HIRegsDSP, // register class 'HIRegsDSP'
  MCK_LORegs, // register class 'LORegs'
  MCK_LORegsDSP, // register class 'LORegsDSP'
  MCK_HIRegs64, // register class 'HIRegs64'
  MCK_LORegs64, // register class 'LORegs64'
  MCK_CCR, // register class 'CCR'
  MCK_FCC, // register class 'FCC'
  MCK_PC, // register class 'PC'
  MCK_HWRegs, // register class 'HWRegs'
  MCK_HWRegs64, // register class 'HWRegs64'
  MCK_ACRegs, // register class 'ACRegs'
  MCK_ACRegsDSP, // register class 'ACRegsDSP'
  MCK_ACRegs128, // register class 'ACRegs128'
  MCK_DSPCC, // register class 'DSPCC'
  MCK_ACRegsDSPAsm, // user defined class 'ACRegsDSPAsmOperand'
  MCK_AFGR64Asm, // user defined class 'AFGR64AsmOperand'
  MCK_CCRAsm, // user defined class 'CCRAsmOperand'
  MCK_FCCRegsAsm, // user defined class 'FCCRegsAsmOperand'
  MCK_FGR32Asm, // user defined class 'FGR32AsmOperand'
  MCK_FGR64Asm, // user defined class 'FGR64AsmOperand'
  MCK_GPR32Asm, // user defined class 'GPR32AsmOperand'
  MCK_GPR64Asm, // user defined class 'GPR64AsmOperand'
  MCK_HW64RegsAsm, // user defined class 'HW64RegsAsmOperand'
  MCK_HWRegsAsm, // user defined class 'HWRegsAsmOperand'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_Mem, // user defined class 'MipsMemAsmOperand'
  NumMatchClassKinds
};

}

static MatchClassKind matchTokenString(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 1:	 // 4 strings to match.
    switch (Name[0]) {
    default: break;
    case '#':	 // 1 string to match.
      return MCK__35_;	 // "#"
    case '(':	 // 1 string to match.
      return MCK__40_;	 // "("
    case ')':	 // 1 string to match.
      return MCK__41_;	 // ")"
    case '0':	 // 1 string to match.
      return MCK_0;	 // "0"
    }
    break;
  case 2:	 // 2 strings to match.
    switch (Name[0]) {
    default: break;
    case ')':	 // 1 string to match.
      if (Name[1] != ';')
        break;
      return MCK__41__59_;	 // ");"
    case '1':	 // 1 string to match.
      if (Name[1] != '6')
        break;
      return MCK_16;	 // "16"
    }
    break;
  case 3:	 // 1 string to match.
    if (memcmp(Name.data()+0, "bit", 3))
      break;
    return MCK_bit;	 // "bit"
  case 4:	 // 1 string to match.
    if (memcmp(Name.data()+0, "inst", 4))
      break;
    return MCK_inst;	 // "inst"
  }
  return InvalidMatchClass;
}

/// isSubclass - Compute whether \p A is a subclass of \p B.
static bool isSubclass(MatchClassKind A, MatchClassKind B) {
  if (A == B)
    return true;

  switch (A) {
  default:
    return false;

  case MCK_ZERO:
    return B == MCK_DSPRegs;

  case MCK_CPU16Regs:
    switch (B) {
    default: return false;
    case MCK_CPU16RegsPlusSP: return true;
    case MCK_DSPRegs: return true;
    }

  case MCK_CPUSPReg:
    switch (B) {
    default: return false;
    case MCK_CPU16RegsPlusSP: return true;
    case MCK_DSPRegs: return true;
    }

  case MCK_CPU16RegsPlusSP:
    return B == MCK_DSPRegs;

  case MCK_CPURAReg:
    return B == MCK_DSPRegs;

  case MCK_Reg8:
    switch (B) {
    default: return false;
    case MCK_GPR64: return true;
    case MCK_Reg9: return true;
    }

  case MCK_Reg10:
    switch (B) {
    default: return false;
    case MCK_GPR64: return true;
    case MCK_Reg9: return true;
    }

  case MCK_Reg9:
    return B == MCK_GPR64;

  case MCK_Reg11:
    return B == MCK_GPR64;

  case MCK_HIRegs:
    return B == MCK_HIRegsDSP;

  case MCK_LORegs:
    return B == MCK_LORegsDSP;

  case MCK_ACRegs:
    return B == MCK_ACRegsDSP;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand *GOp, MatchClassKind Kind) {
  MipsOperand &Operand = *(MipsOperand*)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken())
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  // 'ACRegsDSPAsm' class
  if (Kind == MCK_ACRegsDSPAsm) {
    if (Operand.isACRegsDSPAsm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'AFGR64Asm' class
  if (Kind == MCK_AFGR64Asm) {
    if (Operand.isAFGR64Asm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'CCRAsm' class
  if (Kind == MCK_CCRAsm) {
    if (Operand.isCCRAsm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FCCRegsAsm' class
  if (Kind == MCK_FCCRegsAsm) {
    if (Operand.isFCCRegsAsm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FGR32Asm' class
  if (Kind == MCK_FGR32Asm) {
    if (Operand.isFGR32Asm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FGR64Asm' class
  if (Kind == MCK_FGR64Asm) {
    if (Operand.isFGR64Asm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GPR32Asm' class
  if (Kind == MCK_GPR32Asm) {
    if (Operand.isGPR32Asm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GPR64Asm' class
  if (Kind == MCK_GPR64Asm) {
    if (Operand.isGPR64Asm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'HW64RegsAsm' class
  if (Kind == MCK_HW64RegsAsm) {
    if (Operand.isHW64RegsAsm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'HWRegsAsm' class
  if (Kind == MCK_HWRegsAsm) {
    if (Operand.isHWRegsAsm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm' class
  if (Kind == MCK_Imm) {
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Mem' class
  if (Kind == MCK_Mem) {
    if (Operand.isMem())
      return MCTargetAsmParser::Match_Success;
  }

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case Mips::ZERO: OpKind = MCK_ZERO; break;
    case Mips::AT: OpKind = MCK_DSPRegs; break;
    case Mips::V0: OpKind = MCK_CPU16Regs; break;
    case Mips::V1: OpKind = MCK_CPU16Regs; break;
    case Mips::A0: OpKind = MCK_CPU16Regs; break;
    case Mips::A1: OpKind = MCK_CPU16Regs; break;
    case Mips::A2: OpKind = MCK_CPU16Regs; break;
    case Mips::A3: OpKind = MCK_CPU16Regs; break;
    case Mips::T0: OpKind = MCK_DSPRegs; break;
    case Mips::T1: OpKind = MCK_DSPRegs; break;
    case Mips::T2: OpKind = MCK_DSPRegs; break;
    case Mips::T3: OpKind = MCK_DSPRegs; break;
    case Mips::T4: OpKind = MCK_DSPRegs; break;
    case Mips::T5: OpKind = MCK_DSPRegs; break;
    case Mips::T6: OpKind = MCK_DSPRegs; break;
    case Mips::T7: OpKind = MCK_DSPRegs; break;
    case Mips::S0: OpKind = MCK_CPU16Regs; break;
    case Mips::S1: OpKind = MCK_CPU16Regs; break;
    case Mips::S2: OpKind = MCK_DSPRegs; break;
    case Mips::S3: OpKind = MCK_DSPRegs; break;
    case Mips::S4: OpKind = MCK_DSPRegs; break;
    case Mips::S5: OpKind = MCK_DSPRegs; break;
    case Mips::S6: OpKind = MCK_DSPRegs; break;
    case Mips::S7: OpKind = MCK_DSPRegs; break;
    case Mips::T8: OpKind = MCK_DSPRegs; break;
    case Mips::T9: OpKind = MCK_DSPRegs; break;
    case Mips::K0: OpKind = MCK_DSPRegs; break;
    case Mips::K1: OpKind = MCK_DSPRegs; break;
    case Mips::GP: OpKind = MCK_DSPRegs; break;
    case Mips::SP: OpKind = MCK_CPUSPReg; break;
    case Mips::FP: OpKind = MCK_DSPRegs; break;
    case Mips::RA: OpKind = MCK_CPURAReg; break;
    case Mips::ZERO_64: OpKind = MCK_GPR64; break;
    case Mips::AT_64: OpKind = MCK_GPR64; break;
    case Mips::V0_64: OpKind = MCK_Reg8; break;
    case Mips::V1_64: OpKind = MCK_Reg8; break;
    case Mips::A0_64: OpKind = MCK_Reg8; break;
    case Mips::A1_64: OpKind = MCK_Reg8; break;
    case Mips::A2_64: OpKind = MCK_Reg8; break;
    case Mips::A3_64: OpKind = MCK_Reg8; break;
    case Mips::T0_64: OpKind = MCK_GPR64; break;
    case Mips::T1_64: OpKind = MCK_GPR64; break;
    case Mips::T2_64: OpKind = MCK_GPR64; break;
    case Mips::T3_64: OpKind = MCK_GPR64; break;
    case Mips::T4_64: OpKind = MCK_GPR64; break;
    case Mips::T5_64: OpKind = MCK_GPR64; break;
    case Mips::T6_64: OpKind = MCK_GPR64; break;
    case Mips::T7_64: OpKind = MCK_GPR64; break;
    case Mips::S0_64: OpKind = MCK_Reg8; break;
    case Mips::S1_64: OpKind = MCK_Reg8; break;
    case Mips::S2_64: OpKind = MCK_GPR64; break;
    case Mips::S3_64: OpKind = MCK_GPR64; break;
    case Mips::S4_64: OpKind = MCK_GPR64; break;
    case Mips::S5_64: OpKind = MCK_GPR64; break;
    case Mips::S6_64: OpKind = MCK_GPR64; break;
    case Mips::S7_64: OpKind = MCK_GPR64; break;
    case Mips::T8_64: OpKind = MCK_GPR64; break;
    case Mips::T9_64: OpKind = MCK_GPR64; break;
    case Mips::K0_64: OpKind = MCK_GPR64; break;
    case Mips::K1_64: OpKind = MCK_GPR64; break;
    case Mips::GP_64: OpKind = MCK_GPR64; break;
    case Mips::SP_64: OpKind = MCK_Reg10; break;
    case Mips::FP_64: OpKind = MCK_GPR64; break;
    case Mips::RA_64: OpKind = MCK_Reg11; break;
    case Mips::F0: OpKind = MCK_FGR32; break;
    case Mips::F1: OpKind = MCK_FGR32; break;
    case Mips::F2: OpKind = MCK_FGR32; break;
    case Mips::F3: OpKind = MCK_FGR32; break;
    case Mips::F4: OpKind = MCK_FGR32; break;
    case Mips::F5: OpKind = MCK_FGR32; break;
    case Mips::F6: OpKind = MCK_FGR32; break;
    case Mips::F7: OpKind = MCK_FGR32; break;
    case Mips::F8: OpKind = MCK_FGR32; break;
    case Mips::F9: OpKind = MCK_FGR32; break;
    case Mips::F10: OpKind = MCK_FGR32; break;
    case Mips::F11: OpKind = MCK_FGR32; break;
    case Mips::F12: OpKind = MCK_FGR32; break;
    case Mips::F13: OpKind = MCK_FGR32; break;
    case Mips::F14: OpKind = MCK_FGR32; break;
    case Mips::F15: OpKind = MCK_FGR32; break;
    case Mips::F16: OpKind = MCK_FGR32; break;
    case Mips::F17: OpKind = MCK_FGR32; break;
    case Mips::F18: OpKind = MCK_FGR32; break;
    case Mips::F19: OpKind = MCK_FGR32; break;
    case Mips::F20: OpKind = MCK_FGR32; break;
    case Mips::F21: OpKind = MCK_FGR32; break;
    case Mips::F22: OpKind = MCK_FGR32; break;
    case Mips::F23: OpKind = MCK_FGR32; break;
    case Mips::F24: OpKind = MCK_FGR32; break;
    case Mips::F25: OpKind = MCK_FGR32; break;
    case Mips::F26: OpKind = MCK_FGR32; break;
    case Mips::F27: OpKind = MCK_FGR32; break;
    case Mips::F28: OpKind = MCK_FGR32; break;
    case Mips::F29: OpKind = MCK_FGR32; break;
    case Mips::F30: OpKind = MCK_FGR32; break;
    case Mips::F31: OpKind = MCK_FGR32; break;
    case Mips::D0: OpKind = MCK_AFGR64; break;
    case Mips::D1: OpKind = MCK_AFGR64; break;
    case Mips::D2: OpKind = MCK_AFGR64; break;
    case Mips::D3: OpKind = MCK_AFGR64; break;
    case Mips::D4: OpKind = MCK_AFGR64; break;
    case Mips::D5: OpKind = MCK_AFGR64; break;
    case Mips::D6: OpKind = MCK_AFGR64; break;
    case Mips::D7: OpKind = MCK_AFGR64; break;
    case Mips::D8: OpKind = MCK_AFGR64; break;
    case Mips::D9: OpKind = MCK_AFGR64; break;
    case Mips::D10: OpKind = MCK_AFGR64; break;
    case Mips::D11: OpKind = MCK_AFGR64; break;
    case Mips::D12: OpKind = MCK_AFGR64; break;
    case Mips::D13: OpKind = MCK_AFGR64; break;
    case Mips::D14: OpKind = MCK_AFGR64; break;
    case Mips::D15: OpKind = MCK_AFGR64; break;
    case Mips::D0_64: OpKind = MCK_FGR64; break;
    case Mips::D1_64: OpKind = MCK_FGR64; break;
    case Mips::D2_64: OpKind = MCK_FGR64; break;
    case Mips::D3_64: OpKind = MCK_FGR64; break;
    case Mips::D4_64: OpKind = MCK_FGR64; break;
    case Mips::D5_64: OpKind = MCK_FGR64; break;
    case Mips::D6_64: OpKind = MCK_FGR64; break;
    case Mips::D7_64: OpKind = MCK_FGR64; break;
    case Mips::D8_64: OpKind = MCK_FGR64; break;
    case Mips::D9_64: OpKind = MCK_FGR64; break;
    case Mips::D10_64: OpKind = MCK_FGR64; break;
    case Mips::D11_64: OpKind = MCK_FGR64; break;
    case Mips::D12_64: OpKind = MCK_FGR64; break;
    case Mips::D13_64: OpKind = MCK_FGR64; break;
    case Mips::D14_64: OpKind = MCK_FGR64; break;
    case Mips::D15_64: OpKind = MCK_FGR64; break;
    case Mips::D16_64: OpKind = MCK_FGR64; break;
    case Mips::D17_64: OpKind = MCK_FGR64; break;
    case Mips::D18_64: OpKind = MCK_FGR64; break;
    case Mips::D19_64: OpKind = MCK_FGR64; break;
    case Mips::D20_64: OpKind = MCK_FGR64; break;
    case Mips::D21_64: OpKind = MCK_FGR64; break;
    case Mips::D22_64: OpKind = MCK_FGR64; break;
    case Mips::D23_64: OpKind = MCK_FGR64; break;
    case Mips::D24_64: OpKind = MCK_FGR64; break;
    case Mips::D25_64: OpKind = MCK_FGR64; break;
    case Mips::D26_64: OpKind = MCK_FGR64; break;
    case Mips::D27_64: OpKind = MCK_FGR64; break;
    case Mips::D28_64: OpKind = MCK_FGR64; break;
    case Mips::D29_64: OpKind = MCK_FGR64; break;
    case Mips::D30_64: OpKind = MCK_FGR64; break;
    case Mips::D31_64: OpKind = MCK_FGR64; break;
    case Mips::HI: OpKind = MCK_HIRegs; break;
    case Mips::HI1: OpKind = MCK_HIRegsDSP; break;
    case Mips::HI2: OpKind = MCK_HIRegsDSP; break;
    case Mips::HI3: OpKind = MCK_HIRegsDSP; break;
    case Mips::LO: OpKind = MCK_LORegs; break;
    case Mips::LO1: OpKind = MCK_LORegsDSP; break;
    case Mips::LO2: OpKind = MCK_LORegsDSP; break;
    case Mips::LO3: OpKind = MCK_LORegsDSP; break;
    case Mips::HI64: OpKind = MCK_HIRegs64; break;
    case Mips::LO64: OpKind = MCK_LORegs64; break;
    case Mips::FCR0: OpKind = MCK_CCR; break;
    case Mips::FCR1: OpKind = MCK_CCR; break;
    case Mips::FCR2: OpKind = MCK_CCR; break;
    case Mips::FCR3: OpKind = MCK_CCR; break;
    case Mips::FCR4: OpKind = MCK_CCR; break;
    case Mips::FCR5: OpKind = MCK_CCR; break;
    case Mips::FCR6: OpKind = MCK_CCR; break;
    case Mips::FCR7: OpKind = MCK_CCR; break;
    case Mips::FCR8: OpKind = MCK_CCR; break;
    case Mips::FCR9: OpKind = MCK_CCR; break;
    case Mips::FCR10: OpKind = MCK_CCR; break;
    case Mips::FCR11: OpKind = MCK_CCR; break;
    case Mips::FCR12: OpKind = MCK_CCR; break;
    case Mips::FCR13: OpKind = MCK_CCR; break;
    case Mips::FCR14: OpKind = MCK_CCR; break;
    case Mips::FCR15: OpKind = MCK_CCR; break;
    case Mips::FCR16: OpKind = MCK_CCR; break;
    case Mips::FCR17: OpKind = MCK_CCR; break;
    case Mips::FCR18: OpKind = MCK_CCR; break;
    case Mips::FCR19: OpKind = MCK_CCR; break;
    case Mips::FCR20: OpKind = MCK_CCR; break;
    case Mips::FCR21: OpKind = MCK_CCR; break;
    case Mips::FCR22: OpKind = MCK_CCR; break;
    case Mips::FCR23: OpKind = MCK_CCR; break;
    case Mips::FCR24: OpKind = MCK_CCR; break;
    case Mips::FCR25: OpKind = MCK_CCR; break;
    case Mips::FCR26: OpKind = MCK_CCR; break;
    case Mips::FCR27: OpKind = MCK_CCR; break;
    case Mips::FCR28: OpKind = MCK_CCR; break;
    case Mips::FCR29: OpKind = MCK_CCR; break;
    case Mips::FCR30: OpKind = MCK_CCR; break;
    case Mips::FCR31: OpKind = MCK_CCR; break;
    case Mips::FCC0: OpKind = MCK_FCC; break;
    case Mips::FCC1: OpKind = MCK_FCC; break;
    case Mips::FCC2: OpKind = MCK_FCC; break;
    case Mips::FCC3: OpKind = MCK_FCC; break;
    case Mips::FCC4: OpKind = MCK_FCC; break;
    case Mips::FCC5: OpKind = MCK_FCC; break;
    case Mips::FCC6: OpKind = MCK_FCC; break;
    case Mips::FCC7: OpKind = MCK_FCC; break;
    case Mips::PC: OpKind = MCK_PC; break;
    case Mips::HWR29: OpKind = MCK_HWRegs; break;
    case Mips::HWR29_64: OpKind = MCK_HWRegs64; break;
    case Mips::AC0: OpKind = MCK_ACRegs; break;
    case Mips::AC1: OpKind = MCK_ACRegsDSP; break;
    case Mips::AC2: OpKind = MCK_ACRegsDSP; break;
    case Mips::AC3: OpKind = MCK_ACRegsDSP; break;
    case Mips::AC0_64: OpKind = MCK_ACRegs128; break;
    case Mips::DSPCCond: OpKind = MCK_DSPCC; break;
    }
    return isSubclass(OpKind, Kind) ? MCTargetAsmParser::Match_Success :
                                      MCTargetAsmParser::Match_InvalidOperand;
  }

  return MCTargetAsmParser::Match_InvalidOperand;
}

unsigned MipsAsmParser::
ComputeAvailableFeatures(uint64_t FB) const {
  unsigned Features = 0;
  if (((FB & Mips::FeatureSEInReg) != 0))
    Features |= Feature_HasSEInReg;
  if (((FB & Mips::FeatureBitCount) != 0))
    Features |= Feature_HasBitCount;
  if (((FB & Mips::FeatureSwap) != 0))
    Features |= Feature_HasSwap;
  if (((FB & Mips::FeatureCondMov) != 0))
    Features |= Feature_HasCondMov;
  if (((FB & Mips::FeatureFPIdx) != 0))
    Features |= Feature_HasFPIdx;
  if (((FB & Mips::FeatureMips32) != 0))
    Features |= Feature_HasMips32;
  if (((FB & Mips::FeatureMips32r2) != 0))
    Features |= Feature_HasMips32r2;
  if (((FB & Mips::FeatureMips64) != 0))
    Features |= Feature_HasMips64;
  if (((FB & Mips::FeatureMips64) == 0))
    Features |= Feature_NotMips64;
  if (((FB & Mips::FeatureMips64r2) != 0))
    Features |= Feature_HasMips64r2;
  if (((FB & Mips::FeatureN64) != 0))
    Features |= Feature_IsN64;
  if (((FB & Mips::FeatureN64) == 0))
    Features |= Feature_NotN64;
  if (((FB & Mips::FeatureMips16) != 0))
    Features |= Feature_InMips16Mode;
  if (((FB & Mips::FeatureMips32) != 0))
    Features |= Feature_RelocStatic;
  if (((FB & Mips::FeatureMips32) != 0))
    Features |= Feature_RelocPIC;
  if (((FB & Mips::FeatureMips32) != 0))
    Features |= Feature_NoNaNsFPMath;
  if (((FB & Mips::FeatureMips16) == 0))
    Features |= Feature_HasStdEnc;
  if (((FB & Mips::FeatureFP64Bit) != 0))
    Features |= Feature_IsFP64bit;
  if (((FB & Mips::FeatureFP64Bit) == 0))
    Features |= Feature_NotFP64bit;
  if (((FB & Mips::FeatureSingleFloat) != 0))
    Features |= Feature_IsSingleFloat;
  if (((FB & Mips::FeatureSingleFloat) == 0))
    Features |= Feature_IsNotSingleFloat;
  if (((FB & Mips::FeatureDSP) != 0))
    Features |= Feature_HasDSP;
  if (((FB & Mips::FeatureDSPR2) != 0))
    Features |= Feature_HasDSPR2;
  return Features;
}

static const char *const MnemonicTable =
    "\005abs.d\005abs.s\tabsq_s.ph\tabsq_s.qb\010absq_s.w\003add\005add.d\005"
    "add.s\004addi\005addiu\007addq.ph\taddq_s.ph\010addq_s.w\010addqh.ph\007"
    "addqh.w\naddqh_r.ph\taddqh_r.w\005addsc\004addu\007addu.ph\007addu.qb\t"
    "addu_s.ph\taddu_s.qb\010adduh.qb\nadduh_r.qb\005addwc\003and\004andi\006"
    "append\001b\003bal\006balign\004bc1f\004bc1t\003beq\004beqz\004bgez\006"
    "bgezal\004bgtz\006bitrev\004blez\004bltz\006bltzal\003bne\004bnez\010bp"
    "osge32\005break\005bteqz\005btnez\006c.eq.d\006c.eq.s\005c.f.d\005c.f.s"
    "\006c.le.d\006c.le.s\006c.lt.d\006c.lt.s\007c.nge.d\007c.nge.s\007c.ngl"
    ".d\007c.ngl.s\010c.ngle.d\010c.ngle.s\007c.ngt.d\007c.ngt.s\007c.ole.d\007"
    "c.ole.s\007c.olt.d\007c.olt.s\007c.seq.d\007c.seq.s\006c.sf.d\006c.sf.s"
    "\007c.ueq.d\007c.ueq.s\007c.ule.d\007c.ule.s\007c.ult.d\007c.ult.s\006c"
    ".un.d\006c.un.s\010ceil.l.d\010ceil.l.s\010ceil.w.d\010ceil.w.s\004cfc1"
    "\003clo\003clz\003cmp\tcmp.eq.ph\tcmp.le.ph\tcmp.lt.ph\014cmpgdu.eq.qb\014"
    "cmpgdu.le.qb\014cmpgdu.lt.qb\013cmpgu.eq.qb\013cmpgu.le.qb\013cmpgu.lt."
    "qb\004cmpi\ncmpu.eq.qb\ncmpu.le.qb\ncmpu.lt.qb\004ctc1\007cvt.d.l\007cv"
    "t.d.s\007cvt.d.w\007cvt.l.d\007cvt.l.s\007cvt.s.d\007cvt.s.l\007cvt.s.w"
    "\007cvt.w.d\007cvt.w.s\004dadd\005daddi\006daddiu\005daddu\004dclo\004d"
    "clz\004ddiv\005ddivu\005deret\004dext\005dextm\005dextu\004dins\005dins"
    "m\005dinsu\003div\005div.d\005div.s\004divu\005dmfc0\005dmfc1\005dmfc2\005"
    "dmtc0\005dmtc1\005dmtc2\005dmult\006dmultu\010dpa.w.ph\013dpaq_s.w.ph\013"
    "dpaq_sa.l.w\014dpaqx_s.w.ph\015dpaqx_sa.w.ph\ndpau.h.qbl\ndpau.h.qbr\td"
    "pax.w.ph\010dps.w.ph\013dpsq_s.w.ph\013dpsq_sa.l.w\014dpsqx_s.w.ph\015d"
    "psqx_sa.w.ph\ndpsu.h.qbl\ndpsu.h.qbr\tdpsx.w.ph\005drotr\006drotrv\004d"
    "sbh\004dshd\004dsll\006dsll32\005dsllv\004dsra\006dsra32\005dsrav\004ds"
    "rl\006dsrl32\005dsrlv\005dsubu\004eret\003ext\004extp\006extpdp\007extp"
    "dpv\005extpv\006extr.w\010extr_r.w\textr_rs.w\010extr_s.h\007extrv.w\te"
    "xtrv_r.w\nextrv_rs.w\textrv_s.h\tfloor.l.d\tfloor.l.s\tfloor.w.d\tfloor"
    ".w.s\003ins\004insv\001j\003jal\004jalr\005jalrc\002jr\003jrc\002la\002"
    "lb\003lbu\004lbux\002ld\004ldc1\003ldl\003ldr\005ldxc1\002lh\003lhu\003"
    "lhx\002li\002ll\003lld\013load_ac_dsp\016load_ccond_dsp\003lui\005luxc1"
    "\002lw\004lwc1\003lwl\003lwr\003lwu\003lwx\005lwxc1\004madd\006madd.d\006"
    "madd.s\005maddu\013maq_s.w.phl\013maq_s.w.phr\014maq_sa.w.phl\014maq_sa"
    ".w.phr\004mfc0\004mfc1\004mfc2\004mfhi\004mflo\006modsub\005mov.d\005mo"
    "v.s\004move\004movf\006movf.d\006movf.s\004movn\006movn.d\006movn.s\004"
    "movt\006movt.d\006movt.s\004movz\006movz.d\006movz.s\004msub\006msub.d\006"
    "msub.s\005msubu\004mtc0\004mtc1\004mtc2\004mthi\006mthlip\004mtlo\003mu"
    "l\005mul.d\006mul.ph\005mul.s\010mul_s.ph\015muleq_s.w.phl\015muleq_s.w"
    ".phr\016muleu_s.ph.qbl\016muleu_s.ph.qbr\nmulq_rs.ph\tmulq_rs.w\tmulq_s"
    ".ph\010mulq_s.w\nmulsa.w.ph\015mulsaq_s.w.ph\004mult\005multu\003neg\005"
    "neg.d\005neg.s\004negu\007nmadd.d\007nmadd.s\007nmsub.d\007nmsub.s\003n"
    "op\003nor\003not\002or\003ori\tpackrl.ph\007pick.ph\007pick.qb\014prece"
    "q.w.phl\014preceq.w.phr\016precequ.ph.qbl\017precequ.ph.qbla\016precequ"
    ".ph.qbr\017precequ.ph.qbra\015preceu.ph.qbl\016preceu.ph.qbla\015preceu"
    ".ph.qbr\016preceu.ph.qbra\013precr.qb.ph\016precr_sra.ph.w\020precr_sra"
    "_r.ph.w\013precrq.ph.w\014precrq.qb.ph\016precrq_rs.ph.w\017precrqu_s.q"
    "b.ph\007prepend\nraddu.w.qb\005rddsp\005rdhwr\007repl.ph\007repl.qb\010"
    "replv.ph\010replv.qb\004rotr\005rotrv\tround.l.d\tround.l.s\tround.w.d\t"
    "round.w.s\002sb\002sc\003scd\002sd\004sdc1\003sdl\003sdr\005sdxc1\003se"
    "b\003seh\002sh\005shilo\006shilov\007shll.ph\007shll.qb\tshll_s.ph\010s"
    "hll_s.w\010shllv.ph\010shllv.qb\nshllv_s.ph\tshllv_s.w\007shra.ph\007sh"
    "ra.qb\tshra_r.ph\tshra_r.qb\010shra_r.w\010shrav.ph\010shrav.qb\nshrav_"
    "r.ph\nshrav_r.qb\tshrav_r.w\007shrl.ph\007shrl.qb\010shrlv.ph\010shrlv."
    "qb\003sll\004sllv\003slt\004slti\005sltiu\004sltu\006sqrt.d\006sqrt.s\003"
    "sra\004srav\003srl\004srlv\014store_ac_dsp\017store_ccond_dsp\003sub\005"
    "sub.d\005sub.s\007subq.ph\tsubq_s.ph\010subq_s.w\010subqh.ph\007subqh.w"
    "\nsubqh_r.ph\tsubqh_r.w\004subu\007subu.ph\007subu.qb\tsubu_s.ph\tsubu_"
    "s.qb\010subuh.qb\nsubuh_r.qb\005suxc1\002sw\004swc1\003swl\003swr\005sw"
    "xc1\004sync\007syscall\003teq\ttrunc.l.d\ttrunc.l.s\ttrunc.w.d\ttrunc.w"
    ".s\005wrdsp\004wsbh\003xor\004xori";

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint16_t ConvertFn;
    uint32_t RequiredFeatures;
    uint8_t Classes[6];
    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcode {
    bool operator()(const MatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic() < RHS;
    }
    bool operator()(StringRef LHS, const MatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const MatchEntry &LHS, const MatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace.

static const MatchEntry MatchTable0[] = {
  { 0 /* abs.d */, Mips::FABS_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NoNaNsFPMath|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 0 /* abs.d */, Mips::FABS_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_NoNaNsFPMath|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 6 /* abs.s */, Mips::FABS_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_NoNaNsFPMath|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 12 /* absq_s.ph */, Mips::ABSQ_S_PH, Convert__Reg1_0__Reg1_1, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs }, },
  { 22 /* absq_s.qb */, Mips::ABSQ_S_QB, Convert__Reg1_0__Reg1_1, Feature_HasDSPR2, { MCK_DSPRegs, MCK_DSPRegs }, },
  { 32 /* absq_s.w */, Mips::ABSQ_S_W, Convert__Reg1_0__Reg1_1, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs }, },
  { 41 /* add */, Mips::ADD, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 41 /* add */, Mips::ADDi, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, 0, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 45 /* add.d */, Mips::FADD_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1__AFGR64Asm1_2, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 45 /* add.d */, Mips::FADD_D64, Convert__FGR64Asm1_0__FGR64Asm1_1__FGR64Asm1_2, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 51 /* add.s */, Mips::FADD_S, Convert__FGR32Asm1_0__FGR32Asm1_1__FGR32Asm1_2, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 57 /* addi */, Mips::ADDi, Convert__GPR32Asm1_0__GPR32Asm1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Imm }, },
  { 57 /* addi */, Mips::ADDi, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 62 /* addiu */, Mips::AddiuRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 62 /* addiu */, Mips::AddiuSpImmX16, Convert__Imm1_1, Feature_InMips16Mode, { MCK_CPUSPReg, MCK_Imm }, },
  { 62 /* addiu */, Mips::ADDiu, Convert__GPR32Asm1_0__GPR32Asm1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Imm }, },
  { 62 /* addiu */, Mips::AddiuRxRyOffMemX16, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16RegsPlusSP, MCK_Imm }, },
  { 62 /* addiu */, Mips::AddiuRxPcImmX16, Convert__Reg1_0__Imm1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_PC, MCK_Imm }, },
  { 62 /* addiu */, Mips::ADDiu, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 62 /* addiu */, Mips::AddiuRxRxImm16, Convert__Reg1_0__Tie0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 62 /* addiu */, Mips::AddiuSpImm16, Convert__Imm1_1, Feature_InMips16Mode, { MCK_CPUSPReg, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 68 /* addq.ph */, Mips::ADDQ_PH, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 76 /* addq_s.ph */, Mips::ADDQ_S_PH, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 86 /* addq_s.w */, Mips::ADDQ_S_W, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 95 /* addqh.ph */, Mips::ADDQH_PH, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSPR2, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 104 /* addqh.w */, Mips::ADDQH_W, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSPR2, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 112 /* addqh_r.ph */, Mips::ADDQH_R_PH, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSPR2, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 123 /* addqh_r.w */, Mips::ADDQH_R_W, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSPR2, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 133 /* addsc */, Mips::ADDSC, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 139 /* addu */, Mips::AdduRxRyRz16, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 139 /* addu */, Mips::ADDu, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 139 /* addu */, Mips::ADDiu, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, 0, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 144 /* addu.ph */, Mips::ADDU_PH, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSPR2, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 152 /* addu.qb */, Mips::ADDU_QB, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 160 /* addu_s.ph */, Mips::ADDU_S_PH, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSPR2, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 170 /* addu_s.qb */, Mips::ADDU_S_QB, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 180 /* adduh.qb */, Mips::ADDUH_QB, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSPR2, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 189 /* adduh_r.qb */, Mips::ADDUH_R_QB, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSPR2, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 200 /* addwc */, Mips::ADDWC, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 206 /* and */, Mips::AndRxRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 206 /* and */, Mips::AND, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 206 /* and */, Mips::ANDi, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, 0, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 210 /* andi */, Mips::ANDi, Convert__GPR32Asm1_0__GPR32Asm1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Imm }, },
  { 210 /* andi */, Mips::ANDi, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 215 /* append */, Mips::APPEND, Convert__Reg1_0__Reg1_1__Imm1_2__Tie0, Feature_HasDSPR2, { MCK_DSPRegs, MCK_DSPRegs, MCK_Imm }, },
  { 222 /* b */, Mips::B, Convert__Imm1_0, Feature_RelocPIC|Feature_HasStdEnc, { MCK_Imm }, },
  { 222 /* b */, Mips::BimmX16, Convert__Imm1_0, Feature_InMips16Mode, { MCK_Imm }, },
  { 224 /* bal */, Mips::BGEZAL, Convert__regZERO__Imm1_0, 0, { MCK_Imm }, },
  { 228 /* balign */, Mips::BALIGN, Convert__Reg1_0__Reg1_1__Imm1_2__Tie0, Feature_HasDSPR2, { MCK_DSPRegs, MCK_DSPRegs, MCK_Imm }, },
  { 235 /* bc1f */, Mips::BC1F, Convert__regFCC0__Imm1_0, 0, { MCK_Imm }, },
  { 235 /* bc1f */, Mips::BC1F, Convert__FCCRegsAsm1_0__Imm1_1, Feature_HasStdEnc, { MCK_FCCRegsAsm, MCK_Imm }, },
  { 240 /* bc1t */, Mips::BC1T, Convert__regFCC0__Imm1_0, 0, { MCK_Imm }, },
  { 240 /* bc1t */, Mips::BC1T, Convert__FCCRegsAsm1_0__Imm1_1, Feature_HasStdEnc, { MCK_FCCRegsAsm, MCK_Imm }, },
  { 245 /* beq */, Mips::BEQ, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 249 /* beqz */, Mips::BeqzRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 249 /* beqz */, Mips::BEQ, Convert__GPR32Asm1_0__regZERO__Imm1_1, 0, { MCK_GPR32Asm, MCK_Imm }, },
  { 249 /* beqz */, Mips::BeqzRxImm16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 254 /* bgez */, Mips::BGEZ, Convert__GPR32Asm1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Imm }, },
  { 259 /* bgezal */, Mips::BGEZAL, Convert__GPR32Asm1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Imm }, },
  { 266 /* bgtz */, Mips::BGTZ, Convert__GPR32Asm1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Imm }, },
  { 271 /* bitrev */, Mips::BITREV, Convert__Reg1_0__Reg1_1, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs }, },
  { 278 /* blez */, Mips::BLEZ, Convert__GPR32Asm1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Imm }, },
  { 283 /* bltz */, Mips::BLTZ, Convert__GPR32Asm1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Imm }, },
  { 288 /* bltzal */, Mips::BLTZAL, Convert__GPR32Asm1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Imm }, },
  { 295 /* bne */, Mips::BNE, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 299 /* bnez */, Mips::BnezRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 299 /* bnez */, Mips::BNE, Convert__GPR32Asm1_0__regZERO__Imm1_1, 0, { MCK_GPR32Asm, MCK_Imm }, },
  { 299 /* bnez */, Mips::BnezRxImm16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 304 /* bposge32 */, Mips::BPOSGE32, Convert__Imm1_0, Feature_HasDSP, { MCK_Imm }, },
  { 313 /* break */, Mips::BREAK, Convert__imm_0__imm_0, 0, {  }, },
  { 313 /* break */, Mips::Break16, Convert_NoOperands, Feature_InMips16Mode, { MCK_0 }, },
  { 313 /* break */, Mips::BREAK, Convert__Imm1_0__imm_0, 0, { MCK_Imm }, },
  { 313 /* break */, Mips::BREAK, Convert__Imm1_0__Imm1_1, Feature_HasStdEnc, { MCK_Imm, MCK_Imm }, },
  { 319 /* bteqz */, Mips::BteqzX16, Convert__Imm1_0, Feature_InMips16Mode, { MCK_Imm }, },
  { 325 /* btnez */, Mips::BtnezX16, Convert__Imm1_0, Feature_InMips16Mode, { MCK_Imm }, },
  { 331 /* c.eq.d */, Mips::C_EQ_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 331 /* c.eq.d */, Mips::C_EQ_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 338 /* c.eq.s */, Mips::C_EQ_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 345 /* c.f.d */, Mips::C_F_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 345 /* c.f.d */, Mips::C_F_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 351 /* c.f.s */, Mips::C_F_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 357 /* c.le.d */, Mips::C_LE_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 357 /* c.le.d */, Mips::C_LE_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 364 /* c.le.s */, Mips::C_LE_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 371 /* c.lt.d */, Mips::C_LT_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 371 /* c.lt.d */, Mips::C_LT_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 378 /* c.lt.s */, Mips::C_LT_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 385 /* c.nge.d */, Mips::C_NGE_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 385 /* c.nge.d */, Mips::C_NGE_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 393 /* c.nge.s */, Mips::C_NGE_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 401 /* c.ngl.d */, Mips::C_NGL_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 401 /* c.ngl.d */, Mips::C_NGL_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 409 /* c.ngl.s */, Mips::C_NGL_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 417 /* c.ngle.d */, Mips::C_NGLE_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 417 /* c.ngle.d */, Mips::C_NGLE_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 426 /* c.ngle.s */, Mips::C_NGLE_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 435 /* c.ngt.d */, Mips::C_NGT_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 435 /* c.ngt.d */, Mips::C_NGT_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 443 /* c.ngt.s */, Mips::C_NGT_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 451 /* c.ole.d */, Mips::C_OLE_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 451 /* c.ole.d */, Mips::C_OLE_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 459 /* c.ole.s */, Mips::C_OLE_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 467 /* c.olt.d */, Mips::C_OLT_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 467 /* c.olt.d */, Mips::C_OLT_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 475 /* c.olt.s */, Mips::C_OLT_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 483 /* c.seq.d */, Mips::C_SEQ_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 483 /* c.seq.d */, Mips::C_SEQ_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 491 /* c.seq.s */, Mips::C_SEQ_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 499 /* c.sf.d */, Mips::C_SF_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 499 /* c.sf.d */, Mips::C_SF_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 506 /* c.sf.s */, Mips::C_SF_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 513 /* c.ueq.d */, Mips::C_UEQ_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 513 /* c.ueq.d */, Mips::C_UEQ_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 521 /* c.ueq.s */, Mips::C_UEQ_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 529 /* c.ule.d */, Mips::C_ULE_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 529 /* c.ule.d */, Mips::C_ULE_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 537 /* c.ule.s */, Mips::C_ULE_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 545 /* c.ult.d */, Mips::C_ULT_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 545 /* c.ult.d */, Mips::C_ULT_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 553 /* c.ult.s */, Mips::C_ULT_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 561 /* c.un.d */, Mips::C_UN_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 561 /* c.un.d */, Mips::C_UN_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 568 /* c.un.s */, Mips::C_UN_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 575 /* ceil.l.d */, Mips::CEIL_L_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 584 /* ceil.l.s */, Mips::CEIL_L_S, Convert__FGR64Asm1_0__FGR32Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR32Asm }, },
  { 593 /* ceil.w.d */, Mips::CEIL_W_D32, Convert__FGR32Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_AFGR64Asm }, },
  { 593 /* ceil.w.d */, Mips::CEIL_W_D64, Convert__FGR32Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR64Asm }, },
  { 602 /* ceil.w.s */, Mips::CEIL_W_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 611 /* cfc1 */, Mips::CFC1, Convert__GPR32Asm1_0__CCRAsm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_CCRAsm }, },
  { 616 /* clo */, Mips::CLO, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasBitCount|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 620 /* clz */, Mips::CLZ, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasBitCount|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 624 /* cmp */, Mips::CmpRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 628 /* cmp.eq.ph */, Mips::CMP_EQ_PH, Convert__Reg1_0__Reg1_1, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs }, },
  { 638 /* cmp.le.ph */, Mips::CMP_LE_PH, Convert__Reg1_0__Reg1_1, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs }, },
  { 648 /* cmp.lt.ph */, Mips::CMP_LT_PH, Convert__Reg1_0__Reg1_1, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs }, },
  { 658 /* cmpgdu.eq.qb */, Mips::CMPGDU_EQ_QB, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSPR2, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 671 /* cmpgdu.le.qb */, Mips::CMPGDU_LE_QB, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSPR2, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 684 /* cmpgdu.lt.qb */, Mips::CMPGDU_LT_QB, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSPR2, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 697 /* cmpgu.eq.qb */, Mips::CMPGU_EQ_QB, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 709 /* cmpgu.le.qb */, Mips::CMPGU_LE_QB, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 721 /* cmpgu.lt.qb */, Mips::CMPGU_LT_QB, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 733 /* cmpi */, Mips::CmpiRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 733 /* cmpi */, Mips::CmpiRxImm16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 738 /* cmpu.eq.qb */, Mips::CMPU_EQ_QB, Convert__Reg1_0__Reg1_1, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs }, },
  { 749 /* cmpu.le.qb */, Mips::CMPU_LE_QB, Convert__Reg1_0__Reg1_1, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs }, },
  { 760 /* cmpu.lt.qb */, Mips::CMPU_LT_QB, Convert__Reg1_0__Reg1_1, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs }, },
  { 771 /* ctc1 */, Mips::CTC1, Convert__CCRAsm1_1__GPR32Asm1_0, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_CCRAsm }, },
  { 776 /* cvt.d.l */, Mips::CVT_D64_L, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 784 /* cvt.d.s */, Mips::CVT_D32_S, Convert__AFGR64Asm1_0__FGR32Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_FGR32Asm }, },
  { 784 /* cvt.d.s */, Mips::CVT_D64_S, Convert__FGR64Asm1_0__FGR32Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR32Asm }, },
  { 792 /* cvt.d.w */, Mips::CVT_D32_W, Convert__AFGR64Asm1_0__FGR32Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_FGR32Asm }, },
  { 792 /* cvt.d.w */, Mips::CVT_D64_W, Convert__FGR64Asm1_0__FGR32Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR32Asm }, },
  { 800 /* cvt.l.d */, Mips::CVT_L_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 808 /* cvt.l.s */, Mips::CVT_L_S, Convert__FGR64Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR32Asm }, },
  { 816 /* cvt.s.d */, Mips::CVT_S_D32, Convert__FGR32Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_AFGR64Asm }, },
  { 816 /* cvt.s.d */, Mips::CVT_S_D64, Convert__FGR32Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR64Asm }, },
  { 824 /* cvt.s.l */, Mips::CVT_S_L, Convert__FGR32Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR64Asm }, },
  { 832 /* cvt.s.w */, Mips::CVT_S_W, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 840 /* cvt.w.d */, Mips::CVT_W_D32, Convert__FGR32Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_AFGR64Asm }, },
  { 840 /* cvt.w.d */, Mips::CVT_W_D64, Convert__FGR32Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR64Asm }, },
  { 848 /* cvt.w.s */, Mips::CVT_W_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 856 /* dadd */, Mips::DADD, Convert__GPR64Asm1_0__GPR64Asm1_1__GPR64Asm1_2, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_GPR64Asm }, },
  { 856 /* dadd */, Mips::DADDi, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2, 0, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm }, },
  { 861 /* daddi */, Mips::DADDi, Convert__GPR64Asm1_0__GPR64Asm1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_Imm }, },
  { 861 /* daddi */, Mips::DADDi, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm }, },
  { 867 /* daddiu */, Mips::DADDiu, Convert__GPR64Asm1_0__GPR64Asm1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_Imm }, },
  { 867 /* daddiu */, Mips::DADDiu, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm }, },
  { 874 /* daddu */, Mips::DADDu, Convert__GPR64Asm1_0__GPR64Asm1_1__GPR64Asm1_2, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_GPR64Asm }, },
  { 874 /* daddu */, Mips::DADDiu, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2, 0, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm }, },
  { 880 /* dclo */, Mips::DCLO, Convert__GPR64Asm1_0__GPR64Asm1_1, Feature_HasBitCount|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm }, },
  { 885 /* dclz */, Mips::DCLZ, Convert__GPR64Asm1_0__GPR64Asm1_1, Feature_HasBitCount|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm }, },
  { 890 /* ddiv */, Mips::DSDIV, Convert__GPR64Asm1_1__GPR64Asm1_2, Feature_HasStdEnc, { MCK_ZERO, MCK_GPR64Asm, MCK_GPR64Asm }, },
  { 895 /* ddivu */, Mips::DUDIV, Convert__GPR64Asm1_1__GPR64Asm1_2, Feature_HasStdEnc, { MCK_ZERO, MCK_GPR64Asm, MCK_GPR64Asm }, },
  { 901 /* deret */, Mips::DERET, Convert_NoOperands, Feature_HasStdEnc, {  }, },
  { 907 /* dext */, Mips::DEXT, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2__Imm1_3, Feature_HasMips32r2|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm, MCK_Imm }, },
  { 912 /* dextm */, Mips::DEXTM, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2__Imm1_3, Feature_HasMips32r2|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm, MCK_Imm }, },
  { 918 /* dextu */, Mips::DEXTU, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2__Imm1_3, Feature_HasMips32r2|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm, MCK_Imm }, },
  { 924 /* dins */, Mips::DINS, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2__Imm1_3__Tie0, Feature_HasMips32r2|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm, MCK_Imm }, },
  { 929 /* dinsm */, Mips::DINSM, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2__Imm1_3__Tie0, Feature_HasMips32r2|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm, MCK_Imm }, },
  { 935 /* dinsu */, Mips::DINSU, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2__Imm1_3__Tie0, Feature_HasMips32r2|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm, MCK_Imm }, },
  { 941 /* div */, Mips::DivRxRy16, Convert__Reg1_1__Reg1_2, Feature_InMips16Mode, { MCK_ZERO, MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 941 /* div */, Mips::SDIV, Convert__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_ZERO, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 945 /* div.d */, Mips::FDIV_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1__AFGR64Asm1_2, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 945 /* div.d */, Mips::FDIV_D64, Convert__FGR64Asm1_0__FGR64Asm1_1__FGR64Asm1_2, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 951 /* div.s */, Mips::FDIV_S, Convert__FGR32Asm1_0__FGR32Asm1_1__FGR32Asm1_2, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 957 /* divu */, Mips::DivuRxRy16, Convert__Reg1_1__Reg1_2, Feature_InMips16Mode, { MCK_ZERO, MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 957 /* divu */, Mips::UDIV, Convert__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_ZERO, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 962 /* dmfc0 */, Mips::DMFC0_3OP64, Convert__GPR64Asm1_0__GPR64Asm1_1__imm_0, 0, { MCK_GPR64Asm, MCK_GPR64Asm }, },
  { 962 /* dmfc0 */, Mips::DMFC0_3OP64, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm }, },
  { 968 /* dmfc1 */, Mips::DMFC1, Convert__GPR64Asm1_0__FGR64Asm1_1, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_FGR64Asm }, },
  { 974 /* dmfc2 */, Mips::DMFC2_3OP64, Convert__GPR64Asm1_0__GPR64Asm1_1__imm_0, 0, { MCK_GPR64Asm, MCK_GPR64Asm }, },
  { 974 /* dmfc2 */, Mips::DMFC2_3OP64, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm }, },
  { 980 /* dmtc0 */, Mips::DMTC0_3OP64, Convert__GPR64Asm1_1__imm_0__GPR64Asm1_0, 0, { MCK_GPR64Asm, MCK_GPR64Asm }, },
  { 980 /* dmtc0 */, Mips::DMTC0_3OP64, Convert__GPR64Asm1_1__Imm1_2__GPR64Asm1_0, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm }, },
  { 986 /* dmtc1 */, Mips::DMTC1, Convert__FGR64Asm1_1__GPR64Asm1_0, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_FGR64Asm }, },
  { 992 /* dmtc2 */, Mips::DMTC2_3OP64, Convert__GPR64Asm1_1__imm_0__GPR64Asm1_0, 0, { MCK_GPR64Asm, MCK_GPR64Asm }, },
  { 992 /* dmtc2 */, Mips::DMTC2_3OP64, Convert__GPR64Asm1_1__Imm1_2__GPR64Asm1_0, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm }, },
  { 998 /* dmult */, Mips::DMULT, Convert__GPR64Asm1_0__GPR64Asm1_1, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm }, },
  { 1004 /* dmultu */, Mips::DMULTu, Convert__GPR64Asm1_0__GPR64Asm1_1, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm }, },
  { 1011 /* dpa.w.ph */, Mips::DPA_W_PH, Convert__Reg1_0__Reg1_1__Reg1_2__Tie0, Feature_HasDSPR2, { MCK_ACRegsDSP, MCK_DSPRegs, MCK_DSPRegs }, },
  { 1020 /* dpaq_s.w.ph */, Mips::DPAQ_S_W_PH, Convert__Reg1_0__Reg1_1__Reg1_2__Tie0, Feature_HasDSP, { MCK_ACRegsDSP, MCK_DSPRegs, MCK_DSPRegs }, },
  { 1032 /* dpaq_sa.l.w */, Mips::DPAQ_SA_L_W, Convert__Reg1_0__Reg1_1__Reg1_2__Tie0, Feature_HasDSP, { MCK_ACRegsDSP, MCK_DSPRegs, MCK_DSPRegs }, },
  { 1044 /* dpaqx_s.w.ph */, Mips::DPAQX_S_W_PH, Convert__Reg1_0__Reg1_1__Reg1_2__Tie0, Feature_HasDSPR2, { MCK_ACRegsDSP, MCK_DSPRegs, MCK_DSPRegs }, },
  { 1057 /* dpaqx_sa.w.ph */, Mips::DPAQX_SA_W_PH, Convert__Reg1_0__Reg1_1__Reg1_2__Tie0, Feature_HasDSPR2, { MCK_ACRegsDSP, MCK_DSPRegs, MCK_DSPRegs }, },
  { 1071 /* dpau.h.qbl */, Mips::DPAU_H_QBL, Convert__Reg1_0__Reg1_1__Reg1_2__Tie0, Feature_HasDSP, { MCK_ACRegsDSP, MCK_DSPRegs, MCK_DSPRegs }, },
  { 1082 /* dpau.h.qbr */, Mips::DPAU_H_QBR, Convert__Reg1_0__Reg1_1__Reg1_2__Tie0, Feature_HasDSP, { MCK_ACRegsDSP, MCK_DSPRegs, MCK_DSPRegs }, },
  { 1093 /* dpax.w.ph */, Mips::DPAX_W_PH, Convert__Reg1_0__Reg1_1__Reg1_2__Tie0, Feature_HasDSPR2, { MCK_ACRegsDSP, MCK_DSPRegs, MCK_DSPRegs }, },
  { 1103 /* dps.w.ph */, Mips::DPS_W_PH, Convert__Reg1_0__Reg1_1__Reg1_2__Tie0, Feature_HasDSPR2, { MCK_ACRegsDSP, MCK_DSPRegs, MCK_DSPRegs }, },
  { 1112 /* dpsq_s.w.ph */, Mips::DPSQ_S_W_PH, Convert__Reg1_0__Reg1_1__Reg1_2__Tie0, Feature_HasDSP, { MCK_ACRegsDSP, MCK_DSPRegs, MCK_DSPRegs }, },
  { 1124 /* dpsq_sa.l.w */, Mips::DPSQ_SA_L_W, Convert__Reg1_0__Reg1_1__Reg1_2__Tie0, Feature_HasDSP, { MCK_ACRegsDSP, MCK_DSPRegs, MCK_DSPRegs }, },
  { 1136 /* dpsqx_s.w.ph */, Mips::DPSQX_S_W_PH, Convert__Reg1_0__Reg1_1__Reg1_2__Tie0, Feature_HasDSPR2, { MCK_ACRegsDSP, MCK_DSPRegs, MCK_DSPRegs }, },
  { 1149 /* dpsqx_sa.w.ph */, Mips::DPSQX_SA_W_PH, Convert__Reg1_0__Reg1_1__Reg1_2__Tie0, Feature_HasDSPR2, { MCK_ACRegsDSP, MCK_DSPRegs, MCK_DSPRegs }, },
  { 1163 /* dpsu.h.qbl */, Mips::DPSU_H_QBL, Convert__Reg1_0__Reg1_1__Reg1_2__Tie0, Feature_HasDSP, { MCK_ACRegsDSP, MCK_DSPRegs, MCK_DSPRegs }, },
  { 1174 /* dpsu.h.qbr */, Mips::DPSU_H_QBR, Convert__Reg1_0__Reg1_1__Reg1_2__Tie0, Feature_HasDSP, { MCK_ACRegsDSP, MCK_DSPRegs, MCK_DSPRegs }, },
  { 1185 /* dpsx.w.ph */, Mips::DPSX_W_PH, Convert__Reg1_0__Reg1_1__Reg1_2__Tie0, Feature_HasDSPR2, { MCK_ACRegsDSP, MCK_DSPRegs, MCK_DSPRegs }, },
  { 1195 /* drotr */, Mips::DROTR, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2, Feature_HasMips64r2|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm }, },
  { 1201 /* drotrv */, Mips::DROTRV, Convert__GPR64Asm1_0__GPR64Asm1_1__GPR32Asm1_2, Feature_HasMips64r2|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_GPR32Asm }, },
  { 1208 /* dsbh */, Mips::DSBH, Convert__GPR64Asm1_0__GPR64Asm1_1, Feature_HasSwap|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm }, },
  { 1213 /* dshd */, Mips::DSHD, Convert__GPR64Asm1_0__GPR64Asm1_1, Feature_HasSwap|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm }, },
  { 1218 /* dsll */, Mips::DSLL, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm }, },
  { 1223 /* dsll32 */, Mips::DSLL32, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm }, },
  { 1230 /* dsllv */, Mips::DSLLV, Convert__GPR64Asm1_0__GPR64Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_GPR32Asm }, },
  { 1236 /* dsra */, Mips::DSRA, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm }, },
  { 1241 /* dsra32 */, Mips::DSRA32, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm }, },
  { 1248 /* dsrav */, Mips::DSRAV, Convert__GPR64Asm1_0__GPR64Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_GPR32Asm }, },
  { 1254 /* dsrl */, Mips::DSRL, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm }, },
  { 1259 /* dsrl32 */, Mips::DSRL32, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm }, },
  { 1266 /* dsrlv */, Mips::DSRLV, Convert__GPR64Asm1_0__GPR64Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_GPR32Asm }, },
  { 1272 /* dsubu */, Mips::DSUBu, Convert__GPR64Asm1_0__GPR64Asm1_1__GPR64Asm1_2, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_GPR64Asm }, },
  { 1278 /* eret */, Mips::ERET, Convert_NoOperands, Feature_HasStdEnc, {  }, },
  { 1283 /* ext */, Mips::EXT, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2__Imm1_3, Feature_HasMips32r2|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm, MCK_Imm }, },
  { 1287 /* extp */, Mips::EXTP, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_ACRegsDSP, MCK_Imm }, },
  { 1292 /* extpdp */, Mips::EXTPDP, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_ACRegsDSP, MCK_Imm }, },
  { 1299 /* extpdpv */, Mips::EXTPDPV, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_ACRegsDSP, MCK_DSPRegs }, },
  { 1307 /* extpv */, Mips::EXTPV, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_ACRegsDSP, MCK_DSPRegs }, },
  { 1313 /* extr.w */, Mips::EXTR_W, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_ACRegsDSP, MCK_Imm }, },
  { 1320 /* extr_r.w */, Mips::EXTR_R_W, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_ACRegsDSP, MCK_Imm }, },
  { 1329 /* extr_rs.w */, Mips::EXTR_RS_W, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_ACRegsDSP, MCK_Imm }, },
  { 1339 /* extr_s.h */, Mips::EXTR_S_H, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_ACRegsDSP, MCK_Imm }, },
  { 1348 /* extrv.w */, Mips::EXTRV_W, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_ACRegsDSP, MCK_DSPRegs }, },
  { 1356 /* extrv_r.w */, Mips::EXTRV_R_W, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_ACRegsDSP, MCK_DSPRegs }, },
  { 1366 /* extrv_rs.w */, Mips::EXTRV_RS_W, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_ACRegsDSP, MCK_DSPRegs }, },
  { 1377 /* extrv_s.h */, Mips::EXTRV_S_H, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_ACRegsDSP, MCK_DSPRegs }, },
  { 1387 /* floor.l.d */, Mips::FLOOR_L_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 1397 /* floor.l.s */, Mips::FLOOR_L_S, Convert__FGR64Asm1_0__FGR32Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR32Asm }, },
  { 1407 /* floor.w.d */, Mips::FLOOR_W_D32, Convert__FGR32Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_AFGR64Asm }, },
  { 1407 /* floor.w.d */, Mips::FLOOR_W_D64, Convert__FGR32Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR64Asm }, },
  { 1417 /* floor.w.s */, Mips::FLOOR_W_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 1427 /* ins */, Mips::INS, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2__Imm1_3__Tie0, Feature_HasMips32r2|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm, MCK_Imm }, },
  { 1431 /* insv */, Mips::INSV, Convert__Reg1_0__Tie0__Reg1_1, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs }, },
  { 1436 /* j */, Mips::JR, Convert__GPR32Asm1_0, 0, { MCK_GPR32Asm }, },
  { 1436 /* j */, Mips::J, Convert__Imm1_0, Feature_RelocStatic|Feature_HasStdEnc, { MCK_Imm }, },
  { 1438 /* jal */, Mips::JALR, Convert__regRA__GPR32Asm1_0, 0, { MCK_GPR32Asm }, },
  { 1438 /* jal */, Mips::JAL, Convert__Imm1_0, Feature_HasStdEnc, { MCK_Imm }, },
  { 1438 /* jal */, Mips::JALR, Convert__GPR32Asm1_0__GPR32Asm1_1, 0, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1442 /* jalr */, Mips::JALR, Convert__regRA__GPR32Asm1_0, 0, { MCK_GPR32Asm }, },
  { 1442 /* jalr */, Mips::JALR, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1447 /* jalrc */, Mips::JumpLinkReg16, Convert__Reg1_0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 1453 /* jr */, Mips::JrRa16, Convert_NoOperands, Feature_InMips16Mode, { MCK_CPURAReg }, },
  { 1453 /* jr */, Mips::JR, Convert__GPR32Asm1_0, Feature_HasStdEnc, { MCK_GPR32Asm }, },
  { 1456 /* jrc */, Mips::JrcRx16, Convert__Reg1_0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 1456 /* jrc */, Mips::JrcRa16, Convert_NoOperands, Feature_InMips16Mode, { MCK_CPURAReg }, },
  { 1460 /* la */, Mips::LoadAddr32Imm, Convert__GPR32Asm1_0__Imm1_1, 0, { MCK_GPR32Asm, MCK_Imm }, },
  { 1460 /* la */, Mips::LoadAddr32Reg, Convert__GPR32Asm1_0__Mem2_1, 0, { MCK_GPR32Asm, MCK_Mem }, },
  { 1463 /* lb */, Mips::LB, Convert__GPR32Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Mem }, },
  { 1466 /* lbu */, Mips::LBu, Convert__GPR32Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Mem }, },
  { 1470 /* lbux */, Mips::LBUX, Convert__Reg1_0__Reg1_3__Reg1_1, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK__40_, MCK_DSPRegs, MCK__41_ }, },
  { 1475 /* ld */, Mips::LD, Convert__GPR64Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_Mem }, },
  { 1478 /* ldc1 */, Mips::LDC1, Convert__AFGR64Asm1_0__Mem2_1, Feature_NotN64|Feature_NotMips64|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_Mem }, },
  { 1478 /* ldc1 */, Mips::LDC164, Convert__FGR64Asm1_0__Mem2_1, Feature_NotN64|Feature_HasMips64|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_Mem }, },
  { 1483 /* ldl */, Mips::LDL, Convert__GPR64Asm1_0__Mem2_1__Tie0, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_Mem }, },
  { 1487 /* ldr */, Mips::LDR, Convert__GPR64Asm1_0__Mem2_1__Tie0, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_Mem }, },
  { 1491 /* ldxc1 */, Mips::LDXC1, Convert__AFGR64Asm1_0__GPR32Asm1_3__GPR32Asm1_1, Feature_HasMips32r2|Feature_NotMips64|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_GPR32Asm, MCK__40_, MCK_GPR32Asm, MCK__41_ }, },
  { 1491 /* ldxc1 */, Mips::LDXC164, Convert__FGR64Asm1_0__GPR32Asm1_3__GPR32Asm1_1, Feature_HasMips64|Feature_NotN64|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_GPR32Asm, MCK__40_, MCK_GPR32Asm, MCK__41_ }, },
  { 1497 /* lh */, Mips::LH, Convert__GPR32Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Mem }, },
  { 1500 /* lhu */, Mips::LHu, Convert__GPR32Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Mem }, },
  { 1504 /* lhx */, Mips::LHX, Convert__Reg1_0__Reg1_3__Reg1_1, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK__40_, MCK_DSPRegs, MCK__41_ }, },
  { 1508 /* li */, Mips::LiRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 1508 /* li */, Mips::LoadImm32Reg, Convert__GPR32Asm1_0__Imm1_1, 0, { MCK_GPR32Asm, MCK_Imm }, },
  { 1508 /* li */, Mips::LiRxImm16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 1511 /* ll */, Mips::LL, Convert__GPR32Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Mem }, },
  { 1511 /* ll */, Mips::LL_P8, Convert__GPR32Asm1_0__Mem2_1, Feature_IsN64|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Mem }, },
  { 1514 /* lld */, Mips::LLD, Convert__GPR64Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_Mem }, },
  { 1518 /* load_ac_dsp */, Mips::LOAD_AC_DSP, Convert__ACRegsDSPAsm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_ACRegsDSPAsm, MCK_Mem }, },
  { 1530 /* load_ccond_dsp */, Mips::LOAD_CCOND_DSP, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_DSPCC, MCK_Mem }, },
  { 1545 /* lui */, Mips::LUi, Convert__GPR32Asm1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Imm }, },
  { 1549 /* luxc1 */, Mips::LUXC1, Convert__AFGR64Asm1_0__GPR32Asm1_3__GPR32Asm1_1, Feature_NotMips64|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_GPR32Asm, MCK__40_, MCK_GPR32Asm, MCK__41_ }, },
  { 1549 /* luxc1 */, Mips::LUXC164, Convert__FGR64Asm1_0__GPR32Asm1_3__GPR32Asm1_1, Feature_HasMips64|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_GPR32Asm, MCK__40_, MCK_GPR32Asm, MCK__41_ }, },
  { 1555 /* lw */, Mips::LW, Convert__GPR32Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Mem }, },
  { 1555 /* lw */, Mips::LwRxSpImmX16, Convert__Reg1_0__Reg1_3__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__40_, MCK_CPUSPReg, MCK__41__59_ }, },
  { 1558 /* lwc1 */, Mips::LWC1, Convert__FGR32Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_Mem }, },
  { 1558 /* lwc1 */, Mips::LWC1_P8, Convert__FGR32Asm1_0__Mem2_1, Feature_IsN64|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_Mem }, },
  { 1563 /* lwl */, Mips::LWL, Convert__GPR32Asm1_0__Mem2_1__Tie0, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Mem }, },
  { 1567 /* lwr */, Mips::LWR, Convert__GPR32Asm1_0__Mem2_1__Tie0, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Mem }, },
  { 1571 /* lwu */, Mips::LWu, Convert__GPR64Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_Mem }, },
  { 1575 /* lwx */, Mips::LWX, Convert__Reg1_0__Reg1_3__Reg1_1, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK__40_, MCK_DSPRegs, MCK__41_ }, },
  { 1579 /* lwxc1 */, Mips::LWXC1, Convert__FGR32Asm1_0__GPR32Asm1_3__GPR32Asm1_1, Feature_HasFPIdx|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_GPR32Asm, MCK__40_, MCK_GPR32Asm, MCK__41_ }, },
  { 1585 /* madd */, Mips::MADD, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1585 /* madd */, Mips::MADD_DSP, Convert__Reg1_0__Reg1_1__Reg1_2__Tie0, Feature_HasDSP, { MCK_ACRegsDSP, MCK_DSPRegs, MCK_DSPRegs }, },
  { 1590 /* madd.d */, Mips::MADD_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1__AFGR64Asm1_2__AFGR64Asm1_3, Feature_HasMips32r2|Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm, MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 1597 /* madd.s */, Mips::MADD_S, Convert__FGR32Asm1_0__FGR32Asm1_1__FGR32Asm1_2__FGR32Asm1_3, Feature_HasMips32r2|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm, MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 1604 /* maddu */, Mips::MADDU, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1604 /* maddu */, Mips::MADDU_DSP, Convert__Reg1_0__Reg1_1__Reg1_2__Tie0, Feature_HasDSP, { MCK_ACRegsDSP, MCK_DSPRegs, MCK_DSPRegs }, },
  { 1610 /* maq_s.w.phl */, Mips::MAQ_S_W_PHL, Convert__Reg1_0__Reg1_1__Reg1_2__Tie0, Feature_HasDSP, { MCK_ACRegsDSP, MCK_DSPRegs, MCK_DSPRegs }, },
  { 1622 /* maq_s.w.phr */, Mips::MAQ_S_W_PHR, Convert__Reg1_0__Reg1_1__Reg1_2__Tie0, Feature_HasDSP, { MCK_ACRegsDSP, MCK_DSPRegs, MCK_DSPRegs }, },
  { 1634 /* maq_sa.w.phl */, Mips::MAQ_SA_W_PHL, Convert__Reg1_0__Reg1_1__Reg1_2__Tie0, Feature_HasDSP, { MCK_ACRegsDSP, MCK_DSPRegs, MCK_DSPRegs }, },
  { 1647 /* maq_sa.w.phr */, Mips::MAQ_SA_W_PHR, Convert__Reg1_0__Reg1_1__Reg1_2__Tie0, Feature_HasDSP, { MCK_ACRegsDSP, MCK_DSPRegs, MCK_DSPRegs }, },
  { 1660 /* mfc0 */, Mips::MFC0_3OP, Convert__GPR32Asm1_0__GPR32Asm1_1__imm_0, 0, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1660 /* mfc0 */, Mips::MFC0_3OP, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 1665 /* mfc1 */, Mips::MFC1, Convert__GPR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_FGR32Asm }, },
  { 1670 /* mfc2 */, Mips::MFC2_3OP, Convert__GPR32Asm1_0__GPR32Asm1_1__imm_0, 0, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1670 /* mfc2 */, Mips::MFC2_3OP, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 1675 /* mfhi */, Mips::Mfhi16, Convert__Reg1_0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 1675 /* mfhi */, Mips::MFHI, Convert__GPR32Asm1_0, Feature_HasStdEnc, { MCK_GPR32Asm }, },
  { 1675 /* mfhi */, Mips::MFHI_DSP, Convert__Reg1_0__Reg1_1, Feature_HasDSP, { MCK_DSPRegs, MCK_HIRegsDSP }, },
  { 1680 /* mflo */, Mips::Mflo16, Convert__Reg1_0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 1680 /* mflo */, Mips::MFLO, Convert__GPR32Asm1_0, Feature_HasStdEnc, { MCK_GPR32Asm }, },
  { 1680 /* mflo */, Mips::MFLO_DSP, Convert__Reg1_0__Reg1_1, Feature_HasDSP, { MCK_DSPRegs, MCK_LORegsDSP }, },
  { 1685 /* modsub */, Mips::MODSUB, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 1692 /* mov.d */, Mips::FMOV_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 1692 /* mov.d */, Mips::FMOV_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 1698 /* mov.s */, Mips::FMOV_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 1704 /* move */, Mips::MoveR3216, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_DSPRegs }, },
  { 1704 /* move */, Mips::Move32R16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_DSPRegs, MCK_CPU16Regs }, },
  { 1704 /* move */, Mips::ADDu, Convert__GPR32Asm1_0__GPR32Asm1_1__regZERO, Feature_NotMips64, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1704 /* move */, Mips::DADDu, Convert__GPR64Asm1_0__GPR64Asm1_1__regZERO_64, Feature_HasMips64, { MCK_GPR64Asm, MCK_GPR64Asm }, },
  { 1709 /* movf */, Mips::MOVF_I, Convert__GPR32Asm1_0__GPR32Asm1_1__FCCRegsAsm1_2__Tie0, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_FCCRegsAsm }, },
  { 1714 /* movf.d */, Mips::MOVF_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1__FCCRegsAsm1_2__Tie0, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm, MCK_FCCRegsAsm }, },
  { 1721 /* movf.s */, Mips::MOVF_S, Convert__FGR32Asm1_0__FGR32Asm1_1__FCCRegsAsm1_2__Tie0, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm, MCK_FCCRegsAsm }, },
  { 1728 /* movn */, Mips::MOVN_I_I, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2__Tie0, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1733 /* movn.d */, Mips::MOVN_I_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1__GPR32Asm1_2__Tie0, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm, MCK_GPR32Asm }, },
  { 1740 /* movn.s */, Mips::MOVN_I_S, Convert__FGR32Asm1_0__FGR32Asm1_1__GPR32Asm1_2__Tie0, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm, MCK_GPR32Asm }, },
  { 1747 /* movt */, Mips::MOVT_I, Convert__GPR32Asm1_0__GPR32Asm1_1__FCCRegsAsm1_2__Tie0, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_FCCRegsAsm }, },
  { 1752 /* movt.d */, Mips::MOVT_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1__FCCRegsAsm1_2__Tie0, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm, MCK_FCCRegsAsm }, },
  { 1759 /* movt.s */, Mips::MOVT_S, Convert__FGR32Asm1_0__FGR32Asm1_1__FCCRegsAsm1_2__Tie0, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm, MCK_FCCRegsAsm }, },
  { 1766 /* movz */, Mips::MOVZ_I_I, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2__Tie0, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1771 /* movz.d */, Mips::MOVZ_I_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1__GPR32Asm1_2__Tie0, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm, MCK_GPR32Asm }, },
  { 1778 /* movz.s */, Mips::MOVZ_I_S, Convert__FGR32Asm1_0__FGR32Asm1_1__GPR32Asm1_2__Tie0, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm, MCK_GPR32Asm }, },
  { 1785 /* msub */, Mips::MSUB, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1785 /* msub */, Mips::MSUB_DSP, Convert__Reg1_0__Reg1_1__Reg1_2__Tie0, Feature_HasDSP, { MCK_ACRegsDSP, MCK_DSPRegs, MCK_DSPRegs }, },
  { 1790 /* msub.d */, Mips::MSUB_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1__AFGR64Asm1_2__AFGR64Asm1_3, Feature_HasMips32r2|Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm, MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 1797 /* msub.s */, Mips::MSUB_S, Convert__FGR32Asm1_0__FGR32Asm1_1__FGR32Asm1_2__FGR32Asm1_3, Feature_HasMips32r2|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm, MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 1804 /* msubu */, Mips::MSUBU, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1804 /* msubu */, Mips::MSUBU_DSP, Convert__Reg1_0__Reg1_1__Reg1_2__Tie0, Feature_HasDSP, { MCK_ACRegsDSP, MCK_DSPRegs, MCK_DSPRegs }, },
  { 1810 /* mtc0 */, Mips::MTC0_3OP, Convert__GPR32Asm1_1__imm_0__GPR32Asm1_0, 0, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1810 /* mtc0 */, Mips::MTC0_3OP, Convert__GPR32Asm1_1__Imm1_2__GPR32Asm1_0, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 1815 /* mtc1 */, Mips::MTC1, Convert__FGR32Asm1_1__GPR32Asm1_0, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_FGR32Asm }, },
  { 1820 /* mtc2 */, Mips::MTC2_3OP, Convert__GPR32Asm1_1__imm_0__GPR32Asm1_0, 0, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1820 /* mtc2 */, Mips::MTC2_3OP, Convert__GPR32Asm1_1__Imm1_2__GPR32Asm1_0, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 1825 /* mthi */, Mips::MTHI, Convert__GPR32Asm1_0, Feature_HasStdEnc, { MCK_GPR32Asm }, },
  { 1825 /* mthi */, Mips::MTHI_DSP, Convert__Reg1_1__Reg1_0, Feature_HasDSP, { MCK_DSPRegs, MCK_HIRegsDSP }, },
  { 1830 /* mthlip */, Mips::MTHLIP, Convert__Reg1_1__Reg1_0__Tie0, Feature_HasDSP, { MCK_DSPRegs, MCK_ACRegsDSP }, },
  { 1837 /* mtlo */, Mips::MTLO, Convert__GPR32Asm1_0, Feature_HasStdEnc, { MCK_GPR32Asm }, },
  { 1837 /* mtlo */, Mips::MTLO_DSP, Convert__Reg1_1__Reg1_0, Feature_HasDSP, { MCK_DSPRegs, MCK_LORegsDSP }, },
  { 1842 /* mul */, Mips::MUL, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1846 /* mul.d */, Mips::FMUL_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1__AFGR64Asm1_2, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 1846 /* mul.d */, Mips::FMUL_D64, Convert__FGR64Asm1_0__FGR64Asm1_1__FGR64Asm1_2, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 1852 /* mul.ph */, Mips::MUL_PH, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSPR2, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 1859 /* mul.s */, Mips::FMUL_S, Convert__FGR32Asm1_0__FGR32Asm1_1__FGR32Asm1_2, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 1865 /* mul_s.ph */, Mips::MUL_S_PH, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSPR2, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 1874 /* muleq_s.w.phl */, Mips::MULEQ_S_W_PHL, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 1888 /* muleq_s.w.phr */, Mips::MULEQ_S_W_PHR, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 1902 /* muleu_s.ph.qbl */, Mips::MULEU_S_PH_QBL, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 1917 /* muleu_s.ph.qbr */, Mips::MULEU_S_PH_QBR, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 1932 /* mulq_rs.ph */, Mips::MULQ_RS_PH, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 1943 /* mulq_rs.w */, Mips::MULQ_RS_W, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSPR2, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 1953 /* mulq_s.ph */, Mips::MULQ_S_PH, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSPR2, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 1963 /* mulq_s.w */, Mips::MULQ_S_W, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSPR2, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 1972 /* mulsa.w.ph */, Mips::MULSA_W_PH, Convert__Reg1_0__Reg1_1__Reg1_2__Tie0, Feature_HasDSPR2, { MCK_ACRegsDSP, MCK_DSPRegs, MCK_DSPRegs }, },
  { 1983 /* mulsaq_s.w.ph */, Mips::MULSAQ_S_W_PH, Convert__Reg1_0__Reg1_1__Reg1_2__Tie0, Feature_HasDSP, { MCK_ACRegsDSP, MCK_DSPRegs, MCK_DSPRegs }, },
  { 1997 /* mult */, Mips::MULT, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1997 /* mult */, Mips::MULT_DSP, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_ACRegsDSP, MCK_DSPRegs, MCK_DSPRegs }, },
  { 2002 /* multu */, Mips::MULTu, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2002 /* multu */, Mips::MULTU_DSP, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_ACRegsDSP, MCK_DSPRegs, MCK_DSPRegs }, },
  { 2008 /* neg */, Mips::NegRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 2008 /* neg */, Mips::SUB, Convert__GPR32Asm1_0__regZERO__GPR32Asm1_1, 0, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2012 /* neg.d */, Mips::FNEG_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NoNaNsFPMath|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 2012 /* neg.d */, Mips::FNEG_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_NoNaNsFPMath|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 2018 /* neg.s */, Mips::FNEG_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_NoNaNsFPMath|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 2024 /* negu */, Mips::SUBu, Convert__GPR32Asm1_0__regZERO__GPR32Asm1_1, 0, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2029 /* nmadd.d */, Mips::NMADD_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1__AFGR64Asm1_2__AFGR64Asm1_3, Feature_HasMips32r2|Feature_NotFP64bit|Feature_NoNaNsFPMath|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm, MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 2037 /* nmadd.s */, Mips::NMADD_S, Convert__FGR32Asm1_0__FGR32Asm1_1__FGR32Asm1_2__FGR32Asm1_3, Feature_HasMips32r2|Feature_NoNaNsFPMath|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm, MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 2045 /* nmsub.d */, Mips::NMSUB_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1__AFGR64Asm1_2__AFGR64Asm1_3, Feature_HasMips32r2|Feature_NotFP64bit|Feature_NoNaNsFPMath|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm, MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 2053 /* nmsub.s */, Mips::NMSUB_S, Convert__FGR32Asm1_0__FGR32Asm1_1__FGR32Asm1_2__FGR32Asm1_3, Feature_HasMips32r2|Feature_NoNaNsFPMath|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm, MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 2061 /* nop */, Mips::SLL, Convert__regZERO__regZERO__imm_0, 0, {  }, },
  { 2065 /* nor */, Mips::NOR, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2069 /* not */, Mips::NotRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 2069 /* not */, Mips::NOR, Convert__GPR32Asm1_0__GPR32Asm1_1__regZERO, 0, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2073 /* or */, Mips::OrRxRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 2073 /* or */, Mips::OR, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2073 /* or */, Mips::ORi, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, 0, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2076 /* ori */, Mips::ORi, Convert__GPR32Asm1_0__GPR32Asm1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Imm }, },
  { 2076 /* ori */, Mips::ORi, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2080 /* packrl.ph */, Mips::PACKRL_PH, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 2090 /* pick.ph */, Mips::PICK_PH, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 2098 /* pick.qb */, Mips::PICK_QB, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 2106 /* preceq.w.phl */, Mips::PRECEQ_W_PHL, Convert__Reg1_0__Reg1_1, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs }, },
  { 2119 /* preceq.w.phr */, Mips::PRECEQ_W_PHR, Convert__Reg1_0__Reg1_1, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs }, },
  { 2132 /* precequ.ph.qbl */, Mips::PRECEQU_PH_QBL, Convert__Reg1_0__Reg1_1, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs }, },
  { 2147 /* precequ.ph.qbla */, Mips::PRECEQU_PH_QBLA, Convert__Reg1_0__Reg1_1, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs }, },
  { 2163 /* precequ.ph.qbr */, Mips::PRECEQU_PH_QBR, Convert__Reg1_0__Reg1_1, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs }, },
  { 2178 /* precequ.ph.qbra */, Mips::PRECEQU_PH_QBRA, Convert__Reg1_0__Reg1_1, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs }, },
  { 2194 /* preceu.ph.qbl */, Mips::PRECEU_PH_QBL, Convert__Reg1_0__Reg1_1, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs }, },
  { 2208 /* preceu.ph.qbla */, Mips::PRECEU_PH_QBLA, Convert__Reg1_0__Reg1_1, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs }, },
  { 2223 /* preceu.ph.qbr */, Mips::PRECEU_PH_QBR, Convert__Reg1_0__Reg1_1, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs }, },
  { 2237 /* preceu.ph.qbra */, Mips::PRECEU_PH_QBRA, Convert__Reg1_0__Reg1_1, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs }, },
  { 2252 /* precr.qb.ph */, Mips::PRECR_QB_PH, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSPR2, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 2264 /* precr_sra.ph.w */, Mips::PRECR_SRA_PH_W, Convert__Reg1_0__Reg1_1__Imm1_2__Tie0, Feature_HasDSPR2, { MCK_DSPRegs, MCK_DSPRegs, MCK_Imm }, },
  { 2279 /* precr_sra_r.ph.w */, Mips::PRECR_SRA_R_PH_W, Convert__Reg1_0__Reg1_1__Imm1_2__Tie0, Feature_HasDSPR2, { MCK_DSPRegs, MCK_DSPRegs, MCK_Imm }, },
  { 2296 /* precrq.ph.w */, Mips::PRECRQ_PH_W, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 2308 /* precrq.qb.ph */, Mips::PRECRQ_QB_PH, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 2321 /* precrq_rs.ph.w */, Mips::PRECRQ_RS_PH_W, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 2336 /* precrqu_s.qb.ph */, Mips::PRECRQU_S_QB_PH, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 2352 /* prepend */, Mips::PREPEND, Convert__Reg1_0__Reg1_1__Imm1_2__Tie0, Feature_HasDSPR2, { MCK_DSPRegs, MCK_DSPRegs, MCK_Imm }, },
  { 2360 /* raddu.w.qb */, Mips::RADDU_W_QB, Convert__Reg1_0__Reg1_1, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs }, },
  { 2371 /* rddsp */, Mips::RDDSP, Convert__Reg1_0__Imm1_1, Feature_HasDSP, { MCK_DSPRegs, MCK_Imm }, },
  { 2377 /* rdhwr */, Mips::RDHWR, Convert__GPR32Asm1_0__HWRegsAsm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_HWRegsAsm }, },
  { 2383 /* repl.ph */, Mips::REPL_PH, Convert__Reg1_0__Imm1_1, Feature_HasDSP, { MCK_DSPRegs, MCK_Imm }, },
  { 2391 /* repl.qb */, Mips::REPL_QB, Convert__Reg1_0__Imm1_1, Feature_HasDSP, { MCK_DSPRegs, MCK_Imm }, },
  { 2399 /* replv.ph */, Mips::REPLV_PH, Convert__Reg1_0__Reg1_1, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs }, },
  { 2408 /* replv.qb */, Mips::REPLV_QB, Convert__Reg1_0__Reg1_1, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs }, },
  { 2417 /* rotr */, Mips::ROTR, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasMips32r2|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2422 /* rotrv */, Mips::ROTRV, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasMips32r2|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2428 /* round.l.d */, Mips::ROUND_L_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 2438 /* round.l.s */, Mips::ROUND_L_S, Convert__FGR64Asm1_0__FGR32Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR32Asm }, },
  { 2448 /* round.w.d */, Mips::ROUND_W_D32, Convert__FGR32Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_AFGR64Asm }, },
  { 2448 /* round.w.d */, Mips::ROUND_W_D64, Convert__FGR32Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR64Asm }, },
  { 2458 /* round.w.s */, Mips::ROUND_W_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 2468 /* sb */, Mips::SB, Convert__GPR32Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Mem }, },
  { 2468 /* sb */, Mips::SbRxRyOffMemX16, Convert__Reg1_0__Reg1_1__Imm1_2__Reg1_3, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm, MCK_CPU16RegsPlusSP }, },
  { 2471 /* sc */, Mips::SC, Convert__GPR32Asm1_0__Tie0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Mem }, },
  { 2471 /* sc */, Mips::SC_P8, Convert__GPR32Asm1_0__Tie0__Mem2_1, Feature_IsN64|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Mem }, },
  { 2474 /* scd */, Mips::SCD, Convert__GPR64Asm1_0__Tie0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_Mem }, },
  { 2478 /* sd */, Mips::SD, Convert__GPR64Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_Mem }, },
  { 2481 /* sdc1 */, Mips::SDC1, Convert__AFGR64Asm1_0__Mem2_1, Feature_NotN64|Feature_NotMips64|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_Mem }, },
  { 2481 /* sdc1 */, Mips::SDC164, Convert__FGR64Asm1_0__Mem2_1, Feature_NotN64|Feature_HasMips64|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_Mem }, },
  { 2486 /* sdl */, Mips::SDL, Convert__GPR64Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_Mem }, },
  { 2490 /* sdr */, Mips::SDR, Convert__GPR64Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_Mem }, },
  { 2494 /* sdxc1 */, Mips::SDXC1, Convert__AFGR64Asm1_0__GPR32Asm1_3__GPR32Asm1_1, Feature_HasMips32r2|Feature_NotMips64|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_GPR32Asm, MCK__40_, MCK_GPR32Asm, MCK__41_ }, },
  { 2494 /* sdxc1 */, Mips::SDXC164, Convert__FGR64Asm1_0__GPR32Asm1_3__GPR32Asm1_1, Feature_HasMips64|Feature_NotN64|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_GPR32Asm, MCK__40_, MCK_GPR32Asm, MCK__41_ }, },
  { 2500 /* seb */, Mips::SEB, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasSEInReg|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2504 /* seh */, Mips::SEH, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasSEInReg|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2508 /* sh */, Mips::SH, Convert__GPR32Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Mem }, },
  { 2508 /* sh */, Mips::ShRxRyOffMemX16, Convert__Reg1_0__Reg1_1__Imm1_2__Reg1_3, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm, MCK_CPU16RegsPlusSP }, },
  { 2511 /* shilo */, Mips::SHILO, Convert__Reg1_0__Imm1_1__Tie0, Feature_HasDSP, { MCK_ACRegsDSP, MCK_Imm }, },
  { 2517 /* shilov */, Mips::SHILOV, Convert__Reg1_0__Reg1_1__Tie0, Feature_HasDSP, { MCK_ACRegsDSP, MCK_DSPRegs }, },
  { 2524 /* shll.ph */, Mips::SHLL_PH, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_Imm }, },
  { 2532 /* shll.qb */, Mips::SHLL_QB, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_Imm }, },
  { 2540 /* shll_s.ph */, Mips::SHLL_S_PH, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_Imm }, },
  { 2550 /* shll_s.w */, Mips::SHLL_S_W, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_Imm }, },
  { 2559 /* shllv.ph */, Mips::SHLLV_PH, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 2568 /* shllv.qb */, Mips::SHLLV_QB, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 2577 /* shllv_s.ph */, Mips::SHLLV_S_PH, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 2588 /* shllv_s.w */, Mips::SHLLV_S_W, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 2598 /* shra.ph */, Mips::SHRA_PH, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_Imm }, },
  { 2606 /* shra.qb */, Mips::SHRA_QB, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_HasDSPR2, { MCK_DSPRegs, MCK_DSPRegs, MCK_Imm }, },
  { 2614 /* shra_r.ph */, Mips::SHRA_R_PH, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_Imm }, },
  { 2624 /* shra_r.qb */, Mips::SHRA_R_QB, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_HasDSPR2, { MCK_DSPRegs, MCK_DSPRegs, MCK_Imm }, },
  { 2634 /* shra_r.w */, Mips::SHRA_R_W, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_Imm }, },
  { 2643 /* shrav.ph */, Mips::SHRAV_PH, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 2652 /* shrav.qb */, Mips::SHRAV_QB, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSPR2, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 2661 /* shrav_r.ph */, Mips::SHRAV_R_PH, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 2672 /* shrav_r.qb */, Mips::SHRAV_R_QB, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSPR2, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 2683 /* shrav_r.w */, Mips::SHRAV_R_W, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 2693 /* shrl.ph */, Mips::SHRL_PH, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_HasDSPR2, { MCK_DSPRegs, MCK_DSPRegs, MCK_Imm }, },
  { 2701 /* shrl.qb */, Mips::SHRL_QB, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_Imm }, },
  { 2709 /* shrlv.ph */, Mips::SHRLV_PH, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSPR2, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 2718 /* shrlv.qb */, Mips::SHRLV_QB, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 2727 /* sll */, Mips::SllX16, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm }, },
  { 2727 /* sll */, Mips::SLL, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2731 /* sllv */, Mips::SllvRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 2731 /* sllv */, Mips::SLLV, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2736 /* slt */, Mips::SltRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 2736 /* slt */, Mips::SLT, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2736 /* slt */, Mips::SLTi, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, 0, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2740 /* slti */, Mips::SltiRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 2740 /* slti */, Mips::SLTi, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2740 /* slti */, Mips::SltiRxImm16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 2745 /* sltiu */, Mips::SltiuRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 2745 /* sltiu */, Mips::SLTiu, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2745 /* sltiu */, Mips::SltiuRxImm16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 2751 /* sltu */, Mips::SltuRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 2751 /* sltu */, Mips::SLTu, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2756 /* sqrt.d */, Mips::FSQRT_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 2756 /* sqrt.d */, Mips::FSQRT_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 2763 /* sqrt.s */, Mips::FSQRT_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 2770 /* sra */, Mips::SraX16, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm }, },
  { 2770 /* sra */, Mips::SRA, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2774 /* srav */, Mips::SravRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 2774 /* srav */, Mips::SRAV, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2779 /* srl */, Mips::SrlX16, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm }, },
  { 2779 /* srl */, Mips::SRL, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2783 /* srlv */, Mips::SrlvRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 2783 /* srlv */, Mips::SRLV, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2788 /* store_ac_dsp */, Mips::STORE_AC_DSP, Convert__ACRegsDSPAsm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_ACRegsDSPAsm, MCK_Mem }, },
  { 2801 /* store_ccond_dsp */, Mips::STORE_CCOND_DSP, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_DSPCC, MCK_Mem }, },
  { 2817 /* sub */, Mips::SUB, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2821 /* sub.d */, Mips::FSUB_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1__AFGR64Asm1_2, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 2821 /* sub.d */, Mips::FSUB_D64, Convert__FGR64Asm1_0__FGR64Asm1_1__FGR64Asm1_2, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 2827 /* sub.s */, Mips::FSUB_S, Convert__FGR32Asm1_0__FGR32Asm1_1__FGR32Asm1_2, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 2833 /* subq.ph */, Mips::SUBQ_PH, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 2841 /* subq_s.ph */, Mips::SUBQ_S_PH, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 2851 /* subq_s.w */, Mips::SUBQ_S_W, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 2860 /* subqh.ph */, Mips::SUBQH_PH, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSPR2, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 2869 /* subqh.w */, Mips::SUBQH_W, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSPR2, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 2877 /* subqh_r.ph */, Mips::SUBQH_R_PH, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSPR2, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 2888 /* subqh_r.w */, Mips::SUBQH_R_W, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSPR2, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 2898 /* subu */, Mips::SubuRxRyRz16, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 2898 /* subu */, Mips::SUBu, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2903 /* subu.ph */, Mips::SUBU_PH, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSPR2, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 2911 /* subu.qb */, Mips::SUBU_QB, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 2919 /* subu_s.ph */, Mips::SUBU_S_PH, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSPR2, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 2929 /* subu_s.qb */, Mips::SUBU_S_QB, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 2939 /* subuh.qb */, Mips::SUBUH_QB, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSPR2, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 2948 /* subuh_r.qb */, Mips::SUBUH_R_QB, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSPR2, { MCK_DSPRegs, MCK_DSPRegs, MCK_DSPRegs }, },
  { 2959 /* suxc1 */, Mips::SUXC1, Convert__AFGR64Asm1_0__GPR32Asm1_3__GPR32Asm1_1, Feature_NotMips64|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_GPR32Asm, MCK__40_, MCK_GPR32Asm, MCK__41_ }, },
  { 2959 /* suxc1 */, Mips::SUXC164, Convert__FGR64Asm1_0__GPR32Asm1_3__GPR32Asm1_1, Feature_HasMips64|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_GPR32Asm, MCK__40_, MCK_GPR32Asm, MCK__41_ }, },
  { 2965 /* sw */, Mips::SW, Convert__GPR32Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Mem }, },
  { 2965 /* sw */, Mips::SwRxRyOffMemX16, Convert__Reg1_0__Reg1_1__Imm1_2__Reg1_3, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm, MCK_CPU16RegsPlusSP }, },
  { 2965 /* sw */, Mips::SwRxSpImmX16, Convert__Reg1_0__Reg1_3__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__40_, MCK_CPUSPReg, MCK__41__59_ }, },
  { 2968 /* swc1 */, Mips::SWC1, Convert__FGR32Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_Mem }, },
  { 2968 /* swc1 */, Mips::SWC1_P8, Convert__FGR32Asm1_0__Mem2_1, Feature_IsN64|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_Mem }, },
  { 2973 /* swl */, Mips::SWL, Convert__GPR32Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Mem }, },
  { 2977 /* swr */, Mips::SWR, Convert__GPR32Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Mem }, },
  { 2981 /* swxc1 */, Mips::SWXC1, Convert__FGR32Asm1_0__GPR32Asm1_3__GPR32Asm1_1, Feature_HasFPIdx|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_GPR32Asm, MCK__40_, MCK_GPR32Asm, MCK__41_ }, },
  { 2987 /* sync */, Mips::SYNC, Convert__Imm1_0, Feature_HasStdEnc, { MCK_Imm }, },
  { 2992 /* syscall */, Mips::SYSCALL, Convert__imm_0, 0, {  }, },
  { 2992 /* syscall */, Mips::SYSCALL, Convert__Imm1_0, Feature_HasStdEnc, { MCK_Imm }, },
  { 3000 /* teq */, Mips::TEQ, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 3004 /* trunc.l.d */, Mips::TRUNC_L_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 3014 /* trunc.l.s */, Mips::TRUNC_L_S, Convert__FGR64Asm1_0__FGR32Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR32Asm }, },
  { 3024 /* trunc.w.d */, Mips::TRUNC_W_D32, Convert__FGR32Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_AFGR64Asm }, },
  { 3024 /* trunc.w.d */, Mips::TRUNC_W_D64, Convert__FGR32Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR64Asm }, },
  { 3034 /* trunc.w.s */, Mips::TRUNC_W_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 3044 /* wrdsp */, Mips::WRDSP, Convert__Reg1_0__Imm1_1, Feature_HasDSP, { MCK_DSPRegs, MCK_Imm }, },
  { 3050 /* wsbh */, Mips::WSBH, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasSwap|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 3055 /* xor */, Mips::XorRxRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 3055 /* xor */, Mips::XOR, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 3055 /* xor */, Mips::XORi, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, 0, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 3059 /* xori */, Mips::XORi, Convert__GPR32Asm1_0__GPR32Asm1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Imm }, },
  { 3059 /* xori */, Mips::XORi, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
};

bool MipsAsmParser::
mnemonicIsValid(StringRef Mnemonic, unsigned VariantID) {
  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: // unreachable
  case 0: Start = MatchTable0; End = array_endof(MatchTable0); break;
  }
  // Search the table.
  std::pair<const MatchEntry*, const MatchEntry*> MnemonicRange =
    std::equal_range(Start, End, Mnemonic, LessOpcode());
  return MnemonicRange.first != MnemonicRange.second;
}

unsigned MipsAsmParser::
MatchInstructionImpl(const SmallVectorImpl<MCParsedAsmOperand*> &Operands,
                     MCInst &Inst,
unsigned &ErrorInfo, bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 7) {
    ErrorInfo = 7;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  unsigned AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic = ((MipsOperand*)Operands[0])->getToken();

  // Some state to try to produce better error messages.
  bool HadMatchOtherThanFeatures = false;
  bool HadMatchOtherThanPredicate = false;
  unsigned RetCode = Match_InvalidOperand;
  unsigned MissingFeatures = ~0U;
  // Set ErrorInfo to the operand that mismatches if it is
  // wrong for all instances of the instruction.
  ErrorInfo = ~0U;
  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: // unreachable
  case 0: Start = MatchTable0; End = array_endof(MatchTable0); break;
  }
  // Search the table.
  std::pair<const MatchEntry*, const MatchEntry*> MnemonicRange =
    std::equal_range(Start, End, Mnemonic, LessOpcode());

  // Return a more specific error code if no mnemonics match.
  if (MnemonicRange.first == MnemonicRange.second)
    return Match_MnemonicFail;

  for (const MatchEntry *it = MnemonicRange.first, *ie = MnemonicRange.second;
       it != ie; ++it) {
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());
    bool OperandsValid = true;
    for (unsigned i = 0; i != 6; ++i) {
      if (i + 1 >= Operands.size()) {
        OperandsValid = (it->Classes[i] == InvalidMatchClass);
        if (!OperandsValid) ErrorInfo = i + 1;
        break;
      }
      unsigned Diag = validateOperandClass(Operands[i+1],
                                           (MatchClassKind)it->Classes[i]);
      if (Diag == Match_Success)
        continue;
      // If the generic handler indicates an invalid operand
      // failure, check for a special case.
      if (Diag == Match_InvalidOperand) {
        Diag = validateTargetOperandClass(Operands[i+1],
                                           (MatchClassKind)it->Classes[i]);
        if (Diag == Match_Success)
          continue;
      }
      // If this operand is broken for all of the instances of this
      // mnemonic, keep track of it so we can report loc info.
      // If we already had a match that only failed due to a
      // target predicate, that diagnostic is preferred.
      if (!HadMatchOtherThanPredicate &&
          (it == MnemonicRange.first || ErrorInfo <= i+1)) {
        ErrorInfo = i+1;
        // InvalidOperand is the default. Prefer specificity.
        if (Diag != Match_InvalidOperand)
          RetCode = Diag;
      }
      // Otherwise, just reject this instance of the mnemonic.
      OperandsValid = false;
      break;
    }

    if (!OperandsValid) continue;
    if ((AvailableFeatures & it->RequiredFeatures) != it->RequiredFeatures) {
      HadMatchOtherThanFeatures = true;
      unsigned NewMissingFeatures = it->RequiredFeatures & ~AvailableFeatures;
      if (CountPopulation_32(NewMissingFeatures) <=
          CountPopulation_32(MissingFeatures))
        MissingFeatures = NewMissingFeatures;
      continue;
    }

    if (matchingInlineAsm) {
      Inst.setOpcode(it->Opcode);
      convertToMapAndConstraints(it->ConvertFn, Operands);
      return Match_Success;
    }

    // We have selected a definite instruction, convert the parsed
    // operands into the appropriate MCInst.
    convertToMCInst(it->ConvertFn, Inst, it->Opcode, Operands);

    // We have a potential match. Check the target predicate to
    // handle any context sensitive constraints.
    unsigned MatchResult;
    if ((MatchResult = checkTargetMatchPredicate(Inst)) != Match_Success) {
      Inst.clear();
      RetCode = MatchResult;
      HadMatchOtherThanPredicate = true;
      continue;
    }

    return Match_Success;
  }

  // Okay, we had no match.  Try to return a useful error code.
  if (HadMatchOtherThanPredicate || !HadMatchOtherThanFeatures)
    return RetCode;

  // Missing feature matches return which features were missing
  ErrorInfo = MissingFeatures;
  return Match_MissingFeature;
}

namespace {
  struct OperandMatchEntry {
    uint32_t RequiredFeatures;
    uint16_t Mnemonic;
    uint8_t Class;
    uint8_t OperandMask;

    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcodeOperand {
    bool operator()(const OperandMatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic()  < RHS;
    }
    bool operator()(StringRef LHS, const OperandMatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const OperandMatchEntry &LHS, const OperandMatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace.

static const OperandMatchEntry OperandMatchTable[403] = {
  /* Operand List Mask, Mnemonic, Operand Class, Features */
  { Feature_NoNaNsFPMath|Feature_HasStdEnc, 0 /* abs.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_NoNaNsFPMath|Feature_HasStdEnc, 0 /* abs.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_NoNaNsFPMath|Feature_HasStdEnc, 6 /* abs.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 41 /* add */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { 0, 41 /* add */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 45 /* add.d */, MCK_AFGR64Asm, 7 /* 0, 1, 2 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 45 /* add.d */, MCK_FGR64Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 51 /* add.s */, MCK_FGR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 57 /* addi */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 57 /* addi */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 62 /* addiu */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 62 /* addiu */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 139 /* addu */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { 0, 139 /* addu */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 206 /* and */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { 0, 206 /* and */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 210 /* andi */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 210 /* andi */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 235 /* bc1f */, MCK_FCCRegsAsm, 1 /* 0 */ },
  { Feature_HasStdEnc, 240 /* bc1t */, MCK_FCCRegsAsm, 1 /* 0 */ },
  { Feature_HasStdEnc, 245 /* beq */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { 0, 249 /* beqz */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 254 /* bgez */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 259 /* bgezal */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 266 /* bgtz */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 278 /* blez */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 283 /* bltz */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 288 /* bltzal */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 295 /* bne */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { 0, 299 /* bnez */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 331 /* c.eq.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 331 /* c.eq.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 338 /* c.eq.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 345 /* c.f.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 345 /* c.f.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 351 /* c.f.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 357 /* c.le.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 357 /* c.le.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 364 /* c.le.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 371 /* c.lt.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 371 /* c.lt.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 378 /* c.lt.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 385 /* c.nge.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 385 /* c.nge.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 393 /* c.nge.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 401 /* c.ngl.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 401 /* c.ngl.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 409 /* c.ngl.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 417 /* c.ngle.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 417 /* c.ngle.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 426 /* c.ngle.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 435 /* c.ngt.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 435 /* c.ngt.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 443 /* c.ngt.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 451 /* c.ole.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 451 /* c.ole.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 459 /* c.ole.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 467 /* c.olt.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 467 /* c.olt.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 475 /* c.olt.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 483 /* c.seq.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 483 /* c.seq.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 491 /* c.seq.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 499 /* c.sf.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 499 /* c.sf.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 506 /* c.sf.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 513 /* c.ueq.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 513 /* c.ueq.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 521 /* c.ueq.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 529 /* c.ule.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 529 /* c.ule.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 537 /* c.ule.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 545 /* c.ult.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 545 /* c.ult.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 553 /* c.ult.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 561 /* c.un.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 561 /* c.un.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 568 /* c.un.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 575 /* ceil.l.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 584 /* ceil.l.s */, MCK_FGR32Asm, 2 /* 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 584 /* ceil.l.s */, MCK_FGR64Asm, 1 /* 0 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 593 /* ceil.w.d */, MCK_AFGR64Asm, 2 /* 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 593 /* ceil.w.d */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 593 /* ceil.w.d */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 593 /* ceil.w.d */, MCK_FGR64Asm, 2 /* 1 */ },
  { Feature_HasStdEnc, 602 /* ceil.w.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 611 /* cfc1 */, MCK_CCRAsm, 2 /* 1 */ },
  { Feature_HasStdEnc, 611 /* cfc1 */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasBitCount|Feature_HasStdEnc, 616 /* clo */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasBitCount|Feature_HasStdEnc, 620 /* clz */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 771 /* ctc1 */, MCK_CCRAsm, 2 /* 1 */ },
  { Feature_HasStdEnc, 771 /* ctc1 */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 776 /* cvt.d.l */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 784 /* cvt.d.s */, MCK_AFGR64Asm, 1 /* 0 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 784 /* cvt.d.s */, MCK_FGR32Asm, 2 /* 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 784 /* cvt.d.s */, MCK_FGR32Asm, 2 /* 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 784 /* cvt.d.s */, MCK_FGR64Asm, 1 /* 0 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 792 /* cvt.d.w */, MCK_AFGR64Asm, 1 /* 0 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 792 /* cvt.d.w */, MCK_FGR32Asm, 2 /* 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 792 /* cvt.d.w */, MCK_FGR32Asm, 2 /* 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 792 /* cvt.d.w */, MCK_FGR64Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 800 /* cvt.l.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 808 /* cvt.l.s */, MCK_FGR32Asm, 2 /* 1 */ },
  { Feature_HasStdEnc, 808 /* cvt.l.s */, MCK_FGR64Asm, 1 /* 0 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 816 /* cvt.s.d */, MCK_AFGR64Asm, 2 /* 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 816 /* cvt.s.d */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 816 /* cvt.s.d */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 816 /* cvt.s.d */, MCK_FGR64Asm, 2 /* 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 824 /* cvt.s.l */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 824 /* cvt.s.l */, MCK_FGR64Asm, 2 /* 1 */ },
  { Feature_HasStdEnc, 832 /* cvt.s.w */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 840 /* cvt.w.d */, MCK_AFGR64Asm, 2 /* 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 840 /* cvt.w.d */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 840 /* cvt.w.d */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 840 /* cvt.w.d */, MCK_FGR64Asm, 2 /* 1 */ },
  { Feature_HasStdEnc, 848 /* cvt.w.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 856 /* dadd */, MCK_GPR64Asm, 7 /* 0, 1, 2 */ },
  { 0, 856 /* dadd */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 861 /* daddi */, MCK_GPR64Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 861 /* daddi */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 867 /* daddiu */, MCK_GPR64Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 867 /* daddiu */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 874 /* daddu */, MCK_GPR64Asm, 7 /* 0, 1, 2 */ },
  { 0, 874 /* daddu */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasBitCount|Feature_HasStdEnc, 880 /* dclo */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasBitCount|Feature_HasStdEnc, 885 /* dclz */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 890 /* ddiv */, MCK_GPR64Asm, 6 /* 1, 2 */ },
  { Feature_HasStdEnc, 895 /* ddivu */, MCK_GPR64Asm, 6 /* 1, 2 */ },
  { Feature_HasMips32r2|Feature_HasStdEnc, 907 /* dext */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasMips32r2|Feature_HasStdEnc, 912 /* dextm */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasMips32r2|Feature_HasStdEnc, 918 /* dextu */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasMips32r2|Feature_HasStdEnc, 924 /* dins */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasMips32r2|Feature_HasStdEnc, 929 /* dinsm */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasMips32r2|Feature_HasStdEnc, 935 /* dinsu */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 941 /* div */, MCK_GPR32Asm, 6 /* 1, 2 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 945 /* div.d */, MCK_AFGR64Asm, 7 /* 0, 1, 2 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 945 /* div.d */, MCK_FGR64Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 951 /* div.s */, MCK_FGR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 957 /* divu */, MCK_GPR32Asm, 6 /* 1, 2 */ },
  { 0, 962 /* dmfc0 */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 962 /* dmfc0 */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 968 /* dmfc1 */, MCK_FGR64Asm, 2 /* 1 */ },
  { Feature_HasStdEnc, 968 /* dmfc1 */, MCK_GPR64Asm, 1 /* 0 */ },
  { 0, 974 /* dmfc2 */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 974 /* dmfc2 */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { 0, 980 /* dmtc0 */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 980 /* dmtc0 */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 986 /* dmtc1 */, MCK_FGR64Asm, 2 /* 1 */ },
  { Feature_HasStdEnc, 986 /* dmtc1 */, MCK_GPR64Asm, 1 /* 0 */ },
  { 0, 992 /* dmtc2 */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 992 /* dmtc2 */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 998 /* dmult */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1004 /* dmultu */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasMips64r2|Feature_HasStdEnc, 1195 /* drotr */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasMips64r2|Feature_HasStdEnc, 1201 /* drotrv */, MCK_GPR32Asm, 4 /* 2 */ },
  { Feature_HasMips64r2|Feature_HasStdEnc, 1201 /* drotrv */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasSwap|Feature_HasStdEnc, 1208 /* dsbh */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasSwap|Feature_HasStdEnc, 1213 /* dshd */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1218 /* dsll */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1223 /* dsll32 */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1230 /* dsllv */, MCK_GPR32Asm, 4 /* 2 */ },
  { Feature_HasStdEnc, 1230 /* dsllv */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1236 /* dsra */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1241 /* dsra32 */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1248 /* dsrav */, MCK_GPR32Asm, 4 /* 2 */ },
  { Feature_HasStdEnc, 1248 /* dsrav */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1254 /* dsrl */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1259 /* dsrl32 */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1266 /* dsrlv */, MCK_GPR32Asm, 4 /* 2 */ },
  { Feature_HasStdEnc, 1266 /* dsrlv */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1272 /* dsubu */, MCK_GPR64Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasMips32r2|Feature_HasStdEnc, 1283 /* ext */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 1387 /* floor.l.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 1397 /* floor.l.s */, MCK_FGR32Asm, 2 /* 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 1397 /* floor.l.s */, MCK_FGR64Asm, 1 /* 0 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 1407 /* floor.w.d */, MCK_AFGR64Asm, 2 /* 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 1407 /* floor.w.d */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 1407 /* floor.w.d */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 1407 /* floor.w.d */, MCK_FGR64Asm, 2 /* 1 */ },
  { Feature_HasStdEnc, 1417 /* floor.w.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_HasMips32r2|Feature_HasStdEnc, 1427 /* ins */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { 0, 1436 /* j */, MCK_GPR32Asm, 1 /* 0 */ },
  { 0, 1438 /* jal */, MCK_GPR32Asm, 1 /* 0 */ },
  { 0, 1438 /* jal */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { 0, 1442 /* jalr */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 1442 /* jalr */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1453 /* jr */, MCK_GPR32Asm, 1 /* 0 */ },
  { 0, 1460 /* la */, MCK_GPR32Asm, 1 /* 0 */ },
  { 0, 1460 /* la */, MCK_GPR32Asm, 1 /* 0 */ },
  { 0, 1460 /* la */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1463 /* lb */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1463 /* lb */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1466 /* lbu */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1466 /* lbu */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1475 /* ld */, MCK_GPR64Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1475 /* ld */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_NotMips64|Feature_HasStdEnc, 1478 /* ldc1 */, MCK_AFGR64Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_NotMips64|Feature_HasStdEnc, 1478 /* ldc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasMips64|Feature_HasStdEnc, 1478 /* ldc1 */, MCK_FGR64Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasMips64|Feature_HasStdEnc, 1478 /* ldc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1483 /* ldl */, MCK_GPR64Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1483 /* ldl */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1487 /* ldr */, MCK_GPR64Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1487 /* ldr */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasMips32r2|Feature_NotMips64|Feature_HasStdEnc, 1491 /* ldxc1 */, MCK_AFGR64Asm, 1 /* 0 */ },
  { Feature_HasMips32r2|Feature_NotMips64|Feature_HasStdEnc, 1491 /* ldxc1 */, MCK_GPR32Asm, 10 /* 1, 3 */ },
  { Feature_HasMips64|Feature_NotN64|Feature_HasStdEnc, 1491 /* ldxc1 */, MCK_FGR64Asm, 1 /* 0 */ },
  { Feature_HasMips64|Feature_NotN64|Feature_HasStdEnc, 1491 /* ldxc1 */, MCK_GPR32Asm, 10 /* 1, 3 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1497 /* lh */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1497 /* lh */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1500 /* lhu */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1500 /* lhu */, MCK_Mem, 2 /* 1 */ },
  { 0, 1508 /* li */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1511 /* ll */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1511 /* ll */, MCK_Mem, 2 /* 1 */ },
  { Feature_IsN64|Feature_HasStdEnc, 1511 /* ll */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_IsN64|Feature_HasStdEnc, 1511 /* ll */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1514 /* lld */, MCK_GPR64Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1514 /* lld */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1518 /* load_ac_dsp */, MCK_ACRegsDSPAsm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1518 /* load_ac_dsp */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1530 /* load_ccond_dsp */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc, 1545 /* lui */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotMips64|Feature_HasStdEnc, 1549 /* luxc1 */, MCK_AFGR64Asm, 1 /* 0 */ },
  { Feature_NotMips64|Feature_HasStdEnc, 1549 /* luxc1 */, MCK_GPR32Asm, 10 /* 1, 3 */ },
  { Feature_HasMips64|Feature_HasStdEnc, 1549 /* luxc1 */, MCK_FGR64Asm, 1 /* 0 */ },
  { Feature_HasMips64|Feature_HasStdEnc, 1549 /* luxc1 */, MCK_GPR32Asm, 10 /* 1, 3 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1555 /* lw */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1555 /* lw */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1558 /* lwc1 */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1558 /* lwc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_IsN64|Feature_HasStdEnc, 1558 /* lwc1 */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_IsN64|Feature_HasStdEnc, 1558 /* lwc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1563 /* lwl */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1563 /* lwl */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1567 /* lwr */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1567 /* lwr */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1571 /* lwu */, MCK_GPR64Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1571 /* lwu */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasFPIdx|Feature_HasStdEnc, 1579 /* lwxc1 */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_HasFPIdx|Feature_HasStdEnc, 1579 /* lwxc1 */, MCK_GPR32Asm, 10 /* 1, 3 */ },
  { Feature_HasStdEnc, 1585 /* madd */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasMips32r2|Feature_NotFP64bit|Feature_HasStdEnc, 1590 /* madd.d */, MCK_AFGR64Asm, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasMips32r2|Feature_HasStdEnc, 1597 /* madd.s */, MCK_FGR32Asm, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc, 1604 /* maddu */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { 0, 1660 /* mfc0 */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1660 /* mfc0 */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1665 /* mfc1 */, MCK_FGR32Asm, 2 /* 1 */ },
  { Feature_HasStdEnc, 1665 /* mfc1 */, MCK_GPR32Asm, 1 /* 0 */ },
  { 0, 1670 /* mfc2 */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1670 /* mfc2 */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1675 /* mfhi */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 1680 /* mflo */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 1692 /* mov.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 1692 /* mov.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1698 /* mov.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_NotMips64, 1704 /* move */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasMips64, 1704 /* move */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1709 /* movf */, MCK_FCCRegsAsm, 4 /* 2 */ },
  { Feature_HasStdEnc, 1709 /* movf */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 1714 /* movf.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 1714 /* movf.d */, MCK_FCCRegsAsm, 4 /* 2 */ },
  { Feature_HasStdEnc, 1721 /* movf.s */, MCK_FCCRegsAsm, 4 /* 2 */ },
  { Feature_HasStdEnc, 1721 /* movf.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1728 /* movn */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 1733 /* movn.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 1733 /* movn.d */, MCK_GPR32Asm, 4 /* 2 */ },
  { Feature_HasStdEnc, 1740 /* movn.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1740 /* movn.s */, MCK_GPR32Asm, 4 /* 2 */ },
  { Feature_HasStdEnc, 1747 /* movt */, MCK_FCCRegsAsm, 4 /* 2 */ },
  { Feature_HasStdEnc, 1747 /* movt */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 1752 /* movt.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 1752 /* movt.d */, MCK_FCCRegsAsm, 4 /* 2 */ },
  { Feature_HasStdEnc, 1759 /* movt.s */, MCK_FCCRegsAsm, 4 /* 2 */ },
  { Feature_HasStdEnc, 1759 /* movt.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1766 /* movz */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 1771 /* movz.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 1771 /* movz.d */, MCK_GPR32Asm, 4 /* 2 */ },
  { Feature_HasStdEnc, 1778 /* movz.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1778 /* movz.s */, MCK_GPR32Asm, 4 /* 2 */ },
  { Feature_HasStdEnc, 1785 /* msub */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasMips32r2|Feature_NotFP64bit|Feature_HasStdEnc, 1790 /* msub.d */, MCK_AFGR64Asm, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasMips32r2|Feature_HasStdEnc, 1797 /* msub.s */, MCK_FGR32Asm, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc, 1804 /* msubu */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { 0, 1810 /* mtc0 */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1810 /* mtc0 */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1815 /* mtc1 */, MCK_FGR32Asm, 2 /* 1 */ },
  { Feature_HasStdEnc, 1815 /* mtc1 */, MCK_GPR32Asm, 1 /* 0 */ },
  { 0, 1820 /* mtc2 */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1820 /* mtc2 */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1825 /* mthi */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 1837 /* mtlo */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 1842 /* mul */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 1846 /* mul.d */, MCK_AFGR64Asm, 7 /* 0, 1, 2 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 1846 /* mul.d */, MCK_FGR64Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 1859 /* mul.s */, MCK_FGR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 1997 /* mult */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 2002 /* multu */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { 0, 2008 /* neg */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_NoNaNsFPMath|Feature_HasStdEnc, 2012 /* neg.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_NoNaNsFPMath|Feature_HasStdEnc, 2012 /* neg.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_NoNaNsFPMath|Feature_HasStdEnc, 2018 /* neg.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { 0, 2024 /* negu */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasMips32r2|Feature_NotFP64bit|Feature_NoNaNsFPMath|Feature_HasStdEnc, 2029 /* nmadd.d */, MCK_AFGR64Asm, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasMips32r2|Feature_NoNaNsFPMath|Feature_HasStdEnc, 2037 /* nmadd.s */, MCK_FGR32Asm, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasMips32r2|Feature_NotFP64bit|Feature_NoNaNsFPMath|Feature_HasStdEnc, 2045 /* nmsub.d */, MCK_AFGR64Asm, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasMips32r2|Feature_NoNaNsFPMath|Feature_HasStdEnc, 2053 /* nmsub.s */, MCK_FGR32Asm, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc, 2065 /* nor */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { 0, 2069 /* not */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 2073 /* or */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { 0, 2073 /* or */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 2076 /* ori */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 2076 /* ori */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 2377 /* rdhwr */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 2377 /* rdhwr */, MCK_HWRegsAsm, 2 /* 1 */ },
  { Feature_HasMips32r2|Feature_HasStdEnc, 2417 /* rotr */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasMips32r2|Feature_HasStdEnc, 2422 /* rotrv */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 2428 /* round.l.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 2438 /* round.l.s */, MCK_FGR32Asm, 2 /* 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 2438 /* round.l.s */, MCK_FGR64Asm, 1 /* 0 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 2448 /* round.w.d */, MCK_AFGR64Asm, 2 /* 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 2448 /* round.w.d */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 2448 /* round.w.d */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 2448 /* round.w.d */, MCK_FGR64Asm, 2 /* 1 */ },
  { Feature_HasStdEnc, 2458 /* round.w.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2468 /* sb */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2468 /* sb */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2471 /* sc */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2471 /* sc */, MCK_Mem, 2 /* 1 */ },
  { Feature_IsN64|Feature_HasStdEnc, 2471 /* sc */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_IsN64|Feature_HasStdEnc, 2471 /* sc */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2474 /* scd */, MCK_GPR64Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2474 /* scd */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2478 /* sd */, MCK_GPR64Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2478 /* sd */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_NotMips64|Feature_HasStdEnc, 2481 /* sdc1 */, MCK_AFGR64Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_NotMips64|Feature_HasStdEnc, 2481 /* sdc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasMips64|Feature_HasStdEnc, 2481 /* sdc1 */, MCK_FGR64Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasMips64|Feature_HasStdEnc, 2481 /* sdc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2486 /* sdl */, MCK_GPR64Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2486 /* sdl */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2490 /* sdr */, MCK_GPR64Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2490 /* sdr */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasMips32r2|Feature_NotMips64|Feature_HasStdEnc, 2494 /* sdxc1 */, MCK_AFGR64Asm, 1 /* 0 */ },
  { Feature_HasMips32r2|Feature_NotMips64|Feature_HasStdEnc, 2494 /* sdxc1 */, MCK_GPR32Asm, 10 /* 1, 3 */ },
  { Feature_HasMips64|Feature_NotN64|Feature_HasStdEnc, 2494 /* sdxc1 */, MCK_FGR64Asm, 1 /* 0 */ },
  { Feature_HasMips64|Feature_NotN64|Feature_HasStdEnc, 2494 /* sdxc1 */, MCK_GPR32Asm, 10 /* 1, 3 */ },
  { Feature_HasSEInReg|Feature_HasStdEnc, 2500 /* seb */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasSEInReg|Feature_HasStdEnc, 2504 /* seh */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2508 /* sh */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2508 /* sh */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc, 2727 /* sll */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 2731 /* sllv */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 2736 /* slt */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { 0, 2736 /* slt */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 2740 /* slti */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 2745 /* sltiu */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 2751 /* sltu */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 2756 /* sqrt.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 2756 /* sqrt.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 2763 /* sqrt.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 2770 /* sra */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 2774 /* srav */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 2779 /* srl */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 2783 /* srlv */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2788 /* store_ac_dsp */, MCK_ACRegsDSPAsm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2788 /* store_ac_dsp */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2801 /* store_ccond_dsp */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc, 2817 /* sub */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 2821 /* sub.d */, MCK_AFGR64Asm, 7 /* 0, 1, 2 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 2821 /* sub.d */, MCK_FGR64Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 2827 /* sub.s */, MCK_FGR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 2898 /* subu */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_NotMips64|Feature_HasStdEnc, 2959 /* suxc1 */, MCK_AFGR64Asm, 1 /* 0 */ },
  { Feature_NotMips64|Feature_HasStdEnc, 2959 /* suxc1 */, MCK_GPR32Asm, 10 /* 1, 3 */ },
  { Feature_HasMips64|Feature_HasStdEnc, 2959 /* suxc1 */, MCK_FGR64Asm, 1 /* 0 */ },
  { Feature_HasMips64|Feature_HasStdEnc, 2959 /* suxc1 */, MCK_GPR32Asm, 10 /* 1, 3 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2965 /* sw */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2965 /* sw */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2968 /* swc1 */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2968 /* swc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_IsN64|Feature_HasStdEnc, 2968 /* swc1 */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_IsN64|Feature_HasStdEnc, 2968 /* swc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2973 /* swl */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2973 /* swl */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2977 /* swr */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2977 /* swr */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasFPIdx|Feature_HasStdEnc, 2981 /* swxc1 */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_HasFPIdx|Feature_HasStdEnc, 2981 /* swxc1 */, MCK_GPR32Asm, 10 /* 1, 3 */ },
  { Feature_HasStdEnc, 3000 /* teq */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 3004 /* trunc.l.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 3014 /* trunc.l.s */, MCK_FGR32Asm, 2 /* 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 3014 /* trunc.l.s */, MCK_FGR64Asm, 1 /* 0 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 3024 /* trunc.w.d */, MCK_AFGR64Asm, 2 /* 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 3024 /* trunc.w.d */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 3024 /* trunc.w.d */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 3024 /* trunc.w.d */, MCK_FGR64Asm, 2 /* 1 */ },
  { Feature_HasStdEnc, 3034 /* trunc.w.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_HasSwap|Feature_HasStdEnc, 3050 /* wsbh */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 3055 /* xor */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { 0, 3055 /* xor */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 3059 /* xori */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 3059 /* xori */, MCK_GPR32Asm, 3 /* 0, 1 */ },
};

MipsAsmParser::OperandMatchResultTy MipsAsmParser::
tryCustomParseOperand(SmallVectorImpl<MCParsedAsmOperand*> &Operands,
                      unsigned MCK) {

  switch(MCK) {
  case MCK_ACRegsDSPAsm:
    return parseACRegsDSP(Operands);
  case MCK_AFGR64Asm:
    return parseAFGR64Regs(Operands);
  case MCK_CCRAsm:
    return parseCCRRegs(Operands);
  case MCK_FCCRegsAsm:
    return parseFCCRegs(Operands);
  case MCK_FGR32Asm:
    return parseFGR32Regs(Operands);
  case MCK_FGR64Asm:
    return parseFGR64Regs(Operands);
  case MCK_GPR32Asm:
    return parseGPR32(Operands);
  case MCK_GPR64Asm:
    return parseGPR64(Operands);
  case MCK_HW64RegsAsm:
    return parseHW64Regs(Operands);
  case MCK_HWRegsAsm:
    return parseHWRegs(Operands);
  case MCK_Mem:
    return parseMemOperand(Operands);
  default:
    return MatchOperand_NoMatch;
  }
  return MatchOperand_NoMatch;
}

MipsAsmParser::OperandMatchResultTy MipsAsmParser::
MatchOperandParserImpl(SmallVectorImpl<MCParsedAsmOperand*> &Operands,
                       StringRef Mnemonic) {
  // Get the current feature set.
  unsigned AvailableFeatures = getAvailableFeatures();

  // Get the next operand index.
  unsigned NextOpNum = Operands.size()-1;
  // Search the table.
  std::pair<const OperandMatchEntry*, const OperandMatchEntry*> MnemonicRange =
    std::equal_range(OperandMatchTable, OperandMatchTable+403, Mnemonic,
                     LessOpcodeOperand());

  if (MnemonicRange.first == MnemonicRange.second)
    return MatchOperand_NoMatch;

  for (const OperandMatchEntry *it = MnemonicRange.first,
       *ie = MnemonicRange.second; it != ie; ++it) {
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());

    // check if the available features match
    if ((AvailableFeatures & it->RequiredFeatures) != it->RequiredFeatures) {
      continue;
    }

    // check if the operand in question has a custom parser.
    if (!(it->OperandMask & (1 << NextOpNum)))
      continue;

    // call custom parse method to handle the operand
    OperandMatchResultTy Result = tryCustomParseOperand(Operands, it->Class);
    if (Result != MatchOperand_NoMatch)
      return Result;
  }

  // Okay, we had no match.
  return MatchOperand_NoMatch;
}

#endif // GET_MATCHER_IMPLEMENTATION

