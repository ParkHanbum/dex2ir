/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Register Enum Values                                                 *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_ENUM
#undef GET_REGINFO_ENUM
namespace llvm {

class MCRegisterClass;
extern const MCRegisterClass SPMCRegisterClasses[];

namespace SP {
enum {
  NoRegister,
  FCC = 1,
  ICC = 2,
  Y = 3,
  D0 = 4,
  D1 = 5,
  D2 = 6,
  D3 = 7,
  D4 = 8,
  D5 = 9,
  D6 = 10,
  D7 = 11,
  D8 = 12,
  D9 = 13,
  D10 = 14,
  D11 = 15,
  D12 = 16,
  D13 = 17,
  D14 = 18,
  D15 = 19,
  F0 = 20,
  F1 = 21,
  F2 = 22,
  F3 = 23,
  F4 = 24,
  F5 = 25,
  F6 = 26,
  F7 = 27,
  F8 = 28,
  F9 = 29,
  F10 = 30,
  F11 = 31,
  F12 = 32,
  F13 = 33,
  F14 = 34,
  F15 = 35,
  F16 = 36,
  F17 = 37,
  F18 = 38,
  F19 = 39,
  F20 = 40,
  F21 = 41,
  F22 = 42,
  F23 = 43,
  F24 = 44,
  F25 = 45,
  F26 = 46,
  F27 = 47,
  F28 = 48,
  F29 = 49,
  F30 = 50,
  F31 = 51,
  G0 = 52,
  G1 = 53,
  G2 = 54,
  G3 = 55,
  G4 = 56,
  G5 = 57,
  G6 = 58,
  G7 = 59,
  I0 = 60,
  I1 = 61,
  I2 = 62,
  I3 = 63,
  I4 = 64,
  I5 = 65,
  I6 = 66,
  I7 = 67,
  L0 = 68,
  L1 = 69,
  L2 = 70,
  L3 = 71,
  L4 = 72,
  L5 = 73,
  L6 = 74,
  L7 = 75,
  O0 = 76,
  O1 = 77,
  O2 = 78,
  O3 = 79,
  O4 = 80,
  O5 = 81,
  O6 = 82,
  O7 = 83,
  NUM_TARGET_REGS 	// 84
};
}

// Register classes
namespace SP {
enum {
  FPRegsRegClassID = 0,
  IntRegsRegClassID = 1,
  I64RegsRegClassID = 2,
  DFPRegsRegClassID = 3
  };
}

// Subregister indices
namespace SP {
enum {
  NoSubRegister,
  sub_even,	// 1
  sub_odd,	// 2
  NUM_TARGET_SUBREGS
};
}
} // End llvm namespace 
#endif // GET_REGINFO_ENUM

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*MC Register Information                                                     *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_MC_DESC
#undef GET_REGINFO_MC_DESC
namespace llvm {

extern const MCPhysReg SparcRegDiffLists[] = {
  /* 0 */ 16, 1, 0,
  /* 3 */ 17, 1, 0,
  /* 6 */ 18, 1, 0,
  /* 9 */ 19, 1, 0,
  /* 12 */ 20, 1, 0,
  /* 15 */ 21, 1, 0,
  /* 18 */ 22, 1, 0,
  /* 21 */ 23, 1, 0,
  /* 24 */ 24, 1, 0,
  /* 27 */ 25, 1, 0,
  /* 30 */ 26, 1, 0,
  /* 33 */ 27, 1, 0,
  /* 36 */ 28, 1, 0,
  /* 39 */ 29, 1, 0,
  /* 42 */ 30, 1, 0,
  /* 45 */ 31, 1, 0,
  /* 48 */ 65531, 1, 0,
  /* 51 */ 65504, 0,
  /* 53 */ 65505, 0,
  /* 55 */ 65506, 0,
  /* 57 */ 65507, 0,
  /* 59 */ 65508, 0,
  /* 61 */ 65509, 0,
  /* 63 */ 65510, 0,
  /* 65 */ 65511, 0,
  /* 67 */ 65512, 0,
  /* 69 */ 65513, 0,
  /* 71 */ 65514, 0,
  /* 73 */ 65515, 0,
  /* 75 */ 65516, 0,
  /* 77 */ 65517, 0,
  /* 79 */ 65518, 0,
  /* 81 */ 65519, 0,
  /* 83 */ 65520, 0,
  /* 85 */ 65535, 0,
};

extern const uint16_t SparcSubRegIdxLists[] = {
  /* 0 */ 1, 2, 0,
};

extern const MCRegisterInfo::SubRegCoveredBits SparcSubRegIdxRanges[] = {
  { 65535, 65535 },
  { 0, 32 },	// sub_even
  { 32, 32 },	// sub_odd
};

extern const char SparcRegStrings[] = {
  /* 0 */ 'D', '1', '0', 0,
  /* 4 */ 'F', '1', '0', 0,
  /* 8 */ 'F', '2', '0', 0,
  /* 12 */ 'F', '3', '0', 0,
  /* 16 */ 'D', '0', 0,
  /* 19 */ 'F', '0', 0,
  /* 22 */ 'G', '0', 0,
  /* 25 */ 'I', '0', 0,
  /* 28 */ 'L', '0', 0,
  /* 31 */ 'O', '0', 0,
  /* 34 */ 'D', '1', '1', 0,
  /* 38 */ 'F', '1', '1', 0,
  /* 42 */ 'F', '2', '1', 0,
  /* 46 */ 'F', '3', '1', 0,
  /* 50 */ 'D', '1', 0,
  /* 53 */ 'F', '1', 0,
  /* 56 */ 'G', '1', 0,
  /* 59 */ 'I', '1', 0,
  /* 62 */ 'L', '1', 0,
  /* 65 */ 'O', '1', 0,
  /* 68 */ 'D', '1', '2', 0,
  /* 72 */ 'F', '1', '2', 0,
  /* 76 */ 'F', '2', '2', 0,
  /* 80 */ 'D', '2', 0,
  /* 83 */ 'F', '2', 0,
  /* 86 */ 'G', '2', 0,
  /* 89 */ 'I', '2', 0,
  /* 92 */ 'L', '2', 0,
  /* 95 */ 'O', '2', 0,
  /* 98 */ 'D', '1', '3', 0,
  /* 102 */ 'F', '1', '3', 0,
  /* 106 */ 'F', '2', '3', 0,
  /* 110 */ 'D', '3', 0,
  /* 113 */ 'F', '3', 0,
  /* 116 */ 'G', '3', 0,
  /* 119 */ 'I', '3', 0,
  /* 122 */ 'L', '3', 0,
  /* 125 */ 'O', '3', 0,
  /* 128 */ 'D', '1', '4', 0,
  /* 132 */ 'F', '1', '4', 0,
  /* 136 */ 'F', '2', '4', 0,
  /* 140 */ 'D', '4', 0,
  /* 143 */ 'F', '4', 0,
  /* 146 */ 'G', '4', 0,
  /* 149 */ 'I', '4', 0,
  /* 152 */ 'L', '4', 0,
  /* 155 */ 'O', '4', 0,
  /* 158 */ 'D', '1', '5', 0,
  /* 162 */ 'F', '1', '5', 0,
  /* 166 */ 'F', '2', '5', 0,
  /* 170 */ 'D', '5', 0,
  /* 173 */ 'F', '5', 0,
  /* 176 */ 'G', '5', 0,
  /* 179 */ 'I', '5', 0,
  /* 182 */ 'L', '5', 0,
  /* 185 */ 'O', '5', 0,
  /* 188 */ 'F', '1', '6', 0,
  /* 192 */ 'F', '2', '6', 0,
  /* 196 */ 'D', '6', 0,
  /* 199 */ 'F', '6', 0,
  /* 202 */ 'G', '6', 0,
  /* 205 */ 'I', '6', 0,
  /* 208 */ 'L', '6', 0,
  /* 211 */ 'O', '6', 0,
  /* 214 */ 'F', '1', '7', 0,
  /* 218 */ 'F', '2', '7', 0,
  /* 222 */ 'D', '7', 0,
  /* 225 */ 'F', '7', 0,
  /* 228 */ 'G', '7', 0,
  /* 231 */ 'I', '7', 0,
  /* 234 */ 'L', '7', 0,
  /* 237 */ 'O', '7', 0,
  /* 240 */ 'F', '1', '8', 0,
  /* 244 */ 'F', '2', '8', 0,
  /* 248 */ 'D', '8', 0,
  /* 251 */ 'F', '8', 0,
  /* 254 */ 'F', '1', '9', 0,
  /* 258 */ 'F', '2', '9', 0,
  /* 262 */ 'D', '9', 0,
  /* 265 */ 'F', '9', 0,
  /* 268 */ 'F', 'C', 'C', 0,
  /* 272 */ 'I', 'C', 'C', 0,
  /* 276 */ 'Y', 0,
};

extern const MCRegisterDesc SparcRegDesc[] = { // Descriptors
  { 3, 0, 0, 0, 0 },
  { 268, 2, 2, 2, 1361 },
  { 272, 2, 2, 2, 1361 },
  { 276, 2, 2, 2, 1361 },
  { 16, 0, 2, 0, 770 },
  { 50, 3, 2, 0, 770 },
  { 80, 6, 2, 0, 770 },
  { 110, 9, 2, 0, 770 },
  { 140, 12, 2, 0, 770 },
  { 170, 15, 2, 0, 770 },
  { 196, 18, 2, 0, 770 },
  { 222, 21, 2, 0, 770 },
  { 248, 24, 2, 0, 770 },
  { 262, 27, 2, 0, 770 },
  { 0, 30, 2, 0, 770 },
  { 34, 33, 2, 0, 770 },
  { 68, 36, 2, 0, 770 },
  { 98, 39, 2, 0, 770 },
  { 128, 42, 2, 0, 770 },
  { 158, 45, 2, 0, 770 },
  { 19, 2, 83, 2, 1297 },
  { 53, 2, 81, 2, 1297 },
  { 83, 2, 81, 2, 1297 },
  { 113, 2, 79, 2, 1297 },
  { 143, 2, 79, 2, 1297 },
  { 173, 2, 77, 2, 1297 },
  { 199, 2, 77, 2, 1297 },
  { 225, 2, 75, 2, 1297 },
  { 251, 2, 75, 2, 1297 },
  { 265, 2, 73, 2, 1297 },
  { 4, 2, 73, 2, 1297 },
  { 38, 2, 71, 2, 1297 },
  { 72, 2, 71, 2, 1297 },
  { 102, 2, 69, 2, 1297 },
  { 132, 2, 69, 2, 1297 },
  { 162, 2, 67, 2, 1297 },
  { 188, 2, 67, 2, 1297 },
  { 214, 2, 65, 2, 1297 },
  { 240, 2, 65, 2, 1297 },
  { 254, 2, 63, 2, 1297 },
  { 8, 2, 63, 2, 1297 },
  { 42, 2, 61, 2, 1297 },
  { 76, 2, 61, 2, 1297 },
  { 106, 2, 59, 2, 1297 },
  { 136, 2, 59, 2, 1297 },
  { 166, 2, 57, 2, 1297 },
  { 192, 2, 57, 2, 1297 },
  { 218, 2, 55, 2, 1297 },
  { 244, 2, 55, 2, 1297 },
  { 258, 2, 53, 2, 1297 },
  { 12, 2, 53, 2, 1297 },
  { 46, 2, 51, 2, 1297 },
  { 22, 2, 2, 2, 1297 },
  { 56, 2, 2, 2, 1297 },
  { 86, 2, 2, 2, 1297 },
  { 116, 2, 2, 2, 1297 },
  { 146, 2, 2, 2, 1297 },
  { 176, 2, 2, 2, 1297 },
  { 202, 2, 2, 2, 1297 },
  { 228, 2, 2, 2, 1297 },
  { 25, 2, 2, 2, 1297 },
  { 59, 2, 2, 2, 1297 },
  { 89, 2, 2, 2, 1297 },
  { 119, 2, 2, 2, 1297 },
  { 149, 2, 2, 2, 1297 },
  { 179, 2, 2, 2, 1297 },
  { 205, 2, 2, 2, 1297 },
  { 231, 2, 2, 2, 1297 },
  { 28, 2, 2, 2, 1297 },
  { 62, 2, 2, 2, 1297 },
  { 92, 2, 2, 2, 1297 },
  { 122, 2, 2, 2, 1297 },
  { 152, 2, 2, 2, 1297 },
  { 182, 2, 2, 2, 1297 },
  { 208, 2, 2, 2, 1297 },
  { 234, 2, 2, 2, 1297 },
  { 31, 2, 2, 2, 1297 },
  { 65, 2, 2, 2, 1297 },
  { 95, 2, 2, 2, 1297 },
  { 125, 2, 2, 2, 1297 },
  { 155, 2, 2, 2, 1297 },
  { 185, 2, 2, 2, 1297 },
  { 211, 2, 2, 2, 1297 },
  { 237, 2, 2, 2, 1297 },
};

extern const uint16_t SparcRegUnitRoots[][2] = {
  { SP::FCC },
  { SP::ICC },
  { SP::Y },
  { SP::F0 },
  { SP::F1 },
  { SP::F2 },
  { SP::F3 },
  { SP::F4 },
  { SP::F5 },
  { SP::F6 },
  { SP::F7 },
  { SP::F8 },
  { SP::F9 },
  { SP::F10 },
  { SP::F11 },
  { SP::F12 },
  { SP::F13 },
  { SP::F14 },
  { SP::F15 },
  { SP::F16 },
  { SP::F17 },
  { SP::F18 },
  { SP::F19 },
  { SP::F20 },
  { SP::F21 },
  { SP::F22 },
  { SP::F23 },
  { SP::F24 },
  { SP::F25 },
  { SP::F26 },
  { SP::F27 },
  { SP::F28 },
  { SP::F29 },
  { SP::F30 },
  { SP::F31 },
  { SP::G0 },
  { SP::G1 },
  { SP::G2 },
  { SP::G3 },
  { SP::G4 },
  { SP::G5 },
  { SP::G6 },
  { SP::G7 },
  { SP::I0 },
  { SP::I1 },
  { SP::I2 },
  { SP::I3 },
  { SP::I4 },
  { SP::I5 },
  { SP::I6 },
  { SP::I7 },
  { SP::L0 },
  { SP::L1 },
  { SP::L2 },
  { SP::L3 },
  { SP::L4 },
  { SP::L5 },
  { SP::L6 },
  { SP::L7 },
  { SP::O0 },
  { SP::O1 },
  { SP::O2 },
  { SP::O3 },
  { SP::O4 },
  { SP::O5 },
  { SP::O6 },
  { SP::O7 },
};

namespace {     // Register classes...
  // FPRegs Register Class...
  const uint16_t FPRegs[] = {
    SP::F0, SP::F1, SP::F2, SP::F3, SP::F4, SP::F5, SP::F6, SP::F7, SP::F8, SP::F9, SP::F10, SP::F11, SP::F12, SP::F13, SP::F14, SP::F15, SP::F16, SP::F17, SP::F18, SP::F19, SP::F20, SP::F21, SP::F22, SP::F23, SP::F24, SP::F25, SP::F26, SP::F27, SP::F28, SP::F29, SP::F30, SP::F31, 
  };

  // FPRegs Bit set.
  const uint8_t FPRegsBits[] = {
    0x00, 0x00, 0xf0, 0xff, 0xff, 0xff, 0x0f, 
  };

  // IntRegs Register Class...
  const uint16_t IntRegs[] = {
    SP::I0, SP::I1, SP::I2, SP::I3, SP::I4, SP::I5, SP::I6, SP::I7, SP::G0, SP::G1, SP::G2, SP::G3, SP::G4, SP::G5, SP::G6, SP::G7, SP::L0, SP::L1, SP::L2, SP::L3, SP::L4, SP::L5, SP::L6, SP::L7, SP::O0, SP::O1, SP::O2, SP::O3, SP::O4, SP::O5, SP::O6, SP::O7, 
  };

  // IntRegs Bit set.
  const uint8_t IntRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0xff, 0xff, 0x0f, 
  };

  // I64Regs Register Class...
  const uint16_t I64Regs[] = {
    SP::I0, SP::I1, SP::I2, SP::I3, SP::I4, SP::I5, SP::I6, SP::I7, SP::G0, SP::G1, SP::G2, SP::G3, SP::G4, SP::G5, SP::G6, SP::G7, SP::L0, SP::L1, SP::L2, SP::L3, SP::L4, SP::L5, SP::L6, SP::L7, SP::O0, SP::O1, SP::O2, SP::O3, SP::O4, SP::O5, SP::O6, SP::O7, 
  };

