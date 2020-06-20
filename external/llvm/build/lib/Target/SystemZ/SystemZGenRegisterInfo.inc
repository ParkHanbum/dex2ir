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
extern const MCRegisterClass SystemZMCRegisterClasses[];

namespace SystemZ {
enum {
  NoRegister,
  CC = 1,
  F0D = 2,
  F1D = 3,
  F2D = 4,
  F3D = 5,
  F4D = 6,
  F5D = 7,
  F6D = 8,
  F7D = 9,
  F8D = 10,
  F9D = 11,
  F10D = 12,
  F11D = 13,
  F12D = 14,
  F13D = 15,
  F14D = 16,
  F15D = 17,
  F0Q = 18,
  F1Q = 19,
  F4Q = 20,
  F5Q = 21,
  F8Q = 22,
  F9Q = 23,
  F12Q = 24,
  F13Q = 25,
  F0S = 26,
  F1S = 27,
  F2S = 28,
  F3S = 29,
  F4S = 30,
  F5S = 31,
  F6S = 32,
  F7S = 33,
  F8S = 34,
  F9S = 35,
  F10S = 36,
  F11S = 37,
  F12S = 38,
  F13S = 39,
  F14S = 40,
  F15S = 41,
  R0D = 42,
  R1D = 43,
  R2D = 44,
  R3D = 45,
  R4D = 46,
  R5D = 47,
  R6D = 48,
  R7D = 49,
  R8D = 50,
  R9D = 51,
  R10D = 52,
  R11D = 53,
  R12D = 54,
  R13D = 55,
  R14D = 56,
  R15D = 57,
  R0Q = 58,
  R2Q = 59,
  R4Q = 60,
  R6Q = 61,
  R8Q = 62,
  R10Q = 63,
  R12Q = 64,
  R14Q = 65,
  R0W = 66,
  R1W = 67,
  R2W = 68,
  R3W = 69,
  R4W = 70,
  R5W = 71,
  R6W = 72,
  R7W = 73,
  R8W = 74,
  R9W = 75,
  R10W = 76,
  R11W = 77,
  R12W = 78,
  R13W = 79,
  R14W = 80,
  R15W = 81,
  NUM_TARGET_REGS 	// 82
};
}

// Register classes
namespace SystemZ {
enum {
  FP32BitRegClassID = 0,
  GR32BitRegClassID = 1,
  ADDR32BitRegClassID = 2,
  CCRegsRegClassID = 3,
  FP64BitRegClassID = 4,
  GR64BitRegClassID = 5,
  ADDR64BitRegClassID = 6,
  FP128BitRegClassID = 7,
  GR128BitRegClassID = 8,
  ADDR128BitRegClassID = 9
  };
}

