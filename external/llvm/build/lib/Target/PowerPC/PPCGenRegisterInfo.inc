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
extern const MCRegisterClass PPCMCRegisterClasses[];

namespace PPC {
enum {
  NoRegister,
  BP = 1,
  CARRY = 2,
  CTR = 3,
  FP = 4,
  LR = 5,
  RM = 6,
  VRSAVE = 7,
  ZERO = 8,
  BP8 = 9,
  CR0 = 10,
  CR1 = 11,
  CR2 = 12,
  CR3 = 13,
  CR4 = 14,
  CR5 = 15,
  CR6 = 16,
  CR7 = 17,
  CTR8 = 18,
  F0 = 19,
  F1 = 20,
  F2 = 21,
  F3 = 22,
  F4 = 23,
  F5 = 24,
  F6 = 25,
  F7 = 26,
  F8 = 27,
  F9 = 28,
  F10 = 29,
  F11 = 30,
  F12 = 31,
  F13 = 32,
  F14 = 33,
  F15 = 34,
  F16 = 35,
  F17 = 36,
  F18 = 37,
  F19 = 38,
  F20 = 39,
  F21 = 40,
  F22 = 41,
  F23 = 42,
  F24 = 43,
  F25 = 44,
  F26 = 45,
  F27 = 46,
  F28 = 47,
  F29 = 48,
  F30 = 49,
  F31 = 50,
  FP8 = 51,
  LR8 = 52,
  R0 = 53,
  R1 = 54,
  R2 = 55,
  R3 = 56,
  R4 = 57,
  R5 = 58,
  R6 = 59,
  R7 = 60,
  R8 = 61,
  R9 = 62,
  R10 = 63,
  R11 = 64,
  R12 = 65,
  R13 = 66,
  R14 = 67,
  R15 = 68,
  R16 = 69,
  R17 = 70,
  R18 = 71,
  R19 = 72,
  R20 = 73,
  R21 = 74,
  R22 = 75,
  R23 = 76,
  R24 = 77,
  R25 = 78,
  R26 = 79,
  R27 = 80,
  R28 = 81,
  R29 = 82,
  R30 = 83,
  R31 = 84,
  V0 = 85,
  V1 = 86,
  V2 = 87,
  V3 = 88,
  V4 = 89,
  V5 = 90,
  V6 = 91,
  V7 = 92,
  V8 = 93,
  V9 = 94,
  V10 = 95,
  V11 = 96,
  V12 = 97,
  V13 = 98,
  V14 = 99,
  V15 = 100,
  V16 = 101,
  V17 = 102,
  V18 = 103,
  V19 = 104,
  V20 = 105,
  V21 = 106,
  V22 = 107,
  V23 = 108,
  V24 = 109,
  V25 = 110,
  V26 = 111,
  V27 = 112,
  V28 = 113,
  V29 = 114,
  V30 = 115,
  V31 = 116,
  X0 = 117,
  X1 = 118,
  X2 = 119,
  X3 = 120,
  X4 = 121,
  X5 = 122,
  X6 = 123,
  X7 = 124,
  X8 = 125,
  X9 = 126,
  X10 = 127,
  X11 = 128,
  X12 = 129,
  X13 = 130,
  X14 = 131,
  X15 = 132,
  X16 = 133,
  X17 = 134,
  X18 = 135,
  X19 = 136,
  X20 = 137,
  X21 = 138,
  X22 = 139,
  X23 = 140,
  X24 = 141,
  X25 = 142,
  X26 = 143,
  X27 = 144,
  X28 = 145,
  X29 = 146,
  X30 = 147,
  X31 = 148,
  ZERO8 = 149,
  CR0EQ = 150,
  CR1EQ = 151,
  CR2EQ = 152,
  CR3EQ = 153,
  CR4EQ = 154,
  CR5EQ = 155,
  CR6EQ = 156,
  CR7EQ = 157,
  CR0GT = 158,
  CR1GT = 159,
  CR2GT = 160,
  CR3GT = 161,
  CR4GT = 162,
  CR5GT = 163,
  CR6GT = 164,
  CR7GT = 165,
  CR0LT = 166,
  CR1LT = 167,
  CR2LT = 168,
  CR3LT = 169,
  CR4LT = 170,
  CR5LT = 171,
  CR6LT = 172,
  CR7LT = 173,
  CR0UN = 174,
  CR1UN = 175,
  CR2UN = 176,
  CR3UN = 177,
  CR4UN = 178,
  CR5UN = 179,
  CR6UN = 180,
  CR7UN = 181,
  NUM_TARGET_REGS 	// 182
};
}

// Register classes
namespace PPC {
enum {
  GPRCRegClassID = 0,
  GPRC_NOR0RegClassID = 1,
  GPRC_and_GPRC_NOR0RegClassID = 2,
  CRBITRCRegClassID = 3,
  F4RCRegClassID = 4,
  CRRCRegClassID = 5,
  CARRYRCRegClassID = 6,
  CTRRCRegClassID = 7,
  VRSAVERCRegClassID = 8,
  G8RCRegClassID = 9,
  G8RC_NOX0RegClassID = 10,
  G8RC_and_G8RC_NOX0RegClassID = 11,
  F8RCRegClassID = 12,
  CTRRC8RegClassID = 13,
  VRRCRegClassID = 14
  };
}

