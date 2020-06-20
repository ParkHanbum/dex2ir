/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*DAG Instruction Selector for the SystemZ target                             *|
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
/*0*/     OPC_SwitchOpcode /*84 cases */, 55|128,24/*3127*/,  TARGET_VAL(ISD::STORE),// ->3132
/*5*/       OPC_RecordMemRef,
/*6*/       OPC_RecordNode,   // #0 = 'st' chained node
/*7*/       OPC_Scope, 25|128,19/*2457*/, /*->2467*/ // 2 children in Scope
/*10*/        OPC_MoveChild, 1,
/*12*/        OPC_SwitchOpcode /*7 cases */, 3|128,11/*1411*/,  TARGET_VAL(SystemZISD::SELECT_CCMASK),// ->1428
/*17*/          OPC_CaptureGlueInput,
/*18*/          OPC_Scope, 79, /*->99*/ // 18 children in Scope
/*20*/            OPC_RecordChild0, // #1 = $new
/*21*/            OPC_MoveChild, 1,
/*23*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*26*/            OPC_RecordMemRef,
/*27*/            OPC_RecordNode, // #2 = 'ld' chained node
/*28*/            OPC_CheckFoldableChainNode,
/*29*/            OPC_RecordChild1, // #3 = $addr
/*30*/            OPC_CheckChild1Type, MVT::i64,
/*32*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*34*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*36*/            OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*38*/            OPC_CheckPredicate, 3, // Predicate_nonvolatile_anyextloadi8
/*40*/            OPC_MoveParent,
/*41*/            OPC_RecordChild2, // #4 = $valid
/*42*/            OPC_MoveChild, 2,
/*44*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*47*/            OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*49*/            OPC_MoveParent,
/*50*/            OPC_RecordChild3, // #5 = $cc
/*51*/            OPC_MoveChild, 3,
/*53*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*56*/            OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*58*/            OPC_MoveParent,
/*59*/            OPC_CheckType, MVT::i32,
/*61*/            OPC_MoveParent,
/*62*/            OPC_MoveChild, 2,
/*64*/            OPC_CheckSame, 3,
/*66*/            OPC_MoveParent,
/*67*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*69*/            OPC_CheckPredicate, 6, // Predicate_truncstore
/*71*/            OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*73*/            OPC_CheckPredicate, 8, // Predicate_nonvolatile_truncstorei8
/*75*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*78*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*82*/            OPC_EmitConvertToTarget, 4,
/*84*/            OPC_EmitConvertToTarget, 5,
/*86*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore8_32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i32 GR32:i32:$new, (ld:i32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>><<P:Predicate_nonvolatile_anyextloadi8>>, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_nonvolatile_truncstorei8>> - Complexity = 43
                  // Dst: (CondStore8_32:i32 GR32:i32:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*99*/          /*Scope*/ 79, /*->179*/
/*100*/           OPC_MoveChild, 0,
/*102*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*105*/           OPC_RecordMemRef,
/*106*/           OPC_RecordNode, // #1 = 'ld' chained node
/*107*/           OPC_CheckFoldableChainNode,
/*108*/           OPC_RecordChild1, // #2 = $addr
/*109*/           OPC_CheckChild1Type, MVT::i64,
/*111*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*113*/           OPC_CheckPredicate, 1, // Predicate_anyextload
/*115*/           OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*117*/           OPC_CheckPredicate, 3, // Predicate_nonvolatile_anyextloadi8
/*119*/           OPC_MoveParent,
/*120*/           OPC_RecordChild1, // #3 = $new
/*121*/           OPC_RecordChild2, // #4 = $valid
/*122*/           OPC_MoveChild, 2,
/*124*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*127*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*129*/           OPC_MoveParent,
/*130*/           OPC_RecordChild3, // #5 = $cc
/*131*/           OPC_MoveChild, 3,
/*133*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*136*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*138*/           OPC_MoveParent,
/*139*/           OPC_CheckType, MVT::i32,
/*141*/           OPC_MoveParent,
/*142*/           OPC_MoveChild, 2,
/*144*/           OPC_CheckSame, 2,
/*146*/           OPC_MoveParent,
/*147*/           OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*149*/           OPC_CheckPredicate, 6, // Predicate_truncstore
/*151*/           OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*153*/           OPC_CheckPredicate, 8, // Predicate_nonvolatile_truncstorei8
/*155*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*158*/           OPC_EmitMergeInputChains, 2, 0, 1, 
/*162*/           OPC_EmitConvertToTarget, 4,
/*164*/           OPC_EmitConvertToTarget, 5,
/*166*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore8_32Inv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 3, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i32 (ld:i32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>><<P:Predicate_nonvolatile_anyextloadi8>>, GR32:i32:$new, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_nonvolatile_truncstorei8>> - Complexity = 43
                  // Dst: (CondStore8_32Inv:i32 GR32:i32:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*179*/         /*Scope*/ 79, /*->259*/
/*180*/           OPC_RecordChild0, // #1 = $new
/*181*/           OPC_MoveChild, 1,
/*183*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*186*/           OPC_RecordMemRef,
/*187*/           OPC_RecordNode, // #2 = 'ld' chained node
/*188*/           OPC_CheckFoldableChainNode,
/*189*/           OPC_RecordChild1, // #3 = $addr
/*190*/           OPC_CheckChild1Type, MVT::i64,
/*192*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*194*/           OPC_CheckPredicate, 1, // Predicate_anyextload
/*196*/           OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*198*/           OPC_CheckPredicate, 10, // Predicate_nonvolatile_anyextloadi16
/*200*/           OPC_MoveParent,
/*201*/           OPC_RecordChild2, // #4 = $valid
/*202*/           OPC_MoveChild, 2,
/*204*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*207*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*209*/           OPC_MoveParent,
/*210*/           OPC_RecordChild3, // #5 = $cc
/*211*/           OPC_MoveChild, 3,
/*213*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*216*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*218*/           OPC_MoveParent,
/*219*/           OPC_CheckType, MVT::i32,
/*221*/           OPC_MoveParent,
/*222*/           OPC_MoveChild, 2,
/*224*/           OPC_CheckSame, 3,
/*226*/           OPC_MoveParent,
/*227*/           OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*229*/           OPC_CheckPredicate, 6, // Predicate_truncstore
/*231*/           OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*233*/           OPC_CheckPredicate, 12, // Predicate_nonvolatile_truncstorei16
/*235*/           OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*238*/           OPC_EmitMergeInputChains, 2, 0, 2, 
/*242*/           OPC_EmitConvertToTarget, 4,
/*244*/           OPC_EmitConvertToTarget, 5,
/*246*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore16_32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i32 GR32:i32:$new, (ld:i32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>><<P:Predicate_nonvolatile_anyextloadi16>>, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_nonvolatile_truncstorei16>> - Complexity = 43
                  // Dst: (CondStore16_32:i32 GR32:i32:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*259*/         /*Scope*/ 79, /*->339*/
/*260*/           OPC_MoveChild, 0,
/*262*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*265*/           OPC_RecordMemRef,
/*266*/           OPC_RecordNode, // #1 = 'ld' chained node
/*267*/           OPC_CheckFoldableChainNode,
/*268*/           OPC_RecordChild1, // #2 = $addr
/*269*/           OPC_CheckChild1Type, MVT::i64,
/*271*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*273*/           OPC_CheckPredicate, 1, // Predicate_anyextload
/*275*/           OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*277*/           OPC_CheckPredicate, 10, // Predicate_nonvolatile_anyextloadi16
/*279*/           OPC_MoveParent,
/*280*/           OPC_RecordChild1, // #3 = $new
/*281*/           OPC_RecordChild2, // #4 = $valid
/*282*/           OPC_MoveChild, 2,
/*284*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*287*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*289*/           OPC_MoveParent,
/*290*/           OPC_RecordChild3, // #5 = $cc
/*291*/           OPC_MoveChild, 3,
/*293*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*296*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*298*/           OPC_MoveParent,
/*299*/           OPC_CheckType, MVT::i32,
/*301*/           OPC_MoveParent,
/*302*/           OPC_MoveChild, 2,
/*304*/           OPC_CheckSame, 2,
/*306*/           OPC_MoveParent,
/*307*/           OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*309*/           OPC_CheckPredicate, 6, // Predicate_truncstore
/*311*/           OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*313*/           OPC_CheckPredicate, 12, // Predicate_nonvolatile_truncstorei16
/*315*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*318*/           OPC_EmitMergeInputChains, 2, 0, 1, 
/*322*/           OPC_EmitConvertToTarget, 4,
/*324*/           OPC_EmitConvertToTarget, 5,
/*326*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore16_32Inv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 3, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i32 (ld:i32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>><<P:Predicate_nonvolatile_anyextloadi16>>, GR32:i32:$new, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_nonvolatile_truncstorei16>> - Complexity = 43
                  // Dst: (CondStore16_32Inv:i32 GR32:i32:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*339*/         /*Scope*/ 75, /*->415*/
/*340*/           OPC_RecordChild0, // #1 = $new
/*341*/           OPC_MoveChild, 1,
/*343*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*346*/           OPC_RecordMemRef,
/*347*/           OPC_RecordNode, // #2 = 'ld' chained node
/*348*/           OPC_CheckFoldableChainNode,
/*349*/           OPC_RecordChild1, // #3 = $addr
/*350*/           OPC_CheckChild1Type, MVT::i64,
/*352*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*354*/           OPC_CheckPredicate, 13, // Predicate_load
/*356*/           OPC_CheckPredicate, 14, // Predicate_nonvolatile_load
/*358*/           OPC_MoveParent,
/*359*/           OPC_RecordChild2, // #4 = $valid
/*360*/           OPC_MoveChild, 2,
/*362*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*365*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*367*/           OPC_MoveParent,
/*368*/           OPC_RecordChild3, // #5 = $cc
/*369*/           OPC_MoveChild, 3,
/*371*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*374*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*376*/           OPC_MoveParent,
/*377*/           OPC_CheckType, MVT::i32,
/*379*/           OPC_MoveParent,
/*380*/           OPC_MoveChild, 2,
/*382*/           OPC_CheckSame, 3,
/*384*/           OPC_MoveParent,
/*385*/           OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*387*/           OPC_CheckPredicate, 15, // Predicate_store
/*389*/           OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*391*/           OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*394*/           OPC_EmitMergeInputChains, 2, 0, 2, 
/*398*/           OPC_EmitConvertToTarget, 4,
/*400*/           OPC_EmitConvertToTarget, 5,
/*402*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore32_32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i32 GR32:i32:$new, (ld:i32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 43
                  // Dst: (CondStore32_32:i32 GR32:i32:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*415*/         /*Scope*/ 75, /*->491*/
/*416*/           OPC_MoveChild, 0,
/*418*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*421*/           OPC_RecordMemRef,
/*422*/           OPC_RecordNode, // #1 = 'ld' chained node
/*423*/           OPC_CheckFoldableChainNode,
/*424*/           OPC_RecordChild1, // #2 = $addr
/*425*/           OPC_CheckChild1Type, MVT::i64,
/*427*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*429*/           OPC_CheckPredicate, 13, // Predicate_load
/*431*/           OPC_CheckPredicate, 14, // Predicate_nonvolatile_load
/*433*/           OPC_MoveParent,
/*434*/           OPC_RecordChild1, // #3 = $new
/*435*/           OPC_RecordChild2, // #4 = $valid
/*436*/           OPC_MoveChild, 2,
/*438*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*441*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*443*/           OPC_MoveParent,
/*444*/           OPC_RecordChild3, // #5 = $cc
/*445*/           OPC_MoveChild, 3,
/*447*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*450*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*452*/           OPC_MoveParent,
/*453*/           OPC_CheckType, MVT::i32,
/*455*/           OPC_MoveParent,
/*456*/           OPC_MoveChild, 2,
/*458*/           OPC_CheckSame, 2,
/*460*/           OPC_MoveParent,
/*461*/           OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*463*/           OPC_CheckPredicate, 15, // Predicate_store
/*465*/           OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*467*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*470*/           OPC_EmitMergeInputChains, 2, 0, 1, 
/*474*/           OPC_EmitConvertToTarget, 4,
/*476*/           OPC_EmitConvertToTarget, 5,
/*478*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore32_32Inv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 3, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i32 (ld:i32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>, GR32:i32:$new, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 43
                  // Dst: (CondStore32_32Inv:i32 GR32:i32:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*491*/         /*Scope*/ 79, /*->571*/
/*492*/           OPC_RecordChild0, // #1 = $new
/*493*/           OPC_MoveChild, 1,
/*495*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*498*/           OPC_RecordMemRef,
/*499*/           OPC_RecordNode, // #2 = 'ld' chained node
/*500*/           OPC_CheckFoldableChainNode,
/*501*/           OPC_RecordChild1, // #3 = $addr
/*502*/           OPC_CheckChild1Type, MVT::i64,
/*504*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*506*/           OPC_CheckPredicate, 1, // Predicate_anyextload
/*508*/           OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*510*/           OPC_CheckPredicate, 3, // Predicate_nonvolatile_anyextloadi8
/*512*/           OPC_MoveParent,
/*513*/           OPC_RecordChild2, // #4 = $valid
/*514*/           OPC_MoveChild, 2,
/*516*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*519*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*521*/           OPC_MoveParent,
/*522*/           OPC_RecordChild3, // #5 = $cc
/*523*/           OPC_MoveChild, 3,
/*525*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*528*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*530*/           OPC_MoveParent,
/*531*/           OPC_CheckType, MVT::i64,
/*533*/           OPC_MoveParent,
/*534*/           OPC_MoveChild, 2,
/*536*/           OPC_CheckSame, 3,
/*538*/           OPC_MoveParent,
/*539*/           OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*541*/           OPC_CheckPredicate, 6, // Predicate_truncstore
/*543*/           OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*545*/           OPC_CheckPredicate, 8, // Predicate_nonvolatile_truncstorei8
/*547*/           OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*550*/           OPC_EmitMergeInputChains, 2, 0, 2, 
/*554*/           OPC_EmitConvertToTarget, 4,
/*556*/           OPC_EmitConvertToTarget, 5,
/*558*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i64 GR64:i64:$new, (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>><<P:Predicate_nonvolatile_anyextloadi8>>, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_nonvolatile_truncstorei8>> - Complexity = 43
                  // Dst: (CondStore8:i32 GR64:i64:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*571*/         /*Scope*/ 79, /*->651*/
/*572*/           OPC_MoveChild, 0,
/*574*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*577*/           OPC_RecordMemRef,
/*578*/           OPC_RecordNode, // #1 = 'ld' chained node
/*579*/           OPC_CheckFoldableChainNode,
/*580*/           OPC_RecordChild1, // #2 = $addr
/*581*/           OPC_CheckChild1Type, MVT::i64,
/*583*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*585*/           OPC_CheckPredicate, 1, // Predicate_anyextload
/*587*/           OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*589*/           OPC_CheckPredicate, 3, // Predicate_nonvolatile_anyextloadi8
/*591*/           OPC_MoveParent,
/*592*/           OPC_RecordChild1, // #3 = $new
/*593*/           OPC_RecordChild2, // #4 = $valid
/*594*/           OPC_MoveChild, 2,
/*596*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*599*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*601*/           OPC_MoveParent,
/*602*/           OPC_RecordChild3, // #5 = $cc
/*603*/           OPC_MoveChild, 3,
/*605*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*608*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*610*/           OPC_MoveParent,
/*611*/           OPC_CheckType, MVT::i64,
/*613*/           OPC_MoveParent,
/*614*/           OPC_MoveChild, 2,
/*616*/           OPC_CheckSame, 2,
/*618*/           OPC_MoveParent,
/*619*/           OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*621*/           OPC_CheckPredicate, 6, // Predicate_truncstore
/*623*/           OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*625*/           OPC_CheckPredicate, 8, // Predicate_nonvolatile_truncstorei8
/*627*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*630*/           OPC_EmitMergeInputChains, 2, 0, 1, 
/*634*/           OPC_EmitConvertToTarget, 4,
/*636*/           OPC_EmitConvertToTarget, 5,
/*638*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore8Inv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 3, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i64 (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>><<P:Predicate_nonvolatile_anyextloadi8>>, GR64:i64:$new, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_nonvolatile_truncstorei8>> - Complexity = 43
                  // Dst: (CondStore8Inv:i32 GR64:i64:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*651*/         /*Scope*/ 79, /*->731*/
/*652*/           OPC_RecordChild0, // #1 = $new
/*653*/           OPC_MoveChild, 1,
/*655*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*658*/           OPC_RecordMemRef,
/*659*/           OPC_RecordNode, // #2 = 'ld' chained node
/*660*/           OPC_CheckFoldableChainNode,
/*661*/           OPC_RecordChild1, // #3 = $addr
/*662*/           OPC_CheckChild1Type, MVT::i64,
/*664*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*666*/           OPC_CheckPredicate, 1, // Predicate_anyextload
/*668*/           OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*670*/           OPC_CheckPredicate, 10, // Predicate_nonvolatile_anyextloadi16
/*672*/           OPC_MoveParent,
/*673*/           OPC_RecordChild2, // #4 = $valid
/*674*/           OPC_MoveChild, 2,
/*676*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*679*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*681*/           OPC_MoveParent,
/*682*/           OPC_RecordChild3, // #5 = $cc
/*683*/           OPC_MoveChild, 3,
/*685*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*688*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*690*/           OPC_MoveParent,
/*691*/           OPC_CheckType, MVT::i64,
/*693*/           OPC_MoveParent,
/*694*/           OPC_MoveChild, 2,
/*696*/           OPC_CheckSame, 3,
/*698*/           OPC_MoveParent,
/*699*/           OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*701*/           OPC_CheckPredicate, 6, // Predicate_truncstore
/*703*/           OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*705*/           OPC_CheckPredicate, 12, // Predicate_nonvolatile_truncstorei16
/*707*/           OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*710*/           OPC_EmitMergeInputChains, 2, 0, 2, 
/*714*/           OPC_EmitConvertToTarget, 4,
/*716*/           OPC_EmitConvertToTarget, 5,
/*718*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore16), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i64 GR64:i64:$new, (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>><<P:Predicate_nonvolatile_anyextloadi16>>, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_nonvolatile_truncstorei16>> - Complexity = 43
                  // Dst: (CondStore16:i32 GR64:i64:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*731*/         /*Scope*/ 79, /*->811*/
/*732*/           OPC_MoveChild, 0,
/*734*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*737*/           OPC_RecordMemRef,
/*738*/           OPC_RecordNode, // #1 = 'ld' chained node
/*739*/           OPC_CheckFoldableChainNode,
/*740*/           OPC_RecordChild1, // #2 = $addr
/*741*/           OPC_CheckChild1Type, MVT::i64,
/*743*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*745*/           OPC_CheckPredicate, 1, // Predicate_anyextload
/*747*/           OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*749*/           OPC_CheckPredicate, 10, // Predicate_nonvolatile_anyextloadi16
/*751*/           OPC_MoveParent,
/*752*/           OPC_RecordChild1, // #3 = $new
/*753*/           OPC_RecordChild2, // #4 = $valid
/*754*/           OPC_MoveChild, 2,
/*756*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*759*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*761*/           OPC_MoveParent,
/*762*/           OPC_RecordChild3, // #5 = $cc
/*763*/           OPC_MoveChild, 3,
/*765*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*768*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*770*/           OPC_MoveParent,
/*771*/           OPC_CheckType, MVT::i64,
/*773*/           OPC_MoveParent,
/*774*/           OPC_MoveChild, 2,
/*776*/           OPC_CheckSame, 2,
/*778*/           OPC_MoveParent,
/*779*/           OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*781*/           OPC_CheckPredicate, 6, // Predicate_truncstore
/*783*/           OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*785*/           OPC_CheckPredicate, 12, // Predicate_nonvolatile_truncstorei16
/*787*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*790*/           OPC_EmitMergeInputChains, 2, 0, 1, 
/*794*/           OPC_EmitConvertToTarget, 4,
/*796*/           OPC_EmitConvertToTarget, 5,
/*798*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore16Inv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 3, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i64 (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>><<P:Predicate_nonvolatile_anyextloadi16>>, GR64:i64:$new, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_nonvolatile_truncstorei16>> - Complexity = 43
                  // Dst: (CondStore16Inv:i32 GR64:i64:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*811*/         /*Scope*/ 79, /*->891*/
/*812*/           OPC_RecordChild0, // #1 = $new
/*813*/           OPC_MoveChild, 1,
/*815*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*818*/           OPC_RecordMemRef,
/*819*/           OPC_RecordNode, // #2 = 'ld' chained node
/*820*/           OPC_CheckFoldableChainNode,
/*821*/           OPC_RecordChild1, // #3 = $addr
/*822*/           OPC_CheckChild1Type, MVT::i64,
/*824*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*826*/           OPC_CheckPredicate, 1, // Predicate_anyextload
/*828*/           OPC_CheckPredicate, 17, // Predicate_anyextloadi32
/*830*/           OPC_CheckPredicate, 18, // Predicate_nonvolatile_anyextloadi32
/*832*/           OPC_MoveParent,
/*833*/           OPC_RecordChild2, // #4 = $valid
/*834*/           OPC_MoveChild, 2,
/*836*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*839*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*841*/           OPC_MoveParent,
/*842*/           OPC_RecordChild3, // #5 = $cc
/*843*/           OPC_MoveChild, 3,
/*845*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*848*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*850*/           OPC_MoveParent,
/*851*/           OPC_CheckType, MVT::i64,
/*853*/           OPC_MoveParent,
/*854*/           OPC_MoveChild, 2,
/*856*/           OPC_CheckSame, 3,
/*858*/           OPC_MoveParent,
/*859*/           OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*861*/           OPC_CheckPredicate, 6, // Predicate_truncstore
/*863*/           OPC_CheckPredicate, 19, // Predicate_truncstorei32
/*865*/           OPC_CheckPredicate, 20, // Predicate_nonvolatile_truncstorei32
/*867*/           OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*870*/           OPC_EmitMergeInputChains, 2, 0, 2, 
/*874*/           OPC_EmitConvertToTarget, 4,
/*876*/           OPC_EmitConvertToTarget, 5,
/*878*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i64 GR64:i64:$new, (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi32>><<P:Predicate_nonvolatile_anyextloadi32>>, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>><<P:Predicate_nonvolatile_truncstorei32>> - Complexity = 43
                  // Dst: (CondStore32:i32 GR64:i64:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*891*/         /*Scope*/ 79, /*->971*/
/*892*/           OPC_MoveChild, 0,
/*894*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*897*/           OPC_RecordMemRef,
/*898*/           OPC_RecordNode, // #1 = 'ld' chained node
/*899*/           OPC_CheckFoldableChainNode,
/*900*/           OPC_RecordChild1, // #2 = $addr
/*901*/           OPC_CheckChild1Type, MVT::i64,
/*903*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*905*/           OPC_CheckPredicate, 1, // Predicate_anyextload
/*907*/           OPC_CheckPredicate, 17, // Predicate_anyextloadi32
/*909*/           OPC_CheckPredicate, 18, // Predicate_nonvolatile_anyextloadi32
/*911*/           OPC_MoveParent,
/*912*/           OPC_RecordChild1, // #3 = $new
/*913*/           OPC_RecordChild2, // #4 = $valid
/*914*/           OPC_MoveChild, 2,
/*916*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*919*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*921*/           OPC_MoveParent,
/*922*/           OPC_RecordChild3, // #5 = $cc
/*923*/           OPC_MoveChild, 3,
/*925*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*928*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*930*/           OPC_MoveParent,
/*931*/           OPC_CheckType, MVT::i64,
/*933*/           OPC_MoveParent,
/*934*/           OPC_MoveChild, 2,
/*936*/           OPC_CheckSame, 2,
/*938*/           OPC_MoveParent,
/*939*/           OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*941*/           OPC_CheckPredicate, 6, // Predicate_truncstore
/*943*/           OPC_CheckPredicate, 19, // Predicate_truncstorei32
/*945*/           OPC_CheckPredicate, 20, // Predicate_nonvolatile_truncstorei32
/*947*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*950*/           OPC_EmitMergeInputChains, 2, 0, 1, 
/*954*/           OPC_EmitConvertToTarget, 4,
/*956*/           OPC_EmitConvertToTarget, 5,
/*958*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore32Inv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 3, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i64 (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi32>><<P:Predicate_nonvolatile_anyextloadi32>>, GR64:i64:$new, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>><<P:Predicate_nonvolatile_truncstorei32>> - Complexity = 43
                  // Dst: (CondStore32Inv:i32 GR64:i64:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*971*/         /*Scope*/ 75, /*->1047*/
/*972*/           OPC_RecordChild0, // #1 = $new
/*973*/           OPC_MoveChild, 1,
/*975*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*978*/           OPC_RecordMemRef,
/*979*/           OPC_RecordNode, // #2 = 'ld' chained node
/*980*/           OPC_CheckFoldableChainNode,
/*981*/           OPC_RecordChild1, // #3 = $addr
/*982*/           OPC_CheckChild1Type, MVT::i64,
/*984*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*986*/           OPC_CheckPredicate, 13, // Predicate_load
/*988*/           OPC_CheckPredicate, 14, // Predicate_nonvolatile_load
/*990*/           OPC_MoveParent,
/*991*/           OPC_RecordChild2, // #4 = $valid
/*992*/           OPC_MoveChild, 2,
/*994*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*997*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*999*/           OPC_MoveParent,
/*1000*/          OPC_RecordChild3, // #5 = $cc
/*1001*/          OPC_MoveChild, 3,
/*1003*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1006*/          OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*1008*/          OPC_MoveParent,
/*1009*/          OPC_CheckType, MVT::i64,
/*1011*/          OPC_MoveParent,
/*1012*/          OPC_MoveChild, 2,
/*1014*/          OPC_CheckSame, 3,
/*1016*/          OPC_MoveParent,
/*1017*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1019*/          OPC_CheckPredicate, 15, // Predicate_store
/*1021*/          OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*1023*/          OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*1026*/          OPC_EmitMergeInputChains, 2, 0, 2, 
/*1030*/          OPC_EmitConvertToTarget, 4,
/*1032*/          OPC_EmitConvertToTarget, 5,
/*1034*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore64), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i64 GR64:i64:$new, (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 43
                  // Dst: (CondStore64:i32 GR64:i64:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*1047*/        /*Scope*/ 75, /*->1123*/
/*1048*/          OPC_MoveChild, 0,
/*1050*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1053*/          OPC_RecordMemRef,
/*1054*/          OPC_RecordNode, // #1 = 'ld' chained node
/*1055*/          OPC_CheckFoldableChainNode,
/*1056*/          OPC_RecordChild1, // #2 = $addr
/*1057*/          OPC_CheckChild1Type, MVT::i64,
/*1059*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1061*/          OPC_CheckPredicate, 13, // Predicate_load
/*1063*/          OPC_CheckPredicate, 14, // Predicate_nonvolatile_load
/*1065*/          OPC_MoveParent,
/*1066*/          OPC_RecordChild1, // #3 = $new
/*1067*/          OPC_RecordChild2, // #4 = $valid
/*1068*/          OPC_MoveChild, 2,
/*1070*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1073*/          OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*1075*/          OPC_MoveParent,
/*1076*/          OPC_RecordChild3, // #5 = $cc
/*1077*/          OPC_MoveChild, 3,
/*1079*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1082*/          OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*1084*/          OPC_MoveParent,
/*1085*/          OPC_CheckType, MVT::i64,
/*1087*/          OPC_MoveParent,
/*1088*/          OPC_MoveChild, 2,
/*1090*/          OPC_CheckSame, 2,
/*1092*/          OPC_MoveParent,
/*1093*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1095*/          OPC_CheckPredicate, 15, // Predicate_store
/*1097*/          OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*1099*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*1102*/          OPC_EmitMergeInputChains, 2, 0, 1, 
/*1106*/          OPC_EmitConvertToTarget, 4,
/*1108*/          OPC_EmitConvertToTarget, 5,
/*1110*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore64Inv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 3, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i64 (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>, GR64:i64:$new, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 43
                  // Dst: (CondStore64Inv:i32 GR64:i64:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*1123*/        /*Scope*/ 75, /*->1199*/
/*1124*/          OPC_RecordChild0, // #1 = $new
/*1125*/          OPC_MoveChild, 1,
/*1127*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1130*/          OPC_RecordMemRef,
/*1131*/          OPC_RecordNode, // #2 = 'ld' chained node
/*1132*/          OPC_CheckFoldableChainNode,
/*1133*/          OPC_RecordChild1, // #3 = $addr
/*1134*/          OPC_CheckChild1Type, MVT::i64,
/*1136*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1138*/          OPC_CheckPredicate, 13, // Predicate_load
/*1140*/          OPC_CheckPredicate, 14, // Predicate_nonvolatile_load
/*1142*/          OPC_MoveParent,
/*1143*/          OPC_RecordChild2, // #4 = $valid
/*1144*/          OPC_MoveChild, 2,
/*1146*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1149*/          OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*1151*/          OPC_MoveParent,
/*1152*/          OPC_RecordChild3, // #5 = $cc
/*1153*/          OPC_MoveChild, 3,
/*1155*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1158*/          OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*1160*/          OPC_MoveParent,
/*1161*/          OPC_CheckType, MVT::f32,
/*1163*/          OPC_MoveParent,
/*1164*/          OPC_MoveChild, 2,
/*1166*/          OPC_CheckSame, 3,
/*1168*/          OPC_MoveParent,
/*1169*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1171*/          OPC_CheckPredicate, 15, // Predicate_store
/*1173*/          OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*1175*/          OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*1178*/          OPC_EmitMergeInputChains, 2, 0, 2, 
/*1182*/          OPC_EmitConvertToTarget, 4,
/*1184*/          OPC_EmitConvertToTarget, 5,
/*1186*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStoreF32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:f32 FP32:f32:$new, (ld:f32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 43
                  // Dst: (CondStoreF32:i32 FP32:f32:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*1199*/        /*Scope*/ 75, /*->1275*/
/*1200*/          OPC_MoveChild, 0,
/*1202*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1205*/          OPC_RecordMemRef,
/*1206*/          OPC_RecordNode, // #1 = 'ld' chained node
/*1207*/          OPC_CheckFoldableChainNode,
/*1208*/          OPC_RecordChild1, // #2 = $addr
/*1209*/          OPC_CheckChild1Type, MVT::i64,
/*1211*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1213*/          OPC_CheckPredicate, 13, // Predicate_load
/*1215*/          OPC_CheckPredicate, 14, // Predicate_nonvolatile_load
/*1217*/          OPC_MoveParent,
/*1218*/          OPC_RecordChild1, // #3 = $new
/*1219*/          OPC_RecordChild2, // #4 = $valid
/*1220*/          OPC_MoveChild, 2,
/*1222*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1225*/          OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*1227*/          OPC_MoveParent,
/*1228*/          OPC_RecordChild3, // #5 = $cc
/*1229*/          OPC_MoveChild, 3,
/*1231*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1234*/          OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*1236*/          OPC_MoveParent,
/*1237*/          OPC_CheckType, MVT::f32,
/*1239*/          OPC_MoveParent,
/*1240*/          OPC_MoveChild, 2,
/*1242*/          OPC_CheckSame, 2,
/*1244*/          OPC_MoveParent,
/*1245*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1247*/          OPC_CheckPredicate, 15, // Predicate_store
/*1249*/          OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*1251*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*1254*/          OPC_EmitMergeInputChains, 2, 0, 1, 
/*1258*/          OPC_EmitConvertToTarget, 4,
/*1260*/          OPC_EmitConvertToTarget, 5,
/*1262*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStoreF32Inv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 3, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:f32 (ld:f32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>, FP32:f32:$new, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 43
                  // Dst: (CondStoreF32Inv:i32 FP32:f32:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*1275*/        /*Scope*/ 75, /*->1351*/
/*1276*/          OPC_RecordChild0, // #1 = $new
/*1277*/          OPC_MoveChild, 1,
/*1279*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1282*/          OPC_RecordMemRef,
/*1283*/          OPC_RecordNode, // #2 = 'ld' chained node
/*1284*/          OPC_CheckFoldableChainNode,
/*1285*/          OPC_RecordChild1, // #3 = $addr
/*1286*/          OPC_CheckChild1Type, MVT::i64,
/*1288*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1290*/          OPC_CheckPredicate, 13, // Predicate_load
/*1292*/          OPC_CheckPredicate, 14, // Predicate_nonvolatile_load
/*1294*/          OPC_MoveParent,
/*1295*/          OPC_RecordChild2, // #4 = $valid
/*1296*/          OPC_MoveChild, 2,
/*1298*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1301*/          OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*1303*/          OPC_MoveParent,
/*1304*/          OPC_RecordChild3, // #5 = $cc
/*1305*/          OPC_MoveChild, 3,
/*1307*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1310*/          OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*1312*/          OPC_MoveParent,
/*1313*/          OPC_CheckType, MVT::f64,
/*1315*/          OPC_MoveParent,
/*1316*/          OPC_MoveChild, 2,
/*1318*/          OPC_CheckSame, 3,
/*1320*/          OPC_MoveParent,
/*1321*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1323*/          OPC_CheckPredicate, 15, // Predicate_store
/*1325*/          OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*1327*/          OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*1330*/          OPC_EmitMergeInputChains, 2, 0, 2, 
/*1334*/          OPC_EmitConvertToTarget, 4,
/*1336*/          OPC_EmitConvertToTarget, 5,
/*1338*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStoreF64), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:f64 FP64:f64:$new, (ld:f64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 43
                  // Dst: (CondStoreF64:i32 FP64:f64:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*1351*/        /*Scope*/ 75, /*->1427*/
/*1352*/          OPC_MoveChild, 0,
/*1354*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1357*/          OPC_RecordMemRef,
/*1358*/          OPC_RecordNode, // #1 = 'ld' chained node
/*1359*/          OPC_CheckFoldableChainNode,
/*1360*/          OPC_RecordChild1, // #2 = $addr
/*1361*/          OPC_CheckChild1Type, MVT::i64,
/*1363*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1365*/          OPC_CheckPredicate, 13, // Predicate_load
/*1367*/          OPC_CheckPredicate, 14, // Predicate_nonvolatile_load
/*1369*/          OPC_MoveParent,
/*1370*/          OPC_RecordChild1, // #3 = $new
/*1371*/          OPC_RecordChild2, // #4 = $valid
/*1372*/          OPC_MoveChild, 2,
/*1374*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1377*/          OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*1379*/          OPC_MoveParent,
/*1380*/          OPC_RecordChild3, // #5 = $cc
/*1381*/          OPC_MoveChild, 3,
/*1383*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1386*/          OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*1388*/          OPC_MoveParent,
/*1389*/          OPC_CheckType, MVT::f64,
/*1391*/          OPC_MoveParent,
/*1392*/          OPC_MoveChild, 2,
/*1394*/          OPC_CheckSame, 2,
/*1396*/          OPC_MoveParent,
/*1397*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1399*/          OPC_CheckPredicate, 15, // Predicate_store
/*1401*/          OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*1403*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*1406*/          OPC_EmitMergeInputChains, 2, 0, 1, 
/*1410*/          OPC_EmitConvertToTarget, 4,
/*1412*/          OPC_EmitConvertToTarget, 5,
/*1414*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStoreF64Inv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 3, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:f64 (ld:f64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>, FP64:f64:$new, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 43
                  // Dst: (CondStoreF64Inv:i32 FP64:f64:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*1427*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 100,  TARGET_VAL(ISD::ADD),// ->1531
/*1431*/        OPC_MoveChild, 0,
/*1433*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1436*/        OPC_RecordMemRef,
/*1437*/        OPC_RecordNode, // #1 = 'ld' chained node
/*1438*/        OPC_CheckFoldableChainNode,
/*1439*/        OPC_RecordChild1, // #2 = $BD1
/*1440*/        OPC_CheckChild1Type, MVT::i64,
/*1442*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1444*/        OPC_CheckPredicate, 13, // Predicate_load
/*1446*/        OPC_MoveParent,
/*1447*/        OPC_RecordChild1, // #3 = $I2
/*1448*/        OPC_MoveChild, 1,
/*1450*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1453*/        OPC_Scope, 37, /*->1492*/ // 2 children in Scope
/*1455*/          OPC_CheckPredicate, 21, // Predicate_imm32sx8
/*1457*/          OPC_MoveParent,
/*1458*/          OPC_CheckType, MVT::i32,
/*1460*/          OPC_MoveParent,
/*1461*/          OPC_MoveChild, 2,
/*1463*/          OPC_CheckSame, 2,
/*1465*/          OPC_MoveParent,
/*1466*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1468*/          OPC_CheckPredicate, 15, // Predicate_store
/*1470*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr20Only:$BD1 #4 #5
/*1473*/          OPC_EmitMergeInputChains, 2, 0, 1, 
/*1477*/          OPC_EmitConvertToTarget, 3,
/*1479*/          OPC_EmitNodeXForm, 0, 6, // SIMM8
/*1482*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::ASI), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                  // Src: (st (add:i32 (ld:i32 bdaddr20only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i32)<<P:Predicate_imm32sx8>><<X:SIMM8>>:$I2), bdaddr20only:i64:$BD1)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 33
                  // Dst: (ASI:i32 bdaddr20only:i64:$BD1, (SIMM8:i32 (imm:i32):$I2))
/*1492*/        /*Scope*/ 37, /*->1530*/
/*1493*/          OPC_CheckPredicate, 22, // Predicate_imm64sx8
/*1495*/          OPC_MoveParent,
/*1496*/          OPC_CheckType, MVT::i64,
/*1498*/          OPC_MoveParent,
/*1499*/          OPC_MoveChild, 2,
/*1501*/          OPC_CheckSame, 2,
/*1503*/          OPC_MoveParent,
/*1504*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1506*/          OPC_CheckPredicate, 15, // Predicate_store
/*1508*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr20Only:$BD1 #4 #5
/*1511*/          OPC_EmitMergeInputChains, 2, 0, 1, 
/*1515*/          OPC_EmitConvertToTarget, 3,
/*1517*/          OPC_EmitNodeXForm, 0, 6, // SIMM8
/*1520*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGSI), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                  // Src: (st (add:i64 (ld:i64 bdaddr20only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i64)<<P:Predicate_imm64sx8>><<X:SIMM8>>:$I2), bdaddr20only:i64:$BD1)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 33
                  // Dst: (AGSI:i32 bdaddr20only:i64:$BD1, (SIMM8:i64 (imm:i64):$I2))
/*1530*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 23|128,1/*151*/,  TARGET_VAL(ISD::AND),// ->1686
/*1535*/        OPC_MoveChild, 0,
/*1537*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1540*/        OPC_RecordMemRef,
/*1541*/        OPC_RecordNode, // #1 = 'ld' chained node
/*1542*/        OPC_CheckFoldableChainNode,
/*1543*/        OPC_RecordChild1, // #2 = $addr
/*1544*/        OPC_CheckChild1Type, MVT::i64,
/*1546*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1548*/        OPC_CheckPredicate, 1, // Predicate_anyextload
/*1550*/        OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*1552*/        OPC_MoveParent,
/*1553*/        OPC_RecordChild1, // #3 = $src
/*1554*/        OPC_MoveChild, 1,
/*1556*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1559*/        OPC_MoveParent,
/*1560*/        OPC_SwitchType /*2 cases */, 60,  MVT::i32,// ->1623
/*1563*/          OPC_MoveParent,
/*1564*/          OPC_MoveChild, 2,
/*1566*/          OPC_CheckSame, 2,
/*1568*/          OPC_MoveParent,
/*1569*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1571*/          OPC_CheckPredicate, 6, // Predicate_truncstore
/*1573*/          OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*1575*/          OPC_Scope, 22, /*->1599*/ // 2 children in Scope
/*1577*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*1580*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1584*/            OPC_EmitConvertToTarget, 3,
/*1586*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1589*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NI), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (and:i32 (ld:i32 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i32):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (NI:i32 bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
/*1599*/          /*Scope*/ 22, /*->1622*/
/*1600*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1603*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1607*/            OPC_EmitConvertToTarget, 3,
/*1609*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1612*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (and:i32 (ld:i32 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i32):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (NIY:i32 bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
/*1622*/          0, /*End of Scope*/
                /*SwitchType*/ 60,  MVT::i64,// ->1685
/*1625*/          OPC_MoveParent,
/*1626*/          OPC_MoveChild, 2,
/*1628*/          OPC_CheckSame, 2,
/*1630*/          OPC_MoveParent,
/*1631*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1633*/          OPC_CheckPredicate, 6, // Predicate_truncstore
/*1635*/          OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*1637*/          OPC_Scope, 22, /*->1661*/ // 2 children in Scope
/*1639*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*1642*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1646*/            OPC_EmitConvertToTarget, 3,
/*1648*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1651*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NI), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (and:i64 (ld:i64 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i64):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (NI:i32 bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
/*1661*/          /*Scope*/ 22, /*->1684*/
/*1662*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1665*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1669*/            OPC_EmitConvertToTarget, 3,
/*1671*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1674*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (and:i64 (ld:i64 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i64):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (NIY:i32 bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
/*1684*/          0, /*End of Scope*/
                0, // EndSwitchType
              /*SwitchOpcode*/ 23|128,1/*151*/,  TARGET_VAL(ISD::OR),// ->1841
/*1690*/        OPC_MoveChild, 0,
/*1692*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1695*/        OPC_RecordMemRef,
/*1696*/        OPC_RecordNode, // #1 = 'ld' chained node
/*1697*/        OPC_CheckFoldableChainNode,
/*1698*/        OPC_RecordChild1, // #2 = $addr
/*1699*/        OPC_CheckChild1Type, MVT::i64,
/*1701*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1703*/        OPC_CheckPredicate, 1, // Predicate_anyextload
/*1705*/        OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*1707*/        OPC_MoveParent,
/*1708*/        OPC_RecordChild1, // #3 = $src
/*1709*/        OPC_MoveChild, 1,
/*1711*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1714*/        OPC_MoveParent,
/*1715*/        OPC_SwitchType /*2 cases */, 60,  MVT::i32,// ->1778
/*1718*/          OPC_MoveParent,
/*1719*/          OPC_MoveChild, 2,
/*1721*/          OPC_CheckSame, 2,
/*1723*/          OPC_MoveParent,
/*1724*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1726*/          OPC_CheckPredicate, 6, // Predicate_truncstore
/*1728*/          OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*1730*/          OPC_Scope, 22, /*->1754*/ // 2 children in Scope
/*1732*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*1735*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1739*/            OPC_EmitConvertToTarget, 3,
/*1741*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1744*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OI), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (or:i32 (ld:i32 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i32):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (OI:i32 bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
/*1754*/          /*Scope*/ 22, /*->1777*/
/*1755*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1758*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1762*/            OPC_EmitConvertToTarget, 3,
/*1764*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1767*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (or:i32 (ld:i32 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i32):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (OIY:i32 bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
/*1777*/          0, /*End of Scope*/
                /*SwitchType*/ 60,  MVT::i64,// ->1840
/*1780*/          OPC_MoveParent,
/*1781*/          OPC_MoveChild, 2,
/*1783*/          OPC_CheckSame, 2,
/*1785*/          OPC_MoveParent,
/*1786*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1788*/          OPC_CheckPredicate, 6, // Predicate_truncstore
/*1790*/          OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*1792*/          OPC_Scope, 22, /*->1816*/ // 2 children in Scope
/*1794*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*1797*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1801*/            OPC_EmitConvertToTarget, 3,
/*1803*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1806*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OI), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (or:i64 (ld:i64 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i64):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (OI:i32 bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
/*1816*/          /*Scope*/ 22, /*->1839*/
/*1817*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1820*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1824*/            OPC_EmitConvertToTarget, 3,
/*1826*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1829*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (or:i64 (ld:i64 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i64):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (OIY:i32 bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
/*1839*/          0, /*End of Scope*/
                0, // EndSwitchType
              /*SwitchOpcode*/ 23|128,1/*151*/,  TARGET_VAL(ISD::XOR),// ->1996
/*1845*/        OPC_MoveChild, 0,
/*1847*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1850*/        OPC_RecordMemRef,
/*1851*/        OPC_RecordNode, // #1 = 'ld' chained node
/*1852*/        OPC_CheckFoldableChainNode,
/*1853*/        OPC_RecordChild1, // #2 = $addr
/*1854*/        OPC_CheckChild1Type, MVT::i64,
/*1856*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1858*/        OPC_CheckPredicate, 1, // Predicate_anyextload
/*1860*/        OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*1862*/        OPC_MoveParent,
/*1863*/        OPC_RecordChild1, // #3 = $src
/*1864*/        OPC_MoveChild, 1,
/*1866*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1869*/        OPC_MoveParent,
/*1870*/        OPC_SwitchType /*2 cases */, 60,  MVT::i32,// ->1933
/*1873*/          OPC_MoveParent,
/*1874*/          OPC_MoveChild, 2,
/*1876*/          OPC_CheckSame, 2,
/*1878*/          OPC_MoveParent,
/*1879*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1881*/          OPC_CheckPredicate, 6, // Predicate_truncstore
/*1883*/          OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*1885*/          OPC_Scope, 22, /*->1909*/ // 2 children in Scope
/*1887*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*1890*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1894*/            OPC_EmitConvertToTarget, 3,
/*1896*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1899*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XI), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (xor:i32 (ld:i32 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i32):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (XI:i32 bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
/*1909*/          /*Scope*/ 22, /*->1932*/
/*1910*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1913*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1917*/            OPC_EmitConvertToTarget, 3,
/*1919*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1922*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XIY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (xor:i32 (ld:i32 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i32):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (XIY:i32 bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
/*1932*/          0, /*End of Scope*/
                /*SwitchType*/ 60,  MVT::i64,// ->1995
/*1935*/          OPC_MoveParent,
/*1936*/          OPC_MoveChild, 2,
/*1938*/          OPC_CheckSame, 2,
/*1940*/          OPC_MoveParent,
/*1941*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1943*/          OPC_CheckPredicate, 6, // Predicate_truncstore
/*1945*/          OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*1947*/          OPC_Scope, 22, /*->1971*/ // 2 children in Scope
/*1949*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*1952*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1956*/            OPC_EmitConvertToTarget, 3,
/*1958*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1961*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XI), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (xor:i64 (ld:i64 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i64):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (XI:i32 bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
/*1971*/          /*Scope*/ 22, /*->1994*/
/*1972*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1975*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1979*/            OPC_EmitConvertToTarget, 3,
/*1981*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1984*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XIY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (xor:i64 (ld:i64 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i64):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (XIY:i32 bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
/*1994*/          0, /*End of Scope*/
                0, // EndSwitchType
              /*SwitchOpcode*/ 24|128,3/*408*/,  TARGET_VAL(ISD::LOAD),// ->2408
/*2000*/        OPC_RecordMemRef,
/*2001*/        OPC_RecordNode, // #1 = 'ld' chained node
/*2002*/        OPC_CheckFoldableChainNode,
/*2003*/        OPC_RecordChild1, // #2 = $src
/*2004*/        OPC_CheckChild1Type, MVT::i64,
/*2006*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2008*/        OPC_Scope, 84, /*->2094*/ // 4 children in Scope
/*2010*/          OPC_CheckPredicate, 1, // Predicate_anyextload
/*2012*/          OPC_CheckType, MVT::i32,
/*2014*/          OPC_Scope, 38, /*->2054*/ // 2 children in Scope
/*2016*/            OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*2018*/            OPC_MoveParent,
/*2019*/            OPC_RecordChild2, // #3 = $dest
/*2020*/            OPC_CheckChild2Type, MVT::i64,
/*2022*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2024*/            OPC_CheckPredicate, 6, // Predicate_truncstore
/*2026*/            OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*2028*/            OPC_CheckPredicate, 23, // Predicate_LoadStore8_32Pat
/*2030*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*2033*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*2036*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2040*/            OPC_EmitInteger, MVT::i32, 1, 
/*2043*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCWrapper), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                    // Src: (st (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_LoadStore8_32Pat>> - Complexity = 26
                    // Dst: (MVCWrapper bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 1:i32)
/*2054*/          /*Scope*/ 38, /*->2093*/
/*2055*/            OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*2057*/            OPC_MoveParent,
/*2058*/            OPC_RecordChild2, // #3 = $dest
/*2059*/            OPC_CheckChild2Type, MVT::i64,
/*2061*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2063*/            OPC_CheckPredicate, 6, // Predicate_truncstore
/*2065*/            OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*2067*/            OPC_CheckPredicate, 24, // Predicate_LoadStore16_32Pat
/*2069*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*2072*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*2075*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2079*/            OPC_EmitInteger, MVT::i32, 2, 
/*2082*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCWrapper), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                    // Src: (st (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_LoadStore16_32Pat>> - Complexity = 26
                    // Dst: (MVCWrapper bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 2:i32)
/*2093*/          0, /*End of Scope*/
/*2094*/        /*Scope*/ 38, /*->2133*/
/*2095*/          OPC_CheckPredicate, 13, // Predicate_load
/*2097*/          OPC_CheckType, MVT::i32,
/*2099*/          OPC_MoveParent,
/*2100*/          OPC_RecordChild2, // #3 = $dest
/*2101*/          OPC_CheckChild2Type, MVT::i64,
/*2103*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2105*/          OPC_CheckPredicate, 15, // Predicate_store
/*2107*/          OPC_CheckPredicate, 25, // Predicate_LoadStore32_32Pat
/*2109*/          OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*2112*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*2115*/          OPC_EmitMergeInputChains, 2, 0, 1, 
/*2119*/          OPC_EmitInteger, MVT::i32, 4, 
/*2122*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCWrapper), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                  // Src: (st (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_LoadStore32_32Pat>> - Complexity = 26
                  // Dst: (MVCWrapper bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 4:i32)
/*2133*/        /*Scope*/ 123, /*->2257*/
/*2134*/          OPC_CheckPredicate, 1, // Predicate_anyextload
/*2136*/          OPC_CheckType, MVT::i64,
/*2138*/          OPC_Scope, 38, /*->2178*/ // 3 children in Scope
/*2140*/            OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*2142*/            OPC_MoveParent,
/*2143*/            OPC_RecordChild2, // #3 = $dest
/*2144*/            OPC_CheckChild2Type, MVT::i64,
/*2146*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2148*/            OPC_CheckPredicate, 6, // Predicate_truncstore
/*2150*/            OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*2152*/            OPC_CheckPredicate, 26, // Predicate_LoadStore8Pat
/*2154*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*2157*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*2160*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2164*/            OPC_EmitInteger, MVT::i32, 1, 
/*2167*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCWrapper), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                    // Src: (st (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_LoadStore8Pat>> - Complexity = 26
                    // Dst: (MVCWrapper bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 1:i32)
/*2178*/          /*Scope*/ 38, /*->2217*/
/*2179*/            OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*2181*/            OPC_MoveParent,
/*2182*/            OPC_RecordChild2, // #3 = $dest
/*2183*/            OPC_CheckChild2Type, MVT::i64,
/*2185*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2187*/            OPC_CheckPredicate, 6, // Predicate_truncstore
/*2189*/            OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*2191*/            OPC_CheckPredicate, 27, // Predicate_LoadStore16Pat
/*2193*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*2196*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*2199*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2203*/            OPC_EmitInteger, MVT::i32, 2, 
/*2206*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCWrapper), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                    // Src: (st (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_LoadStore16Pat>> - Complexity = 26
                    // Dst: (MVCWrapper bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 2:i32)
/*2217*/          /*Scope*/ 38, /*->2256*/
/*2218*/            OPC_CheckPredicate, 17, // Predicate_anyextloadi32
/*2220*/            OPC_MoveParent,
/*2221*/            OPC_RecordChild2, // #3 = $dest
/*2222*/            OPC_CheckChild2Type, MVT::i64,
/*2224*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2226*/            OPC_CheckPredicate, 6, // Predicate_truncstore
/*2228*/            OPC_CheckPredicate, 19, // Predicate_truncstorei32
/*2230*/            OPC_CheckPredicate, 28, // Predicate_LoadStore32Pat
/*2232*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*2235*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*2238*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2242*/            OPC_EmitInteger, MVT::i32, 4, 
/*2245*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCWrapper), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                    // Src: (st (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi32>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>><<P:Predicate_LoadStore32Pat>> - Complexity = 26
                    // Dst: (MVCWrapper bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 4:i32)
/*2256*/          0, /*End of Scope*/
/*2257*/        /*Scope*/ 20|128,1/*148*/, /*->2407*/
/*2259*/          OPC_CheckPredicate, 13, // Predicate_load
/*2261*/          OPC_SwitchType /*4 cases */, 34,  MVT::i64,// ->2298
/*2264*/            OPC_MoveParent,
/*2265*/            OPC_RecordChild2, // #3 = $dest
/*2266*/            OPC_CheckChild2Type, MVT::i64,
/*2268*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2270*/            OPC_CheckPredicate, 15, // Predicate_store
/*2272*/            OPC_CheckPredicate, 29, // Predicate_LoadStore64Pat
/*2274*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*2277*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*2280*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2284*/            OPC_EmitInteger, MVT::i32, 8, 
/*2287*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCWrapper), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                    // Src: (st (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_LoadStore64Pat>> - Complexity = 26
                    // Dst: (MVCWrapper bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 8:i32)
                  /*SwitchType*/ 34,  MVT::f32,// ->2334
/*2300*/            OPC_MoveParent,
/*2301*/            OPC_RecordChild2, // #3 = $dest
/*2302*/            OPC_CheckChild2Type, MVT::i64,
/*2304*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2306*/            OPC_CheckPredicate, 15, // Predicate_store
/*2308*/            OPC_CheckPredicate, 30, // Predicate_LoadStoreF32Pat
/*2310*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*2313*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*2316*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2320*/            OPC_EmitInteger, MVT::i32, 4, 
/*2323*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCWrapper), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                    // Src: (st (ld:f32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_LoadStoreF32Pat>> - Complexity = 26
                    // Dst: (MVCWrapper bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 4:i32)
                  /*SwitchType*/ 34,  MVT::f64,// ->2370
/*2336*/            OPC_MoveParent,
/*2337*/            OPC_RecordChild2, // #3 = $dest
/*2338*/            OPC_CheckChild2Type, MVT::i64,
/*2340*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2342*/            OPC_CheckPredicate, 15, // Predicate_store
/*2344*/            OPC_CheckPredicate, 31, // Predicate_LoadStoreF64Pat
/*2346*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*2349*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*2352*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2356*/            OPC_EmitInteger, MVT::i32, 8, 
/*2359*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCWrapper), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                    // Src: (st (ld:f64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_LoadStoreF64Pat>> - Complexity = 26
                    // Dst: (MVCWrapper bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 8:i32)
                  /*SwitchType*/ 34,  MVT::f128,// ->2406
/*2372*/            OPC_MoveParent,
/*2373*/            OPC_RecordChild2, // #3 = $dest
/*2374*/            OPC_CheckChild2Type, MVT::i64,
/*2376*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2378*/            OPC_CheckPredicate, 15, // Predicate_store
/*2380*/            OPC_CheckPredicate, 32, // Predicate_LoadStoreF128Pat
/*2382*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*2385*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*2388*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2392*/            OPC_EmitInteger, MVT::i32, 16, 
/*2395*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCWrapper), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                    // Src: (st (ld:f128 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_LoadStoreF128Pat>> - Complexity = 26
                    // Dst: (MVCWrapper bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 16:i32)
                  0, // EndSwitchType
/*2407*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 55,  TARGET_VAL(ISD::BSWAP),// ->2466
/*2411*/        OPC_RecordChild0, // #1 = $R1
/*2412*/        OPC_SwitchType /*2 cases */, 24,  MVT::i32,// ->2439
/*2415*/          OPC_MoveParent,
/*2416*/          OPC_RecordChild2, // #2 = $XBD2
/*2417*/          OPC_CheckChild2Type, MVT::i64,
/*2419*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2421*/          OPC_CheckPredicate, 15, // Predicate_store
/*2423*/          OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*2425*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*2428*/          OPC_EmitMergeInputChains1_0,
/*2429*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STRV), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st (bswap:i32 GR32:i32:$R1), bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 19
                  // Dst: (STRV GR32:i32:$R1, bdxaddr20only:i64:$XBD2)
                /*SwitchType*/ 24,  MVT::i64,// ->2465
/*2441*/          OPC_MoveParent,
/*2442*/          OPC_RecordChild2, // #2 = $XBD2
/*2443*/          OPC_CheckChild2Type, MVT::i64,
/*2445*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2447*/          OPC_CheckPredicate, 15, // Predicate_store
/*2449*/          OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*2451*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*2454*/          OPC_EmitMergeInputChains1_0,
/*2455*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STRVG), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st (bswap:i64 GR64:i64:$R1), bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 19
                  // Dst: (STRVG GR64:i64:$R1, bdxaddr20only:i64:$XBD2)
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*2467*/    /*Scope*/ 22|128,5/*662*/, /*->3131*/
/*2469*/      OPC_RecordChild1, // #1 = $R1
/*2470*/      OPC_Scope, 23, /*->2495*/ // 12 children in Scope
/*2472*/        OPC_CheckChild1Type, MVT::i32,
/*2474*/        OPC_RecordChild2, // #2 = $I2
/*2475*/        OPC_CheckChild2Type, MVT::i64,
/*2477*/        OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2479*/        OPC_CheckPredicate, 15, // Predicate_store
/*2481*/        OPC_CheckPredicate, 33, // Predicate_aligned_store
/*2483*/        OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*2486*/        OPC_EmitMergeInputChains1_0,
/*2487*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::STRL32), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                // Src: (st GR32:i32:$R1, pcrel32:i64:$I2)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_aligned_store>> - Complexity = 17
                // Dst: (STRL32 GR32:i32:$R1, pcrel32:i64:$I2)
/*2495*/      /*Scope*/ 23, /*->2519*/
/*2496*/        OPC_CheckChild1Type, MVT::i64,
/*2498*/        OPC_RecordChild2, // #2 = $I2
/*2499*/        OPC_CheckChild2Type, MVT::i64,
/*2501*/        OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2503*/        OPC_CheckPredicate, 15, // Predicate_store
/*2505*/        OPC_CheckPredicate, 33, // Predicate_aligned_store
/*2507*/        OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*2510*/        OPC_EmitMergeInputChains1_0,
/*2511*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::STGRL), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                // Src: (st GR64:i64:$R1, pcrel32:i64:$I2)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_aligned_store>> - Complexity = 17
                // Dst: (STGRL GR64:i64:$R1, pcrel32:i64:$I2)
/*2519*/      /*Scope*/ 67, /*->2587*/
/*2520*/        OPC_MoveChild, 1,
/*2522*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2525*/        OPC_SwitchType /*2 cases */, 28,  MVT::i32,// ->2556
/*2528*/          OPC_CheckPredicate, 34, // Predicate_imm32sx16
/*2530*/          OPC_MoveParent,
/*2531*/          OPC_RecordChild2, // #2 = $BD1
/*2532*/          OPC_CheckChild2Type, MVT::i64,
/*2534*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2536*/          OPC_CheckPredicate, 15, // Predicate_store
/*2538*/          OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$BD1 #3 #4
/*2541*/          OPC_EmitMergeInputChains1_0,
/*2542*/          OPC_EmitConvertToTarget, 1,
/*2544*/          OPC_EmitNodeXForm, 2, 5, // SIMM16
/*2547*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVHI), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (st (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2, bdaddr12only:i64:$BD1)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 17
                  // Dst: (MVHI bdaddr12only:i64:$BD1, (SIMM16:i32 (imm:i32):$I2))
                /*SwitchType*/ 28,  MVT::i64,// ->2586
/*2558*/          OPC_CheckPredicate, 35, // Predicate_imm64sx16
/*2560*/          OPC_MoveParent,
/*2561*/          OPC_RecordChild2, // #2 = $BD1
/*2562*/          OPC_CheckChild2Type, MVT::i64,
/*2564*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2566*/          OPC_CheckPredicate, 15, // Predicate_store
/*2568*/          OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$BD1 #3 #4
/*2571*/          OPC_EmitMergeInputChains1_0,
/*2572*/          OPC_EmitConvertToTarget, 1,
/*2574*/          OPC_EmitNodeXForm, 2, 5, // SIMM16
/*2577*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVGHI), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (st (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$I2, bdaddr12only:i64:$BD1)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 17
                  // Dst: (MVGHI bdaddr12only:i64:$BD1, (SIMM16:i64 (imm:i64):$I2))
                0, // EndSwitchType
/*2587*/      /*Scope*/ 63, /*->2651*/
/*2588*/        OPC_CheckChild1Type, MVT::i32,
/*2590*/        OPC_RecordChild2, // #2 = $I2
/*2591*/        OPC_CheckChild2Type, MVT::i64,
/*2593*/        OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2595*/        OPC_Scope, 18, /*->2615*/ // 2 children in Scope
/*2597*/          OPC_CheckPredicate, 6, // Predicate_truncstore
/*2599*/          OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*2601*/          OPC_CheckPredicate, 36, // Predicate_aligned_truncstorei16
/*2603*/          OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*2606*/          OPC_EmitMergeInputChains1_0,
/*2607*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STHRL32), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (st GR32:i32:$R1, pcrel32:i64:$I2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_aligned_truncstorei16>> - Complexity = 17
                  // Dst: (STHRL32 GR32:i32:$R1, pcrel32:i64:$I2)
/*2615*/        /*Scope*/ 34, /*->2650*/
/*2616*/          OPC_CheckPredicate, 15, // Predicate_store
/*2618*/          OPC_Scope, 14, /*->2634*/ // 2 children in Scope
/*2620*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*2623*/            OPC_EmitMergeInputChains1_0,
/*2624*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::ST32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                    // Dst: (ST32 GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)
/*2634*/          /*Scope*/ 14, /*->2649*/
/*2635*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*2638*/            OPC_EmitMergeInputChains1_0,
/*2639*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::ST32Y), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                    // Dst: (ST32Y GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)
/*2649*/          0, /*End of Scope*/
/*2650*/        0, /*End of Scope*/
/*2651*/      /*Scope*/ 65, /*->2717*/
/*2652*/        OPC_CheckChild1Type, MVT::i64,
/*2654*/        OPC_RecordChild2, // #2 = $I2
/*2655*/        OPC_CheckChild2Type, MVT::i64,
/*2657*/        OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2659*/        OPC_Scope, 38, /*->2699*/ // 2 children in Scope
/*2661*/          OPC_CheckPredicate, 6, // Predicate_truncstore
/*2663*/          OPC_Scope, 16, /*->2681*/ // 2 children in Scope
/*2665*/            OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*2667*/            OPC_CheckPredicate, 36, // Predicate_aligned_truncstorei16
/*2669*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*2672*/            OPC_EmitMergeInputChains1_0,
/*2673*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STHRL), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                    // Src: (st GR64:i64:$R1, pcrel32:i64:$I2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_aligned_truncstorei16>> - Complexity = 17
                    // Dst: (STHRL GR64:i64:$R1, pcrel32:i64:$I2)
/*2681*/          /*Scope*/ 16, /*->2698*/
/*2682*/            OPC_CheckPredicate, 19, // Predicate_truncstorei32
/*2684*/            OPC_CheckPredicate, 37, // Predicate_aligned_truncstorei32
/*2686*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*2689*/            OPC_EmitMergeInputChains1_0,
/*2690*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STRL), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                    // Src: (st GR64:i64:$R1, pcrel32:i64:$I2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>><<P:Predicate_aligned_truncstorei32>> - Complexity = 17
                    // Dst: (STRL GR64:i64:$R1, pcrel32:i64:$I2)
/*2698*/          0, /*End of Scope*/
/*2699*/        /*Scope*/ 16, /*->2716*/
/*2700*/          OPC_CheckPredicate, 15, // Predicate_store
/*2702*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*2705*/          OPC_EmitMergeInputChains1_0,
/*2706*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STG), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st GR64:i64:$R1, bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (STG GR64:i64:$R1, bdxaddr20only:i64:$XBD2)
/*2716*/        0, /*End of Scope*/
/*2717*/      /*Scope*/ 23, /*->2741*/
/*2718*/        OPC_CheckChild1Type, MVT::Untyped,
/*2720*/        OPC_RecordChild2, // #2 = $dst
/*2721*/        OPC_CheckChild2Type, MVT::i64,
/*2723*/        OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2725*/        OPC_CheckPredicate, 15, // Predicate_store
/*2727*/        OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Only128:$dst #3 #4 #5
/*2730*/        OPC_EmitMergeInputChains1_0,
/*2731*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ST128), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                // Src: (st GR128:Untyped:$src, bdxaddr20only128:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                // Dst: (ST128 GR128:Untyped:$src, bdxaddr20only128:i64:$dst)
/*2741*/      /*Scope*/ 81, /*->2823*/
/*2742*/        OPC_MoveChild, 1,
/*2744*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2747*/        OPC_CheckType, MVT::i32,
/*2749*/        OPC_MoveParent,
/*2750*/        OPC_RecordChild2, // #2 = $BD1
/*2751*/        OPC_CheckChild2Type, MVT::i64,
/*2753*/        OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2755*/        OPC_CheckPredicate, 6, // Predicate_truncstore
/*2757*/        OPC_Scope, 42, /*->2801*/ // 2 children in Scope
/*2759*/          OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*2761*/          OPC_Scope, 18, /*->2781*/ // 2 children in Scope
/*2763*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr12Pair:$BD1 #3 #4
/*2766*/            OPC_EmitMergeInputChains1_0,
/*2767*/            OPC_EmitConvertToTarget, 1,
/*2769*/            OPC_EmitNodeXForm, 1, 5, // UIMM8
/*2772*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                    // Src: (st (imm:i32)<<X:UIMM8>>:$I2, bdaddr12pair:i64:$BD1)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (MVI bdaddr12pair:i64:$BD1, (UIMM8:i32 (imm:i32):$I2))
/*2781*/          /*Scope*/ 18, /*->2800*/
/*2782*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDAddr20Pair:$BD1 #3 #4
/*2785*/            OPC_EmitMergeInputChains1_0,
/*2786*/            OPC_EmitConvertToTarget, 1,
/*2788*/            OPC_EmitNodeXForm, 1, 5, // UIMM8
/*2791*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                    // Src: (st (imm:i32)<<X:UIMM8>>:$I2, bdaddr20pair:i64:$BD1)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (MVIY bdaddr20pair:i64:$BD1, (UIMM8:i32 (imm:i32):$I2))
/*2800*/          0, /*End of Scope*/
/*2801*/        /*Scope*/ 20, /*->2822*/
/*2802*/          OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*2804*/          OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$BD1 #3 #4
/*2807*/          OPC_EmitMergeInputChains1_0,
/*2808*/          OPC_EmitConvertToTarget, 1,
/*2810*/          OPC_EmitNodeXForm, 2, 5, // SIMM16
/*2813*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVHHI), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (st (imm:i32)<<X:SIMM16>>:$I2, bdaddr12only:i64:$BD1)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                  // Dst: (MVHHI bdaddr12only:i64:$BD1, (SIMM16:i32 (imm:i32):$I2))
/*2822*/        0, /*End of Scope*/
/*2823*/      /*Scope*/ 81, /*->2905*/
/*2824*/        OPC_CheckChild1Type, MVT::i32,
/*2826*/        OPC_RecordChild2, // #2 = $XBD2
/*2827*/        OPC_CheckChild2Type, MVT::i64,
/*2829*/        OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2831*/        OPC_CheckPredicate, 6, // Predicate_truncstore
/*2833*/        OPC_Scope, 34, /*->2869*/ // 2 children in Scope
/*2835*/          OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*2837*/          OPC_Scope, 14, /*->2853*/ // 2 children in Scope
/*2839*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*2842*/            OPC_EmitMergeInputChains1_0,
/*2843*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STC32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (STC32 GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)
/*2853*/          /*Scope*/ 14, /*->2868*/
/*2854*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*2857*/            OPC_EmitMergeInputChains1_0,
/*2858*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (STC32Y GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)
/*2868*/          0, /*End of Scope*/
/*2869*/        /*Scope*/ 34, /*->2904*/
/*2870*/          OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*2872*/          OPC_Scope, 14, /*->2888*/ // 2 children in Scope
/*2874*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*2877*/            OPC_EmitMergeInputChains1_0,
/*2878*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STH32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                    // Dst: (STH32 GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)
/*2888*/          /*Scope*/ 14, /*->2903*/
/*2889*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*2892*/            OPC_EmitMergeInputChains1_0,
/*2893*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STH32Y), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                    // Dst: (STH32Y GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)
/*2903*/          0, /*End of Scope*/
/*2904*/        0, /*End of Scope*/
/*2905*/      /*Scope*/ 116, /*->3022*/
/*2906*/        OPC_CheckChild1Type, MVT::i64,
/*2908*/        OPC_RecordChild2, // #2 = $XBD2
/*2909*/        OPC_CheckChild2Type, MVT::i64,
/*2911*/        OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2913*/        OPC_CheckPredicate, 6, // Predicate_truncstore
/*2915*/        OPC_Scope, 34, /*->2951*/ // 3 children in Scope
/*2917*/          OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*2919*/          OPC_Scope, 14, /*->2935*/ // 2 children in Scope
/*2921*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*2924*/            OPC_EmitMergeInputChains1_0,
/*2925*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STC), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR64:i64:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (STC GR64:i64:$R1, bdxaddr12pair:i64:$XBD2)
/*2935*/          /*Scope*/ 14, /*->2950*/
/*2936*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*2939*/            OPC_EmitMergeInputChains1_0,
/*2940*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STCY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR64:i64:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (STCY GR64:i64:$R1, bdxaddr20pair:i64:$XBD2)
/*2950*/          0, /*End of Scope*/
/*2951*/        /*Scope*/ 34, /*->2986*/
/*2952*/          OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*2954*/          OPC_Scope, 14, /*->2970*/ // 2 children in Scope
/*2956*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*2959*/            OPC_EmitMergeInputChains1_0,
/*2960*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STH), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR64:i64:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                    // Dst: (STH GR64:i64:$R1, bdxaddr12pair:i64:$XBD2)
/*2970*/          /*Scope*/ 14, /*->2985*/
/*2971*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*2974*/            OPC_EmitMergeInputChains1_0,
/*2975*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STHY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR64:i64:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                    // Dst: (STHY GR64:i64:$R1, bdxaddr20pair:i64:$XBD2)
/*2985*/          0, /*End of Scope*/
/*2986*/        /*Scope*/ 34, /*->3021*/
/*2987*/          OPC_CheckPredicate, 19, // Predicate_truncstorei32
/*2989*/          OPC_Scope, 14, /*->3005*/ // 2 children in Scope
/*2991*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*2994*/            OPC_EmitMergeInputChains1_0,
/*2995*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::ST), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR64:i64:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 16
                    // Dst: (ST GR64:i64:$R1, bdxaddr12pair:i64:$XBD2)
/*3005*/          /*Scope*/ 14, /*->3020*/
/*3006*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*3009*/            OPC_EmitMergeInputChains1_0,
/*3010*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR64:i64:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 16
                    // Dst: (STY GR64:i64:$R1, bdxaddr20pair:i64:$XBD2)
/*3020*/          0, /*End of Scope*/
/*3021*/        0, /*End of Scope*/
/*3022*/      /*Scope*/ 41, /*->3064*/
/*3023*/        OPC_CheckChild1Type, MVT::f32,
/*3025*/        OPC_RecordChild2, // #2 = $XBD2
/*3026*/        OPC_CheckChild2Type, MVT::i64,
/*3028*/        OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*3030*/        OPC_CheckPredicate, 15, // Predicate_store
/*3032*/        OPC_Scope, 14, /*->3048*/ // 2 children in Scope
/*3034*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*3037*/          OPC_EmitMergeInputChains1_0,
/*3038*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STE), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st FP32:f32:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (STE FP32:f32:$R1, bdxaddr12pair:i64:$XBD2)
/*3048*/        /*Scope*/ 14, /*->3063*/
/*3049*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*3052*/          OPC_EmitMergeInputChains1_0,
/*3053*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STEY), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st FP32:f32:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (STEY FP32:f32:$R1, bdxaddr20pair:i64:$XBD2)
/*3063*/        0, /*End of Scope*/
/*3064*/      /*Scope*/ 41, /*->3106*/
/*3065*/        OPC_CheckChild1Type, MVT::f64,
/*3067*/        OPC_RecordChild2, // #2 = $XBD2
/*3068*/        OPC_CheckChild2Type, MVT::i64,
/*3070*/        OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*3072*/        OPC_CheckPredicate, 15, // Predicate_store
/*3074*/        OPC_Scope, 14, /*->3090*/ // 2 children in Scope
/*3076*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*3079*/          OPC_EmitMergeInputChains1_0,
/*3080*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STD), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st FP64:f64:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (STD FP64:f64:$R1, bdxaddr12pair:i64:$XBD2)
/*3090*/        /*Scope*/ 14, /*->3105*/
/*3091*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*3094*/          OPC_EmitMergeInputChains1_0,
/*3095*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STDY), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st FP64:f64:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (STDY FP64:f64:$R1, bdxaddr20pair:i64:$XBD2)
/*3105*/        0, /*End of Scope*/
/*3106*/      /*Scope*/ 23, /*->3130*/
/*3107*/        OPC_CheckChild1Type, MVT::f128,
/*3109*/        OPC_RecordChild2, // #2 = $dst
/*3110*/        OPC_CheckChild2Type, MVT::i64,
/*3112*/        OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*3114*/        OPC_CheckPredicate, 15, // Predicate_store
/*3116*/        OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Only128:$dst #3 #4 #5
/*3119*/        OPC_EmitMergeInputChains1_0,
/*3120*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::STX), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                // Src: (st FP128:f128:$src, bdxaddr20only128:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                // Dst: (STX FP128:f128:$src, bdxaddr20only128:i64:$dst)
/*3130*/      0, /*End of Scope*/
/*3131*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 122|128,1/*250*/,  TARGET_VAL(ISD::SRA),// ->3386
/*3136*/    OPC_Scope, 79|128,1/*207*/, /*->3346*/ // 2 children in Scope
/*3139*/      OPC_MoveChild, 0,
/*3141*/      OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*3144*/      OPC_MoveChild, 0,
/*3146*/      OPC_SwitchOpcode /*2 cases */, 98,  TARGET_VAL(ISD::ANY_EXTEND),// ->3248
/*3150*/        OPC_MoveChild, 0,
/*3152*/        OPC_CheckOpcode, TARGET_VAL(SystemZISD::SELECT_CCMASK),
/*3155*/        OPC_CaptureGlueInput,
/*3156*/        OPC_MoveChild, 0,
/*3158*/        OPC_CheckInteger, 1, 
/*3160*/        OPC_MoveParent,
/*3161*/        OPC_MoveChild, 1,
/*3163*/        OPC_CheckInteger, 0, 
/*3165*/        OPC_MoveParent,
/*3166*/        OPC_RecordChild2, // #0 = $valid
/*3167*/        OPC_MoveChild, 2,
/*3169*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3172*/        OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*3174*/        OPC_MoveParent,
/*3175*/        OPC_RecordChild3, // #1 = $cc
/*3176*/        OPC_MoveChild, 3,
/*3178*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3181*/        OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*3183*/        OPC_MoveParent,
/*3184*/        OPC_MoveParent,
/*3185*/        OPC_MoveParent,
/*3186*/        OPC_MoveChild, 1,
/*3188*/        OPC_CheckInteger, 63, 
/*3190*/        OPC_CheckType, MVT::i32,
/*3192*/        OPC_MoveParent,
/*3193*/        OPC_MoveParent,
/*3194*/        OPC_MoveChild, 1,
/*3196*/        OPC_CheckInteger, 63, 
/*3198*/        OPC_CheckType, MVT::i32,
/*3200*/        OPC_MoveParent,
/*3201*/        OPC_EmitInteger, MVT::i64, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3213*/        OPC_EmitNode, TARGET_VAL(SystemZ::LGHI), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2,  // Results = #3
/*3221*/        OPC_EmitInteger, MVT::i64, 0, 
/*3224*/        OPC_EmitNode, TARGET_VAL(SystemZ::LGHI), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 4,  // Results = #5
/*3232*/        OPC_EmitConvertToTarget, 0,
/*3234*/        OPC_EmitConvertToTarget, 1,
/*3236*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::Select64), 0|OPFL_GlueInput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 3, 5, 6, 7, 
                // Src: (sra:i64 (shl:i64 (anyext:i64 (z_select_ccmask:i32 1:i32, 0:i32, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc)), 63:i32), 63:i32) - Complexity = 40
                // Dst: (Select64:i64:i32 (LGHI:i64 -1:i64), (LGHI:i64 0:i64), (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc)
              /*SwitchOpcode*/ 94,  TARGET_VAL(SystemZISD::SELECT_CCMASK),// ->3345
/*3251*/        OPC_CaptureGlueInput,
/*3252*/        OPC_MoveChild, 0,
/*3254*/        OPC_CheckInteger, 1, 
/*3256*/        OPC_MoveParent,
/*3257*/        OPC_MoveChild, 1,
/*3259*/        OPC_CheckInteger, 0, 
/*3261*/        OPC_MoveParent,
/*3262*/        OPC_RecordChild2, // #0 = $valid
/*3263*/        OPC_MoveChild, 2,
/*3265*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3268*/        OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*3270*/        OPC_MoveParent,
/*3271*/        OPC_RecordChild3, // #1 = $cc
/*3272*/        OPC_MoveChild, 3,
/*3274*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3277*/        OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*3279*/        OPC_MoveParent,
/*3280*/        OPC_MoveParent,
/*3281*/        OPC_MoveChild, 1,
/*3283*/        OPC_CheckInteger, 31, 
/*3285*/        OPC_CheckType, MVT::i32,
/*3287*/        OPC_MoveParent,
/*3288*/        OPC_MoveParent,
/*3289*/        OPC_MoveChild, 1,
/*3291*/        OPC_CheckInteger, 31, 
/*3293*/        OPC_CheckType, MVT::i32,
/*3295*/        OPC_MoveParent,
/*3296*/        OPC_CheckType, MVT::i32,
/*3298*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3310*/        OPC_EmitNode, TARGET_VAL(SystemZ::LHI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*3318*/        OPC_EmitInteger, MVT::i32, 0, 
/*3321*/        OPC_EmitNode, TARGET_VAL(SystemZ::LHI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 4,  // Results = #5
/*3329*/        OPC_EmitConvertToTarget, 0,
/*3331*/        OPC_EmitConvertToTarget, 1,
/*3333*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::Select32), 0|OPFL_GlueInput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 3, 5, 6, 7, 
                // Src: (sra:i32 (shl:i32 (z_select_ccmask:i32 1:i32, 0:i32, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), 31:i32), 31:i32) - Complexity = 37
                // Dst: (Select32:i32:i32 (LHI:i32 -1:i32), (LHI:i32 0:i32), (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc)
              0, // EndSwitchOpcode
/*3346*/    /*Scope*/ 38, /*->3385*/
/*3347*/      OPC_RecordChild0, // #0 = $R1src
/*3348*/      OPC_RecordChild1, // #1 = $BD2
/*3349*/      OPC_CheckChild1Type, MVT::i32,
/*3351*/      OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->3368
/*3354*/        OPC_CheckComplexPat, /*CP*/9, /*#*/1, // selectBDAddr12Only:$BD2 #2 #3
/*3357*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SRA), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 0, 2, 3, 
                // Src: (sra:i32 GR32:i32:$R1src, shift12only:i32:$BD2) - Complexity = 12
                // Dst: (SRA:i32:i32 GR32:i32:$R1src, shift12only:i32:$BD2)
              /*SwitchType*/ 14,  MVT::i64,// ->3384
/*3370*/        OPC_CheckComplexPat, /*CP*/10, /*#*/1, // selectBDAddr20Only:$BD2 #2 #3
/*3373*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SRAG), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 0, 2, 3, 
                // Src: (sra:i64 GR64:i64:$R3, shift20only:i32:$BD2) - Complexity = 12
                // Dst: (SRAG:i64:i32 GR64:i64:$R3, shift20only:i32:$BD2)
              0, // EndSwitchType
/*3385*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 66|128,12/*1602*/,  TARGET_VAL(ISD::OR),// ->4992
/*3390*/    OPC_Scope, 88|128,1/*216*/, /*->3609*/ // 20 children in Scope
/*3393*/      OPC_MoveChild, 0,
/*3395*/      OPC_Scope, 105, /*->3502*/ // 2 children in Scope
/*3397*/        OPC_CheckAndImm, 0|128,126|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551360*/, 
/*3408*/        OPC_RecordChild0, // #0 = $R1src
/*3409*/        OPC_MoveParent,
/*3410*/        OPC_MoveChild, 1,
/*3412*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3415*/        OPC_RecordMemRef,
/*3416*/        OPC_RecordNode, // #1 = 'ld' chained node
/*3417*/        OPC_CheckFoldableChainNode,
/*3418*/        OPC_RecordChild1, // #2 = $XBD2
/*3419*/        OPC_CheckChild1Type, MVT::i64,
/*3421*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3423*/        OPC_CheckPredicate, 38, // Predicate_zextload
/*3425*/        OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*3427*/        OPC_MoveParent,
/*3428*/        OPC_SwitchType /*2 cases */, 34,  MVT::i32,// ->3465
/*3431*/          OPC_Scope, 15, /*->3448*/ // 2 children in Scope
/*3433*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*3436*/            OPC_EmitMergeInputChains1_1,
/*3437*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (or:i32 (and:i32 GR32:i32:$R1src, -256:i32), (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>) - Complexity = 27
                    // Dst: (IC32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*3448*/          /*Scope*/ 15, /*->3464*/
/*3449*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*3452*/            OPC_EmitMergeInputChains1_1,
/*3453*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (or:i32 (and:i32 GR32:i32:$R1src, -256:i32), (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>) - Complexity = 27
                    // Dst: (IC32Y:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*3464*/          0, /*End of Scope*/
                /*SwitchType*/ 34,  MVT::i64,// ->3501
/*3467*/          OPC_Scope, 15, /*->3484*/ // 2 children in Scope
/*3469*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*3472*/            OPC_EmitMergeInputChains1_1,
/*3473*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (or:i64 (and:i64 GR64:i64:$R1src, -256:i64), (ld:i64 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>) - Complexity = 27
                    // Dst: (IC:i64 GR64:i64:$R1src, bdxaddr12pair:i64:$XBD2)
/*3484*/          /*Scope*/ 15, /*->3500*/
/*3485*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*3488*/            OPC_EmitMergeInputChains1_1,
/*3489*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::ICY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (or:i64 (and:i64 GR64:i64:$R1src, -256:i64), (ld:i64 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>) - Complexity = 27
                    // Dst: (ICY:i64 GR64:i64:$R1src, bdxaddr20pair:i64:$XBD2)
/*3500*/          0, /*End of Scope*/
                0, // EndSwitchType
/*3502*/      /*Scope*/ 105, /*->3608*/
/*3503*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3506*/        OPC_RecordMemRef,
/*3507*/        OPC_RecordNode, // #0 = 'ld' chained node
/*3508*/        OPC_CheckFoldableChainNode,
/*3509*/        OPC_RecordChild1, // #1 = $XBD2
/*3510*/        OPC_CheckChild1Type, MVT::i64,
/*3512*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3514*/        OPC_CheckPredicate, 38, // Predicate_zextload
/*3516*/        OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*3518*/        OPC_MoveParent,
/*3519*/        OPC_MoveChild, 1,
/*3521*/        OPC_CheckAndImm, 0|128,126|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551360*/, 
/*3532*/        OPC_RecordChild0, // #2 = $R1src
/*3533*/        OPC_MoveParent,
/*3534*/        OPC_SwitchType /*2 cases */, 34,  MVT::i32,// ->3571
/*3537*/          OPC_Scope, 15, /*->3554*/ // 2 children in Scope
/*3539*/            OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*3542*/            OPC_EmitMergeInputChains1_0,
/*3543*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (or:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (and:i32 GR32:i32:$R1src, -256:i32)) - Complexity = 27
                    // Dst: (IC32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*3554*/          /*Scope*/ 15, /*->3570*/
/*3555*/            OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*3558*/            OPC_EmitMergeInputChains1_0,
/*3559*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (or:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (and:i32 GR32:i32:$R1src, -256:i32)) - Complexity = 27
                    // Dst: (IC32Y:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*3570*/          0, /*End of Scope*/
                /*SwitchType*/ 34,  MVT::i64,// ->3607
/*3573*/          OPC_Scope, 15, /*->3590*/ // 2 children in Scope
/*3575*/            OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*3578*/            OPC_EmitMergeInputChains1_0,
/*3579*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (or:i64 (ld:i64 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (and:i64 GR64:i64:$R1src, -256:i64)) - Complexity = 27
                    // Dst: (IC:i64 GR64:i64:$R1src, bdxaddr12pair:i64:$XBD2)
/*3590*/          /*Scope*/ 15, /*->3606*/
/*3591*/            OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*3594*/            OPC_EmitMergeInputChains1_0,
/*3595*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::ICY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (or:i64 (ld:i64 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (and:i64 GR64:i64:$R1src, -256:i64)) - Complexity = 27
                    // Dst: (ICY:i64 GR64:i64:$R1src, bdxaddr20pair:i64:$XBD2)
/*3606*/          0, /*End of Scope*/
                0, // EndSwitchType
/*3608*/      0, /*End of Scope*/
/*3609*/    /*Scope*/ 38, /*->3648*/
/*3610*/      OPC_RecordChild0, // #0 = $src1
/*3611*/      OPC_MoveChild, 1,
/*3613*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3616*/      OPC_RecordMemRef,
/*3617*/      OPC_RecordNode, // #1 = 'ld' chained node
/*3618*/      OPC_CheckFoldableChainNode,
/*3619*/      OPC_RecordChild1, // #2 = $src2
/*3620*/      OPC_CheckChild1Type, MVT::i64,
/*3622*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3624*/      OPC_CheckPredicate, 38, // Predicate_zextload
/*3626*/      OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*3628*/      OPC_MoveParent,
/*3629*/      OPC_CheckPredicate, 40, // Predicate_or_as_inserti8
/*3631*/      OPC_CheckType, MVT::i32,
/*3633*/      OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*3636*/      OPC_EmitMergeInputChains1_1,
/*3637*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (or:i32 GR32:i32:$src1, (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_inserti8>> - Complexity = 20
              // Dst: (IC32:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*3648*/    /*Scope*/ 38, /*->3687*/
/*3649*/      OPC_MoveChild, 0,
/*3651*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3654*/      OPC_RecordMemRef,
/*3655*/      OPC_RecordNode, // #0 = 'ld' chained node
/*3656*/      OPC_CheckFoldableChainNode,
/*3657*/      OPC_RecordChild1, // #1 = $src2
/*3658*/      OPC_CheckChild1Type, MVT::i64,
/*3660*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3662*/      OPC_CheckPredicate, 38, // Predicate_zextload
/*3664*/      OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*3666*/      OPC_MoveParent,
/*3667*/      OPC_RecordChild1, // #2 = $src1
/*3668*/      OPC_CheckPredicate, 41, // Predicate_or_as_revinserti8
/*3670*/      OPC_CheckType, MVT::i32,
/*3672*/      OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*3675*/      OPC_EmitMergeInputChains1_0,
/*3676*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (or:i32 (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR32:i32:$src1)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
              // Dst: (IC32:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*3687*/    /*Scope*/ 38, /*->3726*/
/*3688*/      OPC_RecordChild0, // #0 = $src1
/*3689*/      OPC_MoveChild, 1,
/*3691*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3694*/      OPC_RecordMemRef,
/*3695*/      OPC_RecordNode, // #1 = 'ld' chained node
/*3696*/      OPC_CheckFoldableChainNode,
/*3697*/      OPC_RecordChild1, // #2 = $src2
/*3698*/      OPC_CheckChild1Type, MVT::i64,
/*3700*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3702*/      OPC_CheckPredicate, 38, // Predicate_zextload
/*3704*/      OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*3706*/      OPC_MoveParent,
/*3707*/      OPC_CheckPredicate, 40, // Predicate_or_as_inserti8
/*3709*/      OPC_CheckType, MVT::i32,
/*3711*/      OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*3714*/      OPC_EmitMergeInputChains1_1,
/*3715*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (or:i32 GR32:i32:$src1, (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_inserti8>> - Complexity = 20
              // Dst: (IC32Y:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*3726*/    /*Scope*/ 38, /*->3765*/
/*3727*/      OPC_MoveChild, 0,
/*3729*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3732*/      OPC_RecordMemRef,
/*3733*/      OPC_RecordNode, // #0 = 'ld' chained node
/*3734*/      OPC_CheckFoldableChainNode,
/*3735*/      OPC_RecordChild1, // #1 = $src2
/*3736*/      OPC_CheckChild1Type, MVT::i64,
/*3738*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3740*/      OPC_CheckPredicate, 38, // Predicate_zextload
/*3742*/      OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*3744*/      OPC_MoveParent,
/*3745*/      OPC_RecordChild1, // #2 = $src1
/*3746*/      OPC_CheckPredicate, 41, // Predicate_or_as_revinserti8
/*3748*/      OPC_CheckType, MVT::i32,
/*3750*/      OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*3753*/      OPC_EmitMergeInputChains1_0,
/*3754*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (or:i32 (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR32:i32:$src1)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
              // Dst: (IC32Y:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*3765*/    /*Scope*/ 38, /*->3804*/
/*3766*/      OPC_RecordChild0, // #0 = $src1
/*3767*/      OPC_MoveChild, 1,
/*3769*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3772*/      OPC_RecordMemRef,
/*3773*/      OPC_RecordNode, // #1 = 'ld' chained node
/*3774*/      OPC_CheckFoldableChainNode,
/*3775*/      OPC_RecordChild1, // #2 = $src2
/*3776*/      OPC_CheckChild1Type, MVT::i64,
/*3778*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3780*/      OPC_CheckPredicate, 38, // Predicate_zextload
/*3782*/      OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*3784*/      OPC_MoveParent,
/*3785*/      OPC_CheckPredicate, 40, // Predicate_or_as_inserti8
/*3787*/      OPC_CheckType, MVT::i64,
/*3789*/      OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*3792*/      OPC_EmitMergeInputChains1_1,
/*3793*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (or:i64 GR64:i64:$src1, (ld:i64 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_inserti8>> - Complexity = 20
              // Dst: (IC:i64 GR64:i64:$src1, bdxaddr12pair:i64:$src2)
/*3804*/    /*Scope*/ 38, /*->3843*/
/*3805*/      OPC_MoveChild, 0,
/*3807*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3810*/      OPC_RecordMemRef,
/*3811*/      OPC_RecordNode, // #0 = 'ld' chained node
/*3812*/      OPC_CheckFoldableChainNode,
/*3813*/      OPC_RecordChild1, // #1 = $src2
/*3814*/      OPC_CheckChild1Type, MVT::i64,
/*3816*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3818*/      OPC_CheckPredicate, 38, // Predicate_zextload
/*3820*/      OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*3822*/      OPC_MoveParent,
/*3823*/      OPC_RecordChild1, // #2 = $src1
/*3824*/      OPC_CheckPredicate, 41, // Predicate_or_as_revinserti8
/*3826*/      OPC_CheckType, MVT::i64,
/*3828*/      OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*3831*/      OPC_EmitMergeInputChains1_0,
/*3832*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (or:i64 (ld:i64 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR64:i64:$src1)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
              // Dst: (IC:i64 GR64:i64:$src1, bdxaddr12pair:i64:$src2)
/*3843*/    /*Scope*/ 38, /*->3882*/
/*3844*/      OPC_RecordChild0, // #0 = $src1
/*3845*/      OPC_MoveChild, 1,
/*3847*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3850*/      OPC_RecordMemRef,
/*3851*/      OPC_RecordNode, // #1 = 'ld' chained node
/*3852*/      OPC_CheckFoldableChainNode,
/*3853*/      OPC_RecordChild1, // #2 = $src2
/*3854*/      OPC_CheckChild1Type, MVT::i64,
/*3856*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3858*/      OPC_CheckPredicate, 38, // Predicate_zextload
/*3860*/      OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*3862*/      OPC_MoveParent,
/*3863*/      OPC_CheckPredicate, 40, // Predicate_or_as_inserti8
/*3865*/      OPC_CheckType, MVT::i64,
/*3867*/      OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*3870*/      OPC_EmitMergeInputChains1_1,
/*3871*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ICY), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (or:i64 GR64:i64:$src1, (ld:i64 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_inserti8>> - Complexity = 20
              // Dst: (ICY:i64 GR64:i64:$src1, bdxaddr20pair:i64:$src2)
/*3882*/    /*Scope*/ 59, /*->3942*/
/*3883*/      OPC_MoveChild, 0,
/*3885*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3888*/      OPC_RecordMemRef,
/*3889*/      OPC_RecordNode, // #0 = 'ld' chained node
/*3890*/      OPC_CheckFoldableChainNode,
/*3891*/      OPC_RecordChild1, // #1 = $src2
/*3892*/      OPC_CheckChild1Type, MVT::i64,
/*3894*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3896*/      OPC_CheckPredicate, 38, // Predicate_zextload
/*3898*/      OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*3900*/      OPC_MoveParent,
/*3901*/      OPC_RecordChild1, // #2 = $src1
/*3902*/      OPC_SwitchType /*2 cases */, 17,  MVT::i64,// ->3922
/*3905*/        OPC_CheckPredicate, 41, // Predicate_or_as_revinserti8
/*3907*/        OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*3910*/        OPC_EmitMergeInputChains1_0,
/*3911*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ICY), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (or:i64 (ld:i64 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR64:i64:$src1)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
                // Dst: (ICY:i64 GR64:i64:$src1, bdxaddr20pair:i64:$src2)
              /*SwitchType*/ 17,  MVT::i32,// ->3941
/*3924*/        OPC_CheckPredicate, 40, // Predicate_or_as_inserti8
/*3926*/        OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*3929*/        OPC_EmitMergeInputChains1_0,
/*3930*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (or:i32 (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR32:i32:$src1)<<P:Predicate_or_as_inserti8>> - Complexity = 20
                // Dst: (IC32:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
              0, // EndSwitchType
/*3942*/    /*Scope*/ 38, /*->3981*/
/*3943*/      OPC_RecordChild0, // #0 = $src1
/*3944*/      OPC_MoveChild, 1,
/*3946*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3949*/      OPC_RecordMemRef,
/*3950*/      OPC_RecordNode, // #1 = 'ld' chained node
/*3951*/      OPC_CheckFoldableChainNode,
/*3952*/      OPC_RecordChild1, // #2 = $src2
/*3953*/      OPC_CheckChild1Type, MVT::i64,
/*3955*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3957*/      OPC_CheckPredicate, 38, // Predicate_zextload
/*3959*/      OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*3961*/      OPC_MoveParent,
/*3962*/      OPC_CheckPredicate, 41, // Predicate_or_as_revinserti8
/*3964*/      OPC_CheckType, MVT::i32,
/*3966*/      OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*3969*/      OPC_EmitMergeInputChains1_1,
/*3970*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (or:i32 GR32:i32:$src1, (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
              // Dst: (IC32:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*3981*/    /*Scope*/ 38, /*->4020*/
/*3982*/      OPC_MoveChild, 0,
/*3984*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3987*/      OPC_RecordMemRef,
/*3988*/      OPC_RecordNode, // #0 = 'ld' chained node
/*3989*/      OPC_CheckFoldableChainNode,
/*3990*/      OPC_RecordChild1, // #1 = $src2
/*3991*/      OPC_CheckChild1Type, MVT::i64,
/*3993*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3995*/      OPC_CheckPredicate, 38, // Predicate_zextload
/*3997*/      OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*3999*/      OPC_MoveParent,
/*4000*/      OPC_RecordChild1, // #2 = $src1
/*4001*/      OPC_CheckPredicate, 40, // Predicate_or_as_inserti8
/*4003*/      OPC_CheckType, MVT::i32,
/*4005*/      OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*4008*/      OPC_EmitMergeInputChains1_0,
/*4009*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (or:i32 (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR32:i32:$src1)<<P:Predicate_or_as_inserti8>> - Complexity = 20
              // Dst: (IC32Y:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*4020*/    /*Scope*/ 38, /*->4059*/
/*4021*/      OPC_RecordChild0, // #0 = $src1
/*4022*/      OPC_MoveChild, 1,
/*4024*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4027*/      OPC_RecordMemRef,
/*4028*/      OPC_RecordNode, // #1 = 'ld' chained node
/*4029*/      OPC_CheckFoldableChainNode,
/*4030*/      OPC_RecordChild1, // #2 = $src2
/*4031*/      OPC_CheckChild1Type, MVT::i64,
/*4033*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4035*/      OPC_CheckPredicate, 38, // Predicate_zextload
/*4037*/      OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*4039*/      OPC_MoveParent,
/*4040*/      OPC_CheckPredicate, 41, // Predicate_or_as_revinserti8
/*4042*/      OPC_CheckType, MVT::i32,
/*4044*/      OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*4047*/      OPC_EmitMergeInputChains1_1,
/*4048*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (or:i32 GR32:i32:$src1, (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
              // Dst: (IC32Y:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*4059*/    /*Scope*/ 38, /*->4098*/
/*4060*/      OPC_MoveChild, 0,
/*4062*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4065*/      OPC_RecordMemRef,
/*4066*/      OPC_RecordNode, // #0 = 'ld' chained node
/*4067*/      OPC_CheckFoldableChainNode,
/*4068*/      OPC_RecordChild1, // #1 = $src2
/*4069*/      OPC_CheckChild1Type, MVT::i64,
/*4071*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4073*/      OPC_CheckPredicate, 38, // Predicate_zextload
/*4075*/      OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*4077*/      OPC_MoveParent,
/*4078*/      OPC_RecordChild1, // #2 = $src1
/*4079*/      OPC_CheckPredicate, 40, // Predicate_or_as_inserti8
/*4081*/      OPC_CheckType, MVT::i64,
/*4083*/      OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*4086*/      OPC_EmitMergeInputChains1_0,
/*4087*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (or:i64 (ld:i64 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR64:i64:$src1)<<P:Predicate_or_as_inserti8>> - Complexity = 20
              // Dst: (IC:i64 GR64:i64:$src1, bdxaddr12pair:i64:$src2)
/*4098*/    /*Scope*/ 38, /*->4137*/
/*4099*/      OPC_RecordChild0, // #0 = $src1
/*4100*/      OPC_MoveChild, 1,
/*4102*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4105*/      OPC_RecordMemRef,
/*4106*/      OPC_RecordNode, // #1 = 'ld' chained node
/*4107*/      OPC_CheckFoldableChainNode,
/*4108*/      OPC_RecordChild1, // #2 = $src2
/*4109*/      OPC_CheckChild1Type, MVT::i64,
/*4111*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4113*/      OPC_CheckPredicate, 38, // Predicate_zextload
/*4115*/      OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*4117*/      OPC_MoveParent,
/*4118*/      OPC_CheckPredicate, 41, // Predicate_or_as_revinserti8
/*4120*/      OPC_CheckType, MVT::i64,
/*4122*/      OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*4125*/      OPC_EmitMergeInputChains1_1,
/*4126*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (or:i64 GR64:i64:$src1, (ld:i64 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
              // Dst: (IC:i64 GR64:i64:$src1, bdxaddr12pair:i64:$src2)
/*4137*/    /*Scope*/ 38, /*->4176*/
/*4138*/      OPC_MoveChild, 0,
/*4140*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4143*/      OPC_RecordMemRef,
/*4144*/      OPC_RecordNode, // #0 = 'ld' chained node
/*4145*/      OPC_CheckFoldableChainNode,
/*4146*/      OPC_RecordChild1, // #1 = $src2
/*4147*/      OPC_CheckChild1Type, MVT::i64,
/*4149*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4151*/      OPC_CheckPredicate, 38, // Predicate_zextload
/*4153*/      OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*4155*/      OPC_MoveParent,
/*4156*/      OPC_RecordChild1, // #2 = $src1
/*4157*/      OPC_CheckPredicate, 40, // Predicate_or_as_inserti8
/*4159*/      OPC_CheckType, MVT::i64,
/*4161*/      OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*4164*/      OPC_EmitMergeInputChains1_0,
/*4165*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ICY), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (or:i64 (ld:i64 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR64:i64:$src1)<<P:Predicate_or_as_inserti8>> - Complexity = 20
              // Dst: (ICY:i64 GR64:i64:$src1, bdxaddr20pair:i64:$src2)
/*4176*/    /*Scope*/ 103, /*->4280*/
/*4177*/      OPC_RecordChild0, // #0 = $src1
/*4178*/      OPC_MoveChild, 1,
/*4180*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4183*/      OPC_RecordMemRef,
/*4184*/      OPC_RecordNode, // #1 = 'ld' chained node
/*4185*/      OPC_CheckFoldableChainNode,
/*4186*/      OPC_RecordChild1, // #2 = $src2
/*4187*/      OPC_CheckChild1Type, MVT::i64,
/*4189*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4191*/      OPC_Scope, 24, /*->4217*/ // 2 children in Scope
/*4193*/        OPC_CheckPredicate, 38, // Predicate_zextload
/*4195*/        OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*4197*/        OPC_MoveParent,
/*4198*/        OPC_CheckPredicate, 41, // Predicate_or_as_revinserti8
/*4200*/        OPC_CheckType, MVT::i64,
/*4202*/        OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*4205*/        OPC_EmitMergeInputChains1_1,
/*4206*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ICY), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (or:i64 GR64:i64:$src1, (ld:i64 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
                // Dst: (ICY:i64 GR64:i64:$src1, bdxaddr20pair:i64:$src2)
/*4217*/      /*Scope*/ 61, /*->4279*/
/*4218*/        OPC_CheckPredicate, 13, // Predicate_load
/*4220*/        OPC_MoveParent,
/*4221*/        OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->4260
/*4224*/          OPC_Scope, 16, /*->4242*/ // 2 children in Scope
/*4226*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*4229*/            OPC_EmitMergeInputChains1_1,
/*4230*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::O), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (or:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (O:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*4242*/          /*Scope*/ 16, /*->4259*/
/*4243*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*4246*/            OPC_EmitMergeInputChains1_1,
/*4247*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OY), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (or:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (OY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*4259*/          0, /*End of Scope*/
                /*SwitchType*/ 16,  MVT::i64,// ->4278
/*4262*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*4265*/          OPC_EmitMergeInputChains1_1,
/*4266*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OG), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (or:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (OG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
                0, // EndSwitchType
/*4279*/      0, /*End of Scope*/
/*4280*/    /*Scope*/ 126|128,2/*382*/, /*->4664*/
/*4282*/      OPC_MoveChild, 0,
/*4284*/      OPC_Scope, 73, /*->4359*/ // 9 children in Scope
/*4286*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4289*/        OPC_RecordMemRef,
/*4290*/        OPC_RecordNode, // #0 = 'ld' chained node
/*4291*/        OPC_CheckFoldableChainNode,
/*4292*/        OPC_RecordChild1, // #1 = $XBD2
/*4293*/        OPC_CheckChild1Type, MVT::i64,
/*4295*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4297*/        OPC_CheckPredicate, 13, // Predicate_load
/*4299*/        OPC_MoveParent,
/*4300*/        OPC_RecordChild1, // #2 = $R1src
/*4301*/        OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->4340
/*4304*/          OPC_Scope, 16, /*->4322*/ // 2 children in Scope
/*4306*/            OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*4309*/            OPC_EmitMergeInputChains1_0,
/*4310*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::O), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (or:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                    // Dst: (O:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*4322*/          /*Scope*/ 16, /*->4339*/
/*4323*/            OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*4326*/            OPC_EmitMergeInputChains1_0,
/*4327*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OY), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (or:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                    // Dst: (OY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*4339*/          0, /*End of Scope*/
                /*SwitchType*/ 16,  MVT::i64,// ->4358
/*4342*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*4345*/          OPC_EmitMergeInputChains1_0,
/*4346*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OG), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (or:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src) - Complexity = 19
                  // Dst: (OG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
                0, // EndSwitchType
/*4359*/      /*Scope*/ 38, /*->4398*/
/*4360*/        OPC_CheckAndImm, 0|128,0|128,124|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709486080*/, 
/*4371*/        OPC_RecordChild0, // #0 = $R1src
/*4372*/        OPC_MoveParent,
/*4373*/        OPC_RecordChild1, // #1 = $I2
/*4374*/        OPC_MoveChild, 1,
/*4376*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4379*/        OPC_CheckPredicate, 42, // Predicate_imm32ll16
/*4381*/        OPC_MoveParent,
/*4382*/        OPC_CheckType, MVT::i32,
/*4384*/        OPC_EmitConvertToTarget, 1,
/*4386*/        OPC_EmitNodeXForm, 3, 2, // LL16
/*4389*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IILL32), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (or:i32 (and:i32 GR32:i32:$R1src, -65536:i32), (imm:i32)<<P:Predicate_imm32ll16>><<X:LL16>>:$I2) - Complexity = 15
                // Dst: (IILL32:i32 GR32:i32:$R1src, (LL16:i32 (imm:i32):$I2))
/*4398*/      /*Scope*/ 38, /*->4437*/
/*4399*/        OPC_CheckAndImm, 127|128,127|128,3|128,0|128,112|128,127|128,127|128,127|128,127|128,1/*18446744069414649855*/, 
/*4410*/        OPC_RecordChild0, // #0 = $R1src
/*4411*/        OPC_MoveParent,
/*4412*/        OPC_RecordChild1, // #1 = $I2
/*4413*/        OPC_MoveChild, 1,
/*4415*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4418*/        OPC_CheckPredicate, 43, // Predicate_imm32lh16
/*4420*/        OPC_MoveParent,
/*4421*/        OPC_CheckType, MVT::i32,
/*4423*/        OPC_EmitConvertToTarget, 1,
/*4425*/        OPC_EmitNodeXForm, 4, 2, // LH16
/*4428*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IILH32), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (or:i32 (and:i32 GR32:i32:$R1src, -4294901761:i32), (imm:i32)<<P:Predicate_imm32lh16>><<X:LH16>>:$I2) - Complexity = 15
                // Dst: (IILH32:i32 GR32:i32:$R1src, (LH16:i32 (imm:i32):$I2))
/*4437*/      /*Scope*/ 38, /*->4476*/
/*4438*/        OPC_CheckAndImm, 0|128,0|128,124|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709486080*/, 
/*4449*/        OPC_RecordChild0, // #0 = $R1src
/*4450*/        OPC_MoveParent,
/*4451*/        OPC_RecordChild1, // #1 = $I2
/*4452*/        OPC_MoveChild, 1,
/*4454*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4457*/        OPC_CheckPredicate, 44, // Predicate_imm64ll16
/*4459*/        OPC_MoveParent,
/*4460*/        OPC_CheckType, MVT::i64,
/*4462*/        OPC_EmitConvertToTarget, 1,
/*4464*/        OPC_EmitNodeXForm, 3, 2, // LL16
/*4467*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IILL), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 (and:i64 GR64:i64:$R1src, -65536:i64), (imm:i64)<<P:Predicate_imm64ll16>><<X:LL16>>:$I2) - Complexity = 15
                // Dst: (IILL:i64 GR64:i64:$R1src, (LL16:i64 (imm:i64):$I2))
/*4476*/      /*Scope*/ 38, /*->4515*/
/*4477*/        OPC_CheckAndImm, 127|128,127|128,3|128,0|128,112|128,127|128,127|128,127|128,127|128,1/*18446744069414649855*/, 
/*4488*/        OPC_RecordChild0, // #0 = $R1src
/*4489*/        OPC_MoveParent,
/*4490*/        OPC_RecordChild1, // #1 = $I2
/*4491*/        OPC_MoveChild, 1,
/*4493*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4496*/        OPC_CheckPredicate, 45, // Predicate_imm64lh16
/*4498*/        OPC_MoveParent,
/*4499*/        OPC_CheckType, MVT::i64,
/*4501*/        OPC_EmitConvertToTarget, 1,
/*4503*/        OPC_EmitNodeXForm, 4, 2, // LH16
/*4506*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IILH), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 (and:i64 GR64:i64:$R1src, -4294901761:i64), (imm:i64)<<P:Predicate_imm64lh16>><<X:LH16>>:$I2) - Complexity = 15
                // Dst: (IILH:i64 GR64:i64:$R1src, (LH16:i64 (imm:i64):$I2))
/*4515*/      /*Scope*/ 38, /*->4554*/
/*4516*/        OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15|128,0|128,64|128,127|128,127|128,1/*18446462603027808255*/, 
/*4527*/        OPC_RecordChild0, // #0 = $R1src
/*4528*/        OPC_MoveParent,
/*4529*/        OPC_RecordChild1, // #1 = $I2
/*4530*/        OPC_MoveChild, 1,
/*4532*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4535*/        OPC_CheckPredicate, 46, // Predicate_imm64hl16
/*4537*/        OPC_MoveParent,
/*4538*/        OPC_CheckType, MVT::i64,
/*4540*/        OPC_EmitConvertToTarget, 1,
/*4542*/        OPC_EmitNodeXForm, 5, 2, // HL16
/*4545*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IIHL), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 (and:i64 GR64:i64:$R1src, -281470681743361:i64), (imm:i64)<<P:Predicate_imm64hl16>><<X:HL16>>:$I2) - Complexity = 15
                // Dst: (IIHL:i64 GR64:i64:$R1src, (HL16:i64 (imm:i64):$I2))
/*4554*/      /*Scope*/ 35, /*->4590*/
/*4555*/        OPC_CheckAndImm, 127|128,127|128,127|128,127|128,127|128,127|128,63/*281474976710655*/, 
/*4563*/        OPC_RecordChild0, // #0 = $R1src
/*4564*/        OPC_MoveParent,
/*4565*/        OPC_RecordChild1, // #1 = $I2
/*4566*/        OPC_MoveChild, 1,
/*4568*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4571*/        OPC_CheckPredicate, 47, // Predicate_imm64hh16
/*4573*/        OPC_MoveParent,
/*4574*/        OPC_CheckType, MVT::i64,
/*4576*/        OPC_EmitConvertToTarget, 1,
/*4578*/        OPC_EmitNodeXForm, 6, 2, // HH16
/*4581*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IIHH), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 (and:i64 GR64:i64:$R1src, 281474976710655:i64), (imm:i64)<<P:Predicate_imm64hh16>><<X:HH16>>:$I2) - Complexity = 15
                // Dst: (IIHH:i64 GR64:i64:$R1src, (HH16:i64 (imm:i64):$I2))
/*4590*/      /*Scope*/ 38, /*->4629*/
/*4591*/        OPC_CheckAndImm, 0|128,0|128,0|128,0|128,112|128,127|128,127|128,127|128,127|128,1/*18446744069414584320*/, 
/*4602*/        OPC_RecordChild0, // #0 = $R1src
/*4603*/        OPC_MoveParent,
/*4604*/        OPC_RecordChild1, // #1 = $I2
/*4605*/        OPC_MoveChild, 1,
/*4607*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4610*/        OPC_CheckPredicate, 48, // Predicate_imm64lf32
/*4612*/        OPC_MoveParent,
/*4613*/        OPC_CheckType, MVT::i64,
/*4615*/        OPC_EmitConvertToTarget, 1,
/*4617*/        OPC_EmitNodeXForm, 7, 2, // LF32
/*4620*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IILF), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 (and:i64 GR64:i64:$R1src, -4294967296:i64), (imm:i64)<<P:Predicate_imm64lf32>><<X:LF32>>:$I2) - Complexity = 15
                // Dst: (IILF:i64 GR64:i64:$R1src, (LF32:i64 (imm:i64):$I2))
/*4629*/      /*Scope*/ 33, /*->4663*/
/*4630*/        OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*4636*/        OPC_RecordChild0, // #0 = $R1src
/*4637*/        OPC_MoveParent,
/*4638*/        OPC_RecordChild1, // #1 = $I2
/*4639*/        OPC_MoveChild, 1,
/*4641*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4644*/        OPC_CheckPredicate, 49, // Predicate_imm64hf32
/*4646*/        OPC_MoveParent,
/*4647*/        OPC_CheckType, MVT::i64,
/*4649*/        OPC_EmitConvertToTarget, 1,
/*4651*/        OPC_EmitNodeXForm, 8, 2, // HF32
/*4654*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IIHF), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 (and:i64 GR64:i64:$R1src, 4294967295:i64), (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$I2) - Complexity = 15
                // Dst: (IIHF:i64 GR64:i64:$R1src, (HF32:i64 (imm:i64):$I2))
/*4663*/      0, /*End of Scope*/
/*4664*/    /*Scope*/ 47, /*->4712*/
/*4665*/      OPC_RecordNode, // #0 = $src
/*4666*/      OPC_CheckType, MVT::i64,
/*4668*/      OPC_Scope, 13, /*->4683*/ // 3 children in Scope
/*4670*/        OPC_CheckComplexPat, /*CP*/11, /*#*/0, // selectDynAlloc12Only:$src #1 #2 #3
/*4673*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJDYNALLOC), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: dynalloc12only:i64:$src - Complexity = 12
                // Dst: (ADJDYNALLOC:i64 dynalloc12only:i64:$src)
/*4683*/      /*Scope*/ 13, /*->4697*/
/*4684*/        OPC_CheckComplexPat, /*CP*/12, /*#*/0, // selectLAAddr12Pair:$XBD2 #1 #2 #3
/*4687*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: laaddr12pair:i64:$XBD2 - Complexity = 12
                // Dst: (LA:i64 laaddr12pair:i64:$XBD2)
/*4697*/      /*Scope*/ 13, /*->4711*/
/*4698*/        OPC_CheckComplexPat, /*CP*/13, /*#*/0, // selectLAAddr20Pair:$XBD2 #1 #2 #3
/*4701*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LAY), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: laaddr20pair:i64:$XBD2 - Complexity = 12
                // Dst: (LAY:i64 laaddr20pair:i64:$XBD2)
/*4711*/      0, /*End of Scope*/
/*4712*/    /*Scope*/ 50, /*->4763*/
/*4713*/      OPC_MoveChild, 0,
/*4715*/      OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*4718*/      OPC_RecordChild0, // #0 = $src
/*4719*/      OPC_MoveParent,
/*4720*/      OPC_RecordChild1, // #1 = $imm
/*4721*/      OPC_MoveChild, 1,
/*4723*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4726*/      OPC_CheckPredicate, 49, // Predicate_imm64hf32
/*4728*/      OPC_MoveParent,
/*4729*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                  1/*#VTs*/, MVT::i64, 0/*#Ops*/,  // Results = #2
/*4736*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*4739*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 0, 3,  // Results = #4
/*4749*/      OPC_EmitConvertToTarget, 1,
/*4751*/      OPC_EmitNodeXForm, 8, 5, // HF32
/*4754*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IIHF), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 4, 6, 
              // Src: (or:i64 (zext:i64 GR32:i32:$src), (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$imm) - Complexity = 10
              // Dst: (IIHF:i64 (INSERT_SUBREG:i64 (IMPLICIT_DEF:i64), GR32:i32:$src, subreg_32bit:i32), (HF32:i64 (imm:i64)<<P:Predicate_imm64hf32>>:$imm))
/*4763*/    /*Scope*/ 98|128,1/*226*/, /*->4991*/
/*4765*/      OPC_RecordChild0, // #0 = $R1src
/*4766*/      OPC_RecordChild1, // #1 = $I2
/*4767*/      OPC_Scope, 66|128,1/*194*/, /*->4964*/ // 3 children in Scope
/*4770*/        OPC_MoveChild, 1,
/*4772*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4775*/        OPC_Scope, 20, /*->4797*/ // 9 children in Scope
/*4777*/          OPC_CheckPredicate, 42, // Predicate_imm32ll16
/*4779*/          OPC_MoveParent,
/*4780*/          OPC_CheckType, MVT::i32,
/*4782*/          OPC_EmitConvertToTarget, 1,
/*4784*/          OPC_EmitNodeXForm, 3, 2, // LL16
/*4787*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OILL32), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 GR32:i32:$R1src, (imm:i32)<<P:Predicate_imm32ll16>><<X:LL16>>:$I2) - Complexity = 7
                  // Dst: (OILL32:i32:i32 GR32:i32:$R1src, (LL16:i32 (imm:i32):$I2))
/*4797*/        /*Scope*/ 20, /*->4818*/
/*4798*/          OPC_CheckPredicate, 43, // Predicate_imm32lh16
/*4800*/          OPC_MoveParent,
/*4801*/          OPC_CheckType, MVT::i32,
/*4803*/          OPC_EmitConvertToTarget, 1,
/*4805*/          OPC_EmitNodeXForm, 4, 2, // LH16
/*4808*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OILH32), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 GR32:i32:$R1src, (imm:i32)<<P:Predicate_imm32lh16>><<X:LH16>>:$I2) - Complexity = 7
                  // Dst: (OILH32:i32:i32 GR32:i32:$R1src, (LH16:i32 (imm:i32):$I2))
/*4818*/        /*Scope*/ 20, /*->4839*/
/*4819*/          OPC_CheckPredicate, 44, // Predicate_imm64ll16
/*4821*/          OPC_MoveParent,
/*4822*/          OPC_CheckType, MVT::i64,
/*4824*/          OPC_EmitConvertToTarget, 1,
/*4826*/          OPC_EmitNodeXForm, 3, 2, // LL16
/*4829*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OILL), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64ll16>><<X:LL16>>:$I2) - Complexity = 7
                  // Dst: (OILL:i64:i32 GR64:i64:$R1src, (LL16:i64 (imm:i64):$I2))
/*4839*/        /*Scope*/ 20, /*->4860*/
/*4840*/          OPC_CheckPredicate, 45, // Predicate_imm64lh16
/*4842*/          OPC_MoveParent,
/*4843*/          OPC_CheckType, MVT::i64,
/*4845*/          OPC_EmitConvertToTarget, 1,
/*4847*/          OPC_EmitNodeXForm, 4, 2, // LH16
/*4850*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OILH), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64lh16>><<X:LH16>>:$I2) - Complexity = 7
                  // Dst: (OILH:i64:i32 GR64:i64:$R1src, (LH16:i64 (imm:i64):$I2))
/*4860*/        /*Scope*/ 20, /*->4881*/
/*4861*/          OPC_CheckPredicate, 46, // Predicate_imm64hl16
/*4863*/          OPC_MoveParent,
/*4864*/          OPC_CheckType, MVT::i64,
/*4866*/          OPC_EmitConvertToTarget, 1,
/*4868*/          OPC_EmitNodeXForm, 5, 2, // HL16
/*4871*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIHL), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64hl16>><<X:HL16>>:$I2) - Complexity = 7
                  // Dst: (OIHL:i64:i32 GR64:i64:$R1src, (HL16:i64 (imm:i64):$I2))
/*4881*/        /*Scope*/ 20, /*->4902*/
/*4882*/          OPC_CheckPredicate, 47, // Predicate_imm64hh16
/*4884*/          OPC_MoveParent,
/*4885*/          OPC_CheckType, MVT::i64,
/*4887*/          OPC_EmitConvertToTarget, 1,
/*4889*/          OPC_EmitNodeXForm, 6, 2, // HH16
/*4892*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIHH), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64hh16>><<X:HH16>>:$I2) - Complexity = 7
                  // Dst: (OIHH:i64:i32 GR64:i64:$R1src, (HH16:i64 (imm:i64):$I2))
/*4902*/        /*Scope*/ 20, /*->4923*/
/*4903*/          OPC_CheckPredicate, 48, // Predicate_imm64lf32
/*4905*/          OPC_MoveParent,
/*4906*/          OPC_CheckType, MVT::i64,
/*4908*/          OPC_EmitConvertToTarget, 1,
/*4910*/          OPC_EmitNodeXForm, 7, 2, // LF32
/*4913*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OILF), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64lf32>><<X:LF32>>:$I2) - Complexity = 7
                  // Dst: (OILF:i64:i32 GR64:i64:$R1src, (LF32:i64 (imm:i64):$I2))
/*4923*/        /*Scope*/ 20, /*->4944*/
/*4924*/          OPC_CheckPredicate, 49, // Predicate_imm64hf32
/*4926*/          OPC_MoveParent,
/*4927*/          OPC_CheckType, MVT::i64,
/*4929*/          OPC_EmitConvertToTarget, 1,
/*4931*/          OPC_EmitNodeXForm, 8, 2, // HF32
/*4934*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIHF), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$I2) - Complexity = 7
                  // Dst: (OIHF:i64:i32 GR64:i64:$R1src, (HF32:i64 (imm:i64):$I2))
/*4944*/        /*Scope*/ 18, /*->4963*/
/*4945*/          OPC_MoveParent,
/*4946*/          OPC_CheckType, MVT::i32,
/*4948*/          OPC_EmitConvertToTarget, 1,
/*4950*/          OPC_EmitNodeXForm, 9, 2, // UIMM32
/*4953*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OILF32), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 GR32:i32:$R1src, (imm:i32)<<X:UIMM32>>:$I2) - Complexity = 6
                  // Dst: (OILF32:i32:i32 GR32:i32:$R1src, (UIMM32:i32 (imm:i32):$I2))
/*4963*/        0, /*End of Scope*/
/*4964*/      /*Scope*/ 12, /*->4977*/
/*4965*/        OPC_CheckType, MVT::i32,
/*4967*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (OR:i32:i32 GR32:i32:$R1src, GR32:i32:$R2)
/*4977*/      /*Scope*/ 12, /*->4990*/
/*4978*/        OPC_CheckType, MVT::i64,
/*4980*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::OGR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (OGR:i64:i32 GR64:i64:$R1src, GR64:i64:$R2)
/*4990*/      0, /*End of Scope*/
/*4991*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 36,  TARGET_VAL(SystemZISD::MVC),// ->5031
/*4995*/    OPC_RecordNode,   // #0 = 'z_mvc' chained node
/*4996*/    OPC_RecordChild1, // #1 = $dest
/*4997*/    OPC_CheckChild1Type, MVT::i64,
/*4999*/    OPC_RecordChild2, // #2 = $src
/*5000*/    OPC_CheckChild2Type, MVT::i64,
/*5002*/    OPC_RecordChild3, // #3 = $length
/*5003*/    OPC_MoveChild, 3,
/*5005*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5008*/    OPC_CheckPredicate, 50, // Predicate_imm32len8
/*5010*/    OPC_MoveParent,
/*5011*/    OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr12Only:$dest #4 #5
/*5014*/    OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$src #6 #7
/*5017*/    OPC_EmitMergeInputChains1_0,
/*5018*/    OPC_EmitConvertToTarget, 3,
/*5020*/    OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCWrapper), 0|OPFL_Chain,
                0/*#VTs*/, 5/*#Ops*/, 4, 5, 6, 7, 8, 
            // Src: (z_mvc bdaddr12only:i64:$dest, bdaddr12only:i64:$src, (imm:i32)<<P:Predicate_imm32len8>>:$length) - Complexity = 25
            // Dst: (MVCWrapper bdaddr12only:i64:$dest, bdaddr12only:i64:$src, (imm:i32):$length)
          /*SwitchOpcode*/ 74|128,1/*202*/,  TARGET_VAL(SystemZISD::SELECT_CCMASK),// ->5237
/*5035*/    OPC_CaptureGlueInput,
/*5036*/    OPC_Scope, 85, /*->5123*/ // 2 children in Scope
/*5038*/      OPC_MoveChild, 0,
/*5040*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5043*/      OPC_RecordMemRef,
/*5044*/      OPC_RecordNode, // #0 = 'ld' chained node
/*5045*/      OPC_CheckFoldableChainNode,
/*5046*/      OPC_RecordChild1, // #1 = $BD2
/*5047*/      OPC_CheckChild1Type, MVT::i64,
/*5049*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5051*/      OPC_CheckPredicate, 13, // Predicate_load
/*5053*/      OPC_MoveParent,
/*5054*/      OPC_RecordChild1, // #2 = $R1src
/*5055*/      OPC_RecordChild2, // #3 = $valid
/*5056*/      OPC_MoveChild, 2,
/*5058*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5061*/      OPC_CheckPredicate, 51, // Predicate_cond4
/*5063*/      OPC_MoveParent,
/*5064*/      OPC_RecordChild3, // #4 = $R3
/*5065*/      OPC_MoveChild, 3,
/*5067*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5070*/      OPC_CheckPredicate, 51, // Predicate_cond4
/*5072*/      OPC_MoveParent,
/*5073*/      OPC_SwitchType /*2 cases */, 22,  MVT::i32,// ->5098
/*5076*/        OPC_CheckPatternPredicate, 0, // (Subtarget.hasLoadStoreOnCond())
/*5078*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$BD2 #5 #6
/*5081*/        OPC_EmitMergeInputChains1_0,
/*5082*/        OPC_EmitConvertToTarget, 3,
/*5084*/        OPC_EmitConvertToTarget, 4,
/*5086*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LOC), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 5/*#Ops*/, 2, 5, 6, 7, 8, 
                // Src: (z_select_ccmask:i32 (ld:i32 bdaddr20only:i64:$BD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src, (imm:i8)<<P:Predicate_cond4>>:$valid, (imm:i8)<<P:Predicate_cond4>>:$R3) - Complexity = 24
                // Dst: (LOC:i32 GR32:i32:$R1src, bdaddr20only:i64:$BD2, (imm:i8):$valid, (imm:i8):$R3)
              /*SwitchType*/ 22,  MVT::i64,// ->5122
/*5100*/        OPC_CheckPatternPredicate, 0, // (Subtarget.hasLoadStoreOnCond())
/*5102*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$BD2 #5 #6
/*5105*/        OPC_EmitMergeInputChains1_0,
/*5106*/        OPC_EmitConvertToTarget, 3,
/*5108*/        OPC_EmitConvertToTarget, 4,
/*5110*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LOCG), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 5/*#Ops*/, 2, 5, 6, 7, 8, 
                // Src: (z_select_ccmask:i64 (ld:i64 bdaddr20only:i64:$BD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src, (imm:i8)<<P:Predicate_cond4>>:$valid, (imm:i8)<<P:Predicate_cond4>>:$R3) - Complexity = 24
                // Dst: (LOCG:i64 GR64:i64:$R1src, bdaddr20only:i64:$BD2, (imm:i8):$valid, (imm:i8):$R3)
              0, // EndSwitchType
/*5123*/    /*Scope*/ 112, /*->5236*/
/*5124*/      OPC_RecordChild0, // #0 = $src1
/*5125*/      OPC_RecordChild1, // #1 = $src2
/*5126*/      OPC_RecordChild2, // #2 = $valid
/*5127*/      OPC_MoveChild, 2,
/*5129*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5132*/      OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*5134*/      OPC_MoveParent,
/*5135*/      OPC_RecordChild3, // #3 = $cc
/*5136*/      OPC_MoveChild, 3,
/*5138*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5141*/      OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*5143*/      OPC_MoveParent,
/*5144*/      OPC_SwitchType /*5 cases */, 16,  MVT::i32,// ->5163
/*5147*/        OPC_EmitConvertToTarget, 2,
/*5149*/        OPC_EmitConvertToTarget, 3,
/*5151*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::Select32), 0|OPFL_GlueInput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 1, 4, 5, 
                // Src: (z_select_ccmask:i32 GR32:i32:$src1, GR32:i32:$src2, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc) - Complexity = 11
                // Dst: (Select32:i32:i32 GR32:i32:$src1, GR32:i32:$src2, (imm:i8):$valid, (imm:i8):$cc)
              /*SwitchType*/ 16,  MVT::i64,// ->5181
/*5165*/        OPC_EmitConvertToTarget, 2,
/*5167*/        OPC_EmitConvertToTarget, 3,
/*5169*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::Select64), 0|OPFL_GlueInput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 1, 4, 5, 
                // Src: (z_select_ccmask:i64 GR64:i64:$src1, GR64:i64:$src2, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc) - Complexity = 11
                // Dst: (Select64:i64:i32 GR64:i64:$src1, GR64:i64:$src2, (imm:i8):$valid, (imm:i8):$cc)
              /*SwitchType*/ 16,  MVT::f32,// ->5199
/*5183*/        OPC_EmitConvertToTarget, 2,
/*5185*/        OPC_EmitConvertToTarget, 3,
/*5187*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SelectF32), 0|OPFL_GlueInput,
                    2/*#VTs*/, MVT::f32, MVT::i32, 4/*#Ops*/, 0, 1, 4, 5, 
                // Src: (z_select_ccmask:f32 FP32:f32:$src1, FP32:f32:$src2, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc) - Complexity = 11
                // Dst: (SelectF32:f32:i32 FP32:f32:$src1, FP32:f32:$src2, (imm:i8):$valid, (imm:i8):$cc)
              /*SwitchType*/ 16,  MVT::f64,// ->5217
/*5201*/        OPC_EmitConvertToTarget, 2,
/*5203*/        OPC_EmitConvertToTarget, 3,
/*5205*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SelectF64), 0|OPFL_GlueInput,
                    2/*#VTs*/, MVT::f64, MVT::i32, 4/*#Ops*/, 0, 1, 4, 5, 
                // Src: (z_select_ccmask:f64 FP64:f64:$src1, FP64:f64:$src2, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc) - Complexity = 11
                // Dst: (SelectF64:f64:i32 FP64:f64:$src1, FP64:f64:$src2, (imm:i8):$valid, (imm:i8):$cc)
              /*SwitchType*/ 16,  MVT::f128,// ->5235
/*5219*/        OPC_EmitConvertToTarget, 2,
/*5221*/        OPC_EmitConvertToTarget, 3,
/*5223*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SelectF128), 0|OPFL_GlueInput,
                    2/*#VTs*/, MVT::f128, MVT::i32, 4/*#Ops*/, 0, 1, 4, 5, 
                // Src: (z_select_ccmask:f128 FP128:f128:$src1, FP128:f128:$src2, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc) - Complexity = 11
                // Dst: (SelectF128:f128:i32 FP128:f128:$src1, FP128:f128:$src2, (imm:i8):$valid, (imm:i8):$cc)
              0, // EndSwitchType
/*5236*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 78,  TARGET_VAL(ISD::BSWAP),// ->5318
/*5240*/    OPC_Scope, 51, /*->5293*/ // 2 children in Scope
/*5242*/      OPC_MoveChild, 0,
/*5244*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5247*/      OPC_RecordMemRef,
/*5248*/      OPC_RecordNode, // #0 = 'ld' chained node
/*5249*/      OPC_RecordChild1, // #1 = $XBD2
/*5250*/      OPC_CheckChild1Type, MVT::i64,
/*5252*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5254*/      OPC_CheckPredicate, 13, // Predicate_load
/*5256*/      OPC_CheckPredicate, 14, // Predicate_nonvolatile_load
/*5258*/      OPC_MoveParent,
/*5259*/      OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->5276
/*5262*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*5265*/        OPC_EmitMergeInputChains1_0,
/*5266*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LRV), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (bswap:i32 (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>) - Complexity = 19
                // Dst: (LRV:i32 bdxaddr20only:i64:$XBD2)
              /*SwitchType*/ 14,  MVT::i64,// ->5292
/*5278*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*5281*/        OPC_EmitMergeInputChains1_0,
/*5282*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LRVG), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                // Src: (bswap:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>) - Complexity = 19
                // Dst: (LRVG:i64 bdxaddr20only:i64:$XBD2)
              0, // EndSwitchType
/*5293*/    /*Scope*/ 23, /*->5317*/
/*5294*/      OPC_RecordChild0, // #0 = $R2
/*5295*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5306
/*5298*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LRVR), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (bswap:i32 GR32:i32:$R2) - Complexity = 3
                // Dst: (LRVR:i32 GR32:i32:$R2)
              /*SwitchType*/ 8,  MVT::i64,// ->5316
/*5308*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LRVGR), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (bswap:i64 GR64:i64:$R2) - Complexity = 3
                // Dst: (LRVGR:i64 GR64:i64:$R2)
              0, // EndSwitchType
/*5317*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 18|128,6/*786*/,  TARGET_VAL(ISD::ADD),// ->6108
/*5322*/    OPC_Scope, 44|128,1/*172*/, /*->5497*/ // 10 children in Scope
/*5325*/      OPC_RecordChild0, // #0 = $R1src
/*5326*/      OPC_MoveChild, 1,
/*5328*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5331*/      OPC_RecordMemRef,
/*5332*/      OPC_RecordNode, // #1 = 'ld' chained node
/*5333*/      OPC_CheckFoldableChainNode,
/*5334*/      OPC_RecordChild1, // #2 = $XBD2
/*5335*/      OPC_CheckChild1Type, MVT::i64,
/*5337*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5339*/      OPC_Scope, 43, /*->5384*/ // 5 children in Scope
/*5341*/        OPC_CheckPredicate, 52, // Predicate_sextload
/*5343*/        OPC_CheckPredicate, 53, // Predicate_sextloadi16
/*5345*/        OPC_MoveParent,
/*5346*/        OPC_CheckType, MVT::i32,
/*5348*/        OPC_Scope, 16, /*->5366*/ // 2 children in Scope
/*5350*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*5353*/          OPC_EmitMergeInputChains1_1,
/*5354*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AH), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (add:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                  // Dst: (AH:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*5366*/        /*Scope*/ 16, /*->5383*/
/*5367*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*5370*/          OPC_EmitMergeInputChains1_1,
/*5371*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AHY), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (add:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                  // Dst: (AHY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*5383*/        0, /*End of Scope*/
/*5384*/      /*Scope*/ 41, /*->5426*/
/*5385*/        OPC_CheckPredicate, 13, // Predicate_load
/*5387*/        OPC_MoveParent,
/*5388*/        OPC_CheckType, MVT::i32,
/*5390*/        OPC_Scope, 16, /*->5408*/ // 2 children in Scope
/*5392*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*5395*/          OPC_EmitMergeInputChains1_1,
/*5396*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::A), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (add:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (A:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*5408*/        /*Scope*/ 16, /*->5425*/
/*5409*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*5412*/          OPC_EmitMergeInputChains1_1,
/*5413*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AY), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (add:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (AY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*5425*/        0, /*End of Scope*/
/*5426*/      /*Scope*/ 23, /*->5450*/
/*5427*/        OPC_CheckPredicate, 52, // Predicate_sextload
/*5429*/        OPC_CheckPredicate, 54, // Predicate_sextloadi32
/*5431*/        OPC_MoveParent,
/*5432*/        OPC_CheckType, MVT::i64,
/*5434*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*5437*/        OPC_EmitMergeInputChains1_1,
/*5438*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGF), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (add:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>) - Complexity = 19
                // Dst: (AGF:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*5450*/      /*Scope*/ 21, /*->5472*/
/*5451*/        OPC_CheckPredicate, 13, // Predicate_load
/*5453*/        OPC_MoveParent,
/*5454*/        OPC_CheckType, MVT::i64,
/*5456*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*5459*/        OPC_EmitMergeInputChains1_1,
/*5460*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::AG), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (add:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (AG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*5472*/      /*Scope*/ 23, /*->5496*/
/*5473*/        OPC_CheckPredicate, 38, // Predicate_zextload
/*5475*/        OPC_CheckPredicate, 55, // Predicate_zextloadi32
/*5477*/        OPC_MoveParent,
/*5478*/        OPC_CheckType, MVT::i64,
/*5480*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #3 #4 #5
/*5483*/        OPC_EmitMergeInputChains1_1,
/*5484*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGF), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (add:i64 GR64:i64:$src1, (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>) - Complexity = 19
                // Dst: (ALGF:i64:i32 GR64:i64:$src1, bdxaddr20only:i64:$addr)
/*5496*/      0, /*End of Scope*/
/*5497*/    /*Scope*/ 48|128,1/*176*/, /*->5675*/
/*5499*/      OPC_MoveChild, 0,
/*5501*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5504*/      OPC_RecordMemRef,
/*5505*/      OPC_RecordNode, // #0 = 'ld' chained node
/*5506*/      OPC_CheckFoldableChainNode,
/*5507*/      OPC_RecordChild1, // #1 = $XBD2
/*5508*/      OPC_CheckChild1Type, MVT::i64,
/*5510*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5512*/      OPC_Scope, 44, /*->5558*/ // 5 children in Scope
/*5514*/        OPC_CheckPredicate, 52, // Predicate_sextload
/*5516*/        OPC_CheckPredicate, 53, // Predicate_sextloadi16
/*5518*/        OPC_MoveParent,
/*5519*/        OPC_RecordChild1, // #2 = $R1src
/*5520*/        OPC_CheckType, MVT::i32,
/*5522*/        OPC_Scope, 16, /*->5540*/ // 2 children in Scope
/*5524*/          OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*5527*/          OPC_EmitMergeInputChains1_0,
/*5528*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AH), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (add:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (AH:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*5540*/        /*Scope*/ 16, /*->5557*/
/*5541*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*5544*/          OPC_EmitMergeInputChains1_0,
/*5545*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AHY), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (add:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (AHY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*5557*/        0, /*End of Scope*/
/*5558*/      /*Scope*/ 42, /*->5601*/
/*5559*/        OPC_CheckPredicate, 13, // Predicate_load
/*5561*/        OPC_MoveParent,
/*5562*/        OPC_RecordChild1, // #2 = $R1src
/*5563*/        OPC_CheckType, MVT::i32,
/*5565*/        OPC_Scope, 16, /*->5583*/ // 2 children in Scope
/*5567*/          OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*5570*/          OPC_EmitMergeInputChains1_0,
/*5571*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::A), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (add:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (A:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*5583*/        /*Scope*/ 16, /*->5600*/
/*5584*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*5587*/          OPC_EmitMergeInputChains1_0,
/*5588*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AY), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (add:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (AY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*5600*/        0, /*End of Scope*/
/*5601*/      /*Scope*/ 24, /*->5626*/
/*5602*/        OPC_CheckPredicate, 52, // Predicate_sextload
/*5604*/        OPC_CheckPredicate, 54, // Predicate_sextloadi32
/*5606*/        OPC_MoveParent,
/*5607*/        OPC_RecordChild1, // #2 = $R1src
/*5608*/        OPC_CheckType, MVT::i64,
/*5610*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*5613*/        OPC_EmitMergeInputChains1_0,
/*5614*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGF), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (add:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>, GR64:i64:$R1src) - Complexity = 19
                // Dst: (AGF:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*5626*/      /*Scope*/ 22, /*->5649*/
/*5627*/        OPC_CheckPredicate, 13, // Predicate_load
/*5629*/        OPC_MoveParent,
/*5630*/        OPC_RecordChild1, // #2 = $R1src
/*5631*/        OPC_CheckType, MVT::i64,
/*5633*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*5636*/        OPC_EmitMergeInputChains1_0,
/*5637*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::AG), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (add:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src) - Complexity = 19
                // Dst: (AG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*5649*/      /*Scope*/ 24, /*->5674*/
/*5650*/        OPC_CheckPredicate, 38, // Predicate_zextload
/*5652*/        OPC_CheckPredicate, 55, // Predicate_zextloadi32
/*5654*/        OPC_MoveParent,
/*5655*/        OPC_RecordChild1, // #2 = $src1
/*5656*/        OPC_CheckType, MVT::i64,
/*5658*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$addr #3 #4 #5
/*5661*/        OPC_EmitMergeInputChains1_0,
/*5662*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGF), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (add:i64 (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>, GR64:i64:$src1) - Complexity = 19
                // Dst: (ALGF:i64:i32 GR64:i64:$src1, bdxaddr20only:i64:$addr)
/*5674*/      0, /*End of Scope*/
/*5675*/    /*Scope*/ 47, /*->5723*/
/*5676*/      OPC_RecordNode, // #0 = $src
/*5677*/      OPC_CheckType, MVT::i64,
/*5679*/      OPC_Scope, 13, /*->5694*/ // 3 children in Scope
/*5681*/        OPC_CheckComplexPat, /*CP*/11, /*#*/0, // selectDynAlloc12Only:$src #1 #2 #3
/*5684*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJDYNALLOC), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: dynalloc12only:i64:$src - Complexity = 12
                // Dst: (ADJDYNALLOC:i64 dynalloc12only:i64:$src)
/*5694*/      /*Scope*/ 13, /*->5708*/
/*5695*/        OPC_CheckComplexPat, /*CP*/12, /*#*/0, // selectLAAddr12Pair:$XBD2 #1 #2 #3
/*5698*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: laaddr12pair:i64:$XBD2 - Complexity = 12
                // Dst: (LA:i64 laaddr12pair:i64:$XBD2)
/*5708*/      /*Scope*/ 13, /*->5722*/
/*5709*/        OPC_CheckComplexPat, /*CP*/13, /*#*/0, // selectLAAddr20Pair:$XBD2 #1 #2 #3
/*5712*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LAY), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: laaddr20pair:i64:$XBD2 - Complexity = 12
                // Dst: (LAY:i64 laaddr20pair:i64:$XBD2)
/*5722*/      0, /*End of Scope*/
/*5723*/    /*Scope*/ 35, /*->5759*/
/*5724*/      OPC_RecordChild0, // #0 = $src1
/*5725*/      OPC_MoveChild, 1,
/*5727*/      OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*5733*/      OPC_RecordChild0, // #1 = $src2
/*5734*/      OPC_MoveParent,
/*5735*/      OPC_CheckType, MVT::i64,
/*5737*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*5740*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*5749*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
              // Src: (add:i64 GR64:i64:$src1, (and:i64 GR64:i64:$src2, 4294967295:i64)) - Complexity = 11
              // Dst: (ALGFR:i64:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*5759*/    /*Scope*/ 35, /*->5795*/
/*5760*/      OPC_MoveChild, 0,
/*5762*/      OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*5768*/      OPC_RecordChild0, // #0 = $src2
/*5769*/      OPC_MoveParent,
/*5770*/      OPC_RecordChild1, // #1 = $src1
/*5771*/      OPC_CheckType, MVT::i64,
/*5773*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*5776*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*5785*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 3, 
              // Src: (add:i64 (and:i64 GR64:i64:$src2, 4294967295:i64), GR64:i64:$src1) - Complexity = 11
              // Dst: (ALGFR:i64:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*5795*/    /*Scope*/ 44|128,1/*172*/, /*->5969*/
/*5797*/      OPC_RecordChild0, // #0 = $R1src
/*5798*/      OPC_Scope, 4|128,1/*132*/, /*->5933*/ // 2 children in Scope
/*5801*/        OPC_RecordChild1, // #1 = $I2
/*5802*/        OPC_MoveChild, 1,
/*5804*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5807*/        OPC_Scope, 20, /*->5829*/ // 6 children in Scope
/*5809*/          OPC_CheckPredicate, 34, // Predicate_imm32sx16
/*5811*/          OPC_MoveParent,
/*5812*/          OPC_CheckType, MVT::i32,
/*5814*/          OPC_EmitConvertToTarget, 1,
/*5816*/          OPC_EmitNodeXForm, 2, 2, // SIMM16
/*5819*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AHI), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i32 GR32:i32:$R1src, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2) - Complexity = 7
                  // Dst: (AHI:i32:i32 GR32:i32:$R1src, (SIMM16:i32 (imm:i32):$I2))
/*5829*/        /*Scope*/ 20, /*->5850*/
/*5830*/          OPC_CheckPredicate, 35, // Predicate_imm64sx16
/*5832*/          OPC_MoveParent,
/*5833*/          OPC_CheckType, MVT::i64,
/*5835*/          OPC_EmitConvertToTarget, 1,
/*5837*/          OPC_EmitNodeXForm, 2, 2, // SIMM16
/*5840*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGHI), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$I2) - Complexity = 7
                  // Dst: (AGHI:i64:i32 GR64:i64:$R1src, (SIMM16:i64 (imm:i64):$I2))
/*5850*/        /*Scope*/ 20, /*->5871*/
/*5851*/          OPC_CheckPredicate, 56, // Predicate_imm64sx32
/*5853*/          OPC_MoveParent,
/*5854*/          OPC_CheckType, MVT::i64,
/*5856*/          OPC_EmitConvertToTarget, 1,
/*5858*/          OPC_EmitNodeXForm, 10, 2, // SIMM32
/*5861*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGFI), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64sx32>><<X:SIMM32>>:$I2) - Complexity = 7
                  // Dst: (AGFI:i64:i32 GR64:i64:$R1src, (SIMM32:i64 (imm:i64):$I2))
/*5871*/        /*Scope*/ 20, /*->5892*/
/*5872*/          OPC_CheckPredicate, 57, // Predicate_imm64zx32
/*5874*/          OPC_MoveParent,
/*5875*/          OPC_CheckType, MVT::i64,
/*5877*/          OPC_EmitConvertToTarget, 1,
/*5879*/          OPC_EmitNodeXForm, 9, 2, // UIMM32
/*5882*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFI), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_imm64zx32>><<X:UIMM32>>:$src2) - Complexity = 7
                  // Dst: (ALGFI:i64:i32 GR64:i64:$src1, (UIMM32:i64 (imm:i64)<<P:Predicate_imm64zx32>>:$src2))
/*5892*/        /*Scope*/ 20, /*->5913*/
/*5893*/          OPC_CheckPredicate, 58, // Predicate_imm64zx32n
/*5895*/          OPC_MoveParent,
/*5896*/          OPC_CheckType, MVT::i64,
/*5898*/          OPC_EmitConvertToTarget, 1,
/*5900*/          OPC_EmitNodeXForm, 11, 2, // NEGIMM32
/*5903*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGFI), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_imm64zx32n>><<X:NEGIMM32>>:$src2) - Complexity = 7
                  // Dst: (SLGFI:i64:i32 GR64:i64:$src1, (NEGIMM32:i64 (imm:i64)<<P:Predicate_imm64zx32n>>:$src2))
/*5913*/        /*Scope*/ 18, /*->5932*/
/*5914*/          OPC_MoveParent,
/*5915*/          OPC_CheckType, MVT::i32,
/*5917*/          OPC_EmitConvertToTarget, 1,
/*5919*/          OPC_EmitNodeXForm, 10, 2, // SIMM32
/*5922*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AFI), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i32 GR32:i32:$R1src, (imm:i32)<<X:SIMM32>>:$I2) - Complexity = 6
                  // Dst: (AFI:i32:i32 GR32:i32:$R1src, (SIMM32:i32 (imm:i32):$I2))
/*5932*/        0, /*End of Scope*/
/*5933*/      /*Scope*/ 34, /*->5968*/
/*5934*/        OPC_MoveChild, 1,
/*5936*/        OPC_SwitchOpcode /*2 cases */, 12,  TARGET_VAL(ISD::SIGN_EXTEND),// ->5952
/*5940*/          OPC_RecordChild0, // #1 = $src2
/*5941*/          OPC_MoveParent,
/*5942*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGFR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i64 GR64:i64:$src1, (sext:i64 GR32:i32:$src2)) - Complexity = 6
                  // Dst: (AGFR:i64:i32 GR64:i64:$src1, GR32:i32:$src2)
                /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::ZERO_EXTEND),// ->5967
/*5955*/          OPC_RecordChild0, // #1 = $src2
/*5956*/          OPC_MoveParent,
/*5957*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i64 GR64:i64:$src1, (zext:i64 GR32:i32:$src2)) - Complexity = 6
                  // Dst: (ALGFR:i64:i32 GR64:i64:$src1, GR32:i32:$src2)
                0, // EndSwitchOpcode
/*5968*/      0, /*End of Scope*/
/*5969*/    /*Scope*/ 36, /*->6006*/
/*5970*/      OPC_MoveChild, 0,
/*5972*/      OPC_SwitchOpcode /*2 cases */, 13,  TARGET_VAL(ISD::SIGN_EXTEND),// ->5989
/*5976*/        OPC_RecordChild0, // #0 = $src2
/*5977*/        OPC_MoveParent,
/*5978*/        OPC_RecordChild1, // #1 = $src1
/*5979*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGFR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (add:i64 (sext:i64 GR32:i32:$src2), GR64:i64:$src1) - Complexity = 6
                // Dst: (AGFR:i64:i32 GR64:i64:$src1, GR32:i32:$src2)
              /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::ZERO_EXTEND),// ->6005
/*5992*/        OPC_RecordChild0, // #0 = $src2
/*5993*/        OPC_MoveParent,
/*5994*/        OPC_RecordChild1, // #1 = $src1
/*5995*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (add:i64 (zext:i64 GR32:i32:$src2), GR64:i64:$src1) - Complexity = 6
                // Dst: (ALGFR:i64:i32 GR64:i64:$src1, GR32:i32:$src2)
              0, // EndSwitchOpcode
/*6006*/    /*Scope*/ 35, /*->6042*/
/*6007*/      OPC_RecordChild0, // #0 = $src1
/*6008*/      OPC_MoveChild, 1,
/*6010*/      OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*6013*/      OPC_RecordChild0, // #1 = $src2
/*6014*/      OPC_MoveChild, 1,
/*6016*/      OPC_CheckValueType, MVT::i32,
/*6018*/      OPC_MoveParent,
/*6019*/      OPC_MoveParent,
/*6020*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*6023*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*6032*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGFR), 0,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
              // Src: (add:i64 GR64:i64:$src1, (sext_inreg:i64 GR64:i64:$src2, i32:Other)) - Complexity = 6
              // Dst: (AGFR:i64:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*6042*/    /*Scope*/ 35, /*->6078*/
/*6043*/      OPC_MoveChild, 0,
/*6045*/      OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*6048*/      OPC_RecordChild0, // #0 = $src2
/*6049*/      OPC_MoveChild, 1,
/*6051*/      OPC_CheckValueType, MVT::i32,
/*6053*/      OPC_MoveParent,
/*6054*/      OPC_MoveParent,
/*6055*/      OPC_RecordChild1, // #1 = $src1
/*6056*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*6059*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*6068*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGFR), 0,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 3, 
              // Src: (add:i64 (sext_inreg:i64 GR64:i64:$src2, i32:Other), GR64:i64:$src1) - Complexity = 6
              // Dst: (AGFR:i64:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*6078*/    /*Scope*/ 28, /*->6107*/
/*6079*/      OPC_RecordChild0, // #0 = $R1src
/*6080*/      OPC_RecordChild1, // #1 = $R2
/*6081*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->6094
/*6084*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::AR), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (AR:i32:i32 GR32:i32:$R1src, GR32:i32:$R2)
              /*SwitchType*/ 10,  MVT::i64,// ->6106
/*6096*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (AGR:i64:i32 GR64:i64:$R1src, GR64:i64:$R2)
              0, // EndSwitchType
/*6107*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 67|128,3/*451*/,  TARGET_VAL(ISD::ADDC),// ->6563
/*6112*/    OPC_Scope, 104, /*->6218*/ // 7 children in Scope
/*6114*/      OPC_RecordChild0, // #0 = $R1src
/*6115*/      OPC_MoveChild, 1,
/*6117*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6120*/      OPC_RecordMemRef,
/*6121*/      OPC_RecordNode, // #1 = 'ld' chained node
/*6122*/      OPC_CheckFoldableChainNode,
/*6123*/      OPC_RecordChild1, // #2 = $XBD2
/*6124*/      OPC_CheckChild1Type, MVT::i64,
/*6126*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6128*/      OPC_Scope, 41, /*->6171*/ // 3 children in Scope
/*6130*/        OPC_CheckPredicate, 13, // Predicate_load
/*6132*/        OPC_MoveParent,
/*6133*/        OPC_CheckType, MVT::i32,
/*6135*/        OPC_Scope, 16, /*->6153*/ // 2 children in Scope
/*6137*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*6140*/          OPC_EmitMergeInputChains1_1,
/*6141*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (addc:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (AL:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*6153*/        /*Scope*/ 16, /*->6170*/
/*6154*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*6157*/          OPC_EmitMergeInputChains1_1,
/*6158*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (addc:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (ALY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*6170*/        0, /*End of Scope*/
/*6171*/      /*Scope*/ 23, /*->6195*/
/*6172*/        OPC_CheckPredicate, 38, // Predicate_zextload
/*6174*/        OPC_CheckPredicate, 55, // Predicate_zextloadi32
/*6176*/        OPC_MoveParent,
/*6177*/        OPC_CheckType, MVT::i64,
/*6179*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*6182*/        OPC_EmitMergeInputChains1_1,
/*6183*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGF), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (addc:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>) - Complexity = 19
                // Dst: (ALGF:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*6195*/      /*Scope*/ 21, /*->6217*/
/*6196*/        OPC_CheckPredicate, 13, // Predicate_load
/*6198*/        OPC_MoveParent,
/*6199*/        OPC_CheckType, MVT::i64,
/*6201*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*6204*/        OPC_EmitMergeInputChains1_1,
/*6205*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALG), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (addc:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (ALG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*6217*/      0, /*End of Scope*/
/*6218*/    /*Scope*/ 106, /*->6325*/
/*6219*/      OPC_MoveChild, 0,
/*6221*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6224*/      OPC_RecordMemRef,
/*6225*/      OPC_RecordNode, // #0 = 'ld' chained node
/*6226*/      OPC_CheckFoldableChainNode,
/*6227*/      OPC_RecordChild1, // #1 = $XBD2
/*6228*/      OPC_CheckChild1Type, MVT::i64,
/*6230*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6232*/      OPC_Scope, 42, /*->6276*/ // 3 children in Scope
/*6234*/        OPC_CheckPredicate, 13, // Predicate_load
/*6236*/        OPC_MoveParent,
/*6237*/        OPC_RecordChild1, // #2 = $R1src
/*6238*/        OPC_CheckType, MVT::i32,
/*6240*/        OPC_Scope, 16, /*->6258*/ // 2 children in Scope
/*6242*/          OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*6245*/          OPC_EmitMergeInputChains1_0,
/*6246*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (addc:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (AL:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*6258*/        /*Scope*/ 16, /*->6275*/
/*6259*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*6262*/          OPC_EmitMergeInputChains1_0,
/*6263*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (addc:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (ALY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*6275*/        0, /*End of Scope*/
/*6276*/      /*Scope*/ 24, /*->6301*/
/*6277*/        OPC_CheckPredicate, 38, // Predicate_zextload
/*6279*/        OPC_CheckPredicate, 55, // Predicate_zextloadi32
/*6281*/        OPC_MoveParent,
/*6282*/        OPC_RecordChild1, // #2 = $R1src
/*6283*/        OPC_CheckType, MVT::i64,
/*6285*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*6288*/        OPC_EmitMergeInputChains1_0,
/*6289*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGF), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (addc:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>, GR64:i64:$R1src) - Complexity = 19
                // Dst: (ALGF:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*6301*/      /*Scope*/ 22, /*->6324*/
/*6302*/        OPC_CheckPredicate, 13, // Predicate_load
/*6304*/        OPC_MoveParent,
/*6305*/        OPC_RecordChild1, // #2 = $R1src
/*6306*/        OPC_CheckType, MVT::i64,
/*6308*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*6311*/        OPC_EmitMergeInputChains1_0,
/*6312*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALG), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (addc:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src) - Complexity = 19
                // Dst: (ALG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*6324*/      0, /*End of Scope*/
/*6325*/    /*Scope*/ 35, /*->6361*/
/*6326*/      OPC_RecordChild0, // #0 = $src1
/*6327*/      OPC_MoveChild, 1,
/*6329*/      OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*6335*/      OPC_RecordChild0, // #1 = $src2
/*6336*/      OPC_MoveParent,
/*6337*/      OPC_CheckType, MVT::i64,
/*6339*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*6342*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*6351*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
              // Src: (addc:i64 GR64:i64:$src1, (and:i64 GR64:i64:$src2, 4294967295:i64)) - Complexity = 11
              // Dst: (ALGFR:i64:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*6361*/    /*Scope*/ 35, /*->6397*/
/*6362*/      OPC_MoveChild, 0,
/*6364*/      OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*6370*/      OPC_RecordChild0, // #0 = $src2
/*6371*/      OPC_MoveParent,
/*6372*/      OPC_RecordChild1, // #1 = $src1
/*6373*/      OPC_CheckType, MVT::i64,
/*6375*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*6378*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*6387*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 3, 
              // Src: (addc:i64 (and:i64 GR64:i64:$src2, 4294967295:i64), GR64:i64:$src1) - Complexity = 11
              // Dst: (ALGFR:i64:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*6397*/    /*Scope*/ 116, /*->6514*/
/*6398*/      OPC_RecordChild0, // #0 = $R3
/*6399*/      OPC_Scope, 94, /*->6495*/ // 2 children in Scope
/*6401*/        OPC_RecordChild1, // #1 = $I2
/*6402*/        OPC_MoveChild, 1,
/*6404*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6407*/        OPC_Scope, 22, /*->6431*/ // 4 children in Scope
/*6409*/          OPC_CheckPredicate, 34, // Predicate_imm32sx16
/*6411*/          OPC_MoveParent,
/*6412*/          OPC_CheckType, MVT::i32,
/*6414*/          OPC_CheckPatternPredicate, 1, // (Subtarget.hasDistinctOps())
/*6416*/          OPC_EmitConvertToTarget, 1,
/*6418*/          OPC_EmitNodeXForm, 2, 2, // SIMM16
/*6421*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALHSIK), 0|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (addc:i32 GR32:i32:$R3, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2) - Complexity = 7
                  // Dst: (ALHSIK:i32:i32 GR32:i32:$R3, (SIMM16:i32 (imm:i32):$I2))
/*6431*/        /*Scope*/ 22, /*->6454*/
/*6432*/          OPC_CheckPredicate, 35, // Predicate_imm64sx16
/*6434*/          OPC_MoveParent,
/*6435*/          OPC_CheckType, MVT::i64,
/*6437*/          OPC_CheckPatternPredicate, 1, // (Subtarget.hasDistinctOps())
/*6439*/          OPC_EmitConvertToTarget, 1,
/*6441*/          OPC_EmitNodeXForm, 2, 2, // SIMM16
/*6444*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGHSIK), 0|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (addc:i64 GR64:i64:$R3, (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$I2) - Complexity = 7
                  // Dst: (ALGHSIK:i64:i32 GR64:i64:$R3, (SIMM16:i64 (imm:i64):$I2))
/*6454*/        /*Scope*/ 20, /*->6475*/
/*6455*/          OPC_CheckPredicate, 57, // Predicate_imm64zx32
/*6457*/          OPC_MoveParent,
/*6458*/          OPC_CheckType, MVT::i64,
/*6460*/          OPC_EmitConvertToTarget, 1,
/*6462*/          OPC_EmitNodeXForm, 9, 2, // UIMM32
/*6465*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFI), 0|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (addc:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64zx32>><<X:UIMM32>>:$I2) - Complexity = 7
                  // Dst: (ALGFI:i64:i32 GR64:i64:$R1src, (UIMM32:i64 (imm:i64):$I2))
/*6475*/        /*Scope*/ 18, /*->6494*/
/*6476*/          OPC_MoveParent,
/*6477*/          OPC_CheckType, MVT::i32,
/*6479*/          OPC_EmitConvertToTarget, 1,
/*6481*/          OPC_EmitNodeXForm, 9, 2, // UIMM32
/*6484*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALFI), 0|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (addc:i32 GR32:i32:$R1src, (imm:i32)<<X:UIMM32>>:$I2) - Complexity = 6
                  // Dst: (ALFI:i32:i32 GR32:i32:$R1src, (UIMM32:i32 (imm:i32):$I2))
/*6494*/        0, /*End of Scope*/
/*6495*/      /*Scope*/ 17, /*->6513*/
/*6496*/        OPC_MoveChild, 1,
/*6498*/        OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*6501*/        OPC_RecordChild0, // #1 = $src2
/*6502*/        OPC_MoveParent,
/*6503*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i64 GR64:i64:$src1, (zext:i64 GR32:i32:$src2)) - Complexity = 6
                // Dst: (ALGFR:i64:i32 GR64:i64:$src1, GR32:i32:$src2)
/*6513*/      0, /*End of Scope*/
/*6514*/    /*Scope*/ 18, /*->6533*/
/*6515*/      OPC_MoveChild, 0,
/*6517*/      OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*6520*/      OPC_RecordChild0, // #0 = $src2
/*6521*/      OPC_MoveParent,
/*6522*/      OPC_RecordChild1, // #1 = $src1
/*6523*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (addc:i64 (zext:i64 GR32:i32:$src2), GR64:i64:$src1) - Complexity = 6
              // Dst: (ALGFR:i64:i32 GR64:i64:$src1, GR32:i32:$src2)
/*6533*/    /*Scope*/ 28, /*->6562*/
/*6534*/      OPC_RecordChild0, // #0 = $R1src
/*6535*/      OPC_RecordChild1, // #1 = $R2
/*6536*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->6549
/*6539*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALR), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (ALR:i32:i32 GR32:i32:$R1src, GR32:i32:$R2)
              /*SwitchType*/ 10,  MVT::i64,// ->6561
/*6551*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGR), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (ALGR:i64:i32 GR64:i64:$R1src, GR64:i64:$R2)
              0, // EndSwitchType
/*6562*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16|128,1/*144*/,  TARGET_VAL(ISD::ADDE),// ->6711
/*6567*/    OPC_CaptureGlueInput,
/*6568*/    OPC_Scope, 55, /*->6625*/ // 3 children in Scope
/*6570*/      OPC_RecordChild0, // #0 = $R1src
/*6571*/      OPC_MoveChild, 1,
/*6573*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6576*/      OPC_RecordMemRef,
/*6577*/      OPC_RecordNode, // #1 = 'ld' chained node
/*6578*/      OPC_CheckFoldableChainNode,
/*6579*/      OPC_RecordChild1, // #2 = $XBD2
/*6580*/      OPC_CheckChild1Type, MVT::i64,
/*6582*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6584*/      OPC_CheckPredicate, 13, // Predicate_load
/*6586*/      OPC_MoveParent,
/*6587*/      OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->6606
/*6590*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*6593*/        OPC_EmitMergeInputChains1_1,
/*6594*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALC), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (adde:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (ALC:i32:i32 GR32:i32:$R1src, bdxaddr20only:i64:$XBD2)
              /*SwitchType*/ 16,  MVT::i64,// ->6624
/*6608*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*6611*/        OPC_EmitMergeInputChains1_1,
/*6612*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALCG), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (adde:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (ALCG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
              0, // EndSwitchType
/*6625*/    /*Scope*/ 55, /*->6681*/
/*6626*/      OPC_MoveChild, 0,
/*6628*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6631*/      OPC_RecordMemRef,
/*6632*/      OPC_RecordNode, // #0 = 'ld' chained node
/*6633*/      OPC_CheckFoldableChainNode,
/*6634*/      OPC_RecordChild1, // #1 = $XBD2
/*6635*/      OPC_CheckChild1Type, MVT::i64,
/*6637*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6639*/      OPC_CheckPredicate, 13, // Predicate_load
/*6641*/      OPC_MoveParent,
/*6642*/      OPC_RecordChild1, // #2 = $R1src
/*6643*/      OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->6662
/*6646*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*6649*/        OPC_EmitMergeInputChains1_0,
/*6650*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALC), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (adde:i32 (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                // Dst: (ALC:i32:i32 GR32:i32:$R1src, bdxaddr20only:i64:$XBD2)
              /*SwitchType*/ 16,  MVT::i64,// ->6680
/*6664*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*6667*/        OPC_EmitMergeInputChains1_0,
/*6668*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALCG), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (adde:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src) - Complexity = 19
                // Dst: (ALCG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
              0, // EndSwitchType
/*6681*/    /*Scope*/ 28, /*->6710*/
/*6682*/      OPC_RecordChild0, // #0 = $R1src
/*6683*/      OPC_RecordChild1, // #1 = $R2
/*6684*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->6697
/*6687*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALCR), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (ALCR:i32:i32 GR32:i32:$R1src, GR32:i32:$R2)
              /*SwitchType*/ 10,  MVT::i64,// ->6709
/*6699*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALCGR), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (ALCGR:i64:i32 GR64:i64:$R1src, GR64:i64:$R2)
              0, // EndSwitchType
/*6710*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 61|128,3/*445*/,  TARGET_VAL(ISD::SUB),// ->7160
/*6715*/    OPC_Scope, 44|128,1/*172*/, /*->6890*/ // 6 children in Scope
/*6718*/      OPC_RecordChild0, // #0 = $R1src
/*6719*/      OPC_MoveChild, 1,
/*6721*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6724*/      OPC_RecordMemRef,
/*6725*/      OPC_RecordNode, // #1 = 'ld' chained node
/*6726*/      OPC_CheckFoldableChainNode,
/*6727*/      OPC_RecordChild1, // #2 = $XBD2
/*6728*/      OPC_CheckChild1Type, MVT::i64,
/*6730*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6732*/      OPC_Scope, 43, /*->6777*/ // 5 children in Scope
/*6734*/        OPC_CheckPredicate, 52, // Predicate_sextload
/*6736*/        OPC_CheckPredicate, 53, // Predicate_sextloadi16
/*6738*/        OPC_MoveParent,
/*6739*/        OPC_CheckType, MVT::i32,
/*6741*/        OPC_Scope, 16, /*->6759*/ // 2 children in Scope
/*6743*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*6746*/          OPC_EmitMergeInputChains1_1,
/*6747*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SH), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (sub:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                  // Dst: (SH:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*6759*/        /*Scope*/ 16, /*->6776*/
/*6760*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*6763*/          OPC_EmitMergeInputChains1_1,
/*6764*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SHY), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (sub:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                  // Dst: (SHY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*6776*/        0, /*End of Scope*/
/*6777*/      /*Scope*/ 41, /*->6819*/
/*6778*/        OPC_CheckPredicate, 13, // Predicate_load
/*6780*/        OPC_MoveParent,
/*6781*/        OPC_CheckType, MVT::i32,
/*6783*/        OPC_Scope, 16, /*->6801*/ // 2 children in Scope
/*6785*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*6788*/          OPC_EmitMergeInputChains1_1,
/*6789*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::S), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (sub:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (S:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*6801*/        /*Scope*/ 16, /*->6818*/
/*6802*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*6805*/          OPC_EmitMergeInputChains1_1,
/*6806*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SY), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (sub:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (SY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*6818*/        0, /*End of Scope*/
/*6819*/      /*Scope*/ 23, /*->6843*/
/*6820*/        OPC_CheckPredicate, 52, // Predicate_sextload
/*6822*/        OPC_CheckPredicate, 54, // Predicate_sextloadi32
/*6824*/        OPC_MoveParent,
/*6825*/        OPC_CheckType, MVT::i64,
/*6827*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*6830*/        OPC_EmitMergeInputChains1_1,
/*6831*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SGF), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (sub:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>) - Complexity = 19
                // Dst: (SGF:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*6843*/      /*Scope*/ 21, /*->6865*/
/*6844*/        OPC_CheckPredicate, 13, // Predicate_load
/*6846*/        OPC_MoveParent,
/*6847*/        OPC_CheckType, MVT::i64,
/*6849*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*6852*/        OPC_EmitMergeInputChains1_1,
/*6853*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SG), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (sub:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (SG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*6865*/      /*Scope*/ 23, /*->6889*/
/*6866*/        OPC_CheckPredicate, 38, // Predicate_zextload
/*6868*/        OPC_CheckPredicate, 55, // Predicate_zextloadi32
/*6870*/        OPC_MoveParent,
/*6871*/        OPC_CheckType, MVT::i64,
/*6873*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #3 #4 #5
/*6876*/        OPC_EmitMergeInputChains1_1,
/*6877*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGF), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (sub:i64 GR64:i64:$src1, (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>) - Complexity = 19
                // Dst: (SLGF:i64:i32 GR64:i64:$src1, bdxaddr20only:i64:$addr)
/*6889*/      0, /*End of Scope*/
/*6890*/    /*Scope*/ 47, /*->6938*/
/*6891*/      OPC_RecordNode, // #0 = $src
/*6892*/      OPC_CheckType, MVT::i64,
/*6894*/      OPC_Scope, 13, /*->6909*/ // 3 children in Scope
/*6896*/        OPC_CheckComplexPat, /*CP*/11, /*#*/0, // selectDynAlloc12Only:$src #1 #2 #3
/*6899*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJDYNALLOC), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: dynalloc12only:i64:$src - Complexity = 12
                // Dst: (ADJDYNALLOC:i64 dynalloc12only:i64:$src)
/*6909*/      /*Scope*/ 13, /*->6923*/
/*6910*/        OPC_CheckComplexPat, /*CP*/12, /*#*/0, // selectLAAddr12Pair:$XBD2 #1 #2 #3
/*6913*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: laaddr12pair:i64:$XBD2 - Complexity = 12
                // Dst: (LA:i64 laaddr12pair:i64:$XBD2)
/*6923*/      /*Scope*/ 13, /*->6937*/
/*6924*/        OPC_CheckComplexPat, /*CP*/13, /*#*/0, // selectLAAddr20Pair:$XBD2 #1 #2 #3
/*6927*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LAY), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: laaddr20pair:i64:$XBD2 - Complexity = 12
                // Dst: (LAY:i64 laaddr20pair:i64:$XBD2)
/*6937*/      0, /*End of Scope*/
/*6938*/    /*Scope*/ 54, /*->6993*/
/*6939*/      OPC_MoveChild, 0,
/*6941*/      OPC_CheckInteger, 0, 
/*6943*/      OPC_MoveParent,
/*6944*/      OPC_MoveChild, 1,
/*6946*/      OPC_SwitchOpcode /*2 cases */, 11,  TARGET_VAL(ISD::SIGN_EXTEND),// ->6961
/*6950*/        OPC_RecordChild0, // #0 = $src
/*6951*/        OPC_MoveParent,
/*6952*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCGFR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sub:i64 0:i64, (sext:i64 GR32:i32:$src)) - Complexity = 11
                // Dst: (LCGFR:i64:i32 GR32:i32:$src)
              /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->6992
/*6964*/        OPC_RecordChild0, // #0 = $src
/*6965*/        OPC_MoveChild, 1,
/*6967*/        OPC_CheckValueType, MVT::i32,
/*6969*/        OPC_MoveParent,
/*6970*/        OPC_MoveParent,
/*6971*/        OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*6974*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*6983*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCGFR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (sub:i64 0:i64, (sext_inreg:i64 GR64:i64:$src, i32:Other)) - Complexity = 11
                // Dst: (LCGFR:i64:i32 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_32bit:i32))
              0, // EndSwitchOpcode
/*6993*/    /*Scope*/ 35, /*->7029*/
/*6994*/      OPC_RecordChild0, // #0 = $src1
/*6995*/      OPC_MoveChild, 1,
/*6997*/      OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*7003*/      OPC_RecordChild0, // #1 = $src2
/*7004*/      OPC_MoveParent,
/*7005*/      OPC_CheckType, MVT::i64,
/*7007*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*7010*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*7019*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGFR), 0,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
              // Src: (sub:i64 GR64:i64:$src1, (and:i64 GR64:i64:$src2, 4294967295:i64)) - Complexity = 11
              // Dst: (SLGFR:i64:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*7029*/    /*Scope*/ 30, /*->7060*/
/*7030*/      OPC_MoveChild, 0,
/*7032*/      OPC_CheckInteger, 0, 
/*7034*/      OPC_MoveParent,
/*7035*/      OPC_RecordChild1, // #0 = $R2
/*7036*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7048
/*7039*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCR), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sub:i32 0:i32, GR32:i32:$R2) - Complexity = 8
                // Dst: (LCR:i32:i32 GR32:i32:$R2)
              /*SwitchType*/ 9,  MVT::i64,// ->7059
/*7050*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCGR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sub:i64 0:i64, GR64:i64:$R2) - Complexity = 8
                // Dst: (LCGR:i64:i32 GR64:i64:$R2)
              0, // EndSwitchType
/*7060*/    /*Scope*/ 98, /*->7159*/
/*7061*/      OPC_RecordChild0, // #0 = $src1
/*7062*/      OPC_Scope, 66, /*->7130*/ // 2 children in Scope
/*7064*/        OPC_MoveChild, 1,
/*7066*/        OPC_SwitchOpcode /*3 cases */, 12,  TARGET_VAL(ISD::SIGN_EXTEND),// ->7082
/*7070*/          OPC_RecordChild0, // #1 = $src2
/*7071*/          OPC_MoveParent,
/*7072*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SGFR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i64 GR64:i64:$src1, (sext:i64 GR32:i32:$src2)) - Complexity = 6
                  // Dst: (SGFR:i64:i32 GR64:i64:$src1, GR32:i32:$src2)
                /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::ZERO_EXTEND),// ->7097
/*7085*/          OPC_RecordChild0, // #1 = $src2
/*7086*/          OPC_MoveParent,
/*7087*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGFR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i64 GR64:i64:$src1, (zext:i64 GR32:i32:$src2)) - Complexity = 6
                  // Dst: (SLGFR:i64:i32 GR64:i64:$src1, GR32:i32:$src2)
                /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->7129
/*7100*/          OPC_RecordChild0, // #1 = $src2
/*7101*/          OPC_MoveChild, 1,
/*7103*/          OPC_CheckValueType, MVT::i32,
/*7105*/          OPC_MoveParent,
/*7106*/          OPC_MoveParent,
/*7107*/          OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*7110*/          OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*7119*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SGFR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (sub:i64 GR64:i64:$src1, (sext_inreg:i64 GR64:i64:$src2, i32:Other)) - Complexity = 6
                  // Dst: (SGFR:i64:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
                0, // EndSwitchOpcode
/*7130*/      /*Scope*/ 27, /*->7158*/
/*7131*/        OPC_RecordChild1, // #1 = $R2
/*7132*/        OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->7145
/*7135*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SR), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                  // Dst: (SR:i32:i32 GR32:i32:$R1src, GR32:i32:$R2)
                /*SwitchType*/ 10,  MVT::i64,// ->7157
/*7147*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SGR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                  // Dst: (SGR:i64:i32 GR64:i64:$R1src, GR64:i64:$R2)
                0, // EndSwitchType
/*7158*/      0, /*End of Scope*/
/*7159*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 60|128,1/*188*/,  TARGET_VAL(ISD::SUBC),// ->7352
/*7164*/    OPC_RecordChild0, // #0 = $R1src
/*7165*/    OPC_Scope, 27|128,1/*155*/, /*->7323*/ // 2 children in Scope
/*7168*/      OPC_MoveChild, 1,
/*7170*/      OPC_Scope, 101, /*->7273*/ // 3 children in Scope
/*7172*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*7175*/        OPC_RecordMemRef,
/*7176*/        OPC_RecordNode, // #1 = 'ld' chained node
/*7177*/        OPC_CheckFoldableChainNode,
/*7178*/        OPC_RecordChild1, // #2 = $XBD2
/*7179*/        OPC_CheckChild1Type, MVT::i64,
/*7181*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*7183*/        OPC_Scope, 41, /*->7226*/ // 3 children in Scope
/*7185*/          OPC_CheckPredicate, 13, // Predicate_load
/*7187*/          OPC_MoveParent,
/*7188*/          OPC_CheckType, MVT::i32,
/*7190*/          OPC_Scope, 16, /*->7208*/ // 2 children in Scope
/*7192*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*7195*/            OPC_EmitMergeInputChains1_1,
/*7196*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::SL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (subc:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (SL:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*7208*/          /*Scope*/ 16, /*->7225*/
/*7209*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*7212*/            OPC_EmitMergeInputChains1_1,
/*7213*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (subc:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (SLY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*7225*/          0, /*End of Scope*/
/*7226*/        /*Scope*/ 23, /*->7250*/
/*7227*/          OPC_CheckPredicate, 38, // Predicate_zextload
/*7229*/          OPC_CheckPredicate, 55, // Predicate_zextloadi32
/*7231*/          OPC_MoveParent,
/*7232*/          OPC_CheckType, MVT::i64,
/*7234*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*7237*/          OPC_EmitMergeInputChains1_1,
/*7238*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGF), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (subc:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>) - Complexity = 19
                  // Dst: (SLGF:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*7250*/        /*Scope*/ 21, /*->7272*/
/*7251*/          OPC_CheckPredicate, 13, // Predicate_load
/*7253*/          OPC_MoveParent,
/*7254*/          OPC_CheckType, MVT::i64,
/*7256*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*7259*/          OPC_EmitMergeInputChains1_1,
/*7260*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLG), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (subc:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (SLG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*7272*/        0, /*End of Scope*/
/*7273*/      /*Scope*/ 32, /*->7306*/
/*7274*/        OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*7280*/        OPC_RecordChild0, // #1 = $src2
/*7281*/        OPC_MoveParent,
/*7282*/        OPC_CheckType, MVT::i64,
/*7284*/        OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*7287*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*7296*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGFR), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (subc:i64 GR64:i64:$src1, (and:i64 GR64:i64:$src2, 4294967295:i64)) - Complexity = 11
                // Dst: (SLGFR:i64:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*7306*/      /*Scope*/ 15, /*->7322*/
/*7307*/        OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*7310*/        OPC_RecordChild0, // #1 = $src2
/*7311*/        OPC_MoveParent,
/*7312*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGFR), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (subc:i64 GR64:i64:$src1, (zext:i64 GR32:i32:$src2)) - Complexity = 6
                // Dst: (SLGFR:i64:i32 GR64:i64:$src1, GR32:i32:$src2)
/*7322*/      0, /*End of Scope*/
/*7323*/    /*Scope*/ 27, /*->7351*/
/*7324*/      OPC_RecordChild1, // #1 = $R2
/*7325*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->7338
/*7328*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLR), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (subc:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (SLR:i32:i32 GR32:i32:$R1src, GR32:i32:$R2)
              /*SwitchType*/ 10,  MVT::i64,// ->7350
/*7340*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGR), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (subc:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (SLGR:i64:i32 GR64:i64:$R1src, GR64:i64:$R2)
              0, // EndSwitchType
/*7351*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 87,  TARGET_VAL(ISD::SUBE),// ->7442
/*7355*/    OPC_CaptureGlueInput,
/*7356*/    OPC_RecordChild0, // #0 = $R1src
/*7357*/    OPC_Scope, 54, /*->7413*/ // 2 children in Scope
/*7359*/      OPC_MoveChild, 1,
/*7361*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*7364*/      OPC_RecordMemRef,
/*7365*/      OPC_RecordNode, // #1 = 'ld' chained node
/*7366*/      OPC_CheckFoldableChainNode,
/*7367*/      OPC_RecordChild1, // #2 = $XBD2
/*7368*/      OPC_CheckChild1Type, MVT::i64,
/*7370*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*7372*/      OPC_CheckPredicate, 13, // Predicate_load
/*7374*/      OPC_MoveParent,
/*7375*/      OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->7394
/*7378*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*7381*/        OPC_EmitMergeInputChains1_1,
/*7382*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLB), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (sube:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (SLB:i32:i32 GR32:i32:$R1src, bdxaddr20only:i64:$XBD2)
              /*SwitchType*/ 16,  MVT::i64,// ->7412
/*7396*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*7399*/        OPC_EmitMergeInputChains1_1,
/*7400*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLBG), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (sube:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (SLBG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
              0, // EndSwitchType
/*7413*/    /*Scope*/ 27, /*->7441*/
/*7414*/      OPC_RecordChild1, // #1 = $R2
/*7415*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->7428
/*7418*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLBR), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sube:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (SLBR:i32:i32 GR32:i32:$R1src, GR32:i32:$R2)
              /*SwitchType*/ 10,  MVT::i64,// ->7440
/*7430*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGBR), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sube:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (SLGBR:i64:i32 GR64:i64:$R1src, GR64:i64:$R2)
              0, // EndSwitchType
/*7441*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 90|128,3/*474*/,  TARGET_VAL(ISD::AND),// ->7920
/*7446*/    OPC_Scope, 75, /*->7523*/ // 8 children in Scope
/*7448*/      OPC_RecordChild0, // #0 = $R1src
/*7449*/      OPC_MoveChild, 1,
/*7451*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*7454*/      OPC_RecordMemRef,
/*7455*/      OPC_RecordNode, // #1 = 'ld' chained node
/*7456*/      OPC_CheckFoldableChainNode,
/*7457*/      OPC_RecordChild1, // #2 = $XBD2
/*7458*/      OPC_CheckChild1Type, MVT::i64,
/*7460*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*7462*/      OPC_CheckPredicate, 13, // Predicate_load
/*7464*/      OPC_MoveParent,
/*7465*/      OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->7504
/*7468*/        OPC_Scope, 16, /*->7486*/ // 2 children in Scope
/*7470*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*7473*/          OPC_EmitMergeInputChains1_1,
/*7474*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::N), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (and:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (N:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*7486*/        /*Scope*/ 16, /*->7503*/
/*7487*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*7490*/          OPC_EmitMergeInputChains1_1,
/*7491*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NY), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (and:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (NY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*7503*/        0, /*End of Scope*/
              /*SwitchType*/ 16,  MVT::i64,// ->7522
/*7506*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*7509*/        OPC_EmitMergeInputChains1_1,
/*7510*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::NG), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (and:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (NG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
              0, // EndSwitchType
/*7523*/    /*Scope*/ 75, /*->7599*/
/*7524*/      OPC_MoveChild, 0,
/*7526*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*7529*/      OPC_RecordMemRef,
/*7530*/      OPC_RecordNode, // #0 = 'ld' chained node
/*7531*/      OPC_CheckFoldableChainNode,
/*7532*/      OPC_RecordChild1, // #1 = $XBD2
/*7533*/      OPC_CheckChild1Type, MVT::i64,
/*7535*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*7537*/      OPC_CheckPredicate, 13, // Predicate_load
/*7539*/      OPC_MoveParent,
/*7540*/      OPC_RecordChild1, // #2 = $R1src
/*7541*/      OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->7580
/*7544*/        OPC_Scope, 16, /*->7562*/ // 2 children in Scope
/*7546*/          OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*7549*/          OPC_EmitMergeInputChains1_0,
/*7550*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::N), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (and:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (N:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*7562*/        /*Scope*/ 16, /*->7579*/
/*7563*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*7566*/          OPC_EmitMergeInputChains1_0,
/*7567*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NY), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (and:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (NY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*7579*/        0, /*End of Scope*/
              /*SwitchType*/ 16,  MVT::i64,// ->7598
/*7582*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*7585*/        OPC_EmitMergeInputChains1_0,
/*7586*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::NG), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (and:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src) - Complexity = 19
                // Dst: (NG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
              0, // EndSwitchType
/*7599*/    /*Scope*/ 14, /*->7614*/
/*7600*/      OPC_CheckAndImm, 127|128,1/*255*/, 
/*7603*/      OPC_RecordChild0, // #0 = $R2
/*7604*/      OPC_CheckType, MVT::i32,
/*7606*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLCR), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (and:i32 GR32:i32:$R2, 255:i32) - Complexity = 8
              // Dst: (LLCR:i32 GR32:i32:$R2)
/*7614*/    /*Scope*/ 15, /*->7630*/
/*7615*/      OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*7619*/      OPC_RecordChild0, // #0 = $R2
/*7620*/      OPC_CheckType, MVT::i32,
/*7622*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLHR), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (and:i32 GR32:i32:$R2, 65535:i32) - Complexity = 8
              // Dst: (LLHR:i32 GR32:i32:$R2)
/*7630*/    /*Scope*/ 14, /*->7645*/
/*7631*/      OPC_CheckAndImm, 127|128,1/*255*/, 
/*7634*/      OPC_RecordChild0, // #0 = $R2
/*7635*/      OPC_CheckType, MVT::i64,
/*7637*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGCR), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (and:i64 GR64:i64:$R2, 255:i64) - Complexity = 8
              // Dst: (LLGCR:i64 GR64:i64:$R2)
/*7645*/    /*Scope*/ 15, /*->7661*/
/*7646*/      OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*7650*/      OPC_RecordChild0, // #0 = $R2
/*7651*/      OPC_CheckType, MVT::i64,
/*7653*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGHR), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (and:i64 GR64:i64:$R2, 65535:i64) - Complexity = 8
              // Dst: (LLGHR:i64 GR64:i64:$R2)
/*7661*/    /*Scope*/ 29, /*->7691*/
/*7662*/      OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*7668*/      OPC_RecordChild0, // #0 = $src
/*7669*/      OPC_CheckType, MVT::i64,
/*7671*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*7674*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*7683*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGFR), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
              // Src: (and:i64 GR64:i64:$src, 4294967295:i64) - Complexity = 8
              // Dst: (LLGFR:i64 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_32bit:i32))
/*7691*/    /*Scope*/ 98|128,1/*226*/, /*->7919*/
/*7693*/      OPC_RecordChild0, // #0 = $R1src
/*7694*/      OPC_RecordChild1, // #1 = $I2
/*7695*/      OPC_Scope, 66|128,1/*194*/, /*->7892*/ // 3 children in Scope
/*7698*/        OPC_MoveChild, 1,
/*7700*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7703*/        OPC_Scope, 20, /*->7725*/ // 9 children in Scope
/*7705*/          OPC_CheckPredicate, 59, // Predicate_imm32ll16c
/*7707*/          OPC_MoveParent,
/*7708*/          OPC_CheckType, MVT::i32,
/*7710*/          OPC_EmitConvertToTarget, 1,
/*7712*/          OPC_EmitNodeXForm, 3, 2, // LL16
/*7715*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NILL32), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i32 GR32:i32:$R1src, (imm:i32)<<P:Predicate_imm32ll16c>><<X:LL16>>:$I2) - Complexity = 7
                  // Dst: (NILL32:i32:i32 GR32:i32:$R1src, (LL16:i32 (imm:i32):$I2))
/*7725*/        /*Scope*/ 20, /*->7746*/
/*7726*/          OPC_CheckPredicate, 60, // Predicate_imm32lh16c
/*7728*/          OPC_MoveParent,
/*7729*/          OPC_CheckType, MVT::i32,
/*7731*/          OPC_EmitConvertToTarget, 1,
/*7733*/          OPC_EmitNodeXForm, 4, 2, // LH16
/*7736*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NILH32), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i32 GR32:i32:$R1src, (imm:i32)<<P:Predicate_imm32lh16c>><<X:LH16>>:$I2) - Complexity = 7
                  // Dst: (NILH32:i32:i32 GR32:i32:$R1src, (LH16:i32 (imm:i32):$I2))
/*7746*/        /*Scope*/ 20, /*->7767*/
/*7747*/          OPC_CheckPredicate, 61, // Predicate_imm64ll16c
/*7749*/          OPC_MoveParent,
/*7750*/          OPC_CheckType, MVT::i64,
/*7752*/          OPC_EmitConvertToTarget, 1,
/*7754*/          OPC_EmitNodeXForm, 3, 2, // LL16
/*7757*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NILL), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64ll16c>><<X:LL16>>:$I2) - Complexity = 7
                  // Dst: (NILL:i64:i32 GR64:i64:$R1src, (LL16:i64 (imm:i64):$I2))
/*7767*/        /*Scope*/ 20, /*->7788*/
/*7768*/          OPC_CheckPredicate, 62, // Predicate_imm64lh16c
/*7770*/          OPC_MoveParent,
/*7771*/          OPC_CheckType, MVT::i64,
/*7773*/          OPC_EmitConvertToTarget, 1,
/*7775*/          OPC_EmitNodeXForm, 4, 2, // LH16
/*7778*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NILH), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64lh16c>><<X:LH16>>:$I2) - Complexity = 7
                  // Dst: (NILH:i64:i32 GR64:i64:$R1src, (LH16:i64 (imm:i64):$I2))
/*7788*/        /*Scope*/ 20, /*->7809*/
/*7789*/          OPC_CheckPredicate, 63, // Predicate_imm64hl16c
/*7791*/          OPC_MoveParent,
/*7792*/          OPC_CheckType, MVT::i64,
/*7794*/          OPC_EmitConvertToTarget, 1,
/*7796*/          OPC_EmitNodeXForm, 5, 2, // HL16
/*7799*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIHL), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64hl16c>><<X:HL16>>:$I2) - Complexity = 7
                  // Dst: (NIHL:i64:i32 GR64:i64:$R1src, (HL16:i64 (imm:i64):$I2))
/*7809*/        /*Scope*/ 20, /*->7830*/
/*7810*/          OPC_CheckPredicate, 64, // Predicate_imm64hh16c
/*7812*/          OPC_MoveParent,
/*7813*/          OPC_CheckType, MVT::i64,
/*7815*/          OPC_EmitConvertToTarget, 1,
/*7817*/          OPC_EmitNodeXForm, 6, 2, // HH16
/*7820*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIHH), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64hh16c>><<X:HH16>>:$I2) - Complexity = 7
                  // Dst: (NIHH:i64:i32 GR64:i64:$R1src, (HH16:i64 (imm:i64):$I2))
/*7830*/        /*Scope*/ 20, /*->7851*/
/*7831*/          OPC_CheckPredicate, 65, // Predicate_imm64lf32c
/*7833*/          OPC_MoveParent,
/*7834*/          OPC_CheckType, MVT::i64,
/*7836*/          OPC_EmitConvertToTarget, 1,
/*7838*/          OPC_EmitNodeXForm, 7, 2, // LF32
/*7841*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NILF), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64lf32c>><<X:LF32>>:$I2) - Complexity = 7
                  // Dst: (NILF:i64:i32 GR64:i64:$R1src, (LF32:i64 (imm:i64):$I2))
/*7851*/        /*Scope*/ 20, /*->7872*/
/*7852*/          OPC_CheckPredicate, 66, // Predicate_imm64hf32c
/*7854*/          OPC_MoveParent,
/*7855*/          OPC_CheckType, MVT::i64,
/*7857*/          OPC_EmitConvertToTarget, 1,
/*7859*/          OPC_EmitNodeXForm, 8, 2, // HF32
/*7862*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIHF), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64hf32c>><<X:HF32>>:$I2) - Complexity = 7
                  // Dst: (NIHF:i64:i32 GR64:i64:$R1src, (HF32:i64 (imm:i64):$I2))
/*7872*/        /*Scope*/ 18, /*->7891*/
/*7873*/          OPC_MoveParent,
/*7874*/          OPC_CheckType, MVT::i32,
/*7876*/          OPC_EmitConvertToTarget, 1,
/*7878*/          OPC_EmitNodeXForm, 9, 2, // UIMM32
/*7881*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NILF32), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i32 GR32:i32:$R1src, (imm:i32)<<X:UIMM32>>:$I2) - Complexity = 6
                  // Dst: (NILF32:i32:i32 GR32:i32:$R1src, (UIMM32:i32 (imm:i32):$I2))
/*7891*/        0, /*End of Scope*/
/*7892*/      /*Scope*/ 12, /*->7905*/
/*7893*/        OPC_CheckType, MVT::i32,
/*7895*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::NR), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (NR:i32:i32 GR32:i32:$R1src, GR32:i32:$R2)
/*7905*/      /*Scope*/ 12, /*->7918*/
/*7906*/        OPC_CheckType, MVT::i64,
/*7908*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::NGR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (NGR:i64:i32 GR64:i64:$R1src, GR64:i64:$R2)
/*7918*/      0, /*End of Scope*/
/*7919*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 126|128,1/*254*/,  TARGET_VAL(ISD::XOR),// ->8178
/*7924*/    OPC_Scope, 75, /*->8001*/ // 3 children in Scope
/*7926*/      OPC_RecordChild0, // #0 = $R1src
/*7927*/      OPC_MoveChild, 1,
/*7929*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*7932*/      OPC_RecordMemRef,
/*7933*/      OPC_RecordNode, // #1 = 'ld' chained node
/*7934*/      OPC_CheckFoldableChainNode,
/*7935*/      OPC_RecordChild1, // #2 = $XBD2
/*7936*/      OPC_CheckChild1Type, MVT::i64,
/*7938*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*7940*/      OPC_CheckPredicate, 13, // Predicate_load
/*7942*/      OPC_MoveParent,
/*7943*/      OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->7982
/*7946*/        OPC_Scope, 16, /*->7964*/ // 2 children in Scope
/*7948*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*7951*/          OPC_EmitMergeInputChains1_1,
/*7952*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::X), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (xor:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (X:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*7964*/        /*Scope*/ 16, /*->7981*/
/*7965*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*7968*/          OPC_EmitMergeInputChains1_1,
/*7969*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::XY), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (xor:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (XY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*7981*/        0, /*End of Scope*/
              /*SwitchType*/ 16,  MVT::i64,// ->8000
/*7984*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*7987*/        OPC_EmitMergeInputChains1_1,
/*7988*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::XG), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (xor:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (XG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
              0, // EndSwitchType
/*8001*/    /*Scope*/ 75, /*->8077*/
/*8002*/      OPC_MoveChild, 0,
/*8004*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*8007*/      OPC_RecordMemRef,
/*8008*/      OPC_RecordNode, // #0 = 'ld' chained node
/*8009*/      OPC_CheckFoldableChainNode,
/*8010*/      OPC_RecordChild1, // #1 = $XBD2
/*8011*/      OPC_CheckChild1Type, MVT::i64,
/*8013*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8015*/      OPC_CheckPredicate, 13, // Predicate_load
/*8017*/      OPC_MoveParent,
/*8018*/      OPC_RecordChild1, // #2 = $R1src
/*8019*/      OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->8058
/*8022*/        OPC_Scope, 16, /*->8040*/ // 2 children in Scope
/*8024*/          OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*8027*/          OPC_EmitMergeInputChains1_0,
/*8028*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::X), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (xor:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (X:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*8040*/        /*Scope*/ 16, /*->8057*/
/*8041*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*8044*/          OPC_EmitMergeInputChains1_0,
/*8045*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::XY), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (xor:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (XY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*8057*/        0, /*End of Scope*/
              /*SwitchType*/ 16,  MVT::i64,// ->8076
/*8060*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*8063*/        OPC_EmitMergeInputChains1_0,
/*8064*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::XG), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (xor:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src) - Complexity = 19
                // Dst: (XG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
              0, // EndSwitchType
/*8077*/    /*Scope*/ 99, /*->8177*/
/*8078*/      OPC_RecordChild0, // #0 = $R1src
/*8079*/      OPC_RecordChild1, // #1 = $I2
/*8080*/      OPC_Scope, 68, /*->8150*/ // 3 children in Scope
/*8082*/        OPC_MoveChild, 1,
/*8084*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8087*/        OPC_Scope, 20, /*->8109*/ // 3 children in Scope
/*8089*/          OPC_CheckPredicate, 48, // Predicate_imm64lf32
/*8091*/          OPC_MoveParent,
/*8092*/          OPC_CheckType, MVT::i64,
/*8094*/          OPC_EmitConvertToTarget, 1,
/*8096*/          OPC_EmitNodeXForm, 7, 2, // LF32
/*8099*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::XILF), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (xor:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64lf32>><<X:LF32>>:$I2) - Complexity = 7
                  // Dst: (XILF:i64:i32 GR64:i64:$R1src, (LF32:i64 (imm:i64):$I2))
/*8109*/        /*Scope*/ 20, /*->8130*/
/*8110*/          OPC_CheckPredicate, 49, // Predicate_imm64hf32
/*8112*/          OPC_MoveParent,
/*8113*/          OPC_CheckType, MVT::i64,
/*8115*/          OPC_EmitConvertToTarget, 1,
/*8117*/          OPC_EmitNodeXForm, 8, 2, // HF32
/*8120*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::XIHF), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (xor:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$I2) - Complexity = 7
                  // Dst: (XIHF:i64:i32 GR64:i64:$R1src, (HF32:i64 (imm:i64):$I2))
/*8130*/        /*Scope*/ 18, /*->8149*/
/*8131*/          OPC_MoveParent,
/*8132*/          OPC_CheckType, MVT::i32,
/*8134*/          OPC_EmitConvertToTarget, 1,
/*8136*/          OPC_EmitNodeXForm, 9, 2, // UIMM32
/*8139*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::XILF32), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (xor:i32 GR32:i32:$R1src, (imm:i32)<<X:UIMM32>>:$I2) - Complexity = 6
                  // Dst: (XILF32:i32:i32 GR32:i32:$R1src, (UIMM32:i32 (imm:i32):$I2))
/*8149*/        0, /*End of Scope*/
/*8150*/      /*Scope*/ 12, /*->8163*/
/*8151*/        OPC_CheckType, MVT::i32,
/*8153*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::XR), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (XR:i32:i32 GR32:i32:$R1src, GR32:i32:$R2)
/*8163*/      /*Scope*/ 12, /*->8176*/
/*8164*/        OPC_CheckType, MVT::i64,
/*8166*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::XGR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (XGR:i64:i32 GR64:i64:$R1src, GR64:i64:$R2)
/*8176*/      0, /*End of Scope*/
/*8177*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 10|128,4/*522*/,  TARGET_VAL(ISD::MUL),// ->8704
/*8182*/    OPC_Scope, 14|128,1/*142*/, /*->8327*/ // 7 children in Scope
/*8185*/      OPC_RecordChild0, // #0 = $R1src
/*8186*/      OPC_MoveChild, 1,
/*8188*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*8191*/      OPC_RecordMemRef,
/*8192*/      OPC_RecordNode, // #1 = 'ld' chained node
/*8193*/      OPC_CheckFoldableChainNode,
/*8194*/      OPC_RecordChild1, // #2 = $XBD2
/*8195*/      OPC_CheckChild1Type, MVT::i64,
/*8197*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8199*/      OPC_Scope, 41, /*->8242*/ // 4 children in Scope
/*8201*/        OPC_CheckPredicate, 52, // Predicate_sextload
/*8203*/        OPC_CheckPredicate, 53, // Predicate_sextloadi16
/*8205*/        OPC_MoveParent,
/*8206*/        OPC_CheckType, MVT::i32,
/*8208*/        OPC_Scope, 15, /*->8225*/ // 2 children in Scope
/*8210*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*8213*/          OPC_EmitMergeInputChains1_1,
/*8214*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (mul:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                  // Dst: (MH:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*8225*/        /*Scope*/ 15, /*->8241*/
/*8226*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*8229*/          OPC_EmitMergeInputChains1_1,
/*8230*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MHY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (mul:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                  // Dst: (MHY:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*8241*/        0, /*End of Scope*/
/*8242*/      /*Scope*/ 39, /*->8282*/
/*8243*/        OPC_CheckPredicate, 13, // Predicate_load
/*8245*/        OPC_MoveParent,
/*8246*/        OPC_CheckType, MVT::i32,
/*8248*/        OPC_Scope, 15, /*->8265*/ // 2 children in Scope
/*8250*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*8253*/          OPC_EmitMergeInputChains1_1,
/*8254*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MS), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (mul:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (MS:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*8265*/        /*Scope*/ 15, /*->8281*/
/*8266*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*8269*/          OPC_EmitMergeInputChains1_1,
/*8270*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (mul:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (MSY:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*8281*/        0, /*End of Scope*/
/*8282*/      /*Scope*/ 22, /*->8305*/
/*8283*/        OPC_CheckPredicate, 52, // Predicate_sextload
/*8285*/        OPC_CheckPredicate, 54, // Predicate_sextloadi32
/*8287*/        OPC_MoveParent,
/*8288*/        OPC_CheckType, MVT::i64,
/*8290*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*8293*/        OPC_EmitMergeInputChains1_1,
/*8294*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (mul:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>) - Complexity = 19
                // Dst: (MSGF:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*8305*/      /*Scope*/ 20, /*->8326*/
/*8306*/        OPC_CheckPredicate, 13, // Predicate_load
/*8308*/        OPC_MoveParent,
/*8309*/        OPC_CheckType, MVT::i64,
/*8311*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*8314*/        OPC_EmitMergeInputChains1_1,
/*8315*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSG), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (mul:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (MSG:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*8326*/      0, /*End of Scope*/
/*8327*/    /*Scope*/ 17|128,1/*145*/, /*->8474*/
/*8329*/      OPC_MoveChild, 0,
/*8331*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*8334*/      OPC_RecordMemRef,
/*8335*/      OPC_RecordNode, // #0 = 'ld' chained node
/*8336*/      OPC_CheckFoldableChainNode,
/*8337*/      OPC_RecordChild1, // #1 = $XBD2
/*8338*/      OPC_CheckChild1Type, MVT::i64,
/*8340*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8342*/      OPC_Scope, 42, /*->8386*/ // 4 children in Scope
/*8344*/        OPC_CheckPredicate, 52, // Predicate_sextload
/*8346*/        OPC_CheckPredicate, 53, // Predicate_sextloadi16
/*8348*/        OPC_MoveParent,
/*8349*/        OPC_RecordChild1, // #2 = $R1src
/*8350*/        OPC_CheckType, MVT::i32,
/*8352*/        OPC_Scope, 15, /*->8369*/ // 2 children in Scope
/*8354*/          OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*8357*/          OPC_EmitMergeInputChains1_0,
/*8358*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (mul:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (MH:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*8369*/        /*Scope*/ 15, /*->8385*/
/*8370*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*8373*/          OPC_EmitMergeInputChains1_0,
/*8374*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MHY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (mul:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (MHY:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*8385*/        0, /*End of Scope*/
/*8386*/      /*Scope*/ 40, /*->8427*/
/*8387*/        OPC_CheckPredicate, 13, // Predicate_load
/*8389*/        OPC_MoveParent,
/*8390*/        OPC_RecordChild1, // #2 = $R1src
/*8391*/        OPC_CheckType, MVT::i32,
/*8393*/        OPC_Scope, 15, /*->8410*/ // 2 children in Scope
/*8395*/          OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*8398*/          OPC_EmitMergeInputChains1_0,
/*8399*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MS), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (mul:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (MS:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*8410*/        /*Scope*/ 15, /*->8426*/
/*8411*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*8414*/          OPC_EmitMergeInputChains1_0,
/*8415*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (mul:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (MSY:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*8426*/        0, /*End of Scope*/
/*8427*/      /*Scope*/ 23, /*->8451*/
/*8428*/        OPC_CheckPredicate, 52, // Predicate_sextload
/*8430*/        OPC_CheckPredicate, 54, // Predicate_sextloadi32
/*8432*/        OPC_MoveParent,
/*8433*/        OPC_RecordChild1, // #2 = $R1src
/*8434*/        OPC_CheckType, MVT::i64,
/*8436*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*8439*/        OPC_EmitMergeInputChains1_0,
/*8440*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (mul:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>, GR64:i64:$R1src) - Complexity = 19
                // Dst: (MSGF:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*8451*/      /*Scope*/ 21, /*->8473*/
/*8452*/        OPC_CheckPredicate, 13, // Predicate_load
/*8454*/        OPC_MoveParent,
/*8455*/        OPC_RecordChild1, // #2 = $R1src
/*8456*/        OPC_CheckType, MVT::i64,
/*8458*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*8461*/        OPC_EmitMergeInputChains1_0,
/*8462*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSG), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (mul:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src) - Complexity = 19
                // Dst: (MSG:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*8473*/      0, /*End of Scope*/
/*8474*/    /*Scope*/ 113, /*->8588*/
/*8475*/      OPC_RecordChild0, // #0 = $R1src
/*8476*/      OPC_Scope, 68, /*->8546*/ // 3 children in Scope
/*8478*/        OPC_RecordChild1, // #1 = $I2
/*8479*/        OPC_MoveChild, 1,
/*8481*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8484*/        OPC_Scope, 19, /*->8505*/ // 3 children in Scope
/*8486*/          OPC_CheckPredicate, 34, // Predicate_imm32sx16
/*8488*/          OPC_MoveParent,
/*8489*/          OPC_CheckType, MVT::i32,
/*8491*/          OPC_EmitConvertToTarget, 1,
/*8493*/          OPC_EmitNodeXForm, 2, 2, // SIMM16
/*8496*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MHI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (mul:i32 GR32:i32:$R1src, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2) - Complexity = 7
                  // Dst: (MHI:i32 GR32:i32:$R1src, (SIMM16:i32 (imm:i32):$I2))
/*8505*/        /*Scope*/ 19, /*->8525*/
/*8506*/          OPC_CheckPredicate, 35, // Predicate_imm64sx16
/*8508*/          OPC_MoveParent,
/*8509*/          OPC_CheckType, MVT::i64,
/*8511*/          OPC_EmitConvertToTarget, 1,
/*8513*/          OPC_EmitNodeXForm, 2, 2, // SIMM16
/*8516*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MGHI), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (mul:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$I2) - Complexity = 7
                  // Dst: (MGHI:i64 GR64:i64:$R1src, (SIMM16:i64 (imm:i64):$I2))
/*8525*/        /*Scope*/ 19, /*->8545*/
/*8526*/          OPC_CheckPredicate, 56, // Predicate_imm64sx32
/*8528*/          OPC_MoveParent,
/*8529*/          OPC_CheckType, MVT::i64,
/*8531*/          OPC_EmitConvertToTarget, 1,
/*8533*/          OPC_EmitNodeXForm, 10, 2, // SIMM32
/*8536*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGFI), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (mul:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64sx32>><<X:SIMM32>>:$I2) - Complexity = 7
                  // Dst: (MSGFI:i64 GR64:i64:$R1src, (SIMM32:i64 (imm:i64):$I2))
/*8545*/        0, /*End of Scope*/
/*8546*/      /*Scope*/ 16, /*->8563*/
/*8547*/        OPC_MoveChild, 1,
/*8549*/        OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*8552*/        OPC_RecordChild0, // #1 = $src2
/*8553*/        OPC_MoveParent,
/*8554*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGFR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i64 GR64:i64:$src1, (sext:i64 GR32:i32:$src2)) - Complexity = 6
                // Dst: (MSGFR:i64 GR64:i64:$src1, GR32:i32:$src2)
/*8563*/      /*Scope*/ 23, /*->8587*/
/*8564*/        OPC_RecordChild1, // #1 = $I2
/*8565*/        OPC_MoveChild, 1,
/*8567*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8570*/        OPC_MoveParent,
/*8571*/        OPC_CheckType, MVT::i32,
/*8573*/        OPC_EmitConvertToTarget, 1,
/*8575*/        OPC_EmitNodeXForm, 10, 2, // SIMM32
/*8578*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSFI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (mul:i32 GR32:i32:$R1src, (imm:i32)<<X:SIMM32>>:$I2) - Complexity = 6
                // Dst: (MSFI:i32 GR32:i32:$R1src, (SIMM32:i32 (imm:i32):$I2))
/*8587*/      0, /*End of Scope*/
/*8588*/    /*Scope*/ 17, /*->8606*/
/*8589*/      OPC_MoveChild, 0,
/*8591*/      OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*8594*/      OPC_RecordChild0, // #0 = $src2
/*8595*/      OPC_MoveParent,
/*8596*/      OPC_RecordChild1, // #1 = $src1
/*8597*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGFR), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
              // Src: (mul:i64 (sext:i64 GR32:i32:$src2), GR64:i64:$src1) - Complexity = 6
              // Dst: (MSGFR:i64 GR64:i64:$src1, GR32:i32:$src2)
/*8606*/    /*Scope*/ 34, /*->8641*/
/*8607*/      OPC_RecordChild0, // #0 = $src1
/*8608*/      OPC_MoveChild, 1,
/*8610*/      OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*8613*/      OPC_RecordChild0, // #1 = $src2
/*8614*/      OPC_MoveChild, 1,
/*8616*/      OPC_CheckValueType, MVT::i32,
/*8618*/      OPC_MoveParent,
/*8619*/      OPC_MoveParent,
/*8620*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*8623*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*8632*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGFR), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
              // Src: (mul:i64 GR64:i64:$src1, (sext_inreg:i64 GR64:i64:$src2, i32:Other)) - Complexity = 6
              // Dst: (MSGFR:i64 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*8641*/    /*Scope*/ 34, /*->8676*/
/*8642*/      OPC_MoveChild, 0,
/*8644*/      OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*8647*/      OPC_RecordChild0, // #0 = $src2
/*8648*/      OPC_MoveChild, 1,
/*8650*/      OPC_CheckValueType, MVT::i32,
/*8652*/      OPC_MoveParent,
/*8653*/      OPC_MoveParent,
/*8654*/      OPC_RecordChild1, // #1 = $src1
/*8655*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*8658*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*8667*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGFR), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 3, 
              // Src: (mul:i64 (sext_inreg:i64 GR64:i64:$src2, i32:Other), GR64:i64:$src1) - Complexity = 6
              // Dst: (MSGFR:i64 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*8676*/    /*Scope*/ 26, /*->8703*/
/*8677*/      OPC_RecordChild0, // #0 = $R1src
/*8678*/      OPC_RecordChild1, // #1 = $R2
/*8679*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->8691
/*8682*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (MSR:i32 GR32:i32:$R1src, GR32:i32:$R2)
              /*SwitchType*/ 9,  MVT::i64,// ->8702
/*8693*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (MSGR:i64 GR64:i64:$R1src, GR64:i64:$R2)
              0, // EndSwitchType
/*8703*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 46,  TARGET_VAL(SystemZISD::UMUL_LOHI64),// ->8753
/*8707*/    OPC_RecordChild0, // #0 = $R1src
/*8708*/    OPC_Scope, 31, /*->8741*/ // 2 children in Scope
/*8710*/      OPC_MoveChild, 1,
/*8712*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*8715*/      OPC_RecordMemRef,
/*8716*/      OPC_RecordNode, // #1 = 'ld' chained node
/*8717*/      OPC_CheckFoldableChainNode,
/*8718*/      OPC_RecordChild1, // #2 = $XBD2
/*8719*/      OPC_CheckChild1Type, MVT::i64,
/*8721*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8723*/      OPC_CheckPredicate, 13, // Predicate_load
/*8725*/      OPC_MoveParent,
/*8726*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*8729*/      OPC_EmitMergeInputChains1_1,
/*8730*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MLG), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::Untyped, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (z_umul_lohi64:Untyped GR128:Untyped:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
              // Dst: (MLG:Untyped GR128:Untyped:$R1src, bdxaddr20only:i64:$XBD2)
/*8741*/    /*Scope*/ 10, /*->8752*/
/*8742*/      OPC_RecordChild1, // #1 = $R2
/*8743*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MLGR), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (z_umul_lohi64:Untyped GR128:Untyped:$R1src, GR64:i64:$R2) - Complexity = 3
              // Dst: (MLGR:Untyped GR128:Untyped:$R1src, GR64:i64:$R2)
/*8752*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 46,  TARGET_VAL(SystemZISD::SDIVREM32),// ->8802
/*8756*/    OPC_RecordChild0, // #0 = $R1src
/*8757*/    OPC_Scope, 31, /*->8790*/ // 2 children in Scope
/*8759*/      OPC_MoveChild, 1,
/*8761*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*8764*/      OPC_RecordMemRef,
/*8765*/      OPC_RecordNode, // #1 = 'ld' chained node
/*8766*/      OPC_CheckFoldableChainNode,
/*8767*/      OPC_RecordChild1, // #2 = $XBD2
/*8768*/      OPC_CheckChild1Type, MVT::i64,
/*8770*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8772*/      OPC_CheckPredicate, 13, // Predicate_load
/*8774*/      OPC_MoveParent,
/*8775*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*8778*/      OPC_EmitMergeInputChains1_1,
/*8779*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::DSGF), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::Untyped, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (z_sdivrem32:Untyped GR128:Untyped:$R1src, (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
              // Dst: (DSGF:Untyped GR128:Untyped:$R1src, bdxaddr20only:i64:$XBD2)
/*8790*/    /*Scope*/ 10, /*->8801*/
/*8791*/      OPC_RecordChild1, // #1 = $R2
/*8792*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::DSGFR), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (z_sdivrem32:Untyped GR128:Untyped:$R1src, GR32:i32:$R2) - Complexity = 3
              // Dst: (DSGFR:Untyped GR128:Untyped:$R1src, GR32:i32:$R2)
/*8801*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 46,  TARGET_VAL(SystemZISD::SDIVREM64),// ->8851
/*8805*/    OPC_RecordChild0, // #0 = $R1src
/*8806*/    OPC_Scope, 31, /*->8839*/ // 2 children in Scope
/*8808*/      OPC_MoveChild, 1,
/*8810*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*8813*/      OPC_RecordMemRef,
/*8814*/      OPC_RecordNode, // #1 = 'ld' chained node
/*8815*/      OPC_CheckFoldableChainNode,
/*8816*/      OPC_RecordChild1, // #2 = $XBD2
/*8817*/      OPC_CheckChild1Type, MVT::i64,
/*8819*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8821*/      OPC_CheckPredicate, 13, // Predicate_load
/*8823*/      OPC_MoveParent,
/*8824*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*8827*/      OPC_EmitMergeInputChains1_1,
/*8828*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::DSG), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::Untyped, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (z_sdivrem64:Untyped GR128:Untyped:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
              // Dst: (DSG:Untyped GR128:Untyped:$R1src, bdxaddr20only:i64:$XBD2)
/*8839*/    /*Scope*/ 10, /*->8850*/
/*8840*/      OPC_RecordChild1, // #1 = $R2
/*8841*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::DSGR), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (z_sdivrem64:Untyped GR128:Untyped:$R1src, GR64:i64:$R2) - Complexity = 3
              // Dst: (DSGR:Untyped GR128:Untyped:$R1src, GR64:i64:$R2)
/*8850*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 46,  TARGET_VAL(SystemZISD::UDIVREM32),// ->8900
/*8854*/    OPC_RecordChild0, // #0 = $R1src
/*8855*/    OPC_Scope, 31, /*->8888*/ // 2 children in Scope
/*8857*/      OPC_MoveChild, 1,
/*8859*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*8862*/      OPC_RecordMemRef,
/*8863*/      OPC_RecordNode, // #1 = 'ld' chained node
/*8864*/      OPC_CheckFoldableChainNode,
/*8865*/      OPC_RecordChild1, // #2 = $XBD2
/*8866*/      OPC_CheckChild1Type, MVT::i64,
/*8868*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8870*/      OPC_CheckPredicate, 13, // Predicate_load
/*8872*/      OPC_MoveParent,
/*8873*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*8876*/      OPC_EmitMergeInputChains1_1,
/*8877*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::DL), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::Untyped, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (z_udivrem32:Untyped GR128:Untyped:$R1src, (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
              // Dst: (DL:Untyped GR128:Untyped:$R1src, bdxaddr20only:i64:$XBD2)
/*8888*/    /*Scope*/ 10, /*->8899*/
/*8889*/      OPC_RecordChild1, // #1 = $R2
/*8890*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::DLR), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (z_udivrem32:Untyped GR128:Untyped:$R1src, GR32:i32:$R2) - Complexity = 3
              // Dst: (DLR:Untyped GR128:Untyped:$R1src, GR32:i32:$R2)
/*8899*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 46,  TARGET_VAL(SystemZISD::UDIVREM64),// ->8949
/*8903*/    OPC_RecordChild0, // #0 = $R1src
/*8904*/    OPC_Scope, 31, /*->8937*/ // 2 children in Scope
/*8906*/      OPC_MoveChild, 1,
/*8908*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*8911*/      OPC_RecordMemRef,
/*8912*/      OPC_RecordNode, // #1 = 'ld' chained node
/*8913*/      OPC_CheckFoldableChainNode,
/*8914*/      OPC_RecordChild1, // #2 = $XBD2
/*8915*/      OPC_CheckChild1Type, MVT::i64,
/*8917*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8919*/      OPC_CheckPredicate, 13, // Predicate_load
/*8921*/      OPC_MoveParent,
/*8922*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*8925*/      OPC_EmitMergeInputChains1_1,
/*8926*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::DLG), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::Untyped, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (z_udivrem64:Untyped GR128:Untyped:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
              // Dst: (DLG:Untyped GR128:Untyped:$R1src, bdxaddr20only:i64:$XBD2)
/*8937*/    /*Scope*/ 10, /*->8948*/
/*8938*/      OPC_RecordChild1, // #1 = $R2
/*8939*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::DLGR), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (z_udivrem64:Untyped GR128:Untyped:$R1src, GR64:i64:$R2) - Complexity = 3
              // Dst: (DLGR:Untyped GR128:Untyped:$R1src, GR64:i64:$R2)
/*8948*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 87,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_AND),// ->9039
/*8952*/    OPC_RecordMemRef,
/*8953*/    OPC_RecordNode,   // #0 = 'z_atomic_loadw_and' chained node
/*8954*/    OPC_RecordChild1, // #1 = $ptr
/*8955*/    OPC_CheckChild1Type, MVT::i64,
/*8957*/    OPC_RecordChild2, // #2 = $src2
/*8958*/    OPC_Scope, 45, /*->9005*/ // 2 children in Scope
/*8960*/      OPC_MoveChild, 2,
/*8962*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8965*/      OPC_CheckPredicate, 60, // Predicate_imm32lh16c
/*8967*/      OPC_MoveParent,
/*8968*/      OPC_RecordChild3, // #3 = $bitshift
/*8969*/      OPC_RecordChild4, // #4 = $negbitshift
/*8970*/      OPC_RecordChild5, // #5 = $bitsize
/*8971*/      OPC_MoveChild, 5,
/*8973*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8976*/      OPC_MoveParent,
/*8977*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*8980*/      OPC_EmitMergeInputChains1_0,
/*8981*/      OPC_EmitConvertToTarget, 2,
/*8983*/      OPC_EmitNodeXForm, 4, 8, // LH16
/*8986*/      OPC_EmitConvertToTarget, 5,
/*8988*/      OPC_EmitNodeXForm, 9, 10, // UIMM32
/*8991*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_NILH), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 9, 3, 4, 11, 
              // Src: (z_atomic_loadw_and:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32lh16c>><<X:LH16>>:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 19
              // Dst: (ATOMIC_LOADW_NILH:i32:i32 bdaddr20only:i64:$ptr, (LH16:i32 (imm:i32):$src2), ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*9005*/    /*Scope*/ 32, /*->9038*/
/*9006*/      OPC_RecordChild3, // #3 = $bitshift
/*9007*/      OPC_RecordChild4, // #4 = $negbitshift
/*9008*/      OPC_RecordChild5, // #5 = $bitsize
/*9009*/      OPC_MoveChild, 5,
/*9011*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9014*/      OPC_MoveParent,
/*9015*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*9018*/      OPC_EmitMergeInputChains1_0,
/*9019*/      OPC_EmitConvertToTarget, 5,
/*9021*/      OPC_EmitNodeXForm, 9, 8, // UIMM32
/*9024*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_NR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
              // Src: (z_atomic_loadw_and:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
              // Dst: (ATOMIC_LOADW_NR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*9038*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 87,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_OR),// ->9129
/*9042*/    OPC_RecordMemRef,
/*9043*/    OPC_RecordNode,   // #0 = 'z_atomic_loadw_or' chained node
/*9044*/    OPC_RecordChild1, // #1 = $ptr
/*9045*/    OPC_CheckChild1Type, MVT::i64,
/*9047*/    OPC_RecordChild2, // #2 = $src2
/*9048*/    OPC_Scope, 45, /*->9095*/ // 2 children in Scope
/*9050*/      OPC_MoveChild, 2,
/*9052*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9055*/      OPC_CheckPredicate, 43, // Predicate_imm32lh16
/*9057*/      OPC_MoveParent,
/*9058*/      OPC_RecordChild3, // #3 = $bitshift
/*9059*/      OPC_RecordChild4, // #4 = $negbitshift
/*9060*/      OPC_RecordChild5, // #5 = $bitsize
/*9061*/      OPC_MoveChild, 5,
/*9063*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9066*/      OPC_MoveParent,
/*9067*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*9070*/      OPC_EmitMergeInputChains1_0,
/*9071*/      OPC_EmitConvertToTarget, 2,
/*9073*/      OPC_EmitNodeXForm, 4, 8, // LH16
/*9076*/      OPC_EmitConvertToTarget, 5,
/*9078*/      OPC_EmitNodeXForm, 9, 10, // UIMM32
/*9081*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_OILH), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 9, 3, 4, 11, 
              // Src: (z_atomic_loadw_or:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32lh16>><<X:LH16>>:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 19
              // Dst: (ATOMIC_LOADW_OILH:i32:i32 bdaddr20only:i64:$ptr, (LH16:i32 (imm:i32):$src2), ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*9095*/    /*Scope*/ 32, /*->9128*/
/*9096*/      OPC_RecordChild3, // #3 = $bitshift
/*9097*/      OPC_RecordChild4, // #4 = $negbitshift
/*9098*/      OPC_RecordChild5, // #5 = $bitsize
/*9099*/      OPC_MoveChild, 5,
/*9101*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9104*/      OPC_MoveParent,
/*9105*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*9108*/      OPC_EmitMergeInputChains1_0,
/*9109*/      OPC_EmitConvertToTarget, 5,
/*9111*/      OPC_EmitNodeXForm, 9, 8, // UIMM32
/*9114*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_OR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
              // Src: (z_atomic_loadw_or:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
              // Dst: (ATOMIC_LOADW_OR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*9128*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 87,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_NAND),// ->9219
/*9132*/    OPC_RecordMemRef,
/*9133*/    OPC_RecordNode,   // #0 = 'z_atomic_loadw_nand' chained node
/*9134*/    OPC_RecordChild1, // #1 = $ptr
/*9135*/    OPC_CheckChild1Type, MVT::i64,
/*9137*/    OPC_RecordChild2, // #2 = $src2
/*9138*/    OPC_Scope, 45, /*->9185*/ // 2 children in Scope
/*9140*/      OPC_MoveChild, 2,
/*9142*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9145*/      OPC_CheckPredicate, 60, // Predicate_imm32lh16c
/*9147*/      OPC_MoveParent,
/*9148*/      OPC_RecordChild3, // #3 = $bitshift
/*9149*/      OPC_RecordChild4, // #4 = $negbitshift
/*9150*/      OPC_RecordChild5, // #5 = $bitsize
/*9151*/      OPC_MoveChild, 5,
/*9153*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9156*/      OPC_MoveParent,
/*9157*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*9160*/      OPC_EmitMergeInputChains1_0,
/*9161*/      OPC_EmitConvertToTarget, 2,
/*9163*/      OPC_EmitNodeXForm, 4, 8, // LH16
/*9166*/      OPC_EmitConvertToTarget, 5,
/*9168*/      OPC_EmitNodeXForm, 9, 10, // UIMM32
/*9171*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_NILHi), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 9, 3, 4, 11, 
              // Src: (z_atomic_loadw_nand:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32lh16c>><<X:LH16>>:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 19
              // Dst: (ATOMIC_LOADW_NILHi:i32:i32 bdaddr20only:i64:$ptr, (LH16:i32 (imm:i32):$src2), ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*9185*/    /*Scope*/ 32, /*->9218*/
/*9186*/      OPC_RecordChild3, // #3 = $bitshift
/*9187*/      OPC_RecordChild4, // #4 = $negbitshift
/*9188*/      OPC_RecordChild5, // #5 = $bitsize
/*9189*/      OPC_MoveChild, 5,
/*9191*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9194*/      OPC_MoveParent,
/*9195*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*9198*/      OPC_EmitMergeInputChains1_0,
/*9199*/      OPC_EmitConvertToTarget, 5,
/*9201*/      OPC_EmitNodeXForm, 9, 8, // UIMM32
/*9204*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_NRi), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
              // Src: (z_atomic_loadw_nand:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
              // Dst: (ATOMIC_LOADW_NRi:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*9218*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 85,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_ADD),// ->9307
/*9222*/    OPC_RecordMemRef,
/*9223*/    OPC_RecordNode,   // #0 = 'z_atomic_loadw_add' chained node
/*9224*/    OPC_RecordChild1, // #1 = $ptr
/*9225*/    OPC_CheckChild1Type, MVT::i64,
/*9227*/    OPC_RecordChild2, // #2 = $src2
/*9228*/    OPC_Scope, 43, /*->9273*/ // 2 children in Scope
/*9230*/      OPC_MoveChild, 2,
/*9232*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9235*/      OPC_MoveParent,
/*9236*/      OPC_RecordChild3, // #3 = $bitshift
/*9237*/      OPC_RecordChild4, // #4 = $negbitshift
/*9238*/      OPC_RecordChild5, // #5 = $bitsize
/*9239*/      OPC_MoveChild, 5,
/*9241*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9244*/      OPC_MoveParent,
/*9245*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*9248*/      OPC_EmitMergeInputChains1_0,
/*9249*/      OPC_EmitConvertToTarget, 2,
/*9251*/      OPC_EmitNodeXForm, 10, 8, // SIMM32
/*9254*/      OPC_EmitConvertToTarget, 5,
/*9256*/      OPC_EmitNodeXForm, 9, 10, // UIMM32
/*9259*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_AFI), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 9, 3, 4, 11, 
              // Src: (z_atomic_loadw_add:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:SIMM32>>:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 18
              // Dst: (ATOMIC_LOADW_AFI:i32:i32 bdaddr20only:i64:$ptr, (SIMM32:i32 (imm:i32):$src2), ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*9273*/    /*Scope*/ 32, /*->9306*/
/*9274*/      OPC_RecordChild3, // #3 = $bitshift
/*9275*/      OPC_RecordChild4, // #4 = $negbitshift
/*9276*/      OPC_RecordChild5, // #5 = $bitsize
/*9277*/      OPC_MoveChild, 5,
/*9279*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9282*/      OPC_MoveParent,
/*9283*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*9286*/      OPC_EmitMergeInputChains1_0,
/*9287*/      OPC_EmitConvertToTarget, 5,
/*9289*/      OPC_EmitNodeXForm, 9, 8, // UIMM32
/*9292*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_AR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
              // Src: (z_atomic_loadw_add:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
              // Dst: (ATOMIC_LOADW_AR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*9306*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 85,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_XOR),// ->9395
/*9310*/    OPC_RecordMemRef,
/*9311*/    OPC_RecordNode,   // #0 = 'z_atomic_loadw_xor' chained node
/*9312*/    OPC_RecordChild1, // #1 = $ptr
/*9313*/    OPC_CheckChild1Type, MVT::i64,
/*9315*/    OPC_RecordChild2, // #2 = $src2
/*9316*/    OPC_Scope, 43, /*->9361*/ // 2 children in Scope
/*9318*/      OPC_MoveChild, 2,
/*9320*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9323*/      OPC_MoveParent,
/*9324*/      OPC_RecordChild3, // #3 = $bitshift
/*9325*/      OPC_RecordChild4, // #4 = $negbitshift
/*9326*/      OPC_RecordChild5, // #5 = $bitsize
/*9327*/      OPC_MoveChild, 5,
/*9329*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9332*/      OPC_MoveParent,
/*9333*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*9336*/      OPC_EmitMergeInputChains1_0,
/*9337*/      OPC_EmitConvertToTarget, 2,
/*9339*/      OPC_EmitNodeXForm, 9, 8, // UIMM32
/*9342*/      OPC_EmitConvertToTarget, 5,
/*9344*/      OPC_EmitNodeXForm, 9, 10, // UIMM32
/*9347*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_XILF), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 9, 3, 4, 11, 
              // Src: (z_atomic_loadw_xor:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:UIMM32>>:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 18
              // Dst: (ATOMIC_LOADW_XILF:i32:i32 bdaddr20only:i64:$ptr, (UIMM32:i32 (imm:i32):$src2), ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*9361*/    /*Scope*/ 32, /*->9394*/
/*9362*/      OPC_RecordChild3, // #3 = $bitshift
/*9363*/      OPC_RecordChild4, // #4 = $negbitshift
/*9364*/      OPC_RecordChild5, // #5 = $bitsize
/*9365*/      OPC_MoveChild, 5,
/*9367*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9370*/      OPC_MoveParent,
/*9371*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*9374*/      OPC_EmitMergeInputChains1_0,
/*9375*/      OPC_EmitConvertToTarget, 5,
/*9377*/      OPC_EmitNodeXForm, 9, 8, // UIMM32
/*9380*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_XR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
              // Src: (z_atomic_loadw_xor:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
              // Dst: (ATOMIC_LOADW_XR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*9394*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 27|128,6/*795*/,  TARGET_VAL(ISD::LOAD),// ->10194
/*9399*/    OPC_RecordMemRef,
/*9400*/    OPC_RecordNode,   // #0 = 'ld' chained node
/*9401*/    OPC_RecordChild1, // #1 = $I2
/*9402*/    OPC_CheckChild1Type, MVT::i64,
/*9404*/    OPC_CheckPredicate, 0, // Predicate_unindexedload
/*9406*/    OPC_Scope, 34, /*->9442*/ // 10 children in Scope
/*9408*/      OPC_CheckPredicate, 13, // Predicate_load
/*9410*/      OPC_CheckPredicate, 67, // Predicate_aligned_load
/*9412*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->9427
/*9415*/        OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$I2 #2
/*9418*/        OPC_EmitMergeInputChains1_0,
/*9419*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LRL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (ld:i32 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned_load>> - Complexity = 17
                // Dst: (LRL:i32 pcrel32:i64:$I2)
              /*SwitchType*/ 12,  MVT::i64,// ->9441
/*9429*/        OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$I2 #2
/*9432*/        OPC_EmitMergeInputChains1_0,
/*9433*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGRL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned_load>> - Complexity = 17
                // Dst: (LGRL:i64 pcrel32:i64:$I2)
              0, // EndSwitchType
/*9442*/    /*Scope*/ 58, /*->9501*/
/*9443*/      OPC_CheckPredicate, 52, // Predicate_sextload
/*9445*/      OPC_Scope, 34, /*->9481*/ // 2 children in Scope
/*9447*/        OPC_CheckPredicate, 53, // Predicate_sextloadi16
/*9449*/        OPC_CheckPredicate, 68, // Predicate_aligned_sextloadi16
/*9451*/        OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->9466
/*9454*/          OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$I2 #2
/*9457*/          OPC_EmitMergeInputChains1_0,
/*9458*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LHRL), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                  // Src: (ld:i32 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_aligned_sextloadi16>> - Complexity = 17
                  // Dst: (LHRL:i32 pcrel32:i64:$I2)
                /*SwitchType*/ 12,  MVT::i64,// ->9480
/*9468*/          OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$I2 #2
/*9471*/          OPC_EmitMergeInputChains1_0,
/*9472*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGHRL), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                  // Src: (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_aligned_sextloadi16>> - Complexity = 17
                  // Dst: (LGHRL:i64 pcrel32:i64:$I2)
                0, // EndSwitchType
/*9481*/      /*Scope*/ 18, /*->9500*/
/*9482*/        OPC_CheckPredicate, 54, // Predicate_sextloadi32
/*9484*/        OPC_CheckPredicate, 69, // Predicate_aligned_sextloadi32
/*9486*/        OPC_CheckType, MVT::i64,
/*9488*/        OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$I2 #2
/*9491*/        OPC_EmitMergeInputChains1_0,
/*9492*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGFRL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>><<P:Predicate_aligned_sextloadi32>> - Complexity = 17
                // Dst: (LGFRL:i64 pcrel32:i64:$I2)
/*9500*/      0, /*End of Scope*/
/*9501*/    /*Scope*/ 34, /*->9536*/
/*9502*/      OPC_CheckPredicate, 70, // Predicate_extload
/*9504*/      OPC_CheckPredicate, 71, // Predicate_extloadi16
/*9506*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->9521
/*9509*/        OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$src #2
/*9512*/        OPC_EmitMergeInputChains1_0,
/*9513*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LHRL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (ld:i32 pcrel32:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 17
                // Dst: (LHRL:i32 pcrel32:i64:$src)
              /*SwitchType*/ 12,  MVT::i64,// ->9535
/*9523*/        OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$src #2
/*9526*/        OPC_EmitMergeInputChains1_0,
/*9527*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGHRL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (ld:i64 pcrel32:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 17
                // Dst: (LGHRL:i64 pcrel32:i64:$src)
              0, // EndSwitchType
/*9536*/    /*Scope*/ 58, /*->9595*/
/*9537*/      OPC_CheckPredicate, 38, // Predicate_zextload
/*9539*/      OPC_Scope, 34, /*->9575*/ // 2 children in Scope
/*9541*/        OPC_CheckPredicate, 72, // Predicate_zextloadi16
/*9543*/        OPC_CheckPredicate, 73, // Predicate_aligned_zextloadi16
/*9545*/        OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->9560
/*9548*/          OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$I2 #2
/*9551*/          OPC_EmitMergeInputChains1_0,
/*9552*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLHRL), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                  // Src: (ld:i32 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>><<P:Predicate_aligned_zextloadi16>> - Complexity = 17
                  // Dst: (LLHRL:i32 pcrel32:i64:$I2)
                /*SwitchType*/ 12,  MVT::i64,// ->9574
/*9562*/          OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$I2 #2
/*9565*/          OPC_EmitMergeInputChains1_0,
/*9566*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGHRL), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                  // Src: (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>><<P:Predicate_aligned_zextloadi16>> - Complexity = 17
                  // Dst: (LLGHRL:i64 pcrel32:i64:$I2)
                0, // EndSwitchType
/*9575*/      /*Scope*/ 18, /*->9594*/
/*9576*/        OPC_CheckPredicate, 55, // Predicate_zextloadi32
/*9578*/        OPC_CheckPredicate, 74, // Predicate_aligned_zextloadi32
/*9580*/        OPC_CheckType, MVT::i64,
/*9582*/        OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$I2 #2
/*9585*/        OPC_EmitMergeInputChains1_0,
/*9586*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGFRL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>><<P:Predicate_aligned_zextloadi32>> - Complexity = 17
                // Dst: (LLGFRL:i64 pcrel32:i64:$I2)
/*9594*/      0, /*End of Scope*/
/*9595*/    /*Scope*/ 101, /*->9697*/
/*9596*/      OPC_CheckPredicate, 13, // Predicate_load
/*9598*/      OPC_SwitchType /*3 cases */, 48,  MVT::i32,// ->9649
/*9601*/        OPC_Scope, 14, /*->9617*/ // 3 children in Scope
/*9603*/          OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #2 #3 #4
/*9606*/          OPC_EmitMergeInputChains1_0,
/*9607*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::L), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (L:i32 bdxaddr12pair:i64:$XBD2)
/*9617*/        /*Scope*/ 14, /*->9632*/
/*9618*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #2 #3 #4
/*9621*/          OPC_EmitMergeInputChains1_0,
/*9622*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LY:i32 bdxaddr20pair:i64:$XBD2)
/*9632*/        /*Scope*/ 15, /*->9648*/
/*9633*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*9636*/          OPC_EmitMergeInputChains1_0,
/*9637*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LT), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LT:i32:i32 bdxaddr20only:i64:$XBD2)
/*9648*/        0, /*End of Scope*/
              /*SwitchType*/ 29,  MVT::i64,// ->9680
/*9651*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*9654*/        OPC_EmitMergeInputChains1_0,
/*9655*/        OPC_Scope, 10, /*->9667*/ // 2 children in Scope
/*9657*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LG), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LG:i64 bdxaddr20only:i64:$XBD2)
/*9667*/        /*Scope*/ 11, /*->9679*/
/*9668*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LTG), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LTG:i64:i32 bdxaddr20only:i64:$XBD2)
/*9679*/        0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::Untyped,// ->9696
/*9682*/        OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Only128:$src #2 #3 #4
/*9685*/        OPC_EmitMergeInputChains1_0,
/*9686*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::L128), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:Untyped bdxaddr20only128:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                // Dst: (L128:Untyped bdxaddr20only128:i64:$src)
              0, // EndSwitchType
/*9697*/    /*Scope*/ 2|128,1/*130*/, /*->9829*/
/*9699*/      OPC_CheckPredicate, 52, // Predicate_sextload
/*9701*/      OPC_SwitchType /*2 cases */, 54,  MVT::i32,// ->9758
/*9704*/        OPC_Scope, 16, /*->9722*/ // 2 children in Scope
/*9706*/          OPC_CheckPredicate, 75, // Predicate_sextloadi8
/*9708*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*9711*/          OPC_EmitMergeInputChains1_0,
/*9712*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 16
                  // Dst: (LB:i32 bdxaddr20only:i64:$XBD2)
/*9722*/        /*Scope*/ 34, /*->9757*/
/*9723*/          OPC_CheckPredicate, 53, // Predicate_sextloadi16
/*9725*/          OPC_Scope, 14, /*->9741*/ // 2 children in Scope
/*9727*/            OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #2 #3 #4
/*9730*/            OPC_EmitMergeInputChains1_0,
/*9731*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::LH), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 16
                    // Dst: (LH:i32 bdxaddr12pair:i64:$XBD2)
/*9741*/          /*Scope*/ 14, /*->9756*/
/*9742*/            OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #2 #3 #4
/*9745*/            OPC_EmitMergeInputChains1_0,
/*9746*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::LHY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 16
                    // Dst: (LHY:i32 bdxaddr20pair:i64:$XBD2)
/*9756*/          0, /*End of Scope*/
/*9757*/        0, /*End of Scope*/
              /*SwitchType*/ 68,  MVT::i64,// ->9828
/*9760*/        OPC_Scope, 16, /*->9778*/ // 3 children in Scope
/*9762*/          OPC_CheckPredicate, 75, // Predicate_sextloadi8
/*9764*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*9767*/          OPC_EmitMergeInputChains1_0,
/*9768*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 16
                  // Dst: (LGB:i64 bdxaddr20only:i64:$XBD2)
/*9778*/        /*Scope*/ 16, /*->9795*/
/*9779*/          OPC_CheckPredicate, 53, // Predicate_sextloadi16
/*9781*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*9784*/          OPC_EmitMergeInputChains1_0,
/*9785*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 16
                  // Dst: (LGH:i64 bdxaddr20only:i64:$XBD2)
/*9795*/        /*Scope*/ 31, /*->9827*/
/*9796*/          OPC_CheckPredicate, 54, // Predicate_sextloadi32
/*9798*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*9801*/          OPC_EmitMergeInputChains1_0,
/*9802*/          OPC_Scope, 10, /*->9814*/ // 2 children in Scope
/*9804*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGF), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 16
                    // Dst: (LGF:i64 bdxaddr20only:i64:$XBD2)
/*9814*/          /*Scope*/ 11, /*->9826*/
/*9815*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::LTGF), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 16
                    // Dst: (LTGF:i64:i32 bdxaddr20only:i64:$XBD2)
/*9826*/          0, /*End of Scope*/
/*9827*/        0, /*End of Scope*/
              0, // EndSwitchType
/*9829*/    /*Scope*/ 115, /*->9945*/
/*9830*/      OPC_CheckPredicate, 70, // Predicate_extload
/*9832*/      OPC_SwitchType /*2 cases */, 54,  MVT::i32,// ->9889
/*9835*/        OPC_Scope, 16, /*->9853*/ // 2 children in Scope
/*9837*/          OPC_CheckPredicate, 76, // Predicate_extloadi8
/*9839*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$src #2 #3 #4
/*9842*/          OPC_EmitMergeInputChains1_0,
/*9843*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 bdxaddr20only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 16
                  // Dst: (LB:i32 bdxaddr20only:i64:$src)
/*9853*/        /*Scope*/ 34, /*->9888*/
/*9854*/          OPC_CheckPredicate, 71, // Predicate_extloadi16
/*9856*/          OPC_Scope, 14, /*->9872*/ // 2 children in Scope
/*9858*/            OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$src #2 #3 #4
/*9861*/            OPC_EmitMergeInputChains1_0,
/*9862*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::LH), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i32 bdxaddr12pair:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 16
                    // Dst: (LH:i32 bdxaddr12pair:i64:$src)
/*9872*/          /*Scope*/ 14, /*->9887*/
/*9873*/            OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$src #2 #3 #4
/*9876*/            OPC_EmitMergeInputChains1_0,
/*9877*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::LHY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i32 bdxaddr20pair:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 16
                    // Dst: (LHY:i32 bdxaddr20pair:i64:$src)
/*9887*/          0, /*End of Scope*/
/*9888*/        0, /*End of Scope*/
              /*SwitchType*/ 53,  MVT::i64,// ->9944
/*9891*/        OPC_Scope, 16, /*->9909*/ // 3 children in Scope
/*9893*/          OPC_CheckPredicate, 76, // Predicate_extloadi8
/*9895*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$src #2 #3 #4
/*9898*/          OPC_EmitMergeInputChains1_0,
/*9899*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 16
                  // Dst: (LGB:i64 bdxaddr20only:i64:$src)
/*9909*/        /*Scope*/ 16, /*->9926*/
/*9910*/          OPC_CheckPredicate, 71, // Predicate_extloadi16
/*9912*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$src #2 #3 #4
/*9915*/          OPC_EmitMergeInputChains1_0,
/*9916*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 16
                  // Dst: (LGH:i64 bdxaddr20only:i64:$src)
/*9926*/        /*Scope*/ 16, /*->9943*/
/*9927*/          OPC_CheckPredicate, 77, // Predicate_extloadi32
/*9929*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$src #2 #3 #4
/*9932*/          OPC_EmitMergeInputChains1_0,
/*9933*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGF), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 16
                  // Dst: (LGF:i64 bdxaddr20only:i64:$src)
/*9943*/        0, /*End of Scope*/
              0, // EndSwitchType
/*9945*/    /*Scope*/ 97, /*->10043*/
/*9946*/      OPC_CheckPredicate, 38, // Predicate_zextload
/*9948*/      OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->9987
/*9951*/        OPC_Scope, 16, /*->9969*/ // 2 children in Scope
/*9953*/          OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*9955*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*9958*/          OPC_EmitMergeInputChains1_0,
/*9959*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLC), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 16
                  // Dst: (LLC:i32 bdxaddr20only:i64:$XBD2)
/*9969*/        /*Scope*/ 16, /*->9986*/
/*9970*/          OPC_CheckPredicate, 72, // Predicate_zextloadi16
/*9972*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*9975*/          OPC_EmitMergeInputChains1_0,
/*9976*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 16
                  // Dst: (LLH:i32 bdxaddr20only:i64:$XBD2)
/*9986*/        0, /*End of Scope*/
              /*SwitchType*/ 53,  MVT::i64,// ->10042
/*9989*/        OPC_Scope, 16, /*->10007*/ // 3 children in Scope
/*9991*/          OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*9993*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*9996*/          OPC_EmitMergeInputChains1_0,
/*9997*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGC), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 16
                  // Dst: (LLGC:i64 bdxaddr20only:i64:$XBD2)
/*10007*/       /*Scope*/ 16, /*->10024*/
/*10008*/         OPC_CheckPredicate, 72, // Predicate_zextloadi16
/*10010*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*10013*/         OPC_EmitMergeInputChains1_0,
/*10014*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 16
                  // Dst: (LLGH:i64 bdxaddr20only:i64:$XBD2)
/*10024*/       /*Scope*/ 16, /*->10041*/
/*10025*/         OPC_CheckPredicate, 55, // Predicate_zextloadi32
/*10027*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*10030*/         OPC_EmitMergeInputChains1_0,
/*10031*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGF), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 16
                  // Dst: (LLGF:i64 bdxaddr20only:i64:$XBD2)
/*10041*/       0, /*End of Scope*/
              0, // EndSwitchType
/*10043*/   /*Scope*/ 88, /*->10132*/
/*10044*/     OPC_CheckPredicate, 13, // Predicate_load
/*10046*/     OPC_SwitchType /*3 cases */, 32,  MVT::f32,// ->10081
/*10049*/       OPC_Scope, 14, /*->10065*/ // 2 children in Scope
/*10051*/         OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #2 #3 #4
/*10054*/         OPC_EmitMergeInputChains1_0,
/*10055*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LE), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LE:f32 bdxaddr12pair:i64:$XBD2)
/*10065*/       /*Scope*/ 14, /*->10080*/
/*10066*/         OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #2 #3 #4
/*10069*/         OPC_EmitMergeInputChains1_0,
/*10070*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LEY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LEY:f32 bdxaddr20pair:i64:$XBD2)
/*10080*/       0, /*End of Scope*/
              /*SwitchType*/ 32,  MVT::f64,// ->10115
/*10083*/       OPC_Scope, 14, /*->10099*/ // 2 children in Scope
/*10085*/         OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #2 #3 #4
/*10088*/         OPC_EmitMergeInputChains1_0,
/*10089*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LD), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f64 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LD:f64 bdxaddr12pair:i64:$XBD2)
/*10099*/       /*Scope*/ 14, /*->10114*/
/*10100*/         OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #2 #3 #4
/*10103*/         OPC_EmitMergeInputChains1_0,
/*10104*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LDY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f64 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LDY:f64 bdxaddr20pair:i64:$XBD2)
/*10114*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::f128,// ->10131
/*10117*/       OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Only128:$src #2 #3 #4
/*10120*/       OPC_EmitMergeInputChains1_0,
/*10121*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f128, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:f128 bdxaddr20only128:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                // Dst: (LX:f128 bdxaddr20only128:i64:$src)
              0, // EndSwitchType
/*10132*/   /*Scope*/ 60, /*->10193*/
/*10133*/     OPC_CheckPredicate, 70, // Predicate_extload
/*10135*/     OPC_Scope, 36, /*->10173*/ // 2 children in Scope
/*10137*/       OPC_CheckPredicate, 78, // Predicate_extloadf32
/*10139*/       OPC_SwitchType /*2 cases */, 14,  MVT::f64,// ->10156
/*10142*/         OPC_CheckComplexPat, /*CP*/14, /*#*/1, // selectBDXAddr12Only:$XBD2 #2 #3 #4
/*10145*/         OPC_EmitMergeInputChains1_0,
/*10146*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LDEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>> - Complexity = 16
                  // Dst: (LDEB:f64 bdxaddr12only:i64:$XBD2)
                /*SwitchType*/ 14,  MVT::f128,// ->10172
/*10158*/         OPC_CheckComplexPat, /*CP*/14, /*#*/1, // selectBDXAddr12Only:$XBD2 #2 #3 #4
/*10161*/         OPC_EmitMergeInputChains1_0,
/*10162*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LXEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f128, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f128 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>> - Complexity = 16
                  // Dst: (LXEB:f128 bdxaddr12only:i64:$XBD2)
                0, // EndSwitchType
/*10173*/     /*Scope*/ 18, /*->10192*/
/*10174*/       OPC_CheckPredicate, 79, // Predicate_extloadf64
/*10176*/       OPC_CheckType, MVT::f128,
/*10178*/       OPC_CheckComplexPat, /*CP*/14, /*#*/1, // selectBDXAddr12Only:$XBD2 #2 #3 #4
/*10181*/       OPC_EmitMergeInputChains1_0,
/*10182*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LXDB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f128, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:f128 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf64>> - Complexity = 16
                // Dst: (LXDB:f128 bdxaddr12only:i64:$XBD2)
/*10192*/     0, /*End of Scope*/
/*10193*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 38|128,1/*166*/,  TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->10364
/*10198*/   OPC_RecordMemRef,
/*10199*/   OPC_RecordNode,   // #0 = 'atomic_load_add' chained node
/*10200*/   OPC_RecordChild1, // #1 = $ptr
/*10201*/   OPC_CheckChild1Type, MVT::i64,
/*10203*/   OPC_RecordChild2, // #2 = $src2
/*10204*/   OPC_Scope, 117, /*->10323*/ // 3 children in Scope
/*10206*/     OPC_MoveChild, 2,
/*10208*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10211*/     OPC_Scope, 27, /*->10240*/ // 4 children in Scope
/*10213*/       OPC_CheckPredicate, 34, // Predicate_imm32sx16
/*10215*/       OPC_MoveParent,
/*10216*/       OPC_CheckPredicate, 80, // Predicate_atomic_load_add_32
/*10218*/       OPC_CheckType, MVT::i32,
/*10220*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10223*/       OPC_EmitMergeInputChains1_0,
/*10224*/       OPC_EmitConvertToTarget, 2,
/*10226*/       OPC_EmitNodeXForm, 2, 5, // SIMM16
/*10229*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_AHI), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_add:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$src2)<<P:Predicate_atomic_load_add_32>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_AHI:i32:i32 bdaddr20only:i64:$ptr, (SIMM16:i32 (imm:i32):$src2))
/*10240*/     /*Scope*/ 27, /*->10268*/
/*10241*/       OPC_CheckPredicate, 35, // Predicate_imm64sx16
/*10243*/       OPC_MoveParent,
/*10244*/       OPC_CheckPredicate, 81, // Predicate_atomic_load_add_64
/*10246*/       OPC_CheckType, MVT::i64,
/*10248*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10251*/       OPC_EmitMergeInputChains1_0,
/*10252*/       OPC_EmitConvertToTarget, 2,
/*10254*/       OPC_EmitNodeXForm, 2, 5, // SIMM16
/*10257*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_AGHI), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_add:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$src2)<<P:Predicate_atomic_load_add_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_AGHI:i64:i32 bdaddr20only:i64:$ptr, (SIMM16:i64 (imm:i64):$src2))
/*10268*/     /*Scope*/ 27, /*->10296*/
/*10269*/       OPC_CheckPredicate, 56, // Predicate_imm64sx32
/*10271*/       OPC_MoveParent,
/*10272*/       OPC_CheckPredicate, 81, // Predicate_atomic_load_add_64
/*10274*/       OPC_CheckType, MVT::i64,
/*10276*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10279*/       OPC_EmitMergeInputChains1_0,
/*10280*/       OPC_EmitConvertToTarget, 2,
/*10282*/       OPC_EmitNodeXForm, 10, 5, // SIMM32
/*10285*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_AGFI), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_add:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64sx32>><<X:SIMM32>>:$src2)<<P:Predicate_atomic_load_add_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_AGFI:i64:i32 bdaddr20only:i64:$ptr, (SIMM32:i64 (imm:i64):$src2))
/*10296*/     /*Scope*/ 25, /*->10322*/
/*10297*/       OPC_MoveParent,
/*10298*/       OPC_CheckPredicate, 80, // Predicate_atomic_load_add_32
/*10300*/       OPC_CheckType, MVT::i32,
/*10302*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10305*/       OPC_EmitMergeInputChains1_0,
/*10306*/       OPC_EmitConvertToTarget, 2,
/*10308*/       OPC_EmitNodeXForm, 10, 5, // SIMM32
/*10311*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_AFI), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_add:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:SIMM32>>:$src2)<<P:Predicate_atomic_load_add_32>> - Complexity = 16
                // Dst: (ATOMIC_LOAD_AFI:i32:i32 bdaddr20only:i64:$ptr, (SIMM32:i32 (imm:i32):$src2))
/*10322*/     0, /*End of Scope*/
/*10323*/   /*Scope*/ 19, /*->10343*/
/*10324*/     OPC_CheckPredicate, 80, // Predicate_atomic_load_add_32
/*10326*/     OPC_CheckType, MVT::i32,
/*10328*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10331*/     OPC_EmitMergeInputChains1_0,
/*10332*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_AR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_add:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_add_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_AR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
/*10343*/   /*Scope*/ 19, /*->10363*/
/*10344*/     OPC_CheckPredicate, 81, // Predicate_atomic_load_add_64
/*10346*/     OPC_CheckType, MVT::i64,
/*10348*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10351*/     OPC_EmitMergeInputChains1_0,
/*10352*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_AGR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_add:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_add_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_AGR:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
/*10363*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 51|128,2/*307*/,  TARGET_VAL(ISD::ATOMIC_LOAD_AND),// ->10675
/*10368*/   OPC_RecordMemRef,
/*10369*/   OPC_RecordNode,   // #0 = 'atomic_load_and' chained node
/*10370*/   OPC_RecordChild1, // #1 = $ptr
/*10371*/   OPC_CheckChild1Type, MVT::i64,
/*10373*/   OPC_RecordChild2, // #2 = $src2
/*10374*/   OPC_Scope, 1|128,2/*257*/, /*->10634*/ // 3 children in Scope
/*10377*/     OPC_MoveChild, 2,
/*10379*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10382*/     OPC_Scope, 27, /*->10411*/ // 9 children in Scope
/*10384*/       OPC_CheckPredicate, 59, // Predicate_imm32ll16c
/*10386*/       OPC_MoveParent,
/*10387*/       OPC_CheckPredicate, 82, // Predicate_atomic_load_and_32
/*10389*/       OPC_CheckType, MVT::i32,
/*10391*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10394*/       OPC_EmitMergeInputChains1_0,
/*10395*/       OPC_EmitConvertToTarget, 2,
/*10397*/       OPC_EmitNodeXForm, 3, 5, // LL16
/*10400*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILL32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32ll16c>><<X:LL16>>:$src2)<<P:Predicate_atomic_load_and_32>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILL32:i32:i32 bdaddr20only:i64:$ptr, (LL16:i32 (imm:i32):$src2))
/*10411*/     /*Scope*/ 27, /*->10439*/
/*10412*/       OPC_CheckPredicate, 60, // Predicate_imm32lh16c
/*10414*/       OPC_MoveParent,
/*10415*/       OPC_CheckPredicate, 82, // Predicate_atomic_load_and_32
/*10417*/       OPC_CheckType, MVT::i32,
/*10419*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10422*/       OPC_EmitMergeInputChains1_0,
/*10423*/       OPC_EmitConvertToTarget, 2,
/*10425*/       OPC_EmitNodeXForm, 4, 5, // LH16
/*10428*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILH32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32lh16c>><<X:LH16>>:$src2)<<P:Predicate_atomic_load_and_32>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILH32:i32:i32 bdaddr20only:i64:$ptr, (LH16:i32 (imm:i32):$src2))
/*10439*/     /*Scope*/ 27, /*->10467*/
/*10440*/       OPC_CheckPredicate, 61, // Predicate_imm64ll16c
/*10442*/       OPC_MoveParent,
/*10443*/       OPC_CheckPredicate, 83, // Predicate_atomic_load_and_64
/*10445*/       OPC_CheckType, MVT::i64,
/*10447*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10450*/       OPC_EmitMergeInputChains1_0,
/*10451*/       OPC_EmitConvertToTarget, 2,
/*10453*/       OPC_EmitNodeXForm, 3, 5, // LL16
/*10456*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILL), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64ll16c>><<X:LL16>>:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILL:i64:i32 bdaddr20only:i64:$ptr, (LL16:i64 (imm:i64):$src2))
/*10467*/     /*Scope*/ 27, /*->10495*/
/*10468*/       OPC_CheckPredicate, 62, // Predicate_imm64lh16c
/*10470*/       OPC_MoveParent,
/*10471*/       OPC_CheckPredicate, 83, // Predicate_atomic_load_and_64
/*10473*/       OPC_CheckType, MVT::i64,
/*10475*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10478*/       OPC_EmitMergeInputChains1_0,
/*10479*/       OPC_EmitConvertToTarget, 2,
/*10481*/       OPC_EmitNodeXForm, 4, 5, // LH16
/*10484*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILH), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lh16c>><<X:LH16>>:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILH:i64:i32 bdaddr20only:i64:$ptr, (LH16:i64 (imm:i64):$src2))
/*10495*/     /*Scope*/ 27, /*->10523*/
/*10496*/       OPC_CheckPredicate, 63, // Predicate_imm64hl16c
/*10498*/       OPC_MoveParent,
/*10499*/       OPC_CheckPredicate, 83, // Predicate_atomic_load_and_64
/*10501*/       OPC_CheckType, MVT::i64,
/*10503*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10506*/       OPC_EmitMergeInputChains1_0,
/*10507*/       OPC_EmitConvertToTarget, 2,
/*10509*/       OPC_EmitNodeXForm, 5, 5, // HL16
/*10512*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NIHL), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hl16c>><<X:HL16>>:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NIHL:i64:i32 bdaddr20only:i64:$ptr, (HL16:i64 (imm:i64):$src2))
/*10523*/     /*Scope*/ 27, /*->10551*/
/*10524*/       OPC_CheckPredicate, 64, // Predicate_imm64hh16c
/*10526*/       OPC_MoveParent,
/*10527*/       OPC_CheckPredicate, 83, // Predicate_atomic_load_and_64
/*10529*/       OPC_CheckType, MVT::i64,
/*10531*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10534*/       OPC_EmitMergeInputChains1_0,
/*10535*/       OPC_EmitConvertToTarget, 2,
/*10537*/       OPC_EmitNodeXForm, 6, 5, // HH16
/*10540*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NIHH), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hh16c>><<X:HH16>>:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NIHH:i64:i32 bdaddr20only:i64:$ptr, (HH16:i64 (imm:i64):$src2))
/*10551*/     /*Scope*/ 27, /*->10579*/
/*10552*/       OPC_CheckPredicate, 65, // Predicate_imm64lf32c
/*10554*/       OPC_MoveParent,
/*10555*/       OPC_CheckPredicate, 83, // Predicate_atomic_load_and_64
/*10557*/       OPC_CheckType, MVT::i64,
/*10559*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10562*/       OPC_EmitMergeInputChains1_0,
/*10563*/       OPC_EmitConvertToTarget, 2,
/*10565*/       OPC_EmitNodeXForm, 7, 5, // LF32
/*10568*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILF), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lf32c>><<X:LF32>>:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILF:i64:i32 bdaddr20only:i64:$ptr, (LF32:i64 (imm:i64):$src2))
/*10579*/     /*Scope*/ 27, /*->10607*/
/*10580*/       OPC_CheckPredicate, 66, // Predicate_imm64hf32c
/*10582*/       OPC_MoveParent,
/*10583*/       OPC_CheckPredicate, 83, // Predicate_atomic_load_and_64
/*10585*/       OPC_CheckType, MVT::i64,
/*10587*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10590*/       OPC_EmitMergeInputChains1_0,
/*10591*/       OPC_EmitConvertToTarget, 2,
/*10593*/       OPC_EmitNodeXForm, 8, 5, // HF32
/*10596*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NIHF), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hf32c>><<X:HF32>>:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NIHF:i64:i32 bdaddr20only:i64:$ptr, (HF32:i64 (imm:i64):$src2))
/*10607*/     /*Scope*/ 25, /*->10633*/
/*10608*/       OPC_MoveParent,
/*10609*/       OPC_CheckPredicate, 82, // Predicate_atomic_load_and_32
/*10611*/       OPC_CheckType, MVT::i32,
/*10613*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10616*/       OPC_EmitMergeInputChains1_0,
/*10617*/       OPC_EmitConvertToTarget, 2,
/*10619*/       OPC_EmitNodeXForm, 9, 5, // UIMM32
/*10622*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILF32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:UIMM32>>:$src2)<<P:Predicate_atomic_load_and_32>> - Complexity = 16
                // Dst: (ATOMIC_LOAD_NILF32:i32:i32 bdaddr20only:i64:$ptr, (UIMM32:i32 (imm:i32):$src2))
/*10633*/     0, /*End of Scope*/
/*10634*/   /*Scope*/ 19, /*->10654*/
/*10635*/     OPC_CheckPredicate, 82, // Predicate_atomic_load_and_32
/*10637*/     OPC_CheckType, MVT::i32,
/*10639*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10642*/     OPC_EmitMergeInputChains1_0,
/*10643*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_and:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_and_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_NR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
/*10654*/   /*Scope*/ 19, /*->10674*/
/*10655*/     OPC_CheckPredicate, 83, // Predicate_atomic_load_and_64
/*10657*/     OPC_CheckType, MVT::i64,
/*10659*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10662*/     OPC_EmitMergeInputChains1_0,
/*10663*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NGR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_NGR:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
/*10674*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 51|128,2/*307*/,  TARGET_VAL(ISD::ATOMIC_LOAD_OR),// ->10986
/*10679*/   OPC_RecordMemRef,
/*10680*/   OPC_RecordNode,   // #0 = 'atomic_load_or' chained node
/*10681*/   OPC_RecordChild1, // #1 = $ptr
/*10682*/   OPC_CheckChild1Type, MVT::i64,
/*10684*/   OPC_RecordChild2, // #2 = $src2
/*10685*/   OPC_Scope, 1|128,2/*257*/, /*->10945*/ // 3 children in Scope
/*10688*/     OPC_MoveChild, 2,
/*10690*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10693*/     OPC_Scope, 27, /*->10722*/ // 9 children in Scope
/*10695*/       OPC_CheckPredicate, 42, // Predicate_imm32ll16
/*10697*/       OPC_MoveParent,
/*10698*/       OPC_CheckPredicate, 84, // Predicate_atomic_load_or_32
/*10700*/       OPC_CheckType, MVT::i32,
/*10702*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10705*/       OPC_EmitMergeInputChains1_0,
/*10706*/       OPC_EmitConvertToTarget, 2,
/*10708*/       OPC_EmitNodeXForm, 3, 5, // LL16
/*10711*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OILL32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32ll16>><<X:LL16>>:$src2)<<P:Predicate_atomic_load_or_32>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OILL32:i32:i32 bdaddr20only:i64:$ptr, (LL16:i32 (imm:i32):$src2))
/*10722*/     /*Scope*/ 27, /*->10750*/
/*10723*/       OPC_CheckPredicate, 43, // Predicate_imm32lh16
/*10725*/       OPC_MoveParent,
/*10726*/       OPC_CheckPredicate, 84, // Predicate_atomic_load_or_32
/*10728*/       OPC_CheckType, MVT::i32,
/*10730*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10733*/       OPC_EmitMergeInputChains1_0,
/*10734*/       OPC_EmitConvertToTarget, 2,
/*10736*/       OPC_EmitNodeXForm, 4, 5, // LH16
/*10739*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OILH32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32lh16>><<X:LH16>>:$src2)<<P:Predicate_atomic_load_or_32>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OILH32:i32:i32 bdaddr20only:i64:$ptr, (LH16:i32 (imm:i32):$src2))
/*10750*/     /*Scope*/ 27, /*->10778*/
/*10751*/       OPC_CheckPredicate, 44, // Predicate_imm64ll16
/*10753*/       OPC_MoveParent,
/*10754*/       OPC_CheckPredicate, 85, // Predicate_atomic_load_or_64
/*10756*/       OPC_CheckType, MVT::i64,
/*10758*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10761*/       OPC_EmitMergeInputChains1_0,
/*10762*/       OPC_EmitConvertToTarget, 2,
/*10764*/       OPC_EmitNodeXForm, 3, 5, // LL16
/*10767*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OILL), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64ll16>><<X:LL16>>:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OILL:i64:i32 bdaddr20only:i64:$ptr, (LL16:i64 (imm:i64):$src2))
/*10778*/     /*Scope*/ 27, /*->10806*/
/*10779*/       OPC_CheckPredicate, 45, // Predicate_imm64lh16
/*10781*/       OPC_MoveParent,
/*10782*/       OPC_CheckPredicate, 85, // Predicate_atomic_load_or_64
/*10784*/       OPC_CheckType, MVT::i64,
/*10786*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10789*/       OPC_EmitMergeInputChains1_0,
/*10790*/       OPC_EmitConvertToTarget, 2,
/*10792*/       OPC_EmitNodeXForm, 4, 5, // LH16
/*10795*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OILH), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lh16>><<X:LH16>>:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OILH:i64:i32 bdaddr20only:i64:$ptr, (LH16:i64 (imm:i64):$src2))
/*10806*/     /*Scope*/ 27, /*->10834*/
/*10807*/       OPC_CheckPredicate, 46, // Predicate_imm64hl16
/*10809*/       OPC_MoveParent,
/*10810*/       OPC_CheckPredicate, 85, // Predicate_atomic_load_or_64
/*10812*/       OPC_CheckType, MVT::i64,
/*10814*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10817*/       OPC_EmitMergeInputChains1_0,
/*10818*/       OPC_EmitConvertToTarget, 2,
/*10820*/       OPC_EmitNodeXForm, 5, 5, // HL16
/*10823*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OIHL), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hl16>><<X:HL16>>:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OIHL:i64:i32 bdaddr20only:i64:$ptr, (HL16:i64 (imm:i64):$src2))
/*10834*/     /*Scope*/ 27, /*->10862*/
/*10835*/       OPC_CheckPredicate, 47, // Predicate_imm64hh16
/*10837*/       OPC_MoveParent,
/*10838*/       OPC_CheckPredicate, 85, // Predicate_atomic_load_or_64
/*10840*/       OPC_CheckType, MVT::i64,
/*10842*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10845*/       OPC_EmitMergeInputChains1_0,
/*10846*/       OPC_EmitConvertToTarget, 2,
/*10848*/       OPC_EmitNodeXForm, 6, 5, // HH16
/*10851*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OIHH), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hh16>><<X:HH16>>:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OIHH:i64:i32 bdaddr20only:i64:$ptr, (HH16:i64 (imm:i64):$src2))
/*10862*/     /*Scope*/ 27, /*->10890*/
/*10863*/       OPC_CheckPredicate, 48, // Predicate_imm64lf32
/*10865*/       OPC_MoveParent,
/*10866*/       OPC_CheckPredicate, 85, // Predicate_atomic_load_or_64
/*10868*/       OPC_CheckType, MVT::i64,
/*10870*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10873*/       OPC_EmitMergeInputChains1_0,
/*10874*/       OPC_EmitConvertToTarget, 2,
/*10876*/       OPC_EmitNodeXForm, 7, 5, // LF32
/*10879*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OILF), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lf32>><<X:LF32>>:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OILF:i64:i32 bdaddr20only:i64:$ptr, (LF32:i64 (imm:i64):$src2))
/*10890*/     /*Scope*/ 27, /*->10918*/
/*10891*/       OPC_CheckPredicate, 49, // Predicate_imm64hf32
/*10893*/       OPC_MoveParent,
/*10894*/       OPC_CheckPredicate, 85, // Predicate_atomic_load_or_64
/*10896*/       OPC_CheckType, MVT::i64,
/*10898*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10901*/       OPC_EmitMergeInputChains1_0,
/*10902*/       OPC_EmitConvertToTarget, 2,
/*10904*/       OPC_EmitNodeXForm, 8, 5, // HF32
/*10907*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OIHF), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OIHF:i64:i32 bdaddr20only:i64:$ptr, (HF32:i64 (imm:i64):$src2))
/*10918*/     /*Scope*/ 25, /*->10944*/
/*10919*/       OPC_MoveParent,
/*10920*/       OPC_CheckPredicate, 84, // Predicate_atomic_load_or_32
/*10922*/       OPC_CheckType, MVT::i32,
/*10924*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10927*/       OPC_EmitMergeInputChains1_0,
/*10928*/       OPC_EmitConvertToTarget, 2,
/*10930*/       OPC_EmitNodeXForm, 9, 5, // UIMM32
/*10933*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OILF32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:UIMM32>>:$src2)<<P:Predicate_atomic_load_or_32>> - Complexity = 16
                // Dst: (ATOMIC_LOAD_OILF32:i32:i32 bdaddr20only:i64:$ptr, (UIMM32:i32 (imm:i32):$src2))
/*10944*/     0, /*End of Scope*/
/*10945*/   /*Scope*/ 19, /*->10965*/
/*10946*/     OPC_CheckPredicate, 84, // Predicate_atomic_load_or_32
/*10948*/     OPC_CheckType, MVT::i32,
/*10950*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10953*/     OPC_EmitMergeInputChains1_0,
/*10954*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_or:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_or_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_OR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
/*10965*/   /*Scope*/ 19, /*->10985*/
/*10966*/     OPC_CheckPredicate, 85, // Predicate_atomic_load_or_64
/*10968*/     OPC_CheckType, MVT::i64,
/*10970*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10973*/     OPC_EmitMergeInputChains1_0,
/*10974*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OGR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_OGR:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
/*10985*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 10|128,1/*138*/,  TARGET_VAL(ISD::ATOMIC_LOAD_XOR),// ->11128
/*10990*/   OPC_RecordMemRef,
/*10991*/   OPC_RecordNode,   // #0 = 'atomic_load_xor' chained node
/*10992*/   OPC_RecordChild1, // #1 = $ptr
/*10993*/   OPC_CheckChild1Type, MVT::i64,
/*10995*/   OPC_RecordChild2, // #2 = $src2
/*10996*/   OPC_Scope, 89, /*->11087*/ // 3 children in Scope
/*10998*/     OPC_MoveChild, 2,
/*11000*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11003*/     OPC_Scope, 27, /*->11032*/ // 3 children in Scope
/*11005*/       OPC_CheckPredicate, 48, // Predicate_imm64lf32
/*11007*/       OPC_MoveParent,
/*11008*/       OPC_CheckPredicate, 86, // Predicate_atomic_load_xor_64
/*11010*/       OPC_CheckType, MVT::i64,
/*11012*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11015*/       OPC_EmitMergeInputChains1_0,
/*11016*/       OPC_EmitConvertToTarget, 2,
/*11018*/       OPC_EmitNodeXForm, 7, 5, // LF32
/*11021*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_XILF), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_xor:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lf32>><<X:LF32>>:$src2)<<P:Predicate_atomic_load_xor_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_XILF:i64:i32 bdaddr20only:i64:$ptr, (LF32:i64 (imm:i64):$src2))
/*11032*/     /*Scope*/ 27, /*->11060*/
/*11033*/       OPC_CheckPredicate, 49, // Predicate_imm64hf32
/*11035*/       OPC_MoveParent,
/*11036*/       OPC_CheckPredicate, 86, // Predicate_atomic_load_xor_64
/*11038*/       OPC_CheckType, MVT::i64,
/*11040*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11043*/       OPC_EmitMergeInputChains1_0,
/*11044*/       OPC_EmitConvertToTarget, 2,
/*11046*/       OPC_EmitNodeXForm, 8, 5, // HF32
/*11049*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_XIHF), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_xor:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$src2)<<P:Predicate_atomic_load_xor_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_XIHF:i64:i32 bdaddr20only:i64:$ptr, (HF32:i64 (imm:i64):$src2))
/*11060*/     /*Scope*/ 25, /*->11086*/
/*11061*/       OPC_MoveParent,
/*11062*/       OPC_CheckPredicate, 87, // Predicate_atomic_load_xor_32
/*11064*/       OPC_CheckType, MVT::i32,
/*11066*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11069*/       OPC_EmitMergeInputChains1_0,
/*11070*/       OPC_EmitConvertToTarget, 2,
/*11072*/       OPC_EmitNodeXForm, 9, 5, // UIMM32
/*11075*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_XILF32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_xor:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:UIMM32>>:$src2)<<P:Predicate_atomic_load_xor_32>> - Complexity = 16
                // Dst: (ATOMIC_LOAD_XILF32:i32:i32 bdaddr20only:i64:$ptr, (UIMM32:i32 (imm:i32):$src2))
/*11086*/     0, /*End of Scope*/
/*11087*/   /*Scope*/ 19, /*->11107*/
/*11088*/     OPC_CheckPredicate, 87, // Predicate_atomic_load_xor_32
/*11090*/     OPC_CheckType, MVT::i32,
/*11092*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11095*/     OPC_EmitMergeInputChains1_0,
/*11096*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_XR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_xor:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_xor_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_XR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
/*11107*/   /*Scope*/ 19, /*->11127*/
/*11108*/     OPC_CheckPredicate, 86, // Predicate_atomic_load_xor_64
/*11110*/     OPC_CheckType, MVT::i64,
/*11112*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11115*/     OPC_EmitMergeInputChains1_0,
/*11116*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_XGR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_xor:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_xor_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_XGR:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
/*11127*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 51|128,2/*307*/,  TARGET_VAL(ISD::ATOMIC_LOAD_NAND),// ->11439
/*11132*/   OPC_RecordMemRef,
/*11133*/   OPC_RecordNode,   // #0 = 'atomic_load_nand' chained node
/*11134*/   OPC_RecordChild1, // #1 = $ptr
/*11135*/   OPC_CheckChild1Type, MVT::i64,
/*11137*/   OPC_RecordChild2, // #2 = $src2
/*11138*/   OPC_Scope, 1|128,2/*257*/, /*->11398*/ // 3 children in Scope
/*11141*/     OPC_MoveChild, 2,
/*11143*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11146*/     OPC_Scope, 27, /*->11175*/ // 9 children in Scope
/*11148*/       OPC_CheckPredicate, 59, // Predicate_imm32ll16c
/*11150*/       OPC_MoveParent,
/*11151*/       OPC_CheckPredicate, 88, // Predicate_atomic_load_nand_32
/*11153*/       OPC_CheckType, MVT::i32,
/*11155*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11158*/       OPC_EmitMergeInputChains1_0,
/*11159*/       OPC_EmitConvertToTarget, 2,
/*11161*/       OPC_EmitNodeXForm, 3, 5, // LL16
/*11164*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILL32i), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32ll16c>><<X:LL16>>:$src2)<<P:Predicate_atomic_load_nand_32>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILL32i:i32:i32 bdaddr20only:i64:$ptr, (LL16:i32 (imm:i32):$src2))
/*11175*/     /*Scope*/ 27, /*->11203*/
/*11176*/       OPC_CheckPredicate, 60, // Predicate_imm32lh16c
/*11178*/       OPC_MoveParent,
/*11179*/       OPC_CheckPredicate, 88, // Predicate_atomic_load_nand_32
/*11181*/       OPC_CheckType, MVT::i32,
/*11183*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11186*/       OPC_EmitMergeInputChains1_0,
/*11187*/       OPC_EmitConvertToTarget, 2,
/*11189*/       OPC_EmitNodeXForm, 4, 5, // LH16
/*11192*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILH32i), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32lh16c>><<X:LH16>>:$src2)<<P:Predicate_atomic_load_nand_32>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILH32i:i32:i32 bdaddr20only:i64:$ptr, (LH16:i32 (imm:i32):$src2))
/*11203*/     /*Scope*/ 27, /*->11231*/
/*11204*/       OPC_CheckPredicate, 61, // Predicate_imm64ll16c
/*11206*/       OPC_MoveParent,
/*11207*/       OPC_CheckPredicate, 89, // Predicate_atomic_load_nand_64
/*11209*/       OPC_CheckType, MVT::i64,
/*11211*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11214*/       OPC_EmitMergeInputChains1_0,
/*11215*/       OPC_EmitConvertToTarget, 2,
/*11217*/       OPC_EmitNodeXForm, 3, 5, // LL16
/*11220*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILLi), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64ll16c>><<X:LL16>>:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILLi:i64:i32 bdaddr20only:i64:$ptr, (LL16:i64 (imm:i64):$src2))
/*11231*/     /*Scope*/ 27, /*->11259*/
/*11232*/       OPC_CheckPredicate, 62, // Predicate_imm64lh16c
/*11234*/       OPC_MoveParent,
/*11235*/       OPC_CheckPredicate, 89, // Predicate_atomic_load_nand_64
/*11237*/       OPC_CheckType, MVT::i64,
/*11239*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11242*/       OPC_EmitMergeInputChains1_0,
/*11243*/       OPC_EmitConvertToTarget, 2,
/*11245*/       OPC_EmitNodeXForm, 4, 5, // LH16
/*11248*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILHi), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lh16c>><<X:LH16>>:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILHi:i64:i32 bdaddr20only:i64:$ptr, (LH16:i64 (imm:i64):$src2))
/*11259*/     /*Scope*/ 27, /*->11287*/
/*11260*/       OPC_CheckPredicate, 63, // Predicate_imm64hl16c
/*11262*/       OPC_MoveParent,
/*11263*/       OPC_CheckPredicate, 89, // Predicate_atomic_load_nand_64
/*11265*/       OPC_CheckType, MVT::i64,
/*11267*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11270*/       OPC_EmitMergeInputChains1_0,
/*11271*/       OPC_EmitConvertToTarget, 2,
/*11273*/       OPC_EmitNodeXForm, 5, 5, // HL16
/*11276*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NIHLi), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hl16c>><<X:HL16>>:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NIHLi:i64:i32 bdaddr20only:i64:$ptr, (HL16:i64 (imm:i64):$src2))
/*11287*/     /*Scope*/ 27, /*->11315*/
/*11288*/       OPC_CheckPredicate, 64, // Predicate_imm64hh16c
/*11290*/       OPC_MoveParent,
/*11291*/       OPC_CheckPredicate, 89, // Predicate_atomic_load_nand_64
/*11293*/       OPC_CheckType, MVT::i64,
/*11295*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11298*/       OPC_EmitMergeInputChains1_0,
/*11299*/       OPC_EmitConvertToTarget, 2,
/*11301*/       OPC_EmitNodeXForm, 6, 5, // HH16
/*11304*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NIHHi), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hh16c>><<X:HH16>>:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NIHHi:i64:i32 bdaddr20only:i64:$ptr, (HH16:i64 (imm:i64):$src2))
/*11315*/     /*Scope*/ 27, /*->11343*/
/*11316*/       OPC_CheckPredicate, 65, // Predicate_imm64lf32c
/*11318*/       OPC_MoveParent,
/*11319*/       OPC_CheckPredicate, 89, // Predicate_atomic_load_nand_64
/*11321*/       OPC_CheckType, MVT::i64,
/*11323*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11326*/       OPC_EmitMergeInputChains1_0,
/*11327*/       OPC_EmitConvertToTarget, 2,
/*11329*/       OPC_EmitNodeXForm, 7, 5, // LF32
/*11332*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILFi), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lf32c>><<X:LF32>>:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILFi:i64:i32 bdaddr20only:i64:$ptr, (LF32:i64 (imm:i64):$src2))
/*11343*/     /*Scope*/ 27, /*->11371*/
/*11344*/       OPC_CheckPredicate, 66, // Predicate_imm64hf32c
/*11346*/       OPC_MoveParent,
/*11347*/       OPC_CheckPredicate, 89, // Predicate_atomic_load_nand_64
/*11349*/       OPC_CheckType, MVT::i64,
/*11351*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11354*/       OPC_EmitMergeInputChains1_0,
/*11355*/       OPC_EmitConvertToTarget, 2,
/*11357*/       OPC_EmitNodeXForm, 8, 5, // HF32
/*11360*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NIHFi), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hf32c>><<X:HF32>>:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NIHFi:i64:i32 bdaddr20only:i64:$ptr, (HF32:i64 (imm:i64):$src2))
/*11371*/     /*Scope*/ 25, /*->11397*/
/*11372*/       OPC_MoveParent,
/*11373*/       OPC_CheckPredicate, 88, // Predicate_atomic_load_nand_32
/*11375*/       OPC_CheckType, MVT::i32,
/*11377*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11380*/       OPC_EmitMergeInputChains1_0,
/*11381*/       OPC_EmitConvertToTarget, 2,
/*11383*/       OPC_EmitNodeXForm, 9, 5, // UIMM32
/*11386*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILF32i), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:UIMM32>>:$src2)<<P:Predicate_atomic_load_nand_32>> - Complexity = 16
                // Dst: (ATOMIC_LOAD_NILF32i:i32:i32 bdaddr20only:i64:$ptr, (UIMM32:i32 (imm:i32):$src2))
/*11397*/     0, /*End of Scope*/
/*11398*/   /*Scope*/ 19, /*->11418*/
/*11399*/     OPC_CheckPredicate, 88, // Predicate_atomic_load_nand_32
/*11401*/     OPC_CheckType, MVT::i32,
/*11403*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11406*/     OPC_EmitMergeInputChains1_0,
/*11407*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NRi), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_nand:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_nand_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_NRi:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
/*11418*/   /*Scope*/ 19, /*->11438*/
/*11419*/     OPC_CheckPredicate, 89, // Predicate_atomic_load_nand_64
/*11421*/     OPC_CheckType, MVT::i64,
/*11423*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11426*/     OPC_EmitMergeInputChains1_0,
/*11427*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NGRi), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_NGRi:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
/*11438*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 38,  TARGET_VAL(SystemZISD::ATOMIC_SWAPW),// ->11480
/*11442*/   OPC_RecordMemRef,
/*11443*/   OPC_RecordNode,   // #0 = 'z_atomic_swapw' chained node
/*11444*/   OPC_RecordChild1, // #1 = $ptr
/*11445*/   OPC_CheckChild1Type, MVT::i64,
/*11447*/   OPC_RecordChild2, // #2 = $src2
/*11448*/   OPC_RecordChild3, // #3 = $bitshift
/*11449*/   OPC_RecordChild4, // #4 = $negbitshift
/*11450*/   OPC_RecordChild5, // #5 = $bitsize
/*11451*/   OPC_MoveChild, 5,
/*11453*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11456*/   OPC_MoveParent,
/*11457*/   OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*11460*/   OPC_EmitMergeInputChains1_0,
/*11461*/   OPC_EmitConvertToTarget, 5,
/*11463*/   OPC_EmitNodeXForm, 9, 8, // UIMM32
/*11466*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_SWAPW), 0|OPFL_Chain|OPFL_MemRefs,
                2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
            // Src: (z_atomic_swapw:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
            // Dst: (ATOMIC_SWAPW:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
          /*SwitchOpcode*/ 38,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_SUB),// ->11521
/*11483*/   OPC_RecordMemRef,
/*11484*/   OPC_RecordNode,   // #0 = 'z_atomic_loadw_sub' chained node
/*11485*/   OPC_RecordChild1, // #1 = $ptr
/*11486*/   OPC_CheckChild1Type, MVT::i64,
/*11488*/   OPC_RecordChild2, // #2 = $src2
/*11489*/   OPC_RecordChild3, // #3 = $bitshift
/*11490*/   OPC_RecordChild4, // #4 = $negbitshift
/*11491*/   OPC_RecordChild5, // #5 = $bitsize
/*11492*/   OPC_MoveChild, 5,
/*11494*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11497*/   OPC_MoveParent,
/*11498*/   OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*11501*/   OPC_EmitMergeInputChains1_0,
/*11502*/   OPC_EmitConvertToTarget, 5,
/*11504*/   OPC_EmitNodeXForm, 9, 8, // UIMM32
/*11507*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_SR), 0|OPFL_Chain|OPFL_MemRefs,
                2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
            // Src: (z_atomic_loadw_sub:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
            // Dst: (ATOMIC_LOADW_SR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
          /*SwitchOpcode*/ 38,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_MIN),// ->11562
/*11524*/   OPC_RecordMemRef,
/*11525*/   OPC_RecordNode,   // #0 = 'z_atomic_loadw_min' chained node
/*11526*/   OPC_RecordChild1, // #1 = $ptr
/*11527*/   OPC_CheckChild1Type, MVT::i64,
/*11529*/   OPC_RecordChild2, // #2 = $src2
/*11530*/   OPC_RecordChild3, // #3 = $bitshift
/*11531*/   OPC_RecordChild4, // #4 = $negbitshift
/*11532*/   OPC_RecordChild5, // #5 = $bitsize
/*11533*/   OPC_MoveChild, 5,
/*11535*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11538*/   OPC_MoveParent,
/*11539*/   OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*11542*/   OPC_EmitMergeInputChains1_0,
/*11543*/   OPC_EmitConvertToTarget, 5,
/*11545*/   OPC_EmitNodeXForm, 9, 8, // UIMM32
/*11548*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_MIN), 0|OPFL_Chain|OPFL_MemRefs,
                2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
            // Src: (z_atomic_loadw_min:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
            // Dst: (ATOMIC_LOADW_MIN:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
          /*SwitchOpcode*/ 38,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_MAX),// ->11603
/*11565*/   OPC_RecordMemRef,
/*11566*/   OPC_RecordNode,   // #0 = 'z_atomic_loadw_max' chained node
/*11567*/   OPC_RecordChild1, // #1 = $ptr
/*11568*/   OPC_CheckChild1Type, MVT::i64,
/*11570*/   OPC_RecordChild2, // #2 = $src2
/*11571*/   OPC_RecordChild3, // #3 = $bitshift
/*11572*/   OPC_RecordChild4, // #4 = $negbitshift
/*11573*/   OPC_RecordChild5, // #5 = $bitsize
/*11574*/   OPC_MoveChild, 5,
/*11576*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11579*/   OPC_MoveParent,
/*11580*/   OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*11583*/   OPC_EmitMergeInputChains1_0,
/*11584*/   OPC_EmitConvertToTarget, 5,
/*11586*/   OPC_EmitNodeXForm, 9, 8, // UIMM32
/*11589*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_MAX), 0|OPFL_Chain|OPFL_MemRefs,
                2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
            // Src: (z_atomic_loadw_max:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
            // Dst: (ATOMIC_LOADW_MAX:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
          /*SwitchOpcode*/ 38,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_UMIN),// ->11644
/*11606*/   OPC_RecordMemRef,
/*11607*/   OPC_RecordNode,   // #0 = 'z_atomic_loadw_umin' chained node
/*11608*/   OPC_RecordChild1, // #1 = $ptr
/*11609*/   OPC_CheckChild1Type, MVT::i64,
/*11611*/   OPC_RecordChild2, // #2 = $src2
/*11612*/   OPC_RecordChild3, // #3 = $bitshift
/*11613*/   OPC_RecordChild4, // #4 = $negbitshift
/*11614*/   OPC_RecordChild5, // #5 = $bitsize
/*11615*/   OPC_MoveChild, 5,
/*11617*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11620*/   OPC_MoveParent,
/*11621*/   OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*11624*/   OPC_EmitMergeInputChains1_0,
/*11625*/   OPC_EmitConvertToTarget, 5,
/*11627*/   OPC_EmitNodeXForm, 9, 8, // UIMM32
/*11630*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_UMIN), 0|OPFL_Chain|OPFL_MemRefs,
                2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
            // Src: (z_atomic_loadw_umin:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
            // Dst: (ATOMIC_LOADW_UMIN:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
          /*SwitchOpcode*/ 38,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_UMAX),// ->11685
/*11647*/   OPC_RecordMemRef,
/*11648*/   OPC_RecordNode,   // #0 = 'z_atomic_loadw_umax' chained node
/*11649*/   OPC_RecordChild1, // #1 = $ptr
/*11650*/   OPC_CheckChild1Type, MVT::i64,
/*11652*/   OPC_RecordChild2, // #2 = $src2
/*11653*/   OPC_RecordChild3, // #3 = $bitshift
/*11654*/   OPC_RecordChild4, // #4 = $negbitshift
/*11655*/   OPC_RecordChild5, // #5 = $bitsize
/*11656*/   OPC_MoveChild, 5,
/*11658*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11661*/   OPC_MoveParent,
/*11662*/   OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*11665*/   OPC_EmitMergeInputChains1_0,
/*11666*/   OPC_EmitConvertToTarget, 5,
/*11668*/   OPC_EmitNodeXForm, 9, 8, // UIMM32
/*11671*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_UMAX), 0|OPFL_Chain|OPFL_MemRefs,
                2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
            // Src: (z_atomic_loadw_umax:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
            // Dst: (ATOMIC_LOADW_UMAX:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
          /*SwitchOpcode*/ 40,  TARGET_VAL(SystemZISD::ATOMIC_CMP_SWAPW),// ->11728
/*11688*/   OPC_RecordMemRef,
/*11689*/   OPC_RecordNode,   // #0 = 'z_atomic_cmp_swapw' chained node
/*11690*/   OPC_RecordChild1, // #1 = $addr
/*11691*/   OPC_CheckChild1Type, MVT::i64,
/*11693*/   OPC_RecordChild2, // #2 = $cmp
/*11694*/   OPC_RecordChild3, // #3 = $swap
/*11695*/   OPC_RecordChild4, // #4 = $bitshift
/*11696*/   OPC_RecordChild5, // #5 = $negbitshift
/*11697*/   OPC_RecordChild6, // #6 = $bitsize
/*11698*/   OPC_MoveChild, 6,
/*11700*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11703*/   OPC_MoveParent,
/*11704*/   OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$addr #7 #8
/*11707*/   OPC_EmitMergeInputChains1_0,
/*11708*/   OPC_EmitConvertToTarget, 6,
/*11710*/   OPC_EmitNodeXForm, 9, 9, // UIMM32
/*11713*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_CMP_SWAPW), 0|OPFL_Chain|OPFL_MemRefs,
                2/*#VTs*/, MVT::i32, MVT::i32, 7/*#Ops*/, 7, 8, 2, 3, 4, 5, 10, 
            // Src: (z_atomic_cmp_swapw:i32 bdaddr20only:i64:$addr, GR32:i32:$cmp, GR32:i32:$swap, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
            // Dst: (ATOMIC_CMP_SWAPW:i32:i32 bdaddr20only:i64:$addr, GR32:i32:$cmp, GR32:i32:$swap, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
          /*SwitchOpcode*/ 69,  TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->11800
/*11731*/   OPC_RecordMemRef,
/*11732*/   OPC_RecordNode,   // #0 = 'atomic_cmp_swap' chained node
/*11733*/   OPC_RecordChild1, // #1 = $BD2
/*11734*/   OPC_CheckChild1Type, MVT::i64,
/*11736*/   OPC_RecordChild2, // #2 = $R1src
/*11737*/   OPC_RecordChild3, // #3 = $R3
/*11738*/   OPC_SwitchType /*2 cases */, 38,  MVT::i32,// ->11779
/*11741*/     OPC_CheckPredicate, 90, // Predicate_atomic_cmp_swap_32
/*11743*/     OPC_Scope, 16, /*->11761*/ // 2 children in Scope
/*11745*/       OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectBDAddr12Pair:$BD2 #4 #5
/*11748*/       OPC_EmitMergeInputChains1_0,
/*11749*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CS), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (atomic_cmp_swap:i32 bdaddr12pair:i64:$BD2, GR32:i32:$R1src, GR32:i32:$R3)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 13
                // Dst: (CS:i32:i32 GR32:i32:$R1src, GR32:i32:$R3, bdaddr12pair:i64:$BD2)
/*11761*/     /*Scope*/ 16, /*->11778*/
/*11762*/       OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDAddr20Pair:$BD2 #4 #5
/*11765*/       OPC_EmitMergeInputChains1_0,
/*11766*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CSY), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (atomic_cmp_swap:i32 bdaddr20pair:i64:$BD2, GR32:i32:$R1src, GR32:i32:$R3)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 13
                // Dst: (CSY:i32:i32 GR32:i32:$R1src, GR32:i32:$R3, bdaddr20pair:i64:$BD2)
/*11778*/     0, /*End of Scope*/
            /*SwitchType*/ 18,  MVT::i64,// ->11799
/*11781*/     OPC_CheckPredicate, 91, // Predicate_atomic_cmp_swap_64
/*11783*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$BD2 #4 #5
/*11786*/     OPC_EmitMergeInputChains1_0,
/*11787*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::CSG), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (atomic_cmp_swap:i64 bdaddr20only:i64:$BD2, GR64:i64:$R1src, GR64:i64:$R3)<<P:Predicate_atomic_cmp_swap_64>> - Complexity = 13
              // Dst: (CSG:i64:i32 GR64:i64:$R1src, GR64:i64:$R3, bdaddr20only:i64:$BD2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 46,  TARGET_VAL(ISD::ATOMIC_SWAP),// ->11849
/*11803*/   OPC_RecordMemRef,
/*11804*/   OPC_RecordNode,   // #0 = 'atomic_swap' chained node
/*11805*/   OPC_RecordChild1, // #1 = $ptr
/*11806*/   OPC_CheckChild1Type, MVT::i64,
/*11808*/   OPC_RecordChild2, // #2 = $src2
/*11809*/   OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->11829
/*11812*/     OPC_CheckPredicate, 92, // Predicate_atomic_swap_32
/*11814*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11817*/     OPC_EmitMergeInputChains1_0,
/*11818*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_SWAP_32), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_swap:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_swap_32>> - Complexity = 13
              // Dst: (ATOMIC_SWAP_32:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
            /*SwitchType*/ 17,  MVT::i64,// ->11848
/*11831*/     OPC_CheckPredicate, 93, // Predicate_atomic_swap_64
/*11833*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11836*/     OPC_EmitMergeInputChains1_0,
/*11837*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_SWAP_64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_swap:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_swap_64>> - Complexity = 13
              // Dst: (ATOMIC_SWAP_64:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 46,  TARGET_VAL(ISD::ATOMIC_LOAD_SUB),// ->11898
/*11852*/   OPC_RecordMemRef,
/*11853*/   OPC_RecordNode,   // #0 = 'atomic_load_sub' chained node
/*11854*/   OPC_RecordChild1, // #1 = $ptr
/*11855*/   OPC_CheckChild1Type, MVT::i64,
/*11857*/   OPC_RecordChild2, // #2 = $src2
/*11858*/   OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->11878
/*11861*/     OPC_CheckPredicate, 94, // Predicate_atomic_load_sub_32
/*11863*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11866*/     OPC_EmitMergeInputChains1_0,
/*11867*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_SR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_sub:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_sub_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_SR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
            /*SwitchType*/ 17,  MVT::i64,// ->11897
/*11880*/     OPC_CheckPredicate, 95, // Predicate_atomic_load_sub_64
/*11882*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11885*/     OPC_EmitMergeInputChains1_0,
/*11886*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_SGR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_sub:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_sub_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_SGR:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 46,  TARGET_VAL(ISD::ATOMIC_LOAD_MIN),// ->11947
/*11901*/   OPC_RecordMemRef,
/*11902*/   OPC_RecordNode,   // #0 = 'atomic_load_min' chained node
/*11903*/   OPC_RecordChild1, // #1 = $ptr
/*11904*/   OPC_CheckChild1Type, MVT::i64,
/*11906*/   OPC_RecordChild2, // #2 = $src2
/*11907*/   OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->11927
/*11910*/     OPC_CheckPredicate, 96, // Predicate_atomic_load_min_32
/*11912*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11915*/     OPC_EmitMergeInputChains1_0,
/*11916*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_MIN_32), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_min:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_min_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_MIN_32:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
            /*SwitchType*/ 17,  MVT::i64,// ->11946
/*11929*/     OPC_CheckPredicate, 97, // Predicate_atomic_load_min_64
/*11931*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11934*/     OPC_EmitMergeInputChains1_0,
/*11935*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_MIN_64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_min:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_min_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_MIN_64:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 46,  TARGET_VAL(ISD::ATOMIC_LOAD_MAX),// ->11996
/*11950*/   OPC_RecordMemRef,
/*11951*/   OPC_RecordNode,   // #0 = 'atomic_load_max' chained node
/*11952*/   OPC_RecordChild1, // #1 = $ptr
/*11953*/   OPC_CheckChild1Type, MVT::i64,
/*11955*/   OPC_RecordChild2, // #2 = $src2
/*11956*/   OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->11976
/*11959*/     OPC_CheckPredicate, 98, // Predicate_atomic_load_max_32
/*11961*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11964*/     OPC_EmitMergeInputChains1_0,
/*11965*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_MAX_32), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_max:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_max_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_MAX_32:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
            /*SwitchType*/ 17,  MVT::i64,// ->11995
/*11978*/     OPC_CheckPredicate, 99, // Predicate_atomic_load_max_64
/*11980*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11983*/     OPC_EmitMergeInputChains1_0,
/*11984*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_MAX_64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_max:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_max_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_MAX_64:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 46,  TARGET_VAL(ISD::ATOMIC_LOAD_UMIN),// ->12045
/*11999*/   OPC_RecordMemRef,
/*12000*/   OPC_RecordNode,   // #0 = 'atomic_load_umin' chained node
/*12001*/   OPC_RecordChild1, // #1 = $ptr
/*12002*/   OPC_CheckChild1Type, MVT::i64,
/*12004*/   OPC_RecordChild2, // #2 = $src2
/*12005*/   OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->12025
/*12008*/     OPC_CheckPredicate, 100, // Predicate_atomic_load_umin_32
/*12010*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*12013*/     OPC_EmitMergeInputChains1_0,
/*12014*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_UMIN_32), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_umin:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_umin_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_UMIN_32:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
            /*SwitchType*/ 17,  MVT::i64,// ->12044
/*12027*/     OPC_CheckPredicate, 101, // Predicate_atomic_load_umin_64
/*12029*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*12032*/     OPC_EmitMergeInputChains1_0,
/*12033*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_UMIN_64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_umin:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_umin_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_UMIN_64:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 46,  TARGET_VAL(ISD::ATOMIC_LOAD_UMAX),// ->12094
/*12048*/   OPC_RecordMemRef,
/*12049*/   OPC_RecordNode,   // #0 = 'atomic_load_umax' chained node
/*12050*/   OPC_RecordChild1, // #1 = $ptr
/*12051*/   OPC_CheckChild1Type, MVT::i64,
/*12053*/   OPC_RecordChild2, // #2 = $src2
/*12054*/   OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->12074
/*12057*/     OPC_CheckPredicate, 102, // Predicate_atomic_load_umax_32
/*12059*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*12062*/     OPC_EmitMergeInputChains1_0,
/*12063*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_UMAX_32), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_umax:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_umax_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_UMAX_32:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
            /*SwitchType*/ 17,  MVT::i64,// ->12093
/*12076*/     OPC_CheckPredicate, 103, // Predicate_atomic_load_umax_64
/*12078*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*12081*/     OPC_EmitMergeInputChains1_0,
/*12082*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_UMAX_64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_umax:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_umax_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_UMAX_64:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 47,  TARGET_VAL(ISD::FrameIndex),// ->12144
/*12097*/   OPC_RecordNode,   // #0 = $src
/*12098*/   OPC_CheckType, MVT::i64,
/*12100*/   OPC_Scope, 13, /*->12115*/ // 3 children in Scope
/*12102*/     OPC_CheckComplexPat, /*CP*/11, /*#*/0, // selectDynAlloc12Only:$src #1 #2 #3
/*12105*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJDYNALLOC), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: dynalloc12only:i64:$src - Complexity = 12
              // Dst: (ADJDYNALLOC:i64 dynalloc12only:i64:$src)
/*12115*/   /*Scope*/ 13, /*->12129*/
/*12116*/     OPC_CheckComplexPat, /*CP*/12, /*#*/0, // selectLAAddr12Pair:$XBD2 #1 #2 #3
/*12119*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: laaddr12pair:i64:$XBD2 - Complexity = 12
              // Dst: (LA:i64 laaddr12pair:i64:$XBD2)
/*12129*/   /*Scope*/ 13, /*->12143*/
/*12130*/     OPC_CheckComplexPat, /*CP*/13, /*#*/0, // selectLAAddr20Pair:$XBD2 #1 #2 #3
/*12133*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LAY), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: laaddr20pair:i64:$XBD2 - Complexity = 12
              // Dst: (LAY:i64 laaddr20pair:i64:$XBD2)
/*12143*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 47,  TARGET_VAL(SystemZISD::ADJDYNALLOC),// ->12194
/*12147*/   OPC_RecordNode,   // #0 = $src
/*12148*/   OPC_CheckType, MVT::i64,
/*12150*/   OPC_Scope, 13, /*->12165*/ // 3 children in Scope
/*12152*/     OPC_CheckComplexPat, /*CP*/11, /*#*/0, // selectDynAlloc12Only:$src #1 #2 #3
/*12155*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJDYNALLOC), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: dynalloc12only:i64:$src - Complexity = 12
              // Dst: (ADJDYNALLOC:i64 dynalloc12only:i64:$src)
/*12165*/   /*Scope*/ 13, /*->12179*/
/*12166*/     OPC_CheckComplexPat, /*CP*/12, /*#*/0, // selectLAAddr12Pair:$XBD2 #1 #2 #3
/*12169*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: laaddr12pair:i64:$XBD2 - Complexity = 12
              // Dst: (LA:i64 laaddr12pair:i64:$XBD2)
/*12179*/   /*Scope*/ 13, /*->12193*/
/*12180*/     OPC_CheckComplexPat, /*CP*/13, /*#*/0, // selectLAAddr20Pair:$XBD2 #1 #2 #3
/*12183*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LAY), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: laaddr20pair:i64:$XBD2 - Complexity = 12
              // Dst: (LAY:i64 laaddr20pair:i64:$XBD2)
/*12193*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 36,  TARGET_VAL(ISD::SHL),// ->12233
/*12197*/   OPC_RecordChild0, // #0 = $R1src
/*12198*/   OPC_RecordChild1, // #1 = $BD2
/*12199*/   OPC_CheckChild1Type, MVT::i32,
/*12201*/   OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->12217
/*12204*/     OPC_CheckComplexPat, /*CP*/9, /*#*/1, // selectBDAddr12Only:$BD2 #2 #3
/*12207*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLL), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 2, 3, 
              // Src: (shl:i32 GR32:i32:$R1src, shift12only:i32:$BD2) - Complexity = 12
              // Dst: (SLL:i32 GR32:i32:$R1src, shift12only:i32:$BD2)
            /*SwitchType*/ 13,  MVT::i64,// ->12232
/*12219*/     OPC_CheckComplexPat, /*CP*/10, /*#*/1, // selectBDAddr20Only:$BD2 #2 #3
/*12222*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLLG), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
              // Src: (shl:i64 GR64:i64:$R3, shift20only:i32:$BD2) - Complexity = 12
              // Dst: (SLLG:i64 GR64:i64:$R3, shift20only:i32:$BD2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 36,  TARGET_VAL(ISD::SRL),// ->12272
/*12236*/   OPC_RecordChild0, // #0 = $R1src
/*12237*/   OPC_RecordChild1, // #1 = $BD2
/*12238*/   OPC_CheckChild1Type, MVT::i32,
/*12240*/   OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->12256
/*12243*/     OPC_CheckComplexPat, /*CP*/9, /*#*/1, // selectBDAddr12Only:$BD2 #2 #3
/*12246*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::SRL), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 2, 3, 
              // Src: (srl:i32 GR32:i32:$R1src, shift12only:i32:$BD2) - Complexity = 12
              // Dst: (SRL:i32 GR32:i32:$R1src, shift12only:i32:$BD2)
            /*SwitchType*/ 13,  MVT::i64,// ->12271
/*12258*/     OPC_CheckComplexPat, /*CP*/10, /*#*/1, // selectBDAddr20Only:$BD2 #2 #3
/*12261*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::SRLG), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
              // Src: (srl:i64 GR64:i64:$R3, shift20only:i32:$BD2) - Complexity = 12
              // Dst: (SRLG:i64 GR64:i64:$R3, shift20only:i32:$BD2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 36,  TARGET_VAL(ISD::ROTL),// ->12311
/*12275*/   OPC_RecordChild0, // #0 = $R3
/*12276*/   OPC_RecordChild1, // #1 = $BD2
/*12277*/   OPC_CheckChild1Type, MVT::i32,
/*12279*/   OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->12295
/*12282*/     OPC_CheckComplexPat, /*CP*/10, /*#*/1, // selectBDAddr20Only:$BD2 #2 #3
/*12285*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::RLL), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 2, 3, 
              // Src: (rotl:i32 GR32:i32:$R3, shift20only:i32:$BD2) - Complexity = 12
              // Dst: (RLL:i32 GR32:i32:$R3, shift20only:i32:$BD2)
            /*SwitchType*/ 13,  MVT::i64,// ->12310
/*12297*/     OPC_CheckComplexPat, /*CP*/10, /*#*/1, // selectBDAddr20Only:$BD2 #2 #3
/*12300*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::RLLG), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
              // Src: (rotl:i64 GR64:i64:$R3, shift20only:i32:$BD2) - Complexity = 12
              // Dst: (RLLG:i64 GR64:i64:$R3, shift20only:i32:$BD2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 19,  TARGET_VAL(SystemZISD::EXTRACT_ACCESS),// ->12333
/*12314*/   OPC_RecordChild0, // #0 = $R2
/*12315*/   OPC_MoveChild, 0,
/*12317*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12320*/   OPC_CheckPredicate, 104, // Predicate_access_reg
/*12322*/   OPC_MoveParent,
/*12323*/   OPC_EmitConvertToTarget, 0,
/*12325*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::EAR), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
            // Src: (z_extract_access:i32 (imm:i8)<<P:Predicate_access_reg>>:$R2) - Complexity = 7
            // Dst: (EAR:i32 (imm:i8):$R2)
          /*SwitchOpcode*/ 14,  TARGET_VAL(SystemZISD::PCREL_WRAPPER),// ->12350
/*12336*/   OPC_RecordNode,   // #0 = $I2
/*12337*/   OPC_CheckType, MVT::i64,
/*12339*/   OPC_CheckComplexPat, /*CP*/5, /*#*/0, // selectPCRelAddress:$I2 #1
/*12342*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::LARL), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
            // Src: pcrel32:i64:$I2 - Complexity = 6
            // Dst: (LARL:i64 pcrel32:i64:$I2)
          /*SwitchOpcode*/ 98|128,1/*226*/,  TARGET_VAL(ISD::Constant),// ->12580
/*12354*/   OPC_RecordNode,   // #0 = $I2
/*12355*/   OPC_SwitchType /*2 cases */, 88,  MVT::i32,// ->12446
/*12358*/     OPC_Scope, 15, /*->12375*/ // 4 children in Scope
/*12360*/       OPC_CheckPredicate, 34, // Predicate_imm32sx16
/*12362*/       OPC_EmitConvertToTarget, 0,
/*12364*/       OPC_EmitNodeXForm, 2, 1, // SIMM16
/*12367*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LHI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2 - Complexity = 4
                // Dst: (LHI:i32 (SIMM16:i32 (imm:i32):$I2))
/*12375*/     /*Scope*/ 27, /*->12403*/
/*12376*/       OPC_CheckPredicate, 42, // Predicate_imm32ll16
/*12378*/       OPC_EmitConvertToTarget, 0,
/*12380*/       OPC_EmitNodeXForm, 3, 1, // LL16
/*12383*/       OPC_EmitNode, TARGET_VAL(SystemZ::LLILL), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2,  // Results = #3
/*12391*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*12394*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                // Src: (imm:i32)<<P:Predicate_imm32ll16>><<X:LL16>>:$src - Complexity = 4
                // Dst: (EXTRACT_SUBREG:i32 (LLILL:i64 (LL16:i64 (imm:i32):$src)), subreg_32bit:i32)
/*12403*/     /*Scope*/ 27, /*->12431*/
/*12404*/       OPC_CheckPredicate, 43, // Predicate_imm32lh16
/*12406*/       OPC_EmitConvertToTarget, 0,
/*12408*/       OPC_EmitNodeXForm, 4, 1, // LH16
/*12411*/       OPC_EmitNode, TARGET_VAL(SystemZ::LLILH), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2,  // Results = #3
/*12419*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*12422*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                // Src: (imm:i32)<<P:Predicate_imm32lh16>><<X:LH16>>:$src - Complexity = 4
                // Dst: (EXTRACT_SUBREG:i32 (LLILH:i64 (LH16:i64 (imm:i32):$src)), subreg_32bit:i32)
/*12431*/     /*Scope*/ 13, /*->12445*/
/*12432*/       OPC_EmitConvertToTarget, 0,
/*12434*/       OPC_EmitNodeXForm, 9, 1, // UIMM32
/*12437*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::IILF32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (imm:i32)<<X:UIMM32>>:$I2 - Complexity = 3
                // Dst: (IILF32:i32 (UIMM32:i32 (imm:i32):$I2))
/*12445*/     0, /*End of Scope*/
            /*SwitchType*/ 2|128,1/*130*/,  MVT::i64,// ->12579
/*12449*/     OPC_Scope, 15, /*->12466*/ // 8 children in Scope
/*12451*/       OPC_CheckPredicate, 35, // Predicate_imm64sx16
/*12453*/       OPC_EmitConvertToTarget, 0,
/*12455*/       OPC_EmitNodeXForm, 2, 1, // SIMM16
/*12458*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGHI), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$I2 - Complexity = 4
                // Dst: (LGHI:i64 (SIMM16:i64 (imm:i64):$I2))
/*12466*/     /*Scope*/ 15, /*->12482*/
/*12467*/       OPC_CheckPredicate, 44, // Predicate_imm64ll16
/*12469*/       OPC_EmitConvertToTarget, 0,
/*12471*/       OPC_EmitNodeXForm, 3, 1, // LL16
/*12474*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLILL), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64ll16>><<X:LL16>>:$I2 - Complexity = 4
                // Dst: (LLILL:i64 (LL16:i64 (imm:i64):$I2))
/*12482*/     /*Scope*/ 15, /*->12498*/
/*12483*/       OPC_CheckPredicate, 45, // Predicate_imm64lh16
/*12485*/       OPC_EmitConvertToTarget, 0,
/*12487*/       OPC_EmitNodeXForm, 4, 1, // LH16
/*12490*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLILH), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64lh16>><<X:LH16>>:$I2 - Complexity = 4
                // Dst: (LLILH:i64 (LH16:i64 (imm:i64):$I2))
/*12498*/     /*Scope*/ 15, /*->12514*/
/*12499*/       OPC_CheckPredicate, 46, // Predicate_imm64hl16
/*12501*/       OPC_EmitConvertToTarget, 0,
/*12503*/       OPC_EmitNodeXForm, 5, 1, // HL16
/*12506*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLIHL), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64hl16>><<X:HL16>>:$I2 - Complexity = 4
                // Dst: (LLIHL:i64 (HL16:i64 (imm:i64):$I2))
/*12514*/     /*Scope*/ 15, /*->12530*/
/*12515*/       OPC_CheckPredicate, 47, // Predicate_imm64hh16
/*12517*/       OPC_EmitConvertToTarget, 0,
/*12519*/       OPC_EmitNodeXForm, 6, 1, // HH16
/*12522*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLIHH), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64hh16>><<X:HH16>>:$I2 - Complexity = 4
                // Dst: (LLIHH:i64 (HH16:i64 (imm:i64):$I2))
/*12530*/     /*Scope*/ 15, /*->12546*/
/*12531*/       OPC_CheckPredicate, 56, // Predicate_imm64sx32
/*12533*/       OPC_EmitConvertToTarget, 0,
/*12535*/       OPC_EmitNodeXForm, 10, 1, // SIMM32
/*12538*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGFI), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64sx32>><<X:SIMM32>>:$I2 - Complexity = 4
                // Dst: (LGFI:i64 (SIMM32:i64 (imm:i64):$I2))
/*12546*/     /*Scope*/ 15, /*->12562*/
/*12547*/       OPC_CheckPredicate, 48, // Predicate_imm64lf32
/*12549*/       OPC_EmitConvertToTarget, 0,
/*12551*/       OPC_EmitNodeXForm, 7, 1, // LF32
/*12554*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLILF), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64lf32>><<X:LF32>>:$I2 - Complexity = 4
                // Dst: (LLILF:i64 (LF32:i64 (imm:i64):$I2))
/*12562*/     /*Scope*/ 15, /*->12578*/
/*12563*/       OPC_CheckPredicate, 49, // Predicate_imm64hf32
/*12565*/       OPC_EmitConvertToTarget, 0,
/*12567*/       OPC_EmitNodeXForm, 8, 1, // HF32
/*12570*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLIHF), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$I2 - Complexity = 4
                // Dst: (LLIHF:i64 (HF32:i64 (imm:i64):$I2))
/*12578*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 81,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->12664
/*12583*/   OPC_RecordChild0, // #0 = $R2
/*12584*/   OPC_MoveChild, 1,
/*12586*/   OPC_Scope, 25, /*->12613*/ // 3 children in Scope
/*12588*/     OPC_CheckValueType, MVT::i8,
/*12590*/     OPC_MoveParent,
/*12591*/     OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->12602
/*12594*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LBR), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 GR32:i32:$R2, i8:Other) - Complexity = 3
                // Dst: (LBR:i32 GR32:i32:$R2)
              /*SwitchType*/ 8,  MVT::i64,// ->12612
/*12604*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGBR), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 GR64:i64:$R2, i8:Other) - Complexity = 3
                // Dst: (LGBR:i64 GR64:i64:$R2)
              0, // EndSwitchType
/*12613*/   /*Scope*/ 25, /*->12639*/
/*12614*/     OPC_CheckValueType, MVT::i16,
/*12616*/     OPC_MoveParent,
/*12617*/     OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->12628
/*12620*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LHR), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 GR32:i32:$R2, i16:Other) - Complexity = 3
                // Dst: (LHR:i32 GR32:i32:$R2)
              /*SwitchType*/ 8,  MVT::i64,// ->12638
/*12630*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGHR), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 GR64:i64:$R2, i16:Other) - Complexity = 3
                // Dst: (LGHR:i64 GR64:i64:$R2)
              0, // EndSwitchType
/*12639*/   /*Scope*/ 23, /*->12663*/
/*12640*/     OPC_CheckValueType, MVT::i32,
/*12642*/     OPC_MoveParent,
/*12643*/     OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*12646*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*12655*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGFR), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
              // Src: (sext_inreg:i64 GR64:i64:$src, i32:Other) - Complexity = 3
              // Dst: (LGFR:i64 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_32bit:i32))
/*12663*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::SIGN_EXTEND),// ->12676
/*12667*/   OPC_RecordChild0, // #0 = $R2
/*12668*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGFR), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (sext:i64 GR32:i32:$R2) - Complexity = 3
            // Dst: (LGFR:i64 GR32:i32:$R2)
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::ZERO_EXTEND),// ->12688
/*12679*/   OPC_RecordChild0, // #0 = $R2
/*12680*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGFR), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (zext:i64 GR32:i32:$R2) - Complexity = 3
            // Dst: (LLGFR:i64 GR32:i32:$R2)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TRUNCATE),// ->12704
/*12691*/   OPC_RecordChild0, // #0 = $src
/*12692*/   OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*12695*/   OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (trunc:i32 GR64:i64:$src) - Complexity = 3
            // Dst: (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_32bit:i32)
          /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::BITCAST),// ->12734
/*12707*/   OPC_RecordChild0, // #0 = $R2
/*12708*/   OPC_SwitchType /*2 cases */, 10,  MVT::i64,// ->12721
/*12711*/     OPC_CheckChild0Type, MVT::f64,
/*12713*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGDR), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (bitconvert:i64 FP64:f64:$R2) - Complexity = 3
              // Dst: (LGDR:i64 FP64:f64:$R2)
            /*SwitchType*/ 10,  MVT::f64,// ->12733
/*12723*/     OPC_CheckChild0Type, MVT::i64,
/*12725*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LDGR), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (bitconvert:f64 GR64:i64:$R2) - Complexity = 3
              // Dst: (LDGR:f64 GR64:i64:$R2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 108,  TARGET_VAL(ISD::FP_TO_SINT),// ->12845
/*12737*/   OPC_RecordChild0, // #0 = $src
/*12738*/   OPC_Scope, 34, /*->12774*/ // 3 children in Scope
/*12740*/     OPC_CheckChild0Type, MVT::f32,
/*12742*/     OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->12758
/*12745*/       OPC_EmitInteger, MVT::i8, 5, 
/*12748*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CFEBR), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (fp_to_sint:i32 FP32:f32:$src) - Complexity = 3
                // Dst: (CFEBR:i32:i32 5:i8, FP32:f32:$src)
              /*SwitchType*/ 13,  MVT::i64,// ->12773
/*12760*/       OPC_EmitInteger, MVT::i8, 5, 
/*12763*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGEBR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (fp_to_sint:i64 FP32:f32:$src) - Complexity = 3
                // Dst: (CGEBR:i64:i32 5:i8, FP32:f32:$src)
              0, // EndSwitchType
/*12774*/   /*Scope*/ 34, /*->12809*/
/*12775*/     OPC_CheckChild0Type, MVT::f64,
/*12777*/     OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->12793
/*12780*/       OPC_EmitInteger, MVT::i8, 5, 
/*12783*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CFDBR), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (fp_to_sint:i32 FP64:f64:$src) - Complexity = 3
                // Dst: (CFDBR:i32:i32 5:i8, FP64:f64:$src)
              /*SwitchType*/ 13,  MVT::i64,// ->12808
/*12795*/       OPC_EmitInteger, MVT::i8, 5, 
/*12798*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGDBR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (fp_to_sint:i64 FP64:f64:$src) - Complexity = 3
                // Dst: (CGDBR:i64:i32 5:i8, FP64:f64:$src)
              0, // EndSwitchType
/*12809*/   /*Scope*/ 34, /*->12844*/
/*12810*/     OPC_CheckChild0Type, MVT::f128,
/*12812*/     OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->12828
/*12815*/       OPC_EmitInteger, MVT::i8, 5, 
/*12818*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CFXBR), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (fp_to_sint:i32 FP128:f128:$src) - Complexity = 3
                // Dst: (CFXBR:i32:i32 5:i8, FP128:f128:$src)
              /*SwitchType*/ 13,  MVT::i64,// ->12843
/*12830*/       OPC_EmitInteger, MVT::i8, 5, 
/*12833*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGXBR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (fp_to_sint:i64 FP128:f128:$src) - Complexity = 3
                // Dst: (CGXBR:i64:i32 5:i8, FP128:f128:$src)
              0, // EndSwitchType
/*12844*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 24,  TARGET_VAL(ISD::CTLZ),// ->12872
/*12848*/   OPC_RecordChild0, // #0 = $src
/*12849*/   OPC_CheckType, MVT::i64,
/*12851*/   OPC_EmitNode, TARGET_VAL(SystemZ::FLOGR), 0,
                2/*#VTs*/, MVT::Untyped, MVT::i32, 1/*#Ops*/, 0,  // Results = #1 #2
/*12860*/   OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*12863*/   OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 3, 
            // Src: (ctlz:i64 GR64:i64:$src) - Complexity = 3
            // Dst: (EXTRACT_SUBREG:i64 (FLOGR:Untyped:i32 GR64:i64:$src), subreg_high:i32)
          /*SwitchOpcode*/ 21,  TARGET_VAL(ISD::ANY_EXTEND),// ->12896
/*12875*/   OPC_RecordChild0, // #0 = $src
/*12876*/   OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                1/*#VTs*/, MVT::i64, 0/*#Ops*/,  // Results = #1
/*12883*/   OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*12886*/   OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
            // Src: (anyext:i64 GR32:i32:$src) - Complexity = 3
            // Dst: (INSERT_SUBREG:i64 (IMPLICIT_DEF:i64), GR32:i32:$src, subreg_32bit:i32)
          /*SwitchOpcode*/ 46|128,1/*174*/,  TARGET_VAL(ISD::FMA),// ->13074
/*12900*/   OPC_RecordChild0, // #0 = $R3
/*12901*/   OPC_Scope, 104, /*->13007*/ // 2 children in Scope
/*12903*/     OPC_MoveChild, 1,
/*12905*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*12908*/     OPC_RecordMemRef,
/*12909*/     OPC_RecordNode, // #1 = 'ld' chained node
/*12910*/     OPC_CheckFoldableChainNode,
/*12911*/     OPC_RecordChild1, // #2 = $XBD2
/*12912*/     OPC_CheckChild1Type, MVT::i64,
/*12914*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*12916*/     OPC_CheckPredicate, 13, // Predicate_load
/*12918*/     OPC_MoveParent,
/*12919*/     OPC_Scope, 45, /*->12966*/ // 2 children in Scope
/*12921*/       OPC_MoveChild, 2,
/*12923*/       OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*12926*/       OPC_RecordChild0, // #3 = $R1src
/*12927*/       OPC_MoveParent,
/*12928*/       OPC_SwitchType /*2 cases */, 16,  MVT::f32,// ->12947
/*12931*/         OPC_CheckComplexPat, /*CP*/14, /*#*/2, // selectBDXAddr12Only:$XBD2 #4 #5 #6
/*12934*/         OPC_EmitMergeInputChains1_1,
/*12935*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 5/*#Ops*/, 3, 0, 4, 5, 6, 
                  // Src: (fma:f32 FP32:f32:$R3, (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (fneg:f32 FP32:f32:$R1src)) - Complexity = 22
                  // Dst: (MSEB:f32 FP32:f32:$R1src, FP32:f32:$R3, bdxaddr12only:i64:$XBD2)
                /*SwitchType*/ 16,  MVT::f64,// ->12965
/*12949*/         OPC_CheckComplexPat, /*CP*/14, /*#*/2, // selectBDXAddr12Only:$XBD2 #4 #5 #6
/*12952*/         OPC_EmitMergeInputChains1_1,
/*12953*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSDB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 5/*#Ops*/, 3, 0, 4, 5, 6, 
                  // Src: (fma:f64 FP64:f64:$R3, (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (fneg:f64 FP64:f64:$R1src)) - Complexity = 22
                  // Dst: (MSDB:f64 FP64:f64:$R1src, FP64:f64:$R3, bdxaddr12only:i64:$XBD2)
                0, // EndSwitchType
/*12966*/     /*Scope*/ 39, /*->13006*/
/*12967*/       OPC_RecordChild2, // #3 = $R1src
/*12968*/       OPC_SwitchType /*2 cases */, 16,  MVT::f32,// ->12987
/*12971*/         OPC_CheckComplexPat, /*CP*/14, /*#*/2, // selectBDXAddr12Only:$XBD2 #4 #5 #6
/*12974*/         OPC_EmitMergeInputChains1_1,
/*12975*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MAEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 5/*#Ops*/, 3, 0, 4, 5, 6, 
                  // Src: (fma:f32 FP32:f32:$R3, (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP32:f32:$R1src) - Complexity = 19
                  // Dst: (MAEB:f32 FP32:f32:$R1src, FP32:f32:$R3, bdxaddr12only:i64:$XBD2)
                /*SwitchType*/ 16,  MVT::f64,// ->13005
/*12989*/         OPC_CheckComplexPat, /*CP*/14, /*#*/2, // selectBDXAddr12Only:$XBD2 #4 #5 #6
/*12992*/         OPC_EmitMergeInputChains1_1,
/*12993*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MADB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 5/*#Ops*/, 3, 0, 4, 5, 6, 
                  // Src: (fma:f64 FP64:f64:$R3, (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP64:f64:$R1src) - Complexity = 19
                  // Dst: (MADB:f64 FP64:f64:$R1src, FP64:f64:$R3, bdxaddr12only:i64:$XBD2)
                0, // EndSwitchType
/*13006*/     0, /*End of Scope*/
/*13007*/   /*Scope*/ 65, /*->13073*/
/*13008*/     OPC_RecordChild1, // #1 = $R2
/*13009*/     OPC_Scope, 33, /*->13044*/ // 2 children in Scope
/*13011*/       OPC_MoveChild, 2,
/*13013*/       OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*13016*/       OPC_RecordChild0, // #2 = $R1src
/*13017*/       OPC_MoveParent,
/*13018*/       OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->13031
/*13021*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSEBR), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fma:f32 FP32:f32:$R3, FP32:f32:$R2, (fneg:f32 FP32:f32:$R1src)) - Complexity = 6
                  // Dst: (MSEBR:f32 FP32:f32:$R1src, FP32:f32:$R3, FP32:f32:$R2)
                /*SwitchType*/ 10,  MVT::f64,// ->13043
/*13033*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSDBR), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fma:f64 FP64:f64:$R3, FP64:f64:$R2, (fneg:f64 FP64:f64:$R1src)) - Complexity = 6
                  // Dst: (MSDBR:f64 FP64:f64:$R1src, FP64:f64:$R3, FP64:f64:$R2)
                0, // EndSwitchType
/*13044*/     /*Scope*/ 27, /*->13072*/
/*13045*/       OPC_RecordChild2, // #2 = $R1src
/*13046*/       OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->13059
/*13049*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MAEBR), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fma:f32 FP32:f32:$R3, FP32:f32:$R2, FP32:f32:$R1src) - Complexity = 3
                  // Dst: (MAEBR:f32 FP32:f32:$R1src, FP32:f32:$R3, FP32:f32:$R2)
                /*SwitchType*/ 10,  MVT::f64,// ->13071
/*13061*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MADBR), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fma:f64 FP64:f64:$R3, FP64:f64:$R2, FP64:f64:$R1src) - Complexity = 3
                  // Dst: (MADBR:f64 FP64:f64:$R1src, FP64:f64:$R3, FP64:f64:$R2)
                0, // EndSwitchType
/*13072*/     0, /*End of Scope*/
/*13073*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 98|128,3/*482*/,  TARGET_VAL(ISD::FMUL),// ->13560
/*13078*/   OPC_Scope, 111|128,1/*239*/, /*->13320*/ // 4 children in Scope
/*13081*/     OPC_MoveChild, 0,
/*13083*/     OPC_SwitchOpcode /*2 cases */, 119,  TARGET_VAL(ISD::FP_EXTEND),// ->13206
/*13087*/       OPC_RecordChild0, // #0 = $src1
/*13088*/       OPC_Scope, 56, /*->13146*/ // 2 children in Scope
/*13090*/         OPC_MoveParent,
/*13091*/         OPC_MoveChild, 1,
/*13093*/         OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*13096*/         OPC_RecordMemRef,
/*13097*/         OPC_RecordNode, // #1 = 'ld' chained node
/*13098*/         OPC_CheckFoldableChainNode,
/*13099*/         OPC_RecordChild1, // #2 = $addr
/*13100*/         OPC_CheckChild1Type, MVT::i64,
/*13102*/         OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13104*/         OPC_CheckPredicate, 70, // Predicate_extload
/*13106*/         OPC_CheckPredicate, 78, // Predicate_extloadf32
/*13108*/         OPC_MoveParent,
/*13109*/         OPC_CheckType, MVT::f64,
/*13111*/         OPC_CheckComplexPat, /*CP*/14, /*#*/2, // selectBDXAddr12Only:$addr #3 #4 #5
/*13114*/         OPC_EmitMergeInputChains1_1,
/*13115*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::f64, 0/*#Ops*/,  // Results = #6
/*13122*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*13125*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 6, 0, 7,  // Results = #8
/*13135*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MDEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 4/*#Ops*/, 8, 3, 4, 5, 
                  // Src: (fmul:f64 (fextend:f64 FP32:f32:$src1), (ld:f64 bdxaddr12only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>>) - Complexity = 22
                  // Dst: (MDEB:f64 (INSERT_SUBREG:f64 (IMPLICIT_DEF:f64), FP32:f32:$src1, subreg_32bit:i32), bdxaddr12only:i64:$addr)
/*13146*/       /*Scope*/ 58, /*->13205*/
/*13147*/         OPC_CheckChild0Type, MVT::f64,
/*13149*/         OPC_MoveParent,
/*13150*/         OPC_MoveChild, 1,
/*13152*/         OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*13155*/         OPC_RecordMemRef,
/*13156*/         OPC_RecordNode, // #1 = 'ld' chained node
/*13157*/         OPC_CheckFoldableChainNode,
/*13158*/         OPC_RecordChild1, // #2 = $addr
/*13159*/         OPC_CheckChild1Type, MVT::i64,
/*13161*/         OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13163*/         OPC_CheckPredicate, 70, // Predicate_extload
/*13165*/         OPC_CheckPredicate, 79, // Predicate_extloadf64
/*13167*/         OPC_MoveParent,
/*13168*/         OPC_CheckType, MVT::f128,
/*13170*/         OPC_CheckComplexPat, /*CP*/14, /*#*/2, // selectBDXAddr12Only:$addr #3 #4 #5
/*13173*/         OPC_EmitMergeInputChains1_1,
/*13174*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::f128, 0/*#Ops*/,  // Results = #6
/*13181*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*13184*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::f128, 3/*#Ops*/, 6, 0, 7,  // Results = #8
/*13194*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MXDB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f128, 4/*#Ops*/, 8, 3, 4, 5, 
                  // Src: (fmul:f128 (fextend:f128 FP64:f64:$src1), (ld:f128 bdxaddr12only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf64>>) - Complexity = 22
                  // Dst: (MXDB:f128 (INSERT_SUBREG:f128 (IMPLICIT_DEF:f128), FP64:f64:$src1, subreg_high:i32), bdxaddr12only:i64:$addr)
/*13205*/       0, /*End of Scope*/
              /*SwitchOpcode*/ 110,  TARGET_VAL(ISD::LOAD),// ->13319
/*13209*/       OPC_RecordMemRef,
/*13210*/       OPC_RecordNode, // #0 = 'ld' chained node
/*13211*/       OPC_CheckFoldableChainNode,
/*13212*/       OPC_RecordChild1, // #1 = $addr
/*13213*/       OPC_CheckChild1Type, MVT::i64,
/*13215*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13217*/       OPC_CheckPredicate, 70, // Predicate_extload
/*13219*/       OPC_Scope, 47, /*->13268*/ // 2 children in Scope
/*13221*/         OPC_CheckPredicate, 78, // Predicate_extloadf32
/*13223*/         OPC_MoveParent,
/*13224*/         OPC_MoveChild, 1,
/*13226*/         OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*13229*/         OPC_RecordChild0, // #2 = $src1
/*13230*/         OPC_MoveParent,
/*13231*/         OPC_CheckType, MVT::f64,
/*13233*/         OPC_CheckComplexPat, /*CP*/14, /*#*/1, // selectBDXAddr12Only:$addr #3 #4 #5
/*13236*/         OPC_EmitMergeInputChains1_0,
/*13237*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::f64, 0/*#Ops*/,  // Results = #6
/*13244*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*13247*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 6, 2, 7,  // Results = #8
/*13257*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MDEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 4/*#Ops*/, 8, 3, 4, 5, 
                  // Src: (fmul:f64 (ld:f64 bdxaddr12only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>>, (fextend:f64 FP32:f32:$src1)) - Complexity = 22
                  // Dst: (MDEB:f64 (INSERT_SUBREG:f64 (IMPLICIT_DEF:f64), FP32:f32:$src1, subreg_32bit:i32), bdxaddr12only:i64:$addr)
/*13268*/       /*Scope*/ 49, /*->13318*/
/*13269*/         OPC_CheckPredicate, 79, // Predicate_extloadf64
/*13271*/         OPC_MoveParent,
/*13272*/         OPC_MoveChild, 1,
/*13274*/         OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*13277*/         OPC_RecordChild0, // #2 = $src1
/*13278*/         OPC_CheckChild0Type, MVT::f64,
/*13280*/         OPC_MoveParent,
/*13281*/         OPC_CheckType, MVT::f128,
/*13283*/         OPC_CheckComplexPat, /*CP*/14, /*#*/1, // selectBDXAddr12Only:$addr #3 #4 #5
/*13286*/         OPC_EmitMergeInputChains1_0,
/*13287*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::f128, 0/*#Ops*/,  // Results = #6
/*13294*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*13297*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::f128, 3/*#Ops*/, 6, 2, 7,  // Results = #8
/*13307*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MXDB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f128, 4/*#Ops*/, 8, 3, 4, 5, 
                  // Src: (fmul:f128 (ld:f128 bdxaddr12only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf64>>, (fextend:f128 FP64:f64:$src1)) - Complexity = 22
                  // Dst: (MXDB:f128 (INSERT_SUBREG:f128 (IMPLICIT_DEF:f128), FP64:f64:$src1, subreg_high:i32), bdxaddr12only:i64:$addr)
/*13318*/       0, /*End of Scope*/
              0, // EndSwitchOpcode
/*13320*/   /*Scope*/ 53, /*->13374*/
/*13321*/     OPC_RecordChild0, // #0 = $R1src
/*13322*/     OPC_MoveChild, 1,
/*13324*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*13327*/     OPC_RecordMemRef,
/*13328*/     OPC_RecordNode, // #1 = 'ld' chained node
/*13329*/     OPC_CheckFoldableChainNode,
/*13330*/     OPC_RecordChild1, // #2 = $XBD2
/*13331*/     OPC_CheckChild1Type, MVT::i64,
/*13333*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13335*/     OPC_CheckPredicate, 13, // Predicate_load
/*13337*/     OPC_MoveParent,
/*13338*/     OPC_SwitchType /*2 cases */, 15,  MVT::f32,// ->13356
/*13341*/       OPC_CheckComplexPat, /*CP*/14, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*13344*/       OPC_EmitMergeInputChains1_1,
/*13345*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MEEB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fmul:f32 FP32:f32:$R1src, (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (MEEB:f32 FP32:f32:$R1src, bdxaddr12only:i64:$XBD2)
              /*SwitchType*/ 15,  MVT::f64,// ->13373
/*13358*/       OPC_CheckComplexPat, /*CP*/14, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*13361*/       OPC_EmitMergeInputChains1_1,
/*13362*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MDB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fmul:f64 FP64:f64:$R1src, (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (MDB:f64 FP64:f64:$R1src, bdxaddr12only:i64:$XBD2)
              0, // EndSwitchType
/*13374*/   /*Scope*/ 17|128,1/*145*/, /*->13521*/
/*13376*/     OPC_MoveChild, 0,
/*13378*/     OPC_SwitchOpcode /*2 cases */, 48,  TARGET_VAL(ISD::LOAD),// ->13430
/*13382*/       OPC_RecordMemRef,
/*13383*/       OPC_RecordNode, // #0 = 'ld' chained node
/*13384*/       OPC_CheckFoldableChainNode,
/*13385*/       OPC_RecordChild1, // #1 = $XBD2
/*13386*/       OPC_CheckChild1Type, MVT::i64,
/*13388*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13390*/       OPC_CheckPredicate, 13, // Predicate_load
/*13392*/       OPC_MoveParent,
/*13393*/       OPC_RecordChild1, // #2 = $R1src
/*13394*/       OPC_SwitchType /*2 cases */, 15,  MVT::f32,// ->13412
/*13397*/         OPC_CheckComplexPat, /*CP*/14, /*#*/1, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*13400*/         OPC_EmitMergeInputChains1_0,
/*13401*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MEEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (fmul:f32 (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP32:f32:$R1src) - Complexity = 19
                  // Dst: (MEEB:f32 FP32:f32:$R1src, bdxaddr12only:i64:$XBD2)
                /*SwitchType*/ 15,  MVT::f64,// ->13429
/*13414*/         OPC_CheckComplexPat, /*CP*/14, /*#*/1, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*13417*/         OPC_EmitMergeInputChains1_0,
/*13418*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MDB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (fmul:f64 (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP64:f64:$R1src) - Complexity = 19
                  // Dst: (MDB:f64 FP64:f64:$R1src, bdxaddr12only:i64:$XBD2)
                0, // EndSwitchType
              /*SwitchOpcode*/ 87,  TARGET_VAL(ISD::FP_EXTEND),// ->13520
/*13433*/       OPC_RecordChild0, // #0 = $src1
/*13434*/       OPC_Scope, 39, /*->13475*/ // 2 children in Scope
/*13436*/         OPC_MoveParent,
/*13437*/         OPC_MoveChild, 1,
/*13439*/         OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*13442*/         OPC_RecordChild0, // #1 = $src2
/*13443*/         OPC_MoveParent,
/*13444*/         OPC_CheckType, MVT::f64,
/*13446*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::f64, 0/*#Ops*/,  // Results = #2
/*13453*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*13456*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 3,  // Results = #4
/*13466*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MDEBR), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 4, 1, 
                  // Src: (fmul:f64 (fextend:f64 FP32:f32:$src1), (fextend:f64 FP32:f32:$src2)) - Complexity = 9
                  // Dst: (MDEBR:f64 (INSERT_SUBREG:f64 (IMPLICIT_DEF:f64), FP32:f32:$src1, subreg_32bit:i32), FP32:f32:$src2)
/*13475*/       /*Scope*/ 43, /*->13519*/
/*13476*/         OPC_CheckChild0Type, MVT::f64,
/*13478*/         OPC_MoveParent,
/*13479*/         OPC_MoveChild, 1,
/*13481*/         OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*13484*/         OPC_RecordChild0, // #1 = $src2
/*13485*/         OPC_CheckChild0Type, MVT::f64,
/*13487*/         OPC_MoveParent,
/*13488*/         OPC_CheckType, MVT::f128,
/*13490*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::f128, 0/*#Ops*/,  // Results = #2
/*13497*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*13500*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::f128, 3/*#Ops*/, 2, 0, 3,  // Results = #4
/*13510*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MXDBR), 0,
                      1/*#VTs*/, MVT::f128, 2/*#Ops*/, 4, 1, 
                  // Src: (fmul:f128 (fextend:f128 FP64:f64:$src1), (fextend:f128 FP64:f64:$src2)) - Complexity = 9
                  // Dst: (MXDBR:f128 (INSERT_SUBREG:f128 (IMPLICIT_DEF:f128), FP64:f64:$src1, subreg_high:i32), FP64:f64:$src2)
/*13519*/       0, /*End of Scope*/
              0, // EndSwitchOpcode
/*13521*/   /*Scope*/ 37, /*->13559*/
/*13522*/     OPC_RecordChild0, // #0 = $R1src
/*13523*/     OPC_RecordChild1, // #1 = $R2
/*13524*/     OPC_SwitchType /*3 cases */, 9,  MVT::f32,// ->13536
/*13527*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MEEBR), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f32 FP32:f32:$R1src, FP32:f32:$R2) - Complexity = 3
                // Dst: (MEEBR:f32 FP32:f32:$R1src, FP32:f32:$R2)
              /*SwitchType*/ 9,  MVT::f64,// ->13547
/*13538*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MDBR), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f64 FP64:f64:$R1src, FP64:f64:$R2) - Complexity = 3
                // Dst: (MDBR:f64 FP64:f64:$R1src, FP64:f64:$R2)
              /*SwitchType*/ 9,  MVT::f128,// ->13558
/*13549*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MXBR), 0,
                    1/*#VTs*/, MVT::f128, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f128 FP128:f128:$R1src, FP128:f128:$R2) - Complexity = 3
                // Dst: (MXBR:f128 FP128:f128:$R1src, FP128:f128:$R2)
              0, // EndSwitchType
/*13559*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 9|128,6/*777*/,  TARGET_VAL(SystemZISD::CMP),// ->14341
/*13564*/   OPC_Scope, 13|128,1/*141*/, /*->13708*/ // 3 children in Scope
/*13567*/     OPC_RecordChild0, // #0 = $R1
/*13568*/     OPC_Scope, 57, /*->13627*/ // 2 children in Scope
/*13570*/       OPC_CheckChild0Type, MVT::i32,
/*13572*/       OPC_MoveChild, 1,
/*13574*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*13577*/       OPC_RecordMemRef,
/*13578*/       OPC_RecordNode, // #1 = 'ld' chained node
/*13579*/       OPC_CheckFoldableChainNode,
/*13580*/       OPC_RecordChild1, // #2 = $I2
/*13581*/       OPC_CheckChild1Type, MVT::i64,
/*13583*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13585*/       OPC_Scope, 20, /*->13607*/ // 2 children in Scope
/*13587*/         OPC_CheckPredicate, 52, // Predicate_sextload
/*13589*/         OPC_CheckPredicate, 53, // Predicate_sextloadi16
/*13591*/         OPC_CheckPredicate, 68, // Predicate_aligned_sextloadi16
/*13593*/         OPC_MoveParent,
/*13594*/         OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*13597*/         OPC_EmitMergeInputChains1_1,
/*13598*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CHRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (z_cmp GR32:i32:$R1, (ld:i32 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_aligned_sextloadi16>>) - Complexity = 20
                  // Dst: (CHRL:i32 GR32:i32:$R1, pcrel32:i64:$I2)
/*13607*/       /*Scope*/ 18, /*->13626*/
/*13608*/         OPC_CheckPredicate, 13, // Predicate_load
/*13610*/         OPC_CheckPredicate, 67, // Predicate_aligned_load
/*13612*/         OPC_MoveParent,
/*13613*/         OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*13616*/         OPC_EmitMergeInputChains1_1,
/*13617*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (z_cmp GR32:i32:$R1, (ld:i32 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned_load>>) - Complexity = 20
                  // Dst: (CRL:i32 GR32:i32:$R1, pcrel32:i64:$I2)
/*13626*/       0, /*End of Scope*/
/*13627*/     /*Scope*/ 79, /*->13707*/
/*13628*/       OPC_CheckChild0Type, MVT::i64,
/*13630*/       OPC_MoveChild, 1,
/*13632*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*13635*/       OPC_RecordMemRef,
/*13636*/       OPC_RecordNode, // #1 = 'ld' chained node
/*13637*/       OPC_CheckFoldableChainNode,
/*13638*/       OPC_RecordChild1, // #2 = $I2
/*13639*/       OPC_CheckChild1Type, MVT::i64,
/*13641*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13643*/       OPC_Scope, 42, /*->13687*/ // 2 children in Scope
/*13645*/         OPC_CheckPredicate, 52, // Predicate_sextload
/*13647*/         OPC_Scope, 18, /*->13667*/ // 2 children in Scope
/*13649*/           OPC_CheckPredicate, 53, // Predicate_sextloadi16
/*13651*/           OPC_CheckPredicate, 68, // Predicate_aligned_sextloadi16
/*13653*/           OPC_MoveParent,
/*13654*/           OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*13657*/           OPC_EmitMergeInputChains1_1,
/*13658*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGHRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_cmp GR64:i64:$R1, (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_aligned_sextloadi16>>) - Complexity = 20
                    // Dst: (CGHRL:i32 GR64:i64:$R1, pcrel32:i64:$I2)
/*13667*/         /*Scope*/ 18, /*->13686*/
/*13668*/           OPC_CheckPredicate, 54, // Predicate_sextloadi32
/*13670*/           OPC_CheckPredicate, 69, // Predicate_aligned_sextloadi32
/*13672*/           OPC_MoveParent,
/*13673*/           OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*13676*/           OPC_EmitMergeInputChains1_1,
/*13677*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGFRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_cmp GR64:i64:$R1, (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>><<P:Predicate_aligned_sextloadi32>>) - Complexity = 20
                    // Dst: (CGFRL:i32 GR64:i64:$R1, pcrel32:i64:$I2)
/*13686*/         0, /*End of Scope*/
/*13687*/       /*Scope*/ 18, /*->13706*/
/*13688*/         OPC_CheckPredicate, 13, // Predicate_load
/*13690*/         OPC_CheckPredicate, 67, // Predicate_aligned_load
/*13692*/         OPC_MoveParent,
/*13693*/         OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*13696*/         OPC_EmitMergeInputChains1_1,
/*13697*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (z_cmp GR64:i64:$R1, (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned_load>>) - Complexity = 20
                  // Dst: (CGRL:i32 GR64:i64:$R1, pcrel32:i64:$I2)
/*13706*/       0, /*End of Scope*/
/*13707*/     0, /*End of Scope*/
/*13708*/   /*Scope*/ 118, /*->13827*/
/*13709*/     OPC_MoveChild, 0,
/*13711*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*13714*/     OPC_RecordMemRef,
/*13715*/     OPC_RecordNode, // #0 = 'ld' chained node
/*13716*/     OPC_CheckFoldableChainNode,
/*13717*/     OPC_RecordChild1, // #1 = $BD1
/*13718*/     OPC_CheckChild1Type, MVT::i64,
/*13720*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13722*/     OPC_Scope, 35, /*->13759*/ // 2 children in Scope
/*13724*/       OPC_CheckPredicate, 52, // Predicate_sextload
/*13726*/       OPC_CheckPredicate, 53, // Predicate_sextloadi16
/*13728*/       OPC_CheckType, MVT::i32,
/*13730*/       OPC_MoveParent,
/*13731*/       OPC_RecordChild1, // #2 = $I2
/*13732*/       OPC_MoveChild, 1,
/*13734*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13737*/       OPC_CheckPredicate, 34, // Predicate_imm32sx16
/*13739*/       OPC_MoveParent,
/*13740*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr12Only:$BD1 #3 #4
/*13743*/       OPC_EmitMergeInputChains1_0,
/*13744*/       OPC_EmitConvertToTarget, 2,
/*13746*/       OPC_EmitNodeXForm, 2, 5, // SIMM16
/*13749*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CHHSI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (z_cmp (ld:i32 bdaddr12only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2) - Complexity = 20
                // Dst: (CHHSI:i32 bdaddr12only:i64:$BD1, (SIMM16:i32 (imm:i32):$I2))
/*13759*/     /*Scope*/ 66, /*->13826*/
/*13760*/       OPC_CheckPredicate, 13, // Predicate_load
/*13762*/       OPC_SwitchType /*2 cases */, 29,  MVT::i32,// ->13794
/*13765*/         OPC_MoveParent,
/*13766*/         OPC_RecordChild1, // #2 = $I2
/*13767*/         OPC_MoveChild, 1,
/*13769*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13772*/         OPC_CheckPredicate, 34, // Predicate_imm32sx16
/*13774*/         OPC_MoveParent,
/*13775*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr12Only:$BD1 #3 #4
/*13778*/         OPC_EmitMergeInputChains1_0,
/*13779*/         OPC_EmitConvertToTarget, 2,
/*13781*/         OPC_EmitNodeXForm, 2, 5, // SIMM16
/*13784*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CHSI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (z_cmp (ld:i32 bdaddr12only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2) - Complexity = 20
                  // Dst: (CHSI:i32 bdaddr12only:i64:$BD1, (SIMM16:i32 (imm:i32):$I2))
                /*SwitchType*/ 29,  MVT::i64,// ->13825
/*13796*/         OPC_MoveParent,
/*13797*/         OPC_RecordChild1, // #2 = $I2
/*13798*/         OPC_MoveChild, 1,
/*13800*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13803*/         OPC_CheckPredicate, 35, // Predicate_imm64sx16
/*13805*/         OPC_MoveParent,
/*13806*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr12Only:$BD1 #3 #4
/*13809*/         OPC_EmitMergeInputChains1_0,
/*13810*/         OPC_EmitConvertToTarget, 2,
/*13812*/         OPC_EmitNodeXForm, 2, 5, // SIMM16
/*13815*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGHSI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (z_cmp (ld:i64 bdaddr12only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$I2) - Complexity = 20
                  // Dst: (CGHSI:i32 bdaddr12only:i64:$BD1, (SIMM16:i64 (imm:i64):$I2))
                0, // EndSwitchType
/*13826*/     0, /*End of Scope*/
/*13827*/   /*Scope*/ 127|128,3/*511*/, /*->14340*/
/*13829*/     OPC_RecordChild0, // #0 = $R1
/*13830*/     OPC_Scope, 13|128,1/*141*/, /*->13974*/ // 11 children in Scope
/*13833*/       OPC_CheckChild0Type, MVT::i32,
/*13835*/       OPC_Scope, 93, /*->13930*/ // 2 children in Scope
/*13837*/         OPC_MoveChild, 1,
/*13839*/         OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*13842*/         OPC_RecordMemRef,
/*13843*/         OPC_RecordNode, // #1 = 'ld' chained node
/*13844*/         OPC_CheckFoldableChainNode,
/*13845*/         OPC_RecordChild1, // #2 = $XBD2
/*13846*/         OPC_CheckChild1Type, MVT::i64,
/*13848*/         OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13850*/         OPC_Scope, 39, /*->13891*/ // 2 children in Scope
/*13852*/           OPC_CheckPredicate, 52, // Predicate_sextload
/*13854*/           OPC_CheckPredicate, 53, // Predicate_sextloadi16
/*13856*/           OPC_MoveParent,
/*13857*/           OPC_Scope, 15, /*->13874*/ // 2 children in Scope
/*13859*/             OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*13862*/             OPC_EmitMergeInputChains1_1,
/*13863*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::CH), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_cmp GR32:i32:$R1, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                      // Dst: (CH:i32 GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)
/*13874*/           /*Scope*/ 15, /*->13890*/
/*13875*/             OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*13878*/             OPC_EmitMergeInputChains1_1,
/*13879*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::CHY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_cmp GR32:i32:$R1, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                      // Dst: (CHY:i32 GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)
/*13890*/           0, /*End of Scope*/
/*13891*/         /*Scope*/ 37, /*->13929*/
/*13892*/           OPC_CheckPredicate, 13, // Predicate_load
/*13894*/           OPC_MoveParent,
/*13895*/           OPC_Scope, 15, /*->13912*/ // 2 children in Scope
/*13897*/             OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*13900*/             OPC_EmitMergeInputChains1_1,
/*13901*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::C), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_cmp GR32:i32:$R1, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                      // Dst: (C:i32 GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)
/*13912*/           /*Scope*/ 15, /*->13928*/
/*13913*/             OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*13916*/             OPC_EmitMergeInputChains1_1,
/*13917*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::CY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_cmp GR32:i32:$R1, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                      // Dst: (CY:i32 GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)
/*13928*/           0, /*End of Scope*/
/*13929*/         0, /*End of Scope*/
/*13930*/       /*Scope*/ 42, /*->13973*/
/*13931*/         OPC_RecordChild1, // #1 = $I2
/*13932*/         OPC_MoveChild, 1,
/*13934*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13937*/         OPC_Scope, 17, /*->13956*/ // 2 children in Scope
/*13939*/           OPC_CheckPredicate, 34, // Predicate_imm32sx16
/*13941*/           OPC_MoveParent,
/*13942*/           OPC_EmitConvertToTarget, 1,
/*13944*/           OPC_EmitNodeXForm, 2, 2, // SIMM16
/*13947*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CHI), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_cmp GR32:i32:$R1, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2) - Complexity = 7
                    // Dst: (CHI:i32 GR32:i32:$R1, (SIMM16:i32 (imm:i32):$I2))
/*13956*/         /*Scope*/ 15, /*->13972*/
/*13957*/           OPC_MoveParent,
/*13958*/           OPC_EmitConvertToTarget, 1,
/*13960*/           OPC_EmitNodeXForm, 10, 2, // SIMM32
/*13963*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CFI), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_cmp GR32:i32:$R1, (imm:i32)<<X:SIMM32>>:$I2) - Complexity = 6
                    // Dst: (CFI:i32 GR32:i32:$R1, (SIMM32:i32 (imm:i32):$I2))
/*13972*/         0, /*End of Scope*/
/*13973*/       0, /*End of Scope*/
/*13974*/     /*Scope*/ 127, /*->14102*/
/*13975*/       OPC_CheckChild0Type, MVT::i64,
/*13977*/       OPC_Scope, 77, /*->14056*/ // 2 children in Scope
/*13979*/         OPC_MoveChild, 1,
/*13981*/         OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*13984*/         OPC_RecordMemRef,
/*13985*/         OPC_RecordNode, // #1 = 'ld' chained node
/*13986*/         OPC_CheckFoldableChainNode,
/*13987*/         OPC_RecordChild1, // #2 = $XBD2
/*13988*/         OPC_CheckChild1Type, MVT::i64,
/*13990*/         OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13992*/         OPC_Scope, 42, /*->14036*/ // 2 children in Scope
/*13994*/           OPC_CheckPredicate, 52, // Predicate_sextload
/*13996*/           OPC_Scope, 18, /*->14016*/ // 2 children in Scope
/*13998*/             OPC_CheckPredicate, 53, // Predicate_sextloadi16
/*14000*/             OPC_MoveParent,
/*14001*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*14004*/             OPC_EmitMergeInputChains1_1,
/*14005*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGH), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_cmp GR64:i64:$R1, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                      // Dst: (CGH:i32 GR64:i64:$R1, bdxaddr20only:i64:$XBD2)
/*14016*/           /*Scope*/ 18, /*->14035*/
/*14017*/             OPC_CheckPredicate, 54, // Predicate_sextloadi32
/*14019*/             OPC_MoveParent,
/*14020*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*14023*/             OPC_EmitMergeInputChains1_1,
/*14024*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGF), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_cmp GR64:i64:$R1, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>) - Complexity = 19
                      // Dst: (CGF:i32 GR64:i64:$R1, bdxaddr20only:i64:$XBD2)
/*14035*/           0, /*End of Scope*/
/*14036*/         /*Scope*/ 18, /*->14055*/
/*14037*/           OPC_CheckPredicate, 13, // Predicate_load
/*14039*/           OPC_MoveParent,
/*14040*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*14043*/           OPC_EmitMergeInputChains1_1,
/*14044*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CG), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (z_cmp GR64:i64:$R1, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (CG:i32 GR64:i64:$R1, bdxaddr20only:i64:$XBD2)
/*14055*/         0, /*End of Scope*/
/*14056*/       /*Scope*/ 44, /*->14101*/
/*14057*/         OPC_RecordChild1, // #1 = $I2
/*14058*/         OPC_MoveChild, 1,
/*14060*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14063*/         OPC_Scope, 17, /*->14082*/ // 2 children in Scope
/*14065*/           OPC_CheckPredicate, 35, // Predicate_imm64sx16
/*14067*/           OPC_MoveParent,
/*14068*/           OPC_EmitConvertToTarget, 1,
/*14070*/           OPC_EmitNodeXForm, 2, 2, // SIMM16
/*14073*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGHI), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_cmp GR64:i64:$R1, (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$I2) - Complexity = 7
                    // Dst: (CGHI:i32 GR64:i64:$R1, (SIMM16:i64 (imm:i64):$I2))
/*14082*/         /*Scope*/ 17, /*->14100*/
/*14083*/           OPC_CheckPredicate, 56, // Predicate_imm64sx32
/*14085*/           OPC_MoveParent,
/*14086*/           OPC_EmitConvertToTarget, 1,
/*14088*/           OPC_EmitNodeXForm, 10, 2, // SIMM32
/*14091*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGFI), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_cmp GR64:i64:$R1, (imm:i64)<<P:Predicate_imm64sx32>><<X:SIMM32>>:$I2) - Complexity = 7
                    // Dst: (CGFI:i32 GR64:i64:$R1, (SIMM32:i64 (imm:i64):$I2))
/*14100*/         0, /*End of Scope*/
/*14101*/       0, /*End of Scope*/
/*14102*/     /*Scope*/ 50, /*->14153*/
/*14103*/       OPC_CheckChild0Type, MVT::f32,
/*14105*/       OPC_MoveChild, 1,
/*14107*/       OPC_SwitchOpcode /*2 cases */, 26,  TARGET_VAL(ISD::LOAD),// ->14137
/*14111*/         OPC_RecordMemRef,
/*14112*/         OPC_RecordNode, // #1 = 'ld' chained node
/*14113*/         OPC_CheckFoldableChainNode,
/*14114*/         OPC_RecordChild1, // #2 = $XBD2
/*14115*/         OPC_CheckChild1Type, MVT::i64,
/*14117*/         OPC_CheckPredicate, 0, // Predicate_unindexedload
/*14119*/         OPC_CheckPredicate, 13, // Predicate_load
/*14121*/         OPC_MoveParent,
/*14122*/         OPC_CheckComplexPat, /*CP*/14, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*14125*/         OPC_EmitMergeInputChains1_1,
/*14126*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CEB), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (z_cmp FP32:f32:$R1, (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (CEB:i32 FP32:f32:$R1, bdxaddr12only:i64:$XBD2)
                /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::ConstantFP),// ->14152
/*14140*/         OPC_CheckPredicate, 105, // Predicate_fpimm0
/*14142*/         OPC_MoveParent,
/*14143*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LTEBRCompare), 0|OPFL_GlueOutput,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                  // Src: (z_cmp FP32:f32:$reg, (fpimm:f32)<<P:Predicate_fpimm0>>) - Complexity = 7
                  // Dst: (LTEBRCompare:i32 FP32:f32:$reg, FP32:f32:$reg)
                0, // EndSwitchOpcode
/*14153*/     /*Scope*/ 50, /*->14204*/
/*14154*/       OPC_CheckChild0Type, MVT::f64,
/*14156*/       OPC_MoveChild, 1,
/*14158*/       OPC_SwitchOpcode /*2 cases */, 26,  TARGET_VAL(ISD::LOAD),// ->14188
/*14162*/         OPC_RecordMemRef,
/*14163*/         OPC_RecordNode, // #1 = 'ld' chained node
/*14164*/         OPC_CheckFoldableChainNode,
/*14165*/         OPC_RecordChild1, // #2 = $XBD2
/*14166*/         OPC_CheckChild1Type, MVT::i64,
/*14168*/         OPC_CheckPredicate, 0, // Predicate_unindexedload
/*14170*/         OPC_CheckPredicate, 13, // Predicate_load
/*14172*/         OPC_MoveParent,
/*14173*/         OPC_CheckComplexPat, /*CP*/14, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*14176*/         OPC_EmitMergeInputChains1_1,
/*14177*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CDB), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (z_cmp FP64:f64:$R1, (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (CDB:i32 FP64:f64:$R1, bdxaddr12only:i64:$XBD2)
                /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::ConstantFP),// ->14203
/*14191*/         OPC_CheckPredicate, 105, // Predicate_fpimm0
/*14193*/         OPC_MoveParent,
/*14194*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LTDBRCompare), 0|OPFL_GlueOutput,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                  // Src: (z_cmp FP64:f64:$reg, (fpimm:f64)<<P:Predicate_fpimm0>>) - Complexity = 7
                  // Dst: (LTDBRCompare:i32 FP64:f64:$reg, FP64:f64:$reg)
                0, // EndSwitchOpcode
/*14204*/     /*Scope*/ 19, /*->14224*/
/*14205*/       OPC_CheckChild0Type, MVT::f128,
/*14207*/       OPC_MoveChild, 1,
/*14209*/       OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*14212*/       OPC_CheckPredicate, 105, // Predicate_fpimm0
/*14214*/       OPC_MoveParent,
/*14215*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LTXBRCompare), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                // Src: (z_cmp FP128:f128:$reg, (fpimm:f128)<<P:Predicate_fpimm0>>) - Complexity = 7
                // Dst: (LTXBRCompare:i32 FP128:f128:$reg, FP128:f128:$reg)
/*14224*/     /*Scope*/ 49, /*->14274*/
/*14225*/       OPC_MoveChild, 1,
/*14227*/       OPC_SwitchOpcode /*2 cases */, 11,  TARGET_VAL(ISD::SIGN_EXTEND),// ->14242
/*14231*/         OPC_RecordChild0, // #1 = $src2
/*14232*/         OPC_MoveParent,
/*14233*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGFR), 0|OPFL_GlueOutput,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (z_cmp GR64:i64:$src1, (sext:i64 GR32:i32:$src2)) - Complexity = 6
                  // Dst: (CGFR:i32 GR64:i64:$src1, GR32:i32:$src2)
                /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->14273
/*14245*/         OPC_RecordChild0, // #1 = $src2
/*14246*/         OPC_MoveChild, 1,
/*14248*/         OPC_CheckValueType, MVT::i32,
/*14250*/         OPC_MoveParent,
/*14251*/         OPC_MoveParent,
/*14252*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*14255*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*14264*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGFR), 0|OPFL_GlueOutput,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (z_cmp GR64:i64:$src1, (sext_inreg:i64 GR64:i64:$src2, i32:Other)) - Complexity = 6
                  // Dst: (CGFR:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
                0, // EndSwitchOpcode
/*14274*/     /*Scope*/ 12, /*->14287*/
/*14275*/       OPC_CheckChild0Type, MVT::i32,
/*14277*/       OPC_RecordChild1, // #1 = $R2
/*14278*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (z_cmp GR32:i32:$R1, GR32:i32:$R2) - Complexity = 3
                // Dst: (CR:i32 GR32:i32:$R1, GR32:i32:$R2)
/*14287*/     /*Scope*/ 12, /*->14300*/
/*14288*/       OPC_CheckChild0Type, MVT::i64,
/*14290*/       OPC_RecordChild1, // #1 = $R2
/*14291*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (z_cmp GR64:i64:$R1, GR64:i64:$R2) - Complexity = 3
                // Dst: (CGR:i32 GR64:i64:$R1, GR64:i64:$R2)
/*14300*/     /*Scope*/ 12, /*->14313*/
/*14301*/       OPC_CheckChild0Type, MVT::f32,
/*14303*/       OPC_RecordChild1, // #1 = $R2
/*14304*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CEBR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (z_cmp FP32:f32:$R1, FP32:f32:$R2) - Complexity = 3
                // Dst: (CEBR:i32 FP32:f32:$R1, FP32:f32:$R2)
/*14313*/     /*Scope*/ 12, /*->14326*/
/*14314*/       OPC_CheckChild0Type, MVT::f64,
/*14316*/       OPC_RecordChild1, // #1 = $R2
/*14317*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CDBR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (z_cmp FP64:f64:$R1, FP64:f64:$R2) - Complexity = 3
                // Dst: (CDBR:i32 FP64:f64:$R1, FP64:f64:$R2)
/*14326*/     /*Scope*/ 12, /*->14339*/
/*14327*/       OPC_CheckChild0Type, MVT::f128,
/*14329*/       OPC_RecordChild1, // #1 = $R2
/*14330*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CXBR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (z_cmp FP128:f128:$R1, FP128:f128:$R2) - Complexity = 3
                // Dst: (CXBR:i32 FP128:f128:$R1, FP128:f128:$R2)
/*14339*/     0, /*End of Scope*/
/*14340*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 55|128,4/*567*/,  TARGET_VAL(SystemZISD::UCMP),// ->14912
/*14345*/   OPC_Scope, 13|128,1/*141*/, /*->14489*/ // 3 children in Scope
/*14348*/     OPC_RecordChild0, // #0 = $R1
/*14349*/     OPC_Scope, 57, /*->14408*/ // 2 children in Scope
/*14351*/       OPC_CheckChild0Type, MVT::i32,
/*14353*/       OPC_MoveChild, 1,
/*14355*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*14358*/       OPC_RecordMemRef,
/*14359*/       OPC_RecordNode, // #1 = 'ld' chained node
/*14360*/       OPC_CheckFoldableChainNode,
/*14361*/       OPC_RecordChild1, // #2 = $I2
/*14362*/       OPC_CheckChild1Type, MVT::i64,
/*14364*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*14366*/       OPC_Scope, 20, /*->14388*/ // 2 children in Scope
/*14368*/         OPC_CheckPredicate, 38, // Predicate_zextload
/*14370*/         OPC_CheckPredicate, 72, // Predicate_zextloadi16
/*14372*/         OPC_CheckPredicate, 73, // Predicate_aligned_zextloadi16
/*14374*/         OPC_MoveParent,
/*14375*/         OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*14378*/         OPC_EmitMergeInputChains1_1,
/*14379*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLHRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (z_ucmp GR32:i32:$R1, (ld:i32 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>><<P:Predicate_aligned_zextloadi16>>) - Complexity = 20
                  // Dst: (CLHRL:i32 GR32:i32:$R1, pcrel32:i64:$I2)
/*14388*/       /*Scope*/ 18, /*->14407*/
/*14389*/         OPC_CheckPredicate, 13, // Predicate_load
/*14391*/         OPC_CheckPredicate, 67, // Predicate_aligned_load
/*14393*/         OPC_MoveParent,
/*14394*/         OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*14397*/         OPC_EmitMergeInputChains1_1,
/*14398*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (z_ucmp GR32:i32:$R1, (ld:i32 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned_load>>) - Complexity = 20
                  // Dst: (CLRL:i32 GR32:i32:$R1, pcrel32:i64:$I2)
/*14407*/       0, /*End of Scope*/
/*14408*/     /*Scope*/ 79, /*->14488*/
/*14409*/       OPC_CheckChild0Type, MVT::i64,
/*14411*/       OPC_MoveChild, 1,
/*14413*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*14416*/       OPC_RecordMemRef,
/*14417*/       OPC_RecordNode, // #1 = 'ld' chained node
/*14418*/       OPC_CheckFoldableChainNode,
/*14419*/       OPC_RecordChild1, // #2 = $I2
/*14420*/       OPC_CheckChild1Type, MVT::i64,
/*14422*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*14424*/       OPC_Scope, 42, /*->14468*/ // 2 children in Scope
/*14426*/         OPC_CheckPredicate, 38, // Predicate_zextload
/*14428*/         OPC_Scope, 18, /*->14448*/ // 2 children in Scope
/*14430*/           OPC_CheckPredicate, 72, // Predicate_zextloadi16
/*14432*/           OPC_CheckPredicate, 73, // Predicate_aligned_zextloadi16
/*14434*/           OPC_MoveParent,
/*14435*/           OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*14438*/           OPC_EmitMergeInputChains1_1,
/*14439*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGHRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_ucmp GR64:i64:$R1, (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>><<P:Predicate_aligned_zextloadi16>>) - Complexity = 20
                    // Dst: (CLGHRL:i32 GR64:i64:$R1, pcrel32:i64:$I2)
/*14448*/         /*Scope*/ 18, /*->14467*/
/*14449*/           OPC_CheckPredicate, 55, // Predicate_zextloadi32
/*14451*/           OPC_CheckPredicate, 74, // Predicate_aligned_zextloadi32
/*14453*/           OPC_MoveParent,
/*14454*/           OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*14457*/           OPC_EmitMergeInputChains1_1,
/*14458*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGFRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_ucmp GR64:i64:$R1, (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>><<P:Predicate_aligned_zextloadi32>>) - Complexity = 20
                    // Dst: (CLGFRL:i32 GR64:i64:$R1, pcrel32:i64:$I2)
/*14467*/         0, /*End of Scope*/
/*14468*/       /*Scope*/ 18, /*->14487*/
/*14469*/         OPC_CheckPredicate, 13, // Predicate_load
/*14471*/         OPC_CheckPredicate, 67, // Predicate_aligned_load
/*14473*/         OPC_MoveParent,
/*14474*/         OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*14477*/         OPC_EmitMergeInputChains1_1,
/*14478*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (z_ucmp GR64:i64:$R1, (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned_load>>) - Complexity = 20
                  // Dst: (CLGRL:i32 GR64:i64:$R1, pcrel32:i64:$I2)
/*14487*/       0, /*End of Scope*/
/*14488*/     0, /*End of Scope*/
/*14489*/   /*Scope*/ 48|128,1/*176*/, /*->14667*/
/*14491*/     OPC_MoveChild, 0,
/*14493*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*14496*/     OPC_RecordMemRef,
/*14497*/     OPC_RecordNode, // #0 = 'ld' chained node
/*14498*/     OPC_CheckFoldableChainNode,
/*14499*/     OPC_RecordChild1, // #1 = $BD1
/*14500*/     OPC_CheckChild1Type, MVT::i64,
/*14502*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*14504*/     OPC_Scope, 93, /*->14599*/ // 2 children in Scope
/*14506*/       OPC_CheckPredicate, 38, // Predicate_zextload
/*14508*/       OPC_CheckType, MVT::i32,
/*14510*/       OPC_Scope, 54, /*->14566*/ // 2 children in Scope
/*14512*/         OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*14514*/         OPC_MoveParent,
/*14515*/         OPC_RecordChild1, // #2 = $I2
/*14516*/         OPC_MoveChild, 1,
/*14518*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14521*/         OPC_CheckPredicate, 106, // Predicate_imm32zx8
/*14523*/         OPC_MoveParent,
/*14524*/         OPC_Scope, 19, /*->14545*/ // 2 children in Scope
/*14526*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectBDAddr12Pair:$BD1 #3 #4
/*14529*/           OPC_EmitMergeInputChains1_0,
/*14530*/           OPC_EmitConvertToTarget, 2,
/*14532*/           OPC_EmitNodeXForm, 1, 5, // UIMM8
/*14535*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                    // Src: (z_ucmp (ld:i32 bdaddr12pair:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (imm:i32)<<P:Predicate_imm32zx8>><<X:UIMM8>>:$I2) - Complexity = 20
                    // Dst: (CLI:i32 bdaddr12pair:i64:$BD1, (UIMM8:i32 (imm:i32):$I2))
/*14545*/         /*Scope*/ 19, /*->14565*/
/*14546*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDAddr20Pair:$BD1 #3 #4
/*14549*/           OPC_EmitMergeInputChains1_0,
/*14550*/           OPC_EmitConvertToTarget, 2,
/*14552*/           OPC_EmitNodeXForm, 1, 5, // UIMM8
/*14555*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLIY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                    // Src: (z_ucmp (ld:i32 bdaddr20pair:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (imm:i32)<<P:Predicate_imm32zx8>><<X:UIMM8>>:$I2) - Complexity = 20
                    // Dst: (CLIY:i32 bdaddr20pair:i64:$BD1, (UIMM8:i32 (imm:i32):$I2))
/*14565*/         0, /*End of Scope*/
/*14566*/       /*Scope*/ 31, /*->14598*/
/*14567*/         OPC_CheckPredicate, 72, // Predicate_zextloadi16
/*14569*/         OPC_MoveParent,
/*14570*/         OPC_RecordChild1, // #2 = $I2
/*14571*/         OPC_MoveChild, 1,
/*14573*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14576*/         OPC_CheckPredicate, 107, // Predicate_imm32zx16
/*14578*/         OPC_MoveParent,
/*14579*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr12Only:$BD1 #3 #4
/*14582*/         OPC_EmitMergeInputChains1_0,
/*14583*/         OPC_EmitConvertToTarget, 2,
/*14585*/         OPC_EmitNodeXForm, 12, 5, // UIMM16
/*14588*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLHHSI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (z_ucmp (ld:i32 bdaddr12only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>>, (imm:i32)<<P:Predicate_imm32zx16>><<X:UIMM16>>:$I2) - Complexity = 20
                  // Dst: (CLHHSI:i32 bdaddr12only:i64:$BD1, (UIMM16:i32 (imm:i32):$I2))
/*14598*/       0, /*End of Scope*/
/*14599*/     /*Scope*/ 66, /*->14666*/
/*14600*/       OPC_CheckPredicate, 13, // Predicate_load
/*14602*/       OPC_SwitchType /*2 cases */, 29,  MVT::i32,// ->14634
/*14605*/         OPC_MoveParent,
/*14606*/         OPC_RecordChild1, // #2 = $I2
/*14607*/         OPC_MoveChild, 1,
/*14609*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14612*/         OPC_CheckPredicate, 107, // Predicate_imm32zx16
/*14614*/         OPC_MoveParent,
/*14615*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr12Only:$BD1 #3 #4
/*14618*/         OPC_EmitMergeInputChains1_0,
/*14619*/         OPC_EmitConvertToTarget, 2,
/*14621*/         OPC_EmitNodeXForm, 12, 5, // UIMM16
/*14624*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLFHSI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (z_ucmp (ld:i32 bdaddr12only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i32)<<P:Predicate_imm32zx16>><<X:UIMM16>>:$I2) - Complexity = 20
                  // Dst: (CLFHSI:i32 bdaddr12only:i64:$BD1, (UIMM16:i32 (imm:i32):$I2))
                /*SwitchType*/ 29,  MVT::i64,// ->14665
/*14636*/         OPC_MoveParent,
/*14637*/         OPC_RecordChild1, // #2 = $I2
/*14638*/         OPC_MoveChild, 1,
/*14640*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14643*/         OPC_CheckPredicate, 108, // Predicate_imm64zx16
/*14645*/         OPC_MoveParent,
/*14646*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr12Only:$BD1 #3 #4
/*14649*/         OPC_EmitMergeInputChains1_0,
/*14650*/         OPC_EmitConvertToTarget, 2,
/*14652*/         OPC_EmitNodeXForm, 12, 5, // UIMM16
/*14655*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGHSI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (z_ucmp (ld:i64 bdaddr12only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i64)<<P:Predicate_imm64zx16>><<X:UIMM16>>:$I2) - Complexity = 20
                  // Dst: (CLGHSI:i32 bdaddr12only:i64:$BD1, (UIMM16:i64 (imm:i64):$I2))
                0, // EndSwitchType
/*14666*/     0, /*End of Scope*/
/*14667*/   /*Scope*/ 114|128,1/*242*/, /*->14911*/
/*14669*/     OPC_RecordChild0, // #0 = $R1
/*14670*/     OPC_Scope, 77, /*->14749*/ // 5 children in Scope
/*14672*/       OPC_CheckChild0Type, MVT::i32,
/*14674*/       OPC_Scope, 50, /*->14726*/ // 2 children in Scope
/*14676*/         OPC_MoveChild, 1,
/*14678*/         OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*14681*/         OPC_RecordMemRef,
/*14682*/         OPC_RecordNode, // #1 = 'ld' chained node
/*14683*/         OPC_CheckFoldableChainNode,
/*14684*/         OPC_RecordChild1, // #2 = $XBD2
/*14685*/         OPC_CheckChild1Type, MVT::i64,
/*14687*/         OPC_CheckPredicate, 0, // Predicate_unindexedload
/*14689*/         OPC_CheckPredicate, 13, // Predicate_load
/*14691*/         OPC_MoveParent,
/*14692*/         OPC_Scope, 15, /*->14709*/ // 2 children in Scope
/*14694*/           OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*14697*/           OPC_EmitMergeInputChains1_1,
/*14698*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (z_ucmp GR32:i32:$R1, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (CL:i32 GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)
/*14709*/         /*Scope*/ 15, /*->14725*/
/*14710*/           OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*14713*/           OPC_EmitMergeInputChains1_1,
/*14714*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (z_ucmp GR32:i32:$R1, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (CLY:i32 GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)
/*14725*/         0, /*End of Scope*/
/*14726*/       /*Scope*/ 21, /*->14748*/
/*14727*/         OPC_RecordChild1, // #1 = $I2
/*14728*/         OPC_MoveChild, 1,
/*14730*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14733*/         OPC_MoveParent,
/*14734*/         OPC_EmitConvertToTarget, 1,
/*14736*/         OPC_EmitNodeXForm, 9, 2, // UIMM32
/*14739*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLFI), 0|OPFL_GlueOutput,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (z_ucmp GR32:i32:$R1, (imm:i32)<<X:UIMM32>>:$I2) - Complexity = 6
                  // Dst: (CLFI:i32 GR32:i32:$R1, (UIMM32:i32 (imm:i32):$I2))
/*14748*/       0, /*End of Scope*/
/*14749*/     /*Scope*/ 117, /*->14867*/
/*14750*/       OPC_CheckChild0Type, MVT::i64,
/*14752*/       OPC_Scope, 88, /*->14842*/ // 2 children in Scope
/*14754*/         OPC_MoveChild, 1,
/*14756*/         OPC_Scope, 53, /*->14811*/ // 2 children in Scope
/*14758*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*14761*/           OPC_RecordMemRef,
/*14762*/           OPC_RecordNode, // #1 = 'ld' chained node
/*14763*/           OPC_CheckFoldableChainNode,
/*14764*/           OPC_RecordChild1, // #2 = $XBD2
/*14765*/           OPC_CheckChild1Type, MVT::i64,
/*14767*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*14769*/           OPC_Scope, 20, /*->14791*/ // 2 children in Scope
/*14771*/             OPC_CheckPredicate, 38, // Predicate_zextload
/*14773*/             OPC_CheckPredicate, 55, // Predicate_zextloadi32
/*14775*/             OPC_MoveParent,
/*14776*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*14779*/             OPC_EmitMergeInputChains1_1,
/*14780*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGF), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_ucmp GR64:i64:$R1, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>) - Complexity = 19
                      // Dst: (CLGF:i32 GR64:i64:$R1, bdxaddr20only:i64:$XBD2)
/*14791*/           /*Scope*/ 18, /*->14810*/
/*14792*/             OPC_CheckPredicate, 13, // Predicate_load
/*14794*/             OPC_MoveParent,
/*14795*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*14798*/             OPC_EmitMergeInputChains1_1,
/*14799*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLG), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_ucmp GR64:i64:$R1, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                      // Dst: (CLG:i32 GR64:i64:$R1, bdxaddr20only:i64:$XBD2)
/*14810*/           0, /*End of Scope*/
/*14811*/         /*Scope*/ 29, /*->14841*/
/*14812*/           OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*14818*/           OPC_RecordChild0, // #1 = $src2
/*14819*/           OPC_MoveParent,
/*14820*/           OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*14823*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*14832*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGFR), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_ucmp GR64:i64:$src1, (and:i64 GR64:i64:$src2, 4294967295:i64)) - Complexity = 11
                    // Dst: (CLGFR:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*14841*/         0, /*End of Scope*/
/*14842*/       /*Scope*/ 23, /*->14866*/
/*14843*/         OPC_RecordChild1, // #1 = $I2
/*14844*/         OPC_MoveChild, 1,
/*14846*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14849*/         OPC_CheckPredicate, 57, // Predicate_imm64zx32
/*14851*/         OPC_MoveParent,
/*14852*/         OPC_EmitConvertToTarget, 1,
/*14854*/         OPC_EmitNodeXForm, 9, 2, // UIMM32
/*14857*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGFI), 0|OPFL_GlueOutput,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (z_ucmp GR64:i64:$R1, (imm:i64)<<P:Predicate_imm64zx32>><<X:UIMM32>>:$I2) - Complexity = 7
                  // Dst: (CLGFI:i32 GR64:i64:$R1, (UIMM32:i64 (imm:i64):$I2))
/*14866*/       0, /*End of Scope*/
/*14867*/     /*Scope*/ 16, /*->14884*/
/*14868*/       OPC_MoveChild, 1,
/*14870*/       OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*14873*/       OPC_RecordChild0, // #1 = $src2
/*14874*/       OPC_MoveParent,
/*14875*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGFR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (z_ucmp GR64:i64:$src1, (zext:i64 GR32:i32:$src2)) - Complexity = 6
                // Dst: (CLGFR:i32 GR64:i64:$src1, GR32:i32:$src2)
/*14884*/     /*Scope*/ 12, /*->14897*/
/*14885*/       OPC_CheckChild0Type, MVT::i32,
/*14887*/       OPC_RecordChild1, // #1 = $R2
/*14888*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (z_ucmp GR32:i32:$R1, GR32:i32:$R2) - Complexity = 3
                // Dst: (CLR:i32 GR32:i32:$R1, GR32:i32:$R2)
/*14897*/     /*Scope*/ 12, /*->14910*/
/*14898*/       OPC_CheckChild0Type, MVT::i64,
/*14900*/       OPC_RecordChild1, // #1 = $R2
/*14901*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (z_ucmp GR64:i64:$R1, GR64:i64:$R2) - Complexity = 3
                // Dst: (CLGR:i32 GR64:i64:$R1, GR64:i64:$R2)
/*14910*/     0, /*End of Scope*/
/*14911*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 86,  TARGET_VAL(ISD::FSQRT),// ->15001
/*14915*/   OPC_Scope, 49, /*->14966*/ // 2 children in Scope
/*14917*/     OPC_MoveChild, 0,
/*14919*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*14922*/     OPC_RecordMemRef,
/*14923*/     OPC_RecordNode, // #0 = 'ld' chained node
/*14924*/     OPC_RecordChild1, // #1 = $XBD2
/*14925*/     OPC_CheckChild1Type, MVT::i64,
/*14927*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*14929*/     OPC_CheckPredicate, 13, // Predicate_load
/*14931*/     OPC_MoveParent,
/*14932*/     OPC_SwitchType /*2 cases */, 14,  MVT::f32,// ->14949
/*14935*/       OPC_CheckComplexPat, /*CP*/14, /*#*/1, // selectBDXAddr12Only:$XBD2 #2 #3 #4
/*14938*/       OPC_EmitMergeInputChains1_0,
/*14939*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SQEB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (fsqrt:f32 (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (SQEB:f32 bdxaddr12only:i64:$XBD2)
              /*SwitchType*/ 14,  MVT::f64,// ->14965
/*14951*/       OPC_CheckComplexPat, /*CP*/14, /*#*/1, // selectBDXAddr12Only:$XBD2 #2 #3 #4
/*14954*/       OPC_EmitMergeInputChains1_0,
/*14955*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SQDB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 3, 4, 
                // Src: (fsqrt:f64 (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (SQDB:f64 bdxaddr12only:i64:$XBD2)
              0, // EndSwitchType
/*14966*/   /*Scope*/ 33, /*->15000*/
/*14967*/     OPC_RecordChild0, // #0 = $R2
/*14968*/     OPC_SwitchType /*3 cases */, 8,  MVT::f32,// ->14979
/*14971*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SQEBR), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f32 FP32:f32:$R2) - Complexity = 3
                // Dst: (SQEBR:f32 FP32:f32:$R2)
              /*SwitchType*/ 8,  MVT::f64,// ->14989
/*14981*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SQDBR), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f64 FP64:f64:$R2) - Complexity = 3
                // Dst: (SQDBR:f64 FP64:f64:$R2)
              /*SwitchType*/ 8,  MVT::f128,// ->14999
/*14991*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SQXBR), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f128 FP128:f128:$R2) - Complexity = 3
                // Dst: (SQXBR:f128 FP128:f128:$R2)
              0, // EndSwitchType
/*15000*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 27|128,1/*155*/,  TARGET_VAL(ISD::FADD),// ->15160
/*15005*/   OPC_Scope, 55, /*->15062*/ // 3 children in Scope
/*15007*/     OPC_RecordChild0, // #0 = $R1src
/*15008*/     OPC_MoveChild, 1,
/*15010*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*15013*/     OPC_RecordMemRef,
/*15014*/     OPC_RecordNode, // #1 = 'ld' chained node
/*15015*/     OPC_CheckFoldableChainNode,
/*15016*/     OPC_RecordChild1, // #2 = $XBD2
/*15017*/     OPC_CheckChild1Type, MVT::i64,
/*15019*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*15021*/     OPC_CheckPredicate, 13, // Predicate_load
/*15023*/     OPC_MoveParent,
/*15024*/     OPC_SwitchType /*2 cases */, 16,  MVT::f32,// ->15043
/*15027*/       OPC_CheckComplexPat, /*CP*/14, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*15030*/       OPC_EmitMergeInputChains1_1,
/*15031*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::AEB), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::f32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fadd:f32 FP32:f32:$R1src, (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (AEB:f32:i32 FP32:f32:$R1src, bdxaddr12only:i64:$XBD2)
              /*SwitchType*/ 16,  MVT::f64,// ->15061
/*15045*/       OPC_CheckComplexPat, /*CP*/14, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*15048*/       OPC_EmitMergeInputChains1_1,
/*15049*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADB), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::f64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fadd:f64 FP64:f64:$R1src, (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (ADB:f64:i32 FP64:f64:$R1src, bdxaddr12only:i64:$XBD2)
              0, // EndSwitchType
/*15062*/   /*Scope*/ 55, /*->15118*/
/*15063*/     OPC_MoveChild, 0,
/*15065*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*15068*/     OPC_RecordMemRef,
/*15069*/     OPC_RecordNode, // #0 = 'ld' chained node
/*15070*/     OPC_CheckFoldableChainNode,
/*15071*/     OPC_RecordChild1, // #1 = $XBD2
/*15072*/     OPC_CheckChild1Type, MVT::i64,
/*15074*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*15076*/     OPC_CheckPredicate, 13, // Predicate_load
/*15078*/     OPC_MoveParent,
/*15079*/     OPC_RecordChild1, // #2 = $R1src
/*15080*/     OPC_SwitchType /*2 cases */, 16,  MVT::f32,// ->15099
/*15083*/       OPC_CheckComplexPat, /*CP*/14, /*#*/1, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*15086*/       OPC_EmitMergeInputChains1_0,
/*15087*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::AEB), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::f32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (fadd:f32 (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP32:f32:$R1src) - Complexity = 19
                // Dst: (AEB:f32:i32 FP32:f32:$R1src, bdxaddr12only:i64:$XBD2)
              /*SwitchType*/ 16,  MVT::f64,// ->15117
/*15101*/       OPC_CheckComplexPat, /*CP*/14, /*#*/1, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*15104*/       OPC_EmitMergeInputChains1_0,
/*15105*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADB), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::f64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (fadd:f64 (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP64:f64:$R1src) - Complexity = 19
                // Dst: (ADB:f64:i32 FP64:f64:$R1src, bdxaddr12only:i64:$XBD2)
              0, // EndSwitchType
/*15118*/   /*Scope*/ 40, /*->15159*/
/*15119*/     OPC_RecordChild0, // #0 = $R1src
/*15120*/     OPC_RecordChild1, // #1 = $R2
/*15121*/     OPC_SwitchType /*3 cases */, 10,  MVT::f32,// ->15134
/*15124*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::AEBR), 0,
                    2/*#VTs*/, MVT::f32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (fadd:f32 FP32:f32:$R1src, FP32:f32:$R2) - Complexity = 3
                // Dst: (AEBR:f32:i32 FP32:f32:$R1src, FP32:f32:$R2)
              /*SwitchType*/ 10,  MVT::f64,// ->15146
/*15136*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADBR), 0,
                    2/*#VTs*/, MVT::f64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (fadd:f64 FP64:f64:$R1src, FP64:f64:$R2) - Complexity = 3
                // Dst: (ADBR:f64:i32 FP64:f64:$R1src, FP64:f64:$R2)
              /*SwitchType*/ 10,  MVT::f128,// ->15158
/*15148*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::AXBR), 0,
                    2/*#VTs*/, MVT::f128, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (fadd:f128 FP128:f128:$R1src, FP128:f128:$R2) - Complexity = 3
                // Dst: (AXBR:f128:i32 FP128:f128:$R1src, FP128:f128:$R2)
              0, // EndSwitchType
/*15159*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 98,  TARGET_VAL(ISD::FSUB),// ->15261
/*15163*/   OPC_RecordChild0, // #0 = $R1src
/*15164*/   OPC_Scope, 54, /*->15220*/ // 2 children in Scope
/*15166*/     OPC_MoveChild, 1,
/*15168*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*15171*/     OPC_RecordMemRef,
/*15172*/     OPC_RecordNode, // #1 = 'ld' chained node
/*15173*/     OPC_CheckFoldableChainNode,
/*15174*/     OPC_RecordChild1, // #2 = $XBD2
/*15175*/     OPC_CheckChild1Type, MVT::i64,
/*15177*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*15179*/     OPC_CheckPredicate, 13, // Predicate_load
/*15181*/     OPC_MoveParent,
/*15182*/     OPC_SwitchType /*2 cases */, 16,  MVT::f32,// ->15201
/*15185*/       OPC_CheckComplexPat, /*CP*/14, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*15188*/       OPC_EmitMergeInputChains1_1,
/*15189*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SEB), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::f32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fsub:f32 FP32:f32:$R1src, (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (SEB:f32:i32 FP32:f32:$R1src, bdxaddr12only:i64:$XBD2)
              /*SwitchType*/ 16,  MVT::f64,// ->15219
/*15203*/       OPC_CheckComplexPat, /*CP*/14, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*15206*/       OPC_EmitMergeInputChains1_1,
/*15207*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SDB), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::f64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fsub:f64 FP64:f64:$R1src, (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (SDB:f64:i32 FP64:f64:$R1src, bdxaddr12only:i64:$XBD2)
              0, // EndSwitchType
/*15220*/   /*Scope*/ 39, /*->15260*/
/*15221*/     OPC_RecordChild1, // #1 = $R2
/*15222*/     OPC_SwitchType /*3 cases */, 10,  MVT::f32,// ->15235
/*15225*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SEBR), 0,
                    2/*#VTs*/, MVT::f32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:f32 FP32:f32:$R1src, FP32:f32:$R2) - Complexity = 3
                // Dst: (SEBR:f32:i32 FP32:f32:$R1src, FP32:f32:$R2)
              /*SwitchType*/ 10,  MVT::f64,// ->15247
/*15237*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SDBR), 0,
                    2/*#VTs*/, MVT::f64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:f64 FP64:f64:$R1src, FP64:f64:$R2) - Complexity = 3
                // Dst: (SDBR:f64:i32 FP64:f64:$R1src, FP64:f64:$R2)
              /*SwitchType*/ 10,  MVT::f128,// ->15259
/*15249*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SXBR), 0,
                    2/*#VTs*/, MVT::f128, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:f128 FP128:f128:$R1src, FP128:f128:$R2) - Complexity = 3
                // Dst: (SXBR:f128:i32 FP128:f128:$R1src, FP128:f128:$R2)
              0, // EndSwitchType
/*15260*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 93,  TARGET_VAL(ISD::FDIV),// ->15357
/*15264*/   OPC_RecordChild0, // #0 = $R1src
/*15265*/   OPC_Scope, 52, /*->15319*/ // 2 children in Scope
/*15267*/     OPC_MoveChild, 1,
/*15269*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*15272*/     OPC_RecordMemRef,
/*15273*/     OPC_RecordNode, // #1 = 'ld' chained node
/*15274*/     OPC_CheckFoldableChainNode,
/*15275*/     OPC_RecordChild1, // #2 = $XBD2
/*15276*/     OPC_CheckChild1Type, MVT::i64,
/*15278*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*15280*/     OPC_CheckPredicate, 13, // Predicate_load
/*15282*/     OPC_MoveParent,
/*15283*/     OPC_SwitchType /*2 cases */, 15,  MVT::f32,// ->15301
/*15286*/       OPC_CheckComplexPat, /*CP*/14, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*15289*/       OPC_EmitMergeInputChains1_1,
/*15290*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::DEB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fdiv:f32 FP32:f32:$R1src, (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (DEB:f32 FP32:f32:$R1src, bdxaddr12only:i64:$XBD2)
              /*SwitchType*/ 15,  MVT::f64,// ->15318
/*15303*/       OPC_CheckComplexPat, /*CP*/14, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*15306*/       OPC_EmitMergeInputChains1_1,
/*15307*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::DDB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fdiv:f64 FP64:f64:$R1src, (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (DDB:f64 FP64:f64:$R1src, bdxaddr12only:i64:$XBD2)
              0, // EndSwitchType
/*15319*/   /*Scope*/ 36, /*->15356*/
/*15320*/     OPC_RecordChild1, // #1 = $R2
/*15321*/     OPC_SwitchType /*3 cases */, 9,  MVT::f32,// ->15333
/*15324*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::DEBR), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f32 FP32:f32:$R1src, FP32:f32:$R2) - Complexity = 3
                // Dst: (DEBR:f32 FP32:f32:$R1src, FP32:f32:$R2)
              /*SwitchType*/ 9,  MVT::f64,// ->15344
/*15335*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::DDBR), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f64 FP64:f64:$R1src, FP64:f64:$R2) - Complexity = 3
                // Dst: (DDBR:f64 FP64:f64:$R1src, FP64:f64:$R2)
              /*SwitchType*/ 9,  MVT::f128,// ->15355
/*15346*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::DXBR), 0,
                    1/*#VTs*/, MVT::f128, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f128 FP128:f128:$R1src, FP128:f128:$R2) - Complexity = 3
                // Dst: (DXBR:f128 FP128:f128:$R1src, FP128:f128:$R2)
              0, // EndSwitchType
/*15356*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 41,  TARGET_VAL(SystemZISD::BR_CCMASK),// ->15401
/*15360*/   OPC_RecordNode,   // #0 = 'z_br_ccmask' chained node
/*15361*/   OPC_CaptureGlueInput,
/*15362*/   OPC_RecordChild1, // #1 = $valid
/*15363*/   OPC_MoveChild, 1,
/*15365*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15368*/   OPC_CheckPredicate, 51, // Predicate_cond4
/*15370*/   OPC_MoveParent,
/*15371*/   OPC_RecordChild2, // #2 = $R1
/*15372*/   OPC_MoveChild, 2,
/*15374*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15377*/   OPC_CheckPredicate, 51, // Predicate_cond4
/*15379*/   OPC_MoveParent,
/*15380*/   OPC_RecordChild3, // #3 = $I2
/*15381*/   OPC_MoveChild, 3,
/*15383*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*15386*/   OPC_MoveParent,
/*15387*/   OPC_EmitMergeInputChains1_0,
/*15388*/   OPC_EmitConvertToTarget, 1,
/*15390*/   OPC_EmitConvertToTarget, 2,
/*15392*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::BRC), 0|OPFL_Chain|OPFL_GlueInput,
                0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
            // Src: (z_br_ccmask (imm:i8)<<P:Predicate_cond4>>:$valid, (imm:i8)<<P:Predicate_cond4>>:$R1, (bb:Other):$I2) - Complexity = 11
            // Dst: (BRC (imm:i8):$valid, (imm:i8):$R1, (bb:Other):$I2)
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::CALLSEQ_END),// ->15429
/*15404*/   OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*15405*/   OPC_CaptureGlueInput,
/*15406*/   OPC_RecordChild1, // #1 = $amt1
/*15407*/   OPC_MoveChild, 1,
/*15409*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*15412*/   OPC_MoveParent,
/*15413*/   OPC_RecordChild2, // #2 = $amt2
/*15414*/   OPC_MoveChild, 2,
/*15416*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*15419*/   OPC_MoveParent,
/*15420*/   OPC_EmitMergeInputChains1_0,
/*15421*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i64):$amt1, (timm:i64):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP (timm:i64):$amt1, (timm:i64):$amt2)
          /*SwitchOpcode*/ 30,  TARGET_VAL(SystemZISD::CALL),// ->15462
/*15432*/   OPC_RecordNode,   // #0 = 'z_call' chained node
/*15433*/   OPC_CaptureGlueInput,
/*15434*/   OPC_RecordChild1, // #1 = $I2
/*15435*/   OPC_CheckChild1Type, MVT::i64,
/*15437*/   OPC_Scope, 12, /*->15451*/ // 2 children in Scope
/*15439*/     OPC_CheckComplexPat, /*CP*/15, /*#*/1, // selectPCRelAddress:$I2 #2
/*15442*/     OPC_EmitMergeInputChains1_0,
/*15443*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::BRASL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
              // Src: (z_call pcrel32call:i64:$I2) - Complexity = 9
              // Dst: (BRASL:i64 pcrel32call:i64:$I2)
/*15451*/   /*Scope*/ 9, /*->15461*/
/*15452*/     OPC_EmitMergeInputChains1_0,
/*15453*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::BASR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (z_call ADDR64:i64:$R2) - Complexity = 3
              // Dst: (BASR:i64 ADDR64:i64:$R2)
/*15461*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::CALLSEQ_START),// ->15481
/*15465*/   OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*15466*/   OPC_RecordChild1, // #1 = $amt
/*15467*/   OPC_MoveChild, 1,
/*15469*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*15472*/   OPC_MoveParent,
/*15473*/   OPC_EmitMergeInputChains1_0,
/*15474*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i64):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN (timm:i64):$amt)
          /*SwitchOpcode*/ 82,  TARGET_VAL(ISD::FNEG),// ->15566
/*15484*/   OPC_Scope, 42, /*->15528*/ // 2 children in Scope
/*15486*/     OPC_MoveChild, 0,
/*15488*/     OPC_CheckOpcode, TARGET_VAL(ISD::FABS),
/*15491*/     OPC_RecordChild0, // #0 = $R2
/*15492*/     OPC_MoveParent,
/*15493*/     OPC_SwitchType /*3 cases */, 9,  MVT::f32,// ->15505
/*15496*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNEBR), 0,
                    2/*#VTs*/, MVT::f32, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (fneg:f32 (fabs:f32 FP32:f32:$R2)) - Complexity = 6
                // Dst: (LNEBR:f32:i32 FP32:f32:$R2)
              /*SwitchType*/ 9,  MVT::f64,// ->15516
/*15507*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNDBR), 0,
                    2/*#VTs*/, MVT::f64, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 (fabs:f64 FP64:f64:$R2)) - Complexity = 6
                // Dst: (LNDBR:f64:i32 FP64:f64:$R2)
              /*SwitchType*/ 9,  MVT::f128,// ->15527
/*15518*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNXBR), 0,
                    2/*#VTs*/, MVT::f128, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (fneg:f128 (fabs:f128 FP128:f128:$R2)) - Complexity = 6
                // Dst: (LNXBR:f128:i32 FP128:f128:$R2)
              0, // EndSwitchType
/*15528*/   /*Scope*/ 36, /*->15565*/
/*15529*/     OPC_RecordChild0, // #0 = $R2
/*15530*/     OPC_SwitchType /*3 cases */, 9,  MVT::f32,// ->15542
/*15533*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCEBR), 0,
                    2/*#VTs*/, MVT::f32, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (fneg:f32 FP32:f32:$R2) - Complexity = 3
                // Dst: (LCEBR:f32:i32 FP32:f32:$R2)
              /*SwitchType*/ 9,  MVT::f64,// ->15553
/*15544*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCDBR), 0,
                    2/*#VTs*/, MVT::f64, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 FP64:f64:$R2) - Complexity = 3
                // Dst: (LCDBR:f64:i32 FP64:f64:$R2)
              /*SwitchType*/ 9,  MVT::f128,// ->15564
/*15555*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCXBR), 0,
                    2/*#VTs*/, MVT::f128, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (fneg:f128 FP128:f128:$R2) - Complexity = 3
                // Dst: (LCXBR:f128:i32 FP128:f128:$R2)
              0, // EndSwitchType
/*15565*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 93,  TARGET_VAL(ISD::ConstantFP),// ->15662
/*15569*/   OPC_Scope, 31, /*->15602*/ // 2 children in Scope
/*15571*/     OPC_CheckPredicate, 105, // Predicate_fpimm0
/*15573*/     OPC_SwitchType /*3 cases */, 7,  MVT::f32,// ->15583
/*15576*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LZER), 0,
                    1/*#VTs*/, MVT::f32, 0/*#Ops*/, 
                // Src: (fpimm:f32)<<P:Predicate_fpimm0>> - Complexity = 4
                // Dst: (LZER:f32)
              /*SwitchType*/ 7,  MVT::f64,// ->15592
/*15585*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LZDR), 0,
                    1/*#VTs*/, MVT::f64, 0/*#Ops*/, 
                // Src: (fpimm:f64)<<P:Predicate_fpimm0>> - Complexity = 4
                // Dst: (LZDR:f64)
              /*SwitchType*/ 7,  MVT::f128,// ->15601
/*15594*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LZXR), 0,
                    1/*#VTs*/, MVT::f128, 0/*#Ops*/, 
                // Src: (fpimm:f128)<<P:Predicate_fpimm0>> - Complexity = 4
                // Dst: (LZXR:f128)
              0, // EndSwitchType
/*15602*/   /*Scope*/ 58, /*->15661*/
/*15603*/     OPC_CheckPredicate, 109, // Predicate_fpimmneg0
/*15605*/     OPC_SwitchType /*3 cases */, 16,  MVT::f32,// ->15624
/*15608*/       OPC_EmitNode, TARGET_VAL(SystemZ::LZER), 0,
                    1/*#VTs*/, MVT::f32, 0/*#Ops*/,  // Results = #0
/*15615*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCEBR), 0,
                    2/*#VTs*/, MVT::f32, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (fpimm:f32)<<P:Predicate_fpimmneg0>> - Complexity = 4
                // Dst: (LCEBR:f32:i32 (LZER:f32))
              /*SwitchType*/ 16,  MVT::f64,// ->15642
/*15626*/       OPC_EmitNode, TARGET_VAL(SystemZ::LZDR), 0,
                    1/*#VTs*/, MVT::f64, 0/*#Ops*/,  // Results = #0
/*15633*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCDBR), 0,
                    2/*#VTs*/, MVT::f64, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (fpimm:f64)<<P:Predicate_fpimmneg0>> - Complexity = 4
                // Dst: (LCDBR:f64:i32 (LZDR:f64))
              /*SwitchType*/ 16,  MVT::f128,// ->15660
/*15644*/       OPC_EmitNode, TARGET_VAL(SystemZ::LZXR), 0,
                    1/*#VTs*/, MVT::f128, 0/*#Ops*/,  // Results = #0
/*15651*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCXBR), 0,
                    2/*#VTs*/, MVT::f128, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (fpimm:f128)<<P:Predicate_fpimmneg0>> - Complexity = 4
                // Dst: (LCXBR:f128:i32 (LZXR:f128))
              0, // EndSwitchType
/*15661*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 9,  TARGET_VAL(SystemZISD::RET_FLAG),// ->15674
/*15665*/   OPC_RecordNode,   // #0 = 'z_retflag' chained node
/*15666*/   OPC_CaptureGlueInput,
/*15667*/   OPC_EmitMergeInputChains1_0,
/*15668*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::RET), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (z_retflag) - Complexity = 3
            // Dst: (RET)
          /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::BRIND),// ->15689
/*15677*/   OPC_RecordNode,   // #0 = 'brind' chained node
/*15678*/   OPC_RecordChild1, // #1 = $R2
/*15679*/   OPC_CheckChild1Type, MVT::i64,
/*15681*/   OPC_EmitMergeInputChains1_0,
/*15682*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::BR), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (brind ADDR64:i64:$R2) - Complexity = 3
            // Dst: (BR ADDR64:i64:$R2)
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::BR),// ->15708
/*15692*/   OPC_RecordNode,   // #0 = 'br' chained node
/*15693*/   OPC_RecordChild1, // #1 = $I2
/*15694*/   OPC_MoveChild, 1,
/*15696*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*15699*/   OPC_MoveParent,
/*15700*/   OPC_EmitMergeInputChains1_0,
/*15701*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::J), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (br (bb:Other):$I2) - Complexity = 3
            // Dst: (J (bb:Other):$I2)
          /*SwitchOpcode*/ 101|128,1/*229*/,  TARGET_VAL(ISD::FCOPYSIGN),// ->15941
/*15712*/   OPC_RecordChild0, // #0 = $R3
/*15713*/   OPC_RecordChild1, // #1 = $R2
/*15714*/   OPC_Scope, 62, /*->15778*/ // 3 children in Scope
/*15716*/     OPC_CheckChild1Type, MVT::f32,
/*15718*/     OPC_SwitchType /*3 cases */, 9,  MVT::f32,// ->15730
/*15721*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CPSDRss), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fcopysign:f32 FP32:f32:$R3, FP32:f32:$R2) - Complexity = 3
                // Dst: (CPSDRss:f32 FP32:f32:$R3, FP32:f32:$R2)
              /*SwitchType*/ 9,  MVT::f64,// ->15741
/*15732*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CPSDRds), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fcopysign:f64 FP64:f64:$R3, FP32:f32:$R2) - Complexity = 3
                // Dst: (CPSDRds:f64 FP64:f64:$R3, FP32:f32:$R2)
              /*SwitchType*/ 34,  MVT::f128,// ->15777
/*15743*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*15746*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 2,  // Results = #3
/*15755*/       OPC_EmitNode, TARGET_VAL(SystemZ::CPSDRds), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 3, 1,  // Results = #4
/*15764*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*15767*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::f128, 3/*#Ops*/, 0, 4, 5, 
                // Src: (fcopysign:f128 FP128:f128:$src1, FP32:f32:$src2) - Complexity = 3
                // Dst: (INSERT_SUBREG:f128 FP128:f128:$src1, (CPSDRds:f64 (EXTRACT_SUBREG:f64 FP128:f128:$src1, subreg_high:i32), FP32:f32:$src2), subreg_high:i32)
              0, // EndSwitchType
/*15778*/   /*Scope*/ 62, /*->15841*/
/*15779*/     OPC_CheckChild1Type, MVT::f64,
/*15781*/     OPC_SwitchType /*3 cases */, 9,  MVT::f32,// ->15793
/*15784*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CPSDRsd), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fcopysign:f32 FP32:f32:$R3, FP64:f64:$R2) - Complexity = 3
                // Dst: (CPSDRsd:f32 FP32:f32:$R3, FP64:f64:$R2)
              /*SwitchType*/ 9,  MVT::f64,// ->15804
/*15795*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CPSDRdd), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fcopysign:f64 FP64:f64:$R3, FP64:f64:$R2) - Complexity = 3
                // Dst: (CPSDRdd:f64 FP64:f64:$R3, FP64:f64:$R2)
              /*SwitchType*/ 34,  MVT::f128,// ->15840
/*15806*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*15809*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 2,  // Results = #3
/*15818*/       OPC_EmitNode, TARGET_VAL(SystemZ::CPSDRdd), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 3, 1,  // Results = #4
/*15827*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*15830*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::f128, 3/*#Ops*/, 0, 4, 5, 
                // Src: (fcopysign:f128 FP128:f128:$src1, FP64:f64:$src2) - Complexity = 3
                // Dst: (INSERT_SUBREG:f128 FP128:f128:$src1, (CPSDRdd:f64 (EXTRACT_SUBREG:f64 FP128:f128:$src1, subreg_high:i32), FP64:f64:$src2), subreg_high:i32)
              0, // EndSwitchType
/*15841*/   /*Scope*/ 98, /*->15940*/
/*15842*/     OPC_CheckChild1Type, MVT::f128,
/*15844*/     OPC_SwitchType /*3 cases */, 21,  MVT::f32,// ->15868
/*15847*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*15850*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2,  // Results = #3
/*15859*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CPSDRsd), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 3, 
                // Src: (fcopysign:f32 FP32:f32:$src1, FP128:f128:$src2) - Complexity = 3
                // Dst: (CPSDRsd:f32 FP32:f32:$src1, (EXTRACT_SUBREG:f64 FP128:f128:$src2, subreg_high:i32))
              /*SwitchType*/ 21,  MVT::f64,// ->15891
/*15870*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*15873*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2,  // Results = #3
/*15882*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CPSDRdd), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 3, 
                // Src: (fcopysign:f64 FP64:f64:$src1, FP128:f128:$src2) - Complexity = 3
                // Dst: (CPSDRdd:f64 FP64:f64:$src1, (EXTRACT_SUBREG:f64 FP128:f128:$src2, subreg_high:i32))
              /*SwitchType*/ 46,  MVT::f128,// ->15939
/*15893*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*15896*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 2,  // Results = #3
/*15905*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*15908*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 4,  // Results = #5
/*15917*/       OPC_EmitNode, TARGET_VAL(SystemZ::CPSDRdd), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 3, 5,  // Results = #6
/*15926*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*15929*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::f128, 3/*#Ops*/, 0, 6, 7, 
                // Src: (fcopysign:f128 FP128:f128:$src1, FP128:f128:$src2) - Complexity = 3
                // Dst: (INSERT_SUBREG:f128 FP128:f128:$src1, (CPSDRdd:f64 (EXTRACT_SUBREG:f64 FP128:f128:$src1, subreg_high:i32), (EXTRACT_SUBREG:f64 FP128:f128:$src2, subreg_high:i32)), subreg_high:i32)
              0, // EndSwitchType
/*15940*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 63,  TARGET_VAL(ISD::FP_ROUND),// ->16007
/*15944*/   OPC_RecordChild0, // #0 = $R2
/*15945*/   OPC_SwitchType /*2 cases */, 36,  MVT::f32,// ->15984
/*15948*/     OPC_Scope, 10, /*->15960*/ // 2 children in Scope
/*15950*/       OPC_CheckChild0Type, MVT::f64,
/*15952*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LEDBR), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fround:f32 FP64:f64:$R2) - Complexity = 3
                // Dst: (LEDBR:f32 FP64:f64:$R2)
/*15960*/     /*Scope*/ 22, /*->15983*/
/*15961*/       OPC_CheckChild0Type, MVT::f128,
/*15963*/       OPC_EmitNode, TARGET_VAL(SystemZ::LEXBR), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0,  // Results = #1
/*15971*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*15974*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 2, 
                // Src: (fround:f32 FP128:f128:$src) - Complexity = 3
                // Dst: (EXTRACT_SUBREG:f32 (LEXBR:f128 FP128:f128:$src), subreg_32bit:i32)
/*15983*/     0, /*End of Scope*/
            /*SwitchType*/ 20,  MVT::f64,// ->16006
/*15986*/     OPC_EmitNode, TARGET_VAL(SystemZ::LDXBR), 0,
                  1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0,  // Results = #1
/*15994*/     OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*15997*/     OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2, 
              // Src: (fround:f64 FP128:f128:$src) - Complexity = 3
              // Dst: (EXTRACT_SUBREG:f64 (LDXBR:f128 FP128:f128:$src), subreg_high:i32)
            0, // EndSwitchType
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FP_EXTEND),// ->16049
/*16010*/   OPC_RecordChild0, // #0 = $R2
/*16011*/   OPC_SwitchType /*2 cases */, 8,  MVT::f64,// ->16022
/*16014*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LDEBR), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fextend:f64 FP32:f32:$R2) - Complexity = 3
              // Dst: (LDEBR:f64 FP32:f32:$R2)
            /*SwitchType*/ 24,  MVT::f128,// ->16048
/*16024*/     OPC_Scope, 10, /*->16036*/ // 2 children in Scope
/*16026*/       OPC_CheckChild0Type, MVT::f32,
/*16028*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LXEBR), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (fextend:f128 FP32:f32:$R2) - Complexity = 3
                // Dst: (LXEBR:f128 FP32:f32:$R2)
/*16036*/     /*Scope*/ 10, /*->16047*/
/*16037*/       OPC_CheckChild0Type, MVT::f64,
/*16039*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LXDBR), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (fextend:f128 FP64:f64:$R2) - Complexity = 3
                // Dst: (LXDBR:f128 FP64:f64:$R2)
/*16047*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 73,  TARGET_VAL(ISD::SINT_TO_FP),// ->16125
/*16052*/   OPC_RecordChild0, // #0 = $R2
/*16053*/   OPC_Scope, 34, /*->16089*/ // 2 children in Scope
/*16055*/     OPC_CheckChild0Type, MVT::i32,
/*16057*/     OPC_SwitchType /*3 cases */, 8,  MVT::f32,// ->16068
/*16060*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CEFBR), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f32 GR32:i32:$R2) - Complexity = 3
                // Dst: (CEFBR:f32 GR32:i32:$R2)
              /*SwitchType*/ 8,  MVT::f64,// ->16078
/*16070*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CDFBR), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f64 GR32:i32:$R2) - Complexity = 3
                // Dst: (CDFBR:f64 GR32:i32:$R2)
              /*SwitchType*/ 8,  MVT::f128,// ->16088
/*16080*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CXFBR), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f128 GR32:i32:$R2) - Complexity = 3
                // Dst: (CXFBR:f128 GR32:i32:$R2)
              0, // EndSwitchType
/*16089*/   /*Scope*/ 34, /*->16124*/
/*16090*/     OPC_CheckChild0Type, MVT::i64,
/*16092*/     OPC_SwitchType /*3 cases */, 8,  MVT::f32,// ->16103
/*16095*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CEGBR), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f32 GR64:i64:$R2) - Complexity = 3
                // Dst: (CEGBR:f32 GR64:i64:$R2)
              /*SwitchType*/ 8,  MVT::f64,// ->16113
/*16105*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CDGBR), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f64 GR64:i64:$R2) - Complexity = 3
                // Dst: (CDGBR:f64 GR64:i64:$R2)
              /*SwitchType*/ 8,  MVT::f128,// ->16123
/*16115*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CXGBR), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f128 GR64:i64:$R2) - Complexity = 3
                // Dst: (CXGBR:f128 GR64:i64:$R2)
              0, // EndSwitchType
/*16124*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 36,  TARGET_VAL(ISD::FABS),// ->16164
/*16128*/   OPC_RecordChild0, // #0 = $R2
/*16129*/   OPC_SwitchType /*3 cases */, 9,  MVT::f32,// ->16141
/*16132*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPEBR), 0,
                  2/*#VTs*/, MVT::f32, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 FP32:f32:$R2) - Complexity = 3
              // Dst: (LPEBR:f32:i32 FP32:f32:$R2)
            /*SwitchType*/ 9,  MVT::f64,// ->16152
/*16143*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPDBR), 0,
                  2/*#VTs*/, MVT::f64, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (fabs:f64 FP64:f64:$R2) - Complexity = 3
              // Dst: (LPDBR:f64:i32 FP64:f64:$R2)
            /*SwitchType*/ 9,  MVT::f128,// ->16163
/*16154*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPXBR), 0,
                  2/*#VTs*/, MVT::f128, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (fabs:f128 FP128:f128:$R2) - Complexity = 3
              // Dst: (LPXBR:f128:i32 FP128:f128:$R2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 45,  TARGET_VAL(ISD::FRINT),// ->16212
/*16167*/   OPC_RecordChild0, // #0 = $src
/*16168*/   OPC_SwitchType /*3 cases */, 12,  MVT::f32,// ->16183
/*16171*/     OPC_EmitInteger, MVT::i8, 0, 
/*16174*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIEBR), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 0, 
              // Src: (frint:f32 FP32:f32:$src) - Complexity = 3
              // Dst: (FIEBR:f32 0:i8, FP32:f32:$src)
            /*SwitchType*/ 12,  MVT::f64,// ->16197
/*16185*/     OPC_EmitInteger, MVT::i8, 0, 
/*16188*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIDBR), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 0, 
              // Src: (frint:f64 FP64:f64:$src) - Complexity = 3
              // Dst: (FIDBR:f64 0:i8, FP64:f64:$src)
            /*SwitchType*/ 12,  MVT::f128,// ->16211
/*16199*/     OPC_EmitInteger, MVT::i8, 0, 
/*16202*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIXBR), 0,
                  1/*#VTs*/, MVT::f128, 2/*#Ops*/, 1, 0, 
              // Src: (frint:f128 FP128:f128:$src) - Complexity = 3
              // Dst: (FIXBR:f128 0:i8, FP128:f128:$src)
            0, // EndSwitchType
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 16214 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 184
  // #OPC_RecordNode                     = 127
  // #OPC_RecordChild                    = 512
  // #OPC_RecordMemRef                   = 112
  // #OPC_CaptureGlueInput               = 10
  // #OPC_MoveChild                      = 275
  // #OPC_MoveParent                     = 442
  // #OPC_CheckSame                      = 26
  // #OPC_CheckPatternPredicate          = 4
  // #OPC_CheckPredicate                 = 737
  // #OPC_CheckOpcode                    = 215
  // #OPC_SwitchOpcode                   = 12
  // #OPC_CheckType                      = 197
  // #OPC_SwitchType                     = 89
  // #OPC_CheckChildType                 = 190
  // #OPC_CheckInteger                   = 10
  // #OPC_CheckCondCode                  = 0
  // #OPC_CheckValueType                 = 10
  // #OPC_CheckComplexPat                = 381
  // #OPC_CheckAndImm                    = 22
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 84
  // #OPC_EmitInteger                    = 23
  // #OPC_EmitStringInteger              = 39
  // #OPC_EmitRegister                   = 0
  // #OPC_EmitConvertToTarget            = 203
  // #OPC_EmitMergeInputChains           = 353
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 52
  // #OPC_EmitNodeXForm                  = 145
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 599

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

virtual bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (Subtarget.hasLoadStoreOnCond());
  case 1: return (Subtarget.hasDistinctOps());
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
  case 1: { // Predicate_anyextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() != ISD::NON_EXTLOAD;

  }
  case 2: { // Predicate_anyextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 3: { // Predicate_nonvolatile_anyextloadi8
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return !Load->isVolatile();

  }
  case 4: { // Predicate_uimm8zx4
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isUInt<4>(N->getZExtValue());

  }
  case 5: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 6: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 7: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 8: { // Predicate_nonvolatile_truncstorei8
    SDNode *N = Node;

  StoreSDNode *Store = cast<StoreSDNode>(N);
  return !Store->isVolatile();

  }
  case 9: { // Predicate_anyextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 10: { // Predicate_nonvolatile_anyextloadi16
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return !Load->isVolatile();

  }
  case 11: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 12: { // Predicate_nonvolatile_truncstorei16
    SDNode *N = Node;

  StoreSDNode *Store = cast<StoreSDNode>(N);
  return !Store->isVolatile();

  }
  case 13: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 14: { // Predicate_nonvolatile_load
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return !Load->isVolatile();

  }
  case 15: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 16: { // Predicate_nonvolatile_store
    SDNode *N = Node;

  StoreSDNode *Store = cast<StoreSDNode>(N);
  return !Store->isVolatile();

  }
  case 17: { // Predicate_anyextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 18: { // Predicate_nonvolatile_anyextloadi32
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return !Load->isVolatile();

  }
  case 19: { // Predicate_truncstorei32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 20: { // Predicate_nonvolatile_truncstorei32
    SDNode *N = Node;

  StoreSDNode *Store = cast<StoreSDNode>(N);
  return !Store->isVolatile();

  }
  case 21: { // Predicate_imm32sx8
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isInt<8>(N->getSExtValue());

  }
  case 22: { // Predicate_imm64sx8
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isInt<8>(N->getSExtValue());

  }
  case 23: { // Predicate_LoadStore8_32Pat
    SDNode *N = Node;
 return storeLoadCanUseMVC(N); 
  }
  case 24: { // Predicate_LoadStore16_32Pat
    SDNode *N = Node;
 return storeLoadCanUseMVC(N); 
  }
  case 25: { // Predicate_LoadStore32_32Pat
    SDNode *N = Node;
 return storeLoadCanUseMVC(N); 
  }
  case 26: { // Predicate_LoadStore8Pat
    SDNode *N = Node;
 return storeLoadCanUseMVC(N); 
  }
  case 27: { // Predicate_LoadStore16Pat
    SDNode *N = Node;
 return storeLoadCanUseMVC(N); 
  }
  case 28: { // Predicate_LoadStore32Pat
    SDNode *N = Node;
 return storeLoadCanUseMVC(N); 
  }
  case 29: { // Predicate_LoadStore64Pat
    SDNode *N = Node;
 return storeLoadCanUseMVC(N); 
  }
  case 30: { // Predicate_LoadStoreF32Pat
    SDNode *N = Node;
 return storeLoadCanUseMVC(N); 
  }
  case 31: { // Predicate_LoadStoreF64Pat
    SDNode *N = Node;
 return storeLoadCanUseMVC(N); 
  }
  case 32: { // Predicate_LoadStoreF128Pat
    SDNode *N = Node;
 return storeLoadCanUseMVC(N); 
  }
  case 33: { // Predicate_aligned_store
    SDNode *N = Node;

  StoreSDNode *Store = cast<StoreSDNode>(N);
  return Store->getAlignment() >= Store->getMemoryVT().getStoreSize();

  }
  case 34: { // Predicate_imm32sx16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isInt<16>(N->getSExtValue());

  }
  case 35: { // Predicate_imm64sx16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isInt<16>(N->getSExtValue());

  }
  case 36: { // Predicate_aligned_truncstorei16
    SDNode *N = Node;

  StoreSDNode *Store = cast<StoreSDNode>(N);
  return Store->getAlignment() >= Store->getMemoryVT().getStoreSize();

  }
  case 37: { // Predicate_aligned_truncstorei32
    SDNode *N = Node;

  StoreSDNode *Store = cast<StoreSDNode>(N);
  return Store->getAlignment() >= Store->getMemoryVT().getStoreSize();

  }
  case 38: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 39: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 40: { // Predicate_or_as_inserti8
    SDNode *N = Node;

  unsigned BitWidth = N->getValueType(0).getScalarType().getSizeInBits();
  return CurDAG->MaskedValueIsZero(N->getOperand(0),
                                   APInt::getLowBitsSet(BitWidth, 8));

  }
  case 41: { // Predicate_or_as_revinserti8
    SDNode *N = Node;

  unsigned BitWidth = N->getValueType(0).getScalarType().getSizeInBits();
  return CurDAG->MaskedValueIsZero(N->getOperand(1),
                                   APInt::getLowBitsSet(BitWidth, 8));

  }
  case 42: { // Predicate_imm32ll16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLL(N->getZExtValue());

  }
  case 43: { // Predicate_imm32lh16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLH(N->getZExtValue());

  }
  case 44: { // Predicate_imm64ll16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLL(N->getZExtValue());

  }
  case 45: { // Predicate_imm64lh16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLH(N->getZExtValue());

  }
  case 46: { // Predicate_imm64hl16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmHL(N->getZExtValue());

  }
  case 47: { // Predicate_imm64hh16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmHH(N->getZExtValue());

  }
  case 48: { // Predicate_imm64lf32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLF(N->getZExtValue());

  }
  case 49: { // Predicate_imm64hf32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmHF(N->getZExtValue());

  }
  case 50: { // Predicate_imm32len8
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isUInt<8>(N->getZExtValue() - 1);

  }
  case 51: { // Predicate_cond4
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return (N->getZExtValue() < 16); 
  }
  case 52: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 53: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 54: { // Predicate_sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 55: { // Predicate_zextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 56: { // Predicate_imm64sx32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isInt<32>(N->getSExtValue());

  }
  case 57: { // Predicate_imm64zx32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isUInt<32>(N->getZExtValue());

  }
  case 58: { // Predicate_imm64zx32n
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isUInt<32>(-N->getSExtValue());

  }
  case 59: { // Predicate_imm32ll16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLL(uint32_t(~N->getZExtValue()));

  }
  case 60: { // Predicate_imm32lh16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLH(uint32_t(~N->getZExtValue()));

  }
  case 61: { // Predicate_imm64ll16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLL(uint64_t(~N->getZExtValue()));

  }
  case 62: { // Predicate_imm64lh16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLH(uint64_t(~N->getZExtValue()));

  }
  case 63: { // Predicate_imm64hl16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmHL(uint64_t(~N->getZExtValue()));

  }
  case 64: { // Predicate_imm64hh16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmHH(uint64_t(~N->getZExtValue()));

  }
  case 65: { // Predicate_imm64lf32c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLF(uint64_t(~N->getZExtValue()));

  }
  case 66: { // Predicate_imm64hf32c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmHF(uint64_t(~N->getZExtValue()));

  }
  case 67: { // Predicate_aligned_load
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return Load->getAlignment() >= Load->getMemoryVT().getStoreSize();

  }
  case 68: { // Predicate_aligned_sextloadi16
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return Load->getAlignment() >= Load->getMemoryVT().getStoreSize();

  }
  case 69: { // Predicate_aligned_sextloadi32
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return Load->getAlignment() >= Load->getMemoryVT().getStoreSize();

  }
  case 70: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 71: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 72: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 73: { // Predicate_aligned_zextloadi16
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return Load->getAlignment() >= Load->getMemoryVT().getStoreSize();

  }
  case 74: { // Predicate_aligned_zextloadi32
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return Load->getAlignment() >= Load->getMemoryVT().getStoreSize();

  }
  case 75: { // Predicate_sextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 76: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 77: { // Predicate_extloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 78: { // Predicate_extloadf32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::f32;

  }
  case 79: { // Predicate_extloadf64
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::f64;

  }
  case 80: { // Predicate_atomic_load_add_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 81: { // Predicate_atomic_load_add_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 82: { // Predicate_atomic_load_and_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 83: { // Predicate_atomic_load_and_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 84: { // Predicate_atomic_load_or_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 85: { // Predicate_atomic_load_or_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 86: { // Predicate_atomic_load_xor_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 87: { // Predicate_atomic_load_xor_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 88: { // Predicate_atomic_load_nand_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 89: { // Predicate_atomic_load_nand_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 90: { // Predicate_atomic_cmp_swap_32
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 91: { // Predicate_atomic_cmp_swap_64
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;

  }
  case 92: { // Predicate_atomic_swap_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 93: { // Predicate_atomic_swap_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 94: { // Predicate_atomic_load_sub_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 95: { // Predicate_atomic_load_sub_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 96: { // Predicate_atomic_load_min_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 97: { // Predicate_atomic_load_min_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 98: { // Predicate_atomic_load_max_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 99: { // Predicate_atomic_load_max_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 100: { // Predicate_atomic_load_umin_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 101: { // Predicate_atomic_load_umin_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 102: { // Predicate_atomic_load_umax_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 103: { // Predicate_atomic_load_umax_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 104: { // Predicate_access_reg
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return N->getZExtValue() < 16; 
  }
  case 105: { // Predicate_fpimm0
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);
 return N->isExactlyValue(+0.0); 
  }
  case 106: { // Predicate_imm32zx8
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isUInt<8>(N->getZExtValue());

  }
  case 107: { // Predicate_imm32zx16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isUInt<16>(N->getZExtValue());

  }
  case 108: { // Predicate_imm64zx16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isUInt<16>(N->getZExtValue());

  }
  case 109: { // Predicate_fpimmneg0
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
    Result.resize(NextRes+3);
    return selectBDXAddr20Only(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 1:
    Result.resize(NextRes+2);
    return selectBDAddr20Only(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 2:
    Result.resize(NextRes+2);
    return selectBDAddr12Pair(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 3:
    Result.resize(NextRes+2);
    return selectBDAddr20Pair(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 4:
    Result.resize(NextRes+2);
    return selectBDAddr12Only(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 5:
    Result.resize(NextRes+1);
    return selectPCRelAddress(N, Result[NextRes+0].first);
  case 6:
    Result.resize(NextRes+3);
    return selectBDXAddr12Pair(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 7:
    Result.resize(NextRes+3);
    return selectBDXAddr20Pair(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 8:
    Result.resize(NextRes+3);
    return selectBDXAddr20Only128(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 9:
    Result.resize(NextRes+2);
    return selectBDAddr12Only(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 10:
    Result.resize(NextRes+2);
    return selectBDAddr20Only(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 11:
    Result.resize(NextRes+3);
    return selectDynAlloc12Only(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 12:
    Result.resize(NextRes+3);
    return selectLAAddr12Pair(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 13:
    Result.resize(NextRes+3);
    return selectLAAddr20Pair(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 14:
    Result.resize(NextRes+3);
    return selectBDXAddr12Only(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 15:
    Result.resize(NextRes+1);
    return selectPCRelAddress(N, Result[NextRes+0].first);
  }
}

virtual SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // SIMM8
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(int8_t(N->getZExtValue()), MVT::i64);

  }
  case 1: {  // UIMM8
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(uint8_t(N->getZExtValue()), MVT::i64);

  }
  case 2: {  // SIMM16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(int16_t(N->getZExtValue()), MVT::i64);

  }
  case 3: {  // LL16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Value = N->getZExtValue() & 0x000000000000FFFFULL;
  return CurDAG->getTargetConstant(Value, MVT::i64);

  }
  case 4: {  // LH16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Value = (N->getZExtValue() & 0x00000000FFFF0000ULL) >> 16;
  return CurDAG->getTargetConstant(Value, MVT::i64);

  }
  case 5: {  // HL16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Value = (N->getZExtValue() & 0x0000FFFF00000000ULL) >> 32;
  return CurDAG->getTargetConstant(Value, MVT::i64);

  }
  case 6: {  // HH16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Value = (N->getZExtValue() & 0xFFFF000000000000ULL) >> 48;
  return CurDAG->getTargetConstant(Value, MVT::i64);

  }
  case 7: {  // LF32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Value = N->getZExtValue() & 0x00000000FFFFFFFFULL;
  return CurDAG->getTargetConstant(Value, MVT::i64);

  }
  case 8: {  // HF32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Value = N->getZExtValue() >> 32;
  return CurDAG->getTargetConstant(Value, MVT::i64);

  }
  case 9: {  // UIMM32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(uint32_t(N->getZExtValue()), MVT::i64);

  }
  case 10: {  // SIMM32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(int32_t(N->getZExtValue()), MVT::i64);

  }
  case 11: {  // NEGIMM32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(uint32_t(-N->getZExtValue()), MVT::i64);

  }
  case 12: {  // UIMM16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(uint16_t(N->getZExtValue()), MVT::i64);

  }
  }
}