// Subregister indices
namespace SystemZ {
enum {
  NoSubRegister,
  subreg_32bit,	// 1
  subreg_high,	// 2
  subreg_low,	// 3
  subreg_low32,	// 4
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

extern const MCPhysReg SystemZRegDiffLists[] = {
  /* 0 */ 65437, 1, 0,
  /* 3 */ 65519, 2, 0,
  /* 6 */ 65521, 2, 0,
  /* 9 */ 65523, 2, 0,
  /* 12 */ 65525, 2, 0,
  /* 15 */ 65512, 8, 0,
  /* 18 */ 65512, 9, 0,
  /* 21 */ 65512, 10, 0,
  /* 24 */ 65512, 11, 0,
  /* 27 */ 65512, 12, 0,
  /* 30 */ 65512, 13, 0,
  /* 33 */ 65512, 14, 0,
  /* 36 */ 65512, 15, 0,
  /* 39 */ 65512, 16, 0,
  /* 42 */ 65520, 24, 65513, 24, 0,
  /* 47 */ 65521, 24, 65513, 24, 0,
  /* 52 */ 65522, 24, 65513, 24, 0,
  /* 57 */ 65523, 24, 65513, 24, 0,
  /* 62 */ 65524, 24, 65513, 24, 0,
  /* 67 */ 65525, 24, 65513, 24, 0,
  /* 72 */ 65526, 24, 65513, 24, 0,
  /* 77 */ 65527, 24, 65513, 24, 0,
  /* 82 */ 65520, 24, 65514, 24, 0,
  /* 87 */ 65522, 24, 65514, 24, 0,
  /* 92 */ 65524, 24, 65514, 24, 0,
  /* 97 */ 65526, 24, 65514, 24, 0,
  /* 102 */ 65487, 0,
  /* 104 */ 65511, 0,
  /* 106 */ 65535, 0,
};

extern const uint16_t SystemZSubRegIdxLists[] = {
  /* 0 */ 1, 0,
  /* 2 */ 2, 1, 3, 4, 0,
};

extern const MCRegisterInfo::SubRegCoveredBits SystemZSubRegIdxRanges[] = {
  { 65535, 65535 },
  { 0, 32 },	// subreg_32bit
  { 65535, 64 },	// subreg_high
  { 65535, 64 },	// subreg_low
  { 65535, 32 },	// subreg_low32
};

extern const char SystemZRegStrings[] = {
  /* 0 */ 'C', 'C', 0,
  /* 3 */ 'F', '1', '0', 'D', 0,
  /* 8 */ 'R', '1', '0', 'D', 0,
  /* 13 */ 'F', '0', 'D', 0,
  /* 17 */ 'R', '0', 'D', 0,
  /* 21 */ 'F', '1', '1', 'D', 0,
  /* 26 */ 'R', '1', '1', 'D', 0,
  /* 31 */ 'F', '1', 'D', 0,
  /* 35 */ 'R', '1', 'D', 0,
  /* 39 */ 'F', '1', '2', 'D', 0,
  /* 44 */ 'R', '1', '2', 'D', 0,
  /* 49 */ 'F', '2', 'D', 0,
  /* 53 */ 'R', '2', 'D', 0,
  /* 57 */ 'F', '1', '3', 'D', 0,
  /* 62 */ 'R', '1', '3', 'D', 0,
  /* 67 */ 'F', '3', 'D', 0,
  /* 71 */ 'R', '3', 'D', 0,
  /* 75 */ 'F', '1', '4', 'D', 0,
  /* 80 */ 'R', '1', '4', 'D', 0,
  /* 85 */ 'F', '4', 'D', 0,
  /* 89 */ 'R', '4', 'D', 0,
  /* 93 */ 'F', '1', '5', 'D', 0,
  /* 98 */ 'R', '1', '5', 'D', 0,
  /* 103 */ 'F', '5', 'D', 0,
  /* 107 */ 'R', '5', 'D', 0,
  /* 111 */ 'F', '6', 'D', 0,
  /* 115 */ 'R', '6', 'D', 0,
  /* 119 */ 'F', '7', 'D', 0,
  /* 123 */ 'R', '7', 'D', 0,
  /* 127 */ 'F', '8', 'D', 0,
  /* 131 */ 'R', '8', 'D', 0,
  /* 135 */ 'F', '9', 'D', 0,
  /* 139 */ 'R', '9', 'D', 0,
  /* 143 */ 'R', '1', '0', 'Q', 0,
  /* 148 */ 'F', '0', 'Q', 0,
  /* 152 */ 'R', '0', 'Q', 0,
  /* 156 */ 'F', '1', 'Q', 0,
  /* 160 */ 'F', '1', '2', 'Q', 0,
  /* 165 */ 'R', '1', '2', 'Q', 0,
  /* 170 */ 'R', '2', 'Q', 0,
  /* 174 */ 'F', '1', '3', 'Q', 0,
  /* 179 */ 'R', '1', '4', 'Q', 0,
  /* 184 */ 'F', '4', 'Q', 0,
  /* 188 */ 'R', '4', 'Q', 0,
  /* 192 */ 'F', '5', 'Q', 0,
  /* 196 */ 'R', '6', 'Q', 0,
  /* 200 */ 'F', '8', 'Q', 0,
  /* 204 */ 'R', '8', 'Q', 0,
  /* 208 */ 'F', '9', 'Q', 0,
  /* 212 */ 'F', '1', '0', 'S', 0,
  /* 217 */ 'F', '0', 'S', 0,
  /* 221 */ 'F', '1', '1', 'S', 0,
  /* 226 */ 'F', '1', 'S', 0,
  /* 230 */ 'F', '1', '2', 'S', 0,
  /* 235 */ 'F', '2', 'S', 0,
  /* 239 */ 'F', '1', '3', 'S', 0,
  /* 244 */ 'F', '3', 'S', 0,
  /* 248 */ 'F', '1', '4', 'S', 0,
  /* 253 */ 'F', '4', 'S', 0,
  /* 257 */ 'F', '1', '5', 'S', 0,
  /* 262 */ 'F', '5', 'S', 0,
  /* 266 */ 'F', '6', 'S', 0,
  /* 270 */ 'F', '7', 'S', 0,
  /* 274 */ 'F', '8', 'S', 0,
  /* 278 */ 'F', '9', 'S', 0,
  /* 282 */ 'R', '1', '0', 'W', 0,
  /* 287 */ 'R', '0', 'W', 0,
  /* 291 */ 'R', '1', '1', 'W', 0,
  /* 296 */ 'R', '1', 'W', 0,
  /* 300 */ 'R', '1', '2', 'W', 0,
  /* 305 */ 'R', '2', 'W', 0,
  /* 309 */ 'R', '1', '3', 'W', 0,
  /* 314 */ 'R', '3', 'W', 0,
  /* 318 */ 'R', '1', '4', 'W', 0,
  /* 323 */ 'R', '4', 'W', 0,
  /* 327 */ 'R', '1', '5', 'W', 0,
  /* 332 */ 'R', '5', 'W', 0,
  /* 336 */ 'R', '6', 'W', 0,
  /* 340 */ 'R', '7', 'W', 0,
  /* 344 */ 'R', '8', 'W', 0,
  /* 348 */ 'R', '9', 'W', 0,
};

extern const MCRegisterDesc SystemZRegDesc[] = { // Descriptors
  { 2, 0, 0, 0, 0 },
  { 0, 2, 2, 1, 1697 },
  { 13, 45, 40, 0, 1697 },
  { 31, 45, 40, 0, 1697 },
  { 49, 45, 34, 0, 1697 },
  { 67, 45, 34, 0, 1697 },
  { 85, 45, 34, 0, 1697 },
  { 103, 45, 34, 0, 1697 },
  { 111, 45, 28, 0, 1697 },
  { 119, 45, 28, 0, 1697 },
  { 127, 45, 28, 0, 1697 },
  { 135, 45, 28, 0, 1697 },
  { 3, 45, 22, 0, 1697 },
  { 21, 45, 22, 0, 1697 },
  { 39, 45, 22, 0, 1697 },
  { 57, 45, 22, 0, 1697 },
  { 75, 45, 16, 0, 1697 },
  { 93, 45, 16, 0, 1697 },
  { 148, 82, 2, 2, 49 },
  { 156, 82, 2, 2, 49 },
  { 184, 87, 2, 2, 97 },
  { 192, 87, 2, 2, 97 },
  { 200, 92, 2, 2, 145 },
  { 208, 92, 2, 2, 145 },
  { 160, 97, 2, 2, 193 },
  { 174, 97, 2, 2, 193 },
  { 217, 2, 39, 1, 1665 },
  { 226, 2, 39, 1, 1665 },
  { 235, 2, 33, 1, 1665 },
  { 244, 2, 33, 1, 1665 },
  { 253, 2, 33, 1, 1665 },
  { 262, 2, 33, 1, 1665 },
  { 266, 2, 27, 1, 1665 },
  { 270, 2, 27, 1, 1665 },
  { 274, 2, 27, 1, 1665 },
  { 278, 2, 27, 1, 1665 },
  { 212, 2, 21, 1, 1665 },
  { 221, 2, 21, 1, 1665 },
  { 230, 2, 21, 1, 1665 },
  { 239, 2, 21, 1, 1665 },
  { 248, 2, 15, 1, 1665 },
  { 257, 2, 15, 1, 1665 },
  { 17, 45, 40, 0, 1665 },
  { 35, 45, 37, 0, 1665 },
  { 53, 45, 37, 0, 1665 },
  { 71, 45, 34, 0, 1665 },
  { 89, 45, 34, 0, 1665 },
  { 107, 45, 31, 0, 1665 },
  { 115, 45, 31, 0, 1665 },
  { 123, 45, 28, 0, 1665 },
  { 131, 45, 28, 0, 1665 },
  { 139, 45, 25, 0, 1665 },
  { 8, 45, 25, 0, 1665 },
  { 26, 45, 22, 0, 1665 },
  { 44, 45, 22, 0, 1665 },
  { 62, 45, 19, 0, 1665 },
  { 80, 45, 19, 0, 1665 },
  { 98, 45, 16, 0, 1665 },
  { 152, 42, 2, 2, 2 },
  { 170, 47, 2, 2, 2 },
  { 188, 52, 2, 2, 2 },
  { 196, 57, 2, 2, 2 },
  { 204, 62, 2, 2, 2 },
  { 143, 67, 2, 2, 2 },
  { 165, 72, 2, 2, 2 },
  { 179, 77, 2, 2, 2 },
  { 287, 2, 39, 1, 1633 },
  { 296, 2, 36, 1, 1633 },
  { 305, 2, 36, 1, 1633 },
  { 314, 2, 33, 1, 1633 },
  { 323, 2, 33, 1, 1633 },
  { 332, 2, 30, 1, 1633 },
  { 336, 2, 30, 1, 1633 },
  { 340, 2, 27, 1, 1633 },
  { 344, 2, 27, 1, 1633 },
  { 348, 2, 24, 1, 1633 },
  { 282, 2, 24, 1, 1633 },
  { 291, 2, 21, 1, 1633 },
  { 300, 2, 21, 1, 1633 },
  { 309, 2, 18, 1, 1633 },
  { 318, 2, 18, 1, 1633 },
  { 327, 2, 15, 1, 1633 },
};

extern const uint16_t SystemZRegUnitRoots[][2] = {
  { SystemZ::CC },
  { SystemZ::F0S },
  { SystemZ::F1S },
  { SystemZ::F2S },
  { SystemZ::F3S },
  { SystemZ::F4S },
  { SystemZ::F5S },
  { SystemZ::F6S },
  { SystemZ::F7S },
  { SystemZ::F8S },
  { SystemZ::F9S },
  { SystemZ::F10S },
  { SystemZ::F11S },
  { SystemZ::F12S },
  { SystemZ::F13S },
  { SystemZ::F14S },
  { SystemZ::F15S },
  { SystemZ::R0W },
  { SystemZ::R1W },
  { SystemZ::R2W },
  { SystemZ::R3W },
  { SystemZ::R4W },
  { SystemZ::R5W },
  { SystemZ::R6W },
  { SystemZ::R7W },
  { SystemZ::R8W },
  { SystemZ::R9W },
  { SystemZ::R10W },
  { SystemZ::R11W },
  { SystemZ::R12W },
  { SystemZ::R13W },
  { SystemZ::R14W },
  { SystemZ::R15W },
};

namespace {     // Register classes...
  // FP32Bit Register Class...
  const uint16_t FP32Bit[] = {
    SystemZ::F0S, SystemZ::F1S, SystemZ::F2S, SystemZ::F3S, SystemZ::F4S, SystemZ::F5S, SystemZ::F6S, SystemZ::F7S, SystemZ::F8S, SystemZ::F9S, SystemZ::F10S, SystemZ::F11S, SystemZ::F12S, SystemZ::F13S, SystemZ::F14S, SystemZ::F15S, 
  };

