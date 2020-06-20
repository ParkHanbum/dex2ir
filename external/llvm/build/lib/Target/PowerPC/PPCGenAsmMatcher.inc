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
#endif // GET_ASSEMBLER_HEADER_INFO


#ifdef GET_OPERAND_DIAGNOSTIC_TYPES
#undef GET_OPERAND_DIAGNOSTIC_TYPES

#endif // GET_OPERAND_DIAGNOSTIC_TYPES


#ifdef GET_REGISTER_MATCHER
#undef GET_REGISTER_MATCHER

// Flags for subtarget features that participate in instruction matching.
enum SubtargetFeatureFlag {
  Feature_None = 0
};

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(unsigned Val) {
  return "(unknown)";
}

#endif // GET_SUBTARGET_FEATURE_NAME


#ifdef GET_MATCHER_IMPLEMENTATION
#undef GET_MATCHER_IMPLEMENTATION

namespace {
enum OperatorConversionKind {
  CVT_Done,
  CVT_Reg,
  CVT_Tied,
  CVT_95_addRegG8RCOperands,
  CVT_95_addTLSRegOperands,
  CVT_95_addRegGPRCOperands,
  CVT_95_addRegG8RCNoX0Operands,
  CVT_95_addImmOperands,
  CVT_95_addRegGPRCNoR0Operands,
  CVT_95_addBranchTargetOperands,
  CVT_95_addRegCRBITRCOperands,
  CVT_imm_0,
  CVT_imm_8,
  CVT_imm_2,
  CVT_imm_10,
  CVT_imm_76,
  CVT_regCR0,
  CVT_95_addRegCRRCOperands,
  CVT_imm_79,
  CVT_imm_78,
  CVT_imm_4,
  CVT_imm_7,
  CVT_imm_6,
  CVT_imm_44,
  CVT_imm_47,
  CVT_imm_46,
  CVT_imm_36,
  CVT_imm_39,
  CVT_imm_38,
  CVT_imm_12,
  CVT_imm_15,
  CVT_imm_14,
  CVT_imm_68,
  CVT_imm_71,
  CVT_imm_70,
  CVT_imm_100,
  CVT_imm_103,
  CVT_imm_102,
  CVT_imm_108,
  CVT_imm_111,
  CVT_imm_110,
  CVT_imm_31,
  CVT_95_addRegGxRCNoR0Operands,
  CVT_95_addRegGxRCOperands,
  CVT_95_addRegF4RCOperands,
  CVT_95_addRegF8RCOperands,
  CVT_95_addRegVRRCOperands,
  CVT_imm_1,
  CVT_95_addCRBitMaskOperands,
  CVT_imm_268,
  CVT_imm_269,
  CVT_imm_255,
  CVT_imm_20,
  CVT_imm_5,
  CVT_imm_16,
  CVT_imm_24,
  CVT_regR0,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2,
  Convert__RegG8RC1_0__RegG8RC1_1__TLSReg1_2,
  Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2,
  Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3,
  Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3,
  Convert__RegG8RC1_0__RegG8RCNoX01_1__S16Imm1_2,
  Convert__RegGPRC1_0__RegGPRCNoR01_1__S16Imm1_2,
  Convert__RegG8RC1_0__RegG8RC1_1__S16Imm1_2,
  Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2,
  Convert__RegGPRC1_1__RegGPRC1_2__S16Imm1_3,
  Convert__RegG8RC1_0__RegG8RCNoX01_1__S17Imm1_2,
  Convert__RegGPRC1_0__RegGPRCNoR01_1__S17Imm1_2,
  Convert__RegG8RC1_0__RegG8RC1_1,
  Convert__RegGPRC1_0__RegGPRC1_1,
  Convert__RegG8RC1_1__RegG8RC1_2,
  Convert__RegGPRC1_1__RegGPRC1_2,
  Convert__RegG8RC1_1__RegG8RC1_2__U16Imm1_3,
  Convert__RegGPRC1_1__RegGPRC1_2__U16Imm1_3,
  Convert__DirectBr1_0,
  Convert__U5Imm1_0__RegCRBITRC1_1__CondBr1_2,
  Convert__U5Imm1_0__RegCRBITRC1_1__imm_0,
  Convert__U5Imm1_0__RegCRBITRC1_1__Imm1_2,
  Convert_NoOperands,
  Convert__CondBr1_0,
  Convert__imm_0__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_0__RegCRBITRC1_0__imm_0,
  Convert__imm_8__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_8__RegCRBITRC1_0__imm_0,
  Convert__imm_2__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_2__RegCRBITRC1_0__imm_0,
  Convert__imm_10__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_10__RegCRBITRC1_0__imm_0,
  Convert__imm_76__regCR0__CondBr1_0,
  Convert__imm_76__RegCRRC1_0__CondBr1_1,
  Convert__imm_79__regCR0__CondBr1_0,
  Convert__imm_79__RegCRRC1_0__CondBr1_1,
  Convert__imm_78__regCR0__CondBr1_0,
  Convert__imm_78__RegCRRC1_0__CondBr1_1,
  Convert__imm_76__regCR0,
  Convert__imm_76__RegCRRC1_0,
  Convert__imm_79__regCR0,
  Convert__imm_79__RegCRRC1_0,
  Convert__imm_78__regCR0,
  Convert__imm_78__RegCRRC1_0,
  Convert__imm_4__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_7__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_6__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_4__RegCRBITRC1_0__imm_0,
  Convert__imm_7__RegCRBITRC1_0__imm_0,
  Convert__imm_6__RegCRBITRC1_0__imm_0,
  Convert__imm_4__regCR0__CondBr1_0,
  Convert__imm_4__RegCRRC1_0__CondBr1_1,
  Convert__imm_7__regCR0__CondBr1_0,
  Convert__imm_7__RegCRRC1_0__CondBr1_1,
  Convert__imm_6__regCR0__CondBr1_0,
  Convert__imm_6__RegCRRC1_0__CondBr1_1,
  Convert__imm_4__regCR0,
  Convert__imm_4__RegCRRC1_0,
  Convert__imm_7__regCR0,
  Convert__imm_7__RegCRRC1_0,
  Convert__imm_6__regCR0,
  Convert__imm_6__RegCRRC1_0,
  Convert__imm_44__regCR0__CondBr1_0,
  Convert__imm_44__RegCRRC1_0__CondBr1_1,
  Convert__imm_47__regCR0__CondBr1_0,
  Convert__imm_47__RegCRRC1_0__CondBr1_1,
  Convert__imm_46__regCR0__CondBr1_0,
  Convert__imm_46__RegCRRC1_0__CondBr1_1,
  Convert__imm_44__regCR0,
  Convert__imm_44__RegCRRC1_0,
  Convert__imm_47__regCR0,
  Convert__imm_47__RegCRRC1_0,
  Convert__imm_46__regCR0,
  Convert__imm_46__RegCRRC1_0,
  Convert__DirectBr1_0__Imm1_1,
  Convert__imm_36__regCR0__CondBr1_0,
  Convert__imm_36__RegCRRC1_0__CondBr1_1,
  Convert__imm_39__regCR0__CondBr1_0,
  Convert__imm_39__RegCRRC1_0__CondBr1_1,
  Convert__imm_38__regCR0__CondBr1_0,
  Convert__imm_38__RegCRRC1_0__CondBr1_1,
  Convert__imm_36__regCR0,
  Convert__imm_36__RegCRRC1_0,
  Convert__imm_39__regCR0,
  Convert__imm_39__RegCRRC1_0,
  Convert__imm_38__regCR0,
  Convert__imm_38__RegCRRC1_0,
  Convert__imm_12__regCR0__CondBr1_0,
  Convert__imm_12__RegCRRC1_0__CondBr1_1,
  Convert__imm_15__regCR0__CondBr1_0,
  Convert__imm_15__RegCRRC1_0__CondBr1_1,
  Convert__imm_14__regCR0__CondBr1_0,
  Convert__imm_14__RegCRRC1_0__CondBr1_1,
  Convert__imm_12__regCR0,
  Convert__imm_12__RegCRRC1_0,
  Convert__imm_15__regCR0,
  Convert__imm_15__RegCRRC1_0,
  Convert__imm_14__regCR0,
  Convert__imm_14__RegCRRC1_0,
  Convert__imm_68__regCR0__CondBr1_0,
  Convert__imm_68__RegCRRC1_0__CondBr1_1,
  Convert__imm_71__regCR0__CondBr1_0,
  Convert__imm_71__RegCRRC1_0__CondBr1_1,
  Convert__imm_70__regCR0__CondBr1_0,
  Convert__imm_70__RegCRRC1_0__CondBr1_1,
  Convert__imm_68__regCR0,
  Convert__imm_68__RegCRRC1_0,
  Convert__imm_71__regCR0,
  Convert__imm_71__RegCRRC1_0,
  Convert__imm_70__regCR0,
  Convert__imm_70__RegCRRC1_0,
  Convert__imm_100__regCR0__CondBr1_0,
  Convert__imm_100__RegCRRC1_0__CondBr1_1,
  Convert__imm_103__regCR0__CondBr1_0,
  Convert__imm_103__RegCRRC1_0__CondBr1_1,
  Convert__imm_102__regCR0__CondBr1_0,
  Convert__imm_102__RegCRRC1_0__CondBr1_1,
  Convert__imm_100__regCR0,
  Convert__imm_100__RegCRRC1_0,
  Convert__imm_103__regCR0,
  Convert__imm_103__RegCRRC1_0,
  Convert__imm_102__regCR0,
  Convert__imm_102__RegCRRC1_0,
  Convert__imm_108__regCR0__CondBr1_0,
  Convert__imm_108__RegCRRC1_0__CondBr1_1,
  Convert__imm_111__regCR0__CondBr1_0,
  Convert__imm_111__RegCRRC1_0__CondBr1_1,
  Convert__imm_110__regCR0__CondBr1_0,
  Convert__imm_110__RegCRRC1_0__CondBr1_1,
  Convert__imm_108__regCR0,
  Convert__imm_108__RegCRRC1_0,
  Convert__imm_111__regCR0,
  Convert__imm_111__RegCRRC1_0,
  Convert__imm_110__regCR0,
  Convert__imm_110__RegCRRC1_0,
  Convert__imm_12__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_15__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_14__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_12__RegCRBITRC1_0__imm_0,
  Convert__imm_15__RegCRBITRC1_0__imm_0,
  Convert__imm_14__RegCRBITRC1_0__imm_0,
  Convert__RegG8RC1_0__RegG8RC1_1__imm_0__U6Imm1_2,
  Convert__RegG8RC1_1__RegG8RC1_2__imm_0__U6Imm1_3,
  Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3,
  Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4,
  Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3,
  Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4,
  Convert__RegGPRC1_0__RegGPRC1_1__imm_0__U5Imm1_2__imm_31,
  Convert__RegGPRC1_1__RegGPRC1_2__imm_0__U5Imm1_3__imm_31,
  Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2,
  Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3,
  Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2,
  Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3,
  Convert__RegCRRC1_0__RegGPRC1_2__RegGPRC1_3,
  Convert__RegCRRC1_0__RegG8RC1_2__RegG8RC1_3,
  Convert__regCR0__RegG8RC1_0__RegG8RC1_1,
  Convert__RegCRRC1_0__RegG8RC1_1__RegG8RC1_2,
  Convert__regCR0__RegG8RC1_0__S16Imm1_1,
  Convert__RegCRRC1_0__RegG8RC1_1__S16Imm1_2,
  Convert__RegCRRC1_0__RegGPRC1_2__S16Imm1_3,
  Convert__RegCRRC1_0__RegG8RC1_2__S16Imm1_3,
  Convert__regCR0__RegG8RC1_0__U16Imm1_1,
  Convert__RegCRRC1_0__RegG8RC1_1__U16Imm1_2,
  Convert__RegCRRC1_0__RegGPRC1_2__U16Imm1_3,
  Convert__RegCRRC1_0__RegG8RC1_2__U16Imm1_3,
  Convert__regCR0__RegGPRC1_0__RegGPRC1_1,
  Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2,
  Convert__regCR0__RegGPRC1_0__U16Imm1_1,
  Convert__RegCRRC1_0__RegGPRC1_1__U16Imm1_2,
  Convert__regCR0__RegGPRC1_0__S16Imm1_1,
  Convert__RegCRRC1_0__RegGPRC1_1__S16Imm1_2,
  Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2,
  Convert__RegCRBITRC1_0__RegCRBITRC1_0__RegCRBITRC1_0,
  Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_1,
  Convert__RegGxRCNoR01_0__RegGxRC1_1,
  Convert__RegG8RC1_0__RegGPRC1_1,
  Convert__RegG8RC1_1__RegGPRC1_2,
  Convert__RegF4RC1_0__RegF4RC1_1,
  Convert__RegF8RC1_0__RegF8RC1_1,
  Convert__RegF4RC1_1__RegF4RC1_2,
  Convert__RegF8RC1_1__RegF8RC1_2,
  Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2,
  Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3,
  Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2,
  Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3,
  Convert__RegF4RC1_0__RegF8RC1_1,
  Convert__RegF4RC1_1__RegF8RC1_2,
  Convert__RegCRRC1_0__RegF4RC1_1__RegF4RC1_2,
  Convert__RegCRRC1_0__RegF8RC1_1__RegF8RC1_2,
  Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3,
  Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4,
  Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3,
  Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4,
  Convert__RegF4RC1_0__RegF8RC1_1__RegF4RC1_2__RegF4RC1_3,
  Convert__RegF4RC1_1__RegF8RC1_2__RegF4RC1_3__RegF4RC1_4,
  Convert__RegG8RC1_0__RegG8RCNoX01_1__RegG8RC1_2__RegCRBITRC1_3,
  Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__RegCRBITRC1_3,
  Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegG8RC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegG8RC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegGPRC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegG8RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegGPRC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2,
  Convert__RegG8RC1_0__imm_0__DispRIX1_1__RegGxRCNoR01_2,
  Convert__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegF8RC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegF8RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegF4RC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegF4RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegG8RC1_0__S16Imm1_1,
  Convert__RegGPRC1_0__S16Imm1_1,
  Convert__RegG8RC1_0__S17Imm1_1,
  Convert__RegGPRC1_0__S17Imm1_1,
  Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__imm_1,
  Convert__RegCRRC1_0__RegCRRC1_1,
  Convert__RegG8RC1_0,
  Convert__RegGPRC1_0,
  Convert__RegF8RC1_0,
  Convert__RegG8RC1_0__CRBitMask1_1,
  Convert__RegGPRC1_0__CRBitMask1_1,
  Convert__RegGPRC1_0__Imm1_1,
  Convert__RegGPRC1_0__imm_268,
  Convert__RegGPRC1_0__imm_269,
  Convert__RegVRRC1_0,
  Convert__RegGPRC1_0__imm_1,
  Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_1,
  Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_2,
  Convert__imm_0,
  Convert__imm_255__RegG8RC1_0,
  Convert__Imm1_0__RegG8RC1_1,
  Convert__Imm1_0__RegGPRC1_1,
  Convert__U5Imm1_0,
  Convert__Imm1_0__RegF8RC1_1,
  Convert__CRBitMask1_0__RegG8RC1_1,
  Convert__CRBitMask1_0__RegGPRC1_1,
  Convert__imm_1__RegGPRC1_0,
  Convert__RegG8RC1_0__RegG8RC1_1__U16Imm1_2,
  Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2,
  Convert__imm_2,
  Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__U6Imm1_3,
  Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__U6Imm1_4,
  Convert__RegG8RC1_0__Tie0__RegG8RC1_1__U6Imm1_2__U6Imm1_3,
  Convert__RegG8RC1_1__Tie0__RegG8RC1_2__U6Imm1_3__U6Imm1_4,
  Convert__RegGPRC1_0__Tie0__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4,
  Convert__RegGPRC1_1__Tie0__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5,
  Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4,
  Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4,
  Convert__RegG8RC1_1__RegG8RC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5,
  Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5,
  Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4,
  Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__U5Imm1_4__U5Imm1_5,
  Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__imm_0,
  Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__imm_0,
  Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__imm_0,
  Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__imm_0,
  Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__imm_0__imm_31,
  Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__imm_0__imm_31,
  Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__imm_0__imm_31,
  Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__imm_0__imm_31,
  Convert__Imm1_0,
  Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2,
  Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3,
  Convert__imm_0__RegG8RC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__imm_0__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__imm_0__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__imm_0__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegG8RC1_1__RegGxRCNoR01_2__RegGxRC1_3,
  Convert__imm_0__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2,
  Convert__imm_0__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__imm_0__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__imm_0__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__imm_0__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegGPRC1_1__RegGxRCNoR01_2__RegGxRC1_3,
  Convert__RegG8RC1_0__RegG8RC1_2__RegG8RC1_1,
  Convert__RegG8RC1_1__RegG8RC1_3__RegG8RC1_2,
  Convert__U5Imm1_0__RegG8RC1_1__RegG8RC1_2,
  Convert__imm_4__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_4__RegG8RC1_0__S16Imm1_1,
  Convert__imm_12__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_12__RegG8RC1_0__S16Imm1_1,
  Convert__imm_8__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_8__RegG8RC1_0__S16Imm1_1,
  Convert__U5Imm1_0__RegG8RC1_1__S16Imm1_2,
  Convert__imm_20__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_20__RegG8RC1_0__S16Imm1_1,
  Convert__imm_5__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_5__RegG8RC1_0__S16Imm1_1,
  Convert__imm_1__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_1__RegG8RC1_0__S16Imm1_1,
  Convert__imm_6__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_6__RegG8RC1_0__S16Imm1_1,
  Convert__imm_2__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_2__RegG8RC1_0__S16Imm1_1,
  Convert__imm_16__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_16__RegG8RC1_0__S16Imm1_1,
  Convert__imm_24__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_24__RegG8RC1_0__S16Imm1_1,
  Convert__imm_31__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_31__RegG8RC1_0__S16Imm1_1,
  Convert__U5Imm1_0__RegGPRC1_1__RegGPRC1_2,
  Convert__imm_4__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_4__RegGPRC1_0__S16Imm1_1,
  Convert__imm_12__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_12__RegGPRC1_0__S16Imm1_1,
  Convert__imm_8__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_8__RegGPRC1_0__S16Imm1_1,
  Convert__U5Imm1_0__RegGPRC1_1__S16Imm1_2,
  Convert__imm_20__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_20__RegGPRC1_0__S16Imm1_1,
  Convert__imm_5__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_5__RegGPRC1_0__S16Imm1_1,
  Convert__imm_1__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_1__RegGPRC1_0__S16Imm1_1,
  Convert__imm_6__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_6__RegGPRC1_0__S16Imm1_1,
  Convert__imm_2__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_2__RegGPRC1_0__S16Imm1_1,
  Convert__imm_16__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_16__RegGPRC1_0__S16Imm1_1,
  Convert__imm_24__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_24__RegGPRC1_0__S16Imm1_1,
  Convert__imm_31__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_31__RegGPRC1_0__S16Imm1_1,
  Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2,
  Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1,
  Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3,
  Convert__RegVRRC1_0__RegVRRC1_1,
  Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3,
  Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__U5Imm1_3,
  Convert__RegVRRC1_0__S5Imm1_1,
  Convert__regR0__regR0__imm_0,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][13] = {
  // Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__TLSReg1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addTLSRegOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegG8RCOperands, 4, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RCNoX01_1__S16Imm1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCNoX0Operands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRCNoR01_1__S16Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCNoR0Operands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__S16Imm1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__S16Imm1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RCNoX01_1__S17Imm1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCNoX0Operands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRCNoR01_1__S17Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCNoR0Operands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__U16Imm1_3
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__U16Imm1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__DirectBr1_0
  { CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__U5Imm1_0__RegCRBITRC1_1__CondBr1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegCRBITRCOperands, 2, CVT_95_addBranchTargetOperands, 3, CVT_Done },
  // Convert__U5Imm1_0__RegCRBITRC1_1__imm_0
  { CVT_95_addImmOperands, 1, CVT_95_addRegCRBITRCOperands, 2, CVT_imm_0, 0, CVT_Done },
  // Convert__U5Imm1_0__RegCRBITRC1_1__Imm1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegCRBITRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__CondBr1_0
  { CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_0__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_0, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_0__RegCRBITRC1_0__imm_0
  { CVT_imm_0, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_0, 0, CVT_Done },
  // Convert__imm_8__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_8, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_8__RegCRBITRC1_0__imm_0
  { CVT_imm_8, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_0, 0, CVT_Done },
  // Convert__imm_2__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_2, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_2__RegCRBITRC1_0__imm_0
  { CVT_imm_2, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_0, 0, CVT_Done },
  // Convert__imm_10__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_10, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_10__RegCRBITRC1_0__imm_0
  { CVT_imm_10, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_0, 0, CVT_Done },
  // Convert__imm_76__regCR0__CondBr1_0
  { CVT_imm_76, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_76__RegCRRC1_0__CondBr1_1
  { CVT_imm_76, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_79__regCR0__CondBr1_0
  { CVT_imm_79, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_79__RegCRRC1_0__CondBr1_1
  { CVT_imm_79, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_78__regCR0__CondBr1_0
  { CVT_imm_78, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_78__RegCRRC1_0__CondBr1_1
  { CVT_imm_78, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_76__regCR0
  { CVT_imm_76, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_76__RegCRRC1_0
  { CVT_imm_76, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_79__regCR0
  { CVT_imm_79, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_79__RegCRRC1_0
  { CVT_imm_79, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_78__regCR0
  { CVT_imm_78, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_78__RegCRRC1_0
  { CVT_imm_78, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_4__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_4, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_7__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_7, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_6__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_6, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_4__RegCRBITRC1_0__imm_0
  { CVT_imm_4, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_0, 0, CVT_Done },
  // Convert__imm_7__RegCRBITRC1_0__imm_0
  { CVT_imm_7, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_0, 0, CVT_Done },
  // Convert__imm_6__RegCRBITRC1_0__imm_0
  { CVT_imm_6, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_0, 0, CVT_Done },
  // Convert__imm_4__regCR0__CondBr1_0
  { CVT_imm_4, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_4__RegCRRC1_0__CondBr1_1
  { CVT_imm_4, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_7__regCR0__CondBr1_0
  { CVT_imm_7, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_7__RegCRRC1_0__CondBr1_1
  { CVT_imm_7, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_6__regCR0__CondBr1_0
  { CVT_imm_6, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_6__RegCRRC1_0__CondBr1_1
  { CVT_imm_6, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_4__regCR0
  { CVT_imm_4, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_4__RegCRRC1_0
  { CVT_imm_4, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_7__regCR0
  { CVT_imm_7, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_7__RegCRRC1_0
  { CVT_imm_7, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_6__regCR0
  { CVT_imm_6, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_6__RegCRRC1_0
  { CVT_imm_6, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_44__regCR0__CondBr1_0
  { CVT_imm_44, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_44__RegCRRC1_0__CondBr1_1
  { CVT_imm_44, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_47__regCR0__CondBr1_0
  { CVT_imm_47, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_47__RegCRRC1_0__CondBr1_1
  { CVT_imm_47, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_46__regCR0__CondBr1_0
  { CVT_imm_46, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_46__RegCRRC1_0__CondBr1_1
  { CVT_imm_46, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_44__regCR0
  { CVT_imm_44, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_44__RegCRRC1_0
  { CVT_imm_44, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_47__regCR0
  { CVT_imm_47, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_47__RegCRRC1_0
  { CVT_imm_47, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_46__regCR0
  { CVT_imm_46, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_46__RegCRRC1_0
  { CVT_imm_46, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__DirectBr1_0__Imm1_1
  { CVT_95_addBranchTargetOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_36__regCR0__CondBr1_0
  { CVT_imm_36, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_36__RegCRRC1_0__CondBr1_1
  { CVT_imm_36, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_39__regCR0__CondBr1_0
  { CVT_imm_39, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_39__RegCRRC1_0__CondBr1_1
  { CVT_imm_39, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_38__regCR0__CondBr1_0
  { CVT_imm_38, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_38__RegCRRC1_0__CondBr1_1
  { CVT_imm_38, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_36__regCR0
  { CVT_imm_36, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_36__RegCRRC1_0
  { CVT_imm_36, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_39__regCR0
  { CVT_imm_39, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_39__RegCRRC1_0
  { CVT_imm_39, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_38__regCR0
  { CVT_imm_38, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_38__RegCRRC1_0
  { CVT_imm_38, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_12__regCR0__CondBr1_0
  { CVT_imm_12, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_12__RegCRRC1_0__CondBr1_1
  { CVT_imm_12, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_15__regCR0__CondBr1_0
  { CVT_imm_15, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_15__RegCRRC1_0__CondBr1_1
  { CVT_imm_15, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_14__regCR0__CondBr1_0
  { CVT_imm_14, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_14__RegCRRC1_0__CondBr1_1
  { CVT_imm_14, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_12__regCR0
  { CVT_imm_12, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_12__RegCRRC1_0
  { CVT_imm_12, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_15__regCR0
  { CVT_imm_15, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_15__RegCRRC1_0
  { CVT_imm_15, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_14__regCR0
  { CVT_imm_14, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_14__RegCRRC1_0
  { CVT_imm_14, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_68__regCR0__CondBr1_0
  { CVT_imm_68, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_68__RegCRRC1_0__CondBr1_1
  { CVT_imm_68, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_71__regCR0__CondBr1_0
  { CVT_imm_71, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_71__RegCRRC1_0__CondBr1_1
  { CVT_imm_71, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_70__regCR0__CondBr1_0
  { CVT_imm_70, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_70__RegCRRC1_0__CondBr1_1
  { CVT_imm_70, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_68__regCR0
  { CVT_imm_68, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_68__RegCRRC1_0
  { CVT_imm_68, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_71__regCR0
  { CVT_imm_71, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_71__RegCRRC1_0
  { CVT_imm_71, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_70__regCR0
  { CVT_imm_70, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_70__RegCRRC1_0
  { CVT_imm_70, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_100__regCR0__CondBr1_0
  { CVT_imm_100, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_100__RegCRRC1_0__CondBr1_1
  { CVT_imm_100, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_103__regCR0__CondBr1_0
  { CVT_imm_103, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_103__RegCRRC1_0__CondBr1_1
  { CVT_imm_103, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_102__regCR0__CondBr1_0
  { CVT_imm_102, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_102__RegCRRC1_0__CondBr1_1
  { CVT_imm_102, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_100__regCR0
  { CVT_imm_100, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_100__RegCRRC1_0
  { CVT_imm_100, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_103__regCR0
  { CVT_imm_103, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_103__RegCRRC1_0
  { CVT_imm_103, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_102__regCR0
  { CVT_imm_102, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_102__RegCRRC1_0
  { CVT_imm_102, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_108__regCR0__CondBr1_0
  { CVT_imm_108, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_108__RegCRRC1_0__CondBr1_1
  { CVT_imm_108, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_111__regCR0__CondBr1_0
  { CVT_imm_111, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_111__RegCRRC1_0__CondBr1_1
  { CVT_imm_111, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_110__regCR0__CondBr1_0
  { CVT_imm_110, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_110__RegCRRC1_0__CondBr1_1
  { CVT_imm_110, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_108__regCR0
  { CVT_imm_108, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_108__RegCRRC1_0
  { CVT_imm_108, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_111__regCR0
  { CVT_imm_111, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_111__RegCRRC1_0
  { CVT_imm_111, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_110__regCR0
  { CVT_imm_110, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_110__RegCRRC1_0
  { CVT_imm_110, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_12__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_12, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_15__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_15, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_14__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_14, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_12__RegCRBITRC1_0__imm_0
  { CVT_imm_12, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_0, 0, CVT_Done },
  // Convert__imm_15__RegCRBITRC1_0__imm_0
  { CVT_imm_15, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_0, 0, CVT_Done },
  // Convert__imm_14__RegCRBITRC1_0__imm_0
  { CVT_imm_14, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_0, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__imm_0__U6Imm1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_imm_0, 0, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__imm_0__U6Imm1_3
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_imm_0, 0, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__imm_0__U5Imm1_2__imm_31
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_imm_0, 0, CVT_95_addImmOperands, 3, CVT_imm_31, 0, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__imm_0__U5Imm1_3__imm_31
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_imm_0, 0, CVT_95_addImmOperands, 4, CVT_imm_31, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_2__RegGPRC1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_2__RegG8RC1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegG8RCOperands, 4, CVT_Done },
  // Convert__regCR0__RegG8RC1_0__RegG8RC1_1
  { CVT_regCR0, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_1__RegG8RC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__regCR0__RegG8RC1_0__S16Imm1_1
  { CVT_regCR0, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_1__S16Imm1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_2__S16Imm1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_2__S16Imm1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__regCR0__RegG8RC1_0__U16Imm1_1
  { CVT_regCR0, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_1__U16Imm1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_2__U16Imm1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_2__U16Imm1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__regCR0__RegGPRC1_0__RegGPRC1_1
  { CVT_regCR0, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__regCR0__RegGPRC1_0__U16Imm1_1
  { CVT_regCR0, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_1__U16Imm1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__regCR0__RegGPRC1_0__S16Imm1_1
  { CVT_regCR0, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_1__S16Imm1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2
  { CVT_95_addRegCRBITRCOperands, 1, CVT_95_addRegCRBITRCOperands, 2, CVT_95_addRegCRBITRCOperands, 3, CVT_Done },
  // Convert__RegCRBITRC1_0__RegCRBITRC1_0__RegCRBITRC1_0
  { CVT_95_addRegCRBITRCOperands, 1, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addRegCRBITRCOperands, 1, CVT_Done },
  // Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_1
  { CVT_95_addRegCRBITRCOperands, 1, CVT_95_addRegCRBITRCOperands, 2, CVT_95_addRegCRBITRCOperands, 2, CVT_Done },
  // Convert__RegGxRCNoR01_0__RegGxRC1_1
  { CVT_95_addRegGxRCNoR0Operands, 1, CVT_95_addRegGxRCOperands, 2, CVT_Done },
  // Convert__RegG8RC1_0__RegGPRC1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__RegG8RC1_1__RegGPRC1_2
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__RegF4RC1_0__RegF4RC1_1
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegF4RCOperands, 2, CVT_Done },
  // Convert__RegF8RC1_0__RegF8RC1_1
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_Done },
  // Convert__RegF4RC1_1__RegF4RC1_2
  { CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_Done },
  // Convert__RegF8RC1_1__RegF8RC1_2
  { CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_Done },
  // Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_Done },
  // Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3
  { CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_95_addRegF8RCOperands, 4, CVT_Done },
  // Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_Done },
  // Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3
  { CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_95_addRegF4RCOperands, 4, CVT_Done },
  // Convert__RegF4RC1_0__RegF8RC1_1
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_Done },
  // Convert__RegF4RC1_1__RegF8RC1_2
  { CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegF4RC1_1__RegF4RC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegF8RC1_1__RegF8RC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_Done },
  // Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_95_addRegF8RCOperands, 4, CVT_Done },
  // Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4
  { CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_95_addRegF8RCOperands, 4, CVT_95_addRegF8RCOperands, 5, CVT_Done },
  // Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_95_addRegF4RCOperands, 4, CVT_Done },
  // Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4
  { CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_95_addRegF4RCOperands, 4, CVT_95_addRegF4RCOperands, 5, CVT_Done },
  // Convert__RegF4RC1_0__RegF8RC1_1__RegF4RC1_2__RegF4RC1_3
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_95_addRegF4RCOperands, 4, CVT_Done },
  // Convert__RegF4RC1_1__RegF8RC1_2__RegF4RC1_3__RegF4RC1_4
  { CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_95_addRegF4RCOperands, 4, CVT_95_addRegF4RCOperands, 5, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RCNoX01_1__RegG8RC1_2__RegCRBITRC1_3
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCNoX0Operands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegCRBITRCOperands, 4, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__RegCRBITRC1_3
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCNoR0Operands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegCRBITRCOperands, 4, CVT_Done },
  // Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegG8RC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegG8RC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_0, 0, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegGPRC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_0, 0, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegG8RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_0, 0, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_0, 0, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegG8RC1_0__imm_0__DispRIX1_1__RegGxRCNoR01_2
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_0, 0, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegF8RC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegF8RCOperands, 1, CVT_imm_0, 0, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegF8RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegF8RCOperands, 1, CVT_imm_0, 0, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegF4RC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegF4RCOperands, 1, CVT_imm_0, 0, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegF4RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegF4RCOperands, 1, CVT_imm_0, 0, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__S16Imm1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__S16Imm1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegG8RC1_0__S17Imm1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__S17Imm1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__imm_1
  { CVT_imm_1, 0, CVT_Done },
  // Convert__RegCRRC1_0__RegCRRC1_1
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegCRRCOperands, 2, CVT_Done },
  // Convert__RegG8RC1_0
  { CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_0
  { CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegF8RC1_0
  { CVT_95_addRegF8RCOperands, 1, CVT_Done },
  // Convert__RegG8RC1_0__CRBitMask1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addCRBitMaskOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__CRBitMask1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addCRBitMaskOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__Imm1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__imm_268
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_268, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_269
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_269, 0, CVT_Done },
  // Convert__RegVRRC1_0
  { CVT_95_addRegVRRCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_0__imm_1
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_1, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_2
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__imm_0
  { CVT_imm_0, 0, CVT_Done },
  // Convert__imm_255__RegG8RC1_0
  { CVT_imm_255, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__Imm1_0__RegG8RC1_1
  { CVT_95_addImmOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__Imm1_0__RegGPRC1_1
  { CVT_95_addImmOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__U5Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_0__RegF8RC1_1
  { CVT_95_addImmOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_Done },
  // Convert__CRBitMask1_0__RegG8RC1_1
  { CVT_95_addCRBitMaskOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__CRBitMask1_0__RegGPRC1_1
  { CVT_95_addCRBitMaskOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_1__RegGPRC1_0
  { CVT_imm_1, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__U16Imm1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__imm_2
  { CVT_imm_2, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__U6Imm1_3
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__U6Imm1_4
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegG8RC1_0__Tie0__RegG8RC1_1__U6Imm1_2__U6Imm1_3
  { CVT_95_addRegG8RCOperands, 1, CVT_Tied, 0, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegG8RC1_1__Tie0__RegG8RC1_2__U6Imm1_3__U6Imm1_4
  { CVT_95_addRegG8RCOperands, 2, CVT_Tied, 0, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_0__Tie0__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4
  { CVT_95_addRegGPRCOperands, 1, CVT_Tied, 0, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_1__Tie0__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5
  { CVT_95_addRegGPRCOperands, 2, CVT_Tied, 0, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__U5Imm1_4__U5Imm1_5
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__imm_0
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_imm_0, 0, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__imm_0
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_imm_0, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__imm_0
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_imm_0, 0, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__imm_0
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_imm_0, 0, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__imm_0__imm_31
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_imm_0, 0, CVT_imm_31, 0, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__imm_0__imm_31
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_imm_0, 0, CVT_imm_31, 0, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__imm_0__imm_31
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_imm_0, 0, CVT_imm_31, 0, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__imm_0__imm_31
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_imm_0, 0, CVT_imm_31, 0, CVT_Done },
  // Convert__Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_Done },
  // Convert__imm_0__RegG8RC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_imm_0, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__imm_0__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_imm_0, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__imm_0__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_imm_0, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__imm_0__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_imm_0, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_1__RegGxRCNoR01_2__RegGxRC1_3
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_95_addRegGxRCOperands, 4, CVT_Done },
  // Convert__imm_0__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2
  { CVT_imm_0, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__imm_0__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_imm_0, 0, CVT_95_addRegF8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__imm_0__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_imm_0, 0, CVT_95_addRegF8RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__imm_0__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_imm_0, 0, CVT_95_addRegF4RCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__imm_0__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_imm_0, 0, CVT_95_addRegF4RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_1__RegGxRCNoR01_2__RegGxRC1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_95_addRegGxRCOperands, 4, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_2__RegG8RC1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_3__RegG8RC1_2
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 4, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__U5Imm1_0__RegG8RC1_1__RegG8RC1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__imm_4__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_4, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_4__RegG8RC1_0__S16Imm1_1
  { CVT_imm_4, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_12__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_12, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_12__RegG8RC1_0__S16Imm1_1
  { CVT_imm_12, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_8__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_8, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_8__RegG8RC1_0__S16Imm1_1
  { CVT_imm_8, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__U5Imm1_0__RegG8RC1_1__S16Imm1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__imm_20__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_20, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_20__RegG8RC1_0__S16Imm1_1
  { CVT_imm_20, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_5__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_5, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_5__RegG8RC1_0__S16Imm1_1
  { CVT_imm_5, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_1__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_1, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_1__RegG8RC1_0__S16Imm1_1
  { CVT_imm_1, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_6__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_6, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_6__RegG8RC1_0__S16Imm1_1
  { CVT_imm_6, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_2__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_2, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_2__RegG8RC1_0__S16Imm1_1
  { CVT_imm_2, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_16__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_16, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_16__RegG8RC1_0__S16Imm1_1
  { CVT_imm_16, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_24__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_24, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_24__RegG8RC1_0__S16Imm1_1
  { CVT_imm_24, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_31__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_31, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_31__RegG8RC1_0__S16Imm1_1
  { CVT_imm_31, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__U5Imm1_0__RegGPRC1_1__RegGPRC1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__imm_4__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_4, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_4__RegGPRC1_0__S16Imm1_1
  { CVT_imm_4, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_12__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_12, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_12__RegGPRC1_0__S16Imm1_1
  { CVT_imm_12, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_8__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_8, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_8__RegGPRC1_0__S16Imm1_1
  { CVT_imm_8, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__U5Imm1_0__RegGPRC1_1__S16Imm1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__imm_20__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_20, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_20__RegGPRC1_0__S16Imm1_1
  { CVT_imm_20, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_5__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_5, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_5__RegGPRC1_0__S16Imm1_1
  { CVT_imm_5, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_1__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_1, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_1__RegGPRC1_0__S16Imm1_1
  { CVT_imm_1, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_6__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_6, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_6__RegGPRC1_0__S16Imm1_1
  { CVT_imm_6, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_2__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_2, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_2__RegGPRC1_0__S16Imm1_1
  { CVT_imm_2, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_16__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_16, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_16__RegGPRC1_0__S16Imm1_1
  { CVT_imm_16, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_24__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_24, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_24__RegGPRC1_0__S16Imm1_1
  { CVT_imm_24, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_31__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_31, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_31__RegGPRC1_0__S16Imm1_1
  { CVT_imm_31, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_Done },
  // Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addImmOperands, 3, CVT_95_addRegVRRCOperands, 2, CVT_Done },
  // Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3
  { CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_95_addRegVRRCOperands, 4, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_95_addRegVRRCOperands, 4, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__U5Imm1_3
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegVRRC1_0__S5Imm1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__regR0__regR0__imm_0
  { CVT_regR0, 0, CVT_regR0, 0, CVT_imm_0, 0, CVT_Done },
};

void PPCAsmParser::
convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                const SmallVectorImpl<MCParsedAsmOperand*> &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  Inst.setOpcode(Opcode);
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      static_cast<PPCOperand*>(Operands[*(p + 1)])->addRegOperands(Inst, 1);
      break;
    case CVT_Tied:
      Inst.addOperand(Inst.getOperand(*(p + 1)));
      break;
    case CVT_95_addRegG8RCOperands:
      static_cast<PPCOperand*>(Operands[*(p + 1)])->addRegG8RCOperands(Inst, 1);
      break;
    case CVT_95_addTLSRegOperands:
      static_cast<PPCOperand*>(Operands[*(p + 1)])->addTLSRegOperands(Inst, 1);
      break;
    case CVT_95_addRegGPRCOperands:
      static_cast<PPCOperand*>(Operands[*(p + 1)])->addRegGPRCOperands(Inst, 1);
      break;
    case CVT_95_addRegG8RCNoX0Operands:
      static_cast<PPCOperand*>(Operands[*(p + 1)])->addRegG8RCNoX0Operands(Inst, 1);
      break;
    case CVT_95_addImmOperands:
      static_cast<PPCOperand*>(Operands[*(p + 1)])->addImmOperands(Inst, 1);
      break;
    case CVT_95_addRegGPRCNoR0Operands:
      static_cast<PPCOperand*>(Operands[*(p + 1)])->addRegGPRCNoR0Operands(Inst, 1);
      break;
    case CVT_95_addBranchTargetOperands:
      static_cast<PPCOperand*>(Operands[*(p + 1)])->addBranchTargetOperands(Inst, 1);
      break;
    case CVT_95_addRegCRBITRCOperands:
      static_cast<PPCOperand*>(Operands[*(p + 1)])->addRegCRBITRCOperands(Inst, 1);
      break;
    case CVT_imm_0:
      Inst.addOperand(MCOperand::CreateImm(0));
      break;
    case CVT_imm_8:
      Inst.addOperand(MCOperand::CreateImm(8));
      break;
    case CVT_imm_2:
      Inst.addOperand(MCOperand::CreateImm(2));
      break;
    case CVT_imm_10:
      Inst.addOperand(MCOperand::CreateImm(10));
      break;
    case CVT_imm_76:
      Inst.addOperand(MCOperand::CreateImm(76));
      break;
    case CVT_regCR0:
      Inst.addOperand(MCOperand::CreateReg(PPC::CR0));
      break;
    case CVT_95_addRegCRRCOperands:
      static_cast<PPCOperand*>(Operands[*(p + 1)])->addRegCRRCOperands(Inst, 1);
      break;
    case CVT_imm_79:
      Inst.addOperand(MCOperand::CreateImm(79));
      break;
    case CVT_imm_78:
      Inst.addOperand(MCOperand::CreateImm(78));
      break;
    case CVT_imm_4:
      Inst.addOperand(MCOperand::CreateImm(4));
      break;
    case CVT_imm_7:
      Inst.addOperand(MCOperand::CreateImm(7));
      break;
    case CVT_imm_6:
      Inst.addOperand(MCOperand::CreateImm(6));
      break;
    case CVT_imm_44:
      Inst.addOperand(MCOperand::CreateImm(44));
      break;
    case CVT_imm_47:
      Inst.addOperand(MCOperand::CreateImm(47));
      break;
    case CVT_imm_46:
      Inst.addOperand(MCOperand::CreateImm(46));
      break;
    case CVT_imm_36:
      Inst.addOperand(MCOperand::CreateImm(36));
      break;
    case CVT_imm_39:
      Inst.addOperand(MCOperand::CreateImm(39));
      break;
    case CVT_imm_38:
      Inst.addOperand(MCOperand::CreateImm(38));
      break;
    case CVT_imm_12:
      Inst.addOperand(MCOperand::CreateImm(12));
      break;
    case CVT_imm_15:
      Inst.addOperand(MCOperand::CreateImm(15));
      break;
    case CVT_imm_14:
      Inst.addOperand(MCOperand::CreateImm(14));
      break;
    case CVT_imm_68:
      Inst.addOperand(MCOperand::CreateImm(68));
      break;
    case CVT_imm_71:
      Inst.addOperand(MCOperand::CreateImm(71));
      break;
    case CVT_imm_70:
      Inst.addOperand(MCOperand::CreateImm(70));
      break;
    case CVT_imm_100:
      Inst.addOperand(MCOperand::CreateImm(100));
      break;
    case CVT_imm_103:
      Inst.addOperand(MCOperand::CreateImm(103));
      break;
    case CVT_imm_102:
      Inst.addOperand(MCOperand::CreateImm(102));
      break;
    case CVT_imm_108:
      Inst.addOperand(MCOperand::CreateImm(108));
      break;
    case CVT_imm_111:
      Inst.addOperand(MCOperand::CreateImm(111));
      break;
    case CVT_imm_110:
      Inst.addOperand(MCOperand::CreateImm(110));
      break;
    case CVT_imm_31:
      Inst.addOperand(MCOperand::CreateImm(31));
      break;
    case CVT_95_addRegGxRCNoR0Operands:
      static_cast<PPCOperand*>(Operands[*(p + 1)])->addRegGxRCNoR0Operands(Inst, 1);
      break;
    case CVT_95_addRegGxRCOperands:
      static_cast<PPCOperand*>(Operands[*(p + 1)])->addRegGxRCOperands(Inst, 1);
      break;
    case CVT_95_addRegF4RCOperands:
      static_cast<PPCOperand*>(Operands[*(p + 1)])->addRegF4RCOperands(Inst, 1);
      break;
    case CVT_95_addRegF8RCOperands:
      static_cast<PPCOperand*>(Operands[*(p + 1)])->addRegF8RCOperands(Inst, 1);
      break;
    case CVT_95_addRegVRRCOperands:
      static_cast<PPCOperand*>(Operands[*(p + 1)])->addRegVRRCOperands(Inst, 1);
      break;
    case CVT_imm_1:
      Inst.addOperand(MCOperand::CreateImm(1));
      break;
    case CVT_95_addCRBitMaskOperands:
      static_cast<PPCOperand*>(Operands[*(p + 1)])->addCRBitMaskOperands(Inst, 1);
      break;
    case CVT_imm_268:
      Inst.addOperand(MCOperand::CreateImm(268));
      break;
    case CVT_imm_269:
      Inst.addOperand(MCOperand::CreateImm(269));
      break;
    case CVT_imm_255:
      Inst.addOperand(MCOperand::CreateImm(255));
      break;
    case CVT_imm_20:
      Inst.addOperand(MCOperand::CreateImm(20));
      break;
    case CVT_imm_5:
      Inst.addOperand(MCOperand::CreateImm(5));
      break;
    case CVT_imm_16:
      Inst.addOperand(MCOperand::CreateImm(16));
      break;
    case CVT_imm_24:
      Inst.addOperand(MCOperand::CreateImm(24));
      break;
    case CVT_regR0:
      Inst.addOperand(MCOperand::CreateReg(PPC::R0));
      break;
    }
  }
}

void PPCAsmParser::
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
    case CVT_95_addRegG8RCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addTLSRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegGPRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegG8RCNoX0Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegGPRCNoR0Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addBranchTargetOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegCRBITRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_8:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_2:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_10:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_76:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_regCR0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addRegCRRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_79:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_78:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_4:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_7:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_6:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_44:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_47:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_46:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_36:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_39:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_38:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_12:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_15:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_14:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_68:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_71:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_70:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_100:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_103:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_102:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_108:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_111:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_110:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_31:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addRegGxRCNoR0Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegGxRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegF4RCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegF8RCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegVRRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_1:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addCRBitMaskOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_268:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_269:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_255:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_20:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_5:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_16:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_24:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_regR0:
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
  MCK__DOT_, // '.'
  MCK_0, // '0'
  MCK_1, // '1'
  MCK_VRRC, // register class 'VRRC'
  MCK_Reg3, // derived register class
  MCK_G8RC, // register class 'G8RC'
  MCK_G8RC_NOX0, // register class 'G8RC_NOX0'
  MCK_Reg6, // derived register class
  MCK_GPRC, // register class 'GPRC'
  MCK_GPRC_NOR0, // register class 'GPRC_NOR0'
  MCK_F4RC, // register class 'F4RC,F8RC'
  MCK_CRBITRC, // register class 'CRBITRC'
  MCK_CRRC, // register class 'CRRC'
  MCK_CTRRC, // register class 'CTRRC'
  MCK_CTRRC8, // register class 'CTRRC8'
  MCK_VRSAVERC, // register class 'VRSAVERC'
  MCK_CARRYRC, // register class 'CARRYRC'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_CRBitMask, // user defined class 'PPCCRBitMaskOperand'
  MCK_CondBr, // user defined class 'PPCCondBrAsmOperand'
  MCK_DirectBr, // user defined class 'PPCDirectBrAsmOperand'
  MCK_DispRI, // user defined class 'PPCDispRIOperand'
  MCK_DispRIX, // user defined class 'PPCDispRIXOperand'
  MCK_RegCRBITRC, // user defined class 'PPCRegCRBITRCAsmOperand'
  MCK_RegCRRC, // user defined class 'PPCRegCRRCAsmOperand'
  MCK_RegF4RC, // user defined class 'PPCRegF4RCAsmOperand'
  MCK_RegF8RC, // user defined class 'PPCRegF8RCAsmOperand'
  MCK_RegG8RC, // user defined class 'PPCRegG8RCAsmOperand'
  MCK_RegG8RCNoX0, // user defined class 'PPCRegG8RCNoX0AsmOperand'
  MCK_RegGPRC, // user defined class 'PPCRegGPRCAsmOperand'
  MCK_RegGPRCNoR0, // user defined class 'PPCRegGPRCNoR0AsmOperand'
  MCK_RegGxRCNoR0, // user defined class 'PPCRegGxRCNoR0Operand'
  MCK_RegGxRC, // user defined class 'PPCRegGxRCOperand'
  MCK_RegVRRC, // user defined class 'PPCRegVRRCAsmOperand'
  MCK_S16Imm, // user defined class 'PPCS16ImmAsmOperand'
  MCK_S17Imm, // user defined class 'PPCS17ImmAsmOperand'
  MCK_S5Imm, // user defined class 'PPCS5ImmAsmOperand'
  MCK_TLSReg, // user defined class 'PPCTLSRegOperand'
  MCK_U16Imm, // user defined class 'PPCU16ImmAsmOperand'
  MCK_U5Imm, // user defined class 'PPCU5ImmAsmOperand'
  MCK_U6Imm, // user defined class 'PPCU6ImmAsmOperand'
  NumMatchClassKinds
};

}

static MatchClassKind matchTokenString(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 1:	 // 3 strings to match.
    switch (Name[0]) {
    default: break;
    case '.':	 // 1 string to match.
      return MCK__DOT_;	 // "."
    case '0':	 // 1 string to match.
      return MCK_0;	 // "0"
    case '1':	 // 1 string to match.
      return MCK_1;	 // "1"
    }
    break;
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

  case MCK_Reg3:
    switch (B) {
    default: return false;
    case MCK_G8RC: return true;
    case MCK_G8RC_NOX0: return true;
    }

  case MCK_Reg6:
    switch (B) {
    default: return false;
    case MCK_GPRC: return true;
    case MCK_GPRC_NOR0: return true;
    }
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand *GOp, MatchClassKind Kind) {
  PPCOperand &Operand = *(PPCOperand*)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken())
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  // 'Imm' class
  if (Kind == MCK_Imm) {
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'CRBitMask' class
  if (Kind == MCK_CRBitMask) {
    if (Operand.isCRBitMask())
      return MCTargetAsmParser::Match_Success;
  }

  // 'CondBr' class
  if (Kind == MCK_CondBr) {
    if (Operand.isCondBr())
      return MCTargetAsmParser::Match_Success;
  }

  // 'DirectBr' class
  if (Kind == MCK_DirectBr) {
    if (Operand.isDirectBr())
      return MCTargetAsmParser::Match_Success;
  }

  // 'DispRI' class
  if (Kind == MCK_DispRI) {
    if (Operand.isS16Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'DispRIX' class
  if (Kind == MCK_DispRIX) {
    if (Operand.isS16ImmX4())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegCRBITRC' class
  if (Kind == MCK_RegCRBITRC) {
    if (Operand.isCRBitNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegCRRC' class
  if (Kind == MCK_RegCRRC) {
    if (Operand.isCCRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegF4RC' class
  if (Kind == MCK_RegF4RC) {
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegF8RC' class
  if (Kind == MCK_RegF8RC) {
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegG8RC' class
  if (Kind == MCK_RegG8RC) {
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegG8RCNoX0' class
  if (Kind == MCK_RegG8RCNoX0) {
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegGPRC' class
  if (Kind == MCK_RegGPRC) {
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegGPRCNoR0' class
  if (Kind == MCK_RegGPRCNoR0) {
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegGxRCNoR0' class
  if (Kind == MCK_RegGxRCNoR0) {
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegGxRC' class
  if (Kind == MCK_RegGxRC) {
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegVRRC' class
  if (Kind == MCK_RegVRRC) {
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'S16Imm' class
  if (Kind == MCK_S16Imm) {
    if (Operand.isS16Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'S17Imm' class
  if (Kind == MCK_S17Imm) {
    if (Operand.isS17Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'S5Imm' class
  if (Kind == MCK_S5Imm) {
    if (Operand.isS5Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'TLSReg' class
  if (Kind == MCK_TLSReg) {
    if (Operand.isTLSReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U16Imm' class
  if (Kind == MCK_U16Imm) {
    if (Operand.isU16Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U5Imm' class
  if (Kind == MCK_U5Imm) {
    if (Operand.isU5Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U6Imm' class
  if (Kind == MCK_U6Imm) {
    if (Operand.isU6Imm())
      return MCTargetAsmParser::Match_Success;
  }

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case PPC::R0: OpKind = MCK_GPRC; break;
    case PPC::R1: OpKind = MCK_Reg6; break;
    case PPC::R2: OpKind = MCK_Reg6; break;
    case PPC::R3: OpKind = MCK_Reg6; break;
    case PPC::R4: OpKind = MCK_Reg6; break;
    case PPC::R5: OpKind = MCK_Reg6; break;
    case PPC::R6: OpKind = MCK_Reg6; break;
    case PPC::R7: OpKind = MCK_Reg6; break;
    case PPC::R8: OpKind = MCK_Reg6; break;
    case PPC::R9: OpKind = MCK_Reg6; break;
    case PPC::R10: OpKind = MCK_Reg6; break;
    case PPC::R11: OpKind = MCK_Reg6; break;
    case PPC::R12: OpKind = MCK_Reg6; break;
    case PPC::R13: OpKind = MCK_Reg6; break;
    case PPC::R14: OpKind = MCK_Reg6; break;
    case PPC::R15: OpKind = MCK_Reg6; break;
    case PPC::R16: OpKind = MCK_Reg6; break;
    case PPC::R17: OpKind = MCK_Reg6; break;
    case PPC::R18: OpKind = MCK_Reg6; break;
    case PPC::R19: OpKind = MCK_Reg6; break;
    case PPC::R20: OpKind = MCK_Reg6; break;
    case PPC::R21: OpKind = MCK_Reg6; break;
    case PPC::R22: OpKind = MCK_Reg6; break;
    case PPC::R23: OpKind = MCK_Reg6; break;
    case PPC::R24: OpKind = MCK_Reg6; break;
    case PPC::R25: OpKind = MCK_Reg6; break;
    case PPC::R26: OpKind = MCK_Reg6; break;
    case PPC::R27: OpKind = MCK_Reg6; break;
    case PPC::R28: OpKind = MCK_Reg6; break;
    case PPC::R29: OpKind = MCK_Reg6; break;
    case PPC::R30: OpKind = MCK_Reg6; break;
    case PPC::R31: OpKind = MCK_Reg6; break;
    case PPC::X0: OpKind = MCK_G8RC; break;
    case PPC::X1: OpKind = MCK_Reg3; break;
    case PPC::X2: OpKind = MCK_Reg3; break;
    case PPC::X3: OpKind = MCK_Reg3; break;
    case PPC::X4: OpKind = MCK_Reg3; break;
    case PPC::X5: OpKind = MCK_Reg3; break;
    case PPC::X6: OpKind = MCK_Reg3; break;
    case PPC::X7: OpKind = MCK_Reg3; break;
    case PPC::X8: OpKind = MCK_Reg3; break;
    case PPC::X9: OpKind = MCK_Reg3; break;
    case PPC::X10: OpKind = MCK_Reg3; break;
    case PPC::X11: OpKind = MCK_Reg3; break;
    case PPC::X12: OpKind = MCK_Reg3; break;
    case PPC::X13: OpKind = MCK_Reg3; break;
    case PPC::X14: OpKind = MCK_Reg3; break;
    case PPC::X15: OpKind = MCK_Reg3; break;
    case PPC::X16: OpKind = MCK_Reg3; break;
    case PPC::X17: OpKind = MCK_Reg3; break;
    case PPC::X18: OpKind = MCK_Reg3; break;
    case PPC::X19: OpKind = MCK_Reg3; break;
    case PPC::X20: OpKind = MCK_Reg3; break;
    case PPC::X21: OpKind = MCK_Reg3; break;
    case PPC::X22: OpKind = MCK_Reg3; break;
    case PPC::X23: OpKind = MCK_Reg3; break;
    case PPC::X24: OpKind = MCK_Reg3; break;
    case PPC::X25: OpKind = MCK_Reg3; break;
    case PPC::X26: OpKind = MCK_Reg3; break;
    case PPC::X27: OpKind = MCK_Reg3; break;
    case PPC::X28: OpKind = MCK_Reg3; break;
    case PPC::X29: OpKind = MCK_Reg3; break;
    case PPC::X30: OpKind = MCK_Reg3; break;
    case PPC::X31: OpKind = MCK_Reg3; break;
    case PPC::F0: OpKind = MCK_F4RC; break;
    case PPC::F1: OpKind = MCK_F4RC; break;
    case PPC::F2: OpKind = MCK_F4RC; break;
    case PPC::F3: OpKind = MCK_F4RC; break;
    case PPC::F4: OpKind = MCK_F4RC; break;
    case PPC::F5: OpKind = MCK_F4RC; break;
    case PPC::F6: OpKind = MCK_F4RC; break;
    case PPC::F7: OpKind = MCK_F4RC; break;
    case PPC::F8: OpKind = MCK_F4RC; break;
    case PPC::F9: OpKind = MCK_F4RC; break;
    case PPC::F10: OpKind = MCK_F4RC; break;
    case PPC::F11: OpKind = MCK_F4RC; break;
    case PPC::F12: OpKind = MCK_F4RC; break;
    case PPC::F13: OpKind = MCK_F4RC; break;
    case PPC::F14: OpKind = MCK_F4RC; break;
    case PPC::F15: OpKind = MCK_F4RC; break;
    case PPC::F16: OpKind = MCK_F4RC; break;
    case PPC::F17: OpKind = MCK_F4RC; break;
    case PPC::F18: OpKind = MCK_F4RC; break;
    case PPC::F19: OpKind = MCK_F4RC; break;
    case PPC::F20: OpKind = MCK_F4RC; break;
    case PPC::F21: OpKind = MCK_F4RC; break;
    case PPC::F22: OpKind = MCK_F4RC; break;
    case PPC::F23: OpKind = MCK_F4RC; break;
    case PPC::F24: OpKind = MCK_F4RC; break;
    case PPC::F25: OpKind = MCK_F4RC; break;
    case PPC::F26: OpKind = MCK_F4RC; break;
    case PPC::F27: OpKind = MCK_F4RC; break;
    case PPC::F28: OpKind = MCK_F4RC; break;
    case PPC::F29: OpKind = MCK_F4RC; break;
    case PPC::F30: OpKind = MCK_F4RC; break;
    case PPC::F31: OpKind = MCK_F4RC; break;
    case PPC::V0: OpKind = MCK_VRRC; break;
    case PPC::V1: OpKind = MCK_VRRC; break;
    case PPC::V2: OpKind = MCK_VRRC; break;
    case PPC::V3: OpKind = MCK_VRRC; break;
    case PPC::V4: OpKind = MCK_VRRC; break;
    case PPC::V5: OpKind = MCK_VRRC; break;
    case PPC::V6: OpKind = MCK_VRRC; break;
    case PPC::V7: OpKind = MCK_VRRC; break;
    case PPC::V8: OpKind = MCK_VRRC; break;
    case PPC::V9: OpKind = MCK_VRRC; break;
    case PPC::V10: OpKind = MCK_VRRC; break;
    case PPC::V11: OpKind = MCK_VRRC; break;
    case PPC::V12: OpKind = MCK_VRRC; break;
    case PPC::V13: OpKind = MCK_VRRC; break;
    case PPC::V14: OpKind = MCK_VRRC; break;
    case PPC::V15: OpKind = MCK_VRRC; break;
    case PPC::V16: OpKind = MCK_VRRC; break;
    case PPC::V17: OpKind = MCK_VRRC; break;
    case PPC::V18: OpKind = MCK_VRRC; break;
    case PPC::V19: OpKind = MCK_VRRC; break;
    case PPC::V20: OpKind = MCK_VRRC; break;
    case PPC::V21: OpKind = MCK_VRRC; break;
    case PPC::V22: OpKind = MCK_VRRC; break;
    case PPC::V23: OpKind = MCK_VRRC; break;
    case PPC::V24: OpKind = MCK_VRRC; break;
    case PPC::V25: OpKind = MCK_VRRC; break;
    case PPC::V26: OpKind = MCK_VRRC; break;
    case PPC::V27: OpKind = MCK_VRRC; break;
    case PPC::V28: OpKind = MCK_VRRC; break;
    case PPC::V29: OpKind = MCK_VRRC; break;
    case PPC::V30: OpKind = MCK_VRRC; break;
    case PPC::V31: OpKind = MCK_VRRC; break;
    case PPC::ZERO: OpKind = MCK_GPRC_NOR0; break;
    case PPC::ZERO8: OpKind = MCK_G8RC_NOX0; break;
    case PPC::FP: OpKind = MCK_Reg6; break;
    case PPC::FP8: OpKind = MCK_Reg3; break;
    case PPC::BP: OpKind = MCK_Reg6; break;
    case PPC::BP8: OpKind = MCK_Reg3; break;
    case PPC::CR0LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR0GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR0EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR0UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR1LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR1GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR1EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR1UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR2LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR2GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR2EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR2UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR3LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR3GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR3EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR3UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR4LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR4GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR4EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR4UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR5LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR5GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR5EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR5UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR6LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR6GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR6EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR6UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR7LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR7GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR7EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR7UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR0: OpKind = MCK_CRRC; break;
    case PPC::CR1: OpKind = MCK_CRRC; break;
    case PPC::CR2: OpKind = MCK_CRRC; break;
    case PPC::CR3: OpKind = MCK_CRRC; break;
    case PPC::CR4: OpKind = MCK_CRRC; break;
    case PPC::CR5: OpKind = MCK_CRRC; break;
    case PPC::CR6: OpKind = MCK_CRRC; break;
    case PPC::CR7: OpKind = MCK_CRRC; break;
    case PPC::CTR: OpKind = MCK_CTRRC; break;
    case PPC::CTR8: OpKind = MCK_CTRRC8; break;
    case PPC::VRSAVE: OpKind = MCK_VRSAVERC; break;
    case PPC::CARRY: OpKind = MCK_CARRYRC; break;
    }
    return isSubclass(OpKind, Kind) ? MCTargetAsmParser::Match_Success :
                                      MCTargetAsmParser::Match_InvalidOperand;
  }

  return MCTargetAsmParser::Match_InvalidOperand;
}

unsigned PPCAsmParser::
ComputeAvailableFeatures(uint64_t FB) const {
  unsigned Features = 0;
  return Features;
}

static const char *const MnemonicTable =
    "\003add\004addc\004adde\004addi\005addic\005addis\005addme\005addze\003"
    "and\004andc\004andi\005andis\001b\002ba\002bc\003bca\005bcctr\006bcctrl"
    "\003bcl\004bcla\004bclr\005bclrl\004bctr\005bctrl\004bdnz\005bdnz+\005b"
    "dnz-\005bdnza\006bdnza+\006bdnza-\005bdnzf\006bdnzfa\006bdnzfl\007bdnzf"
    "la\007bdnzflr\010bdnzflrl\005bdnzl\006bdnzl+\006bdnzl-\006bdnzla\007bdn"
    "zla+\007bdnzla-\006bdnzlr\007bdnzlr+\007bdnzlr-\007bdnzlrl\010bdnzlrl+\010"
    "bdnzlrl-\005bdnzt\006bdnzta\006bdnztl\007bdnztla\007bdnztlr\010bdnztlrl"
    "\003bdz\004bdz+\004bdz-\004bdza\005bdza+\005bdza-\004bdzf\005bdzfa\005b"
    "dzfl\006bdzfla\006bdzflr\007bdzflrl\004bdzl\005bdzl+\005bdzl-\005bdzla\006"
    "bdzla+\006bdzla-\005bdzlr\006bdzlr+\006bdzlr-\006bdzlrl\007bdzlrl+\007b"
    "dzlrl-\004bdzt\005bdzta\005bdztl\006bdztla\006bdztlr\007bdztlrl\003beq\004"
    "beq+\004beq-\004beqa\005beqa+\005beqa-\006beqctr\007beqctr+\007beqctr-\007"
    "beqctrl\010beqctrl+\010beqctrl-\004beql\005beql+\005beql-\005beqla\006b"
    "eqla+\006beqla-\005beqlr\006beqlr+\006beqlr-\006beqlrl\007beqlrl+\007be"
    "qlrl-\002bf\003bf+\003bf-\003bfa\004bfa+\004bfa-\005bfctr\006bfctr+\006"
    "bfctr-\006bfctrl\007bfctrl+\007bfctrl-\003bfl\004bfl+\004bfl-\004bfla\005"
    "bfla+\005bfla-\004bflr\005bflr+\005bflr-\005bflrl\006bflrl+\006bflrl-\003"
    "bge\004bge+\004bge-\004bgea\005bgea+\005bgea-\006bgectr\007bgectr+\007b"
    "gectr-\007bgectrl\010bgectrl+\010bgectrl-\004bgel\005bgel+\005bgel-\005"
    "bgela\006bgela+\006bgela-\005bgelr\006bgelr+\006bgelr-\006bgelrl\007bge"
    "lrl+\007bgelrl-\003bgt\004bgt+\004bgt-\004bgta\005bgta+\005bgta-\006bgt"
    "ctr\007bgtctr+\007bgtctr-\007bgtctrl\010bgtctrl+\010bgtctrl-\004bgtl\005"
    "bgtl+\005bgtl-\005bgtla\006bgtla+\006bgtla-\005bgtlr\006bgtlr+\006bgtlr"
    "-\006bgtlrl\007bgtlrl+\007bgtlrl-\002bl\003bla\003ble\004ble+\004ble-\004"
    "blea\005blea+\005blea-\006blectr\007blectr+\007blectr-\007blectrl\010bl"
    "ectrl+\010blectrl-\004blel\005blel+\005blel-\005blela\006blela+\006blel"
    "a-\005blelr\006blelr+\006blelr-\006blelrl\007blelrl+\007blelrl-\003blr\004"
    "blrl\003blt\004blt+\004blt-\004blta\005blta+\005blta-\006bltctr\007bltc"
    "tr+\007bltctr-\007bltctrl\010bltctrl+\010bltctrl-\004bltl\005bltl+\005b"
    "ltl-\005bltla\006bltla+\006bltla-\005bltlr\006bltlr+\006bltlr-\006bltlr"
    "l\007bltlrl+\007bltlrl-\003bne\004bne+\004bne-\004bnea\005bnea+\005bnea"
    "-\006bnectr\007bnectr+\007bnectr-\007bnectrl\010bnectrl+\010bnectrl-\004"
    "bnel\005bnel+\005bnel-\005bnela\006bnela+\006bnela-\005bnelr\006bnelr+\006"
    "bnelr-\006bnelrl\007bnelrl+\007bnelrl-\003bng\004bng+\004bng-\004bnga\005"
    "bnga+\005bnga-\006bngctr\007bngctr+\007bngctr-\007bngctrl\010bngctrl+\010"
    "bngctrl-\004bngl\005bngl+\005bngl-\005bngla\006bngla+\006bngla-\005bngl"
    "r\006bnglr+\006bnglr-\006bnglrl\007bnglrl+\007bnglrl-\003bnl\004bnl+\004"
    "bnl-\004bnla\005bnla+\005bnla-\006bnlctr\007bnlctr+\007bnlctr-\007bnlct"
    "rl\010bnlctrl+\010bnlctrl-\004bnll\005bnll+\005bnll-\005bnlla\006bnlla+"
    "\006bnlla-\005bnllr\006bnllr+\006bnllr-\006bnllrl\007bnllrl+\007bnllrl-"
    "\003bns\004bns+\004bns-\004bnsa\005bnsa+\005bnsa-\006bnsctr\007bnsctr+\007"
    "bnsctr-\007bnsctrl\010bnsctrl+\010bnsctrl-\004bnsl\005bnsl+\005bnsl-\005"
    "bnsla\006bnsla+\006bnsla-\005bnslr\006bnslr+\006bnslr-\006bnslrl\007bns"
    "lrl+\007bnslrl-\003bnu\004bnu+\004bnu-\004bnua\005bnua+\005bnua-\006bnu"
    "ctr\007bnuctr+\007bnuctr-\007bnuctrl\010bnuctrl+\010bnuctrl-\004bnul\005"
    "bnul+\005bnul-\005bnula\006bnula+\006bnula-\005bnulr\006bnulr+\006bnulr"
    "-\006bnulrl\007bnulrl+\007bnulrl-\003bso\004bso+\004bso-\004bsoa\005bso"
    "a+\005bsoa-\006bsoctr\007bsoctr+\007bsoctr-\007bsoctrl\010bsoctrl+\010b"
    "soctrl-\004bsol\005bsol+\005bsol-\005bsola\006bsola+\006bsola-\005bsolr"
    "\006bsolr+\006bsolr-\006bsolrl\007bsolrl+\007bsolrl-\002bt\003bt+\003bt"
    "-\003bta\004bta+\004bta-\005btctr\006btctr+\006btctr-\006btctrl\007btct"
    "rl+\007btctrl-\003btl\004btl+\004btl-\004btla\005btla+\005btla-\004btlr"
    "\005btlr+\005btlr-\005btlrl\006btlrl+\006btlrl-\003bun\004bun+\004bun-\004"
    "buna\005buna+\005buna-\006bunctr\007bunctr+\007bunctr-\007bunctrl\010bu"
    "nctrl+\010bunctrl-\004bunl\005bunl+\005bunl-\005bunla\006bunla+\006bunl"
    "a-\005bunlr\006bunlr+\006bunlr-\006bunlrl\007bunlrl+\007bunlrl-\006clrl"
    "di\010clrlsldi\010clrlslwi\006clrlwi\006clrrdi\006clrrwi\003cmp\004cmpd"
    "\005cmpdi\004cmpi\004cmpl\005cmpld\006cmpldi\005cmpli\005cmplw\006cmplw"
    "i\004cmpw\005cmpwi\006cntlzd\006cntlzw\005crand\006crandc\005crclr\005c"
    "reqv\006crmove\006crnand\005crnor\005crnot\004cror\005crorc\005crset\005"
    "crxor\004dcba\004dcbf\004dcbi\005dcbst\004dcbt\006dcbtst\004dcbz\005dcb"
    "zl\004divd\005divdu\004divw\005divwu\005eieio\003eqv\006extldi\006extlw"
    "i\006extrdi\006extrwi\005extsb\005extsh\005extsw\004fabs\004fadd\005fad"
    "ds\005fcfid\006fcfids\006fcfidu\007fcfidus\005fcmpu\007fctiduz\006fctid"
    "z\007fctiwuz\006fctiwz\004fdiv\005fdivs\005fmadd\006fmadds\003fmr\005fm"
    "sub\006fmsubs\004fmul\005fmuls\005fnabs\004fneg\006fnmadd\007fnmadds\006"
    "fnmsub\007fnmsubs\003fre\004fres\004frim\004frin\004frip\004friz\004frs"
    "p\007frsqrte\010frsqrtes\004fsel\005fsqrt\006fsqrts\004fsub\005fsubs\004"
    "icbi\006inslwi\006insrdi\006insrwi\004isel\005isync\002la\003lbz\004lbz"
    "u\005lbzux\004lbzx\002ld\005ldarx\005ldbrx\003ldu\004ldux\003ldx\003lfd"
    "\004lfdu\005lfdux\004lfdx\006lfiwax\006lfiwzx\003lfs\004lfsu\005lfsux\004"
    "lfsx\003lha\004lhau\005lhaux\004lhax\005lhbrx\003lhz\004lhzu\005lhzux\004"
    "lhzx\002li\003lis\003lmw\005lvebx\005lvehx\005lvewx\004lvsl\004lvsr\003"
    "lvx\004lvxl\003lwa\005lwarx\005lwaux\004lwax\005lwbrx\006lwsync\003lwz\004"
    "lwzu\005lwzux\004lwzx\004mcrf\004mfcr\005mfctr\004mffs\004mflr\006mfocr"
    "f\005mfspr\004mftb\005mftbu\006mfvscr\005mfxer\002mr\005msync\004mtcr\005"
    "mtcrf\005mtctr\006mtfsb0\006mtfsb1\005mtfsf\004mtlr\006mtocrf\005mtspr\006"
    "mtvscr\005mtxer\005mulhd\006mulhdu\005mulhw\006mulhwu\005mulld\005mulli"
    "\005mullw\004nand\003neg\003nop\003nor\003not\002or\003orc\003ori\004or"
    "is\007popcntd\007popcntw\007ptesync\005rldcl\005rldcr\005rldic\006rldic"
    "l\006rldicr\006rldimi\006rlwimi\006rlwinm\005rlwnm\005rotld\006rotldi\005"
    "rotlw\006rotlwi\006rotrdi\006rotrwi\002sc\003sld\004sldi\003slw\004slwi"
    "\004srad\005sradi\004sraw\005srawi\003srd\004srdi\003srw\004srwi\003stb"
    "\004stbu\005stbux\004stbx\003std\006stdbrx\005stdcx\004stdu\005stdux\004"
    "stdx\004stfd\005stfdu\006stfdux\005stfdx\006stfiwx\004stfs\005stfsu\006"
    "stfsux\005stfsx\003sth\006sthbrx\004sthu\005sthux\004sthx\004stmw\006st"
    "vebx\006stvehx\006stvewx\004stvx\005stvxl\003stw\006stwbrx\005stwcx\004"
    "stwu\005stwux\004stwx\003sub\004subc\004subf\005subfc\005subfe\006subfi"
    "c\006subfme\006subfze\004subi\005subic\005subis\004sync\002td\004tdeq\005"
    "tdeqi\004tdge\005tdgei\004tdgt\005tdgti\003tdi\004tdle\005tdlei\005tdlg"
    "e\006tdlgei\005tdlgt\006tdlgti\005tdlle\006tdllei\005tdllt\006tdllti\005"
    "tdlng\006tdlngi\005tdlnl\006tdlnli\004tdlt\005tdlti\004tdne\005tdnei\004"
    "tdng\005tdngi\004tdnl\005tdnli\003tdu\004tdui\004trap\002tw\004tweq\005"
    "tweqi\004twge\005twgei\004twgt\005twgti\003twi\004twle\005twlei\005twlg"
    "e\006twlgei\005twlgt\006twlgti\005twlle\006twllei\005twllt\006twllti\005"
    "twlng\006twlngi\005twlnl\006twlnli\004twlt\005twlti\004twne\005twnei\004"
    "twng\005twngi\004twnl\005twnli\003twu\004twui\007vaddcuw\006vaddfp\007v"
    "addsbs\007vaddshs\007vaddsws\007vaddubm\007vaddubs\007vadduhm\007vadduh"
    "s\007vadduwm\007vadduws\004vand\005vandc\006vavgsb\006vavgsh\006vavgsw\006"
    "vavgub\006vavguh\006vavguw\005vcfsx\005vcfux\007vcmpbfp\010vcmpeqfp\010"
    "vcmpequb\010vcmpequh\010vcmpequw\010vcmpgefp\010vcmpgtfp\010vcmpgtsb\010"
    "vcmpgtsh\010vcmpgtsw\010vcmpgtub\010vcmpgtuh\010vcmpgtuw\006vctsxs\006v"
    "ctuxs\010vexptefp\007vlogefp\007vmaddfp\006vmaxfp\006vmaxsb\006vmaxsh\006"
    "vmaxsw\006vmaxub\006vmaxuh\006vmaxuw\tvmhaddshs\nvmhraddshs\006vminfp\006"
    "vminsb\006vminsh\006vminsw\006vminub\006vminuh\006vminuw\tvmladduhm\006"
    "vmrghb\006vmrghh\006vmrghw\006vmrglb\006vmrglh\006vmrglw\010vmsummbm\010"
    "vmsumshm\010vmsumshs\010vmsumubm\010vmsumuhm\010vmsumuhs\007vmulesb\007"
    "vmulesh\007vmuleub\007vmuleuh\007vmulosb\007vmulosh\007vmuloub\007vmulo"
    "uh\010vnmsubfp\004vnor\003vor\005vperm\005vpkpx\007vpkshss\007vpkshus\007"
    "vpkswss\007vpkswus\007vpkuhum\007vpkuhus\007vpkuwum\007vpkuwus\005vrefp"
    "\005vrfim\005vrfin\005vrfip\005vrfiz\004vrlb\004vrlh\004vrlw\tvrsqrtefp"
    "\004vsel\003vsl\004vslb\006vsldoi\004vslh\004vslo\004vslw\006vspltb\006"
    "vsplth\010vspltisb\010vspltish\010vspltisw\006vspltw\003vsr\005vsrab\005"
    "vsrah\005vsraw\004vsrb\004vsrh\004vsro\004vsrw\007vsubcuw\006vsubfp\007"
    "vsubsbs\007vsubshs\007vsubsws\007vsububm\007vsububs\007vsubuhm\007vsubu"
    "hs\007vsubuwm\007vsubuws\010vsum2sws\010vsum4sbs\010vsum4shs\010vsum4ub"
    "s\007vsumsws\007vupkhpx\007vupkhsb\007vupkhsh\007vupklpx\007vupklsb\007"
    "vupklsh\004vxor\004wait\010waitimpl\007waitrsv\004xnop\003xor\004xori\005"
    "xoris";

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint16_t ConvertFn;
    uint8_t RequiredFeatures;
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
  { 0 /* add */, PPC::ADD8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 0 /* add */, PPC::ADD8TLS, Convert__RegG8RC1_0__RegG8RC1_1__TLSReg1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_TLSReg }, },
  { 0 /* add */, PPC::ADD4, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 0 /* add */, PPC::ADD8o, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 0 /* add */, PPC::ADD4o, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4 /* addc */, PPC::ADDC8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 4 /* addc */, PPC::ADDC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4 /* addc */, PPC::ADDC8o, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 4 /* addc */, PPC::ADDCo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9 /* adde */, PPC::ADDE8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 9 /* adde */, PPC::ADDE, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9 /* adde */, PPC::ADDE8o, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 9 /* adde */, PPC::ADDEo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 14 /* addi */, PPC::ADDI8, Convert__RegG8RC1_0__RegG8RCNoX01_1__S16Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RCNoX0, MCK_S16Imm }, },
  { 14 /* addi */, PPC::ADDI, Convert__RegGPRC1_0__RegGPRCNoR01_1__S16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRCNoR0, MCK_S16Imm }, },
  { 19 /* addic */, PPC::ADDIC8, Convert__RegG8RC1_0__RegG8RC1_1__S16Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_S16Imm }, },
  { 19 /* addic */, PPC::ADDIC, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 19 /* addic */, PPC::ADDICo, Convert__RegGPRC1_1__RegGPRC1_2__S16Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 25 /* addis */, PPC::ADDIS8, Convert__RegG8RC1_0__RegG8RCNoX01_1__S17Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RCNoX0, MCK_S17Imm }, },
  { 25 /* addis */, PPC::ADDIS, Convert__RegGPRC1_0__RegGPRCNoR01_1__S17Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRCNoR0, MCK_S17Imm }, },
  { 31 /* addme */, PPC::ADDME8, Convert__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 31 /* addme */, PPC::ADDME, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 31 /* addme */, PPC::ADDME8o, Convert__RegG8RC1_1__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, },
  { 31 /* addme */, PPC::ADDMEo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 37 /* addze */, PPC::ADDZE8, Convert__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 37 /* addze */, PPC::ADDZE, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 37 /* addze */, PPC::ADDZE8o, Convert__RegG8RC1_1__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, },
  { 37 /* addze */, PPC::ADDZEo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 43 /* and */, PPC::AND8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 43 /* and */, PPC::AND, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 43 /* and */, PPC::AND8o, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 43 /* and */, PPC::ANDo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 47 /* andc */, PPC::ANDC8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 47 /* andc */, PPC::ANDC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 47 /* andc */, PPC::ANDC8o, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 47 /* andc */, PPC::ANDCo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 52 /* andi */, PPC::ANDIo8, Convert__RegG8RC1_1__RegG8RC1_2__U16Imm1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U16Imm }, },
  { 52 /* andi */, PPC::ANDIo, Convert__RegGPRC1_1__RegGPRC1_2__U16Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 57 /* andis */, PPC::ANDISo8, Convert__RegG8RC1_1__RegG8RC1_2__U16Imm1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U16Imm }, },
  { 57 /* andis */, PPC::ANDISo, Convert__RegGPRC1_1__RegGPRC1_2__U16Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 63 /* b */, PPC::B, Convert__DirectBr1_0, 0, { MCK_DirectBr }, },
  { 65 /* ba */, PPC::BA, Convert__DirectBr1_0, 0, { MCK_DirectBr }, },
  { 68 /* bc */, PPC::gBC, Convert__U5Imm1_0__RegCRBITRC1_1__CondBr1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 71 /* bca */, PPC::gBCA, Convert__U5Imm1_0__RegCRBITRC1_1__CondBr1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 75 /* bcctr */, PPC::gBCCTR, Convert__U5Imm1_0__RegCRBITRC1_1__imm_0, 0, { MCK_U5Imm, MCK_RegCRBITRC }, },
  { 75 /* bcctr */, PPC::gBCCTR, Convert__U5Imm1_0__RegCRBITRC1_1__Imm1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_Imm }, },
  { 81 /* bcctrl */, PPC::gBCCTRL, Convert__U5Imm1_0__RegCRBITRC1_1__imm_0, 0, { MCK_U5Imm, MCK_RegCRBITRC }, },
  { 81 /* bcctrl */, PPC::gBCCTRL, Convert__U5Imm1_0__RegCRBITRC1_1__Imm1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_Imm }, },
  { 88 /* bcl */, PPC::gBCL, Convert__U5Imm1_0__RegCRBITRC1_1__CondBr1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 92 /* bcla */, PPC::gBCLA, Convert__U5Imm1_0__RegCRBITRC1_1__CondBr1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 97 /* bclr */, PPC::gBCLR, Convert__U5Imm1_0__RegCRBITRC1_1__imm_0, 0, { MCK_U5Imm, MCK_RegCRBITRC }, },
  { 97 /* bclr */, PPC::gBCLR, Convert__U5Imm1_0__RegCRBITRC1_1__Imm1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_Imm }, },
  { 102 /* bclrl */, PPC::gBCLRL, Convert__U5Imm1_0__RegCRBITRC1_1__imm_0, 0, { MCK_U5Imm, MCK_RegCRBITRC }, },
  { 102 /* bclrl */, PPC::gBCLRL, Convert__U5Imm1_0__RegCRBITRC1_1__Imm1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_Imm }, },
  { 108 /* bctr */, PPC::BCTR, Convert_NoOperands, 0, {  }, },
  { 108 /* bctr */, PPC::BCTR8, Convert_NoOperands, 0, {  }, },
  { 113 /* bctrl */, PPC::BCTRL, Convert_NoOperands, 0, {  }, },
  { 113 /* bctrl */, PPC::BCTRL8, Convert_NoOperands, 0, {  }, },
  { 119 /* bdnz */, PPC::BDNZ, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 119 /* bdnz */, PPC::BDNZ8, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 124 /* bdnz+ */, PPC::BDNZp, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 130 /* bdnz- */, PPC::BDNZm, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 136 /* bdnza */, PPC::BDNZA, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 142 /* bdnza+ */, PPC::BDNZAp, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 149 /* bdnza- */, PPC::BDNZAm, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 156 /* bdnzf */, PPC::gBC, Convert__imm_0__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 162 /* bdnzfa */, PPC::gBCA, Convert__imm_0__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 169 /* bdnzfl */, PPC::gBCL, Convert__imm_0__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 176 /* bdnzfla */, PPC::gBCLA, Convert__imm_0__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 184 /* bdnzflr */, PPC::gBCLR, Convert__imm_0__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 192 /* bdnzflrl */, PPC::gBCLRL, Convert__imm_0__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 201 /* bdnzl */, PPC::BDNZL, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 207 /* bdnzl+ */, PPC::BDNZLp, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 214 /* bdnzl- */, PPC::BDNZLm, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 221 /* bdnzla */, PPC::BDNZLA, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 228 /* bdnzla+ */, PPC::BDNZLAp, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 236 /* bdnzla- */, PPC::BDNZLAm, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 244 /* bdnzlr */, PPC::BDNZLR, Convert_NoOperands, 0, {  }, },
  { 244 /* bdnzlr */, PPC::BDNZLR8, Convert_NoOperands, 0, {  }, },
  { 251 /* bdnzlr+ */, PPC::BDNZLRp, Convert_NoOperands, 0, {  }, },
  { 259 /* bdnzlr- */, PPC::BDNZLRm, Convert_NoOperands, 0, {  }, },
  { 267 /* bdnzlrl */, PPC::BDNZLRL, Convert_NoOperands, 0, {  }, },
  { 275 /* bdnzlrl+ */, PPC::BDNZLRLp, Convert_NoOperands, 0, {  }, },
  { 284 /* bdnzlrl- */, PPC::BDNZLRLm, Convert_NoOperands, 0, {  }, },
  { 293 /* bdnzt */, PPC::gBC, Convert__imm_8__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 299 /* bdnzta */, PPC::gBCA, Convert__imm_8__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 306 /* bdnztl */, PPC::gBCL, Convert__imm_8__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 313 /* bdnztla */, PPC::gBCLA, Convert__imm_8__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 321 /* bdnztlr */, PPC::gBCLR, Convert__imm_8__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 329 /* bdnztlrl */, PPC::gBCLRL, Convert__imm_8__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 338 /* bdz */, PPC::BDZ, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 338 /* bdz */, PPC::BDZ8, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 342 /* bdz+ */, PPC::BDZp, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 347 /* bdz- */, PPC::BDZm, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 352 /* bdza */, PPC::BDZA, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 357 /* bdza+ */, PPC::BDZAp, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 363 /* bdza- */, PPC::BDZAm, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 369 /* bdzf */, PPC::gBC, Convert__imm_2__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 374 /* bdzfa */, PPC::gBCA, Convert__imm_2__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 380 /* bdzfl */, PPC::gBCL, Convert__imm_2__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 386 /* bdzfla */, PPC::gBCLA, Convert__imm_2__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 393 /* bdzflr */, PPC::gBCLR, Convert__imm_2__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 400 /* bdzflrl */, PPC::gBCLRL, Convert__imm_2__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 408 /* bdzl */, PPC::BDZL, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 413 /* bdzl+ */, PPC::BDZLp, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 419 /* bdzl- */, PPC::BDZLm, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 425 /* bdzla */, PPC::BDZLA, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 431 /* bdzla+ */, PPC::BDZLAp, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 438 /* bdzla- */, PPC::BDZLAm, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 445 /* bdzlr */, PPC::BDZLR, Convert_NoOperands, 0, {  }, },
  { 445 /* bdzlr */, PPC::BDZLR8, Convert_NoOperands, 0, {  }, },
  { 451 /* bdzlr+ */, PPC::BDZLRp, Convert_NoOperands, 0, {  }, },
  { 458 /* bdzlr- */, PPC::BDZLRm, Convert_NoOperands, 0, {  }, },
  { 465 /* bdzlrl */, PPC::BDZLRL, Convert_NoOperands, 0, {  }, },
  { 472 /* bdzlrl+ */, PPC::BDZLRLp, Convert_NoOperands, 0, {  }, },
  { 480 /* bdzlrl- */, PPC::BDZLRLm, Convert_NoOperands, 0, {  }, },
  { 488 /* bdzt */, PPC::gBC, Convert__imm_10__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 493 /* bdzta */, PPC::gBCA, Convert__imm_10__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 499 /* bdztl */, PPC::gBCL, Convert__imm_10__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 505 /* bdztla */, PPC::gBCLA, Convert__imm_10__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 512 /* bdztlr */, PPC::gBCLR, Convert__imm_10__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 519 /* bdztlrl */, PPC::gBCLRL, Convert__imm_10__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 527 /* beq */, PPC::BCC, Convert__imm_76__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 527 /* beq */, PPC::BCC, Convert__imm_76__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 531 /* beq+ */, PPC::BCC, Convert__imm_79__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 531 /* beq+ */, PPC::BCC, Convert__imm_79__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 536 /* beq- */, PPC::BCC, Convert__imm_78__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 536 /* beq- */, PPC::BCC, Convert__imm_78__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 541 /* beqa */, PPC::BCCA, Convert__imm_76__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 541 /* beqa */, PPC::BCCA, Convert__imm_76__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 546 /* beqa+ */, PPC::BCCA, Convert__imm_79__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 546 /* beqa+ */, PPC::BCCA, Convert__imm_79__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 552 /* beqa- */, PPC::BCCA, Convert__imm_78__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 552 /* beqa- */, PPC::BCCA, Convert__imm_78__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 558 /* beqctr */, PPC::BCCTR, Convert__imm_76__regCR0, 0, {  }, },
  { 558 /* beqctr */, PPC::BCCTR, Convert__imm_76__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 565 /* beqctr+ */, PPC::BCCTR, Convert__imm_79__regCR0, 0, {  }, },
  { 565 /* beqctr+ */, PPC::BCCTR, Convert__imm_79__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 573 /* beqctr- */, PPC::BCCTR, Convert__imm_78__regCR0, 0, {  }, },
  { 573 /* beqctr- */, PPC::BCCTR, Convert__imm_78__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 581 /* beqctrl */, PPC::BCCTRL, Convert__imm_76__regCR0, 0, {  }, },
  { 581 /* beqctrl */, PPC::BCCTRL, Convert__imm_76__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 589 /* beqctrl+ */, PPC::BCCTRL, Convert__imm_79__regCR0, 0, {  }, },
  { 589 /* beqctrl+ */, PPC::BCCTRL, Convert__imm_79__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 598 /* beqctrl- */, PPC::BCCTRL, Convert__imm_78__regCR0, 0, {  }, },
  { 598 /* beqctrl- */, PPC::BCCTRL, Convert__imm_78__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 607 /* beql */, PPC::BCCL, Convert__imm_76__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 607 /* beql */, PPC::BCCL, Convert__imm_76__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 612 /* beql+ */, PPC::BCCL, Convert__imm_79__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 612 /* beql+ */, PPC::BCCL, Convert__imm_79__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 618 /* beql- */, PPC::BCCL, Convert__imm_78__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 618 /* beql- */, PPC::BCCL, Convert__imm_78__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 624 /* beqla */, PPC::BCCLA, Convert__imm_76__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 624 /* beqla */, PPC::BCCLA, Convert__imm_76__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 630 /* beqla+ */, PPC::BCCLA, Convert__imm_79__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 630 /* beqla+ */, PPC::BCCLA, Convert__imm_79__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 637 /* beqla- */, PPC::BCCLA, Convert__imm_78__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 637 /* beqla- */, PPC::BCCLA, Convert__imm_78__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 644 /* beqlr */, PPC::BCLR, Convert__imm_76__regCR0, 0, {  }, },
  { 644 /* beqlr */, PPC::BCLR, Convert__imm_76__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 650 /* beqlr+ */, PPC::BCLR, Convert__imm_79__regCR0, 0, {  }, },
  { 650 /* beqlr+ */, PPC::BCLR, Convert__imm_79__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 657 /* beqlr- */, PPC::BCLR, Convert__imm_78__regCR0, 0, {  }, },
  { 657 /* beqlr- */, PPC::BCLR, Convert__imm_78__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 664 /* beqlrl */, PPC::BCLRL, Convert__imm_76__regCR0, 0, {  }, },
  { 664 /* beqlrl */, PPC::BCLRL, Convert__imm_76__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 671 /* beqlrl+ */, PPC::BCLRL, Convert__imm_79__regCR0, 0, {  }, },
  { 671 /* beqlrl+ */, PPC::BCLRL, Convert__imm_79__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 679 /* beqlrl- */, PPC::BCLRL, Convert__imm_78__regCR0, 0, {  }, },
  { 679 /* beqlrl- */, PPC::BCLRL, Convert__imm_78__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 687 /* bf */, PPC::gBC, Convert__imm_4__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 690 /* bf+ */, PPC::gBC, Convert__imm_7__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 694 /* bf- */, PPC::gBC, Convert__imm_6__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 698 /* bfa */, PPC::gBCA, Convert__imm_4__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 702 /* bfa+ */, PPC::gBCA, Convert__imm_7__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 707 /* bfa- */, PPC::gBCA, Convert__imm_6__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 712 /* bfctr */, PPC::gBCCTR, Convert__imm_4__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 718 /* bfctr+ */, PPC::gBCCTR, Convert__imm_7__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 725 /* bfctr- */, PPC::gBCCTR, Convert__imm_6__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 732 /* bfctrl */, PPC::gBCCTRL, Convert__imm_4__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 739 /* bfctrl+ */, PPC::gBCCTRL, Convert__imm_7__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 747 /* bfctrl- */, PPC::gBCCTRL, Convert__imm_6__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 755 /* bfl */, PPC::gBCL, Convert__imm_4__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 759 /* bfl+ */, PPC::gBCL, Convert__imm_7__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 764 /* bfl- */, PPC::gBCL, Convert__imm_6__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 769 /* bfla */, PPC::gBCLA, Convert__imm_4__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 774 /* bfla+ */, PPC::gBCLA, Convert__imm_7__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 780 /* bfla- */, PPC::gBCLA, Convert__imm_6__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 786 /* bflr */, PPC::gBCLR, Convert__imm_4__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 791 /* bflr+ */, PPC::gBCLR, Convert__imm_7__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 797 /* bflr- */, PPC::gBCLR, Convert__imm_6__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 803 /* bflrl */, PPC::gBCLRL, Convert__imm_4__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 809 /* bflrl+ */, PPC::gBCLRL, Convert__imm_7__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 816 /* bflrl- */, PPC::gBCLRL, Convert__imm_6__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 823 /* bge */, PPC::BCC, Convert__imm_4__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 823 /* bge */, PPC::BCC, Convert__imm_4__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 827 /* bge+ */, PPC::BCC, Convert__imm_7__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 827 /* bge+ */, PPC::BCC, Convert__imm_7__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 832 /* bge- */, PPC::BCC, Convert__imm_6__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 832 /* bge- */, PPC::BCC, Convert__imm_6__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 837 /* bgea */, PPC::BCCA, Convert__imm_4__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 837 /* bgea */, PPC::BCCA, Convert__imm_4__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 842 /* bgea+ */, PPC::BCCA, Convert__imm_7__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 842 /* bgea+ */, PPC::BCCA, Convert__imm_7__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 848 /* bgea- */, PPC::BCCA, Convert__imm_6__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 848 /* bgea- */, PPC::BCCA, Convert__imm_6__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 854 /* bgectr */, PPC::BCCTR, Convert__imm_4__regCR0, 0, {  }, },
  { 854 /* bgectr */, PPC::BCCTR, Convert__imm_4__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 861 /* bgectr+ */, PPC::BCCTR, Convert__imm_7__regCR0, 0, {  }, },
  { 861 /* bgectr+ */, PPC::BCCTR, Convert__imm_7__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 869 /* bgectr- */, PPC::BCCTR, Convert__imm_6__regCR0, 0, {  }, },
  { 869 /* bgectr- */, PPC::BCCTR, Convert__imm_6__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 877 /* bgectrl */, PPC::BCCTRL, Convert__imm_4__regCR0, 0, {  }, },
  { 877 /* bgectrl */, PPC::BCCTRL, Convert__imm_4__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 885 /* bgectrl+ */, PPC::BCCTRL, Convert__imm_7__regCR0, 0, {  }, },
  { 885 /* bgectrl+ */, PPC::BCCTRL, Convert__imm_7__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 894 /* bgectrl- */, PPC::BCCTRL, Convert__imm_6__regCR0, 0, {  }, },
  { 894 /* bgectrl- */, PPC::BCCTRL, Convert__imm_6__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 903 /* bgel */, PPC::BCCL, Convert__imm_4__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 903 /* bgel */, PPC::BCCL, Convert__imm_4__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 908 /* bgel+ */, PPC::BCCL, Convert__imm_7__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 908 /* bgel+ */, PPC::BCCL, Convert__imm_7__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 914 /* bgel- */, PPC::BCCL, Convert__imm_6__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 914 /* bgel- */, PPC::BCCL, Convert__imm_6__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 920 /* bgela */, PPC::BCCLA, Convert__imm_4__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 920 /* bgela */, PPC::BCCLA, Convert__imm_4__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 926 /* bgela+ */, PPC::BCCLA, Convert__imm_7__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 926 /* bgela+ */, PPC::BCCLA, Convert__imm_7__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 933 /* bgela- */, PPC::BCCLA, Convert__imm_6__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 933 /* bgela- */, PPC::BCCLA, Convert__imm_6__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 940 /* bgelr */, PPC::BCLR, Convert__imm_4__regCR0, 0, {  }, },
  { 940 /* bgelr */, PPC::BCLR, Convert__imm_4__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 946 /* bgelr+ */, PPC::BCLR, Convert__imm_7__regCR0, 0, {  }, },
  { 946 /* bgelr+ */, PPC::BCLR, Convert__imm_7__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 953 /* bgelr- */, PPC::BCLR, Convert__imm_6__regCR0, 0, {  }, },
  { 953 /* bgelr- */, PPC::BCLR, Convert__imm_6__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 960 /* bgelrl */, PPC::BCLRL, Convert__imm_4__regCR0, 0, {  }, },
  { 960 /* bgelrl */, PPC::BCLRL, Convert__imm_4__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 967 /* bgelrl+ */, PPC::BCLRL, Convert__imm_7__regCR0, 0, {  }, },
  { 967 /* bgelrl+ */, PPC::BCLRL, Convert__imm_7__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 975 /* bgelrl- */, PPC::BCLRL, Convert__imm_6__regCR0, 0, {  }, },
  { 975 /* bgelrl- */, PPC::BCLRL, Convert__imm_6__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 983 /* bgt */, PPC::BCC, Convert__imm_44__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 983 /* bgt */, PPC::BCC, Convert__imm_44__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 987 /* bgt+ */, PPC::BCC, Convert__imm_47__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 987 /* bgt+ */, PPC::BCC, Convert__imm_47__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 992 /* bgt- */, PPC::BCC, Convert__imm_46__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 992 /* bgt- */, PPC::BCC, Convert__imm_46__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 997 /* bgta */, PPC::BCCA, Convert__imm_44__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 997 /* bgta */, PPC::BCCA, Convert__imm_44__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1002 /* bgta+ */, PPC::BCCA, Convert__imm_47__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1002 /* bgta+ */, PPC::BCCA, Convert__imm_47__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1008 /* bgta- */, PPC::BCCA, Convert__imm_46__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1008 /* bgta- */, PPC::BCCA, Convert__imm_46__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1014 /* bgtctr */, PPC::BCCTR, Convert__imm_44__regCR0, 0, {  }, },
  { 1014 /* bgtctr */, PPC::BCCTR, Convert__imm_44__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1021 /* bgtctr+ */, PPC::BCCTR, Convert__imm_47__regCR0, 0, {  }, },
  { 1021 /* bgtctr+ */, PPC::BCCTR, Convert__imm_47__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1029 /* bgtctr- */, PPC::BCCTR, Convert__imm_46__regCR0, 0, {  }, },
  { 1029 /* bgtctr- */, PPC::BCCTR, Convert__imm_46__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1037 /* bgtctrl */, PPC::BCCTRL, Convert__imm_44__regCR0, 0, {  }, },
  { 1037 /* bgtctrl */, PPC::BCCTRL, Convert__imm_44__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1045 /* bgtctrl+ */, PPC::BCCTRL, Convert__imm_47__regCR0, 0, {  }, },
  { 1045 /* bgtctrl+ */, PPC::BCCTRL, Convert__imm_47__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1054 /* bgtctrl- */, PPC::BCCTRL, Convert__imm_46__regCR0, 0, {  }, },
  { 1054 /* bgtctrl- */, PPC::BCCTRL, Convert__imm_46__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1063 /* bgtl */, PPC::BCCL, Convert__imm_44__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1063 /* bgtl */, PPC::BCCL, Convert__imm_44__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1068 /* bgtl+ */, PPC::BCCL, Convert__imm_47__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1068 /* bgtl+ */, PPC::BCCL, Convert__imm_47__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1074 /* bgtl- */, PPC::BCCL, Convert__imm_46__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1074 /* bgtl- */, PPC::BCCL, Convert__imm_46__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1080 /* bgtla */, PPC::BCCLA, Convert__imm_44__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1080 /* bgtla */, PPC::BCCLA, Convert__imm_44__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1086 /* bgtla+ */, PPC::BCCLA, Convert__imm_47__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1086 /* bgtla+ */, PPC::BCCLA, Convert__imm_47__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1093 /* bgtla- */, PPC::BCCLA, Convert__imm_46__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1093 /* bgtla- */, PPC::BCCLA, Convert__imm_46__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1100 /* bgtlr */, PPC::BCLR, Convert__imm_44__regCR0, 0, {  }, },
  { 1100 /* bgtlr */, PPC::BCLR, Convert__imm_44__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1106 /* bgtlr+ */, PPC::BCLR, Convert__imm_47__regCR0, 0, {  }, },
  { 1106 /* bgtlr+ */, PPC::BCLR, Convert__imm_47__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1113 /* bgtlr- */, PPC::BCLR, Convert__imm_46__regCR0, 0, {  }, },
  { 1113 /* bgtlr- */, PPC::BCLR, Convert__imm_46__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1120 /* bgtlrl */, PPC::BCLRL, Convert__imm_44__regCR0, 0, {  }, },
  { 1120 /* bgtlrl */, PPC::BCLRL, Convert__imm_44__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1127 /* bgtlrl+ */, PPC::BCLRL, Convert__imm_47__regCR0, 0, {  }, },
  { 1127 /* bgtlrl+ */, PPC::BCLRL, Convert__imm_47__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1135 /* bgtlrl- */, PPC::BCLRL, Convert__imm_46__regCR0, 0, {  }, },
  { 1135 /* bgtlrl- */, PPC::BCLRL, Convert__imm_46__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1143 /* bl */, PPC::BL, Convert__DirectBr1_0, 0, { MCK_DirectBr }, },
  { 1143 /* bl */, PPC::BL8, Convert__DirectBr1_0, 0, { MCK_DirectBr }, },
  { 1143 /* bl */, PPC::BL8_TLS, Convert__DirectBr1_0__Imm1_1, 0, { MCK_DirectBr, MCK_Imm }, },
  { 1146 /* bla */, PPC::BLA, Convert__DirectBr1_0, 0, { MCK_DirectBr }, },
  { 1146 /* bla */, PPC::BLA8, Convert__DirectBr1_0, 0, { MCK_DirectBr }, },
  { 1150 /* ble */, PPC::BCC, Convert__imm_36__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1150 /* ble */, PPC::BCC, Convert__imm_36__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1154 /* ble+ */, PPC::BCC, Convert__imm_39__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1154 /* ble+ */, PPC::BCC, Convert__imm_39__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1159 /* ble- */, PPC::BCC, Convert__imm_38__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1159 /* ble- */, PPC::BCC, Convert__imm_38__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1164 /* blea */, PPC::BCCA, Convert__imm_36__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1164 /* blea */, PPC::BCCA, Convert__imm_36__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1169 /* blea+ */, PPC::BCCA, Convert__imm_39__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1169 /* blea+ */, PPC::BCCA, Convert__imm_39__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1175 /* blea- */, PPC::BCCA, Convert__imm_38__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1175 /* blea- */, PPC::BCCA, Convert__imm_38__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1181 /* blectr */, PPC::BCCTR, Convert__imm_36__regCR0, 0, {  }, },
  { 1181 /* blectr */, PPC::BCCTR, Convert__imm_36__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1188 /* blectr+ */, PPC::BCCTR, Convert__imm_39__regCR0, 0, {  }, },
  { 1188 /* blectr+ */, PPC::BCCTR, Convert__imm_39__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1196 /* blectr- */, PPC::BCCTR, Convert__imm_38__regCR0, 0, {  }, },
  { 1196 /* blectr- */, PPC::BCCTR, Convert__imm_38__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1204 /* blectrl */, PPC::BCCTRL, Convert__imm_36__regCR0, 0, {  }, },
  { 1204 /* blectrl */, PPC::BCCTRL, Convert__imm_36__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1212 /* blectrl+ */, PPC::BCCTRL, Convert__imm_39__regCR0, 0, {  }, },
  { 1212 /* blectrl+ */, PPC::BCCTRL, Convert__imm_39__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1221 /* blectrl- */, PPC::BCCTRL, Convert__imm_38__regCR0, 0, {  }, },
  { 1221 /* blectrl- */, PPC::BCCTRL, Convert__imm_38__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1230 /* blel */, PPC::BCCL, Convert__imm_36__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1230 /* blel */, PPC::BCCL, Convert__imm_36__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1235 /* blel+ */, PPC::BCCL, Convert__imm_39__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1235 /* blel+ */, PPC::BCCL, Convert__imm_39__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1241 /* blel- */, PPC::BCCL, Convert__imm_38__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1241 /* blel- */, PPC::BCCL, Convert__imm_38__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1247 /* blela */, PPC::BCCLA, Convert__imm_36__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1247 /* blela */, PPC::BCCLA, Convert__imm_36__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1253 /* blela+ */, PPC::BCCLA, Convert__imm_39__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1253 /* blela+ */, PPC::BCCLA, Convert__imm_39__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1260 /* blela- */, PPC::BCCLA, Convert__imm_38__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1260 /* blela- */, PPC::BCCLA, Convert__imm_38__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1267 /* blelr */, PPC::BCLR, Convert__imm_36__regCR0, 0, {  }, },
  { 1267 /* blelr */, PPC::BCLR, Convert__imm_36__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1273 /* blelr+ */, PPC::BCLR, Convert__imm_39__regCR0, 0, {  }, },
  { 1273 /* blelr+ */, PPC::BCLR, Convert__imm_39__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1280 /* blelr- */, PPC::BCLR, Convert__imm_38__regCR0, 0, {  }, },
  { 1280 /* blelr- */, PPC::BCLR, Convert__imm_38__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1287 /* blelrl */, PPC::BCLRL, Convert__imm_36__regCR0, 0, {  }, },
  { 1287 /* blelrl */, PPC::BCLRL, Convert__imm_36__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1294 /* blelrl+ */, PPC::BCLRL, Convert__imm_39__regCR0, 0, {  }, },
  { 1294 /* blelrl+ */, PPC::BCLRL, Convert__imm_39__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1302 /* blelrl- */, PPC::BCLRL, Convert__imm_38__regCR0, 0, {  }, },
  { 1302 /* blelrl- */, PPC::BCLRL, Convert__imm_38__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1310 /* blr */, PPC::BLR, Convert_NoOperands, 0, {  }, },
  { 1314 /* blrl */, PPC::BLRL, Convert_NoOperands, 0, {  }, },
  { 1319 /* blt */, PPC::BCC, Convert__imm_12__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1319 /* blt */, PPC::BCC, Convert__imm_12__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1323 /* blt+ */, PPC::BCC, Convert__imm_15__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1323 /* blt+ */, PPC::BCC, Convert__imm_15__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1328 /* blt- */, PPC::BCC, Convert__imm_14__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1328 /* blt- */, PPC::BCC, Convert__imm_14__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1333 /* blta */, PPC::BCCA, Convert__imm_12__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1333 /* blta */, PPC::BCCA, Convert__imm_12__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1338 /* blta+ */, PPC::BCCA, Convert__imm_15__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1338 /* blta+ */, PPC::BCCA, Convert__imm_15__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1344 /* blta- */, PPC::BCCA, Convert__imm_14__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1344 /* blta- */, PPC::BCCA, Convert__imm_14__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1350 /* bltctr */, PPC::BCCTR, Convert__imm_12__regCR0, 0, {  }, },
  { 1350 /* bltctr */, PPC::BCCTR, Convert__imm_12__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1357 /* bltctr+ */, PPC::BCCTR, Convert__imm_15__regCR0, 0, {  }, },
  { 1357 /* bltctr+ */, PPC::BCCTR, Convert__imm_15__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1365 /* bltctr- */, PPC::BCCTR, Convert__imm_14__regCR0, 0, {  }, },
  { 1365 /* bltctr- */, PPC::BCCTR, Convert__imm_14__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1373 /* bltctrl */, PPC::BCCTRL, Convert__imm_12__regCR0, 0, {  }, },
  { 1373 /* bltctrl */, PPC::BCCTRL, Convert__imm_12__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1381 /* bltctrl+ */, PPC::BCCTRL, Convert__imm_15__regCR0, 0, {  }, },
  { 1381 /* bltctrl+ */, PPC::BCCTRL, Convert__imm_15__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1390 /* bltctrl- */, PPC::BCCTRL, Convert__imm_14__regCR0, 0, {  }, },
  { 1390 /* bltctrl- */, PPC::BCCTRL, Convert__imm_14__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1399 /* bltl */, PPC::BCCL, Convert__imm_12__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1399 /* bltl */, PPC::BCCL, Convert__imm_12__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1404 /* bltl+ */, PPC::BCCL, Convert__imm_15__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1404 /* bltl+ */, PPC::BCCL, Convert__imm_15__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1410 /* bltl- */, PPC::BCCL, Convert__imm_14__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1410 /* bltl- */, PPC::BCCL, Convert__imm_14__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1416 /* bltla */, PPC::BCCLA, Convert__imm_12__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1416 /* bltla */, PPC::BCCLA, Convert__imm_12__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1422 /* bltla+ */, PPC::BCCLA, Convert__imm_15__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1422 /* bltla+ */, PPC::BCCLA, Convert__imm_15__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1429 /* bltla- */, PPC::BCCLA, Convert__imm_14__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1429 /* bltla- */, PPC::BCCLA, Convert__imm_14__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1436 /* bltlr */, PPC::BCLR, Convert__imm_12__regCR0, 0, {  }, },
  { 1436 /* bltlr */, PPC::BCLR, Convert__imm_12__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1442 /* bltlr+ */, PPC::BCLR, Convert__imm_15__regCR0, 0, {  }, },
  { 1442 /* bltlr+ */, PPC::BCLR, Convert__imm_15__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1449 /* bltlr- */, PPC::BCLR, Convert__imm_14__regCR0, 0, {  }, },
  { 1449 /* bltlr- */, PPC::BCLR, Convert__imm_14__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1456 /* bltlrl */, PPC::BCLRL, Convert__imm_12__regCR0, 0, {  }, },
  { 1456 /* bltlrl */, PPC::BCLRL, Convert__imm_12__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1463 /* bltlrl+ */, PPC::BCLRL, Convert__imm_15__regCR0, 0, {  }, },
  { 1463 /* bltlrl+ */, PPC::BCLRL, Convert__imm_15__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1471 /* bltlrl- */, PPC::BCLRL, Convert__imm_14__regCR0, 0, {  }, },
  { 1471 /* bltlrl- */, PPC::BCLRL, Convert__imm_14__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1479 /* bne */, PPC::BCC, Convert__imm_68__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1479 /* bne */, PPC::BCC, Convert__imm_68__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1483 /* bne+ */, PPC::BCC, Convert__imm_71__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1483 /* bne+ */, PPC::BCC, Convert__imm_71__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1488 /* bne- */, PPC::BCC, Convert__imm_70__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1488 /* bne- */, PPC::BCC, Convert__imm_70__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1493 /* bnea */, PPC::BCCA, Convert__imm_68__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1493 /* bnea */, PPC::BCCA, Convert__imm_68__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1498 /* bnea+ */, PPC::BCCA, Convert__imm_71__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1498 /* bnea+ */, PPC::BCCA, Convert__imm_71__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1504 /* bnea- */, PPC::BCCA, Convert__imm_70__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1504 /* bnea- */, PPC::BCCA, Convert__imm_70__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1510 /* bnectr */, PPC::BCCTR, Convert__imm_68__regCR0, 0, {  }, },
  { 1510 /* bnectr */, PPC::BCCTR, Convert__imm_68__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1517 /* bnectr+ */, PPC::BCCTR, Convert__imm_71__regCR0, 0, {  }, },
  { 1517 /* bnectr+ */, PPC::BCCTR, Convert__imm_71__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1525 /* bnectr- */, PPC::BCCTR, Convert__imm_70__regCR0, 0, {  }, },
  { 1525 /* bnectr- */, PPC::BCCTR, Convert__imm_70__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1533 /* bnectrl */, PPC::BCCTRL, Convert__imm_68__regCR0, 0, {  }, },
  { 1533 /* bnectrl */, PPC::BCCTRL, Convert__imm_68__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1541 /* bnectrl+ */, PPC::BCCTRL, Convert__imm_71__regCR0, 0, {  }, },
  { 1541 /* bnectrl+ */, PPC::BCCTRL, Convert__imm_71__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1550 /* bnectrl- */, PPC::BCCTRL, Convert__imm_70__regCR0, 0, {  }, },
  { 1550 /* bnectrl- */, PPC::BCCTRL, Convert__imm_70__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1559 /* bnel */, PPC::BCCL, Convert__imm_68__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1559 /* bnel */, PPC::BCCL, Convert__imm_68__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1564 /* bnel+ */, PPC::BCCL, Convert__imm_71__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1564 /* bnel+ */, PPC::BCCL, Convert__imm_71__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1570 /* bnel- */, PPC::BCCL, Convert__imm_70__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1570 /* bnel- */, PPC::BCCL, Convert__imm_70__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1576 /* bnela */, PPC::BCCLA, Convert__imm_68__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1576 /* bnela */, PPC::BCCLA, Convert__imm_68__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1582 /* bnela+ */, PPC::BCCLA, Convert__imm_71__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1582 /* bnela+ */, PPC::BCCLA, Convert__imm_71__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1589 /* bnela- */, PPC::BCCLA, Convert__imm_70__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1589 /* bnela- */, PPC::BCCLA, Convert__imm_70__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1596 /* bnelr */, PPC::BCLR, Convert__imm_68__regCR0, 0, {  }, },
  { 1596 /* bnelr */, PPC::BCLR, Convert__imm_68__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1602 /* bnelr+ */, PPC::BCLR, Convert__imm_71__regCR0, 0, {  }, },
  { 1602 /* bnelr+ */, PPC::BCLR, Convert__imm_71__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1609 /* bnelr- */, PPC::BCLR, Convert__imm_70__regCR0, 0, {  }, },
  { 1609 /* bnelr- */, PPC::BCLR, Convert__imm_70__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1616 /* bnelrl */, PPC::BCLRL, Convert__imm_68__regCR0, 0, {  }, },
  { 1616 /* bnelrl */, PPC::BCLRL, Convert__imm_68__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1623 /* bnelrl+ */, PPC::BCLRL, Convert__imm_71__regCR0, 0, {  }, },
  { 1623 /* bnelrl+ */, PPC::BCLRL, Convert__imm_71__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1631 /* bnelrl- */, PPC::BCLRL, Convert__imm_70__regCR0, 0, {  }, },
  { 1631 /* bnelrl- */, PPC::BCLRL, Convert__imm_70__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1639 /* bng */, PPC::BCC, Convert__imm_36__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1639 /* bng */, PPC::BCC, Convert__imm_36__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1643 /* bng+ */, PPC::BCC, Convert__imm_39__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1643 /* bng+ */, PPC::BCC, Convert__imm_39__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1648 /* bng- */, PPC::BCC, Convert__imm_38__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1648 /* bng- */, PPC::BCC, Convert__imm_38__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1653 /* bnga */, PPC::BCCA, Convert__imm_36__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1653 /* bnga */, PPC::BCCA, Convert__imm_36__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1658 /* bnga+ */, PPC::BCCA, Convert__imm_39__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1658 /* bnga+ */, PPC::BCCA, Convert__imm_39__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1664 /* bnga- */, PPC::BCCA, Convert__imm_38__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1664 /* bnga- */, PPC::BCCA, Convert__imm_38__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1670 /* bngctr */, PPC::BCCTR, Convert__imm_36__regCR0, 0, {  }, },
  { 1670 /* bngctr */, PPC::BCCTR, Convert__imm_36__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1677 /* bngctr+ */, PPC::BCCTR, Convert__imm_39__regCR0, 0, {  }, },
  { 1677 /* bngctr+ */, PPC::BCCTR, Convert__imm_39__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1685 /* bngctr- */, PPC::BCCTR, Convert__imm_38__regCR0, 0, {  }, },
  { 1685 /* bngctr- */, PPC::BCCTR, Convert__imm_38__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1693 /* bngctrl */, PPC::BCCTRL, Convert__imm_36__regCR0, 0, {  }, },
  { 1693 /* bngctrl */, PPC::BCCTRL, Convert__imm_36__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1701 /* bngctrl+ */, PPC::BCCTRL, Convert__imm_39__regCR0, 0, {  }, },
  { 1701 /* bngctrl+ */, PPC::BCCTRL, Convert__imm_39__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1710 /* bngctrl- */, PPC::BCCTRL, Convert__imm_38__regCR0, 0, {  }, },
  { 1710 /* bngctrl- */, PPC::BCCTRL, Convert__imm_38__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1719 /* bngl */, PPC::BCCL, Convert__imm_36__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1719 /* bngl */, PPC::BCCL, Convert__imm_36__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1724 /* bngl+ */, PPC::BCCL, Convert__imm_39__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1724 /* bngl+ */, PPC::BCCL, Convert__imm_39__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1730 /* bngl- */, PPC::BCCL, Convert__imm_38__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1730 /* bngl- */, PPC::BCCL, Convert__imm_38__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1736 /* bngla */, PPC::BCCLA, Convert__imm_36__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1736 /* bngla */, PPC::BCCLA, Convert__imm_36__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1742 /* bngla+ */, PPC::BCCLA, Convert__imm_39__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1742 /* bngla+ */, PPC::BCCLA, Convert__imm_39__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1749 /* bngla- */, PPC::BCCLA, Convert__imm_38__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1749 /* bngla- */, PPC::BCCLA, Convert__imm_38__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1756 /* bnglr */, PPC::BCLR, Convert__imm_36__regCR0, 0, {  }, },
  { 1756 /* bnglr */, PPC::BCLR, Convert__imm_36__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1762 /* bnglr+ */, PPC::BCLR, Convert__imm_39__regCR0, 0, {  }, },
  { 1762 /* bnglr+ */, PPC::BCLR, Convert__imm_39__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1769 /* bnglr- */, PPC::BCLR, Convert__imm_38__regCR0, 0, {  }, },
  { 1769 /* bnglr- */, PPC::BCLR, Convert__imm_38__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1776 /* bnglrl */, PPC::BCLRL, Convert__imm_36__regCR0, 0, {  }, },
  { 1776 /* bnglrl */, PPC::BCLRL, Convert__imm_36__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1783 /* bnglrl+ */, PPC::BCLRL, Convert__imm_39__regCR0, 0, {  }, },
  { 1783 /* bnglrl+ */, PPC::BCLRL, Convert__imm_39__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1791 /* bnglrl- */, PPC::BCLRL, Convert__imm_38__regCR0, 0, {  }, },
  { 1791 /* bnglrl- */, PPC::BCLRL, Convert__imm_38__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1799 /* bnl */, PPC::BCC, Convert__imm_4__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1799 /* bnl */, PPC::BCC, Convert__imm_4__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1803 /* bnl+ */, PPC::BCC, Convert__imm_7__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1803 /* bnl+ */, PPC::BCC, Convert__imm_7__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1808 /* bnl- */, PPC::BCC, Convert__imm_6__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1808 /* bnl- */, PPC::BCC, Convert__imm_6__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1813 /* bnla */, PPC::BCCA, Convert__imm_4__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1813 /* bnla */, PPC::BCCA, Convert__imm_4__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1818 /* bnla+ */, PPC::BCCA, Convert__imm_7__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1818 /* bnla+ */, PPC::BCCA, Convert__imm_7__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1824 /* bnla- */, PPC::BCCA, Convert__imm_6__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1824 /* bnla- */, PPC::BCCA, Convert__imm_6__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1830 /* bnlctr */, PPC::BCCTR, Convert__imm_4__regCR0, 0, {  }, },
  { 1830 /* bnlctr */, PPC::BCCTR, Convert__imm_4__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1837 /* bnlctr+ */, PPC::BCCTR, Convert__imm_7__regCR0, 0, {  }, },
  { 1837 /* bnlctr+ */, PPC::BCCTR, Convert__imm_7__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1845 /* bnlctr- */, PPC::BCCTR, Convert__imm_6__regCR0, 0, {  }, },
  { 1845 /* bnlctr- */, PPC::BCCTR, Convert__imm_6__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1853 /* bnlctrl */, PPC::BCCTRL, Convert__imm_4__regCR0, 0, {  }, },
  { 1853 /* bnlctrl */, PPC::BCCTRL, Convert__imm_4__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1861 /* bnlctrl+ */, PPC::BCCTRL, Convert__imm_7__regCR0, 0, {  }, },
  { 1861 /* bnlctrl+ */, PPC::BCCTRL, Convert__imm_7__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1870 /* bnlctrl- */, PPC::BCCTRL, Convert__imm_6__regCR0, 0, {  }, },
  { 1870 /* bnlctrl- */, PPC::BCCTRL, Convert__imm_6__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1879 /* bnll */, PPC::BCCL, Convert__imm_4__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1879 /* bnll */, PPC::BCCL, Convert__imm_4__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1884 /* bnll+ */, PPC::BCCL, Convert__imm_7__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1884 /* bnll+ */, PPC::BCCL, Convert__imm_7__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1890 /* bnll- */, PPC::BCCL, Convert__imm_6__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1890 /* bnll- */, PPC::BCCL, Convert__imm_6__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1896 /* bnlla */, PPC::BCCLA, Convert__imm_4__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1896 /* bnlla */, PPC::BCCLA, Convert__imm_4__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1902 /* bnlla+ */, PPC::BCCLA, Convert__imm_7__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1902 /* bnlla+ */, PPC::BCCLA, Convert__imm_7__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1909 /* bnlla- */, PPC::BCCLA, Convert__imm_6__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1909 /* bnlla- */, PPC::BCCLA, Convert__imm_6__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1916 /* bnllr */, PPC::BCLR, Convert__imm_4__regCR0, 0, {  }, },
  { 1916 /* bnllr */, PPC::BCLR, Convert__imm_4__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1922 /* bnllr+ */, PPC::BCLR, Convert__imm_7__regCR0, 0, {  }, },
  { 1922 /* bnllr+ */, PPC::BCLR, Convert__imm_7__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1929 /* bnllr- */, PPC::BCLR, Convert__imm_6__regCR0, 0, {  }, },
  { 1929 /* bnllr- */, PPC::BCLR, Convert__imm_6__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1936 /* bnllrl */, PPC::BCLRL, Convert__imm_4__regCR0, 0, {  }, },
  { 1936 /* bnllrl */, PPC::BCLRL, Convert__imm_4__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1943 /* bnllrl+ */, PPC::BCLRL, Convert__imm_7__regCR0, 0, {  }, },
  { 1943 /* bnllrl+ */, PPC::BCLRL, Convert__imm_7__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1951 /* bnllrl- */, PPC::BCLRL, Convert__imm_6__regCR0, 0, {  }, },
  { 1951 /* bnllrl- */, PPC::BCLRL, Convert__imm_6__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1959 /* bns */, PPC::BCC, Convert__imm_100__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1959 /* bns */, PPC::BCC, Convert__imm_100__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1963 /* bns+ */, PPC::BCC, Convert__imm_103__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1963 /* bns+ */, PPC::BCC, Convert__imm_103__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1968 /* bns- */, PPC::BCC, Convert__imm_102__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1968 /* bns- */, PPC::BCC, Convert__imm_102__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1973 /* bnsa */, PPC::BCCA, Convert__imm_100__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1973 /* bnsa */, PPC::BCCA, Convert__imm_100__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1978 /* bnsa+ */, PPC::BCCA, Convert__imm_103__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1978 /* bnsa+ */, PPC::BCCA, Convert__imm_103__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1984 /* bnsa- */, PPC::BCCA, Convert__imm_102__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1984 /* bnsa- */, PPC::BCCA, Convert__imm_102__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1990 /* bnsctr */, PPC::BCCTR, Convert__imm_100__regCR0, 0, {  }, },
  { 1990 /* bnsctr */, PPC::BCCTR, Convert__imm_100__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1997 /* bnsctr+ */, PPC::BCCTR, Convert__imm_103__regCR0, 0, {  }, },
  { 1997 /* bnsctr+ */, PPC::BCCTR, Convert__imm_103__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2005 /* bnsctr- */, PPC::BCCTR, Convert__imm_102__regCR0, 0, {  }, },
  { 2005 /* bnsctr- */, PPC::BCCTR, Convert__imm_102__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2013 /* bnsctrl */, PPC::BCCTRL, Convert__imm_100__regCR0, 0, {  }, },
  { 2013 /* bnsctrl */, PPC::BCCTRL, Convert__imm_100__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2021 /* bnsctrl+ */, PPC::BCCTRL, Convert__imm_103__regCR0, 0, {  }, },
  { 2021 /* bnsctrl+ */, PPC::BCCTRL, Convert__imm_103__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2030 /* bnsctrl- */, PPC::BCCTRL, Convert__imm_102__regCR0, 0, {  }, },
  { 2030 /* bnsctrl- */, PPC::BCCTRL, Convert__imm_102__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2039 /* bnsl */, PPC::BCCL, Convert__imm_100__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2039 /* bnsl */, PPC::BCCL, Convert__imm_100__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2044 /* bnsl+ */, PPC::BCCL, Convert__imm_103__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2044 /* bnsl+ */, PPC::BCCL, Convert__imm_103__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2050 /* bnsl- */, PPC::BCCL, Convert__imm_102__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2050 /* bnsl- */, PPC::BCCL, Convert__imm_102__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2056 /* bnsla */, PPC::BCCLA, Convert__imm_100__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2056 /* bnsla */, PPC::BCCLA, Convert__imm_100__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2062 /* bnsla+ */, PPC::BCCLA, Convert__imm_103__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2062 /* bnsla+ */, PPC::BCCLA, Convert__imm_103__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2069 /* bnsla- */, PPC::BCCLA, Convert__imm_102__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2069 /* bnsla- */, PPC::BCCLA, Convert__imm_102__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2076 /* bnslr */, PPC::BCLR, Convert__imm_100__regCR0, 0, {  }, },
  { 2076 /* bnslr */, PPC::BCLR, Convert__imm_100__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2082 /* bnslr+ */, PPC::BCLR, Convert__imm_103__regCR0, 0, {  }, },
  { 2082 /* bnslr+ */, PPC::BCLR, Convert__imm_103__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2089 /* bnslr- */, PPC::BCLR, Convert__imm_102__regCR0, 0, {  }, },
  { 2089 /* bnslr- */, PPC::BCLR, Convert__imm_102__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2096 /* bnslrl */, PPC::BCLRL, Convert__imm_100__regCR0, 0, {  }, },
  { 2096 /* bnslrl */, PPC::BCLRL, Convert__imm_100__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2103 /* bnslrl+ */, PPC::BCLRL, Convert__imm_103__regCR0, 0, {  }, },
  { 2103 /* bnslrl+ */, PPC::BCLRL, Convert__imm_103__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2111 /* bnslrl- */, PPC::BCLRL, Convert__imm_102__regCR0, 0, {  }, },
  { 2111 /* bnslrl- */, PPC::BCLRL, Convert__imm_102__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2119 /* bnu */, PPC::BCC, Convert__imm_100__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2119 /* bnu */, PPC::BCC, Convert__imm_100__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2123 /* bnu+ */, PPC::BCC, Convert__imm_103__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2123 /* bnu+ */, PPC::BCC, Convert__imm_103__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2128 /* bnu- */, PPC::BCC, Convert__imm_102__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2128 /* bnu- */, PPC::BCC, Convert__imm_102__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2133 /* bnua */, PPC::BCCA, Convert__imm_100__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2133 /* bnua */, PPC::BCCA, Convert__imm_100__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2138 /* bnua+ */, PPC::BCCA, Convert__imm_103__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2138 /* bnua+ */, PPC::BCCA, Convert__imm_103__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2144 /* bnua- */, PPC::BCCA, Convert__imm_102__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2144 /* bnua- */, PPC::BCCA, Convert__imm_102__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2150 /* bnuctr */, PPC::BCCTR, Convert__imm_100__regCR0, 0, {  }, },
  { 2150 /* bnuctr */, PPC::BCCTR, Convert__imm_100__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2157 /* bnuctr+ */, PPC::BCCTR, Convert__imm_103__regCR0, 0, {  }, },
  { 2157 /* bnuctr+ */, PPC::BCCTR, Convert__imm_103__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2165 /* bnuctr- */, PPC::BCCTR, Convert__imm_102__regCR0, 0, {  }, },
  { 2165 /* bnuctr- */, PPC::BCCTR, Convert__imm_102__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2173 /* bnuctrl */, PPC::BCCTRL, Convert__imm_100__regCR0, 0, {  }, },
  { 2173 /* bnuctrl */, PPC::BCCTRL, Convert__imm_100__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2181 /* bnuctrl+ */, PPC::BCCTRL, Convert__imm_103__regCR0, 0, {  }, },
  { 2181 /* bnuctrl+ */, PPC::BCCTRL, Convert__imm_103__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2190 /* bnuctrl- */, PPC::BCCTRL, Convert__imm_102__regCR0, 0, {  }, },
  { 2190 /* bnuctrl- */, PPC::BCCTRL, Convert__imm_102__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2199 /* bnul */, PPC::BCCL, Convert__imm_100__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2199 /* bnul */, PPC::BCCL, Convert__imm_100__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2204 /* bnul+ */, PPC::BCCL, Convert__imm_103__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2204 /* bnul+ */, PPC::BCCL, Convert__imm_103__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2210 /* bnul- */, PPC::BCCL, Convert__imm_102__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2210 /* bnul- */, PPC::BCCL, Convert__imm_102__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2216 /* bnula */, PPC::BCCLA, Convert__imm_100__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2216 /* bnula */, PPC::BCCLA, Convert__imm_100__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2222 /* bnula+ */, PPC::BCCLA, Convert__imm_103__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2222 /* bnula+ */, PPC::BCCLA, Convert__imm_103__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2229 /* bnula- */, PPC::BCCLA, Convert__imm_102__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2229 /* bnula- */, PPC::BCCLA, Convert__imm_102__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2236 /* bnulr */, PPC::BCLR, Convert__imm_100__regCR0, 0, {  }, },
  { 2236 /* bnulr */, PPC::BCLR, Convert__imm_100__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2242 /* bnulr+ */, PPC::BCLR, Convert__imm_103__regCR0, 0, {  }, },
  { 2242 /* bnulr+ */, PPC::BCLR, Convert__imm_103__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2249 /* bnulr- */, PPC::BCLR, Convert__imm_102__regCR0, 0, {  }, },
  { 2249 /* bnulr- */, PPC::BCLR, Convert__imm_102__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2256 /* bnulrl */, PPC::BCLRL, Convert__imm_100__regCR0, 0, {  }, },
  { 2256 /* bnulrl */, PPC::BCLRL, Convert__imm_100__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2263 /* bnulrl+ */, PPC::BCLRL, Convert__imm_103__regCR0, 0, {  }, },
  { 2263 /* bnulrl+ */, PPC::BCLRL, Convert__imm_103__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2271 /* bnulrl- */, PPC::BCLRL, Convert__imm_102__regCR0, 0, {  }, },
  { 2271 /* bnulrl- */, PPC::BCLRL, Convert__imm_102__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2279 /* bso */, PPC::BCC, Convert__imm_108__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2279 /* bso */, PPC::BCC, Convert__imm_108__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2283 /* bso+ */, PPC::BCC, Convert__imm_111__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2283 /* bso+ */, PPC::BCC, Convert__imm_111__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2288 /* bso- */, PPC::BCC, Convert__imm_110__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2288 /* bso- */, PPC::BCC, Convert__imm_110__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2293 /* bsoa */, PPC::BCCA, Convert__imm_108__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2293 /* bsoa */, PPC::BCCA, Convert__imm_108__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2298 /* bsoa+ */, PPC::BCCA, Convert__imm_111__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2298 /* bsoa+ */, PPC::BCCA, Convert__imm_111__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2304 /* bsoa- */, PPC::BCCA, Convert__imm_110__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2304 /* bsoa- */, PPC::BCCA, Convert__imm_110__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2310 /* bsoctr */, PPC::BCCTR, Convert__imm_108__regCR0, 0, {  }, },
  { 2310 /* bsoctr */, PPC::BCCTR, Convert__imm_108__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2317 /* bsoctr+ */, PPC::BCCTR, Convert__imm_111__regCR0, 0, {  }, },
  { 2317 /* bsoctr+ */, PPC::BCCTR, Convert__imm_111__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2325 /* bsoctr- */, PPC::BCCTR, Convert__imm_110__regCR0, 0, {  }, },
  { 2325 /* bsoctr- */, PPC::BCCTR, Convert__imm_110__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2333 /* bsoctrl */, PPC::BCCTRL, Convert__imm_108__regCR0, 0, {  }, },
  { 2333 /* bsoctrl */, PPC::BCCTRL, Convert__imm_108__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2341 /* bsoctrl+ */, PPC::BCCTRL, Convert__imm_111__regCR0, 0, {  }, },
  { 2341 /* bsoctrl+ */, PPC::BCCTRL, Convert__imm_111__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2350 /* bsoctrl- */, PPC::BCCTRL, Convert__imm_110__regCR0, 0, {  }, },
  { 2350 /* bsoctrl- */, PPC::BCCTRL, Convert__imm_110__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2359 /* bsol */, PPC::BCCL, Convert__imm_108__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2359 /* bsol */, PPC::BCCL, Convert__imm_108__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2364 /* bsol+ */, PPC::BCCL, Convert__imm_111__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2364 /* bsol+ */, PPC::BCCL, Convert__imm_111__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2370 /* bsol- */, PPC::BCCL, Convert__imm_110__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2370 /* bsol- */, PPC::BCCL, Convert__imm_110__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2376 /* bsola */, PPC::BCCLA, Convert__imm_108__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2376 /* bsola */, PPC::BCCLA, Convert__imm_108__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2382 /* bsola+ */, PPC::BCCLA, Convert__imm_111__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2382 /* bsola+ */, PPC::BCCLA, Convert__imm_111__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2389 /* bsola- */, PPC::BCCLA, Convert__imm_110__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2389 /* bsola- */, PPC::BCCLA, Convert__imm_110__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2396 /* bsolr */, PPC::BCLR, Convert__imm_108__regCR0, 0, {  }, },
  { 2396 /* bsolr */, PPC::BCLR, Convert__imm_108__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2402 /* bsolr+ */, PPC::BCLR, Convert__imm_111__regCR0, 0, {  }, },
  { 2402 /* bsolr+ */, PPC::BCLR, Convert__imm_111__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2409 /* bsolr- */, PPC::BCLR, Convert__imm_110__regCR0, 0, {  }, },
  { 2409 /* bsolr- */, PPC::BCLR, Convert__imm_110__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2416 /* bsolrl */, PPC::BCLRL, Convert__imm_108__regCR0, 0, {  }, },
  { 2416 /* bsolrl */, PPC::BCLRL, Convert__imm_108__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2423 /* bsolrl+ */, PPC::BCLRL, Convert__imm_111__regCR0, 0, {  }, },
  { 2423 /* bsolrl+ */, PPC::BCLRL, Convert__imm_111__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2431 /* bsolrl- */, PPC::BCLRL, Convert__imm_110__regCR0, 0, {  }, },
  { 2431 /* bsolrl- */, PPC::BCLRL, Convert__imm_110__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2439 /* bt */, PPC::gBC, Convert__imm_12__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2442 /* bt+ */, PPC::gBC, Convert__imm_15__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2446 /* bt- */, PPC::gBC, Convert__imm_14__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2450 /* bta */, PPC::gBCA, Convert__imm_12__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2454 /* bta+ */, PPC::gBCA, Convert__imm_15__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2459 /* bta- */, PPC::gBCA, Convert__imm_14__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2464 /* btctr */, PPC::gBCCTR, Convert__imm_12__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 2470 /* btctr+ */, PPC::gBCCTR, Convert__imm_15__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 2477 /* btctr- */, PPC::gBCCTR, Convert__imm_14__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 2484 /* btctrl */, PPC::gBCCTRL, Convert__imm_12__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 2491 /* btctrl+ */, PPC::gBCCTRL, Convert__imm_15__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 2499 /* btctrl- */, PPC::gBCCTRL, Convert__imm_14__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 2507 /* btl */, PPC::gBCL, Convert__imm_12__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2511 /* btl+ */, PPC::gBCL, Convert__imm_15__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2516 /* btl- */, PPC::gBCL, Convert__imm_14__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2521 /* btla */, PPC::gBCLA, Convert__imm_12__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2526 /* btla+ */, PPC::gBCLA, Convert__imm_15__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2532 /* btla- */, PPC::gBCLA, Convert__imm_14__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2538 /* btlr */, PPC::gBCLR, Convert__imm_12__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 2543 /* btlr+ */, PPC::gBCLR, Convert__imm_15__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 2549 /* btlr- */, PPC::gBCLR, Convert__imm_14__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 2555 /* btlrl */, PPC::gBCLRL, Convert__imm_12__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 2561 /* btlrl+ */, PPC::gBCLRL, Convert__imm_15__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 2568 /* btlrl- */, PPC::gBCLRL, Convert__imm_14__RegCRBITRC1_0__imm_0, 0, { MCK_RegCRBITRC }, },
  { 2575 /* bun */, PPC::BCC, Convert__imm_108__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2575 /* bun */, PPC::BCC, Convert__imm_108__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2579 /* bun+ */, PPC::BCC, Convert__imm_111__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2579 /* bun+ */, PPC::BCC, Convert__imm_111__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2584 /* bun- */, PPC::BCC, Convert__imm_110__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2584 /* bun- */, PPC::BCC, Convert__imm_110__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2589 /* buna */, PPC::BCCA, Convert__imm_108__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2589 /* buna */, PPC::BCCA, Convert__imm_108__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2594 /* buna+ */, PPC::BCCA, Convert__imm_111__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2594 /* buna+ */, PPC::BCCA, Convert__imm_111__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2600 /* buna- */, PPC::BCCA, Convert__imm_110__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2600 /* buna- */, PPC::BCCA, Convert__imm_110__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2606 /* bunctr */, PPC::BCCTR, Convert__imm_108__regCR0, 0, {  }, },
  { 2606 /* bunctr */, PPC::BCCTR, Convert__imm_108__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2613 /* bunctr+ */, PPC::BCCTR, Convert__imm_111__regCR0, 0, {  }, },
  { 2613 /* bunctr+ */, PPC::BCCTR, Convert__imm_111__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2621 /* bunctr- */, PPC::BCCTR, Convert__imm_110__regCR0, 0, {  }, },
  { 2621 /* bunctr- */, PPC::BCCTR, Convert__imm_110__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2629 /* bunctrl */, PPC::BCCTRL, Convert__imm_108__regCR0, 0, {  }, },
  { 2629 /* bunctrl */, PPC::BCCTRL, Convert__imm_108__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2637 /* bunctrl+ */, PPC::BCCTRL, Convert__imm_111__regCR0, 0, {  }, },
  { 2637 /* bunctrl+ */, PPC::BCCTRL, Convert__imm_111__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2646 /* bunctrl- */, PPC::BCCTRL, Convert__imm_110__regCR0, 0, {  }, },
  { 2646 /* bunctrl- */, PPC::BCCTRL, Convert__imm_110__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2655 /* bunl */, PPC::BCCL, Convert__imm_108__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2655 /* bunl */, PPC::BCCL, Convert__imm_108__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2660 /* bunl+ */, PPC::BCCL, Convert__imm_111__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2660 /* bunl+ */, PPC::BCCL, Convert__imm_111__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2666 /* bunl- */, PPC::BCCL, Convert__imm_110__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2666 /* bunl- */, PPC::BCCL, Convert__imm_110__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2672 /* bunla */, PPC::BCCLA, Convert__imm_108__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2672 /* bunla */, PPC::BCCLA, Convert__imm_108__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2678 /* bunla+ */, PPC::BCCLA, Convert__imm_111__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2678 /* bunla+ */, PPC::BCCLA, Convert__imm_111__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2685 /* bunla- */, PPC::BCCLA, Convert__imm_110__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2685 /* bunla- */, PPC::BCCLA, Convert__imm_110__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2692 /* bunlr */, PPC::BCLR, Convert__imm_108__regCR0, 0, {  }, },
  { 2692 /* bunlr */, PPC::BCLR, Convert__imm_108__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2698 /* bunlr+ */, PPC::BCLR, Convert__imm_111__regCR0, 0, {  }, },
  { 2698 /* bunlr+ */, PPC::BCLR, Convert__imm_111__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2705 /* bunlr- */, PPC::BCLR, Convert__imm_110__regCR0, 0, {  }, },
  { 2705 /* bunlr- */, PPC::BCLR, Convert__imm_110__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2712 /* bunlrl */, PPC::BCLRL, Convert__imm_108__regCR0, 0, {  }, },
  { 2712 /* bunlrl */, PPC::BCLRL, Convert__imm_108__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2719 /* bunlrl+ */, PPC::BCLRL, Convert__imm_111__regCR0, 0, {  }, },
  { 2719 /* bunlrl+ */, PPC::BCLRL, Convert__imm_111__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2727 /* bunlrl- */, PPC::BCLRL, Convert__imm_110__regCR0, 0, {  }, },
  { 2727 /* bunlrl- */, PPC::BCLRL, Convert__imm_110__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2735 /* clrldi */, PPC::RLDICL, Convert__RegG8RC1_0__RegG8RC1_1__imm_0__U6Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 2735 /* clrldi */, PPC::RLDICLo, Convert__RegG8RC1_1__RegG8RC1_2__imm_0__U6Imm1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 2742 /* clrlsldi */, PPC::CLRLSLDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 2742 /* clrlsldi */, PPC::CLRLSLDIo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 2751 /* clrlslwi */, PPC::CLRLSLWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 2751 /* clrlslwi */, PPC::CLRLSLWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 2760 /* clrlwi */, PPC::RLWINM, Convert__RegGPRC1_0__RegGPRC1_1__imm_0__U5Imm1_2__imm_31, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 2760 /* clrlwi */, PPC::RLWINMo, Convert__RegGPRC1_1__RegGPRC1_2__imm_0__U5Imm1_3__imm_31, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 2767 /* clrrdi */, PPC::CLRRDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 2767 /* clrrdi */, PPC::CLRRDIo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 2774 /* clrrwi */, PPC::CLRRWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 2774 /* clrrwi */, PPC::CLRRWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 2781 /* cmp */, PPC::CMPW, Convert__RegCRRC1_0__RegGPRC1_2__RegGPRC1_3, 0, { MCK_RegCRRC, MCK_0, MCK_RegGPRC, MCK_RegGPRC }, },
  { 2781 /* cmp */, PPC::CMPD, Convert__RegCRRC1_0__RegG8RC1_2__RegG8RC1_3, 0, { MCK_RegCRRC, MCK_1, MCK_RegG8RC, MCK_RegG8RC }, },
  { 2785 /* cmpd */, PPC::CMPD, Convert__regCR0__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 2785 /* cmpd */, PPC::CMPD, Convert__RegCRRC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegCRRC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 2790 /* cmpdi */, PPC::CMPDI, Convert__regCR0__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 2790 /* cmpdi */, PPC::CMPDI, Convert__RegCRRC1_0__RegG8RC1_1__S16Imm1_2, 0, { MCK_RegCRRC, MCK_RegG8RC, MCK_S16Imm }, },
  { 2796 /* cmpi */, PPC::CMPWI, Convert__RegCRRC1_0__RegGPRC1_2__S16Imm1_3, 0, { MCK_RegCRRC, MCK_0, MCK_RegGPRC, MCK_S16Imm }, },
  { 2796 /* cmpi */, PPC::CMPDI, Convert__RegCRRC1_0__RegG8RC1_2__S16Imm1_3, 0, { MCK_RegCRRC, MCK_1, MCK_RegG8RC, MCK_S16Imm }, },
  { 2801 /* cmpl */, PPC::CMPLW, Convert__RegCRRC1_0__RegGPRC1_2__RegGPRC1_3, 0, { MCK_RegCRRC, MCK_0, MCK_RegGPRC, MCK_RegGPRC }, },
  { 2801 /* cmpl */, PPC::CMPLD, Convert__RegCRRC1_0__RegG8RC1_2__RegG8RC1_3, 0, { MCK_RegCRRC, MCK_1, MCK_RegG8RC, MCK_RegG8RC }, },
  { 2806 /* cmpld */, PPC::CMPLD, Convert__regCR0__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 2806 /* cmpld */, PPC::CMPLD, Convert__RegCRRC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegCRRC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 2812 /* cmpldi */, PPC::CMPLDI, Convert__regCR0__RegG8RC1_0__U16Imm1_1, 0, { MCK_RegG8RC, MCK_U16Imm }, },
  { 2812 /* cmpldi */, PPC::CMPLDI, Convert__RegCRRC1_0__RegG8RC1_1__U16Imm1_2, 0, { MCK_RegCRRC, MCK_RegG8RC, MCK_U16Imm }, },
  { 2819 /* cmpli */, PPC::CMPLWI, Convert__RegCRRC1_0__RegGPRC1_2__U16Imm1_3, 0, { MCK_RegCRRC, MCK_0, MCK_RegGPRC, MCK_U16Imm }, },
  { 2819 /* cmpli */, PPC::CMPLDI, Convert__RegCRRC1_0__RegG8RC1_2__U16Imm1_3, 0, { MCK_RegCRRC, MCK_1, MCK_RegG8RC, MCK_U16Imm }, },
  { 2825 /* cmplw */, PPC::CMPLW, Convert__regCR0__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 2825 /* cmplw */, PPC::CMPLW, Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegCRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 2831 /* cmplwi */, PPC::CMPLWI, Convert__regCR0__RegGPRC1_0__U16Imm1_1, 0, { MCK_RegGPRC, MCK_U16Imm }, },
  { 2831 /* cmplwi */, PPC::CMPLWI, Convert__RegCRRC1_0__RegGPRC1_1__U16Imm1_2, 0, { MCK_RegCRRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 2838 /* cmpw */, PPC::CMPW, Convert__regCR0__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 2838 /* cmpw */, PPC::CMPW, Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegCRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 2843 /* cmpwi */, PPC::CMPWI, Convert__regCR0__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 2843 /* cmpwi */, PPC::CMPWI, Convert__RegCRRC1_0__RegGPRC1_1__S16Imm1_2, 0, { MCK_RegCRRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 2849 /* cntlzd */, PPC::CNTLZD, Convert__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 2849 /* cntlzd */, PPC::CNTLZDo, Convert__RegG8RC1_1__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, },
  { 2856 /* cntlzw */, PPC::CNTLZW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 2856 /* cntlzw */, PPC::CNTLZWo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 2863 /* crand */, PPC::CRAND, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 2869 /* crandc */, PPC::CRANDC, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 2876 /* crclr */, PPC::CRXOR, Convert__RegCRBITRC1_0__RegCRBITRC1_0__RegCRBITRC1_0, 0, { MCK_RegCRBITRC }, },
  { 2882 /* creqv */, PPC::CREQV, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 2888 /* crmove */, PPC::CROR, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_1, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 2895 /* crnand */, PPC::CRNAND, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 2902 /* crnor */, PPC::CRNOR, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 2908 /* crnot */, PPC::CRNOR, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_1, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 2914 /* cror */, PPC::CROR, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 2919 /* crorc */, PPC::CRORC, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 2925 /* crset */, PPC::CREQV, Convert__RegCRBITRC1_0__RegCRBITRC1_0__RegCRBITRC1_0, 0, { MCK_RegCRBITRC }, },
  { 2931 /* crxor */, PPC::CRXOR, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 2937 /* dcba */, PPC::DCBA, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 2942 /* dcbf */, PPC::DCBF, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 2947 /* dcbi */, PPC::DCBI, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 2952 /* dcbst */, PPC::DCBST, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 2958 /* dcbt */, PPC::DCBT, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 2963 /* dcbtst */, PPC::DCBTST, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 2970 /* dcbz */, PPC::DCBZ, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 2975 /* dcbzl */, PPC::DCBZL, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 2981 /* divd */, PPC::DIVD, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 2981 /* divd */, PPC::DIVDo, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 2986 /* divdu */, PPC::DIVDU, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 2986 /* divdu */, PPC::DIVDUo, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 2992 /* divw */, PPC::DIVW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 2992 /* divw */, PPC::DIVWo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 2997 /* divwu */, PPC::DIVWU, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 2997 /* divwu */, PPC::DIVWUo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3003 /* eieio */, PPC::EIEIO, Convert_NoOperands, 0, {  }, },
  { 3009 /* eqv */, PPC::EQV8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3009 /* eqv */, PPC::EQV, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3009 /* eqv */, PPC::EQV8o, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3009 /* eqv */, PPC::EQVo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3013 /* extldi */, PPC::EXTLDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 3013 /* extldi */, PPC::EXTLDIo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 3020 /* extlwi */, PPC::EXTLWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 3020 /* extlwi */, PPC::EXTLWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 3027 /* extrdi */, PPC::EXTRDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 3027 /* extrdi */, PPC::EXTRDIo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 3034 /* extrwi */, PPC::EXTRWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 3034 /* extrwi */, PPC::EXTRWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 3041 /* extsb */, PPC::EXTSB8, Convert__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 3041 /* extsb */, PPC::EXTSB, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3041 /* extsb */, PPC::EXTSB8o, Convert__RegG8RC1_1__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3041 /* extsb */, PPC::EXTSBo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3047 /* extsh */, PPC::EXTSH8, Convert__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 3047 /* extsh */, PPC::EXTSH, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3047 /* extsh */, PPC::EXTSH8o, Convert__RegG8RC1_1__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3047 /* extsh */, PPC::EXTSHo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3053 /* extsw */, PPC::EXTSW, Convert__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 3053 /* extsw */, PPC::EXTSW_32_64, Convert__RegG8RC1_0__RegGPRC1_1, 0, { MCK_RegG8RC, MCK_RegGPRC }, },
  { 3053 /* extsw */, PPC::EXTSWo, Convert__RegG8RC1_1__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3053 /* extsw */, PPC::EXTSW_32_64o, Convert__RegG8RC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegGPRC }, },
  { 3059 /* fabs */, PPC::FABSS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 3059 /* fabs */, PPC::FABSD, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 3059 /* fabs */, PPC::FABSSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 3059 /* fabs */, PPC::FABSDo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 3064 /* fadd */, PPC::FADD, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 3064 /* fadd */, PPC::FADDo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 3069 /* fadds */, PPC::FADDS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 3069 /* fadds */, PPC::FADDSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 3075 /* fcfid */, PPC::FCFID, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 3075 /* fcfid */, PPC::FCFIDo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 3081 /* fcfids */, PPC::FCFIDS, Convert__RegF4RC1_0__RegF8RC1_1, 0, { MCK_RegF4RC, MCK_RegF8RC }, },
  { 3081 /* fcfids */, PPC::FCFIDSo, Convert__RegF4RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF8RC }, },
  { 3088 /* fcfidu */, PPC::FCFIDU, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 3088 /* fcfidu */, PPC::FCFIDUo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 3095 /* fcfidus */, PPC::FCFIDUS, Convert__RegF4RC1_0__RegF8RC1_1, 0, { MCK_RegF4RC, MCK_RegF8RC }, },
  { 3095 /* fcfidus */, PPC::FCFIDUSo, Convert__RegF4RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF8RC }, },
  { 3103 /* fcmpu */, PPC::FCMPUS, Convert__RegCRRC1_0__RegF4RC1_1__RegF4RC1_2, 0, { MCK_RegCRRC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 3103 /* fcmpu */, PPC::FCMPUD, Convert__RegCRRC1_0__RegF8RC1_1__RegF8RC1_2, 0, { MCK_RegCRRC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 3109 /* fctiduz */, PPC::FCTIDUZ, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 3109 /* fctiduz */, PPC::FCTIDUZo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 3117 /* fctidz */, PPC::FCTIDZ, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 3117 /* fctidz */, PPC::FCTIDZo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 3124 /* fctiwuz */, PPC::FCTIWUZ, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 3124 /* fctiwuz */, PPC::FCTIWUZo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 3132 /* fctiwz */, PPC::FCTIWZ, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 3132 /* fctiwz */, PPC::FCTIWZo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 3139 /* fdiv */, PPC::FDIV, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 3139 /* fdiv */, PPC::FDIVo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 3144 /* fdivs */, PPC::FDIVS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 3144 /* fdivs */, PPC::FDIVSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 3150 /* fmadd */, PPC::FMADD, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 3150 /* fmadd */, PPC::FMADDo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 3156 /* fmadds */, PPC::FMADDS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 3156 /* fmadds */, PPC::FMADDSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 3163 /* fmr */, PPC::FMR, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 3163 /* fmr */, PPC::FMRo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 3167 /* fmsub */, PPC::FMSUB, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 3167 /* fmsub */, PPC::FMSUBo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 3173 /* fmsubs */, PPC::FMSUBS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 3173 /* fmsubs */, PPC::FMSUBSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 3180 /* fmul */, PPC::FMUL, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 3180 /* fmul */, PPC::FMULo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 3185 /* fmuls */, PPC::FMULS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 3185 /* fmuls */, PPC::FMULSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 3191 /* fnabs */, PPC::FNABSS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 3191 /* fnabs */, PPC::FNABSD, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 3191 /* fnabs */, PPC::FNABSSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 3191 /* fnabs */, PPC::FNABSDo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 3197 /* fneg */, PPC::FNEGS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 3197 /* fneg */, PPC::FNEGD, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 3197 /* fneg */, PPC::FNEGSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 3197 /* fneg */, PPC::FNEGDo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 3202 /* fnmadd */, PPC::FNMADD, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 3202 /* fnmadd */, PPC::FNMADDo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 3209 /* fnmadds */, PPC::FNMADDS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 3209 /* fnmadds */, PPC::FNMADDSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 3217 /* fnmsub */, PPC::FNMSUB, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 3217 /* fnmsub */, PPC::FNMSUBo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 3224 /* fnmsubs */, PPC::FNMSUBS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 3224 /* fnmsubs */, PPC::FNMSUBSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 3232 /* fre */, PPC::FRE, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 3232 /* fre */, PPC::FREo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 3236 /* fres */, PPC::FRES, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 3236 /* fres */, PPC::FRESo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 3241 /* frim */, PPC::FRIMS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 3241 /* frim */, PPC::FRIMD, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 3241 /* frim */, PPC::FRIMSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 3241 /* frim */, PPC::FRIMDo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 3246 /* frin */, PPC::FRINS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 3246 /* frin */, PPC::FRIND, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 3246 /* frin */, PPC::FRINSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 3246 /* frin */, PPC::FRINDo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 3251 /* frip */, PPC::FRIPS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 3251 /* frip */, PPC::FRIPD, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 3251 /* frip */, PPC::FRIPSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 3251 /* frip */, PPC::FRIPDo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 3256 /* friz */, PPC::FRIZS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 3256 /* friz */, PPC::FRIZD, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 3256 /* friz */, PPC::FRIZSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 3256 /* friz */, PPC::FRIZDo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 3261 /* frsp */, PPC::FRSP, Convert__RegF4RC1_0__RegF8RC1_1, 0, { MCK_RegF4RC, MCK_RegF8RC }, },
  { 3261 /* frsp */, PPC::FRSPo, Convert__RegF4RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF8RC }, },
  { 3266 /* frsqrte */, PPC::FRSQRTE, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 3266 /* frsqrte */, PPC::FRSQRTEo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 3274 /* frsqrtes */, PPC::FRSQRTES, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 3274 /* frsqrtes */, PPC::FRSQRTESo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 3283 /* fsel */, PPC::FSELS, Convert__RegF4RC1_0__RegF8RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK_RegF4RC, MCK_RegF8RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 3283 /* fsel */, PPC::FSELD, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 3283 /* fsel */, PPC::FSELSo, Convert__RegF4RC1_1__RegF8RC1_2__RegF4RC1_3__RegF4RC1_4, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF8RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 3283 /* fsel */, PPC::FSELDo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 3288 /* fsqrt */, PPC::FSQRT, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 3288 /* fsqrt */, PPC::FSQRTo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 3294 /* fsqrts */, PPC::FSQRTS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 3294 /* fsqrts */, PPC::FSQRTSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 3301 /* fsub */, PPC::FSUB, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 3301 /* fsub */, PPC::FSUBo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 3306 /* fsubs */, PPC::FSUBS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 3306 /* fsubs */, PPC::FSUBSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 3312 /* icbi */, PPC::ICBI, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3317 /* inslwi */, PPC::INSLWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 3317 /* inslwi */, PPC::INSLWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 3324 /* insrdi */, PPC::INSRDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 3324 /* insrdi */, PPC::INSRDIo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 3331 /* insrwi */, PPC::INSRWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 3331 /* insrwi */, PPC::INSRWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 3338 /* isel */, PPC::ISEL8, Convert__RegG8RC1_0__RegG8RCNoX01_1__RegG8RC1_2__RegCRBITRC1_3, 0, { MCK_RegG8RC, MCK_RegG8RCNoX0, MCK_RegG8RC, MCK_RegCRBITRC }, },
  { 3338 /* isel */, PPC::ISEL, Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__RegCRBITRC1_3, 0, { MCK_RegGPRC, MCK_RegGPRCNoR0, MCK_RegGPRC, MCK_RegCRBITRC }, },
  { 3343 /* isync */, PPC::ISYNC, Convert_NoOperands, 0, {  }, },
  { 3349 /* la */, PPC::LAx, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 3352 /* lbz */, PPC::LBZ8, Convert__RegG8RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 3352 /* lbz */, PPC::LBZ, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 3356 /* lbzu */, PPC::LBZU8, Convert__RegG8RC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 3356 /* lbzu */, PPC::LBZU, Convert__RegGPRC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 3361 /* lbzux */, PPC::LBZUX8, Convert__RegG8RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3361 /* lbzux */, PPC::LBZUX, Convert__RegGPRC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3367 /* lbzx */, PPC::LBZX8, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3367 /* lbzx */, PPC::LBZX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3372 /* ld */, PPC::LD, Convert__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 3375 /* ldarx */, PPC::LDARX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3381 /* ldbrx */, PPC::LDBRX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3387 /* ldu */, PPC::LDU, Convert__RegG8RC1_0__imm_0__DispRIX1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 3391 /* ldux */, PPC::LDUX, Convert__RegG8RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3396 /* ldx */, PPC::LDX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3400 /* lfd */, PPC::LFD, Convert__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 3404 /* lfdu */, PPC::LFDU, Convert__RegF8RC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 3409 /* lfdux */, PPC::LFDUX, Convert__RegF8RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3415 /* lfdx */, PPC::LFDX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3420 /* lfiwax */, PPC::LFIWAX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3427 /* lfiwzx */, PPC::LFIWZX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3434 /* lfs */, PPC::LFS, Convert__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF4RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 3438 /* lfsu */, PPC::LFSU, Convert__RegF4RC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF4RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 3443 /* lfsux */, PPC::LFSUX, Convert__RegF4RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF4RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3449 /* lfsx */, PPC::LFSX, Convert__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF4RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3454 /* lha */, PPC::LHA8, Convert__RegG8RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 3454 /* lha */, PPC::LHA, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 3458 /* lhau */, PPC::LHAU8, Convert__RegG8RC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 3458 /* lhau */, PPC::LHAU, Convert__RegGPRC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 3463 /* lhaux */, PPC::LHAUX8, Convert__RegG8RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3463 /* lhaux */, PPC::LHAUX, Convert__RegGPRC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3469 /* lhax */, PPC::LHAX8, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3469 /* lhax */, PPC::LHAX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3474 /* lhbrx */, PPC::LHBRX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3480 /* lhz */, PPC::LHZ8, Convert__RegG8RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 3480 /* lhz */, PPC::LHZ, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 3484 /* lhzu */, PPC::LHZU8, Convert__RegG8RC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 3484 /* lhzu */, PPC::LHZU, Convert__RegGPRC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 3489 /* lhzux */, PPC::LHZUX8, Convert__RegG8RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3489 /* lhzux */, PPC::LHZUX, Convert__RegGPRC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3495 /* lhzx */, PPC::LHZX8, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3495 /* lhzx */, PPC::LHZX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3500 /* li */, PPC::LI8, Convert__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 3500 /* li */, PPC::LI, Convert__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 3503 /* lis */, PPC::LIS8, Convert__RegG8RC1_0__S17Imm1_1, 0, { MCK_RegG8RC, MCK_S17Imm }, },
  { 3503 /* lis */, PPC::LIS, Convert__RegGPRC1_0__S17Imm1_1, 0, { MCK_RegGPRC, MCK_S17Imm }, },
  { 3507 /* lmw */, PPC::LMW, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 3511 /* lvebx */, PPC::LVEBX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3517 /* lvehx */, PPC::LVEHX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3523 /* lvewx */, PPC::LVEWX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3529 /* lvsl */, PPC::LVSL, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3534 /* lvsr */, PPC::LVSR, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3539 /* lvx */, PPC::LVX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3543 /* lvxl */, PPC::LVXL, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3548 /* lwa */, PPC::LWA, Convert__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 3552 /* lwarx */, PPC::LWARX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3558 /* lwaux */, PPC::LWAUX, Convert__RegG8RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3564 /* lwax */, PPC::LWAX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3569 /* lwbrx */, PPC::LWBRX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3575 /* lwsync */, PPC::SYNC, Convert__imm_1, 0, {  }, },
  { 3582 /* lwz */, PPC::LWZ8, Convert__RegG8RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 3582 /* lwz */, PPC::LWZ, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 3586 /* lwzu */, PPC::LWZU8, Convert__RegG8RC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 3586 /* lwzu */, PPC::LWZU, Convert__RegGPRC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 3591 /* lwzux */, PPC::LWZUX8, Convert__RegG8RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3591 /* lwzux */, PPC::LWZUX, Convert__RegGPRC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3597 /* lwzx */, PPC::LWZX8, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3597 /* lwzx */, PPC::LWZX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3602 /* mcrf */, PPC::MCRF, Convert__RegCRRC1_0__RegCRRC1_1, 0, { MCK_RegCRRC, MCK_RegCRRC }, },
  { 3607 /* mfcr */, PPC::MFCR8, Convert__RegG8RC1_0, 0, { MCK_RegG8RC }, },
  { 3607 /* mfcr */, PPC::MFCR, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 3612 /* mfctr */, PPC::MFCTR8, Convert__RegG8RC1_0, 0, { MCK_RegG8RC }, },
  { 3612 /* mfctr */, PPC::MFCTR, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 3618 /* mffs */, PPC::MFFS, Convert__RegF8RC1_0, 0, { MCK_RegF8RC }, },
  { 3623 /* mflr */, PPC::MFLR8, Convert__RegG8RC1_0, 0, { MCK_RegG8RC }, },
  { 3623 /* mflr */, PPC::MFLR, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 3628 /* mfocrf */, PPC::MFOCRF8, Convert__RegG8RC1_0__CRBitMask1_1, 0, { MCK_RegG8RC, MCK_CRBitMask }, },
  { 3628 /* mfocrf */, PPC::MFOCRF, Convert__RegGPRC1_0__CRBitMask1_1, 0, { MCK_RegGPRC, MCK_CRBitMask }, },
  { 3635 /* mfspr */, PPC::MFSPR, Convert__RegGPRC1_0__Imm1_1, 0, { MCK_RegGPRC, MCK_Imm }, },
  { 3641 /* mftb */, PPC::MFTB, Convert__RegGPRC1_0__imm_268, 0, { MCK_RegGPRC }, },
  { 3641 /* mftb */, PPC::MFTB, Convert__RegGPRC1_0__Imm1_1, 0, { MCK_RegGPRC, MCK_Imm }, },
  { 3646 /* mftbu */, PPC::MFTB, Convert__RegGPRC1_0__imm_269, 0, { MCK_RegGPRC }, },
  { 3652 /* mfvscr */, PPC::MFVSCR, Convert__RegVRRC1_0, 0, { MCK_RegVRRC }, },
  { 3659 /* mfxer */, PPC::MFSPR, Convert__RegGPRC1_0__imm_1, 0, { MCK_RegGPRC }, },
  { 3665 /* mr */, PPC::OR8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 3665 /* mr */, PPC::OR8o, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3668 /* msync */, PPC::SYNC, Convert__imm_0, 0, {  }, },
  { 3674 /* mtcr */, PPC::MTCRF8, Convert__imm_255__RegG8RC1_0, 0, { MCK_RegG8RC }, },
  { 3679 /* mtcrf */, PPC::MTCRF8, Convert__Imm1_0__RegG8RC1_1, 0, { MCK_Imm, MCK_RegG8RC }, },
  { 3679 /* mtcrf */, PPC::MTCRF, Convert__Imm1_0__RegGPRC1_1, 0, { MCK_Imm, MCK_RegGPRC }, },
  { 3685 /* mtctr */, PPC::MTCTR8, Convert__RegG8RC1_0, 0, { MCK_RegG8RC }, },
  { 3685 /* mtctr */, PPC::MTCTR, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 3691 /* mtfsb0 */, PPC::MTFSB0, Convert__U5Imm1_0, 0, { MCK_U5Imm }, },
  { 3698 /* mtfsb1 */, PPC::MTFSB1, Convert__U5Imm1_0, 0, { MCK_U5Imm }, },
  { 3705 /* mtfsf */, PPC::MTFSF, Convert__Imm1_0__RegF8RC1_1, 0, { MCK_Imm, MCK_RegF8RC }, },
  { 3711 /* mtlr */, PPC::MTLR8, Convert__RegG8RC1_0, 0, { MCK_RegG8RC }, },
  { 3711 /* mtlr */, PPC::MTLR, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 3716 /* mtocrf */, PPC::MTOCRF8, Convert__CRBitMask1_0__RegG8RC1_1, 0, { MCK_CRBitMask, MCK_RegG8RC }, },
  { 3716 /* mtocrf */, PPC::MTOCRF, Convert__CRBitMask1_0__RegGPRC1_1, 0, { MCK_CRBitMask, MCK_RegGPRC }, },
  { 3723 /* mtspr */, PPC::MTSPR, Convert__Imm1_0__RegGPRC1_1, 0, { MCK_Imm, MCK_RegGPRC }, },
  { 3729 /* mtvscr */, PPC::MTVSCR, Convert__RegVRRC1_0, 0, { MCK_RegVRRC }, },
  { 3736 /* mtxer */, PPC::MTSPR, Convert__imm_1__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 3742 /* mulhd */, PPC::MULHD, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3742 /* mulhd */, PPC::MULHDo, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3748 /* mulhdu */, PPC::MULHDU, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3748 /* mulhdu */, PPC::MULHDUo, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3755 /* mulhw */, PPC::MULHW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3755 /* mulhw */, PPC::MULHWo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3761 /* mulhwu */, PPC::MULHWU, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3761 /* mulhwu */, PPC::MULHWUo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3768 /* mulld */, PPC::MULLD, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3768 /* mulld */, PPC::MULLDo, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3774 /* mulli */, PPC::MULLI8, Convert__RegG8RC1_0__RegG8RC1_1__S16Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_S16Imm }, },
  { 3774 /* mulli */, PPC::MULLI, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 3780 /* mullw */, PPC::MULLW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3780 /* mullw */, PPC::MULLWo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3786 /* nand */, PPC::NAND8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3786 /* nand */, PPC::NAND, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3786 /* nand */, PPC::NAND8o, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3786 /* nand */, PPC::NANDo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3791 /* neg */, PPC::NEG8, Convert__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 3791 /* neg */, PPC::NEG, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3791 /* neg */, PPC::NEG8o, Convert__RegG8RC1_1__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3791 /* neg */, PPC::NEGo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3795 /* nop */, PPC::NOP, Convert_NoOperands, 0, {  }, },
  { 3799 /* nor */, PPC::NOR8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3799 /* nor */, PPC::NOR, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3799 /* nor */, PPC::NOR8o, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3799 /* nor */, PPC::NORo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3803 /* not */, PPC::NOR8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 3803 /* not */, PPC::NOR8o, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3807 /* or */, PPC::OR8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3807 /* or */, PPC::OR, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3807 /* or */, PPC::OR8o, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3807 /* or */, PPC::ORo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3810 /* orc */, PPC::ORC8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3810 /* orc */, PPC::ORC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3810 /* orc */, PPC::ORC8o, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3810 /* orc */, PPC::ORCo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3814 /* ori */, PPC::ORI8, Convert__RegG8RC1_0__RegG8RC1_1__U16Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U16Imm }, },
  { 3814 /* ori */, PPC::ORI, Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 3818 /* oris */, PPC::ORIS8, Convert__RegG8RC1_0__RegG8RC1_1__U16Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U16Imm }, },
  { 3818 /* oris */, PPC::ORIS, Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 3823 /* popcntd */, PPC::POPCNTD, Convert__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 3823 /* popcntd */, PPC::POPCNTDo, Convert__RegG8RC1_1__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3831 /* popcntw */, PPC::POPCNTW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3831 /* popcntw */, PPC::POPCNTWo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3839 /* ptesync */, PPC::SYNC, Convert__imm_2, 0, {  }, },
  { 3847 /* rldcl */, PPC::RLDCL, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC, MCK_U6Imm }, },
  { 3847 /* rldcl */, PPC::RLDCLo, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC, MCK_U6Imm }, },
  { 3853 /* rldcr */, PPC::RLDCR, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC, MCK_U6Imm }, },
  { 3853 /* rldcr */, PPC::RLDCRo, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC, MCK_U6Imm }, },
  { 3859 /* rldic */, PPC::RLDIC, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 3859 /* rldic */, PPC::RLDICo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 3865 /* rldicl */, PPC::RLDICL, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 3865 /* rldicl */, PPC::RLDICLo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 3872 /* rldicr */, PPC::RLDICR, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 3872 /* rldicr */, PPC::RLDICRo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 3879 /* rldimi */, PPC::RLDIMI, Convert__RegG8RC1_0__Tie0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 3879 /* rldimi */, PPC::RLDIMIo, Convert__RegG8RC1_1__Tie0__RegG8RC1_2__U6Imm1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 3886 /* rlwimi */, PPC::RLWIMI, Convert__RegGPRC1_0__Tie0__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm, MCK_U5Imm }, },
  { 3886 /* rlwimi */, PPC::RLWIMIo, Convert__RegGPRC1_1__Tie0__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm, MCK_U5Imm }, },
  { 3893 /* rlwinm */, PPC::RLWINM8, Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U5Imm, MCK_U5Imm, MCK_U5Imm }, },
  { 3893 /* rlwinm */, PPC::RLWINM, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm, MCK_U5Imm }, },
  { 3893 /* rlwinm */, PPC::RLWINM8o, Convert__RegG8RC1_1__RegG8RC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U5Imm, MCK_U5Imm, MCK_U5Imm }, },
  { 3893 /* rlwinm */, PPC::RLWINMo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm, MCK_U5Imm }, },
  { 3900 /* rlwnm */, PPC::RLWNM, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 3900 /* rlwnm */, PPC::RLWNMo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__U5Imm1_4__U5Imm1_5, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 3906 /* rotld */, PPC::RLDCL, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__imm_0, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 3906 /* rotld */, PPC::RLDCLo, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__imm_0, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 3912 /* rotldi */, PPC::RLDICL, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__imm_0, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 3912 /* rotldi */, PPC::RLDICLo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__imm_0, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 3919 /* rotlw */, PPC::RLWNM, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__imm_0__imm_31, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3919 /* rotlw */, PPC::RLWNMo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__imm_0__imm_31, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3925 /* rotlwi */, PPC::RLWINM, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__imm_0__imm_31, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 3925 /* rotlwi */, PPC::RLWINMo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__imm_0__imm_31, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 3932 /* rotrdi */, PPC::ROTRDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 3932 /* rotrdi */, PPC::ROTRDIo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 3939 /* rotrwi */, PPC::ROTRWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 3939 /* rotrwi */, PPC::ROTRWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 3946 /* sc */, PPC::SC, Convert__imm_0, 0, {  }, },
  { 3946 /* sc */, PPC::SC, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 3949 /* sld */, PPC::SLD, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 3949 /* sld */, PPC::SLDo, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 3953 /* sldi */, PPC::SLDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 3953 /* sldi */, PPC::SLDIo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 3958 /* slw */, PPC::SLW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3958 /* slw */, PPC::SLWo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3962 /* slwi */, PPC::SLWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 3962 /* slwi */, PPC::SLWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 3967 /* srad */, PPC::SRAD, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 3967 /* srad */, PPC::SRADo, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 3972 /* sradi */, PPC::SRADI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 3972 /* sradi */, PPC::SRADIo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 3978 /* sraw */, PPC::SRAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3978 /* sraw */, PPC::SRAWo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3983 /* srawi */, PPC::SRAWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 3983 /* srawi */, PPC::SRAWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 3989 /* srd */, PPC::SRD, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 3989 /* srd */, PPC::SRDo, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 3993 /* srdi */, PPC::SRDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 3993 /* srdi */, PPC::SRDIo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 3998 /* srw */, PPC::SRW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3998 /* srw */, PPC::SRWo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4002 /* srwi */, PPC::SRWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 4002 /* srwi */, PPC::SRWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 4007 /* stb */, PPC::STB8, Convert__RegG8RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 4007 /* stb */, PPC::STB, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 4011 /* stbu */, PPC::STBU8, Convert__imm_0__RegG8RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 4011 /* stbu */, PPC::STBU, Convert__imm_0__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 4016 /* stbux */, PPC::STBUX8, Convert__imm_0__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4016 /* stbux */, PPC::STBUX, Convert__imm_0__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4022 /* stbx */, PPC::STBX8, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4022 /* stbx */, PPC::STBX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4027 /* std */, PPC::STD, Convert__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 4031 /* stdbrx */, PPC::STDBRX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4038 /* stdcx */, PPC::STDCX, Convert__RegG8RC1_1__RegGxRCNoR01_2__RegGxRC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4044 /* stdu */, PPC::STDU, Convert__imm_0__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 4049 /* stdux */, PPC::STDUX, Convert__imm_0__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4055 /* stdx */, PPC::STDX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4060 /* stfd */, PPC::STFD, Convert__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 4065 /* stfdu */, PPC::STFDU, Convert__imm_0__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 4071 /* stfdux */, PPC::STFDUX, Convert__imm_0__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4078 /* stfdx */, PPC::STFDX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4084 /* stfiwx */, PPC::STFIWX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4091 /* stfs */, PPC::STFS, Convert__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF4RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 4096 /* stfsu */, PPC::STFSU, Convert__imm_0__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF4RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 4102 /* stfsux */, PPC::STFSUX, Convert__imm_0__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF4RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4109 /* stfsx */, PPC::STFSX, Convert__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF4RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4115 /* sth */, PPC::STH8, Convert__RegG8RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 4115 /* sth */, PPC::STH, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 4119 /* sthbrx */, PPC::STHBRX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4126 /* sthu */, PPC::STHU8, Convert__imm_0__RegG8RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 4126 /* sthu */, PPC::STHU, Convert__imm_0__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 4131 /* sthux */, PPC::STHUX8, Convert__imm_0__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4131 /* sthux */, PPC::STHUX, Convert__imm_0__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4137 /* sthx */, PPC::STHX8, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4137 /* sthx */, PPC::STHX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4142 /* stmw */, PPC::STMW, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 4147 /* stvebx */, PPC::STVEBX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4154 /* stvehx */, PPC::STVEHX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4161 /* stvewx */, PPC::STVEWX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4168 /* stvx */, PPC::STVX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4173 /* stvxl */, PPC::STVXL, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4179 /* stw */, PPC::STW8, Convert__RegG8RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 4179 /* stw */, PPC::STW, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 4183 /* stwbrx */, PPC::STWBRX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4190 /* stwcx */, PPC::STWCX, Convert__RegGPRC1_1__RegGxRCNoR01_2__RegGxRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4196 /* stwu */, PPC::STWU8, Convert__imm_0__RegG8RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 4196 /* stwu */, PPC::STWU, Convert__imm_0__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 4201 /* stwux */, PPC::STWUX8, Convert__imm_0__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4201 /* stwux */, PPC::STWUX, Convert__imm_0__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4207 /* stwx */, PPC::STWX8, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4207 /* stwx */, PPC::STWX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4212 /* sub */, PPC::SUBF8, Convert__RegG8RC1_0__RegG8RC1_2__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 4212 /* sub */, PPC::SUBF8o, Convert__RegG8RC1_1__RegG8RC1_3__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 4216 /* subc */, PPC::SUBFC8, Convert__RegG8RC1_0__RegG8RC1_2__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 4216 /* subc */, PPC::SUBFC8o, Convert__RegG8RC1_1__RegG8RC1_3__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 4221 /* subf */, PPC::SUBF8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 4221 /* subf */, PPC::SUBF, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4221 /* subf */, PPC::SUBF8o, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 4221 /* subf */, PPC::SUBFo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4226 /* subfc */, PPC::SUBFC8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 4226 /* subfc */, PPC::SUBFC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4226 /* subfc */, PPC::SUBFC8o, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 4226 /* subfc */, PPC::SUBFCo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4232 /* subfe */, PPC::SUBFE8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 4232 /* subfe */, PPC::SUBFE, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4232 /* subfe */, PPC::SUBFE8o, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 4232 /* subfe */, PPC::SUBFEo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4238 /* subfic */, PPC::SUBFIC8, Convert__RegG8RC1_0__RegG8RC1_1__S16Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_S16Imm }, },
  { 4238 /* subfic */, PPC::SUBFIC, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 4245 /* subfme */, PPC::SUBFME8, Convert__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 4245 /* subfme */, PPC::SUBFME, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4245 /* subfme */, PPC::SUBFME8o, Convert__RegG8RC1_1__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, },
  { 4245 /* subfme */, PPC::SUBFMEo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4252 /* subfze */, PPC::SUBFZE8, Convert__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 4252 /* subfze */, PPC::SUBFZE, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4252 /* subfze */, PPC::SUBFZE8o, Convert__RegG8RC1_1__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, },
  { 4252 /* subfze */, PPC::SUBFZEo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4259 /* subi */, PPC::SUBI, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 4264 /* subic */, PPC::SUBIC, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 4264 /* subic */, PPC::SUBICo, Convert__RegGPRC1_1__RegGPRC1_2__S16Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 4270 /* subis */, PPC::SUBIS, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 4276 /* sync */, PPC::SYNC, Convert__imm_0, 0, {  }, },
  { 4276 /* sync */, PPC::SYNC, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 4281 /* td */, PPC::TD, Convert__U5Imm1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_U5Imm, MCK_RegG8RC, MCK_RegG8RC }, },
  { 4284 /* tdeq */, PPC::TD, Convert__imm_4__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 4289 /* tdeqi */, PPC::TDI, Convert__imm_4__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 4295 /* tdge */, PPC::TD, Convert__imm_12__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 4300 /* tdgei */, PPC::TDI, Convert__imm_12__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 4306 /* tdgt */, PPC::TD, Convert__imm_8__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 4311 /* tdgti */, PPC::TDI, Convert__imm_8__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 4317 /* tdi */, PPC::TDI, Convert__U5Imm1_0__RegG8RC1_1__S16Imm1_2, 0, { MCK_U5Imm, MCK_RegG8RC, MCK_S16Imm }, },
  { 4321 /* tdle */, PPC::TD, Convert__imm_20__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 4326 /* tdlei */, PPC::TDI, Convert__imm_20__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 4332 /* tdlge */, PPC::TD, Convert__imm_5__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 4338 /* tdlgei */, PPC::TDI, Convert__imm_5__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 4345 /* tdlgt */, PPC::TD, Convert__imm_1__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 4351 /* tdlgti */, PPC::TDI, Convert__imm_1__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 4358 /* tdlle */, PPC::TD, Convert__imm_6__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 4364 /* tdllei */, PPC::TDI, Convert__imm_6__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 4371 /* tdllt */, PPC::TD, Convert__imm_2__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 4377 /* tdllti */, PPC::TDI, Convert__imm_2__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 4384 /* tdlng */, PPC::TD, Convert__imm_6__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 4390 /* tdlngi */, PPC::TDI, Convert__imm_6__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 4397 /* tdlnl */, PPC::TD, Convert__imm_5__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 4403 /* tdlnli */, PPC::TDI, Convert__imm_5__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 4410 /* tdlt */, PPC::TD, Convert__imm_16__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 4415 /* tdlti */, PPC::TDI, Convert__imm_16__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 4421 /* tdne */, PPC::TD, Convert__imm_24__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 4426 /* tdnei */, PPC::TDI, Convert__imm_24__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 4432 /* tdng */, PPC::TD, Convert__imm_20__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 4437 /* tdngi */, PPC::TDI, Convert__imm_20__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 4443 /* tdnl */, PPC::TD, Convert__imm_12__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 4448 /* tdnli */, PPC::TDI, Convert__imm_12__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 4454 /* tdu */, PPC::TD, Convert__imm_31__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 4458 /* tdui */, PPC::TDI, Convert__imm_31__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 4463 /* trap */, PPC::TRAP, Convert_NoOperands, 0, {  }, },
  { 4468 /* tw */, PPC::TW, Convert__U5Imm1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_U5Imm, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4471 /* tweq */, PPC::TW, Convert__imm_4__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4476 /* tweqi */, PPC::TWI, Convert__imm_4__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 4482 /* twge */, PPC::TW, Convert__imm_12__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4487 /* twgei */, PPC::TWI, Convert__imm_12__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 4493 /* twgt */, PPC::TW, Convert__imm_8__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4498 /* twgti */, PPC::TWI, Convert__imm_8__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 4504 /* twi */, PPC::TWI, Convert__U5Imm1_0__RegGPRC1_1__S16Imm1_2, 0, { MCK_U5Imm, MCK_RegGPRC, MCK_S16Imm }, },
  { 4508 /* twle */, PPC::TW, Convert__imm_20__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4513 /* twlei */, PPC::TWI, Convert__imm_20__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 4519 /* twlge */, PPC::TW, Convert__imm_5__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4525 /* twlgei */, PPC::TWI, Convert__imm_5__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 4532 /* twlgt */, PPC::TW, Convert__imm_1__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4538 /* twlgti */, PPC::TWI, Convert__imm_1__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 4545 /* twlle */, PPC::TW, Convert__imm_6__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4551 /* twllei */, PPC::TWI, Convert__imm_6__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 4558 /* twllt */, PPC::TW, Convert__imm_2__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4564 /* twllti */, PPC::TWI, Convert__imm_2__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 4571 /* twlng */, PPC::TW, Convert__imm_6__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4577 /* twlngi */, PPC::TWI, Convert__imm_6__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 4584 /* twlnl */, PPC::TW, Convert__imm_5__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4590 /* twlnli */, PPC::TWI, Convert__imm_5__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 4597 /* twlt */, PPC::TW, Convert__imm_16__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4602 /* twlti */, PPC::TWI, Convert__imm_16__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 4608 /* twne */, PPC::TW, Convert__imm_24__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4613 /* twnei */, PPC::TWI, Convert__imm_24__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 4619 /* twng */, PPC::TW, Convert__imm_20__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4624 /* twngi */, PPC::TWI, Convert__imm_20__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 4630 /* twnl */, PPC::TW, Convert__imm_12__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4635 /* twnli */, PPC::TWI, Convert__imm_12__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 4641 /* twu */, PPC::TW, Convert__imm_31__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4645 /* twui */, PPC::TWI, Convert__imm_31__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 4650 /* vaddcuw */, PPC::VADDCUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4658 /* vaddfp */, PPC::VADDFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4665 /* vaddsbs */, PPC::VADDSBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4673 /* vaddshs */, PPC::VADDSHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4681 /* vaddsws */, PPC::VADDSWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4689 /* vaddubm */, PPC::VADDUBM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4697 /* vaddubs */, PPC::VADDUBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4705 /* vadduhm */, PPC::VADDUHM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4713 /* vadduhs */, PPC::VADDUHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4721 /* vadduwm */, PPC::VADDUWM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4729 /* vadduws */, PPC::VADDUWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4737 /* vand */, PPC::VAND, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4742 /* vandc */, PPC::VANDC, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4748 /* vavgsb */, PPC::VAVGSB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4755 /* vavgsh */, PPC::VAVGSH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4762 /* vavgsw */, PPC::VAVGSW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4769 /* vavgub */, PPC::VAVGUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4776 /* vavguh */, PPC::VAVGUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4783 /* vavguw */, PPC::VAVGUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4790 /* vcfsx */, PPC::VCFSX, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 4796 /* vcfux */, PPC::VCFUX, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 4802 /* vcmpbfp */, PPC::VCMPBFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4802 /* vcmpbfp */, PPC::VCMPBFPo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4810 /* vcmpeqfp */, PPC::VCMPEQFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4810 /* vcmpeqfp */, PPC::VCMPEQFPo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4819 /* vcmpequb */, PPC::VCMPEQUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4819 /* vcmpequb */, PPC::VCMPEQUBo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4828 /* vcmpequh */, PPC::VCMPEQUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4828 /* vcmpequh */, PPC::VCMPEQUHo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4837 /* vcmpequw */, PPC::VCMPEQUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4837 /* vcmpequw */, PPC::VCMPEQUWo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4846 /* vcmpgefp */, PPC::VCMPGEFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4846 /* vcmpgefp */, PPC::VCMPGEFPo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4855 /* vcmpgtfp */, PPC::VCMPGTFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4855 /* vcmpgtfp */, PPC::VCMPGTFPo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4864 /* vcmpgtsb */, PPC::VCMPGTSB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4864 /* vcmpgtsb */, PPC::VCMPGTSBo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4873 /* vcmpgtsh */, PPC::VCMPGTSH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4873 /* vcmpgtsh */, PPC::VCMPGTSHo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4882 /* vcmpgtsw */, PPC::VCMPGTSW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4882 /* vcmpgtsw */, PPC::VCMPGTSWo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4891 /* vcmpgtub */, PPC::VCMPGTUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4891 /* vcmpgtub */, PPC::VCMPGTUBo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4900 /* vcmpgtuh */, PPC::VCMPGTUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4900 /* vcmpgtuh */, PPC::VCMPGTUHo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4909 /* vcmpgtuw */, PPC::VCMPGTUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4909 /* vcmpgtuw */, PPC::VCMPGTUWo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4918 /* vctsxs */, PPC::VCTSXS, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 4925 /* vctuxs */, PPC::VCTUXS, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 4932 /* vexptefp */, PPC::VEXPTEFP, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 4941 /* vlogefp */, PPC::VLOGEFP, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 4949 /* vmaddfp */, PPC::VMADDFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4957 /* vmaxfp */, PPC::VMAXFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4964 /* vmaxsb */, PPC::VMAXSB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4971 /* vmaxsh */, PPC::VMAXSH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4978 /* vmaxsw */, PPC::VMAXSW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4985 /* vmaxub */, PPC::VMAXUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4992 /* vmaxuh */, PPC::VMAXUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 4999 /* vmaxuw */, PPC::VMAXUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5006 /* vmhaddshs */, PPC::VMHADDSHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5016 /* vmhraddshs */, PPC::VMHRADDSHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5027 /* vminfp */, PPC::VMINFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5034 /* vminsb */, PPC::VMINSB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5041 /* vminsh */, PPC::VMINSH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5048 /* vminsw */, PPC::VMINSW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5055 /* vminub */, PPC::VMINUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5062 /* vminuh */, PPC::VMINUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5069 /* vminuw */, PPC::VMINUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5076 /* vmladduhm */, PPC::VMLADDUHM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5086 /* vmrghb */, PPC::VMRGHB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5093 /* vmrghh */, PPC::VMRGHH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5100 /* vmrghw */, PPC::VMRGHW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5107 /* vmrglb */, PPC::VMRGLB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5114 /* vmrglh */, PPC::VMRGLH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5121 /* vmrglw */, PPC::VMRGLW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5128 /* vmsummbm */, PPC::VMSUMMBM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5137 /* vmsumshm */, PPC::VMSUMSHM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5146 /* vmsumshs */, PPC::VMSUMSHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5155 /* vmsumubm */, PPC::VMSUMUBM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5164 /* vmsumuhm */, PPC::VMSUMUHM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5173 /* vmsumuhs */, PPC::VMSUMUHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5182 /* vmulesb */, PPC::VMULESB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5190 /* vmulesh */, PPC::VMULESH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5198 /* vmuleub */, PPC::VMULEUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5206 /* vmuleuh */, PPC::VMULEUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5214 /* vmulosb */, PPC::VMULOSB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5222 /* vmulosh */, PPC::VMULOSH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5230 /* vmuloub */, PPC::VMULOUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5238 /* vmulouh */, PPC::VMULOUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5246 /* vnmsubfp */, PPC::VNMSUBFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5255 /* vnor */, PPC::VNOR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5260 /* vor */, PPC::VOR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5264 /* vperm */, PPC::VPERM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5270 /* vpkpx */, PPC::VPKPX, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5276 /* vpkshss */, PPC::VPKSHSS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5284 /* vpkshus */, PPC::VPKSHUS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5292 /* vpkswss */, PPC::VPKSWSS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5300 /* vpkswus */, PPC::VPKSWUS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5308 /* vpkuhum */, PPC::VPKUHUM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5316 /* vpkuhus */, PPC::VPKUHUS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5324 /* vpkuwum */, PPC::VPKUWUM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5332 /* vpkuwus */, PPC::VPKUWUS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5340 /* vrefp */, PPC::VREFP, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 5346 /* vrfim */, PPC::VRFIM, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 5352 /* vrfin */, PPC::VRFIN, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 5358 /* vrfip */, PPC::VRFIP, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 5364 /* vrfiz */, PPC::VRFIZ, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 5370 /* vrlb */, PPC::VRLB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5375 /* vrlh */, PPC::VRLH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5380 /* vrlw */, PPC::VRLW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5385 /* vrsqrtefp */, PPC::VRSQRTEFP, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 5395 /* vsel */, PPC::VSEL, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5400 /* vsl */, PPC::VSL, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5404 /* vslb */, PPC::VSLB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5409 /* vsldoi */, PPC::VSLDOI, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__U5Imm1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 5416 /* vslh */, PPC::VSLH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5421 /* vslo */, PPC::VSLO, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5426 /* vslw */, PPC::VSLW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5431 /* vspltb */, PPC::VSPLTB, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 5438 /* vsplth */, PPC::VSPLTH, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 5445 /* vspltisb */, PPC::VSPLTISB, Convert__RegVRRC1_0__S5Imm1_1, 0, { MCK_RegVRRC, MCK_S5Imm }, },
  { 5454 /* vspltish */, PPC::VSPLTISH, Convert__RegVRRC1_0__S5Imm1_1, 0, { MCK_RegVRRC, MCK_S5Imm }, },
  { 5463 /* vspltisw */, PPC::VSPLTISW, Convert__RegVRRC1_0__S5Imm1_1, 0, { MCK_RegVRRC, MCK_S5Imm }, },
  { 5472 /* vspltw */, PPC::VSPLTW, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 5479 /* vsr */, PPC::VSR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5483 /* vsrab */, PPC::VSRAB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5489 /* vsrah */, PPC::VSRAH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5495 /* vsraw */, PPC::VSRAW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5501 /* vsrb */, PPC::VSRB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5506 /* vsrh */, PPC::VSRH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5511 /* vsro */, PPC::VSRO, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5516 /* vsrw */, PPC::VSRW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5521 /* vsubcuw */, PPC::VSUBCUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5529 /* vsubfp */, PPC::VSUBFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5536 /* vsubsbs */, PPC::VSUBSBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5544 /* vsubshs */, PPC::VSUBSHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5552 /* vsubsws */, PPC::VSUBSWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5560 /* vsububm */, PPC::VSUBUBM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5568 /* vsububs */, PPC::VSUBUBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5576 /* vsubuhm */, PPC::VSUBUHM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5584 /* vsubuhs */, PPC::VSUBUHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5592 /* vsubuwm */, PPC::VSUBUWM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5600 /* vsubuws */, PPC::VSUBUWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5608 /* vsum2sws */, PPC::VSUM2SWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5617 /* vsum4sbs */, PPC::VSUM4SBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5626 /* vsum4shs */, PPC::VSUM4SHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5635 /* vsum4ubs */, PPC::VSUM4UBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5644 /* vsumsws */, PPC::VSUMSWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5652 /* vupkhpx */, PPC::VUPKHPX, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 5660 /* vupkhsb */, PPC::VUPKHSB, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 5668 /* vupkhsh */, PPC::VUPKHSH, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 5676 /* vupklpx */, PPC::VUPKLPX, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 5684 /* vupklsb */, PPC::VUPKLSB, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 5692 /* vupklsh */, PPC::VUPKLSH, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 5700 /* vxor */, PPC::VXOR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 5705 /* wait */, PPC::WAIT, Convert__imm_0, 0, {  }, },
  { 5705 /* wait */, PPC::WAIT, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 5710 /* waitimpl */, PPC::WAIT, Convert__imm_2, 0, {  }, },
  { 5719 /* waitrsv */, PPC::WAIT, Convert__imm_1, 0, {  }, },
  { 5727 /* xnop */, PPC::XORI, Convert__regR0__regR0__imm_0, 0, {  }, },
  { 5732 /* xor */, PPC::XOR8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 5732 /* xor */, PPC::XOR, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 5732 /* xor */, PPC::XOR8o, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 5732 /* xor */, PPC::XORo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 5736 /* xori */, PPC::XORI8, Convert__RegG8RC1_0__RegG8RC1_1__U16Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U16Imm }, },
  { 5736 /* xori */, PPC::XORI, Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 5741 /* xoris */, PPC::XORIS8, Convert__RegG8RC1_0__RegG8RC1_1__U16Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U16Imm }, },
  { 5741 /* xoris */, PPC::XORIS, Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, },
};

bool PPCAsmParser::
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

unsigned PPCAsmParser::
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
  StringRef Mnemonic = ((PPCOperand*)Operands[0])->getToken();

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

#endif // GET_MATCHER_IMPLEMENTATION

