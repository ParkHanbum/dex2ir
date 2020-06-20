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
namespace Hexagon {
enum {
  ArchV2 =  1ULL << 0,
  ArchV3 =  1ULL << 1,
  ArchV4 =  1ULL << 2,
  ArchV5 =  1ULL << 3
};
}
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC
namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV HexagonFeatureKV[] = {
  { "v2", "Hexagon v2", Hexagon::ArchV2, 0ULL },
  { "v3", "Hexagon v3", Hexagon::ArchV3, 0ULL },
  { "v4", "Hexagon v4", Hexagon::ArchV4, 0ULL },
  { "v5", "Hexagon v5", Hexagon::ArchV5, 0ULL }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV HexagonSubTypeKV[] = {
  { "hexagonv2", "Select the hexagonv2 processor", Hexagon::ArchV2, 0ULL },
  { "hexagonv3", "Select the hexagonv3 processor", Hexagon::ArchV2 | Hexagon::ArchV3, 0ULL },
  { "hexagonv4", "Select the hexagonv4 processor", Hexagon::ArchV2 | Hexagon::ArchV3 | Hexagon::ArchV4, 0ULL },
  { "hexagonv5", "Select the hexagonv5 processor", Hexagon::ArchV2 | Hexagon::ArchV3 | Hexagon::ArchV4 | Hexagon::ArchV5, 0ULL }
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#ifndef NDEBUG
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "HexagonItineraries"
namespace HexagonItinerariesFU {
  const unsigned LSUNIT = 1 << 0;
  const unsigned LUNIT = 1 << 1;
  const unsigned MUNIT = 1 << 2;
  const unsigned SUNIT = 1 << 3;
  const unsigned LOOPUNIT = 1 << 4;
}

// Functional units for "HexagonItinerariesV4"
namespace HexagonItinerariesV4FU {
  const unsigned SLOT0 = 1 << 0;
  const unsigned SLOT1 = 1 << 1;
  const unsigned SLOT2 = 1 << 2;
  const unsigned SLOT3 = 1 << 3;
  const unsigned SLOT_ENDLOOP = 1 << 4;
}

extern const llvm::InstrStage HexagonStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, HexagonItinerariesFU::MUNIT | HexagonItinerariesFU::SUNIT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1
  { 1, HexagonItinerariesFU::SUNIT | HexagonItinerariesFU::MUNIT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 2
  { 1, HexagonItinerariesFU::LUNIT | HexagonItinerariesFU::LSUNIT | HexagonItinerariesFU::MUNIT | HexagonItinerariesFU::SUNIT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 3
  { 1, HexagonItinerariesFU::LSUNIT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 4
  { 1, HexagonItinerariesFU::MUNIT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 5
  { 1, HexagonItinerariesFU::LUNIT | HexagonItinerariesFU::LSUNIT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 6
  { 1, HexagonItinerariesFU::LOOPUNIT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 7
  { 1, HexagonItinerariesFU::SUNIT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 8
  { 1, HexagonItinerariesV4FU::SLOT2 | HexagonItinerariesV4FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 9
  { 1, HexagonItinerariesV4FU::SLOT0 | HexagonItinerariesV4FU::SLOT1 | HexagonItinerariesV4FU::SLOT2 | HexagonItinerariesV4FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 10
  { 1, HexagonItinerariesV4FU::SLOT0 | HexagonItinerariesV4FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 11
  { 1, HexagonItinerariesV4FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 12
  { 1, HexagonItinerariesV4FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 13
  { 1, HexagonItinerariesV4FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 14
  { 1, HexagonItinerariesV4FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 15
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned HexagonOperandCycles[] = {
  0, // No itinerary
  0 // End operand cycles
};
extern const unsigned HexagonForwardingPaths[] = {
 0, // No itinerary
 0 // End bypass tables
};

static const llvm::InstrItinerary *NoItineraries = 0;

static const llvm::InstrItinerary HexagonItineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 1, 2, 0, 0 }, // 1 ALU64
  { 1, 2, 3, 0, 0 }, // 2 S
  { 1, 3, 4, 0, 0 }, // 3 ALU32
  { 1, 1, 2, 0, 0 }, // 4 M
  { 1, 3, 4, 0, 0 }, // 5 PSEUDO
  { 1, 4, 5, 0, 0 }, // 6 ST
  { 1, 4, 5, 0, 0 }, // 7 SYS
  { 1, 2, 3, 0, 0 }, // 8 J
  { 1, 5, 6, 0, 0 }, // 9 JR
  { 0, 0, 0, 0, 0 }, // 10 NV_V4
  { 1, 6, 7, 0, 0 }, // 11 LD
  { 1, 7, 8, 0, 0 }, // 12 ENDLOOP
  { 0, 0, 0, 0, 0 }, // 13 PREFIX
  { 1, 8, 9, 0, 0 }, // 14 CR
  { 0, 0, 0, 0, 0 }, // 15 MEM_V4
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary HexagonItinerariesV4[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 9, 10, 0, 0 }, // 1 ALU64
  { 1, 9, 10, 0, 0 }, // 2 S
  { 1, 10, 11, 0, 0 }, // 3 ALU32
  { 1, 9, 10, 0, 0 }, // 4 M
  { 1, 10, 11, 0, 0 }, // 5 PSEUDO
  { 1, 11, 12, 0, 0 }, // 6 ST
  { 1, 12, 13, 0, 0 }, // 7 SYS
  { 1, 9, 10, 0, 0 }, // 8 J
  { 1, 13, 14, 0, 0 }, // 9 JR
  { 1, 12, 13, 0, 0 }, // 10 NV_V4
  { 1, 11, 12, 0, 0 }, // 11 LD
  { 1, 14, 15, 0, 0 }, // 12 ENDLOOP
  { 1, 10, 11, 0, 0 }, // 13 PREFIX
  { 1, 15, 16, 0, 0 }, // 14 CR
  { 1, 12, 13, 0, 0 }, // 15 MEM_V4
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry HexagonWriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // HexagonWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry HexagonWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // HexagonWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry HexagonReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // HexagonReadAdvanceTable

static const llvm::MCSchedModel NoSchedModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  0, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  NoItineraries);

static const llvm::MCSchedModel HexagonModel(
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  1, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  HexagonItineraries);

static const llvm::MCSchedModel HexagonModelV4(
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  2, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV4);

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV HexagonProcSchedKV[] = {
  { "hexagonv2", (const void *)&HexagonModel },
  { "hexagonv3", (const void *)&HexagonModel },
  { "hexagonv4", (const void *)&HexagonModelV4 },
  { "hexagonv5", (const void *)&HexagonModelV4 }
};
#undef DBGFIELD
static inline void InitHexagonMCSubtargetInfo(MCSubtargetInfo *II, StringRef TT, StringRef CPU, StringRef FS) {
  II->InitMCSubtargetInfo(TT, CPU, FS, HexagonFeatureKV, HexagonSubTypeKV, 
                      HexagonProcSchedKV, HexagonWriteProcResTable, HexagonWriteLatencyTable, HexagonReadAdvanceTable, 
                      HexagonStages, HexagonOperandCycles, HexagonForwardingPaths, 4, 4);
}

} // End llvm namespace 
#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"
// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::HexagonSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  uint64_t Bits = getFeatureBits();
  if ((Bits & Hexagon::ArchV2) != 0 && HexagonArchVersion < V2) HexagonArchVersion = V2;
  if ((Bits & Hexagon::ArchV3) != 0 && HexagonArchVersion < V3) HexagonArchVersion = V3;
  if ((Bits & Hexagon::ArchV4) != 0 && HexagonArchVersion < V4) HexagonArchVersion = V4;
  if ((Bits & Hexagon::ArchV5) != 0 && HexagonArchVersion < V5) HexagonArchVersion = V5;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER
namespace llvm {
class DFAPacketizer;
struct HexagonGenSubtargetInfo : public TargetSubtargetInfo {
  explicit HexagonGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS);
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
extern const llvm::SubtargetFeatureKV HexagonFeatureKV[];
extern const llvm::SubtargetFeatureKV HexagonSubTypeKV[];
extern const llvm::SubtargetInfoKV HexagonProcSchedKV[];
extern const llvm::MCWriteProcResEntry HexagonWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry HexagonWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry HexagonReadAdvanceTable[];
extern const llvm::InstrStage HexagonStages[];
extern const unsigned HexagonOperandCycles[];
extern const unsigned HexagonForwardingPaths[];
HexagonGenSubtargetInfo::HexagonGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo() {
  InitMCSubtargetInfo(TT, CPU, FS, HexagonFeatureKV, HexagonSubTypeKV, 
                      HexagonProcSchedKV, HexagonWriteProcResTable, HexagonWriteLatencyTable, HexagonReadAdvanceTable, 
                      HexagonStages, HexagonOperandCycles, HexagonForwardingPaths, 4, 4);
}

unsigned HexagonGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // HexagonGenSubtargetInfo::resolveSchedClass
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_CTOR