// Subregister indices
namespace PPC {
enum {
  NoSubRegister,
  sub_32,	// 1
  sub_eq,	// 2
  sub_gt,	// 3
  sub_lt,	// 4
  sub_un,	// 5
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

extern const MCPhysReg PPCRegDiffLists[] = {
  /* 0 */ 0, 0,
  /* 2 */ 65504, 1, 1, 1, 0,
  /* 7 */ 3, 0,
  /* 9 */ 8, 0,
  /* 11 */ 21, 0,
  /* 13 */ 22, 0,
  /* 15 */ 156, 65528, 65528, 24, 0,
  /* 20 */ 47, 0,
  /* 22 */ 64, 0,
  /* 24 */ 141, 0,
  /* 26 */ 64851, 0,
  /* 28 */ 64880, 0,
  /* 30 */ 64913, 0,
  /* 32 */ 64946, 0,
  /* 34 */ 65096, 0,
  /* 36 */ 65372, 0,
  /* 38 */ 65380, 0,
  /* 40 */ 65388, 0,
  /* 42 */ 65395, 0,
  /* 44 */ 65396, 0,
  /* 46 */ 65472, 0,
  /* 48 */ 65489, 0,
  /* 50 */ 65493, 0,
  /* 52 */ 65528, 0,
  /* 54 */ 65535, 0,
};

extern const uint16_t PPCSubRegIdxLists[] = {
  /* 0 */ 1, 0,
  /* 2 */ 4, 3, 2, 5, 0,
};

extern const MCRegisterInfo::SubRegCoveredBits PPCSubRegIdxRanges[] = {
  { 65535, 65535 },
  { 0, 32 },	// sub_32
  { 2, 1 },	// sub_eq
  { 1, 1 },	// sub_gt
  { 0, 1 },	// sub_lt
  { 3, 1 },	// sub_un
};

extern const char PPCRegStrings[] = {
  /* 0 */ 'F', '1', '0', 0,
  /* 4 */ 'R', '1', '0', 0,
  /* 8 */ 'V', '1', '0', 0,
  /* 12 */ 'X', '1', '0', 0,
  /* 16 */ 'F', '2', '0', 0,
  /* 20 */ 'R', '2', '0', 0,
  /* 24 */ 'V', '2', '0', 0,
  /* 28 */ 'X', '2', '0', 0,
  /* 32 */ 'F', '3', '0', 0,
  /* 36 */ 'R', '3', '0', 0,
  /* 40 */ 'V', '3', '0', 0,
  /* 44 */ 'X', '3', '0', 0,
  /* 48 */ 'F', '0', 0,
  /* 51 */ 'C', 'R', '0', 0,
  /* 55 */ 'V', '0', 0,
  /* 58 */ 'X', '0', 0,
  /* 61 */ 'F', '1', '1', 0,
  /* 65 */ 'R', '1', '1', 0,
  /* 69 */ 'V', '1', '1', 0,
  /* 73 */ 'X', '1', '1', 0,
  /* 77 */ 'F', '2', '1', 0,
  /* 81 */ 'R', '2', '1', 0,
  /* 85 */ 'V', '2', '1', 0,
  /* 89 */ 'X', '2', '1', 0,
  /* 93 */ 'F', '3', '1', 0,
  /* 97 */ 'R', '3', '1', 0,
  /* 101 */ 'V', '3', '1', 0,
  /* 105 */ 'X', '3', '1', 0,
  /* 109 */ 'F', '1', 0,
  /* 112 */ 'C', 'R', '1', 0,
  /* 116 */ 'V', '1', 0,
  /* 119 */ 'X', '1', 0,
  /* 122 */ 'F', '1', '2', 0,
  /* 126 */ 'R', '1', '2', 0,
  /* 130 */ 'V', '1', '2', 0,
  /* 134 */ 'X', '1', '2', 0,
  /* 138 */ 'F', '2', '2', 0,
  /* 142 */ 'R', '2', '2', 0,
  /* 146 */ 'V', '2', '2', 0,
  /* 150 */ 'X', '2', '2', 0,
  /* 154 */ 'F', '2', 0,
  /* 157 */ 'C', 'R', '2', 0,
  /* 161 */ 'V', '2', 0,
  /* 164 */ 'X', '2', 0,
  /* 167 */ 'F', '1', '3', 0,
  /* 171 */ 'R', '1', '3', 0,
  /* 175 */ 'V', '1', '3', 0,
  /* 179 */ 'X', '1', '3', 0,
  /* 183 */ 'F', '2', '3', 0,
  /* 187 */ 'R', '2', '3', 0,
  /* 191 */ 'V', '2', '3', 0,
  /* 195 */ 'X', '2', '3', 0,
  /* 199 */ 'F', '3', 0,
  /* 202 */ 'C', 'R', '3', 0,
  /* 206 */ 'V', '3', 0,
  /* 209 */ 'X', '3', 0,
  /* 212 */ 'F', '1', '4', 0,
  /* 216 */ 'R', '1', '4', 0,
  /* 220 */ 'V', '1', '4', 0,
  /* 224 */ 'X', '1', '4', 0,
  /* 228 */ 'F', '2', '4', 0,
  /* 232 */ 'R', '2', '4', 0,
  /* 236 */ 'V', '2', '4', 0,
  /* 240 */ 'X', '2', '4', 0,
  /* 244 */ 'F', '4', 0,
  /* 247 */ 'C', 'R', '4', 0,
  /* 251 */ 'V', '4', 0,
  /* 254 */ 'X', '4', 0,
  /* 257 */ 'F', '1', '5', 0,
  /* 261 */ 'R', '1', '5', 0,
  /* 265 */ 'V', '1', '5', 0,
  /* 269 */ 'X', '1', '5', 0,
  /* 273 */ 'F', '2', '5', 0,
  /* 277 */ 'R', '2', '5', 0,
  /* 281 */ 'V', '2', '5', 0,
  /* 285 */ 'X', '2', '5', 0,
  /* 289 */ 'F', '5', 0,
  /* 292 */ 'C', 'R', '5', 0,
  /* 296 */ 'V', '5', 0,
  /* 299 */ 'X', '5', 0,
  /* 302 */ 'F', '1', '6', 0,
  /* 306 */ 'R', '1', '6', 0,
  /* 310 */ 'V', '1', '6', 0,
  /* 314 */ 'X', '1', '6', 0,
  /* 318 */ 'F', '2', '6', 0,
  /* 322 */ 'R', '2', '6', 0,
  /* 326 */ 'V', '2', '6', 0,
  /* 330 */ 'X', '2', '6', 0,
  /* 334 */ 'F', '6', 0,
  /* 337 */ 'C', 'R', '6', 0,
  /* 341 */ 'V', '6', 0,
  /* 344 */ 'X', '6', 0,
  /* 347 */ 'F', '1', '7', 0,
  /* 351 */ 'R', '1', '7', 0,
  /* 355 */ 'V', '1', '7', 0,
  /* 359 */ 'X', '1', '7', 0,
  /* 363 */ 'F', '2', '7', 0,
  /* 367 */ 'R', '2', '7', 0,
  /* 371 */ 'V', '2', '7', 0,
  /* 375 */ 'X', '2', '7', 0,
  /* 379 */ 'F', '7', 0,
  /* 382 */ 'C', 'R', '7', 0,
  /* 386 */ 'V', '7', 0,
  /* 389 */ 'X', '7', 0,
  /* 392 */ 'F', '1', '8', 0,
  /* 396 */ 'R', '1', '8', 0,
  /* 400 */ 'V', '1', '8', 0,
  /* 404 */ 'X', '1', '8', 0,
  /* 408 */ 'F', '2', '8', 0,
  /* 412 */ 'R', '2', '8', 0,
  /* 416 */ 'V', '2', '8', 0,
  /* 420 */ 'X', '2', '8', 0,
  /* 424 */ 'F', '8', 0,
  /* 427 */ 'Z', 'E', 'R', 'O', '8', 0,
  /* 433 */ 'B', 'P', '8', 0,
  /* 437 */ 'F', 'P', '8', 0,
  /* 441 */ 'L', 'R', '8', 0,
  /* 445 */ 'C', 'T', 'R', '8', 0,
  /* 450 */ 'V', '8', 0,
  /* 453 */ 'X', '8', 0,
  /* 456 */ 'F', '1', '9', 0,
  /* 460 */ 'R', '1', '9', 0,
  /* 464 */ 'V', '1', '9', 0,
  /* 468 */ 'X', '1', '9', 0,
  /* 472 */ 'F', '2', '9', 0,
  /* 476 */ 'R', '2', '9', 0,
  /* 480 */ 'V', '2', '9', 0,
  /* 484 */ 'X', '2', '9', 0,
  /* 488 */ 'F', '9', 0,
  /* 491 */ 'R', '9', 0,
  /* 494 */ 'V', '9', 0,
  /* 497 */ 'X', '9', 0,
  /* 500 */ 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 507 */ 'R', 'M', 0,
  /* 510 */ 'C', 'R', '0', 'U', 'N', 0,
  /* 516 */ 'C', 'R', '1', 'U', 'N', 0,
  /* 522 */ 'C', 'R', '2', 'U', 'N', 0,
  /* 528 */ 'C', 'R', '3', 'U', 'N', 0,
  /* 534 */ 'C', 'R', '4', 'U', 'N', 0,
  /* 540 */ 'C', 'R', '5', 'U', 'N', 0,
  /* 546 */ 'C', 'R', '6', 'U', 'N', 0,
  /* 552 */ 'C', 'R', '7', 'U', 'N', 0,
  /* 558 */ 'Z', 'E', 'R', 'O', 0,
  /* 563 */ 'B', 'P', 0,
  /* 566 */ 'F', 'P', 0,
  /* 569 */ 'C', 'R', '0', 'E', 'Q', 0,
  /* 575 */ 'C', 'R', '1', 'E', 'Q', 0,
  /* 581 */ 'C', 'R', '2', 'E', 'Q', 0,
  /* 587 */ 'C', 'R', '3', 'E', 'Q', 0,
  /* 593 */ 'C', 'R', '4', 'E', 'Q', 0,
  /* 599 */ 'C', 'R', '5', 'E', 'Q', 0,
  /* 605 */ 'C', 'R', '6', 'E', 'Q', 0,
  /* 611 */ 'C', 'R', '7', 'E', 'Q', 0,
  /* 617 */ 'L', 'R', 0,
  /* 620 */ 'C', 'T', 'R', 0,
  /* 624 */ 'C', 'R', '0', 'G', 'T', 0,
  /* 630 */ 'C', 'R', '1', 'G', 'T', 0,
  /* 636 */ 'C', 'R', '2', 'G', 'T', 0,
  /* 642 */ 'C', 'R', '3', 'G', 'T', 0,
  /* 648 */ 'C', 'R', '4', 'G', 'T', 0,
  /* 654 */ 'C', 'R', '5', 'G', 'T', 0,
  /* 660 */ 'C', 'R', '6', 'G', 'T', 0,
  /* 666 */ 'C', 'R', '7', 'G', 'T', 0,
  /* 672 */ 'C', 'R', '0', 'L', 'T', 0,
  /* 678 */ 'C', 'R', '1', 'L', 'T', 0,
  /* 684 */ 'C', 'R', '2', 'L', 'T', 0,
  /* 690 */ 'C', 'R', '3', 'L', 'T', 0,
  /* 696 */ 'C', 'R', '4', 'L', 'T', 0,
  /* 702 */ 'C', 'R', '5', 'L', 'T', 0,
  /* 708 */ 'C', 'R', '6', 'L', 'T', 0,
  /* 714 */ 'C', 'R', '7', 'L', 'T', 0,
  /* 720 */ 'C', 'A', 'R', 'R', 'Y', 0,
};

extern const MCRegisterDesc PPCRegDesc[] = { // Descriptors
  { 3, 0, 0, 0, 0 },
  { 563, 1, 9, 1, 865 },
  { 720, 1, 1, 1, 865 },
  { 620, 1, 1, 1, 865 },
  { 566, 1, 20, 1, 865 },
  { 617, 1, 1, 1, 865 },
  { 507, 1, 1, 1, 865 },
  { 500, 1, 1, 1, 865 },
  { 558, 1, 24, 1, 865 },
  { 433, 52, 1, 0, 0 },
  { 51, 15, 1, 2, 36 },
  { 112, 15, 1, 2, 36 },
  { 157, 15, 1, 2, 36 },
  { 202, 15, 1, 2, 36 },
  { 247, 15, 1, 2, 36 },
  { 292, 15, 1, 2, 36 },
  { 337, 15, 1, 2, 36 },
  { 382, 15, 1, 2, 36 },
  { 445, 1, 1, 1, 209 },
  { 48, 1, 1, 1, 209 },
  { 109, 1, 1, 1, 209 },
  { 154, 1, 1, 1, 209 },
  { 199, 1, 1, 1, 209 },
  { 244, 1, 1, 1, 209 },
  { 289, 1, 1, 1, 209 },
  { 334, 1, 1, 1, 209 },
  { 379, 1, 1, 1, 209 },
  { 424, 1, 1, 1, 209 },
  { 488, 1, 1, 1, 209 },
  { 0, 1, 1, 1, 209 },
  { 61, 1, 1, 1, 209 },
  { 122, 1, 1, 1, 209 },
  { 167, 1, 1, 1, 209 },
  { 212, 1, 1, 1, 209 },
  { 257, 1, 1, 1, 209 },
  { 302, 1, 1, 1, 209 },
  { 347, 1, 1, 1, 209 },
  { 392, 1, 1, 1, 209 },
  { 456, 1, 1, 1, 209 },
  { 16, 1, 1, 1, 209 },
  { 77, 1, 1, 1, 209 },
  { 138, 1, 1, 1, 209 },
  { 183, 1, 1, 1, 209 },
  { 228, 1, 1, 1, 209 },
  { 273, 1, 1, 1, 209 },
  { 318, 1, 1, 1, 209 },
  { 363, 1, 1, 1, 209 },
  { 408, 1, 1, 1, 209 },
  { 472, 1, 1, 1, 209 },
  { 32, 1, 1, 1, 209 },
  { 93, 1, 1, 1, 209 },
  { 437, 48, 1, 0, 112 },
  { 441, 1, 1, 1, 177 },
  { 52, 1, 22, 1, 177 },
  { 113, 1, 22, 1, 177 },
  { 158, 1, 22, 1, 177 },
  { 203, 1, 22, 1, 177 },
  { 248, 1, 22, 1, 177 },
  { 293, 1, 22, 1, 177 },
  { 338, 1, 22, 1, 177 },
  { 383, 1, 22, 1, 177 },
  { 442, 1, 22, 1, 177 },
  { 491, 1, 22, 1, 177 },
  { 4, 1, 22, 1, 177 },
  { 65, 1, 22, 1, 177 },
  { 126, 1, 22, 1, 177 },
  { 171, 1, 22, 1, 177 },
  { 216, 1, 22, 1, 177 },
  { 261, 1, 22, 1, 177 },
  { 306, 1, 22, 1, 177 },
  { 351, 1, 22, 1, 177 },
  { 396, 1, 22, 1, 177 },
  { 460, 1, 22, 1, 177 },
  { 20, 1, 22, 1, 177 },
  { 81, 1, 22, 1, 177 },
  { 142, 1, 22, 1, 177 },
  { 187, 1, 22, 1, 177 },
  { 232, 1, 22, 1, 177 },
  { 277, 1, 22, 1, 177 },
  { 322, 1, 22, 1, 177 },
  { 367, 1, 22, 1, 177 },
  { 412, 1, 22, 1, 177 },
  { 476, 1, 22, 1, 177 },
  { 36, 1, 22, 1, 177 },
  { 97, 1, 22, 1, 177 },
  { 55, 1, 1, 1, 177 },
  { 116, 1, 1, 1, 177 },
  { 161, 1, 1, 1, 177 },
  { 206, 1, 1, 1, 177 },
  { 251, 1, 1, 1, 177 },
  { 296, 1, 1, 1, 177 },
  { 341, 1, 1, 1, 177 },
  { 386, 1, 1, 1, 177 },
  { 450, 1, 1, 1, 177 },
  { 494, 1, 1, 1, 177 },
  { 8, 1, 1, 1, 177 },
  { 69, 1, 1, 1, 177 },
  { 130, 1, 1, 1, 177 },
  { 175, 1, 1, 1, 177 },
  { 220, 1, 1, 1, 177 },
  { 265, 1, 1, 1, 177 },
  { 310, 1, 1, 1, 177 },
  { 355, 1, 1, 1, 177 },
  { 400, 1, 1, 1, 177 },
  { 464, 1, 1, 1, 177 },
  { 24, 1, 1, 1, 177 },
  { 85, 1, 1, 1, 177 },
  { 146, 1, 1, 1, 177 },
  { 191, 1, 1, 1, 177 },
  { 236, 1, 1, 1, 177 },
  { 281, 1, 1, 1, 177 },
  { 326, 1, 1, 1, 177 },
  { 371, 1, 1, 1, 177 },
  { 416, 1, 1, 1, 177 },
  { 480, 1, 1, 1, 177 },
  { 40, 1, 1, 1, 177 },
  { 101, 1, 1, 1, 177 },
  { 58, 46, 1, 0, 801 },
  { 119, 46, 1, 0, 801 },
  { 164, 46, 1, 0, 801 },
  { 209, 46, 1, 0, 801 },
  { 254, 46, 1, 0, 801 },
  { 299, 46, 1, 0, 801 },
  { 344, 46, 1, 0, 801 },
  { 389, 46, 1, 0, 801 },
  { 453, 46, 1, 0, 801 },
  { 497, 46, 1, 0, 801 },
  { 12, 46, 1, 0, 801 },
  { 73, 46, 1, 0, 801 },
  { 134, 46, 1, 0, 801 },
  { 179, 46, 1, 0, 801 },
  { 224, 46, 1, 0, 801 },
  { 269, 46, 1, 0, 801 },
  { 314, 46, 1, 0, 801 },
  { 359, 46, 1, 0, 801 },
  { 404, 46, 1, 0, 801 },
  { 468, 46, 1, 0, 801 },
  { 28, 46, 1, 0, 801 },
  { 89, 46, 1, 0, 801 },
  { 150, 46, 1, 0, 801 },
  { 195, 46, 1, 0, 801 },
  { 240, 46, 1, 0, 801 },
  { 285, 46, 1, 0, 801 },
  { 330, 46, 1, 0, 801 },
  { 375, 46, 1, 0, 801 },
  { 420, 46, 1, 0, 801 },
  { 484, 46, 1, 0, 801 },
  { 44, 46, 1, 0, 801 },
  { 105, 46, 1, 0, 801 },
  { 427, 42, 1, 0, 547 },
  { 569, 1, 44, 1, 547 },
  { 575, 1, 44, 1, 516 },
  { 581, 1, 44, 1, 516 },
  { 587, 1, 44, 1, 516 },
  { 593, 1, 44, 1, 516 },
  { 599, 1, 44, 1, 516 },
  { 605, 1, 44, 1, 516 },
  { 611, 1, 44, 1, 516 },
  { 624, 1, 40, 1, 484 },
  { 630, 1, 40, 1, 484 },
  { 636, 1, 40, 1, 484 },
  { 642, 1, 40, 1, 484 },
  { 648, 1, 40, 1, 484 },
  { 654, 1, 40, 1, 484 },
  { 660, 1, 40, 1, 484 },
  { 666, 1, 40, 1, 484 },
  { 672, 1, 38, 1, 452 },
  { 678, 1, 38, 1, 452 },
  { 684, 1, 38, 1, 452 },
  { 690, 1, 38, 1, 452 },
  { 696, 1, 38, 1, 452 },
  { 702, 1, 38, 1, 452 },
  { 708, 1, 38, 1, 452 },
  { 714, 1, 38, 1, 452 },
  { 510, 1, 36, 1, 420 },
  { 516, 1, 36, 1, 420 },
  { 522, 1, 36, 1, 420 },
  { 528, 1, 36, 1, 420 },
  { 534, 1, 36, 1, 420 },
  { 540, 1, 36, 1, 420 },
  { 546, 1, 36, 1, 420 },
  { 552, 1, 36, 1, 420 },
};

extern const uint16_t PPCRegUnitRoots[][2] = {
  { PPC::BP },
  { PPC::CARRY },
  { PPC::CTR },
  { PPC::FP },
  { PPC::LR },
  { PPC::RM },
  { PPC::VRSAVE },
  { PPC::ZERO },
  { PPC::CR0LT },
  { PPC::CR0GT },
  { PPC::CR0EQ },
  { PPC::CR0UN },
  { PPC::CR1LT },
  { PPC::CR1GT },
  { PPC::CR1EQ },
  { PPC::CR1UN },
  { PPC::CR2LT },
  { PPC::CR2GT },
  { PPC::CR2EQ },
  { PPC::CR2UN },
  { PPC::CR3LT },
  { PPC::CR3GT },
  { PPC::CR3EQ },
  { PPC::CR3UN },
  { PPC::CR4LT },
  { PPC::CR4GT },
  { PPC::CR4EQ },
  { PPC::CR4UN },
  { PPC::CR5LT },
  { PPC::CR5GT },
  { PPC::CR5EQ },
  { PPC::CR5UN },
  { PPC::CR6LT },
  { PPC::CR6GT },
  { PPC::CR6EQ },
  { PPC::CR6UN },
  { PPC::CR7LT },
  { PPC::CR7GT },
  { PPC::CR7EQ },
  { PPC::CR7UN },
  { PPC::CTR8 },
  { PPC::F0 },
  { PPC::F1 },
  { PPC::F2 },
  { PPC::F3 },
  { PPC::F4 },
  { PPC::F5 },
  { PPC::F6 },
  { PPC::F7 },
  { PPC::F8 },
  { PPC::F9 },
  { PPC::F10 },
  { PPC::F11 },
  { PPC::F12 },
  { PPC::F13 },
  { PPC::F14 },
  { PPC::F15 },
  { PPC::F16 },
  { PPC::F17 },
  { PPC::F18 },
  { PPC::F19 },
  { PPC::F20 },
  { PPC::F21 },
  { PPC::F22 },
  { PPC::F23 },
  { PPC::F24 },
  { PPC::F25 },
  { PPC::F26 },
  { PPC::F27 },
  { PPC::F28 },
  { PPC::F29 },
  { PPC::F30 },
  { PPC::F31 },
  { PPC::LR8 },
  { PPC::R0 },
  { PPC::R1 },
  { PPC::R2 },
  { PPC::R3 },
  { PPC::R4 },
  { PPC::R5 },
  { PPC::R6 },
  { PPC::R7 },
  { PPC::R8 },
  { PPC::R9 },
  { PPC::R10 },
  { PPC::R11 },
  { PPC::R12 },
  { PPC::R13 },
  { PPC::R14 },
  { PPC::R15 },
  { PPC::R16 },
  { PPC::R17 },
  { PPC::R18 },
  { PPC::R19 },
  { PPC::R20 },
  { PPC::R21 },
  { PPC::R22 },
  { PPC::R23 },
  { PPC::R24 },
  { PPC::R25 },
  { PPC::R26 },
  { PPC::R27 },
  { PPC::R28 },
  { PPC::R29 },
  { PPC::R30 },
  { PPC::R31 },
  { PPC::V0 },
  { PPC::V1 },
  { PPC::V2 },
  { PPC::V3 },
  { PPC::V4 },
  { PPC::V5 },
  { PPC::V6 },
  { PPC::V7 },
  { PPC::V8 },
  { PPC::V9 },
  { PPC::V10 },
  { PPC::V11 },
  { PPC::V12 },
  { PPC::V13 },
  { PPC::V14 },
  { PPC::V15 },
  { PPC::V16 },
  { PPC::V17 },
  { PPC::V18 },
  { PPC::V19 },
  { PPC::V20 },
  { PPC::V21 },
  { PPC::V22 },
  { PPC::V23 },
  { PPC::V24 },
  { PPC::V25 },
  { PPC::V26 },
  { PPC::V27 },
  { PPC::V28 },
  { PPC::V29 },
  { PPC::V30 },
  { PPC::V31 },
};

namespace {     // Register classes...
  // GPRC Register Class...
  const uint16_t GPRC[] = {
    PPC::R2, PPC::R3, PPC::R4, PPC::R5, PPC::R6, PPC::R7, PPC::R8, PPC::R9, PPC::R10, PPC::R11, PPC::R12, PPC::R30, PPC::R29, PPC::R28, PPC::R27, PPC::R26, PPC::R25, PPC::R24, PPC::R23, PPC::R22, PPC::R21, PPC::R20, PPC::R19, PPC::R18, PPC::R17, PPC::R16, PPC::R15, PPC::R14, PPC::R13, PPC::R31, PPC::R0, PPC::R1, PPC::FP, PPC::BP, 
  };

