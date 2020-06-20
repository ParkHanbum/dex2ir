/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*DAG Instruction Selector for the Sparc target                               *|
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
/*0*/     OPC_SwitchOpcode /*53 cases */, 64|128,3/*448*/,  TARGET_VAL(ISD::STORE),// ->453
/*5*/       OPC_RecordMemRef,
/*6*/       OPC_RecordNode,   // #0 = 'st' chained node
/*7*/       OPC_Scope, 96, /*->105*/ // 2 children in Scope
/*9*/         OPC_MoveChild, 1,
/*11*/        OPC_CheckInteger, 0, 
/*13*/        OPC_SwitchType /*2 cases */, 42,  MVT::i32,// ->58
/*16*/          OPC_MoveParent,
/*17*/          OPC_RecordChild2, // #1 = $dst
/*18*/          OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*20*/          OPC_CheckPredicate, 1, // Predicate_store
/*22*/          OPC_Scope, 16, /*->40*/ // 2 children in Scope
/*24*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$dst #2 #3
/*27*/            OPC_EmitMergeInputChains1_0,
/*28*/            OPC_EmitRegister, MVT::i32, SP::G0,
/*31*/            OPC_MorphNodeTo, TARGET_VAL(SP::STrr), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (st 0:i32, ADDRrr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                  // Dst: (STrr ADDRrr:iPTR:$dst, G0:i32)
/*40*/          /*Scope*/ 16, /*->57*/
/*41*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$dst #2 #3
/*44*/            OPC_EmitMergeInputChains1_0,
/*45*/            OPC_EmitRegister, MVT::i32, SP::G0,
/*48*/            OPC_MorphNodeTo, TARGET_VAL(SP::STri), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (st 0:i32, ADDRri:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                  // Dst: (STri ADDRri:iPTR:$dst, G0:i32)
/*57*/          0, /*End of Scope*/
              /*SwitchType*/ 44,  MVT::i64,// ->104
/*60*/          OPC_MoveParent,
/*61*/          OPC_RecordChild2, // #1 = $dst
/*62*/          OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*64*/          OPC_CheckPredicate, 1, // Predicate_store
/*66*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*68*/          OPC_Scope, 16, /*->86*/ // 2 children in Scope
/*70*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$dst #2 #3
/*73*/            OPC_EmitMergeInputChains1_0,
/*74*/            OPC_EmitRegister, MVT::i64, SP::G0,
/*77*/            OPC_MorphNodeTo, TARGET_VAL(SP::STXrr), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (st 0:i64, ADDRrr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                  // Dst: (STXrr ADDRrr:iPTR:$dst, G0:i64)
/*86*/          /*Scope*/ 16, /*->103*/
/*87*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$dst #2 #3
/*90*/            OPC_EmitMergeInputChains1_0,
/*91*/            OPC_EmitRegister, MVT::i64, SP::G0,
/*94*/            OPC_MorphNodeTo, TARGET_VAL(SP::STXri), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (st 0:i64, ADDRri:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                  // Dst: (STXri ADDRri:iPTR:$dst, G0:i64)
/*103*/         0, /*End of Scope*/
              0, // EndSwitchType
/*105*/     /*Scope*/ 89|128,2/*345*/, /*->452*/
/*107*/       OPC_RecordChild1, // #1 = $src
/*108*/       OPC_Scope, 111, /*->221*/ // 4 children in Scope
/*110*/         OPC_CheckChild1Type, MVT::i32,
/*112*/         OPC_RecordChild2, // #2 = $addr
/*113*/         OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*115*/         OPC_Scope, 70, /*->187*/ // 2 children in Scope
/*117*/           OPC_CheckPredicate, 2, // Predicate_truncstore
/*119*/           OPC_Scope, 32, /*->153*/ // 2 children in Scope
/*121*/             OPC_CheckPredicate, 3, // Predicate_truncstorei8
/*123*/             OPC_Scope, 13, /*->138*/ // 2 children in Scope
/*125*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*128*/               OPC_EmitMergeInputChains1_0,
/*129*/               OPC_MorphNodeTo, TARGET_VAL(SP::STBrr), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i32:i32:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (STBrr ADDRrr:iPTR:$addr, i32:i32:$src)
/*138*/             /*Scope*/ 13, /*->152*/
/*139*/               OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*142*/               OPC_EmitMergeInputChains1_0,
/*143*/               OPC_MorphNodeTo, TARGET_VAL(SP::STBri), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i32:i32:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (STBri ADDRri:iPTR:$addr, i32:i32:$src)
/*152*/             0, /*End of Scope*/
/*153*/           /*Scope*/ 32, /*->186*/
/*154*/             OPC_CheckPredicate, 4, // Predicate_truncstorei16
/*156*/             OPC_Scope, 13, /*->171*/ // 2 children in Scope
/*158*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*161*/               OPC_EmitMergeInputChains1_0,
/*162*/               OPC_MorphNodeTo, TARGET_VAL(SP::STHrr), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i32:i32:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (STHrr ADDRrr:iPTR:$addr, i32:i32:$src)
/*171*/             /*Scope*/ 13, /*->185*/
/*172*/               OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*175*/               OPC_EmitMergeInputChains1_0,
/*176*/               OPC_MorphNodeTo, TARGET_VAL(SP::STHri), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i32:i32:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (STHri ADDRri:iPTR:$addr, i32:i32:$src)
/*185*/             0, /*End of Scope*/
/*186*/           0, /*End of Scope*/
/*187*/         /*Scope*/ 32, /*->220*/
/*188*/           OPC_CheckPredicate, 1, // Predicate_store
/*190*/           OPC_Scope, 13, /*->205*/ // 2 children in Scope
/*192*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*195*/             OPC_EmitMergeInputChains1_0,
/*196*/             OPC_MorphNodeTo, TARGET_VAL(SP::STrr), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st i32:i32:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STrr ADDRrr:iPTR:$addr, i32:i32:$src)
/*205*/           /*Scope*/ 13, /*->219*/
/*206*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*209*/             OPC_EmitMergeInputChains1_0,
/*210*/             OPC_MorphNodeTo, TARGET_VAL(SP::STri), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st i32:i32:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STri ADDRri:iPTR:$addr, i32:i32:$src)
/*219*/           0, /*End of Scope*/
/*220*/         0, /*End of Scope*/
/*221*/       /*Scope*/ 37, /*->259*/
/*222*/         OPC_CheckChild1Type, MVT::f32,
/*224*/         OPC_RecordChild2, // #2 = $addr
/*225*/         OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*227*/         OPC_CheckPredicate, 1, // Predicate_store
/*229*/         OPC_Scope, 13, /*->244*/ // 2 children in Scope
/*231*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*234*/           OPC_EmitMergeInputChains1_0,
/*235*/           OPC_MorphNodeTo, TARGET_VAL(SP::STFrr), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                  // Src: (st f32:f32:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFrr ADDRrr:iPTR:$addr, f32:f32:$src)
/*244*/         /*Scope*/ 13, /*->258*/
/*245*/           OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*248*/           OPC_EmitMergeInputChains1_0,
/*249*/           OPC_MorphNodeTo, TARGET_VAL(SP::STFri), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                  // Src: (st f32:f32:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFri ADDRri:iPTR:$addr, f32:f32:$src)
/*258*/         0, /*End of Scope*/
/*259*/       /*Scope*/ 37, /*->297*/
/*260*/         OPC_CheckChild1Type, MVT::f64,
/*262*/         OPC_RecordChild2, // #2 = $addr
/*263*/         OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*265*/         OPC_CheckPredicate, 1, // Predicate_store
/*267*/         OPC_Scope, 13, /*->282*/ // 2 children in Scope
/*269*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*272*/           OPC_EmitMergeInputChains1_0,
/*273*/           OPC_MorphNodeTo, TARGET_VAL(SP::STDFrr), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                  // Src: (st f64:f64:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STDFrr ADDRrr:iPTR:$addr, f64:f64:$src)
/*282*/         /*Scope*/ 13, /*->296*/
/*283*/           OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*286*/           OPC_EmitMergeInputChains1_0,
/*287*/           OPC_MorphNodeTo, TARGET_VAL(SP::STDFri), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                  // Src: (st f64:f64:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STDFri ADDRri:iPTR:$addr, f64:f64:$src)
/*296*/         0, /*End of Scope*/
/*297*/       /*Scope*/ 24|128,1/*152*/, /*->451*/
/*299*/         OPC_CheckChild1Type, MVT::i64,
/*301*/         OPC_RecordChild2, // #2 = $addr
/*302*/         OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*304*/         OPC_Scope, 34, /*->340*/ // 2 children in Scope
/*306*/           OPC_CheckPredicate, 1, // Predicate_store
/*308*/           OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*310*/           OPC_Scope, 13, /*->325*/ // 2 children in Scope
/*312*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*315*/             OPC_EmitMergeInputChains1_0,
/*316*/             OPC_MorphNodeTo, TARGET_VAL(SP::STXrr), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st i64:i64:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STXrr ADDRrr:iPTR:$addr, i64:i64:$src)
/*325*/           /*Scope*/ 13, /*->339*/
/*326*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*329*/             OPC_EmitMergeInputChains1_0,
/*330*/             OPC_MorphNodeTo, TARGET_VAL(SP::STXri), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st i64:i64:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STXri ADDRri:iPTR:$addr, i64:i64:$src)
/*339*/           0, /*End of Scope*/
/*340*/         /*Scope*/ 109, /*->450*/
/*341*/           OPC_CheckPredicate, 2, // Predicate_truncstore
/*343*/           OPC_Scope, 34, /*->379*/ // 3 children in Scope
/*345*/             OPC_CheckPredicate, 3, // Predicate_truncstorei8
/*347*/             OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*349*/             OPC_Scope, 13, /*->364*/ // 2 children in Scope
/*351*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*354*/               OPC_EmitMergeInputChains1_0,
/*355*/               OPC_MorphNodeTo, TARGET_VAL(SP::STBrr), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i64:i64:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (STBrr ADDRrr:iPTR:$addr, ?:i64:$src)
/*364*/             /*Scope*/ 13, /*->378*/
/*365*/               OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*368*/               OPC_EmitMergeInputChains1_0,
/*369*/               OPC_MorphNodeTo, TARGET_VAL(SP::STBri), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i64:i64:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (STBri ADDRri:iPTR:$addr, ?:i64:$src)
/*378*/             0, /*End of Scope*/
/*379*/           /*Scope*/ 34, /*->414*/
/*380*/             OPC_CheckPredicate, 4, // Predicate_truncstorei16
/*382*/             OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*384*/             OPC_Scope, 13, /*->399*/ // 2 children in Scope
/*386*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*389*/               OPC_EmitMergeInputChains1_0,
/*390*/               OPC_MorphNodeTo, TARGET_VAL(SP::STHrr), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i64:i64:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (STHrr ADDRrr:iPTR:$addr, ?:i64:$src)
/*399*/             /*Scope*/ 13, /*->413*/
/*400*/               OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*403*/               OPC_EmitMergeInputChains1_0,
/*404*/               OPC_MorphNodeTo, TARGET_VAL(SP::STHri), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i64:i64:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (STHri ADDRri:iPTR:$addr, ?:i64:$src)
/*413*/             0, /*End of Scope*/
/*414*/           /*Scope*/ 34, /*->449*/
/*415*/             OPC_CheckPredicate, 5, // Predicate_truncstorei32
/*417*/             OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*419*/             OPC_Scope, 13, /*->434*/ // 2 children in Scope
/*421*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*424*/               OPC_EmitMergeInputChains1_0,
/*425*/               OPC_MorphNodeTo, TARGET_VAL(SP::STrr), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i64:i64:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                      // Dst: (STrr ADDRrr:iPTR:$addr, ?:i64:$src)
/*434*/             /*Scope*/ 13, /*->448*/
/*435*/               OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*438*/               OPC_EmitMergeInputChains1_0,
/*439*/               OPC_MorphNodeTo, TARGET_VAL(SP::STri), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i64:i64:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                      // Dst: (STri ADDRri:iPTR:$addr, ?:i64:$src)
/*448*/             0, /*End of Scope*/
/*449*/           0, /*End of Scope*/
/*450*/         0, /*End of Scope*/
/*451*/       0, /*End of Scope*/
/*452*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 98|128,6/*866*/,  TARGET_VAL(ISD::LOAD),// ->1323
/*457*/     OPC_RecordMemRef,
/*458*/     OPC_RecordNode,   // #0 = 'ld' chained node
/*459*/     OPC_RecordChild1, // #1 = $addr
/*460*/     OPC_CheckPredicate, 6, // Predicate_unindexedload
/*462*/     OPC_Scope, 72, /*->536*/ // 18 children in Scope
/*464*/       OPC_CheckPredicate, 7, // Predicate_sextload
/*466*/       OPC_CheckType, MVT::i32,
/*468*/       OPC_Scope, 32, /*->502*/ // 2 children in Scope
/*470*/         OPC_CheckPredicate, 8, // Predicate_sextloadi8
/*472*/         OPC_Scope, 13, /*->487*/ // 2 children in Scope
/*474*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*477*/           OPC_EmitMergeInputChains1_0,
/*478*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDSBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LDSBrr:i32 ADDRrr:iPTR:$addr)
/*487*/         /*Scope*/ 13, /*->501*/
/*488*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*491*/           OPC_EmitMergeInputChains1_0,
/*492*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDSBri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LDSBri:i32 ADDRri:iPTR:$addr)
/*501*/         0, /*End of Scope*/
/*502*/       /*Scope*/ 32, /*->535*/
/*503*/         OPC_CheckPredicate, 9, // Predicate_sextloadi16
/*505*/         OPC_Scope, 13, /*->520*/ // 2 children in Scope
/*507*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*510*/           OPC_EmitMergeInputChains1_0,
/*511*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDSHrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LDSHrr:i32 ADDRrr:iPTR:$addr)
/*520*/         /*Scope*/ 13, /*->534*/
/*521*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*524*/           OPC_EmitMergeInputChains1_0,
/*525*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDSHri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LDSHri:i32 ADDRri:iPTR:$addr)
/*534*/         0, /*End of Scope*/
/*535*/       0, /*End of Scope*/
/*536*/     /*Scope*/ 72, /*->609*/
/*537*/       OPC_CheckPredicate, 10, // Predicate_zextload
/*539*/       OPC_CheckType, MVT::i32,
/*541*/       OPC_Scope, 32, /*->575*/ // 2 children in Scope
/*543*/         OPC_CheckPredicate, 11, // Predicate_zextloadi8
/*545*/         OPC_Scope, 13, /*->560*/ // 2 children in Scope
/*547*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*550*/           OPC_EmitMergeInputChains1_0,
/*551*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LDUBrr:i32 ADDRrr:iPTR:$addr)
/*560*/         /*Scope*/ 13, /*->574*/
/*561*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*564*/           OPC_EmitMergeInputChains1_0,
/*565*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LDUBri:i32 ADDRri:iPTR:$addr)
/*574*/         0, /*End of Scope*/
/*575*/       /*Scope*/ 32, /*->608*/
/*576*/         OPC_CheckPredicate, 12, // Predicate_zextloadi16
/*578*/         OPC_Scope, 13, /*->593*/ // 2 children in Scope
/*580*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*583*/           OPC_EmitMergeInputChains1_0,
/*584*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUHrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LDUHrr:i32 ADDRrr:iPTR:$addr)
/*593*/         /*Scope*/ 13, /*->607*/
/*594*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*597*/           OPC_EmitMergeInputChains1_0,
/*598*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUHri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LDUHri:i32 ADDRri:iPTR:$addr)
/*607*/         0, /*End of Scope*/
/*608*/       0, /*End of Scope*/
/*609*/     /*Scope*/ 34, /*->644*/
/*610*/       OPC_CheckPredicate, 13, // Predicate_load
/*612*/       OPC_CheckType, MVT::i32,
/*614*/       OPC_Scope, 13, /*->629*/ // 2 children in Scope
/*616*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*619*/         OPC_EmitMergeInputChains1_0,
/*620*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDrr:i32 ADDRrr:iPTR:$addr)
/*629*/       /*Scope*/ 13, /*->643*/
/*630*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*633*/         OPC_EmitMergeInputChains1_0,
/*634*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDri:i32 ADDRri:iPTR:$addr)
/*643*/       0, /*End of Scope*/
/*644*/     /*Scope*/ 105, /*->750*/
/*645*/       OPC_CheckPredicate, 14, // Predicate_extload
/*647*/       OPC_CheckType, MVT::i32,
/*649*/       OPC_Scope, 32, /*->683*/ // 3 children in Scope
/*651*/         OPC_CheckPredicate, 15, // Predicate_extloadi1
/*653*/         OPC_Scope, 13, /*->668*/ // 2 children in Scope
/*655*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*658*/           OPC_EmitMergeInputChains1_0,
/*659*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LDUBrr:i32 ADDRrr:iPTR:$src)
/*668*/         /*Scope*/ 13, /*->682*/
/*669*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*672*/           OPC_EmitMergeInputChains1_0,
/*673*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LDUBri:i32 ADDRri:iPTR:$src)
/*682*/         0, /*End of Scope*/
/*683*/       /*Scope*/ 32, /*->716*/
/*684*/         OPC_CheckPredicate, 16, // Predicate_extloadi8
/*686*/         OPC_Scope, 13, /*->701*/ // 2 children in Scope
/*688*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*691*/           OPC_EmitMergeInputChains1_0,
/*692*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LDUBrr:i32 ADDRrr:iPTR:$src)
/*701*/         /*Scope*/ 13, /*->715*/
/*702*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*705*/           OPC_EmitMergeInputChains1_0,
/*706*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LDUBri:i32 ADDRri:iPTR:$src)
/*715*/         0, /*End of Scope*/
/*716*/       /*Scope*/ 32, /*->749*/
/*717*/         OPC_CheckPredicate, 17, // Predicate_extloadi16
/*719*/         OPC_Scope, 13, /*->734*/ // 2 children in Scope
/*721*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*724*/           OPC_EmitMergeInputChains1_0,
/*725*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUHrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LDUHrr:i32 ADDRrr:iPTR:$src)
/*734*/         /*Scope*/ 13, /*->748*/
/*735*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*738*/           OPC_EmitMergeInputChains1_0,
/*739*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUHri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LDUHri:i32 ADDRri:iPTR:$src)
/*748*/         0, /*End of Scope*/
/*749*/       0, /*End of Scope*/
/*750*/     /*Scope*/ 36, /*->787*/
/*751*/       OPC_CheckPredicate, 10, // Predicate_zextload
/*753*/       OPC_CheckPredicate, 18, // Predicate_zextloadi1
/*755*/       OPC_CheckType, MVT::i32,
/*757*/       OPC_Scope, 13, /*->772*/ // 2 children in Scope
/*759*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*762*/         OPC_EmitMergeInputChains1_0,
/*763*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRrr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LDUBrr:i32 ADDRrr:iPTR:$src)
/*772*/       /*Scope*/ 13, /*->786*/
/*773*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*776*/         OPC_EmitMergeInputChains1_0,
/*777*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRri:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LDUBri:i32 ADDRri:iPTR:$src)
/*786*/       0, /*End of Scope*/
/*787*/     /*Scope*/ 36, /*->824*/
/*788*/       OPC_CheckPredicate, 13, // Predicate_load
/*790*/       OPC_CheckType, MVT::i64,
/*792*/       OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*794*/       OPC_Scope, 13, /*->809*/ // 2 children in Scope
/*796*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*799*/         OPC_EmitMergeInputChains1_0,
/*800*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDXrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDXrr:i64 ADDRrr:iPTR:$addr)
/*809*/       /*Scope*/ 13, /*->823*/
/*810*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*813*/         OPC_EmitMergeInputChains1_0,
/*814*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDXri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDXri:i64 ADDRri:iPTR:$addr)
/*823*/       0, /*End of Scope*/
/*824*/     /*Scope*/ 38, /*->863*/
/*825*/       OPC_CheckPredicate, 10, // Predicate_zextload
/*827*/       OPC_CheckPredicate, 18, // Predicate_zextloadi1
/*829*/       OPC_CheckType, MVT::i64,
/*831*/       OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*833*/       OPC_Scope, 13, /*->848*/ // 2 children in Scope
/*835*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*838*/         OPC_EmitMergeInputChains1_0,
/*839*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LDUBrr:i64 ADDRrr:iPTR:$addr)
/*848*/       /*Scope*/ 13, /*->862*/
/*849*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*852*/         OPC_EmitMergeInputChains1_0,
/*853*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LDUBri:i64 ADDRri:iPTR:$addr)
/*862*/       0, /*End of Scope*/
/*863*/     /*Scope*/ 38, /*->902*/
/*864*/       OPC_CheckPredicate, 14, // Predicate_extload
/*866*/       OPC_CheckPredicate, 15, // Predicate_extloadi1
/*868*/       OPC_CheckType, MVT::i64,
/*870*/       OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*872*/       OPC_Scope, 13, /*->887*/ // 2 children in Scope
/*874*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*877*/         OPC_EmitMergeInputChains1_0,
/*878*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                // Dst: (LDUBrr:i64 ADDRrr:iPTR:$addr)
/*887*/       /*Scope*/ 13, /*->901*/
/*888*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*891*/         OPC_EmitMergeInputChains1_0,
/*892*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                // Dst: (LDUBri:i64 ADDRri:iPTR:$addr)
/*901*/       0, /*End of Scope*/
/*902*/     /*Scope*/ 38, /*->941*/
/*903*/       OPC_CheckPredicate, 10, // Predicate_zextload
/*905*/       OPC_CheckPredicate, 11, // Predicate_zextloadi8
/*907*/       OPC_CheckType, MVT::i64,
/*909*/       OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*911*/       OPC_Scope, 13, /*->926*/ // 2 children in Scope
/*913*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*916*/         OPC_EmitMergeInputChains1_0,
/*917*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                // Dst: (LDUBrr:i64 ADDRrr:iPTR:$addr)
/*926*/       /*Scope*/ 13, /*->940*/
/*927*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*930*/         OPC_EmitMergeInputChains1_0,
/*931*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                // Dst: (LDUBri:i64 ADDRri:iPTR:$addr)
/*940*/       0, /*End of Scope*/
/*941*/     /*Scope*/ 38, /*->980*/
/*942*/       OPC_CheckPredicate, 14, // Predicate_extload
/*944*/       OPC_CheckPredicate, 16, // Predicate_extloadi8
/*946*/       OPC_CheckType, MVT::i64,
/*948*/       OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*950*/       OPC_Scope, 13, /*->965*/ // 2 children in Scope
/*952*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*955*/         OPC_EmitMergeInputChains1_0,
/*956*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                // Dst: (LDUBrr:i64 ADDRrr:iPTR:$addr)
/*965*/       /*Scope*/ 13, /*->979*/
/*966*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*969*/         OPC_EmitMergeInputChains1_0,
/*970*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                // Dst: (LDUBri:i64 ADDRri:iPTR:$addr)
/*979*/       0, /*End of Scope*/
/*980*/     /*Scope*/ 38, /*->1019*/
/*981*/       OPC_CheckPredicate, 7, // Predicate_sextload
/*983*/       OPC_CheckPredicate, 8, // Predicate_sextloadi8
/*985*/       OPC_CheckType, MVT::i64,
/*987*/       OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*989*/       OPC_Scope, 13, /*->1004*/ // 2 children in Scope
/*991*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*994*/         OPC_EmitMergeInputChains1_0,
/*995*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDSBrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                // Dst: (LDSBrr:i64 ADDRrr:iPTR:$addr)
/*1004*/      /*Scope*/ 13, /*->1018*/
/*1005*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1008*/        OPC_EmitMergeInputChains1_0,
/*1009*/        OPC_MorphNodeTo, TARGET_VAL(SP::LDSBri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                // Dst: (LDSBri:i64 ADDRri:iPTR:$addr)
/*1018*/      0, /*End of Scope*/
/*1019*/    /*Scope*/ 38, /*->1058*/
/*1020*/      OPC_CheckPredicate, 10, // Predicate_zextload
/*1022*/      OPC_CheckPredicate, 12, // Predicate_zextloadi16
/*1024*/      OPC_CheckType, MVT::i64,
/*1026*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1028*/      OPC_Scope, 13, /*->1043*/ // 2 children in Scope
/*1030*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1033*/        OPC_EmitMergeInputChains1_0,
/*1034*/        OPC_MorphNodeTo, TARGET_VAL(SP::LDUHrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                // Dst: (LDUHrr:i64 ADDRrr:iPTR:$addr)
/*1043*/      /*Scope*/ 13, /*->1057*/
/*1044*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1047*/        OPC_EmitMergeInputChains1_0,
/*1048*/        OPC_MorphNodeTo, TARGET_VAL(SP::LDUHri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                // Dst: (LDUHri:i64 ADDRri:iPTR:$addr)
/*1057*/      0, /*End of Scope*/
/*1058*/    /*Scope*/ 38, /*->1097*/
/*1059*/      OPC_CheckPredicate, 14, // Predicate_extload
/*1061*/      OPC_CheckPredicate, 17, // Predicate_extloadi16
/*1063*/      OPC_CheckType, MVT::i64,
/*1065*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1067*/      OPC_Scope, 13, /*->1082*/ // 2 children in Scope
/*1069*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1072*/        OPC_EmitMergeInputChains1_0,
/*1073*/        OPC_MorphNodeTo, TARGET_VAL(SP::LDUHrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                // Dst: (LDUHrr:i64 ADDRrr:iPTR:$addr)
/*1082*/      /*Scope*/ 13, /*->1096*/
/*1083*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1086*/        OPC_EmitMergeInputChains1_0,
/*1087*/        OPC_MorphNodeTo, TARGET_VAL(SP::LDUHri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                // Dst: (LDUHri:i64 ADDRri:iPTR:$addr)
/*1096*/      0, /*End of Scope*/
/*1097*/    /*Scope*/ 38, /*->1136*/
/*1098*/      OPC_CheckPredicate, 7, // Predicate_sextload
/*1100*/      OPC_CheckPredicate, 9, // Predicate_sextloadi16
/*1102*/      OPC_CheckType, MVT::i64,
/*1104*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1106*/      OPC_Scope, 13, /*->1121*/ // 2 children in Scope
/*1108*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1111*/        OPC_EmitMergeInputChains1_0,
/*1112*/        OPC_MorphNodeTo, TARGET_VAL(SP::LDSHrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                // Dst: (LDSHrr:i64 ADDRrr:iPTR:$addr)
/*1121*/      /*Scope*/ 13, /*->1135*/
/*1122*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1125*/        OPC_EmitMergeInputChains1_0,
/*1126*/        OPC_MorphNodeTo, TARGET_VAL(SP::LDSHri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                // Dst: (LDSHri:i64 ADDRri:iPTR:$addr)
/*1135*/      0, /*End of Scope*/
/*1136*/    /*Scope*/ 38, /*->1175*/
/*1137*/      OPC_CheckPredicate, 10, // Predicate_zextload
/*1139*/      OPC_CheckPredicate, 19, // Predicate_zextloadi32
/*1141*/      OPC_CheckType, MVT::i64,
/*1143*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1145*/      OPC_Scope, 13, /*->1160*/ // 2 children in Scope
/*1147*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1150*/        OPC_EmitMergeInputChains1_0,
/*1151*/        OPC_MorphNodeTo, TARGET_VAL(SP::LDrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                // Dst: (LDrr:i64 ADDRrr:iPTR:$addr)
/*1160*/      /*Scope*/ 13, /*->1174*/
/*1161*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1164*/        OPC_EmitMergeInputChains1_0,
/*1165*/        OPC_MorphNodeTo, TARGET_VAL(SP::LDri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                // Dst: (LDri:i64 ADDRri:iPTR:$addr)
/*1174*/      0, /*End of Scope*/
/*1175*/    /*Scope*/ 38, /*->1214*/
/*1176*/      OPC_CheckPredicate, 14, // Predicate_extload
/*1178*/      OPC_CheckPredicate, 20, // Predicate_extloadi32
/*1180*/      OPC_CheckType, MVT::i64,
/*1182*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1184*/      OPC_Scope, 13, /*->1199*/ // 2 children in Scope
/*1186*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1189*/        OPC_EmitMergeInputChains1_0,
/*1190*/        OPC_MorphNodeTo, TARGET_VAL(SP::LDrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                // Dst: (LDrr:i64 ADDRrr:iPTR:$addr)
/*1199*/      /*Scope*/ 13, /*->1213*/
/*1200*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1203*/        OPC_EmitMergeInputChains1_0,
/*1204*/        OPC_MorphNodeTo, TARGET_VAL(SP::LDri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                // Dst: (LDri:i64 ADDRri:iPTR:$addr)
/*1213*/      0, /*End of Scope*/
/*1214*/    /*Scope*/ 38, /*->1253*/
/*1215*/      OPC_CheckPredicate, 7, // Predicate_sextload
/*1217*/      OPC_CheckPredicate, 21, // Predicate_sextloadi32
/*1219*/      OPC_CheckType, MVT::i64,
/*1221*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1223*/      OPC_Scope, 13, /*->1238*/ // 2 children in Scope
/*1225*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1228*/        OPC_EmitMergeInputChains1_0,
/*1229*/        OPC_MorphNodeTo, TARGET_VAL(SP::LDSWrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                // Dst: (LDSWrr:i64 ADDRrr:iPTR:$addr)
/*1238*/      /*Scope*/ 13, /*->1252*/
/*1239*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1242*/        OPC_EmitMergeInputChains1_0,
/*1243*/        OPC_MorphNodeTo, TARGET_VAL(SP::LDSWri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                // Dst: (LDSWri:i64 ADDRri:iPTR:$addr)
/*1252*/      0, /*End of Scope*/
/*1253*/    /*Scope*/ 68, /*->1322*/
/*1254*/      OPC_CheckPredicate, 13, // Predicate_load
/*1256*/      OPC_SwitchType /*2 cases */, 30,  MVT::f32,// ->1289
/*1259*/        OPC_Scope, 13, /*->1274*/ // 2 children in Scope
/*1261*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1264*/          OPC_EmitMergeInputChains1_0,
/*1265*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDFrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDFrr:f32 ADDRrr:iPTR:$addr)
/*1274*/        /*Scope*/ 13, /*->1288*/
/*1275*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1278*/          OPC_EmitMergeInputChains1_0,
/*1279*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDFri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDFri:f32 ADDRri:iPTR:$addr)
/*1288*/        0, /*End of Scope*/
              /*SwitchType*/ 30,  MVT::f64,// ->1321
/*1291*/        OPC_Scope, 13, /*->1306*/ // 2 children in Scope
/*1293*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1296*/          OPC_EmitMergeInputChains1_0,
/*1297*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDDFrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDDFrr:f64 ADDRrr:iPTR:$addr)
/*1306*/        /*Scope*/ 13, /*->1320*/
/*1307*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1310*/          OPC_EmitMergeInputChains1_0,
/*1311*/          OPC_MorphNodeTo, TARGET_VAL(SP::LDDFri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDDFri:f64 ADDRri:iPTR:$addr)
/*1320*/        0, /*End of Scope*/
              0, // EndSwitchType
/*1322*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::BRIND),// ->1356
/*1326*/    OPC_RecordNode,   // #0 = 'brind' chained node
/*1327*/    OPC_RecordChild1, // #1 = $ptr
/*1328*/    OPC_Scope, 12, /*->1342*/ // 2 children in Scope
/*1330*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$ptr #2 #3
/*1333*/      OPC_EmitMergeInputChains1_0,
/*1334*/      OPC_MorphNodeTo, TARGET_VAL(SP::BINDrr), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (brind ADDRrr:iPTR:$ptr) - Complexity = 12
              // Dst: (BINDrr ADDRrr:iPTR:$ptr)
/*1342*/    /*Scope*/ 12, /*->1355*/
/*1343*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$ptr #2 #3
/*1346*/      OPC_EmitMergeInputChains1_0,
/*1347*/      OPC_MorphNodeTo, TARGET_VAL(SP::BINDri), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (brind ADDRri:iPTR:$ptr) - Complexity = 12
              // Dst: (BINDri ADDRri:iPTR:$ptr)
/*1355*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 60,  TARGET_VAL(SPISD::CALL),// ->1419
/*1359*/    OPC_RecordNode,   // #0 = 'call' chained node
/*1360*/    OPC_CaptureGlueInput,
/*1361*/    OPC_RecordChild1, // #1 = $ptr
/*1362*/    OPC_Scope, 12, /*->1376*/ // 3 children in Scope
/*1364*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$ptr #2 #3
/*1367*/      OPC_EmitMergeInputChains1_0,
/*1368*/      OPC_MorphNodeTo, TARGET_VAL(SP::JMPLrr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (call ADDRrr:i32:$ptr) - Complexity = 12
              // Dst: (JMPLrr ADDRrr:i32:$ptr)
/*1376*/    /*Scope*/ 12, /*->1389*/
/*1377*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$ptr #2 #3
/*1380*/      OPC_EmitMergeInputChains1_0,
/*1381*/      OPC_MorphNodeTo, TARGET_VAL(SP::JMPLri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (call ADDRri:i32:$ptr) - Complexity = 12
              // Dst: (JMPLri ADDRri:i32:$ptr)
/*1389*/    /*Scope*/ 28, /*->1418*/
/*1390*/      OPC_MoveChild, 1,
/*1392*/      OPC_SwitchOpcode /*2 cases */, 9,  TARGET_VAL(ISD::TargetGlobalAddress),// ->1405
/*1396*/        OPC_MoveParent,
/*1397*/        OPC_EmitMergeInputChains1_0,
/*1398*/        OPC_MorphNodeTo, TARGET_VAL(SP::CALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (call (tglobaladdr:i32):$dst) - Complexity = 6
                // Dst: (CALL (tglobaladdr:i32):$dst)
              /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::TargetExternalSymbol),// ->1417
/*1408*/        OPC_MoveParent,
/*1409*/        OPC_EmitMergeInputChains1_0,
/*1410*/        OPC_MorphNodeTo, TARGET_VAL(SP::CALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (call (texternalsym:i32):$dst) - Complexity = 6
                // Dst: (CALL (texternalsym:i32):$dst)
              0, // EndSwitchOpcode
/*1418*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 67|128,1/*195*/,  TARGET_VAL(ISD::AND),// ->1618
/*1423*/    OPC_Scope, 48, /*->1473*/ // 4 children in Scope
/*1425*/      OPC_RecordChild0, // #0 = $b
/*1426*/      OPC_MoveChild, 1,
/*1428*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1431*/      OPC_RecordChild0, // #1 = $c
/*1432*/      OPC_MoveChild, 1,
/*1434*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1445*/      OPC_MoveParent,
/*1446*/      OPC_MoveParent,
/*1447*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->1459
/*1450*/        OPC_MorphNodeTo, TARGET_VAL(SP::ANDNrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 i32:i32:$b, (xor:i32 i32:i32:$c, -1:i32)) - Complexity = 11
                // Dst: (ANDNrr:i32 i32:i32:$b, i32:i32:$c)
              /*SwitchType*/ 11,  MVT::i64,// ->1472
/*1461*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1463*/        OPC_MorphNodeTo, TARGET_VAL(SP::ANDNrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 i64:i64:$a, (xor:i64 i64:i64:$b, -1:i64)) - Complexity = 11
                // Dst: (ANDNrr:i64 ?:i64:$a, ?:i64:$b)
              0, // EndSwitchType
/*1473*/    /*Scope*/ 48, /*->1522*/
/*1474*/      OPC_MoveChild, 0,
/*1476*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1479*/      OPC_RecordChild0, // #0 = $c
/*1480*/      OPC_MoveChild, 1,
/*1482*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1493*/      OPC_MoveParent,
/*1494*/      OPC_MoveParent,
/*1495*/      OPC_RecordChild1, // #1 = $b
/*1496*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->1508
/*1499*/        OPC_MorphNodeTo, TARGET_VAL(SP::ANDNrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (and:i32 (xor:i32 i32:i32:$c, -1:i32), i32:i32:$b) - Complexity = 11
                // Dst: (ANDNrr:i32 i32:i32:$b, i32:i32:$c)
              /*SwitchType*/ 11,  MVT::i64,// ->1521
/*1510*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1512*/        OPC_MorphNodeTo, TARGET_VAL(SP::ANDNrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (and:i64 (xor:i64 i64:i64:$b, -1:i64), i64:i64:$a) - Complexity = 11
                // Dst: (ANDNrr:i64 ?:i64:$a, ?:i64:$b)
              0, // EndSwitchType
/*1522*/    /*Scope*/ 23, /*->1546*/
/*1523*/      OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*1529*/      OPC_RecordChild0, // #0 = $val
/*1530*/      OPC_CheckType, MVT::i64,
/*1532*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1534*/      OPC_EmitInteger, MVT::i32, 0, 
/*1537*/      OPC_MorphNodeTo, TARGET_VAL(SP::SRLri), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (and:i64 i64:i64:$val, 4294967295:i64) - Complexity = 8
              // Dst: (SRLri:i64 ?:i64:$val, 0:i32)
/*1546*/    /*Scope*/ 70, /*->1617*/
/*1547*/      OPC_RecordChild0, // #0 = $b
/*1548*/      OPC_RecordChild1, // #1 = $c
/*1549*/      OPC_Scope, 39, /*->1590*/ // 3 children in Scope
/*1551*/        OPC_MoveChild, 1,
/*1553*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1556*/        OPC_CheckPredicate, 22, // Predicate_simm13
/*1558*/        OPC_MoveParent,
/*1559*/        OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->1573
/*1562*/          OPC_EmitConvertToTarget, 1,
/*1564*/          OPC_MorphNodeTo, TARGET_VAL(SP::ANDri), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (and:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                  // Dst: (ANDri:i32 i32:i32:$b, (imm:i32):$c)
                /*SwitchType*/ 14,  MVT::i64,// ->1589
/*1575*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1577*/          OPC_EmitNodeXForm, 0, 1, // as_i32imm
/*1580*/          OPC_MorphNodeTo, TARGET_VAL(SP::ANDri), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (and:i64 i64:i64:$a, (imm:i64)<<P:Predicate_simm13>>:$b) - Complexity = 7
                  // Dst: (ANDri:i64 ?:i64:$a, (as_i32imm:i32 ?:i64:$b))
                0, // EndSwitchType
/*1590*/      /*Scope*/ 11, /*->1602*/
/*1591*/        OPC_CheckType, MVT::i32,
/*1593*/        OPC_MorphNodeTo, TARGET_VAL(SP::ANDrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
                // Dst: (ANDrr:i32 i32:i32:$b, i32:i32:$c)
/*1602*/      /*Scope*/ 13, /*->1616*/
/*1603*/        OPC_CheckType, MVT::i64,
/*1605*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1607*/        OPC_MorphNodeTo, TARGET_VAL(SP::ANDrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
                // Dst: (ANDrr:i64 ?:i64:$a, ?:i64:$b)
/*1616*/      0, /*End of Scope*/
/*1617*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 43|128,1/*171*/,  TARGET_VAL(ISD::OR),// ->1793
/*1622*/    OPC_Scope, 48, /*->1672*/ // 3 children in Scope
/*1624*/      OPC_RecordChild0, // #0 = $b
/*1625*/      OPC_MoveChild, 1,
/*1627*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1630*/      OPC_RecordChild0, // #1 = $c
/*1631*/      OPC_MoveChild, 1,
/*1633*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1644*/      OPC_MoveParent,
/*1645*/      OPC_MoveParent,
/*1646*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->1658
/*1649*/        OPC_MorphNodeTo, TARGET_VAL(SP::ORNrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 i32:i32:$b, (xor:i32 i32:i32:$c, -1:i32)) - Complexity = 11
                // Dst: (ORNrr:i32 i32:i32:$b, i32:i32:$c)
              /*SwitchType*/ 11,  MVT::i64,// ->1671
/*1660*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1662*/        OPC_MorphNodeTo, TARGET_VAL(SP::ORNrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 i64:i64:$a, (xor:i64 i64:i64:$b, -1:i64)) - Complexity = 11
                // Dst: (ORNrr:i64 ?:i64:$a, ?:i64:$b)
              0, // EndSwitchType
/*1672*/    /*Scope*/ 48, /*->1721*/
/*1673*/      OPC_MoveChild, 0,
/*1675*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1678*/      OPC_RecordChild0, // #0 = $c
/*1679*/      OPC_MoveChild, 1,
/*1681*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1692*/      OPC_MoveParent,
/*1693*/      OPC_MoveParent,
/*1694*/      OPC_RecordChild1, // #1 = $b
/*1695*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->1707
/*1698*/        OPC_MorphNodeTo, TARGET_VAL(SP::ORNrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (or:i32 (xor:i32 i32:i32:$c, -1:i32), i32:i32:$b) - Complexity = 11
                // Dst: (ORNrr:i32 i32:i32:$b, i32:i32:$c)
              /*SwitchType*/ 11,  MVT::i64,// ->1720
/*1709*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1711*/        OPC_MorphNodeTo, TARGET_VAL(SP::ORNrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (or:i64 (xor:i64 i64:i64:$b, -1:i64), i64:i64:$a) - Complexity = 11
                // Dst: (ORNrr:i64 ?:i64:$a, ?:i64:$b)
              0, // EndSwitchType
/*1721*/    /*Scope*/ 70, /*->1792*/
/*1722*/      OPC_RecordChild0, // #0 = $b
/*1723*/      OPC_RecordChild1, // #1 = $c
/*1724*/      OPC_Scope, 39, /*->1765*/ // 3 children in Scope
/*1726*/        OPC_MoveChild, 1,
/*1728*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1731*/        OPC_CheckPredicate, 22, // Predicate_simm13
/*1733*/        OPC_MoveParent,
/*1734*/        OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->1748
/*1737*/          OPC_EmitConvertToTarget, 1,
/*1739*/          OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (or:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                  // Dst: (ORri:i32 i32:i32:$b, (imm:i32):$c)
                /*SwitchType*/ 14,  MVT::i64,// ->1764
/*1750*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1752*/          OPC_EmitNodeXForm, 0, 1, // as_i32imm
/*1755*/          OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (or:i64 i64:i64:$a, (imm:i64)<<P:Predicate_simm13>>:$b) - Complexity = 7
                  // Dst: (ORri:i64 ?:i64:$a, (as_i32imm:i32 ?:i64:$b))
                0, // EndSwitchType
/*1765*/      /*Scope*/ 11, /*->1777*/
/*1766*/        OPC_CheckType, MVT::i32,
/*1768*/        OPC_MorphNodeTo, TARGET_VAL(SP::ORrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
                // Dst: (ORrr:i32 i32:i32:$b, i32:i32:$c)
/*1777*/      /*Scope*/ 13, /*->1791*/
/*1778*/        OPC_CheckType, MVT::i64,
/*1780*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1782*/        OPC_MorphNodeTo, TARGET_VAL(SP::ORrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
                // Dst: (ORrr:i64 ?:i64:$a, ?:i64:$b)
/*1791*/      0, /*End of Scope*/
/*1792*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 119|128,1/*247*/,  TARGET_VAL(ISD::XOR),// ->2044
/*1797*/    OPC_Scope, 33, /*->1832*/ // 6 children in Scope
/*1799*/      OPC_MoveChild, 0,
/*1801*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1804*/      OPC_RecordChild0, // #0 = $b
/*1805*/      OPC_RecordChild1, // #1 = $c
/*1806*/      OPC_MoveParent,
/*1807*/      OPC_MoveChild, 1,
/*1809*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1820*/      OPC_MoveParent,
/*1821*/      OPC_CheckType, MVT::i32,
/*1823*/      OPC_MorphNodeTo, TARGET_VAL(SP::XNORrr), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i32 (xor:i32 i32:i32:$b, i32:i32:$c), -1:i32) - Complexity = 11
              // Dst: (XNORrr:i32 i32:i32:$b, i32:i32:$c)
/*1832*/    /*Scope*/ 35, /*->1868*/
/*1833*/      OPC_RecordChild0, // #0 = $a
/*1834*/      OPC_MoveChild, 1,
/*1836*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1839*/      OPC_RecordChild0, // #1 = $b
/*1840*/      OPC_MoveChild, 1,
/*1842*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1853*/      OPC_MoveParent,
/*1854*/      OPC_MoveParent,
/*1855*/      OPC_CheckType, MVT::i64,
/*1857*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1859*/      OPC_MorphNodeTo, TARGET_VAL(SP::XNORrr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i64 i64:i64:$a, (xor:i64 i64:i64:$b, -1:i64)) - Complexity = 11
              // Dst: (XNORrr:i64 ?:i64:$a, ?:i64:$b)
/*1868*/    /*Scope*/ 33, /*->1902*/
/*1869*/      OPC_MoveChild, 0,
/*1871*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1874*/      OPC_RecordChild0, // #0 = $b
/*1875*/      OPC_MoveChild, 1,
/*1877*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1888*/      OPC_MoveParent,
/*1889*/      OPC_MoveParent,
/*1890*/      OPC_RecordChild1, // #1 = $c
/*1891*/      OPC_CheckType, MVT::i32,
/*1893*/      OPC_MorphNodeTo, TARGET_VAL(SP::XNORrr), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i32 (xor:i32 i32:i32:$b, -1:i32), i32:i32:$c) - Complexity = 11
              // Dst: (XNORrr:i32 i32:i32:$b, i32:i32:$c)
/*1902*/    /*Scope*/ 33, /*->1936*/
/*1903*/      OPC_RecordChild0, // #0 = $c
/*1904*/      OPC_MoveChild, 1,
/*1906*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1909*/      OPC_RecordChild0, // #1 = $b
/*1910*/      OPC_MoveChild, 1,
/*1912*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1923*/      OPC_MoveParent,
/*1924*/      OPC_MoveParent,
/*1925*/      OPC_CheckType, MVT::i32,
/*1927*/      OPC_MorphNodeTo, TARGET_VAL(SP::XNORrr), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (xor:i32 i32:i32:$c, (xor:i32 i32:i32:$b, -1:i32)) - Complexity = 11
              // Dst: (XNORrr:i32 i32:i32:$b, i32:i32:$c)
/*1936*/    /*Scope*/ 35, /*->1972*/
/*1937*/      OPC_MoveChild, 0,
/*1939*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1942*/      OPC_RecordChild0, // #0 = $a
/*1943*/      OPC_MoveChild, 1,
/*1945*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1956*/      OPC_MoveParent,
/*1957*/      OPC_MoveParent,
/*1958*/      OPC_RecordChild1, // #1 = $b
/*1959*/      OPC_CheckType, MVT::i64,
/*1961*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1963*/      OPC_MorphNodeTo, TARGET_VAL(SP::XNORrr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i64 (xor:i64 i64:i64:$a, -1:i64), i64:i64:$b) - Complexity = 11
              // Dst: (XNORrr:i64 ?:i64:$a, ?:i64:$b)
/*1972*/    /*Scope*/ 70, /*->2043*/
/*1973*/      OPC_RecordChild0, // #0 = $b
/*1974*/      OPC_RecordChild1, // #1 = $c
/*1975*/      OPC_Scope, 39, /*->2016*/ // 3 children in Scope
/*1977*/        OPC_MoveChild, 1,
/*1979*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1982*/        OPC_CheckPredicate, 22, // Predicate_simm13
/*1984*/        OPC_MoveParent,
/*1985*/        OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->1999
/*1988*/          OPC_EmitConvertToTarget, 1,
/*1990*/          OPC_MorphNodeTo, TARGET_VAL(SP::XORri), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (xor:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                  // Dst: (XORri:i32 i32:i32:$b, (imm:i32):$c)
                /*SwitchType*/ 14,  MVT::i64,// ->2015
/*2001*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2003*/          OPC_EmitNodeXForm, 0, 1, // as_i32imm
/*2006*/          OPC_MorphNodeTo, TARGET_VAL(SP::XORri), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (xor:i64 i64:i64:$a, (imm:i64)<<P:Predicate_simm13>>:$b) - Complexity = 7
                  // Dst: (XORri:i64 ?:i64:$a, (as_i32imm:i32 ?:i64:$b))
                0, // EndSwitchType
/*2016*/      /*Scope*/ 11, /*->2028*/
/*2017*/        OPC_CheckType, MVT::i32,
/*2019*/        OPC_MorphNodeTo, TARGET_VAL(SP::XORrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
                // Dst: (XORrr:i32 i32:i32:$b, i32:i32:$c)
/*2028*/      /*Scope*/ 13, /*->2042*/
/*2029*/        OPC_CheckType, MVT::i64,
/*2031*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2033*/        OPC_MorphNodeTo, TARGET_VAL(SP::XORrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
                // Dst: (XORrr:i64 ?:i64:$a, ?:i64:$b)
/*2042*/      0, /*End of Scope*/
/*2043*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 55|128,1/*183*/,  TARGET_VAL(SPISD::SELECT_ICC),// ->2231
/*2048*/    OPC_CaptureGlueInput,
/*2049*/    OPC_RecordChild0, // #0 = $i
/*2050*/    OPC_Scope, 55, /*->2107*/ // 2 children in Scope
/*2052*/      OPC_MoveChild, 0,
/*2054*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2057*/      OPC_CheckPredicate, 23, // Predicate_simm11
/*2059*/      OPC_MoveParent,
/*2060*/      OPC_RecordChild1, // #1 = $f
/*2061*/      OPC_RecordChild2, // #2 = $cc
/*2062*/      OPC_MoveChild, 2,
/*2064*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2067*/      OPC_MoveParent,
/*2068*/      OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->2087
/*2071*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isV9())
/*2073*/        OPC_EmitConvertToTarget, 0,
/*2075*/        OPC_EmitConvertToTarget, 2,
/*2077*/        OPC_MorphNodeTo, TARGET_VAL(SP::MOVICCri), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                // Src: (SPselecticc:i32 (imm:i32)<<P:Predicate_simm11>>:$i, i32:i32:$f, (imm:i32):$cc) - Complexity = 10
                // Dst: (MOVICCri:i32 (imm:i32):$i, i32:i32:$f, (imm:i32):$cc)
              /*SwitchType*/ 17,  MVT::i64,// ->2106
/*2089*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2091*/        OPC_EmitNodeXForm, 0, 0, // as_i32imm
/*2094*/        OPC_EmitConvertToTarget, 2,
/*2096*/        OPC_MorphNodeTo, TARGET_VAL(SP::MOVICCri), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 1, 4, 
                // Src: (SPselecticc:i64 (imm:i64)<<P:Predicate_simm11>>:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 10
                // Dst: (MOVICCri:i64 (as_i32imm:i32 ?:i64:$t), ?:i64:$f, (imm:i32):$cond)
              0, // EndSwitchType
/*2107*/    /*Scope*/ 122, /*->2230*/
/*2108*/      OPC_RecordChild1, // #1 = $f
/*2109*/      OPC_RecordChild2, // #2 = $cc
/*2110*/      OPC_MoveChild, 2,
/*2112*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2115*/      OPC_MoveParent,
/*2116*/      OPC_SwitchType /*4 cases */, 30,  MVT::i32,// ->2149
/*2119*/        OPC_Scope, 14, /*->2135*/ // 2 children in Scope
/*2121*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isV9())
/*2123*/          OPC_EmitConvertToTarget, 2,
/*2125*/          OPC_MorphNodeTo, TARGET_VAL(SP::MOVICCrr), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselecticc:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cc) - Complexity = 6
                  // Dst: (MOVICCrr:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cc)
/*2135*/        /*Scope*/ 12, /*->2148*/
/*2136*/          OPC_EmitConvertToTarget, 2,
/*2138*/          OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_Int_ICC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselecticc:i32 i32:i32:$T, i32:i32:$F, (imm:i32):$Cond) - Complexity = 6
                  // Dst: (SELECT_CC_Int_ICC:i32 i32:i32:$T, i32:i32:$F, (imm:i32):$Cond)
/*2148*/        0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->2165
/*2151*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2153*/        OPC_EmitConvertToTarget, 2,
/*2155*/        OPC_MorphNodeTo, TARGET_VAL(SP::MOVICCrr), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 3, 
                // Src: (SPselecticc:i64 i64:i64:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 6
                // Dst: (MOVICCrr:i64 ?:i64:$t, ?:i64:$f, (imm:i32):$cond)
              /*SwitchType*/ 30,  MVT::f32,// ->2197
/*2167*/        OPC_Scope, 14, /*->2183*/ // 2 children in Scope
/*2169*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isV9())
/*2171*/          OPC_EmitConvertToTarget, 2,
/*2173*/          OPC_MorphNodeTo, TARGET_VAL(SP::FMOVS_ICC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselecticc:f32 f32:f32:$rs2, f32:f32:$f, (imm:i32):$cc) - Complexity = 6
                  // Dst: (FMOVS_ICC:f32 f32:f32:$rs2, f32:f32:$f, (imm:i32):$cc)
/*2183*/        /*Scope*/ 12, /*->2196*/
/*2184*/          OPC_EmitConvertToTarget, 2,
/*2186*/          OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_FP_ICC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselecticc:f32 f32:f32:$T, f32:f32:$F, (imm:i32):$Cond) - Complexity = 6
                  // Dst: (SELECT_CC_FP_ICC:f32 f32:f32:$T, f32:f32:$F, (imm:i32):$Cond)
/*2196*/        0, /*End of Scope*/
              /*SwitchType*/ 30,  MVT::f64,// ->2229
/*2199*/        OPC_Scope, 14, /*->2215*/ // 2 children in Scope
/*2201*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isV9())
/*2203*/          OPC_EmitConvertToTarget, 2,
/*2205*/          OPC_MorphNodeTo, TARGET_VAL(SP::FMOVD_ICC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselecticc:f64 f64:f64:$rs2, f64:f64:$f, (imm:i32):$cc) - Complexity = 6
                  // Dst: (FMOVD_ICC:f64 f64:f64:$rs2, f64:f64:$f, (imm:i32):$cc)
/*2215*/        /*Scope*/ 12, /*->2228*/
/*2216*/          OPC_EmitConvertToTarget, 2,
/*2218*/          OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_DFP_ICC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselecticc:f64 f64:f64:$T, f64:f64:$F, (imm:i32):$Cond) - Complexity = 6
                  // Dst: (SELECT_CC_DFP_ICC:f64 f64:f64:$T, f64:f64:$F, (imm:i32):$Cond)
/*2228*/        0, /*End of Scope*/
              0, // EndSwitchType
/*2230*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 55|128,1/*183*/,  TARGET_VAL(SPISD::SELECT_FCC),// ->2418
/*2235*/    OPC_CaptureGlueInput,
/*2236*/    OPC_RecordChild0, // #0 = $i
/*2237*/    OPC_Scope, 55, /*->2294*/ // 2 children in Scope
/*2239*/      OPC_MoveChild, 0,
/*2241*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2244*/      OPC_CheckPredicate, 23, // Predicate_simm11
/*2246*/      OPC_MoveParent,
/*2247*/      OPC_RecordChild1, // #1 = $f
/*2248*/      OPC_RecordChild2, // #2 = $cc
/*2249*/      OPC_MoveChild, 2,
/*2251*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2254*/      OPC_MoveParent,
/*2255*/      OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->2274
/*2258*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isV9())
/*2260*/        OPC_EmitConvertToTarget, 0,
/*2262*/        OPC_EmitConvertToTarget, 2,
/*2264*/        OPC_MorphNodeTo, TARGET_VAL(SP::MOVFCCri), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                // Src: (SPselectfcc:i32 (imm:i32)<<P:Predicate_simm11>>:$i, i32:i32:$f, (imm:i32):$cc) - Complexity = 10
                // Dst: (MOVFCCri:i32 (imm:i32):$i, i32:i32:$f, (imm:i32):$cc)
              /*SwitchType*/ 17,  MVT::i64,// ->2293
/*2276*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2278*/        OPC_EmitNodeXForm, 0, 0, // as_i32imm
/*2281*/        OPC_EmitConvertToTarget, 2,
/*2283*/        OPC_MorphNodeTo, TARGET_VAL(SP::MOVFCCri), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 1, 4, 
                // Src: (SPselectfcc:i64 (imm:i64)<<P:Predicate_simm11>>:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 10
                // Dst: (MOVFCCri:i64 (as_i32imm:i32 ?:i64:$t), ?:i64:$f, (imm:i32):$cond)
              0, // EndSwitchType
/*2294*/    /*Scope*/ 122, /*->2417*/
/*2295*/      OPC_RecordChild1, // #1 = $f
/*2296*/      OPC_RecordChild2, // #2 = $cc
/*2297*/      OPC_MoveChild, 2,
/*2299*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2302*/      OPC_MoveParent,
/*2303*/      OPC_SwitchType /*4 cases */, 30,  MVT::i32,// ->2336
/*2306*/        OPC_Scope, 14, /*->2322*/ // 2 children in Scope
/*2308*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isV9())
/*2310*/          OPC_EmitConvertToTarget, 2,
/*2312*/          OPC_MorphNodeTo, TARGET_VAL(SP::MOVFCCrr), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectfcc:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cc) - Complexity = 6
                  // Dst: (MOVFCCrr:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cc)
/*2322*/        /*Scope*/ 12, /*->2335*/
/*2323*/          OPC_EmitConvertToTarget, 2,
/*2325*/          OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_Int_FCC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectfcc:i32 i32:i32:$T, i32:i32:$F, (imm:i32):$Cond) - Complexity = 6
                  // Dst: (SELECT_CC_Int_FCC:i32 i32:i32:$T, i32:i32:$F, (imm:i32):$Cond)
/*2335*/        0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->2352
/*2338*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2340*/        OPC_EmitConvertToTarget, 2,
/*2342*/        OPC_MorphNodeTo, TARGET_VAL(SP::MOVFCCrr), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 3, 
                // Src: (SPselectfcc:i64 i64:i64:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 6
                // Dst: (MOVFCCrr:i64 ?:i64:$t, ?:i64:$f, (imm:i32):$cond)
              /*SwitchType*/ 30,  MVT::f32,// ->2384
/*2354*/        OPC_Scope, 14, /*->2370*/ // 2 children in Scope
/*2356*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isV9())
/*2358*/          OPC_EmitConvertToTarget, 2,
/*2360*/          OPC_MorphNodeTo, TARGET_VAL(SP::FMOVS_FCC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectfcc:f32 f32:f32:$rs2, f32:f32:$f, (imm:i32):$cc) - Complexity = 6
                  // Dst: (FMOVS_FCC:f32 f32:f32:$rs2, f32:f32:$f, (imm:i32):$cc)
/*2370*/        /*Scope*/ 12, /*->2383*/
/*2371*/          OPC_EmitConvertToTarget, 2,
/*2373*/          OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_FP_FCC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectfcc:f32 f32:f32:$T, f32:f32:$F, (imm:i32):$Cond) - Complexity = 6
                  // Dst: (SELECT_CC_FP_FCC:f32 f32:f32:$T, f32:f32:$F, (imm:i32):$Cond)
/*2383*/        0, /*End of Scope*/
              /*SwitchType*/ 30,  MVT::f64,// ->2416
/*2386*/        OPC_Scope, 14, /*->2402*/ // 2 children in Scope
/*2388*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isV9())
/*2390*/          OPC_EmitConvertToTarget, 2,
/*2392*/          OPC_MorphNodeTo, TARGET_VAL(SP::FMOVD_FCC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectfcc:f64 f64:f64:$rs2, f64:f64:$f, (imm:i32):$cc) - Complexity = 6
                  // Dst: (FMOVD_FCC:f64 f64:f64:$rs2, f64:f64:$f, (imm:i32):$cc)
/*2402*/        /*Scope*/ 12, /*->2415*/
/*2403*/          OPC_EmitConvertToTarget, 2,
/*2405*/          OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_DFP_FCC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectfcc:f64 f64:f64:$T, f64:f64:$F, (imm:i32):$Cond) - Complexity = 6
                  // Dst: (SELECT_CC_DFP_FCC:f64 f64:f64:$T, f64:f64:$F, (imm:i32):$Cond)
/*2415*/        0, /*End of Scope*/
              0, // EndSwitchType
/*2417*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 7|128,1/*135*/,  TARGET_VAL(SPISD::SELECT_XCC),// ->2557
/*2422*/    OPC_CaptureGlueInput,
/*2423*/    OPC_RecordChild0, // #0 = $i
/*2424*/    OPC_Scope, 55, /*->2481*/ // 2 children in Scope
/*2426*/      OPC_MoveChild, 0,
/*2428*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2431*/      OPC_CheckPredicate, 23, // Predicate_simm11
/*2433*/      OPC_MoveParent,
/*2434*/      OPC_RecordChild1, // #1 = $f
/*2435*/      OPC_RecordChild2, // #2 = $cond
/*2436*/      OPC_MoveChild, 2,
/*2438*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2441*/      OPC_MoveParent,
/*2442*/      OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->2461
/*2445*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2447*/        OPC_EmitConvertToTarget, 0,
/*2449*/        OPC_EmitConvertToTarget, 2,
/*2451*/        OPC_MorphNodeTo, TARGET_VAL(SP::MOVXCCri), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                // Src: (SPselectxcc:i32 (imm:i32)<<P:Predicate_simm11>>:$i, i32:i32:$f, (imm:i32):$cond) - Complexity = 10
                // Dst: (MOVXCCri:i32 (imm:i32):$i, i32:i32:$f, (imm:i32):$cond)
              /*SwitchType*/ 17,  MVT::i64,// ->2480
/*2463*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2465*/        OPC_EmitNodeXForm, 0, 0, // as_i32imm
/*2468*/        OPC_EmitConvertToTarget, 2,
/*2470*/        OPC_MorphNodeTo, TARGET_VAL(SP::MOVXCCri), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 1, 4, 
                // Src: (SPselectxcc:i64 (imm:i64)<<P:Predicate_simm11>>:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 10
                // Dst: (MOVXCCri:i64 (as_i32imm:i32 ?:i64:$t), ?:i64:$f, (imm:i32):$cond)
              0, // EndSwitchType
/*2481*/    /*Scope*/ 74, /*->2556*/
/*2482*/      OPC_RecordChild1, // #1 = $f
/*2483*/      OPC_RecordChild2, // #2 = $cond
/*2484*/      OPC_MoveChild, 2,
/*2486*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2489*/      OPC_MoveParent,
/*2490*/      OPC_SwitchType /*4 cases */, 14,  MVT::i32,// ->2507
/*2493*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2495*/        OPC_EmitConvertToTarget, 2,
/*2497*/        OPC_MorphNodeTo, TARGET_VAL(SP::MOVXCCrr), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                // Src: (SPselectxcc:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cond) - Complexity = 6
                // Dst: (MOVXCCrr:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cond)
              /*SwitchType*/ 14,  MVT::i64,// ->2523
/*2509*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2511*/        OPC_EmitConvertToTarget, 2,
/*2513*/        OPC_MorphNodeTo, TARGET_VAL(SP::MOVXCCrr), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 3, 
                // Src: (SPselectxcc:i64 i64:i64:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 6
                // Dst: (MOVXCCrr:i64 ?:i64:$t, ?:i64:$f, (imm:i32):$cond)
              /*SwitchType*/ 14,  MVT::f32,// ->2539
/*2525*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2527*/        OPC_EmitConvertToTarget, 2,
/*2529*/        OPC_MorphNodeTo, TARGET_VAL(SP::FMOVS_XCC), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                // Src: (SPselectxcc:f32 f32:f32:$rs2, f32:f32:$f, (imm:i32):$cond) - Complexity = 6
                // Dst: (FMOVS_XCC:f32 f32:f32:$rs2, f32:f32:$f, (imm:i32):$cond)
              /*SwitchType*/ 14,  MVT::f64,// ->2555
/*2541*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2543*/        OPC_EmitConvertToTarget, 2,
/*2545*/        OPC_MorphNodeTo, TARGET_VAL(SP::FMOVD_XCC), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                // Src: (SPselectxcc:f64 f64:f64:$rs2, f64:f64:$f, (imm:i32):$cond) - Complexity = 6
                // Dst: (FMOVD_XCC:f64 f64:f64:$rs2, f64:f64:$f, (imm:i32):$cond)
              0, // EndSwitchType
/*2556*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::CALLSEQ_END),// ->2585
/*2560*/    OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*2561*/    OPC_CaptureGlueInput,
/*2562*/    OPC_RecordChild1, // #1 = $amt1
/*2563*/    OPC_MoveChild, 1,
/*2565*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*2568*/    OPC_MoveParent,
/*2569*/    OPC_RecordChild2, // #2 = $amt2
/*2570*/    OPC_MoveChild, 2,
/*2572*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*2575*/    OPC_MoveParent,
/*2576*/    OPC_EmitMergeInputChains1_0,
/*2577*/    OPC_MorphNodeTo, TARGET_VAL(SP::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP (timm:i32):$amt1, (timm:i32):$amt2)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::FrameIndex),// ->2603
/*2588*/    OPC_RecordNode,   // #0 = $addr
/*2589*/    OPC_CheckType, MVT::iPTR,
/*2591*/    OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectADDRri:$addr #1 #2
/*2594*/    OPC_MorphNodeTo, TARGET_VAL(SP::LEA_ADDri), 0,
                1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 1, 2, 
            // Src: ADDRri:iPTR:$addr - Complexity = 9
            // Dst: (LEA_ADDri:iPTR ADDRri:iPTR:$addr)
          /*SwitchOpcode*/ 55|128,1/*183*/,  TARGET_VAL(ISD::ADD),// ->2790
/*2607*/    OPC_Scope, 53, /*->2662*/ // 3 children in Scope
/*2609*/      OPC_RecordChild0, // #0 = $r
/*2610*/      OPC_MoveChild, 1,
/*2612*/      OPC_CheckOpcode, TARGET_VAL(SPISD::Lo),
/*2615*/      OPC_RecordChild0, // #1 = $in
/*2616*/      OPC_MoveChild, 0,
/*2618*/      OPC_SwitchOpcode /*3 cases */, 11,  TARGET_VAL(ISD::TargetGlobalAddress),// ->2633
/*2622*/        OPC_MoveParent,
/*2623*/        OPC_MoveParent,
/*2624*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                    1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 0, 1, 
                // Src: (add:iPTR iPTR:iPTR:$r, (SPlo:iPTR (tglobaladdr:iPTR):$in)) - Complexity = 9
                // Dst: (ADDri:iPTR ?:iPTR:$r, (tglobaladdr:i32):$in)
              /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetConstantPool),// ->2647
/*2636*/        OPC_MoveParent,
/*2637*/        OPC_MoveParent,
/*2638*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                    1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 0, 1, 
                // Src: (add:iPTR iPTR:iPTR:$r, (SPlo:iPTR (tconstpool:iPTR):$in)) - Complexity = 9
                // Dst: (ADDri:iPTR ?:iPTR:$r, (tconstpool:i32):$in)
              /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetBlockAddress),// ->2661
/*2650*/        OPC_MoveParent,
/*2651*/        OPC_MoveParent,
/*2652*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                    1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 0, 1, 
                // Src: (add:iPTR iPTR:iPTR:$r, (SPlo:iPTR (tblockaddress:iPTR):$in)) - Complexity = 9
                // Dst: (ADDri:iPTR ?:iPTR:$r, (tblockaddress:i32):$in)
              0, // EndSwitchOpcode
/*2662*/    /*Scope*/ 55, /*->2718*/
/*2663*/      OPC_MoveChild, 0,
/*2665*/      OPC_CheckOpcode, TARGET_VAL(SPISD::Lo),
/*2668*/      OPC_RecordChild0, // #0 = $in
/*2669*/      OPC_MoveChild, 0,
/*2671*/      OPC_SwitchOpcode /*3 cases */, 12,  TARGET_VAL(ISD::TargetConstantPool),// ->2687
/*2675*/        OPC_MoveParent,
/*2676*/        OPC_MoveParent,
/*2677*/        OPC_RecordChild1, // #1 = $r
/*2678*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                    1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 1, 0, 
                // Src: (add:iPTR (SPlo:iPTR (tconstpool:iPTR):$in), iPTR:iPTR:$r) - Complexity = 9
                // Dst: (ADDri:iPTR ?:iPTR:$r, (tconstpool:i32):$in)
              /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetBlockAddress),// ->2702
/*2690*/        OPC_MoveParent,
/*2691*/        OPC_MoveParent,
/*2692*/        OPC_RecordChild1, // #1 = $r
/*2693*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                    1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 1, 0, 
                // Src: (add:iPTR (SPlo:iPTR (tblockaddress:iPTR):$in), iPTR:iPTR:$r) - Complexity = 9
                // Dst: (ADDri:iPTR ?:iPTR:$r, (tblockaddress:i32):$in)
              /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetGlobalAddress),// ->2717
/*2705*/        OPC_MoveParent,
/*2706*/        OPC_MoveParent,
/*2707*/        OPC_RecordChild1, // #1 = $r
/*2708*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                    1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 1, 0, 
                // Src: (add:iPTR (SPlo:iPTR (tglobaladdr:iPTR):$in), iPTR:iPTR:$r) - Complexity = 9
                // Dst: (ADDri:iPTR ?:iPTR:$r, (tglobaladdr:i32):$in)
              0, // EndSwitchOpcode
/*2718*/    /*Scope*/ 70, /*->2789*/
/*2719*/      OPC_RecordChild0, // #0 = $b
/*2720*/      OPC_RecordChild1, // #1 = $c
/*2721*/      OPC_Scope, 39, /*->2762*/ // 3 children in Scope
/*2723*/        OPC_MoveChild, 1,
/*2725*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2728*/        OPC_CheckPredicate, 22, // Predicate_simm13
/*2730*/        OPC_MoveParent,
/*2731*/        OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->2745
/*2734*/          OPC_EmitConvertToTarget, 1,
/*2736*/          OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                  // Dst: (ADDri:i32 i32:i32:$b, (imm:i32):$c)
                /*SwitchType*/ 14,  MVT::i64,// ->2761
/*2747*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2749*/          OPC_EmitNodeXForm, 0, 1, // as_i32imm
/*2752*/          OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i64 i64:i64:$a, (imm:i64)<<P:Predicate_simm13>>:$b) - Complexity = 7
                  // Dst: (ADDri:i64 ?:i64:$a, (as_i32imm:i32 ?:i64:$b))
                0, // EndSwitchType
/*2762*/      /*Scope*/ 11, /*->2774*/
/*2763*/        OPC_CheckType, MVT::i32,
/*2765*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
                // Dst: (ADDrr:i32 i32:i32:$b, i32:i32:$c)
/*2774*/      /*Scope*/ 13, /*->2788*/
/*2775*/        OPC_CheckType, MVT::i64,
/*2777*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2779*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (add:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
                // Dst: (ADDrr:i64 ?:i64:$a, ?:i64:$b)
/*2788*/      0, /*End of Scope*/
/*2789*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 21,  TARGET_VAL(SPISD::RET_FLAG),// ->2814
/*2793*/    OPC_RecordNode,   // #0 = 'retflag' chained node
/*2794*/    OPC_CaptureGlueInput,
/*2795*/    OPC_RecordChild1, // #1 = $val
/*2796*/    OPC_MoveChild, 1,
/*2798*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2801*/    OPC_CheckPredicate, 22, // Predicate_simm13
/*2803*/    OPC_MoveParent,
/*2804*/    OPC_EmitMergeInputChains1_0,
/*2805*/    OPC_EmitConvertToTarget, 1,
/*2807*/    OPC_MorphNodeTo, TARGET_VAL(SP::RETL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                0/*#VTs*/, 1/*#Ops*/, 2, 
            // Src: (retflag (imm:i32)<<P:Predicate_simm13>>:$val) - Complexity = 7
            // Dst: (RETL (imm:i32):$val)
          /*SwitchOpcode*/ 77,  TARGET_VAL(ISD::SHL),// ->2894
/*2817*/    OPC_RecordChild0, // #0 = $b
/*2818*/    OPC_RecordChild1, // #1 = $c
/*2819*/    OPC_Scope, 43, /*->2864*/ // 2 children in Scope
/*2821*/      OPC_MoveChild, 1,
/*2823*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2826*/      OPC_CheckType, MVT::i32,
/*2828*/      OPC_Scope, 16, /*->2846*/ // 2 children in Scope
/*2830*/        OPC_CheckPredicate, 22, // Predicate_simm13
/*2832*/        OPC_MoveParent,
/*2833*/        OPC_CheckType, MVT::i32,
/*2835*/        OPC_EmitConvertToTarget, 1,
/*2837*/        OPC_MorphNodeTo, TARGET_VAL(SP::SLLri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (shl:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                // Dst: (SLLri:i32 i32:i32:$b, (imm:i32):$c)
/*2846*/      /*Scope*/ 16, /*->2863*/
/*2847*/        OPC_MoveParent,
/*2848*/        OPC_CheckType, MVT::i64,
/*2850*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2852*/        OPC_EmitConvertToTarget, 1,
/*2854*/        OPC_MorphNodeTo, TARGET_VAL(SP::SLLXri), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (shl:i64 i64:i64:$rs, (imm:i32):$shcnt) - Complexity = 6
                // Dst: (SLLXri:i64 i64:i64:$rs, (imm:i32):$shcnt)
/*2863*/      0, /*End of Scope*/
/*2864*/    /*Scope*/ 28, /*->2893*/
/*2865*/      OPC_CheckChild1Type, MVT::i32,
/*2867*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->2879
/*2870*/        OPC_MorphNodeTo, TARGET_VAL(SP::SLLrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
                // Dst: (SLLrr:i32 i32:i32:$b, i32:i32:$c)
              /*SwitchType*/ 11,  MVT::i64,// ->2892
/*2881*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2883*/        OPC_MorphNodeTo, TARGET_VAL(SP::SLLXrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i64 i64:i64:$rs, i32:i32:$rs2) - Complexity = 3
                // Dst: (SLLXrr:i64 i64:i64:$rs, i32:i32:$rs2)
              0, // EndSwitchType
/*2893*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 77,  TARGET_VAL(ISD::SRL),// ->2974
/*2897*/    OPC_RecordChild0, // #0 = $b
/*2898*/    OPC_RecordChild1, // #1 = $c
/*2899*/    OPC_Scope, 43, /*->2944*/ // 2 children in Scope
/*2901*/      OPC_MoveChild, 1,
/*2903*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2906*/      OPC_CheckType, MVT::i32,
/*2908*/      OPC_Scope, 16, /*->2926*/ // 2 children in Scope
/*2910*/        OPC_CheckPredicate, 22, // Predicate_simm13
/*2912*/        OPC_MoveParent,
/*2913*/        OPC_CheckType, MVT::i32,
/*2915*/        OPC_EmitConvertToTarget, 1,
/*2917*/        OPC_MorphNodeTo, TARGET_VAL(SP::SRLri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (srl:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                // Dst: (SRLri:i32 i32:i32:$b, (imm:i32):$c)
/*2926*/      /*Scope*/ 16, /*->2943*/
/*2927*/        OPC_MoveParent,
/*2928*/        OPC_CheckType, MVT::i64,
/*2930*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2932*/        OPC_EmitConvertToTarget, 1,
/*2934*/        OPC_MorphNodeTo, TARGET_VAL(SP::SRLXri), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (srl:i64 i64:i64:$rs, (imm:i32):$shcnt) - Complexity = 6
                // Dst: (SRLXri:i64 i64:i64:$rs, (imm:i32):$shcnt)
/*2943*/      0, /*End of Scope*/
/*2944*/    /*Scope*/ 28, /*->2973*/
/*2945*/      OPC_CheckChild1Type, MVT::i32,
/*2947*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->2959
/*2950*/        OPC_MorphNodeTo, TARGET_VAL(SP::SRLrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
                // Dst: (SRLrr:i32 i32:i32:$b, i32:i32:$c)
              /*SwitchType*/ 11,  MVT::i64,// ->2972
/*2961*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2963*/        OPC_MorphNodeTo, TARGET_VAL(SP::SRLXrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i64 i64:i64:$rs, i32:i32:$rs2) - Complexity = 3
                // Dst: (SRLXrr:i64 i64:i64:$rs, i32:i32:$rs2)
              0, // EndSwitchType
/*2973*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 77,  TARGET_VAL(ISD::SRA),// ->3054
/*2977*/    OPC_RecordChild0, // #0 = $b
/*2978*/    OPC_RecordChild1, // #1 = $c
/*2979*/    OPC_Scope, 43, /*->3024*/ // 2 children in Scope
/*2981*/      OPC_MoveChild, 1,
/*2983*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2986*/      OPC_CheckType, MVT::i32,
/*2988*/      OPC_Scope, 16, /*->3006*/ // 2 children in Scope
/*2990*/        OPC_CheckPredicate, 22, // Predicate_simm13
/*2992*/        OPC_MoveParent,
/*2993*/        OPC_CheckType, MVT::i32,
/*2995*/        OPC_EmitConvertToTarget, 1,
/*2997*/        OPC_MorphNodeTo, TARGET_VAL(SP::SRAri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                // Dst: (SRAri:i32 i32:i32:$b, (imm:i32):$c)
/*3006*/      /*Scope*/ 16, /*->3023*/
/*3007*/        OPC_MoveParent,
/*3008*/        OPC_CheckType, MVT::i64,
/*3010*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3012*/        OPC_EmitConvertToTarget, 1,
/*3014*/        OPC_MorphNodeTo, TARGET_VAL(SP::SRAXri), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i64 i64:i64:$rs, (imm:i32):$shcnt) - Complexity = 6
                // Dst: (SRAXri:i64 i64:i64:$rs, (imm:i32):$shcnt)
/*3023*/      0, /*End of Scope*/
/*3024*/    /*Scope*/ 28, /*->3053*/
/*3025*/      OPC_CheckChild1Type, MVT::i32,
/*3027*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->3039
/*3030*/        OPC_MorphNodeTo, TARGET_VAL(SP::SRArr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
                // Dst: (SRArr:i32 i32:i32:$b, i32:i32:$c)
              /*SwitchType*/ 11,  MVT::i64,// ->3052
/*3041*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3043*/        OPC_MorphNodeTo, TARGET_VAL(SP::SRAXrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i64 i64:i64:$rs, i32:i32:$rs2) - Complexity = 3
                // Dst: (SRAXrr:i64 i64:i64:$rs, i32:i32:$rs2)
              0, // EndSwitchType
/*3053*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 52,  TARGET_VAL(ISD::ADDC),// ->3109
/*3057*/    OPC_RecordChild0, // #0 = $b
/*3058*/    OPC_RecordChild1, // #1 = $c
/*3059*/    OPC_Scope, 21, /*->3082*/ // 3 children in Scope
/*3061*/      OPC_MoveChild, 1,
/*3063*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3066*/      OPC_CheckPredicate, 22, // Predicate_simm13
/*3068*/      OPC_MoveParent,
/*3069*/      OPC_CheckType, MVT::i32,
/*3071*/      OPC_EmitConvertToTarget, 1,
/*3073*/      OPC_MorphNodeTo, TARGET_VAL(SP::ADDCCri), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (addc:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
              // Dst: (ADDCCri:i32 i32:i32:$b, (imm:i32):$c)
/*3082*/    /*Scope*/ 11, /*->3094*/
/*3083*/      OPC_CheckType, MVT::i32,
/*3085*/      OPC_MorphNodeTo, TARGET_VAL(SP::ADDCCrr), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
              // Dst: (ADDCCrr:i32 i32:i32:$b, i32:i32:$c)
/*3094*/    /*Scope*/ 13, /*->3108*/
/*3095*/      OPC_CheckType, MVT::i64,
/*3097*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3099*/      OPC_MorphNodeTo, TARGET_VAL(SP::ADDCCrr), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
              // Dst: (ADDCCrr:i64 ?:i64:$a, ?:i64:$b)
/*3108*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 53,  TARGET_VAL(ISD::ADDE),// ->3165
/*3112*/    OPC_CaptureGlueInput,
/*3113*/    OPC_RecordChild0, // #0 = $b
/*3114*/    OPC_RecordChild1, // #1 = $c
/*3115*/    OPC_Scope, 21, /*->3138*/ // 3 children in Scope
/*3117*/      OPC_MoveChild, 1,
/*3119*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3122*/      OPC_CheckPredicate, 22, // Predicate_simm13
/*3124*/      OPC_MoveParent,
/*3125*/      OPC_CheckType, MVT::i32,
/*3127*/      OPC_EmitConvertToTarget, 1,
/*3129*/      OPC_MorphNodeTo, TARGET_VAL(SP::ADDXri), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (adde:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
              // Dst: (ADDXri:i32 i32:i32:$b, (imm:i32):$c)
/*3138*/    /*Scope*/ 11, /*->3150*/
/*3139*/      OPC_CheckType, MVT::i32,
/*3141*/      OPC_MorphNodeTo, TARGET_VAL(SP::ADDXrr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (adde:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
              // Dst: (ADDXrr:i32 i32:i32:$b, i32:i32:$c)
/*3150*/    /*Scope*/ 13, /*->3164*/
/*3151*/      OPC_CheckType, MVT::i64,
/*3153*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3155*/      OPC_MorphNodeTo, TARGET_VAL(SP::ADDXrr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (adde:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
              // Dst: (ADDXrr:i64 ?:i64:$a, ?:i64:$b)
/*3164*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 70,  TARGET_VAL(ISD::SUB),// ->3238
/*3168*/    OPC_RecordChild0, // #0 = $b
/*3169*/    OPC_RecordChild1, // #1 = $c
/*3170*/    OPC_Scope, 39, /*->3211*/ // 3 children in Scope
/*3172*/      OPC_MoveChild, 1,
/*3174*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3177*/      OPC_CheckPredicate, 22, // Predicate_simm13
/*3179*/      OPC_MoveParent,
/*3180*/      OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->3194
/*3183*/        OPC_EmitConvertToTarget, 1,
/*3185*/        OPC_MorphNodeTo, TARGET_VAL(SP::SUBri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sub:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                // Dst: (SUBri:i32 i32:i32:$b, (imm:i32):$c)
              /*SwitchType*/ 14,  MVT::i64,// ->3210
/*3196*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3198*/        OPC_EmitNodeXForm, 0, 1, // as_i32imm
/*3201*/        OPC_MorphNodeTo, TARGET_VAL(SP::SUBri), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (sub:i64 i64:i64:$a, (imm:i64)<<P:Predicate_simm13>>:$b) - Complexity = 7
                // Dst: (SUBri:i64 ?:i64:$a, (as_i32imm:i32 ?:i64:$b))
              0, // EndSwitchType
/*3211*/    /*Scope*/ 11, /*->3223*/
/*3212*/      OPC_CheckType, MVT::i32,
/*3214*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBrr), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sub:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
              // Dst: (SUBrr:i32 i32:i32:$b, i32:i32:$c)
/*3223*/    /*Scope*/ 13, /*->3237*/
/*3224*/      OPC_CheckType, MVT::i64,
/*3226*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3228*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBrr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sub:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
              // Dst: (SUBrr:i64 ?:i64:$a, ?:i64:$b)
/*3237*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 53,  TARGET_VAL(ISD::SUBE),// ->3294
/*3241*/    OPC_CaptureGlueInput,
/*3242*/    OPC_RecordChild0, // #0 = $b
/*3243*/    OPC_RecordChild1, // #1 = $c
/*3244*/    OPC_Scope, 21, /*->3267*/ // 3 children in Scope
/*3246*/      OPC_MoveChild, 1,
/*3248*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3251*/      OPC_CheckPredicate, 22, // Predicate_simm13
/*3253*/      OPC_MoveParent,
/*3254*/      OPC_CheckType, MVT::i32,
/*3256*/      OPC_EmitConvertToTarget, 1,
/*3258*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBXri), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (sube:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
              // Dst: (SUBXri:i32 i32:i32:$b, (imm:i32):$c)
/*3267*/    /*Scope*/ 11, /*->3279*/
/*3268*/      OPC_CheckType, MVT::i32,
/*3270*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBXrr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sube:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
              // Dst: (SUBXrr:i32 i32:i32:$b, i32:i32:$c)
/*3279*/    /*Scope*/ 13, /*->3293*/
/*3280*/      OPC_CheckType, MVT::i64,
/*3282*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3284*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBXrr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sube:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
              // Dst: (SUBXrr:i64 ?:i64:$a, ?:i64:$b)
/*3293*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 52,  TARGET_VAL(ISD::SUBC),// ->3349
/*3297*/    OPC_RecordChild0, // #0 = $b
/*3298*/    OPC_RecordChild1, // #1 = $c
/*3299*/    OPC_Scope, 21, /*->3322*/ // 3 children in Scope
/*3301*/      OPC_MoveChild, 1,
/*3303*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3306*/      OPC_CheckPredicate, 22, // Predicate_simm13
/*3308*/      OPC_MoveParent,
/*3309*/      OPC_CheckType, MVT::i32,
/*3311*/      OPC_EmitConvertToTarget, 1,
/*3313*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBCCri), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (subc:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
              // Dst: (SUBCCri:i32 i32:i32:$b, (imm:i32):$c)
/*3322*/    /*Scope*/ 11, /*->3334*/
/*3323*/      OPC_CheckType, MVT::i32,
/*3325*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBCCrr), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (subc:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
              // Dst: (SUBCCrr:i32 i32:i32:$b, i32:i32:$c)
/*3334*/    /*Scope*/ 13, /*->3348*/
/*3335*/      OPC_CheckType, MVT::i64,
/*3337*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3339*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBCCrr), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (subc:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
              // Dst: (SUBCCrr:i64 ?:i64:$a, ?:i64:$b)
/*3348*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 69,  TARGET_VAL(ISD::MUL),// ->3421
/*3352*/    OPC_RecordChild0, // #0 = $b
/*3353*/    OPC_RecordChild1, // #1 = $c
/*3354*/    OPC_Scope, 38, /*->3394*/ // 3 children in Scope
/*3356*/      OPC_MoveChild, 1,
/*3358*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3361*/      OPC_CheckPredicate, 22, // Predicate_simm13
/*3363*/      OPC_MoveParent,
/*3364*/      OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->3378
/*3367*/        OPC_EmitConvertToTarget, 1,
/*3369*/        OPC_MorphNodeTo, TARGET_VAL(SP::SMULri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (mul:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                // Dst: (SMULri:i32 i32:i32:$b, (imm:i32):$c)
              /*SwitchType*/ 13,  MVT::i64,// ->3393
/*3380*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3382*/        OPC_EmitConvertToTarget, 1,
/*3384*/        OPC_MorphNodeTo, TARGET_VAL(SP::MULXri), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (mul:i64 i64:i64:$rs1, (imm:i64)<<P:Predicate_simm13>>:$i) - Complexity = 7
                // Dst: (MULXri:i64 i64:i64:$rs1, (imm:i64):$i)
              0, // EndSwitchType
/*3394*/    /*Scope*/ 11, /*->3406*/
/*3395*/      OPC_CheckType, MVT::i32,
/*3397*/      OPC_MorphNodeTo, TARGET_VAL(SP::SMULrr), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
              // Dst: (SMULrr:i32 i32:i32:$b, i32:i32:$c)
/*3406*/    /*Scope*/ 13, /*->3420*/
/*3407*/      OPC_CheckType, MVT::i64,
/*3409*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3411*/      OPC_MorphNodeTo, TARGET_VAL(SP::MULXrr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i64 i64:i64:$rs1, i64:i64:$rs2) - Complexity = 3
              // Dst: (MULXrr:i64 i64:i64:$rs1, i64:i64:$rs2)
/*3420*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(ISD::SDIV),// ->3466
/*3424*/    OPC_RecordChild0, // #0 = $rs1
/*3425*/    OPC_RecordChild1, // #1 = $i
/*3426*/    OPC_Scope, 23, /*->3451*/ // 2 children in Scope
/*3428*/      OPC_MoveChild, 1,
/*3430*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3433*/      OPC_CheckPredicate, 22, // Predicate_simm13
/*3435*/      OPC_MoveParent,
/*3436*/      OPC_CheckType, MVT::i64,
/*3438*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3440*/      OPC_EmitConvertToTarget, 1,
/*3442*/      OPC_MorphNodeTo, TARGET_VAL(SP::SDIVXri), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
              // Src: (sdiv:i64 i64:i64:$rs1, (imm:i64)<<P:Predicate_simm13>>:$i) - Complexity = 7
              // Dst: (SDIVXri:i64 i64:i64:$rs1, (imm:i64):$i)
/*3451*/    /*Scope*/ 13, /*->3465*/
/*3452*/      OPC_CheckType, MVT::i64,
/*3454*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3456*/      OPC_MorphNodeTo, TARGET_VAL(SP::SDIVXrr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sdiv:i64 i64:i64:$rs1, i64:i64:$rs2) - Complexity = 3
              // Dst: (SDIVXrr:i64 i64:i64:$rs1, i64:i64:$rs2)
/*3465*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(ISD::UDIV),// ->3511
/*3469*/    OPC_RecordChild0, // #0 = $rs1
/*3470*/    OPC_RecordChild1, // #1 = $i
/*3471*/    OPC_Scope, 23, /*->3496*/ // 2 children in Scope
/*3473*/      OPC_MoveChild, 1,
/*3475*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3478*/      OPC_CheckPredicate, 22, // Predicate_simm13
/*3480*/      OPC_MoveParent,
/*3481*/      OPC_CheckType, MVT::i64,
/*3483*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3485*/      OPC_EmitConvertToTarget, 1,
/*3487*/      OPC_MorphNodeTo, TARGET_VAL(SP::UDIVXri), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
              // Src: (udiv:i64 i64:i64:$rs1, (imm:i64)<<P:Predicate_simm13>>:$i) - Complexity = 7
              // Dst: (UDIVXri:i64 i64:i64:$rs1, (imm:i64):$i)
/*3496*/    /*Scope*/ 13, /*->3510*/
/*3497*/      OPC_CheckType, MVT::i64,
/*3499*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3501*/      OPC_MorphNodeTo, TARGET_VAL(SP::UDIVXrr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (udiv:i64 i64:i64:$rs1, i64:i64:$rs2) - Complexity = 3
              // Dst: (UDIVXrr:i64 i64:i64:$rs1, i64:i64:$rs2)
/*3510*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 53,  TARGET_VAL(ISD::FMUL),// ->3567
/*3514*/    OPC_Scope, 23, /*->3539*/ // 2 children in Scope
/*3516*/      OPC_MoveChild, 0,
/*3518*/      OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*3521*/      OPC_RecordChild0, // #0 = $src1
/*3522*/      OPC_MoveParent,
/*3523*/      OPC_MoveChild, 1,
/*3525*/      OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*3528*/      OPC_RecordChild0, // #1 = $src2
/*3529*/      OPC_MoveParent,
/*3530*/      OPC_MorphNodeTo, TARGET_VAL(SP::FSMULD), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f64 (fextend:f64 f32:f32:$src1), (fextend:f64 f32:f32:$src2)) - Complexity = 9
              // Dst: (FSMULD:f64 f32:f32:$src1, f32:f32:$src2)
/*3539*/    /*Scope*/ 26, /*->3566*/
/*3540*/      OPC_RecordChild0, // #0 = $src1
/*3541*/      OPC_RecordChild1, // #1 = $src2
/*3542*/      OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->3554
/*3545*/        OPC_MorphNodeTo, TARGET_VAL(SP::FMULS), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f32 f32:f32:$src1, f32:f32:$src2) - Complexity = 3
                // Dst: (FMULS:f32 f32:f32:$src1, f32:f32:$src2)
              /*SwitchType*/ 9,  MVT::f64,// ->3565
/*3556*/        OPC_MorphNodeTo, TARGET_VAL(SP::FMULD), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f64 f64:f64:$src1, f64:f64:$src2) - Complexity = 3
                // Dst: (FMULD:f64 f64:f64:$src1, f64:f64:$src2)
              0, // EndSwitchType
/*3566*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 76,  TARGET_VAL(SPISD::CMPICC),// ->3646
/*3570*/    OPC_RecordChild0, // #0 = $b
/*3571*/    OPC_Scope, 33, /*->3606*/ // 2 children in Scope
/*3573*/      OPC_CheckChild0Type, MVT::i32,
/*3575*/      OPC_RecordChild1, // #1 = $c
/*3576*/      OPC_Scope, 18, /*->3596*/ // 2 children in Scope
/*3578*/        OPC_MoveChild, 1,
/*3580*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3583*/        OPC_CheckPredicate, 22, // Predicate_simm13
/*3585*/        OPC_MoveParent,
/*3586*/        OPC_EmitConvertToTarget, 1,
/*3588*/        OPC_MorphNodeTo, TARGET_VAL(SP::CMPri), 0|OPFL_GlueOutput,
                    0/*#VTs*/, 2/*#Ops*/, 0, 2, 
                // Src: (SPcmpicc i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                // Dst: (CMPri i32:i32:$b, (imm:i32):$c)
/*3596*/      /*Scope*/ 8, /*->3605*/
/*3597*/        OPC_MorphNodeTo, TARGET_VAL(SP::CMPrr), 0|OPFL_GlueOutput,
                    0/*#VTs*/, 2/*#Ops*/, 0, 1, 
                // Src: (SPcmpicc i32:i32:$b, i32:i32:$c) - Complexity = 3
                // Dst: (CMPrr i32:i32:$b, i32:i32:$c)
/*3605*/      0, /*End of Scope*/
/*3606*/    /*Scope*/ 38, /*->3645*/
/*3607*/      OPC_CheckChild0Type, MVT::i64,
/*3609*/      OPC_RecordChild1, // #1 = $b
/*3610*/      OPC_Scope, 21, /*->3633*/ // 2 children in Scope
/*3612*/        OPC_MoveChild, 1,
/*3614*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3617*/        OPC_CheckPredicate, 22, // Predicate_simm13
/*3619*/        OPC_MoveParent,
/*3620*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3622*/        OPC_EmitNodeXForm, 0, 1, // as_i32imm
/*3625*/        OPC_MorphNodeTo, TARGET_VAL(SP::CMPri), 0|OPFL_GlueOutput,
                    0/*#VTs*/, 2/*#Ops*/, 0, 2, 
                // Src: (SPcmpicc i64:i64:$a, (imm:i64)<<P:Predicate_simm13>>:$b) - Complexity = 7
                // Dst: (CMPri ?:i64:$a, (as_i32imm:i32 ?:i64:$b))
/*3633*/      /*Scope*/ 10, /*->3644*/
/*3634*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3636*/        OPC_MorphNodeTo, TARGET_VAL(SP::CMPrr), 0|OPFL_GlueOutput,
                    0/*#VTs*/, 2/*#Ops*/, 0, 1, 
                // Src: (SPcmpicc i64:i64:$a, i64:i64:$b) - Complexity = 3
                // Dst: (CMPrr ?:i64:$a, ?:i64:$b)
/*3644*/      0, /*End of Scope*/
/*3645*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::CALLSEQ_START),// ->3665
/*3649*/    OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*3650*/    OPC_RecordChild1, // #1 = $amt
/*3651*/    OPC_MoveChild, 1,
/*3653*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*3656*/    OPC_MoveParent,
/*3657*/    OPC_EmitMergeInputChains1_0,
/*3658*/    OPC_MorphNodeTo, TARGET_VAL(SP::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN (timm:i32):$amt)
          /*SwitchOpcode*/ 27,  TARGET_VAL(SPISD::BRICC),// ->3695
/*3668*/    OPC_RecordNode,   // #0 = 'SPbricc' chained node
/*3669*/    OPC_CaptureGlueInput,
/*3670*/    OPC_RecordChild1, // #1 = $dst
/*3671*/    OPC_MoveChild, 1,
/*3673*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3676*/    OPC_MoveParent,
/*3677*/    OPC_RecordChild2, // #2 = $cc
/*3678*/    OPC_MoveChild, 2,
/*3680*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3683*/    OPC_MoveParent,
/*3684*/    OPC_EmitMergeInputChains1_0,
/*3685*/    OPC_EmitConvertToTarget, 2,
/*3687*/    OPC_MorphNodeTo, TARGET_VAL(SP::BCOND), 0|OPFL_Chain|OPFL_GlueInput,
                0/*#VTs*/, 2/*#Ops*/, 1, 3, 
            // Src: (SPbricc (bb:Other):$dst, (imm:i32):$cc) - Complexity = 6
            // Dst: (BCOND (bb:Other):$dst, (imm:i32):$cc)
          /*SwitchOpcode*/ 27,  TARGET_VAL(SPISD::BRFCC),// ->3725
/*3698*/    OPC_RecordNode,   // #0 = 'SPbrfcc' chained node
/*3699*/    OPC_CaptureGlueInput,
/*3700*/    OPC_RecordChild1, // #1 = $dst
/*3701*/    OPC_MoveChild, 1,
/*3703*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3706*/    OPC_MoveParent,
/*3707*/    OPC_RecordChild2, // #2 = $cc
/*3708*/    OPC_MoveChild, 2,
/*3710*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3713*/    OPC_MoveParent,
/*3714*/    OPC_EmitMergeInputChains1_0,
/*3715*/    OPC_EmitConvertToTarget, 2,
/*3717*/    OPC_MorphNodeTo, TARGET_VAL(SP::FBCOND), 0|OPFL_Chain|OPFL_GlueInput,
                0/*#VTs*/, 2/*#Ops*/, 1, 3, 
            // Src: (SPbrfcc (bb:Other):$dst, (imm:i32):$cc) - Complexity = 6
            // Dst: (FBCOND (bb:Other):$dst, (imm:i32):$cc)
          /*SwitchOpcode*/ 41,  TARGET_VAL(SPISD::Hi),// ->3769
/*3728*/    OPC_RecordChild0, // #0 = $in
/*3729*/    OPC_MoveChild, 0,
/*3731*/    OPC_SwitchOpcode /*3 cases */, 9,  TARGET_VAL(ISD::TargetGlobalAddress),// ->3744
/*3735*/      OPC_MoveParent,
/*3736*/      OPC_MorphNodeTo, TARGET_VAL(SP::SETHIi), 0,
                  1/*#VTs*/, MVT::iPTR, 1/*#Ops*/, 0, 
              // Src: (SPhi:iPTR (tglobaladdr:iPTR):$in) - Complexity = 6
              // Dst: (SETHIi:iPTR (tglobaladdr:i32):$in)
            /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::TargetConstantPool),// ->3756
/*3747*/      OPC_MoveParent,
/*3748*/      OPC_MorphNodeTo, TARGET_VAL(SP::SETHIi), 0,
                  1/*#VTs*/, MVT::iPTR, 1/*#Ops*/, 0, 
              // Src: (SPhi:iPTR (tconstpool:iPTR):$in) - Complexity = 6
              // Dst: (SETHIi:iPTR (tconstpool:i32):$in)
            /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::TargetBlockAddress),// ->3768
/*3759*/      OPC_MoveParent,
/*3760*/      OPC_MorphNodeTo, TARGET_VAL(SP::SETHIi), 0,
                  1/*#VTs*/, MVT::iPTR, 1/*#Ops*/, 0, 
              // Src: (SPhi:iPTR (tblockaddress:iPTR):$in) - Complexity = 6
              // Dst: (SETHIi:iPTR (tblockaddress:i32):$in)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 53,  TARGET_VAL(SPISD::Lo),// ->3825
/*3772*/    OPC_RecordChild0, // #0 = $in
/*3773*/    OPC_MoveChild, 0,
/*3775*/    OPC_SwitchOpcode /*3 cases */, 13,  TARGET_VAL(ISD::TargetGlobalAddress),// ->3792
/*3779*/      OPC_MoveParent,
/*3780*/      OPC_EmitRegister, MVT::i32, SP::G0,
/*3783*/      OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                  1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 1, 0, 
              // Src: (SPlo:iPTR (tglobaladdr:iPTR):$in) - Complexity = 6
              // Dst: (ORri:iPTR G0:i32, (tglobaladdr:i32):$in)
            /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetConstantPool),// ->3808
/*3795*/      OPC_MoveParent,
/*3796*/      OPC_EmitRegister, MVT::i32, SP::G0,
/*3799*/      OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                  1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 1, 0, 
              // Src: (SPlo:iPTR (tconstpool:iPTR):$in) - Complexity = 6
              // Dst: (ORri:iPTR G0:i32, (tconstpool:i32):$in)
            /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetBlockAddress),// ->3824
/*3811*/      OPC_MoveParent,
/*3812*/      OPC_EmitRegister, MVT::i32, SP::G0,
/*3815*/      OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                  1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 1, 0, 
              // Src: (SPlo:iPTR (tblockaddress:iPTR):$in) - Complexity = 6
              // Dst: (ORri:iPTR G0:i32, (tblockaddress:i32):$in)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 109|128,1/*237*/,  TARGET_VAL(ISD::Constant),// ->4066
/*3829*/    OPC_RecordNode,   // #0 = $src
/*3830*/    OPC_Scope, 17, /*->3849*/ // 7 children in Scope
/*3832*/      OPC_CheckPredicate, 24, // Predicate_SETHIimm
/*3834*/      OPC_CheckType, MVT::i32,
/*3836*/      OPC_EmitConvertToTarget, 0,
/*3838*/      OPC_EmitNodeXForm, 1, 1, // HI22
/*3841*/      OPC_MorphNodeTo, TARGET_VAL(SP::SETHIi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (imm:i32)<<P:Predicate_SETHIimm>><<X:HI22>>:$src - Complexity = 4
              // Dst: (SETHIi:i32 (HI22:i32 (imm:i32):$src))
/*3849*/    /*Scope*/ 37, /*->3887*/
/*3850*/      OPC_CheckPredicate, 22, // Predicate_simm13
/*3852*/      OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->3869
/*3855*/        OPC_EmitRegister, MVT::i32, SP::G0,
/*3858*/        OPC_EmitConvertToTarget, 0,
/*3860*/        OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (imm:i32)<<P:Predicate_simm13>>:$val - Complexity = 4
                // Dst: (ORri:i32 G0:i32, (imm:i32):$val)
              /*SwitchType*/ 15,  MVT::i64,// ->3886
/*3871*/        OPC_EmitRegister, MVT::i64, SP::G0,
/*3874*/        OPC_EmitNodeXForm, 0, 0, // as_i32imm
/*3877*/        OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (imm:i64)<<P:Predicate_simm13>>:$val - Complexity = 4
                // Dst: (ORri:i64 G0:i64, (as_i32imm:i32 ?:i64:$val))
              0, // EndSwitchType
/*3887*/    /*Scope*/ 15, /*->3903*/
/*3888*/      OPC_CheckPredicate, 24, // Predicate_SETHIimm
/*3890*/      OPC_CheckType, MVT::i64,
/*3892*/      OPC_EmitNodeXForm, 1, 0, // HI22
/*3895*/      OPC_MorphNodeTo, TARGET_VAL(SP::SETHIi), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (imm:i64)<<P:Predicate_SETHIimm>><<X:HI22>>:$val - Complexity = 4
              // Dst: (SETHIi:i64 (HI22:i32 ?:i64:$val))
/*3903*/    /*Scope*/ 29, /*->3933*/
/*3904*/      OPC_CheckPredicate, 25, // Predicate_uimm32
/*3906*/      OPC_CheckType, MVT::i64,
/*3908*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3910*/      OPC_EmitNodeXForm, 1, 0, // HI22
/*3913*/      OPC_EmitNode, TARGET_VAL(SP::SETHIi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*3921*/      OPC_EmitNodeXForm, 2, 0, // LO10
/*3924*/      OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (imm:i64)<<P:Predicate_uimm32>>:$val - Complexity = 4
              // Dst: (ORri:i64 (SETHIi:i32 (HI22:i32 ?:i64:$val)), (LO10:i32 ?:i64:$val))
/*3933*/    /*Scope*/ 29, /*->3963*/
/*3934*/      OPC_CheckPredicate, 26, // Predicate_nimm33
/*3936*/      OPC_CheckType, MVT::i64,
/*3938*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3940*/      OPC_EmitNodeXForm, 3, 0, // HIX22
/*3943*/      OPC_EmitNode, TARGET_VAL(SP::SETHIi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*3951*/      OPC_EmitNodeXForm, 4, 0, // LOX10
/*3954*/      OPC_MorphNodeTo, TARGET_VAL(SP::XORri), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (imm:i64)<<P:Predicate_nimm33>>:$val - Complexity = 4
              // Dst: (XORri:i64 (SETHIi:i32 (HIX22:i32 ?:i64:$val)), (LOX10:i32 ?:i64:$val))
/*3963*/    /*Scope*/ 29, /*->3993*/
/*3964*/      OPC_CheckType, MVT::i32,
/*3966*/      OPC_EmitConvertToTarget, 0,
/*3968*/      OPC_EmitNodeXForm, 1, 1, // HI22
/*3971*/      OPC_EmitNode, TARGET_VAL(SP::SETHIi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*3979*/      OPC_EmitConvertToTarget, 0,
/*3981*/      OPC_EmitNodeXForm, 2, 4, // LO10
/*3984*/      OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 5, 
              // Src: (imm:i32):$val - Complexity = 3
              // Dst: (ORri:i32 (SETHIi:i32 (HI22:i32 (imm:i32):$val)), (LO10:i32 (imm:i32):$val))
/*3993*/    /*Scope*/ 71, /*->4065*/
/*3994*/      OPC_CheckType, MVT::i64,
/*3996*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3998*/      OPC_EmitNodeXForm, 5, 0, // HH22
/*4001*/      OPC_EmitNode, TARGET_VAL(SP::SETHIi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*4009*/      OPC_EmitNodeXForm, 6, 0, // HM10
/*4012*/      OPC_EmitNode, TARGET_VAL(SP::ORri), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3,  // Results = #4
/*4021*/      OPC_EmitInteger, MVT::i32, 32, 
/*4024*/      OPC_EmitNode, TARGET_VAL(SP::SLLXri), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 4, 5,  // Results = #6
/*4033*/      OPC_EmitNodeXForm, 1, 0, // HI22
/*4036*/      OPC_EmitNode, TARGET_VAL(SP::SETHIi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*4044*/      OPC_EmitNodeXForm, 2, 0, // LO10
/*4047*/      OPC_EmitNode, TARGET_VAL(SP::ORri), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 8, 9,  // Results = #10
/*4056*/      OPC_MorphNodeTo, TARGET_VAL(SP::ORrr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 6, 10, 
              // Src: (imm:i64):$val - Complexity = 3
              // Dst: (ORrr:i64 (SLLXri:i64 (ORri:i64 (SETHIi:i32 (HH22:i32 ?:i64:$val)), (HM10:i32 ?:i64:$val)), 32:i32), (ORri:i32 (SETHIi:i32 (HI22:i32 ?:i64:$val)), (LO10:i32 ?:i64:$val)))
/*4065*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::ANY_EXTEND),// ->4084
/*4069*/    OPC_RecordChild0, // #0 = $val
/*4070*/    OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*4072*/    OPC_EmitInteger, MVT::i32, SP::I64RegsRegClassID,
/*4075*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (anyext:i64 i32:i32:$val) - Complexity = 3
            // Dst: (COPY_TO_REGCLASS:i64 ?:i32:$val, I64Regs:i32)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::TRUNCATE),// ->4102
/*4087*/    OPC_RecordChild0, // #0 = $val
/*4088*/    OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*4090*/    OPC_EmitInteger, MVT::i32, SP::IntRegsRegClassID,
/*4093*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (trunc:i32 i64:i64:$val) - Complexity = 3
            // Dst: (COPY_TO_REGCLASS:i32 ?:i64:$val, IntRegs:i32)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::ZERO_EXTEND),// ->4120
/*4105*/    OPC_RecordChild0, // #0 = $val
/*4106*/    OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*4108*/    OPC_EmitInteger, MVT::i32, 0, 
/*4111*/    OPC_MorphNodeTo, TARGET_VAL(SP::SRLri), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (zext:i64 i32:i32:$val) - Complexity = 3
            // Dst: (SRLri:i64 ?:i32:$val, 0:i32)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::SIGN_EXTEND),// ->4138
/*4123*/    OPC_RecordChild0, // #0 = $val
/*4124*/    OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*4126*/    OPC_EmitInteger, MVT::i32, 0, 
/*4129*/    OPC_MorphNodeTo, TARGET_VAL(SP::SRAri), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (sext:i64 i32:i32:$val) - Complexity = 3
            // Dst: (SRAri:i64 ?:i32:$val, 0:i32)
          /*SwitchOpcode*/ 20,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->4161
/*4141*/    OPC_RecordChild0, // #0 = $val
/*4142*/    OPC_MoveChild, 1,
/*4144*/    OPC_CheckValueType, MVT::i32,
/*4146*/    OPC_MoveParent,
/*4147*/    OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*4149*/    OPC_EmitInteger, MVT::i32, 0, 
/*4152*/    OPC_MorphNodeTo, TARGET_VAL(SP::SRAri), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (sext_inreg:i64 i64:i64:$val, i32:Other) - Complexity = 3
            // Dst: (SRAri:i64 ?:i64:$val, 0:i32)
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::CTPOP),// ->4187
/*4164*/    OPC_RecordChild0, // #0 = $src
/*4165*/    OPC_CheckType, MVT::i32,
/*4167*/    OPC_EmitInteger, MVT::i32, 0, 
/*4170*/    OPC_EmitNode, TARGET_VAL(SP::SLLri), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*4179*/    OPC_MorphNodeTo, TARGET_VAL(SP::POPCrr), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
            // Src: (ctpop:i32 i32:i32:$src) - Complexity = 3
            // Dst: (POPCrr:i32 (SLLri:i32 ?:i32:$src, 0:i32))
          /*SwitchOpcode*/ 29,  TARGET_VAL(SPISD::BRXCC),// ->4219
/*4190*/    OPC_RecordNode,   // #0 = 'SPbrxcc' chained node
/*4191*/    OPC_CaptureGlueInput,
/*4192*/    OPC_RecordChild1, // #1 = $dst
/*4193*/    OPC_MoveChild, 1,
/*4195*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*4198*/    OPC_MoveParent,
/*4199*/    OPC_RecordChild2, // #2 = $cc
/*4200*/    OPC_MoveChild, 2,
/*4202*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4205*/    OPC_MoveParent,
/*4206*/    OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*4208*/    OPC_EmitMergeInputChains1_0,
/*4209*/    OPC_EmitConvertToTarget, 2,
/*4211*/    OPC_MorphNodeTo, TARGET_VAL(SP::BPXCC), 0|OPFL_Chain|OPFL_GlueInput,
                0/*#VTs*/, 2/*#Ops*/, 1, 3, 
            // Src: (SPbrxcc (bb:Other):$dst, (imm:i32):$cc) - Complexity = 6
            // Dst: (BPXCC (bb:Other):$dst, (imm:i32):$cc)
          /*SwitchOpcode*/ 21,  TARGET_VAL(SPISD::FLUSHW),// ->4243
/*4222*/    OPC_RecordNode,   // #0 = 'flushw' chained node
/*4223*/    OPC_Scope, 9, /*->4234*/ // 2 children in Scope
/*4225*/      OPC_CheckPatternPredicate, 1, // (Subtarget.isV9())
/*4227*/      OPC_EmitMergeInputChains1_0,
/*4228*/      OPC_MorphNodeTo, TARGET_VAL(SP::FLUSHW), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (flushw) - Complexity = 3
              // Dst: (FLUSHW)
/*4234*/    /*Scope*/ 7, /*->4242*/
/*4235*/      OPC_EmitMergeInputChains1_0,
/*4236*/      OPC_MorphNodeTo, TARGET_VAL(SP::TA3), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (flushw) - Complexity = 3
              // Dst: (TA3)
/*4242*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::BR),// ->4262
/*4246*/    OPC_RecordNode,   // #0 = 'br' chained node
/*4247*/    OPC_RecordChild1, // #1 = $dst
/*4248*/    OPC_MoveChild, 1,
/*4250*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*4253*/    OPC_MoveParent,
/*4254*/    OPC_EmitMergeInputChains1_0,
/*4255*/    OPC_MorphNodeTo, TARGET_VAL(SP::BA), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (br (bb:Other):$dst) - Complexity = 3
            // Dst: (BA (bb:Other):$dst)
          /*SwitchOpcode*/ 23,  TARGET_VAL(SPISD::ITOF),// ->4288
/*4265*/    OPC_RecordChild0, // #0 = $src
/*4266*/    OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->4277
/*4269*/      OPC_MorphNodeTo, TARGET_VAL(SP::FITOS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (SPitof:f32 FPRegs:f32:$src) - Complexity = 3
              // Dst: (FITOS:f32 FPRegs:f32:$src)
            /*SwitchType*/ 8,  MVT::f64,// ->4287
/*4279*/      OPC_MorphNodeTo, TARGET_VAL(SP::FITOD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (SPitof:f64 FPRegs:f32:$src) - Complexity = 3
              // Dst: (FITOD:f64 FPRegs:f32:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 25,  TARGET_VAL(SPISD::FTOI),// ->4316
/*4291*/    OPC_RecordChild0, // #0 = $src
/*4292*/    OPC_Scope, 10, /*->4304*/ // 2 children in Scope
/*4294*/      OPC_CheckChild0Type, MVT::f32,
/*4296*/      OPC_MorphNodeTo, TARGET_VAL(SP::FSTOI), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (SPftoi:f32 FPRegs:f32:$src) - Complexity = 3
              // Dst: (FSTOI:f32 FPRegs:f32:$src)
/*4304*/    /*Scope*/ 10, /*->4315*/
/*4305*/      OPC_CheckChild0Type, MVT::f64,
/*4307*/      OPC_MorphNodeTo, TARGET_VAL(SP::FDTOI), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (SPftoi:f32 DFPRegs:f64:$src) - Complexity = 3
              // Dst: (FDTOI:f32 DFPRegs:f64:$src)
/*4315*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::FP_EXTEND),// ->4328
/*4319*/    OPC_RecordChild0, // #0 = $src
/*4320*/    OPC_MorphNodeTo, TARGET_VAL(SP::FSTOD), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (fextend:f64 f32:f32:$src) - Complexity = 3
            // Dst: (FSTOD:f64 f32:f32:$src)
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::FP_ROUND),// ->4340
/*4331*/    OPC_RecordChild0, // #0 = $src
/*4332*/    OPC_MorphNodeTo, TARGET_VAL(SP::FDTOS), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (fround:f32 f64:f64:$src) - Complexity = 3
            // Dst: (FDTOS:f32 f64:f64:$src)
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::FNEG),// ->4368
/*4343*/    OPC_RecordChild0, // #0 = $src
/*4344*/    OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->4355
/*4347*/      OPC_MorphNodeTo, TARGET_VAL(SP::FNEGS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fneg:f32 f32:f32:$src) - Complexity = 3
              // Dst: (FNEGS:f32 f32:f32:$src)
            /*SwitchType*/ 10,  MVT::f64,// ->4367
/*4357*/      OPC_CheckPatternPredicate, 1, // (Subtarget.isV9())
/*4359*/      OPC_MorphNodeTo, TARGET_VAL(SP::FNEGD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fneg:f64 f64:f64:$src) - Complexity = 3
              // Dst: (FNEGD:f64 f64:f64:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::FABS),// ->4396
/*4371*/    OPC_RecordChild0, // #0 = $src
/*4372*/    OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->4383
/*4375*/      OPC_MorphNodeTo, TARGET_VAL(SP::FABSS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 f32:f32:$src) - Complexity = 3
              // Dst: (FABSS:f32 f32:f32:$src)
            /*SwitchType*/ 10,  MVT::f64,// ->4395
/*4385*/      OPC_CheckPatternPredicate, 1, // (Subtarget.isV9())
/*4387*/      OPC_MorphNodeTo, TARGET_VAL(SP::FABSD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fabs:f64 f64:f64:$src) - Complexity = 3
              // Dst: (FABSD:f64 f64:f64:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::FSQRT),// ->4422
/*4399*/    OPC_RecordChild0, // #0 = $src
/*4400*/    OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->4411
/*4403*/      OPC_MorphNodeTo, TARGET_VAL(SP::FSQRTS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f32 f32:f32:$src) - Complexity = 3
              // Dst: (FSQRTS:f32 f32:f32:$src)
            /*SwitchType*/ 8,  MVT::f64,// ->4421
/*4413*/      OPC_MorphNodeTo, TARGET_VAL(SP::FSQRTD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f64 f64:f64:$src) - Complexity = 3
              // Dst: (FSQRTD:f64 f64:f64:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::FADD),// ->4451
/*4425*/    OPC_RecordChild0, // #0 = $src1
/*4426*/    OPC_RecordChild1, // #1 = $src2
/*4427*/    OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->4439
/*4430*/      OPC_MorphNodeTo, TARGET_VAL(SP::FADDS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:f32 f32:f32:$src1, f32:f32:$src2) - Complexity = 3
              // Dst: (FADDS:f32 f32:f32:$src1, f32:f32:$src2)
            /*SwitchType*/ 9,  MVT::f64,// ->4450
/*4441*/      OPC_MorphNodeTo, TARGET_VAL(SP::FADDD), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:f64 f64:f64:$src1, f64:f64:$src2) - Complexity = 3
              // Dst: (FADDD:f64 f64:f64:$src1, f64:f64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::FSUB),// ->4480
/*4454*/    OPC_RecordChild0, // #0 = $src1
/*4455*/    OPC_RecordChild1, // #1 = $src2
/*4456*/    OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->4468
/*4459*/      OPC_MorphNodeTo, TARGET_VAL(SP::FSUBS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f32 f32:f32:$src1, f32:f32:$src2) - Complexity = 3
              // Dst: (FSUBS:f32 f32:f32:$src1, f32:f32:$src2)
            /*SwitchType*/ 9,  MVT::f64,// ->4479
/*4470*/      OPC_MorphNodeTo, TARGET_VAL(SP::FSUBD), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f64 f64:f64:$src1, f64:f64:$src2) - Complexity = 3
              // Dst: (FSUBD:f64 f64:f64:$src1, f64:f64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::FDIV),// ->4509
/*4483*/    OPC_RecordChild0, // #0 = $src1
/*4484*/    OPC_RecordChild1, // #1 = $src2
/*4485*/    OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->4497
/*4488*/      OPC_MorphNodeTo, TARGET_VAL(SP::FDIVS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f32 f32:f32:$src1, f32:f32:$src2) - Complexity = 3
              // Dst: (FDIVS:f32 f32:f32:$src1, f32:f32:$src2)
            /*SwitchType*/ 9,  MVT::f64,// ->4508
/*4499*/      OPC_MorphNodeTo, TARGET_VAL(SP::FDIVD), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f64 f64:f64:$src1, f64:f64:$src2) - Complexity = 3
              // Dst: (FDIVD:f64 f64:f64:$src1, f64:f64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 27,  TARGET_VAL(SPISD::CMPFCC),// ->4539
/*4512*/    OPC_RecordChild0, // #0 = $src1
/*4513*/    OPC_Scope, 11, /*->4526*/ // 2 children in Scope
/*4515*/      OPC_CheckChild0Type, MVT::f32,
/*4517*/      OPC_RecordChild1, // #1 = $src2
/*4518*/      OPC_MorphNodeTo, TARGET_VAL(SP::FCMPS), 0|OPFL_GlueOutput,
                  0/*#VTs*/, 2/*#Ops*/, 0, 1, 
              // Src: (SPcmpfcc f32:f32:$src1, f32:f32:$src2) - Complexity = 3
              // Dst: (FCMPS f32:f32:$src1, f32:f32:$src2)
/*4526*/    /*Scope*/ 11, /*->4538*/
/*4527*/      OPC_CheckChild0Type, MVT::f64,
/*4529*/      OPC_RecordChild1, // #1 = $src2
/*4530*/      OPC_MorphNodeTo, TARGET_VAL(SP::FCMPD), 0|OPFL_GlueOutput,
                  0/*#VTs*/, 2/*#Ops*/, 0, 1, 
              // Src: (SPcmpfcc f64:f64:$src1, f64:f64:$src2) - Complexity = 3
              // Dst: (FCMPD f64:f64:$src1, f64:f64:$src2)
/*4538*/    0, /*End of Scope*/
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 4541 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 85
  // #OPC_RecordNode                     = 14
  // #OPC_RecordChild                    = 122
  // #OPC_RecordMemRef                   = 2
  // #OPC_CaptureGlueInput               = 11
  // #OPC_MoveChild                      = 66
  // #OPC_MoveParent                     = 83
  // #OPC_CheckSame                      = 0
  // #OPC_CheckPatternPredicate          = 82
  // #OPC_CheckPredicate                 = 83
  // #OPC_CheckOpcode                    = 50
  // #OPC_SwitchOpcode                   = 6
  // #OPC_CheckType                      = 68
  // #OPC_SwitchType                     = 30
  // #OPC_CheckChildType                 = 13
  // #OPC_CheckInteger                   = 10
  // #OPC_CheckCondCode                  = 0
  // #OPC_CheckValueType                 = 1
  // #OPC_CheckComplexPat                = 73
  // #OPC_CheckAndImm                    = 1
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 6
  // #OPC_EmitStringInteger              = 2
  // #OPC_EmitRegister                   = 9
  // #OPC_EmitConvertToTarget            = 55
  // #OPC_EmitMergeInputChains           = 83
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 9
  // #OPC_EmitNodeXForm                  = 22
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 227

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

virtual bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (Subtarget.is64Bit());
  case 1: return (Subtarget.isV9());
  }
}

virtual bool CheckNodePredicate(SDNode *Node,
                                unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 1: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 2: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 3: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 4: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 5: { // Predicate_truncstorei32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 6: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 7: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 8: { // Predicate_sextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 9: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 10: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 11: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 12: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 13: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 14: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 15: { // Predicate_extloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 16: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 17: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 18: { // Predicate_zextloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 19: { // Predicate_zextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 20: { // Predicate_extloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 21: { // Predicate_sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 22: { // Predicate_simm13
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return isInt<13>(N->getSExtValue()); 
  }
  case 23: { // Predicate_simm11
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return isInt<11>(N->getSExtValue()); 
  }
  case 24: { // Predicate_SETHIimm
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isShiftedUInt<22, 10>(N->getZExtValue());

  }
  case 25: { // Predicate_uimm32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return isUInt<32>(N->getZExtValue()); 
  }
  case 26: { // Predicate_nimm33
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  int64_t Imm = N->getSExtValue();
  return Imm < 0 && isInt<33>(Imm);

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
    return SelectADDRrr(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
    return SelectADDRri(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}

virtual SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // as_i32imm
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(N->getSExtValue(), MVT::i32);

  }
  case 1: {  // HI22
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: shift the immediate value down into the low bits.
  return CurDAG->getTargetConstant((unsigned)N->getZExtValue() >> 10, MVT::i32);

  }
  case 2: {  // LO10
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant((unsigned)N->getZExtValue() & 1023,
                                   MVT::i32);

  }
  case 3: {  // HIX22
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Val = (~N->getZExtValue() >> 10) & ((1u << 22) - 1);
  return CurDAG->getTargetConstant(Val, MVT::i32);

  }
  case 4: {  // LOX10
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(~(~N->getZExtValue() & 0x3ff), MVT::i32);

  }
  case 5: {  // HH22
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Val = (N->getZExtValue() >> 42) & ((1u << 22) - 1);
  return CurDAG->getTargetConstant(Val, MVT::i32);

  }
  case 6: {  // HM10
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Val = (N->getZExtValue() >> 32) & ((1u << 10) - 1);
  return CurDAG->getTargetConstant(Val, MVT::i32);

  }
  }
}