  // FP32Bit Bit set.
  const uint8_t FP32BitBits[] = {
    0x00, 0x00, 0x00, 0xfc, 0xff, 0x03, 
  };

  // GR32Bit Register Class...
  const uint16_t GR32Bit[] = {
    SystemZ::R0W, SystemZ::R1W, SystemZ::R2W, SystemZ::R3W, SystemZ::R4W, SystemZ::R5W, SystemZ::R15W, SystemZ::R14W, SystemZ::R13W, SystemZ::R12W, SystemZ::R11W, SystemZ::R10W, SystemZ::R9W, SystemZ::R8W, SystemZ::R7W, SystemZ::R6W, 
  };

  // GR32Bit Bit set.
  const uint8_t GR32BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x03, 
  };

  // ADDR32Bit Register Class...
  const uint16_t ADDR32Bit[] = {
    SystemZ::R1W, SystemZ::R2W, SystemZ::R3W, SystemZ::R4W, SystemZ::R5W, SystemZ::R15W, SystemZ::R14W, SystemZ::R13W, SystemZ::R12W, SystemZ::R11W, SystemZ::R10W, SystemZ::R9W, SystemZ::R8W, SystemZ::R7W, SystemZ::R6W, 
  };

  // ADDR32Bit Bit set.
  const uint8_t ADDR32BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x03, 
  };

