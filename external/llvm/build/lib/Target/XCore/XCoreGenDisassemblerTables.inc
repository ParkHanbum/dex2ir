/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* * XCore Disassembler                                                       *|
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
/* 3 */       MCD::OPC_FilterValue, 0, 108, 0, // Skip to: 115
/* 7 */       MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 10 */      MCD::OPC_FilterValue, 236, 15, 4, 0, // Skip to: 19
/* 15 */      MCD::OPC_Decode, 235, 1, 0, // Opcode: WAITEU_0R
/* 19 */      MCD::OPC_FilterValue, 237, 15, 3, 0, // Skip to: 27
/* 24 */      MCD::OPC_Decode, 54, 0, // Opcode: CLRE_0R
/* 27 */      MCD::OPC_FilterValue, 238, 15, 4, 0, // Skip to: 36
/* 32 */      MCD::OPC_Decode, 210, 1, 0, // Opcode: SSYNC_0r
/* 36 */      MCD::OPC_FilterValue, 239, 15, 3, 0, // Skip to: 44
/* 41 */      MCD::OPC_Decode, 86, 0, // Opcode: FREET_0R
/* 44 */      MCD::OPC_FilterValue, 252, 15, 3, 0, // Skip to: 52
/* 49 */      MCD::OPC_Decode, 63, 0, // Opcode: DCALL_0R
/* 52 */      MCD::OPC_FilterValue, 253, 15, 3, 0, // Skip to: 60
/* 57 */      MCD::OPC_Decode, 117, 0, // Opcode: KRET_0R
/* 60 */      MCD::OPC_FilterValue, 254, 15, 3, 0, // Skip to: 68
/* 65 */      MCD::OPC_Decode, 69, 0, // Opcode: DRET_0R
/* 68 */      MCD::OPC_FilterValue, 255, 15, 4, 0, // Skip to: 77
/* 73 */      MCD::OPC_Decode, 191, 1, 0, // Opcode: SETKEP_0R
/* 77 */      MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 80 */      MCD::OPC_FilterValue, 126, 3, 0, // Skip to: 87
/* 84 */      MCD::OPC_Decode, 72, 1, // Opcode: EDU_1r
/* 87 */      MCD::OPC_FilterValue, 127, 3, 0, // Skip to: 94
/* 91 */      MCD::OPC_Decode, 75, 1, // Opcode: EEU_1r
/* 94 */      MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 97 */      MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 104
/* 101 */     MCD::OPC_Decode, 104, 2, // Opcode: INITPC_2r
/* 104 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 111
/* 108 */     MCD::OPC_Decode, 98, 2, // Opcode: GETST_2r
/* 111 */     MCD::OPC_Decode, 222, 1, 3, // Opcode: STW_2rus
/* 115 */     MCD::OPC_FilterValue, 1, 114, 0, // Skip to: 233
/* 119 */     MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 122 */     MCD::OPC_FilterValue, 236, 15, 4, 0, // Skip to: 131
/* 127 */     MCD::OPC_Decode, 144, 1, 0, // Opcode: LDSPC_0R
/* 131 */     MCD::OPC_FilterValue, 237, 15, 4, 0, // Skip to: 140
/* 136 */     MCD::OPC_Decode, 215, 1, 0, // Opcode: STSPC_0R
/* 140 */     MCD::OPC_FilterValue, 238, 15, 4, 0, // Skip to: 149
/* 145 */     MCD::OPC_Decode, 145, 1, 0, // Opcode: LDSSR_0R
/* 149 */     MCD::OPC_FilterValue, 239, 15, 4, 0, // Skip to: 158
/* 154 */     MCD::OPC_Decode, 216, 1, 0, // Opcode: STSSR_0R
/* 158 */     MCD::OPC_FilterValue, 252, 15, 4, 0, // Skip to: 167
/* 163 */     MCD::OPC_Decode, 214, 1, 0, // Opcode: STSED_0R
/* 167 */     MCD::OPC_FilterValue, 253, 15, 4, 0, // Skip to: 176
/* 172 */     MCD::OPC_Decode, 213, 1, 0, // Opcode: STET_0R
/* 176 */     MCD::OPC_FilterValue, 254, 15, 3, 0, // Skip to: 184
/* 181 */     MCD::OPC_Decode, 88, 0, // Opcode: GETED_0R
/* 184 */     MCD::OPC_FilterValue, 255, 15, 3, 0, // Skip to: 192
/* 189 */     MCD::OPC_Decode, 89, 0, // Opcode: GETET_0R
/* 192 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 195 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 203
/* 199 */     MCD::OPC_Decode, 234, 1, 1, // Opcode: WAITET_1R
/* 203 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 211
/* 207 */     MCD::OPC_Decode, 233, 1, 1, // Opcode: WAITEF_1R
/* 211 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 214 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 221
/* 218 */     MCD::OPC_Decode, 102, 2, // Opcode: INITDP_2r
/* 221 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 229
/* 225 */     MCD::OPC_Decode, 175, 1, 4, // Opcode: OUTT_2r
/* 229 */     MCD::OPC_Decode, 155, 1, 3, // Opcode: LDW_2rus
/* 233 */     MCD::OPC_FilterValue, 2, 100, 0, // Skip to: 337
/* 237 */     MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 240 */     MCD::OPC_FilterValue, 236, 15, 3, 0, // Skip to: 248
/* 245 */     MCD::OPC_Decode, 64, 0, // Opcode: DENTSP_0R
/* 248 */     MCD::OPC_FilterValue, 237, 15, 3, 0, // Skip to: 256
/* 253 */     MCD::OPC_Decode, 68, 0, // Opcode: DRESTSP_0R
/* 256 */     MCD::OPC_FilterValue, 238, 15, 3, 0, // Skip to: 264
/* 261 */     MCD::OPC_Decode, 90, 0, // Opcode: GETID_0R
/* 264 */     MCD::OPC_FilterValue, 239, 15, 3, 0, // Skip to: 272
/* 269 */     MCD::OPC_Decode, 91, 0, // Opcode: GETKEP_0R
/* 272 */     MCD::OPC_FilterValue, 252, 15, 3, 0, // Skip to: 280
/* 277 */     MCD::OPC_Decode, 92, 0, // Opcode: GETKSP_0R
/* 280 */     MCD::OPC_FilterValue, 253, 15, 4, 0, // Skip to: 289
/* 285 */     MCD::OPC_Decode, 143, 1, 0, // Opcode: LDSED_0R
/* 289 */     MCD::OPC_FilterValue, 254, 15, 4, 0, // Skip to: 298
/* 294 */     MCD::OPC_Decode, 141, 1, 0, // Opcode: LDET_0R
/* 298 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 301 */     MCD::OPC_FilterValue, 126, 3, 0, // Skip to: 308
/* 305 */     MCD::OPC_Decode, 85, 1, // Opcode: FREER_1r
/* 308 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 316
/* 312 */     MCD::OPC_Decode, 163, 1, 1, // Opcode: MJOIN_1r
/* 316 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 319 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 326
/* 323 */     MCD::OPC_Decode, 105, 2, // Opcode: INITSP_2r
/* 326 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 334
/* 330 */     MCD::OPC_Decode, 189, 1, 4, // Opcode: SETD_2r
/* 334 */     MCD::OPC_Decode, 18, 5, // Opcode: ADD_3r
/* 337 */     MCD::OPC_FilterValue, 3, 41, 0, // Skip to: 382
/* 341 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 344 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 352
/* 348 */     MCD::OPC_Decode, 232, 1, 1, // Opcode: TSTART_1R
/* 352 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 360
/* 356 */     MCD::OPC_Decode, 166, 1, 1, // Opcode: MSYNC_1r
/* 360 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 363 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 370
/* 367 */     MCD::OPC_Decode, 101, 2, // Opcode: INITCP_2r
/* 370 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 378
/* 374 */     MCD::OPC_Decode, 230, 1, 6, // Opcode: TSETMR_2r
/* 378 */     MCD::OPC_Decode, 225, 1, 5, // Opcode: SUB_3r
/* 382 */     MCD::OPC_FilterValue, 4, 30, 0, // Skip to: 416
/* 386 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 389 */     MCD::OPC_FilterValue, 126, 3, 0, // Skip to: 396
/* 393 */     MCD::OPC_Decode, 31, 1, // Opcode: BLA_1r
/* 396 */     MCD::OPC_FilterValue, 127, 3, 0, // Skip to: 403
/* 400 */     MCD::OPC_Decode, 25, 1, // Opcode: BAU_1r
/* 403 */     MCD::OPC_CheckField, 4, 1, 1, 3, 0, // Skip to: 412
/* 409 */     MCD::OPC_Decode, 74, 2, // Opcode: EET_2r
/* 412 */     MCD::OPC_Decode, 207, 1, 5, // Opcode: SHL_3r
/* 416 */     MCD::OPC_FilterValue, 5, 39, 0, // Skip to: 459
/* 420 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 423 */     MCD::OPC_FilterValue, 126, 3, 0, // Skip to: 430
/* 427 */     MCD::OPC_Decode, 48, 1, // Opcode: BRU_1r
/* 430 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 438
/* 434 */     MCD::OPC_Decode, 197, 1, 1, // Opcode: SETSP_1r
/* 438 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 441 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 448
/* 445 */     MCD::OPC_Decode, 21, 7, // Opcode: ANDNOT_2r
/* 448 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 455
/* 452 */     MCD::OPC_Decode, 73, 2, // Opcode: EEF_2r
/* 455 */     MCD::OPC_Decode, 209, 1, 5, // Opcode: SHR_3r
/* 459 */     MCD::OPC_FilterValue, 6, 41, 0, // Skip to: 504
/* 463 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 466 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 474
/* 470 */     MCD::OPC_Decode, 188, 1, 1, // Opcode: SETDP_1r
/* 474 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 482
/* 478 */     MCD::OPC_Decode, 184, 1, 1, // Opcode: SETCP_1r
/* 482 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 485 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 493
/* 489 */     MCD::OPC_Decode, 204, 1, 7, // Opcode: SEXT_2r
/* 493 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 501
/* 497 */     MCD::OPC_Decode, 205, 1, 8, // Opcode: SEXT_rus
/* 501 */     MCD::OPC_Decode, 80, 5, // Opcode: EQ_3r
/* 504 */     MCD::OPC_FilterValue, 7, 39, 0, // Skip to: 547
/* 508 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 511 */     MCD::OPC_FilterValue, 126, 3, 0, // Skip to: 518
/* 515 */     MCD::OPC_Decode, 65, 1, // Opcode: DGETREG_1r
/* 518 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 526
/* 522 */     MCD::OPC_Decode, 190, 1, 1, // Opcode: SETEV_1r
/* 526 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 529 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 536
/* 533 */     MCD::OPC_Decode, 99, 2, // Opcode: GETTS_2r
/* 536 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 544
/* 540 */     MCD::OPC_Decode, 195, 1, 4, // Opcode: SETPT_2r
/* 544 */     MCD::OPC_Decode, 22, 5, // Opcode: AND_3r
/* 547 */     MCD::OPC_FilterValue, 8, 41, 0, // Skip to: 592
/* 551 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 554 */     MCD::OPC_FilterValue, 126, 3, 0, // Skip to: 561
/* 558 */     MCD::OPC_Decode, 110, 1, // Opcode: KCALL_1r
/* 561 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 569
/* 565 */     MCD::OPC_Decode, 203, 1, 1, // Opcode: SETV_1r
/* 569 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 572 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 580
/* 576 */     MCD::OPC_Decode, 237, 1, 7, // Opcode: ZEXT_2r
/* 580 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 588
/* 584 */     MCD::OPC_Decode, 238, 1, 8, // Opcode: ZEXT_rus
/* 588 */     MCD::OPC_Decode, 170, 1, 5, // Opcode: OR_3r
/* 592 */     MCD::OPC_FilterValue, 9, 40, 0, // Skip to: 636
/* 596 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 599 */     MCD::OPC_FilterValue, 126, 3, 0, // Skip to: 606
/* 603 */     MCD::OPC_Decode, 70, 1, // Opcode: ECALLF_1r
/* 606 */     MCD::OPC_FilterValue, 127, 3, 0, // Skip to: 613
/* 610 */     MCD::OPC_Decode, 71, 1, // Opcode: ECALLT_1r
/* 613 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 616 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 624
/* 620 */     MCD::OPC_Decode, 171, 1, 2, // Opcode: OUTCT_2r
/* 624 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 632
/* 628 */     MCD::OPC_Decode, 172, 1, 9, // Opcode: OUTCT_rus
/* 632 */     MCD::OPC_Decode, 156, 1, 5, // Opcode: LDW_3r
/* 636 */     MCD::OPC_FilterValue, 10, 19, 0, // Skip to: 659
/* 640 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 643 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 651
/* 647 */     MCD::OPC_Decode, 218, 1, 10, // Opcode: STWDP_ru6
/* 651 */     MCD::OPC_FilterValue, 1, 51, 2, // Skip to: 1218
/* 655 */     MCD::OPC_Decode, 221, 1, 10, // Opcode: STWSP_ru6
/* 659 */     MCD::OPC_FilterValue, 11, 19, 0, // Skip to: 682
/* 663 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 666 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 674
/* 670 */     MCD::OPC_Decode, 151, 1, 10, // Opcode: LDWDP_ru6
/* 674 */     MCD::OPC_FilterValue, 1, 28, 2, // Skip to: 1218
/* 678 */     MCD::OPC_Decode, 154, 1, 10, // Opcode: LDWSP_ru6
/* 682 */     MCD::OPC_FilterValue, 12, 19, 0, // Skip to: 705
/* 686 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 689 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 697
/* 693 */     MCD::OPC_Decode, 133, 1, 10, // Opcode: LDAWDP_ru6
/* 697 */     MCD::OPC_FilterValue, 1, 5, 2, // Skip to: 1218
/* 701 */     MCD::OPC_Decode, 138, 1, 10, // Opcode: LDAWSP_ru6
/* 705 */     MCD::OPC_FilterValue, 13, 19, 0, // Skip to: 728
/* 709 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 712 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 720
/* 716 */     MCD::OPC_Decode, 140, 1, 10, // Opcode: LDC_ru6
/* 720 */     MCD::OPC_FilterValue, 1, 238, 1, // Skip to: 1218
/* 724 */     MCD::OPC_Decode, 148, 1, 10, // Opcode: LDWCP_ru6
/* 728 */     MCD::OPC_FilterValue, 14, 80, 0, // Skip to: 812
/* 732 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 735 */     MCD::OPC_FilterValue, 0, 34, 0, // Skip to: 773
/* 739 */     MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 742 */     MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 749
/* 746 */     MCD::OPC_Decode, 47, 11, // Opcode: BRFU_u6
/* 749 */     MCD::OPC_FilterValue, 13, 3, 0, // Skip to: 756
/* 753 */     MCD::OPC_Decode, 30, 11, // Opcode: BLAT_u6
/* 756 */     MCD::OPC_FilterValue, 14, 3, 0, // Skip to: 763
/* 760 */     MCD::OPC_Decode, 82, 11, // Opcode: EXTDP_u6
/* 763 */     MCD::OPC_FilterValue, 15, 3, 0, // Skip to: 770
/* 767 */     MCD::OPC_Decode, 112, 11, // Opcode: KCALL_u6
/* 770 */     MCD::OPC_Decode, 45, 12, // Opcode: BRFT_ru6
/* 773 */     MCD::OPC_FilterValue, 1, 185, 1, // Skip to: 1218
/* 777 */     MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 780 */     MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 787
/* 784 */     MCD::OPC_Decode, 41, 13, // Opcode: BRBU_u6
/* 787 */     MCD::OPC_FilterValue, 13, 3, 0, // Skip to: 794
/* 791 */     MCD::OPC_Decode, 78, 11, // Opcode: ENTSP_u6
/* 794 */     MCD::OPC_FilterValue, 14, 3, 0, // Skip to: 801
/* 798 */     MCD::OPC_Decode, 84, 11, // Opcode: EXTSP_u6
/* 801 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 809
/* 805 */     MCD::OPC_Decode, 181, 1, 11, // Opcode: RETSP_u6
/* 809 */     MCD::OPC_Decode, 39, 14, // Opcode: BRBT_ru6
/* 812 */     MCD::OPC_FilterValue, 15, 67, 0, // Skip to: 883
/* 816 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 819 */     MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 858
/* 823 */     MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 826 */     MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 833
/* 830 */     MCD::OPC_Decode, 59, 11, // Opcode: CLRSR_u6
/* 833 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 841
/* 837 */     MCD::OPC_Decode, 201, 1, 11, // Opcode: SETSR_u6
/* 841 */     MCD::OPC_FilterValue, 14, 3, 0, // Skip to: 848
/* 845 */     MCD::OPC_Decode, 114, 11, // Opcode: KENTSP_u6
/* 848 */     MCD::OPC_FilterValue, 15, 3, 0, // Skip to: 855
/* 852 */     MCD::OPC_Decode, 116, 11, // Opcode: KRESTSP_u6
/* 855 */     MCD::OPC_Decode, 43, 12, // Opcode: BRFF_ru6
/* 858 */     MCD::OPC_FilterValue, 1, 100, 1, // Skip to: 1218
/* 862 */     MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 865 */     MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 872
/* 869 */     MCD::OPC_Decode, 97, 11, // Opcode: GETSR_u6
/* 872 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 880
/* 876 */     MCD::OPC_Decode, 131, 1, 11, // Opcode: LDAWCP_u6
/* 880 */     MCD::OPC_Decode, 37, 14, // Opcode: BRBF_ru6
/* 883 */     MCD::OPC_FilterValue, 16, 38, 0, // Skip to: 925
/* 887 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 890 */     MCD::OPC_FilterValue, 126, 3, 0, // Skip to: 897
/* 894 */     MCD::OPC_Decode, 55, 1, // Opcode: CLRPT_1R
/* 897 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 905
/* 901 */     MCD::OPC_Decode, 226, 1, 1, // Opcode: SYNCR_1r
/* 905 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 908 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 915
/* 912 */     MCD::OPC_Decode, 95, 9, // Opcode: GETR_rus
/* 915 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 922
/* 919 */     MCD::OPC_Decode, 100, 2, // Opcode: INCT_2r
/* 922 */     MCD::OPC_Decode, 119, 5, // Opcode: LD16S_3r
/* 925 */     MCD::OPC_FilterValue, 17, 21, 0, // Skip to: 950
/* 929 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 932 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 940
/* 936 */     MCD::OPC_Decode, 169, 1, 2, // Opcode: NOT
/* 940 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 947
/* 944 */     MCD::OPC_Decode, 108, 2, // Opcode: INT_2r
/* 947 */     MCD::OPC_Decode, 120, 5, // Opcode: LD8U_3r
/* 950 */     MCD::OPC_FilterValue, 18, 21, 0, // Skip to: 975
/* 954 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 957 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 965
/* 961 */     MCD::OPC_Decode, 168, 1, 2, // Opcode: NEG
/* 965 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 972
/* 969 */     MCD::OPC_Decode, 76, 2, // Opcode: ENDIN_2r
/* 972 */     MCD::OPC_Decode, 17, 3, // Opcode: ADD_2rus
/* 975 */     MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 983
/* 979 */     MCD::OPC_Decode, 224, 1, 3, // Opcode: SUB_2rus
/* 983 */     MCD::OPC_FilterValue, 20, 23, 0, // Skip to: 1010
/* 987 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 990 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 998
/* 994 */     MCD::OPC_Decode, 164, 1, 2, // Opcode: MKMSK_2r
/* 998 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1006
/* 1002 */    MCD::OPC_Decode, 165, 1, 15, // Opcode: MKMSK_rus
/* 1006 */    MCD::OPC_Decode, 206, 1, 16, // Opcode: SHL_2rus
/* 1010 */    MCD::OPC_FilterValue, 21, 23, 0, // Skip to: 1037
/* 1014 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1017 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1025
/* 1021 */    MCD::OPC_Decode, 176, 1, 4, // Opcode: OUT_2r
/* 1025 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1033
/* 1029 */    MCD::OPC_Decode, 174, 1, 7, // Opcode: OUTSHR_2r
/* 1033 */    MCD::OPC_Decode, 208, 1, 16, // Opcode: SHR_2rus
/* 1037 */    MCD::OPC_FilterValue, 22, 20, 0, // Skip to: 1061
/* 1041 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1044 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 1051
/* 1048 */    MCD::OPC_Decode, 109, 2, // Opcode: IN_2r
/* 1051 */    MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 1058
/* 1055 */    MCD::OPC_Decode, 107, 7, // Opcode: INSHR_2r
/* 1058 */    MCD::OPC_Decode, 79, 3, // Opcode: EQ_2rus
/* 1061 */    MCD::OPC_FilterValue, 23, 23, 0, // Skip to: 1088
/* 1065 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1068 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1076
/* 1072 */    MCD::OPC_Decode, 177, 1, 2, // Opcode: PEEK_2r
/* 1076 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1084
/* 1080 */    MCD::OPC_Decode, 227, 1, 2, // Opcode: TESTCT_2r
/* 1084 */    MCD::OPC_Decode, 231, 1, 17, // Opcode: TSETR_3r
/* 1088 */    MCD::OPC_FilterValue, 24, 23, 0, // Skip to: 1115
/* 1092 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1095 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1103
/* 1099 */    MCD::OPC_Decode, 193, 1, 4, // Opcode: SETPSC_2r
/* 1103 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1111
/* 1107 */    MCD::OPC_Decode, 229, 1, 2, // Opcode: TESTWCT_2r
/* 1111 */    MCD::OPC_Decode, 158, 1, 5, // Opcode: LSS_3r
/* 1115 */    MCD::OPC_FilterValue, 25, 21, 0, // Skip to: 1140
/* 1119 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1122 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 1129
/* 1126 */    MCD::OPC_Decode, 52, 2, // Opcode: CHKCT_2r
/* 1129 */    MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 1136
/* 1133 */    MCD::OPC_Decode, 53, 15, // Opcode: CHKCT_rus
/* 1136 */    MCD::OPC_Decode, 160, 1, 5, // Opcode: LSU_3r
/* 1140 */    MCD::OPC_FilterValue, 26, 17, 0, // Skip to: 1161
/* 1144 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 1147 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 1154
/* 1151 */    MCD::OPC_Decode, 35, 18, // Opcode: BLRF_u10
/* 1154 */    MCD::OPC_FilterValue, 1, 60, 0, // Skip to: 1218
/* 1158 */    MCD::OPC_Decode, 33, 19, // Opcode: BLRB_u10
/* 1161 */    MCD::OPC_FilterValue, 27, 17, 0, // Skip to: 1182
/* 1165 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 1168 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 1175
/* 1172 */    MCD::OPC_Decode, 127, 18, // Opcode: LDAPF_u10
/* 1175 */    MCD::OPC_FilterValue, 1, 39, 0, // Skip to: 1218
/* 1179 */    MCD::OPC_Decode, 124, 19, // Opcode: LDAPB_u10
/* 1182 */    MCD::OPC_FilterValue, 28, 18, 0, // Skip to: 1204
/* 1186 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 1189 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 1196
/* 1193 */    MCD::OPC_Decode, 28, 18, // Opcode: BLACP_u10
/* 1196 */    MCD::OPC_FilterValue, 1, 18, 0, // Skip to: 1218
/* 1200 */    MCD::OPC_Decode, 149, 1, 18, // Opcode: LDWCP_u10
/* 1204 */    MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 1218
/* 1208 */    MCD::OPC_CheckField, 10, 1, 0, 4, 0, // Skip to: 1218
/* 1214 */    MCD::OPC_Decode, 187, 1, 12, // Opcode: SETC_ru6
/* 1218 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD::OPC_ExtractField, 27, 5,  // Inst{31-27} ...
/* 3 */       MCD::OPC_FilterValue, 0, 89, 0, // Skip to: 96
/* 7 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 10 */      MCD::OPC_FilterValue, 31, 212, 3, // Skip to: 994
/* 14 */      MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 17 */      MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 31
/* 21 */      MCD::OPC_CheckField, 16, 11, 236, 15, 17, 0, // Skip to: 45
/* 28 */      MCD::OPC_Decode, 26, 20, // Opcode: BITREV_l2r
/* 31 */      MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 45
/* 35 */      MCD::OPC_CheckField, 16, 11, 236, 15, 3, 0, // Skip to: 45
/* 42 */      MCD::OPC_Decode, 51, 20, // Opcode: BYTEREV_l2r
/* 45 */      MCD::OPC_CheckField, 16, 11, 236, 15, 4, 0, // Skip to: 56
/* 52 */      MCD::OPC_Decode, 223, 1, 21, // Opcode: STW_l3r
/* 56 */      MCD::OPC_ExtractField, 20, 7,  // Inst{26-20} ...
/* 59 */      MCD::OPC_FilterValue, 126, 3, 0, // Skip to: 66
/* 63 */      MCD::OPC_Decode, 61, 22, // Opcode: CRC8_l4r
/* 66 */      MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 74
/* 70 */      MCD::OPC_Decode, 162, 1, 23, // Opcode: MACCU_l4r
/* 74 */      MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 77 */      MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 85
/* 81 */      MCD::OPC_Decode, 142, 1, 24, // Opcode: LDIVU_l5r
/* 85 */      MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 92
/* 89 */      MCD::OPC_Decode, 118, 24, // Opcode: LADD_l5r
/* 92 */      MCD::OPC_Decode, 157, 1, 25, // Opcode: LMUL_l6r
/* 96 */      MCD::OPC_FilterValue, 1, 86, 0, // Skip to: 186
/* 100 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 103 */     MCD::OPC_FilterValue, 31, 119, 3, // Skip to: 994
/* 107 */     MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 110 */     MCD::OPC_FilterValue, 0, 112, 3, // Skip to: 994
/* 114 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 117 */     MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 136
/* 121 */     MCD::OPC_CheckField, 21, 6, 63, 29, 0, // Skip to: 156
/* 127 */     MCD::OPC_CheckField, 16, 4, 12, 23, 0, // Skip to: 156
/* 133 */     MCD::OPC_Decode, 60, 20, // Opcode: CLZ_l2r
/* 136 */     MCD::OPC_FilterValue, 1, 16, 0, // Skip to: 156
/* 140 */     MCD::OPC_CheckField, 21, 6, 63, 10, 0, // Skip to: 156
/* 146 */     MCD::OPC_CheckField, 16, 4, 12, 4, 0, // Skip to: 156
/* 152 */     MCD::OPC_Decode, 183, 1, 26, // Opcode: SETCLK_l2r
/* 156 */     MCD::OPC_CheckField, 21, 6, 63, 10, 0, // Skip to: 172
/* 162 */     MCD::OPC_CheckField, 16, 4, 12, 4, 0, // Skip to: 172
/* 168 */     MCD::OPC_Decode, 236, 1, 21, // Opcode: XOR_l3r
/* 172 */     MCD::OPC_CheckField, 21, 6, 63, 4, 0, // Skip to: 182
/* 178 */     MCD::OPC_Decode, 161, 1, 23, // Opcode: MACCS_l4r
/* 182 */     MCD::OPC_Decode, 159, 1, 24, // Opcode: LSUB_l5r
/* 186 */     MCD::OPC_FilterValue, 2, 29, 0, // Skip to: 219
/* 190 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 193 */     MCD::OPC_FilterValue, 159, 251, 3, 27, 3, // Skip to: 994
/* 199 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 202 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 209
/* 206 */     MCD::OPC_Decode, 103, 20, // Opcode: INITLR_l2r
/* 209 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 216
/* 213 */     MCD::OPC_Decode, 94, 20, // Opcode: GETPS_l2r
/* 216 */     MCD::OPC_Decode, 24, 21, // Opcode: ASHR_l3r
/* 219 */     MCD::OPC_FilterValue, 3, 31, 0, // Skip to: 254
/* 223 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 226 */     MCD::OPC_FilterValue, 159, 251, 3, 250, 2, // Skip to: 994
/* 232 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 235 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 243
/* 239 */     MCD::OPC_Decode, 194, 1, 26, // Opcode: SETPS_l2r
/* 243 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 250
/* 247 */     MCD::OPC_Decode, 87, 20, // Opcode: GETD_l2r
/* 250 */     MCD::OPC_Decode, 136, 1, 21, // Opcode: LDAWF_l3r
/* 254 */     MCD::OPC_FilterValue, 4, 32, 0, // Skip to: 290
/* 258 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 261 */     MCD::OPC_FilterValue, 159, 251, 3, 215, 2, // Skip to: 994
/* 267 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 270 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 278
/* 274 */     MCD::OPC_Decode, 228, 1, 20, // Opcode: TESTLCL_l2r
/* 278 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 286
/* 282 */     MCD::OPC_Decode, 202, 1, 26, // Opcode: SETTW_l2r
/* 286 */     MCD::OPC_Decode, 129, 1, 21, // Opcode: LDAWB_l3r
/* 290 */     MCD::OPC_FilterValue, 5, 31, 0, // Skip to: 325
/* 294 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 297 */     MCD::OPC_FilterValue, 159, 251, 3, 179, 2, // Skip to: 994
/* 303 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 306 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 314
/* 310 */     MCD::OPC_Decode, 196, 1, 26, // Opcode: SETRDY_l2r
/* 314 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 322
/* 318 */     MCD::OPC_Decode, 185, 1, 20, // Opcode: SETC_l2r
/* 322 */     MCD::OPC_Decode, 122, 21, // Opcode: LDA16F_l3r
/* 325 */     MCD::OPC_FilterValue, 6, 30, 0, // Skip to: 359
/* 329 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 332 */     MCD::OPC_FilterValue, 159, 251, 3, 144, 2, // Skip to: 994
/* 338 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 341 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 349
/* 345 */     MCD::OPC_Decode, 192, 1, 26, // Opcode: SETN_l2r
/* 349 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 356
/* 353 */     MCD::OPC_Decode, 93, 20, // Opcode: GETN_l2r
/* 356 */     MCD::OPC_Decode, 121, 21, // Opcode: LDA16B_l3r
/* 359 */     MCD::OPC_FilterValue, 7, 12, 0, // Skip to: 375
/* 363 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 111, 2, // Skip to: 994
/* 371 */     MCD::OPC_Decode, 167, 1, 21, // Opcode: MUL_l3r
/* 375 */     MCD::OPC_FilterValue, 8, 11, 0, // Skip to: 390
/* 379 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 95, 2, // Skip to: 994
/* 387 */     MCD::OPC_Decode, 66, 21, // Opcode: DIVS_l3r
/* 390 */     MCD::OPC_FilterValue, 9, 11, 0, // Skip to: 405
/* 394 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 80, 2, // Skip to: 994
/* 402 */     MCD::OPC_Decode, 67, 21, // Opcode: DIVU_l3r
/* 405 */     MCD::OPC_FilterValue, 10, 31, 0, // Skip to: 440
/* 409 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 412 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 426
/* 416 */     MCD::OPC_CheckField, 10, 6, 60, 60, 2, // Skip to: 994
/* 422 */     MCD::OPC_Decode, 217, 1, 27, // Opcode: STWDP_lru6
/* 426 */     MCD::OPC_FilterValue, 1, 52, 2, // Skip to: 994
/* 430 */     MCD::OPC_CheckField, 10, 6, 60, 46, 2, // Skip to: 994
/* 436 */     MCD::OPC_Decode, 220, 1, 27, // Opcode: STWSP_lru6
/* 440 */     MCD::OPC_FilterValue, 11, 31, 0, // Skip to: 475
/* 444 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 447 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 461
/* 451 */     MCD::OPC_CheckField, 10, 6, 60, 25, 2, // Skip to: 994
/* 457 */     MCD::OPC_Decode, 150, 1, 27, // Opcode: LDWDP_lru6
/* 461 */     MCD::OPC_FilterValue, 1, 17, 2, // Skip to: 994
/* 465 */     MCD::OPC_CheckField, 10, 6, 60, 11, 2, // Skip to: 994
/* 471 */     MCD::OPC_Decode, 153, 1, 27, // Opcode: LDWSP_lru6
/* 475 */     MCD::OPC_FilterValue, 12, 31, 0, // Skip to: 510
/* 479 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 482 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 496
/* 486 */     MCD::OPC_CheckField, 10, 6, 60, 246, 1, // Skip to: 994
/* 492 */     MCD::OPC_Decode, 132, 1, 27, // Opcode: LDAWDP_lru6
/* 496 */     MCD::OPC_FilterValue, 1, 238, 1, // Skip to: 994
/* 500 */     MCD::OPC_CheckField, 10, 6, 60, 232, 1, // Skip to: 994
/* 506 */     MCD::OPC_Decode, 137, 1, 27, // Opcode: LDAWSP_lru6
/* 510 */     MCD::OPC_FilterValue, 13, 31, 0, // Skip to: 545
/* 514 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 517 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 531
/* 521 */     MCD::OPC_CheckField, 10, 6, 60, 211, 1, // Skip to: 994
/* 527 */     MCD::OPC_Decode, 139, 1, 27, // Opcode: LDC_lru6
/* 531 */     MCD::OPC_FilterValue, 1, 203, 1, // Skip to: 994
/* 535 */     MCD::OPC_CheckField, 10, 6, 60, 197, 1, // Skip to: 994
/* 541 */     MCD::OPC_Decode, 146, 1, 27, // Opcode: LDWCP_lru6
/* 545 */     MCD::OPC_FilterValue, 14, 94, 0, // Skip to: 643
/* 549 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 552 */     MCD::OPC_FilterValue, 0, 41, 0, // Skip to: 597
/* 556 */     MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 559 */     MCD::OPC_FilterValue, 60, 175, 1, // Skip to: 994
/* 563 */     MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 566 */     MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 573
/* 570 */     MCD::OPC_Decode, 46, 28, // Opcode: BRFU_lu6
/* 573 */     MCD::OPC_FilterValue, 13, 3, 0, // Skip to: 580
/* 577 */     MCD::OPC_Decode, 29, 28, // Opcode: BLAT_lu6
/* 580 */     MCD::OPC_FilterValue, 14, 3, 0, // Skip to: 587
/* 584 */     MCD::OPC_Decode, 81, 28, // Opcode: EXTDP_lu6
/* 587 */     MCD::OPC_FilterValue, 15, 3, 0, // Skip to: 594
/* 591 */     MCD::OPC_Decode, 111, 28, // Opcode: KCALL_lu6
/* 594 */     MCD::OPC_Decode, 44, 29, // Opcode: BRFT_lru6
/* 597 */     MCD::OPC_FilterValue, 1, 137, 1, // Skip to: 994
/* 601 */     MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 604 */     MCD::OPC_FilterValue, 60, 130, 1, // Skip to: 994
/* 608 */     MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 611 */     MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 618
/* 615 */     MCD::OPC_Decode, 40, 30, // Opcode: BRBU_lu6
/* 618 */     MCD::OPC_FilterValue, 13, 3, 0, // Skip to: 625
/* 622 */     MCD::OPC_Decode, 77, 28, // Opcode: ENTSP_lu6
/* 625 */     MCD::OPC_FilterValue, 14, 3, 0, // Skip to: 632
/* 629 */     MCD::OPC_Decode, 83, 28, // Opcode: EXTSP_lu6
/* 632 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 640
/* 636 */     MCD::OPC_Decode, 180, 1, 28, // Opcode: RETSP_lu6
/* 640 */     MCD::OPC_Decode, 38, 31, // Opcode: BRBT_lru6
/* 643 */     MCD::OPC_FilterValue, 15, 81, 0, // Skip to: 728
/* 647 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 650 */     MCD::OPC_FilterValue, 0, 42, 0, // Skip to: 696
/* 654 */     MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 657 */     MCD::OPC_FilterValue, 60, 77, 1, // Skip to: 994
/* 661 */     MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 664 */     MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 671
/* 668 */     MCD::OPC_Decode, 58, 28, // Opcode: CLRSR_lu6
/* 671 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 679
/* 675 */     MCD::OPC_Decode, 200, 1, 28, // Opcode: SETSR_lu6
/* 679 */     MCD::OPC_FilterValue, 14, 3, 0, // Skip to: 686
/* 683 */     MCD::OPC_Decode, 113, 28, // Opcode: KENTSP_lu6
/* 686 */     MCD::OPC_FilterValue, 15, 3, 0, // Skip to: 693
/* 690 */     MCD::OPC_Decode, 115, 28, // Opcode: KRESTSP_lu6
/* 693 */     MCD::OPC_Decode, 42, 29, // Opcode: BRFF_lru6
/* 696 */     MCD::OPC_FilterValue, 1, 38, 1, // Skip to: 994
/* 700 */     MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 703 */     MCD::OPC_FilterValue, 60, 31, 1, // Skip to: 994
/* 707 */     MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 710 */     MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 717
/* 714 */     MCD::OPC_Decode, 96, 28, // Opcode: GETSR_lu6
/* 717 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 725
/* 721 */     MCD::OPC_Decode, 130, 1, 28, // Opcode: LDAWCP_lu6
/* 725 */     MCD::OPC_Decode, 36, 31, // Opcode: BRBF_lru6
/* 728 */     MCD::OPC_FilterValue, 16, 12, 0, // Skip to: 744
/* 732 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 254, 0, // Skip to: 994
/* 740 */     MCD::OPC_Decode, 211, 1, 21, // Opcode: ST16_l3r
/* 744 */     MCD::OPC_FilterValue, 17, 12, 0, // Skip to: 760
/* 748 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 238, 0, // Skip to: 994
/* 756 */     MCD::OPC_Decode, 212, 1, 21, // Opcode: ST8_l3r
/* 760 */     MCD::OPC_FilterValue, 18, 31, 0, // Skip to: 795
/* 764 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 767 */     MCD::OPC_FilterValue, 159, 251, 3, 3, 0, // Skip to: 776
/* 773 */     MCD::OPC_Decode, 23, 32, // Opcode: ASHR_l2rus
/* 776 */     MCD::OPC_FilterValue, 191, 251, 3, 4, 0, // Skip to: 786
/* 782 */     MCD::OPC_Decode, 173, 1, 32, // Opcode: OUTPW_l2rus
/* 786 */     MCD::OPC_FilterValue, 223, 251, 3, 202, 0, // Skip to: 994
/* 792 */     MCD::OPC_Decode, 106, 32, // Opcode: INPW_l2rus
/* 795 */     MCD::OPC_FilterValue, 19, 12, 0, // Skip to: 811
/* 799 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 187, 0, // Skip to: 994
/* 807 */     MCD::OPC_Decode, 135, 1, 33, // Opcode: LDAWF_l2rus
/* 811 */     MCD::OPC_FilterValue, 20, 12, 0, // Skip to: 827
/* 815 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 171, 0, // Skip to: 994
/* 823 */     MCD::OPC_Decode, 128, 1, 33, // Opcode: LDAWB_l2rus
/* 827 */     MCD::OPC_FilterValue, 21, 11, 0, // Skip to: 842
/* 831 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 155, 0, // Skip to: 994
/* 839 */     MCD::OPC_Decode, 62, 34, // Opcode: CRC_l3r
/* 842 */     MCD::OPC_FilterValue, 24, 12, 0, // Skip to: 858
/* 846 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 140, 0, // Skip to: 994
/* 854 */     MCD::OPC_Decode, 178, 1, 21, // Opcode: REMS_l3r
/* 858 */     MCD::OPC_FilterValue, 25, 12, 0, // Skip to: 874
/* 862 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 124, 0, // Skip to: 994
/* 870 */     MCD::OPC_Decode, 179, 1, 21, // Opcode: REMU_l3r
/* 874 */     MCD::OPC_FilterValue, 26, 29, 0, // Skip to: 907
/* 878 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 881 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 894
/* 885 */     MCD::OPC_CheckField, 10, 6, 60, 103, 0, // Skip to: 994
/* 891 */     MCD::OPC_Decode, 34, 35, // Opcode: BLRF_lu10
/* 894 */     MCD::OPC_FilterValue, 1, 96, 0, // Skip to: 994
/* 898 */     MCD::OPC_CheckField, 10, 6, 60, 90, 0, // Skip to: 994
/* 904 */     MCD::OPC_Decode, 32, 36, // Opcode: BLRB_lu10
/* 907 */     MCD::OPC_FilterValue, 27, 29, 0, // Skip to: 940
/* 911 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 914 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 927
/* 918 */     MCD::OPC_CheckField, 10, 6, 60, 70, 0, // Skip to: 994
/* 924 */     MCD::OPC_Decode, 125, 35, // Opcode: LDAPF_lu10
/* 927 */     MCD::OPC_FilterValue, 1, 63, 0, // Skip to: 994
/* 931 */     MCD::OPC_CheckField, 10, 6, 60, 57, 0, // Skip to: 994
/* 937 */     MCD::OPC_Decode, 123, 36, // Opcode: LDAPB_lu10
/* 940 */     MCD::OPC_FilterValue, 28, 30, 0, // Skip to: 974
/* 944 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 947 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 960
/* 951 */     MCD::OPC_CheckField, 10, 6, 60, 37, 0, // Skip to: 994
/* 957 */     MCD::OPC_Decode, 27, 35, // Opcode: BLACP_lu10
/* 960 */     MCD::OPC_FilterValue, 1, 30, 0, // Skip to: 994
/* 964 */     MCD::OPC_CheckField, 10, 6, 60, 24, 0, // Skip to: 994
/* 970 */     MCD::OPC_Decode, 147, 1, 35, // Opcode: LDWCP_lu10
/* 974 */     MCD::OPC_FilterValue, 29, 16, 0, // Skip to: 994
/* 978 */     MCD::OPC_CheckField, 26, 1, 0, 10, 0, // Skip to: 994
/* 984 */     MCD::OPC_CheckField, 10, 6, 60, 4, 0, // Skip to: 994
/* 990 */     MCD::OPC_Decode, 186, 1, 29, // Opcode: SETC_lru6
/* 994 */     MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, uint64_t Bits) {
  llvm_unreachable("Invalid index!");
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder) {
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 2:
    if (Decode2RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 3:
    if (Decode2RUSInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 4:
    if (DecodeR2RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 5:
    if (Decode3RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 6:
    if (Decode2RImmInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 7:
    if (Decode2RSrcDstInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 8:
    if (DecodeRUSSrcDstBitpInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 9:
    if (DecodeRUSInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 6, 4);
    if (DecodeRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 6, 4);
    if (DecodeGRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 0, 6);
    if (DecodeNegImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 6, 4);
    if (DecodeGRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 6);
    if (DecodeNegImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 15:
    if (DecodeRUSBitpInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 16:
    if (Decode2RUSBitpInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 17:
    if (Decode3RImmInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 0, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 0, 10);
    if (DecodeNegImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 20:
    if (DecodeL2RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 21:
    if (DecodeL3RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 22:
    if (DecodeL4RSrcDstInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 23:
    if (DecodeL4RSrcDstSrcDstInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 24:
    if (DecodeL5RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 25:
    if (DecodeL6RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 26:
    if (DecodeLR2RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 22, 4);
    if (DecodeRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 0, 10) << 6);
    tmp |= (fieldFromInstruction(insn, 16, 6) << 0);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 28:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 0, 10) << 6);
    tmp |= (fieldFromInstruction(insn, 16, 6) << 0);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 22, 4);
    if (DecodeGRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 0, 10) << 6);
    tmp |= (fieldFromInstruction(insn, 16, 6) << 0);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 30:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 0, 10) << 6);
    tmp |= (fieldFromInstruction(insn, 16, 6) << 0);
    if (DecodeNegImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 22, 4);
    if (DecodeGRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 0, 10) << 6);
    tmp |= (fieldFromInstruction(insn, 16, 6) << 0);
    if (DecodeNegImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 32:
    if (DecodeL2RUSBitpInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 33:
    if (DecodeL2RUSInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 34:
    if (DecodeL3RSrcDstInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 35:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 0, 10) << 10);
    tmp |= (fieldFromInstruction(insn, 16, 10) << 0);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 36:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 0, 10) << 10);
    tmp |= (fieldFromInstruction(insn, 16, 10) << 0);
    if (DecodeNegImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
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