  // I64Regs Bit set.
  const uint8_t I64RegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0xff, 0xff, 0x0f, 
  };

  // DFPRegs Register Class...
  const uint16_t DFPRegs[] = {
    SP::D0, SP::D1, SP::D2, SP::D3, SP::D4, SP::D5, SP::D6, SP::D7, SP::D8, SP::D9, SP::D10, SP::D11, SP::D12, SP::D13, SP::D14, SP::D15, 
  };

  // DFPRegs Bit set.
  const uint8_t DFPRegsBits[] = {
    0xf0, 0xff, 0x0f, 
  };

}

extern const MCRegisterClass SparcMCRegisterClasses[] = {
  { "FPRegs", FPRegs, FPRegsBits, 32, sizeof(FPRegsBits), SP::FPRegsRegClassID, 4, 4, 1, 1 },
  { "IntRegs", IntRegs, IntRegsBits, 32, sizeof(IntRegsBits), SP::IntRegsRegClassID, 4, 4, 1, 1 },
  { "I64Regs", I64Regs, I64RegsBits, 32, sizeof(I64RegsBits), SP::I64RegsRegClassID, 8, 8, 1, 1 },
  { "DFPRegs", DFPRegs, DFPRegsBits, 16, sizeof(DFPRegsBits), SP::DFPRegsRegClassID, 8, 8, 1, 1 },
};