  // GPRC Bit set.
  const uint8_t GPRCBits[] = {
    0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0xff, 0xff, 0x1f, 
  };

  // GPRC_NOR0 Register Class...
  const uint16_t GPRC_NOR0[] = {
    PPC::R2, PPC::R3, PPC::R4, PPC::R5, PPC::R6, PPC::R7, PPC::R8, PPC::R9, PPC::R10, PPC::R11, PPC::R12, PPC::R30, PPC::R29, PPC::R28, PPC::R27, PPC::R26, PPC::R25, PPC::R24, PPC::R23, PPC::R22, PPC::R21, PPC::R20, PPC::R19, PPC::R18, PPC::R17, PPC::R16, PPC::R15, PPC::R14, PPC::R13, PPC::R31, PPC::R1, PPC::FP, PPC::BP, PPC::ZERO, 
  };

  // GPRC_NOR0 Bit set.
  const uint8_t GPRC_NOR0Bits[] = {
    0x12, 0x01, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0xff, 0x1f, 
  };

  // GPRC_and_GPRC_NOR0 Register Class...
  const uint16_t GPRC_and_GPRC_NOR0[] = {
    PPC::R2, PPC::R3, PPC::R4, PPC::R5, PPC::R6, PPC::R7, PPC::R8, PPC::R9, PPC::R10, PPC::R11, PPC::R12, PPC::R30, PPC::R29, PPC::R28, PPC::R27, PPC::R26, PPC::R25, PPC::R24, PPC::R23, PPC::R22, PPC::R21, PPC::R20, PPC::R19, PPC::R18, PPC::R17, PPC::R16, PPC::R15, PPC::R14, PPC::R13, PPC::R31, PPC::R1, PPC::FP, PPC::BP, 
  };

  // GPRC_and_GPRC_NOR0 Bit set.
  const uint8_t GPRC_and_GPRC_NOR0Bits[] = {
    0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0xff, 0x1f, 
  };

  // CRBITRC Register Class...
  const uint16_t CRBITRC[] = {
    PPC::CR0LT, PPC::CR0GT, PPC::CR0EQ, PPC::CR0UN, PPC::CR1LT, PPC::CR1GT, PPC::CR1EQ, PPC::CR1UN, PPC::CR2LT, PPC::CR2GT, PPC::CR2EQ, PPC::CR2UN, PPC::CR3LT, PPC::CR3GT, PPC::CR3EQ, PPC::CR3UN, PPC::CR4LT, PPC::CR4GT, PPC::CR4EQ, PPC::CR4UN, PPC::CR5LT, PPC::CR5GT, PPC::CR5EQ, PPC::CR5UN, PPC::CR6LT, PPC::CR6GT, PPC::CR6EQ, PPC::CR6UN, PPC::CR7LT, PPC::CR7GT, PPC::CR7EQ, PPC::CR7UN, 
  };

  // CRBITRC Bit set.
  const uint8_t CRBITRCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0xff, 0x3f, 
  };

  // F4RC Register Class...
  const uint16_t F4RC[] = {
    PPC::F0, PPC::F1, PPC::F2, PPC::F3, PPC::F4, PPC::F5, PPC::F6, PPC::F7, PPC::F8, PPC::F9, PPC::F10, PPC::F11, PPC::F12, PPC::F13, PPC::F31, PPC::F30, PPC::F29, PPC::F28, PPC::F27, PPC::F26, PPC::F25, PPC::F24, PPC::F23, PPC::F22, PPC::F21, PPC::F20, PPC::F19, PPC::F18, PPC::F17, PPC::F16, PPC::F15, PPC::F14, 
  };

  // F4RC Bit set.
  const uint8_t F4RCBits[] = {
    0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0x07, 
  };

  // CRRC Register Class...
  const uint16_t CRRC[] = {
    PPC::CR0, PPC::CR1, PPC::CR5, PPC::CR6, PPC::CR7, PPC::CR2, PPC::CR3, PPC::CR4, 
  };

  // CRRC Bit set.
  const uint8_t CRRCBits[] = {
    0x00, 0xfc, 0x03, 
  };

  // CARRYRC Register Class...
  const uint16_t CARRYRC[] = {
    PPC::CARRY, 
  };

  // CARRYRC Bit set.
  const uint8_t CARRYRCBits[] = {
    0x04, 
  };

  // CTRRC Register Class...
  const uint16_t CTRRC[] = {
    PPC::CTR, 
  };

  // CTRRC Bit set.
  const uint8_t CTRRCBits[] = {
    0x08, 
  };

  // VRSAVERC Register Class...
  const uint16_t VRSAVERC[] = {
    PPC::VRSAVE, 
  };

  // VRSAVERC Bit set.
  const uint8_t VRSAVERCBits[] = {
    0x80, 
  };

  // G8RC Register Class...
  const uint16_t G8RC[] = {
    PPC::X2, PPC::X3, PPC::X4, PPC::X5, PPC::X6, PPC::X7, PPC::X8, PPC::X9, PPC::X10, PPC::X11, PPC::X12, PPC::X30, PPC::X29, PPC::X28, PPC::X27, PPC::X26, PPC::X25, PPC::X24, PPC::X23, PPC::X22, PPC::X21, PPC::X20, PPC::X19, PPC::X18, PPC::X17, PPC::X16, PPC::X15, PPC::X14, PPC::X31, PPC::X13, PPC::X0, PPC::X1, PPC::FP8, PPC::BP8, 
  };

  // G8RC Bit set.
  const uint8_t G8RCBits[] = {
    0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0xff, 0xff, 0x1f, 
  };

  // G8RC_NOX0 Register Class...
  const uint16_t G8RC_NOX0[] = {
    PPC::X2, PPC::X3, PPC::X4, PPC::X5, PPC::X6, PPC::X7, PPC::X8, PPC::X9, PPC::X10, PPC::X11, PPC::X12, PPC::X30, PPC::X29, PPC::X28, PPC::X27, PPC::X26, PPC::X25, PPC::X24, PPC::X23, PPC::X22, PPC::X21, PPC::X20, PPC::X19, PPC::X18, PPC::X17, PPC::X16, PPC::X15, PPC::X14, PPC::X31, PPC::X13, PPC::X1, PPC::FP8, PPC::BP8, PPC::ZERO8, 
  };

  // G8RC_NOX0 Bit set.
  const uint8_t G8RC_NOX0Bits[] = {
    0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0xff, 0x3f, 
  };

  // G8RC_and_G8RC_NOX0 Register Class...
  const uint16_t G8RC_and_G8RC_NOX0[] = {
    PPC::X2, PPC::X3, PPC::X4, PPC::X5, PPC::X6, PPC::X7, PPC::X8, PPC::X9, PPC::X10, PPC::X11, PPC::X12, PPC::X30, PPC::X29, PPC::X28, PPC::X27, PPC::X26, PPC::X25, PPC::X24, PPC::X23, PPC::X22, PPC::X21, PPC::X20, PPC::X19, PPC::X18, PPC::X17, PPC::X16, PPC::X15, PPC::X14, PPC::X31, PPC::X13, PPC::X1, PPC::FP8, PPC::BP8, 
  };

  // G8RC_and_G8RC_NOX0 Bit set.
  const uint8_t G8RC_and_G8RC_NOX0Bits[] = {
    0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0xff, 0x1f, 
  };

  // F8RC Register Class...
  const uint16_t F8RC[] = {
    PPC::F0, PPC::F1, PPC::F2, PPC::F3, PPC::F4, PPC::F5, PPC::F6, PPC::F7, PPC::F8, PPC::F9, PPC::F10, PPC::F11, PPC::F12, PPC::F13, PPC::F31, PPC::F30, PPC::F29, PPC::F28, PPC::F27, PPC::F26, PPC::F25, PPC::F24, PPC::F23, PPC::F22, PPC::F21, PPC::F20, PPC::F19, PPC::F18, PPC::F17, PPC::F16, PPC::F15, PPC::F14, 
  };

  // F8RC Bit set.
  const uint8_t F8RCBits[] = {
    0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0x07, 
  };

  // CTRRC8 Register Class...
  const uint16_t CTRRC8[] = {
    PPC::CTR8, 
  };

  // CTRRC8 Bit set.
  const uint8_t CTRRC8Bits[] = {
    0x00, 0x00, 0x04, 
  };

  // VRRC Register Class...
  const uint16_t VRRC[] = {
    PPC::V2, PPC::V3, PPC::V4, PPC::V5, PPC::V0, PPC::V1, PPC::V6, PPC::V7, PPC::V8, PPC::V9, PPC::V10, PPC::V11, PPC::V12, PPC::V13, PPC::V14, PPC::V15, PPC::V16, PPC::V17, PPC::V18, PPC::V19, PPC::V31, PPC::V30, PPC::V29, PPC::V28, PPC::V27, PPC::V26, PPC::V25, PPC::V24, PPC::V23, PPC::V22, PPC::V21, PPC::V20, 
  };

  // VRRC Bit set.
  const uint8_t VRRCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0xff, 0xff, 0x1f, 
  };

}

