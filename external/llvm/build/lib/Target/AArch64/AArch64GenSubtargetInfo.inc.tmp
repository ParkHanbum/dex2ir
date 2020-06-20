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
namespace AArch64 {
enum {
  FeatureCrypto =  1ULL << 0,
  FeatureNEON =  1ULL << 1
};
}
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC
namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV AArch64FeatureKV[] = {
  { "crypto", "Enable cryptographic instructions", AArch64::FeatureCrypto, 0ULL },
  { "neon", "Enable Advanced SIMD instructions", AArch64::FeatureNEON, 0ULL }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV AArch64SubTypeKV[] = {
  { "generic", "Select the generic processor", AArch64::FeatureNEON | AArch64::FeatureCrypto, 0ULL }
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
extern const llvm::MCWriteProcResEntry AArch64WriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // AArch64WriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry AArch64WriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // AArch64WriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry AArch64ReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // AArch64ReadAdvanceTable

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
extern const llvm::SubtargetInfoKV AArch64ProcSchedKV[] = {
  { "generic", (const void *)&NoSchedModel }
};
#undef DBGFIELD
static inline void InitAArch64MCSubtargetInfo(MCSubtargetInfo *II, StringRef TT, StringRef CPU, StringRef FS) {
  II->InitMCSubtargetInfo(TT, CPU, FS, AArch64FeatureKV, AArch64SubTypeKV, 
                      AArch64ProcSchedKV, AArch64WriteProcResTable, AArch64WriteLatencyTable, AArch64ReadAdvanceTable, 0, 0, 0, 2, 1);
}

} // End llvm namespace 
#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"
// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::AArch64Subtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  uint64_t Bits = getFeatureBits();
  if ((Bits & AArch64::FeatureCrypto) != 0) HasCrypto = true;
  if ((Bits & AArch64::FeatureNEON) != 0) HasNEON = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER
namespace llvm {
class DFAPacketizer;
struct AArch64GenSubtargetInfo : public TargetSubtargetInfo {
  explicit AArch64GenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS);
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
extern const llvm::SubtargetFeatureKV AArch64FeatureKV[];
extern const llvm::SubtargetFeatureKV AArch64SubTypeKV[];
extern const llvm::SubtargetInfoKV AArch64ProcSchedKV[];
extern const llvm::MCWriteProcResEntry AArch64WriteProcResTable[];
extern const llvm::MCWriteLatencyEntry AArch64WriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry AArch64ReadAdvanceTable[];
AArch64GenSubtargetInfo::AArch64GenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo() {
  InitMCSubtargetInfo(TT, CPU, FS, AArch64FeatureKV, AArch64SubTypeKV, 
                      AArch64ProcSchedKV, AArch64WriteProcResTable, AArch64WriteLatencyTable, AArch64ReadAdvanceTable, 
                      0, 0, 0, 2, 1);
}

unsigned AArch64GenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // AArch64GenSubtargetInfo::resolveSchedClass
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_CTOR