// SP Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair SPDwarfFlavour0Dwarf2L[] = {
  { 0U, SP::G0 },
  { 1U, SP::G1 },
  { 2U, SP::G2 },
  { 3U, SP::G3 },
  { 4U, SP::G4 },
  { 5U, SP::G5 },
  { 6U, SP::G6 },
  { 7U, SP::G7 },
  { 8U, SP::O0 },
  { 9U, SP::O1 },
  { 10U, SP::O2 },
  { 11U, SP::O3 },
  { 12U, SP::O4 },
  { 13U, SP::O5 },
  { 14U, SP::O6 },
  { 15U, SP::O7 },
  { 16U, SP::L0 },
  { 17U, SP::L1 },
  { 18U, SP::L2 },
  { 19U, SP::L3 },
  { 20U, SP::L4 },
  { 21U, SP::L5 },
  { 22U, SP::L6 },
  { 23U, SP::L7 },
  { 24U, SP::I0 },
  { 25U, SP::I1 },
  { 26U, SP::I2 },
  { 27U, SP::I3 },
  { 28U, SP::I4 },
  { 29U, SP::I5 },
  { 30U, SP::I6 },
  { 31U, SP::I7 },
  { 32U, SP::F0 },
  { 33U, SP::F1 },
  { 34U, SP::F2 },
  { 35U, SP::F3 },
  { 36U, SP::F4 },
  { 37U, SP::F5 },
  { 38U, SP::F6 },
  { 39U, SP::F7 },
  { 40U, SP::F8 },
  { 41U, SP::F9 },
  { 42U, SP::F10 },
  { 43U, SP::F11 },
  { 44U, SP::F12 },
  { 45U, SP::F13 },
  { 46U, SP::F14 },
  { 47U, SP::F15 },
  { 48U, SP::F16 },
  { 49U, SP::F17 },
  { 50U, SP::F18 },
  { 51U, SP::F19 },
  { 52U, SP::F20 },
  { 53U, SP::F21 },
  { 54U, SP::F22 },
  { 55U, SP::F23 },
  { 56U, SP::F24 },
  { 57U, SP::F25 },
  { 58U, SP::F26 },
  { 59U, SP::F27 },
  { 60U, SP::F28 },
  { 61U, SP::F29 },
  { 62U, SP::F30 },
  { 63U, SP::F31 },
  { 72U, SP::D0 },
  { 73U, SP::D1 },
  { 74U, SP::D2 },
  { 75U, SP::D3 },
  { 76U, SP::D4 },
  { 77U, SP::D5 },
  { 78U, SP::D6 },
  { 79U, SP::D7 },
  { 80U, SP::D8 },
  { 81U, SP::D9 },
  { 82U, SP::D10 },
  { 83U, SP::D11 },
  { 84U, SP::D12 },
  { 85U, SP::D13 },
  { 86U, SP::D14 },
  { 87U, SP::D15 },
};
extern const unsigned SPDwarfFlavour0Dwarf2LSize = sizeof(SPDwarfFlavour0Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair SPEHFlavour0Dwarf2L[] = {
  { 0U, SP::G0 },
  { 1U, SP::G1 },
  { 2U, SP::G2 },
  { 3U, SP::G3 },
  { 4U, SP::G4 },
  { 5U, SP::G5 },
  { 6U, SP::G6 },
  { 7U, SP::G7 },
  { 8U, SP::O0 },
  { 9U, SP::O1 },
  { 10U, SP::O2 },
  { 11U, SP::O3 },
  { 12U, SP::O4 },
  { 13U, SP::O5 },
  { 14U, SP::O6 },
  { 15U, SP::O7 },
  { 16U, SP::L0 },
  { 17U, SP::L1 },
  { 18U, SP::L2 },
  { 19U, SP::L3 },
  { 20U, SP::L4 },
  { 21U, SP::L5 },
  { 22U, SP::L6 },
  { 23U, SP::L7 },
  { 24U, SP::I0 },
  { 25U, SP::I1 },
  { 26U, SP::I2 },
  { 27U, SP::I3 },
  { 28U, SP::I4 },
  { 29U, SP::I5 },
  { 30U, SP::I6 },
  { 31U, SP::I7 },
  { 32U, SP::F0 },
  { 33U, SP::F1 },
  { 34U, SP::F2 },
  { 35U, SP::F3 },
  { 36U, SP::F4 },
  { 37U, SP::F5 },
  { 38U, SP::F6 },
  { 39U, SP::F7 },
  { 40U, SP::F8 },
  { 41U, SP::F9 },
  { 42U, SP::F10 },
  { 43U, SP::F11 },
  { 44U, SP::F12 },
  { 45U, SP::F13 },
  { 46U, SP::F14 },
  { 47U, SP::F15 },
  { 48U, SP::F16 },
  { 49U, SP::F17 },
  { 50U, SP::F18 },
  { 51U, SP::F19 },
  { 52U, SP::F20 },
  { 53U, SP::F21 },
  { 54U, SP::F22 },
  { 55U, SP::F23 },
  { 56U, SP::F24 },
  { 57U, SP::F25 },
  { 58U, SP::F26 },
  { 59U, SP::F27 },
  { 60U, SP::F28 },
  { 61U, SP::F29 },
  { 62U, SP::F30 },
  { 63U, SP::F31 },
  { 72U, SP::D0 },
  { 73U, SP::D1 },
  { 74U, SP::D2 },
  { 75U, SP::D3 },
  { 76U, SP::D4 },
  { 77U, SP::D5 },
  { 78U, SP::D6 },
  { 79U, SP::D7 },
  { 80U, SP::D8 },
  { 81U, SP::D9 },
  { 82U, SP::D10 },
  { 83U, SP::D11 },
  { 84U, SP::D12 },
  { 85U, SP::D13 },
  { 86U, SP::D14 },
  { 87U, SP::D15 },
};
extern const unsigned SPEHFlavour0Dwarf2LSize = sizeof(SPEHFlavour0Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair SPDwarfFlavour0L2Dwarf[] = {
  { SP::D0, 72U },
  { SP::D1, 73U },
  { SP::D2, 74U },
  { SP::D3, 75U },
  { SP::D4, 76U },
  { SP::D5, 77U },
  { SP::D6, 78U },
  { SP::D7, 79U },
  { SP::D8, 80U },
  { SP::D9, 81U },
  { SP::D10, 82U },
  { SP::D11, 83U },
  { SP::D12, 84U },
  { SP::D13, 85U },
  { SP::D14, 86U },
  { SP::D15, 87U },
  { SP::F0, 32U },
  { SP::F1, 33U },
  { SP::F2, 34U },
  { SP::F3, 35U },
  { SP::F4, 36U },
  { SP::F5, 37U },
  { SP::F6, 38U },
  { SP::F7, 39U },
  { SP::F8, 40U },
  { SP::F9, 41U },
  { SP::F10, 42U },
  { SP::F11, 43U },
  { SP::F12, 44U },
  { SP::F13, 45U },
  { SP::F14, 46U },
  { SP::F15, 47U },
  { SP::F16, 48U },
  { SP::F17, 49U },
  { SP::F18, 50U },
  { SP::F19, 51U },
  { SP::F20, 52U },
  { SP::F21, 53U },
  { SP::F22, 54U },
  { SP::F23, 55U },
  { SP::F24, 56U },
  { SP::F25, 57U },
  { SP::F26, 58U },
  { SP::F27, 59U },
  { SP::F28, 60U },
  { SP::F29, 61U },
  { SP::F30, 62U },
  { SP::F31, 63U },
  { SP::G0, 0U },
  { SP::G1, 1U },
  { SP::G2, 2U },
  { SP::G3, 3U },
  { SP::G4, 4U },
  { SP::G5, 5U },
  { SP::G6, 6U },
  { SP::G7, 7U },
  { SP::I0, 24U },
  { SP::I1, 25U },
  { SP::I2, 26U },
  { SP::I3, 27U },
  { SP::I4, 28U },
  { SP::I5, 29U },
  { SP::I6, 30U },
  { SP::I7, 31U },
  { SP::L0, 16U },
  { SP::L1, 17U },
  { SP::L2, 18U },
  { SP::L3, 19U },
  { SP::L4, 20U },
  { SP::L5, 21U },
  { SP::L6, 22U },
  { SP::L7, 23U },
  { SP::O0, 8U },
  { SP::O1, 9U },
  { SP::O2, 10U },
  { SP::O3, 11U },
  { SP::O4, 12U },
  { SP::O5, 13U },
  { SP::O6, 14U },
  { SP::O7, 15U },
};
extern const unsigned SPDwarfFlavour0L2DwarfSize = sizeof(SPDwarfFlavour0L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair SPEHFlavour0L2Dwarf[] = {
  { SP::D0, 72U },
  { SP::D1, 73U },
  { SP::D2, 74U },
  { SP::D3, 75U },
  { SP::D4, 76U },
  { SP::D5, 77U },
  { SP::D6, 78U },
  { SP::D7, 79U },
  { SP::D8, 80U },
  { SP::D9, 81U },
  { SP::D10, 82U },
  { SP::D11, 83U },
  { SP::D12, 84U },
  { SP::D13, 85U },
  { SP::D14, 86U },
  { SP::D15, 87U },
  { SP::F0, 32U },
  { SP::F1, 33U },
  { SP::F2, 34U },
  { SP::F3, 35U },
  { SP::F4, 36U },
  { SP::F5, 37U },
  { SP::F6, 38U },
  { SP::F7, 39U },
  { SP::F8, 40U },
  { SP::F9, 41U },
  { SP::F10, 42U },
  { SP::F11, 43U },
  { SP::F12, 44U },
  { SP::F13, 45U },
  { SP::F14, 46U },
  { SP::F15, 47U },
  { SP::F16, 48U },
  { SP::F17, 49U },
  { SP::F18, 50U },
  { SP::F19, 51U },
  { SP::F20, 52U },
  { SP::F21, 53U },
  { SP::F22, 54U },
  { SP::F23, 55U },
  { SP::F24, 56U },
  { SP::F25, 57U },
  { SP::F26, 58U },
  { SP::F27, 59U },
  { SP::F28, 60U },
  { SP::F29, 61U },
  { SP::F30, 62U },
  { SP::F31, 63U },
  { SP::G0, 0U },
  { SP::G1, 1U },
  { SP::G2, 2U },
  { SP::G3, 3U },
  { SP::G4, 4U },
  { SP::G5, 5U },
  { SP::G6, 6U },
  { SP::G7, 7U },
  { SP::I0, 24U },
  { SP::I1, 25U },
  { SP::I2, 26U },
  { SP::I3, 27U },
  { SP::I4, 28U },
  { SP::I5, 29U },
  { SP::I6, 30U },
  { SP::I7, 31U },
  { SP::L0, 16U },
  { SP::L1, 17U },
  { SP::L2, 18U },
  { SP::L3, 19U },
  { SP::L4, 20U },
  { SP::L5, 21U },
  { SP::L6, 22U },
  { SP::L7, 23U },
  { SP::O0, 8U },
  { SP::O1, 9U },
  { SP::O2, 10U },
  { SP::O3, 11U },
  { SP::O4, 12U },
  { SP::O5, 13U },
  { SP::O6, 14U },
  { SP::O7, 15U },
};
extern const unsigned SPEHFlavour0L2DwarfSize = sizeof(SPEHFlavour0L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const uint16_t SparcRegEncodingTable[] = {
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
};
static inline void InitSparcMCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0, unsigned PC = 0) {
  RI->InitMCRegisterInfo(SparcRegDesc, 84, RA, PC, SparcMCRegisterClasses, 4, SparcRegUnitRoots, 67, SparcRegDiffLists, SparcRegStrings, SparcSubRegIdxLists, 3,
SparcSubRegIdxRanges,   SparcRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(SPDwarfFlavour0Dwarf2L, SPDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(SPEHFlavour0Dwarf2L, SPEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(SPDwarfFlavour0L2Dwarf, SPDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(SPEHFlavour0L2Dwarf, SPEHFlavour0L2DwarfSize, true);
    break;
  }
}

} // End llvm namespace 
#endif // GET_REGINFO_MC_DESC

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Register Information Header Fragment                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_HEADER
#undef GET_REGINFO_HEADER
#include "llvm/Target/TargetRegisterInfo.h"

namespace llvm {

struct SparcGenRegisterInfo : public TargetRegisterInfo {
  explicit SparcGenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0, unsigned PC = 0);
  virtual bool needsStackRealignment(const MachineFunction &) const
     { return false; }
  virtual unsigned composeSubRegIndicesImpl(unsigned, unsigned) const;
  virtual const TargetRegisterClass *getSubClassWithSubReg(const TargetRegisterClass*, unsigned) const;
  virtual const RegClassWeight &getRegClassWeight(const TargetRegisterClass *RC) const;
  virtual unsigned getRegUnitWeight(unsigned RegUnit) const;
  virtual unsigned getNumRegPressureSets() const;
  virtual const char *getRegPressureSetName(unsigned Idx) const;
  virtual unsigned getRegPressureSetLimit(unsigned Idx) const;
  virtual const int *getRegClassPressureSets(const TargetRegisterClass *RC) const;
  virtual const int *getRegUnitPressureSets(unsigned RegUnit) const;
};

namespace SP { // Register classes
  extern const TargetRegisterClass FPRegsRegClass;
  extern const TargetRegisterClass IntRegsRegClass;
  extern const TargetRegisterClass I64RegsRegClass;
  extern const TargetRegisterClass DFPRegsRegClass;
} // end of namespace Sparc

} // End llvm namespace 
#endif // GET_REGINFO_HEADER

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Register and Register Classes Information                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_TARGET_DESC
#undef GET_REGINFO_TARGET_DESC
namespace llvm {

extern const MCRegisterClass SparcMCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::i32, MVT::i64, MVT::Other,
  /* 3 */ MVT::f32, MVT::Other,
  /* 5 */ MVT::f64, MVT::Other,
};

static const char *const SubRegIndexNameTable[] = { "sub_even", "sub_odd" };


static const unsigned SubRegIndexLaneMaskTable[] = {
  ~0u,
  0x00000001, // sub_even
  0x00000002, // sub_odd
 };



static const TargetRegisterClass *const NullRegClasses[] = { NULL };

static const uint32_t FPRegsSubClassMask[] = {
  0x00000001, 
  0x00000008, // sub_even
  0x00000008, // sub_odd
};

static const uint32_t IntRegsSubClassMask[] = {
  0x00000006, 
};

static const uint32_t I64RegsSubClassMask[] = {
  0x00000004, 
};

static const uint32_t DFPRegsSubClassMask[] = {
  0x00000008, 
};

static const uint16_t SuperRegIdxSeqs[] = {
  /* 0 */ 1, 2, 0,
};

static const TargetRegisterClass *const I64RegsSuperclasses[] = {
  &SP::IntRegsRegClass,
  NULL
};

namespace SP {   // Register class instances
  extern const TargetRegisterClass FPRegsRegClass = {
    &SparcMCRegisterClasses[FPRegsRegClassID],
    VTLists + 3,
    FPRegsSubClassMask,
    SuperRegIdxSeqs + 0,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass IntRegsRegClass = {
    &SparcMCRegisterClasses[IntRegsRegClassID],
    VTLists + 0,
    IntRegsSubClassMask,
    SuperRegIdxSeqs + 2,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass I64RegsRegClass = {
    &SparcMCRegisterClasses[I64RegsRegClassID],
    VTLists + 1,
    I64RegsSubClassMask,
    SuperRegIdxSeqs + 2,
    I64RegsSuperclasses,
    0
  };

  extern const TargetRegisterClass DFPRegsRegClass = {
    &SparcMCRegisterClasses[DFPRegsRegClassID],
    VTLists + 5,
    DFPRegsSubClassMask,
    SuperRegIdxSeqs + 2,
    NullRegClasses,
    0
  };

}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &SP::FPRegsRegClass,
    &SP::IntRegsRegClass,
    &SP::I64RegsRegClass,
    &SP::DFPRegsRegClass,
  };
}

static const TargetRegisterInfoDesc SparcRegInfoDesc[] = { // Extra Descriptors
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
};
unsigned SparcGenRegisterInfo::composeSubRegIndicesImpl(unsigned IdxA, unsigned IdxB) const {
  static const uint8_t Rows[1][2] = {
    { 0, 0, },
  };

  --IdxA; assert(IdxA < 2);
  --IdxB; assert(IdxB < 2);
  return Rows[0][IdxB];
}

const TargetRegisterClass *SparcGenRegisterInfo::getSubClassWithSubReg(const TargetRegisterClass *RC, unsigned Idx) const {
  static const uint8_t Table[4][2] = {
    {	// FPRegs
      0,	// sub_even
      0,	// sub_odd
    },
    {	// IntRegs
      0,	// sub_even
      0,	// sub_odd
    },
    {	// I64Regs
      0,	// sub_even
      0,	// sub_odd
    },
    {	// DFPRegs
      4,	// sub_even -> DFPRegs
      4,	// sub_odd -> DFPRegs
    },
  };
  assert(RC && "Missing regclass");
  if (!Idx) return RC;
  --Idx;
  assert(Idx < 2 && "Bad subreg");
  unsigned TV = Table[RC->getID()][Idx];
  return TV ? getRegClass(TV - 1) : 0;
}

/// Get the weight in units of pressure for this register class.
const RegClassWeight &SparcGenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {1, 32},  	// FPRegs
    {1, 32},  	// IntRegs
    {1, 32},  	// I64Regs
    {2, 32},  	// DFPRegs
    {0, 0} };
  return RCWeightTable[RC->getID()];
}

/// Get the weight in units of pressure for this register unit.
unsigned SparcGenRegisterInfo::
getRegUnitWeight(unsigned RegUnit) const {
  assert(RegUnit < 67 && "invalid register unit");
  // All register units have unit weight.
  return 1;
}


// Get the number of dimensions of register pressure.
unsigned SparcGenRegisterInfo::getNumRegPressureSets() const {
  return 2;
}

// Get the name of this register unit pressure set.
const char *SparcGenRegisterInfo::
getRegPressureSetName(unsigned Idx) const {
  static const char *PressureNameTable[] = {
    "FPRegs",
    "IntRegs",
    0 };
  return PressureNameTable[Idx];
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned SparcGenRegisterInfo::
getRegPressureSetLimit(unsigned Idx) const {
  static const unsigned PressureLimitTable[] = {
    32,  	// 0: FPRegs
    32,  	// 1: IntRegs
    0 };
  return PressureLimitTable[Idx];
}

/// Table of pressure sets per register class or unit.
static const int RCSetsTable[] = {
    0,  -1,  	// #0 FPRegs
    1,  -1,  	// #2 IntRegs
    1,  -1,  	// #4 I64Regs
    0,  -1,  	// #6 DFPRegs
    -1,  	// #8 inferred
    -1 };

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int* SparcGenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const unsigned RCSetStartTable[] = {
    0,2,4,6,0 };
  unsigned SetListStart = RCSetStartTable[RC->getID()];
  return &RCSetsTable[SetListStart];
}

/// Get the dimensions of register pressure impacted by this register unit.
/// Returns a -1 terminated array of pressure set IDs
const int* SparcGenRegisterInfo::
getRegUnitPressureSets(unsigned RegUnit) const {
  assert(RegUnit < 67 && "invalid register unit");
  static const unsigned RUSetStartTable[] = {
    8,8,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0 };
  unsigned SetListStart = RUSetStartTable[RegUnit];
  return &RCSetsTable[SetListStart];
}

extern const MCRegisterDesc SparcRegDesc[];
extern const MCPhysReg SparcRegDiffLists[];
extern const char SparcRegStrings[];
extern const uint16_t SparcRegUnitRoots[][2];
extern const uint16_t SparcSubRegIdxLists[];
extern const MCRegisterInfo::SubRegCoveredBits SparcSubRegIdxRanges[];
extern const uint16_t SparcRegEncodingTable[];
// SP Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair SPDwarfFlavour0Dwarf2L[];
extern const unsigned SPDwarfFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair SPEHFlavour0Dwarf2L[];
extern const unsigned SPEHFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair SPDwarfFlavour0L2Dwarf[];
extern const unsigned SPDwarfFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair SPEHFlavour0L2Dwarf[];
extern const unsigned SPEHFlavour0L2DwarfSize;

SparcGenRegisterInfo::
SparcGenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour, unsigned PC)
  : TargetRegisterInfo(SparcRegInfoDesc, RegisterClasses, RegisterClasses+4,
             SubRegIndexNameTable, SubRegIndexLaneMaskTable, 0xffffffff) {
  InitMCRegisterInfo(SparcRegDesc, 84, RA, PC,
                     SparcMCRegisterClasses, 4,
                     SparcRegUnitRoots,
                     67,
                     SparcRegDiffLists,
                     SparcRegStrings,
                     SparcSubRegIdxLists,
                     3,
                     SparcSubRegIdxRanges,
                     SparcRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(SPDwarfFlavour0Dwarf2L, SPDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(SPEHFlavour0Dwarf2L, SPEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(SPDwarfFlavour0L2Dwarf, SPDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(SPEHFlavour0L2Dwarf, SPEHFlavour0L2DwarfSize, true);
    break;
  }
}



} // End llvm namespace 
#endif // GET_REGINFO_TARGET_DESC

