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
namespace Sparc {
enum {
  FeatureV8Deprecated =  1ULL << 0,
  FeatureV9 =  1ULL << 1,
  FeatureVIS =  1ULL << 2
};
}
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC
namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV SparcFeatureKV[] = {
  { "deprecated-v8", "Enable deprecated V8 instructions in V9 mode", Sparc::FeatureV8Deprecated, 0ULL },
  { "v9", "Enable SPARC-V9 instructions", Sparc::FeatureV9, 0ULL },
  { "vis", "Enable UltraSPARC Visual Instruction Set extensions", Sparc::FeatureVIS, 0ULL }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV SparcSubTypeKV[] = {
  { "f934", "Select the f934 processor", 0ULL, 0ULL },
  { "generic", "Select the generic processor", 0ULL, 0ULL },
  { "hypersparc", "Select the hypersparc processor", 0ULL, 0ULL },
  { "sparclet", "Select the sparclet processor", 0ULL, 0ULL },
  { "sparclite", "Select the sparclite processor", 0ULL, 0ULL },
  { "sparclite86x", "Select the sparclite86x processor", 0ULL, 0ULL },
  { "supersparc", "Select the supersparc processor", 0ULL, 0ULL },
  { "tsc701", "Select the tsc701 processor", 0ULL, 0ULL },
  { "ultrasparc", "Select the ultrasparc processor", Sparc::FeatureV9 | Sparc::FeatureV8Deprecated, 0ULL },
  { "ultrasparc3", "Select the ultrasparc3 processor", Sparc::FeatureV9 | Sparc::FeatureV8Deprecated, 0ULL },
  { "ultrasparc3-vis", "Select the ultrasparc3-vis processor", Sparc::FeatureV9 | Sparc::FeatureV8Deprecated | Sparc::FeatureVIS, 0ULL },
  { "v8", "Select the v8 processor", 0ULL, 0ULL },
  { "v9", "Select the v9 processor", Sparc::FeatureV9, 0ULL }
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#ifndef NDEBUG
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry SparcWriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // SparcWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry SparcWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // SparcWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry SparcReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // SparcReadAdvanceTable

static const llvm::MCSchedModel NoSchedModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  0, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  0); // No Itinerary

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV SparcProcSchedKV[] = {
  { "f934", (const void *)&NoSchedModel },
  { "generic", (const void *)&NoSchedModel },
  { "hypersparc", (const void *)&NoSchedModel },
  { "sparclet", (const void *)&NoSchedModel },
  { "sparclite", (const void *)&NoSchedModel },
  { "sparclite86x", (const void *)&NoSchedModel },
  { "supersparc", (const void *)&NoSchedModel },
  { "tsc701", (const void *)&NoSchedModel },
  { "ultrasparc", (const void *)&NoSchedModel },
  { "ultrasparc3", (const void *)&NoSchedModel },
  { "ultrasparc3-vis", (const void *)&NoSchedModel },
  { "v8", (const void *)&NoSchedModel },
  { "v9", (const void *)&NoSchedModel }
};
#undef DBGFIELD
static inline void InitSparcMCSubtargetInfo(MCSubtargetInfo *II, StringRef TT, StringRef CPU, StringRef FS) {
  II->InitMCSubtargetInfo(TT, CPU, FS, SparcFeatureKV, SparcSubTypeKV, 
                      SparcProcSchedKV, SparcWriteProcResTable, SparcWriteLatencyTable, SparcReadAdvanceTable, 0, 0, 0, 3, 13);
}

} // End llvm namespace 
#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"
// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::SparcSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  uint64_t Bits = getFeatureBits();
  if ((Bits & Sparc::FeatureV8Deprecated) != 0) V8DeprecatedInsts = true;
  if ((Bits & Sparc::FeatureV9) != 0) IsV9 = true;
  if ((Bits & Sparc::FeatureVIS) != 0) IsVIS = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER
namespace llvm {
class DFAPacketizer;
struct SparcGenSubtargetInfo : public TargetSubtargetInfo {
  explicit SparcGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS);
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
extern const llvm::SubtargetFeatureKV SparcFeatureKV[];
extern const llvm::SubtargetFeatureKV SparcSubTypeKV[];
extern const llvm::SubtargetInfoKV SparcProcSchedKV[];
extern const llvm::MCWriteProcResEntry SparcWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry SparcWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry SparcReadAdvanceTable[];
SparcGenSubtargetInfo::SparcGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo() {
  InitMCSubtargetInfo(TT, CPU, FS, SparcFeatureKV, SparcSubTypeKV, 
                      SparcProcSchedKV, SparcWriteProcResTable, SparcWriteLatencyTable, SparcReadAdvanceTable, 
                      0, 0, 0, 3, 13);
}

unsigned SparcGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // SparcGenSubtargetInfo::resolveSchedClass
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_CTOR

