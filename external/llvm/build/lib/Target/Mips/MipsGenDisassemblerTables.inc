/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* * Mips Disassembler                                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "llvm/MC/MCInst.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/DataTypes.h"
#include "llvm/Support/LEB128.h"
#include "llvm/Support/raw_ostream.h"
#include <assert.h>

namespace llvm {

// Helper function for extracting fields from encoded instructions.
template<typename InsnType>
static InsnType fieldFromInstruction(InsnType insn, unsigned startBit,
                                     unsigned numBits) {
    assert(startBit + numBits <= (sizeof(InsnType)*8) &&
           "Instruction field out of bounds!");
    InsnType fieldMask;
    if (numBits == sizeof(InsnType)*8)
      fieldMask = (InsnType)(-1LL);
    else
      fieldMask = (((InsnType)1 << numBits) - 1) << startBit;
    return (insn & fieldMask) >> startBit;
}

static const uint8_t DecoderTable16[] = {
/* 0 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3 */       MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 15
/* 7 */       MCD::OPC_CheckPredicate, 0, 162, 1, // Skip to: 429
/* 11 */      MCD::OPC_Decode, 148, 1, 0, // Opcode: BeqzRxImm16
/* 15 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 27
/* 19 */      MCD::OPC_CheckPredicate, 0, 150, 1, // Skip to: 429
/* 23 */      MCD::OPC_Decode, 151, 1, 0, // Opcode: BnezRxImm16
/* 27 */      MCD::OPC_FilterValue, 9, 7, 0, // Skip to: 38
/* 31 */      MCD::OPC_CheckPredicate, 0, 138, 1, // Skip to: 429
/* 35 */      MCD::OPC_Decode, 118, 1, // Opcode: AddiuRxRxImm16
/* 38 */      MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 50
/* 42 */      MCD::OPC_CheckPredicate, 0, 127, 1, // Skip to: 429
/* 46 */      MCD::OPC_Decode, 162, 6, 0, // Opcode: SltiRxImm16
/* 50 */      MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 62
/* 54 */      MCD::OPC_CheckPredicate, 0, 115, 1, // Skip to: 429
/* 58 */      MCD::OPC_Decode, 165, 6, 0, // Opcode: SltiuRxImm16
/* 62 */      MCD::OPC_FilterValue, 12, 38, 0, // Skip to: 104
/* 66 */      MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 69 */      MCD::OPC_FilterValue, 3, 7, 0, // Skip to: 80
/* 73 */      MCD::OPC_CheckPredicate, 0, 96, 1, // Skip to: 429
/* 77 */      MCD::OPC_Decode, 121, 2, // Opcode: AddiuSpImm16
/* 80 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 92
/* 84 */      MCD::OPC_CheckPredicate, 0, 85, 1, // Skip to: 429
/* 88 */      MCD::OPC_Decode, 170, 4, 3, // Opcode: Move32R16
/* 92 */      MCD::OPC_FilterValue, 7, 77, 1, // Skip to: 429
/* 96 */      MCD::OPC_CheckPredicate, 0, 73, 1, // Skip to: 429
/* 100 */     MCD::OPC_Decode, 171, 4, 4, // Opcode: MoveR3216
/* 104 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 116
/* 108 */     MCD::OPC_CheckPredicate, 0, 61, 1, // Skip to: 429
/* 112 */     MCD::OPC_Decode, 200, 3, 0, // Opcode: LiRxImm16
/* 116 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 128
/* 120 */     MCD::OPC_CheckPredicate, 0, 49, 1, // Skip to: 429
/* 124 */     MCD::OPC_Decode, 253, 1, 0, // Opcode: CmpiRxImm16
/* 128 */     MCD::OPC_FilterValue, 28, 26, 0, // Skip to: 158
/* 132 */     MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 135 */     MCD::OPC_FilterValue, 1, 7, 0, // Skip to: 146
/* 139 */     MCD::OPC_CheckPredicate, 0, 30, 1, // Skip to: 429
/* 143 */     MCD::OPC_Decode, 123, 5, // Opcode: AdduRxRyRz16
/* 146 */     MCD::OPC_FilterValue, 3, 23, 1, // Skip to: 429
/* 150 */     MCD::OPC_CheckPredicate, 0, 19, 1, // Skip to: 429
/* 154 */     MCD::OPC_Decode, 174, 6, 5, // Opcode: SubuRxRyRz16
/* 158 */     MCD::OPC_FilterValue, 29, 11, 1, // Skip to: 429
/* 162 */     MCD::OPC_ExtractField, 0, 5,  // Inst{4-0} ...
/* 165 */     MCD::OPC_FilterValue, 0, 63, 0, // Skip to: 232
/* 169 */     MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 172 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 184
/* 176 */     MCD::OPC_CheckPredicate, 0, 249, 0, // Skip to: 429
/* 180 */     MCD::OPC_Decode, 245, 2, 2, // Opcode: JumpLinkReg16
/* 184 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 202
/* 188 */     MCD::OPC_CheckPredicate, 0, 237, 0, // Skip to: 429
/* 192 */     MCD::OPC_CheckField, 8, 3, 0, 231, 0, // Skip to: 429
/* 198 */     MCD::OPC_Decode, 242, 2, 2, // Opcode: JrRa16
/* 202 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 214
/* 206 */     MCD::OPC_CheckPredicate, 0, 219, 0, // Skip to: 429
/* 210 */     MCD::OPC_Decode, 244, 2, 0, // Opcode: JrcRx16
/* 214 */     MCD::OPC_FilterValue, 7, 211, 0, // Skip to: 429
/* 218 */     MCD::OPC_CheckPredicate, 0, 207, 0, // Skip to: 429
/* 222 */     MCD::OPC_CheckField, 8, 3, 0, 201, 0, // Skip to: 429
/* 228 */     MCD::OPC_Decode, 243, 2, 2, // Opcode: JrcRa16
/* 232 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 244
/* 236 */     MCD::OPC_CheckPredicate, 0, 189, 0, // Skip to: 429
/* 240 */     MCD::OPC_Decode, 160, 6, 6, // Opcode: SltRxRy16
/* 244 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 256
/* 248 */     MCD::OPC_CheckPredicate, 0, 177, 0, // Skip to: 429
/* 252 */     MCD::OPC_Decode, 168, 6, 6, // Opcode: SltuRxRy16
/* 256 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 268
/* 260 */     MCD::OPC_CheckPredicate, 0, 165, 0, // Skip to: 429
/* 264 */     MCD::OPC_Decode, 158, 6, 7, // Opcode: SllvRxRy16
/* 268 */     MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 286
/* 272 */     MCD::OPC_CheckPredicate, 0, 153, 0, // Skip to: 429
/* 276 */     MCD::OPC_CheckField, 5, 6, 0, 147, 0, // Skip to: 429
/* 282 */     MCD::OPC_Decode, 153, 1, 2, // Opcode: Break16
/* 286 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 298
/* 290 */     MCD::OPC_CheckPredicate, 0, 135, 0, // Skip to: 429
/* 294 */     MCD::OPC_Decode, 173, 6, 7, // Opcode: SrlvRxRy16
/* 298 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 310
/* 302 */     MCD::OPC_CheckPredicate, 0, 123, 0, // Skip to: 429
/* 306 */     MCD::OPC_Decode, 171, 6, 7, // Opcode: SravRxRy16
/* 310 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 322
/* 314 */     MCD::OPC_CheckPredicate, 0, 111, 0, // Skip to: 429
/* 318 */     MCD::OPC_Decode, 252, 1, 6, // Opcode: CmpRxRy16
/* 322 */     MCD::OPC_FilterValue, 12, 7, 0, // Skip to: 333
/* 326 */     MCD::OPC_CheckPredicate, 0, 99, 0, // Skip to: 429
/* 330 */     MCD::OPC_Decode, 124, 7, // Opcode: AndRxRxRy16
/* 333 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 345
/* 337 */     MCD::OPC_CheckPredicate, 0, 88, 0, // Skip to: 429
/* 341 */     MCD::OPC_Decode, 194, 4, 7, // Opcode: OrRxRxRy16
/* 345 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 357
/* 349 */     MCD::OPC_CheckPredicate, 0, 76, 0, // Skip to: 429
/* 353 */     MCD::OPC_Decode, 196, 6, 7, // Opcode: XorRxRxRy16
/* 357 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 369
/* 361 */     MCD::OPC_CheckPredicate, 0, 64, 0, // Skip to: 429
/* 365 */     MCD::OPC_Decode, 187, 4, 6, // Opcode: NotRxRy16
/* 369 */     MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 381
/* 373 */     MCD::OPC_CheckPredicate, 0, 52, 0, // Skip to: 429
/* 377 */     MCD::OPC_Decode, 168, 4, 0, // Opcode: Mfhi16
/* 381 */     MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 393
/* 385 */     MCD::OPC_CheckPredicate, 0, 40, 0, // Skip to: 429
/* 389 */     MCD::OPC_Decode, 169, 4, 0, // Opcode: Mflo16
/* 393 */     MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 405
/* 397 */     MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 429
/* 401 */     MCD::OPC_Decode, 182, 2, 6, // Opcode: DivRxRy16
/* 405 */     MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 417
/* 409 */     MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 429
/* 413 */     MCD::OPC_Decode, 183, 2, 6, // Opcode: DivuRxRy16
/* 417 */     MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 429
/* 421 */     MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 429
/* 425 */     MCD::OPC_Decode, 186, 4, 6, // Opcode: NegRxRy16
/* 429 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3 */       MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 26
/* 7 */       MCD::OPC_CheckPredicate, 0, 170, 1, // Skip to: 437
/* 11 */      MCD::OPC_CheckField, 27, 5, 30, 164, 1, // Skip to: 437
/* 17 */      MCD::OPC_CheckField, 5, 3, 0, 158, 1, // Skip to: 437
/* 23 */      MCD::OPC_Decode, 117, 0, // Opcode: AddiuRxPcImmX16
/* 26 */      MCD::OPC_FilterValue, 2, 20, 0, // Skip to: 50
/* 30 */      MCD::OPC_CheckPredicate, 0, 147, 1, // Skip to: 437
/* 34 */      MCD::OPC_CheckField, 27, 5, 30, 141, 1, // Skip to: 437
/* 40 */      MCD::OPC_CheckField, 5, 6, 0, 135, 1, // Skip to: 437
/* 46 */      MCD::OPC_Decode, 150, 1, 8, // Opcode: BimmX16
/* 50 */      MCD::OPC_FilterValue, 4, 20, 0, // Skip to: 74
/* 54 */      MCD::OPC_CheckPredicate, 0, 123, 1, // Skip to: 437
/* 58 */      MCD::OPC_CheckField, 27, 5, 30, 117, 1, // Skip to: 437
/* 64 */      MCD::OPC_CheckField, 5, 3, 0, 111, 1, // Skip to: 437
/* 70 */      MCD::OPC_Decode, 149, 1, 0, // Opcode: BeqzRxImmX16
/* 74 */      MCD::OPC_FilterValue, 5, 20, 0, // Skip to: 98
/* 78 */      MCD::OPC_CheckPredicate, 0, 99, 1, // Skip to: 437
/* 82 */      MCD::OPC_CheckField, 27, 5, 30, 93, 1, // Skip to: 437
/* 88 */      MCD::OPC_CheckField, 5, 3, 0, 87, 1, // Skip to: 437
/* 94 */      MCD::OPC_Decode, 152, 1, 0, // Opcode: BnezRxImmX16
/* 98 */      MCD::OPC_FilterValue, 6, 91, 0, // Skip to: 193
/* 102 */     MCD::OPC_ExtractField, 27, 5,  // Inst{31-27} ...
/* 105 */     MCD::OPC_FilterValue, 30, 72, 1, // Skip to: 437
/* 109 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 112 */     MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 155
/* 116 */     MCD::OPC_ExtractField, 0, 5,  // Inst{4-0} ...
/* 119 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 131
/* 123 */     MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 155
/* 127 */     MCD::OPC_Decode, 157, 6, 6, // Opcode: SllX16
/* 131 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 143
/* 135 */     MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 155
/* 139 */     MCD::OPC_Decode, 172, 6, 6, // Opcode: SrlX16
/* 143 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 155
/* 147 */     MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 155
/* 151 */     MCD::OPC_Decode, 170, 6, 6, // Opcode: SraX16
/* 155 */     MCD::OPC_ExtractField, 5, 6,  // Inst{10-5} ...
/* 158 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 170
/* 162 */     MCD::OPC_CheckPredicate, 0, 15, 1, // Skip to: 437
/* 166 */     MCD::OPC_Decode, 160, 1, 2, // Opcode: BteqzX16
/* 170 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 182
/* 174 */     MCD::OPC_CheckPredicate, 0, 3, 1, // Skip to: 437
/* 178 */     MCD::OPC_Decode, 167, 1, 2, // Opcode: BtnezX16
/* 182 */     MCD::OPC_FilterValue, 24, 251, 0, // Skip to: 437
/* 186 */     MCD::OPC_CheckPredicate, 0, 247, 0, // Skip to: 437
/* 190 */     MCD::OPC_Decode, 122, 2, // Opcode: AddiuSpImmX16
/* 193 */     MCD::OPC_FilterValue, 8, 19, 0, // Skip to: 216
/* 197 */     MCD::OPC_CheckPredicate, 0, 236, 0, // Skip to: 437
/* 201 */     MCD::OPC_CheckField, 27, 5, 30, 230, 0, // Skip to: 437
/* 207 */     MCD::OPC_CheckField, 4, 1, 0, 224, 0, // Skip to: 437
/* 213 */     MCD::OPC_Decode, 120, 9, // Opcode: AddiuRxRyOffMemX16
/* 216 */     MCD::OPC_FilterValue, 9, 19, 0, // Skip to: 239
/* 220 */     MCD::OPC_CheckPredicate, 0, 213, 0, // Skip to: 437
/* 224 */     MCD::OPC_CheckField, 27, 5, 30, 207, 0, // Skip to: 437
/* 230 */     MCD::OPC_CheckField, 5, 3, 0, 201, 0, // Skip to: 437
/* 236 */     MCD::OPC_Decode, 116, 0, // Opcode: AddiuRxImmX16
/* 239 */     MCD::OPC_FilterValue, 10, 20, 0, // Skip to: 263
/* 243 */     MCD::OPC_CheckPredicate, 0, 190, 0, // Skip to: 437
/* 247 */     MCD::OPC_CheckField, 27, 5, 30, 184, 0, // Skip to: 437
/* 253 */     MCD::OPC_CheckField, 5, 3, 0, 178, 0, // Skip to: 437
/* 259 */     MCD::OPC_Decode, 163, 6, 0, // Opcode: SltiRxImmX16
/* 263 */     MCD::OPC_FilterValue, 11, 20, 0, // Skip to: 287
/* 267 */     MCD::OPC_CheckPredicate, 0, 166, 0, // Skip to: 437
/* 271 */     MCD::OPC_CheckField, 27, 5, 30, 160, 0, // Skip to: 437
/* 277 */     MCD::OPC_CheckField, 5, 3, 0, 154, 0, // Skip to: 437
/* 283 */     MCD::OPC_Decode, 166, 6, 0, // Opcode: SltiuRxImmX16
/* 287 */     MCD::OPC_FilterValue, 13, 20, 0, // Skip to: 311
/* 291 */     MCD::OPC_CheckPredicate, 0, 142, 0, // Skip to: 437
/* 295 */     MCD::OPC_CheckField, 27, 5, 30, 136, 0, // Skip to: 437
/* 301 */     MCD::OPC_CheckField, 5, 3, 0, 130, 0, // Skip to: 437
/* 307 */     MCD::OPC_Decode, 201, 3, 0, // Opcode: LiRxImmX16
/* 311 */     MCD::OPC_FilterValue, 14, 20, 0, // Skip to: 335
/* 315 */     MCD::OPC_CheckPredicate, 0, 118, 0, // Skip to: 437
/* 319 */     MCD::OPC_CheckField, 27, 5, 30, 112, 0, // Skip to: 437
/* 325 */     MCD::OPC_CheckField, 5, 3, 0, 106, 0, // Skip to: 437
/* 331 */     MCD::OPC_Decode, 254, 1, 0, // Opcode: CmpiRxImmX16
/* 335 */     MCD::OPC_FilterValue, 22, 20, 0, // Skip to: 359
/* 339 */     MCD::OPC_CheckPredicate, 0, 94, 0, // Skip to: 437
/* 343 */     MCD::OPC_CheckField, 27, 5, 30, 88, 0, // Skip to: 437
/* 349 */     MCD::OPC_CheckField, 5, 3, 0, 82, 0, // Skip to: 437
/* 355 */     MCD::OPC_Decode, 207, 3, 0, // Opcode: LwRxSpImmX16
/* 359 */     MCD::OPC_FilterValue, 24, 14, 0, // Skip to: 377
/* 363 */     MCD::OPC_CheckPredicate, 0, 70, 0, // Skip to: 437
/* 367 */     MCD::OPC_CheckField, 27, 5, 30, 64, 0, // Skip to: 437
/* 373 */     MCD::OPC_Decode, 141, 6, 9, // Opcode: SbRxRyOffMemX16
/* 377 */     MCD::OPC_FilterValue, 25, 14, 0, // Skip to: 395
/* 381 */     MCD::OPC_CheckPredicate, 0, 52, 0, // Skip to: 437
/* 385 */     MCD::OPC_CheckField, 27, 5, 30, 46, 0, // Skip to: 437
/* 391 */     MCD::OPC_Decode, 156, 6, 9, // Opcode: ShRxRyOffMemX16
/* 395 */     MCD::OPC_FilterValue, 26, 20, 0, // Skip to: 419
/* 399 */     MCD::OPC_CheckPredicate, 0, 34, 0, // Skip to: 437
/* 403 */     MCD::OPC_CheckField, 27, 5, 30, 28, 0, // Skip to: 437
/* 409 */     MCD::OPC_CheckField, 5, 3, 0, 22, 0, // Skip to: 437
/* 415 */     MCD::OPC_Decode, 176, 6, 0, // Opcode: SwRxSpImmX16
/* 419 */     MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 437
/* 423 */     MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 437
/* 427 */     MCD::OPC_CheckField, 27, 5, 30, 4, 0, // Skip to: 437
/* 433 */     MCD::OPC_Decode, 175, 6, 9, // Opcode: SwRxRyOffMemX16
/* 437 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 5, 3, // Skip to: 780
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 28
/* 14 */      MCD::OPC_CheckPredicate, 1, 56, 21, // Skip to: 5450
/* 18 */      MCD::OPC_CheckField, 21, 5, 0, 50, 21, // Skip to: 5450
/* 24 */      MCD::OPC_Decode, 194, 5, 10, // Opcode: SLL
/* 28 */      MCD::OPC_FilterValue, 1, 39, 0, // Skip to: 71
/* 32 */      MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 35 */      MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 53
/* 39 */      MCD::OPC_CheckPredicate, 1, 31, 21, // Skip to: 5450
/* 43 */      MCD::OPC_CheckField, 6, 5, 0, 25, 21, // Skip to: 5450
/* 49 */      MCD::OPC_Decode, 233, 3, 11, // Opcode: MOVF_I
/* 53 */      MCD::OPC_FilterValue, 1, 17, 21, // Skip to: 5450
/* 57 */      MCD::OPC_CheckPredicate, 1, 13, 21, // Skip to: 5450
/* 61 */      MCD::OPC_CheckField, 6, 5, 0, 7, 21, // Skip to: 5450
/* 67 */      MCD::OPC_Decode, 247, 3, 11, // Opcode: MOVT_I
/* 71 */      MCD::OPC_FilterValue, 2, 27, 0, // Skip to: 102
/* 75 */      MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 78 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 90
/* 82 */      MCD::OPC_CheckPredicate, 1, 244, 20, // Skip to: 5450
/* 86 */      MCD::OPC_Decode, 216, 5, 10, // Opcode: SRL
/* 90 */      MCD::OPC_FilterValue, 1, 236, 20, // Skip to: 5450
/* 94 */      MCD::OPC_CheckPredicate, 2, 232, 20, // Skip to: 5450
/* 98 */      MCD::OPC_Decode, 252, 4, 10, // Opcode: ROTR
/* 102 */     MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 120
/* 106 */     MCD::OPC_CheckPredicate, 1, 220, 20, // Skip to: 5450
/* 110 */     MCD::OPC_CheckField, 21, 5, 0, 214, 20, // Skip to: 5450
/* 116 */     MCD::OPC_Decode, 212, 5, 10, // Opcode: SRA
/* 120 */     MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 138
/* 124 */     MCD::OPC_CheckPredicate, 1, 202, 20, // Skip to: 5450
/* 128 */     MCD::OPC_CheckField, 6, 5, 0, 196, 20, // Skip to: 5450
/* 134 */     MCD::OPC_Decode, 197, 5, 12, // Opcode: SLLV
/* 138 */     MCD::OPC_FilterValue, 6, 27, 0, // Skip to: 169
/* 142 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 145 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 157
/* 149 */     MCD::OPC_CheckPredicate, 1, 177, 20, // Skip to: 5450
/* 153 */     MCD::OPC_Decode, 217, 5, 12, // Opcode: SRLV
/* 157 */     MCD::OPC_FilterValue, 1, 169, 20, // Skip to: 5450
/* 161 */     MCD::OPC_CheckPredicate, 2, 165, 20, // Skip to: 5450
/* 165 */     MCD::OPC_Decode, 253, 4, 12, // Opcode: ROTRV
/* 169 */     MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 187
/* 173 */     MCD::OPC_CheckPredicate, 1, 153, 20, // Skip to: 5450
/* 177 */     MCD::OPC_CheckField, 6, 5, 0, 147, 20, // Skip to: 5450
/* 183 */     MCD::OPC_Decode, 213, 5, 12, // Opcode: SRAV
/* 187 */     MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 205
/* 191 */     MCD::OPC_CheckPredicate, 1, 135, 20, // Skip to: 5450
/* 195 */     MCD::OPC_CheckField, 6, 15, 0, 129, 20, // Skip to: 5450
/* 201 */     MCD::OPC_Decode, 239, 2, 13, // Opcode: JR
/* 205 */     MCD::OPC_FilterValue, 9, 20, 0, // Skip to: 229
/* 209 */     MCD::OPC_CheckPredicate, 1, 117, 20, // Skip to: 5450
/* 213 */     MCD::OPC_CheckField, 16, 5, 0, 111, 20, // Skip to: 5450
/* 219 */     MCD::OPC_CheckField, 6, 5, 0, 105, 20, // Skip to: 5450
/* 225 */     MCD::OPC_Decode, 235, 2, 14, // Opcode: JALR
/* 229 */     MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 247
/* 233 */     MCD::OPC_CheckPredicate, 1, 93, 20, // Skip to: 5450
/* 237 */     MCD::OPC_CheckField, 6, 5, 0, 87, 20, // Skip to: 5450
/* 243 */     MCD::OPC_Decode, 128, 4, 15, // Opcode: MOVZ_I_I
/* 247 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 265
/* 251 */     MCD::OPC_CheckPredicate, 1, 75, 20, // Skip to: 5450
/* 255 */     MCD::OPC_CheckField, 6, 5, 0, 69, 20, // Skip to: 5450
/* 261 */     MCD::OPC_Decode, 242, 3, 15, // Opcode: MOVN_I_I
/* 265 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 277
/* 269 */     MCD::OPC_CheckPredicate, 1, 57, 20, // Skip to: 5450
/* 273 */     MCD::OPC_Decode, 138, 6, 16, // Opcode: SYSCALL
/* 277 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 289
/* 281 */     MCD::OPC_CheckPredicate, 1, 45, 20, // Skip to: 5450
/* 285 */     MCD::OPC_Decode, 147, 1, 17, // Opcode: BREAK
/* 289 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 301
/* 293 */     MCD::OPC_CheckPredicate, 1, 33, 20, // Skip to: 5450
/* 297 */     MCD::OPC_Decode, 137, 6, 18, // Opcode: SYNC
/* 301 */     MCD::OPC_FilterValue, 16, 43, 0, // Skip to: 348
/* 305 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 308 */     MCD::OPC_FilterValue, 0, 18, 20, // Skip to: 5450
/* 312 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 315 */     MCD::OPC_FilterValue, 0, 11, 20, // Skip to: 5450
/* 319 */     MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 322 */     MCD::OPC_FilterValue, 0, 4, 20, // Skip to: 5450
/* 326 */     MCD::OPC_CheckPredicate, 1, 10, 0, // Skip to: 340
/* 330 */     MCD::OPC_CheckField, 21, 2, 0, 4, 0, // Skip to: 340
/* 336 */     MCD::OPC_Decode, 222, 3, 19, // Opcode: MFHI
/* 340 */     MCD::OPC_CheckPredicate, 3, 242, 19, // Skip to: 5450
/* 344 */     MCD::OPC_Decode, 224, 3, 20, // Opcode: MFHI_DSP
/* 348 */     MCD::OPC_FilterValue, 17, 36, 0, // Skip to: 388
/* 352 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 355 */     MCD::OPC_FilterValue, 0, 227, 19, // Skip to: 5450
/* 359 */     MCD::OPC_ExtractField, 13, 8,  // Inst{20-13} ...
/* 362 */     MCD::OPC_FilterValue, 0, 220, 19, // Skip to: 5450
/* 366 */     MCD::OPC_CheckPredicate, 1, 10, 0, // Skip to: 380
/* 370 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 380
/* 376 */     MCD::OPC_Decode, 141, 4, 13, // Opcode: MTHI
/* 380 */     MCD::OPC_CheckPredicate, 3, 202, 19, // Skip to: 5450
/* 384 */     MCD::OPC_Decode, 143, 4, 21, // Opcode: MTHI_DSP
/* 388 */     MCD::OPC_FilterValue, 18, 43, 0, // Skip to: 435
/* 392 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 395 */     MCD::OPC_FilterValue, 0, 187, 19, // Skip to: 5450
/* 399 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 402 */     MCD::OPC_FilterValue, 0, 180, 19, // Skip to: 5450
/* 406 */     MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 409 */     MCD::OPC_FilterValue, 0, 173, 19, // Skip to: 5450
/* 413 */     MCD::OPC_CheckPredicate, 1, 10, 0, // Skip to: 427
/* 417 */     MCD::OPC_CheckField, 21, 2, 0, 4, 0, // Skip to: 427
/* 423 */     MCD::OPC_Decode, 225, 3, 19, // Opcode: MFLO
/* 427 */     MCD::OPC_CheckPredicate, 3, 155, 19, // Skip to: 5450
/* 431 */     MCD::OPC_Decode, 227, 3, 22, // Opcode: MFLO_DSP
/* 435 */     MCD::OPC_FilterValue, 19, 36, 0, // Skip to: 475
/* 439 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 442 */     MCD::OPC_FilterValue, 0, 140, 19, // Skip to: 5450
/* 446 */     MCD::OPC_ExtractField, 13, 8,  // Inst{20-13} ...
/* 449 */     MCD::OPC_FilterValue, 0, 133, 19, // Skip to: 5450
/* 453 */     MCD::OPC_CheckPredicate, 1, 10, 0, // Skip to: 467
/* 457 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 467
/* 463 */     MCD::OPC_Decode, 145, 4, 13, // Opcode: MTLO
/* 467 */     MCD::OPC_CheckPredicate, 3, 115, 19, // Skip to: 5450
/* 471 */     MCD::OPC_Decode, 147, 4, 23, // Opcode: MTLO_DSP
/* 475 */     MCD::OPC_FilterValue, 24, 36, 0, // Skip to: 515
/* 479 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 482 */     MCD::OPC_FilterValue, 0, 100, 19, // Skip to: 5450
/* 486 */     MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 489 */     MCD::OPC_FilterValue, 0, 93, 19, // Skip to: 5450
/* 493 */     MCD::OPC_CheckPredicate, 1, 10, 0, // Skip to: 507
/* 497 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 507
/* 503 */     MCD::OPC_Decode, 159, 4, 24, // Opcode: MULT
/* 507 */     MCD::OPC_CheckPredicate, 3, 75, 19, // Skip to: 5450
/* 511 */     MCD::OPC_Decode, 161, 4, 25, // Opcode: MULT_DSP
/* 515 */     MCD::OPC_FilterValue, 25, 36, 0, // Skip to: 555
/* 519 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 522 */     MCD::OPC_FilterValue, 0, 60, 19, // Skip to: 5450
/* 526 */     MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 529 */     MCD::OPC_FilterValue, 0, 53, 19, // Skip to: 5450
/* 533 */     MCD::OPC_CheckPredicate, 1, 10, 0, // Skip to: 547
/* 537 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 547
/* 543 */     MCD::OPC_Decode, 163, 4, 24, // Opcode: MULTu
/* 547 */     MCD::OPC_CheckPredicate, 3, 35, 19, // Skip to: 5450
/* 551 */     MCD::OPC_Decode, 160, 4, 25, // Opcode: MULTU_DSP
/* 555 */     MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 573
/* 559 */     MCD::OPC_CheckPredicate, 1, 23, 19, // Skip to: 5450
/* 563 */     MCD::OPC_CheckField, 6, 10, 0, 17, 19, // Skip to: 5450
/* 569 */     MCD::OPC_Decode, 151, 5, 24, // Opcode: SDIV
/* 573 */     MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 591
/* 577 */     MCD::OPC_CheckPredicate, 1, 5, 19, // Skip to: 5450
/* 581 */     MCD::OPC_CheckField, 6, 10, 0, 255, 18, // Skip to: 5450
/* 587 */     MCD::OPC_Decode, 187, 6, 24, // Opcode: UDIV
/* 591 */     MCD::OPC_FilterValue, 32, 13, 0, // Skip to: 608
/* 595 */     MCD::OPC_CheckPredicate, 1, 243, 18, // Skip to: 5450
/* 599 */     MCD::OPC_CheckField, 6, 5, 0, 237, 18, // Skip to: 5450
/* 605 */     MCD::OPC_Decode, 20, 26, // Opcode: ADD
/* 608 */     MCD::OPC_FilterValue, 33, 13, 0, // Skip to: 625
/* 612 */     MCD::OPC_CheckPredicate, 1, 226, 18, // Skip to: 5450
/* 616 */     MCD::OPC_CheckField, 6, 5, 0, 220, 18, // Skip to: 5450
/* 622 */     MCD::OPC_Decode, 41, 26, // Opcode: ADDu
/* 625 */     MCD::OPC_FilterValue, 34, 14, 0, // Skip to: 643
/* 629 */     MCD::OPC_CheckPredicate, 1, 209, 18, // Skip to: 5450
/* 633 */     MCD::OPC_CheckField, 6, 5, 0, 203, 18, // Skip to: 5450
/* 639 */     MCD::OPC_Decode, 228, 5, 26, // Opcode: SUB
/* 643 */     MCD::OPC_FilterValue, 35, 14, 0, // Skip to: 661
/* 647 */     MCD::OPC_CheckPredicate, 1, 191, 18, // Skip to: 5450
/* 651 */     MCD::OPC_CheckField, 6, 5, 0, 185, 18, // Skip to: 5450
/* 657 */     MCD::OPC_Decode, 243, 5, 26, // Opcode: SUBu
/* 661 */     MCD::OPC_FilterValue, 36, 13, 0, // Skip to: 678
/* 665 */     MCD::OPC_CheckPredicate, 1, 173, 18, // Skip to: 5450
/* 669 */     MCD::OPC_CheckField, 6, 5, 0, 167, 18, // Skip to: 5450
/* 675 */     MCD::OPC_Decode, 45, 26, // Opcode: AND
/* 678 */     MCD::OPC_FilterValue, 37, 14, 0, // Skip to: 696
/* 682 */     MCD::OPC_CheckPredicate, 1, 156, 18, // Skip to: 5450
/* 686 */     MCD::OPC_CheckField, 6, 5, 0, 150, 18, // Skip to: 5450
/* 692 */     MCD::OPC_Decode, 188, 4, 26, // Opcode: OR
/* 696 */     MCD::OPC_FilterValue, 38, 14, 0, // Skip to: 714
/* 700 */     MCD::OPC_CheckPredicate, 1, 138, 18, // Skip to: 5450
/* 704 */     MCD::OPC_CheckField, 6, 5, 0, 132, 18, // Skip to: 5450
/* 710 */     MCD::OPC_Decode, 190, 6, 26, // Opcode: XOR
/* 714 */     MCD::OPC_FilterValue, 39, 14, 0, // Skip to: 732
/* 718 */     MCD::OPC_CheckPredicate, 1, 120, 18, // Skip to: 5450
/* 722 */     MCD::OPC_CheckField, 6, 5, 0, 114, 18, // Skip to: 5450
/* 728 */     MCD::OPC_Decode, 183, 4, 26, // Opcode: NOR
/* 732 */     MCD::OPC_FilterValue, 42, 14, 0, // Skip to: 750
/* 736 */     MCD::OPC_CheckPredicate, 1, 102, 18, // Skip to: 5450
/* 740 */     MCD::OPC_CheckField, 6, 5, 0, 96, 18, // Skip to: 5450
/* 746 */     MCD::OPC_Decode, 200, 5, 26, // Opcode: SLT
/* 750 */     MCD::OPC_FilterValue, 43, 14, 0, // Skip to: 768
/* 754 */     MCD::OPC_CheckPredicate, 1, 84, 18, // Skip to: 5450
/* 758 */     MCD::OPC_CheckField, 6, 5, 0, 78, 18, // Skip to: 5450
/* 764 */     MCD::OPC_Decode, 209, 5, 26, // Opcode: SLTu
/* 768 */     MCD::OPC_FilterValue, 52, 70, 18, // Skip to: 5450
/* 772 */     MCD::OPC_CheckPredicate, 1, 66, 18, // Skip to: 5450
/* 776 */     MCD::OPC_Decode, 180, 6, 27, // Opcode: TEQ
/* 780 */     MCD::OPC_FilterValue, 1, 69, 0, // Skip to: 853
/* 784 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 787 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 799
/* 791 */     MCD::OPC_CheckPredicate, 1, 47, 18, // Skip to: 5450
/* 795 */     MCD::OPC_Decode, 140, 1, 28, // Opcode: BLTZ
/* 799 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 811
/* 803 */     MCD::OPC_CheckPredicate, 1, 35, 18, // Skip to: 5450
/* 807 */     MCD::OPC_Decode, 132, 1, 28, // Opcode: BGEZ
/* 811 */     MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 823
/* 815 */     MCD::OPC_CheckPredicate, 1, 23, 18, // Skip to: 5450
/* 819 */     MCD::OPC_Decode, 142, 1, 28, // Opcode: BLTZAL
/* 823 */     MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 835
/* 827 */     MCD::OPC_CheckPredicate, 1, 11, 18, // Skip to: 5450
/* 831 */     MCD::OPC_Decode, 134, 1, 28, // Opcode: BGEZAL
/* 835 */     MCD::OPC_FilterValue, 28, 3, 18, // Skip to: 5450
/* 839 */     MCD::OPC_CheckPredicate, 3, 255, 17, // Skip to: 5450
/* 843 */     MCD::OPC_CheckField, 21, 5, 0, 249, 17, // Skip to: 5450
/* 849 */     MCD::OPC_Decode, 145, 1, 29, // Opcode: BPOSGE32
/* 853 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 865
/* 857 */     MCD::OPC_CheckPredicate, 4, 237, 17, // Skip to: 5450
/* 861 */     MCD::OPC_Decode, 233, 2, 30, // Opcode: J
/* 865 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 877
/* 869 */     MCD::OPC_CheckPredicate, 1, 225, 17, // Skip to: 5450
/* 873 */     MCD::OPC_Decode, 234, 2, 30, // Opcode: JAL
/* 877 */     MCD::OPC_FilterValue, 4, 21, 0, // Skip to: 902
/* 881 */     MCD::OPC_CheckPredicate, 4, 9, 0, // Skip to: 894
/* 885 */     MCD::OPC_CheckField, 16, 10, 0, 3, 0, // Skip to: 894
/* 891 */     MCD::OPC_Decode, 125, 29, // Opcode: B
/* 894 */     MCD::OPC_CheckPredicate, 1, 200, 17, // Skip to: 5450
/* 898 */     MCD::OPC_Decode, 130, 1, 31, // Opcode: BEQ
/* 902 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 914
/* 906 */     MCD::OPC_CheckPredicate, 1, 188, 17, // Skip to: 5450
/* 910 */     MCD::OPC_Decode, 143, 1, 31, // Opcode: BNE
/* 914 */     MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 932
/* 918 */     MCD::OPC_CheckPredicate, 1, 176, 17, // Skip to: 5450
/* 922 */     MCD::OPC_CheckField, 16, 5, 0, 170, 17, // Skip to: 5450
/* 928 */     MCD::OPC_Decode, 138, 1, 28, // Opcode: BLEZ
/* 932 */     MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 950
/* 936 */     MCD::OPC_CheckPredicate, 1, 158, 17, // Skip to: 5450
/* 940 */     MCD::OPC_CheckField, 16, 5, 0, 152, 17, // Skip to: 5450
/* 946 */     MCD::OPC_Decode, 135, 1, 28, // Opcode: BGTZ
/* 950 */     MCD::OPC_FilterValue, 8, 7, 0, // Skip to: 961
/* 954 */     MCD::OPC_CheckPredicate, 1, 140, 17, // Skip to: 5450
/* 958 */     MCD::OPC_Decode, 37, 32, // Opcode: ADDi
/* 961 */     MCD::OPC_FilterValue, 9, 7, 0, // Skip to: 972
/* 965 */     MCD::OPC_CheckPredicate, 1, 129, 17, // Skip to: 5450
/* 969 */     MCD::OPC_Decode, 39, 32, // Opcode: ADDiu
/* 972 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 984
/* 976 */     MCD::OPC_CheckPredicate, 1, 118, 17, // Skip to: 5450
/* 980 */     MCD::OPC_Decode, 203, 5, 32, // Opcode: SLTi
/* 984 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 996
/* 988 */     MCD::OPC_CheckPredicate, 1, 106, 17, // Skip to: 5450
/* 992 */     MCD::OPC_Decode, 206, 5, 32, // Opcode: SLTiu
/* 996 */     MCD::OPC_FilterValue, 12, 7, 0, // Skip to: 1007
/* 1000 */    MCD::OPC_CheckPredicate, 1, 94, 17, // Skip to: 5450
/* 1004 */    MCD::OPC_Decode, 48, 33, // Opcode: ANDi
/* 1007 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 1019
/* 1011 */    MCD::OPC_CheckPredicate, 1, 83, 17, // Skip to: 5450
/* 1015 */    MCD::OPC_Decode, 191, 4, 33, // Opcode: ORi
/* 1019 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1031
/* 1023 */    MCD::OPC_CheckPredicate, 1, 71, 17, // Skip to: 5450
/* 1027 */    MCD::OPC_Decode, 193, 6, 33, // Opcode: XORi
/* 1031 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 1049
/* 1035 */    MCD::OPC_CheckPredicate, 1, 59, 17, // Skip to: 5450
/* 1039 */    MCD::OPC_CheckField, 21, 5, 0, 53, 17, // Skip to: 5450
/* 1045 */    MCD::OPC_Decode, 172, 3, 34, // Opcode: LUi
/* 1049 */    MCD::OPC_FilterValue, 16, 70, 0, // Skip to: 1123
/* 1053 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1056 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1074
/* 1060 */    MCD::OPC_CheckPredicate, 1, 34, 17, // Skip to: 5450
/* 1064 */    MCD::OPC_CheckField, 3, 8, 0, 28, 17, // Skip to: 5450
/* 1070 */    MCD::OPC_Decode, 219, 3, 35, // Opcode: MFC0_3OP
/* 1074 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1092
/* 1078 */    MCD::OPC_CheckPredicate, 1, 16, 17, // Skip to: 5450
/* 1082 */    MCD::OPC_CheckField, 3, 8, 0, 10, 17, // Skip to: 5450
/* 1088 */    MCD::OPC_Decode, 138, 4, 36, // Opcode: MTC0_3OP
/* 1092 */    MCD::OPC_FilterValue, 16, 2, 17, // Skip to: 5450
/* 1096 */    MCD::OPC_ExtractField, 0, 21,  // Inst{20-0} ...
/* 1099 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 1111
/* 1103 */    MCD::OPC_CheckPredicate, 1, 247, 16, // Skip to: 5450
/* 1107 */    MCD::OPC_Decode, 184, 2, 2, // Opcode: ERET
/* 1111 */    MCD::OPC_FilterValue, 31, 239, 16, // Skip to: 5450
/* 1115 */    MCD::OPC_CheckPredicate, 1, 235, 16, // Skip to: 5450
/* 1119 */    MCD::OPC_Decode, 134, 2, 2, // Opcode: DERET
/* 1123 */    MCD::OPC_FilterValue, 17, 97, 5, // Skip to: 2504
/* 1127 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1130 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1148
/* 1134 */    MCD::OPC_CheckPredicate, 1, 216, 16, // Skip to: 5450
/* 1138 */    MCD::OPC_CheckField, 0, 11, 0, 210, 16, // Skip to: 5450
/* 1144 */    MCD::OPC_Decode, 220, 3, 37, // Opcode: MFC1
/* 1148 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1166
/* 1152 */    MCD::OPC_CheckPredicate, 1, 198, 16, // Skip to: 5450
/* 1156 */    MCD::OPC_CheckField, 0, 11, 0, 192, 16, // Skip to: 5450
/* 1162 */    MCD::OPC_Decode, 142, 2, 38, // Opcode: DMFC1
/* 1166 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 1184
/* 1170 */    MCD::OPC_CheckPredicate, 1, 180, 16, // Skip to: 5450
/* 1174 */    MCD::OPC_CheckField, 0, 11, 0, 174, 16, // Skip to: 5450
/* 1180 */    MCD::OPC_Decode, 174, 1, 39, // Opcode: CFC1
/* 1184 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1202
/* 1188 */    MCD::OPC_CheckPredicate, 1, 162, 16, // Skip to: 5450
/* 1192 */    MCD::OPC_CheckField, 0, 11, 0, 156, 16, // Skip to: 5450
/* 1198 */    MCD::OPC_Decode, 139, 4, 40, // Opcode: MTC1
/* 1202 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 1220
/* 1206 */    MCD::OPC_CheckPredicate, 1, 144, 16, // Skip to: 5450
/* 1210 */    MCD::OPC_CheckField, 0, 11, 0, 138, 16, // Skip to: 5450
/* 1216 */    MCD::OPC_Decode, 145, 2, 41, // Opcode: DMTC1
/* 1220 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 1238
/* 1224 */    MCD::OPC_CheckPredicate, 1, 126, 16, // Skip to: 5450
/* 1228 */    MCD::OPC_CheckField, 0, 11, 0, 120, 16, // Skip to: 5450
/* 1234 */    MCD::OPC_Decode, 189, 1, 42, // Opcode: CTC1
/* 1238 */    MCD::OPC_FilterValue, 8, 27, 0, // Skip to: 1269
/* 1242 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 1245 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1257
/* 1249 */    MCD::OPC_CheckPredicate, 1, 101, 16, // Skip to: 5450
/* 1253 */    MCD::OPC_Decode, 128, 1, 43, // Opcode: BC1F
/* 1257 */    MCD::OPC_FilterValue, 1, 93, 16, // Skip to: 5450
/* 1261 */    MCD::OPC_CheckPredicate, 1, 89, 16, // Skip to: 5450
/* 1265 */    MCD::OPC_Decode, 129, 1, 43, // Opcode: BC1T
/* 1269 */    MCD::OPC_FilterValue, 16, 80, 2, // Skip to: 1865
/* 1273 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1276 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1288
/* 1280 */    MCD::OPC_CheckPredicate, 1, 70, 16, // Skip to: 5450
/* 1284 */    MCD::OPC_Decode, 204, 2, 44, // Opcode: FADD_S
/* 1288 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1300
/* 1292 */    MCD::OPC_CheckPredicate, 1, 58, 16, // Skip to: 5450
/* 1296 */    MCD::OPC_Decode, 230, 2, 44, // Opcode: FSUB_S
/* 1300 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1312
/* 1304 */    MCD::OPC_CheckPredicate, 1, 46, 16, // Skip to: 5450
/* 1308 */    MCD::OPC_Decode, 221, 2, 44, // Opcode: FMUL_S
/* 1312 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1324
/* 1316 */    MCD::OPC_CheckPredicate, 1, 34, 16, // Skip to: 5450
/* 1320 */    MCD::OPC_Decode, 210, 2, 44, // Opcode: FDIV_S
/* 1324 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1342
/* 1328 */    MCD::OPC_CheckPredicate, 1, 22, 16, // Skip to: 5450
/* 1332 */    MCD::OPC_CheckField, 16, 5, 0, 16, 16, // Skip to: 5450
/* 1338 */    MCD::OPC_Decode, 227, 2, 45, // Opcode: FSQRT_S
/* 1342 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 1360
/* 1346 */    MCD::OPC_CheckPredicate, 4, 4, 16, // Skip to: 5450
/* 1350 */    MCD::OPC_CheckField, 16, 5, 0, 254, 15, // Skip to: 5450
/* 1356 */    MCD::OPC_Decode, 201, 2, 45, // Opcode: FABS_S
/* 1360 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 1378
/* 1364 */    MCD::OPC_CheckPredicate, 1, 242, 15, // Skip to: 5450
/* 1368 */    MCD::OPC_CheckField, 16, 5, 0, 236, 15, // Skip to: 5450
/* 1374 */    MCD::OPC_Decode, 218, 2, 45, // Opcode: FMOV_S
/* 1378 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 1396
/* 1382 */    MCD::OPC_CheckPredicate, 4, 224, 15, // Skip to: 5450
/* 1386 */    MCD::OPC_CheckField, 16, 5, 0, 218, 15, // Skip to: 5450
/* 1392 */    MCD::OPC_Decode, 224, 2, 45, // Opcode: FNEG_S
/* 1396 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 1414
/* 1400 */    MCD::OPC_CheckPredicate, 1, 206, 15, // Skip to: 5450
/* 1404 */    MCD::OPC_CheckField, 16, 5, 0, 200, 15, // Skip to: 5450
/* 1410 */    MCD::OPC_Decode, 132, 5, 45, // Opcode: ROUND_W_S
/* 1414 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 1432
/* 1418 */    MCD::OPC_CheckPredicate, 1, 188, 15, // Skip to: 5450
/* 1422 */    MCD::OPC_CheckField, 16, 5, 0, 182, 15, // Skip to: 5450
/* 1428 */    MCD::OPC_Decode, 186, 6, 45, // Opcode: TRUNC_W_S
/* 1432 */    MCD::OPC_FilterValue, 14, 14, 0, // Skip to: 1450
/* 1436 */    MCD::OPC_CheckPredicate, 1, 170, 15, // Skip to: 5450
/* 1440 */    MCD::OPC_CheckField, 16, 5, 0, 164, 15, // Skip to: 5450
/* 1446 */    MCD::OPC_Decode, 173, 1, 45, // Opcode: CEIL_W_S
/* 1450 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 1468
/* 1454 */    MCD::OPC_CheckPredicate, 1, 152, 15, // Skip to: 5450
/* 1458 */    MCD::OPC_CheckField, 16, 5, 0, 146, 15, // Skip to: 5450
/* 1464 */    MCD::OPC_Decode, 215, 2, 45, // Opcode: FLOOR_W_S
/* 1468 */    MCD::OPC_FilterValue, 17, 27, 0, // Skip to: 1499
/* 1472 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 1475 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1487
/* 1479 */    MCD::OPC_CheckPredicate, 1, 127, 15, // Skip to: 5450
/* 1483 */    MCD::OPC_Decode, 235, 3, 46, // Opcode: MOVF_S
/* 1487 */    MCD::OPC_FilterValue, 1, 119, 15, // Skip to: 5450
/* 1491 */    MCD::OPC_CheckPredicate, 1, 115, 15, // Skip to: 5450
/* 1495 */    MCD::OPC_Decode, 249, 3, 46, // Opcode: MOVT_S
/* 1499 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 1511
/* 1503 */    MCD::OPC_CheckPredicate, 1, 103, 15, // Skip to: 5450
/* 1507 */    MCD::OPC_Decode, 130, 4, 47, // Opcode: MOVZ_I_S
/* 1511 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 1523
/* 1515 */    MCD::OPC_CheckPredicate, 1, 91, 15, // Skip to: 5450
/* 1519 */    MCD::OPC_Decode, 244, 3, 47, // Opcode: MOVN_I_S
/* 1523 */    MCD::OPC_FilterValue, 33, 14, 0, // Skip to: 1541
/* 1527 */    MCD::OPC_CheckPredicate, 5, 79, 15, // Skip to: 5450
/* 1531 */    MCD::OPC_CheckField, 16, 5, 0, 73, 15, // Skip to: 5450
/* 1537 */    MCD::OPC_Decode, 190, 1, 48, // Opcode: CVT_D32_S
/* 1541 */    MCD::OPC_FilterValue, 36, 14, 0, // Skip to: 1559
/* 1545 */    MCD::OPC_CheckPredicate, 1, 61, 15, // Skip to: 5450
/* 1549 */    MCD::OPC_CheckField, 16, 5, 0, 55, 15, // Skip to: 5450
/* 1555 */    MCD::OPC_Decode, 203, 1, 45, // Opcode: CVT_W_S
/* 1559 */    MCD::OPC_FilterValue, 37, 14, 0, // Skip to: 1577
/* 1563 */    MCD::OPC_CheckPredicate, 1, 43, 15, // Skip to: 5450
/* 1567 */    MCD::OPC_CheckField, 16, 5, 0, 37, 15, // Skip to: 5450
/* 1573 */    MCD::OPC_Decode, 196, 1, 49, // Opcode: CVT_L_S
/* 1577 */    MCD::OPC_FilterValue, 48, 14, 0, // Skip to: 1595
/* 1581 */    MCD::OPC_CheckPredicate, 1, 25, 15, // Skip to: 5450
/* 1585 */    MCD::OPC_CheckField, 6, 5, 0, 19, 15, // Skip to: 5450
/* 1591 */    MCD::OPC_Decode, 209, 1, 50, // Opcode: C_F_S
/* 1595 */    MCD::OPC_FilterValue, 49, 14, 0, // Skip to: 1613
/* 1599 */    MCD::OPC_CheckPredicate, 1, 7, 15, // Skip to: 5450
/* 1603 */    MCD::OPC_CheckField, 6, 5, 0, 1, 15, // Skip to: 5450
/* 1609 */    MCD::OPC_Decode, 251, 1, 50, // Opcode: C_UN_S
/* 1613 */    MCD::OPC_FilterValue, 50, 14, 0, // Skip to: 1631
/* 1617 */    MCD::OPC_CheckPredicate, 1, 245, 14, // Skip to: 5450
/* 1621 */    MCD::OPC_CheckField, 6, 5, 0, 239, 14, // Skip to: 5450
/* 1627 */    MCD::OPC_Decode, 206, 1, 50, // Opcode: C_EQ_S
/* 1631 */    MCD::OPC_FilterValue, 51, 14, 0, // Skip to: 1649
/* 1635 */    MCD::OPC_CheckPredicate, 1, 227, 14, // Skip to: 5450
/* 1639 */    MCD::OPC_CheckField, 6, 5, 0, 221, 14, // Skip to: 5450
/* 1645 */    MCD::OPC_Decode, 242, 1, 50, // Opcode: C_UEQ_S
/* 1649 */    MCD::OPC_FilterValue, 52, 14, 0, // Skip to: 1667
/* 1653 */    MCD::OPC_CheckPredicate, 1, 209, 14, // Skip to: 5450
/* 1657 */    MCD::OPC_CheckField, 6, 5, 0, 203, 14, // Skip to: 5450
/* 1663 */    MCD::OPC_Decode, 233, 1, 50, // Opcode: C_OLT_S
/* 1667 */    MCD::OPC_FilterValue, 53, 14, 0, // Skip to: 1685
/* 1671 */    MCD::OPC_CheckPredicate, 1, 191, 14, // Skip to: 5450
/* 1675 */    MCD::OPC_CheckField, 6, 5, 0, 185, 14, // Skip to: 5450
/* 1681 */    MCD::OPC_Decode, 248, 1, 50, // Opcode: C_ULT_S
/* 1685 */    MCD::OPC_FilterValue, 54, 14, 0, // Skip to: 1703
/* 1689 */    MCD::OPC_CheckPredicate, 1, 173, 14, // Skip to: 5450
/* 1693 */    MCD::OPC_CheckField, 6, 5, 0, 167, 14, // Skip to: 5450
/* 1699 */    MCD::OPC_Decode, 230, 1, 50, // Opcode: C_OLE_S
/* 1703 */    MCD::OPC_FilterValue, 55, 14, 0, // Skip to: 1721
/* 1707 */    MCD::OPC_CheckPredicate, 1, 155, 14, // Skip to: 5450
/* 1711 */    MCD::OPC_CheckField, 6, 5, 0, 149, 14, // Skip to: 5450
/* 1717 */    MCD::OPC_Decode, 245, 1, 50, // Opcode: C_ULE_S
/* 1721 */    MCD::OPC_FilterValue, 56, 14, 0, // Skip to: 1739
/* 1725 */    MCD::OPC_CheckPredicate, 1, 137, 14, // Skip to: 5450
/* 1729 */    MCD::OPC_CheckField, 6, 5, 0, 131, 14, // Skip to: 5450
/* 1735 */    MCD::OPC_Decode, 239, 1, 50, // Opcode: C_SF_S
/* 1739 */    MCD::OPC_FilterValue, 57, 14, 0, // Skip to: 1757
/* 1743 */    MCD::OPC_CheckPredicate, 1, 119, 14, // Skip to: 5450
/* 1747 */    MCD::OPC_CheckField, 6, 5, 0, 113, 14, // Skip to: 5450
/* 1753 */    MCD::OPC_Decode, 221, 1, 50, // Opcode: C_NGLE_S
/* 1757 */    MCD::OPC_FilterValue, 58, 14, 0, // Skip to: 1775
/* 1761 */    MCD::OPC_CheckPredicate, 1, 101, 14, // Skip to: 5450
/* 1765 */    MCD::OPC_CheckField, 6, 5, 0, 95, 14, // Skip to: 5450
/* 1771 */    MCD::OPC_Decode, 236, 1, 50, // Opcode: C_SEQ_S
/* 1775 */    MCD::OPC_FilterValue, 59, 14, 0, // Skip to: 1793
/* 1779 */    MCD::OPC_CheckPredicate, 1, 83, 14, // Skip to: 5450
/* 1783 */    MCD::OPC_CheckField, 6, 5, 0, 77, 14, // Skip to: 5450
/* 1789 */    MCD::OPC_Decode, 224, 1, 50, // Opcode: C_NGL_S
/* 1793 */    MCD::OPC_FilterValue, 60, 14, 0, // Skip to: 1811
/* 1797 */    MCD::OPC_CheckPredicate, 1, 65, 14, // Skip to: 5450
/* 1801 */    MCD::OPC_CheckField, 6, 5, 0, 59, 14, // Skip to: 5450
/* 1807 */    MCD::OPC_Decode, 215, 1, 50, // Opcode: C_LT_S
/* 1811 */    MCD::OPC_FilterValue, 61, 14, 0, // Skip to: 1829
/* 1815 */    MCD::OPC_CheckPredicate, 1, 47, 14, // Skip to: 5450
/* 1819 */    MCD::OPC_CheckField, 6, 5, 0, 41, 14, // Skip to: 5450
/* 1825 */    MCD::OPC_Decode, 218, 1, 50, // Opcode: C_NGE_S
/* 1829 */    MCD::OPC_FilterValue, 62, 14, 0, // Skip to: 1847
/* 1833 */    MCD::OPC_CheckPredicate, 1, 29, 14, // Skip to: 5450
/* 1837 */    MCD::OPC_CheckField, 6, 5, 0, 23, 14, // Skip to: 5450
/* 1843 */    MCD::OPC_Decode, 212, 1, 50, // Opcode: C_LE_S
/* 1847 */    MCD::OPC_FilterValue, 63, 15, 14, // Skip to: 5450
/* 1851 */    MCD::OPC_CheckPredicate, 1, 11, 14, // Skip to: 5450
/* 1855 */    MCD::OPC_CheckField, 6, 5, 0, 5, 14, // Skip to: 5450
/* 1861 */    MCD::OPC_Decode, 227, 1, 50, // Opcode: C_NGT_S
/* 1865 */    MCD::OPC_FilterValue, 17, 80, 2, // Skip to: 2461
/* 1869 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1872 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1884
/* 1876 */    MCD::OPC_CheckPredicate, 5, 242, 13, // Skip to: 5450
/* 1880 */    MCD::OPC_Decode, 202, 2, 51, // Opcode: FADD_D32
/* 1884 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1896
/* 1888 */    MCD::OPC_CheckPredicate, 5, 230, 13, // Skip to: 5450
/* 1892 */    MCD::OPC_Decode, 228, 2, 51, // Opcode: FSUB_D32
/* 1896 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1908
/* 1900 */    MCD::OPC_CheckPredicate, 5, 218, 13, // Skip to: 5450
/* 1904 */    MCD::OPC_Decode, 219, 2, 51, // Opcode: FMUL_D32
/* 1908 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1920
/* 1912 */    MCD::OPC_CheckPredicate, 5, 206, 13, // Skip to: 5450
/* 1916 */    MCD::OPC_Decode, 208, 2, 51, // Opcode: FDIV_D32
/* 1920 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1938
/* 1924 */    MCD::OPC_CheckPredicate, 5, 194, 13, // Skip to: 5450
/* 1928 */    MCD::OPC_CheckField, 16, 5, 0, 188, 13, // Skip to: 5450
/* 1934 */    MCD::OPC_Decode, 225, 2, 52, // Opcode: FSQRT_D32
/* 1938 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 1956
/* 1942 */    MCD::OPC_CheckPredicate, 4, 176, 13, // Skip to: 5450
/* 1946 */    MCD::OPC_CheckField, 16, 5, 0, 170, 13, // Skip to: 5450
/* 1952 */    MCD::OPC_Decode, 199, 2, 52, // Opcode: FABS_D32
/* 1956 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 1974
/* 1960 */    MCD::OPC_CheckPredicate, 5, 158, 13, // Skip to: 5450
/* 1964 */    MCD::OPC_CheckField, 16, 5, 0, 152, 13, // Skip to: 5450
/* 1970 */    MCD::OPC_Decode, 216, 2, 52, // Opcode: FMOV_D32
/* 1974 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 1992
/* 1978 */    MCD::OPC_CheckPredicate, 4, 140, 13, // Skip to: 5450
/* 1982 */    MCD::OPC_CheckField, 16, 5, 0, 134, 13, // Skip to: 5450
/* 1988 */    MCD::OPC_Decode, 222, 2, 52, // Opcode: FNEG_D32
/* 1992 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 2010
/* 1996 */    MCD::OPC_CheckPredicate, 5, 122, 13, // Skip to: 5450
/* 2000 */    MCD::OPC_CheckField, 16, 5, 0, 116, 13, // Skip to: 5450
/* 2006 */    MCD::OPC_Decode, 130, 5, 53, // Opcode: ROUND_W_D32
/* 2010 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 2028
/* 2014 */    MCD::OPC_CheckPredicate, 5, 104, 13, // Skip to: 5450
/* 2018 */    MCD::OPC_CheckField, 16, 5, 0, 98, 13, // Skip to: 5450
/* 2024 */    MCD::OPC_Decode, 184, 6, 53, // Opcode: TRUNC_W_D32
/* 2028 */    MCD::OPC_FilterValue, 14, 14, 0, // Skip to: 2046
/* 2032 */    MCD::OPC_CheckPredicate, 5, 86, 13, // Skip to: 5450
/* 2036 */    MCD::OPC_CheckField, 16, 5, 0, 80, 13, // Skip to: 5450
/* 2042 */    MCD::OPC_Decode, 171, 1, 53, // Opcode: CEIL_W_D32
/* 2046 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 2064
/* 2050 */    MCD::OPC_CheckPredicate, 5, 68, 13, // Skip to: 5450
/* 2054 */    MCD::OPC_CheckField, 16, 5, 0, 62, 13, // Skip to: 5450
/* 2060 */    MCD::OPC_Decode, 213, 2, 53, // Opcode: FLOOR_W_D32
/* 2064 */    MCD::OPC_FilterValue, 17, 27, 0, // Skip to: 2095
/* 2068 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 2071 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2083
/* 2075 */    MCD::OPC_CheckPredicate, 5, 43, 13, // Skip to: 5450
/* 2079 */    MCD::OPC_Decode, 231, 3, 54, // Opcode: MOVF_D32
/* 2083 */    MCD::OPC_FilterValue, 1, 35, 13, // Skip to: 5450
/* 2087 */    MCD::OPC_CheckPredicate, 5, 31, 13, // Skip to: 5450
/* 2091 */    MCD::OPC_Decode, 245, 3, 54, // Opcode: MOVT_D32
/* 2095 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 2107
/* 2099 */    MCD::OPC_CheckPredicate, 5, 19, 13, // Skip to: 5450
/* 2103 */    MCD::OPC_Decode, 254, 3, 55, // Opcode: MOVZ_I_D32
/* 2107 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 2119
/* 2111 */    MCD::OPC_CheckPredicate, 5, 7, 13, // Skip to: 5450
/* 2115 */    MCD::OPC_Decode, 240, 3, 55, // Opcode: MOVN_I_D32
/* 2119 */    MCD::OPC_FilterValue, 32, 14, 0, // Skip to: 2137
/* 2123 */    MCD::OPC_CheckPredicate, 5, 251, 12, // Skip to: 5450
/* 2127 */    MCD::OPC_CheckField, 16, 5, 0, 245, 12, // Skip to: 5450
/* 2133 */    MCD::OPC_Decode, 197, 1, 53, // Opcode: CVT_S_D32
/* 2137 */    MCD::OPC_FilterValue, 36, 14, 0, // Skip to: 2155
/* 2141 */    MCD::OPC_CheckPredicate, 5, 233, 12, // Skip to: 5450
/* 2145 */    MCD::OPC_CheckField, 16, 5, 0, 227, 12, // Skip to: 5450
/* 2151 */    MCD::OPC_Decode, 201, 1, 53, // Opcode: CVT_W_D32
/* 2155 */    MCD::OPC_FilterValue, 37, 14, 0, // Skip to: 2173
/* 2159 */    MCD::OPC_CheckPredicate, 1, 215, 12, // Skip to: 5450
/* 2163 */    MCD::OPC_CheckField, 16, 5, 0, 209, 12, // Skip to: 5450
/* 2169 */    MCD::OPC_Decode, 195, 1, 56, // Opcode: CVT_L_D64
/* 2173 */    MCD::OPC_FilterValue, 48, 14, 0, // Skip to: 2191
/* 2177 */    MCD::OPC_CheckPredicate, 5, 197, 12, // Skip to: 5450
/* 2181 */    MCD::OPC_CheckField, 6, 5, 0, 191, 12, // Skip to: 5450
/* 2187 */    MCD::OPC_Decode, 207, 1, 57, // Opcode: C_F_D32
/* 2191 */    MCD::OPC_FilterValue, 49, 14, 0, // Skip to: 2209
/* 2195 */    MCD::OPC_CheckPredicate, 5, 179, 12, // Skip to: 5450
/* 2199 */    MCD::OPC_CheckField, 6, 5, 0, 173, 12, // Skip to: 5450
/* 2205 */    MCD::OPC_Decode, 249, 1, 57, // Opcode: C_UN_D32
/* 2209 */    MCD::OPC_FilterValue, 50, 14, 0, // Skip to: 2227
/* 2213 */    MCD::OPC_CheckPredicate, 5, 161, 12, // Skip to: 5450
/* 2217 */    MCD::OPC_CheckField, 6, 5, 0, 155, 12, // Skip to: 5450
/* 2223 */    MCD::OPC_Decode, 204, 1, 57, // Opcode: C_EQ_D32
/* 2227 */    MCD::OPC_FilterValue, 51, 14, 0, // Skip to: 2245
/* 2231 */    MCD::OPC_CheckPredicate, 5, 143, 12, // Skip to: 5450
/* 2235 */    MCD::OPC_CheckField, 6, 5, 0, 137, 12, // Skip to: 5450
/* 2241 */    MCD::OPC_Decode, 240, 1, 57, // Opcode: C_UEQ_D32
/* 2245 */    MCD::OPC_FilterValue, 52, 14, 0, // Skip to: 2263
/* 2249 */    MCD::OPC_CheckPredicate, 5, 125, 12, // Skip to: 5450
/* 2253 */    MCD::OPC_CheckField, 6, 5, 0, 119, 12, // Skip to: 5450
/* 2259 */    MCD::OPC_Decode, 231, 1, 57, // Opcode: C_OLT_D32
/* 2263 */    MCD::OPC_FilterValue, 53, 14, 0, // Skip to: 2281
/* 2267 */    MCD::OPC_CheckPredicate, 5, 107, 12, // Skip to: 5450
/* 2271 */    MCD::OPC_CheckField, 6, 5, 0, 101, 12, // Skip to: 5450
/* 2277 */    MCD::OPC_Decode, 246, 1, 57, // Opcode: C_ULT_D32
/* 2281 */    MCD::OPC_FilterValue, 54, 14, 0, // Skip to: 2299
/* 2285 */    MCD::OPC_CheckPredicate, 5, 89, 12, // Skip to: 5450
/* 2289 */    MCD::OPC_CheckField, 6, 5, 0, 83, 12, // Skip to: 5450
/* 2295 */    MCD::OPC_Decode, 228, 1, 57, // Opcode: C_OLE_D32
/* 2299 */    MCD::OPC_FilterValue, 55, 14, 0, // Skip to: 2317
/* 2303 */    MCD::OPC_CheckPredicate, 5, 71, 12, // Skip to: 5450
/* 2307 */    MCD::OPC_CheckField, 6, 5, 0, 65, 12, // Skip to: 5450
/* 2313 */    MCD::OPC_Decode, 243, 1, 57, // Opcode: C_ULE_D32
/* 2317 */    MCD::OPC_FilterValue, 56, 14, 0, // Skip to: 2335
/* 2321 */    MCD::OPC_CheckPredicate, 5, 53, 12, // Skip to: 5450
/* 2325 */    MCD::OPC_CheckField, 6, 5, 0, 47, 12, // Skip to: 5450
/* 2331 */    MCD::OPC_Decode, 237, 1, 57, // Opcode: C_SF_D32
/* 2335 */    MCD::OPC_FilterValue, 57, 14, 0, // Skip to: 2353
/* 2339 */    MCD::OPC_CheckPredicate, 5, 35, 12, // Skip to: 5450
/* 2343 */    MCD::OPC_CheckField, 6, 5, 0, 29, 12, // Skip to: 5450
/* 2349 */    MCD::OPC_Decode, 219, 1, 57, // Opcode: C_NGLE_D32
/* 2353 */    MCD::OPC_FilterValue, 58, 14, 0, // Skip to: 2371
/* 2357 */    MCD::OPC_CheckPredicate, 5, 17, 12, // Skip to: 5450
/* 2361 */    MCD::OPC_CheckField, 6, 5, 0, 11, 12, // Skip to: 5450
/* 2367 */    MCD::OPC_Decode, 234, 1, 57, // Opcode: C_SEQ_D32
/* 2371 */    MCD::OPC_FilterValue, 59, 14, 0, // Skip to: 2389
/* 2375 */    MCD::OPC_CheckPredicate, 5, 255, 11, // Skip to: 5450
/* 2379 */    MCD::OPC_CheckField, 6, 5, 0, 249, 11, // Skip to: 5450
/* 2385 */    MCD::OPC_Decode, 222, 1, 57, // Opcode: C_NGL_D32
/* 2389 */    MCD::OPC_FilterValue, 60, 14, 0, // Skip to: 2407
/* 2393 */    MCD::OPC_CheckPredicate, 5, 237, 11, // Skip to: 5450
/* 2397 */    MCD::OPC_CheckField, 6, 5, 0, 231, 11, // Skip to: 5450
/* 2403 */    MCD::OPC_Decode, 213, 1, 57, // Opcode: C_LT_D32
/* 2407 */    MCD::OPC_FilterValue, 61, 14, 0, // Skip to: 2425
/* 2411 */    MCD::OPC_CheckPredicate, 5, 219, 11, // Skip to: 5450
/* 2415 */    MCD::OPC_CheckField, 6, 5, 0, 213, 11, // Skip to: 5450
/* 2421 */    MCD::OPC_Decode, 216, 1, 57, // Opcode: C_NGE_D32
/* 2425 */    MCD::OPC_FilterValue, 62, 14, 0, // Skip to: 2443
/* 2429 */    MCD::OPC_CheckPredicate, 5, 201, 11, // Skip to: 5450
/* 2433 */    MCD::OPC_CheckField, 6, 5, 0, 195, 11, // Skip to: 5450
/* 2439 */    MCD::OPC_Decode, 210, 1, 57, // Opcode: C_LE_D32
/* 2443 */    MCD::OPC_FilterValue, 63, 187, 11, // Skip to: 5450
/* 2447 */    MCD::OPC_CheckPredicate, 5, 183, 11, // Skip to: 5450
/* 2451 */    MCD::OPC_CheckField, 6, 5, 0, 177, 11, // Skip to: 5450
/* 2457 */    MCD::OPC_Decode, 225, 1, 57, // Opcode: C_NGT_D32
/* 2461 */    MCD::OPC_FilterValue, 20, 169, 11, // Skip to: 5450
/* 2465 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 2468 */    MCD::OPC_FilterValue, 32, 14, 0, // Skip to: 2486
/* 2472 */    MCD::OPC_CheckPredicate, 1, 158, 11, // Skip to: 5450
/* 2476 */    MCD::OPC_CheckField, 16, 5, 0, 152, 11, // Skip to: 5450
/* 2482 */    MCD::OPC_Decode, 200, 1, 45, // Opcode: CVT_S_W
/* 2486 */    MCD::OPC_FilterValue, 33, 144, 11, // Skip to: 5450
/* 2490 */    MCD::OPC_CheckPredicate, 5, 140, 11, // Skip to: 5450
/* 2494 */    MCD::OPC_CheckField, 16, 5, 0, 134, 11, // Skip to: 5450
/* 2500 */    MCD::OPC_Decode, 191, 1, 48, // Opcode: CVT_D32_W
/* 2504 */    MCD::OPC_FilterValue, 18, 39, 0, // Skip to: 2547
/* 2508 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 2511 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 2529
/* 2515 */    MCD::OPC_CheckPredicate, 1, 115, 11, // Skip to: 5450
/* 2519 */    MCD::OPC_CheckField, 3, 8, 0, 109, 11, // Skip to: 5450
/* 2525 */    MCD::OPC_Decode, 221, 3, 35, // Opcode: MFC2_3OP
/* 2529 */    MCD::OPC_FilterValue, 4, 101, 11, // Skip to: 5450
/* 2533 */    MCD::OPC_CheckPredicate, 1, 97, 11, // Skip to: 5450
/* 2537 */    MCD::OPC_CheckField, 3, 8, 0, 91, 11, // Skip to: 5450
/* 2543 */    MCD::OPC_Decode, 140, 4, 36, // Opcode: MTC2_3OP
/* 2547 */    MCD::OPC_FilterValue, 19, 207, 0, // Skip to: 2758
/* 2551 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 2554 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 2572
/* 2558 */    MCD::OPC_CheckPredicate, 6, 72, 11, // Skip to: 5450
/* 2562 */    MCD::OPC_CheckField, 11, 5, 0, 66, 11, // Skip to: 5450
/* 2568 */    MCD::OPC_Decode, 189, 3, 58, // Opcode: LWXC1
/* 2572 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 2590
/* 2576 */    MCD::OPC_CheckPredicate, 7, 54, 11, // Skip to: 5450
/* 2580 */    MCD::OPC_CheckField, 11, 5, 0, 48, 11, // Skip to: 5450
/* 2586 */    MCD::OPC_Decode, 139, 3, 59, // Opcode: LDXC1
/* 2590 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 2608
/* 2594 */    MCD::OPC_CheckPredicate, 8, 36, 11, // Skip to: 5450
/* 2598 */    MCD::OPC_CheckField, 11, 5, 0, 30, 11, // Skip to: 5450
/* 2604 */    MCD::OPC_Decode, 170, 3, 59, // Opcode: LUXC1
/* 2608 */    MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 2626
/* 2612 */    MCD::OPC_CheckPredicate, 6, 18, 11, // Skip to: 5450
/* 2616 */    MCD::OPC_CheckField, 6, 5, 0, 12, 11, // Skip to: 5450
/* 2622 */    MCD::OPC_Decode, 132, 6, 60, // Opcode: SWXC1
/* 2626 */    MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 2644
/* 2630 */    MCD::OPC_CheckPredicate, 7, 0, 11, // Skip to: 5450
/* 2634 */    MCD::OPC_CheckField, 6, 5, 0, 250, 10, // Skip to: 5450
/* 2640 */    MCD::OPC_Decode, 156, 5, 61, // Opcode: SDXC1
/* 2644 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 2662
/* 2648 */    MCD::OPC_CheckPredicate, 8, 238, 10, // Skip to: 5450
/* 2652 */    MCD::OPC_CheckField, 6, 5, 0, 232, 10, // Skip to: 5450
/* 2658 */    MCD::OPC_Decode, 245, 5, 61, // Opcode: SUXC1
/* 2662 */    MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 2674
/* 2666 */    MCD::OPC_CheckPredicate, 2, 220, 10, // Skip to: 5450
/* 2670 */    MCD::OPC_Decode, 214, 3, 62, // Opcode: MADD_S
/* 2674 */    MCD::OPC_FilterValue, 33, 8, 0, // Skip to: 2686
/* 2678 */    MCD::OPC_CheckPredicate, 9, 208, 10, // Skip to: 5450
/* 2682 */    MCD::OPC_Decode, 211, 3, 63, // Opcode: MADD_D32
/* 2686 */    MCD::OPC_FilterValue, 40, 8, 0, // Skip to: 2698
/* 2690 */    MCD::OPC_CheckPredicate, 2, 196, 10, // Skip to: 5450
/* 2694 */    MCD::OPC_Decode, 137, 4, 62, // Opcode: MSUB_S
/* 2698 */    MCD::OPC_FilterValue, 41, 8, 0, // Skip to: 2710
/* 2702 */    MCD::OPC_CheckPredicate, 9, 184, 10, // Skip to: 5450
/* 2706 */    MCD::OPC_Decode, 134, 4, 63, // Opcode: MSUB_D32
/* 2710 */    MCD::OPC_FilterValue, 48, 8, 0, // Skip to: 2722
/* 2714 */    MCD::OPC_CheckPredicate, 10, 172, 10, // Skip to: 5450
/* 2718 */    MCD::OPC_Decode, 178, 4, 62, // Opcode: NMADD_S
/* 2722 */    MCD::OPC_FilterValue, 49, 8, 0, // Skip to: 2734
/* 2726 */    MCD::OPC_CheckPredicate, 11, 160, 10, // Skip to: 5450
/* 2730 */    MCD::OPC_Decode, 176, 4, 63, // Opcode: NMADD_D32
/* 2734 */    MCD::OPC_FilterValue, 56, 8, 0, // Skip to: 2746
/* 2738 */    MCD::OPC_CheckPredicate, 10, 148, 10, // Skip to: 5450
/* 2742 */    MCD::OPC_Decode, 181, 4, 62, // Opcode: NMSUB_S
/* 2746 */    MCD::OPC_FilterValue, 57, 140, 10, // Skip to: 5450
/* 2750 */    MCD::OPC_CheckPredicate, 11, 136, 10, // Skip to: 5450
/* 2754 */    MCD::OPC_Decode, 179, 4, 63, // Opcode: NMSUB_D32
/* 2758 */    MCD::OPC_FilterValue, 28, 171, 0, // Skip to: 2933
/* 2762 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 2765 */    MCD::OPC_FilterValue, 0, 29, 0, // Skip to: 2798
/* 2769 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2772 */    MCD::OPC_FilterValue, 0, 114, 10, // Skip to: 5450
/* 2776 */    MCD::OPC_CheckPredicate, 1, 10, 0, // Skip to: 2790
/* 2780 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2790
/* 2786 */    MCD::OPC_Decode, 208, 3, 24, // Opcode: MADD
/* 2790 */    MCD::OPC_CheckPredicate, 3, 96, 10, // Skip to: 5450
/* 2794 */    MCD::OPC_Decode, 213, 3, 64, // Opcode: MADD_DSP
/* 2798 */    MCD::OPC_FilterValue, 1, 29, 0, // Skip to: 2831
/* 2802 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2805 */    MCD::OPC_FilterValue, 0, 81, 10, // Skip to: 5450
/* 2809 */    MCD::OPC_CheckPredicate, 1, 10, 0, // Skip to: 2823
/* 2813 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2823
/* 2819 */    MCD::OPC_Decode, 209, 3, 24, // Opcode: MADDU
/* 2823 */    MCD::OPC_CheckPredicate, 3, 63, 10, // Skip to: 5450
/* 2827 */    MCD::OPC_Decode, 210, 3, 64, // Opcode: MADDU_DSP
/* 2831 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2843
/* 2835 */    MCD::OPC_CheckPredicate, 1, 51, 10, // Skip to: 5450
/* 2839 */    MCD::OPC_Decode, 148, 4, 26, // Opcode: MUL
/* 2843 */    MCD::OPC_FilterValue, 4, 29, 0, // Skip to: 2876
/* 2847 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2850 */    MCD::OPC_FilterValue, 0, 36, 10, // Skip to: 5450
/* 2854 */    MCD::OPC_CheckPredicate, 1, 10, 0, // Skip to: 2868
/* 2858 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2868
/* 2864 */    MCD::OPC_Decode, 131, 4, 24, // Opcode: MSUB
/* 2868 */    MCD::OPC_CheckPredicate, 3, 18, 10, // Skip to: 5450
/* 2872 */    MCD::OPC_Decode, 136, 4, 64, // Opcode: MSUB_DSP
/* 2876 */    MCD::OPC_FilterValue, 5, 29, 0, // Skip to: 2909
/* 2880 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2883 */    MCD::OPC_FilterValue, 0, 3, 10, // Skip to: 5450
/* 2887 */    MCD::OPC_CheckPredicate, 1, 10, 0, // Skip to: 2901
/* 2891 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2901
/* 2897 */    MCD::OPC_Decode, 132, 4, 24, // Opcode: MSUBU
/* 2901 */    MCD::OPC_CheckPredicate, 3, 241, 9, // Skip to: 5450
/* 2905 */    MCD::OPC_Decode, 133, 4, 64, // Opcode: MSUBU_DSP
/* 2909 */    MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 2921
/* 2913 */    MCD::OPC_CheckPredicate, 12, 229, 9, // Skip to: 5450
/* 2917 */    MCD::OPC_Decode, 176, 1, 65, // Opcode: CLZ
/* 2921 */    MCD::OPC_FilterValue, 33, 221, 9, // Skip to: 5450
/* 2925 */    MCD::OPC_CheckPredicate, 12, 217, 9, // Skip to: 5450
/* 2929 */    MCD::OPC_Decode, 175, 1, 65, // Opcode: CLO
/* 2933 */    MCD::OPC_FilterValue, 31, 249, 8, // Skip to: 5234
/* 2937 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 2940 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2952
/* 2944 */    MCD::OPC_CheckPredicate, 2, 198, 9, // Skip to: 5450
/* 2948 */    MCD::OPC_Decode, 185, 2, 66, // Opcode: EXT
/* 2952 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 2964
/* 2956 */    MCD::OPC_CheckPredicate, 2, 186, 9, // Skip to: 5450
/* 2960 */    MCD::OPC_Decode, 231, 2, 67, // Opcode: INS
/* 2964 */    MCD::OPC_FilterValue, 10, 39, 0, // Skip to: 3007
/* 2968 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2971 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2983
/* 2975 */    MCD::OPC_CheckPredicate, 3, 167, 9, // Skip to: 5450
/* 2979 */    MCD::OPC_Decode, 188, 3, 26, // Opcode: LWX
/* 2983 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 2995
/* 2987 */    MCD::OPC_CheckPredicate, 3, 155, 9, // Skip to: 5450
/* 2991 */    MCD::OPC_Decode, 148, 3, 26, // Opcode: LHX
/* 2995 */    MCD::OPC_FilterValue, 6, 147, 9, // Skip to: 5450
/* 2999 */    MCD::OPC_CheckPredicate, 3, 143, 9, // Skip to: 5450
/* 3003 */    MCD::OPC_Decode, 249, 2, 26, // Opcode: LBUX
/* 3007 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 3025
/* 3011 */    MCD::OPC_CheckPredicate, 3, 131, 9, // Skip to: 5450
/* 3015 */    MCD::OPC_CheckField, 6, 10, 0, 125, 9, // Skip to: 5450
/* 3021 */    MCD::OPC_Decode, 232, 2, 68, // Opcode: INSV
/* 3025 */    MCD::OPC_FilterValue, 16, 32, 1, // Skip to: 3317
/* 3029 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3032 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 3043
/* 3036 */    MCD::OPC_CheckPredicate, 3, 106, 9, // Skip to: 5450
/* 3040 */    MCD::OPC_Decode, 32, 69, // Opcode: ADDU_QB
/* 3043 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3055
/* 3047 */    MCD::OPC_CheckPredicate, 3, 95, 9, // Skip to: 5450
/* 3051 */    MCD::OPC_Decode, 239, 5, 69, // Opcode: SUBU_QB
/* 3055 */    MCD::OPC_FilterValue, 4, 7, 0, // Skip to: 3066
/* 3059 */    MCD::OPC_CheckPredicate, 3, 83, 9, // Skip to: 5450
/* 3063 */    MCD::OPC_Decode, 34, 69, // Opcode: ADDU_S_QB
/* 3066 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3078
/* 3070 */    MCD::OPC_CheckPredicate, 3, 72, 9, // Skip to: 5450
/* 3074 */    MCD::OPC_Decode, 241, 5, 69, // Opcode: SUBU_S_QB
/* 3078 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3090
/* 3082 */    MCD::OPC_CheckPredicate, 3, 60, 9, // Skip to: 5450
/* 3086 */    MCD::OPC_Decode, 151, 4, 69, // Opcode: MULEU_S_PH_QBL
/* 3090 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 3102
/* 3094 */    MCD::OPC_CheckPredicate, 3, 48, 9, // Skip to: 5450
/* 3098 */    MCD::OPC_Decode, 152, 4, 69, // Opcode: MULEU_S_PH_QBR
/* 3102 */    MCD::OPC_FilterValue, 8, 7, 0, // Skip to: 3113
/* 3106 */    MCD::OPC_CheckPredicate, 13, 36, 9, // Skip to: 5450
/* 3110 */    MCD::OPC_Decode, 31, 69, // Opcode: ADDU_PH
/* 3113 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 3125
/* 3117 */    MCD::OPC_CheckPredicate, 13, 25, 9, // Skip to: 5450
/* 3121 */    MCD::OPC_Decode, 238, 5, 69, // Opcode: SUBU_PH
/* 3125 */    MCD::OPC_FilterValue, 10, 7, 0, // Skip to: 3136
/* 3129 */    MCD::OPC_CheckPredicate, 3, 13, 9, // Skip to: 5450
/* 3133 */    MCD::OPC_Decode, 25, 69, // Opcode: ADDQ_PH
/* 3136 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 3148
/* 3140 */    MCD::OPC_CheckPredicate, 3, 2, 9, // Skip to: 5450
/* 3144 */    MCD::OPC_Decode, 233, 5, 69, // Opcode: SUBQ_PH
/* 3148 */    MCD::OPC_FilterValue, 12, 7, 0, // Skip to: 3159
/* 3152 */    MCD::OPC_CheckPredicate, 13, 246, 8, // Skip to: 5450
/* 3156 */    MCD::OPC_Decode, 33, 69, // Opcode: ADDU_S_PH
/* 3159 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 3171
/* 3163 */    MCD::OPC_CheckPredicate, 13, 235, 8, // Skip to: 5450
/* 3167 */    MCD::OPC_Decode, 240, 5, 69, // Opcode: SUBU_S_PH
/* 3171 */    MCD::OPC_FilterValue, 14, 7, 0, // Skip to: 3182
/* 3175 */    MCD::OPC_CheckPredicate, 3, 223, 8, // Skip to: 5450
/* 3179 */    MCD::OPC_Decode, 26, 69, // Opcode: ADDQ_S_PH
/* 3182 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 3194
/* 3186 */    MCD::OPC_CheckPredicate, 3, 212, 8, // Skip to: 5450
/* 3190 */    MCD::OPC_Decode, 234, 5, 69, // Opcode: SUBQ_S_PH
/* 3194 */    MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 3205
/* 3198 */    MCD::OPC_CheckPredicate, 3, 200, 8, // Skip to: 5450
/* 3202 */    MCD::OPC_Decode, 28, 26, // Opcode: ADDSC
/* 3205 */    MCD::OPC_FilterValue, 17, 7, 0, // Skip to: 3216
/* 3209 */    MCD::OPC_CheckPredicate, 3, 189, 8, // Skip to: 5450
/* 3213 */    MCD::OPC_Decode, 35, 26, // Opcode: ADDWC
/* 3216 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 3228
/* 3220 */    MCD::OPC_CheckPredicate, 3, 178, 8, // Skip to: 5450
/* 3224 */    MCD::OPC_Decode, 230, 3, 26, // Opcode: MODSUB
/* 3228 */    MCD::OPC_FilterValue, 20, 14, 0, // Skip to: 3246
/* 3232 */    MCD::OPC_CheckPredicate, 3, 166, 8, // Skip to: 5450
/* 3236 */    MCD::OPC_CheckField, 16, 5, 0, 160, 8, // Skip to: 5450
/* 3242 */    MCD::OPC_Decode, 243, 4, 70, // Opcode: RADDU_W_QB
/* 3246 */    MCD::OPC_FilterValue, 22, 7, 0, // Skip to: 3257
/* 3250 */    MCD::OPC_CheckPredicate, 3, 148, 8, // Skip to: 5450
/* 3254 */    MCD::OPC_Decode, 27, 26, // Opcode: ADDQ_S_W
/* 3257 */    MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 3269
/* 3261 */    MCD::OPC_CheckPredicate, 3, 137, 8, // Skip to: 5450
/* 3265 */    MCD::OPC_Decode, 235, 5, 26, // Opcode: SUBQ_S_W
/* 3269 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 3281
/* 3273 */    MCD::OPC_CheckPredicate, 3, 125, 8, // Skip to: 5450
/* 3277 */    MCD::OPC_Decode, 149, 4, 71, // Opcode: MULEQ_S_W_PHL
/* 3281 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 3293
/* 3285 */    MCD::OPC_CheckPredicate, 3, 113, 8, // Skip to: 5450
/* 3289 */    MCD::OPC_Decode, 150, 4, 71, // Opcode: MULEQ_S_W_PHR
/* 3293 */    MCD::OPC_FilterValue, 30, 8, 0, // Skip to: 3305
/* 3297 */    MCD::OPC_CheckPredicate, 13, 101, 8, // Skip to: 5450
/* 3301 */    MCD::OPC_Decode, 155, 4, 69, // Opcode: MULQ_S_PH
/* 3305 */    MCD::OPC_FilterValue, 31, 93, 8, // Skip to: 5450
/* 3309 */    MCD::OPC_CheckPredicate, 3, 89, 8, // Skip to: 5450
/* 3313 */    MCD::OPC_Decode, 153, 4, 69, // Opcode: MULQ_RS_PH
/* 3317 */    MCD::OPC_FilterValue, 17, 47, 1, // Skip to: 3624
/* 3321 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3324 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3342
/* 3328 */    MCD::OPC_CheckPredicate, 3, 70, 8, // Skip to: 5450
/* 3332 */    MCD::OPC_CheckField, 11, 5, 0, 64, 8, // Skip to: 5450
/* 3338 */    MCD::OPC_Decode, 183, 1, 72, // Opcode: CMPU_EQ_QB
/* 3342 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 3360
/* 3346 */    MCD::OPC_CheckPredicate, 3, 52, 8, // Skip to: 5450
/* 3350 */    MCD::OPC_CheckField, 11, 5, 0, 46, 8, // Skip to: 5450
/* 3356 */    MCD::OPC_Decode, 185, 1, 72, // Opcode: CMPU_LT_QB
/* 3360 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 3378
/* 3364 */    MCD::OPC_CheckPredicate, 3, 34, 8, // Skip to: 5450
/* 3368 */    MCD::OPC_CheckField, 11, 5, 0, 28, 8, // Skip to: 5450
/* 3374 */    MCD::OPC_Decode, 184, 1, 72, // Opcode: CMPU_LE_QB
/* 3378 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3390
/* 3382 */    MCD::OPC_CheckPredicate, 3, 16, 8, // Skip to: 5450
/* 3386 */    MCD::OPC_Decode, 197, 4, 69, // Opcode: PICK_QB
/* 3390 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 3402
/* 3394 */    MCD::OPC_CheckPredicate, 3, 4, 8, // Skip to: 5450
/* 3398 */    MCD::OPC_Decode, 180, 1, 71, // Opcode: CMPGU_EQ_QB
/* 3402 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3414
/* 3406 */    MCD::OPC_CheckPredicate, 3, 248, 7, // Skip to: 5450
/* 3410 */    MCD::OPC_Decode, 182, 1, 71, // Opcode: CMPGU_LT_QB
/* 3414 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3426
/* 3418 */    MCD::OPC_CheckPredicate, 3, 236, 7, // Skip to: 5450
/* 3422 */    MCD::OPC_Decode, 181, 1, 71, // Opcode: CMPGU_LE_QB
/* 3426 */    MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 3444
/* 3430 */    MCD::OPC_CheckPredicate, 3, 224, 7, // Skip to: 5450
/* 3434 */    MCD::OPC_CheckField, 11, 5, 0, 218, 7, // Skip to: 5450
/* 3440 */    MCD::OPC_Decode, 186, 1, 72, // Opcode: CMP_EQ_PH
/* 3444 */    MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 3462
/* 3448 */    MCD::OPC_CheckPredicate, 3, 206, 7, // Skip to: 5450
/* 3452 */    MCD::OPC_CheckField, 11, 5, 0, 200, 7, // Skip to: 5450
/* 3458 */    MCD::OPC_Decode, 188, 1, 72, // Opcode: CMP_LT_PH
/* 3462 */    MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 3480
/* 3466 */    MCD::OPC_CheckPredicate, 3, 188, 7, // Skip to: 5450
/* 3470 */    MCD::OPC_CheckField, 11, 5, 0, 182, 7, // Skip to: 5450
/* 3476 */    MCD::OPC_Decode, 187, 1, 72, // Opcode: CMP_LE_PH
/* 3480 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 3492
/* 3484 */    MCD::OPC_CheckPredicate, 3, 170, 7, // Skip to: 5450
/* 3488 */    MCD::OPC_Decode, 196, 4, 69, // Opcode: PICK_PH
/* 3492 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 3504
/* 3496 */    MCD::OPC_CheckPredicate, 3, 158, 7, // Skip to: 5450
/* 3500 */    MCD::OPC_Decode, 210, 4, 69, // Opcode: PRECRQ_QB_PH
/* 3504 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 3516
/* 3508 */    MCD::OPC_CheckPredicate, 13, 146, 7, // Skip to: 5450
/* 3512 */    MCD::OPC_Decode, 212, 4, 69, // Opcode: PRECR_QB_PH
/* 3516 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 3528
/* 3520 */    MCD::OPC_CheckPredicate, 3, 134, 7, // Skip to: 5450
/* 3524 */    MCD::OPC_Decode, 195, 4, 69, // Opcode: PACKRL_PH
/* 3528 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 3540
/* 3532 */    MCD::OPC_CheckPredicate, 3, 122, 7, // Skip to: 5450
/* 3536 */    MCD::OPC_Decode, 208, 4, 69, // Opcode: PRECRQU_S_QB_PH
/* 3540 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 3552
/* 3544 */    MCD::OPC_CheckPredicate, 3, 110, 7, // Skip to: 5450
/* 3548 */    MCD::OPC_Decode, 209, 4, 73, // Opcode: PRECRQ_PH_W
/* 3552 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 3564
/* 3556 */    MCD::OPC_CheckPredicate, 3, 98, 7, // Skip to: 5450
/* 3560 */    MCD::OPC_Decode, 211, 4, 73, // Opcode: PRECRQ_RS_PH_W
/* 3564 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 3576
/* 3568 */    MCD::OPC_CheckPredicate, 13, 86, 7, // Skip to: 5450
/* 3572 */    MCD::OPC_Decode, 177, 1, 71, // Opcode: CMPGDU_EQ_QB
/* 3576 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 3588
/* 3580 */    MCD::OPC_CheckPredicate, 13, 74, 7, // Skip to: 5450
/* 3584 */    MCD::OPC_Decode, 179, 1, 71, // Opcode: CMPGDU_LT_QB
/* 3588 */    MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 3600
/* 3592 */    MCD::OPC_CheckPredicate, 13, 62, 7, // Skip to: 5450
/* 3596 */    MCD::OPC_Decode, 178, 1, 71, // Opcode: CMPGDU_LE_QB
/* 3600 */    MCD::OPC_FilterValue, 30, 8, 0, // Skip to: 3612
/* 3604 */    MCD::OPC_CheckPredicate, 13, 50, 7, // Skip to: 5450
/* 3608 */    MCD::OPC_Decode, 213, 4, 74, // Opcode: PRECR_SRA_PH_W
/* 3612 */    MCD::OPC_FilterValue, 31, 42, 7, // Skip to: 5450
/* 3616 */    MCD::OPC_CheckPredicate, 13, 38, 7, // Skip to: 5450
/* 3620 */    MCD::OPC_Decode, 214, 4, 74, // Opcode: PRECR_SRA_R_PH_W
/* 3624 */    MCD::OPC_FilterValue, 18, 56, 1, // Skip to: 3940
/* 3628 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3631 */    MCD::OPC_FilterValue, 1, 13, 0, // Skip to: 3648
/* 3635 */    MCD::OPC_CheckPredicate, 13, 19, 7, // Skip to: 5450
/* 3639 */    MCD::OPC_CheckField, 21, 5, 0, 13, 7, // Skip to: 5450
/* 3645 */    MCD::OPC_Decode, 18, 75, // Opcode: ABSQ_S_QB
/* 3648 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3660
/* 3652 */    MCD::OPC_CheckPredicate, 3, 2, 7, // Skip to: 5450
/* 3656 */    MCD::OPC_Decode, 250, 4, 76, // Opcode: REPL_QB
/* 3660 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 3678
/* 3664 */    MCD::OPC_CheckPredicate, 3, 246, 6, // Skip to: 5450
/* 3668 */    MCD::OPC_CheckField, 21, 5, 0, 240, 6, // Skip to: 5450
/* 3674 */    MCD::OPC_Decode, 248, 4, 77, // Opcode: REPLV_QB
/* 3678 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 3696
/* 3682 */    MCD::OPC_CheckPredicate, 3, 228, 6, // Skip to: 5450
/* 3686 */    MCD::OPC_CheckField, 21, 5, 0, 222, 6, // Skip to: 5450
/* 3692 */    MCD::OPC_Decode, 198, 4, 75, // Opcode: PRECEQU_PH_QBL
/* 3696 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 3714
/* 3700 */    MCD::OPC_CheckPredicate, 3, 210, 6, // Skip to: 5450
/* 3704 */    MCD::OPC_CheckField, 21, 5, 0, 204, 6, // Skip to: 5450
/* 3710 */    MCD::OPC_Decode, 200, 4, 75, // Opcode: PRECEQU_PH_QBR
/* 3714 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 3732
/* 3718 */    MCD::OPC_CheckPredicate, 3, 192, 6, // Skip to: 5450
/* 3722 */    MCD::OPC_CheckField, 21, 5, 0, 186, 6, // Skip to: 5450
/* 3728 */    MCD::OPC_Decode, 199, 4, 75, // Opcode: PRECEQU_PH_QBLA
/* 3732 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 3750
/* 3736 */    MCD::OPC_CheckPredicate, 3, 174, 6, // Skip to: 5450
/* 3740 */    MCD::OPC_CheckField, 21, 5, 0, 168, 6, // Skip to: 5450
/* 3746 */    MCD::OPC_Decode, 201, 4, 75, // Opcode: PRECEQU_PH_QBRA
/* 3750 */    MCD::OPC_FilterValue, 9, 13, 0, // Skip to: 3767
/* 3754 */    MCD::OPC_CheckPredicate, 3, 156, 6, // Skip to: 5450
/* 3758 */    MCD::OPC_CheckField, 21, 5, 0, 150, 6, // Skip to: 5450
/* 3764 */    MCD::OPC_Decode, 17, 75, // Opcode: ABSQ_S_PH
/* 3767 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 3779
/* 3771 */    MCD::OPC_CheckPredicate, 3, 139, 6, // Skip to: 5450
/* 3775 */    MCD::OPC_Decode, 249, 4, 76, // Opcode: REPL_PH
/* 3779 */    MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 3797
/* 3783 */    MCD::OPC_CheckPredicate, 3, 127, 6, // Skip to: 5450
/* 3787 */    MCD::OPC_CheckField, 21, 5, 0, 121, 6, // Skip to: 5450
/* 3793 */    MCD::OPC_Decode, 247, 4, 77, // Opcode: REPLV_PH
/* 3797 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 3815
/* 3801 */    MCD::OPC_CheckPredicate, 3, 109, 6, // Skip to: 5450
/* 3805 */    MCD::OPC_CheckField, 21, 5, 0, 103, 6, // Skip to: 5450
/* 3811 */    MCD::OPC_Decode, 202, 4, 78, // Opcode: PRECEQ_W_PHL
/* 3815 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 3833
/* 3819 */    MCD::OPC_CheckPredicate, 3, 91, 6, // Skip to: 5450
/* 3823 */    MCD::OPC_CheckField, 21, 5, 0, 85, 6, // Skip to: 5450
/* 3829 */    MCD::OPC_Decode, 203, 4, 78, // Opcode: PRECEQ_W_PHR
/* 3833 */    MCD::OPC_FilterValue, 17, 13, 0, // Skip to: 3850
/* 3837 */    MCD::OPC_CheckPredicate, 3, 73, 6, // Skip to: 5450
/* 3841 */    MCD::OPC_CheckField, 21, 5, 0, 67, 6, // Skip to: 5450
/* 3847 */    MCD::OPC_Decode, 19, 79, // Opcode: ABSQ_S_W
/* 3850 */    MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 3868
/* 3854 */    MCD::OPC_CheckPredicate, 3, 56, 6, // Skip to: 5450
/* 3858 */    MCD::OPC_CheckField, 21, 5, 0, 50, 6, // Skip to: 5450
/* 3864 */    MCD::OPC_Decode, 137, 1, 79, // Opcode: BITREV
/* 3868 */    MCD::OPC_FilterValue, 28, 14, 0, // Skip to: 3886
/* 3872 */    MCD::OPC_CheckPredicate, 3, 38, 6, // Skip to: 5450
/* 3876 */    MCD::OPC_CheckField, 21, 5, 0, 32, 6, // Skip to: 5450
/* 3882 */    MCD::OPC_Decode, 204, 4, 75, // Opcode: PRECEU_PH_QBL
/* 3886 */    MCD::OPC_FilterValue, 29, 14, 0, // Skip to: 3904
/* 3890 */    MCD::OPC_CheckPredicate, 3, 20, 6, // Skip to: 5450
/* 3894 */    MCD::OPC_CheckField, 21, 5, 0, 14, 6, // Skip to: 5450
/* 3900 */    MCD::OPC_Decode, 206, 4, 75, // Opcode: PRECEU_PH_QBR
/* 3904 */    MCD::OPC_FilterValue, 30, 14, 0, // Skip to: 3922
/* 3908 */    MCD::OPC_CheckPredicate, 3, 2, 6, // Skip to: 5450
/* 3912 */    MCD::OPC_CheckField, 21, 5, 0, 252, 5, // Skip to: 5450
/* 3918 */    MCD::OPC_Decode, 205, 4, 75, // Opcode: PRECEU_PH_QBLA
/* 3922 */    MCD::OPC_FilterValue, 31, 244, 5, // Skip to: 5450
/* 3926 */    MCD::OPC_CheckPredicate, 3, 240, 5, // Skip to: 5450
/* 3930 */    MCD::OPC_CheckField, 21, 5, 0, 234, 5, // Skip to: 5450
/* 3936 */    MCD::OPC_Decode, 207, 4, 75, // Opcode: PRECEU_PH_QBRA
/* 3940 */    MCD::OPC_FilterValue, 19, 11, 1, // Skip to: 4211
/* 3944 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3947 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3959
/* 3951 */    MCD::OPC_CheckPredicate, 3, 215, 5, // Skip to: 5450
/* 3955 */    MCD::OPC_Decode, 174, 5, 80, // Opcode: SHLL_QB
/* 3959 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3971
/* 3963 */    MCD::OPC_CheckPredicate, 3, 203, 5, // Skip to: 5450
/* 3967 */    MCD::OPC_Decode, 190, 5, 80, // Opcode: SHRL_QB
/* 3971 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3983
/* 3975 */    MCD::OPC_CheckPredicate, 3, 191, 5, // Skip to: 5450
/* 3979 */    MCD::OPC_Decode, 170, 5, 81, // Opcode: SHLLV_QB
/* 3983 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3995
/* 3987 */    MCD::OPC_CheckPredicate, 3, 179, 5, // Skip to: 5450
/* 3991 */    MCD::OPC_Decode, 188, 5, 81, // Opcode: SHRLV_QB
/* 3995 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 4007
/* 3999 */    MCD::OPC_CheckPredicate, 13, 167, 5, // Skip to: 5450
/* 4003 */    MCD::OPC_Decode, 183, 5, 80, // Opcode: SHRA_QB
/* 4007 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 4019
/* 4011 */    MCD::OPC_CheckPredicate, 13, 155, 5, // Skip to: 5450
/* 4015 */    MCD::OPC_Decode, 185, 5, 80, // Opcode: SHRA_R_QB
/* 4019 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 4031
/* 4023 */    MCD::OPC_CheckPredicate, 13, 143, 5, // Skip to: 5450
/* 4027 */    MCD::OPC_Decode, 178, 5, 81, // Opcode: SHRAV_QB
/* 4031 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 4043
/* 4035 */    MCD::OPC_CheckPredicate, 13, 131, 5, // Skip to: 5450
/* 4039 */    MCD::OPC_Decode, 180, 5, 81, // Opcode: SHRAV_R_QB
/* 4043 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 4055
/* 4047 */    MCD::OPC_CheckPredicate, 3, 119, 5, // Skip to: 5450
/* 4051 */    MCD::OPC_Decode, 173, 5, 80, // Opcode: SHLL_PH
/* 4055 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 4067
/* 4059 */    MCD::OPC_CheckPredicate, 3, 107, 5, // Skip to: 5450
/* 4063 */    MCD::OPC_Decode, 182, 5, 80, // Opcode: SHRA_PH
/* 4067 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 4079
/* 4071 */    MCD::OPC_CheckPredicate, 3, 95, 5, // Skip to: 5450
/* 4075 */    MCD::OPC_Decode, 169, 5, 81, // Opcode: SHLLV_PH
/* 4079 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 4091
/* 4083 */    MCD::OPC_CheckPredicate, 3, 83, 5, // Skip to: 5450
/* 4087 */    MCD::OPC_Decode, 177, 5, 81, // Opcode: SHRAV_PH
/* 4091 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 4103
/* 4095 */    MCD::OPC_CheckPredicate, 3, 71, 5, // Skip to: 5450
/* 4099 */    MCD::OPC_Decode, 175, 5, 80, // Opcode: SHLL_S_PH
/* 4103 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 4115
/* 4107 */    MCD::OPC_CheckPredicate, 3, 59, 5, // Skip to: 5450
/* 4111 */    MCD::OPC_Decode, 184, 5, 80, // Opcode: SHRA_R_PH
/* 4115 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 4127
/* 4119 */    MCD::OPC_CheckPredicate, 3, 47, 5, // Skip to: 5450
/* 4123 */    MCD::OPC_Decode, 171, 5, 81, // Opcode: SHLLV_S_PH
/* 4127 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 4139
/* 4131 */    MCD::OPC_CheckPredicate, 3, 35, 5, // Skip to: 5450
/* 4135 */    MCD::OPC_Decode, 179, 5, 81, // Opcode: SHRAV_R_PH
/* 4139 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 4151
/* 4143 */    MCD::OPC_CheckPredicate, 3, 23, 5, // Skip to: 5450
/* 4147 */    MCD::OPC_Decode, 176, 5, 82, // Opcode: SHLL_S_W
/* 4151 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 4163
/* 4155 */    MCD::OPC_CheckPredicate, 3, 11, 5, // Skip to: 5450
/* 4159 */    MCD::OPC_Decode, 186, 5, 82, // Opcode: SHRA_R_W
/* 4163 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 4175
/* 4167 */    MCD::OPC_CheckPredicate, 3, 255, 4, // Skip to: 5450
/* 4171 */    MCD::OPC_Decode, 172, 5, 12, // Opcode: SHLLV_S_W
/* 4175 */    MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 4187
/* 4179 */    MCD::OPC_CheckPredicate, 3, 243, 4, // Skip to: 5450
/* 4183 */    MCD::OPC_Decode, 181, 5, 12, // Opcode: SHRAV_R_W
/* 4187 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 4199
/* 4191 */    MCD::OPC_CheckPredicate, 13, 231, 4, // Skip to: 5450
/* 4195 */    MCD::OPC_Decode, 189, 5, 80, // Opcode: SHRL_PH
/* 4199 */    MCD::OPC_FilterValue, 27, 223, 4, // Skip to: 5450
/* 4203 */    MCD::OPC_CheckPredicate, 13, 219, 4, // Skip to: 5450
/* 4207 */    MCD::OPC_Decode, 187, 5, 81, // Opcode: SHRLV_PH
/* 4211 */    MCD::OPC_FilterValue, 24, 189, 0, // Skip to: 4404
/* 4215 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4218 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 4229
/* 4222 */    MCD::OPC_CheckPredicate, 13, 200, 4, // Skip to: 5450
/* 4226 */    MCD::OPC_Decode, 29, 69, // Opcode: ADDUH_QB
/* 4229 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 4241
/* 4233 */    MCD::OPC_CheckPredicate, 13, 189, 4, // Skip to: 5450
/* 4237 */    MCD::OPC_Decode, 236, 5, 69, // Opcode: SUBUH_QB
/* 4241 */    MCD::OPC_FilterValue, 2, 7, 0, // Skip to: 4252
/* 4245 */    MCD::OPC_CheckPredicate, 13, 177, 4, // Skip to: 5450
/* 4249 */    MCD::OPC_Decode, 30, 69, // Opcode: ADDUH_R_QB
/* 4252 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 4264
/* 4256 */    MCD::OPC_CheckPredicate, 13, 166, 4, // Skip to: 5450
/* 4260 */    MCD::OPC_Decode, 237, 5, 69, // Opcode: SUBUH_R_QB
/* 4264 */    MCD::OPC_FilterValue, 8, 7, 0, // Skip to: 4275
/* 4268 */    MCD::OPC_CheckPredicate, 13, 154, 4, // Skip to: 5450
/* 4272 */    MCD::OPC_Decode, 21, 69, // Opcode: ADDQH_PH
/* 4275 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 4287
/* 4279 */    MCD::OPC_CheckPredicate, 13, 143, 4, // Skip to: 5450
/* 4283 */    MCD::OPC_Decode, 229, 5, 69, // Opcode: SUBQH_PH
/* 4287 */    MCD::OPC_FilterValue, 10, 7, 0, // Skip to: 4298
/* 4291 */    MCD::OPC_CheckPredicate, 13, 131, 4, // Skip to: 5450
/* 4295 */    MCD::OPC_Decode, 22, 69, // Opcode: ADDQH_R_PH
/* 4298 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 4310
/* 4302 */    MCD::OPC_CheckPredicate, 13, 120, 4, // Skip to: 5450
/* 4306 */    MCD::OPC_Decode, 230, 5, 69, // Opcode: SUBQH_R_PH
/* 4310 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 4322
/* 4314 */    MCD::OPC_CheckPredicate, 13, 108, 4, // Skip to: 5450
/* 4318 */    MCD::OPC_Decode, 166, 4, 69, // Opcode: MUL_PH
/* 4322 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 4334
/* 4326 */    MCD::OPC_CheckPredicate, 13, 96, 4, // Skip to: 5450
/* 4330 */    MCD::OPC_Decode, 167, 4, 69, // Opcode: MUL_S_PH
/* 4334 */    MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 4345
/* 4338 */    MCD::OPC_CheckPredicate, 13, 84, 4, // Skip to: 5450
/* 4342 */    MCD::OPC_Decode, 24, 26, // Opcode: ADDQH_W
/* 4345 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 4357
/* 4349 */    MCD::OPC_CheckPredicate, 13, 73, 4, // Skip to: 5450
/* 4353 */    MCD::OPC_Decode, 232, 5, 26, // Opcode: SUBQH_W
/* 4357 */    MCD::OPC_FilterValue, 18, 7, 0, // Skip to: 4368
/* 4361 */    MCD::OPC_CheckPredicate, 13, 61, 4, // Skip to: 5450
/* 4365 */    MCD::OPC_Decode, 23, 26, // Opcode: ADDQH_R_W
/* 4368 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 4380
/* 4372 */    MCD::OPC_CheckPredicate, 13, 50, 4, // Skip to: 5450
/* 4376 */    MCD::OPC_Decode, 231, 5, 26, // Opcode: SUBQH_R_W
/* 4380 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 4392
/* 4384 */    MCD::OPC_CheckPredicate, 13, 38, 4, // Skip to: 5450
/* 4388 */    MCD::OPC_Decode, 156, 4, 26, // Opcode: MULQ_S_W
/* 4392 */    MCD::OPC_FilterValue, 23, 30, 4, // Skip to: 5450
/* 4396 */    MCD::OPC_CheckPredicate, 13, 26, 4, // Skip to: 5450
/* 4400 */    MCD::OPC_Decode, 154, 4, 26, // Opcode: MULQ_RS_W
/* 4404 */    MCD::OPC_FilterValue, 32, 57, 0, // Skip to: 4465
/* 4408 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4411 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 4429
/* 4415 */    MCD::OPC_CheckPredicate, 14, 7, 4, // Skip to: 5450
/* 4419 */    MCD::OPC_CheckField, 21, 5, 0, 1, 4, // Skip to: 5450
/* 4425 */    MCD::OPC_Decode, 189, 6, 79, // Opcode: WSBH
/* 4429 */    MCD::OPC_FilterValue, 16, 14, 0, // Skip to: 4447
/* 4433 */    MCD::OPC_CheckPredicate, 15, 245, 3, // Skip to: 5450
/* 4437 */    MCD::OPC_CheckField, 21, 5, 0, 239, 3, // Skip to: 5450
/* 4443 */    MCD::OPC_Decode, 160, 5, 79, // Opcode: SEB
/* 4447 */    MCD::OPC_FilterValue, 24, 231, 3, // Skip to: 5450
/* 4451 */    MCD::OPC_CheckPredicate, 15, 227, 3, // Skip to: 5450
/* 4455 */    MCD::OPC_CheckField, 21, 5, 0, 221, 3, // Skip to: 5450
/* 4461 */    MCD::OPC_Decode, 162, 5, 79, // Opcode: SEH
/* 4465 */    MCD::OPC_FilterValue, 48, 143, 1, // Skip to: 4868
/* 4469 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4472 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 4490
/* 4476 */    MCD::OPC_CheckPredicate, 13, 202, 3, // Skip to: 5450
/* 4480 */    MCD::OPC_CheckField, 13, 3, 0, 196, 3, // Skip to: 5450
/* 4486 */    MCD::OPC_Decode, 156, 2, 64, // Opcode: DPA_W_PH
/* 4490 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 4508
/* 4494 */    MCD::OPC_CheckPredicate, 13, 184, 3, // Skip to: 5450
/* 4498 */    MCD::OPC_CheckField, 13, 3, 0, 178, 3, // Skip to: 5450
/* 4504 */    MCD::OPC_Decode, 164, 2, 64, // Opcode: DPS_W_PH
/* 4508 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 4526
/* 4512 */    MCD::OPC_CheckPredicate, 13, 166, 3, // Skip to: 5450
/* 4516 */    MCD::OPC_CheckField, 13, 3, 0, 160, 3, // Skip to: 5450
/* 4522 */    MCD::OPC_Decode, 158, 4, 64, // Opcode: MULSA_W_PH
/* 4526 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 4544
/* 4530 */    MCD::OPC_CheckPredicate, 3, 148, 3, // Skip to: 5450
/* 4534 */    MCD::OPC_CheckField, 13, 3, 0, 142, 3, // Skip to: 5450
/* 4540 */    MCD::OPC_Decode, 153, 2, 64, // Opcode: DPAU_H_QBL
/* 4544 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 4562
/* 4548 */    MCD::OPC_CheckPredicate, 3, 130, 3, // Skip to: 5450
/* 4552 */    MCD::OPC_CheckField, 13, 3, 0, 124, 3, // Skip to: 5450
/* 4558 */    MCD::OPC_Decode, 152, 2, 64, // Opcode: DPAQ_S_W_PH
/* 4562 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 4580
/* 4566 */    MCD::OPC_CheckPredicate, 3, 112, 3, // Skip to: 5450
/* 4570 */    MCD::OPC_CheckField, 13, 3, 0, 106, 3, // Skip to: 5450
/* 4576 */    MCD::OPC_Decode, 160, 2, 64, // Opcode: DPSQ_S_W_PH
/* 4580 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 4598
/* 4584 */    MCD::OPC_CheckPredicate, 3, 94, 3, // Skip to: 5450
/* 4588 */    MCD::OPC_CheckField, 13, 3, 0, 88, 3, // Skip to: 5450
/* 4594 */    MCD::OPC_Decode, 157, 4, 64, // Opcode: MULSAQ_S_W_PH
/* 4598 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 4616
/* 4602 */    MCD::OPC_CheckPredicate, 3, 76, 3, // Skip to: 5450
/* 4606 */    MCD::OPC_CheckField, 13, 3, 0, 70, 3, // Skip to: 5450
/* 4612 */    MCD::OPC_Decode, 154, 2, 64, // Opcode: DPAU_H_QBR
/* 4616 */    MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 4634
/* 4620 */    MCD::OPC_CheckPredicate, 13, 58, 3, // Skip to: 5450
/* 4624 */    MCD::OPC_CheckField, 13, 3, 0, 52, 3, // Skip to: 5450
/* 4630 */    MCD::OPC_Decode, 155, 2, 64, // Opcode: DPAX_W_PH
/* 4634 */    MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 4652
/* 4638 */    MCD::OPC_CheckPredicate, 13, 40, 3, // Skip to: 5450
/* 4642 */    MCD::OPC_CheckField, 13, 3, 0, 34, 3, // Skip to: 5450
/* 4648 */    MCD::OPC_Decode, 163, 2, 64, // Opcode: DPSX_W_PH
/* 4652 */    MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 4670
/* 4656 */    MCD::OPC_CheckPredicate, 3, 22, 3, // Skip to: 5450
/* 4660 */    MCD::OPC_CheckField, 13, 3, 0, 16, 3, // Skip to: 5450
/* 4666 */    MCD::OPC_Decode, 161, 2, 64, // Opcode: DPSU_H_QBL
/* 4670 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 4688
/* 4674 */    MCD::OPC_CheckPredicate, 3, 4, 3, // Skip to: 5450
/* 4678 */    MCD::OPC_CheckField, 13, 3, 0, 254, 2, // Skip to: 5450
/* 4684 */    MCD::OPC_Decode, 151, 2, 64, // Opcode: DPAQ_SA_L_W
/* 4688 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 4706
/* 4692 */    MCD::OPC_CheckPredicate, 3, 242, 2, // Skip to: 5450
/* 4696 */    MCD::OPC_CheckField, 13, 3, 0, 236, 2, // Skip to: 5450
/* 4702 */    MCD::OPC_Decode, 159, 2, 64, // Opcode: DPSQ_SA_L_W
/* 4706 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 4724
/* 4710 */    MCD::OPC_CheckPredicate, 3, 224, 2, // Skip to: 5450
/* 4714 */    MCD::OPC_CheckField, 13, 3, 0, 218, 2, // Skip to: 5450
/* 4720 */    MCD::OPC_Decode, 162, 2, 64, // Opcode: DPSU_H_QBR
/* 4724 */    MCD::OPC_FilterValue, 16, 14, 0, // Skip to: 4742
/* 4728 */    MCD::OPC_CheckPredicate, 3, 206, 2, // Skip to: 5450
/* 4732 */    MCD::OPC_CheckField, 13, 3, 0, 200, 2, // Skip to: 5450
/* 4738 */    MCD::OPC_Decode, 215, 3, 64, // Opcode: MAQ_SA_W_PHL
/* 4742 */    MCD::OPC_FilterValue, 18, 14, 0, // Skip to: 4760
/* 4746 */    MCD::OPC_CheckPredicate, 3, 188, 2, // Skip to: 5450
/* 4750 */    MCD::OPC_CheckField, 13, 3, 0, 182, 2, // Skip to: 5450
/* 4756 */    MCD::OPC_Decode, 216, 3, 64, // Opcode: MAQ_SA_W_PHR
/* 4760 */    MCD::OPC_FilterValue, 20, 14, 0, // Skip to: 4778
/* 4764 */    MCD::OPC_CheckPredicate, 3, 170, 2, // Skip to: 5450
/* 4768 */    MCD::OPC_CheckField, 13, 3, 0, 164, 2, // Skip to: 5450
/* 4774 */    MCD::OPC_Decode, 217, 3, 64, // Opcode: MAQ_S_W_PHL
/* 4778 */    MCD::OPC_FilterValue, 22, 14, 0, // Skip to: 4796
/* 4782 */    MCD::OPC_CheckPredicate, 3, 152, 2, // Skip to: 5450
/* 4786 */    MCD::OPC_CheckField, 13, 3, 0, 146, 2, // Skip to: 5450
/* 4792 */    MCD::OPC_Decode, 218, 3, 64, // Opcode: MAQ_S_W_PHR
/* 4796 */    MCD::OPC_FilterValue, 24, 14, 0, // Skip to: 4814
/* 4800 */    MCD::OPC_CheckPredicate, 13, 134, 2, // Skip to: 5450
/* 4804 */    MCD::OPC_CheckField, 13, 3, 0, 128, 2, // Skip to: 5450
/* 4810 */    MCD::OPC_Decode, 150, 2, 64, // Opcode: DPAQX_S_W_PH
/* 4814 */    MCD::OPC_FilterValue, 25, 14, 0, // Skip to: 4832
/* 4818 */    MCD::OPC_CheckPredicate, 13, 116, 2, // Skip to: 5450
/* 4822 */    MCD::OPC_CheckField, 13, 3, 0, 110, 2, // Skip to: 5450
/* 4828 */    MCD::OPC_Decode, 158, 2, 64, // Opcode: DPSQX_S_W_PH
/* 4832 */    MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 4850
/* 4836 */    MCD::OPC_CheckPredicate, 13, 98, 2, // Skip to: 5450
/* 4840 */    MCD::OPC_CheckField, 13, 3, 0, 92, 2, // Skip to: 5450
/* 4846 */    MCD::OPC_Decode, 149, 2, 64, // Opcode: DPAQX_SA_W_PH
/* 4850 */    MCD::OPC_FilterValue, 27, 84, 2, // Skip to: 5450
/* 4854 */    MCD::OPC_CheckPredicate, 13, 80, 2, // Skip to: 5450
/* 4858 */    MCD::OPC_CheckField, 13, 3, 0, 74, 2, // Skip to: 5450
/* 4864 */    MCD::OPC_Decode, 157, 2, 64, // Opcode: DPSQX_SA_W_PH
/* 4868 */    MCD::OPC_FilterValue, 49, 37, 0, // Skip to: 4909
/* 4872 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4875 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 4886
/* 4879 */    MCD::OPC_CheckPredicate, 13, 55, 2, // Skip to: 5450
/* 4883 */    MCD::OPC_Decode, 51, 83, // Opcode: APPEND
/* 4886 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 4898
/* 4890 */    MCD::OPC_CheckPredicate, 13, 44, 2, // Skip to: 5450
/* 4894 */    MCD::OPC_Decode, 215, 4, 83, // Opcode: PREPEND
/* 4898 */    MCD::OPC_FilterValue, 16, 36, 2, // Skip to: 5450
/* 4902 */    MCD::OPC_CheckPredicate, 13, 32, 2, // Skip to: 5450
/* 4906 */    MCD::OPC_Decode, 126, 83, // Opcode: BALIGN
/* 4909 */    MCD::OPC_FilterValue, 56, 41, 1, // Skip to: 5210
/* 4913 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4916 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 4934
/* 4920 */    MCD::OPC_CheckPredicate, 3, 14, 2, // Skip to: 5450
/* 4924 */    MCD::OPC_CheckField, 13, 3, 0, 8, 2, // Skip to: 5450
/* 4930 */    MCD::OPC_Decode, 197, 2, 84, // Opcode: EXTR_W
/* 4934 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 4952
/* 4938 */    MCD::OPC_CheckPredicate, 3, 252, 1, // Skip to: 5450
/* 4942 */    MCD::OPC_CheckField, 13, 3, 0, 246, 1, // Skip to: 5450
/* 4948 */    MCD::OPC_Decode, 193, 2, 85, // Opcode: EXTRV_W
/* 4952 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 4970
/* 4956 */    MCD::OPC_CheckPredicate, 3, 234, 1, // Skip to: 5450
/* 4960 */    MCD::OPC_CheckField, 13, 3, 0, 228, 1, // Skip to: 5450
/* 4966 */    MCD::OPC_Decode, 186, 2, 84, // Opcode: EXTP
/* 4970 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 4988
/* 4974 */    MCD::OPC_CheckPredicate, 3, 216, 1, // Skip to: 5450
/* 4978 */    MCD::OPC_CheckField, 13, 3, 0, 210, 1, // Skip to: 5450
/* 4984 */    MCD::OPC_Decode, 189, 2, 85, // Opcode: EXTPV
/* 4988 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 5006
/* 4992 */    MCD::OPC_CheckPredicate, 3, 198, 1, // Skip to: 5450
/* 4996 */    MCD::OPC_CheckField, 13, 3, 0, 192, 1, // Skip to: 5450
/* 5002 */    MCD::OPC_Decode, 195, 2, 84, // Opcode: EXTR_R_W
/* 5006 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 5024
/* 5010 */    MCD::OPC_CheckPredicate, 3, 180, 1, // Skip to: 5450
/* 5014 */    MCD::OPC_CheckField, 13, 3, 0, 174, 1, // Skip to: 5450
/* 5020 */    MCD::OPC_Decode, 191, 2, 85, // Opcode: EXTRV_R_W
/* 5024 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 5042
/* 5028 */    MCD::OPC_CheckPredicate, 3, 162, 1, // Skip to: 5450
/* 5032 */    MCD::OPC_CheckField, 13, 3, 0, 156, 1, // Skip to: 5450
/* 5038 */    MCD::OPC_Decode, 194, 2, 84, // Opcode: EXTR_RS_W
/* 5042 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 5060
/* 5046 */    MCD::OPC_CheckPredicate, 3, 144, 1, // Skip to: 5450
/* 5050 */    MCD::OPC_CheckField, 13, 3, 0, 138, 1, // Skip to: 5450
/* 5056 */    MCD::OPC_Decode, 190, 2, 85, // Opcode: EXTRV_RS_W
/* 5060 */    MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 5078
/* 5064 */    MCD::OPC_CheckPredicate, 3, 126, 1, // Skip to: 5450
/* 5068 */    MCD::OPC_CheckField, 13, 3, 0, 120, 1, // Skip to: 5450
/* 5074 */    MCD::OPC_Decode, 187, 2, 84, // Opcode: EXTPDP
/* 5078 */    MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 5096
/* 5082 */    MCD::OPC_CheckPredicate, 3, 108, 1, // Skip to: 5450
/* 5086 */    MCD::OPC_CheckField, 13, 3, 0, 102, 1, // Skip to: 5450
/* 5092 */    MCD::OPC_Decode, 188, 2, 85, // Opcode: EXTPDPV
/* 5096 */    MCD::OPC_FilterValue, 14, 14, 0, // Skip to: 5114
/* 5100 */    MCD::OPC_CheckPredicate, 3, 90, 1, // Skip to: 5450
/* 5104 */    MCD::OPC_CheckField, 13, 3, 0, 84, 1, // Skip to: 5450
/* 5110 */    MCD::OPC_Decode, 196, 2, 84, // Opcode: EXTR_S_H
/* 5114 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 5132
/* 5118 */    MCD::OPC_CheckPredicate, 3, 72, 1, // Skip to: 5450
/* 5122 */    MCD::OPC_CheckField, 13, 3, 0, 66, 1, // Skip to: 5450
/* 5128 */    MCD::OPC_Decode, 192, 2, 85, // Opcode: EXTRV_S_H
/* 5132 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 5144
/* 5136 */    MCD::OPC_CheckPredicate, 3, 54, 1, // Skip to: 5450
/* 5140 */    MCD::OPC_Decode, 244, 4, 86, // Opcode: RDDSP
/* 5144 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 5156
/* 5148 */    MCD::OPC_CheckPredicate, 3, 42, 1, // Skip to: 5450
/* 5152 */    MCD::OPC_Decode, 188, 6, 87, // Opcode: WRDSP
/* 5156 */    MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 5174
/* 5160 */    MCD::OPC_CheckPredicate, 3, 30, 1, // Skip to: 5450
/* 5164 */    MCD::OPC_CheckField, 13, 7, 0, 24, 1, // Skip to: 5450
/* 5170 */    MCD::OPC_Decode, 167, 5, 88, // Opcode: SHILO
/* 5174 */    MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 5192
/* 5178 */    MCD::OPC_CheckPredicate, 3, 12, 1, // Skip to: 5450
/* 5182 */    MCD::OPC_CheckField, 13, 8, 0, 6, 1, // Skip to: 5450
/* 5188 */    MCD::OPC_Decode, 168, 5, 89, // Opcode: SHILOV
/* 5192 */    MCD::OPC_FilterValue, 31, 254, 0, // Skip to: 5450
/* 5196 */    MCD::OPC_CheckPredicate, 3, 250, 0, // Skip to: 5450
/* 5200 */    MCD::OPC_CheckField, 13, 8, 0, 244, 0, // Skip to: 5450
/* 5206 */    MCD::OPC_Decode, 144, 4, 89, // Opcode: MTHLIP
/* 5210 */    MCD::OPC_FilterValue, 59, 236, 0, // Skip to: 5450
/* 5214 */    MCD::OPC_CheckPredicate, 1, 232, 0, // Skip to: 5450
/* 5218 */    MCD::OPC_CheckField, 21, 5, 0, 226, 0, // Skip to: 5450
/* 5224 */    MCD::OPC_CheckField, 6, 5, 0, 220, 0, // Skip to: 5450
/* 5230 */    MCD::OPC_Decode, 245, 4, 90, // Opcode: RDHWR
/* 5234 */    MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 5246
/* 5238 */    MCD::OPC_CheckPredicate, 16, 208, 0, // Skip to: 5450
/* 5242 */    MCD::OPC_Decode, 246, 2, 91, // Opcode: LB
/* 5246 */    MCD::OPC_FilterValue, 33, 8, 0, // Skip to: 5258
/* 5250 */    MCD::OPC_CheckPredicate, 16, 196, 0, // Skip to: 5450
/* 5254 */    MCD::OPC_Decode, 145, 3, 91, // Opcode: LH
/* 5258 */    MCD::OPC_FilterValue, 34, 8, 0, // Skip to: 5270
/* 5262 */    MCD::OPC_CheckPredicate, 16, 184, 0, // Skip to: 5450
/* 5266 */    MCD::OPC_Decode, 180, 3, 91, // Opcode: LWL
/* 5270 */    MCD::OPC_FilterValue, 35, 8, 0, // Skip to: 5282
/* 5274 */    MCD::OPC_CheckPredicate, 16, 172, 0, // Skip to: 5450
/* 5278 */    MCD::OPC_Decode, 175, 3, 91, // Opcode: LW
/* 5282 */    MCD::OPC_FilterValue, 36, 8, 0, // Skip to: 5294
/* 5286 */    MCD::OPC_CheckPredicate, 16, 160, 0, // Skip to: 5450
/* 5290 */    MCD::OPC_Decode, 253, 2, 91, // Opcode: LBu
/* 5294 */    MCD::OPC_FilterValue, 37, 8, 0, // Skip to: 5306
/* 5298 */    MCD::OPC_CheckPredicate, 16, 148, 0, // Skip to: 5450
/* 5302 */    MCD::OPC_Decode, 152, 3, 91, // Opcode: LHu
/* 5306 */    MCD::OPC_FilterValue, 38, 8, 0, // Skip to: 5318
/* 5310 */    MCD::OPC_CheckPredicate, 16, 136, 0, // Skip to: 5450
/* 5314 */    MCD::OPC_Decode, 184, 3, 91, // Opcode: LWR
/* 5318 */    MCD::OPC_FilterValue, 40, 8, 0, // Skip to: 5330
/* 5322 */    MCD::OPC_CheckPredicate, 16, 124, 0, // Skip to: 5450
/* 5326 */    MCD::OPC_Decode, 137, 5, 91, // Opcode: SB
/* 5330 */    MCD::OPC_FilterValue, 41, 8, 0, // Skip to: 5342
/* 5334 */    MCD::OPC_CheckPredicate, 16, 112, 0, // Skip to: 5450
/* 5338 */    MCD::OPC_Decode, 164, 5, 91, // Opcode: SH
/* 5342 */    MCD::OPC_FilterValue, 42, 8, 0, // Skip to: 5354
/* 5346 */    MCD::OPC_CheckPredicate, 16, 100, 0, // Skip to: 5450
/* 5350 */    MCD::OPC_Decode, 252, 5, 91, // Opcode: SWL
/* 5354 */    MCD::OPC_FilterValue, 43, 8, 0, // Skip to: 5366
/* 5358 */    MCD::OPC_CheckPredicate, 16, 88, 0, // Skip to: 5450
/* 5362 */    MCD::OPC_Decode, 247, 5, 91, // Opcode: SW
/* 5366 */    MCD::OPC_FilterValue, 46, 8, 0, // Skip to: 5378
/* 5370 */    MCD::OPC_CheckPredicate, 16, 76, 0, // Skip to: 5450
/* 5374 */    MCD::OPC_Decode, 128, 6, 91, // Opcode: SWR
/* 5378 */    MCD::OPC_FilterValue, 48, 8, 0, // Skip to: 5390
/* 5382 */    MCD::OPC_CheckPredicate, 16, 64, 0, // Skip to: 5450
/* 5386 */    MCD::OPC_Decode, 158, 3, 91, // Opcode: LL
/* 5390 */    MCD::OPC_FilterValue, 49, 8, 0, // Skip to: 5402
/* 5394 */    MCD::OPC_CheckPredicate, 16, 52, 0, // Skip to: 5450
/* 5398 */    MCD::OPC_Decode, 178, 3, 92, // Opcode: LWC1
/* 5402 */    MCD::OPC_FilterValue, 53, 8, 0, // Skip to: 5414
/* 5406 */    MCD::OPC_CheckPredicate, 17, 40, 0, // Skip to: 5450
/* 5410 */    MCD::OPC_Decode, 132, 3, 92, // Opcode: LDC1
/* 5414 */    MCD::OPC_FilterValue, 56, 8, 0, // Skip to: 5426
/* 5418 */    MCD::OPC_CheckPredicate, 16, 28, 0, // Skip to: 5450
/* 5422 */    MCD::OPC_Decode, 143, 5, 91, // Opcode: SC
/* 5426 */    MCD::OPC_FilterValue, 57, 8, 0, // Skip to: 5438
/* 5430 */    MCD::OPC_CheckPredicate, 16, 16, 0, // Skip to: 5450
/* 5434 */    MCD::OPC_Decode, 250, 5, 92, // Opcode: SWC1
/* 5438 */    MCD::OPC_FilterValue, 61, 8, 0, // Skip to: 5450
/* 5442 */    MCD::OPC_CheckPredicate, 17, 4, 0, // Skip to: 5450
/* 5446 */    MCD::OPC_Decode, 148, 5, 92, // Opcode: SDC1
/* 5450 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips6432[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 61, 1, // Skip to: 324
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 20, 14, 0, // Skip to: 28
/* 14 */      MCD::OPC_CheckPredicate, 1, 137, 6, // Skip to: 1691
/* 18 */      MCD::OPC_CheckField, 6, 5, 0, 131, 6, // Skip to: 1691
/* 24 */      MCD::OPC_Decode, 173, 2, 93, // Opcode: DSLLV
/* 28 */      MCD::OPC_FilterValue, 22, 27, 0, // Skip to: 59
/* 32 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 35 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 47
/* 39 */      MCD::OPC_CheckPredicate, 1, 112, 6, // Skip to: 1691
/* 43 */      MCD::OPC_Decode, 179, 2, 93, // Opcode: DSRLV
/* 47 */      MCD::OPC_FilterValue, 1, 104, 6, // Skip to: 1691
/* 51 */      MCD::OPC_CheckPredicate, 18, 100, 6, // Skip to: 1691
/* 55 */      MCD::OPC_Decode, 166, 2, 93, // Opcode: DROTRV
/* 59 */      MCD::OPC_FilterValue, 23, 14, 0, // Skip to: 77
/* 63 */      MCD::OPC_CheckPredicate, 1, 88, 6, // Skip to: 1691
/* 67 */      MCD::OPC_CheckField, 6, 5, 0, 82, 6, // Skip to: 1691
/* 73 */      MCD::OPC_Decode, 176, 2, 93, // Opcode: DSRAV
/* 77 */      MCD::OPC_FilterValue, 28, 14, 0, // Skip to: 95
/* 81 */      MCD::OPC_CheckPredicate, 1, 70, 6, // Skip to: 1691
/* 85 */      MCD::OPC_CheckField, 6, 10, 0, 64, 6, // Skip to: 1691
/* 91 */      MCD::OPC_Decode, 147, 2, 94, // Opcode: DMULT
/* 95 */      MCD::OPC_FilterValue, 29, 14, 0, // Skip to: 113
/* 99 */      MCD::OPC_CheckPredicate, 1, 52, 6, // Skip to: 1691
/* 103 */     MCD::OPC_CheckField, 6, 10, 0, 46, 6, // Skip to: 1691
/* 109 */     MCD::OPC_Decode, 148, 2, 94, // Opcode: DMULTu
/* 113 */     MCD::OPC_FilterValue, 30, 14, 0, // Skip to: 131
/* 117 */     MCD::OPC_CheckPredicate, 1, 34, 6, // Skip to: 1691
/* 121 */     MCD::OPC_CheckField, 6, 10, 0, 28, 6, // Skip to: 1691
/* 127 */     MCD::OPC_Decode, 168, 2, 94, // Opcode: DSDIV
/* 131 */     MCD::OPC_FilterValue, 31, 14, 0, // Skip to: 149
/* 135 */     MCD::OPC_CheckPredicate, 1, 16, 6, // Skip to: 1691
/* 139 */     MCD::OPC_CheckField, 6, 10, 0, 10, 6, // Skip to: 1691
/* 145 */     MCD::OPC_Decode, 181, 2, 94, // Opcode: DUDIV
/* 149 */     MCD::OPC_FilterValue, 44, 14, 0, // Skip to: 167
/* 153 */     MCD::OPC_CheckPredicate, 1, 254, 5, // Skip to: 1691
/* 157 */     MCD::OPC_CheckField, 6, 5, 0, 248, 5, // Skip to: 1691
/* 163 */     MCD::OPC_Decode, 128, 2, 95, // Opcode: DADD
/* 167 */     MCD::OPC_FilterValue, 45, 14, 0, // Skip to: 185
/* 171 */     MCD::OPC_CheckPredicate, 1, 236, 5, // Skip to: 1691
/* 175 */     MCD::OPC_CheckField, 6, 5, 0, 230, 5, // Skip to: 1691
/* 181 */     MCD::OPC_Decode, 131, 2, 95, // Opcode: DADDu
/* 185 */     MCD::OPC_FilterValue, 47, 14, 0, // Skip to: 203
/* 189 */     MCD::OPC_CheckPredicate, 1, 218, 5, // Skip to: 1691
/* 193 */     MCD::OPC_CheckField, 6, 5, 0, 212, 5, // Skip to: 1691
/* 199 */     MCD::OPC_Decode, 180, 2, 95, // Opcode: DSUBu
/* 203 */     MCD::OPC_FilterValue, 56, 14, 0, // Skip to: 221
/* 207 */     MCD::OPC_CheckPredicate, 1, 200, 5, // Skip to: 1691
/* 211 */     MCD::OPC_CheckField, 21, 5, 0, 194, 5, // Skip to: 1691
/* 217 */     MCD::OPC_Decode, 170, 2, 96, // Opcode: DSLL
/* 221 */     MCD::OPC_FilterValue, 58, 27, 0, // Skip to: 252
/* 225 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 228 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 240
/* 232 */     MCD::OPC_CheckPredicate, 1, 175, 5, // Skip to: 1691
/* 236 */     MCD::OPC_Decode, 177, 2, 96, // Opcode: DSRL
/* 240 */     MCD::OPC_FilterValue, 1, 167, 5, // Skip to: 1691
/* 244 */     MCD::OPC_CheckPredicate, 18, 163, 5, // Skip to: 1691
/* 248 */     MCD::OPC_Decode, 165, 2, 96, // Opcode: DROTR
/* 252 */     MCD::OPC_FilterValue, 59, 14, 0, // Skip to: 270
/* 256 */     MCD::OPC_CheckPredicate, 1, 151, 5, // Skip to: 1691
/* 260 */     MCD::OPC_CheckField, 21, 5, 0, 145, 5, // Skip to: 1691
/* 266 */     MCD::OPC_Decode, 174, 2, 96, // Opcode: DSRA
/* 270 */     MCD::OPC_FilterValue, 60, 14, 0, // Skip to: 288
/* 274 */     MCD::OPC_CheckPredicate, 1, 133, 5, // Skip to: 1691
/* 278 */     MCD::OPC_CheckField, 21, 5, 0, 127, 5, // Skip to: 1691
/* 284 */     MCD::OPC_Decode, 171, 2, 96, // Opcode: DSLL32
/* 288 */     MCD::OPC_FilterValue, 62, 14, 0, // Skip to: 306
/* 292 */     MCD::OPC_CheckPredicate, 1, 115, 5, // Skip to: 1691
/* 296 */     MCD::OPC_CheckField, 21, 5, 0, 109, 5, // Skip to: 1691
/* 302 */     MCD::OPC_Decode, 178, 2, 96, // Opcode: DSRL32
/* 306 */     MCD::OPC_FilterValue, 63, 101, 5, // Skip to: 1691
/* 310 */     MCD::OPC_CheckPredicate, 1, 97, 5, // Skip to: 1691
/* 314 */     MCD::OPC_CheckField, 21, 5, 0, 91, 5, // Skip to: 1691
/* 320 */     MCD::OPC_Decode, 175, 2, 96, // Opcode: DSRA32
/* 324 */     MCD::OPC_FilterValue, 16, 39, 0, // Skip to: 367
/* 328 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 331 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 349
/* 335 */     MCD::OPC_CheckPredicate, 1, 72, 5, // Skip to: 1691
/* 339 */     MCD::OPC_CheckField, 3, 8, 0, 66, 5, // Skip to: 1691
/* 345 */     MCD::OPC_Decode, 141, 2, 97, // Opcode: DMFC0_3OP64
/* 349 */     MCD::OPC_FilterValue, 5, 58, 5, // Skip to: 1691
/* 353 */     MCD::OPC_CheckPredicate, 1, 54, 5, // Skip to: 1691
/* 357 */     MCD::OPC_CheckField, 3, 8, 0, 48, 5, // Skip to: 1691
/* 363 */     MCD::OPC_Decode, 144, 2, 98, // Opcode: DMTC0_3OP64
/* 367 */     MCD::OPC_FilterValue, 17, 73, 3, // Skip to: 1212
/* 371 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 374 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 392
/* 378 */     MCD::OPC_CheckPredicate, 19, 29, 5, // Skip to: 1691
/* 382 */     MCD::OPC_CheckField, 21, 5, 17, 23, 5, // Skip to: 1691
/* 388 */     MCD::OPC_Decode, 203, 2, 99, // Opcode: FADD_D64
/* 392 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 410
/* 396 */     MCD::OPC_CheckPredicate, 19, 11, 5, // Skip to: 1691
/* 400 */     MCD::OPC_CheckField, 21, 5, 17, 5, 5, // Skip to: 1691
/* 406 */     MCD::OPC_Decode, 229, 2, 99, // Opcode: FSUB_D64
/* 410 */     MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 428
/* 414 */     MCD::OPC_CheckPredicate, 19, 249, 4, // Skip to: 1691
/* 418 */     MCD::OPC_CheckField, 21, 5, 17, 243, 4, // Skip to: 1691
/* 424 */     MCD::OPC_Decode, 220, 2, 99, // Opcode: FMUL_D64
/* 428 */     MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 446
/* 432 */     MCD::OPC_CheckPredicate, 19, 231, 4, // Skip to: 1691
/* 436 */     MCD::OPC_CheckField, 21, 5, 17, 225, 4, // Skip to: 1691
/* 442 */     MCD::OPC_Decode, 209, 2, 99, // Opcode: FDIV_D64
/* 446 */     MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 465
/* 450 */     MCD::OPC_CheckPredicate, 19, 213, 4, // Skip to: 1691
/* 454 */     MCD::OPC_CheckField, 16, 10, 160, 4, 206, 4, // Skip to: 1691
/* 461 */     MCD::OPC_Decode, 226, 2, 56, // Opcode: FSQRT_D64
/* 465 */     MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 484
/* 469 */     MCD::OPC_CheckPredicate, 4, 194, 4, // Skip to: 1691
/* 473 */     MCD::OPC_CheckField, 16, 10, 160, 4, 187, 4, // Skip to: 1691
/* 480 */     MCD::OPC_Decode, 200, 2, 56, // Opcode: FABS_D64
/* 484 */     MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 503
/* 488 */     MCD::OPC_CheckPredicate, 19, 175, 4, // Skip to: 1691
/* 492 */     MCD::OPC_CheckField, 16, 10, 160, 4, 168, 4, // Skip to: 1691
/* 499 */     MCD::OPC_Decode, 217, 2, 56, // Opcode: FMOV_D64
/* 503 */     MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 522
/* 507 */     MCD::OPC_CheckPredicate, 4, 156, 4, // Skip to: 1691
/* 511 */     MCD::OPC_CheckField, 16, 10, 160, 4, 149, 4, // Skip to: 1691
/* 518 */     MCD::OPC_Decode, 223, 2, 56, // Opcode: FNEG_D64
/* 522 */     MCD::OPC_FilterValue, 8, 29, 0, // Skip to: 555
/* 526 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 529 */     MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 542
/* 534 */     MCD::OPC_CheckPredicate, 19, 129, 4, // Skip to: 1691
/* 538 */     MCD::OPC_Decode, 129, 5, 49, // Opcode: ROUND_L_S
/* 542 */     MCD::OPC_FilterValue, 160, 4, 120, 4, // Skip to: 1691
/* 547 */     MCD::OPC_CheckPredicate, 19, 116, 4, // Skip to: 1691
/* 551 */     MCD::OPC_Decode, 128, 5, 56, // Opcode: ROUND_L_D64
/* 555 */     MCD::OPC_FilterValue, 9, 29, 0, // Skip to: 588
/* 559 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 562 */     MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 575
/* 567 */     MCD::OPC_CheckPredicate, 19, 96, 4, // Skip to: 1691
/* 571 */     MCD::OPC_Decode, 183, 6, 49, // Opcode: TRUNC_L_S
/* 575 */     MCD::OPC_FilterValue, 160, 4, 87, 4, // Skip to: 1691
/* 580 */     MCD::OPC_CheckPredicate, 19, 83, 4, // Skip to: 1691
/* 584 */     MCD::OPC_Decode, 182, 6, 56, // Opcode: TRUNC_L_D64
/* 588 */     MCD::OPC_FilterValue, 10, 29, 0, // Skip to: 621
/* 592 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 595 */     MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 608
/* 600 */     MCD::OPC_CheckPredicate, 19, 63, 4, // Skip to: 1691
/* 604 */     MCD::OPC_Decode, 170, 1, 49, // Opcode: CEIL_L_S
/* 608 */     MCD::OPC_FilterValue, 160, 4, 54, 4, // Skip to: 1691
/* 613 */     MCD::OPC_CheckPredicate, 19, 50, 4, // Skip to: 1691
/* 617 */     MCD::OPC_Decode, 169, 1, 56, // Opcode: CEIL_L_D64
/* 621 */     MCD::OPC_FilterValue, 11, 29, 0, // Skip to: 654
/* 625 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 628 */     MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 641
/* 633 */     MCD::OPC_CheckPredicate, 19, 30, 4, // Skip to: 1691
/* 637 */     MCD::OPC_Decode, 212, 2, 49, // Opcode: FLOOR_L_S
/* 641 */     MCD::OPC_FilterValue, 160, 4, 21, 4, // Skip to: 1691
/* 646 */     MCD::OPC_CheckPredicate, 19, 17, 4, // Skip to: 1691
/* 650 */     MCD::OPC_Decode, 211, 2, 56, // Opcode: FLOOR_L_D64
/* 654 */     MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 673
/* 658 */     MCD::OPC_CheckPredicate, 19, 5, 4, // Skip to: 1691
/* 662 */     MCD::OPC_CheckField, 16, 10, 160, 4, 254, 3, // Skip to: 1691
/* 669 */     MCD::OPC_Decode, 131, 5, 100, // Opcode: ROUND_W_D64
/* 673 */     MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 692
/* 677 */     MCD::OPC_CheckPredicate, 19, 242, 3, // Skip to: 1691
/* 681 */     MCD::OPC_CheckField, 16, 10, 160, 4, 235, 3, // Skip to: 1691
/* 688 */     MCD::OPC_Decode, 185, 6, 100, // Opcode: TRUNC_W_D64
/* 692 */     MCD::OPC_FilterValue, 14, 15, 0, // Skip to: 711
/* 696 */     MCD::OPC_CheckPredicate, 19, 223, 3, // Skip to: 1691
/* 700 */     MCD::OPC_CheckField, 16, 10, 160, 4, 216, 3, // Skip to: 1691
/* 707 */     MCD::OPC_Decode, 172, 1, 100, // Opcode: CEIL_W_D64
/* 711 */     MCD::OPC_FilterValue, 15, 15, 0, // Skip to: 730
/* 715 */     MCD::OPC_CheckPredicate, 19, 204, 3, // Skip to: 1691
/* 719 */     MCD::OPC_CheckField, 16, 10, 160, 4, 197, 3, // Skip to: 1691
/* 726 */     MCD::OPC_Decode, 214, 2, 100, // Opcode: FLOOR_W_D64
/* 730 */     MCD::OPC_FilterValue, 32, 29, 0, // Skip to: 763
/* 734 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 737 */     MCD::OPC_FilterValue, 160, 4, 8, 0, // Skip to: 750
/* 742 */     MCD::OPC_CheckPredicate, 19, 177, 3, // Skip to: 1691
/* 746 */     MCD::OPC_Decode, 198, 1, 100, // Opcode: CVT_S_D64
/* 750 */     MCD::OPC_FilterValue, 160, 5, 168, 3, // Skip to: 1691
/* 755 */     MCD::OPC_CheckPredicate, 19, 164, 3, // Skip to: 1691
/* 759 */     MCD::OPC_Decode, 199, 1, 100, // Opcode: CVT_S_L
/* 763 */     MCD::OPC_FilterValue, 33, 42, 0, // Skip to: 809
/* 767 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 770 */     MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 783
/* 775 */     MCD::OPC_CheckPredicate, 19, 144, 3, // Skip to: 1691
/* 779 */     MCD::OPC_Decode, 193, 1, 49, // Opcode: CVT_D64_S
/* 783 */     MCD::OPC_FilterValue, 128, 5, 8, 0, // Skip to: 796
/* 788 */     MCD::OPC_CheckPredicate, 19, 131, 3, // Skip to: 1691
/* 792 */     MCD::OPC_Decode, 194, 1, 49, // Opcode: CVT_D64_W
/* 796 */     MCD::OPC_FilterValue, 160, 5, 122, 3, // Skip to: 1691
/* 801 */     MCD::OPC_CheckPredicate, 19, 118, 3, // Skip to: 1691
/* 805 */     MCD::OPC_Decode, 192, 1, 56, // Opcode: CVT_D64_L
/* 809 */     MCD::OPC_FilterValue, 36, 15, 0, // Skip to: 828
/* 813 */     MCD::OPC_CheckPredicate, 19, 106, 3, // Skip to: 1691
/* 817 */     MCD::OPC_CheckField, 16, 10, 160, 4, 99, 3, // Skip to: 1691
/* 824 */     MCD::OPC_Decode, 202, 1, 100, // Opcode: CVT_W_D64
/* 828 */     MCD::OPC_FilterValue, 48, 20, 0, // Skip to: 852
/* 832 */     MCD::OPC_CheckPredicate, 19, 87, 3, // Skip to: 1691
/* 836 */     MCD::OPC_CheckField, 21, 5, 17, 81, 3, // Skip to: 1691
/* 842 */     MCD::OPC_CheckField, 6, 5, 0, 75, 3, // Skip to: 1691
/* 848 */     MCD::OPC_Decode, 208, 1, 101, // Opcode: C_F_D64
/* 852 */     MCD::OPC_FilterValue, 49, 20, 0, // Skip to: 876
/* 856 */     MCD::OPC_CheckPredicate, 19, 63, 3, // Skip to: 1691
/* 860 */     MCD::OPC_CheckField, 21, 5, 17, 57, 3, // Skip to: 1691
/* 866 */     MCD::OPC_CheckField, 6, 5, 0, 51, 3, // Skip to: 1691
/* 872 */     MCD::OPC_Decode, 250, 1, 101, // Opcode: C_UN_D64
/* 876 */     MCD::OPC_FilterValue, 50, 20, 0, // Skip to: 900
/* 880 */     MCD::OPC_CheckPredicate, 19, 39, 3, // Skip to: 1691
/* 884 */     MCD::OPC_CheckField, 21, 5, 17, 33, 3, // Skip to: 1691
/* 890 */     MCD::OPC_CheckField, 6, 5, 0, 27, 3, // Skip to: 1691
/* 896 */     MCD::OPC_Decode, 205, 1, 101, // Opcode: C_EQ_D64
/* 900 */     MCD::OPC_FilterValue, 51, 20, 0, // Skip to: 924
/* 904 */     MCD::OPC_CheckPredicate, 19, 15, 3, // Skip to: 1691
/* 908 */     MCD::OPC_CheckField, 21, 5, 17, 9, 3, // Skip to: 1691
/* 914 */     MCD::OPC_CheckField, 6, 5, 0, 3, 3, // Skip to: 1691
/* 920 */     MCD::OPC_Decode, 241, 1, 101, // Opcode: C_UEQ_D64
/* 924 */     MCD::OPC_FilterValue, 52, 20, 0, // Skip to: 948
/* 928 */     MCD::OPC_CheckPredicate, 19, 247, 2, // Skip to: 1691
/* 932 */     MCD::OPC_CheckField, 21, 5, 17, 241, 2, // Skip to: 1691
/* 938 */     MCD::OPC_CheckField, 6, 5, 0, 235, 2, // Skip to: 1691
/* 944 */     MCD::OPC_Decode, 232, 1, 101, // Opcode: C_OLT_D64
/* 948 */     MCD::OPC_FilterValue, 53, 20, 0, // Skip to: 972
/* 952 */     MCD::OPC_CheckPredicate, 19, 223, 2, // Skip to: 1691
/* 956 */     MCD::OPC_CheckField, 21, 5, 17, 217, 2, // Skip to: 1691
/* 962 */     MCD::OPC_CheckField, 6, 5, 0, 211, 2, // Skip to: 1691
/* 968 */     MCD::OPC_Decode, 247, 1, 101, // Opcode: C_ULT_D64
/* 972 */     MCD::OPC_FilterValue, 54, 20, 0, // Skip to: 996
/* 976 */     MCD::OPC_CheckPredicate, 19, 199, 2, // Skip to: 1691
/* 980 */     MCD::OPC_CheckField, 21, 5, 17, 193, 2, // Skip to: 1691
/* 986 */     MCD::OPC_CheckField, 6, 5, 0, 187, 2, // Skip to: 1691
/* 992 */     MCD::OPC_Decode, 229, 1, 101, // Opcode: C_OLE_D64
/* 996 */     MCD::OPC_FilterValue, 55, 20, 0, // Skip to: 1020
/* 1000 */    MCD::OPC_CheckPredicate, 19, 175, 2, // Skip to: 1691
/* 1004 */    MCD::OPC_CheckField, 21, 5, 17, 169, 2, // Skip to: 1691
/* 1010 */    MCD::OPC_CheckField, 6, 5, 0, 163, 2, // Skip to: 1691
/* 1016 */    MCD::OPC_Decode, 244, 1, 101, // Opcode: C_ULE_D64
/* 1020 */    MCD::OPC_FilterValue, 56, 20, 0, // Skip to: 1044
/* 1024 */    MCD::OPC_CheckPredicate, 19, 151, 2, // Skip to: 1691
/* 1028 */    MCD::OPC_CheckField, 21, 5, 17, 145, 2, // Skip to: 1691
/* 1034 */    MCD::OPC_CheckField, 6, 5, 0, 139, 2, // Skip to: 1691
/* 1040 */    MCD::OPC_Decode, 238, 1, 101, // Opcode: C_SF_D64
/* 1044 */    MCD::OPC_FilterValue, 57, 20, 0, // Skip to: 1068
/* 1048 */    MCD::OPC_CheckPredicate, 19, 127, 2, // Skip to: 1691
/* 1052 */    MCD::OPC_CheckField, 21, 5, 17, 121, 2, // Skip to: 1691
/* 1058 */    MCD::OPC_CheckField, 6, 5, 0, 115, 2, // Skip to: 1691
/* 1064 */    MCD::OPC_Decode, 220, 1, 101, // Opcode: C_NGLE_D64
/* 1068 */    MCD::OPC_FilterValue, 58, 20, 0, // Skip to: 1092
/* 1072 */    MCD::OPC_CheckPredicate, 19, 103, 2, // Skip to: 1691
/* 1076 */    MCD::OPC_CheckField, 21, 5, 17, 97, 2, // Skip to: 1691
/* 1082 */    MCD::OPC_CheckField, 6, 5, 0, 91, 2, // Skip to: 1691
/* 1088 */    MCD::OPC_Decode, 235, 1, 101, // Opcode: C_SEQ_D64
/* 1092 */    MCD::OPC_FilterValue, 59, 20, 0, // Skip to: 1116
/* 1096 */    MCD::OPC_CheckPredicate, 19, 79, 2, // Skip to: 1691
/* 1100 */    MCD::OPC_CheckField, 21, 5, 17, 73, 2, // Skip to: 1691
/* 1106 */    MCD::OPC_CheckField, 6, 5, 0, 67, 2, // Skip to: 1691
/* 1112 */    MCD::OPC_Decode, 223, 1, 101, // Opcode: C_NGL_D64
/* 1116 */    MCD::OPC_FilterValue, 60, 20, 0, // Skip to: 1140
/* 1120 */    MCD::OPC_CheckPredicate, 19, 55, 2, // Skip to: 1691
/* 1124 */    MCD::OPC_CheckField, 21, 5, 17, 49, 2, // Skip to: 1691
/* 1130 */    MCD::OPC_CheckField, 6, 5, 0, 43, 2, // Skip to: 1691
/* 1136 */    MCD::OPC_Decode, 214, 1, 101, // Opcode: C_LT_D64
/* 1140 */    MCD::OPC_FilterValue, 61, 20, 0, // Skip to: 1164
/* 1144 */    MCD::OPC_CheckPredicate, 19, 31, 2, // Skip to: 1691
/* 1148 */    MCD::OPC_CheckField, 21, 5, 17, 25, 2, // Skip to: 1691
/* 1154 */    MCD::OPC_CheckField, 6, 5, 0, 19, 2, // Skip to: 1691
/* 1160 */    MCD::OPC_Decode, 217, 1, 101, // Opcode: C_NGE_D64
/* 1164 */    MCD::OPC_FilterValue, 62, 20, 0, // Skip to: 1188
/* 1168 */    MCD::OPC_CheckPredicate, 19, 7, 2, // Skip to: 1691
/* 1172 */    MCD::OPC_CheckField, 21, 5, 17, 1, 2, // Skip to: 1691
/* 1178 */    MCD::OPC_CheckField, 6, 5, 0, 251, 1, // Skip to: 1691
/* 1184 */    MCD::OPC_Decode, 211, 1, 101, // Opcode: C_LE_D64
/* 1188 */    MCD::OPC_FilterValue, 63, 243, 1, // Skip to: 1691
/* 1192 */    MCD::OPC_CheckPredicate, 19, 239, 1, // Skip to: 1691
/* 1196 */    MCD::OPC_CheckField, 21, 5, 17, 233, 1, // Skip to: 1691
/* 1202 */    MCD::OPC_CheckField, 6, 5, 0, 227, 1, // Skip to: 1691
/* 1208 */    MCD::OPC_Decode, 226, 1, 101, // Opcode: C_NGT_D64
/* 1212 */    MCD::OPC_FilterValue, 18, 39, 0, // Skip to: 1255
/* 1216 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1219 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1237
/* 1223 */    MCD::OPC_CheckPredicate, 1, 208, 1, // Skip to: 1691
/* 1227 */    MCD::OPC_CheckField, 3, 8, 0, 202, 1, // Skip to: 1691
/* 1233 */    MCD::OPC_Decode, 143, 2, 97, // Opcode: DMFC2_3OP64
/* 1237 */    MCD::OPC_FilterValue, 5, 194, 1, // Skip to: 1691
/* 1241 */    MCD::OPC_CheckPredicate, 1, 190, 1, // Skip to: 1691
/* 1245 */    MCD::OPC_CheckField, 3, 8, 0, 184, 1, // Skip to: 1691
/* 1251 */    MCD::OPC_Decode, 146, 2, 98, // Opcode: DMTC2_3OP64
/* 1255 */    MCD::OPC_FilterValue, 19, 75, 0, // Skip to: 1334
/* 1259 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1262 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1280
/* 1266 */    MCD::OPC_CheckPredicate, 20, 165, 1, // Skip to: 1691
/* 1270 */    MCD::OPC_CheckField, 11, 5, 0, 159, 1, // Skip to: 1691
/* 1276 */    MCD::OPC_Decode, 140, 3, 102, // Opcode: LDXC164
/* 1280 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 1298
/* 1284 */    MCD::OPC_CheckPredicate, 21, 147, 1, // Skip to: 1691
/* 1288 */    MCD::OPC_CheckField, 11, 5, 0, 141, 1, // Skip to: 1691
/* 1294 */    MCD::OPC_Decode, 171, 3, 102, // Opcode: LUXC164
/* 1298 */    MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 1316
/* 1302 */    MCD::OPC_CheckPredicate, 20, 129, 1, // Skip to: 1691
/* 1306 */    MCD::OPC_CheckField, 6, 5, 0, 123, 1, // Skip to: 1691
/* 1312 */    MCD::OPC_Decode, 157, 5, 103, // Opcode: SDXC164
/* 1316 */    MCD::OPC_FilterValue, 13, 115, 1, // Skip to: 1691
/* 1320 */    MCD::OPC_CheckPredicate, 21, 111, 1, // Skip to: 1691
/* 1324 */    MCD::OPC_CheckField, 6, 5, 0, 105, 1, // Skip to: 1691
/* 1330 */    MCD::OPC_Decode, 246, 5, 103, // Opcode: SUXC164
/* 1334 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 1346
/* 1338 */    MCD::OPC_CheckPredicate, 1, 93, 1, // Skip to: 1691
/* 1342 */    MCD::OPC_Decode, 129, 2, 104, // Opcode: DADDi
/* 1346 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 1358
/* 1350 */    MCD::OPC_CheckPredicate, 1, 81, 1, // Skip to: 1691
/* 1354 */    MCD::OPC_Decode, 130, 2, 104, // Opcode: DADDiu
/* 1358 */    MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 1370
/* 1362 */    MCD::OPC_CheckPredicate, 16, 69, 1, // Skip to: 1691
/* 1366 */    MCD::OPC_Decode, 135, 3, 91, // Opcode: LDL
/* 1370 */    MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 1382
/* 1374 */    MCD::OPC_CheckPredicate, 16, 57, 1, // Skip to: 1691
/* 1378 */    MCD::OPC_Decode, 137, 3, 91, // Opcode: LDR
/* 1382 */    MCD::OPC_FilterValue, 28, 27, 0, // Skip to: 1413
/* 1386 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 1389 */    MCD::OPC_FilterValue, 36, 8, 0, // Skip to: 1401
/* 1393 */    MCD::OPC_CheckPredicate, 12, 38, 1, // Skip to: 1691
/* 1397 */    MCD::OPC_Decode, 133, 2, 105, // Opcode: DCLZ
/* 1401 */    MCD::OPC_FilterValue, 37, 30, 1, // Skip to: 1691
/* 1405 */    MCD::OPC_CheckPredicate, 12, 26, 1, // Skip to: 1691
/* 1409 */    MCD::OPC_Decode, 132, 2, 105, // Opcode: DCLO
/* 1413 */    MCD::OPC_FilterValue, 31, 118, 0, // Skip to: 1535
/* 1417 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1420 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1432
/* 1424 */    MCD::OPC_CheckPredicate, 2, 7, 1, // Skip to: 1691
/* 1428 */    MCD::OPC_Decode, 136, 2, 106, // Opcode: DEXTM
/* 1432 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1444
/* 1436 */    MCD::OPC_CheckPredicate, 2, 251, 0, // Skip to: 1691
/* 1440 */    MCD::OPC_Decode, 137, 2, 106, // Opcode: DEXTU
/* 1444 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1456
/* 1448 */    MCD::OPC_CheckPredicate, 2, 239, 0, // Skip to: 1691
/* 1452 */    MCD::OPC_Decode, 135, 2, 106, // Opcode: DEXT
/* 1456 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1468
/* 1460 */    MCD::OPC_CheckPredicate, 2, 227, 0, // Skip to: 1691
/* 1464 */    MCD::OPC_Decode, 139, 2, 107, // Opcode: DINSM
/* 1468 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1480
/* 1472 */    MCD::OPC_CheckPredicate, 2, 215, 0, // Skip to: 1691
/* 1476 */    MCD::OPC_Decode, 140, 2, 107, // Opcode: DINSU
/* 1480 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1492
/* 1484 */    MCD::OPC_CheckPredicate, 2, 203, 0, // Skip to: 1691
/* 1488 */    MCD::OPC_Decode, 138, 2, 107, // Opcode: DINS
/* 1492 */    MCD::OPC_FilterValue, 36, 195, 0, // Skip to: 1691
/* 1496 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1499 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 1517
/* 1503 */    MCD::OPC_CheckPredicate, 14, 184, 0, // Skip to: 1691
/* 1507 */    MCD::OPC_CheckField, 21, 5, 0, 178, 0, // Skip to: 1691
/* 1513 */    MCD::OPC_Decode, 167, 2, 108, // Opcode: DSBH
/* 1517 */    MCD::OPC_FilterValue, 5, 170, 0, // Skip to: 1691
/* 1521 */    MCD::OPC_CheckPredicate, 14, 166, 0, // Skip to: 1691
/* 1525 */    MCD::OPC_CheckField, 21, 5, 0, 160, 0, // Skip to: 1691
/* 1531 */    MCD::OPC_Decode, 169, 2, 108, // Opcode: DSHD
/* 1535 */    MCD::OPC_FilterValue, 39, 8, 0, // Skip to: 1547
/* 1539 */    MCD::OPC_CheckPredicate, 16, 148, 0, // Skip to: 1691
/* 1543 */    MCD::OPC_Decode, 194, 3, 91, // Opcode: LWu
/* 1547 */    MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 1559
/* 1551 */    MCD::OPC_CheckPredicate, 16, 136, 0, // Skip to: 1691
/* 1555 */    MCD::OPC_Decode, 152, 5, 91, // Opcode: SDL
/* 1559 */    MCD::OPC_FilterValue, 45, 8, 0, // Skip to: 1571
/* 1563 */    MCD::OPC_CheckPredicate, 16, 124, 0, // Skip to: 1691
/* 1567 */    MCD::OPC_Decode, 154, 5, 91, // Opcode: SDR
/* 1571 */    MCD::OPC_FilterValue, 48, 8, 0, // Skip to: 1583
/* 1575 */    MCD::OPC_CheckPredicate, 22, 112, 0, // Skip to: 1691
/* 1579 */    MCD::OPC_Decode, 161, 3, 91, // Opcode: LL_P8
/* 1583 */    MCD::OPC_FilterValue, 49, 8, 0, // Skip to: 1595
/* 1587 */    MCD::OPC_CheckPredicate, 22, 100, 0, // Skip to: 1691
/* 1591 */    MCD::OPC_Decode, 179, 3, 92, // Opcode: LWC1_P8
/* 1595 */    MCD::OPC_FilterValue, 52, 8, 0, // Skip to: 1607
/* 1599 */    MCD::OPC_CheckPredicate, 16, 88, 0, // Skip to: 1691
/* 1603 */    MCD::OPC_Decode, 159, 3, 91, // Opcode: LLD
/* 1607 */    MCD::OPC_FilterValue, 53, 8, 0, // Skip to: 1619
/* 1611 */    MCD::OPC_CheckPredicate, 23, 76, 0, // Skip to: 1691
/* 1615 */    MCD::OPC_Decode, 133, 3, 92, // Opcode: LDC164
/* 1619 */    MCD::OPC_FilterValue, 55, 8, 0, // Skip to: 1631
/* 1623 */    MCD::OPC_CheckPredicate, 16, 64, 0, // Skip to: 1691
/* 1627 */    MCD::OPC_Decode, 131, 3, 91, // Opcode: LD
/* 1631 */    MCD::OPC_FilterValue, 56, 8, 0, // Skip to: 1643
/* 1635 */    MCD::OPC_CheckPredicate, 22, 52, 0, // Skip to: 1691
/* 1639 */    MCD::OPC_Decode, 146, 5, 91, // Opcode: SC_P8
/* 1643 */    MCD::OPC_FilterValue, 57, 8, 0, // Skip to: 1655
/* 1647 */    MCD::OPC_CheckPredicate, 22, 40, 0, // Skip to: 1691
/* 1651 */    MCD::OPC_Decode, 251, 5, 92, // Opcode: SWC1_P8
/* 1655 */    MCD::OPC_FilterValue, 60, 8, 0, // Skip to: 1667
/* 1659 */    MCD::OPC_CheckPredicate, 16, 28, 0, // Skip to: 1691
/* 1663 */    MCD::OPC_Decode, 144, 5, 91, // Opcode: SCD
/* 1667 */    MCD::OPC_FilterValue, 61, 8, 0, // Skip to: 1679
/* 1671 */    MCD::OPC_CheckPredicate, 23, 16, 0, // Skip to: 1691
/* 1675 */    MCD::OPC_Decode, 149, 5, 92, // Opcode: SDC164
/* 1679 */    MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 1691
/* 1683 */    MCD::OPC_CheckPredicate, 16, 4, 0, // Skip to: 1691
/* 1687 */    MCD::OPC_Decode, 147, 5, 91, // Opcode: SD
/* 1691 */    MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, uint64_t Bits) {
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return ((Bits & Mips::FeatureMips16));
  case 1:
    return (!(Bits & Mips::FeatureMips16));
  case 2:
    return ((Bits & Mips::FeatureMips32r2) && !(Bits & Mips::FeatureMips16));
  case 3:
    return ((Bits & Mips::FeatureDSP));
  case 4:
    return ((Bits & Mips::FeatureMips32) && !(Bits & Mips::FeatureMips16));
  case 5:
    return (!(Bits & Mips::FeatureFP64Bit) && !(Bits & Mips::FeatureMips16));
  case 6:
    return ((Bits & Mips::FeatureFPIdx) && !(Bits & Mips::FeatureMips16));
  case 7:
    return ((Bits & Mips::FeatureMips32r2) && !(Bits & Mips::FeatureMips64) && !(Bits & Mips::FeatureMips16));
  case 8:
    return (!(Bits & Mips::FeatureMips64) && !(Bits & Mips::FeatureMips16));
  case 9:
    return ((Bits & Mips::FeatureMips32r2) && !(Bits & Mips::FeatureFP64Bit) && !(Bits & Mips::FeatureMips16));
  case 10:
    return ((Bits & Mips::FeatureMips32r2) && (Bits & Mips::FeatureMips32) && !(Bits & Mips::FeatureMips16));
  case 11:
    return ((Bits & Mips::FeatureMips32r2) && !(Bits & Mips::FeatureFP64Bit) && (Bits & Mips::FeatureMips32) && !(Bits & Mips::FeatureMips16));
  case 12:
    return ((Bits & Mips::FeatureBitCount) && !(Bits & Mips::FeatureMips16));
  case 13:
    return ((Bits & Mips::FeatureDSPR2));
  case 14:
    return ((Bits & Mips::FeatureSwap) && !(Bits & Mips::FeatureMips16));
  case 15:
    return ((Bits & Mips::FeatureSEInReg) && !(Bits & Mips::FeatureMips16));
  case 16:
    return (!(Bits & Mips::FeatureN64) && !(Bits & Mips::FeatureMips16));
  case 17:
    return (!(Bits & Mips::FeatureN64) && !(Bits & Mips::FeatureMips64) && !(Bits & Mips::FeatureMips16));
  case 18:
    return ((Bits & Mips::FeatureMips64r2) && !(Bits & Mips::FeatureMips16));
  case 19:
    return ((Bits & Mips::FeatureFP64Bit) && !(Bits & Mips::FeatureMips16));
  case 20:
    return ((Bits & Mips::FeatureMips64) && !(Bits & Mips::FeatureN64) && !(Bits & Mips::FeatureMips16));
  case 21:
    return ((Bits & Mips::FeatureMips64) && !(Bits & Mips::FeatureMips16));
  case 22:
    return ((Bits & Mips::FeatureN64) && !(Bits & Mips::FeatureMips16));
  case 23:
    return (!(Bits & Mips::FeatureN64) && (Bits & Mips::FeatureMips64) && !(Bits & Mips::FeatureMips16));
  }
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder) {
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 2:
    return S;
  case 3:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 3, 2) << 3);
    tmp |= (fieldFromInstruction(insn, 5, 3) << 0);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 2, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 8:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 0, 5) << 0);
    tmp |= (fieldFromInstruction(insn, 16, 5) << 11);
    tmp |= (fieldFromInstruction(insn, 21, 6) << 5);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 6, 20);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 6, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 2);
    if (DecodeHIRegsDSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeHIRegsDSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 2);
    if (DecodeLORegsDSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeLORegsDSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACRegsDSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 26:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 30:
    if (DecodeJumpTarget(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 33:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 40:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 46:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 55:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 60:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 61:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 62:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 63:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 64:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACRegsDSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACRegsDSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 65:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 11, 5) << 0);
    tmp |= (fieldFromInstruction(insn, 16, 5) << 0);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 66:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeExtSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 67:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 68:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 69:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 70:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 71:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 72:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 73:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 74:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 75:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 76:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 77:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 78:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 79:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 80:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 81:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 82:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 83:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 84:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACRegsDSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 85:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACRegsDSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 86:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 87:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 88:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACRegsDSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 6);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACRegsDSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 89:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACRegsDSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACRegsDSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 90:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeHWRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 91:
    if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 92:
    if (DecodeFMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 93:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 94:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 95:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 96:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 97:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 98:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 99:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 100:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 101:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 102:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 103:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 104:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 105:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 11, 5) << 0);
    tmp |= (fieldFromInstruction(insn, 16, 5) << 0);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 106:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeExtSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 107:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 108:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  }
}