extern const MCRegisterClass PPCMCRegisterClasses[] = {
  { "GPRC", GPRC, GPRCBits, 34, sizeof(GPRCBits), PPC::GPRCRegClassID, 4, 4, 1, 1 },
  { "GPRC_NOR0", GPRC_NOR0, GPRC_NOR0Bits, 34, sizeof(GPRC_NOR0Bits), PPC::GPRC_NOR0RegClassID, 4, 4, 1, 1 },
  { "GPRC_and_GPRC_NOR0", GPRC_and_GPRC_NOR0, GPRC_and_GPRC_NOR0Bits, 33, sizeof(GPRC_and_GPRC_NOR0Bits), PPC::GPRC_and_GPRC_NOR0RegClassID, 4, 4, 1, 1 },
  { "CRBITRC", CRBITRC, CRBITRCBits, 32, sizeof(CRBITRCBits), PPC::CRBITRCRegClassID, 4, 4, -1, 1 },
  { "F4RC", F4RC, F4RCBits, 32, sizeof(F4RCBits), PPC::F4RCRegClassID, 4, 4, 1, 1 },
  { "CRRC", CRRC, CRRCBits, 8, sizeof(CRRCBits), PPC::CRRCRegClassID, 4, 4, 1, 1 },
  { "CARRYRC", CARRYRC, CARRYRCBits, 1, sizeof(CARRYRCBits), PPC::CARRYRCRegClassID, 4, 4, -1, 1 },
  { "CTRRC", CTRRC, CTRRCBits, 1, sizeof(CTRRCBits), PPC::CTRRCRegClassID, 4, 4, 1, 0 },
  { "VRSAVERC", VRSAVERC, VRSAVERCBits, 1, sizeof(VRSAVERCBits), PPC::VRSAVERCRegClassID, 4, 4, 1, 1 },
  { "G8RC", G8RC, G8RCBits, 34, sizeof(G8RCBits), PPC::G8RCRegClassID, 8, 8, 1, 1 },
  { "G8RC_NOX0", G8RC_NOX0, G8RC_NOX0Bits, 34, sizeof(G8RC_NOX0Bits), PPC::G8RC_NOX0RegClassID, 8, 8, 1, 1 },
  { "G8RC_and_G8RC_NOX0", G8RC_and_G8RC_NOX0, G8RC_and_G8RC_NOX0Bits, 33, sizeof(G8RC_and_G8RC_NOX0Bits), PPC::G8RC_and_G8RC_NOX0RegClassID, 8, 8, 1, 1 },
  { "F8RC", F8RC, F8RCBits, 32, sizeof(F8RCBits), PPC::F8RCRegClassID, 8, 8, 1, 1 },
  { "CTRRC8", CTRRC8, CTRRC8Bits, 1, sizeof(CTRRC8Bits), PPC::CTRRC8RegClassID, 8, 8, 1, 0 },
  { "VRRC", VRRC, VRRCBits, 32, sizeof(VRRCBits), PPC::VRRCRegClassID, 16, 16, 1, 1 },
};

