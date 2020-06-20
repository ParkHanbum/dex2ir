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
extern const MCRegisterClass MSP430MCRegisterClasses[];

namespace MSP430 {
enum {
  NoRegister,
  CGB = 1,
  CGW = 2,
  FPB = 3,
  FPW = 4,
  PCB = 5,
  PCW = 6,
  SPB = 7,
  SPW = 8,
  SRB = 9,
  SRW = 10,
  R5B = 11,
  R6B = 12,
  R7B = 13,
  R8B = 14,
  R9B = 15,
  R10B = 16,
  R11B = 17,
  R12B = 18,
  R13B = 19,
  R14B = 20,
  R15B = 21,
  R5W = 22,
  R6W = 23,
  R7W = 24,
  R8W = 25,
  R9W = 26,
  R10W = 27,
  R11W = 28,
  R12W = 29,
  R13W = 30,
  R14W = 31,
  R15W = 32,
  NUM_TARGET_REGS 	// 33
};
}

// Register classes
namespace MSP430 {
enum {
  GR8RegClassID = 0,
  GR16RegClassID = 1
  };
}

// Subregister indices
namespace MSP430 {
enum {
  NoSubRegister,
  subreg_8bit,	// 1
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

extern const MCPhysReg MSP430RegDiffLists[] = {
  /* 0 */ 0, 0,
  /* 2 */ 1, 0,
  /* 4 */ 2, 0,
  /* 6 */ 3, 0,
  /* 8 */ 4, 0,
  /* 10 */ 11, 0,
  /* 12 */ 65519, 0,
  /* 14 */ 65525, 0,
  /* 16 */ 65530, 0,
  /* 18 */ 65535, 0,
};

extern const uint16_t MSP430SubRegIdxLists[] = {
  /* 0 */ 1, 0,
};

extern const MCRegisterInfo::SubRegCoveredBits MSP430SubRegIdxRanges[] = {
  { 65535, 65535 },
  { 0, 8 },	// subreg_8bit
};

extern const char MSP430RegStrings[] = {
  /* 0 */ 'R', '1', '0', 'B', 0,
  /* 5 */ 'R', '1', '1', 'B', 0,
  /* 10 */ 'R', '1', '2', 'B', 0,
  /* 15 */ 'R', '1', '3', 'B', 0,
  /* 20 */ 'R', '1', '4', 'B', 0,
  /* 25 */ 'R', '1', '5', 'B', 0,
  /* 30 */ 'R', '5', 'B', 0,
  /* 34 */ 'R', '6', 'B', 0,
  /* 38 */ 'R', '7', 'B', 0,
  /* 42 */ 'R', '8', 'B', 0,
  /* 46 */ 'R', '9', 'B', 0,
  /* 50 */ 'P', 'C', 'B', 0,
  /* 54 */ 'C', 'G', 'B', 0,
  /* 58 */ 'F', 'P', 'B', 0,
  /* 62 */ 'S', 'P', 'B', 0,
  /* 66 */ 'S', 'R', 'B', 0,
  /* 70 */ 'R', '1', '0', 'W', 0,
  /* 75 */ 'R', '1', '1', 'W', 0,
  /* 80 */ 'R', '1', '2', 'W', 0,
  /* 85 */ 'R', '1', '3', 'W', 0,
  /* 90 */ 'R', '1', '4', 'W', 0,
  /* 95 */ 'R', '1', '5', 'W', 0,
  /* 100 */ 'R', '5', 'W', 0,
  /* 104 */ 'R', '6', 'W', 0,
  /* 108 */ 'R', '7', 'W', 0,
  /* 112 */ 'R', '8', 'W', 0,
  /* 116 */ 'R', '9', 'W', 0,
  /* 120 */ 'P', 'C', 'W', 0,
  /* 124 */ 'C', 'G', 'W', 0,
  /* 128 */ 'F', 'P', 'W', 0,
  /* 132 */ 'S', 'P', 'W', 0,
  /* 136 */ 'S', 'R', 'W', 0,
};

extern const MCRegisterDesc MSP430RegDesc[] = { // Descriptors
  { 4, 0, 0, 0, 0 },
  { 54, 1, 2, 1, 0 },
  { 124, 18, 1, 0, 0 },
  { 58, 1, 2, 1, 32 },
  { 128, 18, 1, 0, 32 },
  { 50, 1, 2, 1, 64 },
  { 120, 18, 1, 0, 64 },
  { 62, 1, 2, 1, 96 },
  { 132, 18, 1, 0, 96 },
  { 66, 1, 2, 1, 128 },
  { 136, 18, 1, 0, 128 },
  { 30, 1, 10, 1, 257 },
  { 34, 1, 10, 1, 257 },
  { 38, 1, 10, 1, 257 },
  { 42, 1, 10, 1, 257 },
  { 46, 1, 10, 1, 257 },
  { 0, 1, 10, 1, 257 },
  { 5, 1, 10, 1, 257 },
  { 10, 1, 10, 1, 257 },
  { 15, 1, 10, 1, 257 },
  { 20, 1, 10, 1, 257 },
  { 25, 1, 10, 1, 257 },
  { 100, 14, 1, 0, 193 },
  { 104, 14, 1, 0, 193 },
  { 108, 14, 1, 0, 193 },
  { 112, 14, 1, 0, 193 },
  { 116, 14, 1, 0, 193 },
  { 70, 14, 1, 0, 193 },
  { 75, 14, 1, 0, 193 },
  { 80, 14, 1, 0, 193 },
  { 85, 14, 1, 0, 193 },
  { 90, 14, 1, 0, 193 },
  { 95, 14, 1, 0, 193 },
};

extern const uint16_t MSP430RegUnitRoots[][2] = {
  { MSP430::CGB },
  { MSP430::FPB },
  { MSP430::PCB },
  { MSP430::SPB },
  { MSP430::SRB },
  { MSP430::R5B },
  { MSP430::R6B },
  { MSP430::R7B },
  { MSP430::R8B },
  { MSP430::R9B },
  { MSP430::R10B },
  { MSP430::R11B },
  { MSP430::R12B },
  { MSP430::R13B },
  { MSP430::R14B },
  { MSP430::R15B },
};

namespace {     // Register classes...
  // GR8 Register Class...
  const uint16_t GR8[] = {
    MSP430::R12B, MSP430::R13B, MSP430::R14B, MSP430::R15B, MSP430::R11B, MSP430::R10B, MSP430::R9B, MSP430::R8B, MSP430::R7B, MSP430::R6B, MSP430::R5B, MSP430::FPB, MSP430::PCB, MSP430::SPB, MSP430::SRB, MSP430::CGB, 
  };

