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
namespace NVPTX {
enum {
  PTX30 =  1ULL << 0,
  PTX31 =  1ULL << 1,
  SM20 =  1ULL << 2,
  SM21 =  1ULL << 3,
  SM30 =  1ULL << 4,
  SM35 =  1ULL << 5
};
}
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC
namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV NVPTXFeatureKV[] = {
  { "ptx30", "Use PTX version 3.0", NVPTX::PTX30, 0ULL },
  { "ptx31", "Use PTX version 3.1", NVPTX::PTX31, 0ULL },
  { "sm_20", "Target SM 2.0", NVPTX::SM20, 0ULL },
  { "sm_21", "Target SM 2.1", NVPTX::SM21, 0ULL },
  { "sm_30", "Target SM 3.0", NVPTX::SM30, 0ULL },
  { "sm_35", "Target SM 3.5", NVPTX::SM35, 0ULL }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV NVPTXSubTypeKV[] = {
  { "sm_20", "Select the sm_20 processor", NVPTX::SM20, 0ULL },
  { "sm_21", "Select the sm_21 processor", NVPTX::SM21, 0ULL },
  { "sm_30", "Select the sm_30 processor", NVPTX::SM30, 0ULL },
  { "sm_35", "Select the sm_35 processor", NVPTX::SM35, 0ULL }
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
extern const llvm::MCWriteProcResEntry NVPTXWriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // NVPTXWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry NVPTXWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // NVPTXWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry NVPTXReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // NVPTXReadAdvanceTable

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
extern const llvm::SubtargetInfoKV NVPTXProcSchedKV[] = {
  { "sm_20", (const void *)&NoSchedModel },
  { "sm_21", (const void *)&NoSchedModel },
  { "sm_30", (const void *)&NoSchedModel },
  { "sm_35", (const void *)&NoSchedModel }
};
#undef DBGFIELD
static inline void InitNVPTXMCSubtargetInfo(MCSubtargetInfo *II, StringRef TT, StringRef CPU, StringRef FS) {
  II->InitMCSubtargetInfo(TT, CPU, FS, NVPTXFeatureKV, NVPTXSubTypeKV, 
                      NVPTXProcSchedKV, NVPTXWriteProcResTable, NVPTXWriteLatencyTable, NVPTXReadAdvanceTable, 0, 0, 0, 6, 4);
}

} // End llvm namespace 
#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"
// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::NVPTXSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  uint64_t Bits = getFeatureBits();
  if ((Bits & NVPTX::PTX30) != 0 && PTXVersion < 30) PTXVersion = 30;
  if ((Bits & NVPTX::PTX31) != 0 && PTXVersion < 31) PTXVersion = 31;
  if ((Bits & NVPTX::SM20) != 0 && SmVersion < 20) SmVersion = 20;
  if ((Bits & NVPTX::SM21) != 0 && SmVersion < 21) SmVersion = 21;
  if ((Bits & NVPTX::SM30) != 0 && SmVersion < 30) SmVersion = 30;
  if ((Bits & NVPTX::SM35) != 0 && SmVersion < 35) SmVersion = 35;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER
namespace llvm {
class DFAPacketizer;
struct NVPTXGenSubtargetInfo : public TargetSubtargetInfo {
  explicit NVPTXGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS);
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
extern const llvm::SubtargetFeatureKV NVPTXFeatureKV[];
extern const llvm::SubtargetFeatureKV NVPTXSubTypeKV[];
extern const llvm::SubtargetInfoKV NVPTXProcSchedKV[];
extern const llvm::MCWriteProcResEntry NVPTXWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry NVPTXWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry NVPTXReadAdvanceTable[];
NVPTXGenSubtargetInfo::NVPTXGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo() {
  InitMCSubtargetInfo(TT, CPU, FS, NVPTXFeatureKV, NVPTXSubTypeKV, 
                      NVPTXProcSchedKV, NVPTXWriteProcResTable, NVPTXWriteLatencyTable, NVPTXReadAdvanceTable, 
                      0, 0, 0, 6, 4);
}

unsigned NVPTXGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // NVPTXGenSubtargetInfo::resolveSchedClass
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_CTOR

