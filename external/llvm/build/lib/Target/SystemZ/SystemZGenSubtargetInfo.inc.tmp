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
namespace SystemZ {
enum {
  FeatureDistinctOps =  1ULL << 0,
  FeatureHighWord =  1ULL << 1,
  FeatureLoadStoreOnCond =  1ULL << 2
};
}
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC
namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV SystemZFeatureKV[] = {
  { "distinct-ops", "Assume that the distinct-operands facility is installed", SystemZ::FeatureDistinctOps, 0ULL },
  { "high-word", "Assume that the high-word facility is installed", SystemZ::FeatureHighWord, 0ULL },
  { "load-store-on-cond", "Assume that the load/store-on-condition facility is installed", SystemZ::FeatureLoadStoreOnCond, 0ULL }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV SystemZSubTypeKV[] = {
  { "z10", "Select the z10 processor", 0ULL, 0ULL },
  { "z196", "Select the z196 processor", SystemZ::FeatureDistinctOps | SystemZ::FeatureLoadStoreOnCond | SystemZ::FeatureHighWord, 0ULL },
  { "zEC12", "Select the zEC12 processor", SystemZ::FeatureDistinctOps | SystemZ::FeatureLoadStoreOnCond | SystemZ::FeatureHighWord, 0ULL }
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
extern const llvm::MCWriteProcResEntry SystemZWriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // SystemZWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry SystemZWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // SystemZWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry SystemZReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // SystemZReadAdvanceTable

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
extern const llvm::SubtargetInfoKV SystemZProcSchedKV[] = {
  { "z10", (const void *)&NoSchedModel },
  { "z196", (const void *)&NoSchedModel },
  { "zEC12", (const void *)&NoSchedModel }
};
#undef DBGFIELD
static inline void InitSystemZMCSubtargetInfo(MCSubtargetInfo *II, StringRef TT, StringRef CPU, StringRef FS) {
  II->InitMCSubtargetInfo(TT, CPU, FS, SystemZFeatureKV, SystemZSubTypeKV, 
                      SystemZProcSchedKV, SystemZWriteProcResTable, SystemZWriteLatencyTable, SystemZReadAdvanceTable, 0, 0, 0, 3, 3);
}

} // End llvm namespace 
#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"
// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::SystemZSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  uint64_t Bits = getFeatureBits();
  if ((Bits & SystemZ::FeatureDistinctOps) != 0) HasDistinctOps = true;
  if ((Bits & SystemZ::FeatureHighWord) != 0) HasHighWord = true;
  if ((Bits & SystemZ::FeatureLoadStoreOnCond) != 0) HasLoadStoreOnCond = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER
namespace llvm {
class DFAPacketizer;
struct SystemZGenSubtargetInfo : public TargetSubtargetInfo {
  explicit SystemZGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS);
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
extern const llvm::SubtargetFeatureKV SystemZFeatureKV[];
extern const llvm::SubtargetFeatureKV SystemZSubTypeKV[];
extern const llvm::SubtargetInfoKV SystemZProcSchedKV[];
extern const llvm::MCWriteProcResEntry SystemZWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry SystemZWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry SystemZReadAdvanceTable[];
SystemZGenSubtargetInfo::SystemZGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo() {
  InitMCSubtargetInfo(TT, CPU, FS, SystemZFeatureKV, SystemZSubTypeKV, 
                      SystemZProcSchedKV, SystemZWriteProcResTable, SystemZWriteLatencyTable, SystemZReadAdvanceTable, 
                      0, 0, 0, 3, 3);
}

unsigned SystemZGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // SystemZGenSubtargetInfo::resolveSchedClass
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_CTOR