  // GR8 Bit set.
  const uint8_t GR8Bits[] = {
    0xaa, 0xfa, 0x3f, 
  };

  // GR16 Register Class...
  const uint16_t GR16[] = {
    MSP430::R12W, MSP430::R13W, MSP430::R14W, MSP430::R15W, MSP430::R11W, MSP430::R10W, MSP430::R9W, MSP430::R8W, MSP430::R7W, MSP430::R6W, MSP430::R5W, MSP430::FPW, MSP430::PCW, MSP430::SPW, MSP430::SRW, MSP430::CGW, 
  };

  // GR16 Bit set.
  const uint8_t GR16Bits[] = {
    0x54, 0x05, 0xc0, 0xff, 0x01, 
  };

}

extern const MCRegisterClass MSP430MCRegisterClasses[] = {
  { "GR8", GR8, GR8Bits, 16, sizeof(GR8Bits), MSP430::GR8RegClassID, 1, 1, 1, 1 },
  { "GR16", GR16, GR16Bits, 16, sizeof(GR16Bits), MSP430::GR16RegClassID, 2, 2, 1, 1 },
};

extern const uint16_t MSP430RegEncodingTable[] = {
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
static inline void InitMSP430MCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0, unsigned PC = 0) {
  RI->InitMCRegisterInfo(MSP430RegDesc, 33, RA, PC, MSP430MCRegisterClasses, 2, MSP430RegUnitRoots, 16, MSP430RegDiffLists, MSP430RegStrings, MSP430SubRegIdxLists, 2,
MSP430SubRegIdxRanges,   MSP430RegEncodingTable);

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

struct MSP430GenRegisterInfo : public TargetRegisterInfo {
  explicit MSP430GenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0, unsigned PC = 0);
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

namespace MSP430 { // Register classes
  extern const TargetRegisterClass GR8RegClass;
  extern const TargetRegisterClass GR16RegClass;
} // end of namespace MSP430

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

extern const MCRegisterClass MSP430MCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::i8, MVT::Other,
  /* 2 */ MVT::i16, MVT::Other,
};

static const char *const SubRegIndexNameTable[] = { "subreg_8bit" };


static const unsigned SubRegIndexLaneMaskTable[] = {
  ~0u,
  0x00000001, // subreg_8bit
 };



static const TargetRegisterClass *const NullRegClasses[] = { NULL };

static const uint32_t GR8SubClassMask[] = {
  0x00000001, 
  0x00000002, // subreg_8bit
};

static const uint32_t GR16SubClassMask[] = {
  0x00000002, 
};

static const uint16_t SuperRegIdxSeqs[] = {
  /* 0 */ 1, 0,
};

namespace MSP430 {   // Register class instances
  extern const TargetRegisterClass GR8RegClass = {
    &MSP430MCRegisterClasses[GR8RegClassID],
    VTLists + 0,
    GR8SubClassMask,
    SuperRegIdxSeqs + 0,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass GR16RegClass = {
    &MSP430MCRegisterClasses[GR16RegClassID],
    VTLists + 2,
    GR16SubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    0
  };

}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &MSP430::GR8RegClass,
    &MSP430::GR16RegClass,
  };
}

static const TargetRegisterInfoDesc MSP430RegInfoDesc[] = { // Extra Descriptors
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
};
unsigned MSP430GenRegisterInfo::composeSubRegIndicesImpl(unsigned IdxA, unsigned IdxB) const {
  static const uint8_t Rows[1][1] = {
    { 0, },
  };

  --IdxA; assert(IdxA < 1);
  --IdxB; assert(IdxB < 1);
  return Rows[0][IdxB];
}

const TargetRegisterClass *MSP430GenRegisterInfo::getSubClassWithSubReg(const TargetRegisterClass *RC, unsigned Idx) const {
  static const uint8_t Table[2][1] = {
    {	// GR8
      0,	// subreg_8bit
    },
    {	// GR16
      2,	// subreg_8bit -> GR16
    },
  };
  assert(RC && "Missing regclass");
  if (!Idx) return RC;
  --Idx;
  assert(Idx < 1 && "Bad subreg");
  unsigned TV = Table[RC->getID()][Idx];
  return TV ? getRegClass(TV - 1) : 0;
}

/// Get the weight in units of pressure for this register class.
const RegClassWeight &MSP430GenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {1, 16},  	// GR8
    {1, 16},  	// GR16
    {0, 0} };
  return RCWeightTable[RC->getID()];
}

