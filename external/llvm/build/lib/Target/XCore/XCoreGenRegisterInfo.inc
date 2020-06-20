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
extern const MCRegisterClass XCoreMCRegisterClasses[];

namespace XCore {
enum {
  NoRegister,
  CP = 1,
  DP = 2,
  LR = 3,
  SP = 4,
  R0 = 5,
  R1 = 6,
  R2 = 7,
  R3 = 8,
  R4 = 9,
  R5 = 10,
  R6 = 11,
  R7 = 12,
  R8 = 13,
  R9 = 14,
  R10 = 15,
  R11 = 16,
  NUM_TARGET_REGS 	// 17
};
}

// Register classes
namespace XCore {
enum {
  RRegsRegClassID = 0,
  GRRegsRegClassID = 1
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

extern const MCPhysReg XCoreRegDiffLists[] = {
  /* 0 */ 65535, 0,
};

extern const uint16_t XCoreSubRegIdxLists[] = {
  /* 0 */ 0,
};

extern const MCRegisterInfo::SubRegCoveredBits XCoreSubRegIdxRanges[] = {
  { 65535, 65535 },
};

extern const char XCoreRegStrings[] = {
  /* 0 */ 'R', '1', '0', 0,
  /* 4 */ 'R', '0', 0,
  /* 7 */ 'R', '1', '1', 0,
  /* 11 */ 'R', '1', 0,
  /* 14 */ 'R', '2', 0,
  /* 17 */ 'R', '3', 0,
  /* 20 */ 'R', '4', 0,
  /* 23 */ 'R', '5', 0,
  /* 26 */ 'R', '6', 0,
  /* 29 */ 'R', '7', 0,
  /* 32 */ 'R', '8', 0,
  /* 35 */ 'R', '9', 0,
  /* 38 */ 'C', 'P', 0,
  /* 41 */ 'D', 'P', 0,
  /* 44 */ 'S', 'P', 0,
  /* 47 */ 'L', 'R', 0,
};

extern const MCRegisterDesc XCoreRegDesc[] = { // Descriptors
  { 3, 0, 0, 0, 0 },
  { 38, 1, 1, 0, 1 },
  { 41, 1, 1, 0, 1 },
  { 47, 1, 1, 0, 1 },
  { 44, 1, 1, 0, 1 },
  { 4, 1, 1, 0, 1 },
  { 11, 1, 1, 0, 1 },
  { 14, 1, 1, 0, 1 },
  { 17, 1, 1, 0, 1 },
  { 20, 1, 1, 0, 1 },
  { 23, 1, 1, 0, 1 },
  { 26, 1, 1, 0, 1 },
  { 29, 1, 1, 0, 1 },
  { 32, 1, 1, 0, 1 },
  { 35, 1, 1, 0, 1 },
  { 0, 1, 1, 0, 1 },
  { 7, 1, 1, 0, 1 },
};

extern const uint16_t XCoreRegUnitRoots[][2] = {
  { XCore::CP },
  { XCore::DP },
  { XCore::LR },
  { XCore::SP },
  { XCore::R0 },
  { XCore::R1 },
  { XCore::R2 },
  { XCore::R3 },
  { XCore::R4 },
  { XCore::R5 },
  { XCore::R6 },
  { XCore::R7 },
  { XCore::R8 },
  { XCore::R9 },
  { XCore::R10 },
  { XCore::R11 },
};

namespace {     // Register classes...
  // RRegs Register Class...
  const uint16_t RRegs[] = {
    XCore::R0, XCore::R1, XCore::R2, XCore::R3, XCore::R4, XCore::R5, XCore::R6, XCore::R7, XCore::R8, XCore::R9, XCore::R10, XCore::R11, XCore::CP, XCore::DP, XCore::SP, XCore::LR, 
  };

  // RRegs Bit set.
  const uint8_t RRegsBits[] = {
    0xfe, 0xff, 0x01, 
  };

  // GRRegs Register Class...
  const uint16_t GRRegs[] = {
    XCore::R0, XCore::R1, XCore::R2, XCore::R3, XCore::R4, XCore::R5, XCore::R6, XCore::R7, XCore::R8, XCore::R9, XCore::R10, XCore::R11, 
  };

  // GRRegs Bit set.
  const uint8_t GRRegsBits[] = {
    0xe0, 0xff, 0x01, 
  };

}

extern const MCRegisterClass XCoreMCRegisterClasses[] = {
  { "RRegs", RRegs, RRegsBits, 16, sizeof(RRegsBits), XCore::RRegsRegClassID, 4, 4, 1, 0 },
  { "GRRegs", GRRegs, GRRegsBits, 12, sizeof(GRRegsBits), XCore::GRRegsRegClassID, 4, 4, 1, 1 },
};

// XCore Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair XCoreDwarfFlavour0Dwarf2L[] = {
  { 0U, XCore::R0 },
  { 1U, XCore::R1 },
  { 2U, XCore::R2 },
  { 3U, XCore::R3 },
  { 4U, XCore::R4 },
  { 5U, XCore::R5 },
  { 6U, XCore::R6 },
  { 7U, XCore::R7 },
  { 8U, XCore::R8 },
  { 9U, XCore::R9 },
  { 10U, XCore::R10 },
  { 11U, XCore::R11 },
  { 12U, XCore::CP },
  { 13U, XCore::DP },
  { 14U, XCore::SP },
  { 15U, XCore::LR },
};
extern const unsigned XCoreDwarfFlavour0Dwarf2LSize = sizeof(XCoreDwarfFlavour0Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair XCoreEHFlavour0Dwarf2L[] = {
  { 0U, XCore::R0 },
  { 1U, XCore::R1 },
  { 2U, XCore::R2 },
  { 3U, XCore::R3 },
  { 4U, XCore::R4 },
  { 5U, XCore::R5 },
  { 6U, XCore::R6 },
  { 7U, XCore::R7 },
  { 8U, XCore::R8 },
  { 9U, XCore::R9 },
  { 10U, XCore::R10 },
  { 11U, XCore::R11 },
  { 12U, XCore::CP },
  { 13U, XCore::DP },
  { 14U, XCore::SP },
  { 15U, XCore::LR },
};
extern const unsigned XCoreEHFlavour0Dwarf2LSize = sizeof(XCoreEHFlavour0Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair XCoreDwarfFlavour0L2Dwarf[] = {
  { XCore::CP, 12U },
  { XCore::DP, 13U },
  { XCore::LR, 15U },
  { XCore::SP, 14U },
  { XCore::R0, 0U },
  { XCore::R1, 1U },
  { XCore::R2, 2U },
  { XCore::R3, 3U },
  { XCore::R4, 4U },
  { XCore::R5, 5U },
  { XCore::R6, 6U },
  { XCore::R7, 7U },
  { XCore::R8, 8U },
  { XCore::R9, 9U },
  { XCore::R10, 10U },
  { XCore::R11, 11U },
};
extern const unsigned XCoreDwarfFlavour0L2DwarfSize = sizeof(XCoreDwarfFlavour0L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair XCoreEHFlavour0L2Dwarf[] = {
  { XCore::CP, 12U },
  { XCore::DP, 13U },
  { XCore::LR, 15U },
  { XCore::SP, 14U },
  { XCore::R0, 0U },
  { XCore::R1, 1U },
  { XCore::R2, 2U },
  { XCore::R3, 3U },
  { XCore::R4, 4U },
  { XCore::R5, 5U },
  { XCore::R6, 6U },
  { XCore::R7, 7U },
  { XCore::R8, 8U },
  { XCore::R9, 9U },
  { XCore::R10, 10U },
  { XCore::R11, 11U },
};
extern const unsigned XCoreEHFlavour0L2DwarfSize = sizeof(XCoreEHFlavour0L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const uint16_t XCoreRegEncodingTable[] = {
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
static inline void InitXCoreMCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0, unsigned PC = 0) {
  RI->InitMCRegisterInfo(XCoreRegDesc, 17, RA, PC, XCoreMCRegisterClasses, 2, XCoreRegUnitRoots, 16, XCoreRegDiffLists, XCoreRegStrings, XCoreSubRegIdxLists, 1,
XCoreSubRegIdxRanges,   XCoreRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(XCoreDwarfFlavour0Dwarf2L, XCoreDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(XCoreEHFlavour0Dwarf2L, XCoreEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(XCoreDwarfFlavour0L2Dwarf, XCoreDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(XCoreEHFlavour0L2Dwarf, XCoreEHFlavour0L2DwarfSize, true);
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

struct XCoreGenRegisterInfo : public TargetRegisterInfo {
  explicit XCoreGenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0, unsigned PC = 0);
  virtual bool needsStackRealignment(const MachineFunction &) const
     { return false; }
  virtual const RegClassWeight &getRegClassWeight(const TargetRegisterClass *RC) const;
  virtual unsigned getRegUnitWeight(unsigned RegUnit) const;
  virtual unsigned getNumRegPressureSets() const;
  virtual const char *getRegPressureSetName(unsigned Idx) const;
  virtual unsigned getRegPressureSetLimit(unsigned Idx) const;
  virtual const int *getRegClassPressureSets(const TargetRegisterClass *RC) const;
  virtual const int *getRegUnitPressureSets(unsigned RegUnit) const;
};

namespace XCore { // Register classes
  extern const TargetRegisterClass RRegsRegClass;
  extern const TargetRegisterClass GRRegsRegClass;
} // end of namespace XCore

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

extern const MCRegisterClass XCoreMCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::i32, MVT::Other,
};

static const char *const SubRegIndexNameTable[] = { "" };


static const unsigned SubRegIndexLaneMaskTable[] = {
  ~0u,
 };



static const TargetRegisterClass *const NullRegClasses[] = { NULL };

static const uint32_t RRegsSubClassMask[] = {
  0x00000003, 
};

static const uint32_t GRRegsSubClassMask[] = {
  0x00000002, 
};

static const uint16_t SuperRegIdxSeqs[] = {
  /* 0 */ 0,
};

static const TargetRegisterClass *const GRRegsSuperclasses[] = {
  &XCore::RRegsRegClass,
  NULL
};

namespace XCore {   // Register class instances
  extern const TargetRegisterClass RRegsRegClass = {
    &XCoreMCRegisterClasses[RRegsRegClassID],
    VTLists + 0,
    RRegsSubClassMask,
    SuperRegIdxSeqs + 0,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass GRRegsRegClass = {
    &XCoreMCRegisterClasses[GRRegsRegClassID],
    VTLists + 0,
    GRRegsSubClassMask,
    SuperRegIdxSeqs + 0,
    GRRegsSuperclasses,
    0
  };

}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &XCore::RRegsRegClass,
    &XCore::GRRegsRegClass,
  };
}

static const TargetRegisterInfoDesc XCoreRegInfoDesc[] = { // Extra Descriptors
  { 0, 0 },
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
};
/// Get the weight in units of pressure for this register class.
const RegClassWeight &XCoreGenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {0, 12},  	// RRegs
    {1, 12},  	// GRRegs
    {0, 0} };
  return RCWeightTable[RC->getID()];
}

/// Get the weight in units of pressure for this register unit.
unsigned XCoreGenRegisterInfo::
getRegUnitWeight(unsigned RegUnit) const {
  assert(RegUnit < 16 && "invalid register unit");
  // All register units have unit weight.
  return 1;
}


// Get the number of dimensions of register pressure.
unsigned XCoreGenRegisterInfo::getNumRegPressureSets() const {
  return 1;
}

// Get the name of this register unit pressure set.
const char *XCoreGenRegisterInfo::
getRegPressureSetName(unsigned Idx) const {
  static const char *PressureNameTable[] = {
    "GRRegs",
    0 };
  return PressureNameTable[Idx];
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned XCoreGenRegisterInfo::
getRegPressureSetLimit(unsigned Idx) const {
  static const unsigned PressureLimitTable[] = {
    12,  	// 0: GRRegs
    0 };
  return PressureLimitTable[Idx];
}

/// Table of pressure sets per register class or unit.
static const int RCSetsTable[] = {
    -1,  	// #0 RRegs
    0,  -1,  	// #1 GRRegs
    -1 };

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int* XCoreGenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const unsigned RCSetStartTable[] = {
    0,1,0 };
  unsigned SetListStart = RCSetStartTable[RC->getID()];
  return &RCSetsTable[SetListStart];
}

/// Get the dimensions of register pressure impacted by this register unit.
/// Returns a -1 terminated array of pressure set IDs
const int* XCoreGenRegisterInfo::
getRegUnitPressureSets(unsigned RegUnit) const {
  assert(RegUnit < 16 && "invalid register unit");
  static const unsigned RUSetStartTable[] = {
    0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,0 };
  unsigned SetListStart = RUSetStartTable[RegUnit];
  return &RCSetsTable[SetListStart];
}

extern const MCRegisterDesc XCoreRegDesc[];
extern const MCPhysReg XCoreRegDiffLists[];
extern const char XCoreRegStrings[];
extern const uint16_t XCoreRegUnitRoots[][2];
extern const uint16_t XCoreSubRegIdxLists[];
extern const MCRegisterInfo::SubRegCoveredBits XCoreSubRegIdxRanges[];
extern const uint16_t XCoreRegEncodingTable[];
// XCore Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair XCoreDwarfFlavour0Dwarf2L[];
extern const unsigned XCoreDwarfFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair XCoreEHFlavour0Dwarf2L[];
extern const unsigned XCoreEHFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair XCoreDwarfFlavour0L2Dwarf[];
extern const unsigned XCoreDwarfFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair XCoreEHFlavour0L2Dwarf[];
extern const unsigned XCoreEHFlavour0L2DwarfSize;

XCoreGenRegisterInfo::
XCoreGenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour, unsigned PC)
  : TargetRegisterInfo(XCoreRegInfoDesc, RegisterClasses, RegisterClasses+2,
             SubRegIndexNameTable, SubRegIndexLaneMaskTable, 0xffffffff) {
  InitMCRegisterInfo(XCoreRegDesc, 17, RA, PC,
                     XCoreMCRegisterClasses, 2,
                     XCoreRegUnitRoots,
                     16,
                     XCoreRegDiffLists,
                     XCoreRegStrings,
                     XCoreSubRegIdxLists,
                     1,
                     XCoreSubRegIdxRanges,
                     XCoreRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(XCoreDwarfFlavour0Dwarf2L, XCoreDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(XCoreEHFlavour0Dwarf2L, XCoreEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(XCoreDwarfFlavour0L2Dwarf, XCoreDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(XCoreEHFlavour0L2Dwarf, XCoreEHFlavour0L2DwarfSize, true);
    break;
  }
}



} // End llvm namespace 
#endif // GET_REGINFO_TARGET_DESC