template<typename InsnType>
static DecodeStatus decodeInstruction(const uint8_t DecodeTable[], MCInst &MI,
                                      InsnType insn, uint64_t Address,
                                      const void *DisAsm,
                                      const MCSubtargetInfo &STI) {
  uint64_t Bits = STI.getFeatureBits();

  const uint8_t *Ptr = DecodeTable;
  uint32_t CurFieldValue = 0;
  DecodeStatus S = MCDisassembler::Success;
  for (;;) {
    ptrdiff_t Loc = Ptr - DecodeTable;
    switch (*Ptr) {
    default:
      errs() << Loc << ": Unexpected decode table opcode!\n";
      return MCDisassembler::Fail;
    case MCD::OPC_ExtractField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      ++Ptr;
      CurFieldValue = fieldFromInstruction(insn, Start, Len);
      DEBUG(dbgs() << Loc << ": OPC_ExtractField(" << Start << ", "
                   << Len << "): " << CurFieldValue << "\n");
      break;
    }
    case MCD::OPC_FilterValue: {
      // Decode the field value.
      unsigned Len;
      InsnType Val = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // Perform the filter operation.
      if (Val != CurFieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_FilterValue(" << Val << ", " << NumToSkip
                   << "): " << ((Val != CurFieldValue) ? "FAIL:" : "PASS:")
                   << " continuing at " << (Ptr - DecodeTable) << "\n");

      break;
    }
    case MCD::OPC_CheckField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      InsnType FieldValue = fieldFromInstruction(insn, Start, Len);
      // Decode the field value.
      uint32_t ExpectedValue = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // If the actual and expected values don't match, skip.
      if (ExpectedValue != FieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_CheckField(" << Start << ", "
                   << Len << ", " << ExpectedValue << ", " << NumToSkip
                   << "): FieldValue = " << FieldValue << ", ExpectedValue = "
                   << ExpectedValue << ": "
                   << ((ExpectedValue == FieldValue) ? "PASS\n" : "FAIL\n"));
      break;
    }
    case MCD::OPC_CheckPredicate: {
      unsigned Len;
      // Decode the Predicate Index value.
      unsigned PIdx = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      // Check the predicate.
      bool Pred;
      if (!(Pred = checkDecoderPredicate(PIdx, Bits)))
        Ptr += NumToSkip;
      (void)Pred;
      DEBUG(dbgs() << Loc << ": OPC_CheckPredicate(" << PIdx << "): "
            << (Pred ? "PASS\n" : "FAIL\n"));

      break;
    }
    case MCD::OPC_Decode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      DEBUG(dbgs() << Loc << ": OPC_Decode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << "\n" );
      DEBUG(dbgs() << "----- DECODE SUCCESSFUL -----\n");

      MI.setOpcode(Opc);
      return decodeToMCInst(S, DecodeIdx, insn, MI, Address, DisAsm);
    }
    case MCD::OPC_SoftFail: {
      // Decode the mask values.
      unsigned Len;
      InsnType PositiveMask = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      InsnType NegativeMask = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      bool Fail = (insn & PositiveMask) || (~insn & NegativeMask);
      if (Fail)
        S = MCDisassembler::SoftFail;
      DEBUG(dbgs() << Loc << ": OPC_SoftFail: " << (Fail ? "FAIL\n":"PASS\n"));
      break;
    }
    case MCD::OPC_Fail: {
      DEBUG(dbgs() << Loc << ": OPC_Fail\n");
      return MCDisassembler::Fail;
    }
    }
  }
  llvm_unreachable("bogosity detected in disassembler state machine!");
}


} // End llvm namespace
