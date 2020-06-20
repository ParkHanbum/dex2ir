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
namespace PPC {
  const uint64_t Directive32 = 1ULL << 0;
  const uint64_t Directive64 = 1ULL << 1;
  const uint64_t Directive440 = 1ULL << 2;
  const uint64_t Directive601 = 1ULL << 3;
  const uint64_t Directive602 = 1ULL << 4;
  const uint64_t Directive603 = 1ULL << 5;
  const uint64_t Directive604 = 1ULL << 6;
  const uint64_t Directive620 = 1ULL << 7;
  const uint64_t Directive750 = 1ULL << 8;
  const uint64_t Directive970 = 1ULL << 9;
  const uint64_t Directive7400 = 1ULL << 10;
  const uint64_t DirectiveA2 = 1ULL << 11;
  const uint64_t DirectiveE500mc = 1ULL << 12;
  const uint64_t DirectiveE5500 = 1ULL << 13;
  const uint64_t DirectivePwr3 = 1ULL << 14;
  const uint64_t DirectivePwr4 = 1ULL << 15;
  const uint64_t DirectivePwr5 = 1ULL << 16;
  const uint64_t DirectivePwr5x = 1ULL << 17;
  const uint64_t DirectivePwr6 = 1ULL << 18;
  const uint64_t DirectivePwr6x = 1ULL << 19;
  const uint64_t DirectivePwr7 = 1ULL << 20;
  const uint64_t Feature64Bit = 1ULL << 21;
  const uint64_t Feature64BitRegs = 1ULL << 22;
  const uint64_t FeatureAltivec = 1ULL << 23;
  const uint64_t FeatureBookE = 1ULL << 24;
  const uint64_t FeatureFPCVT = 1ULL << 25;
  const uint64_t FeatureFPRND = 1ULL << 26;
  const uint64_t FeatureFRE = 1ULL << 27;
  const uint64_t FeatureFRES = 1ULL << 28;
  const uint64_t FeatureFRSQRTE = 1ULL << 29;
  const uint64_t FeatureFRSQRTES = 1ULL << 30;
  const uint64_t FeatureFSqrt = 1ULL << 31;
  const uint64_t FeatureISEL = 1ULL << 32;
  const uint64_t FeatureLDBRX = 1ULL << 33;
  const uint64_t FeatureLFIWAX = 1ULL << 34;
  const uint64_t FeatureMFOCRF = 1ULL << 35;
  const uint64_t FeaturePOPCNTD = 1ULL << 36;
  const uint64_t FeatureQPX = 1ULL << 37;
  const uint64_t FeatureRecipPrec = 1ULL << 38;
  const uint64_t FeatureSTFIWX = 1ULL << 39;
}
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC
namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV PPCFeatureKV[] = {
  { "64bit", "Enable 64-bit instructions", PPC::Feature64Bit, 0ULL },
  { "64bitregs", "Enable 64-bit registers usage for ppc32 [beta]", PPC::Feature64BitRegs, 0ULL },
  { "altivec", "Enable Altivec instructions", PPC::FeatureAltivec, 0ULL },
  { "booke", "Enable Book E instructions", PPC::FeatureBookE, 0ULL },
  { "fpcvt", "Enable fc[ft]* (unsigned and single-precision) and lfiwzx instructions", PPC::FeatureFPCVT, 0ULL },
  { "fprnd", "Enable the fri[mnpz] instructions", PPC::FeatureFPRND, 0ULL },
  { "fre", "Enable the fre instruction", PPC::FeatureFRE, 0ULL },
  { "fres", "Enable the fres instruction", PPC::FeatureFRES, 0ULL },
  { "frsqrte", "Enable the frsqrte instruction", PPC::FeatureFRSQRTE, 0ULL },
  { "frsqrtes", "Enable the frsqrtes instruction", PPC::FeatureFRSQRTES, 0ULL },
  { "fsqrt", "Enable the fsqrt instruction", PPC::FeatureFSqrt, 0ULL },
  { "isel", "Enable the isel instruction", PPC::FeatureISEL, 0ULL },
  { "ldbrx", "Enable the ldbrx instruction", PPC::FeatureLDBRX, 0ULL },
  { "lfiwax", "Enable the lfiwax instruction", PPC::FeatureLFIWAX, 0ULL },
  { "mfocrf", "Enable the MFOCRF instruction", PPC::FeatureMFOCRF, 0ULL },
  { "popcntd", "Enable the popcnt[dw] instructions", PPC::FeaturePOPCNTD, 0ULL },
  { "qpx", "Enable QPX instructions", PPC::FeatureQPX, 0ULL },
  { "recipprec", "Assume higher precision reciprocal estimates", PPC::FeatureRecipPrec, 0ULL },
  { "stfiwx", "Enable the stfiwx instruction", PPC::FeatureSTFIWX, 0ULL }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV PPCSubTypeKV[] = {
  { "440", "Select the 440 processor", PPC::Directive440 | PPC::FeatureISEL | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureBookE, 0ULL },
  { "450", "Select the 450 processor", PPC::Directive440 | PPC::FeatureISEL | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureBookE, 0ULL },
  { "601", "Select the 601 processor", PPC::Directive601, 0ULL },
  { "602", "Select the 602 processor", PPC::Directive602, 0ULL },
  { "603", "Select the 603 processor", PPC::Directive603 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "603e", "Select the 603e processor", PPC::Directive603 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "603ev", "Select the 603ev processor", PPC::Directive603 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "604", "Select the 604 processor", PPC::Directive604 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "604e", "Select the 604e processor", PPC::Directive604 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "620", "Select the 620 processor", PPC::Directive620 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "7400", "Select the 7400 processor", PPC::Directive7400 | PPC::FeatureAltivec | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "7450", "Select the 7450 processor", PPC::Directive7400 | PPC::FeatureAltivec | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "750", "Select the 750 processor", PPC::Directive750 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "970", "Select the 970 processor", PPC::Directive970 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureSTFIWX | PPC::Feature64Bit, 0ULL },
  { "a2", "Select the a2 processor", PPC::DirectiveA2 | PPC::FeatureBookE | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureRecipPrec | PPC::FeatureSTFIWX | PPC::FeatureLFIWAX | PPC::FeatureFPRND | PPC::FeatureFPCVT | PPC::FeatureISEL | PPC::FeaturePOPCNTD | PPC::FeatureLDBRX | PPC::Feature64Bit, 0ULL },
  { "a2q", "Select the a2q processor", PPC::DirectiveA2 | PPC::FeatureBookE | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureRecipPrec | PPC::FeatureSTFIWX | PPC::FeatureLFIWAX | PPC::FeatureFPRND | PPC::FeatureFPCVT | PPC::FeatureISEL | PPC::FeaturePOPCNTD | PPC::FeatureLDBRX | PPC::Feature64Bit | PPC::FeatureQPX, 0ULL },
  { "e500mc", "Select the e500mc processor", PPC::DirectiveE500mc | PPC::FeatureMFOCRF | PPC::FeatureSTFIWX | PPC::FeatureBookE | PPC::FeatureISEL, 0ULL },
  { "e5500", "Select the e5500 processor", PPC::DirectiveE5500 | PPC::FeatureMFOCRF | PPC::Feature64Bit | PPC::FeatureSTFIWX | PPC::FeatureBookE | PPC::FeatureISEL, 0ULL },
  { "g3", "Select the g3 processor", PPC::Directive750 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "g4", "Select the g4 processor", PPC::Directive7400 | PPC::FeatureAltivec | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "g4+", "Select the g4+ processor", PPC::Directive7400 | PPC::FeatureAltivec | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "g5", "Select the g5 processor", PPC::Directive970 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureSTFIWX | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::Feature64Bit, 0ULL },
  { "generic", "Select the generic processor", PPC::Directive32, 0ULL },
  { "ppc", "Select the ppc processor", PPC::Directive32, 0ULL },
  { "ppc64", "Select the ppc64 processor", PPC::Directive64 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureSTFIWX | PPC::Feature64Bit, 0ULL },
  { "ppc64le", "Select the ppc64le processor", PPC::Directive64 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureSTFIWX | PPC::Feature64Bit, 0ULL },
  { "pwr3", "Select the pwr3 processor", PPC::DirectivePwr3 | PPC::FeatureAltivec | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureMFOCRF | PPC::FeatureSTFIWX | PPC::Feature64Bit, 0ULL },
  { "pwr4", "Select the pwr4 processor", PPC::DirectivePwr4 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureSTFIWX | PPC::Feature64Bit, 0ULL },
  { "pwr5", "Select the pwr5 processor", PPC::DirectivePwr5 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureSTFIWX | PPC::Feature64Bit, 0ULL },
  { "pwr5x", "Select the pwr5x processor", PPC::DirectivePwr5x | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureSTFIWX | PPC::FeatureFPRND | PPC::Feature64Bit, 0ULL },
  { "pwr6", "Select the pwr6 processor", PPC::DirectivePwr6 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureRecipPrec | PPC::FeatureSTFIWX | PPC::FeatureLFIWAX | PPC::FeatureFPRND | PPC::Feature64Bit, 0ULL },
  { "pwr6x", "Select the pwr6x processor", PPC::DirectivePwr5x | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureRecipPrec | PPC::FeatureSTFIWX | PPC::FeatureLFIWAX | PPC::FeatureFPRND | PPC::Feature64Bit, 0ULL },
  { "pwr7", "Select the pwr7 processor", PPC::DirectivePwr7 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureRecipPrec | PPC::FeatureSTFIWX | PPC::FeatureLFIWAX | PPC::FeatureFPRND | PPC::FeatureFPCVT | PPC::FeatureISEL | PPC::FeaturePOPCNTD | PPC::FeatureLDBRX | PPC::Feature64Bit, 0ULL }
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#ifndef NDEBUG
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "PPC440Itineraries"
namespace PPC440ItinerariesFU {
  const unsigned IFTH1 = 1 << 0;
  const unsigned IFTH2 = 1 << 1;
  const unsigned PDCD1 = 1 << 2;
  const unsigned PDCD2 = 1 << 3;
  const unsigned DISS1 = 1 << 4;
  const unsigned DISS2 = 1 << 5;
  const unsigned FRACC = 1 << 6;
  const unsigned IRACC = 1 << 7;
  const unsigned IEXE1 = 1 << 8;
  const unsigned IEXE2 = 1 << 9;
  const unsigned IWB = 1 << 10;
  const unsigned LRACC = 1 << 11;
  const unsigned JEXE1 = 1 << 12;
  const unsigned JEXE2 = 1 << 13;
  const unsigned JWB = 1 << 14;
  const unsigned AGEN = 1 << 15;
  const unsigned CRD = 1 << 16;
  const unsigned LWB = 1 << 17;
  const unsigned FEXE1 = 1 << 18;
  const unsigned FEXE2 = 1 << 19;
  const unsigned FEXE3 = 1 << 20;
  const unsigned FEXE4 = 1 << 21;
  const unsigned FEXE5 = 1 << 22;
  const unsigned FEXE6 = 1 << 23;
  const unsigned FWB = 1 << 24;
  const unsigned LWARX_Hold = 1 << 25;
}

// Pipeline forwarding pathes for itineraries "PPC440Itineraries"
namespace PPC440ItinerariesBypass {
  const unsigned NoBypass = 0;
  const unsigned GPR_Bypass = 1 << 0;
  const unsigned FPR_Bypass = 1 << 1;
}

// Functional units for "G3Itineraries"
namespace G3ItinerariesFU {
  const unsigned IU1 = 1 << 0;
  const unsigned IU2 = 1 << 1;
  const unsigned FPU1 = 1 << 2;
  const unsigned BPU = 1 << 3;
  const unsigned SRU = 1 << 4;
  const unsigned SLU = 1 << 5;
}

// Functional units for "G4Itineraries"
namespace G4ItinerariesFU {
  const unsigned IU1 = 1 << 0;
  const unsigned IU2 = 1 << 1;
  const unsigned SLU = 1 << 2;
  const unsigned SRU = 1 << 3;
  const unsigned BPU = 1 << 4;
  const unsigned FPU1 = 1 << 5;
  const unsigned VIU1 = 1 << 6;
  const unsigned VIU2 = 1 << 7;
  const unsigned VPU = 1 << 8;
  const unsigned VFPU = 1 << 9;
}

// Functional units for "G4PlusItineraries"
namespace G4PlusItinerariesFU {
  const unsigned IU1 = 1 << 0;
  const unsigned IU2 = 1 << 1;
  const unsigned IU3 = 1 << 2;
  const unsigned IU4 = 1 << 3;
  const unsigned BPU = 1 << 4;
  const unsigned SLU = 1 << 5;
  const unsigned FPU1 = 1 << 6;
  const unsigned VFPU = 1 << 7;
  const unsigned VIU1 = 1 << 8;
  const unsigned VIU2 = 1 << 9;
  const unsigned VPU = 1 << 10;
}

// Functional units for "G5Itineraries"
namespace G5ItinerariesFU {
  const unsigned IU1 = 1 << 0;
  const unsigned IU2 = 1 << 1;
  const unsigned SLU = 1 << 2;
  const unsigned BPU = 1 << 3;
  const unsigned FPU1 = 1 << 4;
  const unsigned FPU2 = 1 << 5;
  const unsigned VFPU = 1 << 6;
  const unsigned VIU1 = 1 << 7;
  const unsigned VIU2 = 1 << 8;
  const unsigned VPU = 1 << 9;
}

// Functional units for "PPCA2Itineraries"
namespace PPCA2ItinerariesFU {
  const unsigned IU0to3_0 = 1 << 0;
  const unsigned IU0to3_1 = 1 << 1;
  const unsigned IU0to3_2 = 1 << 2;
  const unsigned IU0to3_3 = 1 << 3;
  const unsigned IU4_0 = 1 << 4;
  const unsigned IU4_1 = 1 << 5;
  const unsigned IU4_2 = 1 << 6;
  const unsigned IU4_3 = 1 << 7;
  const unsigned IU4_4 = 1 << 8;
  const unsigned IU4_5 = 1 << 9;
  const unsigned IU4_6 = 1 << 10;
  const unsigned IU4_7 = 1 << 11;
  const unsigned IU5 = 1 << 12;
  const unsigned IU6 = 1 << 13;
  const unsigned RF0 = 1 << 14;
  const unsigned XRF1 = 1 << 15;
  const unsigned XEX1 = 1 << 16;
  const unsigned XEX2 = 1 << 17;
  const unsigned XEX3 = 1 << 18;
  const unsigned XEX4 = 1 << 19;
  const unsigned XEX5 = 1 << 20;
  const unsigned XEX6 = 1 << 21;
  const unsigned FRF1 = 1 << 22;
  const unsigned FEX1 = 1 << 23;
  const unsigned FEX2 = 1 << 24;
  const unsigned FEX3 = 1 << 25;
  const unsigned FEX4 = 1 << 26;
  const unsigned FEX5 = 1 << 27;
  const unsigned FEX6 = 1 << 28;
}

// Pipeline forwarding pathes for itineraries "PPCA2Itineraries"
namespace PPCA2ItinerariesBypass {
  const unsigned NoBypass = 0;
  const unsigned CR_Bypass = 1 << 0;
  const unsigned GPR_Bypass = 1 << 1;
  const unsigned FPR_Bypass = 1 << 2;
}

// Functional units for "PPCE500mcItineraries"
namespace PPCE500mcItinerariesFU {
  const unsigned DIS0 = 1 << 0;
  const unsigned DIS1 = 1 << 1;
  const unsigned SFX0 = 1 << 2;
  const unsigned SFX1 = 1 << 3;
  const unsigned BU = 1 << 4;
  const unsigned CFX_DivBypass = 1 << 5;
  const unsigned CFX_0 = 1 << 6;
  const unsigned LSU_0 = 1 << 7;
  const unsigned FPU_0 = 1 << 8;
}

// Pipeline forwarding pathes for itineraries "PPCE500mcItineraries"
namespace PPCE500mcItinerariesBypass {
  const unsigned NoBypass = 0;
  const unsigned CR_Bypass = 1 << 0;
  const unsigned GPR_Bypass = 1 << 1;
  const unsigned FPR_Bypass = 1 << 2;
}

// Functional units for "PPCE5500Itineraries"
namespace PPCE5500ItinerariesFU {
  const unsigned DIS0 = 1 << 0;
  const unsigned DIS1 = 1 << 1;
  const unsigned SFX0 = 1 << 2;
  const unsigned SFX1 = 1 << 3;
  const unsigned BU = 1 << 4;
  const unsigned CFX_DivBypass = 1 << 5;
  const unsigned CFX_0 = 1 << 6;
  const unsigned CFX_1 = 1 << 7;
  const unsigned LSU_0 = 1 << 8;
  const unsigned FPU_0 = 1 << 9;
}

// Pipeline forwarding pathes for itineraries "PPCE5500Itineraries"
namespace PPCE5500ItinerariesBypass {
  const unsigned NoBypass = 0;
  const unsigned CR_Bypass = 1 << 0;
  const unsigned GPR_Bypass = 1 << 1;
  const unsigned FPR_Bypass = 1 << 2;
}

extern const llvm::InstrStage PPCStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, PPC440ItinerariesFU::IFTH1 | PPC440ItinerariesFU::IFTH2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::PDCD1 | PPC440ItinerariesFU::PDCD2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::DISS1 | PPC440ItinerariesFU::DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IRACC | PPC440ItinerariesFU::LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IEXE1 | PPC440ItinerariesFU::JEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IEXE2 | PPC440ItinerariesFU::JEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IWB | PPC440ItinerariesFU::JWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1-7
  { 1, PPC440ItinerariesFU::IFTH1 | PPC440ItinerariesFU::IFTH2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::PDCD1 | PPC440ItinerariesFU::PDCD2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::DISS1 | PPC440ItinerariesFU::DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 8-14
  { 1, PPC440ItinerariesFU::IFTH1 | PPC440ItinerariesFU::IFTH2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::PDCD1 | PPC440ItinerariesFU::PDCD2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::DISS1 | PPC440ItinerariesFU::DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::AGEN, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::CRD, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::LWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 15-21
  { 1, PPC440ItinerariesFU::IFTH1 | PPC440ItinerariesFU::IFTH2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::PDCD1 | PPC440ItinerariesFU::PDCD2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::DISS1 | PPC440ItinerariesFU::DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 33, PPC440ItinerariesFU::IWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 22-28
  { 1, PPC440ItinerariesFU::IFTH1 | PPC440ItinerariesFU::IFTH2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::PDCD1 | PPC440ItinerariesFU::PDCD2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::DISS1 | PPC440ItinerariesFU::DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::AGEN, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::CRD, -1, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPC440ItinerariesFU::LWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 29-35
  { 1, PPC440ItinerariesFU::IFTH1 | PPC440ItinerariesFU::IFTH2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::PDCD1 | PPC440ItinerariesFU::PDCD2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::DISS1 | PPC440ItinerariesFU::DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 36-46
  { 1, PPC440ItinerariesFU::IFTH1 | PPC440ItinerariesFU::IFTH2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::PDCD1 | PPC440ItinerariesFU::PDCD2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::DISS1 | PPC440ItinerariesFU::DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 25, PPC440ItinerariesFU::FWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 47-57
  { 1, PPC440ItinerariesFU::IFTH1 | PPC440ItinerariesFU::IFTH2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::PDCD1 | PPC440ItinerariesFU::PDCD2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::DISS1 | PPC440ItinerariesFU::DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 13, PPC440ItinerariesFU::FWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 58-68
  { 1, PPC440ItinerariesFU::IFTH1 | PPC440ItinerariesFU::IFTH2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::PDCD1 | PPC440ItinerariesFU::PDCD2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::DISS1 | PPC440ItinerariesFU::DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FRACC, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::LRACC, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::AGEN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::JEXE1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::CRD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::JEXE2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 6, PPC440ItinerariesFU::FEXE3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 6, PPC440ItinerariesFU::LWB, 0, (llvm::InstrStage::ReservationKinds)0 },   { 6, PPC440ItinerariesFU::JWB, 0, (llvm::InstrStage::ReservationKinds)0 },   { 6, PPC440ItinerariesFU::IWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 69-86
  { 1, PPC440ItinerariesFU::IFTH1 | PPC440ItinerariesFU::IFTH2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::PDCD1 | PPC440ItinerariesFU::PDCD2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::DISS1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IRACC, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPC440ItinerariesFU::LWARX_Hold, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::AGEN, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::CRD, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::LWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 87-95
  { 1, PPC440ItinerariesFU::IFTH1 | PPC440ItinerariesFU::IFTH2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::PDCD1 | PPC440ItinerariesFU::PDCD2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::DISS1 | PPC440ItinerariesFU::DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 3, PPC440ItinerariesFU::IWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 96-102
  { 1, PPC440ItinerariesFU::IFTH1 | PPC440ItinerariesFU::IFTH2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::PDCD1 | PPC440ItinerariesFU::PDCD2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::DISS1 | PPC440ItinerariesFU::DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 3, PPC440ItinerariesFU::AGEN, 1, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPC440ItinerariesFU::CRD, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::LWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 103-109
  { 1, G3ItinerariesFU::IU1 | G3ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 110
  { 1, G3ItinerariesFU::BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 111
  { 1, G3ItinerariesFU::SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 112
  { 3, G3ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 113
  { 19, G3ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 114
  { 2, G3ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 115
  { 1, G3ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 116
  { 31, G3ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 117
  { 17, G3ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 118
  { 2, G3ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 119
  { 2, G3ItinerariesFU::SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 120
  { 34, G3ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 121
  { 3, G3ItinerariesFU::SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 122
  { 3, G3ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 123
  { 5, G3ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 124
  { 6, G3ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 125
  { 3, G3ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 126
  { 8, G3ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 127
  { 2, G3ItinerariesFU::IU1 | G3ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 128
  { 1, G4ItinerariesFU::IU1 | G4ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 129
  { 1, G4ItinerariesFU::BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 130
  { 1, G4ItinerariesFU::SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 131
  { 2, G4ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 132
  { 19, G4ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 133
  { 1, G4ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 134
  { 31, G4ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 135
  { 17, G4ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 136
  { 2, G4ItinerariesFU::SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 137
  { 34, G4ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 138
  { 3, G4ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 139
  { 3, G4ItinerariesFU::SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 140
  { 3, G4ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 141
  { 5, G4ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 142
  { 6, G4ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 143
  { 3, G4ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 144
  { 5, G4ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 145
  { 8, G4ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 146
  { 2, G4ItinerariesFU::IU1 | G4ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 147
  { 4, G4ItinerariesFU::VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 148
  { 1, G4ItinerariesFU::VIU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 149
  { 1, G4ItinerariesFU::VPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 150
  { 1, G4PlusItinerariesFU::IU1 | G4PlusItinerariesFU::IU2 | G4PlusItinerariesFU::IU3 | G4PlusItinerariesFU::IU4, -1, (llvm::InstrStage::ReservationKinds)0 }, // 151
  { 1, G4PlusItinerariesFU::BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 152
  { 2, G4PlusItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 153
  { 3, G4PlusItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 154
  { 23, G4PlusItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 155
  { 5, G4PlusItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 156
  { 35, G4PlusItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 157
  { 21, G4PlusItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 158
  { 3, G4PlusItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 159
  { 0, G4PlusItinerariesFU::IU1 | G4PlusItinerariesFU::IU2 | G4PlusItinerariesFU::IU3 | G4PlusItinerariesFU::IU4, -1, (llvm::InstrStage::ReservationKinds)0 }, // 160
  { 4, G4PlusItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 161
  { 37, G4PlusItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 162
  { 4, G4PlusItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 163
  { 5, G4PlusItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 164
  { 2, G4PlusItinerariesFU::IU1 | G4PlusItinerariesFU::IU2 | G4PlusItinerariesFU::IU3 | G4PlusItinerariesFU::IU4, -1, (llvm::InstrStage::ReservationKinds)0 }, // 165
  { 35, G4PlusItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 166
  { 4, G4PlusItinerariesFU::VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 167
  { 1, G4PlusItinerariesFU::VIU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 168
  { 2, G4PlusItinerariesFU::VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 169
  { 2, G4PlusItinerariesFU::VPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 170
  { 2, G5ItinerariesFU::IU1 | G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 171
  { 1, G5ItinerariesFU::BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 172
  { 3, G5ItinerariesFU::IU1 | G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 173
  { 4, G5ItinerariesFU::BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 174
  { 3, G5ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 175
  { 68, G5ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 176
  { 36, G5ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 177
  { 6, G5ItinerariesFU::FPU1 | G5ItinerariesFU::FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 178
  { 8, G5ItinerariesFU::FPU1 | G5ItinerariesFU::FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 179
  { 33, G5ItinerariesFU::FPU1 | G5ItinerariesFU::FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 180
  { 40, G5ItinerariesFU::FPU1 | G5ItinerariesFU::FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 181
  { 40, G5ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 182
  { 11, G5ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 183
  { 5, G5ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 184
  { 64, G5ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 185
  { 2, G5ItinerariesFU::BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 186
  { 2, G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 187
  { 3, G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 188
  { 6, G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 189
  { 10, G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 190
  { 3, G5ItinerariesFU::BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 191
  { 8, G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 192
  { 5, G5ItinerariesFU::IU1 | G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 193
  { 7, G5ItinerariesFU::IU1 | G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 194
  { 4, G5ItinerariesFU::IU1 | G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 195
  { 4, G5ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 196
  { 35, G5ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 197
  { 1, G5ItinerariesFU::IU1 | G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 198
  { 8, G5ItinerariesFU::VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 199
  { 2, G5ItinerariesFU::VIU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 200
  { 2, G5ItinerariesFU::VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 201
  { 3, G5ItinerariesFU::VPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 202
  { 4, PPCA2ItinerariesFU::IU0to3_0 | PPCA2ItinerariesFU::IU0to3_1 | PPCA2ItinerariesFU::IU0to3_2 | PPCA2ItinerariesFU::IU0to3_3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU4_0 | PPCA2ItinerariesFU::IU4_1 | PPCA2ItinerariesFU::IU4_2 | PPCA2ItinerariesFU::IU4_3 | PPCA2ItinerariesFU::IU4_4 | PPCA2ItinerariesFU::IU4_5 | PPCA2ItinerariesFU::IU4_6 | PPCA2ItinerariesFU::IU4_7, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::RF0, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XRF1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX6, -1, (llvm::InstrStage::ReservationKinds)0 }, // 203-214
  { 4, PPCA2ItinerariesFU::IU0to3_0 | PPCA2ItinerariesFU::IU0to3_1 | PPCA2ItinerariesFU::IU0to3_2 | PPCA2ItinerariesFU::IU0to3_3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU4_0 | PPCA2ItinerariesFU::IU4_1 | PPCA2ItinerariesFU::IU4_2 | PPCA2ItinerariesFU::IU4_3 | PPCA2ItinerariesFU::IU4_4 | PPCA2ItinerariesFU::IU4_5 | PPCA2ItinerariesFU::IU4_6 | PPCA2ItinerariesFU::IU4_7, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::RF0, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XRF1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 38, PPCA2ItinerariesFU::XEX6, -1, (llvm::InstrStage::ReservationKinds)0 }, // 215-226
  { 4, PPCA2ItinerariesFU::IU0to3_0 | PPCA2ItinerariesFU::IU0to3_1 | PPCA2ItinerariesFU::IU0to3_2 | PPCA2ItinerariesFU::IU0to3_3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU4_0 | PPCA2ItinerariesFU::IU4_1 | PPCA2ItinerariesFU::IU4_2 | PPCA2ItinerariesFU::IU4_3 | PPCA2ItinerariesFU::IU4_4 | PPCA2ItinerariesFU::IU4_5 | PPCA2ItinerariesFU::IU4_6 | PPCA2ItinerariesFU::IU4_7, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::RF0, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::FRF1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::FEX1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::FEX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::FEX3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::FEX4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::FEX5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::FEX6, -1, (llvm::InstrStage::ReservationKinds)0 }, // 227-238
  { 4, PPCA2ItinerariesFU::IU0to3_0 | PPCA2ItinerariesFU::IU0to3_1 | PPCA2ItinerariesFU::IU0to3_2 | PPCA2ItinerariesFU::IU0to3_3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU4_0 | PPCA2ItinerariesFU::IU4_1 | PPCA2ItinerariesFU::IU4_2 | PPCA2ItinerariesFU::IU4_3 | PPCA2ItinerariesFU::IU4_4 | PPCA2ItinerariesFU::IU4_5 | PPCA2ItinerariesFU::IU4_6 | PPCA2ItinerariesFU::IU4_7, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::RF0, -1, (llvm::InstrStage::ReservationKinds)0 },   { 71, PPCA2ItinerariesFU::FRF1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 71, PPCA2ItinerariesFU::FEX1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 71, PPCA2ItinerariesFU::FEX2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 71, PPCA2ItinerariesFU::FEX3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 71, PPCA2ItinerariesFU::FEX4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 71, PPCA2ItinerariesFU::FEX5, 0, (llvm::InstrStage::ReservationKinds)0 },   { 71, PPCA2ItinerariesFU::FEX6, -1, (llvm::InstrStage::ReservationKinds)0 }, // 239-250
  { 4, PPCA2ItinerariesFU::IU0to3_0 | PPCA2ItinerariesFU::IU0to3_1 | PPCA2ItinerariesFU::IU0to3_2 | PPCA2ItinerariesFU::IU0to3_3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU4_0 | PPCA2ItinerariesFU::IU4_1 | PPCA2ItinerariesFU::IU4_2 | PPCA2ItinerariesFU::IU4_3 | PPCA2ItinerariesFU::IU4_4 | PPCA2ItinerariesFU::IU4_5 | PPCA2ItinerariesFU::IU4_6 | PPCA2ItinerariesFU::IU4_7, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::RF0, -1, (llvm::InstrStage::ReservationKinds)0 },   { 58, PPCA2ItinerariesFU::FRF1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 58, PPCA2ItinerariesFU::FEX1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 58, PPCA2ItinerariesFU::FEX2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 58, PPCA2ItinerariesFU::FEX3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 58, PPCA2ItinerariesFU::FEX4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 58, PPCA2ItinerariesFU::FEX5, 0, (llvm::InstrStage::ReservationKinds)0 },   { 58, PPCA2ItinerariesFU::FEX6, -1, (llvm::InstrStage::ReservationKinds)0 }, // 251-262
  { 4, PPCA2ItinerariesFU::IU0to3_0 | PPCA2ItinerariesFU::IU0to3_1 | PPCA2ItinerariesFU::IU0to3_2 | PPCA2ItinerariesFU::IU0to3_3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU4_0 | PPCA2ItinerariesFU::IU4_1 | PPCA2ItinerariesFU::IU4_2 | PPCA2ItinerariesFU::IU4_3 | PPCA2ItinerariesFU::IU4_4 | PPCA2ItinerariesFU::IU4_5 | PPCA2ItinerariesFU::IU4_6 | PPCA2ItinerariesFU::IU4_7, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::RF0, -1, (llvm::InstrStage::ReservationKinds)0 },   { 68, PPCA2ItinerariesFU::FRF1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 68, PPCA2ItinerariesFU::FEX1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 68, PPCA2ItinerariesFU::FEX2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 68, PPCA2ItinerariesFU::FEX3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 68, PPCA2ItinerariesFU::FEX4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 68, PPCA2ItinerariesFU::FEX5, 0, (llvm::InstrStage::ReservationKinds)0 },   { 68, PPCA2ItinerariesFU::FEX6, -1, (llvm::InstrStage::ReservationKinds)0 }, // 263-274
  { 4, PPCA2ItinerariesFU::IU0to3_0 | PPCA2ItinerariesFU::IU0to3_1 | PPCA2ItinerariesFU::IU0to3_2 | PPCA2ItinerariesFU::IU0to3_3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU4_0 | PPCA2ItinerariesFU::IU4_1 | PPCA2ItinerariesFU::IU4_2 | PPCA2ItinerariesFU::IU4_3 | PPCA2ItinerariesFU::IU4_4 | PPCA2ItinerariesFU::IU4_5 | PPCA2ItinerariesFU::IU4_6 | PPCA2ItinerariesFU::IU4_7, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::RF0, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XRF1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 14, PPCA2ItinerariesFU::XEX6, -1, (llvm::InstrStage::ReservationKinds)0 }, // 275-286
  { 4, PPCA2ItinerariesFU::IU0to3_0 | PPCA2ItinerariesFU::IU0to3_1 | PPCA2ItinerariesFU::IU0to3_2 | PPCA2ItinerariesFU::IU0to3_3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU4_0 | PPCA2ItinerariesFU::IU4_1 | PPCA2ItinerariesFU::IU4_2 | PPCA2ItinerariesFU::IU4_3 | PPCA2ItinerariesFU::IU4_4 | PPCA2ItinerariesFU::IU4_5 | PPCA2ItinerariesFU::IU4_6 | PPCA2ItinerariesFU::IU4_7, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 13, PPCA2ItinerariesFU::IU6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::RF0, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XRF1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX6, -1, (llvm::InstrStage::ReservationKinds)0 }, // 287-298
  { 4, PPCA2ItinerariesFU::IU0to3_0 | PPCA2ItinerariesFU::IU0to3_1 | PPCA2ItinerariesFU::IU0to3_2 | PPCA2ItinerariesFU::IU0to3_3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU4_0 | PPCA2ItinerariesFU::IU4_1 | PPCA2ItinerariesFU::IU4_2 | PPCA2ItinerariesFU::IU4_3 | PPCA2ItinerariesFU::IU4_4 | PPCA2ItinerariesFU::IU4_5 | PPCA2ItinerariesFU::IU4_6 | PPCA2ItinerariesFU::IU4_7, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::RF0, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XRF1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 12, PPCA2ItinerariesFU::XEX4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX6, -1, (llvm::InstrStage::ReservationKinds)0 }, // 299-310
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::SFX0 | PPCE500mcItinerariesFU::SFX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 311-312
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::BU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 313-314
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 315-316
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 14, PPCE500mcItinerariesFU::CFX_DivBypass, -1, (llvm::InstrStage::ReservationKinds)0 }, // 317-319
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE500mcItinerariesFU::FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 320-321
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE500mcItinerariesFU::FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 322-323
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 68, PPCE500mcItinerariesFU::FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 324-325
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 38, PPCE500mcItinerariesFU::FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 326-327
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::SFX0 | PPCE500mcItinerariesFU::SFX1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 328-330
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, PPCE500mcItinerariesFU::LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 331-332
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, PPCE500mcItinerariesFU::SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 333-334
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, PPCE500mcItinerariesFU::FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 335-336
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE500mcItinerariesFU::SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 337-338
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 339-340
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE500mcItinerariesFU::SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 341-342
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::SFX0 | PPCE5500ItinerariesFU::SFX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 343-344
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::BU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 345-346
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 347-348
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 26, PPCE5500ItinerariesFU::CFX_DivBypass, -1, (llvm::InstrStage::ReservationKinds)0 }, // 349-351
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 16, PPCE5500ItinerariesFU::CFX_DivBypass, -1, (llvm::InstrStage::ReservationKinds)0 }, // 352-354
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 355-356
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 31, PPCE5500ItinerariesFU::FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 357-358
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 16, PPCE5500ItinerariesFU::FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 359-360
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::SFX0 | PPCE5500ItinerariesFU::SFX1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 361-363
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, PPCE5500ItinerariesFU::LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 364-365
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE5500ItinerariesFU::LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 366-367
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, PPCE5500ItinerariesFU::CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 368-369
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 370-371
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE5500ItinerariesFU::CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 372-373
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, PPCE5500ItinerariesFU::FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 374-375
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::CFX_1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 376-378
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE5500ItinerariesFU::CFX_1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 379-381
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE5500ItinerariesFU::SFX0 | PPCE5500ItinerariesFU::SFX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 382-383
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE5500ItinerariesFU::SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 384-385
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned PPCOperandCycles[] = {
  0, // No itinerary
  6,   4,   4, // 1-3
  6,   4,   4, // 4-6
  8,   4, // 7-8
  6,   4,   4, // 9-11
  8,   4,   4, // 12-14
  8,   5, // 15-16
  40,   4,   4, // 17-19
  9,   5, // 20-21
  10,   4,   4, // 22-24
  10,   4,   4, // 25-27
  10,   4,   4, // 28-30
  35,   4,   4, // 31-33
  23,   4,   4, // 34-36
  10,   4,   4,   4, // 37-40
  8,   5, // 41-42
  9,   5, // 43-44
  9,   5,   5, // 45-47
  9,   5,   5, // 48-50
  8,   5, // 51-52
  8,   5, // 53-54
  8,   5, // 55-56
  8,   5, // 57-58
  8,   4,   4, // 59-61
  8,   4, // 62-63
  10,   4, // 64-65
  7,   4,   4, // 66-68
  10,   4, // 69-70
  8,   5, // 71-72
  8,   4,   4, // 73-75
  10,   4, // 76-77
  7,   4,   4, // 78-80
  8,   4,   4, // 81-83
  8,   4,   4, // 84-86
  8,   4,   4, // 87-89
  6,   4,   4, // 90-92
  6,   4,   4, // 93-95
  8,   5, // 96-97
  8,   5, // 98-99
  8,   5, // 100-101
  8,   5, // 102-103
  8,   5,   5, // 104-106
  8,   5,   5, // 107-109
  8,   5, // 110-111
  6,   4, // 112-113
  10,   7,   7, // 114-116
  10,   7,   7, // 117-119
  15,   7,   7, // 120-122
  10,   7,   7, // 123-125
  10,   7,   7, // 126-128
  13,   11, // 129-130
  53,   7,   7, // 131-133
  14,   7, // 134-135
  15,   7,   7, // 136-138
  15,   7,   7, // 139-141
  13,   7,   7, // 142-144
  86,   7,   7, // 145-147
  73,   7,   7, // 148-150
  15,   7,   7,   7, // 151-154
  86,   7, // 155-156
  14,   7, // 157-158
  14,   7, // 159-160
  14,   7, // 161-162
  14,   7,   7, // 163-165
  14,   7,   7, // 166-168
  14,   7, // 169-170
  14,   7, // 171-172
  14,   7, // 173-174
  26,   7, // 175-176
  10,   7,   7, // 177-179
  10,   7, // 180-181
  15,   7, // 182-183
  10,   7,   7, // 184-186
  29,   7, // 187-188
  13,   7, // 189-190
  10,   7,   7, // 191-193
  15,   7, // 194-195
  10,   7,   7, // 196-198
  14,   7,   7, // 199-201
  14,   7,   7, // 202-204
  15,   7,   7, // 205-207
  10,   7,   7, // 208-210
  10,   7,   7, // 211-213
  10,   7,   7, // 214-216
  10,   7,   7, // 217-219
  13,   7, // 220-221
  13,   7, // 222-223
  26,   7, // 224-225
  13,   7, // 226-227
  14,   7,   7, // 228-230
  14,   7,   7, // 231-233
  26,   7, // 234-235
  10,   7,   7, // 236-238
  10,   7,   7, // 239-241
  4,   1,   1, // 242-244
  4,   1,   1, // 245-247
  4,   1, // 248-249
  5,   1,   1, // 250-252
  4,   1,   1, // 253-255
  6,   1, // 256-257
  17,   1,   1, // 258-260
  6,   1, // 261-262
  11,   1,   1, // 263-265
  13,   1,   1, // 266-268
  11,   1,   1, // 269-271
  71,   1,   1, // 272-274
  41,   1,   1, // 275-277
  13,   1,   1,   1, // 278-281
  6,   1, // 282-283
  6,   1, // 284-285
  7,   1,   1, // 286-288
  7,   1,   1, // 289-291
  6,   1, // 292-293
  6,   1, // 294-295
  7,   1, // 296-297
  6,   1,   1, // 298-300
  4,   1, // 301-302
  8,   1, // 303-304
  4,   1, // 305-306
  11, // 307
  7,   1, // 308-309
  6,   1, // 310-311
  4,   1,   1, // 312-314
  4,   1, // 315-316
  11,   1,   1, // 317-319
  7,   1,   1, // 320-322
  7,   1,   1, // 323-325
  7,   1,   1, // 326-328
  4,   1,   1, // 329-331
  4,   1,   1, // 332-334
  6,   1, // 335-336
  6,   1,   1, // 337-339
  6,   1,   1, // 340-342
  6,   1, // 343-344
  5,   1, // 345-346
  5,   2,   2, // 347-349
  5,   2,   2, // 350-352
  5,   2, // 353-354
  6,   2,   2, // 355-357
  5,   2,   2, // 358-360
  7,   2, // 361-362
  30,   2,   2, // 363-365
  20,   2,   2, // 366-368
  7,   2, // 369-370
  11,   2,   2, // 371-373
  11,   2,   2, // 374-376
  11,   2,   2, // 377-379
  39,   2,   2, // 380-382
  24,   2,   2, // 383-385
  11,   2,   2,   2, // 386-389
  7,   2, // 390-391
  7,   2, // 392-393
  7,   2, // 394-395
  7,   2, // 396-397
  7,   2, // 398-399
  8,   2,   2, // 400-402
  8,   2,   2, // 403-405
  7,   2, // 406-407
  7,   2, // 408-409
  8,   2, // 410-411
  7,   2,   2, // 412-414
  5,   2, // 415-416
  9,   2, // 417-418
  5, // 419
  11, // 420
  8,   2, // 421-422
  7,   2, // 423-424
  5,   2,   2, // 425-427
  5, // 428
  11,   2,   2, // 429-431
  8,   2,   2, // 432-434
  8,   2,   2, // 435-437
  9,   2,   2, // 438-440
  8,   2,   2, // 441-443
  6,   2,   2, // 444-446
  5,   2,   2, // 447-449
  5,   2,   2, // 450-452
  6,   2,   2, // 453-455
  7,   2, // 456-457
  7,   2, // 458-459
  7,   2, // 460-461
  7,   2, // 462-463
  7,   2,   2, // 464-466
  7,   2,   2, // 467-469
  7,   2, // 470-471
  6,   2, // 472-473
  0 // End operand cycles
};
extern const unsigned PPCForwardingPaths[] = {
 0, // No itinerary
PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 1-3
PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 4-6
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 7-8
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 9-11
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 12-14
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 15-16
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 17-19
PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 20-21
PPC440ItinerariesBypass::FPR_Bypass, PPC440ItinerariesBypass::FPR_Bypass, PPC440ItinerariesBypass::FPR_Bypass, // 22-24
PPC440ItinerariesBypass::FPR_Bypass, PPC440ItinerariesBypass::FPR_Bypass, PPC440ItinerariesBypass::FPR_Bypass, // 25-27
PPC440ItinerariesBypass::FPR_Bypass, PPC440ItinerariesBypass::FPR_Bypass, PPC440ItinerariesBypass::FPR_Bypass, // 28-30
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::FPR_Bypass, PPC440ItinerariesBypass::FPR_Bypass, // 31-33
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::FPR_Bypass, PPC440ItinerariesBypass::FPR_Bypass, // 34-36
PPC440ItinerariesBypass::FPR_Bypass, PPC440ItinerariesBypass::FPR_Bypass, PPC440ItinerariesBypass::FPR_Bypass, PPC440ItinerariesBypass::FPR_Bypass, // 37-40
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 41-42
PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 43-44
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 45-47
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 48-50
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 51-52
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 53-54
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 55-56
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 57-58
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 59-61
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 62-63
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 64-65
PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 66-68
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 69-70
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 71-72
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 73-75
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 76-77
PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 78-80
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 81-83
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 84-86
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 87-89
PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 90-92
PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 93-95
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 96-97
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 98-99
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 100-101
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 102-103
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 104-106
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 107-109
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 110-111
PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 112-113
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 114-116
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 117-119
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::GPR_Bypass,  0, // 120-122
PPCA2ItinerariesBypass::CR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 123-125
PPCA2ItinerariesBypass::CR_Bypass, PPCA2ItinerariesBypass::CR_Bypass, PPCA2ItinerariesBypass::CR_Bypass, // 126-128
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::GPR_Bypass, // 129-130
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 131-133
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 134-135
PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, // 136-138
PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, // 139-141
PPCA2ItinerariesBypass::CR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, // 142-144
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, // 145-147
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, // 148-150
PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, // 151-154
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::FPR_Bypass, // 155-156
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::GPR_Bypass, // 157-158
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 159-160
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 161-162
PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 163-165
PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 166-168
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::GPR_Bypass, // 169-170
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::GPR_Bypass, // 171-172
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::GPR_Bypass, // 173-174
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::GPR_Bypass, // 175-176
PPCA2ItinerariesBypass::CR_Bypass, PPCA2ItinerariesBypass::CR_Bypass, PPCA2ItinerariesBypass::CR_Bypass, // 177-179
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::CR_Bypass, // 180-181
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::GPR_Bypass, // 182-183
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 184-186
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::GPR_Bypass, // 187-188
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 189-190
PPCA2ItinerariesBypass::CR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 191-193
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::GPR_Bypass, // 194-195
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 196-198
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 199-201
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 202-204
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 205-207
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 208-210
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 211-213
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 214-216
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 217-219
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 220-221
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 222-223
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::GPR_Bypass, // 224-225
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 226-227
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, // 228-230
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, // 231-233
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::GPR_Bypass, // 234-235
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass,  0, // 236-238
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass,  0, // 239-241
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 242-244
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 245-247
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 248-249
PPCE500mcItinerariesBypass::CR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 250-252
PPCE500mcItinerariesBypass::CR_Bypass, PPCE500mcItinerariesBypass::CR_Bypass, PPCE500mcItinerariesBypass::CR_Bypass, // 253-255
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 256-257
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 258-260
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 261-262
PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, // 263-265
PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, // 266-268
PPCE500mcItinerariesBypass::CR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, // 269-271
PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, // 272-274
PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, // 275-277
PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, // 278-281
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 282-283
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 284-285
PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 286-288
PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 289-291
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 292-293
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 294-295
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 296-297
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 298-300
PPCE500mcItinerariesBypass::CR_Bypass, PPCE500mcItinerariesBypass::CR_Bypass, // 301-302
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::CR_Bypass, // 303-304
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::CR_Bypass, // 305-306
PPCE500mcItinerariesBypass::FPR_Bypass, // 307
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 308-309
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 310-311
PPCE500mcItinerariesBypass::CR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass,  0, // 312-314
PPCE500mcItinerariesBypass::CR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 315-316
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::NoBypass, // 317-319
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 320-322
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 323-325
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 326-328
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 329-331
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 332-334
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 335-336
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 337-339
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 340-342
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 343-344
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 345-346
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 347-349
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 350-352
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 353-354
PPCE5500ItinerariesBypass::CR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 355-357
PPCE5500ItinerariesBypass::CR_Bypass, PPCE5500ItinerariesBypass::CR_Bypass, PPCE5500ItinerariesBypass::CR_Bypass, // 358-360
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 361-362
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 363-365
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 366-368
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 369-370
PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, // 371-373
PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, // 374-376
PPCE5500ItinerariesBypass::CR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, // 377-379
PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, // 380-382
PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, // 383-385
PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, // 386-389
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 390-391
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 392-393
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 394-395
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 396-397
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 398-399
PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 400-402
PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 403-405
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 406-407
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 408-409
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 410-411
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 412-414
PPCE5500ItinerariesBypass::CR_Bypass, PPCE5500ItinerariesBypass::CR_Bypass, // 415-416
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::CR_Bypass, // 417-418
PPCE5500ItinerariesBypass::GPR_Bypass, // 419
PPCE5500ItinerariesBypass::FPR_Bypass, // 420
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 421-422
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 423-424
PPCE5500ItinerariesBypass::CR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass,  0, // 425-427
PPCE5500ItinerariesBypass::GPR_Bypass, // 428
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::NoBypass, // 429-431
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 432-434
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 435-437
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 438-440
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 441-443
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 444-446
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 447-449
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 450-452
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 453-455
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 456-457
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 458-459
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 460-461
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 462-463
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 464-466
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 467-469
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 470-471
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 472-473
 0 // End bypass tables
};

static const llvm::InstrItinerary *NoItineraries = 0;

static const llvm::InstrItinerary PPC440Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 1, 8, 1, 4 }, // 1 IntSimple
  { 1, 1, 8, 4, 7 }, // 2 IntGeneral
  { 1, 8, 15, 7, 9 }, // 3 BrB
  { 1, 1, 8, 9, 12 }, // 4 IntCompare
  { 1, 8, 15, 12, 15 }, // 5 BrCR
  { 1, 15, 22, 15, 17 }, // 6 LdStDCBF
  { 0, 0, 0, 0, 0 }, // 7 IntDivD
  { 1, 22, 29, 17, 20 }, // 8 IntDivW
  { 1, 29, 36, 20, 22 }, // 9 LdStLoad
  { 1, 36, 47, 22, 25 }, // 10 FPGeneral
  { 1, 36, 47, 25, 28 }, // 11 FPAddSub
  { 1, 36, 47, 28, 31 }, // 12 FPCompare
  { 1, 47, 58, 31, 34 }, // 13 FPDivD
  { 1, 58, 69, 34, 37 }, // 14 FPDivS
  { 1, 36, 47, 37, 41 }, // 15 FPFused
  { 0, 0, 0, 0, 0 }, // 16 FPSqrt
  { 1, 15, 22, 41, 43 }, // 17 LdStICBI
  { 1, 69, 87, 0, 0 }, // 18 SprISYNC
  { 1, 29, 36, 43, 45 }, // 19 LdStLoadUpd
  { 0, 0, 0, 0, 0 }, // 20 LdStLD
  { 0, 0, 0, 0, 0 }, // 21 LdStLDARX
  { 0, 0, 0, 0, 0 }, // 22 LdStLDU
  { 1, 29, 36, 45, 48 }, // 23 LdStLFD
  { 1, 15, 22, 48, 51 }, // 24 LdStLFDU
  { 1, 15, 22, 51, 53 }, // 25 LdStLHA
  { 1, 15, 22, 53, 55 }, // 26 LdStLHAU
  { 1, 15, 22, 55, 57 }, // 27 LdStLMW
  { 0, 0, 0, 0, 0 }, // 28 LdStLWA
  { 1, 87, 96, 57, 59 }, // 29 LdStLWARX
  { 1, 8, 15, 59, 62 }, // 30 BrMCR
  { 1, 8, 15, 62, 64 }, // 31 SprMFCR
  { 1, 96, 103, 64, 66 }, // 32 SprMFSPR
  { 1, 8, 15, 66, 69 }, // 33 IntMFFS
  { 1, 96, 103, 69, 71 }, // 34 SprMFTB
  { 1, 29, 36, 71, 73 }, // 35 LdStStore
  { 1, 8, 15, 73, 76 }, // 36 BrMCRX
  { 1, 96, 103, 76, 78 }, // 37 SprMTSPR
  { 1, 8, 15, 78, 81 }, // 38 IntMTFSB0
  { 1, 8, 15, 81, 84 }, // 39 IntMulHW
  { 1, 8, 15, 84, 87 }, // 40 IntMulHWU
  { 0, 0, 0, 0, 0 }, // 41 IntMulHD
  { 1, 8, 15, 87, 90 }, // 42 IntMulLI
  { 0, 0, 0, 0, 0 }, // 43 IntRotateD
  { 0, 0, 0, 0, 0 }, // 44 IntRotateDI
  { 1, 1, 8, 90, 93 }, // 45 IntRotate
  { 1, 1, 8, 93, 96 }, // 46 IntShift
  { 1, 29, 36, 96, 98 }, // 47 LdStStoreUpd
  { 1, 29, 36, 98, 100 }, // 48 LdStSTD
  { 1, 87, 96, 100, 102 }, // 49 LdStSTDCX
  { 1, 29, 36, 102, 104 }, // 50 LdStSTDU
  { 1, 15, 22, 104, 107 }, // 51 LdStSTFD
  { 1, 15, 22, 107, 110 }, // 52 LdStSTFDU
  { 1, 87, 96, 110, 112 }, // 53 LdStSTWCX
  { 1, 103, 110, 0, 0 }, // 54 LdStSync
  { 0, 0, 0, 0, 0 }, // 55 IntTrapD
  { 1, 8, 15, 112, 114 }, // 56 IntTrapW
  { 0, 0, 0, 0, 0 }, // 57 VecFP
  { 0, 0, 0, 0, 0 }, // 58 VecGeneral
  { 0, 0, 0, 0, 0 }, // 59 VecFPCompare
  { 0, 0, 0, 0, 0 }, // 60 VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary G3Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 110, 111, 0, 0 }, // 1 IntSimple
  { 1, 110, 111, 0, 0 }, // 2 IntGeneral
  { 1, 111, 112, 0, 0 }, // 3 BrB
  { 1, 110, 111, 0, 0 }, // 4 IntCompare
  { 1, 112, 113, 0, 0 }, // 5 BrCR
  { 1, 113, 114, 0, 0 }, // 6 LdStDCBF
  { 0, 0, 0, 0, 0 }, // 7 IntDivD
  { 1, 114, 115, 0, 0 }, // 8 IntDivW
  { 1, 115, 116, 0, 0 }, // 9 LdStLoad
  { 1, 116, 117, 0, 0 }, // 10 FPGeneral
  { 1, 116, 117, 0, 0 }, // 11 FPAddSub
  { 1, 116, 117, 0, 0 }, // 12 FPCompare
  { 1, 117, 118, 0, 0 }, // 13 FPDivD
  { 1, 118, 119, 0, 0 }, // 14 FPDivS
  { 1, 119, 120, 0, 0 }, // 15 FPFused
  { 0, 0, 0, 0, 0 }, // 16 FPSqrt
  { 1, 113, 114, 0, 0 }, // 17 LdStICBI
  { 1, 120, 121, 0, 0 }, // 18 SprISYNC
  { 1, 115, 116, 0, 0 }, // 19 LdStLoadUpd
  { 0, 0, 0, 0, 0 }, // 20 LdStLD
  { 0, 0, 0, 0, 0 }, // 21 LdStLDARX
  { 0, 0, 0, 0, 0 }, // 22 LdStLDU
  { 1, 115, 116, 0, 0 }, // 23 LdStLFD
  { 1, 115, 116, 0, 0 }, // 24 LdStLFDU
  { 1, 115, 116, 0, 0 }, // 25 LdStLHA
  { 1, 115, 116, 0, 0 }, // 26 LdStLHAU
  { 1, 121, 122, 0, 0 }, // 27 LdStLMW
  { 0, 0, 0, 0, 0 }, // 28 LdStLWA
  { 1, 113, 114, 0, 0 }, // 29 LdStLWARX
  { 1, 112, 113, 0, 0 }, // 30 BrMCR
  { 1, 112, 113, 0, 0 }, // 31 SprMFCR
  { 1, 122, 123, 0, 0 }, // 32 SprMFSPR
  { 1, 116, 117, 0, 0 }, // 33 IntMFFS
  { 1, 122, 123, 0, 0 }, // 34 SprMFTB
  { 1, 115, 116, 0, 0 }, // 35 LdStStore
  { 1, 112, 113, 0, 0 }, // 36 BrMCRX
  { 1, 120, 121, 0, 0 }, // 37 SprMTSPR
  { 1, 123, 124, 0, 0 }, // 38 IntMTFSB0
  { 1, 124, 125, 0, 0 }, // 39 IntMulHW
  { 1, 125, 126, 0, 0 }, // 40 IntMulHWU
  { 0, 0, 0, 0, 0 }, // 41 IntMulHD
  { 1, 126, 127, 0, 0 }, // 42 IntMulLI
  { 0, 0, 0, 0, 0 }, // 43 IntRotateD
  { 0, 0, 0, 0, 0 }, // 44 IntRotateDI
  { 1, 110, 111, 0, 0 }, // 45 IntRotate
  { 1, 110, 111, 0, 0 }, // 46 IntShift
  { 1, 115, 116, 0, 0 }, // 47 LdStStoreUpd
  { 0, 0, 0, 0, 0 }, // 48 LdStSTD
  { 0, 0, 0, 0, 0 }, // 49 LdStSTDCX
  { 0, 0, 0, 0, 0 }, // 50 LdStSTDU
  { 1, 115, 116, 0, 0 }, // 51 LdStSTFD
  { 1, 115, 116, 0, 0 }, // 52 LdStSTFDU
  { 1, 127, 128, 0, 0 }, // 53 LdStSTWCX
  { 1, 113, 114, 0, 0 }, // 54 LdStSync
  { 0, 0, 0, 0, 0 }, // 55 IntTrapD
  { 1, 128, 129, 0, 0 }, // 56 IntTrapW
  { 0, 0, 0, 0, 0 }, // 57 VecFP
  { 0, 0, 0, 0, 0 }, // 58 VecGeneral
  { 0, 0, 0, 0, 0 }, // 59 VecFPCompare
  { 0, 0, 0, 0, 0 }, // 60 VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary G4Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 129, 130, 0, 0 }, // 1 IntSimple
  { 1, 129, 130, 0, 0 }, // 2 IntGeneral
  { 1, 130, 131, 0, 0 }, // 3 BrB
  { 1, 129, 130, 0, 0 }, // 4 IntCompare
  { 1, 131, 132, 0, 0 }, // 5 BrCR
  { 1, 132, 133, 0, 0 }, // 6 LdStDCBF
  { 0, 0, 0, 0, 0 }, // 7 IntDivD
  { 1, 133, 134, 0, 0 }, // 8 IntDivW
  { 1, 132, 133, 0, 0 }, // 9 LdStLoad
  { 1, 134, 135, 0, 0 }, // 10 FPGeneral
  { 1, 134, 135, 0, 0 }, // 11 FPAddSub
  { 1, 134, 135, 0, 0 }, // 12 FPCompare
  { 1, 135, 136, 0, 0 }, // 13 FPDivD
  { 1, 136, 137, 0, 0 }, // 14 FPDivS
  { 1, 134, 135, 0, 0 }, // 15 FPFused
  { 0, 0, 0, 0, 0 }, // 16 FPSqrt
  { 1, 132, 133, 0, 0 }, // 17 LdStICBI
  { 1, 137, 138, 0, 0 }, // 18 SprISYNC
  { 1, 132, 133, 0, 0 }, // 19 LdStLoadUpd
  { 0, 0, 0, 0, 0 }, // 20 LdStLD
  { 0, 0, 0, 0, 0 }, // 21 LdStLDARX
  { 0, 0, 0, 0, 0 }, // 22 LdStLDU
  { 1, 132, 133, 0, 0 }, // 23 LdStLFD
  { 1, 132, 133, 0, 0 }, // 24 LdStLFDU
  { 1, 132, 133, 0, 0 }, // 25 LdStLHA
  { 1, 132, 133, 0, 0 }, // 26 LdStLHAU
  { 1, 138, 139, 0, 0 }, // 27 LdStLMW
  { 0, 0, 0, 0, 0 }, // 28 LdStLWA
  { 1, 139, 140, 0, 0 }, // 29 LdStLWARX
  { 1, 131, 132, 0, 0 }, // 30 BrMCR
  { 1, 131, 132, 0, 0 }, // 31 SprMFCR
  { 1, 140, 141, 0, 0 }, // 32 SprMFSPR
  { 1, 141, 142, 0, 0 }, // 33 IntMFFS
  { 1, 131, 132, 0, 0 }, // 34 SprMFTB
  { 1, 132, 133, 0, 0 }, // 35 LdStStore
  { 1, 131, 132, 0, 0 }, // 36 BrMCRX
  { 1, 137, 138, 0, 0 }, // 37 SprMTSPR
  { 1, 141, 142, 0, 0 }, // 38 IntMTFSB0
  { 1, 142, 143, 0, 0 }, // 39 IntMulHW
  { 1, 143, 144, 0, 0 }, // 40 IntMulHWU
  { 0, 0, 0, 0, 0 }, // 41 IntMulHD
  { 1, 144, 145, 0, 0 }, // 42 IntMulLI
  { 0, 0, 0, 0, 0 }, // 43 IntRotateD
  { 0, 0, 0, 0, 0 }, // 44 IntRotateDI
  { 1, 129, 130, 0, 0 }, // 45 IntRotate
  { 1, 129, 130, 0, 0 }, // 46 IntShift
  { 1, 132, 133, 0, 0 }, // 47 LdStStoreUpd
  { 0, 0, 0, 0, 0 }, // 48 LdStSTD
  { 0, 0, 0, 0, 0 }, // 49 LdStSTDCX
  { 0, 0, 0, 0, 0 }, // 50 LdStSTDU
  { 1, 132, 133, 0, 0 }, // 51 LdStSTFD
  { 1, 132, 133, 0, 0 }, // 52 LdStSTFDU
  { 1, 145, 146, 0, 0 }, // 53 LdStSTWCX
  { 1, 146, 147, 0, 0 }, // 54 LdStSync
  { 0, 0, 0, 0, 0 }, // 55 IntTrapD
  { 1, 147, 148, 0, 0 }, // 56 IntTrapW
  { 1, 148, 149, 0, 0 }, // 57 VecFP
  { 1, 149, 150, 0, 0 }, // 58 VecGeneral
  { 1, 149, 150, 0, 0 }, // 59 VecFPCompare
  { 1, 150, 151, 0, 0 }, // 60 VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary G4PlusItineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 151, 152, 0, 0 }, // 1 IntSimple
  { 1, 151, 152, 0, 0 }, // 2 IntGeneral
  { 1, 152, 153, 0, 0 }, // 3 BrB
  { 1, 151, 152, 0, 0 }, // 4 IntCompare
  { 1, 153, 154, 0, 0 }, // 5 BrCR
  { 1, 154, 155, 0, 0 }, // 6 LdStDCBF
  { 0, 0, 0, 0, 0 }, // 7 IntDivD
  { 1, 155, 156, 0, 0 }, // 8 IntDivW
  { 1, 154, 155, 0, 0 }, // 9 LdStLoad
  { 1, 156, 157, 0, 0 }, // 10 FPGeneral
  { 1, 156, 157, 0, 0 }, // 11 FPAddSub
  { 1, 156, 157, 0, 0 }, // 12 FPCompare
  { 1, 157, 158, 0, 0 }, // 13 FPDivD
  { 1, 158, 159, 0, 0 }, // 14 FPDivS
  { 1, 156, 157, 0, 0 }, // 15 FPFused
  { 0, 0, 0, 0, 0 }, // 16 FPSqrt
  { 1, 159, 160, 0, 0 }, // 17 LdStICBI
  { 1, 160, 161, 0, 0 }, // 18 SprISYNC
  { 1, 154, 155, 0, 0 }, // 19 LdStLoadUpd
  { 0, 0, 0, 0, 0 }, // 20 LdStLD
  { 0, 0, 0, 0, 0 }, // 21 LdStLDARX
  { 0, 0, 0, 0, 0 }, // 22 LdStLDU
  { 1, 161, 162, 0, 0 }, // 23 LdStLFD
  { 1, 161, 162, 0, 0 }, // 24 LdStLFDU
  { 1, 154, 155, 0, 0 }, // 25 LdStLHA
  { 1, 154, 155, 0, 0 }, // 26 LdStLHAU
  { 1, 162, 163, 0, 0 }, // 27 LdStLMW
  { 1, 154, 155, 0, 0 }, // 28 LdStLWA
  { 1, 154, 155, 0, 0 }, // 29 LdStLWARX
  { 1, 153, 154, 0, 0 }, // 30 BrMCR
  { 1, 153, 154, 0, 0 }, // 31 SprMFCR
  { 1, 163, 164, 0, 0 }, // 32 SprMFSPR
  { 1, 156, 157, 0, 0 }, // 33 IntMFFS
  { 1, 164, 165, 0, 0 }, // 34 SprMFTB
  { 1, 154, 155, 0, 0 }, // 35 LdStStore
  { 1, 153, 154, 0, 0 }, // 36 BrMCRX
  { 1, 153, 154, 0, 0 }, // 37 SprMTSPR
  { 1, 156, 157, 0, 0 }, // 38 IntMTFSB0
  { 1, 163, 164, 0, 0 }, // 39 IntMulHW
  { 1, 163, 164, 0, 0 }, // 40 IntMulHWU
  { 0, 0, 0, 0, 0 }, // 41 IntMulHD
  { 1, 159, 160, 0, 0 }, // 42 IntMulLI
  { 0, 0, 0, 0, 0 }, // 43 IntRotateD
  { 0, 0, 0, 0, 0 }, // 44 IntRotateDI
  { 1, 151, 152, 0, 0 }, // 45 IntRotate
  { 1, 165, 166, 0, 0 }, // 46 IntShift
  { 1, 154, 155, 0, 0 }, // 47 LdStStoreUpd
  { 1, 154, 155, 0, 0 }, // 48 LdStSTD
  { 1, 154, 155, 0, 0 }, // 49 LdStSTDCX
  { 1, 154, 155, 0, 0 }, // 50 LdStSTDU
  { 1, 154, 155, 0, 0 }, // 51 LdStSTFD
  { 1, 154, 155, 0, 0 }, // 52 LdStSTFDU
  { 1, 154, 155, 0, 0 }, // 53 LdStSTWCX
  { 1, 166, 167, 0, 0 }, // 54 LdStSync
  { 0, 0, 0, 0, 0 }, // 55 IntTrapD
  { 1, 165, 166, 0, 0 }, // 56 IntTrapW
  { 1, 167, 168, 0, 0 }, // 57 VecFP
  { 1, 168, 169, 0, 0 }, // 58 VecGeneral
  { 1, 169, 170, 0, 0 }, // 59 VecFPCompare
  { 1, 170, 171, 0, 0 }, // 60 VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary G5Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 171, 172, 0, 0 }, // 1 IntSimple
  { 1, 171, 172, 0, 0 }, // 2 IntGeneral
  { 1, 172, 173, 0, 0 }, // 3 BrB
  { 1, 173, 174, 0, 0 }, // 4 IntCompare
  { 1, 174, 175, 0, 0 }, // 5 BrCR
  { 1, 175, 176, 0, 0 }, // 6 LdStDCBF
  { 1, 176, 177, 0, 0 }, // 7 IntDivD
  { 1, 177, 178, 0, 0 }, // 8 IntDivW
  { 1, 175, 176, 0, 0 }, // 9 LdStLoad
  { 1, 178, 179, 0, 0 }, // 10 FPGeneral
  { 1, 178, 179, 0, 0 }, // 11 FPAddSub
  { 1, 179, 180, 0, 0 }, // 12 FPCompare
  { 1, 180, 181, 0, 0 }, // 13 FPDivD
  { 1, 180, 181, 0, 0 }, // 14 FPDivS
  { 1, 178, 179, 0, 0 }, // 15 FPFused
  { 1, 181, 182, 0, 0 }, // 16 FPSqrt
  { 1, 182, 183, 0, 0 }, // 17 LdStICBI
  { 1, 182, 183, 0, 0 }, // 18 SprISYNC
  { 1, 175, 176, 0, 0 }, // 19 LdStLoadUpd
  { 1, 175, 176, 0, 0 }, // 20 LdStLD
  { 1, 183, 184, 0, 0 }, // 21 LdStLDARX
  { 1, 175, 176, 0, 0 }, // 22 LdStLDU
  { 1, 175, 176, 0, 0 }, // 23 LdStLFD
  { 1, 184, 185, 0, 0 }, // 24 LdStLFDU
  { 1, 184, 185, 0, 0 }, // 25 LdStLHA
  { 1, 184, 185, 0, 0 }, // 26 LdStLHAU
  { 1, 185, 186, 0, 0 }, // 27 LdStLMW
  { 1, 184, 185, 0, 0 }, // 28 LdStLWA
  { 1, 183, 184, 0, 0 }, // 29 LdStLWARX
  { 1, 186, 187, 0, 0 }, // 30 BrMCR
  { 1, 187, 188, 0, 0 }, // 31 SprMFCR
  { 1, 188, 189, 0, 0 }, // 32 SprMFSPR
  { 1, 189, 190, 0, 0 }, // 33 IntMFFS
  { 1, 190, 191, 0, 0 }, // 34 SprMFTB
  { 1, 175, 176, 0, 0 }, // 35 LdStStore
  { 1, 191, 192, 0, 0 }, // 36 BrMCRX
  { 1, 192, 193, 0, 0 }, // 37 SprMTSPR
  { 1, 178, 179, 0, 0 }, // 38 IntMTFSB0
  { 1, 193, 194, 0, 0 }, // 39 IntMulHW
  { 1, 193, 194, 0, 0 }, // 40 IntMulHWU
  { 1, 194, 195, 0, 0 }, // 41 IntMulHD
  { 1, 195, 196, 0, 0 }, // 42 IntMulLI
  { 1, 171, 172, 0, 0 }, // 43 IntRotateD
  { 1, 171, 172, 0, 0 }, // 44 IntRotateDI
  { 1, 195, 196, 0, 0 }, // 45 IntRotate
  { 1, 171, 172, 0, 0 }, // 46 IntShift
  { 1, 175, 176, 0, 0 }, // 47 LdStStoreUpd
  { 1, 175, 176, 0, 0 }, // 48 LdStSTD
  { 1, 183, 184, 0, 0 }, // 49 LdStSTDCX
  { 1, 175, 176, 0, 0 }, // 50 LdStSTDU
  { 1, 196, 197, 0, 0 }, // 51 LdStSTFD
  { 1, 196, 197, 0, 0 }, // 52 LdStSTFDU
  { 1, 183, 184, 0, 0 }, // 53 LdStSTWCX
  { 1, 197, 198, 0, 0 }, // 54 LdStSync
  { 1, 198, 199, 0, 0 }, // 55 IntTrapD
  { 1, 198, 199, 0, 0 }, // 56 IntTrapW
  { 1, 199, 200, 0, 0 }, // 57 VecFP
  { 1, 200, 201, 0, 0 }, // 58 VecGeneral
  { 1, 201, 202, 0, 0 }, // 59 VecFPCompare
  { 1, 202, 203, 0, 0 }, // 60 VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary PPCA2Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 203, 215, 114, 117 }, // 1 IntSimple
  { 1, 203, 215, 117, 120 }, // 2 IntGeneral
  { 1, 203, 215, 120, 123 }, // 3 BrB
  { 1, 203, 215, 123, 126 }, // 4 IntCompare
  { 1, 203, 215, 126, 129 }, // 5 BrCR
  { 1, 203, 215, 129, 131 }, // 6 LdStDCBF
  { 0, 0, 0, 0, 0 }, // 7 IntDivD
  { 1, 215, 227, 131, 134 }, // 8 IntDivW
  { 1, 203, 215, 134, 136 }, // 9 LdStLoad
  { 1, 227, 239, 136, 139 }, // 10 FPGeneral
  { 1, 227, 239, 139, 142 }, // 11 FPAddSub
  { 1, 227, 239, 142, 145 }, // 12 FPCompare
  { 1, 239, 251, 145, 148 }, // 13 FPDivD
  { 1, 251, 263, 148, 151 }, // 14 FPDivS
  { 1, 227, 239, 151, 155 }, // 15 FPFused
  { 1, 263, 275, 155, 157 }, // 16 FPSqrt
  { 1, 203, 215, 157, 159 }, // 17 LdStICBI
  { 1, 275, 287, 0, 0 }, // 18 SprISYNC
  { 1, 203, 215, 159, 161 }, // 19 LdStLoadUpd
  { 0, 0, 0, 0, 0 }, // 20 LdStLD
  { 0, 0, 0, 0, 0 }, // 21 LdStLDARX
  { 1, 203, 215, 161, 163 }, // 22 LdStLDU
  { 1, 203, 215, 163, 166 }, // 23 LdStLFD
  { 1, 203, 215, 166, 169 }, // 24 LdStLFDU
  { 1, 203, 215, 169, 171 }, // 25 LdStLHA
  { 1, 203, 215, 171, 173 }, // 26 LdStLHAU
  { 1, 203, 215, 173, 175 }, // 27 LdStLMW
  { 0, 0, 0, 0, 0 }, // 28 LdStLWA
  { 1, 287, 299, 175, 177 }, // 29 LdStLWARX
  { 1, 203, 215, 177, 180 }, // 30 BrMCR
  { 1, 203, 215, 180, 182 }, // 31 SprMFCR
  { 1, 203, 215, 182, 184 }, // 32 SprMFSPR
  { 1, 203, 215, 184, 187 }, // 33 IntMFFS
  { 1, 275, 287, 187, 189 }, // 34 SprMFTB
  { 1, 203, 215, 189, 191 }, // 35 LdStStore
  { 1, 203, 215, 191, 194 }, // 36 BrMCRX
  { 1, 203, 215, 194, 196 }, // 37 SprMTSPR
  { 1, 203, 215, 196, 199 }, // 38 IntMTFSB0
  { 1, 203, 215, 199, 202 }, // 39 IntMulHW
  { 1, 203, 215, 202, 205 }, // 40 IntMulHWU
  { 0, 0, 0, 0, 0 }, // 41 IntMulHD
  { 1, 203, 215, 205, 208 }, // 42 IntMulLI
  { 1, 203, 215, 208, 211 }, // 43 IntRotateD
  { 1, 203, 215, 211, 214 }, // 44 IntRotateDI
  { 1, 203, 215, 214, 217 }, // 45 IntRotate
  { 1, 203, 215, 217, 220 }, // 46 IntShift
  { 1, 203, 215, 220, 222 }, // 47 LdStStoreUpd
  { 1, 203, 215, 222, 224 }, // 48 LdStSTD
  { 1, 287, 299, 224, 226 }, // 49 LdStSTDCX
  { 1, 203, 215, 226, 228 }, // 50 LdStSTDU
  { 1, 203, 215, 228, 231 }, // 51 LdStSTFD
  { 1, 203, 215, 231, 234 }, // 52 LdStSTFDU
  { 1, 287, 299, 234, 236 }, // 53 LdStSTWCX
  { 1, 299, 311, 0, 0 }, // 54 LdStSync
  { 1, 203, 215, 236, 239 }, // 55 IntTrapD
  { 1, 203, 215, 239, 242 }, // 56 IntTrapW
  { 0, 0, 0, 0, 0 }, // 57 VecFP
  { 0, 0, 0, 0, 0 }, // 58 VecGeneral
  { 0, 0, 0, 0, 0 }, // 59 VecFPCompare
  { 0, 0, 0, 0, 0 }, // 60 VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary PPCE500mcItineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 311, 313, 242, 245 }, // 1 IntSimple
  { 1, 311, 313, 245, 248 }, // 2 IntGeneral
  { 1, 313, 315, 248, 250 }, // 3 BrB
  { 1, 311, 313, 250, 253 }, // 4 IntCompare
  { 1, 313, 315, 253, 256 }, // 5 BrCR
  { 1, 315, 317, 256, 258 }, // 6 LdStDCBF
  { 0, 0, 0, 0, 0 }, // 7 IntDivD
  { 1, 317, 320, 258, 261 }, // 8 IntDivW
  { 1, 315, 317, 261, 263 }, // 9 LdStLoad
  { 1, 320, 322, 263, 266 }, // 10 FPGeneral
  { 1, 322, 324, 266, 269 }, // 11 FPAddSub
  { 1, 320, 322, 269, 272 }, // 12 FPCompare
  { 1, 324, 326, 272, 275 }, // 13 FPDivD
  { 1, 326, 328, 275, 278 }, // 14 FPDivS
  { 1, 322, 324, 278, 282 }, // 15 FPFused
  { 0, 0, 0, 0, 0 }, // 16 FPSqrt
  { 1, 315, 317, 282, 284 }, // 17 LdStICBI
  { 0, 0, 0, 0, 0 }, // 18 SprISYNC
  { 2, 328, 331, 284, 286 }, // 19 LdStLoadUpd
  { 0, 0, 0, 0, 0 }, // 20 LdStLD
  { 0, 0, 0, 0, 0 }, // 21 LdStLDARX
  { 0, 0, 0, 0, 0 }, // 22 LdStLDU
  { 1, 315, 317, 286, 289 }, // 23 LdStLFD
  { 2, 328, 331, 289, 292 }, // 24 LdStLFDU
  { 1, 315, 317, 292, 294 }, // 25 LdStLHA
  { 1, 328, 331, 294, 296 }, // 26 LdStLHAU
  { 1, 315, 317, 296, 298 }, // 27 LdStLMW
  { 0, 0, 0, 0, 0 }, // 28 LdStLWA
  { 1, 331, 333, 298, 301 }, // 29 LdStLWARX
  { 1, 313, 315, 301, 303 }, // 30 BrMCR
  { 1, 333, 335, 303, 305 }, // 31 SprMFCR
  { 1, 311, 313, 305, 307 }, // 32 SprMFSPR
  { 1, 335, 337, 307, 308 }, // 33 IntMFFS
  { 1, 337, 339, 308, 310 }, // 34 SprMFTB
  { 1, 315, 317, 310, 312 }, // 35 LdStStore
  { 1, 311, 313, 312, 315 }, // 36 BrMCRX
  { 1, 311, 313, 315, 317 }, // 37 SprMTSPR
  { 1, 335, 337, 317, 320 }, // 38 IntMTFSB0
  { 1, 339, 341, 320, 323 }, // 39 IntMulHW
  { 1, 339, 341, 323, 326 }, // 40 IntMulHWU
  { 0, 0, 0, 0, 0 }, // 41 IntMulHD
  { 1, 339, 341, 326, 329 }, // 42 IntMulLI
  { 0, 0, 0, 0, 0 }, // 43 IntRotateD
  { 0, 0, 0, 0, 0 }, // 44 IntRotateDI
  { 1, 311, 313, 329, 332 }, // 45 IntRotate
  { 1, 311, 313, 332, 335 }, // 46 IntShift
  { 2, 328, 331, 335, 337 }, // 47 LdStStoreUpd
  { 0, 0, 0, 0, 0 }, // 48 LdStSTD
  { 0, 0, 0, 0, 0 }, // 49 LdStSTDCX
  { 0, 0, 0, 0, 0 }, // 50 LdStSTDU
  { 1, 315, 317, 337, 340 }, // 51 LdStSTFD
  { 2, 328, 331, 340, 343 }, // 52 LdStSTFDU
  { 1, 315, 317, 343, 345 }, // 53 LdStSTWCX
  { 1, 315, 317, 0, 0 }, // 54 LdStSync
  { 0, 0, 0, 0, 0 }, // 55 IntTrapD
  { 1, 341, 343, 345, 347 }, // 56 IntTrapW
  { 0, 0, 0, 0, 0 }, // 57 VecFP
  { 0, 0, 0, 0, 0 }, // 58 VecGeneral
  { 0, 0, 0, 0, 0 }, // 59 VecFPCompare
  { 0, 0, 0, 0, 0 }, // 60 VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary PPCE5500Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 343, 345, 347, 350 }, // 1 IntSimple
  { 1, 343, 345, 350, 353 }, // 2 IntGeneral
  { 1, 345, 347, 353, 355 }, // 3 BrB
  { 1, 343, 345, 355, 358 }, // 4 IntCompare
  { 1, 345, 347, 358, 361 }, // 5 BrCR
  { 1, 347, 349, 361, 363 }, // 6 LdStDCBF
  { 1, 349, 352, 363, 366 }, // 7 IntDivD
  { 1, 352, 355, 366, 369 }, // 8 IntDivW
  { 1, 347, 349, 369, 371 }, // 9 LdStLoad
  { 1, 355, 357, 371, 374 }, // 10 FPGeneral
  { 1, 355, 357, 374, 377 }, // 11 FPAddSub
  { 1, 355, 357, 377, 380 }, // 12 FPCompare
  { 1, 357, 359, 380, 383 }, // 13 FPDivD
  { 1, 359, 361, 383, 386 }, // 14 FPDivS
  { 1, 355, 357, 386, 390 }, // 15 FPFused
  { 0, 0, 0, 0, 0 }, // 16 FPSqrt
  { 1, 347, 349, 390, 392 }, // 17 LdStICBI
  { 0, 0, 0, 0, 0 }, // 18 SprISYNC
  { 2, 361, 364, 392, 394 }, // 19 LdStLoadUpd
  { 1, 347, 349, 394, 396 }, // 20 LdStLD
  { 1, 364, 366, 396, 398 }, // 21 LdStLDARX
  { 2, 361, 364, 398, 400 }, // 22 LdStLDU
  { 2, 347, 349, 400, 403 }, // 23 LdStLFD
  { 2, 361, 364, 403, 406 }, // 24 LdStLFDU
  { 1, 347, 349, 406, 408 }, // 25 LdStLHA
  { 2, 361, 364, 408, 410 }, // 26 LdStLHAU
  { 1, 366, 368, 410, 412 }, // 27 LdStLMW
  { 0, 0, 0, 0, 0 }, // 28 LdStLWA
  { 1, 364, 366, 412, 415 }, // 29 LdStLWARX
  { 1, 345, 347, 415, 417 }, // 30 BrMCR
  { 1, 368, 370, 417, 419 }, // 31 SprMFCR
  { 1, 370, 372, 419, 420 }, // 32 SprMFSPR
  { 1, 355, 357, 420, 421 }, // 33 IntMFFS
  { 1, 372, 374, 421, 423 }, // 34 SprMFTB
  { 1, 347, 349, 423, 425 }, // 35 LdStStore
  { 1, 370, 372, 425, 428 }, // 36 BrMCRX
  { 1, 343, 345, 428, 429 }, // 37 SprMTSPR
  { 1, 374, 376, 429, 432 }, // 38 IntMTFSB0
  { 1, 376, 379, 432, 435 }, // 39 IntMulHW
  { 1, 376, 379, 435, 438 }, // 40 IntMulHWU
  { 1, 379, 382, 438, 441 }, // 41 IntMulHD
  { 1, 379, 382, 441, 444 }, // 42 IntMulLI
  { 1, 382, 384, 444, 447 }, // 43 IntRotateD
  { 1, 343, 345, 447, 450 }, // 44 IntRotateDI
  { 1, 343, 345, 450, 453 }, // 45 IntRotate
  { 1, 382, 384, 453, 456 }, // 46 IntShift
  { 2, 361, 364, 456, 458 }, // 47 LdStStoreUpd
  { 1, 347, 349, 458, 460 }, // 48 LdStSTD
  { 1, 347, 349, 460, 462 }, // 49 LdStSTDCX
  { 2, 361, 364, 462, 464 }, // 50 LdStSTDU
  { 1, 347, 349, 464, 467 }, // 51 LdStSTFD
  { 2, 361, 364, 467, 470 }, // 52 LdStSTFDU
  { 1, 347, 349, 470, 472 }, // 53 LdStSTWCX
  { 1, 347, 349, 0, 0 }, // 54 LdStSync
  { 0, 0, 0, 0, 0 }, // 55 IntTrapD
  { 1, 384, 386, 472, 474 }, // 56 IntTrapW
  { 0, 0, 0, 0, 0 }, // 57 VecFP
  { 0, 0, 0, 0, 0 }, // 58 VecGeneral
  { 0, 0, 0, 0, 0 }, // 59 VecFPCompare
  { 0, 0, 0, 0, 0 }, // 60 VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry PPCWriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // PPCWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry PPCWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // PPCWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry PPCReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // PPCReadAdvanceTable

static const llvm::MCSchedModel NoSchedModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  0, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  NoItineraries);

static const llvm::MCSchedModel PPC440ItinerariesModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  1, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  PPC440Itineraries);

static const llvm::MCSchedModel G3ItinerariesModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  2, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  G3Itineraries);

static const llvm::MCSchedModel G4ItinerariesModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  3, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  G4Itineraries);

static const llvm::MCSchedModel G4PlusItinerariesModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  4, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  G4PlusItineraries);

static const llvm::MCSchedModel G5Model(
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  3, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  16, // MispredictPenalty
  5, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  G5Itineraries);

static const llvm::MCSchedModel PPCA2Model(
  1, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  6, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  13, // MispredictPenalty
  6, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  PPCA2Itineraries);

static const llvm::MCSchedModel PPCE500mcModel(
  2, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  5, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  7, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  PPCE500mcItineraries);

static const llvm::MCSchedModel PPCE5500Model(
  2, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  6, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  8, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  PPCE5500Itineraries);

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV PPCProcSchedKV[] = {
  { "440", (const void *)&PPC440ItinerariesModel },
  { "450", (const void *)&PPC440ItinerariesModel },
  { "601", (const void *)&G3ItinerariesModel },
  { "602", (const void *)&G3ItinerariesModel },
  { "603", (const void *)&G3ItinerariesModel },
  { "603e", (const void *)&G3ItinerariesModel },
  { "603ev", (const void *)&G3ItinerariesModel },
  { "604", (const void *)&G3ItinerariesModel },
  { "604e", (const void *)&G3ItinerariesModel },
  { "620", (const void *)&G3ItinerariesModel },
  { "7400", (const void *)&G4ItinerariesModel },
  { "7450", (const void *)&G4PlusItinerariesModel },
  { "750", (const void *)&G4ItinerariesModel },
  { "970", (const void *)&G5Model },
  { "a2", (const void *)&PPCA2Model },
  { "a2q", (const void *)&PPCA2Model },
  { "e500mc", (const void *)&PPCE500mcModel },
  { "e5500", (const void *)&PPCE5500Model },
  { "g3", (const void *)&G3ItinerariesModel },
  { "g4", (const void *)&G4ItinerariesModel },
  { "g4+", (const void *)&G4PlusItinerariesModel },
  { "g5", (const void *)&G5Model },
  { "generic", (const void *)&G3ItinerariesModel },
  { "ppc", (const void *)&G3ItinerariesModel },
  { "ppc64", (const void *)&G5Model },
  { "ppc64le", (const void *)&G5Model },
  { "pwr3", (const void *)&G5Model },
  { "pwr4", (const void *)&G5Model },
  { "pwr5", (const void *)&G5Model },
  { "pwr5x", (const void *)&G5Model },
  { "pwr6", (const void *)&G5Model },
  { "pwr6x", (const void *)&G5Model },
  { "pwr7", (const void *)&G5Model }
};
#undef DBGFIELD
static inline void InitPPCMCSubtargetInfo(MCSubtargetInfo *II, StringRef TT, StringRef CPU, StringRef FS) {
  II->InitMCSubtargetInfo(TT, CPU, FS, PPCFeatureKV, PPCSubTypeKV, 
                      PPCProcSchedKV, PPCWriteProcResTable, PPCWriteLatencyTable, PPCReadAdvanceTable, 
                      PPCStages, PPCOperandCycles, PPCForwardingPaths, 19, 33);
}

} // End llvm namespace 
#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"
// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::PPCSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  uint64_t Bits = getFeatureBits();
  if ((Bits & PPC::Directive32) != 0 && DarwinDirective < PPC::DIR_32) DarwinDirective = PPC::DIR_32;
  if ((Bits & PPC::Directive64) != 0 && DarwinDirective < PPC::DIR_64) DarwinDirective = PPC::DIR_64;
  if ((Bits & PPC::Directive440) != 0 && DarwinDirective < PPC::DIR_440) DarwinDirective = PPC::DIR_440;
  if ((Bits & PPC::Directive601) != 0 && DarwinDirective < PPC::DIR_601) DarwinDirective = PPC::DIR_601;
  if ((Bits & PPC::Directive602) != 0 && DarwinDirective < PPC::DIR_602) DarwinDirective = PPC::DIR_602;
  if ((Bits & PPC::Directive603) != 0 && DarwinDirective < PPC::DIR_603) DarwinDirective = PPC::DIR_603;
  if ((Bits & PPC::Directive604) != 0 && DarwinDirective < PPC::DIR_603) DarwinDirective = PPC::DIR_603;
  if ((Bits & PPC::Directive620) != 0 && DarwinDirective < PPC::DIR_603) DarwinDirective = PPC::DIR_603;
  if ((Bits & PPC::Directive750) != 0 && DarwinDirective < PPC::DIR_750) DarwinDirective = PPC::DIR_750;
  if ((Bits & PPC::Directive970) != 0 && DarwinDirective < PPC::DIR_970) DarwinDirective = PPC::DIR_970;
  if ((Bits & PPC::Directive7400) != 0 && DarwinDirective < PPC::DIR_7400) DarwinDirective = PPC::DIR_7400;
  if ((Bits & PPC::DirectiveA2) != 0 && DarwinDirective < PPC::DIR_A2) DarwinDirective = PPC::DIR_A2;
  if ((Bits & PPC::DirectiveE500mc) != 0 && DarwinDirective < PPC::DIR_E500mc) DarwinDirective = PPC::DIR_E500mc;
  if ((Bits & PPC::DirectiveE5500) != 0 && DarwinDirective < PPC::DIR_E5500) DarwinDirective = PPC::DIR_E5500;
  if ((Bits & PPC::DirectivePwr3) != 0 && DarwinDirective < PPC::DIR_PWR3) DarwinDirective = PPC::DIR_PWR3;
  if ((Bits & PPC::DirectivePwr4) != 0 && DarwinDirective < PPC::DIR_PWR4) DarwinDirective = PPC::DIR_PWR4;
  if ((Bits & PPC::DirectivePwr5) != 0 && DarwinDirective < PPC::DIR_PWR5) DarwinDirective = PPC::DIR_PWR5;
  if ((Bits & PPC::DirectivePwr5x) != 0 && DarwinDirective < PPC::DIR_PWR5X) DarwinDirective = PPC::DIR_PWR5X;
  if ((Bits & PPC::DirectivePwr6) != 0 && DarwinDirective < PPC::DIR_PWR6) DarwinDirective = PPC::DIR_PWR6;
  if ((Bits & PPC::DirectivePwr6x) != 0 && DarwinDirective < PPC::DIR_PWR6X) DarwinDirective = PPC::DIR_PWR6X;
  if ((Bits & PPC::DirectivePwr7) != 0 && DarwinDirective < PPC::DIR_PWR7) DarwinDirective = PPC::DIR_PWR7;
  if ((Bits & PPC::Feature64Bit) != 0) Has64BitSupport = true;
  if ((Bits & PPC::Feature64BitRegs) != 0) Use64BitRegs = true;
  if ((Bits & PPC::FeatureAltivec) != 0) HasAltivec = true;
  if ((Bits & PPC::FeatureBookE) != 0) IsBookE = true;
  if ((Bits & PPC::FeatureFPCVT) != 0) HasFPCVT = true;
  if ((Bits & PPC::FeatureFPRND) != 0) HasFPRND = true;
  if ((Bits & PPC::FeatureFRE) != 0) HasFRE = true;
  if ((Bits & PPC::FeatureFRES) != 0) HasFRES = true;
  if ((Bits & PPC::FeatureFRSQRTE) != 0) HasFRSQRTE = true;
  if ((Bits & PPC::FeatureFRSQRTES) != 0) HasFRSQRTES = true;
  if ((Bits & PPC::FeatureFSqrt) != 0) HasFSQRT = true;
  if ((Bits & PPC::FeatureISEL) != 0) HasISEL = true;
  if ((Bits & PPC::FeatureLDBRX) != 0) HasLDBRX = true;
  if ((Bits & PPC::FeatureLFIWAX) != 0) HasLFIWAX = true;
  if ((Bits & PPC::FeatureMFOCRF) != 0) HasMFOCRF = true;
  if ((Bits & PPC::FeaturePOPCNTD) != 0) HasPOPCNTD = true;
  if ((Bits & PPC::FeatureQPX) != 0) HasQPX = true;
  if ((Bits & PPC::FeatureRecipPrec) != 0) HasRecipPrec = true;
  if ((Bits & PPC::FeatureSTFIWX) != 0) HasSTFIWX = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER
namespace llvm {
class DFAPacketizer;
struct PPCGenSubtargetInfo : public TargetSubtargetInfo {
  explicit PPCGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS);
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
extern const llvm::SubtargetFeatureKV PPCFeatureKV[];
extern const llvm::SubtargetFeatureKV PPCSubTypeKV[];
extern const llvm::SubtargetInfoKV PPCProcSchedKV[];
extern const llvm::MCWriteProcResEntry PPCWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry PPCWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry PPCReadAdvanceTable[];
extern const llvm::InstrStage PPCStages[];
extern const unsigned PPCOperandCycles[];
extern const unsigned PPCForwardingPaths[];
PPCGenSubtargetInfo::PPCGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo() {
  InitMCSubtargetInfo(TT, CPU, FS, PPCFeatureKV, PPCSubTypeKV, 
                      PPCProcSchedKV, PPCWriteProcResTable, PPCWriteLatencyTable, PPCReadAdvanceTable, 
                      PPCStages, PPCOperandCycles, PPCForwardingPaths, 19, 33);
}

unsigned PPCGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // PPCGenSubtargetInfo::resolveSchedClass
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_CTOR

