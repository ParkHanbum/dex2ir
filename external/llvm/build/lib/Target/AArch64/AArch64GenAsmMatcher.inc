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

  Match_AddSubRegExtendLarge,
  Match_AddSubRegExtendSmall,
  Match_AddSubRegShift32,
  Match_AddSubRegShift64,
  Match_AddSubSecondSource,
  Match_CVTFixedPos32,
  Match_CVTFixedPos64,
  Match_CondCode,
  Match_FPImm,
  Match_FPZero,
  Match_Label,
  Match_Lane1,
  Match_LoadStoreExtend32_1,
  Match_LoadStoreExtend32_16,
  Match_LoadStoreExtend32_2,
  Match_LoadStoreExtend32_4,
  Match_LoadStoreExtend32_8,
  Match_LoadStoreExtend64_1,
  Match_LoadStoreExtend64_16,
  Match_LoadStoreExtend64_2,
  Match_LoadStoreExtend64_4,
  Match_LoadStoreExtend64_8,
  Match_LoadStoreSImm7_16,
  Match_LoadStoreSImm7_4,
  Match_LoadStoreSImm7_8,
  Match_LoadStoreSImm9,
  Match_LoadStoreUImm12_1,
  Match_LoadStoreUImm12_16,
  Match_LoadStoreUImm12_2,
  Match_LoadStoreUImm12_4,
  Match_LoadStoreUImm12_8,
  Match_LogicalSecondSource,
  Match_MOVWUImm16,
  Match_MRS,
  Match_MSR,
  Match_NamedImm_at,
  Match_NamedImm_dbarrier,
  Match_NamedImm_dc,
  Match_NamedImm_ic,
  Match_NamedImm_isb,
  Match_NamedImm_prefetch,
  Match_NamedImm_tlbi,
  Match_UImm16,
  Match_UImm3,
  Match_UImm4,
  Match_UImm5,
  Match_UImm6,
  Match_UImm7,
  Match_Width32,
  Match_Width64,
  END_OPERAND_DIAGNOSTIC_TYPES
#endif // GET_OPERAND_DIAGNOSTIC_TYPES


#ifdef GET_REGISTER_MATCHER
#undef GET_REGISTER_MATCHER

// Flags for subtarget features that participate in instruction matching.
enum SubtargetFeatureFlag {
  Feature_HasNEON = (1 << 1),
  Feature_HasCrypto = (1 << 0),
  Feature_None = 0
};

static unsigned MatchRegisterName(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 2:	 // 81 strings to match.
    switch (Name[0]) {
    default: break;
    case 'b':	 // 10 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 1 string to match.
        return 6;	 // "b0"
      case '1':	 // 1 string to match.
        return 7;	 // "b1"
      case '2':	 // 1 string to match.
        return 8;	 // "b2"
      case '3':	 // 1 string to match.
        return 9;	 // "b3"
      case '4':	 // 1 string to match.
        return 10;	 // "b4"
      case '5':	 // 1 string to match.
        return 11;	 // "b5"
      case '6':	 // 1 string to match.
        return 12;	 // "b6"
      case '7':	 // 1 string to match.
        return 13;	 // "b7"
      case '8':	 // 1 string to match.
        return 14;	 // "b8"
      case '9':	 // 1 string to match.
        return 15;	 // "b9"
      }
      break;
    case 'd':	 // 10 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 1 string to match.
        return 38;	 // "d0"
      case '1':	 // 1 string to match.
        return 39;	 // "d1"
      case '2':	 // 1 string to match.
        return 40;	 // "d2"
      case '3':	 // 1 string to match.
        return 41;	 // "d3"
      case '4':	 // 1 string to match.
        return 42;	 // "d4"
      case '5':	 // 1 string to match.
        return 43;	 // "d5"
      case '6':	 // 1 string to match.
        return 44;	 // "d6"
      case '7':	 // 1 string to match.
        return 45;	 // "d7"
      case '8':	 // 1 string to match.
        return 46;	 // "d8"
      case '9':	 // 1 string to match.
        return 47;	 // "d9"
      }
      break;
    case 'h':	 // 10 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 1 string to match.
        return 70;	 // "h0"
      case '1':	 // 1 string to match.
        return 71;	 // "h1"
      case '2':	 // 1 string to match.
        return 72;	 // "h2"
      case '3':	 // 1 string to match.
        return 73;	 // "h3"
      case '4':	 // 1 string to match.
        return 74;	 // "h4"
      case '5':	 // 1 string to match.
        return 75;	 // "h5"
      case '6':	 // 1 string to match.
        return 76;	 // "h6"
      case '7':	 // 1 string to match.
        return 77;	 // "h7"
      case '8':	 // 1 string to match.
        return 78;	 // "h8"
      case '9':	 // 1 string to match.
        return 79;	 // "h9"
      }
      break;
    case 'q':	 // 10 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 1 string to match.
        return 102;	 // "q0"
      case '1':	 // 1 string to match.
        return 103;	 // "q1"
      case '2':	 // 1 string to match.
        return 104;	 // "q2"
      case '3':	 // 1 string to match.
        return 105;	 // "q3"
      case '4':	 // 1 string to match.
        return 106;	 // "q4"
      case '5':	 // 1 string to match.
        return 107;	 // "q5"
      case '6':	 // 1 string to match.
        return 108;	 // "q6"
      case '7':	 // 1 string to match.
        return 109;	 // "q7"
      case '8':	 // 1 string to match.
        return 110;	 // "q8"
      case '9':	 // 1 string to match.
        return 111;	 // "q9"
      }
      break;
    case 's':	 // 11 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 1 string to match.
        return 134;	 // "s0"
      case '1':	 // 1 string to match.
        return 135;	 // "s1"
      case '2':	 // 1 string to match.
        return 136;	 // "s2"
      case '3':	 // 1 string to match.
        return 137;	 // "s3"
      case '4':	 // 1 string to match.
        return 138;	 // "s4"
      case '5':	 // 1 string to match.
        return 139;	 // "s5"
      case '6':	 // 1 string to match.
        return 140;	 // "s6"
      case '7':	 // 1 string to match.
        return 141;	 // "s7"
      case '8':	 // 1 string to match.
        return 142;	 // "s8"
      case '9':	 // 1 string to match.
        return 143;	 // "s9"
      case 'p':	 // 1 string to match.
        return 4;	 // "sp"
      }
      break;
    case 'v':	 // 10 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 1 string to match.
        return 166;	 // "v0"
      case '1':	 // 1 string to match.
        return 167;	 // "v1"
      case '2':	 // 1 string to match.
        return 168;	 // "v2"
      case '3':	 // 1 string to match.
        return 169;	 // "v3"
      case '4':	 // 1 string to match.
        return 170;	 // "v4"
      case '5':	 // 1 string to match.
        return 171;	 // "v5"
      case '6':	 // 1 string to match.
        return 172;	 // "v6"
      case '7':	 // 1 string to match.
        return 173;	 // "v7"
      case '8':	 // 1 string to match.
        return 174;	 // "v8"
      case '9':	 // 1 string to match.
        return 175;	 // "v9"
      }
      break;
    case 'w':	 // 10 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 1 string to match.
        return 198;	 // "w0"
      case '1':	 // 1 string to match.
        return 199;	 // "w1"
      case '2':	 // 1 string to match.
        return 200;	 // "w2"
      case '3':	 // 1 string to match.
        return 201;	 // "w3"
      case '4':	 // 1 string to match.
        return 202;	 // "w4"
      case '5':	 // 1 string to match.
        return 203;	 // "w5"
      case '6':	 // 1 string to match.
        return 204;	 // "w6"
      case '7':	 // 1 string to match.
        return 205;	 // "w7"
      case '8':	 // 1 string to match.
        return 206;	 // "w8"
      case '9':	 // 1 string to match.
        return 207;	 // "w9"
      }
      break;
    case 'x':	 // 10 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 1 string to match.
        return 229;	 // "x0"
      case '1':	 // 1 string to match.
        return 230;	 // "x1"
      case '2':	 // 1 string to match.
        return 231;	 // "x2"
      case '3':	 // 1 string to match.
        return 232;	 // "x3"
      case '4':	 // 1 string to match.
        return 233;	 // "x4"
      case '5':	 // 1 string to match.
        return 234;	 // "x5"
      case '6':	 // 1 string to match.
        return 235;	 // "x6"
      case '7':	 // 1 string to match.
        return 236;	 // "x7"
      case '8':	 // 1 string to match.
        return 237;	 // "x8"
      case '9':	 // 1 string to match.
        return 238;	 // "x9"
      }
      break;
    }
    break;
  case 3:	 // 177 strings to match.
    switch (Name[0]) {
    default: break;
    case 'b':	 // 22 strings to match.
      switch (Name[1]) {
      default: break;
      case '1':	 // 10 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 16;	 // "b10"
        case '1':	 // 1 string to match.
          return 17;	 // "b11"
        case '2':	 // 1 string to match.
          return 18;	 // "b12"
        case '3':	 // 1 string to match.
          return 19;	 // "b13"
        case '4':	 // 1 string to match.
          return 20;	 // "b14"
        case '5':	 // 1 string to match.
          return 21;	 // "b15"
        case '6':	 // 1 string to match.
          return 22;	 // "b16"
        case '7':	 // 1 string to match.
          return 23;	 // "b17"
        case '8':	 // 1 string to match.
          return 24;	 // "b18"
        case '9':	 // 1 string to match.
          return 25;	 // "b19"
        }
        break;
      case '2':	 // 10 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 26;	 // "b20"
        case '1':	 // 1 string to match.
          return 27;	 // "b21"
        case '2':	 // 1 string to match.
          return 28;	 // "b22"
        case '3':	 // 1 string to match.
          return 29;	 // "b23"
        case '4':	 // 1 string to match.
          return 30;	 // "b24"
        case '5':	 // 1 string to match.
          return 31;	 // "b25"
        case '6':	 // 1 string to match.
          return 32;	 // "b26"
        case '7':	 // 1 string to match.
          return 33;	 // "b27"
        case '8':	 // 1 string to match.
          return 34;	 // "b28"
        case '9':	 // 1 string to match.
          return 35;	 // "b29"
        }
        break;
      case '3':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 36;	 // "b30"
        case '1':	 // 1 string to match.
          return 37;	 // "b31"
        }
        break;
      }
      break;
    case 'd':	 // 22 strings to match.
      switch (Name[1]) {
      default: break;
      case '1':	 // 10 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 48;	 // "d10"
        case '1':	 // 1 string to match.
          return 49;	 // "d11"
        case '2':	 // 1 string to match.
          return 50;	 // "d12"
        case '3':	 // 1 string to match.
          return 51;	 // "d13"
        case '4':	 // 1 string to match.
          return 52;	 // "d14"
        case '5':	 // 1 string to match.
          return 53;	 // "d15"
        case '6':	 // 1 string to match.
          return 54;	 // "d16"
        case '7':	 // 1 string to match.
          return 55;	 // "d17"
        case '8':	 // 1 string to match.
          return 56;	 // "d18"
        case '9':	 // 1 string to match.
          return 57;	 // "d19"
        }
        break;
      case '2':	 // 10 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 58;	 // "d20"
        case '1':	 // 1 string to match.
          return 59;	 // "d21"
        case '2':	 // 1 string to match.
          return 60;	 // "d22"
        case '3':	 // 1 string to match.
          return 61;	 // "d23"
        case '4':	 // 1 string to match.
          return 62;	 // "d24"
        case '5':	 // 1 string to match.
          return 63;	 // "d25"
        case '6':	 // 1 string to match.
          return 64;	 // "d26"
        case '7':	 // 1 string to match.
          return 65;	 // "d27"
        case '8':	 // 1 string to match.
          return 66;	 // "d28"
        case '9':	 // 1 string to match.
          return 67;	 // "d29"
        }
        break;
      case '3':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 68;	 // "d30"
        case '1':	 // 1 string to match.
          return 69;	 // "d31"
        }
        break;
      }
      break;
    case 'h':	 // 22 strings to match.
      switch (Name[1]) {
      default: break;
      case '1':	 // 10 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 80;	 // "h10"
        case '1':	 // 1 string to match.
          return 81;	 // "h11"
        case '2':	 // 1 string to match.
          return 82;	 // "h12"
        case '3':	 // 1 string to match.
          return 83;	 // "h13"
        case '4':	 // 1 string to match.
          return 84;	 // "h14"
        case '5':	 // 1 string to match.
          return 85;	 // "h15"
        case '6':	 // 1 string to match.
          return 86;	 // "h16"
        case '7':	 // 1 string to match.
          return 87;	 // "h17"
        case '8':	 // 1 string to match.
          return 88;	 // "h18"
        case '9':	 // 1 string to match.
          return 89;	 // "h19"
        }
        break;
      case '2':	 // 10 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 90;	 // "h20"
        case '1':	 // 1 string to match.
          return 91;	 // "h21"
        case '2':	 // 1 string to match.
          return 92;	 // "h22"
        case '3':	 // 1 string to match.
          return 93;	 // "h23"
        case '4':	 // 1 string to match.
          return 94;	 // "h24"
        case '5':	 // 1 string to match.
          return 95;	 // "h25"
        case '6':	 // 1 string to match.
          return 96;	 // "h26"
        case '7':	 // 1 string to match.
          return 97;	 // "h27"
        case '8':	 // 1 string to match.
          return 98;	 // "h28"
        case '9':	 // 1 string to match.
          return 99;	 // "h29"
        }
        break;
      case '3':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 100;	 // "h30"
        case '1':	 // 1 string to match.
          return 101;	 // "h31"
        }
        break;
      }
      break;
    case 'q':	 // 22 strings to match.
      switch (Name[1]) {
      default: break;
      case '1':	 // 10 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 112;	 // "q10"
        case '1':	 // 1 string to match.
          return 113;	 // "q11"
        case '2':	 // 1 string to match.
          return 114;	 // "q12"
        case '3':	 // 1 string to match.
          return 115;	 // "q13"
        case '4':	 // 1 string to match.
          return 116;	 // "q14"
        case '5':	 // 1 string to match.
          return 117;	 // "q15"
        case '6':	 // 1 string to match.
          return 118;	 // "q16"
        case '7':	 // 1 string to match.
          return 119;	 // "q17"
        case '8':	 // 1 string to match.
          return 120;	 // "q18"
        case '9':	 // 1 string to match.
          return 121;	 // "q19"
        }
        break;
      case '2':	 // 10 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 122;	 // "q20"
        case '1':	 // 1 string to match.
          return 123;	 // "q21"
        case '2':	 // 1 string to match.
          return 124;	 // "q22"
        case '3':	 // 1 string to match.
          return 125;	 // "q23"
        case '4':	 // 1 string to match.
          return 126;	 // "q24"
        case '5':	 // 1 string to match.
          return 127;	 // "q25"
        case '6':	 // 1 string to match.
          return 128;	 // "q26"
        case '7':	 // 1 string to match.
          return 129;	 // "q27"
        case '8':	 // 1 string to match.
          return 130;	 // "q28"
        case '9':	 // 1 string to match.
          return 131;	 // "q29"
        }
        break;
      case '3':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 132;	 // "q30"
        case '1':	 // 1 string to match.
          return 133;	 // "q31"
        }
        break;
      }
      break;
    case 's':	 // 22 strings to match.
      switch (Name[1]) {
      default: break;
      case '1':	 // 10 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 144;	 // "s10"
        case '1':	 // 1 string to match.
          return 145;	 // "s11"
        case '2':	 // 1 string to match.
          return 146;	 // "s12"
        case '3':	 // 1 string to match.
          return 147;	 // "s13"
        case '4':	 // 1 string to match.
          return 148;	 // "s14"
        case '5':	 // 1 string to match.
          return 149;	 // "s15"
        case '6':	 // 1 string to match.
          return 150;	 // "s16"
        case '7':	 // 1 string to match.
          return 151;	 // "s17"
        case '8':	 // 1 string to match.
          return 152;	 // "s18"
        case '9':	 // 1 string to match.
          return 153;	 // "s19"
        }
        break;
      case '2':	 // 10 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 154;	 // "s20"
        case '1':	 // 1 string to match.
          return 155;	 // "s21"
        case '2':	 // 1 string to match.
          return 156;	 // "s22"
        case '3':	 // 1 string to match.
          return 157;	 // "s23"
        case '4':	 // 1 string to match.
          return 158;	 // "s24"
        case '5':	 // 1 string to match.
          return 159;	 // "s25"
        case '6':	 // 1 string to match.
          return 160;	 // "s26"
        case '7':	 // 1 string to match.
          return 161;	 // "s27"
        case '8':	 // 1 string to match.
          return 162;	 // "s28"
        case '9':	 // 1 string to match.
          return 163;	 // "s29"
        }
        break;
      case '3':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 164;	 // "s30"
        case '1':	 // 1 string to match.
          return 165;	 // "s31"
        }
        break;
      }
      break;
    case 'v':	 // 22 strings to match.
      switch (Name[1]) {
      default: break;
      case '1':	 // 10 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 176;	 // "v10"
        case '1':	 // 1 string to match.
          return 177;	 // "v11"
        case '2':	 // 1 string to match.
          return 178;	 // "v12"
        case '3':	 // 1 string to match.
          return 179;	 // "v13"
        case '4':	 // 1 string to match.
          return 180;	 // "v14"
        case '5':	 // 1 string to match.
          return 181;	 // "v15"
        case '6':	 // 1 string to match.
          return 182;	 // "v16"
        case '7':	 // 1 string to match.
          return 183;	 // "v17"
        case '8':	 // 1 string to match.
          return 184;	 // "v18"
        case '9':	 // 1 string to match.
          return 185;	 // "v19"
        }
        break;
      case '2':	 // 10 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 186;	 // "v20"
        case '1':	 // 1 string to match.
          return 187;	 // "v21"
        case '2':	 // 1 string to match.
          return 188;	 // "v22"
        case '3':	 // 1 string to match.
          return 189;	 // "v23"
        case '4':	 // 1 string to match.
          return 190;	 // "v24"
        case '5':	 // 1 string to match.
          return 191;	 // "v25"
        case '6':	 // 1 string to match.
          return 192;	 // "v26"
        case '7':	 // 1 string to match.
          return 193;	 // "v27"
        case '8':	 // 1 string to match.
          return 194;	 // "v28"
        case '9':	 // 1 string to match.
          return 195;	 // "v29"
        }
        break;
      case '3':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 196;	 // "v30"
        case '1':	 // 1 string to match.
          return 197;	 // "v31"
        }
        break;
      }
      break;
    case 'w':	 // 23 strings to match.
      switch (Name[1]) {
      default: break;
      case '1':	 // 10 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 208;	 // "w10"
        case '1':	 // 1 string to match.
          return 209;	 // "w11"
        case '2':	 // 1 string to match.
          return 210;	 // "w12"
        case '3':	 // 1 string to match.
          return 211;	 // "w13"
        case '4':	 // 1 string to match.
          return 212;	 // "w14"
        case '5':	 // 1 string to match.
          return 213;	 // "w15"
        case '6':	 // 1 string to match.
          return 214;	 // "w16"
        case '7':	 // 1 string to match.
          return 215;	 // "w17"
        case '8':	 // 1 string to match.
          return 216;	 // "w18"
        case '9':	 // 1 string to match.
          return 217;	 // "w19"
        }
        break;
      case '2':	 // 10 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 218;	 // "w20"
        case '1':	 // 1 string to match.
          return 219;	 // "w21"
        case '2':	 // 1 string to match.
          return 220;	 // "w22"
        case '3':	 // 1 string to match.
          return 221;	 // "w23"
        case '4':	 // 1 string to match.
          return 222;	 // "w24"
        case '5':	 // 1 string to match.
          return 223;	 // "w25"
        case '6':	 // 1 string to match.
          return 224;	 // "w26"
        case '7':	 // 1 string to match.
          return 225;	 // "w27"
        case '8':	 // 1 string to match.
          return 226;	 // "w28"
        case '9':	 // 1 string to match.
          return 227;	 // "w29"
        }
        break;
      case '3':	 // 1 string to match.
        if (Name[2] != '0')
          break;
        return 228;	 // "w30"
      case 's':	 // 1 string to match.
        if (Name[2] != 'p')
          break;
        return 2;	 // "wsp"
      case 'z':	 // 1 string to match.
        if (Name[2] != 'r')
          break;
        return 3;	 // "wzr"
      }
      break;
    case 'x':	 // 22 strings to match.
      switch (Name[1]) {
      default: break;
      case '1':	 // 10 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 239;	 // "x10"
        case '1':	 // 1 string to match.
          return 240;	 // "x11"
        case '2':	 // 1 string to match.
          return 241;	 // "x12"
        case '3':	 // 1 string to match.
          return 242;	 // "x13"
        case '4':	 // 1 string to match.
          return 243;	 // "x14"
        case '5':	 // 1 string to match.
          return 244;	 // "x15"
        case '6':	 // 1 string to match.
          return 245;	 // "x16"
        case '7':	 // 1 string to match.
          return 246;	 // "x17"
        case '8':	 // 1 string to match.
          return 247;	 // "x18"
        case '9':	 // 1 string to match.
          return 248;	 // "x19"
        }
        break;
      case '2':	 // 10 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 249;	 // "x20"
        case '1':	 // 1 string to match.
          return 250;	 // "x21"
        case '2':	 // 1 string to match.
          return 251;	 // "x22"
        case '3':	 // 1 string to match.
          return 252;	 // "x23"
        case '4':	 // 1 string to match.
          return 253;	 // "x24"
        case '5':	 // 1 string to match.
          return 254;	 // "x25"
        case '6':	 // 1 string to match.
          return 255;	 // "x26"
        case '7':	 // 1 string to match.
          return 256;	 // "x27"
        case '8':	 // 1 string to match.
          return 257;	 // "x28"
        case '9':	 // 1 string to match.
          return 258;	 // "x29"
        }
        break;
      case '3':	 // 1 string to match.
        if (Name[2] != '0')
          break;
        return 259;	 // "x30"
      case 'z':	 // 1 string to match.
        if (Name[2] != 'r')
          break;
        return 5;	 // "xzr"
      }
      break;
    }
    break;
  case 4:	 // 1 string to match.
    if (memcmp(Name.data()+0, "nzcv", 4))
      break;
    return 1;	 // "nzcv"
  }
  return 0;
}

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(unsigned Val) {
  switch(Val) {
  case Feature_HasNEON: return "neon";
  case Feature_HasCrypto: return "crypto";
  default: return "(unknown)";
  }
}

#endif // GET_SUBTARGET_FEATURE_NAME


#ifdef GET_MATCHER_IMPLEMENTATION
#undef GET_MATCHER_IMPLEMENTATION

static void applyMnemonicAliases(StringRef &Mnemonic, unsigned Features, unsigned VariantID) {
  switch (VariantID) {
    case 0:
      switch (Mnemonic.size()) {
      default: break;
      case 4:	 // 4 strings to match.
        switch (Mnemonic[0]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+1, "srv", 3))
            break;
          Mnemonic = "asr";	 // "asrv"
          return;
        case 'l':	 // 2 strings to match.
          if (Mnemonic[1] != 's')
            break;
          switch (Mnemonic[2]) {
          default: break;
          case 'l':	 // 1 string to match.
            if (Mnemonic[3] != 'v')
              break;
            Mnemonic = "lsl";	 // "lslv"
            return;
          case 'r':	 // 1 string to match.
            if (Mnemonic[3] != 'v')
              break;
            Mnemonic = "lsr";	 // "lsrv"
            return;
          }
          break;
        case 'r':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+1, "orv", 3))
            break;
          Mnemonic = "ror";	 // "rorv"
          return;
        }
        break;
      }
    break;
  }
  switch (Mnemonic.size()) {
  default: break;
  case 4:	 // 4 strings to match.
    switch (Mnemonic[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+1, "srv", 3))
        break;
      Mnemonic = "asr";	 // "asrv"
      return;
    case 'l':	 // 2 strings to match.
      if (Mnemonic[1] != 's')
        break;
      switch (Mnemonic[2]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (Mnemonic[3] != 'v')
          break;
        Mnemonic = "lsl";	 // "lslv"
        return;
      case 'r':	 // 1 string to match.
        if (Mnemonic[3] != 'v')
          break;
        Mnemonic = "lsr";	 // "lsrv"
        return;
      }
      break;
    case 'r':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+1, "orv", 3))
        break;
      Mnemonic = "ror";	 // "rorv"
      return;
    }
    break;
  }
}

namespace {
enum OperatorConversionKind {
  CVT_Done,
  CVT_Reg,
  CVT_Tied,
  CVT_95_Reg,
  CVT_imm_0,
  CVT_95_addImmWithLSLOperands,
  CVT_95_addShiftOperands,
  CVT_95_addRegExtendOperands,
  CVT_95_addLabelOperands_LT_21_44__32_1_GT_,
  CVT_95_addLabelOperands_LT_21_44__32_4096_GT_,
  CVT_95_addLogicalImmOperands_LT_64_GT_,
  CVT_95_addLogicalImmOperands_LT_32_GT_,
  CVT_95_addImmOperands,
  CVT_95_addLabelOperands_LT_26_44__32_4_GT_,
  CVT_95_addCondCodeOperands,
  CVT_95_addLabelOperands_LT_19_44__32_4_GT_,
  CVT_95_addBFILSBOperands_LT_64_GT_,
  CVT_95_addBFIWidthOperands,
  CVT_95_addBFILSBOperands_LT_32_GT_,
  CVT_95_addBFXWidthOperands,
  CVT_95_addNeonMovImmShiftLSLOperands,
  CVT_95_addNeonMovImmShiftLSLHOperands,
  CVT_95_addInvCondCodeOperands,
  CVT_imm_15,
  CVT_regXZR,
  CVT_regWZR,
  CVT_95_addFPZeroOperands,
  CVT_95_addCVTFixedPosOperands,
  CVT_95_addFMOVImmOperands,
  CVT_95_addRegOperands,
  CVT_95_addSImm7ScaledOperands_LT_8_GT_,
  CVT_95_addSImm7ScaledOperands_LT_4_GT_,
  CVT_95_addSImm7ScaledOperands_LT_16_GT_,
  CVT_95_addSImmOperands_LT_9_GT_,
  CVT_imm_2,
  CVT_95_addOffsetUImm12Operands_LT_8_GT_,
  CVT_95_addOffsetUImm12Operands_LT_4_GT_,
  CVT_95_addOffsetUImm12Operands_LT_2_GT_,
  CVT_95_addOffsetUImm12Operands_LT_1_GT_,
  CVT_95_addOffsetUImm12Operands_LT_16_GT_,
  CVT_95_addAddrRegExtendOperands_LT_8_GT_,
  CVT_95_addAddrRegExtendOperands_LT_4_GT_,
  CVT_95_addAddrRegExtendOperands_LT_2_GT_,
  CVT_95_addAddrRegExtendOperands_LT_1_GT_,
  CVT_95_addAddrRegExtendOperands_LT_16_GT_,
  CVT_95_addMoveWideMovAliasOperands_LT_64_44__32_A64Imms_COLON__COLON_isOnlyMOVNImm_GT_,
  CVT_95_addMoveWideMovAliasOperands_LT_64_44__32_A64Imms_COLON__COLON_isMOVZImm_GT_,
  CVT_95_addMoveWideMovAliasOperands_LT_32_44__32_A64Imms_COLON__COLON_isOnlyMOVNImm_GT_,
  CVT_95_addMoveWideMovAliasOperands_LT_32_44__32_A64Imms_COLON__COLON_isMOVZImm_GT_,
  CVT_95_addNeonUImm64MaskOperands,
  CVT_95_addNeonMovImmShiftMSLOperands,
  CVT_95_addMoveWideImmOperands,
  CVT_95_addMRSOperands,
  CVT_95_addMSRWithRegOperands,
  CVT_95_addMSRPStateOperands,
  CVT_regX30,
  CVT_imm_4,
  CVT_imm_5,
  CVT_95_addLabelOperands_LT_14_44__32_4_GT_,
  CVT_imm_3,
  CVT_imm_1,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__Reg1_0__Reg1_1__Reg1_2,
  Convert__Reg1_0__Reg1_1__Reg1_2__imm_0,
  Convert__Reg1_0__Reg1_1__AddSubImmLSL01_2,
  Convert__Reg1_0__Reg1_1__AddSubImmLSL121_2,
  Convert__Reg1_0__Reg1_1__Reg1_2__ShiftASRi641_3,
  Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSLi641_3,
  Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSRi641_3,
  Convert__Reg1_0__Reg1_1__Reg1_2__RegExtendLSL1_3,
  Convert__Reg1_0__Reg1_1__Reg1_2__SXTX1_3,
  Convert__Reg1_0__Reg1_1__Reg1_2__UXTX1_3,
  Convert__Reg1_0__Reg1_1__Reg1_2__SXTB1_3,
  Convert__Reg1_0__Reg1_1__Reg1_2__SXTH1_3,
  Convert__Reg1_0__Reg1_1__Reg1_2__SXTW1_3,
  Convert__Reg1_0__Reg1_1__Reg1_2__UXTB1_3,
  Convert__Reg1_0__Reg1_1__Reg1_2__UXTH1_3,
  Convert__Reg1_0__Reg1_1__Reg1_2__UXTW1_3,
  Convert__Reg1_0__Reg1_1__Reg1_2__ShiftASRi321_3,
  Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSLi321_3,
  Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSRi321_3,
  Convert__Reg1_0__Reg1_2__Reg1_4,
  Convert__Reg1_0__Label21_11_1,
  Convert__Reg1_0__AdrpLabel1_1,
  Convert__Reg1_0__Reg1_1__LogicalImm641_2,
  Convert__Reg1_0__Reg1_1__LogicalImm321_2,
  Convert__Reg1_0__Reg1_1__Reg1_2__ShiftRORi641_3,
  Convert__Reg1_0__Reg1_1__Reg1_2__ShiftRORi321_3,
  Convert__Reg1_0__Reg1_1__UImm61_2,
  Convert__Reg1_0__Reg1_1__UImm51_2,
  Convert__NamedImmat1_0__Reg1_1,
  Convert__Label26_41_0,
  Convert__CondCode1_1__Label19_41_2,
  Convert__Reg1_0__Tie0__Reg1_1__BFI64LSB1_2__BFI64Width1_3,
  Convert__Reg1_0__Tie0__Reg1_1__BFI32LSB1_2__BFI32Width1_3,
  Convert__Reg1_0__Tie0__Reg1_1__UImm61_2__UImm61_3,
  Convert__Reg1_0__Tie0__Reg1_1__UImm51_2__UImm51_3,
  Convert__Reg1_0__Tie0__Reg1_1__UImm61_2__BFX64Width1_3,
  Convert__Reg1_0__Tie0__Reg1_1__UImm51_2__BFX32Width1_3,
  Convert__Reg1_0__Tie0__UImm81_2__imm_0,
  Convert__Reg1_0__Tie0__UImm81_2__NeonMovImmShiftLSL1_3,
  Convert__Reg1_0__Tie0__UImm81_2__NeonMovImmShiftLSLH1_3,
  Convert__Reg1_0__Tie0__Reg1_2__Reg1_4,
  Convert__Reg1_0,
  Convert__UImm161_0,
  Convert__Reg1_0__Label19_41_1,
  Convert__Reg1_0__Reg1_1__UImm41_2__CondCodeOp1_3,
  Convert__Reg1_0__UImm51_1__UImm41_2__CondCodeOp1_3,
  Convert__Reg1_0__Reg1_1__Reg1_1__InvCondCodeOp1_2,
  Convert__imm_15,
  Convert__UImm41_0,
  Convert__Reg1_0__Reg1_1,
  Convert__Reg1_0__Reg1_2__UImm01_4,
  Convert__Reg1_0__Reg1_4__Reg1_2,
  Convert__Reg1_0__Reg1_1__imm_0,
  Convert__Reg1_0__AddSubImmLSL01_1,
  Convert__Reg1_0__AddSubImmLSL121_1,
  Convert__Reg1_0__Reg1_1__ShiftASRi641_2,
  Convert__Reg1_0__Reg1_1__ShiftLSLi641_2,
  Convert__Reg1_0__Reg1_1__ShiftLSRi641_2,
  Convert__Reg1_0__Reg1_1__SXTX1_2,
  Convert__Reg1_0__Reg1_1__UXTX1_2,
  Convert__Reg1_0__Reg1_1__SXTB1_2,
  Convert__Reg1_0__Reg1_1__SXTH1_2,
  Convert__Reg1_0__Reg1_1__SXTW1_2,
  Convert__Reg1_0__Reg1_1__UXTB1_2,
  Convert__Reg1_0__Reg1_1__UXTH1_2,
  Convert__Reg1_0__Reg1_1__UXTW1_2,
  Convert__Reg1_0__Reg1_1__ShiftASRi321_2,
  Convert__Reg1_0__Reg1_1__ShiftLSLi321_2,
  Convert__Reg1_0__Reg1_1__ShiftLSRi321_2,
  Convert__Reg1_0__Reg1_1__RegExtendLSL1_2,
  Convert__Reg1_0__Reg1_1__Reg1_2__CondCodeOp1_3,
  Convert__Reg1_0__regXZR__regXZR__InvCondCodeOp1_1,
  Convert__Reg1_0__regWZR__regWZR__InvCondCodeOp1_1,
  Convert__NamedImmdc1_0__Reg1_1,
  Convert__imm_0,
  Convert__NamedImmdbarrier1_0,
  Convert_NoOperands,
  Convert__Reg1_0__Reg1_1__Reg1_2__UImm61_3,
  Convert__Reg1_0__Reg1_1__Reg1_2__UImm51_3,
  Convert__Reg1_0__Reg1_2__FPZero1_4,
  Convert__Reg1_0__FPZero1_1,
  Convert__Reg1_0__Reg1_1__CVTFixedPos641_2,
  Convert__Reg1_0__Reg1_1__CVTFixedPos321_2,
  Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3,
  Convert__Reg1_0__FMOVImm1_1,
  Convert__Reg1_0__FMOVImm1_2,
  Convert__Reg1_0__Reg1_1__Lane11_4,
  Convert__Reg1_0__Reg1_5__Lane11_3,
  Convert__UImm71_0,
  Convert__NamedImmic1_0,
  Convert__NamedImmic1_0__Reg1_1,
  Convert__NamedImmisb1_0,
  Convert__Reg1_0__GPR64xsp01_2,
  Convert__Reg1_0__Reg1_1__GPR64xsp01_3,
  Convert__Reg1_0__Reg1_1__Reg1_3__imm_0,
  Convert__Reg1_0__Reg1_1__Reg1_3__SImm7_Scaled81_4,
  Convert__Reg1_0__Reg1_1__Reg1_3__SImm7_Scaled41_4,
  Convert__Reg1_0__Reg1_1__Reg1_3__SImm7_Scaled161_4,
  Convert__Reg1_0__Reg1_1__Reg1_3__Tie2__SImm7_Scaled81_5,
  Convert__Reg1_0__Reg1_1__Reg1_3__Tie2__SImm7_Scaled41_5,
  Convert__Reg1_0__Reg1_1__Reg1_3__Tie2__SImm7_Scaled161_5,
  Convert__Reg1_0__Reg1_1__Reg1_3__Tie2__SImm7_Scaled81_4,
  Convert__Reg1_0__Reg1_1__Reg1_3__Tie2__SImm7_Scaled41_4,
  Convert__Reg1_0__Reg1_1__Reg1_3__Tie2__SImm7_Scaled161_4,
  Convert__Reg1_0__LoadLitLabel1_1,
  Convert__Reg1_0__Reg1_2__imm_0,
  Convert__Reg1_0__Reg1_2__Tie1__SImm91_4,
  Convert__Reg1_0__Reg1_2__Reg1_3__imm_2,
  Convert__Reg1_0__Reg1_2__OffsetUImm12_81_3,
  Convert__Reg1_0__Reg1_2__OffsetUImm12_41_3,
  Convert__Reg1_0__Reg1_2__OffsetUImm12_21_3,
  Convert__Reg1_0__Reg1_2__OffsetUImm12_11_3,
  Convert__Reg1_0__Reg1_2__OffsetUImm12_161_3,
  Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_8_Xm1_4,
  Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_8_Wm1_4,
  Convert__Reg1_0__Reg1_2__Tie1__SImm91_3,
  Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_4_Xm1_4,
  Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_4_Wm1_4,
  Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_2_Xm1_4,
  Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_2_Wm1_4,
  Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_1_Xm1_4,
  Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_1_Wm1_4,
  Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_16_Xm1_4,
  Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_16_Wm1_4,
  Convert__Reg1_0__Reg1_2__SImm91_3,
  Convert__Reg1_0__Reg1_1__Reg1_2__regXZR,
  Convert__Reg1_0__Reg1_1__Reg1_2__regWZR,
  Convert__Reg1_0__regXZR__Reg1_1__imm_0,
  Convert__Reg1_0__MOVN64MovAlias2_1,
  Convert__Reg1_0__MOVZ64MovAlias2_1,
  Convert__Reg1_0__regXZR__LogicalImmMOV641_1,
  Convert__Reg1_0__regWZR__Reg1_1__imm_0,
  Convert__Reg1_0__MOVN32MovAlias2_1,
  Convert__Reg1_0__MOVZ32MovAlias2_1,
  Convert__Reg1_0__regWZR__LogicalImmMOV321_1,
  Convert__Reg1_0__Reg1_2__Reg1_2,
  Convert__Reg1_0__NeonUImm64Mask1_1,
  Convert__Reg1_0__UImm81_2,
  Convert__Reg1_0__NeonUImm64Mask1_2,
  Convert__Reg1_0__UImm81_2__imm_0,
  Convert__Reg1_0__UImm81_2__NeonMovImmShiftLSL1_3,
  Convert__Reg1_0__UImm81_2__NeonMovImmShiftMSL1_3,
  Convert__Reg1_0__UImm81_2__NeonMovImmShiftLSLH1_3,
  Convert__Reg1_0__Tie0__MOVK64Shiftedshift2_1,
  Convert__Reg1_0__Tie0__MOVK32Shiftedshift2_1,
  Convert__Reg1_0__MOVN64Shiftedshift2_1,
  Convert__Reg1_0__MOVN32Shiftedshift2_1,
  Convert__Reg1_0__MOVZ64Shiftedshift2_1,
  Convert__Reg1_0__MOVZ32Shiftedshift2_1,
  Convert__Reg1_0__MRS1_1,
  Convert__MSRWithReg1_0__Reg1_1,
  Convert__MSRPState1_0__UImm41_1,
  Convert__Reg1_0__Reg1_1__ShiftRORi641_2,
  Convert__Reg1_0__Reg1_1__ShiftRORi321_2,
  Convert__Reg1_0__regXZR__Reg1_1__ShiftASRi641_2,
  Convert__Reg1_0__regXZR__Reg1_1__ShiftLSLi641_2,
  Convert__Reg1_0__regXZR__Reg1_1__ShiftLSRi641_2,
  Convert__Reg1_0__regWZR__Reg1_1__ShiftASRi321_2,
  Convert__Reg1_0__regWZR__Reg1_1__ShiftLSLi321_2,
  Convert__Reg1_0__regWZR__Reg1_1__ShiftLSRi321_2,
  Convert__Reg1_0__regXZR__Reg1_1,
  Convert__Reg1_0__regWZR__Reg1_1,
  Convert__NamedImmprefetch1_0__LoadLitLabel1_1,
  Convert__NamedImmprefetch1_0__Reg1_2__imm_0,
  Convert__NamedImmprefetch1_0__Reg1_2__Reg1_3__imm_2,
  Convert__NamedImmprefetch1_0__Reg1_2__OffsetUImm12_81_3,
  Convert__NamedImmprefetch1_0__Reg1_2__Reg1_3__AddrRegExtend_8_Xm1_4,
  Convert__NamedImmprefetch1_0__Reg1_2__Reg1_3__AddrRegExtend_8_Wm1_4,
  Convert__NamedImmprefetch1_0__Reg1_2__SImm91_3,
  Convert__regX30,
  Convert__Reg1_0__Reg1_1__Reg1_1__UImm61_2,
  Convert__Reg1_0__Reg1_1__Reg1_1__UImm51_2,
  Convert__Reg1_0__Reg1_1__BFI64LSB1_2__BFI64Width1_3,
  Convert__Reg1_0__Reg1_1__BFI32LSB1_2__BFI32Width1_3,
  Convert__Reg1_0__Reg1_1__UImm61_2__UImm61_3,
  Convert__Reg1_0__Reg1_1__UImm51_2__UImm51_3,
  Convert__Reg1_0__Reg1_1__UImm61_2__BFX64Width1_3,
  Convert__Reg1_0__Reg1_1__UImm51_2__BFX32Width1_3,
  Convert__imm_4,
  Convert__imm_5,
  Convert__Reg1_0__Reg1_1__Reg1_2__GPR64xsp01_4,
  Convert__Reg1_3__Reg1_0__Reg1_1__Tie0__SImm7_Scaled81_5,
  Convert__Reg1_3__Reg1_0__Reg1_1__Tie0__SImm7_Scaled41_5,
  Convert__Reg1_3__Reg1_0__Reg1_1__Tie0__SImm7_Scaled161_5,
  Convert__Reg1_3__Reg1_0__Reg1_1__Tie0__SImm7_Scaled81_4,
  Convert__Reg1_3__Reg1_0__Reg1_1__Tie0__SImm7_Scaled41_4,
  Convert__Reg1_3__Reg1_0__Reg1_1__Tie0__SImm7_Scaled161_4,
  Convert__Reg1_2__Reg1_0__Tie0__SImm91_4,
  Convert__Reg1_2__Reg1_0__Tie0__SImm91_3,
  Convert__UImm31_0__CRx1_1__CRx1_2__UImm31_3__regXZR,
  Convert__UImm31_0__CRx1_1__CRx1_2__UImm31_3__Reg1_4,
  Convert__Reg1_0__UImm31_1__CRx1_2__CRx1_3__UImm31_4,
  Convert__Reg1_0__UImm61_1__Label14_41_2,
  Convert__Reg1_0__UImm51_1__Label14_41_2,
  Convert__NamedImmtlbi1_0,
  Convert__NamedImmtlbi1_0__Reg1_1,
  Convert__regXZR__Reg1_0__LogicalImm641_1,
  Convert__regWZR__Reg1_0__LogicalImm321_1,
  Convert__imm_2,
  Convert__imm_3,
  Convert__imm_1,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][11] = {
  // Convert__Reg1_0__Reg1_1__Reg1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__imm_0
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_imm_0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__AddSubImmLSL01_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmWithLSLOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__AddSubImmLSL121_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmWithLSLOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__ShiftASRi641_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addShiftOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSLi641_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addShiftOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSRi641_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addShiftOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__RegExtendLSL1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addRegExtendOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__SXTX1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addRegExtendOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__UXTX1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addRegExtendOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__SXTB1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addRegExtendOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__SXTH1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addRegExtendOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__SXTW1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addRegExtendOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__UXTB1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addRegExtendOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__UXTH1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addRegExtendOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__UXTW1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addRegExtendOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__ShiftASRi321_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addShiftOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSLi321_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addShiftOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSRi321_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addShiftOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_2__Reg1_4
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_Reg, 5, CVT_Done },
  // Convert__Reg1_0__Label21_11_1
  { CVT_95_Reg, 1, CVT_95_addLabelOperands_LT_21_44__32_1_GT_, 2, CVT_Done },
  // Convert__Reg1_0__AdrpLabel1_1
  { CVT_95_Reg, 1, CVT_95_addLabelOperands_LT_21_44__32_4096_GT_, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__LogicalImm641_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addLogicalImmOperands_LT_64_GT_, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__LogicalImm321_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addLogicalImmOperands_LT_32_GT_, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__ShiftRORi641_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addShiftOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__ShiftRORi321_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addShiftOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__UImm61_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__UImm51_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__NamedImmat1_0__Reg1_1
  { CVT_95_addImmOperands, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__Label26_41_0
  { CVT_95_addLabelOperands_LT_26_44__32_4_GT_, 1, CVT_Done },
  // Convert__CondCode1_1__Label19_41_2
  { CVT_95_addCondCodeOperands, 2, CVT_95_addLabelOperands_LT_19_44__32_4_GT_, 3, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_1__BFI64LSB1_2__BFI64Width1_3
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_95_Reg, 2, CVT_95_addBFILSBOperands_LT_64_GT_, 3, CVT_95_addBFIWidthOperands, 4, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_1__BFI32LSB1_2__BFI32Width1_3
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_95_Reg, 2, CVT_95_addBFILSBOperands_LT_32_GT_, 3, CVT_95_addBFIWidthOperands, 4, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_1__UImm61_2__UImm61_3
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_1__UImm51_2__UImm51_3
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_1__UImm61_2__BFX64Width1_3
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_95_addBFXWidthOperands, 4, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_1__UImm51_2__BFX32Width1_3
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_95_addBFXWidthOperands, 4, CVT_Done },
  // Convert__Reg1_0__Tie0__UImm81_2__imm_0
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_95_addImmOperands, 3, CVT_imm_0, 0, CVT_Done },
  // Convert__Reg1_0__Tie0__UImm81_2__NeonMovImmShiftLSL1_3
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_95_addImmOperands, 3, CVT_95_addNeonMovImmShiftLSLOperands, 4, CVT_Done },
  // Convert__Reg1_0__Tie0__UImm81_2__NeonMovImmShiftLSLH1_3
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_95_addImmOperands, 3, CVT_95_addNeonMovImmShiftLSLHOperands, 4, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_2__Reg1_4
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_95_Reg, 3, CVT_95_Reg, 5, CVT_Done },
  // Convert__Reg1_0
  { CVT_95_Reg, 1, CVT_Done },
  // Convert__UImm161_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0__Label19_41_1
  { CVT_95_Reg, 1, CVT_95_addLabelOperands_LT_19_44__32_4_GT_, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__UImm41_2__CondCodeOp1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_95_addCondCodeOperands, 4, CVT_Done },
  // Convert__Reg1_0__UImm51_1__UImm41_2__CondCodeOp1_3
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addCondCodeOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_1__InvCondCodeOp1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 2, CVT_95_addInvCondCodeOperands, 3, CVT_Done },
  // Convert__imm_15
  { CVT_imm_15, 0, CVT_Done },
  // Convert__UImm41_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0__Reg1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_2__UImm01_4
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__Reg1_0__Reg1_4__Reg1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 5, CVT_95_Reg, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_0
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_0, 0, CVT_Done },
  // Convert__Reg1_0__AddSubImmLSL01_1
  { CVT_95_Reg, 1, CVT_95_addImmWithLSLOperands, 2, CVT_Done },
  // Convert__Reg1_0__AddSubImmLSL121_1
  { CVT_95_Reg, 1, CVT_95_addImmWithLSLOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__ShiftASRi641_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addShiftOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__ShiftLSLi641_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addShiftOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__ShiftLSRi641_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addShiftOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__SXTX1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addRegExtendOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__UXTX1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addRegExtendOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__SXTB1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addRegExtendOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__SXTH1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addRegExtendOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__SXTW1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addRegExtendOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__UXTB1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addRegExtendOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__UXTH1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addRegExtendOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__UXTW1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addRegExtendOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__ShiftASRi321_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addShiftOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__ShiftLSLi321_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addShiftOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__ShiftLSRi321_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addShiftOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__RegExtendLSL1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addRegExtendOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__CondCodeOp1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addCondCodeOperands, 4, CVT_Done },
  // Convert__Reg1_0__regXZR__regXZR__InvCondCodeOp1_1
  { CVT_95_Reg, 1, CVT_regXZR, 0, CVT_regXZR, 0, CVT_95_addInvCondCodeOperands, 2, CVT_Done },
  // Convert__Reg1_0__regWZR__regWZR__InvCondCodeOp1_1
  { CVT_95_Reg, 1, CVT_regWZR, 0, CVT_regWZR, 0, CVT_95_addInvCondCodeOperands, 2, CVT_Done },
  // Convert__NamedImmdc1_0__Reg1_1
  { CVT_95_addImmOperands, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__imm_0
  { CVT_imm_0, 0, CVT_Done },
  // Convert__NamedImmdbarrier1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__UImm61_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__UImm51_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_2__FPZero1_4
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_addFPZeroOperands, 5, CVT_Done },
  // Convert__Reg1_0__FPZero1_1
  { CVT_95_Reg, 1, CVT_95_addFPZeroOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__CVTFixedPos641_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addCVTFixedPosOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__CVTFixedPos321_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addCVTFixedPosOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_Done },
  // Convert__Reg1_0__FMOVImm1_1
  { CVT_95_Reg, 1, CVT_95_addFMOVImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__FMOVImm1_2
  { CVT_95_Reg, 1, CVT_95_addFMOVImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Lane11_4
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__Reg1_0__Reg1_5__Lane11_3
  { CVT_95_Reg, 1, CVT_95_Reg, 6, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__UImm71_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__NamedImmic1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__NamedImmic1_0__Reg1_1
  { CVT_95_addImmOperands, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__NamedImmisb1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0__GPR64xsp01_2
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__GPR64xsp01_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addRegOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_3__imm_0
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_3__SImm7_Scaled81_4
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_95_addSImm7ScaledOperands_LT_8_GT_, 5, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_3__SImm7_Scaled41_4
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_95_addSImm7ScaledOperands_LT_4_GT_, 5, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_3__SImm7_Scaled161_4
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_95_addSImm7ScaledOperands_LT_16_GT_, 5, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_3__Tie2__SImm7_Scaled81_5
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_Tied, 2, CVT_95_addSImm7ScaledOperands_LT_8_GT_, 6, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_3__Tie2__SImm7_Scaled41_5
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_Tied, 2, CVT_95_addSImm7ScaledOperands_LT_4_GT_, 6, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_3__Tie2__SImm7_Scaled161_5
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_Tied, 2, CVT_95_addSImm7ScaledOperands_LT_16_GT_, 6, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_3__Tie2__SImm7_Scaled81_4
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_Tied, 2, CVT_95_addSImm7ScaledOperands_LT_8_GT_, 5, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_3__Tie2__SImm7_Scaled41_4
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_Tied, 2, CVT_95_addSImm7ScaledOperands_LT_4_GT_, 5, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_3__Tie2__SImm7_Scaled161_4
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_Tied, 2, CVT_95_addSImm7ScaledOperands_LT_16_GT_, 5, CVT_Done },
  // Convert__Reg1_0__LoadLitLabel1_1
  { CVT_95_Reg, 1, CVT_95_addLabelOperands_LT_19_44__32_4_GT_, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_0
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__Tie1__SImm91_4
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_Tied, 1, CVT_95_addSImmOperands_LT_9_GT_, 5, CVT_Done },
  // Convert__Reg1_0__Reg1_2__Reg1_3__imm_2
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_imm_2, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__OffsetUImm12_81_3
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_addOffsetUImm12Operands_LT_8_GT_, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_2__OffsetUImm12_41_3
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_addOffsetUImm12Operands_LT_4_GT_, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_2__OffsetUImm12_21_3
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_addOffsetUImm12Operands_LT_2_GT_, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_2__OffsetUImm12_11_3
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_addOffsetUImm12Operands_LT_1_GT_, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_2__OffsetUImm12_161_3
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_addOffsetUImm12Operands_LT_16_GT_, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_8_Xm1_4
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_95_addAddrRegExtendOperands_LT_8_GT_, 5, CVT_Done },
  // Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_8_Wm1_4
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_95_addAddrRegExtendOperands_LT_8_GT_, 5, CVT_Done },
  // Convert__Reg1_0__Reg1_2__Tie1__SImm91_3
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_Tied, 1, CVT_95_addSImmOperands_LT_9_GT_, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_4_Xm1_4
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_95_addAddrRegExtendOperands_LT_4_GT_, 5, CVT_Done },
  // Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_4_Wm1_4
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_95_addAddrRegExtendOperands_LT_4_GT_, 5, CVT_Done },
  // Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_2_Xm1_4
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_95_addAddrRegExtendOperands_LT_2_GT_, 5, CVT_Done },
  // Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_2_Wm1_4
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_95_addAddrRegExtendOperands_LT_2_GT_, 5, CVT_Done },
  // Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_1_Xm1_4
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_95_addAddrRegExtendOperands_LT_1_GT_, 5, CVT_Done },
  // Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_1_Wm1_4
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_95_addAddrRegExtendOperands_LT_1_GT_, 5, CVT_Done },
  // Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_16_Xm1_4
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_95_addAddrRegExtendOperands_LT_16_GT_, 5, CVT_Done },
  // Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_16_Wm1_4
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_95_addAddrRegExtendOperands_LT_16_GT_, 5, CVT_Done },
  // Convert__Reg1_0__Reg1_2__SImm91_3
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_addSImmOperands_LT_9_GT_, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__regXZR
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_regXZR, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__regWZR
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_regWZR, 0, CVT_Done },
  // Convert__Reg1_0__regXZR__Reg1_1__imm_0
  { CVT_95_Reg, 1, CVT_regXZR, 0, CVT_95_Reg, 2, CVT_imm_0, 0, CVT_Done },
  // Convert__Reg1_0__MOVN64MovAlias2_1
  { CVT_95_Reg, 1, CVT_95_addMoveWideMovAliasOperands_LT_64_44__32_A64Imms_COLON__COLON_isOnlyMOVNImm_GT_, 2, CVT_Done },
  // Convert__Reg1_0__MOVZ64MovAlias2_1
  { CVT_95_Reg, 1, CVT_95_addMoveWideMovAliasOperands_LT_64_44__32_A64Imms_COLON__COLON_isMOVZImm_GT_, 2, CVT_Done },
  // Convert__Reg1_0__regXZR__LogicalImmMOV641_1
  { CVT_95_Reg, 1, CVT_regXZR, 0, CVT_95_addLogicalImmOperands_LT_64_GT_, 2, CVT_Done },
  // Convert__Reg1_0__regWZR__Reg1_1__imm_0
  { CVT_95_Reg, 1, CVT_regWZR, 0, CVT_95_Reg, 2, CVT_imm_0, 0, CVT_Done },
  // Convert__Reg1_0__MOVN32MovAlias2_1
  { CVT_95_Reg, 1, CVT_95_addMoveWideMovAliasOperands_LT_32_44__32_A64Imms_COLON__COLON_isOnlyMOVNImm_GT_, 2, CVT_Done },
  // Convert__Reg1_0__MOVZ32MovAlias2_1
  { CVT_95_Reg, 1, CVT_95_addMoveWideMovAliasOperands_LT_32_44__32_A64Imms_COLON__COLON_isMOVZImm_GT_, 2, CVT_Done },
  // Convert__Reg1_0__regWZR__LogicalImmMOV321_1
  { CVT_95_Reg, 1, CVT_regWZR, 0, CVT_95_addLogicalImmOperands_LT_32_GT_, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_2__Reg1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_Reg, 3, CVT_Done },
  // Convert__Reg1_0__NeonUImm64Mask1_1
  { CVT_95_Reg, 1, CVT_95_addNeonUImm64MaskOperands, 2, CVT_Done },
  // Convert__Reg1_0__UImm81_2
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__NeonUImm64Mask1_2
  { CVT_95_Reg, 1, CVT_95_addNeonUImm64MaskOperands, 3, CVT_Done },
  // Convert__Reg1_0__UImm81_2__imm_0
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_0, 0, CVT_Done },
  // Convert__Reg1_0__UImm81_2__NeonMovImmShiftLSL1_3
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_95_addNeonMovImmShiftLSLOperands, 4, CVT_Done },
  // Convert__Reg1_0__UImm81_2__NeonMovImmShiftMSL1_3
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_95_addNeonMovImmShiftMSLOperands, 4, CVT_Done },
  // Convert__Reg1_0__UImm81_2__NeonMovImmShiftLSLH1_3
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_95_addNeonMovImmShiftLSLHOperands, 4, CVT_Done },
  // Convert__Reg1_0__Tie0__MOVK64Shiftedshift2_1
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_95_addMoveWideImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Tie0__MOVK32Shiftedshift2_1
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_95_addMoveWideImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__MOVN64Shiftedshift2_1
  { CVT_95_Reg, 1, CVT_95_addMoveWideImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__MOVN32Shiftedshift2_1
  { CVT_95_Reg, 1, CVT_95_addMoveWideImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__MOVZ64Shiftedshift2_1
  { CVT_95_Reg, 1, CVT_95_addMoveWideImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__MOVZ32Shiftedshift2_1
  { CVT_95_Reg, 1, CVT_95_addMoveWideImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__MRS1_1
  { CVT_95_Reg, 1, CVT_95_addMRSOperands, 2, CVT_Done },
  // Convert__MSRWithReg1_0__Reg1_1
  { CVT_95_addMSRWithRegOperands, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__MSRPState1_0__UImm41_1
  { CVT_95_addMSRPStateOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__ShiftRORi641_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addShiftOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__ShiftRORi321_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addShiftOperands, 3, CVT_Done },
  // Convert__Reg1_0__regXZR__Reg1_1__ShiftASRi641_2
  { CVT_95_Reg, 1, CVT_regXZR, 0, CVT_95_Reg, 2, CVT_95_addShiftOperands, 3, CVT_Done },
  // Convert__Reg1_0__regXZR__Reg1_1__ShiftLSLi641_2
  { CVT_95_Reg, 1, CVT_regXZR, 0, CVT_95_Reg, 2, CVT_95_addShiftOperands, 3, CVT_Done },
  // Convert__Reg1_0__regXZR__Reg1_1__ShiftLSRi641_2
  { CVT_95_Reg, 1, CVT_regXZR, 0, CVT_95_Reg, 2, CVT_95_addShiftOperands, 3, CVT_Done },
  // Convert__Reg1_0__regWZR__Reg1_1__ShiftASRi321_2
  { CVT_95_Reg, 1, CVT_regWZR, 0, CVT_95_Reg, 2, CVT_95_addShiftOperands, 3, CVT_Done },
  // Convert__Reg1_0__regWZR__Reg1_1__ShiftLSLi321_2
  { CVT_95_Reg, 1, CVT_regWZR, 0, CVT_95_Reg, 2, CVT_95_addShiftOperands, 3, CVT_Done },
  // Convert__Reg1_0__regWZR__Reg1_1__ShiftLSRi321_2
  { CVT_95_Reg, 1, CVT_regWZR, 0, CVT_95_Reg, 2, CVT_95_addShiftOperands, 3, CVT_Done },
  // Convert__Reg1_0__regXZR__Reg1_1
  { CVT_95_Reg, 1, CVT_regXZR, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_0__regWZR__Reg1_1
  { CVT_95_Reg, 1, CVT_regWZR, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__NamedImmprefetch1_0__LoadLitLabel1_1
  { CVT_95_addImmOperands, 1, CVT_95_addLabelOperands_LT_19_44__32_4_GT_, 2, CVT_Done },
  // Convert__NamedImmprefetch1_0__Reg1_2__imm_0
  { CVT_95_addImmOperands, 1, CVT_95_Reg, 3, CVT_imm_0, 0, CVT_Done },
  // Convert__NamedImmprefetch1_0__Reg1_2__Reg1_3__imm_2
  { CVT_95_addImmOperands, 1, CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_imm_2, 0, CVT_Done },
  // Convert__NamedImmprefetch1_0__Reg1_2__OffsetUImm12_81_3
  { CVT_95_addImmOperands, 1, CVT_95_Reg, 3, CVT_95_addOffsetUImm12Operands_LT_8_GT_, 4, CVT_Done },
  // Convert__NamedImmprefetch1_0__Reg1_2__Reg1_3__AddrRegExtend_8_Xm1_4
  { CVT_95_addImmOperands, 1, CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_95_addAddrRegExtendOperands_LT_8_GT_, 5, CVT_Done },
  // Convert__NamedImmprefetch1_0__Reg1_2__Reg1_3__AddrRegExtend_8_Wm1_4
  { CVT_95_addImmOperands, 1, CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_95_addAddrRegExtendOperands_LT_8_GT_, 5, CVT_Done },
  // Convert__NamedImmprefetch1_0__Reg1_2__SImm91_3
  { CVT_95_addImmOperands, 1, CVT_95_Reg, 3, CVT_95_addSImmOperands_LT_9_GT_, 4, CVT_Done },
  // Convert__regX30
  { CVT_regX30, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_1__UImm61_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_1__UImm51_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__BFI64LSB1_2__BFI64Width1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addBFILSBOperands_LT_64_GT_, 3, CVT_95_addBFIWidthOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__BFI32LSB1_2__BFI32Width1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addBFILSBOperands_LT_32_GT_, 3, CVT_95_addBFIWidthOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__UImm61_2__UImm61_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__UImm51_2__UImm51_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__UImm61_2__BFX64Width1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_95_addBFXWidthOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__UImm51_2__BFX32Width1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_95_addBFXWidthOperands, 4, CVT_Done },
  // Convert__imm_4
  { CVT_imm_4, 0, CVT_Done },
  // Convert__imm_5
  { CVT_imm_5, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__GPR64xsp01_4
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addRegOperands, 5, CVT_Done },
  // Convert__Reg1_3__Reg1_0__Reg1_1__Tie0__SImm7_Scaled81_5
  { CVT_95_Reg, 4, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_95_addSImm7ScaledOperands_LT_8_GT_, 6, CVT_Done },
  // Convert__Reg1_3__Reg1_0__Reg1_1__Tie0__SImm7_Scaled41_5
  { CVT_95_Reg, 4, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_95_addSImm7ScaledOperands_LT_4_GT_, 6, CVT_Done },
  // Convert__Reg1_3__Reg1_0__Reg1_1__Tie0__SImm7_Scaled161_5
  { CVT_95_Reg, 4, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_95_addSImm7ScaledOperands_LT_16_GT_, 6, CVT_Done },
  // Convert__Reg1_3__Reg1_0__Reg1_1__Tie0__SImm7_Scaled81_4
  { CVT_95_Reg, 4, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_95_addSImm7ScaledOperands_LT_8_GT_, 5, CVT_Done },
  // Convert__Reg1_3__Reg1_0__Reg1_1__Tie0__SImm7_Scaled41_4
  { CVT_95_Reg, 4, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_95_addSImm7ScaledOperands_LT_4_GT_, 5, CVT_Done },
  // Convert__Reg1_3__Reg1_0__Reg1_1__Tie0__SImm7_Scaled161_4
  { CVT_95_Reg, 4, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_95_addSImm7ScaledOperands_LT_16_GT_, 5, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Tie0__SImm91_4
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_Tied, 0, CVT_95_addSImmOperands_LT_9_GT_, 5, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Tie0__SImm91_3
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_Tied, 0, CVT_95_addSImmOperands_LT_9_GT_, 4, CVT_Done },
  // Convert__UImm31_0__CRx1_1__CRx1_2__UImm31_3__regXZR
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_regXZR, 0, CVT_Done },
  // Convert__UImm31_0__CRx1_1__CRx1_2__UImm31_3__Reg1_4
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_Reg, 5, CVT_Done },
  // Convert__Reg1_0__UImm31_1__CRx1_2__CRx1_3__UImm31_4
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__Reg1_0__UImm61_1__Label14_41_2
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_95_addLabelOperands_LT_14_44__32_4_GT_, 3, CVT_Done },
  // Convert__Reg1_0__UImm51_1__Label14_41_2
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_95_addLabelOperands_LT_14_44__32_4_GT_, 3, CVT_Done },
  // Convert__NamedImmtlbi1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__NamedImmtlbi1_0__Reg1_1
  { CVT_95_addImmOperands, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__regXZR__Reg1_0__LogicalImm641_1
  { CVT_regXZR, 0, CVT_95_Reg, 1, CVT_95_addLogicalImmOperands_LT_64_GT_, 2, CVT_Done },
  // Convert__regWZR__Reg1_0__LogicalImm321_1
  { CVT_regWZR, 0, CVT_95_Reg, 1, CVT_95_addLogicalImmOperands_LT_32_GT_, 2, CVT_Done },
  // Convert__imm_2
  { CVT_imm_2, 0, CVT_Done },
  // Convert__imm_3
  { CVT_imm_3, 0, CVT_Done },
  // Convert__imm_1
  { CVT_imm_1, 0, CVT_Done },
};

void AArch64AsmParser::
convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                const SmallVectorImpl<MCParsedAsmOperand*> &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  Inst.setOpcode(Opcode);
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addRegOperands(Inst, 1);
      break;
    case CVT_Tied:
      Inst.addOperand(Inst.getOperand(*(p + 1)));
      break;
    case CVT_95_Reg:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addRegOperands(Inst, 1);
      break;
    case CVT_imm_0:
      Inst.addOperand(MCOperand::CreateImm(0));
      break;
    case CVT_95_addImmWithLSLOperands:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addImmWithLSLOperands(Inst, 1);
      break;
    case CVT_95_addShiftOperands:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addShiftOperands(Inst, 1);
      break;
    case CVT_95_addRegExtendOperands:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addRegExtendOperands(Inst, 1);
      break;
    case CVT_95_addLabelOperands_LT_21_44__32_1_GT_:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addLabelOperands<21, 1>(Inst, 1);
      break;
    case CVT_95_addLabelOperands_LT_21_44__32_4096_GT_:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addLabelOperands<21, 4096>(Inst, 1);
      break;
    case CVT_95_addLogicalImmOperands_LT_64_GT_:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addLogicalImmOperands<64>(Inst, 1);
      break;
    case CVT_95_addLogicalImmOperands_LT_32_GT_:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addLogicalImmOperands<32>(Inst, 1);
      break;
    case CVT_95_addImmOperands:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addImmOperands(Inst, 1);
      break;
    case CVT_95_addLabelOperands_LT_26_44__32_4_GT_:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addLabelOperands<26, 4>(Inst, 1);
      break;
    case CVT_95_addCondCodeOperands:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addCondCodeOperands(Inst, 1);
      break;
    case CVT_95_addLabelOperands_LT_19_44__32_4_GT_:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addLabelOperands<19, 4>(Inst, 1);
      break;
    case CVT_95_addBFILSBOperands_LT_64_GT_:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addBFILSBOperands<64>(Inst, 1);
      break;
    case CVT_95_addBFIWidthOperands:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addBFIWidthOperands(Inst, 1);
      break;
    case CVT_95_addBFILSBOperands_LT_32_GT_:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addBFILSBOperands<32>(Inst, 1);
      break;
    case CVT_95_addBFXWidthOperands:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addBFXWidthOperands(Inst, 1);
      break;
    case CVT_95_addNeonMovImmShiftLSLOperands:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addNeonMovImmShiftLSLOperands(Inst, 1);
      break;
    case CVT_95_addNeonMovImmShiftLSLHOperands:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addNeonMovImmShiftLSLHOperands(Inst, 1);
      break;
    case CVT_95_addInvCondCodeOperands:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addInvCondCodeOperands(Inst, 1);
      break;
    case CVT_imm_15:
      Inst.addOperand(MCOperand::CreateImm(15));
      break;
    case CVT_regXZR:
      Inst.addOperand(MCOperand::CreateReg(AArch64::XZR));
      break;
    case CVT_regWZR:
      Inst.addOperand(MCOperand::CreateReg(AArch64::WZR));
      break;
    case CVT_95_addFPZeroOperands:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addFPZeroOperands(Inst, 1);
      break;
    case CVT_95_addCVTFixedPosOperands:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addCVTFixedPosOperands(Inst, 1);
      break;
    case CVT_95_addFMOVImmOperands:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addFMOVImmOperands(Inst, 1);
      break;
    case CVT_95_addRegOperands:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addRegOperands(Inst, 1);
      break;
    case CVT_95_addSImm7ScaledOperands_LT_8_GT_:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addSImm7ScaledOperands<8>(Inst, 1);
      break;
    case CVT_95_addSImm7ScaledOperands_LT_4_GT_:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addSImm7ScaledOperands<4>(Inst, 1);
      break;
    case CVT_95_addSImm7ScaledOperands_LT_16_GT_:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addSImm7ScaledOperands<16>(Inst, 1);
      break;
    case CVT_95_addSImmOperands_LT_9_GT_:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addSImmOperands<9>(Inst, 1);
      break;
    case CVT_imm_2:
      Inst.addOperand(MCOperand::CreateImm(2));
      break;
    case CVT_95_addOffsetUImm12Operands_LT_8_GT_:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addOffsetUImm12Operands<8>(Inst, 1);
      break;
    case CVT_95_addOffsetUImm12Operands_LT_4_GT_:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addOffsetUImm12Operands<4>(Inst, 1);
      break;
    case CVT_95_addOffsetUImm12Operands_LT_2_GT_:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addOffsetUImm12Operands<2>(Inst, 1);
      break;
    case CVT_95_addOffsetUImm12Operands_LT_1_GT_:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addOffsetUImm12Operands<1>(Inst, 1);
      break;
    case CVT_95_addOffsetUImm12Operands_LT_16_GT_:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addOffsetUImm12Operands<16>(Inst, 1);
      break;
    case CVT_95_addAddrRegExtendOperands_LT_8_GT_:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addAddrRegExtendOperands<8>(Inst, 1);
      break;
    case CVT_95_addAddrRegExtendOperands_LT_4_GT_:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addAddrRegExtendOperands<4>(Inst, 1);
      break;
    case CVT_95_addAddrRegExtendOperands_LT_2_GT_:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addAddrRegExtendOperands<2>(Inst, 1);
      break;
    case CVT_95_addAddrRegExtendOperands_LT_1_GT_:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addAddrRegExtendOperands<1>(Inst, 1);
      break;
    case CVT_95_addAddrRegExtendOperands_LT_16_GT_:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addAddrRegExtendOperands<16>(Inst, 1);
      break;
    case CVT_95_addMoveWideMovAliasOperands_LT_64_44__32_A64Imms_COLON__COLON_isOnlyMOVNImm_GT_:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addMoveWideMovAliasOperands<64, A64Imms::isOnlyMOVNImm>(Inst, 2);
      break;
    case CVT_95_addMoveWideMovAliasOperands_LT_64_44__32_A64Imms_COLON__COLON_isMOVZImm_GT_:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addMoveWideMovAliasOperands<64, A64Imms::isMOVZImm>(Inst, 2);
      break;
    case CVT_95_addMoveWideMovAliasOperands_LT_32_44__32_A64Imms_COLON__COLON_isOnlyMOVNImm_GT_:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addMoveWideMovAliasOperands<32, A64Imms::isOnlyMOVNImm>(Inst, 2);
      break;
    case CVT_95_addMoveWideMovAliasOperands_LT_32_44__32_A64Imms_COLON__COLON_isMOVZImm_GT_:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addMoveWideMovAliasOperands<32, A64Imms::isMOVZImm>(Inst, 2);
      break;
    case CVT_95_addNeonUImm64MaskOperands:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addNeonUImm64MaskOperands(Inst, 1);
      break;
    case CVT_95_addNeonMovImmShiftMSLOperands:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addNeonMovImmShiftMSLOperands(Inst, 1);
      break;
    case CVT_95_addMoveWideImmOperands:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addMoveWideImmOperands(Inst, 2);
      break;
    case CVT_95_addMRSOperands:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addMRSOperands(Inst, 1);
      break;
    case CVT_95_addMSRWithRegOperands:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addMSRWithRegOperands(Inst, 1);
      break;
    case CVT_95_addMSRPStateOperands:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addMSRPStateOperands(Inst, 1);
      break;
    case CVT_regX30:
      Inst.addOperand(MCOperand::CreateReg(AArch64::X30));
      break;
    case CVT_imm_4:
      Inst.addOperand(MCOperand::CreateImm(4));
      break;
    case CVT_imm_5:
      Inst.addOperand(MCOperand::CreateImm(5));
      break;
    case CVT_95_addLabelOperands_LT_14_44__32_4_GT_:
      static_cast<AArch64Operand*>(Operands[*(p + 1)])->addLabelOperands<14, 4>(Inst, 1);
      break;
    case CVT_imm_3:
      Inst.addOperand(MCOperand::CreateImm(3));
      break;
    case CVT_imm_1:
      Inst.addOperand(MCOperand::CreateImm(1));
      break;
    }
  }
}

void AArch64AsmParser::
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
    case CVT_95_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      NumMCOperands += 1;
      break;
    case CVT_imm_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addImmWithLSLOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addShiftOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegExtendOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addLabelOperands_LT_21_44__32_1_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addLabelOperands_LT_21_44__32_4096_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addLogicalImmOperands_LT_64_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addLogicalImmOperands_LT_32_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addLabelOperands_LT_26_44__32_4_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addCondCodeOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addLabelOperands_LT_19_44__32_4_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addBFILSBOperands_LT_64_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addBFIWidthOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addBFILSBOperands_LT_32_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addBFXWidthOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addNeonMovImmShiftLSLOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addNeonMovImmShiftLSLHOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addInvCondCodeOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_15:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_regXZR:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_regWZR:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addFPZeroOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addCVTFixedPosOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addFMOVImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addSImm7ScaledOperands_LT_8_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addSImm7ScaledOperands_LT_4_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addSImm7ScaledOperands_LT_16_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addSImmOperands_LT_9_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_2:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addOffsetUImm12Operands_LT_8_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addOffsetUImm12Operands_LT_4_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addOffsetUImm12Operands_LT_2_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addOffsetUImm12Operands_LT_1_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addOffsetUImm12Operands_LT_16_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addAddrRegExtendOperands_LT_8_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addAddrRegExtendOperands_LT_4_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addAddrRegExtendOperands_LT_2_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addAddrRegExtendOperands_LT_1_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addAddrRegExtendOperands_LT_16_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addMoveWideMovAliasOperands_LT_64_44__32_A64Imms_COLON__COLON_isOnlyMOVNImm_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addMoveWideMovAliasOperands_LT_64_44__32_A64Imms_COLON__COLON_isMOVZImm_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addMoveWideMovAliasOperands_LT_32_44__32_A64Imms_COLON__COLON_isOnlyMOVNImm_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addMoveWideMovAliasOperands_LT_32_44__32_A64Imms_COLON__COLON_isMOVZImm_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addNeonUImm64MaskOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addNeonMovImmShiftMSLOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addMoveWideImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addMRSOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addMSRWithRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addMSRPStateOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_regX30:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_imm_4:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_5:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addLabelOperands_LT_14_44__32_4_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_3:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_1:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
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
  MCK__EXCLAIM_, // '!'
  MCK__DOT_, // '.'
  MCK__DOT_16b, // '.16b'
  MCK__DOT_2d, // '.2d'
  MCK__DOT_2s, // '.2s'
  MCK__DOT_4h, // '.4h'
  MCK__DOT_4s, // '.4s'
  MCK__DOT_8b, // '.8b'
  MCK__DOT_8h, // '.8h'
  MCK__DOT_d, // '.d'
  MCK__91_, // '['
  MCK__93_, // ']'
  MCK_tcGPR64, // register class 'tcGPR64'
  MCK_GPR64noxzr, // register class 'GPR64noxzr'
  MCK_GPR64, // register class 'GPR64'
  MCK_Rxsp, // register class 'Rxsp'
  MCK_GPR64xsp, // register class 'GPR64xsp'
  MCK_GPR32nowzr, // register class 'GPR32nowzr'
  MCK_GPR32, // register class 'GPR32'
  MCK_GPR32wsp, // register class 'GPR32wsp'
  MCK_FPR16, // register class 'FPR16'
  MCK_Rwsp, // register class 'Rwsp'
  MCK_FPR8, // register class 'FPR8'
  MCK_FPR128, // register class 'FPR128'
  MCK_FPR32, // register class 'FPR32'
  MCK_FPR64, // register class 'FPR64'
  MCK_VPR64, // register class 'VPR64,VPR128'
  MCK_FlagClass, // register class 'FlagClass'
  MCK_CRx, // user defined class 'CRx_asmoperand'
  MCK_GPR64xsp0, // user defined class 'GPR64xsp0_asmoperand'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_RegExtendLSL, // user defined class 'LSL_extasmoperand'
  MCK_SXTB, // user defined class 'SXTB_asmoperand'
  MCK_SXTH, // user defined class 'SXTH_asmoperand'
  MCK_SXTW, // user defined class 'SXTW_asmoperand'
  MCK_SXTX, // user defined class 'SXTX_asmoperand'
  MCK_UXTB, // user defined class 'UXTB_asmoperand'
  MCK_UXTH, // user defined class 'UXTH_asmoperand'
  MCK_UXTW, // user defined class 'UXTW_asmoperand'
  MCK_UXTX, // user defined class 'UXTX_asmoperand'
  MCK_AddSubImmLSL0, // user defined class 'addsubimm_lsl0_asmoperand'
  MCK_AddSubImmLSL12, // user defined class 'addsubimm_lsl12_asmoperand'
  MCK_AdrpLabel, // user defined class 'adrp_label_asmoperand'
  MCK_Label21_1, // user defined class 'anonymous.val.415'
  MCK_ShiftASRi32, // user defined class 'asr_operand_asmoperand_i32'
  MCK_ShiftASRi64, // user defined class 'asr_operand_asmoperand_i64'
  MCK_NamedImmat, // user defined class 'at_asmoperand'
  MCK_BFI32LSB, // user defined class 'bfi32_lsb_asmoperand'
  MCK_BFI32Width, // user defined class 'bfi32_width_asmoperand'
  MCK_BFI64LSB, // user defined class 'bfi64_lsb_asmoperand'
  MCK_BFI64Width, // user defined class 'bfi64_width_asmoperand'
  MCK_BFX32Width, // user defined class 'bfx32_width_asmoperand'
  MCK_BFX64Width, // user defined class 'bfx64_width_asmoperand'
  MCK_AddrRegExtend_1_Wm, // user defined class 'byte_Wm_regext_asmoperand'
  MCK_AddrRegExtend_1_Xm, // user defined class 'byte_Xm_regext_asmoperand'
  MCK_OffsetUImm12_1, // user defined class 'byte_uimm12_asmoperand'
  MCK_CondCode, // user defined class 'cond_code_asmoperand'
  MCK_CondCodeOp, // user defined class 'cond_code_op_asmoperand'
  MCK_NamedImmdbarrier, // user defined class 'dbarrier_asmoperand'
  MCK_NamedImmdc, // user defined class 'dc_asmoperand'
  MCK_AddrRegExtend_8_Wm, // user defined class 'dword_Wm_regext_asmoperand'
  MCK_AddrRegExtend_8_Xm, // user defined class 'dword_Xm_regext_asmoperand'
  MCK_SImm7_Scaled8, // user defined class 'dword_simm7_asmoperand'
  MCK_OffsetUImm12_8, // user defined class 'dword_uimm12_asmoperand'
  MCK_CVTFixedPos32, // user defined class 'fixedpos_asmoperand_i32'
  MCK_CVTFixedPos64, // user defined class 'fixedpos_asmoperand_i64'
  MCK_FMOVImm, // user defined class 'fpimm_asmoperand'
  MCK_FPZero, // user defined class 'fpzero_asmoperand'
  MCK_AddrRegExtend_2_Wm, // user defined class 'hword_Wm_regext_asmoperand'
  MCK_AddrRegExtend_2_Xm, // user defined class 'hword_Xm_regext_asmoperand'
  MCK_OffsetUImm12_2, // user defined class 'hword_uimm12_asmoperand'
  MCK_NamedImmic, // user defined class 'ic_asmoperand'
  MCK_InvCondCodeOp, // user defined class 'inv_cond_code_op_asmoperand'
  MCK_NamedImmisb, // user defined class 'isb_asmoperand'
  MCK_Label14_4, // user defined class 'label_wid14_scal4_asmoperand'
  MCK_Label19_4, // user defined class 'label_wid19_scal4_asmoperand'
  MCK_Label26_4, // user defined class 'label_wid26_scal4_asmoperand'
  MCK_Lane1, // user defined class 'lane1_asmoperand'
  MCK_LoadLitLabel, // user defined class 'ldrlit_label_asmoperand'
  MCK_LogicalImm32, // user defined class 'logical_imm32_asmoperand'
  MCK_LogicalImmMOV32, // user defined class 'logical_imm32_mov_asmoperand'
  MCK_LogicalImm64, // user defined class 'logical_imm64_asmoperand'
  MCK_LogicalImmMOV64, // user defined class 'logical_imm64_mov_asmoperand'
  MCK_ShiftLSLi32, // user defined class 'lsl_operand_asmoperand_i32'
  MCK_ShiftLSLi64, // user defined class 'lsl_operand_asmoperand_i64'
  MCK_ShiftLSRi32, // user defined class 'lsr_operand_asmoperand_i32'
  MCK_ShiftLSRi64, // user defined class 'lsr_operand_asmoperand_i64'
  MCK_MOVK32Shiftedshift, // user defined class 'movk32_imm_asmoperand'
  MCK_MOVK64Shiftedshift, // user defined class 'movk64_imm_asmoperand'
  MCK_MOVN32MovAlias, // user defined class 'movn32_asmoperand'
  MCK_MOVN32Shiftedshift, // user defined class 'movn32_imm_asmoperand'
  MCK_MOVN64MovAlias, // user defined class 'movn64_asmoperand'
  MCK_MOVN64Shiftedshift, // user defined class 'movn64_imm_asmoperand'
  MCK_MOVZ32MovAlias, // user defined class 'movz32_asmoperand'
  MCK_MOVZ32Shiftedshift, // user defined class 'movz32_imm_asmoperand'
  MCK_MOVZ64MovAlias, // user defined class 'movz64_asmoperand'
  MCK_MOVZ64Shiftedshift, // user defined class 'movz64_imm_asmoperand'
  MCK_MRS, // user defined class 'mrs_asmoperand'
  MCK_MSRWithReg, // user defined class 'msr_asmoperand'
  MCK_NeonMovImmShiftLSLH, // user defined class 'neon_mov_imm_LSLH_asmoperand'
  MCK_NeonMovImmShiftLSL, // user defined class 'neon_mov_imm_LSL_asmoperand'
  MCK_NeonMovImmShiftMSL, // user defined class 'neon_mov_imm_MSL_asmoperand'
  MCK_UImm0, // user defined class 'neon_uimm0_asmoperand'
  MCK_NeonUImm64Mask, // user defined class 'neon_uimm64_mask_asmoperand'
  MCK_UImm8, // user defined class 'neon_uimm8_asmoperand'
  MCK_NamedImmprefetch, // user defined class 'prefetch_asmoperand'
  MCK_MSRPState, // user defined class 'pstate_asmoperand'
  MCK_AddrRegExtend_16_Wm, // user defined class 'qword_Wm_regext_asmoperand'
  MCK_AddrRegExtend_16_Xm, // user defined class 'qword_Xm_regext_asmoperand'
  MCK_SImm7_Scaled16, // user defined class 'qword_simm7_asmoperand'
  MCK_OffsetUImm12_16, // user defined class 'qword_uimm12_asmoperand'
  MCK_ShiftRORi32, // user defined class 'ror_operand_asmoperand_i32'
  MCK_ShiftRORi64, // user defined class 'ror_operand_asmoperand_i64'
  MCK_SImm9, // user defined class 'simm9_asmoperand'
  MCK_NamedImmtlbi, // user defined class 'tlbi_asmoperand'
  MCK_UImm16, // user defined class 'uimm16_asmoperand'
  MCK_UImm3, // user defined class 'uimm3_asmoperand'
  MCK_UImm4, // user defined class 'uimm4_asmoperand'
  MCK_UImm5, // user defined class 'uimm5_asmoperand'
  MCK_UImm6, // user defined class 'uimm6_asmoperand'
  MCK_UImm7, // user defined class 'uimm7_asmoperand'
  MCK_AddrRegExtend_4_Wm, // user defined class 'word_Wm_regext_asmoperand'
  MCK_AddrRegExtend_4_Xm, // user defined class 'word_Xm_regext_asmoperand'
  MCK_SImm7_Scaled4, // user defined class 'word_simm7_asmoperand'
  MCK_OffsetUImm12_4, // user defined class 'word_uimm12_asmoperand'
  NumMatchClassKinds
};

}

static MatchClassKind matchTokenString(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 1:	 // 4 strings to match.
    switch (Name[0]) {
    default: break;
    case '!':	 // 1 string to match.
      return MCK__EXCLAIM_;	 // "!"
    case '.':	 // 1 string to match.
      return MCK__DOT_;	 // "."
    case '[':	 // 1 string to match.
      return MCK__91_;	 // "["
    case ']':	 // 1 string to match.
      return MCK__93_;	 // "]"
    }
    break;
  case 2:	 // 1 string to match.
    if (memcmp(Name.data()+0, ".d", 2))
      break;
    return MCK__DOT_d;	 // ".d"
  case 3:	 // 6 strings to match.
    if (Name[0] != '.')
      break;
    switch (Name[1]) {
    default: break;
    case '2':	 // 2 strings to match.
      switch (Name[2]) {
      default: break;
      case 'd':	 // 1 string to match.
        return MCK__DOT_2d;	 // ".2d"
      case 's':	 // 1 string to match.
        return MCK__DOT_2s;	 // ".2s"
      }
      break;
    case '4':	 // 2 strings to match.
      switch (Name[2]) {
      default: break;
      case 'h':	 // 1 string to match.
        return MCK__DOT_4h;	 // ".4h"
      case 's':	 // 1 string to match.
        return MCK__DOT_4s;	 // ".4s"
      }
      break;
    case '8':	 // 2 strings to match.
      switch (Name[2]) {
      default: break;
      case 'b':	 // 1 string to match.
        return MCK__DOT_8b;	 // ".8b"
      case 'h':	 // 1 string to match.
        return MCK__DOT_8h;	 // ".8h"
      }
      break;
    }
    break;
  case 4:	 // 1 string to match.
    if (memcmp(Name.data()+0, ".16b", 4))
      break;
    return MCK__DOT_16b;	 // ".16b"
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

  case MCK_tcGPR64:
    switch (B) {
    default: return false;
    case MCK_GPR64noxzr: return true;
    case MCK_GPR64: return true;
    case MCK_GPR64xsp: return true;
    }

  case MCK_GPR64noxzr:
    switch (B) {
    default: return false;
    case MCK_GPR64: return true;
    case MCK_GPR64xsp: return true;
    }

  case MCK_Rxsp:
    return B == MCK_GPR64xsp;

  case MCK_GPR32nowzr:
    switch (B) {
    default: return false;
    case MCK_GPR32: return true;
    case MCK_GPR32wsp: return true;
    }

  case MCK_Rwsp:
    return B == MCK_GPR32wsp;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand *GOp, MatchClassKind Kind) {
  AArch64Operand &Operand = *(AArch64Operand*)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken())
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  // 'CRx' class
  if (Kind == MCK_CRx) {
    if (Operand.isUImm<4>())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GPR64xsp0' class
  if (Kind == MCK_GPR64xsp0) {
    if (Operand.isWrappedReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm' class
  if (Kind == MCK_Imm) {
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegExtendLSL' class
  if (Kind == MCK_RegExtendLSL) {
    if (Operand.isRegExtendLSL())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_AddSubRegExtendLarge;
  }

  // 'SXTB' class
  if (Kind == MCK_SXTB) {
    if (Operand.isRegExtend<A64SE::SXTB>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_AddSubRegExtendSmall;
  }

  // 'SXTH' class
  if (Kind == MCK_SXTH) {
    if (Operand.isRegExtend<A64SE::SXTH>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_AddSubRegExtendSmall;
  }

  // 'SXTW' class
  if (Kind == MCK_SXTW) {
    if (Operand.isRegExtend<A64SE::SXTW>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_AddSubRegExtendSmall;
  }

  // 'SXTX' class
  if (Kind == MCK_SXTX) {
    if (Operand.isRegExtend<A64SE::SXTX>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_AddSubRegExtendLarge;
  }

  // 'UXTB' class
  if (Kind == MCK_UXTB) {
    if (Operand.isRegExtend<A64SE::UXTB>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_AddSubRegExtendSmall;
  }

  // 'UXTH' class
  if (Kind == MCK_UXTH) {
    if (Operand.isRegExtend<A64SE::UXTH>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_AddSubRegExtendSmall;
  }

  // 'UXTW' class
  if (Kind == MCK_UXTW) {
    if (Operand.isRegExtend<A64SE::UXTW>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_AddSubRegExtendSmall;
  }

  // 'UXTX' class
  if (Kind == MCK_UXTX) {
    if (Operand.isRegExtend<A64SE::UXTX>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_AddSubRegExtendLarge;
  }

  // 'AddSubImmLSL0' class
  if (Kind == MCK_AddSubImmLSL0) {
    if (Operand.isAddSubImmLSL0())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_AddSubSecondSource;
  }

  // 'AddSubImmLSL12' class
  if (Kind == MCK_AddSubImmLSL12) {
    if (Operand.isAddSubImmLSL12())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_AddSubSecondSource;
  }

  // 'AdrpLabel' class
  if (Kind == MCK_AdrpLabel) {
    if (Operand.isAdrpLabel())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_Label;
  }

  // 'Label21_1' class
  if (Kind == MCK_Label21_1) {
    if (Operand.isLabel<21,1>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_Label;
  }

  // 'ShiftASRi32' class
  if (Kind == MCK_ShiftASRi32) {
    if (Operand.isShift<A64SE::ASR, false>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_AddSubRegShift32;
  }

  // 'ShiftASRi64' class
  if (Kind == MCK_ShiftASRi64) {
    if (Operand.isShift<A64SE::ASR, true>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_AddSubRegShift64;
  }

  // 'NamedImmat' class
  if (Kind == MCK_NamedImmat) {
    if (Operand.isUImm())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_NamedImm_at;
  }

  // 'BFI32LSB' class
  if (Kind == MCK_BFI32LSB) {
    if (Operand.isUImm<5>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_UImm5;
  }

  // 'BFI32Width' class
  if (Kind == MCK_BFI32Width) {
    if (Operand.isBitfieldWidth<32>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_Width32;
  }

  // 'BFI64LSB' class
  if (Kind == MCK_BFI64LSB) {
    if (Operand.isUImm<6>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_UImm6;
  }

  // 'BFI64Width' class
  if (Kind == MCK_BFI64Width) {
    if (Operand.isBitfieldWidth<64>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_Width64;
  }

  // 'BFX32Width' class
  if (Kind == MCK_BFX32Width) {
    if (Operand.isBitfieldWidth<32>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_Width32;
  }

  // 'BFX64Width' class
  if (Kind == MCK_BFX64Width) {
    if (Operand.isBitfieldWidth<64>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_Width64;
  }

  // 'AddrRegExtend_1_Wm' class
  if (Kind == MCK_AddrRegExtend_1_Wm) {
    if (Operand.isAddrRegExtend<1,32>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_LoadStoreExtend32_1;
  }

  // 'AddrRegExtend_1_Xm' class
  if (Kind == MCK_AddrRegExtend_1_Xm) {
    if (Operand.isAddrRegExtend<1,64>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_LoadStoreExtend64_1;
  }

  // 'OffsetUImm12_1' class
  if (Kind == MCK_OffsetUImm12_1) {
    if (Operand.isOffsetUImm12<1>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_LoadStoreUImm12_1;
  }

  // 'CondCode' class
  if (Kind == MCK_CondCode) {
    if (Operand.isCondCode())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_CondCode;
  }

  // 'CondCodeOp' class
  if (Kind == MCK_CondCodeOp) {
    if (Operand.isCondCode())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_CondCode;
  }

  // 'NamedImmdbarrier' class
  if (Kind == MCK_NamedImmdbarrier) {
    if (Operand.isUImm())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_NamedImm_dbarrier;
  }

  // 'NamedImmdc' class
  if (Kind == MCK_NamedImmdc) {
    if (Operand.isUImm())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_NamedImm_dc;
  }

  // 'AddrRegExtend_8_Wm' class
  if (Kind == MCK_AddrRegExtend_8_Wm) {
    if (Operand.isAddrRegExtend<8,32>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_LoadStoreExtend32_8;
  }

  // 'AddrRegExtend_8_Xm' class
  if (Kind == MCK_AddrRegExtend_8_Xm) {
    if (Operand.isAddrRegExtend<8,64>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_LoadStoreExtend64_8;
  }

  // 'SImm7_Scaled8' class
  if (Kind == MCK_SImm7_Scaled8) {
    if (Operand.isSImm7Scaled<8>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_LoadStoreSImm7_8;
  }

  // 'OffsetUImm12_8' class
  if (Kind == MCK_OffsetUImm12_8) {
    if (Operand.isOffsetUImm12<8>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_LoadStoreUImm12_8;
  }

  // 'CVTFixedPos32' class
  if (Kind == MCK_CVTFixedPos32) {
    if (Operand.isCVTFixedPos<32>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_CVTFixedPos32;
  }

  // 'CVTFixedPos64' class
  if (Kind == MCK_CVTFixedPos64) {
    if (Operand.isCVTFixedPos<64>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_CVTFixedPos64;
  }

  // 'FMOVImm' class
  if (Kind == MCK_FMOVImm) {
    if (Operand.isFMOVImm())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_FPImm;
  }

  // 'FPZero' class
  if (Kind == MCK_FPZero) {
    if (Operand.isFPZero())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_FPZero;
  }

  // 'AddrRegExtend_2_Wm' class
  if (Kind == MCK_AddrRegExtend_2_Wm) {
    if (Operand.isAddrRegExtend<2,32>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_LoadStoreExtend32_2;
  }

  // 'AddrRegExtend_2_Xm' class
  if (Kind == MCK_AddrRegExtend_2_Xm) {
    if (Operand.isAddrRegExtend<2,64>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_LoadStoreExtend64_2;
  }

  // 'OffsetUImm12_2' class
  if (Kind == MCK_OffsetUImm12_2) {
    if (Operand.isOffsetUImm12<2>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_LoadStoreUImm12_2;
  }

  // 'NamedImmic' class
  if (Kind == MCK_NamedImmic) {
    if (Operand.isUImm())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_NamedImm_ic;
  }

  // 'InvCondCodeOp' class
  if (Kind == MCK_InvCondCodeOp) {
    if (Operand.isCondCode())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_CondCode;
  }

  // 'NamedImmisb' class
  if (Kind == MCK_NamedImmisb) {
    if (Operand.isUImm())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_NamedImm_isb;
  }

  // 'Label14_4' class
  if (Kind == MCK_Label14_4) {
    if (Operand.isLabel<14,4>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_Label;
  }

  // 'Label19_4' class
  if (Kind == MCK_Label19_4) {
    if (Operand.isLabel<19,4>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_Label;
  }

  // 'Label26_4' class
  if (Kind == MCK_Label26_4) {
    if (Operand.isLabel<26,4>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_Label;
  }

  // 'Lane1' class
  if (Kind == MCK_Lane1) {
    if (Operand.isLane1())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_Lane1;
  }

  // 'LoadLitLabel' class
  if (Kind == MCK_LoadLitLabel) {
    if (Operand.isLoadLitLabel())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_Label;
  }

  // 'LogicalImm32' class
  if (Kind == MCK_LogicalImm32) {
    if (Operand.isLogicalImm<32>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_LogicalSecondSource;
  }

  // 'LogicalImmMOV32' class
  if (Kind == MCK_LogicalImmMOV32) {
    if (Operand.isLogicalImmMOV<32>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_LogicalSecondSource;
  }

  // 'LogicalImm64' class
  if (Kind == MCK_LogicalImm64) {
    if (Operand.isLogicalImm<64>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_LogicalSecondSource;
  }

  // 'LogicalImmMOV64' class
  if (Kind == MCK_LogicalImmMOV64) {
    if (Operand.isLogicalImmMOV<64>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_LogicalSecondSource;
  }

  // 'ShiftLSLi32' class
  if (Kind == MCK_ShiftLSLi32) {
    if (Operand.isShift<A64SE::LSL, false>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_AddSubRegShift32;
  }

  // 'ShiftLSLi64' class
  if (Kind == MCK_ShiftLSLi64) {
    if (Operand.isShift<A64SE::LSL, true>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_AddSubRegShift64;
  }

  // 'ShiftLSRi32' class
  if (Kind == MCK_ShiftLSRi32) {
    if (Operand.isShift<A64SE::LSR, false>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_AddSubRegShift32;
  }

  // 'ShiftLSRi64' class
  if (Kind == MCK_ShiftLSRi64) {
    if (Operand.isShift<A64SE::LSR, true>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_AddSubRegShift64;
  }

  // 'MOVK32Shiftedshift' class
  if (Kind == MCK_MOVK32Shiftedshift) {
    if (Operand.isMOVK32Imm())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_MOVWUImm16;
  }

  // 'MOVK64Shiftedshift' class
  if (Kind == MCK_MOVK64Shiftedshift) {
    if (Operand.isMOVK64Imm())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_MOVWUImm16;
  }

  // 'MOVN32MovAlias' class
  if (Kind == MCK_MOVN32MovAlias) {
    if (Operand.isMoveWideMovAlias<32, A64Imms::isOnlyMOVNImm>())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MOVN32Shiftedshift' class
  if (Kind == MCK_MOVN32Shiftedshift) {
    if (Operand.isMOVN32Imm())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_MOVWUImm16;
  }

  // 'MOVN64MovAlias' class
  if (Kind == MCK_MOVN64MovAlias) {
    if (Operand.isMoveWideMovAlias<64, A64Imms::isOnlyMOVNImm>())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MOVN64Shiftedshift' class
  if (Kind == MCK_MOVN64Shiftedshift) {
    if (Operand.isMOVN64Imm())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_MOVWUImm16;
  }

  // 'MOVZ32MovAlias' class
  if (Kind == MCK_MOVZ32MovAlias) {
    if (Operand.isMoveWideMovAlias<32, A64Imms::isMOVZImm>())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MOVZ32Shiftedshift' class
  if (Kind == MCK_MOVZ32Shiftedshift) {
    if (Operand.isMOVZ32Imm())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_MOVWUImm16;
  }

  // 'MOVZ64MovAlias' class
  if (Kind == MCK_MOVZ64MovAlias) {
    if (Operand.isMoveWideMovAlias<64, A64Imms::isMOVZImm>())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MOVZ64Shiftedshift' class
  if (Kind == MCK_MOVZ64Shiftedshift) {
    if (Operand.isMOVZ64Imm())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_MOVWUImm16;
  }

  // 'MRS' class
  if (Kind == MCK_MRS) {
    if (Operand.isMRS())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_MRS;
  }

  // 'MSRWithReg' class
  if (Kind == MCK_MSRWithReg) {
    if (Operand.isMSRWithReg())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_MSR;
  }

  // 'NeonMovImmShiftLSLH' class
  if (Kind == MCK_NeonMovImmShiftLSLH) {
    if (Operand.isNeonMovImmShiftLSLH())
      return MCTargetAsmParser::Match_Success;
  }

  // 'NeonMovImmShiftLSL' class
  if (Kind == MCK_NeonMovImmShiftLSL) {
    if (Operand.isNeonMovImmShiftLSL())
      return MCTargetAsmParser::Match_Success;
  }

  // 'NeonMovImmShiftMSL' class
  if (Kind == MCK_NeonMovImmShiftMSL) {
    if (Operand.isNeonMovImmShiftMSL())
      return MCTargetAsmParser::Match_Success;
  }

  // 'UImm0' class
  if (Kind == MCK_UImm0) {
    if (Operand.isUImm<0>())
      return MCTargetAsmParser::Match_Success;
  }

  // 'NeonUImm64Mask' class
  if (Kind == MCK_NeonUImm64Mask) {
    if (Operand.isNeonUImm64Mask())
      return MCTargetAsmParser::Match_Success;
  }

  // 'UImm8' class
  if (Kind == MCK_UImm8) {
    if (Operand.isUImm<8>())
      return MCTargetAsmParser::Match_Success;
  }

  // 'NamedImmprefetch' class
  if (Kind == MCK_NamedImmprefetch) {
    if (Operand.isUImm())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_NamedImm_prefetch;
  }

  // 'MSRPState' class
  if (Kind == MCK_MSRPState) {
    if (Operand.isMSRPState())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_MSR;
  }

  // 'AddrRegExtend_16_Wm' class
  if (Kind == MCK_AddrRegExtend_16_Wm) {
    if (Operand.isAddrRegExtend<16,32>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_LoadStoreExtend32_16;
  }

  // 'AddrRegExtend_16_Xm' class
  if (Kind == MCK_AddrRegExtend_16_Xm) {
    if (Operand.isAddrRegExtend<16,64>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_LoadStoreExtend64_16;
  }

  // 'SImm7_Scaled16' class
  if (Kind == MCK_SImm7_Scaled16) {
    if (Operand.isSImm7Scaled<16>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_LoadStoreSImm7_16;
  }

  // 'OffsetUImm12_16' class
  if (Kind == MCK_OffsetUImm12_16) {
    if (Operand.isOffsetUImm12<16>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_LoadStoreUImm12_16;
  }

  // 'ShiftRORi32' class
  if (Kind == MCK_ShiftRORi32) {
    if (Operand.isShift<A64SE::ROR, false>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_AddSubRegShift32;
  }

  // 'ShiftRORi64' class
  if (Kind == MCK_ShiftRORi64) {
    if (Operand.isShift<A64SE::ROR, true>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_AddSubRegShift64;
  }

  // 'SImm9' class
  if (Kind == MCK_SImm9) {
    if (Operand.isSImm<9>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_LoadStoreSImm9;
  }

  // 'NamedImmtlbi' class
  if (Kind == MCK_NamedImmtlbi) {
    if (Operand.isUImm())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_NamedImm_tlbi;
  }

  // 'UImm16' class
  if (Kind == MCK_UImm16) {
    if (Operand.isUImm<16>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_UImm16;
  }

  // 'UImm3' class
  if (Kind == MCK_UImm3) {
    if (Operand.isUImm<3>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_UImm3;
  }

  // 'UImm4' class
  if (Kind == MCK_UImm4) {
    if (Operand.isUImm<4>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_UImm4;
  }

  // 'UImm5' class
  if (Kind == MCK_UImm5) {
    if (Operand.isUImm<5>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_UImm5;
  }

  // 'UImm6' class
  if (Kind == MCK_UImm6) {
    if (Operand.isUImm<6>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_UImm6;
  }

  // 'UImm7' class
  if (Kind == MCK_UImm7) {
    if (Operand.isUImm<7>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_UImm7;
  }

  // 'AddrRegExtend_4_Wm' class
  if (Kind == MCK_AddrRegExtend_4_Wm) {
    if (Operand.isAddrRegExtend<4,32>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_LoadStoreExtend32_4;
  }

  // 'AddrRegExtend_4_Xm' class
  if (Kind == MCK_AddrRegExtend_4_Xm) {
    if (Operand.isAddrRegExtend<4,64>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_LoadStoreExtend64_4;
  }

  // 'SImm7_Scaled4' class
  if (Kind == MCK_SImm7_Scaled4) {
    if (Operand.isSImm7Scaled<4>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_LoadStoreSImm7_4;
  }

  // 'OffsetUImm12_4' class
  if (Kind == MCK_OffsetUImm12_4) {
    if (Operand.isOffsetUImm12<4>())
      return MCTargetAsmParser::Match_Success;
    return AArch64AsmParser::Match_LoadStoreUImm12_4;
  }

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case AArch64::W0: OpKind = MCK_GPR32nowzr; break;
    case AArch64::W1: OpKind = MCK_GPR32nowzr; break;
    case AArch64::W2: OpKind = MCK_GPR32nowzr; break;
    case AArch64::W3: OpKind = MCK_GPR32nowzr; break;
    case AArch64::W4: OpKind = MCK_GPR32nowzr; break;
    case AArch64::W5: OpKind = MCK_GPR32nowzr; break;
    case AArch64::W6: OpKind = MCK_GPR32nowzr; break;
    case AArch64::W7: OpKind = MCK_GPR32nowzr; break;
    case AArch64::W8: OpKind = MCK_GPR32nowzr; break;
    case AArch64::W9: OpKind = MCK_GPR32nowzr; break;
    case AArch64::W10: OpKind = MCK_GPR32nowzr; break;
    case AArch64::W11: OpKind = MCK_GPR32nowzr; break;
    case AArch64::W12: OpKind = MCK_GPR32nowzr; break;
    case AArch64::W13: OpKind = MCK_GPR32nowzr; break;
    case AArch64::W14: OpKind = MCK_GPR32nowzr; break;
    case AArch64::W15: OpKind = MCK_GPR32nowzr; break;
    case AArch64::W16: OpKind = MCK_GPR32nowzr; break;
    case AArch64::W17: OpKind = MCK_GPR32nowzr; break;
    case AArch64::W18: OpKind = MCK_GPR32nowzr; break;
    case AArch64::W19: OpKind = MCK_GPR32nowzr; break;
    case AArch64::W20: OpKind = MCK_GPR32nowzr; break;
    case AArch64::W21: OpKind = MCK_GPR32nowzr; break;
    case AArch64::W22: OpKind = MCK_GPR32nowzr; break;
    case AArch64::W23: OpKind = MCK_GPR32nowzr; break;
    case AArch64::W24: OpKind = MCK_GPR32nowzr; break;
    case AArch64::W25: OpKind = MCK_GPR32nowzr; break;
    case AArch64::W26: OpKind = MCK_GPR32nowzr; break;
    case AArch64::W27: OpKind = MCK_GPR32nowzr; break;
    case AArch64::W28: OpKind = MCK_GPR32nowzr; break;
    case AArch64::W29: OpKind = MCK_GPR32nowzr; break;
    case AArch64::W30: OpKind = MCK_GPR32nowzr; break;
    case AArch64::WSP: OpKind = MCK_Rwsp; break;
    case AArch64::WZR: OpKind = MCK_GPR32; break;
    case AArch64::X0: OpKind = MCK_tcGPR64; break;
    case AArch64::X1: OpKind = MCK_tcGPR64; break;
    case AArch64::X2: OpKind = MCK_tcGPR64; break;
    case AArch64::X3: OpKind = MCK_tcGPR64; break;
    case AArch64::X4: OpKind = MCK_tcGPR64; break;
    case AArch64::X5: OpKind = MCK_tcGPR64; break;
    case AArch64::X6: OpKind = MCK_tcGPR64; break;
    case AArch64::X7: OpKind = MCK_tcGPR64; break;
    case AArch64::X8: OpKind = MCK_GPR64noxzr; break;
    case AArch64::X9: OpKind = MCK_tcGPR64; break;
    case AArch64::X10: OpKind = MCK_tcGPR64; break;
    case AArch64::X11: OpKind = MCK_tcGPR64; break;
    case AArch64::X12: OpKind = MCK_tcGPR64; break;
    case AArch64::X13: OpKind = MCK_tcGPR64; break;
    case AArch64::X14: OpKind = MCK_tcGPR64; break;
    case AArch64::X15: OpKind = MCK_tcGPR64; break;
    case AArch64::X16: OpKind = MCK_tcGPR64; break;
    case AArch64::X17: OpKind = MCK_tcGPR64; break;
    case AArch64::X18: OpKind = MCK_tcGPR64; break;
    case AArch64::X19: OpKind = MCK_GPR64noxzr; break;
    case AArch64::X20: OpKind = MCK_GPR64noxzr; break;
    case AArch64::X21: OpKind = MCK_GPR64noxzr; break;
    case AArch64::X22: OpKind = MCK_GPR64noxzr; break;
    case AArch64::X23: OpKind = MCK_GPR64noxzr; break;
    case AArch64::X24: OpKind = MCK_GPR64noxzr; break;
    case AArch64::X25: OpKind = MCK_GPR64noxzr; break;
    case AArch64::X26: OpKind = MCK_GPR64noxzr; break;
    case AArch64::X27: OpKind = MCK_GPR64noxzr; break;
    case AArch64::X28: OpKind = MCK_GPR64noxzr; break;
    case AArch64::X29: OpKind = MCK_GPR64noxzr; break;
    case AArch64::X30: OpKind = MCK_GPR64noxzr; break;
    case AArch64::XSP: OpKind = MCK_Rxsp; break;
    case AArch64::XZR: OpKind = MCK_GPR64; break;
    case AArch64::B0: OpKind = MCK_FPR8; break;
    case AArch64::B1: OpKind = MCK_FPR8; break;
    case AArch64::B2: OpKind = MCK_FPR8; break;
    case AArch64::B3: OpKind = MCK_FPR8; break;
    case AArch64::B4: OpKind = MCK_FPR8; break;
    case AArch64::B5: OpKind = MCK_FPR8; break;
    case AArch64::B6: OpKind = MCK_FPR8; break;
    case AArch64::B7: OpKind = MCK_FPR8; break;
    case AArch64::B8: OpKind = MCK_FPR8; break;
    case AArch64::B9: OpKind = MCK_FPR8; break;
    case AArch64::B10: OpKind = MCK_FPR8; break;
    case AArch64::B11: OpKind = MCK_FPR8; break;
    case AArch64::B12: OpKind = MCK_FPR8; break;
    case AArch64::B13: OpKind = MCK_FPR8; break;
    case AArch64::B14: OpKind = MCK_FPR8; break;
    case AArch64::B15: OpKind = MCK_FPR8; break;
    case AArch64::B16: OpKind = MCK_FPR8; break;
    case AArch64::B17: OpKind = MCK_FPR8; break;
    case AArch64::B18: OpKind = MCK_FPR8; break;
    case AArch64::B19: OpKind = MCK_FPR8; break;
    case AArch64::B20: OpKind = MCK_FPR8; break;
    case AArch64::B21: OpKind = MCK_FPR8; break;
    case AArch64::B22: OpKind = MCK_FPR8; break;
    case AArch64::B23: OpKind = MCK_FPR8; break;
    case AArch64::B24: OpKind = MCK_FPR8; break;
    case AArch64::B25: OpKind = MCK_FPR8; break;
    case AArch64::B26: OpKind = MCK_FPR8; break;
    case AArch64::B27: OpKind = MCK_FPR8; break;
    case AArch64::B28: OpKind = MCK_FPR8; break;
    case AArch64::B29: OpKind = MCK_FPR8; break;
    case AArch64::B30: OpKind = MCK_FPR8; break;
    case AArch64::B31: OpKind = MCK_FPR8; break;
    case AArch64::H0: OpKind = MCK_FPR16; break;
    case AArch64::H1: OpKind = MCK_FPR16; break;
    case AArch64::H2: OpKind = MCK_FPR16; break;
    case AArch64::H3: OpKind = MCK_FPR16; break;
    case AArch64::H4: OpKind = MCK_FPR16; break;
    case AArch64::H5: OpKind = MCK_FPR16; break;
    case AArch64::H6: OpKind = MCK_FPR16; break;
    case AArch64::H7: OpKind = MCK_FPR16; break;
    case AArch64::H8: OpKind = MCK_FPR16; break;
    case AArch64::H9: OpKind = MCK_FPR16; break;
    case AArch64::H10: OpKind = MCK_FPR16; break;
    case AArch64::H11: OpKind = MCK_FPR16; break;
    case AArch64::H12: OpKind = MCK_FPR16; break;
    case AArch64::H13: OpKind = MCK_FPR16; break;
    case AArch64::H14: OpKind = MCK_FPR16; break;
    case AArch64::H15: OpKind = MCK_FPR16; break;
    case AArch64::H16: OpKind = MCK_FPR16; break;
    case AArch64::H17: OpKind = MCK_FPR16; break;
    case AArch64::H18: OpKind = MCK_FPR16; break;
    case AArch64::H19: OpKind = MCK_FPR16; break;
    case AArch64::H20: OpKind = MCK_FPR16; break;
    case AArch64::H21: OpKind = MCK_FPR16; break;
    case AArch64::H22: OpKind = MCK_FPR16; break;
    case AArch64::H23: OpKind = MCK_FPR16; break;
    case AArch64::H24: OpKind = MCK_FPR16; break;
    case AArch64::H25: OpKind = MCK_FPR16; break;
    case AArch64::H26: OpKind = MCK_FPR16; break;
    case AArch64::H27: OpKind = MCK_FPR16; break;
    case AArch64::H28: OpKind = MCK_FPR16; break;
    case AArch64::H29: OpKind = MCK_FPR16; break;
    case AArch64::H30: OpKind = MCK_FPR16; break;
    case AArch64::H31: OpKind = MCK_FPR16; break;
    case AArch64::S0: OpKind = MCK_FPR32; break;
    case AArch64::S1: OpKind = MCK_FPR32; break;
    case AArch64::S2: OpKind = MCK_FPR32; break;
    case AArch64::S3: OpKind = MCK_FPR32; break;
    case AArch64::S4: OpKind = MCK_FPR32; break;
    case AArch64::S5: OpKind = MCK_FPR32; break;
    case AArch64::S6: OpKind = MCK_FPR32; break;
    case AArch64::S7: OpKind = MCK_FPR32; break;
    case AArch64::S8: OpKind = MCK_FPR32; break;
    case AArch64::S9: OpKind = MCK_FPR32; break;
    case AArch64::S10: OpKind = MCK_FPR32; break;
    case AArch64::S11: OpKind = MCK_FPR32; break;
    case AArch64::S12: OpKind = MCK_FPR32; break;
    case AArch64::S13: OpKind = MCK_FPR32; break;
    case AArch64::S14: OpKind = MCK_FPR32; break;
    case AArch64::S15: OpKind = MCK_FPR32; break;
    case AArch64::S16: OpKind = MCK_FPR32; break;
    case AArch64::S17: OpKind = MCK_FPR32; break;
    case AArch64::S18: OpKind = MCK_FPR32; break;
    case AArch64::S19: OpKind = MCK_FPR32; break;
    case AArch64::S20: OpKind = MCK_FPR32; break;
    case AArch64::S21: OpKind = MCK_FPR32; break;
    case AArch64::S22: OpKind = MCK_FPR32; break;
    case AArch64::S23: OpKind = MCK_FPR32; break;
    case AArch64::S24: OpKind = MCK_FPR32; break;
    case AArch64::S25: OpKind = MCK_FPR32; break;
    case AArch64::S26: OpKind = MCK_FPR32; break;
    case AArch64::S27: OpKind = MCK_FPR32; break;
    case AArch64::S28: OpKind = MCK_FPR32; break;
    case AArch64::S29: OpKind = MCK_FPR32; break;
    case AArch64::S30: OpKind = MCK_FPR32; break;
    case AArch64::S31: OpKind = MCK_FPR32; break;
    case AArch64::D0: OpKind = MCK_FPR64; break;
    case AArch64::D1: OpKind = MCK_FPR64; break;
    case AArch64::D2: OpKind = MCK_FPR64; break;
    case AArch64::D3: OpKind = MCK_FPR64; break;
    case AArch64::D4: OpKind = MCK_FPR64; break;
    case AArch64::D5: OpKind = MCK_FPR64; break;
    case AArch64::D6: OpKind = MCK_FPR64; break;
    case AArch64::D7: OpKind = MCK_FPR64; break;
    case AArch64::D8: OpKind = MCK_FPR64; break;
    case AArch64::D9: OpKind = MCK_FPR64; break;
    case AArch64::D10: OpKind = MCK_FPR64; break;
    case AArch64::D11: OpKind = MCK_FPR64; break;
    case AArch64::D12: OpKind = MCK_FPR64; break;
    case AArch64::D13: OpKind = MCK_FPR64; break;
    case AArch64::D14: OpKind = MCK_FPR64; break;
    case AArch64::D15: OpKind = MCK_FPR64; break;
    case AArch64::D16: OpKind = MCK_FPR64; break;
    case AArch64::D17: OpKind = MCK_FPR64; break;
    case AArch64::D18: OpKind = MCK_FPR64; break;
    case AArch64::D19: OpKind = MCK_FPR64; break;
    case AArch64::D20: OpKind = MCK_FPR64; break;
    case AArch64::D21: OpKind = MCK_FPR64; break;
    case AArch64::D22: OpKind = MCK_FPR64; break;
    case AArch64::D23: OpKind = MCK_FPR64; break;
    case AArch64::D24: OpKind = MCK_FPR64; break;
    case AArch64::D25: OpKind = MCK_FPR64; break;
    case AArch64::D26: OpKind = MCK_FPR64; break;
    case AArch64::D27: OpKind = MCK_FPR64; break;
    case AArch64::D28: OpKind = MCK_FPR64; break;
    case AArch64::D29: OpKind = MCK_FPR64; break;
    case AArch64::D30: OpKind = MCK_FPR64; break;
    case AArch64::D31: OpKind = MCK_FPR64; break;
    case AArch64::Q0: OpKind = MCK_FPR128; break;
    case AArch64::Q1: OpKind = MCK_FPR128; break;
    case AArch64::Q2: OpKind = MCK_FPR128; break;
    case AArch64::Q3: OpKind = MCK_FPR128; break;
    case AArch64::Q4: OpKind = MCK_FPR128; break;
    case AArch64::Q5: OpKind = MCK_FPR128; break;
    case AArch64::Q6: OpKind = MCK_FPR128; break;
    case AArch64::Q7: OpKind = MCK_FPR128; break;
    case AArch64::Q8: OpKind = MCK_FPR128; break;
    case AArch64::Q9: OpKind = MCK_FPR128; break;
    case AArch64::Q10: OpKind = MCK_FPR128; break;
    case AArch64::Q11: OpKind = MCK_FPR128; break;
    case AArch64::Q12: OpKind = MCK_FPR128; break;
    case AArch64::Q13: OpKind = MCK_FPR128; break;
    case AArch64::Q14: OpKind = MCK_FPR128; break;
    case AArch64::Q15: OpKind = MCK_FPR128; break;
    case AArch64::Q16: OpKind = MCK_FPR128; break;
    case AArch64::Q17: OpKind = MCK_FPR128; break;
    case AArch64::Q18: OpKind = MCK_FPR128; break;
    case AArch64::Q19: OpKind = MCK_FPR128; break;
    case AArch64::Q20: OpKind = MCK_FPR128; break;
    case AArch64::Q21: OpKind = MCK_FPR128; break;
    case AArch64::Q22: OpKind = MCK_FPR128; break;
    case AArch64::Q23: OpKind = MCK_FPR128; break;
    case AArch64::Q24: OpKind = MCK_FPR128; break;
    case AArch64::Q25: OpKind = MCK_FPR128; break;
    case AArch64::Q26: OpKind = MCK_FPR128; break;
    case AArch64::Q27: OpKind = MCK_FPR128; break;
    case AArch64::Q28: OpKind = MCK_FPR128; break;
    case AArch64::Q29: OpKind = MCK_FPR128; break;
    case AArch64::Q30: OpKind = MCK_FPR128; break;
    case AArch64::Q31: OpKind = MCK_FPR128; break;
    case AArch64::V0: OpKind = MCK_VPR64; break;
    case AArch64::V1: OpKind = MCK_VPR64; break;
    case AArch64::V2: OpKind = MCK_VPR64; break;
    case AArch64::V3: OpKind = MCK_VPR64; break;
    case AArch64::V4: OpKind = MCK_VPR64; break;
    case AArch64::V5: OpKind = MCK_VPR64; break;
    case AArch64::V6: OpKind = MCK_VPR64; break;
    case AArch64::V7: OpKind = MCK_VPR64; break;
    case AArch64::V8: OpKind = MCK_VPR64; break;
    case AArch64::V9: OpKind = MCK_VPR64; break;
    case AArch64::V10: OpKind = MCK_VPR64; break;
    case AArch64::V11: OpKind = MCK_VPR64; break;
    case AArch64::V12: OpKind = MCK_VPR64; break;
    case AArch64::V13: OpKind = MCK_VPR64; break;
    case AArch64::V14: OpKind = MCK_VPR64; break;
    case AArch64::V15: OpKind = MCK_VPR64; break;
    case AArch64::V16: OpKind = MCK_VPR64; break;
    case AArch64::V17: OpKind = MCK_VPR64; break;
    case AArch64::V18: OpKind = MCK_VPR64; break;
    case AArch64::V19: OpKind = MCK_VPR64; break;
    case AArch64::V20: OpKind = MCK_VPR64; break;
    case AArch64::V21: OpKind = MCK_VPR64; break;
    case AArch64::V22: OpKind = MCK_VPR64; break;
    case AArch64::V23: OpKind = MCK_VPR64; break;
    case AArch64::V24: OpKind = MCK_VPR64; break;
    case AArch64::V25: OpKind = MCK_VPR64; break;
    case AArch64::V26: OpKind = MCK_VPR64; break;
    case AArch64::V27: OpKind = MCK_VPR64; break;
    case AArch64::V28: OpKind = MCK_VPR64; break;
    case AArch64::V29: OpKind = MCK_VPR64; break;
    case AArch64::V30: OpKind = MCK_VPR64; break;
    case AArch64::V31: OpKind = MCK_VPR64; break;
    case AArch64::NZCV: OpKind = MCK_FlagClass; break;
    }
    return isSubclass(OpKind, Kind) ? MCTargetAsmParser::Match_Success :
                                      MCTargetAsmParser::Match_InvalidOperand;
  }

  return MCTargetAsmParser::Match_InvalidOperand;
}

unsigned AArch64AsmParser::
ComputeAvailableFeatures(uint64_t FB) const {
  unsigned Features = 0;
  if (((FB & AArch64::FeatureNEON) != 0))
    Features |= Feature_HasNEON;
  if (((FB & AArch64::FeatureCrypto) != 0))
    Features |= Feature_HasCrypto;
  return Features;
}

static const char *const MnemonicTable =
    "\003adc\004adcs\003add\004addp\004adds\003adr\004adrp\003and\004ands\003"
    "asr\002at\001b\003bfi\003bfm\005bfxil\003bic\004bics\003bif\003bit\002b"
    "l\003blr\002br\003brk\003bsl\004cbnz\003cbz\004ccmn\004ccmp\004cinc\004"
    "cinv\005clrex\003cls\003clz\004cmeq\004cmge\004cmgt\004cmhi\004cmhs\004"
    "cmle\004cmlo\004cmls\004cmlt\003cmn\003cmp\005cmtst\004cneg\006crc32b\007"
    "crc32cb\007crc32ch\007crc32cw\007crc32cx\006crc32h\006crc32w\006crc32x\004"
    "csel\004cset\005csetm\005csinc\005csinv\005csneg\002dc\005dcps1\005dcps"
    "2\005dcps3\003dmb\004drps\003dsb\003eon\003eor\004eret\004extr\004fabd\004"
    "fabs\005facge\005facgt\005facle\005faclt\004fadd\005faddp\005fccmp\006f"
    "ccmpe\005fcmeq\005fcmge\005fcmgt\005fcmle\005fcmlt\004fcmp\005fcmpe\005"
    "fcsel\004fcvt\006fcvtas\006fcvtau\006fcvtms\006fcvtmu\006fcvtns\006fcvt"
    "nu\006fcvtps\006fcvtpu\006fcvtzs\006fcvtzu\004fdiv\005fmadd\004fmax\006"
    "fmaxnm\007fmaxnmp\005fmaxp\004fmin\006fminnm\007fminnmp\005fminp\004fml"
    "a\004fmls\004fmov\005fmsub\004fmul\005fmulx\004fneg\006fnmadd\006fnmsub"
    "\005fnmul\006frecps\006frinta\006frinti\006frintm\006frintn\006frintp\006"
    "frintx\006frintz\007frsqrts\005fsqrt\004fsub\004hint\003hlt\003hvc\002i"
    "c\003isb\004ldar\005ldarb\005ldarh\005ldaxp\005ldaxr\006ldaxrb\006ldaxr"
    "h\004ldnp\003ldp\005ldpsw\003ldr\004ldrb\004ldrh\005ldrsb\005ldrsh\005l"
    "drsw\004ldtr\005ldtrb\005ldtrh\006ldtrsb\006ldtrsh\006ldtrsw\004ldur\005"
    "ldurb\005ldurh\006ldursb\006ldursh\006ldursw\004ldxp\004ldxr\005ldxrb\005"
    "ldxrh\003lsl\003lsr\004madd\003mla\003mls\004mneg\003mov\004movi\004mov"
    "k\004movn\004movz\003mrs\003msr\004msub\003mul\003mvn\004mvni\003neg\004"
    "negs\003ngc\004ngcs\003nop\003orn\003orr\004pmul\004prfm\005prfum\004rb"
    "it\003ret\003rev\005rev16\005rev32\003ror\004saba\004sabd\003sbc\004sbc"
    "s\005sbfiz\004sbfm\004sbfx\005scvtf\004sdiv\003sev\004sevl\005shadd\005"
    "shsub\006smaddl\004smax\005smaxp\003smc\004smin\005sminp\006smnegl\006s"
    "msubl\005smulh\005smull\005sqadd\007sqdmulh\010sqrdmulh\006sqrshl\005sq"
    "shl\005sqsub\006srhadd\005srshl\004sshl\004stlr\005stlrb\005stlrh\005st"
    "lxp\005stlxr\006stlxrb\006stlxrh\004stnp\003stp\003str\004strb\004strh\004"
    "sttr\005sttrb\005sttrh\004stur\005sturb\005sturh\004stxp\004stxr\005stx"
    "rb\005stxrh\003sub\004subs\003svc\004sxtb\004sxth\004sxtw\003sys\004sys"
    "l\004tbnz\003tbz\004tlbi\003tst\004uaba\004uabd\005ubfiz\004ubfm\004ubf"
    "x\005ucvtf\004udiv\005uhadd\005uhsub\006umaddl\004umax\005umaxp\004umin"
    "\005uminp\006umnegl\006umsubl\005umulh\005umull\005uqadd\006uqrshl\005u"
    "qshl\005uqsub\006urhadd\005urshl\004ushl\004uxtb\004uxth\003wfe\003wfi\005"
    "yield";

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint16_t ConvertFn;
    uint8_t RequiredFeatures;
    uint8_t Classes[7];
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
  { 0 /* adc */, AArch64::ADCxxx, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64 }, },
  { 0 /* adc */, AArch64::ADCwww, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32 }, },
  { 4 /* adcs */, AArch64::ADCSxxx, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64 }, },
  { 4 /* adcs */, AArch64::ADCSwww, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32 }, },
  { 9 /* add */, AArch64::ADDxxx_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__imm_0, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64 }, },
  { 9 /* add */, AArch64::ADDxxi_lsl0_s, Convert__Reg1_0__Reg1_1__AddSubImmLSL01_2, 0, { MCK_GPR64xsp, MCK_GPR64xsp, MCK_AddSubImmLSL0 }, },
  { 9 /* add */, AArch64::ADDxxi_lsl12_s, Convert__Reg1_0__Reg1_1__AddSubImmLSL121_2, 0, { MCK_GPR64xsp, MCK_GPR64xsp, MCK_AddSubImmLSL12 }, },
  { 9 /* add */, AArch64::ADDwww_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__imm_0, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32 }, },
  { 9 /* add */, AArch64::ADDwww_uxtw, Convert__Reg1_0__Reg1_1__Reg1_2__imm_0, 0, { MCK_Rwsp, MCK_GPR32wsp, MCK_GPR32 }, },
  { 9 /* add */, AArch64::ADDwww_uxtw, Convert__Reg1_0__Reg1_1__Reg1_2__imm_0, 0, { MCK_GPR32wsp, MCK_Rwsp, MCK_GPR32 }, },
  { 9 /* add */, AArch64::ADDwwi_lsl0_s, Convert__Reg1_0__Reg1_1__AddSubImmLSL01_2, 0, { MCK_GPR32wsp, MCK_GPR32wsp, MCK_AddSubImmLSL0 }, },
  { 9 /* add */, AArch64::ADDwwi_lsl12_s, Convert__Reg1_0__Reg1_1__AddSubImmLSL121_2, 0, { MCK_GPR32wsp, MCK_GPR32wsp, MCK_AddSubImmLSL12 }, },
  { 9 /* add */, AArch64::ADDxxx_uxtx, Convert__Reg1_0__Reg1_1__Reg1_2__imm_0, 0, { MCK_Rxsp, MCK_GPR64xsp, MCK_GPR64 }, },
  { 9 /* add */, AArch64::ADDxxx_uxtx, Convert__Reg1_0__Reg1_1__Reg1_2__imm_0, 0, { MCK_GPR64xsp, MCK_Rxsp, MCK_GPR64 }, },
  { 9 /* add */, AArch64::ADDddd, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 9 /* add */, AArch64::ADDxxx_asr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftASRi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftASRi64 }, },
  { 9 /* add */, AArch64::ADDxxx_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSLi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftLSLi64 }, },
  { 9 /* add */, AArch64::ADDxxx_lsr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSRi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftLSRi64 }, },
  { 9 /* add */, AArch64::ADDxxx_uxtx, Convert__Reg1_0__Reg1_1__Reg1_2__RegExtendLSL1_3, 0, { MCK_Rxsp, MCK_GPR64xsp, MCK_GPR64, MCK_RegExtendLSL }, },
  { 9 /* add */, AArch64::ADDxxx_uxtx, Convert__Reg1_0__Reg1_1__Reg1_2__RegExtendLSL1_3, 0, { MCK_GPR64xsp, MCK_Rxsp, MCK_GPR64, MCK_RegExtendLSL }, },
  { 9 /* add */, AArch64::ADDxxx_sxtx, Convert__Reg1_0__Reg1_1__Reg1_2__SXTX1_3, 0, { MCK_GPR64xsp, MCK_GPR64xsp, MCK_GPR64, MCK_SXTX }, },
  { 9 /* add */, AArch64::ADDxxx_uxtx, Convert__Reg1_0__Reg1_1__Reg1_2__UXTX1_3, 0, { MCK_GPR64xsp, MCK_GPR64xsp, MCK_GPR64, MCK_UXTX }, },
  { 9 /* add */, AArch64::ADDxxw_sxtb, Convert__Reg1_0__Reg1_1__Reg1_2__SXTB1_3, 0, { MCK_GPR64xsp, MCK_GPR64xsp, MCK_GPR32, MCK_SXTB }, },
  { 9 /* add */, AArch64::ADDxxw_sxth, Convert__Reg1_0__Reg1_1__Reg1_2__SXTH1_3, 0, { MCK_GPR64xsp, MCK_GPR64xsp, MCK_GPR32, MCK_SXTH }, },
  { 9 /* add */, AArch64::ADDxxw_sxtw, Convert__Reg1_0__Reg1_1__Reg1_2__SXTW1_3, 0, { MCK_GPR64xsp, MCK_GPR64xsp, MCK_GPR32, MCK_SXTW }, },
  { 9 /* add */, AArch64::ADDxxw_uxtb, Convert__Reg1_0__Reg1_1__Reg1_2__UXTB1_3, 0, { MCK_GPR64xsp, MCK_GPR64xsp, MCK_GPR32, MCK_UXTB }, },
  { 9 /* add */, AArch64::ADDxxw_uxth, Convert__Reg1_0__Reg1_1__Reg1_2__UXTH1_3, 0, { MCK_GPR64xsp, MCK_GPR64xsp, MCK_GPR32, MCK_UXTH }, },
  { 9 /* add */, AArch64::ADDxxw_uxtw, Convert__Reg1_0__Reg1_1__Reg1_2__UXTW1_3, 0, { MCK_GPR64xsp, MCK_GPR64xsp, MCK_GPR32, MCK_UXTW }, },
  { 9 /* add */, AArch64::ADDwww_asr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftASRi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftASRi32 }, },
  { 9 /* add */, AArch64::ADDwww_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSLi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftLSLi32 }, },
  { 9 /* add */, AArch64::ADDwww_lsr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSRi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftLSRi32 }, },
  { 9 /* add */, AArch64::ADDwww_uxtw, Convert__Reg1_0__Reg1_1__Reg1_2__RegExtendLSL1_3, 0, { MCK_Rwsp, MCK_GPR32wsp, MCK_GPR32, MCK_RegExtendLSL }, },
  { 9 /* add */, AArch64::ADDwww_uxtw, Convert__Reg1_0__Reg1_1__Reg1_2__RegExtendLSL1_3, 0, { MCK_GPR32wsp, MCK_Rwsp, MCK_GPR32, MCK_RegExtendLSL }, },
  { 9 /* add */, AArch64::ADDwww_sxtb, Convert__Reg1_0__Reg1_1__Reg1_2__SXTB1_3, 0, { MCK_GPR32wsp, MCK_GPR32wsp, MCK_GPR32, MCK_SXTB }, },
  { 9 /* add */, AArch64::ADDwww_sxth, Convert__Reg1_0__Reg1_1__Reg1_2__SXTH1_3, 0, { MCK_GPR32wsp, MCK_GPR32wsp, MCK_GPR32, MCK_SXTH }, },
  { 9 /* add */, AArch64::ADDwww_sxtw, Convert__Reg1_0__Reg1_1__Reg1_2__SXTW1_3, 0, { MCK_GPR32wsp, MCK_GPR32wsp, MCK_GPR32, MCK_SXTW }, },
  { 9 /* add */, AArch64::ADDwww_sxtx, Convert__Reg1_0__Reg1_1__Reg1_2__SXTX1_3, 0, { MCK_GPR32wsp, MCK_GPR32wsp, MCK_GPR32, MCK_SXTX }, },
  { 9 /* add */, AArch64::ADDwww_uxtb, Convert__Reg1_0__Reg1_1__Reg1_2__UXTB1_3, 0, { MCK_GPR32wsp, MCK_GPR32wsp, MCK_GPR32, MCK_UXTB }, },
  { 9 /* add */, AArch64::ADDwww_uxth, Convert__Reg1_0__Reg1_1__Reg1_2__UXTH1_3, 0, { MCK_GPR32wsp, MCK_GPR32wsp, MCK_GPR32, MCK_UXTH }, },
  { 9 /* add */, AArch64::ADDwww_uxtw, Convert__Reg1_0__Reg1_1__Reg1_2__UXTW1_3, 0, { MCK_GPR32wsp, MCK_GPR32wsp, MCK_GPR32, MCK_UXTW }, },
  { 9 /* add */, AArch64::ADDwww_uxtx, Convert__Reg1_0__Reg1_1__Reg1_2__UXTX1_3, 0, { MCK_GPR32wsp, MCK_GPR32wsp, MCK_GPR32, MCK_UXTX }, },
  { 9 /* add */, AArch64::ADDvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 9 /* add */, AArch64::ADDvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 9 /* add */, AArch64::ADDvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 9 /* add */, AArch64::ADDvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 9 /* add */, AArch64::ADDvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 9 /* add */, AArch64::ADDvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 9 /* add */, AArch64::ADDvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 13 /* addp */, AArch64::ADDP_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 13 /* addp */, AArch64::ADDP_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 13 /* addp */, AArch64::ADDP_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 13 /* addp */, AArch64::ADDP_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 13 /* addp */, AArch64::ADDP_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 13 /* addp */, AArch64::ADDP_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 13 /* addp */, AArch64::ADDP_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 18 /* adds */, AArch64::ADDSxxx_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__imm_0, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64 }, },
  { 18 /* adds */, AArch64::ADDSxxx_uxtx, Convert__Reg1_0__Reg1_1__Reg1_2__imm_0, 0, { MCK_GPR64, MCK_Rxsp, MCK_GPR64 }, },
  { 18 /* adds */, AArch64::ADDxxi_lsl0_S, Convert__Reg1_0__Reg1_1__AddSubImmLSL01_2, 0, { MCK_GPR64, MCK_GPR64xsp, MCK_AddSubImmLSL0 }, },
  { 18 /* adds */, AArch64::ADDxxi_lsl12_S, Convert__Reg1_0__Reg1_1__AddSubImmLSL121_2, 0, { MCK_GPR64, MCK_GPR64xsp, MCK_AddSubImmLSL12 }, },
  { 18 /* adds */, AArch64::ADDSwww_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__imm_0, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32 }, },
  { 18 /* adds */, AArch64::ADDSwww_uxtw, Convert__Reg1_0__Reg1_1__Reg1_2__imm_0, 0, { MCK_GPR32, MCK_Rwsp, MCK_GPR32 }, },
  { 18 /* adds */, AArch64::ADDwwi_lsl0_S, Convert__Reg1_0__Reg1_1__AddSubImmLSL01_2, 0, { MCK_GPR32, MCK_GPR32wsp, MCK_AddSubImmLSL0 }, },
  { 18 /* adds */, AArch64::ADDwwi_lsl12_S, Convert__Reg1_0__Reg1_1__AddSubImmLSL121_2, 0, { MCK_GPR32, MCK_GPR32wsp, MCK_AddSubImmLSL12 }, },
  { 18 /* adds */, AArch64::ADDSxxx_asr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftASRi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftASRi64 }, },
  { 18 /* adds */, AArch64::ADDSxxx_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSLi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftLSLi64 }, },
  { 18 /* adds */, AArch64::ADDSxxx_lsr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSRi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftLSRi64 }, },
  { 18 /* adds */, AArch64::ADDSxxx_uxtx, Convert__Reg1_0__Reg1_1__Reg1_2__RegExtendLSL1_3, 0, { MCK_GPR64, MCK_Rxsp, MCK_GPR64, MCK_RegExtendLSL }, },
  { 18 /* adds */, AArch64::ADDSxxx_sxtx, Convert__Reg1_0__Reg1_1__Reg1_2__SXTX1_3, 0, { MCK_GPR64, MCK_GPR64xsp, MCK_GPR64, MCK_SXTX }, },
  { 18 /* adds */, AArch64::ADDSxxx_uxtx, Convert__Reg1_0__Reg1_1__Reg1_2__UXTX1_3, 0, { MCK_GPR64, MCK_GPR64xsp, MCK_GPR64, MCK_UXTX }, },
  { 18 /* adds */, AArch64::ADDSxxw_sxtb, Convert__Reg1_0__Reg1_1__Reg1_2__SXTB1_3, 0, { MCK_GPR64, MCK_GPR64xsp, MCK_GPR32, MCK_SXTB }, },
  { 18 /* adds */, AArch64::ADDSxxw_sxth, Convert__Reg1_0__Reg1_1__Reg1_2__SXTH1_3, 0, { MCK_GPR64, MCK_GPR64xsp, MCK_GPR32, MCK_SXTH }, },
  { 18 /* adds */, AArch64::ADDSxxw_sxtw, Convert__Reg1_0__Reg1_1__Reg1_2__SXTW1_3, 0, { MCK_GPR64, MCK_GPR64xsp, MCK_GPR32, MCK_SXTW }, },
  { 18 /* adds */, AArch64::ADDSxxw_uxtb, Convert__Reg1_0__Reg1_1__Reg1_2__UXTB1_3, 0, { MCK_GPR64, MCK_GPR64xsp, MCK_GPR32, MCK_UXTB }, },
  { 18 /* adds */, AArch64::ADDSxxw_uxth, Convert__Reg1_0__Reg1_1__Reg1_2__UXTH1_3, 0, { MCK_GPR64, MCK_GPR64xsp, MCK_GPR32, MCK_UXTH }, },
  { 18 /* adds */, AArch64::ADDSxxw_uxtw, Convert__Reg1_0__Reg1_1__Reg1_2__UXTW1_3, 0, { MCK_GPR64, MCK_GPR64xsp, MCK_GPR32, MCK_UXTW }, },
  { 18 /* adds */, AArch64::ADDSwww_asr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftASRi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftASRi32 }, },
  { 18 /* adds */, AArch64::ADDSwww_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSLi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftLSLi32 }, },
  { 18 /* adds */, AArch64::ADDSwww_lsr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSRi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftLSRi32 }, },
  { 18 /* adds */, AArch64::ADDSwww_uxtw, Convert__Reg1_0__Reg1_1__Reg1_2__RegExtendLSL1_3, 0, { MCK_GPR32, MCK_Rwsp, MCK_GPR32, MCK_RegExtendLSL }, },
  { 18 /* adds */, AArch64::ADDSwww_sxtb, Convert__Reg1_0__Reg1_1__Reg1_2__SXTB1_3, 0, { MCK_GPR32, MCK_GPR32wsp, MCK_GPR32, MCK_SXTB }, },
  { 18 /* adds */, AArch64::ADDSwww_sxth, Convert__Reg1_0__Reg1_1__Reg1_2__SXTH1_3, 0, { MCK_GPR32, MCK_GPR32wsp, MCK_GPR32, MCK_SXTH }, },
  { 18 /* adds */, AArch64::ADDSwww_sxtw, Convert__Reg1_0__Reg1_1__Reg1_2__SXTW1_3, 0, { MCK_GPR32, MCK_GPR32wsp, MCK_GPR32, MCK_SXTW }, },
  { 18 /* adds */, AArch64::ADDSwww_sxtx, Convert__Reg1_0__Reg1_1__Reg1_2__SXTX1_3, 0, { MCK_GPR32, MCK_GPR32wsp, MCK_GPR32, MCK_SXTX }, },
  { 18 /* adds */, AArch64::ADDSwww_uxtb, Convert__Reg1_0__Reg1_1__Reg1_2__UXTB1_3, 0, { MCK_GPR32, MCK_GPR32wsp, MCK_GPR32, MCK_UXTB }, },
  { 18 /* adds */, AArch64::ADDSwww_uxth, Convert__Reg1_0__Reg1_1__Reg1_2__UXTH1_3, 0, { MCK_GPR32, MCK_GPR32wsp, MCK_GPR32, MCK_UXTH }, },
  { 18 /* adds */, AArch64::ADDSwww_uxtw, Convert__Reg1_0__Reg1_1__Reg1_2__UXTW1_3, 0, { MCK_GPR32, MCK_GPR32wsp, MCK_GPR32, MCK_UXTW }, },
  { 18 /* adds */, AArch64::ADDSwww_uxtx, Convert__Reg1_0__Reg1_1__Reg1_2__UXTX1_3, 0, { MCK_GPR32, MCK_GPR32wsp, MCK_GPR32, MCK_UXTX }, },
  { 23 /* adr */, AArch64::ADRxi, Convert__Reg1_0__Label21_11_1, 0, { MCK_GPR64, MCK_Label21_1 }, },
  { 27 /* adrp */, AArch64::ADRPxi, Convert__Reg1_0__AdrpLabel1_1, 0, { MCK_GPR64, MCK_AdrpLabel }, },
  { 32 /* and */, AArch64::ANDxxx_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__imm_0, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64 }, },
  { 32 /* and */, AArch64::ANDxxi, Convert__Reg1_0__Reg1_1__LogicalImm641_2, 0, { MCK_GPR64xsp, MCK_GPR64, MCK_LogicalImm64 }, },
  { 32 /* and */, AArch64::ANDwww_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__imm_0, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32 }, },
  { 32 /* and */, AArch64::ANDwwi, Convert__Reg1_0__Reg1_1__LogicalImm321_2, 0, { MCK_GPR32wsp, MCK_GPR32, MCK_LogicalImm32 }, },
  { 32 /* and */, AArch64::ANDxxx_asr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftASRi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftASRi64 }, },
  { 32 /* and */, AArch64::ANDxxx_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSLi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftLSLi64 }, },
  { 32 /* and */, AArch64::ANDxxx_lsr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSRi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftLSRi64 }, },
  { 32 /* and */, AArch64::ANDxxx_ror, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftRORi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftRORi64 }, },
  { 32 /* and */, AArch64::ANDwww_asr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftASRi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftASRi32 }, },
  { 32 /* and */, AArch64::ANDwww_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSLi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftLSLi32 }, },
  { 32 /* and */, AArch64::ANDwww_lsr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSRi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftLSRi32 }, },
  { 32 /* and */, AArch64::ANDwww_ror, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftRORi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftRORi32 }, },
  { 32 /* and */, AArch64::ANDvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 32 /* and */, AArch64::ANDvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 36 /* ands */, AArch64::ANDSxxx_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__imm_0, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64 }, },
  { 36 /* ands */, AArch64::ANDSxxi, Convert__Reg1_0__Reg1_1__LogicalImm641_2, 0, { MCK_GPR64, MCK_GPR64, MCK_LogicalImm64 }, },
  { 36 /* ands */, AArch64::ANDSwww_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__imm_0, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32 }, },
  { 36 /* ands */, AArch64::ANDSwwi, Convert__Reg1_0__Reg1_1__LogicalImm321_2, 0, { MCK_GPR32, MCK_GPR32, MCK_LogicalImm32 }, },
  { 36 /* ands */, AArch64::ANDSxxx_asr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftASRi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftASRi64 }, },
  { 36 /* ands */, AArch64::ANDSxxx_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSLi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftLSLi64 }, },
  { 36 /* ands */, AArch64::ANDSxxx_lsr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSRi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftLSRi64 }, },
  { 36 /* ands */, AArch64::ANDSxxx_ror, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftRORi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftRORi64 }, },
  { 36 /* ands */, AArch64::ANDSwww_asr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftASRi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftASRi32 }, },
  { 36 /* ands */, AArch64::ANDSwww_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSLi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftLSLi32 }, },
  { 36 /* ands */, AArch64::ANDSwww_lsr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSRi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftLSRi32 }, },
  { 36 /* ands */, AArch64::ANDSwww_ror, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftRORi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftRORi32 }, },
  { 41 /* asr */, AArch64::ASRVxxx, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64 }, },
  { 41 /* asr */, AArch64::ASRxxi, Convert__Reg1_0__Reg1_1__UImm61_2, 0, { MCK_GPR64, MCK_GPR64, MCK_UImm6 }, },
  { 41 /* asr */, AArch64::ASRVwww, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32 }, },
  { 41 /* asr */, AArch64::ASRwwi, Convert__Reg1_0__Reg1_1__UImm51_2, 0, { MCK_GPR32, MCK_GPR32, MCK_UImm5 }, },
  { 45 /* at */, AArch64::ATix, Convert__NamedImmat1_0__Reg1_1, 0, { MCK_NamedImmat, MCK_GPR64 }, },
  { 48 /* b */, AArch64::Bimm, Convert__Label26_41_0, 0, { MCK_Label26_4 }, },
  { 48 /* b */, AArch64::Bcc, Convert__CondCode1_1__Label19_41_2, 0, { MCK__DOT_, MCK_CondCode, MCK_Label19_4 }, },
  { 50 /* bfi */, AArch64::BFIxxii, Convert__Reg1_0__Tie0__Reg1_1__BFI64LSB1_2__BFI64Width1_3, 0, { MCK_GPR64, MCK_GPR64, MCK_BFI64LSB, MCK_BFI64Width }, },
  { 50 /* bfi */, AArch64::BFIwwii, Convert__Reg1_0__Tie0__Reg1_1__BFI32LSB1_2__BFI32Width1_3, 0, { MCK_GPR32, MCK_GPR32, MCK_BFI32LSB, MCK_BFI32Width }, },
  { 54 /* bfm */, AArch64::BFMxxii, Convert__Reg1_0__Tie0__Reg1_1__UImm61_2__UImm61_3, 0, { MCK_GPR64, MCK_GPR64, MCK_UImm6, MCK_UImm6 }, },
  { 54 /* bfm */, AArch64::BFMwwii, Convert__Reg1_0__Tie0__Reg1_1__UImm51_2__UImm51_3, 0, { MCK_GPR32, MCK_GPR32, MCK_UImm5, MCK_UImm5 }, },
  { 58 /* bfxil */, AArch64::BFXILxxii, Convert__Reg1_0__Tie0__Reg1_1__UImm61_2__BFX64Width1_3, 0, { MCK_GPR64, MCK_GPR64, MCK_UImm6, MCK_BFX64Width }, },
  { 58 /* bfxil */, AArch64::BFXILwwii, Convert__Reg1_0__Tie0__Reg1_1__UImm51_2__BFX32Width1_3, 0, { MCK_GPR32, MCK_GPR32, MCK_UImm5, MCK_BFX32Width }, },
  { 64 /* bic */, AArch64::BICxxx_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__imm_0, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64 }, },
  { 64 /* bic */, AArch64::BICwww_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__imm_0, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32 }, },
  { 64 /* bic */, AArch64::BICvi_lsl_2S, Convert__Reg1_0__Tie0__UImm81_2__imm_0, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_UImm8 }, },
  { 64 /* bic */, AArch64::BICvi_lsl_4H, Convert__Reg1_0__Tie0__UImm81_2__imm_0, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_UImm8 }, },
  { 64 /* bic */, AArch64::BICvi_lsl_4S, Convert__Reg1_0__Tie0__UImm81_2__imm_0, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_UImm8 }, },
  { 64 /* bic */, AArch64::BICvi_lsl_8H, Convert__Reg1_0__Tie0__UImm81_2__imm_0, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_UImm8 }, },
  { 64 /* bic */, AArch64::BICxxx_asr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftASRi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftASRi64 }, },
  { 64 /* bic */, AArch64::BICxxx_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSLi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftLSLi64 }, },
  { 64 /* bic */, AArch64::BICxxx_lsr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSRi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftLSRi64 }, },
  { 64 /* bic */, AArch64::BICxxx_ror, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftRORi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftRORi64 }, },
  { 64 /* bic */, AArch64::BICwww_asr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftASRi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftASRi32 }, },
  { 64 /* bic */, AArch64::BICwww_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSLi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftLSLi32 }, },
  { 64 /* bic */, AArch64::BICwww_lsr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSRi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftLSRi32 }, },
  { 64 /* bic */, AArch64::BICwww_ror, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftRORi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftRORi32 }, },
  { 64 /* bic */, AArch64::BICvi_lsl_2S, Convert__Reg1_0__Tie0__UImm81_2__NeonMovImmShiftLSL1_3, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_UImm8, MCK_NeonMovImmShiftLSL }, },
  { 64 /* bic */, AArch64::BICvi_lsl_4H, Convert__Reg1_0__Tie0__UImm81_2__NeonMovImmShiftLSLH1_3, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_UImm8, MCK_NeonMovImmShiftLSLH }, },
  { 64 /* bic */, AArch64::BICvi_lsl_4S, Convert__Reg1_0__Tie0__UImm81_2__NeonMovImmShiftLSL1_3, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_UImm8, MCK_NeonMovImmShiftLSL }, },
  { 64 /* bic */, AArch64::BICvi_lsl_8H, Convert__Reg1_0__Tie0__UImm81_2__NeonMovImmShiftLSLH1_3, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_UImm8, MCK_NeonMovImmShiftLSLH }, },
  { 64 /* bic */, AArch64::BICvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 64 /* bic */, AArch64::BICvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 68 /* bics */, AArch64::BICSxxx_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__imm_0, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64 }, },
  { 68 /* bics */, AArch64::BICSwww_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__imm_0, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32 }, },
  { 68 /* bics */, AArch64::BICSxxx_asr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftASRi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftASRi64 }, },
  { 68 /* bics */, AArch64::BICSxxx_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSLi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftLSLi64 }, },
  { 68 /* bics */, AArch64::BICSxxx_lsr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSRi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftLSRi64 }, },
  { 68 /* bics */, AArch64::BICSxxx_ror, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftRORi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftRORi64 }, },
  { 68 /* bics */, AArch64::BICSwww_asr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftASRi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftASRi32 }, },
  { 68 /* bics */, AArch64::BICSwww_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSLi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftLSLi32 }, },
  { 68 /* bics */, AArch64::BICSwww_lsr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSRi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftLSRi32 }, },
  { 68 /* bics */, AArch64::BICSwww_ror, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftRORi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftRORi32 }, },
  { 73 /* bif */, AArch64::BIFvvv_16B, Convert__Reg1_0__Tie0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 73 /* bif */, AArch64::BIFvvv_8B, Convert__Reg1_0__Tie0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 77 /* bit */, AArch64::BITvvv_16B, Convert__Reg1_0__Tie0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 77 /* bit */, AArch64::BITvvv_8B, Convert__Reg1_0__Tie0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 81 /* bl */, AArch64::BLimm, Convert__Label26_41_0, 0, { MCK_Label26_4 }, },
  { 84 /* blr */, AArch64::BLRx, Convert__Reg1_0, 0, { MCK_GPR64 }, },
  { 88 /* br */, AArch64::BRx, Convert__Reg1_0, 0, { MCK_GPR64 }, },
  { 91 /* brk */, AArch64::BRKi, Convert__UImm161_0, 0, { MCK_UImm16 }, },
  { 95 /* bsl */, AArch64::BSLvvv_16B, Convert__Reg1_0__Tie0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 95 /* bsl */, AArch64::BSLvvv_8B, Convert__Reg1_0__Tie0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 99 /* cbnz */, AArch64::CBNZx, Convert__Reg1_0__Label19_41_1, 0, { MCK_GPR64, MCK_Label19_4 }, },
  { 99 /* cbnz */, AArch64::CBNZw, Convert__Reg1_0__Label19_41_1, 0, { MCK_GPR32, MCK_Label19_4 }, },
  { 104 /* cbz */, AArch64::CBZx, Convert__Reg1_0__Label19_41_1, 0, { MCK_GPR64, MCK_Label19_4 }, },
  { 104 /* cbz */, AArch64::CBZw, Convert__Reg1_0__Label19_41_1, 0, { MCK_GPR32, MCK_Label19_4 }, },
  { 108 /* ccmn */, AArch64::CCMNxx, Convert__Reg1_0__Reg1_1__UImm41_2__CondCodeOp1_3, 0, { MCK_GPR64, MCK_GPR64, MCK_UImm4, MCK_CondCodeOp }, },
  { 108 /* ccmn */, AArch64::CCMNxi, Convert__Reg1_0__UImm51_1__UImm41_2__CondCodeOp1_3, 0, { MCK_GPR64, MCK_UImm5, MCK_UImm4, MCK_CondCodeOp }, },
  { 108 /* ccmn */, AArch64::CCMNww, Convert__Reg1_0__Reg1_1__UImm41_2__CondCodeOp1_3, 0, { MCK_GPR32, MCK_GPR32, MCK_UImm4, MCK_CondCodeOp }, },
  { 108 /* ccmn */, AArch64::CCMNwi, Convert__Reg1_0__UImm51_1__UImm41_2__CondCodeOp1_3, 0, { MCK_GPR32, MCK_UImm5, MCK_UImm4, MCK_CondCodeOp }, },
  { 113 /* ccmp */, AArch64::CCMPxx, Convert__Reg1_0__Reg1_1__UImm41_2__CondCodeOp1_3, 0, { MCK_GPR64, MCK_GPR64, MCK_UImm4, MCK_CondCodeOp }, },
  { 113 /* ccmp */, AArch64::CCMPxi, Convert__Reg1_0__UImm51_1__UImm41_2__CondCodeOp1_3, 0, { MCK_GPR64, MCK_UImm5, MCK_UImm4, MCK_CondCodeOp }, },
  { 113 /* ccmp */, AArch64::CCMPww, Convert__Reg1_0__Reg1_1__UImm41_2__CondCodeOp1_3, 0, { MCK_GPR32, MCK_GPR32, MCK_UImm4, MCK_CondCodeOp }, },
  { 113 /* ccmp */, AArch64::CCMPwi, Convert__Reg1_0__UImm51_1__UImm41_2__CondCodeOp1_3, 0, { MCK_GPR32, MCK_UImm5, MCK_UImm4, MCK_CondCodeOp }, },
  { 118 /* cinc */, AArch64::CSINCxxxc, Convert__Reg1_0__Reg1_1__Reg1_1__InvCondCodeOp1_2, 0, { MCK_GPR64, MCK_GPR64, MCK_InvCondCodeOp }, },
  { 118 /* cinc */, AArch64::CSINCwwwc, Convert__Reg1_0__Reg1_1__Reg1_1__InvCondCodeOp1_2, 0, { MCK_GPR32, MCK_GPR32, MCK_InvCondCodeOp }, },
  { 123 /* cinv */, AArch64::CSINVxxxc, Convert__Reg1_0__Reg1_1__Reg1_1__InvCondCodeOp1_2, 0, { MCK_GPR64, MCK_GPR64, MCK_InvCondCodeOp }, },
  { 123 /* cinv */, AArch64::CSINVwwwc, Convert__Reg1_0__Reg1_1__Reg1_1__InvCondCodeOp1_2, 0, { MCK_GPR32, MCK_GPR32, MCK_InvCondCodeOp }, },
  { 128 /* clrex */, AArch64::CLREXi, Convert__imm_15, 0, {  }, },
  { 128 /* clrex */, AArch64::CLREXi, Convert__UImm41_0, 0, { MCK_UImm4 }, },
  { 134 /* cls */, AArch64::CLSxx, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR64, MCK_GPR64 }, },
  { 134 /* cls */, AArch64::CLSww, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR32, MCK_GPR32 }, },
  { 138 /* clz */, AArch64::CLZxx, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR64, MCK_GPR64 }, },
  { 138 /* clz */, AArch64::CLZww, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR32, MCK_GPR32 }, },
  { 142 /* cmeq */, AArch64::CMEQvvi_16B, Convert__Reg1_0__Reg1_2__UImm01_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_UImm0 }, },
  { 142 /* cmeq */, AArch64::CMEQvvi_2D, Convert__Reg1_0__Reg1_2__UImm01_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_UImm0 }, },
  { 142 /* cmeq */, AArch64::CMEQvvi_2S, Convert__Reg1_0__Reg1_2__UImm01_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_UImm0 }, },
  { 142 /* cmeq */, AArch64::CMEQvvi_4H, Convert__Reg1_0__Reg1_2__UImm01_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_UImm0 }, },
  { 142 /* cmeq */, AArch64::CMEQvvi_4S, Convert__Reg1_0__Reg1_2__UImm01_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_UImm0 }, },
  { 142 /* cmeq */, AArch64::CMEQvvi_8B, Convert__Reg1_0__Reg1_2__UImm01_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_UImm0 }, },
  { 142 /* cmeq */, AArch64::CMEQvvi_8H, Convert__Reg1_0__Reg1_2__UImm01_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_UImm0 }, },
  { 142 /* cmeq */, AArch64::CMEQvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 142 /* cmeq */, AArch64::CMEQvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 142 /* cmeq */, AArch64::CMEQvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 142 /* cmeq */, AArch64::CMEQvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 142 /* cmeq */, AArch64::CMEQvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 142 /* cmeq */, AArch64::CMEQvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 142 /* cmeq */, AArch64::CMEQvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 147 /* cmge */, AArch64::CMGEvvi_16B, Convert__Reg1_0__Reg1_2__UImm01_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_UImm0 }, },
  { 147 /* cmge */, AArch64::CMGEvvi_2D, Convert__Reg1_0__Reg1_2__UImm01_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_UImm0 }, },
  { 147 /* cmge */, AArch64::CMGEvvi_2S, Convert__Reg1_0__Reg1_2__UImm01_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_UImm0 }, },
  { 147 /* cmge */, AArch64::CMGEvvi_4H, Convert__Reg1_0__Reg1_2__UImm01_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_UImm0 }, },
  { 147 /* cmge */, AArch64::CMGEvvi_4S, Convert__Reg1_0__Reg1_2__UImm01_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_UImm0 }, },
  { 147 /* cmge */, AArch64::CMGEvvi_8B, Convert__Reg1_0__Reg1_2__UImm01_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_UImm0 }, },
  { 147 /* cmge */, AArch64::CMGEvvi_8H, Convert__Reg1_0__Reg1_2__UImm01_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_UImm0 }, },
  { 147 /* cmge */, AArch64::CMGEvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 147 /* cmge */, AArch64::CMGEvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 147 /* cmge */, AArch64::CMGEvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 147 /* cmge */, AArch64::CMGEvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 147 /* cmge */, AArch64::CMGEvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 147 /* cmge */, AArch64::CMGEvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 147 /* cmge */, AArch64::CMGEvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 152 /* cmgt */, AArch64::CMGTvvi_16B, Convert__Reg1_0__Reg1_2__UImm01_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_UImm0 }, },
  { 152 /* cmgt */, AArch64::CMGTvvi_2D, Convert__Reg1_0__Reg1_2__UImm01_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_UImm0 }, },
  { 152 /* cmgt */, AArch64::CMGTvvi_2S, Convert__Reg1_0__Reg1_2__UImm01_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_UImm0 }, },
  { 152 /* cmgt */, AArch64::CMGTvvi_4H, Convert__Reg1_0__Reg1_2__UImm01_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_UImm0 }, },
  { 152 /* cmgt */, AArch64::CMGTvvi_4S, Convert__Reg1_0__Reg1_2__UImm01_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_UImm0 }, },
  { 152 /* cmgt */, AArch64::CMGTvvi_8B, Convert__Reg1_0__Reg1_2__UImm01_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_UImm0 }, },
  { 152 /* cmgt */, AArch64::CMGTvvi_8H, Convert__Reg1_0__Reg1_2__UImm01_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_UImm0 }, },
  { 152 /* cmgt */, AArch64::CMGTvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 152 /* cmgt */, AArch64::CMGTvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 152 /* cmgt */, AArch64::CMGTvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 152 /* cmgt */, AArch64::CMGTvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 152 /* cmgt */, AArch64::CMGTvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 152 /* cmgt */, AArch64::CMGTvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 152 /* cmgt */, AArch64::CMGTvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 157 /* cmhi */, AArch64::CMHIvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 157 /* cmhi */, AArch64::CMHIvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 157 /* cmhi */, AArch64::CMHIvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 157 /* cmhi */, AArch64::CMHIvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 157 /* cmhi */, AArch64::CMHIvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 157 /* cmhi */, AArch64::CMHIvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 157 /* cmhi */, AArch64::CMHIvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 162 /* cmhs */, AArch64::CMHSvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 162 /* cmhs */, AArch64::CMHSvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 162 /* cmhs */, AArch64::CMHSvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 162 /* cmhs */, AArch64::CMHSvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 162 /* cmhs */, AArch64::CMHSvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 162 /* cmhs */, AArch64::CMHSvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 162 /* cmhs */, AArch64::CMHSvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 167 /* cmle */, AArch64::CMLEvvi_16B, Convert__Reg1_0__Reg1_2__UImm01_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_UImm0 }, },
  { 167 /* cmle */, AArch64::CMLEvvi_2D, Convert__Reg1_0__Reg1_2__UImm01_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_UImm0 }, },
  { 167 /* cmle */, AArch64::CMLEvvi_2S, Convert__Reg1_0__Reg1_2__UImm01_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_UImm0 }, },
  { 167 /* cmle */, AArch64::CMLEvvi_4H, Convert__Reg1_0__Reg1_2__UImm01_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_UImm0 }, },
  { 167 /* cmle */, AArch64::CMLEvvi_4S, Convert__Reg1_0__Reg1_2__UImm01_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_UImm0 }, },
  { 167 /* cmle */, AArch64::CMLEvvi_8B, Convert__Reg1_0__Reg1_2__UImm01_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_UImm0 }, },
  { 167 /* cmle */, AArch64::CMLEvvi_8H, Convert__Reg1_0__Reg1_2__UImm01_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_UImm0 }, },
  { 167 /* cmle */, AArch64::CMGEvvv_16B, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 167 /* cmle */, AArch64::CMGEvvv_2D, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 167 /* cmle */, AArch64::CMGEvvv_2S, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 167 /* cmle */, AArch64::CMGEvvv_4H, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 167 /* cmle */, AArch64::CMGEvvv_4S, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 167 /* cmle */, AArch64::CMGEvvv_8B, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 167 /* cmle */, AArch64::CMGEvvv_8H, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 172 /* cmlo */, AArch64::CMHIvvv_16B, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 172 /* cmlo */, AArch64::CMHIvvv_2D, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 172 /* cmlo */, AArch64::CMHIvvv_2S, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 172 /* cmlo */, AArch64::CMHIvvv_4H, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 172 /* cmlo */, AArch64::CMHIvvv_4S, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 172 /* cmlo */, AArch64::CMHIvvv_8B, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 172 /* cmlo */, AArch64::CMHIvvv_8H, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 177 /* cmls */, AArch64::CMHSvvv_16B, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 177 /* cmls */, AArch64::CMHSvvv_2D, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 177 /* cmls */, AArch64::CMHSvvv_2S, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 177 /* cmls */, AArch64::CMHSvvv_4H, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 177 /* cmls */, AArch64::CMHSvvv_4S, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 177 /* cmls */, AArch64::CMHSvvv_8B, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 177 /* cmls */, AArch64::CMHSvvv_8H, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 182 /* cmlt */, AArch64::CMLTvvi_16B, Convert__Reg1_0__Reg1_2__UImm01_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_UImm0 }, },
  { 182 /* cmlt */, AArch64::CMLTvvi_2D, Convert__Reg1_0__Reg1_2__UImm01_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_UImm0 }, },
  { 182 /* cmlt */, AArch64::CMLTvvi_2S, Convert__Reg1_0__Reg1_2__UImm01_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_UImm0 }, },
  { 182 /* cmlt */, AArch64::CMLTvvi_4H, Convert__Reg1_0__Reg1_2__UImm01_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_UImm0 }, },
  { 182 /* cmlt */, AArch64::CMLTvvi_4S, Convert__Reg1_0__Reg1_2__UImm01_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_UImm0 }, },
  { 182 /* cmlt */, AArch64::CMLTvvi_8B, Convert__Reg1_0__Reg1_2__UImm01_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_UImm0 }, },
  { 182 /* cmlt */, AArch64::CMLTvvi_8H, Convert__Reg1_0__Reg1_2__UImm01_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_UImm0 }, },
  { 182 /* cmlt */, AArch64::CMGTvvv_16B, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 182 /* cmlt */, AArch64::CMGTvvv_2D, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 182 /* cmlt */, AArch64::CMGTvvv_2S, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 182 /* cmlt */, AArch64::CMGTvvv_4H, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 182 /* cmlt */, AArch64::CMGTvvv_4S, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 182 /* cmlt */, AArch64::CMGTvvv_8B, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 182 /* cmlt */, AArch64::CMGTvvv_8H, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 187 /* cmn */, AArch64::CMNxx_lsl, Convert__Reg1_0__Reg1_1__imm_0, 0, { MCK_GPR64, MCK_GPR64 }, },
  { 187 /* cmn */, AArch64::ADDxxi_lsl0_cmp, Convert__Reg1_0__AddSubImmLSL01_1, 0, { MCK_GPR64xsp, MCK_AddSubImmLSL0 }, },
  { 187 /* cmn */, AArch64::ADDxxi_lsl12_cmp, Convert__Reg1_0__AddSubImmLSL121_1, 0, { MCK_GPR64xsp, MCK_AddSubImmLSL12 }, },
  { 187 /* cmn */, AArch64::CMNww_lsl, Convert__Reg1_0__Reg1_1__imm_0, 0, { MCK_GPR32, MCK_GPR32 }, },
  { 187 /* cmn */, AArch64::CMNww_uxtw, Convert__Reg1_0__Reg1_1__imm_0, 0, { MCK_Rwsp, MCK_GPR32 }, },
  { 187 /* cmn */, AArch64::ADDwwi_lsl0_cmp, Convert__Reg1_0__AddSubImmLSL01_1, 0, { MCK_GPR32wsp, MCK_AddSubImmLSL0 }, },
  { 187 /* cmn */, AArch64::ADDwwi_lsl12_cmp, Convert__Reg1_0__AddSubImmLSL121_1, 0, { MCK_GPR32wsp, MCK_AddSubImmLSL12 }, },
  { 187 /* cmn */, AArch64::CMNxx_uxtx, Convert__Reg1_0__Reg1_1__imm_0, 0, { MCK_Rxsp, MCK_GPR64 }, },
  { 187 /* cmn */, AArch64::CMNxx_asr, Convert__Reg1_0__Reg1_1__ShiftASRi641_2, 0, { MCK_GPR64, MCK_GPR64, MCK_ShiftASRi64 }, },
  { 187 /* cmn */, AArch64::CMNxx_lsl, Convert__Reg1_0__Reg1_1__ShiftLSLi641_2, 0, { MCK_GPR64, MCK_GPR64, MCK_ShiftLSLi64 }, },
  { 187 /* cmn */, AArch64::CMNxx_lsr, Convert__Reg1_0__Reg1_1__ShiftLSRi641_2, 0, { MCK_GPR64, MCK_GPR64, MCK_ShiftLSRi64 }, },
  { 187 /* cmn */, AArch64::CMNxx_sxtx, Convert__Reg1_0__Reg1_1__SXTX1_2, 0, { MCK_GPR64xsp, MCK_GPR64, MCK_SXTX }, },
  { 187 /* cmn */, AArch64::CMNxx_uxtx, Convert__Reg1_0__Reg1_1__UXTX1_2, 0, { MCK_GPR64xsp, MCK_GPR64, MCK_UXTX }, },
  { 187 /* cmn */, AArch64::CMNxw_sxtb, Convert__Reg1_0__Reg1_1__SXTB1_2, 0, { MCK_GPR64xsp, MCK_GPR32, MCK_SXTB }, },
  { 187 /* cmn */, AArch64::CMNxw_sxth, Convert__Reg1_0__Reg1_1__SXTH1_2, 0, { MCK_GPR64xsp, MCK_GPR32, MCK_SXTH }, },
  { 187 /* cmn */, AArch64::CMNxw_sxtw, Convert__Reg1_0__Reg1_1__SXTW1_2, 0, { MCK_GPR64xsp, MCK_GPR32, MCK_SXTW }, },
  { 187 /* cmn */, AArch64::CMNxw_uxtb, Convert__Reg1_0__Reg1_1__UXTB1_2, 0, { MCK_GPR64xsp, MCK_GPR32, MCK_UXTB }, },
  { 187 /* cmn */, AArch64::CMNxw_uxth, Convert__Reg1_0__Reg1_1__UXTH1_2, 0, { MCK_GPR64xsp, MCK_GPR32, MCK_UXTH }, },
  { 187 /* cmn */, AArch64::CMNxw_uxtw, Convert__Reg1_0__Reg1_1__UXTW1_2, 0, { MCK_GPR64xsp, MCK_GPR32, MCK_UXTW }, },
  { 187 /* cmn */, AArch64::CMNww_asr, Convert__Reg1_0__Reg1_1__ShiftASRi321_2, 0, { MCK_GPR32, MCK_GPR32, MCK_ShiftASRi32 }, },
  { 187 /* cmn */, AArch64::CMNww_lsl, Convert__Reg1_0__Reg1_1__ShiftLSLi321_2, 0, { MCK_GPR32, MCK_GPR32, MCK_ShiftLSLi32 }, },
  { 187 /* cmn */, AArch64::CMNww_lsr, Convert__Reg1_0__Reg1_1__ShiftLSRi321_2, 0, { MCK_GPR32, MCK_GPR32, MCK_ShiftLSRi32 }, },
  { 187 /* cmn */, AArch64::CMNww_uxtw, Convert__Reg1_0__Reg1_1__RegExtendLSL1_2, 0, { MCK_Rwsp, MCK_GPR32, MCK_RegExtendLSL }, },
  { 187 /* cmn */, AArch64::CMNww_sxtb, Convert__Reg1_0__Reg1_1__SXTB1_2, 0, { MCK_GPR32wsp, MCK_GPR32, MCK_SXTB }, },
  { 187 /* cmn */, AArch64::CMNww_sxth, Convert__Reg1_0__Reg1_1__SXTH1_2, 0, { MCK_GPR32wsp, MCK_GPR32, MCK_SXTH }, },
  { 187 /* cmn */, AArch64::CMNww_sxtw, Convert__Reg1_0__Reg1_1__SXTW1_2, 0, { MCK_GPR32wsp, MCK_GPR32, MCK_SXTW }, },
  { 187 /* cmn */, AArch64::CMNww_sxtx, Convert__Reg1_0__Reg1_1__SXTX1_2, 0, { MCK_GPR32wsp, MCK_GPR32, MCK_SXTX }, },
  { 187 /* cmn */, AArch64::CMNww_uxtb, Convert__Reg1_0__Reg1_1__UXTB1_2, 0, { MCK_GPR32wsp, MCK_GPR32, MCK_UXTB }, },
  { 187 /* cmn */, AArch64::CMNww_uxth, Convert__Reg1_0__Reg1_1__UXTH1_2, 0, { MCK_GPR32wsp, MCK_GPR32, MCK_UXTH }, },
  { 187 /* cmn */, AArch64::CMNww_uxtw, Convert__Reg1_0__Reg1_1__UXTW1_2, 0, { MCK_GPR32wsp, MCK_GPR32, MCK_UXTW }, },
  { 187 /* cmn */, AArch64::CMNww_uxtx, Convert__Reg1_0__Reg1_1__UXTX1_2, 0, { MCK_GPR32wsp, MCK_GPR32, MCK_UXTX }, },
  { 187 /* cmn */, AArch64::CMNxx_uxtx, Convert__Reg1_0__Reg1_1__RegExtendLSL1_2, 0, { MCK_Rxsp, MCK_GPR64, MCK_RegExtendLSL }, },
  { 191 /* cmp */, AArch64::CMPxx_lsl, Convert__Reg1_0__Reg1_1__imm_0, 0, { MCK_GPR64, MCK_GPR64 }, },
  { 191 /* cmp */, AArch64::SUBxxi_lsl0_cmp, Convert__Reg1_0__AddSubImmLSL01_1, 0, { MCK_GPR64xsp, MCK_AddSubImmLSL0 }, },
  { 191 /* cmp */, AArch64::SUBxxi_lsl12_cmp, Convert__Reg1_0__AddSubImmLSL121_1, 0, { MCK_GPR64xsp, MCK_AddSubImmLSL12 }, },
  { 191 /* cmp */, AArch64::CMPww_lsl, Convert__Reg1_0__Reg1_1__imm_0, 0, { MCK_GPR32, MCK_GPR32 }, },
  { 191 /* cmp */, AArch64::CMPww_uxtw, Convert__Reg1_0__Reg1_1__imm_0, 0, { MCK_Rwsp, MCK_GPR32 }, },
  { 191 /* cmp */, AArch64::SUBwwi_lsl0_cmp, Convert__Reg1_0__AddSubImmLSL01_1, 0, { MCK_GPR32wsp, MCK_AddSubImmLSL0 }, },
  { 191 /* cmp */, AArch64::SUBwwi_lsl12_cmp, Convert__Reg1_0__AddSubImmLSL121_1, 0, { MCK_GPR32wsp, MCK_AddSubImmLSL12 }, },
  { 191 /* cmp */, AArch64::CMPxx_uxtx, Convert__Reg1_0__Reg1_1__imm_0, 0, { MCK_Rxsp, MCK_GPR64 }, },
  { 191 /* cmp */, AArch64::CMPxx_asr, Convert__Reg1_0__Reg1_1__ShiftASRi641_2, 0, { MCK_GPR64, MCK_GPR64, MCK_ShiftASRi64 }, },
  { 191 /* cmp */, AArch64::CMPxx_lsl, Convert__Reg1_0__Reg1_1__ShiftLSLi641_2, 0, { MCK_GPR64, MCK_GPR64, MCK_ShiftLSLi64 }, },
  { 191 /* cmp */, AArch64::CMPxx_lsr, Convert__Reg1_0__Reg1_1__ShiftLSRi641_2, 0, { MCK_GPR64, MCK_GPR64, MCK_ShiftLSRi64 }, },
  { 191 /* cmp */, AArch64::CMPxx_sxtx, Convert__Reg1_0__Reg1_1__SXTX1_2, 0, { MCK_GPR64xsp, MCK_GPR64, MCK_SXTX }, },
  { 191 /* cmp */, AArch64::CMPxx_uxtx, Convert__Reg1_0__Reg1_1__UXTX1_2, 0, { MCK_GPR64xsp, MCK_GPR64, MCK_UXTX }, },
  { 191 /* cmp */, AArch64::CMPxw_sxtb, Convert__Reg1_0__Reg1_1__SXTB1_2, 0, { MCK_GPR64xsp, MCK_GPR32, MCK_SXTB }, },
  { 191 /* cmp */, AArch64::CMPxw_sxth, Convert__Reg1_0__Reg1_1__SXTH1_2, 0, { MCK_GPR64xsp, MCK_GPR32, MCK_SXTH }, },
  { 191 /* cmp */, AArch64::CMPxw_sxtw, Convert__Reg1_0__Reg1_1__SXTW1_2, 0, { MCK_GPR64xsp, MCK_GPR32, MCK_SXTW }, },
  { 191 /* cmp */, AArch64::CMPxw_uxtb, Convert__Reg1_0__Reg1_1__UXTB1_2, 0, { MCK_GPR64xsp, MCK_GPR32, MCK_UXTB }, },
  { 191 /* cmp */, AArch64::CMPxw_uxth, Convert__Reg1_0__Reg1_1__UXTH1_2, 0, { MCK_GPR64xsp, MCK_GPR32, MCK_UXTH }, },
  { 191 /* cmp */, AArch64::CMPxw_uxtw, Convert__Reg1_0__Reg1_1__UXTW1_2, 0, { MCK_GPR64xsp, MCK_GPR32, MCK_UXTW }, },
  { 191 /* cmp */, AArch64::CMPww_asr, Convert__Reg1_0__Reg1_1__ShiftASRi321_2, 0, { MCK_GPR32, MCK_GPR32, MCK_ShiftASRi32 }, },
  { 191 /* cmp */, AArch64::CMPww_lsl, Convert__Reg1_0__Reg1_1__ShiftLSLi321_2, 0, { MCK_GPR32, MCK_GPR32, MCK_ShiftLSLi32 }, },
  { 191 /* cmp */, AArch64::CMPww_lsr, Convert__Reg1_0__Reg1_1__ShiftLSRi321_2, 0, { MCK_GPR32, MCK_GPR32, MCK_ShiftLSRi32 }, },
  { 191 /* cmp */, AArch64::CMPww_uxtw, Convert__Reg1_0__Reg1_1__RegExtendLSL1_2, 0, { MCK_Rwsp, MCK_GPR32, MCK_RegExtendLSL }, },
  { 191 /* cmp */, AArch64::CMPww_sxtb, Convert__Reg1_0__Reg1_1__SXTB1_2, 0, { MCK_GPR32wsp, MCK_GPR32, MCK_SXTB }, },
  { 191 /* cmp */, AArch64::CMPww_sxth, Convert__Reg1_0__Reg1_1__SXTH1_2, 0, { MCK_GPR32wsp, MCK_GPR32, MCK_SXTH }, },
  { 191 /* cmp */, AArch64::CMPww_sxtw, Convert__Reg1_0__Reg1_1__SXTW1_2, 0, { MCK_GPR32wsp, MCK_GPR32, MCK_SXTW }, },
  { 191 /* cmp */, AArch64::CMPww_sxtx, Convert__Reg1_0__Reg1_1__SXTX1_2, 0, { MCK_GPR32wsp, MCK_GPR32, MCK_SXTX }, },
  { 191 /* cmp */, AArch64::CMPww_uxtb, Convert__Reg1_0__Reg1_1__UXTB1_2, 0, { MCK_GPR32wsp, MCK_GPR32, MCK_UXTB }, },
  { 191 /* cmp */, AArch64::CMPww_uxth, Convert__Reg1_0__Reg1_1__UXTH1_2, 0, { MCK_GPR32wsp, MCK_GPR32, MCK_UXTH }, },
  { 191 /* cmp */, AArch64::CMPww_uxtw, Convert__Reg1_0__Reg1_1__UXTW1_2, 0, { MCK_GPR32wsp, MCK_GPR32, MCK_UXTW }, },
  { 191 /* cmp */, AArch64::CMPww_uxtx, Convert__Reg1_0__Reg1_1__UXTX1_2, 0, { MCK_GPR32wsp, MCK_GPR32, MCK_UXTX }, },
  { 191 /* cmp */, AArch64::CMPxx_uxtx, Convert__Reg1_0__Reg1_1__RegExtendLSL1_2, 0, { MCK_Rxsp, MCK_GPR64, MCK_RegExtendLSL }, },
  { 195 /* cmtst */, AArch64::CMTSTvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 195 /* cmtst */, AArch64::CMTSTvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 195 /* cmtst */, AArch64::CMTSTvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 195 /* cmtst */, AArch64::CMTSTvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 195 /* cmtst */, AArch64::CMTSTvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 195 /* cmtst */, AArch64::CMTSTvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 195 /* cmtst */, AArch64::CMTSTvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 201 /* cneg */, AArch64::CSNEGxxxc, Convert__Reg1_0__Reg1_1__Reg1_1__InvCondCodeOp1_2, 0, { MCK_GPR64, MCK_GPR64, MCK_InvCondCodeOp }, },
  { 201 /* cneg */, AArch64::CSNEGwwwc, Convert__Reg1_0__Reg1_1__Reg1_1__InvCondCodeOp1_2, 0, { MCK_GPR32, MCK_GPR32, MCK_InvCondCodeOp }, },
  { 206 /* crc32b */, AArch64::CRC32B_www, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32 }, },
  { 213 /* crc32cb */, AArch64::CRC32CB_www, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32 }, },
  { 221 /* crc32ch */, AArch64::CRC32CH_www, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32 }, },
  { 229 /* crc32cw */, AArch64::CRC32CW_www, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32 }, },
  { 237 /* crc32cx */, AArch64::CRC32CX_wwx, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR64 }, },
  { 245 /* crc32h */, AArch64::CRC32H_www, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32 }, },
  { 252 /* crc32w */, AArch64::CRC32W_www, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32 }, },
  { 259 /* crc32x */, AArch64::CRC32X_wwx, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR64 }, },
  { 266 /* csel */, AArch64::CSELxxxc, Convert__Reg1_0__Reg1_1__Reg1_2__CondCodeOp1_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_CondCodeOp }, },
  { 266 /* csel */, AArch64::CSELwwwc, Convert__Reg1_0__Reg1_1__Reg1_2__CondCodeOp1_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_CondCodeOp }, },
  { 271 /* cset */, AArch64::CSINCxxxc, Convert__Reg1_0__regXZR__regXZR__InvCondCodeOp1_1, 0, { MCK_GPR64, MCK_InvCondCodeOp }, },
  { 271 /* cset */, AArch64::CSINCwwwc, Convert__Reg1_0__regWZR__regWZR__InvCondCodeOp1_1, 0, { MCK_GPR32, MCK_InvCondCodeOp }, },
  { 276 /* csetm */, AArch64::CSINVxxxc, Convert__Reg1_0__regXZR__regXZR__InvCondCodeOp1_1, 0, { MCK_GPR64, MCK_InvCondCodeOp }, },
  { 276 /* csetm */, AArch64::CSINVwwwc, Convert__Reg1_0__regWZR__regWZR__InvCondCodeOp1_1, 0, { MCK_GPR32, MCK_InvCondCodeOp }, },
  { 282 /* csinc */, AArch64::CSINCxxxc, Convert__Reg1_0__Reg1_1__Reg1_2__CondCodeOp1_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_CondCodeOp }, },
  { 282 /* csinc */, AArch64::CSINCwwwc, Convert__Reg1_0__Reg1_1__Reg1_2__CondCodeOp1_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_CondCodeOp }, },
  { 288 /* csinv */, AArch64::CSINVxxxc, Convert__Reg1_0__Reg1_1__Reg1_2__CondCodeOp1_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_CondCodeOp }, },
  { 288 /* csinv */, AArch64::CSINVwwwc, Convert__Reg1_0__Reg1_1__Reg1_2__CondCodeOp1_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_CondCodeOp }, },
  { 294 /* csneg */, AArch64::CSNEGxxxc, Convert__Reg1_0__Reg1_1__Reg1_2__CondCodeOp1_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_CondCodeOp }, },
  { 294 /* csneg */, AArch64::CSNEGwwwc, Convert__Reg1_0__Reg1_1__Reg1_2__CondCodeOp1_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_CondCodeOp }, },
  { 300 /* dc */, AArch64::DCix, Convert__NamedImmdc1_0__Reg1_1, 0, { MCK_NamedImmdc, MCK_GPR64 }, },
  { 303 /* dcps1 */, AArch64::DCPS1i, Convert__imm_0, 0, {  }, },
  { 303 /* dcps1 */, AArch64::DCPS1i, Convert__UImm161_0, 0, { MCK_UImm16 }, },
  { 309 /* dcps2 */, AArch64::DCPS2i, Convert__imm_0, 0, {  }, },
  { 309 /* dcps2 */, AArch64::DCPS2i, Convert__UImm161_0, 0, { MCK_UImm16 }, },
  { 315 /* dcps3 */, AArch64::DCPS3i, Convert__imm_0, 0, {  }, },
  { 315 /* dcps3 */, AArch64::DCPS3i, Convert__UImm161_0, 0, { MCK_UImm16 }, },
  { 321 /* dmb */, AArch64::DMBi, Convert__NamedImmdbarrier1_0, 0, { MCK_NamedImmdbarrier }, },
  { 325 /* drps */, AArch64::DRPS, Convert_NoOperands, 0, {  }, },
  { 330 /* dsb */, AArch64::DSBi, Convert__NamedImmdbarrier1_0, 0, { MCK_NamedImmdbarrier }, },
  { 334 /* eon */, AArch64::EONxxx_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__imm_0, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64 }, },
  { 334 /* eon */, AArch64::EONwww_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__imm_0, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32 }, },
  { 334 /* eon */, AArch64::EONxxx_asr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftASRi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftASRi64 }, },
  { 334 /* eon */, AArch64::EONxxx_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSLi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftLSLi64 }, },
  { 334 /* eon */, AArch64::EONxxx_lsr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSRi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftLSRi64 }, },
  { 334 /* eon */, AArch64::EONxxx_ror, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftRORi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftRORi64 }, },
  { 334 /* eon */, AArch64::EONwww_asr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftASRi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftASRi32 }, },
  { 334 /* eon */, AArch64::EONwww_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSLi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftLSLi32 }, },
  { 334 /* eon */, AArch64::EONwww_lsr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSRi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftLSRi32 }, },
  { 334 /* eon */, AArch64::EONwww_ror, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftRORi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftRORi32 }, },
  { 338 /* eor */, AArch64::EORxxx_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__imm_0, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64 }, },
  { 338 /* eor */, AArch64::EORxxi, Convert__Reg1_0__Reg1_1__LogicalImm641_2, 0, { MCK_GPR64xsp, MCK_GPR64, MCK_LogicalImm64 }, },
  { 338 /* eor */, AArch64::EORwww_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__imm_0, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32 }, },
  { 338 /* eor */, AArch64::EORwwi, Convert__Reg1_0__Reg1_1__LogicalImm321_2, 0, { MCK_GPR32wsp, MCK_GPR32, MCK_LogicalImm32 }, },
  { 338 /* eor */, AArch64::EORxxx_asr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftASRi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftASRi64 }, },
  { 338 /* eor */, AArch64::EORxxx_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSLi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftLSLi64 }, },
  { 338 /* eor */, AArch64::EORxxx_lsr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSRi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftLSRi64 }, },
  { 338 /* eor */, AArch64::EORxxx_ror, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftRORi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftRORi64 }, },
  { 338 /* eor */, AArch64::EORwww_asr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftASRi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftASRi32 }, },
  { 338 /* eor */, AArch64::EORwww_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSLi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftLSLi32 }, },
  { 338 /* eor */, AArch64::EORwww_lsr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSRi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftLSRi32 }, },
  { 338 /* eor */, AArch64::EORwww_ror, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftRORi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftRORi32 }, },
  { 338 /* eor */, AArch64::EORvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 338 /* eor */, AArch64::EORvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 342 /* eret */, AArch64::ERET, Convert_NoOperands, 0, {  }, },
  { 347 /* extr */, AArch64::EXTRxxxi, Convert__Reg1_0__Reg1_1__Reg1_2__UImm61_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_UImm6 }, },
  { 347 /* extr */, AArch64::EXTRwwwi, Convert__Reg1_0__Reg1_1__Reg1_2__UImm51_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_UImm5 }, },
  { 352 /* fabd */, AArch64::FABDvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 352 /* fabd */, AArch64::FABDvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 352 /* fabd */, AArch64::FABDvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 357 /* fabs */, AArch64::FABSss, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR32, MCK_FPR32 }, },
  { 357 /* fabs */, AArch64::FABSdd, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR64, MCK_FPR64 }, },
  { 362 /* facge */, AArch64::FACGEvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 362 /* facge */, AArch64::FACGEvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 362 /* facge */, AArch64::FACGEvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 368 /* facgt */, AArch64::FACGTvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 368 /* facgt */, AArch64::FACGTvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 368 /* facgt */, AArch64::FACGTvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 374 /* facle */, AArch64::FACGEvvv_2D, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 374 /* facle */, AArch64::FACGEvvv_2S, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 374 /* facle */, AArch64::FACGEvvv_4S, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 380 /* faclt */, AArch64::FACGTvvv_2D, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 380 /* faclt */, AArch64::FACGTvvv_2S, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 380 /* faclt */, AArch64::FACGTvvv_4S, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 386 /* fadd */, AArch64::FADDsss, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 386 /* fadd */, AArch64::FADDddd, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 386 /* fadd */, AArch64::FADDvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 386 /* fadd */, AArch64::FADDvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 386 /* fadd */, AArch64::FADDvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 391 /* faddp */, AArch64::FADDP_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 391 /* faddp */, AArch64::FADDP_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 391 /* faddp */, AArch64::FADDP_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 397 /* fccmp */, AArch64::FCCMPss, Convert__Reg1_0__Reg1_1__UImm41_2__CondCodeOp1_3, 0, { MCK_FPR32, MCK_FPR32, MCK_UImm4, MCK_CondCodeOp }, },
  { 397 /* fccmp */, AArch64::FCCMPdd, Convert__Reg1_0__Reg1_1__UImm41_2__CondCodeOp1_3, 0, { MCK_FPR64, MCK_FPR64, MCK_UImm4, MCK_CondCodeOp }, },
  { 403 /* fccmpe */, AArch64::FCCMPEss, Convert__Reg1_0__Reg1_1__UImm41_2__CondCodeOp1_3, 0, { MCK_FPR32, MCK_FPR32, MCK_UImm4, MCK_CondCodeOp }, },
  { 403 /* fccmpe */, AArch64::FCCMPEdd, Convert__Reg1_0__Reg1_1__UImm41_2__CondCodeOp1_3, 0, { MCK_FPR64, MCK_FPR64, MCK_UImm4, MCK_CondCodeOp }, },
  { 410 /* fcmeq */, AArch64::FCMEQvvi_2D, Convert__Reg1_0__Reg1_2__FPZero1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_FPZero }, },
  { 410 /* fcmeq */, AArch64::FCMEQvvi_2S, Convert__Reg1_0__Reg1_2__FPZero1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_FPZero }, },
  { 410 /* fcmeq */, AArch64::FCMEQvvi_4S, Convert__Reg1_0__Reg1_2__FPZero1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_FPZero }, },
  { 410 /* fcmeq */, AArch64::FCMEQvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 410 /* fcmeq */, AArch64::FCMEQvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 410 /* fcmeq */, AArch64::FCMEQvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 416 /* fcmge */, AArch64::FCMGEvvi_2D, Convert__Reg1_0__Reg1_2__FPZero1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_FPZero }, },
  { 416 /* fcmge */, AArch64::FCMGEvvi_2S, Convert__Reg1_0__Reg1_2__FPZero1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_FPZero }, },
  { 416 /* fcmge */, AArch64::FCMGEvvi_4S, Convert__Reg1_0__Reg1_2__FPZero1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_FPZero }, },
  { 416 /* fcmge */, AArch64::FCMGEvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 416 /* fcmge */, AArch64::FCMGEvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 416 /* fcmge */, AArch64::FCMGEvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 422 /* fcmgt */, AArch64::FCMGTvvi_2D, Convert__Reg1_0__Reg1_2__FPZero1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_FPZero }, },
  { 422 /* fcmgt */, AArch64::FCMGTvvi_2S, Convert__Reg1_0__Reg1_2__FPZero1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_FPZero }, },
  { 422 /* fcmgt */, AArch64::FCMGTvvi_4S, Convert__Reg1_0__Reg1_2__FPZero1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_FPZero }, },
  { 422 /* fcmgt */, AArch64::FCMGTvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 422 /* fcmgt */, AArch64::FCMGTvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 422 /* fcmgt */, AArch64::FCMGTvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 428 /* fcmle */, AArch64::FCMLEvvi_2D, Convert__Reg1_0__Reg1_2__FPZero1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_FPZero }, },
  { 428 /* fcmle */, AArch64::FCMLEvvi_2S, Convert__Reg1_0__Reg1_2__FPZero1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_FPZero }, },
  { 428 /* fcmle */, AArch64::FCMLEvvi_4S, Convert__Reg1_0__Reg1_2__FPZero1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_FPZero }, },
  { 428 /* fcmle */, AArch64::FCMGEvvv_2D, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 428 /* fcmle */, AArch64::FCMGEvvv_2S, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 428 /* fcmle */, AArch64::FCMGEvvv_4S, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 434 /* fcmlt */, AArch64::FCMLTvvi_2D, Convert__Reg1_0__Reg1_2__FPZero1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_FPZero }, },
  { 434 /* fcmlt */, AArch64::FCMLTvvi_2S, Convert__Reg1_0__Reg1_2__FPZero1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_FPZero }, },
  { 434 /* fcmlt */, AArch64::FCMLTvvi_4S, Convert__Reg1_0__Reg1_2__FPZero1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_FPZero }, },
  { 434 /* fcmlt */, AArch64::FCMGTvvv_2D, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 434 /* fcmlt */, AArch64::FCMGTvvv_2S, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 434 /* fcmlt */, AArch64::FCMGTvvv_4S, Convert__Reg1_0__Reg1_4__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 440 /* fcmp */, AArch64::FCMPss_quiet, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR32, MCK_FPR32 }, },
  { 440 /* fcmp */, AArch64::FCMPsi_quiet, Convert__Reg1_0__FPZero1_1, 0, { MCK_FPR32, MCK_FPZero }, },
  { 440 /* fcmp */, AArch64::FCMPdd_quiet, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR64, MCK_FPR64 }, },
  { 440 /* fcmp */, AArch64::FCMPdi_quiet, Convert__Reg1_0__FPZero1_1, 0, { MCK_FPR64, MCK_FPZero }, },
  { 445 /* fcmpe */, AArch64::FCMPss_sig, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR32, MCK_FPR32 }, },
  { 445 /* fcmpe */, AArch64::FCMPsi_sig, Convert__Reg1_0__FPZero1_1, 0, { MCK_FPR32, MCK_FPZero }, },
  { 445 /* fcmpe */, AArch64::FCMPdd_sig, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR64, MCK_FPR64 }, },
  { 445 /* fcmpe */, AArch64::FCMPdi_sig, Convert__Reg1_0__FPZero1_1, 0, { MCK_FPR64, MCK_FPZero }, },
  { 451 /* fcsel */, AArch64::FCSELsssc, Convert__Reg1_0__Reg1_1__Reg1_2__CondCodeOp1_3, 0, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_CondCodeOp }, },
  { 451 /* fcsel */, AArch64::FCSELdddc, Convert__Reg1_0__Reg1_1__Reg1_2__CondCodeOp1_3, 0, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_CondCodeOp }, },
  { 457 /* fcvt */, AArch64::FCVThs, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR16, MCK_FPR32 }, },
  { 457 /* fcvt */, AArch64::FCVThd, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR16, MCK_FPR64 }, },
  { 457 /* fcvt */, AArch64::FCVTsh, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR32, MCK_FPR16 }, },
  { 457 /* fcvt */, AArch64::FCVTsd, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR32, MCK_FPR64 }, },
  { 457 /* fcvt */, AArch64::FCVTdh, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR64, MCK_FPR16 }, },
  { 457 /* fcvt */, AArch64::FCVTds, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR64, MCK_FPR32 }, },
  { 462 /* fcvtas */, AArch64::FCVTASxs, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR64, MCK_FPR32 }, },
  { 462 /* fcvtas */, AArch64::FCVTASxd, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR64, MCK_FPR64 }, },
  { 462 /* fcvtas */, AArch64::FCVTASws, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR32, MCK_FPR32 }, },
  { 462 /* fcvtas */, AArch64::FCVTASwd, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR32, MCK_FPR64 }, },
  { 469 /* fcvtau */, AArch64::FCVTAUxs, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR64, MCK_FPR32 }, },
  { 469 /* fcvtau */, AArch64::FCVTAUxd, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR64, MCK_FPR64 }, },
  { 469 /* fcvtau */, AArch64::FCVTAUws, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR32, MCK_FPR32 }, },
  { 469 /* fcvtau */, AArch64::FCVTAUwd, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR32, MCK_FPR64 }, },
  { 476 /* fcvtms */, AArch64::FCVTMSxs, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR64, MCK_FPR32 }, },
  { 476 /* fcvtms */, AArch64::FCVTMSxd, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR64, MCK_FPR64 }, },
  { 476 /* fcvtms */, AArch64::FCVTMSws, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR32, MCK_FPR32 }, },
  { 476 /* fcvtms */, AArch64::FCVTMSwd, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR32, MCK_FPR64 }, },
  { 483 /* fcvtmu */, AArch64::FCVTMUxs, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR64, MCK_FPR32 }, },
  { 483 /* fcvtmu */, AArch64::FCVTMUxd, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR64, MCK_FPR64 }, },
  { 483 /* fcvtmu */, AArch64::FCVTMUws, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR32, MCK_FPR32 }, },
  { 483 /* fcvtmu */, AArch64::FCVTMUwd, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR32, MCK_FPR64 }, },
  { 490 /* fcvtns */, AArch64::FCVTNSxs, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR64, MCK_FPR32 }, },
  { 490 /* fcvtns */, AArch64::FCVTNSxd, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR64, MCK_FPR64 }, },
  { 490 /* fcvtns */, AArch64::FCVTNSws, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR32, MCK_FPR32 }, },
  { 490 /* fcvtns */, AArch64::FCVTNSwd, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR32, MCK_FPR64 }, },
  { 497 /* fcvtnu */, AArch64::FCVTNUxs, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR64, MCK_FPR32 }, },
  { 497 /* fcvtnu */, AArch64::FCVTNUxd, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR64, MCK_FPR64 }, },
  { 497 /* fcvtnu */, AArch64::FCVTNUws, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR32, MCK_FPR32 }, },
  { 497 /* fcvtnu */, AArch64::FCVTNUwd, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR32, MCK_FPR64 }, },
  { 504 /* fcvtps */, AArch64::FCVTPSxs, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR64, MCK_FPR32 }, },
  { 504 /* fcvtps */, AArch64::FCVTPSxd, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR64, MCK_FPR64 }, },
  { 504 /* fcvtps */, AArch64::FCVTPSws, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR32, MCK_FPR32 }, },
  { 504 /* fcvtps */, AArch64::FCVTPSwd, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR32, MCK_FPR64 }, },
  { 511 /* fcvtpu */, AArch64::FCVTPUxs, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR64, MCK_FPR32 }, },
  { 511 /* fcvtpu */, AArch64::FCVTPUxd, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR64, MCK_FPR64 }, },
  { 511 /* fcvtpu */, AArch64::FCVTPUws, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR32, MCK_FPR32 }, },
  { 511 /* fcvtpu */, AArch64::FCVTPUwd, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR32, MCK_FPR64 }, },
  { 518 /* fcvtzs */, AArch64::FCVTZSxs, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR64, MCK_FPR32 }, },
  { 518 /* fcvtzs */, AArch64::FCVTZSxd, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR64, MCK_FPR64 }, },
  { 518 /* fcvtzs */, AArch64::FCVTZSws, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR32, MCK_FPR32 }, },
  { 518 /* fcvtzs */, AArch64::FCVTZSwd, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR32, MCK_FPR64 }, },
  { 518 /* fcvtzs */, AArch64::FCVTZSxsi, Convert__Reg1_0__Reg1_1__CVTFixedPos641_2, 0, { MCK_GPR64, MCK_FPR32, MCK_CVTFixedPos64 }, },
  { 518 /* fcvtzs */, AArch64::FCVTZSxdi, Convert__Reg1_0__Reg1_1__CVTFixedPos641_2, 0, { MCK_GPR64, MCK_FPR64, MCK_CVTFixedPos64 }, },
  { 518 /* fcvtzs */, AArch64::FCVTZSwsi, Convert__Reg1_0__Reg1_1__CVTFixedPos321_2, 0, { MCK_GPR32, MCK_FPR32, MCK_CVTFixedPos32 }, },
  { 518 /* fcvtzs */, AArch64::FCVTZSwdi, Convert__Reg1_0__Reg1_1__CVTFixedPos321_2, 0, { MCK_GPR32, MCK_FPR64, MCK_CVTFixedPos32 }, },
  { 525 /* fcvtzu */, AArch64::FCVTZUxs, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR64, MCK_FPR32 }, },
  { 525 /* fcvtzu */, AArch64::FCVTZUxd, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR64, MCK_FPR64 }, },
  { 525 /* fcvtzu */, AArch64::FCVTZUws, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR32, MCK_FPR32 }, },
  { 525 /* fcvtzu */, AArch64::FCVTZUwd, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR32, MCK_FPR64 }, },
  { 525 /* fcvtzu */, AArch64::FCVTZUxsi, Convert__Reg1_0__Reg1_1__CVTFixedPos641_2, 0, { MCK_GPR64, MCK_FPR32, MCK_CVTFixedPos64 }, },
  { 525 /* fcvtzu */, AArch64::FCVTZUxdi, Convert__Reg1_0__Reg1_1__CVTFixedPos641_2, 0, { MCK_GPR64, MCK_FPR64, MCK_CVTFixedPos64 }, },
  { 525 /* fcvtzu */, AArch64::FCVTZUwsi, Convert__Reg1_0__Reg1_1__CVTFixedPos321_2, 0, { MCK_GPR32, MCK_FPR32, MCK_CVTFixedPos32 }, },
  { 525 /* fcvtzu */, AArch64::FCVTZUwdi, Convert__Reg1_0__Reg1_1__CVTFixedPos321_2, 0, { MCK_GPR32, MCK_FPR64, MCK_CVTFixedPos32 }, },
  { 532 /* fdiv */, AArch64::FDIVsss, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 532 /* fdiv */, AArch64::FDIVddd, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 532 /* fdiv */, AArch64::FDIVvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 532 /* fdiv */, AArch64::FDIVvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 532 /* fdiv */, AArch64::FDIVvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 537 /* fmadd */, AArch64::FMADDssss, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3, 0, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 537 /* fmadd */, AArch64::FMADDdddd, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3, 0, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 543 /* fmax */, AArch64::FMAXsss, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 543 /* fmax */, AArch64::FMAXddd, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 543 /* fmax */, AArch64::FMAXvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 543 /* fmax */, AArch64::FMAXvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 543 /* fmax */, AArch64::FMAXvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 548 /* fmaxnm */, AArch64::FMAXNMsss, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 548 /* fmaxnm */, AArch64::FMAXNMddd, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 548 /* fmaxnm */, AArch64::FMAXNMvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 548 /* fmaxnm */, AArch64::FMAXNMvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 548 /* fmaxnm */, AArch64::FMAXNMvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 555 /* fmaxnmp */, AArch64::FMAXNMPvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 555 /* fmaxnmp */, AArch64::FMAXNMPvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 555 /* fmaxnmp */, AArch64::FMAXNMPvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 563 /* fmaxp */, AArch64::FMAXPvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 563 /* fmaxp */, AArch64::FMAXPvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 563 /* fmaxp */, AArch64::FMAXPvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 569 /* fmin */, AArch64::FMINsss, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 569 /* fmin */, AArch64::FMINddd, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 569 /* fmin */, AArch64::FMINvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 569 /* fmin */, AArch64::FMINvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 569 /* fmin */, AArch64::FMINvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 574 /* fminnm */, AArch64::FMINNMsss, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 574 /* fminnm */, AArch64::FMINNMddd, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 574 /* fminnm */, AArch64::FMINNMvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 574 /* fminnm */, AArch64::FMINNMvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 574 /* fminnm */, AArch64::FMINNMvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 581 /* fminnmp */, AArch64::FMINNMPvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 581 /* fminnmp */, AArch64::FMINNMPvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 581 /* fminnmp */, AArch64::FMINNMPvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 589 /* fminp */, AArch64::FMINPvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 589 /* fminp */, AArch64::FMINPvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 589 /* fminp */, AArch64::FMINPvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 595 /* fmla */, AArch64::FMLAvvv_2D, Convert__Reg1_0__Tie0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 595 /* fmla */, AArch64::FMLAvvv_2S, Convert__Reg1_0__Tie0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 595 /* fmla */, AArch64::FMLAvvv_4S, Convert__Reg1_0__Tie0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 600 /* fmls */, AArch64::FMLSvvv_2D, Convert__Reg1_0__Tie0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 600 /* fmls */, AArch64::FMLSvvv_2S, Convert__Reg1_0__Tie0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 600 /* fmls */, AArch64::FMLSvvv_4S, Convert__Reg1_0__Tie0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 605 /* fmov */, AArch64::FMOVxd, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR64, MCK_FPR64 }, },
  { 605 /* fmov */, AArch64::FMOVws, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR32, MCK_FPR32 }, },
  { 605 /* fmov */, AArch64::FMOVsw, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR32, MCK_GPR32 }, },
  { 605 /* fmov */, AArch64::FMOVss, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR32, MCK_FPR32 }, },
  { 605 /* fmov */, AArch64::FMOVsi, Convert__Reg1_0__FMOVImm1_1, 0, { MCK_FPR32, MCK_FMOVImm }, },
  { 605 /* fmov */, AArch64::FMOVdx, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR64, MCK_GPR64 }, },
  { 605 /* fmov */, AArch64::FMOVdd, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR64, MCK_FPR64 }, },
  { 605 /* fmov */, AArch64::FMOVdi, Convert__Reg1_0__FMOVImm1_1, 0, { MCK_FPR64, MCK_FMOVImm }, },
  { 605 /* fmov */, AArch64::FMOVvi_2D, Convert__Reg1_0__FMOVImm1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_FMOVImm }, },
  { 605 /* fmov */, AArch64::FMOVvi_2S, Convert__Reg1_0__FMOVImm1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_FMOVImm }, },
  { 605 /* fmov */, AArch64::FMOVvi_4S, Convert__Reg1_0__FMOVImm1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_FMOVImm }, },
  { 605 /* fmov */, AArch64::FMOVxv, Convert__Reg1_0__Reg1_1__Lane11_4, 0, { MCK_GPR64, MCK_VPR64, MCK__DOT_2d, MCK__91_, MCK_Lane1, MCK__93_ }, },
  { 605 /* fmov */, AArch64::FMOVxv, Convert__Reg1_0__Reg1_1__Lane11_4, 0, { MCK_GPR64, MCK_VPR64, MCK__DOT_d, MCK__91_, MCK_Lane1, MCK__93_ }, },
  { 605 /* fmov */, AArch64::FMOVvx, Convert__Reg1_0__Reg1_5__Lane11_3, 0, { MCK_VPR64, MCK__DOT_2d, MCK__91_, MCK_Lane1, MCK__93_, MCK_GPR64 }, },
  { 605 /* fmov */, AArch64::FMOVvx, Convert__Reg1_0__Reg1_5__Lane11_3, 0, { MCK_VPR64, MCK__DOT_d, MCK__91_, MCK_Lane1, MCK__93_, MCK_GPR64 }, },
  { 610 /* fmsub */, AArch64::FMSUBssss, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3, 0, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 610 /* fmsub */, AArch64::FMSUBdddd, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3, 0, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 616 /* fmul */, AArch64::FMULsss, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 616 /* fmul */, AArch64::FMULddd, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 616 /* fmul */, AArch64::FMULvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 616 /* fmul */, AArch64::FMULvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 616 /* fmul */, AArch64::FMULvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 621 /* fmulx */, AArch64::FMULXvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 621 /* fmulx */, AArch64::FMULXvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 621 /* fmulx */, AArch64::FMULXvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 627 /* fneg */, AArch64::FNEGss, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR32, MCK_FPR32 }, },
  { 627 /* fneg */, AArch64::FNEGdd, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR64, MCK_FPR64 }, },
  { 632 /* fnmadd */, AArch64::FNMADDssss, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3, 0, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 632 /* fnmadd */, AArch64::FNMADDdddd, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3, 0, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 639 /* fnmsub */, AArch64::FNMSUBssss, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3, 0, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 639 /* fnmsub */, AArch64::FNMSUBdddd, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3, 0, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 646 /* fnmul */, AArch64::FNMULsss, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 646 /* fnmul */, AArch64::FNMULddd, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 652 /* frecps */, AArch64::FRECPSvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 652 /* frecps */, AArch64::FRECPSvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 652 /* frecps */, AArch64::FRECPSvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 659 /* frinta */, AArch64::FRINTAss, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR32, MCK_FPR32 }, },
  { 659 /* frinta */, AArch64::FRINTAdd, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR64, MCK_FPR64 }, },
  { 666 /* frinti */, AArch64::FRINTIss, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR32, MCK_FPR32 }, },
  { 666 /* frinti */, AArch64::FRINTIdd, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR64, MCK_FPR64 }, },
  { 673 /* frintm */, AArch64::FRINTMss, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR32, MCK_FPR32 }, },
  { 673 /* frintm */, AArch64::FRINTMdd, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR64, MCK_FPR64 }, },
  { 680 /* frintn */, AArch64::FRINTNss, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR32, MCK_FPR32 }, },
  { 680 /* frintn */, AArch64::FRINTNdd, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR64, MCK_FPR64 }, },
  { 687 /* frintp */, AArch64::FRINTPss, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR32, MCK_FPR32 }, },
  { 687 /* frintp */, AArch64::FRINTPdd, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR64, MCK_FPR64 }, },
  { 694 /* frintx */, AArch64::FRINTXss, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR32, MCK_FPR32 }, },
  { 694 /* frintx */, AArch64::FRINTXdd, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR64, MCK_FPR64 }, },
  { 701 /* frintz */, AArch64::FRINTZss, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR32, MCK_FPR32 }, },
  { 701 /* frintz */, AArch64::FRINTZdd, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR64, MCK_FPR64 }, },
  { 708 /* frsqrts */, AArch64::FRSQRTSvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 708 /* frsqrts */, AArch64::FRSQRTSvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 708 /* frsqrts */, AArch64::FRSQRTSvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 716 /* fsqrt */, AArch64::FSQRTss, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR32, MCK_FPR32 }, },
  { 716 /* fsqrt */, AArch64::FSQRTdd, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR64, MCK_FPR64 }, },
  { 722 /* fsub */, AArch64::FSUBsss, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 722 /* fsub */, AArch64::FSUBddd, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 722 /* fsub */, AArch64::FSUBvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 722 /* fsub */, AArch64::FSUBvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 722 /* fsub */, AArch64::FSUBvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 727 /* hint */, AArch64::HINTi, Convert__UImm71_0, 0, { MCK_UImm7 }, },
  { 732 /* hlt */, AArch64::HLTi, Convert__UImm161_0, 0, { MCK_UImm16 }, },
  { 736 /* hvc */, AArch64::HVCi, Convert__UImm161_0, 0, { MCK_UImm16 }, },
  { 740 /* ic */, AArch64::ICi, Convert__NamedImmic1_0, 0, { MCK_NamedImmic }, },
  { 740 /* ic */, AArch64::ICix, Convert__NamedImmic1_0__Reg1_1, 0, { MCK_NamedImmic, MCK_GPR64 }, },
  { 743 /* isb */, AArch64::ISBi, Convert__imm_15, 0, {  }, },
  { 743 /* isb */, AArch64::ISBi, Convert__NamedImmisb1_0, 0, { MCK_NamedImmisb }, },
  { 747 /* ldar */, AArch64::LDAR_dword, Convert__Reg1_0__GPR64xsp01_2, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp0, MCK__93_ }, },
  { 747 /* ldar */, AArch64::LDAR_word, Convert__Reg1_0__GPR64xsp01_2, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp0, MCK__93_ }, },
  { 752 /* ldarb */, AArch64::LDAR_byte, Convert__Reg1_0__GPR64xsp01_2, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp0, MCK__93_ }, },
  { 758 /* ldarh */, AArch64::LDAR_hword, Convert__Reg1_0__GPR64xsp01_2, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp0, MCK__93_ }, },
  { 764 /* ldaxp */, AArch64::LDAXP_dword, Convert__Reg1_0__Reg1_1__GPR64xsp01_3, 0, { MCK_GPR64, MCK_GPR64, MCK__91_, MCK_GPR64xsp0, MCK__93_ }, },
  { 764 /* ldaxp */, AArch64::LDAXP_word, Convert__Reg1_0__Reg1_1__GPR64xsp01_3, 0, { MCK_GPR32, MCK_GPR32, MCK__91_, MCK_GPR64xsp0, MCK__93_ }, },
  { 770 /* ldaxr */, AArch64::LDAXR_dword, Convert__Reg1_0__GPR64xsp01_2, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp0, MCK__93_ }, },
  { 770 /* ldaxr */, AArch64::LDAXR_word, Convert__Reg1_0__GPR64xsp01_2, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp0, MCK__93_ }, },
  { 776 /* ldaxrb */, AArch64::LDAXR_byte, Convert__Reg1_0__GPR64xsp01_2, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp0, MCK__93_ }, },
  { 783 /* ldaxrh */, AArch64::LDAXR_hword, Convert__Reg1_0__GPR64xsp01_2, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp0, MCK__93_ }, },
  { 790 /* ldnp */, AArch64::LSPair64_NonTemp_LDR, Convert__Reg1_0__Reg1_1__Reg1_3__imm_0, 0, { MCK_GPR64, MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 790 /* ldnp */, AArch64::LSPair32_NonTemp_LDR, Convert__Reg1_0__Reg1_1__Reg1_3__imm_0, 0, { MCK_GPR32, MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 790 /* ldnp */, AArch64::LSFPPair128_NonTemp_LDR, Convert__Reg1_0__Reg1_1__Reg1_3__imm_0, 0, { MCK_FPR128, MCK_FPR128, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 790 /* ldnp */, AArch64::LSFPPair32_NonTemp_LDR, Convert__Reg1_0__Reg1_1__Reg1_3__imm_0, 0, { MCK_FPR32, MCK_FPR32, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 790 /* ldnp */, AArch64::LSFPPair64_NonTemp_LDR, Convert__Reg1_0__Reg1_1__Reg1_3__imm_0, 0, { MCK_FPR64, MCK_FPR64, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 790 /* ldnp */, AArch64::LSPair64_NonTemp_LDR, Convert__Reg1_0__Reg1_1__Reg1_3__SImm7_Scaled81_4, 0, { MCK_GPR64, MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_SImm7_Scaled8, MCK__93_ }, },
  { 790 /* ldnp */, AArch64::LSPair32_NonTemp_LDR, Convert__Reg1_0__Reg1_1__Reg1_3__SImm7_Scaled41_4, 0, { MCK_GPR32, MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm7_Scaled4, MCK__93_ }, },
  { 790 /* ldnp */, AArch64::LSFPPair128_NonTemp_LDR, Convert__Reg1_0__Reg1_1__Reg1_3__SImm7_Scaled161_4, 0, { MCK_FPR128, MCK_FPR128, MCK__91_, MCK_GPR64xsp, MCK_SImm7_Scaled16, MCK__93_ }, },
  { 790 /* ldnp */, AArch64::LSFPPair32_NonTemp_LDR, Convert__Reg1_0__Reg1_1__Reg1_3__SImm7_Scaled41_4, 0, { MCK_FPR32, MCK_FPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm7_Scaled4, MCK__93_ }, },
  { 790 /* ldnp */, AArch64::LSFPPair64_NonTemp_LDR, Convert__Reg1_0__Reg1_1__Reg1_3__SImm7_Scaled81_4, 0, { MCK_FPR64, MCK_FPR64, MCK__91_, MCK_GPR64xsp, MCK_SImm7_Scaled8, MCK__93_ }, },
  { 795 /* ldp */, AArch64::LSPair64_LDR, Convert__Reg1_0__Reg1_1__Reg1_3__imm_0, 0, { MCK_GPR64, MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 795 /* ldp */, AArch64::LSPair32_LDR, Convert__Reg1_0__Reg1_1__Reg1_3__imm_0, 0, { MCK_GPR32, MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 795 /* ldp */, AArch64::LSFPPair128_LDR, Convert__Reg1_0__Reg1_1__Reg1_3__imm_0, 0, { MCK_FPR128, MCK_FPR128, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 795 /* ldp */, AArch64::LSFPPair32_LDR, Convert__Reg1_0__Reg1_1__Reg1_3__imm_0, 0, { MCK_FPR32, MCK_FPR32, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 795 /* ldp */, AArch64::LSFPPair64_LDR, Convert__Reg1_0__Reg1_1__Reg1_3__imm_0, 0, { MCK_FPR64, MCK_FPR64, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 795 /* ldp */, AArch64::LSPair64_PostInd_LDR, Convert__Reg1_0__Reg1_1__Reg1_3__Tie2__SImm7_Scaled81_5, 0, { MCK_GPR64, MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK__93_, MCK_SImm7_Scaled8 }, },
  { 795 /* ldp */, AArch64::LSPair64_LDR, Convert__Reg1_0__Reg1_1__Reg1_3__SImm7_Scaled81_4, 0, { MCK_GPR64, MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_SImm7_Scaled8, MCK__93_ }, },
  { 795 /* ldp */, AArch64::LSPair32_PostInd_LDR, Convert__Reg1_0__Reg1_1__Reg1_3__Tie2__SImm7_Scaled41_5, 0, { MCK_GPR32, MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK__93_, MCK_SImm7_Scaled4 }, },
  { 795 /* ldp */, AArch64::LSPair32_LDR, Convert__Reg1_0__Reg1_1__Reg1_3__SImm7_Scaled41_4, 0, { MCK_GPR32, MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm7_Scaled4, MCK__93_ }, },
  { 795 /* ldp */, AArch64::LSFPPair128_PostInd_LDR, Convert__Reg1_0__Reg1_1__Reg1_3__Tie2__SImm7_Scaled161_5, 0, { MCK_FPR128, MCK_FPR128, MCK__91_, MCK_GPR64xsp, MCK__93_, MCK_SImm7_Scaled16 }, },
  { 795 /* ldp */, AArch64::LSFPPair128_LDR, Convert__Reg1_0__Reg1_1__Reg1_3__SImm7_Scaled161_4, 0, { MCK_FPR128, MCK_FPR128, MCK__91_, MCK_GPR64xsp, MCK_SImm7_Scaled16, MCK__93_ }, },
  { 795 /* ldp */, AArch64::LSFPPair32_PostInd_LDR, Convert__Reg1_0__Reg1_1__Reg1_3__Tie2__SImm7_Scaled41_5, 0, { MCK_FPR32, MCK_FPR32, MCK__91_, MCK_GPR64xsp, MCK__93_, MCK_SImm7_Scaled4 }, },
  { 795 /* ldp */, AArch64::LSFPPair32_LDR, Convert__Reg1_0__Reg1_1__Reg1_3__SImm7_Scaled41_4, 0, { MCK_FPR32, MCK_FPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm7_Scaled4, MCK__93_ }, },
  { 795 /* ldp */, AArch64::LSFPPair64_PostInd_LDR, Convert__Reg1_0__Reg1_1__Reg1_3__Tie2__SImm7_Scaled81_5, 0, { MCK_FPR64, MCK_FPR64, MCK__91_, MCK_GPR64xsp, MCK__93_, MCK_SImm7_Scaled8 }, },
  { 795 /* ldp */, AArch64::LSFPPair64_LDR, Convert__Reg1_0__Reg1_1__Reg1_3__SImm7_Scaled81_4, 0, { MCK_FPR64, MCK_FPR64, MCK__91_, MCK_GPR64xsp, MCK_SImm7_Scaled8, MCK__93_ }, },
  { 795 /* ldp */, AArch64::LSPair64_PreInd_LDR, Convert__Reg1_0__Reg1_1__Reg1_3__Tie2__SImm7_Scaled81_4, 0, { MCK_GPR64, MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_SImm7_Scaled8, MCK__93_, MCK__EXCLAIM_ }, },
  { 795 /* ldp */, AArch64::LSPair32_PreInd_LDR, Convert__Reg1_0__Reg1_1__Reg1_3__Tie2__SImm7_Scaled41_4, 0, { MCK_GPR32, MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm7_Scaled4, MCK__93_, MCK__EXCLAIM_ }, },
  { 795 /* ldp */, AArch64::LSFPPair128_PreInd_LDR, Convert__Reg1_0__Reg1_1__Reg1_3__Tie2__SImm7_Scaled161_4, 0, { MCK_FPR128, MCK_FPR128, MCK__91_, MCK_GPR64xsp, MCK_SImm7_Scaled16, MCK__93_, MCK__EXCLAIM_ }, },
  { 795 /* ldp */, AArch64::LSFPPair32_PreInd_LDR, Convert__Reg1_0__Reg1_1__Reg1_3__Tie2__SImm7_Scaled41_4, 0, { MCK_FPR32, MCK_FPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm7_Scaled4, MCK__93_, MCK__EXCLAIM_ }, },
  { 795 /* ldp */, AArch64::LSFPPair64_PreInd_LDR, Convert__Reg1_0__Reg1_1__Reg1_3__Tie2__SImm7_Scaled81_4, 0, { MCK_FPR64, MCK_FPR64, MCK__91_, MCK_GPR64xsp, MCK_SImm7_Scaled8, MCK__93_, MCK__EXCLAIM_ }, },
  { 799 /* ldpsw */, AArch64::LDPSWx, Convert__Reg1_0__Reg1_1__Reg1_3__imm_0, 0, { MCK_GPR64, MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 799 /* ldpsw */, AArch64::LDPSWx_PostInd, Convert__Reg1_0__Reg1_1__Reg1_3__Tie2__SImm7_Scaled41_5, 0, { MCK_GPR64, MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK__93_, MCK_SImm7_Scaled4 }, },
  { 799 /* ldpsw */, AArch64::LDPSWx, Convert__Reg1_0__Reg1_1__Reg1_3__SImm7_Scaled41_4, 0, { MCK_GPR64, MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_SImm7_Scaled4, MCK__93_ }, },
  { 799 /* ldpsw */, AArch64::LDPSWx_PreInd, Convert__Reg1_0__Reg1_1__Reg1_3__Tie2__SImm7_Scaled41_4, 0, { MCK_GPR64, MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_SImm7_Scaled4, MCK__93_, MCK__EXCLAIM_ }, },
  { 805 /* ldr */, AArch64::LDRx_lit, Convert__Reg1_0__LoadLitLabel1_1, 0, { MCK_GPR64, MCK_LoadLitLabel }, },
  { 805 /* ldr */, AArch64::LDRw_lit, Convert__Reg1_0__LoadLitLabel1_1, 0, { MCK_GPR32, MCK_LoadLitLabel }, },
  { 805 /* ldr */, AArch64::LDRq_lit, Convert__Reg1_0__LoadLitLabel1_1, 0, { MCK_FPR128, MCK_LoadLitLabel }, },
  { 805 /* ldr */, AArch64::LDRs_lit, Convert__Reg1_0__LoadLitLabel1_1, 0, { MCK_FPR32, MCK_LoadLitLabel }, },
  { 805 /* ldr */, AArch64::LDRd_lit, Convert__Reg1_0__LoadLitLabel1_1, 0, { MCK_FPR64, MCK_LoadLitLabel }, },
  { 805 /* ldr */, AArch64::LS64_LDR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 805 /* ldr */, AArch64::LS32_LDR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 805 /* ldr */, AArch64::LSFP16_LDR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_FPR16, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 805 /* ldr */, AArch64::LSFP8_LDR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_FPR8, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 805 /* ldr */, AArch64::LSFP128_LDR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_FPR128, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 805 /* ldr */, AArch64::LSFP32_LDR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_FPR32, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 805 /* ldr */, AArch64::LSFP64_LDR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_FPR64, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 805 /* ldr */, AArch64::LS64_PostInd_LDR, Convert__Reg1_0__Reg1_2__Tie1__SImm91_4, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK__93_, MCK_SImm9 }, },
  { 805 /* ldr */, AArch64::LS64_Xm_RegOffset_LDR, Convert__Reg1_0__Reg1_2__Reg1_3__imm_2, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK__93_ }, },
  { 805 /* ldr */, AArch64::LS64_LDR, Convert__Reg1_0__Reg1_2__OffsetUImm12_81_3, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_OffsetUImm12_8, MCK__93_ }, },
  { 805 /* ldr */, AArch64::LS32_PostInd_LDR, Convert__Reg1_0__Reg1_2__Tie1__SImm91_4, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK__93_, MCK_SImm9 }, },
  { 805 /* ldr */, AArch64::LS32_Xm_RegOffset_LDR, Convert__Reg1_0__Reg1_2__Reg1_3__imm_2, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK__93_ }, },
  { 805 /* ldr */, AArch64::LS32_LDR, Convert__Reg1_0__Reg1_2__OffsetUImm12_41_3, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_OffsetUImm12_4, MCK__93_ }, },
  { 805 /* ldr */, AArch64::LSFP16_PostInd_LDR, Convert__Reg1_0__Reg1_2__Tie1__SImm91_4, 0, { MCK_FPR16, MCK__91_, MCK_GPR64xsp, MCK__93_, MCK_SImm9 }, },
  { 805 /* ldr */, AArch64::LSFP16_Xm_RegOffset_LDR, Convert__Reg1_0__Reg1_2__Reg1_3__imm_2, 0, { MCK_FPR16, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK__93_ }, },
  { 805 /* ldr */, AArch64::LSFP16_LDR, Convert__Reg1_0__Reg1_2__OffsetUImm12_21_3, 0, { MCK_FPR16, MCK__91_, MCK_GPR64xsp, MCK_OffsetUImm12_2, MCK__93_ }, },
  { 805 /* ldr */, AArch64::LSFP8_PostInd_LDR, Convert__Reg1_0__Reg1_2__Tie1__SImm91_4, 0, { MCK_FPR8, MCK__91_, MCK_GPR64xsp, MCK__93_, MCK_SImm9 }, },
  { 805 /* ldr */, AArch64::LSFP8_Xm_RegOffset_LDR, Convert__Reg1_0__Reg1_2__Reg1_3__imm_2, 0, { MCK_FPR8, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK__93_ }, },
  { 805 /* ldr */, AArch64::LSFP8_LDR, Convert__Reg1_0__Reg1_2__OffsetUImm12_11_3, 0, { MCK_FPR8, MCK__91_, MCK_GPR64xsp, MCK_OffsetUImm12_1, MCK__93_ }, },
  { 805 /* ldr */, AArch64::LSFP128_PostInd_LDR, Convert__Reg1_0__Reg1_2__Tie1__SImm91_4, 0, { MCK_FPR128, MCK__91_, MCK_GPR64xsp, MCK__93_, MCK_SImm9 }, },
  { 805 /* ldr */, AArch64::LSFP128_Xm_RegOffset_LDR, Convert__Reg1_0__Reg1_2__Reg1_3__imm_2, 0, { MCK_FPR128, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK__93_ }, },
  { 805 /* ldr */, AArch64::LSFP128_LDR, Convert__Reg1_0__Reg1_2__OffsetUImm12_161_3, 0, { MCK_FPR128, MCK__91_, MCK_GPR64xsp, MCK_OffsetUImm12_16, MCK__93_ }, },
  { 805 /* ldr */, AArch64::LSFP32_PostInd_LDR, Convert__Reg1_0__Reg1_2__Tie1__SImm91_4, 0, { MCK_FPR32, MCK__91_, MCK_GPR64xsp, MCK__93_, MCK_SImm9 }, },
  { 805 /* ldr */, AArch64::LSFP32_Xm_RegOffset_LDR, Convert__Reg1_0__Reg1_2__Reg1_3__imm_2, 0, { MCK_FPR32, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK__93_ }, },
  { 805 /* ldr */, AArch64::LSFP32_LDR, Convert__Reg1_0__Reg1_2__OffsetUImm12_41_3, 0, { MCK_FPR32, MCK__91_, MCK_GPR64xsp, MCK_OffsetUImm12_4, MCK__93_ }, },
  { 805 /* ldr */, AArch64::LSFP64_PostInd_LDR, Convert__Reg1_0__Reg1_2__Tie1__SImm91_4, 0, { MCK_FPR64, MCK__91_, MCK_GPR64xsp, MCK__93_, MCK_SImm9 }, },
  { 805 /* ldr */, AArch64::LSFP64_Xm_RegOffset_LDR, Convert__Reg1_0__Reg1_2__Reg1_3__imm_2, 0, { MCK_FPR64, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK__93_ }, },
  { 805 /* ldr */, AArch64::LSFP64_LDR, Convert__Reg1_0__Reg1_2__OffsetUImm12_81_3, 0, { MCK_FPR64, MCK__91_, MCK_GPR64xsp, MCK_OffsetUImm12_8, MCK__93_ }, },
  { 805 /* ldr */, AArch64::LS64_Xm_RegOffset_LDR, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_8_Xm1_4, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK_AddrRegExtend_8_Xm, MCK__93_ }, },
  { 805 /* ldr */, AArch64::LS64_Wm_RegOffset_LDR, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_8_Wm1_4, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_GPR32, MCK_AddrRegExtend_8_Wm, MCK__93_ }, },
  { 805 /* ldr */, AArch64::LS64_PreInd_LDR, Convert__Reg1_0__Reg1_2__Tie1__SImm91_3, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_, MCK__EXCLAIM_ }, },
  { 805 /* ldr */, AArch64::LS32_Xm_RegOffset_LDR, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_4_Xm1_4, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK_AddrRegExtend_4_Xm, MCK__93_ }, },
  { 805 /* ldr */, AArch64::LS32_Wm_RegOffset_LDR, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_4_Wm1_4, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_GPR32, MCK_AddrRegExtend_4_Wm, MCK__93_ }, },
  { 805 /* ldr */, AArch64::LS32_PreInd_LDR, Convert__Reg1_0__Reg1_2__Tie1__SImm91_3, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_, MCK__EXCLAIM_ }, },
  { 805 /* ldr */, AArch64::LSFP16_Xm_RegOffset_LDR, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_2_Xm1_4, 0, { MCK_FPR16, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK_AddrRegExtend_2_Xm, MCK__93_ }, },
  { 805 /* ldr */, AArch64::LSFP16_Wm_RegOffset_LDR, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_2_Wm1_4, 0, { MCK_FPR16, MCK__91_, MCK_GPR64xsp, MCK_GPR32, MCK_AddrRegExtend_2_Wm, MCK__93_ }, },
  { 805 /* ldr */, AArch64::LSFP16_PreInd_LDR, Convert__Reg1_0__Reg1_2__Tie1__SImm91_3, 0, { MCK_FPR16, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_, MCK__EXCLAIM_ }, },
  { 805 /* ldr */, AArch64::LSFP8_Xm_RegOffset_LDR, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_1_Xm1_4, 0, { MCK_FPR8, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK_AddrRegExtend_1_Xm, MCK__93_ }, },
  { 805 /* ldr */, AArch64::LSFP8_Wm_RegOffset_LDR, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_1_Wm1_4, 0, { MCK_FPR8, MCK__91_, MCK_GPR64xsp, MCK_GPR32, MCK_AddrRegExtend_1_Wm, MCK__93_ }, },
  { 805 /* ldr */, AArch64::LSFP8_PreInd_LDR, Convert__Reg1_0__Reg1_2__Tie1__SImm91_3, 0, { MCK_FPR8, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_, MCK__EXCLAIM_ }, },
  { 805 /* ldr */, AArch64::LSFP128_Xm_RegOffset_LDR, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_16_Xm1_4, 0, { MCK_FPR128, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK_AddrRegExtend_16_Xm, MCK__93_ }, },
  { 805 /* ldr */, AArch64::LSFP128_Wm_RegOffset_LDR, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_16_Wm1_4, 0, { MCK_FPR128, MCK__91_, MCK_GPR64xsp, MCK_GPR32, MCK_AddrRegExtend_16_Wm, MCK__93_ }, },
  { 805 /* ldr */, AArch64::LSFP128_PreInd_LDR, Convert__Reg1_0__Reg1_2__Tie1__SImm91_3, 0, { MCK_FPR128, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_, MCK__EXCLAIM_ }, },
  { 805 /* ldr */, AArch64::LSFP32_Xm_RegOffset_LDR, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_4_Xm1_4, 0, { MCK_FPR32, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK_AddrRegExtend_4_Xm, MCK__93_ }, },
  { 805 /* ldr */, AArch64::LSFP32_Wm_RegOffset_LDR, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_4_Wm1_4, 0, { MCK_FPR32, MCK__91_, MCK_GPR64xsp, MCK_GPR32, MCK_AddrRegExtend_4_Wm, MCK__93_ }, },
  { 805 /* ldr */, AArch64::LSFP32_PreInd_LDR, Convert__Reg1_0__Reg1_2__Tie1__SImm91_3, 0, { MCK_FPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_, MCK__EXCLAIM_ }, },
  { 805 /* ldr */, AArch64::LSFP64_Xm_RegOffset_LDR, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_8_Xm1_4, 0, { MCK_FPR64, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK_AddrRegExtend_8_Xm, MCK__93_ }, },
  { 805 /* ldr */, AArch64::LSFP64_Wm_RegOffset_LDR, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_8_Wm1_4, 0, { MCK_FPR64, MCK__91_, MCK_GPR64xsp, MCK_GPR32, MCK_AddrRegExtend_8_Wm, MCK__93_ }, },
  { 805 /* ldr */, AArch64::LSFP64_PreInd_LDR, Convert__Reg1_0__Reg1_2__Tie1__SImm91_3, 0, { MCK_FPR64, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_, MCK__EXCLAIM_ }, },
  { 809 /* ldrb */, AArch64::LS8_LDR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 809 /* ldrb */, AArch64::LS8_PostInd_LDR, Convert__Reg1_0__Reg1_2__Tie1__SImm91_4, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK__93_, MCK_SImm9 }, },
  { 809 /* ldrb */, AArch64::LS8_Xm_RegOffset_LDR, Convert__Reg1_0__Reg1_2__Reg1_3__imm_2, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK__93_ }, },
  { 809 /* ldrb */, AArch64::LS8_LDR, Convert__Reg1_0__Reg1_2__OffsetUImm12_11_3, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_OffsetUImm12_1, MCK__93_ }, },
  { 809 /* ldrb */, AArch64::LS8_Xm_RegOffset_LDR, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_1_Xm1_4, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK_AddrRegExtend_1_Xm, MCK__93_ }, },
  { 809 /* ldrb */, AArch64::LS8_Wm_RegOffset_LDR, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_1_Wm1_4, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_GPR32, MCK_AddrRegExtend_1_Wm, MCK__93_ }, },
  { 809 /* ldrb */, AArch64::LS8_PreInd_LDR, Convert__Reg1_0__Reg1_2__Tie1__SImm91_3, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_, MCK__EXCLAIM_ }, },
  { 814 /* ldrh */, AArch64::LS16_LDR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 814 /* ldrh */, AArch64::LS16_PostInd_LDR, Convert__Reg1_0__Reg1_2__Tie1__SImm91_4, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK__93_, MCK_SImm9 }, },
  { 814 /* ldrh */, AArch64::LS16_Xm_RegOffset_LDR, Convert__Reg1_0__Reg1_2__Reg1_3__imm_2, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK__93_ }, },
  { 814 /* ldrh */, AArch64::LS16_LDR, Convert__Reg1_0__Reg1_2__OffsetUImm12_21_3, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_OffsetUImm12_2, MCK__93_ }, },
  { 814 /* ldrh */, AArch64::LS16_Xm_RegOffset_LDR, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_2_Xm1_4, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK_AddrRegExtend_2_Xm, MCK__93_ }, },
  { 814 /* ldrh */, AArch64::LS16_Wm_RegOffset_LDR, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_2_Wm1_4, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_GPR32, MCK_AddrRegExtend_2_Wm, MCK__93_ }, },
  { 814 /* ldrh */, AArch64::LS16_PreInd_LDR, Convert__Reg1_0__Reg1_2__Tie1__SImm91_3, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_, MCK__EXCLAIM_ }, },
  { 819 /* ldrsb */, AArch64::LDRSBx, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 819 /* ldrsb */, AArch64::LDRSBw, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 819 /* ldrsb */, AArch64::LDRSBx_PostInd, Convert__Reg1_0__Reg1_2__Tie1__SImm91_4, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK__93_, MCK_SImm9 }, },
  { 819 /* ldrsb */, AArch64::LDRSBx_Xm_RegOffset, Convert__Reg1_0__Reg1_2__Reg1_3__imm_2, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK__93_ }, },
  { 819 /* ldrsb */, AArch64::LDRSBx, Convert__Reg1_0__Reg1_2__OffsetUImm12_11_3, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_OffsetUImm12_1, MCK__93_ }, },
  { 819 /* ldrsb */, AArch64::LDRSBw_PostInd, Convert__Reg1_0__Reg1_2__Tie1__SImm91_4, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK__93_, MCK_SImm9 }, },
  { 819 /* ldrsb */, AArch64::LDRSBw_Xm_RegOffset, Convert__Reg1_0__Reg1_2__Reg1_3__imm_2, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK__93_ }, },
  { 819 /* ldrsb */, AArch64::LDRSBw, Convert__Reg1_0__Reg1_2__OffsetUImm12_11_3, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_OffsetUImm12_1, MCK__93_ }, },
  { 819 /* ldrsb */, AArch64::LDRSBx_Xm_RegOffset, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_1_Xm1_4, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK_AddrRegExtend_1_Xm, MCK__93_ }, },
  { 819 /* ldrsb */, AArch64::LDRSBx_Wm_RegOffset, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_1_Wm1_4, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_GPR32, MCK_AddrRegExtend_1_Wm, MCK__93_ }, },
  { 819 /* ldrsb */, AArch64::LDRSBx_PreInd, Convert__Reg1_0__Reg1_2__Tie1__SImm91_3, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_, MCK__EXCLAIM_ }, },
  { 819 /* ldrsb */, AArch64::LDRSBw_Xm_RegOffset, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_1_Xm1_4, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK_AddrRegExtend_1_Xm, MCK__93_ }, },
  { 819 /* ldrsb */, AArch64::LDRSBw_Wm_RegOffset, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_1_Wm1_4, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_GPR32, MCK_AddrRegExtend_1_Wm, MCK__93_ }, },
  { 819 /* ldrsb */, AArch64::LDRSBw_PreInd, Convert__Reg1_0__Reg1_2__Tie1__SImm91_3, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_, MCK__EXCLAIM_ }, },
  { 825 /* ldrsh */, AArch64::LDRSHx, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 825 /* ldrsh */, AArch64::LDRSHw, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 825 /* ldrsh */, AArch64::LDRSHx_PostInd, Convert__Reg1_0__Reg1_2__Tie1__SImm91_4, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK__93_, MCK_SImm9 }, },
  { 825 /* ldrsh */, AArch64::LDRSHx_Xm_RegOffset, Convert__Reg1_0__Reg1_2__Reg1_3__imm_2, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK__93_ }, },
  { 825 /* ldrsh */, AArch64::LDRSHx, Convert__Reg1_0__Reg1_2__OffsetUImm12_21_3, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_OffsetUImm12_2, MCK__93_ }, },
  { 825 /* ldrsh */, AArch64::LDRSHw_PostInd, Convert__Reg1_0__Reg1_2__Tie1__SImm91_4, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK__93_, MCK_SImm9 }, },
  { 825 /* ldrsh */, AArch64::LDRSHw_Xm_RegOffset, Convert__Reg1_0__Reg1_2__Reg1_3__imm_2, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK__93_ }, },
  { 825 /* ldrsh */, AArch64::LDRSHw, Convert__Reg1_0__Reg1_2__OffsetUImm12_21_3, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_OffsetUImm12_2, MCK__93_ }, },
  { 825 /* ldrsh */, AArch64::LDRSHx_Xm_RegOffset, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_2_Xm1_4, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK_AddrRegExtend_2_Xm, MCK__93_ }, },
  { 825 /* ldrsh */, AArch64::LDRSHx_Wm_RegOffset, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_2_Wm1_4, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_GPR32, MCK_AddrRegExtend_2_Wm, MCK__93_ }, },
  { 825 /* ldrsh */, AArch64::LDRSHx_PreInd, Convert__Reg1_0__Reg1_2__Tie1__SImm91_3, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_, MCK__EXCLAIM_ }, },
  { 825 /* ldrsh */, AArch64::LDRSHw_Xm_RegOffset, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_2_Xm1_4, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK_AddrRegExtend_2_Xm, MCK__93_ }, },
  { 825 /* ldrsh */, AArch64::LDRSHw_Wm_RegOffset, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_2_Wm1_4, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_GPR32, MCK_AddrRegExtend_2_Wm, MCK__93_ }, },
  { 825 /* ldrsh */, AArch64::LDRSHw_PreInd, Convert__Reg1_0__Reg1_2__Tie1__SImm91_3, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_, MCK__EXCLAIM_ }, },
  { 831 /* ldrsw */, AArch64::LDRSWx_lit, Convert__Reg1_0__LoadLitLabel1_1, 0, { MCK_GPR64, MCK_LoadLitLabel }, },
  { 831 /* ldrsw */, AArch64::LDRSWx, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 831 /* ldrsw */, AArch64::LDRSWx_PostInd, Convert__Reg1_0__Reg1_2__Tie1__SImm91_4, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK__93_, MCK_SImm9 }, },
  { 831 /* ldrsw */, AArch64::LDRSWx_Xm_RegOffset, Convert__Reg1_0__Reg1_2__Reg1_3__imm_2, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK__93_ }, },
  { 831 /* ldrsw */, AArch64::LDRSWx, Convert__Reg1_0__Reg1_2__OffsetUImm12_41_3, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_OffsetUImm12_4, MCK__93_ }, },
  { 831 /* ldrsw */, AArch64::LDRSWx_Xm_RegOffset, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_4_Xm1_4, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK_AddrRegExtend_4_Xm, MCK__93_ }, },
  { 831 /* ldrsw */, AArch64::LDRSWx_Wm_RegOffset, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_4_Wm1_4, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_GPR32, MCK_AddrRegExtend_4_Wm, MCK__93_ }, },
  { 831 /* ldrsw */, AArch64::LDRSWx_PreInd, Convert__Reg1_0__Reg1_2__Tie1__SImm91_3, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_, MCK__EXCLAIM_ }, },
  { 837 /* ldtr */, AArch64::LS64_UnPriv_LDR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 837 /* ldtr */, AArch64::LS32_UnPriv_LDR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 837 /* ldtr */, AArch64::LS64_UnPriv_LDR, Convert__Reg1_0__Reg1_2__SImm91_3, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_ }, },
  { 837 /* ldtr */, AArch64::LS32_UnPriv_LDR, Convert__Reg1_0__Reg1_2__SImm91_3, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_ }, },
  { 842 /* ldtrb */, AArch64::LS8_UnPriv_LDR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 842 /* ldtrb */, AArch64::LS8_UnPriv_LDR, Convert__Reg1_0__Reg1_2__SImm91_3, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_ }, },
  { 848 /* ldtrh */, AArch64::LS16_UnPriv_LDR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 848 /* ldtrh */, AArch64::LS16_UnPriv_LDR, Convert__Reg1_0__Reg1_2__SImm91_3, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_ }, },
  { 854 /* ldtrsb */, AArch64::LDTRSBx, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 854 /* ldtrsb */, AArch64::LDTRSBw, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 854 /* ldtrsb */, AArch64::LDTRSBx, Convert__Reg1_0__Reg1_2__SImm91_3, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_ }, },
  { 854 /* ldtrsb */, AArch64::LDTRSBw, Convert__Reg1_0__Reg1_2__SImm91_3, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_ }, },
  { 861 /* ldtrsh */, AArch64::LDTRSHx, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 861 /* ldtrsh */, AArch64::LDTRSHw, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 861 /* ldtrsh */, AArch64::LDTRSHx, Convert__Reg1_0__Reg1_2__SImm91_3, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_ }, },
  { 861 /* ldtrsh */, AArch64::LDTRSHw, Convert__Reg1_0__Reg1_2__SImm91_3, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_ }, },
  { 868 /* ldtrsw */, AArch64::LDTRSWx, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 868 /* ldtrsw */, AArch64::LDTRSWx, Convert__Reg1_0__Reg1_2__SImm91_3, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_ }, },
  { 875 /* ldur */, AArch64::LS64_LDUR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 875 /* ldur */, AArch64::LS32_LDUR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 875 /* ldur */, AArch64::LSFP16_LDUR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_FPR16, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 875 /* ldur */, AArch64::LSFP8_LDUR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_FPR8, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 875 /* ldur */, AArch64::LSFP128_LDUR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_FPR128, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 875 /* ldur */, AArch64::LSFP32_LDUR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_FPR32, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 875 /* ldur */, AArch64::LSFP64_LDUR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_FPR64, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 875 /* ldur */, AArch64::LS64_LDUR, Convert__Reg1_0__Reg1_2__SImm91_3, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_ }, },
  { 875 /* ldur */, AArch64::LS32_LDUR, Convert__Reg1_0__Reg1_2__SImm91_3, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_ }, },
  { 875 /* ldur */, AArch64::LSFP16_LDUR, Convert__Reg1_0__Reg1_2__SImm91_3, 0, { MCK_FPR16, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_ }, },
  { 875 /* ldur */, AArch64::LSFP8_LDUR, Convert__Reg1_0__Reg1_2__SImm91_3, 0, { MCK_FPR8, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_ }, },
  { 875 /* ldur */, AArch64::LSFP128_LDUR, Convert__Reg1_0__Reg1_2__SImm91_3, 0, { MCK_FPR128, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_ }, },
  { 875 /* ldur */, AArch64::LSFP32_LDUR, Convert__Reg1_0__Reg1_2__SImm91_3, 0, { MCK_FPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_ }, },
  { 875 /* ldur */, AArch64::LSFP64_LDUR, Convert__Reg1_0__Reg1_2__SImm91_3, 0, { MCK_FPR64, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_ }, },
  { 880 /* ldurb */, AArch64::LS8_LDUR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 880 /* ldurb */, AArch64::LS8_LDUR, Convert__Reg1_0__Reg1_2__SImm91_3, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_ }, },
  { 886 /* ldurh */, AArch64::LS16_LDUR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 886 /* ldurh */, AArch64::LS16_LDUR, Convert__Reg1_0__Reg1_2__SImm91_3, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_ }, },
  { 892 /* ldursb */, AArch64::LDRSBx_U, Convert__Reg1_0__Reg1_2__SImm91_3, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_ }, },
  { 892 /* ldursb */, AArch64::LDRSBw_U, Convert__Reg1_0__Reg1_2__SImm91_3, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_ }, },
  { 899 /* ldursh */, AArch64::LDRSHx_U, Convert__Reg1_0__Reg1_2__SImm91_3, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_ }, },
  { 899 /* ldursh */, AArch64::LDRSHw_U, Convert__Reg1_0__Reg1_2__SImm91_3, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_ }, },
  { 906 /* ldursw */, AArch64::LDURSWx, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 906 /* ldursw */, AArch64::LDURSWx, Convert__Reg1_0__Reg1_2__SImm91_3, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_ }, },
  { 913 /* ldxp */, AArch64::LDXP_dword, Convert__Reg1_0__Reg1_1__GPR64xsp01_3, 0, { MCK_GPR64, MCK_GPR64, MCK__91_, MCK_GPR64xsp0, MCK__93_ }, },
  { 913 /* ldxp */, AArch64::LDXP_word, Convert__Reg1_0__Reg1_1__GPR64xsp01_3, 0, { MCK_GPR32, MCK_GPR32, MCK__91_, MCK_GPR64xsp0, MCK__93_ }, },
  { 918 /* ldxr */, AArch64::LDXR_dword, Convert__Reg1_0__GPR64xsp01_2, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp0, MCK__93_ }, },
  { 918 /* ldxr */, AArch64::LDXR_word, Convert__Reg1_0__GPR64xsp01_2, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp0, MCK__93_ }, },
  { 923 /* ldxrb */, AArch64::LDXR_byte, Convert__Reg1_0__GPR64xsp01_2, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp0, MCK__93_ }, },
  { 929 /* ldxrh */, AArch64::LDXR_hword, Convert__Reg1_0__GPR64xsp01_2, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp0, MCK__93_ }, },
  { 935 /* lsl */, AArch64::LSLVxxx, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64 }, },
  { 935 /* lsl */, AArch64::LSLxxi, Convert__Reg1_0__Reg1_1__UImm61_2, 0, { MCK_GPR64, MCK_GPR64, MCK_UImm6 }, },
  { 935 /* lsl */, AArch64::LSLVwww, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32 }, },
  { 935 /* lsl */, AArch64::LSLwwi, Convert__Reg1_0__Reg1_1__UImm51_2, 0, { MCK_GPR32, MCK_GPR32, MCK_UImm5 }, },
  { 939 /* lsr */, AArch64::LSRVxxx, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64 }, },
  { 939 /* lsr */, AArch64::LSRxxi, Convert__Reg1_0__Reg1_1__UImm61_2, 0, { MCK_GPR64, MCK_GPR64, MCK_UImm6 }, },
  { 939 /* lsr */, AArch64::LSRVwww, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32 }, },
  { 939 /* lsr */, AArch64::LSRwwi, Convert__Reg1_0__Reg1_1__UImm51_2, 0, { MCK_GPR32, MCK_GPR32, MCK_UImm5 }, },
  { 943 /* madd */, AArch64::MADDxxxx, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_GPR64 }, },
  { 943 /* madd */, AArch64::MADDwwww, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_GPR32 }, },
  { 948 /* mla */, AArch64::MLAvvv_16B, Convert__Reg1_0__Tie0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 948 /* mla */, AArch64::MLAvvv_2S, Convert__Reg1_0__Tie0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 948 /* mla */, AArch64::MLAvvv_4H, Convert__Reg1_0__Tie0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 948 /* mla */, AArch64::MLAvvv_4S, Convert__Reg1_0__Tie0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 948 /* mla */, AArch64::MLAvvv_8B, Convert__Reg1_0__Tie0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 948 /* mla */, AArch64::MLAvvv_8H, Convert__Reg1_0__Tie0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 952 /* mls */, AArch64::MLSvvv_16B, Convert__Reg1_0__Tie0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 952 /* mls */, AArch64::MLSvvv_2S, Convert__Reg1_0__Tie0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 952 /* mls */, AArch64::MLSvvv_4H, Convert__Reg1_0__Tie0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 952 /* mls */, AArch64::MLSvvv_4S, Convert__Reg1_0__Tie0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 952 /* mls */, AArch64::MLSvvv_8B, Convert__Reg1_0__Tie0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 952 /* mls */, AArch64::MLSvvv_8H, Convert__Reg1_0__Tie0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 956 /* mneg */, AArch64::MSUBxxxx, Convert__Reg1_0__Reg1_1__Reg1_2__regXZR, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64 }, },
  { 956 /* mneg */, AArch64::MSUBwwww, Convert__Reg1_0__Reg1_1__Reg1_2__regWZR, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32 }, },
  { 961 /* mov */, AArch64::ORRxxx_lsl, Convert__Reg1_0__regXZR__Reg1_1__imm_0, 0, { MCK_GPR64, MCK_GPR64 }, },
  { 961 /* mov */, AArch64::MOVNxii, Convert__Reg1_0__MOVN64MovAlias2_1, 0, { MCK_GPR64, MCK_MOVN64MovAlias }, },
  { 961 /* mov */, AArch64::MOVZxii, Convert__Reg1_0__MOVZ64MovAlias2_1, 0, { MCK_GPR64, MCK_MOVZ64MovAlias }, },
  { 961 /* mov */, AArch64::ADDxxi_lsl0_s, Convert__Reg1_0__Reg1_1__imm_0, 0, { MCK_GPR64xsp, MCK_Rxsp }, },
  { 961 /* mov */, AArch64::ORRxxi, Convert__Reg1_0__regXZR__LogicalImmMOV641_1, 0, { MCK_GPR64xsp, MCK_LogicalImmMOV64 }, },
  { 961 /* mov */, AArch64::ORRwww_lsl, Convert__Reg1_0__regWZR__Reg1_1__imm_0, 0, { MCK_GPR32, MCK_GPR32 }, },
  { 961 /* mov */, AArch64::MOVNwii, Convert__Reg1_0__MOVN32MovAlias2_1, 0, { MCK_GPR32, MCK_MOVN32MovAlias }, },
  { 961 /* mov */, AArch64::MOVZwii, Convert__Reg1_0__MOVZ32MovAlias2_1, 0, { MCK_GPR32, MCK_MOVZ32MovAlias }, },
  { 961 /* mov */, AArch64::ADDwwi_lsl0_s, Convert__Reg1_0__Reg1_1__imm_0, 0, { MCK_Rwsp, MCK_GPR32wsp }, },
  { 961 /* mov */, AArch64::ADDwwi_lsl0_s, Convert__Reg1_0__Reg1_1__imm_0, 0, { MCK_GPR32wsp, MCK_Rwsp }, },
  { 961 /* mov */, AArch64::ORRwwi, Convert__Reg1_0__regWZR__LogicalImmMOV321_1, 0, { MCK_GPR32wsp, MCK_LogicalImmMOV32 }, },
  { 961 /* mov */, AArch64::ADDxxi_lsl0_s, Convert__Reg1_0__Reg1_1__imm_0, 0, { MCK_Rxsp, MCK_GPR64xsp }, },
  { 961 /* mov */, AArch64::ORRvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 961 /* mov */, AArch64::ORRvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 965 /* movi */, AArch64::MOVIdi, Convert__Reg1_0__NeonUImm64Mask1_1, Feature_HasNEON, { MCK_FPR64, MCK_NeonUImm64Mask }, },
  { 965 /* movi */, AArch64::MOVIvi_16B, Convert__Reg1_0__UImm81_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_UImm8 }, },
  { 965 /* movi */, AArch64::MOVIvi_2D, Convert__Reg1_0__NeonUImm64Mask1_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_NeonUImm64Mask }, },
  { 965 /* movi */, AArch64::MOVIvi_lsl_2S, Convert__Reg1_0__UImm81_2__imm_0, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_UImm8 }, },
  { 965 /* movi */, AArch64::MOVIvi_lsl_4H, Convert__Reg1_0__UImm81_2__imm_0, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_UImm8 }, },
  { 965 /* movi */, AArch64::MOVIvi_lsl_4S, Convert__Reg1_0__UImm81_2__imm_0, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_UImm8 }, },
  { 965 /* movi */, AArch64::MOVIvi_8B, Convert__Reg1_0__UImm81_2, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_UImm8 }, },
  { 965 /* movi */, AArch64::MOVIvi_lsl_8H, Convert__Reg1_0__UImm81_2__imm_0, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_UImm8 }, },
  { 965 /* movi */, AArch64::MOVIvi_lsl_2S, Convert__Reg1_0__UImm81_2__NeonMovImmShiftLSL1_3, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_UImm8, MCK_NeonMovImmShiftLSL }, },
  { 965 /* movi */, AArch64::MOVIvi_msl_2S, Convert__Reg1_0__UImm81_2__NeonMovImmShiftMSL1_3, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_UImm8, MCK_NeonMovImmShiftMSL }, },
  { 965 /* movi */, AArch64::MOVIvi_lsl_4H, Convert__Reg1_0__UImm81_2__NeonMovImmShiftLSLH1_3, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_UImm8, MCK_NeonMovImmShiftLSLH }, },
  { 965 /* movi */, AArch64::MOVIvi_lsl_4S, Convert__Reg1_0__UImm81_2__NeonMovImmShiftLSL1_3, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_UImm8, MCK_NeonMovImmShiftLSL }, },
  { 965 /* movi */, AArch64::MOVIvi_msl_4S, Convert__Reg1_0__UImm81_2__NeonMovImmShiftMSL1_3, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_UImm8, MCK_NeonMovImmShiftMSL }, },
  { 965 /* movi */, AArch64::MOVIvi_lsl_8H, Convert__Reg1_0__UImm81_2__NeonMovImmShiftLSLH1_3, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_UImm8, MCK_NeonMovImmShiftLSLH }, },
  { 970 /* movk */, AArch64::MOVKxii, Convert__Reg1_0__Tie0__MOVK64Shiftedshift2_1, 0, { MCK_GPR64, MCK_MOVK64Shiftedshift }, },
  { 970 /* movk */, AArch64::MOVKwii, Convert__Reg1_0__Tie0__MOVK32Shiftedshift2_1, 0, { MCK_GPR32, MCK_MOVK32Shiftedshift }, },
  { 975 /* movn */, AArch64::MOVNxii, Convert__Reg1_0__MOVN64Shiftedshift2_1, 0, { MCK_GPR64, MCK_MOVN64Shiftedshift }, },
  { 975 /* movn */, AArch64::MOVNwii, Convert__Reg1_0__MOVN32Shiftedshift2_1, 0, { MCK_GPR32, MCK_MOVN32Shiftedshift }, },
  { 980 /* movz */, AArch64::MOVZxii, Convert__Reg1_0__MOVZ64Shiftedshift2_1, 0, { MCK_GPR64, MCK_MOVZ64Shiftedshift }, },
  { 980 /* movz */, AArch64::MOVZwii, Convert__Reg1_0__MOVZ32Shiftedshift2_1, 0, { MCK_GPR32, MCK_MOVZ32Shiftedshift }, },
  { 985 /* mrs */, AArch64::MRSxi, Convert__Reg1_0__MRS1_1, 0, { MCK_GPR64, MCK_MRS }, },
  { 989 /* msr */, AArch64::MSRix, Convert__MSRWithReg1_0__Reg1_1, 0, { MCK_MSRWithReg, MCK_GPR64 }, },
  { 989 /* msr */, AArch64::MSRii, Convert__MSRPState1_0__UImm41_1, 0, { MCK_MSRPState, MCK_UImm4 }, },
  { 993 /* msub */, AArch64::MSUBxxxx, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_GPR64 }, },
  { 993 /* msub */, AArch64::MSUBwwww, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_GPR32 }, },
  { 998 /* mul */, AArch64::MADDxxxx, Convert__Reg1_0__Reg1_1__Reg1_2__regXZR, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64 }, },
  { 998 /* mul */, AArch64::MADDwwww, Convert__Reg1_0__Reg1_1__Reg1_2__regWZR, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32 }, },
  { 998 /* mul */, AArch64::MULvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 998 /* mul */, AArch64::MULvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 998 /* mul */, AArch64::MULvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 998 /* mul */, AArch64::MULvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 998 /* mul */, AArch64::MULvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 998 /* mul */, AArch64::MULvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 1002 /* mvn */, AArch64::MVNxx_lsl, Convert__Reg1_0__Reg1_1__imm_0, 0, { MCK_GPR64, MCK_GPR64 }, },
  { 1002 /* mvn */, AArch64::MVNww_lsl, Convert__Reg1_0__Reg1_1__imm_0, 0, { MCK_GPR32, MCK_GPR32 }, },
  { 1002 /* mvn */, AArch64::MVNxx_asr, Convert__Reg1_0__Reg1_1__ShiftASRi641_2, 0, { MCK_GPR64, MCK_GPR64, MCK_ShiftASRi64 }, },
  { 1002 /* mvn */, AArch64::MVNxx_lsl, Convert__Reg1_0__Reg1_1__ShiftLSLi641_2, 0, { MCK_GPR64, MCK_GPR64, MCK_ShiftLSLi64 }, },
  { 1002 /* mvn */, AArch64::MVNxx_lsr, Convert__Reg1_0__Reg1_1__ShiftLSRi641_2, 0, { MCK_GPR64, MCK_GPR64, MCK_ShiftLSRi64 }, },
  { 1002 /* mvn */, AArch64::MVNxx_ror, Convert__Reg1_0__Reg1_1__ShiftRORi641_2, 0, { MCK_GPR64, MCK_GPR64, MCK_ShiftRORi64 }, },
  { 1002 /* mvn */, AArch64::MVNww_asr, Convert__Reg1_0__Reg1_1__ShiftASRi321_2, 0, { MCK_GPR32, MCK_GPR32, MCK_ShiftASRi32 }, },
  { 1002 /* mvn */, AArch64::MVNww_lsl, Convert__Reg1_0__Reg1_1__ShiftLSLi321_2, 0, { MCK_GPR32, MCK_GPR32, MCK_ShiftLSLi32 }, },
  { 1002 /* mvn */, AArch64::MVNww_lsr, Convert__Reg1_0__Reg1_1__ShiftLSRi321_2, 0, { MCK_GPR32, MCK_GPR32, MCK_ShiftLSRi32 }, },
  { 1002 /* mvn */, AArch64::MVNww_ror, Convert__Reg1_0__Reg1_1__ShiftRORi321_2, 0, { MCK_GPR32, MCK_GPR32, MCK_ShiftRORi32 }, },
  { 1006 /* mvni */, AArch64::MVNIvi_lsl_2S, Convert__Reg1_0__UImm81_2__imm_0, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_UImm8 }, },
  { 1006 /* mvni */, AArch64::MVNIvi_lsl_4H, Convert__Reg1_0__UImm81_2__imm_0, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_UImm8 }, },
  { 1006 /* mvni */, AArch64::MVNIvi_lsl_4S, Convert__Reg1_0__UImm81_2__imm_0, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_UImm8 }, },
  { 1006 /* mvni */, AArch64::MVNIvi_lsl_8H, Convert__Reg1_0__UImm81_2__imm_0, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_UImm8 }, },
  { 1006 /* mvni */, AArch64::MVNIvi_lsl_2S, Convert__Reg1_0__UImm81_2__NeonMovImmShiftLSL1_3, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_UImm8, MCK_NeonMovImmShiftLSL }, },
  { 1006 /* mvni */, AArch64::MVNIvi_msl_2S, Convert__Reg1_0__UImm81_2__NeonMovImmShiftMSL1_3, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_UImm8, MCK_NeonMovImmShiftMSL }, },
  { 1006 /* mvni */, AArch64::MVNIvi_lsl_4H, Convert__Reg1_0__UImm81_2__NeonMovImmShiftLSLH1_3, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_UImm8, MCK_NeonMovImmShiftLSLH }, },
  { 1006 /* mvni */, AArch64::MVNIvi_lsl_4S, Convert__Reg1_0__UImm81_2__NeonMovImmShiftLSL1_3, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_UImm8, MCK_NeonMovImmShiftLSL }, },
  { 1006 /* mvni */, AArch64::MVNIvi_msl_4S, Convert__Reg1_0__UImm81_2__NeonMovImmShiftMSL1_3, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_UImm8, MCK_NeonMovImmShiftMSL }, },
  { 1006 /* mvni */, AArch64::MVNIvi_lsl_8H, Convert__Reg1_0__UImm81_2__NeonMovImmShiftLSLH1_3, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_UImm8, MCK_NeonMovImmShiftLSLH }, },
  { 1011 /* neg */, AArch64::SUBxxx_lsl, Convert__Reg1_0__regXZR__Reg1_1__imm_0, 0, { MCK_GPR64, MCK_GPR64 }, },
  { 1011 /* neg */, AArch64::SUBwww_lsl, Convert__Reg1_0__regWZR__Reg1_1__imm_0, 0, { MCK_GPR32, MCK_GPR32 }, },
  { 1011 /* neg */, AArch64::SUBxxx_asr, Convert__Reg1_0__regXZR__Reg1_1__ShiftASRi641_2, 0, { MCK_GPR64, MCK_GPR64, MCK_ShiftASRi64 }, },
  { 1011 /* neg */, AArch64::SUBxxx_lsl, Convert__Reg1_0__regXZR__Reg1_1__ShiftLSLi641_2, 0, { MCK_GPR64, MCK_GPR64, MCK_ShiftLSLi64 }, },
  { 1011 /* neg */, AArch64::SUBxxx_lsr, Convert__Reg1_0__regXZR__Reg1_1__ShiftLSRi641_2, 0, { MCK_GPR64, MCK_GPR64, MCK_ShiftLSRi64 }, },
  { 1011 /* neg */, AArch64::SUBwww_asr, Convert__Reg1_0__regWZR__Reg1_1__ShiftASRi321_2, 0, { MCK_GPR32, MCK_GPR32, MCK_ShiftASRi32 }, },
  { 1011 /* neg */, AArch64::SUBwww_lsl, Convert__Reg1_0__regWZR__Reg1_1__ShiftLSLi321_2, 0, { MCK_GPR32, MCK_GPR32, MCK_ShiftLSLi32 }, },
  { 1011 /* neg */, AArch64::SUBwww_lsr, Convert__Reg1_0__regWZR__Reg1_1__ShiftLSRi321_2, 0, { MCK_GPR32, MCK_GPR32, MCK_ShiftLSRi32 }, },
  { 1015 /* negs */, AArch64::SUBSxxx_lsl, Convert__Reg1_0__regXZR__Reg1_1__imm_0, 0, { MCK_GPR64, MCK_GPR64 }, },
  { 1015 /* negs */, AArch64::SUBSwww_lsl, Convert__Reg1_0__regWZR__Reg1_1__imm_0, 0, { MCK_GPR32, MCK_GPR32 }, },
  { 1015 /* negs */, AArch64::SUBSxxx_asr, Convert__Reg1_0__regXZR__Reg1_1__ShiftASRi641_2, 0, { MCK_GPR64, MCK_GPR64, MCK_ShiftASRi64 }, },
  { 1015 /* negs */, AArch64::SUBSxxx_lsl, Convert__Reg1_0__regXZR__Reg1_1__ShiftLSLi641_2, 0, { MCK_GPR64, MCK_GPR64, MCK_ShiftLSLi64 }, },
  { 1015 /* negs */, AArch64::SUBSxxx_lsr, Convert__Reg1_0__regXZR__Reg1_1__ShiftLSRi641_2, 0, { MCK_GPR64, MCK_GPR64, MCK_ShiftLSRi64 }, },
  { 1015 /* negs */, AArch64::SUBSwww_asr, Convert__Reg1_0__regWZR__Reg1_1__ShiftASRi321_2, 0, { MCK_GPR32, MCK_GPR32, MCK_ShiftASRi32 }, },
  { 1015 /* negs */, AArch64::SUBSwww_lsl, Convert__Reg1_0__regWZR__Reg1_1__ShiftLSLi321_2, 0, { MCK_GPR32, MCK_GPR32, MCK_ShiftLSLi32 }, },
  { 1015 /* negs */, AArch64::SUBSwww_lsr, Convert__Reg1_0__regWZR__Reg1_1__ShiftLSRi321_2, 0, { MCK_GPR32, MCK_GPR32, MCK_ShiftLSRi32 }, },
  { 1020 /* ngc */, AArch64::SBCxxx, Convert__Reg1_0__regXZR__Reg1_1, 0, { MCK_GPR64, MCK_GPR64 }, },
  { 1020 /* ngc */, AArch64::SBCwww, Convert__Reg1_0__regWZR__Reg1_1, 0, { MCK_GPR32, MCK_GPR32 }, },
  { 1024 /* ngcs */, AArch64::SBCSxxx, Convert__Reg1_0__regXZR__Reg1_1, 0, { MCK_GPR64, MCK_GPR64 }, },
  { 1024 /* ngcs */, AArch64::SBCSwww, Convert__Reg1_0__regWZR__Reg1_1, 0, { MCK_GPR32, MCK_GPR32 }, },
  { 1029 /* nop */, AArch64::HINTi, Convert__imm_0, 0, {  }, },
  { 1033 /* orn */, AArch64::ORNxxx_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__imm_0, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64 }, },
  { 1033 /* orn */, AArch64::ORNwww_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__imm_0, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32 }, },
  { 1033 /* orn */, AArch64::ORNxxx_asr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftASRi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftASRi64 }, },
  { 1033 /* orn */, AArch64::ORNxxx_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSLi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftLSLi64 }, },
  { 1033 /* orn */, AArch64::ORNxxx_lsr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSRi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftLSRi64 }, },
  { 1033 /* orn */, AArch64::ORNxxx_ror, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftRORi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftRORi64 }, },
  { 1033 /* orn */, AArch64::ORNwww_asr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftASRi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftASRi32 }, },
  { 1033 /* orn */, AArch64::ORNwww_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSLi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftLSLi32 }, },
  { 1033 /* orn */, AArch64::ORNwww_lsr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSRi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftLSRi32 }, },
  { 1033 /* orn */, AArch64::ORNwww_ror, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftRORi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftRORi32 }, },
  { 1033 /* orn */, AArch64::ORNvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 1033 /* orn */, AArch64::ORNvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 1037 /* orr */, AArch64::ORRxxx_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__imm_0, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64 }, },
  { 1037 /* orr */, AArch64::ORRxxi, Convert__Reg1_0__Reg1_1__LogicalImm641_2, 0, { MCK_GPR64xsp, MCK_GPR64, MCK_LogicalImm64 }, },
  { 1037 /* orr */, AArch64::ORRwww_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__imm_0, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32 }, },
  { 1037 /* orr */, AArch64::ORRwwi, Convert__Reg1_0__Reg1_1__LogicalImm321_2, 0, { MCK_GPR32wsp, MCK_GPR32, MCK_LogicalImm32 }, },
  { 1037 /* orr */, AArch64::ORRvi_lsl_2S, Convert__Reg1_0__Tie0__UImm81_2__imm_0, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_UImm8 }, },
  { 1037 /* orr */, AArch64::ORRvi_lsl_4H, Convert__Reg1_0__Tie0__UImm81_2__imm_0, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_UImm8 }, },
  { 1037 /* orr */, AArch64::ORRvi_lsl_4S, Convert__Reg1_0__Tie0__UImm81_2__imm_0, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_UImm8 }, },
  { 1037 /* orr */, AArch64::ORRvi_lsl_8H, Convert__Reg1_0__Tie0__UImm81_2__imm_0, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_UImm8 }, },
  { 1037 /* orr */, AArch64::ORRxxx_asr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftASRi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftASRi64 }, },
  { 1037 /* orr */, AArch64::ORRxxx_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSLi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftLSLi64 }, },
  { 1037 /* orr */, AArch64::ORRxxx_lsr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSRi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftLSRi64 }, },
  { 1037 /* orr */, AArch64::ORRxxx_ror, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftRORi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftRORi64 }, },
  { 1037 /* orr */, AArch64::ORRwww_asr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftASRi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftASRi32 }, },
  { 1037 /* orr */, AArch64::ORRwww_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSLi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftLSLi32 }, },
  { 1037 /* orr */, AArch64::ORRwww_lsr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSRi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftLSRi32 }, },
  { 1037 /* orr */, AArch64::ORRwww_ror, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftRORi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftRORi32 }, },
  { 1037 /* orr */, AArch64::ORRvi_lsl_2S, Convert__Reg1_0__Tie0__UImm81_2__NeonMovImmShiftLSL1_3, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_UImm8, MCK_NeonMovImmShiftLSL }, },
  { 1037 /* orr */, AArch64::ORRvi_lsl_4H, Convert__Reg1_0__Tie0__UImm81_2__NeonMovImmShiftLSLH1_3, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_UImm8, MCK_NeonMovImmShiftLSLH }, },
  { 1037 /* orr */, AArch64::ORRvi_lsl_4S, Convert__Reg1_0__Tie0__UImm81_2__NeonMovImmShiftLSL1_3, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_UImm8, MCK_NeonMovImmShiftLSL }, },
  { 1037 /* orr */, AArch64::ORRvi_lsl_8H, Convert__Reg1_0__Tie0__UImm81_2__NeonMovImmShiftLSLH1_3, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_UImm8, MCK_NeonMovImmShiftLSLH }, },
  { 1037 /* orr */, AArch64::ORRvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 1037 /* orr */, AArch64::ORRvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 1041 /* pmul */, AArch64::PMULvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 1041 /* pmul */, AArch64::PMULvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 1046 /* prfm */, AArch64::PRFM_lit, Convert__NamedImmprefetch1_0__LoadLitLabel1_1, 0, { MCK_NamedImmprefetch, MCK_LoadLitLabel }, },
  { 1046 /* prfm */, AArch64::PRFM, Convert__NamedImmprefetch1_0__Reg1_2__imm_0, 0, { MCK_NamedImmprefetch, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 1046 /* prfm */, AArch64::PRFM_Xm_RegOffset, Convert__NamedImmprefetch1_0__Reg1_2__Reg1_3__imm_2, 0, { MCK_NamedImmprefetch, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK__93_ }, },
  { 1046 /* prfm */, AArch64::PRFM, Convert__NamedImmprefetch1_0__Reg1_2__OffsetUImm12_81_3, 0, { MCK_NamedImmprefetch, MCK__91_, MCK_GPR64xsp, MCK_OffsetUImm12_8, MCK__93_ }, },
  { 1046 /* prfm */, AArch64::PRFM_Xm_RegOffset, Convert__NamedImmprefetch1_0__Reg1_2__Reg1_3__AddrRegExtend_8_Xm1_4, 0, { MCK_NamedImmprefetch, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK_AddrRegExtend_8_Xm, MCK__93_ }, },
  { 1046 /* prfm */, AArch64::PRFM_Wm_RegOffset, Convert__NamedImmprefetch1_0__Reg1_2__Reg1_3__AddrRegExtend_8_Wm1_4, 0, { MCK_NamedImmprefetch, MCK__91_, MCK_GPR64xsp, MCK_GPR32, MCK_AddrRegExtend_8_Wm, MCK__93_ }, },
  { 1051 /* prfum */, AArch64::PRFUM, Convert__NamedImmprefetch1_0__Reg1_2__imm_0, 0, { MCK_NamedImmprefetch, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 1051 /* prfum */, AArch64::PRFUM, Convert__NamedImmprefetch1_0__Reg1_2__SImm91_3, 0, { MCK_NamedImmprefetch, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_ }, },
  { 1057 /* rbit */, AArch64::RBITxx, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR64, MCK_GPR64 }, },
  { 1057 /* rbit */, AArch64::RBITww, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR32, MCK_GPR32 }, },
  { 1062 /* ret */, AArch64::RETx, Convert__regX30, 0, {  }, },
  { 1062 /* ret */, AArch64::RETx, Convert__Reg1_0, 0, { MCK_GPR64 }, },
  { 1066 /* rev */, AArch64::REVxx, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR64, MCK_GPR64 }, },
  { 1066 /* rev */, AArch64::REVww, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR32, MCK_GPR32 }, },
  { 1070 /* rev16 */, AArch64::REV16xx, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR64, MCK_GPR64 }, },
  { 1070 /* rev16 */, AArch64::REV16ww, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR32, MCK_GPR32 }, },
  { 1076 /* rev32 */, AArch64::REV32xx, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR64, MCK_GPR64 }, },
  { 1082 /* ror */, AArch64::RORVxxx, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64 }, },
  { 1082 /* ror */, AArch64::EXTRxxxi, Convert__Reg1_0__Reg1_1__Reg1_1__UImm61_2, 0, { MCK_GPR64, MCK_GPR64, MCK_UImm6 }, },
  { 1082 /* ror */, AArch64::RORVwww, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32 }, },
  { 1082 /* ror */, AArch64::EXTRwwwi, Convert__Reg1_0__Reg1_1__Reg1_1__UImm51_2, 0, { MCK_GPR32, MCK_GPR32, MCK_UImm5 }, },
  { 1086 /* saba */, AArch64::SABAvvv_16B, Convert__Reg1_0__Tie0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 1086 /* saba */, AArch64::SABAvvv_2S, Convert__Reg1_0__Tie0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 1086 /* saba */, AArch64::SABAvvv_4H, Convert__Reg1_0__Tie0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 1086 /* saba */, AArch64::SABAvvv_4S, Convert__Reg1_0__Tie0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 1086 /* saba */, AArch64::SABAvvv_8B, Convert__Reg1_0__Tie0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 1086 /* saba */, AArch64::SABAvvv_8H, Convert__Reg1_0__Tie0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 1091 /* sabd */, AArch64::SABDvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 1091 /* sabd */, AArch64::SABDvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 1091 /* sabd */, AArch64::SABDvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 1091 /* sabd */, AArch64::SABDvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 1091 /* sabd */, AArch64::SABDvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 1091 /* sabd */, AArch64::SABDvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 1096 /* sbc */, AArch64::SBCxxx, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64 }, },
  { 1096 /* sbc */, AArch64::SBCwww, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32 }, },
  { 1100 /* sbcs */, AArch64::SBCSxxx, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64 }, },
  { 1100 /* sbcs */, AArch64::SBCSwww, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32 }, },
  { 1105 /* sbfiz */, AArch64::SBFIZxxii, Convert__Reg1_0__Reg1_1__BFI64LSB1_2__BFI64Width1_3, 0, { MCK_GPR64, MCK_GPR64, MCK_BFI64LSB, MCK_BFI64Width }, },
  { 1105 /* sbfiz */, AArch64::SBFIZwwii, Convert__Reg1_0__Reg1_1__BFI32LSB1_2__BFI32Width1_3, 0, { MCK_GPR32, MCK_GPR32, MCK_BFI32LSB, MCK_BFI32Width }, },
  { 1111 /* sbfm */, AArch64::SBFMxxii, Convert__Reg1_0__Reg1_1__UImm61_2__UImm61_3, 0, { MCK_GPR64, MCK_GPR64, MCK_UImm6, MCK_UImm6 }, },
  { 1111 /* sbfm */, AArch64::SBFMwwii, Convert__Reg1_0__Reg1_1__UImm51_2__UImm51_3, 0, { MCK_GPR32, MCK_GPR32, MCK_UImm5, MCK_UImm5 }, },
  { 1116 /* sbfx */, AArch64::SBFXxxii, Convert__Reg1_0__Reg1_1__UImm61_2__BFX64Width1_3, 0, { MCK_GPR64, MCK_GPR64, MCK_UImm6, MCK_BFX64Width }, },
  { 1116 /* sbfx */, AArch64::SBFXwwii, Convert__Reg1_0__Reg1_1__UImm51_2__BFX32Width1_3, 0, { MCK_GPR32, MCK_GPR32, MCK_UImm5, MCK_BFX32Width }, },
  { 1121 /* scvtf */, AArch64::SCVTFsx, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR32, MCK_GPR64 }, },
  { 1121 /* scvtf */, AArch64::SCVTFsw, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR32, MCK_GPR32 }, },
  { 1121 /* scvtf */, AArch64::SCVTFdx, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR64, MCK_GPR64 }, },
  { 1121 /* scvtf */, AArch64::SCVTFdw, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR64, MCK_GPR32 }, },
  { 1121 /* scvtf */, AArch64::SCVTFsxi, Convert__Reg1_0__Reg1_1__CVTFixedPos641_2, 0, { MCK_FPR32, MCK_GPR64, MCK_CVTFixedPos64 }, },
  { 1121 /* scvtf */, AArch64::SCVTFswi, Convert__Reg1_0__Reg1_1__CVTFixedPos321_2, 0, { MCK_FPR32, MCK_GPR32, MCK_CVTFixedPos32 }, },
  { 1121 /* scvtf */, AArch64::SCVTFdxi, Convert__Reg1_0__Reg1_1__CVTFixedPos641_2, 0, { MCK_FPR64, MCK_GPR64, MCK_CVTFixedPos64 }, },
  { 1121 /* scvtf */, AArch64::SCVTFdwi, Convert__Reg1_0__Reg1_1__CVTFixedPos321_2, 0, { MCK_FPR64, MCK_GPR32, MCK_CVTFixedPos32 }, },
  { 1127 /* sdiv */, AArch64::SDIVxxx, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64 }, },
  { 1127 /* sdiv */, AArch64::SDIVwww, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32 }, },
  { 1132 /* sev */, AArch64::HINTi, Convert__imm_4, 0, {  }, },
  { 1136 /* sevl */, AArch64::HINTi, Convert__imm_5, 0, {  }, },
  { 1141 /* shadd */, AArch64::SHADDvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 1141 /* shadd */, AArch64::SHADDvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 1141 /* shadd */, AArch64::SHADDvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 1141 /* shadd */, AArch64::SHADDvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 1141 /* shadd */, AArch64::SHADDvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 1141 /* shadd */, AArch64::SHADDvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 1147 /* shsub */, AArch64::SHSUBvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 1147 /* shsub */, AArch64::SHSUBvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 1147 /* shsub */, AArch64::SHSUBvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 1147 /* shsub */, AArch64::SHSUBvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 1147 /* shsub */, AArch64::SHSUBvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 1147 /* shsub */, AArch64::SHSUBvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 1153 /* smaddl */, AArch64::SMADDLxwwx, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3, 0, { MCK_GPR64, MCK_GPR32, MCK_GPR32, MCK_GPR64 }, },
  { 1160 /* smax */, AArch64::SMAXvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 1160 /* smax */, AArch64::SMAXvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 1160 /* smax */, AArch64::SMAXvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 1160 /* smax */, AArch64::SMAXvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 1160 /* smax */, AArch64::SMAXvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 1160 /* smax */, AArch64::SMAXvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 1165 /* smaxp */, AArch64::SMAXPvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 1165 /* smaxp */, AArch64::SMAXPvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 1165 /* smaxp */, AArch64::SMAXPvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 1165 /* smaxp */, AArch64::SMAXPvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 1165 /* smaxp */, AArch64::SMAXPvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 1165 /* smaxp */, AArch64::SMAXPvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 1171 /* smc */, AArch64::SMCi, Convert__UImm161_0, 0, { MCK_UImm16 }, },
  { 1175 /* smin */, AArch64::SMINvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 1175 /* smin */, AArch64::SMINvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 1175 /* smin */, AArch64::SMINvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 1175 /* smin */, AArch64::SMINvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 1175 /* smin */, AArch64::SMINvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 1175 /* smin */, AArch64::SMINvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 1180 /* sminp */, AArch64::SMINPvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 1180 /* sminp */, AArch64::SMINPvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 1180 /* sminp */, AArch64::SMINPvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 1180 /* sminp */, AArch64::SMINPvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 1180 /* sminp */, AArch64::SMINPvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 1180 /* sminp */, AArch64::SMINPvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 1186 /* smnegl */, AArch64::SMSUBLxwwx, Convert__Reg1_0__Reg1_1__Reg1_2__regXZR, 0, { MCK_GPR64, MCK_GPR32, MCK_GPR32 }, },
  { 1193 /* smsubl */, AArch64::SMSUBLxwwx, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3, 0, { MCK_GPR64, MCK_GPR32, MCK_GPR32, MCK_GPR64 }, },
  { 1200 /* smulh */, AArch64::SMULHxxx, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64 }, },
  { 1206 /* smull */, AArch64::SMADDLxwwx, Convert__Reg1_0__Reg1_1__Reg1_2__regXZR, 0, { MCK_GPR64, MCK_GPR32, MCK_GPR32 }, },
  { 1212 /* sqadd */, AArch64::SQADDhhh, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 1212 /* sqadd */, AArch64::SQADDbbb, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR8, MCK_FPR8, MCK_FPR8 }, },
  { 1212 /* sqadd */, AArch64::SQADDsss, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 1212 /* sqadd */, AArch64::SQADDddd, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 1212 /* sqadd */, AArch64::SQADDvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 1212 /* sqadd */, AArch64::SQADDvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 1212 /* sqadd */, AArch64::SQADDvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 1212 /* sqadd */, AArch64::SQADDvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 1212 /* sqadd */, AArch64::SQADDvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 1212 /* sqadd */, AArch64::SQADDvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 1212 /* sqadd */, AArch64::SQADDvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 1218 /* sqdmulh */, AArch64::SQDMULHvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 1218 /* sqdmulh */, AArch64::SQDMULHvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 1218 /* sqdmulh */, AArch64::SQDMULHvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 1218 /* sqdmulh */, AArch64::SQDMULHvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 1226 /* sqrdmulh */, AArch64::SQRDMULHvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 1226 /* sqrdmulh */, AArch64::SQRDMULHvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 1226 /* sqrdmulh */, AArch64::SQRDMULHvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 1226 /* sqrdmulh */, AArch64::SQRDMULHvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 1235 /* sqrshl */, AArch64::SQRSHLhhh, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 1235 /* sqrshl */, AArch64::SQRSHLbbb, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR8, MCK_FPR8, MCK_FPR8 }, },
  { 1235 /* sqrshl */, AArch64::SQRSHLsss, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 1235 /* sqrshl */, AArch64::SQRSHLddd, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 1235 /* sqrshl */, AArch64::SQRSHLvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 1235 /* sqrshl */, AArch64::SQRSHLvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 1235 /* sqrshl */, AArch64::SQRSHLvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 1235 /* sqrshl */, AArch64::SQRSHLvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 1235 /* sqrshl */, AArch64::SQRSHLvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 1235 /* sqrshl */, AArch64::SQRSHLvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 1235 /* sqrshl */, AArch64::SQRSHLvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 1242 /* sqshl */, AArch64::SQSHLhhh, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 1242 /* sqshl */, AArch64::SQSHLbbb, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR8, MCK_FPR8, MCK_FPR8 }, },
  { 1242 /* sqshl */, AArch64::SQSHLsss, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 1242 /* sqshl */, AArch64::SQSHLddd, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 1242 /* sqshl */, AArch64::SQSHLvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 1242 /* sqshl */, AArch64::SQSHLvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 1242 /* sqshl */, AArch64::SQSHLvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 1242 /* sqshl */, AArch64::SQSHLvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 1242 /* sqshl */, AArch64::SQSHLvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 1242 /* sqshl */, AArch64::SQSHLvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 1242 /* sqshl */, AArch64::SQSHLvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 1248 /* sqsub */, AArch64::SQSUBhhh, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 1248 /* sqsub */, AArch64::SQSUBbbb, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR8, MCK_FPR8, MCK_FPR8 }, },
  { 1248 /* sqsub */, AArch64::SQSUBsss, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 1248 /* sqsub */, AArch64::SQSUBddd, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 1248 /* sqsub */, AArch64::SQSUBvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 1248 /* sqsub */, AArch64::SQSUBvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 1248 /* sqsub */, AArch64::SQSUBvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 1248 /* sqsub */, AArch64::SQSUBvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 1248 /* sqsub */, AArch64::SQSUBvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 1248 /* sqsub */, AArch64::SQSUBvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 1248 /* sqsub */, AArch64::SQSUBvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 1254 /* srhadd */, AArch64::SRHADDvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 1254 /* srhadd */, AArch64::SRHADDvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 1254 /* srhadd */, AArch64::SRHADDvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 1254 /* srhadd */, AArch64::SRHADDvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 1254 /* srhadd */, AArch64::SRHADDvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 1254 /* srhadd */, AArch64::SRHADDvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 1261 /* srshl */, AArch64::SRSHLddd, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 1261 /* srshl */, AArch64::SRSHLvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 1261 /* srshl */, AArch64::SRSHLvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 1261 /* srshl */, AArch64::SRSHLvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 1261 /* srshl */, AArch64::SRSHLvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 1261 /* srshl */, AArch64::SRSHLvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 1261 /* srshl */, AArch64::SRSHLvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 1261 /* srshl */, AArch64::SRSHLvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 1267 /* sshl */, AArch64::SSHLddd, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 1267 /* sshl */, AArch64::SSHLvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 1267 /* sshl */, AArch64::SSHLvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 1267 /* sshl */, AArch64::SSHLvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 1267 /* sshl */, AArch64::SSHLvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 1267 /* sshl */, AArch64::SSHLvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 1267 /* sshl */, AArch64::SSHLvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 1267 /* sshl */, AArch64::SSHLvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 1272 /* stlr */, AArch64::STLR_dword, Convert__Reg1_0__GPR64xsp01_2, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp0, MCK__93_ }, },
  { 1272 /* stlr */, AArch64::STLR_word, Convert__Reg1_0__GPR64xsp01_2, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp0, MCK__93_ }, },
  { 1277 /* stlrb */, AArch64::STLR_byte, Convert__Reg1_0__GPR64xsp01_2, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp0, MCK__93_ }, },
  { 1283 /* stlrh */, AArch64::STLR_hword, Convert__Reg1_0__GPR64xsp01_2, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp0, MCK__93_ }, },
  { 1289 /* stlxp */, AArch64::STLXP_dword, Convert__Reg1_0__Reg1_1__Reg1_2__GPR64xsp01_4, 0, { MCK_GPR32, MCK_GPR64, MCK_GPR64, MCK__91_, MCK_GPR64xsp0, MCK__93_ }, },
  { 1289 /* stlxp */, AArch64::STLXP_word, Convert__Reg1_0__Reg1_1__Reg1_2__GPR64xsp01_4, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK__91_, MCK_GPR64xsp0, MCK__93_ }, },
  { 1295 /* stlxr */, AArch64::STLXR_dword, Convert__Reg1_0__Reg1_1__GPR64xsp01_3, 0, { MCK_GPR32, MCK_GPR64, MCK__91_, MCK_GPR64xsp0, MCK__93_ }, },
  { 1295 /* stlxr */, AArch64::STLXR_word, Convert__Reg1_0__Reg1_1__GPR64xsp01_3, 0, { MCK_GPR32, MCK_GPR32, MCK__91_, MCK_GPR64xsp0, MCK__93_ }, },
  { 1301 /* stlxrb */, AArch64::STLXR_byte, Convert__Reg1_0__Reg1_1__GPR64xsp01_3, 0, { MCK_GPR32, MCK_GPR32, MCK__91_, MCK_GPR64xsp0, MCK__93_ }, },
  { 1308 /* stlxrh */, AArch64::STLXR_hword, Convert__Reg1_0__Reg1_1__GPR64xsp01_3, 0, { MCK_GPR32, MCK_GPR32, MCK__91_, MCK_GPR64xsp0, MCK__93_ }, },
  { 1315 /* stnp */, AArch64::LSPair64_NonTemp_STR, Convert__Reg1_0__Reg1_1__Reg1_3__imm_0, 0, { MCK_GPR64, MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 1315 /* stnp */, AArch64::LSPair32_NonTemp_STR, Convert__Reg1_0__Reg1_1__Reg1_3__imm_0, 0, { MCK_GPR32, MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 1315 /* stnp */, AArch64::LSFPPair128_NonTemp_STR, Convert__Reg1_0__Reg1_1__Reg1_3__imm_0, 0, { MCK_FPR128, MCK_FPR128, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 1315 /* stnp */, AArch64::LSFPPair32_NonTemp_STR, Convert__Reg1_0__Reg1_1__Reg1_3__imm_0, 0, { MCK_FPR32, MCK_FPR32, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 1315 /* stnp */, AArch64::LSFPPair64_NonTemp_STR, Convert__Reg1_0__Reg1_1__Reg1_3__imm_0, 0, { MCK_FPR64, MCK_FPR64, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 1315 /* stnp */, AArch64::LSPair64_NonTemp_STR, Convert__Reg1_0__Reg1_1__Reg1_3__SImm7_Scaled81_4, 0, { MCK_GPR64, MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_SImm7_Scaled8, MCK__93_ }, },
  { 1315 /* stnp */, AArch64::LSPair32_NonTemp_STR, Convert__Reg1_0__Reg1_1__Reg1_3__SImm7_Scaled41_4, 0, { MCK_GPR32, MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm7_Scaled4, MCK__93_ }, },
  { 1315 /* stnp */, AArch64::LSFPPair128_NonTemp_STR, Convert__Reg1_0__Reg1_1__Reg1_3__SImm7_Scaled161_4, 0, { MCK_FPR128, MCK_FPR128, MCK__91_, MCK_GPR64xsp, MCK_SImm7_Scaled16, MCK__93_ }, },
  { 1315 /* stnp */, AArch64::LSFPPair32_NonTemp_STR, Convert__Reg1_0__Reg1_1__Reg1_3__SImm7_Scaled41_4, 0, { MCK_FPR32, MCK_FPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm7_Scaled4, MCK__93_ }, },
  { 1315 /* stnp */, AArch64::LSFPPair64_NonTemp_STR, Convert__Reg1_0__Reg1_1__Reg1_3__SImm7_Scaled81_4, 0, { MCK_FPR64, MCK_FPR64, MCK__91_, MCK_GPR64xsp, MCK_SImm7_Scaled8, MCK__93_ }, },
  { 1320 /* stp */, AArch64::LSPair64_STR, Convert__Reg1_0__Reg1_1__Reg1_3__imm_0, 0, { MCK_GPR64, MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 1320 /* stp */, AArch64::LSPair32_STR, Convert__Reg1_0__Reg1_1__Reg1_3__imm_0, 0, { MCK_GPR32, MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 1320 /* stp */, AArch64::LSFPPair128_STR, Convert__Reg1_0__Reg1_1__Reg1_3__imm_0, 0, { MCK_FPR128, MCK_FPR128, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 1320 /* stp */, AArch64::LSFPPair32_STR, Convert__Reg1_0__Reg1_1__Reg1_3__imm_0, 0, { MCK_FPR32, MCK_FPR32, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 1320 /* stp */, AArch64::LSFPPair64_STR, Convert__Reg1_0__Reg1_1__Reg1_3__imm_0, 0, { MCK_FPR64, MCK_FPR64, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 1320 /* stp */, AArch64::LSPair64_PostInd_STR, Convert__Reg1_3__Reg1_0__Reg1_1__Tie0__SImm7_Scaled81_5, 0, { MCK_GPR64, MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK__93_, MCK_SImm7_Scaled8 }, },
  { 1320 /* stp */, AArch64::LSPair64_STR, Convert__Reg1_0__Reg1_1__Reg1_3__SImm7_Scaled81_4, 0, { MCK_GPR64, MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_SImm7_Scaled8, MCK__93_ }, },
  { 1320 /* stp */, AArch64::LSPair32_PostInd_STR, Convert__Reg1_3__Reg1_0__Reg1_1__Tie0__SImm7_Scaled41_5, 0, { MCK_GPR32, MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK__93_, MCK_SImm7_Scaled4 }, },
  { 1320 /* stp */, AArch64::LSPair32_STR, Convert__Reg1_0__Reg1_1__Reg1_3__SImm7_Scaled41_4, 0, { MCK_GPR32, MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm7_Scaled4, MCK__93_ }, },
  { 1320 /* stp */, AArch64::LSFPPair128_PostInd_STR, Convert__Reg1_3__Reg1_0__Reg1_1__Tie0__SImm7_Scaled161_5, 0, { MCK_FPR128, MCK_FPR128, MCK__91_, MCK_GPR64xsp, MCK__93_, MCK_SImm7_Scaled16 }, },
  { 1320 /* stp */, AArch64::LSFPPair128_STR, Convert__Reg1_0__Reg1_1__Reg1_3__SImm7_Scaled161_4, 0, { MCK_FPR128, MCK_FPR128, MCK__91_, MCK_GPR64xsp, MCK_SImm7_Scaled16, MCK__93_ }, },
  { 1320 /* stp */, AArch64::LSFPPair32_PostInd_STR, Convert__Reg1_3__Reg1_0__Reg1_1__Tie0__SImm7_Scaled41_5, 0, { MCK_FPR32, MCK_FPR32, MCK__91_, MCK_GPR64xsp, MCK__93_, MCK_SImm7_Scaled4 }, },
  { 1320 /* stp */, AArch64::LSFPPair32_STR, Convert__Reg1_0__Reg1_1__Reg1_3__SImm7_Scaled41_4, 0, { MCK_FPR32, MCK_FPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm7_Scaled4, MCK__93_ }, },
  { 1320 /* stp */, AArch64::LSFPPair64_PostInd_STR, Convert__Reg1_3__Reg1_0__Reg1_1__Tie0__SImm7_Scaled81_5, 0, { MCK_FPR64, MCK_FPR64, MCK__91_, MCK_GPR64xsp, MCK__93_, MCK_SImm7_Scaled8 }, },
  { 1320 /* stp */, AArch64::LSFPPair64_STR, Convert__Reg1_0__Reg1_1__Reg1_3__SImm7_Scaled81_4, 0, { MCK_FPR64, MCK_FPR64, MCK__91_, MCK_GPR64xsp, MCK_SImm7_Scaled8, MCK__93_ }, },
  { 1320 /* stp */, AArch64::LSPair64_PreInd_STR, Convert__Reg1_3__Reg1_0__Reg1_1__Tie0__SImm7_Scaled81_4, 0, { MCK_GPR64, MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_SImm7_Scaled8, MCK__93_, MCK__EXCLAIM_ }, },
  { 1320 /* stp */, AArch64::LSPair32_PreInd_STR, Convert__Reg1_3__Reg1_0__Reg1_1__Tie0__SImm7_Scaled41_4, 0, { MCK_GPR32, MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm7_Scaled4, MCK__93_, MCK__EXCLAIM_ }, },
  { 1320 /* stp */, AArch64::LSFPPair128_PreInd_STR, Convert__Reg1_3__Reg1_0__Reg1_1__Tie0__SImm7_Scaled161_4, 0, { MCK_FPR128, MCK_FPR128, MCK__91_, MCK_GPR64xsp, MCK_SImm7_Scaled16, MCK__93_, MCK__EXCLAIM_ }, },
  { 1320 /* stp */, AArch64::LSFPPair32_PreInd_STR, Convert__Reg1_3__Reg1_0__Reg1_1__Tie0__SImm7_Scaled41_4, 0, { MCK_FPR32, MCK_FPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm7_Scaled4, MCK__93_, MCK__EXCLAIM_ }, },
  { 1320 /* stp */, AArch64::LSFPPair64_PreInd_STR, Convert__Reg1_3__Reg1_0__Reg1_1__Tie0__SImm7_Scaled81_4, 0, { MCK_FPR64, MCK_FPR64, MCK__91_, MCK_GPR64xsp, MCK_SImm7_Scaled8, MCK__93_, MCK__EXCLAIM_ }, },
  { 1324 /* str */, AArch64::LS64_STR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 1324 /* str */, AArch64::LS32_STR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 1324 /* str */, AArch64::LSFP16_STR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_FPR16, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 1324 /* str */, AArch64::LSFP8_STR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_FPR8, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 1324 /* str */, AArch64::LSFP128_STR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_FPR128, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 1324 /* str */, AArch64::LSFP32_STR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_FPR32, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 1324 /* str */, AArch64::LSFP64_STR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_FPR64, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 1324 /* str */, AArch64::LS64_PostInd_STR, Convert__Reg1_2__Reg1_0__Tie0__SImm91_4, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK__93_, MCK_SImm9 }, },
  { 1324 /* str */, AArch64::LS64_Xm_RegOffset_STR, Convert__Reg1_0__Reg1_2__Reg1_3__imm_2, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK__93_ }, },
  { 1324 /* str */, AArch64::LS64_STR, Convert__Reg1_0__Reg1_2__OffsetUImm12_81_3, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_OffsetUImm12_8, MCK__93_ }, },
  { 1324 /* str */, AArch64::LS32_PostInd_STR, Convert__Reg1_2__Reg1_0__Tie0__SImm91_4, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK__93_, MCK_SImm9 }, },
  { 1324 /* str */, AArch64::LS32_Xm_RegOffset_STR, Convert__Reg1_0__Reg1_2__Reg1_3__imm_2, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK__93_ }, },
  { 1324 /* str */, AArch64::LS32_STR, Convert__Reg1_0__Reg1_2__OffsetUImm12_41_3, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_OffsetUImm12_4, MCK__93_ }, },
  { 1324 /* str */, AArch64::LSFP16_PostInd_STR, Convert__Reg1_2__Reg1_0__Tie0__SImm91_4, 0, { MCK_FPR16, MCK__91_, MCK_GPR64xsp, MCK__93_, MCK_SImm9 }, },
  { 1324 /* str */, AArch64::LSFP16_Xm_RegOffset_STR, Convert__Reg1_0__Reg1_2__Reg1_3__imm_2, 0, { MCK_FPR16, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK__93_ }, },
  { 1324 /* str */, AArch64::LSFP16_STR, Convert__Reg1_0__Reg1_2__OffsetUImm12_21_3, 0, { MCK_FPR16, MCK__91_, MCK_GPR64xsp, MCK_OffsetUImm12_2, MCK__93_ }, },
  { 1324 /* str */, AArch64::LSFP8_PostInd_STR, Convert__Reg1_2__Reg1_0__Tie0__SImm91_4, 0, { MCK_FPR8, MCK__91_, MCK_GPR64xsp, MCK__93_, MCK_SImm9 }, },
  { 1324 /* str */, AArch64::LSFP8_Xm_RegOffset_STR, Convert__Reg1_0__Reg1_2__Reg1_3__imm_2, 0, { MCK_FPR8, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK__93_ }, },
  { 1324 /* str */, AArch64::LSFP8_STR, Convert__Reg1_0__Reg1_2__OffsetUImm12_11_3, 0, { MCK_FPR8, MCK__91_, MCK_GPR64xsp, MCK_OffsetUImm12_1, MCK__93_ }, },
  { 1324 /* str */, AArch64::LSFP128_PostInd_STR, Convert__Reg1_2__Reg1_0__Tie0__SImm91_4, 0, { MCK_FPR128, MCK__91_, MCK_GPR64xsp, MCK__93_, MCK_SImm9 }, },
  { 1324 /* str */, AArch64::LSFP128_Xm_RegOffset_STR, Convert__Reg1_0__Reg1_2__Reg1_3__imm_2, 0, { MCK_FPR128, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK__93_ }, },
  { 1324 /* str */, AArch64::LSFP128_STR, Convert__Reg1_0__Reg1_2__OffsetUImm12_161_3, 0, { MCK_FPR128, MCK__91_, MCK_GPR64xsp, MCK_OffsetUImm12_16, MCK__93_ }, },
  { 1324 /* str */, AArch64::LSFP32_PostInd_STR, Convert__Reg1_2__Reg1_0__Tie0__SImm91_4, 0, { MCK_FPR32, MCK__91_, MCK_GPR64xsp, MCK__93_, MCK_SImm9 }, },
  { 1324 /* str */, AArch64::LSFP32_Xm_RegOffset_STR, Convert__Reg1_0__Reg1_2__Reg1_3__imm_2, 0, { MCK_FPR32, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK__93_ }, },
  { 1324 /* str */, AArch64::LSFP32_STR, Convert__Reg1_0__Reg1_2__OffsetUImm12_41_3, 0, { MCK_FPR32, MCK__91_, MCK_GPR64xsp, MCK_OffsetUImm12_4, MCK__93_ }, },
  { 1324 /* str */, AArch64::LSFP64_PostInd_STR, Convert__Reg1_2__Reg1_0__Tie0__SImm91_4, 0, { MCK_FPR64, MCK__91_, MCK_GPR64xsp, MCK__93_, MCK_SImm9 }, },
  { 1324 /* str */, AArch64::LSFP64_Xm_RegOffset_STR, Convert__Reg1_0__Reg1_2__Reg1_3__imm_2, 0, { MCK_FPR64, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK__93_ }, },
  { 1324 /* str */, AArch64::LSFP64_STR, Convert__Reg1_0__Reg1_2__OffsetUImm12_81_3, 0, { MCK_FPR64, MCK__91_, MCK_GPR64xsp, MCK_OffsetUImm12_8, MCK__93_ }, },
  { 1324 /* str */, AArch64::LS64_Xm_RegOffset_STR, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_8_Xm1_4, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK_AddrRegExtend_8_Xm, MCK__93_ }, },
  { 1324 /* str */, AArch64::LS64_Wm_RegOffset_STR, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_8_Wm1_4, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_GPR32, MCK_AddrRegExtend_8_Wm, MCK__93_ }, },
  { 1324 /* str */, AArch64::LS64_PreInd_STR, Convert__Reg1_2__Reg1_0__Tie0__SImm91_3, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_, MCK__EXCLAIM_ }, },
  { 1324 /* str */, AArch64::LS32_Xm_RegOffset_STR, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_4_Xm1_4, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK_AddrRegExtend_4_Xm, MCK__93_ }, },
  { 1324 /* str */, AArch64::LS32_Wm_RegOffset_STR, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_4_Wm1_4, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_GPR32, MCK_AddrRegExtend_4_Wm, MCK__93_ }, },
  { 1324 /* str */, AArch64::LS32_PreInd_STR, Convert__Reg1_2__Reg1_0__Tie0__SImm91_3, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_, MCK__EXCLAIM_ }, },
  { 1324 /* str */, AArch64::LSFP16_Xm_RegOffset_STR, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_2_Xm1_4, 0, { MCK_FPR16, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK_AddrRegExtend_2_Xm, MCK__93_ }, },
  { 1324 /* str */, AArch64::LSFP16_Wm_RegOffset_STR, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_2_Wm1_4, 0, { MCK_FPR16, MCK__91_, MCK_GPR64xsp, MCK_GPR32, MCK_AddrRegExtend_2_Wm, MCK__93_ }, },
  { 1324 /* str */, AArch64::LSFP16_PreInd_STR, Convert__Reg1_2__Reg1_0__Tie0__SImm91_3, 0, { MCK_FPR16, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_, MCK__EXCLAIM_ }, },
  { 1324 /* str */, AArch64::LSFP8_Xm_RegOffset_STR, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_1_Xm1_4, 0, { MCK_FPR8, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK_AddrRegExtend_1_Xm, MCK__93_ }, },
  { 1324 /* str */, AArch64::LSFP8_Wm_RegOffset_STR, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_1_Wm1_4, 0, { MCK_FPR8, MCK__91_, MCK_GPR64xsp, MCK_GPR32, MCK_AddrRegExtend_1_Wm, MCK__93_ }, },
  { 1324 /* str */, AArch64::LSFP8_PreInd_STR, Convert__Reg1_2__Reg1_0__Tie0__SImm91_3, 0, { MCK_FPR8, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_, MCK__EXCLAIM_ }, },
  { 1324 /* str */, AArch64::LSFP128_Xm_RegOffset_STR, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_16_Xm1_4, 0, { MCK_FPR128, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK_AddrRegExtend_16_Xm, MCK__93_ }, },
  { 1324 /* str */, AArch64::LSFP128_Wm_RegOffset_STR, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_16_Wm1_4, 0, { MCK_FPR128, MCK__91_, MCK_GPR64xsp, MCK_GPR32, MCK_AddrRegExtend_16_Wm, MCK__93_ }, },
  { 1324 /* str */, AArch64::LSFP128_PreInd_STR, Convert__Reg1_2__Reg1_0__Tie0__SImm91_3, 0, { MCK_FPR128, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_, MCK__EXCLAIM_ }, },
  { 1324 /* str */, AArch64::LSFP32_Xm_RegOffset_STR, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_4_Xm1_4, 0, { MCK_FPR32, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK_AddrRegExtend_4_Xm, MCK__93_ }, },
  { 1324 /* str */, AArch64::LSFP32_Wm_RegOffset_STR, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_4_Wm1_4, 0, { MCK_FPR32, MCK__91_, MCK_GPR64xsp, MCK_GPR32, MCK_AddrRegExtend_4_Wm, MCK__93_ }, },
  { 1324 /* str */, AArch64::LSFP32_PreInd_STR, Convert__Reg1_2__Reg1_0__Tie0__SImm91_3, 0, { MCK_FPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_, MCK__EXCLAIM_ }, },
  { 1324 /* str */, AArch64::LSFP64_Xm_RegOffset_STR, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_8_Xm1_4, 0, { MCK_FPR64, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK_AddrRegExtend_8_Xm, MCK__93_ }, },
  { 1324 /* str */, AArch64::LSFP64_Wm_RegOffset_STR, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_8_Wm1_4, 0, { MCK_FPR64, MCK__91_, MCK_GPR64xsp, MCK_GPR32, MCK_AddrRegExtend_8_Wm, MCK__93_ }, },
  { 1324 /* str */, AArch64::LSFP64_PreInd_STR, Convert__Reg1_2__Reg1_0__Tie0__SImm91_3, 0, { MCK_FPR64, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_, MCK__EXCLAIM_ }, },
  { 1328 /* strb */, AArch64::LS8_STR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 1328 /* strb */, AArch64::LS8_PostInd_STR, Convert__Reg1_2__Reg1_0__Tie0__SImm91_4, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK__93_, MCK_SImm9 }, },
  { 1328 /* strb */, AArch64::LS8_Xm_RegOffset_STR, Convert__Reg1_0__Reg1_2__Reg1_3__imm_2, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK__93_ }, },
  { 1328 /* strb */, AArch64::LS8_STR, Convert__Reg1_0__Reg1_2__OffsetUImm12_11_3, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_OffsetUImm12_1, MCK__93_ }, },
  { 1328 /* strb */, AArch64::LS8_Xm_RegOffset_STR, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_1_Xm1_4, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK_AddrRegExtend_1_Xm, MCK__93_ }, },
  { 1328 /* strb */, AArch64::LS8_Wm_RegOffset_STR, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_1_Wm1_4, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_GPR32, MCK_AddrRegExtend_1_Wm, MCK__93_ }, },
  { 1328 /* strb */, AArch64::LS8_PreInd_STR, Convert__Reg1_2__Reg1_0__Tie0__SImm91_3, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_, MCK__EXCLAIM_ }, },
  { 1333 /* strh */, AArch64::LS16_STR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 1333 /* strh */, AArch64::LS16_PostInd_STR, Convert__Reg1_2__Reg1_0__Tie0__SImm91_4, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK__93_, MCK_SImm9 }, },
  { 1333 /* strh */, AArch64::LS16_Xm_RegOffset_STR, Convert__Reg1_0__Reg1_2__Reg1_3__imm_2, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK__93_ }, },
  { 1333 /* strh */, AArch64::LS16_STR, Convert__Reg1_0__Reg1_2__OffsetUImm12_21_3, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_OffsetUImm12_2, MCK__93_ }, },
  { 1333 /* strh */, AArch64::LS16_Xm_RegOffset_STR, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_2_Xm1_4, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_GPR64, MCK_AddrRegExtend_2_Xm, MCK__93_ }, },
  { 1333 /* strh */, AArch64::LS16_Wm_RegOffset_STR, Convert__Reg1_0__Reg1_2__Reg1_3__AddrRegExtend_2_Wm1_4, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_GPR32, MCK_AddrRegExtend_2_Wm, MCK__93_ }, },
  { 1333 /* strh */, AArch64::LS16_PreInd_STR, Convert__Reg1_2__Reg1_0__Tie0__SImm91_3, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_, MCK__EXCLAIM_ }, },
  { 1338 /* sttr */, AArch64::LS64_UnPriv_STR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 1338 /* sttr */, AArch64::LS32_UnPriv_STR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 1338 /* sttr */, AArch64::LS64_UnPriv_STR, Convert__Reg1_0__Reg1_2__SImm91_3, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_ }, },
  { 1338 /* sttr */, AArch64::LS32_UnPriv_STR, Convert__Reg1_0__Reg1_2__SImm91_3, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_ }, },
  { 1343 /* sttrb */, AArch64::LS8_UnPriv_STR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 1343 /* sttrb */, AArch64::LS8_UnPriv_STR, Convert__Reg1_0__Reg1_2__SImm91_3, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_ }, },
  { 1349 /* sttrh */, AArch64::LS16_UnPriv_STR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 1349 /* sttrh */, AArch64::LS16_UnPriv_STR, Convert__Reg1_0__Reg1_2__SImm91_3, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_ }, },
  { 1355 /* stur */, AArch64::LS64_STUR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 1355 /* stur */, AArch64::LS32_STUR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 1355 /* stur */, AArch64::LSFP16_STUR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_FPR16, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 1355 /* stur */, AArch64::LSFP8_STUR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_FPR8, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 1355 /* stur */, AArch64::LSFP128_STUR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_FPR128, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 1355 /* stur */, AArch64::LSFP32_STUR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_FPR32, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 1355 /* stur */, AArch64::LSFP64_STUR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_FPR64, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 1355 /* stur */, AArch64::LS64_STUR, Convert__Reg1_0__Reg1_2__SImm91_3, 0, { MCK_GPR64, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_ }, },
  { 1355 /* stur */, AArch64::LS32_STUR, Convert__Reg1_0__Reg1_2__SImm91_3, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_ }, },
  { 1355 /* stur */, AArch64::LSFP16_STUR, Convert__Reg1_0__Reg1_2__SImm91_3, 0, { MCK_FPR16, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_ }, },
  { 1355 /* stur */, AArch64::LSFP8_STUR, Convert__Reg1_0__Reg1_2__SImm91_3, 0, { MCK_FPR8, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_ }, },
  { 1355 /* stur */, AArch64::LSFP128_STUR, Convert__Reg1_0__Reg1_2__SImm91_3, 0, { MCK_FPR128, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_ }, },
  { 1355 /* stur */, AArch64::LSFP32_STUR, Convert__Reg1_0__Reg1_2__SImm91_3, 0, { MCK_FPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_ }, },
  { 1355 /* stur */, AArch64::LSFP64_STUR, Convert__Reg1_0__Reg1_2__SImm91_3, 0, { MCK_FPR64, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_ }, },
  { 1360 /* sturb */, AArch64::LS8_STUR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 1360 /* sturb */, AArch64::LS8_STUR, Convert__Reg1_0__Reg1_2__SImm91_3, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_ }, },
  { 1366 /* sturh */, AArch64::LS16_STUR, Convert__Reg1_0__Reg1_2__imm_0, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK__93_ }, },
  { 1366 /* sturh */, AArch64::LS16_STUR, Convert__Reg1_0__Reg1_2__SImm91_3, 0, { MCK_GPR32, MCK__91_, MCK_GPR64xsp, MCK_SImm9, MCK__93_ }, },
  { 1372 /* stxp */, AArch64::STXP_dword, Convert__Reg1_0__Reg1_1__Reg1_2__GPR64xsp01_4, 0, { MCK_GPR32, MCK_GPR64, MCK_GPR64, MCK__91_, MCK_GPR64xsp0, MCK__93_ }, },
  { 1372 /* stxp */, AArch64::STXP_word, Convert__Reg1_0__Reg1_1__Reg1_2__GPR64xsp01_4, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK__91_, MCK_GPR64xsp0, MCK__93_ }, },
  { 1377 /* stxr */, AArch64::STXR_dword, Convert__Reg1_0__Reg1_1__GPR64xsp01_3, 0, { MCK_GPR32, MCK_GPR64, MCK__91_, MCK_GPR64xsp0, MCK__93_ }, },
  { 1377 /* stxr */, AArch64::STXR_word, Convert__Reg1_0__Reg1_1__GPR64xsp01_3, 0, { MCK_GPR32, MCK_GPR32, MCK__91_, MCK_GPR64xsp0, MCK__93_ }, },
  { 1382 /* stxrb */, AArch64::STXR_byte, Convert__Reg1_0__Reg1_1__GPR64xsp01_3, 0, { MCK_GPR32, MCK_GPR32, MCK__91_, MCK_GPR64xsp0, MCK__93_ }, },
  { 1388 /* stxrh */, AArch64::STXR_hword, Convert__Reg1_0__Reg1_1__GPR64xsp01_3, 0, { MCK_GPR32, MCK_GPR32, MCK__91_, MCK_GPR64xsp0, MCK__93_ }, },
  { 1394 /* sub */, AArch64::SUBxxx_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__imm_0, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64 }, },
  { 1394 /* sub */, AArch64::SUBxxi_lsl0_s, Convert__Reg1_0__Reg1_1__AddSubImmLSL01_2, 0, { MCK_GPR64xsp, MCK_GPR64xsp, MCK_AddSubImmLSL0 }, },
  { 1394 /* sub */, AArch64::SUBxxi_lsl12_s, Convert__Reg1_0__Reg1_1__AddSubImmLSL121_2, 0, { MCK_GPR64xsp, MCK_GPR64xsp, MCK_AddSubImmLSL12 }, },
  { 1394 /* sub */, AArch64::SUBwww_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__imm_0, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32 }, },
  { 1394 /* sub */, AArch64::SUBwwi_lsl0_s, Convert__Reg1_0__Reg1_1__AddSubImmLSL01_2, 0, { MCK_GPR32wsp, MCK_GPR32wsp, MCK_AddSubImmLSL0 }, },
  { 1394 /* sub */, AArch64::SUBwwi_lsl12_s, Convert__Reg1_0__Reg1_1__AddSubImmLSL121_2, 0, { MCK_GPR32wsp, MCK_GPR32wsp, MCK_AddSubImmLSL12 }, },
  { 1394 /* sub */, AArch64::SUBxxx_uxtx, Convert__Reg1_0__Reg1_1__Reg1_2__imm_0, 0, { MCK_Rxsp, MCK_GPR64xsp, MCK_GPR64 }, },
  { 1394 /* sub */, AArch64::SUBxxx_uxtx, Convert__Reg1_0__Reg1_1__Reg1_2__imm_0, 0, { MCK_GPR64xsp, MCK_Rxsp, MCK_GPR64 }, },
  { 1394 /* sub */, AArch64::SUBwww_uxtw, Convert__Reg1_0__Reg1_1__Reg1_2__imm_0, 0, { MCK_Rwsp, MCK_GPR32wsp, MCK_GPR32 }, },
  { 1394 /* sub */, AArch64::SUBwww_uxtw, Convert__Reg1_0__Reg1_1__Reg1_2__imm_0, 0, { MCK_GPR32wsp, MCK_Rwsp, MCK_GPR32 }, },
  { 1394 /* sub */, AArch64::SUBddd, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 1394 /* sub */, AArch64::SUBxxx_asr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftASRi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftASRi64 }, },
  { 1394 /* sub */, AArch64::SUBxxx_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSLi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftLSLi64 }, },
  { 1394 /* sub */, AArch64::SUBxxx_lsr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSRi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftLSRi64 }, },
  { 1394 /* sub */, AArch64::SUBxxx_uxtx, Convert__Reg1_0__Reg1_1__Reg1_2__RegExtendLSL1_3, 0, { MCK_Rxsp, MCK_GPR64xsp, MCK_GPR64, MCK_RegExtendLSL }, },
  { 1394 /* sub */, AArch64::SUBxxx_uxtx, Convert__Reg1_0__Reg1_1__Reg1_2__RegExtendLSL1_3, 0, { MCK_GPR64xsp, MCK_Rxsp, MCK_GPR64, MCK_RegExtendLSL }, },
  { 1394 /* sub */, AArch64::SUBxxx_sxtx, Convert__Reg1_0__Reg1_1__Reg1_2__SXTX1_3, 0, { MCK_GPR64xsp, MCK_GPR64xsp, MCK_GPR64, MCK_SXTX }, },
  { 1394 /* sub */, AArch64::SUBxxx_uxtx, Convert__Reg1_0__Reg1_1__Reg1_2__UXTX1_3, 0, { MCK_GPR64xsp, MCK_GPR64xsp, MCK_GPR64, MCK_UXTX }, },
  { 1394 /* sub */, AArch64::SUBxxw_sxtb, Convert__Reg1_0__Reg1_1__Reg1_2__SXTB1_3, 0, { MCK_GPR64xsp, MCK_GPR64xsp, MCK_GPR32, MCK_SXTB }, },
  { 1394 /* sub */, AArch64::SUBxxw_sxth, Convert__Reg1_0__Reg1_1__Reg1_2__SXTH1_3, 0, { MCK_GPR64xsp, MCK_GPR64xsp, MCK_GPR32, MCK_SXTH }, },
  { 1394 /* sub */, AArch64::SUBxxw_sxtw, Convert__Reg1_0__Reg1_1__Reg1_2__SXTW1_3, 0, { MCK_GPR64xsp, MCK_GPR64xsp, MCK_GPR32, MCK_SXTW }, },
  { 1394 /* sub */, AArch64::SUBxxw_uxtb, Convert__Reg1_0__Reg1_1__Reg1_2__UXTB1_3, 0, { MCK_GPR64xsp, MCK_GPR64xsp, MCK_GPR32, MCK_UXTB }, },
  { 1394 /* sub */, AArch64::SUBxxw_uxth, Convert__Reg1_0__Reg1_1__Reg1_2__UXTH1_3, 0, { MCK_GPR64xsp, MCK_GPR64xsp, MCK_GPR32, MCK_UXTH }, },
  { 1394 /* sub */, AArch64::SUBxxw_uxtw, Convert__Reg1_0__Reg1_1__Reg1_2__UXTW1_3, 0, { MCK_GPR64xsp, MCK_GPR64xsp, MCK_GPR32, MCK_UXTW }, },
  { 1394 /* sub */, AArch64::SUBwww_asr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftASRi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftASRi32 }, },
  { 1394 /* sub */, AArch64::SUBwww_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSLi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftLSLi32 }, },
  { 1394 /* sub */, AArch64::SUBwww_lsr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSRi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftLSRi32 }, },
  { 1394 /* sub */, AArch64::SUBwww_uxtw, Convert__Reg1_0__Reg1_1__Reg1_2__RegExtendLSL1_3, 0, { MCK_Rwsp, MCK_GPR32wsp, MCK_GPR32, MCK_RegExtendLSL }, },
  { 1394 /* sub */, AArch64::SUBwww_uxtw, Convert__Reg1_0__Reg1_1__Reg1_2__RegExtendLSL1_3, 0, { MCK_GPR32wsp, MCK_Rwsp, MCK_GPR32, MCK_RegExtendLSL }, },
  { 1394 /* sub */, AArch64::SUBwww_sxtb, Convert__Reg1_0__Reg1_1__Reg1_2__SXTB1_3, 0, { MCK_GPR32wsp, MCK_GPR32wsp, MCK_GPR32, MCK_SXTB }, },
  { 1394 /* sub */, AArch64::SUBwww_sxth, Convert__Reg1_0__Reg1_1__Reg1_2__SXTH1_3, 0, { MCK_GPR32wsp, MCK_GPR32wsp, MCK_GPR32, MCK_SXTH }, },
  { 1394 /* sub */, AArch64::SUBwww_sxtw, Convert__Reg1_0__Reg1_1__Reg1_2__SXTW1_3, 0, { MCK_GPR32wsp, MCK_GPR32wsp, MCK_GPR32, MCK_SXTW }, },
  { 1394 /* sub */, AArch64::SUBwww_sxtx, Convert__Reg1_0__Reg1_1__Reg1_2__SXTX1_3, 0, { MCK_GPR32wsp, MCK_GPR32wsp, MCK_GPR32, MCK_SXTX }, },
  { 1394 /* sub */, AArch64::SUBwww_uxtb, Convert__Reg1_0__Reg1_1__Reg1_2__UXTB1_3, 0, { MCK_GPR32wsp, MCK_GPR32wsp, MCK_GPR32, MCK_UXTB }, },
  { 1394 /* sub */, AArch64::SUBwww_uxth, Convert__Reg1_0__Reg1_1__Reg1_2__UXTH1_3, 0, { MCK_GPR32wsp, MCK_GPR32wsp, MCK_GPR32, MCK_UXTH }, },
  { 1394 /* sub */, AArch64::SUBwww_uxtw, Convert__Reg1_0__Reg1_1__Reg1_2__UXTW1_3, 0, { MCK_GPR32wsp, MCK_GPR32wsp, MCK_GPR32, MCK_UXTW }, },
  { 1394 /* sub */, AArch64::SUBwww_uxtx, Convert__Reg1_0__Reg1_1__Reg1_2__UXTX1_3, 0, { MCK_GPR32wsp, MCK_GPR32wsp, MCK_GPR32, MCK_UXTX }, },
  { 1394 /* sub */, AArch64::SUBvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 1394 /* sub */, AArch64::SUBvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 1394 /* sub */, AArch64::SUBvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 1394 /* sub */, AArch64::SUBvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 1394 /* sub */, AArch64::SUBvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 1394 /* sub */, AArch64::SUBvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 1394 /* sub */, AArch64::SUBvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 1398 /* subs */, AArch64::SUBSxxx_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__imm_0, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64 }, },
  { 1398 /* subs */, AArch64::SUBSxxx_uxtx, Convert__Reg1_0__Reg1_1__Reg1_2__imm_0, 0, { MCK_GPR64, MCK_Rxsp, MCK_GPR64 }, },
  { 1398 /* subs */, AArch64::SUBxxi_lsl0_S, Convert__Reg1_0__Reg1_1__AddSubImmLSL01_2, 0, { MCK_GPR64, MCK_GPR64xsp, MCK_AddSubImmLSL0 }, },
  { 1398 /* subs */, AArch64::SUBxxi_lsl12_S, Convert__Reg1_0__Reg1_1__AddSubImmLSL121_2, 0, { MCK_GPR64, MCK_GPR64xsp, MCK_AddSubImmLSL12 }, },
  { 1398 /* subs */, AArch64::SUBSwww_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__imm_0, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32 }, },
  { 1398 /* subs */, AArch64::SUBSwww_uxtw, Convert__Reg1_0__Reg1_1__Reg1_2__imm_0, 0, { MCK_GPR32, MCK_Rwsp, MCK_GPR32 }, },
  { 1398 /* subs */, AArch64::SUBwwi_lsl0_S, Convert__Reg1_0__Reg1_1__AddSubImmLSL01_2, 0, { MCK_GPR32, MCK_GPR32wsp, MCK_AddSubImmLSL0 }, },
  { 1398 /* subs */, AArch64::SUBwwi_lsl12_S, Convert__Reg1_0__Reg1_1__AddSubImmLSL121_2, 0, { MCK_GPR32, MCK_GPR32wsp, MCK_AddSubImmLSL12 }, },
  { 1398 /* subs */, AArch64::SUBSxxx_asr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftASRi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftASRi64 }, },
  { 1398 /* subs */, AArch64::SUBSxxx_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSLi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftLSLi64 }, },
  { 1398 /* subs */, AArch64::SUBSxxx_lsr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSRi641_3, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64, MCK_ShiftLSRi64 }, },
  { 1398 /* subs */, AArch64::SUBSxxx_uxtx, Convert__Reg1_0__Reg1_1__Reg1_2__RegExtendLSL1_3, 0, { MCK_GPR64, MCK_Rxsp, MCK_GPR64, MCK_RegExtendLSL }, },
  { 1398 /* subs */, AArch64::SUBSxxx_sxtx, Convert__Reg1_0__Reg1_1__Reg1_2__SXTX1_3, 0, { MCK_GPR64, MCK_GPR64xsp, MCK_GPR64, MCK_SXTX }, },
  { 1398 /* subs */, AArch64::SUBSxxx_uxtx, Convert__Reg1_0__Reg1_1__Reg1_2__UXTX1_3, 0, { MCK_GPR64, MCK_GPR64xsp, MCK_GPR64, MCK_UXTX }, },
  { 1398 /* subs */, AArch64::SUBSxxw_sxtb, Convert__Reg1_0__Reg1_1__Reg1_2__SXTB1_3, 0, { MCK_GPR64, MCK_GPR64xsp, MCK_GPR32, MCK_SXTB }, },
  { 1398 /* subs */, AArch64::SUBSxxw_sxth, Convert__Reg1_0__Reg1_1__Reg1_2__SXTH1_3, 0, { MCK_GPR64, MCK_GPR64xsp, MCK_GPR32, MCK_SXTH }, },
  { 1398 /* subs */, AArch64::SUBSxxw_sxtw, Convert__Reg1_0__Reg1_1__Reg1_2__SXTW1_3, 0, { MCK_GPR64, MCK_GPR64xsp, MCK_GPR32, MCK_SXTW }, },
  { 1398 /* subs */, AArch64::SUBSxxw_uxtb, Convert__Reg1_0__Reg1_1__Reg1_2__UXTB1_3, 0, { MCK_GPR64, MCK_GPR64xsp, MCK_GPR32, MCK_UXTB }, },
  { 1398 /* subs */, AArch64::SUBSxxw_uxth, Convert__Reg1_0__Reg1_1__Reg1_2__UXTH1_3, 0, { MCK_GPR64, MCK_GPR64xsp, MCK_GPR32, MCK_UXTH }, },
  { 1398 /* subs */, AArch64::SUBSxxw_uxtw, Convert__Reg1_0__Reg1_1__Reg1_2__UXTW1_3, 0, { MCK_GPR64, MCK_GPR64xsp, MCK_GPR32, MCK_UXTW }, },
  { 1398 /* subs */, AArch64::SUBSwww_asr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftASRi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftASRi32 }, },
  { 1398 /* subs */, AArch64::SUBSwww_lsl, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSLi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftLSLi32 }, },
  { 1398 /* subs */, AArch64::SUBSwww_lsr, Convert__Reg1_0__Reg1_1__Reg1_2__ShiftLSRi321_3, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32, MCK_ShiftLSRi32 }, },
  { 1398 /* subs */, AArch64::SUBSwww_uxtw, Convert__Reg1_0__Reg1_1__Reg1_2__RegExtendLSL1_3, 0, { MCK_GPR32, MCK_Rwsp, MCK_GPR32, MCK_RegExtendLSL }, },
  { 1398 /* subs */, AArch64::SUBSwww_sxtb, Convert__Reg1_0__Reg1_1__Reg1_2__SXTB1_3, 0, { MCK_GPR32, MCK_GPR32wsp, MCK_GPR32, MCK_SXTB }, },
  { 1398 /* subs */, AArch64::SUBSwww_sxth, Convert__Reg1_0__Reg1_1__Reg1_2__SXTH1_3, 0, { MCK_GPR32, MCK_GPR32wsp, MCK_GPR32, MCK_SXTH }, },
  { 1398 /* subs */, AArch64::SUBSwww_sxtw, Convert__Reg1_0__Reg1_1__Reg1_2__SXTW1_3, 0, { MCK_GPR32, MCK_GPR32wsp, MCK_GPR32, MCK_SXTW }, },
  { 1398 /* subs */, AArch64::SUBSwww_sxtx, Convert__Reg1_0__Reg1_1__Reg1_2__SXTX1_3, 0, { MCK_GPR32, MCK_GPR32wsp, MCK_GPR32, MCK_SXTX }, },
  { 1398 /* subs */, AArch64::SUBSwww_uxtb, Convert__Reg1_0__Reg1_1__Reg1_2__UXTB1_3, 0, { MCK_GPR32, MCK_GPR32wsp, MCK_GPR32, MCK_UXTB }, },
  { 1398 /* subs */, AArch64::SUBSwww_uxth, Convert__Reg1_0__Reg1_1__Reg1_2__UXTH1_3, 0, { MCK_GPR32, MCK_GPR32wsp, MCK_GPR32, MCK_UXTH }, },
  { 1398 /* subs */, AArch64::SUBSwww_uxtw, Convert__Reg1_0__Reg1_1__Reg1_2__UXTW1_3, 0, { MCK_GPR32, MCK_GPR32wsp, MCK_GPR32, MCK_UXTW }, },
  { 1398 /* subs */, AArch64::SUBSwww_uxtx, Convert__Reg1_0__Reg1_1__Reg1_2__UXTX1_3, 0, { MCK_GPR32, MCK_GPR32wsp, MCK_GPR32, MCK_UXTX }, },
  { 1403 /* svc */, AArch64::SVCi, Convert__UImm161_0, 0, { MCK_UImm16 }, },
  { 1407 /* sxtb */, AArch64::SXTBxw, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR64, MCK_GPR32 }, },
  { 1407 /* sxtb */, AArch64::SXTBww, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR32, MCK_GPR32 }, },
  { 1412 /* sxth */, AArch64::SXTHxw, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR64, MCK_GPR32 }, },
  { 1412 /* sxth */, AArch64::SXTHww, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR32, MCK_GPR32 }, },
  { 1417 /* sxtw */, AArch64::SXTWxw, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR64, MCK_GPR32 }, },
  { 1422 /* sys */, AArch64::SYSiccix, Convert__UImm31_0__CRx1_1__CRx1_2__UImm31_3__regXZR, 0, { MCK_UImm3, MCK_CRx, MCK_CRx, MCK_UImm3 }, },
  { 1422 /* sys */, AArch64::SYSiccix, Convert__UImm31_0__CRx1_1__CRx1_2__UImm31_3__Reg1_4, 0, { MCK_UImm3, MCK_CRx, MCK_CRx, MCK_UImm3, MCK_GPR64 }, },
  { 1426 /* sysl */, AArch64::SYSLxicci, Convert__Reg1_0__UImm31_1__CRx1_2__CRx1_3__UImm31_4, 0, { MCK_GPR64, MCK_UImm3, MCK_CRx, MCK_CRx, MCK_UImm3 }, },
  { 1431 /* tbnz */, AArch64::TBNZxii, Convert__Reg1_0__UImm61_1__Label14_41_2, 0, { MCK_GPR64, MCK_UImm6, MCK_Label14_4 }, },
  { 1431 /* tbnz */, AArch64::TBNZwii, Convert__Reg1_0__UImm51_1__Label14_41_2, 0, { MCK_GPR32, MCK_UImm5, MCK_Label14_4 }, },
  { 1436 /* tbz */, AArch64::TBZxii, Convert__Reg1_0__UImm61_1__Label14_41_2, 0, { MCK_GPR64, MCK_UImm6, MCK_Label14_4 }, },
  { 1436 /* tbz */, AArch64::TBZwii, Convert__Reg1_0__UImm51_1__Label14_41_2, 0, { MCK_GPR32, MCK_UImm5, MCK_Label14_4 }, },
  { 1440 /* tlbi */, AArch64::TLBIi, Convert__NamedImmtlbi1_0, 0, { MCK_NamedImmtlbi }, },
  { 1440 /* tlbi */, AArch64::TLBIix, Convert__NamedImmtlbi1_0__Reg1_1, 0, { MCK_NamedImmtlbi, MCK_GPR64 }, },
  { 1445 /* tst */, AArch64::TSTxx_lsl, Convert__Reg1_0__Reg1_1__imm_0, 0, { MCK_GPR64, MCK_GPR64 }, },
  { 1445 /* tst */, AArch64::ANDSxxi, Convert__regXZR__Reg1_0__LogicalImm641_1, 0, { MCK_GPR64, MCK_LogicalImm64 }, },
  { 1445 /* tst */, AArch64::TSTww_lsl, Convert__Reg1_0__Reg1_1__imm_0, 0, { MCK_GPR32, MCK_GPR32 }, },
  { 1445 /* tst */, AArch64::ANDSwwi, Convert__regWZR__Reg1_0__LogicalImm321_1, 0, { MCK_GPR32, MCK_LogicalImm32 }, },
  { 1445 /* tst */, AArch64::TSTxx_asr, Convert__Reg1_0__Reg1_1__ShiftASRi641_2, 0, { MCK_GPR64, MCK_GPR64, MCK_ShiftASRi64 }, },
  { 1445 /* tst */, AArch64::TSTxx_lsl, Convert__Reg1_0__Reg1_1__ShiftLSLi641_2, 0, { MCK_GPR64, MCK_GPR64, MCK_ShiftLSLi64 }, },
  { 1445 /* tst */, AArch64::TSTxx_lsr, Convert__Reg1_0__Reg1_1__ShiftLSRi641_2, 0, { MCK_GPR64, MCK_GPR64, MCK_ShiftLSRi64 }, },
  { 1445 /* tst */, AArch64::TSTxx_ror, Convert__Reg1_0__Reg1_1__ShiftRORi641_2, 0, { MCK_GPR64, MCK_GPR64, MCK_ShiftRORi64 }, },
  { 1445 /* tst */, AArch64::TSTww_asr, Convert__Reg1_0__Reg1_1__ShiftASRi321_2, 0, { MCK_GPR32, MCK_GPR32, MCK_ShiftASRi32 }, },
  { 1445 /* tst */, AArch64::TSTww_lsl, Convert__Reg1_0__Reg1_1__ShiftLSLi321_2, 0, { MCK_GPR32, MCK_GPR32, MCK_ShiftLSLi32 }, },
  { 1445 /* tst */, AArch64::TSTww_lsr, Convert__Reg1_0__Reg1_1__ShiftLSRi321_2, 0, { MCK_GPR32, MCK_GPR32, MCK_ShiftLSRi32 }, },
  { 1445 /* tst */, AArch64::TSTww_ror, Convert__Reg1_0__Reg1_1__ShiftRORi321_2, 0, { MCK_GPR32, MCK_GPR32, MCK_ShiftRORi32 }, },
  { 1449 /* uaba */, AArch64::UABAvvv_16B, Convert__Reg1_0__Tie0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 1449 /* uaba */, AArch64::UABAvvv_2S, Convert__Reg1_0__Tie0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 1449 /* uaba */, AArch64::UABAvvv_4H, Convert__Reg1_0__Tie0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 1449 /* uaba */, AArch64::UABAvvv_4S, Convert__Reg1_0__Tie0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 1449 /* uaba */, AArch64::UABAvvv_8B, Convert__Reg1_0__Tie0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 1449 /* uaba */, AArch64::UABAvvv_8H, Convert__Reg1_0__Tie0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 1454 /* uabd */, AArch64::UABDvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 1454 /* uabd */, AArch64::UABDvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 1454 /* uabd */, AArch64::UABDvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 1454 /* uabd */, AArch64::UABDvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 1454 /* uabd */, AArch64::UABDvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 1454 /* uabd */, AArch64::UABDvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 1459 /* ubfiz */, AArch64::UBFIZxxii, Convert__Reg1_0__Reg1_1__BFI64LSB1_2__BFI64Width1_3, 0, { MCK_GPR64, MCK_GPR64, MCK_BFI64LSB, MCK_BFI64Width }, },
  { 1459 /* ubfiz */, AArch64::UBFIZwwii, Convert__Reg1_0__Reg1_1__BFI32LSB1_2__BFI32Width1_3, 0, { MCK_GPR32, MCK_GPR32, MCK_BFI32LSB, MCK_BFI32Width }, },
  { 1465 /* ubfm */, AArch64::UBFMxxii, Convert__Reg1_0__Reg1_1__UImm61_2__UImm61_3, 0, { MCK_GPR64, MCK_GPR64, MCK_UImm6, MCK_UImm6 }, },
  { 1465 /* ubfm */, AArch64::UBFMwwii, Convert__Reg1_0__Reg1_1__UImm51_2__UImm51_3, 0, { MCK_GPR32, MCK_GPR32, MCK_UImm5, MCK_UImm5 }, },
  { 1470 /* ubfx */, AArch64::UBFXxxii, Convert__Reg1_0__Reg1_1__UImm61_2__BFX64Width1_3, 0, { MCK_GPR64, MCK_GPR64, MCK_UImm6, MCK_BFX64Width }, },
  { 1470 /* ubfx */, AArch64::UBFXwwii, Convert__Reg1_0__Reg1_1__UImm51_2__BFX32Width1_3, 0, { MCK_GPR32, MCK_GPR32, MCK_UImm5, MCK_BFX32Width }, },
  { 1475 /* ucvtf */, AArch64::UCVTFsx, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR32, MCK_GPR64 }, },
  { 1475 /* ucvtf */, AArch64::UCVTFsw, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR32, MCK_GPR32 }, },
  { 1475 /* ucvtf */, AArch64::UCVTFdx, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR64, MCK_GPR64 }, },
  { 1475 /* ucvtf */, AArch64::UCVTFdw, Convert__Reg1_0__Reg1_1, 0, { MCK_FPR64, MCK_GPR32 }, },
  { 1475 /* ucvtf */, AArch64::UCVTFsxi, Convert__Reg1_0__Reg1_1__CVTFixedPos641_2, 0, { MCK_FPR32, MCK_GPR64, MCK_CVTFixedPos64 }, },
  { 1475 /* ucvtf */, AArch64::UCVTFswi, Convert__Reg1_0__Reg1_1__CVTFixedPos321_2, 0, { MCK_FPR32, MCK_GPR32, MCK_CVTFixedPos32 }, },
  { 1475 /* ucvtf */, AArch64::UCVTFdxi, Convert__Reg1_0__Reg1_1__CVTFixedPos641_2, 0, { MCK_FPR64, MCK_GPR64, MCK_CVTFixedPos64 }, },
  { 1475 /* ucvtf */, AArch64::UCVTFdwi, Convert__Reg1_0__Reg1_1__CVTFixedPos321_2, 0, { MCK_FPR64, MCK_GPR32, MCK_CVTFixedPos32 }, },
  { 1481 /* udiv */, AArch64::UDIVxxx, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64 }, },
  { 1481 /* udiv */, AArch64::UDIVwww, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR32, MCK_GPR32, MCK_GPR32 }, },
  { 1486 /* uhadd */, AArch64::UHADDvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 1486 /* uhadd */, AArch64::UHADDvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 1486 /* uhadd */, AArch64::UHADDvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 1486 /* uhadd */, AArch64::UHADDvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 1486 /* uhadd */, AArch64::UHADDvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 1486 /* uhadd */, AArch64::UHADDvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 1492 /* uhsub */, AArch64::UHSUBvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 1492 /* uhsub */, AArch64::UHSUBvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 1492 /* uhsub */, AArch64::UHSUBvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 1492 /* uhsub */, AArch64::UHSUBvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 1492 /* uhsub */, AArch64::UHSUBvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 1492 /* uhsub */, AArch64::UHSUBvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 1498 /* umaddl */, AArch64::UMADDLxwwx, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3, 0, { MCK_GPR64, MCK_GPR32, MCK_GPR32, MCK_GPR64 }, },
  { 1505 /* umax */, AArch64::UMAXvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 1505 /* umax */, AArch64::UMAXvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 1505 /* umax */, AArch64::UMAXvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 1505 /* umax */, AArch64::UMAXvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 1505 /* umax */, AArch64::UMAXvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 1505 /* umax */, AArch64::UMAXvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 1510 /* umaxp */, AArch64::UMAXPvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 1510 /* umaxp */, AArch64::UMAXPvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 1510 /* umaxp */, AArch64::UMAXPvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 1510 /* umaxp */, AArch64::UMAXPvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 1510 /* umaxp */, AArch64::UMAXPvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 1510 /* umaxp */, AArch64::UMAXPvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 1516 /* umin */, AArch64::UMINvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 1516 /* umin */, AArch64::UMINvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 1516 /* umin */, AArch64::UMINvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 1516 /* umin */, AArch64::UMINvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 1516 /* umin */, AArch64::UMINvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 1516 /* umin */, AArch64::UMINvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 1521 /* uminp */, AArch64::UMINPvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 1521 /* uminp */, AArch64::UMINPvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 1521 /* uminp */, AArch64::UMINPvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 1521 /* uminp */, AArch64::UMINPvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 1521 /* uminp */, AArch64::UMINPvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 1521 /* uminp */, AArch64::UMINPvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 1527 /* umnegl */, AArch64::UMSUBLxwwx, Convert__Reg1_0__Reg1_1__Reg1_2__regXZR, 0, { MCK_GPR64, MCK_GPR32, MCK_GPR32 }, },
  { 1534 /* umsubl */, AArch64::UMSUBLxwwx, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3, 0, { MCK_GPR64, MCK_GPR32, MCK_GPR32, MCK_GPR64 }, },
  { 1541 /* umulh */, AArch64::UMULHxxx, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR64, MCK_GPR64, MCK_GPR64 }, },
  { 1547 /* umull */, AArch64::UMADDLxwwx, Convert__Reg1_0__Reg1_1__Reg1_2__regXZR, 0, { MCK_GPR64, MCK_GPR32, MCK_GPR32 }, },
  { 1553 /* uqadd */, AArch64::UQADDhhh, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 1553 /* uqadd */, AArch64::UQADDbbb, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR8, MCK_FPR8, MCK_FPR8 }, },
  { 1553 /* uqadd */, AArch64::UQADDsss, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 1553 /* uqadd */, AArch64::UQADDddd, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 1553 /* uqadd */, AArch64::UQADDvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 1553 /* uqadd */, AArch64::UQADDvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 1553 /* uqadd */, AArch64::UQADDvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 1553 /* uqadd */, AArch64::UQADDvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 1553 /* uqadd */, AArch64::UQADDvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 1553 /* uqadd */, AArch64::UQADDvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 1553 /* uqadd */, AArch64::UQADDvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 1559 /* uqrshl */, AArch64::UQRSHLhhh, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 1559 /* uqrshl */, AArch64::UQRSHLbbb, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR8, MCK_FPR8, MCK_FPR8 }, },
  { 1559 /* uqrshl */, AArch64::UQRSHLsss, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 1559 /* uqrshl */, AArch64::UQRSHLddd, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 1559 /* uqrshl */, AArch64::UQRSHLvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 1559 /* uqrshl */, AArch64::UQRSHLvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 1559 /* uqrshl */, AArch64::UQRSHLvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 1559 /* uqrshl */, AArch64::UQRSHLvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 1559 /* uqrshl */, AArch64::UQRSHLvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 1559 /* uqrshl */, AArch64::UQRSHLvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 1559 /* uqrshl */, AArch64::UQRSHLvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 1566 /* uqshl */, AArch64::UQSHLhhh, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 1566 /* uqshl */, AArch64::UQSHLbbb, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR8, MCK_FPR8, MCK_FPR8 }, },
  { 1566 /* uqshl */, AArch64::UQSHLsss, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 1566 /* uqshl */, AArch64::UQSHLddd, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 1566 /* uqshl */, AArch64::UQSHLvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 1566 /* uqshl */, AArch64::UQSHLvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 1566 /* uqshl */, AArch64::UQSHLvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 1566 /* uqshl */, AArch64::UQSHLvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 1566 /* uqshl */, AArch64::UQSHLvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 1566 /* uqshl */, AArch64::UQSHLvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 1566 /* uqshl */, AArch64::UQSHLvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 1572 /* uqsub */, AArch64::UQSUBhhh, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 1572 /* uqsub */, AArch64::UQSUBbbb, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR8, MCK_FPR8, MCK_FPR8 }, },
  { 1572 /* uqsub */, AArch64::UQSUBsss, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 1572 /* uqsub */, AArch64::UQSUBddd, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 1572 /* uqsub */, AArch64::UQSUBvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 1572 /* uqsub */, AArch64::UQSUBvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 1572 /* uqsub */, AArch64::UQSUBvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 1572 /* uqsub */, AArch64::UQSUBvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 1572 /* uqsub */, AArch64::UQSUBvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 1572 /* uqsub */, AArch64::UQSUBvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 1572 /* uqsub */, AArch64::UQSUBvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 1578 /* urhadd */, AArch64::URHADDvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 1578 /* urhadd */, AArch64::URHADDvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 1578 /* urhadd */, AArch64::URHADDvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 1578 /* urhadd */, AArch64::URHADDvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 1578 /* urhadd */, AArch64::URHADDvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 1578 /* urhadd */, AArch64::URHADDvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 1585 /* urshl */, AArch64::URSHLddd, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 1585 /* urshl */, AArch64::URSHLvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 1585 /* urshl */, AArch64::URSHLvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 1585 /* urshl */, AArch64::URSHLvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 1585 /* urshl */, AArch64::URSHLvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 1585 /* urshl */, AArch64::URSHLvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 1585 /* urshl */, AArch64::URSHLvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 1585 /* urshl */, AArch64::URSHLvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 1591 /* ushl */, AArch64::USHLddd, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasNEON, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 1591 /* ushl */, AArch64::USHLvvv_16B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b, MCK_VPR64, MCK__DOT_16b }, },
  { 1591 /* ushl */, AArch64::USHLvvv_2D, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d, MCK_VPR64, MCK__DOT_2d }, },
  { 1591 /* ushl */, AArch64::USHLvvv_2S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s, MCK_VPR64, MCK__DOT_2s }, },
  { 1591 /* ushl */, AArch64::USHLvvv_4H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h, MCK_VPR64, MCK__DOT_4h }, },
  { 1591 /* ushl */, AArch64::USHLvvv_4S, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s, MCK_VPR64, MCK__DOT_4s }, },
  { 1591 /* ushl */, AArch64::USHLvvv_8B, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b, MCK_VPR64, MCK__DOT_8b }, },
  { 1591 /* ushl */, AArch64::USHLvvv_8H, Convert__Reg1_0__Reg1_2__Reg1_4, Feature_HasNEON, { MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h, MCK_VPR64, MCK__DOT_8h }, },
  { 1596 /* uxtb */, AArch64::UXTBxw, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR64, MCK_GPR32 }, },
  { 1596 /* uxtb */, AArch64::UXTBww, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR32, MCK_GPR32 }, },
  { 1601 /* uxth */, AArch64::UXTHxw, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR64, MCK_GPR32 }, },
  { 1601 /* uxth */, AArch64::UXTHww, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR32, MCK_GPR32 }, },
  { 1606 /* wfe */, AArch64::HINTi, Convert__imm_2, 0, {  }, },
  { 1610 /* wfi */, AArch64::HINTi, Convert__imm_3, 0, {  }, },
  { 1614 /* yield */, AArch64::HINTi, Convert__imm_1, 0, {  }, },
};

bool AArch64AsmParser::
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

unsigned AArch64AsmParser::
MatchInstructionImpl(const SmallVectorImpl<MCParsedAsmOperand*> &Operands,
                     MCInst &Inst,
unsigned &ErrorInfo, bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 8) {
    ErrorInfo = 8;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  unsigned AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic = ((AArch64Operand*)Operands[0])->getToken();

  // Process all MnemonicAliases to remap the mnemonic.
  applyMnemonicAliases(Mnemonic, AvailableFeatures, VariantID);

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
    for (unsigned i = 0; i != 7; ++i) {
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
    uint8_t RequiredFeatures;
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

static const OperandMatchEntry OperandMatchTable[141] = {
  /* Operand List Mask, Mnemonic, Operand Class, Features */
  { 0, 9 /* add */, MCK_AddSubImmLSL0, 4 /* 2 */ },
  { 0, 9 /* add */, MCK_AddSubImmLSL12, 4 /* 2 */ },
  { 0, 9 /* add */, MCK_AddSubImmLSL0, 4 /* 2 */ },
  { 0, 9 /* add */, MCK_AddSubImmLSL12, 4 /* 2 */ },
  { 0, 18 /* adds */, MCK_AddSubImmLSL0, 4 /* 2 */ },
  { 0, 18 /* adds */, MCK_AddSubImmLSL12, 4 /* 2 */ },
  { 0, 18 /* adds */, MCK_AddSubImmLSL0, 4 /* 2 */ },
  { 0, 18 /* adds */, MCK_AddSubImmLSL12, 4 /* 2 */ },
  { 0, 45 /* at */, MCK_NamedImmat, 1 /* 0 */ },
  { 0, 108 /* ccmn */, MCK_CondCodeOp, 8 /* 3 */ },
  { 0, 108 /* ccmn */, MCK_CondCodeOp, 8 /* 3 */ },
  { 0, 108 /* ccmn */, MCK_CondCodeOp, 8 /* 3 */ },
  { 0, 108 /* ccmn */, MCK_CondCodeOp, 8 /* 3 */ },
  { 0, 113 /* ccmp */, MCK_CondCodeOp, 8 /* 3 */ },
  { 0, 113 /* ccmp */, MCK_CondCodeOp, 8 /* 3 */ },
  { 0, 113 /* ccmp */, MCK_CondCodeOp, 8 /* 3 */ },
  { 0, 113 /* ccmp */, MCK_CondCodeOp, 8 /* 3 */ },
  { 0, 118 /* cinc */, MCK_InvCondCodeOp, 4 /* 2 */ },
  { 0, 118 /* cinc */, MCK_InvCondCodeOp, 4 /* 2 */ },
  { 0, 123 /* cinv */, MCK_InvCondCodeOp, 4 /* 2 */ },
  { 0, 123 /* cinv */, MCK_InvCondCodeOp, 4 /* 2 */ },
  { 0, 187 /* cmn */, MCK_AddSubImmLSL0, 2 /* 1 */ },
  { 0, 187 /* cmn */, MCK_AddSubImmLSL12, 2 /* 1 */ },
  { 0, 187 /* cmn */, MCK_AddSubImmLSL0, 2 /* 1 */ },
  { 0, 187 /* cmn */, MCK_AddSubImmLSL12, 2 /* 1 */ },
  { 0, 191 /* cmp */, MCK_AddSubImmLSL0, 2 /* 1 */ },
  { 0, 191 /* cmp */, MCK_AddSubImmLSL12, 2 /* 1 */ },
  { 0, 191 /* cmp */, MCK_AddSubImmLSL0, 2 /* 1 */ },
  { 0, 191 /* cmp */, MCK_AddSubImmLSL12, 2 /* 1 */ },
  { 0, 201 /* cneg */, MCK_InvCondCodeOp, 4 /* 2 */ },
  { 0, 201 /* cneg */, MCK_InvCondCodeOp, 4 /* 2 */ },
  { 0, 266 /* csel */, MCK_CondCodeOp, 8 /* 3 */ },
  { 0, 266 /* csel */, MCK_CondCodeOp, 8 /* 3 */ },
  { 0, 271 /* cset */, MCK_InvCondCodeOp, 2 /* 1 */ },
  { 0, 271 /* cset */, MCK_InvCondCodeOp, 2 /* 1 */ },
  { 0, 276 /* csetm */, MCK_InvCondCodeOp, 2 /* 1 */ },
  { 0, 276 /* csetm */, MCK_InvCondCodeOp, 2 /* 1 */ },
  { 0, 282 /* csinc */, MCK_CondCodeOp, 8 /* 3 */ },
  { 0, 282 /* csinc */, MCK_CondCodeOp, 8 /* 3 */ },
  { 0, 288 /* csinv */, MCK_CondCodeOp, 8 /* 3 */ },
  { 0, 288 /* csinv */, MCK_CondCodeOp, 8 /* 3 */ },
  { 0, 294 /* csneg */, MCK_CondCodeOp, 8 /* 3 */ },
  { 0, 294 /* csneg */, MCK_CondCodeOp, 8 /* 3 */ },
  { 0, 300 /* dc */, MCK_NamedImmdc, 1 /* 0 */ },
  { 0, 321 /* dmb */, MCK_NamedImmdbarrier, 1 /* 0 */ },
  { 0, 330 /* dsb */, MCK_NamedImmdbarrier, 1 /* 0 */ },
  { 0, 397 /* fccmp */, MCK_CondCodeOp, 8 /* 3 */ },
  { 0, 397 /* fccmp */, MCK_CondCodeOp, 8 /* 3 */ },
  { 0, 403 /* fccmpe */, MCK_CondCodeOp, 8 /* 3 */ },
  { 0, 403 /* fccmpe */, MCK_CondCodeOp, 8 /* 3 */ },
  { Feature_HasNEON, 410 /* fcmeq */, MCK_FPZero, 16 /* 4 */ },
  { Feature_HasNEON, 410 /* fcmeq */, MCK_FPZero, 16 /* 4 */ },
  { Feature_HasNEON, 410 /* fcmeq */, MCK_FPZero, 16 /* 4 */ },
  { Feature_HasNEON, 416 /* fcmge */, MCK_FPZero, 16 /* 4 */ },
  { Feature_HasNEON, 416 /* fcmge */, MCK_FPZero, 16 /* 4 */ },
  { Feature_HasNEON, 416 /* fcmge */, MCK_FPZero, 16 /* 4 */ },
  { Feature_HasNEON, 422 /* fcmgt */, MCK_FPZero, 16 /* 4 */ },
  { Feature_HasNEON, 422 /* fcmgt */, MCK_FPZero, 16 /* 4 */ },
  { Feature_HasNEON, 422 /* fcmgt */, MCK_FPZero, 16 /* 4 */ },
  { Feature_HasNEON, 428 /* fcmle */, MCK_FPZero, 16 /* 4 */ },
  { Feature_HasNEON, 428 /* fcmle */, MCK_FPZero, 16 /* 4 */ },
  { Feature_HasNEON, 428 /* fcmle */, MCK_FPZero, 16 /* 4 */ },
  { Feature_HasNEON, 434 /* fcmlt */, MCK_FPZero, 16 /* 4 */ },
  { Feature_HasNEON, 434 /* fcmlt */, MCK_FPZero, 16 /* 4 */ },
  { Feature_HasNEON, 434 /* fcmlt */, MCK_FPZero, 16 /* 4 */ },
  { 0, 440 /* fcmp */, MCK_FPZero, 2 /* 1 */ },
  { 0, 440 /* fcmp */, MCK_FPZero, 2 /* 1 */ },
  { 0, 445 /* fcmpe */, MCK_FPZero, 2 /* 1 */ },
  { 0, 445 /* fcmpe */, MCK_FPZero, 2 /* 1 */ },
  { 0, 451 /* fcsel */, MCK_CondCodeOp, 8 /* 3 */ },
  { 0, 451 /* fcsel */, MCK_CondCodeOp, 8 /* 3 */ },
  { 0, 605 /* fmov */, MCK_FMOVImm, 2 /* 1 */ },
  { 0, 605 /* fmov */, MCK_FMOVImm, 2 /* 1 */ },
  { Feature_HasNEON, 605 /* fmov */, MCK_FMOVImm, 4 /* 2 */ },
  { Feature_HasNEON, 605 /* fmov */, MCK_FMOVImm, 4 /* 2 */ },
  { Feature_HasNEON, 605 /* fmov */, MCK_FMOVImm, 4 /* 2 */ },
  { 0, 740 /* ic */, MCK_NamedImmic, 1 /* 0 */ },
  { 0, 740 /* ic */, MCK_NamedImmic, 1 /* 0 */ },
  { 0, 743 /* isb */, MCK_NamedImmisb, 1 /* 0 */ },
  { 0, 747 /* ldar */, MCK_GPR64xsp0, 4 /* 2 */ },
  { 0, 747 /* ldar */, MCK_GPR64xsp0, 4 /* 2 */ },
  { 0, 752 /* ldarb */, MCK_GPR64xsp0, 4 /* 2 */ },
  { 0, 758 /* ldarh */, MCK_GPR64xsp0, 4 /* 2 */ },
  { 0, 764 /* ldaxp */, MCK_GPR64xsp0, 8 /* 3 */ },
  { 0, 764 /* ldaxp */, MCK_GPR64xsp0, 8 /* 3 */ },
  { 0, 770 /* ldaxr */, MCK_GPR64xsp0, 4 /* 2 */ },
  { 0, 770 /* ldaxr */, MCK_GPR64xsp0, 4 /* 2 */ },
  { 0, 776 /* ldaxrb */, MCK_GPR64xsp0, 4 /* 2 */ },
  { 0, 783 /* ldaxrh */, MCK_GPR64xsp0, 4 /* 2 */ },
  { 0, 913 /* ldxp */, MCK_GPR64xsp0, 8 /* 3 */ },
  { 0, 913 /* ldxp */, MCK_GPR64xsp0, 8 /* 3 */ },
  { 0, 918 /* ldxr */, MCK_GPR64xsp0, 4 /* 2 */ },
  { 0, 918 /* ldxr */, MCK_GPR64xsp0, 4 /* 2 */ },
  { 0, 923 /* ldxrb */, MCK_GPR64xsp0, 4 /* 2 */ },
  { 0, 929 /* ldxrh */, MCK_GPR64xsp0, 4 /* 2 */ },
  { 0, 970 /* movk */, MCK_MOVK64Shiftedshift, 2 /* 1 */ },
  { 0, 970 /* movk */, MCK_MOVK32Shiftedshift, 2 /* 1 */ },
  { 0, 975 /* movn */, MCK_MOVN64Shiftedshift, 2 /* 1 */ },
  { 0, 975 /* movn */, MCK_MOVN32Shiftedshift, 2 /* 1 */ },
  { 0, 980 /* movz */, MCK_MOVZ64Shiftedshift, 2 /* 1 */ },
  { 0, 980 /* movz */, MCK_MOVZ32Shiftedshift, 2 /* 1 */ },
  { 0, 985 /* mrs */, MCK_MRS, 2 /* 1 */ },
  { 0, 989 /* msr */, MCK_MSRWithReg, 1 /* 0 */ },
  { 0, 989 /* msr */, MCK_MSRPState, 1 /* 0 */ },
  { 0, 1046 /* prfm */, MCK_NamedImmprefetch, 1 /* 0 */ },
  { 0, 1046 /* prfm */, MCK_NamedImmprefetch, 1 /* 0 */ },
  { 0, 1046 /* prfm */, MCK_NamedImmprefetch, 1 /* 0 */ },
  { 0, 1046 /* prfm */, MCK_NamedImmprefetch, 1 /* 0 */ },
  { 0, 1046 /* prfm */, MCK_NamedImmprefetch, 1 /* 0 */ },
  { 0, 1046 /* prfm */, MCK_NamedImmprefetch, 1 /* 0 */ },
  { 0, 1051 /* prfum */, MCK_NamedImmprefetch, 1 /* 0 */ },
  { 0, 1051 /* prfum */, MCK_NamedImmprefetch, 1 /* 0 */ },
  { 0, 1272 /* stlr */, MCK_GPR64xsp0, 4 /* 2 */ },
  { 0, 1272 /* stlr */, MCK_GPR64xsp0, 4 /* 2 */ },
  { 0, 1277 /* stlrb */, MCK_GPR64xsp0, 4 /* 2 */ },
  { 0, 1283 /* stlrh */, MCK_GPR64xsp0, 4 /* 2 */ },
  { 0, 1289 /* stlxp */, MCK_GPR64xsp0, 16 /* 4 */ },
  { 0, 1289 /* stlxp */, MCK_GPR64xsp0, 16 /* 4 */ },
  { 0, 1295 /* stlxr */, MCK_GPR64xsp0, 8 /* 3 */ },
  { 0, 1295 /* stlxr */, MCK_GPR64xsp0, 8 /* 3 */ },
  { 0, 1301 /* stlxrb */, MCK_GPR64xsp0, 8 /* 3 */ },
  { 0, 1308 /* stlxrh */, MCK_GPR64xsp0, 8 /* 3 */ },
  { 0, 1372 /* stxp */, MCK_GPR64xsp0, 16 /* 4 */ },
  { 0, 1372 /* stxp */, MCK_GPR64xsp0, 16 /* 4 */ },
  { 0, 1377 /* stxr */, MCK_GPR64xsp0, 8 /* 3 */ },
  { 0, 1377 /* stxr */, MCK_GPR64xsp0, 8 /* 3 */ },
  { 0, 1382 /* stxrb */, MCK_GPR64xsp0, 8 /* 3 */ },
  { 0, 1388 /* stxrh */, MCK_GPR64xsp0, 8 /* 3 */ },
  { 0, 1394 /* sub */, MCK_AddSubImmLSL0, 4 /* 2 */ },
  { 0, 1394 /* sub */, MCK_AddSubImmLSL12, 4 /* 2 */ },
  { 0, 1394 /* sub */, MCK_AddSubImmLSL0, 4 /* 2 */ },
  { 0, 1394 /* sub */, MCK_AddSubImmLSL12, 4 /* 2 */ },
  { 0, 1398 /* subs */, MCK_AddSubImmLSL0, 4 /* 2 */ },
  { 0, 1398 /* subs */, MCK_AddSubImmLSL12, 4 /* 2 */ },
  { 0, 1398 /* subs */, MCK_AddSubImmLSL0, 4 /* 2 */ },
  { 0, 1398 /* subs */, MCK_AddSubImmLSL12, 4 /* 2 */ },
  { 0, 1422 /* sys */, MCK_CRx, 6 /* 1, 2 */ },
  { 0, 1422 /* sys */, MCK_CRx, 6 /* 1, 2 */ },
  { 0, 1426 /* sysl */, MCK_CRx, 12 /* 2, 3 */ },
  { 0, 1440 /* tlbi */, MCK_NamedImmtlbi, 1 /* 0 */ },
  { 0, 1440 /* tlbi */, MCK_NamedImmtlbi, 1 /* 0 */ },
};

AArch64AsmParser::OperandMatchResultTy AArch64AsmParser::
tryCustomParseOperand(SmallVectorImpl<MCParsedAsmOperand*> &Operands,
                      unsigned MCK) {

  switch(MCK) {
  case MCK_CRx:
    return ParseCRxOperand(Operands);
  case MCK_GPR64xsp0:
    return ParseLSXAddressOperand(Operands);
  case MCK_AddSubImmLSL0:
    return ParseImmWithLSLOperand(Operands);
  case MCK_AddSubImmLSL12:
    return ParseImmWithLSLOperand(Operands);
  case MCK_NamedImmat:
    return ParseNamedImmOperand<A64AT::ATMapper>(Operands);
  case MCK_CondCodeOp:
    return ParseCondCodeOperand(Operands);
  case MCK_NamedImmdbarrier:
    return ParseNamedImmOperand<A64DB::DBarrierMapper>(Operands);
  case MCK_NamedImmdc:
    return ParseNamedImmOperand<A64DC::DCMapper>(Operands);
  case MCK_FMOVImm:
    return ParseFPImmOperand(Operands);
  case MCK_FPZero:
    return ParseFPImmOperand(Operands);
  case MCK_NamedImmic:
    return ParseNamedImmOperand<A64IC::ICMapper>(Operands);
  case MCK_InvCondCodeOp:
    return ParseCondCodeOperand(Operands);
  case MCK_NamedImmisb:
    return ParseNamedImmOperand<A64ISB::ISBMapper>(Operands);
  case MCK_MOVK32Shiftedshift:
    return ParseImmWithLSLOperand(Operands);
  case MCK_MOVK64Shiftedshift:
    return ParseImmWithLSLOperand(Operands);
  case MCK_MOVN32Shiftedshift:
    return ParseImmWithLSLOperand(Operands);
  case MCK_MOVN64Shiftedshift:
    return ParseImmWithLSLOperand(Operands);
  case MCK_MOVZ32Shiftedshift:
    return ParseImmWithLSLOperand(Operands);
  case MCK_MOVZ64Shiftedshift:
    return ParseImmWithLSLOperand(Operands);
  case MCK_MRS:
    return ParseSysRegOperand(Operands);
  case MCK_MSRWithReg:
    return ParseSysRegOperand(Operands);
  case MCK_NamedImmprefetch:
    return ParseNamedImmOperand<A64PRFM::PRFMMapper>(Operands);
  case MCK_MSRPState:
    return ParseSysRegOperand(Operands);
  case MCK_NamedImmtlbi:
    return ParseNamedImmOperand<A64TLBI::TLBIMapper>(Operands);
  default:
    return MatchOperand_NoMatch;
  }
  return MatchOperand_NoMatch;
}

AArch64AsmParser::OperandMatchResultTy AArch64AsmParser::
MatchOperandParserImpl(SmallVectorImpl<MCParsedAsmOperand*> &Operands,
                       StringRef Mnemonic) {
  // Get the current feature set.
  unsigned AvailableFeatures = getAvailableFeatures();

  // Get the next operand index.
  unsigned NextOpNum = Operands.size()-1;
  // Search the table.
  std::pair<const OperandMatchEntry*, const OperandMatchEntry*> MnemonicRange =
    std::equal_range(OperandMatchTable, OperandMatchTable+141, Mnemonic,
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

