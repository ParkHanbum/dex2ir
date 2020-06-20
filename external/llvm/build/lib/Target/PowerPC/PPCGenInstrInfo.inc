/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Instruction Enum Values                                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM
namespace llvm {

namespace PPC {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    PROLOG_LABEL	= 2,
    EH_LABEL	= 3,
    GC_LABEL	= 4,
    KILL	= 5,
    EXTRACT_SUBREG	= 6,
    INSERT_SUBREG	= 7,
    IMPLICIT_DEF	= 8,
    SUBREG_TO_REG	= 9,
    COPY_TO_REGCLASS	= 10,
    DBG_VALUE	= 11,
    REG_SEQUENCE	= 12,
    COPY	= 13,
    BUNDLE	= 14,
    LIFETIME_START	= 15,
    LIFETIME_END	= 16,
    ADD4	= 17,
    ADD4o	= 18,
    ADD8	= 19,
    ADD8TLS	= 20,
    ADD8o	= 21,
    ADDC	= 22,
    ADDC8	= 23,
    ADDC8o	= 24,
    ADDCo	= 25,
    ADDE	= 26,
    ADDE8	= 27,
    ADDE8o	= 28,
    ADDEo	= 29,
    ADDI	= 30,
    ADDI8	= 31,
    ADDIC	= 32,
    ADDIC8	= 33,
    ADDICo	= 34,
    ADDIS	= 35,
    ADDIS8	= 36,
    ADDISdtprelHA	= 37,
    ADDISgotTprelHA	= 38,
    ADDIStlsgdHA	= 39,
    ADDIStlsldHA	= 40,
    ADDIStocHA	= 41,
    ADDIdtprelL	= 42,
    ADDItlsgdL	= 43,
    ADDItlsldL	= 44,
    ADDItocL	= 45,
    ADDME	= 46,
    ADDME8	= 47,
    ADDME8o	= 48,
    ADDMEo	= 49,
    ADDZE	= 50,
    ADDZE8	= 51,
    ADDZE8o	= 52,
    ADDZEo	= 53,
    ADJCALLSTACKDOWN	= 54,
    ADJCALLSTACKUP	= 55,
    AND	= 56,
    AND8	= 57,
    AND8o	= 58,
    ANDC	= 59,
    ANDC8	= 60,
    ANDC8o	= 61,
    ANDCo	= 62,
    ANDISo	= 63,
    ANDISo8	= 64,
    ANDIo	= 65,
    ANDIo8	= 66,
    ANDo	= 67,
    ATOMIC_CMP_SWAP_I16	= 68,
    ATOMIC_CMP_SWAP_I32	= 69,
    ATOMIC_CMP_SWAP_I64	= 70,
    ATOMIC_CMP_SWAP_I8	= 71,
    ATOMIC_LOAD_ADD_I16	= 72,
    ATOMIC_LOAD_ADD_I32	= 73,
    ATOMIC_LOAD_ADD_I64	= 74,
    ATOMIC_LOAD_ADD_I8	= 75,
    ATOMIC_LOAD_AND_I16	= 76,
    ATOMIC_LOAD_AND_I32	= 77,
    ATOMIC_LOAD_AND_I64	= 78,
    ATOMIC_LOAD_AND_I8	= 79,
    ATOMIC_LOAD_NAND_I16	= 80,
    ATOMIC_LOAD_NAND_I32	= 81,
    ATOMIC_LOAD_NAND_I64	= 82,
    ATOMIC_LOAD_NAND_I8	= 83,
    ATOMIC_LOAD_OR_I16	= 84,
    ATOMIC_LOAD_OR_I32	= 85,
    ATOMIC_LOAD_OR_I64	= 86,
    ATOMIC_LOAD_OR_I8	= 87,
    ATOMIC_LOAD_SUB_I16	= 88,
    ATOMIC_LOAD_SUB_I32	= 89,
    ATOMIC_LOAD_SUB_I64	= 90,
    ATOMIC_LOAD_SUB_I8	= 91,
    ATOMIC_LOAD_XOR_I16	= 92,
    ATOMIC_LOAD_XOR_I32	= 93,
    ATOMIC_LOAD_XOR_I64	= 94,
    ATOMIC_LOAD_XOR_I8	= 95,
    ATOMIC_SWAP_I16	= 96,
    ATOMIC_SWAP_I32	= 97,
    ATOMIC_SWAP_I64	= 98,
    ATOMIC_SWAP_I8	= 99,
    B	= 100,
    BA	= 101,
    BCC	= 102,
    BCCA	= 103,
    BCCL	= 104,
    BCCLA	= 105,
    BCCTR	= 106,
    BCCTR8	= 107,
    BCCTRL	= 108,
    BCCTRL8	= 109,
    BCLR	= 110,
    BCLRL	= 111,
    BCLalways	= 112,
    BCTR	= 113,
    BCTR8	= 114,
    BCTRL	= 115,
    BCTRL8	= 116,
    BDNZ	= 117,
    BDNZ8	= 118,
    BDNZA	= 119,
    BDNZAm	= 120,
    BDNZAp	= 121,
    BDNZL	= 122,
    BDNZLA	= 123,
    BDNZLAm	= 124,
    BDNZLAp	= 125,
    BDNZLR	= 126,
    BDNZLR8	= 127,
    BDNZLRL	= 128,
    BDNZLRLm	= 129,
    BDNZLRLp	= 130,
    BDNZLRm	= 131,
    BDNZLRp	= 132,
    BDNZLm	= 133,
    BDNZLp	= 134,
    BDNZm	= 135,
    BDNZp	= 136,
    BDZ	= 137,
    BDZ8	= 138,
    BDZA	= 139,
    BDZAm	= 140,
    BDZAp	= 141,
    BDZL	= 142,
    BDZLA	= 143,
    BDZLAm	= 144,
    BDZLAp	= 145,
    BDZLR	= 146,
    BDZLR8	= 147,
    BDZLRL	= 148,
    BDZLRLm	= 149,
    BDZLRLp	= 150,
    BDZLRm	= 151,
    BDZLRp	= 152,
    BDZLm	= 153,
    BDZLp	= 154,
    BDZm	= 155,
    BDZp	= 156,
    BL	= 157,
    BL8	= 158,
    BL8_NOP	= 159,
    BL8_NOP_TLS	= 160,
    BL8_TLS	= 161,
    BLA	= 162,
    BLA8	= 163,
    BLA8_NOP	= 164,
    BLR	= 165,
    BLRL	= 166,
    CLRLSLDI	= 167,
    CLRLSLDIo	= 168,
    CLRLSLWI	= 169,
    CLRLSLWIo	= 170,
    CLRRDI	= 171,
    CLRRDIo	= 172,
    CLRRWI	= 173,
    CLRRWIo	= 174,
    CMPD	= 175,
    CMPDI	= 176,
    CMPLD	= 177,
    CMPLDI	= 178,
    CMPLW	= 179,
    CMPLWI	= 180,
    CMPW	= 181,
    CMPWI	= 182,
    CNTLZD	= 183,
    CNTLZDo	= 184,
    CNTLZW	= 185,
    CNTLZWo	= 186,
    CR6SET	= 187,
    CR6UNSET	= 188,
    CRAND	= 189,
    CRANDC	= 190,
    CREQV	= 191,
    CRNAND	= 192,
    CRNOR	= 193,
    CROR	= 194,
    CRORC	= 195,
    CRSET	= 196,
    CRUNSET	= 197,
    CRXOR	= 198,
    DCBA	= 199,
    DCBF	= 200,
    DCBI	= 201,
    DCBST	= 202,
    DCBT	= 203,
    DCBTST	= 204,
    DCBZ	= 205,
    DCBZL	= 206,
    DIVD	= 207,
    DIVDU	= 208,
    DIVDUo	= 209,
    DIVDo	= 210,
    DIVW	= 211,
    DIVWU	= 212,
    DIVWUo	= 213,
    DIVWo	= 214,
    DSS	= 215,
    DSSALL	= 216,
    DST	= 217,
    DST64	= 218,
    DSTST	= 219,
    DSTST64	= 220,
    DSTSTT	= 221,
    DSTSTT64	= 222,
    DSTT	= 223,
    DSTT64	= 224,
    DYNALLOC	= 225,
    DYNALLOC8	= 226,
    EH_SjLj_LongJmp32	= 227,
    EH_SjLj_LongJmp64	= 228,
    EH_SjLj_SetJmp32	= 229,
    EH_SjLj_SetJmp64	= 230,
    EH_SjLj_Setup	= 231,
    EIEIO	= 232,
    EQV	= 233,
    EQV8	= 234,
    EQV8o	= 235,
    EQVo	= 236,
    EXTLDI	= 237,
    EXTLDIo	= 238,
    EXTLWI	= 239,
    EXTLWIo	= 240,
    EXTRDI	= 241,
    EXTRDIo	= 242,
    EXTRWI	= 243,
    EXTRWIo	= 244,
    EXTSB	= 245,
    EXTSB8	= 246,
    EXTSB8o	= 247,
    EXTSBo	= 248,
    EXTSH	= 249,
    EXTSH8	= 250,
    EXTSH8o	= 251,
    EXTSHo	= 252,
    EXTSW	= 253,
    EXTSW_32_64	= 254,
    EXTSW_32_64o	= 255,
    EXTSWo	= 256,
    FABSD	= 257,
    FABSDo	= 258,
    FABSS	= 259,
    FABSSo	= 260,
    FADD	= 261,
    FADDS	= 262,
    FADDSo	= 263,
    FADDo	= 264,
    FADDrtz	= 265,
    FCFID	= 266,
    FCFIDS	= 267,
    FCFIDSo	= 268,
    FCFIDU	= 269,
    FCFIDUS	= 270,
    FCFIDUSo	= 271,
    FCFIDUo	= 272,
    FCFIDo	= 273,
    FCMPUD	= 274,
    FCMPUS	= 275,
    FCTIDUZ	= 276,
    FCTIDUZo	= 277,
    FCTIDZ	= 278,
    FCTIDZo	= 279,
    FCTIWUZ	= 280,
    FCTIWUZo	= 281,
    FCTIWZ	= 282,
    FCTIWZo	= 283,
    FDIV	= 284,
    FDIVS	= 285,
    FDIVSo	= 286,
    FDIVo	= 287,
    FMADD	= 288,
    FMADDS	= 289,
    FMADDSo	= 290,
    FMADDo	= 291,
    FMR	= 292,
    FMRo	= 293,
    FMSUB	= 294,
    FMSUBS	= 295,
    FMSUBSo	= 296,
    FMSUBo	= 297,
    FMUL	= 298,
    FMULS	= 299,
    FMULSo	= 300,
    FMULo	= 301,
    FNABSD	= 302,
    FNABSDo	= 303,
    FNABSS	= 304,
    FNABSSo	= 305,
    FNEGD	= 306,
    FNEGDo	= 307,
    FNEGS	= 308,
    FNEGSo	= 309,
    FNMADD	= 310,
    FNMADDS	= 311,
    FNMADDSo	= 312,
    FNMADDo	= 313,
    FNMSUB	= 314,
    FNMSUBS	= 315,
    FNMSUBSo	= 316,
    FNMSUBo	= 317,
    FRE	= 318,
    FRES	= 319,
    FRESo	= 320,
    FREo	= 321,
    FRIMD	= 322,
    FRIMDo	= 323,
    FRIMS	= 324,
    FRIMSo	= 325,
    FRIND	= 326,
    FRINDo	= 327,
    FRINDrint	= 328,
    FRINS	= 329,
    FRINSo	= 330,
    FRINSrint	= 331,
    FRIPD	= 332,
    FRIPDo	= 333,
    FRIPS	= 334,
    FRIPSo	= 335,
    FRIZD	= 336,
    FRIZDo	= 337,
    FRIZS	= 338,
    FRIZSo	= 339,
    FRSP	= 340,
    FRSPo	= 341,
    FRSQRTE	= 342,
    FRSQRTES	= 343,
    FRSQRTESo	= 344,
    FRSQRTEo	= 345,
    FSELD	= 346,
    FSELDo	= 347,
    FSELS	= 348,
    FSELSo	= 349,
    FSQRT	= 350,
    FSQRTS	= 351,
    FSQRTSo	= 352,
    FSQRTo	= 353,
    FSUB	= 354,
    FSUBS	= 355,
    FSUBSo	= 356,
    FSUBo	= 357,
    GETtlsADDR	= 358,
    GETtlsldADDR	= 359,
    ICBI	= 360,
    INSLWI	= 361,
    INSLWIo	= 362,
    INSRDI	= 363,
    INSRDIo	= 364,
    INSRWI	= 365,
    INSRWIo	= 366,
    ISEL	= 367,
    ISEL8	= 368,
    ISYNC	= 369,
    LA	= 370,
    LAx	= 371,
    LBZ	= 372,
    LBZ8	= 373,
    LBZU	= 374,
    LBZU8	= 375,
    LBZUX	= 376,
    LBZUX8	= 377,
    LBZX	= 378,
    LBZX8	= 379,
    LD	= 380,
    LDARX	= 381,
    LDBRX	= 382,
    LDU	= 383,
    LDUX	= 384,
    LDX	= 385,
    LDgotTprelL	= 386,
    LDinto_toc	= 387,
    LDtoc	= 388,
    LDtocCPT	= 389,
    LDtocJTI	= 390,
    LDtocL	= 391,
    LDtoc_restore	= 392,
    LFD	= 393,
    LFDU	= 394,
    LFDUX	= 395,
    LFDX	= 396,
    LFIWAX	= 397,
    LFIWZX	= 398,
    LFS	= 399,
    LFSU	= 400,
    LFSUX	= 401,
    LFSX	= 402,
    LHA	= 403,
    LHA8	= 404,
    LHAU	= 405,
    LHAU8	= 406,
    LHAUX	= 407,
    LHAUX8	= 408,
    LHAX	= 409,
    LHAX8	= 410,
    LHBRX	= 411,
    LHZ	= 412,
    LHZ8	= 413,
    LHZU	= 414,
    LHZU8	= 415,
    LHZUX	= 416,
    LHZUX8	= 417,
    LHZX	= 418,
    LHZX8	= 419,
    LI	= 420,
    LI8	= 421,
    LIS	= 422,
    LIS8	= 423,
    LMW	= 424,
    LVEBX	= 425,
    LVEHX	= 426,
    LVEWX	= 427,
    LVSL	= 428,
    LVSR	= 429,
    LVX	= 430,
    LVXL	= 431,
    LWA	= 432,
    LWARX	= 433,
    LWAUX	= 434,
    LWAX	= 435,
    LWBRX	= 436,
    LWZ	= 437,
    LWZ8	= 438,
    LWZU	= 439,
    LWZU8	= 440,
    LWZUX	= 441,
    LWZUX8	= 442,
    LWZX	= 443,
    LWZX8	= 444,
    MCRF	= 445,
    MFCR	= 446,
    MFCR8	= 447,
    MFCTR	= 448,
    MFCTR8	= 449,
    MFFS	= 450,
    MFLR	= 451,
    MFLR8	= 452,
    MFOCRF	= 453,
    MFOCRF8	= 454,
    MFSPR	= 455,
    MFTB	= 456,
    MFTB8	= 457,
    MFVRSAVE	= 458,
    MFVRSAVEv	= 459,
    MFVSCR	= 460,
    MTCRF	= 461,
    MTCRF8	= 462,
    MTCTR	= 463,
    MTCTR8	= 464,
    MTCTR8loop	= 465,
    MTCTRloop	= 466,
    MTFSB0	= 467,
    MTFSB1	= 468,
    MTFSF	= 469,
    MTLR	= 470,
    MTLR8	= 471,
    MTOCRF	= 472,
    MTOCRF8	= 473,
    MTSPR	= 474,
    MTVRSAVE	= 475,
    MTVRSAVEv	= 476,
    MTVSCR	= 477,
    MULHD	= 478,
    MULHDU	= 479,
    MULHDUo	= 480,
    MULHDo	= 481,
    MULHW	= 482,
    MULHWU	= 483,
    MULHWUo	= 484,
    MULHWo	= 485,
    MULLD	= 486,
    MULLDo	= 487,
    MULLI	= 488,
    MULLI8	= 489,
    MULLW	= 490,
    MULLWo	= 491,
    MovePCtoLR	= 492,
    MovePCtoLR8	= 493,
    NAND	= 494,
    NAND8	= 495,
    NAND8o	= 496,
    NANDo	= 497,
    NEG	= 498,
    NEG8	= 499,
    NEG8o	= 500,
    NEGo	= 501,
    NOP	= 502,
    NOR	= 503,
    NOR8	= 504,
    NOR8o	= 505,
    NORo	= 506,
    OR	= 507,
    OR8	= 508,
    OR8o	= 509,
    ORC	= 510,
    ORC8	= 511,
    ORC8o	= 512,
    ORCo	= 513,
    ORI	= 514,
    ORI8	= 515,
    ORIS	= 516,
    ORIS8	= 517,
    ORo	= 518,
    POPCNTD	= 519,
    POPCNTDo	= 520,
    POPCNTW	= 521,
    POPCNTWo	= 522,
    RESTORE_CR	= 523,
    RESTORE_VRSAVE	= 524,
    RLDCL	= 525,
    RLDCLo	= 526,
    RLDCR	= 527,
    RLDCRo	= 528,
    RLDIC	= 529,
    RLDICL	= 530,
    RLDICLo	= 531,
    RLDICR	= 532,
    RLDICRo	= 533,
    RLDICo	= 534,
    RLDIMI	= 535,
    RLDIMIo	= 536,
    RLWIMI	= 537,
    RLWIMIo	= 538,
    RLWINM	= 539,
    RLWINM8	= 540,
    RLWINM8o	= 541,
    RLWINMo	= 542,
    RLWNM	= 543,
    RLWNMo	= 544,
    ROTRDI	= 545,
    ROTRDIo	= 546,
    ROTRWI	= 547,
    ROTRWIo	= 548,
    SC	= 549,
    SELECT_CC_F4	= 550,
    SELECT_CC_F8	= 551,
    SELECT_CC_I4	= 552,
    SELECT_CC_I8	= 553,
    SELECT_CC_VRRC	= 554,
    SLD	= 555,
    SLDI	= 556,
    SLDIo	= 557,
    SLDo	= 558,
    SLW	= 559,
    SLWI	= 560,
    SLWIo	= 561,
    SLWo	= 562,
    SPILL_CR	= 563,
    SPILL_VRSAVE	= 564,
    SRAD	= 565,
    SRADI	= 566,
    SRADIo	= 567,
    SRADo	= 568,
    SRAW	= 569,
    SRAWI	= 570,
    SRAWIo	= 571,
    SRAWo	= 572,
    SRD	= 573,
    SRDI	= 574,
    SRDIo	= 575,
    SRDo	= 576,
    SRW	= 577,
    SRWI	= 578,
    SRWIo	= 579,
    SRWo	= 580,
    STB	= 581,
    STB8	= 582,
    STBU	= 583,
    STBU8	= 584,
    STBUX	= 585,
    STBUX8	= 586,
    STBX	= 587,
    STBX8	= 588,
    STD	= 589,
    STDBRX	= 590,
    STDCX	= 591,
    STDU	= 592,
    STDUX	= 593,
    STDX	= 594,
    STFD	= 595,
    STFDU	= 596,
    STFDUX	= 597,
    STFDX	= 598,
    STFIWX	= 599,
    STFS	= 600,
    STFSU	= 601,
    STFSUX	= 602,
    STFSX	= 603,
    STH	= 604,
    STH8	= 605,
    STHBRX	= 606,
    STHU	= 607,
    STHU8	= 608,
    STHUX	= 609,
    STHUX8	= 610,
    STHX	= 611,
    STHX8	= 612,
    STMW	= 613,
    STVEBX	= 614,
    STVEHX	= 615,
    STVEWX	= 616,
    STVX	= 617,
    STVXL	= 618,
    STW	= 619,
    STW8	= 620,
    STWBRX	= 621,
    STWCX	= 622,
    STWU	= 623,
    STWU8	= 624,
    STWUX	= 625,
    STWUX8	= 626,
    STWX	= 627,
    STWX8	= 628,
    SUBF	= 629,
    SUBF8	= 630,
    SUBF8o	= 631,
    SUBFC	= 632,
    SUBFC8	= 633,
    SUBFC8o	= 634,
    SUBFCo	= 635,
    SUBFE	= 636,
    SUBFE8	= 637,
    SUBFE8o	= 638,
    SUBFEo	= 639,
    SUBFIC	= 640,
    SUBFIC8	= 641,
    SUBFME	= 642,
    SUBFME8	= 643,
    SUBFME8o	= 644,
    SUBFMEo	= 645,
    SUBFZE	= 646,
    SUBFZE8	= 647,
    SUBFZE8o	= 648,
    SUBFZEo	= 649,
    SUBFo	= 650,
    SUBI	= 651,
    SUBIC	= 652,
    SUBICo	= 653,
    SUBIS	= 654,
    SYNC	= 655,
    TAILB	= 656,
    TAILB8	= 657,
    TAILBA	= 658,
    TAILBA8	= 659,
    TAILBCTR	= 660,
    TAILBCTR8	= 661,
    TCRETURNai	= 662,
    TCRETURNai8	= 663,
    TCRETURNdi	= 664,
    TCRETURNdi8	= 665,
    TCRETURNri	= 666,
    TCRETURNri8	= 667,
    TD	= 668,
    TDI	= 669,
    TRAP	= 670,
    TW	= 671,
    TWI	= 672,
    UPDATE_VRSAVE	= 673,
    VADDCUW	= 674,
    VADDFP	= 675,
    VADDSBS	= 676,
    VADDSHS	= 677,
    VADDSWS	= 678,
    VADDUBM	= 679,
    VADDUBS	= 680,
    VADDUHM	= 681,
    VADDUHS	= 682,
    VADDUWM	= 683,
    VADDUWS	= 684,
    VAND	= 685,
    VANDC	= 686,
    VAVGSB	= 687,
    VAVGSH	= 688,
    VAVGSW	= 689,
    VAVGUB	= 690,
    VAVGUH	= 691,
    VAVGUW	= 692,
    VCFSX	= 693,
    VCFSX_0	= 694,
    VCFUX	= 695,
    VCFUX_0	= 696,
    VCMPBFP	= 697,
    VCMPBFPo	= 698,
    VCMPEQFP	= 699,
    VCMPEQFPo	= 700,
    VCMPEQUB	= 701,
    VCMPEQUBo	= 702,
    VCMPEQUH	= 703,
    VCMPEQUHo	= 704,
    VCMPEQUW	= 705,
    VCMPEQUWo	= 706,
    VCMPGEFP	= 707,
    VCMPGEFPo	= 708,
    VCMPGTFP	= 709,
    VCMPGTFPo	= 710,
    VCMPGTSB	= 711,
    VCMPGTSBo	= 712,
    VCMPGTSH	= 713,
    VCMPGTSHo	= 714,
    VCMPGTSW	= 715,
    VCMPGTSWo	= 716,
    VCMPGTUB	= 717,
    VCMPGTUBo	= 718,
    VCMPGTUH	= 719,
    VCMPGTUHo	= 720,
    VCMPGTUW	= 721,
    VCMPGTUWo	= 722,
    VCTSXS	= 723,
    VCTSXS_0	= 724,
    VCTUXS	= 725,
    VCTUXS_0	= 726,
    VEXPTEFP	= 727,
    VLOGEFP	= 728,
    VMADDFP	= 729,
    VMAXFP	= 730,
    VMAXSB	= 731,
    VMAXSH	= 732,
    VMAXSW	= 733,
    VMAXUB	= 734,
    VMAXUH	= 735,
    VMAXUW	= 736,
    VMHADDSHS	= 737,
    VMHRADDSHS	= 738,
    VMINFP	= 739,
    VMINSB	= 740,
    VMINSH	= 741,
    VMINSW	= 742,
    VMINUB	= 743,
    VMINUH	= 744,
    VMINUW	= 745,
    VMLADDUHM	= 746,
    VMRGHB	= 747,
    VMRGHH	= 748,
    VMRGHW	= 749,
    VMRGLB	= 750,
    VMRGLH	= 751,
    VMRGLW	= 752,
    VMSUMMBM	= 753,
    VMSUMSHM	= 754,
    VMSUMSHS	= 755,
    VMSUMUBM	= 756,
    VMSUMUHM	= 757,
    VMSUMUHS	= 758,
    VMULESB	= 759,
    VMULESH	= 760,
    VMULEUB	= 761,
    VMULEUH	= 762,
    VMULOSB	= 763,
    VMULOSH	= 764,
    VMULOUB	= 765,
    VMULOUH	= 766,
    VNMSUBFP	= 767,
    VNOR	= 768,
    VOR	= 769,
    VPERM	= 770,
    VPKPX	= 771,
    VPKSHSS	= 772,
    VPKSHUS	= 773,
    VPKSWSS	= 774,
    VPKSWUS	= 775,
    VPKUHUM	= 776,
    VPKUHUS	= 777,
    VPKUWUM	= 778,
    VPKUWUS	= 779,
    VREFP	= 780,
    VRFIM	= 781,
    VRFIN	= 782,
    VRFIP	= 783,
    VRFIZ	= 784,
    VRLB	= 785,
    VRLH	= 786,
    VRLW	= 787,
    VRSQRTEFP	= 788,
    VSEL	= 789,
    VSL	= 790,
    VSLB	= 791,
    VSLDOI	= 792,
    VSLH	= 793,
    VSLO	= 794,
    VSLW	= 795,
    VSPLTB	= 796,
    VSPLTH	= 797,
    VSPLTISB	= 798,
    VSPLTISH	= 799,
    VSPLTISW	= 800,
    VSPLTW	= 801,
    VSR	= 802,
    VSRAB	= 803,
    VSRAH	= 804,
    VSRAW	= 805,
    VSRB	= 806,
    VSRH	= 807,
    VSRO	= 808,
    VSRW	= 809,
    VSUBCUW	= 810,
    VSUBFP	= 811,
    VSUBSBS	= 812,
    VSUBSHS	= 813,
    VSUBSWS	= 814,
    VSUBUBM	= 815,
    VSUBUBS	= 816,
    VSUBUHM	= 817,
    VSUBUHS	= 818,
    VSUBUWM	= 819,
    VSUBUWS	= 820,
    VSUM2SWS	= 821,
    VSUM4SBS	= 822,
    VSUM4SHS	= 823,
    VSUM4UBS	= 824,
    VSUMSWS	= 825,
    VUPKHPX	= 826,
    VUPKHSB	= 827,
    VUPKHSH	= 828,
    VUPKLPX	= 829,
    VUPKLSB	= 830,
    VUPKLSH	= 831,
    VXOR	= 832,
    V_SET0	= 833,
    V_SET0B	= 834,
    V_SET0H	= 835,
    V_SETALLONES	= 836,
    V_SETALLONESB	= 837,
    V_SETALLONESH	= 838,
    WAIT	= 839,
    XOR	= 840,
    XOR8	= 841,
    XOR8o	= 842,
    XORI	= 843,
    XORI8	= 844,
    XORIS	= 845,
    XORIS8	= 846,
    XORo	= 847,
    gBC	= 848,
    gBCA	= 849,
    gBCCTR	= 850,
    gBCCTRL	= 851,
    gBCL	= 852,
    gBCLA	= 853,
    gBCLR	= 854,
    gBCLRL	= 855,
    INSTRUCTION_LIST_END = 856
  };
}
} // End llvm namespace 
#endif // GET_INSTRINFO_ENUM

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Instruction Descriptors                                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const uint16_t ImplicitList1[] = { PPC::CR0, 0 };
static const uint16_t ImplicitList2[] = { PPC::CARRY, 0 };
static const uint16_t ImplicitList3[] = { PPC::CARRY, PPC::CR0, 0 };
static const uint16_t ImplicitList4[] = { PPC::R1, 0 };
static const uint16_t ImplicitList5[] = { PPC::RM, 0 };
static const uint16_t ImplicitList6[] = { PPC::LR, 0 };
static const uint16_t ImplicitList7[] = { PPC::CTR, 0 };
static const uint16_t ImplicitList8[] = { PPC::CTR8, 0 };
static const uint16_t ImplicitList9[] = { PPC::CTR, PPC::RM, 0 };
static const uint16_t ImplicitList10[] = { PPC::CTR8, PPC::RM, 0 };
static const uint16_t ImplicitList11[] = { PPC::LR8, 0 };
static const uint16_t ImplicitList12[] = { PPC::LR, PPC::RM, 0 };
static const uint16_t ImplicitList13[] = { PPC::CTR, PPC::LR, PPC::RM, 0 };
static const uint16_t ImplicitList14[] = { PPC::CTR8, PPC::LR8, PPC::RM, 0 };
static const uint16_t ImplicitList15[] = { PPC::CR1EQ, 0 };
static const uint16_t ImplicitList16[] = { PPC::X1, 0 };
static const uint16_t ImplicitList17[] = { PPC::CR1, 0 };
static const uint16_t ImplicitList18[] = { PPC::CR6, 0 };
static const uint16_t ImplicitList19[] = { PPC::LR, PPC::CTR, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRC_NOR0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRC_NOR0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo54[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo55[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo64[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo68[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRSAVERCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { PPC::VRSAVERCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { PPC::VRSAVERCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRC_NOR0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRC_NOR0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo96[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo97[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo99[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo100[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo101[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo102[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo103[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo104[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo105[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo106[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo107[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo108[] = { { PPC::CTRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo109[] = { { PPC::CTRRC8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo110[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo111[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo112[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo113[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo114[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo115[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo116[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo117[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo118[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo119[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo120[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo121[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };

extern const MCInstrDesc PPCInsts[] = {
  { 0,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, NULL, NULL, 0 },  // Inst #1 = INLINEASM
  { 2,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #2 = PROLOG_LABEL
  { 3,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #3 = EH_LABEL
  { 4,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #4 = GC_LABEL
  { 5,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, NULL, NULL, 0 },  // Inst #5 = KILL
  { 6,	3,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo3 },  // Inst #6 = EXTRACT_SUBREG
  { 7,	4,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo4 },  // Inst #7 = INSERT_SUBREG
  { 8,	1,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #8 = IMPLICIT_DEF
  { 9,	4,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo6 },  // Inst #9 = SUBREG_TO_REG
  { 10,	3,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo3 },  // Inst #10 = COPY_TO_REGCLASS
  { 11,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, NULL, NULL, 0 },  // Inst #11 = DBG_VALUE
  { 12,	1,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #12 = REG_SEQUENCE
  { 13,	2,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo7 },  // Inst #13 = COPY
  { 14,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #14 = BUNDLE
  { 15,	1,	0,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #15 = LIFETIME_START
  { 16,	1,	0,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #16 = LIFETIME_END
  { 17,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #17 = ADD4
  { 18,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #18 = ADD4o
  { 19,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #19 = ADD8
  { 20,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #20 = ADD8TLS
  { 21,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #21 = ADD8o
  { 22,	3,	1,	2,	0,	0, 0xcULL, NULL, ImplicitList2, OperandInfo8 },  // Inst #22 = ADDC
  { 23,	3,	1,	2,	0,	0, 0xcULL, NULL, ImplicitList2, OperandInfo9 },  // Inst #23 = ADDC8
  { 24,	3,	1,	2,	0,	0, 0xcULL, NULL, ImplicitList3, OperandInfo9 },  // Inst #24 = ADDC8o
  { 25,	3,	1,	2,	0,	0, 0xcULL, NULL, ImplicitList3, OperandInfo8 },  // Inst #25 = ADDCo
  { 26,	3,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo8 },  // Inst #26 = ADDE
  { 27,	3,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo9 },  // Inst #27 = ADDE8
  { 28,	3,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo9 },  // Inst #28 = ADDE8o
  { 29,	3,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo8 },  // Inst #29 = ADDEo
  { 30,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo11 },  // Inst #30 = ADDI
  { 31,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo12 },  // Inst #31 = ADDI8
  { 32,	3,	1,	2,	0,	0, 0xcULL, NULL, ImplicitList2, OperandInfo13 },  // Inst #32 = ADDIC
  { 33,	3,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList2, OperandInfo10 },  // Inst #33 = ADDIC8
  { 34,	3,	1,	2,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, ImplicitList3, OperandInfo13 },  // Inst #34 = ADDICo
  { 35,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo11 },  // Inst #35 = ADDIS
  { 36,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo12 },  // Inst #36 = ADDIS8
  { 37,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #37 = ADDISdtprelHA
  { 38,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #38 = ADDISgotTprelHA
  { 39,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #39 = ADDIStlsgdHA
  { 40,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #40 = ADDIStlsldHA
  { 41,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #41 = ADDIStocHA
  { 42,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #42 = ADDIdtprelL
  { 43,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #43 = ADDItlsgdL
  { 44,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #44 = ADDItlsldL
  { 45,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #45 = ADDItocL
  { 46,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo14 },  // Inst #46 = ADDME
  { 47,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo15 },  // Inst #47 = ADDME8
  { 48,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo15 },  // Inst #48 = ADDME8o
  { 49,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo14 },  // Inst #49 = ADDMEo
  { 50,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo14 },  // Inst #50 = ADDZE
  { 51,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo15 },  // Inst #51 = ADDZE8
  { 52,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo15 },  // Inst #52 = ADDZE8o
  { 53,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo14 },  // Inst #53 = ADDZEo
  { 54,	1,	0,	0,	0,	0, 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo5 },  // Inst #54 = ADJCALLSTACKDOWN
  { 55,	2,	0,	0,	0,	0, 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo7 },  // Inst #55 = ADJCALLSTACKUP
  { 56,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #56 = AND
  { 57,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #57 = AND8
  { 58,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #58 = AND8o
  { 59,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #59 = ANDC
  { 60,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #60 = ANDC8
  { 61,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #61 = ANDC8o
  { 62,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #62 = ANDCo
  { 63,	3,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo13 },  // Inst #63 = ANDISo
  { 64,	3,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #64 = ANDISo8
  { 65,	3,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo13 },  // Inst #65 = ANDIo
  { 66,	3,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #66 = ANDIo8
  { 67,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #67 = ANDo
  { 68,	5,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #68 = ATOMIC_CMP_SWAP_I16
  { 69,	5,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #69 = ATOMIC_CMP_SWAP_I32
  { 70,	5,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo17 },  // Inst #70 = ATOMIC_CMP_SWAP_I64
  { 71,	5,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #71 = ATOMIC_CMP_SWAP_I8
  { 72,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #72 = ATOMIC_LOAD_ADD_I16
  { 73,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #73 = ATOMIC_LOAD_ADD_I32
  { 74,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo19 },  // Inst #74 = ATOMIC_LOAD_ADD_I64
  { 75,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #75 = ATOMIC_LOAD_ADD_I8
  { 76,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #76 = ATOMIC_LOAD_AND_I16
  { 77,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #77 = ATOMIC_LOAD_AND_I32
  { 78,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo19 },  // Inst #78 = ATOMIC_LOAD_AND_I64
  { 79,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #79 = ATOMIC_LOAD_AND_I8
  { 80,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #80 = ATOMIC_LOAD_NAND_I16
  { 81,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #81 = ATOMIC_LOAD_NAND_I32
  { 82,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo19 },  // Inst #82 = ATOMIC_LOAD_NAND_I64
  { 83,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #83 = ATOMIC_LOAD_NAND_I8
  { 84,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #84 = ATOMIC_LOAD_OR_I16
  { 85,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #85 = ATOMIC_LOAD_OR_I32
  { 86,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo19 },  // Inst #86 = ATOMIC_LOAD_OR_I64
  { 87,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #87 = ATOMIC_LOAD_OR_I8
  { 88,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #88 = ATOMIC_LOAD_SUB_I16
  { 89,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #89 = ATOMIC_LOAD_SUB_I32
  { 90,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo19 },  // Inst #90 = ATOMIC_LOAD_SUB_I64
  { 91,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #91 = ATOMIC_LOAD_SUB_I8
  { 92,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #92 = ATOMIC_LOAD_XOR_I16
  { 93,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #93 = ATOMIC_LOAD_XOR_I32
  { 94,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo19 },  // Inst #94 = ATOMIC_LOAD_XOR_I64
  { 95,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #95 = ATOMIC_LOAD_XOR_I8
  { 96,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #96 = ATOMIC_SWAP_I16
  { 97,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #97 = ATOMIC_SWAP_I32
  { 98,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo19 },  // Inst #98 = ATOMIC_SWAP_I64
  { 99,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #99 = ATOMIC_SWAP_I8
  { 100,	1,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x38ULL, NULL, NULL, OperandInfo5 },  // Inst #100 = B
  { 101,	1,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, NULL, NULL, OperandInfo5 },  // Inst #101 = BA
  { 102,	3,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, NULL, NULL, OperandInfo20 },  // Inst #102 = BCC
  { 103,	3,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, NULL, NULL, OperandInfo20 },  // Inst #103 = BCCA
  { 104,	3,	0,	3,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, ImplicitList6, OperandInfo20 },  // Inst #104 = BCCL
  { 105,	3,	0,	3,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, ImplicitList6, OperandInfo20 },  // Inst #105 = BCCLA
  { 106,	2,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, NULL, OperandInfo21 },  // Inst #106 = BCCTR
  { 107,	2,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList8, NULL, OperandInfo21 },  // Inst #107 = BCCTR8
  { 108,	2,	0,	3,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList6, OperandInfo21 },  // Inst #108 = BCCTRL
  { 109,	2,	0,	3,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList10, ImplicitList11, OperandInfo21 },  // Inst #109 = BCCTRL8
  { 110,	2,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList12, NULL, OperandInfo21 },  // Inst #110 = BCLR
  { 111,	2,	0,	3,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList12, ImplicitList6, OperandInfo21 },  // Inst #111 = BCLRL
  { 112,	1,	0,	3,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, ImplicitList6, OperandInfo5 },  // Inst #112 = BCLalways
  { 113,	0,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, NULL, 0 },  // Inst #113 = BCTR
  { 114,	0,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList8, NULL, 0 },  // Inst #114 = BCTR8
  { 115,	0,	0,	3,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList9, ImplicitList6, 0 },  // Inst #115 = BCTRL
  { 116,	0,	0,	3,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList10, ImplicitList11, 0 },  // Inst #116 = BCTRL8
  { 117,	1,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList7, OperandInfo5 },  // Inst #117 = BDNZ
  { 118,	1,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList8, ImplicitList8, OperandInfo5 },  // Inst #118 = BDNZ8
  { 119,	1,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList7, OperandInfo5 },  // Inst #119 = BDNZA
  { 120,	1,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList7, OperandInfo5 },  // Inst #120 = BDNZAm
  { 121,	1,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList7, OperandInfo5 },  // Inst #121 = BDNZAp
  { 122,	1,	0,	3,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo5 },  // Inst #122 = BDNZL
  { 123,	1,	0,	3,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo5 },  // Inst #123 = BDNZLA
  { 124,	1,	0,	3,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo5 },  // Inst #124 = BDNZLAm
  { 125,	1,	0,	3,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo5 },  // Inst #125 = BDNZLAp
  { 126,	0,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList7, 0 },  // Inst #126 = BDNZLR
  { 127,	0,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList14, ImplicitList8, 0 },  // Inst #127 = BDNZLR8
  { 128,	0,	0,	3,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList7, 0 },  // Inst #128 = BDNZLRL
  { 129,	0,	0,	3,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList7, 0 },  // Inst #129 = BDNZLRLm
  { 130,	0,	0,	3,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList7, 0 },  // Inst #130 = BDNZLRLp
  { 131,	0,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList7, 0 },  // Inst #131 = BDNZLRm
  { 132,	0,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList7, 0 },  // Inst #132 = BDNZLRp
  { 133,	1,	0,	3,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo5 },  // Inst #133 = BDNZLm
  { 134,	1,	0,	3,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo5 },  // Inst #134 = BDNZLp
  { 135,	1,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList7, OperandInfo5 },  // Inst #135 = BDNZm
  { 136,	1,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList7, OperandInfo5 },  // Inst #136 = BDNZp
  { 137,	1,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList7, OperandInfo5 },  // Inst #137 = BDZ
  { 138,	1,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList8, ImplicitList8, OperandInfo5 },  // Inst #138 = BDZ8
  { 139,	1,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList7, OperandInfo5 },  // Inst #139 = BDZA
  { 140,	1,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList7, OperandInfo5 },  // Inst #140 = BDZAm
  { 141,	1,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList7, OperandInfo5 },  // Inst #141 = BDZAp
  { 142,	1,	0,	3,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo5 },  // Inst #142 = BDZL
  { 143,	1,	0,	3,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo5 },  // Inst #143 = BDZLA
  { 144,	1,	0,	3,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo5 },  // Inst #144 = BDZLAm
  { 145,	1,	0,	3,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo5 },  // Inst #145 = BDZLAp
  { 146,	0,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList7, 0 },  // Inst #146 = BDZLR
  { 147,	0,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList14, ImplicitList8, 0 },  // Inst #147 = BDZLR8
  { 148,	0,	0,	3,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList7, 0 },  // Inst #148 = BDZLRL
  { 149,	0,	0,	3,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList7, 0 },  // Inst #149 = BDZLRLm
  { 150,	0,	0,	3,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList7, 0 },  // Inst #150 = BDZLRLp
  { 151,	0,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList7, 0 },  // Inst #151 = BDZLRm
  { 152,	0,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList7, 0 },  // Inst #152 = BDZLRp
  { 153,	1,	0,	3,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo5 },  // Inst #153 = BDZLm
  { 154,	1,	0,	3,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo5 },  // Inst #154 = BDZLp
  { 155,	1,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList7, OperandInfo5 },  // Inst #155 = BDZm
  { 156,	1,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList7, OperandInfo5 },  // Inst #156 = BDZp
  { 157,	1,	0,	3,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList5, ImplicitList6, OperandInfo5 },  // Inst #157 = BL
  { 158,	1,	0,	3,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList5, ImplicitList11, OperandInfo5 },  // Inst #158 = BL8
  { 159,	1,	0,	3,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList5, ImplicitList11, OperandInfo5 },  // Inst #159 = BL8_NOP
  { 160,	2,	0,	3,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, ImplicitList11, OperandInfo7 },  // Inst #160 = BL8_NOP_TLS
  { 161,	2,	0,	3,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, ImplicitList11, OperandInfo7 },  // Inst #161 = BL8_TLS
  { 162,	1,	0,	3,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList5, ImplicitList6, OperandInfo5 },  // Inst #162 = BLA
  { 163,	1,	0,	3,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList5, ImplicitList11, OperandInfo5 },  // Inst #163 = BLA8
  { 164,	1,	0,	3,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList5, ImplicitList11, OperandInfo5 },  // Inst #164 = BLA8_NOP
  { 165,	0,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x38ULL, ImplicitList12, NULL, 0 },  // Inst #165 = BLR
  { 166,	0,	0,	3,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList12, ImplicitList6, 0 },  // Inst #166 = BLRL
  { 167,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo22 },  // Inst #167 = CLRLSLDI
  { 168,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo22 },  // Inst #168 = CLRLSLDIo
  { 169,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #169 = CLRLSLWI
  { 170,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #170 = CLRLSLWIo
  { 171,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #171 = CLRRDI
  { 172,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #172 = CLRRDIo
  { 173,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #173 = CLRRWI
  { 174,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #174 = CLRRWIo
  { 175,	3,	1,	4,	0,	0|(1<<MCID::Compare), 0x8ULL, NULL, NULL, OperandInfo24 },  // Inst #175 = CMPD
  { 176,	3,	1,	4,	0,	0|(1<<MCID::Compare), 0x8ULL, NULL, NULL, OperandInfo25 },  // Inst #176 = CMPDI
  { 177,	3,	1,	4,	0,	0|(1<<MCID::Compare), 0x8ULL, NULL, NULL, OperandInfo24 },  // Inst #177 = CMPLD
  { 178,	3,	1,	4,	0,	0|(1<<MCID::Compare), 0x8ULL, NULL, NULL, OperandInfo25 },  // Inst #178 = CMPLDI
  { 179,	3,	1,	4,	0,	0|(1<<MCID::Compare), 0x8ULL, NULL, NULL, OperandInfo26 },  // Inst #179 = CMPLW
  { 180,	3,	1,	4,	0,	0|(1<<MCID::Compare), 0x8ULL, NULL, NULL, OperandInfo27 },  // Inst #180 = CMPLWI
  { 181,	3,	1,	4,	0,	0|(1<<MCID::Compare), 0x8ULL, NULL, NULL, OperandInfo26 },  // Inst #181 = CMPW
  { 182,	3,	1,	4,	0,	0|(1<<MCID::Compare), 0x8ULL, NULL, NULL, OperandInfo27 },  // Inst #182 = CMPWI
  { 183,	2,	1,	2,	0,	0, 0x8ULL, NULL, NULL, OperandInfo15 },  // Inst #183 = CNTLZD
  { 184,	2,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo15 },  // Inst #184 = CNTLZDo
  { 185,	2,	1,	2,	0,	0, 0x8ULL, NULL, NULL, OperandInfo14 },  // Inst #185 = CNTLZW
  { 186,	2,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo14 },  // Inst #186 = CNTLZWo
  { 187,	0,	0,	5,	0,	0, 0x0ULL, NULL, ImplicitList15, 0 },  // Inst #187 = CR6SET
  { 188,	0,	0,	5,	0,	0, 0x0ULL, NULL, ImplicitList15, 0 },  // Inst #188 = CR6UNSET
  { 189,	3,	1,	5,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #189 = CRAND
  { 190,	3,	1,	5,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #190 = CRANDC
  { 191,	3,	1,	5,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #191 = CREQV
  { 192,	3,	1,	5,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #192 = CRNAND
  { 193,	3,	1,	5,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #193 = CRNOR
  { 194,	3,	1,	5,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #194 = CROR
  { 195,	3,	1,	5,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #195 = CRORC
  { 196,	1,	1,	5,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo29 },  // Inst #196 = CRSET
  { 197,	1,	1,	5,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo29 },  // Inst #197 = CRUNSET
  { 198,	3,	1,	5,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #198 = CRXOR
  { 199,	2,	0,	6,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo30 },  // Inst #199 = DCBA
  { 200,	2,	0,	6,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo30 },  // Inst #200 = DCBF
  { 201,	2,	0,	6,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo30 },  // Inst #201 = DCBI
  { 202,	2,	0,	6,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo30 },  // Inst #202 = DCBST
  { 203,	2,	0,	6,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo30 },  // Inst #203 = DCBT
  { 204,	2,	0,	6,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo30 },  // Inst #204 = DCBTST
  { 205,	2,	0,	6,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo30 },  // Inst #205 = DCBZ
  { 206,	2,	0,	6,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo30 },  // Inst #206 = DCBZL
  { 207,	3,	1,	7,	0,	0, 0xdULL, NULL, NULL, OperandInfo9 },  // Inst #207 = DIVD
  { 208,	3,	1,	7,	0,	0, 0xdULL, NULL, NULL, OperandInfo9 },  // Inst #208 = DIVDU
  { 209,	3,	1,	7,	0,	0, 0xdULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #209 = DIVDUo
  { 210,	3,	1,	7,	0,	0, 0xdULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #210 = DIVDo
  { 211,	3,	1,	8,	0,	0, 0xdULL, NULL, NULL, OperandInfo8 },  // Inst #211 = DIVW
  { 212,	3,	1,	8,	0,	0, 0xdULL, NULL, NULL, OperandInfo8 },  // Inst #212 = DIVWU
  { 213,	3,	1,	8,	0,	0, 0xdULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #213 = DIVWUo
  { 214,	3,	1,	8,	0,	0, 0xdULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #214 = DIVWo
  { 215,	4,	0,	9,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo31 },  // Inst #215 = DSS
  { 216,	4,	0,	9,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo31 },  // Inst #216 = DSSALL
  { 217,	4,	0,	9,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #217 = DST
  { 218,	4,	0,	9,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #218 = DST64
  { 219,	4,	0,	9,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #219 = DSTST
  { 220,	4,	0,	9,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #220 = DSTST64
  { 221,	4,	0,	9,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #221 = DSTSTT
  { 222,	4,	0,	9,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #222 = DSTSTT64
  { 223,	4,	0,	9,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #223 = DSTT
  { 224,	4,	0,	9,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #224 = DSTT64
  { 225,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo34 },  // Inst #225 = DYNALLOC
  { 226,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList16, ImplicitList16, OperandInfo35 },  // Inst #226 = DYNALLOC8
  { 227,	1,	0,	0,	0,	0|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #227 = EH_SjLj_LongJmp32
  { 228,	1,	0,	0,	0,	0|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #228 = EH_SjLj_LongJmp64
  { 229,	2,	1,	0,	0,	0|(1<<MCID::Barrier)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList7, OperandInfo37 },  // Inst #229 = EH_SjLj_SetJmp32
  { 230,	2,	1,	0,	0,	0|(1<<MCID::Barrier)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList8, OperandInfo37 },  // Inst #230 = EH_SjLj_SetJmp64
  { 231,	1,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #231 = EH_SjLj_Setup
  { 232,	0,	0,	9,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #232 = EIEIO
  { 233,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #233 = EQV
  { 234,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #234 = EQV8
  { 235,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #235 = EQV8o
  { 236,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #236 = EQVo
  { 237,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo22 },  // Inst #237 = EXTLDI
  { 238,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo22 },  // Inst #238 = EXTLDIo
  { 239,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #239 = EXTLWI
  { 240,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #240 = EXTLWIo
  { 241,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo22 },  // Inst #241 = EXTRDI
  { 242,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo22 },  // Inst #242 = EXTRDIo
  { 243,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #243 = EXTRWI
  { 244,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #244 = EXTRWIo
  { 245,	2,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo14 },  // Inst #245 = EXTSB
  { 246,	2,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo15 },  // Inst #246 = EXTSB8
  { 247,	2,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo15 },  // Inst #247 = EXTSB8o
  { 248,	2,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo14 },  // Inst #248 = EXTSBo
  { 249,	2,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo14 },  // Inst #249 = EXTSH
  { 250,	2,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo15 },  // Inst #250 = EXTSH8
  { 251,	2,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo15 },  // Inst #251 = EXTSH8o
  { 252,	2,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo14 },  // Inst #252 = EXTSHo
  { 253,	2,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo15 },  // Inst #253 = EXTSW
  { 254,	2,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo38 },  // Inst #254 = EXTSW_32_64
  { 255,	2,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo38 },  // Inst #255 = EXTSW_32_64o
  { 256,	2,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo15 },  // Inst #256 = EXTSWo
  { 257,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo39 },  // Inst #257 = FABSD
  { 258,	2,	1,	10,	0,	0, 0x18ULL, NULL, ImplicitList17, OperandInfo39 },  // Inst #258 = FABSDo
  { 259,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo40 },  // Inst #259 = FABSS
  { 260,	2,	1,	10,	0,	0, 0x18ULL, NULL, ImplicitList17, OperandInfo40 },  // Inst #260 = FABSSo
  { 261,	3,	1,	11,	0,	0, 0x18ULL, ImplicitList5, NULL, OperandInfo41 },  // Inst #261 = FADD
  { 262,	3,	1,	10,	0,	0, 0x18ULL, ImplicitList5, NULL, OperandInfo42 },  // Inst #262 = FADDS
  { 263,	3,	1,	10,	0,	0, 0x18ULL, ImplicitList5, ImplicitList17, OperandInfo42 },  // Inst #263 = FADDSo
  { 264,	3,	1,	11,	0,	0, 0x18ULL, ImplicitList5, ImplicitList17, OperandInfo41 },  // Inst #264 = FADDo
  { 265,	3,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList5, NULL, OperandInfo41 },  // Inst #265 = FADDrtz
  { 266,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList5, NULL, OperandInfo39 },  // Inst #266 = FCFID
  { 267,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList5, NULL, OperandInfo43 },  // Inst #267 = FCFIDS
  { 268,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList5, ImplicitList17, OperandInfo43 },  // Inst #268 = FCFIDSo
  { 269,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList5, NULL, OperandInfo39 },  // Inst #269 = FCFIDU
  { 270,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList5, NULL, OperandInfo43 },  // Inst #270 = FCFIDUS
  { 271,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList5, ImplicitList17, OperandInfo43 },  // Inst #271 = FCFIDUSo
  { 272,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList5, ImplicitList17, OperandInfo39 },  // Inst #272 = FCFIDUo
  { 273,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList5, ImplicitList17, OperandInfo39 },  // Inst #273 = FCFIDo
  { 274,	3,	1,	12,	0,	0|(1<<MCID::Compare), 0x18ULL, NULL, NULL, OperandInfo44 },  // Inst #274 = FCMPUD
  { 275,	3,	1,	12,	0,	0|(1<<MCID::Compare), 0x18ULL, NULL, NULL, OperandInfo45 },  // Inst #275 = FCMPUS
  { 276,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList5, NULL, OperandInfo39 },  // Inst #276 = FCTIDUZ
  { 277,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList5, ImplicitList17, OperandInfo39 },  // Inst #277 = FCTIDUZo
  { 278,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList5, NULL, OperandInfo39 },  // Inst #278 = FCTIDZ
  { 279,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList5, ImplicitList17, OperandInfo39 },  // Inst #279 = FCTIDZo
  { 280,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList5, NULL, OperandInfo39 },  // Inst #280 = FCTIWUZ
  { 281,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList5, ImplicitList17, OperandInfo39 },  // Inst #281 = FCTIWUZo
  { 282,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList5, NULL, OperandInfo39 },  // Inst #282 = FCTIWZ
  { 283,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList5, ImplicitList17, OperandInfo39 },  // Inst #283 = FCTIWZo
  { 284,	3,	1,	13,	0,	0, 0x18ULL, ImplicitList5, NULL, OperandInfo41 },  // Inst #284 = FDIV
  { 285,	3,	1,	14,	0,	0, 0x18ULL, ImplicitList5, NULL, OperandInfo42 },  // Inst #285 = FDIVS
  { 286,	3,	1,	14,	0,	0, 0x18ULL, ImplicitList5, ImplicitList17, OperandInfo42 },  // Inst #286 = FDIVSo
  { 287,	3,	1,	13,	0,	0, 0x18ULL, ImplicitList5, ImplicitList17, OperandInfo41 },  // Inst #287 = FDIVo
  { 288,	4,	1,	15,	0,	0, 0x18ULL, ImplicitList5, NULL, OperandInfo46 },  // Inst #288 = FMADD
  { 289,	4,	1,	10,	0,	0, 0x18ULL, ImplicitList5, NULL, OperandInfo47 },  // Inst #289 = FMADDS
  { 290,	4,	1,	10,	0,	0, 0x18ULL, ImplicitList5, ImplicitList17, OperandInfo47 },  // Inst #290 = FMADDSo
  { 291,	4,	1,	15,	0,	0, 0x18ULL, ImplicitList5, ImplicitList17, OperandInfo46 },  // Inst #291 = FMADDo
  { 292,	2,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo40 },  // Inst #292 = FMR
  { 293,	2,	1,	10,	0,	0, 0x0ULL, NULL, ImplicitList17, OperandInfo40 },  // Inst #293 = FMRo
  { 294,	4,	1,	15,	0,	0, 0x18ULL, ImplicitList5, NULL, OperandInfo46 },  // Inst #294 = FMSUB
  { 295,	4,	1,	10,	0,	0, 0x18ULL, ImplicitList5, NULL, OperandInfo47 },  // Inst #295 = FMSUBS
  { 296,	4,	1,	10,	0,	0, 0x18ULL, ImplicitList5, ImplicitList17, OperandInfo47 },  // Inst #296 = FMSUBSo
  { 297,	4,	1,	15,	0,	0, 0x18ULL, ImplicitList5, ImplicitList17, OperandInfo46 },  // Inst #297 = FMSUBo
  { 298,	3,	1,	15,	0,	0, 0x18ULL, ImplicitList5, NULL, OperandInfo41 },  // Inst #298 = FMUL
  { 299,	3,	1,	10,	0,	0, 0x18ULL, ImplicitList5, NULL, OperandInfo42 },  // Inst #299 = FMULS
  { 300,	3,	1,	10,	0,	0, 0x18ULL, ImplicitList5, ImplicitList17, OperandInfo42 },  // Inst #300 = FMULSo
  { 301,	3,	1,	15,	0,	0, 0x18ULL, ImplicitList5, ImplicitList17, OperandInfo41 },  // Inst #301 = FMULo
  { 302,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo39 },  // Inst #302 = FNABSD
  { 303,	2,	1,	10,	0,	0, 0x18ULL, NULL, ImplicitList17, OperandInfo39 },  // Inst #303 = FNABSDo
  { 304,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo40 },  // Inst #304 = FNABSS
  { 305,	2,	1,	10,	0,	0, 0x18ULL, NULL, ImplicitList17, OperandInfo40 },  // Inst #305 = FNABSSo
  { 306,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo39 },  // Inst #306 = FNEGD
  { 307,	2,	1,	10,	0,	0, 0x18ULL, NULL, ImplicitList17, OperandInfo39 },  // Inst #307 = FNEGDo
  { 308,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo40 },  // Inst #308 = FNEGS
  { 309,	2,	1,	10,	0,	0, 0x18ULL, NULL, ImplicitList17, OperandInfo40 },  // Inst #309 = FNEGSo
  { 310,	4,	1,	15,	0,	0, 0x18ULL, ImplicitList5, NULL, OperandInfo46 },  // Inst #310 = FNMADD
  { 311,	4,	1,	10,	0,	0, 0x18ULL, ImplicitList5, NULL, OperandInfo47 },  // Inst #311 = FNMADDS
  { 312,	4,	1,	10,	0,	0, 0x18ULL, ImplicitList5, ImplicitList17, OperandInfo47 },  // Inst #312 = FNMADDSo
  { 313,	4,	1,	15,	0,	0, 0x18ULL, ImplicitList5, ImplicitList17, OperandInfo46 },  // Inst #313 = FNMADDo
  { 314,	4,	1,	15,	0,	0, 0x18ULL, ImplicitList5, NULL, OperandInfo46 },  // Inst #314 = FNMSUB
  { 315,	4,	1,	10,	0,	0, 0x18ULL, ImplicitList5, NULL, OperandInfo47 },  // Inst #315 = FNMSUBS
  { 316,	4,	1,	10,	0,	0, 0x18ULL, ImplicitList5, ImplicitList17, OperandInfo47 },  // Inst #316 = FNMSUBSo
  { 317,	4,	1,	15,	0,	0, 0x18ULL, ImplicitList5, ImplicitList17, OperandInfo46 },  // Inst #317 = FNMSUBo
  { 318,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo39 },  // Inst #318 = FRE
  { 319,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo40 },  // Inst #319 = FRES
  { 320,	2,	1,	10,	0,	0, 0x18ULL, NULL, ImplicitList17, OperandInfo40 },  // Inst #320 = FRESo
  { 321,	2,	1,	10,	0,	0, 0x18ULL, NULL, ImplicitList17, OperandInfo39 },  // Inst #321 = FREo
  { 322,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList5, NULL, OperandInfo39 },  // Inst #322 = FRIMD
  { 323,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList5, ImplicitList17, OperandInfo39 },  // Inst #323 = FRIMDo
  { 324,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList5, NULL, OperandInfo40 },  // Inst #324 = FRIMS
  { 325,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList5, ImplicitList17, OperandInfo40 },  // Inst #325 = FRIMSo
  { 326,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList5, NULL, OperandInfo39 },  // Inst #326 = FRIND
  { 327,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList5, ImplicitList17, OperandInfo39 },  // Inst #327 = FRINDo
  { 328,	2,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter), 0x18ULL, ImplicitList5, ImplicitList5, OperandInfo39 },  // Inst #328 = FRINDrint
  { 329,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList5, NULL, OperandInfo40 },  // Inst #329 = FRINS
  { 330,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList5, ImplicitList17, OperandInfo40 },  // Inst #330 = FRINSo
  { 331,	2,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter), 0x18ULL, ImplicitList5, ImplicitList5, OperandInfo40 },  // Inst #331 = FRINSrint
  { 332,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList5, NULL, OperandInfo39 },  // Inst #332 = FRIPD
  { 333,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList5, ImplicitList17, OperandInfo39 },  // Inst #333 = FRIPDo
  { 334,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList5, NULL, OperandInfo40 },  // Inst #334 = FRIPS
  { 335,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList5, ImplicitList17, OperandInfo40 },  // Inst #335 = FRIPSo
  { 336,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList5, NULL, OperandInfo39 },  // Inst #336 = FRIZD
  { 337,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList5, ImplicitList17, OperandInfo39 },  // Inst #337 = FRIZDo
  { 338,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList5, NULL, OperandInfo40 },  // Inst #338 = FRIZS
  { 339,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList5, ImplicitList17, OperandInfo40 },  // Inst #339 = FRIZSo
  { 340,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList5, NULL, OperandInfo43 },  // Inst #340 = FRSP
  { 341,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList5, ImplicitList17, OperandInfo43 },  // Inst #341 = FRSPo
  { 342,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo39 },  // Inst #342 = FRSQRTE
  { 343,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo40 },  // Inst #343 = FRSQRTES
  { 344,	2,	1,	10,	0,	0, 0x18ULL, NULL, ImplicitList17, OperandInfo40 },  // Inst #344 = FRSQRTESo
  { 345,	2,	1,	10,	0,	0, 0x18ULL, NULL, ImplicitList17, OperandInfo39 },  // Inst #345 = FRSQRTEo
  { 346,	4,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo46 },  // Inst #346 = FSELD
  { 347,	4,	1,	10,	0,	0, 0x18ULL, NULL, ImplicitList17, OperandInfo46 },  // Inst #347 = FSELDo
  { 348,	4,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo48 },  // Inst #348 = FSELS
  { 349,	4,	1,	10,	0,	0, 0x18ULL, NULL, ImplicitList17, OperandInfo48 },  // Inst #349 = FSELSo
  { 350,	2,	1,	16,	0,	0, 0x18ULL, ImplicitList5, NULL, OperandInfo39 },  // Inst #350 = FSQRT
  { 351,	2,	1,	16,	0,	0, 0x18ULL, ImplicitList5, NULL, OperandInfo40 },  // Inst #351 = FSQRTS
  { 352,	2,	1,	16,	0,	0, 0x18ULL, ImplicitList5, ImplicitList17, OperandInfo40 },  // Inst #352 = FSQRTSo
  { 353,	2,	1,	16,	0,	0, 0x18ULL, ImplicitList5, ImplicitList17, OperandInfo39 },  // Inst #353 = FSQRTo
  { 354,	3,	1,	11,	0,	0, 0x18ULL, ImplicitList5, NULL, OperandInfo41 },  // Inst #354 = FSUB
  { 355,	3,	1,	10,	0,	0, 0x18ULL, ImplicitList5, NULL, OperandInfo42 },  // Inst #355 = FSUBS
  { 356,	3,	1,	10,	0,	0, 0x18ULL, ImplicitList5, ImplicitList17, OperandInfo42 },  // Inst #356 = FSUBSo
  { 357,	3,	1,	11,	0,	0, 0x18ULL, ImplicitList5, ImplicitList17, OperandInfo41 },  // Inst #357 = FSUBo
  { 358,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #358 = GETtlsADDR
  { 359,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #359 = GETtlsldADDR
  { 360,	2,	0,	17,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo30 },  // Inst #360 = ICBI
  { 361,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #361 = INSLWI
  { 362,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #362 = INSLWIo
  { 363,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo22 },  // Inst #363 = INSRDI
  { 364,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo22 },  // Inst #364 = INSRDIo
  { 365,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #365 = INSRWI
  { 366,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #366 = INSRWIo
  { 367,	4,	1,	2,	0,	0|(1<<MCID::Select), 0x8ULL, NULL, NULL, OperandInfo49 },  // Inst #367 = ISEL
  { 368,	4,	1,	2,	0,	0|(1<<MCID::Select), 0x8ULL, NULL, NULL, OperandInfo50 },  // Inst #368 = ISEL8
  { 369,	0,	0,	18,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #369 = ISYNC
  { 370,	3,	1,	2,	0,	0, 0x8ULL, NULL, NULL, OperandInfo11 },  // Inst #370 = LA
  { 371,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo51 },  // Inst #371 = LAx
  { 372,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo51 },  // Inst #372 = LBZ
  { 373,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo52 },  // Inst #373 = LBZ8
  { 374,	4,	2,	19,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo53 },  // Inst #374 = LBZU
  { 375,	4,	2,	19,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo54 },  // Inst #375 = LBZU8
  { 376,	4,	2,	19,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo55 },  // Inst #376 = LBZUX
  { 377,	4,	2,	19,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo56 },  // Inst #377 = LBZUX8
  { 378,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo57 },  // Inst #378 = LBZX
  { 379,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo58 },  // Inst #379 = LBZX8
  { 380,	3,	1,	20,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo52 },  // Inst #380 = LD
  { 381,	3,	1,	21,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo58 },  // Inst #381 = LDARX
  { 382,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo58 },  // Inst #382 = LDBRX
  { 383,	4,	2,	22,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo54 },  // Inst #383 = LDU
  { 384,	4,	2,	22,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo56 },  // Inst #384 = LDUX
  { 385,	3,	1,	20,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo58 },  // Inst #385 = LDX
  { 386,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo59 },  // Inst #386 = LDgotTprelL
  { 387,	1,	0,	20,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo60 },  // Inst #387 = LDinto_toc
  { 388,	3,	1,	0,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo61 },  // Inst #388 = LDtoc
  { 389,	3,	1,	0,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo61 },  // Inst #389 = LDtocCPT
  { 390,	3,	1,	0,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo61 },  // Inst #390 = LDtocJTI
  { 391,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo59 },  // Inst #391 = LDtocL
  { 392,	0,	0,	20,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, 0 },  // Inst #392 = LDtoc_restore
  { 393,	3,	1,	23,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo62 },  // Inst #393 = LFD
  { 394,	4,	2,	24,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo63 },  // Inst #394 = LFDU
  { 395,	4,	2,	24,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo64 },  // Inst #395 = LFDUX
  { 396,	3,	1,	23,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo65 },  // Inst #396 = LFDX
  { 397,	3,	1,	23,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo65 },  // Inst #397 = LFIWAX
  { 398,	3,	1,	23,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo65 },  // Inst #398 = LFIWZX
  { 399,	3,	1,	23,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo66 },  // Inst #399 = LFS
  { 400,	4,	2,	24,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo67 },  // Inst #400 = LFSU
  { 401,	4,	2,	24,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo68 },  // Inst #401 = LFSUX
  { 402,	3,	1,	23,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo69 },  // Inst #402 = LFSX
  { 403,	3,	1,	25,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, NULL, NULL, OperandInfo51 },  // Inst #403 = LHA
  { 404,	3,	1,	25,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, NULL, NULL, OperandInfo52 },  // Inst #404 = LHA8
  { 405,	4,	2,	26,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo53 },  // Inst #405 = LHAU
  { 406,	4,	2,	26,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo54 },  // Inst #406 = LHAU8
  { 407,	4,	2,	26,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo55 },  // Inst #407 = LHAUX
  { 408,	4,	2,	26,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo56 },  // Inst #408 = LHAUX8
  { 409,	3,	1,	25,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, NULL, NULL, OperandInfo57 },  // Inst #409 = LHAX
  { 410,	3,	1,	25,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, NULL, NULL, OperandInfo58 },  // Inst #410 = LHAX8
  { 411,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo57 },  // Inst #411 = LHBRX
  { 412,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo51 },  // Inst #412 = LHZ
  { 413,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo52 },  // Inst #413 = LHZ8
  { 414,	4,	2,	19,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo53 },  // Inst #414 = LHZU
  { 415,	4,	2,	19,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo54 },  // Inst #415 = LHZU8
  { 416,	4,	2,	19,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo55 },  // Inst #416 = LHZUX
  { 417,	4,	2,	19,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo56 },  // Inst #417 = LHZUX8
  { 418,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo57 },  // Inst #418 = LHZX
  { 419,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo58 },  // Inst #419 = LHZX8
  { 420,	2,	1,	1,	0,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x8ULL, NULL, NULL, OperandInfo70 },  // Inst #420 = LI
  { 421,	2,	1,	1,	0,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x8ULL, NULL, NULL, OperandInfo71 },  // Inst #421 = LI8
  { 422,	2,	1,	1,	0,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x8ULL, NULL, NULL, OperandInfo70 },  // Inst #422 = LIS
  { 423,	2,	1,	1,	0,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x8ULL, NULL, NULL, OperandInfo71 },  // Inst #423 = LIS8
  { 424,	3,	1,	27,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo51 },  // Inst #424 = LMW
  { 425,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo72 },  // Inst #425 = LVEBX
  { 426,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo72 },  // Inst #426 = LVEHX
  { 427,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo72 },  // Inst #427 = LVEWX
  { 428,	3,	1,	9,	0,	0, 0x10ULL, NULL, NULL, OperandInfo72 },  // Inst #428 = LVSL
  { 429,	3,	1,	9,	0,	0, 0x10ULL, NULL, NULL, OperandInfo72 },  // Inst #429 = LVSR
  { 430,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo72 },  // Inst #430 = LVX
  { 431,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo72 },  // Inst #431 = LVXL
  { 432,	3,	1,	28,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, NULL, NULL, OperandInfo52 },  // Inst #432 = LWA
  { 433,	3,	1,	29,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo57 },  // Inst #433 = LWARX
  { 434,	4,	2,	26,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo56 },  // Inst #434 = LWAUX
  { 435,	3,	1,	25,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, NULL, NULL, OperandInfo58 },  // Inst #435 = LWAX
  { 436,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo57 },  // Inst #436 = LWBRX
  { 437,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo51 },  // Inst #437 = LWZ
  { 438,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo52 },  // Inst #438 = LWZ8
  { 439,	4,	2,	19,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo53 },  // Inst #439 = LWZU
  { 440,	4,	2,	19,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo54 },  // Inst #440 = LWZU8
  { 441,	4,	2,	19,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo55 },  // Inst #441 = LWZUX
  { 442,	4,	2,	19,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo56 },  // Inst #442 = LWZUX8
  { 443,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo57 },  // Inst #443 = LWZX
  { 444,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo58 },  // Inst #444 = LWZX8
  { 445,	2,	1,	30,	0,	0, 0x21ULL, NULL, NULL, OperandInfo73 },  // Inst #445 = MCRF
  { 446,	1,	1,	31,	0,	0, 0x20ULL, NULL, NULL, OperandInfo74 },  // Inst #446 = MFCR
  { 447,	1,	1,	31,	0,	0, 0x20ULL, NULL, NULL, OperandInfo60 },  // Inst #447 = MFCR8
  { 448,	1,	1,	32,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, ImplicitList7, NULL, OperandInfo74 },  // Inst #448 = MFCTR
  { 449,	1,	1,	32,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, ImplicitList8, NULL, OperandInfo60 },  // Inst #449 = MFCTR8
  { 450,	1,	1,	33,	0,	0, 0x1aULL, ImplicitList5, NULL, OperandInfo75 },  // Inst #450 = MFFS
  { 451,	1,	1,	32,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, ImplicitList6, NULL, OperandInfo74 },  // Inst #451 = MFLR
  { 452,	1,	1,	32,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, ImplicitList11, NULL, OperandInfo60 },  // Inst #452 = MFLR8
  { 453,	2,	1,	31,	0,	0, 0x21ULL, NULL, NULL, OperandInfo70 },  // Inst #453 = MFOCRF
  { 454,	2,	1,	31,	0,	0, 0x21ULL, NULL, NULL, OperandInfo71 },  // Inst #454 = MFOCRF8
  { 455,	2,	1,	32,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo76 },  // Inst #455 = MFSPR
  { 456,	2,	1,	34,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo76 },  // Inst #456 = MFTB
  { 457,	1,	1,	34,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, NULL, NULL, OperandInfo60 },  // Inst #457 = MFTB8
  { 458,	1,	1,	2,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, NULL, NULL, OperandInfo74 },  // Inst #458 = MFVRSAVE
  { 459,	2,	1,	2,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, NULL, NULL, OperandInfo77 },  // Inst #459 = MFVRSAVEv
  { 460,	1,	1,	35,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo78 },  // Inst #460 = MFVSCR
  { 461,	2,	0,	36,	0,	0, 0x20ULL, NULL, NULL, OperandInfo79 },  // Inst #461 = MTCRF
  { 462,	2,	0,	36,	0,	0, 0x20ULL, NULL, NULL, OperandInfo80 },  // Inst #462 = MTCRF8
  { 463,	1,	0,	37,	0,	0, 0x9ULL, NULL, ImplicitList7, OperandInfo74 },  // Inst #463 = MTCTR
  { 464,	1,	0,	37,	0,	0, 0x9ULL, NULL, ImplicitList8, OperandInfo60 },  // Inst #464 = MTCTR8
  { 465,	1,	0,	37,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x9ULL, NULL, ImplicitList8, OperandInfo60 },  // Inst #465 = MTCTR8loop
  { 466,	1,	0,	37,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x9ULL, NULL, ImplicitList7, OperandInfo74 },  // Inst #466 = MTCTRloop
  { 467,	1,	0,	38,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x1aULL, ImplicitList5, ImplicitList5, OperandInfo5 },  // Inst #467 = MTFSB0
  { 468,	1,	0,	38,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x1aULL, ImplicitList5, ImplicitList5, OperandInfo5 },  // Inst #468 = MTFSB1
  { 469,	2,	0,	38,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x1aULL, ImplicitList5, ImplicitList5, OperandInfo81 },  // Inst #469 = MTFSF
  { 470,	1,	0,	37,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, NULL, ImplicitList6, OperandInfo74 },  // Inst #470 = MTLR
  { 471,	1,	0,	37,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, NULL, ImplicitList11, OperandInfo60 },  // Inst #471 = MTLR8
  { 472,	2,	1,	36,	0,	0, 0x21ULL, NULL, NULL, OperandInfo82 },  // Inst #472 = MTOCRF
  { 473,	2,	1,	36,	0,	0, 0x21ULL, NULL, NULL, OperandInfo83 },  // Inst #473 = MTOCRF8
  { 474,	2,	0,	37,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo79 },  // Inst #474 = MTSPR
  { 475,	1,	0,	2,	0,	0|(1<<MCID::UnmodeledSideEffects), 0xaULL, NULL, NULL, OperandInfo74 },  // Inst #475 = MTVRSAVE
  { 476,	2,	1,	2,	0,	0|(1<<MCID::UnmodeledSideEffects), 0xaULL, NULL, NULL, OperandInfo84 },  // Inst #476 = MTVRSAVEv
  { 477,	1,	0,	9,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo78 },  // Inst #477 = MTVSCR
  { 478,	3,	1,	39,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #478 = MULHD
  { 479,	3,	1,	40,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #479 = MULHDU
  { 480,	3,	1,	40,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #480 = MULHDUo
  { 481,	3,	1,	39,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #481 = MULHDo
  { 482,	3,	1,	39,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #482 = MULHW
  { 483,	3,	1,	40,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #483 = MULHWU
  { 484,	3,	1,	40,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #484 = MULHWUo
  { 485,	3,	1,	39,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #485 = MULHWo
  { 486,	3,	1,	41,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #486 = MULLD
  { 487,	3,	1,	41,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #487 = MULLDo
  { 488,	3,	1,	42,	0,	0, 0x8ULL, NULL, NULL, OperandInfo13 },  // Inst #488 = MULLI
  { 489,	3,	1,	42,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #489 = MULLI8
  { 490,	3,	1,	39,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #490 = MULLW
  { 491,	3,	1,	39,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #491 = MULLWo
  { 492,	0,	0,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, NULL, ImplicitList6, 0 },  // Inst #492 = MovePCtoLR
  { 493,	0,	0,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, NULL, ImplicitList11, 0 },  // Inst #493 = MovePCtoLR8
  { 494,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #494 = NAND
  { 495,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #495 = NAND8
  { 496,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #496 = NAND8o
  { 497,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #497 = NANDo
  { 498,	2,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo14 },  // Inst #498 = NEG
  { 499,	2,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo15 },  // Inst #499 = NEG8
  { 500,	2,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo15 },  // Inst #500 = NEG8o
  { 501,	2,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo14 },  // Inst #501 = NEGo
  { 502,	0,	0,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, 0 },  // Inst #502 = NOP
  { 503,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #503 = NOR
  { 504,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #504 = NOR8
  { 505,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #505 = NOR8o
  { 506,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #506 = NORo
  { 507,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #507 = OR
  { 508,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #508 = OR8
  { 509,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #509 = OR8o
  { 510,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #510 = ORC
  { 511,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #511 = ORC8
  { 512,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #512 = ORC8o
  { 513,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #513 = ORCo
  { 514,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo13 },  // Inst #514 = ORI
  { 515,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #515 = ORI8
  { 516,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo13 },  // Inst #516 = ORIS
  { 517,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #517 = ORIS8
  { 518,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #518 = ORo
  { 519,	2,	1,	2,	0,	0, 0x8ULL, NULL, NULL, OperandInfo15 },  // Inst #519 = POPCNTD
  { 520,	2,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo15 },  // Inst #520 = POPCNTDo
  { 521,	2,	1,	2,	0,	0, 0x8ULL, NULL, NULL, OperandInfo14 },  // Inst #521 = POPCNTW
  { 522,	2,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo14 },  // Inst #522 = POPCNTWo
  { 523,	3,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo85 },  // Inst #523 = RESTORE_CR
  { 524,	3,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo86 },  // Inst #524 = RESTORE_VRSAVE
  { 525,	4,	1,	43,	0,	0, 0x8ULL, NULL, NULL, OperandInfo87 },  // Inst #525 = RLDCL
  { 526,	4,	1,	43,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo87 },  // Inst #526 = RLDCLo
  { 527,	4,	1,	43,	0,	0, 0x8ULL, NULL, NULL, OperandInfo87 },  // Inst #527 = RLDCR
  { 528,	4,	1,	43,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo87 },  // Inst #528 = RLDCRo
  { 529,	4,	1,	44,	0,	0, 0x8ULL, NULL, NULL, OperandInfo22 },  // Inst #529 = RLDIC
  { 530,	4,	1,	44,	0,	0, 0x8ULL, NULL, NULL, OperandInfo22 },  // Inst #530 = RLDICL
  { 531,	4,	1,	44,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo22 },  // Inst #531 = RLDICLo
  { 532,	4,	1,	44,	0,	0, 0x8ULL, NULL, NULL, OperandInfo22 },  // Inst #532 = RLDICR
  { 533,	4,	1,	44,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo22 },  // Inst #533 = RLDICRo
  { 534,	4,	1,	44,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo22 },  // Inst #534 = RLDICo
  { 535,	5,	1,	44,	0,	0|(1<<MCID::Commutable), 0x8ULL, NULL, NULL, OperandInfo88 },  // Inst #535 = RLDIMI
  { 536,	5,	1,	44,	0,	0|(1<<MCID::Commutable), 0x8ULL, NULL, ImplicitList1, OperandInfo88 },  // Inst #536 = RLDIMIo
  { 537,	6,	1,	45,	0,	0|(1<<MCID::Commutable), 0xcULL, NULL, NULL, OperandInfo89 },  // Inst #537 = RLWIMI
  { 538,	6,	1,	45,	0,	0|(1<<MCID::Commutable), 0xcULL, NULL, ImplicitList1, OperandInfo89 },  // Inst #538 = RLWIMIo
  { 539,	5,	1,	2,	0,	0, 0x8ULL, NULL, NULL, OperandInfo90 },  // Inst #539 = RLWINM
  { 540,	5,	1,	2,	0,	0, 0x8ULL, NULL, NULL, OperandInfo91 },  // Inst #540 = RLWINM8
  { 541,	5,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo91 },  // Inst #541 = RLWINM8o
  { 542,	5,	1,	2,	0,	0, 0xcULL, NULL, ImplicitList1, OperandInfo90 },  // Inst #542 = RLWINMo
  { 543,	5,	1,	2,	0,	0, 0x8ULL, NULL, NULL, OperandInfo92 },  // Inst #543 = RLWNM
  { 544,	5,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo92 },  // Inst #544 = RLWNMo
  { 545,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #545 = ROTRDI
  { 546,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #546 = ROTRDIo
  { 547,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #547 = ROTRWI
  { 548,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #548 = ROTRWIo
  { 549,	1,	0,	3,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, NULL, NULL, OperandInfo2 },  // Inst #549 = SC
  { 550,	5,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo93 },  // Inst #550 = SELECT_CC_F4
  { 551,	5,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo94 },  // Inst #551 = SELECT_CC_F8
  { 552,	5,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo95 },  // Inst #552 = SELECT_CC_I4
  { 553,	5,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo96 },  // Inst #553 = SELECT_CC_I8
  { 554,	5,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo97 },  // Inst #554 = SELECT_CC_VRRC
  { 555,	3,	1,	43,	0,	0, 0x8ULL, NULL, NULL, OperandInfo98 },  // Inst #555 = SLD
  { 556,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #556 = SLDI
  { 557,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #557 = SLDIo
  { 558,	3,	1,	43,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo98 },  // Inst #558 = SLDo
  { 559,	3,	1,	2,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #559 = SLW
  { 560,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #560 = SLWI
  { 561,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #561 = SLWIo
  { 562,	3,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #562 = SLWo
  { 563,	3,	0,	0,	0,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo85 },  // Inst #563 = SPILL_CR
  { 564,	3,	0,	0,	0,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo86 },  // Inst #564 = SPILL_VRSAVE
  { 565,	3,	1,	43,	0,	0, 0x8ULL, NULL, ImplicitList2, OperandInfo98 },  // Inst #565 = SRAD
  { 566,	3,	1,	44,	0,	0, 0x8ULL, NULL, ImplicitList2, OperandInfo10 },  // Inst #566 = SRADI
  { 567,	3,	1,	44,	0,	0, 0x8ULL, NULL, ImplicitList3, OperandInfo10 },  // Inst #567 = SRADIo
  { 568,	3,	1,	43,	0,	0, 0x8ULL, NULL, ImplicitList3, OperandInfo98 },  // Inst #568 = SRADo
  { 569,	3,	1,	46,	0,	0, 0x8ULL, NULL, ImplicitList2, OperandInfo8 },  // Inst #569 = SRAW
  { 570,	3,	1,	46,	0,	0, 0x8ULL, NULL, ImplicitList2, OperandInfo13 },  // Inst #570 = SRAWI
  { 571,	3,	1,	46,	0,	0, 0x8ULL, NULL, ImplicitList3, OperandInfo13 },  // Inst #571 = SRAWIo
  { 572,	3,	1,	46,	0,	0, 0x8ULL, NULL, ImplicitList3, OperandInfo8 },  // Inst #572 = SRAWo
  { 573,	3,	1,	43,	0,	0, 0x8ULL, NULL, NULL, OperandInfo98 },  // Inst #573 = SRD
  { 574,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #574 = SRDI
  { 575,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #575 = SRDIo
  { 576,	3,	1,	43,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo98 },  // Inst #576 = SRDo
  { 577,	3,	1,	2,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #577 = SRW
  { 578,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #578 = SRWI
  { 579,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #579 = SRWIo
  { 580,	3,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #580 = SRWo
  { 581,	3,	0,	35,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo51 },  // Inst #581 = STB
  { 582,	3,	0,	35,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo52 },  // Inst #582 = STB8
  { 583,	4,	1,	47,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo99 },  // Inst #583 = STBU
  { 584,	4,	1,	47,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo100 },  // Inst #584 = STBU8
  { 585,	4,	1,	47,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo101 },  // Inst #585 = STBUX
  { 586,	4,	1,	47,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo102 },  // Inst #586 = STBUX8
  { 587,	3,	0,	35,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo57 },  // Inst #587 = STBX
  { 588,	3,	0,	35,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo58 },  // Inst #588 = STBX8
  { 589,	3,	0,	48,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo52 },  // Inst #589 = STD
  { 590,	3,	0,	35,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo58 },  // Inst #590 = STDBRX
  { 591,	3,	0,	49,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, ImplicitList1, OperandInfo58 },  // Inst #591 = STDCX
  { 592,	4,	1,	50,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo100 },  // Inst #592 = STDU
  { 593,	4,	1,	50,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo102 },  // Inst #593 = STDUX
  { 594,	3,	0,	48,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo58 },  // Inst #594 = STDX
  { 595,	3,	0,	51,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo62 },  // Inst #595 = STFD
  { 596,	4,	1,	52,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo103 },  // Inst #596 = STFDU
  { 597,	4,	1,	52,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo104 },  // Inst #597 = STFDUX
  { 598,	3,	0,	51,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo65 },  // Inst #598 = STFDX
  { 599,	3,	0,	51,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo65 },  // Inst #599 = STFIWX
  { 600,	3,	0,	51,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo66 },  // Inst #600 = STFS
  { 601,	4,	1,	52,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo105 },  // Inst #601 = STFSU
  { 602,	4,	1,	52,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo106 },  // Inst #602 = STFSUX
  { 603,	3,	0,	51,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo69 },  // Inst #603 = STFSX
  { 604,	3,	0,	35,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo51 },  // Inst #604 = STH
  { 605,	3,	0,	35,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo52 },  // Inst #605 = STH8
  { 606,	3,	0,	35,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo57 },  // Inst #606 = STHBRX
  { 607,	4,	1,	47,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo99 },  // Inst #607 = STHU
  { 608,	4,	1,	47,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo100 },  // Inst #608 = STHU8
  { 609,	4,	1,	47,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo101 },  // Inst #609 = STHUX
  { 610,	4,	1,	47,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo102 },  // Inst #610 = STHUX8
  { 611,	3,	0,	35,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo57 },  // Inst #611 = STHX
  { 612,	3,	0,	35,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo58 },  // Inst #612 = STHX8
  { 613,	3,	0,	27,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo51 },  // Inst #613 = STMW
  { 614,	3,	0,	35,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo72 },  // Inst #614 = STVEBX
  { 615,	3,	0,	35,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo72 },  // Inst #615 = STVEHX
  { 616,	3,	0,	35,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo72 },  // Inst #616 = STVEWX
  { 617,	3,	0,	35,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo72 },  // Inst #617 = STVX
  { 618,	3,	0,	35,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo72 },  // Inst #618 = STVXL
  { 619,	3,	0,	35,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo51 },  // Inst #619 = STW
  { 620,	3,	0,	35,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo52 },  // Inst #620 = STW8
  { 621,	3,	0,	35,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo57 },  // Inst #621 = STWBRX
  { 622,	3,	0,	53,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, ImplicitList1, OperandInfo57 },  // Inst #622 = STWCX
  { 623,	4,	1,	47,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo99 },  // Inst #623 = STWU
  { 624,	4,	1,	47,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo100 },  // Inst #624 = STWU8
  { 625,	4,	1,	47,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo101 },  // Inst #625 = STWUX
  { 626,	4,	1,	47,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo102 },  // Inst #626 = STWUX8
  { 627,	3,	0,	35,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo57 },  // Inst #627 = STWX
  { 628,	3,	0,	35,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo58 },  // Inst #628 = STWX8
  { 629,	3,	1,	2,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #629 = SUBF
  { 630,	3,	1,	2,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #630 = SUBF8
  { 631,	3,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #631 = SUBF8o
  { 632,	3,	1,	2,	0,	0, 0xcULL, NULL, ImplicitList2, OperandInfo8 },  // Inst #632 = SUBFC
  { 633,	3,	1,	2,	0,	0, 0xcULL, NULL, ImplicitList2, OperandInfo9 },  // Inst #633 = SUBFC8
  { 634,	3,	1,	2,	0,	0, 0xcULL, NULL, ImplicitList2, OperandInfo9 },  // Inst #634 = SUBFC8o
  { 635,	3,	1,	2,	0,	0, 0xcULL, NULL, ImplicitList3, OperandInfo8 },  // Inst #635 = SUBFCo
  { 636,	3,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo8 },  // Inst #636 = SUBFE
  { 637,	3,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo9 },  // Inst #637 = SUBFE8
  { 638,	3,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo9 },  // Inst #638 = SUBFE8o
  { 639,	3,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo8 },  // Inst #639 = SUBFEo
  { 640,	3,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList2, OperandInfo13 },  // Inst #640 = SUBFIC
  { 641,	3,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList2, OperandInfo10 },  // Inst #641 = SUBFIC8
  { 642,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo14 },  // Inst #642 = SUBFME
  { 643,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo15 },  // Inst #643 = SUBFME8
  { 644,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo15 },  // Inst #644 = SUBFME8o
  { 645,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo14 },  // Inst #645 = SUBFMEo
  { 646,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo14 },  // Inst #646 = SUBFZE
  { 647,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo15 },  // Inst #647 = SUBFZE8
  { 648,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo15 },  // Inst #648 = SUBFZE8o
  { 649,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo14 },  // Inst #649 = SUBFZEo
  { 650,	3,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #650 = SUBFo
  { 651,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #651 = SUBI
  { 652,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #652 = SUBIC
  { 653,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #653 = SUBICo
  { 654,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #654 = SUBIS
  { 655,	1,	0,	54,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #655 = SYNC
  { 656,	1,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, NULL, OperandInfo5 },  // Inst #656 = TAILB
  { 657,	1,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, NULL, OperandInfo5 },  // Inst #657 = TAILB8
  { 658,	1,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, NULL, OperandInfo5 },  // Inst #658 = TAILBA
  { 659,	1,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, NULL, OperandInfo5 },  // Inst #659 = TAILBA8
  { 660,	0,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, NULL, 0 },  // Inst #660 = TAILBCTR
  { 661,	0,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList10, NULL, 0 },  // Inst #661 = TAILBCTR8
  { 662,	2,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList5, NULL, OperandInfo107 },  // Inst #662 = TCRETURNai
  { 663,	2,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList5, NULL, OperandInfo107 },  // Inst #663 = TCRETURNai8
  { 664,	2,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList5, NULL, OperandInfo107 },  // Inst #664 = TCRETURNdi
  { 665,	2,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList5, NULL, OperandInfo107 },  // Inst #665 = TCRETURNdi8
  { 666,	2,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList5, NULL, OperandInfo108 },  // Inst #666 = TCRETURNri
  { 667,	2,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList5, NULL, OperandInfo109 },  // Inst #667 = TCRETURNri8
  { 668,	3,	0,	55,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo110 },  // Inst #668 = TD
  { 669,	3,	0,	55,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo111 },  // Inst #669 = TDI
  { 670,	0,	0,	9,	0,	0|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #670 = TRAP
  { 671,	3,	0,	56,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo112 },  // Inst #671 = TW
  { 672,	3,	0,	56,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo113 },  // Inst #672 = TWI
  { 673,	2,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #673 = UPDATE_VRSAVE
  { 674,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #674 = VADDCUW
  { 675,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #675 = VADDFP
  { 676,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #676 = VADDSBS
  { 677,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #677 = VADDSHS
  { 678,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #678 = VADDSWS
  { 679,	3,	1,	58,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #679 = VADDUBM
  { 680,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #680 = VADDUBS
  { 681,	3,	1,	58,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #681 = VADDUHM
  { 682,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #682 = VADDUHS
  { 683,	3,	1,	58,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #683 = VADDUWM
  { 684,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #684 = VADDUWS
  { 685,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #685 = VAND
  { 686,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #686 = VANDC
  { 687,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #687 = VAVGSB
  { 688,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #688 = VAVGSH
  { 689,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #689 = VAVGSW
  { 690,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #690 = VAVGUB
  { 691,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #691 = VAVGUH
  { 692,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #692 = VAVGUW
  { 693,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo115 },  // Inst #693 = VCFSX
  { 694,	2,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo116 },  // Inst #694 = VCFSX_0
  { 695,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo115 },  // Inst #695 = VCFUX
  { 696,	2,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo116 },  // Inst #696 = VCFUX_0
  { 697,	3,	1,	59,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #697 = VCMPBFP
  { 698,	3,	1,	59,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo114 },  // Inst #698 = VCMPBFPo
  { 699,	3,	1,	59,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #699 = VCMPEQFP
  { 700,	3,	1,	59,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo114 },  // Inst #700 = VCMPEQFPo
  { 701,	3,	1,	59,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #701 = VCMPEQUB
  { 702,	3,	1,	59,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo114 },  // Inst #702 = VCMPEQUBo
  { 703,	3,	1,	59,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #703 = VCMPEQUH
  { 704,	3,	1,	59,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo114 },  // Inst #704 = VCMPEQUHo
  { 705,	3,	1,	59,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #705 = VCMPEQUW
  { 706,	3,	1,	59,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo114 },  // Inst #706 = VCMPEQUWo
  { 707,	3,	1,	59,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #707 = VCMPGEFP
  { 708,	3,	1,	59,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo114 },  // Inst #708 = VCMPGEFPo
  { 709,	3,	1,	59,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #709 = VCMPGTFP
  { 710,	3,	1,	59,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo114 },  // Inst #710 = VCMPGTFPo
  { 711,	3,	1,	59,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #711 = VCMPGTSB
  { 712,	3,	1,	59,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo114 },  // Inst #712 = VCMPGTSBo
  { 713,	3,	1,	59,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #713 = VCMPGTSH
  { 714,	3,	1,	59,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo114 },  // Inst #714 = VCMPGTSHo
  { 715,	3,	1,	59,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #715 = VCMPGTSW
  { 716,	3,	1,	59,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo114 },  // Inst #716 = VCMPGTSWo
  { 717,	3,	1,	59,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #717 = VCMPGTUB
  { 718,	3,	1,	59,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo114 },  // Inst #718 = VCMPGTUBo
  { 719,	3,	1,	59,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #719 = VCMPGTUH
  { 720,	3,	1,	59,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo114 },  // Inst #720 = VCMPGTUHo
  { 721,	3,	1,	59,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #721 = VCMPGTUW
  { 722,	3,	1,	59,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo114 },  // Inst #722 = VCMPGTUWo
  { 723,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo115 },  // Inst #723 = VCTSXS
  { 724,	2,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo116 },  // Inst #724 = VCTSXS_0
  { 725,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo115 },  // Inst #725 = VCTUXS
  { 726,	2,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo116 },  // Inst #726 = VCTUXS_0
  { 727,	2,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo116 },  // Inst #727 = VEXPTEFP
  { 728,	2,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo116 },  // Inst #728 = VLOGEFP
  { 729,	4,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo117 },  // Inst #729 = VMADDFP
  { 730,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #730 = VMAXFP
  { 731,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #731 = VMAXSB
  { 732,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #732 = VMAXSH
  { 733,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #733 = VMAXSW
  { 734,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #734 = VMAXUB
  { 735,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #735 = VMAXUH
  { 736,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #736 = VMAXUW
  { 737,	4,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo117 },  // Inst #737 = VMHADDSHS
  { 738,	4,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo117 },  // Inst #738 = VMHRADDSHS
  { 739,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #739 = VMINFP
  { 740,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #740 = VMINSB
  { 741,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #741 = VMINSH
  { 742,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #742 = VMINSW
  { 743,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #743 = VMINUB
  { 744,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #744 = VMINUH
  { 745,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #745 = VMINUW
  { 746,	4,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo117 },  // Inst #746 = VMLADDUHM
  { 747,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #747 = VMRGHB
  { 748,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #748 = VMRGHH
  { 749,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #749 = VMRGHW
  { 750,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #750 = VMRGLB
  { 751,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #751 = VMRGLH
  { 752,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #752 = VMRGLW
  { 753,	4,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo117 },  // Inst #753 = VMSUMMBM
  { 754,	4,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo117 },  // Inst #754 = VMSUMSHM
  { 755,	4,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo117 },  // Inst #755 = VMSUMSHS
  { 756,	4,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo117 },  // Inst #756 = VMSUMUBM
  { 757,	4,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo117 },  // Inst #757 = VMSUMUHM
  { 758,	4,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo117 },  // Inst #758 = VMSUMUHS
  { 759,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #759 = VMULESB
  { 760,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #760 = VMULESH
  { 761,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #761 = VMULEUB
  { 762,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #762 = VMULEUH
  { 763,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #763 = VMULOSB
  { 764,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #764 = VMULOSH
  { 765,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #765 = VMULOUB
  { 766,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #766 = VMULOUH
  { 767,	4,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo117 },  // Inst #767 = VNMSUBFP
  { 768,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #768 = VNOR
  { 769,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #769 = VOR
  { 770,	4,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo117 },  // Inst #770 = VPERM
  { 771,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #771 = VPKPX
  { 772,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #772 = VPKSHSS
  { 773,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #773 = VPKSHUS
  { 774,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #774 = VPKSWSS
  { 775,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #775 = VPKSWUS
  { 776,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #776 = VPKUHUM
  { 777,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #777 = VPKUHUS
  { 778,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #778 = VPKUWUM
  { 779,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #779 = VPKUWUS
  { 780,	2,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo116 },  // Inst #780 = VREFP
  { 781,	2,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo116 },  // Inst #781 = VRFIM
  { 782,	2,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo116 },  // Inst #782 = VRFIN
  { 783,	2,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo116 },  // Inst #783 = VRFIP
  { 784,	2,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo116 },  // Inst #784 = VRFIZ
  { 785,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #785 = VRLB
  { 786,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #786 = VRLH
  { 787,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #787 = VRLW
  { 788,	2,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo116 },  // Inst #788 = VRSQRTEFP
  { 789,	4,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo117 },  // Inst #789 = VSEL
  { 790,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #790 = VSL
  { 791,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #791 = VSLB
  { 792,	4,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo118 },  // Inst #792 = VSLDOI
  { 793,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #793 = VSLH
  { 794,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #794 = VSLO
  { 795,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #795 = VSLW
  { 796,	3,	1,	60,	0,	0, 0x28ULL, NULL, NULL, OperandInfo115 },  // Inst #796 = VSPLTB
  { 797,	3,	1,	60,	0,	0, 0x28ULL, NULL, NULL, OperandInfo115 },  // Inst #797 = VSPLTH
  { 798,	2,	1,	60,	0,	0, 0x28ULL, NULL, NULL, OperandInfo119 },  // Inst #798 = VSPLTISB
  { 799,	2,	1,	60,	0,	0, 0x28ULL, NULL, NULL, OperandInfo119 },  // Inst #799 = VSPLTISH
  { 800,	2,	1,	60,	0,	0, 0x28ULL, NULL, NULL, OperandInfo119 },  // Inst #800 = VSPLTISW
  { 801,	3,	1,	60,	0,	0, 0x28ULL, NULL, NULL, OperandInfo115 },  // Inst #801 = VSPLTW
  { 802,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #802 = VSR
  { 803,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #803 = VSRAB
  { 804,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #804 = VSRAH
  { 805,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #805 = VSRAW
  { 806,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #806 = VSRB
  { 807,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #807 = VSRH
  { 808,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #808 = VSRO
  { 809,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #809 = VSRW
  { 810,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #810 = VSUBCUW
  { 811,	3,	1,	58,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #811 = VSUBFP
  { 812,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #812 = VSUBSBS
  { 813,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #813 = VSUBSHS
  { 814,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #814 = VSUBSWS
  { 815,	3,	1,	58,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #815 = VSUBUBM
  { 816,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #816 = VSUBUBS
  { 817,	3,	1,	58,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #817 = VSUBUHM
  { 818,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #818 = VSUBUHS
  { 819,	3,	1,	58,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #819 = VSUBUWM
  { 820,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #820 = VSUBUWS
  { 821,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #821 = VSUM2SWS
  { 822,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #822 = VSUM4SBS
  { 823,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #823 = VSUM4SHS
  { 824,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #824 = VSUM4UBS
  { 825,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #825 = VSUMSWS
  { 826,	2,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo116 },  // Inst #826 = VUPKHPX
  { 827,	2,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo116 },  // Inst #827 = VUPKHSB
  { 828,	2,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo116 },  // Inst #828 = VUPKHSH
  { 829,	2,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo116 },  // Inst #829 = VUPKLPX
  { 830,	2,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo116 },  // Inst #830 = VUPKLSB
  { 831,	2,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo116 },  // Inst #831 = VUPKLSH
  { 832,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo114 },  // Inst #832 = VXOR
  { 833,	1,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo78 },  // Inst #833 = V_SET0
  { 834,	1,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo78 },  // Inst #834 = V_SET0B
  { 835,	1,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo78 },  // Inst #835 = V_SET0H
  { 836,	1,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo78 },  // Inst #836 = V_SETALLONES
  { 837,	1,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo78 },  // Inst #837 = V_SETALLONESB
  { 838,	1,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo78 },  // Inst #838 = V_SETALLONESH
  { 839,	1,	0,	9,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #839 = WAIT
  { 840,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #840 = XOR
  { 841,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #841 = XOR8
  { 842,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #842 = XOR8o
  { 843,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo13 },  // Inst #843 = XORI
  { 844,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #844 = XORI8
  { 845,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo13 },  // Inst #845 = XORIS
  { 846,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #846 = XORIS8
  { 847,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #847 = XORo
  { 848,	3,	0,	3,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo120 },  // Inst #848 = gBC
  { 849,	3,	0,	3,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo120 },  // Inst #849 = gBCA
  { 850,	3,	0,	3,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList7, OperandInfo121 },  // Inst #850 = gBCCTR
  { 851,	3,	0,	3,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList19, OperandInfo121 },  // Inst #851 = gBCCTRL
  { 852,	3,	0,	3,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList19, OperandInfo120 },  // Inst #852 = gBCL
  { 853,	3,	0,	3,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList19, OperandInfo120 },  // Inst #853 = gBCLA
  { 854,	3,	0,	3,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList7, OperandInfo121 },  // Inst #854 = gBCLR
  { 855,	3,	0,	3,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList19, OperandInfo121 },  // Inst #855 = gBCLRL
};

extern const char PPCInstrNameData[] = {
  /* 0 */ 'M', 'T', 'F', 'S', 'B', '0', 0,
  /* 7 */ 'V', '_', 'S', 'E', 'T', '0', 0,
  /* 14 */ 'V', 'C', 'T', 'S', 'X', 'S', '_', '0', 0,
  /* 23 */ 'V', 'C', 'T', 'U', 'X', 'S', '_', '0', 0,
  /* 32 */ 'V', 'C', 'F', 'S', 'X', '_', '0', 0,
  /* 40 */ 'V', 'C', 'F', 'U', 'X', '_', '0', 0,
  /* 48 */ 'M', 'T', 'F', 'S', 'B', '1', 0,
  /* 55 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '3', '2', 0,
  /* 75 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '3', '2', 0,
  /* 95 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 116 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 136 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 152 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 172 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 192 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 211 */ 'E', 'H', '_', 'S', 'j', 'L', 'j', '_', 'L', 'o', 'n', 'g', 'J', 'm', 'p', '3', '2', 0,
  /* 229 */ 'E', 'H', '_', 'S', 'j', 'L', 'j', '_', 'S', 'e', 't', 'J', 'm', 'p', '3', '2', 0,
  /* 246 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '6', '4', 0,
  /* 266 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '6', '4', 0,
  /* 286 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 307 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 327 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 343 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 363 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 383 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 402 */ 'D', 'S', 'T', '6', '4', 0,
  /* 408 */ 'D', 'S', 'T', 'S', 'T', '6', '4', 0,
  /* 416 */ 'D', 'S', 'T', 'T', '6', '4', 0,
  /* 423 */ 'D', 'S', 'T', 'S', 'T', 'T', '6', '4', 0,
  /* 432 */ 'E', 'X', 'T', 'S', 'W', '_', '3', '2', '_', '6', '4', 0,
  /* 444 */ 'E', 'H', '_', 'S', 'j', 'L', 'j', '_', 'L', 'o', 'n', 'g', 'J', 'm', 'p', '6', '4', 0,
  /* 462 */ 'E', 'H', '_', 'S', 'j', 'L', 'j', '_', 'S', 'e', 't', 'J', 'm', 'p', '6', '4', 0,
  /* 479 */ 'A', 'D', 'D', '4', 0,
  /* 484 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', '4', 0,
  /* 497 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', '4', 0,
  /* 510 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '1', '6', 0,
  /* 530 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '1', '6', 0,
  /* 550 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 571 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 591 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 607 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 627 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 647 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 666 */ 'T', 'A', 'I', 'L', 'B', 'A', '8', 0,
  /* 674 */ 'L', 'H', 'A', '8', 0,
  /* 679 */ 'B', 'L', 'A', '8', 0,
  /* 684 */ 'T', 'A', 'I', 'L', 'B', '8', 0,
  /* 691 */ 'E', 'X', 'T', 'S', 'B', '8', 0,
  /* 698 */ 'M', 'F', 'T', 'B', '8', 0,
  /* 704 */ 'S', 'T', 'B', '8', 0,
  /* 709 */ 'A', 'D', 'D', 'C', '8', 0,
  /* 715 */ 'A', 'N', 'D', 'C', '8', 0,
  /* 721 */ 'S', 'U', 'B', 'F', 'C', '8', 0,
  /* 728 */ 'A', 'D', 'D', 'I', 'C', '8', 0,
  /* 735 */ 'S', 'U', 'B', 'F', 'I', 'C', '8', 0,
  /* 743 */ 'D', 'Y', 'N', 'A', 'L', 'L', 'O', 'C', '8', 0,
  /* 753 */ 'O', 'R', 'C', '8', 0,
  /* 758 */ 'A', 'D', 'D', '8', 0,
  /* 763 */ 'N', 'A', 'N', 'D', '8', 0,
  /* 769 */ 'A', 'D', 'D', 'E', '8', 0,
  /* 775 */ 'S', 'U', 'B', 'F', 'E', '8', 0,
  /* 782 */ 'A', 'D', 'D', 'M', 'E', '8', 0,
  /* 789 */ 'S', 'U', 'B', 'F', 'M', 'E', '8', 0,
  /* 797 */ 'A', 'D', 'D', 'Z', 'E', '8', 0,
  /* 804 */ 'S', 'U', 'B', 'F', 'Z', 'E', '8', 0,
  /* 812 */ 'S', 'U', 'B', 'F', '8', 0,
  /* 818 */ 'M', 'F', 'O', 'C', 'R', 'F', '8', 0,
  /* 826 */ 'M', 'T', 'O', 'C', 'R', 'F', '8', 0,
  /* 834 */ 'M', 'T', 'C', 'R', 'F', '8', 0,
  /* 841 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', '8', 0,
  /* 854 */ 'N', 'E', 'G', '8', 0,
  /* 859 */ 'E', 'X', 'T', 'S', 'H', '8', 0,
  /* 866 */ 'S', 'T', 'H', '8', 0,
  /* 871 */ 'A', 'D', 'D', 'I', '8', 0,
  /* 877 */ 'M', 'U', 'L', 'L', 'I', '8', 0,
  /* 884 */ 'X', 'O', 'R', 'I', '8', 0,
  /* 890 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '8', 0,
  /* 909 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', '8', 0,
  /* 922 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '8', 0,
  /* 941 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 961 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 980 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 995 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 1014 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '8', 0,
  /* 1033 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '8', 0,
  /* 1051 */ 'B', 'L', '8', 0,
  /* 1055 */ 'I', 'S', 'E', 'L', '8', 0,
  /* 1061 */ 'B', 'C', 'T', 'R', 'L', '8', 0,
  /* 1068 */ 'B', 'C', 'C', 'T', 'R', 'L', '8', 0,
  /* 1076 */ 'R', 'L', 'W', 'I', 'N', 'M', '8', 0,
  /* 1084 */ 'M', 'F', 'C', 'R', '8', 0,
  /* 1090 */ 'M', 'F', 'L', 'R', '8', 0,
  /* 1096 */ 'M', 'T', 'L', 'R', '8', 0,
  /* 1102 */ 'B', 'D', 'Z', 'L', 'R', '8', 0,
  /* 1109 */ 'B', 'D', 'N', 'Z', 'L', 'R', '8', 0,
  /* 1117 */ 'M', 'o', 'v', 'e', 'P', 'C', 't', 'o', 'L', 'R', '8', 0,
  /* 1129 */ 'N', 'O', 'R', '8', 0,
  /* 1134 */ 'X', 'O', 'R', '8', 0,
  /* 1139 */ 'T', 'A', 'I', 'L', 'B', 'C', 'T', 'R', '8', 0,
  /* 1149 */ 'B', 'C', 'C', 'T', 'R', '8', 0,
  /* 1156 */ 'M', 'F', 'C', 'T', 'R', '8', 0,
  /* 1163 */ 'M', 'T', 'C', 'T', 'R', '8', 0,
  /* 1170 */ 'A', 'D', 'D', 'I', 'S', '8', 0,
  /* 1177 */ 'L', 'I', 'S', '8', 0,
  /* 1182 */ 'X', 'O', 'R', 'I', 'S', '8', 0,
  /* 1189 */ 'L', 'H', 'A', 'U', '8', 0,
  /* 1195 */ 'S', 'T', 'B', 'U', '8', 0,
  /* 1201 */ 'S', 'T', 'H', 'U', '8', 0,
  /* 1207 */ 'S', 'T', 'W', 'U', '8', 0,
  /* 1213 */ 'L', 'B', 'Z', 'U', '8', 0,
  /* 1219 */ 'L', 'H', 'Z', 'U', '8', 0,
  /* 1225 */ 'L', 'W', 'Z', 'U', '8', 0,
  /* 1231 */ 'E', 'Q', 'V', '8', 0,
  /* 1236 */ 'S', 'T', 'W', '8', 0,
  /* 1241 */ 'L', 'H', 'A', 'X', '8', 0,
  /* 1247 */ 'S', 'T', 'B', 'X', '8', 0,
  /* 1253 */ 'S', 'T', 'H', 'X', '8', 0,
  /* 1259 */ 'L', 'H', 'A', 'U', 'X', '8', 0,
  /* 1266 */ 'S', 'T', 'B', 'U', 'X', '8', 0,
  /* 1273 */ 'S', 'T', 'H', 'U', 'X', '8', 0,
  /* 1280 */ 'S', 'T', 'W', 'U', 'X', '8', 0,
  /* 1287 */ 'L', 'B', 'Z', 'U', 'X', '8', 0,
  /* 1294 */ 'L', 'H', 'Z', 'U', 'X', '8', 0,
  /* 1301 */ 'L', 'W', 'Z', 'U', 'X', '8', 0,
  /* 1308 */ 'S', 'T', 'W', 'X', '8', 0,
  /* 1314 */ 'L', 'B', 'Z', 'X', '8', 0,
  /* 1320 */ 'L', 'H', 'Z', 'X', '8', 0,
  /* 1326 */ 'L', 'W', 'Z', 'X', '8', 0,
  /* 1332 */ 'L', 'B', 'Z', '8', 0,
  /* 1337 */ 'B', 'D', 'Z', '8', 0,
  /* 1342 */ 'L', 'H', 'Z', '8', 0,
  /* 1347 */ 'B', 'D', 'N', 'Z', '8', 0,
  /* 1353 */ 'L', 'W', 'Z', '8', 0,
  /* 1358 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'a', 'i', '8', 0,
  /* 1370 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'd', 'i', '8', 0,
  /* 1382 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'r', 'i', '8', 0,
  /* 1394 */ 'A', 'N', 'D', 'I', 'o', '8', 0,
  /* 1401 */ 'A', 'N', 'D', 'I', 'S', 'o', '8', 0,
  /* 1409 */ 'D', 'C', 'B', 'A', 0,
  /* 1414 */ 'T', 'A', 'I', 'L', 'B', 'A', 0,
  /* 1421 */ 'g', 'B', 'C', 'A', 0,
  /* 1426 */ 'B', 'C', 'C', 'A', 0,
  /* 1431 */ 'L', 'H', 'A', 0,
  /* 1435 */ 'A', 'D', 'D', 'I', 'S', 't', 'o', 'c', 'H', 'A', 0,
  /* 1446 */ 'A', 'D', 'D', 'I', 'S', 't', 'l', 's', 'g', 'd', 'H', 'A', 0,
  /* 1459 */ 'A', 'D', 'D', 'I', 'S', 't', 'l', 's', 'l', 'd', 'H', 'A', 0,
  /* 1472 */ 'A', 'D', 'D', 'I', 'S', 'g', 'o', 't', 'T', 'p', 'r', 'e', 'l', 'H', 'A', 0,
  /* 1488 */ 'A', 'D', 'D', 'I', 'S', 'd', 't', 'p', 'r', 'e', 'l', 'H', 'A', 0,
  /* 1502 */ 'B', 'L', 'A', 0,
  /* 1506 */ 'g', 'B', 'C', 'L', 'A', 0,
  /* 1512 */ 'B', 'C', 'C', 'L', 'A', 0,
  /* 1518 */ 'B', 'D', 'Z', 'L', 'A', 0,
  /* 1524 */ 'B', 'D', 'N', 'Z', 'L', 'A', 0,
  /* 1531 */ 'L', 'W', 'A', 0,
  /* 1535 */ 'B', 'D', 'Z', 'A', 0,
  /* 1540 */ 'B', 'D', 'N', 'Z', 'A', 0,
  /* 1546 */ 'V', '_', 'S', 'E', 'T', '0', 'B', 0,
  /* 1554 */ 'V', 'S', 'R', 'A', 'B', 0,
  /* 1560 */ 'V', 'M', 'R', 'G', 'H', 'B', 0,
  /* 1567 */ 'V', 'M', 'R', 'G', 'L', 'B', 0,
  /* 1574 */ 'T', 'A', 'I', 'L', 'B', 0,
  /* 1580 */ 'V', 'R', 'L', 'B', 0,
  /* 1585 */ 'V', 'S', 'L', 'B', 0,
  /* 1590 */ 'V', 'S', 'R', 'B', 0,
  /* 1595 */ 'V', 'M', 'U', 'L', 'E', 'S', 'B', 0,
  /* 1603 */ 'V', '_', 'S', 'E', 'T', 'A', 'L', 'L', 'O', 'N', 'E', 'S', 'B', 0,
  /* 1617 */ 'V', 'A', 'V', 'G', 'S', 'B', 0,
  /* 1624 */ 'V', 'U', 'P', 'K', 'H', 'S', 'B', 0,
  /* 1632 */ 'V', 'S', 'P', 'L', 'T', 'I', 'S', 'B', 0,
  /* 1641 */ 'V', 'U', 'P', 'K', 'L', 'S', 'B', 0,
  /* 1649 */ 'V', 'M', 'I', 'N', 'S', 'B', 0,
  /* 1656 */ 'V', 'M', 'U', 'L', 'O', 'S', 'B', 0,
  /* 1664 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'B', 0,
  /* 1673 */ 'E', 'X', 'T', 'S', 'B', 0,
  /* 1679 */ 'V', 'M', 'A', 'X', 'S', 'B', 0,
  /* 1686 */ 'M', 'F', 'T', 'B', 0,
  /* 1691 */ 'V', 'S', 'P', 'L', 'T', 'B', 0,
  /* 1698 */ 'S', 'T', 'B', 0,
  /* 1702 */ 'V', 'M', 'U', 'L', 'E', 'U', 'B', 0,
  /* 1710 */ 'V', 'A', 'V', 'G', 'U', 'B', 0,
  /* 1717 */ 'V', 'M', 'I', 'N', 'U', 'B', 0,
  /* 1724 */ 'V', 'M', 'U', 'L', 'O', 'U', 'B', 0,
  /* 1732 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'B', 0,
  /* 1741 */ 'F', 'S', 'U', 'B', 0,
  /* 1746 */ 'F', 'M', 'S', 'U', 'B', 0,
  /* 1752 */ 'F', 'N', 'M', 'S', 'U', 'B', 0,
  /* 1759 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'B', 0,
  /* 1768 */ 'V', 'M', 'A', 'X', 'U', 'B', 0,
  /* 1775 */ 'g', 'B', 'C', 0,
  /* 1779 */ 'B', 'C', 'C', 0,
  /* 1783 */ 'A', 'D', 'D', 'C', 0,
  /* 1788 */ 'C', 'R', 'A', 'N', 'D', 'C', 0,
  /* 1795 */ 'V', 'A', 'N', 'D', 'C', 0,
  /* 1801 */ 'S', 'U', 'B', 'F', 'C', 0,
  /* 1807 */ 'S', 'U', 'B', 'I', 'C', 0,
  /* 1813 */ 'A', 'D', 'D', 'I', 'C', 0,
  /* 1819 */ 'R', 'L', 'D', 'I', 'C', 0,
  /* 1825 */ 'S', 'U', 'B', 'F', 'I', 'C', 0,
  /* 1832 */ 'I', 'S', 'Y', 'N', 'C', 0,
  /* 1838 */ 'D', 'Y', 'N', 'A', 'L', 'L', 'O', 'C', 0,
  /* 1847 */ 'C', 'R', 'O', 'R', 'C', 0,
  /* 1853 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'V', 'R', 'R', 'C', 0,
  /* 1868 */ 'S', 'C', 0,
  /* 1871 */ 'S', 'R', 'A', 'D', 0,
  /* 1876 */ 'F', 'A', 'D', 'D', 0,
  /* 1881 */ 'F', 'M', 'A', 'D', 'D', 0,
  /* 1887 */ 'F', 'N', 'M', 'A', 'D', 'D', 0,
  /* 1894 */ 'L', 'F', 'D', 0,
  /* 1898 */ 'S', 'T', 'F', 'D', 0,
  /* 1903 */ 'F', 'N', 'E', 'G', 'D', 0,
  /* 1909 */ 'M', 'U', 'L', 'H', 'D', 0,
  /* 1915 */ 'F', 'C', 'F', 'I', 'D', 0,
  /* 1921 */ 'F', 'S', 'E', 'L', 'D', 0,
  /* 1927 */ 'M', 'U', 'L', 'L', 'D', 0,
  /* 1933 */ 'C', 'M', 'P', 'L', 'D', 0,
  /* 1939 */ 'S', 'L', 'D', 0,
  /* 1943 */ 'F', 'R', 'I', 'M', 'D', 0,
  /* 1949 */ 'C', 'R', 'N', 'A', 'N', 'D', 0,
  /* 1956 */ 'C', 'R', 'A', 'N', 'D', 0,
  /* 1962 */ 'V', 'A', 'N', 'D', 0,
  /* 1967 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 1980 */ 'F', 'R', 'I', 'N', 'D', 0,
  /* 1986 */ 'F', 'R', 'I', 'P', 'D', 0,
  /* 1992 */ 'C', 'M', 'P', 'D', 0,
  /* 1997 */ 'S', 'R', 'D', 0,
  /* 2001 */ 'F', 'A', 'B', 'S', 'D', 0,
  /* 2007 */ 'F', 'N', 'A', 'B', 'S', 'D', 0,
  /* 2014 */ 'P', 'O', 'P', 'C', 'N', 'T', 'D', 0,
  /* 2022 */ 'S', 'T', 'D', 0,
  /* 2026 */ 'F', 'C', 'M', 'P', 'U', 'D', 0,
  /* 2033 */ 'D', 'I', 'V', 'D', 0,
  /* 2038 */ 'F', 'R', 'I', 'Z', 'D', 0,
  /* 2044 */ 'C', 'N', 'T', 'L', 'Z', 'D', 0,
  /* 2051 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 2064 */ 'A', 'D', 'D', 'E', 0,
  /* 2069 */ 'S', 'U', 'B', 'F', 'E', 0,
  /* 2075 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 2082 */ 'A', 'D', 'D', 'M', 'E', 0,
  /* 2088 */ 'S', 'U', 'B', 'F', 'M', 'E', 0,
  /* 2095 */ 'F', 'R', 'E', 0,
  /* 2099 */ 'F', 'R', 'S', 'Q', 'R', 'T', 'E', 0,
  /* 2107 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 2117 */ 'M', 'F', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 2126 */ 'M', 'T', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 2135 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', '_', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 2150 */ 'U', 'P', 'D', 'A', 'T', 'E', '_', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 2164 */ 'S', 'P', 'I', 'L', 'L', '_', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 2177 */ 'A', 'D', 'D', 'Z', 'E', 0,
  /* 2183 */ 'S', 'U', 'B', 'F', 'Z', 'E', 0,
  /* 2190 */ 'D', 'C', 'B', 'F', 0,
  /* 2195 */ 'S', 'U', 'B', 'F', 0,
  /* 2200 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 2213 */ 'M', 'C', 'R', 'F', 0,
  /* 2218 */ 'M', 'F', 'O', 'C', 'R', 'F', 0,
  /* 2225 */ 'M', 'T', 'O', 'C', 'R', 'F', 0,
  /* 2232 */ 'M', 'T', 'C', 'R', 'F', 0,
  /* 2238 */ 'M', 'T', 'F', 'S', 'F', 0,
  /* 2244 */ 'N', 'E', 'G', 0,
  /* 2248 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 2263 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 2277 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 2291 */ 'V', '_', 'S', 'E', 'T', '0', 'H', 0,
  /* 2299 */ 'V', 'S', 'R', 'A', 'H', 0,
  /* 2305 */ 'V', 'M', 'R', 'G', 'H', 'H', 0,
  /* 2312 */ 'V', 'M', 'R', 'G', 'L', 'H', 0,
  /* 2319 */ 'V', 'R', 'L', 'H', 0,
  /* 2324 */ 'V', 'S', 'L', 'H', 0,
  /* 2329 */ 'V', 'S', 'R', 'H', 0,
  /* 2334 */ 'V', 'M', 'U', 'L', 'E', 'S', 'H', 0,
  /* 2342 */ 'V', '_', 'S', 'E', 'T', 'A', 'L', 'L', 'O', 'N', 'E', 'S', 'H', 0,
  /* 2356 */ 'V', 'A', 'V', 'G', 'S', 'H', 0,
  /* 2363 */ 'V', 'U', 'P', 'K', 'H', 'S', 'H', 0,
  /* 2371 */ 'V', 'S', 'P', 'L', 'T', 'I', 'S', 'H', 0,
  /* 2380 */ 'V', 'U', 'P', 'K', 'L', 'S', 'H', 0,
  /* 2388 */ 'V', 'M', 'I', 'N', 'S', 'H', 0,
  /* 2395 */ 'V', 'M', 'U', 'L', 'O', 'S', 'H', 0,
  /* 2403 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'H', 0,
  /* 2412 */ 'E', 'X', 'T', 'S', 'H', 0,
  /* 2418 */ 'V', 'M', 'A', 'X', 'S', 'H', 0,
  /* 2425 */ 'V', 'S', 'P', 'L', 'T', 'H', 0,
  /* 2432 */ 'S', 'T', 'H', 0,
  /* 2436 */ 'V', 'M', 'U', 'L', 'E', 'U', 'H', 0,
  /* 2444 */ 'V', 'A', 'V', 'G', 'U', 'H', 0,
  /* 2451 */ 'V', 'M', 'I', 'N', 'U', 'H', 0,
  /* 2458 */ 'V', 'M', 'U', 'L', 'O', 'U', 'H', 0,
  /* 2466 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'H', 0,
  /* 2475 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'H', 0,
  /* 2484 */ 'V', 'M', 'A', 'X', 'U', 'H', 0,
  /* 2491 */ 'D', 'C', 'B', 'I', 0,
  /* 2496 */ 'I', 'C', 'B', 'I', 0,
  /* 2501 */ 'S', 'U', 'B', 'I', 0,
  /* 2506 */ 'S', 'R', 'A', 'D', 'I', 0,
  /* 2512 */ 'A', 'D', 'D', 'I', 0,
  /* 2517 */ 'C', 'M', 'P', 'L', 'D', 'I', 0,
  /* 2524 */ 'C', 'L', 'R', 'L', 'S', 'L', 'D', 'I', 0,
  /* 2533 */ 'E', 'X', 'T', 'L', 'D', 'I', 0,
  /* 2540 */ 'C', 'M', 'P', 'D', 'I', 0,
  /* 2546 */ 'C', 'L', 'R', 'R', 'D', 'I', 0,
  /* 2553 */ 'I', 'N', 'S', 'R', 'D', 'I', 0,
  /* 2560 */ 'R', 'O', 'T', 'R', 'D', 'I', 0,
  /* 2567 */ 'E', 'X', 'T', 'R', 'D', 'I', 0,
  /* 2574 */ 'T', 'D', 'I', 0,
  /* 2578 */ 'P', 'H', 'I', 0,
  /* 2582 */ 'M', 'U', 'L', 'L', 'I', 0,
  /* 2588 */ 'R', 'L', 'D', 'I', 'M', 'I', 0,
  /* 2595 */ 'R', 'L', 'W', 'I', 'M', 'I', 0,
  /* 2602 */ 'V', 'S', 'L', 'D', 'O', 'I', 0,
  /* 2609 */ 'X', 'O', 'R', 'I', 0,
  /* 2614 */ 'L', 'D', 't', 'o', 'c', 'J', 'T', 'I', 0,
  /* 2623 */ 'S', 'R', 'A', 'W', 'I', 0,
  /* 2629 */ 'C', 'M', 'P', 'L', 'W', 'I', 0,
  /* 2636 */ 'C', 'L', 'R', 'L', 'S', 'L', 'W', 'I', 0,
  /* 2645 */ 'I', 'N', 'S', 'L', 'W', 'I', 0,
  /* 2652 */ 'E', 'X', 'T', 'L', 'W', 'I', 0,
  /* 2659 */ 'C', 'M', 'P', 'W', 'I', 0,
  /* 2665 */ 'C', 'L', 'R', 'R', 'W', 'I', 0,
  /* 2672 */ 'I', 'N', 'S', 'R', 'W', 'I', 0,
  /* 2679 */ 'R', 'O', 'T', 'R', 'W', 'I', 0,
  /* 2686 */ 'E', 'X', 'T', 'R', 'W', 'I', 0,
  /* 2693 */ 'T', 'W', 'I', 0,
  /* 2697 */ 'B', 'L', 0,
  /* 2700 */ 'g', 'B', 'C', 'L', 0,
  /* 2705 */ 'B', 'C', 'C', 'L', 0,
  /* 2710 */ 'R', 'L', 'D', 'C', 'L', 0,
  /* 2716 */ 'R', 'L', 'D', 'I', 'C', 'L', 0,
  /* 2723 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2732 */ 'P', 'R', 'O', 'L', 'O', 'G', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2745 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2754 */ 'I', 'S', 'E', 'L', 0,
  /* 2759 */ 'V', 'S', 'E', 'L', 0,
  /* 2764 */ 'D', 'S', 'S', 'A', 'L', 'L', 0,
  /* 2771 */ 'K', 'I', 'L', 'L', 0,
  /* 2776 */ 'B', 'L', 'R', 'L', 0,
  /* 2781 */ 'g', 'B', 'C', 'L', 'R', 'L', 0,
  /* 2788 */ 'B', 'D', 'Z', 'L', 'R', 'L', 0,
  /* 2795 */ 'B', 'D', 'N', 'Z', 'L', 'R', 'L', 0,
  /* 2803 */ 'B', 'C', 'T', 'R', 'L', 0,
  /* 2809 */ 'g', 'B', 'C', 'C', 'T', 'R', 'L', 0,
  /* 2817 */ 'L', 'V', 'S', 'L', 0,
  /* 2822 */ 'F', 'M', 'U', 'L', 0,
  /* 2827 */ 'L', 'V', 'X', 'L', 0,
  /* 2832 */ 'S', 'T', 'V', 'X', 'L', 0,
  /* 2838 */ 'D', 'C', 'B', 'Z', 'L', 0,
  /* 2844 */ 'B', 'D', 'Z', 'L', 0,
  /* 2849 */ 'B', 'D', 'N', 'Z', 'L', 0,
  /* 2855 */ 'L', 'D', 't', 'o', 'c', 'L', 0,
  /* 2862 */ 'A', 'D', 'D', 'I', 't', 'o', 'c', 'L', 0,
  /* 2871 */ 'A', 'D', 'D', 'I', 't', 'l', 's', 'g', 'd', 'L', 0,
  /* 2882 */ 'A', 'D', 'D', 'I', 't', 'l', 's', 'l', 'd', 'L', 0,
  /* 2893 */ 'L', 'D', 'g', 'o', 't', 'T', 'p', 'r', 'e', 'l', 'L', 0,
  /* 2905 */ 'A', 'D', 'D', 'I', 'd', 't', 'p', 'r', 'e', 'l', 'L', 0,
  /* 2917 */ 'V', 'M', 'S', 'U', 'M', 'M', 'B', 'M', 0,
  /* 2926 */ 'V', 'S', 'U', 'B', 'U', 'B', 'M', 0,
  /* 2934 */ 'V', 'A', 'D', 'D', 'U', 'B', 'M', 0,
  /* 2942 */ 'V', 'M', 'S', 'U', 'M', 'U', 'B', 'M', 0,
  /* 2951 */ 'V', 'M', 'S', 'U', 'M', 'S', 'H', 'M', 0,
  /* 2960 */ 'V', 'S', 'U', 'B', 'U', 'H', 'M', 0,
  /* 2968 */ 'V', 'M', 'L', 'A', 'D', 'D', 'U', 'H', 'M', 0,
  /* 2978 */ 'V', 'A', 'D', 'D', 'U', 'H', 'M', 0,
  /* 2986 */ 'V', 'M', 'S', 'U', 'M', 'U', 'H', 'M', 0,
  /* 2995 */ 'V', 'R', 'F', 'I', 'M', 0,
  /* 3001 */ 'R', 'L', 'W', 'I', 'N', 'M', 0,
  /* 3008 */ 'R', 'L', 'W', 'N', 'M', 0,
  /* 3014 */ 'V', 'P', 'E', 'R', 'M', 0,
  /* 3020 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 3030 */ 'V', 'P', 'K', 'U', 'H', 'U', 'M', 0,
  /* 3038 */ 'V', 'P', 'K', 'U', 'W', 'U', 'M', 0,
  /* 3046 */ 'V', 'S', 'U', 'B', 'U', 'W', 'M', 0,
  /* 3054 */ 'V', 'A', 'D', 'D', 'U', 'W', 'M', 0,
  /* 3062 */ 'V', 'R', 'F', 'I', 'N', 0,
  /* 3068 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 3085 */ 'E', 'I', 'E', 'I', 'O', 0,
  /* 3091 */ 'V', 'S', 'L', 'O', 0,
  /* 3096 */ 'V', 'S', 'R', 'O', 0,
  /* 3101 */ 'T', 'R', 'A', 'P', 0,
  /* 3106 */ 'V', 'C', 'M', 'P', 'B', 'F', 'P', 0,
  /* 3114 */ 'V', 'N', 'M', 'S', 'U', 'B', 'F', 'P', 0,
  /* 3123 */ 'V', 'S', 'U', 'B', 'F', 'P', 0,
  /* 3130 */ 'V', 'M', 'A', 'D', 'D', 'F', 'P', 0,
  /* 3138 */ 'V', 'A', 'D', 'D', 'F', 'P', 0,
  /* 3145 */ 'V', 'L', 'O', 'G', 'E', 'F', 'P', 0,
  /* 3153 */ 'V', 'C', 'M', 'P', 'G', 'E', 'F', 'P', 0,
  /* 3162 */ 'V', 'R', 'E', 'F', 'P', 0,
  /* 3168 */ 'V', 'E', 'X', 'P', 'T', 'E', 'F', 'P', 0,
  /* 3177 */ 'V', 'R', 'S', 'Q', 'R', 'T', 'E', 'F', 'P', 0,
  /* 3187 */ 'V', 'M', 'I', 'N', 'F', 'P', 0,
  /* 3194 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'F', 'P', 0,
  /* 3203 */ 'V', 'C', 'M', 'P', 'G', 'T', 'F', 'P', 0,
  /* 3212 */ 'V', 'M', 'A', 'X', 'F', 'P', 0,
  /* 3219 */ 'V', 'R', 'F', 'I', 'P', 0,
  /* 3225 */ 'B', 'L', 'A', '8', '_', 'N', 'O', 'P', 0,
  /* 3234 */ 'B', 'L', '8', '_', 'N', 'O', 'P', 0,
  /* 3242 */ 'F', 'R', 'S', 'P', 0,
  /* 3247 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 3262 */ 'R', 'L', 'D', 'C', 'R', 0,
  /* 3268 */ 'M', 'F', 'C', 'R', 0,
  /* 3273 */ 'R', 'L', 'D', 'I', 'C', 'R', 0,
  /* 3280 */ 'M', 'F', 'V', 'S', 'C', 'R', 0,
  /* 3287 */ 'M', 'T', 'V', 'S', 'C', 'R', 0,
  /* 3294 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', '_', 'C', 'R', 0,
  /* 3305 */ 'S', 'P', 'I', 'L', 'L', '_', 'C', 'R', 0,
  /* 3314 */ 'G', 'E', 'T', 't', 'l', 's', 'l', 'd', 'A', 'D', 'D', 'R', 0,
  /* 3327 */ 'G', 'E', 'T', 't', 'l', 's', 'A', 'D', 'D', 'R', 0,
  /* 3338 */ 'B', 'L', 'R', 0,
  /* 3342 */ 'g', 'B', 'C', 'L', 'R', 0,
  /* 3348 */ 'M', 'F', 'L', 'R', 0,
  /* 3353 */ 'M', 'T', 'L', 'R', 0,
  /* 3358 */ 'B', 'D', 'Z', 'L', 'R', 0,
  /* 3364 */ 'B', 'D', 'N', 'Z', 'L', 'R', 0,
  /* 3371 */ 'M', 'o', 'v', 'e', 'P', 'C', 't', 'o', 'L', 'R', 0,
  /* 3382 */ 'F', 'M', 'R', 0,
  /* 3386 */ 'C', 'R', 'N', 'O', 'R', 0,
  /* 3392 */ 'V', 'N', 'O', 'R', 0,
  /* 3397 */ 'C', 'R', 'O', 'R', 0,
  /* 3402 */ 'V', 'O', 'R', 0,
  /* 3406 */ 'C', 'R', 'X', 'O', 'R', 0,
  /* 3412 */ 'V', 'X', 'O', 'R', 0,
  /* 3417 */ 'M', 'F', 'S', 'P', 'R', 0,
  /* 3423 */ 'M', 'T', 'S', 'P', 'R', 0,
  /* 3429 */ 'L', 'V', 'S', 'R', 0,
  /* 3434 */ 'T', 'A', 'I', 'L', 'B', 'C', 'T', 'R', 0,
  /* 3443 */ 'g', 'B', 'C', 'C', 'T', 'R', 0,
  /* 3450 */ 'M', 'F', 'C', 'T', 'R', 0,
  /* 3456 */ 'M', 'T', 'C', 'T', 'R', 0,
  /* 3462 */ 'V', 'S', 'U', 'M', '4', 'S', 'B', 'S', 0,
  /* 3471 */ 'V', 'S', 'U', 'B', 'S', 'B', 'S', 0,
  /* 3479 */ 'V', 'A', 'D', 'D', 'S', 'B', 'S', 0,
  /* 3487 */ 'V', 'S', 'U', 'M', '4', 'U', 'B', 'S', 0,
  /* 3496 */ 'V', 'S', 'U', 'B', 'U', 'B', 'S', 0,
  /* 3504 */ 'V', 'A', 'D', 'D', 'U', 'B', 'S', 0,
  /* 3512 */ 'F', 'S', 'U', 'B', 'S', 0,
  /* 3518 */ 'F', 'M', 'S', 'U', 'B', 'S', 0,
  /* 3525 */ 'F', 'N', 'M', 'S', 'U', 'B', 'S', 0,
  /* 3533 */ 'F', 'A', 'D', 'D', 'S', 0,
  /* 3539 */ 'F', 'M', 'A', 'D', 'D', 'S', 0,
  /* 3546 */ 'F', 'N', 'M', 'A', 'D', 'D', 'S', 0,
  /* 3554 */ 'F', 'C', 'F', 'I', 'D', 'S', 0,
  /* 3561 */ 'V', '_', 'S', 'E', 'T', 'A', 'L', 'L', 'O', 'N', 'E', 'S', 0,
  /* 3574 */ 'F', 'R', 'E', 'S', 0,
  /* 3579 */ 'F', 'R', 'S', 'Q', 'R', 'T', 'E', 'S', 0,
  /* 3588 */ 'M', 'F', 'F', 'S', 0,
  /* 3593 */ 'L', 'F', 'S', 0,
  /* 3597 */ 'S', 'T', 'F', 'S', 0,
  /* 3602 */ 'F', 'N', 'E', 'G', 'S', 0,
  /* 3608 */ 'V', 'S', 'U', 'M', '4', 'S', 'H', 'S', 0,
  /* 3617 */ 'V', 'S', 'U', 'B', 'S', 'H', 'S', 0,
  /* 3625 */ 'V', 'M', 'H', 'A', 'D', 'D', 'S', 'H', 'S', 0,
  /* 3635 */ 'V', 'M', 'H', 'R', 'A', 'D', 'D', 'S', 'H', 'S', 0,
  /* 3646 */ 'V', 'A', 'D', 'D', 'S', 'H', 'S', 0,
  /* 3654 */ 'V', 'M', 'S', 'U', 'M', 'S', 'H', 'S', 0,
  /* 3663 */ 'V', 'S', 'U', 'B', 'U', 'H', 'S', 0,
  /* 3671 */ 'V', 'A', 'D', 'D', 'U', 'H', 'S', 0,
  /* 3679 */ 'V', 'M', 'S', 'U', 'M', 'U', 'H', 'S', 0,
  /* 3688 */ 'S', 'U', 'B', 'I', 'S', 0,
  /* 3694 */ 'A', 'D', 'D', 'I', 'S', 0,
  /* 3700 */ 'L', 'I', 'S', 0,
  /* 3704 */ 'X', 'O', 'R', 'I', 'S', 0,
  /* 3710 */ 'F', 'S', 'E', 'L', 'S', 0,
  /* 3716 */ 'A', 'D', 'D', '8', 'T', 'L', 'S', 0,
  /* 3724 */ 'B', 'L', '8', '_', 'T', 'L', 'S', 0,
  /* 3732 */ 'B', 'L', '8', '_', 'N', 'O', 'P', '_', 'T', 'L', 'S', 0,
  /* 3744 */ 'F', 'M', 'U', 'L', 'S', 0,
  /* 3750 */ 'F', 'R', 'I', 'M', 'S', 0,
  /* 3756 */ 'F', 'R', 'I', 'N', 'S', 0,
  /* 3762 */ 'F', 'R', 'I', 'P', 'S', 0,
  /* 3768 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 3785 */ 'F', 'A', 'B', 'S', 'S', 0,
  /* 3791 */ 'F', 'N', 'A', 'B', 'S', 'S', 0,
  /* 3798 */ 'D', 'S', 'S', 0,
  /* 3802 */ 'V', 'P', 'K', 'S', 'H', 'S', 'S', 0,
  /* 3810 */ 'V', 'P', 'K', 'S', 'W', 'S', 'S', 0,
  /* 3818 */ 'F', 'S', 'Q', 'R', 'T', 'S', 0,
  /* 3825 */ 'F', 'C', 'F', 'I', 'D', 'U', 'S', 0,
  /* 3833 */ 'V', 'P', 'K', 'S', 'H', 'U', 'S', 0,
  /* 3841 */ 'V', 'P', 'K', 'U', 'H', 'U', 'S', 0,
  /* 3849 */ 'F', 'C', 'M', 'P', 'U', 'S', 0,
  /* 3856 */ 'V', 'P', 'K', 'S', 'W', 'U', 'S', 0,
  /* 3864 */ 'V', 'P', 'K', 'U', 'W', 'U', 'S', 0,
  /* 3872 */ 'F', 'D', 'I', 'V', 'S', 0,
  /* 3878 */ 'V', 'S', 'U', 'M', '2', 'S', 'W', 'S', 0,
  /* 3887 */ 'V', 'S', 'U', 'B', 'S', 'W', 'S', 0,
  /* 3895 */ 'V', 'A', 'D', 'D', 'S', 'W', 'S', 0,
  /* 3903 */ 'V', 'S', 'U', 'M', 'S', 'W', 'S', 0,
  /* 3911 */ 'V', 'S', 'U', 'B', 'U', 'W', 'S', 0,
  /* 3919 */ 'V', 'A', 'D', 'D', 'U', 'W', 'S', 0,
  /* 3927 */ 'V', 'C', 'T', 'S', 'X', 'S', 0,
  /* 3934 */ 'V', 'C', 'T', 'U', 'X', 'S', 0,
  /* 3941 */ 'F', 'R', 'I', 'Z', 'S', 0,
  /* 3947 */ 'D', 'C', 'B', 'T', 0,
  /* 3952 */ 'C', 'R', '6', 'S', 'E', 'T', 0,
  /* 3959 */ 'C', 'R', '6', 'U', 'N', 'S', 'E', 'T', 0,
  /* 3968 */ 'C', 'R', 'U', 'N', 'S', 'E', 'T', 0,
  /* 3976 */ 'C', 'R', 'S', 'E', 'T', 0,
  /* 3982 */ 'W', 'A', 'I', 'T', 0,
  /* 3987 */ 'L', 'D', 't', 'o', 'c', 'C', 'P', 'T', 0,
  /* 3996 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 4011 */ 'F', 'S', 'Q', 'R', 'T', 0,
  /* 4017 */ 'D', 'C', 'B', 'S', 'T', 0,
  /* 4023 */ 'D', 'S', 'T', 0,
  /* 4027 */ 'D', 'C', 'B', 'T', 'S', 'T', 0,
  /* 4034 */ 'D', 'S', 'T', 'S', 'T', 0,
  /* 4040 */ 'D', 'S', 'T', 'T', 0,
  /* 4045 */ 'D', 'S', 'T', 'S', 'T', 'T', 0,
  /* 4052 */ 'L', 'H', 'A', 'U', 0,
  /* 4057 */ 'S', 'T', 'B', 'U', 0,
  /* 4062 */ 'L', 'F', 'D', 'U', 0,
  /* 4067 */ 'S', 'T', 'F', 'D', 'U', 0,
  /* 4073 */ 'M', 'U', 'L', 'H', 'D', 'U', 0,
  /* 4080 */ 'F', 'C', 'F', 'I', 'D', 'U', 0,
  /* 4087 */ 'L', 'D', 'U', 0,
  /* 4091 */ 'S', 'T', 'D', 'U', 0,
  /* 4096 */ 'D', 'I', 'V', 'D', 'U', 0,
  /* 4102 */ 'S', 'T', 'H', 'U', 0,
  /* 4107 */ 'L', 'F', 'S', 'U', 0,
  /* 4112 */ 'S', 'T', 'F', 'S', 'U', 0,
  /* 4118 */ 'M', 'U', 'L', 'H', 'W', 'U', 0,
  /* 4125 */ 'S', 'T', 'W', 'U', 0,
  /* 4130 */ 'D', 'I', 'V', 'W', 'U', 0,
  /* 4136 */ 'L', 'B', 'Z', 'U', 0,
  /* 4141 */ 'L', 'H', 'Z', 'U', 0,
  /* 4146 */ 'L', 'W', 'Z', 'U', 0,
  /* 4151 */ 'F', 'D', 'I', 'V', 0,
  /* 4156 */ 'C', 'R', 'E', 'Q', 'V', 0,
  /* 4162 */ 'V', 'S', 'R', 'A', 'W', 0,
  /* 4168 */ 'V', 'M', 'R', 'G', 'H', 'W', 0,
  /* 4175 */ 'M', 'U', 'L', 'H', 'W', 0,
  /* 4181 */ 'V', 'M', 'R', 'G', 'L', 'W', 0,
  /* 4188 */ 'M', 'U', 'L', 'L', 'W', 0,
  /* 4194 */ 'C', 'M', 'P', 'L', 'W', 0,
  /* 4200 */ 'V', 'R', 'L', 'W', 0,
  /* 4205 */ 'V', 'S', 'L', 'W', 0,
  /* 4210 */ 'L', 'M', 'W', 0,
  /* 4214 */ 'S', 'T', 'M', 'W', 0,
  /* 4219 */ 'C', 'M', 'P', 'W', 0,
  /* 4224 */ 'V', 'S', 'R', 'W', 0,
  /* 4229 */ 'V', 'A', 'V', 'G', 'S', 'W', 0,
  /* 4236 */ 'V', 'S', 'P', 'L', 'T', 'I', 'S', 'W', 0,
  /* 4245 */ 'V', 'M', 'I', 'N', 'S', 'W', 0,
  /* 4252 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'W', 0,
  /* 4261 */ 'E', 'X', 'T', 'S', 'W', 0,
  /* 4267 */ 'V', 'M', 'A', 'X', 'S', 'W', 0,
  /* 4274 */ 'V', 'S', 'P', 'L', 'T', 'W', 0,
  /* 4281 */ 'P', 'O', 'P', 'C', 'N', 'T', 'W', 0,
  /* 4289 */ 'S', 'T', 'W', 0,
  /* 4293 */ 'V', 'S', 'U', 'B', 'C', 'U', 'W', 0,
  /* 4301 */ 'V', 'A', 'D', 'D', 'C', 'U', 'W', 0,
  /* 4309 */ 'V', 'A', 'V', 'G', 'U', 'W', 0,
  /* 4316 */ 'V', 'M', 'I', 'N', 'U', 'W', 0,
  /* 4323 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'W', 0,
  /* 4332 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'W', 0,
  /* 4341 */ 'V', 'M', 'A', 'X', 'U', 'W', 0,
  /* 4348 */ 'D', 'I', 'V', 'W', 0,
  /* 4353 */ 'C', 'N', 'T', 'L', 'Z', 'W', 0,
  /* 4360 */ 'L', 'H', 'A', 'X', 0,
  /* 4365 */ 'L', 'F', 'I', 'W', 'A', 'X', 0,
  /* 4372 */ 'L', 'W', 'A', 'X', 0,
  /* 4377 */ 'L', 'V', 'E', 'B', 'X', 0,
  /* 4383 */ 'S', 'T', 'V', 'E', 'B', 'X', 0,
  /* 4390 */ 'S', 'T', 'B', 'X', 0,
  /* 4395 */ 'S', 'T', 'D', 'C', 'X', 0,
  /* 4401 */ 'S', 'T', 'W', 'C', 'X', 0,
  /* 4407 */ 'L', 'F', 'D', 'X', 0,
  /* 4412 */ 'S', 'T', 'F', 'D', 'X', 0,
  /* 4418 */ 'L', 'D', 'X', 0,
  /* 4422 */ 'S', 'T', 'D', 'X', 0,
  /* 4427 */ 'L', 'V', 'E', 'H', 'X', 0,
  /* 4433 */ 'S', 'T', 'V', 'E', 'H', 'X', 0,
  /* 4440 */ 'S', 'T', 'H', 'X', 0,
  /* 4445 */ 'V', 'U', 'P', 'K', 'H', 'P', 'X', 0,
  /* 4453 */ 'V', 'P', 'K', 'P', 'X', 0,
  /* 4459 */ 'V', 'U', 'P', 'K', 'L', 'P', 'X', 0,
  /* 4467 */ 'L', 'D', 'A', 'R', 'X', 0,
  /* 4473 */ 'L', 'W', 'A', 'R', 'X', 0,
  /* 4479 */ 'L', 'D', 'B', 'R', 'X', 0,
  /* 4485 */ 'S', 'T', 'D', 'B', 'R', 'X', 0,
  /* 4492 */ 'L', 'H', 'B', 'R', 'X', 0,
  /* 4498 */ 'S', 'T', 'H', 'B', 'R', 'X', 0,
  /* 4505 */ 'L', 'W', 'B', 'R', 'X', 0,
  /* 4511 */ 'S', 'T', 'W', 'B', 'R', 'X', 0,
  /* 4518 */ 'V', 'C', 'F', 'S', 'X', 0,
  /* 4524 */ 'L', 'F', 'S', 'X', 0,
  /* 4529 */ 'S', 'T', 'F', 'S', 'X', 0,
  /* 4535 */ 'L', 'H', 'A', 'U', 'X', 0,
  /* 4541 */ 'L', 'W', 'A', 'U', 'X', 0,
  /* 4547 */ 'S', 'T', 'B', 'U', 'X', 0,
  /* 4553 */ 'L', 'F', 'D', 'U', 'X', 0,
  /* 4559 */ 'S', 'T', 'F', 'D', 'U', 'X', 0,
  /* 4566 */ 'L', 'D', 'U', 'X', 0,
  /* 4571 */ 'S', 'T', 'D', 'U', 'X', 0,
  /* 4577 */ 'V', 'C', 'F', 'U', 'X', 0,
  /* 4583 */ 'S', 'T', 'H', 'U', 'X', 0,
  /* 4589 */ 'L', 'F', 'S', 'U', 'X', 0,
  /* 4595 */ 'S', 'T', 'F', 'S', 'U', 'X', 0,
  /* 4602 */ 'S', 'T', 'W', 'U', 'X', 0,
  /* 4608 */ 'L', 'B', 'Z', 'U', 'X', 0,
  /* 4614 */ 'L', 'H', 'Z', 'U', 'X', 0,
  /* 4620 */ 'L', 'W', 'Z', 'U', 'X', 0,
  /* 4626 */ 'L', 'V', 'X', 0,
  /* 4630 */ 'S', 'T', 'V', 'X', 0,
  /* 4635 */ 'L', 'V', 'E', 'W', 'X', 0,
  /* 4641 */ 'S', 'T', 'V', 'E', 'W', 'X', 0,
  /* 4648 */ 'S', 'T', 'F', 'I', 'W', 'X', 0,
  /* 4655 */ 'S', 'T', 'W', 'X', 0,
  /* 4660 */ 'L', 'B', 'Z', 'X', 0,
  /* 4665 */ 'L', 'H', 'Z', 'X', 0,
  /* 4670 */ 'L', 'F', 'I', 'W', 'Z', 'X', 0,
  /* 4677 */ 'L', 'W', 'Z', 'X', 0,
  /* 4682 */ 'C', 'O', 'P', 'Y', 0,
  /* 4687 */ 'D', 'C', 'B', 'Z', 0,
  /* 4692 */ 'L', 'B', 'Z', 0,
  /* 4696 */ 'B', 'D', 'Z', 0,
  /* 4700 */ 'F', 'C', 'T', 'I', 'D', 'Z', 0,
  /* 4707 */ 'L', 'H', 'Z', 0,
  /* 4711 */ 'V', 'R', 'F', 'I', 'Z', 0,
  /* 4717 */ 'B', 'D', 'N', 'Z', 0,
  /* 4722 */ 'F', 'C', 'T', 'I', 'D', 'U', 'Z', 0,
  /* 4730 */ 'F', 'C', 'T', 'I', 'W', 'U', 'Z', 0,
  /* 4738 */ 'F', 'C', 'T', 'I', 'W', 'Z', 0,
  /* 4745 */ 'L', 'W', 'Z', 0,
  /* 4749 */ 'L', 'D', 't', 'o', 'c', 0,
  /* 4755 */ 'L', 'D', 'i', 'n', 't', 'o', '_', 't', 'o', 'c', 0,
  /* 4766 */ 'L', 'D', 't', 'o', 'c', '_', 'r', 'e', 's', 't', 'o', 'r', 'e', 0,
  /* 4780 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'a', 'i', 0,
  /* 4791 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'd', 'i', 0,
  /* 4802 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'r', 'i', 0,
  /* 4813 */ 'B', 'D', 'Z', 'L', 'A', 'm', 0,
  /* 4820 */ 'B', 'D', 'N', 'Z', 'L', 'A', 'm', 0,
  /* 4828 */ 'B', 'D', 'Z', 'A', 'm', 0,
  /* 4834 */ 'B', 'D', 'N', 'Z', 'A', 'm', 0,
  /* 4841 */ 'B', 'D', 'Z', 'L', 'R', 'L', 'm', 0,
  /* 4849 */ 'B', 'D', 'N', 'Z', 'L', 'R', 'L', 'm', 0,
  /* 4858 */ 'B', 'D', 'Z', 'L', 'm', 0,
  /* 4864 */ 'B', 'D', 'N', 'Z', 'L', 'm', 0,
  /* 4871 */ 'B', 'D', 'Z', 'L', 'R', 'm', 0,
  /* 4878 */ 'B', 'D', 'N', 'Z', 'L', 'R', 'm', 0,
  /* 4886 */ 'B', 'D', 'Z', 'm', 0,
  /* 4891 */ 'B', 'D', 'N', 'Z', 'm', 0,
  /* 4897 */ 'E', 'X', 'T', 'S', 'W', '_', '3', '2', '_', '6', '4', 'o', 0,
  /* 4910 */ 'A', 'D', 'D', '4', 'o', 0,
  /* 4916 */ 'E', 'X', 'T', 'S', 'B', '8', 'o', 0,
  /* 4924 */ 'A', 'D', 'D', 'C', '8', 'o', 0,
  /* 4931 */ 'A', 'N', 'D', 'C', '8', 'o', 0,
  /* 4938 */ 'S', 'U', 'B', 'F', 'C', '8', 'o', 0,
  /* 4946 */ 'O', 'R', 'C', '8', 'o', 0,
  /* 4952 */ 'A', 'D', 'D', '8', 'o', 0,
  /* 4958 */ 'N', 'A', 'N', 'D', '8', 'o', 0,
  /* 4965 */ 'A', 'D', 'D', 'E', '8', 'o', 0,
  /* 4972 */ 'S', 'U', 'B', 'F', 'E', '8', 'o', 0,
  /* 4980 */ 'A', 'D', 'D', 'M', 'E', '8', 'o', 0,
  /* 4988 */ 'S', 'U', 'B', 'F', 'M', 'E', '8', 'o', 0,
  /* 4997 */ 'A', 'D', 'D', 'Z', 'E', '8', 'o', 0,
  /* 5005 */ 'S', 'U', 'B', 'F', 'Z', 'E', '8', 'o', 0,
  /* 5014 */ 'S', 'U', 'B', 'F', '8', 'o', 0,
  /* 5021 */ 'N', 'E', 'G', '8', 'o', 0,
  /* 5027 */ 'E', 'X', 'T', 'S', 'H', '8', 'o', 0,
  /* 5035 */ 'R', 'L', 'W', 'I', 'N', 'M', '8', 'o', 0,
  /* 5044 */ 'N', 'O', 'R', '8', 'o', 0,
  /* 5050 */ 'X', 'O', 'R', '8', 'o', 0,
  /* 5056 */ 'E', 'Q', 'V', '8', 'o', 0,
  /* 5062 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'B', 'o', 0,
  /* 5072 */ 'E', 'X', 'T', 'S', 'B', 'o', 0,
  /* 5079 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'B', 'o', 0,
  /* 5089 */ 'F', 'S', 'U', 'B', 'o', 0,
  /* 5095 */ 'F', 'M', 'S', 'U', 'B', 'o', 0,
  /* 5102 */ 'F', 'N', 'M', 'S', 'U', 'B', 'o', 0,
  /* 5110 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'B', 'o', 0,
  /* 5120 */ 'A', 'D', 'D', 'C', 'o', 0,
  /* 5126 */ 'A', 'N', 'D', 'C', 'o', 0,
  /* 5132 */ 'S', 'U', 'B', 'F', 'C', 'o', 0,
  /* 5139 */ 'S', 'U', 'B', 'I', 'C', 'o', 0,
  /* 5146 */ 'A', 'D', 'D', 'I', 'C', 'o', 0,
  /* 5153 */ 'R', 'L', 'D', 'I', 'C', 'o', 0,
  /* 5160 */ 'O', 'R', 'C', 'o', 0,
  /* 5165 */ 'S', 'R', 'A', 'D', 'o', 0,
  /* 5171 */ 'F', 'A', 'D', 'D', 'o', 0,
  /* 5177 */ 'F', 'M', 'A', 'D', 'D', 'o', 0,
  /* 5184 */ 'F', 'N', 'M', 'A', 'D', 'D', 'o', 0,
  /* 5192 */ 'F', 'N', 'E', 'G', 'D', 'o', 0,
  /* 5199 */ 'M', 'U', 'L', 'H', 'D', 'o', 0,
  /* 5206 */ 'F', 'C', 'F', 'I', 'D', 'o', 0,
  /* 5213 */ 'F', 'S', 'E', 'L', 'D', 'o', 0,
  /* 5220 */ 'M', 'U', 'L', 'L', 'D', 'o', 0,
  /* 5227 */ 'S', 'L', 'D', 'o', 0,
  /* 5232 */ 'F', 'R', 'I', 'M', 'D', 'o', 0,
  /* 5239 */ 'N', 'A', 'N', 'D', 'o', 0,
  /* 5245 */ 'F', 'R', 'I', 'N', 'D', 'o', 0,
  /* 5252 */ 'F', 'R', 'I', 'P', 'D', 'o', 0,
  /* 5259 */ 'S', 'R', 'D', 'o', 0,
  /* 5264 */ 'F', 'A', 'B', 'S', 'D', 'o', 0,
  /* 5271 */ 'F', 'N', 'A', 'B', 'S', 'D', 'o', 0,
  /* 5279 */ 'P', 'O', 'P', 'C', 'N', 'T', 'D', 'o', 0,
  /* 5288 */ 'D', 'I', 'V', 'D', 'o', 0,
  /* 5294 */ 'F', 'R', 'I', 'Z', 'D', 'o', 0,
  /* 5301 */ 'C', 'N', 'T', 'L', 'Z', 'D', 'o', 0,
  /* 5309 */ 'A', 'D', 'D', 'E', 'o', 0,
  /* 5315 */ 'S', 'U', 'B', 'F', 'E', 'o', 0,
  /* 5322 */ 'A', 'D', 'D', 'M', 'E', 'o', 0,
  /* 5329 */ 'S', 'U', 'B', 'F', 'M', 'E', 'o', 0,
  /* 5337 */ 'F', 'R', 'E', 'o', 0,
  /* 5342 */ 'F', 'R', 'S', 'Q', 'R', 'T', 'E', 'o', 0,
  /* 5351 */ 'A', 'D', 'D', 'Z', 'E', 'o', 0,
  /* 5358 */ 'S', 'U', 'B', 'F', 'Z', 'E', 'o', 0,
  /* 5366 */ 'S', 'U', 'B', 'F', 'o', 0,
  /* 5372 */ 'N', 'E', 'G', 'o', 0,
  /* 5377 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'H', 'o', 0,
  /* 5387 */ 'E', 'X', 'T', 'S', 'H', 'o', 0,
  /* 5394 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'H', 'o', 0,
  /* 5404 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'H', 'o', 0,
  /* 5414 */ 'S', 'R', 'A', 'D', 'I', 'o', 0,
  /* 5421 */ 'C', 'L', 'R', 'L', 'S', 'L', 'D', 'I', 'o', 0,
  /* 5431 */ 'E', 'X', 'T', 'L', 'D', 'I', 'o', 0,
  /* 5439 */ 'A', 'N', 'D', 'I', 'o', 0,
  /* 5445 */ 'C', 'L', 'R', 'R', 'D', 'I', 'o', 0,
  /* 5453 */ 'I', 'N', 'S', 'R', 'D', 'I', 'o', 0,
  /* 5461 */ 'R', 'O', 'T', 'R', 'D', 'I', 'o', 0,
  /* 5469 */ 'E', 'X', 'T', 'R', 'D', 'I', 'o', 0,
  /* 5477 */ 'R', 'L', 'D', 'I', 'M', 'I', 'o', 0,
  /* 5485 */ 'R', 'L', 'W', 'I', 'M', 'I', 'o', 0,
  /* 5493 */ 'S', 'R', 'A', 'W', 'I', 'o', 0,
  /* 5500 */ 'C', 'L', 'R', 'L', 'S', 'L', 'W', 'I', 'o', 0,
  /* 5510 */ 'I', 'N', 'S', 'L', 'W', 'I', 'o', 0,
  /* 5518 */ 'E', 'X', 'T', 'L', 'W', 'I', 'o', 0,
  /* 5526 */ 'C', 'L', 'R', 'R', 'W', 'I', 'o', 0,
  /* 5534 */ 'I', 'N', 'S', 'R', 'W', 'I', 'o', 0,
  /* 5542 */ 'R', 'O', 'T', 'R', 'W', 'I', 'o', 0,
  /* 5550 */ 'E', 'X', 'T', 'R', 'W', 'I', 'o', 0,
  /* 5558 */ 'R', 'L', 'D', 'C', 'L', 'o', 0,
  /* 5565 */ 'R', 'L', 'D', 'I', 'C', 'L', 'o', 0,
  /* 5573 */ 'F', 'M', 'U', 'L', 'o', 0,
  /* 5579 */ 'R', 'L', 'W', 'I', 'N', 'M', 'o', 0,
  /* 5587 */ 'R', 'L', 'W', 'N', 'M', 'o', 0,
  /* 5594 */ 'V', 'C', 'M', 'P', 'B', 'F', 'P', 'o', 0,
  /* 5603 */ 'V', 'C', 'M', 'P', 'G', 'E', 'F', 'P', 'o', 0,
  /* 5613 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'F', 'P', 'o', 0,
  /* 5623 */ 'V', 'C', 'M', 'P', 'G', 'T', 'F', 'P', 'o', 0,
  /* 5633 */ 'F', 'R', 'S', 'P', 'o', 0,
  /* 5639 */ 'R', 'L', 'D', 'C', 'R', 'o', 0,
  /* 5646 */ 'R', 'L', 'D', 'I', 'C', 'R', 'o', 0,
  /* 5654 */ 'F', 'M', 'R', 'o', 0,
  /* 5659 */ 'N', 'O', 'R', 'o', 0,
  /* 5664 */ 'X', 'O', 'R', 'o', 0,
  /* 5669 */ 'F', 'S', 'U', 'B', 'S', 'o', 0,
  /* 5676 */ 'F', 'M', 'S', 'U', 'B', 'S', 'o', 0,
  /* 5684 */ 'F', 'N', 'M', 'S', 'U', 'B', 'S', 'o', 0,
  /* 5693 */ 'F', 'A', 'D', 'D', 'S', 'o', 0,
  /* 5700 */ 'F', 'M', 'A', 'D', 'D', 'S', 'o', 0,
  /* 5708 */ 'F', 'N', 'M', 'A', 'D', 'D', 'S', 'o', 0,
  /* 5717 */ 'F', 'C', 'F', 'I', 'D', 'S', 'o', 0,
  /* 5725 */ 'F', 'R', 'E', 'S', 'o', 0,
  /* 5731 */ 'F', 'R', 'S', 'Q', 'R', 'T', 'E', 'S', 'o', 0,
  /* 5741 */ 'F', 'N', 'E', 'G', 'S', 'o', 0,
  /* 5748 */ 'A', 'N', 'D', 'I', 'S', 'o', 0,
  /* 5755 */ 'F', 'S', 'E', 'L', 'S', 'o', 0,
  /* 5762 */ 'F', 'M', 'U', 'L', 'S', 'o', 0,
  /* 5769 */ 'F', 'R', 'I', 'M', 'S', 'o', 0,
  /* 5776 */ 'F', 'R', 'I', 'N', 'S', 'o', 0,
  /* 5783 */ 'F', 'R', 'I', 'P', 'S', 'o', 0,
  /* 5790 */ 'F', 'A', 'B', 'S', 'S', 'o', 0,
  /* 5797 */ 'F', 'N', 'A', 'B', 'S', 'S', 'o', 0,
  /* 5805 */ 'F', 'S', 'Q', 'R', 'T', 'S', 'o', 0,
  /* 5813 */ 'F', 'C', 'F', 'I', 'D', 'U', 'S', 'o', 0,
  /* 5822 */ 'F', 'D', 'I', 'V', 'S', 'o', 0,
  /* 5829 */ 'F', 'R', 'I', 'Z', 'S', 'o', 0,
  /* 5836 */ 'F', 'S', 'Q', 'R', 'T', 'o', 0,
  /* 5843 */ 'M', 'U', 'L', 'H', 'D', 'U', 'o', 0,
  /* 5851 */ 'F', 'C', 'F', 'I', 'D', 'U', 'o', 0,
  /* 5859 */ 'D', 'I', 'V', 'D', 'U', 'o', 0,
  /* 5866 */ 'M', 'U', 'L', 'H', 'W', 'U', 'o', 0,
  /* 5874 */ 'D', 'I', 'V', 'W', 'U', 'o', 0,
  /* 5881 */ 'F', 'D', 'I', 'V', 'o', 0,
  /* 5887 */ 'E', 'Q', 'V', 'o', 0,
  /* 5892 */ 'S', 'R', 'A', 'W', 'o', 0,
  /* 5898 */ 'M', 'U', 'L', 'H', 'W', 'o', 0,
  /* 5905 */ 'M', 'U', 'L', 'L', 'W', 'o', 0,
  /* 5912 */ 'S', 'L', 'W', 'o', 0,
  /* 5917 */ 'S', 'R', 'W', 'o', 0,
  /* 5922 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'W', 'o', 0,
  /* 5932 */ 'E', 'X', 'T', 'S', 'W', 'o', 0,
  /* 5939 */ 'P', 'O', 'P', 'C', 'N', 'T', 'W', 'o', 0,
  /* 5948 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'W', 'o', 0,
  /* 5958 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'W', 'o', 0,
  /* 5968 */ 'D', 'I', 'V', 'W', 'o', 0,
  /* 5974 */ 'C', 'N', 'T', 'L', 'Z', 'W', 'o', 0,
  /* 5982 */ 'F', 'C', 'T', 'I', 'D', 'Z', 'o', 0,
  /* 5990 */ 'F', 'C', 'T', 'I', 'D', 'U', 'Z', 'o', 0,
  /* 5999 */ 'F', 'C', 'T', 'I', 'W', 'U', 'Z', 'o', 0,
  /* 6008 */ 'F', 'C', 'T', 'I', 'W', 'Z', 'o', 0,
  /* 6016 */ 'B', 'D', 'Z', 'L', 'A', 'p', 0,
  /* 6023 */ 'B', 'D', 'N', 'Z', 'L', 'A', 'p', 0,
  /* 6031 */ 'B', 'D', 'Z', 'A', 'p', 0,
  /* 6037 */ 'B', 'D', 'N', 'Z', 'A', 'p', 0,
  /* 6044 */ 'B', 'D', 'Z', 'L', 'R', 'L', 'p', 0,
  /* 6052 */ 'B', 'D', 'N', 'Z', 'L', 'R', 'L', 'p', 0,
  /* 6061 */ 'B', 'D', 'Z', 'L', 'p', 0,
  /* 6067 */ 'B', 'D', 'N', 'Z', 'L', 'p', 0,
  /* 6074 */ 'B', 'D', 'Z', 'L', 'R', 'p', 0,
  /* 6081 */ 'B', 'D', 'N', 'Z', 'L', 'R', 'p', 0,
  /* 6089 */ 'B', 'D', 'Z', 'p', 0,
  /* 6094 */ 'B', 'D', 'N', 'Z', 'p', 0,
  /* 6100 */ 'M', 'T', 'C', 'T', 'R', '8', 'l', 'o', 'o', 'p', 0,
  /* 6111 */ 'M', 'T', 'C', 'T', 'R', 'l', 'o', 'o', 'p', 0,
  /* 6121 */ 'E', 'H', '_', 'S', 'j', 'L', 'j', '_', 'S', 'e', 't', 'u', 'p', 0,
  /* 6135 */ 'B', 'C', 'L', 'a', 'l', 'w', 'a', 'y', 's', 0,
  /* 6145 */ 'F', 'R', 'I', 'N', 'D', 'r', 'i', 'n', 't', 0,
  /* 6155 */ 'F', 'R', 'I', 'N', 'S', 'r', 'i', 'n', 't', 0,
  /* 6165 */ 'M', 'F', 'V', 'R', 'S', 'A', 'V', 'E', 'v', 0,
  /* 6175 */ 'M', 'T', 'V', 'R', 'S', 'A', 'V', 'E', 'v', 0,
  /* 6185 */ 'L', 'A', 'x', 0,
  /* 6189 */ 'F', 'A', 'D', 'D', 'r', 't', 'z', 0,
};

extern const unsigned PPCInstrNameIndices[] = {
    2578U, 3020U, 2732U, 2745U, 2723U, 2771U, 2248U, 2263U, 
    2200U, 2277U, 3768U, 2107U, 2051U, 4682U, 2075U, 3996U, 
    1967U, 479U, 4910U, 758U, 3716U, 4952U, 1783U, 709U, 
    4924U, 5120U, 2064U, 769U, 4965U, 5309U, 2512U, 871U, 
    1813U, 728U, 5146U, 3694U, 1170U, 1488U, 1472U, 1446U, 
    1459U, 1435U, 2905U, 2871U, 2882U, 2862U, 2082U, 782U, 
    4980U, 5322U, 2177U, 797U, 4997U, 5351U, 3068U, 3247U, 
    1952U, 764U, 4959U, 1790U, 715U, 4931U, 5126U, 5748U, 
    1401U, 5439U, 1394U, 5240U, 607U, 152U, 343U, 995U, 
    530U, 75U, 266U, 922U, 571U, 116U, 307U, 961U, 
    550U, 95U, 286U, 941U, 647U, 192U, 383U, 1033U, 
    510U, 55U, 246U, 890U, 627U, 172U, 363U, 1014U, 
    591U, 136U, 327U, 980U, 1552U, 1411U, 1779U, 1426U, 
    2705U, 1512U, 3444U, 1149U, 2810U, 1068U, 3343U, 2782U, 
    6135U, 3438U, 1143U, 2803U, 1061U, 4717U, 1347U, 1540U, 
    4834U, 6037U, 2849U, 1524U, 4820U, 6023U, 3364U, 1109U, 
    2795U, 4849U, 6052U, 4878U, 6081U, 4864U, 6067U, 4891U, 
    6094U, 4696U, 1337U, 1535U, 4828U, 6031U, 2844U, 1518U, 
    4813U, 6016U, 3358U, 1102U, 2788U, 4841U, 6044U, 4871U, 
    6074U, 4858U, 6061U, 4886U, 6089U, 2697U, 1051U, 3234U, 
    3732U, 3724U, 1502U, 679U, 3225U, 3338U, 2776U, 2524U, 
    5421U, 2636U, 5500U, 2546U, 5445U, 2665U, 5526U, 1992U, 
    2540U, 1933U, 2517U, 4194U, 2629U, 4219U, 2659U, 2044U, 
    5301U, 4353U, 5974U, 3952U, 3959U, 1956U, 1788U, 4156U, 
    1949U, 3386U, 3397U, 1847U, 3976U, 3968U, 3406U, 1409U, 
    2190U, 2491U, 4017U, 3947U, 4027U, 4687U, 2838U, 2033U, 
    4096U, 5859U, 5288U, 4348U, 4130U, 5874U, 5968U, 3798U, 
    2764U, 4023U, 402U, 4034U, 408U, 4045U, 423U, 4040U, 
    416U, 1838U, 743U, 211U, 444U, 229U, 462U, 6121U, 
    3085U, 4158U, 1231U, 5056U, 5887U, 2533U, 5431U, 2652U, 
    5518U, 2567U, 5469U, 2686U, 5550U, 1673U, 691U, 4916U, 
    5072U, 2412U, 859U, 5027U, 5387U, 4261U, 432U, 4897U, 
    5932U, 2001U, 5264U, 3785U, 5790U, 1876U, 3533U, 5693U, 
    5171U, 6189U, 1915U, 3554U, 5717U, 4080U, 3825U, 5813U, 
    5851U, 5206U, 2026U, 3849U, 4722U, 5990U, 4700U, 5982U, 
    4730U, 5999U, 4738U, 6008U, 4151U, 3872U, 5822U, 5881U, 
    1881U, 3539U, 5700U, 5177U, 3382U, 5654U, 1746U, 3518U, 
    5676U, 5095U, 2822U, 3744U, 5762U, 5573U, 2007U, 5271U, 
    3791U, 5797U, 1903U, 5192U, 3602U, 5741U, 1887U, 3546U, 
    5708U, 5184U, 1752U, 3525U, 5684U, 5102U, 2095U, 3574U, 
    5725U, 5337U, 1943U, 5232U, 3750U, 5769U, 1980U, 5245U, 
    6145U, 3756U, 5776U, 6155U, 1986U, 5252U, 3762U, 5783U, 
    2038U, 5294U, 3941U, 5829U, 3242U, 5633U, 2099U, 3579U, 
    5731U, 5342U, 1921U, 5213U, 3710U, 5755U, 4011U, 3818U, 
    5805U, 5836U, 1741U, 3512U, 5669U, 5089U, 3327U, 3314U, 
    2496U, 2645U, 5510U, 2553U, 5453U, 2672U, 5534U, 2754U, 
    1055U, 1832U, 1503U, 6185U, 4692U, 1332U, 4136U, 1213U, 
    4608U, 1287U, 4660U, 1314U, 1924U, 4467U, 4479U, 4087U, 
    4566U, 4418U, 2893U, 4755U, 4749U, 3987U, 2614U, 2855U, 
    4766U, 1894U, 4062U, 4553U, 4407U, 4365U, 4670U, 3593U, 
    4107U, 4589U, 4524U, 1431U, 674U, 4052U, 1189U, 4535U, 
    1259U, 4360U, 1241U, 4492U, 4707U, 1342U, 4141U, 1219U, 
    4614U, 1294U, 4665U, 1320U, 2585U, 880U, 3700U, 1177U, 
    4210U, 4377U, 4427U, 4635U, 2817U, 3429U, 4626U, 2827U, 
    1531U, 4473U, 4541U, 4372U, 4505U, 4745U, 1353U, 4146U, 
    1225U, 4620U, 1301U, 4677U, 1326U, 2213U, 3268U, 1084U, 
    3450U, 1156U, 3588U, 3348U, 1090U, 2218U, 818U, 3417U, 
    1686U, 698U, 2117U, 6165U, 3280U, 2232U, 834U, 3456U, 
    1163U, 6100U, 6111U, 0U, 48U, 2238U, 3353U, 1096U, 
    2225U, 826U, 3423U, 2126U, 6175U, 3287U, 1909U, 4073U, 
    5843U, 5199U, 4175U, 4118U, 5866U, 5898U, 1927U, 5220U, 
    2582U, 877U, 4188U, 5905U, 3371U, 1117U, 1951U, 763U, 
    4958U, 5239U, 2244U, 854U, 5021U, 5372U, 3230U, 3388U, 
    1129U, 5044U, 5659U, 3389U, 1130U, 5045U, 1849U, 753U, 
    4946U, 5160U, 2610U, 885U, 3705U, 1183U, 5660U, 2014U, 
    5279U, 4281U, 5939U, 3294U, 2135U, 2710U, 5558U, 3262U, 
    5639U, 1819U, 2716U, 5565U, 3273U, 5646U, 5153U, 2588U, 
    5477U, 2595U, 5485U, 3001U, 1076U, 5035U, 5579U, 3008U, 
    5587U, 2560U, 5461U, 2679U, 5542U, 1868U, 484U, 841U, 
    497U, 909U, 1853U, 1939U, 2528U, 5425U, 5227U, 4206U, 
    2640U, 5504U, 5912U, 3305U, 2164U, 1871U, 2506U, 5414U, 
    5165U, 4163U, 2623U, 5493U, 5892U, 1997U, 2555U, 5455U, 
    5259U, 4225U, 2674U, 5536U, 5917U, 1698U, 704U, 4057U, 
    1195U, 4547U, 1266U, 4390U, 1247U, 2022U, 4485U, 4395U, 
    4091U, 4571U, 4422U, 1898U, 4067U, 4559U, 4412U, 4648U, 
    3597U, 4112U, 4595U, 4529U, 2432U, 866U, 4498U, 4102U, 
    1201U, 4583U, 1273U, 4440U, 1253U, 4214U, 4383U, 4433U, 
    4641U, 4630U, 2832U, 4289U, 1236U, 4511U, 4401U, 4125U, 
    1207U, 4602U, 1280U, 4655U, 1308U, 2195U, 812U, 5014U, 
    1801U, 721U, 4938U, 5132U, 2069U, 775U, 4972U, 5315U, 
    1825U, 735U, 2088U, 789U, 4988U, 5329U, 2183U, 804U, 
    5005U, 5358U, 5366U, 2501U, 1807U, 5139U, 3688U, 1833U, 
    1574U, 684U, 1414U, 666U, 3434U, 1139U, 4780U, 1358U, 
    4791U, 1370U, 4802U, 1382U, 2019U, 2574U, 3101U, 4278U, 
    2693U, 2150U, 4301U, 3138U, 3479U, 3646U, 3895U, 2934U, 
    3504U, 2978U, 3671U, 3054U, 3919U, 1962U, 1795U, 1617U, 
    2356U, 4229U, 1710U, 2444U, 4309U, 4518U, 32U, 4577U, 
    40U, 3106U, 5594U, 3194U, 5613U, 1732U, 5079U, 2466U, 
    5394U, 4323U, 5948U, 3153U, 5603U, 3203U, 5623U, 1664U, 
    5062U, 2403U, 5377U, 4252U, 5922U, 1759U, 5110U, 2475U, 
    5404U, 4332U, 5958U, 3927U, 14U, 3934U, 23U, 3168U, 
    3145U, 3130U, 3212U, 1679U, 2418U, 4267U, 1768U, 2484U, 
    4341U, 3625U, 3635U, 3187U, 1649U, 2388U, 4245U, 1717U, 
    2451U, 4316U, 2968U, 1560U, 2305U, 4168U, 1567U, 2312U, 
    4181U, 2917U, 2951U, 3654U, 2942U, 2986U, 3679U, 1595U, 
    2334U, 1702U, 2436U, 1656U, 2395U, 1724U, 2458U, 3114U, 
    3392U, 3402U, 3014U, 4453U, 3802U, 3833U, 3810U, 3856U, 
    3030U, 3841U, 3038U, 3864U, 3162U, 2995U, 3062U, 3219U, 
    4711U, 1580U, 2319U, 4200U, 3177U, 2759U, 2818U, 1585U, 
    2602U, 2324U, 3091U, 4205U, 1691U, 2425U, 1632U, 2371U, 
    4236U, 4274U, 3430U, 1554U, 2299U, 4162U, 1590U, 2329U, 
    3096U, 4224U, 4293U, 3123U, 3471U, 3617U, 3887U, 2926U, 
    3496U, 2960U, 3663U, 3046U, 3911U, 3878U, 3462U, 3608U, 
    3487U, 3903U, 4445U, 1624U, 2363U, 4459U, 1641U, 2380U, 
    3412U, 7U, 1546U, 2291U, 3561U, 1603U, 2342U, 3982U, 
    3408U, 1134U, 5050U, 2609U, 884U, 3704U, 1182U, 5664U, 
    1775U, 1421U, 3443U, 2809U, 2700U, 1506U, 3342U, 2781U, 
};

static inline void InitPPCMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(PPCInsts, PPCInstrNameIndices, PPCInstrNameData, 856);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct PPCGenInstrInfo : public TargetInstrInfo {
  explicit PPCGenInstrInfo(int SO = -1, int DO = -1);
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR
#undef GET_INSTRINFO_CTOR
namespace llvm {
extern const MCInstrDesc PPCInsts[];
extern const unsigned PPCInstrNameIndices[];
extern const char PPCInstrNameData[];
PPCGenInstrInfo::PPCGenInstrInfo(int SO, int DO)
  : TargetInstrInfo(SO, DO) {
  InitMCInstrInfo(PPCInsts, PPCInstrNameIndices, PPCInstrNameData, 856);
}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {namespace PPC {
namespace OpName { 
enum {
OPERAND_LAST
};
} // End namespace OpName
} // End namespace PPC
} // End namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM
#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {namespace PPC {
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // End namespace PPC
} // End namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS
#ifdef GET_INSTRMAP_INFO
#undef GET_INSTRMAP_INFO
namespace llvm {

namespace PPC {

enum RC {
	RC_0,
	RC_1
};

// getNonRecordFormOpcode
int getNonRecordFormOpcode(uint16_t Opcode) {
static const uint16_t getNonRecordFormOpcodeTable[][2] = {
  { PPC::ADD4o, PPC::ADD4 },
  { PPC::ADD8o, PPC::ADD8 },
  { PPC::ADDC8o, PPC::ADDC8 },
  { PPC::ADDCo, PPC::ADDC },
  { PPC::ADDE8o, PPC::ADDE8 },
  { PPC::ADDEo, PPC::ADDE },
  { PPC::ADDICo, PPC::ADDIC },
  { PPC::ADDME8o, PPC::ADDME8 },
  { PPC::ADDMEo, PPC::ADDME },
  { PPC::ADDZE8o, PPC::ADDZE8 },
  { PPC::ADDZEo, PPC::ADDZE },
  { PPC::AND8o, PPC::AND8 },
  { PPC::ANDC8o, PPC::ANDC8 },
  { PPC::ANDCo, PPC::ANDC },
  { PPC::ANDo, PPC::AND },
  { PPC::CNTLZDo, PPC::CNTLZD },
  { PPC::CNTLZWo, PPC::CNTLZW },
  { PPC::DIVDUo, PPC::DIVDU },
  { PPC::DIVDo, PPC::DIVD },
  { PPC::DIVWUo, PPC::DIVWU },
  { PPC::DIVWo, PPC::DIVW },
  { PPC::EQV8o, PPC::EQV8 },
  { PPC::EQVo, PPC::EQV },
  { PPC::EXTSB8o, PPC::EXTSB8 },
  { PPC::EXTSBo, PPC::EXTSB },
  { PPC::EXTSH8o, PPC::EXTSH8 },
  { PPC::EXTSHo, PPC::EXTSH },
  { PPC::EXTSW_32_64o, PPC::EXTSW_32_64 },
  { PPC::EXTSWo, PPC::EXTSW },
  { PPC::FABSDo, PPC::FABSD },
  { PPC::FABSSo, PPC::FABSS },
  { PPC::FADDSo, PPC::FADDS },
  { PPC::FADDo, PPC::FADD },
  { PPC::FCFIDSo, PPC::FCFIDS },
  { PPC::FCFIDUSo, PPC::FCFIDUS },
  { PPC::FCFIDUo, PPC::FCFIDU },
  { PPC::FCFIDo, PPC::FCFID },
  { PPC::FCTIDUZo, PPC::FCTIDUZ },
  { PPC::FCTIDZo, PPC::FCTIDZ },
  { PPC::FCTIWUZo, PPC::FCTIWUZ },
  { PPC::FCTIWZo, PPC::FCTIWZ },
  { PPC::FDIVSo, PPC::FDIVS },
  { PPC::FDIVo, PPC::FDIV },
  { PPC::FMADDSo, PPC::FMADDS },
  { PPC::FMADDo, PPC::FMADD },
  { PPC::FMRo, PPC::FMR },
  { PPC::FMSUBSo, PPC::FMSUBS },
  { PPC::FMSUBo, PPC::FMSUB },
  { PPC::FMULSo, PPC::FMULS },
  { PPC::FMULo, PPC::FMUL },
  { PPC::FNABSDo, PPC::FNABSD },
  { PPC::FNABSSo, PPC::FNABSS },
  { PPC::FNEGDo, PPC::FNEGD },
  { PPC::FNEGSo, PPC::FNEGS },
  { PPC::FNMADDSo, PPC::FNMADDS },
  { PPC::FNMADDo, PPC::FNMADD },
  { PPC::FNMSUBSo, PPC::FNMSUBS },
  { PPC::FNMSUBo, PPC::FNMSUB },
  { PPC::FRESo, PPC::FRES },
  { PPC::FREo, PPC::FRE },
  { PPC::FRIMDo, PPC::FRIMD },
  { PPC::FRIMSo, PPC::FRIMS },
  { PPC::FRINDo, PPC::FRIND },
  { PPC::FRINSo, PPC::FRINS },
  { PPC::FRIPDo, PPC::FRIPD },
  { PPC::FRIPSo, PPC::FRIPS },
  { PPC::FRIZDo, PPC::FRIZD },
  { PPC::FRIZSo, PPC::FRIZS },
  { PPC::FRSPo, PPC::FRSP },
  { PPC::FRSQRTESo, PPC::FRSQRTES },
  { PPC::FRSQRTEo, PPC::FRSQRTE },
  { PPC::FSELDo, PPC::FSELD },
  { PPC::FSELSo, PPC::FSELS },
  { PPC::FSQRTSo, PPC::FSQRTS },
  { PPC::FSQRTo, PPC::FSQRT },
  { PPC::FSUBSo, PPC::FSUBS },
  { PPC::FSUBo, PPC::FSUB },
  { PPC::MULHDUo, PPC::MULHDU },
  { PPC::MULHDo, PPC::MULHD },
  { PPC::MULHWUo, PPC::MULHWU },
  { PPC::MULHWo, PPC::MULHW },
  { PPC::MULLDo, PPC::MULLD },
  { PPC::MULLWo, PPC::MULLW },
  { PPC::NAND8o, PPC::NAND8 },
  { PPC::NANDo, PPC::NAND },
  { PPC::NEG8o, PPC::NEG8 },
  { PPC::NEGo, PPC::NEG },
  { PPC::NOR8o, PPC::NOR8 },
  { PPC::NORo, PPC::NOR },
  { PPC::OR8o, PPC::OR8 },
  { PPC::ORC8o, PPC::ORC8 },
  { PPC::ORCo, PPC::ORC },
  { PPC::ORo, PPC::OR },
  { PPC::POPCNTDo, PPC::POPCNTD },
  { PPC::POPCNTWo, PPC::POPCNTW },
  { PPC::RLDCLo, PPC::RLDCL },
  { PPC::RLDCRo, PPC::RLDCR },
  { PPC::RLDICLo, PPC::RLDICL },
  { PPC::RLDICRo, PPC::RLDICR },
  { PPC::RLDICo, PPC::RLDIC },
  { PPC::RLDIMIo, PPC::RLDIMI },
  { PPC::RLWIMIo, PPC::RLWIMI },
  { PPC::RLWINM8o, PPC::RLWINM8 },
  { PPC::RLWINMo, PPC::RLWINM },
  { PPC::RLWNMo, PPC::RLWNM },
  { PPC::SLDo, PPC::SLD },
  { PPC::SLWo, PPC::SLW },
  { PPC::SRADIo, PPC::SRADI },
  { PPC::SRADo, PPC::SRAD },
  { PPC::SRAWIo, PPC::SRAWI },
  { PPC::SRAWo, PPC::SRAW },
  { PPC::SRDo, PPC::SRD },
  { PPC::SRWo, PPC::SRW },
  { PPC::SUBF8o, PPC::SUBF8 },
  { PPC::SUBFC8o, PPC::SUBFC8 },
  { PPC::SUBFCo, PPC::SUBFC },
  { PPC::SUBFE8o, PPC::SUBFE8 },
  { PPC::SUBFEo, PPC::SUBFE },
  { PPC::SUBFME8o, PPC::SUBFME8 },
  { PPC::SUBFMEo, PPC::SUBFME },
  { PPC::SUBFZE8o, PPC::SUBFZE8 },
  { PPC::SUBFZEo, PPC::SUBFZE },
  { PPC::SUBFo, PPC::SUBF },
  { PPC::XOR8o, PPC::XOR8 },
  { PPC::XORo, PPC::XOR },
}; // End of getNonRecordFormOpcodeTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 125;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == getNonRecordFormOpcodeTable[mid][0]) {
      break;
    }
    if (Opcode < getNonRecordFormOpcodeTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return getNonRecordFormOpcodeTable[mid][1];
}

// getRecordFormOpcode
int getRecordFormOpcode(uint16_t Opcode) {
static const uint16_t getRecordFormOpcodeTable[][2] = {
  { PPC::ADD4, PPC::ADD4o },
  { PPC::ADD8, PPC::ADD8o },
  { PPC::ADDC, PPC::ADDCo },
  { PPC::ADDC8, PPC::ADDC8o },
  { PPC::ADDE, PPC::ADDEo },
  { PPC::ADDE8, PPC::ADDE8o },
  { PPC::ADDIC, PPC::ADDICo },
  { PPC::ADDME, PPC::ADDMEo },
  { PPC::ADDME8, PPC::ADDME8o },
  { PPC::ADDZE, PPC::ADDZEo },
  { PPC::ADDZE8, PPC::ADDZE8o },
  { PPC::AND, PPC::ANDo },
  { PPC::AND8, PPC::AND8o },
  { PPC::ANDC, PPC::ANDCo },
  { PPC::ANDC8, PPC::ANDC8o },
  { PPC::CNTLZD, PPC::CNTLZDo },
  { PPC::CNTLZW, PPC::CNTLZWo },
  { PPC::DIVD, PPC::DIVDo },
  { PPC::DIVDU, PPC::DIVDUo },
  { PPC::DIVW, PPC::DIVWo },
  { PPC::DIVWU, PPC::DIVWUo },
  { PPC::EQV, PPC::EQVo },
  { PPC::EQV8, PPC::EQV8o },
  { PPC::EXTSB, PPC::EXTSBo },
  { PPC::EXTSB8, PPC::EXTSB8o },
  { PPC::EXTSH, PPC::EXTSHo },
  { PPC::EXTSH8, PPC::EXTSH8o },
  { PPC::EXTSW, PPC::EXTSWo },
  { PPC::EXTSW_32_64, PPC::EXTSW_32_64o },
  { PPC::FABSD, PPC::FABSDo },
  { PPC::FABSS, PPC::FABSSo },
  { PPC::FADD, PPC::FADDo },
  { PPC::FADDS, PPC::FADDSo },
  { PPC::FCFID, PPC::FCFIDo },
  { PPC::FCFIDS, PPC::FCFIDSo },
  { PPC::FCFIDU, PPC::FCFIDUo },
  { PPC::FCFIDUS, PPC::FCFIDUSo },
  { PPC::FCTIDUZ, PPC::FCTIDUZo },
  { PPC::FCTIDZ, PPC::FCTIDZo },
  { PPC::FCTIWUZ, PPC::FCTIWUZo },
  { PPC::FCTIWZ, PPC::FCTIWZo },
  { PPC::FDIV, PPC::FDIVo },
  { PPC::FDIVS, PPC::FDIVSo },
  { PPC::FMADD, PPC::FMADDo },
  { PPC::FMADDS, PPC::FMADDSo },
  { PPC::FMR, PPC::FMRo },
  { PPC::FMSUB, PPC::FMSUBo },
  { PPC::FMSUBS, PPC::FMSUBSo },
  { PPC::FMUL, PPC::FMULo },
  { PPC::FMULS, PPC::FMULSo },
  { PPC::FNABSD, PPC::FNABSDo },
  { PPC::FNABSS, PPC::FNABSSo },
  { PPC::FNEGD, PPC::FNEGDo },
  { PPC::FNEGS, PPC::FNEGSo },
  { PPC::FNMADD, PPC::FNMADDo },
  { PPC::FNMADDS, PPC::FNMADDSo },
  { PPC::FNMSUB, PPC::FNMSUBo },
  { PPC::FNMSUBS, PPC::FNMSUBSo },
  { PPC::FRE, PPC::FREo },
  { PPC::FRES, PPC::FRESo },
  { PPC::FRIMD, PPC::FRIMDo },
  { PPC::FRIMS, PPC::FRIMSo },
  { PPC::FRIND, PPC::FRINDo },
  { PPC::FRINS, PPC::FRINSo },
  { PPC::FRIPD, PPC::FRIPDo },
  { PPC::FRIPS, PPC::FRIPSo },
  { PPC::FRIZD, PPC::FRIZDo },
  { PPC::FRIZS, PPC::FRIZSo },
  { PPC::FRSP, PPC::FRSPo },
  { PPC::FRSQRTE, PPC::FRSQRTEo },
  { PPC::FRSQRTES, PPC::FRSQRTESo },
  { PPC::FSELD, PPC::FSELDo },
  { PPC::FSELS, PPC::FSELSo },
  { PPC::FSQRT, PPC::FSQRTo },
  { PPC::FSQRTS, PPC::FSQRTSo },
  { PPC::FSUB, PPC::FSUBo },
  { PPC::FSUBS, PPC::FSUBSo },
  { PPC::MULHD, PPC::MULHDo },
  { PPC::MULHDU, PPC::MULHDUo },
  { PPC::MULHW, PPC::MULHWo },
  { PPC::MULHWU, PPC::MULHWUo },
  { PPC::MULLD, PPC::MULLDo },
  { PPC::MULLW, PPC::MULLWo },
  { PPC::NAND, PPC::NANDo },
  { PPC::NAND8, PPC::NAND8o },
  { PPC::NEG, PPC::NEGo },
  { PPC::NEG8, PPC::NEG8o },
  { PPC::NOR, PPC::NORo },
  { PPC::NOR8, PPC::NOR8o },
  { PPC::OR, PPC::ORo },
  { PPC::OR8, PPC::OR8o },
  { PPC::ORC, PPC::ORCo },
  { PPC::ORC8, PPC::ORC8o },
  { PPC::POPCNTD, PPC::POPCNTDo },
  { PPC::POPCNTW, PPC::POPCNTWo },
  { PPC::RLDCL, PPC::RLDCLo },
  { PPC::RLDCR, PPC::RLDCRo },
  { PPC::RLDIC, PPC::RLDICo },
  { PPC::RLDICL, PPC::RLDICLo },
  { PPC::RLDICR, PPC::RLDICRo },
  { PPC::RLDIMI, PPC::RLDIMIo },
  { PPC::RLWIMI, PPC::RLWIMIo },
  { PPC::RLWINM, PPC::RLWINMo },
  { PPC::RLWINM8, PPC::RLWINM8o },
  { PPC::RLWNM, PPC::RLWNMo },
  { PPC::SLD, PPC::SLDo },
  { PPC::SLW, PPC::SLWo },
  { PPC::SRAD, PPC::SRADo },
  { PPC::SRADI, PPC::SRADIo },
  { PPC::SRAW, PPC::SRAWo },
  { PPC::SRAWI, PPC::SRAWIo },
  { PPC::SRD, PPC::SRDo },
  { PPC::SRW, PPC::SRWo },
  { PPC::SUBF, PPC::SUBFo },
  { PPC::SUBF8, PPC::SUBF8o },
  { PPC::SUBFC, PPC::SUBFCo },
  { PPC::SUBFC8, PPC::SUBFC8o },
  { PPC::SUBFE, PPC::SUBFEo },
  { PPC::SUBFE8, PPC::SUBFE8o },
  { PPC::SUBFME, PPC::SUBFMEo },
  { PPC::SUBFME8, PPC::SUBFME8o },
  { PPC::SUBFZE, PPC::SUBFZEo },
  { PPC::SUBFZE8, PPC::SUBFZE8o },
  { PPC::XOR, PPC::XORo },
  { PPC::XOR8, PPC::XOR8o },
}; // End of getRecordFormOpcodeTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 125;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == getRecordFormOpcodeTable[mid][0]) {
      break;
    }
    if (Opcode < getRecordFormOpcodeTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return getRecordFormOpcodeTable[mid][1];
}

} // End PPC namespace
} // End llvm namespace
#endif // GET_INSTRMAP_INFO

