/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*DAG Instruction Selector for the Mips target                                *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

// *** NOTE: This file is #included into the middle of the target
// *** instruction selector class.  These functions are really methods.

// The main instruction selector code.
SDNode *SelectCode(SDNode *N) {
  // Some target values are emitted as 2 bytes, TARGET_VAL handles
  // this.
  #define TARGET_VAL(X) X & 255, unsigned(X) >> 8
  static const unsigned char MatcherTable[] = {
/*0*/     OPC_SwitchOpcode /*126 cases */, 54|128,11/*1462*/,  TARGET_VAL(ISD::LOAD),// ->1467
/*5*/       OPC_RecordMemRef,
/*6*/       OPC_RecordNode,   // #0 = 'ld' chained node
/*7*/       OPC_Scope, 123, /*->132*/ // 5 children in Scope
/*9*/         OPC_RecordChild1, // #1 = $a
/*10*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*12*/        OPC_CheckType, MVT::i32,
/*14*/        OPC_Scope, 19, /*->35*/ // 6 children in Scope
/*16*/          OPC_CheckPredicate, 1, // Predicate_zextload
/*18*/          OPC_CheckPredicate, 2, // Predicate_zextloadi8
/*20*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*22*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*25*/          OPC_EmitMergeInputChains1_0,
/*26*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LBu), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 53
                // Dst: (LBu:i32 addrRegImm:i32:$a)
/*35*/        /*Scope*/ 19, /*->55*/
/*36*/          OPC_CheckPredicate, 3, // Predicate_sextload
/*38*/          OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*40*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*42*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*45*/          OPC_EmitMergeInputChains1_0,
/*46*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LH), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 53
                // Dst: (LH:i32 addrRegImm:i32:$a)
/*55*/        /*Scope*/ 17, /*->73*/
/*56*/          OPC_CheckPredicate, 5, // Predicate_load
/*58*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*60*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*63*/          OPC_EmitMergeInputChains1_0,
/*64*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LW), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 53
                // Dst: (LW:i32 addrRegImm:i32:$a)
/*73*/        /*Scope*/ 19, /*->93*/
/*74*/          OPC_CheckPredicate, 1, // Predicate_zextload
/*76*/          OPC_CheckPredicate, 2, // Predicate_zextloadi8
/*78*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*80*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*83*/          OPC_EmitMergeInputChains1_0,
/*84*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LBu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 53
                // Dst: (LBu_P8:i32 addrRegImm:i64:$a)
/*93*/        /*Scope*/ 19, /*->113*/
/*94*/          OPC_CheckPredicate, 3, // Predicate_sextload
/*96*/          OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*98*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*100*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*103*/         OPC_EmitMergeInputChains1_0,
/*104*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LH_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 53
                // Dst: (LH_P8:i32 addrRegImm:i64:$a)
/*113*/       /*Scope*/ 17, /*->131*/
/*114*/         OPC_CheckPredicate, 5, // Predicate_load
/*116*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*118*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*121*/         OPC_EmitMergeInputChains1_0,
/*122*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LW_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 53
                // Dst: (LW_P8:i32 addrRegImm:i64:$a)
/*131*/       0, /*End of Scope*/
/*132*/     /*Scope*/ 65, /*->198*/
/*133*/       OPC_MoveChild, 1,
/*135*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*138*/       OPC_RecordChild0, // #1 = $base
/*139*/       OPC_RecordChild1, // #2 = $index
/*140*/       OPC_CheckType, MVT::i32,
/*142*/       OPC_MoveParent,
/*143*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*145*/       OPC_CheckType, MVT::i32,
/*147*/       OPC_Scope, 16, /*->165*/ // 3 children in Scope
/*149*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*151*/         OPC_CheckPredicate, 2, // Predicate_zextloadi8
/*153*/         OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*155*/         OPC_EmitMergeInputChains1_0,
/*156*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LBUX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (ld:i32 (add:i32 i32:i32:$base, i32:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 27
                // Dst: (LBUX:i32 i32:i32:$base, i32:i32:$index)
/*165*/       /*Scope*/ 16, /*->182*/
/*166*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*168*/         OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*170*/         OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*172*/         OPC_EmitMergeInputChains1_0,
/*173*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LHX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (ld:i32 (add:i32 i32:i32:$base, i32:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 27
                // Dst: (LHX:i32 i32:i32:$base, i32:i32:$index)
/*182*/       /*Scope*/ 14, /*->197*/
/*183*/         OPC_CheckPredicate, 5, // Predicate_load
/*185*/         OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*187*/         OPC_EmitMergeInputChains1_0,
/*188*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LWX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (ld:i32 (add:i32 i32:i32:$base, i32:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 27
                // Dst: (LWX:i32 i32:i32:$base, i32:i32:$index)
/*197*/       0, /*End of Scope*/
/*198*/     /*Scope*/ 115|128,7/*1011*/, /*->1211*/
/*200*/       OPC_RecordChild1, // #1 = $addr
/*201*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*203*/       OPC_Scope, 22, /*->227*/ // 21 children in Scope
/*205*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*207*/         OPC_CheckPredicate, 6, // Predicate_sextloadi8
/*209*/         OPC_CheckType, MVT::i32,
/*211*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*213*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddr16:$addr #2 #3 #4
/*216*/         OPC_EmitMergeInputChains1_0,
/*217*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LbRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 addr16:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 16
                // Dst: (LbRxRyOffMemX16:i32 addr16:i32:$addr)
/*227*/       /*Scope*/ 22, /*->250*/
/*228*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*230*/         OPC_CheckPredicate, 2, // Predicate_zextloadi8
/*232*/         OPC_CheckType, MVT::i32,
/*234*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*236*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddr16:$addr #2 #3 #4
/*239*/         OPC_EmitMergeInputChains1_0,
/*240*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LbuRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 addr16:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 16
                // Dst: (LbuRxRyOffMemX16:i32 addr16:i32:$addr)
/*250*/       /*Scope*/ 22, /*->273*/
/*251*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*253*/         OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*255*/         OPC_CheckType, MVT::i32,
/*257*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*259*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddr16:$addr #2 #3 #4
/*262*/         OPC_EmitMergeInputChains1_0,
/*263*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LhRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 addr16:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 16
                // Dst: (LhRxRyOffMemX16:i32 addr16:i32:$addr)
/*273*/       /*Scope*/ 22, /*->296*/
/*274*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*276*/         OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*278*/         OPC_CheckType, MVT::i32,
/*280*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*282*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddr16:$addr #2 #3 #4
/*285*/         OPC_EmitMergeInputChains1_0,
/*286*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LhuRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 addr16:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 16
                // Dst: (LhuRxRyOffMemX16:i32 addr16:i32:$addr)
/*296*/       /*Scope*/ 20, /*->317*/
/*297*/         OPC_CheckPredicate, 5, // Predicate_load
/*299*/         OPC_CheckType, MVT::i32,
/*301*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*303*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddr16:$addr #2 #3 #4
/*306*/         OPC_EmitMergeInputChains1_0,
/*307*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LwRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 addr16:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                // Dst: (LwRxRyOffMemX16:i32 addr16:i32:$addr)
/*317*/       /*Scope*/ 44, /*->362*/
/*318*/         OPC_CheckPredicate, 8, // Predicate_extload
/*320*/         OPC_CheckType, MVT::i32,
/*322*/         OPC_Scope, 18, /*->342*/ // 2 children in Scope
/*324*/           OPC_CheckPredicate, 9, // Predicate_extloadi8
/*326*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*328*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddr16:$src #2 #3 #4
/*331*/           OPC_EmitMergeInputChains1_0,
/*332*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LbuRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 addr16:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 16
                  // Dst: (LbuRxRyOffMemX16:i32 addr16:i32:$src)
/*342*/         /*Scope*/ 18, /*->361*/
/*343*/           OPC_CheckPredicate, 10, // Predicate_extloadi16
/*345*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*347*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddr16:$src #2 #3 #4
/*350*/           OPC_EmitMergeInputChains1_0,
/*351*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LhuRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 addr16:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 16
                  // Dst: (LhuRxRyOffMemX16:i32 addr16:i32:$src)
/*361*/         0, /*End of Scope*/
/*362*/       /*Scope*/ 40, /*->403*/
/*363*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*365*/         OPC_CheckPredicate, 6, // Predicate_sextloadi8
/*367*/         OPC_CheckType, MVT::i32,
/*369*/         OPC_Scope, 15, /*->386*/ // 2 children in Scope
/*371*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*373*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*376*/           OPC_EmitMergeInputChains1_0,
/*377*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LB:i32 addr:i32:$addr)
/*386*/         /*Scope*/ 15, /*->402*/
/*387*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*389*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*392*/           OPC_EmitMergeInputChains1_0,
/*393*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LB_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LB_P8:i32 addr:i64:$addr)
/*402*/         0, /*End of Scope*/
/*403*/       /*Scope*/ 40, /*->444*/
/*404*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*406*/         OPC_CheckPredicate, 2, // Predicate_zextloadi8
/*408*/         OPC_CheckType, MVT::i32,
/*410*/         OPC_Scope, 15, /*->427*/ // 2 children in Scope
/*412*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*414*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*417*/           OPC_EmitMergeInputChains1_0,
/*418*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBu:i32 addrDefault:i32:$addr)
/*427*/         /*Scope*/ 15, /*->443*/
/*428*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*430*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*433*/           OPC_EmitMergeInputChains1_0,
/*434*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBu_P8:i32 addrDefault:i64:$addr)
/*443*/         0, /*End of Scope*/
/*444*/       /*Scope*/ 40, /*->485*/
/*445*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*447*/         OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*449*/         OPC_CheckType, MVT::i32,
/*451*/         OPC_Scope, 15, /*->468*/ // 2 children in Scope
/*453*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*455*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*458*/           OPC_EmitMergeInputChains1_0,
/*459*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LH:i32 addrDefault:i32:$addr)
/*468*/         /*Scope*/ 15, /*->484*/
/*469*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*471*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*474*/           OPC_EmitMergeInputChains1_0,
/*475*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LH_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LH_P8:i32 addrDefault:i64:$addr)
/*484*/         0, /*End of Scope*/
/*485*/       /*Scope*/ 40, /*->526*/
/*486*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*488*/         OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*490*/         OPC_CheckType, MVT::i32,
/*492*/         OPC_Scope, 15, /*->509*/ // 2 children in Scope
/*494*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*496*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*499*/           OPC_EmitMergeInputChains1_0,
/*500*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LHu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LHu:i32 addr:i32:$addr)
/*509*/         /*Scope*/ 15, /*->525*/
/*510*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*512*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*515*/           OPC_EmitMergeInputChains1_0,
/*516*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LHu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LHu_P8:i32 addr:i64:$addr)
/*525*/         0, /*End of Scope*/
/*526*/       /*Scope*/ 38, /*->565*/
/*527*/         OPC_CheckPredicate, 5, // Predicate_load
/*529*/         OPC_CheckType, MVT::i32,
/*531*/         OPC_Scope, 15, /*->548*/ // 2 children in Scope
/*533*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*535*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*538*/           OPC_EmitMergeInputChains1_0,
/*539*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LW), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LW:i32 addrDefault:i32:$addr)
/*548*/         /*Scope*/ 15, /*->564*/
/*549*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*551*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*554*/           OPC_EmitMergeInputChains1_0,
/*555*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LW_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LW_P8:i32 addrDefault:i64:$addr)
/*564*/         0, /*End of Scope*/
/*565*/       /*Scope*/ 114, /*->680*/
/*566*/         OPC_CheckPredicate, 8, // Predicate_extload
/*568*/         OPC_CheckType, MVT::i32,
/*570*/         OPC_Scope, 17, /*->589*/ // 6 children in Scope
/*572*/           OPC_CheckPredicate, 11, // Predicate_extloadi1
/*574*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*576*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*579*/           OPC_EmitMergeInputChains1_0,
/*580*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBu:i32 addr:i32:$src)
/*589*/         /*Scope*/ 17, /*->607*/
/*590*/           OPC_CheckPredicate, 9, // Predicate_extloadi8
/*592*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*594*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*597*/           OPC_EmitMergeInputChains1_0,
/*598*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBu:i32 addr:i32:$src)
/*607*/         /*Scope*/ 17, /*->625*/
/*608*/           OPC_CheckPredicate, 10, // Predicate_extloadi16
/*610*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*612*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*615*/           OPC_EmitMergeInputChains1_0,
/*616*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LHu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHu:i32 addr:i32:$src)
/*625*/         /*Scope*/ 17, /*->643*/
/*626*/           OPC_CheckPredicate, 11, // Predicate_extloadi1
/*628*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*630*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*633*/           OPC_EmitMergeInputChains1_0,
/*634*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBu_P8:i32 addr:i64:$src)
/*643*/         /*Scope*/ 17, /*->661*/
/*644*/           OPC_CheckPredicate, 9, // Predicate_extloadi8
/*646*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*648*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*651*/           OPC_EmitMergeInputChains1_0,
/*652*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBu_P8:i32 addr:i64:$src)
/*661*/         /*Scope*/ 17, /*->679*/
/*662*/           OPC_CheckPredicate, 10, // Predicate_extloadi16
/*664*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*666*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*669*/           OPC_EmitMergeInputChains1_0,
/*670*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LHu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHu_P8:i32 addr:i64:$src)
/*679*/         0, /*End of Scope*/
/*680*/       /*Scope*/ 40, /*->721*/
/*681*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*683*/         OPC_CheckPredicate, 6, // Predicate_sextloadi8
/*685*/         OPC_CheckType, MVT::i64,
/*687*/         OPC_Scope, 15, /*->704*/ // 2 children in Scope
/*689*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*691*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*694*/           OPC_EmitMergeInputChains1_0,
/*695*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LB64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LB64:i64 addr:i32:$addr)
/*704*/         /*Scope*/ 15, /*->720*/
/*705*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*707*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*710*/           OPC_EmitMergeInputChains1_0,
/*711*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LB64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LB64_P8:i64 addr:i64:$addr)
/*720*/         0, /*End of Scope*/
/*721*/       /*Scope*/ 40, /*->762*/
/*722*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*724*/         OPC_CheckPredicate, 2, // Predicate_zextloadi8
/*726*/         OPC_CheckType, MVT::i64,
/*728*/         OPC_Scope, 15, /*->745*/ // 2 children in Scope
/*730*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*732*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*735*/           OPC_EmitMergeInputChains1_0,
/*736*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBu64:i64 addr:i32:$addr)
/*745*/         /*Scope*/ 15, /*->761*/
/*746*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*748*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*751*/           OPC_EmitMergeInputChains1_0,
/*752*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBu64_P8:i64 addr:i64:$addr)
/*761*/         0, /*End of Scope*/
/*762*/       /*Scope*/ 40, /*->803*/
/*763*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*765*/         OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*767*/         OPC_CheckType, MVT::i64,
/*769*/         OPC_Scope, 15, /*->786*/ // 2 children in Scope
/*771*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*773*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*776*/           OPC_EmitMergeInputChains1_0,
/*777*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LH64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LH64:i64 addr:i32:$addr)
/*786*/         /*Scope*/ 15, /*->802*/
/*787*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*789*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*792*/           OPC_EmitMergeInputChains1_0,
/*793*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LH64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LH64_P8:i64 addr:i64:$addr)
/*802*/         0, /*End of Scope*/
/*803*/       /*Scope*/ 40, /*->844*/
/*804*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*806*/         OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*808*/         OPC_CheckType, MVT::i64,
/*810*/         OPC_Scope, 15, /*->827*/ // 2 children in Scope
/*812*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*814*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*817*/           OPC_EmitMergeInputChains1_0,
/*818*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LHu64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LHu64:i64 addr:i32:$addr)
/*827*/         /*Scope*/ 15, /*->843*/
/*828*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*830*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*833*/           OPC_EmitMergeInputChains1_0,
/*834*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LHu64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LHu64_P8:i64 addr:i64:$addr)
/*843*/         0, /*End of Scope*/
/*844*/       /*Scope*/ 40, /*->885*/
/*845*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*847*/         OPC_CheckPredicate, 12, // Predicate_sextloadi32
/*849*/         OPC_CheckType, MVT::i64,
/*851*/         OPC_Scope, 15, /*->868*/ // 2 children in Scope
/*853*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*855*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*858*/           OPC_EmitMergeInputChains1_0,
/*859*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LW64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                  // Dst: (LW64:i64 addr:i32:$addr)
/*868*/         /*Scope*/ 15, /*->884*/
/*869*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*871*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*874*/           OPC_EmitMergeInputChains1_0,
/*875*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LW64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                  // Dst: (LW64_P8:i64 addr:i64:$addr)
/*884*/         0, /*End of Scope*/
/*885*/       /*Scope*/ 40, /*->926*/
/*886*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*888*/         OPC_CheckPredicate, 13, // Predicate_zextloadi32
/*890*/         OPC_CheckType, MVT::i64,
/*892*/         OPC_Scope, 15, /*->909*/ // 2 children in Scope
/*894*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*896*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*899*/           OPC_EmitMergeInputChains1_0,
/*900*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LWu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                  // Dst: (LWu:i64 addr:i32:$addr)
/*909*/         /*Scope*/ 15, /*->925*/
/*910*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*912*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*915*/           OPC_EmitMergeInputChains1_0,
/*916*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LWu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                  // Dst: (LWu_P8:i64 addr:i64:$addr)
/*925*/         0, /*End of Scope*/
/*926*/       /*Scope*/ 38, /*->965*/
/*927*/         OPC_CheckPredicate, 5, // Predicate_load
/*929*/         OPC_CheckType, MVT::i64,
/*931*/         OPC_Scope, 15, /*->948*/ // 2 children in Scope
/*933*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*935*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*938*/           OPC_EmitMergeInputChains1_0,
/*939*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LD), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LD:i64 addr:i32:$addr)
/*948*/         /*Scope*/ 15, /*->964*/
/*949*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*951*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*954*/           OPC_EmitMergeInputChains1_0,
/*955*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LD_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LD_P8:i64 addr:i64:$addr)
/*964*/         0, /*End of Scope*/
/*965*/       /*Scope*/ 22|128,1/*150*/, /*->1117*/
/*967*/         OPC_CheckPredicate, 8, // Predicate_extload
/*969*/         OPC_CheckType, MVT::i64,
/*971*/         OPC_Scope, 17, /*->990*/ // 8 children in Scope
/*973*/           OPC_CheckPredicate, 11, // Predicate_extloadi1
/*975*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*977*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*980*/           OPC_EmitMergeInputChains1_0,
/*981*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LB64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LB64:i64 addr:i32:$src)
/*990*/         /*Scope*/ 17, /*->1008*/
/*991*/           OPC_CheckPredicate, 9, // Predicate_extloadi8
/*993*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*995*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*998*/           OPC_EmitMergeInputChains1_0,
/*999*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LB64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LB64:i64 addr:i32:$src)
/*1008*/        /*Scope*/ 17, /*->1026*/
/*1009*/          OPC_CheckPredicate, 10, // Predicate_extloadi16
/*1011*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1013*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*1016*/          OPC_EmitMergeInputChains1_0,
/*1017*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LH64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LH64:i64 addr:i32:$src)
/*1026*/        /*Scope*/ 17, /*->1044*/
/*1027*/          OPC_CheckPredicate, 14, // Predicate_extloadi32
/*1029*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1031*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*1034*/          OPC_EmitMergeInputChains1_0,
/*1035*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LW64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LW64:i64 addr:i32:$src)
/*1044*/        /*Scope*/ 17, /*->1062*/
/*1045*/          OPC_CheckPredicate, 11, // Predicate_extloadi1
/*1047*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1049*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*1052*/          OPC_EmitMergeInputChains1_0,
/*1053*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LB64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LB64_P8:i64 addr:i64:$src)
/*1062*/        /*Scope*/ 17, /*->1080*/
/*1063*/          OPC_CheckPredicate, 9, // Predicate_extloadi8
/*1065*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1067*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*1070*/          OPC_EmitMergeInputChains1_0,
/*1071*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LB64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LB64_P8:i64 addr:i64:$src)
/*1080*/        /*Scope*/ 17, /*->1098*/
/*1081*/          OPC_CheckPredicate, 10, // Predicate_extloadi16
/*1083*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1085*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*1088*/          OPC_EmitMergeInputChains1_0,
/*1089*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LH64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LH64_P8:i64 addr:i64:$src)
/*1098*/        /*Scope*/ 17, /*->1116*/
/*1099*/          OPC_CheckPredicate, 14, // Predicate_extloadi32
/*1101*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1103*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*1106*/          OPC_EmitMergeInputChains1_0,
/*1107*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LW64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LW64_P8:i64 addr:i64:$src)
/*1116*/        0, /*End of Scope*/
/*1117*/      /*Scope*/ 92, /*->1210*/
/*1118*/        OPC_CheckPredicate, 5, // Predicate_load
/*1120*/        OPC_SwitchType /*2 cases */, 34,  MVT::f32,// ->1157
/*1123*/          OPC_Scope, 15, /*->1140*/ // 2 children in Scope
/*1125*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1127*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*1130*/            OPC_EmitMergeInputChains1_0,
/*1131*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LWC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 53
                    // Dst: (LWC1_P8:f32 addrRegImm:i64:$a)
/*1140*/          /*Scope*/ 15, /*->1156*/
/*1141*/            OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1143*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*1146*/            OPC_EmitMergeInputChains1_0,
/*1147*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LWC1), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 53
                    // Dst: (LWC1:f32 addrRegImm:i32:$a)
/*1156*/          0, /*End of Scope*/
                /*SwitchType*/ 50,  MVT::f64,// ->1209
/*1159*/          OPC_Scope, 15, /*->1176*/ // 3 children in Scope
/*1161*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1163*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*1166*/            OPC_EmitMergeInputChains1_0,
/*1167*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LDC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f64 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 53
                    // Dst: (LDC164_P8:f64 addrRegImm:i64:$a)
/*1176*/          /*Scope*/ 15, /*->1192*/
/*1177*/            OPC_CheckPatternPredicate, 4, // (!Subtarget.isABI_N64()) && (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1179*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*1182*/            OPC_EmitMergeInputChains1_0,
/*1183*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LDC164), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f64 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 53
                    // Dst: (LDC164:f64 addrRegImm:i32:$a)
/*1192*/          /*Scope*/ 15, /*->1208*/
/*1193*/            OPC_CheckPatternPredicate, 5, // (!Subtarget.isABI_N64()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1195*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*1198*/            OPC_EmitMergeInputChains1_0,
/*1199*/            OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoLDC1), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f64 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 53
                    // Dst: (PseudoLDC1:f64 addrRegImm:i32:$a)
/*1208*/          0, /*End of Scope*/
                0, // EndSwitchType
/*1210*/      0, /*End of Scope*/
/*1211*/    /*Scope*/ 99, /*->1311*/
/*1212*/      OPC_MoveChild, 1,
/*1214*/      OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*1217*/      OPC_RecordChild0, // #1 = $base
/*1218*/      OPC_RecordChild1, // #2 = $index
/*1219*/      OPC_SwitchType /*2 cases */, 51,  MVT::i32,// ->1273
/*1222*/        OPC_MoveParent,
/*1223*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1225*/        OPC_CheckPredicate, 5, // Predicate_load
/*1227*/        OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->1242
/*1230*/          OPC_CheckPatternPredicate, 6, // (Subtarget.hasFPIdx()) && (Subtarget.hasStandardEncoding())
/*1232*/          OPC_EmitMergeInputChains1_0,
/*1233*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LWXC1), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:f32 (add:i32 GPR32Opnd:i32:$base, GPR32Opnd:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 27
                  // Dst: (LWXC1:f32 GPR32Opnd:i32:$base, GPR32Opnd:i32:$index)
                /*SwitchType*/ 28,  MVT::f64,// ->1272
/*1244*/          OPC_Scope, 12, /*->1258*/ // 2 children in Scope
/*1246*/            OPC_CheckPatternPredicate, 7, // (Subtarget.hasMips32r2()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1248*/            OPC_EmitMergeInputChains1_0,
/*1249*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LDXC1), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:f64 (add:i32 GPR32Opnd:i32:$base, GPR32Opnd:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 27
                    // Dst: (LDXC1:f64 GPR32Opnd:i32:$base, GPR32Opnd:i32:$index)
/*1258*/          /*Scope*/ 12, /*->1271*/
/*1259*/            OPC_CheckPatternPredicate, 8, // (Subtarget.hasMips64()) && (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1261*/            OPC_EmitMergeInputChains1_0,
/*1262*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LDXC164), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:f64 (add:i32 GPR32Opnd:i32:$base, GPR32Opnd:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 27
                    // Dst: (LDXC164:f64 GPR32Opnd:i32:$base, GPR32Opnd:i32:$index)
/*1271*/          0, /*End of Scope*/
                0, // EndSwitchType
              /*SwitchType*/ 35,  MVT::i64,// ->1310
/*1275*/        OPC_MoveParent,
/*1276*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1278*/        OPC_CheckPredicate, 5, // Predicate_load
/*1280*/        OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->1295
/*1283*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1285*/          OPC_EmitMergeInputChains1_0,
/*1286*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LWXC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:f32 (add:i64 GPR64Opnd:i64:$base, GPR64Opnd:i64:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 27
                  // Dst: (LWXC1_P8:f32 GPR64Opnd:i64:$base, GPR64Opnd:i64:$index)
                /*SwitchType*/ 12,  MVT::f64,// ->1309
/*1297*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1299*/          OPC_EmitMergeInputChains1_0,
/*1300*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LDXC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:f64 (add:i64 GPR64Opnd:i64:$base, GPR64Opnd:i64:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 27
                  // Dst: (LDXC164_P8:f64 GPR64Opnd:i64:$base, GPR64Opnd:i64:$index)
                0, // EndSwitchType
              0, // EndSwitchType
/*1311*/    /*Scope*/ 25|128,1/*153*/, /*->1466*/
/*1313*/      OPC_RecordChild1, // #1 = $addr
/*1314*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1316*/      OPC_CheckPredicate, 5, // Predicate_load
/*1318*/      OPC_SwitchType /*4 cases */, 34,  MVT::f32,// ->1355
/*1321*/        OPC_Scope, 15, /*->1338*/ // 2 children in Scope
/*1323*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1325*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*1328*/          OPC_EmitMergeInputChains1_0,
/*1329*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LWC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LWC1_P8:f32 addrDefault:i64:$addr)
/*1338*/        /*Scope*/ 15, /*->1354*/
/*1339*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1341*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*1344*/          OPC_EmitMergeInputChains1_0,
/*1345*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LWC1), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LWC1:f32 addrDefault:i32:$addr)
/*1354*/        0, /*End of Scope*/
              /*SwitchType*/ 50,  MVT::f64,// ->1407
/*1357*/        OPC_Scope, 15, /*->1374*/ // 3 children in Scope
/*1359*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1361*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*1364*/          OPC_EmitMergeInputChains1_0,
/*1365*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LDC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDC164_P8:f64 addrDefault:i64:$addr)
/*1374*/        /*Scope*/ 15, /*->1390*/
/*1375*/          OPC_CheckPatternPredicate, 4, // (!Subtarget.isABI_N64()) && (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1377*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*1380*/          OPC_EmitMergeInputChains1_0,
/*1381*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LDC164), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDC164:f64 addrDefault:i32:$addr)
/*1390*/        /*Scope*/ 15, /*->1406*/
/*1391*/          OPC_CheckPatternPredicate, 5, // (!Subtarget.isABI_N64()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1393*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*1396*/          OPC_EmitMergeInputChains1_0,
/*1397*/          OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoLDC1), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (PseudoLDC1:f64 addrDefault:i32:$addr)
/*1406*/        0, /*End of Scope*/
              /*SwitchType*/ 27,  MVT::v2i16,// ->1436
/*1409*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*1411*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$a #2 #3
/*1414*/        OPC_EmitMergeInputChains1_0,
/*1415*/        OPC_EmitNode, TARGET_VAL(Mips::LW), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*1424*/        OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*1427*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 4, 5, 
                // Src: (ld:v2i16 addr:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:v2i16 (LW:i32 addr:i32:$a), DSPRegs:i32)
              /*SwitchType*/ 27,  MVT::v4i8,// ->1465
/*1438*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*1440*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$a #2 #3
/*1443*/        OPC_EmitMergeInputChains1_0,
/*1444*/        OPC_EmitNode, TARGET_VAL(Mips::LW), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*1453*/        OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*1456*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 4, 5, 
                // Src: (ld:v4i8 addr:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:v4i8 (LW:i32 addr:i32:$a), DSPRegs:i32)
              0, // EndSwitchType
/*1466*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 36|128,6/*804*/,  TARGET_VAL(ISD::STORE),// ->2275
/*1471*/    OPC_RecordMemRef,
/*1472*/    OPC_RecordNode,   // #0 = 'st' chained node
/*1473*/    OPC_Scope, 93|128,1/*221*/, /*->1697*/ // 3 children in Scope
/*1476*/      OPC_RecordChild1, // #1 = $v
/*1477*/      OPC_Scope, 92, /*->1571*/ // 2 children in Scope
/*1479*/        OPC_CheckChild1Type, MVT::f32,
/*1481*/        OPC_Scope, 39, /*->1522*/ // 2 children in Scope
/*1483*/          OPC_RecordChild2, // #2 = $a
/*1484*/          OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1486*/          OPC_CheckPredicate, 16, // Predicate_store
/*1488*/          OPC_Scope, 15, /*->1505*/ // 2 children in Scope
/*1490*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1492*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectAddrRegImm:$a #3 #4
/*1495*/            OPC_EmitMergeInputChains1_0,
/*1496*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SWC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st f32:f32:$v, addrRegImm:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 53
                    // Dst: (SWC1_P8 f32:f32:$v, addrRegImm:i64:$a)
/*1505*/          /*Scope*/ 15, /*->1521*/
/*1506*/            OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1508*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectAddrRegImm:$a #3 #4
/*1511*/            OPC_EmitMergeInputChains1_0,
/*1512*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SWC1), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st f32:f32:$v, addrRegImm:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 53
                    // Dst: (SWC1 f32:f32:$v, addrRegImm:i32:$a)
/*1521*/          0, /*End of Scope*/
/*1522*/        /*Scope*/ 47, /*->1570*/
/*1523*/          OPC_MoveChild, 2,
/*1525*/          OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*1528*/          OPC_RecordChild0, // #2 = $base
/*1529*/          OPC_RecordChild1, // #3 = $index
/*1530*/          OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->1550
/*1533*/            OPC_MoveParent,
/*1534*/            OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1536*/            OPC_CheckPredicate, 16, // Predicate_store
/*1538*/            OPC_CheckPatternPredicate, 6, // (Subtarget.hasFPIdx()) && (Subtarget.hasStandardEncoding())
/*1540*/            OPC_EmitMergeInputChains1_0,
/*1541*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SWXC1), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (st FGR32RegsOpnd:f32:$fs, (add:i32 GPR32Opnd:i32:$base, GPR32Opnd:i32:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 27
                    // Dst: (SWXC1 FGR32RegsOpnd:f32:$fs, GPR32Opnd:i32:$base, GPR32Opnd:i32:$index)
                  /*SwitchType*/ 17,  MVT::i64,// ->1569
/*1552*/            OPC_MoveParent,
/*1553*/            OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1555*/            OPC_CheckPredicate, 16, // Predicate_store
/*1557*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1559*/            OPC_EmitMergeInputChains1_0,
/*1560*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SWXC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (st FGR32RegsOpnd:f32:$fs, (add:i64 GPR64Opnd:i64:$base, GPR64Opnd:i64:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 27
                    // Dst: (SWXC1_P8 FGR32RegsOpnd:f32:$fs, GPR64Opnd:i64:$base, GPR64Opnd:i64:$index)
                  0, // EndSwitchType
/*1570*/        0, /*End of Scope*/
/*1571*/      /*Scope*/ 124, /*->1696*/
/*1572*/        OPC_CheckChild1Type, MVT::f64,
/*1574*/        OPC_Scope, 55, /*->1631*/ // 2 children in Scope
/*1576*/          OPC_RecordChild2, // #2 = $a
/*1577*/          OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1579*/          OPC_CheckPredicate, 16, // Predicate_store
/*1581*/          OPC_Scope, 15, /*->1598*/ // 3 children in Scope
/*1583*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1585*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectAddrRegImm:$a #3 #4
/*1588*/            OPC_EmitMergeInputChains1_0,
/*1589*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SDC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st f64:f64:$v, addrRegImm:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 53
                    // Dst: (SDC164_P8 f64:f64:$v, addrRegImm:i64:$a)
/*1598*/          /*Scope*/ 15, /*->1614*/
/*1599*/            OPC_CheckPatternPredicate, 4, // (!Subtarget.isABI_N64()) && (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1601*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectAddrRegImm:$a #3 #4
/*1604*/            OPC_EmitMergeInputChains1_0,
/*1605*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SDC164), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st f64:f64:$v, addrRegImm:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 53
                    // Dst: (SDC164 f64:f64:$v, addrRegImm:i32:$a)
/*1614*/          /*Scope*/ 15, /*->1630*/
/*1615*/            OPC_CheckPatternPredicate, 5, // (!Subtarget.isABI_N64()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1617*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectAddrRegImm:$a #3 #4
/*1620*/            OPC_EmitMergeInputChains1_0,
/*1621*/            OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoSDC1), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st f64:f64:$v, addrRegImm:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 53
                    // Dst: (PseudoSDC1 f64:f64:$v, addrRegImm:i32:$a)
/*1630*/          0, /*End of Scope*/
/*1631*/        /*Scope*/ 63, /*->1695*/
/*1632*/          OPC_MoveChild, 2,
/*1634*/          OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*1637*/          OPC_RecordChild0, // #2 = $base
/*1638*/          OPC_RecordChild1, // #3 = $index
/*1639*/          OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->1675
/*1642*/            OPC_MoveParent,
/*1643*/            OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1645*/            OPC_CheckPredicate, 16, // Predicate_store
/*1647*/            OPC_Scope, 12, /*->1661*/ // 2 children in Scope
/*1649*/              OPC_CheckPatternPredicate, 7, // (Subtarget.hasMips32r2()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1651*/              OPC_EmitMergeInputChains1_0,
/*1652*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SDXC1), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (st AFGR64RegsOpnd:f64:$fs, (add:i32 GPR32Opnd:i32:$base, GPR32Opnd:i32:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 27
                      // Dst: (SDXC1 AFGR64RegsOpnd:f64:$fs, GPR32Opnd:i32:$base, GPR32Opnd:i32:$index)
/*1661*/            /*Scope*/ 12, /*->1674*/
/*1662*/              OPC_CheckPatternPredicate, 8, // (Subtarget.hasMips64()) && (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1664*/              OPC_EmitMergeInputChains1_0,
/*1665*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SDXC164), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (st FGR64RegsOpnd:f64:$fs, (add:i32 GPR32Opnd:i32:$base, GPR32Opnd:i32:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 27
                      // Dst: (SDXC164 FGR64RegsOpnd:f64:$fs, GPR32Opnd:i32:$base, GPR32Opnd:i32:$index)
/*1674*/            0, /*End of Scope*/
                  /*SwitchType*/ 17,  MVT::i64,// ->1694
/*1677*/            OPC_MoveParent,
/*1678*/            OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1680*/            OPC_CheckPredicate, 16, // Predicate_store
/*1682*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1684*/            OPC_EmitMergeInputChains1_0,
/*1685*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SDXC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (st FGR64RegsOpnd:f64:$fs, (add:i64 GPR64Opnd:i64:$base, GPR64Opnd:i64:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 27
                    // Dst: (SDXC164_P8 FGR64RegsOpnd:f64:$fs, GPR64Opnd:i64:$base, GPR64Opnd:i64:$index)
                  0, // EndSwitchType
/*1695*/        0, /*End of Scope*/
/*1696*/      0, /*End of Scope*/
/*1697*/    /*Scope*/ 52, /*->1750*/
/*1698*/      OPC_MoveChild, 1,
/*1700*/      OPC_CheckInteger, 0, 
/*1702*/      OPC_CheckType, MVT::i32,
/*1704*/      OPC_MoveParent,
/*1705*/      OPC_RecordChild2, // #1 = $dst
/*1706*/      OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1708*/      OPC_CheckPredicate, 16, // Predicate_store
/*1710*/      OPC_Scope, 18, /*->1730*/ // 2 children in Scope
/*1712*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1714*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$dst #2 #3
/*1717*/        OPC_EmitMergeInputChains1_0,
/*1718*/        OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*1721*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SW), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 4, 2, 3, 
                // Src: (st 0:i32, addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                // Dst: (SW ZERO:i32, addr:i32:$dst)
/*1730*/      /*Scope*/ 18, /*->1749*/
/*1731*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1733*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$dst #2 #3
/*1736*/        OPC_EmitMergeInputChains1_0,
/*1737*/        OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*1740*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SW_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 4, 2, 3, 
                // Src: (st 0:i32, addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                // Dst: (SW_P8 ZERO:i32, addr:i64:$dst)
/*1749*/      0, /*End of Scope*/
/*1750*/    /*Scope*/ 10|128,4/*522*/, /*->2274*/
/*1752*/      OPC_RecordChild1, // #1 = $r
/*1753*/      OPC_Scope, 57|128,1/*185*/, /*->1941*/ // 6 children in Scope
/*1756*/        OPC_CheckChild1Type, MVT::i32,
/*1758*/        OPC_RecordChild2, // #2 = $addr
/*1759*/        OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1761*/        OPC_Scope, 42, /*->1805*/ // 4 children in Scope
/*1763*/          OPC_CheckPredicate, 17, // Predicate_truncstore
/*1765*/          OPC_Scope, 18, /*->1785*/ // 2 children in Scope
/*1767*/            OPC_CheckPredicate, 18, // Predicate_truncstorei8
/*1769*/            OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*1771*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectAddr16:$addr #3 #4 #5
/*1774*/            OPC_EmitMergeInputChains1_0,
/*1775*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SbRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st CPU16Regs:i32:$r, addr16:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (SbRxRyOffMemX16 CPU16Regs:i32:$r, addr16:i32:$addr)
/*1785*/          /*Scope*/ 18, /*->1804*/
/*1786*/            OPC_CheckPredicate, 19, // Predicate_truncstorei16
/*1788*/            OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*1790*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectAddr16:$addr #3 #4 #5
/*1793*/            OPC_EmitMergeInputChains1_0,
/*1794*/            OPC_MorphNodeTo, TARGET_VAL(Mips::ShRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st CPU16Regs:i32:$r, addr16:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                    // Dst: (ShRxRyOffMemX16 CPU16Regs:i32:$r, addr16:i32:$addr)
/*1804*/          0, /*End of Scope*/
/*1805*/        /*Scope*/ 18, /*->1824*/
/*1806*/          OPC_CheckPredicate, 16, // Predicate_store
/*1808*/          OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*1810*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectAddr16:$addr #3 #4 #5
/*1813*/          OPC_EmitMergeInputChains1_0,
/*1814*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SwRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st CPU16Regs:i32:$r, addr16:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (SwRxRyOffMemX16 CPU16Regs:i32:$r, addr16:i32:$addr)
/*1824*/        /*Scope*/ 78, /*->1903*/
/*1825*/          OPC_CheckPredicate, 17, // Predicate_truncstore
/*1827*/          OPC_Scope, 36, /*->1865*/ // 2 children in Scope
/*1829*/            OPC_CheckPredicate, 18, // Predicate_truncstorei8
/*1831*/            OPC_Scope, 15, /*->1848*/ // 2 children in Scope
/*1833*/              OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1835*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*1838*/              OPC_EmitMergeInputChains1_0,
/*1839*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SB), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st GPR32Opnd:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (SB GPR32Opnd:i32:$rt, addr:i32:$addr)
/*1848*/            /*Scope*/ 15, /*->1864*/
/*1849*/              OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1851*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*1854*/              OPC_EmitMergeInputChains1_0,
/*1855*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SB_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st GPR32Opnd:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (SB_P8 GPR32Opnd:i32:$rt, addr:i64:$addr)
/*1864*/            0, /*End of Scope*/
/*1865*/          /*Scope*/ 36, /*->1902*/
/*1866*/            OPC_CheckPredicate, 19, // Predicate_truncstorei16
/*1868*/            OPC_Scope, 15, /*->1885*/ // 2 children in Scope
/*1870*/              OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1872*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*1875*/              OPC_EmitMergeInputChains1_0,
/*1876*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SH), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st GPR32Opnd:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (SH GPR32Opnd:i32:$rt, addr:i32:$addr)
/*1885*/            /*Scope*/ 15, /*->1901*/
/*1886*/              OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1888*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*1891*/              OPC_EmitMergeInputChains1_0,
/*1892*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SH_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st GPR32Opnd:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (SH_P8 GPR32Opnd:i32:$rt, addr:i64:$addr)
/*1901*/            0, /*End of Scope*/
/*1902*/          0, /*End of Scope*/
/*1903*/        /*Scope*/ 36, /*->1940*/
/*1904*/          OPC_CheckPredicate, 16, // Predicate_store
/*1906*/          OPC_Scope, 15, /*->1923*/ // 2 children in Scope
/*1908*/            OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1910*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*1913*/            OPC_EmitMergeInputChains1_0,
/*1914*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SW), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPR32Opnd:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SW GPR32Opnd:i32:$rt, addr:i32:$addr)
/*1923*/          /*Scope*/ 15, /*->1939*/
/*1924*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1926*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*1929*/            OPC_EmitMergeInputChains1_0,
/*1930*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SW_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPR32Opnd:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SW_P8 GPR32Opnd:i32:$rt, addr:i64:$addr)
/*1939*/          0, /*End of Scope*/
/*1940*/        0, /*End of Scope*/
/*1941*/      /*Scope*/ 41, /*->1983*/
/*1942*/        OPC_CheckChild1Type, MVT::f32,
/*1944*/        OPC_RecordChild2, // #2 = $addr
/*1945*/        OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1947*/        OPC_CheckPredicate, 16, // Predicate_store
/*1949*/        OPC_Scope, 15, /*->1966*/ // 2 children in Scope
/*1951*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1953*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectAddrDefault:$addr #3 #4
/*1956*/          OPC_EmitMergeInputChains1_0,
/*1957*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SWC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st FGR32RegsOpnd:f32:$rt, addrDefault:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (SWC1_P8 FGR32RegsOpnd:f32:$rt, addrDefault:i64:$addr)
/*1966*/        /*Scope*/ 15, /*->1982*/
/*1967*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1969*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectAddrDefault:$addr #3 #4
/*1972*/          OPC_EmitMergeInputChains1_0,
/*1973*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SWC1), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st FGR32RegsOpnd:f32:$rt, addrDefault:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (SWC1 FGR32RegsOpnd:f32:$rt, addrDefault:i32:$addr)
/*1982*/        0, /*End of Scope*/
/*1983*/      /*Scope*/ 57, /*->2041*/
/*1984*/        OPC_CheckChild1Type, MVT::f64,
/*1986*/        OPC_RecordChild2, // #2 = $addr
/*1987*/        OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1989*/        OPC_CheckPredicate, 16, // Predicate_store
/*1991*/        OPC_Scope, 15, /*->2008*/ // 3 children in Scope
/*1993*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1995*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectAddrDefault:$addr #3 #4
/*1998*/          OPC_EmitMergeInputChains1_0,
/*1999*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SDC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st FGR64RegsOpnd:f64:$rt, addrDefault:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (SDC164_P8 FGR64RegsOpnd:f64:$rt, addrDefault:i64:$addr)
/*2008*/        /*Scope*/ 15, /*->2024*/
/*2009*/          OPC_CheckPatternPredicate, 4, // (!Subtarget.isABI_N64()) && (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*2011*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectAddrDefault:$addr #3 #4
/*2014*/          OPC_EmitMergeInputChains1_0,
/*2015*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SDC164), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st FGR64RegsOpnd:f64:$rt, addrDefault:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (SDC164 FGR64RegsOpnd:f64:$rt, addrDefault:i32:$addr)
/*2024*/        /*Scope*/ 15, /*->2040*/
/*2025*/          OPC_CheckPatternPredicate, 5, // (!Subtarget.isABI_N64()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*2027*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectAddrDefault:$addr #3 #4
/*2030*/          OPC_EmitMergeInputChains1_0,
/*2031*/          OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoSDC1), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st AFGR64RegsOpnd:f64:$rt, addrDefault:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (PseudoSDC1 AFGR64RegsOpnd:f64:$rt, addrDefault:i32:$addr)
/*2040*/        0, /*End of Scope*/
/*2041*/      /*Scope*/ 32|128,1/*160*/, /*->2203*/
/*2043*/        OPC_CheckChild1Type, MVT::i64,
/*2045*/        OPC_RecordChild2, // #2 = $addr
/*2046*/        OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*2048*/        OPC_Scope, 115, /*->2165*/ // 2 children in Scope
/*2050*/          OPC_CheckPredicate, 17, // Predicate_truncstore
/*2052*/          OPC_Scope, 36, /*->2090*/ // 3 children in Scope
/*2054*/            OPC_CheckPredicate, 18, // Predicate_truncstorei8
/*2056*/            OPC_Scope, 15, /*->2073*/ // 2 children in Scope
/*2058*/              OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2060*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2063*/              OPC_EmitMergeInputChains1_0,
/*2064*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SB64), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st GPR64Opnd:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (SB64 GPR64Opnd:i64:$rt, addr:i32:$addr)
/*2073*/            /*Scope*/ 15, /*->2089*/
/*2074*/              OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2076*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2079*/              OPC_EmitMergeInputChains1_0,
/*2080*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SB64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st GPR64Opnd:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (SB64_P8 GPR64Opnd:i64:$rt, addr:i64:$addr)
/*2089*/            0, /*End of Scope*/
/*2090*/          /*Scope*/ 36, /*->2127*/
/*2091*/            OPC_CheckPredicate, 19, // Predicate_truncstorei16
/*2093*/            OPC_Scope, 15, /*->2110*/ // 2 children in Scope
/*2095*/              OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2097*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2100*/              OPC_EmitMergeInputChains1_0,
/*2101*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SH64), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st GPR64Opnd:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (SH64 GPR64Opnd:i64:$rt, addr:i32:$addr)
/*2110*/            /*Scope*/ 15, /*->2126*/
/*2111*/              OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2113*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2116*/              OPC_EmitMergeInputChains1_0,
/*2117*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SH64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st GPR64Opnd:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (SH64_P8 GPR64Opnd:i64:$rt, addr:i64:$addr)
/*2126*/            0, /*End of Scope*/
/*2127*/          /*Scope*/ 36, /*->2164*/
/*2128*/            OPC_CheckPredicate, 20, // Predicate_truncstorei32
/*2130*/            OPC_Scope, 15, /*->2147*/ // 2 children in Scope
/*2132*/              OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2134*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2137*/              OPC_EmitMergeInputChains1_0,
/*2138*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SW64), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st GPR64Opnd:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                      // Dst: (SW64 GPR64Opnd:i64:$rt, addr:i32:$addr)
/*2147*/            /*Scope*/ 15, /*->2163*/
/*2148*/              OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2150*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2153*/              OPC_EmitMergeInputChains1_0,
/*2154*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SW64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st GPR64Opnd:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                      // Dst: (SW64_P8 GPR64Opnd:i64:$rt, addr:i64:$addr)
/*2163*/            0, /*End of Scope*/
/*2164*/          0, /*End of Scope*/
/*2165*/        /*Scope*/ 36, /*->2202*/
/*2166*/          OPC_CheckPredicate, 16, // Predicate_store
/*2168*/          OPC_Scope, 15, /*->2185*/ // 2 children in Scope
/*2170*/            OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2172*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2175*/            OPC_EmitMergeInputChains1_0,
/*2176*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SD), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPR64Opnd:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SD GPR64Opnd:i64:$rt, addr:i32:$addr)
/*2185*/          /*Scope*/ 15, /*->2201*/
/*2186*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2188*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2191*/            OPC_EmitMergeInputChains1_0,
/*2192*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SD_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPR64Opnd:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SD_P8 GPR64Opnd:i64:$rt, addr:i64:$addr)
/*2201*/          0, /*End of Scope*/
/*2202*/        0, /*End of Scope*/
/*2203*/      /*Scope*/ 34, /*->2238*/
/*2204*/        OPC_CheckChild1Type, MVT::v2i16,
/*2206*/        OPC_RecordChild2, // #2 = $a
/*2207*/        OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*2209*/        OPC_CheckPredicate, 16, // Predicate_store
/*2211*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2213*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$a #3 #4
/*2216*/        OPC_EmitMergeInputChains1_0,
/*2217*/        OPC_EmitInteger, MVT::i32, Mips::GPR32RegClassID,
/*2220*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 5,  // Results = #6
/*2229*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SW), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 6, 3, 4, 
                // Src: (st DSPRegs:v2i16:$val, addr:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (SW (COPY_TO_REGCLASS:i32 DSPRegs:v2i16:$val, GPR32:i32), addr:i32:$a)
/*2238*/      /*Scope*/ 34, /*->2273*/
/*2239*/        OPC_CheckChild1Type, MVT::v4i8,
/*2241*/        OPC_RecordChild2, // #2 = $a
/*2242*/        OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*2244*/        OPC_CheckPredicate, 16, // Predicate_store
/*2246*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2248*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$a #3 #4
/*2251*/        OPC_EmitMergeInputChains1_0,
/*2252*/        OPC_EmitInteger, MVT::i32, Mips::GPR32RegClassID,
/*2255*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 5,  // Results = #6
/*2264*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SW), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 6, 3, 4, 
                // Src: (st DSPRegs:v4i8:$val, addr:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (SW (COPY_TO_REGCLASS:i32 DSPRegs:v4i8:$val, GPR32:i32), addr:i32:$a)
/*2273*/      0, /*End of Scope*/
/*2274*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 57,  TARGET_VAL(MipsISD::ExtractLOHI),// ->2335
/*2278*/    OPC_RecordChild0, // #0 = $ac
/*2279*/    OPC_RecordChild1, // #1 = $lohi_idx
/*2280*/    OPC_MoveChild, 1,
/*2282*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2285*/    OPC_MoveParent,
/*2286*/    OPC_SwitchType /*2 cases */, 30,  MVT::i32,// ->2319
/*2289*/      OPC_Scope, 13, /*->2304*/ // 2 children in Scope
/*2291*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2293*/        OPC_EmitConvertToTarget, 1,
/*2295*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (ExtractLOHI:i32 ACRegsDSP:Untyped:$ac, (imm:i32):$lohi_idx) - Complexity = 26
                // Dst: (EXTRACT_SUBREG:i32 ACRegsDSP:Untyped:$ac, (imm:i32):$lohi_idx)
/*2304*/      /*Scope*/ 13, /*->2318*/
/*2305*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2307*/        OPC_EmitConvertToTarget, 1,
/*2309*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (ExtractLOHI:i32 ACRegs:Untyped:$ac, (imm:i32):$lohi_idx) - Complexity = 6
                // Dst: (EXTRACT_SUBREG:i32 ACRegs:Untyped:$ac, (imm:i32):$lohi_idx)
/*2318*/      0, /*End of Scope*/
            /*SwitchType*/ 13,  MVT::i64,// ->2334
/*2321*/      OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2323*/      OPC_EmitConvertToTarget, 1,
/*2325*/      OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
              // Src: (ExtractLOHI:i64 ACRegs128:Untyped:$ac, (imm:i32):$lohi_idx) - Complexity = 6
              // Dst: (EXTRACT_SUBREG:i64 ACRegs128:Untyped:$ac, (imm:i32):$lohi_idx)
            0, // EndSwitchType
          /*SwitchOpcode*/ 48,  TARGET_VAL(MipsISD::Mult),// ->2386
/*2338*/    OPC_RecordChild0, // #0 = $rs
/*2339*/    OPC_Scope, 29, /*->2370*/ // 2 children in Scope
/*2341*/      OPC_CheckChild0Type, MVT::i32,
/*2343*/      OPC_RecordChild1, // #1 = $rt
/*2344*/      OPC_Scope, 11, /*->2357*/ // 2 children in Scope
/*2346*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2348*/        OPC_MorphNodeTo, TARGET_VAL(Mips::MULT_DSP), 0,
                    1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
                // Src: (MipsMult:Untyped GPR32:i32:$rs, GPR32:i32:$rt) - Complexity = 23
                // Dst: (MULT_DSP:Untyped GPR32:i32:$rs, GPR32:i32:$rt)
/*2357*/      /*Scope*/ 11, /*->2369*/
/*2358*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2360*/        OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoMULT), 0,
                    1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
                // Src: (MipsMult:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt) - Complexity = 3
                // Dst: (PseudoMULT:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
/*2369*/      0, /*End of Scope*/
/*2370*/    /*Scope*/ 14, /*->2385*/
/*2371*/      OPC_CheckChild0Type, MVT::i64,
/*2373*/      OPC_RecordChild1, // #1 = $rt
/*2374*/      OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2376*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoDMULT), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (MipsMult:Untyped GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt) - Complexity = 3
              // Dst: (PseudoDMULT:Untyped GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt)
/*2385*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 48,  TARGET_VAL(MipsISD::Multu),// ->2437
/*2389*/    OPC_RecordChild0, // #0 = $rs
/*2390*/    OPC_Scope, 29, /*->2421*/ // 2 children in Scope
/*2392*/      OPC_CheckChild0Type, MVT::i32,
/*2394*/      OPC_RecordChild1, // #1 = $rt
/*2395*/      OPC_Scope, 11, /*->2408*/ // 2 children in Scope
/*2397*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2399*/        OPC_MorphNodeTo, TARGET_VAL(Mips::MULTU_DSP), 0,
                    1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
                // Src: (MipsMultu:Untyped GPR32:i32:$rs, GPR32:i32:$rt) - Complexity = 23
                // Dst: (MULTU_DSP:Untyped GPR32:i32:$rs, GPR32:i32:$rt)
/*2408*/      /*Scope*/ 11, /*->2420*/
/*2409*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2411*/        OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoMULTu), 0,
                    1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
                // Src: (MipsMultu:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt) - Complexity = 3
                // Dst: (PseudoMULTu:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
/*2420*/      0, /*End of Scope*/
/*2421*/    /*Scope*/ 14, /*->2436*/
/*2422*/      OPC_CheckChild0Type, MVT::i64,
/*2424*/      OPC_RecordChild1, // #1 = $rt
/*2425*/      OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2427*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoDMULTu), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (MipsMultu:Untyped GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt) - Complexity = 3
              // Dst: (PseudoDMULTu:Untyped GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt)
/*2436*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 31,  TARGET_VAL(MipsISD::MAdd),// ->2471
/*2440*/    OPC_RecordChild0, // #0 = $rs
/*2441*/    OPC_RecordChild1, // #1 = $rt
/*2442*/    OPC_RecordChild2, // #2 = $acin
/*2443*/    OPC_Scope, 12, /*->2457*/ // 2 children in Scope
/*2445*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2447*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_DSP), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMAdd:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 23
              // Dst: (MADD_DSP:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin)
/*2457*/    /*Scope*/ 12, /*->2470*/
/*2458*/      OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2460*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoMADD), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMAdd:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACRegs:Untyped:$acin) - Complexity = 3
              // Dst: (PseudoMADD:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACRegs:Untyped:$acin)
/*2470*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 31,  TARGET_VAL(MipsISD::MAddu),// ->2505
/*2474*/    OPC_RecordChild0, // #0 = $rs
/*2475*/    OPC_RecordChild1, // #1 = $rt
/*2476*/    OPC_RecordChild2, // #2 = $acin
/*2477*/    OPC_Scope, 12, /*->2491*/ // 2 children in Scope
/*2479*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2481*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MADDU_DSP), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMAddu:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 23
              // Dst: (MADDU_DSP:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin)
/*2491*/    /*Scope*/ 12, /*->2504*/
/*2492*/      OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2494*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoMADDU), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMAddu:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACRegs:Untyped:$acin) - Complexity = 3
              // Dst: (PseudoMADDU:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACRegs:Untyped:$acin)
/*2504*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 31,  TARGET_VAL(MipsISD::MSub),// ->2539
/*2508*/    OPC_RecordChild0, // #0 = $rs
/*2509*/    OPC_RecordChild1, // #1 = $rt
/*2510*/    OPC_RecordChild2, // #2 = $acin
/*2511*/    OPC_Scope, 12, /*->2525*/ // 2 children in Scope
/*2513*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2515*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MSUB_DSP), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMSub:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 23
              // Dst: (MSUB_DSP:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin)
/*2525*/    /*Scope*/ 12, /*->2538*/
/*2526*/      OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2528*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoMSUB), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMSub:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACRegs:Untyped:$acin) - Complexity = 3
              // Dst: (PseudoMSUB:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACRegs:Untyped:$acin)
/*2538*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 31,  TARGET_VAL(MipsISD::MSubu),// ->2573
/*2542*/    OPC_RecordChild0, // #0 = $rs
/*2543*/    OPC_RecordChild1, // #1 = $rt
/*2544*/    OPC_RecordChild2, // #2 = $acin
/*2545*/    OPC_Scope, 12, /*->2559*/ // 2 children in Scope
/*2547*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2549*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MSUBU_DSP), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMSubu:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 23
              // Dst: (MSUBU_DSP:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin)
/*2559*/    /*Scope*/ 12, /*->2572*/
/*2560*/      OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2562*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoMSUBU), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMSubu:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACRegs:Untyped:$acin) - Complexity = 3
              // Dst: (PseudoMSUBU:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACRegs:Untyped:$acin)
/*2572*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 82,  TARGET_VAL(MipsISD::LWL),// ->2658
/*2576*/    OPC_RecordMemRef,
/*2577*/    OPC_RecordNode,   // #0 = 'MipsLWL' chained node
/*2578*/    OPC_RecordChild1, // #1 = $addr
/*2579*/    OPC_RecordChild2, // #2 = $src
/*2580*/    OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->2619
/*2583*/      OPC_Scope, 16, /*->2601*/ // 2 children in Scope
/*2585*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2587*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2590*/        OPC_EmitMergeInputChains1_0,
/*2591*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWL:i32 addr:iPTR:$addr, GPR32Opnd:i32:$src) - Complexity = 12
                // Dst: (LWL:i32 addr:i32:$addr, GPR32Opnd:i32:$src)
/*2601*/      /*Scope*/ 16, /*->2618*/
/*2602*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2604*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2607*/        OPC_EmitMergeInputChains1_0,
/*2608*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWL_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWL:i32 addr:iPTR:$addr, GPR32Opnd:i32:$src) - Complexity = 12
                // Dst: (LWL_P8:i32 addr:i64:$addr, GPR32Opnd:i32:$src)
/*2618*/      0, /*End of Scope*/
            /*SwitchType*/ 36,  MVT::i64,// ->2657
/*2621*/      OPC_Scope, 16, /*->2639*/ // 2 children in Scope
/*2623*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2625*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2628*/        OPC_EmitMergeInputChains1_0,
/*2629*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWL64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWL:i64 addr:iPTR:$addr, GPR64Opnd:i64:$src) - Complexity = 12
                // Dst: (LWL64:i64 addr:i32:$addr, GPR64Opnd:i64:$src)
/*2639*/      /*Scope*/ 16, /*->2656*/
/*2640*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2642*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2645*/        OPC_EmitMergeInputChains1_0,
/*2646*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWL64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWL:i64 addr:iPTR:$addr, GPR64Opnd:i64:$src) - Complexity = 12
                // Dst: (LWL64_P8:i64 addr:i64:$addr, GPR64Opnd:i64:$src)
/*2656*/      0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 82,  TARGET_VAL(MipsISD::LWR),// ->2743
/*2661*/    OPC_RecordMemRef,
/*2662*/    OPC_RecordNode,   // #0 = 'MipsLWR' chained node
/*2663*/    OPC_RecordChild1, // #1 = $addr
/*2664*/    OPC_RecordChild2, // #2 = $src
/*2665*/    OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->2704
/*2668*/      OPC_Scope, 16, /*->2686*/ // 2 children in Scope
/*2670*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2672*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2675*/        OPC_EmitMergeInputChains1_0,
/*2676*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWR), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWR:i32 addr:iPTR:$addr, GPR32Opnd:i32:$src) - Complexity = 12
                // Dst: (LWR:i32 addr:i32:$addr, GPR32Opnd:i32:$src)
/*2686*/      /*Scope*/ 16, /*->2703*/
/*2687*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2689*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2692*/        OPC_EmitMergeInputChains1_0,
/*2693*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWR_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWR:i32 addr:iPTR:$addr, GPR32Opnd:i32:$src) - Complexity = 12
                // Dst: (LWR_P8:i32 addr:i64:$addr, GPR32Opnd:i32:$src)
/*2703*/      0, /*End of Scope*/
            /*SwitchType*/ 36,  MVT::i64,// ->2742
/*2706*/      OPC_Scope, 16, /*->2724*/ // 2 children in Scope
/*2708*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2710*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2713*/        OPC_EmitMergeInputChains1_0,
/*2714*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWR64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWR:i64 addr:iPTR:$addr, GPR64Opnd:i64:$src) - Complexity = 12
                // Dst: (LWR64:i64 addr:i32:$addr, GPR64Opnd:i64:$src)
/*2724*/      /*Scope*/ 16, /*->2741*/
/*2725*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2727*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2730*/        OPC_EmitMergeInputChains1_0,
/*2731*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWR64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWR:i64 addr:iPTR:$addr, GPR64Opnd:i64:$src) - Complexity = 12
                // Dst: (LWR64_P8:i64 addr:i64:$addr, GPR64Opnd:i64:$src)
/*2741*/      0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 81,  TARGET_VAL(MipsISD::SWL),// ->2827
/*2746*/    OPC_RecordMemRef,
/*2747*/    OPC_RecordNode,   // #0 = 'MipsSWL' chained node
/*2748*/    OPC_RecordChild1, // #1 = $rt
/*2749*/    OPC_Scope, 37, /*->2788*/ // 2 children in Scope
/*2751*/      OPC_CheckChild1Type, MVT::i32,
/*2753*/      OPC_RecordChild2, // #2 = $addr
/*2754*/      OPC_Scope, 15, /*->2771*/ // 2 children in Scope
/*2756*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2758*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2761*/        OPC_EmitMergeInputChains1_0,
/*2762*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWL), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWL GPR32Opnd:i32:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWL GPR32Opnd:i32:$rt, addr:i32:$addr)
/*2771*/      /*Scope*/ 15, /*->2787*/
/*2772*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2774*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2777*/        OPC_EmitMergeInputChains1_0,
/*2778*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWL_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWL GPR32Opnd:i32:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWL_P8 GPR32Opnd:i32:$rt, addr:i64:$addr)
/*2787*/      0, /*End of Scope*/
/*2788*/    /*Scope*/ 37, /*->2826*/
/*2789*/      OPC_CheckChild1Type, MVT::i64,
/*2791*/      OPC_RecordChild2, // #2 = $addr
/*2792*/      OPC_Scope, 15, /*->2809*/ // 2 children in Scope
/*2794*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2796*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2799*/        OPC_EmitMergeInputChains1_0,
/*2800*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWL64), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWL GPR64Opnd:i64:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWL64 GPR64Opnd:i64:$rt, addr:i32:$addr)
/*2809*/      /*Scope*/ 15, /*->2825*/
/*2810*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2812*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2815*/        OPC_EmitMergeInputChains1_0,
/*2816*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWL64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWL GPR64Opnd:i64:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWL64_P8 GPR64Opnd:i64:$rt, addr:i64:$addr)
/*2825*/      0, /*End of Scope*/
/*2826*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 81,  TARGET_VAL(MipsISD::SWR),// ->2911
/*2830*/    OPC_RecordMemRef,
/*2831*/    OPC_RecordNode,   // #0 = 'MipsSWR' chained node
/*2832*/    OPC_RecordChild1, // #1 = $rt
/*2833*/    OPC_Scope, 37, /*->2872*/ // 2 children in Scope
/*2835*/      OPC_CheckChild1Type, MVT::i32,
/*2837*/      OPC_RecordChild2, // #2 = $addr
/*2838*/      OPC_Scope, 15, /*->2855*/ // 2 children in Scope
/*2840*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2842*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2845*/        OPC_EmitMergeInputChains1_0,
/*2846*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWR), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWR GPR32Opnd:i32:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWR GPR32Opnd:i32:$rt, addr:i32:$addr)
/*2855*/      /*Scope*/ 15, /*->2871*/
/*2856*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2858*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2861*/        OPC_EmitMergeInputChains1_0,
/*2862*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWR_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWR GPR32Opnd:i32:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWR_P8 GPR32Opnd:i32:$rt, addr:i64:$addr)
/*2871*/      0, /*End of Scope*/
/*2872*/    /*Scope*/ 37, /*->2910*/
/*2873*/      OPC_CheckChild1Type, MVT::i64,
/*2875*/      OPC_RecordChild2, // #2 = $addr
/*2876*/      OPC_Scope, 15, /*->2893*/ // 2 children in Scope
/*2878*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2880*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2883*/        OPC_EmitMergeInputChains1_0,
/*2884*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWR64), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWR GPR64Opnd:i64:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWR64 GPR64Opnd:i64:$rt, addr:i32:$addr)
/*2893*/      /*Scope*/ 15, /*->2909*/
/*2894*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2896*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2899*/        OPC_EmitMergeInputChains1_0,
/*2900*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWR64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWR GPR64Opnd:i64:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWR64_P8 GPR64Opnd:i64:$rt, addr:i64:$addr)
/*2909*/      0, /*End of Scope*/
/*2910*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::LDL),// ->2956
/*2914*/    OPC_RecordMemRef,
/*2915*/    OPC_RecordNode,   // #0 = 'MipsLDL' chained node
/*2916*/    OPC_RecordChild1, // #1 = $addr
/*2917*/    OPC_RecordChild2, // #2 = $src
/*2918*/    OPC_CheckType, MVT::i64,
/*2920*/    OPC_Scope, 16, /*->2938*/ // 2 children in Scope
/*2922*/      OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2924*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2927*/      OPC_EmitMergeInputChains1_0,
/*2928*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LDL), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (MipsLDL:i64 addr:iPTR:$addr, GPR64Opnd:i64:$src) - Complexity = 12
              // Dst: (LDL:i64 addr:i32:$addr, GPR64Opnd:i64:$src)
/*2938*/    /*Scope*/ 16, /*->2955*/
/*2939*/      OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2941*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2944*/      OPC_EmitMergeInputChains1_0,
/*2945*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LDL_P8), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (MipsLDL:i64 addr:iPTR:$addr, GPR64Opnd:i64:$src) - Complexity = 12
              // Dst: (LDL_P8:i64 addr:i64:$addr, GPR64Opnd:i64:$src)
/*2955*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::LDR),// ->3001
/*2959*/    OPC_RecordMemRef,
/*2960*/    OPC_RecordNode,   // #0 = 'MipsLDR' chained node
/*2961*/    OPC_RecordChild1, // #1 = $addr
/*2962*/    OPC_RecordChild2, // #2 = $src
/*2963*/    OPC_CheckType, MVT::i64,
/*2965*/    OPC_Scope, 16, /*->2983*/ // 2 children in Scope
/*2967*/      OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2969*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2972*/      OPC_EmitMergeInputChains1_0,
/*2973*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LDR), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (MipsLDR:i64 addr:iPTR:$addr, GPR64Opnd:i64:$src) - Complexity = 12
              // Dst: (LDR:i64 addr:i32:$addr, GPR64Opnd:i64:$src)
/*2983*/    /*Scope*/ 16, /*->3000*/
/*2984*/      OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2986*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2989*/      OPC_EmitMergeInputChains1_0,
/*2990*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LDR_P8), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (MipsLDR:i64 addr:iPTR:$addr, GPR64Opnd:i64:$src) - Complexity = 12
              // Dst: (LDR_P8:i64 addr:i64:$addr, GPR64Opnd:i64:$src)
/*3000*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 40,  TARGET_VAL(MipsISD::SDL),// ->3044
/*3004*/    OPC_RecordMemRef,
/*3005*/    OPC_RecordNode,   // #0 = 'MipsSDL' chained node
/*3006*/    OPC_RecordChild1, // #1 = $rt
/*3007*/    OPC_CheckChild1Type, MVT::i64,
/*3009*/    OPC_RecordChild2, // #2 = $addr
/*3010*/    OPC_Scope, 15, /*->3027*/ // 2 children in Scope
/*3012*/      OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*3014*/      OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*3017*/      OPC_EmitMergeInputChains1_0,
/*3018*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SDL), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (MipsSDL GPR64Opnd:i64:$rt, addr:iPTR:$addr) - Complexity = 12
              // Dst: (SDL GPR64Opnd:i64:$rt, addr:i32:$addr)
/*3027*/    /*Scope*/ 15, /*->3043*/
/*3028*/      OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*3030*/      OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*3033*/      OPC_EmitMergeInputChains1_0,
/*3034*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SDL_P8), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (MipsSDL GPR64Opnd:i64:$rt, addr:iPTR:$addr) - Complexity = 12
              // Dst: (SDL_P8 GPR64Opnd:i64:$rt, addr:i64:$addr)
/*3043*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 40,  TARGET_VAL(MipsISD::SDR),// ->3087
/*3047*/    OPC_RecordMemRef,
/*3048*/    OPC_RecordNode,   // #0 = 'MipsSDR' chained node
/*3049*/    OPC_RecordChild1, // #1 = $rt
/*3050*/    OPC_CheckChild1Type, MVT::i64,
/*3052*/    OPC_RecordChild2, // #2 = $addr
/*3053*/    OPC_Scope, 15, /*->3070*/ // 2 children in Scope
/*3055*/      OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*3057*/      OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*3060*/      OPC_EmitMergeInputChains1_0,
/*3061*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SDR), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (MipsSDR GPR64Opnd:i64:$rt, addr:iPTR:$addr) - Complexity = 12
              // Dst: (SDR GPR64Opnd:i64:$rt, addr:i32:$addr)
/*3070*/    /*Scope*/ 15, /*->3086*/
/*3071*/      OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*3073*/      OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*3076*/      OPC_EmitMergeInputChains1_0,
/*3077*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SDR_P8), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (MipsSDR GPR64Opnd:i64:$rt, addr:iPTR:$addr) - Complexity = 12
              // Dst: (SDR_P8 GPR64Opnd:i64:$rt, addr:i64:$addr)
/*3086*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 54,  TARGET_VAL(ISD::FrameIndex),// ->3144
/*3090*/    OPC_RecordNode,   // #0 = $addr
/*3091*/    OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->3127
/*3094*/      OPC_Scope, 15, /*->3111*/ // 2 children in Scope
/*3096*/        OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*3098*/        OPC_CheckComplexPat, /*CP*/1, /*#*/0, // selectAddr16:$addr #1 #2 #3
/*3101*/        OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRyOffMemX16), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                // Src: addr16:i32:$addr - Complexity = 12
                // Dst: (AddiuRxRyOffMemX16:i32 addr16:i32:$addr)
/*3111*/      /*Scope*/ 14, /*->3126*/
/*3112*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*3114*/        OPC_CheckComplexPat, /*CP*/2, /*#*/0, // selectIntAddr:$addr #1 #2
/*3117*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LEA_ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: addr:i32:$addr - Complexity = 9
                // Dst: (LEA_ADDiu:i32 addr:i32:$addr)
/*3126*/      0, /*End of Scope*/
            /*SwitchType*/ 14,  MVT::i64,// ->3143
/*3129*/      OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*3131*/      OPC_CheckComplexPat, /*CP*/2, /*#*/0, // selectIntAddr:$addr #1 #2
/*3134*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LEA_ADDiu64), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
              // Src: addr:i64:$addr - Complexity = 9
              // Dst: (LEA_ADDiu64:i64 addr:i64:$addr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 37|128,8/*1061*/,  TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->4209
/*3148*/    OPC_RecordNode,   // #0 = 'intrinsic_w_chain' chained node
/*3149*/    OPC_MoveChild, 1,
/*3151*/    OPC_Scope, 44, /*->3197*/ // 50 children in Scope
/*3153*/      OPC_CheckInteger, 22|128,9/*1174*/, 
/*3156*/      OPC_MoveParent,
/*3157*/      OPC_RecordChild2, // #1 = $rt
/*3158*/      OPC_RecordChild3, // #2 = $rs_sa
/*3159*/      OPC_Scope, 22, /*->3183*/ // 2 children in Scope
/*3161*/        OPC_MoveChild, 3,
/*3163*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3166*/        OPC_CheckPredicate, 21, // Predicate_immZExt5
/*3168*/        OPC_MoveParent,
/*3169*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3171*/        OPC_EmitMergeInputChains1_0,
/*3172*/        OPC_EmitConvertToTarget, 2,
/*3174*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_S_W), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:i32 1174:iPTR, GPR32:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$rs_sa) - Complexity = 12
                // Dst: (SHLL_S_W:i32 GPR32:i32:$rt, (imm:i32):$rs_sa)
/*3183*/      /*Scope*/ 12, /*->3196*/
/*3184*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3186*/        OPC_EmitMergeInputChains1_0,
/*3187*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLLV_S_W), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:i32 1174:iPTR, GPR32:i32:$rt, GPR32:i32:$rs_sa) - Complexity = 8
                // Dst: (SHLLV_S_W:i32 GPR32:i32:$rt, GPR32:i32:$rs_sa)
/*3196*/      0, /*End of Scope*/
/*3197*/    /*Scope*/ 26, /*->3224*/
/*3198*/      OPC_CheckInteger, 15|128,9/*1167*/, 
/*3201*/      OPC_MoveParent,
/*3202*/      OPC_RecordChild2, // #1 = $mask
/*3203*/      OPC_MoveChild, 2,
/*3205*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3208*/      OPC_CheckPredicate, 22, // Predicate_immZExt10
/*3210*/      OPC_MoveParent,
/*3211*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3213*/      OPC_EmitMergeInputChains1_0,
/*3214*/      OPC_EmitConvertToTarget, 1,
/*3216*/      OPC_MorphNodeTo, TARGET_VAL(Mips::RDDSP), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (intrinsic_w_chain:i32 1167:iPTR, (imm:i32)<<P:Predicate_immZExt10>>:$mask) - Complexity = 12
              // Dst: (RDDSP:i32 (imm:i32):$mask)
/*3224*/    /*Scope*/ 18, /*->3243*/
/*3225*/      OPC_CheckInteger, 42|128,8/*1066*/, 
/*3228*/      OPC_MoveParent,
/*3229*/      OPC_RecordChild2, // #1 = $rs
/*3230*/      OPC_RecordChild3, // #2 = $rt
/*3231*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3233*/      OPC_EmitMergeInputChains1_0,
/*3234*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQ_S_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1066:iPTR, GPR32:i32:$rs, GPR32:i32:$rt) - Complexity = 8
              // Dst: (ADDQ_S_W:i32 GPR32:i32:$rs, GPR32:i32:$rt)
/*3243*/    /*Scope*/ 18, /*->3262*/
/*3244*/      OPC_CheckInteger, 32|128,9/*1184*/, 
/*3247*/      OPC_MoveParent,
/*3248*/      OPC_RecordChild2, // #1 = $rs
/*3249*/      OPC_RecordChild3, // #2 = $rt
/*3250*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3252*/      OPC_EmitMergeInputChains1_0,
/*3253*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQ_S_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1184:iPTR, GPR32:i32:$rs, GPR32:i32:$rt) - Complexity = 8
              // Dst: (SUBQ_S_W:i32 GPR32:i32:$rs, GPR32:i32:$rt)
/*3262*/    /*Scope*/ 16, /*->3279*/
/*3263*/      OPC_CheckInteger, 39|128,8/*1063*/, 
/*3266*/      OPC_MoveParent,
/*3267*/      OPC_RecordChild2, // #1 = $rt
/*3268*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3270*/      OPC_EmitMergeInputChains1_0,
/*3271*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ABSQ_S_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 1063:iPTR, GPR32:i32:$rt) - Complexity = 8
              // Dst: (ABSQ_S_W:i32 GPR32:i32:$rt)
/*3279*/    /*Scope*/ 18, /*->3298*/
/*3280*/      OPC_CheckInteger, 109|128,8/*1133*/, 
/*3283*/      OPC_MoveParent,
/*3284*/      OPC_RecordChild2, // #1 = $rs
/*3285*/      OPC_RecordChild3, // #2 = $rt
/*3286*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3288*/      OPC_EmitMergeInputChains1_0,
/*3289*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULEQ_S_W_PHL), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1133:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MULEQ_S_W_PHL:i32 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3298*/    /*Scope*/ 18, /*->3317*/
/*3299*/      OPC_CheckInteger, 110|128,8/*1134*/, 
/*3302*/      OPC_MoveParent,
/*3303*/      OPC_RecordChild2, // #1 = $rs
/*3304*/      OPC_RecordChild3, // #2 = $rt
/*3305*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3307*/      OPC_EmitMergeInputChains1_0,
/*3308*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULEQ_S_W_PHR), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1134:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MULEQ_S_W_PHR:i32 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3317*/    /*Scope*/ 18, /*->3336*/
/*3318*/      OPC_CheckInteger, 65|128,8/*1089*/, 
/*3321*/      OPC_MoveParent,
/*3322*/      OPC_RecordChild2, // #1 = $rs
/*3323*/      OPC_RecordChild3, // #2 = $rt
/*3324*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3326*/      OPC_EmitMergeInputChains1_0,
/*3327*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGU_EQ_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1089:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGU_EQ_QB:i32 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3336*/    /*Scope*/ 18, /*->3355*/
/*3337*/      OPC_CheckInteger, 67|128,8/*1091*/, 
/*3340*/      OPC_MoveParent,
/*3341*/      OPC_RecordChild2, // #1 = $rs
/*3342*/      OPC_RecordChild3, // #2 = $rt
/*3343*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3345*/      OPC_EmitMergeInputChains1_0,
/*3346*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGU_LT_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1091:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGU_LT_QB:i32 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3355*/    /*Scope*/ 18, /*->3374*/
/*3356*/      OPC_CheckInteger, 66|128,8/*1090*/, 
/*3359*/      OPC_MoveParent,
/*3360*/      OPC_RecordChild2, // #1 = $rs
/*3361*/      OPC_RecordChild3, // #2 = $rt
/*3362*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3364*/      OPC_EmitMergeInputChains1_0,
/*3365*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGU_LE_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1090:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGU_LE_QB:i32 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3374*/    /*Scope*/ 20, /*->3395*/
/*3375*/      OPC_CheckInteger, 96|128,8/*1120*/, 
/*3378*/      OPC_MoveParent,
/*3379*/      OPC_RecordChild2, // #1 = $base
/*3380*/      OPC_CheckChild2Type, MVT::i32,
/*3382*/      OPC_RecordChild3, // #2 = $index
/*3383*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3385*/      OPC_EmitMergeInputChains1_0,
/*3386*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LWX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1120:iPTR, GPR32:i32:$base, GPR32:i32:$index) - Complexity = 8
              // Dst: (LWX:i32 GPR32:i32:$base, GPR32:i32:$index)
/*3395*/    /*Scope*/ 20, /*->3416*/
/*3396*/      OPC_CheckInteger, 95|128,8/*1119*/, 
/*3399*/      OPC_MoveParent,
/*3400*/      OPC_RecordChild2, // #1 = $base
/*3401*/      OPC_CheckChild2Type, MVT::i32,
/*3403*/      OPC_RecordChild3, // #2 = $index
/*3404*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3406*/      OPC_EmitMergeInputChains1_0,
/*3407*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LHX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1119:iPTR, GPR32:i32:$base, GPR32:i32:$index) - Complexity = 8
              // Dst: (LHX:i32 GPR32:i32:$base, GPR32:i32:$index)
/*3416*/    /*Scope*/ 20, /*->3437*/
/*3417*/      OPC_CheckInteger, 94|128,8/*1118*/, 
/*3420*/      OPC_MoveParent,
/*3421*/      OPC_RecordChild2, // #1 = $base
/*3422*/      OPC_CheckChild2Type, MVT::i32,
/*3424*/      OPC_RecordChild3, // #2 = $index
/*3425*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3427*/      OPC_EmitMergeInputChains1_0,
/*3428*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LBUX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1118:iPTR, GPR32:i32:$base, GPR32:i32:$index) - Complexity = 8
              // Dst: (LBUX:i32 GPR32:i32:$base, GPR32:i32:$index)
/*3437*/    /*Scope*/ 18, /*->3456*/
/*3438*/      OPC_CheckInteger, 93|128,8/*1117*/, 
/*3441*/      OPC_MoveParent,
/*3442*/      OPC_RecordChild2, // #1 = $src
/*3443*/      OPC_RecordChild3, // #2 = $rs
/*3444*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3446*/      OPC_EmitMergeInputChains1_0,
/*3447*/      OPC_MorphNodeTo, TARGET_VAL(Mips::INSV), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1117:iPTR, GPR32:i32:$src, GPR32:i32:$rs) - Complexity = 8
              // Dst: (INSV:i32 GPR32:i32:$src, GPR32:i32:$rs)
/*3456*/    /*Scope*/ 18, /*->3475*/
/*3457*/      OPC_CheckInteger, 62|128,8/*1086*/, 
/*3460*/      OPC_MoveParent,
/*3461*/      OPC_RecordChild2, // #1 = $rs
/*3462*/      OPC_RecordChild3, // #2 = $rt
/*3463*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3465*/      OPC_EmitMergeInputChains1_0,
/*3466*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGDU_EQ_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1086:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGDU_EQ_QB:i32 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3475*/    /*Scope*/ 18, /*->3494*/
/*3476*/      OPC_CheckInteger, 64|128,8/*1088*/, 
/*3479*/      OPC_MoveParent,
/*3480*/      OPC_RecordChild2, // #1 = $rs
/*3481*/      OPC_RecordChild3, // #2 = $rt
/*3482*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3484*/      OPC_EmitMergeInputChains1_0,
/*3485*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGDU_LT_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1088:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGDU_LT_QB:i32 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3494*/    /*Scope*/ 18, /*->3513*/
/*3495*/      OPC_CheckInteger, 63|128,8/*1087*/, 
/*3498*/      OPC_MoveParent,
/*3499*/      OPC_RecordChild2, // #1 = $rs
/*3500*/      OPC_RecordChild3, // #2 = $rt
/*3501*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3503*/      OPC_EmitMergeInputChains1_0,
/*3504*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGDU_LE_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1087:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGDU_LE_QB:i32 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3513*/    /*Scope*/ 18, /*->3532*/
/*3514*/      OPC_CheckInteger, 116|128,8/*1140*/, 
/*3517*/      OPC_MoveParent,
/*3518*/      OPC_RecordChild2, // #1 = $rs
/*3519*/      OPC_RecordChild3, // #2 = $rt
/*3520*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3522*/      OPC_EmitMergeInputChains1_0,
/*3523*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULQ_S_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1140:iPTR, GPR32:i32:$rs, GPR32:i32:$rt) - Complexity = 8
              // Dst: (MULQ_S_W:i32 GPR32:i32:$rs, GPR32:i32:$rt)
/*3532*/    /*Scope*/ 18, /*->3551*/
/*3533*/      OPC_CheckInteger, 114|128,8/*1138*/, 
/*3536*/      OPC_MoveParent,
/*3537*/      OPC_RecordChild2, // #1 = $rs
/*3538*/      OPC_RecordChild3, // #2 = $rt
/*3539*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3541*/      OPC_EmitMergeInputChains1_0,
/*3542*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULQ_RS_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1138:iPTR, GPR32:i32:$rs, GPR32:i32:$rt) - Complexity = 8
              // Dst: (MULQ_RS_W:i32 GPR32:i32:$rs, GPR32:i32:$rt)
/*3551*/    /*Scope*/ 18, /*->3570*/
/*3552*/      OPC_CheckInteger, 47|128,8/*1071*/, 
/*3555*/      OPC_MoveParent,
/*3556*/      OPC_RecordChild2, // #1 = $a
/*3557*/      OPC_RecordChild3, // #2 = $b
/*3558*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3560*/      OPC_EmitMergeInputChains1_0,
/*3561*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDSC), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1071:iPTR, i32:i32:$a, i32:i32:$b) - Complexity = 8
              // Dst: (ADDSC:i32 i32:i32:$a, i32:i32:$b)
/*3570*/    /*Scope*/ 18, /*->3589*/
/*3571*/      OPC_CheckInteger, 54|128,8/*1078*/, 
/*3574*/      OPC_MoveParent,
/*3575*/      OPC_RecordChild2, // #1 = $a
/*3576*/      OPC_RecordChild3, // #2 = $b
/*3577*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3579*/      OPC_EmitMergeInputChains1_0,
/*3580*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDWC), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1078:iPTR, i32:i32:$a, i32:i32:$b) - Complexity = 8
              // Dst: (ADDWC:i32 i32:i32:$a, i32:i32:$b)
/*3589*/    /*Scope*/ 12, /*->3602*/
/*3590*/      OPC_CheckInteger, 58|128,8/*1082*/, 
/*3593*/      OPC_MoveParent,
/*3594*/      OPC_EmitMergeInputChains1_0,
/*3595*/      OPC_MorphNodeTo, TARGET_VAL(Mips::BPOSGE32_PSEUDO), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
              // Src: (intrinsic_w_chain:i32 1082:iPTR) - Complexity = 8
              // Dst: (BPOSGE32_PSEUDO:i32)
/*3602*/    /*Scope*/ 44, /*->3647*/
/*3603*/      OPC_CheckInteger, 21|128,9/*1173*/, 
/*3606*/      OPC_MoveParent,
/*3607*/      OPC_RecordChild2, // #1 = $rt
/*3608*/      OPC_RecordChild3, // #2 = $rs_sa
/*3609*/      OPC_Scope, 22, /*->3633*/ // 2 children in Scope
/*3611*/        OPC_MoveChild, 3,
/*3613*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3616*/        OPC_CheckPredicate, 23, // Predicate_immZExt4
/*3618*/        OPC_MoveParent,
/*3619*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3621*/        OPC_EmitMergeInputChains1_0,
/*3622*/        OPC_EmitConvertToTarget, 2,
/*3624*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_S_PH), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v2i16 1173:iPTR, DSPRegs:v2i16:$rt, (imm:i32)<<P:Predicate_immZExt4>>:$rs_sa) - Complexity = 12
                // Dst: (SHLL_S_PH:v2i16 DSPRegs:v2i16:$rt, (imm:i32):$rs_sa)
/*3633*/      /*Scope*/ 12, /*->3646*/
/*3634*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3636*/        OPC_EmitMergeInputChains1_0,
/*3637*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLLV_S_PH), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:v2i16 1173:iPTR, DSPRegs:v2i16:$rt, GPR32:i32:$rs_sa) - Complexity = 8
                // Dst: (SHLLV_S_PH:v2i16 DSPRegs:v2i16:$rt, GPR32:i32:$rs_sa)
/*3646*/      0, /*End of Scope*/
/*3647*/    /*Scope*/ 44, /*->3692*/
/*3648*/      OPC_CheckInteger, 19|128,9/*1171*/, 
/*3651*/      OPC_MoveParent,
/*3652*/      OPC_RecordChild2, // #1 = $a
/*3653*/      OPC_RecordChild3, // #2 = $shamt
/*3654*/      OPC_Scope, 22, /*->3678*/ // 2 children in Scope
/*3656*/        OPC_MoveChild, 3,
/*3658*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3661*/        OPC_CheckPredicate, 23, // Predicate_immZExt4
/*3663*/        OPC_MoveParent,
/*3664*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3666*/        OPC_EmitMergeInputChains1_0,
/*3667*/        OPC_EmitConvertToTarget, 2,
/*3669*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_PH), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v2i16 1171:iPTR, v2i16:v2i16:$a, (imm:i32)<<P:Predicate_immZExt4>>:$shamt) - Complexity = 12
                // Dst: (SHLL_PH:v2i16 v2i16:v2i16:$a, (imm:i32)<<P:Predicate_immZExt4>>:$shamt)
/*3678*/      /*Scope*/ 12, /*->3691*/
/*3679*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3681*/        OPC_EmitMergeInputChains1_0,
/*3682*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLLV_PH), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:v2i16 1171:iPTR, DSPRegs:v2i16:$rt, GPR32:i32:$rs_sa) - Complexity = 8
                // Dst: (SHLLV_PH:v2i16 DSPRegs:v2i16:$rt, GPR32:i32:$rs_sa)
/*3691*/      0, /*End of Scope*/
/*3692*/    /*Scope*/ 44, /*->3737*/
/*3693*/      OPC_CheckInteger, 20|128,9/*1172*/, 
/*3696*/      OPC_MoveParent,
/*3697*/      OPC_RecordChild2, // #1 = $a
/*3698*/      OPC_RecordChild3, // #2 = $shamt
/*3699*/      OPC_Scope, 22, /*->3723*/ // 2 children in Scope
/*3701*/        OPC_MoveChild, 3,
/*3703*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3706*/        OPC_CheckPredicate, 24, // Predicate_immZExt3
/*3708*/        OPC_MoveParent,
/*3709*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3711*/        OPC_EmitMergeInputChains1_0,
/*3712*/        OPC_EmitConvertToTarget, 2,
/*3714*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_QB), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v4i8 1172:iPTR, v4i8:v4i8:$a, (imm:i32)<<P:Predicate_immZExt3>>:$shamt) - Complexity = 12
                // Dst: (SHLL_QB:v4i8 v4i8:v4i8:$a, (imm:i32)<<P:Predicate_immZExt3>>:$shamt)
/*3723*/      /*Scope*/ 12, /*->3736*/
/*3724*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3726*/        OPC_EmitMergeInputChains1_0,
/*3727*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLLV_QB), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:v4i8 1172:iPTR, DSPRegs:v4i8:$rt, GPR32:i32:$rs_sa) - Complexity = 8
                // Dst: (SHLLV_QB:v4i8 DSPRegs:v4i8:$rt, GPR32:i32:$rs_sa)
/*3736*/      0, /*End of Scope*/
/*3737*/    /*Scope*/ 18, /*->3756*/
/*3738*/      OPC_CheckInteger, 51|128,8/*1075*/, 
/*3741*/      OPC_MoveParent,
/*3742*/      OPC_RecordChild2, // #1 = $rs
/*3743*/      OPC_RecordChild3, // #2 = $rt
/*3744*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3746*/      OPC_EmitMergeInputChains1_0,
/*3747*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDU_S_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1075:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (ADDU_S_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3756*/    /*Scope*/ 18, /*->3775*/
/*3757*/      OPC_CheckInteger, 40|128,9/*1192*/, 
/*3760*/      OPC_MoveParent,
/*3761*/      OPC_RecordChild2, // #1 = $rs
/*3762*/      OPC_RecordChild3, // #2 = $rt
/*3763*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3765*/      OPC_EmitMergeInputChains1_0,
/*3766*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBU_S_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1192:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (SUBU_S_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3775*/    /*Scope*/ 18, /*->3794*/
/*3776*/      OPC_CheckInteger, 41|128,8/*1065*/, 
/*3779*/      OPC_MoveParent,
/*3780*/      OPC_RecordChild2, // #1 = $rs
/*3781*/      OPC_RecordChild3, // #2 = $rt
/*3782*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3784*/      OPC_EmitMergeInputChains1_0,
/*3785*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQ_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1065:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ADDQ_S_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3794*/    /*Scope*/ 18, /*->3813*/
/*3795*/      OPC_CheckInteger, 31|128,9/*1183*/, 
/*3798*/      OPC_MoveParent,
/*3799*/      OPC_RecordChild2, // #1 = $rs
/*3800*/      OPC_RecordChild3, // #2 = $rt
/*3801*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3803*/      OPC_EmitMergeInputChains1_0,
/*3804*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQ_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1183:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (SUBQ_S_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3813*/    /*Scope*/ 16, /*->3830*/
/*3814*/      OPC_CheckInteger, 37|128,8/*1061*/, 
/*3817*/      OPC_MoveParent,
/*3818*/      OPC_RecordChild2, // #1 = $rt
/*3819*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3821*/      OPC_EmitMergeInputChains1_0,
/*3822*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ABSQ_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:v2i16 1061:iPTR, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ABSQ_S_PH:v2i16 DSPRegs:v2i16:$rt)
/*3830*/    /*Scope*/ 18, /*->3849*/
/*3831*/      OPC_CheckInteger, 11|128,9/*1163*/, 
/*3834*/      OPC_MoveParent,
/*3835*/      OPC_RecordChild2, // #1 = $rs
/*3836*/      OPC_RecordChild3, // #2 = $rt
/*3837*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3839*/      OPC_EmitMergeInputChains1_0,
/*3840*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECRQ_RS_PH_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1163:iPTR, GPR32:i32:$rs, GPR32:i32:$rt) - Complexity = 8
              // Dst: (PRECRQ_RS_PH_W:v2i16 GPR32:i32:$rs, GPR32:i32:$rt)
/*3849*/    /*Scope*/ 18, /*->3868*/
/*3850*/      OPC_CheckInteger, 12|128,9/*1164*/, 
/*3853*/      OPC_MoveParent,
/*3854*/      OPC_RecordChild2, // #1 = $rs
/*3855*/      OPC_RecordChild3, // #2 = $rt
/*3856*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3858*/      OPC_EmitMergeInputChains1_0,
/*3859*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECRQU_S_QB_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1164:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PRECRQU_S_QB_PH:v4i8 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3868*/    /*Scope*/ 18, /*->3887*/
/*3869*/      OPC_CheckInteger, 111|128,8/*1135*/, 
/*3872*/      OPC_MoveParent,
/*3873*/      OPC_RecordChild2, // #1 = $rs
/*3874*/      OPC_RecordChild3, // #2 = $rt
/*3875*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3877*/      OPC_EmitMergeInputChains1_0,
/*3878*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULEU_S_PH_QBL), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1135:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MULEU_S_PH_QBL:v2i16 DSPRegs:v4i8:$rs, DSPRegs:v2i16:$rt)
/*3887*/    /*Scope*/ 18, /*->3906*/
/*3888*/      OPC_CheckInteger, 112|128,8/*1136*/, 
/*3891*/      OPC_MoveParent,
/*3892*/      OPC_RecordChild2, // #1 = $rs
/*3893*/      OPC_RecordChild3, // #2 = $rt
/*3894*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3896*/      OPC_EmitMergeInputChains1_0,
/*3897*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULEU_S_PH_QBR), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1136:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MULEU_S_PH_QBR:v2i16 DSPRegs:v4i8:$rs, DSPRegs:v2i16:$rt)
/*3906*/    /*Scope*/ 18, /*->3925*/
/*3907*/      OPC_CheckInteger, 113|128,8/*1137*/, 
/*3910*/      OPC_MoveParent,
/*3911*/      OPC_RecordChild2, // #1 = $rs
/*3912*/      OPC_RecordChild3, // #2 = $rt
/*3913*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3915*/      OPC_EmitMergeInputChains1_0,
/*3916*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULQ_RS_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1137:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MULQ_RS_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3925*/    /*Scope*/ 18, /*->3944*/
/*3926*/      OPC_CheckInteger, 123|128,8/*1147*/, 
/*3929*/      OPC_MoveParent,
/*3930*/      OPC_RecordChild2, // #1 = $rs
/*3931*/      OPC_RecordChild3, // #2 = $rt
/*3932*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3934*/      OPC_EmitMergeInputChains1_0,
/*3935*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PICK_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1147:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PICK_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3944*/    /*Scope*/ 18, /*->3963*/
/*3945*/      OPC_CheckInteger, 122|128,8/*1146*/, 
/*3948*/      OPC_MoveParent,
/*3949*/      OPC_RecordChild2, // #1 = $rs
/*3950*/      OPC_RecordChild3, // #2 = $rt
/*3951*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3953*/      OPC_EmitMergeInputChains1_0,
/*3954*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PICK_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1146:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PICK_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3963*/    /*Scope*/ 18, /*->3982*/
/*3964*/      OPC_CheckInteger, 48|128,8/*1072*/, 
/*3967*/      OPC_MoveParent,
/*3968*/      OPC_RecordChild2, // #1 = $rs
/*3969*/      OPC_RecordChild3, // #2 = $rt
/*3970*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3972*/      OPC_EmitMergeInputChains1_0,
/*3973*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDU_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1072:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ADDU_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3982*/    /*Scope*/ 18, /*->4001*/
/*3983*/      OPC_CheckInteger, 50|128,8/*1074*/, 
/*3986*/      OPC_MoveParent,
/*3987*/      OPC_RecordChild2, // #1 = $rs
/*3988*/      OPC_RecordChild3, // #2 = $rt
/*3989*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3991*/      OPC_EmitMergeInputChains1_0,
/*3992*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDU_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1074:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ADDU_S_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4001*/    /*Scope*/ 18, /*->4020*/
/*4002*/      OPC_CheckInteger, 37|128,9/*1189*/, 
/*4005*/      OPC_MoveParent,
/*4006*/      OPC_RecordChild2, // #1 = $rs
/*4007*/      OPC_RecordChild3, // #2 = $rt
/*4008*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4010*/      OPC_EmitMergeInputChains1_0,
/*4011*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBU_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1189:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (SUBU_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4020*/    /*Scope*/ 18, /*->4039*/
/*4021*/      OPC_CheckInteger, 39|128,9/*1191*/, 
/*4024*/      OPC_MoveParent,
/*4025*/      OPC_RecordChild2, // #1 = $rs
/*4026*/      OPC_RecordChild3, // #2 = $rt
/*4027*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4029*/      OPC_EmitMergeInputChains1_0,
/*4030*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBU_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1191:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (SUBU_S_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4039*/    /*Scope*/ 16, /*->4056*/
/*4040*/      OPC_CheckInteger, 38|128,8/*1062*/, 
/*4043*/      OPC_MoveParent,
/*4044*/      OPC_RecordChild2, // #1 = $rt
/*4045*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4047*/      OPC_EmitMergeInputChains1_0,
/*4048*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ABSQ_S_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:v4i8 1062:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (ABSQ_S_QB:v4i8 DSPRegs:v4i8:$rt)
/*4056*/    /*Scope*/ 18, /*->4075*/
/*4057*/      OPC_CheckInteger, 108|128,8/*1132*/, 
/*4060*/      OPC_MoveParent,
/*4061*/      OPC_RecordChild2, // #1 = $rs
/*4062*/      OPC_RecordChild3, // #2 = $rt
/*4063*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4065*/      OPC_EmitMergeInputChains1_0,
/*4066*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MUL_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1132:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MUL_S_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4075*/    /*Scope*/ 18, /*->4094*/
/*4076*/      OPC_CheckInteger, 115|128,8/*1139*/, 
/*4079*/      OPC_MoveParent,
/*4080*/      OPC_RecordChild2, // #1 = $rs
/*4081*/      OPC_RecordChild3, // #2 = $rt
/*4082*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4084*/      OPC_EmitMergeInputChains1_0,
/*4085*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULQ_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1139:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MULQ_S_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4094*/    /*Scope*/ 18, /*->4113*/
/*4095*/      OPC_CheckInteger, 6|128,9/*1158*/, 
/*4098*/      OPC_MoveParent,
/*4099*/      OPC_RecordChild2, // #1 = $rs
/*4100*/      OPC_RecordChild3, // #2 = $rt
/*4101*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4103*/      OPC_EmitMergeInputChains1_0,
/*4104*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECR_QB_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1158:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PRECR_QB_PH:v4i8 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4113*/    /*Scope*/ 18, /*->4132*/
/*4114*/      OPC_CheckInteger, 40|128,8/*1064*/, 
/*4117*/      OPC_MoveParent,
/*4118*/      OPC_RecordChild2, // #1 = $a
/*4119*/      OPC_RecordChild3, // #2 = $b
/*4120*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4122*/      OPC_EmitMergeInputChains1_0,
/*4123*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQ_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1064:iPTR, v2i16:v2i16:$a, v2i16:v2i16:$b) - Complexity = 8
              // Dst: (ADDQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b)
/*4132*/    /*Scope*/ 18, /*->4151*/
/*4133*/      OPC_CheckInteger, 30|128,9/*1182*/, 
/*4136*/      OPC_MoveParent,
/*4137*/      OPC_RecordChild2, // #1 = $a
/*4138*/      OPC_RecordChild3, // #2 = $b
/*4139*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4141*/      OPC_EmitMergeInputChains1_0,
/*4142*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQ_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1182:iPTR, v2i16:v2i16:$a, v2i16:v2i16:$b) - Complexity = 8
              // Dst: (SUBQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b)
/*4151*/    /*Scope*/ 18, /*->4170*/
/*4152*/      OPC_CheckInteger, 107|128,8/*1131*/, 
/*4155*/      OPC_MoveParent,
/*4156*/      OPC_RecordChild2, // #1 = $a
/*4157*/      OPC_RecordChild3, // #2 = $b
/*4158*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4160*/      OPC_EmitMergeInputChains1_0,
/*4161*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MUL_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1131:iPTR, v2i16:v2i16:$a, v2i16:v2i16:$b) - Complexity = 8
              // Dst: (MUL_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b)
/*4170*/    /*Scope*/ 18, /*->4189*/
/*4171*/      OPC_CheckInteger, 49|128,8/*1073*/, 
/*4174*/      OPC_MoveParent,
/*4175*/      OPC_RecordChild2, // #1 = $a
/*4176*/      OPC_RecordChild3, // #2 = $b
/*4177*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4179*/      OPC_EmitMergeInputChains1_0,
/*4180*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDU_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1073:iPTR, v4i8:v4i8:$a, v4i8:v4i8:$b) - Complexity = 8
              // Dst: (ADDU_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b)
/*4189*/    /*Scope*/ 18, /*->4208*/
/*4190*/      OPC_CheckInteger, 38|128,9/*1190*/, 
/*4193*/      OPC_MoveParent,
/*4194*/      OPC_RecordChild2, // #1 = $a
/*4195*/      OPC_RecordChild3, // #2 = $b
/*4196*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4198*/      OPC_EmitMergeInputChains1_0,
/*4199*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBU_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1190:iPTR, v4i8:v4i8:$a, v4i8:v4i8:$b) - Complexity = 8
              // Dst: (SUBU_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b)
/*4208*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 119|128,7/*1015*/,  TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->5228
/*4213*/    OPC_MoveChild, 0,
/*4215*/    OPC_Scope, 42, /*->4259*/ // 42 children in Scope
/*4217*/      OPC_CheckInteger, 27|128,9/*1179*/, 
/*4220*/      OPC_MoveParent,
/*4221*/      OPC_RecordChild1, // #0 = $rt
/*4222*/      OPC_RecordChild2, // #1 = $rs_sa
/*4223*/      OPC_Scope, 21, /*->4246*/ // 2 children in Scope
/*4225*/        OPC_MoveChild, 2,
/*4227*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4230*/        OPC_CheckPredicate, 21, // Predicate_immZExt5
/*4232*/        OPC_MoveParent,
/*4233*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4235*/        OPC_EmitConvertToTarget, 1,
/*4237*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_R_W), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:i32 1179:iPTR, GPR32:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$rs_sa) - Complexity = 12
                // Dst: (SHRA_R_W:i32 GPR32:i32:$rt, (imm:i32):$rs_sa)
/*4246*/      /*Scope*/ 11, /*->4258*/
/*4247*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4249*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRAV_R_W), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:i32 1179:iPTR, GPR32:i32:$rt, GPR32:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRAV_R_W:i32 GPR32:i32:$rt, GPR32:i32:$rs_sa)
/*4258*/      0, /*End of Scope*/
/*4259*/    /*Scope*/ 29, /*->4289*/
/*4260*/      OPC_CheckInteger, 55|128,8/*1079*/, 
/*4263*/      OPC_MoveParent,
/*4264*/      OPC_RecordChild1, // #0 = $src
/*4265*/      OPC_RecordChild2, // #1 = $rs
/*4266*/      OPC_RecordChild3, // #2 = $sa
/*4267*/      OPC_MoveChild, 3,
/*4269*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4272*/      OPC_CheckPredicate, 21, // Predicate_immZExt5
/*4274*/      OPC_MoveParent,
/*4275*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4277*/      OPC_EmitConvertToTarget, 2,
/*4279*/      OPC_MorphNodeTo, TARGET_VAL(Mips::APPEND), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 0, 
              // Src: (intrinsic_wo_chain:i32 1079:iPTR, GPR32:i32:$src, GPR32:i32:$rs, (imm:i32)<<P:Predicate_immZExt5>>:$sa) - Complexity = 12
              // Dst: (APPEND:i32 GPR32:i32:$rs, (imm:i32):$sa, GPR32:i32:$src)
/*4289*/    /*Scope*/ 29, /*->4319*/
/*4290*/      OPC_CheckInteger, 56|128,8/*1080*/, 
/*4293*/      OPC_MoveParent,
/*4294*/      OPC_RecordChild1, // #0 = $src
/*4295*/      OPC_RecordChild2, // #1 = $rs
/*4296*/      OPC_RecordChild3, // #2 = $sa
/*4297*/      OPC_MoveChild, 3,
/*4299*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4302*/      OPC_CheckPredicate, 25, // Predicate_immZExt2
/*4304*/      OPC_MoveParent,
/*4305*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4307*/      OPC_EmitConvertToTarget, 2,
/*4309*/      OPC_MorphNodeTo, TARGET_VAL(Mips::BALIGN), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 0, 
              // Src: (intrinsic_wo_chain:i32 1080:iPTR, GPR32:i32:$src, GPR32:i32:$rs, (imm:i32)<<P:Predicate_immZExt2>>:$sa) - Complexity = 12
              // Dst: (BALIGN:i32 GPR32:i32:$rs, (imm:i32):$sa, GPR32:i32:$src)
/*4319*/    /*Scope*/ 29, /*->4349*/
/*4320*/      OPC_CheckInteger, 13|128,9/*1165*/, 
/*4323*/      OPC_MoveParent,
/*4324*/      OPC_RecordChild1, // #0 = $src
/*4325*/      OPC_RecordChild2, // #1 = $rs
/*4326*/      OPC_RecordChild3, // #2 = $sa
/*4327*/      OPC_MoveChild, 3,
/*4329*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4332*/      OPC_CheckPredicate, 21, // Predicate_immZExt5
/*4334*/      OPC_MoveParent,
/*4335*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4337*/      OPC_EmitConvertToTarget, 2,
/*4339*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PREPEND), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 0, 
              // Src: (intrinsic_wo_chain:i32 1165:iPTR, GPR32:i32:$src, GPR32:i32:$rs, (imm:i32)<<P:Predicate_immZExt5>>:$sa) - Complexity = 12
              // Dst: (PREPEND:i32 GPR32:i32:$rs, (imm:i32):$sa, GPR32:i32:$src)
/*4349*/    /*Scope*/ 17, /*->4367*/
/*4350*/      OPC_CheckInteger, 103|128,8/*1127*/, 
/*4353*/      OPC_MoveParent,
/*4354*/      OPC_RecordChild1, // #0 = $rs
/*4355*/      OPC_RecordChild2, // #1 = $rt
/*4356*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4358*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MODSUB), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 1127:iPTR, GPR32:i32:$rs, GPR32:i32:$rt) - Complexity = 8
              // Dst: (MODSUB:i32 GPR32:i32:$rs, GPR32:i32:$rt)
/*4367*/    /*Scope*/ 15, /*->4383*/
/*4368*/      OPC_CheckInteger, 14|128,9/*1166*/, 
/*4371*/      OPC_MoveParent,
/*4372*/      OPC_RecordChild1, // #0 = $rs
/*4373*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4375*/      OPC_MorphNodeTo, TARGET_VAL(Mips::RADDU_W_QB), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 1166:iPTR, DSPRegs:v4i8:$rs) - Complexity = 8
              // Dst: (RADDU_W_QB:i32 DSPRegs:v4i8:$rs)
/*4383*/    /*Scope*/ 15, /*->4399*/
/*4384*/      OPC_CheckInteger, 124|128,8/*1148*/, 
/*4387*/      OPC_MoveParent,
/*4388*/      OPC_RecordChild1, // #0 = $rt
/*4389*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4391*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQ_W_PHL), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 1148:iPTR, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PRECEQ_W_PHL:i32 DSPRegs:v2i16:$rt)
/*4399*/    /*Scope*/ 15, /*->4415*/
/*4400*/      OPC_CheckInteger, 125|128,8/*1149*/, 
/*4403*/      OPC_MoveParent,
/*4404*/      OPC_RecordChild1, // #0 = $rt
/*4405*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4407*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQ_W_PHR), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 1149:iPTR, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PRECEQ_W_PHR:i32 DSPRegs:v2i16:$rt)
/*4415*/    /*Scope*/ 15, /*->4431*/
/*4416*/      OPC_CheckInteger, 57|128,8/*1081*/, 
/*4419*/      OPC_MoveParent,
/*4420*/      OPC_RecordChild1, // #0 = $rt
/*4421*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4423*/      OPC_MorphNodeTo, TARGET_VAL(Mips::BITREV), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 1081:iPTR, GPR32:i32:$rt) - Complexity = 8
              // Dst: (BITREV:i32 GPR32:i32:$rt)
/*4431*/    /*Scope*/ 17, /*->4449*/
/*4432*/      OPC_CheckInteger, 46|128,8/*1070*/, 
/*4435*/      OPC_MoveParent,
/*4436*/      OPC_RecordChild1, // #0 = $rs
/*4437*/      OPC_RecordChild2, // #1 = $rt
/*4438*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4440*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQH_W), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 1070:iPTR, GPR32:i32:$rs, GPR32:i32:$rt) - Complexity = 8
              // Dst: (ADDQH_W:i32 GPR32:i32:$rs, GPR32:i32:$rt)
/*4449*/    /*Scope*/ 17, /*->4467*/
/*4450*/      OPC_CheckInteger, 45|128,8/*1069*/, 
/*4453*/      OPC_MoveParent,
/*4454*/      OPC_RecordChild1, // #0 = $rs
/*4455*/      OPC_RecordChild2, // #1 = $rt
/*4456*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4458*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQH_R_W), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 1069:iPTR, GPR32:i32:$rs, GPR32:i32:$rt) - Complexity = 8
              // Dst: (ADDQH_R_W:i32 GPR32:i32:$rs, GPR32:i32:$rt)
/*4467*/    /*Scope*/ 17, /*->4485*/
/*4468*/      OPC_CheckInteger, 36|128,9/*1188*/, 
/*4471*/      OPC_MoveParent,
/*4472*/      OPC_RecordChild1, // #0 = $rs
/*4473*/      OPC_RecordChild2, // #1 = $rt
/*4474*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4476*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQH_W), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 1188:iPTR, GPR32:i32:$rs, GPR32:i32:$rt) - Complexity = 8
              // Dst: (SUBQH_W:i32 GPR32:i32:$rs, GPR32:i32:$rt)
/*4485*/    /*Scope*/ 17, /*->4503*/
/*4486*/      OPC_CheckInteger, 35|128,9/*1187*/, 
/*4489*/      OPC_MoveParent,
/*4490*/      OPC_RecordChild1, // #0 = $rs
/*4491*/      OPC_RecordChild2, // #1 = $rt
/*4492*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4494*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQH_R_W), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 1187:iPTR, GPR32:i32:$rs, GPR32:i32:$rt) - Complexity = 8
              // Dst: (SUBQH_R_W:i32 GPR32:i32:$rs, GPR32:i32:$rt)
/*4503*/    /*Scope*/ 42, /*->4546*/
/*4504*/      OPC_CheckInteger, 25|128,9/*1177*/, 
/*4507*/      OPC_MoveParent,
/*4508*/      OPC_RecordChild1, // #0 = $rt
/*4509*/      OPC_RecordChild2, // #1 = $rs_sa
/*4510*/      OPC_Scope, 21, /*->4533*/ // 2 children in Scope
/*4512*/        OPC_MoveChild, 2,
/*4514*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4517*/        OPC_CheckPredicate, 23, // Predicate_immZExt4
/*4519*/        OPC_MoveParent,
/*4520*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4522*/        OPC_EmitConvertToTarget, 1,
/*4524*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_R_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v2i16 1177:iPTR, DSPRegs:v2i16:$rt, (imm:i32)<<P:Predicate_immZExt4>>:$rs_sa) - Complexity = 12
                // Dst: (SHRA_R_PH:v2i16 DSPRegs:v2i16:$rt, (imm:i32):$rs_sa)
/*4533*/      /*Scope*/ 11, /*->4545*/
/*4534*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4536*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRAV_R_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v2i16 1177:iPTR, DSPRegs:v2i16:$rt, GPR32:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRAV_R_PH:v2i16 DSPRegs:v2i16:$rt, GPR32:i32:$rs_sa)
/*4545*/      0, /*End of Scope*/
/*4546*/    /*Scope*/ 39, /*->4586*/
/*4547*/      OPC_CheckInteger, 17|128,9/*1169*/, 
/*4550*/      OPC_MoveParent,
/*4551*/      OPC_RecordChild1, // #0 = $imm
/*4552*/      OPC_Scope, 20, /*->4574*/ // 2 children in Scope
/*4554*/        OPC_MoveChild, 1,
/*4556*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4559*/        OPC_CheckPredicate, 26, // Predicate_immZExt8
/*4561*/        OPC_MoveParent,
/*4562*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4564*/        OPC_EmitConvertToTarget, 0,
/*4566*/        OPC_MorphNodeTo, TARGET_VAL(Mips::REPL_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 1/*#Ops*/, 1, 
                // Src: (intrinsic_wo_chain:v4i8 1169:iPTR, (imm:i32)<<P:Predicate_immZExt8>>:$imm) - Complexity = 12
                // Dst: (REPL_QB:v4i8 (imm:i32):$imm)
/*4574*/      /*Scope*/ 10, /*->4585*/
/*4575*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4577*/        OPC_MorphNodeTo, TARGET_VAL(Mips::REPLV_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4i8 1169:iPTR, GPR32:i32:$rt) - Complexity = 8
                // Dst: (REPLV_QB:v4i8 GPR32:i32:$rt)
/*4585*/      0, /*End of Scope*/
/*4586*/    /*Scope*/ 39, /*->4626*/
/*4587*/      OPC_CheckInteger, 16|128,9/*1168*/, 
/*4590*/      OPC_MoveParent,
/*4591*/      OPC_RecordChild1, // #0 = $imm
/*4592*/      OPC_Scope, 20, /*->4614*/ // 2 children in Scope
/*4594*/        OPC_MoveChild, 1,
/*4596*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4599*/        OPC_CheckPredicate, 22, // Predicate_immZExt10
/*4601*/        OPC_MoveParent,
/*4602*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4604*/        OPC_EmitConvertToTarget, 0,
/*4606*/        OPC_MorphNodeTo, TARGET_VAL(Mips::REPL_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 1, 
                // Src: (intrinsic_wo_chain:v2i16 1168:iPTR, (imm:i32)<<P:Predicate_immZExt10>>:$imm) - Complexity = 12
                // Dst: (REPL_PH:v2i16 (imm:i32):$imm)
/*4614*/      /*Scope*/ 10, /*->4625*/
/*4615*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4617*/        OPC_MorphNodeTo, TARGET_VAL(Mips::REPLV_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v2i16 1168:iPTR, GPR32:i32:$rt) - Complexity = 8
                // Dst: (REPLV_PH:v2i16 GPR32:i32:$rt)
/*4625*/      0, /*End of Scope*/
/*4626*/    /*Scope*/ 29, /*->4656*/
/*4627*/      OPC_CheckInteger, 7|128,9/*1159*/, 
/*4630*/      OPC_MoveParent,
/*4631*/      OPC_RecordChild1, // #0 = $src
/*4632*/      OPC_RecordChild2, // #1 = $rs
/*4633*/      OPC_RecordChild3, // #2 = $sa
/*4634*/      OPC_MoveChild, 3,
/*4636*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4639*/      OPC_CheckPredicate, 21, // Predicate_immZExt5
/*4641*/      OPC_MoveParent,
/*4642*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4644*/      OPC_EmitConvertToTarget, 2,
/*4646*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECR_SRA_PH_W), 0,
                  1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 1, 3, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1159:iPTR, GPR32:i32:$src, GPR32:i32:$rs, (imm:i32)<<P:Predicate_immZExt5>>:$sa) - Complexity = 12
              // Dst: (PRECR_SRA_PH_W:v2i16 GPR32:i32:$rs, (imm:i32):$sa, GPR32:i32:$src)
/*4656*/    /*Scope*/ 29, /*->4686*/
/*4657*/      OPC_CheckInteger, 8|128,9/*1160*/, 
/*4660*/      OPC_MoveParent,
/*4661*/      OPC_RecordChild1, // #0 = $src
/*4662*/      OPC_RecordChild2, // #1 = $rs
/*4663*/      OPC_RecordChild3, // #2 = $sa
/*4664*/      OPC_MoveChild, 3,
/*4666*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4669*/      OPC_CheckPredicate, 21, // Predicate_immZExt5
/*4671*/      OPC_MoveParent,
/*4672*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4674*/      OPC_EmitConvertToTarget, 2,
/*4676*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECR_SRA_R_PH_W), 0,
                  1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 1, 3, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1160:iPTR, GPR32:i32:$src, GPR32:i32:$rs, (imm:i32)<<P:Predicate_immZExt5>>:$sa) - Complexity = 12
              // Dst: (PRECR_SRA_R_PH_W:v2i16 GPR32:i32:$rs, (imm:i32):$sa, GPR32:i32:$src)
/*4686*/    /*Scope*/ 42, /*->4729*/
/*4687*/      OPC_CheckInteger, 26|128,9/*1178*/, 
/*4690*/      OPC_MoveParent,
/*4691*/      OPC_RecordChild1, // #0 = $rt
/*4692*/      OPC_RecordChild2, // #1 = $rs_sa
/*4693*/      OPC_Scope, 21, /*->4716*/ // 2 children in Scope
/*4695*/        OPC_MoveChild, 2,
/*4697*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4700*/        OPC_CheckPredicate, 24, // Predicate_immZExt3
/*4702*/        OPC_MoveParent,
/*4703*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4705*/        OPC_EmitConvertToTarget, 1,
/*4707*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_R_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v4i8 1178:iPTR, DSPRegs:v4i8:$rt, (imm:i32)<<P:Predicate_immZExt3>>:$rs_sa) - Complexity = 12
                // Dst: (SHRA_R_QB:v4i8 DSPRegs:v4i8:$rt, (imm:i32):$rs_sa)
/*4716*/      /*Scope*/ 11, /*->4728*/
/*4717*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4719*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRAV_R_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v4i8 1178:iPTR, DSPRegs:v4i8:$rt, GPR32:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRAV_R_QB:v4i8 DSPRegs:v4i8:$rt, GPR32:i32:$rs_sa)
/*4728*/      0, /*End of Scope*/
/*4729*/    /*Scope*/ 42, /*->4772*/
/*4730*/      OPC_CheckInteger, 23|128,9/*1175*/, 
/*4733*/      OPC_MoveParent,
/*4734*/      OPC_RecordChild1, // #0 = $a
/*4735*/      OPC_RecordChild2, // #1 = $shamt
/*4736*/      OPC_Scope, 21, /*->4759*/ // 2 children in Scope
/*4738*/        OPC_MoveChild, 2,
/*4740*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4743*/        OPC_CheckPredicate, 23, // Predicate_immZExt4
/*4745*/        OPC_MoveParent,
/*4746*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4748*/        OPC_EmitConvertToTarget, 1,
/*4750*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v2i16 1175:iPTR, v2i16:v2i16:$a, (imm:i32)<<P:Predicate_immZExt4>>:$shamt) - Complexity = 12
                // Dst: (SHRA_PH:v2i16 v2i16:v2i16:$a, (imm:i32)<<P:Predicate_immZExt4>>:$shamt)
/*4759*/      /*Scope*/ 11, /*->4771*/
/*4760*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4762*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRAV_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v2i16 1175:iPTR, DSPRegs:v2i16:$rt, GPR32:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRAV_PH:v2i16 DSPRegs:v2i16:$rt, GPR32:i32:$rs_sa)
/*4771*/      0, /*End of Scope*/
/*4772*/    /*Scope*/ 42, /*->4815*/
/*4773*/      OPC_CheckInteger, 28|128,9/*1180*/, 
/*4776*/      OPC_MoveParent,
/*4777*/      OPC_RecordChild1, // #0 = $a
/*4778*/      OPC_RecordChild2, // #1 = $shamt
/*4779*/      OPC_Scope, 21, /*->4802*/ // 2 children in Scope
/*4781*/        OPC_MoveChild, 2,
/*4783*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4786*/        OPC_CheckPredicate, 23, // Predicate_immZExt4
/*4788*/        OPC_MoveParent,
/*4789*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4791*/        OPC_EmitConvertToTarget, 1,
/*4793*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRL_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v2i16 1180:iPTR, v2i16:v2i16:$a, (imm:i32)<<P:Predicate_immZExt4>>:$shamt) - Complexity = 12
                // Dst: (SHRL_PH:v2i16 v2i16:v2i16:$a, (imm:i32)<<P:Predicate_immZExt4>>:$shamt)
/*4802*/      /*Scope*/ 11, /*->4814*/
/*4803*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4805*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRLV_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v2i16 1180:iPTR, DSPRegs:v2i16:$rt, GPR32:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRLV_PH:v2i16 DSPRegs:v2i16:$rt, GPR32:i32:$rs_sa)
/*4814*/      0, /*End of Scope*/
/*4815*/    /*Scope*/ 42, /*->4858*/
/*4816*/      OPC_CheckInteger, 24|128,9/*1176*/, 
/*4819*/      OPC_MoveParent,
/*4820*/      OPC_RecordChild1, // #0 = $a
/*4821*/      OPC_RecordChild2, // #1 = $shamt
/*4822*/      OPC_Scope, 21, /*->4845*/ // 2 children in Scope
/*4824*/        OPC_MoveChild, 2,
/*4826*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4829*/        OPC_CheckPredicate, 24, // Predicate_immZExt3
/*4831*/        OPC_MoveParent,
/*4832*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4834*/        OPC_EmitConvertToTarget, 1,
/*4836*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v4i8 1176:iPTR, v4i8:v4i8:$a, (imm:i32)<<P:Predicate_immZExt3>>:$shamt) - Complexity = 12
                // Dst: (SHRA_QB:v4i8 v4i8:v4i8:$a, (imm:i32)<<P:Predicate_immZExt3>>:$shamt)
/*4845*/      /*Scope*/ 11, /*->4857*/
/*4846*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4848*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRAV_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v4i8 1176:iPTR, DSPRegs:v4i8:$rt, GPR32:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRAV_QB:v4i8 DSPRegs:v4i8:$rt, GPR32:i32:$rs_sa)
/*4857*/      0, /*End of Scope*/
/*4858*/    /*Scope*/ 42, /*->4901*/
/*4859*/      OPC_CheckInteger, 29|128,9/*1181*/, 
/*4862*/      OPC_MoveParent,
/*4863*/      OPC_RecordChild1, // #0 = $a
/*4864*/      OPC_RecordChild2, // #1 = $shamt
/*4865*/      OPC_Scope, 21, /*->4888*/ // 2 children in Scope
/*4867*/        OPC_MoveChild, 2,
/*4869*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4872*/        OPC_CheckPredicate, 24, // Predicate_immZExt3
/*4874*/        OPC_MoveParent,
/*4875*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4877*/        OPC_EmitConvertToTarget, 1,
/*4879*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRL_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v4i8 1181:iPTR, v4i8:v4i8:$a, (imm:i32)<<P:Predicate_immZExt3>>:$shamt) - Complexity = 12
                // Dst: (SHRL_QB:v4i8 v4i8:v4i8:$a, (imm:i32)<<P:Predicate_immZExt3>>:$shamt)
/*4888*/      /*Scope*/ 11, /*->4900*/
/*4889*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4891*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRLV_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v4i8 1181:iPTR, DSPRegs:v4i8:$rt, GPR32:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRLV_QB:v4i8 DSPRegs:v4i8:$rt, GPR32:i32:$rs_sa)
/*4900*/      0, /*End of Scope*/
/*4901*/    /*Scope*/ 17, /*->4919*/
/*4902*/      OPC_CheckInteger, 10|128,9/*1162*/, 
/*4905*/      OPC_MoveParent,
/*4906*/      OPC_RecordChild1, // #0 = $rs
/*4907*/      OPC_RecordChild2, // #1 = $rt
/*4908*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4910*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECRQ_QB_PH), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i8 1162:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PRECRQ_QB_PH:v4i8 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4919*/    /*Scope*/ 17, /*->4937*/
/*4920*/      OPC_CheckInteger, 9|128,9/*1161*/, 
/*4923*/      OPC_MoveParent,
/*4924*/      OPC_RecordChild1, // #0 = $rs
/*4925*/      OPC_RecordChild2, // #1 = $rt
/*4926*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4928*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECRQ_PH_W), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1161:iPTR, GPR32:i32:$rs, GPR32:i32:$rt) - Complexity = 8
              // Dst: (PRECRQ_PH_W:v2i16 GPR32:i32:$rs, GPR32:i32:$rt)
/*4937*/    /*Scope*/ 15, /*->4953*/
/*4938*/      OPC_CheckInteger, 126|128,8/*1150*/, 
/*4941*/      OPC_MoveParent,
/*4942*/      OPC_RecordChild1, // #0 = $rt
/*4943*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4945*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQU_PH_QBL), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1150:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEQU_PH_QBL:v2i16 DSPRegs:v4i8:$rt)
/*4953*/    /*Scope*/ 15, /*->4969*/
/*4954*/      OPC_CheckInteger, 0|128,9/*1152*/, 
/*4957*/      OPC_MoveParent,
/*4958*/      OPC_RecordChild1, // #0 = $rt
/*4959*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4961*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQU_PH_QBR), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1152:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEQU_PH_QBR:v2i16 DSPRegs:v4i8:$rt)
/*4969*/    /*Scope*/ 15, /*->4985*/
/*4970*/      OPC_CheckInteger, 127|128,8/*1151*/, 
/*4973*/      OPC_MoveParent,
/*4974*/      OPC_RecordChild1, // #0 = $rt
/*4975*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4977*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQU_PH_QBLA), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1151:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEQU_PH_QBLA:v2i16 DSPRegs:v4i8:$rt)
/*4985*/    /*Scope*/ 15, /*->5001*/
/*4986*/      OPC_CheckInteger, 1|128,9/*1153*/, 
/*4989*/      OPC_MoveParent,
/*4990*/      OPC_RecordChild1, // #0 = $rt
/*4991*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4993*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQU_PH_QBRA), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1153:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEQU_PH_QBRA:v2i16 DSPRegs:v4i8:$rt)
/*5001*/    /*Scope*/ 15, /*->5017*/
/*5002*/      OPC_CheckInteger, 2|128,9/*1154*/, 
/*5005*/      OPC_MoveParent,
/*5006*/      OPC_RecordChild1, // #0 = $rt
/*5007*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5009*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEU_PH_QBL), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1154:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEU_PH_QBL:v2i16 DSPRegs:v4i8:$rt)
/*5017*/    /*Scope*/ 15, /*->5033*/
/*5018*/      OPC_CheckInteger, 4|128,9/*1156*/, 
/*5021*/      OPC_MoveParent,
/*5022*/      OPC_RecordChild1, // #0 = $rt
/*5023*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5025*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEU_PH_QBR), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1156:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEU_PH_QBR:v2i16 DSPRegs:v4i8:$rt)
/*5033*/    /*Scope*/ 15, /*->5049*/
/*5034*/      OPC_CheckInteger, 3|128,9/*1155*/, 
/*5037*/      OPC_MoveParent,
/*5038*/      OPC_RecordChild1, // #0 = $rt
/*5039*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5041*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEU_PH_QBLA), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1155:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEU_PH_QBLA:v2i16 DSPRegs:v4i8:$rt)
/*5049*/    /*Scope*/ 15, /*->5065*/
/*5050*/      OPC_CheckInteger, 5|128,9/*1157*/, 
/*5053*/      OPC_MoveParent,
/*5054*/      OPC_RecordChild1, // #0 = $rt
/*5055*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5057*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEU_PH_QBRA), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1157:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEU_PH_QBRA:v2i16 DSPRegs:v4i8:$rt)
/*5065*/    /*Scope*/ 17, /*->5083*/
/*5066*/      OPC_CheckInteger, 121|128,8/*1145*/, 
/*5069*/      OPC_MoveParent,
/*5070*/      OPC_RecordChild1, // #0 = $rs
/*5071*/      OPC_RecordChild2, // #1 = $rt
/*5072*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5074*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PACKRL_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1145:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PACKRL_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*5083*/    /*Scope*/ 17, /*->5101*/
/*5084*/      OPC_CheckInteger, 52|128,8/*1076*/, 
/*5087*/      OPC_MoveParent,
/*5088*/      OPC_RecordChild1, // #0 = $rs
/*5089*/      OPC_RecordChild2, // #1 = $rt
/*5090*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*5092*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDUH_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i8 1076:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (ADDUH_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*5101*/    /*Scope*/ 17, /*->5119*/
/*5102*/      OPC_CheckInteger, 53|128,8/*1077*/, 
/*5105*/      OPC_MoveParent,
/*5106*/      OPC_RecordChild1, // #0 = $rs
/*5107*/      OPC_RecordChild2, // #1 = $rt
/*5108*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*5110*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDUH_R_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i8 1077:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (ADDUH_R_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*5119*/    /*Scope*/ 17, /*->5137*/
/*5120*/      OPC_CheckInteger, 41|128,9/*1193*/, 
/*5123*/      OPC_MoveParent,
/*5124*/      OPC_RecordChild1, // #0 = $rs
/*5125*/      OPC_RecordChild2, // #1 = $rt
/*5126*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*5128*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBUH_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i8 1193:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (SUBUH_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*5137*/    /*Scope*/ 17, /*->5155*/
/*5138*/      OPC_CheckInteger, 42|128,9/*1194*/, 
/*5141*/      OPC_MoveParent,
/*5142*/      OPC_RecordChild1, // #0 = $rs
/*5143*/      OPC_RecordChild2, // #1 = $rt
/*5144*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*5146*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBUH_R_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i8 1194:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (SUBUH_R_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*5155*/    /*Scope*/ 17, /*->5173*/
/*5156*/      OPC_CheckInteger, 43|128,8/*1067*/, 
/*5159*/      OPC_MoveParent,
/*5160*/      OPC_RecordChild1, // #0 = $rs
/*5161*/      OPC_RecordChild2, // #1 = $rt
/*5162*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*5164*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQH_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1067:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ADDQH_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*5173*/    /*Scope*/ 17, /*->5191*/
/*5174*/      OPC_CheckInteger, 44|128,8/*1068*/, 
/*5177*/      OPC_MoveParent,
/*5178*/      OPC_RecordChild1, // #0 = $rs
/*5179*/      OPC_RecordChild2, // #1 = $rt
/*5180*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*5182*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQH_R_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1068:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ADDQH_R_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*5191*/    /*Scope*/ 17, /*->5209*/
/*5192*/      OPC_CheckInteger, 33|128,9/*1185*/, 
/*5195*/      OPC_MoveParent,
/*5196*/      OPC_RecordChild1, // #0 = $rs
/*5197*/      OPC_RecordChild2, // #1 = $rt
/*5198*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*5200*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQH_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1185:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (SUBQH_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*5209*/    /*Scope*/ 17, /*->5227*/
/*5210*/      OPC_CheckInteger, 34|128,9/*1186*/, 
/*5213*/      OPC_MoveParent,
/*5214*/      OPC_RecordChild1, // #0 = $rs
/*5215*/      OPC_RecordChild2, // #1 = $rt
/*5216*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*5218*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQH_R_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1186:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (SUBQH_R_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*5227*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 13|128,1/*141*/,  TARGET_VAL(ISD::INTRINSIC_VOID),// ->5373
/*5232*/    OPC_RecordNode,   // #0 = 'intrinsic_void' chained node
/*5233*/    OPC_MoveChild, 1,
/*5235*/    OPC_Scope, 27, /*->5264*/ // 7 children in Scope
/*5237*/      OPC_CheckInteger, 43|128,9/*1195*/, 
/*5240*/      OPC_MoveParent,
/*5241*/      OPC_RecordChild2, // #1 = $rs
/*5242*/      OPC_RecordChild3, // #2 = $mask
/*5243*/      OPC_MoveChild, 3,
/*5245*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5248*/      OPC_CheckPredicate, 22, // Predicate_immZExt10
/*5250*/      OPC_MoveParent,
/*5251*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5253*/      OPC_EmitMergeInputChains1_0,
/*5254*/      OPC_EmitConvertToTarget, 2,
/*5256*/      OPC_MorphNodeTo, TARGET_VAL(Mips::WRDSP), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (intrinsic_void 1195:iPTR, GPR32:i32:$rs, (imm:i32)<<P:Predicate_immZExt10>>:$mask) - Complexity = 12
              // Dst: (WRDSP GPR32:i32:$rs, (imm:i32):$mask)
/*5264*/    /*Scope*/ 17, /*->5282*/
/*5265*/      OPC_CheckInteger, 68|128,8/*1092*/, 
/*5268*/      OPC_MoveParent,
/*5269*/      OPC_RecordChild2, // #1 = $rs
/*5270*/      OPC_RecordChild3, // #2 = $rt
/*5271*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5273*/      OPC_EmitMergeInputChains1_0,
/*5274*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPU_EQ_QB), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1092:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPU_EQ_QB DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*5282*/    /*Scope*/ 17, /*->5300*/
/*5283*/      OPC_CheckInteger, 70|128,8/*1094*/, 
/*5286*/      OPC_MoveParent,
/*5287*/      OPC_RecordChild2, // #1 = $rs
/*5288*/      OPC_RecordChild3, // #2 = $rt
/*5289*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5291*/      OPC_EmitMergeInputChains1_0,
/*5292*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPU_LT_QB), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1094:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPU_LT_QB DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*5300*/    /*Scope*/ 17, /*->5318*/
/*5301*/      OPC_CheckInteger, 69|128,8/*1093*/, 
/*5304*/      OPC_MoveParent,
/*5305*/      OPC_RecordChild2, // #1 = $rs
/*5306*/      OPC_RecordChild3, // #2 = $rt
/*5307*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5309*/      OPC_EmitMergeInputChains1_0,
/*5310*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPU_LE_QB), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1093:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPU_LE_QB DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*5318*/    /*Scope*/ 17, /*->5336*/
/*5319*/      OPC_CheckInteger, 59|128,8/*1083*/, 
/*5322*/      OPC_MoveParent,
/*5323*/      OPC_RecordChild2, // #1 = $rs
/*5324*/      OPC_RecordChild3, // #2 = $rt
/*5325*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5327*/      OPC_EmitMergeInputChains1_0,
/*5328*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMP_EQ_PH), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1083:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (CMP_EQ_PH DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*5336*/    /*Scope*/ 17, /*->5354*/
/*5337*/      OPC_CheckInteger, 61|128,8/*1085*/, 
/*5340*/      OPC_MoveParent,
/*5341*/      OPC_RecordChild2, // #1 = $rs
/*5342*/      OPC_RecordChild3, // #2 = $rt
/*5343*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5345*/      OPC_EmitMergeInputChains1_0,
/*5346*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMP_LT_PH), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1085:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (CMP_LT_PH DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*5354*/    /*Scope*/ 17, /*->5372*/
/*5355*/      OPC_CheckInteger, 60|128,8/*1084*/, 
/*5358*/      OPC_MoveParent,
/*5359*/      OPC_RecordChild2, // #1 = $rs
/*5360*/      OPC_RecordChild3, // #2 = $rt
/*5361*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5363*/      OPC_EmitMergeInputChains1_0,
/*5364*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMP_LE_PH), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1084:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (CMP_LE_PH DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*5372*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 69|128,1/*197*/,  TARGET_VAL(ISD::XOR),// ->5574
/*5377*/    OPC_Scope, 50, /*->5429*/ // 2 children in Scope
/*5379*/      OPC_MoveChild, 0,
/*5381*/      OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*5384*/      OPC_RecordChild0, // #0 = $rs
/*5385*/      OPC_RecordChild1, // #1 = $rt
/*5386*/      OPC_MoveParent,
/*5387*/      OPC_MoveChild, 1,
/*5389*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5400*/      OPC_MoveParent,
/*5401*/      OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->5415
/*5404*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5406*/        OPC_MorphNodeTo, TARGET_VAL(Mips::NOR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i32 (or:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt), -1:i32) - Complexity = 11
                // Dst: (NOR:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
              /*SwitchType*/ 11,  MVT::i64,// ->5428
/*5417*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5419*/        OPC_MorphNodeTo, TARGET_VAL(Mips::NOR64), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i64 (or:i64 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt), -1:i64) - Complexity = 11
                // Dst: (NOR64:i64 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt)
              0, // EndSwitchType
/*5429*/    /*Scope*/ 14|128,1/*142*/, /*->5573*/
/*5431*/      OPC_RecordChild0, // #0 = $in
/*5432*/      OPC_Scope, 44, /*->5478*/ // 2 children in Scope
/*5434*/        OPC_MoveChild, 1,
/*5436*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5447*/        OPC_MoveParent,
/*5448*/        OPC_CheckType, MVT::i32,
/*5450*/        OPC_Scope, 14, /*->5466*/ // 2 children in Scope
/*5452*/          OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5454*/          OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*5457*/          OPC_MorphNodeTo, TARGET_VAL(Mips::NOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 GPR32:i32:$in, -1:i32) - Complexity = 8
                  // Dst: (NOR:i32 GPR32Opnd:i32:$in, ZERO:i32)
/*5466*/        /*Scope*/ 10, /*->5477*/
/*5467*/          OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*5469*/          OPC_MorphNodeTo, TARGET_VAL(Mips::NotRxRy16), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (xor:i32 CPU16Regs:i32:$r, -1:i32) - Complexity = 8
                  // Dst: (NotRxRy16:i32 CPU16Regs:i32:$r)
/*5477*/        0, /*End of Scope*/
/*5478*/      /*Scope*/ 93, /*->5572*/
/*5479*/        OPC_RecordChild1, // #1 = $imm16
/*5480*/        OPC_Scope, 46, /*->5528*/ // 3 children in Scope
/*5482*/          OPC_MoveChild, 1,
/*5484*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5487*/          OPC_CheckPredicate, 27, // Predicate_immZExt16
/*5489*/          OPC_MoveParent,
/*5490*/          OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->5509
/*5493*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5495*/            OPC_EmitConvertToTarget, 1,
/*5497*/            OPC_EmitNodeXForm, 0, 2, // LO16
/*5500*/            OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i32 GPR32Opnd:i32:$rs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                    // Dst: (XORi:i32 GPR32Opnd:i32:$rs, (LO16:i32 (imm:i32):$imm16))
                  /*SwitchType*/ 16,  MVT::i64,// ->5527
/*5511*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5513*/            OPC_EmitConvertToTarget, 1,
/*5515*/            OPC_EmitNodeXForm, 0, 2, // LO16
/*5518*/            OPC_MorphNodeTo, TARGET_VAL(Mips::XORi64), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i64 GPR64Opnd:i64:$rs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                    // Dst: (XORi64:i64 GPR64Opnd:i64:$rs, (LO16:i64 (imm:i64):$imm16))
                  0, // EndSwitchType
/*5528*/        /*Scope*/ 28, /*->5557*/
/*5529*/          OPC_CheckType, MVT::i32,
/*5531*/          OPC_Scope, 11, /*->5544*/ // 2 children in Scope
/*5533*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5535*/            OPC_MorphNodeTo, TARGET_VAL(Mips::XOR), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt) - Complexity = 3
                    // Dst: (XOR:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
/*5544*/          /*Scope*/ 11, /*->5556*/
/*5545*/            OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*5547*/            OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                    // Dst: (XorRxRxRy16:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*5556*/          0, /*End of Scope*/
/*5557*/        /*Scope*/ 13, /*->5571*/
/*5558*/          OPC_CheckType, MVT::i64,
/*5560*/          OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5562*/          OPC_MorphNodeTo, TARGET_VAL(Mips::XOR64), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt) - Complexity = 3
                  // Dst: (XOR64:i64 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt)
/*5571*/        0, /*End of Scope*/
/*5572*/      0, /*End of Scope*/
/*5573*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 52|128,13/*1716*/,  TARGET_VAL(ISD::BRCOND),// ->7294
/*5578*/    OPC_RecordNode,   // #0 = 'brcond' chained node
/*5579*/    OPC_Scope, 106|128,12/*1642*/, /*->7224*/ // 2 children in Scope
/*5582*/      OPC_MoveChild, 1,
/*5584*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*5587*/      OPC_RecordChild0, // #1 = $rs
/*5588*/      OPC_Scope, 82|128,7/*978*/, /*->6569*/ // 2 children in Scope
/*5591*/        OPC_CheckChild0Type, MVT::i32,
/*5593*/        OPC_Scope, 24|128,2/*280*/, /*->5876*/ // 2 children in Scope
/*5596*/          OPC_MoveChild, 1,
/*5598*/          OPC_Scope, 77|128,1/*205*/, /*->5806*/ // 3 children in Scope
/*5601*/            OPC_CheckInteger, 0, 
/*5603*/            OPC_MoveParent,
/*5604*/            OPC_MoveChild, 2,
/*5606*/            OPC_Scope, 24, /*->5632*/ // 7 children in Scope
/*5608*/              OPC_CheckCondCode, ISD::SETGE,
/*5610*/              OPC_MoveParent,
/*5611*/              OPC_CheckType, MVT::i32,
/*5613*/              OPC_MoveParent,
/*5614*/              OPC_RecordChild2, // #2 = $offset
/*5615*/              OPC_MoveChild, 2,
/*5617*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5620*/              OPC_MoveParent,
/*5621*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5623*/              OPC_EmitMergeInputChains1_0,
/*5624*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BGEZ), 0|OPFL_Chain,
                          0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                      // Src: (brcond (setcc:i32 GPR32Opnd:i32:$rs, 0:i32, SETGE:Other), (bb:Other):$offset) - Complexity = 11
                      // Dst: (BGEZ GPR32Opnd:i32:$rs, (bb:Other):$offset)
/*5632*/            /*Scope*/ 24, /*->5657*/
/*5633*/              OPC_CheckCondCode, ISD::SETGT,
/*5635*/              OPC_MoveParent,
/*5636*/              OPC_CheckType, MVT::i32,
/*5638*/              OPC_MoveParent,
/*5639*/              OPC_RecordChild2, // #2 = $offset
/*5640*/              OPC_MoveChild, 2,
/*5642*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5645*/              OPC_MoveParent,
/*5646*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5648*/              OPC_EmitMergeInputChains1_0,
/*5649*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BGTZ), 0|OPFL_Chain,
                          0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                      // Src: (brcond (setcc:i32 GPR32Opnd:i32:$rs, 0:i32, SETGT:Other), (bb:Other):$offset) - Complexity = 11
                      // Dst: (BGTZ GPR32Opnd:i32:$rs, (bb:Other):$offset)
/*5657*/            /*Scope*/ 24, /*->5682*/
/*5658*/              OPC_CheckCondCode, ISD::SETLE,
/*5660*/              OPC_MoveParent,
/*5661*/              OPC_CheckType, MVT::i32,
/*5663*/              OPC_MoveParent,
/*5664*/              OPC_RecordChild2, // #2 = $offset
/*5665*/              OPC_MoveChild, 2,
/*5667*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5670*/              OPC_MoveParent,
/*5671*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5673*/              OPC_EmitMergeInputChains1_0,
/*5674*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BLEZ), 0|OPFL_Chain,
                          0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                      // Src: (brcond (setcc:i32 GPR32Opnd:i32:$rs, 0:i32, SETLE:Other), (bb:Other):$offset) - Complexity = 11
                      // Dst: (BLEZ GPR32Opnd:i32:$rs, (bb:Other):$offset)
/*5682*/            /*Scope*/ 24, /*->5707*/
/*5683*/              OPC_CheckCondCode, ISD::SETLT,
/*5685*/              OPC_MoveParent,
/*5686*/              OPC_CheckType, MVT::i32,
/*5688*/              OPC_MoveParent,
/*5689*/              OPC_RecordChild2, // #2 = $offset
/*5690*/              OPC_MoveChild, 2,
/*5692*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5695*/              OPC_MoveParent,
/*5696*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5698*/              OPC_EmitMergeInputChains1_0,
/*5699*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BLTZ), 0|OPFL_Chain,
                          0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                      // Src: (brcond (setcc:i32 GPR32Opnd:i32:$rs, 0:i32, SETLT:Other), (bb:Other):$offset) - Complexity = 11
                      // Dst: (BLTZ GPR32Opnd:i32:$rs, (bb:Other):$offset)
/*5707*/            /*Scope*/ 28, /*->5736*/
/*5708*/              OPC_CheckCondCode, ISD::SETNE,
/*5710*/              OPC_MoveParent,
/*5711*/              OPC_CheckType, MVT::i32,
/*5713*/              OPC_MoveParent,
/*5714*/              OPC_RecordChild2, // #2 = $dst
/*5715*/              OPC_MoveChild, 2,
/*5717*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5720*/              OPC_MoveParent,
/*5721*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5723*/              OPC_EmitMergeInputChains1_0,
/*5724*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*5727*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BNE), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                      // Src: (brcond (setcc:i32 GPR32:i32:$lhs, 0:i32, SETNE:Other), (bb:Other):$dst) - Complexity = 11
                      // Dst: (BNE GPR32:i32:$lhs, ZERO:i32, (bb:Other):$dst)
/*5736*/            /*Scope*/ 43, /*->5780*/
/*5737*/              OPC_CheckCondCode, ISD::SETEQ,
/*5739*/              OPC_MoveParent,
/*5740*/              OPC_CheckType, MVT::i32,
/*5742*/              OPC_MoveParent,
/*5743*/              OPC_RecordChild2, // #2 = $dst
/*5744*/              OPC_MoveChild, 2,
/*5746*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5749*/              OPC_MoveParent,
/*5750*/              OPC_Scope, 15, /*->5767*/ // 2 children in Scope
/*5752*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5754*/                OPC_EmitMergeInputChains1_0,
/*5755*/                OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*5758*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                        // Src: (brcond (setcc:i32 GPR32:i32:$lhs, 0:i32, SETEQ:Other), (bb:Other):$dst) - Complexity = 11
                        // Dst: (BEQ GPR32:i32:$lhs, ZERO:i32, (bb:Other):$dst)
/*5767*/              /*Scope*/ 11, /*->5779*/
/*5768*/                OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*5770*/                OPC_EmitMergeInputChains1_0,
/*5771*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BeqzRxImmX16), 0|OPFL_Chain,
                            0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                        // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, 0:i32, SETEQ:Other), (bb:Other):$targ16) - Complexity = 11
                        // Dst: (BeqzRxImmX16 CPU16Regs:i32:$rx, (bb:Other):$targ16)
/*5779*/              0, /*End of Scope*/
/*5780*/            /*Scope*/ 24, /*->5805*/
/*5781*/              OPC_CheckCondCode, ISD::SETNE,
/*5783*/              OPC_MoveParent,
/*5784*/              OPC_CheckType, MVT::i32,
/*5786*/              OPC_MoveParent,
/*5787*/              OPC_RecordChild2, // #2 = $targ16
/*5788*/              OPC_MoveChild, 2,
/*5790*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5793*/              OPC_MoveParent,
/*5794*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*5796*/              OPC_EmitMergeInputChains1_0,
/*5797*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BnezRxImmX16), 0|OPFL_Chain,
                          0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, 0:i32, SETNE:Other), (bb:Other):$targ16) - Complexity = 11
                      // Dst: (BnezRxImmX16 CPU16Regs:i32:$rx, (bb:Other):$targ16)
/*5805*/            0, /*End of Scope*/
/*5806*/          /*Scope*/ 29, /*->5836*/
/*5807*/            OPC_CheckInteger, 1, 
/*5809*/            OPC_MoveParent,
/*5810*/            OPC_MoveChild, 2,
/*5812*/            OPC_CheckCondCode, ISD::SETLT,
/*5814*/            OPC_MoveParent,
/*5815*/            OPC_CheckType, MVT::i32,
/*5817*/            OPC_MoveParent,
/*5818*/            OPC_RecordChild2, // #2 = $dst
/*5819*/            OPC_MoveChild, 2,
/*5821*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5824*/            OPC_MoveParent,
/*5825*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5827*/            OPC_EmitMergeInputChains1_0,
/*5828*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BLEZ), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 i32:i32:$lhs, 1:i32, SETLT:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BLEZ i32:i32:$lhs, (bb:Other):$dst)
/*5836*/          /*Scope*/ 38, /*->5875*/
/*5837*/            OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5848*/            OPC_MoveParent,
/*5849*/            OPC_MoveChild, 2,
/*5851*/            OPC_CheckCondCode, ISD::SETGT,
/*5853*/            OPC_MoveParent,
/*5854*/            OPC_CheckType, MVT::i32,
/*5856*/            OPC_MoveParent,
/*5857*/            OPC_RecordChild2, // #2 = $dst
/*5858*/            OPC_MoveChild, 2,
/*5860*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5863*/            OPC_MoveParent,
/*5864*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5866*/            OPC_EmitMergeInputChains1_0,
/*5867*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BGEZ), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 i32:i32:$lhs, -1:i32, SETGT:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BGEZ i32:i32:$lhs, (bb:Other):$dst)
/*5875*/          0, /*End of Scope*/
/*5876*/        /*Scope*/ 50|128,5/*690*/, /*->6568*/
/*5878*/          OPC_RecordChild1, // #2 = $rhs
/*5879*/          OPC_Scope, 63|128,2/*319*/, /*->6201*/ // 2 children in Scope
/*5882*/            OPC_MoveChild, 1,
/*5884*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5887*/            OPC_Scope, 87, /*->5976*/ // 5 children in Scope
/*5889*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*5891*/              OPC_MoveParent,
/*5892*/              OPC_MoveChild, 2,
/*5894*/              OPC_Scope, 39, /*->5935*/ // 2 children in Scope
/*5896*/                OPC_CheckCondCode, ISD::SETGE,
/*5898*/                OPC_MoveParent,
/*5899*/                OPC_CheckType, MVT::i32,
/*5901*/                OPC_MoveParent,
/*5902*/                OPC_RecordChild2, // #3 = $dst
/*5903*/                OPC_MoveChild, 2,
/*5905*/                OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5908*/                OPC_MoveParent,
/*5909*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5911*/                OPC_EmitMergeInputChains1_0,
/*5912*/                OPC_EmitConvertToTarget, 2,
/*5914*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*5923*/                OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*5926*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 5, 6, 3, 
                        // Src: (brcond (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 10
                        // Dst: (BEQ (SLTi:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
/*5935*/              /*Scope*/ 39, /*->5975*/
/*5936*/                OPC_CheckCondCode, ISD::SETUGE,
/*5938*/                OPC_MoveParent,
/*5939*/                OPC_CheckType, MVT::i32,
/*5941*/                OPC_MoveParent,
/*5942*/                OPC_RecordChild2, // #3 = $dst
/*5943*/                OPC_MoveChild, 2,
/*5945*/                OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5948*/                OPC_MoveParent,
/*5949*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5951*/                OPC_EmitMergeInputChains1_0,
/*5952*/                OPC_EmitConvertToTarget, 2,
/*5954*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*5963*/                OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*5966*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 5, 6, 3, 
                        // Src: (brcond (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 10
                        // Dst: (BEQ (SLTiu:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
/*5975*/              0, /*End of Scope*/
/*5976*/            /*Scope*/ 93, /*->6070*/
/*5977*/              OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*5979*/              OPC_MoveParent,
/*5980*/              OPC_MoveChild, 2,
/*5982*/              OPC_Scope, 42, /*->6026*/ // 2 children in Scope
/*5984*/                OPC_CheckCondCode, ISD::SETGT,
/*5986*/                OPC_MoveParent,
/*5987*/                OPC_CheckType, MVT::i32,
/*5989*/                OPC_MoveParent,
/*5990*/                OPC_RecordChild2, // #3 = $dst
/*5991*/                OPC_MoveChild, 2,
/*5993*/                OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5996*/                OPC_MoveParent,
/*5997*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5999*/                OPC_EmitMergeInputChains1_0,
/*6000*/                OPC_EmitConvertToTarget, 2,
/*6002*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*6005*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 5,  // Results = #6
/*6014*/                OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6017*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 6, 7, 3, 
                        // Src: (brcond (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), (bb:Other):$dst) - Complexity = 10
                        // Dst: (BEQ (SLTi:i32 GPR32:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), ZERO:i32, (bb:Other):$dst)
/*6026*/              /*Scope*/ 42, /*->6069*/
/*6027*/                OPC_CheckCondCode, ISD::SETUGT,
/*6029*/                OPC_MoveParent,
/*6030*/                OPC_CheckType, MVT::i32,
/*6032*/                OPC_MoveParent,
/*6033*/                OPC_RecordChild2, // #3 = $dst
/*6034*/                OPC_MoveChild, 2,
/*6036*/                OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6039*/                OPC_MoveParent,
/*6040*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6042*/                OPC_EmitMergeInputChains1_0,
/*6043*/                OPC_EmitConvertToTarget, 2,
/*6045*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*6048*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 5,  // Results = #6
/*6057*/                OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6060*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 6, 7, 3, 
                        // Src: (brcond (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), (bb:Other):$dst) - Complexity = 10
                        // Dst: (BEQ (SLTiu:i32 GPR32:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), ZERO:i32, (bb:Other):$dst)
/*6069*/              0, /*End of Scope*/
/*6070*/            /*Scope*/ 32, /*->6103*/
/*6071*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*6073*/              OPC_MoveParent,
/*6074*/              OPC_MoveChild, 2,
/*6076*/              OPC_CheckCondCode, ISD::SETEQ,
/*6078*/              OPC_MoveParent,
/*6079*/              OPC_CheckType, MVT::i32,
/*6081*/              OPC_MoveParent,
/*6082*/              OPC_RecordChild2, // #3 = $targ16
/*6083*/              OPC_MoveChild, 2,
/*6085*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6088*/              OPC_MoveParent,
/*6089*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6091*/              OPC_EmitMergeInputChains1_0,
/*6092*/              OPC_EmitConvertToTarget, 2,
/*6094*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BteqzT8CmpiX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 4, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm, SETEQ:Other), (bb:Other):$targ16) - Complexity = 10
                      // Dst: (BteqzT8CmpiX16 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, (bb:Other):$targ16)
/*6103*/            /*Scope*/ 63, /*->6167*/
/*6104*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*6106*/              OPC_MoveParent,
/*6107*/              OPC_MoveChild, 2,
/*6109*/              OPC_Scope, 27, /*->6138*/ // 2 children in Scope
/*6111*/                OPC_CheckCondCode, ISD::SETGE,
/*6113*/                OPC_MoveParent,
/*6114*/                OPC_CheckType, MVT::i32,
/*6116*/                OPC_MoveParent,
/*6117*/                OPC_RecordChild2, // #3 = $imm16
/*6118*/                OPC_MoveChild, 2,
/*6120*/                OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6123*/                OPC_MoveParent,
/*6124*/                OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6126*/                OPC_EmitMergeInputChains1_0,
/*6127*/                OPC_EmitConvertToTarget, 2,
/*6129*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BteqzT8SltiX16), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 1, 4, 3, 
                        // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, SETGE:Other), (bb:Other):$imm16) - Complexity = 10
                        // Dst: (BteqzT8SltiX16 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, (bb:Other):$imm16)
/*6138*/              /*Scope*/ 27, /*->6166*/
/*6139*/                OPC_CheckCondCode, ISD::SETLT,
/*6141*/                OPC_MoveParent,
/*6142*/                OPC_CheckType, MVT::i32,
/*6144*/                OPC_MoveParent,
/*6145*/                OPC_RecordChild2, // #3 = $imm16
/*6146*/                OPC_MoveChild, 2,
/*6148*/                OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6151*/                OPC_MoveParent,
/*6152*/                OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6154*/                OPC_EmitMergeInputChains1_0,
/*6155*/                OPC_EmitConvertToTarget, 2,
/*6157*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BtnezT8SltiX16), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 1, 4, 3, 
                        // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, SETLT:Other), (bb:Other):$imm16) - Complexity = 10
                        // Dst: (BtnezT8SltiX16 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, (bb:Other):$imm16)
/*6166*/              0, /*End of Scope*/
/*6167*/            /*Scope*/ 32, /*->6200*/
/*6168*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*6170*/              OPC_MoveParent,
/*6171*/              OPC_MoveChild, 2,
/*6173*/              OPC_CheckCondCode, ISD::SETNE,
/*6175*/              OPC_MoveParent,
/*6176*/              OPC_CheckType, MVT::i32,
/*6178*/              OPC_MoveParent,
/*6179*/              OPC_RecordChild2, // #3 = $targ16
/*6180*/              OPC_MoveChild, 2,
/*6182*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6185*/              OPC_MoveParent,
/*6186*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6188*/              OPC_EmitMergeInputChains1_0,
/*6189*/              OPC_EmitConvertToTarget, 2,
/*6191*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BtnezT8CmpiX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 4, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm, SETNE:Other), (bb:Other):$targ16) - Complexity = 10
                      // Dst: (BtnezT8CmpiX16 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, (bb:Other):$targ16)
/*6200*/            0, /*End of Scope*/
/*6201*/          /*Scope*/ 108|128,2/*364*/, /*->6567*/
/*6203*/            OPC_MoveChild, 2,
/*6205*/            OPC_Scope, 25, /*->6232*/ // 12 children in Scope
/*6207*/              OPC_CheckCondCode, ISD::SETEQ,
/*6209*/              OPC_MoveParent,
/*6210*/              OPC_CheckType, MVT::i32,
/*6212*/              OPC_MoveParent,
/*6213*/              OPC_RecordChild2, // #3 = $offset
/*6214*/              OPC_MoveChild, 2,
/*6216*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6219*/              OPC_MoveParent,
/*6220*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6222*/              OPC_EmitMergeInputChains1_0,
/*6223*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, SETEQ:Other), (bb:Other):$offset) - Complexity = 6
                      // Dst: (BEQ GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, (bb:Other):$offset)
/*6232*/            /*Scope*/ 25, /*->6258*/
/*6233*/              OPC_CheckCondCode, ISD::SETNE,
/*6235*/              OPC_MoveParent,
/*6236*/              OPC_CheckType, MVT::i32,
/*6238*/              OPC_MoveParent,
/*6239*/              OPC_RecordChild2, // #3 = $offset
/*6240*/              OPC_MoveChild, 2,
/*6242*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6245*/              OPC_MoveParent,
/*6246*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6248*/              OPC_EmitMergeInputChains1_0,
/*6249*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BNE), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, SETNE:Other), (bb:Other):$offset) - Complexity = 6
                      // Dst: (BNE GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, (bb:Other):$offset)
/*6258*/            /*Scope*/ 37, /*->6296*/
/*6259*/              OPC_CheckCondCode, ISD::SETGE,
/*6261*/              OPC_MoveParent,
/*6262*/              OPC_CheckType, MVT::i32,
/*6264*/              OPC_MoveParent,
/*6265*/              OPC_RecordChild2, // #3 = $dst
/*6266*/              OPC_MoveChild, 2,
/*6268*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6271*/              OPC_MoveParent,
/*6272*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6274*/              OPC_EmitMergeInputChains1_0,
/*6275*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*6284*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6287*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLT:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), ZERO:i32, (bb:Other):$dst)
/*6296*/            /*Scope*/ 37, /*->6334*/
/*6297*/              OPC_CheckCondCode, ISD::SETUGE,
/*6299*/              OPC_MoveParent,
/*6300*/              OPC_CheckType, MVT::i32,
/*6302*/              OPC_MoveParent,
/*6303*/              OPC_RecordChild2, // #3 = $dst
/*6304*/              OPC_MoveChild, 2,
/*6306*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6309*/              OPC_MoveParent,
/*6310*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6312*/              OPC_EmitMergeInputChains1_0,
/*6313*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*6322*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6325*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLTu:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), ZERO:i32, (bb:Other):$dst)
/*6334*/            /*Scope*/ 37, /*->6372*/
/*6335*/              OPC_CheckCondCode, ISD::SETLE,
/*6337*/              OPC_MoveParent,
/*6338*/              OPC_CheckType, MVT::i32,
/*6340*/              OPC_MoveParent,
/*6341*/              OPC_RecordChild2, // #3 = $dst
/*6342*/              OPC_MoveChild, 2,
/*6344*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6347*/              OPC_MoveParent,
/*6348*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6350*/              OPC_EmitMergeInputChains1_0,
/*6351*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*6360*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6363*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETLE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLT:i32 GPR32:i32:$rhs, GPR32:i32:$lhs), ZERO:i32, (bb:Other):$dst)
/*6372*/            /*Scope*/ 37, /*->6410*/
/*6373*/              OPC_CheckCondCode, ISD::SETULE,
/*6375*/              OPC_MoveParent,
/*6376*/              OPC_CheckType, MVT::i32,
/*6378*/              OPC_MoveParent,
/*6379*/              OPC_RecordChild2, // #3 = $dst
/*6380*/              OPC_MoveChild, 2,
/*6382*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6385*/              OPC_MoveParent,
/*6386*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6388*/              OPC_EmitMergeInputChains1_0,
/*6389*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*6398*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6401*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETULE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLTu:i32 GPR32:i32:$rhs, GPR32:i32:$lhs), ZERO:i32, (bb:Other):$dst)
/*6410*/            /*Scope*/ 25, /*->6436*/
/*6411*/              OPC_CheckCondCode, ISD::SETEQ,
/*6413*/              OPC_MoveParent,
/*6414*/              OPC_CheckType, MVT::i32,
/*6416*/              OPC_MoveParent,
/*6417*/              OPC_RecordChild2, // #3 = $imm16
/*6418*/              OPC_MoveChild, 2,
/*6420*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6423*/              OPC_MoveParent,
/*6424*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6426*/              OPC_EmitMergeInputChains1_0,
/*6427*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BteqzT8CmpX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETEQ:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BteqzT8CmpX16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, (bb:Other):$imm16)
/*6436*/            /*Scope*/ 25, /*->6462*/
/*6437*/              OPC_CheckCondCode, ISD::SETGT,
/*6439*/              OPC_MoveParent,
/*6440*/              OPC_CheckType, MVT::i32,
/*6442*/              OPC_MoveParent,
/*6443*/              OPC_RecordChild2, // #3 = $imm16
/*6444*/              OPC_MoveChild, 2,
/*6446*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6449*/              OPC_MoveParent,
/*6450*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6452*/              OPC_EmitMergeInputChains1_0,
/*6453*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BtnezT8SltX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 2, 1, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETGT:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BtnezT8SltX16 CPU16Regs:i32:$ry, CPU16Regs:i32:$rx, (bb:Other):$imm16)
/*6462*/            /*Scope*/ 25, /*->6488*/
/*6463*/              OPC_CheckCondCode, ISD::SETGE,
/*6465*/              OPC_MoveParent,
/*6466*/              OPC_CheckType, MVT::i32,
/*6468*/              OPC_MoveParent,
/*6469*/              OPC_RecordChild2, // #3 = $imm16
/*6470*/              OPC_MoveChild, 2,
/*6472*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6475*/              OPC_MoveParent,
/*6476*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6478*/              OPC_EmitMergeInputChains1_0,
/*6479*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BteqzT8SltX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETGE:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BteqzT8SltX16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, (bb:Other):$imm16)
/*6488*/            /*Scope*/ 25, /*->6514*/
/*6489*/              OPC_CheckCondCode, ISD::SETLT,
/*6491*/              OPC_MoveParent,
/*6492*/              OPC_CheckType, MVT::i32,
/*6494*/              OPC_MoveParent,
/*6495*/              OPC_RecordChild2, // #3 = $imm16
/*6496*/              OPC_MoveChild, 2,
/*6498*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6501*/              OPC_MoveParent,
/*6502*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6504*/              OPC_EmitMergeInputChains1_0,
/*6505*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BtnezT8SltX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETLT:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BtnezT8SltX16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, (bb:Other):$imm16)
/*6514*/            /*Scope*/ 25, /*->6540*/
/*6515*/              OPC_CheckCondCode, ISD::SETLE,
/*6517*/              OPC_MoveParent,
/*6518*/              OPC_CheckType, MVT::i32,
/*6520*/              OPC_MoveParent,
/*6521*/              OPC_RecordChild2, // #3 = $imm16
/*6522*/              OPC_MoveChild, 2,
/*6524*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6527*/              OPC_MoveParent,
/*6528*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6530*/              OPC_EmitMergeInputChains1_0,
/*6531*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BteqzT8SltX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 2, 1, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETLE:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BteqzT8SltX16 CPU16Regs:i32:$ry, CPU16Regs:i32:$rx, (bb:Other):$imm16)
/*6540*/            /*Scope*/ 25, /*->6566*/
/*6541*/              OPC_CheckCondCode, ISD::SETNE,
/*6543*/              OPC_MoveParent,
/*6544*/              OPC_CheckType, MVT::i32,
/*6546*/              OPC_MoveParent,
/*6547*/              OPC_RecordChild2, // #3 = $imm16
/*6548*/              OPC_MoveChild, 2,
/*6550*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6553*/              OPC_MoveParent,
/*6554*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6556*/              OPC_EmitMergeInputChains1_0,
/*6557*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BtnezT8CmpX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETNE:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BtnezT8CmpX16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, (bb:Other):$imm16)
/*6566*/            0, /*End of Scope*/
/*6567*/          0, /*End of Scope*/
/*6568*/        0, /*End of Scope*/
/*6569*/      /*Scope*/ 12|128,5/*652*/, /*->7223*/
/*6571*/        OPC_CheckChild0Type, MVT::i64,
/*6573*/        OPC_Scope, 112|128,1/*240*/, /*->6816*/ // 2 children in Scope
/*6576*/          OPC_MoveChild, 1,
/*6578*/          OPC_Scope, 37|128,1/*165*/, /*->6746*/ // 3 children in Scope
/*6581*/            OPC_CheckInteger, 0, 
/*6583*/            OPC_MoveParent,
/*6584*/            OPC_MoveChild, 2,
/*6586*/            OPC_Scope, 24, /*->6612*/ // 6 children in Scope
/*6588*/              OPC_CheckCondCode, ISD::SETGE,
/*6590*/              OPC_MoveParent,
/*6591*/              OPC_CheckType, MVT::i32,
/*6593*/              OPC_MoveParent,
/*6594*/              OPC_RecordChild2, // #2 = $offset
/*6595*/              OPC_MoveChild, 2,
/*6597*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6600*/              OPC_MoveParent,
/*6601*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6603*/              OPC_EmitMergeInputChains1_0,
/*6604*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BGEZ64), 0|OPFL_Chain,
                          0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                      // Src: (brcond (setcc:i32 GPR64Opnd:i64:$rs, 0:i64, SETGE:Other), (bb:Other):$offset) - Complexity = 11
                      // Dst: (BGEZ64 GPR64Opnd:i64:$rs, (bb:Other):$offset)
/*6612*/            /*Scope*/ 24, /*->6637*/
/*6613*/              OPC_CheckCondCode, ISD::SETGT,
/*6615*/              OPC_MoveParent,
/*6616*/              OPC_CheckType, MVT::i32,
/*6618*/              OPC_MoveParent,
/*6619*/              OPC_RecordChild2, // #2 = $offset
/*6620*/              OPC_MoveChild, 2,
/*6622*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6625*/              OPC_MoveParent,
/*6626*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6628*/              OPC_EmitMergeInputChains1_0,
/*6629*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BGTZ64), 0|OPFL_Chain,
                          0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                      // Src: (brcond (setcc:i32 GPR64Opnd:i64:$rs, 0:i64, SETGT:Other), (bb:Other):$offset) - Complexity = 11
                      // Dst: (BGTZ64 GPR64Opnd:i64:$rs, (bb:Other):$offset)
/*6637*/            /*Scope*/ 24, /*->6662*/
/*6638*/              OPC_CheckCondCode, ISD::SETLE,
/*6640*/              OPC_MoveParent,
/*6641*/              OPC_CheckType, MVT::i32,
/*6643*/              OPC_MoveParent,
/*6644*/              OPC_RecordChild2, // #2 = $offset
/*6645*/              OPC_MoveChild, 2,
/*6647*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6650*/              OPC_MoveParent,
/*6651*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6653*/              OPC_EmitMergeInputChains1_0,
/*6654*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BLEZ64), 0|OPFL_Chain,
                          0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                      // Src: (brcond (setcc:i32 GPR64Opnd:i64:$rs, 0:i64, SETLE:Other), (bb:Other):$offset) - Complexity = 11
                      // Dst: (BLEZ64 GPR64Opnd:i64:$rs, (bb:Other):$offset)
/*6662*/            /*Scope*/ 24, /*->6687*/
/*6663*/              OPC_CheckCondCode, ISD::SETLT,
/*6665*/              OPC_MoveParent,
/*6666*/              OPC_CheckType, MVT::i32,
/*6668*/              OPC_MoveParent,
/*6669*/              OPC_RecordChild2, // #2 = $offset
/*6670*/              OPC_MoveChild, 2,
/*6672*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6675*/              OPC_MoveParent,
/*6676*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6678*/              OPC_EmitMergeInputChains1_0,
/*6679*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BLTZ64), 0|OPFL_Chain,
                          0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                      // Src: (brcond (setcc:i32 GPR64Opnd:i64:$rs, 0:i64, SETLT:Other), (bb:Other):$offset) - Complexity = 11
                      // Dst: (BLTZ64 GPR64Opnd:i64:$rs, (bb:Other):$offset)
/*6687*/            /*Scope*/ 28, /*->6716*/
/*6688*/              OPC_CheckCondCode, ISD::SETNE,
/*6690*/              OPC_MoveParent,
/*6691*/              OPC_CheckType, MVT::i32,
/*6693*/              OPC_MoveParent,
/*6694*/              OPC_RecordChild2, // #2 = $dst
/*6695*/              OPC_MoveChild, 2,
/*6697*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6700*/              OPC_MoveParent,
/*6701*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6703*/              OPC_EmitMergeInputChains1_0,
/*6704*/              OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*6707*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BNE64), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                      // Src: (brcond (setcc:i32 GPR64:i64:$lhs, 0:i64, SETNE:Other), (bb:Other):$dst) - Complexity = 11
                      // Dst: (BNE64 GPR64:i64:$lhs, ZERO_64:i64, (bb:Other):$dst)
/*6716*/            /*Scope*/ 28, /*->6745*/
/*6717*/              OPC_CheckCondCode, ISD::SETEQ,
/*6719*/              OPC_MoveParent,
/*6720*/              OPC_CheckType, MVT::i32,
/*6722*/              OPC_MoveParent,
/*6723*/              OPC_RecordChild2, // #2 = $dst
/*6724*/              OPC_MoveChild, 2,
/*6726*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6729*/              OPC_MoveParent,
/*6730*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6732*/              OPC_EmitMergeInputChains1_0,
/*6733*/              OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*6736*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ64), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                      // Src: (brcond (setcc:i32 GPR64:i64:$lhs, 0:i64, SETEQ:Other), (bb:Other):$dst) - Complexity = 11
                      // Dst: (BEQ64 GPR64:i64:$lhs, ZERO_64:i64, (bb:Other):$dst)
/*6745*/            0, /*End of Scope*/
/*6746*/          /*Scope*/ 29, /*->6776*/
/*6747*/            OPC_CheckInteger, 1, 
/*6749*/            OPC_MoveParent,
/*6750*/            OPC_MoveChild, 2,
/*6752*/            OPC_CheckCondCode, ISD::SETLT,
/*6754*/            OPC_MoveParent,
/*6755*/            OPC_CheckType, MVT::i32,
/*6757*/            OPC_MoveParent,
/*6758*/            OPC_RecordChild2, // #2 = $dst
/*6759*/            OPC_MoveChild, 2,
/*6761*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6764*/            OPC_MoveParent,
/*6765*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6767*/            OPC_EmitMergeInputChains1_0,
/*6768*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BLEZ64), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 i64:i64:$lhs, 1:i64, SETLT:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BLEZ64 i64:i64:$lhs, (bb:Other):$dst)
/*6776*/          /*Scope*/ 38, /*->6815*/
/*6777*/            OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6788*/            OPC_MoveParent,
/*6789*/            OPC_MoveChild, 2,
/*6791*/            OPC_CheckCondCode, ISD::SETGT,
/*6793*/            OPC_MoveParent,
/*6794*/            OPC_CheckType, MVT::i32,
/*6796*/            OPC_MoveParent,
/*6797*/            OPC_RecordChild2, // #2 = $dst
/*6798*/            OPC_MoveChild, 2,
/*6800*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6803*/            OPC_MoveParent,
/*6804*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6806*/            OPC_EmitMergeInputChains1_0,
/*6807*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BGEZ64), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 i64:i64:$lhs, -1:i64, SETGT:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BGEZ64 i64:i64:$lhs, (bb:Other):$dst)
/*6815*/          0, /*End of Scope*/
/*6816*/        /*Scope*/ 20|128,3/*404*/, /*->7222*/
/*6818*/          OPC_RecordChild1, // #2 = $rhs
/*6819*/          OPC_Scope, 61|128,1/*189*/, /*->7011*/ // 2 children in Scope
/*6822*/            OPC_MoveChild, 1,
/*6824*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6827*/            OPC_Scope, 87, /*->6916*/ // 2 children in Scope
/*6829*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*6831*/              OPC_MoveParent,
/*6832*/              OPC_MoveChild, 2,
/*6834*/              OPC_Scope, 39, /*->6875*/ // 2 children in Scope
/*6836*/                OPC_CheckCondCode, ISD::SETGE,
/*6838*/                OPC_MoveParent,
/*6839*/                OPC_CheckType, MVT::i32,
/*6841*/                OPC_MoveParent,
/*6842*/                OPC_RecordChild2, // #3 = $dst
/*6843*/                OPC_MoveChild, 2,
/*6845*/                OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6848*/                OPC_MoveParent,
/*6849*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6851*/                OPC_EmitMergeInputChains1_0,
/*6852*/                OPC_EmitConvertToTarget, 2,
/*6854*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*6863*/                OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6866*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 5, 6, 3, 
                        // Src: (brcond (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 10
                        // Dst: (BEQ (SLTi64:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
/*6875*/              /*Scope*/ 39, /*->6915*/
/*6876*/                OPC_CheckCondCode, ISD::SETUGE,
/*6878*/                OPC_MoveParent,
/*6879*/                OPC_CheckType, MVT::i32,
/*6881*/                OPC_MoveParent,
/*6882*/                OPC_RecordChild2, // #3 = $dst
/*6883*/                OPC_MoveChild, 2,
/*6885*/                OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6888*/                OPC_MoveParent,
/*6889*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6891*/                OPC_EmitMergeInputChains1_0,
/*6892*/                OPC_EmitConvertToTarget, 2,
/*6894*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*6903*/                OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6906*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 5, 6, 3, 
                        // Src: (brcond (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 10
                        // Dst: (BEQ (SLTiu64:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
/*6915*/              0, /*End of Scope*/
/*6916*/            /*Scope*/ 93, /*->7010*/
/*6917*/              OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*6919*/              OPC_MoveParent,
/*6920*/              OPC_MoveChild, 2,
/*6922*/              OPC_Scope, 42, /*->6966*/ // 2 children in Scope
/*6924*/                OPC_CheckCondCode, ISD::SETGT,
/*6926*/                OPC_MoveParent,
/*6927*/                OPC_CheckType, MVT::i32,
/*6929*/                OPC_MoveParent,
/*6930*/                OPC_RecordChild2, // #3 = $dst
/*6931*/                OPC_MoveChild, 2,
/*6933*/                OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6936*/                OPC_MoveParent,
/*6937*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6939*/                OPC_EmitMergeInputChains1_0,
/*6940*/                OPC_EmitConvertToTarget, 2,
/*6942*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*6945*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 5,  // Results = #6
/*6954*/                OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6957*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 6, 7, 3, 
                        // Src: (brcond (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), (bb:Other):$dst) - Complexity = 10
                        // Dst: (BEQ (SLTi64:i32 GPR64:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), ZERO:i32, (bb:Other):$dst)
/*6966*/              /*Scope*/ 42, /*->7009*/
/*6967*/                OPC_CheckCondCode, ISD::SETUGT,
/*6969*/                OPC_MoveParent,
/*6970*/                OPC_CheckType, MVT::i32,
/*6972*/                OPC_MoveParent,
/*6973*/                OPC_RecordChild2, // #3 = $dst
/*6974*/                OPC_MoveChild, 2,
/*6976*/                OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6979*/                OPC_MoveParent,
/*6980*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6982*/                OPC_EmitMergeInputChains1_0,
/*6983*/                OPC_EmitConvertToTarget, 2,
/*6985*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*6988*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 5,  // Results = #6
/*6997*/                OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*7000*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 6, 7, 3, 
                        // Src: (brcond (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), (bb:Other):$dst) - Complexity = 10
                        // Dst: (BEQ (SLTiu64:i32 GPR64:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), ZERO:i32, (bb:Other):$dst)
/*7009*/              0, /*End of Scope*/
/*7010*/            0, /*End of Scope*/
/*7011*/          /*Scope*/ 80|128,1/*208*/, /*->7221*/
/*7013*/            OPC_MoveChild, 2,
/*7015*/            OPC_Scope, 25, /*->7042*/ // 6 children in Scope
/*7017*/              OPC_CheckCondCode, ISD::SETEQ,
/*7019*/              OPC_MoveParent,
/*7020*/              OPC_CheckType, MVT::i32,
/*7022*/              OPC_MoveParent,
/*7023*/              OPC_RecordChild2, // #3 = $offset
/*7024*/              OPC_MoveChild, 2,
/*7026*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*7029*/              OPC_MoveParent,
/*7030*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7032*/              OPC_EmitMergeInputChains1_0,
/*7033*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ64), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt, SETEQ:Other), (bb:Other):$offset) - Complexity = 6
                      // Dst: (BEQ64 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt, (bb:Other):$offset)
/*7042*/            /*Scope*/ 25, /*->7068*/
/*7043*/              OPC_CheckCondCode, ISD::SETNE,
/*7045*/              OPC_MoveParent,
/*7046*/              OPC_CheckType, MVT::i32,
/*7048*/              OPC_MoveParent,
/*7049*/              OPC_RecordChild2, // #3 = $offset
/*7050*/              OPC_MoveChild, 2,
/*7052*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*7055*/              OPC_MoveParent,
/*7056*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7058*/              OPC_EmitMergeInputChains1_0,
/*7059*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BNE64), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt, SETNE:Other), (bb:Other):$offset) - Complexity = 6
                      // Dst: (BNE64 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt, (bb:Other):$offset)
/*7068*/            /*Scope*/ 37, /*->7106*/
/*7069*/              OPC_CheckCondCode, ISD::SETGE,
/*7071*/              OPC_MoveParent,
/*7072*/              OPC_CheckType, MVT::i32,
/*7074*/              OPC_MoveParent,
/*7075*/              OPC_RecordChild2, // #3 = $dst
/*7076*/              OPC_MoveChild, 2,
/*7078*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*7081*/              OPC_MoveParent,
/*7082*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7084*/              OPC_EmitMergeInputChains1_0,
/*7085*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*7094*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*7097*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLT64:i32 GPR64:i64:$lhs, GPR64:i64:$rhs), ZERO:i32, (bb:Other):$dst)
/*7106*/            /*Scope*/ 37, /*->7144*/
/*7107*/              OPC_CheckCondCode, ISD::SETUGE,
/*7109*/              OPC_MoveParent,
/*7110*/              OPC_CheckType, MVT::i32,
/*7112*/              OPC_MoveParent,
/*7113*/              OPC_RecordChild2, // #3 = $dst
/*7114*/              OPC_MoveChild, 2,
/*7116*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*7119*/              OPC_MoveParent,
/*7120*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7122*/              OPC_EmitMergeInputChains1_0,
/*7123*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*7132*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*7135*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLTu64:i32 GPR64:i64:$lhs, GPR64:i64:$rhs), ZERO:i32, (bb:Other):$dst)
/*7144*/            /*Scope*/ 37, /*->7182*/
/*7145*/              OPC_CheckCondCode, ISD::SETLE,
/*7147*/              OPC_MoveParent,
/*7148*/              OPC_CheckType, MVT::i32,
/*7150*/              OPC_MoveParent,
/*7151*/              OPC_RecordChild2, // #3 = $dst
/*7152*/              OPC_MoveChild, 2,
/*7154*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*7157*/              OPC_MoveParent,
/*7158*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7160*/              OPC_EmitMergeInputChains1_0,
/*7161*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*7170*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*7173*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETLE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLT64:i32 GPR64:i64:$rhs, GPR64:i64:$lhs), ZERO:i32, (bb:Other):$dst)
/*7182*/            /*Scope*/ 37, /*->7220*/
/*7183*/              OPC_CheckCondCode, ISD::SETULE,
/*7185*/              OPC_MoveParent,
/*7186*/              OPC_CheckType, MVT::i32,
/*7188*/              OPC_MoveParent,
/*7189*/              OPC_RecordChild2, // #3 = $dst
/*7190*/              OPC_MoveChild, 2,
/*7192*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*7195*/              OPC_MoveParent,
/*7196*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7198*/              OPC_EmitMergeInputChains1_0,
/*7199*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*7208*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*7211*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETULE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLTu64:i32 GPR64:i64:$rhs, GPR64:i64:$lhs), ZERO:i32, (bb:Other):$dst)
/*7220*/            0, /*End of Scope*/
/*7221*/          0, /*End of Scope*/
/*7222*/        0, /*End of Scope*/
/*7223*/      0, /*End of Scope*/
/*7224*/    /*Scope*/ 68, /*->7293*/
/*7225*/      OPC_RecordChild1, // #1 = $cond
/*7226*/      OPC_Scope, 39, /*->7267*/ // 2 children in Scope
/*7228*/        OPC_CheckChild1Type, MVT::i32,
/*7230*/        OPC_RecordChild2, // #2 = $dst
/*7231*/        OPC_MoveChild, 2,
/*7233*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*7236*/        OPC_MoveParent,
/*7237*/        OPC_Scope, 15, /*->7254*/ // 2 children in Scope
/*7239*/          OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7241*/          OPC_EmitMergeInputChains1_0,
/*7242*/          OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*7245*/          OPC_MorphNodeTo, TARGET_VAL(Mips::BNE), 0|OPFL_Chain,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                  // Src: (brcond GPR32:i32:$cond, (bb:Other):$dst) - Complexity = 3
                  // Dst: (BNE GPR32:i32:$cond, ZERO:i32, (bb:Other):$dst)
/*7254*/        /*Scope*/ 11, /*->7266*/
/*7255*/          OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*7257*/          OPC_EmitMergeInputChains1_0,
/*7258*/          OPC_MorphNodeTo, TARGET_VAL(Mips::BnezRxImmX16), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond CPU16Regs:i32:$rx, (bb:Other):$targ16) - Complexity = 3
                  // Dst: (BnezRxImmX16 CPU16Regs:i32:$rx, (bb:Other):$targ16)
/*7266*/        0, /*End of Scope*/
/*7267*/      /*Scope*/ 24, /*->7292*/
/*7268*/        OPC_CheckChild1Type, MVT::i64,
/*7270*/        OPC_RecordChild2, // #2 = $dst
/*7271*/        OPC_MoveChild, 2,
/*7273*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*7276*/        OPC_MoveParent,
/*7277*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7279*/        OPC_EmitMergeInputChains1_0,
/*7280*/        OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*7283*/        OPC_MorphNodeTo, TARGET_VAL(Mips::BNE64), 0|OPFL_Chain,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                // Src: (brcond GPR64:i64:$cond, (bb:Other):$dst) - Complexity = 3
                // Dst: (BNE64 GPR64:i64:$cond, ZERO_64:i64, (bb:Other):$dst)
/*7292*/      0, /*End of Scope*/
/*7293*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 78,  TARGET_VAL(ISD::CTLZ),// ->7375
/*7297*/    OPC_Scope, 47, /*->7346*/ // 2 children in Scope
/*7299*/      OPC_MoveChild, 0,
/*7301*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*7304*/      OPC_RecordChild0, // #0 = $rs
/*7305*/      OPC_MoveChild, 1,
/*7307*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7318*/      OPC_MoveParent,
/*7319*/      OPC_MoveParent,
/*7320*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->7333
/*7323*/        OPC_CheckPatternPredicate, 11, // (Subtarget.hasBitCount()) && (Subtarget.hasStandardEncoding())
/*7325*/        OPC_MorphNodeTo, TARGET_VAL(Mips::CLO), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (ctlz:i32 (xor:i32 GPR32Opnd:i32:$rs, -1:i32)) - Complexity = 11
                // Dst: (CLO:i32 GPR32Opnd:i32:$rs)
              /*SwitchType*/ 10,  MVT::i64,// ->7345
/*7335*/        OPC_CheckPatternPredicate, 11, // (Subtarget.hasBitCount()) && (Subtarget.hasStandardEncoding())
/*7337*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DCLO), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (ctlz:i64 (xor:i64 GPR64Opnd:i64:$rs, -1:i64)) - Complexity = 11
                // Dst: (DCLO:i64 GPR64Opnd:i64:$rs)
              0, // EndSwitchType
/*7346*/    /*Scope*/ 27, /*->7374*/
/*7347*/      OPC_RecordChild0, // #0 = $rs
/*7348*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->7361
/*7351*/        OPC_CheckPatternPredicate, 11, // (Subtarget.hasBitCount()) && (Subtarget.hasStandardEncoding())
/*7353*/        OPC_MorphNodeTo, TARGET_VAL(Mips::CLZ), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (ctlz:i32 GPR32Opnd:i32:$rs) - Complexity = 3
                // Dst: (CLZ:i32 GPR32Opnd:i32:$rs)
              /*SwitchType*/ 10,  MVT::i64,// ->7373
/*7363*/        OPC_CheckPatternPredicate, 11, // (Subtarget.hasBitCount()) && (Subtarget.hasStandardEncoding())
/*7365*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DCLZ), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (ctlz:i64 GPR64Opnd:i64:$rs) - Complexity = 3
                // Dst: (DCLZ:i64 GPR64Opnd:i64:$rs)
              0, // EndSwitchType
/*7374*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 118|128,33/*4342*/,  TARGET_VAL(ISD::SELECT),// ->11721
/*7379*/    OPC_Scope, 47|128,16/*2095*/, /*->9477*/ // 4 children in Scope
/*7382*/      OPC_MoveChild, 0,
/*7384*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*7387*/      OPC_RecordChild0, // #0 = $lhs
/*7388*/      OPC_Scope, 67|128,9/*1219*/, /*->8610*/ // 2 children in Scope
/*7391*/        OPC_CheckChild0Type, MVT::i32,
/*7393*/        OPC_Scope, 5|128,1/*133*/, /*->7529*/ // 2 children in Scope
/*7396*/          OPC_MoveChild, 1,
/*7398*/          OPC_CheckInteger, 0, 
/*7400*/          OPC_MoveParent,
/*7401*/          OPC_MoveChild, 2,
/*7403*/          OPC_Scope, 38, /*->7443*/ // 4 children in Scope
/*7405*/            OPC_CheckCondCode, ISD::SETEQ,
/*7407*/            OPC_MoveParent,
/*7408*/            OPC_CheckType, MVT::i32,
/*7410*/            OPC_MoveParent,
/*7411*/            OPC_RecordChild1, // #1 = $T
/*7412*/            OPC_RecordChild2, // #2 = $F
/*7413*/            OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->7428
/*7416*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7418*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i32 (setcc:i32 GPR32:i32:$lhs, 0:i32, SETEQ:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 11
                      // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, GPR32:i32:$lhs, GPR32:i32:$F)
                    /*SwitchType*/ 12,  MVT::i64,// ->7442
/*7430*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7432*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i64 (setcc:i32 GPR32:i32:$lhs, 0:i32, SETEQ:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 11
                      // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, GPR32:i32:$lhs, GPR64:i64:$F)
                    0, // EndSwitchType
/*7443*/          /*Scope*/ 38, /*->7482*/
/*7444*/            OPC_CheckCondCode, ISD::SETNE,
/*7446*/            OPC_MoveParent,
/*7447*/            OPC_CheckType, MVT::i32,
/*7449*/            OPC_MoveParent,
/*7450*/            OPC_RecordChild1, // #1 = $T
/*7451*/            OPC_RecordChild2, // #2 = $F
/*7452*/            OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->7467
/*7455*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7457*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i32 (setcc:i32 GPR32:i32:$lhs, 0:i32, SETNE:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 11
                      // Dst: (MOVN_I_I:i32 GPR32:i32:$T, GPR32:i32:$lhs, GPR32:i32:$F)
                    /*SwitchType*/ 12,  MVT::i64,// ->7481
/*7469*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7471*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i64 (setcc:i32 GPR32:i32:$lhs, 0:i32, SETNE:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 11
                      // Dst: (MOVN_I_I64:i64 GPR64:i64:$T, GPR32:i32:$lhs, GPR64:i64:$F)
                    0, // EndSwitchType
/*7482*/          /*Scope*/ 22, /*->7505*/
/*7483*/            OPC_CheckCondCode, ISD::SETEQ,
/*7485*/            OPC_MoveParent,
/*7486*/            OPC_CheckType, MVT::i32,
/*7488*/            OPC_MoveParent,
/*7489*/            OPC_RecordChild1, // #1 = $x
/*7490*/            OPC_RecordChild2, // #2 = $y
/*7491*/            OPC_CheckType, MVT::i32,
/*7493*/            OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*7495*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SelBeqZ), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 0, 
                    // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, 0:i32, SETEQ:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 11
                    // Dst: (SelBeqZ:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a)
/*7505*/          /*Scope*/ 22, /*->7528*/
/*7506*/            OPC_CheckCondCode, ISD::SETNE,
/*7508*/            OPC_MoveParent,
/*7509*/            OPC_CheckType, MVT::i32,
/*7511*/            OPC_MoveParent,
/*7512*/            OPC_RecordChild1, // #1 = $x
/*7513*/            OPC_RecordChild2, // #2 = $y
/*7514*/            OPC_CheckType, MVT::i32,
/*7516*/            OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*7518*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SelBneZ), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 0, 
                    // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, 0:i32, SETNE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 11
                    // Dst: (SelBneZ:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a)
/*7528*/          0, /*End of Scope*/
/*7529*/        /*Scope*/ 54|128,8/*1078*/, /*->8609*/
/*7531*/          OPC_RecordChild1, // #1 = $rhs
/*7532*/          OPC_Scope, 114|128,3/*498*/, /*->8033*/ // 2 children in Scope
/*7535*/            OPC_MoveChild, 1,
/*7537*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7540*/            OPC_Scope, 75, /*->7617*/ // 8 children in Scope
/*7542*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*7544*/              OPC_MoveParent,
/*7545*/              OPC_MoveChild, 2,
/*7547*/              OPC_Scope, 33, /*->7582*/ // 2 children in Scope
/*7549*/                OPC_CheckCondCode, ISD::SETGE,
/*7551*/                OPC_MoveParent,
/*7552*/                OPC_CheckType, MVT::i32,
/*7554*/                OPC_MoveParent,
/*7555*/                OPC_RecordChild1, // #2 = $T
/*7556*/                OPC_RecordChild2, // #3 = $F
/*7557*/                OPC_CheckType, MVT::i32,
/*7559*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7561*/                OPC_EmitConvertToTarget, 1,
/*7563*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7572*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i32 (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, (SLTi:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), GPR32:i32:$F)
/*7582*/              /*Scope*/ 33, /*->7616*/
/*7583*/                OPC_CheckCondCode, ISD::SETUGE,
/*7585*/                OPC_MoveParent,
/*7586*/                OPC_CheckType, MVT::i32,
/*7588*/                OPC_MoveParent,
/*7589*/                OPC_RecordChild1, // #2 = $T
/*7590*/                OPC_RecordChild2, // #3 = $F
/*7591*/                OPC_CheckType, MVT::i32,
/*7593*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7595*/                OPC_EmitConvertToTarget, 1,
/*7597*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7606*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i32 (setcc:i32 GPR32:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, (SLTiu:i32 GPR32:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), GPR32:i32:$F)
/*7616*/              0, /*End of Scope*/
/*7617*/            /*Scope*/ 81, /*->7699*/
/*7618*/              OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*7620*/              OPC_MoveParent,
/*7621*/              OPC_MoveChild, 2,
/*7623*/              OPC_Scope, 36, /*->7661*/ // 2 children in Scope
/*7625*/                OPC_CheckCondCode, ISD::SETGT,
/*7627*/                OPC_MoveParent,
/*7628*/                OPC_CheckType, MVT::i32,
/*7630*/                OPC_MoveParent,
/*7631*/                OPC_RecordChild1, // #2 = $T
/*7632*/                OPC_RecordChild2, // #3 = $F
/*7633*/                OPC_CheckType, MVT::i32,
/*7635*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7637*/                OPC_EmitConvertToTarget, 1,
/*7639*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*7642*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*7651*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i32 (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, (SLTi:i32 GPR32:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), GPR32:i32:$F)
/*7661*/              /*Scope*/ 36, /*->7698*/
/*7662*/                OPC_CheckCondCode, ISD::SETUGT,
/*7664*/                OPC_MoveParent,
/*7665*/                OPC_CheckType, MVT::i32,
/*7667*/                OPC_MoveParent,
/*7668*/                OPC_RecordChild1, // #2 = $T
/*7669*/                OPC_RecordChild2, // #3 = $F
/*7670*/                OPC_CheckType, MVT::i32,
/*7672*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7674*/                OPC_EmitConvertToTarget, 1,
/*7676*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*7679*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*7688*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i32 (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, (SLTiu:i32 GPR32:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), GPR32:i32:$F)
/*7698*/              0, /*End of Scope*/
/*7699*/            /*Scope*/ 38, /*->7738*/
/*7700*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*7702*/              OPC_MoveParent,
/*7703*/              OPC_MoveChild, 2,
/*7705*/              OPC_CheckCondCode, ISD::SETEQ,
/*7707*/              OPC_MoveParent,
/*7708*/              OPC_CheckType, MVT::i32,
/*7710*/              OPC_MoveParent,
/*7711*/              OPC_RecordChild1, // #2 = $T
/*7712*/              OPC_RecordChild2, // #3 = $F
/*7713*/              OPC_CheckType, MVT::i32,
/*7715*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7717*/              OPC_EmitConvertToTarget, 1,
/*7719*/              OPC_EmitNode, TARGET_VAL(Mips::XORi), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7728*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:i32 (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16, SETEQ:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 10
                      // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, (XORi:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16), GPR32:i32:$F)
/*7738*/            /*Scope*/ 75, /*->7814*/
/*7739*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*7741*/              OPC_MoveParent,
/*7742*/              OPC_MoveChild, 2,
/*7744*/              OPC_Scope, 33, /*->7779*/ // 2 children in Scope
/*7746*/                OPC_CheckCondCode, ISD::SETGE,
/*7748*/                OPC_MoveParent,
/*7749*/                OPC_CheckType, MVT::i32,
/*7751*/                OPC_MoveParent,
/*7752*/                OPC_RecordChild1, // #2 = $T
/*7753*/                OPC_RecordChild2, // #3 = $F
/*7754*/                OPC_CheckType, MVT::i64,
/*7756*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7758*/                OPC_EmitConvertToTarget, 1,
/*7760*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7769*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i64 (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, (SLTi:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), GPR64:i64:$F)
/*7779*/              /*Scope*/ 33, /*->7813*/
/*7780*/                OPC_CheckCondCode, ISD::SETUGE,
/*7782*/                OPC_MoveParent,
/*7783*/                OPC_CheckType, MVT::i32,
/*7785*/                OPC_MoveParent,
/*7786*/                OPC_RecordChild1, // #2 = $T
/*7787*/                OPC_RecordChild2, // #3 = $F
/*7788*/                OPC_CheckType, MVT::i64,
/*7790*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7792*/                OPC_EmitConvertToTarget, 1,
/*7794*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7803*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i64 (setcc:i32 GPR32:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, (SLTiu:i32 GPR32:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), GPR64:i64:$F)
/*7813*/              0, /*End of Scope*/
/*7814*/            /*Scope*/ 81, /*->7896*/
/*7815*/              OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*7817*/              OPC_MoveParent,
/*7818*/              OPC_MoveChild, 2,
/*7820*/              OPC_Scope, 36, /*->7858*/ // 2 children in Scope
/*7822*/                OPC_CheckCondCode, ISD::SETGT,
/*7824*/                OPC_MoveParent,
/*7825*/                OPC_CheckType, MVT::i32,
/*7827*/                OPC_MoveParent,
/*7828*/                OPC_RecordChild1, // #2 = $T
/*7829*/                OPC_RecordChild2, // #3 = $F
/*7830*/                OPC_CheckType, MVT::i64,
/*7832*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7834*/                OPC_EmitConvertToTarget, 1,
/*7836*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*7839*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*7848*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i64 (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, (SLTi:i32 GPR32:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), GPR64:i64:$F)
/*7858*/              /*Scope*/ 36, /*->7895*/
/*7859*/                OPC_CheckCondCode, ISD::SETUGT,
/*7861*/                OPC_MoveParent,
/*7862*/                OPC_CheckType, MVT::i32,
/*7864*/                OPC_MoveParent,
/*7865*/                OPC_RecordChild1, // #2 = $T
/*7866*/                OPC_RecordChild2, // #3 = $F
/*7867*/                OPC_CheckType, MVT::i64,
/*7869*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7871*/                OPC_EmitConvertToTarget, 1,
/*7873*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*7876*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*7885*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i64 (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, (SLTiu:i32 GPR32:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), GPR64:i64:$F)
/*7895*/              0, /*End of Scope*/
/*7896*/            /*Scope*/ 38, /*->7935*/
/*7897*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*7899*/              OPC_MoveParent,
/*7900*/              OPC_MoveChild, 2,
/*7902*/              OPC_CheckCondCode, ISD::SETEQ,
/*7904*/              OPC_MoveParent,
/*7905*/              OPC_CheckType, MVT::i32,
/*7907*/              OPC_MoveParent,
/*7908*/              OPC_RecordChild1, // #2 = $T
/*7909*/              OPC_RecordChild2, // #3 = $F
/*7910*/              OPC_CheckType, MVT::i64,
/*7912*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7914*/              OPC_EmitConvertToTarget, 1,
/*7916*/              OPC_EmitNode, TARGET_VAL(Mips::XORi), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7925*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:i64 (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16, SETEQ:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 10
                      // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, (XORi:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16), GPR64:i64:$F)
/*7935*/            /*Scope*/ 30, /*->7966*/
/*7936*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*7938*/              OPC_MoveParent,
/*7939*/              OPC_MoveChild, 2,
/*7941*/              OPC_CheckCondCode, ISD::SETLT,
/*7943*/              OPC_MoveParent,
/*7944*/              OPC_CheckType, MVT::i32,
/*7946*/              OPC_MoveParent,
/*7947*/              OPC_RecordChild1, // #2 = $x
/*7948*/              OPC_RecordChild2, // #3 = $y
/*7949*/              OPC_CheckType, MVT::i32,
/*7951*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*7953*/              OPC_EmitConvertToTarget, 1,
/*7955*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBtneZSlti), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 0, 4, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, (imm:i32)<<P:Predicate_immSExt16>>:$b, SETLT:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 10
                      // Dst: (SelTBtneZSlti:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a, (imm:i32)<<P:Predicate_immSExt16>>:$b)
/*7966*/            /*Scope*/ 65, /*->8032*/
/*7967*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*7969*/              OPC_MoveParent,
/*7970*/              OPC_MoveChild, 2,
/*7972*/              OPC_Scope, 28, /*->8002*/ // 2 children in Scope
/*7974*/                OPC_CheckCondCode, ISD::SETEQ,
/*7976*/                OPC_MoveParent,
/*7977*/                OPC_CheckType, MVT::i32,
/*7979*/                OPC_MoveParent,
/*7980*/                OPC_RecordChild1, // #2 = $x
/*7981*/                OPC_RecordChild2, // #3 = $y
/*7982*/                OPC_CheckType, MVT::i32,
/*7984*/                OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*7986*/                OPC_EmitConvertToTarget, 1,
/*7988*/                OPC_EmitNodeXForm, 0, 4, // LO16
/*7991*/                OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZCmpi), 0,
                            1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 0, 5, 
                        // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$k, SETEQ:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 10
                        // Dst: (SelTBteqZCmpi:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a, (LO16:i32 (imm:i32)<<P:Predicate_immZExt16>>:$k))
/*8002*/              /*Scope*/ 28, /*->8031*/
/*8003*/                OPC_CheckCondCode, ISD::SETNE,
/*8005*/                OPC_MoveParent,
/*8006*/                OPC_CheckType, MVT::i32,
/*8008*/                OPC_MoveParent,
/*8009*/                OPC_RecordChild1, // #2 = $x
/*8010*/                OPC_RecordChild2, // #3 = $y
/*8011*/                OPC_CheckType, MVT::i32,
/*8013*/                OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8015*/                OPC_EmitConvertToTarget, 1,
/*8017*/                OPC_EmitNodeXForm, 0, 4, // LO16
/*8020*/                OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBtneZCmpi), 0,
                            1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 0, 5, 
                        // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$k, SETNE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 10
                        // Dst: (SelTBtneZCmpi:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a, (LO16:i32 (imm:i32)<<P:Predicate_immZExt16>>:$k))
/*8031*/              0, /*End of Scope*/
/*8032*/            0, /*End of Scope*/
/*8033*/          /*Scope*/ 61|128,4/*573*/, /*->8608*/
/*8035*/            OPC_MoveChild, 2,
/*8037*/            OPC_Scope, 31, /*->8070*/ // 19 children in Scope
/*8039*/              OPC_CheckCondCode, ISD::SETGE,
/*8041*/              OPC_MoveParent,
/*8042*/              OPC_CheckType, MVT::i32,
/*8044*/              OPC_MoveParent,
/*8045*/              OPC_RecordChild1, // #2 = $T
/*8046*/              OPC_RecordChild2, // #3 = $F
/*8047*/              OPC_CheckType, MVT::i32,
/*8049*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8051*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8060*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETGE:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, (SLT:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), GPR32:i32:$F)
/*8070*/            /*Scope*/ 31, /*->8102*/
/*8071*/              OPC_CheckCondCode, ISD::SETUGE,
/*8073*/              OPC_MoveParent,
/*8074*/              OPC_CheckType, MVT::i32,
/*8076*/              OPC_MoveParent,
/*8077*/              OPC_RecordChild1, // #2 = $T
/*8078*/              OPC_RecordChild2, // #3 = $F
/*8079*/              OPC_CheckType, MVT::i32,
/*8081*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8083*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8092*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETUGE:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, (SLTu:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), GPR32:i32:$F)
/*8102*/            /*Scope*/ 31, /*->8134*/
/*8103*/              OPC_CheckCondCode, ISD::SETLE,
/*8105*/              OPC_MoveParent,
/*8106*/              OPC_CheckType, MVT::i32,
/*8108*/              OPC_MoveParent,
/*8109*/              OPC_RecordChild1, // #2 = $T
/*8110*/              OPC_RecordChild2, // #3 = $F
/*8111*/              OPC_CheckType, MVT::i32,
/*8113*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8115*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*8124*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETLE:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, (SLT:i32 GPR32:i32:$rhs, GPR32:i32:$lhs), GPR32:i32:$F)
/*8134*/            /*Scope*/ 31, /*->8166*/
/*8135*/              OPC_CheckCondCode, ISD::SETULE,
/*8137*/              OPC_MoveParent,
/*8138*/              OPC_CheckType, MVT::i32,
/*8140*/              OPC_MoveParent,
/*8141*/              OPC_RecordChild1, // #2 = $T
/*8142*/              OPC_RecordChild2, // #3 = $F
/*8143*/              OPC_CheckType, MVT::i32,
/*8145*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8147*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*8156*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETULE:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, (SLTu:i32 GPR32:i32:$rhs, GPR32:i32:$lhs), GPR32:i32:$F)
/*8166*/            /*Scope*/ 31, /*->8198*/
/*8167*/              OPC_CheckCondCode, ISD::SETEQ,
/*8169*/              OPC_MoveParent,
/*8170*/              OPC_CheckType, MVT::i32,
/*8172*/              OPC_MoveParent,
/*8173*/              OPC_RecordChild1, // #2 = $T
/*8174*/              OPC_RecordChild2, // #3 = $F
/*8175*/              OPC_CheckType, MVT::i32,
/*8177*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8179*/              OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8188*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETEQ:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, (XOR:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), GPR32:i32:$F)
/*8198*/            /*Scope*/ 31, /*->8230*/
/*8199*/              OPC_CheckCondCode, ISD::SETGE,
/*8201*/              OPC_MoveParent,
/*8202*/              OPC_CheckType, MVT::i32,
/*8204*/              OPC_MoveParent,
/*8205*/              OPC_RecordChild1, // #2 = $T
/*8206*/              OPC_RecordChild2, // #3 = $F
/*8207*/              OPC_CheckType, MVT::i64,
/*8209*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8211*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8220*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETGE:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, (SLT:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), GPR64:i64:$F)
/*8230*/            /*Scope*/ 31, /*->8262*/
/*8231*/              OPC_CheckCondCode, ISD::SETUGE,
/*8233*/              OPC_MoveParent,
/*8234*/              OPC_CheckType, MVT::i32,
/*8236*/              OPC_MoveParent,
/*8237*/              OPC_RecordChild1, // #2 = $T
/*8238*/              OPC_RecordChild2, // #3 = $F
/*8239*/              OPC_CheckType, MVT::i64,
/*8241*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8243*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8252*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETUGE:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, (SLTu:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), GPR64:i64:$F)
/*8262*/            /*Scope*/ 31, /*->8294*/
/*8263*/              OPC_CheckCondCode, ISD::SETLE,
/*8265*/              OPC_MoveParent,
/*8266*/              OPC_CheckType, MVT::i32,
/*8268*/              OPC_MoveParent,
/*8269*/              OPC_RecordChild1, // #2 = $T
/*8270*/              OPC_RecordChild2, // #3 = $F
/*8271*/              OPC_CheckType, MVT::i64,
/*8273*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8275*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*8284*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETLE:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, (SLT:i32 GPR32:i32:$rhs, GPR32:i32:$lhs), GPR64:i64:$F)
/*8294*/            /*Scope*/ 31, /*->8326*/
/*8295*/              OPC_CheckCondCode, ISD::SETULE,
/*8297*/              OPC_MoveParent,
/*8298*/              OPC_CheckType, MVT::i32,
/*8300*/              OPC_MoveParent,
/*8301*/              OPC_RecordChild1, // #2 = $T
/*8302*/              OPC_RecordChild2, // #3 = $F
/*8303*/              OPC_CheckType, MVT::i64,
/*8305*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8307*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*8316*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETULE:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, (SLTu:i32 GPR32:i32:$rhs, GPR32:i32:$lhs), GPR64:i64:$F)
/*8326*/            /*Scope*/ 31, /*->8358*/
/*8327*/              OPC_CheckCondCode, ISD::SETEQ,
/*8329*/              OPC_MoveParent,
/*8330*/              OPC_CheckType, MVT::i32,
/*8332*/              OPC_MoveParent,
/*8333*/              OPC_RecordChild1, // #2 = $T
/*8334*/              OPC_RecordChild2, // #3 = $F
/*8335*/              OPC_CheckType, MVT::i64,
/*8337*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8339*/              OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8348*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETEQ:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, (XOR:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), GPR64:i64:$F)
/*8358*/            /*Scope*/ 56, /*->8415*/
/*8359*/              OPC_CheckCondCode, ISD::SETNE,
/*8361*/              OPC_MoveParent,
/*8362*/              OPC_CheckType, MVT::i32,
/*8364*/              OPC_MoveParent,
/*8365*/              OPC_RecordChild1, // #2 = $T
/*8366*/              OPC_RecordChild2, // #3 = $F
/*8367*/              OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->8391
/*8370*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8372*/                OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8381*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i32 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETNE:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 6
                        // Dst: (MOVN_I_I:i32 GPR32:i32:$T, (XOR:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), GPR32:i32:$F)
                      /*SwitchType*/ 21,  MVT::i64,// ->8414
/*8393*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8395*/                OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8404*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i64 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETNE:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 6
                        // Dst: (MOVN_I_I64:i64 GPR64:i64:$T, (XOR:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), GPR64:i64:$F)
                      0, // EndSwitchType
/*8415*/            /*Scope*/ 23, /*->8439*/
/*8416*/              OPC_CheckCondCode, ISD::SETGE,
/*8418*/              OPC_MoveParent,
/*8419*/              OPC_CheckType, MVT::i32,
/*8421*/              OPC_MoveParent,
/*8422*/              OPC_RecordChild1, // #2 = $x
/*8423*/              OPC_RecordChild2, // #3 = $y
/*8424*/              OPC_CheckType, MVT::i32,
/*8426*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8428*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZSlt), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 0, 1, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETGE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBteqZSlt:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a, CPU16Regs:i32:$b)
/*8439*/            /*Scope*/ 23, /*->8463*/
/*8440*/              OPC_CheckCondCode, ISD::SETGT,
/*8442*/              OPC_MoveParent,
/*8443*/              OPC_CheckType, MVT::i32,
/*8445*/              OPC_MoveParent,
/*8446*/              OPC_RecordChild1, // #2 = $x
/*8447*/              OPC_RecordChild2, // #3 = $y
/*8448*/              OPC_CheckType, MVT::i32,
/*8450*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8452*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBtneZSlt), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETGT:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBtneZSlt:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*8463*/            /*Scope*/ 23, /*->8487*/
/*8464*/              OPC_CheckCondCode, ISD::SETUGE,
/*8466*/              OPC_MoveParent,
/*8467*/              OPC_CheckType, MVT::i32,
/*8469*/              OPC_MoveParent,
/*8470*/              OPC_RecordChild1, // #2 = $x
/*8471*/              OPC_RecordChild2, // #3 = $y
/*8472*/              OPC_CheckType, MVT::i32,
/*8474*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8476*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZSltu), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 0, 1, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETUGE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBteqZSltu:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a, CPU16Regs:i32:$b)
/*8487*/            /*Scope*/ 23, /*->8511*/
/*8488*/              OPC_CheckCondCode, ISD::SETUGT,
/*8490*/              OPC_MoveParent,
/*8491*/              OPC_CheckType, MVT::i32,
/*8493*/              OPC_MoveParent,
/*8494*/              OPC_RecordChild1, // #2 = $x
/*8495*/              OPC_RecordChild2, // #3 = $y
/*8496*/              OPC_CheckType, MVT::i32,
/*8498*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8500*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBtneZSltu), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETUGT:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBtneZSltu:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*8511*/            /*Scope*/ 23, /*->8535*/
/*8512*/              OPC_CheckCondCode, ISD::SETLE,
/*8514*/              OPC_MoveParent,
/*8515*/              OPC_CheckType, MVT::i32,
/*8517*/              OPC_MoveParent,
/*8518*/              OPC_RecordChild1, // #2 = $x
/*8519*/              OPC_RecordChild2, // #3 = $y
/*8520*/              OPC_CheckType, MVT::i32,
/*8522*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8524*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZSlt), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETLE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBteqZSlt:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*8535*/            /*Scope*/ 23, /*->8559*/
/*8536*/              OPC_CheckCondCode, ISD::SETULE,
/*8538*/              OPC_MoveParent,
/*8539*/              OPC_CheckType, MVT::i32,
/*8541*/              OPC_MoveParent,
/*8542*/              OPC_RecordChild1, // #2 = $x
/*8543*/              OPC_RecordChild2, // #3 = $y
/*8544*/              OPC_CheckType, MVT::i32,
/*8546*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8548*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZSltu), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETULE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBteqZSltu:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*8559*/            /*Scope*/ 23, /*->8583*/
/*8560*/              OPC_CheckCondCode, ISD::SETEQ,
/*8562*/              OPC_MoveParent,
/*8563*/              OPC_CheckType, MVT::i32,
/*8565*/              OPC_MoveParent,
/*8566*/              OPC_RecordChild1, // #2 = $x
/*8567*/              OPC_RecordChild2, // #3 = $y
/*8568*/              OPC_CheckType, MVT::i32,
/*8570*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8572*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZCmp), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETEQ:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBteqZCmp:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*8583*/            /*Scope*/ 23, /*->8607*/
/*8584*/              OPC_CheckCondCode, ISD::SETNE,
/*8586*/              OPC_MoveParent,
/*8587*/              OPC_CheckType, MVT::i32,
/*8589*/              OPC_MoveParent,
/*8590*/              OPC_RecordChild1, // #2 = $x
/*8591*/              OPC_RecordChild2, // #3 = $y
/*8592*/              OPC_CheckType, MVT::i32,
/*8594*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8596*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBtneZCmp), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETNE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBtneZCmp:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*8607*/            0, /*End of Scope*/
/*8608*/          0, /*End of Scope*/
/*8609*/        0, /*End of Scope*/
/*8610*/      /*Scope*/ 96|128,6/*864*/, /*->9476*/
/*8612*/        OPC_CheckChild0Type, MVT::i64,
/*8614*/        OPC_Scope, 87, /*->8703*/ // 2 children in Scope
/*8616*/          OPC_MoveChild, 1,
/*8618*/          OPC_CheckInteger, 0, 
/*8620*/          OPC_MoveParent,
/*8621*/          OPC_MoveChild, 2,
/*8623*/          OPC_Scope, 38, /*->8663*/ // 2 children in Scope
/*8625*/            OPC_CheckCondCode, ISD::SETEQ,
/*8627*/            OPC_MoveParent,
/*8628*/            OPC_CheckType, MVT::i32,
/*8630*/            OPC_MoveParent,
/*8631*/            OPC_RecordChild1, // #1 = $T
/*8632*/            OPC_RecordChild2, // #2 = $F
/*8633*/            OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->8648
/*8636*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8638*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i32 (setcc:i32 GPR64:i64:$lhs, 0:i64, SETEQ:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 11
                      // Dst: (MOVZ_I64_I:i32 GPR32:i32:$T, GPR64:i64:$lhs, GPR32:i32:$F)
                    /*SwitchType*/ 12,  MVT::i64,// ->8662
/*8650*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8652*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i64 (setcc:i32 GPR64:i64:$lhs, 0:i64, SETEQ:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 11
                      // Dst: (MOVZ_I64_I64:i64 GPR64:i64:$T, GPR64:i64:$lhs, GPR64:i64:$F)
                    0, // EndSwitchType
/*8663*/          /*Scope*/ 38, /*->8702*/
/*8664*/            OPC_CheckCondCode, ISD::SETNE,
/*8666*/            OPC_MoveParent,
/*8667*/            OPC_CheckType, MVT::i32,
/*8669*/            OPC_MoveParent,
/*8670*/            OPC_RecordChild1, // #1 = $T
/*8671*/            OPC_RecordChild2, // #2 = $F
/*8672*/            OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->8687
/*8675*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8677*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i32 (setcc:i32 GPR64:i64:$lhs, 0:i64, SETNE:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 11
                      // Dst: (MOVN_I64_I:i32 GPR32:i32:$T, GPR64:i64:$lhs, GPR32:i32:$F)
                    /*SwitchType*/ 12,  MVT::i64,// ->8701
/*8689*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8691*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i64 (setcc:i32 GPR64:i64:$lhs, 0:i64, SETNE:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 11
                      // Dst: (MOVN_I64_I64:i64 GPR64:i64:$T, GPR64:i64:$lhs, GPR64:i64:$F)
                    0, // EndSwitchType
/*8702*/          0, /*End of Scope*/
/*8703*/        /*Scope*/ 2|128,6/*770*/, /*->9475*/
/*8705*/          OPC_RecordChild1, // #1 = $rhs
/*8706*/          OPC_Scope, 5|128,3/*389*/, /*->9098*/ // 2 children in Scope
/*8709*/            OPC_MoveChild, 1,
/*8711*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8714*/            OPC_Scope, 75, /*->8791*/ // 5 children in Scope
/*8716*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*8718*/              OPC_MoveParent,
/*8719*/              OPC_MoveChild, 2,
/*8721*/              OPC_Scope, 33, /*->8756*/ // 2 children in Scope
/*8723*/                OPC_CheckCondCode, ISD::SETGE,
/*8725*/                OPC_MoveParent,
/*8726*/                OPC_CheckType, MVT::i32,
/*8728*/                OPC_MoveParent,
/*8729*/                OPC_RecordChild1, // #2 = $T
/*8730*/                OPC_RecordChild2, // #3 = $F
/*8731*/                OPC_CheckType, MVT::i32,
/*8733*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8735*/                OPC_EmitConvertToTarget, 1,
/*8737*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*8746*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i32 (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, (SLTi64:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), GPR32:i32:$F)
/*8756*/              /*Scope*/ 33, /*->8790*/
/*8757*/                OPC_CheckCondCode, ISD::SETUGE,
/*8759*/                OPC_MoveParent,
/*8760*/                OPC_CheckType, MVT::i32,
/*8762*/                OPC_MoveParent,
/*8763*/                OPC_RecordChild1, // #2 = $T
/*8764*/                OPC_RecordChild2, // #3 = $F
/*8765*/                OPC_CheckType, MVT::i32,
/*8767*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8769*/                OPC_EmitConvertToTarget, 1,
/*8771*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*8780*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i32 (setcc:i32 GPR64:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, (SLTiu64:i32 GPR64:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh), GPR32:i32:$F)
/*8790*/              0, /*End of Scope*/
/*8791*/            /*Scope*/ 81, /*->8873*/
/*8792*/              OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*8794*/              OPC_MoveParent,
/*8795*/              OPC_MoveChild, 2,
/*8797*/              OPC_Scope, 36, /*->8835*/ // 2 children in Scope
/*8799*/                OPC_CheckCondCode, ISD::SETGT,
/*8801*/                OPC_MoveParent,
/*8802*/                OPC_CheckType, MVT::i32,
/*8804*/                OPC_MoveParent,
/*8805*/                OPC_RecordChild1, // #2 = $T
/*8806*/                OPC_RecordChild2, // #3 = $F
/*8807*/                OPC_CheckType, MVT::i32,
/*8809*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8811*/                OPC_EmitConvertToTarget, 1,
/*8813*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*8816*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*8825*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i32 (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, (SLTi64:i32 GPR64:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), GPR32:i32:$F)
/*8835*/              /*Scope*/ 36, /*->8872*/
/*8836*/                OPC_CheckCondCode, ISD::SETUGT,
/*8838*/                OPC_MoveParent,
/*8839*/                OPC_CheckType, MVT::i32,
/*8841*/                OPC_MoveParent,
/*8842*/                OPC_RecordChild1, // #2 = $T
/*8843*/                OPC_RecordChild2, // #3 = $F
/*8844*/                OPC_CheckType, MVT::i32,
/*8846*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8848*/                OPC_EmitConvertToTarget, 1,
/*8850*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*8853*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*8862*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i32 (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, (SLTiu64:i32 GPR64:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), GPR32:i32:$F)
/*8872*/              0, /*End of Scope*/
/*8873*/            /*Scope*/ 75, /*->8949*/
/*8874*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*8876*/              OPC_MoveParent,
/*8877*/              OPC_MoveChild, 2,
/*8879*/              OPC_Scope, 33, /*->8914*/ // 2 children in Scope
/*8881*/                OPC_CheckCondCode, ISD::SETGE,
/*8883*/                OPC_MoveParent,
/*8884*/                OPC_CheckType, MVT::i32,
/*8886*/                OPC_MoveParent,
/*8887*/                OPC_RecordChild1, // #2 = $T
/*8888*/                OPC_RecordChild2, // #3 = $F
/*8889*/                OPC_CheckType, MVT::i64,
/*8891*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8893*/                OPC_EmitConvertToTarget, 1,
/*8895*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*8904*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i64 (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, (SLTi64:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), GPR64:i64:$F)
/*8914*/              /*Scope*/ 33, /*->8948*/
/*8915*/                OPC_CheckCondCode, ISD::SETUGE,
/*8917*/                OPC_MoveParent,
/*8918*/                OPC_CheckType, MVT::i32,
/*8920*/                OPC_MoveParent,
/*8921*/                OPC_RecordChild1, // #2 = $T
/*8922*/                OPC_RecordChild2, // #3 = $F
/*8923*/                OPC_CheckType, MVT::i64,
/*8925*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8927*/                OPC_EmitConvertToTarget, 1,
/*8929*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*8938*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i64 (setcc:i32 GPR64:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, (SLTiu64:i32 GPR64:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh), GPR64:i64:$F)
/*8948*/              0, /*End of Scope*/
/*8949*/            /*Scope*/ 81, /*->9031*/
/*8950*/              OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*8952*/              OPC_MoveParent,
/*8953*/              OPC_MoveChild, 2,
/*8955*/              OPC_Scope, 36, /*->8993*/ // 2 children in Scope
/*8957*/                OPC_CheckCondCode, ISD::SETGT,
/*8959*/                OPC_MoveParent,
/*8960*/                OPC_CheckType, MVT::i32,
/*8962*/                OPC_MoveParent,
/*8963*/                OPC_RecordChild1, // #2 = $T
/*8964*/                OPC_RecordChild2, // #3 = $F
/*8965*/                OPC_CheckType, MVT::i64,
/*8967*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8969*/                OPC_EmitConvertToTarget, 1,
/*8971*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*8974*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*8983*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i64 (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, (SLTi64:i32 GPR64:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), GPR64:i64:$F)
/*8993*/              /*Scope*/ 36, /*->9030*/
/*8994*/                OPC_CheckCondCode, ISD::SETUGT,
/*8996*/                OPC_MoveParent,
/*8997*/                OPC_CheckType, MVT::i32,
/*8999*/                OPC_MoveParent,
/*9000*/                OPC_RecordChild1, // #2 = $T
/*9001*/                OPC_RecordChild2, // #3 = $F
/*9002*/                OPC_CheckType, MVT::i64,
/*9004*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9006*/                OPC_EmitConvertToTarget, 1,
/*9008*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*9011*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*9020*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i64 (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, (SLTiu64:i32 GPR64:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), GPR64:i64:$F)
/*9030*/              0, /*End of Scope*/
/*9031*/            /*Scope*/ 65, /*->9097*/
/*9032*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*9034*/              OPC_MoveParent,
/*9035*/              OPC_MoveChild, 2,
/*9037*/              OPC_CheckCondCode, ISD::SETEQ,
/*9039*/              OPC_MoveParent,
/*9040*/              OPC_CheckType, MVT::i32,
/*9042*/              OPC_MoveParent,
/*9043*/              OPC_RecordChild1, // #2 = $T
/*9044*/              OPC_RecordChild2, // #3 = $F
/*9045*/              OPC_SwitchType /*2 cases */, 23,  MVT::i32,// ->9071
/*9048*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9050*/                OPC_EmitConvertToTarget, 1,
/*9052*/                OPC_EmitNode, TARGET_VAL(Mips::XORi64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 4,  // Results = #5
/*9061*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i32 (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16, SETEQ:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I64_I:i32 GPR32:i32:$T, (XORi64:i64 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16), GPR32:i32:$F)
                      /*SwitchType*/ 23,  MVT::i64,// ->9096
/*9073*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9075*/                OPC_EmitConvertToTarget, 1,
/*9077*/                OPC_EmitNode, TARGET_VAL(Mips::XORi64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 4,  // Results = #5
/*9086*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i64 (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16, SETEQ:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I64_I64:i64 GPR64:i64:$T, (XORi64:i64 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16), GPR64:i64:$F)
                      0, // EndSwitchType
/*9097*/            0, /*End of Scope*/
/*9098*/          /*Scope*/ 118|128,2/*374*/, /*->9474*/
/*9100*/            OPC_MoveChild, 2,
/*9102*/            OPC_Scope, 31, /*->9135*/ // 10 children in Scope
/*9104*/              OPC_CheckCondCode, ISD::SETGE,
/*9106*/              OPC_MoveParent,
/*9107*/              OPC_CheckType, MVT::i32,
/*9109*/              OPC_MoveParent,
/*9110*/              OPC_RecordChild1, // #2 = $T
/*9111*/              OPC_RecordChild2, // #3 = $F
/*9112*/              OPC_CheckType, MVT::i32,
/*9114*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9116*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*9125*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETGE:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, (SLT64:i32 GPR64:i64:$lhs, GPR64:i64:$rhs), GPR32:i32:$F)
/*9135*/            /*Scope*/ 31, /*->9167*/
/*9136*/              OPC_CheckCondCode, ISD::SETUGE,
/*9138*/              OPC_MoveParent,
/*9139*/              OPC_CheckType, MVT::i32,
/*9141*/              OPC_MoveParent,
/*9142*/              OPC_RecordChild1, // #2 = $T
/*9143*/              OPC_RecordChild2, // #3 = $F
/*9144*/              OPC_CheckType, MVT::i32,
/*9146*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9148*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*9157*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETUGE:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, (SLTu64:i32 GPR64:i64:$lhs, GPR64:i64:$rhs), GPR32:i32:$F)
/*9167*/            /*Scope*/ 31, /*->9199*/
/*9168*/              OPC_CheckCondCode, ISD::SETLE,
/*9170*/              OPC_MoveParent,
/*9171*/              OPC_CheckType, MVT::i32,
/*9173*/              OPC_MoveParent,
/*9174*/              OPC_RecordChild1, // #2 = $T
/*9175*/              OPC_RecordChild2, // #3 = $F
/*9176*/              OPC_CheckType, MVT::i32,
/*9178*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9180*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*9189*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETLE:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, (SLT64:i32 GPR64:i64:$rhs, GPR64:i64:$lhs), GPR32:i32:$F)
/*9199*/            /*Scope*/ 31, /*->9231*/
/*9200*/              OPC_CheckCondCode, ISD::SETULE,
/*9202*/              OPC_MoveParent,
/*9203*/              OPC_CheckType, MVT::i32,
/*9205*/              OPC_MoveParent,
/*9206*/              OPC_RecordChild1, // #2 = $T
/*9207*/              OPC_RecordChild2, // #3 = $F
/*9208*/              OPC_CheckType, MVT::i32,
/*9210*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9212*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*9221*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETULE:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, (SLTu64:i32 GPR64:i64:$rhs, GPR64:i64:$lhs), GPR32:i32:$F)
/*9231*/            /*Scope*/ 31, /*->9263*/
/*9232*/              OPC_CheckCondCode, ISD::SETGE,
/*9234*/              OPC_MoveParent,
/*9235*/              OPC_CheckType, MVT::i32,
/*9237*/              OPC_MoveParent,
/*9238*/              OPC_RecordChild1, // #2 = $T
/*9239*/              OPC_RecordChild2, // #3 = $F
/*9240*/              OPC_CheckType, MVT::i64,
/*9242*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9244*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*9253*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETGE:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, (SLT64:i32 GPR64:i64:$lhs, GPR64:i64:$rhs), GPR64:i64:$F)
/*9263*/            /*Scope*/ 31, /*->9295*/
/*9264*/              OPC_CheckCondCode, ISD::SETUGE,
/*9266*/              OPC_MoveParent,
/*9267*/              OPC_CheckType, MVT::i32,
/*9269*/              OPC_MoveParent,
/*9270*/              OPC_RecordChild1, // #2 = $T
/*9271*/              OPC_RecordChild2, // #3 = $F
/*9272*/              OPC_CheckType, MVT::i64,
/*9274*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9276*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*9285*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETUGE:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, (SLTu64:i32 GPR64:i64:$lhs, GPR64:i64:$rhs), GPR64:i64:$F)
/*9295*/            /*Scope*/ 31, /*->9327*/
/*9296*/              OPC_CheckCondCode, ISD::SETLE,
/*9298*/              OPC_MoveParent,
/*9299*/              OPC_CheckType, MVT::i32,
/*9301*/              OPC_MoveParent,
/*9302*/              OPC_RecordChild1, // #2 = $T
/*9303*/              OPC_RecordChild2, // #3 = $F
/*9304*/              OPC_CheckType, MVT::i64,
/*9306*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9308*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*9317*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETLE:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, (SLT64:i32 GPR64:i64:$rhs, GPR64:i64:$lhs), GPR64:i64:$F)
/*9327*/            /*Scope*/ 31, /*->9359*/
/*9328*/              OPC_CheckCondCode, ISD::SETULE,
/*9330*/              OPC_MoveParent,
/*9331*/              OPC_CheckType, MVT::i32,
/*9333*/              OPC_MoveParent,
/*9334*/              OPC_RecordChild1, // #2 = $T
/*9335*/              OPC_RecordChild2, // #3 = $F
/*9336*/              OPC_CheckType, MVT::i64,
/*9338*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9340*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*9349*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETULE:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, (SLTu64:i32 GPR64:i64:$rhs, GPR64:i64:$lhs), GPR64:i64:$F)
/*9359*/            /*Scope*/ 56, /*->9416*/
/*9360*/              OPC_CheckCondCode, ISD::SETEQ,
/*9362*/              OPC_MoveParent,
/*9363*/              OPC_CheckType, MVT::i32,
/*9365*/              OPC_MoveParent,
/*9366*/              OPC_RecordChild1, // #2 = $T
/*9367*/              OPC_RecordChild2, // #3 = $F
/*9368*/              OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->9392
/*9371*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9373*/                OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*9382*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i32 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETEQ:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 6
                        // Dst: (MOVZ_I64_I:i32 GPR32:i32:$T, (XOR64:i64 GPR64:i64:$lhs, GPR64:i64:$rhs), GPR32:i32:$F)
                      /*SwitchType*/ 21,  MVT::i64,// ->9415
/*9394*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9396*/                OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*9405*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i64 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETEQ:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 6
                        // Dst: (MOVZ_I64_I64:i64 GPR64:i64:$T, (XOR64:i64 GPR64:i64:$lhs, GPR64:i64:$rhs), GPR64:i64:$F)
                      0, // EndSwitchType
/*9416*/            /*Scope*/ 56, /*->9473*/
/*9417*/              OPC_CheckCondCode, ISD::SETNE,
/*9419*/              OPC_MoveParent,
/*9420*/              OPC_CheckType, MVT::i32,
/*9422*/              OPC_MoveParent,
/*9423*/              OPC_RecordChild1, // #2 = $T
/*9424*/              OPC_RecordChild2, // #3 = $F
/*9425*/              OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->9449
/*9428*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9430*/                OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*9439*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i32 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETNE:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 6
                        // Dst: (MOVN_I64_I:i32 GPR32:i32:$T, (XOR64:i64 GPR64:i64:$lhs, GPR64:i64:$rhs), GPR32:i32:$F)
                      /*SwitchType*/ 21,  MVT::i64,// ->9472
/*9451*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9453*/                OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*9462*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i64 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETNE:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 6
                        // Dst: (MOVN_I64_I64:i64 GPR64:i64:$T, (XOR64:i64 GPR64:i64:$lhs, GPR64:i64:$rhs), GPR64:i64:$F)
                      0, // EndSwitchType
/*9473*/            0, /*End of Scope*/
/*9474*/          0, /*End of Scope*/
/*9475*/        0, /*End of Scope*/
/*9476*/      0, /*End of Scope*/
/*9477*/    /*Scope*/ 89, /*->9567*/
/*9478*/      OPC_RecordChild0, // #0 = $cond
/*9479*/      OPC_Scope, 50, /*->9531*/ // 2 children in Scope
/*9481*/        OPC_CheckChild0Type, MVT::i32,
/*9483*/        OPC_RecordChild1, // #1 = $T
/*9484*/        OPC_RecordChild2, // #2 = $F
/*9485*/        OPC_SwitchType /*2 cases */, 28,  MVT::i32,// ->9516
/*9488*/          OPC_Scope, 12, /*->9502*/ // 2 children in Scope
/*9490*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9492*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:i32 GPR32:i32:$cond, GPR32:i32:$T, GPR32:i32:$F) - Complexity = 3
                    // Dst: (MOVN_I_I:i32 GPR32:i32:$T, GPR32:i32:$cond, GPR32:i32:$F)
/*9502*/          /*Scope*/ 12, /*->9515*/
/*9503*/            OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*9505*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SelBneZ), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 0, 
                    // Src: (select:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 3
                    // Dst: (SelBneZ:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a)
/*9515*/          0, /*End of Scope*/
                /*SwitchType*/ 12,  MVT::i64,// ->9530
/*9518*/          OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9520*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I64), 0,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:i64 GPR32:i32:$cond, GPR64:i64:$T, GPR64:i64:$F) - Complexity = 3
                  // Dst: (MOVN_I_I64:i64 GPR64:i64:$T, GPR32:i32:$cond, GPR64:i64:$F)
                0, // EndSwitchType
/*9531*/      /*Scope*/ 34, /*->9566*/
/*9532*/        OPC_CheckChild0Type, MVT::i64,
/*9534*/        OPC_RecordChild1, // #1 = $T
/*9535*/        OPC_RecordChild2, // #2 = $F
/*9536*/        OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->9551
/*9539*/          OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9541*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:i32 GPR64:i64:$cond, GPR32:i32:$T, GPR32:i32:$F) - Complexity = 3
                  // Dst: (MOVN_I64_I:i32 GPR32:i32:$T, GPR64:i64:$cond, GPR32:i32:$F)
                /*SwitchType*/ 12,  MVT::i64,// ->9565
/*9553*/          OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9555*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I64), 0,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:i64 GPR64:i64:$cond, GPR64:i64:$T, GPR64:i64:$F) - Complexity = 3
                  // Dst: (MOVN_I64_I64:i64 GPR64:i64:$T, GPR64:i64:$cond, GPR64:i64:$F)
                0, // EndSwitchType
/*9566*/      0, /*End of Scope*/
/*9567*/    /*Scope*/ 13|128,16/*2061*/, /*->11630*/
/*9569*/      OPC_MoveChild, 0,
/*9571*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*9574*/      OPC_RecordChild0, // #0 = $lhs
/*9575*/      OPC_Scope, 71|128,9/*1223*/, /*->10801*/ // 2 children in Scope
/*9578*/        OPC_CheckChild0Type, MVT::i32,
/*9580*/        OPC_Scope, 19|128,1/*147*/, /*->9730*/ // 2 children in Scope
/*9583*/          OPC_MoveChild, 1,
/*9585*/          OPC_CheckInteger, 0, 
/*9587*/          OPC_MoveParent,
/*9588*/          OPC_MoveChild, 2,
/*9590*/          OPC_Scope, 22, /*->9614*/ // 6 children in Scope
/*9592*/            OPC_CheckCondCode, ISD::SETEQ,
/*9594*/            OPC_MoveParent,
/*9595*/            OPC_CheckType, MVT::i32,
/*9597*/            OPC_MoveParent,
/*9598*/            OPC_RecordChild1, // #1 = $T
/*9599*/            OPC_RecordChild2, // #2 = $F
/*9600*/            OPC_CheckType, MVT::f32,
/*9602*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9604*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f32 (setcc:i32 GPR32:i32:$lhs, 0:i32, SETEQ:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 11
                    // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, GPR32:i32:$lhs, FGR32:f32:$F)
/*9614*/          /*Scope*/ 22, /*->9637*/
/*9615*/            OPC_CheckCondCode, ISD::SETNE,
/*9617*/            OPC_MoveParent,
/*9618*/            OPC_CheckType, MVT::i32,
/*9620*/            OPC_MoveParent,
/*9621*/            OPC_RecordChild1, // #1 = $T
/*9622*/            OPC_RecordChild2, // #2 = $F
/*9623*/            OPC_CheckType, MVT::f32,
/*9625*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9627*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f32 (setcc:i32 GPR32:i32:$lhs, 0:i32, SETNE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 11
                    // Dst: (MOVN_I_S:f32 FGR32:f32:$T, GPR32:i32:$lhs, FGR32:f32:$F)
/*9637*/          /*Scope*/ 22, /*->9660*/
/*9638*/            OPC_CheckCondCode, ISD::SETEQ,
/*9640*/            OPC_MoveParent,
/*9641*/            OPC_CheckType, MVT::i32,
/*9643*/            OPC_MoveParent,
/*9644*/            OPC_RecordChild1, // #1 = $T
/*9645*/            OPC_RecordChild2, // #2 = $F
/*9646*/            OPC_CheckType, MVT::f64,
/*9648*/            OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9650*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, 0:i32, SETEQ:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, GPR32:i32:$lhs, AFGR64:f64:$F)
/*9660*/          /*Scope*/ 22, /*->9683*/
/*9661*/            OPC_CheckCondCode, ISD::SETNE,
/*9663*/            OPC_MoveParent,
/*9664*/            OPC_CheckType, MVT::i32,
/*9666*/            OPC_MoveParent,
/*9667*/            OPC_RecordChild1, // #1 = $T
/*9668*/            OPC_RecordChild2, // #2 = $F
/*9669*/            OPC_CheckType, MVT::f64,
/*9671*/            OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9673*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, 0:i32, SETNE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVN_I_D32:f64 AFGR64:f64:$T, GPR32:i32:$lhs, AFGR64:f64:$F)
/*9683*/          /*Scope*/ 22, /*->9706*/
/*9684*/            OPC_CheckCondCode, ISD::SETEQ,
/*9686*/            OPC_MoveParent,
/*9687*/            OPC_CheckType, MVT::i32,
/*9689*/            OPC_MoveParent,
/*9690*/            OPC_RecordChild1, // #1 = $T
/*9691*/            OPC_RecordChild2, // #2 = $F
/*9692*/            OPC_CheckType, MVT::f64,
/*9694*/            OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9696*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, 0:i32, SETEQ:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, GPR32:i32:$lhs, FGR64:f64:$F)
/*9706*/          /*Scope*/ 22, /*->9729*/
/*9707*/            OPC_CheckCondCode, ISD::SETNE,
/*9709*/            OPC_MoveParent,
/*9710*/            OPC_CheckType, MVT::i32,
/*9712*/            OPC_MoveParent,
/*9713*/            OPC_RecordChild1, // #1 = $T
/*9714*/            OPC_RecordChild2, // #2 = $F
/*9715*/            OPC_CheckType, MVT::f64,
/*9717*/            OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9719*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, 0:i32, SETNE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVN_I_D64:f64 FGR64:f64:$T, GPR32:i32:$lhs, FGR64:f64:$F)
/*9729*/          0, /*End of Scope*/
/*9730*/        /*Scope*/ 44|128,8/*1068*/, /*->10800*/
/*9732*/          OPC_RecordChild1, // #1 = $rhs
/*9733*/          OPC_Scope, 97|128,3/*481*/, /*->10217*/ // 2 children in Scope
/*9736*/            OPC_MoveChild, 1,
/*9738*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9741*/            OPC_Scope, 75, /*->9818*/ // 6 children in Scope
/*9743*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*9745*/              OPC_MoveParent,
/*9746*/              OPC_MoveChild, 2,
/*9748*/              OPC_Scope, 33, /*->9783*/ // 2 children in Scope
/*9750*/                OPC_CheckCondCode, ISD::SETGE,
/*9752*/                OPC_MoveParent,
/*9753*/                OPC_CheckType, MVT::i32,
/*9755*/                OPC_MoveParent,
/*9756*/                OPC_RecordChild1, // #2 = $T
/*9757*/                OPC_RecordChild2, // #3 = $F
/*9758*/                OPC_CheckType, MVT::f32,
/*9760*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9762*/                OPC_EmitConvertToTarget, 1,
/*9764*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*9773*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f32 (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTi:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), FGR32:f32:$F)
/*9783*/              /*Scope*/ 33, /*->9817*/
/*9784*/                OPC_CheckCondCode, ISD::SETUGE,
/*9786*/                OPC_MoveParent,
/*9787*/                OPC_CheckType, MVT::i32,
/*9789*/                OPC_MoveParent,
/*9790*/                OPC_RecordChild1, // #2 = $T
/*9791*/                OPC_RecordChild2, // #3 = $F
/*9792*/                OPC_CheckType, MVT::f32,
/*9794*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9796*/                OPC_EmitConvertToTarget, 1,
/*9798*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*9807*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f32 (setcc:i32 GPR32:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTiu:i32 GPR32:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), FGR32:f32:$F)
/*9817*/              0, /*End of Scope*/
/*9818*/            /*Scope*/ 81, /*->9900*/
/*9819*/              OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*9821*/              OPC_MoveParent,
/*9822*/              OPC_MoveChild, 2,
/*9824*/              OPC_Scope, 36, /*->9862*/ // 2 children in Scope
/*9826*/                OPC_CheckCondCode, ISD::SETGT,
/*9828*/                OPC_MoveParent,
/*9829*/                OPC_CheckType, MVT::i32,
/*9831*/                OPC_MoveParent,
/*9832*/                OPC_RecordChild1, // #2 = $T
/*9833*/                OPC_RecordChild2, // #3 = $F
/*9834*/                OPC_CheckType, MVT::f32,
/*9836*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9838*/                OPC_EmitConvertToTarget, 1,
/*9840*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*9843*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*9852*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f32 (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTi:i32 GPR32:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), FGR32:f32:$F)
/*9862*/              /*Scope*/ 36, /*->9899*/
/*9863*/                OPC_CheckCondCode, ISD::SETUGT,
/*9865*/                OPC_MoveParent,
/*9866*/                OPC_CheckType, MVT::i32,
/*9868*/                OPC_MoveParent,
/*9869*/                OPC_RecordChild1, // #2 = $T
/*9870*/                OPC_RecordChild2, // #3 = $F
/*9871*/                OPC_CheckType, MVT::f32,
/*9873*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9875*/                OPC_EmitConvertToTarget, 1,
/*9877*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*9880*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*9889*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f32 (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTiu:i32 GPR32:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), FGR32:f32:$F)
/*9899*/              0, /*End of Scope*/
/*9900*/            /*Scope*/ 75, /*->9976*/
/*9901*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*9903*/              OPC_MoveParent,
/*9904*/              OPC_MoveChild, 2,
/*9906*/              OPC_Scope, 33, /*->9941*/ // 2 children in Scope
/*9908*/                OPC_CheckCondCode, ISD::SETGE,
/*9910*/                OPC_MoveParent,
/*9911*/                OPC_CheckType, MVT::i32,
/*9913*/                OPC_MoveParent,
/*9914*/                OPC_RecordChild1, // #2 = $T
/*9915*/                OPC_RecordChild2, // #3 = $F
/*9916*/                OPC_CheckType, MVT::f64,
/*9918*/                OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9920*/                OPC_EmitConvertToTarget, 1,
/*9922*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*9931*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTi:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), AFGR64:f64:$F)
/*9941*/              /*Scope*/ 33, /*->9975*/
/*9942*/                OPC_CheckCondCode, ISD::SETUGE,
/*9944*/                OPC_MoveParent,
/*9945*/                OPC_CheckType, MVT::i32,
/*9947*/                OPC_MoveParent,
/*9948*/                OPC_RecordChild1, // #2 = $T
/*9949*/                OPC_RecordChild2, // #3 = $F
/*9950*/                OPC_CheckType, MVT::f64,
/*9952*/                OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9954*/                OPC_EmitConvertToTarget, 1,
/*9956*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*9965*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f64 (setcc:i32 GPR32:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTiu:i32 GPR32:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), AFGR64:f64:$F)
/*9975*/              0, /*End of Scope*/
/*9976*/            /*Scope*/ 81, /*->10058*/
/*9977*/              OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*9979*/              OPC_MoveParent,
/*9980*/              OPC_MoveChild, 2,
/*9982*/              OPC_Scope, 36, /*->10020*/ // 2 children in Scope
/*9984*/                OPC_CheckCondCode, ISD::SETGT,
/*9986*/                OPC_MoveParent,
/*9987*/                OPC_CheckType, MVT::i32,
/*9989*/                OPC_MoveParent,
/*9990*/                OPC_RecordChild1, // #2 = $T
/*9991*/                OPC_RecordChild2, // #3 = $F
/*9992*/                OPC_CheckType, MVT::f64,
/*9994*/                OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9996*/                OPC_EmitConvertToTarget, 1,
/*9998*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*10001*/               OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*10010*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTi:i32 GPR32:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), AFGR64:f64:$F)
/*10020*/             /*Scope*/ 36, /*->10057*/
/*10021*/               OPC_CheckCondCode, ISD::SETUGT,
/*10023*/               OPC_MoveParent,
/*10024*/               OPC_CheckType, MVT::i32,
/*10026*/               OPC_MoveParent,
/*10027*/               OPC_RecordChild1, // #2 = $T
/*10028*/               OPC_RecordChild2, // #3 = $F
/*10029*/               OPC_CheckType, MVT::f64,
/*10031*/               OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10033*/               OPC_EmitConvertToTarget, 1,
/*10035*/               OPC_EmitNodeXForm, 1, 4, // Plus1
/*10038*/               OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*10047*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTiu:i32 GPR32:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), AFGR64:f64:$F)
/*10057*/             0, /*End of Scope*/
/*10058*/           /*Scope*/ 75, /*->10134*/
/*10059*/             OPC_CheckPredicate, 28, // Predicate_immSExt16
/*10061*/             OPC_MoveParent,
/*10062*/             OPC_MoveChild, 2,
/*10064*/             OPC_Scope, 33, /*->10099*/ // 2 children in Scope
/*10066*/               OPC_CheckCondCode, ISD::SETGE,
/*10068*/               OPC_MoveParent,
/*10069*/               OPC_CheckType, MVT::i32,
/*10071*/               OPC_MoveParent,
/*10072*/               OPC_RecordChild1, // #2 = $T
/*10073*/               OPC_RecordChild2, // #3 = $F
/*10074*/               OPC_CheckType, MVT::f64,
/*10076*/               OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10078*/               OPC_EmitConvertToTarget, 1,
/*10080*/               OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*10089*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTi:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), FGR64:f64:$F)
/*10099*/             /*Scope*/ 33, /*->10133*/
/*10100*/               OPC_CheckCondCode, ISD::SETUGE,
/*10102*/               OPC_MoveParent,
/*10103*/               OPC_CheckType, MVT::i32,
/*10105*/               OPC_MoveParent,
/*10106*/               OPC_RecordChild1, // #2 = $T
/*10107*/               OPC_RecordChild2, // #3 = $F
/*10108*/               OPC_CheckType, MVT::f64,
/*10110*/               OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10112*/               OPC_EmitConvertToTarget, 1,
/*10114*/               OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*10123*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f64 (setcc:i32 GPR32:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTiu:i32 GPR32:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), FGR64:f64:$F)
/*10133*/             0, /*End of Scope*/
/*10134*/           /*Scope*/ 81, /*->10216*/
/*10135*/             OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*10137*/             OPC_MoveParent,
/*10138*/             OPC_MoveChild, 2,
/*10140*/             OPC_Scope, 36, /*->10178*/ // 2 children in Scope
/*10142*/               OPC_CheckCondCode, ISD::SETGT,
/*10144*/               OPC_MoveParent,
/*10145*/               OPC_CheckType, MVT::i32,
/*10147*/               OPC_MoveParent,
/*10148*/               OPC_RecordChild1, // #2 = $T
/*10149*/               OPC_RecordChild2, // #3 = $F
/*10150*/               OPC_CheckType, MVT::f64,
/*10152*/               OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10154*/               OPC_EmitConvertToTarget, 1,
/*10156*/               OPC_EmitNodeXForm, 1, 4, // Plus1
/*10159*/               OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*10168*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTi:i32 GPR32:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), FGR64:f64:$F)
/*10178*/             /*Scope*/ 36, /*->10215*/
/*10179*/               OPC_CheckCondCode, ISD::SETUGT,
/*10181*/               OPC_MoveParent,
/*10182*/               OPC_CheckType, MVT::i32,
/*10184*/               OPC_MoveParent,
/*10185*/               OPC_RecordChild1, // #2 = $T
/*10186*/               OPC_RecordChild2, // #3 = $F
/*10187*/               OPC_CheckType, MVT::f64,
/*10189*/               OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10191*/               OPC_EmitConvertToTarget, 1,
/*10193*/               OPC_EmitNodeXForm, 1, 4, // Plus1
/*10196*/               OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*10205*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTiu:i32 GPR32:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), FGR64:f64:$F)
/*10215*/             0, /*End of Scope*/
/*10216*/           0, /*End of Scope*/
/*10217*/         /*Scope*/ 68|128,4/*580*/, /*->10799*/
/*10219*/           OPC_MoveChild, 2,
/*10221*/           OPC_Scope, 31, /*->10254*/ // 18 children in Scope
/*10223*/             OPC_CheckCondCode, ISD::SETGE,
/*10225*/             OPC_MoveParent,
/*10226*/             OPC_CheckType, MVT::i32,
/*10228*/             OPC_MoveParent,
/*10229*/             OPC_RecordChild1, // #2 = $T
/*10230*/             OPC_RecordChild2, // #3 = $F
/*10231*/             OPC_CheckType, MVT::f32,
/*10233*/             OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10235*/             OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10244*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLT:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), FGR32:f32:$F)
/*10254*/           /*Scope*/ 31, /*->10286*/
/*10255*/             OPC_CheckCondCode, ISD::SETUGE,
/*10257*/             OPC_MoveParent,
/*10258*/             OPC_CheckType, MVT::i32,
/*10260*/             OPC_MoveParent,
/*10261*/             OPC_RecordChild1, // #2 = $T
/*10262*/             OPC_RecordChild2, // #3 = $F
/*10263*/             OPC_CheckType, MVT::f32,
/*10265*/             OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10267*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10276*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETUGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTu:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), FGR32:f32:$F)
/*10286*/           /*Scope*/ 31, /*->10318*/
/*10287*/             OPC_CheckCondCode, ISD::SETLE,
/*10289*/             OPC_MoveParent,
/*10290*/             OPC_CheckType, MVT::i32,
/*10292*/             OPC_MoveParent,
/*10293*/             OPC_RecordChild1, // #2 = $T
/*10294*/             OPC_RecordChild2, // #3 = $F
/*10295*/             OPC_CheckType, MVT::f32,
/*10297*/             OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10299*/             OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*10308*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETLE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLT:i32 GPR32:i32:$rhs, GPR32:i32:$lhs), FGR32:f32:$F)
/*10318*/           /*Scope*/ 31, /*->10350*/
/*10319*/             OPC_CheckCondCode, ISD::SETULE,
/*10321*/             OPC_MoveParent,
/*10322*/             OPC_CheckType, MVT::i32,
/*10324*/             OPC_MoveParent,
/*10325*/             OPC_RecordChild1, // #2 = $T
/*10326*/             OPC_RecordChild2, // #3 = $F
/*10327*/             OPC_CheckType, MVT::f32,
/*10329*/             OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10331*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*10340*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETULE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTu:i32 GPR32:i32:$rhs, GPR32:i32:$lhs), FGR32:f32:$F)
/*10350*/           /*Scope*/ 31, /*->10382*/
/*10351*/             OPC_CheckCondCode, ISD::SETEQ,
/*10353*/             OPC_MoveParent,
/*10354*/             OPC_CheckType, MVT::i32,
/*10356*/             OPC_MoveParent,
/*10357*/             OPC_RecordChild1, // #2 = $T
/*10358*/             OPC_RecordChild2, // #3 = $F
/*10359*/             OPC_CheckType, MVT::f32,
/*10361*/             OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10363*/             OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10372*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETEQ:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (XOR:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), FGR32:f32:$F)
/*10382*/           /*Scope*/ 31, /*->10414*/
/*10383*/             OPC_CheckCondCode, ISD::SETNE,
/*10385*/             OPC_MoveParent,
/*10386*/             OPC_CheckType, MVT::i32,
/*10388*/             OPC_MoveParent,
/*10389*/             OPC_RecordChild1, // #2 = $T
/*10390*/             OPC_RecordChild2, // #3 = $F
/*10391*/             OPC_CheckType, MVT::f32,
/*10393*/             OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10395*/             OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10404*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETNE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVN_I_S:f32 FGR32:f32:$T, (XOR:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), FGR32:f32:$F)
/*10414*/           /*Scope*/ 31, /*->10446*/
/*10415*/             OPC_CheckCondCode, ISD::SETGE,
/*10417*/             OPC_MoveParent,
/*10418*/             OPC_CheckType, MVT::i32,
/*10420*/             OPC_MoveParent,
/*10421*/             OPC_RecordChild1, // #2 = $T
/*10422*/             OPC_RecordChild2, // #3 = $F
/*10423*/             OPC_CheckType, MVT::f64,
/*10425*/             OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10427*/             OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10436*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETGE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLT:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), AFGR64:f64:$F)
/*10446*/           /*Scope*/ 31, /*->10478*/
/*10447*/             OPC_CheckCondCode, ISD::SETUGE,
/*10449*/             OPC_MoveParent,
/*10450*/             OPC_CheckType, MVT::i32,
/*10452*/             OPC_MoveParent,
/*10453*/             OPC_RecordChild1, // #2 = $T
/*10454*/             OPC_RecordChild2, // #3 = $F
/*10455*/             OPC_CheckType, MVT::f64,
/*10457*/             OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10459*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10468*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETUGE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTu:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), AFGR64:f64:$F)
/*10478*/           /*Scope*/ 31, /*->10510*/
/*10479*/             OPC_CheckCondCode, ISD::SETLE,
/*10481*/             OPC_MoveParent,
/*10482*/             OPC_CheckType, MVT::i32,
/*10484*/             OPC_MoveParent,
/*10485*/             OPC_RecordChild1, // #2 = $T
/*10486*/             OPC_RecordChild2, // #3 = $F
/*10487*/             OPC_CheckType, MVT::f64,
/*10489*/             OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10491*/             OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*10500*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETLE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLT:i32 GPR32:i32:$rhs, GPR32:i32:$lhs), AFGR64:f64:$F)
/*10510*/           /*Scope*/ 31, /*->10542*/
/*10511*/             OPC_CheckCondCode, ISD::SETULE,
/*10513*/             OPC_MoveParent,
/*10514*/             OPC_CheckType, MVT::i32,
/*10516*/             OPC_MoveParent,
/*10517*/             OPC_RecordChild1, // #2 = $T
/*10518*/             OPC_RecordChild2, // #3 = $F
/*10519*/             OPC_CheckType, MVT::f64,
/*10521*/             OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10523*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*10532*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETULE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTu:i32 GPR32:i32:$rhs, GPR32:i32:$lhs), AFGR64:f64:$F)
/*10542*/           /*Scope*/ 31, /*->10574*/
/*10543*/             OPC_CheckCondCode, ISD::SETEQ,
/*10545*/             OPC_MoveParent,
/*10546*/             OPC_CheckType, MVT::i32,
/*10548*/             OPC_MoveParent,
/*10549*/             OPC_RecordChild1, // #2 = $T
/*10550*/             OPC_RecordChild2, // #3 = $F
/*10551*/             OPC_CheckType, MVT::f64,
/*10553*/             OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10555*/             OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10564*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETEQ:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (XOR:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), AFGR64:f64:$F)
/*10574*/           /*Scope*/ 31, /*->10606*/
/*10575*/             OPC_CheckCondCode, ISD::SETNE,
/*10577*/             OPC_MoveParent,
/*10578*/             OPC_CheckType, MVT::i32,
/*10580*/             OPC_MoveParent,
/*10581*/             OPC_RecordChild1, // #2 = $T
/*10582*/             OPC_RecordChild2, // #3 = $F
/*10583*/             OPC_CheckType, MVT::f64,
/*10585*/             OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10587*/             OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10596*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETNE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVN_I_D32:f64 AFGR64:f64:$T, (XOR:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), AFGR64:f64:$F)
/*10606*/           /*Scope*/ 31, /*->10638*/
/*10607*/             OPC_CheckCondCode, ISD::SETGE,
/*10609*/             OPC_MoveParent,
/*10610*/             OPC_CheckType, MVT::i32,
/*10612*/             OPC_MoveParent,
/*10613*/             OPC_RecordChild1, // #2 = $T
/*10614*/             OPC_RecordChild2, // #3 = $F
/*10615*/             OPC_CheckType, MVT::f64,
/*10617*/             OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10619*/             OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10628*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLT:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), FGR64:f64:$F)
/*10638*/           /*Scope*/ 31, /*->10670*/
/*10639*/             OPC_CheckCondCode, ISD::SETUGE,
/*10641*/             OPC_MoveParent,
/*10642*/             OPC_CheckType, MVT::i32,
/*10644*/             OPC_MoveParent,
/*10645*/             OPC_RecordChild1, // #2 = $T
/*10646*/             OPC_RecordChild2, // #3 = $F
/*10647*/             OPC_CheckType, MVT::f64,
/*10649*/             OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10651*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10660*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETUGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTu:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), FGR64:f64:$F)
/*10670*/           /*Scope*/ 31, /*->10702*/
/*10671*/             OPC_CheckCondCode, ISD::SETLE,
/*10673*/             OPC_MoveParent,
/*10674*/             OPC_CheckType, MVT::i32,
/*10676*/             OPC_MoveParent,
/*10677*/             OPC_RecordChild1, // #2 = $T
/*10678*/             OPC_RecordChild2, // #3 = $F
/*10679*/             OPC_CheckType, MVT::f64,
/*10681*/             OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10683*/             OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*10692*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETLE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLT:i32 GPR32:i32:$rhs, GPR32:i32:$lhs), FGR64:f64:$F)
/*10702*/           /*Scope*/ 31, /*->10734*/
/*10703*/             OPC_CheckCondCode, ISD::SETULE,
/*10705*/             OPC_MoveParent,
/*10706*/             OPC_CheckType, MVT::i32,
/*10708*/             OPC_MoveParent,
/*10709*/             OPC_RecordChild1, // #2 = $T
/*10710*/             OPC_RecordChild2, // #3 = $F
/*10711*/             OPC_CheckType, MVT::f64,
/*10713*/             OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10715*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*10724*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETULE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTu:i32 GPR32:i32:$rhs, GPR32:i32:$lhs), FGR64:f64:$F)
/*10734*/           /*Scope*/ 31, /*->10766*/
/*10735*/             OPC_CheckCondCode, ISD::SETEQ,
/*10737*/             OPC_MoveParent,
/*10738*/             OPC_CheckType, MVT::i32,
/*10740*/             OPC_MoveParent,
/*10741*/             OPC_RecordChild1, // #2 = $T
/*10742*/             OPC_RecordChild2, // #3 = $F
/*10743*/             OPC_CheckType, MVT::f64,
/*10745*/             OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10747*/             OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10756*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETEQ:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (XOR:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), FGR64:f64:$F)
/*10766*/           /*Scope*/ 31, /*->10798*/
/*10767*/             OPC_CheckCondCode, ISD::SETNE,
/*10769*/             OPC_MoveParent,
/*10770*/             OPC_CheckType, MVT::i32,
/*10772*/             OPC_MoveParent,
/*10773*/             OPC_RecordChild1, // #2 = $T
/*10774*/             OPC_RecordChild2, // #3 = $F
/*10775*/             OPC_CheckType, MVT::f64,
/*10777*/             OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10779*/             OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10788*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETNE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVN_I_D64:f64 FGR64:f64:$T, (XOR:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), FGR64:f64:$F)
/*10798*/           0, /*End of Scope*/
/*10799*/         0, /*End of Scope*/
/*10800*/       0, /*End of Scope*/
/*10801*/     /*Scope*/ 58|128,6/*826*/, /*->11629*/
/*10803*/       OPC_CheckChild0Type, MVT::i64,
/*10805*/       OPC_Scope, 101, /*->10908*/ // 2 children in Scope
/*10807*/         OPC_MoveChild, 1,
/*10809*/         OPC_CheckInteger, 0, 
/*10811*/         OPC_MoveParent,
/*10812*/         OPC_MoveChild, 2,
/*10814*/         OPC_Scope, 22, /*->10838*/ // 4 children in Scope
/*10816*/           OPC_CheckCondCode, ISD::SETEQ,
/*10818*/           OPC_MoveParent,
/*10819*/           OPC_CheckType, MVT::i32,
/*10821*/           OPC_MoveParent,
/*10822*/           OPC_RecordChild1, // #1 = $T
/*10823*/           OPC_RecordChild2, // #2 = $F
/*10824*/           OPC_CheckType, MVT::f32,
/*10826*/           OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10828*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f32 (setcc:i32 GPR64:i64:$lhs, 0:i64, SETEQ:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 11
                    // Dst: (MOVZ_I64_S:f32 FGR32:f32:$T, GPR64:i64:$lhs, FGR32:f32:$F)
/*10838*/         /*Scope*/ 22, /*->10861*/
/*10839*/           OPC_CheckCondCode, ISD::SETNE,
/*10841*/           OPC_MoveParent,
/*10842*/           OPC_CheckType, MVT::i32,
/*10844*/           OPC_MoveParent,
/*10845*/           OPC_RecordChild1, // #1 = $T
/*10846*/           OPC_RecordChild2, // #2 = $F
/*10847*/           OPC_CheckType, MVT::f32,
/*10849*/           OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10851*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f32 (setcc:i32 GPR64:i64:$lhs, 0:i64, SETNE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 11
                    // Dst: (MOVN_I64_S:f32 FGR32:f32:$T, GPR64:i64:$lhs, FGR32:f32:$F)
/*10861*/         /*Scope*/ 22, /*->10884*/
/*10862*/           OPC_CheckCondCode, ISD::SETEQ,
/*10864*/           OPC_MoveParent,
/*10865*/           OPC_CheckType, MVT::i32,
/*10867*/           OPC_MoveParent,
/*10868*/           OPC_RecordChild1, // #1 = $T
/*10869*/           OPC_RecordChild2, // #2 = $F
/*10870*/           OPC_CheckType, MVT::f64,
/*10872*/           OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10874*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 GPR64:i64:$lhs, 0:i64, SETEQ:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVZ_I64_D64:f64 FGR64:f64:$T, GPR64:i64:$lhs, FGR64:f64:$F)
/*10884*/         /*Scope*/ 22, /*->10907*/
/*10885*/           OPC_CheckCondCode, ISD::SETNE,
/*10887*/           OPC_MoveParent,
/*10888*/           OPC_CheckType, MVT::i32,
/*10890*/           OPC_MoveParent,
/*10891*/           OPC_RecordChild1, // #1 = $T
/*10892*/           OPC_RecordChild2, // #2 = $F
/*10893*/           OPC_CheckType, MVT::f64,
/*10895*/           OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10897*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 GPR64:i64:$lhs, 0:i64, SETNE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVN_I64_D64:f64 FGR64:f64:$T, GPR64:i64:$lhs, FGR64:f64:$F)
/*10907*/         0, /*End of Scope*/
/*10908*/       /*Scope*/ 78|128,5/*718*/, /*->11628*/
/*10910*/         OPC_RecordChild1, // #1 = $rhs
/*10911*/         OPC_Scope, 67|128,2/*323*/, /*->11237*/ // 2 children in Scope
/*10914*/           OPC_MoveChild, 1,
/*10916*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10919*/           OPC_Scope, 75, /*->10996*/ // 4 children in Scope
/*10921*/             OPC_CheckPredicate, 28, // Predicate_immSExt16
/*10923*/             OPC_MoveParent,
/*10924*/             OPC_MoveChild, 2,
/*10926*/             OPC_Scope, 33, /*->10961*/ // 2 children in Scope
/*10928*/               OPC_CheckCondCode, ISD::SETGE,
/*10930*/               OPC_MoveParent,
/*10931*/               OPC_CheckType, MVT::i32,
/*10933*/               OPC_MoveParent,
/*10934*/               OPC_RecordChild1, // #2 = $T
/*10935*/               OPC_RecordChild2, // #3 = $F
/*10936*/               OPC_CheckType, MVT::f32,
/*10938*/               OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10940*/               OPC_EmitConvertToTarget, 1,
/*10942*/               OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*10951*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f32 (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTi64:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), FGR32:f32:$F)
/*10961*/             /*Scope*/ 33, /*->10995*/
/*10962*/               OPC_CheckCondCode, ISD::SETUGE,
/*10964*/               OPC_MoveParent,
/*10965*/               OPC_CheckType, MVT::i32,
/*10967*/               OPC_MoveParent,
/*10968*/               OPC_RecordChild1, // #2 = $T
/*10969*/               OPC_RecordChild2, // #3 = $F
/*10970*/               OPC_CheckType, MVT::f32,
/*10972*/               OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10974*/               OPC_EmitConvertToTarget, 1,
/*10976*/               OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*10985*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f32 (setcc:i32 GPR64:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTiu64:i32 GPR64:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh), FGR32:f32:$F)
/*10995*/             0, /*End of Scope*/
/*10996*/           /*Scope*/ 81, /*->11078*/
/*10997*/             OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*10999*/             OPC_MoveParent,
/*11000*/             OPC_MoveChild, 2,
/*11002*/             OPC_Scope, 36, /*->11040*/ // 2 children in Scope
/*11004*/               OPC_CheckCondCode, ISD::SETGT,
/*11006*/               OPC_MoveParent,
/*11007*/               OPC_CheckType, MVT::i32,
/*11009*/               OPC_MoveParent,
/*11010*/               OPC_RecordChild1, // #2 = $T
/*11011*/               OPC_RecordChild2, // #3 = $F
/*11012*/               OPC_CheckType, MVT::f32,
/*11014*/               OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*11016*/               OPC_EmitConvertToTarget, 1,
/*11018*/               OPC_EmitNodeXForm, 1, 4, // Plus1
/*11021*/               OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*11030*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f32 (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTi64:i32 GPR64:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), FGR32:f32:$F)
/*11040*/             /*Scope*/ 36, /*->11077*/
/*11041*/               OPC_CheckCondCode, ISD::SETUGT,
/*11043*/               OPC_MoveParent,
/*11044*/               OPC_CheckType, MVT::i32,
/*11046*/               OPC_MoveParent,
/*11047*/               OPC_RecordChild1, // #2 = $T
/*11048*/               OPC_RecordChild2, // #3 = $F
/*11049*/               OPC_CheckType, MVT::f32,
/*11051*/               OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*11053*/               OPC_EmitConvertToTarget, 1,
/*11055*/               OPC_EmitNodeXForm, 1, 4, // Plus1
/*11058*/               OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*11067*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f32 (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTiu64:i32 GPR64:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), FGR32:f32:$F)
/*11077*/             0, /*End of Scope*/
/*11078*/           /*Scope*/ 75, /*->11154*/
/*11079*/             OPC_CheckPredicate, 28, // Predicate_immSExt16
/*11081*/             OPC_MoveParent,
/*11082*/             OPC_MoveChild, 2,
/*11084*/             OPC_Scope, 33, /*->11119*/ // 2 children in Scope
/*11086*/               OPC_CheckCondCode, ISD::SETGE,
/*11088*/               OPC_MoveParent,
/*11089*/               OPC_CheckType, MVT::i32,
/*11091*/               OPC_MoveParent,
/*11092*/               OPC_RecordChild1, // #2 = $T
/*11093*/               OPC_RecordChild2, // #3 = $F
/*11094*/               OPC_CheckType, MVT::f64,
/*11096*/               OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11098*/               OPC_EmitConvertToTarget, 1,
/*11100*/               OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*11109*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f64 (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTi64:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), FGR64:f64:$F)
/*11119*/             /*Scope*/ 33, /*->11153*/
/*11120*/               OPC_CheckCondCode, ISD::SETUGE,
/*11122*/               OPC_MoveParent,
/*11123*/               OPC_CheckType, MVT::i32,
/*11125*/               OPC_MoveParent,
/*11126*/               OPC_RecordChild1, // #2 = $T
/*11127*/               OPC_RecordChild2, // #3 = $F
/*11128*/               OPC_CheckType, MVT::f64,
/*11130*/               OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11132*/               OPC_EmitConvertToTarget, 1,
/*11134*/               OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*11143*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f64 (setcc:i32 GPR64:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTiu64:i32 GPR64:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh), FGR64:f64:$F)
/*11153*/             0, /*End of Scope*/
/*11154*/           /*Scope*/ 81, /*->11236*/
/*11155*/             OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*11157*/             OPC_MoveParent,
/*11158*/             OPC_MoveChild, 2,
/*11160*/             OPC_Scope, 36, /*->11198*/ // 2 children in Scope
/*11162*/               OPC_CheckCondCode, ISD::SETGT,
/*11164*/               OPC_MoveParent,
/*11165*/               OPC_CheckType, MVT::i32,
/*11167*/               OPC_MoveParent,
/*11168*/               OPC_RecordChild1, // #2 = $T
/*11169*/               OPC_RecordChild2, // #3 = $F
/*11170*/               OPC_CheckType, MVT::f64,
/*11172*/               OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11174*/               OPC_EmitConvertToTarget, 1,
/*11176*/               OPC_EmitNodeXForm, 1, 4, // Plus1
/*11179*/               OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*11188*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f64 (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTi64:i32 GPR64:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), FGR64:f64:$F)
/*11198*/             /*Scope*/ 36, /*->11235*/
/*11199*/               OPC_CheckCondCode, ISD::SETUGT,
/*11201*/               OPC_MoveParent,
/*11202*/               OPC_CheckType, MVT::i32,
/*11204*/               OPC_MoveParent,
/*11205*/               OPC_RecordChild1, // #2 = $T
/*11206*/               OPC_RecordChild2, // #3 = $F
/*11207*/               OPC_CheckType, MVT::f64,
/*11209*/               OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11211*/               OPC_EmitConvertToTarget, 1,
/*11213*/               OPC_EmitNodeXForm, 1, 4, // Plus1
/*11216*/               OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*11225*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f64 (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTiu64:i32 GPR64:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), FGR64:f64:$F)
/*11235*/             0, /*End of Scope*/
/*11236*/           0, /*End of Scope*/
/*11237*/         /*Scope*/ 4|128,3/*388*/, /*->11627*/
/*11239*/           OPC_MoveChild, 2,
/*11241*/           OPC_Scope, 31, /*->11274*/ // 12 children in Scope
/*11243*/             OPC_CheckCondCode, ISD::SETGE,
/*11245*/             OPC_MoveParent,
/*11246*/             OPC_CheckType, MVT::i32,
/*11248*/             OPC_MoveParent,
/*11249*/             OPC_RecordChild1, // #2 = $T
/*11250*/             OPC_RecordChild2, // #3 = $F
/*11251*/             OPC_CheckType, MVT::f32,
/*11253*/             OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*11255*/             OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*11264*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLT64:i32 GPR64:i64:$lhs, GPR64:i64:$rhs), FGR32:f32:$F)
/*11274*/           /*Scope*/ 31, /*->11306*/
/*11275*/             OPC_CheckCondCode, ISD::SETUGE,
/*11277*/             OPC_MoveParent,
/*11278*/             OPC_CheckType, MVT::i32,
/*11280*/             OPC_MoveParent,
/*11281*/             OPC_RecordChild1, // #2 = $T
/*11282*/             OPC_RecordChild2, // #3 = $F
/*11283*/             OPC_CheckType, MVT::f32,
/*11285*/             OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*11287*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*11296*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETUGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTu64:i32 GPR64:i64:$lhs, GPR64:i64:$rhs), FGR32:f32:$F)
/*11306*/           /*Scope*/ 31, /*->11338*/
/*11307*/             OPC_CheckCondCode, ISD::SETLE,
/*11309*/             OPC_MoveParent,
/*11310*/             OPC_CheckType, MVT::i32,
/*11312*/             OPC_MoveParent,
/*11313*/             OPC_RecordChild1, // #2 = $T
/*11314*/             OPC_RecordChild2, // #3 = $F
/*11315*/             OPC_CheckType, MVT::f32,
/*11317*/             OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*11319*/             OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*11328*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETLE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLT64:i32 GPR64:i64:$rhs, GPR64:i64:$lhs), FGR32:f32:$F)
/*11338*/           /*Scope*/ 31, /*->11370*/
/*11339*/             OPC_CheckCondCode, ISD::SETULE,
/*11341*/             OPC_MoveParent,
/*11342*/             OPC_CheckType, MVT::i32,
/*11344*/             OPC_MoveParent,
/*11345*/             OPC_RecordChild1, // #2 = $T
/*11346*/             OPC_RecordChild2, // #3 = $F
/*11347*/             OPC_CheckType, MVT::f32,
/*11349*/             OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*11351*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*11360*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETULE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTu64:i32 GPR64:i64:$rhs, GPR64:i64:$lhs), FGR32:f32:$F)
/*11370*/           /*Scope*/ 31, /*->11402*/
/*11371*/             OPC_CheckCondCode, ISD::SETEQ,
/*11373*/             OPC_MoveParent,
/*11374*/             OPC_CheckType, MVT::i32,
/*11376*/             OPC_MoveParent,
/*11377*/             OPC_RecordChild1, // #2 = $T
/*11378*/             OPC_RecordChild2, // #3 = $F
/*11379*/             OPC_CheckType, MVT::f32,
/*11381*/             OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*11383*/             OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                          1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*11392*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETEQ:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I64_S:f32 FGR32:f32:$T, (XOR64:i64 GPR64:i64:$lhs, GPR64:i64:$rhs), FGR32:f32:$F)
/*11402*/           /*Scope*/ 31, /*->11434*/
/*11403*/             OPC_CheckCondCode, ISD::SETNE,
/*11405*/             OPC_MoveParent,
/*11406*/             OPC_CheckType, MVT::i32,
/*11408*/             OPC_MoveParent,
/*11409*/             OPC_RecordChild1, // #2 = $T
/*11410*/             OPC_RecordChild2, // #3 = $F
/*11411*/             OPC_CheckType, MVT::f32,
/*11413*/             OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*11415*/             OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                          1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*11424*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETNE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVN_I64_S:f32 FGR32:f32:$T, (XOR64:i64 GPR64:i64:$lhs, GPR64:i64:$rhs), FGR32:f32:$F)
/*11434*/           /*Scope*/ 31, /*->11466*/
/*11435*/             OPC_CheckCondCode, ISD::SETGE,
/*11437*/             OPC_MoveParent,
/*11438*/             OPC_CheckType, MVT::i32,
/*11440*/             OPC_MoveParent,
/*11441*/             OPC_RecordChild1, // #2 = $T
/*11442*/             OPC_RecordChild2, // #3 = $F
/*11443*/             OPC_CheckType, MVT::f64,
/*11445*/             OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11447*/             OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*11456*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLT64:i32 GPR64:i64:$lhs, GPR64:i64:$rhs), FGR64:f64:$F)
/*11466*/           /*Scope*/ 31, /*->11498*/
/*11467*/             OPC_CheckCondCode, ISD::SETUGE,
/*11469*/             OPC_MoveParent,
/*11470*/             OPC_CheckType, MVT::i32,
/*11472*/             OPC_MoveParent,
/*11473*/             OPC_RecordChild1, // #2 = $T
/*11474*/             OPC_RecordChild2, // #3 = $F
/*11475*/             OPC_CheckType, MVT::f64,
/*11477*/             OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11479*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*11488*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETUGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTu64:i32 GPR64:i64:$lhs, GPR64:i64:$rhs), FGR64:f64:$F)
/*11498*/           /*Scope*/ 31, /*->11530*/
/*11499*/             OPC_CheckCondCode, ISD::SETLE,
/*11501*/             OPC_MoveParent,
/*11502*/             OPC_CheckType, MVT::i32,
/*11504*/             OPC_MoveParent,
/*11505*/             OPC_RecordChild1, // #2 = $T
/*11506*/             OPC_RecordChild2, // #3 = $F
/*11507*/             OPC_CheckType, MVT::f64,
/*11509*/             OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11511*/             OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*11520*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETLE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLT64:i32 GPR64:i64:$rhs, GPR64:i64:$lhs), FGR64:f64:$F)
/*11530*/           /*Scope*/ 31, /*->11562*/
/*11531*/             OPC_CheckCondCode, ISD::SETULE,
/*11533*/             OPC_MoveParent,
/*11534*/             OPC_CheckType, MVT::i32,
/*11536*/             OPC_MoveParent,
/*11537*/             OPC_RecordChild1, // #2 = $T
/*11538*/             OPC_RecordChild2, // #3 = $F
/*11539*/             OPC_CheckType, MVT::f64,
/*11541*/             OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11543*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*11552*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETULE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTu64:i32 GPR64:i64:$rhs, GPR64:i64:$lhs), FGR64:f64:$F)
/*11562*/           /*Scope*/ 31, /*->11594*/
/*11563*/             OPC_CheckCondCode, ISD::SETEQ,
/*11565*/             OPC_MoveParent,
/*11566*/             OPC_CheckType, MVT::i32,
/*11568*/             OPC_MoveParent,
/*11569*/             OPC_RecordChild1, // #2 = $T
/*11570*/             OPC_RecordChild2, // #3 = $F
/*11571*/             OPC_CheckType, MVT::f64,
/*11573*/             OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11575*/             OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                          1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*11584*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETEQ:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I64_D64:f64 FGR64:f64:$T, (XOR64:i64 GPR64:i64:$lhs, GPR64:i64:$rhs), FGR64:f64:$F)
/*11594*/           /*Scope*/ 31, /*->11626*/
/*11595*/             OPC_CheckCondCode, ISD::SETNE,
/*11597*/             OPC_MoveParent,
/*11598*/             OPC_CheckType, MVT::i32,
/*11600*/             OPC_MoveParent,
/*11601*/             OPC_RecordChild1, // #2 = $T
/*11602*/             OPC_RecordChild2, // #3 = $F
/*11603*/             OPC_CheckType, MVT::f64,
/*11605*/             OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11607*/             OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                          1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*11616*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETNE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVN_I64_D64:f64 FGR64:f64:$T, (XOR64:i64 GPR64:i64:$lhs, GPR64:i64:$rhs), FGR64:f64:$F)
/*11626*/           0, /*End of Scope*/
/*11627*/         0, /*End of Scope*/
/*11628*/       0, /*End of Scope*/
/*11629*/     0, /*End of Scope*/
/*11630*/   /*Scope*/ 89, /*->11720*/
/*11631*/     OPC_RecordChild0, // #0 = $cond
/*11632*/     OPC_Scope, 50, /*->11684*/ // 2 children in Scope
/*11634*/       OPC_CheckChild0Type, MVT::i32,
/*11636*/       OPC_RecordChild1, // #1 = $T
/*11637*/       OPC_RecordChild2, // #2 = $F
/*11638*/       OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->11653
/*11641*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11643*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:f32 GPR32:i32:$cond, FGR32:f32:$T, FGR32:f32:$F) - Complexity = 3
                  // Dst: (MOVN_I_S:f32 FGR32:f32:$T, GPR32:i32:$cond, FGR32:f32:$F)
                /*SwitchType*/ 28,  MVT::f64,// ->11683
/*11655*/         OPC_Scope, 12, /*->11669*/ // 2 children in Scope
/*11657*/           OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11659*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 GPR32:i32:$cond, AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 3
                    // Dst: (MOVN_I_D32:f64 AFGR64:f64:$T, GPR32:i32:$cond, AFGR64:f64:$F)
/*11669*/         /*Scope*/ 12, /*->11682*/
/*11670*/           OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11672*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 GPR32:i32:$cond, FGR64:f64:$T, FGR64:f64:$F) - Complexity = 3
                    // Dst: (MOVN_I_D64:f64 FGR64:f64:$T, GPR32:i32:$cond, FGR64:f64:$F)
/*11682*/         0, /*End of Scope*/
                0, // EndSwitchType
/*11684*/     /*Scope*/ 34, /*->11719*/
/*11685*/       OPC_CheckChild0Type, MVT::i64,
/*11687*/       OPC_RecordChild1, // #1 = $T
/*11688*/       OPC_RecordChild2, // #2 = $F
/*11689*/       OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->11704
/*11692*/         OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*11694*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:f32 GPR64:i64:$cond, FGR32:f32:$T, FGR32:f32:$F) - Complexity = 3
                  // Dst: (MOVN_I64_S:f32 FGR32:f32:$T, GPR64:i64:$cond, FGR32:f32:$F)
                /*SwitchType*/ 12,  MVT::f64,// ->11718
/*11706*/         OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11708*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:f64 GPR64:i64:$cond, FGR64:f64:$T, FGR64:f64:$F) - Complexity = 3
                  // Dst: (MOVN_I64_D64:f64 FGR64:f64:$T, GPR64:i64:$cond, FGR64:f64:$F)
                0, // EndSwitchType
/*11719*/     0, /*End of Scope*/
/*11720*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::CALLSEQ_END),// ->11749
/*11724*/   OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*11725*/   OPC_CaptureGlueInput,
/*11726*/   OPC_RecordChild1, // #1 = $amt1
/*11727*/   OPC_MoveChild, 1,
/*11729*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*11732*/   OPC_MoveParent,
/*11733*/   OPC_RecordChild2, // #2 = $amt2
/*11734*/   OPC_MoveChild, 2,
/*11736*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*11739*/   OPC_MoveParent,
/*11740*/   OPC_EmitMergeInputChains1_0,
/*11741*/   OPC_MorphNodeTo, TARGET_VAL(Mips::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP (timm:i32):$amt1, (timm:i32):$amt2)
          /*SwitchOpcode*/ 53,  TARGET_VAL(MipsISD::Ext),// ->11805
/*11752*/   OPC_RecordChild0, // #0 = $rs
/*11753*/   OPC_RecordChild1, // #1 = $pos
/*11754*/   OPC_MoveChild, 1,
/*11756*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11759*/   OPC_MoveParent,
/*11760*/   OPC_RecordChild2, // #2 = $size
/*11761*/   OPC_MoveChild, 2,
/*11763*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11766*/   OPC_MoveParent,
/*11767*/   OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->11786
/*11770*/     OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*11772*/     OPC_EmitConvertToTarget, 1,
/*11774*/     OPC_EmitConvertToTarget, 2,
/*11776*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXT), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 3, 4, 
              // Src: (MipsExt:i32 GPR32Opnd:i32:$rs, (imm:i32):$pos, (imm:i32):$size) - Complexity = 9
              // Dst: (EXT:i32 GPR32Opnd:i32:$rs, (imm:i32):$pos, (imm:i32):$size)
            /*SwitchType*/ 16,  MVT::i64,// ->11804
/*11788*/     OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*11790*/     OPC_EmitConvertToTarget, 1,
/*11792*/     OPC_EmitConvertToTarget, 2,
/*11794*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DEXT), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 3, 4, 
              // Src: (MipsExt:i64 GPR64Opnd:i64:$rs, (imm:i32):$pos, (imm:i32):$size) - Complexity = 9
              // Dst: (DEXT:i64 GPR64Opnd:i64:$rs, (imm:i32):$pos, (imm:i32):$size)
            0, // EndSwitchType
          /*SwitchOpcode*/ 56,  TARGET_VAL(MipsISD::Ins),// ->11864
/*11808*/   OPC_RecordChild0, // #0 = $rs
/*11809*/   OPC_RecordChild1, // #1 = $pos
/*11810*/   OPC_MoveChild, 1,
/*11812*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11815*/   OPC_MoveParent,
/*11816*/   OPC_RecordChild2, // #2 = $size
/*11817*/   OPC_MoveChild, 2,
/*11819*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11822*/   OPC_MoveParent,
/*11823*/   OPC_RecordChild3, // #3 = $src
/*11824*/   OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->11844
/*11827*/     OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*11829*/     OPC_EmitConvertToTarget, 1,
/*11831*/     OPC_EmitConvertToTarget, 2,
/*11833*/     OPC_MorphNodeTo, TARGET_VAL(Mips::INS), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 4, 5, 3, 
              // Src: (MipsIns:i32 GPR32Opnd:i32:$rs, (imm:i32):$pos, (imm:i32):$size, GPR32Opnd:i32:$src) - Complexity = 9
              // Dst: (INS:i32 GPR32Opnd:i32:$rs, (imm:i32):$pos, (imm:i32):$size, GPR32Opnd:i32:$src)
            /*SwitchType*/ 17,  MVT::i64,// ->11863
/*11846*/     OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*11848*/     OPC_EmitConvertToTarget, 1,
/*11850*/     OPC_EmitConvertToTarget, 2,
/*11852*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DINS), 0,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 4, 5, 3, 
              // Src: (MipsIns:i64 GPR64Opnd:i64:$rs, (imm:i32):$pos, (imm:i32):$size, GPR64Opnd:i64:$src) - Complexity = 9
              // Dst: (DINS:i64 GPR64Opnd:i64:$rs, (imm:i32):$pos, (imm:i32):$size, GPR64Opnd:i64:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 7|128,5/*647*/,  TARGET_VAL(ISD::ADD),// ->12515
/*11868*/   OPC_Scope, 110|128,1/*238*/, /*->12109*/ // 3 children in Scope
/*11871*/     OPC_RecordChild0, // #0 = $hi
/*11872*/     OPC_MoveChild, 1,
/*11874*/     OPC_SwitchOpcode /*2 cases */, 57|128,1/*185*/,  TARGET_VAL(MipsISD::Lo),// ->12064
/*11879*/       OPC_RecordChild0, // #1 = $lo
/*11880*/       OPC_MoveChild, 0,
/*11882*/       OPC_SwitchOpcode /*5 cases */, 45,  TARGET_VAL(ISD::TargetGlobalAddress),// ->11931
/*11886*/         OPC_MoveParent,
/*11887*/         OPC_MoveParent,
/*11888*/         OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->11917
/*11891*/           OPC_Scope, 11, /*->11904*/ // 2 children in Scope
/*11893*/             OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11895*/             OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                      // Src: (add:i32 GPR32:i32:$hi, (MipsLo:i32 (tglobaladdr:i32):$lo)) - Complexity = 9
                      // Dst: (ADDiu:i32 GPR32:i32:$hi, (tglobaladdr:i32):$lo)
/*11904*/           /*Scope*/ 11, /*->11916*/
/*11905*/             OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*11907*/             OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                      // Src: (add:i32 CPU16Regs:i32:$hi, (MipsLo:i32 (tglobaladdr:i32):$lo)) - Complexity = 9
                      // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$hi, (tglobaladdr:i32):$lo)
/*11916*/           0, /*End of Scope*/
                  /*SwitchType*/ 11,  MVT::i64,// ->11930
/*11919*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11921*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 GPR64:i64:$hi, (MipsLo:i64 (tglobaladdr:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 GPR64:i64:$hi, (tglobaladdr:i64):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::TargetBlockAddress),// ->11964
/*11934*/         OPC_MoveParent,
/*11935*/         OPC_MoveParent,
/*11936*/         OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->11950
/*11939*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11941*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 GPR32:i32:$hi, (MipsLo:i32 (tblockaddress:i32):$lo)) - Complexity = 9
                    // Dst: (ADDiu:i32 GPR32:i32:$hi, (tblockaddress:i32):$lo)
                  /*SwitchType*/ 11,  MVT::i64,// ->11963
/*11952*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11954*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 GPR64:i64:$hi, (MipsLo:i64 (tblockaddress:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 GPR64:i64:$hi, (tblockaddress:i64):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::TargetJumpTable),// ->11997
/*11967*/         OPC_MoveParent,
/*11968*/         OPC_MoveParent,
/*11969*/         OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->11983
/*11972*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11974*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 GPR32:i32:$hi, (MipsLo:i32 (tjumptable:i32):$lo)) - Complexity = 9
                    // Dst: (ADDiu:i32 GPR32:i32:$hi, (tjumptable:i32):$lo)
                  /*SwitchType*/ 11,  MVT::i64,// ->11996
/*11985*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11987*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 GPR64:i64:$hi, (MipsLo:i64 (tjumptable:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 GPR64:i64:$hi, (tjumptable:i64):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::TargetConstantPool),// ->12030
/*12000*/         OPC_MoveParent,
/*12001*/         OPC_MoveParent,
/*12002*/         OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->12016
/*12005*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12007*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 GPR32:i32:$hi, (MipsLo:i32 (tconstpool:i32):$lo)) - Complexity = 9
                    // Dst: (ADDiu:i32 GPR32:i32:$hi, (tconstpool:i32):$lo)
                  /*SwitchType*/ 11,  MVT::i64,// ->12029
/*12018*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12020*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 GPR64:i64:$hi, (MipsLo:i64 (tconstpool:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 GPR64:i64:$hi, (tconstpool:i64):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->12063
/*12033*/         OPC_MoveParent,
/*12034*/         OPC_MoveParent,
/*12035*/         OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->12049
/*12038*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12040*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 GPR32:i32:$hi, (MipsLo:i32 (tglobaltlsaddr:i32):$lo)) - Complexity = 9
                    // Dst: (ADDiu:i32 GPR32:i32:$hi, (tglobaltlsaddr:i32):$lo)
                  /*SwitchType*/ 11,  MVT::i64,// ->12062
/*12051*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12053*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 GPR64:i64:$hi, (MipsLo:i64 (tglobaltlsaddr:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 GPR64:i64:$hi, (tglobaltlsaddr:i64):$lo)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              /*SwitchOpcode*/ 41,  TARGET_VAL(MipsISD::GPRel),// ->12108
/*12067*/       OPC_RecordChild0, // #1 = $in
/*12068*/       OPC_MoveChild, 0,
/*12070*/       OPC_SwitchOpcode /*2 cases */, 15,  TARGET_VAL(ISD::TargetGlobalAddress),// ->12089
/*12074*/         OPC_MoveParent,
/*12075*/         OPC_MoveParent,
/*12076*/         OPC_CheckType, MVT::i32,
/*12078*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12080*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 GPR32:i32:$gp, (MipsGPRel:i32 (tglobaladdr:i32):$in)) - Complexity = 9
                  // Dst: (ADDiu:i32 GPR32:i32:$gp, (tglobaladdr:i32):$in)
                /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::TargetConstantPool),// ->12107
/*12092*/         OPC_MoveParent,
/*12093*/         OPC_MoveParent,
/*12094*/         OPC_CheckType, MVT::i32,
/*12096*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12098*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 GPR32:i32:$gp, (MipsGPRel:i32 (tconstpool:i32):$in)) - Complexity = 9
                  // Dst: (ADDiu:i32 GPR32:i32:$gp, (tconstpool:i32):$in)
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*12109*/   /*Scope*/ 116|128,1/*244*/, /*->12355*/
/*12111*/     OPC_MoveChild, 0,
/*12113*/     OPC_SwitchOpcode /*2 cases */, 62|128,1/*190*/,  TARGET_VAL(MipsISD::Lo),// ->12308
/*12118*/       OPC_RecordChild0, // #0 = $lo
/*12119*/       OPC_MoveChild, 0,
/*12121*/       OPC_SwitchOpcode /*5 cases */, 46,  TARGET_VAL(ISD::TargetGlobalAddress),// ->12171
/*12125*/         OPC_MoveParent,
/*12126*/         OPC_MoveParent,
/*12127*/         OPC_RecordChild1, // #1 = $hi
/*12128*/         OPC_SwitchType /*2 cases */, 11,  MVT::i64,// ->12142
/*12131*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12133*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tglobaladdr:i64):$lo), GPR64:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 GPR64:i64:$hi, (tglobaladdr:i64):$lo)
                  /*SwitchType*/ 26,  MVT::i32,// ->12170
/*12144*/           OPC_Scope, 11, /*->12157*/ // 2 children in Scope
/*12146*/             OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12148*/             OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                      // Src: (add:i32 (MipsLo:i32 (tglobaladdr:i32):$lo), CPU16Regs:i32:$hi) - Complexity = 9
                      // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$hi, (tglobaladdr:i32):$lo)
/*12157*/           /*Scope*/ 11, /*->12169*/
/*12158*/             OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12160*/             OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                      // Src: (add:i32 (MipsLo:i32 (tglobaladdr:i32):$lo), GPR32:i32:$hi) - Complexity = 9
                      // Dst: (ADDiu:i32 GPR32:i32:$hi, (tglobaladdr:i32):$lo)
/*12169*/           0, /*End of Scope*/
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetBlockAddress),// ->12205
/*12174*/         OPC_MoveParent,
/*12175*/         OPC_MoveParent,
/*12176*/         OPC_RecordChild1, // #1 = $hi
/*12177*/         OPC_SwitchType /*2 cases */, 11,  MVT::i64,// ->12191
/*12180*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12182*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tblockaddress:i64):$lo), GPR64:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 GPR64:i64:$hi, (tblockaddress:i64):$lo)
                  /*SwitchType*/ 11,  MVT::i32,// ->12204
/*12193*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12195*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (MipsLo:i32 (tblockaddress:i32):$lo), GPR32:i32:$hi) - Complexity = 9
                    // Dst: (ADDiu:i32 GPR32:i32:$hi, (tblockaddress:i32):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetJumpTable),// ->12239
/*12208*/         OPC_MoveParent,
/*12209*/         OPC_MoveParent,
/*12210*/         OPC_RecordChild1, // #1 = $hi
/*12211*/         OPC_SwitchType /*2 cases */, 11,  MVT::i64,// ->12225
/*12214*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12216*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tjumptable:i64):$lo), GPR64:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 GPR64:i64:$hi, (tjumptable:i64):$lo)
                  /*SwitchType*/ 11,  MVT::i32,// ->12238
/*12227*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12229*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (MipsLo:i32 (tjumptable:i32):$lo), GPR32:i32:$hi) - Complexity = 9
                    // Dst: (ADDiu:i32 GPR32:i32:$hi, (tjumptable:i32):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetConstantPool),// ->12273
/*12242*/         OPC_MoveParent,
/*12243*/         OPC_MoveParent,
/*12244*/         OPC_RecordChild1, // #1 = $hi
/*12245*/         OPC_SwitchType /*2 cases */, 11,  MVT::i64,// ->12259
/*12248*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12250*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tconstpool:i64):$lo), GPR64:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 GPR64:i64:$hi, (tconstpool:i64):$lo)
                  /*SwitchType*/ 11,  MVT::i32,// ->12272
/*12261*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12263*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (MipsLo:i32 (tconstpool:i32):$lo), GPR32:i32:$hi) - Complexity = 9
                    // Dst: (ADDiu:i32 GPR32:i32:$hi, (tconstpool:i32):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->12307
/*12276*/         OPC_MoveParent,
/*12277*/         OPC_MoveParent,
/*12278*/         OPC_RecordChild1, // #1 = $hi
/*12279*/         OPC_SwitchType /*2 cases */, 11,  MVT::i64,// ->12293
/*12282*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12284*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tglobaltlsaddr:i64):$lo), GPR64:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 GPR64:i64:$hi, (tglobaltlsaddr:i64):$lo)
                  /*SwitchType*/ 11,  MVT::i32,// ->12306
/*12295*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12297*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (MipsLo:i32 (tglobaltlsaddr:i32):$lo), GPR32:i32:$hi) - Complexity = 9
                    // Dst: (ADDiu:i32 GPR32:i32:$hi, (tglobaltlsaddr:i32):$lo)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              /*SwitchOpcode*/ 43,  TARGET_VAL(MipsISD::GPRel),// ->12354
/*12311*/       OPC_RecordChild0, // #0 = $in
/*12312*/       OPC_MoveChild, 0,
/*12314*/       OPC_SwitchOpcode /*2 cases */, 16,  TARGET_VAL(ISD::TargetGlobalAddress),// ->12334
/*12318*/         OPC_MoveParent,
/*12319*/         OPC_MoveParent,
/*12320*/         OPC_RecordChild1, // #1 = $gp
/*12321*/         OPC_CheckType, MVT::i32,
/*12323*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12325*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (add:i32 (MipsGPRel:i32 (tglobaladdr:i32):$in), GPR32:i32:$gp) - Complexity = 9
                  // Dst: (ADDiu:i32 GPR32:i32:$gp, (tglobaladdr:i32):$in)
                /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::TargetConstantPool),// ->12353
/*12337*/         OPC_MoveParent,
/*12338*/         OPC_MoveParent,
/*12339*/         OPC_RecordChild1, // #1 = $gp
/*12340*/         OPC_CheckType, MVT::i32,
/*12342*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12344*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (add:i32 (MipsGPRel:i32 (tconstpool:i32):$in), GPR32:i32:$gp) - Complexity = 9
                  // Dst: (ADDiu:i32 GPR32:i32:$gp, (tconstpool:i32):$in)
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*12355*/   /*Scope*/ 29|128,1/*157*/, /*->12514*/
/*12357*/     OPC_RecordChild0, // #0 = $rs
/*12358*/     OPC_RecordChild1, // #1 = $imm16
/*12359*/     OPC_Scope, 81, /*->12442*/ // 5 children in Scope
/*12361*/       OPC_MoveChild, 1,
/*12363*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12366*/       OPC_Scope, 35, /*->12403*/ // 3 children in Scope
/*12368*/         OPC_CheckPredicate, 28, // Predicate_immSExt16
/*12370*/         OPC_MoveParent,
/*12371*/         OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->12387
/*12374*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12376*/           OPC_EmitConvertToTarget, 1,
/*12378*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i32 GPR32Opnd:i32:$rs, (imm:i32)<<P:Predicate_immSExt16>>:$imm16) - Complexity = 7
                    // Dst: (ADDiu:i32 GPR32Opnd:i32:$rs, (imm:i32):$imm16)
                  /*SwitchType*/ 13,  MVT::i64,// ->12402
/*12389*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12391*/           OPC_EmitConvertToTarget, 1,
/*12393*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i64 GPR64Opnd:i64:$rs, (imm:i64)<<P:Predicate_immSExt16>>:$imm16) - Complexity = 7
                    // Dst: (DADDiu:i64 GPR64Opnd:i64:$rs, (imm:i64):$imm16)
                  0, // EndSwitchType
/*12403*/       /*Scope*/ 18, /*->12422*/
/*12404*/         OPC_CheckPredicate, 30, // Predicate_immSExt8
/*12406*/         OPC_MoveParent,
/*12407*/         OPC_CheckType, MVT::i32,
/*12409*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12411*/         OPC_EmitConvertToTarget, 1,
/*12413*/         OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImm16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immSExt8>>:$imm) - Complexity = 7
                  // Dst: (AddiuRxRxImm16:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immSExt8>>:$imm)
/*12422*/       /*Scope*/ 18, /*->12441*/
/*12423*/         OPC_CheckPredicate, 28, // Predicate_immSExt16
/*12425*/         OPC_MoveParent,
/*12426*/         OPC_CheckType, MVT::i32,
/*12428*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12430*/         OPC_EmitConvertToTarget, 1,
/*12432*/         OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                  // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immSExt16>>:$imm)
/*12441*/       0, /*End of Scope*/
/*12442*/     /*Scope*/ 28, /*->12471*/
/*12443*/       OPC_CheckType, MVT::i32,
/*12445*/       OPC_Scope, 11, /*->12458*/ // 2 children in Scope
/*12447*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12449*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt) - Complexity = 3
                  // Dst: (ADDu:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
/*12458*/       /*Scope*/ 11, /*->12470*/
/*12459*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12461*/         OPC_MorphNodeTo, TARGET_VAL(Mips::AdduRxRyRz16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                  // Dst: (AdduRxRyRz16:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*12470*/       0, /*End of Scope*/
/*12471*/     /*Scope*/ 13, /*->12485*/
/*12472*/       OPC_CheckType, MVT::i64,
/*12474*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12476*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (add:i64 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt) - Complexity = 3
                // Dst: (DADDu:i64 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt)
/*12485*/     /*Scope*/ 13, /*->12499*/
/*12486*/       OPC_CheckType, MVT::v2i16,
/*12488*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*12490*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQ_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (add:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b) - Complexity = 3
                // Dst: (ADDQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b)
/*12499*/     /*Scope*/ 13, /*->12513*/
/*12500*/       OPC_CheckType, MVT::v4i8,
/*12502*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*12504*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDU_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (add:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b) - Complexity = 3
                // Dst: (ADDU_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b)
/*12513*/     0, /*End of Scope*/
/*12514*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 103|128,9/*1255*/,  TARGET_VAL(ISD::SETCC),// ->13774
/*12519*/   OPC_RecordChild0, // #0 = $lhs
/*12520*/   OPC_Scope, 60|128,6/*828*/, /*->13351*/ // 2 children in Scope
/*12523*/     OPC_CheckChild0Type, MVT::i32,
/*12525*/     OPC_Scope, 7|128,1/*135*/, /*->12663*/ // 2 children in Scope
/*12528*/       OPC_MoveChild, 1,
/*12530*/       OPC_Scope, 67, /*->12599*/ // 2 children in Scope
/*12532*/         OPC_CheckInteger, 0, 
/*12534*/         OPC_MoveParent,
/*12535*/         OPC_MoveChild, 2,
/*12537*/         OPC_Scope, 19, /*->12558*/ // 3 children in Scope
/*12539*/           OPC_CheckCondCode, ISD::SETEQ,
/*12541*/           OPC_MoveParent,
/*12542*/           OPC_CheckType, MVT::i32,
/*12544*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12546*/           OPC_EmitInteger, MVT::i32, 1, 
/*12549*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 GPR32:i32:$lhs, 0:i32, SETEQ:Other) - Complexity = 8
                    // Dst: (SLTiu:i32 GPR32:i32:$lhs, 1:i32)
/*12558*/         /*Scope*/ 19, /*->12578*/
/*12559*/           OPC_CheckCondCode, ISD::SETNE,
/*12561*/           OPC_MoveParent,
/*12562*/           OPC_CheckType, MVT::i32,
/*12564*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12566*/           OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*12569*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i32 GPR32:i32:$lhs, 0:i32, SETNE:Other) - Complexity = 8
                    // Dst: (SLTu:i32 ZERO:i32, GPR32:i32:$lhs)
/*12578*/         /*Scope*/ 19, /*->12598*/
/*12579*/           OPC_CheckCondCode, ISD::SETEQ,
/*12581*/           OPC_MoveParent,
/*12582*/           OPC_CheckType, MVT::i32,
/*12584*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12586*/           OPC_EmitInteger, MVT::i32, 1, 
/*12589*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltiuCCRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, 0:i32, SETEQ:Other) - Complexity = 8
                    // Dst: (SltiuCCRxImmX16:i32 CPU16Regs:i32:$lhs, 1:i32)
/*12598*/         0, /*End of Scope*/
/*12599*/       /*Scope*/ 62, /*->12662*/
/*12600*/         OPC_CheckInteger, 127|128,127|128,125|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709518847*/, 
/*12611*/         OPC_MoveParent,
/*12612*/         OPC_MoveChild, 2,
/*12614*/         OPC_CheckCondCode, ISD::SETGT,
/*12616*/         OPC_MoveParent,
/*12617*/         OPC_CheckType, MVT::i32,
/*12619*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12621*/         OPC_EmitInteger, MVT::i32, 0|128,0|128,126|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709518848*/, 
/*12633*/         OPC_EmitNode, TARGET_VAL(Mips::SltiCCRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*12642*/         OPC_EmitInteger, MVT::i32, 1, 
/*12645*/         OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*12653*/         OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4, 
                  // Src: (setcc:i32 CPU16Regs:i32:$lhs, -32769:i32, SETGT:Other) - Complexity = 8
                  // Dst: (XorRxRxRy16:i32 (SltiCCRxImmX16:i32 CPU16Regs:i32:$lhs, -32768:i32), (LiRxImmX16:i32 1:i32))
/*12662*/       0, /*End of Scope*/
/*12663*/     /*Scope*/ 45|128,5/*685*/, /*->13350*/
/*12665*/       OPC_RecordChild1, // #1 = $imm16
/*12666*/       OPC_Scope, 22|128,1/*150*/, /*->12819*/ // 2 children in Scope
/*12669*/         OPC_MoveChild, 1,
/*12671*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12674*/         OPC_CheckPredicate, 28, // Predicate_immSExt16
/*12676*/         OPC_MoveParent,
/*12677*/         OPC_MoveChild, 2,
/*12679*/         OPC_Scope, 18, /*->12699*/ // 6 children in Scope
/*12681*/           OPC_CheckCondCode, ISD::SETLT,
/*12683*/           OPC_MoveParent,
/*12684*/           OPC_CheckType, MVT::i32,
/*12686*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12688*/           OPC_EmitConvertToTarget, 1,
/*12690*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i32 GPR32Opnd:i32:$rs, (imm:i32)<<P:Predicate_immSExt16>>:$imm16, SETLT:Other) - Complexity = 7
                    // Dst: (SLTi:i32 GPR32Opnd:i32:$rs, (imm:i32):$imm16)
/*12699*/         /*Scope*/ 18, /*->12718*/
/*12700*/           OPC_CheckCondCode, ISD::SETULT,
/*12702*/           OPC_MoveParent,
/*12703*/           OPC_CheckType, MVT::i32,
/*12705*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12707*/           OPC_EmitConvertToTarget, 1,
/*12709*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i32 GPR32Opnd:i32:$rs, (imm:i32)<<P:Predicate_immSExt16>>:$imm16, SETULT:Other) - Complexity = 7
                    // Dst: (SLTiu:i32 GPR32Opnd:i32:$rs, (imm:i32):$imm16)
/*12718*/         /*Scope*/ 30, /*->12749*/
/*12719*/           OPC_CheckCondCode, ISD::SETGE,
/*12721*/           OPC_MoveParent,
/*12722*/           OPC_CheckType, MVT::i32,
/*12724*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12726*/           OPC_EmitConvertToTarget, 1,
/*12728*/           OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*12737*/           OPC_EmitInteger, MVT::i32, 1, 
/*12740*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                    // Src: (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other) - Complexity = 7
                    // Dst: (XORi:i32 (SLTi:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
/*12749*/         /*Scope*/ 30, /*->12780*/
/*12750*/           OPC_CheckCondCode, ISD::SETUGE,
/*12752*/           OPC_MoveParent,
/*12753*/           OPC_CheckType, MVT::i32,
/*12755*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12757*/           OPC_EmitConvertToTarget, 1,
/*12759*/           OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*12768*/           OPC_EmitInteger, MVT::i32, 1, 
/*12771*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                    // Src: (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other) - Complexity = 7
                    // Dst: (XORi:i32 (SLTiu:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
/*12780*/         /*Scope*/ 18, /*->12799*/
/*12781*/           OPC_CheckCondCode, ISD::SETLT,
/*12783*/           OPC_MoveParent,
/*12784*/           OPC_CheckType, MVT::i32,
/*12786*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12788*/           OPC_EmitConvertToTarget, 1,
/*12790*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltiCCRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm16, SETLT:Other) - Complexity = 7
                    // Dst: (SltiCCRxImmX16:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm16)
/*12799*/         /*Scope*/ 18, /*->12818*/
/*12800*/           OPC_CheckCondCode, ISD::SETULT,
/*12802*/           OPC_MoveParent,
/*12803*/           OPC_CheckType, MVT::i32,
/*12805*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12807*/           OPC_EmitConvertToTarget, 1,
/*12809*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltiuCCRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm16, SETULT:Other) - Complexity = 7
                    // Dst: (SltiuCCRxImmX16:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm16)
/*12818*/         0, /*End of Scope*/
/*12819*/       /*Scope*/ 16|128,4/*528*/, /*->13349*/
/*12821*/         OPC_MoveChild, 2,
/*12823*/         OPC_Scope, 16, /*->12841*/ // 20 children in Scope
/*12825*/           OPC_CheckCondCode, ISD::SETLT,
/*12827*/           OPC_MoveParent,
/*12828*/           OPC_CheckType, MVT::i32,
/*12830*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12832*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLT), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, SETLT:Other) - Complexity = 3
                    // Dst: (SLT:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
/*12841*/         /*Scope*/ 16, /*->12858*/
/*12842*/           OPC_CheckCondCode, ISD::SETULT,
/*12844*/           OPC_MoveParent,
/*12845*/           OPC_CheckType, MVT::i32,
/*12847*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12849*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, SETULT:Other) - Complexity = 3
                    // Dst: (SLTu:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
/*12858*/         /*Scope*/ 16, /*->12875*/
/*12859*/           OPC_CheckCondCode, ISD::SETGT,
/*12861*/           OPC_MoveParent,
/*12862*/           OPC_CheckType, MVT::i32,
/*12864*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12866*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLT), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETGT:Other) - Complexity = 3
                    // Dst: (SLT:i32 GPR32:i32:$rhs, GPR32:i32:$lhs)
/*12875*/         /*Scope*/ 16, /*->12892*/
/*12876*/           OPC_CheckCondCode, ISD::SETUGT,
/*12878*/           OPC_MoveParent,
/*12879*/           OPC_CheckType, MVT::i32,
/*12881*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12883*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETUGT:Other) - Complexity = 3
                    // Dst: (SLTu:i32 GPR32:i32:$rhs, GPR32:i32:$lhs)
/*12892*/         /*Scope*/ 28, /*->12921*/
/*12893*/           OPC_CheckCondCode, ISD::SETEQ,
/*12895*/           OPC_MoveParent,
/*12896*/           OPC_CheckType, MVT::i32,
/*12898*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12900*/           OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*12909*/           OPC_EmitInteger, MVT::i32, 1, 
/*12912*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETEQ:Other) - Complexity = 3
                    // Dst: (SLTiu:i32 (XOR:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), 1:i32)
/*12921*/         /*Scope*/ 28, /*->12950*/
/*12922*/           OPC_CheckCondCode, ISD::SETNE,
/*12924*/           OPC_MoveParent,
/*12925*/           OPC_CheckType, MVT::i32,
/*12927*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12929*/           OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*12932*/           OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #3
/*12941*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETNE:Other) - Complexity = 3
                    // Dst: (SLTu:i32 ZERO:i32, (XOR:i32 GPR32:i32:$lhs, GPR32:i32:$rhs))
/*12950*/         /*Scope*/ 28, /*->12979*/
/*12951*/           OPC_CheckCondCode, ISD::SETLE,
/*12953*/           OPC_MoveParent,
/*12954*/           OPC_CheckType, MVT::i32,
/*12956*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12958*/           OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*12967*/           OPC_EmitInteger, MVT::i32, 1, 
/*12970*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETLE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLT:i32 GPR32:i32:$rhs, GPR32:i32:$lhs), 1:i32)
/*12979*/         /*Scope*/ 28, /*->13008*/
/*12980*/           OPC_CheckCondCode, ISD::SETULE,
/*12982*/           OPC_MoveParent,
/*12983*/           OPC_CheckType, MVT::i32,
/*12985*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12987*/           OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*12996*/           OPC_EmitInteger, MVT::i32, 1, 
/*12999*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETULE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLTu:i32 GPR32:i32:$rhs, GPR32:i32:$lhs), 1:i32)
/*13008*/         /*Scope*/ 28, /*->13037*/
/*13009*/           OPC_CheckCondCode, ISD::SETGE,
/*13011*/           OPC_MoveParent,
/*13012*/           OPC_CheckType, MVT::i32,
/*13014*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13016*/           OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*13025*/           OPC_EmitInteger, MVT::i32, 1, 
/*13028*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETGE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLT:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), 1:i32)
/*13037*/         /*Scope*/ 28, /*->13066*/
/*13038*/           OPC_CheckCondCode, ISD::SETUGE,
/*13040*/           OPC_MoveParent,
/*13041*/           OPC_CheckType, MVT::i32,
/*13043*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13045*/           OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*13054*/           OPC_EmitInteger, MVT::i32, 1, 
/*13057*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETUGE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLTu:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), 1:i32)
/*13066*/         /*Scope*/ 16, /*->13083*/
/*13067*/           OPC_CheckCondCode, ISD::SETGT,
/*13069*/           OPC_MoveParent,
/*13070*/           OPC_CheckType, MVT::i32,
/*13072*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13074*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETGT:Other) - Complexity = 3
                    // Dst: (SltCCRxRy16:i32 CPU16Regs:i32:$rhs, CPU16Regs:i32:$lhs)
/*13083*/         /*Scope*/ 16, /*->13100*/
/*13084*/           OPC_CheckCondCode, ISD::SETLT,
/*13086*/           OPC_MoveParent,
/*13087*/           OPC_CheckType, MVT::i32,
/*13089*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13091*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETLT:Other) - Complexity = 3
                    // Dst: (SltCCRxRy16:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry)
/*13100*/         /*Scope*/ 16, /*->13117*/
/*13101*/           OPC_CheckCondCode, ISD::SETUGT,
/*13103*/           OPC_MoveParent,
/*13104*/           OPC_CheckType, MVT::i32,
/*13106*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13108*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltuCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETUGT:Other) - Complexity = 3
                    // Dst: (SltuCCRxRy16:i32 CPU16Regs:i32:$rhs, CPU16Regs:i32:$lhs)
/*13117*/         /*Scope*/ 16, /*->13134*/
/*13118*/           OPC_CheckCondCode, ISD::SETULT,
/*13120*/           OPC_MoveParent,
/*13121*/           OPC_CheckType, MVT::i32,
/*13123*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13125*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltuCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETULT:Other) - Complexity = 3
                    // Dst: (SltuCCRxRy16:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry)
/*13134*/         /*Scope*/ 28, /*->13163*/
/*13135*/           OPC_CheckCondCode, ISD::SETEQ,
/*13137*/           OPC_MoveParent,
/*13138*/           OPC_CheckType, MVT::i32,
/*13140*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13142*/           OPC_EmitNode, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*13151*/           OPC_EmitInteger, MVT::i32, 1, 
/*13154*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltiuCCRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETEQ:Other) - Complexity = 3
                    // Dst: (SltiuCCRxImmX16:i32 (XorRxRxRy16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs), 1:i32)
/*13163*/         /*Scope*/ 36, /*->13200*/
/*13164*/           OPC_CheckCondCode, ISD::SETGE,
/*13166*/           OPC_MoveParent,
/*13167*/           OPC_CheckType, MVT::i32,
/*13169*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13171*/           OPC_EmitNode, TARGET_VAL(Mips::SltCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*13180*/           OPC_EmitInteger, MVT::i32, 1, 
/*13183*/           OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*13191*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETGE:Other) - Complexity = 3
                    // Dst: (XorRxRxRy16:i32 (SltCCRxRy16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs), (LiRxImmX16:i32 1:i32))
/*13200*/         /*Scope*/ 36, /*->13237*/
/*13201*/           OPC_CheckCondCode, ISD::SETLE,
/*13203*/           OPC_MoveParent,
/*13204*/           OPC_CheckType, MVT::i32,
/*13206*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13208*/           OPC_EmitNode, TARGET_VAL(Mips::SltCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*13217*/           OPC_EmitInteger, MVT::i32, 1, 
/*13220*/           OPC_EmitNode, TARGET_VAL(Mips::LiRxImm16), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*13228*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETLE:Other) - Complexity = 3
                    // Dst: (XorRxRxRy16:i32 (SltCCRxRy16:i32 CPU16Regs:i32:$rhs, CPU16Regs:i32:$lhs), (LiRxImm16:i32 1:i32))
/*13237*/         /*Scope*/ 36, /*->13274*/
/*13238*/           OPC_CheckCondCode, ISD::SETNE,
/*13240*/           OPC_MoveParent,
/*13241*/           OPC_CheckType, MVT::i32,
/*13243*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13245*/           OPC_EmitInteger, MVT::i32, 0, 
/*13248*/           OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*13256*/           OPC_EmitNode, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*13265*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltuCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETNE:Other) - Complexity = 3
                    // Dst: (SltuCCRxRy16:i32 (LiRxImmX16:i32 0:i32), (XorRxRxRy16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs))
/*13274*/         /*Scope*/ 36, /*->13311*/
/*13275*/           OPC_CheckCondCode, ISD::SETUGE,
/*13277*/           OPC_MoveParent,
/*13278*/           OPC_CheckType, MVT::i32,
/*13280*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13282*/           OPC_EmitNode, TARGET_VAL(Mips::SltuCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*13291*/           OPC_EmitInteger, MVT::i32, 1, 
/*13294*/           OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*13302*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETUGE:Other) - Complexity = 3
                    // Dst: (XorRxRxRy16:i32 (SltuCCRxRy16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs), (LiRxImmX16:i32 1:i32))
/*13311*/         /*Scope*/ 36, /*->13348*/
/*13312*/           OPC_CheckCondCode, ISD::SETULE,
/*13314*/           OPC_MoveParent,
/*13315*/           OPC_CheckType, MVT::i32,
/*13317*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13319*/           OPC_EmitNode, TARGET_VAL(Mips::SltuCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*13328*/           OPC_EmitInteger, MVT::i32, 1, 
/*13331*/           OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*13339*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETULE:Other) - Complexity = 3
                    // Dst: (XorRxRxRy16:i32 (SltuCCRxRy16:i32 CPU16Regs:i32:$rhs, CPU16Regs:i32:$lhs), (LiRxImmX16:i32 1:i32))
/*13348*/         0, /*End of Scope*/
/*13349*/       0, /*End of Scope*/
/*13350*/     0, /*End of Scope*/
/*13351*/   /*Scope*/ 36|128,3/*420*/, /*->13773*/
/*13353*/     OPC_CheckChild0Type, MVT::i64,
/*13355*/     OPC_Scope, 49, /*->13406*/ // 2 children in Scope
/*13357*/       OPC_MoveChild, 1,
/*13359*/       OPC_CheckInteger, 0, 
/*13361*/       OPC_MoveParent,
/*13362*/       OPC_MoveChild, 2,
/*13364*/       OPC_Scope, 19, /*->13385*/ // 2 children in Scope
/*13366*/         OPC_CheckCondCode, ISD::SETEQ,
/*13368*/         OPC_MoveParent,
/*13369*/         OPC_CheckType, MVT::i32,
/*13371*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13373*/         OPC_EmitInteger, MVT::i64, 1, 
/*13376*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (setcc:i32 GPR64:i64:$lhs, 0:i64, SETEQ:Other) - Complexity = 8
                  // Dst: (SLTiu64:i32 GPR64:i64:$lhs, 1:i64)
/*13385*/       /*Scope*/ 19, /*->13405*/
/*13386*/         OPC_CheckCondCode, ISD::SETNE,
/*13388*/         OPC_MoveParent,
/*13389*/         OPC_CheckType, MVT::i32,
/*13391*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13393*/         OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*13396*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (setcc:i32 GPR64:i64:$lhs, 0:i64, SETNE:Other) - Complexity = 8
                  // Dst: (SLTu64:i32 ZERO_64:i64, GPR64:i64:$lhs)
/*13405*/       0, /*End of Scope*/
/*13406*/     /*Scope*/ 108|128,2/*364*/, /*->13772*/
/*13408*/       OPC_RecordChild1, // #1 = $imm16
/*13409*/       OPC_Scope, 112, /*->13523*/ // 2 children in Scope
/*13411*/         OPC_MoveChild, 1,
/*13413*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13416*/         OPC_CheckPredicate, 28, // Predicate_immSExt16
/*13418*/         OPC_MoveParent,
/*13419*/         OPC_MoveChild, 2,
/*13421*/         OPC_Scope, 18, /*->13441*/ // 4 children in Scope
/*13423*/           OPC_CheckCondCode, ISD::SETLT,
/*13425*/           OPC_MoveParent,
/*13426*/           OPC_CheckType, MVT::i32,
/*13428*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13430*/           OPC_EmitConvertToTarget, 1,
/*13432*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTi64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i32 GPR64Opnd:i64:$rs, (imm:i64)<<P:Predicate_immSExt16>>:$imm16, SETLT:Other) - Complexity = 7
                    // Dst: (SLTi64:i32 GPR64Opnd:i64:$rs, (imm:i64):$imm16)
/*13441*/         /*Scope*/ 18, /*->13460*/
/*13442*/           OPC_CheckCondCode, ISD::SETULT,
/*13444*/           OPC_MoveParent,
/*13445*/           OPC_CheckType, MVT::i32,
/*13447*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13449*/           OPC_EmitConvertToTarget, 1,
/*13451*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i32 GPR64Opnd:i64:$rs, (imm:i64)<<P:Predicate_immSExt16>>:$imm16, SETULT:Other) - Complexity = 7
                    // Dst: (SLTiu64:i32 GPR64Opnd:i64:$rs, (imm:i64):$imm16)
/*13460*/         /*Scope*/ 30, /*->13491*/
/*13461*/           OPC_CheckCondCode, ISD::SETGE,
/*13463*/           OPC_MoveParent,
/*13464*/           OPC_CheckType, MVT::i32,
/*13466*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13468*/           OPC_EmitConvertToTarget, 1,
/*13470*/           OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*13479*/           OPC_EmitInteger, MVT::i32, 1, 
/*13482*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                    // Src: (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other) - Complexity = 7
                    // Dst: (XORi:i32 (SLTi64:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
/*13491*/         /*Scope*/ 30, /*->13522*/
/*13492*/           OPC_CheckCondCode, ISD::SETUGE,
/*13494*/           OPC_MoveParent,
/*13495*/           OPC_CheckType, MVT::i32,
/*13497*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13499*/           OPC_EmitConvertToTarget, 1,
/*13501*/           OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*13510*/           OPC_EmitInteger, MVT::i32, 1, 
/*13513*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                    // Src: (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other) - Complexity = 7
                    // Dst: (XORi:i32 (SLTiu64:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
/*13522*/         0, /*End of Scope*/
/*13523*/       /*Scope*/ 118|128,1/*246*/, /*->13771*/
/*13525*/         OPC_MoveChild, 2,
/*13527*/         OPC_Scope, 16, /*->13545*/ // 10 children in Scope
/*13529*/           OPC_CheckCondCode, ISD::SETLT,
/*13531*/           OPC_MoveParent,
/*13532*/           OPC_CheckType, MVT::i32,
/*13534*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13536*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLT64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt, SETLT:Other) - Complexity = 3
                    // Dst: (SLT64:i32 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt)
/*13545*/         /*Scope*/ 16, /*->13562*/
/*13546*/           OPC_CheckCondCode, ISD::SETULT,
/*13548*/           OPC_MoveParent,
/*13549*/           OPC_CheckType, MVT::i32,
/*13551*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13553*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt, SETULT:Other) - Complexity = 3
                    // Dst: (SLTu64:i32 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt)
/*13562*/         /*Scope*/ 16, /*->13579*/
/*13563*/           OPC_CheckCondCode, ISD::SETGT,
/*13565*/           OPC_MoveParent,
/*13566*/           OPC_CheckType, MVT::i32,
/*13568*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13570*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLT64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETGT:Other) - Complexity = 3
                    // Dst: (SLT64:i32 GPR64:i64:$rhs, GPR64:i64:$lhs)
/*13579*/         /*Scope*/ 16, /*->13596*/
/*13580*/           OPC_CheckCondCode, ISD::SETUGT,
/*13582*/           OPC_MoveParent,
/*13583*/           OPC_CheckType, MVT::i32,
/*13585*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13587*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETUGT:Other) - Complexity = 3
                    // Dst: (SLTu64:i32 GPR64:i64:$rhs, GPR64:i64:$lhs)
/*13596*/         /*Scope*/ 28, /*->13625*/
/*13597*/           OPC_CheckCondCode, ISD::SETEQ,
/*13599*/           OPC_MoveParent,
/*13600*/           OPC_CheckType, MVT::i32,
/*13602*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13604*/           OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #2
/*13613*/           OPC_EmitInteger, MVT::i64, 1, 
/*13616*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETEQ:Other) - Complexity = 3
                    // Dst: (SLTiu64:i32 (XOR64:i64 GPR64:i64:$lhs, GPR64:i64:$rhs), 1:i64)
/*13625*/         /*Scope*/ 28, /*->13654*/
/*13626*/           OPC_CheckCondCode, ISD::SETNE,
/*13628*/           OPC_MoveParent,
/*13629*/           OPC_CheckType, MVT::i32,
/*13631*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13633*/           OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*13636*/           OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #3
/*13645*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETNE:Other) - Complexity = 3
                    // Dst: (SLTu64:i32 ZERO_64:i64, (XOR64:i64 GPR64:i64:$lhs, GPR64:i64:$rhs))
/*13654*/         /*Scope*/ 28, /*->13683*/
/*13655*/           OPC_CheckCondCode, ISD::SETLE,
/*13657*/           OPC_MoveParent,
/*13658*/           OPC_CheckType, MVT::i32,
/*13660*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13662*/           OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*13671*/           OPC_EmitInteger, MVT::i32, 1, 
/*13674*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETLE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLT64:i32 GPR64:i64:$rhs, GPR64:i64:$lhs), 1:i32)
/*13683*/         /*Scope*/ 28, /*->13712*/
/*13684*/           OPC_CheckCondCode, ISD::SETULE,
/*13686*/           OPC_MoveParent,
/*13687*/           OPC_CheckType, MVT::i32,
/*13689*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13691*/           OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*13700*/           OPC_EmitInteger, MVT::i32, 1, 
/*13703*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETULE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLTu64:i32 GPR64:i64:$rhs, GPR64:i64:$lhs), 1:i32)
/*13712*/         /*Scope*/ 28, /*->13741*/
/*13713*/           OPC_CheckCondCode, ISD::SETGE,
/*13715*/           OPC_MoveParent,
/*13716*/           OPC_CheckType, MVT::i32,
/*13718*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13720*/           OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*13729*/           OPC_EmitInteger, MVT::i32, 1, 
/*13732*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETGE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLT64:i32 GPR64:i64:$lhs, GPR64:i64:$rhs), 1:i32)
/*13741*/         /*Scope*/ 28, /*->13770*/
/*13742*/           OPC_CheckCondCode, ISD::SETUGE,
/*13744*/           OPC_MoveParent,
/*13745*/           OPC_CheckType, MVT::i32,
/*13747*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13749*/           OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*13758*/           OPC_EmitInteger, MVT::i32, 1, 
/*13761*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETUGE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLTu64:i32 GPR64:i64:$lhs, GPR64:i64:$rhs), 1:i32)
/*13770*/         0, /*End of Scope*/
/*13771*/       0, /*End of Scope*/
/*13772*/     0, /*End of Scope*/
/*13773*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 54,  TARGET_VAL(MipsISD::FPBrcond),// ->13831
/*13777*/   OPC_RecordNode,   // #0 = 'MipsFPBrcond' chained node
/*13778*/   OPC_CaptureGlueInput,
/*13779*/   OPC_MoveChild, 1,
/*13781*/   OPC_CheckType, MVT::i32,
/*13783*/   OPC_Scope, 22, /*->13807*/ // 2 children in Scope
/*13785*/     OPC_CheckInteger, 0, 
/*13787*/     OPC_MoveParent,
/*13788*/     OPC_RecordChild2, // #1 = $fcc
/*13789*/     OPC_RecordChild3, // #2 = $offset
/*13790*/     OPC_MoveChild, 3,
/*13792*/     OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*13795*/     OPC_MoveParent,
/*13796*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13798*/     OPC_EmitMergeInputChains1_0,
/*13799*/     OPC_MorphNodeTo, TARGET_VAL(Mips::BC1F), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (MipsFPBrcond 0:i32, FCCRegsOpnd:i32:$fcc, (bb:Other):$offset) - Complexity = 8
              // Dst: (BC1F FCCRegsOpnd:i32:$fcc, (bb:Other):$offset)
/*13807*/   /*Scope*/ 22, /*->13830*/
/*13808*/     OPC_CheckInteger, 1, 
/*13810*/     OPC_MoveParent,
/*13811*/     OPC_RecordChild2, // #1 = $fcc
/*13812*/     OPC_RecordChild3, // #2 = $offset
/*13813*/     OPC_MoveChild, 3,
/*13815*/     OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*13818*/     OPC_MoveParent,
/*13819*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13821*/     OPC_EmitMergeInputChains1_0,
/*13822*/     OPC_MorphNodeTo, TARGET_VAL(Mips::BC1T), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (MipsFPBrcond 1:i32, FCCRegsOpnd:i32:$fcc, (bb:Other):$offset) - Complexity = 8
              // Dst: (BC1T FCCRegsOpnd:i32:$fcc, (bb:Other):$offset)
/*13830*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 93,  TARGET_VAL(ISD::SUB),// ->13927
/*13834*/   OPC_Scope, 18, /*->13854*/ // 2 children in Scope
/*13836*/     OPC_MoveChild, 0,
/*13838*/     OPC_CheckInteger, 0, 
/*13840*/     OPC_MoveParent,
/*13841*/     OPC_RecordChild1, // #0 = $r
/*13842*/     OPC_CheckType, MVT::i32,
/*13844*/     OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13846*/     OPC_MorphNodeTo, TARGET_VAL(Mips::NegRxRy16), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (sub:i32 0:i32, CPU16Regs:i32:$r) - Complexity = 8
              // Dst: (NegRxRy16:i32 CPU16Regs:i32:$r)
/*13854*/   /*Scope*/ 71, /*->13926*/
/*13855*/     OPC_RecordChild0, // #0 = $rs
/*13856*/     OPC_RecordChild1, // #1 = $rt
/*13857*/     OPC_SwitchType /*4 cases */, 26,  MVT::i32,// ->13886
/*13860*/       OPC_Scope, 11, /*->13873*/ // 2 children in Scope
/*13862*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13864*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SUBu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt) - Complexity = 3
                  // Dst: (SUBu:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
/*13873*/       /*Scope*/ 11, /*->13885*/
/*13874*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13876*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SubuRxRyRz16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                  // Dst: (SubuRxRyRz16:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*13885*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->13899
/*13888*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13890*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSUBu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (sub:i64 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt) - Complexity = 3
                // Dst: (DSUBu:i64 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt)
              /*SwitchType*/ 11,  MVT::v2i16,// ->13912
/*13901*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*13903*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQ_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (sub:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b) - Complexity = 3
                // Dst: (SUBQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b)
              /*SwitchType*/ 11,  MVT::v4i8,// ->13925
/*13914*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*13916*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SUBU_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (sub:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b) - Complexity = 3
                // Dst: (SUBU_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b)
              0, // EndSwitchType
/*13926*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 94,  TARGET_VAL(ISD::AND),// ->14024
/*13930*/   OPC_RecordChild0, // #0 = $rs
/*13931*/   OPC_RecordChild1, // #1 = $imm16
/*13932*/   OPC_Scope, 46, /*->13980*/ // 3 children in Scope
/*13934*/     OPC_MoveChild, 1,
/*13936*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13939*/     OPC_CheckPredicate, 27, // Predicate_immZExt16
/*13941*/     OPC_MoveParent,
/*13942*/     OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->13961
/*13945*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13947*/       OPC_EmitConvertToTarget, 1,
/*13949*/       OPC_EmitNodeXForm, 0, 2, // LO16
/*13952*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ANDi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (and:i32 GPR32Opnd:i32:$rs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                // Dst: (ANDi:i32 GPR32Opnd:i32:$rs, (LO16:i32 (imm:i32):$imm16))
              /*SwitchType*/ 16,  MVT::i64,// ->13979
/*13963*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13965*/       OPC_EmitConvertToTarget, 1,
/*13967*/       OPC_EmitNodeXForm, 0, 2, // LO16
/*13970*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ANDi64), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (and:i64 GPR64Opnd:i64:$rs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                // Dst: (ANDi64:i64 GPR64Opnd:i64:$rs, (LO16:i64 (imm:i64):$imm16))
              0, // EndSwitchType
/*13980*/   /*Scope*/ 28, /*->14009*/
/*13981*/     OPC_CheckType, MVT::i32,
/*13983*/     OPC_Scope, 11, /*->13996*/ // 2 children in Scope
/*13985*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13987*/       OPC_MorphNodeTo, TARGET_VAL(Mips::AND), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt) - Complexity = 3
                // Dst: (AND:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
/*13996*/     /*Scope*/ 11, /*->14008*/
/*13997*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13999*/       OPC_MorphNodeTo, TARGET_VAL(Mips::AndRxRxRy16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                // Dst: (AndRxRxRy16:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*14008*/     0, /*End of Scope*/
/*14009*/   /*Scope*/ 13, /*->14023*/
/*14010*/     OPC_CheckType, MVT::i64,
/*14012*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14014*/     OPC_MorphNodeTo, TARGET_VAL(Mips::AND64), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (and:i64 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt) - Complexity = 3
              // Dst: (AND64:i64 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt)
/*14023*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 94,  TARGET_VAL(ISD::OR),// ->14121
/*14027*/   OPC_RecordChild0, // #0 = $rs
/*14028*/   OPC_RecordChild1, // #1 = $imm16
/*14029*/   OPC_Scope, 46, /*->14077*/ // 3 children in Scope
/*14031*/     OPC_MoveChild, 1,
/*14033*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14036*/     OPC_CheckPredicate, 27, // Predicate_immZExt16
/*14038*/     OPC_MoveParent,
/*14039*/     OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->14058
/*14042*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14044*/       OPC_EmitConvertToTarget, 1,
/*14046*/       OPC_EmitNodeXForm, 0, 2, // LO16
/*14049*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ORi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (or:i32 GPR32Opnd:i32:$rs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                // Dst: (ORi:i32 GPR32Opnd:i32:$rs, (LO16:i32 (imm:i32):$imm16))
              /*SwitchType*/ 16,  MVT::i64,// ->14076
/*14060*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14062*/       OPC_EmitConvertToTarget, 1,
/*14064*/       OPC_EmitNodeXForm, 0, 2, // LO16
/*14067*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ORi64), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 GPR64Opnd:i64:$rs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                // Dst: (ORi64:i64 GPR64Opnd:i64:$rs, (LO16:i64 (imm:i64):$imm16))
              0, // EndSwitchType
/*14077*/   /*Scope*/ 28, /*->14106*/
/*14078*/     OPC_CheckType, MVT::i32,
/*14080*/     OPC_Scope, 11, /*->14093*/ // 2 children in Scope
/*14082*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14084*/       OPC_MorphNodeTo, TARGET_VAL(Mips::OR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt) - Complexity = 3
                // Dst: (OR:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
/*14093*/     /*Scope*/ 11, /*->14105*/
/*14094*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14096*/       OPC_MorphNodeTo, TARGET_VAL(Mips::OrRxRxRy16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                // Dst: (OrRxRxRy16:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*14105*/     0, /*End of Scope*/
/*14106*/   /*Scope*/ 13, /*->14120*/
/*14107*/     OPC_CheckType, MVT::i64,
/*14109*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14111*/     OPC_MorphNodeTo, TARGET_VAL(Mips::OR64), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (or:i64 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt) - Complexity = 3
              // Dst: (OR64:i64 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt)
/*14120*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 117,  TARGET_VAL(ISD::SHL),// ->14241
/*14124*/   OPC_RecordChild0, // #0 = $rt
/*14125*/   OPC_RecordChild1, // #1 = $shamt
/*14126*/   OPC_Scope, 66, /*->14194*/ // 2 children in Scope
/*14128*/     OPC_MoveChild, 1,
/*14130*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14133*/     OPC_CheckType, MVT::i32,
/*14135*/     OPC_Scope, 18, /*->14155*/ // 3 children in Scope
/*14137*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14139*/       OPC_MoveParent,
/*14140*/       OPC_CheckType, MVT::i32,
/*14142*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14144*/       OPC_EmitConvertToTarget, 1,
/*14146*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SLL), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (shl:i32 GPR32Opnd:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$shamt) - Complexity = 7
                // Dst: (SLL:i32 GPR32Opnd:i32:$rt, (imm:i32):$shamt)
/*14155*/     /*Scope*/ 18, /*->14174*/
/*14156*/       OPC_CheckPredicate, 31, // Predicate_immZExt6
/*14158*/       OPC_MoveParent,
/*14159*/       OPC_CheckType, MVT::i64,
/*14161*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14163*/       OPC_EmitConvertToTarget, 1,
/*14165*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSLL), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (shl:i64 GPR64Opnd:i64:$rt, (imm:i32)<<P:Predicate_immZExt6>>:$shamt) - Complexity = 7
                // Dst: (DSLL:i64 GPR64Opnd:i64:$rt, (imm:i32):$shamt)
/*14174*/     /*Scope*/ 18, /*->14193*/
/*14175*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14177*/       OPC_MoveParent,
/*14178*/       OPC_CheckType, MVT::i32,
/*14180*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14182*/       OPC_EmitConvertToTarget, 1,
/*14184*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SllX16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (shl:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm) - Complexity = 7
                // Dst: (SllX16:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm)
/*14193*/     0, /*End of Scope*/
/*14194*/   /*Scope*/ 45, /*->14240*/
/*14195*/     OPC_CheckChild1Type, MVT::i32,
/*14197*/     OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->14226
/*14200*/       OPC_Scope, 11, /*->14213*/ // 2 children in Scope
/*14202*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14204*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLLV), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (shl:i32 GPR32Opnd:i32:$rt, GPR32Opnd:i32:$rs) - Complexity = 3
                  // Dst: (SLLV:i32 GPR32Opnd:i32:$rt, GPR32Opnd:i32:$rs)
/*14213*/       /*Scope*/ 11, /*->14225*/
/*14214*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14216*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SllvRxRy16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (shl:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra) - Complexity = 3
                  // Dst: (SllvRxRy16:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra)
/*14225*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->14239
/*14228*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14230*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSLLV), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i64 GPR64Opnd:i64:$rt, GPR32Opnd:i32:$rs) - Complexity = 3
                // Dst: (DSLLV:i64 GPR64Opnd:i64:$rt, GPR32Opnd:i32:$rs)
              0, // EndSwitchType
/*14240*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 117,  TARGET_VAL(ISD::SRL),// ->14361
/*14244*/   OPC_RecordChild0, // #0 = $rt
/*14245*/   OPC_RecordChild1, // #1 = $shamt
/*14246*/   OPC_Scope, 66, /*->14314*/ // 2 children in Scope
/*14248*/     OPC_MoveChild, 1,
/*14250*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14253*/     OPC_CheckType, MVT::i32,
/*14255*/     OPC_Scope, 18, /*->14275*/ // 3 children in Scope
/*14257*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14259*/       OPC_MoveParent,
/*14260*/       OPC_CheckType, MVT::i32,
/*14262*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14264*/       OPC_EmitConvertToTarget, 1,
/*14266*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SRL), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (srl:i32 GPR32Opnd:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$shamt) - Complexity = 7
                // Dst: (SRL:i32 GPR32Opnd:i32:$rt, (imm:i32):$shamt)
/*14275*/     /*Scope*/ 18, /*->14294*/
/*14276*/       OPC_CheckPredicate, 31, // Predicate_immZExt6
/*14278*/       OPC_MoveParent,
/*14279*/       OPC_CheckType, MVT::i64,
/*14281*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14283*/       OPC_EmitConvertToTarget, 1,
/*14285*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSRL), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (srl:i64 GPR64Opnd:i64:$rt, (imm:i32)<<P:Predicate_immZExt6>>:$shamt) - Complexity = 7
                // Dst: (DSRL:i64 GPR64Opnd:i64:$rt, (imm:i32):$shamt)
/*14294*/     /*Scope*/ 18, /*->14313*/
/*14295*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14297*/       OPC_MoveParent,
/*14298*/       OPC_CheckType, MVT::i32,
/*14300*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14302*/       OPC_EmitConvertToTarget, 1,
/*14304*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SrlX16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (srl:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm) - Complexity = 7
                // Dst: (SrlX16:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm)
/*14313*/     0, /*End of Scope*/
/*14314*/   /*Scope*/ 45, /*->14360*/
/*14315*/     OPC_CheckChild1Type, MVT::i32,
/*14317*/     OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->14346
/*14320*/       OPC_Scope, 11, /*->14333*/ // 2 children in Scope
/*14322*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14324*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SRLV), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (srl:i32 GPR32Opnd:i32:$rt, GPR32Opnd:i32:$rs) - Complexity = 3
                  // Dst: (SRLV:i32 GPR32Opnd:i32:$rt, GPR32Opnd:i32:$rs)
/*14333*/       /*Scope*/ 11, /*->14345*/
/*14334*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14336*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SrlvRxRy16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (srl:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra) - Complexity = 3
                  // Dst: (SrlvRxRy16:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra)
/*14345*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->14359
/*14348*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14350*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSRLV), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i64 GPR64Opnd:i64:$rt, GPR32Opnd:i32:$rs) - Complexity = 3
                // Dst: (DSRLV:i64 GPR64Opnd:i64:$rt, GPR32Opnd:i32:$rs)
              0, // EndSwitchType
/*14360*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 117,  TARGET_VAL(ISD::SRA),// ->14481
/*14364*/   OPC_RecordChild0, // #0 = $rt
/*14365*/   OPC_RecordChild1, // #1 = $shamt
/*14366*/   OPC_Scope, 66, /*->14434*/ // 2 children in Scope
/*14368*/     OPC_MoveChild, 1,
/*14370*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14373*/     OPC_CheckType, MVT::i32,
/*14375*/     OPC_Scope, 18, /*->14395*/ // 3 children in Scope
/*14377*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14379*/       OPC_MoveParent,
/*14380*/       OPC_CheckType, MVT::i32,
/*14382*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14384*/       OPC_EmitConvertToTarget, 1,
/*14386*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SRA), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i32 GPR32Opnd:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$shamt) - Complexity = 7
                // Dst: (SRA:i32 GPR32Opnd:i32:$rt, (imm:i32):$shamt)
/*14395*/     /*Scope*/ 18, /*->14414*/
/*14396*/       OPC_CheckPredicate, 31, // Predicate_immZExt6
/*14398*/       OPC_MoveParent,
/*14399*/       OPC_CheckType, MVT::i64,
/*14401*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14403*/       OPC_EmitConvertToTarget, 1,
/*14405*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSRA), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i64 GPR64Opnd:i64:$rt, (imm:i32)<<P:Predicate_immZExt6>>:$shamt) - Complexity = 7
                // Dst: (DSRA:i64 GPR64Opnd:i64:$rt, (imm:i32):$shamt)
/*14414*/     /*Scope*/ 18, /*->14433*/
/*14415*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14417*/       OPC_MoveParent,
/*14418*/       OPC_CheckType, MVT::i32,
/*14420*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14422*/       OPC_EmitConvertToTarget, 1,
/*14424*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SraX16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm) - Complexity = 7
                // Dst: (SraX16:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm)
/*14433*/     0, /*End of Scope*/
/*14434*/   /*Scope*/ 45, /*->14480*/
/*14435*/     OPC_CheckChild1Type, MVT::i32,
/*14437*/     OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->14466
/*14440*/       OPC_Scope, 11, /*->14453*/ // 2 children in Scope
/*14442*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14444*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SRAV), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sra:i32 GPR32Opnd:i32:$rt, GPR32Opnd:i32:$rs) - Complexity = 3
                  // Dst: (SRAV:i32 GPR32Opnd:i32:$rt, GPR32Opnd:i32:$rs)
/*14453*/       /*Scope*/ 11, /*->14465*/
/*14454*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14456*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SravRxRy16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sra:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra) - Complexity = 3
                  // Dst: (SravRxRy16:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra)
/*14465*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->14479
/*14468*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14470*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSRAV), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i64 GPR64Opnd:i64:$rt, GPR32Opnd:i32:$rs) - Complexity = 3
                // Dst: (DSRAV:i64 GPR64Opnd:i64:$rt, GPR32Opnd:i32:$rs)
              0, // EndSwitchType
/*14480*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ROTR),// ->14567
/*14484*/   OPC_RecordChild0, // #0 = $rt
/*14485*/   OPC_RecordChild1, // #1 = $shamt
/*14486*/   OPC_Scope, 47, /*->14535*/ // 2 children in Scope
/*14488*/     OPC_MoveChild, 1,
/*14490*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14493*/     OPC_CheckType, MVT::i32,
/*14495*/     OPC_Scope, 18, /*->14515*/ // 2 children in Scope
/*14497*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14499*/       OPC_MoveParent,
/*14500*/       OPC_CheckType, MVT::i32,
/*14502*/       OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*14504*/       OPC_EmitConvertToTarget, 1,
/*14506*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ROTR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (rotr:i32 GPR32Opnd:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$shamt) - Complexity = 7
                // Dst: (ROTR:i32 GPR32Opnd:i32:$rt, (imm:i32):$shamt)
/*14515*/     /*Scope*/ 18, /*->14534*/
/*14516*/       OPC_CheckPredicate, 31, // Predicate_immZExt6
/*14518*/       OPC_MoveParent,
/*14519*/       OPC_CheckType, MVT::i64,
/*14521*/       OPC_CheckPatternPredicate, 16, // (Subtarget.hasMips64r2()) && (Subtarget.hasStandardEncoding())
/*14523*/       OPC_EmitConvertToTarget, 1,
/*14525*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DROTR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (rotr:i64 GPR64Opnd:i64:$rt, (imm:i32)<<P:Predicate_immZExt6>>:$shamt) - Complexity = 7
                // Dst: (DROTR:i64 GPR64Opnd:i64:$rt, (imm:i32):$shamt)
/*14534*/     0, /*End of Scope*/
/*14535*/   /*Scope*/ 30, /*->14566*/
/*14536*/     OPC_CheckChild1Type, MVT::i32,
/*14538*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->14552
/*14541*/       OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*14543*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ROTRV), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (rotr:i32 GPR32Opnd:i32:$rt, GPR32Opnd:i32:$rs) - Complexity = 3
                // Dst: (ROTRV:i32 GPR32Opnd:i32:$rt, GPR32Opnd:i32:$rs)
              /*SwitchType*/ 11,  MVT::i64,// ->14565
/*14554*/       OPC_CheckPatternPredicate, 16, // (Subtarget.hasMips64r2()) && (Subtarget.hasStandardEncoding())
/*14556*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DROTRV), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (rotr:i64 GPR64Opnd:i64:$rt, GPR32Opnd:i32:$rs) - Complexity = 3
                // Dst: (DROTRV:i64 GPR64Opnd:i64:$rt, GPR32Opnd:i32:$rs)
              0, // EndSwitchType
/*14566*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 86,  TARGET_VAL(ISD::ADDC),// ->14656
/*14570*/   OPC_RecordChild0, // #0 = $src
/*14571*/   OPC_RecordChild1, // #1 = $imm
/*14572*/   OPC_Scope, 40, /*->14614*/ // 2 children in Scope
/*14574*/     OPC_MoveChild, 1,
/*14576*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14579*/     OPC_CheckPredicate, 28, // Predicate_immSExt16
/*14581*/     OPC_MoveParent,
/*14582*/     OPC_CheckType, MVT::i32,
/*14584*/     OPC_Scope, 13, /*->14599*/ // 2 children in Scope
/*14586*/       OPC_CheckPatternPredicate, 17, // (Subtarget.hasStandardEncoding()) && (!Subtarget.hasDSP())
/*14588*/       OPC_EmitConvertToTarget, 1,
/*14590*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i32 GPR32:i32:$src, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                // Dst: (ADDiu:i32 GPR32:i32:$src, (imm:i32):$imm)
/*14599*/     /*Scope*/ 13, /*->14613*/
/*14600*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14602*/       OPC_EmitConvertToTarget, 1,
/*14604*/       OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i32 CPU16Regs:i32:$src, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$src, (imm:i32):$imm)
/*14613*/     0, /*End of Scope*/
/*14614*/   /*Scope*/ 40, /*->14655*/
/*14615*/     OPC_CheckType, MVT::i32,
/*14617*/     OPC_Scope, 11, /*->14630*/ // 3 children in Scope
/*14619*/       OPC_CheckPatternPredicate, 17, // (Subtarget.hasStandardEncoding()) && (!Subtarget.hasDSP())
/*14621*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDu), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs) - Complexity = 3
                // Dst: (ADDu:i32 GPR32:i32:$lhs, GPR32:i32:$rhs)
/*14630*/     /*Scope*/ 11, /*->14642*/
/*14631*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14633*/       OPC_MorphNodeTo, TARGET_VAL(Mips::AdduRxRyRz16), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs) - Complexity = 3
                // Dst: (AdduRxRyRz16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs)
/*14642*/     /*Scope*/ 11, /*->14654*/
/*14643*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14645*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDSC), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i32 i32:i32:$a, i32:i32:$b) - Complexity = 3
                // Dst: (ADDSC:i32 i32:i32:$a, i32:i32:$b)
/*14654*/     0, /*End of Scope*/
/*14655*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 39,  TARGET_VAL(MipsISD::SHILO),// ->14698
/*14659*/   OPC_RecordChild0, // #0 = $shift
/*14660*/   OPC_Scope, 22, /*->14684*/ // 2 children in Scope
/*14662*/     OPC_MoveChild, 0,
/*14664*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14667*/     OPC_CheckPredicate, 32, // Predicate_immSExt6
/*14669*/     OPC_MoveParent,
/*14670*/     OPC_RecordChild1, // #1 = $acin
/*14671*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14673*/     OPC_EmitConvertToTarget, 0,
/*14675*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHILO), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 2, 1, 
              // Src: (MipsSHILO:Untyped (imm:i32)<<P:Predicate_immSExt6>>:$shift, ACRegsDSP:Untyped:$acin) - Complexity = 7
              // Dst: (SHILO:Untyped (imm:i32):$shift, ACRegsDSP:Untyped:$acin)
/*14684*/   /*Scope*/ 12, /*->14697*/
/*14685*/     OPC_RecordChild1, // #1 = $acin
/*14686*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14688*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHILOV), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (MipsSHILO:Untyped GPR32:i32:$rs, ACRegsDSP:Untyped:$acin) - Complexity = 3
              // Dst: (SHILOV:Untyped GPR32:i32:$rs, ACRegsDSP:Untyped:$acin)
/*14697*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::EXTP),// ->14743
/*14701*/   OPC_RecordNode,   // #0 = 'MipsEXTP' chained node
/*14702*/   OPC_RecordChild1, // #1 = $shift
/*14703*/   OPC_Scope, 23, /*->14728*/ // 2 children in Scope
/*14705*/     OPC_MoveChild, 1,
/*14707*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14710*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14712*/     OPC_MoveParent,
/*14713*/     OPC_RecordChild2, // #2 = $ac
/*14714*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14716*/     OPC_EmitMergeInputChains1_0,
/*14717*/     OPC_EmitConvertToTarget, 1,
/*14719*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTP), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTP:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift, ACRegsDSP:Untyped:$ac) - Complexity = 7
              // Dst: (EXTP:i32 ACRegsDSP:Untyped:$ac, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*14728*/   /*Scope*/ 13, /*->14742*/
/*14729*/     OPC_RecordChild2, // #2 = $ac
/*14730*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14732*/     OPC_EmitMergeInputChains1_0,
/*14733*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTPV), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTP:i32 GPR32:i32:$rs, ACRegsDSP:Untyped:$ac) - Complexity = 3
              // Dst: (EXTPV:i32 ACRegsDSP:Untyped:$ac, GPR32:i32:$rs)
/*14742*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::EXTPDP),// ->14788
/*14746*/   OPC_RecordNode,   // #0 = 'MipsEXTPDP' chained node
/*14747*/   OPC_RecordChild1, // #1 = $shift
/*14748*/   OPC_Scope, 23, /*->14773*/ // 2 children in Scope
/*14750*/     OPC_MoveChild, 1,
/*14752*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14755*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14757*/     OPC_MoveParent,
/*14758*/     OPC_RecordChild2, // #2 = $ac
/*14759*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14761*/     OPC_EmitMergeInputChains1_0,
/*14762*/     OPC_EmitConvertToTarget, 1,
/*14764*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTPDP), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTPDP:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift, ACRegsDSP:Untyped:$ac) - Complexity = 7
              // Dst: (EXTPDP:i32 ACRegsDSP:Untyped:$ac, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*14773*/   /*Scope*/ 13, /*->14787*/
/*14774*/     OPC_RecordChild2, // #2 = $ac
/*14775*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14777*/     OPC_EmitMergeInputChains1_0,
/*14778*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTPDPV), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTPDP:i32 GPR32:i32:$rs, ACRegsDSP:Untyped:$ac) - Complexity = 3
              // Dst: (EXTPDPV:i32 ACRegsDSP:Untyped:$ac, GPR32:i32:$rs)
/*14787*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::EXTR_W),// ->14833
/*14791*/   OPC_RecordNode,   // #0 = 'MipsEXTR_W' chained node
/*14792*/   OPC_RecordChild1, // #1 = $shift
/*14793*/   OPC_Scope, 23, /*->14818*/ // 2 children in Scope
/*14795*/     OPC_MoveChild, 1,
/*14797*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14800*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14802*/     OPC_MoveParent,
/*14803*/     OPC_RecordChild2, // #2 = $ac
/*14804*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14806*/     OPC_EmitMergeInputChains1_0,
/*14807*/     OPC_EmitConvertToTarget, 1,
/*14809*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTR_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTR_W:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift, ACRegsDSP:Untyped:$ac) - Complexity = 7
              // Dst: (EXTR_W:i32 ACRegsDSP:Untyped:$ac, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*14818*/   /*Scope*/ 13, /*->14832*/
/*14819*/     OPC_RecordChild2, // #2 = $ac
/*14820*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14822*/     OPC_EmitMergeInputChains1_0,
/*14823*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTRV_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTR_W:i32 GPR32:i32:$rs, ACRegsDSP:Untyped:$ac) - Complexity = 3
              // Dst: (EXTRV_W:i32 ACRegsDSP:Untyped:$ac, GPR32:i32:$rs)
/*14832*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::EXTR_R_W),// ->14878
/*14836*/   OPC_RecordNode,   // #0 = 'MipsEXTR_R_W' chained node
/*14837*/   OPC_RecordChild1, // #1 = $shift
/*14838*/   OPC_Scope, 23, /*->14863*/ // 2 children in Scope
/*14840*/     OPC_MoveChild, 1,
/*14842*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14845*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14847*/     OPC_MoveParent,
/*14848*/     OPC_RecordChild2, // #2 = $ac
/*14849*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14851*/     OPC_EmitMergeInputChains1_0,
/*14852*/     OPC_EmitConvertToTarget, 1,
/*14854*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTR_R_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTR_R_W:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift, ACRegsDSP:Untyped:$ac) - Complexity = 7
              // Dst: (EXTR_R_W:i32 ACRegsDSP:Untyped:$ac, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*14863*/   /*Scope*/ 13, /*->14877*/
/*14864*/     OPC_RecordChild2, // #2 = $ac
/*14865*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14867*/     OPC_EmitMergeInputChains1_0,
/*14868*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTRV_R_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTR_R_W:i32 GPR32:i32:$rs, ACRegsDSP:Untyped:$ac) - Complexity = 3
              // Dst: (EXTRV_R_W:i32 ACRegsDSP:Untyped:$ac, GPR32:i32:$rs)
/*14877*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::EXTR_RS_W),// ->14923
/*14881*/   OPC_RecordNode,   // #0 = 'MipsEXTR_RS_W' chained node
/*14882*/   OPC_RecordChild1, // #1 = $shift
/*14883*/   OPC_Scope, 23, /*->14908*/ // 2 children in Scope
/*14885*/     OPC_MoveChild, 1,
/*14887*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14890*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14892*/     OPC_MoveParent,
/*14893*/     OPC_RecordChild2, // #2 = $ac
/*14894*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14896*/     OPC_EmitMergeInputChains1_0,
/*14897*/     OPC_EmitConvertToTarget, 1,
/*14899*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTR_RS_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTR_RS_W:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift, ACRegsDSP:Untyped:$ac) - Complexity = 7
              // Dst: (EXTR_RS_W:i32 ACRegsDSP:Untyped:$ac, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*14908*/   /*Scope*/ 13, /*->14922*/
/*14909*/     OPC_RecordChild2, // #2 = $ac
/*14910*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14912*/     OPC_EmitMergeInputChains1_0,
/*14913*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTRV_RS_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTR_RS_W:i32 GPR32:i32:$rs, ACRegsDSP:Untyped:$ac) - Complexity = 3
              // Dst: (EXTRV_RS_W:i32 ACRegsDSP:Untyped:$ac, GPR32:i32:$rs)
/*14922*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::EXTR_S_H),// ->14968
/*14926*/   OPC_RecordNode,   // #0 = 'MipsEXTR_S_H' chained node
/*14927*/   OPC_RecordChild1, // #1 = $shift
/*14928*/   OPC_Scope, 23, /*->14953*/ // 2 children in Scope
/*14930*/     OPC_MoveChild, 1,
/*14932*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14935*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14937*/     OPC_MoveParent,
/*14938*/     OPC_RecordChild2, // #2 = $ac
/*14939*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14941*/     OPC_EmitMergeInputChains1_0,
/*14942*/     OPC_EmitConvertToTarget, 1,
/*14944*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTR_S_H), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTR_S_H:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift, ACRegsDSP:Untyped:$ac) - Complexity = 7
              // Dst: (EXTR_S_H:i32 ACRegsDSP:Untyped:$ac, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*14953*/   /*Scope*/ 13, /*->14967*/
/*14954*/     OPC_RecordChild2, // #2 = $ac
/*14955*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14957*/     OPC_EmitMergeInputChains1_0,
/*14958*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTRV_S_H), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTR_S_H:i32 GPR32:i32:$rs, ACRegsDSP:Untyped:$ac) - Complexity = 3
              // Dst: (EXTRV_S_H:i32 ACRegsDSP:Untyped:$ac, GPR32:i32:$rs)
/*14967*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::CALLSEQ_START),// ->14987
/*14971*/   OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*14972*/   OPC_RecordChild1, // #1 = $amt
/*14973*/   OPC_MoveChild, 1,
/*14975*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*14978*/   OPC_MoveParent,
/*14979*/   OPC_EmitMergeInputChains1_0,
/*14980*/   OPC_MorphNodeTo, TARGET_VAL(Mips::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN (timm:i32):$amt)
          /*SwitchOpcode*/ 20,  TARGET_VAL(MipsISD::Sync),// ->15010
/*14990*/   OPC_RecordNode,   // #0 = 'MipsSync' chained node
/*14991*/   OPC_RecordChild1, // #1 = $stype
/*14992*/   OPC_MoveChild, 1,
/*14994*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14997*/   OPC_MoveParent,
/*14998*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15000*/   OPC_EmitMergeInputChains1_0,
/*15001*/   OPC_EmitConvertToTarget, 1,
/*15003*/   OPC_MorphNodeTo, TARGET_VAL(Mips::SYNC), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 2, 
            // Src: (MipsSync (imm:i32):$stype) - Complexity = 6
            // Dst: (SYNC (imm:i32):$stype)
          /*SwitchOpcode*/ 126,  TARGET_VAL(MipsISD::JmpLink),// ->15139
/*15013*/   OPC_RecordNode,   // #0 = 'MipsJmpLink' chained node
/*15014*/   OPC_CaptureGlueInput,
/*15015*/   OPC_RecordChild1, // #1 = $target
/*15016*/   OPC_Scope, 80, /*->15098*/ // 3 children in Scope
/*15018*/     OPC_MoveChild, 1,
/*15020*/     OPC_SwitchOpcode /*3 cases */, 13,  TARGET_VAL(ISD::Constant),// ->15037
/*15024*/       OPC_MoveParent,
/*15025*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15027*/       OPC_EmitMergeInputChains1_0,
/*15028*/       OPC_EmitConvertToTarget, 1,
/*15030*/       OPC_MorphNodeTo, TARGET_VAL(Mips::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (MipsJmpLink (imm:iPTR):$target) - Complexity = 6
                // Dst: (JAL (imm:iPTR):$target)
              /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetGlobalAddress),// ->15067
/*15040*/       OPC_CheckType, MVT::i32,
/*15042*/       OPC_MoveParent,
/*15043*/       OPC_Scope, 10, /*->15055*/ // 2 children in Scope
/*15045*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15047*/         OPC_EmitMergeInputChains1_0,
/*15048*/         OPC_MorphNodeTo, TARGET_VAL(Mips::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      0/*#VTs*/, 1/*#Ops*/, 1, 
                  // Src: (MipsJmpLink (tglobaladdr:i32):$dst) - Complexity = 6
                  // Dst: (JAL (tglobaladdr:i32):$dst)
/*15055*/       /*Scope*/ 10, /*->15066*/
/*15056*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*15058*/         OPC_EmitMergeInputChains1_0,
/*15059*/         OPC_MorphNodeTo, TARGET_VAL(Mips::Jal16), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      0/*#VTs*/, 1/*#Ops*/, 1, 
                  // Src: (MipsJmpLink (tglobaladdr:i32):$dst) - Complexity = 6
                  // Dst: (Jal16 (tglobaladdr:i32):$dst)
/*15066*/       0, /*End of Scope*/
              /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetExternalSymbol),// ->15097
/*15070*/       OPC_CheckType, MVT::i32,
/*15072*/       OPC_MoveParent,
/*15073*/       OPC_Scope, 10, /*->15085*/ // 2 children in Scope
/*15075*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15077*/         OPC_EmitMergeInputChains1_0,
/*15078*/         OPC_MorphNodeTo, TARGET_VAL(Mips::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      0/*#VTs*/, 1/*#Ops*/, 1, 
                  // Src: (MipsJmpLink (texternalsym:i32):$dst) - Complexity = 6
                  // Dst: (JAL (texternalsym:i32):$dst)
/*15085*/       /*Scope*/ 10, /*->15096*/
/*15086*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*15088*/         OPC_EmitMergeInputChains1_0,
/*15089*/         OPC_MorphNodeTo, TARGET_VAL(Mips::Jal16), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      0/*#VTs*/, 1/*#Ops*/, 1, 
                  // Src: (MipsJmpLink (texternalsym:i32):$dst) - Complexity = 6
                  // Dst: (Jal16 (texternalsym:i32):$dst)
/*15096*/       0, /*End of Scope*/
              0, // EndSwitchOpcode
/*15098*/   /*Scope*/ 26, /*->15125*/
/*15099*/     OPC_CheckChild1Type, MVT::i32,
/*15101*/     OPC_Scope, 10, /*->15113*/ // 2 children in Scope
/*15103*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15105*/       OPC_EmitMergeInputChains1_0,
/*15106*/       OPC_MorphNodeTo, TARGET_VAL(Mips::JALRPseudo), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (MipsJmpLink GPR32Opnd:i32:$rs) - Complexity = 3
                // Dst: (JALRPseudo GPR32Opnd:i32:$rs)
/*15113*/     /*Scope*/ 10, /*->15124*/
/*15114*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*15116*/       OPC_EmitMergeInputChains1_0,
/*15117*/       OPC_MorphNodeTo, TARGET_VAL(Mips::JumpLinkReg16), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (MipsJmpLink CPU16Regs:i32:$rs) - Complexity = 3
                // Dst: (JumpLinkReg16 CPU16Regs:i32:$rs)
/*15124*/     0, /*End of Scope*/
/*15125*/   /*Scope*/ 12, /*->15138*/
/*15126*/     OPC_CheckChild1Type, MVT::i64,
/*15128*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15130*/     OPC_EmitMergeInputChains1_0,
/*15131*/     OPC_MorphNodeTo, TARGET_VAL(Mips::JALR64Pseudo), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsJmpLink GPR64Opnd:i64:$rs) - Complexity = 3
              // Dst: (JALR64Pseudo GPR64Opnd:i64:$rs)
/*15138*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 80,  TARGET_VAL(MipsISD::TailCall),// ->15222
/*15142*/   OPC_RecordNode,   // #0 = 'MipsTailCall' chained node
/*15143*/   OPC_CaptureGlueInput,
/*15144*/   OPC_RecordChild1, // #1 = $target
/*15145*/   OPC_Scope, 48, /*->15195*/ // 3 children in Scope
/*15147*/     OPC_MoveChild, 1,
/*15149*/     OPC_SwitchOpcode /*3 cases */, 13,  TARGET_VAL(ISD::Constant),// ->15166
/*15153*/       OPC_MoveParent,
/*15154*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15156*/       OPC_EmitMergeInputChains1_0,
/*15157*/       OPC_EmitConvertToTarget, 1,
/*15159*/       OPC_MorphNodeTo, TARGET_VAL(Mips::TAILCALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (MipsTailCall (imm:iPTR):$target) - Complexity = 6
                // Dst: (TAILCALL (imm:iPTR):$target)
              /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetGlobalAddress),// ->15180
/*15169*/       OPC_MoveParent,
/*15170*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15172*/       OPC_EmitMergeInputChains1_0,
/*15173*/       OPC_MorphNodeTo, TARGET_VAL(Mips::TAILCALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (MipsTailCall (tglobaladdr:iPTR):$dst) - Complexity = 6
                // Dst: (TAILCALL (tglobaladdr:iPTR):$dst)
              /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetExternalSymbol),// ->15194
/*15183*/       OPC_MoveParent,
/*15184*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15186*/       OPC_EmitMergeInputChains1_0,
/*15187*/       OPC_MorphNodeTo, TARGET_VAL(Mips::TAILCALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (MipsTailCall (texternalsym:iPTR):$dst) - Complexity = 6
                // Dst: (TAILCALL (texternalsym:iPTR):$dst)
              0, // EndSwitchOpcode
/*15195*/   /*Scope*/ 12, /*->15208*/
/*15196*/     OPC_CheckChild1Type, MVT::i32,
/*15198*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15200*/     OPC_EmitMergeInputChains1_0,
/*15201*/     OPC_MorphNodeTo, TARGET_VAL(Mips::TAILCALL_R), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsTailCall GPR32Opnd:i32:$rs) - Complexity = 3
              // Dst: (TAILCALL_R GPR32Opnd:i32:$rs)
/*15208*/   /*Scope*/ 12, /*->15221*/
/*15209*/     OPC_CheckChild1Type, MVT::i64,
/*15211*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15213*/     OPC_EmitMergeInputChains1_0,
/*15214*/     OPC_MorphNodeTo, TARGET_VAL(Mips::TAILCALL64_R), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsTailCall GPR64Opnd:i64:$rs) - Complexity = 3
              // Dst: (TAILCALL64_R GPR64Opnd:i64:$rs)
/*15221*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 7|128,2/*263*/,  TARGET_VAL(MipsISD::Hi),// ->15489
/*15226*/   OPC_RecordChild0, // #0 = $in
/*15227*/   OPC_MoveChild, 0,
/*15229*/   OPC_SwitchOpcode /*6 cases */, 53,  TARGET_VAL(ISD::TargetGlobalAddress),// ->15286
/*15233*/     OPC_MoveParent,
/*15234*/     OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->15273
/*15237*/       OPC_Scope, 10, /*->15249*/ // 2 children in Scope
/*15239*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15241*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (MipsHi:i32 (tglobaladdr:i32):$in) - Complexity = 6
                  // Dst: (LUi:i32 (tglobaladdr:i32):$in)
/*15249*/       /*Scope*/ 22, /*->15272*/
/*15250*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*15252*/         OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #1
/*15260*/         OPC_EmitInteger, MVT::i32, 16, 
/*15263*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SllX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (MipsHi:i32 (tglobaladdr:i32):$in) - Complexity = 6
                  // Dst: (SllX16:i32 (LiRxImmX16:i32 (tglobaladdr:i32):$in), 16:i32)
/*15272*/       0, /*End of Scope*/
              /*SwitchType*/ 10,  MVT::i64,// ->15285
/*15275*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15277*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tglobaladdr:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetBlockAddress),// ->15316
/*15289*/     OPC_MoveParent,
/*15290*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->15303
/*15293*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15295*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i32 (tblockaddress:i32):$in) - Complexity = 6
                // Dst: (LUi:i32 (tblockaddress:i32):$in)
              /*SwitchType*/ 10,  MVT::i64,// ->15315
/*15305*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15307*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tblockaddress:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 53,  TARGET_VAL(ISD::TargetJumpTable),// ->15372
/*15319*/     OPC_MoveParent,
/*15320*/     OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->15359
/*15323*/       OPC_Scope, 10, /*->15335*/ // 2 children in Scope
/*15325*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15327*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (MipsHi:i32 (tjumptable:i32):$in) - Complexity = 6
                  // Dst: (LUi:i32 (tjumptable:i32):$in)
/*15335*/       /*Scope*/ 22, /*->15358*/
/*15336*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*15338*/         OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #1
/*15346*/         OPC_EmitInteger, MVT::i32, 16, 
/*15349*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SllX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (MipsHi:i32 (tjumptable:i32):$in) - Complexity = 6
                  // Dst: (SllX16:i32 (LiRxImmX16:i32 (tjumptable:i32):$in), 16:i32)
/*15358*/       0, /*End of Scope*/
              /*SwitchType*/ 10,  MVT::i64,// ->15371
/*15361*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15363*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tjumptable:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetConstantPool),// ->15402
/*15375*/     OPC_MoveParent,
/*15376*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->15389
/*15379*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15381*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i32 (tconstpool:i32):$in) - Complexity = 6
                // Dst: (LUi:i32 (tconstpool:i32):$in)
              /*SwitchType*/ 10,  MVT::i64,// ->15401
/*15391*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15393*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tconstpool:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 53,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->15458
/*15405*/     OPC_MoveParent,
/*15406*/     OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->15445
/*15409*/       OPC_Scope, 10, /*->15421*/ // 2 children in Scope
/*15411*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15413*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (MipsHi:i32 (tglobaltlsaddr:i32):$in) - Complexity = 6
                  // Dst: (LUi:i32 (tglobaltlsaddr:i32):$in)
/*15421*/       /*Scope*/ 22, /*->15444*/
/*15422*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*15424*/         OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #1
/*15432*/         OPC_EmitInteger, MVT::i32, 16, 
/*15435*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SllX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (MipsHi:i32 (tglobaltlsaddr:i32):$in) - Complexity = 6
                  // Dst: (SllX16:i32 (LiRxImmX16:i32 (tglobaltlsaddr:i32):$in), 16:i32)
/*15444*/       0, /*End of Scope*/
              /*SwitchType*/ 10,  MVT::i64,// ->15457
/*15447*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15449*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tglobaltlsaddr:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tglobaltlsaddr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetExternalSymbol),// ->15488
/*15461*/     OPC_MoveParent,
/*15462*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->15475
/*15465*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15467*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i32 (texternalsym:i32):$in) - Complexity = 6
                // Dst: (LUi:i32 (texternalsym:i32):$in)
              /*SwitchType*/ 10,  MVT::i64,// ->15487
/*15477*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15479*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (texternalsym:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (texternalsym:i64):$in)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 105|128,1/*233*/,  TARGET_VAL(MipsISD::Lo),// ->15726
/*15493*/   OPC_RecordChild0, // #0 = $in
/*15494*/   OPC_MoveChild, 0,
/*15496*/   OPC_SwitchOpcode /*6 cases */, 35,  TARGET_VAL(ISD::TargetGlobalAddress),// ->15535
/*15500*/     OPC_MoveParent,
/*15501*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->15518
/*15504*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15506*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15509*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tglobaladdr:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tglobaladdr:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->15534
/*15520*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15522*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*15525*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tglobaladdr:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::TargetBlockAddress),// ->15573
/*15538*/     OPC_MoveParent,
/*15539*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->15556
/*15542*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15544*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15547*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tblockaddress:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tblockaddress:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->15572
/*15558*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15560*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*15563*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tblockaddress:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::TargetJumpTable),// ->15611
/*15576*/     OPC_MoveParent,
/*15577*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->15594
/*15580*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15582*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15585*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tjumptable:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tjumptable:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->15610
/*15596*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15598*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*15601*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tjumptable:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::TargetConstantPool),// ->15649
/*15614*/     OPC_MoveParent,
/*15615*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->15632
/*15618*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15620*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15623*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tconstpool:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tconstpool:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->15648
/*15634*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15636*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*15639*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tconstpool:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->15687
/*15652*/     OPC_MoveParent,
/*15653*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->15670
/*15656*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15658*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15661*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tglobaltlsaddr:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tglobaltlsaddr:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->15686
/*15672*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15674*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*15677*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tglobaltlsaddr:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tglobaltlsaddr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::TargetExternalSymbol),// ->15725
/*15690*/     OPC_MoveParent,
/*15691*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->15708
/*15694*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15696*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15699*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (texternalsym:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (texternalsym:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->15724
/*15710*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15712*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*15715*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (texternalsym:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (texternalsym:i64):$in)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 100|128,1/*228*/,  TARGET_VAL(MipsISD::Wrapper),// ->15958
/*15730*/   OPC_RecordChild0, // #0 = $gp
/*15731*/   OPC_RecordChild1, // #1 = $in
/*15732*/   OPC_MoveChild, 1,
/*15734*/   OPC_SwitchOpcode /*6 cases */, 44,  TARGET_VAL(ISD::TargetGlobalAddress),// ->15782
/*15738*/     OPC_MoveParent,
/*15739*/     OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->15768
/*15742*/       OPC_Scope, 11, /*->15755*/ // 2 children in Scope
/*15744*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15746*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (MipsWrapper:i32 GPR32:i32:$gp, (tglobaladdr:i32):$in) - Complexity = 6
                  // Dst: (ADDiu:i32 GPR32:i32:$gp, (tglobaladdr:i32):$in)
/*15755*/       /*Scope*/ 11, /*->15767*/
/*15756*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*15758*/         OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (MipsWrapper:i32 CPU16Regs:i32:$gp, (tglobaladdr:i32):$in) - Complexity = 6
                  // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$gp, (tglobaladdr:i32):$in)
/*15767*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->15781
/*15770*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15772*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 GPR64:i64:$gp, (tglobaladdr:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 GPR64:i64:$gp, (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::TargetConstantPool),// ->15814
/*15785*/     OPC_MoveParent,
/*15786*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->15800
/*15789*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15791*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i32 GPR32:i32:$gp, (tconstpool:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 GPR32:i32:$gp, (tconstpool:i32):$in)
              /*SwitchType*/ 11,  MVT::i64,// ->15813
/*15802*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15804*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 GPR64:i64:$gp, (tconstpool:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 GPR64:i64:$gp, (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::TargetExternalSymbol),// ->15846
/*15817*/     OPC_MoveParent,
/*15818*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->15832
/*15821*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15823*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i32 GPR32:i32:$gp, (texternalsym:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 GPR32:i32:$gp, (texternalsym:i32):$in)
              /*SwitchType*/ 11,  MVT::i64,// ->15845
/*15834*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15836*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 GPR64:i64:$gp, (texternalsym:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 GPR64:i64:$gp, (texternalsym:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::TargetBlockAddress),// ->15878
/*15849*/     OPC_MoveParent,
/*15850*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->15864
/*15853*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15855*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i32 GPR32:i32:$gp, (tblockaddress:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 GPR32:i32:$gp, (tblockaddress:i32):$in)
              /*SwitchType*/ 11,  MVT::i64,// ->15877
/*15866*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15868*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 GPR64:i64:$gp, (tblockaddress:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 GPR64:i64:$gp, (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::TargetJumpTable),// ->15910
/*15881*/     OPC_MoveParent,
/*15882*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->15896
/*15885*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15887*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i32 GPR32:i32:$gp, (tjumptable:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 GPR32:i32:$gp, (tjumptable:i32):$in)
              /*SwitchType*/ 11,  MVT::i64,// ->15909
/*15898*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15900*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 GPR64:i64:$gp, (tjumptable:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 GPR64:i64:$gp, (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->15957
/*15913*/     OPC_MoveParent,
/*15914*/     OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->15943
/*15917*/       OPC_Scope, 11, /*->15930*/ // 2 children in Scope
/*15919*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15921*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (MipsWrapper:i32 GPR32:i32:$gp, (tglobaltlsaddr:i32):$in) - Complexity = 6
                  // Dst: (ADDiu:i32 GPR32:i32:$gp, (tglobaltlsaddr:i32):$in)
/*15930*/       /*Scope*/ 11, /*->15942*/
/*15931*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*15933*/         OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (MipsWrapper:i32 CPU16Regs:i32:$gp, (tglobaltlsaddr:i32):$in) - Complexity = 6
                  // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$gp, (tglobaltlsaddr:i32):$in)
/*15942*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->15956
/*15945*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15947*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 GPR64:i64:$gp, (tglobaltlsaddr:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 GPR64:i64:$gp, (tglobaltlsaddr:i64):$in)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 71,  TARGET_VAL(MipsISD::FPCmp),// ->16032
/*15961*/   OPC_RecordChild0, // #0 = $fs
/*15962*/   OPC_Scope, 24, /*->15988*/ // 2 children in Scope
/*15964*/     OPC_CheckChild0Type, MVT::f32,
/*15966*/     OPC_RecordChild1, // #1 = $ft
/*15967*/     OPC_RecordChild2, // #2 = $cond
/*15968*/     OPC_MoveChild, 2,
/*15970*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15973*/     OPC_MoveParent,
/*15974*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15976*/     OPC_EmitConvertToTarget, 2,
/*15978*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FCMP_S32), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (MipsFPCmp FGR32:f32:$fs, FGR32:f32:$ft, (imm:i32):$cond) - Complexity = 6
              // Dst: (FCMP_S32:i32 FGR32:f32:$fs, FGR32:f32:$ft, (imm:i32):$cond)
/*15988*/   /*Scope*/ 42, /*->16031*/
/*15989*/     OPC_CheckChild0Type, MVT::f64,
/*15991*/     OPC_RecordChild1, // #1 = $ft
/*15992*/     OPC_RecordChild2, // #2 = $cond
/*15993*/     OPC_MoveChild, 2,
/*15995*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15998*/     OPC_MoveParent,
/*15999*/     OPC_Scope, 14, /*->16015*/ // 2 children in Scope
/*16001*/       OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*16003*/       OPC_EmitConvertToTarget, 2,
/*16005*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FCMP_D32), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                // Src: (MipsFPCmp AFGR64:f64:$fs, AFGR64:f64:$ft, (imm:i32):$cond) - Complexity = 6
                // Dst: (FCMP_D32:i32 AFGR64:f64:$fs, AFGR64:f64:$ft, (imm:i32):$cond)
/*16015*/     /*Scope*/ 14, /*->16030*/
/*16016*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*16018*/       OPC_EmitConvertToTarget, 2,
/*16020*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FCMP_D64), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                // Src: (MipsFPCmp FGR64:f64:$fs, FGR64:f64:$ft, (imm:i32):$cond) - Complexity = 6
                // Dst: (FCMP_D64:i32 FGR64:f64:$fs, FGR64:f64:$ft, (imm:i32):$cond)
/*16030*/     0, /*End of Scope*/
/*16031*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 21,  TARGET_VAL(MipsISD::ExtractElementF64),// ->16056
/*16035*/   OPC_RecordChild0, // #0 = $src
/*16036*/   OPC_RecordChild1, // #1 = $n
/*16037*/   OPC_MoveChild, 1,
/*16039*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*16042*/   OPC_MoveParent,
/*16043*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16045*/   OPC_EmitConvertToTarget, 1,
/*16047*/   OPC_MorphNodeTo, TARGET_VAL(Mips::ExtractElementF64), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
            // Src: (MipsExtractElementF64:i32 AFGR64RegsOpnd:f64:$src, (imm:i32):$n) - Complexity = 6
            // Dst: (ExtractElementF64:i32 AFGR64RegsOpnd:f64:$src, (imm:i32):$n)
          /*SwitchOpcode*/ 61|128,1/*189*/,  TARGET_VAL(ISD::Constant),// ->16249
/*16060*/   OPC_RecordNode,   // #0 = $in
/*16061*/   OPC_CheckType, MVT::i32,
/*16063*/   OPC_Scope, 18, /*->16083*/ // 6 children in Scope
/*16065*/     OPC_CheckPredicate, 28, // Predicate_immSExt16
/*16067*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16069*/     OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*16072*/     OPC_EmitConvertToTarget, 0,
/*16074*/     OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (imm:i32)<<P:Predicate_immSExt16>>:$in - Complexity = 4
              // Dst: (ADDiu:i32 ZERO:i32, (imm:i32):$in)
/*16083*/   /*Scope*/ 18, /*->16102*/
/*16084*/     OPC_CheckPredicate, 27, // Predicate_immZExt16
/*16086*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16088*/     OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*16091*/     OPC_EmitConvertToTarget, 0,
/*16093*/     OPC_MorphNodeTo, TARGET_VAL(Mips::ORi), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$in - Complexity = 4
              // Dst: (ORi:i32 ZERO:i32, (imm:i32):$in)
/*16102*/   /*Scope*/ 17, /*->16120*/
/*16103*/     OPC_CheckPredicate, 33, // Predicate_immLow16Zero
/*16105*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16107*/     OPC_EmitConvertToTarget, 0,
/*16109*/     OPC_EmitNodeXForm, 2, 1, // HI16
/*16112*/     OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (imm:i32)<<P:Predicate_immLow16Zero>>:$in - Complexity = 4
              // Dst: (LUi:i32 (HI16:i32 (imm:i32):$in))
/*16120*/   /*Scope*/ 17, /*->16138*/
/*16121*/     OPC_CheckPredicate, 27, // Predicate_immZExt16
/*16123*/     OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*16125*/     OPC_EmitConvertToTarget, 0,
/*16127*/     OPC_EmitNodeXForm, 0, 1, // LO16
/*16130*/     OPC_MorphNodeTo, TARGET_VAL(Mips::LiRxImmX16), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$in - Complexity = 4
              // Dst: (LiRxImmX16:i32 (LO16:i32 (imm:i32)<<P:Predicate_immZExt16>>:$in))
/*16138*/   /*Scope*/ 26, /*->16165*/
/*16139*/     OPC_CheckPredicate, 28, // Predicate_immSExt16
/*16141*/     OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*16143*/     OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*16146*/     OPC_EmitNode, TARGET_VAL(Mips::Move32R16), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*16154*/     OPC_EmitConvertToTarget, 0,
/*16156*/     OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (imm:i32)<<P:Predicate_immSExt16>>:$in - Complexity = 4
              // Dst: (AddiuRxRxImmX16:i32 (Move32R16:i32 ZERO:i32), (imm:i32)<<P:Predicate_immSExt16>>:$in)
/*16165*/   /*Scope*/ 82, /*->16248*/
/*16166*/     OPC_Scope, 29, /*->16197*/ // 2 children in Scope
/*16168*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16170*/       OPC_EmitConvertToTarget, 0,
/*16172*/       OPC_EmitNodeXForm, 2, 1, // HI16
/*16175*/       OPC_EmitNode, TARGET_VAL(Mips::LUi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*16183*/       OPC_EmitConvertToTarget, 0,
/*16185*/       OPC_EmitNodeXForm, 0, 4, // LO16
/*16188*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ORi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 5, 
                // Src: (imm:i32):$imm - Complexity = 3
                // Dst: (ORi:i32 (LUi:i32 (HI16:i32 (imm:i32):$imm)), (LO16:i32 (imm:i32):$imm))
/*16197*/     /*Scope*/ 49, /*->16247*/
/*16198*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*16200*/       OPC_EmitConvertToTarget, 0,
/*16202*/       OPC_EmitNodeXForm, 2, 1, // HI16
/*16205*/       OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*16213*/       OPC_EmitInteger, MVT::i32, 16, 
/*16216*/       OPC_EmitNode, TARGET_VAL(Mips::SllX16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*16225*/       OPC_EmitConvertToTarget, 0,
/*16227*/       OPC_EmitNodeXForm, 0, 6, // LO16
/*16230*/       OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*16238*/       OPC_MorphNodeTo, TARGET_VAL(Mips::OrRxRxRy16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 8, 
                // Src: (imm:i32):$imm - Complexity = 3
                // Dst: (OrRxRxRy16:i32 (SllX16:i32 (LiRxImmX16:i32 (HI16:i32 (imm:i32):$imm)), 16:i32), (LiRxImmX16:i32 (LO16:i32 (imm:i32):$imm)))
/*16247*/     0, /*End of Scope*/
/*16248*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->16400
/*16253*/   OPC_RecordMemRef,
/*16254*/   OPC_RecordNode,   // #0 = 'atomic_load_add' chained node
/*16255*/   OPC_RecordChild1, // #1 = $ptr
/*16256*/   OPC_Scope, 70, /*->16328*/ // 2 children in Scope
/*16258*/     OPC_CheckChild1Type, MVT::i32,
/*16260*/     OPC_RecordChild2, // #2 = $incr
/*16261*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16311
/*16264*/       OPC_Scope, 14, /*->16280*/ // 3 children in Scope
/*16266*/         OPC_CheckPredicate, 34, // Predicate_atomic_load_add_8
/*16268*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16270*/         OPC_EmitMergeInputChains1_0,
/*16271*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_add_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I8:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*16280*/       /*Scope*/ 14, /*->16295*/
/*16281*/         OPC_CheckPredicate, 35, // Predicate_atomic_load_add_16
/*16283*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16285*/         OPC_EmitMergeInputChains1_0,
/*16286*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_add_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I16:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*16295*/       /*Scope*/ 14, /*->16310*/
/*16296*/         OPC_CheckPredicate, 36, // Predicate_atomic_load_add_32
/*16298*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16300*/         OPC_EmitMergeInputChains1_0,
/*16301*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_add_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I32:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*16310*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16327
/*16313*/       OPC_CheckPredicate, 37, // Predicate_atomic_load_add_64
/*16315*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16317*/       OPC_EmitMergeInputChains1_0,
/*16318*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_add:i64 GPR32:i32:$ptr, GPR64:i64:$incr)<<P:Predicate_atomic_load_add_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_ADD_I64:i64 GPR32:i32:$ptr, GPR64:i64:$incr)
              0, // EndSwitchType
/*16328*/   /*Scope*/ 70, /*->16399*/
/*16329*/     OPC_CheckChild1Type, MVT::i64,
/*16331*/     OPC_RecordChild2, // #2 = $incr
/*16332*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16382
/*16335*/       OPC_Scope, 14, /*->16351*/ // 3 children in Scope
/*16337*/         OPC_CheckPredicate, 34, // Predicate_atomic_load_add_8
/*16339*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16341*/         OPC_EmitMergeInputChains1_0,
/*16342*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_add_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I8_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*16351*/       /*Scope*/ 14, /*->16366*/
/*16352*/         OPC_CheckPredicate, 35, // Predicate_atomic_load_add_16
/*16354*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16356*/         OPC_EmitMergeInputChains1_0,
/*16357*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_add_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I16_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*16366*/       /*Scope*/ 14, /*->16381*/
/*16367*/         OPC_CheckPredicate, 36, // Predicate_atomic_load_add_32
/*16369*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16371*/         OPC_EmitMergeInputChains1_0,
/*16372*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_add_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I32_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*16381*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16398
/*16384*/       OPC_CheckPredicate, 37, // Predicate_atomic_load_add_64
/*16386*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16388*/       OPC_EmitMergeInputChains1_0,
/*16389*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_add:i64 GPR64:i64:$ptr, GPR64:i64:$incr)<<P:Predicate_atomic_load_add_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_ADD_I64_P8:i64 GPR64:i64:$ptr, GPR64:i64:$incr)
              0, // EndSwitchType
/*16399*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_SUB),// ->16551
/*16404*/   OPC_RecordMemRef,
/*16405*/   OPC_RecordNode,   // #0 = 'atomic_load_sub' chained node
/*16406*/   OPC_RecordChild1, // #1 = $ptr
/*16407*/   OPC_Scope, 70, /*->16479*/ // 2 children in Scope
/*16409*/     OPC_CheckChild1Type, MVT::i32,
/*16411*/     OPC_RecordChild2, // #2 = $incr
/*16412*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16462
/*16415*/       OPC_Scope, 14, /*->16431*/ // 3 children in Scope
/*16417*/         OPC_CheckPredicate, 38, // Predicate_atomic_load_sub_8
/*16419*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16421*/         OPC_EmitMergeInputChains1_0,
/*16422*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_sub_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I8:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*16431*/       /*Scope*/ 14, /*->16446*/
/*16432*/         OPC_CheckPredicate, 39, // Predicate_atomic_load_sub_16
/*16434*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16436*/         OPC_EmitMergeInputChains1_0,
/*16437*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_sub_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I16:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*16446*/       /*Scope*/ 14, /*->16461*/
/*16447*/         OPC_CheckPredicate, 40, // Predicate_atomic_load_sub_32
/*16449*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16451*/         OPC_EmitMergeInputChains1_0,
/*16452*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_sub_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I32:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*16461*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16478
/*16464*/       OPC_CheckPredicate, 41, // Predicate_atomic_load_sub_64
/*16466*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16468*/       OPC_EmitMergeInputChains1_0,
/*16469*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_sub:i64 GPR32:i32:$ptr, GPR64:i64:$incr)<<P:Predicate_atomic_load_sub_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_SUB_I64:i64 GPR32:i32:$ptr, GPR64:i64:$incr)
              0, // EndSwitchType
/*16479*/   /*Scope*/ 70, /*->16550*/
/*16480*/     OPC_CheckChild1Type, MVT::i64,
/*16482*/     OPC_RecordChild2, // #2 = $incr
/*16483*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16533
/*16486*/       OPC_Scope, 14, /*->16502*/ // 3 children in Scope
/*16488*/         OPC_CheckPredicate, 38, // Predicate_atomic_load_sub_8
/*16490*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16492*/         OPC_EmitMergeInputChains1_0,
/*16493*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_sub_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I8_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*16502*/       /*Scope*/ 14, /*->16517*/
/*16503*/         OPC_CheckPredicate, 39, // Predicate_atomic_load_sub_16
/*16505*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16507*/         OPC_EmitMergeInputChains1_0,
/*16508*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_sub_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I16_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*16517*/       /*Scope*/ 14, /*->16532*/
/*16518*/         OPC_CheckPredicate, 40, // Predicate_atomic_load_sub_32
/*16520*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16522*/         OPC_EmitMergeInputChains1_0,
/*16523*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_sub_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I32_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*16532*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16549
/*16535*/       OPC_CheckPredicate, 41, // Predicate_atomic_load_sub_64
/*16537*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16539*/       OPC_EmitMergeInputChains1_0,
/*16540*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_sub:i64 GPR64:i64:$ptr, GPR64:i64:$incr)<<P:Predicate_atomic_load_sub_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_SUB_I64_P8:i64 GPR64:i64:$ptr, GPR64:i64:$incr)
              0, // EndSwitchType
/*16550*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_AND),// ->16702
/*16555*/   OPC_RecordMemRef,
/*16556*/   OPC_RecordNode,   // #0 = 'atomic_load_and' chained node
/*16557*/   OPC_RecordChild1, // #1 = $ptr
/*16558*/   OPC_Scope, 70, /*->16630*/ // 2 children in Scope
/*16560*/     OPC_CheckChild1Type, MVT::i32,
/*16562*/     OPC_RecordChild2, // #2 = $incr
/*16563*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16613
/*16566*/       OPC_Scope, 14, /*->16582*/ // 3 children in Scope
/*16568*/         OPC_CheckPredicate, 42, // Predicate_atomic_load_and_8
/*16570*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16572*/         OPC_EmitMergeInputChains1_0,
/*16573*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_and_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I8:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*16582*/       /*Scope*/ 14, /*->16597*/
/*16583*/         OPC_CheckPredicate, 43, // Predicate_atomic_load_and_16
/*16585*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16587*/         OPC_EmitMergeInputChains1_0,
/*16588*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_and_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I16:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*16597*/       /*Scope*/ 14, /*->16612*/
/*16598*/         OPC_CheckPredicate, 44, // Predicate_atomic_load_and_32
/*16600*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16602*/         OPC_EmitMergeInputChains1_0,
/*16603*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_and_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I32:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*16612*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16629
/*16615*/       OPC_CheckPredicate, 45, // Predicate_atomic_load_and_64
/*16617*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16619*/       OPC_EmitMergeInputChains1_0,
/*16620*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_and:i64 GPR32:i32:$ptr, GPR64:i64:$incr)<<P:Predicate_atomic_load_and_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_AND_I64:i64 GPR32:i32:$ptr, GPR64:i64:$incr)
              0, // EndSwitchType
/*16630*/   /*Scope*/ 70, /*->16701*/
/*16631*/     OPC_CheckChild1Type, MVT::i64,
/*16633*/     OPC_RecordChild2, // #2 = $incr
/*16634*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16684
/*16637*/       OPC_Scope, 14, /*->16653*/ // 3 children in Scope
/*16639*/         OPC_CheckPredicate, 42, // Predicate_atomic_load_and_8
/*16641*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16643*/         OPC_EmitMergeInputChains1_0,
/*16644*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_and_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I8_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*16653*/       /*Scope*/ 14, /*->16668*/
/*16654*/         OPC_CheckPredicate, 43, // Predicate_atomic_load_and_16
/*16656*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16658*/         OPC_EmitMergeInputChains1_0,
/*16659*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_and_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I16_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*16668*/       /*Scope*/ 14, /*->16683*/
/*16669*/         OPC_CheckPredicate, 44, // Predicate_atomic_load_and_32
/*16671*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16673*/         OPC_EmitMergeInputChains1_0,
/*16674*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_and_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I32_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*16683*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16700
/*16686*/       OPC_CheckPredicate, 45, // Predicate_atomic_load_and_64
/*16688*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16690*/       OPC_EmitMergeInputChains1_0,
/*16691*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_and:i64 GPR64:i64:$ptr, GPR64:i64:$incr)<<P:Predicate_atomic_load_and_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_AND_I64_P8:i64 GPR64:i64:$ptr, GPR64:i64:$incr)
              0, // EndSwitchType
/*16701*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_OR),// ->16853
/*16706*/   OPC_RecordMemRef,
/*16707*/   OPC_RecordNode,   // #0 = 'atomic_load_or' chained node
/*16708*/   OPC_RecordChild1, // #1 = $ptr
/*16709*/   OPC_Scope, 70, /*->16781*/ // 2 children in Scope
/*16711*/     OPC_CheckChild1Type, MVT::i32,
/*16713*/     OPC_RecordChild2, // #2 = $incr
/*16714*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16764
/*16717*/       OPC_Scope, 14, /*->16733*/ // 3 children in Scope
/*16719*/         OPC_CheckPredicate, 46, // Predicate_atomic_load_or_8
/*16721*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16723*/         OPC_EmitMergeInputChains1_0,
/*16724*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_or_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I8:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*16733*/       /*Scope*/ 14, /*->16748*/
/*16734*/         OPC_CheckPredicate, 47, // Predicate_atomic_load_or_16
/*16736*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16738*/         OPC_EmitMergeInputChains1_0,
/*16739*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_or_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I16:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*16748*/       /*Scope*/ 14, /*->16763*/
/*16749*/         OPC_CheckPredicate, 48, // Predicate_atomic_load_or_32
/*16751*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16753*/         OPC_EmitMergeInputChains1_0,
/*16754*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_or_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I32:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*16763*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16780
/*16766*/       OPC_CheckPredicate, 49, // Predicate_atomic_load_or_64
/*16768*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16770*/       OPC_EmitMergeInputChains1_0,
/*16771*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_or:i64 GPR32:i32:$ptr, GPR64:i64:$incr)<<P:Predicate_atomic_load_or_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_OR_I64:i64 GPR32:i32:$ptr, GPR64:i64:$incr)
              0, // EndSwitchType
/*16781*/   /*Scope*/ 70, /*->16852*/
/*16782*/     OPC_CheckChild1Type, MVT::i64,
/*16784*/     OPC_RecordChild2, // #2 = $incr
/*16785*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16835
/*16788*/       OPC_Scope, 14, /*->16804*/ // 3 children in Scope
/*16790*/         OPC_CheckPredicate, 46, // Predicate_atomic_load_or_8
/*16792*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16794*/         OPC_EmitMergeInputChains1_0,
/*16795*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_or_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I8_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*16804*/       /*Scope*/ 14, /*->16819*/
/*16805*/         OPC_CheckPredicate, 47, // Predicate_atomic_load_or_16
/*16807*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16809*/         OPC_EmitMergeInputChains1_0,
/*16810*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_or_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I16_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*16819*/       /*Scope*/ 14, /*->16834*/
/*16820*/         OPC_CheckPredicate, 48, // Predicate_atomic_load_or_32
/*16822*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16824*/         OPC_EmitMergeInputChains1_0,
/*16825*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_or_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I32_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*16834*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16851
/*16837*/       OPC_CheckPredicate, 49, // Predicate_atomic_load_or_64
/*16839*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16841*/       OPC_EmitMergeInputChains1_0,
/*16842*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_or:i64 GPR64:i64:$ptr, GPR64:i64:$incr)<<P:Predicate_atomic_load_or_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_OR_I64_P8:i64 GPR64:i64:$ptr, GPR64:i64:$incr)
              0, // EndSwitchType
/*16852*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_XOR),// ->17004
/*16857*/   OPC_RecordMemRef,
/*16858*/   OPC_RecordNode,   // #0 = 'atomic_load_xor' chained node
/*16859*/   OPC_RecordChild1, // #1 = $ptr
/*16860*/   OPC_Scope, 70, /*->16932*/ // 2 children in Scope
/*16862*/     OPC_CheckChild1Type, MVT::i32,
/*16864*/     OPC_RecordChild2, // #2 = $incr
/*16865*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16915
/*16868*/       OPC_Scope, 14, /*->16884*/ // 3 children in Scope
/*16870*/         OPC_CheckPredicate, 50, // Predicate_atomic_load_xor_8
/*16872*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16874*/         OPC_EmitMergeInputChains1_0,
/*16875*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_xor_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I8:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*16884*/       /*Scope*/ 14, /*->16899*/
/*16885*/         OPC_CheckPredicate, 51, // Predicate_atomic_load_xor_16
/*16887*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16889*/         OPC_EmitMergeInputChains1_0,
/*16890*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_xor_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I16:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*16899*/       /*Scope*/ 14, /*->16914*/
/*16900*/         OPC_CheckPredicate, 52, // Predicate_atomic_load_xor_32
/*16902*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16904*/         OPC_EmitMergeInputChains1_0,
/*16905*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_xor_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I32:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*16914*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16931
/*16917*/       OPC_CheckPredicate, 53, // Predicate_atomic_load_xor_64
/*16919*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16921*/       OPC_EmitMergeInputChains1_0,
/*16922*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_xor:i64 GPR32:i32:$ptr, GPR64:i64:$incr)<<P:Predicate_atomic_load_xor_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_XOR_I64:i64 GPR32:i32:$ptr, GPR64:i64:$incr)
              0, // EndSwitchType
/*16932*/   /*Scope*/ 70, /*->17003*/
/*16933*/     OPC_CheckChild1Type, MVT::i64,
/*16935*/     OPC_RecordChild2, // #2 = $incr
/*16936*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16986
/*16939*/       OPC_Scope, 14, /*->16955*/ // 3 children in Scope
/*16941*/         OPC_CheckPredicate, 50, // Predicate_atomic_load_xor_8
/*16943*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16945*/         OPC_EmitMergeInputChains1_0,
/*16946*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_xor_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I8_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*16955*/       /*Scope*/ 14, /*->16970*/
/*16956*/         OPC_CheckPredicate, 51, // Predicate_atomic_load_xor_16
/*16958*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16960*/         OPC_EmitMergeInputChains1_0,
/*16961*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_xor_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I16_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*16970*/       /*Scope*/ 14, /*->16985*/
/*16971*/         OPC_CheckPredicate, 52, // Predicate_atomic_load_xor_32
/*16973*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16975*/         OPC_EmitMergeInputChains1_0,
/*16976*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_xor_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I32_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*16985*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->17002
/*16988*/       OPC_CheckPredicate, 53, // Predicate_atomic_load_xor_64
/*16990*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16992*/       OPC_EmitMergeInputChains1_0,
/*16993*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_xor:i64 GPR64:i64:$ptr, GPR64:i64:$incr)<<P:Predicate_atomic_load_xor_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_XOR_I64_P8:i64 GPR64:i64:$ptr, GPR64:i64:$incr)
              0, // EndSwitchType
/*17003*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_NAND),// ->17155
/*17008*/   OPC_RecordMemRef,
/*17009*/   OPC_RecordNode,   // #0 = 'atomic_load_nand' chained node
/*17010*/   OPC_RecordChild1, // #1 = $ptr
/*17011*/   OPC_Scope, 70, /*->17083*/ // 2 children in Scope
/*17013*/     OPC_CheckChild1Type, MVT::i32,
/*17015*/     OPC_RecordChild2, // #2 = $incr
/*17016*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->17066
/*17019*/       OPC_Scope, 14, /*->17035*/ // 3 children in Scope
/*17021*/         OPC_CheckPredicate, 54, // Predicate_atomic_load_nand_8
/*17023*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17025*/         OPC_EmitMergeInputChains1_0,
/*17026*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_nand_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I8:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*17035*/       /*Scope*/ 14, /*->17050*/
/*17036*/         OPC_CheckPredicate, 55, // Predicate_atomic_load_nand_16
/*17038*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17040*/         OPC_EmitMergeInputChains1_0,
/*17041*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_nand_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I16:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*17050*/       /*Scope*/ 14, /*->17065*/
/*17051*/         OPC_CheckPredicate, 56, // Predicate_atomic_load_nand_32
/*17053*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17055*/         OPC_EmitMergeInputChains1_0,
/*17056*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_nand_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I32:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*17065*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->17082
/*17068*/       OPC_CheckPredicate, 57, // Predicate_atomic_load_nand_64
/*17070*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17072*/       OPC_EmitMergeInputChains1_0,
/*17073*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_nand:i64 GPR32:i32:$ptr, GPR64:i64:$incr)<<P:Predicate_atomic_load_nand_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_NAND_I64:i64 GPR32:i32:$ptr, GPR64:i64:$incr)
              0, // EndSwitchType
/*17083*/   /*Scope*/ 70, /*->17154*/
/*17084*/     OPC_CheckChild1Type, MVT::i64,
/*17086*/     OPC_RecordChild2, // #2 = $incr
/*17087*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->17137
/*17090*/       OPC_Scope, 14, /*->17106*/ // 3 children in Scope
/*17092*/         OPC_CheckPredicate, 54, // Predicate_atomic_load_nand_8
/*17094*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17096*/         OPC_EmitMergeInputChains1_0,
/*17097*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_nand_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I8_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*17106*/       /*Scope*/ 14, /*->17121*/
/*17107*/         OPC_CheckPredicate, 55, // Predicate_atomic_load_nand_16
/*17109*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17111*/         OPC_EmitMergeInputChains1_0,
/*17112*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_nand_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I16_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*17121*/       /*Scope*/ 14, /*->17136*/
/*17122*/         OPC_CheckPredicate, 56, // Predicate_atomic_load_nand_32
/*17124*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17126*/         OPC_EmitMergeInputChains1_0,
/*17127*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_nand_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I32_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*17136*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->17153
/*17139*/       OPC_CheckPredicate, 57, // Predicate_atomic_load_nand_64
/*17141*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17143*/       OPC_EmitMergeInputChains1_0,
/*17144*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_nand:i64 GPR64:i64:$ptr, GPR64:i64:$incr)<<P:Predicate_atomic_load_nand_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_NAND_I64_P8:i64 GPR64:i64:$ptr, GPR64:i64:$incr)
              0, // EndSwitchType
/*17154*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_SWAP),// ->17306
/*17159*/   OPC_RecordMemRef,
/*17160*/   OPC_RecordNode,   // #0 = 'atomic_swap' chained node
/*17161*/   OPC_RecordChild1, // #1 = $ptr
/*17162*/   OPC_Scope, 70, /*->17234*/ // 2 children in Scope
/*17164*/     OPC_CheckChild1Type, MVT::i32,
/*17166*/     OPC_RecordChild2, // #2 = $incr
/*17167*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->17217
/*17170*/       OPC_Scope, 14, /*->17186*/ // 3 children in Scope
/*17172*/         OPC_CheckPredicate, 58, // Predicate_atomic_swap_8
/*17174*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17176*/         OPC_EmitMergeInputChains1_0,
/*17177*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_swap_8>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I8:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*17186*/       /*Scope*/ 14, /*->17201*/
/*17187*/         OPC_CheckPredicate, 59, // Predicate_atomic_swap_16
/*17189*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17191*/         OPC_EmitMergeInputChains1_0,
/*17192*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_swap_16>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I16:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*17201*/       /*Scope*/ 14, /*->17216*/
/*17202*/         OPC_CheckPredicate, 60, // Predicate_atomic_swap_32
/*17204*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17206*/         OPC_EmitMergeInputChains1_0,
/*17207*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_swap_32>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I32:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*17216*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->17233
/*17219*/       OPC_CheckPredicate, 61, // Predicate_atomic_swap_64
/*17221*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17223*/       OPC_EmitMergeInputChains1_0,
/*17224*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_swap:i64 GPR32:i32:$ptr, GPR64:i64:$incr)<<P:Predicate_atomic_swap_64>> - Complexity = 4
                // Dst: (ATOMIC_SWAP_I64:i64 GPR32:i32:$ptr, GPR64:i64:$incr)
              0, // EndSwitchType
/*17234*/   /*Scope*/ 70, /*->17305*/
/*17235*/     OPC_CheckChild1Type, MVT::i64,
/*17237*/     OPC_RecordChild2, // #2 = $incr
/*17238*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->17288
/*17241*/       OPC_Scope, 14, /*->17257*/ // 3 children in Scope
/*17243*/         OPC_CheckPredicate, 58, // Predicate_atomic_swap_8
/*17245*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17247*/         OPC_EmitMergeInputChains1_0,
/*17248*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_swap_8>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I8_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*17257*/       /*Scope*/ 14, /*->17272*/
/*17258*/         OPC_CheckPredicate, 59, // Predicate_atomic_swap_16
/*17260*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17262*/         OPC_EmitMergeInputChains1_0,
/*17263*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_swap_16>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I16_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*17272*/       /*Scope*/ 14, /*->17287*/
/*17273*/         OPC_CheckPredicate, 60, // Predicate_atomic_swap_32
/*17275*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17277*/         OPC_EmitMergeInputChains1_0,
/*17278*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_swap_32>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I32_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*17287*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->17304
/*17290*/       OPC_CheckPredicate, 61, // Predicate_atomic_swap_64
/*17292*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17294*/       OPC_EmitMergeInputChains1_0,
/*17295*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_swap:i64 GPR64:i64:$ptr, GPR64:i64:$incr)<<P:Predicate_atomic_swap_64>> - Complexity = 4
                // Dst: (ATOMIC_SWAP_I64_P8:i64 GPR64:i64:$ptr, GPR64:i64:$incr)
              0, // EndSwitchType
/*17305*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 29|128,1/*157*/,  TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->17467
/*17310*/   OPC_RecordMemRef,
/*17311*/   OPC_RecordNode,   // #0 = 'atomic_cmp_swap' chained node
/*17312*/   OPC_RecordChild1, // #1 = $ptr
/*17313*/   OPC_Scope, 75, /*->17390*/ // 2 children in Scope
/*17315*/     OPC_CheckChild1Type, MVT::i32,
/*17317*/     OPC_RecordChild2, // #2 = $cmp
/*17318*/     OPC_RecordChild3, // #3 = $swap
/*17319*/     OPC_SwitchType /*2 cases */, 50,  MVT::i32,// ->17372
/*17322*/       OPC_Scope, 15, /*->17339*/ // 3 children in Scope
/*17324*/         OPC_CheckPredicate, 62, // Predicate_atomic_cmp_swap_8
/*17326*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17328*/         OPC_EmitMergeInputChains1_0,
/*17329*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 GPR32:i32:$ptr, GPR32:i32:$cmp, GPR32:i32:$swap)<<P:Predicate_atomic_cmp_swap_8>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I8:i32 GPR32:i32:$ptr, GPR32:i32:$cmp, GPR32:i32:$swap)
/*17339*/       /*Scope*/ 15, /*->17355*/
/*17340*/         OPC_CheckPredicate, 63, // Predicate_atomic_cmp_swap_16
/*17342*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17344*/         OPC_EmitMergeInputChains1_0,
/*17345*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 GPR32:i32:$ptr, GPR32:i32:$cmp, GPR32:i32:$swap)<<P:Predicate_atomic_cmp_swap_16>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I16:i32 GPR32:i32:$ptr, GPR32:i32:$cmp, GPR32:i32:$swap)
/*17355*/       /*Scope*/ 15, /*->17371*/
/*17356*/         OPC_CheckPredicate, 64, // Predicate_atomic_cmp_swap_32
/*17358*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17360*/         OPC_EmitMergeInputChains1_0,
/*17361*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 GPR32:i32:$ptr, GPR32:i32:$cmp, GPR32:i32:$swap)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I32:i32 GPR32:i32:$ptr, GPR32:i32:$cmp, GPR32:i32:$swap)
/*17371*/       0, /*End of Scope*/
              /*SwitchType*/ 15,  MVT::i64,// ->17389
/*17374*/       OPC_CheckPredicate, 65, // Predicate_atomic_cmp_swap_64
/*17376*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17378*/       OPC_EmitMergeInputChains1_0,
/*17379*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: (atomic_cmp_swap:i64 GPR32:i32:$ptr, GPR64:i64:$cmp, GPR64:i64:$swap)<<P:Predicate_atomic_cmp_swap_64>> - Complexity = 4
                // Dst: (ATOMIC_CMP_SWAP_I64:i64 GPR32:i32:$ptr, GPR64:i64:$cmp, GPR64:i64:$swap)
              0, // EndSwitchType
/*17390*/   /*Scope*/ 75, /*->17466*/
/*17391*/     OPC_CheckChild1Type, MVT::i64,
/*17393*/     OPC_RecordChild2, // #2 = $cmp
/*17394*/     OPC_RecordChild3, // #3 = $swap
/*17395*/     OPC_SwitchType /*2 cases */, 50,  MVT::i32,// ->17448
/*17398*/       OPC_Scope, 15, /*->17415*/ // 3 children in Scope
/*17400*/         OPC_CheckPredicate, 62, // Predicate_atomic_cmp_swap_8
/*17402*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17404*/         OPC_EmitMergeInputChains1_0,
/*17405*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 GPR64:i64:$ptr, GPR32:i32:$cmp, GPR32:i32:$swap)<<P:Predicate_atomic_cmp_swap_8>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I8_P8:i32 GPR64:i64:$ptr, GPR32:i32:$cmp, GPR32:i32:$swap)
/*17415*/       /*Scope*/ 15, /*->17431*/
/*17416*/         OPC_CheckPredicate, 63, // Predicate_atomic_cmp_swap_16
/*17418*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17420*/         OPC_EmitMergeInputChains1_0,
/*17421*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 GPR64:i64:$ptr, GPR32:i32:$cmp, GPR32:i32:$swap)<<P:Predicate_atomic_cmp_swap_16>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I16_P8:i32 GPR64:i64:$ptr, GPR32:i32:$cmp, GPR32:i32:$swap)
/*17431*/       /*Scope*/ 15, /*->17447*/
/*17432*/         OPC_CheckPredicate, 64, // Predicate_atomic_cmp_swap_32
/*17434*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17436*/         OPC_EmitMergeInputChains1_0,
/*17437*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 GPR64:i64:$ptr, GPR32:i32:$cmp, GPR32:i32:$swap)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I32_P8:i32 GPR64:i64:$ptr, GPR32:i32:$cmp, GPR32:i32:$swap)
/*17447*/       0, /*End of Scope*/
              /*SwitchType*/ 15,  MVT::i64,// ->17465
/*17450*/       OPC_CheckPredicate, 65, // Predicate_atomic_cmp_swap_64
/*17452*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17454*/       OPC_EmitMergeInputChains1_0,
/*17455*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: (atomic_cmp_swap:i64 GPR64:i64:$ptr, GPR64:i64:$cmp, GPR64:i64:$swap)<<P:Predicate_atomic_cmp_swap_64>> - Complexity = 4
                // Dst: (ATOMIC_CMP_SWAP_I64_P8:i64 GPR64:i64:$ptr, GPR64:i64:$cmp, GPR64:i64:$swap)
              0, // EndSwitchType
/*17466*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 46,  TARGET_VAL(ISD::MUL),// ->17516
/*17470*/   OPC_RecordChild0, // #0 = $rs
/*17471*/   OPC_RecordChild1, // #1 = $rt
/*17472*/   OPC_SwitchType /*2 cases */, 27,  MVT::i32,// ->17502
/*17475*/     OPC_Scope, 11, /*->17488*/ // 2 children in Scope
/*17477*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17479*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MUL), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt) - Complexity = 3
                // Dst: (MUL:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
/*17488*/     /*Scope*/ 12, /*->17501*/
/*17489*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*17491*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MultRxRyRz16), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                // Dst: (MultRxRyRz16:i32:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*17501*/     0, /*End of Scope*/
            /*SwitchType*/ 11,  MVT::v2i16,// ->17515
/*17504*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*17506*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MUL_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (mul:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b) - Complexity = 3
              // Dst: (MUL_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b)
            0, // EndSwitchType
          /*SwitchOpcode*/ 79,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->17598
/*17519*/   OPC_RecordChild0, // #0 = $rt
/*17520*/   OPC_MoveChild, 1,
/*17522*/   OPC_Scope, 29, /*->17553*/ // 3 children in Scope
/*17524*/     OPC_CheckValueType, MVT::i8,
/*17526*/     OPC_MoveParent,
/*17527*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->17540
/*17530*/       OPC_CheckPatternPredicate, 18, // (Subtarget.hasSEInReg()) && (Subtarget.hasStandardEncoding())
/*17532*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SEB), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 GPR32Opnd:i32:$rt, i8:Other) - Complexity = 3
                // Dst: (SEB:i32 GPR32Opnd:i32:$rt)
              /*SwitchType*/ 10,  MVT::i64,// ->17552
/*17542*/       OPC_CheckPatternPredicate, 18, // (Subtarget.hasSEInReg()) && (Subtarget.hasStandardEncoding())
/*17544*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SEB64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 GPR64Opnd:i64:$rt, i8:Other) - Complexity = 3
                // Dst: (SEB64:i64 GPR64Opnd:i64:$rt)
              0, // EndSwitchType
/*17553*/   /*Scope*/ 29, /*->17583*/
/*17554*/     OPC_CheckValueType, MVT::i16,
/*17556*/     OPC_MoveParent,
/*17557*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->17570
/*17560*/       OPC_CheckPatternPredicate, 18, // (Subtarget.hasSEInReg()) && (Subtarget.hasStandardEncoding())
/*17562*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SEH), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 GPR32Opnd:i32:$rt, i16:Other) - Complexity = 3
                // Dst: (SEH:i32 GPR32Opnd:i32:$rt)
              /*SwitchType*/ 10,  MVT::i64,// ->17582
/*17572*/       OPC_CheckPatternPredicate, 18, // (Subtarget.hasSEInReg()) && (Subtarget.hasStandardEncoding())
/*17574*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SEH64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 GPR64Opnd:i64:$rt, i16:Other) - Complexity = 3
                // Dst: (SEH64:i64 GPR64Opnd:i64:$rt)
              0, // EndSwitchType
/*17583*/   /*Scope*/ 13, /*->17597*/
/*17584*/     OPC_CheckValueType, MVT::i32,
/*17586*/     OPC_MoveParent,
/*17587*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17589*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SLL64_64), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (sext_inreg:i64 GPR64:i64:$src, i32:Other) - Complexity = 3
              // Dst: (SLL64_64:i64 GPR64:i64:$src)
/*17597*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::SUBC),// ->17631
/*17601*/   OPC_RecordChild0, // #0 = $lhs
/*17602*/   OPC_RecordChild1, // #1 = $rhs
/*17603*/   OPC_CheckType, MVT::i32,
/*17605*/   OPC_Scope, 11, /*->17618*/ // 2 children in Scope
/*17607*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17609*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SUBu), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (subc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs) - Complexity = 3
              // Dst: (SUBu:i32 GPR32:i32:$lhs, GPR32:i32:$rhs)
/*17618*/   /*Scope*/ 11, /*->17630*/
/*17619*/     OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*17621*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SubuRxRyRz16), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (subc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs) - Complexity = 3
              // Dst: (SubuRxRyRz16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs)
/*17630*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 7|128,1/*135*/,  TARGET_VAL(ISD::BITCAST),// ->17770
/*17635*/   OPC_RecordChild0, // #0 = $fs
/*17636*/   OPC_Scope, 14, /*->17652*/ // 6 children in Scope
/*17638*/     OPC_CheckChild0Type, MVT::f32,
/*17640*/     OPC_CheckType, MVT::i32,
/*17642*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17644*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MFC1), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (bitconvert:i32 FGR32RegsOpnd:f32:$fs) - Complexity = 3
              // Dst: (MFC1:i32 FGR32RegsOpnd:f32:$fs)
/*17652*/   /*Scope*/ 14, /*->17667*/
/*17653*/     OPC_CheckChild0Type, MVT::f64,
/*17655*/     OPC_CheckType, MVT::i64,
/*17657*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17659*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DMFC1), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (bitconvert:i64 FGR64RegsOpnd:f64:$fs) - Complexity = 3
              // Dst: (DMFC1:i64 FGR64RegsOpnd:f64:$fs)
/*17667*/   /*Scope*/ 18, /*->17686*/
/*17668*/     OPC_CheckChild0Type, MVT::v2i16,
/*17670*/     OPC_CheckType, MVT::i32,
/*17672*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*17674*/     OPC_EmitInteger, MVT::i32, Mips::GPR32RegClassID,
/*17677*/     OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (bitconvert:i32 DSPRegs:v2i16:$src) - Complexity = 3
              // Dst: (COPY_TO_REGCLASS:i32 DSPRegs:v2i16:$src, GPR32:i32)
/*17686*/   /*Scope*/ 18, /*->17705*/
/*17687*/     OPC_CheckChild0Type, MVT::v4i8,
/*17689*/     OPC_CheckType, MVT::i32,
/*17691*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*17693*/     OPC_EmitInteger, MVT::i32, Mips::GPR32RegClassID,
/*17696*/     OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (bitconvert:i32 DSPRegs:v4i8:$src) - Complexity = 3
              // Dst: (COPY_TO_REGCLASS:i32 DSPRegs:v4i8:$src, GPR32:i32)
/*17705*/   /*Scope*/ 48, /*->17754*/
/*17706*/     OPC_CheckChild0Type, MVT::i32,
/*17708*/     OPC_SwitchType /*3 cases */, 10,  MVT::f32,// ->17721
/*17711*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17713*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MTC1), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (bitconvert:f32 GPR32Opnd:i32:$rt) - Complexity = 3
                // Dst: (MTC1:f32 GPR32Opnd:i32:$rt)
              /*SwitchType*/ 14,  MVT::v2i16,// ->17737
/*17723*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*17725*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*17728*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (bitconvert:v2i16 GPR32:i32:$src) - Complexity = 3
                // Dst: (COPY_TO_REGCLASS:v2i16 GPR32:i32:$src, DSPRegs:i32)
              /*SwitchType*/ 14,  MVT::v4i8,// ->17753
/*17739*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*17741*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*17744*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (bitconvert:v4i8 GPR32:i32:$src) - Complexity = 3
                // Dst: (COPY_TO_REGCLASS:v4i8 GPR32:i32:$src, DSPRegs:i32)
              0, // EndSwitchType
/*17754*/   /*Scope*/ 14, /*->17769*/
/*17755*/     OPC_CheckChild0Type, MVT::i64,
/*17757*/     OPC_CheckType, MVT::f64,
/*17759*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17761*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DMTC1), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (bitconvert:f64 GPR64Opnd:i64:$rt) - Complexity = 3
              // Dst: (DMTC1:f64 GPR64Opnd:i64:$rt)
/*17769*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::ANY_EXTEND),// ->17788
/*17773*/   OPC_RecordChild0, // #0 = $src
/*17774*/   OPC_CheckChild0Type, MVT::i32,
/*17776*/   OPC_CheckType, MVT::i64,
/*17778*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17780*/   OPC_MorphNodeTo, TARGET_VAL(Mips::SLL64_32), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (anyext:i64 GPR32:i32:$src) - Complexity = 3
            // Dst: (SLL64_32:i64 GPR32:i32:$src)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::SIGN_EXTEND),// ->17806
/*17791*/   OPC_RecordChild0, // #0 = $src
/*17792*/   OPC_CheckChild0Type, MVT::i32,
/*17794*/   OPC_CheckType, MVT::i64,
/*17796*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17798*/   OPC_MorphNodeTo, TARGET_VAL(Mips::SLL64_32), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (sext:i64 GPR32:i32:$src) - Complexity = 3
            // Dst: (SLL64_32:i64 GPR32:i32:$src)
          /*SwitchOpcode*/ 78,  TARGET_VAL(MipsISD::CMovFP_T),// ->17887
/*17809*/   OPC_CaptureGlueInput,
/*17810*/   OPC_RecordChild0, // #0 = $rs
/*17811*/   OPC_RecordChild1, // #1 = $fcc
/*17812*/   OPC_RecordChild2, // #2 = $F
/*17813*/   OPC_SwitchType /*4 cases */, 12,  MVT::i32,// ->17828
/*17816*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17818*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_I), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsCMovFP_T:i32 GPR32Opnd:i32:$rs, FCCRegsOpnd:i32:$fcc, GPR32Opnd:i32:$F) - Complexity = 3
              // Dst: (MOVT_I:i32 GPR32Opnd:i32:$rs, FCCRegsOpnd:i32:$fcc, GPR32Opnd:i32:$F)
            /*SwitchType*/ 12,  MVT::i64,// ->17842
/*17830*/     OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*17832*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_I64), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsCMovFP_T:i64 GPR64Opnd:i64:$rs, FCCRegsOpnd:i32:$fcc, GPR64Opnd:i64:$F) - Complexity = 3
              // Dst: (MOVT_I64:i64 GPR64Opnd:i64:$rs, FCCRegsOpnd:i32:$fcc, GPR64Opnd:i64:$F)
            /*SwitchType*/ 12,  MVT::f32,// ->17856
/*17844*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17846*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_S), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsCMovFP_T:f32 FGR32RegsOpnd:f32:$fs, FCCRegsOpnd:i32:$fcc, FGR32RegsOpnd:f32:$F) - Complexity = 3
              // Dst: (MOVT_S:f32 FGR32RegsOpnd:f32:$fs, FCCRegsOpnd:i32:$fcc, FGR32RegsOpnd:f32:$F)
            /*SwitchType*/ 28,  MVT::f64,// ->17886
/*17858*/     OPC_Scope, 12, /*->17872*/ // 2 children in Scope
/*17860*/       OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*17862*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_D32), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (MipsCMovFP_T:f64 AFGR64RegsOpnd:f64:$fs, FCCRegsOpnd:i32:$fcc, AFGR64RegsOpnd:f64:$F) - Complexity = 3
                // Dst: (MOVT_D32:f64 AFGR64RegsOpnd:f64:$fs, FCCRegsOpnd:i32:$fcc, AFGR64RegsOpnd:f64:$F)
/*17872*/     /*Scope*/ 12, /*->17885*/
/*17873*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*17875*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_D64), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (MipsCMovFP_T:f64 FGR64RegsOpnd:f64:$fs, FCCRegsOpnd:i32:$fcc, FGR64RegsOpnd:f64:$F) - Complexity = 3
                // Dst: (MOVT_D64:f64 FGR64RegsOpnd:f64:$fs, FCCRegsOpnd:i32:$fcc, FGR64RegsOpnd:f64:$F)
/*17885*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 78,  TARGET_VAL(MipsISD::CMovFP_F),// ->17968
/*17890*/   OPC_CaptureGlueInput,
/*17891*/   OPC_RecordChild0, // #0 = $rs
/*17892*/   OPC_RecordChild1, // #1 = $fcc
/*17893*/   OPC_RecordChild2, // #2 = $F
/*17894*/   OPC_SwitchType /*4 cases */, 12,  MVT::i32,// ->17909
/*17897*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17899*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_I), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsCMovFP_F:i32 GPR32Opnd:i32:$rs, FCCRegsOpnd:i32:$fcc, GPR32Opnd:i32:$F) - Complexity = 3
              // Dst: (MOVF_I:i32 GPR32Opnd:i32:$rs, FCCRegsOpnd:i32:$fcc, GPR32Opnd:i32:$F)
            /*SwitchType*/ 12,  MVT::i64,// ->17923
/*17911*/     OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*17913*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_I64), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsCMovFP_F:i64 GPR64Opnd:i64:$rs, FCCRegsOpnd:i32:$fcc, GPR64Opnd:i64:$F) - Complexity = 3
              // Dst: (MOVF_I64:i64 GPR64Opnd:i64:$rs, FCCRegsOpnd:i32:$fcc, GPR64Opnd:i64:$F)
            /*SwitchType*/ 12,  MVT::f32,// ->17937
/*17925*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17927*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_S), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsCMovFP_F:f32 FGR32RegsOpnd:f32:$fs, FCCRegsOpnd:i32:$fcc, FGR32RegsOpnd:f32:$F) - Complexity = 3
              // Dst: (MOVF_S:f32 FGR32RegsOpnd:f32:$fs, FCCRegsOpnd:i32:$fcc, FGR32RegsOpnd:f32:$F)
            /*SwitchType*/ 28,  MVT::f64,// ->17967
/*17939*/     OPC_Scope, 12, /*->17953*/ // 2 children in Scope
/*17941*/       OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*17943*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_D32), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (MipsCMovFP_F:f64 AFGR64RegsOpnd:f64:$fs, FCCRegsOpnd:i32:$fcc, AFGR64RegsOpnd:f64:$F) - Complexity = 3
                // Dst: (MOVF_D32:f64 AFGR64RegsOpnd:f64:$fs, FCCRegsOpnd:i32:$fcc, AFGR64RegsOpnd:f64:$F)
/*17953*/     /*Scope*/ 12, /*->17966*/
/*17954*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*17956*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_D64), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (MipsCMovFP_F:f64 FGR64RegsOpnd:f64:$fs, FCCRegsOpnd:i32:$fcc, FGR64RegsOpnd:f64:$F) - Complexity = 3
                // Dst: (MOVF_D64:f64 FGR64RegsOpnd:f64:$fs, FCCRegsOpnd:i32:$fcc, FGR64RegsOpnd:f64:$F)
/*17966*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::MULSAQ_S_W_PH),// ->17988
/*17971*/   OPC_RecordNode,   // #0 = 'MipsMULSAQ_S_W_PH' chained node
/*17972*/   OPC_RecordChild1, // #1 = $rs
/*17973*/   OPC_RecordChild2, // #2 = $rt
/*17974*/   OPC_RecordChild3, // #3 = $acin
/*17975*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*17977*/   OPC_EmitMergeInputChains1_0,
/*17978*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MULSAQ_S_W_PH), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsMULSAQ_S_W_PH:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (MULSAQ_S_W_PH:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::MAQ_S_W_PHL),// ->18008
/*17991*/   OPC_RecordNode,   // #0 = 'MipsMAQ_S_W_PHL' chained node
/*17992*/   OPC_RecordChild1, // #1 = $rs
/*17993*/   OPC_RecordChild2, // #2 = $rt
/*17994*/   OPC_RecordChild3, // #3 = $acin
/*17995*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*17997*/   OPC_EmitMergeInputChains1_0,
/*17998*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MAQ_S_W_PHL), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsMAQ_S_W_PHL:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (MAQ_S_W_PHL:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::MAQ_S_W_PHR),// ->18028
/*18011*/   OPC_RecordNode,   // #0 = 'MipsMAQ_S_W_PHR' chained node
/*18012*/   OPC_RecordChild1, // #1 = $rs
/*18013*/   OPC_RecordChild2, // #2 = $rt
/*18014*/   OPC_RecordChild3, // #3 = $acin
/*18015*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18017*/   OPC_EmitMergeInputChains1_0,
/*18018*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MAQ_S_W_PHR), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsMAQ_S_W_PHR:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (MAQ_S_W_PHR:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::MAQ_SA_W_PHL),// ->18048
/*18031*/   OPC_RecordNode,   // #0 = 'MipsMAQ_SA_W_PHL' chained node
/*18032*/   OPC_RecordChild1, // #1 = $rs
/*18033*/   OPC_RecordChild2, // #2 = $rt
/*18034*/   OPC_RecordChild3, // #3 = $acin
/*18035*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18037*/   OPC_EmitMergeInputChains1_0,
/*18038*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MAQ_SA_W_PHL), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsMAQ_SA_W_PHL:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (MAQ_SA_W_PHL:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::MAQ_SA_W_PHR),// ->18068
/*18051*/   OPC_RecordNode,   // #0 = 'MipsMAQ_SA_W_PHR' chained node
/*18052*/   OPC_RecordChild1, // #1 = $rs
/*18053*/   OPC_RecordChild2, // #2 = $rt
/*18054*/   OPC_RecordChild3, // #3 = $acin
/*18055*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18057*/   OPC_EmitMergeInputChains1_0,
/*18058*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MAQ_SA_W_PHR), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsMAQ_SA_W_PHR:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (MAQ_SA_W_PHR:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPAU_H_QBL),// ->18086
/*18071*/   OPC_RecordChild0, // #0 = $rs
/*18072*/   OPC_RecordChild1, // #1 = $rt
/*18073*/   OPC_RecordChild2, // #2 = $acin
/*18074*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18076*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAU_H_QBL), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPAU_H_QBL:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPAU_H_QBL:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPAU_H_QBR),// ->18104
/*18089*/   OPC_RecordChild0, // #0 = $rs
/*18090*/   OPC_RecordChild1, // #1 = $rt
/*18091*/   OPC_RecordChild2, // #2 = $acin
/*18092*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18094*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAU_H_QBR), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPAU_H_QBR:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPAU_H_QBR:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPSU_H_QBL),// ->18122
/*18107*/   OPC_RecordChild0, // #0 = $rs
/*18108*/   OPC_RecordChild1, // #1 = $rt
/*18109*/   OPC_RecordChild2, // #2 = $acin
/*18110*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18112*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSU_H_QBL), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPSU_H_QBL:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPSU_H_QBL:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPSU_H_QBR),// ->18140
/*18125*/   OPC_RecordChild0, // #0 = $rs
/*18126*/   OPC_RecordChild1, // #1 = $rt
/*18127*/   OPC_RecordChild2, // #2 = $acin
/*18128*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18130*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSU_H_QBR), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPSU_H_QBR:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPSU_H_QBR:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPAQ_S_W_PH),// ->18160
/*18143*/   OPC_RecordNode,   // #0 = 'MipsDPAQ_S_W_PH' chained node
/*18144*/   OPC_RecordChild1, // #1 = $rs
/*18145*/   OPC_RecordChild2, // #2 = $rt
/*18146*/   OPC_RecordChild3, // #3 = $acin
/*18147*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18149*/   OPC_EmitMergeInputChains1_0,
/*18150*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAQ_S_W_PH), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPAQ_S_W_PH:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPAQ_S_W_PH:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPSQ_S_W_PH),// ->18180
/*18163*/   OPC_RecordNode,   // #0 = 'MipsDPSQ_S_W_PH' chained node
/*18164*/   OPC_RecordChild1, // #1 = $rs
/*18165*/   OPC_RecordChild2, // #2 = $rt
/*18166*/   OPC_RecordChild3, // #3 = $acin
/*18167*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18169*/   OPC_EmitMergeInputChains1_0,
/*18170*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSQ_S_W_PH), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPSQ_S_W_PH:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPSQ_S_W_PH:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPAQ_SA_L_W),// ->18200
/*18183*/   OPC_RecordNode,   // #0 = 'MipsDPAQ_SA_L_W' chained node
/*18184*/   OPC_RecordChild1, // #1 = $rs
/*18185*/   OPC_RecordChild2, // #2 = $rt
/*18186*/   OPC_RecordChild3, // #3 = $acin
/*18187*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18189*/   OPC_EmitMergeInputChains1_0,
/*18190*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAQ_SA_L_W), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPAQ_SA_L_W:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPAQ_SA_L_W:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPSQ_SA_L_W),// ->18220
/*18203*/   OPC_RecordNode,   // #0 = 'MipsDPSQ_SA_L_W' chained node
/*18204*/   OPC_RecordChild1, // #1 = $rs
/*18205*/   OPC_RecordChild2, // #2 = $rt
/*18206*/   OPC_RecordChild3, // #3 = $acin
/*18207*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18209*/   OPC_EmitMergeInputChains1_0,
/*18210*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSQ_SA_L_W), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPSQ_SA_L_W:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPSQ_SA_L_W:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::MTHLIP),// ->18238
/*18223*/   OPC_RecordNode,   // #0 = 'MipsMTHLIP' chained node
/*18224*/   OPC_RecordChild1, // #1 = $rs
/*18225*/   OPC_RecordChild2, // #2 = $acin
/*18226*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18228*/   OPC_EmitMergeInputChains1_0,
/*18229*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MTHLIP), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 1, 2, 
            // Src: (MipsMTHLIP:Untyped GPR32:i32:$rs, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (MTHLIP:Untyped GPR32:i32:$rs, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPA_W_PH),// ->18256
/*18241*/   OPC_RecordChild0, // #0 = $rs
/*18242*/   OPC_RecordChild1, // #1 = $rt
/*18243*/   OPC_RecordChild2, // #2 = $acin
/*18244*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*18246*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPA_W_PH), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPA_W_PH:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPA_W_PH:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPS_W_PH),// ->18274
/*18259*/   OPC_RecordChild0, // #0 = $rs
/*18260*/   OPC_RecordChild1, // #1 = $rt
/*18261*/   OPC_RecordChild2, // #2 = $acin
/*18262*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*18264*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPS_W_PH), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPS_W_PH:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPS_W_PH:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPAQX_S_W_PH),// ->18294
/*18277*/   OPC_RecordNode,   // #0 = 'MipsDPAQX_S_W_PH' chained node
/*18278*/   OPC_RecordChild1, // #1 = $rs
/*18279*/   OPC_RecordChild2, // #2 = $rt
/*18280*/   OPC_RecordChild3, // #3 = $acin
/*18281*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*18283*/   OPC_EmitMergeInputChains1_0,
/*18284*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAQX_S_W_PH), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPAQX_S_W_PH:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPAQX_S_W_PH:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPAQX_SA_W_PH),// ->18314
/*18297*/   OPC_RecordNode,   // #0 = 'MipsDPAQX_SA_W_PH' chained node
/*18298*/   OPC_RecordChild1, // #1 = $rs
/*18299*/   OPC_RecordChild2, // #2 = $rt
/*18300*/   OPC_RecordChild3, // #3 = $acin
/*18301*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*18303*/   OPC_EmitMergeInputChains1_0,
/*18304*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAQX_SA_W_PH), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPAQX_SA_W_PH:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPAQX_SA_W_PH:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPAX_W_PH),// ->18332
/*18317*/   OPC_RecordChild0, // #0 = $rs
/*18318*/   OPC_RecordChild1, // #1 = $rt
/*18319*/   OPC_RecordChild2, // #2 = $acin
/*18320*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*18322*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAX_W_PH), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPAX_W_PH:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPAX_W_PH:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPSX_W_PH),// ->18350
/*18335*/   OPC_RecordChild0, // #0 = $rs
/*18336*/   OPC_RecordChild1, // #1 = $rt
/*18337*/   OPC_RecordChild2, // #2 = $acin
/*18338*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*18340*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSX_W_PH), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPSX_W_PH:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPSX_W_PH:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPSQX_S_W_PH),// ->18370
/*18353*/   OPC_RecordNode,   // #0 = 'MipsDPSQX_S_W_PH' chained node
/*18354*/   OPC_RecordChild1, // #1 = $rs
/*18355*/   OPC_RecordChild2, // #2 = $rt
/*18356*/   OPC_RecordChild3, // #3 = $acin
/*18357*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*18359*/   OPC_EmitMergeInputChains1_0,
/*18360*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSQX_S_W_PH), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPSQX_S_W_PH:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPSQX_S_W_PH:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPSQX_SA_W_PH),// ->18390
/*18373*/   OPC_RecordNode,   // #0 = 'MipsDPSQX_SA_W_PH' chained node
/*18374*/   OPC_RecordChild1, // #1 = $rs
/*18375*/   OPC_RecordChild2, // #2 = $rt
/*18376*/   OPC_RecordChild3, // #3 = $acin
/*18377*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*18379*/   OPC_EmitMergeInputChains1_0,
/*18380*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSQX_SA_W_PH), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPSQX_SA_W_PH:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPSQX_SA_W_PH:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::MULSA_W_PH),// ->18408
/*18393*/   OPC_RecordChild0, // #0 = $rs
/*18394*/   OPC_RecordChild1, // #1 = $rt
/*18395*/   OPC_RecordChild2, // #2 = $acin
/*18396*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*18398*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MULSA_W_PH), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsMULSA_W_PH:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (MULSA_W_PH:Untyped GPR32:i32:$rs, GPR32:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::ADDE),// ->18427
/*18411*/   OPC_CaptureGlueInput,
/*18412*/   OPC_RecordChild0, // #0 = $a
/*18413*/   OPC_RecordChild1, // #1 = $b
/*18414*/   OPC_CheckType, MVT::i32,
/*18416*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18418*/   OPC_MorphNodeTo, TARGET_VAL(Mips::ADDWC), 0|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (adde:i32 i32:i32:$a, i32:i32:$b) - Complexity = 3
            // Dst: (ADDWC:i32 i32:i32:$a, i32:i32:$b)
          /*SwitchOpcode*/ 47,  TARGET_VAL(ISD::BSWAP),// ->18477
/*18430*/   OPC_RecordChild0, // #0 = $rt
/*18431*/   OPC_SwitchType /*2 cases */, 22,  MVT::i32,// ->18456
/*18434*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18436*/     OPC_EmitNode, TARGET_VAL(Mips::WSBH), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #1
/*18444*/     OPC_EmitInteger, MVT::i32, 16, 
/*18447*/     OPC_MorphNodeTo, TARGET_VAL(Mips::ROTR), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (bswap:i32 GPR32:i32:$rt) - Complexity = 3
              // Dst: (ROTR:i32 (WSBH:i32 GPR32:i32:$rt), 16:i32)
            /*SwitchType*/ 18,  MVT::i64,// ->18476
/*18458*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18460*/     OPC_EmitNode, TARGET_VAL(Mips::DSBH), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0,  // Results = #1
/*18468*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DSHD), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (bswap:i64 GPR64:i64:$rt) - Complexity = 3
              // Dst: (DSHD:i64 (DSBH:i64 GPR64:i64:$rt))
            0, // EndSwitchType
          /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::TRUNCATE),// ->18509
/*18480*/   OPC_RecordChild0, // #0 = $src
/*18481*/   OPC_CheckType, MVT::i32,
/*18483*/   OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*18485*/   OPC_EmitInteger, MVT::i32, Mips::sub_32,
/*18488*/   OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*18497*/   OPC_EmitInteger, MVT::i32, 0, 
/*18500*/   OPC_MorphNodeTo, TARGET_VAL(Mips::SLL), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
            // Src: (trunc:i32 GPR64:i64:$src) - Complexity = 3
            // Dst: (SLL:i32 (EXTRACT_SUBREG:i32 GPR64:i64:$src, sub_32:i32), 0:i32)
          /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::ZERO_EXTEND),// ->18539
/*18512*/   OPC_RecordChild0, // #0 = $src
/*18513*/   OPC_CheckChild0Type, MVT::i32,
/*18515*/   OPC_CheckType, MVT::i64,
/*18517*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18519*/   OPC_EmitNode, TARGET_VAL(Mips::DSLL64_32), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0,  // Results = #1
/*18527*/   OPC_EmitInteger, MVT::i32, 32, 
/*18530*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DSRL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
            // Src: (zext:i64 GPR32:i32:$src) - Complexity = 3
            // Dst: (DSRL:i64 (DSLL64_32:i64 GPR32:i32:$src), 32:i32)
          /*SwitchOpcode*/ 33,  TARGET_VAL(MipsISD::DivRem),// ->18575
/*18542*/   OPC_RecordChild0, // #0 = $rs
/*18543*/   OPC_Scope, 14, /*->18559*/ // 2 children in Scope
/*18545*/     OPC_CheckChild0Type, MVT::i32,
/*18547*/     OPC_RecordChild1, // #1 = $rt
/*18548*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18550*/     OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoSDIV), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (MipsDivRem:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt) - Complexity = 3
              // Dst: (PseudoSDIV:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
/*18559*/   /*Scope*/ 14, /*->18574*/
/*18560*/     OPC_CheckChild0Type, MVT::i64,
/*18562*/     OPC_RecordChild1, // #1 = $rt
/*18563*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18565*/     OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoDSDIV), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (MipsDivRem:Untyped GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt) - Complexity = 3
              // Dst: (PseudoDSDIV:Untyped GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt)
/*18574*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 33,  TARGET_VAL(MipsISD::DivRemU),// ->18611
/*18578*/   OPC_RecordChild0, // #0 = $rs
/*18579*/   OPC_Scope, 14, /*->18595*/ // 2 children in Scope
/*18581*/     OPC_CheckChild0Type, MVT::i32,
/*18583*/     OPC_RecordChild1, // #1 = $rt
/*18584*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18586*/     OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoUDIV), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (MipsDivRemU:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt) - Complexity = 3
              // Dst: (PseudoUDIV:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
/*18595*/   /*Scope*/ 14, /*->18610*/
/*18596*/     OPC_CheckChild0Type, MVT::i64,
/*18598*/     OPC_RecordChild1, // #1 = $rt
/*18599*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18601*/     OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoDUDIV), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (MipsDivRemU:Untyped GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt) - Complexity = 3
              // Dst: (PseudoDUDIV:Untyped GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt)
/*18610*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 40|128,2/*296*/,  TARGET_VAL(ISD::FSUB),// ->18911
/*18615*/   OPC_Scope, 118|128,1/*246*/, /*->18864*/ // 2 children in Scope
/*18618*/     OPC_MoveChild, 0,
/*18620*/     OPC_SwitchOpcode /*2 cases */, 57|128,1/*185*/,  TARGET_VAL(ISD::ConstantFP),// ->18810
/*18625*/       OPC_CheckPredicate, 66, // Predicate_fpimm0
/*18627*/       OPC_MoveParent,
/*18628*/       OPC_MoveChild, 1,
/*18630*/       OPC_SwitchOpcode /*2 cases */, 116,  TARGET_VAL(ISD::FADD),// ->18750
/*18634*/         OPC_Scope, 56, /*->18692*/ // 2 children in Scope
/*18636*/           OPC_MoveChild, 0,
/*18638*/           OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*18641*/           OPC_RecordChild0, // #0 = $fs
/*18642*/           OPC_RecordChild1, // #1 = $ft
/*18643*/           OPC_MoveParent,
/*18644*/           OPC_RecordChild1, // #2 = $fr
/*18645*/           OPC_MoveParent,
/*18646*/           OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->18661
/*18649*/             OPC_CheckPatternPredicate, 19, // (Subtarget.hasMips32r2()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*18651*/             OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                      // Src: (fsub:f32 (fpimm:f32)<<P:Predicate_fpimm0>>, (fadd:f32 (fmul:f32 FGR32RegsOpnd:f32:$fs, FGR32RegsOpnd:f32:$ft), FGR32RegsOpnd:f32:$fr)) - Complexity = 13
                      // Dst: (NMADD_S:f32 FGR32RegsOpnd:f32:$fr, FGR32RegsOpnd:f32:$fs, FGR32RegsOpnd:f32:$ft)
                    /*SwitchType*/ 28,  MVT::f64,// ->18691
/*18663*/             OPC_Scope, 12, /*->18677*/ // 2 children in Scope
/*18665*/               OPC_CheckPatternPredicate, 20, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*18667*/               OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_D32), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                        // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fadd:f64 (fmul:f64 AFGR64RegsOpnd:f64:$fs, AFGR64RegsOpnd:f64:$ft), AFGR64RegsOpnd:f64:$fr)) - Complexity = 13
                        // Dst: (NMADD_D32:f64 AFGR64RegsOpnd:f64:$fr, AFGR64RegsOpnd:f64:$fs, AFGR64RegsOpnd:f64:$ft)
/*18677*/             /*Scope*/ 12, /*->18690*/
/*18678*/               OPC_CheckPatternPredicate, 21, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*18680*/               OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                        // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fadd:f64 (fmul:f64 FGR64RegsOpnd:f64:$fs, FGR64RegsOpnd:f64:$ft), FGR64RegsOpnd:f64:$fr)) - Complexity = 13
                        // Dst: (NMADD_D64:f64 FGR64RegsOpnd:f64:$fr, FGR64RegsOpnd:f64:$fs, FGR64RegsOpnd:f64:$ft)
/*18690*/             0, /*End of Scope*/
                    0, // EndSwitchType
/*18692*/         /*Scope*/ 56, /*->18749*/
/*18693*/           OPC_RecordChild0, // #0 = $fr
/*18694*/           OPC_MoveChild, 1,
/*18696*/           OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*18699*/           OPC_RecordChild0, // #1 = $fs
/*18700*/           OPC_RecordChild1, // #2 = $ft
/*18701*/           OPC_MoveParent,
/*18702*/           OPC_MoveParent,
/*18703*/           OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->18718
/*18706*/             OPC_CheckPatternPredicate, 19, // (Subtarget.hasMips32r2()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*18708*/             OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (fsub:f32 (fpimm:f32)<<P:Predicate_fpimm0>>, (fadd:f32 FGR32RegsOpnd:f32:$fr, (fmul:f32 FGR32RegsOpnd:f32:$fs, FGR32RegsOpnd:f32:$ft))) - Complexity = 13
                      // Dst: (NMADD_S:f32 FGR32RegsOpnd:f32:$fr, FGR32RegsOpnd:f32:$fs, FGR32RegsOpnd:f32:$ft)
                    /*SwitchType*/ 28,  MVT::f64,// ->18748
/*18720*/             OPC_Scope, 12, /*->18734*/ // 2 children in Scope
/*18722*/               OPC_CheckPatternPredicate, 20, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*18724*/               OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_D32), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                        // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fadd:f64 AFGR64RegsOpnd:f64:$fr, (fmul:f64 AFGR64RegsOpnd:f64:$fs, AFGR64RegsOpnd:f64:$ft))) - Complexity = 13
                        // Dst: (NMADD_D32:f64 AFGR64RegsOpnd:f64:$fr, AFGR64RegsOpnd:f64:$fs, AFGR64RegsOpnd:f64:$ft)
/*18734*/             /*Scope*/ 12, /*->18747*/
/*18735*/               OPC_CheckPatternPredicate, 21, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*18737*/               OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                        // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fadd:f64 FGR64RegsOpnd:f64:$fr, (fmul:f64 FGR64RegsOpnd:f64:$fs, FGR64RegsOpnd:f64:$ft))) - Complexity = 13
                        // Dst: (NMADD_D64:f64 FGR64RegsOpnd:f64:$fr, FGR64RegsOpnd:f64:$fs, FGR64RegsOpnd:f64:$ft)
/*18747*/             0, /*End of Scope*/
                    0, // EndSwitchType
/*18749*/         0, /*End of Scope*/
                /*SwitchOpcode*/ 56,  TARGET_VAL(ISD::FSUB),// ->18809
/*18753*/         OPC_MoveChild, 0,
/*18755*/         OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*18758*/         OPC_RecordChild0, // #0 = $fs
/*18759*/         OPC_RecordChild1, // #1 = $ft
/*18760*/         OPC_MoveParent,
/*18761*/         OPC_RecordChild1, // #2 = $fr
/*18762*/         OPC_MoveParent,
/*18763*/         OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->18778
/*18766*/           OPC_CheckPatternPredicate, 19, // (Subtarget.hasMips32r2()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*18768*/           OPC_MorphNodeTo, TARGET_VAL(Mips::NMSUB_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                    // Src: (fsub:f32 (fpimm:f32)<<P:Predicate_fpimm0>>, (fsub:f32 (fmul:f32 FGR32RegsOpnd:f32:$fs, FGR32RegsOpnd:f32:$ft), FGR32RegsOpnd:f32:$fr)) - Complexity = 13
                    // Dst: (NMSUB_S:f32 FGR32RegsOpnd:f32:$fr, FGR32RegsOpnd:f32:$fs, FGR32RegsOpnd:f32:$ft)
                  /*SwitchType*/ 28,  MVT::f64,// ->18808
/*18780*/           OPC_Scope, 12, /*->18794*/ // 2 children in Scope
/*18782*/             OPC_CheckPatternPredicate, 20, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*18784*/             OPC_MorphNodeTo, TARGET_VAL(Mips::NMSUB_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                      // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fsub:f64 (fmul:f64 AFGR64RegsOpnd:f64:$fs, AFGR64RegsOpnd:f64:$ft), AFGR64RegsOpnd:f64:$fr)) - Complexity = 13
                      // Dst: (NMSUB_D32:f64 AFGR64RegsOpnd:f64:$fr, AFGR64RegsOpnd:f64:$fs, AFGR64RegsOpnd:f64:$ft)
/*18794*/           /*Scope*/ 12, /*->18807*/
/*18795*/             OPC_CheckPatternPredicate, 21, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*18797*/             OPC_MorphNodeTo, TARGET_VAL(Mips::NMSUB_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                      // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fsub:f64 (fmul:f64 FGR64RegsOpnd:f64:$fs, FGR64RegsOpnd:f64:$ft), FGR64RegsOpnd:f64:$fr)) - Complexity = 13
                      // Dst: (NMSUB_D64:f64 FGR64RegsOpnd:f64:$fr, FGR64RegsOpnd:f64:$fs, FGR64RegsOpnd:f64:$ft)
/*18807*/           0, /*End of Scope*/
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              /*SwitchOpcode*/ 50,  TARGET_VAL(ISD::FMUL),// ->18863
/*18813*/       OPC_RecordChild0, // #0 = $fs
/*18814*/       OPC_RecordChild1, // #1 = $ft
/*18815*/       OPC_MoveParent,
/*18816*/       OPC_RecordChild1, // #2 = $fr
/*18817*/       OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->18832
/*18820*/         OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*18822*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MSUB_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fsub:f32 (fmul:f32 FGR32RegsOpnd:f32:$fs, FGR32RegsOpnd:f32:$ft), FGR32RegsOpnd:f32:$fr) - Complexity = 6
                  // Dst: (MSUB_S:f32 FGR32RegsOpnd:f32:$fr, FGR32RegsOpnd:f32:$fs, FGR32RegsOpnd:f32:$ft)
                /*SwitchType*/ 28,  MVT::f64,// ->18862
/*18834*/         OPC_Scope, 12, /*->18848*/ // 2 children in Scope
/*18836*/           OPC_CheckPatternPredicate, 22, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18838*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MSUB_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                    // Src: (fsub:f64 (fmul:f64 AFGR64RegsOpnd:f64:$fs, AFGR64RegsOpnd:f64:$ft), AFGR64RegsOpnd:f64:$fr) - Complexity = 6
                    // Dst: (MSUB_D32:f64 AFGR64RegsOpnd:f64:$fr, AFGR64RegsOpnd:f64:$fs, AFGR64RegsOpnd:f64:$ft)
/*18848*/         /*Scope*/ 12, /*->18861*/
/*18849*/           OPC_CheckPatternPredicate, 23, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18851*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MSUB_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                    // Src: (fsub:f64 (fmul:f64 FGR64RegsOpnd:f64:$fs, FGR64RegsOpnd:f64:$ft), FGR64RegsOpnd:f64:$fr) - Complexity = 6
                    // Dst: (MSUB_D64:f64 FGR64RegsOpnd:f64:$fr, FGR64RegsOpnd:f64:$fs, FGR64RegsOpnd:f64:$ft)
/*18861*/         0, /*End of Scope*/
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*18864*/   /*Scope*/ 45, /*->18910*/
/*18865*/     OPC_RecordChild0, // #0 = $fs
/*18866*/     OPC_RecordChild1, // #1 = $ft
/*18867*/     OPC_SwitchType /*2 cases */, 11,  MVT::f32,// ->18881
/*18870*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18872*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FSUB_S), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:f32 FGR32RegsOpnd:f32:$fs, FGR32RegsOpnd:f32:$ft) - Complexity = 3
                // Dst: (FSUB_S:f32 FGR32RegsOpnd:f32:$fs, FGR32RegsOpnd:f32:$ft)
              /*SwitchType*/ 26,  MVT::f64,// ->18909
/*18883*/       OPC_Scope, 11, /*->18896*/ // 2 children in Scope
/*18885*/         OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18887*/         OPC_MorphNodeTo, TARGET_VAL(Mips::FSUB_D32), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                  // Src: (fsub:f64 AFGR64RegsOpnd:f64:$fs, AFGR64RegsOpnd:f64:$ft) - Complexity = 3
                  // Dst: (FSUB_D32:f64 AFGR64RegsOpnd:f64:$fs, AFGR64RegsOpnd:f64:$ft)
/*18896*/       /*Scope*/ 11, /*->18908*/
/*18897*/         OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18899*/         OPC_MorphNodeTo, TARGET_VAL(Mips::FSUB_D64), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                  // Src: (fsub:f64 FGR64RegsOpnd:f64:$fs, FGR64RegsOpnd:f64:$ft) - Complexity = 3
                  // Dst: (FSUB_D64:f64 FGR64RegsOpnd:f64:$fs, FGR64RegsOpnd:f64:$ft)
/*18908*/       0, /*End of Scope*/
              0, // EndSwitchType
/*18910*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 34|128,1/*162*/,  TARGET_VAL(ISD::FADD),// ->19077
/*18915*/   OPC_Scope, 55, /*->18972*/ // 2 children in Scope
/*18917*/     OPC_MoveChild, 0,
/*18919*/     OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*18922*/     OPC_RecordChild0, // #0 = $fs
/*18923*/     OPC_RecordChild1, // #1 = $ft
/*18924*/     OPC_MoveParent,
/*18925*/     OPC_RecordChild1, // #2 = $fr
/*18926*/     OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->18941
/*18929*/       OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*18931*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_S), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                // Src: (fadd:f32 (fmul:f32 FGR32RegsOpnd:f32:$fs, FGR32RegsOpnd:f32:$ft), FGR32RegsOpnd:f32:$fr) - Complexity = 6
                // Dst: (MADD_S:f32 FGR32RegsOpnd:f32:$fr, FGR32RegsOpnd:f32:$fs, FGR32RegsOpnd:f32:$ft)
              /*SwitchType*/ 28,  MVT::f64,// ->18971
/*18943*/       OPC_Scope, 12, /*->18957*/ // 2 children in Scope
/*18945*/         OPC_CheckPatternPredicate, 22, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18947*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_D32), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fadd:f64 (fmul:f64 AFGR64RegsOpnd:f64:$fs, AFGR64RegsOpnd:f64:$ft), AFGR64RegsOpnd:f64:$fr) - Complexity = 6
                  // Dst: (MADD_D32:f64 AFGR64RegsOpnd:f64:$fr, AFGR64RegsOpnd:f64:$fs, AFGR64RegsOpnd:f64:$ft)
/*18957*/       /*Scope*/ 12, /*->18970*/
/*18958*/         OPC_CheckPatternPredicate, 23, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18960*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fadd:f64 (fmul:f64 FGR64RegsOpnd:f64:$fs, FGR64RegsOpnd:f64:$ft), FGR64RegsOpnd:f64:$fr) - Complexity = 6
                  // Dst: (MADD_D64:f64 FGR64RegsOpnd:f64:$fr, FGR64RegsOpnd:f64:$fs, FGR64RegsOpnd:f64:$ft)
/*18970*/       0, /*End of Scope*/
              0, // EndSwitchType
/*18972*/   /*Scope*/ 103, /*->19076*/
/*18973*/     OPC_RecordChild0, // #0 = $fr
/*18974*/     OPC_Scope, 54, /*->19030*/ // 2 children in Scope
/*18976*/       OPC_MoveChild, 1,
/*18978*/       OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*18981*/       OPC_RecordChild0, // #1 = $fs
/*18982*/       OPC_RecordChild1, // #2 = $ft
/*18983*/       OPC_MoveParent,
/*18984*/       OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->18999
/*18987*/         OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*18989*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fadd:f32 FGR32RegsOpnd:f32:$fr, (fmul:f32 FGR32RegsOpnd:f32:$fs, FGR32RegsOpnd:f32:$ft)) - Complexity = 6
                  // Dst: (MADD_S:f32 FGR32RegsOpnd:f32:$fr, FGR32RegsOpnd:f32:$fs, FGR32RegsOpnd:f32:$ft)
                /*SwitchType*/ 28,  MVT::f64,// ->19029
/*19001*/         OPC_Scope, 12, /*->19015*/ // 2 children in Scope
/*19003*/           OPC_CheckPatternPredicate, 22, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19005*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fadd:f64 AFGR64RegsOpnd:f64:$fr, (fmul:f64 AFGR64RegsOpnd:f64:$fs, AFGR64RegsOpnd:f64:$ft)) - Complexity = 6
                    // Dst: (MADD_D32:f64 AFGR64RegsOpnd:f64:$fr, AFGR64RegsOpnd:f64:$fs, AFGR64RegsOpnd:f64:$ft)
/*19015*/         /*Scope*/ 12, /*->19028*/
/*19016*/           OPC_CheckPatternPredicate, 23, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19018*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fadd:f64 FGR64RegsOpnd:f64:$fr, (fmul:f64 FGR64RegsOpnd:f64:$fs, FGR64RegsOpnd:f64:$ft)) - Complexity = 6
                    // Dst: (MADD_D64:f64 FGR64RegsOpnd:f64:$fr, FGR64RegsOpnd:f64:$fs, FGR64RegsOpnd:f64:$ft)
/*19028*/         0, /*End of Scope*/
                0, // EndSwitchType
/*19030*/     /*Scope*/ 44, /*->19075*/
/*19031*/       OPC_RecordChild1, // #1 = $ft
/*19032*/       OPC_SwitchType /*2 cases */, 11,  MVT::f32,// ->19046
/*19035*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*19037*/         OPC_MorphNodeTo, TARGET_VAL(Mips::FADD_S), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (fadd:f32 FGR32RegsOpnd:f32:$fs, FGR32RegsOpnd:f32:$ft) - Complexity = 3
                  // Dst: (FADD_S:f32 FGR32RegsOpnd:f32:$fs, FGR32RegsOpnd:f32:$ft)
                /*SwitchType*/ 26,  MVT::f64,// ->19074
/*19048*/         OPC_Scope, 11, /*->19061*/ // 2 children in Scope
/*19050*/           OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19052*/           OPC_MorphNodeTo, TARGET_VAL(Mips::FADD_D32), 0,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                    // Src: (fadd:f64 AFGR64RegsOpnd:f64:$fs, AFGR64RegsOpnd:f64:$ft) - Complexity = 3
                    // Dst: (FADD_D32:f64 AFGR64RegsOpnd:f64:$fs, AFGR64RegsOpnd:f64:$ft)
/*19061*/         /*Scope*/ 11, /*->19073*/
/*19062*/           OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19064*/           OPC_MorphNodeTo, TARGET_VAL(Mips::FADD_D64), 0,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                    // Src: (fadd:f64 FGR64RegsOpnd:f64:$fs, FGR64RegsOpnd:f64:$ft) - Complexity = 3
                    // Dst: (FADD_D64:f64 FGR64RegsOpnd:f64:$fs, FGR64RegsOpnd:f64:$ft)
/*19073*/         0, /*End of Scope*/
                0, // EndSwitchType
/*19075*/     0, /*End of Scope*/
/*19076*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 88,  TARGET_VAL(ISD::ConstantFP),// ->19168
/*19080*/   OPC_Scope, 34, /*->19116*/ // 2 children in Scope
/*19082*/     OPC_CheckPredicate, 66, // Predicate_fpimm0
/*19084*/     OPC_SwitchType /*2 cases */, 13,  MVT::f32,// ->19100
/*19087*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*19089*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*19092*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MTC1), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fpimm:f32)<<P:Predicate_fpimm0>> - Complexity = 4
                // Dst: (MTC1:f32 ZERO:i32)
              /*SwitchType*/ 13,  MVT::f64,// ->19115
/*19102*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19104*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*19107*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DMTC1), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fpimm:f64)<<P:Predicate_fpimm0>> - Complexity = 4
                // Dst: (DMTC1:f64 ZERO_64:i64)
              0, // EndSwitchType
/*19116*/   /*Scope*/ 50, /*->19167*/
/*19117*/     OPC_CheckPredicate, 67, // Predicate_fpimm0neg
/*19119*/     OPC_SwitchType /*2 cases */, 21,  MVT::f32,// ->19143
/*19122*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*19124*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*19127*/       OPC_EmitNode, TARGET_VAL(Mips::MTC1), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1
/*19135*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_S), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 1, 
                // Src: (fpimm:f32)<<P:Predicate_fpimm0neg>> - Complexity = 4
                // Dst: (FNEG_S:f32 (MTC1:f32 ZERO:i32))
              /*SwitchType*/ 21,  MVT::f64,// ->19166
/*19145*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19147*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*19150*/       OPC_EmitNode, TARGET_VAL(Mips::DMTC1), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0,  // Results = #1
/*19158*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 1, 
                // Src: (fpimm:f64)<<P:Predicate_fpimm0neg>> - Complexity = 4
                // Dst: (FNEG_D64:f64 (DMTC1:f64 ZERO_64:i64))
              0, // EndSwitchType
/*19167*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FABS),// ->19210
/*19171*/   OPC_RecordChild0, // #0 = $fs
/*19172*/   OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->19185
/*19175*/     OPC_CheckPatternPredicate, 24, // (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*19177*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FABS_S), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 FGR32RegsOpnd:f32:$fs) - Complexity = 3
              // Dst: (FABS_S:f32 FGR32RegsOpnd:f32:$fs)
            /*SwitchType*/ 22,  MVT::f64,// ->19209
/*19187*/     OPC_CheckPatternPredicate, 24, // (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*19189*/     OPC_Scope, 8, /*->19199*/ // 2 children in Scope
/*19191*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FABS_D32), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fabs:f64 AFGR64RegsOpnd:f64:$fs) - Complexity = 3
                // Dst: (FABS_D32:f64 AFGR64RegsOpnd:f64:$fs)
/*19199*/     /*Scope*/ 8, /*->19208*/
/*19200*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FABS_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fabs:f64 FGR64RegsOpnd:f64:$fs) - Complexity = 3
                // Dst: (FABS_D64:f64 FGR64RegsOpnd:f64:$fs)
/*19208*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FNEG),// ->19252
/*19213*/   OPC_RecordChild0, // #0 = $fs
/*19214*/   OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->19227
/*19217*/     OPC_CheckPatternPredicate, 24, // (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*19219*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_S), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fneg:f32 FGR32RegsOpnd:f32:$fs) - Complexity = 3
              // Dst: (FNEG_S:f32 FGR32RegsOpnd:f32:$fs)
            /*SwitchType*/ 22,  MVT::f64,// ->19251
/*19229*/     OPC_CheckPatternPredicate, 24, // (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*19231*/     OPC_Scope, 8, /*->19241*/ // 2 children in Scope
/*19233*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_D32), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 AFGR64RegsOpnd:f64:$fs) - Complexity = 3
                // Dst: (FNEG_D32:f64 AFGR64RegsOpnd:f64:$fs)
/*19241*/     /*Scope*/ 8, /*->19250*/
/*19242*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 FGR64RegsOpnd:f64:$fs) - Complexity = 3
                // Dst: (FNEG_D64:f64 FGR64RegsOpnd:f64:$fs)
/*19250*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 41,  TARGET_VAL(ISD::FSQRT),// ->19296
/*19255*/   OPC_RecordChild0, // #0 = $fs
/*19256*/   OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->19269
/*19259*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*19261*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FSQRT_S), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f32 FGR32RegsOpnd:f32:$fs) - Complexity = 3
              // Dst: (FSQRT_S:f32 FGR32RegsOpnd:f32:$fs)
            /*SwitchType*/ 24,  MVT::f64,// ->19295
/*19271*/     OPC_Scope, 10, /*->19283*/ // 2 children in Scope
/*19273*/       OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19275*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FSQRT_D32), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f64 AFGR64RegsOpnd:f64:$fs) - Complexity = 3
                // Dst: (FSQRT_D32:f64 AFGR64RegsOpnd:f64:$fs)
/*19283*/     /*Scope*/ 10, /*->19294*/
/*19284*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19286*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FSQRT_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f64 FGR64RegsOpnd:f64:$fs) - Complexity = 3
                // Dst: (FSQRT_D64:f64 FGR64RegsOpnd:f64:$fs)
/*19294*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 45,  TARGET_VAL(ISD::FDIV),// ->19344
/*19299*/   OPC_RecordChild0, // #0 = $fs
/*19300*/   OPC_RecordChild1, // #1 = $ft
/*19301*/   OPC_SwitchType /*2 cases */, 11,  MVT::f32,// ->19315
/*19304*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*19306*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FDIV_S), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f32 FGR32RegsOpnd:f32:$fs, FGR32RegsOpnd:f32:$ft) - Complexity = 3
              // Dst: (FDIV_S:f32 FGR32RegsOpnd:f32:$fs, FGR32RegsOpnd:f32:$ft)
            /*SwitchType*/ 26,  MVT::f64,// ->19343
/*19317*/     OPC_Scope, 11, /*->19330*/ // 2 children in Scope
/*19319*/       OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19321*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FDIV_D32), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f64 AFGR64RegsOpnd:f64:$fs, AFGR64RegsOpnd:f64:$ft) - Complexity = 3
                // Dst: (FDIV_D32:f64 AFGR64RegsOpnd:f64:$fs, AFGR64RegsOpnd:f64:$ft)
/*19330*/     /*Scope*/ 11, /*->19342*/
/*19331*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19333*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FDIV_D64), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f64 FGR64RegsOpnd:f64:$fs, FGR64RegsOpnd:f64:$ft) - Complexity = 3
                // Dst: (FDIV_D64:f64 FGR64RegsOpnd:f64:$fs, FGR64RegsOpnd:f64:$ft)
/*19342*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 45,  TARGET_VAL(ISD::FMUL),// ->19392
/*19347*/   OPC_RecordChild0, // #0 = $fs
/*19348*/   OPC_RecordChild1, // #1 = $ft
/*19349*/   OPC_SwitchType /*2 cases */, 11,  MVT::f32,// ->19363
/*19352*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*19354*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FMUL_S), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f32 FGR32RegsOpnd:f32:$fs, FGR32RegsOpnd:f32:$ft) - Complexity = 3
              // Dst: (FMUL_S:f32 FGR32RegsOpnd:f32:$fs, FGR32RegsOpnd:f32:$ft)
            /*SwitchType*/ 26,  MVT::f64,// ->19391
/*19365*/     OPC_Scope, 11, /*->19378*/ // 2 children in Scope
/*19367*/       OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19369*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FMUL_D32), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f64 AFGR64RegsOpnd:f64:$fs, AFGR64RegsOpnd:f64:$ft) - Complexity = 3
                // Dst: (FMUL_D32:f64 AFGR64RegsOpnd:f64:$fs, AFGR64RegsOpnd:f64:$ft)
/*19378*/     /*Scope*/ 11, /*->19390*/
/*19379*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19381*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FMUL_D64), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f64 FGR64RegsOpnd:f64:$fs, FGR64RegsOpnd:f64:$ft) - Complexity = 3
                // Dst: (FMUL_D64:f64 FGR64RegsOpnd:f64:$fs, FGR64RegsOpnd:f64:$ft)
/*19390*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 13,  TARGET_VAL(MipsISD::BuildPairF64),// ->19408
/*19395*/   OPC_RecordChild0, // #0 = $lo
/*19396*/   OPC_RecordChild1, // #1 = $hi
/*19397*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*19399*/   OPC_MorphNodeTo, TARGET_VAL(Mips::BuildPairF64), 0,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
            // Src: (MipsBuildPairF64:f64 GPR32Opnd:i32:$lo, GPR32Opnd:i32:$hi) - Complexity = 3
            // Dst: (BuildPairF64:f64 GPR32Opnd:i32:$lo, GPR32Opnd:i32:$hi)
          /*SwitchOpcode*/ 87,  TARGET_VAL(ISD::SINT_TO_FP),// ->19498
/*19411*/   OPC_RecordChild0, // #0 = $src
/*19412*/   OPC_Scope, 42, /*->19456*/ // 2 children in Scope
/*19414*/     OPC_CheckChild0Type, MVT::i32,
/*19416*/     OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->19429
/*19419*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*19421*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoCVT_S_W), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f32 GPR32Opnd:i32:$src) - Complexity = 3
                // Dst: (PseudoCVT_S_W:f32 GPR32Opnd:i32:$src)
              /*SwitchType*/ 24,  MVT::f64,// ->19455
/*19431*/       OPC_Scope, 10, /*->19443*/ // 2 children in Scope
/*19433*/         OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19435*/         OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoCVT_D32_W), 0,
                      1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                  // Src: (sint_to_fp:f64 GPR32Opnd:i32:$src) - Complexity = 3
                  // Dst: (PseudoCVT_D32_W:f64 GPR32Opnd:i32:$src)
/*19443*/       /*Scope*/ 10, /*->19454*/
/*19444*/         OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19446*/         OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoCVT_D64_W), 0,
                      1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                  // Src: (sint_to_fp:f64 GPR32Opnd:i32:$src) - Complexity = 3
                  // Dst: (PseudoCVT_D64_W:f64 GPR32Opnd:i32:$src)
/*19454*/       0, /*End of Scope*/
              0, // EndSwitchType
/*19456*/   /*Scope*/ 40, /*->19497*/
/*19457*/     OPC_CheckChild0Type, MVT::i64,
/*19459*/     OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->19472
/*19462*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19464*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoCVT_D64_L), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f64 GPR64Opnd:i64:$src) - Complexity = 3
                // Dst: (PseudoCVT_D64_L:f64 GPR64Opnd:i64:$src)
              /*SwitchType*/ 22,  MVT::f32,// ->19496
/*19474*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19476*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCVT_S_L), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0,  // Results = #1
/*19484*/       OPC_EmitInteger, MVT::i32, Mips::sub_32,
/*19487*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 2, 
                // Src: (sint_to_fp:f32 GPR64Opnd:i64:$src) - Complexity = 3
                // Dst: (EXTRACT_SUBREG:f32 (PseudoCVT_S_L:f64 GPR64Opnd:i64:$src), sub_32:i32)
              0, // EndSwitchType
/*19497*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 75,  TARGET_VAL(MipsISD::TruncIntFP),// ->19576
/*19501*/   OPC_RecordChild0, // #0 = $src
/*19502*/   OPC_Scope, 28, /*->19532*/ // 2 children in Scope
/*19504*/     OPC_CheckChild0Type, MVT::f32,
/*19506*/     OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->19519
/*19509*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*19511*/       OPC_MorphNodeTo, TARGET_VAL(Mips::TRUNC_W_S), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (MipsTruncIntFP:f32 FGR32RegsOpnd:f32:$src) - Complexity = 3
                // Dst: (TRUNC_W_S:f32 FGR32RegsOpnd:f32:$src)
              /*SwitchType*/ 10,  MVT::f64,// ->19531
/*19521*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19523*/       OPC_MorphNodeTo, TARGET_VAL(Mips::TRUNC_L_S), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (MipsTruncIntFP:f64 FGR32RegsOpnd:f32:$src) - Complexity = 3
                // Dst: (TRUNC_L_S:f64 FGR32RegsOpnd:f32:$src)
              0, // EndSwitchType
/*19532*/   /*Scope*/ 42, /*->19575*/
/*19533*/     OPC_CheckChild0Type, MVT::f64,
/*19535*/     OPC_SwitchType /*2 cases */, 24,  MVT::f32,// ->19562
/*19538*/       OPC_Scope, 10, /*->19550*/ // 2 children in Scope
/*19540*/         OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19542*/         OPC_MorphNodeTo, TARGET_VAL(Mips::TRUNC_W_D32), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                  // Src: (MipsTruncIntFP:f32 AFGR64RegsOpnd:f64:$src) - Complexity = 3
                  // Dst: (TRUNC_W_D32:f32 AFGR64RegsOpnd:f64:$src)
/*19550*/       /*Scope*/ 10, /*->19561*/
/*19551*/         OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19553*/         OPC_MorphNodeTo, TARGET_VAL(Mips::TRUNC_W_D64), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                  // Src: (MipsTruncIntFP:f32 FGR64RegsOpnd:f64:$src) - Complexity = 3
                  // Dst: (TRUNC_W_D64:f32 FGR64RegsOpnd:f64:$src)
/*19561*/       0, /*End of Scope*/
              /*SwitchType*/ 10,  MVT::f64,// ->19574
/*19564*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19566*/       OPC_MorphNodeTo, TARGET_VAL(Mips::TRUNC_L_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (MipsTruncIntFP:f64 FGR64RegsOpnd:f64:$src) - Complexity = 3
                // Dst: (TRUNC_L_D64:f64 FGR64RegsOpnd:f64:$src)
              0, // EndSwitchType
/*19575*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::FP_ROUND),// ->19604
/*19579*/   OPC_RecordChild0, // #0 = $src
/*19580*/   OPC_Scope, 10, /*->19592*/ // 2 children in Scope
/*19582*/     OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19584*/     OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_S_D32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fround:f32 AFGR64RegsOpnd:f64:$src) - Complexity = 3
              // Dst: (CVT_S_D32:f32 AFGR64RegsOpnd:f64:$src)
/*19592*/   /*Scope*/ 10, /*->19603*/
/*19593*/     OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19595*/     OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_S_D64), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fround:f32 FGR64RegsOpnd:f64:$src) - Complexity = 3
              // Dst: (CVT_S_D64:f32 FGR64RegsOpnd:f64:$src)
/*19603*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::FP_EXTEND),// ->19632
/*19607*/   OPC_RecordChild0, // #0 = $src
/*19608*/   OPC_Scope, 10, /*->19620*/ // 2 children in Scope
/*19610*/     OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19612*/     OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_D32_S), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fextend:f64 FGR32RegsOpnd:f32:$src) - Complexity = 3
              // Dst: (CVT_D32_S:f64 FGR32RegsOpnd:f32:$src)
/*19620*/   /*Scope*/ 10, /*->19631*/
/*19621*/     OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19623*/     OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_D64_S), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fextend:f64 FGR32RegsOpnd:f32:$src) - Complexity = 3
              // Dst: (CVT_D64_S:f64 FGR32RegsOpnd:f32:$src)
/*19631*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 40,  TARGET_VAL(MipsISD::SHLL_DSP),// ->19675
/*19635*/   OPC_RecordChild0, // #0 = $a
/*19636*/   OPC_RecordChild1, // #1 = $shamt
/*19637*/   OPC_MoveChild, 1,
/*19639*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19642*/   OPC_MoveParent,
/*19643*/   OPC_SwitchType /*2 cases */, 13,  MVT::v2i16,// ->19659
/*19646*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19648*/     OPC_EmitConvertToTarget, 1,
/*19650*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 2, 
              // Src: (MipsSHLL_DSP:v2i16 v2i16:v2i16:$a, (imm:i32):$shamt) - Complexity = 6
              // Dst: (SHLL_PH:v2i16 v2i16:v2i16:$a, (imm:i32):$shamt)
            /*SwitchType*/ 13,  MVT::v4i8,// ->19674
/*19661*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19663*/     OPC_EmitConvertToTarget, 1,
/*19665*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 2, 
              // Src: (MipsSHLL_DSP:v4i8 v4i8:v4i8:$a, (imm:i32):$shamt) - Complexity = 6
              // Dst: (SHLL_QB:v4i8 v4i8:v4i8:$a, (imm:i32):$shamt)
            0, // EndSwitchType
          /*SwitchOpcode*/ 40,  TARGET_VAL(MipsISD::SHRA_DSP),// ->19718
/*19678*/   OPC_RecordChild0, // #0 = $a
/*19679*/   OPC_RecordChild1, // #1 = $shamt
/*19680*/   OPC_MoveChild, 1,
/*19682*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19685*/   OPC_MoveParent,
/*19686*/   OPC_SwitchType /*2 cases */, 13,  MVT::v2i16,// ->19702
/*19689*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19691*/     OPC_EmitConvertToTarget, 1,
/*19693*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 2, 
              // Src: (MipsSHRA_DSP:v2i16 v2i16:v2i16:$a, (imm:i32):$shamt) - Complexity = 6
              // Dst: (SHRA_PH:v2i16 v2i16:v2i16:$a, (imm:i32):$shamt)
            /*SwitchType*/ 13,  MVT::v4i8,// ->19717
/*19704*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*19706*/     OPC_EmitConvertToTarget, 1,
/*19708*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 2, 
              // Src: (MipsSHRA_DSP:v4i8 v4i8:v4i8:$a, (imm:i32):$shamt) - Complexity = 6
              // Dst: (SHRA_QB:v4i8 v4i8:v4i8:$a, (imm:i32):$shamt)
            0, // EndSwitchType
          /*SwitchOpcode*/ 40,  TARGET_VAL(MipsISD::SHRL_DSP),// ->19761
/*19721*/   OPC_RecordChild0, // #0 = $a
/*19722*/   OPC_RecordChild1, // #1 = $shamt
/*19723*/   OPC_MoveChild, 1,
/*19725*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19728*/   OPC_MoveParent,
/*19729*/   OPC_SwitchType /*2 cases */, 13,  MVT::v2i16,// ->19745
/*19732*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*19734*/     OPC_EmitConvertToTarget, 1,
/*19736*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHRL_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 2, 
              // Src: (MipsSHRL_DSP:v2i16 v2i16:v2i16:$a, (imm:i32):$shamt) - Complexity = 6
              // Dst: (SHRL_PH:v2i16 v2i16:v2i16:$a, (imm:i32):$shamt)
            /*SwitchType*/ 13,  MVT::v4i8,// ->19760
/*19747*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19749*/     OPC_EmitConvertToTarget, 1,
/*19751*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHRL_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 2, 
              // Src: (MipsSHRL_DSP:v4i8 v4i8:v4i8:$a, (imm:i32):$shamt) - Complexity = 6
              // Dst: (SHRL_QB:v4i8 v4i8:v4i8:$a, (imm:i32):$shamt)
            0, // EndSwitchType
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::TRAP),// ->19787
/*19764*/   OPC_RecordNode,   // #0 = 'trap' chained node
/*19765*/   OPC_Scope, 9, /*->19776*/ // 2 children in Scope
/*19767*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*19769*/     OPC_EmitMergeInputChains1_0,
/*19770*/     OPC_MorphNodeTo, TARGET_VAL(Mips::TRAP), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (trap) - Complexity = 3
              // Dst: (TRAP)
/*19776*/   /*Scope*/ 9, /*->19786*/
/*19777*/     OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*19779*/     OPC_EmitMergeInputChains1_0,
/*19780*/     OPC_MorphNodeTo, TARGET_VAL(Mips::Break16), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (trap) - Complexity = 3
              // Dst: (Break16)
/*19786*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 24,  TARGET_VAL(MipsISD::Ret),// ->19814
/*19790*/   OPC_RecordNode,   // #0 = 'MipsRet' chained node
/*19791*/   OPC_CaptureGlueInput,
/*19792*/   OPC_Scope, 9, /*->19803*/ // 2 children in Scope
/*19794*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*19796*/     OPC_EmitMergeInputChains1_0,
/*19797*/     OPC_MorphNodeTo, TARGET_VAL(Mips::RetRA), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (MipsRet) - Complexity = 3
              // Dst: (RetRA)
/*19803*/   /*Scope*/ 9, /*->19813*/
/*19804*/     OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*19806*/     OPC_EmitMergeInputChains1_0,
/*19807*/     OPC_MorphNodeTo, TARGET_VAL(Mips::RetRA16), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (MipsRet) - Complexity = 3
              // Dst: (RetRA16)
/*19813*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 43,  TARGET_VAL(ISD::BR),// ->19860
/*19817*/   OPC_RecordNode,   // #0 = 'br' chained node
/*19818*/   OPC_RecordChild1, // #1 = $target
/*19819*/   OPC_MoveChild, 1,
/*19821*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*19824*/   OPC_MoveParent,
/*19825*/   OPC_Scope, 10, /*->19837*/ // 3 children in Scope
/*19827*/     OPC_CheckPatternPredicate, 25, // (TM.getRelocationModel() == Reloc::Static) && (Subtarget.hasStandardEncoding())
/*19829*/     OPC_EmitMergeInputChains1_0,
/*19830*/     OPC_MorphNodeTo, TARGET_VAL(Mips::J), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$target) - Complexity = 3
              // Dst: (J (bb:Other):$target)
/*19837*/   /*Scope*/ 10, /*->19848*/
/*19838*/     OPC_CheckPatternPredicate, 26, // (TM.getRelocationModel() == Reloc::PIC_) && (Subtarget.hasStandardEncoding())
/*19840*/     OPC_EmitMergeInputChains1_0,
/*19841*/     OPC_MorphNodeTo, TARGET_VAL(Mips::B), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$offset) - Complexity = 3
              // Dst: (B (bb:Other):$offset)
/*19848*/   /*Scope*/ 10, /*->19859*/
/*19849*/     OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*19851*/     OPC_EmitMergeInputChains1_0,
/*19852*/     OPC_MorphNodeTo, TARGET_VAL(Mips::BimmX16), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$imm16) - Complexity = 3
              // Dst: (BimmX16 (bb:Other):$imm16)
/*19859*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::BRIND),// ->19907
/*19863*/   OPC_RecordNode,   // #0 = 'brind' chained node
/*19864*/   OPC_RecordChild1, // #1 = $rs
/*19865*/   OPC_Scope, 26, /*->19893*/ // 2 children in Scope
/*19867*/     OPC_CheckChild1Type, MVT::i32,
/*19869*/     OPC_Scope, 10, /*->19881*/ // 2 children in Scope
/*19871*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*19873*/       OPC_EmitMergeInputChains1_0,
/*19874*/       OPC_MorphNodeTo, TARGET_VAL(Mips::JR), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (brind GPR32Opnd:i32:$rs) - Complexity = 3
                // Dst: (JR GPR32Opnd:i32:$rs)
/*19881*/     /*Scope*/ 10, /*->19892*/
/*19882*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*19884*/       OPC_EmitMergeInputChains1_0,
/*19885*/       OPC_MorphNodeTo, TARGET_VAL(Mips::JrcRx16), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (brind CPU16Regs:i32:$rs) - Complexity = 3
                // Dst: (JrcRx16 CPU16Regs:i32:$rs)
/*19892*/     0, /*End of Scope*/
/*19893*/   /*Scope*/ 12, /*->19906*/
/*19894*/     OPC_CheckChild1Type, MVT::i64,
/*19896*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*19898*/     OPC_EmitMergeInputChains1_0,
/*19899*/     OPC_MorphNodeTo, TARGET_VAL(Mips::JR64), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (brind GPR64Opnd:i64:$rs) - Complexity = 3
              // Dst: (JR64 GPR64Opnd:i64:$rs)
/*19906*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 35,  TARGET_VAL(MipsISD::EH_RETURN),// ->19945
/*19910*/   OPC_RecordNode,   // #0 = 'MIPSehret' chained node
/*19911*/   OPC_CaptureGlueInput,
/*19912*/   OPC_RecordChild1, // #1 = $spoff
/*19913*/   OPC_Scope, 14, /*->19929*/ // 2 children in Scope
/*19915*/     OPC_CheckChild1Type, MVT::i32,
/*19917*/     OPC_RecordChild2, // #2 = $dst
/*19918*/     OPC_CheckChild2Type, MVT::i32,
/*19920*/     OPC_EmitMergeInputChains1_0,
/*19921*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MIPSeh_return32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (MIPSehret GPR32:i32:$spoff, GPR32:i32:$dst) - Complexity = 3
              // Dst: (MIPSeh_return32 GPR32:i32:$spoff, GPR32:i32:$dst)
/*19929*/   /*Scope*/ 14, /*->19944*/
/*19930*/     OPC_CheckChild1Type, MVT::i64,
/*19932*/     OPC_RecordChild2, // #2 = $dst
/*19933*/     OPC_CheckChild2Type, MVT::i64,
/*19935*/     OPC_EmitMergeInputChains1_0,
/*19936*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MIPSeh_return64), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (MIPSehret GPR64:i64:$spoff, GPR64:i64:$dst) - Complexity = 3
              // Dst: (MIPSeh_return64 GPR64:i64:$spoff, GPR64:i64:$dst)
/*19944*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DivRem16),// ->19963
/*19948*/   OPC_RecordChild0, // #0 = $rx
/*19949*/   OPC_CheckChild0Type, MVT::i32,
/*19951*/   OPC_RecordChild1, // #1 = $ry
/*19952*/   OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*19954*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DivRxRy16), 0|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (MipsDivRem16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry) - Complexity = 3
            // Dst: (DivRxRy16:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DivRemU16),// ->19981
/*19966*/   OPC_RecordChild0, // #0 = $rx
/*19967*/   OPC_CheckChild0Type, MVT::i32,
/*19969*/   OPC_RecordChild1, // #1 = $ry
/*19970*/   OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*19972*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DivuRxRy16), 0|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (MipsDivRemU16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry) - Complexity = 3
            // Dst: (DivuRxRy16:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry)
          /*SwitchOpcode*/ 93|128,2/*349*/,  TARGET_VAL(MipsISD::SELECT_CC_DSP),// ->20334
/*19985*/   OPC_RecordChild0, // #0 = $a
/*19986*/   OPC_Scope, 43|128,1/*171*/, /*->20160*/ // 2 children in Scope
/*19989*/     OPC_CheckChild0Type, MVT::v2i16,
/*19991*/     OPC_RecordChild1, // #1 = $b
/*19992*/     OPC_RecordChild2, // #2 = $c
/*19993*/     OPC_RecordChild3, // #3 = $d
/*19994*/     OPC_MoveChild, 4,
/*19996*/     OPC_Scope, 26, /*->20024*/ // 6 children in Scope
/*19998*/       OPC_CheckCondCode, ISD::SETEQ,
/*20000*/       OPC_MoveParent,
/*20001*/       OPC_CheckType, MVT::v2i16,
/*20003*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20005*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_EQ_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #4
/*20014*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 4, 2, 3, 
                // Src: (MipsSELECT_CC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, v2i16:v2i16:$c, v2i16:v2i16:$d, SETEQ:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_EQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ?:v2i16:$c, ?:v2i16:$d)
/*20024*/     /*Scope*/ 26, /*->20051*/
/*20025*/       OPC_CheckCondCode, ISD::SETLT,
/*20027*/       OPC_MoveParent,
/*20028*/       OPC_CheckType, MVT::v2i16,
/*20030*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20032*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LT_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #4
/*20041*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 4, 2, 3, 
                // Src: (MipsSELECT_CC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, v2i16:v2i16:$c, v2i16:v2i16:$d, SETLT:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LT_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ?:v2i16:$c, ?:v2i16:$d)
/*20051*/     /*Scope*/ 26, /*->20078*/
/*20052*/       OPC_CheckCondCode, ISD::SETLE,
/*20054*/       OPC_MoveParent,
/*20055*/       OPC_CheckType, MVT::v2i16,
/*20057*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20059*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LE_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #4
/*20068*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 4, 2, 3, 
                // Src: (MipsSELECT_CC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, v2i16:v2i16:$c, v2i16:v2i16:$d, SETLE:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LE_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ?:v2i16:$c, ?:v2i16:$d)
/*20078*/     /*Scope*/ 26, /*->20105*/
/*20079*/       OPC_CheckCondCode, ISD::SETNE,
/*20081*/       OPC_MoveParent,
/*20082*/       OPC_CheckType, MVT::v2i16,
/*20084*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20086*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_EQ_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #4
/*20095*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 4, 3, 2, 
                // Src: (MipsSELECT_CC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, v2i16:v2i16:$c, v2i16:v2i16:$d, SETNE:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_EQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ?:v2i16:$d, ?:v2i16:$c)
/*20105*/     /*Scope*/ 26, /*->20132*/
/*20106*/       OPC_CheckCondCode, ISD::SETGE,
/*20108*/       OPC_MoveParent,
/*20109*/       OPC_CheckType, MVT::v2i16,
/*20111*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20113*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LT_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #4
/*20122*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 4, 3, 2, 
                // Src: (MipsSELECT_CC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, v2i16:v2i16:$c, v2i16:v2i16:$d, SETGE:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LT_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ?:v2i16:$d, ?:v2i16:$c)
/*20132*/     /*Scope*/ 26, /*->20159*/
/*20133*/       OPC_CheckCondCode, ISD::SETGT,
/*20135*/       OPC_MoveParent,
/*20136*/       OPC_CheckType, MVT::v2i16,
/*20138*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20140*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LE_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #4
/*20149*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 4, 3, 2, 
                // Src: (MipsSELECT_CC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, v2i16:v2i16:$c, v2i16:v2i16:$d, SETGT:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LE_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ?:v2i16:$d, ?:v2i16:$c)
/*20159*/     0, /*End of Scope*/
/*20160*/   /*Scope*/ 43|128,1/*171*/, /*->20333*/
/*20162*/     OPC_CheckChild0Type, MVT::v4i8,
/*20164*/     OPC_RecordChild1, // #1 = $b
/*20165*/     OPC_RecordChild2, // #2 = $c
/*20166*/     OPC_RecordChild3, // #3 = $d
/*20167*/     OPC_MoveChild, 4,
/*20169*/     OPC_Scope, 26, /*->20197*/ // 6 children in Scope
/*20171*/       OPC_CheckCondCode, ISD::SETEQ,
/*20173*/       OPC_MoveParent,
/*20174*/       OPC_CheckType, MVT::v4i8,
/*20176*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20178*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_EQ_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #4
/*20187*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 4, 2, 3, 
                // Src: (MipsSELECT_CC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, v4i8:v4i8:$c, v4i8:v4i8:$d, SETEQ:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_EQ_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ?:v4i8:$c, ?:v4i8:$d)
/*20197*/     /*Scope*/ 26, /*->20224*/
/*20198*/       OPC_CheckCondCode, ISD::SETULT,
/*20200*/       OPC_MoveParent,
/*20201*/       OPC_CheckType, MVT::v4i8,
/*20203*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20205*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LT_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #4
/*20214*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 4, 2, 3, 
                // Src: (MipsSELECT_CC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, v4i8:v4i8:$c, v4i8:v4i8:$d, SETULT:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LT_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ?:v4i8:$c, ?:v4i8:$d)
/*20224*/     /*Scope*/ 26, /*->20251*/
/*20225*/       OPC_CheckCondCode, ISD::SETULE,
/*20227*/       OPC_MoveParent,
/*20228*/       OPC_CheckType, MVT::v4i8,
/*20230*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20232*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LE_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #4
/*20241*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 4, 2, 3, 
                // Src: (MipsSELECT_CC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, v4i8:v4i8:$c, v4i8:v4i8:$d, SETULE:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LE_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ?:v4i8:$c, ?:v4i8:$d)
/*20251*/     /*Scope*/ 26, /*->20278*/
/*20252*/       OPC_CheckCondCode, ISD::SETNE,
/*20254*/       OPC_MoveParent,
/*20255*/       OPC_CheckType, MVT::v4i8,
/*20257*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20259*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_EQ_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #4
/*20268*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 4, 3, 2, 
                // Src: (MipsSELECT_CC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, v4i8:v4i8:$c, v4i8:v4i8:$d, SETNE:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_EQ_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ?:v4i8:$d, ?:v4i8:$c)
/*20278*/     /*Scope*/ 26, /*->20305*/
/*20279*/       OPC_CheckCondCode, ISD::SETUGE,
/*20281*/       OPC_MoveParent,
/*20282*/       OPC_CheckType, MVT::v4i8,
/*20284*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20286*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LT_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #4
/*20295*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 4, 3, 2, 
                // Src: (MipsSELECT_CC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, v4i8:v4i8:$c, v4i8:v4i8:$d, SETUGE:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LT_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ?:v4i8:$d, ?:v4i8:$c)
/*20305*/     /*Scope*/ 26, /*->20332*/
/*20306*/       OPC_CheckCondCode, ISD::SETUGT,
/*20308*/       OPC_MoveParent,
/*20309*/       OPC_CheckType, MVT::v4i8,
/*20311*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20313*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LE_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #4
/*20322*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 4, 3, 2, 
                // Src: (MipsSELECT_CC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, v4i8:v4i8:$c, v4i8:v4i8:$d, SETUGT:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LE_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ?:v4i8:$d, ?:v4i8:$c)
/*20332*/     0, /*End of Scope*/
/*20333*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 45|128,6/*813*/,  TARGET_VAL(MipsISD::SETCC_DSP),// ->21151
/*20338*/   OPC_RecordChild0, // #0 = $a
/*20339*/   OPC_Scope, 19|128,3/*403*/, /*->20745*/ // 2 children in Scope
/*20342*/     OPC_CheckChild0Type, MVT::v2i16,
/*20344*/     OPC_RecordChild1, // #1 = $b
/*20345*/     OPC_MoveChild, 2,
/*20347*/     OPC_Scope, 65, /*->20414*/ // 6 children in Scope
/*20349*/       OPC_CheckCondCode, ISD::SETEQ,
/*20351*/       OPC_MoveParent,
/*20352*/       OPC_CheckType, MVT::v2i16,
/*20354*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20356*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_EQ_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #2
/*20365*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20368*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20380*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*20389*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20392*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 5, 6,  // Results = #7
/*20401*/       OPC_EmitRegister, MVT::v2i16, Mips::ZERO,
/*20404*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 2, 7, 8, 
                // Src: (MipsSETCC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, SETEQ:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_EQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), (COPY_TO_REGCLASS:v2i16 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32), ZERO:v2i16)
/*20414*/     /*Scope*/ 65, /*->20480*/
/*20415*/       OPC_CheckCondCode, ISD::SETLT,
/*20417*/       OPC_MoveParent,
/*20418*/       OPC_CheckType, MVT::v2i16,
/*20420*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20422*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LT_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #2
/*20431*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20434*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20446*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*20455*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20458*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 5, 6,  // Results = #7
/*20467*/       OPC_EmitRegister, MVT::v2i16, Mips::ZERO,
/*20470*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 2, 7, 8, 
                // Src: (MipsSETCC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, SETLT:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LT_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), (COPY_TO_REGCLASS:v2i16 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32), ZERO:v2i16)
/*20480*/     /*Scope*/ 65, /*->20546*/
/*20481*/       OPC_CheckCondCode, ISD::SETLE,
/*20483*/       OPC_MoveParent,
/*20484*/       OPC_CheckType, MVT::v2i16,
/*20486*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20488*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LE_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #2
/*20497*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20500*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20512*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*20521*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20524*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 5, 6,  // Results = #7
/*20533*/       OPC_EmitRegister, MVT::v2i16, Mips::ZERO,
/*20536*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 2, 7, 8, 
                // Src: (MipsSETCC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, SETLE:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LE_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), (COPY_TO_REGCLASS:v2i16 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32), ZERO:v2i16)
/*20546*/     /*Scope*/ 65, /*->20612*/
/*20547*/       OPC_CheckCondCode, ISD::SETNE,
/*20549*/       OPC_MoveParent,
/*20550*/       OPC_CheckType, MVT::v2i16,
/*20552*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20554*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_EQ_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #2
/*20563*/       OPC_EmitRegister, MVT::v2i16, Mips::ZERO,
/*20566*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20569*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20581*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*20590*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20593*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 6, 7,  // Results = #8
/*20602*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 2, 3, 8, 
                // Src: (MipsSETCC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, SETNE:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_EQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ZERO:v2i16, (COPY_TO_REGCLASS:v2i16 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32))
/*20612*/     /*Scope*/ 65, /*->20678*/
/*20613*/       OPC_CheckCondCode, ISD::SETGE,
/*20615*/       OPC_MoveParent,
/*20616*/       OPC_CheckType, MVT::v2i16,
/*20618*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20620*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LT_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #2
/*20629*/       OPC_EmitRegister, MVT::v2i16, Mips::ZERO,
/*20632*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20635*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20647*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*20656*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20659*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 6, 7,  // Results = #8
/*20668*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 2, 3, 8, 
                // Src: (MipsSETCC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, SETGE:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LT_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ZERO:v2i16, (COPY_TO_REGCLASS:v2i16 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32))
/*20678*/     /*Scope*/ 65, /*->20744*/
/*20679*/       OPC_CheckCondCode, ISD::SETGT,
/*20681*/       OPC_MoveParent,
/*20682*/       OPC_CheckType, MVT::v2i16,
/*20684*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20686*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LE_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #2
/*20695*/       OPC_EmitRegister, MVT::v2i16, Mips::ZERO,
/*20698*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20701*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20713*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*20722*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20725*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 6, 7,  // Results = #8
/*20734*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 2, 3, 8, 
                // Src: (MipsSETCC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, SETGT:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LE_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ZERO:v2i16, (COPY_TO_REGCLASS:v2i16 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32))
/*20744*/     0, /*End of Scope*/
/*20745*/   /*Scope*/ 19|128,3/*403*/, /*->21150*/
/*20747*/     OPC_CheckChild0Type, MVT::v4i8,
/*20749*/     OPC_RecordChild1, // #1 = $b
/*20750*/     OPC_MoveChild, 2,
/*20752*/     OPC_Scope, 65, /*->20819*/ // 6 children in Scope
/*20754*/       OPC_CheckCondCode, ISD::SETEQ,
/*20756*/       OPC_MoveParent,
/*20757*/       OPC_CheckType, MVT::v4i8,
/*20759*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20761*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_EQ_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #2
/*20770*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20773*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20785*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*20794*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20797*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 5, 6,  // Results = #7
/*20806*/       OPC_EmitRegister, MVT::v4i8, Mips::ZERO,
/*20809*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 2, 7, 8, 
                // Src: (MipsSETCC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, SETEQ:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_EQ_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), (COPY_TO_REGCLASS:v4i8 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32), ZERO:v4i8)
/*20819*/     /*Scope*/ 65, /*->20885*/
/*20820*/       OPC_CheckCondCode, ISD::SETULT,
/*20822*/       OPC_MoveParent,
/*20823*/       OPC_CheckType, MVT::v4i8,
/*20825*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20827*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LT_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #2
/*20836*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20839*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20851*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*20860*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20863*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 5, 6,  // Results = #7
/*20872*/       OPC_EmitRegister, MVT::v4i8, Mips::ZERO,
/*20875*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 2, 7, 8, 
                // Src: (MipsSETCC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, SETULT:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LT_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), (COPY_TO_REGCLASS:v4i8 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32), ZERO:v4i8)
/*20885*/     /*Scope*/ 65, /*->20951*/
/*20886*/       OPC_CheckCondCode, ISD::SETULE,
/*20888*/       OPC_MoveParent,
/*20889*/       OPC_CheckType, MVT::v4i8,
/*20891*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20893*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LE_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #2
/*20902*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20905*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20917*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*20926*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20929*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 5, 6,  // Results = #7
/*20938*/       OPC_EmitRegister, MVT::v4i8, Mips::ZERO,
/*20941*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 2, 7, 8, 
                // Src: (MipsSETCC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, SETULE:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LE_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), (COPY_TO_REGCLASS:v4i8 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32), ZERO:v4i8)
/*20951*/     /*Scope*/ 65, /*->21017*/
/*20952*/       OPC_CheckCondCode, ISD::SETNE,
/*20954*/       OPC_MoveParent,
/*20955*/       OPC_CheckType, MVT::v4i8,
/*20957*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20959*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_EQ_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #2
/*20968*/       OPC_EmitRegister, MVT::v4i8, Mips::ZERO,
/*20971*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20974*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20986*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*20995*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20998*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 6, 7,  // Results = #8
/*21007*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 2, 3, 8, 
                // Src: (MipsSETCC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, SETNE:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_EQ_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ZERO:v4i8, (COPY_TO_REGCLASS:v4i8 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32))
/*21017*/     /*Scope*/ 65, /*->21083*/
/*21018*/       OPC_CheckCondCode, ISD::SETUGE,
/*21020*/       OPC_MoveParent,
/*21021*/       OPC_CheckType, MVT::v4i8,
/*21023*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*21025*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LT_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #2
/*21034*/       OPC_EmitRegister, MVT::v4i8, Mips::ZERO,
/*21037*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*21040*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*21052*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*21061*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*21064*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 6, 7,  // Results = #8
/*21073*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 2, 3, 8, 
                // Src: (MipsSETCC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, SETUGE:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LT_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ZERO:v4i8, (COPY_TO_REGCLASS:v4i8 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32))
/*21083*/     /*Scope*/ 65, /*->21149*/
/*21084*/       OPC_CheckCondCode, ISD::SETUGT,
/*21086*/       OPC_MoveParent,
/*21087*/       OPC_CheckType, MVT::v4i8,
/*21089*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*21091*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LE_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #2
/*21100*/       OPC_EmitRegister, MVT::v4i8, Mips::ZERO,
/*21103*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*21106*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*21118*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*21127*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*21130*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 6, 7,  // Results = #8
/*21139*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 2, 3, 8, 
                // Src: (MipsSETCC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, SETUGT:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LE_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ZERO:v4i8, (COPY_TO_REGCLASS:v4i8 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32))
/*21149*/     0, /*End of Scope*/
/*21150*/   0, /*End of Scope*/
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 21153 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 289
  // #OPC_RecordNode                     = 54
  // #OPC_RecordChild                    = 813
  // #OPC_RecordMemRef                   = 18
  // #OPC_CaptureGlueInput               = 9
  // #OPC_MoveChild                      = 213
  // #OPC_MoveParent                     = 735
  // #OPC_CheckSame                      = 0
  // #OPC_CheckPatternPredicate          = 895
  // #OPC_CheckPredicate                 = 261
  // #OPC_CheckOpcode                    = 125
  // #OPC_SwitchOpcode                   = 14
  // #OPC_CheckType                      = 419
  // #OPC_SwitchType                     = 110
  // #OPC_CheckChildType                 = 90
  // #OPC_CheckInteger                   = 119
  // #OPC_CheckCondCode                  = 234
  // #OPC_CheckValueType                 = 3
  // #OPC_CheckComplexPat                = 121
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 44
  // #OPC_EmitStringInteger              = 22
  // #OPC_EmitRegister                   = 72
  // #OPC_EmitConvertToTarget            = 148
  // #OPC_EmitMergeInputChains           = 363
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 206
  // #OPC_EmitNodeXForm                  = 36
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 902

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

virtual bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding());
  case 1: return (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding());
  case 2: return (Subtarget.hasDSP());
  case 3: return (Subtarget.inMips16Mode());
  case 4: return (!Subtarget.isABI_N64()) && (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding());
  case 5: return (!Subtarget.isABI_N64()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding());
  case 6: return (Subtarget.hasFPIdx()) && (Subtarget.hasStandardEncoding());
  case 7: return (Subtarget.hasMips32r2()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding());
  case 8: return (Subtarget.hasMips64()) && (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding());
  case 9: return (Subtarget.hasStandardEncoding());
  case 10: return (Subtarget.hasDSPR2());
  case 11: return (Subtarget.hasBitCount()) && (Subtarget.hasStandardEncoding());
  case 12: return (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding());
  case 13: return (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding());
  case 14: return (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding());
  case 15: return (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding());
  case 16: return (Subtarget.hasMips64r2()) && (Subtarget.hasStandardEncoding());
  case 17: return (Subtarget.hasStandardEncoding()) && (!Subtarget.hasDSP());
  case 18: return (Subtarget.hasSEInReg()) && (Subtarget.hasStandardEncoding());
  case 19: return (Subtarget.hasMips32r2()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding());
  case 20: return (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding());
  case 21: return (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding());
  case 22: return (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding());
  case 23: return (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding());
  case 24: return (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding());
  case 25: return (TM.getRelocationModel() == Reloc::Static) && (Subtarget.hasStandardEncoding());
  case 26: return (TM.getRelocationModel() == Reloc::PIC_) && (Subtarget.hasStandardEncoding());
  }
}

virtual bool CheckNodePredicate(SDNode *Node,
                                unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 1: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 2: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 3: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 4: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 5: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 6: { // Predicate_sextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 7: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 8: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 9: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 10: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 11: { // Predicate_extloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 12: { // Predicate_sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 13: { // Predicate_zextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 14: { // Predicate_extloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 15: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 16: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 17: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 18: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 19: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 20: { // Predicate_truncstorei32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 21: { // Predicate_immZExt5
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return Imm == (Imm & 0x1f);
  }
  case 22: { // Predicate_immZExt10
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isUInt<10>(Imm);
  }
  case 23: { // Predicate_immZExt4
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isUInt<4>(Imm);
  }
  case 24: { // Predicate_immZExt3
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isUInt<3>(Imm);
  }
  case 25: { // Predicate_immZExt2
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isUInt<2>(Imm);
  }
  case 26: { // Predicate_immZExt8
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isUInt<8>(Imm);
  }
  case 27: { // Predicate_immZExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  if (N->getValueType(0) == MVT::i32)
    return (uint32_t)N->getZExtValue() == (unsigned short)N->getZExtValue();
  else
    return (uint64_t)N->getZExtValue() == (unsigned short)N->getZExtValue();

  }
  case 28: { // Predicate_immSExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return isInt<16>(N->getSExtValue()); 
  }
  case 29: { // Predicate_immSExt16Plus1
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isInt<17>(N->getSExtValue()) && isInt<16>(N->getSExtValue() + 1);

  }
  case 30: { // Predicate_immSExt8
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return isInt<8>(N->getSExtValue()); 
  }
  case 31: { // Predicate_immZExt6
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return Imm == (Imm & 0x3f);
  }
  case 32: { // Predicate_immSExt6
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isInt<6>(Imm);
  }
  case 33: { // Predicate_immLow16Zero
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  int64_t Val = N->getSExtValue();
  return isInt<32>(Val) && !(Val & 0xffff);

  }
  case 34: { // Predicate_atomic_load_add_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 35: { // Predicate_atomic_load_add_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 36: { // Predicate_atomic_load_add_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 37: { // Predicate_atomic_load_add_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 38: { // Predicate_atomic_load_sub_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 39: { // Predicate_atomic_load_sub_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 40: { // Predicate_atomic_load_sub_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 41: { // Predicate_atomic_load_sub_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 42: { // Predicate_atomic_load_and_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 43: { // Predicate_atomic_load_and_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 44: { // Predicate_atomic_load_and_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 45: { // Predicate_atomic_load_and_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 46: { // Predicate_atomic_load_or_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 47: { // Predicate_atomic_load_or_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 48: { // Predicate_atomic_load_or_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 49: { // Predicate_atomic_load_or_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 50: { // Predicate_atomic_load_xor_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 51: { // Predicate_atomic_load_xor_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 52: { // Predicate_atomic_load_xor_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 53: { // Predicate_atomic_load_xor_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 54: { // Predicate_atomic_load_nand_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 55: { // Predicate_atomic_load_nand_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 56: { // Predicate_atomic_load_nand_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 57: { // Predicate_atomic_load_nand_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 58: { // Predicate_atomic_swap_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 59: { // Predicate_atomic_swap_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 60: { // Predicate_atomic_swap_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 61: { // Predicate_atomic_swap_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 62: { // Predicate_atomic_cmp_swap_8
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 63: { // Predicate_atomic_cmp_swap_16
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 64: { // Predicate_atomic_cmp_swap_32
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 65: { // Predicate_atomic_cmp_swap_64
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;

  }
  case 66: { // Predicate_fpimm0
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);

  return N->isExactlyValue(+0.0);

  }
  case 67: { // Predicate_fpimm0neg
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);

  return N->isExactlyValue(-0.0);

  }
  }
}

virtual bool CheckComplexPattern(SDNode *Root, SDNode *Parent,
                                 SDValue N, unsigned PatternNo,
         SmallVectorImpl<std::pair<SDValue, SDNode*> > &Result) {
  unsigned NextRes = Result.size();
  switch (PatternNo) {
  default: llvm_unreachable("Invalid pattern # in table?");
  case 0:
    Result.resize(NextRes+2);
    return selectAddrRegImm(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+3);
    return selectAddr16(Parent, N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 2:
    Result.resize(NextRes+2);
    return selectIntAddr(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 3:
    Result.resize(NextRes+2);
    return selectAddrDefault(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}

virtual SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // LO16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return getImm(N, N->getZExtValue() & 0xFFFF);

  }
  case 1: {  // Plus1
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());
 return getImm(N, N->getSExtValue() + 1); 
  }
  case 2: {  // HI16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return getImm(N, (N->getZExtValue() >> 16) & 0xFFFF);

  }
  }
}