// PPC Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair PPCDwarfFlavour0Dwarf2L[] = {
  { 0U, PPC::X0 },
  { 1U, PPC::X1 },
  { 2U, PPC::X2 },
  { 3U, PPC::X3 },
  { 4U, PPC::X4 },
  { 5U, PPC::X5 },
  { 6U, PPC::X6 },
  { 7U, PPC::X7 },
  { 8U, PPC::X8 },
  { 9U, PPC::X9 },
  { 10U, PPC::X10 },
  { 11U, PPC::X11 },
  { 12U, PPC::X12 },
  { 13U, PPC::X13 },
  { 14U, PPC::X14 },
  { 15U, PPC::X15 },
  { 16U, PPC::X16 },
  { 17U, PPC::X17 },
  { 18U, PPC::X18 },
  { 19U, PPC::X19 },
  { 20U, PPC::X20 },
  { 21U, PPC::X21 },
  { 22U, PPC::X22 },
  { 23U, PPC::X23 },
  { 24U, PPC::X24 },
  { 25U, PPC::X25 },
  { 26U, PPC::X26 },
  { 27U, PPC::X27 },
  { 28U, PPC::X28 },
  { 29U, PPC::X29 },
  { 30U, PPC::X30 },
  { 31U, PPC::X31 },
  { 32U, PPC::F0 },
  { 33U, PPC::F1 },
  { 34U, PPC::F2 },
  { 35U, PPC::F3 },
  { 36U, PPC::F4 },
  { 37U, PPC::F5 },
  { 38U, PPC::F6 },
  { 39U, PPC::F7 },
  { 40U, PPC::F8 },
  { 41U, PPC::F9 },
  { 42U, PPC::F10 },
  { 43U, PPC::F11 },
  { 44U, PPC::F12 },
  { 45U, PPC::F13 },
  { 46U, PPC::F14 },
  { 47U, PPC::F15 },
  { 48U, PPC::F16 },
  { 49U, PPC::F17 },
  { 50U, PPC::F18 },
  { 51U, PPC::F19 },
  { 52U, PPC::F20 },
  { 53U, PPC::F21 },
  { 54U, PPC::F22 },
  { 55U, PPC::F23 },
  { 56U, PPC::F24 },
  { 57U, PPC::F25 },
  { 58U, PPC::F26 },
  { 59U, PPC::F27 },
  { 60U, PPC::F28 },
  { 61U, PPC::F29 },
  { 62U, PPC::F30 },
  { 63U, PPC::F31 },
  { 65U, PPC::LR8 },
  { 66U, PPC::CTR8 },
  { 68U, PPC::CR0 },
  { 69U, PPC::CR1 },
  { 70U, PPC::CR2 },
  { 71U, PPC::CR3 },
  { 72U, PPC::CR4 },
  { 73U, PPC::CR5 },
  { 74U, PPC::CR6 },
  { 75U, PPC::CR7 },
  { 77U, PPC::V0 },
  { 78U, PPC::V1 },
  { 79U, PPC::V2 },
  { 80U, PPC::V3 },
  { 81U, PPC::V4 },
  { 82U, PPC::V5 },
  { 83U, PPC::V6 },
  { 84U, PPC::V7 },
  { 85U, PPC::V8 },
  { 86U, PPC::V9 },
  { 87U, PPC::V10 },
  { 88U, PPC::V11 },
  { 89U, PPC::V12 },
  { 90U, PPC::V13 },
  { 91U, PPC::V14 },
  { 92U, PPC::V15 },
  { 93U, PPC::V16 },
  { 94U, PPC::V17 },
  { 95U, PPC::V18 },
  { 96U, PPC::V19 },
  { 97U, PPC::V20 },
  { 98U, PPC::V21 },
  { 99U, PPC::V22 },
  { 100U, PPC::V23 },
  { 101U, PPC::V24 },
  { 102U, PPC::V25 },
  { 103U, PPC::V26 },
  { 104U, PPC::V27 },
  { 105U, PPC::V28 },
  { 106U, PPC::V29 },
  { 107U, PPC::V30 },
  { 108U, PPC::V31 },
  { 109U, PPC::VRSAVE },
};
extern const unsigned PPCDwarfFlavour0Dwarf2LSize = sizeof(PPCDwarfFlavour0Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair PPCDwarfFlavour1Dwarf2L[] = {
  { 0U, PPC::R0 },
  { 1U, PPC::R1 },
  { 2U, PPC::R2 },
  { 3U, PPC::R3 },
  { 4U, PPC::R4 },
  { 5U, PPC::R5 },
  { 6U, PPC::R6 },
  { 7U, PPC::R7 },
  { 8U, PPC::R8 },
  { 9U, PPC::R9 },
  { 10U, PPC::R10 },
  { 11U, PPC::R11 },
  { 12U, PPC::R12 },
  { 13U, PPC::R13 },
  { 14U, PPC::R14 },
  { 15U, PPC::R15 },
  { 16U, PPC::R16 },
  { 17U, PPC::R17 },
  { 18U, PPC::R18 },
  { 19U, PPC::R19 },
  { 20U, PPC::R20 },
  { 21U, PPC::R21 },
  { 22U, PPC::R22 },
  { 23U, PPC::R23 },
  { 24U, PPC::R24 },
  { 25U, PPC::R25 },
  { 26U, PPC::R26 },
  { 27U, PPC::R27 },
  { 28U, PPC::R28 },
  { 29U, PPC::R29 },
  { 30U, PPC::R30 },
  { 31U, PPC::R31 },
  { 32U, PPC::F0 },
  { 33U, PPC::F1 },
  { 34U, PPC::F2 },
  { 35U, PPC::F3 },
  { 36U, PPC::F4 },
  { 37U, PPC::F5 },
  { 38U, PPC::F6 },
  { 39U, PPC::F7 },
  { 40U, PPC::F8 },
  { 41U, PPC::F9 },
  { 42U, PPC::F10 },
  { 43U, PPC::F11 },
  { 44U, PPC::F12 },
  { 45U, PPC::F13 },
  { 46U, PPC::F14 },
  { 47U, PPC::F15 },
  { 48U, PPC::F16 },
  { 49U, PPC::F17 },
  { 50U, PPC::F18 },
  { 51U, PPC::F19 },
  { 52U, PPC::F20 },
  { 53U, PPC::F21 },
  { 54U, PPC::F22 },
  { 55U, PPC::F23 },
  { 56U, PPC::F24 },
  { 57U, PPC::F25 },
  { 58U, PPC::F26 },
  { 59U, PPC::F27 },
  { 60U, PPC::F28 },
  { 61U, PPC::F29 },
  { 62U, PPC::F30 },
  { 63U, PPC::F31 },
  { 65U, PPC::LR },
  { 66U, PPC::CTR },
  { 68U, PPC::CR0 },
  { 69U, PPC::CR1 },
  { 70U, PPC::CR2 },
  { 71U, PPC::CR3 },
  { 72U, PPC::CR4 },
  { 73U, PPC::CR5 },
  { 74U, PPC::CR6 },
  { 75U, PPC::CR7 },
  { 77U, PPC::V0 },
  { 78U, PPC::V1 },
  { 79U, PPC::V2 },
  { 80U, PPC::V3 },
  { 81U, PPC::V4 },
  { 82U, PPC::V5 },
  { 83U, PPC::V6 },
  { 84U, PPC::V7 },
  { 85U, PPC::V8 },
  { 86U, PPC::V9 },
  { 87U, PPC::V10 },
  { 88U, PPC::V11 },
  { 89U, PPC::V12 },
  { 90U, PPC::V13 },
  { 91U, PPC::V14 },
  { 92U, PPC::V15 },
  { 93U, PPC::V16 },
  { 94U, PPC::V17 },
  { 95U, PPC::V18 },
  { 96U, PPC::V19 },
  { 97U, PPC::V20 },
  { 98U, PPC::V21 },
  { 99U, PPC::V22 },
  { 100U, PPC::V23 },
  { 101U, PPC::V24 },
  { 102U, PPC::V25 },
  { 103U, PPC::V26 },
  { 104U, PPC::V27 },
  { 105U, PPC::V28 },
  { 106U, PPC::V29 },
  { 107U, PPC::V30 },
  { 108U, PPC::V31 },
};
extern const unsigned PPCDwarfFlavour1Dwarf2LSize = sizeof(PPCDwarfFlavour1Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair PPCEHFlavour0Dwarf2L[] = {
  { 0U, PPC::X0 },
  { 1U, PPC::X1 },
  { 2U, PPC::X2 },
  { 3U, PPC::X3 },
  { 4U, PPC::X4 },
  { 5U, PPC::X5 },
  { 6U, PPC::X6 },
  { 7U, PPC::X7 },
  { 8U, PPC::X8 },
  { 9U, PPC::X9 },
  { 10U, PPC::X10 },
  { 11U, PPC::X11 },
  { 12U, PPC::X12 },
  { 13U, PPC::X13 },
  { 14U, PPC::X14 },
  { 15U, PPC::X15 },
  { 16U, PPC::X16 },
  { 17U, PPC::X17 },
  { 18U, PPC::X18 },
  { 19U, PPC::X19 },
  { 20U, PPC::X20 },
  { 21U, PPC::X21 },
  { 22U, PPC::X22 },
  { 23U, PPC::X23 },
  { 24U, PPC::X24 },
  { 25U, PPC::X25 },
  { 26U, PPC::X26 },
  { 27U, PPC::X27 },
  { 28U, PPC::X28 },
  { 29U, PPC::X29 },
  { 30U, PPC::X30 },
  { 31U, PPC::X31 },
  { 32U, PPC::F0 },
  { 33U, PPC::F1 },
  { 34U, PPC::F2 },
  { 35U, PPC::F3 },
  { 36U, PPC::F4 },
  { 37U, PPC::F5 },
  { 38U, PPC::F6 },
  { 39U, PPC::F7 },
  { 40U, PPC::F8 },
  { 41U, PPC::F9 },
  { 42U, PPC::F10 },
  { 43U, PPC::F11 },
  { 44U, PPC::F12 },
  { 45U, PPC::F13 },
  { 46U, PPC::F14 },
  { 47U, PPC::F15 },
  { 48U, PPC::F16 },
  { 49U, PPC::F17 },
  { 50U, PPC::F18 },
  { 51U, PPC::F19 },
  { 52U, PPC::F20 },
  { 53U, PPC::F21 },
  { 54U, PPC::F22 },
  { 55U, PPC::F23 },
  { 56U, PPC::F24 },
  { 57U, PPC::F25 },
  { 58U, PPC::F26 },
  { 59U, PPC::F27 },
  { 60U, PPC::F28 },
  { 61U, PPC::F29 },
  { 62U, PPC::F30 },
  { 63U, PPC::F31 },
  { 65U, PPC::LR8 },
  { 66U, PPC::CTR8 },
  { 68U, PPC::CR0 },
  { 69U, PPC::CR1 },
  { 70U, PPC::CR2 },
  { 71U, PPC::CR3 },
  { 72U, PPC::CR4 },
  { 73U, PPC::CR5 },
  { 74U, PPC::CR6 },
  { 75U, PPC::CR7 },
  { 77U, PPC::V0 },
  { 78U, PPC::V1 },
  { 79U, PPC::V2 },
  { 80U, PPC::V3 },
  { 81U, PPC::V4 },
  { 82U, PPC::V5 },
  { 83U, PPC::V6 },
  { 84U, PPC::V7 },
  { 85U, PPC::V8 },
  { 86U, PPC::V9 },
  { 87U, PPC::V10 },
  { 88U, PPC::V11 },
  { 89U, PPC::V12 },
  { 90U, PPC::V13 },
  { 91U, PPC::V14 },
  { 92U, PPC::V15 },
  { 93U, PPC::V16 },
  { 94U, PPC::V17 },
  { 95U, PPC::V18 },
  { 96U, PPC::V19 },
  { 97U, PPC::V20 },
  { 98U, PPC::V21 },
  { 99U, PPC::V22 },
  { 100U, PPC::V23 },
  { 101U, PPC::V24 },
  { 102U, PPC::V25 },
  { 103U, PPC::V26 },
  { 104U, PPC::V27 },
  { 105U, PPC::V28 },
  { 106U, PPC::V29 },
  { 107U, PPC::V30 },
  { 108U, PPC::V31 },
  { 109U, PPC::VRSAVE },
};
extern const unsigned PPCEHFlavour0Dwarf2LSize = sizeof(PPCEHFlavour0Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair PPCEHFlavour1Dwarf2L[] = {
  { 0U, PPC::R0 },
  { 1U, PPC::R1 },
  { 2U, PPC::R2 },
  { 3U, PPC::R3 },
  { 4U, PPC::R4 },
  { 5U, PPC::R5 },
  { 6U, PPC::R6 },
  { 7U, PPC::R7 },
  { 8U, PPC::R8 },
  { 9U, PPC::R9 },
  { 10U, PPC::R10 },
  { 11U, PPC::R11 },
  { 12U, PPC::R12 },
  { 13U, PPC::R13 },
  { 14U, PPC::R14 },
  { 15U, PPC::R15 },
  { 16U, PPC::R16 },
  { 17U, PPC::R17 },
  { 18U, PPC::R18 },
  { 19U, PPC::R19 },
  { 20U, PPC::R20 },
  { 21U, PPC::R21 },
  { 22U, PPC::R22 },
  { 23U, PPC::R23 },
  { 24U, PPC::R24 },
  { 25U, PPC::R25 },
  { 26U, PPC::R26 },
  { 27U, PPC::R27 },
  { 28U, PPC::R28 },
  { 29U, PPC::R29 },
  { 30U, PPC::R30 },
  { 31U, PPC::R31 },
  { 32U, PPC::F0 },
  { 33U, PPC::F1 },
  { 34U, PPC::F2 },
  { 35U, PPC::F3 },
  { 36U, PPC::F4 },
  { 37U, PPC::F5 },
  { 38U, PPC::F6 },
  { 39U, PPC::F7 },
  { 40U, PPC::F8 },
  { 41U, PPC::F9 },
  { 42U, PPC::F10 },
  { 43U, PPC::F11 },
  { 44U, PPC::F12 },
  { 45U, PPC::F13 },
  { 46U, PPC::F14 },
  { 47U, PPC::F15 },
  { 48U, PPC::F16 },
  { 49U, PPC::F17 },
  { 50U, PPC::F18 },
  { 51U, PPC::F19 },
  { 52U, PPC::F20 },
  { 53U, PPC::F21 },
  { 54U, PPC::F22 },
  { 55U, PPC::F23 },
  { 56U, PPC::F24 },
  { 57U, PPC::F25 },
  { 58U, PPC::F26 },
  { 59U, PPC::F27 },
  { 60U, PPC::F28 },
  { 61U, PPC::F29 },
  { 62U, PPC::F30 },
  { 63U, PPC::F31 },
  { 65U, PPC::LR },
  { 66U, PPC::CTR },
  { 68U, PPC::CR0 },
  { 69U, PPC::CR1 },
  { 70U, PPC::CR2 },
  { 71U, PPC::CR3 },
  { 72U, PPC::CR4 },
  { 73U, PPC::CR5 },
  { 74U, PPC::CR6 },
  { 75U, PPC::CR7 },
  { 77U, PPC::V0 },
  { 78U, PPC::V1 },
  { 79U, PPC::V2 },
  { 80U, PPC::V3 },
  { 81U, PPC::V4 },
  { 82U, PPC::V5 },
  { 83U, PPC::V6 },
  { 84U, PPC::V7 },
  { 85U, PPC::V8 },
  { 86U, PPC::V9 },
  { 87U, PPC::V10 },
  { 88U, PPC::V11 },
  { 89U, PPC::V12 },
  { 90U, PPC::V13 },
  { 91U, PPC::V14 },
  { 92U, PPC::V15 },
  { 93U, PPC::V16 },
  { 94U, PPC::V17 },
  { 95U, PPC::V18 },
  { 96U, PPC::V19 },
  { 97U, PPC::V20 },
  { 98U, PPC::V21 },
  { 99U, PPC::V22 },
  { 100U, PPC::V23 },
  { 101U, PPC::V24 },
  { 102U, PPC::V25 },
  { 103U, PPC::V26 },
  { 104U, PPC::V27 },
  { 105U, PPC::V28 },
  { 106U, PPC::V29 },
  { 107U, PPC::V30 },
  { 108U, PPC::V31 },
};
extern const unsigned PPCEHFlavour1Dwarf2LSize = sizeof(PPCEHFlavour1Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair PPCDwarfFlavour0L2Dwarf[] = {
  { PPC::CTR, -2U },
  { PPC::LR, -2U },
  { PPC::VRSAVE, 109U },
  { PPC::CR0, 68U },
  { PPC::CR1, 69U },
  { PPC::CR2, 70U },
  { PPC::CR3, 71U },
  { PPC::CR4, 72U },
  { PPC::CR5, 73U },
  { PPC::CR6, 74U },
  { PPC::CR7, 75U },
  { PPC::CTR8, 66U },
  { PPC::F0, 32U },
  { PPC::F1, 33U },
  { PPC::F2, 34U },
  { PPC::F3, 35U },
  { PPC::F4, 36U },
  { PPC::F5, 37U },
  { PPC::F6, 38U },
  { PPC::F7, 39U },
  { PPC::F8, 40U },
  { PPC::F9, 41U },
  { PPC::F10, 42U },
  { PPC::F11, 43U },
  { PPC::F12, 44U },
  { PPC::F13, 45U },
  { PPC::F14, 46U },
  { PPC::F15, 47U },
  { PPC::F16, 48U },
  { PPC::F17, 49U },
  { PPC::F18, 50U },
  { PPC::F19, 51U },
  { PPC::F20, 52U },
  { PPC::F21, 53U },
  { PPC::F22, 54U },
  { PPC::F23, 55U },
  { PPC::F24, 56U },
  { PPC::F25, 57U },
  { PPC::F26, 58U },
  { PPC::F27, 59U },
  { PPC::F28, 60U },
  { PPC::F29, 61U },
  { PPC::F30, 62U },
  { PPC::F31, 63U },
  { PPC::LR8, 65U },
  { PPC::R0, -2U },
  { PPC::R1, -2U },
  { PPC::R2, -2U },
  { PPC::R3, -2U },
  { PPC::R4, -2U },
  { PPC::R5, -2U },
  { PPC::R6, -2U },
  { PPC::R7, -2U },
  { PPC::R8, -2U },
  { PPC::R9, -2U },
  { PPC::R10, -2U },
  { PPC::R11, -2U },
  { PPC::R12, -2U },
  { PPC::R13, -2U },
  { PPC::R14, -2U },
  { PPC::R15, -2U },
  { PPC::R16, -2U },
  { PPC::R17, -2U },
  { PPC::R18, -2U },
  { PPC::R19, -2U },
  { PPC::R20, -2U },
  { PPC::R21, -2U },
  { PPC::R22, -2U },
  { PPC::R23, -2U },
  { PPC::R24, -2U },
  { PPC::R25, -2U },
  { PPC::R26, -2U },
  { PPC::R27, -2U },
  { PPC::R28, -2U },
  { PPC::R29, -2U },
  { PPC::R30, -2U },
  { PPC::R31, -2U },
  { PPC::V0, 77U },
  { PPC::V1, 78U },
  { PPC::V2, 79U },
  { PPC::V3, 80U },
  { PPC::V4, 81U },
  { PPC::V5, 82U },
  { PPC::V6, 83U },
  { PPC::V7, 84U },
  { PPC::V8, 85U },
  { PPC::V9, 86U },
  { PPC::V10, 87U },
  { PPC::V11, 88U },
  { PPC::V12, 89U },
  { PPC::V13, 90U },
  { PPC::V14, 91U },
  { PPC::V15, 92U },
  { PPC::V16, 93U },
  { PPC::V17, 94U },
  { PPC::V18, 95U },
  { PPC::V19, 96U },
  { PPC::V20, 97U },
  { PPC::V21, 98U },
  { PPC::V22, 99U },
  { PPC::V23, 100U },
  { PPC::V24, 101U },
  { PPC::V25, 102U },
  { PPC::V26, 103U },
  { PPC::V27, 104U },
  { PPC::V28, 105U },
  { PPC::V29, 106U },
  { PPC::V30, 107U },
  { PPC::V31, 108U },
  { PPC::X0, 0U },
  { PPC::X1, 1U },
  { PPC::X2, 2U },
  { PPC::X3, 3U },
  { PPC::X4, 4U },
  { PPC::X5, 5U },
  { PPC::X6, 6U },
  { PPC::X7, 7U },
  { PPC::X8, 8U },
  { PPC::X9, 9U },
  { PPC::X10, 10U },
  { PPC::X11, 11U },
  { PPC::X12, 12U },
  { PPC::X13, 13U },
  { PPC::X14, 14U },
  { PPC::X15, 15U },
  { PPC::X16, 16U },
  { PPC::X17, 17U },
  { PPC::X18, 18U },
  { PPC::X19, 19U },
  { PPC::X20, 20U },
  { PPC::X21, 21U },
  { PPC::X22, 22U },
  { PPC::X23, 23U },
  { PPC::X24, 24U },
  { PPC::X25, 25U },
  { PPC::X26, 26U },
  { PPC::X27, 27U },
  { PPC::X28, 28U },
  { PPC::X29, 29U },
  { PPC::X30, 30U },
  { PPC::X31, 31U },
};
extern const unsigned PPCDwarfFlavour0L2DwarfSize = sizeof(PPCDwarfFlavour0L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair PPCDwarfFlavour1L2Dwarf[] = {
  { PPC::CTR, 66U },
  { PPC::LR, 65U },
  { PPC::CR0, 68U },
  { PPC::CR1, 69U },
  { PPC::CR2, 70U },
  { PPC::CR3, 71U },
  { PPC::CR4, 72U },
  { PPC::CR5, 73U },
  { PPC::CR6, 74U },
  { PPC::CR7, 75U },
  { PPC::CTR8, -2U },
  { PPC::F0, 32U },
  { PPC::F1, 33U },
  { PPC::F2, 34U },
  { PPC::F3, 35U },
  { PPC::F4, 36U },
  { PPC::F5, 37U },
  { PPC::F6, 38U },
  { PPC::F7, 39U },
  { PPC::F8, 40U },
  { PPC::F9, 41U },
  { PPC::F10, 42U },
  { PPC::F11, 43U },
  { PPC::F12, 44U },
  { PPC::F13, 45U },
  { PPC::F14, 46U },
  { PPC::F15, 47U },
  { PPC::F16, 48U },
  { PPC::F17, 49U },
  { PPC::F18, 50U },
  { PPC::F19, 51U },
  { PPC::F20, 52U },
  { PPC::F21, 53U },
  { PPC::F22, 54U },
  { PPC::F23, 55U },
  { PPC::F24, 56U },
  { PPC::F25, 57U },
  { PPC::F26, 58U },
  { PPC::F27, 59U },
  { PPC::F28, 60U },
  { PPC::F29, 61U },
  { PPC::F30, 62U },
  { PPC::F31, 63U },
  { PPC::LR8, -2U },
  { PPC::R0, 0U },
  { PPC::R1, 1U },
  { PPC::R2, 2U },
  { PPC::R3, 3U },
  { PPC::R4, 4U },
  { PPC::R5, 5U },
  { PPC::R6, 6U },
  { PPC::R7, 7U },
  { PPC::R8, 8U },
  { PPC::R9, 9U },
  { PPC::R10, 10U },
  { PPC::R11, 11U },
  { PPC::R12, 12U },
  { PPC::R13, 13U },
  { PPC::R14, 14U },
  { PPC::R15, 15U },
  { PPC::R16, 16U },
  { PPC::R17, 17U },
  { PPC::R18, 18U },
  { PPC::R19, 19U },
  { PPC::R20, 20U },
  { PPC::R21, 21U },
  { PPC::R22, 22U },
  { PPC::R23, 23U },
  { PPC::R24, 24U },
  { PPC::R25, 25U },
  { PPC::R26, 26U },
  { PPC::R27, 27U },
  { PPC::R28, 28U },
  { PPC::R29, 29U },
  { PPC::R30, 30U },
  { PPC::R31, 31U },
  { PPC::V0, 77U },
  { PPC::V1, 78U },
  { PPC::V2, 79U },
  { PPC::V3, 80U },
  { PPC::V4, 81U },
  { PPC::V5, 82U },
  { PPC::V6, 83U },
  { PPC::V7, 84U },
  { PPC::V8, 85U },
  { PPC::V9, 86U },
  { PPC::V10, 87U },
  { PPC::V11, 88U },
  { PPC::V12, 89U },
  { PPC::V13, 90U },
  { PPC::V14, 91U },
  { PPC::V15, 92U },
  { PPC::V16, 93U },
  { PPC::V17, 94U },
  { PPC::V18, 95U },
  { PPC::V19, 96U },
  { PPC::V20, 97U },
  { PPC::V21, 98U },
  { PPC::V22, 99U },
  { PPC::V23, 100U },
  { PPC::V24, 101U },
  { PPC::V25, 102U },
  { PPC::V26, 103U },
  { PPC::V27, 104U },
  { PPC::V28, 105U },
  { PPC::V29, 106U },
  { PPC::V30, 107U },
  { PPC::V31, 108U },
  { PPC::X0, -2U },
  { PPC::X1, -2U },
  { PPC::X2, -2U },
  { PPC::X3, -2U },
  { PPC::X4, -2U },
  { PPC::X5, -2U },
  { PPC::X6, -2U },
  { PPC::X7, -2U },
  { PPC::X8, -2U },
  { PPC::X9, -2U },
  { PPC::X10, -2U },
  { PPC::X11, -2U },
  { PPC::X12, -2U },
  { PPC::X13, -2U },
  { PPC::X14, -2U },
  { PPC::X15, -2U },
  { PPC::X16, -2U },
  { PPC::X17, -2U },
  { PPC::X18, -2U },
  { PPC::X19, -2U },
  { PPC::X20, -2U },
  { PPC::X21, -2U },
  { PPC::X22, -2U },
  { PPC::X23, -2U },
  { PPC::X24, -2U },
  { PPC::X25, -2U },
  { PPC::X26, -2U },
  { PPC::X27, -2U },
  { PPC::X28, -2U },
  { PPC::X29, -2U },
  { PPC::X30, -2U },
  { PPC::X31, -2U },
};
extern const unsigned PPCDwarfFlavour1L2DwarfSize = sizeof(PPCDwarfFlavour1L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair PPCEHFlavour0L2Dwarf[] = {
  { PPC::CTR, -2U },
  { PPC::LR, -2U },
  { PPC::VRSAVE, 109U },
  { PPC::CR0, 68U },
  { PPC::CR1, 69U },
  { PPC::CR2, 70U },
  { PPC::CR3, 71U },
  { PPC::CR4, 72U },
  { PPC::CR5, 73U },
  { PPC::CR6, 74U },
  { PPC::CR7, 75U },
  { PPC::CTR8, 66U },
  { PPC::F0, 32U },
  { PPC::F1, 33U },
  { PPC::F2, 34U },
  { PPC::F3, 35U },
  { PPC::F4, 36U },
  { PPC::F5, 37U },
  { PPC::F6, 38U },
  { PPC::F7, 39U },
  { PPC::F8, 40U },
  { PPC::F9, 41U },
  { PPC::F10, 42U },
  { PPC::F11, 43U },
  { PPC::F12, 44U },
  { PPC::F13, 45U },
  { PPC::F14, 46U },
  { PPC::F15, 47U },
  { PPC::F16, 48U },
  { PPC::F17, 49U },
  { PPC::F18, 50U },
  { PPC::F19, 51U },
  { PPC::F20, 52U },
  { PPC::F21, 53U },
  { PPC::F22, 54U },
  { PPC::F23, 55U },
  { PPC::F24, 56U },
  { PPC::F25, 57U },
  { PPC::F26, 58U },
  { PPC::F27, 59U },
  { PPC::F28, 60U },
  { PPC::F29, 61U },
  { PPC::F30, 62U },
  { PPC::F31, 63U },
  { PPC::LR8, 65U },
  { PPC::R0, -2U },
  { PPC::R1, -2U },
  { PPC::R2, -2U },
  { PPC::R3, -2U },
  { PPC::R4, -2U },
  { PPC::R5, -2U },
  { PPC::R6, -2U },
  { PPC::R7, -2U },
  { PPC::R8, -2U },
  { PPC::R9, -2U },
  { PPC::R10, -2U },
  { PPC::R11, -2U },
  { PPC::R12, -2U },
  { PPC::R13, -2U },
  { PPC::R14, -2U },
  { PPC::R15, -2U },
  { PPC::R16, -2U },
  { PPC::R17, -2U },
  { PPC::R18, -2U },
  { PPC::R19, -2U },
  { PPC::R20, -2U },
  { PPC::R21, -2U },
  { PPC::R22, -2U },
  { PPC::R23, -2U },
  { PPC::R24, -2U },
  { PPC::R25, -2U },
  { PPC::R26, -2U },
  { PPC::R27, -2U },
  { PPC::R28, -2U },
  { PPC::R29, -2U },
  { PPC::R30, -2U },
  { PPC::R31, -2U },
  { PPC::V0, 77U },
  { PPC::V1, 78U },
  { PPC::V2, 79U },
  { PPC::V3, 80U },
  { PPC::V4, 81U },
  { PPC::V5, 82U },
  { PPC::V6, 83U },
  { PPC::V7, 84U },
  { PPC::V8, 85U },
  { PPC::V9, 86U },
  { PPC::V10, 87U },
  { PPC::V11, 88U },
  { PPC::V12, 89U },
  { PPC::V13, 90U },
  { PPC::V14, 91U },
  { PPC::V15, 92U },
  { PPC::V16, 93U },
  { PPC::V17, 94U },
  { PPC::V18, 95U },
  { PPC::V19, 96U },
  { PPC::V20, 97U },
  { PPC::V21, 98U },
  { PPC::V22, 99U },
  { PPC::V23, 100U },
  { PPC::V24, 101U },
  { PPC::V25, 102U },
  { PPC::V26, 103U },
  { PPC::V27, 104U },
  { PPC::V28, 105U },
  { PPC::V29, 106U },
  { PPC::V30, 107U },
  { PPC::V31, 108U },
  { PPC::X0, 0U },
  { PPC::X1, 1U },
  { PPC::X2, 2U },
  { PPC::X3, 3U },
  { PPC::X4, 4U },
  { PPC::X5, 5U },
  { PPC::X6, 6U },
  { PPC::X7, 7U },
  { PPC::X8, 8U },
  { PPC::X9, 9U },
  { PPC::X10, 10U },
  { PPC::X11, 11U },
  { PPC::X12, 12U },
  { PPC::X13, 13U },
  { PPC::X14, 14U },
  { PPC::X15, 15U },
  { PPC::X16, 16U },
  { PPC::X17, 17U },
  { PPC::X18, 18U },
  { PPC::X19, 19U },
  { PPC::X20, 20U },
  { PPC::X21, 21U },
  { PPC::X22, 22U },
  { PPC::X23, 23U },
  { PPC::X24, 24U },
  { PPC::X25, 25U },
  { PPC::X26, 26U },
  { PPC::X27, 27U },
  { PPC::X28, 28U },
  { PPC::X29, 29U },
  { PPC::X30, 30U },
  { PPC::X31, 31U },
};
extern const unsigned PPCEHFlavour0L2DwarfSize = sizeof(PPCEHFlavour0L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair PPCEHFlavour1L2Dwarf[] = {
  { PPC::CTR, 66U },
  { PPC::LR, 65U },
  { PPC::CR0, 68U },
  { PPC::CR1, 69U },
  { PPC::CR2, 70U },
  { PPC::CR3, 71U },
  { PPC::CR4, 72U },
  { PPC::CR5, 73U },
  { PPC::CR6, 74U },
  { PPC::CR7, 75U },
  { PPC::CTR8, -2U },
  { PPC::F0, 32U },
  { PPC::F1, 33U },
  { PPC::F2, 34U },
  { PPC::F3, 35U },
  { PPC::F4, 36U },
  { PPC::F5, 37U },
  { PPC::F6, 38U },
  { PPC::F7, 39U },
  { PPC::F8, 40U },
  { PPC::F9, 41U },
  { PPC::F10, 42U },
  { PPC::F11, 43U },
  { PPC::F12, 44U },
  { PPC::F13, 45U },
  { PPC::F14, 46U },
  { PPC::F15, 47U },
  { PPC::F16, 48U },
  { PPC::F17, 49U },
  { PPC::F18, 50U },
  { PPC::F19, 51U },
  { PPC::F20, 52U },
  { PPC::F21, 53U },
  { PPC::F22, 54U },
  { PPC::F23, 55U },
  { PPC::F24, 56U },
  { PPC::F25, 57U },
  { PPC::F26, 58U },
  { PPC::F27, 59U },
  { PPC::F28, 60U },
  { PPC::F29, 61U },
  { PPC::F30, 62U },
  { PPC::F31, 63U },
  { PPC::LR8, -2U },
  { PPC::R0, 0U },
  { PPC::R1, 1U },
  { PPC::R2, 2U },
  { PPC::R3, 3U },
  { PPC::R4, 4U },
  { PPC::R5, 5U },
  { PPC::R6, 6U },
  { PPC::R7, 7U },
  { PPC::R8, 8U },
  { PPC::R9, 9U },
  { PPC::R10, 10U },
  { PPC::R11, 11U },
  { PPC::R12, 12U },
  { PPC::R13, 13U },
  { PPC::R14, 14U },
  { PPC::R15, 15U },
  { PPC::R16, 16U },
  { PPC::R17, 17U },
  { PPC::R18, 18U },
  { PPC::R19, 19U },
  { PPC::R20, 20U },
  { PPC::R21, 21U },
  { PPC::R22, 22U },
  { PPC::R23, 23U },
  { PPC::R24, 24U },
  { PPC::R25, 25U },
  { PPC::R26, 26U },
  { PPC::R27, 27U },
  { PPC::R28, 28U },
  { PPC::R29, 29U },
  { PPC::R30, 30U },
  { PPC::R31, 31U },
  { PPC::V0, 77U },
  { PPC::V1, 78U },
  { PPC::V2, 79U },
  { PPC::V3, 80U },
  { PPC::V4, 81U },
  { PPC::V5, 82U },
  { PPC::V6, 83U },
  { PPC::V7, 84U },
  { PPC::V8, 85U },
  { PPC::V9, 86U },
  { PPC::V10, 87U },
  { PPC::V11, 88U },
  { PPC::V12, 89U },
  { PPC::V13, 90U },
  { PPC::V14, 91U },
  { PPC::V15, 92U },
  { PPC::V16, 93U },
  { PPC::V17, 94U },
  { PPC::V18, 95U },
  { PPC::V19, 96U },
  { PPC::V20, 97U },
  { PPC::V21, 98U },
  { PPC::V22, 99U },
  { PPC::V23, 100U },
  { PPC::V24, 101U },
  { PPC::V25, 102U },
  { PPC::V26, 103U },
  { PPC::V27, 104U },
  { PPC::V28, 105U },
  { PPC::V29, 106U },
  { PPC::V30, 107U },
  { PPC::V31, 108U },
  { PPC::X0, -2U },
  { PPC::X1, -2U },
  { PPC::X2, -2U },
  { PPC::X3, -2U },
  { PPC::X4, -2U },
  { PPC::X5, -2U },
  { PPC::X6, -2U },
  { PPC::X7, -2U },
  { PPC::X8, -2U },
  { PPC::X9, -2U },
  { PPC::X10, -2U },
  { PPC::X11, -2U },
  { PPC::X12, -2U },
  { PPC::X13, -2U },
  { PPC::X14, -2U },
  { PPC::X15, -2U },
  { PPC::X16, -2U },
  { PPC::X17, -2U },
  { PPC::X18, -2U },
  { PPC::X19, -2U },
  { PPC::X20, -2U },
  { PPC::X21, -2U },
  { PPC::X22, -2U },
  { PPC::X23, -2U },
  { PPC::X24, -2U },
  { PPC::X25, -2U },
  { PPC::X26, -2U },
  { PPC::X27, -2U },
  { PPC::X28, -2U },
  { PPC::X29, -2U },
  { PPC::X30, -2U },
  { PPC::X31, -2U },
};
extern const unsigned PPCEHFlavour1L2DwarfSize = sizeof(PPCEHFlavour1L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const uint16_t PPCRegEncodingTable[] = {
  0,
  0,
  1,
  9,
  0,
  8,
  512,
  256,
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
  9,
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
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  0,
  8,
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
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
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
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
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
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  0,
  2,
  6,
  10,
  14,
  18,
  22,
  26,
  30,
  1,
  5,
  9,
  13,
  17,
  21,
  25,
  29,
  0,
  4,
  8,
  12,
  16,
  20,
  24,
  28,
  3,
  7,
  11,
  15,
  19,
  23,
  27,
  31,
};
static inline void InitPPCMCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0, unsigned PC = 0) {
  RI->InitMCRegisterInfo(PPCRegDesc, 182, RA, PC, PPCMCRegisterClasses, 15, PPCRegUnitRoots, 138, PPCRegDiffLists, PPCRegStrings, PPCSubRegIdxLists, 6,
PPCSubRegIdxRanges,   PPCRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(PPCDwarfFlavour0Dwarf2L, PPCDwarfFlavour0Dwarf2LSize, false);
    break;
  case 1:
    RI->mapDwarfRegsToLLVMRegs(PPCDwarfFlavour1Dwarf2L, PPCDwarfFlavour1Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(PPCEHFlavour0Dwarf2L, PPCEHFlavour0Dwarf2LSize, true);
    break;
  case 1:
    RI->mapDwarfRegsToLLVMRegs(PPCEHFlavour1Dwarf2L, PPCEHFlavour1Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(PPCDwarfFlavour0L2Dwarf, PPCDwarfFlavour0L2DwarfSize, false);
    break;
  case 1:
    RI->mapLLVMRegsToDwarfRegs(PPCDwarfFlavour1L2Dwarf, PPCDwarfFlavour1L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(PPCEHFlavour0L2Dwarf, PPCEHFlavour0L2DwarfSize, true);
    break;
  case 1:
    RI->mapLLVMRegsToDwarfRegs(PPCEHFlavour1L2Dwarf, PPCEHFlavour1L2DwarfSize, true);
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

struct PPCGenRegisterInfo : public TargetRegisterInfo {
  explicit PPCGenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0, unsigned PC = 0);
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

namespace PPC { // Register classes
  extern const TargetRegisterClass GPRCRegClass;
  extern const TargetRegisterClass GPRC_NOR0RegClass;
  extern const TargetRegisterClass GPRC_and_GPRC_NOR0RegClass;
  extern const TargetRegisterClass CRBITRCRegClass;
  extern const TargetRegisterClass F4RCRegClass;
  extern const TargetRegisterClass CRRCRegClass;
  extern const TargetRegisterClass CARRYRCRegClass;
  extern const TargetRegisterClass CTRRCRegClass;
  extern const TargetRegisterClass VRSAVERCRegClass;
  extern const TargetRegisterClass G8RCRegClass;
  extern const TargetRegisterClass G8RC_NOX0RegClass;
  extern const TargetRegisterClass G8RC_and_G8RC_NOX0RegClass;
  extern const TargetRegisterClass F8RCRegClass;
  extern const TargetRegisterClass CTRRC8RegClass;
  extern const TargetRegisterClass VRRCRegClass;
} // end of namespace PPC

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

extern const MCRegisterClass PPCMCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::i32, MVT::Other,
  /* 2 */ MVT::i64, MVT::Other,
  /* 4 */ MVT::f32, MVT::Other,
  /* 6 */ MVT::f64, MVT::Other,
  /* 8 */ MVT::v16i8, MVT::v8i16, MVT::v4i32, MVT::v4f32, MVT::Other,
};

static const char *const SubRegIndexNameTable[] = { "sub_32", "sub_eq", "sub_gt", "sub_lt", "sub_un" };


static const unsigned SubRegIndexLaneMaskTable[] = {
  ~0u,
  0x00000001, // sub_32
  0x00000002, // sub_eq
  0x00000004, // sub_gt
  0x00000008, // sub_lt
  0x00000010, // sub_un
 };



static const TargetRegisterClass *const NullRegClasses[] = { NULL };

static const uint32_t GPRCSubClassMask[] = {
  0x00000005, 
  0x00000a00, // sub_32
};

static const uint32_t GPRC_NOR0SubClassMask[] = {
  0x00000006, 
  0x00000c00, // sub_32
};

static const uint32_t GPRC_and_GPRC_NOR0SubClassMask[] = {
  0x00000004, 
  0x00000800, // sub_32
};

static const uint32_t CRBITRCSubClassMask[] = {
  0x00000008, 
  0x00000020, // sub_eq
  0x00000020, // sub_gt
  0x00000020, // sub_lt
  0x00000020, // sub_un
};

static const uint32_t F4RCSubClassMask[] = {
  0x00001010, 
};

static const uint32_t CRRCSubClassMask[] = {
  0x00000020, 
};

static const uint32_t CARRYRCSubClassMask[] = {
  0x00000040, 
};

static const uint32_t CTRRCSubClassMask[] = {
  0x00000080, 
};

static const uint32_t VRSAVERCSubClassMask[] = {
  0x00000100, 
};

static const uint32_t G8RCSubClassMask[] = {
  0x00000a00, 
};

static const uint32_t G8RC_NOX0SubClassMask[] = {
  0x00000c00, 
};

static const uint32_t G8RC_and_G8RC_NOX0SubClassMask[] = {
  0x00000800, 
};

static const uint32_t F8RCSubClassMask[] = {
  0x00001000, 
};

static const uint32_t CTRRC8SubClassMask[] = {
  0x00002000, 
};

static const uint32_t VRRCSubClassMask[] = {
  0x00004000, 
};

static const uint16_t SuperRegIdxSeqs[] = {
  /* 0 */ 1, 0,
  /* 2 */ 2, 3, 4, 5, 0,
};

static const TargetRegisterClass *const GPRC_and_GPRC_NOR0Superclasses[] = {
  &PPC::GPRCRegClass,
  &PPC::GPRC_NOR0RegClass,
  NULL
};

static const TargetRegisterClass *const G8RC_and_G8RC_NOX0Superclasses[] = {
  &PPC::G8RCRegClass,
  &PPC::G8RC_NOX0RegClass,
  NULL
};

static const TargetRegisterClass *const F8RCSuperclasses[] = {
  &PPC::F4RCRegClass,
  NULL
};

namespace PPC {   // Register class instances
  extern const TargetRegisterClass GPRCRegClass = {
    &PPCMCRegisterClasses[GPRCRegClassID],
    VTLists + 0,
    GPRCSubClassMask,
    SuperRegIdxSeqs + 0,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass GPRC_NOR0RegClass = {
    &PPCMCRegisterClasses[GPRC_NOR0RegClassID],
    VTLists + 0,
    GPRC_NOR0SubClassMask,
    SuperRegIdxSeqs + 0,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass GPRC_and_GPRC_NOR0RegClass = {
    &PPCMCRegisterClasses[GPRC_and_GPRC_NOR0RegClassID],
    VTLists + 0,
    GPRC_and_GPRC_NOR0SubClassMask,
    SuperRegIdxSeqs + 0,
    GPRC_and_GPRC_NOR0Superclasses,
    0
  };

  extern const TargetRegisterClass CRBITRCRegClass = {
    &PPCMCRegisterClasses[CRBITRCRegClassID],
    VTLists + 0,
    CRBITRCSubClassMask,
    SuperRegIdxSeqs + 2,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass F4RCRegClass = {
    &PPCMCRegisterClasses[F4RCRegClassID],
    VTLists + 4,
    F4RCSubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass CRRCRegClass = {
    &PPCMCRegisterClasses[CRRCRegClassID],
    VTLists + 0,
    CRRCSubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass CARRYRCRegClass = {
    &PPCMCRegisterClasses[CARRYRCRegClassID],
    VTLists + 0,
    CARRYRCSubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass CTRRCRegClass = {
    &PPCMCRegisterClasses[CTRRCRegClassID],
    VTLists + 0,
    CTRRCSubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass VRSAVERCRegClass = {
    &PPCMCRegisterClasses[VRSAVERCRegClassID],
    VTLists + 0,
    VRSAVERCSubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass G8RCRegClass = {
    &PPCMCRegisterClasses[G8RCRegClassID],
    VTLists + 2,
    G8RCSubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass G8RC_NOX0RegClass = {
    &PPCMCRegisterClasses[G8RC_NOX0RegClassID],
    VTLists + 2,
    G8RC_NOX0SubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass G8RC_and_G8RC_NOX0RegClass = {
    &PPCMCRegisterClasses[G8RC_and_G8RC_NOX0RegClassID],
    VTLists + 2,
    G8RC_and_G8RC_NOX0SubClassMask,
    SuperRegIdxSeqs + 1,
    G8RC_and_G8RC_NOX0Superclasses,
    0
  };

  extern const TargetRegisterClass F8RCRegClass = {
    &PPCMCRegisterClasses[F8RCRegClassID],
    VTLists + 6,
    F8RCSubClassMask,
    SuperRegIdxSeqs + 1,
    F8RCSuperclasses,
    0
  };

  extern const TargetRegisterClass CTRRC8RegClass = {
    &PPCMCRegisterClasses[CTRRC8RegClassID],
    VTLists + 2,
    CTRRC8SubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass VRRCRegClass = {
    &PPCMCRegisterClasses[VRRCRegClassID],
    VTLists + 8,
    VRRCSubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    0
  };

}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &PPC::GPRCRegClass,
    &PPC::GPRC_NOR0RegClass,
    &PPC::GPRC_and_GPRC_NOR0RegClass,
    &PPC::CRBITRCRegClass,
    &PPC::F4RCRegClass,
    &PPC::CRRCRegClass,
    &PPC::CARRYRCRegClass,
    &PPC::CTRRCRegClass,
    &PPC::VRSAVERCRegClass,
    &PPC::G8RCRegClass,
    &PPC::G8RC_NOX0RegClass,
    &PPC::G8RC_and_G8RC_NOX0RegClass,
    &PPC::F8RCRegClass,
    &PPC::CTRRC8RegClass,
    &PPC::VRRCRegClass,
  };
}

static const TargetRegisterInfoDesc PPCRegInfoDesc[] = { // Extra Descriptors
  { 0, 0 },
  { 0, 1 },
  { 0, 1 },
  { 0, 0 },
  { 0, 1 },
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
unsigned PPCGenRegisterInfo::composeSubRegIndicesImpl(unsigned IdxA, unsigned IdxB) const {
  static const uint8_t Rows[1][5] = {
    { 0, 0, 0, 0, 0, },
  };

  --IdxA; assert(IdxA < 5);
  --IdxB; assert(IdxB < 5);
  return Rows[0][IdxB];
}

const TargetRegisterClass *PPCGenRegisterInfo::getSubClassWithSubReg(const TargetRegisterClass *RC, unsigned Idx) const {
  static const uint8_t Table[15][5] = {
    {	// GPRC
      0,	// sub_32
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// GPRC_NOR0
      0,	// sub_32
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// GPRC_and_GPRC_NOR0
      0,	// sub_32
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// CRBITRC
      0,	// sub_32
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// F4RC
      0,	// sub_32
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// CRRC
      0,	// sub_32
      6,	// sub_eq -> CRRC
      6,	// sub_gt -> CRRC
      6,	// sub_lt -> CRRC
      6,	// sub_un -> CRRC
    },
    {	// CARRYRC
      0,	// sub_32
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// CTRRC
      0,	// sub_32
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// VRSAVERC
      0,	// sub_32
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// G8RC
      10,	// sub_32 -> G8RC
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// G8RC_NOX0
      11,	// sub_32 -> G8RC_NOX0
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// G8RC_and_G8RC_NOX0
      12,	// sub_32 -> G8RC_and_G8RC_NOX0
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// F8RC
      0,	// sub_32
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// CTRRC8
      0,	// sub_32
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// VRRC
      0,	// sub_32
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
  };
  assert(RC && "Missing regclass");
  if (!Idx) return RC;
  --Idx;
  assert(Idx < 5 && "Bad subreg");
  unsigned TV = Table[RC->getID()][Idx];
  return TV ? getRegClass(TV - 1) : 0;
}

/// Get the weight in units of pressure for this register class.
const RegClassWeight &PPCGenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {1, 34},  	// GPRC
    {1, 34},  	// GPRC_NOR0
    {1, 33},  	// GPRC_and_GPRC_NOR0
    {1, 32},  	// CRBITRC
    {1, 32},  	// F4RC
    {4, 32},  	// CRRC
    {1, 1},  	// CARRYRC
    {0, 0},  	// CTRRC
    {1, 1},  	// VRSAVERC
    {1, 34},  	// G8RC
    {1, 34},  	// G8RC_NOX0
    {1, 33},  	// G8RC_and_G8RC_NOX0
    {1, 32},  	// F8RC
    {0, 0},  	// CTRRC8
    {1, 32},  	// VRRC
    {0, 0} };
  return RCWeightTable[RC->getID()];
}

/// Get the weight in units of pressure for this register unit.
unsigned PPCGenRegisterInfo::
getRegUnitWeight(unsigned RegUnit) const {
  assert(RegUnit < 138 && "invalid register unit");
  // All register units have unit weight.
  return 1;
}


// Get the number of dimensions of register pressure.
unsigned PPCGenRegisterInfo::getNumRegPressureSets() const {
  return 6;
}

// Get the name of this register unit pressure set.
const char *PPCGenRegisterInfo::
getRegPressureSetName(unsigned Idx) const {
  static const char *PressureNameTable[] = {
    "CARRYRC",
    "VRSAVERC",
    "CRBITRC",
    "F4RC",
    "VRRC",
    "GPRC+GPRC_NOR0",
    0 };
  return PressureNameTable[Idx];
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned PPCGenRegisterInfo::
getRegPressureSetLimit(unsigned Idx) const {
  static const unsigned PressureLimitTable[] = {
    1,  	// 0: CARRYRC
    1,  	// 1: VRSAVERC
    32,  	// 2: CRBITRC
    32,  	// 3: F4RC
    32,  	// 4: VRRC
    35,  	// 5: GPRC+GPRC_NOR0
    0 };
  return PressureLimitTable[Idx];
}

/// Table of pressure sets per register class or unit.
static const int RCSetsTable[] = {
    5,  -1,  	// #0 GPRC
    5,  -1,  	// #2 GPRC_NOR0
    5,  -1,  	// #4 GPRC_and_GPRC_NOR0
    2,  -1,  	// #6 CRBITRC
    3,  -1,  	// #8 F4RC
    2,  -1,  	// #10 CRRC
    0,  -1,  	// #12 CARRYRC
    -1,  	// #14 CTRRC
    1,  -1,  	// #15 VRSAVERC
    5,  -1,  	// #17 G8RC
    5,  -1,  	// #19 G8RC_NOX0
    5,  -1,  	// #21 G8RC_and_G8RC_NOX0
    3,  -1,  	// #23 F8RC
    -1,  	// #25 CTRRC8
    4,  -1,  	// #26 VRRC
    -1 };

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int* PPCGenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const unsigned RCSetStartTable[] = {
    0,2,4,6,8,10,12,14,15,17,19,21,23,25,26,0 };
  unsigned SetListStart = RCSetStartTable[RC->getID()];
  return &RCSetsTable[SetListStart];
}

/// Get the dimensions of register pressure impacted by this register unit.
/// Returns a -1 terminated array of pressure set IDs
const int* PPCGenRegisterInfo::
getRegUnitPressureSets(unsigned RegUnit) const {
  assert(RegUnit < 138 && "invalid register unit");
  static const unsigned RUSetStartTable[] = {
    0,12,14,0,14,14,15,0,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,14,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,0 };
  unsigned SetListStart = RUSetStartTable[RegUnit];
  return &RCSetsTable[SetListStart];
}

extern const MCRegisterDesc PPCRegDesc[];
extern const MCPhysReg PPCRegDiffLists[];
extern const char PPCRegStrings[];
extern const uint16_t PPCRegUnitRoots[][2];
extern const uint16_t PPCSubRegIdxLists[];
extern const MCRegisterInfo::SubRegCoveredBits PPCSubRegIdxRanges[];
extern const uint16_t PPCRegEncodingTable[];
// PPC Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair PPCDwarfFlavour0Dwarf2L[];
extern const unsigned PPCDwarfFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair PPCDwarfFlavour1Dwarf2L[];
extern const unsigned PPCDwarfFlavour1Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair PPCEHFlavour0Dwarf2L[];
extern const unsigned PPCEHFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair PPCEHFlavour1Dwarf2L[];
extern const unsigned PPCEHFlavour1Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair PPCDwarfFlavour0L2Dwarf[];
extern const unsigned PPCDwarfFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair PPCDwarfFlavour1L2Dwarf[];
extern const unsigned PPCDwarfFlavour1L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair PPCEHFlavour0L2Dwarf[];
extern const unsigned PPCEHFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair PPCEHFlavour1L2Dwarf[];
extern const unsigned PPCEHFlavour1L2DwarfSize;

PPCGenRegisterInfo::
PPCGenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour, unsigned PC)
  : TargetRegisterInfo(PPCRegInfoDesc, RegisterClasses, RegisterClasses+15,
             SubRegIndexNameTable, SubRegIndexLaneMaskTable, 0xffffffe0) {
  InitMCRegisterInfo(PPCRegDesc, 182, RA, PC,
                     PPCMCRegisterClasses, 15,
                     PPCRegUnitRoots,
                     138,
                     PPCRegDiffLists,
                     PPCRegStrings,
                     PPCSubRegIdxLists,
                     6,
                     PPCSubRegIdxRanges,
                     PPCRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(PPCDwarfFlavour0Dwarf2L, PPCDwarfFlavour0Dwarf2LSize, false);
    break;
  case 1:
    mapDwarfRegsToLLVMRegs(PPCDwarfFlavour1Dwarf2L, PPCDwarfFlavour1Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(PPCEHFlavour0Dwarf2L, PPCEHFlavour0Dwarf2LSize, true);
    break;
  case 1:
    mapDwarfRegsToLLVMRegs(PPCEHFlavour1Dwarf2L, PPCEHFlavour1Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(PPCDwarfFlavour0L2Dwarf, PPCDwarfFlavour0L2DwarfSize, false);
    break;
  case 1:
    mapLLVMRegsToDwarfRegs(PPCDwarfFlavour1L2Dwarf, PPCDwarfFlavour1L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(PPCEHFlavour0L2Dwarf, PPCEHFlavour0L2DwarfSize, true);
    break;
  case 1:
    mapLLVMRegsToDwarfRegs(PPCEHFlavour1L2Dwarf, PPCEHFlavour1L2DwarfSize, true);
    break;
  }
}

static const MCPhysReg CSR_Altivec_SaveList[] = { PPC::V20, PPC::V21, PPC::V22, PPC::V23, PPC::V24, PPC::V25, PPC::V26, PPC::V27, PPC::V28, PPC::V29, PPC::V30, PPC::V31, 0 };
static const uint32_t CSR_Altivec_RegMask[] = { 0x00000000, 0x00000000, 0x00000000, 0x001ffe00, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_Darwin32_SaveList[] = { PPC::R13, PPC::R14, PPC::R15, PPC::R16, PPC::R17, PPC::R18, PPC::R19, PPC::R20, PPC::R21, PPC::R22, PPC::R23, PPC::R24, PPC::R25, PPC::R26, PPC::R27, PPC::R28, PPC::R29, PPC::R30, PPC::R31, PPC::F14, PPC::F15, PPC::F16, PPC::F17, PPC::F18, PPC::F19, PPC::F20, PPC::F21, PPC::F22, PPC::F23, PPC::F24, PPC::F25, PPC::F26, PPC::F27, PPC::F28, PPC::F29, PPC::F30, PPC::F31, PPC::CR2, PPC::CR3, PPC::CR4, 0 };
static const uint32_t CSR_Darwin32_RegMask[] = { 0x00007000, 0x0007fffe, 0x001ffffc, 0x00000000, 0x07000000, 0x00070707, };
static const MCPhysReg CSR_Darwin32_Altivec_SaveList[] = { PPC::R13, PPC::R14, PPC::R15, PPC::R16, PPC::R17, PPC::R18, PPC::R19, PPC::R20, PPC::R21, PPC::R22, PPC::R23, PPC::R24, PPC::R25, PPC::R26, PPC::R27, PPC::R28, PPC::R29, PPC::R30, PPC::R31, PPC::F14, PPC::F15, PPC::F16, PPC::F17, PPC::F18, PPC::F19, PPC::F20, PPC::F21, PPC::F22, PPC::F23, PPC::F24, PPC::F25, PPC::F26, PPC::F27, PPC::F28, PPC::F29, PPC::F30, PPC::F31, PPC::CR2, PPC::CR3, PPC::CR4, PPC::V20, PPC::V21, PPC::V22, PPC::V23, PPC::V24, PPC::V25, PPC::V26, PPC::V27, PPC::V28, PPC::V29, PPC::V30, PPC::V31, 0 };
static const uint32_t CSR_Darwin32_Altivec_RegMask[] = { 0x00007000, 0x0007fffe, 0x001ffffc, 0x001ffe00, 0x07000000, 0x00070707, };
static const MCPhysReg CSR_Darwin64_SaveList[] = { PPC::X13, PPC::X14, PPC::X15, PPC::X16, PPC::X17, PPC::X18, PPC::X19, PPC::X20, PPC::X21, PPC::X22, PPC::X23, PPC::X24, PPC::X25, PPC::X26, PPC::X27, PPC::X28, PPC::X29, PPC::X30, PPC::X31, PPC::F14, PPC::F15, PPC::F16, PPC::F17, PPC::F18, PPC::F19, PPC::F20, PPC::F21, PPC::F22, PPC::F23, PPC::F24, PPC::F25, PPC::F26, PPC::F27, PPC::F28, PPC::F29, PPC::F30, PPC::F31, PPC::CR2, PPC::CR3, PPC::CR4, 0 };
static const uint32_t CSR_Darwin64_RegMask[] = { 0x00007000, 0x0007fffe, 0x001ffffc, 0x00000000, 0x071ffffc, 0x00070707, };
static const MCPhysReg CSR_Darwin64_Altivec_SaveList[] = { PPC::X13, PPC::X14, PPC::X15, PPC::X16, PPC::X17, PPC::X18, PPC::X19, PPC::X20, PPC::X21, PPC::X22, PPC::X23, PPC::X24, PPC::X25, PPC::X26, PPC::X27, PPC::X28, PPC::X29, PPC::X30, PPC::X31, PPC::F14, PPC::F15, PPC::F16, PPC::F17, PPC::F18, PPC::F19, PPC::F20, PPC::F21, PPC::F22, PPC::F23, PPC::F24, PPC::F25, PPC::F26, PPC::F27, PPC::F28, PPC::F29, PPC::F30, PPC::F31, PPC::CR2, PPC::CR3, PPC::CR4, PPC::V20, PPC::V21, PPC::V22, PPC::V23, PPC::V24, PPC::V25, PPC::V26, PPC::V27, PPC::V28, PPC::V29, PPC::V30, PPC::V31, 0 };
static const uint32_t CSR_Darwin64_Altivec_RegMask[] = { 0x00007000, 0x0007fffe, 0x001ffffc, 0x001ffe00, 0x071ffffc, 0x00070707, };
static const MCPhysReg CSR_NoRegs_SaveList[] = { 0 };
static const uint32_t CSR_NoRegs_RegMask[] = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_SVR432_SaveList[] = { PPC::R14, PPC::R15, PPC::R16, PPC::R17, PPC::R18, PPC::R19, PPC::R20, PPC::R21, PPC::R22, PPC::R23, PPC::R24, PPC::R25, PPC::R26, PPC::R27, PPC::R28, PPC::R29, PPC::R30, PPC::R31, PPC::F14, PPC::F15, PPC::F16, PPC::F17, PPC::F18, PPC::F19, PPC::F20, PPC::F21, PPC::F22, PPC::F23, PPC::F24, PPC::F25, PPC::F26, PPC::F27, PPC::F28, PPC::F29, PPC::F30, PPC::F31, PPC::CR2, PPC::CR3, PPC::CR4, 0 };
static const uint32_t CSR_SVR432_RegMask[] = { 0x00007000, 0x0007fffe, 0x001ffff8, 0x00000000, 0x07000000, 0x00070707, };
static const MCPhysReg CSR_SVR432_Altivec_SaveList[] = { PPC::R14, PPC::R15, PPC::R16, PPC::R17, PPC::R18, PPC::R19, PPC::R20, PPC::R21, PPC::R22, PPC::R23, PPC::R24, PPC::R25, PPC::R26, PPC::R27, PPC::R28, PPC::R29, PPC::R30, PPC::R31, PPC::F14, PPC::F15, PPC::F16, PPC::F17, PPC::F18, PPC::F19, PPC::F20, PPC::F21, PPC::F22, PPC::F23, PPC::F24, PPC::F25, PPC::F26, PPC::F27, PPC::F28, PPC::F29, PPC::F30, PPC::F31, PPC::CR2, PPC::CR3, PPC::CR4, PPC::V20, PPC::V21, PPC::V22, PPC::V23, PPC::V24, PPC::V25, PPC::V26, PPC::V27, PPC::V28, PPC::V29, PPC::V30, PPC::V31, 0 };
static const uint32_t CSR_SVR432_Altivec_RegMask[] = { 0x00007000, 0x0007fffe, 0x001ffff8, 0x001ffe00, 0x07000000, 0x00070707, };
static const MCPhysReg CSR_SVR464_SaveList[] = { PPC::X14, PPC::X15, PPC::X16, PPC::X17, PPC::X18, PPC::X19, PPC::X20, PPC::X21, PPC::X22, PPC::X23, PPC::X24, PPC::X25, PPC::X26, PPC::X27, PPC::X28, PPC::X29, PPC::X30, PPC::X31, PPC::F14, PPC::F15, PPC::F16, PPC::F17, PPC::F18, PPC::F19, PPC::F20, PPC::F21, PPC::F22, PPC::F23, PPC::F24, PPC::F25, PPC::F26, PPC::F27, PPC::F28, PPC::F29, PPC::F30, PPC::F31, PPC::CR2, PPC::CR3, PPC::CR4, 0 };
static const uint32_t CSR_SVR464_RegMask[] = { 0x00007000, 0x0007fffe, 0x001ffff8, 0x00000000, 0x071ffff8, 0x00070707, };
static const MCPhysReg CSR_SVR464_Altivec_SaveList[] = { PPC::X14, PPC::X15, PPC::X16, PPC::X17, PPC::X18, PPC::X19, PPC::X20, PPC::X21, PPC::X22, PPC::X23, PPC::X24, PPC::X25, PPC::X26, PPC::X27, PPC::X28, PPC::X29, PPC::X30, PPC::X31, PPC::F14, PPC::F15, PPC::F16, PPC::F17, PPC::F18, PPC::F19, PPC::F20, PPC::F21, PPC::F22, PPC::F23, PPC::F24, PPC::F25, PPC::F26, PPC::F27, PPC::F28, PPC::F29, PPC::F30, PPC::F31, PPC::CR2, PPC::CR3, PPC::CR4, PPC::V20, PPC::V21, PPC::V22, PPC::V23, PPC::V24, PPC::V25, PPC::V26, PPC::V27, PPC::V28, PPC::V29, PPC::V30, PPC::V31, 0 };
static const uint32_t CSR_SVR464_Altivec_RegMask[] = { 0x00007000, 0x0007fffe, 0x001ffff8, 0x001ffe00, 0x071ffff8, 0x00070707, };


} // End llvm namespace 
#endif // GET_REGINFO_TARGET_DESC

