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
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC
namespace llvm {

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV XCoreSubTypeKV[] = {
  { "generic", "Select the generic processor", 0ULL, 0ULL },
  { "xs1b-generic", "Select the xs1b-generic processor", 0ULL, 0ULL }
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
extern const llvm::MCWriteProcResEntry XCoreWriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // XCoreWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry XCoreWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // XCoreWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry XCoreReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // XCoreReadAdvanceTable

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
extern const llvm::SubtargetInfoKV XCoreProcSchedKV[] = {
  { "generic", (const void *)&NoSchedModel },
  { "xs1b-generic", (const void *)&NoSchedModel }
};
#undef DBGFIELD
static inline void InitXCoreMCSubtargetInfo(MCSubtargetInfo *II, StringRef TT, StringRef CPU, StringRef FS) {
  II->InitMCSubtargetInfo(TT, CPU, FS, 0, XCoreSubTypeKV, 
                      XCoreProcSchedKV, XCoreWriteProcResTable, XCoreWriteLatencyTable, XCoreReadAdvanceTable, 0, 0, 0, 0, 2);
}

} // End llvm namespace 
#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"
// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::XCoreSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER
namespace llvm {
class DFAPacketizer;
struct XCoreGenSubtargetInfo : public TargetSubtargetInfo {
  explicit XCoreGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS);
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
extern const llvm::SubtargetFeatureKV XCoreFeatureKV[];
extern const llvm::SubtargetFeatureKV XCoreSubTypeKV[];
extern const llvm::SubtargetInfoKV XCoreProcSchedKV[];
extern const llvm::MCWriteProcResEntry XCoreWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry XCoreWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry XCoreReadAdvanceTable[];
XCoreGenSubtargetInfo::XCoreGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo() {
  InitMCSubtargetInfo(TT, CPU, FS, 0, XCoreSubTypeKV, 
                      XCoreProcSchedKV, XCoreWriteProcResTable, XCoreWriteLatencyTable, XCoreReadAdvanceTable, 
                      0, 0, 0, 0, 2);
}

unsigned XCoreGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // XCoreGenSubtargetInfo::resolveSchedClass
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_CTOR

