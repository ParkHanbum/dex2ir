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
namespace ARM {
  const uint64_t FeatureAvoidMOVsShOp = 1ULL << 0;
  const uint64_t FeatureAvoidPartialCPSR = 1ULL << 1;
  const uint64_t FeatureD16 = 1ULL << 2;
  const uint64_t FeatureDB = 1ULL << 3;
  const uint64_t FeatureDSPThumb2 = 1ULL << 4;
  const uint64_t FeatureFP16 = 1ULL << 5;
  const uint64_t FeatureHWDiv = 1ULL << 6;
  const uint64_t FeatureHWDivARM = 1ULL << 7;
  const uint64_t FeatureHasRAS = 1ULL << 8;
  const uint64_t FeatureHasSlowFPVMLx = 1ULL << 9;
  const uint64_t FeatureMClass = 1ULL << 10;
  const uint64_t FeatureMP = 1ULL << 11;
  const uint64_t FeatureNEON = 1ULL << 12;
  const uint64_t FeatureNEONForFP = 1ULL << 13;
  const uint64_t FeatureNaClTrap = 1ULL << 14;
  const uint64_t FeatureNoARM = 1ULL << 15;
  const uint64_t FeaturePerfMon = 1ULL << 16;
  const uint64_t FeaturePref32BitThumb = 1ULL << 17;
  const uint64_t FeatureSlowFPBrcc = 1ULL << 18;
  const uint64_t FeatureT2XtPk = 1ULL << 19;
  const uint64_t FeatureThumb2 = 1ULL << 20;
  const uint64_t FeatureTrustZone = 1ULL << 21;
  const uint64_t FeatureV8FP = 1ULL << 22;
  const uint64_t FeatureVFP2 = 1ULL << 23;
  const uint64_t FeatureVFP3 = 1ULL << 24;
  const uint64_t FeatureVFP4 = 1ULL << 25;
  const uint64_t FeatureVFPOnlySP = 1ULL << 26;
  const uint64_t FeatureVMLxForwarding = 1ULL << 27;
  const uint64_t HasV4TOps = 1ULL << 28;
  const uint64_t HasV5TEOps = 1ULL << 29;
  const uint64_t HasV5TOps = 1ULL << 30;
  const uint64_t HasV6Ops = 1ULL << 31;
  const uint64_t HasV6T2Ops = 1ULL << 32;
  const uint64_t HasV7Ops = 1ULL << 33;
  const uint64_t HasV8Ops = 1ULL << 34;
  const uint64_t ModeThumb = 1ULL << 35;
  const uint64_t ProcA5 = 1ULL << 36;
  const uint64_t ProcA8 = 1ULL << 37;
  const uint64_t ProcA9 = 1ULL << 38;
  const uint64_t ProcA15 = 1ULL << 39;
  const uint64_t ProcR5 = 1ULL << 40;
  const uint64_t ProcSwift = 1ULL << 41;
}
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC
namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV ARMFeatureKV[] = {
  { "32bit", "Prefer 32-bit Thumb instrs", ARM::FeaturePref32BitThumb, 0ULL },
  { "a15", "Cortex-A15 ARM processors", ARM::ProcA15, ARM::FeatureT2XtPk | ARM::FeatureFP16 | ARM::FeatureVFP4 | ARM::FeatureAvoidPartialCPSR | ARM::FeatureTrustZone },
  { "a5", "Cortex-A5 ARM processors", ARM::ProcA5, ARM::FeatureSlowFPBrcc | ARM::FeatureHasSlowFPVMLx | ARM::FeatureVMLxForwarding | ARM::FeatureT2XtPk | ARM::FeatureTrustZone },
  { "a8", "Cortex-A8 ARM processors", ARM::ProcA8, ARM::FeatureSlowFPBrcc | ARM::FeatureHasSlowFPVMLx | ARM::FeatureVMLxForwarding | ARM::FeatureT2XtPk | ARM::FeatureTrustZone },
  { "a9", "Cortex-A9 ARM processors", ARM::ProcA9, ARM::FeatureVMLxForwarding | ARM::FeatureT2XtPk | ARM::FeatureFP16 | ARM::FeatureAvoidPartialCPSR | ARM::FeatureTrustZone },
  { "avoid-movs-shop", "Avoid movs instructions with shifter operand", ARM::FeatureAvoidMOVsShOp, 0ULL },
  { "avoid-partial-cpsr", "Avoid CPSR partial update for OOO execution", ARM::FeatureAvoidPartialCPSR, 0ULL },
  { "d16", "Restrict VFP3 to 16 double registers", ARM::FeatureD16, 0ULL },
  { "db", "Has data barrier (dmb / dsb) instructions", ARM::FeatureDB, 0ULL },
  { "fp-only-sp", "Floating point unit supports single precision only", ARM::FeatureVFPOnlySP, 0ULL },
  { "fp16", "Enable half-precision floating point", ARM::FeatureFP16, 0ULL },
  { "hwdiv", "Enable divide instructions", ARM::FeatureHWDiv, 0ULL },
  { "hwdiv-arm", "Enable divide instructions in ARM mode", ARM::FeatureHWDivARM, 0ULL },
  { "mclass", "Is microcontroller profile ('M' series)", ARM::FeatureMClass, 0ULL },
  { "mp", "Supports Multiprocessing extension", ARM::FeatureMP, 0ULL },
  { "nacl-trap", "NaCl trap", ARM::FeatureNaClTrap, 0ULL },
  { "neon", "Enable NEON instructions", ARM::FeatureNEON, ARM::FeatureVFP3 },
  { "neonfp", "Use NEON for single precision FP", ARM::FeatureNEONForFP, 0ULL },
  { "noarm", "Does not support ARM mode execution", ARM::FeatureNoARM, ARM::ModeThumb },
  { "perfmon", "Enable support for Performance Monitor extensions", ARM::FeaturePerfMon, 0ULL },
  { "r5", "Cortex-R5 ARM processors", ARM::ProcR5, ARM::FeatureSlowFPBrcc | ARM::FeatureHWDiv | ARM::FeatureHWDivARM | ARM::FeatureHasSlowFPVMLx | ARM::FeatureAvoidPartialCPSR | ARM::FeatureT2XtPk },
  { "ras", "Has return address stack", ARM::FeatureHasRAS, 0ULL },
  { "slow-fp-brcc", "FP compare + branch is slow", ARM::FeatureSlowFPBrcc, 0ULL },
  { "slowfpvmlx", "Disable VFP / NEON MAC instructions", ARM::FeatureHasSlowFPVMLx, 0ULL },
  { "swift", "Swift ARM processors", ARM::ProcSwift, ARM::FeatureNEONForFP | ARM::FeatureT2XtPk | ARM::FeatureVFP4 | ARM::FeatureMP | ARM::FeatureHWDiv | ARM::FeatureHWDivARM | ARM::FeatureAvoidPartialCPSR | ARM::FeatureAvoidMOVsShOp | ARM::FeatureHasSlowFPVMLx | ARM::FeatureTrustZone },
  { "t2dsp", "Supports v7 DSP instructions in Thumb2", ARM::FeatureDSPThumb2, 0ULL },
  { "t2xtpk", "Enable Thumb2 extract and pack instructions", ARM::FeatureT2XtPk, 0ULL },
  { "thumb-mode", "Thumb mode", ARM::ModeThumb, 0ULL },
  { "thumb2", "Enable Thumb2 instructions", ARM::FeatureThumb2, 0ULL },
  { "trustzone", "Enable support for TrustZone security extensions", ARM::FeatureTrustZone, 0ULL },
  { "v4t", "Support ARM v4T instructions", ARM::HasV4TOps, 0ULL },
  { "v5t", "Support ARM v5T instructions", ARM::HasV5TOps, ARM::HasV4TOps },
  { "v5te", "Support ARM v5TE, v5TEj, and v5TExp instructions", ARM::HasV5TEOps, ARM::HasV5TOps },
  { "v6", "Support ARM v6 instructions", ARM::HasV6Ops, ARM::HasV5TEOps },
  { "v6t2", "Support ARM v6t2 instructions", ARM::HasV6T2Ops, ARM::HasV6Ops | ARM::FeatureThumb2 },
  { "v7", "Support ARM v7 instructions", ARM::HasV7Ops, ARM::HasV6T2Ops | ARM::FeaturePerfMon },
  { "v8", "Support ARM v8 instructions", ARM::HasV8Ops, ARM::HasV7Ops },
  { "v8fp", "Enable ARMv8 FP", ARM::FeatureV8FP, ARM::FeatureVFP4 },
  { "vfp2", "Enable VFP2 instructions", ARM::FeatureVFP2, 0ULL },
  { "vfp3", "Enable VFP3 instructions", ARM::FeatureVFP3, ARM::FeatureVFP2 },
  { "vfp4", "Enable VFP4 instructions", ARM::FeatureVFP4, ARM::FeatureVFP3 | ARM::FeatureFP16 },
  { "vmlx-forwarding", "Has multiplier accumulator forwarding", ARM::FeatureVMLxForwarding, 0ULL }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV ARMSubTypeKV[] = {
  { "arm1020e", "Select the arm1020e processor", ARM::HasV5TEOps, 0ULL },
  { "arm1020t", "Select the arm1020t processor", ARM::HasV5TOps, 0ULL },
  { "arm1022e", "Select the arm1022e processor", ARM::HasV5TEOps, 0ULL },
  { "arm10e", "Select the arm10e processor", ARM::HasV5TEOps, 0ULL },
  { "arm10tdmi", "Select the arm10tdmi processor", ARM::HasV5TOps, 0ULL },
  { "arm1136j-s", "Select the arm1136j-s processor", ARM::HasV6Ops, 0ULL },
  { "arm1136jf-s", "Select the arm1136jf-s processor", ARM::HasV6Ops | ARM::FeatureVFP2 | ARM::FeatureHasSlowFPVMLx, 0ULL },
  { "arm1156t2-s", "Select the arm1156t2-s processor", ARM::HasV6T2Ops | ARM::FeatureDSPThumb2, 0ULL },
  { "arm1156t2f-s", "Select the arm1156t2f-s processor", ARM::HasV6T2Ops | ARM::FeatureVFP2 | ARM::FeatureHasSlowFPVMLx | ARM::FeatureDSPThumb2, 0ULL },
  { "arm1176jz-s", "Select the arm1176jz-s processor", ARM::HasV6Ops, 0ULL },
  { "arm1176jzf-s", "Select the arm1176jzf-s processor", ARM::HasV6Ops | ARM::FeatureVFP2 | ARM::FeatureHasSlowFPVMLx, 0ULL },
  { "arm710t", "Select the arm710t processor", ARM::HasV4TOps, 0ULL },
  { "arm720t", "Select the arm720t processor", ARM::HasV4TOps, 0ULL },
  { "arm7tdmi", "Select the arm7tdmi processor", ARM::HasV4TOps, 0ULL },
  { "arm7tdmi-s", "Select the arm7tdmi-s processor", ARM::HasV4TOps, 0ULL },
  { "arm8", "Select the arm8 processor", 0ULL, 0ULL },
  { "arm810", "Select the arm810 processor", 0ULL, 0ULL },
  { "arm9", "Select the arm9 processor", ARM::HasV4TOps, 0ULL },
  { "arm920", "Select the arm920 processor", ARM::HasV4TOps, 0ULL },
  { "arm920t", "Select the arm920t processor", ARM::HasV4TOps, 0ULL },
  { "arm922t", "Select the arm922t processor", ARM::HasV4TOps, 0ULL },
  { "arm926ej-s", "Select the arm926ej-s processor", ARM::HasV5TEOps, 0ULL },
  { "arm940t", "Select the arm940t processor", ARM::HasV4TOps, 0ULL },
  { "arm946e-s", "Select the arm946e-s processor", ARM::HasV5TEOps, 0ULL },
  { "arm966e-s", "Select the arm966e-s processor", ARM::HasV5TEOps, 0ULL },
  { "arm968e-s", "Select the arm968e-s processor", ARM::HasV5TEOps, 0ULL },
  { "arm9e", "Select the arm9e processor", ARM::HasV5TEOps, 0ULL },
  { "arm9tdmi", "Select the arm9tdmi processor", ARM::HasV4TOps, 0ULL },
  { "cortex-a15", "Select the cortex-a15 processor", ARM::ProcA15 | ARM::HasV7Ops | ARM::FeatureNEON | ARM::FeatureDB | ARM::FeatureDSPThumb2 | ARM::FeatureHasRAS, 0ULL },
  { "cortex-a5", "Select the cortex-a5 processor", ARM::ProcA5 | ARM::HasV7Ops | ARM::FeatureNEON | ARM::FeatureDB | ARM::FeatureVFP4 | ARM::FeatureDSPThumb2 | ARM::FeatureHasRAS, 0ULL },
  { "cortex-a53", "Select the cortex-a53 processor", ARM::HasV8Ops, 0ULL },
  { "cortex-a8", "Select the cortex-a8 processor", ARM::ProcA8 | ARM::HasV7Ops | ARM::FeatureNEON | ARM::FeatureDB | ARM::FeatureDSPThumb2 | ARM::FeatureHasRAS, 0ULL },
  { "cortex-a9", "Select the cortex-a9 processor", ARM::ProcA9 | ARM::HasV7Ops | ARM::FeatureNEON | ARM::FeatureDB | ARM::FeatureDSPThumb2 | ARM::FeatureHasRAS, 0ULL },
  { "cortex-a9-mp", "Select the cortex-a9-mp processor", ARM::ProcA9 | ARM::HasV7Ops | ARM::FeatureNEON | ARM::FeatureDB | ARM::FeatureDSPThumb2 | ARM::FeatureMP | ARM::FeatureHasRAS, 0ULL },
  { "cortex-m0", "Select the cortex-m0 processor", ARM::HasV6Ops | ARM::FeatureNoARM | ARM::FeatureDB | ARM::FeatureMClass, 0ULL },
  { "cortex-m3", "Select the cortex-m3 processor", ARM::HasV7Ops | ARM::FeatureThumb2 | ARM::FeatureNoARM | ARM::FeatureDB | ARM::FeatureHWDiv | ARM::FeatureMClass, 0ULL },
  { "cortex-m4", "Select the cortex-m4 processor", ARM::HasV7Ops | ARM::FeatureThumb2 | ARM::FeatureNoARM | ARM::FeatureDB | ARM::FeatureHWDiv | ARM::FeatureDSPThumb2 | ARM::FeatureT2XtPk | ARM::FeatureVFP4 | ARM::FeatureVFPOnlySP | ARM::FeatureMClass, 0ULL },
  { "cortex-r5", "Select the cortex-r5 processor", ARM::ProcR5 | ARM::HasV7Ops | ARM::FeatureDB | ARM::FeatureVFP3 | ARM::FeatureDSPThumb2 | ARM::FeatureHasRAS, 0ULL },
  { "ep9312", "Select the ep9312 processor", ARM::HasV4TOps, 0ULL },
  { "generic", "Select the generic processor", 0ULL, 0ULL },
  { "iwmmxt", "Select the iwmmxt processor", ARM::HasV5TEOps, 0ULL },
  { "mpcore", "Select the mpcore processor", ARM::HasV6Ops | ARM::FeatureVFP2 | ARM::FeatureHasSlowFPVMLx, 0ULL },
  { "mpcorenovfp", "Select the mpcorenovfp processor", ARM::HasV6Ops, 0ULL },
  { "strongarm", "Select the strongarm processor", 0ULL, 0ULL },
  { "strongarm110", "Select the strongarm110 processor", 0ULL, 0ULL },
  { "strongarm1100", "Select the strongarm1100 processor", 0ULL, 0ULL },
  { "strongarm1110", "Select the strongarm1110 processor", 0ULL, 0ULL },
  { "swift", "Select the swift processor", ARM::ProcSwift | ARM::HasV7Ops | ARM::FeatureNEON | ARM::FeatureDB | ARM::FeatureDSPThumb2 | ARM::FeatureHasRAS, 0ULL },
  { "xscale", "Select the xscale processor", ARM::HasV5TEOps, 0ULL }
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#ifndef NDEBUG
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "ARMV6Itineraries"
namespace ARMV6ItinerariesFU {
  const unsigned V6_Pipe = 1 << 0;
}

// Functional units for "CortexA9Itineraries"
namespace CortexA9ItinerariesFU {
  const unsigned A9_Issue0 = 1 << 0;
  const unsigned A9_Issue1 = 1 << 1;
  const unsigned A9_Branch = 1 << 2;
  const unsigned A9_ALU0 = 1 << 3;
  const unsigned A9_ALU1 = 1 << 4;
  const unsigned A9_AGU = 1 << 5;
  const unsigned A9_NPipe = 1 << 6;
  const unsigned A9_MUX0 = 1 << 7;
  const unsigned A9_LSUnit = 1 << 8;
  const unsigned A9_DRegsVFP = 1 << 9;
  const unsigned A9_DRegsN = 1 << 10;
}

// Pipeline forwarding pathes for itineraries "CortexA9Itineraries"
namespace CortexA9ItinerariesBypass {
  const unsigned NoBypass = 0;
  const unsigned A9_LdBypass = 1 << 0;
}

// Functional units for "CortexA8Itineraries"
namespace CortexA8ItinerariesFU {
  const unsigned A8_Pipe0 = 1 << 0;
  const unsigned A8_Pipe1 = 1 << 1;
  const unsigned A8_LSPipe = 1 << 2;
  const unsigned A8_NPipe = 1 << 3;
  const unsigned A8_NLSPipe = 1 << 4;
}

// Functional units for "SwiftItineraries"
namespace SwiftItinerariesFU {
  const unsigned SW_DIS0 = 1 << 0;
  const unsigned SW_DIS1 = 1 << 1;
  const unsigned SW_DIS2 = 1 << 2;
  const unsigned SW_ALU0 = 1 << 3;
  const unsigned SW_ALU1 = 1 << 4;
  const unsigned SW_LS = 1 << 5;
  const unsigned SW_IDIV = 1 << 6;
  const unsigned SW_FDIV = 1 << 7;
}

extern const llvm::InstrStage ARMStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1
  { 2, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 2
  { 3, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 3
  { 3, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 4-5
  { 1, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 6-7
  { 1, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 8-10
  { 29, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 11
  { 15, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 12
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 13-14
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 15-16
  { 1, CortexA9ItinerariesFU::A9_Issue0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_Branch, -1, (llvm::InstrStage::ReservationKinds)0 }, // 17-19
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 20-21
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 22-26
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 27-31
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_AGU, 1, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 32-35
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_AGU, 1, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_Branch, -1, (llvm::InstrStage::ReservationKinds)0 }, // 36-40
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_AGU, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 41-44
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_AGU, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 45-48
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_AGU, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, 0, (llvm::InstrStage::ReservationKinds)0 }, // 49-52
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_ALU0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 53-54
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 55-58
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 59-61
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 62-65
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_AGU, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 66-71
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_AGU, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 72-75
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 76
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA9ItinerariesFU::A9_ALU0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 77-78
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_AGU, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 79-82
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 83-87
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 88-92
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 93-97
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 98-102
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 26, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 20, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 103-107
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 16, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 10, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 108-112
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 113-117
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 10, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 118-122
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 9, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 123-127
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 10, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 4, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 128-132
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 133-138
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 139-144
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 9, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 3, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 145-150
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 11, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 5, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 151-156
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 10, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 4, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 157-162
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 163-168
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 169-174
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 }, // 175-176
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 177-181
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 6, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 182-186
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 187-191
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 11, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 192-196
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 12, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 197-201
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 202-206
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 33, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 28, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 207-211
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 18, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 13, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 212-216
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 217-222
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 223-228
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 3, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 229-234
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 235-239
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 9, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 3, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 240-244
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 9, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 3, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 245-249
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 9, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 250-254
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_AGU, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 255-259
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_AGU, 1, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_Branch, -1, (llvm::InstrStage::ReservationKinds)0 }, // 260-264
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 265
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 266-268
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 269-270
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 271-272
  { 2, CortexA8ItinerariesFU::A8_Pipe0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 273-274
  { 3, CortexA8ItinerariesFU::A8_Pipe0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 275-276
  { 3, CortexA8ItinerariesFU::A8_Pipe0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 277-279
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 280-281
  { 2, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 282-283
  { 2, CortexA8ItinerariesFU::A8_Pipe0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 284
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 285-286
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 287-289
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 290-292
  { 3, CortexA8ItinerariesFU::A8_Pipe0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 293
  { 1, CortexA8ItinerariesFU::A8_Pipe0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 294
  { 2, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 295-296
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 297-298
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 9, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 9, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 299-301
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 302-304
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 305-307
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 29, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 29, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 308-310
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 20, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 20, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 311-313
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 314-315
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 19, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 19, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 316-318
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 319-321
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 322-324
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 325-327
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 328-330
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 331-333
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 334-336
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 337-341
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 342-344
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA8ItinerariesFU::A8_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 345-348
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 11, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 11, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 349-351
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 352-354
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 355-358
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 359-361
  { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 362-363
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 }, // 364
  { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 365-366
  { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 367-368
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 369-373
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 3, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 374-379
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 380-383
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 384-387
  { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 388-389
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, 2, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 390-393
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 3, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 394-399
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 3, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 400-406
  { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 407-410
  { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 411-414
  { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 415-418
  { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 14, SwiftItinerariesFU::SW_IDIV, -1, (llvm::InstrStage::ReservationKinds)0 }, // 419-421
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, 3, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 422-428
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0, 3, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 429-434
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 435-443
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 444-449
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, 4, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 450-453
  { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 454-455
  { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 30, SwiftItinerariesFU::SW_FDIV, -1, (llvm::InstrStage::ReservationKinds)0 }, // 456-458
  { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 15, SwiftItinerariesFU::SW_FDIV, -1, (llvm::InstrStage::ReservationKinds)0 }, // 459-461
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 4, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 462-465
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 4, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 466-469
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 3, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 470-473
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, 2, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 474-477
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, 2, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, 2, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 478-483
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, 2, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, 2, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, 2, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 484-490
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 491-494
  { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 3, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 495-497
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned ARMOperandCycles[] = {
  0, // No itinerary
  2,   2, // 1-2
  2,   2,   2, // 3-5
  3,   3,   2,   1, // 6-9
  3,   3,   2,   1, // 10-13
  3,   3,   2,   1, // 14-17
  2,   2, // 18-19
  2,   2,   2, // 20-22
  3,   3,   2,   1, // 23-26
  3,   3,   2,   1, // 27-30
  2,   1, // 31-32
  2,   2, // 33-34
  2, // 35
  2,   2, // 36-37
  3,   2,   1, // 38-40
  3,   2,   1, // 41-43
  5,   2, // 44-45
  5,   2, // 46-47
  3, // 48
  1,   1,   1,   1,   4, // 49-53
  2,   1,   1,   1,   4, // 54-58
  1,   2,   1,   1,   4, // 59-63
  4,   2,   1,   1, // 64-67
  4,   2,   1, // 68-70
  4,   1,   1, // 71-73
  5,   2,   1, // 74-76
  4,   1,   1, // 77-79
  4,   2,   1,   1, // 80-83
  4,   2,   1,   1, // 84-87
  4,   2,   1, // 88-90
  4,   1,   1, // 91-93
  5,   2,   1, // 94-96
  5,   1,   1,   2, // 97-100
  3, // 101
  2, // 102
  4, // 103
  3,   2, // 104-105
  4,   2,   1, // 106-108
  2, // 109
  3, // 110
  5, // 111
  2,   2, // 112-113
  3,   2,   1, // 114-116
  2,   1, // 117-118
  5,   1,   1, // 119-121
  2, // 122
  2,   2, // 123-124
  3,   2,   1, // 125-127
  2,   2,   2, // 128-130
  2,   1,   1, // 131-133
  2,   1,   1, // 134-136
  2,   2,   1, // 137-139
  2,   2,   1, // 140-142
  4,   1,   1,   2, // 143-146
  6,   1,   1,   2, // 147-150
  4,   1,   1, // 151-153
  6,   1,   1, // 154-156
  2, // 157
  2,   2,   1,   1, // 158-161
  2,   2,   1, // 162-164
  2,   2,   1,   1, // 165-168
  2,   2,   1, // 169-171
  2,   1,   1, // 172-174
  2,   2,   1,   1, // 175-178
  2,   2,   1, // 179-181
  2,   2,   1, // 182-184
  2,   2,   1, // 185-187
  1,   1, // 188-189
  2, // 190
  2,   2, // 191-192
  3,   2,   1, // 193-195
  3,   2,   1, // 196-198
  9,   2,   2, // 199-201
  9,   2,   2, // 202-204
  2,   2, // 205-206
  2,   2, // 207-208
  5,   2, // 209-210
  5,   2, // 211-212
  34,   2,   2, // 213-215
  20,   2,   2, // 216-218
  9,   2,   2,   2, // 219-222
  9,   2,   2,   2, // 223-226
  3,   2,   1,   1,   5, // 227-231
  2,   1,   1,   5, // 232-235
  5,   2,   2, // 236-238
  5,   2,   2, // 239-241
  9,   2,   2,   2, // 242-245
  9,   2,   2,   2, // 246-249
  10,   1,   1, // 250-252
  10,   10,   1, // 253-255
  10,   1, // 256-257
  10,   1, // 258-259
  9,   2,   2, // 260-262
  9,   2,   2, // 263-265
  9,   2, // 266-267
  9,   2, // 268-269
  9,   2, // 270-271
  9,   2, // 272-273
  34,   2,   2, // 274-276
  20,   2,   2, // 277-279
  2,   2,   2,   2, // 280-283
  2,   2,   2, // 284-286
  2,   2,   2, // 287-289
  9,   2, // 290-291
  9,   2, // 292-293
  9,   2, // 294-295
  9,   2, // 296-297
  2,   2,   1, // 298-300
  2,   2, // 301-302
  2,   1, // 303-304
  2, // 305
  2,   2, // 306-307
  2,   1, // 308-309
  4,   1, // 310-311
  4,   1, // 312-313
  4,   1, // 314-315
  3,   1, // 316-317
  3,   1, // 318-319
  2, // 320
  2,   1, // 321-322
  2,   1, // 323-324
  2,   1, // 325-326
  3,   3,   2,   1, // 327-330
  1,   1, // 331-332
  2, // 333
  2,   2, // 334-335
  2,   1, // 336-337
  2,   2,   2, // 338-340
  2,   2, // 341-342
  2,   2,   2, // 343-345
  1,   1,   4, // 346-348
  1,   2,   4, // 349-351
  2,   2, // 352-353
  2,   2, // 354-355
  2,   2,   2, // 356-358
  3,   3,   2,   1, // 359-362
  3,   3,   2,   1, // 363-366
  4,   2,   1, // 367-369
  3,   2,   1, // 370-372
  2,   1, // 373-374
  3,   2,   1, // 375-377
  2,   2, // 378-379
  4, // 380
  2, // 381
  3, // 382
  5, // 383
  2,   1, // 384-385
  5,   1,   1,   2, // 386-389
  5,   1,   1, // 390-392
  6,   1,   1,   2, // 393-396
  6,   1,   1, // 397-399
  4,   1,   1, // 400-402
  4,   1,   1,   2, // 403-406
  4,   1,   1, // 407-409
  5,   2,   1, // 410-412
  4,   1,   1, // 413-415
  4,   2,   1,   1, // 416-419
  1,   1, // 420-421
  1,   1, // 422-423
  4, // 424
  2, // 425
  3, // 426
  2, // 427
  2,   1, // 428-429
  2,   2, // 430-431
  2,   2,   2, // 432-434
  2,   2,   2, // 435-437
  2,   2,   2, // 438-440
  2,   2,   1, // 441-443
  3,   3,   2,   1, // 444-447
  5,   1,   1, // 448-450
  4,   1,   1, // 451-453
  5,   1,   1,   2, // 454-457
  5,   1,   1,   2, // 458-461
  5,   1,   1,   2, // 462-465
  4,   1,   1,   2, // 466-469
  5,   1,   1,   2, // 470-473
  5,   1,   1,   2, // 474-477
  6,   1,   1, // 478-480
  6,   1,   1, // 481-483
  6,   1,   1,   2, // 484-487
  4,   1,   1, // 488-490
  5,   2,   1, // 491-493
  4,   1,   1, // 494-496
  4,   1, // 497-498
  4,   1, // 499-500
  3,   1, // 501-502
  5,   2,   1, // 503-505
  4,   1,   1, // 506-508
  4,   1,   1, // 509-511
  4,   1,   1, // 512-514
  4,   1,   1, // 515-517
  4,   1, // 518-519
  5,   2,   1, // 520-522
  4,   1,   1, // 523-525
  4,   2,   1,   1, // 526-529
  4,   2,   1, // 530-532
  4,   2,   1,   1, // 533-536
  4,   2,   1,   1, // 537-540
  4,   2,   1, // 541-543
  4,   1, // 544-545
  4,   1, // 546-547
  4,   1, // 548-549
  4,   2,   1, // 550-552
  4,   1,   1, // 553-555
  4,   1, // 556-557
  4,   2,   1,   1, // 558-561
  1,   1,   1,   1,   4, // 562-566
  2,   1,   1,   1,   4, // 567-571
  1,   2,   1,   1,   4, // 572-576
  1,   1,   4, // 577-579
  1,   2,   4, // 580-582
  2,   1,   1, // 583-585
  2,   1,   1, // 586-588
  2,   2,   1, // 589-591
  2,   2,   1, // 592-594
  2,   1, // 595-596
  2,   1, // 597-598
  2,   2,   1,   1, // 599-602
  2,   2,   1, // 603-605
  2,   2,   1,   1, // 606-609
  2,   2,   1, // 610-612
  2,   1, // 613-614
  2,   1, // 615-616
  2,   1,   1, // 617-619
  2,   2,   1,   1, // 620-623
  2, // 624
  5,   2, // 625-626
  5,   2, // 627-628
  2,   2, // 629-630
  2,   2, // 631-632
  9,   2,   2, // 633-635
  9,   2,   2, // 636-638
  9,   2,   2, // 639-641
  9,   2,   2, // 642-644
  9,   2,   2,   2, // 645-648
  9,   2,   2,   2, // 649-652
  9,   2,   2,   2, // 653-656
  9,   2,   2,   2, // 657-660
  5,   2, // 661-662
  5,   2, // 663-664
  9,   2, // 665-666
  9,   2, // 667-668
  9,   2, // 669-670
  9,   2, // 671-672
  9,   2, // 673-674
  9,   2, // 675-676
  5,   2, // 677-678
  5,   2, // 679-680
  10,   1, // 681-682
  10,   1, // 683-684
  10,   10,   1, // 685-687
  10,   1,   1, // 688-690
  10,   1,   1, // 691-693
  3, // 694
  3, // 695
  3, // 696
  5,   2,   2, // 697-699
  5,   2,   2, // 700-702
  2,   2,   2, // 703-705
  2,   2,   2, // 706-708
  2,   1,   1,   5, // 709-712
  2,   2,   2,   2, // 713-716
  2,   1,   1,   5, // 717-720
  3,   2,   1,   1,   5, // 721-725
  2,   1,   1,   5, // 726-729
  3,   2,   1,   1,   5, // 730-734
  20,   2,   2, // 735-737
  20,   2,   2, // 738-740
  34,   2,   2, // 741-743
  34,   2,   2, // 744-746
  1,   1, // 747-748
  1,   1,   1, // 749-751
  3,   1,   1,   1, // 752-755
  3,   1,   1,   1, // 756-759
  3,   1,   1,   1, // 760-763
  1,   1, // 764-765
  1,   1,   1, // 766-768
  3,   1,   1,   1, // 769-772
  3,   1,   1,   1, // 773-776
  2,   1, // 777-778
  1,   1, // 779-780
  1, // 781
  1,   1, // 782-783
  1,   1,   1, // 784-786
  1,   1,   1, // 787-789
  1,   1, // 790-791
  1,   1, // 792-793
  1, // 794
  1,   1,   1,   1,   3, // 795-799
  2,   1,   1,   1,   3, // 800-804
  1,   2,   1,   1,   3, // 805-809
  4,   3,   1,   1, // 810-813
  4,   3,   1, // 814-816
  4,   1,   1, // 817-819
  5,   1,   1, // 820-822
  3,   3,   1,   1, // 823-826
  3,   3,   1,   1, // 827-830
  3,   2,   1,   1, // 831-834
  3,   2,   1, // 835-837
  3,   1,   1, // 838-840
  4,   1,   1, // 841-843
  4,   1,   1,   1, // 844-847
  1, // 848
  1, // 849
  2, // 850
  1,   1, // 851-852
  2,   1,   1, // 853-855
  2, // 856
  3, // 857
  5, // 858
  1,   1, // 859-860
  2,   1,   1, // 861-863
  1,   1, // 864-865
  4,   1,   1, // 866-868
  1, // 869
  1,   1, // 870-871
  3,   1,   1, // 872-874
  1,   1,   1, // 875-877
  1,   1,   1, // 878-880
  1,   1,   1, // 881-883
  2,   1,   1, // 884-886
  2,   1,   1, // 887-889
  1,   1, // 890-891
  3,   1,   1,   1, // 892-895
  4,   5,   1,   1, // 896-899
  3,   1,   1, // 900-902
  4,   5,   1,   1, // 903-906
  2, // 907
  3,   1,   1,   1, // 908-911
  3,   1,   1, // 912-914
  2,   1,   1,   1, // 915-918
  1,   1,   1, // 919-921
  1,   1,   1, // 922-924
  3,   1,   1,   1, // 925-928
  2,   1,   1, // 929-931
  1,   1,   1, // 932-934
  3,   1,   1, // 935-937
  2,   1, // 938-939
  1, // 940
  1,   1, // 941-942
  1,   1,   1, // 943-945
  1,   1,   1, // 946-948
  6,   3,   2,   1, // 949-952
  6,   3,   2,   1, // 953-956
  4,   2,   1, // 957-959
  5,   2,   2, // 960-962
  6,   2,   2, // 963-965
  4,   2,   1, // 966-968
  5,   2, // 969-970
  6,   2, // 971-972
  4,   2, // 973-974
  4,   2, // 975-976
  4,   1,   1, // 977-979
  4,   2,   2, // 980-982
  3,   1,   1, // 983-985
  4,   1,   1, // 986-988
  3,   2,   1, // 989-991
  3,   2,   2, // 992-994
  3,   2,   2, // 995-997
  3, // 998
  3,   2,   2, // 999-1001
  4,   2,   2, // 1002-1004
  1,   1, // 1005-1006
  1,   1, // 1007-1008
  4,   1, // 1009-1010
  2,   1, // 1011-1012
  4,   1, // 1013-1014
  4,   1, // 1015-1016
  25,   1,   1, // 1017-1019
  15,   1,   1, // 1020-1022
  1,   1, // 1023-1024
  2,   1, // 1025-1026
  2,   1, // 1027-1028
  2,   1,   1, // 1029-1031
  3,   1,   2, // 1032-1034
  9,   1,   1,   1, // 1035-1038
  8,   1,   1,   1, // 1039-1042
  6,   3,   2,   1, // 1043-1046
  8,   4,   2,   1, // 1047-1050
  2,   1, // 1051-1052
  4,   2,   2, // 1053-1055
  2,   1, // 1056-1057
  2,   2,   1,   1, // 1058-1061
  3,   1,   1,   1, // 1062-1065
  3,   2,   1,   1,   1,   1, // 1066-1071
  1,   1, // 1072-1073
  1,   1,   2,   2,   1, // 1074-1078
  1,   1,   2,   1, // 1079-1082
  1,   1,   2,   1, // 1083-1086
  1,   2,   1, // 1087-1089
  1,   1,   1, // 1090-1092
  2,   2,   1, // 1093-1095
  2,   2,   2,   1,   1, // 1096-1100
  3,   3,   1,   1,   1,   1, // 1101-1106
  3,   3,   2,   1,   1,   1,   1,   1, // 1107-1114
  2,   2,   1, // 1115-1117
  2,   2,   2,   1,   1,   1, // 1118-1123
  2,   3,   2,   3,   1, // 1124-1128
  2,   3,   2,   3,   2,   1, // 1129-1134
  3,   3,   4,   1, // 1135-1138
  3,   3,   4,   2,   1,   1, // 1139-1144
  5,   5,   6,   1,   1,   1,   1,   2, // 1145-1152
  5,   5,   6,   2,   1,   1,   1,   1,   1,   2, // 1153-1162
  3,   3,   4,   1, // 1163-1166
  3,   3,   4,   2,   1, // 1167-1171
  2,   2,   3,   3,   1, // 1172-1176
  2,   2,   3,   3,   2,   1,   1, // 1177-1183
  4,   4,   5,   5,   1,   1,   1,   1,   2,   2, // 1184-1193
  4,   4,   5,   5,   2,   1,   1,   1,   1,   1,   2,   2, // 1194-1205
  3,   3,   4,   4,   1, // 1206-1210
  3,   3,   4,   4,   2,   1, // 1211-1216
  2,   1,   1,   1, // 1217-1220
  1,   1,   1,   1, // 1221-1224
  2,   1, // 1225-1226
  1,   1, // 1227-1228
  9,   1,   1,   1, // 1229-1232
  7,   3,   2,   1, // 1233-1236
  6,   3,   2,   2, // 1237-1240
  8,   1,   1,   1, // 1241-1244
  6,   3,   2,   1, // 1245-1248
  8,   4,   2,   1, // 1249-1252
  9,   3,   2,   1, // 1253-1256
  7,   3,   2,   2, // 1257-1260
  1,   1,   1, // 1261-1263
  4,   1, // 1264-1265
  3,   1, // 1266-1267
  2,   1,   1, // 1268-1270
  2,   1, // 1271-1272
  1,   1, // 1273-1274
  6,   1,   1, // 1275-1277
  6,   2,   2, // 1278-1280
  7,   2,   1, // 1281-1283
  5,   1,   1, // 1284-1286
  5,   2,   1, // 1287-1289
  6,   2,   1, // 1290-1292
  7,   2,   2, // 1293-1295
  9,   2,   1, // 1296-1298
  3,   1,   1, // 1299-1301
  6,   3,   1, // 1302-1304
  6,   3,   1, // 1305-1307
  5,   1,   1, // 1308-1310
  4,   1, // 1311-1312
  4,   1,   1, // 1313-1315
  4,   1,   1, // 1316-1318
  9,   2,   2, // 1319-1321
  10,   2,   2, // 1322-1324
  3,   1,   1, // 1325-1327
  4,   1, // 1328-1329
  4,   1, // 1330-1331
  4,   1, // 1332-1333
  4,   1, // 1334-1335
  32,   1, // 1336-1337
  17,   1, // 1338-1339
  1,   1,   1, // 1340-1342
  2,   1,   1,   1,   1, // 1343-1347
  1,   1,   1, // 1348-1350
  1,   1,   1,   1,   2,   2, // 1351-1356
  1,   1,   2,   2,   2,   1, // 1357-1362
  1,   1,   1,   1,   2, // 1363-1367
  1,   1,   2,   2,   1, // 1368-1372
  2,   1,   1,   1,   1,   1,   2,   2, // 1373-1380
  2,   1,   1,   1,   1,   1,   2, // 1381-1387
  1,   1,   1,   1, // 1388-1391
  1,   1,   1,   1, // 1392-1395
  2,   1,   1,   1,   1,   1, // 1396-1401
  1,   1,   1,   1, // 1402-1405
  1,   1,   1,   1,   2,   2, // 1406-1411
  2,   1,   1,   1,   1,   1,   2,   2, // 1412-1419
  1,   1,   1,   1,   2, // 1420-1424
  2,   1,   1,   1,   1,   1,   2, // 1425-1431
  1,   1,   1,   1,   2, // 1432-1436
  2,   1,   1,   1,   1,   1,   2, // 1437-1443
  1,   1,   1,   1,   2,   2, // 1444-1449
  2,   1,   1,   1,   1,   1,   2,   2, // 1450-1457
  1,   1,   1,   1,   2,   2, // 1458-1463
  2,   1,   1,   1,   1,   1,   2,   2, // 1464-1471
  1,   1,   1,   1, // 1472-1475
  1,   1, // 1476-1477
  1,   1, // 1478-1479
  3,   2,   1, // 1480-1482
  3,   2,   1, // 1483-1485
  3,   2,   2,   1, // 1486-1489
  4,   2,   2,   3,   1, // 1490-1494
  4,   2,   2,   3,   3,   1, // 1495-1500
  3,   1,   2,   1, // 1501-1504
  3,   1,   2,   2,   1, // 1505-1509
  4,   1,   2,   2,   3,   1, // 1510-1515
  4,   1,   2,   2,   3,   3,   1, // 1516-1522
  4,   1, // 1523-1524
  4,   1, // 1525-1526
  4,   1, // 1527-1528
  4,   1, // 1529-1530
  2,   2,   1,   1, // 1531-1534
  3,   3,   1,   1, // 1535-1538
  4,   4,   1,   1, // 1539-1542
  2,   1,   1, // 1543-1545
  1,   1, // 1546-1547
  1,   1, // 1548-1549
  1, // 1550
  1,   1, // 1551-1552
  1,   1, // 1553-1554
  4,   1, // 1555-1556
  3,   3,   1, // 1557-1559
  3,   1, // 1560-1561
  2,   1, // 1562-1563
  1,   1, // 1564-1565
  1, // 1566
  2,   1, // 1567-1568
  2,   1,   1, // 1569-1571
  1,   1, // 1572-1573
  1,   1, // 1574-1575
  3,   1,   1,   1, // 1576-1579
  2,   1, // 1580-1581
  1, // 1582
  1,   1, // 1583-1584
  1,   1, // 1585-1586
  1,   1,   1, // 1587-1589
  1,   1, // 1590-1591
  1,   1,   1, // 1592-1594
  1,   1,   3, // 1595-1597
  1,   1,   3, // 1598-1600
  1,   1, // 1601-1602
  1,   1, // 1603-1604
  1,   1,   1, // 1605-1607
  3,   1,   1,   1, // 1608-1611
  3,   1,   1,   1, // 1612-1615
  2,   1,   1, // 1616-1618
  2,   1,   1, // 1619-1621
  1,   1, // 1622-1623
  3,   1,   1, // 1624-1626
  1,   1, // 1627-1628
  2, // 1629
  2, // 1630
  3, // 1631
  5, // 1632
  2,   1, // 1633-1634
  4,   1,   1,   1, // 1635-1638
  4,   1,   1, // 1639-1641
  4,   5,   1,   1, // 1642-1645
  4,   5,   1,   1, // 1646-1649
  3,   1,   1, // 1650-1652
  3,   1,   1,   1, // 1653-1656
  3,   1,   1, // 1657-1659
  4,   1,   1, // 1660-1662
  4,   1,   1, // 1663-1665
  4,   3,   1,   1, // 1666-1669
  2,   1, // 1670-1671
  2,   1, // 1672-1673
  2, // 1674
  2, // 1675
  3, // 1676
  1, // 1677
  2,   1, // 1678-1679
  1,   1, // 1680-1681
  1,   1,   1, // 1682-1684
  1,   1,   1, // 1685-1687
  1,   1,   1, // 1688-1690
  3,   1,   1, // 1691-1693
  3,   1,   1,   1, // 1694-1697
  4,   1,   1, // 1698-1700
  3,   1,   1, // 1701-1703
  4,   1,   1,   1, // 1704-1707
  4,   1,   1,   1, // 1708-1711
  4,   1,   1,   1, // 1712-1715
  3,   1,   1,   1, // 1716-1719
  4,   1,   1,   1, // 1720-1723
  4,   1,   1,   1, // 1724-1727
  4,   5,   1,   1, // 1728-1731
  4,   5,   1,   1, // 1732-1735
  4,   5,   1,   1, // 1736-1739
  4,   1,   1, // 1740-1742
  5,   1,   1, // 1743-1745
  3,   1,   1, // 1746-1748
  4,   1, // 1749-1750
  3,   1, // 1751-1752
  2,   1, // 1753-1754
  4,   1,   1, // 1755-1757
  4,   1,   1, // 1758-1760
  3,   1,   1, // 1761-1763
  4,   1,   1, // 1764-1766
  3,   1,   1, // 1767-1769
  4,   1, // 1770-1771
  5,   1,   1, // 1772-1774
  4,   1,   1, // 1775-1777
  4,   3,   1,   1, // 1778-1781
  4,   3,   1, // 1782-1784
  4,   3,   1,   1, // 1785-1788
  3,   2,   1,   1, // 1789-1792
  3,   2,   1, // 1793-1795
  4,   1, // 1796-1797
  3,   1, // 1798-1799
  4,   1, // 1800-1801
  4,   3,   1, // 1802-1804
  3,   3,   1,   1, // 1805-1808
  3,   3,   1, // 1809-1811
  3,   3,   1,   1, // 1812-1815
  1,   1,   1,   1,   3, // 1816-1820
  2,   1,   1,   1,   3, // 1821-1825
  1,   2,   1,   1,   3, // 1826-1830
  1,   1,   3, // 1831-1833
  1,   1,   3, // 1834-1836
  1,   1,   1, // 1837-1839
  1,   1,   1, // 1840-1842
  1,   1,   1, // 1843-1845
  1,   1,   1, // 1846-1848
  1,   1, // 1849-1850
  1,   1, // 1851-1852
  3,   1,   1,   1, // 1853-1856
  3,   1,   1, // 1857-1859
  2,   1,   1,   1, // 1860-1863
  2,   1,   1, // 1864-1866
  1,   1, // 1867-1868
  1,   1, // 1869-1870
  1,   1,   1, // 1871-1873
  3,   1,   1,   1, // 1874-1877
  2, // 1878
  3,   1,   1, // 1879-1881
  3,   2,   1, // 1882-1884
  3,   2,   2, // 1885-1887
  3,   2,   2, // 1888-1890
  3, // 1891
  3,   2,   2, // 1892-1894
  4,   2,   2, // 1895-1897
  4,   2,   2, // 1898-1900
  4,   2,   2, // 1901-1903
  4,   2,   1, // 1904-1906
  4,   2,   1, // 1907-1909
  6,   2, // 1910-1911
  5,   2, // 1912-1913
  3,   1,   1, // 1914-1916
  4,   1,   1, // 1917-1919
  4,   1,   1, // 1920-1922
  3,   2,   1, // 1923-1925
  2,   1,   1, // 1926-1928
  3,   1,   2, // 1929-1931
  2,   1, // 1932-1933
  2,   1, // 1934-1935
  6,   3,   2,   1, // 1936-1939
  6,   3,   2,   1, // 1940-1943
  5,   2, // 1944-1945
  6,   2, // 1946-1947
  4,   2, // 1948-1949
  4,   2, // 1950-1951
  5,   2,   2, // 1952-1954
  6,   2,   2, // 1955-1957
  4,   2,   1, // 1958-1960
  4,   2,   1, // 1961-1963
  6,   3,   1, // 1964-1966
  6,   3,   1, // 1967-1969
  4,   1, // 1970-1971
  4,   1, // 1972-1973
  4,   2,   2, // 1974-1976
  4,   2,   2, // 1977-1979
  4,   1,   1, // 1980-1982
  4,   1,   1, // 1983-1985
  5,   2, // 1986-1987
  6,   2, // 1988-1989
  4,   2,   2, // 1990-1992
  3,   1,   1, // 1993-1995
  4,   1,   1, // 1996-1998
  4,   2,   2, // 1999-2001
  3,   2,   1, // 2002-2004
  3,   1,   2,   1, // 2005-2008
  3,   2,   2,   1, // 2009-2012
  3,   1,   2,   2,   1, // 2013-2017
  4,   2,   2,   3,   1, // 2018-2022
  4,   1,   2,   2,   3,   1, // 2023-2028
  4,   2,   2,   3,   3,   1, // 2029-2034
  4,   1,   2,   2,   3,   3,   1, // 2035-2041
  2,   2,   1,   1, // 2042-2045
  3,   3,   1,   1, // 2046-2049
  4,   4,   1,   1, // 2050-2053
  1,   1, // 2054-2055
  1,   1, // 2056-2057
  1,   1, // 2058-2059
  1,   1, // 2060-2061
  4,   2,   1, // 2062-2064
  5,   2,   2, // 2065-2067
  6,   2,   2, // 2068-2070
  4,   2,   1, // 2071-2073
  4,   1,   1, // 2074-2076
  5,   1,   1, // 2077-2079
  4,   1,   1, // 2080-2082
  9,   2,   2, // 2083-2085
  10,   2,   2, // 2086-2088
  6,   2,   2, // 2089-2091
  7,   2,   1, // 2092-2094
  5,   1,   1, // 2095-2097
  5,   2,   1, // 2098-2100
  6,   2,   1, // 2101-2103
  7,   2,   2, // 2104-2106
  5,   2,   2, // 2107-2109
  6,   2,   2, // 2110-2112
  9,   2,   1, // 2113-2115
  6,   1,   1, // 2116-2118
  9,   1,   1,   1, // 2119-2122
  8,   1,   1,   1, // 2123-2126
  9,   1,   1,   1, // 2127-2130
  7,   3,   2,   1, // 2131-2134
  6,   3,   2,   2, // 2135-2138
  8,   1,   1,   1, // 2139-2142
  6,   3,   2,   1, // 2143-2146
  8,   4,   2,   1, // 2147-2150
  9,   3,   2,   1, // 2151-2154
  7,   3,   2,   2, // 2155-2158
  6,   3,   2,   1, // 2159-2162
  8,   4,   2,   1, // 2163-2166
  4,   1, // 2167-2168
  2,   1, // 2169-2170
  4,   1, // 2171-2172
  4,   1, // 2173-2174
  6,   2, // 2175-2176
  5,   2, // 2177-2178
  4,   1, // 2179-2180
  4,   1, // 2181-2182
  4,   1, // 2183-2184
  4,   1, // 2185-2186
  4,   1, // 2187-2188
  4,   1, // 2189-2190
  1,   1, // 2191-2192
  1,   1, // 2193-2194
  3, // 2195
  3,   2,   1, // 2196-2198
  4,   1, // 2199-2200
  3,   1, // 2201-2202
  4,   1, // 2203-2204
  2,   1, // 2205-2206
  2,   1, // 2207-2208
  1,   1, // 2209-2210
  2,   1, // 2211-2212
  1,   1, // 2213-2214
  3,   1,   1, // 2215-2217
  2,   1,   1, // 2218-2220
  1,   1,   1, // 2221-2223
  1,   1,   1, // 2224-2226
  2,   1, // 2227-2228
  2,   1, // 2229-2230
  1, // 2231
  1, // 2232
  1, // 2233
  2,   1, // 2234-2235
  1,   1, // 2236-2237
  1,   1, // 2238-2239
  1,   1, // 2240-2241
  1,   1,   1,   1, // 2242-2245
  1,   1,   1,   1, // 2246-2249
  1,   1,   1,   1, // 2250-2253
  2,   1,   1,   1, // 2254-2257
  1,   1,   1,   1, // 2258-2261
  2,   1,   1,   1, // 2262-2265
  1,   1, // 2266-2267
  1,   1,   1, // 2268-2270
  1,   2,   1, // 2271-2273
  1,   1,   2,   1, // 2274-2277
  1,   1,   2,   1, // 2278-2281
  1,   1,   2,   1, // 2282-2285
  1,   1,   2,   2,   1, // 2286-2290
  1,   1,   2,   1, // 2291-2294
  2,   2,   1, // 2295-2297
  2,   3,   2,   3,   1, // 2298-2302
  2,   2,   2,   1,   1,   1, // 2303-2308
  2,   3,   2,   3,   2,   1, // 2309-2314
  3,   3,   4,   1, // 2315-2318
  3,   3,   4,   1, // 2319-2322
  3,   3,   4,   2,   1, // 2323-2327
  3,   3,   4,   2,   1, // 2328-2332
  3,   3,   4,   4,   1, // 2333-2337
  3,   3,   4,   4,   1, // 2338-2342
  3,   3,   4,   4,   2,   1, // 2343-2348
  3,   3,   4,   4,   2,   1, // 2349-2354
  2,   1, // 2355-2356
  3,   1,   1,   1, // 2357-2360
  2,   2,   1,   1, // 2361-2364
  3,   2,   1,   1,   1,   1, // 2365-2370
  2,   2,   1, // 2371-2373
  3,   3,   1,   1,   1,   1, // 2374-2379
  3,   3,   2,   1,   1,   1,   1,   1, // 2380-2387
  2,   2,   2,   1,   1, // 2388-2392
  3,   3,   2,   1,   1,   1,   1,   1, // 2393-2400
  3,   3,   4,   1, // 2401-2404
  5,   5,   6,   1,   1,   1,   1,   2, // 2405-2412
  3,   3,   4,   2,   1,   1, // 2413-2418
  5,   5,   6,   2,   1,   1,   1,   1,   1,   2, // 2419-2428
  3,   3,   4,   2,   1,   1, // 2429-2434
  5,   5,   6,   2,   1,   1,   1,   1,   1,   2, // 2435-2444
  2,   2,   3,   3,   1, // 2445-2449
  4,   4,   5,   5,   1,   1,   1,   1,   2,   2, // 2450-2459
  2,   2,   3,   3,   2,   1,   1, // 2460-2466
  4,   4,   5,   5,   2,   1,   1,   1,   1,   1,   2,   2, // 2467-2478
  2,   2,   3,   3,   2,   1,   1, // 2479-2485
  4,   4,   5,   5,   2,   1,   1,   1,   1,   1,   2,   2, // 2486-2497
  1,   1,   1, // 2498-2500
  1,   1,   1,   1, // 2501-2504
  1,   2,   1, // 2505-2507
  1,   1,   2,   1, // 2508-2511
  1,   1,   1,   1,   2, // 2512-2516
  1,   1,   2,   2,   1, // 2517-2521
  2,   1,   1,   1,   1,   1,   2, // 2522-2528
  1,   1,   1,   1,   2,   2, // 2529-2534
  1,   1,   2,   2,   2,   1, // 2535-2540
  2,   1,   1,   1,   1,   1,   2,   2, // 2541-2548
  1,   1,   1,   1, // 2549-2552
  1,   2,   1, // 2553-2555
  1,   1,   1,   1,   2,   2, // 2556-2561
  2,   1,   1,   1,   1,   1,   2,   2, // 2562-2569
  1,   2,   1, // 2570-2572
  1,   1,   1,   1,   2, // 2573-2577
  2,   1,   1,   1,   1,   1,   2, // 2578-2584
  1,   1,   1,   1,   2,   2, // 2585-2590
  2,   1,   1,   1,   1,   1,   2,   2, // 2591-2598
  1,   1,   1, // 2599-2601
  2,   1,   1,   1,   1, // 2602-2606
  1,   1,   1,   1, // 2607-2610
  2,   1,   1,   1,   1,   1, // 2611-2616
  1,   1,   1,   1,   2, // 2617-2621
  2,   1,   1,   1,   1,   1,   2, // 2622-2628
  1,   1,   1,   1,   2,   2, // 2629-2634
  2,   1,   1,   1,   1,   1,   2,   2, // 2635-2642
  15,   1,   1, // 2643-2645
  17,   1, // 2646-2647
  25,   1,   1, // 2648-2650
  32,   1, // 2651-2652
  2,   2, // 2653-2654
  2,   2,   2, // 2655-2657
  2,   2,   1,   1, // 2658-2661
  2,   2,   1,   1, // 2662-2665
  2,   2,   1,   1, // 2666-2669
  2,   2, // 2670-2671
  2,   2,   2, // 2672-2674
  2,   2,   1,   1, // 2675-2678
  2,   2,   1,   1, // 2679-2682
  2,   1, // 2683-2684
  2,   2, // 2685-2686
  2, // 2687
  2,   2, // 2688-2689
  2,   1,   1, // 2690-2692
  2,   1,   1, // 2693-2695
  4,   1, // 2696-2697
  7,   1, // 2698-2699
  20, // 2700
  1,   1,   1,   1,   3, // 2701-2705
  2,   1,   1,   1,   3, // 2706-2710
  1,   2,   1,   1,   3, // 2711-2715
  3,   2,   1,   1, // 2716-2719
  3,   2,   1, // 2720-2722
  3,   1,   1, // 2723-2725
  4,   1,   1, // 2726-2728
  3,   1,   1, // 2729-2731
  3,   2,   1,   1, // 2732-2735
  3,   2,   1,   1, // 2736-2739
  3,   2,   1, // 2740-2742
  3,   1,   1, // 2743-2745
  4,   1,   1, // 2746-2748
  6,   1,   1,   4, // 2749-2752
  2, // 2753
  1, // 2754
  3,   1, // 2755-2756
  2,   1, // 2757-2758
  2,   1,   1, // 2759-2761
  2, // 2762
  3, // 2763
  5, // 2764
  1,   1, // 2765-2766
  1,   1,   1, // 2767-2769
  1,   1, // 2770-2771
  6,   1,   1, // 2772-2774
  1, // 2775
  1,   1, // 2776-2777
  1,   1,   1, // 2778-2780
  2,   2,   2, // 2781-2783
  3,   1,   1, // 2784-2786
  3,   1,   1, // 2787-2789
  2,   2,   1, // 2790-2792
  2,   2,   1, // 2793-2795
  2,   2, // 2796-2797
  6,   1,   1,   4, // 2798-2801
  6,   6,   1,   1, // 2802-2805
  5,   1,   1, // 2806-2808
  6,   6,   1,   1, // 2809-2812
  2, // 2813
  2,   3,   1,   1, // 2814-2817
  2,   3,   1, // 2818-2820
  2,   3,   1,   1, // 2821-2824
  3,   1,   1, // 2825-2827
  3,   1,   1, // 2828-2830
  2,   3,   1,   1, // 2831-2834
  2,   3,   1, // 2835-2837
  3,   1,   1, // 2838-2840
  2,   2,   1, // 2841-2843
  1,   1, // 2844-2845
  2, // 2846
  2,   2, // 2847-2848
  2,   1,   1, // 2849-2851
  2,   1,   1, // 2852-2854
  6,   3,   2,   1, // 2855-2858
  6,   3,   2,   1, // 2859-2862
  4,   2,   1, // 2863-2865
  5,   2,   2, // 2866-2868
  6,   2,   2, // 2869-2871
  4,   2,   1, // 2872-2874
  5,   2, // 2875-2876
  6,   2, // 2877-2878
  4,   2, // 2879-2880
  4,   2, // 2881-2882
  9,   1,   1, // 2883-2885
  4,   2,   1, // 2886-2888
  3,   1,   1, // 2889-2891
  7,   1,   1, // 2892-2894
  3,   2,   1, // 2895-2897
  3,   2,   2, // 2898-2900
  3,   2,   2, // 2901-2903
  3, // 2904
  3,   2,   2, // 2905-2907
  4,   2,   2, // 2908-2910
  4,   1, // 2911-2912
  1,   1, // 2913-2914
  5,   1, // 2915-2916
  7,   1, // 2917-2918
  29,   1,   1, // 2919-2921
  20,   1,   1, // 2922-2924
  2,   1, // 2925-2926
  2,   1, // 2927-2928
  3,   1, // 2929-2930
  2,   1,   1, // 2931-2933
  3,   1,   1, // 2934-2936
  19,   2,   1,   1, // 2937-2940
  7,   2,   1,   1, // 2941-2944
  9,   3,   2,   2, // 2945-2948
  10,   3,   2,   2, // 2949-2952
  20,   1, // 2953-2954
  4,   2,   1, // 2955-2957
  2,   1, // 2958-2959
  2,   2,   1,   1, // 2960-2963
  3,   1,   1,   1, // 2964-2967
  3,   2,   1,   1,   1,   1, // 2968-2973
  2,   1, // 2974-2975
  2,   2,   3,   3,   1, // 2976-2980
  2,   2,   2,   1, // 2981-2984
  2,   2,   3,   1, // 2985-2988
  2,   2,   1, // 2989-2991
  2,   2,   1, // 2992-2994
  2,   2,   1, // 2995-2997
  2,   2,   2,   1,   1, // 2998-3002
  3,   3,   1,   1,   1,   1, // 3003-3008
  3,   3,   2,   1,   1,   1,   1,   1, // 3009-3016
  2,   2,   1, // 3017-3019
  2,   2,   2,   1,   1,   1, // 3020-3025
  2,   2,   3,   3,   1, // 3026-3030
  2,   2,   3,   3,   2,   1, // 3031-3036
  2,   2,   3,   1, // 3037-3040
  2,   2,   3,   2,   1,   1, // 3041-3046
  4,   4,   5,   1,   1,   1,   1,   2, // 3047-3054
  4,   4,   5,   2,   1,   1,   1,   1,   1,   2, // 3055-3064
  3,   3,   4,   1, // 3065-3068
  3,   3,   4,   2,   1, // 3069-3073
  2,   2,   3,   3,   1, // 3074-3078
  2,   2,   3,   3,   2,   1,   1, // 3079-3085
  4,   4,   5,   5,   1,   1,   1,   1,   2,   2, // 3086-3095
  4,   4,   5,   5,   2,   1,   1,   1,   1,   1,   2,   2, // 3096-3107
  3,   3,   4,   4,   1, // 3108-3112
  3,   3,   4,   4,   2,   1, // 3113-3118
  2,   1,   1,   1,   2, // 3119-3123
  1,   1,   1,   2, // 3124-3127
  2,   1, // 3128-3129
  2,   1, // 3130-3131
  19,   2,   1,   1, // 3132-3135
  7,   3,   2,   1, // 3136-3139
  6,   3,   2,   2, // 3140-3143
  7,   2,   1,   1, // 3144-3147
  9,   3,   2,   2, // 3148-3151
  10,   3,   2,   2, // 3152-3155
  9,   3,   2,   1, // 3156-3159
  7,   3,   2,   2, // 3160-3163
  2,   1,   1, // 3164-3166
  4,   1, // 3167-3168
  2,   1, // 3169-3170
  20,   20,   1, // 3171-3173
  20,   1, // 3174-3175
  2,   1, // 3176-3177
  11,   1,   1, // 3178-3180
  6,   2,   2, // 3181-3183
  7,   2,   1, // 3184-3186
  7,   1,   1, // 3187-3189
  5,   2,   1, // 3190-3192
  6,   2,   1, // 3193-3195
  7,   2,   2, // 3196-3198
  9,   2,   1, // 3199-3201
  4,   1,   1, // 3202-3204
  7,   3,   1, // 3205-3207
  6,   3,   1, // 3208-3210
  5,   2,   2, // 3211-3213
  4,   1, // 3214-3215
  5,   1,   1, // 3216-3218
  4,   1,   1, // 3219-3221
  9,   2,   2, // 3222-3224
  10,   2,   2, // 3225-3227
  3,   1,   1, // 3228-3230
  8,   1, // 3231-3232
  7,   1, // 3233-3234
  8,   1, // 3235-3236
  7,   1, // 3237-3238
  29,   1, // 3239-3240
  19,   1, // 3241-3242
  1,   1,   1, // 3243-3245
  2,   1,   1,   1,   1, // 3246-3250
  1,   1,   1, // 3251-3253
  1,   1,   1,   1,   2,   2, // 3254-3259
  2,   2,   3,   3,   2,   1, // 3260-3265
  1,   1,   1,   1,   2, // 3266-3270
  2,   2,   3,   2,   1, // 3271-3275
  2,   1,   1,   1,   1,   1,   2,   2, // 3276-3283
  2,   1,   1,   1,   1,   1,   2, // 3284-3290
  1,   1,   1,   1, // 3291-3294
  1,   1,   1,   1, // 3295-3298
  2,   1,   1,   1,   1,   1, // 3299-3304
  1,   1,   1,   1, // 3305-3308
  1,   1,   1,   1,   2,   2, // 3309-3314
  2,   1,   1,   1,   1,   1,   2,   2, // 3315-3322
  1,   1,   1,   1,   2, // 3323-3327
  2,   1,   1,   1,   1,   1,   2, // 3328-3334
  1,   1,   1,   1,   2, // 3335-3339
  2,   1,   1,   1,   1,   1,   2, // 3340-3346
  1,   1,   1,   1,   2,   2, // 3347-3352
  2,   1,   1,   1,   1,   1,   2,   2, // 3353-3360
  1,   1,   1,   1,   2,   2, // 3361-3366
  2,   1,   1,   1,   1,   1,   2,   2, // 3367-3374
  1,   1,   1,   1, // 3375-3378
  1,   1, // 3379-3380
  1,   1, // 3381-3382
  3,   2,   1, // 3383-3385
  3,   2,   1, // 3386-3388
  3,   2,   2,   1, // 3389-3392
  4,   2,   2,   3,   1, // 3393-3397
  4,   2,   2,   3,   3,   1, // 3398-3403
  3,   1,   2,   1, // 3404-3407
  3,   1,   2,   2,   1, // 3408-3412
  4,   1,   2,   2,   3,   1, // 3413-3418
  4,   1,   2,   2,   3,   3,   1, // 3419-3425
  8,   1, // 3426-3427
  7,   1, // 3428-3429
  8,   1, // 3430-3431
  7,   1, // 3432-3433
  2,   2,   1,   1, // 3434-3437
  3,   3,   1,   1, // 3438-3441
  4,   4,   1,   1, // 3442-3445
  2,   2,   1, // 3446-3448
  2,   2, // 3449-3450
  2,   1, // 3451-3452
  2, // 3453
  2,   2, // 3454-3455
  2,   1, // 3456-3457
  3,   1, // 3458-3459
  3,   1, // 3460-3461
  3,   1, // 3462-3463
  4,   1, // 3464-3465
  2,   1, // 3466-3467
  1, // 3468
  1,   1, // 3469-3470
  2,   1,   2, // 3471-3473
  3,   1, // 3474-3475
  3,   1, // 3476-3477
  2,   2,   1,   1, // 3478-3481
  1,   1, // 3482-3483
  2, // 3484
  2,   2, // 3485-3486
  2,   1, // 3487-3488
  2,   2,   2, // 3489-3491
  2,   2, // 3492-3493
  2,   2,   2, // 3494-3496
  1,   1,   3, // 3497-3499
  1,   1,   3, // 3500-3502
  2,   2, // 3503-3504
  2,   2, // 3505-3506
  2,   2,   2, // 3507-3509
  2,   2,   1,   1, // 3510-3513
  2,   2,   1,   1, // 3514-3517
  2,   1,   1, // 3518-3520
  1,   1,   1, // 3521-3523
  1,   1, // 3524-3525
  1,   1,   1, // 3526-3528
  1,   1, // 3529-3530
  3,   1, // 3531-3532
  2, // 3533
  3, // 3534
  5, // 3535
  2,   1, // 3536-3537
  6,   1,   1,   4, // 3538-3541
  6,   1,   1, // 3542-3544
  6,   6,   1,   1, // 3545-3548
  6,   6,   1,   1, // 3549-3552
  5,   1,   1, // 3553-3555
  6,   1,   1,   4, // 3556-3559
  3,   1,   1, // 3560-3562
  4,   1,   1, // 3563-3565
  3,   1,   1, // 3566-3568
  3,   2,   1,   1, // 3569-3572
  1,   1, // 3573-3574
  1,   1, // 3575-3576
  3,   1, // 3577-3578
  2, // 3579
  3, // 3580
  1, // 3581
  2,   1, // 3582-3583
  2,   2, // 3584-3585
  2,   2,   2, // 3586-3588
  2,   2,   2, // 3589-3591
  2,   2,   2, // 3592-3594
  2,   2,   1, // 3595-3597
  2,   2,   1,   1, // 3598-3601
  6,   1,   1, // 3602-3604
  5,   1,   1, // 3605-3607
  6,   1,   1,   4, // 3608-3611
  6,   1,   1,   4, // 3612-3615
  6,   1,   1,   4, // 3616-3619
  6,   1,   1,   4, // 3620-3623
  6,   1,   1,   4, // 3624-3627
  6,   1,   1,   4, // 3628-3631
  6,   6,   1,   1, // 3632-3635
  6,   6,   1,   1, // 3636-3639
  6,   6,   1,   1, // 3640-3643
  3,   1,   1, // 3644-3646
  4,   1,   1, // 3647-3649
  3,   1,   1, // 3650-3652
  3,   1, // 3653-3654
  3,   1, // 3655-3656
  4,   1, // 3657-3658
  4,   1,   1, // 3659-3661
  3,   1,   1, // 3662-3664
  3,   1,   1, // 3665-3667
  3,   1,   1, // 3668-3670
  3,   1,   1, // 3671-3673
  3,   1, // 3674-3675
  4,   1,   1, // 3676-3678
  3,   1,   1, // 3679-3681
  3,   2,   1,   1, // 3682-3685
  3,   2,   1, // 3686-3688
  3,   2,   1,   1, // 3689-3692
  3,   2,   1,   1, // 3693-3696
  3,   2,   1, // 3697-3699
  3,   1, // 3700-3701
  3,   1, // 3702-3703
  3,   1, // 3704-3705
  3,   2,   1, // 3706-3708
  3,   1,   1, // 3709-3711
  3,   1, // 3712-3713
  3,   2,   1,   1, // 3714-3717
  1,   1,   1,   1,   3, // 3718-3722
  2,   1,   1,   1,   3, // 3723-3727
  1,   2,   1,   1,   3, // 3728-3732
  1,   1,   3, // 3733-3735
  1,   1,   3, // 3736-3738
  3,   1,   1, // 3739-3741
  3,   1,   1, // 3742-3744
  3,   1,   1, // 3745-3747
  3,   1,   1, // 3748-3750
  3,   1, // 3751-3752
  3,   1, // 3753-3754
  2,   3,   1,   1, // 3755-3758
  2,   3,   1, // 3759-3761
  2,   3,   1,   1, // 3762-3765
  2,   3,   1, // 3766-3768
  3,   1, // 3769-3770
  3,   1, // 3771-3772
  3,   1,   1, // 3773-3775
  2,   3,   1,   1, // 3776-3779
  2, // 3780
  3,   1,   1, // 3781-3783
  3,   2,   1, // 3784-3786
  3,   2,   2, // 3787-3789
  3,   2,   2, // 3790-3792
  3, // 3793
  3,   2,   2, // 3794-3796
  4,   2,   2, // 3797-3799
  4,   2,   1, // 3800-3802
  4,   2,   1, // 3803-3805
  4,   2,   1, // 3806-3808
  4,   2,   1, // 3809-3811
  6,   2, // 3812-3813
  5,   2, // 3814-3815
  4,   1,   1, // 3816-3818
  4,   1,   1, // 3819-3821
  5,   1,   1, // 3822-3824
  3,   2,   1, // 3825-3827
  2,   1,   1, // 3828-3830
  3,   1,   1, // 3831-3833
  2,   1, // 3834-3835
  3,   1, // 3836-3837
  6,   3,   2,   1, // 3838-3841
  6,   3,   2,   1, // 3842-3845
  5,   2, // 3846-3847
  6,   2, // 3848-3849
  4,   2, // 3850-3851
  4,   2, // 3852-3853
  5,   2,   2, // 3854-3856
  6,   2,   2, // 3857-3859
  4,   2,   1, // 3860-3862
  4,   2,   1, // 3863-3865
  7,   3,   1, // 3866-3868
  6,   3,   1, // 3869-3871
  4,   1, // 3872-3873
  4,   1, // 3874-3875
  4,   2,   1, // 3876-3878
  4,   2,   1, // 3879-3881
  5,   1,   1, // 3882-3884
  4,   1,   1, // 3885-3887
  5,   2, // 3888-3889
  6,   2, // 3890-3891
  4,   2,   1, // 3892-3894
  3,   1,   1, // 3895-3897
  4,   1,   1, // 3898-3900
  4,   2,   1, // 3901-3903
  3,   2,   1, // 3904-3906
  3,   1,   2,   1, // 3907-3910
  3,   2,   2,   1, // 3911-3914
  3,   1,   2,   2,   1, // 3915-3919
  4,   2,   2,   3,   1, // 3920-3924
  4,   1,   2,   2,   3,   1, // 3925-3930
  4,   2,   2,   3,   3,   1, // 3931-3936
  4,   1,   2,   2,   3,   3,   1, // 3937-3943
  2,   2,   1,   1, // 3944-3947
  3,   3,   1,   1, // 3948-3951
  4,   4,   1,   1, // 3952-3955
  4,   1, // 3956-3957
  7,   1, // 3958-3959
  4,   1, // 3960-3961
  1,   1, // 3962-3963
  4,   2,   1, // 3964-3966
  5,   2,   2, // 3967-3969
  6,   2,   2, // 3970-3972
  4,   2,   1, // 3973-3975
  7,   1,   1, // 3976-3978
  5,   2,   2, // 3979-3981
  9,   1,   1, // 3982-3984
  9,   2,   2, // 3985-3987
  10,   2,   2, // 3988-3990
  6,   2,   2, // 3991-3993
  7,   2,   1, // 3994-3996
  7,   1,   1, // 3997-3999
  5,   2,   1, // 4000-4002
  6,   2,   1, // 4003-4005
  7,   2,   2, // 4006-4008
  5,   2,   2, // 4009-4011
  6,   2,   2, // 4012-4014
  9,   2,   1, // 4015-4017
  11,   1,   1, // 4018-4020
  19,   2,   1,   1, // 4021-4024
  7,   2,   1,   1, // 4025-4028
  19,   2,   1,   1, // 4029-4032
  7,   3,   2,   1, // 4033-4036
  6,   3,   2,   2, // 4037-4040
  7,   2,   1,   1, // 4041-4044
  9,   3,   2,   2, // 4045-4048
  10,   3,   2,   2, // 4049-4052
  9,   3,   2,   1, // 4053-4056
  7,   3,   2,   2, // 4057-4060
  9,   3,   2,   2, // 4061-4064
  10,   3,   2,   2, // 4065-4068
  5,   1, // 4069-4070
  7,   1, // 4071-4072
  6,   2, // 4073-4074
  5,   2, // 4075-4076
  8,   1, // 4077-4078
  7,   1, // 4079-4080
  8,   1, // 4081-4082
  7,   1, // 4083-4084
  8,   1, // 4085-4086
  7,   1, // 4087-4088
  4,   1, // 4089-4090
  7,   1, // 4091-4092
  3, // 4093
  3,   2,   1, // 4094-4096
  4,   1, // 4097-4098
  2,   1, // 4099-4100
  4,   1, // 4101-4102
  2,   1, // 4103-4104
  3,   1, // 4105-4106
  2,   1, // 4107-4108
  20,   1, // 4109-4110
  2,   1, // 4111-4112
  3,   1,   1, // 4113-4115
  20,   20,   1, // 4116-4118
  2,   1,   1, // 4119-4121
  2,   1,   1, // 4122-4124
  20,   1, // 4125-4126
  20,   1, // 4127-4128
  20, // 4129
  20, // 4130
  20, // 4131
  2,   1, // 4132-4133
  2,   1, // 4134-4135
  1,   1, // 4136-4137
  1,   1, // 4138-4139
  1,   1,   1,   2, // 4140-4143
  1,   1,   1,   1, // 4144-4147
  1,   1,   1,   2, // 4148-4151
  2,   1,   1,   1,   2, // 4152-4156
  1,   1,   1,   2, // 4157-4160
  2,   1,   1,   1,   2, // 4161-4165
  2,   1, // 4166-4167
  2,   2,   1, // 4168-4170
  2,   2,   1, // 4171-4173
  2,   2,   2,   1, // 4174-4177
  2,   2,   3,   1, // 4178-4181
  2,   2,   2,   1, // 4182-4185
  2,   2,   3,   3,   1, // 4186-4190
  2,   2,   2,   1, // 4191-4194
  2,   2,   1, // 4195-4197
  2,   2,   3,   3,   1, // 4198-4202
  2,   2,   2,   1,   1,   1, // 4203-4208
  2,   2,   3,   3,   2,   1, // 4209-4214
  3,   3,   4,   1, // 4215-4218
  3,   3,   4,   1, // 4219-4222
  3,   3,   4,   2,   1, // 4223-4227
  3,   3,   4,   2,   1, // 4228-4232
  3,   3,   4,   4,   1, // 4233-4237
  3,   3,   4,   4,   1, // 4238-4242
  3,   3,   4,   4,   2,   1, // 4243-4248
  3,   3,   4,   4,   2,   1, // 4249-4254
  2,   1, // 4255-4256
  3,   1,   1,   1, // 4257-4260
  2,   2,   1,   1, // 4261-4264
  3,   2,   1,   1,   1,   1, // 4265-4270
  2,   2,   1, // 4271-4273
  3,   3,   1,   1,   1,   1, // 4274-4279
  3,   3,   2,   1,   1,   1,   1,   1, // 4280-4287
  2,   2,   2,   1,   1, // 4288-4292
  3,   3,   2,   1,   1,   1,   1,   1, // 4293-4300
  2,   2,   3,   1, // 4301-4304
  4,   4,   5,   1,   1,   1,   1,   2, // 4305-4312
  2,   2,   3,   2,   1,   1, // 4313-4318
  4,   4,   5,   2,   1,   1,   1,   1,   1,   2, // 4319-4328
  2,   2,   3,   2,   1,   1, // 4329-4334
  4,   4,   5,   2,   1,   1,   1,   1,   1,   2, // 4335-4344
  2,   2,   3,   3,   1, // 4345-4349
  4,   4,   5,   5,   1,   1,   1,   1,   2,   2, // 4350-4359
  2,   2,   3,   3,   2,   1,   1, // 4360-4366
  4,   4,   5,   5,   2,   1,   1,   1,   1,   1,   2,   2, // 4367-4378
  2,   2,   3,   3,   2,   1,   1, // 4379-4385
  4,   4,   5,   5,   2,   1,   1,   1,   1,   1,   2,   2, // 4386-4397
  1,   1,   1, // 4398-4400
  1,   1,   1,   1, // 4401-4404
  2,   2,   1, // 4405-4407
  2,   2,   2,   1, // 4408-4411
  1,   1,   1,   1,   2, // 4412-4416
  2,   2,   3,   2,   1, // 4417-4421
  2,   1,   1,   1,   1,   1,   2, // 4422-4428
  1,   1,   1,   1,   2,   2, // 4429-4434
  2,   2,   3,   3,   2,   1, // 4435-4440
  2,   1,   1,   1,   1,   1,   2,   2, // 4441-4448
  1,   1,   1,   1, // 4449-4452
  2,   2,   1, // 4453-4455
  1,   1,   1,   1,   2,   2, // 4456-4461
  2,   1,   1,   1,   1,   1,   2,   2, // 4462-4469
  2,   2,   1, // 4470-4472
  1,   1,   1,   1,   2, // 4473-4477
  2,   1,   1,   1,   1,   1,   2, // 4478-4484
  1,   1,   1,   1,   2,   2, // 4485-4490
  2,   1,   1,   1,   1,   1,   2,   2, // 4491-4498
  1,   1,   1, // 4499-4501
  2,   1,   1,   1,   1, // 4502-4506
  1,   1,   1,   1, // 4507-4510
  2,   1,   1,   1,   1,   1, // 4511-4516
  1,   1,   1,   1,   2, // 4517-4521
  2,   1,   1,   1,   1,   1,   2, // 4522-4528
  1,   1,   1,   1,   2,   2, // 4529-4534
  2,   1,   1,   1,   1,   1,   2,   2, // 4535-4542
  20,   1,   1, // 4543-4545
  19,   1, // 4546-4547
  29,   1,   1, // 4548-4550
  29,   1, // 4551-4552
  1,   1, // 4553-4554
  1,   1,   1, // 4555-4557
  2,   1,   1,   1, // 4558-4561
  2,   1,   1,   1, // 4562-4565
  2,   1,   1,   1, // 4566-4569
  1,   1, // 4570-4571
  1,   1,   1, // 4572-4574
  2,   1,   1,   1, // 4575-4578
  2,   1,   1,   1, // 4579-4582
  2,   1, // 4583-4584
  1,   1, // 4585-4586
  1, // 4587
  1,   1, // 4588-4589
  1,   1,   1, // 4590-4592
  1,   1,   1, // 4593-4595
  2,   1, // 4596-4597
  2,   1, // 4598-4599
  1, // 4600
  1,   1,   1,   1,   3, // 4601-4605
  2,   1,   1,   1,   3, // 4606-4610
  1,   1,   1,   1,   3, // 4611-4615
  3,   1,   1,   1, // 4616-4619
  3,   1,   1, // 4620-4622
  3,   1,   1, // 4623-4625
  5,   1,   1, // 4626-4628
  3,   4,   1,   1, // 4629-4632
  3,   4,   1,   1, // 4633-4636
  3,   1,   1,   1, // 4637-4640
  3,   1,   1, // 4641-4643
  3,   1,   1, // 4644-4646
  5,   1,   1, // 4647-4649
  4,   1,   1,   1, // 4650-4653
  1, // 4654
  1, // 4655
  2, // 4656
  1,   1, // 4657-4658
  2,   1,   1, // 4659-4661
  2, // 4662
  3, // 4663
  5, // 4664
  1, // 4665
  1, // 4666
  1, // 4667
  4,   1,   1, // 4668-4670
  1, // 4671
  1, // 4672
  1, // 4673
  1,   1,   1, // 4674-4676
  1,   1,   1, // 4677-4679
  1,   1,   1, // 4680-4682
  2,   1,   1, // 4683-4685
  2,   1,   1, // 4686-4688
  1,   1, // 4689-4690
  14,   1,   1, // 4691-4693
  3,   1,   1,   1, // 4694-4697
  5,   6,   1,   1, // 4698-4701
  3,   1,   1, // 4702-4704
  5,   5,   1,   1, // 4705-4708
  2, // 4709
  1,   1,   1,   1, // 4710-4713
  1,   1,   1, // 4714-4716
  1,   1,   1,   1, // 4717-4720
  1,   1,   1, // 4721-4723
  1,   1,   1, // 4724-4726
  1,   1,   1,   1, // 4727-4730
  1,   1,   1, // 4731-4733
  1,   1,   1, // 4734-4736
  1,   1,   1, // 4737-4739
  1,   1, // 4740-4741
  1, // 4742
  1,   1, // 4743-4744
  1,   1,   1, // 4745-4747
  1,   1,   1, // 4748-4750
  4,   1,   1,   1, // 4751-4754
  4,   1,   1,   1, // 4755-4758
  4,   1,   1, // 4759-4761
  4,   1,   1, // 4762-4764
  4,   1,   1, // 4765-4767
  4,   1,   1, // 4768-4770
  2,   1, // 4771-4772
  2,   1, // 4773-4774
  4,   1, // 4775-4776
  4,   1, // 4777-4778
  2,   1,   1, // 4779-4781
  4,   1,   1, // 4782-4784
  2,   1,   1, // 4785-4787
  2,   1,   1, // 4788-4790
  2,   1,   1, // 4791-4793
  2,   1,   1, // 4794-4796
  2,   1,   1, // 4797-4799
  2, // 4800
  2,   1,   1, // 4801-4803
  2,   1,   1, // 4804-4806
  1,   1, // 4807-4808
  1,   1, // 4809-4810
  6,   1, // 4811-4812
  4,   1, // 4813-4814
  4,   1, // 4815-4816
  4,   1, // 4817-4818
  32,   1,   1, // 4819-4821
  17,   1,   1, // 4822-4824
  6,   1, // 4825-4826
  2,   1, // 4827-4828
  2,   1, // 4829-4830
  2,   1,   1, // 4831-4833
  2,   1,   1, // 4834-4836
  12,   1,   1, // 4837-4839
  8,   1,   1, // 4840-4842
  8,   1,   1, // 4843-4845
  8,   1,   1, // 4846-4848
  3,   1, // 4849-4850
  4,   1,   1, // 4851-4853
  2,   1,   1,   1,   4, // 4854-4858
  1,   1,   1,   4, // 4859-4862
  4,   1, // 4863-4864
  4,   1, // 4865-4866
  12,   1,   1, // 4867-4869
  4,   1,   1,   1, // 4870-4873
  4,   1,   1,   1, // 4874-4877
  8,   1,   1, // 4878-4880
  8,   1,   1, // 4881-4883
  8,   1,   1, // 4884-4886
  4,   1,   1,   1, // 4887-4890
  4,   1,   1,   1, // 4891-4894
  4,   1, // 4895-4896
  4,   1, // 4897-4898
  2,   1, // 4899-4900
  3,   4,   1, // 4901-4903
  3,   1, // 4904-4905
  6,   1, // 4906-4907
  6,   1,   1, // 4908-4910
  4,   1,   1, // 4911-4913
  4,   1,   1, // 4914-4916
  4,   1,   1, // 4917-4919
  4,   1,   1, // 4920-4922
  4,   1,   1, // 4923-4925
  4,   1,   1, // 4926-4928
  4,   1,   1, // 4929-4931
  2,   1,   1, // 4932-4934
  4,   1,   1, // 4935-4937
  4,   1,   1, // 4938-4940
  4,   1,   1, // 4941-4943
  4,   1, // 4944-4945
  4,   1,   1, // 4946-4948
  4,   1,   1, // 4949-4951
  8,   1,   1, // 4952-4954
  8,   1,   1, // 4955-4957
  6,   1, // 4958-4959
  4,   1, // 4960-4961
  4,   1, // 4962-4963
  4,   1, // 4964-4965
  4,   1, // 4966-4967
  32,   1,   1, // 4968-4970
  17,   1, // 4971-4972
  1,   1,   1, // 4973-4975
  1,   1, // 4976-4977
  1,   1, // 4978-4979
  2,   1,   1, // 4980-4982
  2,   1,   1, // 4983-4985
  4,   1,   3,   3, // 4986-4989
  6,   1,   3,   5,   5, // 4990-4994
  8,   1,   3,   5,   7,   7, // 4995-5000
  2,   1,   1, // 5001-5003
  4,   1,   3,   3, // 5004-5007
  6,   1,   3,   5,   5, // 5008-5012
  8,   1,   3,   5,   7,   7, // 5013-5018
  4,   1, // 5019-5020
  4,   1, // 5021-5022
  4,   1, // 5023-5024
  4,   1, // 5025-5026
  3,   4,   3,   4, // 5027-5030
  3,   4,   3,   4, // 5031-5034
  3,   4,   3,   4, // 5035-5038
  2,   1,   1, // 5039-5041
  1,   1, // 5042-5043
  1,   1, // 5044-5045
  1, // 5046
  1,   1, // 5047-5048
  1,   1, // 5049-5050
  3,   1, // 5051-5052
  3,   4,   1, // 5053-5055
  3,   1, // 5056-5057
  4,   1, // 5058-5059
  1,   1, // 5060-5061
  1, // 5062
  1, // 5063
  2,   1,   1, // 5064-5066
  1,   1, // 5067-5068
  1,   1, // 5069-5070
  1,   1,   1,   1, // 5071-5074
  1,   1, // 5075-5076
  1, // 5077
  1,   1, // 5078-5079
  1,   1, // 5080-5081
  1,   1,   1, // 5082-5084
  1,   1, // 5085-5086
  1,   1,   1, // 5087-5089
  1,   1,   3, // 5090-5092
  1,   1,   3, // 5093-5095
  1,   1, // 5096-5097
  1,   1, // 5098-5099
  1,   1,   1, // 5100-5102
  2,   1,   1,   1, // 5103-5106
  2,   1,   1,   1, // 5107-5110
  2,   1,   1, // 5111-5113
  1, // 5114
  1, // 5115
  1, // 5116
  1, // 5117
  2, // 5118
  2, // 5119
  3, // 5120
  5, // 5121
  2,   1, // 5122-5123
  4,   1,   1,   1, // 5124-5127
  4,   1,   1, // 5128-5130
  5,   6,   1,   1, // 5131-5134
  5,   5,   1,   1, // 5135-5138
  3,   1,   1, // 5139-5141
  3,   1,   1,   1, // 5142-5145
  3,   1,   1, // 5146-5148
  5,   1,   1, // 5149-5151
  3,   1,   1, // 5152-5154
  3,   1,   1,   1, // 5155-5158
  1,   1, // 5159-5160
  1,   1, // 5161-5162
  2, // 5163
  2, // 5164
  3, // 5165
  1, // 5166
  2,   1, // 5167-5168
  1,   1, // 5169-5170
  1,   1,   1, // 5171-5173
  1,   1,   1, // 5174-5176
  1,   1,   1, // 5177-5179
  1,   1,   1, // 5180-5182
  1,   1,   1,   1, // 5183-5186
  4,   1,   1, // 5187-5189
  3,   1,   1, // 5190-5192
  4,   1,   1,   1, // 5193-5196
  4,   1,   1,   1, // 5197-5200
  4,   1,   1,   1, // 5201-5204
  3,   1,   1,   1, // 5205-5208
  4,   1,   1,   1, // 5209-5212
  4,   1,   1,   1, // 5213-5216
  5,   5,   1,   1, // 5217-5220
  5,   5,   1,   1, // 5221-5224
  5,   6,   1,   1, // 5225-5228
  14,   1,   1, // 5229-5231
  3,   1,   1, // 5232-5234
  5,   1,   1, // 5235-5237
  3,   1,   1, // 5238-5240
  3,   1, // 5241-5242
  3,   1, // 5243-5244
  4,   1, // 5245-5246
  5,   1,   1, // 5247-5249
  3,   1,   1, // 5250-5252
  3,   1,   1, // 5253-5255
  3,   1,   1, // 5256-5258
  3,   1,   1, // 5259-5261
  3,   1, // 5262-5263
  5,   1,   1, // 5264-5266
  3,   1,   1, // 5267-5269
  3,   1,   1,   1, // 5270-5273
  3,   1,   1, // 5274-5276
  3,   1,   1,   1, // 5277-5280
  3,   1,   1,   1, // 5281-5284
  3,   1,   1, // 5285-5287
  3,   1, // 5288-5289
  3,   1, // 5290-5291
  3,   1, // 5292-5293
  3,   1,   1, // 5294-5296
  3,   4,   1,   1, // 5297-5300
  3,   4,   1, // 5301-5303
  3,   4,   1,   1, // 5304-5307
  1,   1,   1,   1,   3, // 5308-5312
  2,   1,   1,   1,   3, // 5313-5317
  1,   1,   1,   1,   3, // 5318-5322
  1,   1,   3, // 5323-5325
  1,   1,   3, // 5326-5328
  1,   1,   1, // 5329-5331
  1,   1,   1, // 5332-5334
  1,   1,   1, // 5335-5337
  1,   1,   1, // 5338-5340
  1,   1, // 5341-5342
  1,   1, // 5343-5344
  1,   1,   1,   1, // 5345-5348
  1,   1,   1, // 5349-5351
  1,   1,   1,   1, // 5352-5355
  1,   1,   1, // 5356-5358
  1,   1, // 5359-5360
  1,   1, // 5361-5362
  1,   1,   1, // 5363-5365
  1,   1,   1,   1, // 5366-5369
  2, // 5370
  2,   1,   1, // 5371-5373
  2,   1,   1, // 5374-5376
  2,   1,   1, // 5377-5379
  2,   1,   1, // 5380-5382
  2, // 5383
  2,   1,   1, // 5384-5386
  2,   1,   1, // 5387-5389
  4,   1,   1, // 5390-5392
  4,   1,   1, // 5393-5395
  4,   1,   1, // 5396-5398
  4,   1,   1, // 5399-5401
  2,   1, // 5402-5403
  2,   1, // 5404-5405
  2,   1,   1, // 5406-5408
  4,   1,   1, // 5409-5411
  4,   1,   1, // 5412-5414
  2,   1,   1, // 5415-5417
  2,   1,   1, // 5418-5420
  2,   1,   1, // 5421-5423
  2,   1, // 5424-5425
  2,   1, // 5426-5427
  4,   1,   1,   1, // 5428-5431
  4,   1,   1,   1, // 5432-5435
  2,   1, // 5436-5437
  2,   1, // 5438-5439
  4,   1, // 5440-5441
  4,   1, // 5442-5443
  4,   1,   1, // 5444-5446
  4,   1,   1, // 5447-5449
  4,   1,   1, // 5450-5452
  4,   1,   1, // 5453-5455
  4,   1,   1, // 5456-5458
  4,   1,   1, // 5459-5461
  4,   1, // 5462-5463
  4,   1, // 5464-5465
  4,   1,   1, // 5466-5468
  4,   1,   1, // 5469-5471
  4,   1,   1, // 5472-5474
  4,   1,   1, // 5475-5477
  2,   1, // 5478-5479
  2,   1, // 5480-5481
  4,   1,   1, // 5482-5484
  2,   1,   1, // 5485-5487
  4,   1,   1, // 5488-5490
  4,   1,   1, // 5491-5493
  2,   1,   1, // 5494-5496
  2,   1,   1, // 5497-5499
  4,   1,   3,   3, // 5500-5503
  4,   1,   3,   3, // 5504-5507
  6,   1,   3,   5,   5, // 5508-5512
  6,   1,   3,   5,   5, // 5513-5517
  8,   1,   3,   5,   7,   7, // 5518-5523
  8,   1,   3,   5,   7,   7, // 5524-5529
  3,   4,   3,   4, // 5530-5533
  3,   4,   3,   4, // 5534-5537
  3,   4,   3,   4, // 5538-5541
  2,   1, // 5542-5543
  2,   1, // 5544-5545
  1,   1, // 5546-5547
  1,   1, // 5548-5549
  4,   1,   1, // 5550-5552
  4,   1,   1, // 5553-5555
  4,   1,   1, // 5556-5558
  4,   1,   1, // 5559-5561
  2,   1,   1, // 5562-5564
  4,   1,   1, // 5565-5567
  2,   1,   1, // 5568-5570
  8,   1,   1, // 5571-5573
  8,   1,   1, // 5574-5576
  4,   1,   1, // 5577-5579
  4,   1,   1, // 5580-5582
  4,   1,   1, // 5583-5585
  4,   1,   1, // 5586-5588
  4,   1,   1, // 5589-5591
  4,   1,   1, // 5592-5594
  4,   1,   1, // 5595-5597
  4,   1,   1, // 5598-5600
  4,   1,   1, // 5601-5603
  6,   1,   1, // 5604-5606
  12,   1,   1, // 5607-5609
  8,   1,   1, // 5610-5612
  12,   1,   1, // 5613-5615
  4,   1,   1,   1, // 5616-5619
  4,   1,   1,   1, // 5620-5623
  8,   1,   1, // 5624-5626
  8,   1,   1, // 5627-5629
  8,   1,   1, // 5630-5632
  4,   1,   1,   1, // 5633-5636
  4,   1,   1,   1, // 5637-5640
  8,   1,   1, // 5641-5643
  8,   1,   1, // 5644-5646
  6,   1, // 5647-5648
  4,   1, // 5649-5650
  4,   1, // 5651-5652
  4,   1, // 5653-5654
  2,   1, // 5655-5656
  2,   1, // 5657-5658
  4,   1, // 5659-5660
  4,   1, // 5661-5662
  4,   1, // 5663-5664
  4,   1, // 5665-5666
  4,   1, // 5667-5668
  4,   1, // 5669-5670
  2,   1, // 5671-5672
  2,   1, // 5673-5674
  2, // 5675
  2,   1,   1, // 5676-5678
  4,   1, // 5679-5680
  2,   1, // 5681-5682
  4,   1, // 5683-5684
  2,   1, // 5685-5686
  2,   1, // 5687-5688
  6,   1, // 5689-5690
  3,   1, // 5691-5692
  6,   1, // 5693-5694
  6,   1, // 5695-5696
  3,   4,   1, // 5697-5699
  4,   1, // 5700-5701
  4,   1, // 5702-5703
  3,   1, // 5704-5705
  3,   1, // 5706-5707
  1, // 5708
  1, // 5709
  1, // 5710
  4,   1, // 5711-5712
  4,   1, // 5713-5714
  1,   1, // 5715-5716
  1,   1, // 5717-5718
  1,   1,   1,   4, // 5719-5722
  1,   1,   1, // 5723-5725
  1,   1,   1,   4, // 5726-5729
  2,   1,   1,   1,   4, // 5730-5734
  1,   1,   1,   4, // 5735-5738
  2,   1,   1,   1,   4, // 5739-5743
  17,   1,   1, // 5744-5746
  17,   1, // 5747-5748
  32,   1,   1, // 5749-5751
  32,   1,   1, // 5752-5754
  0 // End operand cycles
};
extern const unsigned ARMForwardingPaths[] = {
 0, // No itinerary
 0,  0, // 1-2
 0,  0,  0, // 3-5
 0,  0,  0,  0, // 6-9
 0,  0,  0,  0, // 10-13
 0,  0,  0,  0, // 14-17
 0,  0, // 18-19
 0,  0,  0, // 20-22
 0,  0,  0,  0, // 23-26
 0,  0,  0,  0, // 27-30
 0,  0, // 31-32
 0,  0, // 33-34
 0, // 35
 0,  0, // 36-37
 0,  0,  0, // 38-40
 0,  0,  0, // 41-43
 0,  0, // 44-45
 0,  0, // 46-47
 0, // 48
 0,  0,  0,  0,  0, // 49-53
 0,  0,  0,  0,  0, // 54-58
 0,  0,  0,  0,  0, // 59-63
 0,  0,  0,  0, // 64-67
 0,  0,  0, // 68-70
 0,  0,  0, // 71-73
 0,  0,  0, // 74-76
 0,  0,  0, // 77-79
 0,  0,  0,  0, // 80-83
 0,  0,  0,  0, // 84-87
 0,  0,  0, // 88-90
 0,  0,  0, // 91-93
 0,  0,  0, // 94-96
 0,  0,  0,  0, // 97-100
 0, // 101
 0, // 102
 0, // 103
 0,  0, // 104-105
 0,  0,  0, // 106-108
 0, // 109
 0, // 110
 0, // 111
 0,  0, // 112-113
 0,  0,  0, // 114-116
 0,  0, // 117-118
 0,  0,  0, // 119-121
 0, // 122
 0,  0, // 123-124
 0,  0,  0, // 125-127
 0,  0,  0, // 128-130
 0,  0,  0, // 131-133
 0,  0,  0, // 134-136
 0,  0,  0, // 137-139
 0,  0,  0, // 140-142
 0,  0,  0,  0, // 143-146
 0,  0,  0,  0, // 147-150
 0,  0,  0, // 151-153
 0,  0,  0, // 154-156
 0, // 157
 0,  0,  0,  0, // 158-161
 0,  0,  0, // 162-164
 0,  0,  0,  0, // 165-168
 0,  0,  0, // 169-171
 0,  0,  0, // 172-174
 0,  0,  0,  0, // 175-178
 0,  0,  0, // 179-181
 0,  0,  0, // 182-184
 0,  0,  0, // 185-187
 0,  0, // 188-189
 0, // 190
 0,  0, // 191-192
 0,  0,  0, // 193-195
 0,  0,  0, // 196-198
 0,  0,  0, // 199-201
 0,  0,  0, // 202-204
 0,  0, // 205-206
 0,  0, // 207-208
 0,  0, // 209-210
 0,  0, // 211-212
 0,  0,  0, // 213-215
 0,  0,  0, // 216-218
 0,  0,  0,  0, // 219-222
 0,  0,  0,  0, // 223-226
 0,  0,  0,  0,  0, // 227-231
 0,  0,  0,  0, // 232-235
 0,  0,  0, // 236-238
 0,  0,  0, // 239-241
 0,  0,  0,  0, // 242-245
 0,  0,  0,  0, // 246-249
 0,  0,  0, // 250-252
 0,  0,  0, // 253-255
 0,  0, // 256-257
 0,  0, // 258-259
 0,  0,  0, // 260-262
 0,  0,  0, // 263-265
 0,  0, // 266-267
 0,  0, // 268-269
 0,  0, // 270-271
 0,  0, // 272-273
 0,  0,  0, // 274-276
 0,  0,  0, // 277-279
 0,  0,  0,  0, // 280-283
 0,  0,  0, // 284-286
 0,  0,  0, // 287-289
 0,  0, // 290-291
 0,  0, // 292-293
 0,  0, // 294-295
 0,  0, // 296-297
 0,  0,  0, // 298-300
 0,  0, // 301-302
 0,  0, // 303-304
 0, // 305
 0,  0, // 306-307
 0,  0, // 308-309
 0,  0, // 310-311
 0,  0, // 312-313
 0,  0, // 314-315
 0,  0, // 316-317
 0,  0, // 318-319
 0, // 320
 0,  0, // 321-322
 0,  0, // 323-324
 0,  0, // 325-326
 0,  0,  0,  0, // 327-330
 0,  0, // 331-332
 0, // 333
 0,  0, // 334-335
 0,  0, // 336-337
 0,  0,  0, // 338-340
 0,  0, // 341-342
 0,  0,  0, // 343-345
 0,  0,  0, // 346-348
 0,  0,  0, // 349-351
 0,  0, // 352-353
 0,  0, // 354-355
 0,  0,  0, // 356-358
 0,  0,  0,  0, // 359-362
 0,  0,  0,  0, // 363-366
 0,  0,  0, // 367-369
 0,  0,  0, // 370-372
 0,  0, // 373-374
 0,  0,  0, // 375-377
 0,  0, // 378-379
 0, // 380
 0, // 381
 0, // 382
 0, // 383
 0,  0, // 384-385
 0,  0,  0,  0, // 386-389
 0,  0,  0, // 390-392
 0,  0,  0,  0, // 393-396
 0,  0,  0, // 397-399
 0,  0,  0, // 400-402
 0,  0,  0,  0, // 403-406
 0,  0,  0, // 407-409
 0,  0,  0, // 410-412
 0,  0,  0, // 413-415
 0,  0,  0,  0, // 416-419
 0,  0, // 420-421
 0,  0, // 422-423
 0, // 424
 0, // 425
 0, // 426
 0, // 427
 0,  0, // 428-429
 0,  0, // 430-431
 0,  0,  0, // 432-434
 0,  0,  0, // 435-437
 0,  0,  0, // 438-440
 0,  0,  0, // 441-443
 0,  0,  0,  0, // 444-447
 0,  0,  0, // 448-450
 0,  0,  0, // 451-453
 0,  0,  0,  0, // 454-457
 0,  0,  0,  0, // 458-461
 0,  0,  0,  0, // 462-465
 0,  0,  0,  0, // 466-469
 0,  0,  0,  0, // 470-473
 0,  0,  0,  0, // 474-477
 0,  0,  0, // 478-480
 0,  0,  0, // 481-483
 0,  0,  0,  0, // 484-487
 0,  0,  0, // 488-490
 0,  0,  0, // 491-493
 0,  0,  0, // 494-496
 0,  0, // 497-498
 0,  0, // 499-500
 0,  0, // 501-502
 0,  0,  0, // 503-505
 0,  0,  0, // 506-508
 0,  0,  0, // 509-511
 0,  0,  0, // 512-514
 0,  0,  0, // 515-517
 0,  0, // 518-519
 0,  0,  0, // 520-522
 0,  0,  0, // 523-525
 0,  0,  0,  0, // 526-529
 0,  0,  0, // 530-532
 0,  0,  0,  0, // 533-536
 0,  0,  0,  0, // 537-540
 0,  0,  0, // 541-543
 0,  0, // 544-545
 0,  0, // 546-547
 0,  0, // 548-549
 0,  0,  0, // 550-552
 0,  0,  0, // 553-555
 0,  0, // 556-557
 0,  0,  0,  0, // 558-561
 0,  0,  0,  0,  0, // 562-566
 0,  0,  0,  0,  0, // 567-571
 0,  0,  0,  0,  0, // 572-576
 0,  0,  0, // 577-579
 0,  0,  0, // 580-582
 0,  0,  0, // 583-585
 0,  0,  0, // 586-588
 0,  0,  0, // 589-591
 0,  0,  0, // 592-594
 0,  0, // 595-596
 0,  0, // 597-598
 0,  0,  0,  0, // 599-602
 0,  0,  0, // 603-605
 0,  0,  0,  0, // 606-609
 0,  0,  0, // 610-612
 0,  0, // 613-614
 0,  0, // 615-616
 0,  0,  0, // 617-619
 0,  0,  0,  0, // 620-623
 0, // 624
 0,  0, // 625-626
 0,  0, // 627-628
 0,  0, // 629-630
 0,  0, // 631-632
 0,  0,  0, // 633-635
 0,  0,  0, // 636-638
 0,  0,  0, // 639-641
 0,  0,  0, // 642-644
 0,  0,  0,  0, // 645-648
 0,  0,  0,  0, // 649-652
 0,  0,  0,  0, // 653-656
 0,  0,  0,  0, // 657-660
 0,  0, // 661-662
 0,  0, // 663-664
 0,  0, // 665-666
 0,  0, // 667-668
 0,  0, // 669-670
 0,  0, // 671-672
 0,  0, // 673-674
 0,  0, // 675-676
 0,  0, // 677-678
 0,  0, // 679-680
 0,  0, // 681-682
 0,  0, // 683-684
 0,  0,  0, // 685-687
 0,  0,  0, // 688-690
 0,  0,  0, // 691-693
 0, // 694
 0, // 695
 0, // 696
 0,  0,  0, // 697-699
 0,  0,  0, // 700-702
 0,  0,  0, // 703-705
 0,  0,  0, // 706-708
 0,  0,  0,  0, // 709-712
 0,  0,  0,  0, // 713-716
 0,  0,  0,  0, // 717-720
 0,  0,  0,  0,  0, // 721-725
 0,  0,  0,  0, // 726-729
 0,  0,  0,  0,  0, // 730-734
 0,  0,  0, // 735-737
 0,  0,  0, // 738-740
 0,  0,  0, // 741-743
 0,  0,  0, // 744-746
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 747-748
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 749-751
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, // 752-755
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, // 756-759
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, // 760-763
 0,  0, // 764-765
 0,  0,  0, // 766-768
 0,  0,  0,  0, // 769-772
 0,  0,  0,  0, // 773-776
 0,  0, // 777-778
 0,  0, // 779-780
CortexA9ItinerariesBypass::A9_LdBypass, // 781
CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 782-783
CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, // 784-786
CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, // 787-789
 0,  0, // 790-791
 0,  0, // 792-793
 0, // 794
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 795-799
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 800-804
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 805-809
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0,  0, // 810-813
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 814-816
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 817-819
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 820-822
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0,  0, // 823-826
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0,  0, // 827-830
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0,  0, // 831-834
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 835-837
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 838-840
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 841-843
 0,  0,  0,  0, // 844-847
 0, // 848
 0, // 849
 0, // 850
 0,  0, // 851-852
 0,  0,  0, // 853-855
 0, // 856
 0, // 857
 0, // 858
 0,  0, // 859-860
 0,  0,  0, // 861-863
 0,  0, // 864-865
 0,  0,  0, // 866-868
 0, // 869
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 870-871
 0,  0,  0, // 872-874
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 875-877
 0,  0,  0, // 878-880
 0,  0,  0, // 881-883
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::NoBypass, // 884-886
 0,  0,  0, // 887-889
 0,  0, // 890-891
 0,  0,  0,  0, // 892-895
 0,  0,  0,  0, // 896-899
 0,  0,  0, // 900-902
 0,  0,  0,  0, // 903-906
 0, // 907
 0,  0,  0,  0, // 908-911
 0,  0,  0, // 912-914
 0,  0,  0,  0, // 915-918
 0,  0,  0, // 919-921
 0,  0,  0, // 922-924
 0,  0,  0,  0, // 925-928
 0,  0,  0, // 929-931
 0,  0,  0, // 932-934
 0,  0,  0, // 935-937
 0,  0, // 938-939
 0, // 940
 0,  0, // 941-942
 0,  0,  0, // 943-945
 0,  0,  0, // 946-948
 0,  0,  0,  0, // 949-952
 0,  0,  0,  0, // 953-956
 0,  0,  0, // 957-959
 0,  0,  0, // 960-962
 0,  0,  0, // 963-965
 0,  0,  0, // 966-968
 0,  0, // 969-970
 0,  0, // 971-972
 0,  0, // 973-974
 0,  0, // 975-976
 0,  0,  0, // 977-979
 0,  0,  0, // 980-982
 0,  0,  0, // 983-985
 0,  0,  0, // 986-988
 0,  0,  0, // 989-991
 0,  0,  0, // 992-994
 0,  0,  0, // 995-997
 0, // 998
 0,  0,  0, // 999-1001
 0,  0,  0, // 1002-1004
 0,  0, // 1005-1006
 0,  0, // 1007-1008
 0,  0, // 1009-1010
 0,  0, // 1011-1012
 0,  0, // 1013-1014
 0,  0, // 1015-1016
 0,  0,  0, // 1017-1019
 0,  0,  0, // 1020-1022
 0,  0, // 1023-1024
 0,  0, // 1025-1026
 0,  0, // 1027-1028
 0,  0,  0, // 1029-1031
 0,  0,  0, // 1032-1034
 0,  0,  0,  0, // 1035-1038
 0,  0,  0,  0, // 1039-1042
 0,  0,  0,  0, // 1043-1046
 0,  0,  0,  0, // 1047-1050
 0,  0, // 1051-1052
 0,  0,  0, // 1053-1055
 0,  0, // 1056-1057
 0,  0,  0,  0, // 1058-1061
 0,  0,  0,  0, // 1062-1065
 0,  0,  0,  0,  0,  0, // 1066-1071
 0,  0, // 1072-1073
 0,  0,  0,  0,  0, // 1074-1078
 0,  0,  0,  0, // 1079-1082
 0,  0,  0,  0, // 1083-1086
 0,  0,  0, // 1087-1089
 0,  0,  0, // 1090-1092
 0,  0,  0, // 1093-1095
 0,  0,  0,  0,  0, // 1096-1100
 0,  0,  0,  0,  0,  0, // 1101-1106
 0,  0,  0,  0,  0,  0,  0,  0, // 1107-1114
 0,  0,  0, // 1115-1117
 0,  0,  0,  0,  0,  0, // 1118-1123
 0,  0,  0,  0,  0, // 1124-1128
 0,  0,  0,  0,  0,  0, // 1129-1134
 0,  0,  0,  0, // 1135-1138
 0,  0,  0,  0,  0,  0, // 1139-1144
 0,  0,  0,  0,  0,  0,  0,  0, // 1145-1152
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 1153-1162
 0,  0,  0,  0, // 1163-1166
 0,  0,  0,  0,  0, // 1167-1171
 0,  0,  0,  0,  0, // 1172-1176
 0,  0,  0,  0,  0,  0,  0, // 1177-1183
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 1184-1193
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 1194-1205
 0,  0,  0,  0,  0, // 1206-1210
 0,  0,  0,  0,  0,  0, // 1211-1216
 0,  0,  0,  0, // 1217-1220
 0,  0,  0,  0, // 1221-1224
 0,  0, // 1225-1226
 0,  0, // 1227-1228
 0,  0,  0,  0, // 1229-1232
 0,  0,  0,  0, // 1233-1236
 0,  0,  0,  0, // 1237-1240
 0,  0,  0,  0, // 1241-1244
 0,  0,  0,  0, // 1245-1248
 0,  0,  0,  0, // 1249-1252
 0,  0,  0,  0, // 1253-1256
 0,  0,  0,  0, // 1257-1260
 0,  0,  0, // 1261-1263
 0,  0, // 1264-1265
 0,  0, // 1266-1267
 0,  0,  0, // 1268-1270
 0,  0, // 1271-1272
 0,  0, // 1273-1274
 0,  0,  0, // 1275-1277
 0,  0,  0, // 1278-1280
 0,  0,  0, // 1281-1283
 0,  0,  0, // 1284-1286
 0,  0,  0, // 1287-1289
 0,  0,  0, // 1290-1292
 0,  0,  0, // 1293-1295
 0,  0,  0, // 1296-1298
 0,  0,  0, // 1299-1301
 0,  0,  0, // 1302-1304
 0,  0,  0, // 1305-1307
 0,  0,  0, // 1308-1310
 0,  0, // 1311-1312
 0,  0,  0, // 1313-1315
 0,  0,  0, // 1316-1318
 0,  0,  0, // 1319-1321
 0,  0,  0, // 1322-1324
 0,  0,  0, // 1325-1327
 0,  0, // 1328-1329
 0,  0, // 1330-1331
 0,  0, // 1332-1333
 0,  0, // 1334-1335
 0,  0, // 1336-1337
 0,  0, // 1338-1339
 0,  0,  0, // 1340-1342
 0,  0,  0,  0,  0, // 1343-1347
 0,  0,  0, // 1348-1350
 0,  0,  0,  0,  0,  0, // 1351-1356
 0,  0,  0,  0,  0,  0, // 1357-1362
 0,  0,  0,  0,  0, // 1363-1367
 0,  0,  0,  0,  0, // 1368-1372
 0,  0,  0,  0,  0,  0,  0,  0, // 1373-1380
 0,  0,  0,  0,  0,  0,  0, // 1381-1387
 0,  0,  0,  0, // 1388-1391
 0,  0,  0,  0, // 1392-1395
 0,  0,  0,  0,  0,  0, // 1396-1401
 0,  0,  0,  0, // 1402-1405
 0,  0,  0,  0,  0,  0, // 1406-1411
 0,  0,  0,  0,  0,  0,  0,  0, // 1412-1419
 0,  0,  0,  0,  0, // 1420-1424
 0,  0,  0,  0,  0,  0,  0, // 1425-1431
 0,  0,  0,  0,  0, // 1432-1436
 0,  0,  0,  0,  0,  0,  0, // 1437-1443
 0,  0,  0,  0,  0,  0, // 1444-1449
 0,  0,  0,  0,  0,  0,  0,  0, // 1450-1457
 0,  0,  0,  0,  0,  0, // 1458-1463
 0,  0,  0,  0,  0,  0,  0,  0, // 1464-1471
 0,  0,  0,  0, // 1472-1475
 0,  0, // 1476-1477
 0,  0, // 1478-1479
 0,  0,  0, // 1480-1482
 0,  0,  0, // 1483-1485
 0,  0,  0,  0, // 1486-1489
 0,  0,  0,  0,  0, // 1490-1494
 0,  0,  0,  0,  0,  0, // 1495-1500
 0,  0,  0,  0, // 1501-1504
 0,  0,  0,  0,  0, // 1505-1509
 0,  0,  0,  0,  0,  0, // 1510-1515
 0,  0,  0,  0,  0,  0,  0, // 1516-1522
 0,  0, // 1523-1524
 0,  0, // 1525-1526
 0,  0, // 1527-1528
 0,  0, // 1529-1530
 0,  0,  0,  0, // 1531-1534
 0,  0,  0,  0, // 1535-1538
 0,  0,  0,  0, // 1539-1542
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::NoBypass, // 1543-1545
 0,  0, // 1546-1547
CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::NoBypass, // 1548-1549
CortexA9ItinerariesBypass::A9_LdBypass, // 1550
CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 1551-1552
CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::NoBypass, // 1553-1554
CortexA9ItinerariesBypass::A9_LdBypass,  0, // 1555-1556
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 1557-1559
CortexA9ItinerariesBypass::A9_LdBypass,  0, // 1560-1561
 0,  0, // 1562-1563
 0,  0, // 1564-1565
 0, // 1566
 0,  0, // 1567-1568
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 1569-1571
 0,  0, // 1572-1573
 0,  0, // 1574-1575
 0,  0,  0,  0, // 1576-1579
 0,  0, // 1580-1581
 0, // 1582
 0,  0, // 1583-1584
 0,  0, // 1585-1586
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 1587-1589
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 1590-1591
 0,  0,  0, // 1592-1594
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 1595-1597
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 1598-1600
 0,  0, // 1601-1602
 0,  0, // 1603-1604
 0,  0,  0, // 1605-1607
 0,  0,  0,  0, // 1608-1611
 0,  0,  0,  0, // 1612-1615
 0,  0,  0, // 1616-1618
 0,  0,  0, // 1619-1621
 0,  0, // 1622-1623
 0,  0,  0, // 1624-1626
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 1627-1628
 0, // 1629
 0, // 1630
 0, // 1631
 0, // 1632
 0,  0, // 1633-1634
 0,  0,  0,  0, // 1635-1638
 0,  0,  0, // 1639-1641
 0,  0,  0,  0, // 1642-1645
 0,  0,  0,  0, // 1646-1649
 0,  0,  0, // 1650-1652
 0,  0,  0,  0, // 1653-1656
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 1657-1659
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 1660-1662
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 1663-1665
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0,  0, // 1666-1669
 0,  0, // 1670-1671
 0,  0, // 1672-1673
 0, // 1674
 0, // 1675
 0, // 1676
 0, // 1677
 0,  0, // 1678-1679
 0,  0, // 1680-1681
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 1682-1684
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 1685-1687
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 1688-1690
 0,  0,  0, // 1691-1693
 0,  0,  0,  0, // 1694-1697
 0,  0,  0, // 1698-1700
 0,  0,  0, // 1701-1703
 0,  0,  0,  0, // 1704-1707
 0,  0,  0,  0, // 1708-1711
 0,  0,  0,  0, // 1712-1715
 0,  0,  0,  0, // 1716-1719
 0,  0,  0,  0, // 1720-1723
 0,  0,  0,  0, // 1724-1727
 0,  0,  0,  0, // 1728-1731
 0,  0,  0,  0, // 1732-1735
 0,  0,  0,  0, // 1736-1739
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 1740-1742
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 1743-1745
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 1746-1748
CortexA9ItinerariesBypass::A9_LdBypass,  0, // 1749-1750
CortexA9ItinerariesBypass::A9_LdBypass,  0, // 1751-1752
 0,  0, // 1753-1754
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 1755-1757
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 1758-1760
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 1761-1763
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 1764-1766
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 1767-1769
CortexA9ItinerariesBypass::A9_LdBypass,  0, // 1770-1771
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 1772-1774
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 1775-1777
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0,  0, // 1778-1781
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 1782-1784
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0,  0, // 1785-1788
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0,  0, // 1789-1792
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 1793-1795
CortexA9ItinerariesBypass::A9_LdBypass,  0, // 1796-1797
CortexA9ItinerariesBypass::A9_LdBypass,  0, // 1798-1799
CortexA9ItinerariesBypass::A9_LdBypass,  0, // 1800-1801
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 1802-1804
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0,  0, // 1805-1808
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 1809-1811
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0,  0, // 1812-1815
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 1816-1820
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 1821-1825
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 1826-1830
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 1831-1833
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 1834-1836
 0,  0,  0, // 1837-1839
 0,  0,  0, // 1840-1842
 0,  0,  0, // 1843-1845
 0,  0,  0, // 1846-1848
 0,  0, // 1849-1850
 0,  0, // 1851-1852
 0,  0,  0,  0, // 1853-1856
 0,  0,  0, // 1857-1859
 0,  0,  0,  0, // 1860-1863
 0,  0,  0, // 1864-1866
 0,  0, // 1867-1868
 0,  0, // 1869-1870
 0,  0,  0, // 1871-1873
 0,  0,  0,  0, // 1874-1877
 0, // 1878
 0,  0,  0, // 1879-1881
 0,  0,  0, // 1882-1884
 0,  0,  0, // 1885-1887
 0,  0,  0, // 1888-1890
 0, // 1891
 0,  0,  0, // 1892-1894
 0,  0,  0, // 1895-1897
 0,  0,  0, // 1898-1900
 0,  0,  0, // 1901-1903
 0,  0,  0, // 1904-1906
 0,  0,  0, // 1907-1909
 0,  0, // 1910-1911
 0,  0, // 1912-1913
 0,  0,  0, // 1914-1916
 0,  0,  0, // 1917-1919
 0,  0,  0, // 1920-1922
 0,  0,  0, // 1923-1925
 0,  0,  0, // 1926-1928
 0,  0,  0, // 1929-1931
 0,  0, // 1932-1933
 0,  0, // 1934-1935
 0,  0,  0,  0, // 1936-1939
 0,  0,  0,  0, // 1940-1943
 0,  0, // 1944-1945
 0,  0, // 1946-1947
 0,  0, // 1948-1949
 0,  0, // 1950-1951
 0,  0,  0, // 1952-1954
 0,  0,  0, // 1955-1957
 0,  0,  0, // 1958-1960
 0,  0,  0, // 1961-1963
 0,  0,  0, // 1964-1966
 0,  0,  0, // 1967-1969
 0,  0, // 1970-1971
 0,  0, // 1972-1973
 0,  0,  0, // 1974-1976
 0,  0,  0, // 1977-1979
 0,  0,  0, // 1980-1982
 0,  0,  0, // 1983-1985
 0,  0, // 1986-1987
 0,  0, // 1988-1989
 0,  0,  0, // 1990-1992
 0,  0,  0, // 1993-1995
 0,  0,  0, // 1996-1998
 0,  0,  0, // 1999-2001
 0,  0,  0, // 2002-2004
 0,  0,  0,  0, // 2005-2008
 0,  0,  0,  0, // 2009-2012
 0,  0,  0,  0,  0, // 2013-2017
 0,  0,  0,  0,  0, // 2018-2022
 0,  0,  0,  0,  0,  0, // 2023-2028
 0,  0,  0,  0,  0,  0, // 2029-2034
 0,  0,  0,  0,  0,  0,  0, // 2035-2041
 0,  0,  0,  0, // 2042-2045
 0,  0,  0,  0, // 2046-2049
 0,  0,  0,  0, // 2050-2053
 0,  0, // 2054-2055
 0,  0, // 2056-2057
 0,  0, // 2058-2059
 0,  0, // 2060-2061
 0,  0,  0, // 2062-2064
 0,  0,  0, // 2065-2067
 0,  0,  0, // 2068-2070
 0,  0,  0, // 2071-2073
 0,  0,  0, // 2074-2076
 0,  0,  0, // 2077-2079
 0,  0,  0, // 2080-2082
 0,  0,  0, // 2083-2085
 0,  0,  0, // 2086-2088
 0,  0,  0, // 2089-2091
 0,  0,  0, // 2092-2094
 0,  0,  0, // 2095-2097
 0,  0,  0, // 2098-2100
 0,  0,  0, // 2101-2103
 0,  0,  0, // 2104-2106
 0,  0,  0, // 2107-2109
 0,  0,  0, // 2110-2112
 0,  0,  0, // 2113-2115
 0,  0,  0, // 2116-2118
 0,  0,  0,  0, // 2119-2122
 0,  0,  0,  0, // 2123-2126
 0,  0,  0,  0, // 2127-2130
 0,  0,  0,  0, // 2131-2134
 0,  0,  0,  0, // 2135-2138
 0,  0,  0,  0, // 2139-2142
 0,  0,  0,  0, // 2143-2146
 0,  0,  0,  0, // 2147-2150
 0,  0,  0,  0, // 2151-2154
 0,  0,  0,  0, // 2155-2158
 0,  0,  0,  0, // 2159-2162
 0,  0,  0,  0, // 2163-2166
 0,  0, // 2167-2168
 0,  0, // 2169-2170
 0,  0, // 2171-2172
 0,  0, // 2173-2174
 0,  0, // 2175-2176
 0,  0, // 2177-2178
 0,  0, // 2179-2180
 0,  0, // 2181-2182
 0,  0, // 2183-2184
 0,  0, // 2185-2186
 0,  0, // 2187-2188
 0,  0, // 2189-2190
 0,  0, // 2191-2192
 0,  0, // 2193-2194
 0, // 2195
 0,  0,  0, // 2196-2198
 0,  0, // 2199-2200
 0,  0, // 2201-2202
 0,  0, // 2203-2204
 0,  0, // 2205-2206
 0,  0, // 2207-2208
 0,  0, // 2209-2210
 0,  0, // 2211-2212
 0,  0, // 2213-2214
 0,  0,  0, // 2215-2217
 0,  0,  0, // 2218-2220
 0,  0,  0, // 2221-2223
 0,  0,  0, // 2224-2226
 0,  0, // 2227-2228
 0,  0, // 2229-2230
 0, // 2231
 0, // 2232
 0, // 2233
 0,  0, // 2234-2235
 0,  0, // 2236-2237
 0,  0, // 2238-2239
 0,  0, // 2240-2241
 0,  0,  0,  0, // 2242-2245
 0,  0,  0,  0, // 2246-2249
 0,  0,  0,  0, // 2250-2253
 0,  0,  0,  0, // 2254-2257
 0,  0,  0,  0, // 2258-2261
 0,  0,  0,  0, // 2262-2265
 0,  0, // 2266-2267
 0,  0,  0, // 2268-2270
 0,  0,  0, // 2271-2273
 0,  0,  0,  0, // 2274-2277
 0,  0,  0,  0, // 2278-2281
 0,  0,  0,  0, // 2282-2285
 0,  0,  0,  0,  0, // 2286-2290
 0,  0,  0,  0, // 2291-2294
 0,  0,  0, // 2295-2297
 0,  0,  0,  0,  0, // 2298-2302
 0,  0,  0,  0,  0,  0, // 2303-2308
 0,  0,  0,  0,  0,  0, // 2309-2314
 0,  0,  0,  0, // 2315-2318
 0,  0,  0,  0, // 2319-2322
 0,  0,  0,  0,  0, // 2323-2327
 0,  0,  0,  0,  0, // 2328-2332
 0,  0,  0,  0,  0, // 2333-2337
 0,  0,  0,  0,  0, // 2338-2342
 0,  0,  0,  0,  0,  0, // 2343-2348
 0,  0,  0,  0,  0,  0, // 2349-2354
 0,  0, // 2355-2356
 0,  0,  0,  0, // 2357-2360
 0,  0,  0,  0, // 2361-2364
 0,  0,  0,  0,  0,  0, // 2365-2370
 0,  0,  0, // 2371-2373
 0,  0,  0,  0,  0,  0, // 2374-2379
 0,  0,  0,  0,  0,  0,  0,  0, // 2380-2387
 0,  0,  0,  0,  0, // 2388-2392
 0,  0,  0,  0,  0,  0,  0,  0, // 2393-2400
 0,  0,  0,  0, // 2401-2404
 0,  0,  0,  0,  0,  0,  0,  0, // 2405-2412
 0,  0,  0,  0,  0,  0, // 2413-2418
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 2419-2428
 0,  0,  0,  0,  0,  0, // 2429-2434
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 2435-2444
 0,  0,  0,  0,  0, // 2445-2449
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 2450-2459
 0,  0,  0,  0,  0,  0,  0, // 2460-2466
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 2467-2478
 0,  0,  0,  0,  0,  0,  0, // 2479-2485
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 2486-2497
 0,  0,  0, // 2498-2500
 0,  0,  0,  0, // 2501-2504
 0,  0,  0, // 2505-2507
 0,  0,  0,  0, // 2508-2511
 0,  0,  0,  0,  0, // 2512-2516
 0,  0,  0,  0,  0, // 2517-2521
 0,  0,  0,  0,  0,  0,  0, // 2522-2528
 0,  0,  0,  0,  0,  0, // 2529-2534
 0,  0,  0,  0,  0,  0, // 2535-2540
 0,  0,  0,  0,  0,  0,  0,  0, // 2541-2548
 0,  0,  0,  0, // 2549-2552
 0,  0,  0, // 2553-2555
 0,  0,  0,  0,  0,  0, // 2556-2561
 0,  0,  0,  0,  0,  0,  0,  0, // 2562-2569
 0,  0,  0, // 2570-2572
 0,  0,  0,  0,  0, // 2573-2577
 0,  0,  0,  0,  0,  0,  0, // 2578-2584
 0,  0,  0,  0,  0,  0, // 2585-2590
 0,  0,  0,  0,  0,  0,  0,  0, // 2591-2598
 0,  0,  0, // 2599-2601
 0,  0,  0,  0,  0, // 2602-2606
 0,  0,  0,  0, // 2607-2610
 0,  0,  0,  0,  0,  0, // 2611-2616
 0,  0,  0,  0,  0, // 2617-2621
 0,  0,  0,  0,  0,  0,  0, // 2622-2628
 0,  0,  0,  0,  0,  0, // 2629-2634
 0,  0,  0,  0,  0,  0,  0,  0, // 2635-2642
 0,  0,  0, // 2643-2645
 0,  0, // 2646-2647
 0,  0,  0, // 2648-2650
 0,  0, // 2651-2652
 0,  0, // 2653-2654
 0,  0,  0, // 2655-2657
 0,  0,  0,  0, // 2658-2661
 0,  0,  0,  0, // 2662-2665
 0,  0,  0,  0, // 2666-2669
 0,  0, // 2670-2671
 0,  0,  0, // 2672-2674
 0,  0,  0,  0, // 2675-2678
 0,  0,  0,  0, // 2679-2682
 0,  0, // 2683-2684
 0,  0, // 2685-2686
 0, // 2687
 0,  0, // 2688-2689
 0,  0,  0, // 2690-2692
 0,  0,  0, // 2693-2695
 0,  0, // 2696-2697
 0,  0, // 2698-2699
 0, // 2700
 0,  0,  0,  0,  0, // 2701-2705
 0,  0,  0,  0,  0, // 2706-2710
 0,  0,  0,  0,  0, // 2711-2715
 0,  0,  0,  0, // 2716-2719
 0,  0,  0, // 2720-2722
 0,  0,  0, // 2723-2725
 0,  0,  0, // 2726-2728
 0,  0,  0, // 2729-2731
 0,  0,  0,  0, // 2732-2735
 0,  0,  0,  0, // 2736-2739
 0,  0,  0, // 2740-2742
 0,  0,  0, // 2743-2745
 0,  0,  0, // 2746-2748
 0,  0,  0,  0, // 2749-2752
 0, // 2753
 0, // 2754
 0,  0, // 2755-2756
 0,  0, // 2757-2758
 0,  0,  0, // 2759-2761
 0, // 2762
 0, // 2763
 0, // 2764
 0,  0, // 2765-2766
 0,  0,  0, // 2767-2769
 0,  0, // 2770-2771
 0,  0,  0, // 2772-2774
 0, // 2775
 0,  0, // 2776-2777
 0,  0,  0, // 2778-2780
 0,  0,  0, // 2781-2783
 0,  0,  0, // 2784-2786
 0,  0,  0, // 2787-2789
 0,  0,  0, // 2790-2792
 0,  0,  0, // 2793-2795
 0,  0, // 2796-2797
 0,  0,  0,  0, // 2798-2801
 0,  0,  0,  0, // 2802-2805
 0,  0,  0, // 2806-2808
 0,  0,  0,  0, // 2809-2812
 0, // 2813
 0,  0,  0,  0, // 2814-2817
 0,  0,  0, // 2818-2820
 0,  0,  0,  0, // 2821-2824
 0,  0,  0, // 2825-2827
 0,  0,  0, // 2828-2830
 0,  0,  0,  0, // 2831-2834
 0,  0,  0, // 2835-2837
 0,  0,  0, // 2838-2840
 0,  0,  0, // 2841-2843
 0,  0, // 2844-2845
 0, // 2846
 0,  0, // 2847-2848
 0,  0,  0, // 2849-2851
 0,  0,  0, // 2852-2854
 0,  0,  0,  0, // 2855-2858
 0,  0,  0,  0, // 2859-2862
 0,  0,  0, // 2863-2865
 0,  0,  0, // 2866-2868
 0,  0,  0, // 2869-2871
 0,  0,  0, // 2872-2874
 0,  0, // 2875-2876
 0,  0, // 2877-2878
 0,  0, // 2879-2880
 0,  0, // 2881-2882
 0,  0,  0, // 2883-2885
 0,  0,  0, // 2886-2888
 0,  0,  0, // 2889-2891
 0,  0,  0, // 2892-2894
 0,  0,  0, // 2895-2897
 0,  0,  0, // 2898-2900
 0,  0,  0, // 2901-2903
 0, // 2904
 0,  0,  0, // 2905-2907
 0,  0,  0, // 2908-2910
 0,  0, // 2911-2912
 0,  0, // 2913-2914
 0,  0, // 2915-2916
 0,  0, // 2917-2918
 0,  0,  0, // 2919-2921
 0,  0,  0, // 2922-2924
 0,  0, // 2925-2926
 0,  0, // 2927-2928
 0,  0, // 2929-2930
 0,  0,  0, // 2931-2933
 0,  0,  0, // 2934-2936
 0,  0,  0,  0, // 2937-2940
 0,  0,  0,  0, // 2941-2944
 0,  0,  0,  0, // 2945-2948
 0,  0,  0,  0, // 2949-2952
 0,  0, // 2953-2954
 0,  0,  0, // 2955-2957
 0,  0, // 2958-2959
 0,  0,  0,  0, // 2960-2963
 0,  0,  0,  0, // 2964-2967
 0,  0,  0,  0,  0,  0, // 2968-2973
 0,  0, // 2974-2975
 0,  0,  0,  0,  0, // 2976-2980
 0,  0,  0,  0, // 2981-2984
 0,  0,  0,  0, // 2985-2988
 0,  0,  0, // 2989-2991
 0,  0,  0, // 2992-2994
 0,  0,  0, // 2995-2997
 0,  0,  0,  0,  0, // 2998-3002
 0,  0,  0,  0,  0,  0, // 3003-3008
 0,  0,  0,  0,  0,  0,  0,  0, // 3009-3016
 0,  0,  0, // 3017-3019
 0,  0,  0,  0,  0,  0, // 3020-3025
 0,  0,  0,  0,  0, // 3026-3030
 0,  0,  0,  0,  0,  0, // 3031-3036
 0,  0,  0,  0, // 3037-3040
 0,  0,  0,  0,  0,  0, // 3041-3046
 0,  0,  0,  0,  0,  0,  0,  0, // 3047-3054
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 3055-3064
 0,  0,  0,  0, // 3065-3068
 0,  0,  0,  0,  0, // 3069-3073
 0,  0,  0,  0,  0, // 3074-3078
 0,  0,  0,  0,  0,  0,  0, // 3079-3085
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 3086-3095
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 3096-3107
 0,  0,  0,  0,  0, // 3108-3112
 0,  0,  0,  0,  0,  0, // 3113-3118
 0,  0,  0,  0,  0, // 3119-3123
 0,  0,  0,  0, // 3124-3127
 0,  0, // 3128-3129
 0,  0, // 3130-3131
 0,  0,  0,  0, // 3132-3135
 0,  0,  0,  0, // 3136-3139
 0,  0,  0,  0, // 3140-3143
 0,  0,  0,  0, // 3144-3147
 0,  0,  0,  0, // 3148-3151
 0,  0,  0,  0, // 3152-3155
 0,  0,  0,  0, // 3156-3159
 0,  0,  0,  0, // 3160-3163
 0,  0,  0, // 3164-3166
 0,  0, // 3167-3168
 0,  0, // 3169-3170
 0,  0,  0, // 3171-3173
 0,  0, // 3174-3175
 0,  0, // 3176-3177
 0,  0,  0, // 3178-3180
 0,  0,  0, // 3181-3183
 0,  0,  0, // 3184-3186
 0,  0,  0, // 3187-3189
 0,  0,  0, // 3190-3192
 0,  0,  0, // 3193-3195
 0,  0,  0, // 3196-3198
 0,  0,  0, // 3199-3201
 0,  0,  0, // 3202-3204
 0,  0,  0, // 3205-3207
 0,  0,  0, // 3208-3210
 0,  0,  0, // 3211-3213
 0,  0, // 3214-3215
 0,  0,  0, // 3216-3218
 0,  0,  0, // 3219-3221
 0,  0,  0, // 3222-3224
 0,  0,  0, // 3225-3227
 0,  0,  0, // 3228-3230
 0,  0, // 3231-3232
 0,  0, // 3233-3234
 0,  0, // 3235-3236
 0,  0, // 3237-3238
 0,  0, // 3239-3240
 0,  0, // 3241-3242
 0,  0,  0, // 3243-3245
 0,  0,  0,  0,  0, // 3246-3250
 0,  0,  0, // 3251-3253
 0,  0,  0,  0,  0,  0, // 3254-3259
 0,  0,  0,  0,  0,  0, // 3260-3265
 0,  0,  0,  0,  0, // 3266-3270
 0,  0,  0,  0,  0, // 3271-3275
 0,  0,  0,  0,  0,  0,  0,  0, // 3276-3283
 0,  0,  0,  0,  0,  0,  0, // 3284-3290
 0,  0,  0,  0, // 3291-3294
 0,  0,  0,  0, // 3295-3298
 0,  0,  0,  0,  0,  0, // 3299-3304
 0,  0,  0,  0, // 3305-3308
 0,  0,  0,  0,  0,  0, // 3309-3314
 0,  0,  0,  0,  0,  0,  0,  0, // 3315-3322
 0,  0,  0,  0,  0, // 3323-3327
 0,  0,  0,  0,  0,  0,  0, // 3328-3334
 0,  0,  0,  0,  0, // 3335-3339
 0,  0,  0,  0,  0,  0,  0, // 3340-3346
 0,  0,  0,  0,  0,  0, // 3347-3352
 0,  0,  0,  0,  0,  0,  0,  0, // 3353-3360
 0,  0,  0,  0,  0,  0, // 3361-3366
 0,  0,  0,  0,  0,  0,  0,  0, // 3367-3374
 0,  0,  0,  0, // 3375-3378
 0,  0, // 3379-3380
 0,  0, // 3381-3382
 0,  0,  0, // 3383-3385
 0,  0,  0, // 3386-3388
 0,  0,  0,  0, // 3389-3392
 0,  0,  0,  0,  0, // 3393-3397
 0,  0,  0,  0,  0,  0, // 3398-3403
 0,  0,  0,  0, // 3404-3407
 0,  0,  0,  0,  0, // 3408-3412
 0,  0,  0,  0,  0,  0, // 3413-3418
 0,  0,  0,  0,  0,  0,  0, // 3419-3425
 0,  0, // 3426-3427
 0,  0, // 3428-3429
 0,  0, // 3430-3431
 0,  0, // 3432-3433
 0,  0,  0,  0, // 3434-3437
 0,  0,  0,  0, // 3438-3441
 0,  0,  0,  0, // 3442-3445
 0,  0,  0, // 3446-3448
 0,  0, // 3449-3450
 0,  0, // 3451-3452
 0, // 3453
 0,  0, // 3454-3455
 0,  0, // 3456-3457
 0,  0, // 3458-3459
 0,  0, // 3460-3461
 0,  0, // 3462-3463
 0,  0, // 3464-3465
 0,  0, // 3466-3467
 0, // 3468
 0,  0, // 3469-3470
 0,  0,  0, // 3471-3473
 0,  0, // 3474-3475
 0,  0, // 3476-3477
 0,  0,  0,  0, // 3478-3481
 0,  0, // 3482-3483
 0, // 3484
 0,  0, // 3485-3486
 0,  0, // 3487-3488
 0,  0,  0, // 3489-3491
 0,  0, // 3492-3493
 0,  0,  0, // 3494-3496
 0,  0,  0, // 3497-3499
 0,  0,  0, // 3500-3502
 0,  0, // 3503-3504
 0,  0, // 3505-3506
 0,  0,  0, // 3507-3509
 0,  0,  0,  0, // 3510-3513
 0,  0,  0,  0, // 3514-3517
 0,  0,  0, // 3518-3520
 0,  0,  0, // 3521-3523
 0,  0, // 3524-3525
 0,  0,  0, // 3526-3528
 0,  0, // 3529-3530
 0,  0, // 3531-3532
 0, // 3533
 0, // 3534
 0, // 3535
 0,  0, // 3536-3537
 0,  0,  0,  0, // 3538-3541
 0,  0,  0, // 3542-3544
 0,  0,  0,  0, // 3545-3548
 0,  0,  0,  0, // 3549-3552
 0,  0,  0, // 3553-3555
 0,  0,  0,  0, // 3556-3559
 0,  0,  0, // 3560-3562
 0,  0,  0, // 3563-3565
 0,  0,  0, // 3566-3568
 0,  0,  0,  0, // 3569-3572
 0,  0, // 3573-3574
 0,  0, // 3575-3576
 0,  0, // 3577-3578
 0, // 3579
 0, // 3580
 0, // 3581
 0,  0, // 3582-3583
 0,  0, // 3584-3585
 0,  0,  0, // 3586-3588
 0,  0,  0, // 3589-3591
 0,  0,  0, // 3592-3594
 0,  0,  0, // 3595-3597
 0,  0,  0,  0, // 3598-3601
 0,  0,  0, // 3602-3604
 0,  0,  0, // 3605-3607
 0,  0,  0,  0, // 3608-3611
 0,  0,  0,  0, // 3612-3615
 0,  0,  0,  0, // 3616-3619
 0,  0,  0,  0, // 3620-3623
 0,  0,  0,  0, // 3624-3627
 0,  0,  0,  0, // 3628-3631
 0,  0,  0,  0, // 3632-3635
 0,  0,  0,  0, // 3636-3639
 0,  0,  0,  0, // 3640-3643
 0,  0,  0, // 3644-3646
 0,  0,  0, // 3647-3649
 0,  0,  0, // 3650-3652
 0,  0, // 3653-3654
 0,  0, // 3655-3656
 0,  0, // 3657-3658
 0,  0,  0, // 3659-3661
 0,  0,  0, // 3662-3664
 0,  0,  0, // 3665-3667
 0,  0,  0, // 3668-3670
 0,  0,  0, // 3671-3673
 0,  0, // 3674-3675
 0,  0,  0, // 3676-3678
 0,  0,  0, // 3679-3681
 0,  0,  0,  0, // 3682-3685
 0,  0,  0, // 3686-3688
 0,  0,  0,  0, // 3689-3692
 0,  0,  0,  0, // 3693-3696
 0,  0,  0, // 3697-3699
 0,  0, // 3700-3701
 0,  0, // 3702-3703
 0,  0, // 3704-3705
 0,  0,  0, // 3706-3708
 0,  0,  0, // 3709-3711
 0,  0, // 3712-3713
 0,  0,  0,  0, // 3714-3717
 0,  0,  0,  0,  0, // 3718-3722
 0,  0,  0,  0,  0, // 3723-3727
 0,  0,  0,  0,  0, // 3728-3732
 0,  0,  0, // 3733-3735
 0,  0,  0, // 3736-3738
 0,  0,  0, // 3739-3741
 0,  0,  0, // 3742-3744
 0,  0,  0, // 3745-3747
 0,  0,  0, // 3748-3750
 0,  0, // 3751-3752
 0,  0, // 3753-3754
 0,  0,  0,  0, // 3755-3758
 0,  0,  0, // 3759-3761
 0,  0,  0,  0, // 3762-3765
 0,  0,  0, // 3766-3768
 0,  0, // 3769-3770
 0,  0, // 3771-3772
 0,  0,  0, // 3773-3775
 0,  0,  0,  0, // 3776-3779
 0, // 3780
 0,  0,  0, // 3781-3783
 0,  0,  0, // 3784-3786
 0,  0,  0, // 3787-3789
 0,  0,  0, // 3790-3792
 0, // 3793
 0,  0,  0, // 3794-3796
 0,  0,  0, // 3797-3799
 0,  0,  0, // 3800-3802
 0,  0,  0, // 3803-3805
 0,  0,  0, // 3806-3808
 0,  0,  0, // 3809-3811
 0,  0, // 3812-3813
 0,  0, // 3814-3815
 0,  0,  0, // 3816-3818
 0,  0,  0, // 3819-3821
 0,  0,  0, // 3822-3824
 0,  0,  0, // 3825-3827
 0,  0,  0, // 3828-3830
 0,  0,  0, // 3831-3833
 0,  0, // 3834-3835
 0,  0, // 3836-3837
 0,  0,  0,  0, // 3838-3841
 0,  0,  0,  0, // 3842-3845
 0,  0, // 3846-3847
 0,  0, // 3848-3849
 0,  0, // 3850-3851
 0,  0, // 3852-3853
 0,  0,  0, // 3854-3856
 0,  0,  0, // 3857-3859
 0,  0,  0, // 3860-3862
 0,  0,  0, // 3863-3865
 0,  0,  0, // 3866-3868
 0,  0,  0, // 3869-3871
 0,  0, // 3872-3873
 0,  0, // 3874-3875
 0,  0,  0, // 3876-3878
 0,  0,  0, // 3879-3881
 0,  0,  0, // 3882-3884
 0,  0,  0, // 3885-3887
 0,  0, // 3888-3889
 0,  0, // 3890-3891
 0,  0,  0, // 3892-3894
 0,  0,  0, // 3895-3897
 0,  0,  0, // 3898-3900
 0,  0,  0, // 3901-3903
 0,  0,  0, // 3904-3906
 0,  0,  0,  0, // 3907-3910
 0,  0,  0,  0, // 3911-3914
 0,  0,  0,  0,  0, // 3915-3919
 0,  0,  0,  0,  0, // 3920-3924
 0,  0,  0,  0,  0,  0, // 3925-3930
 0,  0,  0,  0,  0,  0, // 3931-3936
 0,  0,  0,  0,  0,  0,  0, // 3937-3943
 0,  0,  0,  0, // 3944-3947
 0,  0,  0,  0, // 3948-3951
 0,  0,  0,  0, // 3952-3955
 0,  0, // 3956-3957
 0,  0, // 3958-3959
 0,  0, // 3960-3961
 0,  0, // 3962-3963
 0,  0,  0, // 3964-3966
 0,  0,  0, // 3967-3969
 0,  0,  0, // 3970-3972
 0,  0,  0, // 3973-3975
 0,  0,  0, // 3976-3978
 0,  0,  0, // 3979-3981
 0,  0,  0, // 3982-3984
 0,  0,  0, // 3985-3987
 0,  0,  0, // 3988-3990
 0,  0,  0, // 3991-3993
 0,  0,  0, // 3994-3996
 0,  0,  0, // 3997-3999
 0,  0,  0, // 4000-4002
 0,  0,  0, // 4003-4005
 0,  0,  0, // 4006-4008
 0,  0,  0, // 4009-4011
 0,  0,  0, // 4012-4014
 0,  0,  0, // 4015-4017
 0,  0,  0, // 4018-4020
 0,  0,  0,  0, // 4021-4024
 0,  0,  0,  0, // 4025-4028
 0,  0,  0,  0, // 4029-4032
 0,  0,  0,  0, // 4033-4036
 0,  0,  0,  0, // 4037-4040
 0,  0,  0,  0, // 4041-4044
 0,  0,  0,  0, // 4045-4048
 0,  0,  0,  0, // 4049-4052
 0,  0,  0,  0, // 4053-4056
 0,  0,  0,  0, // 4057-4060
 0,  0,  0,  0, // 4061-4064
 0,  0,  0,  0, // 4065-4068
 0,  0, // 4069-4070
 0,  0, // 4071-4072
 0,  0, // 4073-4074
 0,  0, // 4075-4076
 0,  0, // 4077-4078
 0,  0, // 4079-4080
 0,  0, // 4081-4082
 0,  0, // 4083-4084
 0,  0, // 4085-4086
 0,  0, // 4087-4088
 0,  0, // 4089-4090
 0,  0, // 4091-4092
 0, // 4093
 0,  0,  0, // 4094-4096
 0,  0, // 4097-4098
 0,  0, // 4099-4100
 0,  0, // 4101-4102
 0,  0, // 4103-4104
 0,  0, // 4105-4106
 0,  0, // 4107-4108
 0,  0, // 4109-4110
 0,  0, // 4111-4112
 0,  0,  0, // 4113-4115
 0,  0,  0, // 4116-4118
 0,  0,  0, // 4119-4121
 0,  0,  0, // 4122-4124
 0,  0, // 4125-4126
 0,  0, // 4127-4128
 0, // 4129
 0, // 4130
 0, // 4131
 0,  0, // 4132-4133
 0,  0, // 4134-4135
 0,  0, // 4136-4137
 0,  0, // 4138-4139
 0,  0,  0,  0, // 4140-4143
 0,  0,  0,  0, // 4144-4147
 0,  0,  0,  0, // 4148-4151
 0,  0,  0,  0,  0, // 4152-4156
 0,  0,  0,  0, // 4157-4160
 0,  0,  0,  0,  0, // 4161-4165
 0,  0, // 4166-4167
 0,  0,  0, // 4168-4170
 0,  0,  0, // 4171-4173
 0,  0,  0,  0, // 4174-4177
 0,  0,  0,  0, // 4178-4181
 0,  0,  0,  0, // 4182-4185
 0,  0,  0,  0,  0, // 4186-4190
 0,  0,  0,  0, // 4191-4194
 0,  0,  0, // 4195-4197
 0,  0,  0,  0,  0, // 4198-4202
 0,  0,  0,  0,  0,  0, // 4203-4208
 0,  0,  0,  0,  0,  0, // 4209-4214
 0,  0,  0,  0, // 4215-4218
 0,  0,  0,  0, // 4219-4222
 0,  0,  0,  0,  0, // 4223-4227
 0,  0,  0,  0,  0, // 4228-4232
 0,  0,  0,  0,  0, // 4233-4237
 0,  0,  0,  0,  0, // 4238-4242
 0,  0,  0,  0,  0,  0, // 4243-4248
 0,  0,  0,  0,  0,  0, // 4249-4254
 0,  0, // 4255-4256
 0,  0,  0,  0, // 4257-4260
 0,  0,  0,  0, // 4261-4264
 0,  0,  0,  0,  0,  0, // 4265-4270
 0,  0,  0, // 4271-4273
 0,  0,  0,  0,  0,  0, // 4274-4279
 0,  0,  0,  0,  0,  0,  0,  0, // 4280-4287
 0,  0,  0,  0,  0, // 4288-4292
 0,  0,  0,  0,  0,  0,  0,  0, // 4293-4300
 0,  0,  0,  0, // 4301-4304
 0,  0,  0,  0,  0,  0,  0,  0, // 4305-4312
 0,  0,  0,  0,  0,  0, // 4313-4318
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 4319-4328
 0,  0,  0,  0,  0,  0, // 4329-4334
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 4335-4344
 0,  0,  0,  0,  0, // 4345-4349
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 4350-4359
 0,  0,  0,  0,  0,  0,  0, // 4360-4366
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 4367-4378
 0,  0,  0,  0,  0,  0,  0, // 4379-4385
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 4386-4397
 0,  0,  0, // 4398-4400
 0,  0,  0,  0, // 4401-4404
 0,  0,  0, // 4405-4407
 0,  0,  0,  0, // 4408-4411
 0,  0,  0,  0,  0, // 4412-4416
 0,  0,  0,  0,  0, // 4417-4421
 0,  0,  0,  0,  0,  0,  0, // 4422-4428
 0,  0,  0,  0,  0,  0, // 4429-4434
 0,  0,  0,  0,  0,  0, // 4435-4440
 0,  0,  0,  0,  0,  0,  0,  0, // 4441-4448
 0,  0,  0,  0, // 4449-4452
 0,  0,  0, // 4453-4455
 0,  0,  0,  0,  0,  0, // 4456-4461
 0,  0,  0,  0,  0,  0,  0,  0, // 4462-4469
 0,  0,  0, // 4470-4472
 0,  0,  0,  0,  0, // 4473-4477
 0,  0,  0,  0,  0,  0,  0, // 4478-4484
 0,  0,  0,  0,  0,  0, // 4485-4490
 0,  0,  0,  0,  0,  0,  0,  0, // 4491-4498
 0,  0,  0, // 4499-4501
 0,  0,  0,  0,  0, // 4502-4506
 0,  0,  0,  0, // 4507-4510
 0,  0,  0,  0,  0,  0, // 4511-4516
 0,  0,  0,  0,  0, // 4517-4521
 0,  0,  0,  0,  0,  0,  0, // 4522-4528
 0,  0,  0,  0,  0,  0, // 4529-4534
 0,  0,  0,  0,  0,  0,  0,  0, // 4535-4542
 0,  0,  0, // 4543-4545
 0,  0, // 4546-4547
 0,  0,  0, // 4548-4550
 0,  0, // 4551-4552
 0,  0, // 4553-4554
 0,  0,  0, // 4555-4557
 0,  0,  0,  0, // 4558-4561
 0,  0,  0,  0, // 4562-4565
 0,  0,  0,  0, // 4566-4569
 0,  0, // 4570-4571
 0,  0,  0, // 4572-4574
 0,  0,  0,  0, // 4575-4578
 0,  0,  0,  0, // 4579-4582
 0,  0, // 4583-4584
 0,  0, // 4585-4586
 0, // 4587
 0,  0, // 4588-4589
 0,  0,  0, // 4590-4592
 0,  0,  0, // 4593-4595
 0,  0, // 4596-4597
 0,  0, // 4598-4599
 0, // 4600
 0,  0,  0,  0,  0, // 4601-4605
 0,  0,  0,  0,  0, // 4606-4610
 0,  0,  0,  0,  0, // 4611-4615
 0,  0,  0,  0, // 4616-4619
 0,  0,  0, // 4620-4622
 0,  0,  0, // 4623-4625
 0,  0,  0, // 4626-4628
 0,  0,  0,  0, // 4629-4632
 0,  0,  0,  0, // 4633-4636
 0,  0,  0,  0, // 4637-4640
 0,  0,  0, // 4641-4643
 0,  0,  0, // 4644-4646
 0,  0,  0, // 4647-4649
 0,  0,  0,  0, // 4650-4653
 0, // 4654
 0, // 4655
 0, // 4656
 0,  0, // 4657-4658
 0,  0,  0, // 4659-4661
 0, // 4662
 0, // 4663
 0, // 4664
 0, // 4665
 0, // 4666
 0, // 4667
 0,  0,  0, // 4668-4670
 0, // 4671
 0, // 4672
 0, // 4673
 0,  0,  0, // 4674-4676
 0,  0,  0, // 4677-4679
 0,  0,  0, // 4680-4682
 0,  0,  0, // 4683-4685
 0,  0,  0, // 4686-4688
 0,  0, // 4689-4690
 0,  0,  0, // 4691-4693
 0,  0,  0,  0, // 4694-4697
 0,  0,  0,  0, // 4698-4701
 0,  0,  0, // 4702-4704
 0,  0,  0,  0, // 4705-4708
 0, // 4709
 0,  0,  0,  0, // 4710-4713
 0,  0,  0, // 4714-4716
 0,  0,  0,  0, // 4717-4720
 0,  0,  0, // 4721-4723
 0,  0,  0, // 4724-4726
 0,  0,  0,  0, // 4727-4730
 0,  0,  0, // 4731-4733
 0,  0,  0, // 4734-4736
 0,  0,  0, // 4737-4739
 0,  0, // 4740-4741
 0, // 4742
 0,  0, // 4743-4744
 0,  0,  0, // 4745-4747
 0,  0,  0, // 4748-4750
 0,  0,  0,  0, // 4751-4754
 0,  0,  0,  0, // 4755-4758
 0,  0,  0, // 4759-4761
 0,  0,  0, // 4762-4764
 0,  0,  0, // 4765-4767
 0,  0,  0, // 4768-4770
 0,  0, // 4771-4772
 0,  0, // 4773-4774
 0,  0, // 4775-4776
 0,  0, // 4777-4778
 0,  0,  0, // 4779-4781
 0,  0,  0, // 4782-4784
 0,  0,  0, // 4785-4787
 0,  0,  0, // 4788-4790
 0,  0,  0, // 4791-4793
 0,  0,  0, // 4794-4796
 0,  0,  0, // 4797-4799
 0, // 4800
 0,  0,  0, // 4801-4803
 0,  0,  0, // 4804-4806
 0,  0, // 4807-4808
 0,  0, // 4809-4810
 0,  0, // 4811-4812
 0,  0, // 4813-4814
 0,  0, // 4815-4816
 0,  0, // 4817-4818
 0,  0,  0, // 4819-4821
 0,  0,  0, // 4822-4824
 0,  0, // 4825-4826
 0,  0, // 4827-4828
 0,  0, // 4829-4830
 0,  0,  0, // 4831-4833
 0,  0,  0, // 4834-4836
 0,  0,  0, // 4837-4839
 0,  0,  0, // 4840-4842
 0,  0,  0, // 4843-4845
 0,  0,  0, // 4846-4848
 0,  0, // 4849-4850
 0,  0,  0, // 4851-4853
 0,  0,  0,  0,  0, // 4854-4858
 0,  0,  0,  0, // 4859-4862
 0,  0, // 4863-4864
 0,  0, // 4865-4866
 0,  0,  0, // 4867-4869
 0,  0,  0,  0, // 4870-4873
 0,  0,  0,  0, // 4874-4877
 0,  0,  0, // 4878-4880
 0,  0,  0, // 4881-4883
 0,  0,  0, // 4884-4886
 0,  0,  0,  0, // 4887-4890
 0,  0,  0,  0, // 4891-4894
 0,  0, // 4895-4896
 0,  0, // 4897-4898
 0,  0, // 4899-4900
 0,  0,  0, // 4901-4903
 0,  0, // 4904-4905
 0,  0, // 4906-4907
 0,  0,  0, // 4908-4910
 0,  0,  0, // 4911-4913
 0,  0,  0, // 4914-4916
 0,  0,  0, // 4917-4919
 0,  0,  0, // 4920-4922
 0,  0,  0, // 4923-4925
 0,  0,  0, // 4926-4928
 0,  0,  0, // 4929-4931
 0,  0,  0, // 4932-4934
 0,  0,  0, // 4935-4937
 0,  0,  0, // 4938-4940
 0,  0,  0, // 4941-4943
 0,  0, // 4944-4945
 0,  0,  0, // 4946-4948
 0,  0,  0, // 4949-4951
 0,  0,  0, // 4952-4954
 0,  0,  0, // 4955-4957
 0,  0, // 4958-4959
 0,  0, // 4960-4961
 0,  0, // 4962-4963
 0,  0, // 4964-4965
 0,  0, // 4966-4967
 0,  0,  0, // 4968-4970
 0,  0, // 4971-4972
 0,  0,  0, // 4973-4975
 0,  0, // 4976-4977
 0,  0, // 4978-4979
 0,  0,  0, // 4980-4982
 0,  0,  0, // 4983-4985
 0,  0,  0,  0, // 4986-4989
 0,  0,  0,  0,  0, // 4990-4994
 0,  0,  0,  0,  0,  0, // 4995-5000
 0,  0,  0, // 5001-5003
 0,  0,  0,  0, // 5004-5007
 0,  0,  0,  0,  0, // 5008-5012
 0,  0,  0,  0,  0,  0, // 5013-5018
 0,  0, // 5019-5020
 0,  0, // 5021-5022
 0,  0, // 5023-5024
 0,  0, // 5025-5026
 0,  0,  0,  0, // 5027-5030
 0,  0,  0,  0, // 5031-5034
 0,  0,  0,  0, // 5035-5038
 0,  0,  0, // 5039-5041
 0,  0, // 5042-5043
 0,  0, // 5044-5045
 0, // 5046
 0,  0, // 5047-5048
 0,  0, // 5049-5050
 0,  0, // 5051-5052
 0,  0,  0, // 5053-5055
 0,  0, // 5056-5057
 0,  0, // 5058-5059
 0,  0, // 5060-5061
 0, // 5062
 0, // 5063
 0,  0,  0, // 5064-5066
 0,  0, // 5067-5068
 0,  0, // 5069-5070
 0,  0,  0,  0, // 5071-5074
 0,  0, // 5075-5076
 0, // 5077
 0,  0, // 5078-5079
 0,  0, // 5080-5081
 0,  0,  0, // 5082-5084
 0,  0, // 5085-5086
 0,  0,  0, // 5087-5089
 0,  0,  0, // 5090-5092
 0,  0,  0, // 5093-5095
 0,  0, // 5096-5097
 0,  0, // 5098-5099
 0,  0,  0, // 5100-5102
 0,  0,  0,  0, // 5103-5106
 0,  0,  0,  0, // 5107-5110
 0,  0,  0, // 5111-5113
 0, // 5114
 0, // 5115
 0, // 5116
 0, // 5117
 0, // 5118
 0, // 5119
 0, // 5120
 0, // 5121
 0,  0, // 5122-5123
 0,  0,  0,  0, // 5124-5127
 0,  0,  0, // 5128-5130
 0,  0,  0,  0, // 5131-5134
 0,  0,  0,  0, // 5135-5138
 0,  0,  0, // 5139-5141
 0,  0,  0,  0, // 5142-5145
 0,  0,  0, // 5146-5148
 0,  0,  0, // 5149-5151
 0,  0,  0, // 5152-5154
 0,  0,  0,  0, // 5155-5158
 0,  0, // 5159-5160
 0,  0, // 5161-5162
 0, // 5163
 0, // 5164
 0, // 5165
 0, // 5166
 0,  0, // 5167-5168
 0,  0, // 5169-5170
 0,  0,  0, // 5171-5173
 0,  0,  0, // 5174-5176
 0,  0,  0, // 5177-5179
 0,  0,  0, // 5180-5182
 0,  0,  0,  0, // 5183-5186
 0,  0,  0, // 5187-5189
 0,  0,  0, // 5190-5192
 0,  0,  0,  0, // 5193-5196
 0,  0,  0,  0, // 5197-5200
 0,  0,  0,  0, // 5201-5204
 0,  0,  0,  0, // 5205-5208
 0,  0,  0,  0, // 5209-5212
 0,  0,  0,  0, // 5213-5216
 0,  0,  0,  0, // 5217-5220
 0,  0,  0,  0, // 5221-5224
 0,  0,  0,  0, // 5225-5228
 0,  0,  0, // 5229-5231
 0,  0,  0, // 5232-5234
 0,  0,  0, // 5235-5237
 0,  0,  0, // 5238-5240
 0,  0, // 5241-5242
 0,  0, // 5243-5244
 0,  0, // 5245-5246
 0,  0,  0, // 5247-5249
 0,  0,  0, // 5250-5252
 0,  0,  0, // 5253-5255
 0,  0,  0, // 5256-5258
 0,  0,  0, // 5259-5261
 0,  0, // 5262-5263
 0,  0,  0, // 5264-5266
 0,  0,  0, // 5267-5269
 0,  0,  0,  0, // 5270-5273
 0,  0,  0, // 5274-5276
 0,  0,  0,  0, // 5277-5280
 0,  0,  0,  0, // 5281-5284
 0,  0,  0, // 5285-5287
 0,  0, // 5288-5289
 0,  0, // 5290-5291
 0,  0, // 5292-5293
 0,  0,  0, // 5294-5296
 0,  0,  0,  0, // 5297-5300
 0,  0,  0, // 5301-5303
 0,  0,  0,  0, // 5304-5307
 0,  0,  0,  0,  0, // 5308-5312
 0,  0,  0,  0,  0, // 5313-5317
 0,  0,  0,  0,  0, // 5318-5322
 0,  0,  0, // 5323-5325
 0,  0,  0, // 5326-5328
 0,  0,  0, // 5329-5331
 0,  0,  0, // 5332-5334
 0,  0,  0, // 5335-5337
 0,  0,  0, // 5338-5340
 0,  0, // 5341-5342
 0,  0, // 5343-5344
 0,  0,  0,  0, // 5345-5348
 0,  0,  0, // 5349-5351
 0,  0,  0,  0, // 5352-5355
 0,  0,  0, // 5356-5358
 0,  0, // 5359-5360
 0,  0, // 5361-5362
 0,  0,  0, // 5363-5365
 0,  0,  0,  0, // 5366-5369
 0, // 5370
 0,  0,  0, // 5371-5373
 0,  0,  0, // 5374-5376
 0,  0,  0, // 5377-5379
 0,  0,  0, // 5380-5382
 0, // 5383
 0,  0,  0, // 5384-5386
 0,  0,  0, // 5387-5389
 0,  0,  0, // 5390-5392
 0,  0,  0, // 5393-5395
 0,  0,  0, // 5396-5398
 0,  0,  0, // 5399-5401
 0,  0, // 5402-5403
 0,  0, // 5404-5405
 0,  0,  0, // 5406-5408
 0,  0,  0, // 5409-5411
 0,  0,  0, // 5412-5414
 0,  0,  0, // 5415-5417
 0,  0,  0, // 5418-5420
 0,  0,  0, // 5421-5423
 0,  0, // 5424-5425
 0,  0, // 5426-5427
 0,  0,  0,  0, // 5428-5431
 0,  0,  0,  0, // 5432-5435
 0,  0, // 5436-5437
 0,  0, // 5438-5439
 0,  0, // 5440-5441
 0,  0, // 5442-5443
 0,  0,  0, // 5444-5446
 0,  0,  0, // 5447-5449
 0,  0,  0, // 5450-5452
 0,  0,  0, // 5453-5455
 0,  0,  0, // 5456-5458
 0,  0,  0, // 5459-5461
 0,  0, // 5462-5463
 0,  0, // 5464-5465
 0,  0,  0, // 5466-5468
 0,  0,  0, // 5469-5471
 0,  0,  0, // 5472-5474
 0,  0,  0, // 5475-5477
 0,  0, // 5478-5479
 0,  0, // 5480-5481
 0,  0,  0, // 5482-5484
 0,  0,  0, // 5485-5487
 0,  0,  0, // 5488-5490
 0,  0,  0, // 5491-5493
 0,  0,  0, // 5494-5496
 0,  0,  0, // 5497-5499
 0,  0,  0,  0, // 5500-5503
 0,  0,  0,  0, // 5504-5507
 0,  0,  0,  0,  0, // 5508-5512
 0,  0,  0,  0,  0, // 5513-5517
 0,  0,  0,  0,  0,  0, // 5518-5523
 0,  0,  0,  0,  0,  0, // 5524-5529
 0,  0,  0,  0, // 5530-5533
 0,  0,  0,  0, // 5534-5537
 0,  0,  0,  0, // 5538-5541
 0,  0, // 5542-5543
 0,  0, // 5544-5545
 0,  0, // 5546-5547
 0,  0, // 5548-5549
 0,  0,  0, // 5550-5552
 0,  0,  0, // 5553-5555
 0,  0,  0, // 5556-5558
 0,  0,  0, // 5559-5561
 0,  0,  0, // 5562-5564
 0,  0,  0, // 5565-5567
 0,  0,  0, // 5568-5570
 0,  0,  0, // 5571-5573
 0,  0,  0, // 5574-5576
 0,  0,  0, // 5577-5579
 0,  0,  0, // 5580-5582
 0,  0,  0, // 5583-5585
 0,  0,  0, // 5586-5588
 0,  0,  0, // 5589-5591
 0,  0,  0, // 5592-5594
 0,  0,  0, // 5595-5597
 0,  0,  0, // 5598-5600
 0,  0,  0, // 5601-5603
 0,  0,  0, // 5604-5606
 0,  0,  0, // 5607-5609
 0,  0,  0, // 5610-5612
 0,  0,  0, // 5613-5615
 0,  0,  0,  0, // 5616-5619
 0,  0,  0,  0, // 5620-5623
 0,  0,  0, // 5624-5626
 0,  0,  0, // 5627-5629
 0,  0,  0, // 5630-5632
 0,  0,  0,  0, // 5633-5636
 0,  0,  0,  0, // 5637-5640
 0,  0,  0, // 5641-5643
 0,  0,  0, // 5644-5646
 0,  0, // 5647-5648
 0,  0, // 5649-5650
 0,  0, // 5651-5652
 0,  0, // 5653-5654
 0,  0, // 5655-5656
 0,  0, // 5657-5658
 0,  0, // 5659-5660
 0,  0, // 5661-5662
 0,  0, // 5663-5664
 0,  0, // 5665-5666
 0,  0, // 5667-5668
 0,  0, // 5669-5670
 0,  0, // 5671-5672
 0,  0, // 5673-5674
 0, // 5675
 0,  0,  0, // 5676-5678
 0,  0, // 5679-5680
 0,  0, // 5681-5682
 0,  0, // 5683-5684
 0,  0, // 5685-5686
 0,  0, // 5687-5688
 0,  0, // 5689-5690
 0,  0, // 5691-5692
 0,  0, // 5693-5694
 0,  0, // 5695-5696
 0,  0,  0, // 5697-5699
 0,  0, // 5700-5701
 0,  0, // 5702-5703
 0,  0, // 5704-5705
 0,  0, // 5706-5707
 0, // 5708
 0, // 5709
 0, // 5710
 0,  0, // 5711-5712
 0,  0, // 5713-5714
 0,  0, // 5715-5716
 0,  0, // 5717-5718
 0,  0,  0,  0, // 5719-5722
 0,  0,  0, // 5723-5725
 0,  0,  0,  0, // 5726-5729
 0,  0,  0,  0,  0, // 5730-5734
 0,  0,  0,  0, // 5735-5738
 0,  0,  0,  0,  0, // 5739-5743
 0,  0,  0, // 5744-5746
 0,  0, // 5747-5748
 0,  0,  0, // 5749-5751
 0,  0,  0, // 5752-5754
 0 // End bypass tables
};

static const llvm::InstrItinerary *NoItineraries = 0;

static const llvm::InstrItinerary ARMV6Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 1, 2, 1, 3 }, // 1 IIC_iALUi_WriteALU_ReadALU
  { 1, 1, 2, 3, 6 }, // 2 IIC_iALUr_WriteALU_ReadALU_ReadALU
  { 1, 2, 3, 6, 10 }, // 3 IIC_iALUsr_WriteALUsi_ReadALU
  { 1, 2, 3, 10, 14 }, // 4 IIC_iALUsr_WriteALUsr_ReadALUsr
  { 1, 2, 3, 14, 18 }, // 5 IIC_iALUsr_WriteALUSsr_ReadALUsr
  { 1, 1, 2, 18, 20 }, // 6 IIC_iBITi_WriteALU_ReadALU
  { 1, 1, 2, 20, 23 }, // 7 IIC_iBITr_WriteALU_ReadALU_ReadALU
  { 1, 2, 3, 23, 27 }, // 8 IIC_iBITsr_WriteALUsi_ReadALU
  { 1, 2, 3, 27, 31 }, // 9 IIC_iBITsr_WriteALUsr_ReadALUsr
  { 1, 1, 2, 0, 0 }, // 10 IIC_Br_WriteBr
  { 1, 1, 2, 31, 33 }, // 11 IIC_iUNAsi
  { 1, 1, 2, 0, 0 }, // 12 IIC_Br_WriteBrL
  { 0, 0, 0, 0, 0 }, // 13 WriteBrL
  { 1, 1, 2, 0, 0 }, // 14 IIC_Br_WriteBrTbl
  { 0, 0, 0, 0, 0 }, // 15 WriteBr
  { 1, 1, 2, 33, 35 }, // 16 IIC_iUNAr_WriteALU
  { 1, 1, 2, 35, 36 }, // 17 IIC_iCMPi_WriteCMP_ReadALU
  { 1, 1, 2, 36, 38 }, // 18 IIC_iCMPr_WriteCMP_ReadALU_ReadALU
  { 1, 2, 3, 38, 41 }, // 19 IIC_iCMPsr_WriteCMPsi_ReadALU
  { 1, 2, 3, 41, 44 }, // 20 IIC_iCMPsr_WriteCMPsr_ReadALU
  { 1, 1, 2, 44, 46 }, // 21 IIC_fpUNA64
  { 1, 1, 2, 46, 48 }, // 22 IIC_fpUNA32
  { 1, 1, 2, 48, 49 }, // 23 IIC_fpSTAT
  { 1, 3, 4, 49, 54 }, // 24 IIC_iLoad_m
  { 1, 3, 4, 54, 59 }, // 25 IIC_iLoad_mu
  { 1, 4, 6, 59, 64 }, // 26 IIC_iLoad_mBr
  { 1, 1, 2, 64, 68 }, // 27 IIC_iLoad_bh_ru
  { 1, 1, 2, 68, 71 }, // 28 IIC_iLoad_bh_iu
  { 1, 1, 2, 71, 74 }, // 29 IIC_iLoad_bh_r
  { 1, 2, 3, 74, 77 }, // 30 IIC_iLoad_bh_si
  { 1, 1, 2, 77, 80 }, // 31 IIC_iLoad_d_r
  { 1, 1, 2, 80, 84 }, // 32 IIC_iLoad_d_ru
  { 1, 1, 2, 84, 88 }, // 33 IIC_iLoad_ru
  { 1, 1, 2, 88, 91 }, // 34 IIC_iLoad_iu
  { 1, 1, 2, 91, 94 }, // 35 IIC_iLoad_r
  { 1, 2, 3, 94, 97 }, // 36 IIC_iLoad_si
  { 1, 2, 3, 97, 101 }, // 37 IIC_iMAC32
  { 1, 1, 2, 101, 102 }, // 38 IIC_iCMOVi_WriteALU
  { 1, 1, 2, 102, 103 }, // 39 IIC_iMOVi_WriteALU
  { 1, 6, 8, 103, 104 }, // 40 IIC_iCMOVix2
  { 1, 1, 2, 104, 106 }, // 41 IIC_iCMOVr_WriteALU
  { 1, 1, 2, 106, 109 }, // 42 IIC_iCMOVsr_WriteALU
  { 1, 6, 8, 109, 110 }, // 43 IIC_iMOVix2
  { 1, 8, 11, 110, 111 }, // 44 IIC_iMOVix2addpc
  { 1, 8, 11, 111, 112 }, // 45 IIC_iMOVix2ld
  { 1, 1, 2, 112, 114 }, // 46 IIC_iMOVr_WriteALU
  { 1, 2, 3, 114, 117 }, // 47 IIC_iMOVsr_WriteALU
  { 1, 1, 2, 117, 119 }, // 48 IIC_iMOVsi_WriteALU
  { 1, 2, 3, 119, 122 }, // 49 IIC_iMUL32
  { 1, 1, 2, 122, 123 }, // 50 IIC_iMVNi_WriteALU
  { 1, 1, 2, 123, 125 }, // 51 IIC_iMVNr_WriteALU
  { 1, 2, 3, 125, 128 }, // 52 IIC_iMVNsr_WriteALU
  { 1, 1, 2, 128, 131 }, // 53 IIC_iALUr_WriteALU_ReadALU
  { 1, 1, 2, 131, 134 }, // 54 IIC_iStore_r
  { 1, 1, 2, 134, 137 }, // 55 IIC_iStore_bh_r
  { 1, 1, 2, 137, 140 }, // 56 IIC_iALUsi_WriteALUsi_ReadALU
  { 1, 1, 2, 140, 143 }, // 57 IIC_iBITsi_WriteALUsi_ReadALU
  { 0, 0, 0, 0, 0 }, // 58 IIC_Preload_WritePreLd
  { 0, 0, 0, 0, 0 }, // 59 IIC_iDIV
  { 1, 1, 2, 143, 147 }, // 60 IIC_iMAC16
  { 1, 3, 4, 147, 151 }, // 61 IIC_iMAC64
  { 1, 1, 2, 151, 154 }, // 62 IIC_iMUL16
  { 1, 3, 4, 154, 157 }, // 63 IIC_iMUL64
  { 1, 3, 4, 0, 0 }, // 64 IIC_iStore_m
  { 1, 3, 4, 157, 158 }, // 65 IIC_iStore_mu
  { 1, 1, 2, 158, 162 }, // 66 IIC_iStore_bh_ru
  { 1, 1, 2, 162, 165 }, // 67 IIC_iStore_bh_iu
  { 1, 1, 2, 165, 169 }, // 68 IIC_iStore_ru
  { 1, 2, 3, 169, 172 }, // 69 IIC_iStore_bh_si
  { 1, 1, 2, 172, 175 }, // 70 IIC_iStore_d_r
  { 1, 1, 2, 175, 179 }, // 71 IIC_iStore_d_ru
  { 1, 1, 2, 179, 182 }, // 72 IIC_iStore_iu
  { 1, 2, 3, 182, 185 }, // 73 IIC_iStore_si
  { 1, 1, 2, 185, 188 }, // 74 IIC_iEXTAr_WriteALUsr
  { 1, 1, 2, 188, 190 }, // 75 IIC_iEXTr_WriteALUsi
  { 1, 1, 2, 190, 191 }, // 76 IIC_iTSTi_WriteCMP_ReadALU
  { 1, 1, 2, 191, 193 }, // 77 IIC_iTSTr_WriteCMP_ReadALU_ReadALU
  { 1, 2, 3, 193, 196 }, // 78 IIC_iTSTsr_WriteCMPsi_ReadALU
  { 1, 2, 3, 196, 199 }, // 79 IIC_iTSTsr_WriteCMPsr_ReadALU
  { 0, 0, 0, 0, 0 }, // 80 WriteALU_ReadALU_ReadALU
  { 0, 0, 0, 0, 0 }, // 81 IIC_VABAD
  { 0, 0, 0, 0, 0 }, // 82 IIC_VABAQ
  { 0, 0, 0, 0, 0 }, // 83 IIC_VSUBi4Q
  { 0, 0, 0, 0, 0 }, // 84 IIC_VBIND
  { 0, 0, 0, 0, 0 }, // 85 IIC_VBINQ
  { 0, 0, 0, 0, 0 }, // 86 IIC_VSUBi4D
  { 0, 0, 0, 0, 0 }, // 87 IIC_VUNAD
  { 0, 0, 0, 0, 0 }, // 88 IIC_VUNAQ
  { 0, 0, 0, 0, 0 }, // 89 IIC_VUNAiQ
  { 0, 0, 0, 0, 0 }, // 90 IIC_VUNAiD
  { 1, 1, 2, 199, 202 }, // 91 IIC_fpALU64
  { 0, 0, 0, 0, 0 }, // 92 IIC_VBINi4D
  { 0, 0, 0, 0, 0 }, // 93 IIC_VSHLiD
  { 1, 1, 2, 202, 205 }, // 94 IIC_fpALU32
  { 0, 0, 0, 0, 0 }, // 95 IIC_VSUBiD
  { 0, 0, 0, 0, 0 }, // 96 IIC_VBINiQ
  { 0, 0, 0, 0, 0 }, // 97 IIC_VBINiD
  { 0, 0, 0, 0, 0 }, // 98 IIC_VMOVImm
  { 0, 0, 0, 0, 0 }, // 99 IIC_VCNTiD
  { 0, 0, 0, 0, 0 }, // 100 IIC_VCNTiQ
  { 1, 1, 2, 205, 207 }, // 101 IIC_fpCMP64
  { 1, 1, 2, 207, 209 }, // 102 IIC_fpCMP32
  { 0, 0, 0, 0, 0 }, // 103 IIC_fpCVTSH
  { 0, 0, 0, 0, 0 }, // 104 IIC_fpCVTHS
  { 1, 1, 2, 209, 211 }, // 105 IIC_fpCVTDS
  { 1, 1, 2, 211, 213 }, // 106 IIC_fpCVTSD
  { 1, 11, 12, 213, 216 }, // 107 IIC_fpDIV64
  { 1, 12, 13, 216, 219 }, // 108 IIC_fpDIV32
  { 0, 0, 0, 0, 0 }, // 109 IIC_VMOVIS
  { 0, 0, 0, 0, 0 }, // 110 IIC_VMOVD
  { 0, 0, 0, 0, 0 }, // 111 IIC_VMOVQ
  { 0, 0, 0, 0, 0 }, // 112 IIC_VEXTD
  { 0, 0, 0, 0, 0 }, // 113 IIC_VEXTQ
  { 1, 2, 3, 219, 223 }, // 114 IIC_fpFMAC64
  { 1, 1, 2, 223, 227 }, // 115 IIC_fpFMAC32
  { 0, 0, 0, 0, 0 }, // 116 IIC_VFMACD
  { 0, 0, 0, 0, 0 }, // 117 IIC_VFMACQ
  { 0, 0, 0, 0, 0 }, // 118 IIC_VMOVSI
  { 0, 0, 0, 0, 0 }, // 119 IIC_VBINi4Q
  { 0, 0, 0, 0, 0 }, // 120 IIC_VLD1dup
  { 0, 0, 0, 0, 0 }, // 121 IIC_VLD1dupu
  { 0, 0, 0, 0, 0 }, // 122 IIC_VLD1ln
  { 0, 0, 0, 0, 0 }, // 123 IIC_VLD1lnu
  { 0, 0, 0, 0, 0 }, // 124 IIC_VLD1
  { 0, 0, 0, 0, 0 }, // 125 IIC_VLD1x4
  { 0, 0, 0, 0, 0 }, // 126 IIC_VLD1x2u
  { 0, 0, 0, 0, 0 }, // 127 IIC_VLD1x3
  { 0, 0, 0, 0, 0 }, // 128 IIC_VLD1u
  { 0, 0, 0, 0, 0 }, // 129 IIC_VLD1x2
  { 0, 0, 0, 0, 0 }, // 130 IIC_VLD2dup
  { 0, 0, 0, 0, 0 }, // 131 IIC_VLD2dupu
  { 0, 0, 0, 0, 0 }, // 132 IIC_VLD2ln
  { 0, 0, 0, 0, 0 }, // 133 IIC_VLD2lnu
  { 0, 0, 0, 0, 0 }, // 134 IIC_VLD2
  { 0, 0, 0, 0, 0 }, // 135 IIC_VLD2u
  { 0, 0, 0, 0, 0 }, // 136 IIC_VLD2x2
  { 0, 0, 0, 0, 0 }, // 137 IIC_VLD2x2u
  { 0, 0, 0, 0, 0 }, // 138 IIC_VLD3dup
  { 0, 0, 0, 0, 0 }, // 139 IIC_VLD3dupu
  { 0, 0, 0, 0, 0 }, // 140 IIC_VLD3ln
  { 0, 0, 0, 0, 0 }, // 141 IIC_VLD3lnu
  { 0, 0, 0, 0, 0 }, // 142 IIC_VLD3
  { 0, 0, 0, 0, 0 }, // 143 IIC_VLD3u
  { 0, 0, 0, 0, 0 }, // 144 IIC_VLD4dup
  { 0, 0, 0, 0, 0 }, // 145 IIC_VLD4dupu
  { 0, 0, 0, 0, 0 }, // 146 IIC_VLD4ln
  { 0, 0, 0, 0, 0 }, // 147 IIC_VLD4lnu
  { 0, 0, 0, 0, 0 }, // 148 IIC_VLD4
  { 0, 0, 0, 0, 0 }, // 149 IIC_VLD4u
  { 1, 3, 4, 227, 232 }, // 150 IIC_fpLoad_mu
  { 1, 3, 4, 232, 236 }, // 151 IIC_fpLoad_m
  { 1, 1, 2, 236, 239 }, // 152 IIC_fpLoad64
  { 1, 1, 2, 239, 242 }, // 153 IIC_fpLoad32
  { 1, 2, 3, 242, 246 }, // 154 IIC_fpMAC64
  { 0, 0, 0, 0, 0 }, // 155 IIC_VMACi32D
  { 0, 0, 0, 0, 0 }, // 156 IIC_VMACi16D
  { 1, 1, 2, 246, 250 }, // 157 IIC_fpMAC32
  { 0, 0, 0, 0, 0 }, // 158 IIC_VMACD
  { 0, 0, 0, 0, 0 }, // 159 IIC_VMACQ
  { 0, 0, 0, 0, 0 }, // 160 IIC_VMACi32Q
  { 0, 0, 0, 0, 0 }, // 161 IIC_VMACi16Q
  { 1, 1, 2, 250, 253 }, // 162 IIC_fpMOVID
  { 0, 0, 0, 0, 0 }, // 163 IIC_VQUNAiD
  { 0, 0, 0, 0, 0 }, // 164 IIC_VMOVN
  { 1, 1, 2, 253, 256 }, // 165 IIC_fpMOVDI
  { 1, 1, 2, 256, 258 }, // 166 IIC_fpMOVSI
  { 1, 1, 2, 258, 260 }, // 167 IIC_fpMOVIS
  { 1, 2, 3, 260, 263 }, // 168 IIC_fpMUL64
  { 0, 0, 0, 0, 0 }, // 169 IIC_VMULi16D
  { 0, 0, 0, 0, 0 }, // 170 IIC_VMULi32D
  { 1, 1, 2, 263, 266 }, // 171 IIC_fpMUL32
  { 0, 0, 0, 0, 0 }, // 172 IIC_VFMULD
  { 0, 0, 0, 0, 0 }, // 173 IIC_VFMULQ
  { 0, 0, 0, 0, 0 }, // 174 IIC_VMULi16Q
  { 0, 0, 0, 0, 0 }, // 175 IIC_VMULi32Q
  { 0, 0, 0, 0, 0 }, // 176 IIC_VSHLiQ
  { 0, 0, 0, 0, 0 }, // 177 IIC_VPALiQ
  { 0, 0, 0, 0, 0 }, // 178 IIC_VPALiD
  { 0, 0, 0, 0, 0 }, // 179 IIC_VPBIND
  { 0, 0, 0, 0, 0 }, // 180 IIC_VQUNAiQ
  { 0, 0, 0, 0, 0 }, // 181 IIC_VSHLi4Q
  { 0, 0, 0, 0, 0 }, // 182 IIC_VSHLi4D
  { 0, 0, 0, 0, 0 }, // 183 IIC_VRECSD
  { 0, 0, 0, 0, 0 }, // 184 IIC_VRECSQ
  { 0, 0, 0, 0, 0 }, // 185 IIC_VMOVISL
  { 1, 1, 2, 266, 268 }, // 186 IIC_fpCVTID_WriteCvtFP
  { 1, 1, 2, 268, 270 }, // 187 IIC_fpCVTIS_WriteCvtFP
  { 1, 1, 2, 270, 272 }, // 188 IIC_fpCVTID
  { 1, 1, 2, 272, 274 }, // 189 IIC_fpCVTIS
  { 1, 11, 12, 274, 277 }, // 190 IIC_fpSQRT64
  { 1, 12, 13, 277, 280 }, // 191 IIC_fpSQRT32
  { 0, 0, 0, 0, 0 }, // 192 IIC_VST1ln
  { 0, 0, 0, 0, 0 }, // 193 IIC_VST1lnu
  { 0, 0, 0, 0, 0 }, // 194 IIC_VST1
  { 0, 0, 0, 0, 0 }, // 195 IIC_VST1x4
  { 0, 0, 0, 0, 0 }, // 196 IIC_VLD1x4u
  { 0, 0, 0, 0, 0 }, // 197 IIC_VST1x3
  { 0, 0, 0, 0, 0 }, // 198 IIC_VLD1x3u
  { 0, 0, 0, 0, 0 }, // 199 IIC_VST1x4u
  { 0, 0, 0, 0, 0 }, // 200 IIC_VST1x3u
  { 0, 0, 0, 0, 0 }, // 201 IIC_VST1x2
  { 0, 0, 0, 0, 0 }, // 202 IIC_VST2ln
  { 0, 0, 0, 0, 0 }, // 203 IIC_VST2lnu
  { 0, 0, 0, 0, 0 }, // 204 IIC_VST2
  { 0, 0, 0, 0, 0 }, // 205 IIC_VST2x2
  { 0, 0, 0, 0, 0 }, // 206 IIC_VST2x2u
  { 0, 0, 0, 0, 0 }, // 207 IIC_VST3ln
  { 0, 0, 0, 0, 0 }, // 208 IIC_VST3lnu
  { 0, 0, 0, 0, 0 }, // 209 IIC_VST3
  { 0, 0, 0, 0, 0 }, // 210 IIC_VST3u
  { 0, 0, 0, 0, 0 }, // 211 IIC_VST4ln
  { 0, 0, 0, 0, 0 }, // 212 IIC_VST4lnu
  { 0, 0, 0, 0, 0 }, // 213 IIC_VST4
  { 0, 0, 0, 0, 0 }, // 214 IIC_VST4u
  { 1, 3, 4, 280, 284 }, // 215 IIC_fpStore_m
  { 1, 1, 2, 284, 287 }, // 216 IIC_fpStore64
  { 1, 1, 2, 287, 290 }, // 217 IIC_fpStore32
  { 0, 0, 0, 0, 0 }, // 218 IIC_VSUBiQ
  { 0, 0, 0, 0, 0 }, // 219 IIC_VTB1
  { 0, 0, 0, 0, 0 }, // 220 IIC_VTB2
  { 0, 0, 0, 0, 0 }, // 221 IIC_VTB3
  { 0, 0, 0, 0, 0 }, // 222 IIC_VTB4
  { 0, 0, 0, 0, 0 }, // 223 IIC_VTBX1
  { 0, 0, 0, 0, 0 }, // 224 IIC_VTBX2
  { 0, 0, 0, 0, 0 }, // 225 IIC_VTBX3
  { 0, 0, 0, 0, 0 }, // 226 IIC_VTBX4
  { 1, 1, 2, 290, 292 }, // 227 IIC_fpCVTDI_WriteCvtFP
  { 1, 1, 2, 292, 294 }, // 228 IIC_fpCVTSI_WriteCvtFP
  { 1, 1, 2, 294, 296 }, // 229 IIC_fpCVTDI
  { 1, 1, 2, 296, 298 }, // 230 IIC_fpCVTSI
  { 0, 0, 0, 0, 0 }, // 231 IIC_VPERMD
  { 0, 0, 0, 0, 0 }, // 232 IIC_VPERMQ
  { 0, 0, 0, 0, 0 }, // 233 IIC_VPERMQ3
  { 1, 1, 2, 298, 301 }, // 234 IIC_iALUsi_WriteALUsi_ReadALUsr
  { 1, 1, 2, 301, 303 }, // 235 IIC_iBITi
  { 1, 1, 2, 303, 305 }, // 236 IIC_iCMPsi_WriteCMPsi_ReadALU_ReadALU
  { 1, 1, 2, 305, 306 }, // 237 IIC_iCMPi_WriteCMP
  { 1, 1, 2, 306, 308 }, // 238 IIC_iCMPr_WriteCMP
  { 1, 1, 2, 308, 310 }, // 239 IIC_iCMPsi_WriteCMPsi
  { 1, 1, 2, 0, 0 }, // 240 IIC_iALUx
  { 1, 1, 2, 310, 312 }, // 241 IIC_iLoad_bh_i
  { 1, 1, 2, 312, 314 }, // 242 IIC_iLoad_d_i
  { 1, 1, 2, 314, 316 }, // 243 IIC_iLoad_i
  { 1, 6, 8, 316, 318 }, // 244 IIC_iLoadiALU
  { 1, 1, 2, 318, 320 }, // 245 IIC_iCMOVsi_WriteALU
  { 1, 1, 2, 320, 321 }, // 246 IIC_iMOVi
  { 1, 1, 2, 321, 323 }, // 247 IIC_iMVNsi_WriteALU
  { 0, 0, 0, 0, 0 }, // 248 IIC_iALUsir_WriteALUsi_ReadALU
  { 1, 1, 2, 323, 325 }, // 249 IIC_iStore_bh_i
  { 1, 1, 2, 325, 327 }, // 250 IIC_iStore_i
  { 1, 2, 3, 327, 331 }, // 251 IIC_iEXTAsr
  { 1, 1, 2, 331, 333 }, // 252 IIC_iEXTr
  { 1, 1, 2, 333, 334 }, // 253 IIC_iTSTi_WriteCMP
  { 1, 1, 2, 334, 336 }, // 254 IIC_iTSTr_WriteCMP
  { 1, 1, 2, 336, 338 }, // 255 IIC_iTSTsi_WriteCMPsi
  { 1, 1, 2, 338, 341 }, // 256 IIC_iALUr_WriteALU
  { 1, 1, 2, 341, 343 }, // 257 IIC_iALUi_WriteALU
  { 1, 1, 2, 343, 346 }, // 258 IIC_iBITr_WriteALU
  { 1, 3, 4, 346, 349 }, // 259 IIC_iPop
  { 1, 4, 6, 349, 352 }, // 260 IIC_iPop_Br_WriteBrL
  { 1, 1, 2, 352, 354 }, // 261 IIC_iTSTr_WriteALU
  { 1, 1, 2, 354, 356 }, // 262 ANDri_BICri_EORri_ORRri
  { 1, 1, 2, 356, 359 }, // 263 ANDrr_BICrr_EORrr_ORRrr
  { 1, 2, 3, 359, 363 }, // 264 ANDrsi_BICrsi_EORrsi_ORRrsi
  { 1, 2, 3, 363, 367 }, // 265 ANDrsr_BICrsr_EORrsr_ORRrsr
  { 1, 1, 2, 367, 370 }, // 266 MOVCCsi_MOVCCsr
  { 1, 2, 3, 370, 373 }, // 267 MOVsi_MOVsr
  { 1, 1, 2, 373, 375 }, // 268 MOVsra_flag_MOVsrl_flag
  { 1, 2, 3, 375, 378 }, // 269 MVNsr
  { 1, 1, 2, 378, 380 }, // 270 MVNr
  { 1, 6, 8, 380, 381 }, // 271 MOVCCi32imm
  { 1, 6, 8, 381, 382 }, // 272 MOV_ga_dyn_MOVi32imm
  { 1, 8, 11, 382, 383 }, // 273 MOV_ga_pcrel
  { 1, 8, 11, 383, 384 }, // 274 MOV_ga_pcrel_ldr
  { 0, 0, 0, 0, 0 }, // 275 SEL
  { 1, 1, 2, 384, 386 }, // 276 BFC_BFI_SBFX_UBFX
  { 1, 2, 3, 386, 390 }, // 277 MLA_MLAv5_MLS_SMMLA_SMMLAR_SMMLS_SMMLSR
  { 1, 2, 3, 390, 393 }, // 278 MUL_MULv5_SMMUL_SMMULR
  { 1, 3, 4, 393, 397 }, // 279 SMLAL_SMLALBB_SMLALBT_SMLALTB_SMLALTT_SMLALv5_UMAAL_UMAALv5_UMLAL_UMLALv5
  { 1, 3, 4, 397, 400 }, // 280 SMULL_SMULLv5_UMULL_UMULLv5
  { 0, 0, 0, 0, 0 }, // 281 SMLAD_SMLADX_SMLALD_SMLALDX_SMLSD_SMLSDX_SMLSLD_SMLSLDX_SMUAD_SMUADX_SMUSD_SMUSDX
  { 1, 1, 2, 400, 403 }, // 282 SMULBB_SMULBT_SMULTB_SMULTT_SMULWB_SMULWT
  { 1, 1, 2, 403, 407 }, // 283 SMLABB_SMLABT_SMLATB_SMLATT_SMLAWB_SMLAWT
  { 1, 1, 2, 407, 410 }, // 284 LDRi12_PICLDR
  { 1, 2, 3, 410, 413 }, // 285 LDRrs
  { 1, 1, 2, 413, 416 }, // 286 LDRBi12_LDRH_LDRSB_LDRSH_PICLDRB_PICLDRH_PICLDRSB_PICLDRSH
  { 1, 1, 2, 416, 420 }, // 287 LDRHTi_LDRHTr_LDRH_POST_LDRH_PRE_LDRSBTi_LDRSBTr_LDRSB_POST_LDRSB_PRE_LDRSHTi_LDRSHTr_LDRSH_POST_LDRSH_PRE
  { 1, 1, 2, 420, 422 }, // 288 SXTB_SXTB16_SXTH_UXTB_UXTB16_UXTH
  { 1, 1, 2, 422, 424 }, // 289 t2SXTB_t2SXTB16_t2SXTH_t2UXTB_t2UXTB16_t2UXTH
  { 1, 6, 8, 424, 425 }, // 290 t2MOVCCi32imm
  { 1, 6, 8, 425, 426 }, // 291 t2MOV_ga_dyn_t2MOVi32imm
  { 1, 8, 11, 426, 427 }, // 292 t2MOV_ga_pcrel
  { 1, 1, 2, 427, 428 }, // 293 t2MOVi16_ga_pcrel
  { 0, 0, 0, 0, 0 }, // 294 t2SEL
  { 1, 1, 2, 428, 430 }, // 295 t2BFC_t2SBFX_t2UBFX
  { 1, 1, 2, 430, 432 }, // 296 t2BFI
  { 1, 1, 2, 432, 435 }, // 297 QADD_QADD16_QADD8_QASX_QDADD_QDSUB_QSAX_QSUB_QSUB16_QSUB8_UQADD16_UQADD8_UQASX_UQSAX_UQSUB16_UQSUB8
  { 0, 0, 0, 0, 0 }, // 298 SSAT_SSAT16_USAT_USAT16_t2QADD_t2QADD16_t2QADD8_t2QASX_t2QDADD_t2QDSUB_t2QSAX_t2QSUB_t2QSUB16_t2QSUB8_t2SSAT_t2SSAT16_t2UQADD16_t2UQADD8_t2UQASX_t2UQSAX_t2UQSUB16_t2UQSUB8_t2USAT_t2USAT16
  { 1, 1, 2, 435, 438 }, // 299 SADD16_SADD8_SASX_SSAX_SSUB16_SSUB8_UADD16_UADD8_UASX_USAX_USUB16_USUB8
  { 0, 0, 0, 0, 0 }, // 300 t2SADD16_t2SADD8_t2SASX_t2SSAX_t2SSUB16_t2SSUB8_t2UADD16_t2UADD8_t2UASX_t2USAX_t2USUB16_t2USUB8
  { 1, 1, 2, 438, 441 }, // 301 SHADD16_SHADD8_SHASX_SHSAX_SHSUB16_SHSUB8_UHADD16_UHADD8_UHASX_UHSAX_UHSUB16_UHSUB8
  { 1, 1, 2, 441, 444 }, // 302 SXTAB_SXTAB16_SXTAH_UXTAB_UXTAB16_UXTAH
  { 0, 0, 0, 0, 0 }, // 303 t2SHADD16_t2SHADD8_t2SHASX_t2SHSAX_t2SHSUB16_t2SHSUB8_t2UHADD16_t2UHADD8_t2UHASX_t2UHSAX_t2UHSUB16_t2UHSUB8
  { 1, 2, 3, 444, 448 }, // 304 t2SXTAB_t2SXTAB16_t2SXTAH_t2UXTAB_t2UXTAB16_t2UXTAH
  { 0, 0, 0, 0, 0 }, // 305 USAD8
  { 0, 0, 0, 0, 0 }, // 306 USADA8
  { 0, 0, 0, 0, 0 }, // 307 SMUSD_SMUSDX
  { 1, 2, 3, 448, 451 }, // 308 t2MUL_t2SMMUL_t2SMMULR
  { 1, 1, 2, 451, 454 }, // 309 t2SMULBB_t2SMULBT_t2SMULTB_t2SMULTT_t2SMULWB_t2SMULWT
  { 1, 2, 3, 454, 458 }, // 310 t2SMUSD_t2SMUSDX
  { 1, 2, 3, 458, 462 }, // 311 t2MLA_t2MLS_t2SMMLA_t2SMMLAR_t2SMMLS_t2SMMLSR
  { 0, 0, 0, 0, 0 }, // 312 SMUAD_SMUADX
  { 1, 2, 3, 462, 466 }, // 313 t2SMUAD_t2SMUADX
  { 0, 0, 0, 0, 0 }, // 314 SMLSD_SMLSDX
  { 1, 1, 2, 466, 470 }, // 315 t2SMLABB_t2SMLABT_t2SMLATB_t2SMLATT_t2SMLAWB_t2SMLAWT
  { 1, 2, 3, 470, 474 }, // 316 t2SMLSD_t2SMLSDX
  { 0, 0, 0, 0, 0 }, // 317 SMLAD_SMLADX
  { 1, 2, 3, 474, 478 }, // 318 t2SMLAD_t2SMLADX
  { 1, 3, 4, 478, 481 }, // 319 SMULL_UMULL
  { 1, 3, 4, 481, 484 }, // 320 t2SMULL_t2UMULL
  { 1, 3, 4, 484, 488 }, // 321 t2SMLAL_t2SMLALBB_t2SMLALBT_t2SMLALD_t2SMLALDX_t2SMLALTB_t2SMLALTT_t2SMLSLD_t2SMLSLDX_t2UMAAL_t2UMLAL
  { 0, 0, 0, 0, 0 }, // 322 SDIV_UDIV_t2SDIV_t2UDIV
  { 1, 1, 2, 488, 491 }, // 323 LDRBi12
  { 1, 2, 3, 491, 494 }, // 324 LDRBrs_t2LDRBs_t2LDRHs
  { 0, 0, 0, 0, 0 }, // 325 LDREX_LDREXB_LDREXD_LDREXH_tLDRpci_pic
  { 1, 1, 2, 494, 497 }, // 326 LDRi12
  { 1, 1, 2, 497, 499 }, // 327 t2LDRBi12_t2LDRBi8_t2LDRBpci_t2LDRHi12_t2LDRHi8_t2LDRHpci_tLDRBi_tLDRHi
  { 1, 1, 2, 499, 501 }, // 328 t2LDRi12_t2LDRi8_t2LDRpci_tLDRi_tLDRpci_tLDRspi
  { 1, 6, 8, 501, 503 }, // 329 t2LDRpci_pic
  { 1, 2, 3, 503, 506 }, // 330 t2LDRs
  { 1, 1, 2, 506, 509 }, // 331 tLDRBr_tLDRHr
  { 1, 1, 2, 509, 512 }, // 332 tLDRr
  { 1, 1, 2, 512, 515 }, // 333 LDRH_PICLDRB_PICLDRH
  { 1, 1, 2, 515, 518 }, // 334 LDRcp
  { 1, 1, 2, 518, 520 }, // 335 t2LDRSBi12_t2LDRSBi8_t2LDRSBpci_t2LDRSHi12_t2LDRSHi8_t2LDRSHpci
  { 0, 0, 0, 0, 0 }, // 336 t2LDRSBpcrel_t2LDRSHpcrel
  { 1, 2, 3, 520, 523 }, // 337 t2LDRSBs_t2LDRSHs
  { 1, 1, 2, 523, 526 }, // 338 tLDRSB_tLDRSH
  { 1, 1, 2, 526, 530 }, // 339 LDRBT_POST_IMM_LDRBT_POST_REG_LDRB_POST_REG_LDRB_PRE_REG
  { 1, 1, 2, 530, 533 }, // 340 LDRB_POST_IMM_LDRB_PRE_IMM_t2LDRB_POST_t2LDRB_PRE_t2LDRH_POST_t2LDRH_PRE
  { 1, 1, 2, 533, 537 }, // 341 LDRHTi_LDRHTr_LDRH_POST_LDRH_PRE
  { 1, 1, 2, 537, 541 }, // 342 LDRT_POST_IMM_LDRT_POST_REG_LDR_POST_REG_LDR_PRE_REG
  { 1, 1, 2, 541, 544 }, // 343 LDR_POST_IMM_LDR_PRE_IMM_t2LDR_POST_t2LDR_PRE
  { 1, 1, 2, 544, 546 }, // 344 t2LDRBT_t2LDRHT
  { 1, 1, 2, 546, 548 }, // 345 t2LDRT
  { 1, 1, 2, 548, 550 }, // 346 t2LDRSBT_t2LDRSHT
  { 1, 1, 2, 550, 553 }, // 347 t2LDRSB_POST_t2LDRSB_PRE_t2LDRSH_POST_t2LDRSH_PRE
  { 1, 1, 2, 553, 556 }, // 348 LDRD
  { 1, 1, 2, 556, 558 }, // 349 t2LDRDi8
  { 1, 1, 2, 558, 562 }, // 350 LDRD_POST_LDRD_PRE_t2LDRD_POST_t2LDRD_PRE
  { 1, 3, 4, 562, 567 }, // 351 LDMDA_LDMDB_LDMIA_LDMIB_sysLDMDA_sysLDMDB_sysLDMIA_sysLDMIB_t2LDMDB_t2LDMIA_tLDMIA
  { 1, 3, 4, 567, 572 }, // 352 LDMDA_UPD_LDMDB_UPD_LDMIA_UPD_LDMIB_UPD_sysLDMDA_UPD_sysLDMDB_UPD_sysLDMIA_UPD_sysLDMIB_UPD_t2LDMDB_UPD_t2LDMIA_UPD_tLDMIA_UPD
  { 1, 4, 6, 572, 577 }, // 353 LDMIA_RET_t2LDMIA_RET
  { 1, 3, 4, 577, 580 }, // 354 tPOP
  { 1, 4, 6, 580, 583 }, // 355 tPOP_RET
  { 1, 1, 2, 583, 586 }, // 356 PICSTR_STRi12_tSTRr
  { 1, 1, 2, 586, 589 }, // 357 PICSTRB_PICSTRH_STRBi12_STRH_tSTRBr_tSTRHr
  { 1, 2, 3, 589, 592 }, // 358 STRBrs_t2STRBs_t2STRHs
  { 0, 0, 0, 0, 0 }, // 359 STREX_STREXB_STREXD_STREXH
  { 1, 2, 3, 592, 595 }, // 360 STRrs_t2STRs
  { 1, 1, 2, 595, 597 }, // 361 t2STRBi12_t2STRBi8_t2STRHi12_t2STRHi8_tSTRBi_tSTRHi
  { 1, 1, 2, 597, 599 }, // 362 t2STRi12_t2STRi8_tSTRi_tSTRspi
  { 1, 1, 2, 599, 603 }, // 363 STRBT_POST_IMM_STRBT_POST_REG_STRB_POST_REG_STRB_PRE_REG_STRHTi_STRHTr_STRH_POST_STRH_PRE
  { 1, 1, 2, 603, 606 }, // 364 STRB_POST_IMM_STRB_PRE_IMM_t2STRB_POST_t2STRB_PRE_t2STRH_POST
  { 1, 1, 2, 606, 610 }, // 365 STRBi_preidx_STRBr_preidx_STRH_preidx_STRT_POST_IMM_STRT_POST_REG_STR_POST_REG_STR_PRE_REG_STRi_preidx_STRr_preidx_t2STRB_preidx_t2STRH_preidx_t2STR_preidx
  { 1, 1, 2, 610, 613 }, // 366 STR_POST_IMM_STR_PRE_IMM_t2STRH_PRE_t2STR_POST_t2STR_PRE
  { 1, 1, 2, 613, 615 }, // 367 t2STRBT_t2STRHT
  { 1, 1, 2, 615, 617 }, // 368 t2STRT
  { 1, 1, 2, 617, 620 }, // 369 STRD_t2STRDi8
  { 1, 1, 2, 620, 624 }, // 370 STRD_POST_STRD_PRE_t2STRD_POST_t2STRD_PRE
  { 1, 3, 4, 0, 0 }, // 371 STMDA_STMDB_STMIA_STMIB_sysSTMDA_sysSTMDB_sysSTMIA_sysSTMIB_t2STMDB_t2STMIA
  { 1, 3, 4, 624, 625 }, // 372 STMDA_UPD_STMDB_UPD_STMIA_UPD_STMIB_UPD_sysSTMDA_UPD_sysSTMDB_UPD_sysSTMIA_UPD_sysSTMIB_UPD_t2STMDB_UPD_t2STMIA_UPD_tSTMIA_UPD
  { 1, 3, 4, 0, 0 }, // 373 tPUSH
  { 0, 0, 0, 0, 0 }, // 374 ITasm
  { 1, 1, 2, 0, 0 }, // 375 t2IT
  { 0, 0, 0, 0, 0 }, // 376 VADDLsv2i64_VADDLsv4i32_VADDLsv8i16_VADDLuv2i64_VADDLuv4i32_VADDLuv8i16_VNEGs16d_VNEGs32d_VNEGs8d_VPADDLsv16i8_VPADDLsv2i32_VPADDLsv4i16_VPADDLsv4i32_VPADDLsv8i16_VPADDLsv8i8_VPADDLuv16i8_VPADDLuv2i32_VPADDLuv4i16_VPADDLuv4i32_VPADDLuv8i16_VPADDLuv8i8_VPADDi16_VPADDi32_VPADDi8_VSHLLi16_VSHLLi32_VSHLLi8_VSHLLsv2i64_VSHLLsv4i32_VSHLLsv8i16_VSHLLuv2i64_VSHLLuv4i32_VSHLLuv8i16_VSHLiv16i8_VSHLiv1i64_VSHLiv2i32_VSHLiv2i64_VSHLiv4i16_VSHLiv4i32_VSHLiv8i16_VSHLiv8i8_VSHLsv1i64_VSHLsv2i32_VSHLsv4i16_VSHLsv8i8_VSHLuv1i64_VSHLuv2i32_VSHLuv4i16_VSHLuv8i8_VSHRsv16i8_VSHRsv1i64_VSHRsv2i32_VSHRsv2i64_VSHRsv4i16_VSHRsv4i32_VSHRsv8i16_VSHRsv8i8_VSHRuv16i8_VSHRuv1i64_VSHRuv2i32_VSHRuv2i64_VSHRuv4i16_VSHRuv4i32_VSHRuv8i16_VSHRuv8i8_VSLIv1i64_VSLIv2i32_VSLIv4i16_VSLIv8i8_VSRIv1i64_VSRIv2i32_VSRIv4i16_VSRIv8i8_VSUBLsv2i64_VSUBLsv4i32_VSUBLsv8i16_VSUBLuv2i64_VSUBLuv4i32_VSUBLuv8i16
  { 0, 0, 0, 0, 0 }, // 377 VADDWsv2i64_VADDWsv4i32_VADDWsv8i16_VADDWuv2i64_VADDWuv4i32_VADDWuv8i16_VSUBWsv2i64_VSUBWsv4i32_VSUBWsv8i16_VSUBWuv2i64_VSUBWuv4i32_VSUBWuv8i16_VSUBv1i64_VSUBv2i32_VSUBv4i16_VSUBv8i8
  { 0, 0, 0, 0, 0 }, // 378 VADDv16i8_VADDv2i64_VADDv4i32_VADDv8i16_VANDq_VBICq_VBIFq_VBITq_VEORq_VORNq_VORRq
  { 0, 0, 0, 0, 0 }, // 379 VADDv1i64_VADDv2i32_VADDv4i16_VADDv8i8_VANDd_VBICd_VBIFd_VBITd_VEORd_VORNd_VORRd
  { 0, 0, 0, 0, 0 }, // 380 VBICiv2i32_VBICiv4i16_VBICiv4i32_VBICiv8i16_VORRiv2i32_VORRiv4i16_VORRiv4i32_VORRiv8i16
  { 0, 0, 0, 0, 0 }, // 381 VBSLd_VCLSv2i32_VCLSv4i16_VCLSv8i8_VCLZv2i32_VCLZv4i16_VCLZv8i8_VCNTd
  { 0, 0, 0, 0, 0 }, // 382 VBSLq_VCLSv16i8_VCLSv4i32_VCLSv8i16_VCLZv16i8_VCLZv4i32_VCLZv8i16_VCNTq
  { 0, 0, 0, 0, 0 }, // 383 VHADDsv16i8_VHADDsv4i32_VHADDsv8i16_VHADDuv16i8_VHADDuv4i32_VHADDuv8i16_VRHADDsv16i8_VRHADDsv4i32_VRHADDsv8i16_VRHADDuv16i8_VRHADDuv4i32_VRHADDuv8i16_VTSTv16i8_VTSTv4i32_VTSTv8i16
  { 0, 0, 0, 0, 0 }, // 384 VHADDsv2i32_VHADDsv4i16_VHADDsv8i8_VHADDuv2i32_VHADDuv4i16_VHADDuv8i8_VRHADDsv2i32_VRHADDsv4i16_VRHADDsv8i8_VRHADDuv2i32_VRHADDuv4i16_VRHADDuv8i8_VTSTv2i32_VTSTv4i16_VTSTv8i8
  { 0, 0, 0, 0, 0 }, // 385 VHSUBsv16i8_VHSUBsv4i32_VHSUBsv8i16_VHSUBuv16i8_VHSUBuv4i32_VHSUBuv8i16
  { 0, 0, 0, 0, 0 }, // 386 VHSUBsv2i32_VHSUBsv4i16_VHSUBsv8i8_VHSUBuv2i32_VHSUBuv4i16_VHSUBuv8i8
  { 0, 0, 0, 0, 0 }, // 387 VNEGf32q
  { 0, 0, 0, 0, 0 }, // 388 VNEGfd
  { 0, 0, 0, 0, 0 }, // 389 VNEGs16q_VNEGs32q_VNEGs8q_VSHLsv16i8_VSHLsv2i64_VSHLsv4i32_VSHLsv8i16_VSHLuv16i8_VSHLuv2i64_VSHLuv4i32_VSHLuv8i16_VSLIv16i8_VSLIv2i64_VSLIv4i32_VSLIv8i16_VSRIv16i8_VSRIv2i64_VSRIv4i32_VSRIv8i16
  { 0, 0, 0, 0, 0 }, // 390 VQSHLsiv16i8_VQSHLsiv1i64_VQSHLsiv2i32_VQSHLsiv2i64_VQSHLsiv4i16_VQSHLsiv4i32_VQSHLsiv8i16_VQSHLsiv8i8_VQSHLsuv16i8_VQSHLsuv1i64_VQSHLsuv2i32_VQSHLsuv2i64_VQSHLsuv4i16_VQSHLsuv4i32_VQSHLsuv8i16_VQSHLsuv8i8_VQSHLsv1i64_VQSHLsv2i32_VQSHLsv4i16_VQSHLsv8i8_VQSHLuiv16i8_VQSHLuiv1i64_VQSHLuiv2i32_VQSHLuiv2i64_VQSHLuiv4i16_VQSHLuiv4i32_VQSHLuiv8i16_VQSHLuiv8i8_VQSHLuv1i64_VQSHLuv2i32_VQSHLuv4i16_VQSHLuv8i8
  { 0, 0, 0, 0, 0 }, // 391 VQSHLsv16i8_VQSHLsv2i64_VQSHLsv4i32_VQSHLsv8i16_VQSHLuv16i8_VQSHLuv2i64_VQSHLuv4i32_VQSHLuv8i16
  { 0, 0, 0, 0, 0 }, // 392 VSUBv16i8_VSUBv2i64_VSUBv4i32_VSUBv8i16
  { 0, 0, 0, 0, 0 }, // 393 VEXTd16_VEXTd32_VEXTd8
  { 0, 0, 0, 0, 0 }, // 394 VEXTq16_VEXTq32_VEXTq64_VEXTq8
  { 0, 0, 0, 0, 0 }, // 395 VREV16d8_VREV32d16_VREV32d8_VREV64d16_VREV64d32_VREV64d8
  { 0, 0, 0, 0, 0 }, // 396 VREV16q8_VREV32q16_VREV32q8_VREV64q16_VREV64q32_VREV64q8
  { 0, 0, 0, 0, 0 }, // 397 VABALsv2i64_VABALsv4i32_VABALsv8i16_VABALuv2i64_VABALuv4i32_VABALuv8i16_VABAsv2i32_VABAsv4i16_VABAsv8i8_VABAuv2i32_VABAuv4i16_VABAuv8i8
  { 0, 0, 0, 0, 0 }, // 398 VABAsv16i8_VABAsv4i32_VABAsv8i16_VABAuv16i8_VABAuv4i32_VABAuv8i16
  { 0, 0, 0, 0, 0 }, // 399 VABSfd
  { 0, 0, 0, 0, 0 }, // 400 VABSfq
  { 0, 0, 0, 0, 0 }, // 401 VABSv16i8_VABSv4i32_VABSv8i16
  { 0, 0, 0, 0, 0 }, // 402 VABSv2i32_VABSv4i16_VABSv8i8
  { 0, 0, 0, 0, 0 }, // 403 VACGEd_VACGTd_VCEQfd_VCGEfd_VCGTfd
  { 0, 0, 0, 0, 0 }, // 404 VACGEq_VACGTq_VCEQfq_VCGEfq_VCGTfq
  { 0, 0, 0, 0, 0 }, // 405 VCEQv16i8_VCEQv4i32_VCEQv8i16_VCGEsv16i8_VCGEsv4i32_VCGEsv8i16_VCGEuv16i8_VCGEuv4i32_VCGEuv8i16_VCGTsv16i8_VCGTsv4i32_VCGTsv8i16_VCGTuv16i8_VCGTuv4i32_VCGTuv8i16_VQSUBsv16i8_VQSUBsv2i64_VQSUBsv4i32_VQSUBsv8i16_VQSUBuv16i8_VQSUBuv2i64_VQSUBuv4i32_VQSUBuv8i16
  { 0, 0, 0, 0, 0 }, // 406 VCEQv2i32_VCEQv4i16_VCEQv8i8_VCGEsv2i32_VCGEsv4i16_VCGEsv8i8_VCGEuv2i32_VCGEuv4i16_VCGEuv8i8_VCGTsv2i32_VCGTsv4i16_VCGTsv8i8_VCGTuv2i32_VCGTuv4i16_VCGTuv8i8_VQSUBsv1i64_VQSUBsv2i32_VQSUBsv4i16_VQSUBsv8i8_VQSUBuv1i64_VQSUBuv2i32_VQSUBuv4i16_VQSUBuv8i8
  { 0, 0, 0, 0, 0 }, // 407 VCEQzv16i8_VCEQzv2f32_VCEQzv2i32_VCEQzv4f32_VCEQzv4i16_VCEQzv4i32_VCEQzv8i16_VCEQzv8i8_VCGEzv16i8_VCGEzv2f32_VCGEzv2i32_VCGEzv4f32_VCGEzv4i16_VCGEzv4i32_VCGEzv8i16_VCGEzv8i8_VCGTzv16i8_VCGTzv2f32_VCGTzv2i32_VCGTzv4f32_VCGTzv4i16_VCGTzv4i32_VCGTzv8i16_VCGTzv8i8_VCLEzv16i8_VCLEzv2f32_VCLEzv2i32_VCLEzv4f32_VCLEzv4i16_VCLEzv4i32_VCLEzv8i16_VCLEzv8i8_VCLTzv16i8_VCLTzv2f32_VCLTzv2i32_VCLTzv4f32_VCLTzv4i16_VCLTzv4i32_VCLTzv8i16_VCLTzv8i8
  { 0, 0, 0, 0, 0 }, // 408 VPADALsv16i8_VPADALsv4i32_VPADALsv8i16_VPADALuv16i8_VPADALuv4i32_VPADALuv8i16
  { 0, 0, 0, 0, 0 }, // 409 VPADALsv2i32_VPADALsv4i16_VPADALsv8i8_VPADALuv2i32_VPADALuv4i16_VPADALuv8i8_VRSRAsv16i8_VRSRAsv1i64_VRSRAsv2i32_VRSRAsv2i64_VRSRAsv4i16_VRSRAsv4i32_VRSRAsv8i16_VRSRAsv8i8_VRSRAuv16i8_VRSRAuv1i64_VRSRAuv2i32_VRSRAuv2i64_VRSRAuv4i16_VRSRAuv4i32_VRSRAuv8i16_VRSRAuv8i8_VSRAsv16i8_VSRAsv1i64_VSRAsv2i32_VSRAsv2i64_VSRAsv4i16_VSRAsv4i32_VSRAsv8i16_VSRAsv8i8_VSRAuv16i8_VSRAuv1i64_VSRAuv2i32_VSRAuv2i64_VSRAuv4i16_VSRAuv4i32_VSRAuv8i16_VSRAuv8i8
  { 0, 0, 0, 0, 0 }, // 410 VQABSv16i8_VQABSv4i32_VQABSv8i16_VQNEGv16i8_VQNEGv4i32_VQNEGv8i16
  { 0, 0, 0, 0, 0 }, // 411 VQABSv2i32_VQABSv4i16_VQABSv8i8_VQNEGv2i32_VQNEGv4i16_VQNEGv8i8
  { 0, 0, 0, 0, 0 }, // 412 VQADDsv16i8_VQADDsv2i64_VQADDsv4i32_VQADDsv8i16_VQADDuv16i8_VQADDuv2i64_VQADDuv4i32_VQADDuv8i16
  { 0, 0, 0, 0, 0 }, // 413 VQADDsv1i64_VQADDsv2i32_VQADDsv4i16_VQADDsv8i8_VQADDuv1i64_VQADDuv2i32_VQADDuv4i16_VQADDuv8i8
  { 0, 0, 0, 0, 0 }, // 414 VQRSHLsv16i8_VQRSHLsv2i64_VQRSHLsv4i32_VQRSHLsv8i16_VQRSHLuv16i8_VQRSHLuv2i64_VQRSHLuv4i32_VQRSHLuv8i16_VRSHLsv16i8_VRSHLsv2i64_VRSHLsv4i32_VRSHLsv8i16_VRSHLuv16i8_VRSHLuv2i64_VRSHLuv4i32_VRSHLuv8i16
  { 0, 0, 0, 0, 0 }, // 415 VQRSHLsv1i64_VQRSHLsv2i32_VQRSHLsv4i16_VQRSHLsv8i8_VQRSHLuv1i64_VQRSHLuv2i32_VQRSHLuv4i16_VQRSHLuv8i8_VRSHLsv1i64_VRSHLsv2i32_VRSHLsv4i16_VRSHLsv8i8_VRSHLuv1i64_VRSHLuv2i32_VRSHLuv4i16_VRSHLuv8i8_VRSHRsv16i8_VRSHRsv1i64_VRSHRsv2i32_VRSHRsv2i64_VRSHRsv4i16_VRSHRsv4i32_VRSHRsv8i16_VRSHRsv8i8_VRSHRuv16i8_VRSHRuv1i64_VRSHRuv2i32_VRSHRuv2i64_VRSHRuv4i16_VRSHRuv4i32_VRSHRuv8i16_VRSHRuv8i8
  { 0, 0, 0, 0, 0 }, // 416 VRECPEd_VRECPEfd_VRSQRTEd_VRSQRTEfd
  { 0, 0, 0, 0, 0 }, // 417 VRECPEfq_VRECPEq_VRSQRTEfq_VRSQRTEq
  { 0, 0, 0, 0, 0 }, // 418 VADDHNv2i32_VADDHNv4i16_VADDHNv8i8_VSUBHNv2i32_VSUBHNv4i16_VSUBHNv8i8
  { 0, 0, 0, 0, 0 }, // 419 VSHRNv2i32_VSHRNv4i16_VSHRNv8i8
  { 0, 0, 0, 0, 0 }, // 420 VQRSHRNsv2i32_VQRSHRNsv4i16_VQRSHRNsv8i8_VQRSHRNuv2i32_VQRSHRNuv4i16_VQRSHRNuv8i8_VQRSHRUNv2i32_VQRSHRUNv4i16_VQRSHRUNv8i8_VQSHRNsv2i32_VQSHRNsv4i16_VQSHRNsv8i8_VQSHRNuv2i32_VQSHRNuv4i16_VQSHRNuv8i8_VQSHRUNv2i32_VQSHRUNv4i16_VQSHRUNv8i8_VRSHRNv2i32_VRSHRNv4i16_VRSHRNv8i8
  { 0, 0, 0, 0, 0 }, // 421 VRADDHNv2i32_VRADDHNv4i16_VRADDHNv8i8_VRSUBHNv2i32_VRSUBHNv4i16_VRSUBHNv8i8
  { 0, 0, 0, 0, 0 }, // 422 VTBL1
  { 0, 0, 0, 0, 0 }, // 423 VTBX1
  { 0, 0, 0, 0, 0 }, // 424 VTBL2
  { 0, 0, 0, 0, 0 }, // 425 VTBX2
  { 0, 0, 0, 0, 0 }, // 426 VTBL3_VTBL3Pseudo
  { 0, 0, 0, 0, 0 }, // 427 VTBX3_VTBX3Pseudo
  { 0, 0, 0, 0, 0 }, // 428 VTBL4_VTBL4Pseudo
  { 0, 0, 0, 0, 0 }, // 429 VTBX4_VTBX4Pseudo
  { 0, 0, 0, 0, 0 }, // 430 VSWPd_VSWPq
  { 0, 0, 0, 0, 0 }, // 431 VTRNd16_VTRNd32_VTRNd8_VUZPd16_VUZPd8_VZIPd16_VZIPd8
  { 0, 0, 0, 0, 0 }, // 432 VTRNq16_VTRNq32_VTRNq8
  { 0, 0, 0, 0, 0 }, // 433 VUZPq16_VUZPq32_VUZPq8_VZIPq16_VZIPq32_VZIPq8
  { 1, 1, 2, 625, 627 }, // 434 VABSD_VNEGD
  { 1, 1, 2, 627, 629 }, // 435 VABSS_VNEGS
  { 1, 1, 2, 629, 631 }, // 436 VCMPD_VCMPED_VCMPEZD_VCMPZD
  { 1, 1, 2, 631, 633 }, // 437 VCMPES_VCMPEZS_VCMPS_VCMPZS
  { 0, 0, 0, 0, 0 }, // 438 VABDLsv2i64_VABDLsv4i32_VABDLsv8i16_VABDLuv2i64_VABDLuv4i32_VABDLuv8i16_VABDsv16i8_VABDsv4i32_VABDsv8i16_VABDuv16i8_VABDuv4i32_VABDuv8i16_VMAXsv16i8_VMAXsv4i32_VMAXsv8i16_VMAXuv16i8_VMAXuv4i32_VMAXuv8i16_VMINsv16i8_VMINsv4i32_VMINsv8i16_VMINuv16i8_VMINuv4i32_VMINuv8i16
  { 0, 0, 0, 0, 0 }, // 439 VABDfd_VADDfd_VMAXfd_VMINfd_VSUBfd
  { 0, 0, 0, 0, 0 }, // 440 VABDfq_VADDfq_VMAXfq_VMINfq_VSUBfq
  { 0, 0, 0, 0, 0 }, // 441 VABDsv2i32_VABDsv4i16_VABDsv8i8_VABDuv2i32_VABDuv4i16_VABDuv8i8_VMAXsv2i32_VMAXsv4i16_VMAXsv8i8_VMAXuv2i32_VMAXuv4i16_VMAXuv8i8_VMINsv2i32_VMINsv4i16_VMINsv8i8_VMINuv2i32_VMINuv4i16_VMINuv8i8_VPMAXs16_VPMAXs32_VPMAXs8_VPMAXu16_VPMAXu32_VPMAXu8_VPMINs16_VPMINs32_VPMINs8_VPMINu16_VPMINu32_VPMINu8
  { 1, 1, 2, 633, 636 }, // 442 VADDS_VSUBS
  { 0, 0, 0, 0, 0 }, // 443 VMAXNMD_VMAXNMND_VMAXNMNQ_VMAXNMS_VMINNMD_VMINNMND_VMINNMNQ_VMINNMS
  { 0, 0, 0, 0, 0 }, // 444 VPADDf_VPMAXf_VPMINf
  { 1, 1, 2, 636, 639 }, // 445 VADDD_VSUBD
  { 0, 0, 0, 0, 0 }, // 446 VRECPSfd_VRSQRTSfd
  { 0, 0, 0, 0, 0 }, // 447 VRECPSfq_VRSQRTSfq
  { 0, 0, 0, 0, 0 }, // 448 VMULLp_VMULLslsv2i32_VMULLslsv4i16_VMULLsluv2i32_VMULLsluv4i16_VMULLsv4i32_VMULLsv8i16_VMULLuv4i32_VMULLuv8i16_VMULpd_VMULslv4i16_VMULv4i16_VMULv8i8_VQDMULHslv4i16_VQDMULHv4i16_VQDMULLslv2i32_VQDMULLslv4i16_VQDMULLv4i32_VQRDMULHslv4i16_VQRDMULHv4i16
  { 0, 0, 0, 0, 0 }, // 449 VMULLsv2i64_VMULLuv2i64_VMULslv2i32_VMULv2i32_VQDMULHslv2i32_VQDMULHv2i32_VQDMULLv2i64_VQRDMULHslv2i32_VQRDMULHv2i32
  { 1, 1, 2, 639, 642 }, // 450 VMULS_VNMULS
  { 0, 0, 0, 0, 0 }, // 451 VMULfd
  { 0, 0, 0, 0, 0 }, // 452 VMULfq
  { 0, 0, 0, 0, 0 }, // 453 VMULpq_VMULslv8i16_VMULv16i8_VMULv8i16_VQDMULHslv8i16_VQDMULHv8i16_VQRDMULHslv8i16_VQRDMULHv8i16
  { 0, 0, 0, 0, 0 }, // 454 VMULslfd
  { 0, 0, 0, 0, 0 }, // 455 VMULslfq
  { 0, 0, 0, 0, 0 }, // 456 VMULslv4i32_VMULv4i32_VQDMULHslv4i32_VQDMULHv4i32_VQRDMULHslv4i32_VQRDMULHv4i32
  { 1, 2, 3, 642, 645 }, // 457 VMULD_VNMULD
  { 1, 2, 3, 645, 649 }, // 458 VFMAD_VFMSD_VFNMAD_VFNMSD
  { 1, 1, 2, 649, 653 }, // 459 VFMAS_VFMSS_VFNMAS_VFNMSS
  { 1, 2, 3, 653, 657 }, // 460 VMLAD_VMLSD_VNMLAD_VNMLSD
  { 0, 0, 0, 0, 0 }, // 461 VMLALslsv2i32_VMLALsluv2i32_VMLALsv2i64_VMLALuv2i64_VMLAslv2i32_VMLAv2i32_VMLSLslsv2i32_VMLSLsluv2i32_VMLSLsv2i64_VMLSLuv2i64_VMLSslv2i32_VMLSv2i32_VQDMLALslv2i32_VQDMLALv2i64_VQDMLSLslv2i32_VQDMLSLv2i64
  { 0, 0, 0, 0, 0 }, // 462 VMLALslsv4i16_VMLALsluv4i16_VMLALsv4i32_VMLALsv8i16_VMLALuv4i32_VMLALuv8i16_VMLAslv4i16_VMLAv4i16_VMLAv8i8_VMLSLslsv4i16_VMLSLsluv4i16_VMLSLsv4i32_VMLSLsv8i16_VMLSLuv4i32_VMLSLuv8i16_VMLSslv4i16_VMLSv4i16_VMLSv8i8_VQDMLALslv4i16_VQDMLALv4i32_VQDMLSLslv4i16_VQDMLSLv4i32
  { 1, 1, 2, 657, 661 }, // 463 VMLAS_VMLSS_VNMLAS_VNMLSS
  { 0, 0, 0, 0, 0 }, // 464 VMLAfd_VMLAslfd_VMLSfd_VMLSslfd
  { 0, 0, 0, 0, 0 }, // 465 VMLAfq_VMLAslfq_VMLSfq_VMLSslfq
  { 0, 0, 0, 0, 0 }, // 466 VMLAslv4i32_VMLAv4i32_VMLSslv4i32_VMLSv4i32
  { 0, 0, 0, 0, 0 }, // 467 VMLAslv8i16_VMLAv16i8_VMLAv8i16_VMLSslv8i16_VMLSv16i8_VMLSv8i16
  { 0, 0, 0, 0, 0 }, // 468 VFMAfd_VFMSfd
  { 0, 0, 0, 0, 0 }, // 469 VFMAfq_VFMSfq
  { 0, 0, 0, 0, 0 }, // 470 VCVTANSD_VCVTANSQ_VCVTANUD_VCVTANUQ_VCVTASD_VCVTASS_VCVTAUD_VCVTAUS_VCVTBDH_VCVTBHD_VCVTMNSD_VCVTMNSQ_VCVTMNUD_VCVTMNUQ_VCVTMSD_VCVTMSS_VCVTMUD_VCVTMUS_VCVTNNSD_VCVTNNSQ_VCVTNNUD_VCVTNNUQ_VCVTNSD_VCVTNSS_VCVTNUD_VCVTNUS_VCVTPNSD_VCVTPNSQ_VCVTPNUD_VCVTPNUQ_VCVTPSD_VCVTPSS_VCVTPUD_VCVTPUS_VCVTTDH_VCVTTHD
  { 0, 0, 0, 0, 0 }, // 471 VCVTBHS_VCVTTHS
  { 0, 0, 0, 0, 0 }, // 472 VCVTBSH_VCVTTSH
  { 1, 1, 2, 661, 663 }, // 473 VCVTDS
  { 1, 1, 2, 663, 665 }, // 474 VCVTSD
  { 0, 0, 0, 0, 0 }, // 475 VCVTf2h_VCVTf2sq_VCVTf2uq_VCVTf2xsq_VCVTf2xuq_VCVTh2f_VCVTs2fq_VCVTu2fq_VCVTxs2fq_VCVTxu2fq
  { 0, 0, 0, 0, 0 }, // 476 VCVTf2sd_VCVTf2ud_VCVTf2xsd_VCVTf2xud_VCVTs2fd_VCVTu2fd_VCVTxs2fd_VCVTxu2fd
  { 1, 1, 2, 665, 667 }, // 477 VSITOD_VUITOD
  { 1, 1, 2, 667, 669 }, // 478 VSITOS_VUITOS
  { 1, 1, 2, 669, 671 }, // 479 VTOSHD_VTOSLD_VTOUHD_VTOULD
  { 1, 1, 2, 671, 673 }, // 480 VTOSHS_VTOSLS_VTOUHS_VTOULS
  { 1, 1, 2, 673, 675 }, // 481 VTOSIRD_VTOSIZD_VTOUIRD_VTOUIZD
  { 1, 1, 2, 675, 677 }, // 482 VTOSIRS_VTOSIZS_VTOUIRS_VTOUIZS
  { 1, 1, 2, 677, 679 }, // 483 FCONSTD_VMOVD_VMOVDcc
  { 1, 1, 2, 679, 681 }, // 484 FCONSTS_VMOVS_VMOVScc
  { 0, 0, 0, 0, 0 }, // 485 VMOVv16i8_VMOVv1i64_VMOVv2f32_VMOVv2i32_VMOVv2i64_VMOVv4f32_VMOVv4i16_VMOVv4i32_VMOVv8i16_VMOVv8i8_VMVNv2i32_VMVNv4i16_VMVNv4i32_VMVNv8i16
  { 0, 0, 0, 0, 0 }, // 486 VMVNd_VMVNq
  { 0, 0, 0, 0, 0 }, // 487 VMOVLsv2i64_VMOVLsv4i32_VMOVLsv8i16_VMOVLuv2i64_VMOVLuv4i32_VMOVLuv8i16
  { 0, 0, 0, 0, 0 }, // 488 VMOVNv2i32_VMOVNv4i16_VMOVNv8i8
  { 0, 0, 0, 0, 0 }, // 489 VQMOVNsuv2i32_VQMOVNsuv4i16_VQMOVNsuv8i8_VQMOVNsv2i32_VQMOVNsv4i16_VQMOVNsv8i8_VQMOVNuv2i32_VQMOVNuv4i16_VQMOVNuv8i8
  { 0, 0, 0, 0, 0 }, // 490 VDUPLN16d_VDUPLN32d_VDUPLN8d_VDUPfdf_VDUPfqf
  { 0, 0, 0, 0, 0 }, // 491 VDUPLN16q_VDUPLN32q_VDUPLN8q
  { 0, 0, 0, 0, 0 }, // 492 VDUP16d_VDUP16q_VDUP32d_VDUP32q_VDUP8d_VDUP8q
  { 1, 1, 2, 681, 683 }, // 493 VMOVRS
  { 1, 1, 2, 683, 685 }, // 494 VMOVSR
  { 0, 0, 0, 0, 0 }, // 495 VSETLNi16_VSETLNi32_VSETLNi8
  { 1, 1, 2, 685, 688 }, // 496 VMOVRRD_VMOVRRS
  { 1, 1, 2, 688, 691 }, // 497 VMOVDRR
  { 1, 1, 2, 691, 694 }, // 498 VMOVSRR
  { 0, 0, 0, 0, 0 }, // 499 VGETLNi32_VGETLNu16_VGETLNu8
  { 0, 0, 0, 0, 0 }, // 500 VGETLNs16_VGETLNs8
  { 1, 1, 2, 694, 695 }, // 501 VMRS_VMRS_FPEXC_VMRS_FPINST_VMRS_FPINST2_VMRS_FPSID_VMRS_MVFR0_VMRS_MVFR1
  { 1, 1, 2, 695, 696 }, // 502 VMSR_VMSR_FPEXC_VMSR_FPINST_VMSR_FPINST2_VMSR_FPSID
  { 1, 1, 2, 696, 697 }, // 503 FMSTAT
  { 1, 1, 2, 697, 700 }, // 504 VLDRD
  { 1, 1, 2, 700, 703 }, // 505 VLDRS
  { 1, 1, 2, 703, 706 }, // 506 VSTRD
  { 1, 1, 2, 706, 709 }, // 507 VSTRS
  { 1, 3, 4, 709, 713 }, // 508 VLDMQIA
  { 1, 3, 4, 713, 717 }, // 509 VSTMQIA
  { 1, 3, 4, 717, 721 }, // 510 VLDMDIA_VLDMSIA
  { 1, 3, 4, 721, 726 }, // 511 VLDMDDB_UPD_VLDMDIA_UPD_VLDMSDB_UPD_VLDMSIA_UPD
  { 1, 3, 4, 726, 730 }, // 512 VSTMDIA_VSTMSIA
  { 1, 3, 4, 730, 735 }, // 513 VSTMDDB_UPD_VSTMDIA_UPD_VSTMSDB_UPD_VSTMSIA_UPD
  { 0, 0, 0, 0, 0 }, // 514 VLD1d16_VLD1d32_VLD1d64_VLD1d8
  { 0, 0, 0, 0, 0 }, // 515 VLD1q16_VLD1q32_VLD1q64_VLD1q8
  { 0, 0, 0, 0, 0 }, // 516 VLD1d16wb_fixed_VLD1d16wb_register_VLD1d32wb_fixed_VLD1d32wb_register_VLD1d64wb_fixed_VLD1d64wb_register_VLD1d8wb_fixed_VLD1d8wb_register
  { 0, 0, 0, 0, 0 }, // 517 VLD1q16wb_fixed_VLD1q16wb_register_VLD1q32wb_fixed_VLD1q32wb_register_VLD1q64wb_fixed_VLD1q64wb_register_VLD1q8wb_fixed_VLD1q8wb_register
  { 0, 0, 0, 0, 0 }, // 518 VLD1d16T_VLD1d32T_VLD1d64T_VLD1d64TPseudo_VLD1d8T
  { 0, 0, 0, 0, 0 }, // 519 VLD1d16Twb_fixed_VLD1d16Twb_register_VLD1d32Twb_fixed_VLD1d32Twb_register_VLD1d64Twb_fixed_VLD1d64Twb_register_VLD1d8Twb_fixed_VLD1d8Twb_register
  { 0, 0, 0, 0, 0 }, // 520 VLD1d16Q_VLD1d32Q_VLD1d64Q_VLD1d64QPseudo_VLD1d8Q
  { 0, 0, 0, 0, 0 }, // 521 VLD1d16Qwb_fixed_VLD1d16Qwb_register_VLD1d32Qwb_fixed_VLD1d32Qwb_register_VLD1d64Qwb_fixed_VLD1d64Qwb_register_VLD1d8Qwb_fixed_VLD1d8Qwb_register
  { 0, 0, 0, 0, 0 }, // 522 VLD2b16_VLD2b32_VLD2b8_VLD2d16_VLD2d32_VLD2d8
  { 0, 0, 0, 0, 0 }, // 523 VLD2q16_VLD2q16Pseudo_VLD2q32_VLD2q32Pseudo_VLD2q8_VLD2q8Pseudo
  { 0, 0, 0, 0, 0 }, // 524 VLD2b16wb_fixed_VLD2b16wb_register_VLD2b32wb_fixed_VLD2b32wb_register_VLD2b8wb_fixed_VLD2b8wb_register_VLD2d16wb_fixed_VLD2d16wb_register_VLD2d32wb_fixed_VLD2d32wb_register_VLD2d8wb_fixed_VLD2d8wb_register
  { 0, 0, 0, 0, 0 }, // 525 VLD2q16PseudoWB_fixed_VLD2q16PseudoWB_register_VLD2q16wb_fixed_VLD2q16wb_register_VLD2q32PseudoWB_fixed_VLD2q32PseudoWB_register_VLD2q32wb_fixed_VLD2q32wb_register_VLD2q8PseudoWB_fixed_VLD2q8PseudoWB_register_VLD2q8wb_fixed_VLD2q8wb_register
  { 0, 0, 0, 0, 0 }, // 526 VLD3d16_VLD3d32_VLD3d8_VLD3q16_VLD3q32_VLD3q8
  { 0, 0, 0, 0, 0 }, // 527 VLD3d16Pseudo_VLD3d32Pseudo_VLD3d8Pseudo_VLD3q16oddPseudo_VLD3q32oddPseudo_VLD3q8oddPseudo
  { 0, 0, 0, 0, 0 }, // 528 VLD3d16_UPD_VLD3d32_UPD_VLD3d8_UPD_VLD3q16_UPD_VLD3q32_UPD_VLD3q8_UPD
  { 0, 0, 0, 0, 0 }, // 529 VLD3d16Pseudo_UPD_VLD3d32Pseudo_UPD_VLD3d8Pseudo_UPD_VLD3q16Pseudo_UPD_VLD3q16oddPseudo_UPD_VLD3q32Pseudo_UPD_VLD3q32oddPseudo_UPD_VLD3q8Pseudo_UPD_VLD3q8oddPseudo_UPD
  { 0, 0, 0, 0, 0 }, // 530 VLD4d16_VLD4d32_VLD4d8_VLD4q16_VLD4q32_VLD4q8
  { 0, 0, 0, 0, 0 }, // 531 VLD4d16Pseudo_VLD4d32Pseudo_VLD4d8Pseudo_VLD4q16oddPseudo_VLD4q32oddPseudo_VLD4q8oddPseudo
  { 0, 0, 0, 0, 0 }, // 532 VLD4d16_UPD_VLD4d32_UPD_VLD4d8_UPD_VLD4q16_UPD_VLD4q32_UPD_VLD4q8_UPD
  { 0, 0, 0, 0, 0 }, // 533 VLD4d16Pseudo_UPD_VLD4d32Pseudo_UPD_VLD4d8Pseudo_UPD_VLD4q16Pseudo_UPD_VLD4q16oddPseudo_UPD_VLD4q32Pseudo_UPD_VLD4q32oddPseudo_UPD_VLD4q8Pseudo_UPD_VLD4q8oddPseudo_UPD
  { 0, 0, 0, 0, 0 }, // 534 VLD1DUPd16_VLD1DUPd32_VLD1DUPd8_VLD1DUPq16_VLD1DUPq32_VLD1DUPq8
  { 0, 0, 0, 0, 0 }, // 535 VLD1LNd16_VLD1LNd32_VLD1LNd8_VLD1LNq16Pseudo_VLD1LNq32Pseudo_VLD1LNq8Pseudo
  { 0, 0, 0, 0, 0 }, // 536 VLD1DUPd16wb_fixed_VLD1DUPd16wb_register_VLD1DUPd32wb_fixed_VLD1DUPd32wb_register_VLD1DUPd8wb_fixed_VLD1DUPd8wb_register_VLD1DUPq16wb_fixed_VLD1DUPq16wb_register_VLD1DUPq32wb_fixed_VLD1DUPq32wb_register_VLD1DUPq8wb_fixed_VLD1DUPq8wb_register
  { 0, 0, 0, 0, 0 }, // 537 VLD1LNd16_UPD_VLD1LNd32_UPD_VLD1LNd8_UPD_VLD1LNq16Pseudo_UPD_VLD1LNq32Pseudo_UPD_VLD1LNq8Pseudo_UPD
  { 0, 0, 0, 0, 0 }, // 538 VLD2DUPd16_VLD2DUPd16x2_VLD2DUPd32_VLD2DUPd32x2_VLD2DUPd8_VLD2DUPd8x2
  { 0, 0, 0, 0, 0 }, // 539 VLD2LNd16_VLD2LNd16Pseudo_VLD2LNd32_VLD2LNd32Pseudo_VLD2LNd8_VLD2LNd8Pseudo_VLD2LNq16_VLD2LNq16Pseudo_VLD2LNq32_VLD2LNq32Pseudo
  { 0, 0, 0, 0, 0 }, // 540 VLD2LNd16_UPD_VLD2LNd32_UPD_VLD2LNd8_UPD_VLD2LNq16_UPD_VLD2LNq32_UPD
  { 0, 0, 0, 0, 0 }, // 541 VLD2DUPd16wb_fixed_VLD2DUPd16wb_register_VLD2DUPd16x2wb_fixed_VLD2DUPd16x2wb_register_VLD2DUPd32wb_fixed_VLD2DUPd32wb_register_VLD2DUPd32x2wb_fixed_VLD2DUPd32x2wb_register_VLD2DUPd8wb_fixed_VLD2DUPd8wb_register_VLD2DUPd8x2wb_fixed_VLD2DUPd8x2wb_register
  { 0, 0, 0, 0, 0 }, // 542 VLD2LNd16Pseudo_UPD_VLD2LNd32Pseudo_UPD_VLD2LNd8Pseudo_UPD_VLD2LNq16Pseudo_UPD_VLD2LNq32Pseudo_UPD
  { 0, 0, 0, 0, 0 }, // 543 VLD3DUPd16_VLD3DUPd16Pseudo_VLD3DUPd32_VLD3DUPd32Pseudo_VLD3DUPd8_VLD3DUPd8Pseudo_VLD3DUPq16_VLD3DUPq32_VLD3DUPq8
  { 0, 0, 0, 0, 0 }, // 544 VLD3LNd16_VLD3LNd16Pseudo_VLD3LNd32_VLD3LNd32Pseudo_VLD3LNd8_VLD3LNd8Pseudo_VLD3LNq16_VLD3LNq16Pseudo_VLD3LNq32_VLD3LNq32Pseudo
  { 0, 0, 0, 0, 0 }, // 545 VLD3DUPd16_UPD_VLD3DUPd32_UPD_VLD3DUPd8_UPD_VLD3DUPq16_UPD_VLD3DUPq32_UPD_VLD3DUPq8_UPD
  { 0, 0, 0, 0, 0 }, // 546 VLD3LNd16_UPD_VLD3LNd32_UPD_VLD3LNd8_UPD_VLD3LNq16_UPD_VLD3LNq32_UPD
  { 0, 0, 0, 0, 0 }, // 547 VLD3DUPd16Pseudo_UPD_VLD3DUPd32Pseudo_UPD_VLD3DUPd8Pseudo_UPD
  { 0, 0, 0, 0, 0 }, // 548 VLD3LNd16Pseudo_UPD_VLD3LNd32Pseudo_UPD_VLD3LNd8Pseudo_UPD_VLD3LNq16Pseudo_UPD_VLD3LNq32Pseudo_UPD
  { 0, 0, 0, 0, 0 }, // 549 VLD4DUPd16_VLD4DUPd16Pseudo_VLD4DUPd32_VLD4DUPd32Pseudo_VLD4DUPd8_VLD4DUPd8Pseudo_VLD4DUPq16_VLD4DUPq32_VLD4DUPq8
  { 0, 0, 0, 0, 0 }, // 550 VLD4LNd16_VLD4LNd16Pseudo_VLD4LNd32_VLD4LNd32Pseudo_VLD4LNd8_VLD4LNd8Pseudo_VLD4LNq16_VLD4LNq16Pseudo_VLD4LNq32_VLD4LNq32Pseudo
  { 0, 0, 0, 0, 0 }, // 551 VLD4DUPd16_UPD_VLD4DUPd32_UPD_VLD4DUPd8_UPD_VLD4DUPq16_UPD_VLD4DUPq32_UPD_VLD4DUPq8_UPD
  { 0, 0, 0, 0, 0 }, // 552 VLD4LNd16_UPD_VLD4LNd32_UPD_VLD4LNd8_UPD_VLD4LNq16_UPD_VLD4LNq32_UPD
  { 0, 0, 0, 0, 0 }, // 553 VLD4DUPd16Pseudo_UPD_VLD4DUPd32Pseudo_UPD_VLD4DUPd8Pseudo_UPD
  { 0, 0, 0, 0, 0 }, // 554 VLD4LNd16Pseudo_UPD_VLD4LNd32Pseudo_UPD_VLD4LNd8Pseudo_UPD_VLD4LNq16Pseudo_UPD_VLD4LNq32Pseudo_UPD
  { 0, 0, 0, 0, 0 }, // 555 VST1d16_VST1d32_VST1d64_VST1d8
  { 0, 0, 0, 0, 0 }, // 556 VST1q16_VST1q32_VST1q64_VST1q8
  { 0, 0, 0, 0, 0 }, // 557 VST1d16wb_fixed_VST1d16wb_register_VST1d32wb_fixed_VST1d32wb_register_VST1d64wb_fixed_VST1d64wb_register_VST1d8wb_fixed_VST1d8wb_register
  { 0, 0, 0, 0, 0 }, // 558 VST1q16wb_fixed_VST1q16wb_register_VST1q32wb_fixed_VST1q32wb_register_VST1q64wb_fixed_VST1q64wb_register_VST1q8wb_fixed_VST1q8wb_register
  { 0, 0, 0, 0, 0 }, // 559 VST1d16T_VST1d32T_VST1d64T_VST1d64TPseudo_VST1d8T
  { 0, 0, 0, 0, 0 }, // 560 VST1d16Twb_fixed_VST1d16Twb_register_VST1d32Twb_fixed_VST1d32Twb_register_VST1d64Twb_fixed_VST1d64Twb_register_VST1d8Twb_fixed_VST1d8Twb_register
  { 0, 0, 0, 0, 0 }, // 561 VST1d64TPseudoWB_fixed_VST1d64TPseudoWB_register
  { 0, 0, 0, 0, 0 }, // 562 VST1d16Q_VST1d32Q_VST1d64Q_VST1d64QPseudo_VST1d8Q
  { 0, 0, 0, 0, 0 }, // 563 VST1d16Qwb_fixed_VST1d16Qwb_register_VST1d32Qwb_fixed_VST1d32Qwb_register_VST1d64Qwb_fixed_VST1d64Qwb_register_VST1d8Qwb_fixed_VST1d8Qwb_register
  { 0, 0, 0, 0, 0 }, // 564 VST1d64QPseudoWB_fixed_VST1d64QPseudoWB_register
  { 0, 0, 0, 0, 0 }, // 565 VST2b16_VST2b32_VST2b8_VST2d16_VST2d32_VST2d8
  { 0, 0, 0, 0, 0 }, // 566 VST2b16wb_fixed_VST2b16wb_register_VST2b32wb_fixed_VST2b32wb_register_VST2b8wb_fixed_VST2b8wb_register_VST2d16wb_fixed_VST2d16wb_register_VST2d32wb_fixed_VST2d32wb_register_VST2d8wb_fixed_VST2d8wb_register
  { 0, 0, 0, 0, 0 }, // 567 VST2q16_VST2q16Pseudo_VST2q32_VST2q32Pseudo_VST2q8_VST2q8Pseudo
  { 0, 0, 0, 0, 0 }, // 568 VST2q16PseudoWB_fixed_VST2q16PseudoWB_register_VST2q32PseudoWB_fixed_VST2q32PseudoWB_register_VST2q8PseudoWB_fixed_VST2q8PseudoWB_register
  { 0, 0, 0, 0, 0 }, // 569 VST2q16wb_fixed_VST2q16wb_register_VST2q32wb_fixed_VST2q32wb_register_VST2q8wb_fixed_VST2q8wb_register
  { 0, 0, 0, 0, 0 }, // 570 VST3d16_VST3d16Pseudo_VST3d32_VST3d32Pseudo_VST3d8_VST3d8Pseudo_VST3q16_VST3q16oddPseudo_VST3q32_VST3q32oddPseudo_VST3q8_VST3q8oddPseudo
  { 0, 0, 0, 0, 0 }, // 571 VST3d16Pseudo_UPD_VST3d16_UPD_VST3d32Pseudo_UPD_VST3d32_UPD_VST3d8Pseudo_UPD_VST3d8_UPD_VST3q16Pseudo_UPD_VST3q16_UPD_VST3q16oddPseudo_UPD_VST3q32Pseudo_UPD_VST3q32_UPD_VST3q32oddPseudo_UPD_VST3q8Pseudo_UPD_VST3q8_UPD_VST3q8oddPseudo_UPD
  { 0, 0, 0, 0, 0 }, // 572 VST4d16_VST4d16Pseudo_VST4d32_VST4d32Pseudo_VST4d8_VST4d8Pseudo_VST4q16_VST4q16oddPseudo_VST4q32_VST4q32oddPseudo_VST4q8_VST4q8oddPseudo
  { 0, 0, 0, 0, 0 }, // 573 VST4d16Pseudo_UPD_VST4d16_UPD_VST4d32Pseudo_UPD_VST4d32_UPD_VST4d8Pseudo_UPD_VST4d8_UPD_VST4q16Pseudo_UPD_VST4q16_UPD_VST4q16oddPseudo_UPD_VST4q32Pseudo_UPD_VST4q32_UPD_VST4q32oddPseudo_UPD_VST4q8Pseudo_UPD_VST4q8_UPD_VST4q8oddPseudo_UPD
  { 0, 0, 0, 0, 0 }, // 574 VST1LNd16_VST1LNd32_VST1LNd8_VST1LNq16Pseudo_VST1LNq32Pseudo_VST1LNq8Pseudo
  { 0, 0, 0, 0, 0 }, // 575 VST1LNd16_UPD_VST1LNd32_UPD_VST1LNd8_UPD_VST1LNq16Pseudo_UPD_VST1LNq32Pseudo_UPD_VST1LNq8Pseudo_UPD
  { 0, 0, 0, 0, 0 }, // 576 VST2LNd16_VST2LNd16Pseudo_VST2LNd32_VST2LNd32Pseudo_VST2LNd8_VST2LNd8Pseudo_VST2LNq16_VST2LNq16Pseudo_VST2LNq32_VST2LNq32Pseudo
  { 0, 0, 0, 0, 0 }, // 577 VST2LNd16Pseudo_UPD_VST2LNd16_UPD_VST2LNd32Pseudo_UPD_VST2LNd32_UPD_VST2LNd8Pseudo_UPD_VST2LNd8_UPD_VST2LNq16Pseudo_UPD_VST2LNq16_UPD_VST2LNq32Pseudo_UPD_VST2LNq32_UPD
  { 0, 0, 0, 0, 0 }, // 578 VST3LNd16_VST3LNd16Pseudo_VST3LNd32_VST3LNd32Pseudo_VST3LNd8_VST3LNd8Pseudo_VST3LNq16_VST3LNq16Pseudo_VST3LNq32_VST3LNq32Pseudo
  { 0, 0, 0, 0, 0 }, // 579 VST3LNd16Pseudo_UPD_VST3LNd16_UPD_VST3LNd32Pseudo_UPD_VST3LNd32_UPD_VST3LNd8Pseudo_UPD_VST3LNd8_UPD_VST3LNq16Pseudo_UPD_VST3LNq16_UPD_VST3LNq32Pseudo_UPD_VST3LNq32_UPD
  { 0, 0, 0, 0, 0 }, // 580 VST4LNd16_VST4LNd16Pseudo_VST4LNd32_VST4LNd32Pseudo_VST4LNd8_VST4LNd8Pseudo_VST4LNq16_VST4LNq16Pseudo_VST4LNq32_VST4LNq32Pseudo
  { 0, 0, 0, 0, 0 }, // 581 VST4LNd16Pseudo_UPD_VST4LNd16_UPD_VST4LNd32Pseudo_UPD_VST4LNd32_UPD_VST4LNd8Pseudo_UPD_VST4LNd8_UPD_VST4LNq16Pseudo_UPD_VST4LNq16_UPD_VST4LNq32Pseudo_UPD_VST4LNq32_UPD
  { 1, 12, 13, 735, 738 }, // 582 VDIVS
  { 1, 12, 13, 738, 741 }, // 583 VSQRTS
  { 1, 11, 12, 741, 744 }, // 584 VDIVD
  { 1, 11, 12, 744, 747 }, // 585 VSQRTD
  { 0, 0, 0, 0, 0 }, // 586 ABS
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary CortexA9Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 13, 15, 747, 749 }, // 1 IIC_iALUi_WriteALU_ReadALU
  { 1, 13, 15, 749, 752 }, // 2 IIC_iALUr_WriteALU_ReadALU_ReadALU
  { 1, 15, 17, 752, 756 }, // 3 IIC_iALUsr_WriteALUsi_ReadALU
  { 1, 15, 17, 756, 760 }, // 4 IIC_iALUsr_WriteALUsr_ReadALUsr
  { 1, 15, 17, 760, 764 }, // 5 IIC_iALUsr_WriteALUSsr_ReadALUsr
  { 1, 13, 15, 764, 766 }, // 6 IIC_iBITi_WriteALU_ReadALU
  { 1, 13, 15, 766, 769 }, // 7 IIC_iBITr_WriteALU_ReadALU_ReadALU
  { 1, 15, 17, 769, 773 }, // 8 IIC_iBITsr_WriteALUsi_ReadALU
  { 1, 15, 17, 773, 777 }, // 9 IIC_iBITsr_WriteALUsr_ReadALUsr
  { 1, 17, 20, 0, 0 }, // 10 IIC_Br_WriteBr
  { 1, 20, 22, 777, 779 }, // 11 IIC_iUNAsi
  { 1, 17, 20, 0, 0 }, // 12 IIC_Br_WriteBrL
  { 0, 0, 0, 0, 0 }, // 13 WriteBrL
  { 1, 17, 20, 0, 0 }, // 14 IIC_Br_WriteBrTbl
  { 0, 0, 0, 0, 0 }, // 15 WriteBr
  { 1, 13, 15, 779, 781 }, // 16 IIC_iUNAr_WriteALU
  { 1, 13, 15, 781, 782 }, // 17 IIC_iCMPi_WriteCMP_ReadALU
  { 1, 13, 15, 782, 784 }, // 18 IIC_iCMPr_WriteCMP_ReadALU_ReadALU
  { 1, 15, 17, 784, 787 }, // 19 IIC_iCMPsr_WriteCMPsi_ReadALU
  { 1, 15, 17, 787, 790 }, // 20 IIC_iCMPsr_WriteCMPsr_ReadALU
  { 1, 22, 27, 790, 792 }, // 21 IIC_fpUNA64
  { 1, 22, 27, 792, 794 }, // 22 IIC_fpUNA32
  { 1, 27, 32, 794, 795 }, // 23 IIC_fpSTAT
  { -1, 32, 36, 795, 800 }, // 24 IIC_iLoad_m
  { -1, 32, 36, 800, 805 }, // 25 IIC_iLoad_mu
  { -1, 36, 41, 805, 810 }, // 26 IIC_iLoad_mBr
  { 1, 41, 45, 810, 814 }, // 27 IIC_iLoad_bh_ru
  { 1, 41, 45, 814, 817 }, // 28 IIC_iLoad_bh_iu
  { 1, 41, 45, 817, 820 }, // 29 IIC_iLoad_bh_r
  { 1, 41, 45, 820, 823 }, // 30 IIC_iLoad_bh_si
  { 1, 41, 45, 823, 827 }, // 31 IIC_iLoad_d_r
  { 1, 41, 45, 827, 831 }, // 32 IIC_iLoad_d_ru
  { 1, 45, 49, 831, 835 }, // 33 IIC_iLoad_ru
  { 1, 45, 49, 835, 838 }, // 34 IIC_iLoad_iu
  { 1, 45, 49, 838, 841 }, // 35 IIC_iLoad_r
  { 1, 49, 53, 841, 844 }, // 36 IIC_iLoad_si
  { 1, 53, 55, 844, 848 }, // 37 IIC_iMAC32
  { 1, 13, 15, 848, 849 }, // 38 IIC_iCMOVi_WriteALU
  { 1, 13, 15, 849, 850 }, // 39 IIC_iMOVi_WriteALU
  { 1, 55, 59, 850, 851 }, // 40 IIC_iCMOVix2
  { 1, 13, 15, 851, 853 }, // 41 IIC_iCMOVr_WriteALU
  { 1, 20, 22, 853, 856 }, // 42 IIC_iCMOVsr_WriteALU
  { 1, 59, 62, 856, 857 }, // 43 IIC_iMOVix2
  { 1, 62, 66, 857, 858 }, // 44 IIC_iMOVix2addpc
  { 1, 66, 72, 858, 859 }, // 45 IIC_iMOVix2ld
  { 1, 13, 15, 859, 861 }, // 46 IIC_iMOVr_WriteALU
  { 1, 20, 22, 861, 864 }, // 47 IIC_iMOVsr_WriteALU
  { 1, 13, 15, 864, 866 }, // 48 IIC_iMOVsi_WriteALU
  { 1, 53, 55, 866, 869 }, // 49 IIC_iMUL32
  { 1, 13, 15, 869, 870 }, // 50 IIC_iMVNi_WriteALU
  { 1, 13, 15, 870, 872 }, // 51 IIC_iMVNr_WriteALU
  { 1, 15, 17, 872, 875 }, // 52 IIC_iMVNsr_WriteALU
  { 1, 13, 15, 875, 878 }, // 53 IIC_iALUr_WriteALU_ReadALU
  { 1, 45, 49, 878, 881 }, // 54 IIC_iStore_r
  { 1, 72, 76, 881, 884 }, // 55 IIC_iStore_bh_r
  { 1, 20, 22, 884, 887 }, // 56 IIC_iALUsi_WriteALUsi_ReadALU
  { 1, 20, 22, 887, 890 }, // 57 IIC_iBITsi_WriteALUsi_ReadALU
  { 1, 76, 77, 890, 892 }, // 58 IIC_Preload_WritePreLd
  { 0, 0, 0, 0, 0 }, // 59 IIC_iDIV
  { 1, 53, 55, 892, 896 }, // 60 IIC_iMAC16
  { 1, 77, 79, 896, 900 }, // 61 IIC_iMAC64
  { 1, 53, 55, 900, 903 }, // 62 IIC_iMUL16
  { 1, 77, 79, 903, 907 }, // 63 IIC_iMUL64
  { -1, 79, 83, 0, 0 }, // 64 IIC_iStore_m
  { -1, 79, 83, 907, 908 }, // 65 IIC_iStore_mu
  { 1, 72, 76, 908, 912 }, // 66 IIC_iStore_bh_ru
  { 1, 72, 76, 912, 915 }, // 67 IIC_iStore_bh_iu
  { 1, 45, 49, 915, 919 }, // 68 IIC_iStore_ru
  { 1, 72, 76, 919, 922 }, // 69 IIC_iStore_bh_si
  { 1, 72, 76, 922, 925 }, // 70 IIC_iStore_d_r
  { 1, 72, 76, 925, 929 }, // 71 IIC_iStore_d_ru
  { 1, 45, 49, 929, 932 }, // 72 IIC_iStore_iu
  { 1, 45, 49, 932, 935 }, // 73 IIC_iStore_si
  { 1, 20, 22, 935, 938 }, // 74 IIC_iEXTAr_WriteALUsr
  { 1, 13, 15, 938, 940 }, // 75 IIC_iEXTr_WriteALUsi
  { 1, 13, 15, 940, 941 }, // 76 IIC_iTSTi_WriteCMP_ReadALU
  { 1, 13, 15, 941, 943 }, // 77 IIC_iTSTr_WriteCMP_ReadALU_ReadALU
  { 1, 15, 17, 943, 946 }, // 78 IIC_iTSTsr_WriteCMPsi_ReadALU
  { 1, 15, 17, 946, 949 }, // 79 IIC_iTSTsr_WriteCMPsr_ReadALU
  { 0, 0, 0, 0, 0 }, // 80 WriteALU_ReadALU_ReadALU
  { 1, 83, 88, 949, 953 }, // 81 IIC_VABAD
  { 1, 88, 93, 953, 957 }, // 82 IIC_VABAQ
  { 1, 83, 88, 957, 960 }, // 83 IIC_VSUBi4Q
  { 1, 83, 88, 960, 963 }, // 84 IIC_VBIND
  { 1, 93, 98, 963, 966 }, // 85 IIC_VBINQ
  { 1, 83, 88, 966, 969 }, // 86 IIC_VSUBi4D
  { 1, 83, 88, 969, 971 }, // 87 IIC_VUNAD
  { 1, 93, 98, 971, 973 }, // 88 IIC_VUNAQ
  { 1, 83, 88, 973, 975 }, // 89 IIC_VUNAiQ
  { 1, 83, 88, 975, 977 }, // 90 IIC_VUNAiD
  { 1, 98, 103, 977, 980 }, // 91 IIC_fpALU64
  { 1, 83, 88, 980, 983 }, // 92 IIC_VBINi4D
  { 1, 83, 88, 983, 986 }, // 93 IIC_VSHLiD
  { 1, 98, 103, 986, 989 }, // 94 IIC_fpALU32
  { 1, 83, 88, 989, 992 }, // 95 IIC_VSUBiD
  { 1, 83, 88, 992, 995 }, // 96 IIC_VBINiQ
  { 1, 83, 88, 995, 998 }, // 97 IIC_VBINiD
  { 1, 83, 88, 998, 999 }, // 98 IIC_VMOVImm
  { 1, 83, 88, 999, 1002 }, // 99 IIC_VCNTiD
  { 1, 93, 98, 1002, 1005 }, // 100 IIC_VCNTiQ
  { 1, 98, 103, 1005, 1007 }, // 101 IIC_fpCMP64
  { 1, 98, 103, 1007, 1009 }, // 102 IIC_fpCMP32
  { 1, 98, 103, 1009, 1011 }, // 103 IIC_fpCVTSH
  { 1, 22, 27, 1011, 1013 }, // 104 IIC_fpCVTHS
  { 1, 98, 103, 1013, 1015 }, // 105 IIC_fpCVTDS
  { 1, 98, 103, 1015, 1017 }, // 106 IIC_fpCVTSD
  { 1, 103, 108, 1017, 1020 }, // 107 IIC_fpDIV64
  { 1, 108, 113, 1020, 1023 }, // 108 IIC_fpDIV32
  { 1, 113, 118, 1023, 1025 }, // 109 IIC_VMOVIS
  { 1, 83, 88, 1025, 1027 }, // 110 IIC_VMOVD
  { 1, 83, 88, 1027, 1029 }, // 111 IIC_VMOVQ
  { 1, 83, 88, 1029, 1032 }, // 112 IIC_VEXTD
  { 1, 93, 98, 1032, 1035 }, // 113 IIC_VEXTQ
  { 1, 118, 123, 1035, 1039 }, // 114 IIC_fpFMAC64
  { 1, 123, 128, 1039, 1043 }, // 115 IIC_fpFMAC32
  { 1, 93, 98, 1043, 1047 }, // 116 IIC_VFMACD
  { 1, 128, 133, 1047, 1051 }, // 117 IIC_VFMACQ
  { 1, 113, 118, 1051, 1053 }, // 118 IIC_VMOVSI
  { 1, 83, 88, 1053, 1056 }, // 119 IIC_VBINi4Q
  { 1, 133, 139, 1056, 1058 }, // 120 IIC_VLD1dup
  { 1, 133, 139, 1058, 1062 }, // 121 IIC_VLD1dupu
  { 1, 139, 145, 1062, 1066 }, // 122 IIC_VLD1ln
  { 1, 139, 145, 1066, 1072 }, // 123 IIC_VLD1lnu
  { 1, 133, 139, 1072, 1074 }, // 124 IIC_VLD1
  { 1, 139, 145, 1074, 1079 }, // 125 IIC_VLD1x4
  { 1, 133, 139, 1079, 1083 }, // 126 IIC_VLD1x2u
  { 1, 139, 145, 1083, 1087 }, // 127 IIC_VLD1x3
  { 1, 133, 139, 1087, 1090 }, // 128 IIC_VLD1u
  { 1, 133, 139, 1090, 1093 }, // 129 IIC_VLD1x2
  { 1, 133, 139, 1093, 1096 }, // 130 IIC_VLD2dup
  { 1, 133, 139, 1096, 1101 }, // 131 IIC_VLD2dupu
  { 1, 139, 145, 1101, 1107 }, // 132 IIC_VLD2ln
  { 1, 139, 145, 1107, 1115 }, // 133 IIC_VLD2lnu
  { 1, 133, 139, 1115, 1118 }, // 134 IIC_VLD2
  { 1, 133, 139, 1118, 1124 }, // 135 IIC_VLD2u
  { 1, 139, 145, 1124, 1129 }, // 136 IIC_VLD2x2
  { 1, 139, 145, 1129, 1135 }, // 137 IIC_VLD2x2u
  { 1, 145, 151, 1135, 1139 }, // 138 IIC_VLD3dup
  { 1, 145, 151, 1139, 1145 }, // 139 IIC_VLD3dupu
  { 1, 151, 157, 1145, 1153 }, // 140 IIC_VLD3ln
  { 1, 151, 157, 1153, 1163 }, // 141 IIC_VLD3lnu
  { 1, 145, 151, 1163, 1167 }, // 142 IIC_VLD3
  { 1, 145, 151, 1167, 1172 }, // 143 IIC_VLD3u
  { 1, 139, 145, 1172, 1177 }, // 144 IIC_VLD4dup
  { 1, 139, 145, 1177, 1184 }, // 145 IIC_VLD4dupu
  { 1, 157, 163, 1184, 1194 }, // 146 IIC_VLD4ln
  { 1, 157, 163, 1194, 1206 }, // 147 IIC_VLD4lnu
  { 1, 145, 151, 1206, 1211 }, // 148 IIC_VLD4
  { 1, 145, 151, 1211, 1217 }, // 149 IIC_VLD4u
  { -1, 163, 169, 1217, 1221 }, // 150 IIC_fpLoad_mu
  { -1, 163, 169, 1221, 1225 }, // 151 IIC_fpLoad_m
  { 1, 169, 175, 1225, 1227 }, // 152 IIC_fpLoad64
  { 1, 169, 175, 1227, 1229 }, // 153 IIC_fpLoad32
  { 1, 118, 123, 1229, 1233 }, // 154 IIC_fpMAC64
  { 1, 93, 98, 1233, 1237 }, // 155 IIC_VMACi32D
  { 1, 83, 88, 1237, 1241 }, // 156 IIC_VMACi16D
  { 1, 123, 128, 1241, 1245 }, // 157 IIC_fpMAC32
  { 1, 93, 98, 1245, 1249 }, // 158 IIC_VMACD
  { 1, 128, 133, 1249, 1253 }, // 159 IIC_VMACQ
  { 1, 128, 133, 1253, 1257 }, // 160 IIC_VMACi32Q
  { 1, 93, 98, 1257, 1261 }, // 161 IIC_VMACi16Q
  { 1, 22, 27, 1261, 1264 }, // 162 IIC_fpMOVID
  { 1, 83, 88, 1264, 1266 }, // 163 IIC_VQUNAiD
  { 1, 83, 88, 1266, 1268 }, // 164 IIC_VMOVN
  { 1, 175, 177, 1268, 1271 }, // 165 IIC_fpMOVDI
  { 1, 175, 177, 1271, 1273 }, // 166 IIC_fpMOVSI
  { 1, 22, 27, 1273, 1275 }, // 167 IIC_fpMOVIS
  { 1, 177, 182, 1275, 1278 }, // 168 IIC_fpMUL64
  { 1, 83, 88, 1278, 1281 }, // 169 IIC_VMULi16D
  { 1, 93, 98, 1281, 1284 }, // 170 IIC_VMULi32D
  { 1, 182, 187, 1284, 1287 }, // 171 IIC_fpMUL32
  { 1, 83, 88, 1287, 1290 }, // 172 IIC_VFMULD
  { 1, 187, 192, 1290, 1293 }, // 173 IIC_VFMULQ
  { 1, 93, 98, 1293, 1296 }, // 174 IIC_VMULi16Q
  { 1, 128, 133, 1296, 1299 }, // 175 IIC_VMULi32Q
  { 1, 83, 88, 1299, 1302 }, // 176 IIC_VSHLiQ
  { 1, 88, 93, 1302, 1305 }, // 177 IIC_VPALiQ
  { 1, 83, 88, 1305, 1308 }, // 178 IIC_VPALiD
  { 1, 83, 88, 1308, 1311 }, // 179 IIC_VPBIND
  { 1, 83, 88, 1311, 1313 }, // 180 IIC_VQUNAiQ
  { 1, 83, 88, 1313, 1316 }, // 181 IIC_VSHLi4Q
  { 1, 83, 88, 1316, 1319 }, // 182 IIC_VSHLi4D
  { 1, 192, 197, 1319, 1322 }, // 183 IIC_VRECSD
  { 1, 197, 202, 1322, 1325 }, // 184 IIC_VRECSQ
  { 1, 202, 207, 1325, 1328 }, // 185 IIC_VMOVISL
  { 1, 98, 103, 1328, 1330 }, // 186 IIC_fpCVTID_WriteCvtFP
  { 1, 98, 103, 1330, 1332 }, // 187 IIC_fpCVTIS_WriteCvtFP
  { 1, 98, 103, 1332, 1334 }, // 188 IIC_fpCVTID
  { 1, 98, 103, 1334, 1336 }, // 189 IIC_fpCVTIS
  { 1, 207, 212, 1336, 1338 }, // 190 IIC_fpSQRT64
  { 1, 212, 217, 1338, 1340 }, // 191 IIC_fpSQRT32
  { 1, 217, 223, 1340, 1343 }, // 192 IIC_VST1ln
  { 1, 217, 223, 1343, 1348 }, // 193 IIC_VST1lnu
  { 1, 217, 223, 1348, 1351 }, // 194 IIC_VST1
  { 1, 223, 229, 1351, 1357 }, // 195 IIC_VST1x4
  { 1, 139, 145, 1357, 1363 }, // 196 IIC_VLD1x4u
  { 1, 223, 229, 1363, 1368 }, // 197 IIC_VST1x3
  { 1, 139, 145, 1368, 1373 }, // 198 IIC_VLD1x3u
  { 1, 223, 229, 1373, 1381 }, // 199 IIC_VST1x4u
  { 1, 223, 229, 1381, 1388 }, // 200 IIC_VST1x3u
  { 1, 217, 223, 1388, 1392 }, // 201 IIC_VST1x2
  { 1, 217, 223, 1392, 1396 }, // 202 IIC_VST2ln
  { 1, 217, 223, 1396, 1402 }, // 203 IIC_VST2lnu
  { 1, 217, 223, 1402, 1406 }, // 204 IIC_VST2
  { 1, 229, 235, 1406, 1412 }, // 205 IIC_VST2x2
  { 1, 229, 235, 1412, 1420 }, // 206 IIC_VST2x2u
  { 1, 229, 235, 1420, 1425 }, // 207 IIC_VST3ln
  { 1, 229, 235, 1425, 1432 }, // 208 IIC_VST3lnu
  { 1, 223, 229, 1432, 1437 }, // 209 IIC_VST3
  { 1, 223, 229, 1437, 1444 }, // 210 IIC_VST3u
  { 1, 223, 229, 1444, 1450 }, // 211 IIC_VST4ln
  { 1, 223, 229, 1450, 1458 }, // 212 IIC_VST4lnu
  { 1, 223, 229, 1458, 1464 }, // 213 IIC_VST4
  { 1, 223, 229, 1464, 1472 }, // 214 IIC_VST4u
  { -1, 163, 169, 1472, 1476 }, // 215 IIC_fpStore_m
  { 1, 169, 175, 1476, 1478 }, // 216 IIC_fpStore64
  { 1, 169, 175, 1478, 1480 }, // 217 IIC_fpStore32
  { 1, 83, 88, 1480, 1483 }, // 218 IIC_VSUBiQ
  { 1, 93, 98, 1483, 1486 }, // 219 IIC_VTB1
  { 1, 235, 240, 1486, 1490 }, // 220 IIC_VTB2
  { 1, 240, 245, 1490, 1495 }, // 221 IIC_VTB3
  { 1, 245, 250, 1495, 1501 }, // 222 IIC_VTB4
  { 1, 93, 98, 1501, 1505 }, // 223 IIC_VTBX1
  { 1, 93, 98, 1505, 1510 }, // 224 IIC_VTBX2
  { 1, 245, 250, 1510, 1516 }, // 225 IIC_VTBX3
  { 1, 250, 255, 1516, 1523 }, // 226 IIC_VTBX4
  { 1, 98, 103, 1523, 1525 }, // 227 IIC_fpCVTDI_WriteCvtFP
  { 1, 98, 103, 1525, 1527 }, // 228 IIC_fpCVTSI_WriteCvtFP
  { 1, 98, 103, 1527, 1529 }, // 229 IIC_fpCVTDI
  { 1, 98, 103, 1529, 1531 }, // 230 IIC_fpCVTSI
  { 1, 83, 88, 1531, 1535 }, // 231 IIC_VPERMD
  { 1, 93, 98, 1535, 1539 }, // 232 IIC_VPERMQ
  { 1, 245, 250, 1539, 1543 }, // 233 IIC_VPERMQ3
  { 1, 20, 22, 1543, 1546 }, // 234 IIC_iALUsi_WriteALUsi_ReadALUsr
  { 1, 13, 15, 1546, 1548 }, // 235 IIC_iBITi
  { 1, 20, 22, 1548, 1550 }, // 236 IIC_iCMPsi_WriteCMPsi_ReadALU_ReadALU
  { 1, 13, 15, 1550, 1551 }, // 237 IIC_iCMPi_WriteCMP
  { 1, 13, 15, 1551, 1553 }, // 238 IIC_iCMPr_WriteCMP
  { 1, 20, 22, 1553, 1555 }, // 239 IIC_iCMPsi_WriteCMPsi
  { 1, 13, 15, 0, 0 }, // 240 IIC_iALUx
  { 1, 41, 45, 1555, 1557 }, // 241 IIC_iLoad_bh_i
  { 1, 41, 45, 1557, 1560 }, // 242 IIC_iLoad_d_i
  { 1, 45, 49, 1560, 1562 }, // 243 IIC_iLoad_i
  { 1, 255, 260, 1562, 1564 }, // 244 IIC_iLoadiALU
  { 1, 13, 15, 1564, 1566 }, // 245 IIC_iCMOVsi_WriteALU
  { 1, 13, 15, 1566, 1567 }, // 246 IIC_iMOVi
  { 1, 20, 22, 1567, 1569 }, // 247 IIC_iMVNsi_WriteALU
  { 1, 20, 22, 1569, 1572 }, // 248 IIC_iALUsir_WriteALUsi_ReadALU
  { 1, 72, 76, 1572, 1574 }, // 249 IIC_iStore_bh_i
  { 1, 45, 49, 1574, 1576 }, // 250 IIC_iStore_i
  { 1, 15, 17, 1576, 1580 }, // 251 IIC_iEXTAsr
  { 1, 13, 15, 1580, 1582 }, // 252 IIC_iEXTr
  { 1, 13, 15, 1582, 1583 }, // 253 IIC_iTSTi_WriteCMP
  { 1, 13, 15, 1583, 1585 }, // 254 IIC_iTSTr_WriteCMP
  { 1, 20, 22, 1585, 1587 }, // 255 IIC_iTSTsi_WriteCMPsi
  { 1, 13, 15, 1587, 1590 }, // 256 IIC_iALUr_WriteALU
  { 1, 13, 15, 1590, 1592 }, // 257 IIC_iALUi_WriteALU
  { 1, 13, 15, 1592, 1595 }, // 258 IIC_iBITr_WriteALU
  { -1, 32, 36, 1595, 1598 }, // 259 IIC_iPop
  { -1, 260, 265, 1598, 1601 }, // 260 IIC_iPop_Br_WriteBrL
  { 1, 13, 15, 1601, 1603 }, // 261 IIC_iTSTr_WriteALU
  { 1, 13, 15, 1603, 1605 }, // 262 ANDri_BICri_EORri_ORRri
  { 1, 13, 15, 1605, 1608 }, // 263 ANDrr_BICrr_EORrr_ORRrr
  { 1, 15, 17, 1608, 1612 }, // 264 ANDrsi_BICrsi_EORrsi_ORRrsi
  { 1, 15, 17, 1612, 1616 }, // 265 ANDrsr_BICrsr_EORrsr_ORRrsr
  { 1, 20, 22, 1616, 1619 }, // 266 MOVCCsi_MOVCCsr
  { 1, 20, 22, 1619, 1622 }, // 267 MOVsi_MOVsr
  { 1, 13, 15, 1622, 1624 }, // 268 MOVsra_flag_MOVsrl_flag
  { 1, 15, 17, 1624, 1627 }, // 269 MVNsr
  { 1, 13, 15, 1627, 1629 }, // 270 MVNr
  { 1, 55, 59, 1629, 1630 }, // 271 MOVCCi32imm
  { 1, 59, 62, 1630, 1631 }, // 272 MOV_ga_dyn_MOVi32imm
  { 1, 62, 66, 1631, 1632 }, // 273 MOV_ga_pcrel
  { 1, 66, 72, 1632, 1633 }, // 274 MOV_ga_pcrel_ldr
  { 0, 0, 0, 0, 0 }, // 275 SEL
  { 1, 20, 22, 1633, 1635 }, // 276 BFC_BFI_SBFX_UBFX
  { 1, 53, 55, 1635, 1639 }, // 277 MLA_MLAv5_MLS_SMMLA_SMMLAR_SMMLS_SMMLSR
  { 1, 53, 55, 1639, 1642 }, // 278 MUL_MULv5_SMMUL_SMMULR
  { 1, 77, 79, 1642, 1646 }, // 279 SMLAL_SMLALBB_SMLALBT_SMLALTB_SMLALTT_SMLALv5_UMAAL_UMAALv5_UMLAL_UMLALv5
  { 1, 77, 79, 1646, 1650 }, // 280 SMULL_SMULLv5_UMULL_UMULLv5
  { 0, 0, 0, 0, 0 }, // 281 SMLAD_SMLADX_SMLALD_SMLALDX_SMLSD_SMLSDX_SMLSLD_SMLSLDX_SMUAD_SMUADX_SMUSD_SMUSDX
  { 1, 53, 55, 1650, 1653 }, // 282 SMULBB_SMULBT_SMULTB_SMULTT_SMULWB_SMULWT
  { 1, 53, 55, 1653, 1657 }, // 283 SMLABB_SMLABT_SMLATB_SMLATT_SMLAWB_SMLAWT
  { 1, 45, 49, 1657, 1660 }, // 284 LDRi12_PICLDR
  { 1, 49, 53, 1660, 1663 }, // 285 LDRrs
  { 1, 41, 45, 1663, 1666 }, // 286 LDRBi12_LDRH_LDRSB_LDRSH_PICLDRB_PICLDRH_PICLDRSB_PICLDRSH
  { 1, 41, 45, 1666, 1670 }, // 287 LDRHTi_LDRHTr_LDRH_POST_LDRH_PRE_LDRSBTi_LDRSBTr_LDRSB_POST_LDRSB_PRE_LDRSHTi_LDRSHTr_LDRSH_POST_LDRSH_PRE
  { 1, 13, 15, 1670, 1672 }, // 288 SXTB_SXTB16_SXTH_UXTB_UXTB16_UXTH
  { 1, 13, 15, 1672, 1674 }, // 289 t2SXTB_t2SXTB16_t2SXTH_t2UXTB_t2UXTB16_t2UXTH
  { 1, 55, 59, 1674, 1675 }, // 290 t2MOVCCi32imm
  { 1, 59, 62, 1675, 1676 }, // 291 t2MOV_ga_dyn_t2MOVi32imm
  { 1, 62, 66, 1676, 1677 }, // 292 t2MOV_ga_pcrel
  { 1, 13, 15, 1677, 1678 }, // 293 t2MOVi16_ga_pcrel
  { 0, 0, 0, 0, 0 }, // 294 t2SEL
  { 1, 20, 22, 1678, 1680 }, // 295 t2BFC_t2SBFX_t2UBFX
  { 1, 13, 15, 1680, 1682 }, // 296 t2BFI
  { 1, 13, 15, 1682, 1685 }, // 297 QADD_QADD16_QADD8_QASX_QDADD_QDSUB_QSAX_QSUB_QSUB16_QSUB8_UQADD16_UQADD8_UQASX_UQSAX_UQSUB16_UQSUB8
  { 0, 0, 0, 0, 0 }, // 298 SSAT_SSAT16_USAT_USAT16_t2QADD_t2QADD16_t2QADD8_t2QASX_t2QDADD_t2QDSUB_t2QSAX_t2QSUB_t2QSUB16_t2QSUB8_t2SSAT_t2SSAT16_t2UQADD16_t2UQADD8_t2UQASX_t2UQSAX_t2UQSUB16_t2UQSUB8_t2USAT_t2USAT16
  { 1, 13, 15, 1685, 1688 }, // 299 SADD16_SADD8_SASX_SSAX_SSUB16_SSUB8_UADD16_UADD8_UASX_USAX_USUB16_USUB8
  { 0, 0, 0, 0, 0 }, // 300 t2SADD16_t2SADD8_t2SASX_t2SSAX_t2SSUB16_t2SSUB8_t2UADD16_t2UADD8_t2UASX_t2USAX_t2USUB16_t2USUB8
  { 1, 13, 15, 1688, 1691 }, // 301 SHADD16_SHADD8_SHASX_SHSAX_SHSUB16_SHSUB8_UHADD16_UHADD8_UHASX_UHSAX_UHSUB16_UHSUB8
  { 1, 20, 22, 1691, 1694 }, // 302 SXTAB_SXTAB16_SXTAH_UXTAB_UXTAB16_UXTAH
  { 0, 0, 0, 0, 0 }, // 303 t2SHADD16_t2SHADD8_t2SHASX_t2SHSAX_t2SHSUB16_t2SHSUB8_t2UHADD16_t2UHADD8_t2UHASX_t2UHSAX_t2UHSUB16_t2UHSUB8
  { 1, 15, 17, 1694, 1698 }, // 304 t2SXTAB_t2SXTAB16_t2SXTAH_t2UXTAB_t2UXTAB16_t2UXTAH
  { 0, 0, 0, 0, 0 }, // 305 USAD8
  { 0, 0, 0, 0, 0 }, // 306 USADA8
  { 0, 0, 0, 0, 0 }, // 307 SMUSD_SMUSDX
  { 1, 53, 55, 1698, 1701 }, // 308 t2MUL_t2SMMUL_t2SMMULR
  { 1, 53, 55, 1701, 1704 }, // 309 t2SMULBB_t2SMULBT_t2SMULTB_t2SMULTT_t2SMULWB_t2SMULWT
  { 1, 53, 55, 1704, 1708 }, // 310 t2SMUSD_t2SMUSDX
  { 1, 53, 55, 1708, 1712 }, // 311 t2MLA_t2MLS_t2SMMLA_t2SMMLAR_t2SMMLS_t2SMMLSR
  { 0, 0, 0, 0, 0 }, // 312 SMUAD_SMUADX
  { 1, 53, 55, 1712, 1716 }, // 313 t2SMUAD_t2SMUADX
  { 0, 0, 0, 0, 0 }, // 314 SMLSD_SMLSDX
  { 1, 53, 55, 1716, 1720 }, // 315 t2SMLABB_t2SMLABT_t2SMLATB_t2SMLATT_t2SMLAWB_t2SMLAWT
  { 1, 53, 55, 1720, 1724 }, // 316 t2SMLSD_t2SMLSDX
  { 0, 0, 0, 0, 0 }, // 317 SMLAD_SMLADX
  { 1, 53, 55, 1724, 1728 }, // 318 t2SMLAD_t2SMLADX
  { 1, 77, 79, 1728, 1732 }, // 319 SMULL_UMULL
  { 1, 77, 79, 1732, 1736 }, // 320 t2SMULL_t2UMULL
  { 1, 77, 79, 1736, 1740 }, // 321 t2SMLAL_t2SMLALBB_t2SMLALBT_t2SMLALD_t2SMLALDX_t2SMLALTB_t2SMLALTT_t2SMLSLD_t2SMLSLDX_t2UMAAL_t2UMLAL
  { 0, 0, 0, 0, 0 }, // 322 SDIV_UDIV_t2SDIV_t2UDIV
  { 1, 41, 45, 1740, 1743 }, // 323 LDRBi12
  { 1, 41, 45, 1743, 1746 }, // 324 LDRBrs_t2LDRBs_t2LDRHs
  { 0, 0, 0, 0, 0 }, // 325 LDREX_LDREXB_LDREXD_LDREXH_tLDRpci_pic
  { 1, 45, 49, 1746, 1749 }, // 326 LDRi12
  { 1, 41, 45, 1749, 1751 }, // 327 t2LDRBi12_t2LDRBi8_t2LDRBpci_t2LDRHi12_t2LDRHi8_t2LDRHpci_tLDRBi_tLDRHi
  { 1, 45, 49, 1751, 1753 }, // 328 t2LDRi12_t2LDRi8_t2LDRpci_tLDRi_tLDRpci_tLDRspi
  { 1, 255, 260, 1753, 1755 }, // 329 t2LDRpci_pic
  { 1, 49, 53, 1755, 1758 }, // 330 t2LDRs
  { 1, 41, 45, 1758, 1761 }, // 331 tLDRBr_tLDRHr
  { 1, 45, 49, 1761, 1764 }, // 332 tLDRr
  { 1, 41, 45, 1764, 1767 }, // 333 LDRH_PICLDRB_PICLDRH
  { 1, 45, 49, 1767, 1770 }, // 334 LDRcp
  { 1, 41, 45, 1770, 1772 }, // 335 t2LDRSBi12_t2LDRSBi8_t2LDRSBpci_t2LDRSHi12_t2LDRSHi8_t2LDRSHpci
  { 0, 0, 0, 0, 0 }, // 336 t2LDRSBpcrel_t2LDRSHpcrel
  { 1, 41, 45, 1772, 1775 }, // 337 t2LDRSBs_t2LDRSHs
  { 1, 41, 45, 1775, 1778 }, // 338 tLDRSB_tLDRSH
  { 1, 41, 45, 1778, 1782 }, // 339 LDRBT_POST_IMM_LDRBT_POST_REG_LDRB_POST_REG_LDRB_PRE_REG
  { 1, 41, 45, 1782, 1785 }, // 340 LDRB_POST_IMM_LDRB_PRE_IMM_t2LDRB_POST_t2LDRB_PRE_t2LDRH_POST_t2LDRH_PRE
  { 1, 41, 45, 1785, 1789 }, // 341 LDRHTi_LDRHTr_LDRH_POST_LDRH_PRE
  { 1, 45, 49, 1789, 1793 }, // 342 LDRT_POST_IMM_LDRT_POST_REG_LDR_POST_REG_LDR_PRE_REG
  { 1, 45, 49, 1793, 1796 }, // 343 LDR_POST_IMM_LDR_PRE_IMM_t2LDR_POST_t2LDR_PRE
  { 1, 41, 45, 1796, 1798 }, // 344 t2LDRBT_t2LDRHT
  { 1, 45, 49, 1798, 1800 }, // 345 t2LDRT
  { 1, 41, 45, 1800, 1802 }, // 346 t2LDRSBT_t2LDRSHT
  { 1, 41, 45, 1802, 1805 }, // 347 t2LDRSB_POST_t2LDRSB_PRE_t2LDRSH_POST_t2LDRSH_PRE
  { 1, 41, 45, 1805, 1809 }, // 348 LDRD
  { 1, 41, 45, 1809, 1812 }, // 349 t2LDRDi8
  { 1, 41, 45, 1812, 1816 }, // 350 LDRD_POST_LDRD_PRE_t2LDRD_POST_t2LDRD_PRE
  { -1, 32, 36, 1816, 1821 }, // 351 LDMDA_LDMDB_LDMIA_LDMIB_sysLDMDA_sysLDMDB_sysLDMIA_sysLDMIB_t2LDMDB_t2LDMIA_tLDMIA
  { -1, 32, 36, 1821, 1826 }, // 352 LDMDA_UPD_LDMDB_UPD_LDMIA_UPD_LDMIB_UPD_sysLDMDA_UPD_sysLDMDB_UPD_sysLDMIA_UPD_sysLDMIB_UPD_t2LDMDB_UPD_t2LDMIA_UPD_tLDMIA_UPD
  { -1, 36, 41, 1826, 1831 }, // 353 LDMIA_RET_t2LDMIA_RET
  { -1, 32, 36, 1831, 1834 }, // 354 tPOP
  { -1, 260, 265, 1834, 1837 }, // 355 tPOP_RET
  { 1, 45, 49, 1837, 1840 }, // 356 PICSTR_STRi12_tSTRr
  { 1, 72, 76, 1840, 1843 }, // 357 PICSTRB_PICSTRH_STRBi12_STRH_tSTRBr_tSTRHr
  { 1, 72, 76, 1843, 1846 }, // 358 STRBrs_t2STRBs_t2STRHs
  { 0, 0, 0, 0, 0 }, // 359 STREX_STREXB_STREXD_STREXH
  { 1, 45, 49, 1846, 1849 }, // 360 STRrs_t2STRs
  { 1, 72, 76, 1849, 1851 }, // 361 t2STRBi12_t2STRBi8_t2STRHi12_t2STRHi8_tSTRBi_tSTRHi
  { 1, 45, 49, 1851, 1853 }, // 362 t2STRi12_t2STRi8_tSTRi_tSTRspi
  { 1, 72, 76, 1853, 1857 }, // 363 STRBT_POST_IMM_STRBT_POST_REG_STRB_POST_REG_STRB_PRE_REG_STRHTi_STRHTr_STRH_POST_STRH_PRE
  { 1, 72, 76, 1857, 1860 }, // 364 STRB_POST_IMM_STRB_PRE_IMM_t2STRB_POST_t2STRB_PRE_t2STRH_POST
  { 1, 45, 49, 1860, 1864 }, // 365 STRBi_preidx_STRBr_preidx_STRH_preidx_STRT_POST_IMM_STRT_POST_REG_STR_POST_REG_STR_PRE_REG_STRi_preidx_STRr_preidx_t2STRB_preidx_t2STRH_preidx_t2STR_preidx
  { 1, 45, 49, 1864, 1867 }, // 366 STR_POST_IMM_STR_PRE_IMM_t2STRH_PRE_t2STR_POST_t2STR_PRE
  { 1, 72, 76, 1867, 1869 }, // 367 t2STRBT_t2STRHT
  { 1, 45, 49, 1869, 1871 }, // 368 t2STRT
  { 1, 72, 76, 1871, 1874 }, // 369 STRD_t2STRDi8
  { 1, 72, 76, 1874, 1878 }, // 370 STRD_POST_STRD_PRE_t2STRD_POST_t2STRD_PRE
  { -1, 79, 83, 0, 0 }, // 371 STMDA_STMDB_STMIA_STMIB_sysSTMDA_sysSTMDB_sysSTMIA_sysSTMIB_t2STMDB_t2STMIA
  { -1, 79, 83, 1878, 1879 }, // 372 STMDA_UPD_STMDB_UPD_STMIA_UPD_STMIB_UPD_sysSTMDA_UPD_sysSTMDB_UPD_sysSTMIA_UPD_sysSTMIB_UPD_t2STMDB_UPD_t2STMIA_UPD_tSTMIA_UPD
  { -1, 79, 83, 0, 0 }, // 373 tPUSH
  { 0, 0, 0, 0, 0 }, // 374 ITasm
  { 1, 13, 15, 0, 0 }, // 375 t2IT
  { 1, 83, 88, 1879, 1882 }, // 376 VADDLsv2i64_VADDLsv4i32_VADDLsv8i16_VADDLuv2i64_VADDLuv4i32_VADDLuv8i16_VNEGs16d_VNEGs32d_VNEGs8d_VPADDLsv16i8_VPADDLsv2i32_VPADDLsv4i16_VPADDLsv4i32_VPADDLsv8i16_VPADDLsv8i8_VPADDLuv16i8_VPADDLuv2i32_VPADDLuv4i16_VPADDLuv4i32_VPADDLuv8i16_VPADDLuv8i8_VPADDi16_VPADDi32_VPADDi8_VSHLLi16_VSHLLi32_VSHLLi8_VSHLLsv2i64_VSHLLsv4i32_VSHLLsv8i16_VSHLLuv2i64_VSHLLuv4i32_VSHLLuv8i16_VSHLiv16i8_VSHLiv1i64_VSHLiv2i32_VSHLiv2i64_VSHLiv4i16_VSHLiv4i32_VSHLiv8i16_VSHLiv8i8_VSHLsv1i64_VSHLsv2i32_VSHLsv4i16_VSHLsv8i8_VSHLuv1i64_VSHLuv2i32_VSHLuv4i16_VSHLuv8i8_VSHRsv16i8_VSHRsv1i64_VSHRsv2i32_VSHRsv2i64_VSHRsv4i16_VSHRsv4i32_VSHRsv8i16_VSHRsv8i8_VSHRuv16i8_VSHRuv1i64_VSHRuv2i32_VSHRuv2i64_VSHRuv4i16_VSHRuv4i32_VSHRuv8i16_VSHRuv8i8_VSLIv1i64_VSLIv2i32_VSLIv4i16_VSLIv8i8_VSRIv1i64_VSRIv2i32_VSRIv4i16_VSRIv8i8_VSUBLsv2i64_VSUBLsv4i32_VSUBLsv8i16_VSUBLuv2i64_VSUBLuv4i32_VSUBLuv8i16
  { 1, 83, 88, 1882, 1885 }, // 377 VADDWsv2i64_VADDWsv4i32_VADDWsv8i16_VADDWuv2i64_VADDWuv4i32_VADDWuv8i16_VSUBWsv2i64_VSUBWsv4i32_VSUBWsv8i16_VSUBWuv2i64_VSUBWuv4i32_VSUBWuv8i16_VSUBv1i64_VSUBv2i32_VSUBv4i16_VSUBv8i8
  { 1, 83, 88, 1885, 1888 }, // 378 VADDv16i8_VADDv2i64_VADDv4i32_VADDv8i16_VANDq_VBICq_VBIFq_VBITq_VEORq_VORNq_VORRq
  { 1, 83, 88, 1888, 1891 }, // 379 VADDv1i64_VADDv2i32_VADDv4i16_VADDv8i8_VANDd_VBICd_VBIFd_VBITd_VEORd_VORNd_VORRd
  { 1, 83, 88, 1891, 1892 }, // 380 VBICiv2i32_VBICiv4i16_VBICiv4i32_VBICiv8i16_VORRiv2i32_VORRiv4i16_VORRiv4i32_VORRiv8i16
  { 1, 83, 88, 1892, 1895 }, // 381 VBSLd_VCLSv2i32_VCLSv4i16_VCLSv8i8_VCLZv2i32_VCLZv4i16_VCLZv8i8_VCNTd
  { 1, 93, 98, 1895, 1898 }, // 382 VBSLq_VCLSv16i8_VCLSv4i32_VCLSv8i16_VCLZv16i8_VCLZv4i32_VCLZv8i16_VCNTq
  { 1, 83, 88, 1898, 1901 }, // 383 VHADDsv16i8_VHADDsv4i32_VHADDsv8i16_VHADDuv16i8_VHADDuv4i32_VHADDuv8i16_VRHADDsv16i8_VRHADDsv4i32_VRHADDsv8i16_VRHADDuv16i8_VRHADDuv4i32_VRHADDuv8i16_VTSTv16i8_VTSTv4i32_VTSTv8i16
  { 1, 83, 88, 1901, 1904 }, // 384 VHADDsv2i32_VHADDsv4i16_VHADDsv8i8_VHADDuv2i32_VHADDuv4i16_VHADDuv8i8_VRHADDsv2i32_VRHADDsv4i16_VRHADDsv8i8_VRHADDuv2i32_VRHADDuv4i16_VRHADDuv8i8_VTSTv2i32_VTSTv4i16_VTSTv8i8
  { 1, 83, 88, 1904, 1907 }, // 385 VHSUBsv16i8_VHSUBsv4i32_VHSUBsv8i16_VHSUBuv16i8_VHSUBuv4i32_VHSUBuv8i16
  { 1, 83, 88, 1907, 1910 }, // 386 VHSUBsv2i32_VHSUBsv4i16_VHSUBsv8i8_VHSUBuv2i32_VHSUBuv4i16_VHSUBuv8i8
  { 1, 93, 98, 1910, 1912 }, // 387 VNEGf32q
  { 1, 83, 88, 1912, 1914 }, // 388 VNEGfd
  { 1, 83, 88, 1914, 1917 }, // 389 VNEGs16q_VNEGs32q_VNEGs8q_VSHLsv16i8_VSHLsv2i64_VSHLsv4i32_VSHLsv8i16_VSHLuv16i8_VSHLuv2i64_VSHLuv4i32_VSHLuv8i16_VSLIv16i8_VSLIv2i64_VSLIv4i32_VSLIv8i16_VSRIv16i8_VSRIv2i64_VSRIv4i32_VSRIv8i16
  { 1, 83, 88, 1917, 1920 }, // 390 VQSHLsiv16i8_VQSHLsiv1i64_VQSHLsiv2i32_VQSHLsiv2i64_VQSHLsiv4i16_VQSHLsiv4i32_VQSHLsiv8i16_VQSHLsiv8i8_VQSHLsuv16i8_VQSHLsuv1i64_VQSHLsuv2i32_VQSHLsuv2i64_VQSHLsuv4i16_VQSHLsuv4i32_VQSHLsuv8i16_VQSHLsuv8i8_VQSHLsv1i64_VQSHLsv2i32_VQSHLsv4i16_VQSHLsv8i8_VQSHLuiv16i8_VQSHLuiv1i64_VQSHLuiv2i32_VQSHLuiv2i64_VQSHLuiv4i16_VQSHLuiv4i32_VQSHLuiv8i16_VQSHLuiv8i8_VQSHLuv1i64_VQSHLuv2i32_VQSHLuv4i16_VQSHLuv8i8
  { 1, 83, 88, 1920, 1923 }, // 391 VQSHLsv16i8_VQSHLsv2i64_VQSHLsv4i32_VQSHLsv8i16_VQSHLuv16i8_VQSHLuv2i64_VQSHLuv4i32_VQSHLuv8i16
  { 1, 83, 88, 1923, 1926 }, // 392 VSUBv16i8_VSUBv2i64_VSUBv4i32_VSUBv8i16
  { 1, 83, 88, 1926, 1929 }, // 393 VEXTd16_VEXTd32_VEXTd8
  { 1, 93, 98, 1929, 1932 }, // 394 VEXTq16_VEXTq32_VEXTq64_VEXTq8
  { 1, 83, 88, 1932, 1934 }, // 395 VREV16d8_VREV32d16_VREV32d8_VREV64d16_VREV64d32_VREV64d8
  { 1, 83, 88, 1934, 1936 }, // 396 VREV16q8_VREV32q16_VREV32q8_VREV64q16_VREV64q32_VREV64q8
  { 1, 83, 88, 1936, 1940 }, // 397 VABALsv2i64_VABALsv4i32_VABALsv8i16_VABALuv2i64_VABALuv4i32_VABALuv8i16_VABAsv2i32_VABAsv4i16_VABAsv8i8_VABAuv2i32_VABAuv4i16_VABAuv8i8
  { 1, 88, 93, 1940, 1944 }, // 398 VABAsv16i8_VABAsv4i32_VABAsv8i16_VABAuv16i8_VABAuv4i32_VABAuv8i16
  { 1, 83, 88, 1944, 1946 }, // 399 VABSfd
  { 1, 93, 98, 1946, 1948 }, // 400 VABSfq
  { 1, 83, 88, 1948, 1950 }, // 401 VABSv16i8_VABSv4i32_VABSv8i16
  { 1, 83, 88, 1950, 1952 }, // 402 VABSv2i32_VABSv4i16_VABSv8i8
  { 1, 83, 88, 1952, 1955 }, // 403 VACGEd_VACGTd_VCEQfd_VCGEfd_VCGTfd
  { 1, 93, 98, 1955, 1958 }, // 404 VACGEq_VACGTq_VCEQfq_VCGEfq_VCGTfq
  { 1, 83, 88, 1958, 1961 }, // 405 VCEQv16i8_VCEQv4i32_VCEQv8i16_VCGEsv16i8_VCGEsv4i32_VCGEsv8i16_VCGEuv16i8_VCGEuv4i32_VCGEuv8i16_VCGTsv16i8_VCGTsv4i32_VCGTsv8i16_VCGTuv16i8_VCGTuv4i32_VCGTuv8i16_VQSUBsv16i8_VQSUBsv2i64_VQSUBsv4i32_VQSUBsv8i16_VQSUBuv16i8_VQSUBuv2i64_VQSUBuv4i32_VQSUBuv8i16
  { 1, 83, 88, 1961, 1964 }, // 406 VCEQv2i32_VCEQv4i16_VCEQv8i8_VCGEsv2i32_VCGEsv4i16_VCGEsv8i8_VCGEuv2i32_VCGEuv4i16_VCGEuv8i8_VCGTsv2i32_VCGTsv4i16_VCGTsv8i8_VCGTuv2i32_VCGTuv4i16_VCGTuv8i8_VQSUBsv1i64_VQSUBsv2i32_VQSUBsv4i16_VQSUBsv8i8_VQSUBuv1i64_VQSUBuv2i32_VQSUBuv4i16_VQSUBuv8i8
  { 0, 0, 0, 0, 0 }, // 407 VCEQzv16i8_VCEQzv2f32_VCEQzv2i32_VCEQzv4f32_VCEQzv4i16_VCEQzv4i32_VCEQzv8i16_VCEQzv8i8_VCGEzv16i8_VCGEzv2f32_VCGEzv2i32_VCGEzv4f32_VCGEzv4i16_VCGEzv4i32_VCGEzv8i16_VCGEzv8i8_VCGTzv16i8_VCGTzv2f32_VCGTzv2i32_VCGTzv4f32_VCGTzv4i16_VCGTzv4i32_VCGTzv8i16_VCGTzv8i8_VCLEzv16i8_VCLEzv2f32_VCLEzv2i32_VCLEzv4f32_VCLEzv4i16_VCLEzv4i32_VCLEzv8i16_VCLEzv8i8_VCLTzv16i8_VCLTzv2f32_VCLTzv2i32_VCLTzv4f32_VCLTzv4i16_VCLTzv4i32_VCLTzv8i16_VCLTzv8i8
  { 1, 88, 93, 1964, 1967 }, // 408 VPADALsv16i8_VPADALsv4i32_VPADALsv8i16_VPADALuv16i8_VPADALuv4i32_VPADALuv8i16
  { 1, 83, 88, 1967, 1970 }, // 409 VPADALsv2i32_VPADALsv4i16_VPADALsv8i8_VPADALuv2i32_VPADALuv4i16_VPADALuv8i8_VRSRAsv16i8_VRSRAsv1i64_VRSRAsv2i32_VRSRAsv2i64_VRSRAsv4i16_VRSRAsv4i32_VRSRAsv8i16_VRSRAsv8i8_VRSRAuv16i8_VRSRAuv1i64_VRSRAuv2i32_VRSRAuv2i64_VRSRAuv4i16_VRSRAuv4i32_VRSRAuv8i16_VRSRAuv8i8_VSRAsv16i8_VSRAsv1i64_VSRAsv2i32_VSRAsv2i64_VSRAsv4i16_VSRAsv4i32_VSRAsv8i16_VSRAsv8i8_VSRAuv16i8_VSRAuv1i64_VSRAuv2i32_VSRAuv2i64_VSRAuv4i16_VSRAuv4i32_VSRAuv8i16_VSRAuv8i8
  { 1, 83, 88, 1970, 1972 }, // 410 VQABSv16i8_VQABSv4i32_VQABSv8i16_VQNEGv16i8_VQNEGv4i32_VQNEGv8i16
  { 1, 83, 88, 1972, 1974 }, // 411 VQABSv2i32_VQABSv4i16_VQABSv8i8_VQNEGv2i32_VQNEGv4i16_VQNEGv8i8
  { 1, 83, 88, 1974, 1977 }, // 412 VQADDsv16i8_VQADDsv2i64_VQADDsv4i32_VQADDsv8i16_VQADDuv16i8_VQADDuv2i64_VQADDuv4i32_VQADDuv8i16
  { 1, 83, 88, 1977, 1980 }, // 413 VQADDsv1i64_VQADDsv2i32_VQADDsv4i16_VQADDsv8i8_VQADDuv1i64_VQADDuv2i32_VQADDuv4i16_VQADDuv8i8
  { 1, 83, 88, 1980, 1983 }, // 414 VQRSHLsv16i8_VQRSHLsv2i64_VQRSHLsv4i32_VQRSHLsv8i16_VQRSHLuv16i8_VQRSHLuv2i64_VQRSHLuv4i32_VQRSHLuv8i16_VRSHLsv16i8_VRSHLsv2i64_VRSHLsv4i32_VRSHLsv8i16_VRSHLuv16i8_VRSHLuv2i64_VRSHLuv4i32_VRSHLuv8i16
  { 1, 83, 88, 1983, 1986 }, // 415 VQRSHLsv1i64_VQRSHLsv2i32_VQRSHLsv4i16_VQRSHLsv8i8_VQRSHLuv1i64_VQRSHLuv2i32_VQRSHLuv4i16_VQRSHLuv8i8_VRSHLsv1i64_VRSHLsv2i32_VRSHLsv4i16_VRSHLsv8i8_VRSHLuv1i64_VRSHLuv2i32_VRSHLuv4i16_VRSHLuv8i8_VRSHRsv16i8_VRSHRsv1i64_VRSHRsv2i32_VRSHRsv2i64_VRSHRsv4i16_VRSHRsv4i32_VRSHRsv8i16_VRSHRsv8i8_VRSHRuv16i8_VRSHRuv1i64_VRSHRuv2i32_VRSHRuv2i64_VRSHRuv4i16_VRSHRuv4i32_VRSHRuv8i16_VRSHRuv8i8
  { 1, 83, 88, 1986, 1988 }, // 416 VRECPEd_VRECPEfd_VRSQRTEd_VRSQRTEfd
  { 1, 93, 98, 1988, 1990 }, // 417 VRECPEfq_VRECPEq_VRSQRTEfq_VRSQRTEq
  { 1, 83, 88, 1990, 1993 }, // 418 VADDHNv2i32_VADDHNv4i16_VADDHNv8i8_VSUBHNv2i32_VSUBHNv4i16_VSUBHNv8i8
  { 1, 83, 88, 1993, 1996 }, // 419 VSHRNv2i32_VSHRNv4i16_VSHRNv8i8
  { 1, 83, 88, 1996, 1999 }, // 420 VQRSHRNsv2i32_VQRSHRNsv4i16_VQRSHRNsv8i8_VQRSHRNuv2i32_VQRSHRNuv4i16_VQRSHRNuv8i8_VQRSHRUNv2i32_VQRSHRUNv4i16_VQRSHRUNv8i8_VQSHRNsv2i32_VQSHRNsv4i16_VQSHRNsv8i8_VQSHRNuv2i32_VQSHRNuv4i16_VQSHRNuv8i8_VQSHRUNv2i32_VQSHRUNv4i16_VQSHRUNv8i8_VRSHRNv2i32_VRSHRNv4i16_VRSHRNv8i8
  { 1, 83, 88, 1999, 2002 }, // 421 VRADDHNv2i32_VRADDHNv4i16_VRADDHNv8i8_VRSUBHNv2i32_VRSUBHNv4i16_VRSUBHNv8i8
  { 1, 93, 98, 2002, 2005 }, // 422 VTBL1
  { 1, 93, 98, 2005, 2009 }, // 423 VTBX1
  { 1, 235, 240, 2009, 2013 }, // 424 VTBL2
  { 1, 93, 98, 2013, 2018 }, // 425 VTBX2
  { 1, 240, 245, 2018, 2023 }, // 426 VTBL3_VTBL3Pseudo
  { 1, 245, 250, 2023, 2029 }, // 427 VTBX3_VTBX3Pseudo
  { 1, 245, 250, 2029, 2035 }, // 428 VTBL4_VTBL4Pseudo
  { 1, 250, 255, 2035, 2042 }, // 429 VTBX4_VTBX4Pseudo
  { 0, 0, 0, 0, 0 }, // 430 VSWPd_VSWPq
  { 1, 83, 88, 2042, 2046 }, // 431 VTRNd16_VTRNd32_VTRNd8_VUZPd16_VUZPd8_VZIPd16_VZIPd8
  { 1, 93, 98, 2046, 2050 }, // 432 VTRNq16_VTRNq32_VTRNq8
  { 1, 245, 250, 2050, 2054 }, // 433 VUZPq16_VUZPq32_VUZPq8_VZIPq16_VZIPq32_VZIPq8
  { 1, 22, 27, 2054, 2056 }, // 434 VABSD_VNEGD
  { 1, 22, 27, 2056, 2058 }, // 435 VABSS_VNEGS
  { 1, 98, 103, 2058, 2060 }, // 436 VCMPD_VCMPED_VCMPEZD_VCMPZD
  { 1, 98, 103, 2060, 2062 }, // 437 VCMPES_VCMPEZS_VCMPS_VCMPZS
  { 1, 83, 88, 2062, 2065 }, // 438 VABDLsv2i64_VABDLsv4i32_VABDLsv8i16_VABDLuv2i64_VABDLuv4i32_VABDLuv8i16_VABDsv16i8_VABDsv4i32_VABDsv8i16_VABDuv16i8_VABDuv4i32_VABDuv8i16_VMAXsv16i8_VMAXsv4i32_VMAXsv8i16_VMAXuv16i8_VMAXuv4i32_VMAXuv8i16_VMINsv16i8_VMINsv4i32_VMINsv8i16_VMINuv16i8_VMINuv4i32_VMINuv8i16
  { 1, 83, 88, 2065, 2068 }, // 439 VABDfd_VADDfd_VMAXfd_VMINfd_VSUBfd
  { 1, 93, 98, 2068, 2071 }, // 440 VABDfq_VADDfq_VMAXfq_VMINfq_VSUBfq
  { 1, 83, 88, 2071, 2074 }, // 441 VABDsv2i32_VABDsv4i16_VABDsv8i8_VABDuv2i32_VABDuv4i16_VABDuv8i8_VMAXsv2i32_VMAXsv4i16_VMAXsv8i8_VMAXuv2i32_VMAXuv4i16_VMAXuv8i8_VMINsv2i32_VMINsv4i16_VMINsv8i8_VMINuv2i32_VMINuv4i16_VMINuv8i8_VPMAXs16_VPMAXs32_VPMAXs8_VPMAXu16_VPMAXu32_VPMAXu8_VPMINs16_VPMINs32_VPMINs8_VPMINu16_VPMINu32_VPMINu8
  { 1, 98, 103, 2074, 2077 }, // 442 VADDS_VSUBS
  { 0, 0, 0, 0, 0 }, // 443 VMAXNMD_VMAXNMND_VMAXNMNQ_VMAXNMS_VMINNMD_VMINNMND_VMINNMNQ_VMINNMS
  { 1, 83, 88, 2077, 2080 }, // 444 VPADDf_VPMAXf_VPMINf
  { 1, 98, 103, 2080, 2083 }, // 445 VADDD_VSUBD
  { 1, 192, 197, 2083, 2086 }, // 446 VRECPSfd_VRSQRTSfd
  { 1, 197, 202, 2086, 2089 }, // 447 VRECPSfq_VRSQRTSfq
  { 1, 83, 88, 2089, 2092 }, // 448 VMULLp_VMULLslsv2i32_VMULLslsv4i16_VMULLsluv2i32_VMULLsluv4i16_VMULLsv4i32_VMULLsv8i16_VMULLuv4i32_VMULLuv8i16_VMULpd_VMULslv4i16_VMULv4i16_VMULv8i8_VQDMULHslv4i16_VQDMULHv4i16_VQDMULLslv2i32_VQDMULLslv4i16_VQDMULLv4i32_VQRDMULHslv4i16_VQRDMULHv4i16
  { 1, 93, 98, 2092, 2095 }, // 449 VMULLsv2i64_VMULLuv2i64_VMULslv2i32_VMULv2i32_VQDMULHslv2i32_VQDMULHv2i32_VQDMULLv2i64_VQRDMULHslv2i32_VQRDMULHv2i32
  { 1, 182, 187, 2095, 2098 }, // 450 VMULS_VNMULS
  { 1, 83, 88, 2098, 2101 }, // 451 VMULfd
  { 1, 187, 192, 2101, 2104 }, // 452 VMULfq
  { 1, 93, 98, 2104, 2107 }, // 453 VMULpq_VMULslv8i16_VMULv16i8_VMULv8i16_VQDMULHslv8i16_VQDMULHv8i16_VQRDMULHslv8i16_VQRDMULHv8i16
  { 1, 83, 88, 2107, 2110 }, // 454 VMULslfd
  { 1, 93, 98, 2110, 2113 }, // 455 VMULslfq
  { 1, 128, 133, 2113, 2116 }, // 456 VMULslv4i32_VMULv4i32_VQDMULHslv4i32_VQDMULHv4i32_VQRDMULHslv4i32_VQRDMULHv4i32
  { 1, 177, 182, 2116, 2119 }, // 457 VMULD_VNMULD
  { 1, 118, 123, 2119, 2123 }, // 458 VFMAD_VFMSD_VFNMAD_VFNMSD
  { 1, 123, 128, 2123, 2127 }, // 459 VFMAS_VFMSS_VFNMAS_VFNMSS
  { 1, 118, 123, 2127, 2131 }, // 460 VMLAD_VMLSD_VNMLAD_VNMLSD
  { 1, 93, 98, 2131, 2135 }, // 461 VMLALslsv2i32_VMLALsluv2i32_VMLALsv2i64_VMLALuv2i64_VMLAslv2i32_VMLAv2i32_VMLSLslsv2i32_VMLSLsluv2i32_VMLSLsv2i64_VMLSLuv2i64_VMLSslv2i32_VMLSv2i32_VQDMLALslv2i32_VQDMLALv2i64_VQDMLSLslv2i32_VQDMLSLv2i64
  { 1, 83, 88, 2135, 2139 }, // 462 VMLALslsv4i16_VMLALsluv4i16_VMLALsv4i32_VMLALsv8i16_VMLALuv4i32_VMLALuv8i16_VMLAslv4i16_VMLAv4i16_VMLAv8i8_VMLSLslsv4i16_VMLSLsluv4i16_VMLSLsv4i32_VMLSLsv8i16_VMLSLuv4i32_VMLSLuv8i16_VMLSslv4i16_VMLSv4i16_VMLSv8i8_VQDMLALslv4i16_VQDMLALv4i32_VQDMLSLslv4i16_VQDMLSLv4i32
  { 1, 123, 128, 2139, 2143 }, // 463 VMLAS_VMLSS_VNMLAS_VNMLSS
  { 1, 93, 98, 2143, 2147 }, // 464 VMLAfd_VMLAslfd_VMLSfd_VMLSslfd
  { 1, 128, 133, 2147, 2151 }, // 465 VMLAfq_VMLAslfq_VMLSfq_VMLSslfq
  { 1, 128, 133, 2151, 2155 }, // 466 VMLAslv4i32_VMLAv4i32_VMLSslv4i32_VMLSv4i32
  { 1, 93, 98, 2155, 2159 }, // 467 VMLAslv8i16_VMLAv16i8_VMLAv8i16_VMLSslv8i16_VMLSv16i8_VMLSv8i16
  { 1, 93, 98, 2159, 2163 }, // 468 VFMAfd_VFMSfd
  { 1, 128, 133, 2163, 2167 }, // 469 VFMAfq_VFMSfq
  { 0, 0, 0, 0, 0 }, // 470 VCVTANSD_VCVTANSQ_VCVTANUD_VCVTANUQ_VCVTASD_VCVTASS_VCVTAUD_VCVTAUS_VCVTBDH_VCVTBHD_VCVTMNSD_VCVTMNSQ_VCVTMNUD_VCVTMNUQ_VCVTMSD_VCVTMSS_VCVTMUD_VCVTMUS_VCVTNNSD_VCVTNNSQ_VCVTNNUD_VCVTNNUQ_VCVTNSD_VCVTNSS_VCVTNUD_VCVTNUS_VCVTPNSD_VCVTPNSQ_VCVTPNUD_VCVTPNUQ_VCVTPSD_VCVTPSS_VCVTPUD_VCVTPUS_VCVTTDH_VCVTTHD
  { 1, 98, 103, 2167, 2169 }, // 471 VCVTBHS_VCVTTHS
  { 1, 22, 27, 2169, 2171 }, // 472 VCVTBSH_VCVTTSH
  { 1, 98, 103, 2171, 2173 }, // 473 VCVTDS
  { 1, 98, 103, 2173, 2175 }, // 474 VCVTSD
  { 1, 93, 98, 2175, 2177 }, // 475 VCVTf2h_VCVTf2sq_VCVTf2uq_VCVTf2xsq_VCVTf2xuq_VCVTh2f_VCVTs2fq_VCVTu2fq_VCVTxs2fq_VCVTxu2fq
  { 1, 83, 88, 2177, 2179 }, // 476 VCVTf2sd_VCVTf2ud_VCVTf2xsd_VCVTf2xud_VCVTs2fd_VCVTu2fd_VCVTxs2fd_VCVTxu2fd
  { 1, 98, 103, 2179, 2181 }, // 477 VSITOD_VUITOD
  { 1, 98, 103, 2181, 2183 }, // 478 VSITOS_VUITOS
  { 1, 98, 103, 2183, 2185 }, // 479 VTOSHD_VTOSLD_VTOUHD_VTOULD
  { 1, 98, 103, 2185, 2187 }, // 480 VTOSHS_VTOSLS_VTOUHS_VTOULS
  { 1, 98, 103, 2187, 2189 }, // 481 VTOSIRD_VTOSIZD_VTOUIRD_VTOUIZD
  { 1, 98, 103, 2189, 2191 }, // 482 VTOSIRS_VTOSIZS_VTOUIRS_VTOUIZS
  { 1, 22, 27, 2191, 2193 }, // 483 FCONSTD_VMOVD_VMOVDcc
  { 1, 22, 27, 2193, 2195 }, // 484 FCONSTS_VMOVS_VMOVScc
  { 1, 83, 88, 2195, 2196 }, // 485 VMOVv16i8_VMOVv1i64_VMOVv2f32_VMOVv2i32_VMOVv2i64_VMOVv4f32_VMOVv4i16_VMOVv4i32_VMOVv8i16_VMOVv8i8_VMVNv2i32_VMVNv4i16_VMVNv4i32_VMVNv8i16
  { 1, 83, 88, 2196, 2199 }, // 486 VMVNd_VMVNq
  { 1, 83, 88, 2199, 2201 }, // 487 VMOVLsv2i64_VMOVLsv4i32_VMOVLsv8i16_VMOVLuv2i64_VMOVLuv4i32_VMOVLuv8i16
  { 1, 83, 88, 2201, 2203 }, // 488 VMOVNv2i32_VMOVNv4i16_VMOVNv8i8
  { 1, 83, 88, 2203, 2205 }, // 489 VQMOVNsuv2i32_VQMOVNsuv4i16_VQMOVNsuv8i8_VQMOVNsv2i32_VQMOVNsv4i16_VQMOVNsv8i8_VQMOVNuv2i32_VQMOVNuv4i16_VQMOVNuv8i8
  { 1, 83, 88, 2205, 2207 }, // 490 VDUPLN16d_VDUPLN32d_VDUPLN8d_VDUPfdf_VDUPfqf
  { 1, 83, 88, 2207, 2209 }, // 491 VDUPLN16q_VDUPLN32q_VDUPLN8q
  { 1, 113, 118, 2209, 2211 }, // 492 VDUP16d_VDUP16q_VDUP32d_VDUP32q_VDUP8d_VDUP8q
  { 1, 175, 177, 2211, 2213 }, // 493 VMOVRS
  { 1, 22, 27, 2213, 2215 }, // 494 VMOVSR
  { 1, 202, 207, 2215, 2218 }, // 495 VSETLNi16_VSETLNi32_VSETLNi8
  { 1, 175, 177, 2218, 2221 }, // 496 VMOVRRD_VMOVRRS
  { 1, 22, 27, 2221, 2224 }, // 497 VMOVDRR
  { 1, 22, 27, 2224, 2227 }, // 498 VMOVSRR
  { 1, 113, 118, 2227, 2229 }, // 499 VGETLNi32_VGETLNu16_VGETLNu8
  { 1, 113, 118, 2229, 2231 }, // 500 VGETLNs16_VGETLNs8
  { 1, 27, 32, 2231, 2232 }, // 501 VMRS_VMRS_FPEXC_VMRS_FPINST_VMRS_FPINST2_VMRS_FPSID_VMRS_MVFR0_VMRS_MVFR1
  { 1, 27, 32, 2232, 2233 }, // 502 VMSR_VMSR_FPEXC_VMSR_FPINST_VMSR_FPINST2_VMSR_FPSID
  { 1, 27, 32, 2233, 2234 }, // 503 FMSTAT
  { 1, 169, 175, 2234, 2236 }, // 504 VLDRD
  { 1, 169, 175, 2236, 2238 }, // 505 VLDRS
  { 1, 169, 175, 2238, 2240 }, // 506 VSTRD
  { 1, 169, 175, 2240, 2242 }, // 507 VSTRS
  { -1, 163, 169, 2242, 2246 }, // 508 VLDMQIA
  { -1, 163, 169, 2246, 2250 }, // 509 VSTMQIA
  { -1, 163, 169, 2250, 2254 }, // 510 VLDMDIA_VLDMSIA
  { -1, 163, 169, 2254, 2258 }, // 511 VLDMDDB_UPD_VLDMDIA_UPD_VLDMSDB_UPD_VLDMSIA_UPD
  { -1, 163, 169, 2258, 2262 }, // 512 VSTMDIA_VSTMSIA
  { -1, 163, 169, 2262, 2266 }, // 513 VSTMDDB_UPD_VSTMDIA_UPD_VSTMSDB_UPD_VSTMSIA_UPD
  { 1, 133, 139, 2266, 2268 }, // 514 VLD1d16_VLD1d32_VLD1d64_VLD1d8
  { 1, 133, 139, 2268, 2271 }, // 515 VLD1q16_VLD1q32_VLD1q64_VLD1q8
  { 1, 133, 139, 2271, 2274 }, // 516 VLD1d16wb_fixed_VLD1d16wb_register_VLD1d32wb_fixed_VLD1d32wb_register_VLD1d64wb_fixed_VLD1d64wb_register_VLD1d8wb_fixed_VLD1d8wb_register
  { 1, 133, 139, 2274, 2278 }, // 517 VLD1q16wb_fixed_VLD1q16wb_register_VLD1q32wb_fixed_VLD1q32wb_register_VLD1q64wb_fixed_VLD1q64wb_register_VLD1q8wb_fixed_VLD1q8wb_register
  { 1, 139, 145, 2278, 2282 }, // 518 VLD1d16T_VLD1d32T_VLD1d64T_VLD1d64TPseudo_VLD1d8T
  { 1, 133, 139, 2282, 2286 }, // 519 VLD1d16Twb_fixed_VLD1d16Twb_register_VLD1d32Twb_fixed_VLD1d32Twb_register_VLD1d64Twb_fixed_VLD1d64Twb_register_VLD1d8Twb_fixed_VLD1d8Twb_register
  { 1, 139, 145, 2286, 2291 }, // 520 VLD1d16Q_VLD1d32Q_VLD1d64Q_VLD1d64QPseudo_VLD1d8Q
  { 1, 133, 139, 2291, 2295 }, // 521 VLD1d16Qwb_fixed_VLD1d16Qwb_register_VLD1d32Qwb_fixed_VLD1d32Qwb_register_VLD1d64Qwb_fixed_VLD1d64Qwb_register_VLD1d8Qwb_fixed_VLD1d8Qwb_register
  { 1, 133, 139, 2295, 2298 }, // 522 VLD2b16_VLD2b32_VLD2b8_VLD2d16_VLD2d32_VLD2d8
  { 1, 139, 145, 2298, 2303 }, // 523 VLD2q16_VLD2q16Pseudo_VLD2q32_VLD2q32Pseudo_VLD2q8_VLD2q8Pseudo
  { 1, 133, 139, 2303, 2309 }, // 524 VLD2b16wb_fixed_VLD2b16wb_register_VLD2b32wb_fixed_VLD2b32wb_register_VLD2b8wb_fixed_VLD2b8wb_register_VLD2d16wb_fixed_VLD2d16wb_register_VLD2d32wb_fixed_VLD2d32wb_register_VLD2d8wb_fixed_VLD2d8wb_register
  { 1, 139, 145, 2309, 2315 }, // 525 VLD2q16PseudoWB_fixed_VLD2q16PseudoWB_register_VLD2q16wb_fixed_VLD2q16wb_register_VLD2q32PseudoWB_fixed_VLD2q32PseudoWB_register_VLD2q32wb_fixed_VLD2q32wb_register_VLD2q8PseudoWB_fixed_VLD2q8PseudoWB_register_VLD2q8wb_fixed_VLD2q8wb_register
  { 1, 145, 151, 2315, 2319 }, // 526 VLD3d16_VLD3d32_VLD3d8_VLD3q16_VLD3q32_VLD3q8
  { 1, 145, 151, 2319, 2323 }, // 527 VLD3d16Pseudo_VLD3d32Pseudo_VLD3d8Pseudo_VLD3q16oddPseudo_VLD3q32oddPseudo_VLD3q8oddPseudo
  { 1, 145, 151, 2323, 2328 }, // 528 VLD3d16_UPD_VLD3d32_UPD_VLD3d8_UPD_VLD3q16_UPD_VLD3q32_UPD_VLD3q8_UPD
  { 1, 145, 151, 2328, 2333 }, // 529 VLD3d16Pseudo_UPD_VLD3d32Pseudo_UPD_VLD3d8Pseudo_UPD_VLD3q16Pseudo_UPD_VLD3q16oddPseudo_UPD_VLD3q32Pseudo_UPD_VLD3q32oddPseudo_UPD_VLD3q8Pseudo_UPD_VLD3q8oddPseudo_UPD
  { 1, 145, 151, 2333, 2338 }, // 530 VLD4d16_VLD4d32_VLD4d8_VLD4q16_VLD4q32_VLD4q8
  { 1, 145, 151, 2338, 2343 }, // 531 VLD4d16Pseudo_VLD4d32Pseudo_VLD4d8Pseudo_VLD4q16oddPseudo_VLD4q32oddPseudo_VLD4q8oddPseudo
  { 1, 145, 151, 2343, 2349 }, // 532 VLD4d16_UPD_VLD4d32_UPD_VLD4d8_UPD_VLD4q16_UPD_VLD4q32_UPD_VLD4q8_UPD
  { 1, 145, 151, 2349, 2355 }, // 533 VLD4d16Pseudo_UPD_VLD4d32Pseudo_UPD_VLD4d8Pseudo_UPD_VLD4q16Pseudo_UPD_VLD4q16oddPseudo_UPD_VLD4q32Pseudo_UPD_VLD4q32oddPseudo_UPD_VLD4q8Pseudo_UPD_VLD4q8oddPseudo_UPD
  { 1, 133, 139, 2355, 2357 }, // 534 VLD1DUPd16_VLD1DUPd32_VLD1DUPd8_VLD1DUPq16_VLD1DUPq32_VLD1DUPq8
  { 1, 139, 145, 2357, 2361 }, // 535 VLD1LNd16_VLD1LNd32_VLD1LNd8_VLD1LNq16Pseudo_VLD1LNq32Pseudo_VLD1LNq8Pseudo
  { 1, 133, 139, 2361, 2365 }, // 536 VLD1DUPd16wb_fixed_VLD1DUPd16wb_register_VLD1DUPd32wb_fixed_VLD1DUPd32wb_register_VLD1DUPd8wb_fixed_VLD1DUPd8wb_register_VLD1DUPq16wb_fixed_VLD1DUPq16wb_register_VLD1DUPq32wb_fixed_VLD1DUPq32wb_register_VLD1DUPq8wb_fixed_VLD1DUPq8wb_register
  { 1, 139, 145, 2365, 2371 }, // 537 VLD1LNd16_UPD_VLD1LNd32_UPD_VLD1LNd8_UPD_VLD1LNq16Pseudo_UPD_VLD1LNq32Pseudo_UPD_VLD1LNq8Pseudo_UPD
  { 1, 133, 139, 2371, 2374 }, // 538 VLD2DUPd16_VLD2DUPd16x2_VLD2DUPd32_VLD2DUPd32x2_VLD2DUPd8_VLD2DUPd8x2
  { 1, 139, 145, 2374, 2380 }, // 539 VLD2LNd16_VLD2LNd16Pseudo_VLD2LNd32_VLD2LNd32Pseudo_VLD2LNd8_VLD2LNd8Pseudo_VLD2LNq16_VLD2LNq16Pseudo_VLD2LNq32_VLD2LNq32Pseudo
  { 1, 139, 145, 2380, 2388 }, // 540 VLD2LNd16_UPD_VLD2LNd32_UPD_VLD2LNd8_UPD_VLD2LNq16_UPD_VLD2LNq32_UPD
  { 1, 133, 139, 2388, 2393 }, // 541 VLD2DUPd16wb_fixed_VLD2DUPd16wb_register_VLD2DUPd16x2wb_fixed_VLD2DUPd16x2wb_register_VLD2DUPd32wb_fixed_VLD2DUPd32wb_register_VLD2DUPd32x2wb_fixed_VLD2DUPd32x2wb_register_VLD2DUPd8wb_fixed_VLD2DUPd8wb_register_VLD2DUPd8x2wb_fixed_VLD2DUPd8x2wb_register
  { 1, 139, 145, 2393, 2401 }, // 542 VLD2LNd16Pseudo_UPD_VLD2LNd32Pseudo_UPD_VLD2LNd8Pseudo_UPD_VLD2LNq16Pseudo_UPD_VLD2LNq32Pseudo_UPD
  { 1, 145, 151, 2401, 2405 }, // 543 VLD3DUPd16_VLD3DUPd16Pseudo_VLD3DUPd32_VLD3DUPd32Pseudo_VLD3DUPd8_VLD3DUPd8Pseudo_VLD3DUPq16_VLD3DUPq32_VLD3DUPq8
  { 1, 151, 157, 2405, 2413 }, // 544 VLD3LNd16_VLD3LNd16Pseudo_VLD3LNd32_VLD3LNd32Pseudo_VLD3LNd8_VLD3LNd8Pseudo_VLD3LNq16_VLD3LNq16Pseudo_VLD3LNq32_VLD3LNq32Pseudo
  { 1, 145, 151, 2413, 2419 }, // 545 VLD3DUPd16_UPD_VLD3DUPd32_UPD_VLD3DUPd8_UPD_VLD3DUPq16_UPD_VLD3DUPq32_UPD_VLD3DUPq8_UPD
  { 1, 151, 157, 2419, 2429 }, // 546 VLD3LNd16_UPD_VLD3LNd32_UPD_VLD3LNd8_UPD_VLD3LNq16_UPD_VLD3LNq32_UPD
  { 1, 145, 151, 2429, 2435 }, // 547 VLD3DUPd16Pseudo_UPD_VLD3DUPd32Pseudo_UPD_VLD3DUPd8Pseudo_UPD
  { 1, 151, 157, 2435, 2445 }, // 548 VLD3LNd16Pseudo_UPD_VLD3LNd32Pseudo_UPD_VLD3LNd8Pseudo_UPD_VLD3LNq16Pseudo_UPD_VLD3LNq32Pseudo_UPD
  { 1, 139, 145, 2445, 2450 }, // 549 VLD4DUPd16_VLD4DUPd16Pseudo_VLD4DUPd32_VLD4DUPd32Pseudo_VLD4DUPd8_VLD4DUPd8Pseudo_VLD4DUPq16_VLD4DUPq32_VLD4DUPq8
  { 1, 157, 163, 2450, 2460 }, // 550 VLD4LNd16_VLD4LNd16Pseudo_VLD4LNd32_VLD4LNd32Pseudo_VLD4LNd8_VLD4LNd8Pseudo_VLD4LNq16_VLD4LNq16Pseudo_VLD4LNq32_VLD4LNq32Pseudo
  { 1, 139, 145, 2460, 2467 }, // 551 VLD4DUPd16_UPD_VLD4DUPd32_UPD_VLD4DUPd8_UPD_VLD4DUPq16_UPD_VLD4DUPq32_UPD_VLD4DUPq8_UPD
  { 1, 157, 163, 2467, 2479 }, // 552 VLD4LNd16_UPD_VLD4LNd32_UPD_VLD4LNd8_UPD_VLD4LNq16_UPD_VLD4LNq32_UPD
  { 1, 139, 145, 2479, 2486 }, // 553 VLD4DUPd16Pseudo_UPD_VLD4DUPd32Pseudo_UPD_VLD4DUPd8Pseudo_UPD
  { 1, 157, 163, 2486, 2498 }, // 554 VLD4LNd16Pseudo_UPD_VLD4LNd32Pseudo_UPD_VLD4LNd8Pseudo_UPD_VLD4LNq16Pseudo_UPD_VLD4LNq32Pseudo_UPD
  { 1, 217, 223, 2498, 2501 }, // 555 VST1d16_VST1d32_VST1d64_VST1d8
  { 1, 217, 223, 2501, 2505 }, // 556 VST1q16_VST1q32_VST1q64_VST1q8
  { 1, 133, 139, 2505, 2508 }, // 557 VST1d16wb_fixed_VST1d16wb_register_VST1d32wb_fixed_VST1d32wb_register_VST1d64wb_fixed_VST1d64wb_register_VST1d8wb_fixed_VST1d8wb_register
  { 1, 133, 139, 2508, 2512 }, // 558 VST1q16wb_fixed_VST1q16wb_register_VST1q32wb_fixed_VST1q32wb_register_VST1q64wb_fixed_VST1q64wb_register_VST1q8wb_fixed_VST1q8wb_register
  { 1, 223, 229, 2512, 2517 }, // 559 VST1d16T_VST1d32T_VST1d64T_VST1d64TPseudo_VST1d8T
  { 1, 139, 145, 2517, 2522 }, // 560 VST1d16Twb_fixed_VST1d16Twb_register_VST1d32Twb_fixed_VST1d32Twb_register_VST1d64Twb_fixed_VST1d64Twb_register_VST1d8Twb_fixed_VST1d8Twb_register
  { 1, 223, 229, 2522, 2529 }, // 561 VST1d64TPseudoWB_fixed_VST1d64TPseudoWB_register
  { 1, 223, 229, 2529, 2535 }, // 562 VST1d16Q_VST1d32Q_VST1d64Q_VST1d64QPseudo_VST1d8Q
  { 1, 139, 145, 2535, 2541 }, // 563 VST1d16Qwb_fixed_VST1d16Qwb_register_VST1d32Qwb_fixed_VST1d32Qwb_register_VST1d64Qwb_fixed_VST1d64Qwb_register_VST1d8Qwb_fixed_VST1d8Qwb_register
  { 1, 223, 229, 2541, 2549 }, // 564 VST1d64QPseudoWB_fixed_VST1d64QPseudoWB_register
  { 1, 217, 223, 2549, 2553 }, // 565 VST2b16_VST2b32_VST2b8_VST2d16_VST2d32_VST2d8
  { 1, 133, 139, 2553, 2556 }, // 566 VST2b16wb_fixed_VST2b16wb_register_VST2b32wb_fixed_VST2b32wb_register_VST2b8wb_fixed_VST2b8wb_register_VST2d16wb_fixed_VST2d16wb_register_VST2d32wb_fixed_VST2d32wb_register_VST2d8wb_fixed_VST2d8wb_register
  { 1, 229, 235, 2556, 2562 }, // 567 VST2q16_VST2q16Pseudo_VST2q32_VST2q32Pseudo_VST2q8_VST2q8Pseudo
  { 1, 229, 235, 2562, 2570 }, // 568 VST2q16PseudoWB_fixed_VST2q16PseudoWB_register_VST2q32PseudoWB_fixed_VST2q32PseudoWB_register_VST2q8PseudoWB_fixed_VST2q8PseudoWB_register
  { 1, 133, 139, 2570, 2573 }, // 569 VST2q16wb_fixed_VST2q16wb_register_VST2q32wb_fixed_VST2q32wb_register_VST2q8wb_fixed_VST2q8wb_register
  { 1, 223, 229, 2573, 2578 }, // 570 VST3d16_VST3d16Pseudo_VST3d32_VST3d32Pseudo_VST3d8_VST3d8Pseudo_VST3q16_VST3q16oddPseudo_VST3q32_VST3q32oddPseudo_VST3q8_VST3q8oddPseudo
  { 1, 223, 229, 2578, 2585 }, // 571 VST3d16Pseudo_UPD_VST3d16_UPD_VST3d32Pseudo_UPD_VST3d32_UPD_VST3d8Pseudo_UPD_VST3d8_UPD_VST3q16Pseudo_UPD_VST3q16_UPD_VST3q16oddPseudo_UPD_VST3q32Pseudo_UPD_VST3q32_UPD_VST3q32oddPseudo_UPD_VST3q8Pseudo_UPD_VST3q8_UPD_VST3q8oddPseudo_UPD
  { 1, 223, 229, 2585, 2591 }, // 572 VST4d16_VST4d16Pseudo_VST4d32_VST4d32Pseudo_VST4d8_VST4d8Pseudo_VST4q16_VST4q16oddPseudo_VST4q32_VST4q32oddPseudo_VST4q8_VST4q8oddPseudo
  { 1, 223, 229, 2591, 2599 }, // 573 VST4d16Pseudo_UPD_VST4d16_UPD_VST4d32Pseudo_UPD_VST4d32_UPD_VST4d8Pseudo_UPD_VST4d8_UPD_VST4q16Pseudo_UPD_VST4q16_UPD_VST4q16oddPseudo_UPD_VST4q32Pseudo_UPD_VST4q32_UPD_VST4q32oddPseudo_UPD_VST4q8Pseudo_UPD_VST4q8_UPD_VST4q8oddPseudo_UPD
  { 1, 217, 223, 2599, 2602 }, // 574 VST1LNd16_VST1LNd32_VST1LNd8_VST1LNq16Pseudo_VST1LNq32Pseudo_VST1LNq8Pseudo
  { 1, 217, 223, 2602, 2607 }, // 575 VST1LNd16_UPD_VST1LNd32_UPD_VST1LNd8_UPD_VST1LNq16Pseudo_UPD_VST1LNq32Pseudo_UPD_VST1LNq8Pseudo_UPD
  { 1, 217, 223, 2607, 2611 }, // 576 VST2LNd16_VST2LNd16Pseudo_VST2LNd32_VST2LNd32Pseudo_VST2LNd8_VST2LNd8Pseudo_VST2LNq16_VST2LNq16Pseudo_VST2LNq32_VST2LNq32Pseudo
  { 1, 217, 223, 2611, 2617 }, // 577 VST2LNd16Pseudo_UPD_VST2LNd16_UPD_VST2LNd32Pseudo_UPD_VST2LNd32_UPD_VST2LNd8Pseudo_UPD_VST2LNd8_UPD_VST2LNq16Pseudo_UPD_VST2LNq16_UPD_VST2LNq32Pseudo_UPD_VST2LNq32_UPD
  { 1, 229, 235, 2617, 2622 }, // 578 VST3LNd16_VST3LNd16Pseudo_VST3LNd32_VST3LNd32Pseudo_VST3LNd8_VST3LNd8Pseudo_VST3LNq16_VST3LNq16Pseudo_VST3LNq32_VST3LNq32Pseudo
  { 1, 229, 235, 2622, 2629 }, // 579 VST3LNd16Pseudo_UPD_VST3LNd16_UPD_VST3LNd32Pseudo_UPD_VST3LNd32_UPD_VST3LNd8Pseudo_UPD_VST3LNd8_UPD_VST3LNq16Pseudo_UPD_VST3LNq16_UPD_VST3LNq32Pseudo_UPD_VST3LNq32_UPD
  { 1, 223, 229, 2629, 2635 }, // 580 VST4LNd16_VST4LNd16Pseudo_VST4LNd32_VST4LNd32Pseudo_VST4LNd8_VST4LNd8Pseudo_VST4LNq16_VST4LNq16Pseudo_VST4LNq32_VST4LNq32Pseudo
  { 1, 223, 229, 2635, 2643 }, // 581 VST4LNd16Pseudo_UPD_VST4LNd16_UPD_VST4LNd32Pseudo_UPD_VST4LNd32_UPD_VST4LNd8Pseudo_UPD_VST4LNd8_UPD_VST4LNq16Pseudo_UPD_VST4LNq16_UPD_VST4LNq32Pseudo_UPD_VST4LNq32_UPD
  { 1, 108, 113, 2643, 2646 }, // 582 VDIVS
  { 1, 212, 217, 2646, 2648 }, // 583 VSQRTS
  { 1, 103, 108, 2648, 2651 }, // 584 VDIVD
  { 1, 207, 212, 2651, 2653 }, // 585 VSQRTD
  { 0, 0, 0, 0, 0 }, // 586 ABS
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary CortexA8Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 265, 266, 2653, 2655 }, // 1 IIC_iALUi_WriteALU_ReadALU
  { 1, 265, 266, 2655, 2658 }, // 2 IIC_iALUr_WriteALU_ReadALU_ReadALU
  { 1, 265, 266, 2658, 2662 }, // 3 IIC_iALUsr_WriteALUsi_ReadALU
  { 1, 265, 266, 2662, 2666 }, // 4 IIC_iALUsr_WriteALUsr_ReadALUsr
  { 1, 265, 266, 2666, 2670 }, // 5 IIC_iALUsr_WriteALUSsr_ReadALUsr
  { 1, 265, 266, 2670, 2672 }, // 6 IIC_iBITi_WriteALU_ReadALU
  { 1, 265, 266, 2672, 2675 }, // 7 IIC_iBITr_WriteALU_ReadALU_ReadALU
  { 1, 265, 266, 2675, 2679 }, // 8 IIC_iBITsr_WriteALUsi_ReadALU
  { 1, 265, 266, 2679, 2683 }, // 9 IIC_iBITsr_WriteALUsr_ReadALUsr
  { 1, 265, 266, 0, 0 }, // 10 IIC_Br_WriteBr
  { 1, 265, 266, 2683, 2685 }, // 11 IIC_iUNAsi
  { 1, 265, 266, 0, 0 }, // 12 IIC_Br_WriteBrL
  { 0, 0, 0, 0, 0 }, // 13 WriteBrL
  { 1, 265, 266, 0, 0 }, // 14 IIC_Br_WriteBrTbl
  { 0, 0, 0, 0, 0 }, // 15 WriteBr
  { 1, 265, 266, 2685, 2687 }, // 16 IIC_iUNAr_WriteALU
  { 1, 265, 266, 2687, 2688 }, // 17 IIC_iCMPi_WriteCMP_ReadALU
  { 1, 265, 266, 2688, 2690 }, // 18 IIC_iCMPr_WriteCMP_ReadALU_ReadALU
  { 1, 265, 266, 2690, 2693 }, // 19 IIC_iCMPsr_WriteCMPsi_ReadALU
  { 1, 265, 266, 2693, 2696 }, // 20 IIC_iCMPsr_WriteCMPsr_ReadALU
  { 1, 266, 269, 2696, 2698 }, // 21 IIC_fpUNA64
  { 1, 269, 271, 2698, 2700 }, // 22 IIC_fpUNA32
  { 1, 271, 273, 2700, 2701 }, // 23 IIC_fpSTAT
  { -1, 273, 275, 2701, 2706 }, // 24 IIC_iLoad_m
  { -1, 275, 277, 2706, 2711 }, // 25 IIC_iLoad_mu
  { -1, 277, 280, 2711, 2716 }, // 26 IIC_iLoad_mBr
  { 1, 280, 282, 2716, 2720 }, // 27 IIC_iLoad_bh_ru
  { 1, 280, 282, 2720, 2723 }, // 28 IIC_iLoad_bh_iu
  { 1, 280, 282, 2723, 2726 }, // 29 IIC_iLoad_bh_r
  { 1, 282, 284, 2726, 2729 }, // 30 IIC_iLoad_bh_si
  { 1, 280, 282, 2729, 2732 }, // 31 IIC_iLoad_d_r
  { 1, 280, 282, 2732, 2736 }, // 32 IIC_iLoad_d_ru
  { 1, 280, 282, 2736, 2740 }, // 33 IIC_iLoad_ru
  { 1, 280, 282, 2740, 2743 }, // 34 IIC_iLoad_iu
  { 1, 280, 282, 2743, 2746 }, // 35 IIC_iLoad_r
  { 1, 282, 284, 2746, 2749 }, // 36 IIC_iLoad_si
  { 1, 284, 285, 2749, 2753 }, // 37 IIC_iMAC32
  { 1, 265, 266, 2753, 2754 }, // 38 IIC_iCMOVi_WriteALU
  { 1, 265, 266, 2754, 2755 }, // 39 IIC_iMOVi_WriteALU
  { 1, 285, 287, 2755, 2757 }, // 40 IIC_iCMOVix2
  { 1, 265, 266, 2757, 2759 }, // 41 IIC_iCMOVr_WriteALU
  { 1, 265, 266, 2759, 2762 }, // 42 IIC_iCMOVsr_WriteALU
  { 1, 285, 287, 2762, 2763 }, // 43 IIC_iMOVix2
  { 1, 287, 290, 2763, 2764 }, // 44 IIC_iMOVix2addpc
  { 1, 290, 293, 2764, 2765 }, // 45 IIC_iMOVix2ld
  { 1, 265, 266, 2765, 2767 }, // 46 IIC_iMOVr_WriteALU
  { 1, 265, 266, 2767, 2770 }, // 47 IIC_iMOVsr_WriteALU
  { 1, 265, 266, 2770, 2772 }, // 48 IIC_iMOVsi_WriteALU
  { 1, 284, 285, 2772, 2775 }, // 49 IIC_iMUL32
  { 1, 265, 266, 2775, 2776 }, // 50 IIC_iMVNi_WriteALU
  { 1, 265, 266, 2776, 2778 }, // 51 IIC_iMVNr_WriteALU
  { 1, 265, 266, 2778, 2781 }, // 52 IIC_iMVNsr_WriteALU
  { 1, 265, 266, 2781, 2784 }, // 53 IIC_iALUr_WriteALU_ReadALU
  { 1, 280, 282, 2784, 2787 }, // 54 IIC_iStore_r
  { 1, 280, 282, 2787, 2790 }, // 55 IIC_iStore_bh_r
  { 1, 265, 266, 2790, 2793 }, // 56 IIC_iALUsi_WriteALUsi_ReadALU
  { 1, 265, 266, 2793, 2796 }, // 57 IIC_iBITsi_WriteALUsi_ReadALU
  { 1, 265, 266, 2796, 2798 }, // 58 IIC_Preload_WritePreLd
  { 0, 0, 0, 0, 0 }, // 59 IIC_iDIV
  { 1, 284, 285, 2798, 2802 }, // 60 IIC_iMAC16
  { 1, 293, 294, 2802, 2806 }, // 61 IIC_iMAC64
  { 1, 294, 295, 2806, 2809 }, // 62 IIC_iMUL16
  { 1, 293, 294, 2809, 2813 }, // 63 IIC_iMUL64
  { -1, 273, 275, 0, 0 }, // 64 IIC_iStore_m
  { -1, 273, 275, 2813, 2814 }, // 65 IIC_iStore_mu
  { 1, 280, 282, 2814, 2818 }, // 66 IIC_iStore_bh_ru
  { 1, 280, 282, 2818, 2821 }, // 67 IIC_iStore_bh_iu
  { 1, 280, 282, 2821, 2825 }, // 68 IIC_iStore_ru
  { 1, 295, 297, 2825, 2828 }, // 69 IIC_iStore_bh_si
  { 1, 280, 282, 2828, 2831 }, // 70 IIC_iStore_d_r
  { 1, 280, 282, 2831, 2835 }, // 71 IIC_iStore_d_ru
  { 1, 280, 282, 2835, 2838 }, // 72 IIC_iStore_iu
  { 1, 295, 297, 2838, 2841 }, // 73 IIC_iStore_si
  { 1, 265, 266, 2841, 2844 }, // 74 IIC_iEXTAr_WriteALUsr
  { 1, 265, 266, 2844, 2846 }, // 75 IIC_iEXTr_WriteALUsi
  { 1, 265, 266, 2846, 2847 }, // 76 IIC_iTSTi_WriteCMP_ReadALU
  { 1, 265, 266, 2847, 2849 }, // 77 IIC_iTSTr_WriteCMP_ReadALU_ReadALU
  { 1, 265, 266, 2849, 2852 }, // 78 IIC_iTSTsr_WriteCMPsi_ReadALU
  { 1, 265, 266, 2852, 2855 }, // 79 IIC_iTSTsr_WriteCMPsr_ReadALU
  { 0, 0, 0, 0, 0 }, // 80 WriteALU_ReadALU_ReadALU
  { 1, 269, 271, 2855, 2859 }, // 81 IIC_VABAD
  { 1, 297, 299, 2859, 2863 }, // 82 IIC_VABAQ
  { 1, 269, 271, 2863, 2866 }, // 83 IIC_VSUBi4Q
  { 1, 269, 271, 2866, 2869 }, // 84 IIC_VBIND
  { 1, 297, 299, 2869, 2872 }, // 85 IIC_VBINQ
  { 1, 269, 271, 2872, 2875 }, // 86 IIC_VSUBi4D
  { 1, 269, 271, 2875, 2877 }, // 87 IIC_VUNAD
  { 1, 297, 299, 2877, 2879 }, // 88 IIC_VUNAQ
  { 1, 269, 271, 2879, 2881 }, // 89 IIC_VUNAiQ
  { 1, 269, 271, 2881, 2883 }, // 90 IIC_VUNAiD
  { 1, 299, 302, 2883, 2886 }, // 91 IIC_fpALU64
  { 1, 269, 271, 2886, 2889 }, // 92 IIC_VBINi4D
  { 1, 269, 271, 2889, 2892 }, // 93 IIC_VSHLiD
  { 1, 269, 271, 2892, 2895 }, // 94 IIC_fpALU32
  { 1, 269, 271, 2895, 2898 }, // 95 IIC_VSUBiD
  { 1, 269, 271, 2898, 2901 }, // 96 IIC_VBINiQ
  { 1, 269, 271, 2901, 2904 }, // 97 IIC_VBINiD
  { 1, 269, 271, 2904, 2905 }, // 98 IIC_VMOVImm
  { 1, 269, 271, 2905, 2908 }, // 99 IIC_VCNTiD
  { 1, 297, 299, 2908, 2911 }, // 100 IIC_VCNTiQ
  { 1, 266, 269, 2911, 2913 }, // 101 IIC_fpCMP64
  { 1, 269, 271, 2913, 2915 }, // 102 IIC_fpCMP32
  { 0, 0, 0, 0, 0 }, // 103 IIC_fpCVTSH
  { 0, 0, 0, 0, 0 }, // 104 IIC_fpCVTHS
  { 1, 302, 305, 2915, 2917 }, // 105 IIC_fpCVTDS
  { 1, 305, 308, 2917, 2919 }, // 106 IIC_fpCVTSD
  { 1, 308, 311, 2919, 2922 }, // 107 IIC_fpDIV64
  { 1, 311, 314, 2922, 2925 }, // 108 IIC_fpDIV32
  { 1, 271, 273, 2925, 2927 }, // 109 IIC_VMOVIS
  { 1, 271, 273, 2927, 2929 }, // 110 IIC_VMOVD
  { 1, 314, 316, 2929, 2931 }, // 111 IIC_VMOVQ
  { 1, 271, 273, 2931, 2934 }, // 112 IIC_VEXTD
  { 1, 314, 316, 2934, 2937 }, // 113 IIC_VEXTQ
  { 1, 316, 319, 2937, 2941 }, // 114 IIC_fpFMAC64
  { 1, 269, 271, 2941, 2945 }, // 115 IIC_fpFMAC32
  { 1, 269, 271, 2945, 2949 }, // 116 IIC_VFMACD
  { 1, 297, 299, 2949, 2953 }, // 117 IIC_VFMACQ
  { 1, 271, 273, 2953, 2955 }, // 118 IIC_VMOVSI
  { 1, 269, 271, 2955, 2958 }, // 119 IIC_VBINi4Q
  { 1, 319, 322, 2958, 2960 }, // 120 IIC_VLD1dup
  { 1, 319, 322, 2960, 2964 }, // 121 IIC_VLD1dupu
  { 1, 322, 325, 2964, 2968 }, // 122 IIC_VLD1ln
  { 1, 322, 325, 2968, 2974 }, // 123 IIC_VLD1lnu
  { 1, 325, 328, 2974, 2976 }, // 124 IIC_VLD1
  { 1, 328, 331, 2976, 2981 }, // 125 IIC_VLD1x4
  { 1, 325, 328, 2981, 2985 }, // 126 IIC_VLD1x2u
  { 1, 328, 331, 2985, 2989 }, // 127 IIC_VLD1x3
  { 1, 325, 328, 2989, 2992 }, // 128 IIC_VLD1u
  { 1, 325, 328, 2992, 2995 }, // 129 IIC_VLD1x2
  { 1, 319, 322, 2995, 2998 }, // 130 IIC_VLD2dup
  { 1, 319, 322, 2998, 3003 }, // 131 IIC_VLD2dupu
  { 1, 328, 331, 3003, 3009 }, // 132 IIC_VLD2ln
  { 1, 328, 331, 3009, 3017 }, // 133 IIC_VLD2lnu
  { 1, 325, 328, 3017, 3020 }, // 134 IIC_VLD2
  { 1, 325, 328, 3020, 3026 }, // 135 IIC_VLD2u
  { 1, 328, 331, 3026, 3031 }, // 136 IIC_VLD2x2
  { 1, 328, 331, 3031, 3037 }, // 137 IIC_VLD2x2u
  { 1, 322, 325, 3037, 3041 }, // 138 IIC_VLD3dup
  { 1, 322, 325, 3041, 3047 }, // 139 IIC_VLD3dupu
  { 1, 331, 334, 3047, 3055 }, // 140 IIC_VLD3ln
  { 1, 331, 334, 3055, 3065 }, // 141 IIC_VLD3lnu
  { 1, 334, 337, 3065, 3069 }, // 142 IIC_VLD3
  { 1, 334, 337, 3069, 3074 }, // 143 IIC_VLD3u
  { 1, 322, 325, 3074, 3079 }, // 144 IIC_VLD4dup
  { 1, 322, 325, 3079, 3086 }, // 145 IIC_VLD4dupu
  { 1, 331, 334, 3086, 3096 }, // 146 IIC_VLD4ln
  { 1, 331, 334, 3096, 3108 }, // 147 IIC_VLD4lnu
  { 1, 334, 337, 3108, 3113 }, // 148 IIC_VLD4
  { 1, 334, 337, 3113, 3119 }, // 149 IIC_VLD4u
  { -1, 337, 342, 3119, 3124 }, // 150 IIC_fpLoad_mu
  { -1, 337, 342, 3124, 3128 }, // 151 IIC_fpLoad_m
  { 1, 342, 345, 3128, 3130 }, // 152 IIC_fpLoad64
  { 1, 342, 345, 3130, 3132 }, // 153 IIC_fpLoad32
  { 1, 316, 319, 3132, 3136 }, // 154 IIC_fpMAC64
  { 1, 297, 299, 3136, 3140 }, // 155 IIC_VMACi32D
  { 1, 269, 271, 3140, 3144 }, // 156 IIC_VMACi16D
  { 1, 269, 271, 3144, 3148 }, // 157 IIC_fpMAC32
  { 1, 269, 271, 3148, 3152 }, // 158 IIC_VMACD
  { 1, 297, 299, 3152, 3156 }, // 159 IIC_VMACQ
  { 1, 345, 349, 3156, 3160 }, // 160 IIC_VMACi32Q
  { 1, 297, 299, 3160, 3164 }, // 161 IIC_VMACi16Q
  { 1, 269, 271, 3164, 3167 }, // 162 IIC_fpMOVID
  { 1, 269, 271, 3167, 3169 }, // 163 IIC_VQUNAiD
  { 1, 269, 271, 3169, 3171 }, // 164 IIC_VMOVN
  { 1, 269, 271, 3171, 3174 }, // 165 IIC_fpMOVDI
  { 1, 269, 271, 3174, 3176 }, // 166 IIC_fpMOVSI
  { 1, 269, 271, 3176, 3178 }, // 167 IIC_fpMOVIS
  { 1, 349, 352, 3178, 3181 }, // 168 IIC_fpMUL64
  { 1, 269, 271, 3181, 3184 }, // 169 IIC_VMULi16D
  { 1, 297, 299, 3184, 3187 }, // 170 IIC_VMULi32D
  { 1, 269, 271, 3187, 3190 }, // 171 IIC_fpMUL32
  { 1, 269, 271, 3190, 3193 }, // 172 IIC_VFMULD
  { 1, 269, 271, 3193, 3196 }, // 173 IIC_VFMULQ
  { 1, 297, 299, 3196, 3199 }, // 174 IIC_VMULi16Q
  { 1, 345, 349, 3199, 3202 }, // 175 IIC_VMULi32Q
  { 1, 297, 299, 3202, 3205 }, // 176 IIC_VSHLiQ
  { 1, 297, 299, 3205, 3208 }, // 177 IIC_VPALiQ
  { 1, 269, 271, 3208, 3211 }, // 178 IIC_VPALiD
  { 1, 269, 271, 3211, 3214 }, // 179 IIC_VPBIND
  { 1, 269, 271, 3214, 3216 }, // 180 IIC_VQUNAiQ
  { 1, 297, 299, 3216, 3219 }, // 181 IIC_VSHLi4Q
  { 1, 269, 271, 3219, 3222 }, // 182 IIC_VSHLi4D
  { 1, 269, 271, 3222, 3225 }, // 183 IIC_VRECSD
  { 1, 297, 299, 3225, 3228 }, // 184 IIC_VRECSQ
  { 1, 314, 316, 3228, 3231 }, // 185 IIC_VMOVISL
  { 1, 352, 355, 3231, 3233 }, // 186 IIC_fpCVTID_WriteCvtFP
  { 1, 269, 271, 3233, 3235 }, // 187 IIC_fpCVTIS_WriteCvtFP
  { 1, 352, 355, 3235, 3237 }, // 188 IIC_fpCVTID
  { 1, 269, 271, 3237, 3239 }, // 189 IIC_fpCVTIS
  { 1, 308, 311, 3239, 3241 }, // 190 IIC_fpSQRT64
  { 1, 316, 319, 3241, 3243 }, // 191 IIC_fpSQRT32
  { 1, 319, 322, 3243, 3246 }, // 192 IIC_VST1ln
  { 1, 319, 322, 3246, 3251 }, // 193 IIC_VST1lnu
  { 1, 325, 328, 3251, 3254 }, // 194 IIC_VST1
  { 1, 328, 331, 3254, 3260 }, // 195 IIC_VST1x4
  { 1, 328, 331, 3260, 3266 }, // 196 IIC_VLD1x4u
  { 1, 328, 331, 3266, 3271 }, // 197 IIC_VST1x3
  { 1, 328, 331, 3271, 3276 }, // 198 IIC_VLD1x3u
  { 1, 328, 331, 3276, 3284 }, // 199 IIC_VST1x4u
  { 1, 328, 331, 3284, 3291 }, // 200 IIC_VST1x3u
  { 1, 325, 328, 3291, 3295 }, // 201 IIC_VST1x2
  { 1, 325, 328, 3295, 3299 }, // 202 IIC_VST2ln
  { 1, 325, 328, 3299, 3305 }, // 203 IIC_VST2lnu
  { 1, 325, 328, 3305, 3309 }, // 204 IIC_VST2
  { 1, 334, 337, 3309, 3315 }, // 205 IIC_VST2x2
  { 1, 334, 337, 3315, 3323 }, // 206 IIC_VST2x2u
  { 1, 328, 331, 3323, 3328 }, // 207 IIC_VST3ln
  { 1, 328, 331, 3328, 3335 }, // 208 IIC_VST3lnu
  { 1, 328, 331, 3335, 3340 }, // 209 IIC_VST3
  { 1, 328, 331, 3340, 3347 }, // 210 IIC_VST3u
  { 1, 334, 337, 3347, 3353 }, // 211 IIC_VST4ln
  { 1, 334, 337, 3353, 3361 }, // 212 IIC_VST4lnu
  { 1, 334, 337, 3361, 3367 }, // 213 IIC_VST4
  { 1, 334, 337, 3367, 3375 }, // 214 IIC_VST4u
  { -1, 337, 342, 3375, 3379 }, // 215 IIC_fpStore_m
  { 1, 342, 345, 3379, 3381 }, // 216 IIC_fpStore64
  { 1, 342, 345, 3381, 3383 }, // 217 IIC_fpStore32
  { 1, 269, 271, 3383, 3386 }, // 218 IIC_VSUBiQ
  { 1, 314, 316, 3386, 3389 }, // 219 IIC_VTB1
  { 1, 314, 316, 3389, 3393 }, // 220 IIC_VTB2
  { 1, 355, 359, 3393, 3398 }, // 221 IIC_VTB3
  { 1, 355, 359, 3398, 3404 }, // 222 IIC_VTB4
  { 1, 314, 316, 3404, 3408 }, // 223 IIC_VTBX1
  { 1, 314, 316, 3408, 3413 }, // 224 IIC_VTBX2
  { 1, 355, 359, 3413, 3419 }, // 225 IIC_VTBX3
  { 1, 355, 359, 3419, 3426 }, // 226 IIC_VTBX4
  { 1, 352, 355, 3426, 3428 }, // 227 IIC_fpCVTDI_WriteCvtFP
  { 1, 269, 271, 3428, 3430 }, // 228 IIC_fpCVTSI_WriteCvtFP
  { 1, 352, 355, 3430, 3432 }, // 229 IIC_fpCVTDI
  { 1, 269, 271, 3432, 3434 }, // 230 IIC_fpCVTSI
  { 1, 271, 273, 3434, 3438 }, // 231 IIC_VPERMD
  { 1, 314, 316, 3438, 3442 }, // 232 IIC_VPERMQ
  { 1, 355, 359, 3442, 3446 }, // 233 IIC_VPERMQ3
  { 1, 265, 266, 3446, 3449 }, // 234 IIC_iALUsi_WriteALUsi_ReadALUsr
  { 1, 265, 266, 3449, 3451 }, // 235 IIC_iBITi
  { 1, 265, 266, 3451, 3453 }, // 236 IIC_iCMPsi_WriteCMPsi_ReadALU_ReadALU
  { 1, 265, 266, 3453, 3454 }, // 237 IIC_iCMPi_WriteCMP
  { 1, 265, 266, 3454, 3456 }, // 238 IIC_iCMPr_WriteCMP
  { 1, 265, 266, 3456, 3458 }, // 239 IIC_iCMPsi_WriteCMPsi
  { 1, 265, 266, 0, 0 }, // 240 IIC_iALUx
  { 1, 280, 282, 3458, 3460 }, // 241 IIC_iLoad_bh_i
  { 1, 280, 282, 3460, 3462 }, // 242 IIC_iLoad_d_i
  { 1, 280, 282, 3462, 3464 }, // 243 IIC_iLoad_i
  { 1, 359, 362, 3464, 3466 }, // 244 IIC_iLoadiALU
  { 1, 265, 266, 3466, 3468 }, // 245 IIC_iCMOVsi_WriteALU
  { 1, 265, 266, 3468, 3469 }, // 246 IIC_iMOVi
  { 1, 265, 266, 3469, 3471 }, // 247 IIC_iMVNsi_WriteALU
  { 1, 265, 266, 3471, 3474 }, // 248 IIC_iALUsir_WriteALUsi_ReadALU
  { 1, 280, 282, 3474, 3476 }, // 249 IIC_iStore_bh_i
  { 1, 280, 282, 3476, 3478 }, // 250 IIC_iStore_i
  { 1, 265, 266, 3478, 3482 }, // 251 IIC_iEXTAsr
  { 1, 265, 266, 3482, 3484 }, // 252 IIC_iEXTr
  { 1, 265, 266, 3484, 3485 }, // 253 IIC_iTSTi_WriteCMP
  { 1, 265, 266, 3485, 3487 }, // 254 IIC_iTSTr_WriteCMP
  { 1, 265, 266, 3487, 3489 }, // 255 IIC_iTSTsi_WriteCMPsi
  { 1, 265, 266, 3489, 3492 }, // 256 IIC_iALUr_WriteALU
  { 1, 265, 266, 3492, 3494 }, // 257 IIC_iALUi_WriteALU
  { 1, 265, 266, 3494, 3497 }, // 258 IIC_iBITr_WriteALU
  { -1, 275, 277, 3497, 3500 }, // 259 IIC_iPop
  { -1, 277, 280, 3500, 3503 }, // 260 IIC_iPop_Br_WriteBrL
  { 1, 265, 266, 3503, 3505 }, // 261 IIC_iTSTr_WriteALU
  { 1, 265, 266, 3505, 3507 }, // 262 ANDri_BICri_EORri_ORRri
  { 1, 265, 266, 3507, 3510 }, // 263 ANDrr_BICrr_EORrr_ORRrr
  { 1, 265, 266, 3510, 3514 }, // 264 ANDrsi_BICrsi_EORrsi_ORRrsi
  { 1, 265, 266, 3514, 3518 }, // 265 ANDrsr_BICrsr_EORrsr_ORRrsr
  { 1, 265, 266, 3518, 3521 }, // 266 MOVCCsi_MOVCCsr
  { 1, 265, 266, 3521, 3524 }, // 267 MOVsi_MOVsr
  { 1, 265, 266, 3524, 3526 }, // 268 MOVsra_flag_MOVsrl_flag
  { 1, 265, 266, 3526, 3529 }, // 269 MVNsr
  { 1, 265, 266, 3529, 3531 }, // 270 MVNr
  { 1, 285, 287, 3531, 3533 }, // 271 MOVCCi32imm
  { 1, 285, 287, 3533, 3534 }, // 272 MOV_ga_dyn_MOVi32imm
  { 1, 287, 290, 3534, 3535 }, // 273 MOV_ga_pcrel
  { 1, 290, 293, 3535, 3536 }, // 274 MOV_ga_pcrel_ldr
  { 0, 0, 0, 0, 0 }, // 275 SEL
  { 1, 265, 266, 3536, 3538 }, // 276 BFC_BFI_SBFX_UBFX
  { 1, 284, 285, 3538, 3542 }, // 277 MLA_MLAv5_MLS_SMMLA_SMMLAR_SMMLS_SMMLSR
  { 1, 284, 285, 3542, 3545 }, // 278 MUL_MULv5_SMMUL_SMMULR
  { 1, 293, 294, 3545, 3549 }, // 279 SMLAL_SMLALBB_SMLALBT_SMLALTB_SMLALTT_SMLALv5_UMAAL_UMAALv5_UMLAL_UMLALv5
  { 1, 293, 294, 3549, 3553 }, // 280 SMULL_SMULLv5_UMULL_UMULLv5
  { 0, 0, 0, 0, 0 }, // 281 SMLAD_SMLADX_SMLALD_SMLALDX_SMLSD_SMLSDX_SMLSLD_SMLSLDX_SMUAD_SMUADX_SMUSD_SMUSDX
  { 1, 294, 295, 3553, 3556 }, // 282 SMULBB_SMULBT_SMULTB_SMULTT_SMULWB_SMULWT
  { 1, 284, 285, 3556, 3560 }, // 283 SMLABB_SMLABT_SMLATB_SMLATT_SMLAWB_SMLAWT
  { 1, 280, 282, 3560, 3563 }, // 284 LDRi12_PICLDR
  { 1, 282, 284, 3563, 3566 }, // 285 LDRrs
  { 1, 280, 282, 3566, 3569 }, // 286 LDRBi12_LDRH_LDRSB_LDRSH_PICLDRB_PICLDRH_PICLDRSB_PICLDRSH
  { 1, 280, 282, 3569, 3573 }, // 287 LDRHTi_LDRHTr_LDRH_POST_LDRH_PRE_LDRSBTi_LDRSBTr_LDRSB_POST_LDRSB_PRE_LDRSHTi_LDRSHTr_LDRSH_POST_LDRSH_PRE
  { 1, 265, 266, 3573, 3575 }, // 288 SXTB_SXTB16_SXTH_UXTB_UXTB16_UXTH
  { 1, 265, 266, 3575, 3577 }, // 289 t2SXTB_t2SXTB16_t2SXTH_t2UXTB_t2UXTB16_t2UXTH
  { 1, 285, 287, 3577, 3579 }, // 290 t2MOVCCi32imm
  { 1, 285, 287, 3579, 3580 }, // 291 t2MOV_ga_dyn_t2MOVi32imm
  { 1, 287, 290, 3580, 3581 }, // 292 t2MOV_ga_pcrel
  { 1, 265, 266, 3581, 3582 }, // 293 t2MOVi16_ga_pcrel
  { 0, 0, 0, 0, 0 }, // 294 t2SEL
  { 1, 265, 266, 3582, 3584 }, // 295 t2BFC_t2SBFX_t2UBFX
  { 1, 265, 266, 3584, 3586 }, // 296 t2BFI
  { 1, 265, 266, 3586, 3589 }, // 297 QADD_QADD16_QADD8_QASX_QDADD_QDSUB_QSAX_QSUB_QSUB16_QSUB8_UQADD16_UQADD8_UQASX_UQSAX_UQSUB16_UQSUB8
  { 0, 0, 0, 0, 0 }, // 298 SSAT_SSAT16_USAT_USAT16_t2QADD_t2QADD16_t2QADD8_t2QASX_t2QDADD_t2QDSUB_t2QSAX_t2QSUB_t2QSUB16_t2QSUB8_t2SSAT_t2SSAT16_t2UQADD16_t2UQADD8_t2UQASX_t2UQSAX_t2UQSUB16_t2UQSUB8_t2USAT_t2USAT16
  { 1, 265, 266, 3589, 3592 }, // 299 SADD16_SADD8_SASX_SSAX_SSUB16_SSUB8_UADD16_UADD8_UASX_USAX_USUB16_USUB8
  { 0, 0, 0, 0, 0 }, // 300 t2SADD16_t2SADD8_t2SASX_t2SSAX_t2SSUB16_t2SSUB8_t2UADD16_t2UADD8_t2UASX_t2USAX_t2USUB16_t2USUB8
  { 1, 265, 266, 3592, 3595 }, // 301 SHADD16_SHADD8_SHASX_SHSAX_SHSUB16_SHSUB8_UHADD16_UHADD8_UHASX_UHSAX_UHSUB16_UHSUB8
  { 1, 265, 266, 3595, 3598 }, // 302 SXTAB_SXTAB16_SXTAH_UXTAB_UXTAB16_UXTAH
  { 0, 0, 0, 0, 0 }, // 303 t2SHADD16_t2SHADD8_t2SHASX_t2SHSAX_t2SHSUB16_t2SHSUB8_t2UHADD16_t2UHADD8_t2UHASX_t2UHSAX_t2UHSUB16_t2UHSUB8
  { 1, 265, 266, 3598, 3602 }, // 304 t2SXTAB_t2SXTAB16_t2SXTAH_t2UXTAB_t2UXTAB16_t2UXTAH
  { 0, 0, 0, 0, 0 }, // 305 USAD8
  { 0, 0, 0, 0, 0 }, // 306 USADA8
  { 0, 0, 0, 0, 0 }, // 307 SMUSD_SMUSDX
  { 1, 284, 285, 3602, 3605 }, // 308 t2MUL_t2SMMUL_t2SMMULR
  { 1, 294, 295, 3605, 3608 }, // 309 t2SMULBB_t2SMULBT_t2SMULTB_t2SMULTT_t2SMULWB_t2SMULWT
  { 1, 284, 285, 3608, 3612 }, // 310 t2SMUSD_t2SMUSDX
  { 1, 284, 285, 3612, 3616 }, // 311 t2MLA_t2MLS_t2SMMLA_t2SMMLAR_t2SMMLS_t2SMMLSR
  { 0, 0, 0, 0, 0 }, // 312 SMUAD_SMUADX
  { 1, 284, 285, 3616, 3620 }, // 313 t2SMUAD_t2SMUADX
  { 0, 0, 0, 0, 0 }, // 314 SMLSD_SMLSDX
  { 1, 284, 285, 3620, 3624 }, // 315 t2SMLABB_t2SMLABT_t2SMLATB_t2SMLATT_t2SMLAWB_t2SMLAWT
  { 1, 284, 285, 3624, 3628 }, // 316 t2SMLSD_t2SMLSDX
  { 0, 0, 0, 0, 0 }, // 317 SMLAD_SMLADX
  { 1, 284, 285, 3628, 3632 }, // 318 t2SMLAD_t2SMLADX
  { 1, 293, 294, 3632, 3636 }, // 319 SMULL_UMULL
  { 1, 293, 294, 3636, 3640 }, // 320 t2SMULL_t2UMULL
  { 1, 293, 294, 3640, 3644 }, // 321 t2SMLAL_t2SMLALBB_t2SMLALBT_t2SMLALD_t2SMLALDX_t2SMLALTB_t2SMLALTT_t2SMLSLD_t2SMLSLDX_t2UMAAL_t2UMLAL
  { 0, 0, 0, 0, 0 }, // 322 SDIV_UDIV_t2SDIV_t2UDIV
  { 1, 280, 282, 3644, 3647 }, // 323 LDRBi12
  { 1, 282, 284, 3647, 3650 }, // 324 LDRBrs_t2LDRBs_t2LDRHs
  { 0, 0, 0, 0, 0 }, // 325 LDREX_LDREXB_LDREXD_LDREXH_tLDRpci_pic
  { 1, 280, 282, 3650, 3653 }, // 326 LDRi12
  { 1, 280, 282, 3653, 3655 }, // 327 t2LDRBi12_t2LDRBi8_t2LDRBpci_t2LDRHi12_t2LDRHi8_t2LDRHpci_tLDRBi_tLDRHi
  { 1, 280, 282, 3655, 3657 }, // 328 t2LDRi12_t2LDRi8_t2LDRpci_tLDRi_tLDRpci_tLDRspi
  { 1, 359, 362, 3657, 3659 }, // 329 t2LDRpci_pic
  { 1, 282, 284, 3659, 3662 }, // 330 t2LDRs
  { 1, 280, 282, 3662, 3665 }, // 331 tLDRBr_tLDRHr
  { 1, 280, 282, 3665, 3668 }, // 332 tLDRr
  { 1, 280, 282, 3668, 3671 }, // 333 LDRH_PICLDRB_PICLDRH
  { 1, 280, 282, 3671, 3674 }, // 334 LDRcp
  { 1, 280, 282, 3674, 3676 }, // 335 t2LDRSBi12_t2LDRSBi8_t2LDRSBpci_t2LDRSHi12_t2LDRSHi8_t2LDRSHpci
  { 0, 0, 0, 0, 0 }, // 336 t2LDRSBpcrel_t2LDRSHpcrel
  { 1, 282, 284, 3676, 3679 }, // 337 t2LDRSBs_t2LDRSHs
  { 1, 280, 282, 3679, 3682 }, // 338 tLDRSB_tLDRSH
  { 1, 280, 282, 3682, 3686 }, // 339 LDRBT_POST_IMM_LDRBT_POST_REG_LDRB_POST_REG_LDRB_PRE_REG
  { 1, 280, 282, 3686, 3689 }, // 340 LDRB_POST_IMM_LDRB_PRE_IMM_t2LDRB_POST_t2LDRB_PRE_t2LDRH_POST_t2LDRH_PRE
  { 1, 280, 282, 3689, 3693 }, // 341 LDRHTi_LDRHTr_LDRH_POST_LDRH_PRE
  { 1, 280, 282, 3693, 3697 }, // 342 LDRT_POST_IMM_LDRT_POST_REG_LDR_POST_REG_LDR_PRE_REG
  { 1, 280, 282, 3697, 3700 }, // 343 LDR_POST_IMM_LDR_PRE_IMM_t2LDR_POST_t2LDR_PRE
  { 1, 280, 282, 3700, 3702 }, // 344 t2LDRBT_t2LDRHT
  { 1, 280, 282, 3702, 3704 }, // 345 t2LDRT
  { 1, 280, 282, 3704, 3706 }, // 346 t2LDRSBT_t2LDRSHT
  { 1, 280, 282, 3706, 3709 }, // 347 t2LDRSB_POST_t2LDRSB_PRE_t2LDRSH_POST_t2LDRSH_PRE
  { 1, 280, 282, 3709, 3712 }, // 348 LDRD
  { 1, 280, 282, 3712, 3714 }, // 349 t2LDRDi8
  { 1, 280, 282, 3714, 3718 }, // 350 LDRD_POST_LDRD_PRE_t2LDRD_POST_t2LDRD_PRE
  { -1, 273, 275, 3718, 3723 }, // 351 LDMDA_LDMDB_LDMIA_LDMIB_sysLDMDA_sysLDMDB_sysLDMIA_sysLDMIB_t2LDMDB_t2LDMIA_tLDMIA
  { -1, 275, 277, 3723, 3728 }, // 352 LDMDA_UPD_LDMDB_UPD_LDMIA_UPD_LDMIB_UPD_sysLDMDA_UPD_sysLDMDB_UPD_sysLDMIA_UPD_sysLDMIB_UPD_t2LDMDB_UPD_t2LDMIA_UPD_tLDMIA_UPD
  { -1, 277, 280, 3728, 3733 }, // 353 LDMIA_RET_t2LDMIA_RET
  { -1, 275, 277, 3733, 3736 }, // 354 tPOP
  { -1, 277, 280, 3736, 3739 }, // 355 tPOP_RET
  { 1, 280, 282, 3739, 3742 }, // 356 PICSTR_STRi12_tSTRr
  { 1, 280, 282, 3742, 3745 }, // 357 PICSTRB_PICSTRH_STRBi12_STRH_tSTRBr_tSTRHr
  { 1, 295, 297, 3745, 3748 }, // 358 STRBrs_t2STRBs_t2STRHs
  { 0, 0, 0, 0, 0 }, // 359 STREX_STREXB_STREXD_STREXH
  { 1, 295, 297, 3748, 3751 }, // 360 STRrs_t2STRs
  { 1, 280, 282, 3751, 3753 }, // 361 t2STRBi12_t2STRBi8_t2STRHi12_t2STRHi8_tSTRBi_tSTRHi
  { 1, 280, 282, 3753, 3755 }, // 362 t2STRi12_t2STRi8_tSTRi_tSTRspi
  { 1, 280, 282, 3755, 3759 }, // 363 STRBT_POST_IMM_STRBT_POST_REG_STRB_POST_REG_STRB_PRE_REG_STRHTi_STRHTr_STRH_POST_STRH_PRE
  { 1, 280, 282, 3759, 3762 }, // 364 STRB_POST_IMM_STRB_PRE_IMM_t2STRB_POST_t2STRB_PRE_t2STRH_POST
  { 1, 280, 282, 3762, 3766 }, // 365 STRBi_preidx_STRBr_preidx_STRH_preidx_STRT_POST_IMM_STRT_POST_REG_STR_POST_REG_STR_PRE_REG_STRi_preidx_STRr_preidx_t2STRB_preidx_t2STRH_preidx_t2STR_preidx
  { 1, 280, 282, 3766, 3769 }, // 366 STR_POST_IMM_STR_PRE_IMM_t2STRH_PRE_t2STR_POST_t2STR_PRE
  { 1, 280, 282, 3769, 3771 }, // 367 t2STRBT_t2STRHT
  { 1, 280, 282, 3771, 3773 }, // 368 t2STRT
  { 1, 280, 282, 3773, 3776 }, // 369 STRD_t2STRDi8
  { 1, 280, 282, 3776, 3780 }, // 370 STRD_POST_STRD_PRE_t2STRD_POST_t2STRD_PRE
  { -1, 273, 275, 0, 0 }, // 371 STMDA_STMDB_STMIA_STMIB_sysSTMDA_sysSTMDB_sysSTMIA_sysSTMIB_t2STMDB_t2STMIA
  { -1, 273, 275, 3780, 3781 }, // 372 STMDA_UPD_STMDB_UPD_STMIA_UPD_STMIB_UPD_sysSTMDA_UPD_sysSTMDB_UPD_sysSTMIA_UPD_sysSTMIB_UPD_t2STMDB_UPD_t2STMIA_UPD_tSTMIA_UPD
  { -1, 273, 275, 0, 0 }, // 373 tPUSH
  { 0, 0, 0, 0, 0 }, // 374 ITasm
  { 1, 265, 266, 0, 0 }, // 375 t2IT
  { 1, 269, 271, 3781, 3784 }, // 376 VADDLsv2i64_VADDLsv4i32_VADDLsv8i16_VADDLuv2i64_VADDLuv4i32_VADDLuv8i16_VNEGs16d_VNEGs32d_VNEGs8d_VPADDLsv16i8_VPADDLsv2i32_VPADDLsv4i16_VPADDLsv4i32_VPADDLsv8i16_VPADDLsv8i8_VPADDLuv16i8_VPADDLuv2i32_VPADDLuv4i16_VPADDLuv4i32_VPADDLuv8i16_VPADDLuv8i8_VPADDi16_VPADDi32_VPADDi8_VSHLLi16_VSHLLi32_VSHLLi8_VSHLLsv2i64_VSHLLsv4i32_VSHLLsv8i16_VSHLLuv2i64_VSHLLuv4i32_VSHLLuv8i16_VSHLiv16i8_VSHLiv1i64_VSHLiv2i32_VSHLiv2i64_VSHLiv4i16_VSHLiv4i32_VSHLiv8i16_VSHLiv8i8_VSHLsv1i64_VSHLsv2i32_VSHLsv4i16_VSHLsv8i8_VSHLuv1i64_VSHLuv2i32_VSHLuv4i16_VSHLuv8i8_VSHRsv16i8_VSHRsv1i64_VSHRsv2i32_VSHRsv2i64_VSHRsv4i16_VSHRsv4i32_VSHRsv8i16_VSHRsv8i8_VSHRuv16i8_VSHRuv1i64_VSHRuv2i32_VSHRuv2i64_VSHRuv4i16_VSHRuv4i32_VSHRuv8i16_VSHRuv8i8_VSLIv1i64_VSLIv2i32_VSLIv4i16_VSLIv8i8_VSRIv1i64_VSRIv2i32_VSRIv4i16_VSRIv8i8_VSUBLsv2i64_VSUBLsv4i32_VSUBLsv8i16_VSUBLuv2i64_VSUBLuv4i32_VSUBLuv8i16
  { 1, 269, 271, 3784, 3787 }, // 377 VADDWsv2i64_VADDWsv4i32_VADDWsv8i16_VADDWuv2i64_VADDWuv4i32_VADDWuv8i16_VSUBWsv2i64_VSUBWsv4i32_VSUBWsv8i16_VSUBWuv2i64_VSUBWuv4i32_VSUBWuv8i16_VSUBv1i64_VSUBv2i32_VSUBv4i16_VSUBv8i8
  { 1, 269, 271, 3787, 3790 }, // 378 VADDv16i8_VADDv2i64_VADDv4i32_VADDv8i16_VANDq_VBICq_VBIFq_VBITq_VEORq_VORNq_VORRq
  { 1, 269, 271, 3790, 3793 }, // 379 VADDv1i64_VADDv2i32_VADDv4i16_VADDv8i8_VANDd_VBICd_VBIFd_VBITd_VEORd_VORNd_VORRd
  { 1, 269, 271, 3793, 3794 }, // 380 VBICiv2i32_VBICiv4i16_VBICiv4i32_VBICiv8i16_VORRiv2i32_VORRiv4i16_VORRiv4i32_VORRiv8i16
  { 1, 269, 271, 3794, 3797 }, // 381 VBSLd_VCLSv2i32_VCLSv4i16_VCLSv8i8_VCLZv2i32_VCLZv4i16_VCLZv8i8_VCNTd
  { 1, 297, 299, 3797, 3800 }, // 382 VBSLq_VCLSv16i8_VCLSv4i32_VCLSv8i16_VCLZv16i8_VCLZv4i32_VCLZv8i16_VCNTq
  { 1, 269, 271, 3800, 3803 }, // 383 VHADDsv16i8_VHADDsv4i32_VHADDsv8i16_VHADDuv16i8_VHADDuv4i32_VHADDuv8i16_VRHADDsv16i8_VRHADDsv4i32_VRHADDsv8i16_VRHADDuv16i8_VRHADDuv4i32_VRHADDuv8i16_VTSTv16i8_VTSTv4i32_VTSTv8i16
  { 1, 269, 271, 3803, 3806 }, // 384 VHADDsv2i32_VHADDsv4i16_VHADDsv8i8_VHADDuv2i32_VHADDuv4i16_VHADDuv8i8_VRHADDsv2i32_VRHADDsv4i16_VRHADDsv8i8_VRHADDuv2i32_VRHADDuv4i16_VRHADDuv8i8_VTSTv2i32_VTSTv4i16_VTSTv8i8
  { 1, 269, 271, 3806, 3809 }, // 385 VHSUBsv16i8_VHSUBsv4i32_VHSUBsv8i16_VHSUBuv16i8_VHSUBuv4i32_VHSUBuv8i16
  { 1, 269, 271, 3809, 3812 }, // 386 VHSUBsv2i32_VHSUBsv4i16_VHSUBsv8i8_VHSUBuv2i32_VHSUBuv4i16_VHSUBuv8i8
  { 1, 297, 299, 3812, 3814 }, // 387 VNEGf32q
  { 1, 269, 271, 3814, 3816 }, // 388 VNEGfd
  { 1, 297, 299, 3816, 3819 }, // 389 VNEGs16q_VNEGs32q_VNEGs8q_VSHLsv16i8_VSHLsv2i64_VSHLsv4i32_VSHLsv8i16_VSHLuv16i8_VSHLuv2i64_VSHLuv4i32_VSHLuv8i16_VSLIv16i8_VSLIv2i64_VSLIv4i32_VSLIv8i16_VSRIv16i8_VSRIv2i64_VSRIv4i32_VSRIv8i16
  { 1, 269, 271, 3819, 3822 }, // 390 VQSHLsiv16i8_VQSHLsiv1i64_VQSHLsiv2i32_VQSHLsiv2i64_VQSHLsiv4i16_VQSHLsiv4i32_VQSHLsiv8i16_VQSHLsiv8i8_VQSHLsuv16i8_VQSHLsuv1i64_VQSHLsuv2i32_VQSHLsuv2i64_VQSHLsuv4i16_VQSHLsuv4i32_VQSHLsuv8i16_VQSHLsuv8i8_VQSHLsv1i64_VQSHLsv2i32_VQSHLsv4i16_VQSHLsv8i8_VQSHLuiv16i8_VQSHLuiv1i64_VQSHLuiv2i32_VQSHLuiv2i64_VQSHLuiv4i16_VQSHLuiv4i32_VQSHLuiv8i16_VQSHLuiv8i8_VQSHLuv1i64_VQSHLuv2i32_VQSHLuv4i16_VQSHLuv8i8
  { 1, 297, 299, 3822, 3825 }, // 391 VQSHLsv16i8_VQSHLsv2i64_VQSHLsv4i32_VQSHLsv8i16_VQSHLuv16i8_VQSHLuv2i64_VQSHLuv4i32_VQSHLuv8i16
  { 1, 269, 271, 3825, 3828 }, // 392 VSUBv16i8_VSUBv2i64_VSUBv4i32_VSUBv8i16
  { 1, 271, 273, 3828, 3831 }, // 393 VEXTd16_VEXTd32_VEXTd8
  { 1, 314, 316, 3831, 3834 }, // 394 VEXTq16_VEXTq32_VEXTq64_VEXTq8
  { 1, 271, 273, 3834, 3836 }, // 395 VREV16d8_VREV32d16_VREV32d8_VREV64d16_VREV64d32_VREV64d8
  { 1, 314, 316, 3836, 3838 }, // 396 VREV16q8_VREV32q16_VREV32q8_VREV64q16_VREV64q32_VREV64q8
  { 1, 269, 271, 3838, 3842 }, // 397 VABALsv2i64_VABALsv4i32_VABALsv8i16_VABALuv2i64_VABALuv4i32_VABALuv8i16_VABAsv2i32_VABAsv4i16_VABAsv8i8_VABAuv2i32_VABAuv4i16_VABAuv8i8
  { 1, 297, 299, 3842, 3846 }, // 398 VABAsv16i8_VABAsv4i32_VABAsv8i16_VABAuv16i8_VABAuv4i32_VABAuv8i16
  { 1, 269, 271, 3846, 3848 }, // 399 VABSfd
  { 1, 297, 299, 3848, 3850 }, // 400 VABSfq
  { 1, 269, 271, 3850, 3852 }, // 401 VABSv16i8_VABSv4i32_VABSv8i16
  { 1, 269, 271, 3852, 3854 }, // 402 VABSv2i32_VABSv4i16_VABSv8i8
  { 1, 269, 271, 3854, 3857 }, // 403 VACGEd_VACGTd_VCEQfd_VCGEfd_VCGTfd
  { 1, 297, 299, 3857, 3860 }, // 404 VACGEq_VACGTq_VCEQfq_VCGEfq_VCGTfq
  { 1, 269, 271, 3860, 3863 }, // 405 VCEQv16i8_VCEQv4i32_VCEQv8i16_VCGEsv16i8_VCGEsv4i32_VCGEsv8i16_VCGEuv16i8_VCGEuv4i32_VCGEuv8i16_VCGTsv16i8_VCGTsv4i32_VCGTsv8i16_VCGTuv16i8_VCGTuv4i32_VCGTuv8i16_VQSUBsv16i8_VQSUBsv2i64_VQSUBsv4i32_VQSUBsv8i16_VQSUBuv16i8_VQSUBuv2i64_VQSUBuv4i32_VQSUBuv8i16
  { 1, 269, 271, 3863, 3866 }, // 406 VCEQv2i32_VCEQv4i16_VCEQv8i8_VCGEsv2i32_VCGEsv4i16_VCGEsv8i8_VCGEuv2i32_VCGEuv4i16_VCGEuv8i8_VCGTsv2i32_VCGTsv4i16_VCGTsv8i8_VCGTuv2i32_VCGTuv4i16_VCGTuv8i8_VQSUBsv1i64_VQSUBsv2i32_VQSUBsv4i16_VQSUBsv8i8_VQSUBuv1i64_VQSUBuv2i32_VQSUBuv4i16_VQSUBuv8i8
  { 0, 0, 0, 0, 0 }, // 407 VCEQzv16i8_VCEQzv2f32_VCEQzv2i32_VCEQzv4f32_VCEQzv4i16_VCEQzv4i32_VCEQzv8i16_VCEQzv8i8_VCGEzv16i8_VCGEzv2f32_VCGEzv2i32_VCGEzv4f32_VCGEzv4i16_VCGEzv4i32_VCGEzv8i16_VCGEzv8i8_VCGTzv16i8_VCGTzv2f32_VCGTzv2i32_VCGTzv4f32_VCGTzv4i16_VCGTzv4i32_VCGTzv8i16_VCGTzv8i8_VCLEzv16i8_VCLEzv2f32_VCLEzv2i32_VCLEzv4f32_VCLEzv4i16_VCLEzv4i32_VCLEzv8i16_VCLEzv8i8_VCLTzv16i8_VCLTzv2f32_VCLTzv2i32_VCLTzv4f32_VCLTzv4i16_VCLTzv4i32_VCLTzv8i16_VCLTzv8i8
  { 1, 297, 299, 3866, 3869 }, // 408 VPADALsv16i8_VPADALsv4i32_VPADALsv8i16_VPADALuv16i8_VPADALuv4i32_VPADALuv8i16
  { 1, 269, 271, 3869, 3872 }, // 409 VPADALsv2i32_VPADALsv4i16_VPADALsv8i8_VPADALuv2i32_VPADALuv4i16_VPADALuv8i8_VRSRAsv16i8_VRSRAsv1i64_VRSRAsv2i32_VRSRAsv2i64_VRSRAsv4i16_VRSRAsv4i32_VRSRAsv8i16_VRSRAsv8i8_VRSRAuv16i8_VRSRAuv1i64_VRSRAuv2i32_VRSRAuv2i64_VRSRAuv4i16_VRSRAuv4i32_VRSRAuv8i16_VRSRAuv8i8_VSRAsv16i8_VSRAsv1i64_VSRAsv2i32_VSRAsv2i64_VSRAsv4i16_VSRAsv4i32_VSRAsv8i16_VSRAsv8i8_VSRAuv16i8_VSRAuv1i64_VSRAuv2i32_VSRAuv2i64_VSRAuv4i16_VSRAuv4i32_VSRAuv8i16_VSRAuv8i8
  { 1, 269, 271, 3872, 3874 }, // 410 VQABSv16i8_VQABSv4i32_VQABSv8i16_VQNEGv16i8_VQNEGv4i32_VQNEGv8i16
  { 1, 269, 271, 3874, 3876 }, // 411 VQABSv2i32_VQABSv4i16_VQABSv8i8_VQNEGv2i32_VQNEGv4i16_VQNEGv8i8
  { 1, 269, 271, 3876, 3879 }, // 412 VQADDsv16i8_VQADDsv2i64_VQADDsv4i32_VQADDsv8i16_VQADDuv16i8_VQADDuv2i64_VQADDuv4i32_VQADDuv8i16
  { 1, 269, 271, 3879, 3882 }, // 413 VQADDsv1i64_VQADDsv2i32_VQADDsv4i16_VQADDsv8i8_VQADDuv1i64_VQADDuv2i32_VQADDuv4i16_VQADDuv8i8
  { 1, 297, 299, 3882, 3885 }, // 414 VQRSHLsv16i8_VQRSHLsv2i64_VQRSHLsv4i32_VQRSHLsv8i16_VQRSHLuv16i8_VQRSHLuv2i64_VQRSHLuv4i32_VQRSHLuv8i16_VRSHLsv16i8_VRSHLsv2i64_VRSHLsv4i32_VRSHLsv8i16_VRSHLuv16i8_VRSHLuv2i64_VRSHLuv4i32_VRSHLuv8i16
  { 1, 269, 271, 3885, 3888 }, // 415 VQRSHLsv1i64_VQRSHLsv2i32_VQRSHLsv4i16_VQRSHLsv8i8_VQRSHLuv1i64_VQRSHLuv2i32_VQRSHLuv4i16_VQRSHLuv8i8_VRSHLsv1i64_VRSHLsv2i32_VRSHLsv4i16_VRSHLsv8i8_VRSHLuv1i64_VRSHLuv2i32_VRSHLuv4i16_VRSHLuv8i8_VRSHRsv16i8_VRSHRsv1i64_VRSHRsv2i32_VRSHRsv2i64_VRSHRsv4i16_VRSHRsv4i32_VRSHRsv8i16_VRSHRsv8i8_VRSHRuv16i8_VRSHRuv1i64_VRSHRuv2i32_VRSHRuv2i64_VRSHRuv4i16_VRSHRuv4i32_VRSHRuv8i16_VRSHRuv8i8
  { 1, 269, 271, 3888, 3890 }, // 416 VRECPEd_VRECPEfd_VRSQRTEd_VRSQRTEfd
  { 1, 297, 299, 3890, 3892 }, // 417 VRECPEfq_VRECPEq_VRSQRTEfq_VRSQRTEq
  { 1, 269, 271, 3892, 3895 }, // 418 VADDHNv2i32_VADDHNv4i16_VADDHNv8i8_VSUBHNv2i32_VSUBHNv4i16_VSUBHNv8i8
  { 1, 269, 271, 3895, 3898 }, // 419 VSHRNv2i32_VSHRNv4i16_VSHRNv8i8
  { 1, 269, 271, 3898, 3901 }, // 420 VQRSHRNsv2i32_VQRSHRNsv4i16_VQRSHRNsv8i8_VQRSHRNuv2i32_VQRSHRNuv4i16_VQRSHRNuv8i8_VQRSHRUNv2i32_VQRSHRUNv4i16_VQRSHRUNv8i8_VQSHRNsv2i32_VQSHRNsv4i16_VQSHRNsv8i8_VQSHRNuv2i32_VQSHRNuv4i16_VQSHRNuv8i8_VQSHRUNv2i32_VQSHRUNv4i16_VQSHRUNv8i8_VRSHRNv2i32_VRSHRNv4i16_VRSHRNv8i8
  { 1, 269, 271, 3901, 3904 }, // 421 VRADDHNv2i32_VRADDHNv4i16_VRADDHNv8i8_VRSUBHNv2i32_VRSUBHNv4i16_VRSUBHNv8i8
  { 1, 314, 316, 3904, 3907 }, // 422 VTBL1
  { 1, 314, 316, 3907, 3911 }, // 423 VTBX1
  { 1, 314, 316, 3911, 3915 }, // 424 VTBL2
  { 1, 314, 316, 3915, 3920 }, // 425 VTBX2
  { 1, 355, 359, 3920, 3925 }, // 426 VTBL3_VTBL3Pseudo
  { 1, 355, 359, 3925, 3931 }, // 427 VTBX3_VTBX3Pseudo
  { 1, 355, 359, 3931, 3937 }, // 428 VTBL4_VTBL4Pseudo
  { 1, 355, 359, 3937, 3944 }, // 429 VTBX4_VTBX4Pseudo
  { 0, 0, 0, 0, 0 }, // 430 VSWPd_VSWPq
  { 1, 271, 273, 3944, 3948 }, // 431 VTRNd16_VTRNd32_VTRNd8_VUZPd16_VUZPd8_VZIPd16_VZIPd8
  { 1, 314, 316, 3948, 3952 }, // 432 VTRNq16_VTRNq32_VTRNq8
  { 1, 355, 359, 3952, 3956 }, // 433 VUZPq16_VUZPq32_VUZPq8_VZIPq16_VZIPq32_VZIPq8
  { 1, 266, 269, 3956, 3958 }, // 434 VABSD_VNEGD
  { 1, 269, 271, 3958, 3960 }, // 435 VABSS_VNEGS
  { 1, 266, 269, 3960, 3962 }, // 436 VCMPD_VCMPED_VCMPEZD_VCMPZD
  { 1, 269, 271, 3962, 3964 }, // 437 VCMPES_VCMPEZS_VCMPS_VCMPZS
  { 1, 269, 271, 3964, 3967 }, // 438 VABDLsv2i64_VABDLsv4i32_VABDLsv8i16_VABDLuv2i64_VABDLuv4i32_VABDLuv8i16_VABDsv16i8_VABDsv4i32_VABDsv8i16_VABDuv16i8_VABDuv4i32_VABDuv8i16_VMAXsv16i8_VMAXsv4i32_VMAXsv8i16_VMAXuv16i8_VMAXuv4i32_VMAXuv8i16_VMINsv16i8_VMINsv4i32_VMINsv8i16_VMINuv16i8_VMINuv4i32_VMINuv8i16
  { 1, 269, 271, 3967, 3970 }, // 439 VABDfd_VADDfd_VMAXfd_VMINfd_VSUBfd
  { 1, 297, 299, 3970, 3973 }, // 440 VABDfq_VADDfq_VMAXfq_VMINfq_VSUBfq
  { 1, 269, 271, 3973, 3976 }, // 441 VABDsv2i32_VABDsv4i16_VABDsv8i8_VABDuv2i32_VABDuv4i16_VABDuv8i8_VMAXsv2i32_VMAXsv4i16_VMAXsv8i8_VMAXuv2i32_VMAXuv4i16_VMAXuv8i8_VMINsv2i32_VMINsv4i16_VMINsv8i8_VMINuv2i32_VMINuv4i16_VMINuv8i8_VPMAXs16_VPMAXs32_VPMAXs8_VPMAXu16_VPMAXu32_VPMAXu8_VPMINs16_VPMINs32_VPMINs8_VPMINu16_VPMINu32_VPMINu8
  { 1, 269, 271, 3976, 3979 }, // 442 VADDS_VSUBS
  { 0, 0, 0, 0, 0 }, // 443 VMAXNMD_VMAXNMND_VMAXNMNQ_VMAXNMS_VMINNMD_VMINNMND_VMINNMNQ_VMINNMS
  { 1, 269, 271, 3979, 3982 }, // 444 VPADDf_VPMAXf_VPMINf
  { 1, 299, 302, 3982, 3985 }, // 445 VADDD_VSUBD
  { 1, 269, 271, 3985, 3988 }, // 446 VRECPSfd_VRSQRTSfd
  { 1, 297, 299, 3988, 3991 }, // 447 VRECPSfq_VRSQRTSfq
  { 1, 269, 271, 3991, 3994 }, // 448 VMULLp_VMULLslsv2i32_VMULLslsv4i16_VMULLsluv2i32_VMULLsluv4i16_VMULLsv4i32_VMULLsv8i16_VMULLuv4i32_VMULLuv8i16_VMULpd_VMULslv4i16_VMULv4i16_VMULv8i8_VQDMULHslv4i16_VQDMULHv4i16_VQDMULLslv2i32_VQDMULLslv4i16_VQDMULLv4i32_VQRDMULHslv4i16_VQRDMULHv4i16
  { 1, 297, 299, 3994, 3997 }, // 449 VMULLsv2i64_VMULLuv2i64_VMULslv2i32_VMULv2i32_VQDMULHslv2i32_VQDMULHv2i32_VQDMULLv2i64_VQRDMULHslv2i32_VQRDMULHv2i32
  { 1, 269, 271, 3997, 4000 }, // 450 VMULS_VNMULS
  { 1, 269, 271, 4000, 4003 }, // 451 VMULfd
  { 1, 269, 271, 4003, 4006 }, // 452 VMULfq
  { 1, 297, 299, 4006, 4009 }, // 453 VMULpq_VMULslv8i16_VMULv16i8_VMULv8i16_VQDMULHslv8i16_VQDMULHv8i16_VQRDMULHslv8i16_VQRDMULHv8i16
  { 1, 269, 271, 4009, 4012 }, // 454 VMULslfd
  { 1, 297, 299, 4012, 4015 }, // 455 VMULslfq
  { 1, 345, 349, 4015, 4018 }, // 456 VMULslv4i32_VMULv4i32_VQDMULHslv4i32_VQDMULHv4i32_VQRDMULHslv4i32_VQRDMULHv4i32
  { 1, 349, 352, 4018, 4021 }, // 457 VMULD_VNMULD
  { 1, 316, 319, 4021, 4025 }, // 458 VFMAD_VFMSD_VFNMAD_VFNMSD
  { 1, 269, 271, 4025, 4029 }, // 459 VFMAS_VFMSS_VFNMAS_VFNMSS
  { 1, 316, 319, 4029, 4033 }, // 460 VMLAD_VMLSD_VNMLAD_VNMLSD
  { 1, 297, 299, 4033, 4037 }, // 461 VMLALslsv2i32_VMLALsluv2i32_VMLALsv2i64_VMLALuv2i64_VMLAslv2i32_VMLAv2i32_VMLSLslsv2i32_VMLSLsluv2i32_VMLSLsv2i64_VMLSLuv2i64_VMLSslv2i32_VMLSv2i32_VQDMLALslv2i32_VQDMLALv2i64_VQDMLSLslv2i32_VQDMLSLv2i64
  { 1, 269, 271, 4037, 4041 }, // 462 VMLALslsv4i16_VMLALsluv4i16_VMLALsv4i32_VMLALsv8i16_VMLALuv4i32_VMLALuv8i16_VMLAslv4i16_VMLAv4i16_VMLAv8i8_VMLSLslsv4i16_VMLSLsluv4i16_VMLSLsv4i32_VMLSLsv8i16_VMLSLuv4i32_VMLSLuv8i16_VMLSslv4i16_VMLSv4i16_VMLSv8i8_VQDMLALslv4i16_VQDMLALv4i32_VQDMLSLslv4i16_VQDMLSLv4i32
  { 1, 269, 271, 4041, 4045 }, // 463 VMLAS_VMLSS_VNMLAS_VNMLSS
  { 1, 269, 271, 4045, 4049 }, // 464 VMLAfd_VMLAslfd_VMLSfd_VMLSslfd
  { 1, 297, 299, 4049, 4053 }, // 465 VMLAfq_VMLAslfq_VMLSfq_VMLSslfq
  { 1, 345, 349, 4053, 4057 }, // 466 VMLAslv4i32_VMLAv4i32_VMLSslv4i32_VMLSv4i32
  { 1, 297, 299, 4057, 4061 }, // 467 VMLAslv8i16_VMLAv16i8_VMLAv8i16_VMLSslv8i16_VMLSv16i8_VMLSv8i16
  { 1, 269, 271, 4061, 4065 }, // 468 VFMAfd_VFMSfd
  { 1, 297, 299, 4065, 4069 }, // 469 VFMAfq_VFMSfq
  { 0, 0, 0, 0, 0 }, // 470 VCVTANSD_VCVTANSQ_VCVTANUD_VCVTANUQ_VCVTASD_VCVTASS_VCVTAUD_VCVTAUS_VCVTBDH_VCVTBHD_VCVTMNSD_VCVTMNSQ_VCVTMNUD_VCVTMNUQ_VCVTMSD_VCVTMSS_VCVTMUD_VCVTMUS_VCVTNNSD_VCVTNNSQ_VCVTNNUD_VCVTNNUQ_VCVTNSD_VCVTNSS_VCVTNUD_VCVTNUS_VCVTPNSD_VCVTPNSQ_VCVTPNUD_VCVTPNUQ_VCVTPSD_VCVTPSS_VCVTPUD_VCVTPUS_VCVTTDH_VCVTTHD
  { 0, 0, 0, 0, 0 }, // 471 VCVTBHS_VCVTTHS
  { 0, 0, 0, 0, 0 }, // 472 VCVTBSH_VCVTTSH
  { 1, 302, 305, 4069, 4071 }, // 473 VCVTDS
  { 1, 305, 308, 4071, 4073 }, // 474 VCVTSD
  { 1, 297, 299, 4073, 4075 }, // 475 VCVTf2h_VCVTf2sq_VCVTf2uq_VCVTf2xsq_VCVTf2xuq_VCVTh2f_VCVTs2fq_VCVTu2fq_VCVTxs2fq_VCVTxu2fq
  { 1, 269, 271, 4075, 4077 }, // 476 VCVTf2sd_VCVTf2ud_VCVTf2xsd_VCVTf2xud_VCVTs2fd_VCVTu2fd_VCVTxs2fd_VCVTxu2fd
  { 1, 352, 355, 4077, 4079 }, // 477 VSITOD_VUITOD
  { 1, 269, 271, 4079, 4081 }, // 478 VSITOS_VUITOS
  { 1, 352, 355, 4081, 4083 }, // 479 VTOSHD_VTOSLD_VTOUHD_VTOULD
  { 1, 269, 271, 4083, 4085 }, // 480 VTOSHS_VTOSLS_VTOUHS_VTOULS
  { 1, 352, 355, 4085, 4087 }, // 481 VTOSIRD_VTOSIZD_VTOUIRD_VTOUIZD
  { 1, 269, 271, 4087, 4089 }, // 482 VTOSIRS_VTOSIZS_VTOUIRS_VTOUIZS
  { 1, 266, 269, 4089, 4091 }, // 483 FCONSTD_VMOVD_VMOVDcc
  { 1, 269, 271, 4091, 4093 }, // 484 FCONSTS_VMOVS_VMOVScc
  { 1, 269, 271, 4093, 4094 }, // 485 VMOVv16i8_VMOVv1i64_VMOVv2f32_VMOVv2i32_VMOVv2i64_VMOVv4f32_VMOVv4i16_VMOVv4i32_VMOVv8i16_VMOVv8i8_VMVNv2i32_VMVNv4i16_VMVNv4i32_VMVNv8i16
  { 1, 269, 271, 4094, 4097 }, // 486 VMVNd_VMVNq
  { 1, 269, 271, 4097, 4099 }, // 487 VMOVLsv2i64_VMOVLsv4i32_VMOVLsv8i16_VMOVLuv2i64_VMOVLuv4i32_VMOVLuv8i16
  { 1, 269, 271, 4099, 4101 }, // 488 VMOVNv2i32_VMOVNv4i16_VMOVNv8i8
  { 1, 269, 271, 4101, 4103 }, // 489 VQMOVNsuv2i32_VQMOVNsuv4i16_VQMOVNsuv8i8_VQMOVNsv2i32_VQMOVNsv4i16_VQMOVNsv8i8_VQMOVNuv2i32_VQMOVNuv4i16_VQMOVNuv8i8
  { 1, 271, 273, 4103, 4105 }, // 490 VDUPLN16d_VDUPLN32d_VDUPLN8d_VDUPfdf_VDUPfqf
  { 1, 314, 316, 4105, 4107 }, // 491 VDUPLN16q_VDUPLN32q_VDUPLN8q
  { 1, 271, 273, 4107, 4109 }, // 492 VDUP16d_VDUP16q_VDUP32d_VDUP32q_VDUP8d_VDUP8q
  { 1, 269, 271, 4109, 4111 }, // 493 VMOVRS
  { 1, 269, 271, 4111, 4113 }, // 494 VMOVSR
  { 1, 314, 316, 4113, 4116 }, // 495 VSETLNi16_VSETLNi32_VSETLNi8
  { 1, 269, 271, 4116, 4119 }, // 496 VMOVRRD_VMOVRRS
  { 1, 269, 271, 4119, 4122 }, // 497 VMOVDRR
  { 1, 269, 271, 4122, 4125 }, // 498 VMOVSRR
  { 1, 271, 273, 4125, 4127 }, // 499 VGETLNi32_VGETLNu16_VGETLNu8
  { 1, 271, 273, 4127, 4129 }, // 500 VGETLNs16_VGETLNs8
  { 1, 271, 273, 4129, 4130 }, // 501 VMRS_VMRS_FPEXC_VMRS_FPINST_VMRS_FPINST2_VMRS_FPSID_VMRS_MVFR0_VMRS_MVFR1
  { 1, 271, 273, 4130, 4131 }, // 502 VMSR_VMSR_FPEXC_VMSR_FPINST_VMSR_FPINST2_VMSR_FPSID
  { 1, 271, 273, 4131, 4132 }, // 503 FMSTAT
  { 1, 342, 345, 4132, 4134 }, // 504 VLDRD
  { 1, 342, 345, 4134, 4136 }, // 505 VLDRS
  { 1, 342, 345, 4136, 4138 }, // 506 VSTRD
  { 1, 342, 345, 4138, 4140 }, // 507 VSTRS
  { -1, 337, 342, 4140, 4144 }, // 508 VLDMQIA
  { -1, 337, 342, 4144, 4148 }, // 509 VSTMQIA
  { -1, 337, 342, 4148, 4152 }, // 510 VLDMDIA_VLDMSIA
  { -1, 337, 342, 4152, 4157 }, // 511 VLDMDDB_UPD_VLDMDIA_UPD_VLDMSDB_UPD_VLDMSIA_UPD
  { -1, 337, 342, 4157, 4161 }, // 512 VSTMDIA_VSTMSIA
  { -1, 337, 342, 4161, 4166 }, // 513 VSTMDDB_UPD_VSTMDIA_UPD_VSTMSDB_UPD_VSTMSIA_UPD
  { 1, 325, 328, 4166, 4168 }, // 514 VLD1d16_VLD1d32_VLD1d64_VLD1d8
  { 1, 325, 328, 4168, 4171 }, // 515 VLD1q16_VLD1q32_VLD1q64_VLD1q8
  { 1, 325, 328, 4171, 4174 }, // 516 VLD1d16wb_fixed_VLD1d16wb_register_VLD1d32wb_fixed_VLD1d32wb_register_VLD1d64wb_fixed_VLD1d64wb_register_VLD1d8wb_fixed_VLD1d8wb_register
  { 1, 325, 328, 4174, 4178 }, // 517 VLD1q16wb_fixed_VLD1q16wb_register_VLD1q32wb_fixed_VLD1q32wb_register_VLD1q64wb_fixed_VLD1q64wb_register_VLD1q8wb_fixed_VLD1q8wb_register
  { 1, 328, 331, 4178, 4182 }, // 518 VLD1d16T_VLD1d32T_VLD1d64T_VLD1d64TPseudo_VLD1d8T
  { 1, 325, 328, 4182, 4186 }, // 519 VLD1d16Twb_fixed_VLD1d16Twb_register_VLD1d32Twb_fixed_VLD1d32Twb_register_VLD1d64Twb_fixed_VLD1d64Twb_register_VLD1d8Twb_fixed_VLD1d8Twb_register
  { 1, 328, 331, 4186, 4191 }, // 520 VLD1d16Q_VLD1d32Q_VLD1d64Q_VLD1d64QPseudo_VLD1d8Q
  { 1, 325, 328, 4191, 4195 }, // 521 VLD1d16Qwb_fixed_VLD1d16Qwb_register_VLD1d32Qwb_fixed_VLD1d32Qwb_register_VLD1d64Qwb_fixed_VLD1d64Qwb_register_VLD1d8Qwb_fixed_VLD1d8Qwb_register
  { 1, 325, 328, 4195, 4198 }, // 522 VLD2b16_VLD2b32_VLD2b8_VLD2d16_VLD2d32_VLD2d8
  { 1, 328, 331, 4198, 4203 }, // 523 VLD2q16_VLD2q16Pseudo_VLD2q32_VLD2q32Pseudo_VLD2q8_VLD2q8Pseudo
  { 1, 325, 328, 4203, 4209 }, // 524 VLD2b16wb_fixed_VLD2b16wb_register_VLD2b32wb_fixed_VLD2b32wb_register_VLD2b8wb_fixed_VLD2b8wb_register_VLD2d16wb_fixed_VLD2d16wb_register_VLD2d32wb_fixed_VLD2d32wb_register_VLD2d8wb_fixed_VLD2d8wb_register
  { 1, 328, 331, 4209, 4215 }, // 525 VLD2q16PseudoWB_fixed_VLD2q16PseudoWB_register_VLD2q16wb_fixed_VLD2q16wb_register_VLD2q32PseudoWB_fixed_VLD2q32PseudoWB_register_VLD2q32wb_fixed_VLD2q32wb_register_VLD2q8PseudoWB_fixed_VLD2q8PseudoWB_register_VLD2q8wb_fixed_VLD2q8wb_register
  { 1, 334, 337, 4215, 4219 }, // 526 VLD3d16_VLD3d32_VLD3d8_VLD3q16_VLD3q32_VLD3q8
  { 1, 334, 337, 4219, 4223 }, // 527 VLD3d16Pseudo_VLD3d32Pseudo_VLD3d8Pseudo_VLD3q16oddPseudo_VLD3q32oddPseudo_VLD3q8oddPseudo
  { 1, 334, 337, 4223, 4228 }, // 528 VLD3d16_UPD_VLD3d32_UPD_VLD3d8_UPD_VLD3q16_UPD_VLD3q32_UPD_VLD3q8_UPD
  { 1, 334, 337, 4228, 4233 }, // 529 VLD3d16Pseudo_UPD_VLD3d32Pseudo_UPD_VLD3d8Pseudo_UPD_VLD3q16Pseudo_UPD_VLD3q16oddPseudo_UPD_VLD3q32Pseudo_UPD_VLD3q32oddPseudo_UPD_VLD3q8Pseudo_UPD_VLD3q8oddPseudo_UPD
  { 1, 334, 337, 4233, 4238 }, // 530 VLD4d16_VLD4d32_VLD4d8_VLD4q16_VLD4q32_VLD4q8
  { 1, 334, 337, 4238, 4243 }, // 531 VLD4d16Pseudo_VLD4d32Pseudo_VLD4d8Pseudo_VLD4q16oddPseudo_VLD4q32oddPseudo_VLD4q8oddPseudo
  { 1, 334, 337, 4243, 4249 }, // 532 VLD4d16_UPD_VLD4d32_UPD_VLD4d8_UPD_VLD4q16_UPD_VLD4q32_UPD_VLD4q8_UPD
  { 1, 334, 337, 4249, 4255 }, // 533 VLD4d16Pseudo_UPD_VLD4d32Pseudo_UPD_VLD4d8Pseudo_UPD_VLD4q16Pseudo_UPD_VLD4q16oddPseudo_UPD_VLD4q32Pseudo_UPD_VLD4q32oddPseudo_UPD_VLD4q8Pseudo_UPD_VLD4q8oddPseudo_UPD
  { 1, 319, 322, 4255, 4257 }, // 534 VLD1DUPd16_VLD1DUPd32_VLD1DUPd8_VLD1DUPq16_VLD1DUPq32_VLD1DUPq8
  { 1, 322, 325, 4257, 4261 }, // 535 VLD1LNd16_VLD1LNd32_VLD1LNd8_VLD1LNq16Pseudo_VLD1LNq32Pseudo_VLD1LNq8Pseudo
  { 1, 319, 322, 4261, 4265 }, // 536 VLD1DUPd16wb_fixed_VLD1DUPd16wb_register_VLD1DUPd32wb_fixed_VLD1DUPd32wb_register_VLD1DUPd8wb_fixed_VLD1DUPd8wb_register_VLD1DUPq16wb_fixed_VLD1DUPq16wb_register_VLD1DUPq32wb_fixed_VLD1DUPq32wb_register_VLD1DUPq8wb_fixed_VLD1DUPq8wb_register
  { 1, 322, 325, 4265, 4271 }, // 537 VLD1LNd16_UPD_VLD1LNd32_UPD_VLD1LNd8_UPD_VLD1LNq16Pseudo_UPD_VLD1LNq32Pseudo_UPD_VLD1LNq8Pseudo_UPD
  { 1, 319, 322, 4271, 4274 }, // 538 VLD2DUPd16_VLD2DUPd16x2_VLD2DUPd32_VLD2DUPd32x2_VLD2DUPd8_VLD2DUPd8x2
  { 1, 328, 331, 4274, 4280 }, // 539 VLD2LNd16_VLD2LNd16Pseudo_VLD2LNd32_VLD2LNd32Pseudo_VLD2LNd8_VLD2LNd8Pseudo_VLD2LNq16_VLD2LNq16Pseudo_VLD2LNq32_VLD2LNq32Pseudo
  { 1, 328, 331, 4280, 4288 }, // 540 VLD2LNd16_UPD_VLD2LNd32_UPD_VLD2LNd8_UPD_VLD2LNq16_UPD_VLD2LNq32_UPD
  { 1, 319, 322, 4288, 4293 }, // 541 VLD2DUPd16wb_fixed_VLD2DUPd16wb_register_VLD2DUPd16x2wb_fixed_VLD2DUPd16x2wb_register_VLD2DUPd32wb_fixed_VLD2DUPd32wb_register_VLD2DUPd32x2wb_fixed_VLD2DUPd32x2wb_register_VLD2DUPd8wb_fixed_VLD2DUPd8wb_register_VLD2DUPd8x2wb_fixed_VLD2DUPd8x2wb_register
  { 1, 328, 331, 4293, 4301 }, // 542 VLD2LNd16Pseudo_UPD_VLD2LNd32Pseudo_UPD_VLD2LNd8Pseudo_UPD_VLD2LNq16Pseudo_UPD_VLD2LNq32Pseudo_UPD
  { 1, 322, 325, 4301, 4305 }, // 543 VLD3DUPd16_VLD3DUPd16Pseudo_VLD3DUPd32_VLD3DUPd32Pseudo_VLD3DUPd8_VLD3DUPd8Pseudo_VLD3DUPq16_VLD3DUPq32_VLD3DUPq8
  { 1, 331, 334, 4305, 4313 }, // 544 VLD3LNd16_VLD3LNd16Pseudo_VLD3LNd32_VLD3LNd32Pseudo_VLD3LNd8_VLD3LNd8Pseudo_VLD3LNq16_VLD3LNq16Pseudo_VLD3LNq32_VLD3LNq32Pseudo
  { 1, 322, 325, 4313, 4319 }, // 545 VLD3DUPd16_UPD_VLD3DUPd32_UPD_VLD3DUPd8_UPD_VLD3DUPq16_UPD_VLD3DUPq32_UPD_VLD3DUPq8_UPD
  { 1, 331, 334, 4319, 4329 }, // 546 VLD3LNd16_UPD_VLD3LNd32_UPD_VLD3LNd8_UPD_VLD3LNq16_UPD_VLD3LNq32_UPD
  { 1, 322, 325, 4329, 4335 }, // 547 VLD3DUPd16Pseudo_UPD_VLD3DUPd32Pseudo_UPD_VLD3DUPd8Pseudo_UPD
  { 1, 331, 334, 4335, 4345 }, // 548 VLD3LNd16Pseudo_UPD_VLD3LNd32Pseudo_UPD_VLD3LNd8Pseudo_UPD_VLD3LNq16Pseudo_UPD_VLD3LNq32Pseudo_UPD
  { 1, 322, 325, 4345, 4350 }, // 549 VLD4DUPd16_VLD4DUPd16Pseudo_VLD4DUPd32_VLD4DUPd32Pseudo_VLD4DUPd8_VLD4DUPd8Pseudo_VLD4DUPq16_VLD4DUPq32_VLD4DUPq8
  { 1, 331, 334, 4350, 4360 }, // 550 VLD4LNd16_VLD4LNd16Pseudo_VLD4LNd32_VLD4LNd32Pseudo_VLD4LNd8_VLD4LNd8Pseudo_VLD4LNq16_VLD4LNq16Pseudo_VLD4LNq32_VLD4LNq32Pseudo
  { 1, 322, 325, 4360, 4367 }, // 551 VLD4DUPd16_UPD_VLD4DUPd32_UPD_VLD4DUPd8_UPD_VLD4DUPq16_UPD_VLD4DUPq32_UPD_VLD4DUPq8_UPD
  { 1, 331, 334, 4367, 4379 }, // 552 VLD4LNd16_UPD_VLD4LNd32_UPD_VLD4LNd8_UPD_VLD4LNq16_UPD_VLD4LNq32_UPD
  { 1, 322, 325, 4379, 4386 }, // 553 VLD4DUPd16Pseudo_UPD_VLD4DUPd32Pseudo_UPD_VLD4DUPd8Pseudo_UPD
  { 1, 331, 334, 4386, 4398 }, // 554 VLD4LNd16Pseudo_UPD_VLD4LNd32Pseudo_UPD_VLD4LNd8Pseudo_UPD_VLD4LNq16Pseudo_UPD_VLD4LNq32Pseudo_UPD
  { 1, 325, 328, 4398, 4401 }, // 555 VST1d16_VST1d32_VST1d64_VST1d8
  { 1, 325, 328, 4401, 4405 }, // 556 VST1q16_VST1q32_VST1q64_VST1q8
  { 1, 325, 328, 4405, 4408 }, // 557 VST1d16wb_fixed_VST1d16wb_register_VST1d32wb_fixed_VST1d32wb_register_VST1d64wb_fixed_VST1d64wb_register_VST1d8wb_fixed_VST1d8wb_register
  { 1, 325, 328, 4408, 4412 }, // 558 VST1q16wb_fixed_VST1q16wb_register_VST1q32wb_fixed_VST1q32wb_register_VST1q64wb_fixed_VST1q64wb_register_VST1q8wb_fixed_VST1q8wb_register
  { 1, 328, 331, 4412, 4417 }, // 559 VST1d16T_VST1d32T_VST1d64T_VST1d64TPseudo_VST1d8T
  { 1, 328, 331, 4417, 4422 }, // 560 VST1d16Twb_fixed_VST1d16Twb_register_VST1d32Twb_fixed_VST1d32Twb_register_VST1d64Twb_fixed_VST1d64Twb_register_VST1d8Twb_fixed_VST1d8Twb_register
  { 1, 328, 331, 4422, 4429 }, // 561 VST1d64TPseudoWB_fixed_VST1d64TPseudoWB_register
  { 1, 328, 331, 4429, 4435 }, // 562 VST1d16Q_VST1d32Q_VST1d64Q_VST1d64QPseudo_VST1d8Q
  { 1, 328, 331, 4435, 4441 }, // 563 VST1d16Qwb_fixed_VST1d16Qwb_register_VST1d32Qwb_fixed_VST1d32Qwb_register_VST1d64Qwb_fixed_VST1d64Qwb_register_VST1d8Qwb_fixed_VST1d8Qwb_register
  { 1, 328, 331, 4441, 4449 }, // 564 VST1d64QPseudoWB_fixed_VST1d64QPseudoWB_register
  { 1, 325, 328, 4449, 4453 }, // 565 VST2b16_VST2b32_VST2b8_VST2d16_VST2d32_VST2d8
  { 1, 325, 328, 4453, 4456 }, // 566 VST2b16wb_fixed_VST2b16wb_register_VST2b32wb_fixed_VST2b32wb_register_VST2b8wb_fixed_VST2b8wb_register_VST2d16wb_fixed_VST2d16wb_register_VST2d32wb_fixed_VST2d32wb_register_VST2d8wb_fixed_VST2d8wb_register
  { 1, 334, 337, 4456, 4462 }, // 567 VST2q16_VST2q16Pseudo_VST2q32_VST2q32Pseudo_VST2q8_VST2q8Pseudo
  { 1, 334, 337, 4462, 4470 }, // 568 VST2q16PseudoWB_fixed_VST2q16PseudoWB_register_VST2q32PseudoWB_fixed_VST2q32PseudoWB_register_VST2q8PseudoWB_fixed_VST2q8PseudoWB_register
  { 1, 325, 328, 4470, 4473 }, // 569 VST2q16wb_fixed_VST2q16wb_register_VST2q32wb_fixed_VST2q32wb_register_VST2q8wb_fixed_VST2q8wb_register
  { 1, 328, 331, 4473, 4478 }, // 570 VST3d16_VST3d16Pseudo_VST3d32_VST3d32Pseudo_VST3d8_VST3d8Pseudo_VST3q16_VST3q16oddPseudo_VST3q32_VST3q32oddPseudo_VST3q8_VST3q8oddPseudo
  { 1, 328, 331, 4478, 4485 }, // 571 VST3d16Pseudo_UPD_VST3d16_UPD_VST3d32Pseudo_UPD_VST3d32_UPD_VST3d8Pseudo_UPD_VST3d8_UPD_VST3q16Pseudo_UPD_VST3q16_UPD_VST3q16oddPseudo_UPD_VST3q32Pseudo_UPD_VST3q32_UPD_VST3q32oddPseudo_UPD_VST3q8Pseudo_UPD_VST3q8_UPD_VST3q8oddPseudo_UPD
  { 1, 334, 337, 4485, 4491 }, // 572 VST4d16_VST4d16Pseudo_VST4d32_VST4d32Pseudo_VST4d8_VST4d8Pseudo_VST4q16_VST4q16oddPseudo_VST4q32_VST4q32oddPseudo_VST4q8_VST4q8oddPseudo
  { 1, 334, 337, 4491, 4499 }, // 573 VST4d16Pseudo_UPD_VST4d16_UPD_VST4d32Pseudo_UPD_VST4d32_UPD_VST4d8Pseudo_UPD_VST4d8_UPD_VST4q16Pseudo_UPD_VST4q16_UPD_VST4q16oddPseudo_UPD_VST4q32Pseudo_UPD_VST4q32_UPD_VST4q32oddPseudo_UPD_VST4q8Pseudo_UPD_VST4q8_UPD_VST4q8oddPseudo_UPD
  { 1, 319, 322, 4499, 4502 }, // 574 VST1LNd16_VST1LNd32_VST1LNd8_VST1LNq16Pseudo_VST1LNq32Pseudo_VST1LNq8Pseudo
  { 1, 319, 322, 4502, 4507 }, // 575 VST1LNd16_UPD_VST1LNd32_UPD_VST1LNd8_UPD_VST1LNq16Pseudo_UPD_VST1LNq32Pseudo_UPD_VST1LNq8Pseudo_UPD
  { 1, 325, 328, 4507, 4511 }, // 576 VST2LNd16_VST2LNd16Pseudo_VST2LNd32_VST2LNd32Pseudo_VST2LNd8_VST2LNd8Pseudo_VST2LNq16_VST2LNq16Pseudo_VST2LNq32_VST2LNq32Pseudo
  { 1, 325, 328, 4511, 4517 }, // 577 VST2LNd16Pseudo_UPD_VST2LNd16_UPD_VST2LNd32Pseudo_UPD_VST2LNd32_UPD_VST2LNd8Pseudo_UPD_VST2LNd8_UPD_VST2LNq16Pseudo_UPD_VST2LNq16_UPD_VST2LNq32Pseudo_UPD_VST2LNq32_UPD
  { 1, 328, 331, 4517, 4522 }, // 578 VST3LNd16_VST3LNd16Pseudo_VST3LNd32_VST3LNd32Pseudo_VST3LNd8_VST3LNd8Pseudo_VST3LNq16_VST3LNq16Pseudo_VST3LNq32_VST3LNq32Pseudo
  { 1, 328, 331, 4522, 4529 }, // 579 VST3LNd16Pseudo_UPD_VST3LNd16_UPD_VST3LNd32Pseudo_UPD_VST3LNd32_UPD_VST3LNd8Pseudo_UPD_VST3LNd8_UPD_VST3LNq16Pseudo_UPD_VST3LNq16_UPD_VST3LNq32Pseudo_UPD_VST3LNq32_UPD
  { 1, 334, 337, 4529, 4535 }, // 580 VST4LNd16_VST4LNd16Pseudo_VST4LNd32_VST4LNd32Pseudo_VST4LNd8_VST4LNd8Pseudo_VST4LNq16_VST4LNq16Pseudo_VST4LNq32_VST4LNq32Pseudo
  { 1, 334, 337, 4535, 4543 }, // 581 VST4LNd16Pseudo_UPD_VST4LNd16_UPD_VST4LNd32Pseudo_UPD_VST4LNd32_UPD_VST4LNd8Pseudo_UPD_VST4LNd8_UPD_VST4LNq16Pseudo_UPD_VST4LNq16_UPD_VST4LNq32Pseudo_UPD_VST4LNq32_UPD
  { 1, 311, 314, 4543, 4546 }, // 582 VDIVS
  { 1, 316, 319, 4546, 4548 }, // 583 VSQRTS
  { 1, 308, 311, 4548, 4551 }, // 584 VDIVD
  { 1, 308, 311, 4551, 4553 }, // 585 VSQRTD
  { 0, 0, 0, 0, 0 }, // 586 ABS
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary SwiftItineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 362, 364, 4553, 4555 }, // 1 IIC_iALUi_WriteALU_ReadALU
  { 1, 362, 364, 4555, 4558 }, // 2 IIC_iALUr_WriteALU_ReadALU_ReadALU
  { 1, 362, 364, 4558, 4562 }, // 3 IIC_iALUsr_WriteALUsi_ReadALU
  { 1, 362, 364, 4562, 4566 }, // 4 IIC_iALUsr_WriteALUsr_ReadALUsr
  { 1, 362, 364, 4566, 4570 }, // 5 IIC_iALUsr_WriteALUSsr_ReadALUsr
  { 1, 362, 364, 4570, 4572 }, // 6 IIC_iBITi_WriteALU_ReadALU
  { 1, 362, 364, 4572, 4575 }, // 7 IIC_iBITr_WriteALU_ReadALU_ReadALU
  { 1, 362, 364, 4575, 4579 }, // 8 IIC_iBITsr_WriteALUsi_ReadALU
  { 1, 362, 364, 4579, 4583 }, // 9 IIC_iBITsr_WriteALUsr_ReadALUsr
  { 1, 364, 365, 0, 0 }, // 10 IIC_Br_WriteBr
  { 1, 362, 364, 4583, 4585 }, // 11 IIC_iUNAsi
  { 1, 364, 365, 0, 0 }, // 12 IIC_Br_WriteBrL
  { 0, 0, 0, 0, 0 }, // 13 WriteBrL
  { 1, 364, 365, 0, 0 }, // 14 IIC_Br_WriteBrTbl
  { 0, 0, 0, 0, 0 }, // 15 WriteBr
  { 1, 362, 364, 4585, 4587 }, // 16 IIC_iUNAr_WriteALU
  { 1, 362, 364, 4587, 4588 }, // 17 IIC_iCMPi_WriteCMP_ReadALU
  { 1, 362, 364, 4588, 4590 }, // 18 IIC_iCMPr_WriteCMP_ReadALU_ReadALU
  { 1, 365, 367, 4590, 4593 }, // 19 IIC_iCMPsr_WriteCMPsi_ReadALU
  { 1, 365, 367, 4593, 4596 }, // 20 IIC_iCMPsr_WriteCMPsr_ReadALU
  { 1, 367, 369, 4596, 4598 }, // 21 IIC_fpUNA64
  { 1, 367, 369, 4598, 4600 }, // 22 IIC_fpUNA32
  { 1, 362, 364, 4600, 4601 }, // 23 IIC_fpSTAT
  { -1, 369, 374, 4601, 4606 }, // 24 IIC_iLoad_m
  { -1, 374, 380, 4606, 4611 }, // 25 IIC_iLoad_mu
  { -1, 369, 374, 4611, 4616 }, // 26 IIC_iLoad_mBr
  { 1, 380, 384, 4616, 4620 }, // 27 IIC_iLoad_bh_ru
  { 1, 384, 388, 4620, 4623 }, // 28 IIC_iLoad_bh_iu
  { 1, 388, 390, 4623, 4626 }, // 29 IIC_iLoad_bh_r
  { 1, 390, 394, 4626, 4629 }, // 30 IIC_iLoad_bh_si
  { 1, 394, 400, 4629, 4633 }, // 31 IIC_iLoad_d_r
  { 1, 400, 407, 4633, 4637 }, // 32 IIC_iLoad_d_ru
  { 1, 380, 384, 4637, 4641 }, // 33 IIC_iLoad_ru
  { 1, 384, 388, 4641, 4644 }, // 34 IIC_iLoad_iu
  { 1, 388, 390, 4644, 4647 }, // 35 IIC_iLoad_r
  { 1, 390, 394, 4647, 4650 }, // 36 IIC_iLoad_si
  { 1, 367, 369, 4650, 4654 }, // 37 IIC_iMAC32
  { 1, 362, 364, 4654, 4655 }, // 38 IIC_iCMOVi_WriteALU
  { 1, 362, 364, 4655, 4656 }, // 39 IIC_iMOVi_WriteALU
  { 1, 407, 411, 4656, 4657 }, // 40 IIC_iCMOVix2
  { 1, 362, 364, 4657, 4659 }, // 41 IIC_iCMOVr_WriteALU
  { 1, 362, 364, 4659, 4662 }, // 42 IIC_iCMOVsr_WriteALU
  { 1, 407, 411, 4662, 4663 }, // 43 IIC_iMOVix2
  { 1, 411, 415, 4663, 4664 }, // 44 IIC_iMOVix2addpc
  { 1, 415, 419, 4664, 4665 }, // 45 IIC_iMOVix2ld
  { 1, 362, 364, 4665, 4666 }, // 46 IIC_iMOVr_WriteALU
  { 1, 362, 364, 4666, 4667 }, // 47 IIC_iMOVsr_WriteALU
  { 1, 362, 364, 4667, 4668 }, // 48 IIC_iMOVsi_WriteALU
  { 1, 367, 369, 4668, 4671 }, // 49 IIC_iMUL32
  { 1, 362, 364, 4671, 4672 }, // 50 IIC_iMVNi_WriteALU
  { 1, 362, 364, 4672, 4673 }, // 51 IIC_iMVNr_WriteALU
  { 1, 362, 364, 4673, 4674 }, // 52 IIC_iMVNsr_WriteALU
  { 1, 362, 364, 4674, 4677 }, // 53 IIC_iALUr_WriteALU_ReadALU
  { 1, 388, 390, 4677, 4680 }, // 54 IIC_iStore_r
  { 1, 388, 390, 4680, 4683 }, // 55 IIC_iStore_bh_r
  { 1, 362, 364, 4683, 4686 }, // 56 IIC_iALUsi_WriteALUsi_ReadALU
  { 1, 362, 364, 4686, 4689 }, // 57 IIC_iBITsi_WriteALUsi_ReadALU
  { 1, 364, 365, 4689, 4691 }, // 58 IIC_Preload_WritePreLd
  { 1, 419, 422, 4691, 4694 }, // 59 IIC_iDIV
  { 1, 367, 369, 4694, 4698 }, // 60 IIC_iMAC16
  { 1, 422, 429, 4698, 4702 }, // 61 IIC_iMAC64
  { 1, 367, 369, 4702, 4705 }, // 62 IIC_iMUL16
  { 1, 429, 435, 4705, 4709 }, // 63 IIC_iMUL64
  { -1, 435, 444, 0, 0 }, // 64 IIC_iStore_m
  { -1, 435, 444, 4709, 4710 }, // 65 IIC_iStore_mu
  { 1, 384, 388, 4710, 4714 }, // 66 IIC_iStore_bh_ru
  { 1, 384, 388, 4714, 4717 }, // 67 IIC_iStore_bh_iu
  { 1, 384, 388, 4717, 4721 }, // 68 IIC_iStore_ru
  { 1, 390, 394, 4721, 4724 }, // 69 IIC_iStore_bh_si
  { 1, 444, 450, 4724, 4727 }, // 70 IIC_iStore_d_r
  { 1, 384, 388, 4727, 4731 }, // 71 IIC_iStore_d_ru
  { 1, 384, 388, 4731, 4734 }, // 72 IIC_iStore_iu
  { 1, 390, 394, 4734, 4737 }, // 73 IIC_iStore_si
  { 1, 362, 364, 4737, 4740 }, // 74 IIC_iEXTAr_WriteALUsr
  { 1, 362, 364, 4740, 4742 }, // 75 IIC_iEXTr_WriteALUsi
  { 1, 362, 364, 4742, 4743 }, // 76 IIC_iTSTi_WriteCMP_ReadALU
  { 1, 362, 364, 4743, 4745 }, // 77 IIC_iTSTr_WriteCMP_ReadALU_ReadALU
  { 1, 365, 367, 4745, 4748 }, // 78 IIC_iTSTsr_WriteCMPsi_ReadALU
  { 1, 365, 367, 4748, 4751 }, // 79 IIC_iTSTsr_WriteCMPsr_ReadALU
  { 0, 0, 0, 0, 0 }, // 80 WriteALU_ReadALU_ReadALU
  { 1, 367, 369, 4751, 4755 }, // 81 IIC_VABAD
  { 1, 367, 369, 4755, 4759 }, // 82 IIC_VABAQ
  { 1, 367, 369, 4759, 4762 }, // 83 IIC_VSUBi4Q
  { 1, 367, 369, 4762, 4765 }, // 84 IIC_VBIND
  { 1, 367, 369, 4765, 4768 }, // 85 IIC_VBINQ
  { 1, 367, 369, 4768, 4771 }, // 86 IIC_VSUBi4D
  { 1, 367, 369, 4771, 4773 }, // 87 IIC_VUNAD
  { 1, 367, 369, 4773, 4775 }, // 88 IIC_VUNAQ
  { 1, 367, 369, 4775, 4777 }, // 89 IIC_VUNAiQ
  { 1, 367, 369, 4777, 4779 }, // 90 IIC_VUNAiD
  { 1, 367, 369, 4779, 4782 }, // 91 IIC_fpALU64
  { 1, 367, 369, 4782, 4785 }, // 92 IIC_VBINi4D
  { 1, 367, 369, 4785, 4788 }, // 93 IIC_VSHLiD
  { 1, 367, 369, 4788, 4791 }, // 94 IIC_fpALU32
  { 1, 367, 369, 4791, 4794 }, // 95 IIC_VSUBiD
  { 1, 367, 369, 4794, 4797 }, // 96 IIC_VBINiQ
  { 1, 367, 369, 4797, 4800 }, // 97 IIC_VBINiD
  { 1, 367, 369, 4800, 4801 }, // 98 IIC_VMOVImm
  { 1, 367, 369, 4801, 4804 }, // 99 IIC_VCNTiD
  { 1, 367, 369, 4804, 4807 }, // 100 IIC_VCNTiQ
  { 1, 367, 369, 4807, 4809 }, // 101 IIC_fpCMP64
  { 1, 367, 369, 4809, 4811 }, // 102 IIC_fpCMP32
  { 1, 450, 454, 4811, 4813 }, // 103 IIC_fpCVTSH
  { 1, 454, 456, 4813, 4815 }, // 104 IIC_fpCVTHS
  { 1, 454, 456, 4815, 4817 }, // 105 IIC_fpCVTDS
  { 1, 454, 456, 4817, 4819 }, // 106 IIC_fpCVTSD
  { 1, 456, 459, 4819, 4822 }, // 107 IIC_fpDIV64
  { 1, 459, 462, 4822, 4825 }, // 108 IIC_fpDIV32
  { 1, 462, 466, 4825, 4827 }, // 109 IIC_VMOVIS
  { 1, 454, 456, 4827, 4829 }, // 110 IIC_VMOVD
  { 1, 454, 456, 4829, 4831 }, // 111 IIC_VMOVQ
  { 1, 454, 456, 4831, 4834 }, // 112 IIC_VEXTD
  { 1, 454, 456, 4834, 4837 }, // 113 IIC_VEXTQ
  { 1, 454, 456, 4837, 4840 }, // 114 IIC_fpFMAC64
  { 1, 454, 456, 4840, 4843 }, // 115 IIC_fpFMAC32
  { 1, 454, 456, 4843, 4846 }, // 116 IIC_VFMACD
  { 1, 454, 456, 4846, 4849 }, // 117 IIC_VFMACQ
  { 1, 388, 390, 4849, 4851 }, // 118 IIC_VMOVSI
  { 1, 367, 369, 4851, 4854 }, // 119 IIC_VBINi4Q
  { 0, 0, 0, 0, 0 }, // 120 IIC_VLD1dup
  { 0, 0, 0, 0, 0 }, // 121 IIC_VLD1dupu
  { 0, 0, 0, 0, 0 }, // 122 IIC_VLD1ln
  { 0, 0, 0, 0, 0 }, // 123 IIC_VLD1lnu
  { 0, 0, 0, 0, 0 }, // 124 IIC_VLD1
  { 0, 0, 0, 0, 0 }, // 125 IIC_VLD1x4
  { 0, 0, 0, 0, 0 }, // 126 IIC_VLD1x2u
  { 0, 0, 0, 0, 0 }, // 127 IIC_VLD1x3
  { 0, 0, 0, 0, 0 }, // 128 IIC_VLD1u
  { 0, 0, 0, 0, 0 }, // 129 IIC_VLD1x2
  { 0, 0, 0, 0, 0 }, // 130 IIC_VLD2dup
  { 0, 0, 0, 0, 0 }, // 131 IIC_VLD2dupu
  { 0, 0, 0, 0, 0 }, // 132 IIC_VLD2ln
  { 0, 0, 0, 0, 0 }, // 133 IIC_VLD2lnu
  { 0, 0, 0, 0, 0 }, // 134 IIC_VLD2
  { 0, 0, 0, 0, 0 }, // 135 IIC_VLD2u
  { 0, 0, 0, 0, 0 }, // 136 IIC_VLD2x2
  { 0, 0, 0, 0, 0 }, // 137 IIC_VLD2x2u
  { 0, 0, 0, 0, 0 }, // 138 IIC_VLD3dup
  { 0, 0, 0, 0, 0 }, // 139 IIC_VLD3dupu
  { 0, 0, 0, 0, 0 }, // 140 IIC_VLD3ln
  { 0, 0, 0, 0, 0 }, // 141 IIC_VLD3lnu
  { 0, 0, 0, 0, 0 }, // 142 IIC_VLD3
  { 0, 0, 0, 0, 0 }, // 143 IIC_VLD3u
  { 0, 0, 0, 0, 0 }, // 144 IIC_VLD4dup
  { 0, 0, 0, 0, 0 }, // 145 IIC_VLD4dupu
  { 0, 0, 0, 0, 0 }, // 146 IIC_VLD4ln
  { 0, 0, 0, 0, 0 }, // 147 IIC_VLD4lnu
  { 0, 0, 0, 0, 0 }, // 148 IIC_VLD4
  { 0, 0, 0, 0, 0 }, // 149 IIC_VLD4u
  { -1, 466, 470, 4854, 4859 }, // 150 IIC_fpLoad_mu
  { -1, 388, 390, 4859, 4863 }, // 151 IIC_fpLoad_m
  { 1, 388, 390, 4863, 4865 }, // 152 IIC_fpLoad64
  { 1, 388, 390, 4865, 4867 }, // 153 IIC_fpLoad32
  { 1, 454, 456, 4867, 4870 }, // 154 IIC_fpMAC64
  { 1, 454, 456, 4870, 4874 }, // 155 IIC_VMACi32D
  { 1, 454, 456, 4874, 4878 }, // 156 IIC_VMACi16D
  { 1, 454, 456, 4878, 4881 }, // 157 IIC_fpMAC32
  { 1, 454, 456, 4881, 4884 }, // 158 IIC_VMACD
  { 1, 454, 456, 4884, 4887 }, // 159 IIC_VMACQ
  { 1, 454, 456, 4887, 4891 }, // 160 IIC_VMACi32Q
  { 1, 454, 456, 4891, 4895 }, // 161 IIC_VMACi16Q
  { 1, 388, 390, 4895, 4897 }, // 162 IIC_fpMOVID
  { 1, 367, 369, 4897, 4899 }, // 163 IIC_VQUNAiD
  { 1, 454, 456, 4899, 4901 }, // 164 IIC_VMOVN
  { 1, 470, 474, 4901, 4904 }, // 165 IIC_fpMOVDI
  { 1, 388, 390, 4904, 4906 }, // 166 IIC_fpMOVSI
  { 1, 462, 466, 4906, 4908 }, // 167 IIC_fpMOVIS
  { 1, 454, 456, 4908, 4911 }, // 168 IIC_fpMUL64
  { 1, 454, 456, 4911, 4914 }, // 169 IIC_VMULi16D
  { 1, 454, 456, 4914, 4917 }, // 170 IIC_VMULi32D
  { 1, 454, 456, 4917, 4920 }, // 171 IIC_fpMUL32
  { 1, 454, 456, 4920, 4923 }, // 172 IIC_VFMULD
  { 1, 454, 456, 4923, 4926 }, // 173 IIC_VFMULQ
  { 1, 454, 456, 4926, 4929 }, // 174 IIC_VMULi16Q
  { 1, 454, 456, 4929, 4932 }, // 175 IIC_VMULi32Q
  { 1, 367, 369, 4932, 4935 }, // 176 IIC_VSHLiQ
  { 1, 367, 369, 4935, 4938 }, // 177 IIC_VPALiQ
  { 1, 367, 369, 4938, 4941 }, // 178 IIC_VPALiD
  { 1, 367, 369, 4941, 4944 }, // 179 IIC_VPBIND
  { 1, 367, 369, 4944, 4946 }, // 180 IIC_VQUNAiQ
  { 1, 367, 369, 4946, 4949 }, // 181 IIC_VSHLi4Q
  { 1, 367, 369, 4949, 4952 }, // 182 IIC_VSHLi4D
  { 1, 454, 456, 4952, 4955 }, // 183 IIC_VRECSD
  { 1, 454, 456, 4955, 4958 }, // 184 IIC_VRECSQ
  { 1, 462, 466, 4958, 4960 }, // 185 IIC_VMOVISL
  { 1, 454, 456, 4960, 4962 }, // 186 IIC_fpCVTID_WriteCvtFP
  { 1, 454, 456, 4962, 4964 }, // 187 IIC_fpCVTIS_WriteCvtFP
  { 1, 454, 456, 4964, 4966 }, // 188 IIC_fpCVTID
  { 1, 454, 456, 4966, 4968 }, // 189 IIC_fpCVTIS
  { 1, 456, 459, 4968, 4971 }, // 190 IIC_fpSQRT64
  { 1, 459, 462, 4971, 4973 }, // 191 IIC_fpSQRT32
  { 0, 0, 0, 0, 0 }, // 192 IIC_VST1ln
  { 0, 0, 0, 0, 0 }, // 193 IIC_VST1lnu
  { 0, 0, 0, 0, 0 }, // 194 IIC_VST1
  { 0, 0, 0, 0, 0 }, // 195 IIC_VST1x4
  { 0, 0, 0, 0, 0 }, // 196 IIC_VLD1x4u
  { 0, 0, 0, 0, 0 }, // 197 IIC_VST1x3
  { 0, 0, 0, 0, 0 }, // 198 IIC_VLD1x3u
  { 0, 0, 0, 0, 0 }, // 199 IIC_VST1x4u
  { 0, 0, 0, 0, 0 }, // 200 IIC_VST1x3u
  { 0, 0, 0, 0, 0 }, // 201 IIC_VST1x2
  { 0, 0, 0, 0, 0 }, // 202 IIC_VST2ln
  { 0, 0, 0, 0, 0 }, // 203 IIC_VST2lnu
  { 0, 0, 0, 0, 0 }, // 204 IIC_VST2
  { 0, 0, 0, 0, 0 }, // 205 IIC_VST2x2
  { 0, 0, 0, 0, 0 }, // 206 IIC_VST2x2u
  { 0, 0, 0, 0, 0 }, // 207 IIC_VST3ln
  { 0, 0, 0, 0, 0 }, // 208 IIC_VST3lnu
  { 0, 0, 0, 0, 0 }, // 209 IIC_VST3
  { 0, 0, 0, 0, 0 }, // 210 IIC_VST3u
  { 0, 0, 0, 0, 0 }, // 211 IIC_VST4ln
  { 0, 0, 0, 0, 0 }, // 212 IIC_VST4lnu
  { 0, 0, 0, 0, 0 }, // 213 IIC_VST4
  { 0, 0, 0, 0, 0 }, // 214 IIC_VST4u
  { -1, 388, 390, 4973, 4976 }, // 215 IIC_fpStore_m
  { 1, 388, 390, 4976, 4978 }, // 216 IIC_fpStore64
  { 1, 388, 390, 4978, 4980 }, // 217 IIC_fpStore32
  { 1, 367, 369, 4980, 4983 }, // 218 IIC_VSUBiQ
  { 1, 454, 456, 4983, 4986 }, // 219 IIC_VTB1
  { 1, 474, 478, 4986, 4990 }, // 220 IIC_VTB2
  { 1, 478, 484, 4990, 4995 }, // 221 IIC_VTB3
  { 1, 484, 491, 4995, 5001 }, // 222 IIC_VTB4
  { 1, 454, 456, 5001, 5004 }, // 223 IIC_VTBX1
  { 1, 474, 478, 5004, 5008 }, // 224 IIC_VTBX2
  { 1, 478, 484, 5008, 5013 }, // 225 IIC_VTBX3
  { 1, 484, 491, 5013, 5019 }, // 226 IIC_VTBX4
  { 1, 454, 456, 5019, 5021 }, // 227 IIC_fpCVTDI_WriteCvtFP
  { 1, 454, 456, 5021, 5023 }, // 228 IIC_fpCVTSI_WriteCvtFP
  { 1, 454, 456, 5023, 5025 }, // 229 IIC_fpCVTDI
  { 1, 454, 456, 5025, 5027 }, // 230 IIC_fpCVTSI
  { 1, 478, 484, 5027, 5031 }, // 231 IIC_VPERMD
  { 1, 478, 484, 5031, 5035 }, // 232 IIC_VPERMQ
  { 1, 478, 484, 5035, 5039 }, // 233 IIC_VPERMQ3
  { 1, 362, 364, 5039, 5042 }, // 234 IIC_iALUsi_WriteALUsi_ReadALUsr
  { 1, 362, 364, 5042, 5044 }, // 235 IIC_iBITi
  { 1, 365, 367, 5044, 5046 }, // 236 IIC_iCMPsi_WriteCMPsi_ReadALU_ReadALU
  { 1, 362, 364, 5046, 5047 }, // 237 IIC_iCMPi_WriteCMP
  { 1, 362, 364, 5047, 5049 }, // 238 IIC_iCMPr_WriteCMP
  { 1, 365, 367, 5049, 5051 }, // 239 IIC_iCMPsi_WriteCMPsi
  { 1, 362, 364, 0, 0 }, // 240 IIC_iALUx
  { 1, 388, 390, 5051, 5053 }, // 241 IIC_iLoad_bh_i
  { 1, 491, 495, 5053, 5056 }, // 242 IIC_iLoad_d_i
  { 1, 388, 390, 5056, 5058 }, // 243 IIC_iLoad_i
  { 1, 495, 498, 5058, 5060 }, // 244 IIC_iLoadiALU
  { 1, 362, 364, 5060, 5062 }, // 245 IIC_iCMOVsi_WriteALU
  { 1, 362, 364, 5062, 5063 }, // 246 IIC_iMOVi
  { 1, 362, 364, 5063, 5064 }, // 247 IIC_iMVNsi_WriteALU
  { 1, 362, 364, 5064, 5067 }, // 248 IIC_iALUsir_WriteALUsi_ReadALU
  { 1, 388, 390, 5067, 5069 }, // 249 IIC_iStore_bh_i
  { 1, 388, 390, 5069, 5071 }, // 250 IIC_iStore_i
  { 1, 362, 364, 5071, 5075 }, // 251 IIC_iEXTAsr
  { 1, 362, 364, 5075, 5077 }, // 252 IIC_iEXTr
  { 1, 362, 364, 5077, 5078 }, // 253 IIC_iTSTi_WriteCMP
  { 1, 362, 364, 5078, 5080 }, // 254 IIC_iTSTr_WriteCMP
  { 1, 365, 367, 5080, 5082 }, // 255 IIC_iTSTsi_WriteCMPsi
  { 1, 362, 364, 5082, 5085 }, // 256 IIC_iALUr_WriteALU
  { 1, 362, 364, 5085, 5087 }, // 257 IIC_iALUi_WriteALU
  { 1, 362, 364, 5087, 5090 }, // 258 IIC_iBITr_WriteALU
  { -1, 384, 388, 5090, 5093 }, // 259 IIC_iPop
  { -1, 384, 388, 5093, 5096 }, // 260 IIC_iPop_Br_WriteBrL
  { 1, 362, 364, 5096, 5098 }, // 261 IIC_iTSTr_WriteALU
  { 1, 362, 364, 5098, 5100 }, // 262 ANDri_BICri_EORri_ORRri
  { 1, 362, 364, 5100, 5103 }, // 263 ANDrr_BICrr_EORrr_ORRrr
  { 1, 362, 364, 5103, 5107 }, // 264 ANDrsi_BICrsi_EORrsi_ORRrsi
  { 1, 362, 364, 5107, 5111 }, // 265 ANDrsr_BICrsr_EORrsr_ORRrsr
  { 1, 362, 364, 5111, 5114 }, // 266 MOVCCsi_MOVCCsr
  { 1, 362, 364, 5114, 5115 }, // 267 MOVsi_MOVsr
  { 1, 362, 364, 5115, 5116 }, // 268 MOVsra_flag_MOVsrl_flag
  { 1, 362, 364, 5116, 5117 }, // 269 MVNsr
  { 1, 362, 364, 5117, 5118 }, // 270 MVNr
  { 1, 407, 411, 5118, 5119 }, // 271 MOVCCi32imm
  { 1, 407, 411, 5119, 5120 }, // 272 MOV_ga_dyn_MOVi32imm
  { 1, 411, 415, 5120, 5121 }, // 273 MOV_ga_pcrel
  { 1, 415, 419, 5121, 5122 }, // 274 MOV_ga_pcrel_ldr
  { 0, 0, 0, 0, 0 }, // 275 SEL
  { 1, 362, 364, 5122, 5124 }, // 276 BFC_BFI_SBFX_UBFX
  { 1, 367, 369, 5124, 5128 }, // 277 MLA_MLAv5_MLS_SMMLA_SMMLAR_SMMLS_SMMLSR
  { 1, 367, 369, 5128, 5131 }, // 278 MUL_MULv5_SMMUL_SMMULR
  { 1, 422, 429, 5131, 5135 }, // 279 SMLAL_SMLALBB_SMLALBT_SMLALTB_SMLALTT_SMLALv5_UMAAL_UMAALv5_UMLAL_UMLALv5
  { 1, 429, 435, 5135, 5139 }, // 280 SMULL_SMULLv5_UMULL_UMULLv5
  { 0, 0, 0, 0, 0 }, // 281 SMLAD_SMLADX_SMLALD_SMLALDX_SMLSD_SMLSDX_SMLSLD_SMLSLDX_SMUAD_SMUADX_SMUSD_SMUSDX
  { 1, 367, 369, 5139, 5142 }, // 282 SMULBB_SMULBT_SMULTB_SMULTT_SMULWB_SMULWT
  { 1, 367, 369, 5142, 5146 }, // 283 SMLABB_SMLABT_SMLATB_SMLATT_SMLAWB_SMLAWT
  { 1, 388, 390, 5146, 5149 }, // 284 LDRi12_PICLDR
  { 1, 390, 394, 5149, 5152 }, // 285 LDRrs
  { 1, 388, 390, 5152, 5155 }, // 286 LDRBi12_LDRH_LDRSB_LDRSH_PICLDRB_PICLDRH_PICLDRSB_PICLDRSH
  { 1, 380, 384, 5155, 5159 }, // 287 LDRHTi_LDRHTr_LDRH_POST_LDRH_PRE_LDRSBTi_LDRSBTr_LDRSB_POST_LDRSB_PRE_LDRSHTi_LDRSHTr_LDRSH_POST_LDRSH_PRE
  { 1, 362, 364, 5159, 5161 }, // 288 SXTB_SXTB16_SXTH_UXTB_UXTB16_UXTH
  { 1, 362, 364, 5161, 5163 }, // 289 t2SXTB_t2SXTB16_t2SXTH_t2UXTB_t2UXTB16_t2UXTH
  { 1, 407, 411, 5163, 5164 }, // 290 t2MOVCCi32imm
  { 1, 407, 411, 5164, 5165 }, // 291 t2MOV_ga_dyn_t2MOVi32imm
  { 1, 411, 415, 5165, 5166 }, // 292 t2MOV_ga_pcrel
  { 1, 362, 364, 5166, 5167 }, // 293 t2MOVi16_ga_pcrel
  { 0, 0, 0, 0, 0 }, // 294 t2SEL
  { 1, 362, 364, 5167, 5169 }, // 295 t2BFC_t2SBFX_t2UBFX
  { 1, 362, 364, 5169, 5171 }, // 296 t2BFI
  { 1, 362, 364, 5171, 5174 }, // 297 QADD_QADD16_QADD8_QASX_QDADD_QDSUB_QSAX_QSUB_QSUB16_QSUB8_UQADD16_UQADD8_UQASX_UQSAX_UQSUB16_UQSUB8
  { 0, 0, 0, 0, 0 }, // 298 SSAT_SSAT16_USAT_USAT16_t2QADD_t2QADD16_t2QADD8_t2QASX_t2QDADD_t2QDSUB_t2QSAX_t2QSUB_t2QSUB16_t2QSUB8_t2SSAT_t2SSAT16_t2UQADD16_t2UQADD8_t2UQASX_t2UQSAX_t2UQSUB16_t2UQSUB8_t2USAT_t2USAT16
  { 1, 362, 364, 5174, 5177 }, // 299 SADD16_SADD8_SASX_SSAX_SSUB16_SSUB8_UADD16_UADD8_UASX_USAX_USUB16_USUB8
  { 0, 0, 0, 0, 0 }, // 300 t2SADD16_t2SADD8_t2SASX_t2SSAX_t2SSUB16_t2SSUB8_t2UADD16_t2UADD8_t2UASX_t2USAX_t2USUB16_t2USUB8
  { 1, 362, 364, 5177, 5180 }, // 301 SHADD16_SHADD8_SHASX_SHSAX_SHSUB16_SHSUB8_UHADD16_UHADD8_UHASX_UHSAX_UHSUB16_UHSUB8
  { 1, 362, 364, 5180, 5183 }, // 302 SXTAB_SXTAB16_SXTAH_UXTAB_UXTAB16_UXTAH
  { 0, 0, 0, 0, 0 }, // 303 t2SHADD16_t2SHADD8_t2SHASX_t2SHSAX_t2SHSUB16_t2SHSUB8_t2UHADD16_t2UHADD8_t2UHASX_t2UHSAX_t2UHSUB16_t2UHSUB8
  { 1, 362, 364, 5183, 5187 }, // 304 t2SXTAB_t2SXTAB16_t2SXTAH_t2UXTAB_t2UXTAB16_t2UXTAH
  { 0, 0, 0, 0, 0 }, // 305 USAD8
  { 0, 0, 0, 0, 0 }, // 306 USADA8
  { 0, 0, 0, 0, 0 }, // 307 SMUSD_SMUSDX
  { 1, 367, 369, 5187, 5190 }, // 308 t2MUL_t2SMMUL_t2SMMULR
  { 1, 367, 369, 5190, 5193 }, // 309 t2SMULBB_t2SMULBT_t2SMULTB_t2SMULTT_t2SMULWB_t2SMULWT
  { 1, 367, 369, 5193, 5197 }, // 310 t2SMUSD_t2SMUSDX
  { 1, 367, 369, 5197, 5201 }, // 311 t2MLA_t2MLS_t2SMMLA_t2SMMLAR_t2SMMLS_t2SMMLSR
  { 0, 0, 0, 0, 0 }, // 312 SMUAD_SMUADX
  { 1, 367, 369, 5201, 5205 }, // 313 t2SMUAD_t2SMUADX
  { 0, 0, 0, 0, 0 }, // 314 SMLSD_SMLSDX
  { 1, 367, 369, 5205, 5209 }, // 315 t2SMLABB_t2SMLABT_t2SMLATB_t2SMLATT_t2SMLAWB_t2SMLAWT
  { 1, 367, 369, 5209, 5213 }, // 316 t2SMLSD_t2SMLSDX
  { 0, 0, 0, 0, 0 }, // 317 SMLAD_SMLADX
  { 1, 367, 369, 5213, 5217 }, // 318 t2SMLAD_t2SMLADX
  { 1, 429, 435, 5217, 5221 }, // 319 SMULL_UMULL
  { 1, 429, 435, 5221, 5225 }, // 320 t2SMULL_t2UMULL
  { 1, 422, 429, 5225, 5229 }, // 321 t2SMLAL_t2SMLALBB_t2SMLALBT_t2SMLALD_t2SMLALDX_t2SMLALTB_t2SMLALTT_t2SMLSLD_t2SMLSLDX_t2UMAAL_t2UMLAL
  { 1, 419, 422, 5229, 5232 }, // 322 SDIV_UDIV_t2SDIV_t2UDIV
  { 1, 388, 390, 5232, 5235 }, // 323 LDRBi12
  { 1, 390, 394, 5235, 5238 }, // 324 LDRBrs_t2LDRBs_t2LDRHs
  { 0, 0, 0, 0, 0 }, // 325 LDREX_LDREXB_LDREXD_LDREXH_tLDRpci_pic
  { 1, 388, 390, 5238, 5241 }, // 326 LDRi12
  { 1, 388, 390, 5241, 5243 }, // 327 t2LDRBi12_t2LDRBi8_t2LDRBpci_t2LDRHi12_t2LDRHi8_t2LDRHpci_tLDRBi_tLDRHi
  { 1, 388, 390, 5243, 5245 }, // 328 t2LDRi12_t2LDRi8_t2LDRpci_tLDRi_tLDRpci_tLDRspi
  { 1, 495, 498, 5245, 5247 }, // 329 t2LDRpci_pic
  { 1, 390, 394, 5247, 5250 }, // 330 t2LDRs
  { 1, 388, 390, 5250, 5253 }, // 331 tLDRBr_tLDRHr
  { 1, 388, 390, 5253, 5256 }, // 332 tLDRr
  { 1, 388, 390, 5256, 5259 }, // 333 LDRH_PICLDRB_PICLDRH
  { 1, 388, 390, 5259, 5262 }, // 334 LDRcp
  { 1, 388, 390, 5262, 5264 }, // 335 t2LDRSBi12_t2LDRSBi8_t2LDRSBpci_t2LDRSHi12_t2LDRSHi8_t2LDRSHpci
  { 0, 0, 0, 0, 0 }, // 336 t2LDRSBpcrel_t2LDRSHpcrel
  { 1, 390, 394, 5264, 5267 }, // 337 t2LDRSBs_t2LDRSHs
  { 1, 388, 390, 5267, 5270 }, // 338 tLDRSB_tLDRSH
  { 1, 380, 384, 5270, 5274 }, // 339 LDRBT_POST_IMM_LDRBT_POST_REG_LDRB_POST_REG_LDRB_PRE_REG
  { 1, 384, 388, 5274, 5277 }, // 340 LDRB_POST_IMM_LDRB_PRE_IMM_t2LDRB_POST_t2LDRB_PRE_t2LDRH_POST_t2LDRH_PRE
  { 1, 380, 384, 5277, 5281 }, // 341 LDRHTi_LDRHTr_LDRH_POST_LDRH_PRE
  { 1, 380, 384, 5281, 5285 }, // 342 LDRT_POST_IMM_LDRT_POST_REG_LDR_POST_REG_LDR_PRE_REG
  { 1, 384, 388, 5285, 5288 }, // 343 LDR_POST_IMM_LDR_PRE_IMM_t2LDR_POST_t2LDR_PRE
  { 1, 388, 390, 5288, 5290 }, // 344 t2LDRBT_t2LDRHT
  { 1, 388, 390, 5290, 5292 }, // 345 t2LDRT
  { 1, 388, 390, 5292, 5294 }, // 346 t2LDRSBT_t2LDRSHT
  { 1, 384, 388, 5294, 5297 }, // 347 t2LDRSB_POST_t2LDRSB_PRE_t2LDRSH_POST_t2LDRSH_PRE
  { 1, 394, 400, 5297, 5301 }, // 348 LDRD
  { 1, 491, 495, 5301, 5304 }, // 349 t2LDRDi8
  { 1, 400, 407, 5304, 5308 }, // 350 LDRD_POST_LDRD_PRE_t2LDRD_POST_t2LDRD_PRE
  { -1, 369, 374, 5308, 5313 }, // 351 LDMDA_LDMDB_LDMIA_LDMIB_sysLDMDA_sysLDMDB_sysLDMIA_sysLDMIB_t2LDMDB_t2LDMIA_tLDMIA
  { -1, 374, 380, 5313, 5318 }, // 352 LDMDA_UPD_LDMDB_UPD_LDMIA_UPD_LDMIB_UPD_sysLDMDA_UPD_sysLDMDB_UPD_sysLDMIA_UPD_sysLDMIB_UPD_t2LDMDB_UPD_t2LDMIA_UPD_tLDMIA_UPD
  { -1, 369, 374, 5318, 5323 }, // 353 LDMIA_RET_t2LDMIA_RET
  { -1, 384, 388, 5323, 5326 }, // 354 tPOP
  { -1, 384, 388, 5326, 5329 }, // 355 tPOP_RET
  { 1, 388, 390, 5329, 5332 }, // 356 PICSTR_STRi12_tSTRr
  { 1, 388, 390, 5332, 5335 }, // 357 PICSTRB_PICSTRH_STRBi12_STRH_tSTRBr_tSTRHr
  { 1, 390, 394, 5335, 5338 }, // 358 STRBrs_t2STRBs_t2STRHs
  { 0, 0, 0, 0, 0 }, // 359 STREX_STREXB_STREXD_STREXH
  { 1, 390, 394, 5338, 5341 }, // 360 STRrs_t2STRs
  { 1, 388, 390, 5341, 5343 }, // 361 t2STRBi12_t2STRBi8_t2STRHi12_t2STRHi8_tSTRBi_tSTRHi
  { 1, 388, 390, 5343, 5345 }, // 362 t2STRi12_t2STRi8_tSTRi_tSTRspi
  { 1, 384, 388, 5345, 5349 }, // 363 STRBT_POST_IMM_STRBT_POST_REG_STRB_POST_REG_STRB_PRE_REG_STRHTi_STRHTr_STRH_POST_STRH_PRE
  { 1, 384, 388, 5349, 5352 }, // 364 STRB_POST_IMM_STRB_PRE_IMM_t2STRB_POST_t2STRB_PRE_t2STRH_POST
  { 1, 384, 388, 5352, 5356 }, // 365 STRBi_preidx_STRBr_preidx_STRH_preidx_STRT_POST_IMM_STRT_POST_REG_STR_POST_REG_STR_PRE_REG_STRi_preidx_STRr_preidx_t2STRB_preidx_t2STRH_preidx_t2STR_preidx
  { 1, 384, 388, 5356, 5359 }, // 366 STR_POST_IMM_STR_PRE_IMM_t2STRH_PRE_t2STR_POST_t2STR_PRE
  { 1, 388, 390, 5359, 5361 }, // 367 t2STRBT_t2STRHT
  { 1, 388, 390, 5361, 5363 }, // 368 t2STRT
  { 1, 444, 450, 5363, 5366 }, // 369 STRD_t2STRDi8
  { 1, 384, 388, 5366, 5370 }, // 370 STRD_POST_STRD_PRE_t2STRD_POST_t2STRD_PRE
  { -1, 435, 444, 0, 0 }, // 371 STMDA_STMDB_STMIA_STMIB_sysSTMDA_sysSTMDB_sysSTMIA_sysSTMIB_t2STMDB_t2STMIA
  { -1, 435, 444, 5370, 5371 }, // 372 STMDA_UPD_STMDB_UPD_STMIA_UPD_STMIB_UPD_sysSTMDA_UPD_sysSTMDB_UPD_sysSTMIA_UPD_sysSTMIB_UPD_t2STMDB_UPD_t2STMIA_UPD_tSTMIA_UPD
  { -1, 435, 444, 0, 0 }, // 373 tPUSH
  { 0, 0, 0, 0, 0 }, // 374 ITasm
  { 1, 362, 364, 0, 0 }, // 375 t2IT
  { 1, 367, 369, 5371, 5374 }, // 376 VADDLsv2i64_VADDLsv4i32_VADDLsv8i16_VADDLuv2i64_VADDLuv4i32_VADDLuv8i16_VNEGs16d_VNEGs32d_VNEGs8d_VPADDLsv16i8_VPADDLsv2i32_VPADDLsv4i16_VPADDLsv4i32_VPADDLsv8i16_VPADDLsv8i8_VPADDLuv16i8_VPADDLuv2i32_VPADDLuv4i16_VPADDLuv4i32_VPADDLuv8i16_VPADDLuv8i8_VPADDi16_VPADDi32_VPADDi8_VSHLLi16_VSHLLi32_VSHLLi8_VSHLLsv2i64_VSHLLsv4i32_VSHLLsv8i16_VSHLLuv2i64_VSHLLuv4i32_VSHLLuv8i16_VSHLiv16i8_VSHLiv1i64_VSHLiv2i32_VSHLiv2i64_VSHLiv4i16_VSHLiv4i32_VSHLiv8i16_VSHLiv8i8_VSHLsv1i64_VSHLsv2i32_VSHLsv4i16_VSHLsv8i8_VSHLuv1i64_VSHLuv2i32_VSHLuv4i16_VSHLuv8i8_VSHRsv16i8_VSHRsv1i64_VSHRsv2i32_VSHRsv2i64_VSHRsv4i16_VSHRsv4i32_VSHRsv8i16_VSHRsv8i8_VSHRuv16i8_VSHRuv1i64_VSHRuv2i32_VSHRuv2i64_VSHRuv4i16_VSHRuv4i32_VSHRuv8i16_VSHRuv8i8_VSLIv1i64_VSLIv2i32_VSLIv4i16_VSLIv8i8_VSRIv1i64_VSRIv2i32_VSRIv4i16_VSRIv8i8_VSUBLsv2i64_VSUBLsv4i32_VSUBLsv8i16_VSUBLuv2i64_VSUBLuv4i32_VSUBLuv8i16
  { 1, 367, 369, 5374, 5377 }, // 377 VADDWsv2i64_VADDWsv4i32_VADDWsv8i16_VADDWuv2i64_VADDWuv4i32_VADDWuv8i16_VSUBWsv2i64_VSUBWsv4i32_VSUBWsv8i16_VSUBWuv2i64_VSUBWuv4i32_VSUBWuv8i16_VSUBv1i64_VSUBv2i32_VSUBv4i16_VSUBv8i8
  { 1, 367, 369, 5377, 5380 }, // 378 VADDv16i8_VADDv2i64_VADDv4i32_VADDv8i16_VANDq_VBICq_VBIFq_VBITq_VEORq_VORNq_VORRq
  { 1, 367, 369, 5380, 5383 }, // 379 VADDv1i64_VADDv2i32_VADDv4i16_VADDv8i8_VANDd_VBICd_VBIFd_VBITd_VEORd_VORNd_VORRd
  { 1, 367, 369, 5383, 5384 }, // 380 VBICiv2i32_VBICiv4i16_VBICiv4i32_VBICiv8i16_VORRiv2i32_VORRiv4i16_VORRiv4i32_VORRiv8i16
  { 1, 367, 369, 5384, 5387 }, // 381 VBSLd_VCLSv2i32_VCLSv4i16_VCLSv8i8_VCLZv2i32_VCLZv4i16_VCLZv8i8_VCNTd
  { 1, 367, 369, 5387, 5390 }, // 382 VBSLq_VCLSv16i8_VCLSv4i32_VCLSv8i16_VCLZv16i8_VCLZv4i32_VCLZv8i16_VCNTq
  { 1, 367, 369, 5390, 5393 }, // 383 VHADDsv16i8_VHADDsv4i32_VHADDsv8i16_VHADDuv16i8_VHADDuv4i32_VHADDuv8i16_VRHADDsv16i8_VRHADDsv4i32_VRHADDsv8i16_VRHADDuv16i8_VRHADDuv4i32_VRHADDuv8i16_VTSTv16i8_VTSTv4i32_VTSTv8i16
  { 1, 367, 369, 5393, 5396 }, // 384 VHADDsv2i32_VHADDsv4i16_VHADDsv8i8_VHADDuv2i32_VHADDuv4i16_VHADDuv8i8_VRHADDsv2i32_VRHADDsv4i16_VRHADDsv8i8_VRHADDuv2i32_VRHADDuv4i16_VRHADDuv8i8_VTSTv2i32_VTSTv4i16_VTSTv8i8
  { 1, 367, 369, 5396, 5399 }, // 385 VHSUBsv16i8_VHSUBsv4i32_VHSUBsv8i16_VHSUBuv16i8_VHSUBuv4i32_VHSUBuv8i16
  { 1, 367, 369, 5399, 5402 }, // 386 VHSUBsv2i32_VHSUBsv4i16_VHSUBsv8i8_VHSUBuv2i32_VHSUBuv4i16_VHSUBuv8i8
  { 1, 367, 369, 5402, 5404 }, // 387 VNEGf32q
  { 1, 367, 369, 5404, 5406 }, // 388 VNEGfd
  { 1, 367, 369, 5406, 5409 }, // 389 VNEGs16q_VNEGs32q_VNEGs8q_VSHLsv16i8_VSHLsv2i64_VSHLsv4i32_VSHLsv8i16_VSHLuv16i8_VSHLuv2i64_VSHLuv4i32_VSHLuv8i16_VSLIv16i8_VSLIv2i64_VSLIv4i32_VSLIv8i16_VSRIv16i8_VSRIv2i64_VSRIv4i32_VSRIv8i16
  { 1, 367, 369, 5409, 5412 }, // 390 VQSHLsiv16i8_VQSHLsiv1i64_VQSHLsiv2i32_VQSHLsiv2i64_VQSHLsiv4i16_VQSHLsiv4i32_VQSHLsiv8i16_VQSHLsiv8i8_VQSHLsuv16i8_VQSHLsuv1i64_VQSHLsuv2i32_VQSHLsuv2i64_VQSHLsuv4i16_VQSHLsuv4i32_VQSHLsuv8i16_VQSHLsuv8i8_VQSHLsv1i64_VQSHLsv2i32_VQSHLsv4i16_VQSHLsv8i8_VQSHLuiv16i8_VQSHLuiv1i64_VQSHLuiv2i32_VQSHLuiv2i64_VQSHLuiv4i16_VQSHLuiv4i32_VQSHLuiv8i16_VQSHLuiv8i8_VQSHLuv1i64_VQSHLuv2i32_VQSHLuv4i16_VQSHLuv8i8
  { 1, 367, 369, 5412, 5415 }, // 391 VQSHLsv16i8_VQSHLsv2i64_VQSHLsv4i32_VQSHLsv8i16_VQSHLuv16i8_VQSHLuv2i64_VQSHLuv4i32_VQSHLuv8i16
  { 1, 367, 369, 5415, 5418 }, // 392 VSUBv16i8_VSUBv2i64_VSUBv4i32_VSUBv8i16
  { 1, 454, 456, 5418, 5421 }, // 393 VEXTd16_VEXTd32_VEXTd8
  { 1, 454, 456, 5421, 5424 }, // 394 VEXTq16_VEXTq32_VEXTq64_VEXTq8
  { 1, 454, 456, 5424, 5426 }, // 395 VREV16d8_VREV32d16_VREV32d8_VREV64d16_VREV64d32_VREV64d8
  { 1, 454, 456, 5426, 5428 }, // 396 VREV16q8_VREV32q16_VREV32q8_VREV64q16_VREV64q32_VREV64q8
  { 1, 367, 369, 5428, 5432 }, // 397 VABALsv2i64_VABALsv4i32_VABALsv8i16_VABALuv2i64_VABALuv4i32_VABALuv8i16_VABAsv2i32_VABAsv4i16_VABAsv8i8_VABAuv2i32_VABAuv4i16_VABAuv8i8
  { 1, 367, 369, 5432, 5436 }, // 398 VABAsv16i8_VABAsv4i32_VABAsv8i16_VABAuv16i8_VABAuv4i32_VABAuv8i16
  { 1, 367, 369, 5436, 5438 }, // 399 VABSfd
  { 1, 367, 369, 5438, 5440 }, // 400 VABSfq
  { 1, 367, 369, 5440, 5442 }, // 401 VABSv16i8_VABSv4i32_VABSv8i16
  { 1, 367, 369, 5442, 5444 }, // 402 VABSv2i32_VABSv4i16_VABSv8i8
  { 1, 367, 369, 5444, 5447 }, // 403 VACGEd_VACGTd_VCEQfd_VCGEfd_VCGTfd
  { 1, 367, 369, 5447, 5450 }, // 404 VACGEq_VACGTq_VCEQfq_VCGEfq_VCGTfq
  { 1, 367, 369, 5450, 5453 }, // 405 VCEQv16i8_VCEQv4i32_VCEQv8i16_VCGEsv16i8_VCGEsv4i32_VCGEsv8i16_VCGEuv16i8_VCGEuv4i32_VCGEuv8i16_VCGTsv16i8_VCGTsv4i32_VCGTsv8i16_VCGTuv16i8_VCGTuv4i32_VCGTuv8i16_VQSUBsv16i8_VQSUBsv2i64_VQSUBsv4i32_VQSUBsv8i16_VQSUBuv16i8_VQSUBuv2i64_VQSUBuv4i32_VQSUBuv8i16
  { 1, 367, 369, 5453, 5456 }, // 406 VCEQv2i32_VCEQv4i16_VCEQv8i8_VCGEsv2i32_VCGEsv4i16_VCGEsv8i8_VCGEuv2i32_VCGEuv4i16_VCGEuv8i8_VCGTsv2i32_VCGTsv4i16_VCGTsv8i8_VCGTuv2i32_VCGTuv4i16_VCGTuv8i8_VQSUBsv1i64_VQSUBsv2i32_VQSUBsv4i16_VQSUBsv8i8_VQSUBuv1i64_VQSUBuv2i32_VQSUBuv4i16_VQSUBuv8i8
  { 0, 0, 0, 0, 0 }, // 407 VCEQzv16i8_VCEQzv2f32_VCEQzv2i32_VCEQzv4f32_VCEQzv4i16_VCEQzv4i32_VCEQzv8i16_VCEQzv8i8_VCGEzv16i8_VCGEzv2f32_VCGEzv2i32_VCGEzv4f32_VCGEzv4i16_VCGEzv4i32_VCGEzv8i16_VCGEzv8i8_VCGTzv16i8_VCGTzv2f32_VCGTzv2i32_VCGTzv4f32_VCGTzv4i16_VCGTzv4i32_VCGTzv8i16_VCGTzv8i8_VCLEzv16i8_VCLEzv2f32_VCLEzv2i32_VCLEzv4f32_VCLEzv4i16_VCLEzv4i32_VCLEzv8i16_VCLEzv8i8_VCLTzv16i8_VCLTzv2f32_VCLTzv2i32_VCLTzv4f32_VCLTzv4i16_VCLTzv4i32_VCLTzv8i16_VCLTzv8i8
  { 1, 367, 369, 5456, 5459 }, // 408 VPADALsv16i8_VPADALsv4i32_VPADALsv8i16_VPADALuv16i8_VPADALuv4i32_VPADALuv8i16
  { 1, 367, 369, 5459, 5462 }, // 409 VPADALsv2i32_VPADALsv4i16_VPADALsv8i8_VPADALuv2i32_VPADALuv4i16_VPADALuv8i8_VRSRAsv16i8_VRSRAsv1i64_VRSRAsv2i32_VRSRAsv2i64_VRSRAsv4i16_VRSRAsv4i32_VRSRAsv8i16_VRSRAsv8i8_VRSRAuv16i8_VRSRAuv1i64_VRSRAuv2i32_VRSRAuv2i64_VRSRAuv4i16_VRSRAuv4i32_VRSRAuv8i16_VRSRAuv8i8_VSRAsv16i8_VSRAsv1i64_VSRAsv2i32_VSRAsv2i64_VSRAsv4i16_VSRAsv4i32_VSRAsv8i16_VSRAsv8i8_VSRAuv16i8_VSRAuv1i64_VSRAuv2i32_VSRAuv2i64_VSRAuv4i16_VSRAuv4i32_VSRAuv8i16_VSRAuv8i8
  { 1, 367, 369, 5462, 5464 }, // 410 VQABSv16i8_VQABSv4i32_VQABSv8i16_VQNEGv16i8_VQNEGv4i32_VQNEGv8i16
  { 1, 367, 369, 5464, 5466 }, // 411 VQABSv2i32_VQABSv4i16_VQABSv8i8_VQNEGv2i32_VQNEGv4i16_VQNEGv8i8
  { 1, 367, 369, 5466, 5469 }, // 412 VQADDsv16i8_VQADDsv2i64_VQADDsv4i32_VQADDsv8i16_VQADDuv16i8_VQADDuv2i64_VQADDuv4i32_VQADDuv8i16
  { 1, 367, 369, 5469, 5472 }, // 413 VQADDsv1i64_VQADDsv2i32_VQADDsv4i16_VQADDsv8i8_VQADDuv1i64_VQADDuv2i32_VQADDuv4i16_VQADDuv8i8
  { 1, 367, 369, 5472, 5475 }, // 414 VQRSHLsv16i8_VQRSHLsv2i64_VQRSHLsv4i32_VQRSHLsv8i16_VQRSHLuv16i8_VQRSHLuv2i64_VQRSHLuv4i32_VQRSHLuv8i16_VRSHLsv16i8_VRSHLsv2i64_VRSHLsv4i32_VRSHLsv8i16_VRSHLuv16i8_VRSHLuv2i64_VRSHLuv4i32_VRSHLuv8i16
  { 1, 367, 369, 5475, 5478 }, // 415 VQRSHLsv1i64_VQRSHLsv2i32_VQRSHLsv4i16_VQRSHLsv8i8_VQRSHLuv1i64_VQRSHLuv2i32_VQRSHLuv4i16_VQRSHLuv8i8_VRSHLsv1i64_VRSHLsv2i32_VRSHLsv4i16_VRSHLsv8i8_VRSHLuv1i64_VRSHLuv2i32_VRSHLuv4i16_VRSHLuv8i8_VRSHRsv16i8_VRSHRsv1i64_VRSHRsv2i32_VRSHRsv2i64_VRSHRsv4i16_VRSHRsv4i32_VRSHRsv8i16_VRSHRsv8i8_VRSHRuv16i8_VRSHRuv1i64_VRSHRuv2i32_VRSHRuv2i64_VRSHRuv4i16_VRSHRuv4i32_VRSHRuv8i16_VRSHRuv8i8
  { 1, 367, 369, 5478, 5480 }, // 416 VRECPEd_VRECPEfd_VRSQRTEd_VRSQRTEfd
  { 1, 367, 369, 5480, 5482 }, // 417 VRECPEfq_VRECPEq_VRSQRTEfq_VRSQRTEq
  { 1, 367, 369, 5482, 5485 }, // 418 VADDHNv2i32_VADDHNv4i16_VADDHNv8i8_VSUBHNv2i32_VSUBHNv4i16_VSUBHNv8i8
  { 1, 367, 369, 5485, 5488 }, // 419 VSHRNv2i32_VSHRNv4i16_VSHRNv8i8
  { 1, 367, 369, 5488, 5491 }, // 420 VQRSHRNsv2i32_VQRSHRNsv4i16_VQRSHRNsv8i8_VQRSHRNuv2i32_VQRSHRNuv4i16_VQRSHRNuv8i8_VQRSHRUNv2i32_VQRSHRUNv4i16_VQRSHRUNv8i8_VQSHRNsv2i32_VQSHRNsv4i16_VQSHRNsv8i8_VQSHRNuv2i32_VQSHRNuv4i16_VQSHRNuv8i8_VQSHRUNv2i32_VQSHRUNv4i16_VQSHRUNv8i8_VRSHRNv2i32_VRSHRNv4i16_VRSHRNv8i8
  { 1, 367, 369, 5491, 5494 }, // 421 VRADDHNv2i32_VRADDHNv4i16_VRADDHNv8i8_VRSUBHNv2i32_VRSUBHNv4i16_VRSUBHNv8i8
  { 1, 454, 456, 5494, 5497 }, // 422 VTBL1
  { 1, 454, 456, 5497, 5500 }, // 423 VTBX1
  { 1, 474, 478, 5500, 5504 }, // 424 VTBL2
  { 1, 474, 478, 5504, 5508 }, // 425 VTBX2
  { 1, 478, 484, 5508, 5513 }, // 426 VTBL3_VTBL3Pseudo
  { 1, 478, 484, 5513, 5518 }, // 427 VTBX3_VTBX3Pseudo
  { 1, 484, 491, 5518, 5524 }, // 428 VTBL4_VTBL4Pseudo
  { 1, 484, 491, 5524, 5530 }, // 429 VTBX4_VTBX4Pseudo
  { 0, 0, 0, 0, 0 }, // 430 VSWPd_VSWPq
  { 1, 478, 484, 5530, 5534 }, // 431 VTRNd16_VTRNd32_VTRNd8_VUZPd16_VUZPd8_VZIPd16_VZIPd8
  { 1, 478, 484, 5534, 5538 }, // 432 VTRNq16_VTRNq32_VTRNq8
  { 1, 478, 484, 5538, 5542 }, // 433 VUZPq16_VUZPq32_VUZPq8_VZIPq16_VZIPq32_VZIPq8
  { 1, 367, 369, 5542, 5544 }, // 434 VABSD_VNEGD
  { 1, 367, 369, 5544, 5546 }, // 435 VABSS_VNEGS
  { 1, 367, 369, 5546, 5548 }, // 436 VCMPD_VCMPED_VCMPEZD_VCMPZD
  { 1, 367, 369, 5548, 5550 }, // 437 VCMPES_VCMPEZS_VCMPS_VCMPZS
  { 1, 367, 369, 5550, 5553 }, // 438 VABDLsv2i64_VABDLsv4i32_VABDLsv8i16_VABDLuv2i64_VABDLuv4i32_VABDLuv8i16_VABDsv16i8_VABDsv4i32_VABDsv8i16_VABDuv16i8_VABDuv4i32_VABDuv8i16_VMAXsv16i8_VMAXsv4i32_VMAXsv8i16_VMAXuv16i8_VMAXuv4i32_VMAXuv8i16_VMINsv16i8_VMINsv4i32_VMINsv8i16_VMINuv16i8_VMINuv4i32_VMINuv8i16
  { 1, 367, 369, 5553, 5556 }, // 439 VABDfd_VADDfd_VMAXfd_VMINfd_VSUBfd
  { 1, 367, 369, 5556, 5559 }, // 440 VABDfq_VADDfq_VMAXfq_VMINfq_VSUBfq
  { 1, 367, 369, 5559, 5562 }, // 441 VABDsv2i32_VABDsv4i16_VABDsv8i8_VABDuv2i32_VABDuv4i16_VABDuv8i8_VMAXsv2i32_VMAXsv4i16_VMAXsv8i8_VMAXuv2i32_VMAXuv4i16_VMAXuv8i8_VMINsv2i32_VMINsv4i16_VMINsv8i8_VMINuv2i32_VMINuv4i16_VMINuv8i8_VPMAXs16_VPMAXs32_VPMAXs8_VPMAXu16_VPMAXu32_VPMAXu8_VPMINs16_VPMINs32_VPMINs8_VPMINu16_VPMINu32_VPMINu8
  { 1, 367, 369, 5562, 5565 }, // 442 VADDS_VSUBS
  { 0, 0, 0, 0, 0 }, // 443 VMAXNMD_VMAXNMND_VMAXNMNQ_VMAXNMS_VMINNMD_VMINNMND_VMINNMNQ_VMINNMS
  { 1, 367, 369, 5565, 5568 }, // 444 VPADDf_VPMAXf_VPMINf
  { 1, 367, 369, 5568, 5571 }, // 445 VADDD_VSUBD
  { 1, 454, 456, 5571, 5574 }, // 446 VRECPSfd_VRSQRTSfd
  { 1, 454, 456, 5574, 5577 }, // 447 VRECPSfq_VRSQRTSfq
  { 1, 454, 456, 5577, 5580 }, // 448 VMULLp_VMULLslsv2i32_VMULLslsv4i16_VMULLsluv2i32_VMULLsluv4i16_VMULLsv4i32_VMULLsv8i16_VMULLuv4i32_VMULLuv8i16_VMULpd_VMULslv4i16_VMULv4i16_VMULv8i8_VQDMULHslv4i16_VQDMULHv4i16_VQDMULLslv2i32_VQDMULLslv4i16_VQDMULLv4i32_VQRDMULHslv4i16_VQRDMULHv4i16
  { 1, 454, 456, 5580, 5583 }, // 449 VMULLsv2i64_VMULLuv2i64_VMULslv2i32_VMULv2i32_VQDMULHslv2i32_VQDMULHv2i32_VQDMULLv2i64_VQRDMULHslv2i32_VQRDMULHv2i32
  { 1, 454, 456, 5583, 5586 }, // 450 VMULS_VNMULS
  { 1, 454, 456, 5586, 5589 }, // 451 VMULfd
  { 1, 454, 456, 5589, 5592 }, // 452 VMULfq
  { 1, 454, 456, 5592, 5595 }, // 453 VMULpq_VMULslv8i16_VMULv16i8_VMULv8i16_VQDMULHslv8i16_VQDMULHv8i16_VQRDMULHslv8i16_VQRDMULHv8i16
  { 1, 367, 369, 5595, 5598 }, // 454 VMULslfd
  { 1, 367, 369, 5598, 5601 }, // 455 VMULslfq
  { 1, 454, 456, 5601, 5604 }, // 456 VMULslv4i32_VMULv4i32_VQDMULHslv4i32_VQDMULHv4i32_VQRDMULHslv4i32_VQRDMULHv4i32
  { 1, 454, 456, 5604, 5607 }, // 457 VMULD_VNMULD
  { 1, 454, 456, 5607, 5610 }, // 458 VFMAD_VFMSD_VFNMAD_VFNMSD
  { 1, 454, 456, 5610, 5613 }, // 459 VFMAS_VFMSS_VFNMAS_VFNMSS
  { 1, 454, 456, 5613, 5616 }, // 460 VMLAD_VMLSD_VNMLAD_VNMLSD
  { 1, 454, 456, 5616, 5620 }, // 461 VMLALslsv2i32_VMLALsluv2i32_VMLALsv2i64_VMLALuv2i64_VMLAslv2i32_VMLAv2i32_VMLSLslsv2i32_VMLSLsluv2i32_VMLSLsv2i64_VMLSLuv2i64_VMLSslv2i32_VMLSv2i32_VQDMLALslv2i32_VQDMLALv2i64_VQDMLSLslv2i32_VQDMLSLv2i64
  { 1, 454, 456, 5620, 5624 }, // 462 VMLALslsv4i16_VMLALsluv4i16_VMLALsv4i32_VMLALsv8i16_VMLALuv4i32_VMLALuv8i16_VMLAslv4i16_VMLAv4i16_VMLAv8i8_VMLSLslsv4i16_VMLSLsluv4i16_VMLSLsv4i32_VMLSLsv8i16_VMLSLuv4i32_VMLSLuv8i16_VMLSslv4i16_VMLSv4i16_VMLSv8i8_VQDMLALslv4i16_VQDMLALv4i32_VQDMLSLslv4i16_VQDMLSLv4i32
  { 1, 454, 456, 5624, 5627 }, // 463 VMLAS_VMLSS_VNMLAS_VNMLSS
  { 1, 454, 456, 5627, 5630 }, // 464 VMLAfd_VMLAslfd_VMLSfd_VMLSslfd
  { 1, 454, 456, 5630, 5633 }, // 465 VMLAfq_VMLAslfq_VMLSfq_VMLSslfq
  { 1, 454, 456, 5633, 5637 }, // 466 VMLAslv4i32_VMLAv4i32_VMLSslv4i32_VMLSv4i32
  { 1, 454, 456, 5637, 5641 }, // 467 VMLAslv8i16_VMLAv16i8_VMLAv8i16_VMLSslv8i16_VMLSv16i8_VMLSv8i16
  { 1, 454, 456, 5641, 5644 }, // 468 VFMAfd_VFMSfd
  { 1, 454, 456, 5644, 5647 }, // 469 VFMAfq_VFMSfq
  { 0, 0, 0, 0, 0 }, // 470 VCVTANSD_VCVTANSQ_VCVTANUD_VCVTANUQ_VCVTASD_VCVTASS_VCVTAUD_VCVTAUS_VCVTBDH_VCVTBHD_VCVTMNSD_VCVTMNSQ_VCVTMNUD_VCVTMNUQ_VCVTMSD_VCVTMSS_VCVTMUD_VCVTMUS_VCVTNNSD_VCVTNNSQ_VCVTNNUD_VCVTNNUQ_VCVTNSD_VCVTNSS_VCVTNUD_VCVTNUS_VCVTPNSD_VCVTPNSQ_VCVTPNUD_VCVTPNUQ_VCVTPSD_VCVTPSS_VCVTPUD_VCVTPUS_VCVTTDH_VCVTTHD
  { 1, 450, 454, 5647, 5649 }, // 471 VCVTBHS_VCVTTHS
  { 1, 454, 456, 5649, 5651 }, // 472 VCVTBSH_VCVTTSH
  { 1, 454, 456, 5651, 5653 }, // 473 VCVTDS
  { 1, 454, 456, 5653, 5655 }, // 474 VCVTSD
  { 1, 367, 369, 5655, 5657 }, // 475 VCVTf2h_VCVTf2sq_VCVTf2uq_VCVTf2xsq_VCVTf2xuq_VCVTh2f_VCVTs2fq_VCVTu2fq_VCVTxs2fq_VCVTxu2fq
  { 1, 367, 369, 5657, 5659 }, // 476 VCVTf2sd_VCVTf2ud_VCVTf2xsd_VCVTf2xud_VCVTs2fd_VCVTu2fd_VCVTxs2fd_VCVTxu2fd
  { 1, 454, 456, 5659, 5661 }, // 477 VSITOD_VUITOD
  { 1, 454, 456, 5661, 5663 }, // 478 VSITOS_VUITOS
  { 1, 454, 456, 5663, 5665 }, // 479 VTOSHD_VTOSLD_VTOUHD_VTOULD
  { 1, 454, 456, 5665, 5667 }, // 480 VTOSHS_VTOSLS_VTOUHS_VTOULS
  { 1, 454, 456, 5667, 5669 }, // 481 VTOSIRD_VTOSIZD_VTOUIRD_VTOUIZD
  { 1, 454, 456, 5669, 5671 }, // 482 VTOSIRS_VTOSIZS_VTOUIRS_VTOUIZS
  { 1, 367, 369, 5671, 5673 }, // 483 FCONSTD_VMOVD_VMOVDcc
  { 1, 367, 369, 5673, 5675 }, // 484 FCONSTS_VMOVS_VMOVScc
  { 1, 367, 369, 5675, 5676 }, // 485 VMOVv16i8_VMOVv1i64_VMOVv2f32_VMOVv2i32_VMOVv2i64_VMOVv4f32_VMOVv4i16_VMOVv4i32_VMOVv8i16_VMOVv8i8_VMVNv2i32_VMVNv4i16_VMVNv4i32_VMVNv8i16
  { 1, 367, 369, 5676, 5679 }, // 486 VMVNd_VMVNq
  { 1, 367, 369, 5679, 5681 }, // 487 VMOVLsv2i64_VMOVLsv4i32_VMOVLsv8i16_VMOVLuv2i64_VMOVLuv4i32_VMOVLuv8i16
  { 1, 454, 456, 5681, 5683 }, // 488 VMOVNv2i32_VMOVNv4i16_VMOVNv8i8
  { 1, 367, 369, 5683, 5685 }, // 489 VQMOVNsuv2i32_VQMOVNsuv4i16_VQMOVNsuv8i8_VQMOVNsv2i32_VQMOVNsv4i16_VQMOVNsv8i8_VQMOVNuv2i32_VQMOVNuv4i16_VQMOVNuv8i8
  { 1, 454, 456, 5685, 5687 }, // 490 VDUPLN16d_VDUPLN32d_VDUPLN8d_VDUPfdf_VDUPfqf
  { 1, 454, 456, 5687, 5689 }, // 491 VDUPLN16q_VDUPLN32q_VDUPLN8q
  { 1, 462, 466, 5689, 5691 }, // 492 VDUP16d_VDUP16q_VDUP32d_VDUP32q_VDUP8d_VDUP8q
  { 1, 388, 390, 5691, 5693 }, // 493 VMOVRS
  { 1, 462, 466, 5693, 5695 }, // 494 VMOVSR
  { 1, 462, 466, 5695, 5697 }, // 495 VSETLNi16_VSETLNi32_VSETLNi8
  { 1, 470, 474, 5697, 5700 }, // 496 VMOVRRD_VMOVRRS
  { 1, 388, 390, 5700, 5702 }, // 497 VMOVDRR
  { 1, 388, 390, 5702, 5704 }, // 498 VMOVSRR
  { 1, 388, 390, 5704, 5706 }, // 499 VGETLNi32_VGETLNu16_VGETLNu8
  { 1, 388, 390, 5706, 5708 }, // 500 VGETLNs16_VGETLNs8
  { 1, 362, 364, 5708, 5709 }, // 501 VMRS_VMRS_FPEXC_VMRS_FPINST_VMRS_FPINST2_VMRS_FPSID_VMRS_MVFR0_VMRS_MVFR1
  { 1, 362, 364, 5709, 5710 }, // 502 VMSR_VMSR_FPEXC_VMSR_FPINST_VMSR_FPINST2_VMSR_FPSID
  { 1, 362, 364, 5710, 5711 }, // 503 FMSTAT
  { 1, 388, 390, 5711, 5713 }, // 504 VLDRD
  { 1, 388, 390, 5713, 5715 }, // 505 VLDRS
  { 1, 388, 390, 5715, 5717 }, // 506 VSTRD
  { 1, 388, 390, 5717, 5719 }, // 507 VSTRS
  { -1, 388, 390, 5719, 5723 }, // 508 VLDMQIA
  { -1, 388, 390, 5723, 5726 }, // 509 VSTMQIA
  { -1, 388, 390, 5726, 5730 }, // 510 VLDMDIA_VLDMSIA
  { -1, 466, 470, 5730, 5735 }, // 511 VLDMDDB_UPD_VLDMDIA_UPD_VLDMSDB_UPD_VLDMSIA_UPD
  { -1, 388, 390, 5735, 5739 }, // 512 VSTMDIA_VSTMSIA
  { -1, 466, 470, 5739, 5744 }, // 513 VSTMDDB_UPD_VSTMDIA_UPD_VSTMSDB_UPD_VSTMSIA_UPD
  { 0, 0, 0, 0, 0 }, // 514 VLD1d16_VLD1d32_VLD1d64_VLD1d8
  { 0, 0, 0, 0, 0 }, // 515 VLD1q16_VLD1q32_VLD1q64_VLD1q8
  { 0, 0, 0, 0, 0 }, // 516 VLD1d16wb_fixed_VLD1d16wb_register_VLD1d32wb_fixed_VLD1d32wb_register_VLD1d64wb_fixed_VLD1d64wb_register_VLD1d8wb_fixed_VLD1d8wb_register
  { 0, 0, 0, 0, 0 }, // 517 VLD1q16wb_fixed_VLD1q16wb_register_VLD1q32wb_fixed_VLD1q32wb_register_VLD1q64wb_fixed_VLD1q64wb_register_VLD1q8wb_fixed_VLD1q8wb_register
  { 0, 0, 0, 0, 0 }, // 518 VLD1d16T_VLD1d32T_VLD1d64T_VLD1d64TPseudo_VLD1d8T
  { 0, 0, 0, 0, 0 }, // 519 VLD1d16Twb_fixed_VLD1d16Twb_register_VLD1d32Twb_fixed_VLD1d32Twb_register_VLD1d64Twb_fixed_VLD1d64Twb_register_VLD1d8Twb_fixed_VLD1d8Twb_register
  { 0, 0, 0, 0, 0 }, // 520 VLD1d16Q_VLD1d32Q_VLD1d64Q_VLD1d64QPseudo_VLD1d8Q
  { 0, 0, 0, 0, 0 }, // 521 VLD1d16Qwb_fixed_VLD1d16Qwb_register_VLD1d32Qwb_fixed_VLD1d32Qwb_register_VLD1d64Qwb_fixed_VLD1d64Qwb_register_VLD1d8Qwb_fixed_VLD1d8Qwb_register
  { 0, 0, 0, 0, 0 }, // 522 VLD2b16_VLD2b32_VLD2b8_VLD2d16_VLD2d32_VLD2d8
  { 0, 0, 0, 0, 0 }, // 523 VLD2q16_VLD2q16Pseudo_VLD2q32_VLD2q32Pseudo_VLD2q8_VLD2q8Pseudo
  { 0, 0, 0, 0, 0 }, // 524 VLD2b16wb_fixed_VLD2b16wb_register_VLD2b32wb_fixed_VLD2b32wb_register_VLD2b8wb_fixed_VLD2b8wb_register_VLD2d16wb_fixed_VLD2d16wb_register_VLD2d32wb_fixed_VLD2d32wb_register_VLD2d8wb_fixed_VLD2d8wb_register
  { 0, 0, 0, 0, 0 }, // 525 VLD2q16PseudoWB_fixed_VLD2q16PseudoWB_register_VLD2q16wb_fixed_VLD2q16wb_register_VLD2q32PseudoWB_fixed_VLD2q32PseudoWB_register_VLD2q32wb_fixed_VLD2q32wb_register_VLD2q8PseudoWB_fixed_VLD2q8PseudoWB_register_VLD2q8wb_fixed_VLD2q8wb_register
  { 0, 0, 0, 0, 0 }, // 526 VLD3d16_VLD3d32_VLD3d8_VLD3q16_VLD3q32_VLD3q8
  { 0, 0, 0, 0, 0 }, // 527 VLD3d16Pseudo_VLD3d32Pseudo_VLD3d8Pseudo_VLD3q16oddPseudo_VLD3q32oddPseudo_VLD3q8oddPseudo
  { 0, 0, 0, 0, 0 }, // 528 VLD3d16_UPD_VLD3d32_UPD_VLD3d8_UPD_VLD3q16_UPD_VLD3q32_UPD_VLD3q8_UPD
  { 0, 0, 0, 0, 0 }, // 529 VLD3d16Pseudo_UPD_VLD3d32Pseudo_UPD_VLD3d8Pseudo_UPD_VLD3q16Pseudo_UPD_VLD3q16oddPseudo_UPD_VLD3q32Pseudo_UPD_VLD3q32oddPseudo_UPD_VLD3q8Pseudo_UPD_VLD3q8oddPseudo_UPD
  { 0, 0, 0, 0, 0 }, // 530 VLD4d16_VLD4d32_VLD4d8_VLD4q16_VLD4q32_VLD4q8
  { 0, 0, 0, 0, 0 }, // 531 VLD4d16Pseudo_VLD4d32Pseudo_VLD4d8Pseudo_VLD4q16oddPseudo_VLD4q32oddPseudo_VLD4q8oddPseudo
  { 0, 0, 0, 0, 0 }, // 532 VLD4d16_UPD_VLD4d32_UPD_VLD4d8_UPD_VLD4q16_UPD_VLD4q32_UPD_VLD4q8_UPD
  { 0, 0, 0, 0, 0 }, // 533 VLD4d16Pseudo_UPD_VLD4d32Pseudo_UPD_VLD4d8Pseudo_UPD_VLD4q16Pseudo_UPD_VLD4q16oddPseudo_UPD_VLD4q32Pseudo_UPD_VLD4q32oddPseudo_UPD_VLD4q8Pseudo_UPD_VLD4q8oddPseudo_UPD
  { 0, 0, 0, 0, 0 }, // 534 VLD1DUPd16_VLD1DUPd32_VLD1DUPd8_VLD1DUPq16_VLD1DUPq32_VLD1DUPq8
  { 0, 0, 0, 0, 0 }, // 535 VLD1LNd16_VLD1LNd32_VLD1LNd8_VLD1LNq16Pseudo_VLD1LNq32Pseudo_VLD1LNq8Pseudo
  { 0, 0, 0, 0, 0 }, // 536 VLD1DUPd16wb_fixed_VLD1DUPd16wb_register_VLD1DUPd32wb_fixed_VLD1DUPd32wb_register_VLD1DUPd8wb_fixed_VLD1DUPd8wb_register_VLD1DUPq16wb_fixed_VLD1DUPq16wb_register_VLD1DUPq32wb_fixed_VLD1DUPq32wb_register_VLD1DUPq8wb_fixed_VLD1DUPq8wb_register
  { 0, 0, 0, 0, 0 }, // 537 VLD1LNd16_UPD_VLD1LNd32_UPD_VLD1LNd8_UPD_VLD1LNq16Pseudo_UPD_VLD1LNq32Pseudo_UPD_VLD1LNq8Pseudo_UPD
  { 0, 0, 0, 0, 0 }, // 538 VLD2DUPd16_VLD2DUPd16x2_VLD2DUPd32_VLD2DUPd32x2_VLD2DUPd8_VLD2DUPd8x2
  { 0, 0, 0, 0, 0 }, // 539 VLD2LNd16_VLD2LNd16Pseudo_VLD2LNd32_VLD2LNd32Pseudo_VLD2LNd8_VLD2LNd8Pseudo_VLD2LNq16_VLD2LNq16Pseudo_VLD2LNq32_VLD2LNq32Pseudo
  { 0, 0, 0, 0, 0 }, // 540 VLD2LNd16_UPD_VLD2LNd32_UPD_VLD2LNd8_UPD_VLD2LNq16_UPD_VLD2LNq32_UPD
  { 0, 0, 0, 0, 0 }, // 541 VLD2DUPd16wb_fixed_VLD2DUPd16wb_register_VLD2DUPd16x2wb_fixed_VLD2DUPd16x2wb_register_VLD2DUPd32wb_fixed_VLD2DUPd32wb_register_VLD2DUPd32x2wb_fixed_VLD2DUPd32x2wb_register_VLD2DUPd8wb_fixed_VLD2DUPd8wb_register_VLD2DUPd8x2wb_fixed_VLD2DUPd8x2wb_register
  { 0, 0, 0, 0, 0 }, // 542 VLD2LNd16Pseudo_UPD_VLD2LNd32Pseudo_UPD_VLD2LNd8Pseudo_UPD_VLD2LNq16Pseudo_UPD_VLD2LNq32Pseudo_UPD
  { 0, 0, 0, 0, 0 }, // 543 VLD3DUPd16_VLD3DUPd16Pseudo_VLD3DUPd32_VLD3DUPd32Pseudo_VLD3DUPd8_VLD3DUPd8Pseudo_VLD3DUPq16_VLD3DUPq32_VLD3DUPq8
  { 0, 0, 0, 0, 0 }, // 544 VLD3LNd16_VLD3LNd16Pseudo_VLD3LNd32_VLD3LNd32Pseudo_VLD3LNd8_VLD3LNd8Pseudo_VLD3LNq16_VLD3LNq16Pseudo_VLD3LNq32_VLD3LNq32Pseudo
  { 0, 0, 0, 0, 0 }, // 545 VLD3DUPd16_UPD_VLD3DUPd32_UPD_VLD3DUPd8_UPD_VLD3DUPq16_UPD_VLD3DUPq32_UPD_VLD3DUPq8_UPD
  { 0, 0, 0, 0, 0 }, // 546 VLD3LNd16_UPD_VLD3LNd32_UPD_VLD3LNd8_UPD_VLD3LNq16_UPD_VLD3LNq32_UPD
  { 0, 0, 0, 0, 0 }, // 547 VLD3DUPd16Pseudo_UPD_VLD3DUPd32Pseudo_UPD_VLD3DUPd8Pseudo_UPD
  { 0, 0, 0, 0, 0 }, // 548 VLD3LNd16Pseudo_UPD_VLD3LNd32Pseudo_UPD_VLD3LNd8Pseudo_UPD_VLD3LNq16Pseudo_UPD_VLD3LNq32Pseudo_UPD
  { 0, 0, 0, 0, 0 }, // 549 VLD4DUPd16_VLD4DUPd16Pseudo_VLD4DUPd32_VLD4DUPd32Pseudo_VLD4DUPd8_VLD4DUPd8Pseudo_VLD4DUPq16_VLD4DUPq32_VLD4DUPq8
  { 0, 0, 0, 0, 0 }, // 550 VLD4LNd16_VLD4LNd16Pseudo_VLD4LNd32_VLD4LNd32Pseudo_VLD4LNd8_VLD4LNd8Pseudo_VLD4LNq16_VLD4LNq16Pseudo_VLD4LNq32_VLD4LNq32Pseudo
  { 0, 0, 0, 0, 0 }, // 551 VLD4DUPd16_UPD_VLD4DUPd32_UPD_VLD4DUPd8_UPD_VLD4DUPq16_UPD_VLD4DUPq32_UPD_VLD4DUPq8_UPD
  { 0, 0, 0, 0, 0 }, // 552 VLD4LNd16_UPD_VLD4LNd32_UPD_VLD4LNd8_UPD_VLD4LNq16_UPD_VLD4LNq32_UPD
  { 0, 0, 0, 0, 0 }, // 553 VLD4DUPd16Pseudo_UPD_VLD4DUPd32Pseudo_UPD_VLD4DUPd8Pseudo_UPD
  { 0, 0, 0, 0, 0 }, // 554 VLD4LNd16Pseudo_UPD_VLD4LNd32Pseudo_UPD_VLD4LNd8Pseudo_UPD_VLD4LNq16Pseudo_UPD_VLD4LNq32Pseudo_UPD
  { 0, 0, 0, 0, 0 }, // 555 VST1d16_VST1d32_VST1d64_VST1d8
  { 0, 0, 0, 0, 0 }, // 556 VST1q16_VST1q32_VST1q64_VST1q8
  { 0, 0, 0, 0, 0 }, // 557 VST1d16wb_fixed_VST1d16wb_register_VST1d32wb_fixed_VST1d32wb_register_VST1d64wb_fixed_VST1d64wb_register_VST1d8wb_fixed_VST1d8wb_register
  { 0, 0, 0, 0, 0 }, // 558 VST1q16wb_fixed_VST1q16wb_register_VST1q32wb_fixed_VST1q32wb_register_VST1q64wb_fixed_VST1q64wb_register_VST1q8wb_fixed_VST1q8wb_register
  { 0, 0, 0, 0, 0 }, // 559 VST1d16T_VST1d32T_VST1d64T_VST1d64TPseudo_VST1d8T
  { 0, 0, 0, 0, 0 }, // 560 VST1d16Twb_fixed_VST1d16Twb_register_VST1d32Twb_fixed_VST1d32Twb_register_VST1d64Twb_fixed_VST1d64Twb_register_VST1d8Twb_fixed_VST1d8Twb_register
  { 0, 0, 0, 0, 0 }, // 561 VST1d64TPseudoWB_fixed_VST1d64TPseudoWB_register
  { 0, 0, 0, 0, 0 }, // 562 VST1d16Q_VST1d32Q_VST1d64Q_VST1d64QPseudo_VST1d8Q
  { 0, 0, 0, 0, 0 }, // 563 VST1d16Qwb_fixed_VST1d16Qwb_register_VST1d32Qwb_fixed_VST1d32Qwb_register_VST1d64Qwb_fixed_VST1d64Qwb_register_VST1d8Qwb_fixed_VST1d8Qwb_register
  { 0, 0, 0, 0, 0 }, // 564 VST1d64QPseudoWB_fixed_VST1d64QPseudoWB_register
  { 0, 0, 0, 0, 0 }, // 565 VST2b16_VST2b32_VST2b8_VST2d16_VST2d32_VST2d8
  { 0, 0, 0, 0, 0 }, // 566 VST2b16wb_fixed_VST2b16wb_register_VST2b32wb_fixed_VST2b32wb_register_VST2b8wb_fixed_VST2b8wb_register_VST2d16wb_fixed_VST2d16wb_register_VST2d32wb_fixed_VST2d32wb_register_VST2d8wb_fixed_VST2d8wb_register
  { 0, 0, 0, 0, 0 }, // 567 VST2q16_VST2q16Pseudo_VST2q32_VST2q32Pseudo_VST2q8_VST2q8Pseudo
  { 0, 0, 0, 0, 0 }, // 568 VST2q16PseudoWB_fixed_VST2q16PseudoWB_register_VST2q32PseudoWB_fixed_VST2q32PseudoWB_register_VST2q8PseudoWB_fixed_VST2q8PseudoWB_register
  { 0, 0, 0, 0, 0 }, // 569 VST2q16wb_fixed_VST2q16wb_register_VST2q32wb_fixed_VST2q32wb_register_VST2q8wb_fixed_VST2q8wb_register
  { 0, 0, 0, 0, 0 }, // 570 VST3d16_VST3d16Pseudo_VST3d32_VST3d32Pseudo_VST3d8_VST3d8Pseudo_VST3q16_VST3q16oddPseudo_VST3q32_VST3q32oddPseudo_VST3q8_VST3q8oddPseudo
  { 0, 0, 0, 0, 0 }, // 571 VST3d16Pseudo_UPD_VST3d16_UPD_VST3d32Pseudo_UPD_VST3d32_UPD_VST3d8Pseudo_UPD_VST3d8_UPD_VST3q16Pseudo_UPD_VST3q16_UPD_VST3q16oddPseudo_UPD_VST3q32Pseudo_UPD_VST3q32_UPD_VST3q32oddPseudo_UPD_VST3q8Pseudo_UPD_VST3q8_UPD_VST3q8oddPseudo_UPD
  { 0, 0, 0, 0, 0 }, // 572 VST4d16_VST4d16Pseudo_VST4d32_VST4d32Pseudo_VST4d8_VST4d8Pseudo_VST4q16_VST4q16oddPseudo_VST4q32_VST4q32oddPseudo_VST4q8_VST4q8oddPseudo
  { 0, 0, 0, 0, 0 }, // 573 VST4d16Pseudo_UPD_VST4d16_UPD_VST4d32Pseudo_UPD_VST4d32_UPD_VST4d8Pseudo_UPD_VST4d8_UPD_VST4q16Pseudo_UPD_VST4q16_UPD_VST4q16oddPseudo_UPD_VST4q32Pseudo_UPD_VST4q32_UPD_VST4q32oddPseudo_UPD_VST4q8Pseudo_UPD_VST4q8_UPD_VST4q8oddPseudo_UPD
  { 0, 0, 0, 0, 0 }, // 574 VST1LNd16_VST1LNd32_VST1LNd8_VST1LNq16Pseudo_VST1LNq32Pseudo_VST1LNq8Pseudo
  { 0, 0, 0, 0, 0 }, // 575 VST1LNd16_UPD_VST1LNd32_UPD_VST1LNd8_UPD_VST1LNq16Pseudo_UPD_VST1LNq32Pseudo_UPD_VST1LNq8Pseudo_UPD
  { 0, 0, 0, 0, 0 }, // 576 VST2LNd16_VST2LNd16Pseudo_VST2LNd32_VST2LNd32Pseudo_VST2LNd8_VST2LNd8Pseudo_VST2LNq16_VST2LNq16Pseudo_VST2LNq32_VST2LNq32Pseudo
  { 0, 0, 0, 0, 0 }, // 577 VST2LNd16Pseudo_UPD_VST2LNd16_UPD_VST2LNd32Pseudo_UPD_VST2LNd32_UPD_VST2LNd8Pseudo_UPD_VST2LNd8_UPD_VST2LNq16Pseudo_UPD_VST2LNq16_UPD_VST2LNq32Pseudo_UPD_VST2LNq32_UPD
  { 0, 0, 0, 0, 0 }, // 578 VST3LNd16_VST3LNd16Pseudo_VST3LNd32_VST3LNd32Pseudo_VST3LNd8_VST3LNd8Pseudo_VST3LNq16_VST3LNq16Pseudo_VST3LNq32_VST3LNq32Pseudo
  { 0, 0, 0, 0, 0 }, // 579 VST3LNd16Pseudo_UPD_VST3LNd16_UPD_VST3LNd32Pseudo_UPD_VST3LNd32_UPD_VST3LNd8Pseudo_UPD_VST3LNd8_UPD_VST3LNq16Pseudo_UPD_VST3LNq16_UPD_VST3LNq32Pseudo_UPD_VST3LNq32_UPD
  { 0, 0, 0, 0, 0 }, // 580 VST4LNd16_VST4LNd16Pseudo_VST4LNd32_VST4LNd32Pseudo_VST4LNd8_VST4LNd8Pseudo_VST4LNq16_VST4LNq16Pseudo_VST4LNq32_VST4LNq32Pseudo
  { 0, 0, 0, 0, 0 }, // 581 VST4LNd16Pseudo_UPD_VST4LNd16_UPD_VST4LNd32Pseudo_UPD_VST4LNd32_UPD_VST4LNd8Pseudo_UPD_VST4LNd8_UPD_VST4LNq16Pseudo_UPD_VST4LNq16_UPD_VST4LNq32Pseudo_UPD_VST4LNq32_UPD
  { 1, 459, 462, 5744, 5747 }, // 582 VDIVS
  { 1, 459, 462, 5747, 5749 }, // 583 VSQRTS
  { 1, 456, 459, 5749, 5752 }, // 584 VDIVD
  { 1, 456, 459, 5752, 5755 }, // 585 VSQRTD
  { 0, 0, 0, 0, 0 }, // 586 ABS
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry ARMWriteProcResTable[] = {
  { 0,  0}, // Invalid
  { 2,  1}, // #1
  { 3,  1}, // #2
  { 1,  1}, // #3
  { 4,  1}, // #4
  { 1,  2}, // #5
  { 5,  1}, // #6
  { 1,  1}, // #7
  { 5,  1}, // #8
  { 2,  3}, // #9
  { 6,  3}, // #10
  { 2,  2}, // #11
  { 2,  2}, // #12
  { 5,  1}, // #13
  { 2,  2}, // #14
  { 6,  2}, // #15
  { 1,  3}, // #16
  { 5,  1}, // #17
  { 1,  1}, // #18
  { 4,  2}, // #19
  { 1,  2}, // #20
  { 4,  2}, // #21
  { 1,  2}, // #22
  { 4,  2}, // #23
  { 5,  1}, // #24
  { 1,  2}, // #25
  { 4,  3}, // #26
  { 5,  2}, // #27
  { 1,  1}, // #28
  { 4,  1}, // #29
  { 5,  1}, // #30
  { 1,  2}, // #31
  { 4,  2}, // #32
  { 5,  2}, // #33
  { 1,  4}, // #34
  { 4,  4}, // #35
  { 5,  3}, // #36
  { 1,  6}, // #37
  { 4,  6}, // #38
  { 5,  5}, // #39
  { 1,  5}, // #40
  { 4,  5}, // #41
  { 5,  4}, // #42
  { 1,  1}, // #43
  { 2,  1}, // #44
  { 5,  1}, // #45
  { 1,  2}, // #46
  { 5,  2}, // #47
  { 1,  3}, // #48
  { 5,  3}, // #49
  { 1,  4}, // #50
  { 5,  4}, // #51
  { 1,  5}, // #52
  { 5,  5}, // #53
  { 1,  6}, // #54
  { 5,  6}, // #55
  { 1,  7}, // #56
  { 5,  7}, // #57
  { 1,  8}, // #58
  { 5,  8}, // #59
  { 1,  1}, // #60
  { 3,  1}, // #61
  { 5,  1}, // #62
  { 1,  2}, // #63
  { 3,  1}, // #64
  { 5,  2}, // #65
  { 1,  3}, // #66
  { 3,  1}, // #67
  { 5,  3}, // #68
  { 1,  4}, // #69
  { 3,  1}, // #70
  { 5,  4}, // #71
  { 1,  5}, // #72
  { 3,  1}, // #73
  { 5,  5}, // #74
  { 1,  6}, // #75
  { 3,  1}, // #76
  { 5,  6}, // #77
  { 1,  7}, // #78
  { 3,  1}, // #79
  { 5,  7}, // #80
  { 1,  8}, // #81
  { 3,  1}, // #82
  { 5,  8}, // #83
  { 1,  3}, // #84
  { 4,  3}, // #85
  { 5,  3}, // #86
  { 1,  4}, // #87
  { 4,  4}, // #88
  { 5,  4}, // #89
  { 1,  5}, // #90
  { 4,  5}, // #91
  { 5,  5}, // #92
  { 1,  6}, // #93
  { 4,  6}, // #94
  { 5,  6}, // #95
  { 1,  7}, // #96
  { 4,  7}, // #97
  { 5,  7}, // #98
  { 1,  8}, // #99
  { 4,  8}, // #100
  { 5,  8}, // #101
  { 3,  1}, // #102
  { 4,  1}, // #103
  { 5,  1}, // #104
  { 4,  0}, // #105
  { 2,  2}, // #106
  { 5,  5}, // #107
  { 4,  1}, // #108
  { 5,  2}, // #109
  { 2,  1}, // #110
  { 3,  1}, // #111
  { 5,  2}, // #112
  { 2,  2}, // #113
  { 5,  3}, // #114
  { 1, 14}, // #115
  { 2,  1}, // #116
  { 5,  1}, // #117
  { 3,  2}, // #118
  { 5,  2}, // #119
  { 3,  3}, // #120
  { 5,  3}, // #121
  { 3,  4}, // #122
  { 5,  4}, // #123
  { 2,  1}, // #124
  { 4,  1}, // #125
  { 5,  1}, // #126
  { 3,  2}, // #127
  { 4,  2}, // #128
  { 5,  2}, // #129
  { 3,  1}, // #130
  { 4,  1}, // #131
  { 5,  2}, // #132
  { 2, 15}, // #133
  { 3, 15}, // #134
  { 4, 15}, // #135
  { 5, 30}, // #136
  { 4,  3}, // #137
  { 5,  1}, // #138
  { 2,  2}, // #139
  { 3,  2}, // #140
  { 4,  1}, // #141
  { 5,  4}, // #142
  { 2,  2}, // #143
  { 3,  2}, // #144
  { 4,  1}, // #145
  { 5,  5}, // #146
  { 3,  3}, // #147
  { 4,  4}, // #148
  { 5,  3}, // #149
  { 3,  3}, // #150
  { 4,  4}, // #151
  { 5,  4}, // #152
  { 2,  2}, // #153
  { 3,  4}, // #154
  { 4,  7}, // #155
  { 5,  6}, // #156
  { 2,  2}, // #157
  { 3,  4}, // #158
  { 4,  4}, // #159
  { 5,  6}, // #160
  { 2,  2}, // #161
  { 3,  4}, // #162
  { 4,  7}, // #163
  { 5,  7}, // #164
  { 2,  2}, // #165
  { 3,  4}, // #166
  { 4,  4}, // #167
  { 5,  7}, // #168
  { 3,  2}, // #169
  { 4,  1}, // #170
  { 5,  2}, // #171
  { 3,  2}, // #172
  { 4,  1}, // #173
  { 5,  3}, // #174
  { 2,  1}, // #175
  { 3,  2}, // #176
  { 4,  2}, // #177
  { 5,  3}, // #178
  { 2,  1}, // #179
  { 3,  2}, // #180
  { 4,  2}, // #181
  { 5,  4}, // #182
  { 2,  1}, // #183
  { 3,  3}, // #184
  { 4,  3}, // #185
  { 5,  4}, // #186
  { 2,  1}, // #187
  { 3,  3}, // #188
  { 4,  3}, // #189
  { 5,  5}, // #190
  { 2,  1}, // #191
  { 3,  5}, // #192
  { 4,  2}, // #193
  { 5,  6}, // #194
  { 2,  1}, // #195
  { 3,  5}, // #196
  { 4,  2}, // #197
  { 5,  7}, // #198
  { 4,  4}, // #199
  { 5,  1}, // #200
  { 3,  2}, // #201
  { 4,  4}, // #202
  { 5,  2}, // #203
  { 3,  2}, // #204
  { 4,  4}, // #205
  { 5,  3}, // #206
  { 3,  4}, // #207
  { 4,  4}, // #208
  { 5,  5}, // #209
  { 1, 15}, // #210
  { 2,  1}, // #211
  { 5,  1}, // #212
  { 1, 30}, // #213
  { 2,  1}, // #214
  { 5,  1}, // #215
  { 2,  3}, // #216
  { 5,  3}, // #217
  { 2,  2}, // #218
  { 5,  2}, // #219
  { 2,  1}, // #220
  { 5,  2}, // #221
  { 4,  5}, // #222
  { 5,  1}, // #223
  { 4,  6}, // #224
  { 5,  1}, // #225
  { 4,  7}, // #226
  { 5,  1}, // #227
  { 4,  8}, // #228
  { 5,  1}, // #229
  { 4,  9}, // #230
  { 5,  1}, // #231
  { 4, 10}, // #232
  { 5,  1}, // #233
  { 4, 11}, // #234
  { 5,  1}, // #235
  { 4, 12}, // #236
  { 5,  1}, // #237
  { 4, 13}, // #238
  { 5,  1}, // #239
  { 4, 14}, // #240
  { 5,  1}, // #241
  { 4, 15}, // #242
  { 5,  1}, // #243
  { 4, 16}, // #244
  { 5,  1}, // #245
  { 4,  5}, // #246
  { 5,  2}, // #247
  { 4,  6}, // #248
  { 5,  2}, // #249
  { 4,  7}, // #250
  { 5,  2}, // #251
  { 4,  8}, // #252
  { 5,  2}, // #253
  { 4,  9}, // #254
  { 5,  2}, // #255
  { 4, 10}, // #256
  { 5,  2}, // #257
  { 4, 11}, // #258
  { 5,  2}, // #259
  { 4, 12}, // #260
  { 5,  2}, // #261
  { 4, 13}, // #262
  { 5,  2}, // #263
  { 4, 14}, // #264
  { 5,  2}, // #265
  { 4, 15}, // #266
  { 5,  2}, // #267
  { 4, 16}, // #268
  { 5,  2}, // #269
  { 3,  1}, // #270
  { 4,  2}, // #271
  { 5,  3}, // #272
  { 3,  1}, // #273
  { 4,  3}, // #274
  { 5,  3}, // #275
  { 3,  1}, // #276
  { 4,  4}, // #277
  { 5,  3}, // #278
  { 3,  1}, // #279
  { 4,  5}, // #280
  { 5,  3}, // #281
  { 3,  1}, // #282
  { 4,  6}, // #283
  { 5,  3}, // #284
  { 3,  1}, // #285
  { 4,  7}, // #286
  { 5,  3}, // #287
  { 3,  1}, // #288
  { 4,  8}, // #289
  { 5,  3}, // #290
  { 3,  1}, // #291
  { 4,  9}, // #292
  { 5,  3}, // #293
  { 3,  1}, // #294
  { 4, 10}, // #295
  { 5,  3}, // #296
  { 3,  1}, // #297
  { 4, 11}, // #298
  { 5,  3}, // #299
  { 3,  1}, // #300
  { 4, 12}, // #301
  { 5,  3}, // #302
  { 3,  1}, // #303
  { 4, 13}, // #304
  { 5,  3}, // #305
  { 3,  1}, // #306
  { 4, 14}, // #307
  { 5,  3}, // #308
  { 3,  1}, // #309
  { 4, 15}, // #310
  { 5,  3}, // #311
  { 3,  1}, // #312
  { 4, 16}, // #313
  { 5,  3}, // #314
  { 4,  9}, // #315
  { 5,  9}, // #316
  { 4, 10}, // #317
  { 5, 10}, // #318
  { 4, 11}, // #319
  { 5, 11}, // #320
  { 4, 12}, // #321
  { 5, 12}, // #322
  { 4, 13}, // #323
  { 5, 13}, // #324
  { 4, 14}, // #325
  { 5, 14}, // #326
  { 4, 15}, // #327
  { 5, 15}, // #328
  { 4, 16}, // #329
  { 5, 16}, // #330
  { 4,  5}, // #331
  { 5,  6}, // #332
  { 4,  6}, // #333
  { 5,  7}, // #334
  { 4,  7}, // #335
  { 5,  8}, // #336
  { 4,  8}, // #337
  { 5,  9}, // #338
  { 4,  9}, // #339
  { 5, 10}, // #340
  { 4, 10}, // #341
  { 5, 11}, // #342
  { 4, 11}, // #343
  { 5, 12}, // #344
  { 4, 12}, // #345
  { 5, 13}, // #346
  { 4, 13}, // #347
  { 5, 14}, // #348
  { 4, 14}, // #349
  { 5, 15}, // #350
  { 4, 15}, // #351
  { 5, 16}, // #352
  { 4, 16}, // #353
  { 5, 17}, // #354
  { 3,  3}, // #355
  { 4,  2}, // #356
  { 5,  4}, // #357
  { 3,  5}, // #358
  { 4,  3}, // #359
  { 5,  6}, // #360
  { 3,  7}, // #361
  { 4,  3}, // #362
  { 5,  8}, // #363
  { 3,  2}, // #364
  { 4,  3}, // #365
  { 5,  3}, // #366
  { 3,  9}, // #367
  { 4,  3}, // #368
  { 5, 10}, // #369
  { 3,  5}, // #370
  { 4,  4}, // #371
  { 5,  6}, // #372
  { 3,  7}, // #373
  { 4,  5}, // #374
  { 5,  8}, // #375
  { 3,  9}, // #376
  { 4,  5}, // #377
  { 5, 10}, // #378
  { 3,  4}, // #379
  { 4,  5}, // #380
  { 5,  5}, // #381
  { 3,  3}, // #382
  { 4,  2}, // #383
  { 5,  6}, // #384
  { 3,  5}, // #385
  { 4,  2}, // #386
  { 5,  8}, // #387
  { 3,  5}, // #388
  { 4,  3}, // #389
  { 5,  8}, // #390
  { 3,  7}, // #391
  { 4,  3}, // #392
  { 5, 10}, // #393
  { 3,  2}, // #394
  { 4,  3}, // #395
  { 5,  5}, // #396
  { 3,  9}, // #397
  { 4,  3}, // #398
  { 5, 12}, // #399
  { 3,  5}, // #400
  { 4,  4}, // #401
  { 5,  8}, // #402
  { 3,  3}, // #403
  { 4,  4}, // #404
  { 5,  6}, // #405
  { 3,  7}, // #406
  { 4,  5}, // #407
  { 5, 10}, // #408
  { 3,  9}, // #409
  { 4,  5}, // #410
  { 5, 12}, // #411
  { 3,  4}, // #412
  { 4,  5}, // #413
  { 5,  7}, // #414
  { 4,  6}, // #415
  { 5,  8}, // #416
  { 4,  8}, // #417
  { 5, 10}, // #418
  { 4, 10}, // #419
  { 5, 12}, // #420
  { 4, 12}, // #421
  { 5, 14}, // #422
  { 4, 14}, // #423
  { 5, 16}, // #424
  { 4, 16}, // #425
  { 5, 18} // #426
}; // ARMWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry ARMWriteLatencyTable[] = {
  { 0,  0}, // Invalid
  { 1,  0}, // #1 A9WriteALU_WriteBr_WriteBrL_WriteBrTbl_A9WriteFMov_WritePreLd_A9WriteV1_WriteCMP_SwiftWriteP01OneCycle_SwiftWriteP0OneCycle
  { 2,  0}, // #2 WriteALUsi_A9WriteI_A9WriteV2_A9WriteIsr_WriteBrL_SwiftWriteP01TwoCycle_SwiftWriteP01OneCycle_SwiftWriteP0TwoCycle_SwiftWriteP1TwoCycle_SwiftWriteP0OneCycle
  { 3,  0}, // #3 A9WriteALUsr_A9WriteV3_SwiftWriteP01OneCycle_SwiftWriteP2ThreeCycle_SwiftWriteP01ThreeCycleTwoUops_SwiftWriteP0ThreeCycleThreeUops
  { 4, 83}, // #4 A9WriteLb
  { 2,  0}, // #5 A9WriteAdr
  { 5, 84}, // #6 A9WriteLbsi
  { 2,  0}, // #7 A9WriteAdr
  { 3, 40}, // #8 A9WriteL
  { 3, 57}, // #9 A9WriteLHi
  { 1,  0}, // #10 A9WriteAdr
  { 3, 40}, // #11 A9WriteL
  { 1,  0}, // #12 A9WriteAdr
  { 4, 107}, // #13 A9WriteLsi
  { 1,  0}, // #14 A9WriteAdr
  { 4,  0}, // #15 A9WriteM_A9WriteV4_A9WriteF_A9Write2V4_WriteCvtFP_SwiftWriteP0FourCycle_SwiftWriteP2P01FourCyle_SwiftWriteP0P1FourCycle_SwiftWriteP1FourCycle_SwiftWriteP1TwoCycle_SwiftWriteP2FourCycle_SwiftWriteLM4Cy_SwiftWrite3xP2FourCy_SwiftWrite2xP2FourCy
  { 5,  0}, // #16 A9WriteMHi_A9WriteV5_A9WriteFMulS_SwiftWriteP2ThreeCycle_SwiftWriteP0P01FiveCycleTwoUops
  { 5, 40}, // #17 A9WriteL
  { 1,  0}, // #18 A9WriteAdr_A9WriteLfpOp_A9WriteLSfp_A9WriteFMov
  { 1,  0}, // #19 A9WriteS_A9WriteAdr_A9WriteFMov_A9WriteLfpOp_A9WriteLSfp
  { 2,  0}, // #20 A9WriteAdr
  { 1,  0}, // #21 A9WriteS_SwiftWriteLDMAddrWB
  { 3,  0}, // #22 A9WriteM16_A9WriteV3_SwiftWriteP2P2ThreeCycle_SwiftWriteP2ThreeCycle_SwiftWriteLM3Cy
  { 4,  0}, // #23 A9WriteM16Hi_A9WriteV4_SwiftWriteLdFour_SwiftWriteP2FourCycle_SwiftWriteLM4Cy
  { 3,  0}, // #24 A9WriteAdr_SwiftWriteP2P01ThreeCycle
  { 1,  0}, // #25 A9WriteS_SwiftWrBackOne
  { 6,  0}, // #26 A9WriteV6_A9WriteFMulD_SwiftWriteP0P1SixCycle_SwiftWriteP1TwoCycle_SwiftWriteP0SixCycle_SwiftWriteP1SixCycle_SwiftWriteP0TwoCycle_SwiftWriteP01OneCycle
  {25,  0}, // #27 A9WriteFDivD
  {15,  0}, // #28 A9WriteFDivS
  { 9,  0}, // #29 A9WriteV9_A9WriteFMAD_A9Write2V9
  {10,  0}, // #30 A9WriteV10
  { 5,  0}, // #31 A9WriteLfpOp
  { 1,  0}, // #32 A9WriteAdr
  { 6,  0}, // #33 A9WriteLfpOp
  { 1,  0}, // #34 A9WriteAdr
  { 2,  0}, // #35 A9WriteLfpOp_A9WriteAdr
  { 2,  0}, // #36 A9WriteAdr_A9WriteLfpOp
  { 7,  0}, // #37 A9WriteLfpOp_A9Write2V7_A9WriteV7
  { 3,  0}, // #38 A9WriteAdr
  { 9,  0}, // #39 A9WriteLfpOp
  { 5,  0}, // #40 A9WriteAdr
  { 8,  0}, // #41 A9WriteLfpOp_A9WriteFMAS_SwiftWriteP1TwoCycle_SwiftWriteP1EightCycle
  { 4,  0}, // #42 A9WriteAdr
  {32,  0}, // #43 A9WriteFSqrtD_SwiftDiv32
  {17,  0}, // #44 A9WriteFSqrtS_SwiftDiv17
  { 3, 40}, // #45 A9WriteL
  { 1,  0}, // #46 A9WriteAdr
  { 1,  0}, // #47 A9WriteALU_A9WriteCycle1
  { 3,  0}, // #48 A9WriteCycle1_A9WriteAdr_A9WriteLfpOp
  { 3,  0}, // #49 A9WriteCycle1_A9WriteLfpOp_A9WriteAdr
  { 1,  0}, // #50 A9WriteAdr_SwiftWriteP01OneCycle
  { 0,  0}, // #51 A9WriteIssue_SwiftWriteP2_SwiftWriteStIncAddr
  { 3,  0}, // #52 A9WriteCycle1
  { 3,  0}, // #53 A9WriteCycle1
  { 4,  0}, // #54 A9WriteCycle1_A9WriteAdr_A9WriteLfpOp_SwiftWriteP1FourCycle_SwiftWriteLM4Cy
  { 4,  0}, // #55 A9WriteCycle1_A9WriteLfpOp_A9WriteAdr_SwiftWriteP1FourCycle_SwiftWriteLM4CyNo
  { 2,  0}, // #56 A9WriteAdr_SwiftWriteP1TwoCycle_SwiftWriteP01OneCycle
  { 0,  0}, // #57 A9WriteIssue_SwiftWriteStIncAddr
  { 3,  0}, // #58 A9WriteCycle1
  { 3,  0}, // #59 A9WriteCycle1
  { 4,  0}, // #60 A9WriteCycle1
  { 4,  0}, // #61 A9WriteCycle1
  { 5,  0}, // #62 A9WriteCycle1_A9WriteAdr_A9WriteLfpOp_SwiftP0P0P01FiveCycle
  { 5,  0}, // #63 A9WriteCycle1_A9WriteLfpOp_A9WriteAdr_SwiftWrite5Cycle
  { 3,  0}, // #64 A9WriteAdr
  { 0,  0}, // #65 A9WriteIssue
  { 3,  0}, // #66 A9WriteCycle1
  { 3,  0}, // #67 A9WriteCycle1
  { 4,  0}, // #68 A9WriteCycle1
  { 4,  0}, // #69 A9WriteCycle1
  { 5,  0}, // #70 A9WriteCycle1
  { 5,  0}, // #71 A9WriteCycle1
  { 6,  0}, // #72 A9WriteCycle1_A9WriteAdr_A9WriteLfpOp
  { 6,  0}, // #73 A9WriteCycle1_A9WriteLfpOp_A9WriteAdr
  { 4,  0}, // #74 A9WriteAdr
  { 0,  0}, // #75 A9WriteIssue
  { 3,  0}, // #76 A9WriteCycle1
  { 3,  0}, // #77 A9WriteCycle1
  { 4,  0}, // #78 A9WriteCycle1
  { 4,  0}, // #79 A9WriteCycle1
  { 5,  0}, // #80 A9WriteCycle1
  { 5,  0}, // #81 A9WriteCycle1
  { 6,  0}, // #82 A9WriteCycle1
  { 6,  0}, // #83 A9WriteCycle1_SwiftWriteP1TwoCycle
  { 7,  0}, // #84 A9WriteCycle1_A9WriteAdr_A9WriteLfpOp_SwiftWriteP1TwoCycle
  { 7,  0}, // #85 A9WriteCycle1_A9WriteLfpOp_A9WriteAdr
  { 5,  0}, // #86 A9WriteAdr
  { 0,  0}, // #87 A9WriteIssue
  { 3,  0}, // #88 A9WriteCycle1
  { 3,  0}, // #89 A9WriteCycle1
  { 4,  0}, // #90 A9WriteCycle1
  { 4,  0}, // #91 A9WriteCycle1
  { 5,  0}, // #92 A9WriteCycle1
  { 5,  0}, // #93 A9WriteCycle1
  { 6,  0}, // #94 A9WriteCycle1
  { 6,  0}, // #95 A9WriteCycle1
  { 7,  0}, // #96 A9WriteCycle1
  { 7,  0}, // #97 A9WriteCycle1
  { 8,  0}, // #98 A9WriteCycle1_A9WriteAdr_A9WriteLfpOp
  { 8,  0}, // #99 A9WriteCycle1_A9WriteLfpOp_A9WriteAdr
  { 6,  0}, // #100 A9WriteAdr_SwiftWriteLM6Cy
  { 0,  0}, // #101 A9WriteIssue_SwiftVLDMPerm2
  { 3,  0}, // #102 A9WriteCycle1
  { 3,  0}, // #103 A9WriteCycle1
  { 4,  0}, // #104 A9WriteCycle1
  { 4,  0}, // #105 A9WriteCycle1
  { 5,  0}, // #106 A9WriteCycle1
  { 5,  0}, // #107 A9WriteCycle1
  { 6,  0}, // #108 A9WriteCycle1
  { 6,  0}, // #109 A9WriteCycle1
  { 7,  0}, // #110 A9WriteCycle1
  { 7,  0}, // #111 A9WriteCycle1
  { 8,  0}, // #112 A9WriteCycle1
  { 8,  0}, // #113 A9WriteCycle1
  { 9,  0}, // #114 A9WriteCycle1
  { 9,  0}, // #115 A9WriteCycle1
  { 7,  0}, // #116 A9WriteAdr
  { 0,  0}, // #117 A9WriteIssue
  { 3,  0}, // #118 A9WriteCycle1
  { 3,  0}, // #119 A9WriteCycle1
  { 4,  0}, // #120 A9WriteCycle1
  { 4,  0}, // #121 A9WriteCycle1
  { 5,  0}, // #122 A9WriteCycle1
  { 5,  0}, // #123 A9WriteCycle1
  { 6,  0}, // #124 A9WriteCycle1
  { 6,  0}, // #125 A9WriteCycle1
  { 7,  0}, // #126 A9WriteCycle1
  { 7,  0}, // #127 A9WriteCycle1
  { 8,  0}, // #128 A9WriteCycle1
  { 8,  0}, // #129 A9WriteCycle1
  { 9,  0}, // #130 A9WriteCycle1
  { 9,  0}, // #131 A9WriteCycle1
  {10,  0}, // #132 A9WriteCycle1
  {10,  0}, // #133 A9WriteCycle1
  { 8,  0}, // #134 A9WriteAdr
  { 0,  0}, // #135 A9WriteIssue
  { 3,  0}, // #136 A9WriteCycle1
  { 3,  0}, // #137 A9WriteCycle1
  { 4,  0}, // #138 A9WriteCycle1
  { 4,  0}, // #139 A9WriteCycle1
  { 5,  0}, // #140 A9WriteCycle1
  { 5,  0}, // #141 A9WriteCycle1
  { 6,  0}, // #142 A9WriteCycle1
  { 6,  0}, // #143 A9WriteCycle1
  { 7,  0}, // #144 A9WriteCycle1
  { 7,  0}, // #145 A9WriteCycle1
  { 8,  0}, // #146 A9WriteCycle1
  { 8,  0}, // #147 A9WriteCycle1
  { 9,  0}, // #148 A9WriteCycle1
  { 9,  0}, // #149 A9WriteCycle1
  {10,  0}, // #150 A9WriteCycle1
  {10,  0}, // #151 A9WriteCycle1
  { 2,  0}, // #152 A9WriteAdr
  { 0,  0}, // #153 A9WriteIssue
  { 1,  0}, // #154 A9WriteAdr
  { 3,  0}, // #155 A9WriteCycle1
  { 3,  0}, // #156 A9WriteCycle1
  { 0,  0}, // #157 A9WriteIssue
  { 2,  0}, // #158 A9WriteAdr
  { 3,  0}, // #159 A9WriteCycle1
  { 3,  0}, // #160 A9WriteCycle1
  { 4,  0}, // #161 A9WriteCycle1
  { 4,  0}, // #162 A9WriteCycle1
  { 0,  0}, // #163 A9WriteIssue
  { 3,  0}, // #164 A9WriteAdr
  { 3,  0}, // #165 A9WriteCycle1
  { 3,  0}, // #166 A9WriteCycle1
  { 4,  0}, // #167 A9WriteCycle1
  { 4,  0}, // #168 A9WriteCycle1
  { 5,  0}, // #169 A9WriteCycle1
  { 5,  0}, // #170 A9WriteCycle1
  { 0,  0}, // #171 A9WriteIssue
  { 4,  0}, // #172 A9WriteAdr
  { 3,  0}, // #173 A9WriteCycle1
  { 3,  0}, // #174 A9WriteCycle1
  { 4,  0}, // #175 A9WriteCycle1
  { 4,  0}, // #176 A9WriteCycle1
  { 5,  0}, // #177 A9WriteCycle1
  { 5,  0}, // #178 A9WriteCycle1
  { 6,  0}, // #179 A9WriteCycle1
  { 6,  0}, // #180 A9WriteCycle1
  { 0,  0}, // #181 A9WriteIssue
  { 5,  0}, // #182 A9WriteAdr
  { 3,  0}, // #183 A9WriteCycle1
  { 3,  0}, // #184 A9WriteCycle1
  { 4,  0}, // #185 A9WriteCycle1
  { 4,  0}, // #186 A9WriteCycle1
  { 5,  0}, // #187 A9WriteCycle1
  { 5,  0}, // #188 A9WriteCycle1
  { 6,  0}, // #189 A9WriteCycle1
  { 6,  0}, // #190 A9WriteCycle1
  { 7,  0}, // #191 A9WriteCycle1
  { 7,  0}, // #192 A9WriteCycle1
  { 0,  0}, // #193 A9WriteIssue
  { 6,  0}, // #194 A9WriteAdr
  { 3,  0}, // #195 A9WriteCycle1
  { 3,  0}, // #196 A9WriteCycle1
  { 4,  0}, // #197 A9WriteCycle1
  { 4,  0}, // #198 A9WriteCycle1
  { 5,  0}, // #199 A9WriteCycle1
  { 5,  0}, // #200 A9WriteCycle1
  { 6,  0}, // #201 A9WriteCycle1
  { 6,  0}, // #202 A9WriteCycle1
  { 7,  0}, // #203 A9WriteCycle1
  { 7,  0}, // #204 A9WriteCycle1
  { 8,  0}, // #205 A9WriteCycle1
  { 8,  0}, // #206 A9WriteCycle1
  { 0,  0}, // #207 A9WriteIssue
  { 7,  0}, // #208 A9WriteAdr
  { 3,  0}, // #209 A9WriteCycle1
  { 3,  0}, // #210 A9WriteCycle1
  { 4,  0}, // #211 A9WriteCycle1
  { 4,  0}, // #212 A9WriteCycle1
  { 5,  0}, // #213 A9WriteCycle1
  { 5,  0}, // #214 A9WriteCycle1
  { 6,  0}, // #215 A9WriteCycle1
  { 6,  0}, // #216 A9WriteCycle1
  { 7,  0}, // #217 A9WriteCycle1
  { 7,  0}, // #218 A9WriteCycle1
  { 8,  0}, // #219 A9WriteCycle1
  { 8,  0}, // #220 A9WriteCycle1
  { 9,  0}, // #221 A9WriteCycle1
  { 9,  0}, // #222 A9WriteCycle1
  { 0,  0}, // #223 A9WriteIssue
  { 8,  0}, // #224 A9WriteAdr
  { 3,  0}, // #225 A9WriteCycle1
  { 3,  0}, // #226 A9WriteCycle1
  { 4,  0}, // #227 A9WriteCycle1
  { 4,  0}, // #228 A9WriteCycle1
  { 5,  0}, // #229 A9WriteCycle1
  { 5,  0}, // #230 A9WriteCycle1
  { 6,  0}, // #231 A9WriteCycle1
  { 6,  0}, // #232 A9WriteCycle1
  { 7,  0}, // #233 A9WriteCycle1
  { 7,  0}, // #234 A9WriteCycle1
  { 8,  0}, // #235 A9WriteCycle1
  { 8,  0}, // #236 A9WriteCycle1
  { 9,  0}, // #237 A9WriteCycle1
  { 9,  0}, // #238 A9WriteCycle1
  {10,  0}, // #239 A9WriteCycle1
  {10,  0}, // #240 A9WriteCycle1
  { 0,  0}, // #241 A9WriteIssue
  { 2,  0}, // #242 A9WriteAdr
  { 3,  0}, // #243 A9WriteCycle1
  { 3,  0}, // #244 A9WriteCycle1
  { 4,  0}, // #245 A9WriteCycle1
  { 4,  0}, // #246 A9WriteCycle1
  { 5,  0}, // #247 A9WriteCycle1
  { 5,  0}, // #248 A9WriteCycle1
  { 6,  0}, // #249 A9WriteCycle1
  { 6,  0}, // #250 A9WriteCycle1
  { 7,  0}, // #251 A9WriteCycle1
  { 7,  0}, // #252 A9WriteCycle1
  { 8,  0}, // #253 A9WriteCycle1
  { 8,  0}, // #254 A9WriteCycle1
  { 9,  0}, // #255 A9WriteCycle1
  { 9,  0}, // #256 A9WriteCycle1
  {10,  0}, // #257 A9WriteCycle1
  {10,  0}, // #258 A9WriteCycle1
  { 0,  0}, // #259 A9WriteIssue
  { 3,  0}, // #260 A9WriteCycle1
  { 3,  0}, // #261 A9WriteCycle1
  { 1,  0}, // #262 A9WriteAdr
  { 1,  0}, // #263 A9WriteB
  { 3,  0}, // #264 A9WriteCycle1
  { 3,  0}, // #265 A9WriteCycle1
  { 4,  0}, // #266 A9WriteCycle1
  { 4,  0}, // #267 A9WriteCycle1
  { 2,  0}, // #268 A9WriteAdr
  { 1,  0}, // #269 A9WriteB
  { 3,  0}, // #270 A9WriteCycle1
  { 3,  0}, // #271 A9WriteCycle1
  { 4,  0}, // #272 A9WriteCycle1
  { 4,  0}, // #273 A9WriteCycle1
  { 5,  0}, // #274 A9WriteCycle1
  { 5,  0}, // #275 A9WriteCycle1
  { 3,  0}, // #276 A9WriteAdr
  { 1,  0}, // #277 A9WriteB
  { 3,  0}, // #278 A9WriteCycle1
  { 3,  0}, // #279 A9WriteCycle1
  { 4,  0}, // #280 A9WriteCycle1
  { 4,  0}, // #281 A9WriteCycle1
  { 5,  0}, // #282 A9WriteCycle1
  { 5,  0}, // #283 A9WriteCycle1
  { 6,  0}, // #284 A9WriteCycle1
  { 6,  0}, // #285 A9WriteCycle1
  { 4,  0}, // #286 A9WriteAdr_SwiftWriteP2P01P01FourCycle_SwiftWriteLM4Cy_SwiftWrite3xP2FourCy_SwiftWrite2xP2FourCy
  { 1,  0}, // #287 A9WriteB_SwiftWrBackOne_SwiftWriteP01OneCycle
  { 3,  0}, // #288 A9WriteCycle1
  { 3,  0}, // #289 A9WriteCycle1
  { 4,  0}, // #290 A9WriteCycle1
  { 4,  0}, // #291 A9WriteCycle1
  { 5,  0}, // #292 A9WriteCycle1
  { 5,  0}, // #293 A9WriteCycle1
  { 6,  0}, // #294 A9WriteCycle1
  { 6,  0}, // #295 A9WriteCycle1
  { 7,  0}, // #296 A9WriteCycle1
  { 7,  0}, // #297 A9WriteCycle1
  { 5,  0}, // #298 A9WriteAdr
  { 1,  0}, // #299 A9WriteB
  { 3,  0}, // #300 A9WriteCycle1
  { 3,  0}, // #301 A9WriteCycle1
  { 4,  0}, // #302 A9WriteCycle1
  { 4,  0}, // #303 A9WriteCycle1
  { 5,  0}, // #304 A9WriteCycle1
  { 5,  0}, // #305 A9WriteCycle1
  { 6,  0}, // #306 A9WriteCycle1
  { 6,  0}, // #307 A9WriteCycle1
  { 7,  0}, // #308 A9WriteCycle1
  { 7,  0}, // #309 A9WriteCycle1
  { 8,  0}, // #310 A9WriteCycle1
  { 8,  0}, // #311 A9WriteCycle1
  { 6,  0}, // #312 A9WriteAdr
  { 1,  0}, // #313 A9WriteB
  { 3,  0}, // #314 A9WriteCycle1
  { 3,  0}, // #315 A9WriteCycle1
  { 4,  0}, // #316 A9WriteCycle1
  { 4,  0}, // #317 A9WriteCycle1
  { 5,  0}, // #318 A9WriteCycle1
  { 5,  0}, // #319 A9WriteCycle1
  { 6,  0}, // #320 A9WriteCycle1
  { 6,  0}, // #321 A9WriteCycle1
  { 7,  0}, // #322 A9WriteCycle1
  { 7,  0}, // #323 A9WriteCycle1
  { 8,  0}, // #324 A9WriteCycle1
  { 8,  0}, // #325 A9WriteCycle1
  { 9,  0}, // #326 A9WriteCycle1
  { 9,  0}, // #327 A9WriteCycle1
  { 7,  0}, // #328 A9WriteAdr
  { 1,  0}, // #329 A9WriteB
  { 3,  0}, // #330 A9WriteCycle1
  { 3,  0}, // #331 A9WriteCycle1
  { 4,  0}, // #332 A9WriteCycle1
  { 4,  0}, // #333 A9WriteCycle1
  { 5,  0}, // #334 A9WriteCycle1
  { 5,  0}, // #335 A9WriteCycle1
  { 6,  0}, // #336 A9WriteCycle1
  { 6,  0}, // #337 A9WriteCycle1
  { 7,  0}, // #338 A9WriteCycle1
  { 7,  0}, // #339 A9WriteCycle1
  { 8,  0}, // #340 A9WriteCycle1
  { 8,  0}, // #341 A9WriteCycle1
  { 9,  0}, // #342 A9WriteCycle1
  { 9,  0}, // #343 A9WriteCycle1
  {10,  0}, // #344 A9WriteCycle1
  {10,  0}, // #345 A9WriteCycle1
  { 8,  0}, // #346 A9WriteAdr
  { 1,  0}, // #347 A9WriteB
  { 3,  0}, // #348 A9WriteCycle1
  { 3,  0}, // #349 A9WriteCycle1
  { 4,  0}, // #350 A9WriteCycle1
  { 4,  0}, // #351 A9WriteCycle1
  { 5,  0}, // #352 A9WriteCycle1
  { 5,  0}, // #353 A9WriteCycle1
  { 6,  0}, // #354 A9WriteCycle1
  { 6,  0}, // #355 A9WriteCycle1
  { 7,  0}, // #356 A9WriteCycle1
  { 7,  0}, // #357 A9WriteCycle1
  { 8,  0}, // #358 A9WriteCycle1
  { 8,  0}, // #359 A9WriteCycle1
  { 9,  0}, // #360 A9WriteCycle1
  { 9,  0}, // #361 A9WriteCycle1
  {10,  0}, // #362 A9WriteCycle1
  {10,  0}, // #363 A9WriteCycle1
  { 2,  0}, // #364 A9WriteAdr
  { 1,  0}, // #365 A9WriteB
  { 2,  0}, // #366 A9WriteAdr
  { 1,  0}, // #367 A9WriteCycle1
  { 3,  0}, // #368 A9WriteCycle1
  { 2,  0}, // #369 A9WriteCycle1_SwiftWriteP01OneCycle
  { 4,  0}, // #370 A9WriteCycle1_SwiftWriteLM4Cy
  { 3,  0}, // #371 A9WriteAdr
  { 1,  0}, // #372 A9WriteCycle1
  { 3,  0}, // #373 A9WriteCycle1
  { 2,  0}, // #374 A9WriteCycle1
  { 4,  0}, // #375 A9WriteCycle1
  { 3,  0}, // #376 A9WriteCycle1
  { 5,  0}, // #377 A9WriteCycle1
  { 4,  0}, // #378 A9WriteAdr
  { 1,  0}, // #379 A9WriteCycle1
  { 3,  0}, // #380 A9WriteCycle1
  { 2,  0}, // #381 A9WriteCycle1
  { 4,  0}, // #382 A9WriteCycle1
  { 3,  0}, // #383 A9WriteCycle1
  { 5,  0}, // #384 A9WriteCycle1
  { 4,  0}, // #385 A9WriteCycle1
  { 6,  0}, // #386 A9WriteCycle1
  { 5,  0}, // #387 A9WriteAdr
  { 1,  0}, // #388 A9WriteCycle1
  { 3,  0}, // #389 A9WriteCycle1
  { 2,  0}, // #390 A9WriteCycle1
  { 4,  0}, // #391 A9WriteCycle1
  { 3,  0}, // #392 A9WriteCycle1
  { 5,  0}, // #393 A9WriteCycle1
  { 4,  0}, // #394 A9WriteCycle1
  { 6,  0}, // #395 A9WriteCycle1
  { 5,  0}, // #396 A9WriteCycle1_SwiftWrite5Cycle
  { 7,  0}, // #397 A9WriteCycle1_Swift2P03P01FiveCycle
  { 6,  0}, // #398 A9WriteAdr
  { 1,  0}, // #399 A9WriteCycle1
  { 3,  0}, // #400 A9WriteCycle1
  { 2,  0}, // #401 A9WriteCycle1
  { 4,  0}, // #402 A9WriteCycle1
  { 3,  0}, // #403 A9WriteCycle1
  { 5,  0}, // #404 A9WriteCycle1
  { 4,  0}, // #405 A9WriteCycle1
  { 6,  0}, // #406 A9WriteCycle1
  { 5,  0}, // #407 A9WriteCycle1
  { 7,  0}, // #408 A9WriteCycle1
  { 6,  0}, // #409 A9WriteCycle1
  { 8,  0}, // #410 A9WriteCycle1
  { 7,  0}, // #411 A9WriteAdr
  { 1,  0}, // #412 A9WriteCycle1
  { 3,  0}, // #413 A9WriteCycle1
  { 2,  0}, // #414 A9WriteCycle1
  { 4,  0}, // #415 A9WriteCycle1
  { 3,  0}, // #416 A9WriteCycle1
  { 5,  0}, // #417 A9WriteCycle1
  { 4,  0}, // #418 A9WriteCycle1
  { 6,  0}, // #419 A9WriteCycle1
  { 5,  0}, // #420 A9WriteCycle1
  { 7,  0}, // #421 A9WriteCycle1
  { 6,  0}, // #422 A9WriteCycle1
  { 8,  0}, // #423 A9WriteCycle1
  { 7,  0}, // #424 A9WriteCycle1
  { 9,  0}, // #425 A9WriteCycle1
  { 8,  0}, // #426 A9WriteAdr
  { 1,  0}, // #427 A9WriteCycle1
  { 3,  0}, // #428 A9WriteCycle1
  { 2,  0}, // #429 A9WriteCycle1
  { 4,  0}, // #430 A9WriteCycle1
  { 3,  0}, // #431 A9WriteCycle1
  { 5,  0}, // #432 A9WriteCycle1
  { 4,  0}, // #433 A9WriteCycle1
  { 6,  0}, // #434 A9WriteCycle1
  { 5,  0}, // #435 A9WriteCycle1
  { 7,  0}, // #436 A9WriteCycle1
  { 6,  0}, // #437 A9WriteCycle1
  { 8,  0}, // #438 A9WriteCycle1
  { 7,  0}, // #439 A9WriteCycle1
  { 9,  0}, // #440 A9WriteCycle1
  { 8,  0}, // #441 A9WriteCycle1
  {10,  0}, // #442 A9WriteCycle1
  { 2,  0}, // #443 A9WriteAdr
  { 1,  0}, // #444 A9WriteCycle1
  { 3,  0}, // #445 A9WriteCycle1
  { 2,  0}, // #446 A9WriteCycle1
  { 4,  0}, // #447 A9WriteCycle1
  { 5,  0}, // #448 A9WriteCycle1
  { 5,  0}, // #449 A9WriteCycle1
  { 6,  0}, // #450 A9WriteCycle1
  { 6,  0}, // #451 A9WriteCycle1
  { 7,  0}, // #452 A9WriteCycle1
  { 7,  0}, // #453 A9WriteCycle1
  { 8,  0}, // #454 A9WriteCycle1
  { 8,  0}, // #455 A9WriteCycle1
  { 9,  0}, // #456 A9WriteCycle1
  { 9,  0}, // #457 A9WriteCycle1
  {10,  0}, // #458 A9WriteCycle1
  {10,  0}, // #459 A9WriteCycle1
  { 1,  0}, // #460 A9WriteCycle1
  { 3,  0}, // #461 A9WriteCycle1
  { 1,  0}, // #462 A9WriteAdr
  { 1,  0}, // #463 A9WriteCycle1
  { 3,  0}, // #464 A9WriteCycle1
  { 2,  0}, // #465 A9WriteCycle1
  { 4,  0}, // #466 A9WriteCycle1
  { 2,  0}, // #467 A9WriteAdr
  { 1,  0}, // #468 A9WriteCycle1
  { 3,  0}, // #469 A9WriteCycle1
  { 2,  0}, // #470 A9WriteCycle1
  { 4,  0}, // #471 A9WriteCycle1
  { 3,  0}, // #472 A9WriteCycle1
  { 5,  0}, // #473 A9WriteCycle1
  { 3,  0}, // #474 A9WriteAdr
  { 1,  0}, // #475 A9WriteCycle1
  { 3,  0}, // #476 A9WriteCycle1
  { 2,  0}, // #477 A9WriteCycle1
  { 4,  0}, // #478 A9WriteCycle1
  { 3,  0}, // #479 A9WriteCycle1
  { 5,  0}, // #480 A9WriteCycle1
  { 4,  0}, // #481 A9WriteCycle1
  { 6,  0}, // #482 A9WriteCycle1
  { 4,  0}, // #483 A9WriteAdr
  { 1,  0}, // #484 A9WriteCycle1
  { 3,  0}, // #485 A9WriteCycle1
  { 2,  0}, // #486 A9WriteCycle1
  { 4,  0}, // #487 A9WriteCycle1
  { 3,  0}, // #488 A9WriteCycle1
  { 5,  0}, // #489 A9WriteCycle1
  { 4,  0}, // #490 A9WriteCycle1
  { 6,  0}, // #491 A9WriteCycle1
  { 5,  0}, // #492 A9WriteCycle1
  { 7,  0}, // #493 A9WriteCycle1
  { 5,  0}, // #494 A9WriteAdr
  { 1,  0}, // #495 A9WriteCycle1
  { 3,  0}, // #496 A9WriteCycle1
  { 2,  0}, // #497 A9WriteCycle1
  { 4,  0}, // #498 A9WriteCycle1
  { 3,  0}, // #499 A9WriteCycle1
  { 5,  0}, // #500 A9WriteCycle1
  { 4,  0}, // #501 A9WriteCycle1
  { 6,  0}, // #502 A9WriteCycle1
  { 5,  0}, // #503 A9WriteCycle1
  { 7,  0}, // #504 A9WriteCycle1
  { 6,  0}, // #505 A9WriteCycle1
  { 8,  0}, // #506 A9WriteCycle1
  { 6,  0}, // #507 A9WriteAdr
  { 1,  0}, // #508 A9WriteCycle1
  { 3,  0}, // #509 A9WriteCycle1
  { 2,  0}, // #510 A9WriteCycle1
  { 4,  0}, // #511 A9WriteCycle1
  { 3,  0}, // #512 A9WriteCycle1
  { 5,  0}, // #513 A9WriteCycle1
  { 4,  0}, // #514 A9WriteCycle1
  { 6,  0}, // #515 A9WriteCycle1
  { 5,  0}, // #516 A9WriteCycle1
  { 7,  0}, // #517 A9WriteCycle1
  { 6,  0}, // #518 A9WriteCycle1
  { 8,  0}, // #519 A9WriteCycle1
  { 7,  0}, // #520 A9WriteCycle1
  { 9,  0}, // #521 A9WriteCycle1
  { 7,  0}, // #522 A9WriteAdr
  { 1,  0}, // #523 A9WriteCycle1
  { 3,  0}, // #524 A9WriteCycle1
  { 2,  0}, // #525 A9WriteCycle1
  { 4,  0}, // #526 A9WriteCycle1
  { 3,  0}, // #527 A9WriteCycle1
  { 5,  0}, // #528 A9WriteCycle1
  { 4,  0}, // #529 A9WriteCycle1
  { 6,  0}, // #530 A9WriteCycle1
  { 5,  0}, // #531 A9WriteCycle1
  { 7,  0}, // #532 A9WriteCycle1
  { 6,  0}, // #533 A9WriteCycle1
  { 8,  0}, // #534 A9WriteCycle1
  { 7,  0}, // #535 A9WriteCycle1
  { 9,  0}, // #536 A9WriteCycle1
  { 8,  0}, // #537 A9WriteCycle1
  {10,  0}, // #538 A9WriteCycle1
  { 8,  0}, // #539 A9WriteAdr
  { 1,  0}, // #540 A9WriteCycle1
  { 3,  0}, // #541 A9WriteCycle1
  { 2,  0}, // #542 A9WriteCycle1
  { 4,  0}, // #543 A9WriteCycle1
  { 5,  0}, // #544 A9WriteCycle1
  { 5,  0}, // #545 A9WriteCycle1
  { 6,  0}, // #546 A9WriteCycle1
  { 6,  0}, // #547 A9WriteCycle1
  { 7,  0}, // #548 A9WriteCycle1
  { 7,  0}, // #549 A9WriteCycle1
  { 8,  0}, // #550 A9WriteCycle1
  { 8,  0}, // #551 A9WriteCycle1
  { 9,  0}, // #552 A9WriteCycle1
  { 9,  0}, // #553 A9WriteCycle1
  {10,  0}, // #554 A9WriteCycle1
  {10,  0}, // #555 A9WriteCycle1
  { 2,  0}, // #556 A9WriteAdr
  {14,  0}, // #557 SwiftDiv
  { 3,  0}, // #558 SwiftWriteP2P2P01ThreeCycle
  { 4,  0}, // #559 SwiftWriteLdFour
  { 1,  0}, // #560 SwiftWrBackOne_SwiftWriteP01OneCycle
  { 0,  0}, // #561 SwiftWriteP2
  { 0,  0}, // #562 SwiftWriteP2_SwiftVLDMPerm1_SwiftVLDMPerm2_SwiftVLDMPerm4
  { 1,  0}, // #563 SwiftWriteP01OneCycle
  {12,  0}, // #564 SwiftWriteP1TwelveCyc
  {15,  0}, // #565 SwiftWaitP0For15Cy
  {15,  0}, // #566 SwiftWaitP1For15Cy
  {15,  0}, // #567 SwiftWaitP2For15Cy
  { 9,  0}, // #568 SwiftWriteLM9Cy
  { 0,  0}, // #569 SwiftExt2xP0
  { 0,  0}, // #570 SwiftVLDMPerm2
  { 9,  0}, // #571 SwiftWriteLM9Cy
  { 1,  0}, // #572 SwiftWriteP01OneCycle
  { 0,  0}, // #573 SwiftExt2xP0
  { 0,  0}, // #574 SwiftVLDMPerm2
  { 9,  0}, // #575 SwiftWriteLM9Cy
  { 9,  0}, // #576 SwiftWriteLM9CyNo
  { 9,  0}, // #577 SwiftWriteLM9CyNo
  { 0,  0}, // #578 SwiftVLDMPerm3
  { 4,  0}, // #579 SwiftWrite3xP2FourCy
  { 9,  0}, // #580 SwiftWriteLM9Cy
  { 9,  0}, // #581 SwiftWriteLM9CyNo
  { 9,  0}, // #582 SwiftWriteLM9CyNo
  { 1,  0}, // #583 SwiftWriteP01OneCycle
  { 0,  0}, // #584 SwiftVLDMPerm3
  { 4,  0}, // #585 SwiftWrite3xP2FourCy
  {11,  0}, // #586 SwiftWriteLM11Cy
  {11,  0}, // #587 SwiftWriteLM11Cy
  {11,  0}, // #588 SwiftWriteLM11Cy
  {11,  0}, // #589 SwiftWriteLM11Cy
  { 0,  0}, // #590 SwiftExt2xP0
  { 0,  0}, // #591 SwiftVLDMPerm4
  { 4,  0}, // #592 SwiftWrite3xP2FourCy
  {11,  0}, // #593 SwiftWriteLM11Cy
  {11,  0}, // #594 SwiftWriteLM11Cy
  {11,  0}, // #595 SwiftWriteLM11Cy
  {11,  0}, // #596 SwiftWriteLM11Cy
  { 1,  0}, // #597 SwiftWriteP01OneCycle
  { 0,  0}, // #598 SwiftExt2xP0
  { 0,  0}, // #599 SwiftVLDMPerm4
  { 4,  0}, // #600 SwiftWrite3xP2FourCy
  { 6,  0}, // #601 SwiftWriteLM6Cy
  { 1,  0}, // #602 SwiftWriteP01OneCycle
  { 0,  0}, // #603 SwiftVLDMPerm2
  { 6,  0}, // #604 SwiftWriteLM6Cy
  { 6,  0}, // #605 SwiftWriteLM6Cy
  { 0,  0}, // #606 SwiftExt1xP0
  { 0,  0}, // #607 SwiftVLDMPerm2
  { 6,  0}, // #608 SwiftWriteLM6Cy
  { 6,  0}, // #609 SwiftWriteLM6Cy
  { 1,  0}, // #610 SwiftWriteP01OneCycle
  { 0,  0}, // #611 SwiftExt1xP0
  { 0,  0}, // #612 SwiftVLDMPerm2
  { 6,  0}, // #613 SwiftWriteLM6Cy
  { 1,  0}, // #614 SwiftWriteP01OneCycle
  { 6,  0}, // #615 SwiftWriteLM6Cy
  { 0,  0}, // #616 SwiftExt1xP0
  { 0,  0}, // #617 SwiftVLDMPerm2
  { 7,  0}, // #618 SwiftWriteLM7Cy
  { 8,  0}, // #619 SwiftWriteLM8Cy
  { 8,  0}, // #620 SwiftWriteLM8Cy
  { 0,  0}, // #621 SwiftExt1xP0
  { 0,  0}, // #622 SwiftVLDMPerm3
  { 7,  0}, // #623 SwiftWriteLM7Cy
  { 8,  0}, // #624 SwiftWriteLM8Cy
  { 8,  0}, // #625 SwiftWriteLM8Cy
  { 1,  0}, // #626 SwiftWriteP01OneCycle
  { 0,  0}, // #627 SwiftExt1xP0
  { 0,  0}, // #628 SwiftVLDMPerm3
  { 7,  0}, // #629 SwiftWriteLM7Cy
  { 1,  0}, // #630 SwiftWriteP01OneCycle
  { 8,  0}, // #631 SwiftWriteLM8Cy
  { 8,  0}, // #632 SwiftWriteLM8Cy
  { 0,  0}, // #633 SwiftExt1xP0
  { 0,  0}, // #634 SwiftVLDMPerm3
  { 8,  0}, // #635 SwiftWriteLM8Cy
  { 9,  0}, // #636 SwiftWriteLM9Cy
  {10,  0}, // #637 SwiftWriteLM10CyNo
  {10,  0}, // #638 SwiftWriteLM10CyNo
  { 0,  0}, // #639 SwiftExt1xP0
  { 0,  0}, // #640 SwiftVLDMPerm5
  { 8,  0}, // #641 SwiftWriteLM8Cy
  { 9,  0}, // #642 SwiftWriteLM9Cy
  {10,  0}, // #643 SwiftWriteLM10CyNo
  {10,  0}, // #644 SwiftWriteLM10CyNo
  { 1,  0}, // #645 SwiftWriteP01OneCycle
  { 0,  0}, // #646 SwiftExt1xP0
  { 0,  0}, // #647 SwiftVLDMPerm5
  { 8,  0}, // #648 SwiftWriteLM8Cy
  { 1,  0}, // #649 SwiftWriteP01OneCycle
  { 9,  0}, // #650 SwiftWriteLM9Cy
  {10,  0}, // #651 SwiftWriteLM10CyNo
  {10,  0}, // #652 SwiftWriteLM10CyNo
  { 0,  0}, // #653 SwiftExt1xP0
  { 0,  0}, // #654 SwiftVLDMPerm5
  { 3,  0}, // #655 SwiftWriteLM3Cy
  { 4,  0}, // #656 SwiftWriteLM4Cy
  { 0,  0}, // #657 SwiftWriteLDMAddrNoWB
  { 3,  0}, // #658 SwiftWriteLM3Cy
  { 4,  0}, // #659 SwiftWriteLM4Cy
  { 5,  0}, // #660 SwiftWriteLM5Cy
  { 0,  0}, // #661 SwiftWriteLDMAddrNoWB
  { 3,  0}, // #662 SwiftWriteLM3Cy
  { 4,  0}, // #663 SwiftWriteLM4Cy
  { 5,  0}, // #664 SwiftWriteLM5Cy
  { 6,  0}, // #665 SwiftWriteLM6Cy
  { 0,  0}, // #666 SwiftWriteLDMAddrNoWB
  { 3,  0}, // #667 SwiftWriteLM3Cy
  { 4,  0}, // #668 SwiftWriteLM4Cy
  { 5,  0}, // #669 SwiftWriteLM5Cy
  { 6,  0}, // #670 SwiftWriteLM6Cy
  { 7,  0}, // #671 SwiftWriteLM7Cy
  { 0,  0}, // #672 SwiftWriteLDMAddrNoWB
  { 3,  0}, // #673 SwiftWriteLM3Cy
  { 4,  0}, // #674 SwiftWriteLM4Cy
  { 5,  0}, // #675 SwiftWriteLM5Cy
  { 6,  0}, // #676 SwiftWriteLM6Cy
  { 7,  0}, // #677 SwiftWriteLM7Cy
  { 8,  0}, // #678 SwiftWriteLM8Cy
  { 0,  0}, // #679 SwiftWriteLDMAddrNoWB
  { 3,  0}, // #680 SwiftWriteLM3Cy
  { 4,  0}, // #681 SwiftWriteLM4Cy
  { 5,  0}, // #682 SwiftWriteLM5Cy
  { 6,  0}, // #683 SwiftWriteLM6Cy
  { 7,  0}, // #684 SwiftWriteLM7Cy
  { 8,  0}, // #685 SwiftWriteLM8Cy
  { 9,  0}, // #686 SwiftWriteLM9Cy
  { 0,  0}, // #687 SwiftWriteLDMAddrNoWB
  { 3,  0}, // #688 SwiftWriteLM3Cy
  { 4,  0}, // #689 SwiftWriteLM4Cy
  { 5,  0}, // #690 SwiftWriteLM5Cy
  { 6,  0}, // #691 SwiftWriteLM6Cy
  { 7,  0}, // #692 SwiftWriteLM7Cy
  { 8,  0}, // #693 SwiftWriteLM8Cy
  { 9,  0}, // #694 SwiftWriteLM9Cy
  {10,  0}, // #695 SwiftWriteLM10Cy
  { 0,  0}, // #696 SwiftWriteLDMAddrNoWB
  { 3,  0}, // #697 SwiftWriteLM3Cy
  { 4,  0}, // #698 SwiftWriteLM4Cy
  { 5,  0}, // #699 SwiftWriteLM5Cy
  { 6,  0}, // #700 SwiftWriteLM6Cy
  { 7,  0}, // #701 SwiftWriteLM7Cy
  { 8,  0}, // #702 SwiftWriteLM8Cy
  { 9,  0}, // #703 SwiftWriteLM9Cy
  {10,  0}, // #704 SwiftWriteLM10Cy
  {11,  0}, // #705 SwiftWriteLM11Cy
  { 0,  0}, // #706 SwiftWriteLDMAddrNoWB
  { 3,  0}, // #707 SwiftWriteLM3Cy
  { 4,  0}, // #708 SwiftWriteLM4Cy
  { 5,  0}, // #709 SwiftWriteLM5Cy
  { 6,  0}, // #710 SwiftWriteLM6Cy
  { 7,  0}, // #711 SwiftWriteLM7Cy
  { 8,  0}, // #712 SwiftWriteLM8Cy
  { 9,  0}, // #713 SwiftWriteLM9Cy
  {10,  0}, // #714 SwiftWriteLM10Cy
  {11,  0}, // #715 SwiftWriteLM11Cy
  {12,  0}, // #716 SwiftWriteLM12Cy
  { 0,  0}, // #717 SwiftWriteLDMAddrNoWB
  { 3,  0}, // #718 SwiftWriteLM3Cy
  { 4,  0}, // #719 SwiftWriteLM4Cy
  { 5,  0}, // #720 SwiftWriteLM5Cy
  { 6,  0}, // #721 SwiftWriteLM6Cy
  { 7,  0}, // #722 SwiftWriteLM7Cy
  { 8,  0}, // #723 SwiftWriteLM8Cy
  { 9,  0}, // #724 SwiftWriteLM9Cy
  {10,  0}, // #725 SwiftWriteLM10Cy
  {11,  0}, // #726 SwiftWriteLM11Cy
  {12,  0}, // #727 SwiftWriteLM12Cy
  {13,  0}, // #728 SwiftWriteLM13Cy
  { 0,  0}, // #729 SwiftWriteLDMAddrNoWB
  { 3,  0}, // #730 SwiftWriteLM3Cy
  { 4,  0}, // #731 SwiftWriteLM4Cy
  { 5,  0}, // #732 SwiftWriteLM5Cy
  { 6,  0}, // #733 SwiftWriteLM6Cy
  { 7,  0}, // #734 SwiftWriteLM7Cy
  { 8,  0}, // #735 SwiftWriteLM8Cy
  { 9,  0}, // #736 SwiftWriteLM9Cy
  {10,  0}, // #737 SwiftWriteLM10Cy
  {11,  0}, // #738 SwiftWriteLM11Cy
  {12,  0}, // #739 SwiftWriteLM12Cy
  {13,  0}, // #740 SwiftWriteLM13Cy
  {14,  0}, // #741 SwiftWriteLM14Cy
  { 0,  0}, // #742 SwiftWriteLDMAddrNoWB
  { 3,  0}, // #743 SwiftWriteLM3Cy
  { 4,  0}, // #744 SwiftWriteLM4Cy
  { 5,  0}, // #745 SwiftWriteLM5Cy
  { 6,  0}, // #746 SwiftWriteLM6Cy
  { 7,  0}, // #747 SwiftWriteLM7Cy
  { 8,  0}, // #748 SwiftWriteLM8Cy
  { 9,  0}, // #749 SwiftWriteLM9Cy
  {10,  0}, // #750 SwiftWriteLM10Cy
  {11,  0}, // #751 SwiftWriteLM11Cy
  {12,  0}, // #752 SwiftWriteLM12Cy
  {13,  0}, // #753 SwiftWriteLM13Cy
  {14,  0}, // #754 SwiftWriteLM14Cy
  {15,  0}, // #755 SwiftWriteLM15Cy
  { 0,  0}, // #756 SwiftWriteLDMAddrNoWB
  { 3,  0}, // #757 SwiftWriteLM3Cy
  { 4,  0}, // #758 SwiftWriteLM4Cy
  { 5,  0}, // #759 SwiftWriteLM5Cy
  { 6,  0}, // #760 SwiftWriteLM6Cy
  { 7,  0}, // #761 SwiftWriteLM7Cy
  { 8,  0}, // #762 SwiftWriteLM8Cy
  { 9,  0}, // #763 SwiftWriteLM9Cy
  {10,  0}, // #764 SwiftWriteLM10Cy
  {11,  0}, // #765 SwiftWriteLM11Cy
  {12,  0}, // #766 SwiftWriteLM12Cy
  {13,  0}, // #767 SwiftWriteLM13Cy
  {14,  0}, // #768 SwiftWriteLM14Cy
  {15,  0}, // #769 SwiftWriteLM15Cy
  {16,  0}, // #770 SwiftWriteLM16Cy
  { 0,  0}, // #771 SwiftWriteLDMAddrNoWB
  { 3,  0}, // #772 SwiftWriteLM3Cy
  { 4,  0}, // #773 SwiftWriteLM4Cy
  { 5,  0}, // #774 SwiftWriteLM5Cy
  { 6,  0}, // #775 SwiftWriteLM6Cy
  { 7,  0}, // #776 SwiftWriteLM7Cy
  { 8,  0}, // #777 SwiftWriteLM8Cy
  { 9,  0}, // #778 SwiftWriteLM9Cy
  {10,  0}, // #779 SwiftWriteLM10Cy
  {11,  0}, // #780 SwiftWriteLM11Cy
  {12,  0}, // #781 SwiftWriteLM12Cy
  {13,  0}, // #782 SwiftWriteLM13Cy
  {14,  0}, // #783 SwiftWriteLM14Cy
  {15,  0}, // #784 SwiftWriteLM15Cy
  {16,  0}, // #785 SwiftWriteLM16Cy
  {17,  0}, // #786 SwiftWriteLM17Cy
  { 0,  0}, // #787 SwiftWriteLDMAddrNoWB
  { 3,  0}, // #788 SwiftWriteLM3Cy
  { 4,  0}, // #789 SwiftWriteLM4Cy
  { 5,  0}, // #790 SwiftWriteLM5Cy_SwiftWriteLM5CyNo
  { 6,  0}, // #791 SwiftWriteLM6Cy_SwiftWriteLM6CyNo
  { 7,  0}, // #792 SwiftWriteLM7Cy_SwiftWriteLM7CyNo
  { 8,  0}, // #793 SwiftWriteLM8Cy_SwiftWriteLM8CyNo
  { 9,  0}, // #794 SwiftWriteLM9Cy_SwiftWriteLM9CyNo
  {10,  0}, // #795 SwiftWriteLM10Cy_SwiftWriteLM10CyNo
  {11,  0}, // #796 SwiftWriteLM11Cy_SwiftWriteLM11CyNo
  {12,  0}, // #797 SwiftWriteLM12Cy_SwiftWriteLM12CyNo
  {13,  0}, // #798 SwiftWriteLM13Cy_SwiftWriteLM13CyNo
  {14,  0}, // #799 SwiftWriteLM14Cy_SwiftWriteLM14CyNo
  {15,  0}, // #800 SwiftWriteLM15Cy_SwiftWriteLM15CyNo
  {16,  0}, // #801 SwiftWriteLM16Cy_SwiftWriteLM16CyNo
  {17,  0}, // #802 SwiftWriteLM17Cy_SwiftWriteLM17CyNo
  {18,  0}, // #803 SwiftWriteLM18Cy_SwiftWriteLM18CyNo
  { 0,  0}, // #804 SwiftWriteLDMAddrNoWB
  { 1,  0}, // #805 SwiftWriteLDMAddrWB
  { 3,  0}, // #806 SwiftWriteLM3Cy
  { 4,  0}, // #807 SwiftWriteLM4Cy
  { 5,  0}, // #808 SwiftWriteLM5Cy
  { 1,  0}, // #809 SwiftWriteLDMAddrWB
  { 3,  0}, // #810 SwiftWriteLM3Cy
  { 4,  0}, // #811 SwiftWriteLM4Cy
  { 5,  0}, // #812 SwiftWriteLM5Cy
  { 6,  0}, // #813 SwiftWriteLM6Cy
  { 1,  0}, // #814 SwiftWriteLDMAddrWB
  { 3,  0}, // #815 SwiftWriteLM3Cy
  { 4,  0}, // #816 SwiftWriteLM4Cy
  { 5,  0}, // #817 SwiftWriteLM5Cy
  { 6,  0}, // #818 SwiftWriteLM6Cy
  { 7,  0}, // #819 SwiftWriteLM7Cy
  { 1,  0}, // #820 SwiftWriteLDMAddrWB
  { 3,  0}, // #821 SwiftWriteLM3Cy
  { 4,  0}, // #822 SwiftWriteLM4Cy
  { 5,  0}, // #823 SwiftWriteLM5Cy
  { 6,  0}, // #824 SwiftWriteLM6Cy
  { 7,  0}, // #825 SwiftWriteLM7Cy
  { 8,  0}, // #826 SwiftWriteLM8Cy
  { 1,  0}, // #827 SwiftWriteLDMAddrWB
  { 3,  0}, // #828 SwiftWriteLM3Cy
  { 4,  0}, // #829 SwiftWriteLM4Cy
  { 5,  0}, // #830 SwiftWriteLM5Cy
  { 6,  0}, // #831 SwiftWriteLM6Cy
  { 7,  0}, // #832 SwiftWriteLM7Cy
  { 8,  0}, // #833 SwiftWriteLM8Cy
  { 9,  0}, // #834 SwiftWriteLM9Cy
  { 1,  0}, // #835 SwiftWriteLDMAddrWB
  { 3,  0}, // #836 SwiftWriteLM3Cy
  { 4,  0}, // #837 SwiftWriteLM4Cy
  { 5,  0}, // #838 SwiftWriteLM5Cy
  { 6,  0}, // #839 SwiftWriteLM6Cy
  { 7,  0}, // #840 SwiftWriteLM7Cy
  { 8,  0}, // #841 SwiftWriteLM8Cy
  { 9,  0}, // #842 SwiftWriteLM9Cy
  {10,  0}, // #843 SwiftWriteLM10Cy
  { 1,  0}, // #844 SwiftWriteLDMAddrWB
  { 3,  0}, // #845 SwiftWriteLM3Cy
  { 4,  0}, // #846 SwiftWriteLM4Cy
  { 5,  0}, // #847 SwiftWriteLM5Cy
  { 6,  0}, // #848 SwiftWriteLM6Cy
  { 7,  0}, // #849 SwiftWriteLM7Cy
  { 8,  0}, // #850 SwiftWriteLM8Cy
  { 9,  0}, // #851 SwiftWriteLM9Cy
  {10,  0}, // #852 SwiftWriteLM10Cy
  {11,  0}, // #853 SwiftWriteLM11Cy
  { 1,  0}, // #854 SwiftWriteLDMAddrWB
  { 3,  0}, // #855 SwiftWriteLM3Cy
  { 4,  0}, // #856 SwiftWriteLM4Cy
  { 5,  0}, // #857 SwiftWriteLM5Cy
  { 6,  0}, // #858 SwiftWriteLM6Cy
  { 7,  0}, // #859 SwiftWriteLM7Cy
  { 8,  0}, // #860 SwiftWriteLM8Cy
  { 9,  0}, // #861 SwiftWriteLM9Cy
  {10,  0}, // #862 SwiftWriteLM10Cy
  {11,  0}, // #863 SwiftWriteLM11Cy
  {12,  0}, // #864 SwiftWriteLM12Cy
  { 1,  0}, // #865 SwiftWriteLDMAddrWB
  { 3,  0}, // #866 SwiftWriteLM3Cy
  { 4,  0}, // #867 SwiftWriteLM4Cy
  { 5,  0}, // #868 SwiftWriteLM5Cy
  { 6,  0}, // #869 SwiftWriteLM6Cy
  { 7,  0}, // #870 SwiftWriteLM7Cy
  { 8,  0}, // #871 SwiftWriteLM8Cy
  { 9,  0}, // #872 SwiftWriteLM9Cy
  {10,  0}, // #873 SwiftWriteLM10Cy
  {11,  0}, // #874 SwiftWriteLM11Cy
  {12,  0}, // #875 SwiftWriteLM12Cy
  {13,  0}, // #876 SwiftWriteLM13Cy
  { 1,  0}, // #877 SwiftWriteLDMAddrWB
  { 3,  0}, // #878 SwiftWriteLM3Cy
  { 4,  0}, // #879 SwiftWriteLM4Cy
  { 5,  0}, // #880 SwiftWriteLM5Cy
  { 6,  0}, // #881 SwiftWriteLM6Cy
  { 7,  0}, // #882 SwiftWriteLM7Cy
  { 8,  0}, // #883 SwiftWriteLM8Cy
  { 9,  0}, // #884 SwiftWriteLM9Cy
  {10,  0}, // #885 SwiftWriteLM10Cy
  {11,  0}, // #886 SwiftWriteLM11Cy
  {12,  0}, // #887 SwiftWriteLM12Cy
  {13,  0}, // #888 SwiftWriteLM13Cy
  {14,  0}, // #889 SwiftWriteLM14Cy
  { 1,  0}, // #890 SwiftWriteLDMAddrWB
  { 3,  0}, // #891 SwiftWriteLM3Cy
  { 4,  0}, // #892 SwiftWriteLM4Cy
  { 5,  0}, // #893 SwiftWriteLM5Cy
  { 6,  0}, // #894 SwiftWriteLM6Cy
  { 7,  0}, // #895 SwiftWriteLM7Cy
  { 8,  0}, // #896 SwiftWriteLM8Cy
  { 9,  0}, // #897 SwiftWriteLM9Cy
  {10,  0}, // #898 SwiftWriteLM10Cy
  {11,  0}, // #899 SwiftWriteLM11Cy
  {12,  0}, // #900 SwiftWriteLM12Cy
  {13,  0}, // #901 SwiftWriteLM13Cy
  {14,  0}, // #902 SwiftWriteLM14Cy
  {15,  0}, // #903 SwiftWriteLM15Cy
  { 1,  0}, // #904 SwiftWriteLDMAddrWB
  { 3,  0}, // #905 SwiftWriteLM3Cy
  { 4,  0}, // #906 SwiftWriteLM4Cy
  { 5,  0}, // #907 SwiftWriteLM5Cy
  { 6,  0}, // #908 SwiftWriteLM6Cy
  { 7,  0}, // #909 SwiftWriteLM7Cy
  { 8,  0}, // #910 SwiftWriteLM8Cy
  { 9,  0}, // #911 SwiftWriteLM9Cy
  {10,  0}, // #912 SwiftWriteLM10Cy
  {11,  0}, // #913 SwiftWriteLM11Cy
  {12,  0}, // #914 SwiftWriteLM12Cy
  {13,  0}, // #915 SwiftWriteLM13Cy
  {14,  0}, // #916 SwiftWriteLM14Cy
  {15,  0}, // #917 SwiftWriteLM15Cy
  {16,  0}, // #918 SwiftWriteLM16Cy
  { 1,  0}, // #919 SwiftWriteLDMAddrWB
  { 3,  0}, // #920 SwiftWriteLM3Cy
  { 4,  0}, // #921 SwiftWriteLM4Cy
  { 5,  0}, // #922 SwiftWriteLM5Cy
  { 6,  0}, // #923 SwiftWriteLM6Cy
  { 7,  0}, // #924 SwiftWriteLM7Cy
  { 8,  0}, // #925 SwiftWriteLM8Cy
  { 9,  0}, // #926 SwiftWriteLM9Cy
  {10,  0}, // #927 SwiftWriteLM10Cy
  {11,  0}, // #928 SwiftWriteLM11Cy
  {12,  0}, // #929 SwiftWriteLM12Cy
  {13,  0}, // #930 SwiftWriteLM13Cy
  {14,  0}, // #931 SwiftWriteLM14Cy
  {15,  0}, // #932 SwiftWriteLM15Cy
  {16,  0}, // #933 SwiftWriteLM16Cy
  {17,  0}, // #934 SwiftWriteLM17Cy
  { 1,  0}, // #935 SwiftWriteLDMAddrWB
  { 3,  0}, // #936 SwiftWriteLM3Cy
  { 4,  0}, // #937 SwiftWriteLM4Cy
  { 5,  0}, // #938 SwiftWriteLM5Cy_SwiftWriteLM5CyNo
  { 6,  0}, // #939 SwiftWriteLM6Cy_SwiftWriteLM6CyNo
  { 7,  0}, // #940 SwiftWriteLM7Cy_SwiftWriteLM7CyNo
  { 8,  0}, // #941 SwiftWriteLM8Cy_SwiftWriteLM8CyNo
  { 9,  0}, // #942 SwiftWriteLM9Cy_SwiftWriteLM9CyNo
  {10,  0}, // #943 SwiftWriteLM10Cy_SwiftWriteLM10CyNo
  {11,  0}, // #944 SwiftWriteLM11Cy_SwiftWriteLM11CyNo
  {12,  0}, // #945 SwiftWriteLM12Cy_SwiftWriteLM12CyNo
  {13,  0}, // #946 SwiftWriteLM13Cy_SwiftWriteLM13CyNo
  {14,  0}, // #947 SwiftWriteLM14Cy_SwiftWriteLM14CyNo
  {15,  0}, // #948 SwiftWriteLM15Cy_SwiftWriteLM15CyNo
  {16,  0}, // #949 SwiftWriteLM16Cy_SwiftWriteLM16CyNo
  {17,  0}, // #950 SwiftWriteLM17Cy_SwiftWriteLM17CyNo
  {18,  0}, // #951 SwiftWriteLM18Cy_SwiftWriteLM18CyNo
  { 1,  0}, // #952 SwiftWriteLDMAddrWB
  { 3,  0}, // #953 SwiftWriteLM3Cy
  { 4,  0}, // #954 SwiftWriteLM4Cy
  { 2,  0}, // #955 SwiftWriteP1TwoCycle
  { 1,  0}, // #956 SwiftWriteLDMAddrWB
  { 3,  0}, // #957 SwiftWriteLM3Cy
  { 4,  0}, // #958 SwiftWriteLM4Cy
  { 5,  0}, // #959 SwiftWriteLM5Cy
  { 2,  0}, // #960 SwiftWriteP1TwoCycle
  { 1,  0}, // #961 SwiftWriteLDMAddrWB
  { 3,  0}, // #962 SwiftWriteLM3Cy
  { 4,  0}, // #963 SwiftWriteLM4Cy
  { 5,  0}, // #964 SwiftWriteLM5Cy
  { 6,  0}, // #965 SwiftWriteLM6Cy
  { 2,  0}, // #966 SwiftWriteP1TwoCycle
  { 1,  0}, // #967 SwiftWriteLDMAddrWB
  { 3,  0}, // #968 SwiftWriteLM3Cy
  { 4,  0}, // #969 SwiftWriteLM4Cy
  { 5,  0}, // #970 SwiftWriteLM5Cy
  { 6,  0}, // #971 SwiftWriteLM6Cy
  { 7,  0}, // #972 SwiftWriteLM7Cy
  { 2,  0}, // #973 SwiftWriteP1TwoCycle
  { 1,  0}, // #974 SwiftWriteLDMAddrWB
  { 3,  0}, // #975 SwiftWriteLM3Cy
  { 4,  0}, // #976 SwiftWriteLM4Cy
  { 5,  0}, // #977 SwiftWriteLM5Cy
  { 6,  0}, // #978 SwiftWriteLM6Cy
  { 7,  0}, // #979 SwiftWriteLM7Cy
  { 8,  0}, // #980 SwiftWriteLM8Cy
  { 2,  0}, // #981 SwiftWriteP1TwoCycle
  { 1,  0}, // #982 SwiftWriteLDMAddrWB
  { 3,  0}, // #983 SwiftWriteLM3Cy
  { 4,  0}, // #984 SwiftWriteLM4Cy
  { 5,  0}, // #985 SwiftWriteLM5Cy
  { 6,  0}, // #986 SwiftWriteLM6Cy
  { 7,  0}, // #987 SwiftWriteLM7Cy
  { 8,  0}, // #988 SwiftWriteLM8Cy
  { 9,  0}, // #989 SwiftWriteLM9Cy
  { 2,  0}, // #990 SwiftWriteP1TwoCycle
  { 1,  0}, // #991 SwiftWriteLDMAddrWB
  { 3,  0}, // #992 SwiftWriteLM3Cy
  { 4,  0}, // #993 SwiftWriteLM4Cy
  { 5,  0}, // #994 SwiftWriteLM5Cy
  { 6,  0}, // #995 SwiftWriteLM6Cy
  { 7,  0}, // #996 SwiftWriteLM7Cy
  { 8,  0}, // #997 SwiftWriteLM8Cy
  { 9,  0}, // #998 SwiftWriteLM9Cy
  {10,  0}, // #999 SwiftWriteLM10Cy
  { 2,  0}, // #1000 SwiftWriteP1TwoCycle
  { 1,  0}, // #1001 SwiftWriteLDMAddrWB
  { 3,  0}, // #1002 SwiftWriteLM3Cy
  { 4,  0}, // #1003 SwiftWriteLM4Cy
  { 5,  0}, // #1004 SwiftWriteLM5Cy
  { 6,  0}, // #1005 SwiftWriteLM6Cy
  { 7,  0}, // #1006 SwiftWriteLM7Cy
  { 8,  0}, // #1007 SwiftWriteLM8Cy
  { 9,  0}, // #1008 SwiftWriteLM9Cy
  {10,  0}, // #1009 SwiftWriteLM10Cy
  {11,  0}, // #1010 SwiftWriteLM11Cy
  { 2,  0}, // #1011 SwiftWriteP1TwoCycle
  { 1,  0}, // #1012 SwiftWriteLDMAddrWB
  { 3,  0}, // #1013 SwiftWriteLM3Cy
  { 4,  0}, // #1014 SwiftWriteLM4Cy
  { 5,  0}, // #1015 SwiftWriteLM5Cy
  { 6,  0}, // #1016 SwiftWriteLM6Cy
  { 7,  0}, // #1017 SwiftWriteLM7Cy
  { 8,  0}, // #1018 SwiftWriteLM8Cy
  { 9,  0}, // #1019 SwiftWriteLM9Cy
  {10,  0}, // #1020 SwiftWriteLM10Cy
  {11,  0}, // #1021 SwiftWriteLM11Cy
  {12,  0}, // #1022 SwiftWriteLM12Cy
  { 2,  0}, // #1023 SwiftWriteP1TwoCycle
  { 1,  0}, // #1024 SwiftWriteLDMAddrWB
  { 3,  0}, // #1025 SwiftWriteLM3Cy
  { 4,  0}, // #1026 SwiftWriteLM4Cy
  { 5,  0}, // #1027 SwiftWriteLM5Cy
  { 6,  0}, // #1028 SwiftWriteLM6Cy
  { 7,  0}, // #1029 SwiftWriteLM7Cy
  { 8,  0}, // #1030 SwiftWriteLM8Cy
  { 9,  0}, // #1031 SwiftWriteLM9Cy
  {10,  0}, // #1032 SwiftWriteLM10Cy
  {11,  0}, // #1033 SwiftWriteLM11Cy
  {12,  0}, // #1034 SwiftWriteLM12Cy
  {13,  0}, // #1035 SwiftWriteLM13Cy
  { 2,  0}, // #1036 SwiftWriteP1TwoCycle
  { 1,  0}, // #1037 SwiftWriteLDMAddrWB
  { 3,  0}, // #1038 SwiftWriteLM3Cy
  { 4,  0}, // #1039 SwiftWriteLM4Cy
  { 5,  0}, // #1040 SwiftWriteLM5Cy
  { 6,  0}, // #1041 SwiftWriteLM6Cy
  { 7,  0}, // #1042 SwiftWriteLM7Cy
  { 8,  0}, // #1043 SwiftWriteLM8Cy
  { 9,  0}, // #1044 SwiftWriteLM9Cy
  {10,  0}, // #1045 SwiftWriteLM10Cy
  {11,  0}, // #1046 SwiftWriteLM11Cy
  {12,  0}, // #1047 SwiftWriteLM12Cy
  {13,  0}, // #1048 SwiftWriteLM13Cy
  {14,  0}, // #1049 SwiftWriteLM14Cy
  { 2,  0}, // #1050 SwiftWriteP1TwoCycle
  { 1,  0}, // #1051 SwiftWriteLDMAddrWB
  { 3,  0}, // #1052 SwiftWriteLM3Cy
  { 4,  0}, // #1053 SwiftWriteLM4Cy
  { 5,  0}, // #1054 SwiftWriteLM5Cy
  { 6,  0}, // #1055 SwiftWriteLM6Cy
  { 7,  0}, // #1056 SwiftWriteLM7Cy
  { 8,  0}, // #1057 SwiftWriteLM8Cy
  { 9,  0}, // #1058 SwiftWriteLM9Cy
  {10,  0}, // #1059 SwiftWriteLM10Cy
  {11,  0}, // #1060 SwiftWriteLM11Cy
  {12,  0}, // #1061 SwiftWriteLM12Cy
  {13,  0}, // #1062 SwiftWriteLM13Cy
  {14,  0}, // #1063 SwiftWriteLM14Cy
  {15,  0}, // #1064 SwiftWriteLM15Cy
  { 2,  0}, // #1065 SwiftWriteP1TwoCycle
  { 1,  0}, // #1066 SwiftWriteLDMAddrWB
  { 3,  0}, // #1067 SwiftWriteLM3Cy
  { 4,  0}, // #1068 SwiftWriteLM4Cy
  { 5,  0}, // #1069 SwiftWriteLM5Cy
  { 6,  0}, // #1070 SwiftWriteLM6Cy
  { 7,  0}, // #1071 SwiftWriteLM7Cy
  { 8,  0}, // #1072 SwiftWriteLM8Cy
  { 9,  0}, // #1073 SwiftWriteLM9Cy
  {10,  0}, // #1074 SwiftWriteLM10Cy
  {11,  0}, // #1075 SwiftWriteLM11Cy
  {12,  0}, // #1076 SwiftWriteLM12Cy
  {13,  0}, // #1077 SwiftWriteLM13Cy
  {14,  0}, // #1078 SwiftWriteLM14Cy
  {15,  0}, // #1079 SwiftWriteLM15Cy
  {16,  0}, // #1080 SwiftWriteLM16Cy
  { 2,  0}, // #1081 SwiftWriteP1TwoCycle
  { 1,  0}, // #1082 SwiftWriteLDMAddrWB
  { 3,  0}, // #1083 SwiftWriteLM3Cy
  { 4,  0}, // #1084 SwiftWriteLM4Cy
  { 5,  0}, // #1085 SwiftWriteLM5Cy
  { 6,  0}, // #1086 SwiftWriteLM6Cy
  { 7,  0}, // #1087 SwiftWriteLM7Cy
  { 8,  0}, // #1088 SwiftWriteLM8Cy
  { 9,  0}, // #1089 SwiftWriteLM9Cy
  {10,  0}, // #1090 SwiftWriteLM10Cy
  {11,  0}, // #1091 SwiftWriteLM11Cy
  {12,  0}, // #1092 SwiftWriteLM12Cy
  {13,  0}, // #1093 SwiftWriteLM13Cy
  {14,  0}, // #1094 SwiftWriteLM14Cy
  {15,  0}, // #1095 SwiftWriteLM15Cy
  {16,  0}, // #1096 SwiftWriteLM16Cy
  {17,  0}, // #1097 SwiftWriteLM17Cy
  { 2,  0}, // #1098 SwiftWriteP1TwoCycle
  { 1,  0}, // #1099 SwiftWriteLDMAddrWB
  { 3,  0}, // #1100 SwiftWriteLM3Cy
  { 4,  0}, // #1101 SwiftWriteLM4Cy
  { 5,  0}, // #1102 SwiftWriteLM5Cy_SwiftWriteLM5CyNo
  { 6,  0}, // #1103 SwiftWriteLM6Cy_SwiftWriteLM6CyNo
  { 7,  0}, // #1104 SwiftWriteLM7Cy_SwiftWriteLM7CyNo
  { 8,  0}, // #1105 SwiftWriteLM8Cy_SwiftWriteLM8CyNo
  { 9,  0}, // #1106 SwiftWriteLM9Cy_SwiftWriteLM9CyNo
  {10,  0}, // #1107 SwiftWriteLM10Cy_SwiftWriteLM10CyNo
  {11,  0}, // #1108 SwiftWriteLM11Cy_SwiftWriteLM11CyNo
  {12,  0}, // #1109 SwiftWriteLM12Cy_SwiftWriteLM12CyNo
  {13,  0}, // #1110 SwiftWriteLM13Cy_SwiftWriteLM13CyNo
  {14,  0}, // #1111 SwiftWriteLM14Cy_SwiftWriteLM14CyNo
  {15,  0}, // #1112 SwiftWriteLM15Cy_SwiftWriteLM15CyNo
  {16,  0}, // #1113 SwiftWriteLM16Cy_SwiftWriteLM16CyNo
  {17,  0}, // #1114 SwiftWriteLM17Cy_SwiftWriteLM17CyNo
  {18,  0}, // #1115 SwiftWriteLM18Cy_SwiftWriteLM18CyNo
  { 2,  0}, // #1116 SwiftWriteP1TwoCycle_SwiftWriteP01OneCycle
  { 9,  0}, // #1117 SwiftWriteLM9Cy
  {10,  0}, // #1118 SwiftWriteLM10Cy
  {13,  0}, // #1119 SwiftWriteLM13CyNo
  { 1,  0}, // #1120 SwiftWriteP01OneCycle
  { 0,  0}, // #1121 SwiftVLDMPerm3
  { 4,  0}, // #1122 SwiftWriteLM4Cy
  { 4,  0}, // #1123 SwiftWriteLM4CyNo
  { 4,  0}, // #1124 SwiftWriteLM4CyNo
  { 4,  0}, // #1125 SwiftWriteLM4CyNo
  { 9,  0}, // #1126 SwiftWriteLM9Cy
  {10,  0}, // #1127 SwiftWriteLM10Cy
  {13,  0}, // #1128 SwiftWriteLM13CyNo
  {14,  0}, // #1129 SwiftWriteLM14CyNo
  {17,  0}, // #1130 SwiftWriteLM17CyNo
  { 1,  0}, // #1131 SwiftWriteP01OneCycle
  { 0,  0}, // #1132 SwiftVLDMPerm5
  { 7,  0}, // #1133 SwiftWriteLM7Cy
  { 8,  0}, // #1134 SwiftWriteLM8Cy
  {10,  0}, // #1135 SwiftWriteLM10Cy
  {14,  0}, // #1136 SwiftWriteLM14CyNo
  {14,  0}, // #1137 SwiftWriteLM14CyNo
  {14,  0}, // #1138 SwiftWriteLM14CyNo
  { 1,  0}, // #1139 SwiftWriteP01OneCycle
  { 0,  0}, // #1140 SwiftVLDMPerm5
  { 9,  0}, // #1141 SwiftWriteLM9Cy
  {10,  0}, // #1142 SwiftWriteLM10Cy
  {13,  0}, // #1143 SwiftWriteLM13Cy
  {14,  0}, // #1144 SwiftWriteLM14CyNo
  {17,  0}, // #1145 SwiftWriteLM17CyNo
  {18,  0}, // #1146 SwiftWriteLM18CyNo
  {21,  0}, // #1147 SwiftWriteLM21CyNo
  { 1,  0}, // #1148 SwiftWriteP01OneCycle
  { 0,  0}, // #1149 SwiftVLDMPerm7
  { 7,  0}, // #1150 SwiftWriteLM7Cy
  { 8,  0}, // #1151 SwiftWriteLM8Cy
  {13,  0}, // #1152 SwiftWriteLM13Cy
  {13,  0}, // #1153 SwiftWriteLM13CyNo
  {13,  0}, // #1154 SwiftWriteLM13CyNo
  {13,  0}, // #1155 SwiftWriteLM13CyNo
  {13,  0}, // #1156 SwiftWriteLM13CyNo
  {13,  0}, // #1157 SwiftWriteLM13CyNo
  { 1,  0}, // #1158 SwiftWriteP01OneCycle
  { 0,  0}, // #1159 SwiftVLDMPerm2
  { 9,  0}, // #1160 SwiftWriteLM9Cy
  {10,  0}, // #1161 SwiftWriteLM10Cy
  {13,  0}, // #1162 SwiftWriteLM13Cy
  {14,  0}, // #1163 SwiftWriteLM14CyNo
  {17,  0}, // #1164 SwiftWriteLM17CyNo
  {18,  0}, // #1165 SwiftWriteLM18CyNo
  {21,  0}, // #1166 SwiftWriteLM21CyNo
  {22,  0}, // #1167 SwiftWriteLM22CyNo
  {25,  0}, // #1168 SwiftWriteLM25CyNo
  { 1,  0}, // #1169 SwiftWriteP01OneCycle
  { 0,  0}, // #1170 SwiftVLDMPerm9
  { 7,  0}, // #1171 SwiftWriteLM7Cy
  { 8,  0}, // #1172 SwiftWriteLM8Cy
  {10,  0}, // #1173 SwiftWriteLM10Cy
  {14,  0}, // #1174 SwiftWriteLM14Cy
  {14,  0}, // #1175 SwiftWriteLM14CyNo
  {14,  0}, // #1176 SwiftWriteLM14CyNo
  {14,  0}, // #1177 SwiftWriteLM14CyNo
  {14,  0}, // #1178 SwiftWriteLM14CyNo
  {14,  0}, // #1179 SwiftWriteLM14CyNo
  {14,  0}, // #1180 SwiftWriteLM14CyNo
  { 1,  0}, // #1181 SwiftWriteP01OneCycle
  { 0,  0}, // #1182 SwiftVLDMPerm5
  { 9,  0}, // #1183 SwiftWriteLM9Cy
  {10,  0}, // #1184 SwiftWriteLM10Cy
  {13,  0}, // #1185 SwiftWriteLM13Cy
  {14,  0}, // #1186 SwiftWriteLM14CyNo
  {17,  0}, // #1187 SwiftWriteLM17CyNo
  {18,  0}, // #1188 SwiftWriteLM18CyNo
  {21,  0}, // #1189 SwiftWriteLM21CyNo
  {22,  0}, // #1190 SwiftWriteLM22CyNo
  {21,  0}, // #1191 SwiftWriteLM21CyNo
  {22,  0}, // #1192 SwiftWriteLM22CyNo
  {25,  0}, // #1193 SwiftWriteLM25CyNo
  { 1,  0}, // #1194 SwiftWriteP01OneCycle
  { 0,  0}, // #1195 SwiftVLDMPerm9
  { 7,  0}, // #1196 SwiftWriteLM7Cy
  { 8,  0}, // #1197 SwiftWriteLM8Cy
  {11,  0}, // #1198 SwiftWriteLM11Cy
  {11,  0}, // #1199 SwiftWriteLM11Cy
  {11,  0}, // #1200 SwiftWriteLM11CyNo
  {11,  0}, // #1201 SwiftWriteLM11CyNo
  {11,  0}, // #1202 SwiftWriteLM11CyNo
  {11,  0}, // #1203 SwiftWriteLM11CyNo
  {11,  0}, // #1204 SwiftWriteLM11CyNo
  {11,  0}, // #1205 SwiftWriteLM11CyNo
  {11,  0}, // #1206 SwiftWriteLM11CyNo
  {11,  0}, // #1207 SwiftWriteLM11CyNo
  { 1,  0}, // #1208 SwiftWriteP01OneCycle
  { 0,  0}, // #1209 SwiftVLDMPerm3
  { 9,  0}, // #1210 SwiftWriteLM9Cy
  {10,  0}, // #1211 SwiftWriteLM10Cy
  {13,  0}, // #1212 SwiftWriteLM13Cy
  {14,  0}, // #1213 SwiftWriteLM14CyNo
  {17,  0}, // #1214 SwiftWriteLM17CyNo
  {18,  0}, // #1215 SwiftWriteLM18CyNo
  {21,  0}, // #1216 SwiftWriteLM21CyNo
  {22,  0}, // #1217 SwiftWriteLM22CyNo
  {21,  0}, // #1218 SwiftWriteLM21CyNo
  {22,  0}, // #1219 SwiftWriteLM22CyNo
  {21,  0}, // #1220 SwiftWriteLM21CyNo
  {22,  0}, // #1221 SwiftWriteLM22CyNo
  {25,  0}, // #1222 SwiftWriteLM25CyNo
  { 1,  0}, // #1223 SwiftWriteP01OneCycle
  { 0,  0}, // #1224 SwiftVLDMPerm9
  { 7,  0}, // #1225 SwiftWriteLM7Cy
  { 8,  0}, // #1226 SwiftWriteLM8Cy
  {10,  0}, // #1227 SwiftWriteLM10Cy
  {14,  0}, // #1228 SwiftWriteLM14Cy
  {14,  0}, // #1229 SwiftWriteLM14Cy
  {14,  0}, // #1230 SwiftWriteLM14CyNo
  {14,  0}, // #1231 SwiftWriteLM14CyNo
  {14,  0}, // #1232 SwiftWriteLM14CyNo
  {14,  0}, // #1233 SwiftWriteLM14CyNo
  {14,  0}, // #1234 SwiftWriteLM14CyNo
  {14,  0}, // #1235 SwiftWriteLM14CyNo
  {14,  0}, // #1236 SwiftWriteLM14CyNo
  { 1,  0}, // #1237 SwiftWriteP01OneCycle
  { 0,  0}, // #1238 SwiftVLDMPerm7
  { 9,  0}, // #1239 SwiftWriteLM9Cy
  {10,  0}, // #1240 SwiftWriteLM10Cy
  {13,  0}, // #1241 SwiftWriteLM13Cy
  {14,  0}, // #1242 SwiftWriteLM14Cy
  {17,  0}, // #1243 SwiftWriteLM17Cy
  {18,  0}, // #1244 SwiftWriteLM18CyNo
  {21,  0}, // #1245 SwiftWriteLM21CyNo
  {22,  0}, // #1246 SwiftWriteLM22CyNo
  {21,  0}, // #1247 SwiftWriteLM21CyNo
  {22,  0}, // #1248 SwiftWriteLM22CyNo
  {21,  0}, // #1249 SwiftWriteLM21CyNo
  {22,  0}, // #1250 SwiftWriteLM22CyNo
  {21,  0}, // #1251 SwiftWriteLM21CyNo
  {22,  0}, // #1252 SwiftWriteLM22CyNo
  {25,  0}, // #1253 SwiftWriteLM25CyNo
  { 1,  0}, // #1254 SwiftWriteP01OneCycle
  { 0,  0}, // #1255 SwiftVLDMPerm9
  { 7,  0}, // #1256 SwiftWriteLM7Cy
  {10,  0}, // #1257 SwiftWriteLM10Cy
  {11,  0}, // #1258 SwiftWriteLM11Cy
  {14,  0}, // #1259 SwiftWriteLM14Cy
  {15,  0}, // #1260 SwiftWriteLM15Cy
  {18,  0}, // #1261 SwiftWriteLM18CyNo
  {19,  0}, // #1262 SwiftWriteLM19CyNo
  {22,  0}, // #1263 SwiftWriteLM22CyNo
  {19,  0}, // #1264 SwiftWriteLM19CyNo
  {22,  0}, // #1265 SwiftWriteLM22CyNo
  {19,  0}, // #1266 SwiftWriteLM19CyNo
  {22,  0}, // #1267 SwiftWriteLM22CyNo
  {19,  0}, // #1268 SwiftWriteLM19CyNo
  {22,  0}, // #1269 SwiftWriteLM22CyNo
  {19,  0}, // #1270 SwiftWriteLM19CyNo
  {22,  0}, // #1271 SwiftWriteLM22CyNo
  { 1,  0}, // #1272 SwiftWriteP01OneCycle
  { 0,  0}, // #1273 SwiftVLDMPerm4
  { 7,  0}, // #1274 SwiftWriteLM7Cy
  { 8,  0}, // #1275 SwiftWriteLM8Cy
  {13,  0}, // #1276 SwiftWriteLM13Cy
  {13,  0}, // #1277 SwiftWriteLM13CyNo
  {13,  0}, // #1278 SwiftWriteLM13CyNo
  {13,  0}, // #1279 SwiftWriteLM13CyNo
  {13,  0}, // #1280 SwiftWriteLM13CyNo
  {13,  0}, // #1281 SwiftWriteLM13CyNo
  {13,  0}, // #1282 SwiftWriteLM13CyNo
  {13,  0}, // #1283 SwiftWriteLM13CyNo
  {13,  0}, // #1284 SwiftWriteLM13CyNo
  {13,  0}, // #1285 SwiftWriteLM13CyNo
  {13,  0}, // #1286 SwiftWriteLM13CyNo
  {13,  0}, // #1287 SwiftWriteLM13CyNo
  {13,  0}, // #1288 SwiftWriteLM13CyNo
  {13,  0}, // #1289 SwiftWriteLM13CyNo
  {13,  0}, // #1290 SwiftWriteLM13CyNo
  {13,  0}, // #1291 SwiftWriteLM13CyNo
  {13,  0}, // #1292 SwiftWriteLM13CyNo
  {13,  0}, // #1293 SwiftWriteLM13CyNo
  {13,  0}, // #1294 SwiftWriteLM13CyNo
  {13,  0}, // #1295 SwiftWriteLM13CyNo
  {13,  0}, // #1296 SwiftWriteLM13CyNo
  {13,  0}, // #1297 SwiftWriteLM13CyNo
  {13,  0}, // #1298 SwiftWriteLM13CyNo
  {13,  0}, // #1299 SwiftWriteLM13CyNo
  {13,  0}, // #1300 SwiftWriteLM13CyNo
  {13,  0}, // #1301 SwiftWriteLM13CyNo
  {13,  0}, // #1302 SwiftWriteLM13CyNo
  {13,  0}, // #1303 SwiftWriteLM13CyNo
  {13,  0}, // #1304 SwiftWriteLM13CyNo
  {13,  0}, // #1305 SwiftWriteLM13CyNo
  { 1,  0}, // #1306 SwiftWriteP01OneCycle
  { 0,  0}, // #1307 SwiftVLDMPerm2
  { 2,  0}, // #1308 SwiftWriteP01OneCycle
  { 4,  0}, // #1309 SwiftWriteLM4Cy
  { 4,  0}, // #1310 SwiftWriteLM4CyNo
  { 2,  0}, // #1311 SwiftWriteP01OneCycle
  { 4,  0}, // #1312 SwiftWriteLM4Cy
  { 4,  0}, // #1313 SwiftWriteLM4CyNo
  { 4,  0}, // #1314 SwiftWriteLM4CyNo
  { 4,  0}, // #1315 SwiftWriteLM4CyNo
  { 2,  0}, // #1316 SwiftWriteP01OneCycle
  { 9,  0}, // #1317 SwiftWriteLM9Cy
  {10,  0}, // #1318 SwiftWriteLM10Cy
  {13,  0}, // #1319 SwiftWriteLM13CyNo
  {14,  0}, // #1320 SwiftWriteLM14CyNo
  {17,  0}, // #1321 SwiftWriteLM17CyNo
  { 1,  0}, // #1322 SwiftWriteP01OneCycle
  { 0,  0}, // #1323 SwiftVLDMPerm5
  { 2,  0}, // #1324 SwiftWriteP01OneCycle
  { 7,  0}, // #1325 SwiftWriteLM7Cy
  { 8,  0}, // #1326 SwiftWriteLM8Cy
  {10,  0}, // #1327 SwiftWriteLM10Cy
  {14,  0}, // #1328 SwiftWriteLM14CyNo
  {14,  0}, // #1329 SwiftWriteLM14CyNo
  {14,  0}, // #1330 SwiftWriteLM14CyNo
  { 1,  0}, // #1331 SwiftWriteP01OneCycle
  { 0,  0}, // #1332 SwiftVLDMPerm5
  { 2,  0}, // #1333 SwiftWriteP01OneCycle
  { 9,  0}, // #1334 SwiftWriteLM9Cy
  {10,  0}, // #1335 SwiftWriteLM10Cy
  {13,  0}, // #1336 SwiftWriteLM13Cy
  {14,  0}, // #1337 SwiftWriteLM14CyNo
  {17,  0}, // #1338 SwiftWriteLM17CyNo
  {18,  0}, // #1339 SwiftWriteLM18CyNo
  {21,  0}, // #1340 SwiftWriteLM21CyNo
  { 1,  0}, // #1341 SwiftWriteP01OneCycle
  { 0,  0}, // #1342 SwiftVLDMPerm7
  { 2,  0}, // #1343 SwiftWriteP01OneCycle
  { 7,  0}, // #1344 SwiftWriteLM7Cy
  { 8,  0}, // #1345 SwiftWriteLM8Cy
  {13,  0}, // #1346 SwiftWriteLM13Cy
  {13,  0}, // #1347 SwiftWriteLM13CyNo
  {13,  0}, // #1348 SwiftWriteLM13CyNo
  {13,  0}, // #1349 SwiftWriteLM13CyNo
  {13,  0}, // #1350 SwiftWriteLM13CyNo
  {13,  0}, // #1351 SwiftWriteLM13CyNo
  { 1,  0}, // #1352 SwiftWriteP01OneCycle
  { 0,  0}, // #1353 SwiftVLDMPerm2
  { 2,  0}, // #1354 SwiftWriteP01OneCycle
  { 9,  0}, // #1355 SwiftWriteLM9Cy
  {10,  0}, // #1356 SwiftWriteLM10Cy
  {13,  0}, // #1357 SwiftWriteLM13Cy
  {14,  0}, // #1358 SwiftWriteLM14CyNo
  {17,  0}, // #1359 SwiftWriteLM17CyNo
  {18,  0}, // #1360 SwiftWriteLM18CyNo
  {21,  0}, // #1361 SwiftWriteLM21CyNo
  {22,  0}, // #1362 SwiftWriteLM22CyNo
  {25,  0}, // #1363 SwiftWriteLM25CyNo
  { 1,  0}, // #1364 SwiftWriteP01OneCycle
  { 0,  0}, // #1365 SwiftVLDMPerm9
  { 2,  0}, // #1366 SwiftWriteP01OneCycle
  { 7,  0}, // #1367 SwiftWriteLM7Cy
  { 8,  0}, // #1368 SwiftWriteLM8Cy
  {10,  0}, // #1369 SwiftWriteLM10Cy
  {14,  0}, // #1370 SwiftWriteLM14Cy
  {14,  0}, // #1371 SwiftWriteLM14CyNo
  {14,  0}, // #1372 SwiftWriteLM14CyNo
  {14,  0}, // #1373 SwiftWriteLM14CyNo
  {14,  0}, // #1374 SwiftWriteLM14CyNo
  {14,  0}, // #1375 SwiftWriteLM14CyNo
  {14,  0}, // #1376 SwiftWriteLM14CyNo
  { 1,  0}, // #1377 SwiftWriteP01OneCycle
  { 0,  0}, // #1378 SwiftVLDMPerm5
  { 2,  0}, // #1379 SwiftWriteP01OneCycle
  { 9,  0}, // #1380 SwiftWriteLM9Cy
  {10,  0}, // #1381 SwiftWriteLM10Cy
  {13,  0}, // #1382 SwiftWriteLM13Cy
  {14,  0}, // #1383 SwiftWriteLM14CyNo
  {17,  0}, // #1384 SwiftWriteLM17CyNo
  {18,  0}, // #1385 SwiftWriteLM18CyNo
  {21,  0}, // #1386 SwiftWriteLM21CyNo
  {22,  0}, // #1387 SwiftWriteLM22CyNo
  {21,  0}, // #1388 SwiftWriteLM21CyNo
  {22,  0}, // #1389 SwiftWriteLM22CyNo
  {25,  0}, // #1390 SwiftWriteLM25CyNo
  { 1,  0}, // #1391 SwiftWriteP01OneCycle
  { 0,  0}, // #1392 SwiftVLDMPerm9
  { 2,  0}, // #1393 SwiftWriteP01OneCycle
  { 7,  0}, // #1394 SwiftWriteLM7Cy
  { 8,  0}, // #1395 SwiftWriteLM8Cy
  {11,  0}, // #1396 SwiftWriteLM11Cy
  {11,  0}, // #1397 SwiftWriteLM11Cy
  {11,  0}, // #1398 SwiftWriteLM11CyNo
  {11,  0}, // #1399 SwiftWriteLM11CyNo
  {11,  0}, // #1400 SwiftWriteLM11CyNo
  {11,  0}, // #1401 SwiftWriteLM11CyNo
  {11,  0}, // #1402 SwiftWriteLM11CyNo
  {11,  0}, // #1403 SwiftWriteLM11CyNo
  {11,  0}, // #1404 SwiftWriteLM11CyNo
  {11,  0}, // #1405 SwiftWriteLM11CyNo
  { 1,  0}, // #1406 SwiftWriteP01OneCycle
  { 0,  0}, // #1407 SwiftVLDMPerm3
  { 2,  0}, // #1408 SwiftWriteP01OneCycle
  { 9,  0}, // #1409 SwiftWriteLM9Cy
  {10,  0}, // #1410 SwiftWriteLM10Cy
  {13,  0}, // #1411 SwiftWriteLM13Cy
  {14,  0}, // #1412 SwiftWriteLM14CyNo
  {17,  0}, // #1413 SwiftWriteLM17CyNo
  {18,  0}, // #1414 SwiftWriteLM18CyNo
  {21,  0}, // #1415 SwiftWriteLM21CyNo
  {22,  0}, // #1416 SwiftWriteLM22CyNo
  {21,  0}, // #1417 SwiftWriteLM21CyNo
  {22,  0}, // #1418 SwiftWriteLM22CyNo
  {21,  0}, // #1419 SwiftWriteLM21CyNo
  {22,  0}, // #1420 SwiftWriteLM22CyNo
  {25,  0}, // #1421 SwiftWriteLM25CyNo
  { 1,  0}, // #1422 SwiftWriteP01OneCycle
  { 0,  0}, // #1423 SwiftVLDMPerm9
  { 2,  0}, // #1424 SwiftWriteP01OneCycle
  { 7,  0}, // #1425 SwiftWriteLM7Cy
  { 8,  0}, // #1426 SwiftWriteLM8Cy
  {10,  0}, // #1427 SwiftWriteLM10Cy
  {14,  0}, // #1428 SwiftWriteLM14Cy
  {14,  0}, // #1429 SwiftWriteLM14Cy
  {14,  0}, // #1430 SwiftWriteLM14CyNo
  {14,  0}, // #1431 SwiftWriteLM14CyNo
  {14,  0}, // #1432 SwiftWriteLM14CyNo
  {14,  0}, // #1433 SwiftWriteLM14CyNo
  {14,  0}, // #1434 SwiftWriteLM14CyNo
  {14,  0}, // #1435 SwiftWriteLM14CyNo
  {14,  0}, // #1436 SwiftWriteLM14CyNo
  { 1,  0}, // #1437 SwiftWriteP01OneCycle
  { 0,  0}, // #1438 SwiftVLDMPerm7
  { 2,  0}, // #1439 SwiftWriteP01OneCycle
  { 9,  0}, // #1440 SwiftWriteLM9Cy
  {10,  0}, // #1441 SwiftWriteLM10Cy
  {13,  0}, // #1442 SwiftWriteLM13Cy
  {14,  0}, // #1443 SwiftWriteLM14Cy
  {17,  0}, // #1444 SwiftWriteLM17Cy
  {18,  0}, // #1445 SwiftWriteLM18CyNo
  {21,  0}, // #1446 SwiftWriteLM21CyNo
  {22,  0}, // #1447 SwiftWriteLM22CyNo
  {21,  0}, // #1448 SwiftWriteLM21CyNo
  {22,  0}, // #1449 SwiftWriteLM22CyNo
  {21,  0}, // #1450 SwiftWriteLM21CyNo
  {22,  0}, // #1451 SwiftWriteLM22CyNo
  {21,  0}, // #1452 SwiftWriteLM21CyNo
  {22,  0}, // #1453 SwiftWriteLM22CyNo
  {25,  0}, // #1454 SwiftWriteLM25CyNo
  { 1,  0}, // #1455 SwiftWriteP01OneCycle
  { 0,  0}, // #1456 SwiftVLDMPerm9
  { 2,  0}, // #1457 SwiftWriteP01OneCycle
  { 7,  0}, // #1458 SwiftWriteLM7Cy
  {10,  0}, // #1459 SwiftWriteLM10Cy
  {11,  0}, // #1460 SwiftWriteLM11Cy
  {14,  0}, // #1461 SwiftWriteLM14Cy
  {15,  0}, // #1462 SwiftWriteLM15Cy
  {18,  0}, // #1463 SwiftWriteLM18CyNo
  {19,  0}, // #1464 SwiftWriteLM19CyNo
  {22,  0}, // #1465 SwiftWriteLM22CyNo
  {19,  0}, // #1466 SwiftWriteLM19CyNo
  {22,  0}, // #1467 SwiftWriteLM22CyNo
  {19,  0}, // #1468 SwiftWriteLM19CyNo
  {22,  0}, // #1469 SwiftWriteLM22CyNo
  {19,  0}, // #1470 SwiftWriteLM19CyNo
  {22,  0}, // #1471 SwiftWriteLM22CyNo
  {19,  0}, // #1472 SwiftWriteLM19CyNo
  {22,  0}, // #1473 SwiftWriteLM22CyNo
  { 1,  0}, // #1474 SwiftWriteP01OneCycle
  { 0,  0}, // #1475 SwiftVLDMPerm4
  { 2,  0}, // #1476 SwiftWriteP01OneCycle
  { 7,  0}, // #1477 SwiftWriteLM7Cy
  { 8,  0}, // #1478 SwiftWriteLM8Cy
  {13,  0}, // #1479 SwiftWriteLM13Cy
  {13,  0}, // #1480 SwiftWriteLM13CyNo
  {13,  0}, // #1481 SwiftWriteLM13CyNo
  {13,  0}, // #1482 SwiftWriteLM13CyNo
  {13,  0}, // #1483 SwiftWriteLM13CyNo
  {13,  0}, // #1484 SwiftWriteLM13CyNo
  {13,  0}, // #1485 SwiftWriteLM13CyNo
  {13,  0}, // #1486 SwiftWriteLM13CyNo
  {13,  0}, // #1487 SwiftWriteLM13CyNo
  {13,  0}, // #1488 SwiftWriteLM13CyNo
  {13,  0}, // #1489 SwiftWriteLM13CyNo
  {13,  0}, // #1490 SwiftWriteLM13CyNo
  {13,  0}, // #1491 SwiftWriteLM13CyNo
  {13,  0}, // #1492 SwiftWriteLM13CyNo
  {13,  0}, // #1493 SwiftWriteLM13CyNo
  {13,  0}, // #1494 SwiftWriteLM13CyNo
  {13,  0}, // #1495 SwiftWriteLM13CyNo
  {13,  0}, // #1496 SwiftWriteLM13CyNo
  {13,  0}, // #1497 SwiftWriteLM13CyNo
  {13,  0}, // #1498 SwiftWriteLM13CyNo
  {13,  0}, // #1499 SwiftWriteLM13CyNo
  {13,  0}, // #1500 SwiftWriteLM13CyNo
  {13,  0}, // #1501 SwiftWriteLM13CyNo
  {13,  0}, // #1502 SwiftWriteLM13CyNo
  {13,  0}, // #1503 SwiftWriteLM13CyNo
  {13,  0}, // #1504 SwiftWriteLM13CyNo
  {13,  0}, // #1505 SwiftWriteLM13CyNo
  {13,  0}, // #1506 SwiftWriteLM13CyNo
  {13,  0}, // #1507 SwiftWriteLM13CyNo
  {13,  0}, // #1508 SwiftWriteLM13CyNo
  { 1,  0}, // #1509 SwiftWriteP01OneCycle
  { 0,  0} // #1510 SwiftVLDMPerm2
}; // ARMWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry ARMReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
  {0, 40,  1}, // #1
  {0, 41,  1}, // #2
  {0, 42,  1}, // #3
  {0, 43,  1}, // #4
  {0, 44,  1}, // #5
  {0, 45,  1}, // #6
  {0, 46,  1}, // #7
  {0, 47,  1}, // #8
  {0, 48,  1}, // #9
  {0, 49,  1}, // #10
  {0, 50,  1}, // #11
  {0, 51,  1}, // #12
  {0, 52,  1}, // #13
  {0, 53,  1}, // #14
  {0, 54,  1}, // #15
  {0, 55,  1}, // #16
  {0, 56,  1}, // #17
  {0, 57,  1}, // #18
  {0, 83,  1}, // #19
  {0, 84,  1}, // #20
  {0, 107,  1}, // #21
  {0, 40,  1}, // #22
  {0, 41,  1}, // #23
  {0, 42,  1}, // #24
  {0, 43,  1}, // #25
  {0, 44,  1}, // #26
  {0, 45,  1}, // #27
  {0, 46,  1}, // #28
  {0, 47,  1}, // #29
  {0, 48,  1}, // #30
  {0, 49,  1}, // #31
  {0, 50,  1}, // #32
  {0, 51,  1}, // #33
  {0, 52,  1}, // #34
  {0, 53,  1}, // #35
  {0, 54,  1}, // #36
  {0, 55,  1}, // #37
  {0, 56,  1}, // #38
  {0, 57,  1}, // #39
  {0, 83,  1}, // #40
  {0, 84,  1}, // #41
  {0, 107,  1}, // #42
  {1, 40,  1}, // #43
  {1, 41,  1}, // #44
  {1, 42,  1}, // #45
  {1, 43,  1}, // #46
  {1, 44,  1}, // #47
  {1, 45,  1}, // #48
  {1, 46,  1}, // #49
  {1, 47,  1}, // #50
  {1, 48,  1}, // #51
  {1, 49,  1}, // #52
  {1, 50,  1}, // #53
  {1, 51,  1}, // #54
  {1, 52,  1}, // #55
  {1, 53,  1}, // #56
  {1, 54,  1}, // #57
  {1, 55,  1}, // #58
  {1, 56,  1}, // #59
  {1, 57,  1}, // #60
  {1, 83,  1}, // #61
  {1, 84,  1}, // #62
  {1, 107,  1}, // #63
  {0,  0,  2}, // #64
  {1,  0,  1}, // #65
  {0,  0,  1}, // #66
  {0,  0,  1}, // #67
  {1,  0,  1}, // #68
  {0,  0,  2}, // #69
  {1,  0,  1}, // #70
  {2,  0,  1}, // #71
  {0,  0,  1}, // #72
  {1,  0,  1}, // #73
  {2,  0,  2}, // #74
  {0,  0,  1}, // #75
  {1,  0,  1}, // #76
  {2,  0,  2}, // #77
  {3,  0,  2}, // #78
  {1,  0,  1}, // #79
  {2,  0,  1}, // #80
  {3,  0,  2}, // #81
  {1,  0,  1}, // #82
  {2,  0,  1}, // #83
  {3,  0,  2}, // #84
  {4,  0,  2}, // #85
  {0,  0,  0}, // #86
  {1,  0,  0}, // #87
  {0,  0,  0}, // #88
  {1,  0,  0}, // #89
  {2,  0,  4}, // #90
  {3,  0,  3}, // #91
  {0,  0,  0}, // #92
  {1,  0,  0}, // #93
  {2,  0,  2}, // #94
  {0,  0,  0}, // #95
  {1,  0,  0}, // #96
  {2,  0,  0} // #97
}; // ARMReadAdvanceTable

// {Name, NumMicroOps, BeginGroup, EndGroup, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc CortexA9ModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  65535, 0, 0,  0, 0,  0, 0,  0, 0},
  {DBGFIELD("IIC_iALUi_WriteALU_ReadALU") 1, 0, 0,  1, 1,  1, 1,  1, 21}, // #1
  {DBGFIELD("IIC_iALUr_WriteALU_ReadALU_ReadALU") 1, 0, 0,  1, 1,  1, 1, 22, 42}, // #2
  {DBGFIELD("IIC_iALUsr_WriteALUsi_ReadALU") 1, 0, 0,  1, 1,  2, 1,  1, 21}, // #3
  {DBGFIELD("IIC_iALUsr_WriteALUsr_ReadALUsr") 1, 0, 0,  1, 1,  3, 1,  1, 21}, // #4
  {DBGFIELD("IIC_iALUsr_WriteALUSsr_ReadALUsr") 1, 0, 0,  1, 1,  3, 1,  1, 21}, // #5
  {DBGFIELD("IIC_iBITi_WriteALU_ReadALU") 1, 0, 0,  1, 1,  1, 1,  1, 21}, // #6
  {DBGFIELD("IIC_iBITr_WriteALU_ReadALU_ReadALU") 1, 0, 0,  1, 1,  1, 1, 22, 42}, // #7
  {DBGFIELD("IIC_iBITsr_WriteALUsi_ReadALU") 1, 0, 0,  1, 1,  2, 1,  1, 21}, // #8
  {DBGFIELD("IIC_iBITsr_WriteALUsr_ReadALUsr") 1, 0, 0,  1, 1,  3, 1,  1, 21}, // #9
  {DBGFIELD("IIC_Br_WriteBr")     1, 0, 0,  2, 1,  1, 1,  0, 0}, // #10
  {DBGFIELD("IIC_iUNAsi")         1, 0, 0,  1, 1,  2, 1,  0, 0}, // #11
  {DBGFIELD("IIC_Br_WriteBrL")    1, 0, 0,  2, 1,  1, 1,  0, 0}, // #12
  {DBGFIELD("WriteBrL")           1, 0, 0,  2, 1,  1, 1,  0, 0}, // #13
  {DBGFIELD("IIC_Br_WriteBrTbl")  1, 0, 0,  2, 1,  1, 1,  0, 0}, // #14
  {DBGFIELD("WriteBr")            1, 0, 0,  2, 1,  1, 1,  0, 0}, // #15
  {DBGFIELD("IIC_iUNAr_WriteALU") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #16
  {DBGFIELD("IIC_iCMPi_WriteCMP_ReadALU") 1, 0, 0,  1, 1,  1, 1,  1, 21}, // #17
  {DBGFIELD("IIC_iCMPr_WriteCMP_ReadALU_ReadALU") 1, 0, 0,  1, 1,  1, 1, 22, 42}, // #18
  {DBGFIELD("IIC_iCMPsr_WriteCMPsi_ReadALU") 1, 0, 0,  1, 1,  1, 1,  1, 21}, // #19
  {DBGFIELD("IIC_iCMPsr_WriteCMPsr_ReadALU") 1, 0, 0,  1, 1,  1, 1,  1, 21}, // #20
  {DBGFIELD("IIC_fpUNA64")        1, 0, 0,  3, 2,  1, 1,  0, 0}, // #21
  {DBGFIELD("IIC_fpUNA32")        1, 0, 0,  3, 2,  1, 1,  0, 0}, // #22
  {DBGFIELD("IIC_fpSTAT")         1, 0, 0,  3, 2,  1, 1,  0, 0}, // #23
  {DBGFIELD("IIC_iLoad_m")        65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #24
  {DBGFIELD("IIC_iLoad_mu")       65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #25
  {DBGFIELD("IIC_iLoad_mBr")      65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #26
  {DBGFIELD("IIC_iLoad_bh_ru")    1, 0, 0,  5, 2,  4, 2,  0, 0}, // #27
  {DBGFIELD("IIC_iLoad_bh_iu")    1, 0, 0,  5, 2,  4, 2,  0, 0}, // #28
  {DBGFIELD("IIC_iLoad_bh_r")     1, 0, 0,  5, 2,  4, 2,  0, 0}, // #29
  {DBGFIELD("IIC_iLoad_bh_si")    1, 0, 0,  5, 2,  6, 2,  0, 0}, // #30
  {DBGFIELD("IIC_iLoad_d_r")      1, 0, 0,  7, 2,  8, 3,  0, 0}, // #31
  {DBGFIELD("IIC_iLoad_d_ru")     1, 0, 0,  7, 2,  8, 3,  0, 0}, // #32
  {DBGFIELD("IIC_iLoad_ru")       1, 0, 0,  7, 2, 11, 2,  0, 0}, // #33
  {DBGFIELD("IIC_iLoad_iu")       1, 0, 0,  7, 2, 11, 2,  0, 0}, // #34
  {DBGFIELD("IIC_iLoad_r")        1, 0, 0,  7, 2, 11, 2,  0, 0}, // #35
  {DBGFIELD("IIC_iLoad_si")       1, 0, 0,  7, 2, 13, 2,  0, 0}, // #36
  {DBGFIELD("IIC_iMAC32")         1, 0, 0,  9, 2, 15, 2,  0, 0}, // #37
  {DBGFIELD("IIC_iCMOVi_WriteALU") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #38
  {DBGFIELD("IIC_iMOVi_WriteALU") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #39
  {DBGFIELD("IIC_iCMOVix2")       2, 0, 0, 11, 1,  2, 1,  0, 0}, // #40
  {DBGFIELD("IIC_iCMOVr_WriteALU") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #41
  {DBGFIELD("IIC_iCMOVsr_WriteALU") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #42
  {DBGFIELD("IIC_iMOVix2")        2, 0, 0, 11, 1,  2, 1,  0, 0}, // #43
  {DBGFIELD("IIC_iMOVix2addpc")   3, 0, 0,  9, 1,  3, 1,  0, 0}, // #44
  {DBGFIELD("IIC_iMOVix2ld")      3, 0, 0, 12, 2, 17, 1,  0, 0}, // #45
  {DBGFIELD("IIC_iMOVr_WriteALU") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #46
  {DBGFIELD("IIC_iMOVsr_WriteALU") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #47
  {DBGFIELD("IIC_iMOVsi_WriteALU") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #48
  {DBGFIELD("IIC_iMUL32")         1, 0, 0,  9, 2, 15, 2,  0, 0}, // #49
  {DBGFIELD("IIC_iMVNi_WriteALU") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #50
  {DBGFIELD("IIC_iMVNr_WriteALU") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #51
  {DBGFIELD("IIC_iMVNsr_WriteALU") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #52
  {DBGFIELD("IIC_iALUr_WriteALU_ReadALU") 1, 0, 0,  1, 1,  1, 1,  1, 21}, // #53
  {DBGFIELD("IIC_iStore_r")       1, 0, 0,  7, 2, 18, 2,  0, 0}, // #54
  {DBGFIELD("IIC_iStore_bh_r")    1, 0, 0,  5, 2, 20, 2,  0, 0}, // #55
  {DBGFIELD("IIC_iALUsi_WriteALUsi_ReadALU") 1, 0, 0,  1, 1,  2, 1,  1, 21}, // #56
  {DBGFIELD("IIC_iBITsi_WriteALUsi_ReadALU") 1, 0, 0,  1, 1,  2, 1,  1, 21}, // #57
  {DBGFIELD("IIC_Preload_WritePreLd") 1, 0, 0,  0, 0,  1, 1,  0, 0}, // #58
  {DBGFIELD("IIC_iDIV")           0, 0, 0,  0, 0,  0, 0,  0, 0}, // #59
  {DBGFIELD("IIC_iMAC16")         1, 0, 0, 14, 2, 22, 2,  0, 0}, // #60
  {DBGFIELD("IIC_iMAC64")         1, 0, 0,  9, 2, 15, 2,  0, 0}, // #61
  {DBGFIELD("IIC_iMUL16")         1, 0, 0, 14, 2, 22, 2,  0, 0}, // #62
  {DBGFIELD("IIC_iMUL64")         1, 0, 0,  9, 2, 15, 2,  0, 0}, // #63
  {DBGFIELD("IIC_iStore_m")       65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #64
  {DBGFIELD("IIC_iStore_mu")      65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #65
  {DBGFIELD("IIC_iStore_bh_ru")   1, 0, 0,  5, 2, 20, 2,  0, 0}, // #66
  {DBGFIELD("IIC_iStore_bh_iu")   1, 0, 0,  5, 2, 20, 2,  0, 0}, // #67
  {DBGFIELD("IIC_iStore_ru")      1, 0, 0,  7, 2, 18, 2,  0, 0}, // #68
  {DBGFIELD("IIC_iStore_bh_si")   1, 0, 0, 16, 2, 24, 2,  0, 0}, // #69
  {DBGFIELD("IIC_iStore_d_r")     1, 0, 0,  7, 2, 18, 2,  0, 0}, // #70
  {DBGFIELD("IIC_iStore_d_ru")    1, 0, 0,  7, 2, 18, 2,  0, 0}, // #71
  {DBGFIELD("IIC_iStore_iu")      1, 0, 0,  7, 2, 18, 2,  0, 0}, // #72
  {DBGFIELD("IIC_iStore_si")      1, 0, 0,  5, 2, 20, 2,  0, 0}, // #73
  {DBGFIELD("IIC_iEXTAr_WriteALUsr") 1, 0, 0,  1, 1,  3, 1,  0, 0}, // #74
  {DBGFIELD("IIC_iEXTr_WriteALUsi") 1, 0, 0,  1, 1,  2, 1,  0, 0}, // #75
  {DBGFIELD("IIC_iTSTi_WriteCMP_ReadALU") 1, 0, 0,  1, 1,  1, 1,  1, 21}, // #76
  {DBGFIELD("IIC_iTSTr_WriteCMP_ReadALU_ReadALU") 1, 0, 0,  1, 1,  1, 1, 22, 42}, // #77
  {DBGFIELD("IIC_iTSTsr_WriteCMPsi_ReadALU") 1, 0, 0,  1, 1,  1, 1,  1, 21}, // #78
  {DBGFIELD("IIC_iTSTsr_WriteCMPsr_ReadALU") 1, 0, 0,  1, 1,  1, 1,  1, 21}, // #79
  {DBGFIELD("WriteALU_ReadALU_ReadALU") 1, 0, 0,  1, 1,  1, 1, 22, 42}, // #80
  {DBGFIELD("IIC_VABAD")          1, 0, 0,  3, 2, 26, 1, 64, 2}, // #81
  {DBGFIELD("IIC_VABAQ")          1, 0, 0,  3, 2, 26, 1, 64, 2}, // #82
  {DBGFIELD("IIC_VSUBi4Q")        1, 0, 0,  3, 2, 15, 1, 66, 1}, // #83
  {DBGFIELD("IIC_VBIND")          1, 0, 0,  3, 2, 16, 1, 67, 2}, // #84
  {DBGFIELD("IIC_VBINQ")          1, 0, 0,  3, 2, 26, 1, 67, 2}, // #85
  {DBGFIELD("IIC_VSUBi4D")        1, 0, 0,  3, 2, 15, 1, 66, 1}, // #86
  {DBGFIELD("IIC_VUNAD")          1, 0, 0,  3, 2, 16, 1, 66, 1}, // #87
  {DBGFIELD("IIC_VUNAQ")          1, 0, 0,  3, 2, 26, 1, 66, 1}, // #88
  {DBGFIELD("IIC_VUNAiQ")         1, 0, 0,  3, 2, 15, 1, 66, 1}, // #89
  {DBGFIELD("IIC_VUNAiD")         1, 0, 0,  3, 2, 15, 1, 66, 1}, // #90
  {DBGFIELD("IIC_fpALU64")        1, 0, 0,  3, 2, 15, 1,  0, 0}, // #91
  {DBGFIELD("IIC_VBINi4D")        1, 0, 0,  3, 2, 15, 1, 67, 2}, // #92
  {DBGFIELD("IIC_VSHLiD")         1, 0, 0,  3, 2,  3, 1,  0, 0}, // #93
  {DBGFIELD("IIC_fpALU32")        1, 0, 0,  3, 2, 15, 1,  0, 0}, // #94
  {DBGFIELD("IIC_VSUBiD")         1, 0, 0,  3, 2,  3, 1, 66, 1}, // #95
  {DBGFIELD("IIC_VBINiQ")         1, 0, 0,  3, 2,  3, 1, 67, 2}, // #96
  {DBGFIELD("IIC_VBINiD")         1, 0, 0,  3, 2,  3, 1, 67, 2}, // #97
  {DBGFIELD("IIC_VMOVImm")        1, 0, 0,  3, 2,  3, 1,  0, 0}, // #98
  {DBGFIELD("IIC_VCNTiD")         1, 0, 0,  3, 2,  3, 1, 66, 1}, // #99
  {DBGFIELD("IIC_VCNTiQ")         1, 0, 0, 18, 2, 15, 1, 64, 1}, // #100
  {DBGFIELD("IIC_fpCMP64")        1, 0, 0,  3, 2,  1, 1,  0, 0}, // #101
  {DBGFIELD("IIC_fpCMP32")        1, 0, 0,  3, 2,  1, 1,  0, 0}, // #102
  {DBGFIELD("IIC_fpCVTSH")        1, 0, 0,  3, 2, 15, 1,  0, 0}, // #103
  {DBGFIELD("IIC_fpCVTHS")        1, 0, 0,  3, 2, 15, 1,  0, 0}, // #104
  {DBGFIELD("IIC_fpCVTDS")        1, 0, 0,  3, 2, 15, 1,  0, 0}, // #105
  {DBGFIELD("IIC_fpCVTSD")        1, 0, 0,  3, 2, 15, 1,  0, 0}, // #106
  {DBGFIELD("IIC_fpDIV64")        1, 0, 0,  3, 2, 27, 1,  0, 0}, // #107
  {DBGFIELD("IIC_fpDIV32")        1, 0, 0,  3, 2, 28, 1,  0, 0}, // #108
  {DBGFIELD("IIC_VMOVIS")         1, 0, 0,  3, 2,  1, 1,  0, 0}, // #109
  {DBGFIELD("IIC_VMOVD")          1, 0, 0,  3, 2,  2, 1,  0, 0}, // #110
  {DBGFIELD("IIC_VMOVQ")          1, 0, 0,  3, 2,  2, 1,  0, 0}, // #111
  {DBGFIELD("IIC_VEXTD")          1, 0, 0,  3, 2,  2, 1,  0, 0}, // #112
  {DBGFIELD("IIC_VEXTQ")          2, 0, 0, 20, 2, 22, 2, 65, 1}, // #113
  {DBGFIELD("IIC_fpFMAC64")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #114
  {DBGFIELD("IIC_fpFMAC32")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #115
  {DBGFIELD("IIC_VFMACD")         1, 0, 0,  3, 2, 29, 1, 64, 2}, // #116
  {DBGFIELD("IIC_VFMACQ")         1, 0, 0,  3, 2, 30, 1, 64, 2}, // #117
  {DBGFIELD("IIC_VMOVSI")         1, 0, 0,  3, 2,  2, 1,  0, 0}, // #118
  {DBGFIELD("IIC_VBINi4Q")        1, 0, 0,  3, 2, 15, 1, 67, 2}, // #119
  {DBGFIELD("IIC_VLD1dup")        1, 0, 0, 22, 3, 31, 2,  0, 0}, // #120
  {DBGFIELD("IIC_VLD1dupu")       1, 0, 0, 22, 3, 31, 2,  0, 0}, // #121
  {DBGFIELD("IIC_VLD1ln")         1, 0, 0, 25, 3, 33, 2,  0, 0}, // #122
  {DBGFIELD("IIC_VLD1lnu")        1, 0, 0, 25, 3, 33, 2,  0, 0}, // #123
  {DBGFIELD("IIC_VLD1")           1, 0, 0, 28, 3, 18, 2,  0, 0}, // #124
  {DBGFIELD("IIC_VLD1x4")         1, 0, 0, 31, 3, 35, 2,  0, 0}, // #125
  {DBGFIELD("IIC_VLD1x2u")        1, 0, 0, 28, 3, 18, 2,  0, 0}, // #126
  {DBGFIELD("IIC_VLD1x3")         1, 0, 0, 31, 3, 35, 2,  0, 0}, // #127
  {DBGFIELD("IIC_VLD1u")          1, 0, 0, 28, 3, 18, 2,  0, 0}, // #128
  {DBGFIELD("IIC_VLD1x2")         1, 0, 0, 28, 3, 18, 2,  0, 0}, // #129
  {DBGFIELD("IIC_VLD2dup")        1, 0, 0, 22, 3, 31, 2,  0, 0}, // #130
  {DBGFIELD("IIC_VLD2dupu")       1, 0, 0, 22, 3, 31, 2,  0, 0}, // #131
  {DBGFIELD("IIC_VLD2ln")         1, 0, 0, 25, 3, 33, 2,  0, 0}, // #132
  {DBGFIELD("IIC_VLD2lnu")        1, 0, 0, 25, 3, 33, 2,  0, 0}, // #133
  {DBGFIELD("IIC_VLD2")           1, 0, 0, 22, 3, 31, 2,  0, 0}, // #134
  {DBGFIELD("IIC_VLD2u")          1, 0, 0, 22, 3, 31, 2,  0, 0}, // #135
  {DBGFIELD("IIC_VLD2x2")         1, 0, 0, 25, 3, 33, 2,  0, 0}, // #136
  {DBGFIELD("IIC_VLD2x2u")        1, 0, 0, 25, 3, 33, 2,  0, 0}, // #137
  {DBGFIELD("IIC_VLD3dup")        1, 0, 0, 34, 3, 37, 2,  0, 0}, // #138
  {DBGFIELD("IIC_VLD3dupu")       1, 0, 0, 34, 3, 37, 2,  0, 0}, // #139
  {DBGFIELD("IIC_VLD3ln")         1, 0, 0, 37, 3, 39, 2,  0, 0}, // #140
  {DBGFIELD("IIC_VLD3lnu")        1, 0, 0, 37, 3, 39, 2,  0, 0}, // #141
  {DBGFIELD("IIC_VLD3")           1, 0, 0, 34, 3, 37, 2,  0, 0}, // #142
  {DBGFIELD("IIC_VLD3u")          1, 0, 0, 34, 3, 37, 2,  0, 0}, // #143
  {DBGFIELD("IIC_VLD4dup")        1, 0, 0, 31, 3, 35, 2,  0, 0}, // #144
  {DBGFIELD("IIC_VLD4dupu")       1, 0, 0, 31, 3, 35, 2,  0, 0}, // #145
  {DBGFIELD("IIC_VLD4ln")         1, 0, 0, 40, 3, 41, 2,  0, 0}, // #146
  {DBGFIELD("IIC_VLD4lnu")        1, 0, 0, 40, 3, 41, 2,  0, 0}, // #147
  {DBGFIELD("IIC_VLD4")           1, 0, 0, 40, 3, 41, 2,  0, 0}, // #148
  {DBGFIELD("IIC_VLD4u")          1, 0, 0, 40, 3, 41, 2,  0, 0}, // #149
  {DBGFIELD("IIC_fpLoad_mu")      65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #150
  {DBGFIELD("IIC_fpLoad_m")       65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #151
  {DBGFIELD("IIC_fpLoad64")       1, 0, 0, 28, 3, 18, 2,  0, 0}, // #152
  {DBGFIELD("IIC_fpLoad32")       1, 0, 0, 28, 3, 18, 2,  0, 0}, // #153
  {DBGFIELD("IIC_fpMAC64")        1, 0, 0,  3, 2, 29, 1,  0, 0}, // #154
  {DBGFIELD("IIC_VMACi32D")       1, 0, 0, 18, 2, 37, 1, 64, 2}, // #155
  {DBGFIELD("IIC_VMACi16D")       1, 0, 0,  3, 2, 26, 1, 69, 3}, // #156
  {DBGFIELD("IIC_fpMAC32")        1, 0, 0,  3, 2, 41, 1,  0, 0}, // #157
  {DBGFIELD("IIC_VMACD")          1, 0, 0,  3, 2, 29, 1, 64, 2}, // #158
  {DBGFIELD("IIC_VMACQ")          1, 0, 0,  3, 2, 30, 1, 64, 2}, // #159
  {DBGFIELD("IIC_VMACi32Q")       1, 0, 0, 18, 2, 29, 1, 64, 2}, // #160
  {DBGFIELD("IIC_VMACi16Q")       1, 0, 0,  3, 2, 37, 1, 69, 3}, // #161
  {DBGFIELD("IIC_fpMOVID")        1, 0, 0,  3, 2,  1, 1,  0, 0}, // #162
  {DBGFIELD("IIC_VQUNAiD")        1, 0, 0,  3, 2, 15, 1,  0, 0}, // #163
  {DBGFIELD("IIC_VMOVN")          1, 0, 0,  3, 2,  3, 1,  0, 0}, // #164
  {DBGFIELD("IIC_fpMOVDI")        2, 0, 0, 20, 2, 18, 2,  0, 0}, // #165
  {DBGFIELD("IIC_fpMOVSI")        1, 0, 0,  3, 2,  1, 1,  0, 0}, // #166
  {DBGFIELD("IIC_fpMOVIS")        1, 0, 0,  3, 2,  1, 1,  0, 0}, // #167
  {DBGFIELD("IIC_fpMUL64")        1, 0, 0,  3, 2, 26, 1,  0, 0}, // #168
  {DBGFIELD("IIC_VMULi16D")       1, 0, 0,  3, 2, 26, 1, 67, 2}, // #169
  {DBGFIELD("IIC_VMULi32D")       1, 0, 0, 18, 2, 37, 1, 66, 1}, // #170
  {DBGFIELD("IIC_fpMUL32")        1, 0, 0,  3, 2, 16, 1,  0, 0}, // #171
  {DBGFIELD("IIC_VFMULD")         1, 0, 0,  3, 2, 16, 1, 66, 1}, // #172
  {DBGFIELD("IIC_VFMULQ")         1, 0, 0,  3, 2, 26, 1, 66, 1}, // #173
  {DBGFIELD("IIC_VMULi16Q")       1, 0, 0,  3, 2, 37, 1, 67, 2}, // #174
  {DBGFIELD("IIC_VMULi32Q")       1, 0, 0, 18, 2, 29, 1, 66, 1}, // #175
  {DBGFIELD("IIC_VSHLiQ")         1, 0, 0,  3, 2,  3, 1,  0, 0}, // #176
  {DBGFIELD("IIC_VPALiQ")         1, 0, 0,  3, 2, 26, 1, 64, 1}, // #177
  {DBGFIELD("IIC_VPALiD")         1, 0, 0,  3, 2, 26, 1, 64, 1}, // #178
  {DBGFIELD("IIC_VPBIND")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #179
  {DBGFIELD("IIC_VQUNAiQ")        1, 0, 0,  3, 2, 15, 1,  0, 0}, // #180
  {DBGFIELD("IIC_VSHLi4Q")        1, 0, 0,  3, 2, 15, 1,  0, 0}, // #181
  {DBGFIELD("IIC_VSHLi4D")        1, 0, 0,  3, 2, 15, 1,  0, 0}, // #182
  {DBGFIELD("IIC_VRECSD")         1, 0, 0,  3, 2, 29, 1, 67, 2}, // #183
  {DBGFIELD("IIC_VRECSQ")         1, 0, 0,  3, 2, 30, 1, 67, 2}, // #184
  {DBGFIELD("IIC_VMOVISL")        1, 0, 0,  3, 2,  3, 1,  0, 0}, // #185
  {DBGFIELD("IIC_fpCVTID_WriteCvtFP") 1, 0, 0,  3, 2, 15, 1,  0, 0}, // #186
  {DBGFIELD("IIC_fpCVTIS_WriteCvtFP") 1, 0, 0,  3, 2, 15, 1,  0, 0}, // #187
  {DBGFIELD("IIC_fpCVTID")        1, 0, 0,  3, 2, 15, 1,  0, 0}, // #188
  {DBGFIELD("IIC_fpCVTIS")        1, 0, 0,  3, 2, 15, 1,  0, 0}, // #189
  {DBGFIELD("IIC_fpSQRT64")       1, 0, 0,  3, 2, 43, 1,  0, 0}, // #190
  {DBGFIELD("IIC_fpSQRT32")       1, 0, 0,  3, 2, 44, 1,  0, 0}, // #191
  {DBGFIELD("IIC_VST1ln")         1, 0, 0, 28, 3, 18, 2,  0, 0}, // #192
  {DBGFIELD("IIC_VST1lnu")        1, 0, 0, 28, 3, 18, 2,  0, 0}, // #193
  {DBGFIELD("IIC_VST1")           1, 0, 0, 28, 3, 18, 2,  0, 0}, // #194
  {DBGFIELD("IIC_VST1x4")         1, 0, 0, 31, 3, 35, 2,  0, 0}, // #195
  {DBGFIELD("IIC_VLD1x4u")        1, 0, 0, 31, 3, 35, 2,  0, 0}, // #196
  {DBGFIELD("IIC_VST1x3")         1, 0, 0, 31, 3, 35, 2,  0, 0}, // #197
  {DBGFIELD("IIC_VLD1x3u")        1, 0, 0, 31, 3, 35, 2,  0, 0}, // #198
  {DBGFIELD("IIC_VST1x4u")        1, 0, 0, 31, 3, 35, 2,  0, 0}, // #199
  {DBGFIELD("IIC_VST1x3u")        1, 0, 0, 31, 3, 35, 2,  0, 0}, // #200
  {DBGFIELD("IIC_VST1x2")         1, 0, 0, 28, 3, 18, 2,  0, 0}, // #201
  {DBGFIELD("IIC_VST2ln")         1, 0, 0, 28, 3, 18, 2,  0, 0}, // #202
  {DBGFIELD("IIC_VST2lnu")        1, 0, 0, 28, 3, 18, 2,  0, 0}, // #203
  {DBGFIELD("IIC_VST2")           1, 0, 0, 28, 3, 18, 2,  0, 0}, // #204
  {DBGFIELD("IIC_VST2x2")         1, 0, 0, 28, 3, 18, 2,  0, 0}, // #205
  {DBGFIELD("IIC_VST2x2u")        1, 0, 0, 28, 3, 18, 2,  0, 0}, // #206
  {DBGFIELD("IIC_VST3ln")         1, 0, 0, 31, 3, 35, 2,  0, 0}, // #207
  {DBGFIELD("IIC_VST3lnu")        1, 0, 0, 31, 3, 35, 2,  0, 0}, // #208
  {DBGFIELD("IIC_VST3")           1, 0, 0, 31, 3, 35, 2,  0, 0}, // #209
  {DBGFIELD("IIC_VST3u")          1, 0, 0, 31, 3, 35, 2,  0, 0}, // #210
  {DBGFIELD("IIC_VST4ln")         1, 0, 0, 31, 3, 35, 2,  0, 0}, // #211
  {DBGFIELD("IIC_VST4lnu")        1, 0, 0, 31, 3, 35, 2,  0, 0}, // #212
  {DBGFIELD("IIC_VST4")           1, 0, 0, 31, 3, 35, 2,  0, 0}, // #213
  {DBGFIELD("IIC_VST4u")          1, 0, 0, 31, 3, 35, 2,  0, 0}, // #214
  {DBGFIELD("IIC_fpStore_m")      1, 0, 0, 28, 3, 18, 2,  0, 0}, // #215
  {DBGFIELD("IIC_fpStore64")      1, 0, 0, 28, 3, 18, 2,  0, 0}, // #216
  {DBGFIELD("IIC_fpStore32")      1, 0, 0, 28, 3, 18, 2,  0, 0}, // #217
  {DBGFIELD("IIC_VSUBiQ")         1, 0, 0,  3, 2,  3, 1, 66, 1}, // #218
  {DBGFIELD("IIC_VTB1")           1, 0, 0,  3, 2,  3, 1, 66, 1}, // #219
  {DBGFIELD("IIC_VTB2")           1, 0, 0,  3, 2,  3, 1, 67, 2}, // #220
  {DBGFIELD("IIC_VTB3")           1, 0, 0,  3, 2, 15, 1, 72, 3}, // #221
  {DBGFIELD("IIC_VTB4")           1, 0, 0,  3, 2, 15, 1, 75, 4}, // #222
  {DBGFIELD("IIC_VTBX1")          1, 0, 0,  3, 2,  3, 1, 65, 1}, // #223
  {DBGFIELD("IIC_VTBX2")          1, 0, 0,  3, 2,  3, 1, 70, 2}, // #224
  {DBGFIELD("IIC_VTBX3")          1, 0, 0,  3, 2, 15, 1, 79, 3}, // #225
  {DBGFIELD("IIC_VTBX4")          1, 0, 0,  3, 2, 15, 1, 82, 4}, // #226
  {DBGFIELD("IIC_fpCVTDI_WriteCvtFP") 1, 0, 0,  3, 2, 15, 1,  0, 0}, // #227
  {DBGFIELD("IIC_fpCVTSI_WriteCvtFP") 1, 0, 0,  3, 2, 15, 1,  0, 0}, // #228
  {DBGFIELD("IIC_fpCVTDI")        1, 0, 0,  3, 2, 15, 1,  0, 0}, // #229
  {DBGFIELD("IIC_fpCVTSI")        1, 0, 0,  3, 2, 15, 1,  0, 0}, // #230
  {DBGFIELD("IIC_VPERMD")         1, 0, 0,  3, 2,  2, 1,  0, 0}, // #231
  {DBGFIELD("IIC_VPERMQ")         1, 0, 0,  3, 2,  2, 1,  0, 0}, // #232
  {DBGFIELD("IIC_VPERMQ3")        2, 0, 0, 20, 2, 22, 2, 65, 1}, // #233
  {DBGFIELD("IIC_iALUsi_WriteALUsi_ReadALUsr") 1, 0, 0,  1, 1,  2, 1,  1, 21}, // #234
  {DBGFIELD("IIC_iBITi")          1, 0, 0,  1, 1,  1, 1,  0, 0}, // #235
  {DBGFIELD("IIC_iCMPsi_WriteCMPsi_ReadALU_ReadALU") 1, 0, 0,  1, 1,  1, 1, 22, 42}, // #236
  {DBGFIELD("IIC_iCMPi_WriteCMP") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #237
  {DBGFIELD("IIC_iCMPr_WriteCMP") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #238
  {DBGFIELD("IIC_iCMPsi_WriteCMPsi") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #239
  {DBGFIELD("IIC_iALUx")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #240
  {DBGFIELD("IIC_iLoad_bh_i")     1, 0, 0,  5, 2,  4, 2,  0, 0}, // #241
  {DBGFIELD("IIC_iLoad_d_i")      1, 0, 0,  7, 2,  8, 3,  0, 0}, // #242
  {DBGFIELD("IIC_iLoad_i")        1, 0, 0,  7, 2, 11, 2,  0, 0}, // #243
  {DBGFIELD("IIC_iLoadiALU")      2, 0, 0, 43, 3, 45, 3,  0, 0}, // #244
  {DBGFIELD("IIC_iCMOVsi_WriteALU") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #245
  {DBGFIELD("IIC_iMOVi")          1, 0, 0,  1, 1,  1, 1,  0, 0}, // #246
  {DBGFIELD("IIC_iMVNsi_WriteALU") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #247
  {DBGFIELD("IIC_iALUsir_WriteALUsi_ReadALU") 1, 0, 0,  1, 1,  2, 1,  1, 21}, // #248
  {DBGFIELD("IIC_iStore_bh_i")    1, 0, 0,  5, 2, 20, 2,  0, 0}, // #249
  {DBGFIELD("IIC_iStore_i")       1, 0, 0,  7, 2, 18, 2,  0, 0}, // #250
  {DBGFIELD("IIC_iEXTAsr")        1, 0, 0,  1, 1,  3, 1,  0, 0}, // #251
  {DBGFIELD("IIC_iEXTr")          1, 0, 0,  1, 1,  2, 1,  0, 0}, // #252
  {DBGFIELD("IIC_iTSTi_WriteCMP") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #253
  {DBGFIELD("IIC_iTSTr_WriteCMP") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #254
  {DBGFIELD("IIC_iTSTsi_WriteCMPsi") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #255
  {DBGFIELD("IIC_iALUr_WriteALU") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #256
  {DBGFIELD("IIC_iALUi_WriteALU") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #257
  {DBGFIELD("IIC_iBITr_WriteALU") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #258
  {DBGFIELD("IIC_iPop")           65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #259
  {DBGFIELD("IIC_iPop_Br_WriteBrL") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #260
  {DBGFIELD("IIC_iTSTr_WriteALU") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #261
  {DBGFIELD("ANDri_BICri_EORri_ORRri") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #262
  {DBGFIELD("ANDrr_BICrr_EORrr_ORRrr") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #263
  {DBGFIELD("ANDrsi_BICrsi_EORrsi_ORRrsi") 1, 0, 0,  1, 1,  2, 1,  0, 0}, // #264
  {DBGFIELD("ANDrsr_BICrsr_EORrsr_ORRrsr") 1, 0, 0,  1, 1,  3, 1,  0, 0}, // #265
  {DBGFIELD("MOVCCsi_MOVCCsr")    1, 0, 0,  1, 1,  2, 1,  0, 0}, // #266
  {DBGFIELD("MOVsi_MOVsr")        1, 0, 0,  1, 1,  2, 1,  0, 0}, // #267
  {DBGFIELD("MOVsra_flag_MOVsrl_flag") 1, 0, 0,  1, 1,  2, 1,  0, 0}, // #268
  {DBGFIELD("MVNsr")              1, 0, 0,  1, 1,  2, 1,  0, 0}, // #269
  {DBGFIELD("MVNr")               1, 0, 0,  1, 1,  1, 1,  1, 21}, // #270
  {DBGFIELD("MOVCCi32imm")        2, 0, 0, 11, 1,  2, 1,  0, 0}, // #271
  {DBGFIELD("MOV_ga_dyn_MOVi32imm") 2, 0, 0, 11, 1,  2, 1,  0, 0}, // #272
  {DBGFIELD("MOV_ga_pcrel")       3, 0, 0,  9, 1,  3, 1,  0, 0}, // #273
  {DBGFIELD("MOV_ga_pcrel_ldr")   3, 0, 0,  9, 1,  3, 1,  0, 0}, // #274
  {DBGFIELD("SEL")                1, 0, 0,  1, 1,  1, 1,  0, 0}, // #275
  {DBGFIELD("BFC_BFI_SBFX_UBFX")  1, 0, 0,  1, 1,  2, 1,  0, 0}, // #276
  {DBGFIELD("MLA_MLAv5_MLS_SMMLA_SMMLAR_SMMLS_SMMLSR") 1, 0, 0, 14, 2, 15, 1,  0, 0}, // #277
  {DBGFIELD("MUL_MULv5_SMMUL_SMMULR") 1, 0, 0, 14, 2, 15, 1,  0, 0}, // #278
  {DBGFIELD("SMLAL_SMLALBB_SMLALBT_SMLALTB_SMLALTT_SMLALv5_UMAAL_UMAALv5_UMLAL_UMLALv5") 1, 0, 0,  9, 2, 15, 2,  0, 0}, // #279
  {DBGFIELD("SMULL_SMULLv5_UMULL_UMULLv5") 1, 0, 0,  9, 2, 15, 2,  0, 0}, // #280
  {DBGFIELD("SMLAD_SMLADX_SMLALD_SMLALDX_SMLSD_SMLSDX_SMLSLD_SMLSLDX_SMUAD_SMUADX_SMUSD_SMUSDX") 1, 0, 0,  9, 2, 15, 2,  0, 0}, // #281
  {DBGFIELD("SMULBB_SMULBT_SMULTB_SMULTT_SMULWB_SMULWT") 1, 0, 0, 14, 2, 22, 2,  0, 0}, // #282
  {DBGFIELD("SMLABB_SMLABT_SMLATB_SMLATT_SMLAWB_SMLAWT") 1, 0, 0, 14, 2, 22, 2,  0, 0}, // #283
  {DBGFIELD("LDRi12_PICLDR")      1, 0, 0,  6, 1,  8, 1,  0, 0}, // #284
  {DBGFIELD("LDRrs")              1, 0, 0,  6, 1, 13, 1,  0, 0}, // #285
  {DBGFIELD("LDRBi12_LDRH_LDRSB_LDRSH_PICLDRB_PICLDRH_PICLDRSB_PICLDRSH") 1, 0, 0,  6, 1,  4, 1,  0, 0}, // #286
  {DBGFIELD("LDRHTi_LDRHTr_LDRH_POST_LDRH_PRE_LDRSBTi_LDRSBTr_LDRSB_POST_LDRSB_PRE_LDRSHTi_LDRSHTr_LDRSH_POST_LDRSH_PRE") 1, 0, 0,  6, 1,  4, 1,  0, 0}, // #287
  {DBGFIELD("SXTB_SXTB16_SXTH_UXTB_UXTB16_UXTH") 1, 0, 0,  1, 1,  2, 1,  0, 0}, // #288
  {DBGFIELD("t2SXTB_t2SXTB16_t2SXTH_t2UXTB_t2UXTB16_t2UXTH") 1, 0, 0,  1, 1,  2, 1,  0, 0}, // #289
  {DBGFIELD("t2MOVCCi32imm")      2, 0, 0, 11, 1,  2, 1,  0, 0}, // #290
  {DBGFIELD("t2MOV_ga_dyn_t2MOVi32imm") 2, 0, 0, 11, 1,  2, 1,  0, 0}, // #291
  {DBGFIELD("t2MOV_ga_pcrel")     3, 0, 0,  9, 1,  3, 1,  0, 0}, // #292
  {DBGFIELD("t2MOVi16_ga_pcrel")  1, 0, 0,  1, 1,  1, 1,  0, 0}, // #293
  {DBGFIELD("t2SEL")              0, 0, 0,  0, 0,  0, 0,  0, 0}, // #294
  {DBGFIELD("t2BFC_t2SBFX_t2UBFX") 1, 0, 0,  1, 1,  2, 1,  0, 0}, // #295
  {DBGFIELD("t2BFI")              1, 0, 0,  1, 1,  1, 1,  0, 0}, // #296
  {DBGFIELD("QADD_QADD16_QADD8_QASX_QDADD_QDSUB_QSAX_QSUB_QSUB16_QSUB8_UQADD16_UQADD8_UQASX_UQSAX_UQSUB16_UQSUB8") 1, 0, 0,  1, 1,  1, 1, 22, 42}, // #297
  {DBGFIELD("SSAT_SSAT16_USAT_USAT16_t2QADD_t2QADD16_t2QADD8_t2QASX_t2QDADD_t2QDSUB_t2QSAX_t2QSUB_t2QSUB16_t2QSUB8_t2SSAT_t2SSAT16_t2UQADD16_t2UQADD8_t2UQASX_t2UQSAX_t2UQSUB16_t2UQSUB8_t2USAT_t2USAT16") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #298
  {DBGFIELD("SADD16_SADD8_SASX_SSAX_SSUB16_SSUB8_UADD16_UADD8_UASX_USAX_USUB16_USUB8") 1, 0, 0,  1, 1,  1, 1, 22, 42}, // #299
  {DBGFIELD("t2SADD16_t2SADD8_t2SASX_t2SSAX_t2SSUB16_t2SSUB8_t2UADD16_t2UADD8_t2UASX_t2USAX_t2USUB16_t2USUB8") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #300
  {DBGFIELD("SHADD16_SHADD8_SHASX_SHSAX_SHSUB16_SHSUB8_UHADD16_UHADD8_UHASX_UHSAX_UHSUB16_UHSUB8") 1, 0, 0,  1, 1,  1, 1, 22, 42}, // #301
  {DBGFIELD("SXTAB_SXTAB16_SXTAH_UXTAB_UXTAB16_UXTAH") 1, 0, 0,  1, 1,  3, 1,  0, 0}, // #302
  {DBGFIELD("t2SHADD16_t2SHADD8_t2SHASX_t2SHSAX_t2SHSUB16_t2SHSUB8_t2UHADD16_t2UHADD8_t2UHASX_t2UHSAX_t2UHSUB16_t2UHSUB8") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #303
  {DBGFIELD("t2SXTAB_t2SXTAB16_t2SXTAH_t2UXTAB_t2UXTAB16_t2UXTAH") 1, 0, 0,  1, 1,  3, 1,  0, 0}, // #304
  {DBGFIELD("USAD8")              1, 0, 0,  1, 1,  1, 1, 22, 42}, // #305
  {DBGFIELD("USADA8")             1, 0, 0,  1, 1,  1, 1, 22, 42}, // #306
  {DBGFIELD("SMUSD_SMUSDX")       1, 0, 0,  9, 2, 15, 2,  0, 0}, // #307
  {DBGFIELD("t2MUL_t2SMMUL_t2SMMULR") 1, 0, 0,  9, 2, 15, 2,  0, 0}, // #308
  {DBGFIELD("t2SMULBB_t2SMULBT_t2SMULTB_t2SMULTT_t2SMULWB_t2SMULWT") 1, 0, 0, 14, 2, 22, 2,  0, 0}, // #309
  {DBGFIELD("t2SMUSD_t2SMUSDX")   1, 0, 0,  9, 2, 15, 2,  0, 0}, // #310
  {DBGFIELD("t2MLA_t2MLS_t2SMMLA_t2SMMLAR_t2SMMLS_t2SMMLSR") 1, 0, 0,  9, 2, 15, 2,  0, 0}, // #311
  {DBGFIELD("SMUAD_SMUADX")       1, 0, 0,  9, 2, 15, 2,  0, 0}, // #312
  {DBGFIELD("t2SMUAD_t2SMUADX")   1, 0, 0,  9, 2, 15, 2,  0, 0}, // #313
  {DBGFIELD("SMLSD_SMLSDX")       1, 0, 0,  9, 2, 15, 2,  0, 0}, // #314
  {DBGFIELD("t2SMLABB_t2SMLABT_t2SMLATB_t2SMLATT_t2SMLAWB_t2SMLAWT") 1, 0, 0, 14, 2, 22, 2,  0, 0}, // #315
  {DBGFIELD("t2SMLSD_t2SMLSDX")   1, 0, 0,  9, 2, 15, 2,  0, 0}, // #316
  {DBGFIELD("SMLAD_SMLADX")       1, 0, 0,  9, 2, 15, 2,  0, 0}, // #317
  {DBGFIELD("t2SMLAD_t2SMLADX")   1, 0, 0,  9, 2, 15, 2,  0, 0}, // #318
  {DBGFIELD("SMULL_UMULL")        1, 0, 0,  9, 2, 15, 2,  0, 0}, // #319
  {DBGFIELD("t2SMULL_t2UMULL")    1, 0, 0,  9, 2, 15, 2,  0, 0}, // #320
  {DBGFIELD("t2SMLAL_t2SMLALBB_t2SMLALBT_t2SMLALD_t2SMLALDX_t2SMLALTB_t2SMLALTT_t2SMLSLD_t2SMLSLDX_t2UMAAL_t2UMLAL") 1, 0, 0,  9, 2, 15, 2,  0, 0}, // #321
  {DBGFIELD("SDIV_UDIV_t2SDIV_t2UDIV") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #322
  {DBGFIELD("LDRBi12")            1, 0, 0,  6, 1,  4, 1,  0, 0}, // #323
  {DBGFIELD("LDRBrs_t2LDRBs_t2LDRHs") 1, 0, 0,  5, 2,  6, 2,  0, 0}, // #324
  {DBGFIELD("LDREX_LDREXB_LDREXD_LDREXH_tLDRpci_pic") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #325
  {DBGFIELD("LDRi12")             1, 0, 0,  6, 1,  8, 1,  0, 0}, // #326
  {DBGFIELD("t2LDRBi12_t2LDRBi8_t2LDRBpci_t2LDRHi12_t2LDRHi8_t2LDRHpci_tLDRBi_tLDRHi") 1, 0, 0,  5, 2,  4, 2,  0, 0}, // #327
  {DBGFIELD("t2LDRi12_t2LDRi8_t2LDRpci_tLDRi_tLDRpci_tLDRspi") 1, 0, 0,  7, 2, 11, 2,  0, 0}, // #328
  {DBGFIELD("t2LDRpci_pic")       2, 0, 0, 43, 3, 45, 3,  0, 0}, // #329
  {DBGFIELD("t2LDRs")             1, 0, 0,  7, 2, 13, 2,  0, 0}, // #330
  {DBGFIELD("tLDRBr_tLDRHr")      1, 0, 0,  5, 2,  4, 2,  0, 0}, // #331
  {DBGFIELD("tLDRr")              1, 0, 0,  7, 2, 11, 2,  0, 0}, // #332
  {DBGFIELD("LDRH_PICLDRB_PICLDRH") 1, 0, 0,  6, 1,  4, 1,  0, 0}, // #333
  {DBGFIELD("LDRcp")              1, 0, 0,  7, 2, 11, 2,  0, 0}, // #334
  {DBGFIELD("t2LDRSBi12_t2LDRSBi8_t2LDRSBpci_t2LDRSHi12_t2LDRSHi8_t2LDRSHpci") 1, 0, 0,  5, 2,  4, 2,  0, 0}, // #335
  {DBGFIELD("t2LDRSBpcrel_t2LDRSHpcrel") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #336
  {DBGFIELD("t2LDRSBs_t2LDRSHs")  1, 0, 0,  5, 2,  6, 2,  0, 0}, // #337
  {DBGFIELD("tLDRSB_tLDRSH")      1, 0, 0,  5, 2,  4, 2,  0, 0}, // #338
  {DBGFIELD("LDRBT_POST_IMM_LDRBT_POST_REG_LDRB_POST_REG_LDRB_PRE_REG") 1, 0, 0,  5, 2,  4, 2,  0, 0}, // #339
  {DBGFIELD("LDRB_POST_IMM_LDRB_PRE_IMM_t2LDRB_POST_t2LDRB_PRE_t2LDRH_POST_t2LDRH_PRE") 1, 0, 0,  5, 2,  4, 2,  0, 0}, // #340
  {DBGFIELD("LDRHTi_LDRHTr_LDRH_POST_LDRH_PRE") 1, 0, 0,  6, 1,  4, 1,  0, 0}, // #341
  {DBGFIELD("LDRT_POST_IMM_LDRT_POST_REG_LDR_POST_REG_LDR_PRE_REG") 1, 0, 0,  7, 2, 11, 2,  0, 0}, // #342
  {DBGFIELD("LDR_POST_IMM_LDR_PRE_IMM_t2LDR_POST_t2LDR_PRE") 1, 0, 0,  7, 2, 11, 2,  0, 0}, // #343
  {DBGFIELD("t2LDRBT_t2LDRHT")    1, 0, 0,  5, 2,  4, 2,  0, 0}, // #344
  {DBGFIELD("t2LDRT")             1, 0, 0,  7, 2, 11, 2,  0, 0}, // #345
  {DBGFIELD("t2LDRSBT_t2LDRSHT")  1, 0, 0,  5, 2,  4, 2,  0, 0}, // #346
  {DBGFIELD("t2LDRSB_POST_t2LDRSB_PRE_t2LDRSH_POST_t2LDRSH_PRE") 1, 0, 0,  5, 2,  4, 2,  0, 0}, // #347
  {DBGFIELD("LDRD")               1, 0, 0,  7, 2,  8, 3,  0, 0}, // #348
  {DBGFIELD("t2LDRDi8")           1, 0, 0,  7, 2,  8, 3,  0, 0}, // #349
  {DBGFIELD("LDRD_POST_LDRD_PRE_t2LDRD_POST_t2LDRD_PRE") 1, 0, 0,  7, 2,  8, 3,  0, 0}, // #350
  {DBGFIELD("LDMDA_LDMDB_LDMIA_LDMIB_sysLDMDA_sysLDMDB_sysLDMIA_sysLDMIB_t2LDMDB_t2LDMIA_tLDMIA") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #351
  {DBGFIELD("LDMDA_UPD_LDMDB_UPD_LDMIA_UPD_LDMIB_UPD_sysLDMDA_UPD_sysLDMDB_UPD_sysLDMIA_UPD_sysLDMIB_UPD_t2LDMDB_UPD_t2LDMIA_UPD_tLDMIA_UPD") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #352
  {DBGFIELD("LDMIA_RET_t2LDMIA_RET") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #353
  {DBGFIELD("tPOP")               65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #354
  {DBGFIELD("tPOP_RET")           65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #355
  {DBGFIELD("PICSTR_STRi12_tSTRr") 1, 0, 0,  7, 2, 18, 2,  0, 0}, // #356
  {DBGFIELD("PICSTRB_PICSTRH_STRBi12_STRH_tSTRBr_tSTRHr") 1, 0, 0,  5, 2, 20, 2,  0, 0}, // #357
  {DBGFIELD("STRBrs_t2STRBs_t2STRHs") 1, 0, 0, 16, 2, 24, 2,  0, 0}, // #358
  {DBGFIELD("STREX_STREXB_STREXD_STREXH") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #359
  {DBGFIELD("STRrs_t2STRs")       1, 0, 0,  5, 2, 20, 2,  0, 0}, // #360
  {DBGFIELD("t2STRBi12_t2STRBi8_t2STRHi12_t2STRHi8_tSTRBi_tSTRHi") 1, 0, 0,  5, 2, 20, 2,  0, 0}, // #361
  {DBGFIELD("t2STRi12_t2STRi8_tSTRi_tSTRspi") 1, 0, 0,  7, 2, 18, 2,  0, 0}, // #362
  {DBGFIELD("STRBT_POST_IMM_STRBT_POST_REG_STRB_POST_REG_STRB_PRE_REG_STRHTi_STRHTr_STRH_POST_STRH_PRE") 1, 0, 0,  5, 2, 20, 2,  0, 0}, // #363
  {DBGFIELD("STRB_POST_IMM_STRB_PRE_IMM_t2STRB_POST_t2STRB_PRE_t2STRH_POST") 1, 0, 0,  5, 2, 20, 2,  0, 0}, // #364
  {DBGFIELD("STRBi_preidx_STRBr_preidx_STRH_preidx_STRT_POST_IMM_STRT_POST_REG_STR_POST_REG_STR_PRE_REG_STRi_preidx_STRr_preidx_t2STRB_preidx_t2STRH_preidx_t2STR_preidx") 1, 0, 0,  7, 2, 18, 2,  0, 0}, // #365
  {DBGFIELD("STR_POST_IMM_STR_PRE_IMM_t2STRH_PRE_t2STR_POST_t2STR_PRE") 1, 0, 0,  7, 2, 18, 2,  0, 0}, // #366
  {DBGFIELD("t2STRBT_t2STRHT")    1, 0, 0,  5, 2, 20, 2,  0, 0}, // #367
  {DBGFIELD("t2STRT")             1, 0, 0,  7, 2, 18, 2,  0, 0}, // #368
  {DBGFIELD("STRD_t2STRDi8")      1, 0, 0,  7, 2, 18, 2,  0, 0}, // #369
  {DBGFIELD("STRD_POST_STRD_PRE_t2STRD_POST_t2STRD_PRE") 1, 0, 0,  7, 2, 18, 2,  0, 0}, // #370
  {DBGFIELD("STMDA_STMDB_STMIA_STMIB_sysSTMDA_sysSTMDB_sysSTMIA_sysSTMIB_t2STMDB_t2STMIA") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #371
  {DBGFIELD("STMDA_UPD_STMDB_UPD_STMIA_UPD_STMIB_UPD_sysSTMDA_UPD_sysSTMDB_UPD_sysSTMIA_UPD_sysSTMIB_UPD_t2STMDB_UPD_t2STMIA_UPD_tSTMIA_UPD") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #372
  {DBGFIELD("tPUSH")              65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #373
  {DBGFIELD("ITasm")              0, 0, 0,  0, 0,  0, 0,  0, 0}, // #374
  {DBGFIELD("t2IT")               0, 0, 0,  0, 0,  0, 0,  0, 0}, // #375
  {DBGFIELD("VADDLsv2i64_VADDLsv4i32_VADDLsv8i16_VADDLuv2i64_VADDLuv4i32_VADDLuv8i16_VNEGs16d_VNEGs32d_VNEGs8d_VPADDLsv16i8_VPADDLsv2i32_VPADDLsv4i16_VPADDLsv4i32_VPADDLsv8i16_VPADDLsv8i8_VPADDLuv16i8_VPADDLuv2i32_VPADDLuv4i16_VPADDLuv4i32_VPADDLuv8i16_VPADDLuv8i8_VPADDi16_VPADDi32_VPADDi8_VSHLLi16_VSHLLi32_VSHLLi8_VSHLLsv2i64_VSHLLsv4i32_VSHLLsv8i16_VSHLLuv2i64_VSHLLuv4i32_VSHLLuv8i16_VSHLiv16i8_VSHLiv1i64_VSHLiv2i32_VSHLiv2i64_VSHLiv4i16_VSHLiv4i32_VSHLiv8i16_VSHLiv8i8_VSHLsv1i64_VSHLsv2i32_VSHLsv4i16_VSHLsv8i8_VSHLuv1i64_VSHLuv2i32_VSHLuv4i16_VSHLuv8i8_VSHRsv16i8_VSHRsv1i64_VSHRsv2i32_VSHRsv2i64_VSHRsv4i16_VSHRsv4i32_VSHRsv8i16_VSHRsv8i8_VSHRuv16i8_VSHRuv1i64_VSHRuv2i32_VSHRuv2i64_VSHRuv4i16_VSHRuv4i32_VSHRuv8i16_VSHRuv8i8_VSLIv1i64_VSLIv2i32_VSLIv4i16_VSLIv8i8_VSRIv1i64_VSRIv2i32_VSRIv4i16_VSRIv8i8_VSUBLsv2i64_VSUBLsv4i32_VSUBLsv8i16_VSUBLuv2i64_VSUBLuv4i32_VSUBLuv8i16") 1, 0, 0,  3, 2,  3, 1,  0, 0}, // #376
  {DBGFIELD("VADDWsv2i64_VADDWsv4i32_VADDWsv8i16_VADDWuv2i64_VADDWuv4i32_VADDWuv8i16_VSUBWsv2i64_VSUBWsv4i32_VSUBWsv8i16_VSUBWuv2i64_VSUBWuv4i32_VSUBWuv8i16_VSUBv1i64_VSUBv2i32_VSUBv4i16_VSUBv8i8") 1, 0, 0,  3, 2,  3, 1, 66, 1}, // #377
  {DBGFIELD("VADDv16i8_VADDv2i64_VADDv4i32_VADDv8i16_VANDq_VBICq_VBIFq_VBITq_VEORq_VORNq_VORRq") 1, 0, 0,  3, 2,  3, 1, 67, 2}, // #378
  {DBGFIELD("VADDv1i64_VADDv2i32_VADDv4i16_VADDv8i8_VANDd_VBICd_VBIFd_VBITd_VEORd_VORNd_VORRd") 1, 0, 0,  3, 2,  3, 1, 67, 2}, // #379
  {DBGFIELD("VBICiv2i32_VBICiv4i16_VBICiv4i32_VBICiv8i16_VORRiv2i32_VORRiv4i16_VORRiv4i32_VORRiv8i16") 1, 0, 0,  3, 2,  3, 1,  0, 0}, // #380
  {DBGFIELD("VBSLd_VCLSv2i32_VCLSv4i16_VCLSv8i8_VCLZv2i32_VCLZv4i16_VCLZv8i8_VCNTd") 1, 0, 0,  3, 2,  3, 1, 66, 1}, // #381
  {DBGFIELD("VBSLq_VCLSv16i8_VCLSv4i32_VCLSv8i16_VCLZv16i8_VCLZv4i32_VCLZv8i16_VCNTq") 1, 0, 0, 18, 2, 15, 1, 64, 1}, // #382
  {DBGFIELD("VHADDsv16i8_VHADDsv4i32_VHADDsv8i16_VHADDuv16i8_VHADDuv4i32_VHADDuv8i16_VRHADDsv16i8_VRHADDsv4i32_VRHADDsv8i16_VRHADDuv16i8_VRHADDuv4i32_VRHADDuv8i16_VTSTv16i8_VTSTv4i32_VTSTv8i16") 1, 0, 0,  3, 2, 15, 1, 67, 2}, // #383
  {DBGFIELD("VHADDsv2i32_VHADDsv4i16_VHADDsv8i8_VHADDuv2i32_VHADDuv4i16_VHADDuv8i8_VRHADDsv2i32_VRHADDsv4i16_VRHADDsv8i8_VRHADDuv2i32_VRHADDuv4i16_VRHADDuv8i8_VTSTv2i32_VTSTv4i16_VTSTv8i8") 1, 0, 0,  3, 2, 15, 1, 67, 2}, // #384
  {DBGFIELD("VHSUBsv16i8_VHSUBsv4i32_VHSUBsv8i16_VHSUBuv16i8_VHSUBuv4i32_VHSUBuv8i16") 1, 0, 0,  3, 2, 15, 1, 66, 1}, // #385
  {DBGFIELD("VHSUBsv2i32_VHSUBsv4i16_VHSUBsv8i8_VHSUBuv2i32_VHSUBuv4i16_VHSUBuv8i8") 1, 0, 0,  3, 2, 15, 1, 66, 1}, // #386
  {DBGFIELD("VNEGf32q")           1, 0, 0,  3, 2, 26, 1, 66, 1}, // #387
  {DBGFIELD("VNEGfd")             1, 0, 0,  3, 2, 16, 1, 66, 1}, // #388
  {DBGFIELD("VNEGs16q_VNEGs32q_VNEGs8q_VSHLsv16i8_VSHLsv2i64_VSHLsv4i32_VSHLsv8i16_VSHLuv16i8_VSHLuv2i64_VSHLuv4i32_VSHLuv8i16_VSLIv16i8_VSLIv2i64_VSLIv4i32_VSLIv8i16_VSRIv16i8_VSRIv2i64_VSRIv4i32_VSRIv8i16") 1, 0, 0,  3, 2,  3, 1,  0, 0}, // #389
  {DBGFIELD("VQSHLsiv16i8_VQSHLsiv1i64_VQSHLsiv2i32_VQSHLsiv2i64_VQSHLsiv4i16_VQSHLsiv4i32_VQSHLsiv8i16_VQSHLsiv8i8_VQSHLsuv16i8_VQSHLsuv1i64_VQSHLsuv2i32_VQSHLsuv2i64_VQSHLsuv4i16_VQSHLsuv4i32_VQSHLsuv8i16_VQSHLsuv8i8_VQSHLsv1i64_VQSHLsv2i32_VQSHLsv4i16_VQSHLsv8i8_VQSHLuiv16i8_VQSHLuiv1i64_VQSHLuiv2i32_VQSHLuiv2i64_VQSHLuiv4i16_VQSHLuiv4i32_VQSHLuiv8i16_VQSHLuiv8i8_VQSHLuv1i64_VQSHLuv2i32_VQSHLuv4i16_VQSHLuv8i8") 1, 0, 0,  3, 2, 15, 1,  0, 0}, // #390
  {DBGFIELD("VQSHLsv16i8_VQSHLsv2i64_VQSHLsv4i32_VQSHLsv8i16_VQSHLuv16i8_VQSHLuv2i64_VQSHLuv4i32_VQSHLuv8i16") 1, 0, 0,  3, 2, 15, 1,  0, 0}, // #391
  {DBGFIELD("VSUBv16i8_VSUBv2i64_VSUBv4i32_VSUBv8i16") 1, 0, 0,  3, 2,  3, 1, 66, 1}, // #392
  {DBGFIELD("VEXTd16_VEXTd32_VEXTd8") 1, 0, 0,  3, 2,  2, 1,  0, 0}, // #393
  {DBGFIELD("VEXTq16_VEXTq32_VEXTq64_VEXTq8") 2, 0, 0, 20, 2, 22, 2, 65, 1}, // #394
  {DBGFIELD("VREV16d8_VREV32d16_VREV32d8_VREV64d16_VREV64d32_VREV64d8") 1, 0, 0,  3, 2,  2, 1,  0, 0}, // #395
  {DBGFIELD("VREV16q8_VREV32q16_VREV32q8_VREV64q16_VREV64q32_VREV64q8") 1, 0, 0,  3, 2,  2, 1,  0, 0}, // #396
  {DBGFIELD("VABALsv2i64_VABALsv4i32_VABALsv8i16_VABALuv2i64_VABALuv4i32_VABALuv8i16_VABAsv2i32_VABAsv4i16_VABAsv8i8_VABAuv2i32_VABAuv4i16_VABAuv8i8") 1, 0, 0,  3, 2, 26, 1, 64, 2}, // #397
  {DBGFIELD("VABAsv16i8_VABAsv4i32_VABAsv8i16_VABAuv16i8_VABAuv4i32_VABAuv8i16") 1, 0, 0,  3, 2, 26, 1, 64, 2}, // #398
  {DBGFIELD("VABSfd")             1, 0, 0,  3, 2, 16, 1, 66, 1}, // #399
  {DBGFIELD("VABSfq")             1, 0, 0,  3, 2, 26, 1, 66, 1}, // #400
  {DBGFIELD("VABSv16i8_VABSv4i32_VABSv8i16") 1, 0, 0,  3, 2, 15, 1, 66, 1}, // #401
  {DBGFIELD("VABSv2i32_VABSv4i16_VABSv8i8") 1, 0, 0,  3, 2, 15, 1, 66, 1}, // #402
  {DBGFIELD("VACGEd_VACGTd_VCEQfd_VCGEfd_VCGTfd") 1, 0, 0,  3, 2, 16, 1, 67, 2}, // #403
  {DBGFIELD("VACGEq_VACGTq_VCEQfq_VCGEfq_VCGTfq") 1, 0, 0,  3, 2, 26, 1, 67, 2}, // #404
  {DBGFIELD("VCEQv16i8_VCEQv4i32_VCEQv8i16_VCGEsv16i8_VCGEsv4i32_VCGEsv8i16_VCGEuv16i8_VCGEuv4i32_VCGEuv8i16_VCGTsv16i8_VCGTsv4i32_VCGTsv8i16_VCGTuv16i8_VCGTuv4i32_VCGTuv8i16_VQSUBsv16i8_VQSUBsv2i64_VQSUBsv4i32_VQSUBsv8i16_VQSUBuv16i8_VQSUBuv2i64_VQSUBuv4i32_VQSUBuv8i16") 1, 0, 0,  3, 2, 15, 1, 66, 1}, // #405
  {DBGFIELD("VCEQv2i32_VCEQv4i16_VCEQv8i8_VCGEsv2i32_VCGEsv4i16_VCGEsv8i8_VCGEuv2i32_VCGEuv4i16_VCGEuv8i8_VCGTsv2i32_VCGTsv4i16_VCGTsv8i8_VCGTuv2i32_VCGTuv4i16_VCGTuv8i8_VQSUBsv1i64_VQSUBsv2i32_VQSUBsv4i16_VQSUBsv8i8_VQSUBuv1i64_VQSUBuv2i32_VQSUBuv4i16_VQSUBuv8i8") 1, 0, 0,  3, 2, 15, 1, 66, 1}, // #406
  {DBGFIELD("VCEQzv16i8_VCEQzv2f32_VCEQzv2i32_VCEQzv4f32_VCEQzv4i16_VCEQzv4i32_VCEQzv8i16_VCEQzv8i8_VCGEzv16i8_VCGEzv2f32_VCGEzv2i32_VCGEzv4f32_VCGEzv4i16_VCGEzv4i32_VCGEzv8i16_VCGEzv8i8_VCGTzv16i8_VCGTzv2f32_VCGTzv2i32_VCGTzv4f32_VCGTzv4i16_VCGTzv4i32_VCGTzv8i16_VCGTzv8i8_VCLEzv16i8_VCLEzv2f32_VCLEzv2i32_VCLEzv4f32_VCLEzv4i16_VCLEzv4i32_VCLEzv8i16_VCLEzv8i8_VCLTzv16i8_VCLTzv2f32_VCLTzv2i32_VCLTzv4f32_VCLTzv4i16_VCLTzv4i32_VCLTzv8i16_VCLTzv8i8") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #407
  {DBGFIELD("VPADALsv16i8_VPADALsv4i32_VPADALsv8i16_VPADALuv16i8_VPADALuv4i32_VPADALuv8i16") 1, 0, 0,  3, 2, 26, 1, 64, 1}, // #408
  {DBGFIELD("VPADALsv2i32_VPADALsv4i16_VPADALsv8i8_VPADALuv2i32_VPADALuv4i16_VPADALuv8i8_VRSRAsv16i8_VRSRAsv1i64_VRSRAsv2i32_VRSRAsv2i64_VRSRAsv4i16_VRSRAsv4i32_VRSRAsv8i16_VRSRAsv8i8_VRSRAuv16i8_VRSRAuv1i64_VRSRAuv2i32_VRSRAuv2i64_VRSRAuv4i16_VRSRAuv4i32_VRSRAuv8i16_VRSRAuv8i8_VSRAsv16i8_VSRAsv1i64_VSRAsv2i32_VSRAsv2i64_VSRAsv4i16_VSRAsv4i32_VSRAsv8i16_VSRAsv8i8_VSRAuv16i8_VSRAuv1i64_VSRAuv2i32_VSRAuv2i64_VSRAuv4i16_VSRAuv4i32_VSRAuv8i16_VSRAuv8i8") 1, 0, 0,  3, 2, 26, 1, 64, 1}, // #409
  {DBGFIELD("VQABSv16i8_VQABSv4i32_VQABSv8i16_VQNEGv16i8_VQNEGv4i32_VQNEGv8i16") 1, 0, 0,  3, 2, 15, 1,  0, 0}, // #410
  {DBGFIELD("VQABSv2i32_VQABSv4i16_VQABSv8i8_VQNEGv2i32_VQNEGv4i16_VQNEGv8i8") 1, 0, 0,  3, 2, 15, 1,  0, 0}, // #411
  {DBGFIELD("VQADDsv16i8_VQADDsv2i64_VQADDsv4i32_VQADDsv8i16_VQADDuv16i8_VQADDuv2i64_VQADDuv4i32_VQADDuv8i16") 1, 0, 0,  3, 2, 15, 1, 67, 2}, // #412
  {DBGFIELD("VQADDsv1i64_VQADDsv2i32_VQADDsv4i16_VQADDsv8i8_VQADDuv1i64_VQADDuv2i32_VQADDuv4i16_VQADDuv8i8") 1, 0, 0,  3, 2, 15, 1, 67, 2}, // #413
  {DBGFIELD("VQRSHLsv16i8_VQRSHLsv2i64_VQRSHLsv4i32_VQRSHLsv8i16_VQRSHLuv16i8_VQRSHLuv2i64_VQRSHLuv4i32_VQRSHLuv8i16_VRSHLsv16i8_VRSHLsv2i64_VRSHLsv4i32_VRSHLsv8i16_VRSHLuv16i8_VRSHLuv2i64_VRSHLuv4i32_VRSHLuv8i16") 1, 0, 0,  3, 2, 15, 1,  0, 0}, // #414
  {DBGFIELD("VQRSHLsv1i64_VQRSHLsv2i32_VQRSHLsv4i16_VQRSHLsv8i8_VQRSHLuv1i64_VQRSHLuv2i32_VQRSHLuv4i16_VQRSHLuv8i8_VRSHLsv1i64_VRSHLsv2i32_VRSHLsv4i16_VRSHLsv8i8_VRSHLuv1i64_VRSHLuv2i32_VRSHLuv4i16_VRSHLuv8i8_VRSHRsv16i8_VRSHRsv1i64_VRSHRsv2i32_VRSHRsv2i64_VRSHRsv4i16_VRSHRsv4i32_VRSHRsv8i16_VRSHRsv8i8_VRSHRuv16i8_VRSHRuv1i64_VRSHRuv2i32_VRSHRuv2i64_VRSHRuv4i16_VRSHRuv4i32_VRSHRuv8i16_VRSHRuv8i8") 1, 0, 0,  3, 2, 15, 1,  0, 0}, // #415
  {DBGFIELD("VRECPEd_VRECPEfd_VRSQRTEd_VRSQRTEfd") 1, 0, 0,  3, 2, 16, 1, 66, 1}, // #416
  {DBGFIELD("VRECPEfq_VRECPEq_VRSQRTEfq_VRSQRTEq") 1, 0, 0,  3, 2, 26, 1, 66, 1}, // #417
  {DBGFIELD("VADDHNv2i32_VADDHNv4i16_VADDHNv8i8_VSUBHNv2i32_VSUBHNv4i16_VSUBHNv8i8") 1, 0, 0,  3, 2, 15, 1, 67, 2}, // #418
  {DBGFIELD("VSHRNv2i32_VSHRNv4i16_VSHRNv8i8") 1, 0, 0,  3, 2,  3, 1,  0, 0}, // #419
  {DBGFIELD("VQRSHRNsv2i32_VQRSHRNsv4i16_VQRSHRNsv8i8_VQRSHRNuv2i32_VQRSHRNuv4i16_VQRSHRNuv8i8_VQRSHRUNv2i32_VQRSHRUNv4i16_VQRSHRUNv8i8_VQSHRNsv2i32_VQSHRNsv4i16_VQSHRNsv8i8_VQSHRNuv2i32_VQSHRNuv4i16_VQSHRNuv8i8_VQSHRUNv2i32_VQSHRUNv4i16_VQSHRUNv8i8_VRSHRNv2i32_VRSHRNv4i16_VRSHRNv8i8") 1, 0, 0,  3, 2, 15, 1,  0, 0}, // #420
  {DBGFIELD("VRADDHNv2i32_VRADDHNv4i16_VRADDHNv8i8_VRSUBHNv2i32_VRSUBHNv4i16_VRSUBHNv8i8") 1, 0, 0,  3, 2, 15, 1, 67, 2}, // #421
  {DBGFIELD("VTBL1")              1, 0, 0,  3, 2,  3, 1, 66, 1}, // #422
  {DBGFIELD("VTBX1")              1, 0, 0,  3, 2,  3, 1, 65, 1}, // #423
  {DBGFIELD("VTBL2")              1, 0, 0,  3, 2,  3, 1, 67, 2}, // #424
  {DBGFIELD("VTBX2")              1, 0, 0,  3, 2,  3, 1, 70, 2}, // #425
  {DBGFIELD("VTBL3_VTBL3Pseudo")  1, 0, 0,  3, 2, 15, 1, 72, 3}, // #426
  {DBGFIELD("VTBX3_VTBX3Pseudo")  1, 0, 0,  3, 2, 15, 1, 79, 3}, // #427
  {DBGFIELD("VTBL4_VTBL4Pseudo")  1, 0, 0,  3, 2, 15, 1, 75, 4}, // #428
  {DBGFIELD("VTBX4_VTBX4Pseudo")  1, 0, 0,  3, 2, 15, 1, 82, 4}, // #429
  {DBGFIELD("VSWPd_VSWPq")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #430
  {DBGFIELD("VTRNd16_VTRNd32_VTRNd8_VUZPd16_VUZPd8_VZIPd16_VZIPd8") 1, 0, 0,  3, 2,  2, 1,  0, 0}, // #431
  {DBGFIELD("VTRNq16_VTRNq32_VTRNq8") 1, 0, 0,  3, 2,  2, 1,  0, 0}, // #432
  {DBGFIELD("VUZPq16_VUZPq32_VUZPq8_VZIPq16_VZIPq32_VZIPq8") 2, 0, 0, 20, 2, 22, 2, 65, 1}, // #433
  {DBGFIELD("VABSD_VNEGD")        1, 0, 0,  3, 2,  1, 1,  0, 0}, // #434
  {DBGFIELD("VABSS_VNEGS")        1, 0, 0,  3, 2,  1, 1,  0, 0}, // #435
  {DBGFIELD("VCMPD_VCMPED_VCMPEZD_VCMPZD") 1, 0, 0,  3, 2,  1, 1,  0, 0}, // #436
  {DBGFIELD("VCMPES_VCMPEZS_VCMPS_VCMPZS") 1, 0, 0,  3, 2,  1, 1,  0, 0}, // #437
  {DBGFIELD("VABDLsv2i64_VABDLsv4i32_VABDLsv8i16_VABDLuv2i64_VABDLuv4i32_VABDLuv8i16_VABDsv16i8_VABDsv4i32_VABDsv8i16_VABDuv16i8_VABDuv4i32_VABDuv8i16_VMAXsv16i8_VMAXsv4i32_VMAXsv8i16_VMAXuv16i8_VMAXuv4i32_VMAXuv8i16_VMINsv16i8_VMINsv4i32_VMINsv8i16_VMINuv16i8_VMINuv4i32_VMINuv8i16") 1, 0, 0,  3, 2, 15, 1, 66, 1}, // #438
  {DBGFIELD("VABDfd_VADDfd_VMAXfd_VMINfd_VSUBfd") 1, 0, 0,  3, 2, 16, 1, 67, 2}, // #439
  {DBGFIELD("VABDfq_VADDfq_VMAXfq_VMINfq_VSUBfq") 1, 0, 0,  3, 2, 26, 1, 67, 2}, // #440
  {DBGFIELD("VABDsv2i32_VABDsv4i16_VABDsv8i8_VABDuv2i32_VABDuv4i16_VABDuv8i8_VMAXsv2i32_VMAXsv4i16_VMAXsv8i8_VMAXuv2i32_VMAXuv4i16_VMAXuv8i8_VMINsv2i32_VMINsv4i16_VMINsv8i8_VMINuv2i32_VMINuv4i16_VMINuv8i8_VPMAXs16_VPMAXs32_VPMAXs8_VPMAXu16_VPMAXu32_VPMAXu8_VPMINs16_VPMINs32_VPMINs8_VPMINu16_VPMINu32_VPMINu8") 1, 0, 0,  3, 2, 15, 1, 66, 1}, // #441
  {DBGFIELD("VADDS_VSUBS")        1, 0, 0,  3, 2, 15, 1,  0, 0}, // #442
  {DBGFIELD("VMAXNMD_VMAXNMND_VMAXNMNQ_VMAXNMS_VMINNMD_VMINNMND_VMINNMNQ_VMINNMS") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #443
  {DBGFIELD("VPADDf_VPMAXf_VPMINf") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #444
  {DBGFIELD("VADDD_VSUBD")        1, 0, 0,  3, 2, 15, 1,  0, 0}, // #445
  {DBGFIELD("VRECPSfd_VRSQRTSfd") 1, 0, 0,  3, 2, 29, 1, 67, 2}, // #446
  {DBGFIELD("VRECPSfq_VRSQRTSfq") 1, 0, 0,  3, 2, 30, 1, 67, 2}, // #447
  {DBGFIELD("VMULLp_VMULLslsv2i32_VMULLslsv4i16_VMULLsluv2i32_VMULLsluv4i16_VMULLsv4i32_VMULLsv8i16_VMULLuv4i32_VMULLuv8i16_VMULpd_VMULslv4i16_VMULv4i16_VMULv8i8_VQDMULHslv4i16_VQDMULHv4i16_VQDMULLslv2i32_VQDMULLslv4i16_VQDMULLv4i32_VQRDMULHslv4i16_VQRDMULHv4i16") 1, 0, 0,  3, 2, 26, 1, 67, 2}, // #448
  {DBGFIELD("VMULLsv2i64_VMULLuv2i64_VMULslv2i32_VMULv2i32_VQDMULHslv2i32_VQDMULHv2i32_VQDMULLv2i64_VQRDMULHslv2i32_VQRDMULHv2i32") 1, 0, 0, 18, 2, 37, 1, 66, 1}, // #449
  {DBGFIELD("VMULS_VNMULS")       1, 0, 0,  3, 2, 16, 1,  0, 0}, // #450
  {DBGFIELD("VMULfd")             1, 0, 0,  3, 2, 16, 1, 66, 1}, // #451
  {DBGFIELD("VMULfq")             1, 0, 0,  3, 2, 26, 1, 66, 1}, // #452
  {DBGFIELD("VMULpq_VMULslv8i16_VMULv16i8_VMULv8i16_VQDMULHslv8i16_VQDMULHv8i16_VQRDMULHslv8i16_VQRDMULHv8i16") 1, 0, 0,  3, 2, 37, 1, 67, 2}, // #453
  {DBGFIELD("VMULslfd")           1, 0, 0,  3, 2, 16, 1, 67, 2}, // #454
  {DBGFIELD("VMULslfq")           1, 0, 0,  3, 2, 26, 1, 67, 2}, // #455
  {DBGFIELD("VMULslv4i32_VMULv4i32_VQDMULHslv4i32_VQDMULHv4i32_VQRDMULHslv4i32_VQRDMULHv4i32") 1, 0, 0, 18, 2, 29, 1, 66, 1}, // #456
  {DBGFIELD("VMULD_VNMULD")       1, 0, 0,  3, 2, 26, 1,  0, 0}, // #457
  {DBGFIELD("VFMAD_VFMSD_VFNMAD_VFNMSD") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #458
  {DBGFIELD("VFMAS_VFMSS_VFNMAS_VFNMSS") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #459
  {DBGFIELD("VMLAD_VMLSD_VNMLAD_VNMLSD") 1, 0, 0,  3, 2, 29, 1,  0, 0}, // #460
  {DBGFIELD("VMLALslsv2i32_VMLALsluv2i32_VMLALsv2i64_VMLALuv2i64_VMLAslv2i32_VMLAv2i32_VMLSLslsv2i32_VMLSLsluv2i32_VMLSLsv2i64_VMLSLuv2i64_VMLSslv2i32_VMLSv2i32_VQDMLALslv2i32_VQDMLALv2i64_VQDMLSLslv2i32_VQDMLSLv2i64") 1, 0, 0, 18, 2, 37, 1, 64, 2}, // #461
  {DBGFIELD("VMLALslsv4i16_VMLALsluv4i16_VMLALsv4i32_VMLALsv8i16_VMLALuv4i32_VMLALuv8i16_VMLAslv4i16_VMLAv4i16_VMLAv8i8_VMLSLslsv4i16_VMLSLsluv4i16_VMLSLsv4i32_VMLSLsv8i16_VMLSLuv4i32_VMLSLuv8i16_VMLSslv4i16_VMLSv4i16_VMLSv8i8_VQDMLALslv4i16_VQDMLALv4i32_VQDMLSLslv4i16_VQDMLSLv4i32") 1, 0, 0,  3, 2, 26, 1, 69, 3}, // #462
  {DBGFIELD("VMLAS_VMLSS_VNMLAS_VNMLSS") 1, 0, 0,  3, 2, 41, 1,  0, 0}, // #463
  {DBGFIELD("VMLAfd_VMLAslfd_VMLSfd_VMLSslfd") 1, 0, 0,  3, 2, 29, 1, 64, 2}, // #464
  {DBGFIELD("VMLAfq_VMLAslfq_VMLSfq_VMLSslfq") 1, 0, 0,  3, 2, 30, 1, 64, 2}, // #465
  {DBGFIELD("VMLAslv4i32_VMLAv4i32_VMLSslv4i32_VMLSv4i32") 1, 0, 0, 18, 2, 29, 1, 64, 2}, // #466
  {DBGFIELD("VMLAslv8i16_VMLAv16i8_VMLAv8i16_VMLSslv8i16_VMLSv16i8_VMLSv8i16") 1, 0, 0,  3, 2, 37, 1, 69, 3}, // #467
  {DBGFIELD("VFMAfd_VFMSfd")      1, 0, 0,  3, 2, 29, 1, 64, 2}, // #468
  {DBGFIELD("VFMAfq_VFMSfq")      1, 0, 0,  3, 2, 30, 1, 64, 2}, // #469
  {DBGFIELD("VCVTANSD_VCVTANSQ_VCVTANUD_VCVTANUQ_VCVTASD_VCVTASS_VCVTAUD_VCVTAUS_VCVTBDH_VCVTBHD_VCVTMNSD_VCVTMNSQ_VCVTMNUD_VCVTMNUQ_VCVTMSD_VCVTMSS_VCVTMUD_VCVTMUS_VCVTNNSD_VCVTNNSQ_VCVTNNUD_VCVTNNUQ_VCVTNSD_VCVTNSS_VCVTNUD_VCVTNUS_VCVTPNSD_VCVTPNSQ_VCVTPNUD_VCVTPNUQ_VCVTPSD_VCVTPSS_VCVTPUD_VCVTPUS_VCVTTDH_VCVTTHD") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #470
  {DBGFIELD("VCVTBHS_VCVTTHS")    1, 0, 0,  3, 2, 15, 1,  0, 0}, // #471
  {DBGFIELD("VCVTBSH_VCVTTSH")    1, 0, 0,  3, 2, 15, 1,  0, 0}, // #472
  {DBGFIELD("VCVTDS")             1, 0, 0,  3, 2, 15, 1,  0, 0}, // #473
  {DBGFIELD("VCVTSD")             1, 0, 0,  3, 2, 15, 1,  0, 0}, // #474
  {DBGFIELD("VCVTf2h_VCVTf2sq_VCVTf2uq_VCVTf2xsq_VCVTf2xuq_VCVTh2f_VCVTs2fq_VCVTu2fq_VCVTxs2fq_VCVTxu2fq") 1, 0, 0,  3, 2, 26, 1, 66, 1}, // #475
  {DBGFIELD("VCVTf2sd_VCVTf2ud_VCVTf2xsd_VCVTf2xud_VCVTs2fd_VCVTu2fd_VCVTxs2fd_VCVTxu2fd") 1, 0, 0,  3, 2, 16, 1, 66, 1}, // #476
  {DBGFIELD("VSITOD_VUITOD")      1, 0, 0,  3, 2, 15, 1,  0, 0}, // #477
  {DBGFIELD("VSITOS_VUITOS")      1, 0, 0,  3, 2, 15, 1,  0, 0}, // #478
  {DBGFIELD("VTOSHD_VTOSLD_VTOUHD_VTOULD") 1, 0, 0,  3, 2, 15, 1,  0, 0}, // #479
  {DBGFIELD("VTOSHS_VTOSLS_VTOUHS_VTOULS") 1, 0, 0,  3, 2, 15, 1,  0, 0}, // #480
  {DBGFIELD("VTOSIRD_VTOSIZD_VTOUIRD_VTOUIZD") 1, 0, 0,  3, 2, 15, 1,  0, 0}, // #481
  {DBGFIELD("VTOSIRS_VTOSIZS_VTOUIRS_VTOUIZS") 1, 0, 0,  3, 2, 15, 1,  0, 0}, // #482
  {DBGFIELD("FCONSTD_VMOVD_VMOVDcc") 1, 0, 0,  3, 2,  1, 1,  0, 0}, // #483
  {DBGFIELD("FCONSTS_VMOVS_VMOVScc") 1, 0, 0,  3, 2,  1, 1,  0, 0}, // #484
  {DBGFIELD("VMOVv16i8_VMOVv1i64_VMOVv2f32_VMOVv2i32_VMOVv2i64_VMOVv4f32_VMOVv4i16_VMOVv4i32_VMOVv8i16_VMOVv8i8_VMVNv2i32_VMVNv4i16_VMVNv4i32_VMVNv8i16") 1, 0, 0,  3, 2,  3, 1,  0, 0}, // #485
  {DBGFIELD("VMVNd_VMVNq")        1, 0, 0,  3, 2,  3, 1, 66, 1}, // #486
  {DBGFIELD("VMOVLsv2i64_VMOVLsv4i32_VMOVLsv8i16_VMOVLuv2i64_VMOVLuv4i32_VMOVLuv8i16") 1, 0, 0,  3, 2, 15, 1,  0, 0}, // #487
  {DBGFIELD("VMOVNv2i32_VMOVNv4i16_VMOVNv8i8") 1, 0, 0,  3, 2,  3, 1,  0, 0}, // #488
  {DBGFIELD("VQMOVNsuv2i32_VQMOVNsuv4i16_VQMOVNsuv8i8_VQMOVNsv2i32_VQMOVNsv4i16_VQMOVNsv8i8_VQMOVNuv2i32_VQMOVNuv4i16_VQMOVNuv8i8") 1, 0, 0,  3, 2, 15, 1,  0, 0}, // #489
  {DBGFIELD("VDUPLN16d_VDUPLN32d_VDUPLN8d_VDUPfdf_VDUPfqf") 1, 0, 0,  3, 2,  2, 1,  0, 0}, // #490
  {DBGFIELD("VDUPLN16q_VDUPLN32q_VDUPLN8q") 1, 0, 0,  3, 2,  2, 1,  0, 0}, // #491
  {DBGFIELD("VDUP16d_VDUP16q_VDUP32d_VDUP32q_VDUP8d_VDUP8q") 1, 0, 0,  3, 2,  1, 1,  0, 0}, // #492
  {DBGFIELD("VMOVRS")             1, 0, 0,  3, 2,  1, 1,  0, 0}, // #493
  {DBGFIELD("VMOVSR")             1, 0, 0,  3, 2,  1, 1,  0, 0}, // #494
  {DBGFIELD("VSETLNi16_VSETLNi32_VSETLNi8") 1, 0, 0,  3, 2,  3, 1,  0, 0}, // #495
  {DBGFIELD("VMOVRRD_VMOVRRS")    2, 0, 0, 20, 2, 18, 2,  0, 0}, // #496
  {DBGFIELD("VMOVDRR")            1, 0, 0,  3, 2,  1, 1,  0, 0}, // #497
  {DBGFIELD("VMOVSRR")            1, 0, 0,  3, 2,  1, 1,  0, 0}, // #498
  {DBGFIELD("VGETLNi32_VGETLNu16_VGETLNu8") 1, 0, 0,  3, 2,  2, 1,  0, 0}, // #499
  {DBGFIELD("VGETLNs16_VGETLNs8") 1, 0, 0,  3, 2,  2, 1,  0, 0}, // #500
  {DBGFIELD("VMRS_VMRS_FPEXC_VMRS_FPINST_VMRS_FPINST2_VMRS_FPSID_VMRS_MVFR0_VMRS_MVFR1") 1, 0, 0,  3, 2,  1, 1,  0, 0}, // #501
  {DBGFIELD("VMSR_VMSR_FPEXC_VMSR_FPINST_VMSR_FPINST2_VMSR_FPSID") 1, 0, 0,  3, 2,  1, 1,  0, 0}, // #502
  {DBGFIELD("FMSTAT")             1, 0, 0,  3, 2,  1, 1,  0, 0}, // #503
  {DBGFIELD("VLDRD")              1, 0, 0, 28, 3, 18, 2,  0, 0}, // #504
  {DBGFIELD("VLDRS")              1, 0, 0, 28, 3, 18, 2,  0, 0}, // #505
  {DBGFIELD("VSTRD")              1, 0, 0, 28, 3, 18, 2,  0, 0}, // #506
  {DBGFIELD("VSTRS")              1, 0, 0, 28, 3, 18, 2,  0, 0}, // #507
  {DBGFIELD("VLDMQIA")            65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #508
  {DBGFIELD("VSTMQIA")            1, 0, 0, 28, 3, 18, 2,  0, 0}, // #509
  {DBGFIELD("VLDMDIA_VLDMSIA")    65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #510
  {DBGFIELD("VLDMDDB_UPD_VLDMDIA_UPD_VLDMSDB_UPD_VLDMSIA_UPD") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #511
  {DBGFIELD("VSTMDIA_VSTMSIA")    65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #512
  {DBGFIELD("VSTMDDB_UPD_VSTMDIA_UPD_VSTMSDB_UPD_VSTMSIA_UPD") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #513
  {DBGFIELD("VLD1d16_VLD1d32_VLD1d64_VLD1d8") 1, 0, 0, 28, 3, 18, 2,  0, 0}, // #514
  {DBGFIELD("VLD1q16_VLD1q32_VLD1q64_VLD1q8") 1, 0, 0, 28, 3, 18, 2,  0, 0}, // #515
  {DBGFIELD("VLD1d16wb_fixed_VLD1d16wb_register_VLD1d32wb_fixed_VLD1d32wb_register_VLD1d64wb_fixed_VLD1d64wb_register_VLD1d8wb_fixed_VLD1d8wb_register") 1, 0, 0, 28, 3, 18, 2,  0, 0}, // #516
  {DBGFIELD("VLD1q16wb_fixed_VLD1q16wb_register_VLD1q32wb_fixed_VLD1q32wb_register_VLD1q64wb_fixed_VLD1q64wb_register_VLD1q8wb_fixed_VLD1q8wb_register") 1, 0, 0, 28, 3, 18, 2,  0, 0}, // #517
  {DBGFIELD("VLD1d16T_VLD1d32T_VLD1d64T_VLD1d64TPseudo_VLD1d8T") 1, 0, 0, 31, 3, 35, 2,  0, 0}, // #518
  {DBGFIELD("VLD1d16Twb_fixed_VLD1d16Twb_register_VLD1d32Twb_fixed_VLD1d32Twb_register_VLD1d64Twb_fixed_VLD1d64Twb_register_VLD1d8Twb_fixed_VLD1d8Twb_register") 1, 0, 0, 28, 3, 18, 2,  0, 0}, // #519
  {DBGFIELD("VLD1d16Q_VLD1d32Q_VLD1d64Q_VLD1d64QPseudo_VLD1d8Q") 1, 0, 0, 31, 3, 35, 2,  0, 0}, // #520
  {DBGFIELD("VLD1d16Qwb_fixed_VLD1d16Qwb_register_VLD1d32Qwb_fixed_VLD1d32Qwb_register_VLD1d64Qwb_fixed_VLD1d64Qwb_register_VLD1d8Qwb_fixed_VLD1d8Qwb_register") 1, 0, 0, 28, 3, 18, 2,  0, 0}, // #521
  {DBGFIELD("VLD2b16_VLD2b32_VLD2b8_VLD2d16_VLD2d32_VLD2d8") 1, 0, 0, 22, 3, 31, 2,  0, 0}, // #522
  {DBGFIELD("VLD2q16_VLD2q16Pseudo_VLD2q32_VLD2q32Pseudo_VLD2q8_VLD2q8Pseudo") 1, 0, 0, 25, 3, 33, 2,  0, 0}, // #523
  {DBGFIELD("VLD2b16wb_fixed_VLD2b16wb_register_VLD2b32wb_fixed_VLD2b32wb_register_VLD2b8wb_fixed_VLD2b8wb_register_VLD2d16wb_fixed_VLD2d16wb_register_VLD2d32wb_fixed_VLD2d32wb_register_VLD2d8wb_fixed_VLD2d8wb_register") 1, 0, 0, 22, 3, 31, 2,  0, 0}, // #524
  {DBGFIELD("VLD2q16PseudoWB_fixed_VLD2q16PseudoWB_register_VLD2q16wb_fixed_VLD2q16wb_register_VLD2q32PseudoWB_fixed_VLD2q32PseudoWB_register_VLD2q32wb_fixed_VLD2q32wb_register_VLD2q8PseudoWB_fixed_VLD2q8PseudoWB_register_VLD2q8wb_fixed_VLD2q8wb_register") 1, 0, 0, 25, 3, 33, 2,  0, 0}, // #525
  {DBGFIELD("VLD3d16_VLD3d32_VLD3d8_VLD3q16_VLD3q32_VLD3q8") 1, 0, 0, 34, 3, 37, 2,  0, 0}, // #526
  {DBGFIELD("VLD3d16Pseudo_VLD3d32Pseudo_VLD3d8Pseudo_VLD3q16oddPseudo_VLD3q32oddPseudo_VLD3q8oddPseudo") 1, 0, 0, 34, 3, 37, 2,  0, 0}, // #527
  {DBGFIELD("VLD3d16_UPD_VLD3d32_UPD_VLD3d8_UPD_VLD3q16_UPD_VLD3q32_UPD_VLD3q8_UPD") 1, 0, 0, 34, 3, 37, 2,  0, 0}, // #528
  {DBGFIELD("VLD3d16Pseudo_UPD_VLD3d32Pseudo_UPD_VLD3d8Pseudo_UPD_VLD3q16Pseudo_UPD_VLD3q16oddPseudo_UPD_VLD3q32Pseudo_UPD_VLD3q32oddPseudo_UPD_VLD3q8Pseudo_UPD_VLD3q8oddPseudo_UPD") 1, 0, 0, 34, 3, 37, 2,  0, 0}, // #529
  {DBGFIELD("VLD4d16_VLD4d32_VLD4d8_VLD4q16_VLD4q32_VLD4q8") 1, 0, 0, 40, 3, 41, 2,  0, 0}, // #530
  {DBGFIELD("VLD4d16Pseudo_VLD4d32Pseudo_VLD4d8Pseudo_VLD4q16oddPseudo_VLD4q32oddPseudo_VLD4q8oddPseudo") 1, 0, 0, 40, 3, 41, 2,  0, 0}, // #531
  {DBGFIELD("VLD4d16_UPD_VLD4d32_UPD_VLD4d8_UPD_VLD4q16_UPD_VLD4q32_UPD_VLD4q8_UPD") 1, 0, 0, 40, 3, 41, 2,  0, 0}, // #532
  {DBGFIELD("VLD4d16Pseudo_UPD_VLD4d32Pseudo_UPD_VLD4d8Pseudo_UPD_VLD4q16Pseudo_UPD_VLD4q16oddPseudo_UPD_VLD4q32Pseudo_UPD_VLD4q32oddPseudo_UPD_VLD4q8Pseudo_UPD_VLD4q8oddPseudo_UPD") 1, 0, 0, 40, 3, 41, 2,  0, 0}, // #533
  {DBGFIELD("VLD1DUPd16_VLD1DUPd32_VLD1DUPd8_VLD1DUPq16_VLD1DUPq32_VLD1DUPq8") 1, 0, 0, 22, 3, 31, 2,  0, 0}, // #534
  {DBGFIELD("VLD1LNd16_VLD1LNd32_VLD1LNd8_VLD1LNq16Pseudo_VLD1LNq32Pseudo_VLD1LNq8Pseudo") 1, 0, 0, 25, 3, 33, 2,  0, 0}, // #535
  {DBGFIELD("VLD1DUPd16wb_fixed_VLD1DUPd16wb_register_VLD1DUPd32wb_fixed_VLD1DUPd32wb_register_VLD1DUPd8wb_fixed_VLD1DUPd8wb_register_VLD1DUPq16wb_fixed_VLD1DUPq16wb_register_VLD1DUPq32wb_fixed_VLD1DUPq32wb_register_VLD1DUPq8wb_fixed_VLD1DUPq8wb_register") 1, 0, 0, 22, 3, 31, 2,  0, 0}, // #536
  {DBGFIELD("VLD1LNd16_UPD_VLD1LNd32_UPD_VLD1LNd8_UPD_VLD1LNq16Pseudo_UPD_VLD1LNq32Pseudo_UPD_VLD1LNq8Pseudo_UPD") 1, 0, 0, 25, 3, 33, 2,  0, 0}, // #537
  {DBGFIELD("VLD2DUPd16_VLD2DUPd16x2_VLD2DUPd32_VLD2DUPd32x2_VLD2DUPd8_VLD2DUPd8x2") 1, 0, 0, 22, 3, 31, 2,  0, 0}, // #538
  {DBGFIELD("VLD2LNd16_VLD2LNd16Pseudo_VLD2LNd32_VLD2LNd32Pseudo_VLD2LNd8_VLD2LNd8Pseudo_VLD2LNq16_VLD2LNq16Pseudo_VLD2LNq32_VLD2LNq32Pseudo") 1, 0, 0, 25, 3, 33, 2,  0, 0}, // #539
  {DBGFIELD("VLD2LNd16_UPD_VLD2LNd32_UPD_VLD2LNd8_UPD_VLD2LNq16_UPD_VLD2LNq32_UPD") 1, 0, 0, 25, 3, 33, 2,  0, 0}, // #540
  {DBGFIELD("VLD2DUPd16wb_fixed_VLD2DUPd16wb_register_VLD2DUPd16x2wb_fixed_VLD2DUPd16x2wb_register_VLD2DUPd32wb_fixed_VLD2DUPd32wb_register_VLD2DUPd32x2wb_fixed_VLD2DUPd32x2wb_register_VLD2DUPd8wb_fixed_VLD2DUPd8wb_register_VLD2DUPd8x2wb_fixed_VLD2DUPd8x2wb_register") 1, 0, 0, 22, 3, 31, 2,  0, 0}, // #541
  {DBGFIELD("VLD2LNd16Pseudo_UPD_VLD2LNd32Pseudo_UPD_VLD2LNd8Pseudo_UPD_VLD2LNq16Pseudo_UPD_VLD2LNq32Pseudo_UPD") 1, 0, 0, 25, 3, 33, 2,  0, 0}, // #542
  {DBGFIELD("VLD3DUPd16_VLD3DUPd16Pseudo_VLD3DUPd32_VLD3DUPd32Pseudo_VLD3DUPd8_VLD3DUPd8Pseudo_VLD3DUPq16_VLD3DUPq32_VLD3DUPq8") 1, 0, 0, 34, 3, 37, 2,  0, 0}, // #543
  {DBGFIELD("VLD3LNd16_VLD3LNd16Pseudo_VLD3LNd32_VLD3LNd32Pseudo_VLD3LNd8_VLD3LNd8Pseudo_VLD3LNq16_VLD3LNq16Pseudo_VLD3LNq32_VLD3LNq32Pseudo") 1, 0, 0, 37, 3, 39, 2,  0, 0}, // #544
  {DBGFIELD("VLD3DUPd16_UPD_VLD3DUPd32_UPD_VLD3DUPd8_UPD_VLD3DUPq16_UPD_VLD3DUPq32_UPD_VLD3DUPq8_UPD") 1, 0, 0, 34, 3, 37, 2,  0, 0}, // #545
  {DBGFIELD("VLD3LNd16_UPD_VLD3LNd32_UPD_VLD3LNd8_UPD_VLD3LNq16_UPD_VLD3LNq32_UPD") 1, 0, 0, 37, 3, 39, 2,  0, 0}, // #546
  {DBGFIELD("VLD3DUPd16Pseudo_UPD_VLD3DUPd32Pseudo_UPD_VLD3DUPd8Pseudo_UPD") 1, 0, 0, 34, 3, 37, 2,  0, 0}, // #547
  {DBGFIELD("VLD3LNd16Pseudo_UPD_VLD3LNd32Pseudo_UPD_VLD3LNd8Pseudo_UPD_VLD3LNq16Pseudo_UPD_VLD3LNq32Pseudo_UPD") 1, 0, 0, 37, 3, 39, 2,  0, 0}, // #548
  {DBGFIELD("VLD4DUPd16_VLD4DUPd16Pseudo_VLD4DUPd32_VLD4DUPd32Pseudo_VLD4DUPd8_VLD4DUPd8Pseudo_VLD4DUPq16_VLD4DUPq32_VLD4DUPq8") 1, 0, 0, 31, 3, 35, 2,  0, 0}, // #549
  {DBGFIELD("VLD4LNd16_VLD4LNd16Pseudo_VLD4LNd32_VLD4LNd32Pseudo_VLD4LNd8_VLD4LNd8Pseudo_VLD4LNq16_VLD4LNq16Pseudo_VLD4LNq32_VLD4LNq32Pseudo") 1, 0, 0, 40, 3, 41, 2,  0, 0}, // #550
  {DBGFIELD("VLD4DUPd16_UPD_VLD4DUPd32_UPD_VLD4DUPd8_UPD_VLD4DUPq16_UPD_VLD4DUPq32_UPD_VLD4DUPq8_UPD") 1, 0, 0, 31, 3, 35, 2,  0, 0}, // #551
  {DBGFIELD("VLD4LNd16_UPD_VLD4LNd32_UPD_VLD4LNd8_UPD_VLD4LNq16_UPD_VLD4LNq32_UPD") 1, 0, 0, 40, 3, 41, 2,  0, 0}, // #552
  {DBGFIELD("VLD4DUPd16Pseudo_UPD_VLD4DUPd32Pseudo_UPD_VLD4DUPd8Pseudo_UPD") 1, 0, 0, 31, 3, 35, 2,  0, 0}, // #553
  {DBGFIELD("VLD4LNd16Pseudo_UPD_VLD4LNd32Pseudo_UPD_VLD4LNd8Pseudo_UPD_VLD4LNq16Pseudo_UPD_VLD4LNq32Pseudo_UPD") 1, 0, 0, 40, 3, 41, 2,  0, 0}, // #554
  {DBGFIELD("VST1d16_VST1d32_VST1d64_VST1d8") 1, 0, 0, 28, 3, 18, 2,  0, 0}, // #555
  {DBGFIELD("VST1q16_VST1q32_VST1q64_VST1q8") 1, 0, 0, 28, 3, 18, 2,  0, 0}, // #556
  {DBGFIELD("VST1d16wb_fixed_VST1d16wb_register_VST1d32wb_fixed_VST1d32wb_register_VST1d64wb_fixed_VST1d64wb_register_VST1d8wb_fixed_VST1d8wb_register") 1, 0, 0, 28, 3, 18, 2,  0, 0}, // #557
  {DBGFIELD("VST1q16wb_fixed_VST1q16wb_register_VST1q32wb_fixed_VST1q32wb_register_VST1q64wb_fixed_VST1q64wb_register_VST1q8wb_fixed_VST1q8wb_register") 1, 0, 0, 28, 3, 18, 2,  0, 0}, // #558
  {DBGFIELD("VST1d16T_VST1d32T_VST1d64T_VST1d64TPseudo_VST1d8T") 1, 0, 0, 31, 3, 35, 2,  0, 0}, // #559
  {DBGFIELD("VST1d16Twb_fixed_VST1d16Twb_register_VST1d32Twb_fixed_VST1d32Twb_register_VST1d64Twb_fixed_VST1d64Twb_register_VST1d8Twb_fixed_VST1d8Twb_register") 1, 0, 0, 31, 3, 35, 2,  0, 0}, // #560
  {DBGFIELD("VST1d64TPseudoWB_fixed_VST1d64TPseudoWB_register") 1, 0, 0, 31, 3, 35, 2,  0, 0}, // #561
  {DBGFIELD("VST1d16Q_VST1d32Q_VST1d64Q_VST1d64QPseudo_VST1d8Q") 1, 0, 0, 31, 3, 35, 2,  0, 0}, // #562
  {DBGFIELD("VST1d16Qwb_fixed_VST1d16Qwb_register_VST1d32Qwb_fixed_VST1d32Qwb_register_VST1d64Qwb_fixed_VST1d64Qwb_register_VST1d8Qwb_fixed_VST1d8Qwb_register") 1, 0, 0, 31, 3, 35, 2,  0, 0}, // #563
  {DBGFIELD("VST1d64QPseudoWB_fixed_VST1d64QPseudoWB_register") 1, 0, 0, 31, 3, 35, 2,  0, 0}, // #564
  {DBGFIELD("VST2b16_VST2b32_VST2b8_VST2d16_VST2d32_VST2d8") 1, 0, 0, 28, 3, 18, 2,  0, 0}, // #565
  {DBGFIELD("VST2b16wb_fixed_VST2b16wb_register_VST2b32wb_fixed_VST2b32wb_register_VST2b8wb_fixed_VST2b8wb_register_VST2d16wb_fixed_VST2d16wb_register_VST2d32wb_fixed_VST2d32wb_register_VST2d8wb_fixed_VST2d8wb_register") 1, 0, 0, 28, 3, 18, 2,  0, 0}, // #566
  {DBGFIELD("VST2q16_VST2q16Pseudo_VST2q32_VST2q32Pseudo_VST2q8_VST2q8Pseudo") 1, 0, 0, 28, 3, 18, 2,  0, 0}, // #567
  {DBGFIELD("VST2q16PseudoWB_fixed_VST2q16PseudoWB_register_VST2q32PseudoWB_fixed_VST2q32PseudoWB_register_VST2q8PseudoWB_fixed_VST2q8PseudoWB_register") 1, 0, 0, 28, 3, 18, 2,  0, 0}, // #568
  {DBGFIELD("VST2q16wb_fixed_VST2q16wb_register_VST2q32wb_fixed_VST2q32wb_register_VST2q8wb_fixed_VST2q8wb_register") 1, 0, 0, 28, 3, 18, 2,  0, 0}, // #569
  {DBGFIELD("VST3d16_VST3d16Pseudo_VST3d32_VST3d32Pseudo_VST3d8_VST3d8Pseudo_VST3q16_VST3q16oddPseudo_VST3q32_VST3q32oddPseudo_VST3q8_VST3q8oddPseudo") 1, 0, 0, 31, 3, 35, 2,  0, 0}, // #570
  {DBGFIELD("VST3d16Pseudo_UPD_VST3d16_UPD_VST3d32Pseudo_UPD_VST3d32_UPD_VST3d8Pseudo_UPD_VST3d8_UPD_VST3q16Pseudo_UPD_VST3q16_UPD_VST3q16oddPseudo_UPD_VST3q32Pseudo_UPD_VST3q32_UPD_VST3q32oddPseudo_UPD_VST3q8Pseudo_UPD_VST3q8_UPD_VST3q8oddPseudo_UPD") 1, 0, 0, 31, 3, 35, 2,  0, 0}, // #571
  {DBGFIELD("VST4d16_VST4d16Pseudo_VST4d32_VST4d32Pseudo_VST4d8_VST4d8Pseudo_VST4q16_VST4q16oddPseudo_VST4q32_VST4q32oddPseudo_VST4q8_VST4q8oddPseudo") 1, 0, 0, 31, 3, 35, 2,  0, 0}, // #572
  {DBGFIELD("VST4d16Pseudo_UPD_VST4d16_UPD_VST4d32Pseudo_UPD_VST4d32_UPD_VST4d8Pseudo_UPD_VST4d8_UPD_VST4q16Pseudo_UPD_VST4q16_UPD_VST4q16oddPseudo_UPD_VST4q32Pseudo_UPD_VST4q32_UPD_VST4q32oddPseudo_UPD_VST4q8Pseudo_UPD_VST4q8_UPD_VST4q8oddPseudo_UPD") 1, 0, 0, 31, 3, 35, 2,  0, 0}, // #573
  {DBGFIELD("VST1LNd16_VST1LNd32_VST1LNd8_VST1LNq16Pseudo_VST1LNq32Pseudo_VST1LNq8Pseudo") 1, 0, 0, 28, 3, 18, 2,  0, 0}, // #574
  {DBGFIELD("VST1LNd16_UPD_VST1LNd32_UPD_VST1LNd8_UPD_VST1LNq16Pseudo_UPD_VST1LNq32Pseudo_UPD_VST1LNq8Pseudo_UPD") 1, 0, 0, 28, 3, 18, 2,  0, 0}, // #575
  {DBGFIELD("VST2LNd16_VST2LNd16Pseudo_VST2LNd32_VST2LNd32Pseudo_VST2LNd8_VST2LNd8Pseudo_VST2LNq16_VST2LNq16Pseudo_VST2LNq32_VST2LNq32Pseudo") 1, 0, 0, 28, 3, 18, 2,  0, 0}, // #576
  {DBGFIELD("VST2LNd16Pseudo_UPD_VST2LNd16_UPD_VST2LNd32Pseudo_UPD_VST2LNd32_UPD_VST2LNd8Pseudo_UPD_VST2LNd8_UPD_VST2LNq16Pseudo_UPD_VST2LNq16_UPD_VST2LNq32Pseudo_UPD_VST2LNq32_UPD") 1, 0, 0, 28, 3, 18, 2,  0, 0}, // #577
  {DBGFIELD("VST3LNd16_VST3LNd16Pseudo_VST3LNd32_VST3LNd32Pseudo_VST3LNd8_VST3LNd8Pseudo_VST3LNq16_VST3LNq16Pseudo_VST3LNq32_VST3LNq32Pseudo") 1, 0, 0, 31, 3, 35, 2,  0, 0}, // #578
  {DBGFIELD("VST3LNd16Pseudo_UPD_VST3LNd16_UPD_VST3LNd32Pseudo_UPD_VST3LNd32_UPD_VST3LNd8Pseudo_UPD_VST3LNd8_UPD_VST3LNq16Pseudo_UPD_VST3LNq16_UPD_VST3LNq32Pseudo_UPD_VST3LNq32_UPD") 1, 0, 0, 31, 3, 35, 2,  0, 0}, // #579
  {DBGFIELD("VST4LNd16_VST4LNd16Pseudo_VST4LNd32_VST4LNd32Pseudo_VST4LNd8_VST4LNd8Pseudo_VST4LNq16_VST4LNq16Pseudo_VST4LNq32_VST4LNq32Pseudo") 1, 0, 0, 31, 3, 35, 2,  0, 0}, // #580
  {DBGFIELD("VST4LNd16Pseudo_UPD_VST4LNd16_UPD_VST4LNd32Pseudo_UPD_VST4LNd32_UPD_VST4LNd8Pseudo_UPD_VST4LNd8_UPD_VST4LNq16Pseudo_UPD_VST4LNq16_UPD_VST4LNq32Pseudo_UPD_VST4LNq32_UPD") 1, 0, 0, 31, 3, 35, 2,  0, 0}, // #581
  {DBGFIELD("VDIVS")              1, 0, 0,  3, 2, 28, 1,  0, 0}, // #582
  {DBGFIELD("VSQRTS")             1, 0, 0,  3, 2, 44, 1,  0, 0}, // #583
  {DBGFIELD("VDIVD")              1, 0, 0,  3, 2, 27, 1,  0, 0}, // #584
  {DBGFIELD("VSQRTD")             1, 0, 0,  3, 2, 43, 1,  0, 0}, // #585
  {DBGFIELD("ABS")                0, 0, 0,  0, 0,  0, 0,  0, 0}, // #586
  {DBGFIELD("SwiftWriteP01TwoCycle_ReadALU") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #587
  {DBGFIELD("WriteALU_ReadALU")   0, 0, 0,  0, 0,  0, 0,  0, 0}, // #588
  {DBGFIELD("SwiftWriteP01ThreeCycleTwoUops_anonymous.val.3455") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #589
  {DBGFIELD("SwiftWriteP01TwoCycle_NoReadAdvance") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #590
  {DBGFIELD("SwiftWriteP0ThreeCycleThreeUops_anonymous.val.3455") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #591
  {DBGFIELD("SwiftWriteP01OneCycle_ReadALU") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #592
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_A9WriteAdr_A9WriteIssue") 1, 0, 0,  7, 2, 48, 4,  0, 0}, // #593
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteIssue") 1, 0, 0, 46, 2, 52, 6,  0, 0}, // #594
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue") 1, 0, 0, 48, 2, 58, 8,  0, 0}, // #595
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue") 1, 0, 0, 50, 2, 66, 10,  0, 0}, // #596
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue") 1, 0, 0, 52, 2, 76, 12,  0, 0}, // #597
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue") 1, 0, 0, 54, 2, 88, 14,  0, 0}, // #598
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue") 1, 0, 0, 56, 2, 102, 16,  0, 0}, // #599
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue") 1, 0, 0, 58, 2, 118, 18,  0, 0}, // #600
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteIssue") 1, 0, 0, 46, 2, 136, 18,  0, 0}, // #601
  {DBGFIELD("A9WriteAdr_A9WriteL1_A9WriteL1Hi_A9WriteIssue") 1, 0, 0,  7, 2, 154, 4,  0, 0}, // #602
  {DBGFIELD("(A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 1, 0, 0, 46, 2, 158, 6,  0, 0}, // #603
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 1, 0, 0, 48, 2, 164, 8,  0, 0}, // #604
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 1, 0, 0, 50, 2, 172, 10,  0, 0}, // #605
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 1, 0, 0, 52, 2, 182, 12,  0, 0}, // #606
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 1, 0, 0, 54, 2, 194, 14,  0, 0}, // #607
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 1, 0, 0, 56, 2, 208, 16,  0, 0}, // #608
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 1, 0, 0, 58, 2, 224, 18,  0, 0}, // #609
  {DBGFIELD("(A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 1, 0, 0, 46, 2, 242, 18,  0, 0}, // #610
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_A9WriteAdr_A9WriteB") 1, 0, 0, 60, 3, 260, 4,  0, 0}, // #611
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteB") 1, 0, 0, 63, 3, 264, 6,  0, 0}, // #612
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB") 1, 0, 0, 66, 3, 270, 8,  0, 0}, // #613
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB") 1, 0, 0, 69, 3, 278, 10,  0, 0}, // #614
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB") 1, 0, 0, 72, 3, 288, 12,  0, 0}, // #615
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB") 1, 0, 0, 75, 3, 300, 14,  0, 0}, // #616
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB") 1, 0, 0, 78, 3, 314, 16,  0, 0}, // #617
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB") 1, 0, 0, 81, 3, 330, 18,  0, 0}, // #618
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteB") 1, 0, 0, 63, 3, 348, 18,  0, 0}, // #619
  {DBGFIELD("SwiftWriteP01ThreeCycleTwoUops") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #620
  {DBGFIELD("SwiftWriteP01TwoCycle") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #621
  {DBGFIELD("WriteALU")           0, 0, 0,  0, 0,  0, 0,  0, 0}, // #622
  {DBGFIELD("A9WriteAdr_(A9WriteIssue_A9WriteLfpOp)") 1, 0, 0, 28, 3, 18, 2,  0, 0}, // #623
  {DBGFIELD("(A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp)") 1, 0, 0, 31, 3, 35, 2,  0, 0}, // #624
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)") 1, 0, 0, 84, 3, 48, 2,  0, 0}, // #625
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)") 1, 0, 0, 87, 3, 54, 2,  0, 0}, // #626
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)") 1, 0, 0, 90, 3, 62, 2,  0, 0}, // #627
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)") 1, 0, 0, 93, 3, 72, 2,  0, 0}, // #628
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)") 1, 0, 0, 96, 3, 84, 2,  0, 0}, // #629
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)") 1, 0, 0, 99, 3, 98, 2,  0, 0}, // #630
  {DBGFIELD("A9WriteAdr_A9WriteLMfp1_A9WriteL1Hi") 1, 0, 0, 28, 3, 46, 3,  0, 0}, // #631
  {DBGFIELD("(A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)") 2, 0, 0, 31, 3, 366, 5,  0, 0}, // #632
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)") 3, 0, 0, 84, 3, 371, 7,  0, 0}, // #633
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)") 4, 0, 0, 87, 3, 378, 9,  0, 0}, // #634
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)") 5, 0, 0, 90, 3, 387, 11,  0, 0}, // #635
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)") 6, 0, 0, 93, 3, 398, 13,  0, 0}, // #636
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)") 7, 0, 0, 96, 3, 411, 15,  0, 0}, // #637
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)") 8, 0, 0, 99, 3, 426, 17,  0, 0}, // #638
  {DBGFIELD("(A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)") 2, 0, 0, 31, 3, 443, 17,  0, 0}, // #639
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp)_A9WriteAdr") 1, 0, 0, 28, 3, 18, 2,  0, 0}, // #640
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_A9WriteAdr") 1, 0, 0, 28, 3, 460, 3,  0, 0}, // #641
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr)") 1, 0, 0, 31, 3, 35, 2,  0, 0}, // #642
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)") 1, 0, 0, 84, 3, 48, 2,  0, 0}, // #643
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 1, 0, 0, 87, 3, 54, 2,  0, 0}, // #644
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 1, 0, 0, 90, 3, 62, 2,  0, 0}, // #645
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 1, 0, 0, 93, 3, 72, 2,  0, 0}, // #646
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 1, 0, 0, 96, 3, 84, 2,  0, 0}, // #647
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 1, 0, 0, 99, 3, 98, 2,  0, 0}, // #648
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)") 2, 0, 0, 31, 3, 463, 5,  0, 0}, // #649
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)") 3, 0, 0, 84, 3, 468, 7,  0, 0}, // #650
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 4, 0, 0, 87, 3, 475, 9,  0, 0}, // #651
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 5, 0, 0, 90, 3, 484, 11,  0, 0}, // #652
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 6, 0, 0, 93, 3, 495, 13,  0, 0}, // #653
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 7, 0, 0, 96, 3, 508, 15,  0, 0}, // #654
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 8, 0, 0, 99, 3, 523, 17,  0, 0}, // #655
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)") 2, 0, 0, 31, 3, 540, 17,  0, 0}, // #656
  {DBGFIELD("SwiftWriteP01TwoCycle_anonymous.val.3455") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #657
  {DBGFIELD("WriteALU_anonymous.val.3455") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #658
  {DBGFIELD("WriteALU_NoReadAdvance") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #659
  {DBGFIELD("SwiftWriteP01OneCycle_ReadALU_ReadALU") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #660
  {DBGFIELD("SwiftWriteP01TwoCycle_ReadALU_ReadALU") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #661
  {DBGFIELD("SwiftWriteP01OneCycle") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #662
  {DBGFIELD("(SwiftWriteP0OneCycle_SwiftWriteP0OneCycle)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #663
  {DBGFIELD("SwiftWriteP0OneCycle") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #664
  {DBGFIELD("SwiftWriteP0P01FiveCycleTwoUops_ReadALU_ReadALU_anonymous.val.3465") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #665
  {DBGFIELD("SwiftWriteP0FourCycle_ReadALU_ReadALU_ReadALU") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #666
  {DBGFIELD("SwiftWriteP0P01FiveCycleTwoUops") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #667
  {DBGFIELD("SwiftWriteP0FourCycle") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #668
  {DBGFIELD("SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLDMAddrNoWB") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #669
  {DBGFIELD("SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLDMAddrNoWB") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #670
  {DBGFIELD("SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLDMAddrNoWB") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #671
  {DBGFIELD("SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLDMAddrNoWB") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #672
  {DBGFIELD("SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLDMAddrNoWB") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #673
  {DBGFIELD("SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLDMAddrNoWB") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #674
  {DBGFIELD("SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLDMAddrNoWB") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #675
  {DBGFIELD("SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLDMAddrNoWB") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #676
  {DBGFIELD("SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLDMAddrNoWB") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #677
  {DBGFIELD("SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLDMAddrNoWB") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #678
  {DBGFIELD("SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLDMAddrNoWB") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #679
  {DBGFIELD("SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLDMAddrNoWB") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #680
  {DBGFIELD("SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM16Cy_SwiftWriteLDMAddrNoWB") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #681
  {DBGFIELD("SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM16Cy_SwiftWriteLM17Cy_SwiftWriteLDMAddrNoWB") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #682
  {DBGFIELD("SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM16Cy_SwiftWriteLM17Cy_SwiftWriteLM18Cy_SwiftWriteLDMAddrNoWB") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #683
  {DBGFIELD("SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5CyNo_SwiftWriteLM6CyNo_SwiftWriteLM7CyNo_SwiftWriteLM8CyNo_SwiftWriteLM9CyNo_SwiftWriteLM10CyNo_SwiftWriteLM11CyNo_SwiftWriteLM12CyNo_SwiftWriteLM13CyNo_SwiftWriteLM14CyNo_SwiftWriteLM15CyNo_SwiftWriteLM16CyNo_SwiftWriteLM17CyNo_SwiftWriteLM18CyNo_SwiftWriteLDMAddrNoWB") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #684
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #685
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #686
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #687
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #688
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #689
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #690
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #691
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #692
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #693
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #694
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #695
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #696
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM16Cy") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #697
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM16Cy_SwiftWriteLM17Cy") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #698
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM16Cy_SwiftWriteLM17Cy_SwiftWriteLM18Cy") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #699
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5CyNo_SwiftWriteLM6CyNo_SwiftWriteLM7CyNo_SwiftWriteLM8CyNo_SwiftWriteLM9CyNo_SwiftWriteLM10CyNo_SwiftWriteLM11CyNo_SwiftWriteLM12CyNo_SwiftWriteLM13CyNo_SwiftWriteLM14CyNo_SwiftWriteLM15CyNo_SwiftWriteLM16CyNo_SwiftWriteLM17CyNo_SwiftWriteLM18CyNo") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #700
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteP1TwoCycle") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #701
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteP1TwoCycle") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #702
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteP1TwoCycle") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #703
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteP1TwoCycle") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #704
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteP1TwoCycle") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #705
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteP1TwoCycle") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #706
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteP1TwoCycle") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #707
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteP1TwoCycle") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #708
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteP1TwoCycle") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #709
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteP1TwoCycle") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #710
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteP1TwoCycle") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #711
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteP1TwoCycle") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #712
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM16Cy_SwiftWriteP1TwoCycle") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #713
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM16Cy_SwiftWriteLM17Cy_SwiftWriteP1TwoCycle") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #714
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM16Cy_SwiftWriteLM17Cy_SwiftWriteLM18Cy_SwiftWriteP1TwoCycle") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #715
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5CyNo_SwiftWriteLM6CyNo_SwiftWriteLM7CyNo_SwiftWriteLM8CyNo_SwiftWriteLM9CyNo_SwiftWriteLM10CyNo_SwiftWriteLM11CyNo_SwiftWriteLM12CyNo_SwiftWriteLM13CyNo_SwiftWriteLM14CyNo_SwiftWriteLM15CyNo_SwiftWriteLM16CyNo_SwiftWriteLM17CyNo_SwiftWriteLM18CyNo_SwiftWriteP1TwoCycle") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #716
  {DBGFIELD("(SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #717
  {DBGFIELD("(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #718
  {DBGFIELD("(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #719
  {DBGFIELD("(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #720
  {DBGFIELD("(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #721
  {DBGFIELD("(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #722
  {DBGFIELD("(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #723
  {DBGFIELD("(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #724
  {DBGFIELD("(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #725
  {DBGFIELD("(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #726
  {DBGFIELD("(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #727
  {DBGFIELD("(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #728
  {DBGFIELD("(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #729
  {DBGFIELD("(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #730
  {DBGFIELD("(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #731
  {DBGFIELD("SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #732
  {DBGFIELD("SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #733
  {DBGFIELD("SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #734
  {DBGFIELD("SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #735
  {DBGFIELD("SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #736
  {DBGFIELD("SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #737
  {DBGFIELD("SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #738
  {DBGFIELD("SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #739
  {DBGFIELD("SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #740
  {DBGFIELD("SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #741
  {DBGFIELD("SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #742
  {DBGFIELD("SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #743
  {DBGFIELD("SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #744
  {DBGFIELD("SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #745
  {DBGFIELD("SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #746
  {DBGFIELD("SwiftWriteLM4Cy")    0, 0, 0,  0, 0,  0, 0,  0, 0}, // #747
  {DBGFIELD("SwiftWriteLM4Cy_SwiftWriteLM4CyNo") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #748
  {DBGFIELD("SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm3") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #749
  {DBGFIELD("SwiftWriteLM4Cy_SwiftWriteLM4CyNo_SwiftWriteLM4CyNo_SwiftWriteLM4CyNo") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #750
  {DBGFIELD("SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13CyNo_SwiftWriteLM14CyNo_SwiftWriteLM17CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm5") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #751
  {DBGFIELD("SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM10Cy_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm5") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #752
  {DBGFIELD("SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13Cy_SwiftWriteLM14CyNo_SwiftWriteLM17CyNo_SwiftWriteLM18CyNo_SwiftWriteLM21CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm7") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #753
  {DBGFIELD("SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM13Cy_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm2") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #754
  {DBGFIELD("SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13Cy_SwiftWriteLM14CyNo_SwiftWriteLM17CyNo_SwiftWriteLM18CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM25CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm9") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #755
  {DBGFIELD("SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM10Cy_SwiftWriteLM14Cy_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm5") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #756
  {DBGFIELD("SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13Cy_SwiftWriteLM14CyNo_SwiftWriteLM17CyNo_SwiftWriteLM18CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM25CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm9") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #757
  {DBGFIELD("SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM11Cy_SwiftWriteLM11Cy_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm3") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #758
  {DBGFIELD("SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13Cy_SwiftWriteLM14CyNo_SwiftWriteLM17CyNo_SwiftWriteLM18CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM25CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm9") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #759
  {DBGFIELD("SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM10Cy_SwiftWriteLM14Cy_SwiftWriteLM14Cy_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm7") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #760
  {DBGFIELD("SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM17Cy_SwiftWriteLM18CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM25CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm9") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #761
  {DBGFIELD("SwiftWriteLM7Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM18CyNo_SwiftWriteLM19CyNo_SwiftWriteLM22CyNo_SwiftWriteLM19CyNo_SwiftWriteLM22CyNo_SwiftWriteLM19CyNo_SwiftWriteLM22CyNo_SwiftWriteLM19CyNo_SwiftWriteLM22CyNo_SwiftWriteLM19CyNo_SwiftWriteLM22CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm4") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #762
  {DBGFIELD("SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM13Cy_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm2") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #763
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM4Cy") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #764
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM4Cy_SwiftWriteLM4CyNo") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #765
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm3") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #766
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM4Cy_SwiftWriteLM4CyNo_SwiftWriteLM4CyNo_SwiftWriteLM4CyNo") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #767
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13CyNo_SwiftWriteLM14CyNo_SwiftWriteLM17CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm5") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #768
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM10Cy_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm5") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #769
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13Cy_SwiftWriteLM14CyNo_SwiftWriteLM17CyNo_SwiftWriteLM18CyNo_SwiftWriteLM21CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm7") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #770
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM13Cy_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm2") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #771
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13Cy_SwiftWriteLM14CyNo_SwiftWriteLM17CyNo_SwiftWriteLM18CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM25CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm9") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #772
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM10Cy_SwiftWriteLM14Cy_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm5") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #773
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13Cy_SwiftWriteLM14CyNo_SwiftWriteLM17CyNo_SwiftWriteLM18CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM25CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm9") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #774
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM11Cy_SwiftWriteLM11Cy_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm3") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #775
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13Cy_SwiftWriteLM14CyNo_SwiftWriteLM17CyNo_SwiftWriteLM18CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM25CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm9") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #776
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM10Cy_SwiftWriteLM14Cy_SwiftWriteLM14Cy_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm7") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #777
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM17Cy_SwiftWriteLM18CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM25CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm9") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #778
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM7Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM18CyNo_SwiftWriteLM19CyNo_SwiftWriteLM22CyNo_SwiftWriteLM19CyNo_SwiftWriteLM22CyNo_SwiftWriteLM19CyNo_SwiftWriteLM22CyNo_SwiftWriteLM19CyNo_SwiftWriteLM22CyNo_SwiftWriteLM19CyNo_SwiftWriteLM22CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm4") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #779
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM13Cy_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm2") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #780
  {DBGFIELD("SwiftWriteStIncAddr") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #781
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteStIncAddr") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #782
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #783
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #784
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #785
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #786
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #787
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #788
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #789
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #790
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 0, 0, 0,  0, 0,  0, 0,  0, 0} // #791
}; // CortexA9ModelSchedClasses

// {Name, NumMicroOps, BeginGroup, EndGroup, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc SwiftModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  65535, 0, 0,  0, 0,  0, 0,  0, 0},
  {DBGFIELD("IIC_iALUi_WriteALU_ReadALU") 1, 0, 0,  6, 1,  1, 1,  0, 1}, // #1
  {DBGFIELD("IIC_iALUr_WriteALU_ReadALU_ReadALU") 1, 0, 0,  6, 1,  1, 1, 86, 2}, // #2
  {DBGFIELD("IIC_iALUsr_WriteALUsi_ReadALU") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #3
  {DBGFIELD("IIC_iALUsr_WriteALUsr_ReadALUsr") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #4
  {DBGFIELD("IIC_iALUsr_WriteALUSsr_ReadALUsr") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #5
  {DBGFIELD("IIC_iBITi_WriteALU_ReadALU") 1, 0, 0,  6, 1,  1, 1,  0, 1}, // #6
  {DBGFIELD("IIC_iBITr_WriteALU_ReadALU_ReadALU") 1, 0, 0,  6, 1,  1, 1, 86, 2}, // #7
  {DBGFIELD("IIC_iBITsr_WriteALUsi_ReadALU") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #8
  {DBGFIELD("IIC_iBITsr_WriteALUsr_ReadALUsr") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #9
  {DBGFIELD("IIC_Br_WriteBr")     1, 0, 0, 61, 2,  0, 1,  0, 0}, // #10
  {DBGFIELD("IIC_iUNAsi")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #11
  {DBGFIELD("IIC_Br_WriteBrL")    1, 0, 0, 61, 2,  2, 1,  0, 0}, // #12
  {DBGFIELD("WriteBrL")           1, 0, 0, 61, 2,  2, 1,  0, 0}, // #13
  {DBGFIELD("IIC_Br_WriteBrTbl")  1, 0, 0, 102, 3,  0, 1,  0, 0}, // #14
  {DBGFIELD("WriteBr")            1, 0, 0, 61, 2,  0, 1,  0, 0}, // #15
  {DBGFIELD("IIC_iUNAr_WriteALU") 1, 0, 0,  6, 1,  1, 1,  0, 0}, // #16
  {DBGFIELD("IIC_iCMPi_WriteCMP_ReadALU") 1, 0, 0,  6, 1,  1, 1,  0, 1}, // #17
  {DBGFIELD("IIC_iCMPr_WriteCMP_ReadALU_ReadALU") 1, 0, 0,  6, 1,  1, 1, 86, 2}, // #18
  {DBGFIELD("IIC_iCMPsr_WriteCMPsi_ReadALU") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #19
  {DBGFIELD("IIC_iCMPsr_WriteCMPsr_ReadALU") 1, 0, 0,  6, 1,  2, 1,  0, 1}, // #20
  {DBGFIELD("IIC_fpUNA64")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #21
  {DBGFIELD("IIC_fpUNA32")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #22
  {DBGFIELD("IIC_fpSTAT")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #23
  {DBGFIELD("IIC_iLoad_m")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #24
  {DBGFIELD("IIC_iLoad_mu")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #25
  {DBGFIELD("IIC_iLoad_mBr")      0, 0, 0,  0, 0,  0, 0,  0, 0}, // #26
  {DBGFIELD("IIC_iLoad_bh_ru")    0, 0, 0,  0, 0,  0, 0,  0, 0}, // #27
  {DBGFIELD("IIC_iLoad_bh_iu")    0, 0, 0,  0, 0,  0, 0,  0, 0}, // #28
  {DBGFIELD("IIC_iLoad_bh_r")     0, 0, 0,  0, 0,  0, 0,  0, 0}, // #29
  {DBGFIELD("IIC_iLoad_bh_si")    0, 0, 0,  0, 0,  0, 0,  0, 0}, // #30
  {DBGFIELD("IIC_iLoad_d_r")      0, 0, 0,  0, 0,  0, 0,  0, 0}, // #31
  {DBGFIELD("IIC_iLoad_d_ru")     0, 0, 0,  0, 0,  0, 0,  0, 0}, // #32
  {DBGFIELD("IIC_iLoad_ru")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #33
  {DBGFIELD("IIC_iLoad_iu")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #34
  {DBGFIELD("IIC_iLoad_r")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #35
  {DBGFIELD("IIC_iLoad_si")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #36
  {DBGFIELD("IIC_iMAC32")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #37
  {DBGFIELD("IIC_iCMOVi_WriteALU") 1, 0, 0,  6, 1,  1, 1,  0, 0}, // #38
  {DBGFIELD("IIC_iMOVi_WriteALU") 1, 0, 0,  6, 1,  1, 1,  0, 0}, // #39
  {DBGFIELD("IIC_iCMOVix2")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #40
  {DBGFIELD("IIC_iCMOVr_WriteALU") 1, 0, 0,  6, 1,  1, 1,  0, 0}, // #41
  {DBGFIELD("IIC_iCMOVsr_WriteALU") 1, 0, 0,  6, 1,  1, 1,  0, 0}, // #42
  {DBGFIELD("IIC_iMOVix2")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #43
  {DBGFIELD("IIC_iMOVix2addpc")   0, 0, 0,  0, 0,  0, 0,  0, 0}, // #44
  {DBGFIELD("IIC_iMOVix2ld")      0, 0, 0,  0, 0,  0, 0,  0, 0}, // #45
  {DBGFIELD("IIC_iMOVr_WriteALU") 1, 0, 0,  6, 1,  1, 1,  0, 0}, // #46
  {DBGFIELD("IIC_iMOVsr_WriteALU") 1, 0, 0,  6, 1,  1, 1,  0, 0}, // #47
  {DBGFIELD("IIC_iMOVsi_WriteALU") 1, 0, 0,  6, 1,  1, 1,  0, 0}, // #48
  {DBGFIELD("IIC_iMUL32")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #49
  {DBGFIELD("IIC_iMVNi_WriteALU") 1, 0, 0,  6, 1,  1, 1,  0, 0}, // #50
  {DBGFIELD("IIC_iMVNr_WriteALU") 1, 0, 0,  6, 1,  1, 1,  0, 0}, // #51
  {DBGFIELD("IIC_iMVNsr_WriteALU") 1, 0, 0,  6, 1,  1, 1,  0, 0}, // #52
  {DBGFIELD("IIC_iALUr_WriteALU_ReadALU") 1, 0, 0,  6, 1,  1, 1,  0, 1}, // #53
  {DBGFIELD("IIC_iStore_r")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #54
  {DBGFIELD("IIC_iStore_bh_r")    0, 0, 0,  0, 0,  0, 0,  0, 0}, // #55
  {DBGFIELD("IIC_iALUsi_WriteALUsi_ReadALU") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #56
  {DBGFIELD("IIC_iBITsi_WriteALUsi_ReadALU") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #57
  {DBGFIELD("IIC_Preload_WritePreLd") 1, 0, 0, 105, 1,  0, 1,  0, 0}, // #58
  {DBGFIELD("IIC_iDIV")           0, 0, 0,  0, 0,  0, 0,  0, 0}, // #59
  {DBGFIELD("IIC_iMAC16")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #60
  {DBGFIELD("IIC_iMAC64")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #61
  {DBGFIELD("IIC_iMUL16")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #62
  {DBGFIELD("IIC_iMUL64")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #63
  {DBGFIELD("IIC_iStore_m")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #64
  {DBGFIELD("IIC_iStore_mu")      0, 0, 0,  0, 0,  0, 0,  0, 0}, // #65
  {DBGFIELD("IIC_iStore_bh_ru")   0, 0, 0,  0, 0,  0, 0,  0, 0}, // #66
  {DBGFIELD("IIC_iStore_bh_iu")   0, 0, 0,  0, 0,  0, 0,  0, 0}, // #67
  {DBGFIELD("IIC_iStore_ru")      0, 0, 0,  0, 0,  0, 0,  0, 0}, // #68
  {DBGFIELD("IIC_iStore_bh_si")   0, 0, 0,  0, 0,  0, 0,  0, 0}, // #69
  {DBGFIELD("IIC_iStore_d_r")     0, 0, 0,  0, 0,  0, 0,  0, 0}, // #70
  {DBGFIELD("IIC_iStore_d_ru")    0, 0, 0,  0, 0,  0, 0,  0, 0}, // #71
  {DBGFIELD("IIC_iStore_iu")      0, 0, 0,  0, 0,  0, 0,  0, 0}, // #72
  {DBGFIELD("IIC_iStore_si")      0, 0, 0,  0, 0,  0, 0,  0, 0}, // #73
  {DBGFIELD("IIC_iEXTAr_WriteALUsr") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #74
  {DBGFIELD("IIC_iEXTr_WriteALUsi") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #75
  {DBGFIELD("IIC_iTSTi_WriteCMP_ReadALU") 1, 0, 0,  6, 1,  1, 1,  0, 1}, // #76
  {DBGFIELD("IIC_iTSTr_WriteCMP_ReadALU_ReadALU") 1, 0, 0,  6, 1,  1, 1, 86, 2}, // #77
  {DBGFIELD("IIC_iTSTsr_WriteCMPsi_ReadALU") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #78
  {DBGFIELD("IIC_iTSTsr_WriteCMPsr_ReadALU") 1, 0, 0,  6, 1,  2, 1,  0, 1}, // #79
  {DBGFIELD("WriteALU_ReadALU_ReadALU") 1, 0, 0,  6, 1,  1, 1, 86, 2}, // #80
  {DBGFIELD("IIC_VABAD")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #81
  {DBGFIELD("IIC_VABAQ")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #82
  {DBGFIELD("IIC_VSUBi4Q")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #83
  {DBGFIELD("IIC_VBIND")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #84
  {DBGFIELD("IIC_VBINQ")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #85
  {DBGFIELD("IIC_VSUBi4D")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #86
  {DBGFIELD("IIC_VUNAD")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #87
  {DBGFIELD("IIC_VUNAQ")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #88
  {DBGFIELD("IIC_VUNAiQ")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #89
  {DBGFIELD("IIC_VUNAiD")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #90
  {DBGFIELD("IIC_fpALU64")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #91
  {DBGFIELD("IIC_VBINi4D")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #92
  {DBGFIELD("IIC_VSHLiD")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #93
  {DBGFIELD("IIC_fpALU32")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #94
  {DBGFIELD("IIC_VSUBiD")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #95
  {DBGFIELD("IIC_VBINiQ")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #96
  {DBGFIELD("IIC_VBINiD")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #97
  {DBGFIELD("IIC_VMOVImm")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #98
  {DBGFIELD("IIC_VCNTiD")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #99
  {DBGFIELD("IIC_VCNTiQ")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #100
  {DBGFIELD("IIC_fpCMP64")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #101
  {DBGFIELD("IIC_fpCMP32")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #102
  {DBGFIELD("IIC_fpCVTSH")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #103
  {DBGFIELD("IIC_fpCVTHS")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #104
  {DBGFIELD("IIC_fpCVTDS")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #105
  {DBGFIELD("IIC_fpCVTSD")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #106
  {DBGFIELD("IIC_fpDIV64")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #107
  {DBGFIELD("IIC_fpDIV32")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #108
  {DBGFIELD("IIC_VMOVIS")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #109
  {DBGFIELD("IIC_VMOVD")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #110
  {DBGFIELD("IIC_VMOVQ")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #111
  {DBGFIELD("IIC_VEXTD")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #112
  {DBGFIELD("IIC_VEXTQ")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #113
  {DBGFIELD("IIC_fpFMAC64")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #114
  {DBGFIELD("IIC_fpFMAC32")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #115
  {DBGFIELD("IIC_VFMACD")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #116
  {DBGFIELD("IIC_VFMACQ")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #117
  {DBGFIELD("IIC_VMOVSI")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #118
  {DBGFIELD("IIC_VBINi4Q")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #119
  {DBGFIELD("IIC_VLD1dup")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #120
  {DBGFIELD("IIC_VLD1dupu")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #121
  {DBGFIELD("IIC_VLD1ln")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #122
  {DBGFIELD("IIC_VLD1lnu")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #123
  {DBGFIELD("IIC_VLD1")           0, 0, 0,  0, 0,  0, 0,  0, 0}, // #124
  {DBGFIELD("IIC_VLD1x4")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #125
  {DBGFIELD("IIC_VLD1x2u")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #126
  {DBGFIELD("IIC_VLD1x3")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #127
  {DBGFIELD("IIC_VLD1u")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #128
  {DBGFIELD("IIC_VLD1x2")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #129
  {DBGFIELD("IIC_VLD2dup")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #130
  {DBGFIELD("IIC_VLD2dupu")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #131
  {DBGFIELD("IIC_VLD2ln")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #132
  {DBGFIELD("IIC_VLD2lnu")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #133
  {DBGFIELD("IIC_VLD2")           0, 0, 0,  0, 0,  0, 0,  0, 0}, // #134
  {DBGFIELD("IIC_VLD2u")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #135
  {DBGFIELD("IIC_VLD2x2")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #136
  {DBGFIELD("IIC_VLD2x2u")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #137
  {DBGFIELD("IIC_VLD3dup")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #138
  {DBGFIELD("IIC_VLD3dupu")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #139
  {DBGFIELD("IIC_VLD3ln")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #140
  {DBGFIELD("IIC_VLD3lnu")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #141
  {DBGFIELD("IIC_VLD3")           0, 0, 0,  0, 0,  0, 0,  0, 0}, // #142
  {DBGFIELD("IIC_VLD3u")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #143
  {DBGFIELD("IIC_VLD4dup")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #144
  {DBGFIELD("IIC_VLD4dupu")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #145
  {DBGFIELD("IIC_VLD4ln")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #146
  {DBGFIELD("IIC_VLD4lnu")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #147
  {DBGFIELD("IIC_VLD4")           0, 0, 0,  0, 0,  0, 0,  0, 0}, // #148
  {DBGFIELD("IIC_VLD4u")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #149
  {DBGFIELD("IIC_fpLoad_mu")      0, 0, 0,  0, 0,  0, 0,  0, 0}, // #150
  {DBGFIELD("IIC_fpLoad_m")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #151
  {DBGFIELD("IIC_fpLoad64")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #152
  {DBGFIELD("IIC_fpLoad32")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #153
  {DBGFIELD("IIC_fpMAC64")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #154
  {DBGFIELD("IIC_VMACi32D")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #155
  {DBGFIELD("IIC_VMACi16D")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #156
  {DBGFIELD("IIC_fpMAC32")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #157
  {DBGFIELD("IIC_VMACD")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #158
  {DBGFIELD("IIC_VMACQ")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #159
  {DBGFIELD("IIC_VMACi32Q")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #160
  {DBGFIELD("IIC_VMACi16Q")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #161
  {DBGFIELD("IIC_fpMOVID")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #162
  {DBGFIELD("IIC_VQUNAiD")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #163
  {DBGFIELD("IIC_VMOVN")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #164
  {DBGFIELD("IIC_fpMOVDI")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #165
  {DBGFIELD("IIC_fpMOVSI")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #166
  {DBGFIELD("IIC_fpMOVIS")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #167
  {DBGFIELD("IIC_fpMUL64")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #168
  {DBGFIELD("IIC_VMULi16D")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #169
  {DBGFIELD("IIC_VMULi32D")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #170
  {DBGFIELD("IIC_fpMUL32")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #171
  {DBGFIELD("IIC_VFMULD")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #172
  {DBGFIELD("IIC_VFMULQ")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #173
  {DBGFIELD("IIC_VMULi16Q")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #174
  {DBGFIELD("IIC_VMULi32Q")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #175
  {DBGFIELD("IIC_VSHLiQ")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #176
  {DBGFIELD("IIC_VPALiQ")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #177
  {DBGFIELD("IIC_VPALiD")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #178
  {DBGFIELD("IIC_VPBIND")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #179
  {DBGFIELD("IIC_VQUNAiQ")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #180
  {DBGFIELD("IIC_VSHLi4Q")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #181
  {DBGFIELD("IIC_VSHLi4D")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #182
  {DBGFIELD("IIC_VRECSD")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #183
  {DBGFIELD("IIC_VRECSQ")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #184
  {DBGFIELD("IIC_VMOVISL")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #185
  {DBGFIELD("IIC_fpCVTID_WriteCvtFP") 1, 0, 0, 61, 2, 15, 1,  0, 0}, // #186
  {DBGFIELD("IIC_fpCVTIS_WriteCvtFP") 1, 0, 0, 61, 2, 15, 1,  0, 0}, // #187
  {DBGFIELD("IIC_fpCVTID")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #188
  {DBGFIELD("IIC_fpCVTIS")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #189
  {DBGFIELD("IIC_fpSQRT64")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #190
  {DBGFIELD("IIC_fpSQRT32")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #191
  {DBGFIELD("IIC_VST1ln")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #192
  {DBGFIELD("IIC_VST1lnu")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #193
  {DBGFIELD("IIC_VST1")           0, 0, 0,  0, 0,  0, 0,  0, 0}, // #194
  {DBGFIELD("IIC_VST1x4")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #195
  {DBGFIELD("IIC_VLD1x4u")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #196
  {DBGFIELD("IIC_VST1x3")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #197
  {DBGFIELD("IIC_VLD1x3u")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #198
  {DBGFIELD("IIC_VST1x4u")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #199
  {DBGFIELD("IIC_VST1x3u")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #200
  {DBGFIELD("IIC_VST1x2")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #201
  {DBGFIELD("IIC_VST2ln")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #202
  {DBGFIELD("IIC_VST2lnu")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #203
  {DBGFIELD("IIC_VST2")           0, 0, 0,  0, 0,  0, 0,  0, 0}, // #204
  {DBGFIELD("IIC_VST2x2")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #205
  {DBGFIELD("IIC_VST2x2u")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #206
  {DBGFIELD("IIC_VST3ln")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #207
  {DBGFIELD("IIC_VST3lnu")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #208
  {DBGFIELD("IIC_VST3")           0, 0, 0,  0, 0,  0, 0,  0, 0}, // #209
  {DBGFIELD("IIC_VST3u")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #210
  {DBGFIELD("IIC_VST4ln")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #211
  {DBGFIELD("IIC_VST4lnu")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #212
  {DBGFIELD("IIC_VST4")           0, 0, 0,  0, 0,  0, 0,  0, 0}, // #213
  {DBGFIELD("IIC_VST4u")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #214
  {DBGFIELD("IIC_fpStore_m")      0, 0, 0,  0, 0,  0, 0,  0, 0}, // #215
  {DBGFIELD("IIC_fpStore64")      0, 0, 0,  0, 0,  0, 0,  0, 0}, // #216
  {DBGFIELD("IIC_fpStore32")      0, 0, 0,  0, 0,  0, 0,  0, 0}, // #217
  {DBGFIELD("IIC_VSUBiQ")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #218
  {DBGFIELD("IIC_VTB1")           0, 0, 0,  0, 0,  0, 0,  0, 0}, // #219
  {DBGFIELD("IIC_VTB2")           0, 0, 0,  0, 0,  0, 0,  0, 0}, // #220
  {DBGFIELD("IIC_VTB3")           0, 0, 0,  0, 0,  0, 0,  0, 0}, // #221
  {DBGFIELD("IIC_VTB4")           0, 0, 0,  0, 0,  0, 0,  0, 0}, // #222
  {DBGFIELD("IIC_VTBX1")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #223
  {DBGFIELD("IIC_VTBX2")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #224
  {DBGFIELD("IIC_VTBX3")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #225
  {DBGFIELD("IIC_VTBX4")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #226
  {DBGFIELD("IIC_fpCVTDI_WriteCvtFP") 1, 0, 0, 61, 2, 15, 1,  0, 0}, // #227
  {DBGFIELD("IIC_fpCVTSI_WriteCvtFP") 1, 0, 0, 61, 2, 15, 1,  0, 0}, // #228
  {DBGFIELD("IIC_fpCVTDI")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #229
  {DBGFIELD("IIC_fpCVTSI")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #230
  {DBGFIELD("IIC_VPERMD")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #231
  {DBGFIELD("IIC_VPERMQ")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #232
  {DBGFIELD("IIC_VPERMQ3")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #233
  {DBGFIELD("IIC_iALUsi_WriteALUsi_ReadALUsr") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #234
  {DBGFIELD("IIC_iBITi")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #235
  {DBGFIELD("IIC_iCMPsi_WriteCMPsi_ReadALU_ReadALU") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #236
  {DBGFIELD("IIC_iCMPi_WriteCMP") 1, 0, 0,  6, 1,  1, 1,  0, 0}, // #237
  {DBGFIELD("IIC_iCMPr_WriteCMP") 1, 0, 0,  6, 1,  1, 1,  0, 0}, // #238
  {DBGFIELD("IIC_iCMPsi_WriteCMPsi") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #239
  {DBGFIELD("IIC_iALUx")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #240
  {DBGFIELD("IIC_iLoad_bh_i")     0, 0, 0,  0, 0,  0, 0,  0, 0}, // #241
  {DBGFIELD("IIC_iLoad_d_i")      0, 0, 0,  0, 0,  0, 0,  0, 0}, // #242
  {DBGFIELD("IIC_iLoad_i")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #243
  {DBGFIELD("IIC_iLoadiALU")      0, 0, 0,  0, 0,  0, 0,  0, 0}, // #244
  {DBGFIELD("IIC_iCMOVsi_WriteALU") 1, 0, 0,  6, 1,  1, 1,  0, 0}, // #245
  {DBGFIELD("IIC_iMOVi")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #246
  {DBGFIELD("IIC_iMVNsi_WriteALU") 1, 0, 0,  6, 1,  1, 1,  0, 0}, // #247
  {DBGFIELD("IIC_iALUsir_WriteALUsi_ReadALU") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #248
  {DBGFIELD("IIC_iStore_bh_i")    0, 0, 0,  0, 0,  0, 0,  0, 0}, // #249
  {DBGFIELD("IIC_iStore_i")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #250
  {DBGFIELD("IIC_iEXTAsr")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #251
  {DBGFIELD("IIC_iEXTr")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #252
  {DBGFIELD("IIC_iTSTi_WriteCMP") 1, 0, 0,  6, 1,  1, 1,  0, 0}, // #253
  {DBGFIELD("IIC_iTSTr_WriteCMP") 1, 0, 0,  6, 1,  1, 1,  0, 0}, // #254
  {DBGFIELD("IIC_iTSTsi_WriteCMPsi") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #255
  {DBGFIELD("IIC_iALUr_WriteALU") 1, 0, 0,  6, 1,  1, 1,  0, 0}, // #256
  {DBGFIELD("IIC_iALUi_WriteALU") 1, 0, 0,  6, 1,  1, 1,  0, 0}, // #257
  {DBGFIELD("IIC_iBITr_WriteALU") 1, 0, 0,  6, 1,  1, 1,  0, 0}, // #258
  {DBGFIELD("IIC_iPop")           0, 0, 0,  0, 0,  0, 0,  0, 0}, // #259
  {DBGFIELD("IIC_iPop_Br_WriteBrL") 1, 0, 0, 61, 2,  2, 1,  0, 0}, // #260
  {DBGFIELD("IIC_iTSTr_WriteALU") 1, 0, 0,  6, 1,  1, 1,  0, 0}, // #261
  {DBGFIELD("ANDri_BICri_EORri_ORRri") 1, 0, 0,  6, 1,  1, 1,  0, 1}, // #262
  {DBGFIELD("ANDrr_BICrr_EORrr_ORRrr") 1, 0, 0,  6, 1,  1, 1, 86, 2}, // #263
  {DBGFIELD("ANDrsi_BICrsi_EORrsi_ORRrsi") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #264
  {DBGFIELD("ANDrsr_BICrsr_EORrsr_ORRrsr") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #265
  {DBGFIELD("MOVCCsi_MOVCCsr")    1, 0, 0,  6, 1,  1, 1,  0, 0}, // #266
  {DBGFIELD("MOVsi_MOVsr")        1, 0, 0,  6, 1,  1, 1,  0, 0}, // #267
  {DBGFIELD("MOVsra_flag_MOVsrl_flag") 1, 0, 0,  6, 1,  1, 1,  0, 0}, // #268
  {DBGFIELD("MVNsr")              1, 0, 0,  6, 1,  1, 1,  0, 0}, // #269
  {DBGFIELD("MVNr")               1, 0, 0,  6, 1,  1, 1,  0, 0}, // #270
  {DBGFIELD("MOVCCi32imm")        2, 0, 0, 27, 1,  2, 1,  0, 0}, // #271
  {DBGFIELD("MOV_ga_dyn_MOVi32imm") 2, 0, 0, 27, 1,  2, 1,  0, 0}, // #272
  {DBGFIELD("MOV_ga_pcrel")       3, 0, 0, 36, 1,  3, 1,  0, 0}, // #273
  {DBGFIELD("MOV_ga_pcrel_ldr")   3, 0, 0, 36, 1,  3, 1,  0, 0}, // #274
  {DBGFIELD("SEL")                65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #275
  {DBGFIELD("BFC_BFI_SBFX_UBFX")  1, 0, 0,  6, 1,  2, 1,  0, 0}, // #276
  {DBGFIELD("MLA_MLAv5_MLS_SMMLA_SMMLAR_SMMLS_SMMLSR") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #277
  {DBGFIELD("MUL_MULv5_SMMUL_SMMULR") 1, 0, 0, 44, 2, 15, 1,  0, 0}, // #278
  {DBGFIELD("SMLAL_SMLALBB_SMLALBT_SMLALTB_SMLALTT_SMLALv5_UMAAL_UMAALv5_UMLAL_UMLALv5") 5, 0, 0, 106, 2, 396, 2, 88, 4}, // #279
  {DBGFIELD("SMULL_SMULLv5_UMULL_UMULLv5") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #280
  {DBGFIELD("SMLAD_SMLADX_SMLALD_SMLALDX_SMLSD_SMLSDX_SMLSLD_SMLSLDX_SMUAD_SMUADX_SMUSD_SMUSDX") 5, 0, 0, 106, 2, 396, 2, 88, 4}, // #281
  {DBGFIELD("SMULBB_SMULBT_SMULTB_SMULTT_SMULWB_SMULWT") 1, 0, 0, 44, 2, 15, 1,  0, 0}, // #282
  {DBGFIELD("SMLABB_SMLABT_SMLATB_SMLATT_SMLAWB_SMLAWT") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #283
  {DBGFIELD("LDRi12_PICLDR")      1, 0, 0,  4, 1,  3, 1,  0, 0}, // #284
  {DBGFIELD("LDRrs")              1, 0, 0,  4, 1,  3, 1,  0, 0}, // #285
  {DBGFIELD("LDRBi12_LDRH_LDRSB_LDRSH_PICLDRB_PICLDRH_PICLDRSB_PICLDRSH") 1, 0, 0, 29, 2, 15, 1,  0, 0}, // #286
  {DBGFIELD("LDRHTi_LDRHTr_LDRH_POST_LDRH_PRE_LDRSBTi_LDRSBTr_LDRSB_POST_LDRSB_PRE_LDRSHTi_LDRSHTr_LDRSH_POST_LDRSH_PRE") 1, 0, 0, 108, 2, 286, 2,  0, 0}, // #287
  {DBGFIELD("SXTB_SXTB16_SXTH_UXTB_UXTB16_UXTH") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #288
  {DBGFIELD("t2SXTB_t2SXTB16_t2SXTH_t2UXTB_t2UXTB16_t2UXTH") 1, 0, 0,  6, 1,  1, 1,  0, 0}, // #289
  {DBGFIELD("t2MOVCCi32imm")      2, 0, 0, 27, 1,  2, 1,  0, 0}, // #290
  {DBGFIELD("t2MOV_ga_dyn_t2MOVi32imm") 2, 0, 0, 27, 1,  2, 1,  0, 0}, // #291
  {DBGFIELD("t2MOV_ga_pcrel")     3, 0, 0, 36, 1,  3, 1,  0, 0}, // #292
  {DBGFIELD("t2MOVi16_ga_pcrel")  3, 0, 0, 36, 1,  3, 1,  0, 0}, // #293
  {DBGFIELD("t2SEL")              65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #294
  {DBGFIELD("t2BFC_t2SBFX_t2UBFX") 1, 0, 0,  6, 1,  2, 1,  0, 0}, // #295
  {DBGFIELD("t2BFI")              1, 0, 0,  6, 1,  2, 1,  0, 0}, // #296
  {DBGFIELD("QADD_QADD16_QADD8_QASX_QDADD_QDSUB_QSAX_QSUB_QSUB16_QSUB8_UQADD16_UQADD8_UQASX_UQSAX_UQSUB16_UQSUB8") 1, 0, 0,  6, 1,  2, 1,  0, 0}, // #297
  {DBGFIELD("SSAT_SSAT16_USAT_USAT16_t2QADD_t2QADD16_t2QADD8_t2QASX_t2QDADD_t2QDSUB_t2QSAX_t2QSUB_t2QSUB16_t2QSUB8_t2SSAT_t2SSAT16_t2UQADD16_t2UQADD8_t2UQASX_t2UQSAX_t2UQSUB16_t2UQSUB8_t2USAT_t2USAT16") 1, 0, 0,  6, 1,  2, 1,  0, 0}, // #298
  {DBGFIELD("SADD16_SADD8_SASX_SSAX_SSUB16_SSUB8_UADD16_UADD8_UASX_USAX_USUB16_USUB8") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #299
  {DBGFIELD("t2SADD16_t2SADD8_t2SASX_t2SSAX_t2SSUB16_t2SSUB8_t2UADD16_t2UADD8_t2UASX_t2USAX_t2USUB16_t2USUB8") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #300
  {DBGFIELD("SHADD16_SHADD8_SHASX_SHSAX_SHSUB16_SHSUB8_UHADD16_UHADD8_UHASX_UHSAX_UHSUB16_UHSUB8") 1, 0, 0,  6, 1,  2, 1,  0, 0}, // #301
  {DBGFIELD("SXTAB_SXTAB16_SXTAH_UXTAB_UXTAB16_UXTAH") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #302
  {DBGFIELD("t2SHADD16_t2SHADD8_t2SHASX_t2SHSAX_t2SHSUB16_t2SHSUB8_t2UHADD16_t2UHADD8_t2UHASX_t2UHSAX_t2UHSUB16_t2UHSUB8") 1, 0, 0,  6, 1,  2, 1,  0, 0}, // #303
  {DBGFIELD("t2SXTAB_t2SXTAB16_t2SXTAH_t2UXTAB_t2UXTAB16_t2UXTAH") 1, 0, 0,  6, 1,  2, 1,  0, 0}, // #304
  {DBGFIELD("USAD8")              1, 0, 0, 110, 3, 15, 1,  0, 0}, // #305
  {DBGFIELD("USADA8")             1, 0, 0, 110, 3, 15, 1, 92, 3}, // #306
  {DBGFIELD("SMUSD_SMUSDX")       1, 0, 0, 44, 2, 15, 1,  0, 0}, // #307
  {DBGFIELD("t2MUL_t2SMMUL_t2SMMULR") 1, 0, 0, 44, 2, 15, 1,  0, 0}, // #308
  {DBGFIELD("t2SMULBB_t2SMULBT_t2SMULTB_t2SMULTT_t2SMULWB_t2SMULWT") 1, 0, 0, 44, 2, 15, 1,  0, 0}, // #309
  {DBGFIELD("t2SMUSD_t2SMUSDX")   1, 0, 0, 44, 2, 15, 1,  0, 0}, // #310
  {DBGFIELD("t2MLA_t2MLS_t2SMMLA_t2SMMLAR_t2SMMLS_t2SMMLSR") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #311
  {DBGFIELD("SMUAD_SMUADX")       1, 0, 0, 44, 2, 15, 1,  0, 0}, // #312
  {DBGFIELD("t2SMUAD_t2SMUADX")   1, 0, 0, 44, 2, 15, 1,  0, 0}, // #313
  {DBGFIELD("SMLSD_SMLSDX")       65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #314
  {DBGFIELD("t2SMLABB_t2SMLABT_t2SMLATB_t2SMLATT_t2SMLAWB_t2SMLAWT") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #315
  {DBGFIELD("t2SMLSD_t2SMLSDX")   65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #316
  {DBGFIELD("SMLAD_SMLADX")       65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #317
  {DBGFIELD("t2SMLAD_t2SMLADX")   65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #318
  {DBGFIELD("SMULL_UMULL")        3, 0, 0, 113, 2, 62, 2,  0, 0}, // #319
  {DBGFIELD("t2SMULL_t2UMULL")    3, 0, 0, 113, 2, 62, 2,  0, 0}, // #320
  {DBGFIELD("t2SMLAL_t2SMLALBB_t2SMLALBT_t2SMLALD_t2SMLALDX_t2SMLALTB_t2SMLALTT_t2SMLSLD_t2SMLSLDX_t2UMAAL_t2UMLAL") 5, 0, 0, 106, 2, 396, 2, 88, 4}, // #321
  {DBGFIELD("SDIV_UDIV_t2SDIV_t2UDIV") 1, 0, 0, 115, 3, 557, 1,  0, 0}, // #322
  {DBGFIELD("LDRBi12")            1, 0, 0,  4, 1,  3, 1,  0, 0}, // #323
  {DBGFIELD("LDRBrs_t2LDRBs_t2LDRHs") 1, 0, 0,  4, 1,  3, 1,  0, 0}, // #324
  {DBGFIELD("LDREX_LDREXB_LDREXD_LDREXH_tLDRpci_pic") 1, 0, 0,  4, 1,  3, 1,  0, 0}, // #325
  {DBGFIELD("LDRi12")             1, 0, 0,  4, 1,  3, 1,  0, 0}, // #326
  {DBGFIELD("t2LDRBi12_t2LDRBi8_t2LDRBpci_t2LDRHi12_t2LDRHi8_t2LDRHpci_tLDRBi_tLDRHi") 1, 0, 0,  4, 1,  3, 1,  0, 0}, // #327
  {DBGFIELD("t2LDRi12_t2LDRi8_t2LDRpci_tLDRi_tLDRpci_tLDRspi") 1, 0, 0,  4, 1,  3, 1,  0, 0}, // #328
  {DBGFIELD("t2LDRpci_pic")       1, 0, 0,  4, 1,  3, 1,  0, 0}, // #329
  {DBGFIELD("t2LDRs")             1, 0, 0,  4, 1,  3, 1,  0, 0}, // #330
  {DBGFIELD("tLDRBr_tLDRHr")      1, 0, 0,  4, 1,  3, 1,  0, 0}, // #331
  {DBGFIELD("tLDRr")              1, 0, 0,  4, 1,  3, 1,  0, 0}, // #332
  {DBGFIELD("LDRH_PICLDRB_PICLDRH") 1, 0, 0,  4, 1,  3, 1,  0, 0}, // #333
  {DBGFIELD("LDRcp")              1, 0, 0,  4, 1,  3, 1,  0, 0}, // #334
  {DBGFIELD("t2LDRSBi12_t2LDRSBi8_t2LDRSBpci_t2LDRSHi12_t2LDRSHi8_t2LDRSHpci") 1, 0, 0, 29, 2, 15, 1,  0, 0}, // #335
  {DBGFIELD("t2LDRSBpcrel_t2LDRSHpcrel") 1, 0, 0, 29, 2, 15, 1,  0, 0}, // #336
  {DBGFIELD("t2LDRSBs_t2LDRSHs")  1, 0, 0, 29, 2, 15, 1,  0, 0}, // #337
  {DBGFIELD("tLDRSB_tLDRSH")      1, 0, 0, 29, 2, 15, 1,  0, 0}, // #338
  {DBGFIELD("LDRBT_POST_IMM_LDRBT_POST_REG_LDRB_POST_REG_LDRB_PRE_REG") 1, 0, 0, 29, 2, 24, 2,  0, 0}, // #339
  {DBGFIELD("LDRB_POST_IMM_LDRB_PRE_IMM_t2LDRB_POST_t2LDRB_PRE_t2LDRH_POST_t2LDRH_PRE") 1, 0, 0, 29, 2, 24, 2,  0, 0}, // #340
  {DBGFIELD("LDRHTi_LDRHTr_LDRH_POST_LDRH_PRE") 1, 0, 0, 29, 2, 24, 2,  0, 0}, // #341
  {DBGFIELD("LDRT_POST_IMM_LDRT_POST_REG_LDR_POST_REG_LDR_PRE_REG") 1, 0, 0, 29, 2, 24, 2,  0, 0}, // #342
  {DBGFIELD("LDR_POST_IMM_LDR_PRE_IMM_t2LDR_POST_t2LDR_PRE") 1, 0, 0, 29, 2, 24, 2,  0, 0}, // #343
  {DBGFIELD("t2LDRBT_t2LDRHT")    1, 0, 0, 29, 2, 24, 2,  0, 0}, // #344
  {DBGFIELD("t2LDRT")             1, 0, 0, 29, 2, 24, 2,  0, 0}, // #345
  {DBGFIELD("t2LDRSBT_t2LDRSHT")  1, 0, 0, 108, 2, 286, 2,  0, 0}, // #346
  {DBGFIELD("t2LDRSB_POST_t2LDRSB_PRE_t2LDRSH_POST_t2LDRSH_PRE") 1, 0, 0, 108, 2, 286, 2,  0, 0}, // #347
  {DBGFIELD("LDRD")               1, 0, 0, 19, 1, 22, 2,  0, 0}, // #348
  {DBGFIELD("t2LDRDi8")           1, 0, 0, 19, 1, 22, 2,  0, 0}, // #349
  {DBGFIELD("LDRD_POST_LDRD_PRE_t2LDRD_POST_t2LDRD_PRE") 1, 0, 0, 23, 2, 558, 3,  0, 0}, // #350
  {DBGFIELD("LDMDA_LDMDB_LDMIA_LDMIB_sysLDMDA_sysLDMDB_sysLDMIA_sysLDMIB_t2LDMDB_t2LDMIA_tLDMIA") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #351
  {DBGFIELD("LDMDA_UPD_LDMDB_UPD_LDMIA_UPD_LDMIB_UPD_sysLDMDA_UPD_sysLDMDB_UPD_sysLDMIA_UPD_sysLDMIB_UPD_t2LDMDB_UPD_t2LDMIA_UPD_tLDMIA_UPD") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #352
  {DBGFIELD("LDMIA_RET_t2LDMIA_RET") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #353
  {DBGFIELD("tPOP")               65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #354
  {DBGFIELD("tPOP_RET")           65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #355
  {DBGFIELD("PICSTR_STRi12_tSTRr") 1, 0, 0,  4, 1,  0, 1,  0, 0}, // #356
  {DBGFIELD("PICSTRB_PICSTRH_STRBi12_STRH_tSTRBr_tSTRHr") 1, 0, 0,  4, 1,  0, 1,  0, 0}, // #357
  {DBGFIELD("STRBrs_t2STRBs_t2STRHs") 1, 0, 0,  4, 1,  0, 1,  0, 0}, // #358
  {DBGFIELD("STREX_STREXB_STREXD_STREXH") 1, 0, 0,  4, 1,  0, 1,  0, 0}, // #359
  {DBGFIELD("STRrs_t2STRs")       1, 0, 0,  4, 1,  0, 1,  0, 0}, // #360
  {DBGFIELD("t2STRBi12_t2STRBi8_t2STRHi12_t2STRHi8_tSTRBi_tSTRHi") 1, 0, 0,  4, 1,  0, 1,  0, 0}, // #361
  {DBGFIELD("t2STRi12_t2STRi8_tSTRi_tSTRspi") 1, 0, 0,  4, 1,  0, 1,  0, 0}, // #362
  {DBGFIELD("STRBT_POST_IMM_STRBT_POST_REG_STRB_POST_REG_STRB_PRE_REG_STRHTi_STRHTr_STRH_POST_STRH_PRE") 2, 0, 0, 29, 2, 50, 2,  0, 0}, // #363
  {DBGFIELD("STRB_POST_IMM_STRB_PRE_IMM_t2STRB_POST_t2STRB_PRE_t2STRH_POST") 2, 0, 0, 29, 2, 50, 2,  0, 0}, // #364
  {DBGFIELD("STRBi_preidx_STRBr_preidx_STRH_preidx_STRT_POST_IMM_STRT_POST_REG_STR_POST_REG_STR_PRE_REG_STRi_preidx_STRr_preidx_t2STRB_preidx_t2STRH_preidx_t2STR_preidx") 2, 0, 0, 29, 2, 50, 2,  0, 0}, // #365
  {DBGFIELD("STR_POST_IMM_STR_PRE_IMM_t2STRH_PRE_t2STR_POST_t2STR_PRE") 2, 0, 0, 29, 2, 50, 2,  0, 0}, // #366
  {DBGFIELD("t2STRBT_t2STRHT")    2, 0, 0, 29, 2, 50, 2,  0, 0}, // #367
  {DBGFIELD("t2STRT")             2, 0, 0, 29, 2, 50, 2,  0, 0}, // #368
  {DBGFIELD("STRD_t2STRDi8")      3, 0, 0, 23, 2, 561, 3,  0, 0}, // #369
  {DBGFIELD("STRD_POST_STRD_PRE_t2STRD_POST_t2STRD_PRE") 4, 0, 0, 32, 2, 560, 4,  0, 0}, // #370
  {DBGFIELD("STMDA_STMDB_STMIA_STMIB_sysSTMDA_sysSTMDB_sysSTMIA_sysSTMIB_t2STMDB_t2STMIA") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #371
  {DBGFIELD("STMDA_UPD_STMDB_UPD_STMIA_UPD_STMIB_UPD_sysSTMDA_UPD_sysSTMDB_UPD_sysSTMIA_UPD_sysSTMIB_UPD_t2STMDB_UPD_t2STMIA_UPD_tSTMIA_UPD") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #372
  {DBGFIELD("tPUSH")              65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #373
  {DBGFIELD("ITasm")              0, 0, 0,  0, 0,  0, 1,  0, 0}, // #374
  {DBGFIELD("t2IT")               0, 0, 0,  0, 0,  0, 1,  0, 0}, // #375
  {DBGFIELD("VADDLsv2i64_VADDLsv4i32_VADDLsv8i16_VADDLuv2i64_VADDLuv4i32_VADDLuv8i16_VNEGs16d_VNEGs32d_VNEGs8d_VPADDLsv16i8_VPADDLsv2i32_VPADDLsv4i16_VPADDLsv4i32_VPADDLsv8i16_VPADDLsv8i8_VPADDLuv16i8_VPADDLuv2i32_VPADDLuv4i16_VPADDLuv4i32_VPADDLuv8i16_VPADDLuv8i8_VPADDi16_VPADDi32_VPADDi8_VSHLLi16_VSHLLi32_VSHLLi8_VSHLLsv2i64_VSHLLsv4i32_VSHLLsv8i16_VSHLLuv2i64_VSHLLuv4i32_VSHLLuv8i16_VSHLiv16i8_VSHLiv1i64_VSHLiv2i32_VSHLiv2i64_VSHLiv4i16_VSHLiv4i32_VSHLiv8i16_VSHLiv8i8_VSHLsv1i64_VSHLsv2i32_VSHLsv4i16_VSHLsv8i8_VSHLuv1i64_VSHLuv2i32_VSHLuv4i16_VSHLuv8i8_VSHRsv16i8_VSHRsv1i64_VSHRsv2i32_VSHRsv2i64_VSHRsv4i16_VSHRsv4i32_VSHRsv8i16_VSHRsv8i8_VSHRuv16i8_VSHRuv1i64_VSHRuv2i32_VSHRuv2i64_VSHRuv4i16_VSHRuv4i32_VSHRuv8i16_VSHRuv8i8_VSLIv1i64_VSLIv2i32_VSLIv4i16_VSLIv8i8_VSRIv1i64_VSRIv2i32_VSRIv4i16_VSRIv8i8_VSUBLsv2i64_VSUBLsv4i32_VSUBLsv8i16_VSUBLuv2i64_VSUBLuv4i32_VSUBLuv8i16") 1, 0, 0, 44, 2,  2, 1,  0, 0}, // #376
  {DBGFIELD("VADDWsv2i64_VADDWsv4i32_VADDWsv8i16_VADDWuv2i64_VADDWuv4i32_VADDWuv8i16_VSUBWsv2i64_VSUBWsv4i32_VSUBWsv8i16_VSUBWuv2i64_VSUBWuv4i32_VSUBWuv8i16_VSUBv1i64_VSUBv2i32_VSUBv4i16_VSUBv8i8") 1, 0, 0, 44, 2,  2, 1,  0, 0}, // #377
  {DBGFIELD("VADDv16i8_VADDv2i64_VADDv4i32_VADDv8i16_VANDq_VBICq_VBIFq_VBITq_VEORq_VORNq_VORRq") 1, 0, 0, 44, 2,  2, 1,  0, 0}, // #378
  {DBGFIELD("VADDv1i64_VADDv2i32_VADDv4i16_VADDv8i8_VANDd_VBICd_VBIFd_VBITd_VEORd_VORNd_VORRd") 1, 0, 0, 44, 2,  2, 1,  0, 0}, // #379
  {DBGFIELD("VBICiv2i32_VBICiv4i16_VBICiv4i32_VBICiv8i16_VORRiv2i32_VORRiv4i16_VORRiv4i32_VORRiv8i16") 1, 0, 0, 44, 2,  2, 1,  0, 0}, // #380
  {DBGFIELD("VBSLd_VCLSv2i32_VCLSv4i16_VCLSv8i8_VCLZv2i32_VCLZv4i16_VCLZv8i8_VCNTd") 1, 0, 0, 44, 2,  2, 1,  0, 0}, // #381
  {DBGFIELD("VBSLq_VCLSv16i8_VCLSv4i32_VCLSv8i16_VCLZv16i8_VCLZv4i32_VCLZv8i16_VCNTq") 1, 0, 0, 44, 2,  2, 1,  0, 0}, // #382
  {DBGFIELD("VHADDsv16i8_VHADDsv4i32_VHADDsv8i16_VHADDuv16i8_VHADDuv4i32_VHADDuv8i16_VRHADDsv16i8_VRHADDsv4i32_VRHADDsv8i16_VRHADDuv16i8_VRHADDuv4i32_VRHADDuv8i16_VTSTv16i8_VTSTv4i32_VTSTv8i16") 1, 0, 0, 44, 2,  2, 1,  0, 0}, // #383
  {DBGFIELD("VHADDsv2i32_VHADDsv4i16_VHADDsv8i8_VHADDuv2i32_VHADDuv4i16_VHADDuv8i8_VRHADDsv2i32_VRHADDsv4i16_VRHADDsv8i8_VRHADDuv2i32_VRHADDuv4i16_VRHADDuv8i8_VTSTv2i32_VTSTv4i16_VTSTv8i8") 1, 0, 0, 44, 2,  2, 1,  0, 0}, // #384
  {DBGFIELD("VHSUBsv16i8_VHSUBsv4i32_VHSUBsv8i16_VHSUBuv16i8_VHSUBuv4i32_VHSUBuv8i16") 1, 0, 0, 44, 2,  2, 1,  0, 0}, // #385
  {DBGFIELD("VHSUBsv2i32_VHSUBsv4i16_VHSUBsv8i8_VHSUBuv2i32_VHSUBuv4i16_VHSUBuv8i8") 1, 0, 0, 44, 2,  2, 1,  0, 0}, // #386
  {DBGFIELD("VNEGf32q")           1, 0, 0, 44, 2,  2, 1,  0, 0}, // #387
  {DBGFIELD("VNEGfd")             1, 0, 0, 44, 2,  2, 1,  0, 0}, // #388
  {DBGFIELD("VNEGs16q_VNEGs32q_VNEGs8q_VSHLsv16i8_VSHLsv2i64_VSHLsv4i32_VSHLsv8i16_VSHLuv16i8_VSHLuv2i64_VSHLuv4i32_VSHLuv8i16_VSLIv16i8_VSLIv2i64_VSLIv4i32_VSLIv8i16_VSRIv16i8_VSRIv2i64_VSRIv4i32_VSRIv8i16") 1, 0, 0, 44, 2,  2, 1,  0, 0}, // #389
  {DBGFIELD("VQSHLsiv16i8_VQSHLsiv1i64_VQSHLsiv2i32_VQSHLsiv2i64_VQSHLsiv4i16_VQSHLsiv4i32_VQSHLsiv8i16_VQSHLsiv8i8_VQSHLsuv16i8_VQSHLsuv1i64_VQSHLsuv2i32_VQSHLsuv2i64_VQSHLsuv4i16_VQSHLsuv4i32_VQSHLsuv8i16_VQSHLsuv8i8_VQSHLsv1i64_VQSHLsv2i32_VQSHLsv4i16_VQSHLsv8i8_VQSHLuiv16i8_VQSHLuiv1i64_VQSHLuiv2i32_VQSHLuiv2i64_VQSHLuiv4i16_VQSHLuiv4i32_VQSHLuiv8i16_VQSHLuiv8i8_VQSHLuv1i64_VQSHLuv2i32_VQSHLuv4i16_VQSHLuv8i8") 1, 0, 0, 44, 2,  2, 1,  0, 0}, // #390
  {DBGFIELD("VQSHLsv16i8_VQSHLsv2i64_VQSHLsv4i32_VQSHLsv8i16_VQSHLuv16i8_VQSHLuv2i64_VQSHLuv4i32_VQSHLuv8i16") 1, 0, 0, 44, 2,  2, 1,  0, 0}, // #391
  {DBGFIELD("VSUBv16i8_VSUBv2i64_VSUBv4i32_VSUBv8i16") 1, 0, 0, 44, 2,  2, 1,  0, 0}, // #392
  {DBGFIELD("VEXTd16_VEXTd32_VEXTd8") 1, 0, 0, 61, 2,  2, 1,  0, 0}, // #393
  {DBGFIELD("VEXTq16_VEXTq32_VEXTq64_VEXTq8") 1, 0, 0, 61, 2,  2, 1,  0, 0}, // #394
  {DBGFIELD("VREV16d8_VREV32d16_VREV32d8_VREV64d16_VREV64d32_VREV64d8") 1, 0, 0, 61, 2,  2, 1,  0, 0}, // #395
  {DBGFIELD("VREV16q8_VREV32q16_VREV32q8_VREV64q16_VREV64q32_VREV64q8") 1, 0, 0, 61, 2,  2, 1,  0, 0}, // #396
  {DBGFIELD("VABALsv2i64_VABALsv4i32_VABALsv8i16_VABALuv2i64_VABALuv4i32_VABALuv8i16_VABAsv2i32_VABAsv4i16_VABAsv8i8_VABAuv2i32_VABAuv4i16_VABAuv8i8") 1, 0, 0, 44, 2, 15, 1,  0, 0}, // #397
  {DBGFIELD("VABAsv16i8_VABAsv4i32_VABAsv8i16_VABAuv16i8_VABAuv4i32_VABAuv8i16") 1, 0, 0, 44, 2, 15, 1,  0, 0}, // #398
  {DBGFIELD("VABSfd")             1, 0, 0, 44, 2, 15, 1,  0, 0}, // #399
  {DBGFIELD("VABSfq")             1, 0, 0, 44, 2, 15, 1,  0, 0}, // #400
  {DBGFIELD("VABSv16i8_VABSv4i32_VABSv8i16") 1, 0, 0, 44, 2, 15, 1,  0, 0}, // #401
  {DBGFIELD("VABSv2i32_VABSv4i16_VABSv8i8") 1, 0, 0, 44, 2, 15, 1,  0, 0}, // #402
  {DBGFIELD("VACGEd_VACGTd_VCEQfd_VCGEfd_VCGTfd") 1, 0, 0, 44, 2, 15, 1,  0, 0}, // #403
  {DBGFIELD("VACGEq_VACGTq_VCEQfq_VCGEfq_VCGTfq") 1, 0, 0, 44, 2, 15, 1,  0, 0}, // #404
  {DBGFIELD("VCEQv16i8_VCEQv4i32_VCEQv8i16_VCGEsv16i8_VCGEsv4i32_VCGEsv8i16_VCGEuv16i8_VCGEuv4i32_VCGEuv8i16_VCGTsv16i8_VCGTsv4i32_VCGTsv8i16_VCGTuv16i8_VCGTuv4i32_VCGTuv8i16_VQSUBsv16i8_VQSUBsv2i64_VQSUBsv4i32_VQSUBsv8i16_VQSUBuv16i8_VQSUBuv2i64_VQSUBuv4i32_VQSUBuv8i16") 1, 0, 0, 44, 2, 15, 1,  0, 0}, // #405
  {DBGFIELD("VCEQv2i32_VCEQv4i16_VCEQv8i8_VCGEsv2i32_VCGEsv4i16_VCGEsv8i8_VCGEuv2i32_VCGEuv4i16_VCGEuv8i8_VCGTsv2i32_VCGTsv4i16_VCGTsv8i8_VCGTuv2i32_VCGTuv4i16_VCGTuv8i8_VQSUBsv1i64_VQSUBsv2i32_VQSUBsv4i16_VQSUBsv8i8_VQSUBuv1i64_VQSUBuv2i32_VQSUBuv4i16_VQSUBuv8i8") 1, 0, 0, 44, 2, 15, 1,  0, 0}, // #406
  {DBGFIELD("VCEQzv16i8_VCEQzv2f32_VCEQzv2i32_VCEQzv4f32_VCEQzv4i16_VCEQzv4i32_VCEQzv8i16_VCEQzv8i8_VCGEzv16i8_VCGEzv2f32_VCGEzv2i32_VCGEzv4f32_VCGEzv4i16_VCGEzv4i32_VCGEzv8i16_VCGEzv8i8_VCGTzv16i8_VCGTzv2f32_VCGTzv2i32_VCGTzv4f32_VCGTzv4i16_VCGTzv4i32_VCGTzv8i16_VCGTzv8i8_VCLEzv16i8_VCLEzv2f32_VCLEzv2i32_VCLEzv4f32_VCLEzv4i16_VCLEzv4i32_VCLEzv8i16_VCLEzv8i8_VCLTzv16i8_VCLTzv2f32_VCLTzv2i32_VCLTzv4f32_VCLTzv4i16_VCLTzv4i32_VCLTzv8i16_VCLTzv8i8") 1, 0, 0, 44, 2, 15, 1,  0, 0}, // #407
  {DBGFIELD("VPADALsv16i8_VPADALsv4i32_VPADALsv8i16_VPADALuv16i8_VPADALuv4i32_VPADALuv8i16") 1, 0, 0, 44, 2, 15, 1,  0, 0}, // #408
  {DBGFIELD("VPADALsv2i32_VPADALsv4i16_VPADALsv8i8_VPADALuv2i32_VPADALuv4i16_VPADALuv8i8_VRSRAsv16i8_VRSRAsv1i64_VRSRAsv2i32_VRSRAsv2i64_VRSRAsv4i16_VRSRAsv4i32_VRSRAsv8i16_VRSRAsv8i8_VRSRAuv16i8_VRSRAuv1i64_VRSRAuv2i32_VRSRAuv2i64_VRSRAuv4i16_VRSRAuv4i32_VRSRAuv8i16_VRSRAuv8i8_VSRAsv16i8_VSRAsv1i64_VSRAsv2i32_VSRAsv2i64_VSRAsv4i16_VSRAsv4i32_VSRAsv8i16_VSRAsv8i8_VSRAuv16i8_VSRAuv1i64_VSRAuv2i32_VSRAuv2i64_VSRAuv4i16_VSRAuv4i32_VSRAuv8i16_VSRAuv8i8") 1, 0, 0, 44, 2, 15, 1,  0, 0}, // #409
  {DBGFIELD("VQABSv16i8_VQABSv4i32_VQABSv8i16_VQNEGv16i8_VQNEGv4i32_VQNEGv8i16") 1, 0, 0, 44, 2, 15, 1,  0, 0}, // #410
  {DBGFIELD("VQABSv2i32_VQABSv4i16_VQABSv8i8_VQNEGv2i32_VQNEGv4i16_VQNEGv8i8") 1, 0, 0, 44, 2, 15, 1,  0, 0}, // #411
  {DBGFIELD("VQADDsv16i8_VQADDsv2i64_VQADDsv4i32_VQADDsv8i16_VQADDuv16i8_VQADDuv2i64_VQADDuv4i32_VQADDuv8i16") 1, 0, 0, 44, 2, 15, 1,  0, 0}, // #412
  {DBGFIELD("VQADDsv1i64_VQADDsv2i32_VQADDsv4i16_VQADDsv8i8_VQADDuv1i64_VQADDuv2i32_VQADDuv4i16_VQADDuv8i8") 1, 0, 0, 44, 2, 15, 1,  0, 0}, // #413
  {DBGFIELD("VQRSHLsv16i8_VQRSHLsv2i64_VQRSHLsv4i32_VQRSHLsv8i16_VQRSHLuv16i8_VQRSHLuv2i64_VQRSHLuv4i32_VQRSHLuv8i16_VRSHLsv16i8_VRSHLsv2i64_VRSHLsv4i32_VRSHLsv8i16_VRSHLuv16i8_VRSHLuv2i64_VRSHLuv4i32_VRSHLuv8i16") 1, 0, 0, 44, 2, 15, 1,  0, 0}, // #414
  {DBGFIELD("VQRSHLsv1i64_VQRSHLsv2i32_VQRSHLsv4i16_VQRSHLsv8i8_VQRSHLuv1i64_VQRSHLuv2i32_VQRSHLuv4i16_VQRSHLuv8i8_VRSHLsv1i64_VRSHLsv2i32_VRSHLsv4i16_VRSHLsv8i8_VRSHLuv1i64_VRSHLuv2i32_VRSHLuv4i16_VRSHLuv8i8_VRSHRsv16i8_VRSHRsv1i64_VRSHRsv2i32_VRSHRsv2i64_VRSHRsv4i16_VRSHRsv4i32_VRSHRsv8i16_VRSHRsv8i8_VRSHRuv16i8_VRSHRuv1i64_VRSHRuv2i32_VRSHRuv2i64_VRSHRuv4i16_VRSHRuv4i32_VRSHRuv8i16_VRSHRuv8i8") 1, 0, 0, 44, 2, 15, 1,  0, 0}, // #415
  {DBGFIELD("VRECPEd_VRECPEfd_VRSQRTEd_VRSQRTEfd") 1, 0, 0, 61, 2, 15, 1,  0, 0}, // #416
  {DBGFIELD("VRECPEfq_VRECPEq_VRSQRTEfq_VRSQRTEq") 1, 0, 0, 61, 2, 15, 1,  0, 0}, // #417
  {DBGFIELD("VADDHNv2i32_VADDHNv4i16_VADDHNv8i8_VSUBHNv2i32_VSUBHNv4i16_VSUBHNv8i8") 1, 0, 0, 110, 3, 15, 1,  0, 0}, // #418
  {DBGFIELD("VSHRNv2i32_VSHRNv4i16_VSHRNv8i8") 1, 0, 0, 110, 3, 15, 1,  0, 0}, // #419
  {DBGFIELD("VQRSHRNsv2i32_VQRSHRNsv4i16_VQRSHRNsv8i8_VQRSHRNuv2i32_VQRSHRNuv4i16_VQRSHRNuv8i8_VQRSHRUNv2i32_VQRSHRUNv4i16_VQRSHRUNv8i8_VQSHRNsv2i32_VQSHRNsv4i16_VQSHRNsv8i8_VQSHRNuv2i32_VQSHRNuv4i16_VQSHRNuv8i8_VQSHRUNv2i32_VQSHRUNv4i16_VQSHRUNv8i8_VRSHRNv2i32_VRSHRNv4i16_VRSHRNv8i8") 1, 0, 0, 110, 3, 26, 1,  0, 0}, // #420
  {DBGFIELD("VRADDHNv2i32_VRADDHNv4i16_VRADDHNv8i8_VRSUBHNv2i32_VRSUBHNv4i16_VRSUBHNv8i8") 1, 0, 0, 110, 3, 26, 1,  0, 0}, // #421
  {DBGFIELD("VTBL1")              1, 0, 0, 61, 2,  2, 1,  0, 0}, // #422
  {DBGFIELD("VTBX1")              1, 0, 0, 61, 2,  2, 1,  0, 0}, // #423
  {DBGFIELD("VTBL2")              2, 0, 0, 118, 2, 15, 1,  0, 0}, // #424
  {DBGFIELD("VTBX2")              2, 0, 0, 118, 2, 15, 1,  0, 0}, // #425
  {DBGFIELD("VTBL3_VTBL3Pseudo")  3, 0, 0, 120, 2, 26, 1,  0, 0}, // #426
  {DBGFIELD("VTBX3_VTBX3Pseudo")  3, 0, 0, 120, 2, 26, 1,  0, 0}, // #427
  {DBGFIELD("VTBL4_VTBL4Pseudo")  4, 0, 0, 122, 2, 41, 1,  0, 0}, // #428
  {DBGFIELD("VTBX4_VTBX4Pseudo")  4, 0, 0, 122, 2, 41, 1,  0, 0}, // #429
  {DBGFIELD("VSWPd_VSWPq")        3, 0, 0, 120, 2, 54, 3, 64, 1}, // #430
  {DBGFIELD("VTRNd16_VTRNd32_VTRNd8_VUZPd16_VUZPd8_VZIPd16_VZIPd8") 3, 0, 0, 120, 2, 54, 3, 64, 1}, // #431
  {DBGFIELD("VTRNq16_VTRNq32_VTRNq8") 3, 0, 0, 120, 2, 54, 3, 64, 1}, // #432
  {DBGFIELD("VUZPq16_VUZPq32_VUZPq8_VZIPq16_VZIPq32_VZIPq8") 3, 0, 0, 120, 2, 54, 3, 64, 1}, // #433
  {DBGFIELD("VABSD_VNEGD")        1, 0, 0, 44, 2,  2, 1,  0, 0}, // #434
  {DBGFIELD("VABSS_VNEGS")        1, 0, 0, 44, 2,  2, 1,  0, 0}, // #435
  {DBGFIELD("VCMPD_VCMPED_VCMPEZD_VCMPZD") 1, 0, 0, 44, 2, 15, 1,  0, 0}, // #436
  {DBGFIELD("VCMPES_VCMPEZS_VCMPS_VCMPZS") 1, 0, 0, 44, 2, 15, 1,  0, 0}, // #437
  {DBGFIELD("VABDLsv2i64_VABDLsv4i32_VABDLsv8i16_VABDLuv2i64_VABDLuv4i32_VABDLuv8i16_VABDsv16i8_VABDsv4i32_VABDsv8i16_VABDuv16i8_VABDuv4i32_VABDuv8i16_VMAXsv16i8_VMAXsv4i32_VMAXsv8i16_VMAXuv16i8_VMAXuv4i32_VMAXuv8i16_VMINsv16i8_VMINsv4i32_VMINsv8i16_VMINuv16i8_VMINuv4i32_VMINuv8i16") 1, 0, 0, 44, 2, 15, 1,  0, 0}, // #438
  {DBGFIELD("VABDfd_VADDfd_VMAXfd_VMINfd_VSUBfd") 1, 0, 0, 44, 2, 15, 1,  0, 0}, // #439
  {DBGFIELD("VABDfq_VADDfq_VMAXfq_VMINfq_VSUBfq") 1, 0, 0, 44, 2, 15, 1,  0, 0}, // #440
  {DBGFIELD("VABDsv2i32_VABDsv4i16_VABDsv8i8_VABDuv2i32_VABDuv4i16_VABDuv8i8_VMAXsv2i32_VMAXsv4i16_VMAXsv8i8_VMAXuv2i32_VMAXuv4i16_VMAXuv8i8_VMINsv2i32_VMINsv4i16_VMINsv8i8_VMINuv2i32_VMINuv4i16_VMINuv8i8_VPMAXs16_VPMAXs32_VPMAXs8_VPMAXu16_VPMAXu32_VPMAXu8_VPMINs16_VPMINs32_VPMINs8_VPMINu16_VPMINu32_VPMINu8") 1, 0, 0, 44, 2, 15, 1,  0, 0}, // #441
  {DBGFIELD("VADDS_VSUBS")        1, 0, 0, 44, 2, 15, 1,  0, 0}, // #442
  {DBGFIELD("VMAXNMD_VMAXNMND_VMAXNMNQ_VMAXNMS_VMINNMD_VMINNMND_VMINNMNQ_VMINNMS") 1, 0, 0, 44, 2, 15, 1,  0, 0}, // #443
  {DBGFIELD("VPADDf_VPMAXf_VPMINf") 1, 0, 0, 44, 2, 15, 1,  0, 0}, // #444
  {DBGFIELD("VADDD_VSUBD")        1, 0, 0, 44, 2, 26, 1,  0, 0}, // #445
  {DBGFIELD("VRECPSfd_VRSQRTSfd") 1, 0, 0, 61, 2, 41, 1,  0, 0}, // #446
  {DBGFIELD("VRECPSfq_VRSQRTSfq") 1, 0, 0, 61, 2, 41, 1,  0, 0}, // #447
  {DBGFIELD("VMULLp_VMULLslsv2i32_VMULLslsv4i16_VMULLsluv2i32_VMULLsluv4i16_VMULLsv4i32_VMULLsv8i16_VMULLuv4i32_VMULLuv8i16_VMULpd_VMULslv4i16_VMULv4i16_VMULv8i8_VQDMULHslv4i16_VQDMULHv4i16_VQDMULLslv2i32_VQDMULLslv4i16_VQDMULLv4i32_VQRDMULHslv4i16_VQRDMULHv4i16") 1, 0, 0, 61, 2, 15, 1,  0, 0}, // #448
  {DBGFIELD("VMULLsv2i64_VMULLuv2i64_VMULslv2i32_VMULv2i32_VQDMULHslv2i32_VQDMULHv2i32_VQDMULLv2i64_VQRDMULHslv2i32_VQRDMULHv2i32") 1, 0, 0, 61, 2, 15, 1,  0, 0}, // #449
  {DBGFIELD("VMULS_VNMULS")       1, 0, 0, 61, 2, 15, 1,  0, 0}, // #450
  {DBGFIELD("VMULfd")             1, 0, 0, 61, 2, 15, 1,  0, 0}, // #451
  {DBGFIELD("VMULfq")             1, 0, 0, 61, 2, 15, 1,  0, 0}, // #452
  {DBGFIELD("VMULpq_VMULslv8i16_VMULv16i8_VMULv8i16_VQDMULHslv8i16_VQDMULHv8i16_VQRDMULHslv8i16_VQRDMULHv8i16") 1, 0, 0, 61, 2, 15, 1,  0, 0}, // #453
  {DBGFIELD("VMULslfd")           1, 0, 0, 61, 2, 15, 1,  0, 0}, // #454
  {DBGFIELD("VMULslfq")           1, 0, 0, 61, 2, 15, 1,  0, 0}, // #455
  {DBGFIELD("VMULslv4i32_VMULv4i32_VQDMULHslv4i32_VQDMULHv4i32_VQRDMULHslv4i32_VQRDMULHv4i32") 1, 0, 0, 61, 2, 15, 1,  0, 0}, // #456
  {DBGFIELD("VMULD_VNMULD")       1, 0, 0, 61, 2, 26, 1,  0, 0}, // #457
  {DBGFIELD("VFMAD_VFMSD_VFNMAD_VFNMSD") 1, 0, 0, 61, 2, 15, 1,  0, 0}, // #458
  {DBGFIELD("VFMAS_VFMSS_VFNMAS_VFNMSS") 1, 0, 0, 61, 2, 15, 1,  0, 0}, // #459
  {DBGFIELD("VMLAD_VMLSD_VNMLAD_VNMLSD") 1, 0, 0, 61, 2, 15, 1,  0, 0}, // #460
  {DBGFIELD("VMLALslsv2i32_VMLALsluv2i32_VMLALsv2i64_VMLALuv2i64_VMLAslv2i32_VMLAv2i32_VMLSLslsv2i32_VMLSLsluv2i32_VMLSLsv2i64_VMLSLuv2i64_VMLSslv2i32_VMLSv2i32_VQDMLALslv2i32_VQDMLALv2i64_VQDMLSLslv2i32_VQDMLSLv2i64") 1, 0, 0, 61, 2, 15, 1,  0, 0}, // #461
  {DBGFIELD("VMLALslsv4i16_VMLALsluv4i16_VMLALsv4i32_VMLALsv8i16_VMLALuv4i32_VMLALuv8i16_VMLAslv4i16_VMLAv4i16_VMLAv8i8_VMLSLslsv4i16_VMLSLsluv4i16_VMLSLsv4i32_VMLSLsv8i16_VMLSLuv4i32_VMLSLuv8i16_VMLSslv4i16_VMLSv4i16_VMLSv8i8_VQDMLALslv4i16_VQDMLALv4i32_VQDMLSLslv4i16_VQDMLSLv4i32") 1, 0, 0, 61, 2, 15, 1,  0, 0}, // #462
  {DBGFIELD("VMLAS_VMLSS_VNMLAS_VNMLSS") 1, 0, 0, 61, 2, 15, 1,  0, 0}, // #463
  {DBGFIELD("VMLAfd_VMLAslfd_VMLSfd_VMLSslfd") 1, 0, 0, 61, 2, 15, 1,  0, 0}, // #464
  {DBGFIELD("VMLAfq_VMLAslfq_VMLSfq_VMLSslfq") 1, 0, 0, 61, 2, 15, 1,  0, 0}, // #465
  {DBGFIELD("VMLAslv4i32_VMLAv4i32_VMLSslv4i32_VMLSv4i32") 1, 0, 0, 61, 2, 15, 1,  0, 0}, // #466
  {DBGFIELD("VMLAslv8i16_VMLAv16i8_VMLAv8i16_VMLSslv8i16_VMLSv16i8_VMLSv8i16") 1, 0, 0, 61, 2, 15, 1,  0, 0}, // #467
  {DBGFIELD("VFMAfd_VFMSfd")      1, 0, 0, 61, 2, 41, 1,  0, 0}, // #468
  {DBGFIELD("VFMAfq_VFMSfq")      1, 0, 0, 61, 2, 564, 1,  0, 0}, // #469
  {DBGFIELD("VCVTANSD_VCVTANSQ_VCVTANUD_VCVTANUQ_VCVTASD_VCVTASS_VCVTAUD_VCVTAUS_VCVTBDH_VCVTBHD_VCVTMNSD_VCVTMNSQ_VCVTMNUD_VCVTMNUQ_VCVTMSD_VCVTMSS_VCVTMUD_VCVTMUS_VCVTNNSD_VCVTNNSQ_VCVTNNUD_VCVTNNUQ_VCVTNSD_VCVTNSS_VCVTNUD_VCVTNUS_VCVTPNSD_VCVTPNSQ_VCVTPNUD_VCVTPNUQ_VCVTPSD_VCVTPSS_VCVTPUD_VCVTPUS_VCVTTDH_VCVTTHD") 1, 0, 0, 61, 2, 15, 1,  0, 0}, // #470
  {DBGFIELD("VCVTBHS_VCVTTHS")    1, 0, 0, 61, 2, 15, 1,  0, 0}, // #471
  {DBGFIELD("VCVTBSH_VCVTTSH")    1, 0, 0, 61, 2, 15, 1,  0, 0}, // #472
  {DBGFIELD("VCVTDS")             1, 0, 0, 61, 2, 15, 1,  0, 0}, // #473
  {DBGFIELD("VCVTSD")             1, 0, 0, 61, 2, 15, 1,  0, 0}, // #474
  {DBGFIELD("VCVTf2h_VCVTf2sq_VCVTf2uq_VCVTf2xsq_VCVTf2xuq_VCVTh2f_VCVTs2fq_VCVTu2fq_VCVTxs2fq_VCVTxu2fq") 1, 0, 0, 61, 2, 15, 1,  0, 0}, // #475
  {DBGFIELD("VCVTf2sd_VCVTf2ud_VCVTf2xsd_VCVTf2xud_VCVTs2fd_VCVTu2fd_VCVTxs2fd_VCVTxu2fd") 1, 0, 0, 61, 2, 15, 1,  0, 0}, // #476
  {DBGFIELD("VSITOD_VUITOD")      1, 0, 0, 61, 2, 15, 1,  0, 0}, // #477
  {DBGFIELD("VSITOS_VUITOS")      1, 0, 0, 61, 2, 15, 1,  0, 0}, // #478
  {DBGFIELD("VTOSHD_VTOSLD_VTOUHD_VTOULD") 1, 0, 0, 61, 2, 15, 1,  0, 0}, // #479
  {DBGFIELD("VTOSHS_VTOSLS_VTOUHS_VTOULS") 1, 0, 0, 61, 2, 15, 1,  0, 0}, // #480
  {DBGFIELD("VTOSIRD_VTOSIZD_VTOUIRD_VTOUIZD") 1, 0, 0, 61, 2, 15, 1,  0, 0}, // #481
  {DBGFIELD("VTOSIRS_VTOSIZS_VTOUIRS_VTOUIZS") 1, 0, 0, 61, 2, 15, 1,  0, 0}, // #482
  {DBGFIELD("FCONSTD_VMOVD_VMOVDcc") 1, 0, 0, 44, 2,  2, 1,  0, 0}, // #483
  {DBGFIELD("FCONSTS_VMOVS_VMOVScc") 1, 0, 0, 44, 2,  2, 1,  0, 0}, // #484
  {DBGFIELD("VMOVv16i8_VMOVv1i64_VMOVv2f32_VMOVv2i32_VMOVv2i64_VMOVv4f32_VMOVv4i16_VMOVv4i32_VMOVv8i16_VMOVv8i8_VMVNv2i32_VMVNv4i16_VMVNv4i32_VMVNv8i16") 1, 0, 0, 44, 2,  2, 1,  0, 0}, // #485
  {DBGFIELD("VMVNd_VMVNq")        1, 0, 0, 44, 2,  2, 1,  0, 0}, // #486
  {DBGFIELD("VMOVLsv2i64_VMOVLsv4i32_VMOVLsv8i16_VMOVLuv2i64_VMOVLuv4i32_VMOVLuv8i16") 1, 0, 0, 61, 2,  2, 1,  0, 0}, // #487
  {DBGFIELD("VMOVNv2i32_VMOVNv4i16_VMOVNv8i8") 1, 0, 0, 61, 2,  2, 1,  0, 0}, // #488
  {DBGFIELD("VQMOVNsuv2i32_VQMOVNsuv4i16_VQMOVNsuv8i8_VQMOVNsv2i32_VQMOVNsv4i16_VQMOVNsv8i8_VQMOVNuv2i32_VQMOVNuv4i16_VQMOVNuv8i8") 2, 0, 0, 110, 3, 26, 1,  0, 0}, // #489
  {DBGFIELD("VDUPLN16d_VDUPLN32d_VDUPLN8d_VDUPfdf_VDUPfqf") 1, 0, 0, 61, 2,  2, 1,  0, 0}, // #490
  {DBGFIELD("VDUPLN16q_VDUPLN32q_VDUPLN8q") 1, 0, 0, 61, 2,  2, 1,  0, 0}, // #491
  {DBGFIELD("VDUP16d_VDUP16q_VDUP32d_VDUP32q_VDUP8d_VDUP8q") 2, 0, 0, 102, 3, 26, 1,  0, 0}, // #492
  {DBGFIELD("VMOVRS")             1, 0, 0,  4, 1,  3, 1,  0, 0}, // #493
  {DBGFIELD("VMOVSR")             2, 0, 0, 124, 3, 26, 1,  0, 0}, // #494
  {DBGFIELD("VSETLNi16_VSETLNi32_VSETLNi8") 2, 0, 0, 124, 3, 26, 1,  0, 0}, // #495
  {DBGFIELD("VMOVRRD_VMOVRRS")    2, 0, 0, 19, 1, 22, 2,  0, 0}, // #496
  {DBGFIELD("VMOVDRR")            1, 0, 0,  4, 1, 15, 1,  0, 0}, // #497
  {DBGFIELD("VMOVSRR")            4, 0, 0, 127, 3, 83, 2,  0, 0}, // #498
  {DBGFIELD("VGETLNi32_VGETLNu16_VGETLNu8") 2, 0, 0, 102, 3, 16, 1,  0, 0}, // #499
  {DBGFIELD("VGETLNs16_VGETLNs8") 3, 0, 0, 130, 3, 26, 1,  0, 0}, // #500
  {DBGFIELD("VMRS_VMRS_FPEXC_VMRS_FPINST_VMRS_FPINST2_VMRS_FPSID_VMRS_MVFR0_VMRS_MVFR1") 3, 0, 0, 133, 4, 565, 3,  0, 0}, // #501
  {DBGFIELD("VMSR_VMSR_FPEXC_VMSR_FPINST_VMSR_FPINST2_VMSR_FPSID") 3, 0, 0, 133, 4, 565, 3,  0, 0}, // #502
  {DBGFIELD("FMSTAT")             1, 0, 0, 44, 2,  2, 1,  0, 0}, // #503
  {DBGFIELD("VLDRD")              1, 0, 0,  4, 1, 15, 1,  0, 0}, // #504
  {DBGFIELD("VLDRS")              1, 0, 0,  4, 1, 15, 1,  0, 0}, // #505
  {DBGFIELD("VSTRD")              1, 0, 0,  4, 1, 15, 1,  0, 0}, // #506
  {DBGFIELD("VSTRS")              1, 0, 0,  4, 1, 15, 1,  0, 0}, // #507
  {DBGFIELD("VLDMQIA")            1, 0, 0,  4, 1, 15, 1,  0, 0}, // #508
  {DBGFIELD("VSTMQIA")            1, 0, 0,  4, 1, 15, 1,  0, 0}, // #509
  {DBGFIELD("VLDMDIA_VLDMSIA")    65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #510
  {DBGFIELD("VLDMDDB_UPD_VLDMDIA_UPD_VLDMSDB_UPD_VLDMSIA_UPD") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #511
  {DBGFIELD("VSTMDIA_VSTMSIA")    65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #512
  {DBGFIELD("VSTMDDB_UPD_VSTMDIA_UPD_VSTMSDB_UPD_VSTMSIA_UPD") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #513
  {DBGFIELD("VLD1d16_VLD1d32_VLD1d64_VLD1d8") 1, 0, 0,  4, 1, 15, 1,  0, 0}, // #514
  {DBGFIELD("VLD1q16_VLD1q32_VLD1q64_VLD1q8") 1, 0, 0,  4, 1, 15, 1,  0, 0}, // #515
  {DBGFIELD("VLD1d16wb_fixed_VLD1d16wb_register_VLD1d32wb_fixed_VLD1d32wb_register_VLD1d64wb_fixed_VLD1d64wb_register_VLD1d8wb_fixed_VLD1d8wb_register") 2, 0, 0, 29, 2, 286, 2,  0, 0}, // #516
  {DBGFIELD("VLD1q16wb_fixed_VLD1q16wb_register_VLD1q32wb_fixed_VLD1q32wb_register_VLD1q64wb_fixed_VLD1q64wb_register_VLD1q8wb_fixed_VLD1q8wb_register") 2, 0, 0, 29, 2, 286, 2,  0, 0}, // #517
  {DBGFIELD("VLD1d16T_VLD1d32T_VLD1d64T_VLD1d64TPseudo_VLD1d8T") 1, 0, 0, 26, 1, 15, 1,  0, 0}, // #518
  {DBGFIELD("VLD1d16Twb_fixed_VLD1d16Twb_register_VLD1d32Twb_fixed_VLD1d32Twb_register_VLD1d64Twb_fixed_VLD1d64Twb_register_VLD1d8Twb_fixed_VLD1d8Twb_register") 2, 0, 0, 137, 2, 286, 2,  0, 0}, // #519
  {DBGFIELD("VLD1d16Q_VLD1d32Q_VLD1d64Q_VLD1d64QPseudo_VLD1d8Q") 1, 0, 0, 19, 1, 15, 1,  0, 0}, // #520
  {DBGFIELD("VLD1d16Qwb_fixed_VLD1d16Qwb_register_VLD1d32Qwb_fixed_VLD1d32Qwb_register_VLD1d64Qwb_fixed_VLD1d64Qwb_register_VLD1d8Qwb_fixed_VLD1d8Qwb_register") 2, 0, 0, 23, 2, 286, 2,  0, 0}, // #521
  {DBGFIELD("VLD2b16_VLD2b32_VLD2b8_VLD2d16_VLD2d32_VLD2d8") 5, 0, 0, 139, 4, 568, 3,  0, 0}, // #522
  {DBGFIELD("VLD2q16_VLD2q16Pseudo_VLD2q32_VLD2q32Pseudo_VLD2q8_VLD2q8Pseudo") 5, 0, 0, 139, 4, 568, 3,  0, 0}, // #523
  {DBGFIELD("VLD2b16wb_fixed_VLD2b16wb_register_VLD2b32wb_fixed_VLD2b32wb_register_VLD2b8wb_fixed_VLD2b8wb_register_VLD2d16wb_fixed_VLD2d16wb_register_VLD2d32wb_fixed_VLD2d32wb_register_VLD2d8wb_fixed_VLD2d8wb_register") 6, 0, 0, 143, 4, 571, 4,  0, 0}, // #524
  {DBGFIELD("VLD2q16PseudoWB_fixed_VLD2q16PseudoWB_register_VLD2q16wb_fixed_VLD2q16wb_register_VLD2q32PseudoWB_fixed_VLD2q32PseudoWB_register_VLD2q32wb_fixed_VLD2q32wb_register_VLD2q8PseudoWB_fixed_VLD2q8PseudoWB_register_VLD2q8wb_fixed_VLD2q8wb_register") 6, 0, 0, 143, 4, 571, 4,  0, 0}, // #525
  {DBGFIELD("VLD3d16_VLD3d32_VLD3d8_VLD3q16_VLD3q32_VLD3q8") 7, 0, 0, 147, 3, 575, 5,  0, 0}, // #526
  {DBGFIELD("VLD3d16Pseudo_VLD3d32Pseudo_VLD3d8Pseudo_VLD3q16oddPseudo_VLD3q32oddPseudo_VLD3q8oddPseudo") 5, 0, 0, 147, 3, 577, 3,  0, 0}, // #527
  {DBGFIELD("VLD3d16_UPD_VLD3d32_UPD_VLD3d8_UPD_VLD3q16_UPD_VLD3q32_UPD_VLD3q8_UPD") 8, 0, 0, 150, 3, 580, 6,  0, 0}, // #528
  {DBGFIELD("VLD3d16Pseudo_UPD_VLD3d32Pseudo_UPD_VLD3d8Pseudo_UPD_VLD3q16Pseudo_UPD_VLD3q16oddPseudo_UPD_VLD3q32Pseudo_UPD_VLD3q32oddPseudo_UPD_VLD3q8Pseudo_UPD_VLD3q8oddPseudo_UPD") 6, 0, 0, 150, 3, 582, 4,  0, 0}, // #529
  {DBGFIELD("VLD4d16_VLD4d32_VLD4d8_VLD4q16_VLD4q32_VLD4q8") 11, 0, 0, 153, 4, 586, 7,  0, 0}, // #530
  {DBGFIELD("VLD4d16Pseudo_VLD4d32Pseudo_VLD4d8Pseudo_VLD4q16oddPseudo_VLD4q32oddPseudo_VLD4q8oddPseudo") 8, 0, 0, 157, 4, 589, 4,  0, 0}, // #531
  {DBGFIELD("VLD4d16_UPD_VLD4d32_UPD_VLD4d8_UPD_VLD4q16_UPD_VLD4q32_UPD_VLD4q8_UPD") 12, 0, 0, 161, 4, 593, 8,  0, 0}, // #532
  {DBGFIELD("VLD4d16Pseudo_UPD_VLD4d32Pseudo_UPD_VLD4d8Pseudo_UPD_VLD4q16Pseudo_UPD_VLD4q16oddPseudo_UPD_VLD4q32Pseudo_UPD_VLD4q32oddPseudo_UPD_VLD4q8Pseudo_UPD_VLD4q8oddPseudo_UPD") 9, 0, 0, 165, 4, 596, 5,  0, 0}, // #533
  {DBGFIELD("VLD1DUPd16_VLD1DUPd32_VLD1DUPd8_VLD1DUPq16_VLD1DUPq32_VLD1DUPq8") 3, 0, 0, 169, 3, 100, 2,  0, 0}, // #534
  {DBGFIELD("VLD1LNd16_VLD1LNd32_VLD1LNd8_VLD1LNq16Pseudo_VLD1LNq32Pseudo_VLD1LNq8Pseudo") 3, 0, 0, 169, 3, 100, 2,  0, 0}, // #535
  {DBGFIELD("VLD1DUPd16wb_fixed_VLD1DUPd16wb_register_VLD1DUPd32wb_fixed_VLD1DUPd32wb_register_VLD1DUPd8wb_fixed_VLD1DUPd8wb_register_VLD1DUPq16wb_fixed_VLD1DUPq16wb_register_VLD1DUPq32wb_fixed_VLD1DUPq32wb_register_VLD1DUPq8wb_fixed_VLD1DUPq8wb_register") 4, 0, 0, 172, 3, 601, 3,  0, 0}, // #536
  {DBGFIELD("VLD1LNd16_UPD_VLD1LNd32_UPD_VLD1LNd8_UPD_VLD1LNq16Pseudo_UPD_VLD1LNq32Pseudo_UPD_VLD1LNq8Pseudo_UPD") 4, 0, 0, 172, 3, 601, 3,  0, 0}, // #537
  {DBGFIELD("VLD2DUPd16_VLD2DUPd16x2_VLD2DUPd32_VLD2DUPd32x2_VLD2DUPd8_VLD2DUPd8x2") 5, 0, 0, 175, 4, 604, 4,  0, 0}, // #538
  {DBGFIELD("VLD2LNd16_VLD2LNd16Pseudo_VLD2LNd32_VLD2LNd32Pseudo_VLD2LNd8_VLD2LNd8Pseudo_VLD2LNq16_VLD2LNq16Pseudo_VLD2LNq32_VLD2LNq32Pseudo") 5, 0, 0, 175, 4, 604, 4,  0, 0}, // #539
  {DBGFIELD("VLD2LNd16_UPD_VLD2LNd32_UPD_VLD2LNd8_UPD_VLD2LNq16_UPD_VLD2LNq32_UPD") 6, 0, 0, 179, 4, 608, 5,  0, 0}, // #540
  {DBGFIELD("VLD2DUPd16wb_fixed_VLD2DUPd16wb_register_VLD2DUPd16x2wb_fixed_VLD2DUPd16x2wb_register_VLD2DUPd32wb_fixed_VLD2DUPd32wb_register_VLD2DUPd32x2wb_fixed_VLD2DUPd32x2wb_register_VLD2DUPd8wb_fixed_VLD2DUPd8wb_register_VLD2DUPd8x2wb_fixed_VLD2DUPd8x2wb_register") 6, 0, 0, 179, 4, 613, 5,  0, 0}, // #541
  {DBGFIELD("VLD2LNd16Pseudo_UPD_VLD2LNd32Pseudo_UPD_VLD2LNd8Pseudo_UPD_VLD2LNq16Pseudo_UPD_VLD2LNq32Pseudo_UPD") 6, 0, 0, 179, 4, 613, 5,  0, 0}, // #542
  {DBGFIELD("VLD3DUPd16_VLD3DUPd16Pseudo_VLD3DUPd32_VLD3DUPd32Pseudo_VLD3DUPd8_VLD3DUPd8Pseudo_VLD3DUPq16_VLD3DUPq32_VLD3DUPq8") 7, 0, 0, 183, 4, 618, 5,  0, 0}, // #543
  {DBGFIELD("VLD3LNd16_VLD3LNd16Pseudo_VLD3LNd32_VLD3LNd32Pseudo_VLD3LNd8_VLD3LNd8Pseudo_VLD3LNq16_VLD3LNq16Pseudo_VLD3LNq32_VLD3LNq32Pseudo") 7, 0, 0, 183, 4, 618, 5,  0, 0}, // #544
  {DBGFIELD("VLD3DUPd16_UPD_VLD3DUPd32_UPD_VLD3DUPd8_UPD_VLD3DUPq16_UPD_VLD3DUPq32_UPD_VLD3DUPq8_UPD") 8, 0, 0, 187, 4, 623, 6,  0, 0}, // #545
  {DBGFIELD("VLD3LNd16_UPD_VLD3LNd32_UPD_VLD3LNd8_UPD_VLD3LNq16_UPD_VLD3LNq32_UPD") 8, 0, 0, 187, 4, 623, 6,  0, 0}, // #546
  {DBGFIELD("VLD3DUPd16Pseudo_UPD_VLD3DUPd32Pseudo_UPD_VLD3DUPd8Pseudo_UPD") 8, 0, 0, 187, 4, 629, 6,  0, 0}, // #547
  {DBGFIELD("VLD3LNd16Pseudo_UPD_VLD3LNd32Pseudo_UPD_VLD3LNd8Pseudo_UPD_VLD3LNq16Pseudo_UPD_VLD3LNq32Pseudo_UPD") 8, 0, 0, 187, 4, 629, 6,  0, 0}, // #548
  {DBGFIELD("VLD4DUPd16_VLD4DUPd16Pseudo_VLD4DUPd32_VLD4DUPd32Pseudo_VLD4DUPd8_VLD4DUPd8Pseudo_VLD4DUPq16_VLD4DUPq32_VLD4DUPq8") 10, 0, 0, 191, 4, 635, 6,  0, 0}, // #549
  {DBGFIELD("VLD4LNd16_VLD4LNd16Pseudo_VLD4LNd32_VLD4LNd32Pseudo_VLD4LNd8_VLD4LNd8Pseudo_VLD4LNq16_VLD4LNq16Pseudo_VLD4LNq32_VLD4LNq32Pseudo") 10, 0, 0, 191, 4, 635, 6,  0, 0}, // #550
  {DBGFIELD("VLD4DUPd16_UPD_VLD4DUPd32_UPD_VLD4DUPd8_UPD_VLD4DUPq16_UPD_VLD4DUPq32_UPD_VLD4DUPq8_UPD") 11, 0, 0, 195, 4, 641, 7,  0, 0}, // #551
  {DBGFIELD("VLD4LNd16_UPD_VLD4LNd32_UPD_VLD4LNd8_UPD_VLD4LNq16_UPD_VLD4LNq32_UPD") 11, 0, 0, 195, 4, 641, 7,  0, 0}, // #552
  {DBGFIELD("VLD4DUPd16Pseudo_UPD_VLD4DUPd32Pseudo_UPD_VLD4DUPd8Pseudo_UPD") 11, 0, 0, 195, 4, 648, 7,  0, 0}, // #553
  {DBGFIELD("VLD4LNd16Pseudo_UPD_VLD4LNd32Pseudo_UPD_VLD4LNd8Pseudo_UPD_VLD4LNq16Pseudo_UPD_VLD4LNq32Pseudo_UPD") 11, 0, 0, 195, 4, 648, 7,  0, 0}, // #554
  {DBGFIELD("VST1d16_VST1d32_VST1d64_VST1d8") 1, 0, 0,  4, 1,  0, 1,  0, 0}, // #555
  {DBGFIELD("VST1q16_VST1q32_VST1q64_VST1q8") 2, 0, 0, 19, 1,  0, 1,  0, 0}, // #556
  {DBGFIELD("VST1d16wb_fixed_VST1d16wb_register_VST1d32wb_fixed_VST1d32wb_register_VST1d64wb_fixed_VST1d64wb_register_VST1d8wb_fixed_VST1d8wb_register") 2, 0, 0, 29, 2, 50, 2,  0, 0}, // #557
  {DBGFIELD("VST1q16wb_fixed_VST1q16wb_register_VST1q32wb_fixed_VST1q32wb_register_VST1q64wb_fixed_VST1q64wb_register_VST1q8wb_fixed_VST1q8wb_register") 3, 0, 0, 23, 2, 50, 2,  0, 0}, // #558
  {DBGFIELD("VST1d16T_VST1d32T_VST1d64T_VST1d64TPseudo_VST1d8T") 3, 0, 0, 26, 1,  0, 1,  0, 0}, // #559
  {DBGFIELD("VST1d16Twb_fixed_VST1d16Twb_register_VST1d32Twb_fixed_VST1d32Twb_register_VST1d64Twb_fixed_VST1d64Twb_register_VST1d8Twb_fixed_VST1d8Twb_register") 4, 0, 0, 137, 2, 50, 2,  0, 0}, // #560
  {DBGFIELD("VST1d64TPseudoWB_fixed_VST1d64TPseudoWB_register") 4, 0, 0, 137, 2, 50, 2,  0, 0}, // #561
  {DBGFIELD("VST1d16Q_VST1d32Q_VST1d64Q_VST1d64QPseudo_VST1d8Q") 4, 0, 0, 35, 1,  0, 1,  0, 0}, // #562
  {DBGFIELD("VST1d16Qwb_fixed_VST1d16Qwb_register_VST1d32Qwb_fixed_VST1d32Qwb_register_VST1d64Qwb_fixed_VST1d64Qwb_register_VST1d8Qwb_fixed_VST1d8Qwb_register") 5, 0, 0, 199, 2, 50, 2,  0, 0}, // #563
  {DBGFIELD("VST1d64QPseudoWB_fixed_VST1d64QPseudoWB_register") 5, 0, 0, 199, 2, 50, 2,  0, 0}, // #564
  {DBGFIELD("VST2b16_VST2b32_VST2b8_VST2d16_VST2d32_VST2d8") 2, 0, 0, 102, 3, 561, 2,  0, 0}, // #565
  {DBGFIELD("VST2b16wb_fixed_VST2b16wb_register_VST2b32wb_fixed_VST2b32wb_register_VST2b8wb_fixed_VST2b8wb_register_VST2d16wb_fixed_VST2d16wb_register_VST2d32wb_fixed_VST2d32wb_register_VST2d8wb_fixed_VST2d8wb_register") 3, 0, 0, 130, 3, 560, 3,  0, 0}, // #566
  {DBGFIELD("VST2q16_VST2q16Pseudo_VST2q32_VST2q32Pseudo_VST2q8_VST2q8Pseudo") 4, 0, 0, 127, 3, 561, 2,  0, 0}, // #567
  {DBGFIELD("VST2q16PseudoWB_fixed_VST2q16PseudoWB_register_VST2q32PseudoWB_fixed_VST2q32PseudoWB_register_VST2q8PseudoWB_fixed_VST2q8PseudoWB_register") 4, 0, 0, 127, 3, 561, 2,  0, 0}, // #568
  {DBGFIELD("VST2q16wb_fixed_VST2q16wb_register_VST2q32wb_fixed_VST2q32wb_register_VST2q8wb_fixed_VST2q8wb_register") 4, 0, 0, 127, 3, 561, 2,  0, 0}, // #569
  {DBGFIELD("VST3d16_VST3d16Pseudo_VST3d32_VST3d32Pseudo_VST3d8_VST3d8Pseudo_VST3q16_VST3q16oddPseudo_VST3q32_VST3q32oddPseudo_VST3q8_VST3q8oddPseudo") 6, 0, 0, 201, 3, 561, 2,  0, 0}, // #570
  {DBGFIELD("VST3d16Pseudo_UPD_VST3d16_UPD_VST3d32Pseudo_UPD_VST3d32_UPD_VST3d8Pseudo_UPD_VST3d8_UPD_VST3q16Pseudo_UPD_VST3q16_UPD_VST3q16oddPseudo_UPD_VST3q32Pseudo_UPD_VST3q32_UPD_VST3q32oddPseudo_UPD_VST3q8Pseudo_UPD_VST3q8_UPD_VST3q8oddPseudo_UPD") 7, 0, 0, 204, 3, 560, 3,  0, 0}, // #571
  {DBGFIELD("VST4d16_VST4d16Pseudo_VST4d32_VST4d32Pseudo_VST4d8_VST4d8Pseudo_VST4q16_VST4q16oddPseudo_VST4q32_VST4q32oddPseudo_VST4q8_VST4q8oddPseudo") 6, 0, 0, 201, 3, 561, 2,  0, 0}, // #572
  {DBGFIELD("VST4d16Pseudo_UPD_VST4d16_UPD_VST4d32Pseudo_UPD_VST4d32_UPD_VST4d8Pseudo_UPD_VST4d8_UPD_VST4q16Pseudo_UPD_VST4q16_UPD_VST4q16oddPseudo_UPD_VST4q32Pseudo_UPD_VST4q32_UPD_VST4q32oddPseudo_UPD_VST4q8Pseudo_UPD_VST4q8_UPD_VST4q8oddPseudo_UPD") 9, 0, 0, 207, 3, 560, 3,  0, 0}, // #573
  {DBGFIELD("VST1LNd16_VST1LNd32_VST1LNd8_VST1LNq16Pseudo_VST1LNq32Pseudo_VST1LNq8Pseudo") 2, 0, 0, 102, 3, 561, 2,  0, 0}, // #574
  {DBGFIELD("VST1LNd16_UPD_VST1LNd32_UPD_VST1LNd8_UPD_VST1LNq16Pseudo_UPD_VST1LNq32Pseudo_UPD_VST1LNq8Pseudo_UPD") 3, 0, 0, 130, 3, 560, 3,  0, 0}, // #575
  {DBGFIELD("VST2LNd16_VST2LNd16Pseudo_VST2LNd32_VST2LNd32Pseudo_VST2LNd8_VST2LNd8Pseudo_VST2LNq16_VST2LNq16Pseudo_VST2LNq32_VST2LNq32Pseudo") 3, 0, 0, 169, 3, 561, 2,  0, 0}, // #576
  {DBGFIELD("VST2LNd16Pseudo_UPD_VST2LNd16_UPD_VST2LNd32Pseudo_UPD_VST2LNd32_UPD_VST2LNd8Pseudo_UPD_VST2LNd8_UPD_VST2LNq16Pseudo_UPD_VST2LNq16_UPD_VST2LNq32Pseudo_UPD_VST2LNq32_UPD") 4, 0, 0, 172, 3, 560, 3,  0, 0}, // #577
  {DBGFIELD("VST3LNd16_VST3LNd16Pseudo_VST3LNd32_VST3LNd32Pseudo_VST3LNd8_VST3LNd8Pseudo_VST3LNq16_VST3LNq16Pseudo_VST3LNq32_VST3LNq32Pseudo") 6, 0, 0, 201, 3, 561, 2,  0, 0}, // #578
  {DBGFIELD("VST3LNd16Pseudo_UPD_VST3LNd16_UPD_VST3LNd32Pseudo_UPD_VST3LNd32_UPD_VST3LNd8Pseudo_UPD_VST3LNd8_UPD_VST3LNq16Pseudo_UPD_VST3LNq16_UPD_VST3LNq32Pseudo_UPD_VST3LNq32_UPD") 7, 0, 0, 204, 3, 560, 3,  0, 0}, // #579
  {DBGFIELD("VST4LNd16_VST4LNd16Pseudo_VST4LNd32_VST4LNd32Pseudo_VST4LNd8_VST4LNd8Pseudo_VST4LNq16_VST4LNq16Pseudo_VST4LNq32_VST4LNq32Pseudo") 4, 0, 0, 127, 3, 561, 2,  0, 0}, // #580
  {DBGFIELD("VST4LNd16Pseudo_UPD_VST4LNd16_UPD_VST4LNd32Pseudo_UPD_VST4LNd32_UPD_VST4LNd8Pseudo_UPD_VST4LNd8_UPD_VST4LNq16Pseudo_UPD_VST4LNq16_UPD_VST4LNq32Pseudo_UPD_VST4LNq32_UPD") 5, 0, 0, 176, 3, 560, 3,  0, 0}, // #581
  {DBGFIELD("VDIVS")              1, 0, 0, 210, 3, 44, 1,  0, 0}, // #582
  {DBGFIELD("VSQRTS")             1, 0, 0, 210, 3, 44, 1,  0, 0}, // #583
  {DBGFIELD("VDIVD")              1, 0, 0, 213, 3, 43, 1,  0, 0}, // #584
  {DBGFIELD("VSQRTD")             1, 0, 0, 213, 3, 43, 1,  0, 0}, // #585
  {DBGFIELD("ABS")                2, 0, 0, 27, 1,  2, 1,  0, 0}, // #586
  {DBGFIELD("SwiftWriteP01TwoCycle_ReadALU") 1, 0, 0,  6, 1,  2, 1,  0, 1}, // #587
  {DBGFIELD("WriteALU_ReadALU")   1, 0, 0,  6, 1,  1, 1,  0, 1}, // #588
  {DBGFIELD("SwiftWriteP01ThreeCycleTwoUops_anonymous.val.3455") 2, 0, 0, 27, 1,  3, 1, 64, 1}, // #589
  {DBGFIELD("SwiftWriteP01TwoCycle_NoReadAdvance") 1, 0, 0,  6, 1,  2, 1,  0, 1}, // #590
  {DBGFIELD("SwiftWriteP0ThreeCycleThreeUops_anonymous.val.3455") 3, 0, 0, 216, 2,  3, 1, 64, 1}, // #591
  {DBGFIELD("SwiftWriteP01OneCycle_ReadALU") 1, 0, 0,  6, 1,  1, 1,  0, 1}, // #592
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_A9WriteAdr_A9WriteIssue") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #593
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteIssue") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #594
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #595
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #596
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #597
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #598
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #599
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #600
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteIssue") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #601
  {DBGFIELD("A9WriteAdr_A9WriteL1_A9WriteL1Hi_A9WriteIssue") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #602
  {DBGFIELD("(A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #603
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #604
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #605
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #606
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #607
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #608
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #609
  {DBGFIELD("(A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #610
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_A9WriteAdr_A9WriteB") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #611
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteB") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #612
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #613
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #614
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #615
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #616
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #617
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #618
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteB") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #619
  {DBGFIELD("SwiftWriteP01ThreeCycleTwoUops") 2, 0, 0, 27, 1,  3, 1,  0, 0}, // #620
  {DBGFIELD("SwiftWriteP01TwoCycle") 1, 0, 0,  6, 1,  2, 1,  0, 0}, // #621
  {DBGFIELD("WriteALU")           1, 0, 0,  6, 1,  1, 1,  0, 0}, // #622
  {DBGFIELD("A9WriteAdr_(A9WriteIssue_A9WriteLfpOp)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #623
  {DBGFIELD("(A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #624
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #625
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #626
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #627
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #628
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #629
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #630
  {DBGFIELD("A9WriteAdr_A9WriteLMfp1_A9WriteL1Hi") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #631
  {DBGFIELD("(A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #632
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #633
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #634
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #635
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #636
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #637
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #638
  {DBGFIELD("(A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #639
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp)_A9WriteAdr") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #640
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_A9WriteAdr") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #641
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #642
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #643
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #644
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #645
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #646
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #647
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #648
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #649
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #650
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #651
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #652
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #653
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #654
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #655
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #656
  {DBGFIELD("SwiftWriteP01TwoCycle_anonymous.val.3455") 1, 0, 0,  6, 1,  2, 1, 64, 1}, // #657
  {DBGFIELD("WriteALU_anonymous.val.3455") 1, 0, 0,  6, 1,  1, 1, 64, 1}, // #658
  {DBGFIELD("WriteALU_NoReadAdvance") 1, 0, 0,  6, 1,  1, 1,  0, 1}, // #659
  {DBGFIELD("SwiftWriteP01OneCycle_ReadALU_ReadALU") 1, 0, 0,  6, 1,  1, 1, 86, 2}, // #660
  {DBGFIELD("SwiftWriteP01TwoCycle_ReadALU_ReadALU") 1, 0, 0,  6, 1,  2, 1, 86, 2}, // #661
  {DBGFIELD("SwiftWriteP01OneCycle") 1, 0, 0,  6, 1,  1, 1,  0, 0}, // #662
  {DBGFIELD("(SwiftWriteP0OneCycle_SwiftWriteP0OneCycle)") 2, 0, 0, 218, 2,  2, 1,  0, 0}, // #663
  {DBGFIELD("SwiftWriteP0OneCycle") 1, 0, 0, 44, 2,  1, 1,  0, 0}, // #664
  {DBGFIELD("SwiftWriteP0P01FiveCycleTwoUops_ReadALU_ReadALU_anonymous.val.3465") 1, 0, 0, 220, 2, 16, 1, 88, 3}, // #665
  {DBGFIELD("SwiftWriteP0FourCycle_ReadALU_ReadALU_ReadALU") 1, 0, 0, 44, 2, 15, 1, 95, 3}, // #666
  {DBGFIELD("SwiftWriteP0P01FiveCycleTwoUops") 1, 0, 0, 220, 2, 16, 1,  0, 0}, // #667
  {DBGFIELD("SwiftWriteP0FourCycle") 1, 0, 0, 44, 2, 15, 1,  0, 0}, // #668
  {DBGFIELD("SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLDMAddrNoWB") 3, 0, 0, 23, 2, 655, 3,  0, 0}, // #669
  {DBGFIELD("SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLDMAddrNoWB") 4, 0, 0, 137, 2, 658, 4,  0, 0}, // #670
  {DBGFIELD("SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLDMAddrNoWB") 5, 0, 0, 199, 2, 662, 5,  0, 0}, // #671
  {DBGFIELD("SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLDMAddrNoWB") 6, 0, 0, 222, 2, 667, 6,  0, 0}, // #672
  {DBGFIELD("SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLDMAddrNoWB") 7, 0, 0, 224, 2, 673, 7,  0, 0}, // #673
  {DBGFIELD("SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLDMAddrNoWB") 8, 0, 0, 226, 2, 680, 8,  0, 0}, // #674
  {DBGFIELD("SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLDMAddrNoWB") 9, 0, 0, 228, 2, 688, 9,  0, 0}, // #675
  {DBGFIELD("SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLDMAddrNoWB") 10, 0, 0, 230, 2, 697, 10,  0, 0}, // #676
  {DBGFIELD("SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLDMAddrNoWB") 11, 0, 0, 232, 2, 707, 11,  0, 0}, // #677
  {DBGFIELD("SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLDMAddrNoWB") 12, 0, 0, 234, 2, 718, 12,  0, 0}, // #678
  {DBGFIELD("SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLDMAddrNoWB") 13, 0, 0, 236, 2, 730, 13,  0, 0}, // #679
  {DBGFIELD("SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLDMAddrNoWB") 14, 0, 0, 238, 2, 743, 14,  0, 0}, // #680
  {DBGFIELD("SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM16Cy_SwiftWriteLDMAddrNoWB") 15, 0, 0, 240, 2, 757, 15,  0, 0}, // #681
  {DBGFIELD("SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM16Cy_SwiftWriteLM17Cy_SwiftWriteLDMAddrNoWB") 16, 0, 0, 242, 2, 772, 16,  0, 0}, // #682
  {DBGFIELD("SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM16Cy_SwiftWriteLM17Cy_SwiftWriteLM18Cy_SwiftWriteLDMAddrNoWB") 17, 0, 0, 244, 2, 788, 17,  0, 0}, // #683
  {DBGFIELD("SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5CyNo_SwiftWriteLM6CyNo_SwiftWriteLM7CyNo_SwiftWriteLM8CyNo_SwiftWriteLM9CyNo_SwiftWriteLM10CyNo_SwiftWriteLM11CyNo_SwiftWriteLM12CyNo_SwiftWriteLM13CyNo_SwiftWriteLM14CyNo_SwiftWriteLM15CyNo_SwiftWriteLM16CyNo_SwiftWriteLM17CyNo_SwiftWriteLM18CyNo_SwiftWriteLDMAddrNoWB") 17, 0, 0, 23, 2, 788, 17,  0, 0}, // #684
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy") 3, 0, 0, 32, 2, 21, 3,  0, 0}, // #685
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy") 4, 0, 0, 26, 2, 805, 4,  0, 0}, // #686
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy") 5, 0, 0, 202, 2, 809, 5,  0, 0}, // #687
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy") 6, 0, 0, 246, 2, 814, 6,  0, 0}, // #688
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy") 7, 0, 0, 248, 2, 820, 7,  0, 0}, // #689
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy") 8, 0, 0, 250, 2, 827, 8,  0, 0}, // #690
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy") 9, 0, 0, 252, 2, 835, 9,  0, 0}, // #691
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy") 10, 0, 0, 254, 2, 844, 10,  0, 0}, // #692
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy") 11, 0, 0, 256, 2, 854, 11,  0, 0}, // #693
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy") 12, 0, 0, 258, 2, 865, 12,  0, 0}, // #694
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy") 13, 0, 0, 260, 2, 877, 13,  0, 0}, // #695
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy") 14, 0, 0, 262, 2, 890, 14,  0, 0}, // #696
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM16Cy") 15, 0, 0, 264, 2, 904, 15,  0, 0}, // #697
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM16Cy_SwiftWriteLM17Cy") 16, 0, 0, 266, 2, 919, 16,  0, 0}, // #698
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM16Cy_SwiftWriteLM17Cy_SwiftWriteLM18Cy") 17, 0, 0, 268, 2, 935, 17,  0, 0}, // #699
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5CyNo_SwiftWriteLM6CyNo_SwiftWriteLM7CyNo_SwiftWriteLM8CyNo_SwiftWriteLM9CyNo_SwiftWriteLM10CyNo_SwiftWriteLM11CyNo_SwiftWriteLM12CyNo_SwiftWriteLM13CyNo_SwiftWriteLM14CyNo_SwiftWriteLM15CyNo_SwiftWriteLM16CyNo_SwiftWriteLM17CyNo_SwiftWriteLM18CyNo") 17, 0, 0, 32, 2, 935, 17,  0, 0}, // #700
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteP1TwoCycle") 4, 0, 0, 270, 3, 952, 4,  0, 0}, // #701
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteP1TwoCycle") 5, 0, 0, 273, 3, 956, 5,  0, 0}, // #702
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteP1TwoCycle") 6, 0, 0, 276, 3, 961, 6,  0, 0}, // #703
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteP1TwoCycle") 7, 0, 0, 279, 3, 967, 7,  0, 0}, // #704
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteP1TwoCycle") 8, 0, 0, 282, 3, 974, 8,  0, 0}, // #705
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteP1TwoCycle") 9, 0, 0, 285, 3, 982, 9,  0, 0}, // #706
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteP1TwoCycle") 10, 0, 0, 288, 3, 991, 10,  0, 0}, // #707
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteP1TwoCycle") 11, 0, 0, 291, 3, 1001, 11,  0, 0}, // #708
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteP1TwoCycle") 12, 0, 0, 294, 3, 1012, 12,  0, 0}, // #709
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteP1TwoCycle") 13, 0, 0, 297, 3, 1024, 13,  0, 0}, // #710
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteP1TwoCycle") 14, 0, 0, 300, 3, 1037, 14,  0, 0}, // #711
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteP1TwoCycle") 15, 0, 0, 303, 3, 1051, 15,  0, 0}, // #712
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM16Cy_SwiftWriteP1TwoCycle") 16, 0, 0, 306, 3, 1066, 16,  0, 0}, // #713
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM16Cy_SwiftWriteLM17Cy_SwiftWriteP1TwoCycle") 17, 0, 0, 309, 3, 1082, 17,  0, 0}, // #714
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM16Cy_SwiftWriteLM17Cy_SwiftWriteLM18Cy_SwiftWriteP1TwoCycle") 18, 0, 0, 312, 3, 1099, 18,  0, 0}, // #715
  {DBGFIELD("SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5CyNo_SwiftWriteLM6CyNo_SwiftWriteLM7CyNo_SwiftWriteLM8CyNo_SwiftWriteLM9CyNo_SwiftWriteLM10CyNo_SwiftWriteLM11CyNo_SwiftWriteLM12CyNo_SwiftWriteLM13CyNo_SwiftWriteLM14CyNo_SwiftWriteLM15CyNo_SwiftWriteLM16CyNo_SwiftWriteLM17CyNo_SwiftWriteLM18CyNo_SwiftWriteP1TwoCycle") 18, 0, 0, 270, 3, 1099, 18,  0, 0}, // #716
  {DBGFIELD("(SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 2, 0, 0, 32, 2,  0, 1,  0, 0}, // #717
  {DBGFIELD("(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 3, 0, 0, 85, 2,  0, 1,  0, 0}, // #718
  {DBGFIELD("(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 4, 0, 0, 88, 2,  0, 1,  0, 0}, // #719
  {DBGFIELD("(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 5, 0, 0, 91, 2,  0, 1,  0, 0}, // #720
  {DBGFIELD("(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 6, 0, 0, 94, 2,  0, 1,  0, 0}, // #721
  {DBGFIELD("(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 7, 0, 0, 97, 2,  0, 1,  0, 0}, // #722
  {DBGFIELD("(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 8, 0, 0, 100, 2,  0, 1,  0, 0}, // #723
  {DBGFIELD("(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 9, 0, 0, 315, 2,  0, 1,  0, 0}, // #724
  {DBGFIELD("(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 10, 0, 0, 317, 2,  0, 1,  0, 0}, // #725
  {DBGFIELD("(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 11, 0, 0, 319, 2,  0, 1,  0, 0}, // #726
  {DBGFIELD("(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 12, 0, 0, 321, 2,  0, 1,  0, 0}, // #727
  {DBGFIELD("(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 13, 0, 0, 323, 2,  0, 1,  0, 0}, // #728
  {DBGFIELD("(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 14, 0, 0, 325, 2,  0, 1,  0, 0}, // #729
  {DBGFIELD("(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 15, 0, 0, 327, 2,  0, 1,  0, 0}, // #730
  {DBGFIELD("(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 16, 0, 0, 329, 2,  0, 1,  0, 0}, // #731
  {DBGFIELD("SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 3, 0, 0, 177, 2, 50, 2,  0, 0}, // #732
  {DBGFIELD("SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 4, 0, 0, 185, 2, 50, 2,  0, 0}, // #733
  {DBGFIELD("SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 5, 0, 0, 208, 2, 50, 2,  0, 0}, // #734
  {DBGFIELD("SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 6, 0, 0, 331, 2, 50, 2,  0, 0}, // #735
  {DBGFIELD("SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 7, 0, 0, 333, 2, 50, 2,  0, 0}, // #736
  {DBGFIELD("SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 8, 0, 0, 335, 2, 50, 2,  0, 0}, // #737
  {DBGFIELD("SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 9, 0, 0, 337, 2, 50, 2,  0, 0}, // #738
  {DBGFIELD("SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 10, 0, 0, 339, 2, 50, 2,  0, 0}, // #739
  {DBGFIELD("SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 11, 0, 0, 341, 2, 50, 2,  0, 0}, // #740
  {DBGFIELD("SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 12, 0, 0, 343, 2, 50, 2,  0, 0}, // #741
  {DBGFIELD("SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 13, 0, 0, 345, 2, 50, 2,  0, 0}, // #742
  {DBGFIELD("SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 14, 0, 0, 347, 2, 50, 2,  0, 0}, // #743
  {DBGFIELD("SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 15, 0, 0, 349, 2, 50, 2,  0, 0}, // #744
  {DBGFIELD("SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 16, 0, 0, 351, 2, 50, 2,  0, 0}, // #745
  {DBGFIELD("SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 17, 0, 0, 353, 2, 50, 2,  0, 0}, // #746
  {DBGFIELD("SwiftWriteLM4Cy")    1, 0, 0,  4, 1, 15, 1,  0, 0}, // #747
  {DBGFIELD("SwiftWriteLM4Cy_SwiftWriteLM4CyNo") 2, 0, 0,  4, 1, 54, 2,  0, 0}, // #748
  {DBGFIELD("SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm3") 7, 0, 0, 355, 3, 1117, 5,  0, 0}, // #749
  {DBGFIELD("SwiftWriteLM4Cy_SwiftWriteLM4CyNo_SwiftWriteLM4CyNo_SwiftWriteLM4CyNo") 4, 0, 0,  4, 1, 1122, 4,  0, 0}, // #750
  {DBGFIELD("SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13CyNo_SwiftWriteLM14CyNo_SwiftWriteLM17CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm5") 11, 0, 0, 192, 3, 1126, 7,  0, 0}, // #751
  {DBGFIELD("SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM10Cy_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm5") 12, 0, 0, 358, 3, 1133, 8,  0, 0}, // #752
  {DBGFIELD("SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13Cy_SwiftWriteLM14CyNo_SwiftWriteLM17CyNo_SwiftWriteLM18CyNo_SwiftWriteLM21CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm7") 15, 0, 0, 361, 3, 1141, 9,  0, 0}, // #753
  {DBGFIELD("SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM13Cy_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm2") 11, 0, 0, 364, 3, 1150, 10,  0, 0}, // #754
  {DBGFIELD("SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13Cy_SwiftWriteLM14CyNo_SwiftWriteLM17CyNo_SwiftWriteLM18CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM25CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm9") 19, 0, 0, 367, 3, 1160, 11,  0, 0}, // #755
  {DBGFIELD("SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM10Cy_SwiftWriteLM14Cy_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm5") 16, 0, 0, 370, 3, 1171, 12,  0, 0}, // #756
  {DBGFIELD("SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13Cy_SwiftWriteLM14CyNo_SwiftWriteLM17CyNo_SwiftWriteLM18CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM25CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm9") 21, 0, 0, 367, 3, 1183, 13,  0, 0}, // #757
  {DBGFIELD("SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM11Cy_SwiftWriteLM11Cy_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm3") 16, 0, 0, 150, 3, 1196, 14,  0, 0}, // #758
  {DBGFIELD("SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13Cy_SwiftWriteLM14CyNo_SwiftWriteLM17CyNo_SwiftWriteLM18CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM25CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm9") 23, 0, 0, 367, 3, 1210, 15,  0, 0}, // #759
  {DBGFIELD("SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM10Cy_SwiftWriteLM14Cy_SwiftWriteLM14Cy_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm7") 20, 0, 0, 373, 3, 1225, 14,  0, 0}, // #760
  {DBGFIELD("SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM17Cy_SwiftWriteLM18CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM25CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm9") 25, 0, 0, 376, 3, 1239, 17,  0, 0}, // #761
  {DBGFIELD("SwiftWriteLM7Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM18CyNo_SwiftWriteLM19CyNo_SwiftWriteLM22CyNo_SwiftWriteLM19CyNo_SwiftWriteLM22CyNo_SwiftWriteLM19CyNo_SwiftWriteLM22CyNo_SwiftWriteLM19CyNo_SwiftWriteLM22CyNo_SwiftWriteLM19CyNo_SwiftWriteLM22CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm4") 21, 0, 0, 379, 3, 1256, 18,  0, 0}, // #762
  {DBGFIELD("SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM13Cy_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm2") 35, 0, 0, 364, 3, 1274, 34,  0, 0}, // #763
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM4Cy") 3, 0, 0, 108, 2, 369, 2,  0, 0}, // #764
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM4Cy_SwiftWriteLM4CyNo") 4, 0, 0, 108, 2, 1308, 3,  0, 0}, // #765
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm3") 9, 0, 0, 382, 3, 1116, 6,  0, 0}, // #766
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM4Cy_SwiftWriteLM4CyNo_SwiftWriteLM4CyNo_SwiftWriteLM4CyNo") 6, 0, 0, 108, 2, 1311, 5,  0, 0}, // #767
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13CyNo_SwiftWriteLM14CyNo_SwiftWriteLM17CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm5") 13, 0, 0, 385, 3, 1316, 8,  0, 0}, // #768
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM10Cy_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm5") 14, 0, 0, 388, 3, 1324, 9,  0, 0}, // #769
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13Cy_SwiftWriteLM14CyNo_SwiftWriteLM17CyNo_SwiftWriteLM18CyNo_SwiftWriteLM21CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm7") 17, 0, 0, 391, 3, 1333, 10,  0, 0}, // #770
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM13Cy_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm2") 13, 0, 0, 394, 3, 1343, 11,  0, 0}, // #771
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13Cy_SwiftWriteLM14CyNo_SwiftWriteLM17CyNo_SwiftWriteLM18CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM25CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm9") 21, 0, 0, 397, 3, 1354, 12,  0, 0}, // #772
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM10Cy_SwiftWriteLM14Cy_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm5") 18, 0, 0, 400, 3, 1366, 13,  0, 0}, // #773
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13Cy_SwiftWriteLM14CyNo_SwiftWriteLM17CyNo_SwiftWriteLM18CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM25CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm9") 23, 0, 0, 397, 3, 1379, 14,  0, 0}, // #774
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM11Cy_SwiftWriteLM11Cy_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm3") 18, 0, 0, 403, 3, 1393, 15,  0, 0}, // #775
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13Cy_SwiftWriteLM14CyNo_SwiftWriteLM17CyNo_SwiftWriteLM18CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM25CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm9") 25, 0, 0, 397, 3, 1408, 16,  0, 0}, // #776
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM10Cy_SwiftWriteLM14Cy_SwiftWriteLM14Cy_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm7") 22, 0, 0, 406, 3, 1424, 15,  0, 0}, // #777
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM17Cy_SwiftWriteLM18CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM25CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm9") 27, 0, 0, 409, 3, 1439, 18,  0, 0}, // #778
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM7Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM18CyNo_SwiftWriteLM19CyNo_SwiftWriteLM22CyNo_SwiftWriteLM19CyNo_SwiftWriteLM22CyNo_SwiftWriteLM19CyNo_SwiftWriteLM22CyNo_SwiftWriteLM19CyNo_SwiftWriteLM22CyNo_SwiftWriteLM19CyNo_SwiftWriteLM22CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm4") 23, 0, 0, 412, 3, 1457, 19,  0, 0}, // #779
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM13Cy_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm2") 37, 0, 0, 394, 3, 1476, 35,  0, 0}, // #780
  {DBGFIELD("SwiftWriteStIncAddr") 1, 0, 0, 29, 2,  0, 1,  0, 0}, // #781
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteStIncAddr") 3, 0, 0, 173, 2, 56, 2,  0, 0}, // #782
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 6, 0, 0, 159, 2, 56, 2,  0, 0}, // #783
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 8, 0, 0, 415, 2, 56, 2,  0, 0}, // #784
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 10, 0, 0, 417, 2, 56, 2,  0, 0}, // #785
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 5, 0, 0, 189, 2, 56, 2,  0, 0}, // #786
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 12, 0, 0, 419, 2, 56, 2,  0, 0}, // #787
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 14, 0, 0, 421, 2, 56, 2,  0, 0}, // #788
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 16, 0, 0, 423, 2, 56, 2,  0, 0}, // #789
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 18, 0, 0, 425, 2, 56, 2,  0, 0}, // #790
  {DBGFIELD("(SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)") 7, 0, 0, 413, 2, 56, 2,  0, 0} // #791
}; // SwiftModelSchedClasses

static const llvm::MCSchedModel NoSchedModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  0, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  NoItineraries);

static const llvm::MCSchedModel ARMV6ItinerariesModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  1, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  ARMV6Itineraries);

// {Name, NumUnits, SuperIdx, IsBuffered}
static const llvm::MCProcResourceDesc CortexA9ModelProcResources[] = {
  {DBGFIELD("InvalidUnit")     0, 0, 0},
  {DBGFIELD("A9UnitAGU")       1, 0, -1}, // #1
  {DBGFIELD("A9UnitALU")       2, 0, -1}, // #2
  {DBGFIELD("A9UnitB")         1, 0, -1}, // #3
  {DBGFIELD("A9UnitFP")        1, 0, 0}, // #4
  {DBGFIELD("A9UnitLS")        1, 0, -1}, // #5
  {DBGFIELD("A9UnitMul")       1, 2, -1}  // #6, Super=A9UnitALU
};

static const llvm::MCSchedModel CortexA9Model(
  2, // IssueWidth
  56, // MicroOpBufferSize
  2, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  8, // MispredictPenalty
  2, // Processor ID
  CortexA9ModelProcResources,
  CortexA9ModelSchedClasses,
  7,
  792,
  CortexA9Itineraries);

static const llvm::MCSchedModel CortexA8Model(
  2, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  2, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  13, // MispredictPenalty
  3, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  CortexA8Itineraries);

// {Name, NumUnits, SuperIdx, IsBuffered}
static const llvm::MCProcResourceDesc SwiftModelProcResources[] = {
  {DBGFIELD("InvalidUnit")     0, 0, 0},
  {DBGFIELD("SwiftUnitDiv")    1, 0, -1}, // #1
  {DBGFIELD("SwiftUnitP0")     1, 5, -1}, // #2, Super=SwiftUnitP01
  {DBGFIELD("SwiftUnitP1")     1, 5, -1}, // #3, Super=SwiftUnitP01
  {DBGFIELD("SwiftUnitP2")     1, 0, -1}, // #4
  {DBGFIELD("SwiftUnitP01")    2, 0, -1}  // #5
};

static const llvm::MCSchedModel SwiftModel(
  3, // IssueWidth
  45, // MicroOpBufferSize
  3, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  14, // MispredictPenalty
  4, // Processor ID
  SwiftModelProcResources,
  SwiftModelSchedClasses,
  6,
  792,
  SwiftItineraries);

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV ARMProcSchedKV[] = {
  { "arm1020e", (const void *)&NoSchedModel },
  { "arm1020t", (const void *)&NoSchedModel },
  { "arm1022e", (const void *)&NoSchedModel },
  { "arm10e", (const void *)&NoSchedModel },
  { "arm10tdmi", (const void *)&NoSchedModel },
  { "arm1136j-s", (const void *)&ARMV6ItinerariesModel },
  { "arm1136jf-s", (const void *)&ARMV6ItinerariesModel },
  { "arm1156t2-s", (const void *)&ARMV6ItinerariesModel },
  { "arm1156t2f-s", (const void *)&ARMV6ItinerariesModel },
  { "arm1176jz-s", (const void *)&ARMV6ItinerariesModel },
  { "arm1176jzf-s", (const void *)&ARMV6ItinerariesModel },
  { "arm710t", (const void *)&NoSchedModel },
  { "arm720t", (const void *)&NoSchedModel },
  { "arm7tdmi", (const void *)&NoSchedModel },
  { "arm7tdmi-s", (const void *)&NoSchedModel },
  { "arm8", (const void *)&NoSchedModel },
  { "arm810", (const void *)&NoSchedModel },
  { "arm9", (const void *)&NoSchedModel },
  { "arm920", (const void *)&NoSchedModel },
  { "arm920t", (const void *)&NoSchedModel },
  { "arm922t", (const void *)&NoSchedModel },
  { "arm926ej-s", (const void *)&NoSchedModel },
  { "arm940t", (const void *)&NoSchedModel },
  { "arm946e-s", (const void *)&NoSchedModel },
  { "arm966e-s", (const void *)&NoSchedModel },
  { "arm968e-s", (const void *)&NoSchedModel },
  { "arm9e", (const void *)&NoSchedModel },
  { "arm9tdmi", (const void *)&NoSchedModel },
  { "cortex-a15", (const void *)&CortexA9Model },
  { "cortex-a5", (const void *)&CortexA8Model },
  { "cortex-a53", (const void *)&NoSchedModel },
  { "cortex-a8", (const void *)&CortexA8Model },
  { "cortex-a9", (const void *)&CortexA9Model },
  { "cortex-a9-mp", (const void *)&CortexA9Model },
  { "cortex-m0", (const void *)&ARMV6ItinerariesModel },
  { "cortex-m3", (const void *)&NoSchedModel },
  { "cortex-m4", (const void *)&NoSchedModel },
  { "cortex-r5", (const void *)&CortexA8Model },
  { "ep9312", (const void *)&NoSchedModel },
  { "generic", (const void *)&NoSchedModel },
  { "iwmmxt", (const void *)&NoSchedModel },
  { "mpcore", (const void *)&ARMV6ItinerariesModel },
  { "mpcorenovfp", (const void *)&ARMV6ItinerariesModel },
  { "strongarm", (const void *)&NoSchedModel },
  { "strongarm110", (const void *)&NoSchedModel },
  { "strongarm1100", (const void *)&NoSchedModel },
  { "strongarm1110", (const void *)&NoSchedModel },
  { "swift", (const void *)&SwiftModel },
  { "xscale", (const void *)&NoSchedModel }
};
#undef DBGFIELD
static inline void InitARMMCSubtargetInfo(MCSubtargetInfo *II, StringRef TT, StringRef CPU, StringRef FS) {
  II->InitMCSubtargetInfo(TT, CPU, FS, ARMFeatureKV, ARMSubTypeKV, 
                      ARMProcSchedKV, ARMWriteProcResTable, ARMWriteLatencyTable, ARMReadAdvanceTable, 
                      ARMStages, ARMOperandCycles, ARMForwardingPaths, 42, 49);
}

} // End llvm namespace 
#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"
// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::ARMSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  uint64_t Bits = getFeatureBits();
  if ((Bits & ARM::FeatureAvoidMOVsShOp) != 0) AvoidMOVsShifterOperand = true;
  if ((Bits & ARM::FeatureAvoidPartialCPSR) != 0) AvoidCPSRPartialUpdate = true;
  if ((Bits & ARM::FeatureD16) != 0) HasD16 = true;
  if ((Bits & ARM::FeatureDB) != 0) HasDataBarrier = true;
  if ((Bits & ARM::FeatureDSPThumb2) != 0) Thumb2DSP = true;
  if ((Bits & ARM::FeatureFP16) != 0) HasFP16 = true;
  if ((Bits & ARM::FeatureHWDiv) != 0) HasHardwareDivide = true;
  if ((Bits & ARM::FeatureHWDivARM) != 0) HasHardwareDivideInARM = true;
  if ((Bits & ARM::FeatureHasRAS) != 0) HasRAS = true;
  if ((Bits & ARM::FeatureHasSlowFPVMLx) != 0) SlowFPVMLx = true;
  if ((Bits & ARM::FeatureMClass) != 0) IsMClass = true;
  if ((Bits & ARM::FeatureMP) != 0) HasMPExtension = true;
  if ((Bits & ARM::FeatureNEON) != 0) HasNEON = true;
  if ((Bits & ARM::FeatureNEONForFP) != 0) UseNEONForSinglePrecisionFP = true;
  if ((Bits & ARM::FeatureNaClTrap) != 0) UseNaClTrap = true;
  if ((Bits & ARM::FeatureNoARM) != 0) NoARM = true;
  if ((Bits & ARM::FeaturePerfMon) != 0) HasPerfMon = true;
  if ((Bits & ARM::FeaturePref32BitThumb) != 0) Pref32BitThumb = true;
  if ((Bits & ARM::FeatureSlowFPBrcc) != 0) SlowFPBrcc = true;
  if ((Bits & ARM::FeatureT2XtPk) != 0) HasT2ExtractPack = true;
  if ((Bits & ARM::FeatureThumb2) != 0) HasThumb2 = true;
  if ((Bits & ARM::FeatureTrustZone) != 0) HasTrustZone = true;
  if ((Bits & ARM::FeatureV8FP) != 0) HasV8FP = true;
  if ((Bits & ARM::FeatureVFP2) != 0) HasVFPv2 = true;
  if ((Bits & ARM::FeatureVFP3) != 0) HasVFPv3 = true;
  if ((Bits & ARM::FeatureVFP4) != 0) HasVFPv4 = true;
  if ((Bits & ARM::FeatureVFPOnlySP) != 0) FPOnlySP = true;
  if ((Bits & ARM::FeatureVMLxForwarding) != 0) HasVMLxForwarding = true;
  if ((Bits & ARM::HasV4TOps) != 0) HasV4TOps = true;
  if ((Bits & ARM::HasV5TEOps) != 0) HasV5TEOps = true;
  if ((Bits & ARM::HasV5TOps) != 0) HasV5TOps = true;
  if ((Bits & ARM::HasV6Ops) != 0) HasV6Ops = true;
  if ((Bits & ARM::HasV6T2Ops) != 0) HasV6T2Ops = true;
  if ((Bits & ARM::HasV7Ops) != 0) HasV7Ops = true;
  if ((Bits & ARM::HasV8Ops) != 0) HasV8Ops = true;
  if ((Bits & ARM::ModeThumb) != 0) InThumbMode = true;
  if ((Bits & ARM::ProcA5) != 0 && ARMProcFamily < CortexA5) ARMProcFamily = CortexA5;
  if ((Bits & ARM::ProcA8) != 0 && ARMProcFamily < CortexA8) ARMProcFamily = CortexA8;
  if ((Bits & ARM::ProcA9) != 0 && ARMProcFamily < CortexA9) ARMProcFamily = CortexA9;
  if ((Bits & ARM::ProcA15) != 0 && ARMProcFamily < CortexA15) ARMProcFamily = CortexA15;
  if ((Bits & ARM::ProcR5) != 0 && ARMProcFamily < CortexR5) ARMProcFamily = CortexR5;
  if ((Bits & ARM::ProcSwift) != 0 && ARMProcFamily < Swift) ARMProcFamily = Swift;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER
namespace llvm {
class DFAPacketizer;
struct ARMGenSubtargetInfo : public TargetSubtargetInfo {
  explicit ARMGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS);
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
extern const llvm::SubtargetFeatureKV ARMFeatureKV[];
extern const llvm::SubtargetFeatureKV ARMSubTypeKV[];
extern const llvm::SubtargetInfoKV ARMProcSchedKV[];
extern const llvm::MCWriteProcResEntry ARMWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry ARMWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry ARMReadAdvanceTable[];
extern const llvm::InstrStage ARMStages[];
extern const unsigned ARMOperandCycles[];
extern const unsigned ARMForwardingPaths[];
ARMGenSubtargetInfo::ARMGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo() {
  InitMCSubtargetInfo(TT, CPU, FS, ARMFeatureKV, ARMSubTypeKV, 
                      ARMProcSchedKV, ARMWriteProcResTable, ARMWriteLatencyTable, ARMReadAdvanceTable, 
                      ARMStages, ARMOperandCycles, ARMForwardingPaths, 42, 49);
}

unsigned ARMGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {

  const ARMBaseInstrInfo *TII =
    static_cast<const ARMBaseInstrInfo*>(SchedModel->getInstrInfo());
  (void)TII;

  switch (SchedClass) {
  case 3: // IIC_iALUsr_WriteALUsi_ReadALU
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isSwiftFastImmShift(MI)))
        return 587; // SwiftWriteP01TwoCycle_ReadALU
      if ((true))
        return 588; // WriteALU_ReadALU
    }
    break;
  case 4: // IIC_iALUsr_WriteALUsr_ReadALUsr
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isPredicated(MI)))
        return 589; // SwiftWriteP01ThreeCycleTwoUops_anonymous.val.3455
      if ((true))
        return 590; // SwiftWriteP01TwoCycle_NoReadAdvance
    }
    break;
  case 5: // IIC_iALUsr_WriteALUSsr_ReadALUsr
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isPredicated(MI)))
        return 591; // SwiftWriteP0ThreeCycleThreeUops_anonymous.val.3455
      if ((true))
        return 590; // SwiftWriteP01TwoCycle_NoReadAdvance
    }
    break;
  case 8: // IIC_iBITsr_WriteALUsi_ReadALU
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isSwiftFastImmShift(MI)))
        return 587; // SwiftWriteP01TwoCycle_ReadALU
      if ((true))
        return 588; // WriteALU_ReadALU
    }
    break;
  case 9: // IIC_iBITsr_WriteALUsr_ReadALUsr
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isPredicated(MI)))
        return 589; // SwiftWriteP01ThreeCycleTwoUops_anonymous.val.3455
      if ((true))
        return 590; // SwiftWriteP01TwoCycle_NoReadAdvance
    }
    break;
  case 19: // IIC_iCMPsr_WriteCMPsi_ReadALU
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isSwiftFastImmShift(MI)))
        return 592; // SwiftWriteP01OneCycle_ReadALU
      if ((true))
        return 587; // SwiftWriteP01TwoCycle_ReadALU
    }
    break;
  case 24: // IIC_iLoad_m
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TII->getNumLDMAddresses(MI) == 1))
        return 593; // A9WriteL1_A9WriteL1Hi_A9WriteAdr_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 594; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 595; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 596; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 597; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 598; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 599; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 600; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 0))
        return 601; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteIssue
    }
    break;
  case 25: // IIC_iLoad_mu
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TII->getNumLDMAddresses(MI) == 1))
        return 602; // A9WriteAdr_A9WriteL1_A9WriteL1Hi_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 603; // (A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 604; // (A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 605; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 606; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 607; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 608; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 609; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 0))
        return 610; // (A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
    }
    break;
  case 26: // IIC_iLoad_mBr
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TII->getNumLDMAddresses(MI) == 1))
        return 611; // A9WriteL1_A9WriteL1Hi_A9WriteAdr_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 612; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 613; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 614; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 615; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 616; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 617; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 618; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 0))
        return 619; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteB
    }
    break;
  case 56: // IIC_iALUsi_WriteALUsi_ReadALU
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isSwiftFastImmShift(MI)))
        return 587; // SwiftWriteP01TwoCycle_ReadALU
      if ((true))
        return 588; // WriteALU_ReadALU
    }
    break;
  case 57: // IIC_iBITsi_WriteALUsi_ReadALU
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isSwiftFastImmShift(MI)))
        return 587; // SwiftWriteP01TwoCycle_ReadALU
      if ((true))
        return 588; // WriteALU_ReadALU
    }
    break;
  case 64: // IIC_iStore_m
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TII->getNumLDMAddresses(MI) == 1))
        return 602; // A9WriteAdr_A9WriteL1_A9WriteL1Hi_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 603; // (A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 604; // (A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 605; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 606; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 607; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 608; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 609; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 0))
        return 610; // (A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
    }
    break;
  case 65: // IIC_iStore_mu
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TII->getNumLDMAddresses(MI) == 1))
        return 602; // A9WriteAdr_A9WriteL1_A9WriteL1Hi_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 603; // (A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 604; // (A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 605; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 606; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 607; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 608; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 609; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 0))
        return 610; // (A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
    }
    break;
  case 74: // IIC_iEXTAr_WriteALUsr
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isPredicated(MI)))
        return 620; // SwiftWriteP01ThreeCycleTwoUops
      if ((true))
        return 621; // SwiftWriteP01TwoCycle
    }
    break;
  case 75: // IIC_iEXTr_WriteALUsi
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isSwiftFastImmShift(MI)))
        return 621; // SwiftWriteP01TwoCycle
      if ((true))
        return 622; // WriteALU
    }
    break;
  case 78: // IIC_iTSTsr_WriteCMPsi_ReadALU
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isSwiftFastImmShift(MI)))
        return 592; // SwiftWriteP01OneCycle_ReadALU
      if ((true))
        return 587; // SwiftWriteP01TwoCycle_ReadALU
    }
    break;
  case 150: // IIC_fpLoad_mu
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TII->getNumLDMAddresses(MI) == 1)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 1))
        return 623; // A9WriteAdr_(A9WriteIssue_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 2)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 2))
        return 624; // (A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 3)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 3))
        return 625; // (A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 4)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 4))
        return 626; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 5)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 5))
        return 627; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 6)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 6))
        return 628; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 7)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 7))
        return 629; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 8)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 8))
        return 630; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 0)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 0))
        return 624; // (A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 1)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 1))
        return 631; // A9WriteAdr_A9WriteLMfp1_A9WriteL1Hi
      if ((TII->getNumLDMAddresses(MI) == 2)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 2))
        return 632; // (A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)
      if ((TII->getNumLDMAddresses(MI) == 3)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 3))
        return 633; // (A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)
      if ((TII->getNumLDMAddresses(MI) == 4)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 4))
        return 634; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)
      if ((TII->getNumLDMAddresses(MI) == 5)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 5))
        return 635; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)
      if ((TII->getNumLDMAddresses(MI) == 6)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 6))
        return 636; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)
      if ((TII->getNumLDMAddresses(MI) == 7)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 7))
        return 637; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)
      if ((TII->getNumLDMAddresses(MI) == 8)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 8))
        return 638; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)
      if ((TII->getNumLDMAddresses(MI) == 0)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 0))
        return 639; // (A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)
    }
    break;
  case 151: // IIC_fpLoad_m
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 1))
        return 640; // (A9WriteIssue_A9WriteLfpOp)_A9WriteAdr
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 1))
        return 641; // A9WriteLMfp1_A9WriteL1Hi_A9WriteAdr
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 2))
        return 642; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 3))
        return 643; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 4))
        return 644; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 5))
        return 645; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 6))
        return 646; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 7))
        return 647; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 8))
        return 648; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 0))
        return 642; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 2))
        return 649; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 3))
        return 650; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 4))
        return 651; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 5))
        return 652; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 6))
        return 653; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 7))
        return 654; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 8))
        return 655; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 0))
        return 656; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)
    }
    break;
  case 234: // IIC_iALUsi_WriteALUsi_ReadALUsr
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isSwiftFastImmShift(MI))
          && (TII->isPredicated(MI)))
        return 657; // SwiftWriteP01TwoCycle_anonymous.val.3455
      if ((true)
          && (TII->isPredicated(MI)))
        return 658; // WriteALU_anonymous.val.3455
      if ((true))
        return 659; // WriteALU_NoReadAdvance
    }
    break;
  case 236: // IIC_iCMPsi_WriteCMPsi_ReadALU_ReadALU
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isSwiftFastImmShift(MI)))
        return 660; // SwiftWriteP01OneCycle_ReadALU_ReadALU
      if ((true))
        return 661; // SwiftWriteP01TwoCycle_ReadALU_ReadALU
    }
    break;
  case 239: // IIC_iCMPsi_WriteCMPsi
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isSwiftFastImmShift(MI)))
        return 662; // SwiftWriteP01OneCycle
      if ((true))
        return 621; // SwiftWriteP01TwoCycle
    }
    break;
  case 248: // IIC_iALUsir_WriteALUsi_ReadALU
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isSwiftFastImmShift(MI)))
        return 587; // SwiftWriteP01TwoCycle_ReadALU
      if ((true))
        return 588; // WriteALU_ReadALU
    }
    break;
  case 255: // IIC_iTSTsi_WriteCMPsi
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isSwiftFastImmShift(MI)))
        return 662; // SwiftWriteP01OneCycle
      if ((true))
        return 621; // SwiftWriteP01TwoCycle
    }
    break;
  case 259: // IIC_iPop
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TII->getNumLDMAddresses(MI) == 1))
        return 593; // A9WriteL1_A9WriteL1Hi_A9WriteAdr_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 594; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 595; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 596; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 597; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 598; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 599; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 600; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 0))
        return 601; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteIssue
    }
    break;
  case 260: // IIC_iPop_Br_WriteBrL
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TII->getNumLDMAddresses(MI) == 1))
        return 611; // A9WriteL1_A9WriteL1Hi_A9WriteAdr_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 612; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 613; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 614; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 615; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 616; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 617; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 618; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 0))
        return 619; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteB
    }
    break;
  case 264: // ANDrsi_BICrsi_EORrsi_ORRrsi
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isSwiftFastImmShift(MI)))
        return 587; // SwiftWriteP01TwoCycle_ReadALU
      if ((true))
        return 588; // WriteALU_ReadALU
    }
    break;
  case 265: // ANDrsr_BICrsr_EORrsr_ORRrsr
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isPredicated(MI)))
        return 589; // SwiftWriteP01ThreeCycleTwoUops_anonymous.val.3455
      if ((true))
        return 590; // SwiftWriteP01TwoCycle_NoReadAdvance
    }
    break;
  case 275: // SEL
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isPredicated(MI)))
        return 663; // (SwiftWriteP0OneCycle_SwiftWriteP0OneCycle)
      if ((true))
        return 664; // SwiftWriteP0OneCycle
    }
    break;
  case 277: // MLA_MLAv5_MLS_SMMLA_SMMLAR_SMMLS_SMMLSR
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isPredicated(MI)))
        return 665; // SwiftWriteP0P01FiveCycleTwoUops_ReadALU_ReadALU_anonymous.val.3465
      if ((true))
        return 666; // SwiftWriteP0FourCycle_ReadALU_ReadALU_ReadALU
    }
    break;
  case 283: // SMLABB_SMLABT_SMLATB_SMLATT_SMLAWB_SMLAWT
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isPredicated(MI)))
        return 665; // SwiftWriteP0P01FiveCycleTwoUops_ReadALU_ReadALU_anonymous.val.3465
      if ((true))
        return 666; // SwiftWriteP0FourCycle_ReadALU_ReadALU_ReadALU
    }
    break;
  case 288: // SXTB_SXTB16_SXTH_UXTB_UXTB16_UXTH
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isSwiftFastImmShift(MI)))
        return 621; // SwiftWriteP01TwoCycle
      if ((true))
        return 622; // WriteALU
    }
    break;
  case 294: // t2SEL
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isPredicated(MI)))
        return 663; // (SwiftWriteP0OneCycle_SwiftWriteP0OneCycle)
      if ((true))
        return 664; // SwiftWriteP0OneCycle
    }
    break;
  case 299: // SADD16_SADD8_SASX_SSAX_SSUB16_SSUB8_UADD16_UADD8_UASX_USAX_USUB16_USUB8
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isPredicated(MI)))
        return 620; // SwiftWriteP01ThreeCycleTwoUops
      if ((true))
        return 621; // SwiftWriteP01TwoCycle
    }
    break;
  case 300: // t2SADD16_t2SADD8_t2SASX_t2SSAX_t2SSUB16_t2SSUB8_t2UADD16_t2UADD8_t2UASX_t2USAX_t2USUB16_t2USUB8
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isPredicated(MI)))
        return 620; // SwiftWriteP01ThreeCycleTwoUops
      if ((true))
        return 621; // SwiftWriteP01TwoCycle
    }
    break;
  case 302: // SXTAB_SXTAB16_SXTAH_UXTAB_UXTAB16_UXTAH
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isPredicated(MI)))
        return 620; // SwiftWriteP01ThreeCycleTwoUops
      if ((true))
        return 621; // SwiftWriteP01TwoCycle
    }
    break;
  case 311: // t2MLA_t2MLS_t2SMMLA_t2SMMLAR_t2SMMLS_t2SMMLSR
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isPredicated(MI)))
        return 665; // SwiftWriteP0P01FiveCycleTwoUops_ReadALU_ReadALU_anonymous.val.3465
      if ((true))
        return 666; // SwiftWriteP0FourCycle_ReadALU_ReadALU_ReadALU
    }
    break;
  case 314: // SMLSD_SMLSDX
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isPredicated(MI)))
        return 665; // SwiftWriteP0P01FiveCycleTwoUops_ReadALU_ReadALU_anonymous.val.3465
      if ((true))
        return 666; // SwiftWriteP0FourCycle_ReadALU_ReadALU_ReadALU
    }
    break;
  case 315: // t2SMLABB_t2SMLABT_t2SMLATB_t2SMLATT_t2SMLAWB_t2SMLAWT
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isPredicated(MI)))
        return 665; // SwiftWriteP0P01FiveCycleTwoUops_ReadALU_ReadALU_anonymous.val.3465
      if ((true))
        return 666; // SwiftWriteP0FourCycle_ReadALU_ReadALU_ReadALU
    }
    break;
  case 316: // t2SMLSD_t2SMLSDX
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isPredicated(MI)))
        return 665; // SwiftWriteP0P01FiveCycleTwoUops_ReadALU_ReadALU_anonymous.val.3465
      if ((true))
        return 666; // SwiftWriteP0FourCycle_ReadALU_ReadALU_ReadALU
    }
    break;
  case 317: // SMLAD_SMLADX
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isPredicated(MI)))
        return 667; // SwiftWriteP0P01FiveCycleTwoUops
      if ((true))
        return 668; // SwiftWriteP0FourCycle
    }
    break;
  case 318: // t2SMLAD_t2SMLADX
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isPredicated(MI)))
        return 667; // SwiftWriteP0P01FiveCycleTwoUops
      if ((true))
        return 668; // SwiftWriteP0FourCycle
    }
    break;
  case 351: // LDMDA_LDMDB_LDMIA_LDMIB_sysLDMDA_sysLDMDB_sysLDMIA_sysLDMIB_t2LDMDB_t2LDMIA_tLDMIA
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TII->getNumLDMAddresses(MI) == 1))
        return 593; // A9WriteL1_A9WriteL1Hi_A9WriteAdr_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 594; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 595; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 596; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 597; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 598; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 599; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 600; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 0))
        return 601; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteIssue
    }
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 669; // SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLDMAddrNoWB
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 670; // SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLDMAddrNoWB
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 671; // SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLDMAddrNoWB
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 672; // SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLDMAddrNoWB
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 673; // SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLDMAddrNoWB
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 674; // SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLDMAddrNoWB
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 675; // SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLDMAddrNoWB
      if ((TII->getNumLDMAddresses(MI) == 9))
        return 676; // SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLDMAddrNoWB
      if ((TII->getNumLDMAddresses(MI) == 10))
        return 677; // SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLDMAddrNoWB
      if ((TII->getNumLDMAddresses(MI) == 11))
        return 678; // SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLDMAddrNoWB
      if ((TII->getNumLDMAddresses(MI) == 12))
        return 679; // SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLDMAddrNoWB
      if ((TII->getNumLDMAddresses(MI) == 13))
        return 680; // SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLDMAddrNoWB
      if ((TII->getNumLDMAddresses(MI) == 14))
        return 681; // SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM16Cy_SwiftWriteLDMAddrNoWB
      if ((TII->getNumLDMAddresses(MI) == 15))
        return 682; // SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM16Cy_SwiftWriteLM17Cy_SwiftWriteLDMAddrNoWB
      if ((TII->getNumLDMAddresses(MI) == 16))
        return 683; // SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM16Cy_SwiftWriteLM17Cy_SwiftWriteLM18Cy_SwiftWriteLDMAddrNoWB
      if ((true))
        return 684; // SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5CyNo_SwiftWriteLM6CyNo_SwiftWriteLM7CyNo_SwiftWriteLM8CyNo_SwiftWriteLM9CyNo_SwiftWriteLM10CyNo_SwiftWriteLM11CyNo_SwiftWriteLM12CyNo_SwiftWriteLM13CyNo_SwiftWriteLM14CyNo_SwiftWriteLM15CyNo_SwiftWriteLM16CyNo_SwiftWriteLM17CyNo_SwiftWriteLM18CyNo_SwiftWriteLDMAddrNoWB
    }
    break;
  case 352: // LDMDA_UPD_LDMDB_UPD_LDMIA_UPD_LDMIB_UPD_sysLDMDA_UPD_sysLDMDB_UPD_sysLDMIA_UPD_sysLDMIB_UPD_t2LDMDB_UPD_t2LDMIA_UPD_tLDMIA_UPD
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TII->getNumLDMAddresses(MI) == 1))
        return 602; // A9WriteAdr_A9WriteL1_A9WriteL1Hi_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 603; // (A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 604; // (A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 605; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 606; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 607; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 608; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 609; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 0))
        return 610; // (A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
    }
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 685; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 686; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 687; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 688; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 689; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 690; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 691; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy
      if ((TII->getNumLDMAddresses(MI) == 9))
        return 692; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy
      if ((TII->getNumLDMAddresses(MI) == 10))
        return 693; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy
      if ((TII->getNumLDMAddresses(MI) == 11))
        return 694; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy
      if ((TII->getNumLDMAddresses(MI) == 12))
        return 695; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy
      if ((TII->getNumLDMAddresses(MI) == 13))
        return 696; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy
      if ((TII->getNumLDMAddresses(MI) == 14))
        return 697; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM16Cy
      if ((TII->getNumLDMAddresses(MI) == 15))
        return 698; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM16Cy_SwiftWriteLM17Cy
      if ((TII->getNumLDMAddresses(MI) == 16))
        return 699; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM16Cy_SwiftWriteLM17Cy_SwiftWriteLM18Cy
      if ((true))
        return 700; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5CyNo_SwiftWriteLM6CyNo_SwiftWriteLM7CyNo_SwiftWriteLM8CyNo_SwiftWriteLM9CyNo_SwiftWriteLM10CyNo_SwiftWriteLM11CyNo_SwiftWriteLM12CyNo_SwiftWriteLM13CyNo_SwiftWriteLM14CyNo_SwiftWriteLM15CyNo_SwiftWriteLM16CyNo_SwiftWriteLM17CyNo_SwiftWriteLM18CyNo
    }
    break;
  case 353: // LDMIA_RET_t2LDMIA_RET
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TII->getNumLDMAddresses(MI) == 1))
        return 611; // A9WriteL1_A9WriteL1Hi_A9WriteAdr_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 612; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 613; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 614; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 615; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 616; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 617; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 618; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 0))
        return 619; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteB
    }
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 701; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 702; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 703; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 704; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 705; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 706; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 707; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 9))
        return 708; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 10))
        return 709; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 11))
        return 710; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 12))
        return 711; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 13))
        return 712; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 14))
        return 713; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM16Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 15))
        return 714; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM16Cy_SwiftWriteLM17Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 16))
        return 715; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM16Cy_SwiftWriteLM17Cy_SwiftWriteLM18Cy_SwiftWriteP1TwoCycle
      if ((true))
        return 716; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5CyNo_SwiftWriteLM6CyNo_SwiftWriteLM7CyNo_SwiftWriteLM8CyNo_SwiftWriteLM9CyNo_SwiftWriteLM10CyNo_SwiftWriteLM11CyNo_SwiftWriteLM12CyNo_SwiftWriteLM13CyNo_SwiftWriteLM14CyNo_SwiftWriteLM15CyNo_SwiftWriteLM16CyNo_SwiftWriteLM17CyNo_SwiftWriteLM18CyNo_SwiftWriteP1TwoCycle
    }
    break;
  case 354: // tPOP
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TII->getNumLDMAddresses(MI) == 1))
        return 593; // A9WriteL1_A9WriteL1Hi_A9WriteAdr_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 594; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 595; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 596; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 597; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 598; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 599; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 600; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 0))
        return 601; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteIssue
    }
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 701; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 702; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 703; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 704; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 705; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 706; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 707; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 9))
        return 708; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 10))
        return 709; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 11))
        return 710; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 12))
        return 711; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 13))
        return 712; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 14))
        return 713; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM16Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 15))
        return 714; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM16Cy_SwiftWriteLM17Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 16))
        return 715; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM16Cy_SwiftWriteLM17Cy_SwiftWriteLM18Cy_SwiftWriteP1TwoCycle
      if ((true))
        return 716; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5CyNo_SwiftWriteLM6CyNo_SwiftWriteLM7CyNo_SwiftWriteLM8CyNo_SwiftWriteLM9CyNo_SwiftWriteLM10CyNo_SwiftWriteLM11CyNo_SwiftWriteLM12CyNo_SwiftWriteLM13CyNo_SwiftWriteLM14CyNo_SwiftWriteLM15CyNo_SwiftWriteLM16CyNo_SwiftWriteLM17CyNo_SwiftWriteLM18CyNo_SwiftWriteP1TwoCycle
    }
    break;
  case 355: // tPOP_RET
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TII->getNumLDMAddresses(MI) == 1))
        return 611; // A9WriteL1_A9WriteL1Hi_A9WriteAdr_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 612; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 613; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 614; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 615; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 616; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 617; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 618; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 0))
        return 619; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteB
    }
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 701; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 702; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 703; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 704; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 705; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 706; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 707; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 9))
        return 708; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 10))
        return 709; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 11))
        return 710; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 12))
        return 711; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 13))
        return 712; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 14))
        return 713; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM16Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 15))
        return 714; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM16Cy_SwiftWriteLM17Cy_SwiftWriteP1TwoCycle
      if ((TII->getNumLDMAddresses(MI) == 16))
        return 715; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5Cy_SwiftWriteLM6Cy_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM12Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM16Cy_SwiftWriteLM17Cy_SwiftWriteLM18Cy_SwiftWriteP1TwoCycle
      if ((true))
        return 716; // SwiftWriteLDMAddrWB_SwiftWriteLM3Cy_SwiftWriteLM4Cy_SwiftWriteLM5CyNo_SwiftWriteLM6CyNo_SwiftWriteLM7CyNo_SwiftWriteLM8CyNo_SwiftWriteLM9CyNo_SwiftWriteLM10CyNo_SwiftWriteLM11CyNo_SwiftWriteLM12CyNo_SwiftWriteLM13CyNo_SwiftWriteLM14CyNo_SwiftWriteLM15CyNo_SwiftWriteLM16CyNo_SwiftWriteLM17CyNo_SwiftWriteLM18CyNo_SwiftWriteP1TwoCycle
    }
    break;
  case 371: // STMDA_STMDB_STMIA_STMIB_sysSTMDA_sysSTMDB_sysSTMIA_sysSTMIB_t2STMDB_t2STMIA
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TII->getNumLDMAddresses(MI) == 1))
        return 602; // A9WriteAdr_A9WriteL1_A9WriteL1Hi_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 603; // (A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 604; // (A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 605; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 606; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 607; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 608; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 609; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 0))
        return 610; // (A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
    }
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 717; // (SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 718; // (SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 719; // (SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 720; // (SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 721; // (SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 722; // (SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 723; // (SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 9))
        return 724; // (SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 10))
        return 725; // (SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 11))
        return 726; // (SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 12))
        return 727; // (SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 13))
        return 728; // (SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 14))
        return 729; // (SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 15))
        return 730; // (SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 16))
        return 731; // (SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((true))
        return 717; // (SwiftWriteStIncAddr_SwiftWriteStIncAddr)
    }
    break;
  case 372: // STMDA_UPD_STMDB_UPD_STMIA_UPD_STMIB_UPD_sysSTMDA_UPD_sysSTMDB_UPD_sysSTMIA_UPD_sysSTMIB_UPD_t2STMDB_UPD_t2STMIA_UPD_tSTMIA_UPD
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TII->getNumLDMAddresses(MI) == 1))
        return 602; // A9WriteAdr_A9WriteL1_A9WriteL1Hi_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 603; // (A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 604; // (A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 605; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 606; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 607; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 608; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 609; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 0))
        return 610; // (A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
    }
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 732; // SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 733; // SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 734; // SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 735; // SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 736; // SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 737; // SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 738; // SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 9))
        return 739; // SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 10))
        return 740; // SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 11))
        return 741; // SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 12))
        return 742; // SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 13))
        return 743; // SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 14))
        return 744; // SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 15))
        return 745; // SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 16))
        return 746; // SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((true))
        return 732; // SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr)
    }
    break;
  case 373: // tPUSH
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TII->getNumLDMAddresses(MI) == 1))
        return 602; // A9WriteAdr_A9WriteL1_A9WriteL1Hi_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 603; // (A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 604; // (A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 605; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 606; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 607; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 608; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 609; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 0))
        return 610; // (A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
    }
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 732; // SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 733; // SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 734; // SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 735; // SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 736; // SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 737; // SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 738; // SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 9))
        return 739; // SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 10))
        return 740; // SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 11))
        return 741; // SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 12))
        return 742; // SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 13))
        return 743; // SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 14))
        return 744; // SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 15))
        return 745; // SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 16))
        return 746; // SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((true))
        return 732; // SwiftWriteP01OneCycle_(SwiftWriteStIncAddr_SwiftWriteStIncAddr)
    }
    break;
  case 508: // VLDMQIA
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 1))
        return 640; // (A9WriteIssue_A9WriteLfpOp)_A9WriteAdr
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 1))
        return 641; // A9WriteLMfp1_A9WriteL1Hi_A9WriteAdr
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 2))
        return 642; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 3))
        return 643; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 4))
        return 644; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 5))
        return 645; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 6))
        return 646; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 7))
        return 647; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 8))
        return 648; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 0))
        return 642; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 2))
        return 649; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 3))
        return 650; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 4))
        return 651; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 5))
        return 652; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 6))
        return 653; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 7))
        return 654; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 8))
        return 655; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 0))
        return 656; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)
    }
    break;
  case 510: // VLDMDIA_VLDMSIA
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 1))
        return 640; // (A9WriteIssue_A9WriteLfpOp)_A9WriteAdr
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 1))
        return 641; // A9WriteLMfp1_A9WriteL1Hi_A9WriteAdr
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 2))
        return 642; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 3))
        return 643; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 4))
        return 644; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 5))
        return 645; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 6))
        return 646; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 7))
        return 647; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 8))
        return 648; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 0))
        return 642; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 2))
        return 649; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 3))
        return 650; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 4))
        return 651; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 5))
        return 652; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 6))
        return 653; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 7))
        return 654; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 8))
        return 655; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 0))
        return 656; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)
    }
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->getNumLDMAddresses(MI) == 1))
        return 747; // SwiftWriteLM4Cy
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 748; // SwiftWriteLM4Cy_SwiftWriteLM4CyNo
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 749; // SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm3
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 750; // SwiftWriteLM4Cy_SwiftWriteLM4CyNo_SwiftWriteLM4CyNo_SwiftWriteLM4CyNo
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 751; // SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13CyNo_SwiftWriteLM14CyNo_SwiftWriteLM17CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm5
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 752; // SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM10Cy_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm5
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 753; // SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13Cy_SwiftWriteLM14CyNo_SwiftWriteLM17CyNo_SwiftWriteLM18CyNo_SwiftWriteLM21CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm7
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 754; // SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM13Cy_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm2
      if ((TII->getNumLDMAddresses(MI) == 9))
        return 755; // SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13Cy_SwiftWriteLM14CyNo_SwiftWriteLM17CyNo_SwiftWriteLM18CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM25CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm9
      if ((TII->getNumLDMAddresses(MI) == 10))
        return 756; // SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM10Cy_SwiftWriteLM14Cy_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm5
      if ((TII->getNumLDMAddresses(MI) == 11))
        return 757; // SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13Cy_SwiftWriteLM14CyNo_SwiftWriteLM17CyNo_SwiftWriteLM18CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM25CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm9
      if ((TII->getNumLDMAddresses(MI) == 12))
        return 758; // SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM11Cy_SwiftWriteLM11Cy_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm3
      if ((TII->getNumLDMAddresses(MI) == 13))
        return 759; // SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13Cy_SwiftWriteLM14CyNo_SwiftWriteLM17CyNo_SwiftWriteLM18CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM25CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm9
      if ((TII->getNumLDMAddresses(MI) == 14))
        return 760; // SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM10Cy_SwiftWriteLM14Cy_SwiftWriteLM14Cy_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm7
      if ((TII->getNumLDMAddresses(MI) == 15))
        return 761; // SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM17Cy_SwiftWriteLM18CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM25CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm9
      if ((TII->getNumLDMAddresses(MI) == 16))
        return 762; // SwiftWriteLM7Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM18CyNo_SwiftWriteLM19CyNo_SwiftWriteLM22CyNo_SwiftWriteLM19CyNo_SwiftWriteLM22CyNo_SwiftWriteLM19CyNo_SwiftWriteLM22CyNo_SwiftWriteLM19CyNo_SwiftWriteLM22CyNo_SwiftWriteLM19CyNo_SwiftWriteLM22CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm4
      if ((true))
        return 763; // SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM13Cy_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm2
    }
    break;
  case 511: // VLDMDDB_UPD_VLDMDIA_UPD_VLDMSDB_UPD_VLDMSIA_UPD
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TII->getNumLDMAddresses(MI) == 1)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 1))
        return 623; // A9WriteAdr_(A9WriteIssue_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 2)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 2))
        return 624; // (A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 3)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 3))
        return 625; // (A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 4)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 4))
        return 626; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 5)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 5))
        return 627; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 6)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 6))
        return 628; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 7)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 7))
        return 629; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 8)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 8))
        return 630; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 0)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 0))
        return 624; // (A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 1)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 1))
        return 631; // A9WriteAdr_A9WriteLMfp1_A9WriteL1Hi
      if ((TII->getNumLDMAddresses(MI) == 2)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 2))
        return 632; // (A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)
      if ((TII->getNumLDMAddresses(MI) == 3)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 3))
        return 633; // (A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)
      if ((TII->getNumLDMAddresses(MI) == 4)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 4))
        return 634; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)
      if ((TII->getNumLDMAddresses(MI) == 5)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 5))
        return 635; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)
      if ((TII->getNumLDMAddresses(MI) == 6)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 6))
        return 636; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)
      if ((TII->getNumLDMAddresses(MI) == 7)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 7))
        return 637; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)
      if ((TII->getNumLDMAddresses(MI) == 8)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 8))
        return 638; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)
      if ((TII->getNumLDMAddresses(MI) == 0)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 0))
        return 639; // (A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)
    }
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->getNumLDMAddresses(MI) == 1))
        return 764; // (SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM4Cy
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 765; // (SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM4Cy_SwiftWriteLM4CyNo
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 766; // (SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm3
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 767; // (SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM4Cy_SwiftWriteLM4CyNo_SwiftWriteLM4CyNo_SwiftWriteLM4CyNo
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 768; // (SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13CyNo_SwiftWriteLM14CyNo_SwiftWriteLM17CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm5
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 769; // (SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM10Cy_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm5
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 770; // (SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13Cy_SwiftWriteLM14CyNo_SwiftWriteLM17CyNo_SwiftWriteLM18CyNo_SwiftWriteLM21CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm7
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 771; // (SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM13Cy_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm2
      if ((TII->getNumLDMAddresses(MI) == 9))
        return 772; // (SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13Cy_SwiftWriteLM14CyNo_SwiftWriteLM17CyNo_SwiftWriteLM18CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM25CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm9
      if ((TII->getNumLDMAddresses(MI) == 10))
        return 773; // (SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM10Cy_SwiftWriteLM14Cy_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm5
      if ((TII->getNumLDMAddresses(MI) == 11))
        return 774; // (SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13Cy_SwiftWriteLM14CyNo_SwiftWriteLM17CyNo_SwiftWriteLM18CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM25CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm9
      if ((TII->getNumLDMAddresses(MI) == 12))
        return 775; // (SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM11Cy_SwiftWriteLM11Cy_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteLM11CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm3
      if ((TII->getNumLDMAddresses(MI) == 13))
        return 776; // (SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13Cy_SwiftWriteLM14CyNo_SwiftWriteLM17CyNo_SwiftWriteLM18CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM25CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm9
      if ((TII->getNumLDMAddresses(MI) == 14))
        return 777; // (SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM10Cy_SwiftWriteLM14Cy_SwiftWriteLM14Cy_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteLM14CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm7
      if ((TII->getNumLDMAddresses(MI) == 15))
        return 778; // (SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM9Cy_SwiftWriteLM10Cy_SwiftWriteLM13Cy_SwiftWriteLM14Cy_SwiftWriteLM17Cy_SwiftWriteLM18CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM21CyNo_SwiftWriteLM22CyNo_SwiftWriteLM25CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm9
      if ((TII->getNumLDMAddresses(MI) == 16))
        return 779; // (SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM7Cy_SwiftWriteLM10Cy_SwiftWriteLM11Cy_SwiftWriteLM14Cy_SwiftWriteLM15Cy_SwiftWriteLM18CyNo_SwiftWriteLM19CyNo_SwiftWriteLM22CyNo_SwiftWriteLM19CyNo_SwiftWriteLM22CyNo_SwiftWriteLM19CyNo_SwiftWriteLM22CyNo_SwiftWriteLM19CyNo_SwiftWriteLM22CyNo_SwiftWriteLM19CyNo_SwiftWriteLM22CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm4
      if ((true))
        return 780; // (SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteLM7Cy_SwiftWriteLM8Cy_SwiftWriteLM13Cy_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteLM13CyNo_SwiftWriteP01OneCycle_SwiftVLDMPerm2
    }
    break;
  case 512: // VSTMDIA_VSTMSIA
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 1))
        return 640; // (A9WriteIssue_A9WriteLfpOp)_A9WriteAdr
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 1))
        return 641; // A9WriteLMfp1_A9WriteL1Hi_A9WriteAdr
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 2))
        return 642; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 3))
        return 643; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 4))
        return 644; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 5))
        return 645; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 6))
        return 646; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 7))
        return 647; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 8))
        return 648; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 0))
        return 642; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 2))
        return 649; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 3))
        return 650; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 4))
        return 651; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 5))
        return 652; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 6))
        return 653; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 7))
        return 654; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 8))
        return 655; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 0))
        return 656; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)
    }
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->getNumLDMAddresses(MI) == 1))
        return 781; // SwiftWriteStIncAddr
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 781; // SwiftWriteStIncAddr
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 719; // (SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 781; // SwiftWriteStIncAddr
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 721; // (SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 719; // (SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 723; // (SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 718; // (SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 9))
        return 725; // (SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 10))
        return 721; // (SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 11))
        return 727; // (SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 12))
        return 719; // (SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 13))
        return 729; // (SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 14))
        return 723; // (SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 15))
        return 731; // (SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 16))
        return 720; // (SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((true))
        return 718; // (SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
    }
    break;
  case 513: // VSTMDDB_UPD_VSTMDIA_UPD_VSTMSDB_UPD_VSTMSIA_UPD
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TII->getNumLDMAddresses(MI) == 1)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 1))
        return 623; // A9WriteAdr_(A9WriteIssue_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 2)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 2))
        return 624; // (A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 3)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 3))
        return 625; // (A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 4)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 4))
        return 626; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 5)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 5))
        return 627; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 6)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 6))
        return 628; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 7)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 7))
        return 629; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 8)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 8))
        return 630; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 0)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 0))
        return 624; // (A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 1)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 1))
        return 631; // A9WriteAdr_A9WriteLMfp1_A9WriteL1Hi
      if ((TII->getNumLDMAddresses(MI) == 2)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 2))
        return 632; // (A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)
      if ((TII->getNumLDMAddresses(MI) == 3)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 3))
        return 633; // (A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)
      if ((TII->getNumLDMAddresses(MI) == 4)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 4))
        return 634; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)
      if ((TII->getNumLDMAddresses(MI) == 5)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 5))
        return 635; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)
      if ((TII->getNumLDMAddresses(MI) == 6)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 6))
        return 636; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)
      if ((TII->getNumLDMAddresses(MI) == 7)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 7))
        return 637; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)
      if ((TII->getNumLDMAddresses(MI) == 8)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 8))
        return 638; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)
      if ((TII->getNumLDMAddresses(MI) == 0)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 0))
        return 639; // (A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)
    }
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->getNumLDMAddresses(MI) == 1))
        return 782; // (SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteStIncAddr
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 782; // (SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteStIncAddr
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 783; // (SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 782; // (SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_SwiftWriteStIncAddr
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 784; // (SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 783; // (SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 785; // (SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 786; // (SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 9))
        return 787; // (SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 10))
        return 784; // (SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 11))
        return 788; // (SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 12))
        return 783; // (SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 13))
        return 789; // (SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 14))
        return 785; // (SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 15))
        return 790; // (SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((TII->getNumLDMAddresses(MI) == 16))
        return 791; // (SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
      if ((true))
        return 786; // (SwiftWriteP01OneCycle_SwiftWriteP01OneCycle)_(SwiftWriteStIncAddr_SwiftWriteStIncAddr_SwiftWriteStIncAddr)
    }
    break;
  };
  report_fatal_error("Expected a variant SchedClass");
} // ARMGenSubtargetInfo::resolveSchedClass
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_CTOR

