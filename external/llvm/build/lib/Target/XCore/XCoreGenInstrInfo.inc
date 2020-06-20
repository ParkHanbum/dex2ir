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

namespace XCore {
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
    ADD_2rus	= 17,
    ADD_3r	= 18,
    ADJCALLSTACKDOWN	= 19,
    ADJCALLSTACKUP	= 20,
    ANDNOT_2r	= 21,
    AND_3r	= 22,
    ASHR_l2rus	= 23,
    ASHR_l3r	= 24,
    BAU_1r	= 25,
    BITREV_l2r	= 26,
    BLACP_lu10	= 27,
    BLACP_u10	= 28,
    BLAT_lu6	= 29,
    BLAT_u6	= 30,
    BLA_1r	= 31,
    BLRB_lu10	= 32,
    BLRB_u10	= 33,
    BLRF_lu10	= 34,
    BLRF_u10	= 35,
    BRBF_lru6	= 36,
    BRBF_ru6	= 37,
    BRBT_lru6	= 38,
    BRBT_ru6	= 39,
    BRBU_lu6	= 40,
    BRBU_u6	= 41,
    BRFF_lru6	= 42,
    BRFF_ru6	= 43,
    BRFT_lru6	= 44,
    BRFT_ru6	= 45,
    BRFU_lu6	= 46,
    BRFU_u6	= 47,
    BRU_1r	= 48,
    BR_JT	= 49,
    BR_JT32	= 50,
    BYTEREV_l2r	= 51,
    CHKCT_2r	= 52,
    CHKCT_rus	= 53,
    CLRE_0R	= 54,
    CLRPT_1R	= 55,
    CLRSR_branch_lu6	= 56,
    CLRSR_branch_u6	= 57,
    CLRSR_lu6	= 58,
    CLRSR_u6	= 59,
    CLZ_l2r	= 60,
    CRC8_l4r	= 61,
    CRC_l3r	= 62,
    DCALL_0R	= 63,
    DENTSP_0R	= 64,
    DGETREG_1r	= 65,
    DIVS_l3r	= 66,
    DIVU_l3r	= 67,
    DRESTSP_0R	= 68,
    DRET_0R	= 69,
    ECALLF_1r	= 70,
    ECALLT_1r	= 71,
    EDU_1r	= 72,
    EEF_2r	= 73,
    EET_2r	= 74,
    EEU_1r	= 75,
    ENDIN_2r	= 76,
    ENTSP_lu6	= 77,
    ENTSP_u6	= 78,
    EQ_2rus	= 79,
    EQ_3r	= 80,
    EXTDP_lu6	= 81,
    EXTDP_u6	= 82,
    EXTSP_lu6	= 83,
    EXTSP_u6	= 84,
    FREER_1r	= 85,
    FREET_0R	= 86,
    GETD_l2r	= 87,
    GETED_0R	= 88,
    GETET_0R	= 89,
    GETID_0R	= 90,
    GETKEP_0R	= 91,
    GETKSP_0R	= 92,
    GETN_l2r	= 93,
    GETPS_l2r	= 94,
    GETR_rus	= 95,
    GETSR_lu6	= 96,
    GETSR_u6	= 97,
    GETST_2r	= 98,
    GETTS_2r	= 99,
    INCT_2r	= 100,
    INITCP_2r	= 101,
    INITDP_2r	= 102,
    INITLR_l2r	= 103,
    INITPC_2r	= 104,
    INITSP_2r	= 105,
    INPW_l2rus	= 106,
    INSHR_2r	= 107,
    INT_2r	= 108,
    IN_2r	= 109,
    KCALL_1r	= 110,
    KCALL_lu6	= 111,
    KCALL_u6	= 112,
    KENTSP_lu6	= 113,
    KENTSP_u6	= 114,
    KRESTSP_lu6	= 115,
    KRESTSP_u6	= 116,
    KRET_0R	= 117,
    LADD_l5r	= 118,
    LD16S_3r	= 119,
    LD8U_3r	= 120,
    LDA16B_l3r	= 121,
    LDA16F_l3r	= 122,
    LDAPB_lu10	= 123,
    LDAPB_u10	= 124,
    LDAPF_lu10	= 125,
    LDAPF_lu10_ba	= 126,
    LDAPF_u10	= 127,
    LDAWB_l2rus	= 128,
    LDAWB_l3r	= 129,
    LDAWCP_lu6	= 130,
    LDAWCP_u6	= 131,
    LDAWDP_lru6	= 132,
    LDAWDP_ru6	= 133,
    LDAWFI	= 134,
    LDAWF_l2rus	= 135,
    LDAWF_l3r	= 136,
    LDAWSP_lru6	= 137,
    LDAWSP_ru6	= 138,
    LDC_lru6	= 139,
    LDC_ru6	= 140,
    LDET_0R	= 141,
    LDIVU_l5r	= 142,
    LDSED_0R	= 143,
    LDSPC_0R	= 144,
    LDSSR_0R	= 145,
    LDWCP_lru6	= 146,
    LDWCP_lu10	= 147,
    LDWCP_ru6	= 148,
    LDWCP_u10	= 149,
    LDWDP_lru6	= 150,
    LDWDP_ru6	= 151,
    LDWFI	= 152,
    LDWSP_lru6	= 153,
    LDWSP_ru6	= 154,
    LDW_2rus	= 155,
    LDW_3r	= 156,
    LMUL_l6r	= 157,
    LSS_3r	= 158,
    LSUB_l5r	= 159,
    LSU_3r	= 160,
    MACCS_l4r	= 161,
    MACCU_l4r	= 162,
    MJOIN_1r	= 163,
    MKMSK_2r	= 164,
    MKMSK_rus	= 165,
    MSYNC_1r	= 166,
    MUL_l3r	= 167,
    NEG	= 168,
    NOT	= 169,
    OR_3r	= 170,
    OUTCT_2r	= 171,
    OUTCT_rus	= 172,
    OUTPW_l2rus	= 173,
    OUTSHR_2r	= 174,
    OUTT_2r	= 175,
    OUT_2r	= 176,
    PEEK_2r	= 177,
    REMS_l3r	= 178,
    REMU_l3r	= 179,
    RETSP_lu6	= 180,
    RETSP_u6	= 181,
    SELECT_CC	= 182,
    SETCLK_l2r	= 183,
    SETCP_1r	= 184,
    SETC_l2r	= 185,
    SETC_lru6	= 186,
    SETC_ru6	= 187,
    SETDP_1r	= 188,
    SETD_2r	= 189,
    SETEV_1r	= 190,
    SETKEP_0R	= 191,
    SETN_l2r	= 192,
    SETPSC_2r	= 193,
    SETPS_l2r	= 194,
    SETPT_2r	= 195,
    SETRDY_l2r	= 196,
    SETSP_1r	= 197,
    SETSR_branch_lu6	= 198,
    SETSR_branch_u6	= 199,
    SETSR_lu6	= 200,
    SETSR_u6	= 201,
    SETTW_l2r	= 202,
    SETV_1r	= 203,
    SEXT_2r	= 204,
    SEXT_rus	= 205,
    SHL_2rus	= 206,
    SHL_3r	= 207,
    SHR_2rus	= 208,
    SHR_3r	= 209,
    SSYNC_0r	= 210,
    ST16_l3r	= 211,
    ST8_l3r	= 212,
    STET_0R	= 213,
    STSED_0R	= 214,
    STSPC_0R	= 215,
    STSSR_0R	= 216,
    STWDP_lru6	= 217,
    STWDP_ru6	= 218,
    STWFI	= 219,
    STWSP_lru6	= 220,
    STWSP_ru6	= 221,
    STW_2rus	= 222,
    STW_l3r	= 223,
    SUB_2rus	= 224,
    SUB_3r	= 225,
    SYNCR_1r	= 226,
    TESTCT_2r	= 227,
    TESTLCL_l2r	= 228,
    TESTWCT_2r	= 229,
    TSETMR_2r	= 230,
    TSETR_3r	= 231,
    TSTART_1R	= 232,
    WAITEF_1R	= 233,
    WAITET_1R	= 234,
    WAITEU_0R	= 235,
    XOR_l3r	= 236,
    ZEXT_2r	= 237,
    ZEXT_rus	= 238,
    INSTRUCTION_LIST_END = 239
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

static const uint16_t ImplicitList1[] = { XCore::SP, 0 };
static const uint16_t ImplicitList2[] = { XCore::R0, XCore::R1, XCore::R2, XCore::R3, XCore::R11, XCore::LR, 0 };
static const uint16_t ImplicitList3[] = { XCore::R11, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { XCore::RRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };

extern const MCInstrDesc XCoreInsts[] = {
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
  { 17,	3,	1,	0,	2,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #17 = ADD_2rus
  { 18,	3,	1,	0,	2,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #18 = ADD_3r
  { 19,	1,	0,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2 },  // Inst #19 = ADJCALLSTACKDOWN
  { 20,	2,	0,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo10 },  // Inst #20 = ADJCALLSTACKUP
  { 21,	3,	1,	0,	2,	0, 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #21 = ANDNOT_2r
  { 22,	3,	1,	0,	2,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #22 = AND_3r
  { 23,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #23 = ASHR_l2rus
  { 24,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #24 = ASHR_l3r
  { 25,	1,	0,	0,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #25 = BAU_1r
  { 26,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #26 = BITREV_l2r
  { 27,	1,	0,	0,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo2 },  // Inst #27 = BLACP_lu10
  { 28,	1,	0,	0,	2,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo2 },  // Inst #28 = BLACP_u10
  { 29,	1,	0,	0,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, NULL, OperandInfo2 },  // Inst #29 = BLAT_lu6
  { 30,	1,	0,	0,	2,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, NULL, OperandInfo2 },  // Inst #30 = BLAT_u6
  { 31,	1,	0,	0,	2,	0|(1<<MCID::Call), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo12 },  // Inst #31 = BLA_1r
  { 32,	1,	0,	0,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo5 },  // Inst #32 = BLRB_lu10
  { 33,	1,	0,	0,	2,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo5 },  // Inst #33 = BLRB_u10
  { 34,	1,	0,	0,	4,	0|(1<<MCID::Call), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo5 },  // Inst #34 = BLRF_lu10
  { 35,	1,	0,	0,	2,	0|(1<<MCID::Call), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo5 },  // Inst #35 = BLRF_u10
  { 36,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #36 = BRBF_lru6
  { 37,	2,	0,	0,	2,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #37 = BRBF_ru6
  { 38,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #38 = BRBT_lru6
  { 39,	2,	0,	0,	2,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #39 = BRBT_ru6
  { 40,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #40 = BRBU_lu6
  { 41,	1,	0,	0,	2,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #41 = BRBU_u6
  { 42,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #42 = BRFF_lru6
  { 43,	2,	0,	0,	2,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #43 = BRFF_ru6
  { 44,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #44 = BRFT_lru6
  { 45,	2,	0,	0,	2,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #45 = BRFT_ru6
  { 46,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #46 = BRFU_lu6
  { 47,	1,	0,	0,	2,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #47 = BRFU_u6
  { 48,	1,	0,	0,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #48 = BRU_1r
  { 49,	2,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #49 = BR_JT
  { 50,	2,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #50 = BR_JT32
  { 51,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #51 = BYTEREV_l2r
  { 52,	2,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #52 = CHKCT_2r
  { 53,	2,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #53 = CHKCT_rus
  { 54,	0,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #54 = CLRE_0R
  { 55,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #55 = CLRPT_1R
  { 56,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #56 = CLRSR_branch_lu6
  { 57,	1,	0,	0,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #57 = CLRSR_branch_u6
  { 58,	1,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #58 = CLRSR_lu6
  { 59,	1,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #59 = CLRSR_u6
  { 60,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #60 = CLZ_l2r
  { 61,	5,	2,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo17 },  // Inst #61 = CRC8_l4r
  { 62,	4,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #62 = CRC_l3r
  { 63,	0,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #63 = DCALL_0R
  { 64,	0,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, 0 },  // Inst #64 = DENTSP_0R
  { 65,	1,	1,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #65 = DGETREG_1r
  { 66,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #66 = DIVS_l3r
  { 67,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #67 = DIVU_l3r
  { 68,	0,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, 0 },  // Inst #68 = DRESTSP_0R
  { 69,	0,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #69 = DRET_0R
  { 70,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #70 = ECALLF_1r
  { 71,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #71 = ECALLT_1r
  { 72,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #72 = EDU_1r
  { 73,	2,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #73 = EEF_2r
  { 74,	2,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #74 = EET_2r
  { 75,	1,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #75 = EEU_1r
  { 76,	2,	1,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #76 = ENDIN_2r
  { 77,	1,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2 },  // Inst #77 = ENTSP_lu6
  { 78,	1,	0,	0,	2,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2 },  // Inst #78 = ENTSP_u6
  { 79,	3,	1,	0,	2,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #79 = EQ_2rus
  { 80,	3,	1,	0,	2,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #80 = EQ_3r
  { 81,	1,	0,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #81 = EXTDP_lu6
  { 82,	1,	0,	0,	2,	0, 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #82 = EXTDP_u6
  { 83,	1,	0,	0,	4,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2 },  // Inst #83 = EXTSP_lu6
  { 84,	1,	0,	0,	2,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2 },  // Inst #84 = EXTSP_u6
  { 85,	1,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #85 = FREER_1r
  { 86,	0,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #86 = FREET_0R
  { 87,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #87 = GETD_l2r
  { 88,	0,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList3, 0 },  // Inst #88 = GETED_0R
  { 89,	0,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList3, 0 },  // Inst #89 = GETET_0R
  { 90,	0,	0,	0,	2,	0, 0x0ULL, NULL, ImplicitList3, 0 },  // Inst #90 = GETID_0R
  { 91,	0,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList3, 0 },  // Inst #91 = GETKEP_0R
  { 92,	0,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList3, 0 },  // Inst #92 = GETKSP_0R
  { 93,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #93 = GETN_l2r
  { 94,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #94 = GETPS_l2r
  { 95,	2,	1,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #95 = GETR_rus
  { 96,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList3, OperandInfo2 },  // Inst #96 = GETSR_lu6
  { 97,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList3, OperandInfo2 },  // Inst #97 = GETSR_u6
  { 98,	2,	1,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #98 = GETST_2r
  { 99,	2,	1,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #99 = GETTS_2r
  { 100,	2,	1,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #100 = INCT_2r
  { 101,	2,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #101 = INITCP_2r
  { 102,	2,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #102 = INITDP_2r
  { 103,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #103 = INITLR_l2r
  { 104,	2,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #104 = INITPC_2r
  { 105,	2,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #105 = INITSP_2r
  { 106,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #106 = INPW_l2rus
  { 107,	3,	1,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #107 = INSHR_2r
  { 108,	2,	1,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #108 = INT_2r
  { 109,	2,	1,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #109 = IN_2r
  { 110,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #110 = KCALL_1r
  { 111,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #111 = KCALL_lu6
  { 112,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #112 = KCALL_u6
  { 113,	1,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2 },  // Inst #113 = KENTSP_lu6
  { 114,	1,	0,	0,	2,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2 },  // Inst #114 = KENTSP_u6
  { 115,	1,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2 },  // Inst #115 = KRESTSP_lu6
  { 116,	1,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2 },  // Inst #116 = KRESTSP_u6
  { 117,	0,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, 0 },  // Inst #117 = KRET_0R
  { 118,	5,	2,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #118 = LADD_l5r
  { 119,	3,	1,	0,	2,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #119 = LD16S_3r
  { 120,	3,	1,	0,	2,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #120 = LD8U_3r
  { 121,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #121 = LDA16B_l3r
  { 122,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #122 = LDA16F_l3r
  { 123,	1,	0,	0,	4,	0|(1<<MCID::Rematerializable), 0x0ULL, NULL, ImplicitList3, OperandInfo5 },  // Inst #123 = LDAPB_lu10
  { 124,	1,	0,	0,	2,	0|(1<<MCID::Rematerializable), 0x0ULL, NULL, ImplicitList3, OperandInfo5 },  // Inst #124 = LDAPB_u10
  { 125,	1,	0,	0,	4,	0|(1<<MCID::Rematerializable), 0x0ULL, NULL, ImplicitList3, OperandInfo5 },  // Inst #125 = LDAPF_lu10
  { 126,	1,	0,	0,	4,	0|(1<<MCID::Rematerializable), 0x0ULL, NULL, ImplicitList3, OperandInfo5 },  // Inst #126 = LDAPF_lu10_ba
  { 127,	1,	0,	0,	2,	0|(1<<MCID::Rematerializable), 0x0ULL, NULL, ImplicitList3, OperandInfo5 },  // Inst #127 = LDAPF_u10
  { 128,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #128 = LDAWB_l2rus
  { 129,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #129 = LDAWB_l3r
  { 130,	1,	0,	0,	4,	0|(1<<MCID::Rematerializable), 0x0ULL, NULL, ImplicitList3, OperandInfo2 },  // Inst #130 = LDAWCP_lu6
  { 131,	1,	0,	0,	2,	0|(1<<MCID::Rematerializable), 0x0ULL, NULL, ImplicitList3, OperandInfo2 },  // Inst #131 = LDAWCP_u6
  { 132,	2,	1,	0,	4,	0|(1<<MCID::Rematerializable), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #132 = LDAWDP_lru6
  { 133,	2,	1,	0,	2,	0|(1<<MCID::Rematerializable), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #133 = LDAWDP_ru6
  { 134,	3,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #134 = LDAWFI
  { 135,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #135 = LDAWF_l2rus
  { 136,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #136 = LDAWF_l3r
  { 137,	2,	1,	0,	4,	0, 0x0ULL, ImplicitList1, NULL, OperandInfo20 },  // Inst #137 = LDAWSP_lru6
  { 138,	2,	1,	0,	2,	0, 0x0ULL, ImplicitList1, NULL, OperandInfo20 },  // Inst #138 = LDAWSP_ru6
  { 139,	2,	1,	0,	4,	0|(1<<MCID::Rematerializable), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #139 = LDC_lru6
  { 140,	2,	1,	0,	2,	0|(1<<MCID::Rematerializable), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #140 = LDC_ru6
  { 141,	0,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, NULL, 0 },  // Inst #141 = LDET_0R
  { 142,	5,	2,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #142 = LDIVU_l5r
  { 143,	0,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, NULL, 0 },  // Inst #143 = LDSED_0R
  { 144,	0,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, NULL, 0 },  // Inst #144 = LDSPC_0R
  { 145,	0,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, NULL, 0 },  // Inst #145 = LDSSR_0R
  { 146,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::Rematerializable), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #146 = LDWCP_lru6
  { 147,	1,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::Rematerializable), 0x0ULL, NULL, ImplicitList3, OperandInfo2 },  // Inst #147 = LDWCP_lu10
  { 148,	2,	1,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::Rematerializable), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #148 = LDWCP_ru6
  { 149,	1,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::Rematerializable), 0x0ULL, NULL, ImplicitList3, OperandInfo2 },  // Inst #149 = LDWCP_u10
  { 150,	2,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #150 = LDWDP_lru6
  { 151,	2,	1,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #151 = LDWDP_ru6
  { 152,	3,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #152 = LDWFI
  { 153,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, NULL, OperandInfo20 },  // Inst #153 = LDWSP_lru6
  { 154,	2,	1,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, NULL, OperandInfo20 },  // Inst #154 = LDWSP_ru6
  { 155,	3,	1,	0,	2,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #155 = LDW_2rus
  { 156,	3,	1,	0,	2,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #156 = LDW_3r
  { 157,	6,	2,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo22 },  // Inst #157 = LMUL_l6r
  { 158,	3,	1,	0,	2,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #158 = LSS_3r
  { 159,	5,	2,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #159 = LSUB_l5r
  { 160,	3,	1,	0,	2,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #160 = LSU_3r
  { 161,	6,	2,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #161 = MACCS_l4r
  { 162,	6,	2,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #162 = MACCU_l4r
  { 163,	1,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #163 = MJOIN_1r
  { 164,	2,	1,	0,	2,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #164 = MKMSK_2r
  { 165,	2,	1,	0,	2,	0|(1<<MCID::Rematerializable), 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #165 = MKMSK_rus
  { 166,	1,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #166 = MSYNC_1r
  { 167,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #167 = MUL_l3r
  { 168,	2,	1,	0,	2,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #168 = NEG
  { 169,	2,	1,	0,	2,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #169 = NOT
  { 170,	3,	1,	0,	2,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #170 = OR_3r
  { 171,	2,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #171 = OUTCT_2r
  { 172,	2,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #172 = OUTCT_rus
  { 173,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #173 = OUTPW_l2rus
  { 174,	3,	1,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #174 = OUTSHR_2r
  { 175,	2,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #175 = OUTT_2r
  { 176,	2,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #176 = OUT_2r
  { 177,	2,	1,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #177 = PEEK_2r
  { 178,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #178 = REMS_l3r
  { 179,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #179 = REMU_l3r
  { 180,	1,	0,	0,	4,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::MayLoad)|(1<<MCID::Terminator), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2 },  // Inst #180 = RETSP_lu6
  { 181,	1,	0,	0,	2,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::MayLoad)|(1<<MCID::Terminator), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2 },  // Inst #181 = RETSP_u6
  { 182,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #182 = SELECT_CC
  { 183,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #183 = SETCLK_l2r
  { 184,	1,	0,	0,	2,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #184 = SETCP_1r
  { 185,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #185 = SETC_l2r
  { 186,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #186 = SETC_lru6
  { 187,	2,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #187 = SETC_ru6
  { 188,	1,	0,	0,	2,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #188 = SETDP_1r
  { 189,	2,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #189 = SETD_2r
  { 190,	1,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, NULL, OperandInfo12 },  // Inst #190 = SETEV_1r
  { 191,	0,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, NULL, 0 },  // Inst #191 = SETKEP_0R
  { 192,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #192 = SETN_l2r
  { 193,	2,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #193 = SETPSC_2r
  { 194,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #194 = SETPS_l2r
  { 195,	2,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #195 = SETPT_2r
  { 196,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #196 = SETRDY_l2r
  { 197,	1,	0,	0,	2,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo12 },  // Inst #197 = SETSP_1r
  { 198,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #198 = SETSR_branch_lu6
  { 199,	1,	0,	0,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #199 = SETSR_branch_u6
  { 200,	1,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #200 = SETSR_lu6
  { 201,	1,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #201 = SETSR_u6
  { 202,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #202 = SETTW_l2r
  { 203,	1,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, NULL, OperandInfo12 },  // Inst #203 = SETV_1r
  { 204,	3,	1,	0,	2,	0, 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #204 = SEXT_2r
  { 205,	3,	1,	0,	2,	0, 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #205 = SEXT_rus
  { 206,	3,	1,	0,	2,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #206 = SHL_2rus
  { 207,	3,	1,	0,	2,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #207 = SHL_3r
  { 208,	3,	1,	0,	2,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #208 = SHR_2rus
  { 209,	3,	1,	0,	2,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #209 = SHR_3r
  { 210,	0,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #210 = SSYNC_0r
  { 211,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #211 = ST16_l3r
  { 212,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #212 = ST8_l3r
  { 213,	0,	0,	0,	2,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, NULL, 0 },  // Inst #213 = STET_0R
  { 214,	0,	0,	0,	2,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, NULL, 0 },  // Inst #214 = STSED_0R
  { 215,	0,	0,	0,	2,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, NULL, 0 },  // Inst #215 = STSPC_0R
  { 216,	0,	0,	0,	2,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, NULL, 0 },  // Inst #216 = STSSR_0R
  { 217,	2,	0,	0,	4,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #217 = STWDP_lru6
  { 218,	2,	0,	0,	2,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #218 = STWDP_ru6
  { 219,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #219 = STWFI
  { 220,	2,	0,	0,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList1, NULL, OperandInfo20 },  // Inst #220 = STWSP_lru6
  { 221,	2,	0,	0,	2,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList1, NULL, OperandInfo20 },  // Inst #221 = STWSP_ru6
  { 222,	3,	0,	0,	2,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #222 = STW_2rus
  { 223,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #223 = STW_l3r
  { 224,	3,	1,	0,	2,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #224 = SUB_2rus
  { 225,	3,	1,	0,	2,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #225 = SUB_3r
  { 226,	1,	0,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #226 = SYNCR_1r
  { 227,	2,	1,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #227 = TESTCT_2r
  { 228,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #228 = TESTLCL_l2r
  { 229,	2,	1,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #229 = TESTWCT_2r
  { 230,	2,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo26 },  // Inst #230 = TSETMR_2r
  { 231,	3,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #231 = TSETR_3r
  { 232,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #232 = TSTART_1R
  { 233,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #233 = WAITEF_1R
  { 234,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #234 = WAITET_1R
  { 235,	0,	0,	0,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::MayLoad)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #235 = WAITEU_0R
  { 236,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #236 = XOR_l3r
  { 237,	3,	1,	0,	2,	0, 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #237 = ZEXT_2r
  { 238,	3,	1,	0,	2,	0, 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #238 = ZEXT_rus
};

extern const char XCoreInstrNameData[] = {
  /* 0 */ 'L', 'D', 'A', 'P', 'B', '_', 'u', '1', '0', 0,
  /* 10 */ 'B', 'L', 'R', 'B', '_', 'u', '1', '0', 0,
  /* 19 */ 'L', 'D', 'A', 'P', 'F', '_', 'u', '1', '0', 0,
  /* 29 */ 'B', 'L', 'R', 'F', '_', 'u', '1', '0', 0,
  /* 38 */ 'B', 'L', 'A', 'C', 'P', '_', 'u', '1', '0', 0,
  /* 48 */ 'L', 'D', 'W', 'C', 'P', '_', 'u', '1', '0', 0,
  /* 58 */ 'L', 'D', 'A', 'P', 'B', '_', 'l', 'u', '1', '0', 0,
  /* 69 */ 'B', 'L', 'R', 'B', '_', 'l', 'u', '1', '0', 0,
  /* 79 */ 'L', 'D', 'A', 'P', 'F', '_', 'l', 'u', '1', '0', 0,
  /* 90 */ 'B', 'L', 'R', 'F', '_', 'l', 'u', '1', '0', 0,
  /* 100 */ 'B', 'L', 'A', 'C', 'P', '_', 'l', 'u', '1', '0', 0,
  /* 111 */ 'L', 'D', 'W', 'C', 'P', '_', 'l', 'u', '1', '0', 0,
  /* 122 */ 'B', 'R', '_', 'J', 'T', '3', '2', 0,
  /* 130 */ 'K', 'C', 'A', 'L', 'L', '_', 'u', '6', 0,
  /* 139 */ 'L', 'D', 'A', 'W', 'C', 'P', '_', 'u', '6', 0,
  /* 149 */ 'E', 'X', 'T', 'D', 'P', '_', 'u', '6', 0,
  /* 158 */ 'R', 'E', 'T', 'S', 'P', '_', 'u', '6', 0,
  /* 167 */ 'K', 'E', 'N', 'T', 'S', 'P', '_', 'u', '6', 0,
  /* 177 */ 'K', 'R', 'E', 'S', 'T', 'S', 'P', '_', 'u', '6', 0,
  /* 188 */ 'E', 'X', 'T', 'S', 'P', '_', 'u', '6', 0,
  /* 197 */ 'C', 'L', 'R', 'S', 'R', '_', 'u', '6', 0,
  /* 206 */ 'G', 'E', 'T', 'S', 'R', '_', 'u', '6', 0,
  /* 215 */ 'S', 'E', 'T', 'S', 'R', '_', 'u', '6', 0,
  /* 224 */ 'B', 'L', 'A', 'T', '_', 'u', '6', 0,
  /* 232 */ 'B', 'R', 'B', 'U', '_', 'u', '6', 0,
  /* 240 */ 'B', 'R', 'F', 'U', '_', 'u', '6', 0,
  /* 248 */ 'C', 'L', 'R', 'S', 'R', '_', 'b', 'r', 'a', 'n', 'c', 'h', '_', 'u', '6', 0,
  /* 264 */ 'S', 'E', 'T', 'S', 'R', '_', 'b', 'r', 'a', 'n', 'c', 'h', '_', 'u', '6', 0,
  /* 280 */ 'K', 'C', 'A', 'L', 'L', '_', 'l', 'u', '6', 0,
  /* 290 */ 'L', 'D', 'A', 'W', 'C', 'P', '_', 'l', 'u', '6', 0,
  /* 301 */ 'E', 'X', 'T', 'D', 'P', '_', 'l', 'u', '6', 0,
  /* 311 */ 'R', 'E', 'T', 'S', 'P', '_', 'l', 'u', '6', 0,
  /* 321 */ 'K', 'E', 'N', 'T', 'S', 'P', '_', 'l', 'u', '6', 0,
  /* 332 */ 'K', 'R', 'E', 'S', 'T', 'S', 'P', '_', 'l', 'u', '6', 0,
  /* 344 */ 'E', 'X', 'T', 'S', 'P', '_', 'l', 'u', '6', 0,
  /* 354 */ 'C', 'L', 'R', 'S', 'R', '_', 'l', 'u', '6', 0,
  /* 364 */ 'G', 'E', 'T', 'S', 'R', '_', 'l', 'u', '6', 0,
  /* 374 */ 'S', 'E', 'T', 'S', 'R', '_', 'l', 'u', '6', 0,
  /* 384 */ 'B', 'L', 'A', 'T', '_', 'l', 'u', '6', 0,
  /* 393 */ 'B', 'R', 'B', 'U', '_', 'l', 'u', '6', 0,
  /* 402 */ 'B', 'R', 'F', 'U', '_', 'l', 'u', '6', 0,
  /* 411 */ 'C', 'L', 'R', 'S', 'R', '_', 'b', 'r', 'a', 'n', 'c', 'h', '_', 'l', 'u', '6', 0,
  /* 428 */ 'S', 'E', 'T', 'S', 'R', '_', 'b', 'r', 'a', 'n', 'c', 'h', '_', 'l', 'u', '6', 0,
  /* 445 */ 'L', 'D', 'C', '_', 'r', 'u', '6', 0,
  /* 453 */ 'S', 'E', 'T', 'C', '_', 'r', 'u', '6', 0,
  /* 462 */ 'B', 'R', 'B', 'F', '_', 'r', 'u', '6', 0,
  /* 471 */ 'B', 'R', 'F', 'F', '_', 'r', 'u', '6', 0,
  /* 480 */ 'L', 'D', 'W', 'C', 'P', '_', 'r', 'u', '6', 0,
  /* 490 */ 'L', 'D', 'A', 'W', 'D', 'P', '_', 'r', 'u', '6', 0,
  /* 501 */ 'L', 'D', 'W', 'D', 'P', '_', 'r', 'u', '6', 0,
  /* 511 */ 'S', 'T', 'W', 'D', 'P', '_', 'r', 'u', '6', 0,
  /* 521 */ 'L', 'D', 'A', 'W', 'S', 'P', '_', 'r', 'u', '6', 0,
  /* 532 */ 'L', 'D', 'W', 'S', 'P', '_', 'r', 'u', '6', 0,
  /* 542 */ 'S', 'T', 'W', 'S', 'P', '_', 'r', 'u', '6', 0,
  /* 552 */ 'B', 'R', 'B', 'T', '_', 'r', 'u', '6', 0,
  /* 561 */ 'B', 'R', 'F', 'T', '_', 'r', 'u', '6', 0,
  /* 570 */ 'L', 'D', 'C', '_', 'l', 'r', 'u', '6', 0,
  /* 579 */ 'S', 'E', 'T', 'C', '_', 'l', 'r', 'u', '6', 0,
  /* 589 */ 'B', 'R', 'B', 'F', '_', 'l', 'r', 'u', '6', 0,
  /* 599 */ 'B', 'R', 'F', 'F', '_', 'l', 'r', 'u', '6', 0,
  /* 609 */ 'L', 'D', 'W', 'C', 'P', '_', 'l', 'r', 'u', '6', 0,
  /* 620 */ 'L', 'D', 'A', 'W', 'D', 'P', '_', 'l', 'r', 'u', '6', 0,
  /* 632 */ 'L', 'D', 'W', 'D', 'P', '_', 'l', 'r', 'u', '6', 0,
  /* 643 */ 'S', 'T', 'W', 'D', 'P', '_', 'l', 'r', 'u', '6', 0,
  /* 654 */ 'L', 'D', 'A', 'W', 'S', 'P', '_', 'l', 'r', 'u', '6', 0,
  /* 666 */ 'L', 'D', 'W', 'S', 'P', '_', 'l', 'r', 'u', '6', 0,
  /* 677 */ 'S', 'T', 'W', 'S', 'P', '_', 'l', 'r', 'u', '6', 0,
  /* 688 */ 'B', 'R', 'B', 'T', '_', 'l', 'r', 'u', '6', 0,
  /* 698 */ 'B', 'R', 'F', 'T', '_', 'l', 'r', 'u', '6', 0,
  /* 708 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', 0,
  /* 718 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 731 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 744 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 751 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 761 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 774 */ 'N', 'E', 'G', 0,
  /* 778 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 793 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 807 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 821 */ 'L', 'D', 'A', 'W', 'F', 'I', 0,
  /* 828 */ 'L', 'D', 'W', 'F', 'I', 0,
  /* 834 */ 'S', 'T', 'W', 'F', 'I', 0,
  /* 840 */ 'P', 'H', 'I', 0,
  /* 844 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 853 */ 'P', 'R', 'O', 'L', 'O', 'G', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 866 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 875 */ 'K', 'I', 'L', 'L', 0,
  /* 880 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 890 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 907 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 922 */ 'L', 'D', 'S', 'P', 'C', '_', '0', 'R', 0,
  /* 931 */ 'S', 'T', 'S', 'P', 'C', '_', '0', 'R', 0,
  /* 940 */ 'L', 'D', 'S', 'E', 'D', '_', '0', 'R', 0,
  /* 949 */ 'S', 'T', 'S', 'E', 'D', '_', '0', 'R', 0,
  /* 958 */ 'G', 'E', 'T', 'E', 'D', '_', '0', 'R', 0,
  /* 967 */ 'G', 'E', 'T', 'I', 'D', '_', '0', 'R', 0,
  /* 976 */ 'C', 'L', 'R', 'E', '_', '0', 'R', 0,
  /* 984 */ 'D', 'C', 'A', 'L', 'L', '_', '0', 'R', 0,
  /* 993 */ 'G', 'E', 'T', 'K', 'E', 'P', '_', '0', 'R', 0,
  /* 1003 */ 'S', 'E', 'T', 'K', 'E', 'P', '_', '0', 'R', 0,
  /* 1013 */ 'G', 'E', 'T', 'K', 'S', 'P', '_', '0', 'R', 0,
  /* 1023 */ 'D', 'E', 'N', 'T', 'S', 'P', '_', '0', 'R', 0,
  /* 1033 */ 'D', 'R', 'E', 'S', 'T', 'S', 'P', '_', '0', 'R', 0,
  /* 1044 */ 'L', 'D', 'S', 'S', 'R', '_', '0', 'R', 0,
  /* 1053 */ 'S', 'T', 'S', 'S', 'R', '_', '0', 'R', 0,
  /* 1062 */ 'L', 'D', 'E', 'T', '_', '0', 'R', 0,
  /* 1070 */ 'F', 'R', 'E', 'E', 'T', '_', '0', 'R', 0,
  /* 1079 */ 'D', 'R', 'E', 'T', '_', '0', 'R', 0,
  /* 1087 */ 'K', 'R', 'E', 'T', '_', '0', 'R', 0,
  /* 1095 */ 'G', 'E', 'T', 'E', 'T', '_', '0', 'R', 0,
  /* 1104 */ 'S', 'T', 'E', 'T', '_', '0', 'R', 0,
  /* 1112 */ 'W', 'A', 'I', 'T', 'E', 'U', '_', '0', 'R', 0,
  /* 1122 */ 'W', 'A', 'I', 'T', 'E', 'F', '_', '1', 'R', 0,
  /* 1132 */ 'W', 'A', 'I', 'T', 'E', 'T', '_', '1', 'R', 0,
  /* 1142 */ 'C', 'L', 'R', 'P', 'T', '_', '1', 'R', 0,
  /* 1151 */ 'T', 'S', 'T', 'A', 'R', 'T', '_', '1', 'R', 0,
  /* 1161 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 1178 */ 'B', 'R', '_', 'J', 'T', 0,
  /* 1184 */ 'N', 'O', 'T', 0,
  /* 1188 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 1203 */ 'C', 'O', 'P', 'Y', 0,
  /* 1208 */ 'L', 'D', 'A', 'P', 'F', '_', 'l', 'u', '1', '0', '_', 'b', 'a', 0,
  /* 1222 */ 'S', 'S', 'Y', 'N', 'C', '_', '0', 'r', 0,
  /* 1231 */ 'B', 'L', 'A', '_', '1', 'r', 0,
  /* 1238 */ 'M', 'S', 'Y', 'N', 'C', '_', '1', 'r', 0,
  /* 1247 */ 'E', 'C', 'A', 'L', 'L', 'F', '_', '1', 'r', 0,
  /* 1257 */ 'D', 'G', 'E', 'T', 'R', 'E', 'G', '_', '1', 'r', 0,
  /* 1268 */ 'K', 'C', 'A', 'L', 'L', '_', '1', 'r', 0,
  /* 1277 */ 'M', 'J', 'O', 'I', 'N', '_', '1', 'r', 0,
  /* 1286 */ 'S', 'E', 'T', 'C', 'P', '_', '1', 'r', 0,
  /* 1295 */ 'S', 'E', 'T', 'D', 'P', '_', '1', 'r', 0,
  /* 1304 */ 'S', 'E', 'T', 'S', 'P', '_', '1', 'r', 0,
  /* 1313 */ 'S', 'Y', 'N', 'C', 'R', '_', '1', 'r', 0,
  /* 1322 */ 'F', 'R', 'E', 'E', 'R', '_', '1', 'r', 0,
  /* 1331 */ 'E', 'C', 'A', 'L', 'L', 'T', '_', '1', 'r', 0,
  /* 1341 */ 'B', 'A', 'U', '_', '1', 'r', 0,
  /* 1348 */ 'E', 'D', 'U', '_', '1', 'r', 0,
  /* 1355 */ 'E', 'E', 'U', '_', '1', 'r', 0,
  /* 1362 */ 'B', 'R', 'U', '_', '1', 'r', 0,
  /* 1369 */ 'S', 'E', 'T', 'E', 'V', '_', '1', 'r', 0,
  /* 1378 */ 'S', 'E', 'T', 'V', '_', '1', 'r', 0,
  /* 1386 */ 'I', 'N', 'I', 'T', 'P', 'C', '_', '2', 'r', 0,
  /* 1396 */ 'S', 'E', 'T', 'P', 'S', 'C', '_', '2', 'r', 0,
  /* 1406 */ 'S', 'E', 'T', 'D', '_', '2', 'r', 0,
  /* 1414 */ 'E', 'E', 'F', '_', '2', 'r', 0,
  /* 1421 */ 'P', 'E', 'E', 'K', '_', '2', 'r', 0,
  /* 1429 */ 'M', 'K', 'M', 'S', 'K', '_', '2', 'r', 0,
  /* 1438 */ 'E', 'N', 'D', 'I', 'N', '_', '2', 'r', 0,
  /* 1447 */ 'I', 'N', 'I', 'T', 'C', 'P', '_', '2', 'r', 0,
  /* 1457 */ 'I', 'N', 'I', 'T', 'D', 'P', '_', '2', 'r', 0,
  /* 1467 */ 'I', 'N', 'I', 'T', 'S', 'P', '_', '2', 'r', 0,
  /* 1477 */ 'I', 'N', 'S', 'H', 'R', '_', '2', 'r', 0,
  /* 1486 */ 'O', 'U', 'T', 'S', 'H', 'R', '_', '2', 'r', 0,
  /* 1496 */ 'T', 'S', 'E', 'T', 'M', 'R', '_', '2', 'r', 0,
  /* 1506 */ 'G', 'E', 'T', 'T', 'S', '_', '2', 'r', 0,
  /* 1515 */ 'C', 'H', 'K', 'C', 'T', '_', '2', 'r', 0,
  /* 1524 */ 'I', 'N', 'C', 'T', '_', '2', 'r', 0,
  /* 1532 */ 'T', 'E', 'S', 'T', 'C', 'T', '_', '2', 'r', 0,
  /* 1542 */ 'O', 'U', 'T', 'C', 'T', '_', '2', 'r', 0,
  /* 1551 */ 'T', 'E', 'S', 'T', 'W', 'C', 'T', '_', '2', 'r', 0,
  /* 1562 */ 'E', 'E', 'T', '_', '2', 'r', 0,
  /* 1569 */ 'I', 'N', 'T', '_', '2', 'r', 0,
  /* 1576 */ 'A', 'N', 'D', 'N', 'O', 'T', '_', '2', 'r', 0,
  /* 1586 */ 'S', 'E', 'T', 'P', 'T', '_', '2', 'r', 0,
  /* 1595 */ 'G', 'E', 'T', 'S', 'T', '_', '2', 'r', 0,
  /* 1604 */ 'O', 'U', 'T', 'T', '_', '2', 'r', 0,
  /* 1612 */ 'O', 'U', 'T', '_', '2', 'r', 0,
  /* 1619 */ 'S', 'E', 'X', 'T', '_', '2', 'r', 0,
  /* 1627 */ 'Z', 'E', 'X', 'T', '_', '2', 'r', 0,
  /* 1635 */ 'S', 'E', 'T', 'C', '_', 'l', '2', 'r', 0,
  /* 1644 */ 'G', 'E', 'T', 'D', '_', 'l', '2', 'r', 0,
  /* 1653 */ 'S', 'E', 'T', 'C', 'L', 'K', '_', 'l', '2', 'r', 0,
  /* 1664 */ 'T', 'E', 'S', 'T', 'L', 'C', 'L', '_', 'l', '2', 'r', 0,
  /* 1676 */ 'G', 'E', 'T', 'N', '_', 'l', '2', 'r', 0,
  /* 1685 */ 'S', 'E', 'T', 'N', '_', 'l', '2', 'r', 0,
  /* 1694 */ 'I', 'N', 'I', 'T', 'L', 'R', '_', 'l', '2', 'r', 0,
  /* 1705 */ 'G', 'E', 'T', 'P', 'S', '_', 'l', '2', 'r', 0,
  /* 1715 */ 'S', 'E', 'T', 'P', 'S', '_', 'l', '2', 'r', 0,
  /* 1725 */ 'B', 'Y', 'T', 'E', 'R', 'E', 'V', '_', 'l', '2', 'r', 0,
  /* 1737 */ 'B', 'I', 'T', 'R', 'E', 'V', '_', 'l', '2', 'r', 0,
  /* 1748 */ 'S', 'E', 'T', 'T', 'W', '_', 'l', '2', 'r', 0,
  /* 1758 */ 'S', 'E', 'T', 'R', 'D', 'Y', '_', 'l', '2', 'r', 0,
  /* 1769 */ 'C', 'L', 'Z', '_', 'l', '2', 'r', 0,
  /* 1777 */ 'S', 'U', 'B', '_', '3', 'r', 0,
  /* 1784 */ 'A', 'D', 'D', '_', '3', 'r', 0,
  /* 1791 */ 'A', 'N', 'D', '_', '3', 'r', 0,
  /* 1798 */ 'S', 'H', 'L', '_', '3', 'r', 0,
  /* 1805 */ 'E', 'Q', '_', '3', 'r', 0,
  /* 1811 */ 'S', 'H', 'R', '_', '3', 'r', 0,
  /* 1818 */ 'O', 'R', '_', '3', 'r', 0,
  /* 1824 */ 'T', 'S', 'E', 'T', 'R', '_', '3', 'r', 0,
  /* 1833 */ 'L', 'D', '1', '6', 'S', '_', '3', 'r', 0,
  /* 1842 */ 'L', 'S', 'S', '_', '3', 'r', 0,
  /* 1849 */ 'L', 'D', '8', 'U', '_', '3', 'r', 0,
  /* 1857 */ 'L', 'S', 'U', '_', '3', 'r', 0,
  /* 1864 */ 'L', 'D', 'W', '_', '3', 'r', 0,
  /* 1871 */ 'S', 'T', '1', '6', '_', 'l', '3', 'r', 0,
  /* 1880 */ 'S', 'T', '8', '_', 'l', '3', 'r', 0,
  /* 1888 */ 'L', 'D', 'A', '1', '6', 'B', '_', 'l', '3', 'r', 0,
  /* 1899 */ 'L', 'D', 'A', 'W', 'B', '_', 'l', '3', 'r', 0,
  /* 1909 */ 'C', 'R', 'C', '_', 'l', '3', 'r', 0,
  /* 1917 */ 'L', 'D', 'A', '1', '6', 'F', '_', 'l', '3', 'r', 0,
  /* 1928 */ 'L', 'D', 'A', 'W', 'F', '_', 'l', '3', 'r', 0,
  /* 1938 */ 'M', 'U', 'L', '_', 'l', '3', 'r', 0,
  /* 1946 */ 'A', 'S', 'H', 'R', '_', 'l', '3', 'r', 0,
  /* 1955 */ 'X', 'O', 'R', '_', 'l', '3', 'r', 0,
  /* 1963 */ 'R', 'E', 'M', 'S', '_', 'l', '3', 'r', 0,
  /* 1972 */ 'D', 'I', 'V', 'S', '_', 'l', '3', 'r', 0,
  /* 1981 */ 'R', 'E', 'M', 'U', '_', 'l', '3', 'r', 0,
  /* 1990 */ 'D', 'I', 'V', 'U', '_', 'l', '3', 'r', 0,
  /* 1999 */ 'S', 'T', 'W', '_', 'l', '3', 'r', 0,
  /* 2007 */ 'C', 'R', 'C', '8', '_', 'l', '4', 'r', 0,
  /* 2016 */ 'M', 'A', 'C', 'C', 'S', '_', 'l', '4', 'r', 0,
  /* 2026 */ 'M', 'A', 'C', 'C', 'U', '_', 'l', '4', 'r', 0,
  /* 2036 */ 'L', 'S', 'U', 'B', '_', 'l', '5', 'r', 0,
  /* 2045 */ 'L', 'A', 'D', 'D', '_', 'l', '5', 'r', 0,
  /* 2054 */ 'L', 'D', 'I', 'V', 'U', '_', 'l', '5', 'r', 0,
  /* 2064 */ 'L', 'M', 'U', 'L', '_', 'l', '6', 'r', 0,
  /* 2073 */ 'S', 'U', 'B', '_', '2', 'r', 'u', 's', 0,
  /* 2082 */ 'A', 'D', 'D', '_', '2', 'r', 'u', 's', 0,
  /* 2091 */ 'S', 'H', 'L', '_', '2', 'r', 'u', 's', 0,
  /* 2100 */ 'E', 'Q', '_', '2', 'r', 'u', 's', 0,
  /* 2108 */ 'S', 'H', 'R', '_', '2', 'r', 'u', 's', 0,
  /* 2117 */ 'L', 'D', 'W', '_', '2', 'r', 'u', 's', 0,
  /* 2126 */ 'S', 'T', 'W', '_', '2', 'r', 'u', 's', 0,
  /* 2135 */ 'L', 'D', 'A', 'W', 'B', '_', 'l', '2', 'r', 'u', 's', 0,
  /* 2147 */ 'L', 'D', 'A', 'W', 'F', '_', 'l', '2', 'r', 'u', 's', 0,
  /* 2159 */ 'A', 'S', 'H', 'R', '_', 'l', '2', 'r', 'u', 's', 0,
  /* 2170 */ 'I', 'N', 'P', 'W', '_', 'l', '2', 'r', 'u', 's', 0,
  /* 2181 */ 'O', 'U', 'T', 'P', 'W', '_', 'l', '2', 'r', 'u', 's', 0,
  /* 2193 */ 'M', 'K', 'M', 'S', 'K', '_', 'r', 'u', 's', 0,
  /* 2203 */ 'G', 'E', 'T', 'R', '_', 'r', 'u', 's', 0,
  /* 2212 */ 'C', 'H', 'K', 'C', 'T', '_', 'r', 'u', 's', 0,
  /* 2222 */ 'O', 'U', 'T', 'C', 'T', '_', 'r', 'u', 's', 0,
  /* 2232 */ 'S', 'E', 'X', 'T', '_', 'r', 'u', 's', 0,
  /* 2241 */ 'Z', 'E', 'X', 'T', '_', 'r', 'u', 's', 0,
};

extern const unsigned XCoreInstrNameIndices[] = {
    840U, 880U, 853U, 866U, 844U, 875U, 778U, 793U, 
    761U, 807U, 1161U, 751U, 731U, 1203U, 744U, 1188U, 
    718U, 2082U, 1784U, 890U, 907U, 1576U, 1791U, 2159U, 
    1946U, 1341U, 1737U, 100U, 38U, 384U, 224U, 1231U, 
    69U, 10U, 90U, 29U, 589U, 462U, 688U, 552U, 
    393U, 232U, 599U, 471U, 698U, 561U, 402U, 240U, 
    1362U, 1178U, 122U, 1725U, 1515U, 2212U, 976U, 1142U, 
    411U, 248U, 354U, 197U, 1769U, 2007U, 1909U, 984U, 
    1023U, 1257U, 1972U, 1990U, 1033U, 1079U, 1247U, 1331U, 
    1348U, 1414U, 1562U, 1355U, 1438U, 322U, 168U, 2100U, 
    1805U, 301U, 149U, 344U, 188U, 1322U, 1070U, 1644U, 
    958U, 1095U, 967U, 993U, 1013U, 1676U, 1705U, 2203U, 
    364U, 206U, 1595U, 1506U, 1524U, 1447U, 1457U, 1694U, 
    1386U, 1467U, 2170U, 1477U, 1569U, 1441U, 1268U, 280U, 
    130U, 321U, 167U, 332U, 177U, 1087U, 2045U, 1833U, 
    1849U, 1888U, 1917U, 58U, 0U, 79U, 1208U, 19U, 
    2135U, 1899U, 290U, 139U, 620U, 490U, 821U, 2147U, 
    1928U, 654U, 521U, 570U, 445U, 1062U, 2054U, 940U, 
    922U, 1044U, 609U, 111U, 480U, 48U, 632U, 501U, 
    828U, 666U, 532U, 2117U, 1864U, 2064U, 1842U, 2036U, 
    1857U, 2016U, 2026U, 1277U, 1429U, 2193U, 1238U, 1938U, 
    774U, 1184U, 1818U, 1542U, 2222U, 2181U, 1486U, 1604U, 
    1612U, 1421U, 1963U, 1981U, 311U, 158U, 708U, 1653U, 
    1286U, 1635U, 579U, 453U, 1295U, 1406U, 1369U, 1003U, 
    1685U, 1396U, 1715U, 1586U, 1758U, 1304U, 428U, 264U, 
    374U, 215U, 1748U, 1378U, 1619U, 2232U, 2091U, 1798U, 
    2108U, 1811U, 1222U, 1871U, 1880U, 1104U, 949U, 931U, 
    1053U, 643U, 511U, 834U, 677U, 542U, 2126U, 1999U, 
    2073U, 1777U, 1313U, 1532U, 1664U, 1551U, 1496U, 1824U, 
    1151U, 1122U, 1132U, 1112U, 1955U, 1627U, 2241U, 
};

static inline void InitXCoreMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(XCoreInsts, XCoreInstrNameIndices, XCoreInstrNameData, 239);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct XCoreGenInstrInfo : public TargetInstrInfo {
  explicit XCoreGenInstrInfo(int SO = -1, int DO = -1);
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR
#undef GET_INSTRINFO_CTOR
namespace llvm {
extern const MCInstrDesc XCoreInsts[];
extern const unsigned XCoreInstrNameIndices[];
extern const char XCoreInstrNameData[];
XCoreGenInstrInfo::XCoreGenInstrInfo(int SO, int DO)
  : TargetInstrInfo(SO, DO) {
  InitMCInstrInfo(XCoreInsts, XCoreInstrNameIndices, XCoreInstrNameData, 239);
}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {namespace XCore {
namespace OpName { 
enum {
OPERAND_LAST
};
} // End namespace OpName
} // End namespace XCore
} // End namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM
#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {namespace XCore {
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // End namespace XCore
} // End namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS
