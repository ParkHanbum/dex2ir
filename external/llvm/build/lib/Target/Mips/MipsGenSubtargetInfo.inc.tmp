/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Subtarget Enumeration Source Fragment                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_SUBTARGETINFO_ENUM
#undef GET_SUBTARGETINFO_ENUM
namespace llvm {
namespace Mips {
enum {
  FeatureBitCount =  1ULL << 0,
  FeatureCondMov =  1ULL << 1,
  FeatureDSP =  1ULL << 2,
  FeatureDSPR2 =  1ULL << 3,
  FeatureEABI =  1ULL << 4,
  FeatureFP64Bit =  1ULL << 5,
  FeatureFPIdx =  1ULL << 6,
  FeatureGP64Bit =  1ULL << 7,
  FeatureMicroMips =  1ULL << 8,
  FeatureMips16 =  1ULL << 9,
  FeatureMips32 =  1ULL << 10,
  FeatureMips32r2 =  1ULL << 11,
  FeatureMips64 =  1ULL << 12,
  FeatureMips64r2 =  1ULL << 13,
  FeatureN32 =  1ULL << 14,
  FeatureN64 =  1ULL << 15,
  FeatureO32 =  1ULL << 16,
  FeatureSEInReg =  1ULL << 17,
  FeatureSingleFloat =  1ULL << 18,
  FeatureSwap =  1ULL << 19,
  FeatureVFPU =  1ULL << 20
};
}
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC
namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV MipsFeatureKV[] = {
  { "FPIdx", "Enable 'FP indexed load/store' instructions.", Mips::FeatureFPIdx, 0ULL },
  { "bitcount", "Enable 'count leading bits' instructions.", Mips::FeatureBitCount, 0ULL },
  { "condmov", "Enable 'conditional move' instructions.", Mips::FeatureCondMov, 0ULL },
  { "dsp", "Mips DSP ASE", Mips::FeatureDSP, 0ULL },
  { "dspr2", "Mips DSP-R2 ASE", Mips::FeatureDSPR2, Mips::FeatureDSP },
  { "eabi", "Enable eabi ABI", Mips::FeatureEABI, 0ULL },
  { "fp64", "Support 64-bit FP registers.", Mips::FeatureFP64Bit, 0ULL },
  { "gp64", "General Purpose Registers are 64-bit wide.", Mips::FeatureGP64Bit, 0ULL },
  { "micromips", "microMips mode", Mips::FeatureMicroMips, 0ULL },
  { "mips16", "Mips16 mode", Mips::FeatureMips16, 0ULL },
  { "mips32", "Mips32 ISA Support", Mips::FeatureMips32, Mips::FeatureCondMov | Mips::FeatureBitCount },
  { "mips32r2", "Mips32r2 ISA Support", Mips::FeatureMips32r2, Mips::FeatureMips32 | Mips::FeatureSEInReg | Mips::FeatureSwap | Mips::FeatureFPIdx },
  { "mips64", "Mips64 ISA Support", Mips::FeatureMips64, Mips::FeatureGP64Bit | Mips::FeatureFP64Bit | Mips::FeatureMips32 | Mips::FeatureFPIdx },
  { "mips64r2", "Mips64r2 ISA Support", Mips::FeatureMips64r2, Mips::FeatureMips64 | Mips::FeatureMips32r2 },
  { "n32", "Enable n32 ABI", Mips::FeatureN32, 0ULL },
  { "n64", "Enable n64 ABI", Mips::FeatureN64, 0ULL },
  { "o32", "Enable o32 ABI", Mips::FeatureO32, 0ULL },
  { "seinreg", "Enable 'signext in register' instructions.", Mips::FeatureSEInReg, 0ULL },
  { "single-float", "Only supports single precision float", Mips::FeatureSingleFloat, 0ULL },
  { "swap", "Enable 'byte/half swap' instructions.", Mips::FeatureSwap, 0ULL },
  { "vfpu", "Enable vector FPU instructions.", Mips::FeatureVFPU, 0ULL }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV MipsSubTypeKV[] = {
  { "mips16", "Select the mips16 processor", Mips::FeatureMips16, 0ULL },
  { "mips32", "Select the mips32 processor", Mips::FeatureMips32, 0ULL },
  { "mips32r2", "Select the mips32r2 processor", Mips::FeatureMips32r2, 0ULL },
  { "mips64", "Select the mips64 processor", Mips::FeatureMips64, 0ULL },
  { "mips64r2", "Select the mips64r2 processor", Mips::FeatureMips64r2, 0ULL }
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#ifndef NDEBUG
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "MipsGenericItineraries"
namespace MipsGenericItinerariesFU {
  const unsigned ALU = 1 << 0;
  const unsigned IMULDIV = 1 << 1;
}

extern const llvm::InstrStage MipsStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1
  { 2, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 2
  { 3, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 3
  { 38, MipsGenericItinerariesFU::IMULDIV, -1, (llvm::InstrStage::ReservationKinds)0 }, // 4
  { 4, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 5
  { 36, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 6
  { 23, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 7
  { 8, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 8
  { 7, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 9
  { 12, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 10
  { 54, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 11
  { 1, MipsGenericItinerariesFU::IMULDIV, -1, (llvm::InstrStage::ReservationKinds)0 }, // 12
  { 17, MipsGenericItinerariesFU::IMULDIV, -1, (llvm::InstrStage::ReservationKinds)0 }, // 13
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned MipsOperandCycles[] = {
  0, // No itinerary
  0 // End operand cycles
};
extern const unsigned MipsForwardingPaths[] = {
 0, // No itinerary
 0 // End bypass tables
};

static const llvm::InstrItinerary *NoItineraries = 0;

static const llvm::InstrItinerary MipsGenericItineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 1, 2, 0, 0 }, // 1 IIArith
  { 0, 0, 0, 0, 0 }, // 2 IIPseudo
  { 1, 1, 2, 0, 0 }, // 3 IILogic
  { 1, 1, 2, 0, 0 }, // 4 IIAlu
  { 1, 1, 2, 0, 0 }, // 5 IIBranch
  { 1, 1, 2, 0, 0 }, // 6 IIFcvt
  { 1, 2, 3, 0, 0 }, // 7 IIFmove
  { 1, 3, 4, 0, 0 }, // 8 IIFcmp
  { 1, 2, 3, 0, 0 }, // 9 IIFmoveC1
  { 0, 0, 0, 0, 0 }, // 10 IIImult
  { 1, 4, 5, 0, 0 }, // 11 IIIdiv
  { 1, 5, 6, 0, 0 }, // 12 IIFadd
  { 1, 6, 7, 0, 0 }, // 13 IIFdivDouble
  { 1, 7, 8, 0, 0 }, // 14 IIFdivSingle
  { 1, 8, 9, 0, 0 }, // 15 IIFmulDouble
  { 1, 9, 10, 0, 0 }, // 16 IIFmulSingle
  { 1, 10, 11, 0, 0 }, // 17 IIFsqrtDouble
  { 1, 11, 12, 0, 0 }, // 18 IIFsqrtSingle
  { 1, 3, 4, 0, 0 }, // 19 IIFLoad
  { 1, 3, 4, 0, 0 }, // 20 IILoad
  { 1, 12, 13, 0, 0 }, // 21 IIHiLo
  { 1, 13, 14, 0, 0 }, // 22 IIImul
  { 1, 1, 2, 0, 0 }, // 23 IIFStore
  { 0, 0, 0, 0, 0 }, // 24 IIseb
  { 0, 0, 0, 0, 0 }, // 25 IIslt
  { 1, 1, 2, 0, 0 }, // 26 IIStore
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry MipsWriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // MipsWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry MipsWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // MipsWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry MipsReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // MipsReadAdvanceTable

static const llvm::MCSchedModel NoSchedModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  0, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  NoItineraries);

static const llvm::MCSchedModel MipsGenericItinerariesModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  1, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  MipsGenericItineraries);

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV MipsProcSchedKV[] = {
  { "mips16", (const void *)&MipsGenericItinerariesModel },
  { "mips32", (const void *)&MipsGenericItinerariesModel },
  { "mips32r2", (const void *)&MipsGenericItinerariesModel },
  { "mips64", (const void *)&MipsGenericItinerariesModel },
  { "mips64r2", (const void *)&MipsGenericItinerariesModel }
};
#undef DBGFIELD
static inline void InitMipsMCSubtargetInfo(MCSubtargetInfo *II, StringRef TT, StringRef CPU, StringRef FS) {
  II->InitMCSubtargetInfo(TT, CPU, FS, MipsFeatureKV, MipsSubTypeKV, 
                      MipsProcSchedKV, MipsWriteProcResTable, MipsWriteLatencyTable, MipsReadAdvanceTable, 
                      MipsStages, MipsOperandCycles, MipsForwardingPaths, 21, 5);
}

} // End llvm namespace 
#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"
// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::MipsSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  uint64_t Bits = getFeatureBits();
  if ((Bits & Mips::FeatureBitCount) != 0) HasBitCount = true;
  if ((Bits & Mips::FeatureCondMov) != 0) HasCondMov = true;
  if ((Bits & Mips::FeatureDSP) != 0) HasDSP = true;
  if ((Bits & Mips::FeatureDSPR2) != 0) HasDSPR2 = true;
  if ((Bits & Mips::FeatureEABI) != 0 && MipsABI < EABI) MipsABI = EABI;
  if ((Bits & Mips::FeatureFP64Bit) != 0) IsFP64bit = true;
  if ((Bits & Mips::FeatureFPIdx) != 0) HasFPIdx = true;
  if ((Bits & Mips::FeatureGP64Bit) != 0) IsGP64bit = true;
  if ((Bits & Mips::FeatureMicroMips) != 0) InMicroMipsMode = true;
  if ((Bits & Mips::FeatureMips16) != 0) InMips16Mode = true;
  if ((Bits & Mips::FeatureMips32) != 0 && MipsArchVersion < Mips32) MipsArchVersion = Mips32;
  if ((Bits & Mips::FeatureMips32r2) != 0 && MipsArchVersion < Mips32r2) MipsArchVersion = Mips32r2;
  if ((Bits & Mips::FeatureMips64) != 0 && MipsArchVersion < Mips64) MipsArchVersion = Mips64;
  if ((Bits & Mips::FeatureMips64r2) != 0 && MipsArchVersion < Mips64r2) MipsArchVersion = Mips64r2;
  if ((Bits & Mips::FeatureN32) != 0 && MipsABI < N32) MipsABI = N32;
  if ((Bits & Mips::FeatureN64) != 0 && MipsABI < N64) MipsABI = N64;
  if ((Bits & Mips::FeatureO32) != 0 && MipsABI < O32) MipsABI = O32;
  if ((Bits & Mips::FeatureSEInReg) != 0) HasSEInReg = true;
  if ((Bits & Mips::FeatureSingleFloat) != 0) IsSingleFloat = true;
  if ((Bits & Mips::FeatureSwap) != 0) HasSwap = true;
  if ((Bits & Mips::FeatureVFPU) != 0) HasVFPU = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER
namespace llvm {
class DFAPacketizer;
struct MipsGenSubtargetInfo : public TargetSubtargetInfo {
  explicit MipsGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS);
public:
  unsigned resolveSchedClass(unsigned SchedClass, const MachineInstr *DefMI, const TargetSchedModel *SchedModel) const;
  DFAPacketizer *createDFAPacketizer(const InstrItineraryData *IID) const;
};
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_HEADER


#ifdef GET_SUBTARGETINFO_CTOR
#undef GET_SUBTARGETINFO_CTOR
#include "llvm/CodeGen/TargetSchedule.h"
namespace llvm {
extern const llvm::SubtargetFeatureKV MipsFeatureKV[];
extern const llvm::SubtargetFeatureKV MipsSubTypeKV[];
extern const llvm::SubtargetInfoKV MipsProcSchedKV[];
extern const llvm::MCWriteProcResEntry MipsWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry MipsWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry MipsReadAdvanceTable[];
extern const llvm::InstrStage MipsStages[];
extern const unsigned MipsOperandCycles[];
extern const unsigned MipsForwardingPaths[];
MipsGenSubtargetInfo::MipsGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo() {
  InitMCSubtargetInfo(TT, CPU, FS, MipsFeatureKV, MipsSubTypeKV, 
                      MipsProcSchedKV, MipsWriteProcResTable, MipsWriteLatencyTable, MipsReadAdvanceTable, 
                      MipsStages, MipsOperandCycles, MipsForwardingPaths, 21, 5);
}

unsigned MipsGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // MipsGenSubtargetInfo::resolveSchedClass
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_CTOR