/// Get the weight in units of pressure for this register unit.
unsigned MSP430GenRegisterInfo::
getRegUnitWeight(unsigned RegUnit) const {
  assert(RegUnit < 16 && "invalid register unit");
  // All register units have unit weight.
  return 1;
}


// Get the number of dimensions of register pressure.
unsigned MSP430GenRegisterInfo::getNumRegPressureSets() const {
  return 1;
}

// Get the name of this register unit pressure set.
const char *MSP430GenRegisterInfo::
getRegPressureSetName(unsigned Idx) const {
  static const char *PressureNameTable[] = {
    "GR8",
    0 };
  return PressureNameTable[Idx];
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned MSP430GenRegisterInfo::
getRegPressureSetLimit(unsigned Idx) const {
  static const unsigned PressureLimitTable[] = {
    16,  	// 0: GR8
    0 };
  return PressureLimitTable[Idx];
}

/// Table of pressure sets per register class or unit.
static const int RCSetsTable[] = {
    0,  -1,  	// #0 GR8
    0,  -1,  	// #2 GR16
    -1 };

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int* MSP430GenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const unsigned RCSetStartTable[] = {
    0,2,0 };
  unsigned SetListStart = RCSetStartTable[RC->getID()];
  return &RCSetsTable[SetListStart];
}

/// Get the dimensions of register pressure impacted by this register unit.
/// Returns a -1 terminated array of pressure set IDs
const int* MSP430GenRegisterInfo::
getRegUnitPressureSets(unsigned RegUnit) const {
  assert(RegUnit < 16 && "invalid register unit");
  static const unsigned RUSetStartTable[] = {
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
  unsigned SetListStart = RUSetStartTable[RegUnit];
  return &RCSetsTable[SetListStart];
}

extern const MCRegisterDesc MSP430RegDesc[];
extern const MCPhysReg MSP430RegDiffLists[];
extern const char MSP430RegStrings[];
extern const uint16_t MSP430RegUnitRoots[][2];
extern const uint16_t MSP430SubRegIdxLists[];
extern const MCRegisterInfo::SubRegCoveredBits MSP430SubRegIdxRanges[];
extern const uint16_t MSP430RegEncodingTable[];
MSP430GenRegisterInfo::
MSP430GenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour, unsigned PC)
  : TargetRegisterInfo(MSP430RegInfoDesc, RegisterClasses, RegisterClasses+2,
             SubRegIndexNameTable, SubRegIndexLaneMaskTable, 0xfffffffe) {
  InitMCRegisterInfo(MSP430RegDesc, 33, RA, PC,
                     MSP430MCRegisterClasses, 2,
                     MSP430RegUnitRoots,
                     16,
                     MSP430RegDiffLists,
                     MSP430RegStrings,
                     MSP430SubRegIdxLists,
                     2,
                     MSP430SubRegIdxRanges,
                     MSP430RegEncodingTable);

}



} // End llvm namespace 
#endif // GET_REGINFO_TARGET_DESC

