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
namespace AMDGPU {
enum {
  Feature32on64BitPtr =  1ULL << 0,
  Feature64BitPtr =  1ULL << 1,
  FeatureCaymanISA =  1ULL << 2,
  FeatureDumpCode =  1ULL << 3,
  FeatureEvergreen =  1ULL << 4,
  FeatureFP64 =  1ULL << 5,
  FeatureFetchLimit8 =  1ULL << 6,
  FeatureFetchLimit16 =  1ULL << 7,
  FeatureNorthernIslands =  1ULL << 8,
  FeatureR600 =  1ULL << 9,
  FeatureR600ALUInst =  1ULL << 10,
  FeatureR700 =  1ULL << 11,
  FeatureSouthernIslands =  1ULL << 12,
  FeatureVertexCache =  1ULL << 13
};
}
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC
namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV AMDGPUFeatureKV[] = {
  { "64BitPtr", "Specify if 64bit addressing should be used.", AMDGPU::Feature64BitPtr, 0ULL },
  { "64on32BitPtr", "Specify if 64bit sized pointers with 32bit addressing should be used.", AMDGPU::Feature32on64BitPtr, 0ULL },
  { "DumpCode", "Dump MachineInstrs in the CodeEmitter", AMDGPU::FeatureDumpCode, 0ULL },
  { "EVERGREEN", "EVERGREEN GPU generation", AMDGPU::FeatureEvergreen, AMDGPU::FeatureFetchLimit16 },
  { "HasVertexCache", "Specify use of dedicated vertex cache.", AMDGPU::FeatureVertexCache, 0ULL },
  { "NORTHERN_ISLANDS", "NORTHERN_ISLANDS GPU generation", AMDGPU::FeatureNorthernIslands, AMDGPU::FeatureFetchLimit16 },
  { "R600", "R600 GPU generation", AMDGPU::FeatureR600, AMDGPU::FeatureR600ALUInst | AMDGPU::FeatureFetchLimit8 },
  { "R600ALUInst", "Older version of ALU instructions encoding.", AMDGPU::FeatureR600ALUInst, 0ULL },
  { "R700", "R700 GPU generation", AMDGPU::FeatureR700, AMDGPU::FeatureFetchLimit16 },
  { "SOUTHERN_ISLANDS", "SOUTHERN_ISLANDS GPU generation", AMDGPU::FeatureSouthernIslands, AMDGPU::Feature64BitPtr | AMDGPU::FeatureFP64 },
  { "caymanISA", "Use Cayman ISA", AMDGPU::FeatureCaymanISA, 0ULL },
  { "fetch16", "Limit the maximum number of fetches in a clause to 16", AMDGPU::FeatureFetchLimit16, 0ULL },
  { "fetch8", "Limit the maximum number of fetches in a clause to 8", AMDGPU::FeatureFetchLimit8, 0ULL },
  { "fp64", "Enable 64bit double precision operations", AMDGPU::FeatureFP64, 0ULL }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV AMDGPUSubTypeKV[] = {
  { "", "Select the  processor", AMDGPU::FeatureR600 | AMDGPU::FeatureVertexCache, 0ULL },
  { "SI", "Select the SI processor", AMDGPU::FeatureSouthernIslands, 0ULL },
  { "barts", "Select the barts processor", AMDGPU::FeatureNorthernIslands | AMDGPU::FeatureVertexCache, 0ULL },
  { "bonaire", "Select the bonaire processor", AMDGPU::FeatureSouthernIslands, 0ULL },
  { "caicos", "Select the caicos processor", AMDGPU::FeatureNorthernIslands, 0ULL },
  { "cayman", "Select the cayman processor", AMDGPU::FeatureNorthernIslands | AMDGPU::FeatureFP64 | AMDGPU::FeatureCaymanISA, 0ULL },
  { "cedar", "Select the cedar processor", AMDGPU::FeatureEvergreen | AMDGPU::FeatureVertexCache, 0ULL },
  { "cypress", "Select the cypress processor", AMDGPU::FeatureEvergreen | AMDGPU::FeatureFP64 | AMDGPU::FeatureVertexCache, 0ULL },
  { "hainan", "Select the hainan processor", AMDGPU::FeatureSouthernIslands, 0ULL },
  { "juniper", "Select the juniper processor", AMDGPU::FeatureEvergreen | AMDGPU::FeatureVertexCache, 0ULL },
  { "kabini", "Select the kabini processor", AMDGPU::FeatureSouthernIslands, 0ULL },
  { "kaveri", "Select the kaveri processor", AMDGPU::FeatureSouthernIslands, 0ULL },
  { "oland", "Select the oland processor", AMDGPU::FeatureSouthernIslands, 0ULL },
  { "pitcairn", "Select the pitcairn processor", AMDGPU::FeatureSouthernIslands, 0ULL },
  { "r600", "Select the r600 processor", AMDGPU::FeatureR600 | AMDGPU::FeatureVertexCache, 0ULL },
  { "redwood", "Select the redwood processor", AMDGPU::FeatureEvergreen | AMDGPU::FeatureVertexCache, 0ULL },
  { "rs880", "Select the rs880 processor", AMDGPU::FeatureR600, 0ULL },
  { "rv670", "Select the rv670 processor", AMDGPU::FeatureR600 | AMDGPU::FeatureFP64 | AMDGPU::FeatureVertexCache, 0ULL },
  { "rv710", "Select the rv710 processor", AMDGPU::FeatureR700 | AMDGPU::FeatureVertexCache, 0ULL },
  { "rv730", "Select the rv730 processor", AMDGPU::FeatureR700 | AMDGPU::FeatureVertexCache, 0ULL },
  { "rv770", "Select the rv770 processor", AMDGPU::FeatureR700 | AMDGPU::FeatureFP64 | AMDGPU::FeatureVertexCache, 0ULL },
  { "sumo", "Select the sumo processor", AMDGPU::FeatureEvergreen, 0ULL },
  { "tahiti", "Select the tahiti processor", AMDGPU::FeatureSouthernIslands, 0ULL },
  { "turks", "Select the turks processor", AMDGPU::FeatureNorthernIslands | AMDGPU::FeatureVertexCache, 0ULL },
  { "verde", "Select the verde processor", AMDGPU::FeatureSouthernIslands, 0ULL }
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#ifndef NDEBUG
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "R600_VLIW5_Itin"
namespace R600_VLIW5_ItinFU {
  const unsigned ALU_X = 1 << 0;
  const unsigned ALU_Y = 1 << 1;
  const unsigned ALU_Z = 1 << 2;
  const unsigned ALU_W = 1 << 3;
  const unsigned TRANS = 1 << 4;
  const unsigned ALU_NULL = 1 << 5;
}

// Functional units for "R600_VLIW4_Itin"
namespace R600_VLIW4_ItinFU {
  const unsigned ALU_X = 1 << 0;
  const unsigned ALU_Y = 1 << 1;
  const unsigned ALU_Z = 1 << 2;
  const unsigned ALU_W = 1 << 3;
  const unsigned ALU_NULL = 1 << 4;
}

extern const llvm::InstrStage AMDGPUStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, R600_VLIW5_ItinFU::ALU_X | R600_VLIW5_ItinFU::ALU_Y | R600_VLIW5_ItinFU::ALU_Z | R600_VLIW5_ItinFU::ALU_W | R600_VLIW5_ItinFU::TRANS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1
  { 1, R600_VLIW5_ItinFU::ALU_NULL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 2
  { 1, R600_VLIW5_ItinFU::ALU_X | R600_VLIW5_ItinFU::ALU_Y | R600_VLIW5_ItinFU::ALU_Z | R600_VLIW5_ItinFU::ALU_W, -1, (llvm::InstrStage::ReservationKinds)0 }, // 3
  { 1, R600_VLIW5_ItinFU::TRANS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 4
  { 1, R600_VLIW5_ItinFU::ALU_X, -1, (llvm::InstrStage::ReservationKinds)0 }, // 5
  { 1, R600_VLIW4_ItinFU::ALU_X | R600_VLIW4_ItinFU::ALU_Y | R600_VLIW4_ItinFU::ALU_Z | R600_VLIW4_ItinFU::ALU_W, -1, (llvm::InstrStage::ReservationKinds)0 }, // 6
  { 1, R600_VLIW4_ItinFU::ALU_NULL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 7
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned AMDGPUOperandCycles[] = {
  0, // No itinerary
  0 // End operand cycles
};
extern const unsigned AMDGPUForwardingPaths[] = {
 0, // No itinerary
 0 // End bypass tables
};

static const llvm::InstrItinerary *NoItineraries = 0;

static const llvm::InstrItinerary R600_VLIW5_Itin[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 1, 2, 0, 0 }, // 1 AnyALU
  { 1, 2, 3, 0, 0 }, // 2 NullALU
  { 1, 3, 4, 0, 0 }, // 3 VecALU
  { 1, 4, 5, 0, 0 }, // 4 TransALU
  { 1, 5, 6, 0, 0 }, // 5 XALU
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary R600_VLIW4_Itin[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 6, 7, 0, 0 }, // 1 AnyALU
  { 1, 7, 8, 0, 0 }, // 2 NullALU
  { 1, 6, 7, 0, 0 }, // 3 VecALU
  { 1, 7, 8, 0, 0 }, // 4 TransALU
  { 0, 0, 0, 0, 0 }, // 5 XALU
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry AMDGPUWriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // AMDGPUWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry AMDGPUWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // AMDGPUWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry AMDGPUReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // AMDGPUReadAdvanceTable

static const llvm::MCSchedModel NoSchedModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  0, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  NoItineraries);

static const llvm::MCSchedModel R600_VLIW5_ItinModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  1, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  R600_VLIW5_Itin);

static const llvm::MCSchedModel R600_VLIW4_ItinModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  2, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  R600_VLIW4_Itin);

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV AMDGPUProcSchedKV[] = {
  { "", (const void *)&R600_VLIW5_ItinModel },
  { "SI", (const void *)&NoSchedModel },
  { "barts", (const void *)&R600_VLIW5_ItinModel },
  { "bonaire", (const void *)&NoSchedModel },
  { "caicos", (const void *)&R600_VLIW5_ItinModel },
  { "cayman", (const void *)&R600_VLIW4_ItinModel },
  { "cedar", (const void *)&R600_VLIW5_ItinModel },
  { "cypress", (const void *)&R600_VLIW5_ItinModel },
  { "hainan", (const void *)&NoSchedModel },
  { "juniper", (const void *)&R600_VLIW5_ItinModel },
  { "kabini", (const void *)&NoSchedModel },
  { "kaveri", (const void *)&NoSchedModel },
  { "oland", (const void *)&NoSchedModel },
  { "pitcairn", (const void *)&NoSchedModel },
  { "r600", (const void *)&R600_VLIW5_ItinModel },
  { "redwood", (const void *)&R600_VLIW5_ItinModel },
  { "rs880", (const void *)&R600_VLIW5_ItinModel },
  { "rv670", (const void *)&R600_VLIW5_ItinModel },
  { "rv710", (const void *)&R600_VLIW5_ItinModel },
  { "rv730", (const void *)&R600_VLIW5_ItinModel },
  { "rv770", (const void *)&R600_VLIW5_ItinModel },
  { "sumo", (const void *)&R600_VLIW5_ItinModel },
  { "tahiti", (const void *)&NoSchedModel },
  { "turks", (const void *)&R600_VLIW5_ItinModel },
  { "verde", (const void *)&NoSchedModel }
};
#undef DBGFIELD
static inline void InitAMDGPUMCSubtargetInfo(MCSubtargetInfo *II, StringRef TT, StringRef CPU, StringRef FS) {
  II->InitMCSubtargetInfo(TT, CPU, FS, AMDGPUFeatureKV, AMDGPUSubTypeKV, 
                      AMDGPUProcSchedKV, AMDGPUWriteProcResTable, AMDGPUWriteLatencyTable, AMDGPUReadAdvanceTable, 
                      AMDGPUStages, AMDGPUOperandCycles, AMDGPUForwardingPaths, 14, 25);
}

} // End llvm namespace 
#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"
// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::AMDGPUSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  uint64_t Bits = getFeatureBits();
  if ((Bits & AMDGPU::Feature32on64BitPtr) != 0) Is32on64bit = false;
  if ((Bits & AMDGPU::Feature64BitPtr) != 0) Is64bit = true;
  if ((Bits & AMDGPU::FeatureCaymanISA) != 0) CaymanISA = true;
  if ((Bits & AMDGPU::FeatureDumpCode) != 0) DumpCode = true;
  if ((Bits & AMDGPU::FeatureEvergreen) != 0 && Gen < AMDGPUSubtarget::EVERGREEN) Gen = AMDGPUSubtarget::EVERGREEN;
  if ((Bits & AMDGPU::FeatureFP64) != 0) FP64 = true;
  if ((Bits & AMDGPU::FeatureFetchLimit8) != 0 && TexVTXClauseSize < 8) TexVTXClauseSize = 8;
  if ((Bits & AMDGPU::FeatureFetchLimit16) != 0 && TexVTXClauseSize < 16) TexVTXClauseSize = 16;
  if ((Bits & AMDGPU::FeatureNorthernIslands) != 0 && Gen < AMDGPUSubtarget::NORTHERN_ISLANDS) Gen = AMDGPUSubtarget::NORTHERN_ISLANDS;
  if ((Bits & AMDGPU::FeatureR600) != 0 && Gen < AMDGPUSubtarget::R600) Gen = AMDGPUSubtarget::R600;
  if ((Bits & AMDGPU::FeatureR600ALUInst) != 0) R600ALUInst = false;
  if ((Bits & AMDGPU::FeatureR700) != 0 && Gen < AMDGPUSubtarget::R700) Gen = AMDGPUSubtarget::R700;
  if ((Bits & AMDGPU::FeatureSouthernIslands) != 0 && Gen < AMDGPUSubtarget::SOUTHERN_ISLANDS) Gen = AMDGPUSubtarget::SOUTHERN_ISLANDS;
  if ((Bits & AMDGPU::FeatureVertexCache) != 0) HasVertexCache = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER
namespace llvm {
class DFAPacketizer;
struct AMDGPUGenSubtargetInfo : public TargetSubtargetInfo {
  explicit AMDGPUGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS);
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
extern const llvm::SubtargetFeatureKV AMDGPUFeatureKV[];
extern const llvm::SubtargetFeatureKV AMDGPUSubTypeKV[];
extern const llvm::SubtargetInfoKV AMDGPUProcSchedKV[];
extern const llvm::MCWriteProcResEntry AMDGPUWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry AMDGPUWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry AMDGPUReadAdvanceTable[];
extern const llvm::InstrStage AMDGPUStages[];
extern const unsigned AMDGPUOperandCycles[];
extern const unsigned AMDGPUForwardingPaths[];
AMDGPUGenSubtargetInfo::AMDGPUGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo() {
  InitMCSubtargetInfo(TT, CPU, FS, AMDGPUFeatureKV, AMDGPUSubTypeKV, 
                      AMDGPUProcSchedKV, AMDGPUWriteProcResTable, AMDGPUWriteLatencyTable, AMDGPUReadAdvanceTable, 
                      AMDGPUStages, AMDGPUOperandCycles, AMDGPUForwardingPaths, 14, 25);
}

unsigned AMDGPUGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // AMDGPUGenSubtargetInfo::resolveSchedClass
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_CTOR