  // CCRegs Register Class...
  const uint16_t CCRegs[] = {
    SystemZ::CC, 
  };

  // CCRegs Bit set.
  const uint8_t CCRegsBits[] = {
    0x02, 
  };

  // FP64Bit Register Class...
  const uint16_t FP64Bit[] = {
    SystemZ::F0D, SystemZ::F1D, SystemZ::F2D, SystemZ::F3D, SystemZ::F4D, SystemZ::F5D, SystemZ::F6D, SystemZ::F7D, SystemZ::F8D, SystemZ::F9D, SystemZ::F10D, SystemZ::F11D, SystemZ::F12D, SystemZ::F13D, SystemZ::F14D, SystemZ::F15D, 
  };

  // FP64Bit Bit set.
  const uint8_t FP64BitBits[] = {
    0xfc, 0xff, 0x03, 
  };

  // GR64Bit Register Class...
  const uint16_t GR64Bit[] = {
    SystemZ::R0D, SystemZ::R1D, SystemZ::R2D, SystemZ::R3D, SystemZ::R4D, SystemZ::R5D, SystemZ::R15D, SystemZ::R14D, SystemZ::R13D, SystemZ::R12D, SystemZ::R11D, SystemZ::R10D, SystemZ::R9D, SystemZ::R8D, SystemZ::R7D, SystemZ::R6D, 
  };

  // GR64Bit Bit set.
  const uint8_t GR64BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x03, 
  };

  // ADDR64Bit Register Class...
  const uint16_t ADDR64Bit[] = {
    SystemZ::R1D, SystemZ::R2D, SystemZ::R3D, SystemZ::R4D, SystemZ::R5D, SystemZ::R15D, SystemZ::R14D, SystemZ::R13D, SystemZ::R12D, SystemZ::R11D, SystemZ::R10D, SystemZ::R9D, SystemZ::R8D, SystemZ::R7D, SystemZ::R6D, 
  };

  // ADDR64Bit Bit set.
  const uint8_t ADDR64BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x03, 
  };

  // FP128Bit Register Class...
  const uint16_t FP128Bit[] = {
    SystemZ::F0Q, SystemZ::F1Q, SystemZ::F4Q, SystemZ::F5Q, SystemZ::F8Q, SystemZ::F9Q, SystemZ::F12Q, SystemZ::F13Q, 
  };

  // FP128Bit Bit set.
  const uint8_t FP128BitBits[] = {
    0x00, 0x00, 0xfc, 0x03, 
  };

  // GR128Bit Register Class...
  const uint16_t GR128Bit[] = {
    SystemZ::R0Q, SystemZ::R2Q, SystemZ::R4Q, SystemZ::R12Q, SystemZ::R10Q, SystemZ::R8Q, SystemZ::R6Q, SystemZ::R14Q, 
  };

  // GR128Bit Bit set.
  const uint8_t GR128BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x03, 
  };

  // ADDR128Bit Register Class...
  const uint16_t ADDR128Bit[] = {
    SystemZ::R2Q, SystemZ::R4Q, SystemZ::R12Q, SystemZ::R10Q, SystemZ::R8Q, SystemZ::R6Q, SystemZ::R14Q, 
  };

  // ADDR128Bit Bit set.
  const uint8_t ADDR128BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x03, 
  };

}

extern const MCRegisterClass SystemZMCRegisterClasses[] = {
  { "FP32Bit", FP32Bit, FP32BitBits, 16, sizeof(FP32BitBits), SystemZ::FP32BitRegClassID, 4, 4, 1, 1 },
  { "GR32Bit", GR32Bit, GR32BitBits, 16, sizeof(GR32BitBits), SystemZ::GR32BitRegClassID, 4, 4, 1, 1 },
  { "ADDR32Bit", ADDR32Bit, ADDR32BitBits, 15, sizeof(ADDR32BitBits), SystemZ::ADDR32BitRegClassID, 4, 4, 1, 1 },
  { "CCRegs", CCRegs, CCRegsBits, 1, sizeof(CCRegsBits), SystemZ::CCRegsRegClassID, 4, 4, 1, 1 },
  { "FP64Bit", FP64Bit, FP64BitBits, 16, sizeof(FP64BitBits), SystemZ::FP64BitRegClassID, 8, 8, 1, 1 },
  { "GR64Bit", GR64Bit, GR64BitBits, 16, sizeof(GR64BitBits), SystemZ::GR64BitRegClassID, 8, 8, 1, 1 },
  { "ADDR64Bit", ADDR64Bit, ADDR64BitBits, 15, sizeof(ADDR64BitBits), SystemZ::ADDR64BitRegClassID, 8, 8, 1, 1 },
  { "FP128Bit", FP128Bit, FP128BitBits, 8, sizeof(FP128BitBits), SystemZ::FP128BitRegClassID, 16, 16, 1, 1 },
  { "GR128Bit", GR128Bit, GR128BitBits, 8, sizeof(GR128BitBits), SystemZ::GR128BitRegClassID, 16, 16, 1, 1 },
  { "ADDR128Bit", ADDR128Bit, ADDR128BitBits, 7, sizeof(ADDR128BitBits), SystemZ::ADDR128BitRegClassID, 16, 16, 1, 1 },
};

