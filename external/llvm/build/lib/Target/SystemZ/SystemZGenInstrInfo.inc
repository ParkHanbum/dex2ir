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

namespace SystemZ {
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
    A	= 17,
    ADB	= 18,
    ADBR	= 19,
    ADJCALLSTACKDOWN	= 20,
    ADJCALLSTACKUP	= 21,
    ADJDYNALLOC	= 22,
    AEB	= 23,
    AEBR	= 24,
    AEXT128_64	= 25,
    AFI	= 26,
    AG	= 27,
    AGF	= 28,
    AGFI	= 29,
    AGFR	= 30,
    AGHI	= 31,
    AGHIK	= 32,
    AGR	= 33,
    AGRK	= 34,
    AGSI	= 35,
    AH	= 36,
    AHI	= 37,
    AHIK	= 38,
    AHY	= 39,
    AL	= 40,
    ALC	= 41,
    ALCG	= 42,
    ALCGR	= 43,
    ALCR	= 44,
    ALFI	= 45,
    ALG	= 46,
    ALGF	= 47,
    ALGFI	= 48,
    ALGFR	= 49,
    ALGHSIK	= 50,
    ALGR	= 51,
    ALGRK	= 52,
    ALHSIK	= 53,
    ALR	= 54,
    ALRK	= 55,
    ALY	= 56,
    AR	= 57,
    ARK	= 58,
    ASI	= 59,
    ATOMIC_CMP_SWAPW	= 60,
    ATOMIC_LOADW_AFI	= 61,
    ATOMIC_LOADW_AR	= 62,
    ATOMIC_LOADW_MAX	= 63,
    ATOMIC_LOADW_MIN	= 64,
    ATOMIC_LOADW_NILH	= 65,
    ATOMIC_LOADW_NILHi	= 66,
    ATOMIC_LOADW_NR	= 67,
    ATOMIC_LOADW_NRi	= 68,
    ATOMIC_LOADW_OILH	= 69,
    ATOMIC_LOADW_OR	= 70,
    ATOMIC_LOADW_SR	= 71,
    ATOMIC_LOADW_UMAX	= 72,
    ATOMIC_LOADW_UMIN	= 73,
    ATOMIC_LOADW_XILF	= 74,
    ATOMIC_LOADW_XR	= 75,
    ATOMIC_LOAD_AFI	= 76,
    ATOMIC_LOAD_AGFI	= 77,
    ATOMIC_LOAD_AGHI	= 78,
    ATOMIC_LOAD_AGR	= 79,
    ATOMIC_LOAD_AHI	= 80,
    ATOMIC_LOAD_AR	= 81,
    ATOMIC_LOAD_MAX_32	= 82,
    ATOMIC_LOAD_MAX_64	= 83,
    ATOMIC_LOAD_MIN_32	= 84,
    ATOMIC_LOAD_MIN_64	= 85,
    ATOMIC_LOAD_NGR	= 86,
    ATOMIC_LOAD_NGRi	= 87,
    ATOMIC_LOAD_NIHF	= 88,
    ATOMIC_LOAD_NIHFi	= 89,
    ATOMIC_LOAD_NIHH	= 90,
    ATOMIC_LOAD_NIHHi	= 91,
    ATOMIC_LOAD_NIHL	= 92,
    ATOMIC_LOAD_NIHLi	= 93,
    ATOMIC_LOAD_NILF	= 94,
    ATOMIC_LOAD_NILF32	= 95,
    ATOMIC_LOAD_NILF32i	= 96,
    ATOMIC_LOAD_NILFi	= 97,
    ATOMIC_LOAD_NILH	= 98,
    ATOMIC_LOAD_NILH32	= 99,
    ATOMIC_LOAD_NILH32i	= 100,
    ATOMIC_LOAD_NILHi	= 101,
    ATOMIC_LOAD_NILL	= 102,
    ATOMIC_LOAD_NILL32	= 103,
    ATOMIC_LOAD_NILL32i	= 104,
    ATOMIC_LOAD_NILLi	= 105,
    ATOMIC_LOAD_NR	= 106,
    ATOMIC_LOAD_NRi	= 107,
    ATOMIC_LOAD_OGR	= 108,
    ATOMIC_LOAD_OIHF	= 109,
    ATOMIC_LOAD_OIHH	= 110,
    ATOMIC_LOAD_OIHL	= 111,
    ATOMIC_LOAD_OILF	= 112,
    ATOMIC_LOAD_OILF32	= 113,
    ATOMIC_LOAD_OILH	= 114,
    ATOMIC_LOAD_OILH32	= 115,
    ATOMIC_LOAD_OILL	= 116,
    ATOMIC_LOAD_OILL32	= 117,
    ATOMIC_LOAD_OR	= 118,
    ATOMIC_LOAD_SGR	= 119,
    ATOMIC_LOAD_SR	= 120,
    ATOMIC_LOAD_UMAX_32	= 121,
    ATOMIC_LOAD_UMAX_64	= 122,
    ATOMIC_LOAD_UMIN_32	= 123,
    ATOMIC_LOAD_UMIN_64	= 124,
    ATOMIC_LOAD_XGR	= 125,
    ATOMIC_LOAD_XIHF	= 126,
    ATOMIC_LOAD_XILF	= 127,
    ATOMIC_LOAD_XILF32	= 128,
    ATOMIC_LOAD_XR	= 129,
    ATOMIC_SWAPW	= 130,
    ATOMIC_SWAP_32	= 131,
    ATOMIC_SWAP_64	= 132,
    AXBR	= 133,
    AY	= 134,
    AsmBASR	= 135,
    AsmBRAS	= 136,
    AsmBRASL	= 137,
    AsmBRC	= 138,
    AsmBRCL	= 139,
    AsmCGIJ	= 140,
    AsmCGRJ	= 141,
    AsmCIJ	= 142,
    AsmCRJ	= 143,
    AsmEJ	= 144,
    AsmEJG	= 145,
    AsmELOC	= 146,
    AsmELOCG	= 147,
    AsmELOCGR	= 148,
    AsmELOCR	= 149,
    AsmESTOC	= 150,
    AsmESTOCG	= 151,
    AsmHEJ	= 152,
    AsmHEJG	= 153,
    AsmHELOC	= 154,
    AsmHELOCG	= 155,
    AsmHELOCGR	= 156,
    AsmHELOCR	= 157,
    AsmHESTOC	= 158,
    AsmHESTOCG	= 159,
    AsmHJ	= 160,
    AsmHJG	= 161,
    AsmHLOC	= 162,
    AsmHLOCG	= 163,
    AsmHLOCGR	= 164,
    AsmHLOCR	= 165,
    AsmHSTOC	= 166,
    AsmHSTOCG	= 167,
    AsmJEAltCGI	= 168,
    AsmJEAltCGR	= 169,
    AsmJEAltCI	= 170,
    AsmJEAltCR	= 171,
    AsmJECGI	= 172,
    AsmJECGR	= 173,
    AsmJECI	= 174,
    AsmJECR	= 175,
    AsmJHAltCGI	= 176,
    AsmJHAltCGR	= 177,
    AsmJHAltCI	= 178,
    AsmJHAltCR	= 179,
    AsmJHCGI	= 180,
    AsmJHCGR	= 181,
    AsmJHCI	= 182,
    AsmJHCR	= 183,
    AsmJHEAltCGI	= 184,
    AsmJHEAltCGR	= 185,
    AsmJHEAltCI	= 186,
    AsmJHEAltCR	= 187,
    AsmJHECGI	= 188,
    AsmJHECGR	= 189,
    AsmJHECI	= 190,
    AsmJHECR	= 191,
    AsmJLAltCGI	= 192,
    AsmJLAltCGR	= 193,
    AsmJLAltCI	= 194,
    AsmJLAltCR	= 195,
    AsmJLCGI	= 196,
    AsmJLCGR	= 197,
    AsmJLCI	= 198,
    AsmJLCR	= 199,
    AsmJLEAltCGI	= 200,
    AsmJLEAltCGR	= 201,
    AsmJLEAltCI	= 202,
    AsmJLEAltCR	= 203,
    AsmJLECGI	= 204,
    AsmJLECGR	= 205,
    AsmJLECI	= 206,
    AsmJLECR	= 207,
    AsmJLHAltCGI	= 208,
    AsmJLHAltCGR	= 209,
    AsmJLHAltCI	= 210,
    AsmJLHAltCR	= 211,
    AsmJLHCGI	= 212,
    AsmJLHCGR	= 213,
    AsmJLHCI	= 214,
    AsmJLHCR	= 215,
    AsmLEJ	= 216,
    AsmLEJG	= 217,
    AsmLELOC	= 218,
    AsmLELOCG	= 219,
    AsmLELOCGR	= 220,
    AsmLELOCR	= 221,
    AsmLESTOC	= 222,
    AsmLESTOCG	= 223,
    AsmLHJ	= 224,
    AsmLHJG	= 225,
    AsmLHLOC	= 226,
    AsmLHLOCG	= 227,
    AsmLHLOCGR	= 228,
    AsmLHLOCR	= 229,
    AsmLHSTOC	= 230,
    AsmLHSTOCG	= 231,
    AsmLJ	= 232,
    AsmLJG	= 233,
    AsmLLOC	= 234,
    AsmLLOCG	= 235,
    AsmLLOCGR	= 236,
    AsmLLOCR	= 237,
    AsmLOC	= 238,
    AsmLOCG	= 239,
    AsmLOCGR	= 240,
    AsmLOCR	= 241,
    AsmLSTOC	= 242,
    AsmLSTOCG	= 243,
    AsmNEJ	= 244,
    AsmNEJG	= 245,
    AsmNELOC	= 246,
    AsmNELOCG	= 247,
    AsmNELOCGR	= 248,
    AsmNELOCR	= 249,
    AsmNESTOC	= 250,
    AsmNESTOCG	= 251,
    AsmNHEJ	= 252,
    AsmNHEJG	= 253,
    AsmNHELOC	= 254,
    AsmNHELOCG	= 255,
    AsmNHELOCGR	= 256,
    AsmNHELOCR	= 257,
    AsmNHESTOC	= 258,
    AsmNHESTOCG	= 259,
    AsmNHJ	= 260,
    AsmNHJG	= 261,
    AsmNHLOC	= 262,
    AsmNHLOCG	= 263,
    AsmNHLOCGR	= 264,
    AsmNHLOCR	= 265,
    AsmNHSTOC	= 266,
    AsmNHSTOCG	= 267,
    AsmNLEJ	= 268,
    AsmNLEJG	= 269,
    AsmNLELOC	= 270,
    AsmNLELOCG	= 271,
    AsmNLELOCGR	= 272,
    AsmNLELOCR	= 273,
    AsmNLESTOC	= 274,
    AsmNLESTOCG	= 275,
    AsmNLHJ	= 276,
    AsmNLHJG	= 277,
    AsmNLHLOC	= 278,
    AsmNLHLOCG	= 279,
    AsmNLHLOCGR	= 280,
    AsmNLHLOCR	= 281,
    AsmNLHSTOC	= 282,
    AsmNLHSTOCG	= 283,
    AsmNLJ	= 284,
    AsmNLJG	= 285,
    AsmNLLOC	= 286,
    AsmNLLOCG	= 287,
    AsmNLLOCGR	= 288,
    AsmNLLOCR	= 289,
    AsmNLSTOC	= 290,
    AsmNLSTOCG	= 291,
    AsmNOJ	= 292,
    AsmNOJG	= 293,
    AsmNOLOC	= 294,
    AsmNOLOCG	= 295,
    AsmNOLOCGR	= 296,
    AsmNOLOCR	= 297,
    AsmNOSTOC	= 298,
    AsmNOSTOCG	= 299,
    AsmOJ	= 300,
    AsmOJG	= 301,
    AsmOLOC	= 302,
    AsmOLOCG	= 303,
    AsmOLOCGR	= 304,
    AsmOLOCR	= 305,
    AsmOSTOC	= 306,
    AsmOSTOCG	= 307,
    AsmSTOC	= 308,
    AsmSTOCG	= 309,
    BASR	= 310,
    BR	= 311,
    BRAS	= 312,
    BRASL	= 313,
    BRC	= 314,
    BRCL	= 315,
    BRCT	= 316,
    BRCTG	= 317,
    C	= 318,
    CDB	= 319,
    CDBR	= 320,
    CDFBR	= 321,
    CDGBR	= 322,
    CEB	= 323,
    CEBR	= 324,
    CEFBR	= 325,
    CEGBR	= 326,
    CFDBR	= 327,
    CFEBR	= 328,
    CFI	= 329,
    CFXBR	= 330,
    CG	= 331,
    CGDBR	= 332,
    CGEBR	= 333,
    CGF	= 334,
    CGFI	= 335,
    CGFR	= 336,
    CGFRL	= 337,
    CGH	= 338,
    CGHI	= 339,
    CGHRL	= 340,
    CGHSI	= 341,
    CGIJ	= 342,
    CGR	= 343,
    CGRJ	= 344,
    CGRL	= 345,
    CGXBR	= 346,
    CH	= 347,
    CHHSI	= 348,
    CHI	= 349,
    CHRL	= 350,
    CHSI	= 351,
    CHY	= 352,
    CIJ	= 353,
    CL	= 354,
    CLFHSI	= 355,
    CLFI	= 356,
    CLG	= 357,
    CLGF	= 358,
    CLGFI	= 359,
    CLGFR	= 360,
    CLGFRL	= 361,
    CLGHRL	= 362,
    CLGHSI	= 363,
    CLGR	= 364,
    CLGRL	= 365,
    CLHHSI	= 366,
    CLHRL	= 367,
    CLI	= 368,
    CLIY	= 369,
    CLR	= 370,
    CLRL	= 371,
    CLY	= 372,
    CPSDRdd	= 373,
    CPSDRds	= 374,
    CPSDRsd	= 375,
    CPSDRss	= 376,
    CR	= 377,
    CRJ	= 378,
    CRL	= 379,
    CS	= 380,
    CSG	= 381,
    CSY	= 382,
    CXBR	= 383,
    CXFBR	= 384,
    CXGBR	= 385,
    CY	= 386,
    CondStore16	= 387,
    CondStore16Inv	= 388,
    CondStore16_32	= 389,
    CondStore16_32Inv	= 390,
    CondStore32	= 391,
    CondStore32Inv	= 392,
    CondStore32_32	= 393,
    CondStore32_32Inv	= 394,
    CondStore64	= 395,
    CondStore64Inv	= 396,
    CondStore8	= 397,
    CondStore8Inv	= 398,
    CondStore8_32	= 399,
    CondStore8_32Inv	= 400,
    CondStoreF32	= 401,
    CondStoreF32Inv	= 402,
    CondStoreF64	= 403,
    CondStoreF64Inv	= 404,
    DDB	= 405,
    DDBR	= 406,
    DEB	= 407,
    DEBR	= 408,
    DL	= 409,
    DLG	= 410,
    DLGR	= 411,
    DLR	= 412,
    DSG	= 413,
    DSGF	= 414,
    DSGFR	= 415,
    DSGR	= 416,
    DXBR	= 417,
    EAR	= 418,
    FIDBR	= 419,
    FIEBR	= 420,
    FIXBR	= 421,
    FLOGR	= 422,
    IC	= 423,
    IC32	= 424,
    IC32Y	= 425,
    ICY	= 426,
    IIHF	= 427,
    IIHH	= 428,
    IIHL	= 429,
    IILF	= 430,
    IILF32	= 431,
    IILH	= 432,
    IILH32	= 433,
    IILL	= 434,
    IILL32	= 435,
    J	= 436,
    JG	= 437,
    L	= 438,
    L128	= 439,
    LA	= 440,
    LARL	= 441,
    LAY	= 442,
    LB	= 443,
    LBR	= 444,
    LCDBR	= 445,
    LCEBR	= 446,
    LCGFR	= 447,
    LCGR	= 448,
    LCR	= 449,
    LCXBR	= 450,
    LD	= 451,
    LDEB	= 452,
    LDEBR	= 453,
    LDGR	= 454,
    LDR	= 455,
    LDXBR	= 456,
    LDY	= 457,
    LE	= 458,
    LEDBR	= 459,
    LER	= 460,
    LEXBR	= 461,
    LEY	= 462,
    LG	= 463,
    LGB	= 464,
    LGBR	= 465,
    LGDR	= 466,
    LGF	= 467,
    LGFI	= 468,
    LGFR	= 469,
    LGFRL	= 470,
    LGH	= 471,
    LGHI	= 472,
    LGHR	= 473,
    LGHRL	= 474,
    LGR	= 475,
    LGRL	= 476,
    LH	= 477,
    LHI	= 478,
    LHR	= 479,
    LHRL	= 480,
    LHY	= 481,
    LLC	= 482,
    LLCR	= 483,
    LLGC	= 484,
    LLGCR	= 485,
    LLGF	= 486,
    LLGFR	= 487,
    LLGFRL	= 488,
    LLGH	= 489,
    LLGHR	= 490,
    LLGHRL	= 491,
    LLH	= 492,
    LLHR	= 493,
    LLHRL	= 494,
    LLIHF	= 495,
    LLIHH	= 496,
    LLIHL	= 497,
    LLILF	= 498,
    LLILH	= 499,
    LLILL	= 500,
    LMG	= 501,
    LNDBR	= 502,
    LNEBR	= 503,
    LNXBR	= 504,
    LOC	= 505,
    LOCG	= 506,
    LOCGR	= 507,
    LOCR	= 508,
    LPDBR	= 509,
    LPEBR	= 510,
    LPXBR	= 511,
    LR	= 512,
    LRL	= 513,
    LRV	= 514,
    LRVG	= 515,
    LRVGR	= 516,
    LRVR	= 517,
    LT	= 518,
    LTDBR	= 519,
    LTDBRCompare	= 520,
    LTEBR	= 521,
    LTEBRCompare	= 522,
    LTG	= 523,
    LTGF	= 524,
    LTGFR	= 525,
    LTGR	= 526,
    LTR	= 527,
    LTXBR	= 528,
    LTXBRCompare	= 529,
    LX	= 530,
    LXDB	= 531,
    LXDBR	= 532,
    LXEB	= 533,
    LXEBR	= 534,
    LXR	= 535,
    LY	= 536,
    LZDR	= 537,
    LZER	= 538,
    LZXR	= 539,
    MADB	= 540,
    MADBR	= 541,
    MAEB	= 542,
    MAEBR	= 543,
    MDB	= 544,
    MDBR	= 545,
    MDEB	= 546,
    MDEBR	= 547,
    MEEB	= 548,
    MEEBR	= 549,
    MGHI	= 550,
    MH	= 551,
    MHI	= 552,
    MHY	= 553,
    MLG	= 554,
    MLGR	= 555,
    MS	= 556,
    MSDB	= 557,
    MSDBR	= 558,
    MSEB	= 559,
    MSEBR	= 560,
    MSFI	= 561,
    MSG	= 562,
    MSGF	= 563,
    MSGFI	= 564,
    MSGFR	= 565,
    MSGR	= 566,
    MSR	= 567,
    MSY	= 568,
    MVC	= 569,
    MVCWrapper	= 570,
    MVGHI	= 571,
    MVHHI	= 572,
    MVHI	= 573,
    MVI	= 574,
    MVIY	= 575,
    MXBR	= 576,
    MXDB	= 577,
    MXDBR	= 578,
    N	= 579,
    NG	= 580,
    NGR	= 581,
    NGRK	= 582,
    NI	= 583,
    NIHF	= 584,
    NIHH	= 585,
    NIHL	= 586,
    NILF	= 587,
    NILF32	= 588,
    NILH	= 589,
    NILH32	= 590,
    NILL	= 591,
    NILL32	= 592,
    NIY	= 593,
    NR	= 594,
    NRK	= 595,
    NY	= 596,
    O	= 597,
    OG	= 598,
    OGR	= 599,
    OGRK	= 600,
    OI	= 601,
    OIHF	= 602,
    OIHH	= 603,
    OIHL	= 604,
    OILF	= 605,
    OILF32	= 606,
    OILH	= 607,
    OILH32	= 608,
    OILL	= 609,
    OILL32	= 610,
    OIY	= 611,
    OR	= 612,
    ORK	= 613,
    OY	= 614,
    RET	= 615,
    RISBG	= 616,
    RISBG32	= 617,
    RISBHG	= 618,
    RISBLG	= 619,
    RISBLG32	= 620,
    RLL	= 621,
    RLLG	= 622,
    RNSBG	= 623,
    ROSBG	= 624,
    RXSBG	= 625,
    S	= 626,
    SDB	= 627,
    SDBR	= 628,
    SEB	= 629,
    SEBR	= 630,
    SG	= 631,
    SGF	= 632,
    SGFR	= 633,
    SGR	= 634,
    SGRK	= 635,
    SH	= 636,
    SHY	= 637,
    SL	= 638,
    SLB	= 639,
    SLBG	= 640,
    SLBR	= 641,
    SLFI	= 642,
    SLG	= 643,
    SLGBR	= 644,
    SLGF	= 645,
    SLGFI	= 646,
    SLGFR	= 647,
    SLGR	= 648,
    SLGRK	= 649,
    SLL	= 650,
    SLLG	= 651,
    SLLK	= 652,
    SLR	= 653,
    SLRK	= 654,
    SLY	= 655,
    SQDB	= 656,
    SQDBR	= 657,
    SQEB	= 658,
    SQEBR	= 659,
    SQXBR	= 660,
    SR	= 661,
    SRA	= 662,
    SRAG	= 663,
    SRAK	= 664,
    SRK	= 665,
    SRL	= 666,
    SRLG	= 667,
    SRLK	= 668,
    ST	= 669,
    ST128	= 670,
    ST32	= 671,
    ST32Y	= 672,
    STC	= 673,
    STC32	= 674,
    STC32Y	= 675,
    STCY	= 676,
    STD	= 677,
    STDY	= 678,
    STE	= 679,
    STEY	= 680,
    STG	= 681,
    STGRL	= 682,
    STH	= 683,
    STH32	= 684,
    STH32Y	= 685,
    STHRL	= 686,
    STHRL32	= 687,
    STHY	= 688,
    STMG	= 689,
    STOC	= 690,
    STOC32	= 691,
    STOCG	= 692,
    STRL	= 693,
    STRL32	= 694,
    STRV	= 695,
    STRVG	= 696,
    STX	= 697,
    STY	= 698,
    SXBR	= 699,
    SY	= 700,
    Select32	= 701,
    Select64	= 702,
    SelectF128	= 703,
    SelectF32	= 704,
    SelectF64	= 705,
    X	= 706,
    XG	= 707,
    XGR	= 708,
    XGRK	= 709,
    XI	= 710,
    XIHF	= 711,
    XILF	= 712,
    XILF32	= 713,
    XIY	= 714,
    XR	= 715,
    XRK	= 716,
    XY	= 717,
    ZEXT128_32	= 718,
    ZEXT128_64	= 719,
    INSTRUCTION_LIST_END = 720
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

static const uint16_t ImplicitList1[] = { SystemZ::CC, 0 };
static const uint16_t ImplicitList2[] = { SystemZ::R0D, SystemZ::R1D, SystemZ::R2D, SystemZ::R3D, SystemZ::R4D, SystemZ::R5D, SystemZ::R14D, SystemZ::F0D, SystemZ::F1D, SystemZ::F2D, SystemZ::F3D, SystemZ::F4D, SystemZ::F5D, SystemZ::F6D, SystemZ::F7D, SystemZ::CC, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { SystemZ::GR128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { SystemZ::GR128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { SystemZ::GR128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { SystemZ::GR128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { SystemZ::GR128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo96[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo97[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo99[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo100[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo101[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo102[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo103[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo104[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo105[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo106[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo107[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo108[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo109[] = { { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo110[] = { { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo111[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo112[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo113[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo114[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo115[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo116[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo117[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo118[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo119[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo120[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo121[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo122[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo123[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo124[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo125[] = { { SystemZ::GR128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };

extern const MCInstrDesc SystemZInsts[] = {
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
  { 17,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x23c88ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #17 = A
  { 18,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x3fd08ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #18 = ADB
  { 19,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x3fc00ULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #19 = ADBR
  { 20,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #20 = ADJCALLSTACKDOWN
  { 21,	2,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #21 = ADJCALLSTACKUP
  { 22,	4,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #22 = ADJDYNALLOC
  { 23,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x3fc88ULL, NULL, ImplicitList1, OperandInfo13 },  // Inst #23 = AEB
  { 24,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x3fc00ULL, NULL, ImplicitList1, OperandInfo14 },  // Inst #24 = AEBR
  { 25,	2,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #25 = AEXT128_64
  { 26,	3,	1,	0,	6,	0, 0x23c00ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #26 = AFI
  { 27,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x23d0cULL, NULL, ImplicitList1, OperandInfo17 },  // Inst #27 = AG
  { 28,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x23c8cULL, NULL, ImplicitList1, OperandInfo17 },  // Inst #28 = AGF
  { 29,	3,	1,	0,	6,	0, 0x23c00ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #29 = AGFI
  { 30,	3,	1,	0,	4,	0, 0x23c00ULL, NULL, ImplicitList1, OperandInfo19 },  // Inst #30 = AGFR
  { 31,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr), 0x23c00ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #31 = AGHI
  { 32,	3,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x23c00ULL, NULL, ImplicitList1, OperandInfo20 },  // Inst #32 = AGHIK
  { 33,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr)|(1<<MCID::Commutable), 0x23c00ULL, NULL, ImplicitList1, OperandInfo21 },  // Inst #33 = AGR
  { 34,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x23c00ULL, NULL, ImplicitList1, OperandInfo22 },  // Inst #34 = AGRK
  { 35,	3,	0,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x23c04ULL, NULL, ImplicitList1, OperandInfo23 },  // Inst #35 = AGSI
  { 36,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x23c48ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #36 = AH
  { 37,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr), 0x23c00ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #37 = AHI
  { 38,	3,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x23c00ULL, NULL, ImplicitList1, OperandInfo24 },  // Inst #38 = AHIK
  { 39,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x23c4cULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #39 = AHY
  { 40,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x88ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #40 = AL
  { 41,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, ImplicitList1, ImplicitList1, OperandInfo8 },  // Inst #41 = ALC
  { 42,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x10cULL, ImplicitList1, ImplicitList1, OperandInfo17 },  // Inst #42 = ALCG
  { 43,	3,	1,	0,	4,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo21 },  // Inst #43 = ALCGR
  { 44,	3,	1,	0,	4,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo25 },  // Inst #44 = ALCR
  { 45,	3,	1,	0,	6,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #45 = ALFI
  { 46,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x10cULL, NULL, ImplicitList1, OperandInfo17 },  // Inst #46 = ALG
  { 47,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, NULL, ImplicitList1, OperandInfo17 },  // Inst #47 = ALGF
  { 48,	3,	1,	0,	6,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #48 = ALGFI
  { 49,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo19 },  // Inst #49 = ALGFR
  { 50,	3,	1,	0,	6,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo20 },  // Inst #50 = ALGHSIK
  { 51,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr)|(1<<MCID::Commutable), 0x0ULL, NULL, ImplicitList1, OperandInfo21 },  // Inst #51 = ALGR
  { 52,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo22 },  // Inst #52 = ALGRK
  { 53,	3,	1,	0,	6,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo24 },  // Inst #53 = ALHSIK
  { 54,	3,	1,	0,	2,	0|(1<<MCID::ConvertibleTo3Addr)|(1<<MCID::Commutable), 0x0ULL, NULL, ImplicitList1, OperandInfo25 },  // Inst #54 = ALR
  { 55,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo26 },  // Inst #55 = ALRK
  { 56,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #56 = ALY
  { 57,	3,	1,	0,	2,	0|(1<<MCID::ConvertibleTo3Addr)|(1<<MCID::Commutable), 0x23c00ULL, NULL, ImplicitList1, OperandInfo25 },  // Inst #57 = AR
  { 58,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x23c00ULL, NULL, ImplicitList1, OperandInfo26 },  // Inst #58 = ARK
  { 59,	3,	0,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x23c04ULL, NULL, ImplicitList1, OperandInfo23 },  // Inst #59 = ASI
  { 60,	8,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo27 },  // Inst #60 = ATOMIC_CMP_SWAPW
  { 61,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo28 },  // Inst #61 = ATOMIC_LOADW_AFI
  { 62,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo29 },  // Inst #62 = ATOMIC_LOADW_AR
  { 63,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo29 },  // Inst #63 = ATOMIC_LOADW_MAX
  { 64,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo29 },  // Inst #64 = ATOMIC_LOADW_MIN
  { 65,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo28 },  // Inst #65 = ATOMIC_LOADW_NILH
  { 66,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo28 },  // Inst #66 = ATOMIC_LOADW_NILHi
  { 67,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo29 },  // Inst #67 = ATOMIC_LOADW_NR
  { 68,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo29 },  // Inst #68 = ATOMIC_LOADW_NRi
  { 69,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo28 },  // Inst #69 = ATOMIC_LOADW_OILH
  { 70,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo29 },  // Inst #70 = ATOMIC_LOADW_OR
  { 71,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo29 },  // Inst #71 = ATOMIC_LOADW_SR
  { 72,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo29 },  // Inst #72 = ATOMIC_LOADW_UMAX
  { 73,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo29 },  // Inst #73 = ATOMIC_LOADW_UMIN
  { 74,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo28 },  // Inst #74 = ATOMIC_LOADW_XILF
  { 75,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo29 },  // Inst #75 = ATOMIC_LOADW_XR
  { 76,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo30 },  // Inst #76 = ATOMIC_LOAD_AFI
  { 77,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #77 = ATOMIC_LOAD_AGFI
  { 78,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #78 = ATOMIC_LOAD_AGHI
  { 79,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo32 },  // Inst #79 = ATOMIC_LOAD_AGR
  { 80,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo30 },  // Inst #80 = ATOMIC_LOAD_AHI
  { 81,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo33 },  // Inst #81 = ATOMIC_LOAD_AR
  { 82,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo33 },  // Inst #82 = ATOMIC_LOAD_MAX_32
  { 83,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo32 },  // Inst #83 = ATOMIC_LOAD_MAX_64
  { 84,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo33 },  // Inst #84 = ATOMIC_LOAD_MIN_32
  { 85,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo32 },  // Inst #85 = ATOMIC_LOAD_MIN_64
  { 86,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo32 },  // Inst #86 = ATOMIC_LOAD_NGR
  { 87,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo32 },  // Inst #87 = ATOMIC_LOAD_NGRi
  { 88,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #88 = ATOMIC_LOAD_NIHF
  { 89,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #89 = ATOMIC_LOAD_NIHFi
  { 90,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #90 = ATOMIC_LOAD_NIHH
  { 91,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #91 = ATOMIC_LOAD_NIHHi
  { 92,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #92 = ATOMIC_LOAD_NIHL
  { 93,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #93 = ATOMIC_LOAD_NIHLi
  { 94,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #94 = ATOMIC_LOAD_NILF
  { 95,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo30 },  // Inst #95 = ATOMIC_LOAD_NILF32
  { 96,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo30 },  // Inst #96 = ATOMIC_LOAD_NILF32i
  { 97,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #97 = ATOMIC_LOAD_NILFi
  { 98,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #98 = ATOMIC_LOAD_NILH
  { 99,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo30 },  // Inst #99 = ATOMIC_LOAD_NILH32
  { 100,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo30 },  // Inst #100 = ATOMIC_LOAD_NILH32i
  { 101,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #101 = ATOMIC_LOAD_NILHi
  { 102,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #102 = ATOMIC_LOAD_NILL
  { 103,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo30 },  // Inst #103 = ATOMIC_LOAD_NILL32
  { 104,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo30 },  // Inst #104 = ATOMIC_LOAD_NILL32i
  { 105,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #105 = ATOMIC_LOAD_NILLi
  { 106,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo33 },  // Inst #106 = ATOMIC_LOAD_NR
  { 107,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo33 },  // Inst #107 = ATOMIC_LOAD_NRi
  { 108,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo32 },  // Inst #108 = ATOMIC_LOAD_OGR
  { 109,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #109 = ATOMIC_LOAD_OIHF
  { 110,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #110 = ATOMIC_LOAD_OIHH
  { 111,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #111 = ATOMIC_LOAD_OIHL
  { 112,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #112 = ATOMIC_LOAD_OILF
  { 113,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo30 },  // Inst #113 = ATOMIC_LOAD_OILF32
  { 114,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #114 = ATOMIC_LOAD_OILH
  { 115,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo30 },  // Inst #115 = ATOMIC_LOAD_OILH32
  { 116,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #116 = ATOMIC_LOAD_OILL
  { 117,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo30 },  // Inst #117 = ATOMIC_LOAD_OILL32
  { 118,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo33 },  // Inst #118 = ATOMIC_LOAD_OR
  { 119,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo32 },  // Inst #119 = ATOMIC_LOAD_SGR
  { 120,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo33 },  // Inst #120 = ATOMIC_LOAD_SR
  { 121,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo33 },  // Inst #121 = ATOMIC_LOAD_UMAX_32
  { 122,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo32 },  // Inst #122 = ATOMIC_LOAD_UMAX_64
  { 123,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo33 },  // Inst #123 = ATOMIC_LOAD_UMIN_32
  { 124,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo32 },  // Inst #124 = ATOMIC_LOAD_UMIN_64
  { 125,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo32 },  // Inst #125 = ATOMIC_LOAD_XGR
  { 126,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #126 = ATOMIC_LOAD_XIHF
  { 127,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo31 },  // Inst #127 = ATOMIC_LOAD_XILF
  { 128,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo30 },  // Inst #128 = ATOMIC_LOAD_XILF32
  { 129,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo33 },  // Inst #129 = ATOMIC_LOAD_XR
  { 130,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo29 },  // Inst #130 = ATOMIC_SWAPW
  { 131,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo33 },  // Inst #131 = ATOMIC_SWAP_32
  { 132,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo32 },  // Inst #132 = ATOMIC_SWAP_64
  { 133,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x3fc00ULL, NULL, ImplicitList1, OperandInfo34 },  // Inst #133 = AXBR
  { 134,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x23c8cULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #134 = AY
  { 135,	2,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo35 },  // Inst #135 = AsmBASR
  { 136,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #136 = AsmBRAS
  { 137,	2,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #137 = AsmBRASL
  { 138,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, NULL, OperandInfo7 },  // Inst #138 = AsmBRC
  { 139,	2,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, NULL, OperandInfo7 },  // Inst #139 = AsmBRCL
  { 140,	4,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo37 },  // Inst #140 = AsmCGIJ
  { 141,	4,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo38 },  // Inst #141 = AsmCGRJ
  { 142,	4,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo39 },  // Inst #142 = AsmCIJ
  { 143,	4,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo40 },  // Inst #143 = AsmCRJ
  { 144,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #144 = AsmEJ
  { 145,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #145 = AsmEJG
  { 146,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo41 },  // Inst #146 = AsmELOC
  { 147,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo42 },  // Inst #147 = AsmELOCG
  { 148,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #148 = AsmELOCGR
  { 149,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #149 = AsmELOCR
  { 150,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo43 },  // Inst #150 = AsmESTOC
  { 151,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo44 },  // Inst #151 = AsmESTOCG
  { 152,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #152 = AsmHEJ
  { 153,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #153 = AsmHEJG
  { 154,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo41 },  // Inst #154 = AsmHELOC
  { 155,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo42 },  // Inst #155 = AsmHELOCG
  { 156,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #156 = AsmHELOCGR
  { 157,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #157 = AsmHELOCR
  { 158,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo43 },  // Inst #158 = AsmHESTOC
  { 159,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo44 },  // Inst #159 = AsmHESTOCG
  { 160,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #160 = AsmHJ
  { 161,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #161 = AsmHJG
  { 162,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo41 },  // Inst #162 = AsmHLOC
  { 163,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo42 },  // Inst #163 = AsmHLOCG
  { 164,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #164 = AsmHLOCGR
  { 165,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #165 = AsmHLOCR
  { 166,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo43 },  // Inst #166 = AsmHSTOC
  { 167,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo44 },  // Inst #167 = AsmHSTOCG
  { 168,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #168 = AsmJEAltCGI
  { 169,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #169 = AsmJEAltCGR
  { 170,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo46 },  // Inst #170 = AsmJEAltCI
  { 171,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #171 = AsmJEAltCR
  { 172,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #172 = AsmJECGI
  { 173,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #173 = AsmJECGR
  { 174,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo46 },  // Inst #174 = AsmJECI
  { 175,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #175 = AsmJECR
  { 176,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #176 = AsmJHAltCGI
  { 177,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #177 = AsmJHAltCGR
  { 178,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo46 },  // Inst #178 = AsmJHAltCI
  { 179,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #179 = AsmJHAltCR
  { 180,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #180 = AsmJHCGI
  { 181,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #181 = AsmJHCGR
  { 182,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo46 },  // Inst #182 = AsmJHCI
  { 183,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #183 = AsmJHCR
  { 184,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #184 = AsmJHEAltCGI
  { 185,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #185 = AsmJHEAltCGR
  { 186,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo46 },  // Inst #186 = AsmJHEAltCI
  { 187,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #187 = AsmJHEAltCR
  { 188,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #188 = AsmJHECGI
  { 189,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #189 = AsmJHECGR
  { 190,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo46 },  // Inst #190 = AsmJHECI
  { 191,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #191 = AsmJHECR
  { 192,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #192 = AsmJLAltCGI
  { 193,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #193 = AsmJLAltCGR
  { 194,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo46 },  // Inst #194 = AsmJLAltCI
  { 195,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #195 = AsmJLAltCR
  { 196,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #196 = AsmJLCGI
  { 197,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #197 = AsmJLCGR
  { 198,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo46 },  // Inst #198 = AsmJLCI
  { 199,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #199 = AsmJLCR
  { 200,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #200 = AsmJLEAltCGI
  { 201,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #201 = AsmJLEAltCGR
  { 202,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo46 },  // Inst #202 = AsmJLEAltCI
  { 203,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #203 = AsmJLEAltCR
  { 204,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #204 = AsmJLECGI
  { 205,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #205 = AsmJLECGR
  { 206,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo46 },  // Inst #206 = AsmJLECI
  { 207,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #207 = AsmJLECR
  { 208,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #208 = AsmJLHAltCGI
  { 209,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #209 = AsmJLHAltCGR
  { 210,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo46 },  // Inst #210 = AsmJLHAltCI
  { 211,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #211 = AsmJLHAltCR
  { 212,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #212 = AsmJLHCGI
  { 213,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #213 = AsmJLHCGR
  { 214,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo46 },  // Inst #214 = AsmJLHCI
  { 215,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #215 = AsmJLHCR
  { 216,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #216 = AsmLEJ
  { 217,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #217 = AsmLEJG
  { 218,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo41 },  // Inst #218 = AsmLELOC
  { 219,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo42 },  // Inst #219 = AsmLELOCG
  { 220,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #220 = AsmLELOCGR
  { 221,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #221 = AsmLELOCR
  { 222,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo43 },  // Inst #222 = AsmLESTOC
  { 223,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo44 },  // Inst #223 = AsmLESTOCG
  { 224,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #224 = AsmLHJ
  { 225,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #225 = AsmLHJG
  { 226,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo41 },  // Inst #226 = AsmLHLOC
  { 227,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo42 },  // Inst #227 = AsmLHLOCG
  { 228,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #228 = AsmLHLOCGR
  { 229,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #229 = AsmLHLOCR
  { 230,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo43 },  // Inst #230 = AsmLHSTOC
  { 231,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo44 },  // Inst #231 = AsmLHSTOCG
  { 232,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #232 = AsmLJ
  { 233,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #233 = AsmLJG
  { 234,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo41 },  // Inst #234 = AsmLLOC
  { 235,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo42 },  // Inst #235 = AsmLLOCG
  { 236,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #236 = AsmLLOCGR
  { 237,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #237 = AsmLLOCR
  { 238,	5,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, ImplicitList1, NULL, OperandInfo47 },  // Inst #238 = AsmLOC
  { 239,	5,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, ImplicitList1, NULL, OperandInfo48 },  // Inst #239 = AsmLOCG
  { 240,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, NULL, OperandInfo49 },  // Inst #240 = AsmLOCGR
  { 241,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, NULL, OperandInfo50 },  // Inst #241 = AsmLOCR
  { 242,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo43 },  // Inst #242 = AsmLSTOC
  { 243,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo44 },  // Inst #243 = AsmLSTOCG
  { 244,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #244 = AsmNEJ
  { 245,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #245 = AsmNEJG
  { 246,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo41 },  // Inst #246 = AsmNELOC
  { 247,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo42 },  // Inst #247 = AsmNELOCG
  { 248,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #248 = AsmNELOCGR
  { 249,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #249 = AsmNELOCR
  { 250,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo43 },  // Inst #250 = AsmNESTOC
  { 251,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo44 },  // Inst #251 = AsmNESTOCG
  { 252,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #252 = AsmNHEJ
  { 253,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #253 = AsmNHEJG
  { 254,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo41 },  // Inst #254 = AsmNHELOC
  { 255,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo42 },  // Inst #255 = AsmNHELOCG
  { 256,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #256 = AsmNHELOCGR
  { 257,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #257 = AsmNHELOCR
  { 258,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo43 },  // Inst #258 = AsmNHESTOC
  { 259,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo44 },  // Inst #259 = AsmNHESTOCG
  { 260,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #260 = AsmNHJ
  { 261,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #261 = AsmNHJG
  { 262,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo41 },  // Inst #262 = AsmNHLOC
  { 263,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo42 },  // Inst #263 = AsmNHLOCG
  { 264,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #264 = AsmNHLOCGR
  { 265,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #265 = AsmNHLOCR
  { 266,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo43 },  // Inst #266 = AsmNHSTOC
  { 267,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo44 },  // Inst #267 = AsmNHSTOCG
  { 268,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #268 = AsmNLEJ
  { 269,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #269 = AsmNLEJG
  { 270,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo41 },  // Inst #270 = AsmNLELOC
  { 271,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo42 },  // Inst #271 = AsmNLELOCG
  { 272,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #272 = AsmNLELOCGR
  { 273,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #273 = AsmNLELOCR
  { 274,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo43 },  // Inst #274 = AsmNLESTOC
  { 275,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo44 },  // Inst #275 = AsmNLESTOCG
  { 276,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #276 = AsmNLHJ
  { 277,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #277 = AsmNLHJG
  { 278,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo41 },  // Inst #278 = AsmNLHLOC
  { 279,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo42 },  // Inst #279 = AsmNLHLOCG
  { 280,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #280 = AsmNLHLOCGR
  { 281,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #281 = AsmNLHLOCR
  { 282,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo43 },  // Inst #282 = AsmNLHSTOC
  { 283,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo44 },  // Inst #283 = AsmNLHSTOCG
  { 284,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #284 = AsmNLJ
  { 285,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #285 = AsmNLJG
  { 286,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo41 },  // Inst #286 = AsmNLLOC
  { 287,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo42 },  // Inst #287 = AsmNLLOCG
  { 288,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #288 = AsmNLLOCGR
  { 289,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #289 = AsmNLLOCR
  { 290,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo43 },  // Inst #290 = AsmNLSTOC
  { 291,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo44 },  // Inst #291 = AsmNLSTOCG
  { 292,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #292 = AsmNOJ
  { 293,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #293 = AsmNOJG
  { 294,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo41 },  // Inst #294 = AsmNOLOC
  { 295,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo42 },  // Inst #295 = AsmNOLOCG
  { 296,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #296 = AsmNOLOCGR
  { 297,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #297 = AsmNOLOCR
  { 298,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo43 },  // Inst #298 = AsmNOSTOC
  { 299,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo44 },  // Inst #299 = AsmNOSTOCG
  { 300,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #300 = AsmOJ
  { 301,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #301 = AsmOJG
  { 302,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo41 },  // Inst #302 = AsmOLOC
  { 303,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo42 },  // Inst #303 = AsmOLOCG
  { 304,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #304 = AsmOLOCGR
  { 305,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #305 = AsmOLOCR
  { 306,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, NULL, NULL, OperandInfo43 },  // Inst #306 = AsmOSTOC
  { 307,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, NULL, NULL, OperandInfo44 },  // Inst #307 = AsmOSTOCG
  { 308,	4,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, ImplicitList1, NULL, OperandInfo30 },  // Inst #308 = AsmSTOC
  { 309,	4,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, ImplicitList1, NULL, OperandInfo31 },  // Inst #309 = AsmSTOCG
  { 310,	1,	0,	0,	2,	0|(1<<MCID::Call)|(1<<MCID::Variadic), 0x0ULL, NULL, ImplicitList2, OperandInfo51 },  // Inst #310 = BASR
  { 311,	1,	0,	0,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, OperandInfo51 },  // Inst #311 = BR
  { 312,	1,	0,	0,	4,	0|(1<<MCID::Call)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList2, OperandInfo5 },  // Inst #312 = BRAS
  { 313,	1,	0,	0,	6,	0|(1<<MCID::Call)|(1<<MCID::Variadic), 0x0ULL, NULL, ImplicitList2, OperandInfo5 },  // Inst #313 = BRASL
  { 314,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x40000ULL, ImplicitList1, NULL, OperandInfo52 },  // Inst #314 = BRC
  { 315,	3,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x40000ULL, ImplicitList1, NULL, OperandInfo52 },  // Inst #315 = BRCL
  { 316,	3,	1,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #316 = BRCT
  { 317,	3,	1,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #317 = BRCTG
  { 318,	4,	0,	0,	4,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x3888ULL, NULL, ImplicitList1, OperandInfo53 },  // Inst #318 = C
  { 319,	4,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x3d08ULL, NULL, ImplicitList1, OperandInfo54 },  // Inst #319 = CDB
  { 320,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x3c00ULL, NULL, ImplicitList1, OperandInfo55 },  // Inst #320 = CDBR
  { 321,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo56 },  // Inst #321 = CDFBR
  { 322,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo57 },  // Inst #322 = CDGBR
  { 323,	4,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x3c88ULL, NULL, ImplicitList1, OperandInfo58 },  // Inst #323 = CEB
  { 324,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x3c00ULL, NULL, ImplicitList1, OperandInfo59 },  // Inst #324 = CEBR
  { 325,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo60 },  // Inst #325 = CEFBR
  { 326,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo61 },  // Inst #326 = CEGBR
  { 327,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo62 },  // Inst #327 = CFDBR
  { 328,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo63 },  // Inst #328 = CFEBR
  { 329,	2,	0,	0,	6,	0|(1<<MCID::Compare), 0x3800ULL, NULL, ImplicitList1, OperandInfo64 },  // Inst #329 = CFI
  { 330,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo65 },  // Inst #330 = CFXBR
  { 331,	4,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x390cULL, NULL, ImplicitList1, OperandInfo12 },  // Inst #331 = CG
  { 332,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo66 },  // Inst #332 = CGDBR
  { 333,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo67 },  // Inst #333 = CGEBR
  { 334,	4,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x388cULL, NULL, ImplicitList1, OperandInfo12 },  // Inst #334 = CGF
  { 335,	2,	0,	0,	6,	0|(1<<MCID::Compare), 0x3800ULL, NULL, ImplicitList1, OperandInfo36 },  // Inst #335 = CGFI
  { 336,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x3800ULL, NULL, ImplicitList1, OperandInfo68 },  // Inst #336 = CGFR
  { 337,	2,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x3800ULL, NULL, ImplicitList1, OperandInfo36 },  // Inst #337 = CGFRL
  { 338,	4,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x384cULL, NULL, ImplicitList1, OperandInfo12 },  // Inst #338 = CGH
  { 339,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x3800ULL, NULL, ImplicitList1, OperandInfo36 },  // Inst #339 = CGHI
  { 340,	2,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x3800ULL, NULL, ImplicitList1, OperandInfo36 },  // Inst #340 = CGHRL
  { 341,	3,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x3800ULL, NULL, ImplicitList1, OperandInfo23 },  // Inst #341 = CGHSI
  { 342,	4,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo37 },  // Inst #342 = CGIJ
  { 343,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x3800ULL, NULL, ImplicitList1, OperandInfo69 },  // Inst #343 = CGR
  { 344,	4,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo38 },  // Inst #344 = CGRJ
  { 345,	2,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x3800ULL, NULL, ImplicitList1, OperandInfo36 },  // Inst #345 = CGRL
  { 346,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo70 },  // Inst #346 = CGXBR
  { 347,	4,	0,	0,	4,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x3848ULL, NULL, ImplicitList1, OperandInfo53 },  // Inst #347 = CH
  { 348,	3,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x3800ULL, NULL, ImplicitList1, OperandInfo23 },  // Inst #348 = CHHSI
  { 349,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x3800ULL, NULL, ImplicitList1, OperandInfo64 },  // Inst #349 = CHI
  { 350,	2,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x3800ULL, NULL, ImplicitList1, OperandInfo64 },  // Inst #350 = CHRL
  { 351,	3,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x3800ULL, NULL, ImplicitList1, OperandInfo23 },  // Inst #351 = CHSI
  { 352,	4,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x384cULL, NULL, ImplicitList1, OperandInfo53 },  // Inst #352 = CHY
  { 353,	4,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo39 },  // Inst #353 = CIJ
  { 354,	4,	0,	0,	4,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x103888ULL, NULL, ImplicitList1, OperandInfo53 },  // Inst #354 = CL
  { 355,	3,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x103800ULL, NULL, ImplicitList1, OperandInfo23 },  // Inst #355 = CLFHSI
  { 356,	2,	0,	0,	6,	0|(1<<MCID::Compare), 0x103800ULL, NULL, ImplicitList1, OperandInfo64 },  // Inst #356 = CLFI
  { 357,	4,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x10390cULL, NULL, ImplicitList1, OperandInfo12 },  // Inst #357 = CLG
  { 358,	4,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x10388cULL, NULL, ImplicitList1, OperandInfo12 },  // Inst #358 = CLGF
  { 359,	2,	0,	0,	6,	0|(1<<MCID::Compare), 0x103800ULL, NULL, ImplicitList1, OperandInfo36 },  // Inst #359 = CLGFI
  { 360,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x103800ULL, NULL, ImplicitList1, OperandInfo68 },  // Inst #360 = CLGFR
  { 361,	2,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x103800ULL, NULL, ImplicitList1, OperandInfo36 },  // Inst #361 = CLGFRL
  { 362,	2,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x103800ULL, NULL, ImplicitList1, OperandInfo36 },  // Inst #362 = CLGHRL
  { 363,	3,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x103800ULL, NULL, ImplicitList1, OperandInfo23 },  // Inst #363 = CLGHSI
  { 364,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x103800ULL, NULL, ImplicitList1, OperandInfo69 },  // Inst #364 = CLGR
  { 365,	2,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x103800ULL, NULL, ImplicitList1, OperandInfo36 },  // Inst #365 = CLGRL
  { 366,	3,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x103800ULL, NULL, ImplicitList1, OperandInfo23 },  // Inst #366 = CLHHSI
  { 367,	2,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x103800ULL, NULL, ImplicitList1, OperandInfo64 },  // Inst #367 = CLHRL
  { 368,	3,	0,	0,	4,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x103800ULL, NULL, ImplicitList1, OperandInfo23 },  // Inst #368 = CLI
  { 369,	3,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x103804ULL, NULL, ImplicitList1, OperandInfo23 },  // Inst #369 = CLIY
  { 370,	2,	0,	0,	2,	0|(1<<MCID::Compare), 0x103800ULL, NULL, ImplicitList1, OperandInfo71 },  // Inst #370 = CLR
  { 371,	2,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x103800ULL, NULL, ImplicitList1, OperandInfo64 },  // Inst #371 = CLRL
  { 372,	4,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x10388cULL, NULL, ImplicitList1, OperandInfo53 },  // Inst #372 = CLY
  { 373,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo72 },  // Inst #373 = CPSDRdd
  { 374,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo73 },  // Inst #374 = CPSDRds
  { 375,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo74 },  // Inst #375 = CPSDRsd
  { 376,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo75 },  // Inst #376 = CPSDRss
  { 377,	2,	0,	0,	2,	0|(1<<MCID::Compare), 0x3800ULL, NULL, ImplicitList1, OperandInfo71 },  // Inst #377 = CR
  { 378,	4,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo40 },  // Inst #378 = CRJ
  { 379,	2,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x3800ULL, NULL, ImplicitList1, OperandInfo64 },  // Inst #379 = CRL
  { 380,	5,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x0ULL, NULL, ImplicitList1, OperandInfo76 },  // Inst #380 = CS
  { 381,	5,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x4ULL, NULL, ImplicitList1, OperandInfo77 },  // Inst #381 = CSG
  { 382,	5,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x4ULL, NULL, ImplicitList1, OperandInfo76 },  // Inst #382 = CSY
  { 383,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x3c00ULL, NULL, ImplicitList1, OperandInfo78 },  // Inst #383 = CXBR
  { 384,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo79 },  // Inst #384 = CXFBR
  { 385,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo80 },  // Inst #385 = CXGBR
  { 386,	4,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x388cULL, NULL, ImplicitList1, OperandInfo53 },  // Inst #386 = CY
  { 387,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo81 },  // Inst #387 = CondStore16
  { 388,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo81 },  // Inst #388 = CondStore16Inv
  { 389,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo82 },  // Inst #389 = CondStore16_32
  { 390,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo82 },  // Inst #390 = CondStore16_32Inv
  { 391,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo81 },  // Inst #391 = CondStore32
  { 392,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo81 },  // Inst #392 = CondStore32Inv
  { 393,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo82 },  // Inst #393 = CondStore32_32
  { 394,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo82 },  // Inst #394 = CondStore32_32Inv
  { 395,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo81 },  // Inst #395 = CondStore64
  { 396,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo81 },  // Inst #396 = CondStore64Inv
  { 397,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo81 },  // Inst #397 = CondStore8
  { 398,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo81 },  // Inst #398 = CondStore8Inv
  { 399,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo82 },  // Inst #399 = CondStore8_32
  { 400,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo82 },  // Inst #400 = CondStore8_32Inv
  { 401,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo83 },  // Inst #401 = CondStoreF32
  { 402,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo83 },  // Inst #402 = CondStoreF32Inv
  { 403,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo84 },  // Inst #403 = CondStoreF64
  { 404,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo84 },  // Inst #404 = CondStoreF64Inv
  { 405,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x108ULL, NULL, NULL, OperandInfo9 },  // Inst #405 = DDB
  { 406,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #406 = DDBR
  { 407,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x88ULL, NULL, NULL, OperandInfo13 },  // Inst #407 = DEB
  { 408,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #408 = DEBR
  { 409,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, NULL, NULL, OperandInfo85 },  // Inst #409 = DL
  { 410,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x10cULL, NULL, NULL, OperandInfo85 },  // Inst #410 = DLG
  { 411,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo86 },  // Inst #411 = DLGR
  { 412,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo87 },  // Inst #412 = DLR
  { 413,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x10cULL, NULL, NULL, OperandInfo85 },  // Inst #413 = DSG
  { 414,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, NULL, NULL, OperandInfo85 },  // Inst #414 = DSGF
  { 415,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo87 },  // Inst #415 = DSGFR
  { 416,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo86 },  // Inst #416 = DSGR
  { 417,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo34 },  // Inst #417 = DXBR
  { 418,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo64 },  // Inst #418 = EAR
  { 419,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo88 },  // Inst #419 = FIDBR
  { 420,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo89 },  // Inst #420 = FIEBR
  { 421,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #421 = FIXBR
  { 422,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo15 },  // Inst #422 = FLOGR
  { 423,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x28ULL, NULL, NULL, OperandInfo17 },  // Inst #423 = IC
  { 424,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x28ULL, NULL, NULL, OperandInfo8 },  // Inst #424 = IC32
  { 425,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2cULL, NULL, NULL, OperandInfo8 },  // Inst #425 = IC32Y
  { 426,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2cULL, NULL, NULL, OperandInfo17 },  // Inst #426 = ICY
  { 427,	3,	1,	0,	6,	0, 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #427 = IIHF
  { 428,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #428 = IIHH
  { 429,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #429 = IIHL
  { 430,	3,	1,	0,	6,	0, 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #430 = IILF
  { 431,	2,	1,	0,	6,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo64 },  // Inst #431 = IILF32
  { 432,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #432 = IILH
  { 433,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #433 = IILH32
  { 434,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #434 = IILL
  { 435,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #435 = IILL32
  { 436,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #436 = J
  { 437,	1,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #437 = JG
  { 438,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x89ULL, NULL, NULL, OperandInfo53 },  // Inst #438 = L
  { 439,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x1dULL, NULL, NULL, OperandInfo91 },  // Inst #439 = L128
  { 440,	4,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x8ULL, NULL, NULL, OperandInfo12 },  // Inst #440 = LA
  { 441,	2,	1,	0,	6,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #441 = LARL
  { 442,	4,	1,	0,	6,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0xcULL, NULL, NULL, OperandInfo12 },  // Inst #442 = LAY
  { 443,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2cULL, NULL, NULL, OperandInfo53 },  // Inst #443 = LB
  { 444,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo71 },  // Inst #444 = LBR
  { 445,	2,	1,	0,	4,	0, 0x3fc00ULL, NULL, ImplicitList1, OperandInfo55 },  // Inst #445 = LCDBR
  { 446,	2,	1,	0,	4,	0, 0x3fc00ULL, NULL, ImplicitList1, OperandInfo59 },  // Inst #446 = LCEBR
  { 447,	2,	1,	0,	4,	0, 0x3b800ULL, NULL, ImplicitList1, OperandInfo68 },  // Inst #447 = LCGFR
  { 448,	2,	1,	0,	4,	0, 0x23c00ULL, NULL, ImplicitList1, OperandInfo69 },  // Inst #448 = LCGR
  { 449,	2,	1,	0,	2,	0, 0x23c00ULL, NULL, ImplicitList1, OperandInfo71 },  // Inst #449 = LCR
  { 450,	2,	1,	0,	4,	0, 0x3fc00ULL, NULL, ImplicitList1, OperandInfo78 },  // Inst #450 = LCXBR
  { 451,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x109ULL, NULL, NULL, OperandInfo54 },  // Inst #451 = LD
  { 452,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x88ULL, NULL, NULL, OperandInfo54 },  // Inst #452 = LDEB
  { 453,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo92 },  // Inst #453 = LDEBR
  { 454,	2,	1,	0,	4,	0|(1<<MCID::Bitcast), 0x0ULL, NULL, NULL, OperandInfo57 },  // Inst #454 = LDGR
  { 455,	2,	1,	0,	2,	0, 0x0ULL, NULL, NULL, OperandInfo55 },  // Inst #455 = LDR
  { 456,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo78 },  // Inst #456 = LDXBR
  { 457,	4,	1,	0,	6,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10dULL, NULL, NULL, OperandInfo54 },  // Inst #457 = LDY
  { 458,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x89ULL, NULL, NULL, OperandInfo58 },  // Inst #458 = LE
  { 459,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo93 },  // Inst #459 = LEDBR
  { 460,	2,	1,	0,	2,	0, 0x0ULL, NULL, NULL, OperandInfo59 },  // Inst #460 = LER
  { 461,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo78 },  // Inst #461 = LEXBR
  { 462,	4,	1,	0,	6,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x8dULL, NULL, NULL, OperandInfo58 },  // Inst #462 = LEY
  { 463,	4,	1,	0,	6,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10dULL, NULL, NULL, OperandInfo12 },  // Inst #463 = LG
  { 464,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2cULL, NULL, NULL, OperandInfo12 },  // Inst #464 = LGB
  { 465,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo69 },  // Inst #465 = LGBR
  { 466,	2,	1,	0,	4,	0|(1<<MCID::Bitcast), 0x0ULL, NULL, NULL, OperandInfo94 },  // Inst #466 = LGDR
  { 467,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, NULL, NULL, OperandInfo12 },  // Inst #467 = LGF
  { 468,	2,	1,	0,	6,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #468 = LGFI
  { 469,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo68 },  // Inst #469 = LGFR
  { 470,	2,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #470 = LGFRL
  { 471,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x4cULL, NULL, NULL, OperandInfo12 },  // Inst #471 = LGH
  { 472,	2,	1,	0,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #472 = LGHI
  { 473,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo69 },  // Inst #473 = LGHR
  { 474,	2,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #474 = LGHRL
  { 475,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo69 },  // Inst #475 = LGR
  { 476,	2,	1,	0,	6,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #476 = LGRL
  { 477,	4,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x48ULL, NULL, NULL, OperandInfo53 },  // Inst #477 = LH
  { 478,	2,	1,	0,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo64 },  // Inst #478 = LHI
  { 479,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo71 },  // Inst #479 = LHR
  { 480,	2,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo64 },  // Inst #480 = LHRL
  { 481,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x4cULL, NULL, NULL, OperandInfo53 },  // Inst #481 = LHY
  { 482,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2cULL, NULL, NULL, OperandInfo53 },  // Inst #482 = LLC
  { 483,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo71 },  // Inst #483 = LLCR
  { 484,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2cULL, NULL, NULL, OperandInfo12 },  // Inst #484 = LLGC
  { 485,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo69 },  // Inst #485 = LLGCR
  { 486,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, NULL, NULL, OperandInfo12 },  // Inst #486 = LLGF
  { 487,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo68 },  // Inst #487 = LLGFR
  { 488,	2,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #488 = LLGFRL
  { 489,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x4cULL, NULL, NULL, OperandInfo12 },  // Inst #489 = LLGH
  { 490,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo69 },  // Inst #490 = LLGHR
  { 491,	2,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #491 = LLGHRL
  { 492,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x4cULL, NULL, NULL, OperandInfo53 },  // Inst #492 = LLH
  { 493,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo71 },  // Inst #493 = LLHR
  { 494,	2,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo64 },  // Inst #494 = LLHRL
  { 495,	2,	1,	0,	6,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #495 = LLIHF
  { 496,	2,	1,	0,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #496 = LLIHH
  { 497,	2,	1,	0,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #497 = LLIHL
  { 498,	2,	1,	0,	6,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #498 = LLILF
  { 499,	2,	1,	0,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #499 = LLILH
  { 500,	2,	1,	0,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #500 = LLILL
  { 501,	4,	2,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo95 },  // Inst #501 = LMG
  { 502,	2,	1,	0,	4,	0, 0x3fc00ULL, NULL, ImplicitList1, OperandInfo55 },  // Inst #502 = LNDBR
  { 503,	2,	1,	0,	4,	0, 0x3fc00ULL, NULL, ImplicitList1, OperandInfo59 },  // Inst #503 = LNEBR
  { 504,	2,	1,	0,	4,	0, 0x3fc00ULL, NULL, ImplicitList1, OperandInfo78 },  // Inst #504 = LNXBR
  { 505,	6,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x80084ULL, ImplicitList1, NULL, OperandInfo96 },  // Inst #505 = LOC
  { 506,	6,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x80104ULL, ImplicitList1, NULL, OperandInfo97 },  // Inst #506 = LOCG
  { 507,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x80000ULL, ImplicitList1, NULL, OperandInfo38 },  // Inst #507 = LOCGR
  { 508,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x80000ULL, ImplicitList1, NULL, OperandInfo40 },  // Inst #508 = LOCR
  { 509,	2,	1,	0,	4,	0, 0x3fc00ULL, NULL, ImplicitList1, OperandInfo55 },  // Inst #509 = LPDBR
  { 510,	2,	1,	0,	4,	0, 0x3fc00ULL, NULL, ImplicitList1, OperandInfo59 },  // Inst #510 = LPEBR
  { 511,	2,	1,	0,	4,	0, 0x3fc00ULL, NULL, ImplicitList1, OperandInfo78 },  // Inst #511 = LPXBR
  { 512,	2,	1,	0,	2,	0, 0x0ULL, NULL, NULL, OperandInfo71 },  // Inst #512 = LR
  { 513,	2,	1,	0,	6,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo64 },  // Inst #513 = LRL
  { 514,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, NULL, NULL, OperandInfo53 },  // Inst #514 = LRV
  { 515,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x10cULL, NULL, NULL, OperandInfo12 },  // Inst #515 = LRVG
  { 516,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo69 },  // Inst #516 = LRVGR
  { 517,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo71 },  // Inst #517 = LRVR
  { 518,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x3b88cULL, NULL, ImplicitList1, OperandInfo53 },  // Inst #518 = LT
  { 519,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x3fc00ULL, NULL, ImplicitList1, OperandInfo55 },  // Inst #519 = LTDBR
  { 520,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x3fc00ULL, NULL, ImplicitList1, OperandInfo55 },  // Inst #520 = LTDBRCompare
  { 521,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x3fc00ULL, NULL, ImplicitList1, OperandInfo59 },  // Inst #521 = LTEBR
  { 522,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x3fc00ULL, NULL, ImplicitList1, OperandInfo59 },  // Inst #522 = LTEBRCompare
  { 523,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x3b90cULL, NULL, ImplicitList1, OperandInfo12 },  // Inst #523 = LTG
  { 524,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x3b88cULL, NULL, ImplicitList1, OperandInfo12 },  // Inst #524 = LTGF
  { 525,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x3b800ULL, NULL, ImplicitList1, OperandInfo69 },  // Inst #525 = LTGFR
  { 526,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x3b800ULL, NULL, ImplicitList1, OperandInfo69 },  // Inst #526 = LTGR
  { 527,	2,	1,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x3b800ULL, NULL, ImplicitList1, OperandInfo71 },  // Inst #527 = LTR
  { 528,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x3fc00ULL, NULL, ImplicitList1, OperandInfo78 },  // Inst #528 = LTXBR
  { 529,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x3fc00ULL, NULL, ImplicitList1, OperandInfo78 },  // Inst #529 = LTXBRCompare
  { 530,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x1dULL, NULL, NULL, OperandInfo98 },  // Inst #530 = LX
  { 531,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x108ULL, NULL, NULL, OperandInfo98 },  // Inst #531 = LXDB
  { 532,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo99 },  // Inst #532 = LXDBR
  { 533,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x88ULL, NULL, NULL, OperandInfo98 },  // Inst #533 = LXEB
  { 534,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo100 },  // Inst #534 = LXEBR
  { 535,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo78 },  // Inst #535 = LXR
  { 536,	4,	1,	0,	6,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x8dULL, NULL, NULL, OperandInfo53 },  // Inst #536 = LY
  { 537,	1,	1,	0,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo101 },  // Inst #537 = LZDR
  { 538,	1,	1,	0,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo102 },  // Inst #538 = LZER
  { 539,	1,	1,	0,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo103 },  // Inst #539 = LZXR
  { 540,	6,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x108ULL, NULL, NULL, OperandInfo104 },  // Inst #540 = MADB
  { 541,	4,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo105 },  // Inst #541 = MADBR
  { 542,	6,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x88ULL, NULL, NULL, OperandInfo106 },  // Inst #542 = MAEB
  { 543,	4,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo107 },  // Inst #543 = MAEBR
  { 544,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x108ULL, NULL, NULL, OperandInfo9 },  // Inst #544 = MDB
  { 545,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #545 = MDBR
  { 546,	5,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x88ULL, NULL, NULL, OperandInfo9 },  // Inst #546 = MDEB
  { 547,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo108 },  // Inst #547 = MDEBR
  { 548,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x88ULL, NULL, NULL, OperandInfo13 },  // Inst #548 = MEEB
  { 549,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #549 = MEEBR
  { 550,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #550 = MGHI
  { 551,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x48ULL, NULL, NULL, OperandInfo8 },  // Inst #551 = MH
  { 552,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #552 = MHI
  { 553,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x4cULL, NULL, NULL, OperandInfo8 },  // Inst #553 = MHY
  { 554,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x10cULL, NULL, NULL, OperandInfo85 },  // Inst #554 = MLG
  { 555,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo86 },  // Inst #555 = MLGR
  { 556,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x88ULL, NULL, NULL, OperandInfo8 },  // Inst #556 = MS
  { 557,	6,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x108ULL, NULL, NULL, OperandInfo104 },  // Inst #557 = MSDB
  { 558,	4,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo105 },  // Inst #558 = MSDBR
  { 559,	6,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x88ULL, NULL, NULL, OperandInfo106 },  // Inst #559 = MSEB
  { 560,	4,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo107 },  // Inst #560 = MSEBR
  { 561,	3,	1,	0,	6,	0, 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #561 = MSFI
  { 562,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x10cULL, NULL, NULL, OperandInfo17 },  // Inst #562 = MSG
  { 563,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, NULL, NULL, OperandInfo17 },  // Inst #563 = MSGF
  { 564,	3,	1,	0,	6,	0, 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #564 = MSGFI
  { 565,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #565 = MSGFR
  { 566,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #566 = MSGR
  { 567,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #567 = MSR
  { 568,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, NULL, NULL, OperandInfo8 },  // Inst #568 = MSY
  { 569,	5,	0,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo109 },  // Inst #569 = MVC
  { 570,	5,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo110 },  // Inst #570 = MVCWrapper
  { 571,	3,	0,	0,	6,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #571 = MVGHI
  { 572,	3,	0,	0,	6,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #572 = MVHHI
  { 573,	3,	0,	0,	6,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #573 = MVHI
  { 574,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #574 = MVI
  { 575,	3,	0,	0,	6,	0|(1<<MCID::MayStore), 0x4ULL, NULL, NULL, OperandInfo23 },  // Inst #575 = MVIY
  { 576,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x0ULL, NULL, NULL, OperandInfo34 },  // Inst #576 = MXBR
  { 577,	5,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x108ULL, NULL, NULL, OperandInfo111 },  // Inst #577 = MXDB
  { 578,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo112 },  // Inst #578 = MXDBR
  { 579,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x23088ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #579 = N
  { 580,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2310cULL, NULL, ImplicitList1, OperandInfo17 },  // Inst #580 = NG
  { 581,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr)|(1<<MCID::Commutable), 0x23000ULL, NULL, ImplicitList1, OperandInfo21 },  // Inst #581 = NGR
  { 582,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x23000ULL, NULL, ImplicitList1, OperandInfo22 },  // Inst #582 = NGRK
  { 583,	3,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x0ULL, NULL, ImplicitList1, OperandInfo23 },  // Inst #583 = NI
  { 584,	3,	1,	0,	6,	0|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #584 = NIHF
  { 585,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #585 = NIHH
  { 586,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #586 = NIHL
  { 587,	3,	1,	0,	6,	0|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #587 = NILF
  { 588,	3,	1,	0,	6,	0|(1<<MCID::ConvertibleTo3Addr), 0x23000ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #588 = NILF32
  { 589,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #589 = NILH
  { 590,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #590 = NILH32
  { 591,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #591 = NILL
  { 592,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #592 = NILL32
  { 593,	3,	0,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x4ULL, NULL, ImplicitList1, OperandInfo23 },  // Inst #593 = NIY
  { 594,	3,	1,	0,	2,	0|(1<<MCID::ConvertibleTo3Addr)|(1<<MCID::Commutable), 0x23000ULL, NULL, ImplicitList1, OperandInfo25 },  // Inst #594 = NR
  { 595,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x23000ULL, NULL, ImplicitList1, OperandInfo26 },  // Inst #595 = NRK
  { 596,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2308cULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #596 = NY
  { 597,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x23088ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #597 = O
  { 598,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2310cULL, NULL, ImplicitList1, OperandInfo17 },  // Inst #598 = OG
  { 599,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr)|(1<<MCID::Commutable), 0x23000ULL, NULL, ImplicitList1, OperandInfo21 },  // Inst #599 = OGR
  { 600,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x23000ULL, NULL, ImplicitList1, OperandInfo22 },  // Inst #600 = OGRK
  { 601,	3,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x0ULL, NULL, ImplicitList1, OperandInfo23 },  // Inst #601 = OI
  { 602,	3,	1,	0,	6,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #602 = OIHF
  { 603,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #603 = OIHH
  { 604,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #604 = OIHL
  { 605,	3,	1,	0,	6,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #605 = OILF
  { 606,	3,	1,	0,	6,	0, 0x23000ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #606 = OILF32
  { 607,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #607 = OILH
  { 608,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #608 = OILH32
  { 609,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #609 = OILL
  { 610,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #610 = OILL32
  { 611,	3,	0,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x4ULL, NULL, ImplicitList1, OperandInfo23 },  // Inst #611 = OIY
  { 612,	3,	1,	0,	2,	0|(1<<MCID::ConvertibleTo3Addr)|(1<<MCID::Commutable), 0x23000ULL, NULL, ImplicitList1, OperandInfo25 },  // Inst #612 = OR
  { 613,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x23000ULL, NULL, ImplicitList1, OperandInfo26 },  // Inst #613 = ORK
  { 614,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2308cULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #614 = OY
  { 615,	0,	0,	0,	2,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, 0 },  // Inst #615 = RET
  { 616,	6,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x3b800ULL, NULL, ImplicitList1, OperandInfo113 },  // Inst #616 = RISBG
  { 617,	6,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo114 },  // Inst #617 = RISBG32
  { 618,	6,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo113 },  // Inst #618 = RISBHG
  { 619,	6,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo113 },  // Inst #619 = RISBLG
  { 620,	6,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo114 },  // Inst #620 = RISBLG32
  { 621,	4,	1,	0,	6,	0, 0x4ULL, NULL, NULL, OperandInfo115 },  // Inst #621 = RLL
  { 622,	4,	1,	0,	6,	0, 0x4ULL, NULL, NULL, OperandInfo116 },  // Inst #622 = RLLG
  { 623,	6,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo113 },  // Inst #623 = RNSBG
  { 624,	6,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo113 },  // Inst #624 = ROSBG
  { 625,	6,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo113 },  // Inst #625 = RXSBG
  { 626,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x23c88ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #626 = S
  { 627,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x3fd08ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #627 = SDB
  { 628,	3,	1,	0,	4,	0, 0x3fc00ULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #628 = SDBR
  { 629,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x3fc88ULL, NULL, ImplicitList1, OperandInfo13 },  // Inst #629 = SEB
  { 630,	3,	1,	0,	4,	0, 0x3fc00ULL, NULL, ImplicitList1, OperandInfo14 },  // Inst #630 = SEBR
  { 631,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x23d0cULL, NULL, ImplicitList1, OperandInfo17 },  // Inst #631 = SG
  { 632,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x23c8cULL, NULL, ImplicitList1, OperandInfo17 },  // Inst #632 = SGF
  { 633,	3,	1,	0,	4,	0, 0x23c00ULL, NULL, ImplicitList1, OperandInfo19 },  // Inst #633 = SGFR
  { 634,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr), 0x23c00ULL, NULL, ImplicitList1, OperandInfo21 },  // Inst #634 = SGR
  { 635,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x23c00ULL, NULL, ImplicitList1, OperandInfo22 },  // Inst #635 = SGRK
  { 636,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x23c48ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #636 = SH
  { 637,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x23c4cULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #637 = SHY
  { 638,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x88ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #638 = SL
  { 639,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, ImplicitList1, ImplicitList1, OperandInfo8 },  // Inst #639 = SLB
  { 640,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x10cULL, ImplicitList1, ImplicitList1, OperandInfo17 },  // Inst #640 = SLBG
  { 641,	3,	1,	0,	4,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo25 },  // Inst #641 = SLBR
  { 642,	3,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #642 = SLFI
  { 643,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x10cULL, NULL, ImplicitList1, OperandInfo17 },  // Inst #643 = SLG
  { 644,	3,	1,	0,	4,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo21 },  // Inst #644 = SLGBR
  { 645,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, NULL, ImplicitList1, OperandInfo17 },  // Inst #645 = SLGF
  { 646,	3,	1,	0,	6,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #646 = SLGFI
  { 647,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo19 },  // Inst #647 = SLGFR
  { 648,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, NULL, ImplicitList1, OperandInfo21 },  // Inst #648 = SLGR
  { 649,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo22 },  // Inst #649 = SLGRK
  { 650,	4,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, NULL, NULL, OperandInfo117 },  // Inst #650 = SLL
  { 651,	4,	1,	0,	6,	0, 0x4ULL, NULL, NULL, OperandInfo116 },  // Inst #651 = SLLG
  { 652,	4,	1,	0,	6,	0, 0x4ULL, NULL, NULL, OperandInfo115 },  // Inst #652 = SLLK
  { 653,	3,	1,	0,	2,	0|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, NULL, ImplicitList1, OperandInfo25 },  // Inst #653 = SLR
  { 654,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo26 },  // Inst #654 = SLRK
  { 655,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #655 = SLY
  { 656,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x108ULL, NULL, NULL, OperandInfo54 },  // Inst #656 = SQDB
  { 657,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo55 },  // Inst #657 = SQDBR
  { 658,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x88ULL, NULL, NULL, OperandInfo58 },  // Inst #658 = SQEB
  { 659,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo59 },  // Inst #659 = SQEBR
  { 660,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo78 },  // Inst #660 = SQXBR
  { 661,	3,	1,	0,	2,	0|(1<<MCID::ConvertibleTo3Addr), 0x23c00ULL, NULL, ImplicitList1, OperandInfo25 },  // Inst #661 = SR
  { 662,	4,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr), 0x3b800ULL, NULL, ImplicitList1, OperandInfo117 },  // Inst #662 = SRA
  { 663,	4,	1,	0,	6,	0, 0x3b804ULL, NULL, ImplicitList1, OperandInfo116 },  // Inst #663 = SRAG
  { 664,	4,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x3b804ULL, NULL, ImplicitList1, OperandInfo115 },  // Inst #664 = SRAK
  { 665,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x23c00ULL, NULL, ImplicitList1, OperandInfo26 },  // Inst #665 = SRK
  { 666,	4,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, NULL, NULL, OperandInfo117 },  // Inst #666 = SRL
  { 667,	4,	1,	0,	6,	0, 0x4ULL, NULL, NULL, OperandInfo116 },  // Inst #667 = SRLG
  { 668,	4,	1,	0,	6,	0, 0x4ULL, NULL, NULL, OperandInfo115 },  // Inst #668 = SRLK
  { 669,	4,	0,	0,	4,	0|(1<<MCID::MayStore), 0x88ULL, NULL, NULL, OperandInfo12 },  // Inst #669 = ST
  { 670,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore), 0x1eULL, NULL, NULL, OperandInfo91 },  // Inst #670 = ST128
  { 671,	4,	0,	0,	4,	0|(1<<MCID::MayStore), 0x8aULL, NULL, NULL, OperandInfo53 },  // Inst #671 = ST32
  { 672,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0x8eULL, NULL, NULL, OperandInfo53 },  // Inst #672 = ST32Y
  { 673,	4,	0,	0,	4,	0|(1<<MCID::MayStore), 0x28ULL, NULL, NULL, OperandInfo12 },  // Inst #673 = STC
  { 674,	4,	0,	0,	4,	0|(1<<MCID::MayStore), 0x28ULL, NULL, NULL, OperandInfo53 },  // Inst #674 = STC32
  { 675,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0x2cULL, NULL, NULL, OperandInfo53 },  // Inst #675 = STC32Y
  { 676,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0x2cULL, NULL, NULL, OperandInfo12 },  // Inst #676 = STCY
  { 677,	4,	0,	0,	4,	0|(1<<MCID::MayStore), 0x10aULL, NULL, NULL, OperandInfo54 },  // Inst #677 = STD
  { 678,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0x10eULL, NULL, NULL, OperandInfo54 },  // Inst #678 = STDY
  { 679,	4,	0,	0,	4,	0|(1<<MCID::MayStore), 0x8aULL, NULL, NULL, OperandInfo58 },  // Inst #679 = STE
  { 680,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0x8eULL, NULL, NULL, OperandInfo58 },  // Inst #680 = STEY
  { 681,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0x10eULL, NULL, NULL, OperandInfo12 },  // Inst #681 = STG
  { 682,	2,	0,	0,	6,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #682 = STGRL
  { 683,	4,	0,	0,	4,	0|(1<<MCID::MayStore), 0x48ULL, NULL, NULL, OperandInfo12 },  // Inst #683 = STH
  { 684,	4,	0,	0,	4,	0|(1<<MCID::MayStore), 0x48ULL, NULL, NULL, OperandInfo53 },  // Inst #684 = STH32
  { 685,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0x4cULL, NULL, NULL, OperandInfo53 },  // Inst #685 = STH32Y
  { 686,	2,	0,	0,	6,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #686 = STHRL
  { 687,	2,	0,	0,	6,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo64 },  // Inst #687 = STHRL32
  { 688,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0x4cULL, NULL, NULL, OperandInfo12 },  // Inst #688 = STHY
  { 689,	4,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo95 },  // Inst #689 = STMG
  { 690,	5,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x80084ULL, ImplicitList1, NULL, OperandInfo118 },  // Inst #690 = STOC
  { 691,	5,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x80084ULL, ImplicitList1, NULL, OperandInfo119 },  // Inst #691 = STOC32
  { 692,	5,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x80104ULL, ImplicitList1, NULL, OperandInfo118 },  // Inst #692 = STOCG
  { 693,	2,	0,	0,	6,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #693 = STRL
  { 694,	2,	0,	0,	6,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo64 },  // Inst #694 = STRL32
  { 695,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0x8cULL, NULL, NULL, OperandInfo53 },  // Inst #695 = STRV
  { 696,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0x10cULL, NULL, NULL, OperandInfo12 },  // Inst #696 = STRVG
  { 697,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore), 0x1eULL, NULL, NULL, OperandInfo98 },  // Inst #697 = STX
  { 698,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0x8cULL, NULL, NULL, OperandInfo12 },  // Inst #698 = STY
  { 699,	3,	1,	0,	4,	0, 0x3fc00ULL, NULL, ImplicitList1, OperandInfo34 },  // Inst #699 = SXBR
  { 700,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x23c8cULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #700 = SY
  { 701,	5,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo120 },  // Inst #701 = Select32
  { 702,	5,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo121 },  // Inst #702 = Select64
  { 703,	5,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo122 },  // Inst #703 = SelectF128
  { 704,	5,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo123 },  // Inst #704 = SelectF32
  { 705,	5,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo124 },  // Inst #705 = SelectF64
  { 706,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x23088ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #706 = X
  { 707,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2310cULL, NULL, ImplicitList1, OperandInfo17 },  // Inst #707 = XG
  { 708,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr)|(1<<MCID::Commutable), 0x23000ULL, NULL, ImplicitList1, OperandInfo21 },  // Inst #708 = XGR
  { 709,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x23000ULL, NULL, ImplicitList1, OperandInfo22 },  // Inst #709 = XGRK
  { 710,	3,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x0ULL, NULL, ImplicitList1, OperandInfo23 },  // Inst #710 = XI
  { 711,	3,	1,	0,	6,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #711 = XIHF
  { 712,	3,	1,	0,	6,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #712 = XILF
  { 713,	3,	1,	0,	6,	0, 0x23000ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #713 = XILF32
  { 714,	3,	0,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x4ULL, NULL, ImplicitList1, OperandInfo23 },  // Inst #714 = XIY
  { 715,	3,	1,	0,	2,	0|(1<<MCID::ConvertibleTo3Addr)|(1<<MCID::Commutable), 0x23000ULL, NULL, ImplicitList1, OperandInfo25 },  // Inst #715 = XR
  { 716,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x23000ULL, NULL, ImplicitList1, OperandInfo26 },  // Inst #716 = XRK
  { 717,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2308cULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #717 = XY
  { 718,	2,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo125 },  // Inst #718 = ZEXT128_32
  { 719,	2,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #719 = ZEXT128_64
};

extern const char SystemZInstrNameData[] = {
  /* 0 */ 'I', 'C', '3', '2', 0,
  /* 5 */ 'S', 'T', 'O', 'C', '3', '2', 0,
  /* 12 */ 'S', 'T', 'C', '3', '2', 0,
  /* 18 */ 'I', 'I', 'L', 'F', '3', '2', 0,
  /* 25 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'F', '3', '2', 0,
  /* 44 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'I', 'L', 'F', '3', '2', 0,
  /* 63 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'I', 'L', 'F', '3', '2', 0,
  /* 82 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', 'F', '3', '2', 0,
  /* 95 */ 'S', 'e', 'l', 'e', 'c', 't', 'F', '3', '2', 0,
  /* 105 */ 'R', 'I', 'S', 'B', 'G', '3', '2', 0,
  /* 113 */ 'R', 'I', 'S', 'B', 'L', 'G', '3', '2', 0,
  /* 122 */ 'I', 'I', 'L', 'H', '3', '2', 0,
  /* 129 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'H', '3', '2', 0,
  /* 148 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'I', 'L', 'H', '3', '2', 0,
  /* 167 */ 'S', 'T', 'H', '3', '2', 0,
  /* 173 */ 'I', 'I', 'L', 'L', '3', '2', 0,
  /* 180 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'L', '3', '2', 0,
  /* 199 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'I', 'L', 'L', '3', '2', 0,
  /* 218 */ 'S', 'T', 'H', 'R', 'L', '3', '2', 0,
  /* 226 */ 'S', 'T', 'R', 'L', '3', '2', 0,
  /* 233 */ 'S', 'T', '3', '2', 0,
  /* 238 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '3', '2', '_', '3', '2', 0,
  /* 253 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '1', '6', '_', '3', '2', 0,
  /* 268 */ 'Z', 'E', 'X', 'T', '1', '2', '8', '_', '3', '2', 0,
  /* 279 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '8', '_', '3', '2', 0,
  /* 293 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'U', 'M', 'I', 'N', '_', '3', '2', 0,
  /* 313 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'M', 'I', 'N', '_', '3', '2', 0,
  /* 332 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', '3', '2', 0,
  /* 347 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'U', 'M', 'A', 'X', '_', '3', '2', 0,
  /* 367 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'M', 'A', 'X', '_', '3', '2', 0,
  /* 386 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '3', '2', 0,
  /* 398 */ 'S', 'e', 'l', 'e', 'c', 't', '3', '2', 0,
  /* 407 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', 'F', '6', '4', 0,
  /* 420 */ 'S', 'e', 'l', 'e', 'c', 't', 'F', '6', '4', 0,
  /* 430 */ 'A', 'E', 'X', 'T', '1', '2', '8', '_', '6', '4', 0,
  /* 441 */ 'Z', 'E', 'X', 'T', '1', '2', '8', '_', '6', '4', 0,
  /* 452 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'U', 'M', 'I', 'N', '_', '6', '4', 0,
  /* 472 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'M', 'I', 'N', '_', '6', '4', 0,
  /* 491 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', '6', '4', 0,
  /* 506 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'U', 'M', 'A', 'X', '_', '6', '4', 0,
  /* 526 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'M', 'A', 'X', '_', '6', '4', 0,
  /* 545 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '6', '4', 0,
  /* 557 */ 'S', 'e', 'l', 'e', 'c', 't', '6', '4', 0,
  /* 566 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '1', '6', 0,
  /* 578 */ 'S', 'e', 'l', 'e', 'c', 't', 'F', '1', '2', '8', 0,
  /* 589 */ 'L', '1', '2', '8', 0,
  /* 594 */ 'S', 'T', '1', '2', '8', 0,
  /* 600 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '8', 0,
  /* 611 */ 'L', 'A', 0,
  /* 614 */ 'S', 'R', 'A', 0,
  /* 618 */ 'M', 'A', 'D', 'B', 0,
  /* 623 */ 'C', 'D', 'B', 0,
  /* 627 */ 'D', 'D', 'B', 0,
  /* 631 */ 'M', 'D', 'B', 0,
  /* 635 */ 'S', 'Q', 'D', 'B', 0,
  /* 640 */ 'M', 'S', 'D', 'B', 0,
  /* 645 */ 'L', 'X', 'D', 'B', 0,
  /* 650 */ 'M', 'X', 'D', 'B', 0,
  /* 655 */ 'M', 'A', 'E', 'B', 0,
  /* 660 */ 'C', 'E', 'B', 0,
  /* 664 */ 'L', 'D', 'E', 'B', 0,
  /* 669 */ 'M', 'D', 'E', 'B', 0,
  /* 674 */ 'M', 'E', 'E', 'B', 0,
  /* 679 */ 'S', 'Q', 'E', 'B', 0,
  /* 684 */ 'M', 'S', 'E', 'B', 0,
  /* 689 */ 'L', 'X', 'E', 'B', 0,
  /* 694 */ 'L', 'G', 'B', 0,
  /* 698 */ 'S', 'L', 'B', 0,
  /* 702 */ 'L', 'L', 'G', 'C', 0,
  /* 707 */ 'I', 'C', 0,
  /* 710 */ 'A', 'L', 'C', 0,
  /* 714 */ 'L', 'L', 'C', 0,
  /* 718 */ 'A', 's', 'm', 'N', 'H', 'E', 'L', 'O', 'C', 0,
  /* 728 */ 'A', 's', 'm', 'H', 'E', 'L', 'O', 'C', 0,
  /* 737 */ 'A', 's', 'm', 'N', 'L', 'E', 'L', 'O', 'C', 0,
  /* 747 */ 'A', 's', 'm', 'L', 'E', 'L', 'O', 'C', 0,
  /* 756 */ 'A', 's', 'm', 'N', 'E', 'L', 'O', 'C', 0,
  /* 765 */ 'A', 's', 'm', 'E', 'L', 'O', 'C', 0,
  /* 773 */ 'A', 's', 'm', 'N', 'L', 'H', 'L', 'O', 'C', 0,
  /* 783 */ 'A', 's', 'm', 'L', 'H', 'L', 'O', 'C', 0,
  /* 792 */ 'A', 's', 'm', 'N', 'H', 'L', 'O', 'C', 0,
  /* 801 */ 'A', 's', 'm', 'H', 'L', 'O', 'C', 0,
  /* 809 */ 'A', 'D', 'J', 'D', 'Y', 'N', 'A', 'L', 'L', 'O', 'C', 0,
  /* 821 */ 'A', 's', 'm', 'N', 'L', 'L', 'O', 'C', 0,
  /* 830 */ 'A', 's', 'm', 'L', 'L', 'O', 'C', 0,
  /* 838 */ 'A', 's', 'm', 'N', 'O', 'L', 'O', 'C', 0,
  /* 847 */ 'A', 's', 'm', 'O', 'L', 'O', 'C', 0,
  /* 855 */ 'A', 's', 'm', 'L', 'O', 'C', 0,
  /* 862 */ 'A', 's', 'm', 'N', 'H', 'E', 'S', 'T', 'O', 'C', 0,
  /* 873 */ 'A', 's', 'm', 'H', 'E', 'S', 'T', 'O', 'C', 0,
  /* 883 */ 'A', 's', 'm', 'N', 'L', 'E', 'S', 'T', 'O', 'C', 0,
  /* 894 */ 'A', 's', 'm', 'L', 'E', 'S', 'T', 'O', 'C', 0,
  /* 904 */ 'A', 's', 'm', 'N', 'E', 'S', 'T', 'O', 'C', 0,
  /* 914 */ 'A', 's', 'm', 'E', 'S', 'T', 'O', 'C', 0,
  /* 923 */ 'A', 's', 'm', 'N', 'L', 'H', 'S', 'T', 'O', 'C', 0,
  /* 934 */ 'A', 's', 'm', 'L', 'H', 'S', 'T', 'O', 'C', 0,
  /* 944 */ 'A', 's', 'm', 'N', 'H', 'S', 'T', 'O', 'C', 0,
  /* 954 */ 'A', 's', 'm', 'H', 'S', 'T', 'O', 'C', 0,
  /* 963 */ 'A', 's', 'm', 'N', 'L', 'S', 'T', 'O', 'C', 0,
  /* 973 */ 'A', 's', 'm', 'L', 'S', 'T', 'O', 'C', 0,
  /* 982 */ 'A', 's', 'm', 'N', 'O', 'S', 'T', 'O', 'C', 0,
  /* 992 */ 'A', 's', 'm', 'O', 'S', 'T', 'O', 'C', 0,
  /* 1001 */ 'A', 's', 'm', 'S', 'T', 'O', 'C', 0,
  /* 1009 */ 'A', 's', 'm', 'B', 'R', 'C', 0,
  /* 1016 */ 'S', 'T', 'C', 0,
  /* 1020 */ 'M', 'V', 'C', 0,
  /* 1024 */ 'L', 'D', 0,
  /* 1027 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 1040 */ 'S', 'T', 'D', 0,
  /* 1044 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 1057 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 1064 */ 'S', 'T', 'E', 0,
  /* 1068 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 1078 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 1091 */ 'A', 'G', 'F', 0,
  /* 1095 */ 'C', 'G', 'F', 0,
  /* 1099 */ 'A', 'L', 'G', 'F', 0,
  /* 1104 */ 'C', 'L', 'G', 'F', 0,
  /* 1109 */ 'L', 'L', 'G', 'F', 0,
  /* 1114 */ 'S', 'L', 'G', 'F', 0,
  /* 1119 */ 'D', 'S', 'G', 'F', 0,
  /* 1124 */ 'M', 'S', 'G', 'F', 0,
  /* 1129 */ 'L', 'T', 'G', 'F', 0,
  /* 1134 */ 'I', 'I', 'H', 'F', 0,
  /* 1139 */ 'L', 'L', 'I', 'H', 'F', 0,
  /* 1145 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'H', 'F', 0,
  /* 1162 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'I', 'H', 'F', 0,
  /* 1179 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'I', 'H', 'F', 0,
  /* 1196 */ 'I', 'I', 'L', 'F', 0,
  /* 1201 */ 'L', 'L', 'I', 'L', 'F', 0,
  /* 1207 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'F', 0,
  /* 1224 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'I', 'L', 'F', 0,
  /* 1241 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'I', 'L', 'F', 0,
  /* 1258 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'X', 'I', 'L', 'F', 0,
  /* 1276 */ 'S', 'R', 'A', 'G', 0,
  /* 1281 */ 'S', 'L', 'B', 'G', 0,
  /* 1286 */ 'R', 'I', 'S', 'B', 'G', 0,
  /* 1292 */ 'R', 'N', 'S', 'B', 'G', 0,
  /* 1298 */ 'R', 'O', 'S', 'B', 'G', 0,
  /* 1304 */ 'R', 'X', 'S', 'B', 'G', 0,
  /* 1310 */ 'A', 'L', 'C', 'G', 0,
  /* 1315 */ 'A', 's', 'm', 'N', 'H', 'E', 'L', 'O', 'C', 'G', 0,
  /* 1326 */ 'A', 's', 'm', 'H', 'E', 'L', 'O', 'C', 'G', 0,
  /* 1336 */ 'A', 's', 'm', 'N', 'L', 'E', 'L', 'O', 'C', 'G', 0,
  /* 1347 */ 'A', 's', 'm', 'L', 'E', 'L', 'O', 'C', 'G', 0,
  /* 1357 */ 'A', 's', 'm', 'N', 'E', 'L', 'O', 'C', 'G', 0,
  /* 1367 */ 'A', 's', 'm', 'E', 'L', 'O', 'C', 'G', 0,
  /* 1376 */ 'A', 's', 'm', 'N', 'L', 'H', 'L', 'O', 'C', 'G', 0,
  /* 1387 */ 'A', 's', 'm', 'L', 'H', 'L', 'O', 'C', 'G', 0,
  /* 1397 */ 'A', 's', 'm', 'N', 'H', 'L', 'O', 'C', 'G', 0,
  /* 1407 */ 'A', 's', 'm', 'H', 'L', 'O', 'C', 'G', 0,
  /* 1416 */ 'A', 's', 'm', 'N', 'L', 'L', 'O', 'C', 'G', 0,
  /* 1426 */ 'A', 's', 'm', 'L', 'L', 'O', 'C', 'G', 0,
  /* 1435 */ 'A', 's', 'm', 'N', 'O', 'L', 'O', 'C', 'G', 0,
  /* 1445 */ 'A', 's', 'm', 'O', 'L', 'O', 'C', 'G', 0,
  /* 1454 */ 'A', 's', 'm', 'L', 'O', 'C', 'G', 0,
  /* 1462 */ 'A', 's', 'm', 'N', 'H', 'E', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1474 */ 'A', 's', 'm', 'H', 'E', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1485 */ 'A', 's', 'm', 'N', 'L', 'E', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1497 */ 'A', 's', 'm', 'L', 'E', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1508 */ 'A', 's', 'm', 'N', 'E', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1519 */ 'A', 's', 'm', 'E', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1529 */ 'A', 's', 'm', 'N', 'L', 'H', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1541 */ 'A', 's', 'm', 'L', 'H', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1552 */ 'A', 's', 'm', 'N', 'H', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1563 */ 'A', 's', 'm', 'H', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1573 */ 'A', 's', 'm', 'N', 'L', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1584 */ 'A', 's', 'm', 'L', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1594 */ 'A', 's', 'm', 'N', 'O', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1605 */ 'A', 's', 'm', 'O', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1615 */ 'A', 's', 'm', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1624 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 1639 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 1653 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 1667 */ 'R', 'I', 'S', 'B', 'H', 'G', 0,
  /* 1674 */ 'A', 's', 'm', 'N', 'H', 'E', 'J', 'G', 0,
  /* 1683 */ 'A', 's', 'm', 'H', 'E', 'J', 'G', 0,
  /* 1691 */ 'A', 's', 'm', 'N', 'L', 'E', 'J', 'G', 0,
  /* 1700 */ 'A', 's', 'm', 'L', 'E', 'J', 'G', 0,
  /* 1708 */ 'A', 's', 'm', 'N', 'E', 'J', 'G', 0,
  /* 1716 */ 'A', 's', 'm', 'E', 'J', 'G', 0,
  /* 1723 */ 'A', 's', 'm', 'N', 'L', 'H', 'J', 'G', 0,
  /* 1732 */ 'A', 's', 'm', 'L', 'H', 'J', 'G', 0,
  /* 1740 */ 'A', 's', 'm', 'N', 'H', 'J', 'G', 0,
  /* 1748 */ 'A', 's', 'm', 'H', 'J', 'G', 0,
  /* 1755 */ 'A', 's', 'm', 'N', 'L', 'J', 'G', 0,
  /* 1763 */ 'A', 's', 'm', 'L', 'J', 'G', 0,
  /* 1770 */ 'A', 's', 'm', 'N', 'O', 'J', 'G', 0,
  /* 1778 */ 'A', 's', 'm', 'O', 'J', 'G', 0,
  /* 1785 */ 'A', 'L', 'G', 0,
  /* 1789 */ 'R', 'I', 'S', 'B', 'L', 'G', 0,
  /* 1796 */ 'C', 'L', 'G', 0,
  /* 1800 */ 'D', 'L', 'G', 0,
  /* 1804 */ 'R', 'L', 'L', 'G', 0,
  /* 1809 */ 'S', 'L', 'L', 'G', 0,
  /* 1814 */ 'M', 'L', 'G', 0,
  /* 1818 */ 'S', 'R', 'L', 'G', 0,
  /* 1823 */ 'S', 'L', 'G', 0,
  /* 1827 */ 'L', 'M', 'G', 0,
  /* 1831 */ 'S', 'T', 'M', 'G', 0,
  /* 1836 */ 'N', 'G', 0,
  /* 1839 */ 'O', 'G', 0,
  /* 1842 */ 'C', 'S', 'G', 0,
  /* 1846 */ 'D', 'S', 'G', 0,
  /* 1850 */ 'M', 'S', 'G', 0,
  /* 1854 */ 'B', 'R', 'C', 'T', 'G', 0,
  /* 1860 */ 'L', 'T', 'G', 0,
  /* 1864 */ 'S', 'T', 'G', 0,
  /* 1868 */ 'L', 'R', 'V', 'G', 0,
  /* 1873 */ 'S', 'T', 'R', 'V', 'G', 0,
  /* 1879 */ 'X', 'G', 0,
  /* 1882 */ 'A', 'H', 0,
  /* 1885 */ 'C', 'H', 0,
  /* 1888 */ 'C', 'G', 'H', 0,
  /* 1892 */ 'L', 'L', 'G', 'H', 0,
  /* 1897 */ 'I', 'I', 'H', 'H', 0,
  /* 1902 */ 'L', 'L', 'I', 'H', 'H', 0,
  /* 1908 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'H', 'H', 0,
  /* 1925 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'I', 'H', 'H', 0,
  /* 1942 */ 'I', 'I', 'L', 'H', 0,
  /* 1947 */ 'L', 'L', 'I', 'L', 'H', 0,
  /* 1953 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'H', 0,
  /* 1970 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'N', 'I', 'L', 'H', 0,
  /* 1988 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'I', 'L', 'H', 0,
  /* 2005 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'O', 'I', 'L', 'H', 0,
  /* 2023 */ 'L', 'L', 'H', 0,
  /* 2027 */ 'M', 'H', 0,
  /* 2030 */ 'S', 'H', 0,
  /* 2033 */ 'S', 'T', 'H', 0,
  /* 2037 */ 'A', 's', 'm', 'J', 'H', 'E', 'C', 'I', 0,
  /* 2046 */ 'A', 's', 'm', 'J', 'E', 'C', 'I', 0,
  /* 2054 */ 'A', 's', 'm', 'J', 'L', 'E', 'C', 'I', 0,
  /* 2063 */ 'A', 's', 'm', 'J', 'H', 'C', 'I', 0,
  /* 2071 */ 'A', 's', 'm', 'J', 'L', 'H', 'C', 'I', 0,
  /* 2080 */ 'A', 's', 'm', 'J', 'L', 'C', 'I', 0,
  /* 2088 */ 'A', 's', 'm', 'J', 'H', 'E', 'A', 'l', 't', 'C', 'I', 0,
  /* 2100 */ 'A', 's', 'm', 'J', 'E', 'A', 'l', 't', 'C', 'I', 0,
  /* 2111 */ 'A', 's', 'm', 'J', 'L', 'E', 'A', 'l', 't', 'C', 'I', 0,
  /* 2123 */ 'A', 's', 'm', 'J', 'H', 'A', 'l', 't', 'C', 'I', 0,
  /* 2134 */ 'A', 's', 'm', 'J', 'L', 'H', 'A', 'l', 't', 'C', 'I', 0,
  /* 2146 */ 'A', 's', 'm', 'J', 'L', 'A', 'l', 't', 'C', 'I', 0,
  /* 2157 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'F', 'I', 0,
  /* 2173 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'A', 'F', 'I', 0,
  /* 2190 */ 'C', 'F', 'I', 0,
  /* 2194 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'G', 'F', 'I', 0,
  /* 2211 */ 'C', 'G', 'F', 'I', 0,
  /* 2216 */ 'A', 'L', 'G', 'F', 'I', 0,
  /* 2222 */ 'C', 'L', 'G', 'F', 'I', 0,
  /* 2228 */ 'S', 'L', 'G', 'F', 'I', 0,
  /* 2234 */ 'M', 'S', 'G', 'F', 'I', 0,
  /* 2240 */ 'A', 'L', 'F', 'I', 0,
  /* 2245 */ 'C', 'L', 'F', 'I', 0,
  /* 2250 */ 'S', 'L', 'F', 'I', 0,
  /* 2255 */ 'M', 'S', 'F', 'I', 0,
  /* 2260 */ 'A', 's', 'm', 'J', 'H', 'E', 'C', 'G', 'I', 0,
  /* 2270 */ 'A', 's', 'm', 'J', 'E', 'C', 'G', 'I', 0,
  /* 2279 */ 'A', 's', 'm', 'J', 'L', 'E', 'C', 'G', 'I', 0,
  /* 2289 */ 'A', 's', 'm', 'J', 'H', 'C', 'G', 'I', 0,
  /* 2298 */ 'A', 's', 'm', 'J', 'L', 'H', 'C', 'G', 'I', 0,
  /* 2308 */ 'A', 's', 'm', 'J', 'L', 'C', 'G', 'I', 0,
  /* 2317 */ 'A', 's', 'm', 'J', 'H', 'E', 'A', 'l', 't', 'C', 'G', 'I', 0,
  /* 2330 */ 'A', 's', 'm', 'J', 'E', 'A', 'l', 't', 'C', 'G', 'I', 0,
  /* 2342 */ 'A', 's', 'm', 'J', 'L', 'E', 'A', 'l', 't', 'C', 'G', 'I', 0,
  /* 2355 */ 'A', 's', 'm', 'J', 'H', 'A', 'l', 't', 'C', 'G', 'I', 0,
  /* 2367 */ 'A', 's', 'm', 'J', 'L', 'H', 'A', 'l', 't', 'C', 'G', 'I', 0,
  /* 2380 */ 'A', 's', 'm', 'J', 'L', 'A', 'l', 't', 'C', 'G', 'I', 0,
  /* 2392 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'H', 'I', 0,
  /* 2408 */ 'C', 'H', 'I', 0,
  /* 2412 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'G', 'H', 'I', 0,
  /* 2429 */ 'C', 'G', 'H', 'I', 0,
  /* 2434 */ 'L', 'G', 'H', 'I', 0,
  /* 2439 */ 'M', 'G', 'H', 'I', 0,
  /* 2444 */ 'M', 'V', 'G', 'H', 'I', 0,
  /* 2450 */ 'M', 'V', 'H', 'H', 'I', 0,
  /* 2456 */ 'L', 'H', 'I', 0,
  /* 2460 */ 'M', 'H', 'I', 0,
  /* 2464 */ 'P', 'H', 'I', 0,
  /* 2468 */ 'M', 'V', 'H', 'I', 0,
  /* 2473 */ 'C', 'L', 'I', 0,
  /* 2477 */ 'N', 'I', 0,
  /* 2480 */ 'O', 'I', 0,
  /* 2483 */ 'A', 'S', 'I', 0,
  /* 2487 */ 'A', 'G', 'S', 'I', 0,
  /* 2492 */ 'C', 'H', 'S', 'I', 0,
  /* 2497 */ 'C', 'L', 'F', 'H', 'S', 'I', 0,
  /* 2504 */ 'C', 'G', 'H', 'S', 'I', 0,
  /* 2510 */ 'C', 'L', 'G', 'H', 'S', 'I', 0,
  /* 2517 */ 'C', 'H', 'H', 'S', 'I', 0,
  /* 2523 */ 'C', 'L', 'H', 'H', 'S', 'I', 0,
  /* 2530 */ 'M', 'V', 'I', 0,
  /* 2534 */ 'X', 'I', 0,
  /* 2537 */ 'A', 's', 'm', 'N', 'H', 'E', 'J', 0,
  /* 2545 */ 'A', 's', 'm', 'H', 'E', 'J', 0,
  /* 2552 */ 'A', 's', 'm', 'N', 'L', 'E', 'J', 0,
  /* 2560 */ 'A', 's', 'm', 'L', 'E', 'J', 0,
  /* 2567 */ 'A', 's', 'm', 'N', 'E', 'J', 0,
  /* 2574 */ 'A', 's', 'm', 'E', 'J', 0,
  /* 2580 */ 'A', 's', 'm', 'N', 'L', 'H', 'J', 0,
  /* 2588 */ 'A', 's', 'm', 'L', 'H', 'J', 0,
  /* 2595 */ 'A', 's', 'm', 'N', 'H', 'J', 0,
  /* 2602 */ 'A', 's', 'm', 'H', 'J', 0,
  /* 2608 */ 'A', 's', 'm', 'C', 'I', 'J', 0,
  /* 2615 */ 'A', 's', 'm', 'C', 'G', 'I', 'J', 0,
  /* 2623 */ 'A', 's', 'm', 'N', 'L', 'J', 0,
  /* 2630 */ 'A', 's', 'm', 'L', 'J', 0,
  /* 2636 */ 'A', 's', 'm', 'N', 'O', 'J', 0,
  /* 2643 */ 'A', 's', 'm', 'O', 'J', 0,
  /* 2649 */ 'A', 's', 'm', 'C', 'R', 'J', 0,
  /* 2656 */ 'A', 's', 'm', 'C', 'G', 'R', 'J', 0,
  /* 2664 */ 'S', 'R', 'A', 'K', 0,
  /* 2669 */ 'A', 'H', 'I', 'K', 0,
  /* 2674 */ 'A', 'G', 'H', 'I', 'K', 0,
  /* 2680 */ 'A', 'L', 'G', 'H', 'S', 'I', 'K', 0,
  /* 2688 */ 'A', 'L', 'H', 'S', 'I', 'K', 0,
  /* 2695 */ 'S', 'L', 'L', 'K', 0,
  /* 2700 */ 'S', 'R', 'L', 'K', 0,
  /* 2705 */ 'A', 'R', 'K', 0,
  /* 2709 */ 'A', 'G', 'R', 'K', 0,
  /* 2714 */ 'A', 'L', 'G', 'R', 'K', 0,
  /* 2720 */ 'S', 'L', 'G', 'R', 'K', 0,
  /* 2726 */ 'N', 'G', 'R', 'K', 0,
  /* 2731 */ 'O', 'G', 'R', 'K', 0,
  /* 2736 */ 'S', 'G', 'R', 'K', 0,
  /* 2741 */ 'X', 'G', 'R', 'K', 0,
  /* 2746 */ 'A', 'L', 'R', 'K', 0,
  /* 2751 */ 'S', 'L', 'R', 'K', 0,
  /* 2756 */ 'N', 'R', 'K', 0,
  /* 2760 */ 'O', 'R', 'K', 0,
  /* 2764 */ 'S', 'R', 'K', 0,
  /* 2768 */ 'X', 'R', 'K', 0,
  /* 2772 */ 'A', 'L', 0,
  /* 2775 */ 'A', 's', 'm', 'B', 'R', 'C', 'L', 0,
  /* 2783 */ 'D', 'L', 0,
  /* 2786 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2795 */ 'P', 'R', 'O', 'L', 'O', 'G', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2808 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2817 */ 'I', 'I', 'H', 'L', 0,
  /* 2822 */ 'L', 'L', 'I', 'H', 'L', 0,
  /* 2828 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'H', 'L', 0,
  /* 2845 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'I', 'H', 'L', 0,
  /* 2862 */ 'I', 'I', 'L', 'L', 0,
  /* 2867 */ 'K', 'I', 'L', 'L', 0,
  /* 2872 */ 'L', 'L', 'I', 'L', 'L', 0,
  /* 2878 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'L', 0,
  /* 2895 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'I', 'L', 'L', 0,
  /* 2912 */ 'R', 'L', 'L', 0,
  /* 2916 */ 'S', 'L', 'L', 0,
  /* 2920 */ 'L', 'A', 'R', 'L', 0,
  /* 2925 */ 'C', 'R', 'L', 0,
  /* 2929 */ 'C', 'G', 'F', 'R', 'L', 0,
  /* 2935 */ 'C', 'L', 'G', 'F', 'R', 'L', 0,
  /* 2942 */ 'L', 'L', 'G', 'F', 'R', 'L', 0,
  /* 2949 */ 'C', 'G', 'R', 'L', 0,
  /* 2954 */ 'C', 'L', 'G', 'R', 'L', 0,
  /* 2960 */ 'S', 'T', 'G', 'R', 'L', 0,
  /* 2966 */ 'C', 'H', 'R', 'L', 0,
  /* 2971 */ 'C', 'G', 'H', 'R', 'L', 0,
  /* 2977 */ 'C', 'L', 'G', 'H', 'R', 'L', 0,
  /* 2984 */ 'L', 'L', 'G', 'H', 'R', 'L', 0,
  /* 2991 */ 'C', 'L', 'H', 'R', 'L', 0,
  /* 2997 */ 'L', 'L', 'H', 'R', 'L', 0,
  /* 3003 */ 'S', 'T', 'H', 'R', 'L', 0,
  /* 3009 */ 'C', 'L', 'R', 'L', 0,
  /* 3014 */ 'S', 'R', 'L', 0,
  /* 3018 */ 'S', 'T', 'R', 'L', 0,
  /* 3023 */ 'A', 's', 'm', 'B', 'R', 'A', 'S', 'L', 0,
  /* 3032 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 3042 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'U', 'M', 'I', 'N', 0,
  /* 3060 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'M', 'I', 'N', 0,
  /* 3077 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 3094 */ 'O', 0,
  /* 3096 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 3111 */ 'E', 'A', 'R', 0,
  /* 3115 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'R', 0,
  /* 3130 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'A', 'R', 0,
  /* 3146 */ 'M', 'A', 'D', 'B', 'R', 0,
  /* 3152 */ 'L', 'C', 'D', 'B', 'R', 0,
  /* 3158 */ 'D', 'D', 'B', 'R', 0,
  /* 3163 */ 'L', 'E', 'D', 'B', 'R', 0,
  /* 3169 */ 'C', 'F', 'D', 'B', 'R', 0,
  /* 3175 */ 'C', 'G', 'D', 'B', 'R', 0,
  /* 3181 */ 'F', 'I', 'D', 'B', 'R', 0,
  /* 3187 */ 'M', 'D', 'B', 'R', 0,
  /* 3192 */ 'L', 'N', 'D', 'B', 'R', 0,
  /* 3198 */ 'L', 'P', 'D', 'B', 'R', 0,
  /* 3204 */ 'S', 'Q', 'D', 'B', 'R', 0,
  /* 3210 */ 'M', 'S', 'D', 'B', 'R', 0,
  /* 3216 */ 'L', 'T', 'D', 'B', 'R', 0,
  /* 3222 */ 'L', 'X', 'D', 'B', 'R', 0,
  /* 3228 */ 'M', 'X', 'D', 'B', 'R', 0,
  /* 3234 */ 'M', 'A', 'E', 'B', 'R', 0,
  /* 3240 */ 'L', 'C', 'E', 'B', 'R', 0,
  /* 3246 */ 'L', 'D', 'E', 'B', 'R', 0,
  /* 3252 */ 'M', 'D', 'E', 'B', 'R', 0,
  /* 3258 */ 'M', 'E', 'E', 'B', 'R', 0,
  /* 3264 */ 'C', 'F', 'E', 'B', 'R', 0,
  /* 3270 */ 'C', 'G', 'E', 'B', 'R', 0,
  /* 3276 */ 'F', 'I', 'E', 'B', 'R', 0,
  /* 3282 */ 'L', 'N', 'E', 'B', 'R', 0,
  /* 3288 */ 'L', 'P', 'E', 'B', 'R', 0,
  /* 3294 */ 'S', 'Q', 'E', 'B', 'R', 0,
  /* 3300 */ 'M', 'S', 'E', 'B', 'R', 0,
  /* 3306 */ 'L', 'T', 'E', 'B', 'R', 0,
  /* 3312 */ 'L', 'X', 'E', 'B', 'R', 0,
  /* 3318 */ 'C', 'D', 'F', 'B', 'R', 0,
  /* 3324 */ 'C', 'E', 'F', 'B', 'R', 0,
  /* 3330 */ 'C', 'X', 'F', 'B', 'R', 0,
  /* 3336 */ 'C', 'D', 'G', 'B', 'R', 0,
  /* 3342 */ 'C', 'E', 'G', 'B', 'R', 0,
  /* 3348 */ 'S', 'L', 'G', 'B', 'R', 0,
  /* 3354 */ 'C', 'X', 'G', 'B', 'R', 0,
  /* 3360 */ 'S', 'L', 'B', 'R', 0,
  /* 3365 */ 'A', 'X', 'B', 'R', 0,
  /* 3370 */ 'L', 'C', 'X', 'B', 'R', 0,
  /* 3376 */ 'L', 'D', 'X', 'B', 'R', 0,
  /* 3382 */ 'L', 'E', 'X', 'B', 'R', 0,
  /* 3388 */ 'C', 'F', 'X', 'B', 'R', 0,
  /* 3394 */ 'C', 'G', 'X', 'B', 'R', 0,
  /* 3400 */ 'F', 'I', 'X', 'B', 'R', 0,
  /* 3406 */ 'M', 'X', 'B', 'R', 0,
  /* 3411 */ 'L', 'N', 'X', 'B', 'R', 0,
  /* 3417 */ 'L', 'P', 'X', 'B', 'R', 0,
  /* 3423 */ 'S', 'Q', 'X', 'B', 'R', 0,
  /* 3429 */ 'S', 'X', 'B', 'R', 0,
  /* 3434 */ 'L', 'T', 'X', 'B', 'R', 0,
  /* 3440 */ 'A', 's', 'm', 'J', 'H', 'E', 'C', 'R', 0,
  /* 3449 */ 'A', 's', 'm', 'J', 'E', 'C', 'R', 0,
  /* 3457 */ 'A', 's', 'm', 'J', 'L', 'E', 'C', 'R', 0,
  /* 3466 */ 'L', 'L', 'G', 'C', 'R', 0,
  /* 3472 */ 'A', 's', 'm', 'J', 'H', 'C', 'R', 0,
  /* 3480 */ 'A', 's', 'm', 'J', 'L', 'H', 'C', 'R', 0,
  /* 3489 */ 'A', 'L', 'C', 'R', 0,
  /* 3494 */ 'A', 's', 'm', 'J', 'L', 'C', 'R', 0,
  /* 3502 */ 'L', 'L', 'C', 'R', 0,
  /* 3507 */ 'A', 's', 'm', 'N', 'H', 'E', 'L', 'O', 'C', 'R', 0,
  /* 3518 */ 'A', 's', 'm', 'H', 'E', 'L', 'O', 'C', 'R', 0,
  /* 3528 */ 'A', 's', 'm', 'N', 'L', 'E', 'L', 'O', 'C', 'R', 0,
  /* 3539 */ 'A', 's', 'm', 'L', 'E', 'L', 'O', 'C', 'R', 0,
  /* 3549 */ 'A', 's', 'm', 'N', 'E', 'L', 'O', 'C', 'R', 0,
  /* 3559 */ 'A', 's', 'm', 'E', 'L', 'O', 'C', 'R', 0,
  /* 3568 */ 'A', 's', 'm', 'N', 'L', 'H', 'L', 'O', 'C', 'R', 0,
  /* 3579 */ 'A', 's', 'm', 'L', 'H', 'L', 'O', 'C', 'R', 0,
  /* 3589 */ 'A', 's', 'm', 'N', 'H', 'L', 'O', 'C', 'R', 0,
  /* 3599 */ 'A', 's', 'm', 'H', 'L', 'O', 'C', 'R', 0,
  /* 3608 */ 'A', 's', 'm', 'N', 'L', 'L', 'O', 'C', 'R', 0,
  /* 3618 */ 'A', 's', 'm', 'L', 'L', 'O', 'C', 'R', 0,
  /* 3627 */ 'A', 's', 'm', 'N', 'O', 'L', 'O', 'C', 'R', 0,
  /* 3637 */ 'A', 's', 'm', 'O', 'L', 'O', 'C', 'R', 0,
  /* 3646 */ 'A', 's', 'm', 'L', 'O', 'C', 'R', 0,
  /* 3654 */ 'A', 's', 'm', 'J', 'H', 'E', 'A', 'l', 't', 'C', 'R', 0,
  /* 3666 */ 'A', 's', 'm', 'J', 'E', 'A', 'l', 't', 'C', 'R', 0,
  /* 3677 */ 'A', 's', 'm', 'J', 'L', 'E', 'A', 'l', 't', 'C', 'R', 0,
  /* 3689 */ 'A', 's', 'm', 'J', 'H', 'A', 'l', 't', 'C', 'R', 0,
  /* 3700 */ 'A', 's', 'm', 'J', 'L', 'H', 'A', 'l', 't', 'C', 'R', 0,
  /* 3712 */ 'A', 's', 'm', 'J', 'L', 'A', 'l', 't', 'C', 'R', 0,
  /* 3723 */ 'L', 'G', 'D', 'R', 0,
  /* 3728 */ 'L', 'D', 'R', 0,
  /* 3732 */ 'L', 'Z', 'D', 'R', 0,
  /* 3737 */ 'L', 'E', 'R', 0,
  /* 3741 */ 'L', 'Z', 'E', 'R', 0,
  /* 3746 */ 'A', 'G', 'F', 'R', 0,
  /* 3751 */ 'L', 'C', 'G', 'F', 'R', 0,
  /* 3757 */ 'A', 'L', 'G', 'F', 'R', 0,
  /* 3763 */ 'C', 'L', 'G', 'F', 'R', 0,
  /* 3769 */ 'L', 'L', 'G', 'F', 'R', 0,
  /* 3775 */ 'S', 'L', 'G', 'F', 'R', 0,
  /* 3781 */ 'D', 'S', 'G', 'F', 'R', 0,
  /* 3787 */ 'M', 'S', 'G', 'F', 'R', 0,
  /* 3793 */ 'L', 'T', 'G', 'F', 'R', 0,
  /* 3799 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'G', 'R', 0,
  /* 3815 */ 'A', 's', 'm', 'J', 'H', 'E', 'C', 'G', 'R', 0,
  /* 3825 */ 'A', 's', 'm', 'J', 'E', 'C', 'G', 'R', 0,
  /* 3834 */ 'A', 's', 'm', 'J', 'L', 'E', 'C', 'G', 'R', 0,
  /* 3844 */ 'A', 's', 'm', 'J', 'H', 'C', 'G', 'R', 0,
  /* 3853 */ 'A', 's', 'm', 'J', 'L', 'H', 'C', 'G', 'R', 0,
  /* 3863 */ 'A', 'L', 'C', 'G', 'R', 0,
  /* 3869 */ 'A', 's', 'm', 'J', 'L', 'C', 'G', 'R', 0,
  /* 3878 */ 'A', 's', 'm', 'N', 'H', 'E', 'L', 'O', 'C', 'G', 'R', 0,
  /* 3890 */ 'A', 's', 'm', 'H', 'E', 'L', 'O', 'C', 'G', 'R', 0,
  /* 3901 */ 'A', 's', 'm', 'N', 'L', 'E', 'L', 'O', 'C', 'G', 'R', 0,
  /* 3913 */ 'A', 's', 'm', 'L', 'E', 'L', 'O', 'C', 'G', 'R', 0,
  /* 3924 */ 'A', 's', 'm', 'N', 'E', 'L', 'O', 'C', 'G', 'R', 0,
  /* 3935 */ 'A', 's', 'm', 'E', 'L', 'O', 'C', 'G', 'R', 0,
  /* 3945 */ 'A', 's', 'm', 'N', 'L', 'H', 'L', 'O', 'C', 'G', 'R', 0,
  /* 3957 */ 'A', 's', 'm', 'L', 'H', 'L', 'O', 'C', 'G', 'R', 0,
  /* 3968 */ 'A', 's', 'm', 'N', 'H', 'L', 'O', 'C', 'G', 'R', 0,
  /* 3979 */ 'A', 's', 'm', 'H', 'L', 'O', 'C', 'G', 'R', 0,
  /* 3989 */ 'A', 's', 'm', 'N', 'L', 'L', 'O', 'C', 'G', 'R', 0,
  /* 4000 */ 'A', 's', 'm', 'L', 'L', 'O', 'C', 'G', 'R', 0,
  /* 4010 */ 'A', 's', 'm', 'N', 'O', 'L', 'O', 'C', 'G', 'R', 0,
  /* 4021 */ 'A', 's', 'm', 'O', 'L', 'O', 'C', 'G', 'R', 0,
  /* 4031 */ 'A', 's', 'm', 'L', 'O', 'C', 'G', 'R', 0,
  /* 4040 */ 'A', 's', 'm', 'J', 'H', 'E', 'A', 'l', 't', 'C', 'G', 'R', 0,
  /* 4053 */ 'A', 's', 'm', 'J', 'E', 'A', 'l', 't', 'C', 'G', 'R', 0,
  /* 4065 */ 'A', 's', 'm', 'J', 'L', 'E', 'A', 'l', 't', 'C', 'G', 'R', 0,
  /* 4078 */ 'A', 's', 'm', 'J', 'H', 'A', 'l', 't', 'C', 'G', 'R', 0,
  /* 4090 */ 'A', 's', 'm', 'J', 'L', 'H', 'A', 'l', 't', 'C', 'G', 'R', 0,
  /* 4103 */ 'A', 's', 'm', 'J', 'L', 'A', 'l', 't', 'C', 'G', 'R', 0,
  /* 4115 */ 'L', 'D', 'G', 'R', 0,
  /* 4120 */ 'A', 'L', 'G', 'R', 0,
  /* 4125 */ 'C', 'L', 'G', 'R', 0,
  /* 4130 */ 'D', 'L', 'G', 'R', 0,
  /* 4135 */ 'M', 'L', 'G', 'R', 0,
  /* 4140 */ 'S', 'L', 'G', 'R', 0,
  /* 4145 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'G', 'R', 0,
  /* 4161 */ 'F', 'L', 'O', 'G', 'R', 0,
  /* 4167 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'G', 'R', 0,
  /* 4183 */ 'D', 'S', 'G', 'R', 0,
  /* 4188 */ 'M', 'S', 'G', 'R', 0,
  /* 4193 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'G', 'R', 0,
  /* 4209 */ 'L', 'T', 'G', 'R', 0,
  /* 4214 */ 'L', 'R', 'V', 'G', 'R', 0,
  /* 4220 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'G', 'R', 0,
  /* 4236 */ 'L', 'L', 'G', 'H', 'R', 0,
  /* 4242 */ 'L', 'L', 'H', 'R', 0,
  /* 4247 */ 'A', 'L', 'R', 0,
  /* 4251 */ 'C', 'L', 'R', 0,
  /* 4255 */ 'D', 'L', 'R', 0,
  /* 4259 */ 'S', 'L', 'R', 0,
  /* 4263 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'R', 0,
  /* 4278 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'N', 'R', 0,
  /* 4294 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', 0,
  /* 4309 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'O', 'R', 0,
  /* 4325 */ 'A', 's', 'm', 'B', 'A', 'S', 'R', 0,
  /* 4333 */ 'M', 'S', 'R', 0,
  /* 4337 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'R', 0,
  /* 4352 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'S', 'R', 0,
  /* 4368 */ 'L', 'T', 'R', 0,
  /* 4372 */ 'L', 'R', 'V', 'R', 0,
  /* 4377 */ 'L', 'X', 'R', 0,
  /* 4381 */ 'L', 'Z', 'X', 'R', 0,
  /* 4386 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'R', 0,
  /* 4401 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'X', 'R', 0,
  /* 4417 */ 'A', 's', 'm', 'B', 'R', 'A', 'S', 0,
  /* 4425 */ 'C', 'S', 0,
  /* 4428 */ 'M', 'S', 0,
  /* 4431 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 4448 */ 'B', 'R', 'C', 'T', 0,
  /* 4453 */ 'R', 'E', 'T', 0,
  /* 4457 */ 'L', 'T', 0,
  /* 4460 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 4475 */ 'S', 'T', 0,
  /* 4478 */ 'L', 'R', 'V', 0,
  /* 4482 */ 'S', 'T', 'R', 'V', 0,
  /* 4487 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', 'W', 0,
  /* 4500 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', 'W', 0,
  /* 4517 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'U', 'M', 'A', 'X', 0,
  /* 4535 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'M', 'A', 'X', 0,
  /* 4552 */ 'L', 'X', 0,
  /* 4555 */ 'S', 'T', 'X', 0,
  /* 4559 */ 'I', 'C', '3', '2', 'Y', 0,
  /* 4565 */ 'S', 'T', 'C', '3', '2', 'Y', 0,
  /* 4572 */ 'S', 'T', 'H', '3', '2', 'Y', 0,
  /* 4579 */ 'S', 'T', '3', '2', 'Y', 0,
  /* 4585 */ 'L', 'A', 'Y', 0,
  /* 4589 */ 'I', 'C', 'Y', 0,
  /* 4593 */ 'S', 'T', 'C', 'Y', 0,
  /* 4598 */ 'L', 'D', 'Y', 0,
  /* 4602 */ 'S', 'T', 'D', 'Y', 0,
  /* 4607 */ 'L', 'E', 'Y', 0,
  /* 4611 */ 'S', 'T', 'E', 'Y', 0,
  /* 4616 */ 'A', 'H', 'Y', 0,
  /* 4620 */ 'C', 'H', 'Y', 0,
  /* 4624 */ 'L', 'H', 'Y', 0,
  /* 4628 */ 'M', 'H', 'Y', 0,
  /* 4632 */ 'S', 'H', 'Y', 0,
  /* 4636 */ 'S', 'T', 'H', 'Y', 0,
  /* 4641 */ 'C', 'L', 'I', 'Y', 0,
  /* 4646 */ 'N', 'I', 'Y', 0,
  /* 4650 */ 'O', 'I', 'Y', 0,
  /* 4654 */ 'M', 'V', 'I', 'Y', 0,
  /* 4659 */ 'X', 'I', 'Y', 0,
  /* 4663 */ 'A', 'L', 'Y', 0,
  /* 4667 */ 'C', 'L', 'Y', 0,
  /* 4671 */ 'S', 'L', 'Y', 0,
  /* 4675 */ 'N', 'Y', 0,
  /* 4678 */ 'O', 'Y', 0,
  /* 4681 */ 'C', 'O', 'P', 'Y', 0,
  /* 4686 */ 'C', 'S', 'Y', 0,
  /* 4690 */ 'M', 'S', 'Y', 0,
  /* 4694 */ 'S', 'T', 'Y', 0,
  /* 4698 */ 'X', 'Y', 0,
  /* 4701 */ 'C', 'P', 'S', 'D', 'R', 'd', 'd', 0,
  /* 4709 */ 'C', 'P', 'S', 'D', 'R', 's', 'd', 0,
  /* 4717 */ 'L', 'T', 'D', 'B', 'R', 'C', 'o', 'm', 'p', 'a', 'r', 'e', 0,
  /* 4730 */ 'L', 'T', 'E', 'B', 'R', 'C', 'o', 'm', 'p', 'a', 'r', 'e', 0,
  /* 4743 */ 'L', 'T', 'X', 'B', 'R', 'C', 'o', 'm', 'p', 'a', 'r', 'e', 0,
  /* 4756 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'F', '3', '2', 'i', 0,
  /* 4776 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'H', '3', '2', 'i', 0,
  /* 4796 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'L', '3', '2', 'i', 0,
  /* 4816 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'H', 'F', 'i', 0,
  /* 4834 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'F', 'i', 0,
  /* 4852 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'H', 'H', 'i', 0,
  /* 4870 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'H', 'i', 0,
  /* 4888 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'N', 'I', 'L', 'H', 'i', 0,
  /* 4907 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'H', 'L', 'i', 0,
  /* 4925 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'L', 'i', 0,
  /* 4943 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'G', 'R', 'i', 0,
  /* 4960 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'R', 'i', 0,
  /* 4976 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'N', 'R', 'i', 0,
  /* 4993 */ 'M', 'V', 'C', 'W', 'r', 'a', 'p', 'p', 'e', 'r', 0,
  /* 5004 */ 'C', 'P', 'S', 'D', 'R', 'd', 's', 0,
  /* 5012 */ 'C', 'P', 'S', 'D', 'R', 's', 's', 0,
  /* 5020 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', 'F', '3', '2', 'I', 'n', 'v', 0,
  /* 5036 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '3', '2', '_', '3', '2', 'I', 'n', 'v', 0,
  /* 5054 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '1', '6', '_', '3', '2', 'I', 'n', 'v', 0,
  /* 5072 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '8', '_', '3', '2', 'I', 'n', 'v', 0,
  /* 5089 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '3', '2', 'I', 'n', 'v', 0,
  /* 5104 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', 'F', '6', '4', 'I', 'n', 'v', 0,
  /* 5120 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '6', '4', 'I', 'n', 'v', 0,
  /* 5135 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '1', '6', 'I', 'n', 'v', 0,
  /* 5150 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '8', 'I', 'n', 'v', 0,
};

extern const unsigned SystemZInstrNameIndices[] = {
    2464U, 3032U, 2795U, 2808U, 2786U, 2867U, 1624U, 1639U, 
    1078U, 1653U, 4431U, 1068U, 1044U, 4681U, 1057U, 4460U, 
    1027U, 612U, 619U, 3147U, 3077U, 3096U, 809U, 656U, 
    3235U, 430U, 2169U, 1278U, 1091U, 2206U, 3746U, 2424U, 
    2674U, 3811U, 2709U, 2487U, 1882U, 2404U, 2669U, 4616U, 
    2772U, 710U, 1310U, 3863U, 3489U, 2240U, 1785U, 1099U, 
    2216U, 3757U, 2680U, 4120U, 2714U, 2688U, 4247U, 2746U, 
    4663U, 3112U, 2705U, 2483U, 4500U, 2173U, 3130U, 4535U, 
    3060U, 1970U, 4888U, 4278U, 4976U, 2005U, 4309U, 4352U, 
    4517U, 3042U, 1258U, 4401U, 2157U, 2194U, 2412U, 3799U, 
    2392U, 3115U, 367U, 526U, 313U, 472U, 4145U, 4943U, 
    1145U, 4816U, 1908U, 4852U, 2828U, 4907U, 1207U, 25U, 
    4756U, 4834U, 1953U, 129U, 4776U, 4870U, 2878U, 180U, 
    4796U, 4925U, 4263U, 4960U, 4167U, 1162U, 1925U, 2845U, 
    1224U, 44U, 1988U, 148U, 2895U, 199U, 4294U, 4193U, 
    4337U, 347U, 506U, 293U, 452U, 4220U, 1179U, 1241U, 
    63U, 4386U, 4487U, 332U, 491U, 3365U, 4586U, 4325U, 
    4417U, 3023U, 1009U, 2775U, 2615U, 2656U, 2608U, 2649U, 
    2574U, 1716U, 765U, 1367U, 3935U, 3559U, 914U, 1519U, 
    2545U, 1683U, 728U, 1326U, 3890U, 3518U, 873U, 1474U, 
    2602U, 1748U, 801U, 1407U, 3979U, 3599U, 954U, 1563U, 
    2330U, 4053U, 2100U, 3666U, 2270U, 3825U, 2046U, 3449U, 
    2355U, 4078U, 2123U, 3689U, 2289U, 3844U, 2063U, 3472U, 
    2317U, 4040U, 2088U, 3654U, 2260U, 3815U, 2037U, 3440U, 
    2380U, 4103U, 2146U, 3712U, 2308U, 3869U, 2080U, 3494U, 
    2342U, 4065U, 2111U, 3677U, 2279U, 3834U, 2054U, 3457U, 
    2367U, 4090U, 2134U, 3700U, 2298U, 3853U, 2071U, 3480U, 
    2560U, 1700U, 747U, 1347U, 3913U, 3539U, 894U, 1497U, 
    2588U, 1732U, 783U, 1387U, 3957U, 3579U, 934U, 1541U, 
    2630U, 1763U, 830U, 1426U, 4000U, 3618U, 855U, 1454U, 
    4031U, 3646U, 973U, 1584U, 2567U, 1708U, 756U, 1357U, 
    3924U, 3549U, 904U, 1508U, 2537U, 1674U, 718U, 1315U, 
    3878U, 3507U, 862U, 1462U, 2595U, 1740U, 792U, 1397U, 
    3968U, 3589U, 944U, 1552U, 2552U, 1691U, 737U, 1336U, 
    3901U, 3528U, 883U, 1485U, 2580U, 1723U, 773U, 1376U, 
    3945U, 3568U, 923U, 1529U, 2623U, 1755U, 821U, 1416U, 
    3989U, 3608U, 963U, 1573U, 2636U, 1770U, 838U, 1435U, 
    4010U, 3627U, 982U, 1594U, 2643U, 1778U, 847U, 1445U, 
    4021U, 3637U, 992U, 1605U, 1001U, 1615U, 4328U, 3149U, 
    4420U, 3026U, 1012U, 2778U, 4448U, 1854U, 705U, 623U, 
    3153U, 3318U, 3336U, 660U, 3241U, 3324U, 3342U, 3169U, 
    3264U, 2190U, 3388U, 1312U, 3175U, 3270U, 1095U, 2211U, 
    3752U, 2929U, 1888U, 2429U, 2971U, 2504U, 2618U, 3821U, 
    2659U, 2949U, 3394U, 1885U, 2517U, 2408U, 2966U, 2492U, 
    4620U, 2611U, 2780U, 2497U, 2245U, 1796U, 1104U, 2222U, 
    3763U, 2935U, 2977U, 2510U, 4125U, 2954U, 2523U, 2991U, 
    2473U, 4641U, 4251U, 3009U, 4667U, 4701U, 5004U, 4709U, 
    5012U, 3446U, 2652U, 2925U, 4425U, 1842U, 4686U, 3371U, 
    3330U, 3354U, 4590U, 566U, 5135U, 253U, 5054U, 386U, 
    5089U, 238U, 5036U, 545U, 5120U, 600U, 5150U, 279U, 
    5072U, 82U, 5020U, 407U, 5104U, 627U, 3158U, 665U, 
    3247U, 2783U, 1800U, 4130U, 4255U, 1846U, 1119U, 3781U, 
    4183U, 3377U, 3111U, 3181U, 3276U, 3400U, 4161U, 707U, 
    0U, 4559U, 4589U, 1134U, 1897U, 2817U, 1196U, 18U, 
    1942U, 122U, 2862U, 173U, 2543U, 1680U, 2773U, 589U, 
    611U, 2920U, 4585U, 699U, 3361U, 3152U, 3240U, 3751U, 
    3864U, 3490U, 3370U, 1024U, 664U, 3246U, 4115U, 3728U, 
    3376U, 4598U, 1061U, 3163U, 3737U, 3382U, 4607U, 1786U, 
    694U, 3349U, 3723U, 1100U, 2217U, 3758U, 2936U, 1893U, 
    2434U, 4237U, 2978U, 4121U, 2955U, 1944U, 2456U, 4243U, 
    2992U, 4624U, 714U, 3502U, 702U, 3466U, 1109U, 3769U, 
    2942U, 1892U, 4236U, 2984U, 2023U, 4242U, 2997U, 1139U, 
    1902U, 2822U, 1201U, 1947U, 2872U, 1827U, 3192U, 3282U, 
    3411U, 724U, 1321U, 3884U, 3513U, 3198U, 3288U, 3417U, 
    4248U, 3010U, 4478U, 1868U, 4214U, 4372U, 4457U, 3216U, 
    4717U, 3306U, 4730U, 1860U, 1129U, 3793U, 4209U, 4368U, 
    3434U, 4743U, 4552U, 645U, 3222U, 689U, 3312U, 4377U, 
    4664U, 3732U, 3741U, 4381U, 618U, 3146U, 655U, 3234U, 
    631U, 3187U, 669U, 3252U, 674U, 3258U, 2439U, 2027U, 
    2460U, 4628U, 1814U, 4135U, 4428U, 640U, 3210U, 684U, 
    3300U, 2255U, 1850U, 1124U, 2234U, 3787U, 4188U, 4333U, 
    4690U, 1020U, 4993U, 2444U, 2450U, 2468U, 2530U, 4654U, 
    3406U, 650U, 3228U, 3058U, 1836U, 4157U, 2726U, 2477U, 
    1157U, 1920U, 2840U, 1219U, 37U, 1965U, 141U, 2890U, 
    192U, 4646U, 4275U, 2756U, 4675U, 3094U, 1839U, 4163U, 
    2731U, 2480U, 1174U, 1937U, 2857U, 1236U, 56U, 2000U, 
    160U, 2907U, 211U, 4650U, 4306U, 2760U, 4678U, 4453U, 
    1286U, 105U, 1667U, 1789U, 113U, 2912U, 1804U, 1292U, 
    1298U, 1304U, 4423U, 641U, 3211U, 685U, 3301U, 1843U, 
    1120U, 3782U, 4184U, 2736U, 2030U, 4632U, 3029U, 698U, 
    1281U, 3360U, 2250U, 1823U, 3348U, 1114U, 2228U, 3775U, 
    4140U, 2720U, 2916U, 1809U, 2695U, 4259U, 2751U, 4671U, 
    635U, 3204U, 679U, 3294U, 3423U, 4330U, 614U, 1276U, 
    2664U, 2764U, 3014U, 1818U, 2700U, 4475U, 594U, 233U, 
    4579U, 1016U, 12U, 4565U, 4593U, 1040U, 4602U, 1064U, 
    4611U, 1864U, 2960U, 2033U, 167U, 4572U, 3003U, 218U, 
    4636U, 1831U, 868U, 5U, 1468U, 3018U, 226U, 4482U, 
    1873U, 4555U, 4694U, 3429U, 4687U, 398U, 557U, 578U, 
    95U, 420U, 4533U, 1879U, 4232U, 2741U, 2534U, 1191U, 
    1253U, 75U, 4659U, 4378U, 2768U, 4698U, 268U, 441U, 
};

static inline void InitSystemZMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(SystemZInsts, SystemZInstrNameIndices, SystemZInstrNameData, 720);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct SystemZGenInstrInfo : public TargetInstrInfo {
  explicit SystemZGenInstrInfo(int SO = -1, int DO = -1);
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR
#undef GET_INSTRINFO_CTOR
namespace llvm {
extern const MCInstrDesc SystemZInsts[];
extern const unsigned SystemZInstrNameIndices[];
extern const char SystemZInstrNameData[];
SystemZGenInstrInfo::SystemZGenInstrInfo(int SO, int DO)
  : TargetInstrInfo(SO, DO) {
  InitMCInstrInfo(SystemZInsts, SystemZInstrNameIndices, SystemZInstrNameData, 720);
}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {namespace SystemZ {
namespace OpName { 
enum {
OPERAND_LAST
};
} // End namespace OpName
} // End namespace SystemZ
} // End namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM
#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {namespace SystemZ {
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // End namespace SystemZ
} // End namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS
#ifdef GET_INSTRMAP_INFO
#undef GET_INSTRMAP_INFO
namespace llvm {

namespace SystemZ {

enum DispSize {
	DispSize_12,
	DispSize_20
};

enum NumOpsValue {
	NumOpsValue_3
};

enum OpType {
	OpType_mem
};

// getDisp12Opcode
int getDisp12Opcode(uint16_t Opcode) {
static const uint16_t getDisp12OpcodeTable[][2] = {
  { SystemZ::AHY, SystemZ::AH },
  { SystemZ::ALY, SystemZ::AL },
  { SystemZ::AY, SystemZ::A },
  { SystemZ::CHY, SystemZ::CH },
  { SystemZ::CLIY, SystemZ::CLI },
  { SystemZ::CLY, SystemZ::CL },
  { SystemZ::CSY, SystemZ::CS },
  { SystemZ::CY, SystemZ::C },
  { SystemZ::IC32Y, SystemZ::IC32 },
  { SystemZ::ICY, SystemZ::IC },
  { SystemZ::LAY, SystemZ::LA },
  { SystemZ::LDY, SystemZ::LD },
  { SystemZ::LEY, SystemZ::LE },
  { SystemZ::LHY, SystemZ::LH },
  { SystemZ::LY, SystemZ::L },
  { SystemZ::MHY, SystemZ::MH },
  { SystemZ::MSY, SystemZ::MS },
  { SystemZ::MVIY, SystemZ::MVI },
  { SystemZ::NIY, SystemZ::NI },
  { SystemZ::NY, SystemZ::N },
  { SystemZ::OIY, SystemZ::OI },
  { SystemZ::OY, SystemZ::O },
  { SystemZ::SHY, SystemZ::SH },
  { SystemZ::SLY, SystemZ::SL },
  { SystemZ::ST32Y, SystemZ::ST32 },
  { SystemZ::STC32Y, SystemZ::STC32 },
  { SystemZ::STCY, SystemZ::STC },
  { SystemZ::STDY, SystemZ::STD },
  { SystemZ::STEY, SystemZ::STE },
  { SystemZ::STH32Y, SystemZ::STH32 },
  { SystemZ::STHY, SystemZ::STH },
  { SystemZ::STY, SystemZ::ST },
  { SystemZ::SY, SystemZ::S },
  { SystemZ::XIY, SystemZ::XI },
  { SystemZ::XY, SystemZ::X },
}; // End of getDisp12OpcodeTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 35;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == getDisp12OpcodeTable[mid][0]) {
      break;
    }
    if (Opcode < getDisp12OpcodeTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return getDisp12OpcodeTable[mid][1];
}

// getDisp20Opcode
int getDisp20Opcode(uint16_t Opcode) {
static const uint16_t getDisp20OpcodeTable[][2] = {
  { SystemZ::A, SystemZ::AY },
  { SystemZ::AH, SystemZ::AHY },
  { SystemZ::AL, SystemZ::ALY },
  { SystemZ::C, SystemZ::CY },
  { SystemZ::CH, SystemZ::CHY },
  { SystemZ::CL, SystemZ::CLY },
  { SystemZ::CLI, SystemZ::CLIY },
  { SystemZ::CS, SystemZ::CSY },
  { SystemZ::IC, SystemZ::ICY },
  { SystemZ::IC32, SystemZ::IC32Y },
  { SystemZ::L, SystemZ::LY },
  { SystemZ::LA, SystemZ::LAY },
  { SystemZ::LD, SystemZ::LDY },
  { SystemZ::LE, SystemZ::LEY },
  { SystemZ::LH, SystemZ::LHY },
  { SystemZ::MH, SystemZ::MHY },
  { SystemZ::MS, SystemZ::MSY },
  { SystemZ::MVI, SystemZ::MVIY },
  { SystemZ::N, SystemZ::NY },
  { SystemZ::NI, SystemZ::NIY },
  { SystemZ::O, SystemZ::OY },
  { SystemZ::OI, SystemZ::OIY },
  { SystemZ::S, SystemZ::SY },
  { SystemZ::SH, SystemZ::SHY },
  { SystemZ::SL, SystemZ::SLY },
  { SystemZ::ST, SystemZ::STY },
  { SystemZ::ST32, SystemZ::ST32Y },
  { SystemZ::STC, SystemZ::STCY },
  { SystemZ::STC32, SystemZ::STC32Y },
  { SystemZ::STD, SystemZ::STDY },
  { SystemZ::STE, SystemZ::STEY },
  { SystemZ::STH, SystemZ::STHY },
  { SystemZ::STH32, SystemZ::STH32Y },
  { SystemZ::X, SystemZ::XY },
  { SystemZ::XI, SystemZ::XIY },
}; // End of getDisp20OpcodeTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 35;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == getDisp20OpcodeTable[mid][0]) {
      break;
    }
    if (Opcode < getDisp20OpcodeTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return getDisp20OpcodeTable[mid][1];
}

// getMemOpcode
int getMemOpcode(uint16_t Opcode) {
static const uint16_t getMemOpcodeTable[][2] = {
  { SystemZ::ADBR, SystemZ::ADB },
  { SystemZ::AEBR, SystemZ::AEB },
  { SystemZ::AGFR, SystemZ::AGF },
  { SystemZ::AGR, SystemZ::AG },
  { SystemZ::ALCGR, SystemZ::ALCG },
  { SystemZ::ALCR, SystemZ::ALC },
  { SystemZ::ALGFR, SystemZ::ALGF },
  { SystemZ::ALGR, SystemZ::ALG },
  { SystemZ::ALR, SystemZ::AL },
  { SystemZ::AR, SystemZ::A },
  { SystemZ::CDBR, SystemZ::CDB },
  { SystemZ::CEBR, SystemZ::CEB },
  { SystemZ::CGFR, SystemZ::CGF },
  { SystemZ::CGR, SystemZ::CG },
  { SystemZ::CLGFR, SystemZ::CLGF },
  { SystemZ::CLGR, SystemZ::CLG },
  { SystemZ::CLR, SystemZ::CL },
  { SystemZ::CR, SystemZ::C },
  { SystemZ::DDBR, SystemZ::DDB },
  { SystemZ::DEBR, SystemZ::DEB },
  { SystemZ::DLGR, SystemZ::DLG },
  { SystemZ::DLR, SystemZ::DL },
  { SystemZ::DSGFR, SystemZ::DSGF },
  { SystemZ::DSGR, SystemZ::DSG },
  { SystemZ::LBR, SystemZ::LB },
  { SystemZ::LDEBR, SystemZ::LDEB },
  { SystemZ::LDR, SystemZ::LD },
  { SystemZ::LER, SystemZ::LE },
  { SystemZ::LGBR, SystemZ::LGB },
  { SystemZ::LGFR, SystemZ::LGF },
  { SystemZ::LGHR, SystemZ::LGH },
  { SystemZ::LGR, SystemZ::LG },
  { SystemZ::LHR, SystemZ::LH },
  { SystemZ::LLCR, SystemZ::LLC },
  { SystemZ::LLGCR, SystemZ::LLGC },
  { SystemZ::LLGFR, SystemZ::LLGF },
  { SystemZ::LLGHR, SystemZ::LLGH },
  { SystemZ::LLHR, SystemZ::LLH },
  { SystemZ::LR, SystemZ::L },
  { SystemZ::LRVGR, SystemZ::LRVG },
  { SystemZ::LRVR, SystemZ::LRV },
  { SystemZ::LTGFR, SystemZ::LTGF },
  { SystemZ::LTGR, SystemZ::LTG },
  { SystemZ::LTR, SystemZ::LT },
  { SystemZ::LXDBR, SystemZ::LXDB },
  { SystemZ::LXEBR, SystemZ::LXEB },
  { SystemZ::MADBR, SystemZ::MADB },
  { SystemZ::MAEBR, SystemZ::MAEB },
  { SystemZ::MDBR, SystemZ::MDB },
  { SystemZ::MDEBR, SystemZ::MDEB },
  { SystemZ::MEEBR, SystemZ::MEEB },
  { SystemZ::MLGR, SystemZ::MLG },
  { SystemZ::MSDBR, SystemZ::MSDB },
  { SystemZ::MSEBR, SystemZ::MSEB },
  { SystemZ::MSGFR, SystemZ::MSGF },
  { SystemZ::MSGR, SystemZ::MSG },
  { SystemZ::MSR, SystemZ::MS },
  { SystemZ::MXDBR, SystemZ::MXDB },
  { SystemZ::NGR, SystemZ::NG },
  { SystemZ::NR, SystemZ::N },
  { SystemZ::OGR, SystemZ::OG },
  { SystemZ::OR, SystemZ::O },
  { SystemZ::SDBR, SystemZ::SDB },
  { SystemZ::SEBR, SystemZ::SEB },
  { SystemZ::SGFR, SystemZ::SGF },
  { SystemZ::SGR, SystemZ::SG },
  { SystemZ::SLBR, SystemZ::SLB },
  { SystemZ::SLGBR, SystemZ::SLBG },
  { SystemZ::SLGFR, SystemZ::SLGF },
  { SystemZ::SLGR, SystemZ::SLG },
  { SystemZ::SLR, SystemZ::SL },
  { SystemZ::SQDBR, SystemZ::SQDB },
  { SystemZ::SQEBR, SystemZ::SQEB },
  { SystemZ::SR, SystemZ::S },
  { SystemZ::XGR, SystemZ::XG },
  { SystemZ::XR, SystemZ::X },
}; // End of getMemOpcodeTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 76;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == getMemOpcodeTable[mid][0]) {
      break;
    }
    if (Opcode < getMemOpcodeTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return getMemOpcodeTable[mid][1];
}

// getThreeOperandOpcode
int getThreeOperandOpcode(uint16_t Opcode) {
static const uint16_t getThreeOperandOpcodeTable[][2] = {
  { SystemZ::AGHI, SystemZ::AGHIK },
  { SystemZ::AGR, SystemZ::AGRK },
  { SystemZ::AHI, SystemZ::AHIK },
  { SystemZ::ALGR, SystemZ::ALGRK },
  { SystemZ::ALR, SystemZ::ALRK },
  { SystemZ::AR, SystemZ::ARK },
  { SystemZ::NGR, SystemZ::NGRK },
  { SystemZ::NR, SystemZ::NRK },
  { SystemZ::OGR, SystemZ::OGRK },
  { SystemZ::OR, SystemZ::ORK },
  { SystemZ::SGR, SystemZ::SGRK },
  { SystemZ::SLGR, SystemZ::SLGRK },
  { SystemZ::SLL, SystemZ::SLLK },
  { SystemZ::SLR, SystemZ::SLRK },
  { SystemZ::SR, SystemZ::SRK },
  { SystemZ::SRA, SystemZ::SRAK },
  { SystemZ::SRL, SystemZ::SRLK },
  { SystemZ::XGR, SystemZ::XGRK },
  { SystemZ::XR, SystemZ::XRK },
}; // End of getThreeOperandOpcodeTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 19;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == getThreeOperandOpcodeTable[mid][0]) {
      break;
    }
    if (Opcode < getThreeOperandOpcodeTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return getThreeOperandOpcodeTable[mid][1];
}

} // End SystemZ namespace
} // End llvm namespace
#endif // GET_INSTRMAP_INFO

