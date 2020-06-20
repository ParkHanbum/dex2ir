/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* * SystemZ Disassembler                                                     *|
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
/* 0 */       MCD::OPC_ExtractField, 8, 8,  // Inst{15-8} ...
/* 3 */       MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 17
/* 7 */       MCD::OPC_CheckField, 4, 4, 15, 122, 0, // Skip to: 135
/* 13 */      MCD::OPC_Decode, 183, 2, 0, // Opcode: BR
/* 17 */      MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 25
/* 21 */      MCD::OPC_Decode, 135, 1, 1, // Opcode: AsmBASR
/* 25 */      MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 33
/* 29 */      MCD::OPC_Decode, 143, 4, 2, // Opcode: LTR
/* 33 */      MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 41
/* 37 */      MCD::OPC_Decode, 193, 3, 2, // Opcode: LCR
/* 41 */      MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 49
/* 45 */      MCD::OPC_Decode, 210, 4, 3, // Opcode: NR
/* 49 */      MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 57
/* 53 */      MCD::OPC_Decode, 242, 2, 2, // Opcode: CLR
/* 57 */      MCD::OPC_FilterValue, 22, 4, 0, // Skip to: 65
/* 61 */      MCD::OPC_Decode, 228, 4, 3, // Opcode: OR
/* 65 */      MCD::OPC_FilterValue, 23, 4, 0, // Skip to: 73
/* 69 */      MCD::OPC_Decode, 203, 5, 3, // Opcode: XR
/* 73 */      MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 81
/* 77 */      MCD::OPC_Decode, 128, 4, 2, // Opcode: LR
/* 81 */      MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 89
/* 85 */      MCD::OPC_Decode, 249, 2, 2, // Opcode: CR
/* 89 */      MCD::OPC_FilterValue, 26, 3, 0, // Skip to: 96
/* 93 */      MCD::OPC_Decode, 57, 3, // Opcode: AR
/* 96 */      MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 104
/* 100 */     MCD::OPC_Decode, 149, 5, 3, // Opcode: SR
/* 104 */     MCD::OPC_FilterValue, 30, 3, 0, // Skip to: 111
/* 108 */     MCD::OPC_Decode, 54, 3, // Opcode: ALR
/* 111 */     MCD::OPC_FilterValue, 31, 4, 0, // Skip to: 119
/* 115 */     MCD::OPC_Decode, 141, 5, 3, // Opcode: SLR
/* 119 */     MCD::OPC_FilterValue, 40, 4, 0, // Skip to: 127
/* 123 */     MCD::OPC_Decode, 199, 3, 4, // Opcode: LDR
/* 127 */     MCD::OPC_FilterValue, 56, 4, 0, // Skip to: 135
/* 131 */     MCD::OPC_Decode, 204, 3, 5, // Opcode: LER
/* 135 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD::OPC_ExtractField, 24, 8,  // Inst{31-24} ...
/* 3 */       MCD::OPC_FilterValue, 64, 4, 0, // Skip to: 11
/* 7 */       MCD::OPC_Decode, 171, 5, 6, // Opcode: STH
/* 11 */      MCD::OPC_FilterValue, 65, 4, 0, // Skip to: 19
/* 15 */      MCD::OPC_Decode, 184, 3, 6, // Opcode: LA
/* 19 */      MCD::OPC_FilterValue, 66, 4, 0, // Skip to: 27
/* 23 */      MCD::OPC_Decode, 161, 5, 6, // Opcode: STC
/* 27 */      MCD::OPC_FilterValue, 67, 4, 0, // Skip to: 35
/* 31 */      MCD::OPC_Decode, 167, 3, 7, // Opcode: IC
/* 35 */      MCD::OPC_FilterValue, 72, 4, 0, // Skip to: 43
/* 39 */      MCD::OPC_Decode, 221, 3, 8, // Opcode: LH
/* 43 */      MCD::OPC_FilterValue, 73, 4, 0, // Skip to: 51
/* 47 */      MCD::OPC_Decode, 219, 2, 8, // Opcode: CH
/* 51 */      MCD::OPC_FilterValue, 74, 3, 0, // Skip to: 58
/* 55 */      MCD::OPC_Decode, 36, 9, // Opcode: AH
/* 58 */      MCD::OPC_FilterValue, 75, 4, 0, // Skip to: 66
/* 62 */      MCD::OPC_Decode, 252, 4, 9, // Opcode: SH
/* 66 */      MCD::OPC_FilterValue, 76, 4, 0, // Skip to: 74
/* 70 */      MCD::OPC_Decode, 167, 4, 9, // Opcode: MH
/* 74 */      MCD::OPC_FilterValue, 80, 4, 0, // Skip to: 82
/* 78 */      MCD::OPC_Decode, 157, 5, 6, // Opcode: ST
/* 82 */      MCD::OPC_FilterValue, 84, 4, 0, // Skip to: 90
/* 86 */      MCD::OPC_Decode, 195, 4, 9, // Opcode: N
/* 90 */      MCD::OPC_FilterValue, 85, 4, 0, // Skip to: 98
/* 94 */      MCD::OPC_Decode, 226, 2, 8, // Opcode: CL
/* 98 */      MCD::OPC_FilterValue, 86, 4, 0, // Skip to: 106
/* 102 */     MCD::OPC_Decode, 213, 4, 9, // Opcode: O
/* 106 */     MCD::OPC_FilterValue, 87, 4, 0, // Skip to: 114
/* 110 */     MCD::OPC_Decode, 194, 5, 9, // Opcode: X
/* 114 */     MCD::OPC_FilterValue, 88, 4, 0, // Skip to: 122
/* 118 */     MCD::OPC_Decode, 182, 3, 8, // Opcode: L
/* 122 */     MCD::OPC_FilterValue, 89, 4, 0, // Skip to: 130
/* 126 */     MCD::OPC_Decode, 190, 2, 8, // Opcode: C
/* 130 */     MCD::OPC_FilterValue, 90, 3, 0, // Skip to: 137
/* 134 */     MCD::OPC_Decode, 17, 9, // Opcode: A
/* 137 */     MCD::OPC_FilterValue, 91, 4, 0, // Skip to: 145
/* 141 */     MCD::OPC_Decode, 242, 4, 9, // Opcode: S
/* 145 */     MCD::OPC_FilterValue, 94, 3, 0, // Skip to: 152
/* 149 */     MCD::OPC_Decode, 40, 9, // Opcode: AL
/* 152 */     MCD::OPC_FilterValue, 95, 4, 0, // Skip to: 160
/* 156 */     MCD::OPC_Decode, 254, 4, 9, // Opcode: SL
/* 160 */     MCD::OPC_FilterValue, 96, 4, 0, // Skip to: 168
/* 164 */     MCD::OPC_Decode, 165, 5, 10, // Opcode: STD
/* 168 */     MCD::OPC_FilterValue, 104, 4, 0, // Skip to: 176
/* 172 */     MCD::OPC_Decode, 195, 3, 10, // Opcode: LD
/* 176 */     MCD::OPC_FilterValue, 112, 4, 0, // Skip to: 184
/* 180 */     MCD::OPC_Decode, 167, 5, 11, // Opcode: STE
/* 184 */     MCD::OPC_FilterValue, 113, 4, 0, // Skip to: 192
/* 188 */     MCD::OPC_Decode, 172, 4, 9, // Opcode: MS
/* 192 */     MCD::OPC_FilterValue, 120, 4, 0, // Skip to: 200
/* 196 */     MCD::OPC_Decode, 202, 3, 11, // Opcode: LE
/* 200 */     MCD::OPC_FilterValue, 136, 1, 10, 0, // Skip to: 215
/* 205 */     MCD::OPC_CheckField, 16, 4, 0, 128, 10, // Skip to: 2899
/* 211 */     MCD::OPC_Decode, 154, 5, 12, // Opcode: SRL
/* 215 */     MCD::OPC_FilterValue, 137, 1, 10, 0, // Skip to: 230
/* 220 */     MCD::OPC_CheckField, 16, 4, 0, 113, 10, // Skip to: 2899
/* 226 */     MCD::OPC_Decode, 138, 5, 12, // Opcode: SLL
/* 230 */     MCD::OPC_FilterValue, 138, 1, 10, 0, // Skip to: 245
/* 235 */     MCD::OPC_CheckField, 16, 4, 0, 98, 10, // Skip to: 2899
/* 241 */     MCD::OPC_Decode, 150, 5, 12, // Opcode: SRA
/* 245 */     MCD::OPC_FilterValue, 146, 1, 4, 0, // Skip to: 254
/* 250 */     MCD::OPC_Decode, 190, 4, 13, // Opcode: MVI
/* 254 */     MCD::OPC_FilterValue, 148, 1, 4, 0, // Skip to: 263
/* 259 */     MCD::OPC_Decode, 199, 4, 13, // Opcode: NI
/* 263 */     MCD::OPC_FilterValue, 149, 1, 4, 0, // Skip to: 272
/* 268 */     MCD::OPC_Decode, 240, 2, 13, // Opcode: CLI
/* 272 */     MCD::OPC_FilterValue, 150, 1, 4, 0, // Skip to: 281
/* 277 */     MCD::OPC_Decode, 217, 4, 13, // Opcode: OI
/* 281 */     MCD::OPC_FilterValue, 151, 1, 4, 0, // Skip to: 290
/* 286 */     MCD::OPC_Decode, 198, 5, 13, // Opcode: XI
/* 290 */     MCD::OPC_FilterValue, 165, 1, 131, 0, // Skip to: 426
/* 295 */     MCD::OPC_ExtractField, 16, 4,  // Inst{19-16} ...
/* 298 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 306
/* 302 */     MCD::OPC_Decode, 172, 3, 14, // Opcode: IIHH
/* 306 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 314
/* 310 */     MCD::OPC_Decode, 173, 3, 14, // Opcode: IIHL
/* 314 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 322
/* 318 */     MCD::OPC_Decode, 176, 3, 14, // Opcode: IILH
/* 322 */     MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 330
/* 326 */     MCD::OPC_Decode, 178, 3, 14, // Opcode: IILL
/* 330 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 338
/* 334 */     MCD::OPC_Decode, 201, 4, 14, // Opcode: NIHH
/* 338 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 346
/* 342 */     MCD::OPC_Decode, 202, 4, 14, // Opcode: NIHL
/* 346 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 354
/* 350 */     MCD::OPC_Decode, 205, 4, 14, // Opcode: NILH
/* 354 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 362
/* 358 */     MCD::OPC_Decode, 207, 4, 14, // Opcode: NILL
/* 362 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 370
/* 366 */     MCD::OPC_Decode, 219, 4, 14, // Opcode: OIHH
/* 370 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 378
/* 374 */     MCD::OPC_Decode, 220, 4, 14, // Opcode: OIHL
/* 378 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 386
/* 382 */     MCD::OPC_Decode, 223, 4, 14, // Opcode: OILH
/* 386 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 394
/* 390 */     MCD::OPC_Decode, 225, 4, 14, // Opcode: OILL
/* 394 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 402
/* 398 */     MCD::OPC_Decode, 240, 3, 15, // Opcode: LLIHH
/* 402 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 410
/* 406 */     MCD::OPC_Decode, 241, 3, 15, // Opcode: LLIHL
/* 410 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 418
/* 414 */     MCD::OPC_Decode, 243, 3, 15, // Opcode: LLILH
/* 418 */     MCD::OPC_FilterValue, 15, 173, 9, // Skip to: 2899
/* 422 */     MCD::OPC_Decode, 244, 3, 15, // Opcode: LLILL
/* 426 */     MCD::OPC_FilterValue, 167, 1, 220, 0, // Skip to: 651
/* 431 */     MCD::OPC_ExtractField, 16, 4,  // Inst{19-16} ...
/* 434 */     MCD::OPC_FilterValue, 4, 127, 0, // Skip to: 565
/* 438 */     MCD::OPC_ExtractField, 20, 4,  // Inst{23-20} ...
/* 441 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 449
/* 445 */     MCD::OPC_Decode, 172, 2, 16, // Opcode: AsmOJ
/* 449 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 457
/* 453 */     MCD::OPC_Decode, 160, 1, 16, // Opcode: AsmHJ
/* 457 */     MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 465
/* 461 */     MCD::OPC_Decode, 140, 2, 16, // Opcode: AsmNLEJ
/* 465 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 473
/* 469 */     MCD::OPC_Decode, 232, 1, 16, // Opcode: AsmLJ
/* 473 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 481
/* 477 */     MCD::OPC_Decode, 252, 1, 16, // Opcode: AsmNHEJ
/* 481 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 489
/* 485 */     MCD::OPC_Decode, 224, 1, 16, // Opcode: AsmLHJ
/* 489 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 497
/* 493 */     MCD::OPC_Decode, 244, 1, 16, // Opcode: AsmNEJ
/* 497 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 505
/* 501 */     MCD::OPC_Decode, 144, 1, 16, // Opcode: AsmEJ
/* 505 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 513
/* 509 */     MCD::OPC_Decode, 148, 2, 16, // Opcode: AsmNLHJ
/* 513 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 521
/* 517 */     MCD::OPC_Decode, 152, 1, 16, // Opcode: AsmHEJ
/* 521 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 529
/* 525 */     MCD::OPC_Decode, 156, 2, 16, // Opcode: AsmNLJ
/* 529 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 537
/* 533 */     MCD::OPC_Decode, 216, 1, 16, // Opcode: AsmLEJ
/* 537 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 545
/* 541 */     MCD::OPC_Decode, 132, 2, 16, // Opcode: AsmNHJ
/* 545 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 553
/* 549 */     MCD::OPC_Decode, 164, 2, 16, // Opcode: AsmNOJ
/* 553 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 561
/* 557 */     MCD::OPC_Decode, 180, 3, 16, // Opcode: J
/* 561 */     MCD::OPC_Decode, 138, 1, 17, // Opcode: AsmBRC
/* 565 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 573
/* 569 */     MCD::OPC_Decode, 136, 1, 18, // Opcode: AsmBRAS
/* 573 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 581
/* 577 */     MCD::OPC_Decode, 188, 2, 19, // Opcode: BRCT
/* 581 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 589
/* 585 */     MCD::OPC_Decode, 189, 2, 20, // Opcode: BRCTG
/* 589 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 597
/* 593 */     MCD::OPC_Decode, 222, 3, 21, // Opcode: LHI
/* 597 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 605
/* 601 */     MCD::OPC_Decode, 216, 3, 22, // Opcode: LGHI
/* 605 */     MCD::OPC_FilterValue, 10, 3, 0, // Skip to: 612
/* 609 */     MCD::OPC_Decode, 37, 23, // Opcode: AHI
/* 612 */     MCD::OPC_FilterValue, 11, 3, 0, // Skip to: 619
/* 616 */     MCD::OPC_Decode, 31, 24, // Opcode: AGHI
/* 619 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 627
/* 623 */     MCD::OPC_Decode, 168, 4, 23, // Opcode: MHI
/* 627 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 635
/* 631 */     MCD::OPC_Decode, 166, 4, 24, // Opcode: MGHI
/* 635 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 643
/* 639 */     MCD::OPC_Decode, 221, 2, 21, // Opcode: CHI
/* 643 */     MCD::OPC_FilterValue, 15, 204, 8, // Skip to: 2899
/* 647 */     MCD::OPC_Decode, 211, 2, 22, // Opcode: CGHI
/* 651 */     MCD::OPC_FilterValue, 178, 1, 23, 0, // Skip to: 679
/* 656 */     MCD::OPC_ExtractField, 8, 16,  // Inst{23-8} ...
/* 659 */     MCD::OPC_FilterValue, 128, 158, 1, 4, 0, // Skip to: 669
/* 665 */     MCD::OPC_Decode, 162, 3, 25, // Opcode: EAR
/* 669 */     MCD::OPC_FilterValue, 128, 164, 1, 176, 8, // Skip to: 2899
/* 675 */     MCD::OPC_Decode, 183, 4, 3, // Opcode: MSR
/* 679 */     MCD::OPC_FilterValue, 179, 1, 161, 3, // Skip to: 1613
/* 684 */     MCD::OPC_ExtractField, 16, 8,  // Inst{23-16} ...
/* 687 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 701
/* 691 */     MCD::OPC_CheckField, 8, 8, 0, 154, 8, // Skip to: 2899
/* 697 */     MCD::OPC_Decode, 254, 3, 5, // Opcode: LPEBR
/* 701 */     MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 715
/* 705 */     MCD::OPC_CheckField, 8, 8, 0, 140, 8, // Skip to: 2899
/* 711 */     MCD::OPC_Decode, 247, 3, 5, // Opcode: LNEBR
/* 715 */     MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 729
/* 719 */     MCD::OPC_CheckField, 8, 8, 0, 126, 8, // Skip to: 2899
/* 725 */     MCD::OPC_Decode, 137, 4, 5, // Opcode: LTEBR
/* 729 */     MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 743
/* 733 */     MCD::OPC_CheckField, 8, 8, 0, 112, 8, // Skip to: 2899
/* 739 */     MCD::OPC_Decode, 190, 3, 5, // Opcode: LCEBR
/* 743 */     MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 757
/* 747 */     MCD::OPC_CheckField, 8, 8, 0, 98, 8, // Skip to: 2899
/* 753 */     MCD::OPC_Decode, 197, 3, 26, // Opcode: LDEBR
/* 757 */     MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 771
/* 761 */     MCD::OPC_CheckField, 8, 8, 0, 84, 8, // Skip to: 2899
/* 767 */     MCD::OPC_Decode, 148, 4, 27, // Opcode: LXDBR
/* 771 */     MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 785
/* 775 */     MCD::OPC_CheckField, 8, 8, 0, 70, 8, // Skip to: 2899
/* 781 */     MCD::OPC_Decode, 150, 4, 28, // Opcode: LXEBR
/* 785 */     MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 799
/* 789 */     MCD::OPC_CheckField, 8, 8, 0, 56, 8, // Skip to: 2899
/* 795 */     MCD::OPC_Decode, 194, 4, 29, // Opcode: MXDBR
/* 799 */     MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 813
/* 803 */     MCD::OPC_CheckField, 8, 8, 0, 42, 8, // Skip to: 2899
/* 809 */     MCD::OPC_Decode, 196, 2, 5, // Opcode: CEBR
/* 813 */     MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 826
/* 817 */     MCD::OPC_CheckField, 8, 8, 0, 28, 8, // Skip to: 2899
/* 823 */     MCD::OPC_Decode, 24, 30, // Opcode: AEBR
/* 826 */     MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 840
/* 830 */     MCD::OPC_CheckField, 8, 8, 0, 15, 8, // Skip to: 2899
/* 836 */     MCD::OPC_Decode, 246, 4, 30, // Opcode: SEBR
/* 840 */     MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 854
/* 844 */     MCD::OPC_CheckField, 8, 8, 0, 1, 8, // Skip to: 2899
/* 850 */     MCD::OPC_Decode, 163, 4, 31, // Opcode: MDEBR
/* 854 */     MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 868
/* 858 */     MCD::OPC_CheckField, 8, 8, 0, 243, 7, // Skip to: 2899
/* 864 */     MCD::OPC_Decode, 152, 3, 30, // Opcode: DEBR
/* 868 */     MCD::OPC_FilterValue, 14, 10, 0, // Skip to: 882
/* 872 */     MCD::OPC_CheckField, 8, 4, 0, 229, 7, // Skip to: 2899
/* 878 */     MCD::OPC_Decode, 159, 4, 32, // Opcode: MAEBR
/* 882 */     MCD::OPC_FilterValue, 15, 10, 0, // Skip to: 896
/* 886 */     MCD::OPC_CheckField, 8, 4, 0, 215, 7, // Skip to: 2899
/* 892 */     MCD::OPC_Decode, 176, 4, 32, // Opcode: MSEBR
/* 896 */     MCD::OPC_FilterValue, 16, 10, 0, // Skip to: 910
/* 900 */     MCD::OPC_CheckField, 8, 8, 0, 201, 7, // Skip to: 2899
/* 906 */     MCD::OPC_Decode, 253, 3, 4, // Opcode: LPDBR
/* 910 */     MCD::OPC_FilterValue, 17, 10, 0, // Skip to: 924
/* 914 */     MCD::OPC_CheckField, 8, 8, 0, 187, 7, // Skip to: 2899
/* 920 */     MCD::OPC_Decode, 246, 3, 4, // Opcode: LNDBR
/* 924 */     MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 938
/* 928 */     MCD::OPC_CheckField, 8, 8, 0, 173, 7, // Skip to: 2899
/* 934 */     MCD::OPC_Decode, 135, 4, 4, // Opcode: LTDBR
/* 938 */     MCD::OPC_FilterValue, 19, 10, 0, // Skip to: 952
/* 942 */     MCD::OPC_CheckField, 8, 8, 0, 159, 7, // Skip to: 2899
/* 948 */     MCD::OPC_Decode, 189, 3, 4, // Opcode: LCDBR
/* 952 */     MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 966
/* 956 */     MCD::OPC_CheckField, 8, 8, 0, 145, 7, // Skip to: 2899
/* 962 */     MCD::OPC_Decode, 147, 5, 5, // Opcode: SQEBR
/* 966 */     MCD::OPC_FilterValue, 21, 10, 0, // Skip to: 980
/* 970 */     MCD::OPC_CheckField, 8, 8, 0, 131, 7, // Skip to: 2899
/* 976 */     MCD::OPC_Decode, 145, 5, 4, // Opcode: SQDBR
/* 980 */     MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 994
/* 984 */     MCD::OPC_CheckField, 8, 8, 0, 117, 7, // Skip to: 2899
/* 990 */     MCD::OPC_Decode, 148, 5, 33, // Opcode: SQXBR
/* 994 */     MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 1008
/* 998 */     MCD::OPC_CheckField, 8, 8, 0, 103, 7, // Skip to: 2899
/* 1004 */    MCD::OPC_Decode, 165, 4, 30, // Opcode: MEEBR
/* 1008 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 1022
/* 1012 */    MCD::OPC_CheckField, 8, 8, 0, 89, 7, // Skip to: 2899
/* 1018 */    MCD::OPC_Decode, 192, 2, 4, // Opcode: CDBR
/* 1022 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 1035
/* 1026 */    MCD::OPC_CheckField, 8, 8, 0, 75, 7, // Skip to: 2899
/* 1032 */    MCD::OPC_Decode, 19, 34, // Opcode: ADBR
/* 1035 */    MCD::OPC_FilterValue, 27, 10, 0, // Skip to: 1049
/* 1039 */    MCD::OPC_CheckField, 8, 8, 0, 62, 7, // Skip to: 2899
/* 1045 */    MCD::OPC_Decode, 244, 4, 34, // Opcode: SDBR
/* 1049 */    MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 1063
/* 1053 */    MCD::OPC_CheckField, 8, 8, 0, 48, 7, // Skip to: 2899
/* 1059 */    MCD::OPC_Decode, 161, 4, 34, // Opcode: MDBR
/* 1063 */    MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 1077
/* 1067 */    MCD::OPC_CheckField, 8, 8, 0, 34, 7, // Skip to: 2899
/* 1073 */    MCD::OPC_Decode, 150, 3, 34, // Opcode: DDBR
/* 1077 */    MCD::OPC_FilterValue, 30, 10, 0, // Skip to: 1091
/* 1081 */    MCD::OPC_CheckField, 8, 4, 0, 20, 7, // Skip to: 2899
/* 1087 */    MCD::OPC_Decode, 157, 4, 35, // Opcode: MADBR
/* 1091 */    MCD::OPC_FilterValue, 31, 10, 0, // Skip to: 1105
/* 1095 */    MCD::OPC_CheckField, 8, 4, 0, 6, 7, // Skip to: 2899
/* 1101 */    MCD::OPC_Decode, 174, 4, 35, // Opcode: MSDBR
/* 1105 */    MCD::OPC_FilterValue, 64, 10, 0, // Skip to: 1119
/* 1109 */    MCD::OPC_CheckField, 8, 8, 0, 248, 6, // Skip to: 2899
/* 1115 */    MCD::OPC_Decode, 255, 3, 33, // Opcode: LPXBR
/* 1119 */    MCD::OPC_FilterValue, 65, 10, 0, // Skip to: 1133
/* 1123 */    MCD::OPC_CheckField, 8, 8, 0, 234, 6, // Skip to: 2899
/* 1129 */    MCD::OPC_Decode, 248, 3, 33, // Opcode: LNXBR
/* 1133 */    MCD::OPC_FilterValue, 66, 10, 0, // Skip to: 1147
/* 1137 */    MCD::OPC_CheckField, 8, 8, 0, 220, 6, // Skip to: 2899
/* 1143 */    MCD::OPC_Decode, 144, 4, 33, // Opcode: LTXBR
/* 1147 */    MCD::OPC_FilterValue, 67, 10, 0, // Skip to: 1161
/* 1151 */    MCD::OPC_CheckField, 8, 8, 0, 206, 6, // Skip to: 2899
/* 1157 */    MCD::OPC_Decode, 194, 3, 33, // Opcode: LCXBR
/* 1161 */    MCD::OPC_FilterValue, 68, 10, 0, // Skip to: 1175
/* 1165 */    MCD::OPC_CheckField, 8, 8, 0, 192, 6, // Skip to: 2899
/* 1171 */    MCD::OPC_Decode, 203, 3, 36, // Opcode: LEDBR
/* 1175 */    MCD::OPC_FilterValue, 69, 10, 0, // Skip to: 1189
/* 1179 */    MCD::OPC_CheckField, 8, 8, 0, 178, 6, // Skip to: 2899
/* 1185 */    MCD::OPC_Decode, 200, 3, 33, // Opcode: LDXBR
/* 1189 */    MCD::OPC_FilterValue, 70, 10, 0, // Skip to: 1203
/* 1193 */    MCD::OPC_CheckField, 8, 8, 0, 164, 6, // Skip to: 2899
/* 1199 */    MCD::OPC_Decode, 205, 3, 33, // Opcode: LEXBR
/* 1203 */    MCD::OPC_FilterValue, 71, 10, 0, // Skip to: 1217
/* 1207 */    MCD::OPC_CheckField, 8, 4, 0, 150, 6, // Skip to: 2899
/* 1213 */    MCD::OPC_Decode, 165, 3, 37, // Opcode: FIXBR
/* 1217 */    MCD::OPC_FilterValue, 73, 10, 0, // Skip to: 1231
/* 1221 */    MCD::OPC_CheckField, 8, 8, 0, 136, 6, // Skip to: 2899
/* 1227 */    MCD::OPC_Decode, 255, 2, 33, // Opcode: CXBR
/* 1231 */    MCD::OPC_FilterValue, 74, 10, 0, // Skip to: 1245
/* 1235 */    MCD::OPC_CheckField, 8, 8, 0, 122, 6, // Skip to: 2899
/* 1241 */    MCD::OPC_Decode, 133, 1, 38, // Opcode: AXBR
/* 1245 */    MCD::OPC_FilterValue, 75, 10, 0, // Skip to: 1259
/* 1249 */    MCD::OPC_CheckField, 8, 8, 0, 108, 6, // Skip to: 2899
/* 1255 */    MCD::OPC_Decode, 187, 5, 38, // Opcode: SXBR
/* 1259 */    MCD::OPC_FilterValue, 76, 10, 0, // Skip to: 1273
/* 1263 */    MCD::OPC_CheckField, 8, 8, 0, 94, 6, // Skip to: 2899
/* 1269 */    MCD::OPC_Decode, 192, 4, 38, // Opcode: MXBR
/* 1273 */    MCD::OPC_FilterValue, 77, 10, 0, // Skip to: 1287
/* 1277 */    MCD::OPC_CheckField, 8, 8, 0, 80, 6, // Skip to: 2899
/* 1283 */    MCD::OPC_Decode, 161, 3, 38, // Opcode: DXBR
/* 1287 */    MCD::OPC_FilterValue, 87, 10, 0, // Skip to: 1301
/* 1291 */    MCD::OPC_CheckField, 8, 4, 0, 66, 6, // Skip to: 2899
/* 1297 */    MCD::OPC_Decode, 164, 3, 39, // Opcode: FIEBR
/* 1301 */    MCD::OPC_FilterValue, 95, 10, 0, // Skip to: 1315
/* 1305 */    MCD::OPC_CheckField, 8, 4, 0, 52, 6, // Skip to: 2899
/* 1311 */    MCD::OPC_Decode, 163, 3, 40, // Opcode: FIDBR
/* 1315 */    MCD::OPC_FilterValue, 101, 10, 0, // Skip to: 1329
/* 1319 */    MCD::OPC_CheckField, 8, 8, 0, 38, 6, // Skip to: 2899
/* 1325 */    MCD::OPC_Decode, 151, 4, 33, // Opcode: LXR
/* 1329 */    MCD::OPC_FilterValue, 114, 10, 0, // Skip to: 1343
/* 1333 */    MCD::OPC_CheckField, 8, 4, 0, 24, 6, // Skip to: 2899
/* 1339 */    MCD::OPC_Decode, 245, 2, 41, // Opcode: CPSDRdd
/* 1343 */    MCD::OPC_FilterValue, 116, 16, 0, // Skip to: 1363
/* 1347 */    MCD::OPC_CheckField, 8, 8, 0, 10, 6, // Skip to: 2899
/* 1353 */    MCD::OPC_CheckField, 0, 4, 0, 4, 6, // Skip to: 2899
/* 1359 */    MCD::OPC_Decode, 154, 4, 42, // Opcode: LZER
/* 1363 */    MCD::OPC_FilterValue, 117, 16, 0, // Skip to: 1383
/* 1367 */    MCD::OPC_CheckField, 8, 8, 0, 246, 5, // Skip to: 2899
/* 1373 */    MCD::OPC_CheckField, 0, 4, 0, 240, 5, // Skip to: 2899
/* 1379 */    MCD::OPC_Decode, 153, 4, 43, // Opcode: LZDR
/* 1383 */    MCD::OPC_FilterValue, 118, 16, 0, // Skip to: 1403
/* 1387 */    MCD::OPC_CheckField, 8, 8, 0, 226, 5, // Skip to: 2899
/* 1393 */    MCD::OPC_CheckField, 0, 4, 0, 220, 5, // Skip to: 2899
/* 1399 */    MCD::OPC_Decode, 155, 4, 44, // Opcode: LZXR
/* 1403 */    MCD::OPC_FilterValue, 148, 1, 10, 0, // Skip to: 1418
/* 1408 */    MCD::OPC_CheckField, 8, 8, 0, 205, 5, // Skip to: 2899
/* 1414 */    MCD::OPC_Decode, 197, 2, 45, // Opcode: CEFBR
/* 1418 */    MCD::OPC_FilterValue, 149, 1, 10, 0, // Skip to: 1433
/* 1423 */    MCD::OPC_CheckField, 8, 8, 0, 190, 5, // Skip to: 2899
/* 1429 */    MCD::OPC_Decode, 193, 2, 46, // Opcode: CDFBR
/* 1433 */    MCD::OPC_FilterValue, 150, 1, 10, 0, // Skip to: 1448
/* 1438 */    MCD::OPC_CheckField, 8, 8, 0, 175, 5, // Skip to: 2899
/* 1444 */    MCD::OPC_Decode, 128, 3, 47, // Opcode: CXFBR
/* 1448 */    MCD::OPC_FilterValue, 152, 1, 10, 0, // Skip to: 1463
/* 1453 */    MCD::OPC_CheckField, 8, 4, 0, 160, 5, // Skip to: 2899
/* 1459 */    MCD::OPC_Decode, 200, 2, 48, // Opcode: CFEBR
/* 1463 */    MCD::OPC_FilterValue, 153, 1, 10, 0, // Skip to: 1478
/* 1468 */    MCD::OPC_CheckField, 8, 4, 0, 145, 5, // Skip to: 2899
/* 1474 */    MCD::OPC_Decode, 199, 2, 49, // Opcode: CFDBR
/* 1478 */    MCD::OPC_FilterValue, 154, 1, 10, 0, // Skip to: 1493
/* 1483 */    MCD::OPC_CheckField, 8, 4, 0, 130, 5, // Skip to: 2899
/* 1489 */    MCD::OPC_Decode, 202, 2, 50, // Opcode: CFXBR
/* 1493 */    MCD::OPC_FilterValue, 164, 1, 10, 0, // Skip to: 1508
/* 1498 */    MCD::OPC_CheckField, 8, 8, 0, 115, 5, // Skip to: 2899
/* 1504 */    MCD::OPC_Decode, 198, 2, 51, // Opcode: CEGBR
/* 1508 */    MCD::OPC_FilterValue, 165, 1, 10, 0, // Skip to: 1523
/* 1513 */    MCD::OPC_CheckField, 8, 8, 0, 100, 5, // Skip to: 2899
/* 1519 */    MCD::OPC_Decode, 194, 2, 52, // Opcode: CDGBR
/* 1523 */    MCD::OPC_FilterValue, 166, 1, 10, 0, // Skip to: 1538
/* 1528 */    MCD::OPC_CheckField, 8, 8, 0, 85, 5, // Skip to: 2899
/* 1534 */    MCD::OPC_Decode, 129, 3, 53, // Opcode: CXGBR
/* 1538 */    MCD::OPC_FilterValue, 168, 1, 10, 0, // Skip to: 1553
/* 1543 */    MCD::OPC_CheckField, 8, 4, 0, 70, 5, // Skip to: 2899
/* 1549 */    MCD::OPC_Decode, 205, 2, 54, // Opcode: CGEBR
/* 1553 */    MCD::OPC_FilterValue, 169, 1, 10, 0, // Skip to: 1568
/* 1558 */    MCD::OPC_CheckField, 8, 4, 0, 55, 5, // Skip to: 2899
/* 1564 */    MCD::OPC_Decode, 204, 2, 55, // Opcode: CGDBR
/* 1568 */    MCD::OPC_FilterValue, 170, 1, 10, 0, // Skip to: 1583
/* 1573 */    MCD::OPC_CheckField, 8, 4, 0, 40, 5, // Skip to: 2899
/* 1579 */    MCD::OPC_Decode, 218, 2, 56, // Opcode: CGXBR
/* 1583 */    MCD::OPC_FilterValue, 193, 1, 10, 0, // Skip to: 1598
/* 1588 */    MCD::OPC_CheckField, 8, 8, 0, 25, 5, // Skip to: 2899
/* 1594 */    MCD::OPC_Decode, 198, 3, 52, // Opcode: LDGR
/* 1598 */    MCD::OPC_FilterValue, 205, 1, 16, 5, // Skip to: 2899
/* 1603 */    MCD::OPC_CheckField, 8, 8, 0, 10, 5, // Skip to: 2899
/* 1609 */    MCD::OPC_Decode, 210, 3, 57, // Opcode: LGDR
/* 1613 */    MCD::OPC_FilterValue, 185, 1, 248, 4, // Skip to: 2890
/* 1618 */    MCD::OPC_ExtractField, 16, 8,  // Inst{23-16} ...
/* 1621 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 1635
/* 1625 */    MCD::OPC_CheckField, 8, 8, 0, 244, 4, // Skip to: 2899
/* 1631 */    MCD::OPC_Decode, 142, 4, 58, // Opcode: LTGR
/* 1635 */    MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 1649
/* 1639 */    MCD::OPC_CheckField, 8, 8, 0, 230, 4, // Skip to: 2899
/* 1645 */    MCD::OPC_Decode, 192, 3, 58, // Opcode: LCGR
/* 1649 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 1663
/* 1653 */    MCD::OPC_CheckField, 8, 8, 0, 216, 4, // Skip to: 2899
/* 1659 */    MCD::OPC_Decode, 219, 3, 58, // Opcode: LGR
/* 1663 */    MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 1677
/* 1667 */    MCD::OPC_CheckField, 8, 8, 0, 202, 4, // Skip to: 2899
/* 1673 */    MCD::OPC_Decode, 209, 3, 58, // Opcode: LGBR
/* 1677 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 1691
/* 1681 */    MCD::OPC_CheckField, 8, 8, 0, 188, 4, // Skip to: 2899
/* 1687 */    MCD::OPC_Decode, 217, 3, 58, // Opcode: LGHR
/* 1691 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 1704
/* 1695 */    MCD::OPC_CheckField, 8, 8, 0, 174, 4, // Skip to: 2899
/* 1701 */    MCD::OPC_Decode, 33, 59, // Opcode: AGR
/* 1704 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 1718
/* 1708 */    MCD::OPC_CheckField, 8, 8, 0, 161, 4, // Skip to: 2899
/* 1714 */    MCD::OPC_Decode, 250, 4, 59, // Opcode: SGR
/* 1718 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1731
/* 1722 */    MCD::OPC_CheckField, 8, 8, 0, 147, 4, // Skip to: 2899
/* 1728 */    MCD::OPC_Decode, 51, 59, // Opcode: ALGR
/* 1731 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 1745
/* 1735 */    MCD::OPC_CheckField, 8, 8, 0, 134, 4, // Skip to: 2899
/* 1741 */    MCD::OPC_Decode, 136, 5, 59, // Opcode: SLGR
/* 1745 */    MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 1759
/* 1749 */    MCD::OPC_CheckField, 8, 8, 0, 120, 4, // Skip to: 2899
/* 1755 */    MCD::OPC_Decode, 182, 4, 59, // Opcode: MSGR
/* 1759 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 1773
/* 1763 */    MCD::OPC_CheckField, 8, 8, 0, 106, 4, // Skip to: 2899
/* 1769 */    MCD::OPC_Decode, 160, 3, 60, // Opcode: DSGR
/* 1773 */    MCD::OPC_FilterValue, 15, 10, 0, // Skip to: 1787
/* 1777 */    MCD::OPC_CheckField, 8, 8, 0, 92, 4, // Skip to: 2899
/* 1783 */    MCD::OPC_Decode, 132, 4, 58, // Opcode: LRVGR
/* 1787 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 1801
/* 1791 */    MCD::OPC_CheckField, 8, 8, 0, 78, 4, // Skip to: 2899
/* 1797 */    MCD::OPC_Decode, 141, 4, 58, // Opcode: LTGFR
/* 1801 */    MCD::OPC_FilterValue, 19, 10, 0, // Skip to: 1815
/* 1805 */    MCD::OPC_CheckField, 8, 8, 0, 64, 4, // Skip to: 2899
/* 1811 */    MCD::OPC_Decode, 191, 3, 61, // Opcode: LCGFR
/* 1815 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 1829
/* 1819 */    MCD::OPC_CheckField, 8, 8, 0, 50, 4, // Skip to: 2899
/* 1825 */    MCD::OPC_Decode, 213, 3, 61, // Opcode: LGFR
/* 1829 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 1843
/* 1833 */    MCD::OPC_CheckField, 8, 8, 0, 36, 4, // Skip to: 2899
/* 1839 */    MCD::OPC_Decode, 231, 3, 61, // Opcode: LLGFR
/* 1843 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 1856
/* 1847 */    MCD::OPC_CheckField, 8, 8, 0, 22, 4, // Skip to: 2899
/* 1853 */    MCD::OPC_Decode, 30, 62, // Opcode: AGFR
/* 1856 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 1870
/* 1860 */    MCD::OPC_CheckField, 8, 8, 0, 9, 4, // Skip to: 2899
/* 1866 */    MCD::OPC_Decode, 249, 4, 62, // Opcode: SGFR
/* 1870 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 1883
/* 1874 */    MCD::OPC_CheckField, 8, 8, 0, 251, 3, // Skip to: 2899
/* 1880 */    MCD::OPC_Decode, 49, 62, // Opcode: ALGFR
/* 1883 */    MCD::OPC_FilterValue, 27, 10, 0, // Skip to: 1897
/* 1887 */    MCD::OPC_CheckField, 8, 8, 0, 238, 3, // Skip to: 2899
/* 1893 */    MCD::OPC_Decode, 135, 5, 62, // Opcode: SLGFR
/* 1897 */    MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 1911
/* 1901 */    MCD::OPC_CheckField, 8, 8, 0, 224, 3, // Skip to: 2899
/* 1907 */    MCD::OPC_Decode, 181, 4, 62, // Opcode: MSGFR
/* 1911 */    MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 1925
/* 1915 */    MCD::OPC_CheckField, 8, 8, 0, 210, 3, // Skip to: 2899
/* 1921 */    MCD::OPC_Decode, 159, 3, 63, // Opcode: DSGFR
/* 1925 */    MCD::OPC_FilterValue, 31, 10, 0, // Skip to: 1939
/* 1929 */    MCD::OPC_CheckField, 8, 8, 0, 196, 3, // Skip to: 2899
/* 1935 */    MCD::OPC_Decode, 133, 4, 2, // Opcode: LRVR
/* 1939 */    MCD::OPC_FilterValue, 32, 10, 0, // Skip to: 1953
/* 1943 */    MCD::OPC_CheckField, 8, 8, 0, 182, 3, // Skip to: 2899
/* 1949 */    MCD::OPC_Decode, 215, 2, 58, // Opcode: CGR
/* 1953 */    MCD::OPC_FilterValue, 33, 10, 0, // Skip to: 1967
/* 1957 */    MCD::OPC_CheckField, 8, 8, 0, 168, 3, // Skip to: 2899
/* 1963 */    MCD::OPC_Decode, 236, 2, 58, // Opcode: CLGR
/* 1967 */    MCD::OPC_FilterValue, 38, 10, 0, // Skip to: 1981
/* 1971 */    MCD::OPC_CheckField, 8, 8, 0, 154, 3, // Skip to: 2899
/* 1977 */    MCD::OPC_Decode, 188, 3, 2, // Opcode: LBR
/* 1981 */    MCD::OPC_FilterValue, 39, 10, 0, // Skip to: 1995
/* 1985 */    MCD::OPC_CheckField, 8, 8, 0, 140, 3, // Skip to: 2899
/* 1991 */    MCD::OPC_Decode, 223, 3, 2, // Opcode: LHR
/* 1995 */    MCD::OPC_FilterValue, 48, 10, 0, // Skip to: 2009
/* 1999 */    MCD::OPC_CheckField, 8, 8, 0, 126, 3, // Skip to: 2899
/* 2005 */    MCD::OPC_Decode, 208, 2, 61, // Opcode: CGFR
/* 2009 */    MCD::OPC_FilterValue, 49, 10, 0, // Skip to: 2023
/* 2013 */    MCD::OPC_CheckField, 8, 8, 0, 112, 3, // Skip to: 2899
/* 2019 */    MCD::OPC_Decode, 232, 2, 61, // Opcode: CLGFR
/* 2023 */    MCD::OPC_FilterValue, 128, 1, 10, 0, // Skip to: 2038
/* 2028 */    MCD::OPC_CheckField, 8, 8, 0, 97, 3, // Skip to: 2899
/* 2034 */    MCD::OPC_Decode, 197, 4, 59, // Opcode: NGR
/* 2038 */    MCD::OPC_FilterValue, 129, 1, 10, 0, // Skip to: 2053
/* 2043 */    MCD::OPC_CheckField, 8, 8, 0, 82, 3, // Skip to: 2899
/* 2049 */    MCD::OPC_Decode, 215, 4, 59, // Opcode: OGR
/* 2053 */    MCD::OPC_FilterValue, 130, 1, 10, 0, // Skip to: 2068
/* 2058 */    MCD::OPC_CheckField, 8, 8, 0, 67, 3, // Skip to: 2899
/* 2064 */    MCD::OPC_Decode, 196, 5, 59, // Opcode: XGR
/* 2068 */    MCD::OPC_FilterValue, 131, 1, 10, 0, // Skip to: 2083
/* 2073 */    MCD::OPC_CheckField, 8, 8, 0, 52, 3, // Skip to: 2899
/* 2079 */    MCD::OPC_Decode, 166, 3, 64, // Opcode: FLOGR
/* 2083 */    MCD::OPC_FilterValue, 132, 1, 10, 0, // Skip to: 2098
/* 2088 */    MCD::OPC_CheckField, 8, 8, 0, 37, 3, // Skip to: 2899
/* 2094 */    MCD::OPC_Decode, 229, 3, 58, // Opcode: LLGCR
/* 2098 */    MCD::OPC_FilterValue, 133, 1, 10, 0, // Skip to: 2113
/* 2103 */    MCD::OPC_CheckField, 8, 8, 0, 22, 3, // Skip to: 2899
/* 2109 */    MCD::OPC_Decode, 234, 3, 58, // Opcode: LLGHR
/* 2113 */    MCD::OPC_FilterValue, 134, 1, 10, 0, // Skip to: 2128
/* 2118 */    MCD::OPC_CheckField, 8, 8, 0, 7, 3, // Skip to: 2899
/* 2124 */    MCD::OPC_Decode, 171, 4, 60, // Opcode: MLGR
/* 2128 */    MCD::OPC_FilterValue, 135, 1, 10, 0, // Skip to: 2143
/* 2133 */    MCD::OPC_CheckField, 8, 8, 0, 248, 2, // Skip to: 2899
/* 2139 */    MCD::OPC_Decode, 155, 3, 60, // Opcode: DLGR
/* 2143 */    MCD::OPC_FilterValue, 136, 1, 9, 0, // Skip to: 2157
/* 2148 */    MCD::OPC_CheckField, 8, 8, 0, 233, 2, // Skip to: 2899
/* 2154 */    MCD::OPC_Decode, 43, 59, // Opcode: ALCGR
/* 2157 */    MCD::OPC_FilterValue, 137, 1, 10, 0, // Skip to: 2172
/* 2162 */    MCD::OPC_CheckField, 8, 8, 0, 219, 2, // Skip to: 2899
/* 2168 */    MCD::OPC_Decode, 132, 5, 59, // Opcode: SLGBR
/* 2172 */    MCD::OPC_FilterValue, 148, 1, 10, 0, // Skip to: 2187
/* 2177 */    MCD::OPC_CheckField, 8, 8, 0, 204, 2, // Skip to: 2899
/* 2183 */    MCD::OPC_Decode, 227, 3, 2, // Opcode: LLCR
/* 2187 */    MCD::OPC_FilterValue, 149, 1, 10, 0, // Skip to: 2202
/* 2192 */    MCD::OPC_CheckField, 8, 8, 0, 189, 2, // Skip to: 2899
/* 2198 */    MCD::OPC_Decode, 237, 3, 2, // Opcode: LLHR
/* 2202 */    MCD::OPC_FilterValue, 151, 1, 10, 0, // Skip to: 2217
/* 2207 */    MCD::OPC_CheckField, 8, 8, 0, 174, 2, // Skip to: 2899
/* 2213 */    MCD::OPC_Decode, 156, 3, 63, // Opcode: DLR
/* 2217 */    MCD::OPC_FilterValue, 152, 1, 9, 0, // Skip to: 2231
/* 2222 */    MCD::OPC_CheckField, 8, 8, 0, 159, 2, // Skip to: 2899
/* 2228 */    MCD::OPC_Decode, 44, 3, // Opcode: ALCR
/* 2231 */    MCD::OPC_FilterValue, 153, 1, 10, 0, // Skip to: 2246
/* 2236 */    MCD::OPC_CheckField, 8, 8, 0, 145, 2, // Skip to: 2899
/* 2242 */    MCD::OPC_Decode, 129, 5, 3, // Opcode: SLBR
/* 2246 */    MCD::OPC_FilterValue, 226, 1, 186, 0, // Skip to: 2437
/* 2251 */    MCD::OPC_ExtractField, 8, 4,  // Inst{11-8} ...
/* 2254 */    MCD::OPC_FilterValue, 0, 129, 2, // Skip to: 2899
/* 2258 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2261 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2273
/* 2265 */    MCD::OPC_CheckPredicate, 0, 160, 0, // Skip to: 2429
/* 2269 */    MCD::OPC_Decode, 176, 2, 59, // Opcode: AsmOLOCGR
/* 2273 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2285
/* 2277 */    MCD::OPC_CheckPredicate, 0, 148, 0, // Skip to: 2429
/* 2281 */    MCD::OPC_Decode, 164, 1, 59, // Opcode: AsmHLOCGR
/* 2285 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 2297
/* 2289 */    MCD::OPC_CheckPredicate, 0, 136, 0, // Skip to: 2429
/* 2293 */    MCD::OPC_Decode, 144, 2, 59, // Opcode: AsmNLELOCGR
/* 2297 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 2309
/* 2301 */    MCD::OPC_CheckPredicate, 0, 124, 0, // Skip to: 2429
/* 2305 */    MCD::OPC_Decode, 236, 1, 59, // Opcode: AsmLLOCGR
/* 2309 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 2321
/* 2313 */    MCD::OPC_CheckPredicate, 0, 112, 0, // Skip to: 2429
/* 2317 */    MCD::OPC_Decode, 128, 2, 59, // Opcode: AsmNHELOCGR
/* 2321 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 2333
/* 2325 */    MCD::OPC_CheckPredicate, 0, 100, 0, // Skip to: 2429
/* 2329 */    MCD::OPC_Decode, 228, 1, 59, // Opcode: AsmLHLOCGR
/* 2333 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 2345
/* 2337 */    MCD::OPC_CheckPredicate, 0, 88, 0, // Skip to: 2429
/* 2341 */    MCD::OPC_Decode, 248, 1, 59, // Opcode: AsmNELOCGR
/* 2345 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 2357
/* 2349 */    MCD::OPC_CheckPredicate, 0, 76, 0, // Skip to: 2429
/* 2353 */    MCD::OPC_Decode, 148, 1, 59, // Opcode: AsmELOCGR
/* 2357 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 2369
/* 2361 */    MCD::OPC_CheckPredicate, 0, 64, 0, // Skip to: 2429
/* 2365 */    MCD::OPC_Decode, 152, 2, 59, // Opcode: AsmNLHLOCGR
/* 2369 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 2381
/* 2373 */    MCD::OPC_CheckPredicate, 0, 52, 0, // Skip to: 2429
/* 2377 */    MCD::OPC_Decode, 156, 1, 59, // Opcode: AsmHELOCGR
/* 2381 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 2393
/* 2385 */    MCD::OPC_CheckPredicate, 0, 40, 0, // Skip to: 2429
/* 2389 */    MCD::OPC_Decode, 160, 2, 59, // Opcode: AsmNLLOCGR
/* 2393 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 2405
/* 2397 */    MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 2429
/* 2401 */    MCD::OPC_Decode, 220, 1, 59, // Opcode: AsmLELOCGR
/* 2405 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 2417
/* 2409 */    MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 2429
/* 2413 */    MCD::OPC_Decode, 136, 2, 59, // Opcode: AsmNHLOCGR
/* 2417 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 2429
/* 2421 */    MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 2429
/* 2425 */    MCD::OPC_Decode, 168, 2, 59, // Opcode: AsmNOLOCGR
/* 2429 */    MCD::OPC_CheckPredicate, 0, 210, 1, // Skip to: 2899
/* 2433 */    MCD::OPC_Decode, 240, 1, 65, // Opcode: AsmLOCGR
/* 2437 */    MCD::OPC_FilterValue, 228, 1, 14, 0, // Skip to: 2456
/* 2442 */    MCD::OPC_CheckPredicate, 1, 197, 1, // Skip to: 2899
/* 2446 */    MCD::OPC_CheckField, 8, 4, 0, 191, 1, // Skip to: 2899
/* 2452 */    MCD::OPC_Decode, 198, 4, 66, // Opcode: NGRK
/* 2456 */    MCD::OPC_FilterValue, 230, 1, 14, 0, // Skip to: 2475
/* 2461 */    MCD::OPC_CheckPredicate, 1, 178, 1, // Skip to: 2899
/* 2465 */    MCD::OPC_CheckField, 8, 4, 0, 172, 1, // Skip to: 2899
/* 2471 */    MCD::OPC_Decode, 216, 4, 66, // Opcode: OGRK
/* 2475 */    MCD::OPC_FilterValue, 231, 1, 14, 0, // Skip to: 2494
/* 2480 */    MCD::OPC_CheckPredicate, 1, 159, 1, // Skip to: 2899
/* 2484 */    MCD::OPC_CheckField, 8, 4, 0, 153, 1, // Skip to: 2899
/* 2490 */    MCD::OPC_Decode, 197, 5, 66, // Opcode: XGRK
/* 2494 */    MCD::OPC_FilterValue, 232, 1, 13, 0, // Skip to: 2512
/* 2499 */    MCD::OPC_CheckPredicate, 1, 140, 1, // Skip to: 2899
/* 2503 */    MCD::OPC_CheckField, 8, 4, 0, 134, 1, // Skip to: 2899
/* 2509 */    MCD::OPC_Decode, 34, 66, // Opcode: AGRK
/* 2512 */    MCD::OPC_FilterValue, 233, 1, 14, 0, // Skip to: 2531
/* 2517 */    MCD::OPC_CheckPredicate, 1, 122, 1, // Skip to: 2899
/* 2521 */    MCD::OPC_CheckField, 8, 4, 0, 116, 1, // Skip to: 2899
/* 2527 */    MCD::OPC_Decode, 251, 4, 66, // Opcode: SGRK
/* 2531 */    MCD::OPC_FilterValue, 234, 1, 13, 0, // Skip to: 2549
/* 2536 */    MCD::OPC_CheckPredicate, 1, 103, 1, // Skip to: 2899
/* 2540 */    MCD::OPC_CheckField, 8, 4, 0, 97, 1, // Skip to: 2899
/* 2546 */    MCD::OPC_Decode, 52, 66, // Opcode: ALGRK
/* 2549 */    MCD::OPC_FilterValue, 235, 1, 14, 0, // Skip to: 2568
/* 2554 */    MCD::OPC_CheckPredicate, 1, 85, 1, // Skip to: 2899
/* 2558 */    MCD::OPC_CheckField, 8, 4, 0, 79, 1, // Skip to: 2899
/* 2564 */    MCD::OPC_Decode, 137, 5, 66, // Opcode: SLGRK
/* 2568 */    MCD::OPC_FilterValue, 242, 1, 186, 0, // Skip to: 2759
/* 2573 */    MCD::OPC_ExtractField, 8, 4,  // Inst{11-8} ...
/* 2576 */    MCD::OPC_FilterValue, 0, 63, 1, // Skip to: 2899
/* 2580 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2583 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2595
/* 2587 */    MCD::OPC_CheckPredicate, 0, 160, 0, // Skip to: 2751
/* 2591 */    MCD::OPC_Decode, 177, 2, 3, // Opcode: AsmOLOCR
/* 2595 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2607
/* 2599 */    MCD::OPC_CheckPredicate, 0, 148, 0, // Skip to: 2751
/* 2603 */    MCD::OPC_Decode, 165, 1, 3, // Opcode: AsmHLOCR
/* 2607 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 2619
/* 2611 */    MCD::OPC_CheckPredicate, 0, 136, 0, // Skip to: 2751
/* 2615 */    MCD::OPC_Decode, 145, 2, 3, // Opcode: AsmNLELOCR
/* 2619 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 2631
/* 2623 */    MCD::OPC_CheckPredicate, 0, 124, 0, // Skip to: 2751
/* 2627 */    MCD::OPC_Decode, 237, 1, 3, // Opcode: AsmLLOCR
/* 2631 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 2643
/* 2635 */    MCD::OPC_CheckPredicate, 0, 112, 0, // Skip to: 2751
/* 2639 */    MCD::OPC_Decode, 129, 2, 3, // Opcode: AsmNHELOCR
/* 2643 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 2655
/* 2647 */    MCD::OPC_CheckPredicate, 0, 100, 0, // Skip to: 2751
/* 2651 */    MCD::OPC_Decode, 229, 1, 3, // Opcode: AsmLHLOCR
/* 2655 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 2667
/* 2659 */    MCD::OPC_CheckPredicate, 0, 88, 0, // Skip to: 2751
/* 2663 */    MCD::OPC_Decode, 249, 1, 3, // Opcode: AsmNELOCR
/* 2667 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 2679
/* 2671 */    MCD::OPC_CheckPredicate, 0, 76, 0, // Skip to: 2751
/* 2675 */    MCD::OPC_Decode, 149, 1, 3, // Opcode: AsmELOCR
/* 2679 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 2691
/* 2683 */    MCD::OPC_CheckPredicate, 0, 64, 0, // Skip to: 2751
/* 2687 */    MCD::OPC_Decode, 153, 2, 3, // Opcode: AsmNLHLOCR
/* 2691 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 2703
/* 2695 */    MCD::OPC_CheckPredicate, 0, 52, 0, // Skip to: 2751
/* 2699 */    MCD::OPC_Decode, 157, 1, 3, // Opcode: AsmHELOCR
/* 2703 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 2715
/* 2707 */    MCD::OPC_CheckPredicate, 0, 40, 0, // Skip to: 2751
/* 2711 */    MCD::OPC_Decode, 161, 2, 3, // Opcode: AsmNLLOCR
/* 2715 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 2727
/* 2719 */    MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 2751
/* 2723 */    MCD::OPC_Decode, 221, 1, 3, // Opcode: AsmLELOCR
/* 2727 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 2739
/* 2731 */    MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 2751
/* 2735 */    MCD::OPC_Decode, 137, 2, 3, // Opcode: AsmNHLOCR
/* 2739 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 2751
/* 2743 */    MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 2751
/* 2747 */    MCD::OPC_Decode, 169, 2, 3, // Opcode: AsmNOLOCR
/* 2751 */    MCD::OPC_CheckPredicate, 0, 144, 0, // Skip to: 2899
/* 2755 */    MCD::OPC_Decode, 241, 1, 67, // Opcode: AsmLOCR
/* 2759 */    MCD::OPC_FilterValue, 244, 1, 14, 0, // Skip to: 2778
/* 2764 */    MCD::OPC_CheckPredicate, 1, 131, 0, // Skip to: 2899
/* 2768 */    MCD::OPC_CheckField, 8, 4, 0, 125, 0, // Skip to: 2899
/* 2774 */    MCD::OPC_Decode, 211, 4, 68, // Opcode: NRK
/* 2778 */    MCD::OPC_FilterValue, 246, 1, 14, 0, // Skip to: 2797
/* 2783 */    MCD::OPC_CheckPredicate, 1, 112, 0, // Skip to: 2899
/* 2787 */    MCD::OPC_CheckField, 8, 4, 0, 106, 0, // Skip to: 2899
/* 2793 */    MCD::OPC_Decode, 229, 4, 68, // Opcode: ORK
/* 2797 */    MCD::OPC_FilterValue, 247, 1, 14, 0, // Skip to: 2816
/* 2802 */    MCD::OPC_CheckPredicate, 1, 93, 0, // Skip to: 2899
/* 2806 */    MCD::OPC_CheckField, 8, 4, 0, 87, 0, // Skip to: 2899
/* 2812 */    MCD::OPC_Decode, 204, 5, 68, // Opcode: XRK
/* 2816 */    MCD::OPC_FilterValue, 248, 1, 13, 0, // Skip to: 2834
/* 2821 */    MCD::OPC_CheckPredicate, 1, 74, 0, // Skip to: 2899
/* 2825 */    MCD::OPC_CheckField, 8, 4, 0, 68, 0, // Skip to: 2899
/* 2831 */    MCD::OPC_Decode, 58, 68, // Opcode: ARK
/* 2834 */    MCD::OPC_FilterValue, 249, 1, 14, 0, // Skip to: 2853
/* 2839 */    MCD::OPC_CheckPredicate, 1, 56, 0, // Skip to: 2899
/* 2843 */    MCD::OPC_CheckField, 8, 4, 0, 50, 0, // Skip to: 2899
/* 2849 */    MCD::OPC_Decode, 153, 5, 68, // Opcode: SRK
/* 2853 */    MCD::OPC_FilterValue, 250, 1, 13, 0, // Skip to: 2871
/* 2858 */    MCD::OPC_CheckPredicate, 1, 37, 0, // Skip to: 2899
/* 2862 */    MCD::OPC_CheckField, 8, 4, 0, 31, 0, // Skip to: 2899
/* 2868 */    MCD::OPC_Decode, 55, 68, // Opcode: ALRK
/* 2871 */    MCD::OPC_FilterValue, 251, 1, 23, 0, // Skip to: 2899
/* 2876 */    MCD::OPC_CheckPredicate, 1, 19, 0, // Skip to: 2899
/* 2880 */    MCD::OPC_CheckField, 8, 4, 0, 13, 0, // Skip to: 2899
/* 2886 */    MCD::OPC_Decode, 142, 5, 68, // Opcode: SLRK
/* 2890 */    MCD::OPC_FilterValue, 186, 1, 4, 0, // Skip to: 2899
/* 2895 */    MCD::OPC_Decode, 252, 2, 69, // Opcode: CS
/* 2899 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTable48[] = {
/* 0 */       MCD::OPC_ExtractField, 40, 8,  // Inst{47-40} ...
/* 3 */       MCD::OPC_FilterValue, 192, 1, 238, 0, // Skip to: 246
/* 8 */       MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 11 */      MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 19
/* 15 */      MCD::OPC_Decode, 185, 3, 70, // Opcode: LARL
/* 19 */      MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 27
/* 23 */      MCD::OPC_Decode, 212, 3, 71, // Opcode: LGFI
/* 27 */      MCD::OPC_FilterValue, 4, 127, 0, // Skip to: 158
/* 31 */      MCD::OPC_ExtractField, 36, 4,  // Inst{39-36} ...
/* 34 */      MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 42
/* 38 */      MCD::OPC_Decode, 173, 2, 72, // Opcode: AsmOJG
/* 42 */      MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 50
/* 46 */      MCD::OPC_Decode, 161, 1, 72, // Opcode: AsmHJG
/* 50 */      MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 58
/* 54 */      MCD::OPC_Decode, 141, 2, 72, // Opcode: AsmNLEJG
/* 58 */      MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 66
/* 62 */      MCD::OPC_Decode, 233, 1, 72, // Opcode: AsmLJG
/* 66 */      MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 74
/* 70 */      MCD::OPC_Decode, 253, 1, 72, // Opcode: AsmNHEJG
/* 74 */      MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 82
/* 78 */      MCD::OPC_Decode, 225, 1, 72, // Opcode: AsmLHJG
/* 82 */      MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 90
/* 86 */      MCD::OPC_Decode, 245, 1, 72, // Opcode: AsmNEJG
/* 90 */      MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 98
/* 94 */      MCD::OPC_Decode, 145, 1, 72, // Opcode: AsmEJG
/* 98 */      MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 106
/* 102 */     MCD::OPC_Decode, 149, 2, 72, // Opcode: AsmNLHJG
/* 106 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 114
/* 110 */     MCD::OPC_Decode, 153, 1, 72, // Opcode: AsmHEJG
/* 114 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 122
/* 118 */     MCD::OPC_Decode, 157, 2, 72, // Opcode: AsmNLJG
/* 122 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 130
/* 126 */     MCD::OPC_Decode, 217, 1, 72, // Opcode: AsmLEJG
/* 130 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 138
/* 134 */     MCD::OPC_Decode, 133, 2, 72, // Opcode: AsmNHJG
/* 138 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 146
/* 142 */     MCD::OPC_Decode, 165, 2, 72, // Opcode: AsmNOJG
/* 146 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 154
/* 150 */     MCD::OPC_Decode, 181, 3, 72, // Opcode: JG
/* 154 */     MCD::OPC_Decode, 139, 1, 73, // Opcode: AsmBRCL
/* 158 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 166
/* 162 */     MCD::OPC_Decode, 137, 1, 70, // Opcode: AsmBRASL
/* 166 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 174
/* 170 */     MCD::OPC_Decode, 199, 5, 74, // Opcode: XIHF
/* 174 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 182
/* 178 */     MCD::OPC_Decode, 200, 5, 74, // Opcode: XILF
/* 182 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 190
/* 186 */     MCD::OPC_Decode, 171, 3, 74, // Opcode: IIHF
/* 190 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 198
/* 194 */     MCD::OPC_Decode, 174, 3, 74, // Opcode: IILF
/* 198 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 206
/* 202 */     MCD::OPC_Decode, 200, 4, 74, // Opcode: NIHF
/* 206 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 214
/* 210 */     MCD::OPC_Decode, 203, 4, 74, // Opcode: NILF
/* 214 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 222
/* 218 */     MCD::OPC_Decode, 218, 4, 74, // Opcode: OIHF
/* 222 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 230
/* 226 */     MCD::OPC_Decode, 221, 4, 74, // Opcode: OILF
/* 230 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 238
/* 234 */     MCD::OPC_Decode, 239, 3, 75, // Opcode: LLIHF
/* 238 */     MCD::OPC_FilterValue, 15, 242, 9, // Skip to: 2788
/* 242 */     MCD::OPC_Decode, 242, 3, 75, // Opcode: LLILF
/* 246 */     MCD::OPC_FilterValue, 194, 1, 95, 0, // Skip to: 346
/* 251 */     MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 254 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 262
/* 258 */     MCD::OPC_Decode, 180, 4, 76, // Opcode: MSGFI
/* 262 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 270
/* 266 */     MCD::OPC_Decode, 177, 4, 77, // Opcode: MSFI
/* 270 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 278
/* 274 */     MCD::OPC_Decode, 134, 5, 74, // Opcode: SLGFI
/* 278 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 286
/* 282 */     MCD::OPC_Decode, 130, 5, 78, // Opcode: SLFI
/* 286 */     MCD::OPC_FilterValue, 8, 3, 0, // Skip to: 293
/* 290 */     MCD::OPC_Decode, 29, 76, // Opcode: AGFI
/* 293 */     MCD::OPC_FilterValue, 9, 3, 0, // Skip to: 300
/* 297 */     MCD::OPC_Decode, 26, 77, // Opcode: AFI
/* 300 */     MCD::OPC_FilterValue, 10, 3, 0, // Skip to: 307
/* 304 */     MCD::OPC_Decode, 48, 74, // Opcode: ALGFI
/* 307 */     MCD::OPC_FilterValue, 11, 3, 0, // Skip to: 314
/* 311 */     MCD::OPC_Decode, 45, 78, // Opcode: ALFI
/* 314 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 322
/* 318 */     MCD::OPC_Decode, 207, 2, 71, // Opcode: CGFI
/* 322 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 330
/* 326 */     MCD::OPC_Decode, 201, 2, 79, // Opcode: CFI
/* 330 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 338
/* 334 */     MCD::OPC_Decode, 231, 2, 75, // Opcode: CLGFI
/* 338 */     MCD::OPC_FilterValue, 15, 142, 9, // Skip to: 2788
/* 342 */     MCD::OPC_Decode, 228, 2, 80, // Opcode: CLFI
/* 346 */     MCD::OPC_FilterValue, 196, 1, 91, 0, // Skip to: 442
/* 351 */     MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 354 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 362
/* 358 */     MCD::OPC_Decode, 238, 3, 81, // Opcode: LLHRL
/* 362 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 370
/* 366 */     MCD::OPC_Decode, 218, 3, 70, // Opcode: LGHRL
/* 370 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 378
/* 374 */     MCD::OPC_Decode, 224, 3, 81, // Opcode: LHRL
/* 378 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 386
/* 382 */     MCD::OPC_Decode, 235, 3, 70, // Opcode: LLGHRL
/* 386 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 394
/* 390 */     MCD::OPC_Decode, 174, 5, 70, // Opcode: STHRL
/* 394 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 402
/* 398 */     MCD::OPC_Decode, 220, 3, 70, // Opcode: LGRL
/* 402 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 410
/* 406 */     MCD::OPC_Decode, 170, 5, 70, // Opcode: STGRL
/* 410 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 418
/* 414 */     MCD::OPC_Decode, 214, 3, 70, // Opcode: LGFRL
/* 418 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 426
/* 422 */     MCD::OPC_Decode, 129, 4, 81, // Opcode: LRL
/* 426 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 434
/* 430 */     MCD::OPC_Decode, 232, 3, 70, // Opcode: LLGFRL
/* 434 */     MCD::OPC_FilterValue, 15, 46, 9, // Skip to: 2788
/* 438 */     MCD::OPC_Decode, 181, 5, 70, // Opcode: STRL
/* 442 */     MCD::OPC_FilterValue, 198, 1, 83, 0, // Skip to: 530
/* 447 */     MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 450 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 458
/* 454 */     MCD::OPC_Decode, 212, 2, 70, // Opcode: CGHRL
/* 458 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 466
/* 462 */     MCD::OPC_Decode, 222, 2, 81, // Opcode: CHRL
/* 466 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 474
/* 470 */     MCD::OPC_Decode, 234, 2, 70, // Opcode: CLGHRL
/* 474 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 482
/* 478 */     MCD::OPC_Decode, 239, 2, 81, // Opcode: CLHRL
/* 482 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 490
/* 486 */     MCD::OPC_Decode, 217, 2, 70, // Opcode: CGRL
/* 490 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 498
/* 494 */     MCD::OPC_Decode, 237, 2, 70, // Opcode: CLGRL
/* 498 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 506
/* 502 */     MCD::OPC_Decode, 209, 2, 70, // Opcode: CGFRL
/* 506 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 514
/* 510 */     MCD::OPC_Decode, 251, 2, 81, // Opcode: CRL
/* 514 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 522
/* 518 */     MCD::OPC_Decode, 233, 2, 70, // Opcode: CLGFRL
/* 522 */     MCD::OPC_FilterValue, 15, 214, 8, // Skip to: 2788
/* 526 */     MCD::OPC_Decode, 243, 2, 81, // Opcode: CLRL
/* 530 */     MCD::OPC_FilterValue, 210, 1, 4, 0, // Skip to: 539
/* 535 */     MCD::OPC_Decode, 185, 4, 82, // Opcode: MVC
/* 539 */     MCD::OPC_FilterValue, 227, 1, 25, 2, // Skip to: 1081
/* 544 */     MCD::OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 547 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 555
/* 551 */     MCD::OPC_Decode, 139, 4, 83, // Opcode: LTG
/* 555 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 563
/* 559 */     MCD::OPC_Decode, 207, 3, 83, // Opcode: LG
/* 563 */     MCD::OPC_FilterValue, 8, 3, 0, // Skip to: 570
/* 567 */     MCD::OPC_Decode, 27, 84, // Opcode: AG
/* 570 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 578
/* 574 */     MCD::OPC_Decode, 247, 4, 84, // Opcode: SG
/* 578 */     MCD::OPC_FilterValue, 10, 3, 0, // Skip to: 585
/* 582 */     MCD::OPC_Decode, 46, 84, // Opcode: ALG
/* 585 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 593
/* 589 */     MCD::OPC_Decode, 131, 5, 84, // Opcode: SLG
/* 593 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 601
/* 597 */     MCD::OPC_Decode, 178, 4, 84, // Opcode: MSG
/* 601 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 609
/* 605 */     MCD::OPC_Decode, 157, 3, 85, // Opcode: DSG
/* 609 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 617
/* 613 */     MCD::OPC_Decode, 131, 4, 83, // Opcode: LRVG
/* 617 */     MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 625
/* 621 */     MCD::OPC_Decode, 134, 4, 86, // Opcode: LT
/* 625 */     MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 633
/* 629 */     MCD::OPC_Decode, 211, 3, 83, // Opcode: LGF
/* 633 */     MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 641
/* 637 */     MCD::OPC_Decode, 215, 3, 83, // Opcode: LGH
/* 641 */     MCD::OPC_FilterValue, 22, 4, 0, // Skip to: 649
/* 645 */     MCD::OPC_Decode, 230, 3, 83, // Opcode: LLGF
/* 649 */     MCD::OPC_FilterValue, 24, 3, 0, // Skip to: 656
/* 653 */     MCD::OPC_Decode, 28, 84, // Opcode: AGF
/* 656 */     MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 664
/* 660 */     MCD::OPC_Decode, 248, 4, 84, // Opcode: SGF
/* 664 */     MCD::OPC_FilterValue, 26, 3, 0, // Skip to: 671
/* 668 */     MCD::OPC_Decode, 47, 84, // Opcode: ALGF
/* 671 */     MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 679
/* 675 */     MCD::OPC_Decode, 133, 5, 84, // Opcode: SLGF
/* 679 */     MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 687
/* 683 */     MCD::OPC_Decode, 179, 4, 84, // Opcode: MSGF
/* 687 */     MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 695
/* 691 */     MCD::OPC_Decode, 158, 3, 85, // Opcode: DSGF
/* 695 */     MCD::OPC_FilterValue, 30, 4, 0, // Skip to: 703
/* 699 */     MCD::OPC_Decode, 130, 4, 86, // Opcode: LRV
/* 703 */     MCD::OPC_FilterValue, 32, 4, 0, // Skip to: 711
/* 707 */     MCD::OPC_Decode, 203, 2, 83, // Opcode: CG
/* 711 */     MCD::OPC_FilterValue, 33, 4, 0, // Skip to: 719
/* 715 */     MCD::OPC_Decode, 229, 2, 83, // Opcode: CLG
/* 719 */     MCD::OPC_FilterValue, 36, 4, 0, // Skip to: 727
/* 723 */     MCD::OPC_Decode, 169, 5, 83, // Opcode: STG
/* 727 */     MCD::OPC_FilterValue, 47, 4, 0, // Skip to: 735
/* 731 */     MCD::OPC_Decode, 184, 5, 83, // Opcode: STRVG
/* 735 */     MCD::OPC_FilterValue, 48, 4, 0, // Skip to: 743
/* 739 */     MCD::OPC_Decode, 206, 2, 83, // Opcode: CGF
/* 743 */     MCD::OPC_FilterValue, 49, 4, 0, // Skip to: 751
/* 747 */     MCD::OPC_Decode, 230, 2, 83, // Opcode: CLGF
/* 751 */     MCD::OPC_FilterValue, 50, 4, 0, // Skip to: 759
/* 755 */     MCD::OPC_Decode, 140, 4, 83, // Opcode: LTGF
/* 759 */     MCD::OPC_FilterValue, 52, 4, 0, // Skip to: 767
/* 763 */     MCD::OPC_Decode, 210, 2, 83, // Opcode: CGH
/* 767 */     MCD::OPC_FilterValue, 62, 4, 0, // Skip to: 775
/* 771 */     MCD::OPC_Decode, 183, 5, 86, // Opcode: STRV
/* 775 */     MCD::OPC_FilterValue, 80, 4, 0, // Skip to: 783
/* 779 */     MCD::OPC_Decode, 186, 5, 83, // Opcode: STY
/* 783 */     MCD::OPC_FilterValue, 81, 4, 0, // Skip to: 791
/* 787 */     MCD::OPC_Decode, 184, 4, 87, // Opcode: MSY
/* 791 */     MCD::OPC_FilterValue, 84, 4, 0, // Skip to: 799
/* 795 */     MCD::OPC_Decode, 212, 4, 87, // Opcode: NY
/* 799 */     MCD::OPC_FilterValue, 85, 4, 0, // Skip to: 807
/* 803 */     MCD::OPC_Decode, 244, 2, 86, // Opcode: CLY
/* 807 */     MCD::OPC_FilterValue, 86, 4, 0, // Skip to: 815
/* 811 */     MCD::OPC_Decode, 230, 4, 87, // Opcode: OY
/* 815 */     MCD::OPC_FilterValue, 87, 4, 0, // Skip to: 823
/* 819 */     MCD::OPC_Decode, 205, 5, 87, // Opcode: XY
/* 823 */     MCD::OPC_FilterValue, 88, 4, 0, // Skip to: 831
/* 827 */     MCD::OPC_Decode, 152, 4, 86, // Opcode: LY
/* 831 */     MCD::OPC_FilterValue, 89, 4, 0, // Skip to: 839
/* 835 */     MCD::OPC_Decode, 130, 3, 86, // Opcode: CY
/* 839 */     MCD::OPC_FilterValue, 90, 4, 0, // Skip to: 847
/* 843 */     MCD::OPC_Decode, 134, 1, 87, // Opcode: AY
/* 847 */     MCD::OPC_FilterValue, 91, 4, 0, // Skip to: 855
/* 851 */     MCD::OPC_Decode, 188, 5, 87, // Opcode: SY
/* 855 */     MCD::OPC_FilterValue, 94, 3, 0, // Skip to: 862
/* 859 */     MCD::OPC_Decode, 56, 87, // Opcode: ALY
/* 862 */     MCD::OPC_FilterValue, 95, 4, 0, // Skip to: 870
/* 866 */     MCD::OPC_Decode, 143, 5, 87, // Opcode: SLY
/* 870 */     MCD::OPC_FilterValue, 112, 4, 0, // Skip to: 878
/* 874 */     MCD::OPC_Decode, 176, 5, 83, // Opcode: STHY
/* 878 */     MCD::OPC_FilterValue, 113, 4, 0, // Skip to: 886
/* 882 */     MCD::OPC_Decode, 186, 3, 83, // Opcode: LAY
/* 886 */     MCD::OPC_FilterValue, 114, 4, 0, // Skip to: 894
/* 890 */     MCD::OPC_Decode, 164, 5, 83, // Opcode: STCY
/* 894 */     MCD::OPC_FilterValue, 115, 4, 0, // Skip to: 902
/* 898 */     MCD::OPC_Decode, 170, 3, 84, // Opcode: ICY
/* 902 */     MCD::OPC_FilterValue, 118, 4, 0, // Skip to: 910
/* 906 */     MCD::OPC_Decode, 187, 3, 86, // Opcode: LB
/* 910 */     MCD::OPC_FilterValue, 119, 4, 0, // Skip to: 918
/* 914 */     MCD::OPC_Decode, 208, 3, 83, // Opcode: LGB
/* 918 */     MCD::OPC_FilterValue, 120, 4, 0, // Skip to: 926
/* 922 */     MCD::OPC_Decode, 225, 3, 86, // Opcode: LHY
/* 926 */     MCD::OPC_FilterValue, 121, 4, 0, // Skip to: 934
/* 930 */     MCD::OPC_Decode, 224, 2, 86, // Opcode: CHY
/* 934 */     MCD::OPC_FilterValue, 122, 3, 0, // Skip to: 941
/* 938 */     MCD::OPC_Decode, 39, 87, // Opcode: AHY
/* 941 */     MCD::OPC_FilterValue, 123, 4, 0, // Skip to: 949
/* 945 */     MCD::OPC_Decode, 253, 4, 87, // Opcode: SHY
/* 949 */     MCD::OPC_FilterValue, 124, 4, 0, // Skip to: 957
/* 953 */     MCD::OPC_Decode, 169, 4, 87, // Opcode: MHY
/* 957 */     MCD::OPC_FilterValue, 128, 1, 4, 0, // Skip to: 966
/* 962 */     MCD::OPC_Decode, 196, 4, 84, // Opcode: NG
/* 966 */     MCD::OPC_FilterValue, 129, 1, 4, 0, // Skip to: 975
/* 971 */     MCD::OPC_Decode, 214, 4, 84, // Opcode: OG
/* 975 */     MCD::OPC_FilterValue, 130, 1, 4, 0, // Skip to: 984
/* 980 */     MCD::OPC_Decode, 195, 5, 84, // Opcode: XG
/* 984 */     MCD::OPC_FilterValue, 134, 1, 4, 0, // Skip to: 993
/* 989 */     MCD::OPC_Decode, 170, 4, 85, // Opcode: MLG
/* 993 */     MCD::OPC_FilterValue, 135, 1, 4, 0, // Skip to: 1002
/* 998 */     MCD::OPC_Decode, 154, 3, 85, // Opcode: DLG
/* 1002 */    MCD::OPC_FilterValue, 136, 1, 3, 0, // Skip to: 1010
/* 1007 */    MCD::OPC_Decode, 42, 84, // Opcode: ALCG
/* 1010 */    MCD::OPC_FilterValue, 137, 1, 4, 0, // Skip to: 1019
/* 1015 */    MCD::OPC_Decode, 128, 5, 84, // Opcode: SLBG
/* 1019 */    MCD::OPC_FilterValue, 144, 1, 4, 0, // Skip to: 1028
/* 1024 */    MCD::OPC_Decode, 228, 3, 83, // Opcode: LLGC
/* 1028 */    MCD::OPC_FilterValue, 145, 1, 4, 0, // Skip to: 1037
/* 1033 */    MCD::OPC_Decode, 233, 3, 83, // Opcode: LLGH
/* 1037 */    MCD::OPC_FilterValue, 148, 1, 4, 0, // Skip to: 1046
/* 1042 */    MCD::OPC_Decode, 226, 3, 86, // Opcode: LLC
/* 1046 */    MCD::OPC_FilterValue, 149, 1, 4, 0, // Skip to: 1055
/* 1051 */    MCD::OPC_Decode, 236, 3, 86, // Opcode: LLH
/* 1055 */    MCD::OPC_FilterValue, 151, 1, 4, 0, // Skip to: 1064
/* 1060 */    MCD::OPC_Decode, 153, 3, 85, // Opcode: DL
/* 1064 */    MCD::OPC_FilterValue, 152, 1, 3, 0, // Skip to: 1072
/* 1069 */    MCD::OPC_Decode, 41, 87, // Opcode: ALC
/* 1072 */    MCD::OPC_FilterValue, 153, 1, 175, 6, // Skip to: 2788
/* 1077 */    MCD::OPC_Decode, 255, 4, 87, // Opcode: SLB
/* 1081 */    MCD::OPC_FilterValue, 229, 1, 75, 0, // Skip to: 1161
/* 1086 */    MCD::OPC_ExtractField, 32, 8,  // Inst{39-32} ...
/* 1089 */    MCD::OPC_FilterValue, 68, 4, 0, // Skip to: 1097
/* 1093 */    MCD::OPC_Decode, 188, 4, 88, // Opcode: MVHHI
/* 1097 */    MCD::OPC_FilterValue, 72, 4, 0, // Skip to: 1105
/* 1101 */    MCD::OPC_Decode, 187, 4, 88, // Opcode: MVGHI
/* 1105 */    MCD::OPC_FilterValue, 76, 4, 0, // Skip to: 1113
/* 1109 */    MCD::OPC_Decode, 189, 4, 88, // Opcode: MVHI
/* 1113 */    MCD::OPC_FilterValue, 84, 4, 0, // Skip to: 1121
/* 1117 */    MCD::OPC_Decode, 220, 2, 88, // Opcode: CHHSI
/* 1121 */    MCD::OPC_FilterValue, 85, 4, 0, // Skip to: 1129
/* 1125 */    MCD::OPC_Decode, 238, 2, 89, // Opcode: CLHHSI
/* 1129 */    MCD::OPC_FilterValue, 88, 4, 0, // Skip to: 1137
/* 1133 */    MCD::OPC_Decode, 213, 2, 88, // Opcode: CGHSI
/* 1137 */    MCD::OPC_FilterValue, 89, 4, 0, // Skip to: 1145
/* 1141 */    MCD::OPC_Decode, 235, 2, 89, // Opcode: CLGHSI
/* 1145 */    MCD::OPC_FilterValue, 92, 4, 0, // Skip to: 1153
/* 1149 */    MCD::OPC_Decode, 223, 2, 88, // Opcode: CHSI
/* 1153 */    MCD::OPC_FilterValue, 93, 95, 6, // Skip to: 2788
/* 1157 */    MCD::OPC_Decode, 227, 2, 89, // Opcode: CLFHSI
/* 1161 */    MCD::OPC_FilterValue, 235, 1, 136, 3, // Skip to: 2070
/* 1166 */    MCD::OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 1169 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 1177
/* 1173 */    MCD::OPC_Decode, 245, 3, 90, // Opcode: LMG
/* 1177 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 1185
/* 1181 */    MCD::OPC_Decode, 151, 5, 91, // Opcode: SRAG
/* 1185 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 1193
/* 1189 */    MCD::OPC_Decode, 155, 5, 91, // Opcode: SRLG
/* 1193 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 1201
/* 1197 */    MCD::OPC_Decode, 139, 5, 91, // Opcode: SLLG
/* 1201 */    MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 1209
/* 1205 */    MCD::OPC_Decode, 254, 2, 92, // Opcode: CSY
/* 1209 */    MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 1217
/* 1213 */    MCD::OPC_Decode, 238, 4, 91, // Opcode: RLLG
/* 1217 */    MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 1225
/* 1221 */    MCD::OPC_Decode, 237, 4, 93, // Opcode: RLL
/* 1225 */    MCD::OPC_FilterValue, 36, 4, 0, // Skip to: 1233
/* 1229 */    MCD::OPC_Decode, 177, 5, 90, // Opcode: STMG
/* 1233 */    MCD::OPC_FilterValue, 48, 4, 0, // Skip to: 1241
/* 1237 */    MCD::OPC_Decode, 253, 2, 94, // Opcode: CSG
/* 1241 */    MCD::OPC_FilterValue, 82, 4, 0, // Skip to: 1249
/* 1245 */    MCD::OPC_Decode, 191, 4, 95, // Opcode: MVIY
/* 1249 */    MCD::OPC_FilterValue, 84, 4, 0, // Skip to: 1257
/* 1253 */    MCD::OPC_Decode, 209, 4, 95, // Opcode: NIY
/* 1257 */    MCD::OPC_FilterValue, 85, 4, 0, // Skip to: 1265
/* 1261 */    MCD::OPC_Decode, 241, 2, 95, // Opcode: CLIY
/* 1265 */    MCD::OPC_FilterValue, 86, 4, 0, // Skip to: 1273
/* 1269 */    MCD::OPC_Decode, 227, 4, 95, // Opcode: OIY
/* 1273 */    MCD::OPC_FilterValue, 87, 4, 0, // Skip to: 1281
/* 1277 */    MCD::OPC_Decode, 202, 5, 95, // Opcode: XIY
/* 1281 */    MCD::OPC_FilterValue, 106, 3, 0, // Skip to: 1288
/* 1285 */    MCD::OPC_Decode, 59, 96, // Opcode: ASI
/* 1288 */    MCD::OPC_FilterValue, 122, 3, 0, // Skip to: 1295
/* 1292 */    MCD::OPC_Decode, 35, 96, // Opcode: AGSI
/* 1295 */    MCD::OPC_FilterValue, 220, 1, 8, 0, // Skip to: 1308
/* 1300 */    MCD::OPC_CheckPredicate, 1, 204, 5, // Skip to: 2788
/* 1304 */    MCD::OPC_Decode, 152, 5, 93, // Opcode: SRAK
/* 1308 */    MCD::OPC_FilterValue, 222, 1, 8, 0, // Skip to: 1321
/* 1313 */    MCD::OPC_CheckPredicate, 1, 191, 5, // Skip to: 2788
/* 1317 */    MCD::OPC_Decode, 156, 5, 93, // Opcode: SRLK
/* 1321 */    MCD::OPC_FilterValue, 223, 1, 8, 0, // Skip to: 1334
/* 1326 */    MCD::OPC_CheckPredicate, 1, 178, 5, // Skip to: 2788
/* 1330 */    MCD::OPC_Decode, 140, 5, 93, // Opcode: SLLK
/* 1334 */    MCD::OPC_FilterValue, 226, 1, 179, 0, // Skip to: 1518
/* 1339 */    MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 1342 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1354
/* 1346 */    MCD::OPC_CheckPredicate, 0, 160, 0, // Skip to: 1510
/* 1350 */    MCD::OPC_Decode, 175, 2, 97, // Opcode: AsmOLOCG
/* 1354 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1366
/* 1358 */    MCD::OPC_CheckPredicate, 0, 148, 0, // Skip to: 1510
/* 1362 */    MCD::OPC_Decode, 163, 1, 97, // Opcode: AsmHLOCG
/* 1366 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1378
/* 1370 */    MCD::OPC_CheckPredicate, 0, 136, 0, // Skip to: 1510
/* 1374 */    MCD::OPC_Decode, 143, 2, 97, // Opcode: AsmNLELOCG
/* 1378 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 1390
/* 1382 */    MCD::OPC_CheckPredicate, 0, 124, 0, // Skip to: 1510
/* 1386 */    MCD::OPC_Decode, 235, 1, 97, // Opcode: AsmLLOCG
/* 1390 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1402
/* 1394 */    MCD::OPC_CheckPredicate, 0, 112, 0, // Skip to: 1510
/* 1398 */    MCD::OPC_Decode, 255, 1, 97, // Opcode: AsmNHELOCG
/* 1402 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1414
/* 1406 */    MCD::OPC_CheckPredicate, 0, 100, 0, // Skip to: 1510
/* 1410 */    MCD::OPC_Decode, 227, 1, 97, // Opcode: AsmLHLOCG
/* 1414 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1426
/* 1418 */    MCD::OPC_CheckPredicate, 0, 88, 0, // Skip to: 1510
/* 1422 */    MCD::OPC_Decode, 247, 1, 97, // Opcode: AsmNELOCG
/* 1426 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1438
/* 1430 */    MCD::OPC_CheckPredicate, 0, 76, 0, // Skip to: 1510
/* 1434 */    MCD::OPC_Decode, 147, 1, 97, // Opcode: AsmELOCG
/* 1438 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1450
/* 1442 */    MCD::OPC_CheckPredicate, 0, 64, 0, // Skip to: 1510
/* 1446 */    MCD::OPC_Decode, 151, 2, 97, // Opcode: AsmNLHLOCG
/* 1450 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 1462
/* 1454 */    MCD::OPC_CheckPredicate, 0, 52, 0, // Skip to: 1510
/* 1458 */    MCD::OPC_Decode, 155, 1, 97, // Opcode: AsmHELOCG
/* 1462 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1474
/* 1466 */    MCD::OPC_CheckPredicate, 0, 40, 0, // Skip to: 1510
/* 1470 */    MCD::OPC_Decode, 159, 2, 97, // Opcode: AsmNLLOCG
/* 1474 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 1486
/* 1478 */    MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 1510
/* 1482 */    MCD::OPC_Decode, 219, 1, 97, // Opcode: AsmLELOCG
/* 1486 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 1498
/* 1490 */    MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 1510
/* 1494 */    MCD::OPC_Decode, 135, 2, 97, // Opcode: AsmNHLOCG
/* 1498 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1510
/* 1502 */    MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 1510
/* 1506 */    MCD::OPC_Decode, 167, 2, 97, // Opcode: AsmNOLOCG
/* 1510 */    MCD::OPC_CheckPredicate, 0, 250, 4, // Skip to: 2788
/* 1514 */    MCD::OPC_Decode, 239, 1, 98, // Opcode: AsmLOCG
/* 1518 */    MCD::OPC_FilterValue, 227, 1, 179, 0, // Skip to: 1702
/* 1523 */    MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 1526 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1538
/* 1530 */    MCD::OPC_CheckPredicate, 0, 160, 0, // Skip to: 1694
/* 1534 */    MCD::OPC_Decode, 179, 2, 99, // Opcode: AsmOSTOCG
/* 1538 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1550
/* 1542 */    MCD::OPC_CheckPredicate, 0, 148, 0, // Skip to: 1694
/* 1546 */    MCD::OPC_Decode, 167, 1, 99, // Opcode: AsmHSTOCG
/* 1550 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1562
/* 1554 */    MCD::OPC_CheckPredicate, 0, 136, 0, // Skip to: 1694
/* 1558 */    MCD::OPC_Decode, 147, 2, 99, // Opcode: AsmNLESTOCG
/* 1562 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 1574
/* 1566 */    MCD::OPC_CheckPredicate, 0, 124, 0, // Skip to: 1694
/* 1570 */    MCD::OPC_Decode, 243, 1, 99, // Opcode: AsmLSTOCG
/* 1574 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1586
/* 1578 */    MCD::OPC_CheckPredicate, 0, 112, 0, // Skip to: 1694
/* 1582 */    MCD::OPC_Decode, 131, 2, 99, // Opcode: AsmNHESTOCG
/* 1586 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1598
/* 1590 */    MCD::OPC_CheckPredicate, 0, 100, 0, // Skip to: 1694
/* 1594 */    MCD::OPC_Decode, 231, 1, 99, // Opcode: AsmLHSTOCG
/* 1598 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1610
/* 1602 */    MCD::OPC_CheckPredicate, 0, 88, 0, // Skip to: 1694
/* 1606 */    MCD::OPC_Decode, 251, 1, 99, // Opcode: AsmNESTOCG
/* 1610 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1622
/* 1614 */    MCD::OPC_CheckPredicate, 0, 76, 0, // Skip to: 1694
/* 1618 */    MCD::OPC_Decode, 151, 1, 99, // Opcode: AsmESTOCG
/* 1622 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1634
/* 1626 */    MCD::OPC_CheckPredicate, 0, 64, 0, // Skip to: 1694
/* 1630 */    MCD::OPC_Decode, 155, 2, 99, // Opcode: AsmNLHSTOCG
/* 1634 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 1646
/* 1638 */    MCD::OPC_CheckPredicate, 0, 52, 0, // Skip to: 1694
/* 1642 */    MCD::OPC_Decode, 159, 1, 99, // Opcode: AsmHESTOCG
/* 1646 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1658
/* 1650 */    MCD::OPC_CheckPredicate, 0, 40, 0, // Skip to: 1694
/* 1654 */    MCD::OPC_Decode, 163, 2, 99, // Opcode: AsmNLSTOCG
/* 1658 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 1670
/* 1662 */    MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 1694
/* 1666 */    MCD::OPC_Decode, 223, 1, 99, // Opcode: AsmLESTOCG
/* 1670 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 1682
/* 1674 */    MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 1694
/* 1678 */    MCD::OPC_Decode, 139, 2, 99, // Opcode: AsmNHSTOCG
/* 1682 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1694
/* 1686 */    MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 1694
/* 1690 */    MCD::OPC_Decode, 171, 2, 99, // Opcode: AsmNOSTOCG
/* 1694 */    MCD::OPC_CheckPredicate, 0, 66, 4, // Skip to: 2788
/* 1698 */    MCD::OPC_Decode, 181, 2, 100, // Opcode: AsmSTOCG
/* 1702 */    MCD::OPC_FilterValue, 242, 1, 179, 0, // Skip to: 1886
/* 1707 */    MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 1710 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1722
/* 1714 */    MCD::OPC_CheckPredicate, 0, 160, 0, // Skip to: 1878
/* 1718 */    MCD::OPC_Decode, 174, 2, 101, // Opcode: AsmOLOC
/* 1722 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1734
/* 1726 */    MCD::OPC_CheckPredicate, 0, 148, 0, // Skip to: 1878
/* 1730 */    MCD::OPC_Decode, 162, 1, 101, // Opcode: AsmHLOC
/* 1734 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1746
/* 1738 */    MCD::OPC_CheckPredicate, 0, 136, 0, // Skip to: 1878
/* 1742 */    MCD::OPC_Decode, 142, 2, 101, // Opcode: AsmNLELOC
/* 1746 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 1758
/* 1750 */    MCD::OPC_CheckPredicate, 0, 124, 0, // Skip to: 1878
/* 1754 */    MCD::OPC_Decode, 234, 1, 101, // Opcode: AsmLLOC
/* 1758 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1770
/* 1762 */    MCD::OPC_CheckPredicate, 0, 112, 0, // Skip to: 1878
/* 1766 */    MCD::OPC_Decode, 254, 1, 101, // Opcode: AsmNHELOC
/* 1770 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1782
/* 1774 */    MCD::OPC_CheckPredicate, 0, 100, 0, // Skip to: 1878
/* 1778 */    MCD::OPC_Decode, 226, 1, 101, // Opcode: AsmLHLOC
/* 1782 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1794
/* 1786 */    MCD::OPC_CheckPredicate, 0, 88, 0, // Skip to: 1878
/* 1790 */    MCD::OPC_Decode, 246, 1, 101, // Opcode: AsmNELOC
/* 1794 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1806
/* 1798 */    MCD::OPC_CheckPredicate, 0, 76, 0, // Skip to: 1878
/* 1802 */    MCD::OPC_Decode, 146, 1, 101, // Opcode: AsmELOC
/* 1806 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1818
/* 1810 */    MCD::OPC_CheckPredicate, 0, 64, 0, // Skip to: 1878
/* 1814 */    MCD::OPC_Decode, 150, 2, 101, // Opcode: AsmNLHLOC
/* 1818 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 1830
/* 1822 */    MCD::OPC_CheckPredicate, 0, 52, 0, // Skip to: 1878
/* 1826 */    MCD::OPC_Decode, 154, 1, 101, // Opcode: AsmHELOC
/* 1830 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1842
/* 1834 */    MCD::OPC_CheckPredicate, 0, 40, 0, // Skip to: 1878
/* 1838 */    MCD::OPC_Decode, 158, 2, 101, // Opcode: AsmNLLOC
/* 1842 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 1854
/* 1846 */    MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 1878
/* 1850 */    MCD::OPC_Decode, 218, 1, 101, // Opcode: AsmLELOC
/* 1854 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 1866
/* 1858 */    MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 1878
/* 1862 */    MCD::OPC_Decode, 134, 2, 101, // Opcode: AsmNHLOC
/* 1866 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1878
/* 1870 */    MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 1878
/* 1874 */    MCD::OPC_Decode, 166, 2, 101, // Opcode: AsmNOLOC
/* 1878 */    MCD::OPC_CheckPredicate, 0, 138, 3, // Skip to: 2788
/* 1882 */    MCD::OPC_Decode, 238, 1, 102, // Opcode: AsmLOC
/* 1886 */    MCD::OPC_FilterValue, 243, 1, 129, 3, // Skip to: 2788
/* 1891 */    MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 1894 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1906
/* 1898 */    MCD::OPC_CheckPredicate, 0, 160, 0, // Skip to: 2062
/* 1902 */    MCD::OPC_Decode, 178, 2, 103, // Opcode: AsmOSTOC
/* 1906 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1918
/* 1910 */    MCD::OPC_CheckPredicate, 0, 148, 0, // Skip to: 2062
/* 1914 */    MCD::OPC_Decode, 166, 1, 103, // Opcode: AsmHSTOC
/* 1918 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1930
/* 1922 */    MCD::OPC_CheckPredicate, 0, 136, 0, // Skip to: 2062
/* 1926 */    MCD::OPC_Decode, 146, 2, 103, // Opcode: AsmNLESTOC
/* 1930 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 1942
/* 1934 */    MCD::OPC_CheckPredicate, 0, 124, 0, // Skip to: 2062
/* 1938 */    MCD::OPC_Decode, 242, 1, 103, // Opcode: AsmLSTOC
/* 1942 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1954
/* 1946 */    MCD::OPC_CheckPredicate, 0, 112, 0, // Skip to: 2062
/* 1950 */    MCD::OPC_Decode, 130, 2, 103, // Opcode: AsmNHESTOC
/* 1954 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1966
/* 1958 */    MCD::OPC_CheckPredicate, 0, 100, 0, // Skip to: 2062
/* 1962 */    MCD::OPC_Decode, 230, 1, 103, // Opcode: AsmLHSTOC
/* 1966 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1978
/* 1970 */    MCD::OPC_CheckPredicate, 0, 88, 0, // Skip to: 2062
/* 1974 */    MCD::OPC_Decode, 250, 1, 103, // Opcode: AsmNESTOC
/* 1978 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1990
/* 1982 */    MCD::OPC_CheckPredicate, 0, 76, 0, // Skip to: 2062
/* 1986 */    MCD::OPC_Decode, 150, 1, 103, // Opcode: AsmESTOC
/* 1990 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 2002
/* 1994 */    MCD::OPC_CheckPredicate, 0, 64, 0, // Skip to: 2062
/* 1998 */    MCD::OPC_Decode, 154, 2, 103, // Opcode: AsmNLHSTOC
/* 2002 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 2014
/* 2006 */    MCD::OPC_CheckPredicate, 0, 52, 0, // Skip to: 2062
/* 2010 */    MCD::OPC_Decode, 158, 1, 103, // Opcode: AsmHESTOC
/* 2014 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 2026
/* 2018 */    MCD::OPC_CheckPredicate, 0, 40, 0, // Skip to: 2062
/* 2022 */    MCD::OPC_Decode, 162, 2, 103, // Opcode: AsmNLSTOC
/* 2026 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 2038
/* 2030 */    MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 2062
/* 2034 */    MCD::OPC_Decode, 222, 1, 103, // Opcode: AsmLESTOC
/* 2038 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 2050
/* 2042 */    MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 2062
/* 2046 */    MCD::OPC_Decode, 138, 2, 103, // Opcode: AsmNHSTOC
/* 2050 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 2062
/* 2054 */    MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 2062
/* 2058 */    MCD::OPC_Decode, 170, 2, 103, // Opcode: AsmNOSTOC
/* 2062 */    MCD::OPC_CheckPredicate, 0, 210, 2, // Skip to: 2788
/* 2066 */    MCD::OPC_Decode, 180, 2, 104, // Opcode: AsmSTOC
/* 2070 */    MCD::OPC_FilterValue, 236, 1, 125, 1, // Skip to: 2456
/* 2075 */    MCD::OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 2078 */    MCD::OPC_FilterValue, 81, 8, 0, // Skip to: 2090
/* 2082 */    MCD::OPC_CheckPredicate, 2, 190, 2, // Skip to: 2788
/* 2086 */    MCD::OPC_Decode, 235, 4, 105, // Opcode: RISBLG
/* 2090 */    MCD::OPC_FilterValue, 84, 4, 0, // Skip to: 2098
/* 2094 */    MCD::OPC_Decode, 239, 4, 105, // Opcode: RNSBG
/* 2098 */    MCD::OPC_FilterValue, 85, 4, 0, // Skip to: 2106
/* 2102 */    MCD::OPC_Decode, 232, 4, 105, // Opcode: RISBG
/* 2106 */    MCD::OPC_FilterValue, 86, 4, 0, // Skip to: 2114
/* 2110 */    MCD::OPC_Decode, 240, 4, 105, // Opcode: ROSBG
/* 2114 */    MCD::OPC_FilterValue, 87, 4, 0, // Skip to: 2122
/* 2118 */    MCD::OPC_Decode, 241, 4, 105, // Opcode: RXSBG
/* 2122 */    MCD::OPC_FilterValue, 93, 8, 0, // Skip to: 2134
/* 2126 */    MCD::OPC_CheckPredicate, 2, 146, 2, // Skip to: 2788
/* 2130 */    MCD::OPC_Decode, 234, 4, 105, // Opcode: RISBHG
/* 2134 */    MCD::OPC_FilterValue, 100, 62, 0, // Skip to: 2200
/* 2138 */    MCD::OPC_ExtractField, 8, 4,  // Inst{11-8} ...
/* 2141 */    MCD::OPC_FilterValue, 0, 131, 2, // Skip to: 2788
/* 2145 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2148 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 2156
/* 2152 */    MCD::OPC_Decode, 181, 1, 106, // Opcode: AsmJHCGR
/* 2156 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 2164
/* 2160 */    MCD::OPC_Decode, 197, 1, 106, // Opcode: AsmJLCGR
/* 2164 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 2172
/* 2168 */    MCD::OPC_Decode, 213, 1, 106, // Opcode: AsmJLHCGR
/* 2172 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 2180
/* 2176 */    MCD::OPC_Decode, 173, 1, 106, // Opcode: AsmJECGR
/* 2180 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 2188
/* 2184 */    MCD::OPC_Decode, 189, 1, 106, // Opcode: AsmJHECGR
/* 2188 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 2196
/* 2192 */    MCD::OPC_Decode, 205, 1, 106, // Opcode: AsmJLECGR
/* 2196 */    MCD::OPC_Decode, 141, 1, 107, // Opcode: AsmCGRJ
/* 2200 */    MCD::OPC_FilterValue, 118, 62, 0, // Skip to: 2266
/* 2204 */    MCD::OPC_ExtractField, 8, 4,  // Inst{11-8} ...
/* 2207 */    MCD::OPC_FilterValue, 0, 65, 2, // Skip to: 2788
/* 2211 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2214 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 2222
/* 2218 */    MCD::OPC_Decode, 183, 1, 108, // Opcode: AsmJHCR
/* 2222 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 2230
/* 2226 */    MCD::OPC_Decode, 199, 1, 108, // Opcode: AsmJLCR
/* 2230 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 2238
/* 2234 */    MCD::OPC_Decode, 215, 1, 108, // Opcode: AsmJLHCR
/* 2238 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 2246
/* 2242 */    MCD::OPC_Decode, 175, 1, 108, // Opcode: AsmJECR
/* 2246 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 2254
/* 2250 */    MCD::OPC_Decode, 191, 1, 108, // Opcode: AsmJHECR
/* 2254 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 2262
/* 2258 */    MCD::OPC_Decode, 207, 1, 108, // Opcode: AsmJLECR
/* 2262 */    MCD::OPC_Decode, 143, 1, 109, // Opcode: AsmCRJ
/* 2266 */    MCD::OPC_FilterValue, 124, 55, 0, // Skip to: 2325
/* 2270 */    MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 2273 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 2281
/* 2277 */    MCD::OPC_Decode, 180, 1, 110, // Opcode: AsmJHCGI
/* 2281 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 2289
/* 2285 */    MCD::OPC_Decode, 196, 1, 110, // Opcode: AsmJLCGI
/* 2289 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 2297
/* 2293 */    MCD::OPC_Decode, 212, 1, 110, // Opcode: AsmJLHCGI
/* 2297 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 2305
/* 2301 */    MCD::OPC_Decode, 172, 1, 110, // Opcode: AsmJECGI
/* 2305 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 2313
/* 2309 */    MCD::OPC_Decode, 188, 1, 110, // Opcode: AsmJHECGI
/* 2313 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 2321
/* 2317 */    MCD::OPC_Decode, 204, 1, 110, // Opcode: AsmJLECGI
/* 2321 */    MCD::OPC_Decode, 140, 1, 111, // Opcode: AsmCGIJ
/* 2325 */    MCD::OPC_FilterValue, 126, 55, 0, // Skip to: 2384
/* 2329 */    MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 2332 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 2340
/* 2336 */    MCD::OPC_Decode, 182, 1, 112, // Opcode: AsmJHCI
/* 2340 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 2348
/* 2344 */    MCD::OPC_Decode, 198, 1, 112, // Opcode: AsmJLCI
/* 2348 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 2356
/* 2352 */    MCD::OPC_Decode, 214, 1, 112, // Opcode: AsmJLHCI
/* 2356 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 2364
/* 2360 */    MCD::OPC_Decode, 174, 1, 112, // Opcode: AsmJECI
/* 2364 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 2372
/* 2368 */    MCD::OPC_Decode, 190, 1, 112, // Opcode: AsmJHECI
/* 2372 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 2380
/* 2376 */    MCD::OPC_Decode, 206, 1, 112, // Opcode: AsmJLECI
/* 2380 */    MCD::OPC_Decode, 142, 1, 113, // Opcode: AsmCIJ
/* 2384 */    MCD::OPC_FilterValue, 216, 1, 13, 0, // Skip to: 2402
/* 2389 */    MCD::OPC_CheckPredicate, 1, 139, 1, // Skip to: 2788
/* 2393 */    MCD::OPC_CheckField, 8, 8, 0, 133, 1, // Skip to: 2788
/* 2399 */    MCD::OPC_Decode, 38, 114, // Opcode: AHIK
/* 2402 */    MCD::OPC_FilterValue, 217, 1, 13, 0, // Skip to: 2420
/* 2407 */    MCD::OPC_CheckPredicate, 1, 121, 1, // Skip to: 2788
/* 2411 */    MCD::OPC_CheckField, 8, 8, 0, 115, 1, // Skip to: 2788
/* 2417 */    MCD::OPC_Decode, 32, 115, // Opcode: AGHIK
/* 2420 */    MCD::OPC_FilterValue, 218, 1, 13, 0, // Skip to: 2438
/* 2425 */    MCD::OPC_CheckPredicate, 1, 103, 1, // Skip to: 2788
/* 2429 */    MCD::OPC_CheckField, 8, 8, 0, 97, 1, // Skip to: 2788
/* 2435 */    MCD::OPC_Decode, 53, 114, // Opcode: ALHSIK
/* 2438 */    MCD::OPC_FilterValue, 219, 1, 89, 1, // Skip to: 2788
/* 2443 */    MCD::OPC_CheckPredicate, 1, 85, 1, // Skip to: 2788
/* 2447 */    MCD::OPC_CheckField, 8, 8, 0, 79, 1, // Skip to: 2788
/* 2453 */    MCD::OPC_Decode, 50, 115, // Opcode: ALGHSIK
/* 2456 */    MCD::OPC_FilterValue, 237, 1, 71, 1, // Skip to: 2788
/* 2461 */    MCD::OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 2464 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 2478
/* 2468 */    MCD::OPC_CheckField, 8, 8, 0, 58, 1, // Skip to: 2788
/* 2474 */    MCD::OPC_Decode, 196, 3, 116, // Opcode: LDEB
/* 2478 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 2492
/* 2482 */    MCD::OPC_CheckField, 8, 8, 0, 44, 1, // Skip to: 2788
/* 2488 */    MCD::OPC_Decode, 147, 4, 117, // Opcode: LXDB
/* 2492 */    MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 2506
/* 2496 */    MCD::OPC_CheckField, 8, 8, 0, 30, 1, // Skip to: 2788
/* 2502 */    MCD::OPC_Decode, 149, 4, 117, // Opcode: LXEB
/* 2506 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 2520
/* 2510 */    MCD::OPC_CheckField, 8, 8, 0, 16, 1, // Skip to: 2788
/* 2516 */    MCD::OPC_Decode, 193, 4, 118, // Opcode: MXDB
/* 2520 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 2534
/* 2524 */    MCD::OPC_CheckField, 8, 8, 0, 2, 1, // Skip to: 2788
/* 2530 */    MCD::OPC_Decode, 195, 2, 119, // Opcode: CEB
/* 2534 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 2547
/* 2538 */    MCD::OPC_CheckField, 8, 8, 0, 244, 0, // Skip to: 2788
/* 2544 */    MCD::OPC_Decode, 23, 120, // Opcode: AEB
/* 2547 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 2561
/* 2551 */    MCD::OPC_CheckField, 8, 8, 0, 231, 0, // Skip to: 2788
/* 2557 */    MCD::OPC_Decode, 245, 4, 120, // Opcode: SEB
/* 2561 */    MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 2575
/* 2565 */    MCD::OPC_CheckField, 8, 8, 0, 217, 0, // Skip to: 2788
/* 2571 */    MCD::OPC_Decode, 162, 4, 121, // Opcode: MDEB
/* 2575 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 2589
/* 2579 */    MCD::OPC_CheckField, 8, 8, 0, 203, 0, // Skip to: 2788
/* 2585 */    MCD::OPC_Decode, 151, 3, 120, // Opcode: DEB
/* 2589 */    MCD::OPC_FilterValue, 14, 10, 0, // Skip to: 2603
/* 2593 */    MCD::OPC_CheckField, 8, 4, 0, 189, 0, // Skip to: 2788
/* 2599 */    MCD::OPC_Decode, 158, 4, 122, // Opcode: MAEB
/* 2603 */    MCD::OPC_FilterValue, 15, 10, 0, // Skip to: 2617
/* 2607 */    MCD::OPC_CheckField, 8, 4, 0, 175, 0, // Skip to: 2788
/* 2613 */    MCD::OPC_Decode, 175, 4, 122, // Opcode: MSEB
/* 2617 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 2631
/* 2621 */    MCD::OPC_CheckField, 8, 8, 0, 161, 0, // Skip to: 2788
/* 2627 */    MCD::OPC_Decode, 146, 5, 119, // Opcode: SQEB
/* 2631 */    MCD::OPC_FilterValue, 21, 10, 0, // Skip to: 2645
/* 2635 */    MCD::OPC_CheckField, 8, 8, 0, 147, 0, // Skip to: 2788
/* 2641 */    MCD::OPC_Decode, 144, 5, 116, // Opcode: SQDB
/* 2645 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 2659
/* 2649 */    MCD::OPC_CheckField, 8, 8, 0, 133, 0, // Skip to: 2788
/* 2655 */    MCD::OPC_Decode, 164, 4, 120, // Opcode: MEEB
/* 2659 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 2673
/* 2663 */    MCD::OPC_CheckField, 8, 8, 0, 119, 0, // Skip to: 2788
/* 2669 */    MCD::OPC_Decode, 191, 2, 116, // Opcode: CDB
/* 2673 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 2686
/* 2677 */    MCD::OPC_CheckField, 8, 8, 0, 105, 0, // Skip to: 2788
/* 2683 */    MCD::OPC_Decode, 18, 121, // Opcode: ADB
/* 2686 */    MCD::OPC_FilterValue, 27, 10, 0, // Skip to: 2700
/* 2690 */    MCD::OPC_CheckField, 8, 8, 0, 92, 0, // Skip to: 2788
/* 2696 */    MCD::OPC_Decode, 243, 4, 121, // Opcode: SDB
/* 2700 */    MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 2714
/* 2704 */    MCD::OPC_CheckField, 8, 8, 0, 78, 0, // Skip to: 2788
/* 2710 */    MCD::OPC_Decode, 160, 4, 121, // Opcode: MDB
/* 2714 */    MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 2728
/* 2718 */    MCD::OPC_CheckField, 8, 8, 0, 64, 0, // Skip to: 2788
/* 2724 */    MCD::OPC_Decode, 149, 3, 121, // Opcode: DDB
/* 2728 */    MCD::OPC_FilterValue, 30, 10, 0, // Skip to: 2742
/* 2732 */    MCD::OPC_CheckField, 8, 4, 0, 50, 0, // Skip to: 2788
/* 2738 */    MCD::OPC_Decode, 156, 4, 123, // Opcode: MADB
/* 2742 */    MCD::OPC_FilterValue, 31, 10, 0, // Skip to: 2756
/* 2746 */    MCD::OPC_CheckField, 8, 4, 0, 36, 0, // Skip to: 2788
/* 2752 */    MCD::OPC_Decode, 173, 4, 123, // Opcode: MSDB
/* 2756 */    MCD::OPC_FilterValue, 100, 4, 0, // Skip to: 2764
/* 2760 */    MCD::OPC_Decode, 206, 3, 124, // Opcode: LEY
/* 2764 */    MCD::OPC_FilterValue, 101, 4, 0, // Skip to: 2772
/* 2768 */    MCD::OPC_Decode, 201, 3, 125, // Opcode: LDY
/* 2772 */    MCD::OPC_FilterValue, 102, 4, 0, // Skip to: 2780
/* 2776 */    MCD::OPC_Decode, 168, 5, 124, // Opcode: STEY
/* 2780 */    MCD::OPC_FilterValue, 103, 4, 0, // Skip to: 2788
/* 2784 */    MCD::OPC_Decode, 166, 5, 125, // Opcode: STDY
/* 2788 */    MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, uint64_t Bits) {
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return ((Bits & SystemZ::FeatureLoadStoreOnCond));
  case 1:
    return ((Bits & SystemZ::FeatureDistinctOps));
  case 2:
    return ((Bits & SystemZ::FeatureHighWord));
  }
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder) {
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeADDR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeADDR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 3:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 8:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeBDAddr32Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeBDAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 8);
    if (decodeU8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeU16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeU16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeS16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeS16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeS16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeS16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (decodeAccessRegOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 26:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 30:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 33:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 40:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 46:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 55:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 60:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 61:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 62:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 63:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 64:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 65:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 66:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 67:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 68:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 69:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeBDAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 70:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodePC32DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 71:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeS32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 72:
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodePC32DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 73:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodePC32DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 74:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeU32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 75:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeU32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 76:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeS32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 77:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeS32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 78:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeU32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 79:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeS32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 80:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeU32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 81:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodePC32DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 82:
    tmp = fieldFromInstruction(insn, 16, 24);
    if (decodeBDLAddr64Disp12Len8Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeBDAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 83:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 84:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 85:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 86:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 87:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 88:
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodeBDAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeS16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 89:
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodeBDAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeU16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 90:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 91:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr32Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 92:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 93:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr32Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 94:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 95:
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 8);
    if (decodeU8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 96:
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 8);
    if (decodeS8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 97:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 98:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 99:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 100:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 101:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 102:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 103:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 104:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 105:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 24, 8);
    if (decodeU8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 8);
    if (decodeU8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 8);
    if (decodeU6ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 106:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 107:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 108:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 109:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 110:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 8);
    if (decodeS8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 111:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 8);
    if (decodeS8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 112:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 8);
    if (decodeS8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 113:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 8);
    if (decodeS8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 114:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodeS16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 115:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodeS16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 116:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 117:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 118:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 119:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 120:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 121:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 122:
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 123:
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 124:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 125:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
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