// SystemZ Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair SystemZDwarfFlavour0Dwarf2L[] = {
  { 0U, SystemZ::R0D },
  { 1U, SystemZ::R1D },
  { 2U, SystemZ::R2D },
  { 3U, SystemZ::R3D },
  { 4U, SystemZ::R4D },
  { 5U, SystemZ::R5D },
  { 6U, SystemZ::R6D },
  { 7U, SystemZ::R7D },
  { 8U, SystemZ::R8D },
  { 9U, SystemZ::R9D },
  { 10U, SystemZ::R10D },
  { 11U, SystemZ::R11D },
  { 12U, SystemZ::R12D },
  { 13U, SystemZ::R13D },
  { 14U, SystemZ::R14D },
  { 15U, SystemZ::R15D },
  { 16U, SystemZ::F0D },
  { 17U, SystemZ::F1D },
  { 18U, SystemZ::F2D },
  { 19U, SystemZ::F3D },
  { 20U, SystemZ::F4D },
  { 21U, SystemZ::F5D },
  { 22U, SystemZ::F6D },
  { 23U, SystemZ::F7D },
  { 24U, SystemZ::F8D },
  { 25U, SystemZ::F9D },
  { 26U, SystemZ::F10D },
  { 27U, SystemZ::F11D },
  { 28U, SystemZ::F12D },
  { 29U, SystemZ::F13D },
  { 30U, SystemZ::F14D },
  { 31U, SystemZ::F15D },
};
extern const unsigned SystemZDwarfFlavour0Dwarf2LSize = sizeof(SystemZDwarfFlavour0Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair SystemZEHFlavour0Dwarf2L[] = {
  { 0U, SystemZ::R0D },
  { 1U, SystemZ::R1D },
  { 2U, SystemZ::R2D },
  { 3U, SystemZ::R3D },
  { 4U, SystemZ::R4D },
  { 5U, SystemZ::R5D },
  { 6U, SystemZ::R6D },
  { 7U, SystemZ::R7D },
  { 8U, SystemZ::R8D },
  { 9U, SystemZ::R9D },
  { 10U, SystemZ::R10D },
  { 11U, SystemZ::R11D },
  { 12U, SystemZ::R12D },
  { 13U, SystemZ::R13D },
  { 14U, SystemZ::R14D },
  { 15U, SystemZ::R15D },
  { 16U, SystemZ::F0D },
  { 17U, SystemZ::F1D },
  { 18U, SystemZ::F2D },
  { 19U, SystemZ::F3D },
  { 20U, SystemZ::F4D },
  { 21U, SystemZ::F5D },
  { 22U, SystemZ::F6D },
  { 23U, SystemZ::F7D },
  { 24U, SystemZ::F8D },
  { 25U, SystemZ::F9D },
  { 26U, SystemZ::F10D },
  { 27U, SystemZ::F11D },
  { 28U, SystemZ::F12D },
  { 29U, SystemZ::F13D },
  { 30U, SystemZ::F14D },
  { 31U, SystemZ::F15D },
};
extern const unsigned SystemZEHFlavour0Dwarf2LSize = sizeof(SystemZEHFlavour0Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair SystemZDwarfFlavour0L2Dwarf[] = {
  { SystemZ::F0D, 16U },
  { SystemZ::F1D, 17U },
  { SystemZ::F2D, 18U },
  { SystemZ::F3D, 19U },
  { SystemZ::F4D, 20U },
  { SystemZ::F5D, 21U },
  { SystemZ::F6D, 22U },
  { SystemZ::F7D, 23U },
  { SystemZ::F8D, 24U },
  { SystemZ::F9D, 25U },
  { SystemZ::F10D, 26U },
  { SystemZ::F11D, 27U },
  { SystemZ::F12D, 28U },
  { SystemZ::F13D, 29U },
  { SystemZ::F14D, 30U },
  { SystemZ::F15D, 31U },
  { SystemZ::R0D, 0U },
  { SystemZ::R1D, 1U },
  { SystemZ::R2D, 2U },
  { SystemZ::R3D, 3U },
  { SystemZ::R4D, 4U },
  { SystemZ::R5D, 5U },
  { SystemZ::R6D, 6U },
  { SystemZ::R7D, 7U },
  { SystemZ::R8D, 8U },
  { SystemZ::R9D, 9U },
  { SystemZ::R10D, 10U },
  { SystemZ::R11D, 11U },
  { SystemZ::R12D, 12U },
  { SystemZ::R13D, 13U },
  { SystemZ::R14D, 14U },
  { SystemZ::R15D, 15U },
};
extern const unsigned SystemZDwarfFlavour0L2DwarfSize = sizeof(SystemZDwarfFlavour0L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair SystemZEHFlavour0L2Dwarf[] = {
  { SystemZ::F0D, 16U },
  { SystemZ::F1D, 17U },
  { SystemZ::F2D, 18U },
  { SystemZ::F3D, 19U },
  { SystemZ::F4D, 20U },
  { SystemZ::F5D, 21U },
  { SystemZ::F6D, 22U },
  { SystemZ::F7D, 23U },
  { SystemZ::F8D, 24U },
  { SystemZ::F9D, 25U },
  { SystemZ::F10D, 26U },
  { SystemZ::F11D, 27U },
  { SystemZ::F12D, 28U },
  { SystemZ::F13D, 29U },
  { SystemZ::F14D, 30U },
  { SystemZ::F15D, 31U },
  { SystemZ::R0D, 0U },
  { SystemZ::R1D, 1U },
  { SystemZ::R2D, 2U },
  { SystemZ::R3D, 3U },
  { SystemZ::R4D, 4U },
  { SystemZ::R5D, 5U },
  { SystemZ::R6D, 6U },
  { SystemZ::R7D, 7U },
  { SystemZ::R8D, 8U },
  { SystemZ::R9D, 9U },
  { SystemZ::R10D, 10U },
  { SystemZ::R11D, 11U },
  { SystemZ::R12D, 12U },
  { SystemZ::R13D, 13U },
  { SystemZ::R14D, 14U },
  { SystemZ::R15D, 15U },
};
extern const unsigned SystemZEHFlavour0L2DwarfSize = sizeof(SystemZEHFlavour0L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const uint16_t SystemZRegEncodingTable[] = {
  0,
  0,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  0,
  1,
  4,
  5,
  8,
  9,
  12,
  13,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  0,
  2,
  4,
  6,
  8,
  10,
  12,
  14,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
};
static inline void InitSystemZMCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0, unsigned PC = 0) {
  RI->InitMCRegisterInfo(SystemZRegDesc, 82, RA, PC, SystemZMCRegisterClasses, 10, SystemZRegUnitRoots, 33, SystemZRegDiffLists, SystemZRegStrings, SystemZSubRegIdxLists, 5,
SystemZSubRegIdxRanges,   SystemZRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(SystemZDwarfFlavour0Dwarf2L, SystemZDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(SystemZEHFlavour0Dwarf2L, SystemZEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(SystemZDwarfFlavour0L2Dwarf, SystemZDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(SystemZEHFlavour0L2Dwarf, SystemZEHFlavour0L2DwarfSize, true);
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

struct SystemZGenRegisterInfo : public TargetRegisterInfo {
  explicit SystemZGenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0, unsigned PC = 0);
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

namespace SystemZ { // Register classes
  extern const TargetRegisterClass FP32BitRegClass;
  extern const TargetRegisterClass GR32BitRegClass;
  extern const TargetRegisterClass ADDR32BitRegClass;
  extern const TargetRegisterClass CCRegsRegClass;
  extern const TargetRegisterClass FP64BitRegClass;
  extern const TargetRegisterClass GR64BitRegClass;
  extern const TargetRegisterClass ADDR64BitRegClass;
  extern const TargetRegisterClass FP128BitRegClass;
  extern const TargetRegisterClass GR128BitRegClass;
  extern const TargetRegisterClass ADDR128BitRegClass;
} // end of namespace SystemZ

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

extern const MCRegisterClass SystemZMCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::i32, MVT::Other,
  /* 2 */ MVT::i64, MVT::Other,
  /* 4 */ MVT::f32, MVT::Other,
  /* 6 */ MVT::f64, MVT::Other,
  /* 8 */ MVT::f128, MVT::Other,
  /* 10 */ MVT::Untyped, MVT::Other,
};

static const char *const SubRegIndexNameTable[] = { "subreg_32bit", "subreg_high", "subreg_low", "subreg_low32" };


static const unsigned SubRegIndexLaneMaskTable[] = {
  ~0u,
  0x00000001, // subreg_32bit
  0x00000001, // subreg_high
  0x00000002, // subreg_low
  0x00000002, // subreg_low32
 };



static const TargetRegisterClass *const NullRegClasses[] = { NULL };

static const uint32_t FP32BitSubClassMask[] = {
  0x00000001, 
  0x00000090, // subreg_32bit
  0x00000080, // subreg_low32
};

static const uint32_t GR32BitSubClassMask[] = {
  0x00000006, 
  0x00000360, // subreg_32bit
  0x00000300, // subreg_low32
};

static const uint32_t ADDR32BitSubClassMask[] = {
  0x00000004, 
  0x00000240, // subreg_32bit
  0x00000300, // subreg_low32
};

static const uint32_t CCRegsSubClassMask[] = {
  0x00000008, 
};

static const uint32_t FP64BitSubClassMask[] = {
  0x00000010, 
  0x00000080, // subreg_high
  0x00000080, // subreg_low
};

static const uint32_t GR64BitSubClassMask[] = {
  0x00000060, 
  0x00000300, // subreg_high
  0x00000300, // subreg_low
};

static const uint32_t ADDR64BitSubClassMask[] = {
  0x00000040, 
  0x00000200, // subreg_high
  0x00000300, // subreg_low
};

static const uint32_t FP128BitSubClassMask[] = {
  0x00000080, 
};

static const uint32_t GR128BitSubClassMask[] = {
  0x00000300, 
};

static const uint32_t ADDR128BitSubClassMask[] = {
  0x00000200, 
};

static const uint16_t SuperRegIdxSeqs[] = {
  /* 0 */ 2, 3, 0,
  /* 3 */ 1, 4, 0,
};

static const TargetRegisterClass *const ADDR32BitSuperclasses[] = {
  &SystemZ::GR32BitRegClass,
  NULL
};

static const TargetRegisterClass *const ADDR64BitSuperclasses[] = {
  &SystemZ::GR64BitRegClass,
  NULL
};

static const TargetRegisterClass *const ADDR128BitSuperclasses[] = {
  &SystemZ::GR128BitRegClass,
  NULL
};

namespace SystemZ {   // Register class instances
  extern const TargetRegisterClass FP32BitRegClass = {
    &SystemZMCRegisterClasses[FP32BitRegClassID],
    VTLists + 4,
    FP32BitSubClassMask,
    SuperRegIdxSeqs + 3,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass GR32BitRegClass = {
    &SystemZMCRegisterClasses[GR32BitRegClassID],
    VTLists + 0,
    GR32BitSubClassMask,
    SuperRegIdxSeqs + 3,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass ADDR32BitRegClass = {
    &SystemZMCRegisterClasses[ADDR32BitRegClassID],
    VTLists + 0,
    ADDR32BitSubClassMask,
    SuperRegIdxSeqs + 3,
    ADDR32BitSuperclasses,
    0
  };

  extern const TargetRegisterClass CCRegsRegClass = {
    &SystemZMCRegisterClasses[CCRegsRegClassID],
    VTLists + 0,
    CCRegsSubClassMask,
    SuperRegIdxSeqs + 2,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass FP64BitRegClass = {
    &SystemZMCRegisterClasses[FP64BitRegClassID],
    VTLists + 6,
    FP64BitSubClassMask,
    SuperRegIdxSeqs + 0,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass GR64BitRegClass = {
    &SystemZMCRegisterClasses[GR64BitRegClassID],
    VTLists + 2,
    GR64BitSubClassMask,
    SuperRegIdxSeqs + 0,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass ADDR64BitRegClass = {
    &SystemZMCRegisterClasses[ADDR64BitRegClassID],
    VTLists + 2,
    ADDR64BitSubClassMask,
    SuperRegIdxSeqs + 0,
    ADDR64BitSuperclasses,
    0
  };

  extern const TargetRegisterClass FP128BitRegClass = {
    &SystemZMCRegisterClasses[FP128BitRegClassID],
    VTLists + 8,
    FP128BitSubClassMask,
    SuperRegIdxSeqs + 2,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass GR128BitRegClass = {
    &SystemZMCRegisterClasses[GR128BitRegClassID],
    VTLists + 10,
    GR128BitSubClassMask,
    SuperRegIdxSeqs + 2,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass ADDR128BitRegClass = {
    &SystemZMCRegisterClasses[ADDR128BitRegClassID],
    VTLists + 10,
    ADDR128BitSubClassMask,
    SuperRegIdxSeqs + 2,
    ADDR128BitSuperclasses,
    0
  };

}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &SystemZ::FP32BitRegClass,
    &SystemZ::GR32BitRegClass,
    &SystemZ::ADDR32BitRegClass,
    &SystemZ::CCRegsRegClass,
    &SystemZ::FP64BitRegClass,
    &SystemZ::GR64BitRegClass,
    &SystemZ::ADDR64BitRegClass,
    &SystemZ::FP128BitRegClass,
    &SystemZ::GR128BitRegClass,
    &SystemZ::ADDR128BitRegClass,
  };
}

static const TargetRegisterInfoDesc SystemZRegInfoDesc[] = { // Extra Descriptors
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
  { 0, 1 },
};
unsigned SystemZGenRegisterInfo::composeSubRegIndicesImpl(unsigned IdxA, unsigned IdxB) const {
  static const uint8_t RowMap[4] = {
    0, 0, 1, 0, 
  };
  static const uint8_t Rows[2][4] = {
    { 1, 0, 0, 0, },
    { 4, 0, 0, 0, },
  };

  --IdxA; assert(IdxA < 4);
  --IdxB; assert(IdxB < 4);
  return Rows[RowMap[IdxA]][IdxB];
}

const TargetRegisterClass *SystemZGenRegisterInfo::getSubClassWithSubReg(const TargetRegisterClass *RC, unsigned Idx) const {
  static const uint8_t Table[10][4] = {
    {	// FP32Bit
      0,	// subreg_32bit
      0,	// subreg_high
      0,	// subreg_low
      0,	// subreg_low32
    },
    {	// GR32Bit
      0,	// subreg_32bit
      0,	// subreg_high
      0,	// subreg_low
      0,	// subreg_low32
    },
    {	// ADDR32Bit
      0,	// subreg_32bit
      0,	// subreg_high
      0,	// subreg_low
      0,	// subreg_low32
    },
    {	// CCRegs
      0,	// subreg_32bit
      0,	// subreg_high
      0,	// subreg_low
      0,	// subreg_low32
    },
    {	// FP64Bit
      5,	// subreg_32bit -> FP64Bit
      0,	// subreg_high
      0,	// subreg_low
      0,	// subreg_low32
    },
    {	// GR64Bit
      6,	// subreg_32bit -> GR64Bit
      0,	// subreg_high
      0,	// subreg_low
      0,	// subreg_low32
    },
    {	// ADDR64Bit
      7,	// subreg_32bit -> ADDR64Bit
      0,	// subreg_high
      0,	// subreg_low
      0,	// subreg_low32
    },
    {	// FP128Bit
      8,	// subreg_32bit -> FP128Bit
      8,	// subreg_high -> FP128Bit
      8,	// subreg_low -> FP128Bit
      8,	// subreg_low32 -> FP128Bit
    },
    {	// GR128Bit
      9,	// subreg_32bit -> GR128Bit
      9,	// subreg_high -> GR128Bit
      9,	// subreg_low -> GR128Bit
      9,	// subreg_low32 -> GR128Bit
    },
    {	// ADDR128Bit
      10,	// subreg_32bit -> ADDR128Bit
      10,	// subreg_high -> ADDR128Bit
      10,	// subreg_low -> ADDR128Bit
      10,	// subreg_low32 -> ADDR128Bit
    },
  };
  assert(RC && "Missing regclass");
  if (!Idx) return RC;
  --Idx;
  assert(Idx < 4 && "Bad subreg");
  unsigned TV = Table[RC->getID()][Idx];
  return TV ? getRegClass(TV - 1) : 0;
}

/// Get the weight in units of pressure for this register class.
const RegClassWeight &SystemZGenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {1, 16},  	// FP32Bit
    {1, 16},  	// GR32Bit
    {1, 15},  	// ADDR32Bit
    {1, 1},  	// CCRegs
    {1, 16},  	// FP64Bit
    {1, 16},  	// GR64Bit
    {1, 15},  	// ADDR64Bit
    {2, 16},  	// FP128Bit
    {2, 16},  	// GR128Bit
    {2, 14},  	// ADDR128Bit
    {0, 0} };
  return RCWeightTable[RC->getID()];
}

/// Get the weight in units of pressure for this register unit.
unsigned SystemZGenRegisterInfo::
getRegUnitWeight(unsigned RegUnit) const {
  assert(RegUnit < 33 && "invalid register unit");
  // All register units have unit weight.
  return 1;
}


// Get the number of dimensions of register pressure.
unsigned SystemZGenRegisterInfo::getNumRegPressureSets() const {
  return 3;
}

// Get the name of this register unit pressure set.
const char *SystemZGenRegisterInfo::
getRegPressureSetName(unsigned Idx) const {
  static const char *PressureNameTable[] = {
    "CCRegs",
    "FP32Bit",
    "GR32Bit",
    0 };
  return PressureNameTable[Idx];
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned SystemZGenRegisterInfo::
getRegPressureSetLimit(unsigned Idx) const {
  static const unsigned PressureLimitTable[] = {
    1,  	// 0: CCRegs
    16,  	// 1: FP32Bit
    16,  	// 2: GR32Bit
    0 };
  return PressureLimitTable[Idx];
}

/// Table of pressure sets per register class or unit.
static const int RCSetsTable[] = {
    1,  -1,  	// #0 FP32Bit
    2,  -1,  	// #2 GR32Bit
    2,  -1,  	// #4 ADDR32Bit
    0,  -1,  	// #6 CCRegs
    1,  -1,  	// #8 FP64Bit
    2,  -1,  	// #10 GR64Bit
    2,  -1,  	// #12 ADDR64Bit
    1,  -1,  	// #14 FP128Bit
    2,  -1,  	// #16 GR128Bit
    2,  -1,  	// #18 ADDR128Bit
    -1 };

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int* SystemZGenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const unsigned RCSetStartTable[] = {
    0,2,4,6,8,10,12,14,16,18,0 };
  unsigned SetListStart = RCSetStartTable[RC->getID()];
  return &RCSetsTable[SetListStart];
}

/// Get the dimensions of register pressure impacted by this register unit.
/// Returns a -1 terminated array of pressure set IDs
const int* SystemZGenRegisterInfo::
getRegUnitPressureSets(unsigned RegUnit) const {
  assert(RegUnit < 33 && "invalid register unit");
  static const unsigned RUSetStartTable[] = {
    6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0 };
  unsigned SetListStart = RUSetStartTable[RegUnit];
  return &RCSetsTable[SetListStart];
}

extern const MCRegisterDesc SystemZRegDesc[];
extern const MCPhysReg SystemZRegDiffLists[];
extern const char SystemZRegStrings[];
extern const uint16_t SystemZRegUnitRoots[][2];
extern const uint16_t SystemZSubRegIdxLists[];
extern const MCRegisterInfo::SubRegCoveredBits SystemZSubRegIdxRanges[];
extern const uint16_t SystemZRegEncodingTable[];
// SystemZ Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair SystemZDwarfFlavour0Dwarf2L[];
extern const unsigned SystemZDwarfFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair SystemZEHFlavour0Dwarf2L[];
extern const unsigned SystemZEHFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair SystemZDwarfFlavour0L2Dwarf[];
extern const unsigned SystemZDwarfFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair SystemZEHFlavour0L2Dwarf[];
extern const unsigned SystemZEHFlavour0L2DwarfSize;

SystemZGenRegisterInfo::
SystemZGenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour, unsigned PC)
  : TargetRegisterInfo(SystemZRegInfoDesc, RegisterClasses, RegisterClasses+10,
             SubRegIndexNameTable, SubRegIndexLaneMaskTable, 0xfffffffc) {
  InitMCRegisterInfo(SystemZRegDesc, 82, RA, PC,
                     SystemZMCRegisterClasses, 10,
                     SystemZRegUnitRoots,
                     33,
                     SystemZRegDiffLists,
                     SystemZRegStrings,
                     SystemZSubRegIdxLists,
                     5,
                     SystemZSubRegIdxRanges,
                     SystemZRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(SystemZDwarfFlavour0Dwarf2L, SystemZDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(SystemZEHFlavour0Dwarf2L, SystemZEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(SystemZDwarfFlavour0L2Dwarf, SystemZDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(SystemZEHFlavour0L2Dwarf, SystemZEHFlavour0L2DwarfSize, true);
    break;
  }
}



} // End llvm namespace 
#endif // GET_REGINFO_TARGET_DESC

