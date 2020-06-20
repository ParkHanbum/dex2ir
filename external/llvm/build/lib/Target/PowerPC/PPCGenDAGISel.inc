/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*DAG Instruction Selector for the PPC target                                 *|
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
/*0*/     OPC_SwitchOpcode /*128 cases */, 33,  TARGET_VAL(ISD::PREFETCH),// ->37
/*4*/       OPC_RecordMemRef,
/*5*/       OPC_RecordNode,   // #0 = 'prefetch' chained node
/*6*/       OPC_RecordChild1, // #1 = $dst
/*7*/       OPC_MoveChild, 2,
/*9*/       OPC_CheckInteger, 0, 
/*11*/      OPC_CheckType, MVT::i32,
/*13*/      OPC_MoveParent,
/*14*/      OPC_MoveChild, 3,
/*16*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19*/      OPC_MoveParent,
/*20*/      OPC_MoveChild, 4,
/*22*/      OPC_CheckInteger, 1, 
/*24*/      OPC_MoveParent,
/*25*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*28*/      OPC_EmitMergeInputChains1_0,
/*29*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DCBT), 0|OPFL_Chain|OPFL_MemRefs,
                0/*#VTs*/, 2/*#Ops*/, 2, 3, 
            // Src: (prefetch xoaddr:iPTR:$dst, 0:i32, (imm:i32), 1:i32) - Complexity = 25
            // Dst: (DCBT xoaddr:iPTR:$dst)
          /*SwitchOpcode*/ 13|128,5/*653*/,  TARGET_VAL(ISD::INTRINSIC_VOID),// ->694
/*41*/      OPC_RecordNode,   // #0 = 'intrinsic_void' chained node
/*42*/      OPC_MoveChild, 1,
/*44*/      OPC_Scope, 17, /*->63*/ // 22 children in Scope
/*46*/        OPC_CheckInteger, 96|128,12/*1632*/, 
/*49*/        OPC_MoveParent,
/*50*/        OPC_RecordChild2, // #1 = $dst
/*51*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*54*/        OPC_EmitMergeInputChains1_0,
/*55*/        OPC_MorphNodeTo, TARGET_VAL(PPC::DCBA), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1632:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBA xoaddr:iPTR:$dst)
/*63*/      /*Scope*/ 17, /*->81*/
/*64*/        OPC_CheckInteger, 97|128,12/*1633*/, 
/*67*/        OPC_MoveParent,
/*68*/        OPC_RecordChild2, // #1 = $dst
/*69*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*72*/        OPC_EmitMergeInputChains1_0,
/*73*/        OPC_MorphNodeTo, TARGET_VAL(PPC::DCBF), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1633:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBF xoaddr:iPTR:$dst)
/*81*/      /*Scope*/ 17, /*->99*/
/*82*/        OPC_CheckInteger, 98|128,12/*1634*/, 
/*85*/        OPC_MoveParent,
/*86*/        OPC_RecordChild2, // #1 = $dst
/*87*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*90*/        OPC_EmitMergeInputChains1_0,
/*91*/        OPC_MorphNodeTo, TARGET_VAL(PPC::DCBI), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1634:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBI xoaddr:iPTR:$dst)
/*99*/      /*Scope*/ 17, /*->117*/
/*100*/       OPC_CheckInteger, 99|128,12/*1635*/, 
/*103*/       OPC_MoveParent,
/*104*/       OPC_RecordChild2, // #1 = $dst
/*105*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*108*/       OPC_EmitMergeInputChains1_0,
/*109*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBST), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1635:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBST xoaddr:iPTR:$dst)
/*117*/     /*Scope*/ 17, /*->135*/
/*118*/       OPC_CheckInteger, 100|128,12/*1636*/, 
/*121*/       OPC_MoveParent,
/*122*/       OPC_RecordChild2, // #1 = $dst
/*123*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*126*/       OPC_EmitMergeInputChains1_0,
/*127*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBT), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1636:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBT xoaddr:iPTR:$dst)
/*135*/     /*Scope*/ 17, /*->153*/
/*136*/       OPC_CheckInteger, 101|128,12/*1637*/, 
/*139*/       OPC_MoveParent,
/*140*/       OPC_RecordChild2, // #1 = $dst
/*141*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*144*/       OPC_EmitMergeInputChains1_0,
/*145*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBTST), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1637:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBTST xoaddr:iPTR:$dst)
/*153*/     /*Scope*/ 17, /*->171*/
/*154*/       OPC_CheckInteger, 102|128,12/*1638*/, 
/*157*/       OPC_MoveParent,
/*158*/       OPC_RecordChild2, // #1 = $dst
/*159*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*162*/       OPC_EmitMergeInputChains1_0,
/*163*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBZ), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1638:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBZ xoaddr:iPTR:$dst)
/*171*/     /*Scope*/ 17, /*->189*/
/*172*/       OPC_CheckInteger, 103|128,12/*1639*/, 
/*175*/       OPC_MoveParent,
/*176*/       OPC_RecordChild2, // #1 = $dst
/*177*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*180*/       OPC_EmitMergeInputChains1_0,
/*181*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBZL), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1639:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBZL xoaddr:iPTR:$dst)
/*189*/     /*Scope*/ 21, /*->211*/
/*190*/       OPC_CheckInteger, 92|128,11/*1500*/, 
/*193*/       OPC_MoveParent,
/*194*/       OPC_RecordChild2, // #1 = $rS
/*195*/       OPC_RecordChild3, // #2 = $dst
/*196*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*198*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*201*/       OPC_EmitMergeInputChains1_0,
/*202*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVEBX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1500:iPTR, v16i8:v16i8:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVEBX v16i8:v16i8:$rS, xoaddr:iPTR:$dst)
/*211*/     /*Scope*/ 21, /*->233*/
/*212*/       OPC_CheckInteger, 93|128,11/*1501*/, 
/*215*/       OPC_MoveParent,
/*216*/       OPC_RecordChild2, // #1 = $rS
/*217*/       OPC_RecordChild3, // #2 = $dst
/*218*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*220*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*223*/       OPC_EmitMergeInputChains1_0,
/*224*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVEHX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1501:iPTR, v8i16:v8i16:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVEHX v8i16:v8i16:$rS, xoaddr:iPTR:$dst)
/*233*/     /*Scope*/ 21, /*->255*/
/*234*/       OPC_CheckInteger, 94|128,11/*1502*/, 
/*237*/       OPC_MoveParent,
/*238*/       OPC_RecordChild2, // #1 = $rS
/*239*/       OPC_RecordChild3, // #2 = $dst
/*240*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*242*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*245*/       OPC_EmitMergeInputChains1_0,
/*246*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVEWX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1502:iPTR, v4i32:v4i32:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVEWX v4i32:v4i32:$rS, xoaddr:iPTR:$dst)
/*255*/     /*Scope*/ 21, /*->277*/
/*256*/       OPC_CheckInteger, 95|128,11/*1503*/, 
/*259*/       OPC_MoveParent,
/*260*/       OPC_RecordChild2, // #1 = $rS
/*261*/       OPC_RecordChild3, // #2 = $dst
/*262*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*264*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*267*/       OPC_EmitMergeInputChains1_0,
/*268*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1503:iPTR, v4i32:v4i32:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVX v4i32:v4i32:$rS, xoaddr:iPTR:$dst)
/*277*/     /*Scope*/ 21, /*->299*/
/*278*/       OPC_CheckInteger, 96|128,11/*1504*/, 
/*281*/       OPC_MoveParent,
/*282*/       OPC_RecordChild2, // #1 = $rS
/*283*/       OPC_RecordChild3, // #2 = $dst
/*284*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*286*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*289*/       OPC_EmitMergeInputChains1_0,
/*290*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVXL), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1504:iPTR, v4i32:v4i32:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVXL v4i32:v4i32:$rS, xoaddr:iPTR:$dst)
/*299*/     /*Scope*/ 65, /*->365*/
/*300*/       OPC_CheckInteger, 80|128,11/*1488*/, 
/*303*/       OPC_MoveParent,
/*304*/       OPC_RecordChild2, // #1 = $rA
/*305*/       OPC_Scope, 28, /*->335*/ // 2 children in Scope
/*307*/         OPC_CheckChild2Type, MVT::i64,
/*309*/         OPC_RecordChild3, // #2 = $rB
/*310*/         OPC_RecordChild4, // #3 = $STRM
/*311*/         OPC_MoveChild, 4,
/*313*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*316*/         OPC_MoveParent,
/*317*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*319*/         OPC_EmitMergeInputChains1_0,
/*320*/         OPC_EmitInteger, MVT::i32, 0, 
/*323*/         OPC_EmitConvertToTarget, 3,
/*325*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTST64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1488:iPTR, i64:i64:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTST64 0:i32, (imm:i32):$STRM, ?:i64:$rA, ?:i32:$rB)
/*335*/       /*Scope*/ 28, /*->364*/
/*336*/         OPC_CheckChild2Type, MVT::i32,
/*338*/         OPC_RecordChild3, // #2 = $rB
/*339*/         OPC_RecordChild4, // #3 = $STRM
/*340*/         OPC_MoveChild, 4,
/*342*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*345*/         OPC_MoveParent,
/*346*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*348*/         OPC_EmitMergeInputChains1_0,
/*349*/         OPC_EmitInteger, MVT::i32, 0, 
/*352*/         OPC_EmitConvertToTarget, 3,
/*354*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTST), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1488:iPTR, i32:i32:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTST 0:i32, (imm:i32):$STRM, ?:i32:$rA, ?:i32:$rB)
/*364*/       0, /*End of Scope*/
/*365*/     /*Scope*/ 65, /*->431*/
/*366*/       OPC_CheckInteger, 81|128,11/*1489*/, 
/*369*/       OPC_MoveParent,
/*370*/       OPC_RecordChild2, // #1 = $rA
/*371*/       OPC_Scope, 28, /*->401*/ // 2 children in Scope
/*373*/         OPC_CheckChild2Type, MVT::i64,
/*375*/         OPC_RecordChild3, // #2 = $rB
/*376*/         OPC_RecordChild4, // #3 = $STRM
/*377*/         OPC_MoveChild, 4,
/*379*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*382*/         OPC_MoveParent,
/*383*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*385*/         OPC_EmitMergeInputChains1_0,
/*386*/         OPC_EmitInteger, MVT::i32, 1, 
/*389*/         OPC_EmitConvertToTarget, 3,
/*391*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTSTT64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1489:iPTR, i64:i64:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTSTT64 1:i32, (imm:i32):$STRM, ?:i64:$rA, ?:i32:$rB)
/*401*/       /*Scope*/ 28, /*->430*/
/*402*/         OPC_CheckChild2Type, MVT::i32,
/*404*/         OPC_RecordChild3, // #2 = $rB
/*405*/         OPC_RecordChild4, // #3 = $STRM
/*406*/         OPC_MoveChild, 4,
/*408*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*411*/         OPC_MoveParent,
/*412*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*414*/         OPC_EmitMergeInputChains1_0,
/*415*/         OPC_EmitInteger, MVT::i32, 1, 
/*418*/         OPC_EmitConvertToTarget, 3,
/*420*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTSTT), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1489:iPTR, i32:i32:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTSTT 1:i32, (imm:i32):$STRM, ?:i32:$rA, ?:i32:$rB)
/*430*/       0, /*End of Scope*/
/*431*/     /*Scope*/ 35, /*->467*/
/*432*/       OPC_CheckInteger, 77|128,11/*1485*/, 
/*435*/       OPC_MoveParent,
/*436*/       OPC_RecordChild2, // #1 = $STRM
/*437*/       OPC_MoveChild, 2,
/*439*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*442*/       OPC_MoveParent,
/*443*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*445*/       OPC_EmitMergeInputChains1_0,
/*446*/       OPC_EmitInteger, MVT::i32, 0, 
/*449*/       OPC_EmitConvertToTarget, 1,
/*451*/       OPC_EmitInteger, MVT::i32, 0, 
/*454*/       OPC_EmitInteger, MVT::i32, 0, 
/*457*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DSS), 0|OPFL_Chain,
                  0/*#VTs*/, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (intrinsic_void 1485:iPTR, (imm:i32):$STRM) - Complexity = 11
              // Dst: (DSS 0:i32, (imm:i32):$STRM, 0:i32, 0:i32)
/*467*/     /*Scope*/ 65, /*->533*/
/*468*/       OPC_CheckInteger, 79|128,11/*1487*/, 
/*471*/       OPC_MoveParent,
/*472*/       OPC_RecordChild2, // #1 = $rA
/*473*/       OPC_Scope, 28, /*->503*/ // 2 children in Scope
/*475*/         OPC_CheckChild2Type, MVT::i32,
/*477*/         OPC_RecordChild3, // #2 = $rB
/*478*/         OPC_RecordChild4, // #3 = $STRM
/*479*/         OPC_MoveChild, 4,
/*481*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*484*/         OPC_MoveParent,
/*485*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*487*/         OPC_EmitMergeInputChains1_0,
/*488*/         OPC_EmitInteger, MVT::i32, 0, 
/*491*/         OPC_EmitConvertToTarget, 3,
/*493*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DST), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1487:iPTR, i32:i32:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DST 0:i32, (imm:i32):$STRM, ?:i32:$rA, ?:i32:$rB)
/*503*/       /*Scope*/ 28, /*->532*/
/*504*/         OPC_CheckChild2Type, MVT::i64,
/*506*/         OPC_RecordChild3, // #2 = $rB
/*507*/         OPC_RecordChild4, // #3 = $STRM
/*508*/         OPC_MoveChild, 4,
/*510*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*513*/         OPC_MoveParent,
/*514*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*516*/         OPC_EmitMergeInputChains1_0,
/*517*/         OPC_EmitInteger, MVT::i32, 0, 
/*520*/         OPC_EmitConvertToTarget, 3,
/*522*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DST64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1487:iPTR, i64:i64:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DST64 0:i32, (imm:i32):$STRM, ?:i64:$rA, ?:i32:$rB)
/*532*/       0, /*End of Scope*/
/*533*/     /*Scope*/ 65, /*->599*/
/*534*/       OPC_CheckInteger, 82|128,11/*1490*/, 
/*537*/       OPC_MoveParent,
/*538*/       OPC_RecordChild2, // #1 = $rA
/*539*/       OPC_Scope, 28, /*->569*/ // 2 children in Scope
/*541*/         OPC_CheckChild2Type, MVT::i32,
/*543*/         OPC_RecordChild3, // #2 = $rB
/*544*/         OPC_RecordChild4, // #3 = $STRM
/*545*/         OPC_MoveChild, 4,
/*547*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*550*/         OPC_MoveParent,
/*551*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*553*/         OPC_EmitMergeInputChains1_0,
/*554*/         OPC_EmitInteger, MVT::i32, 1, 
/*557*/         OPC_EmitConvertToTarget, 3,
/*559*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTT), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1490:iPTR, i32:i32:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTT 1:i32, (imm:i32):$STRM, ?:i32:$rA, ?:i32:$rB)
/*569*/       /*Scope*/ 28, /*->598*/
/*570*/         OPC_CheckChild2Type, MVT::i64,
/*572*/         OPC_RecordChild3, // #2 = $rB
/*573*/         OPC_RecordChild4, // #3 = $STRM
/*574*/         OPC_MoveChild, 4,
/*576*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*579*/         OPC_MoveParent,
/*580*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*582*/         OPC_EmitMergeInputChains1_0,
/*583*/         OPC_EmitInteger, MVT::i32, 1, 
/*586*/         OPC_EmitConvertToTarget, 3,
/*588*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTT64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1490:iPTR, i64:i64:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTT64 1:i32, (imm:i32):$STRM, ?:i64:$rA, ?:i32:$rB)
/*598*/       0, /*End of Scope*/
/*599*/     /*Scope*/ 15, /*->615*/
/*600*/       OPC_CheckInteger, 106|128,12/*1642*/, 
/*603*/       OPC_MoveParent,
/*604*/       OPC_EmitMergeInputChains1_0,
/*605*/       OPC_EmitInteger, MVT::i32, 0, 
/*608*/       OPC_MorphNodeTo, TARGET_VAL(PPC::SYNC), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 1642:iPTR) - Complexity = 8
              // Dst: (SYNC 0:i32)
/*615*/     /*Scope*/ 31, /*->647*/
/*616*/       OPC_CheckInteger, 105|128,12/*1641*/, 
/*619*/       OPC_MoveParent,
/*620*/       OPC_RecordChild2, // #1 = $rS
/*621*/       OPC_Scope, 11, /*->634*/ // 2 children in Scope
/*623*/         OPC_CheckChild2Type, MVT::i32,
/*625*/         OPC_EmitMergeInputChains1_0,
/*626*/         OPC_MorphNodeTo, TARGET_VAL(PPC::MTCTRloop), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_void 1641:iPTR, i32:i32:$rS) - Complexity = 8
                // Dst: (MTCTRloop:i32 i32:i32:$rS)
/*634*/       /*Scope*/ 11, /*->646*/
/*635*/         OPC_CheckChild2Type, MVT::i64,
/*637*/         OPC_EmitMergeInputChains1_0,
/*638*/         OPC_MorphNodeTo, TARGET_VAL(PPC::MTCTR8loop), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (intrinsic_void 1641:iPTR, i64:i64:$rS) - Complexity = 8
                // Dst: (MTCTR8loop:i64 i64:i64:$rS)
/*646*/       0, /*End of Scope*/
/*647*/     /*Scope*/ 15, /*->663*/
/*648*/       OPC_CheckInteger, 91|128,11/*1499*/, 
/*651*/       OPC_MoveParent,
/*652*/       OPC_RecordChild2, // #1 = $vB
/*653*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*655*/       OPC_EmitMergeInputChains1_0,
/*656*/       OPC_MorphNodeTo, TARGET_VAL(PPC::MTVSCR), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 1499:iPTR, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (MTVSCR v4i32:v4i32:$vB)
/*663*/     /*Scope*/ 29, /*->693*/
/*664*/       OPC_CheckInteger, 78|128,11/*1486*/, 
/*667*/       OPC_MoveParent,
/*668*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*670*/       OPC_EmitMergeInputChains1_0,
/*671*/       OPC_EmitInteger, MVT::i32, 1, 
/*674*/       OPC_EmitInteger, MVT::i32, 0, 
/*677*/       OPC_EmitInteger, MVT::i32, 0, 
/*680*/       OPC_EmitInteger, MVT::i32, 0, 
/*683*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DSSALL), 0|OPFL_Chain,
                  0/*#VTs*/, 4/*#Ops*/, 1, 2, 3, 4, 
              // Src: (intrinsic_void 1486:iPTR) - Complexity = 8
              // Dst: (DSSALL 1:i32, 0:i32, 0:i32, 0:i32)
/*693*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 83|128,4/*595*/,  TARGET_VAL(ISD::ADD),// ->1293
/*698*/     OPC_Scope, 49|128,1/*177*/, /*->878*/ // 3 children in Scope
/*701*/       OPC_RecordChild0, // #0 = $rA
/*702*/       OPC_MoveChild, 1,
/*704*/       OPC_SwitchOpcode /*2 cases */, 24,  TARGET_VAL(PPCISD::Lo),// ->732
/*708*/         OPC_RecordChild0, // #1 = $sym
/*709*/         OPC_MoveChild, 0,
/*711*/         OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*714*/         OPC_MoveParent,
/*715*/         OPC_MoveChild, 1,
/*717*/         OPC_CheckInteger, 0, 
/*719*/         OPC_MoveParent,
/*720*/         OPC_MoveParent,
/*721*/         OPC_CheckType, MVT::i32,
/*723*/         OPC_MorphNodeTo, TARGET_VAL(PPC::LA), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 i32:i32:$rA, (PPClo:i32 (tglobaladdr:i32):$sym, 0:i32)) - Complexity = 14
                // Dst: (LA:i32 i32:i32:$rA, (tglobaladdr:i32):$sym)
              /*SwitchOpcode*/ 13|128,1/*141*/,  TARGET_VAL(PPCISD::Hi),// ->877
/*736*/         OPC_RecordChild0, // #1 = $g
/*737*/         OPC_MoveChild, 0,
/*739*/         OPC_SwitchOpcode /*4 cases */, 31,  TARGET_VAL(ISD::TargetGlobalAddress),// ->774
/*743*/           OPC_MoveParent,
/*744*/           OPC_MoveChild, 1,
/*746*/           OPC_CheckInteger, 0, 
/*748*/           OPC_MoveParent,
/*749*/           OPC_MoveParent,
/*750*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->762
/*753*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 i32:i32:$in, (PPChi:i32 (tglobaladdr:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tglobaladdr:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->773
/*764*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 i64:i64:$in, (PPChi:i64 (tglobaladdr:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tglobaladdr:i64):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetConstantPool),// ->808
/*777*/           OPC_MoveParent,
/*778*/           OPC_MoveChild, 1,
/*780*/           OPC_CheckInteger, 0, 
/*782*/           OPC_MoveParent,
/*783*/           OPC_MoveParent,
/*784*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->796
/*787*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 i32:i32:$in, (PPChi:i32 (tconstpool:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tconstpool:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->807
/*798*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 i64:i64:$in, (PPChi:i64 (tconstpool:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tconstpool:i64):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetJumpTable),// ->842
/*811*/           OPC_MoveParent,
/*812*/           OPC_MoveChild, 1,
/*814*/           OPC_CheckInteger, 0, 
/*816*/           OPC_MoveParent,
/*817*/           OPC_MoveParent,
/*818*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->830
/*821*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 i32:i32:$in, (PPChi:i32 (tjumptable:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tjumptable:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->841
/*832*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 i64:i64:$in, (PPChi:i64 (tjumptable:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tjumptable:i64):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetBlockAddress),// ->876
/*845*/           OPC_MoveParent,
/*846*/           OPC_MoveChild, 1,
/*848*/           OPC_CheckInteger, 0, 
/*850*/           OPC_MoveParent,
/*851*/           OPC_MoveParent,
/*852*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->864
/*855*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 i32:i32:$in, (PPChi:i32 (tblockaddress:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tblockaddress:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->875
/*866*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 i64:i64:$in, (PPChi:i64 (tblockaddress:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tblockaddress:i64):$g)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*878*/     /*Scope*/ 53|128,1/*181*/, /*->1061*/
/*880*/       OPC_MoveChild, 0,
/*882*/       OPC_SwitchOpcode /*2 cases */, 25,  TARGET_VAL(PPCISD::Lo),// ->911
/*886*/         OPC_RecordChild0, // #0 = $sym
/*887*/         OPC_MoveChild, 0,
/*889*/         OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*892*/         OPC_MoveParent,
/*893*/         OPC_MoveChild, 1,
/*895*/         OPC_CheckInteger, 0, 
/*897*/         OPC_MoveParent,
/*898*/         OPC_MoveParent,
/*899*/         OPC_RecordChild1, // #1 = $rA
/*900*/         OPC_CheckType, MVT::i32,
/*902*/         OPC_MorphNodeTo, TARGET_VAL(PPC::LA), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (add:i32 (PPClo:i32 (tglobaladdr:i32):$sym, 0:i32), i32:i32:$rA) - Complexity = 14
                // Dst: (LA:i32 i32:i32:$rA, (tglobaladdr:i32):$sym)
              /*SwitchOpcode*/ 17|128,1/*145*/,  TARGET_VAL(PPCISD::Hi),// ->1060
/*915*/         OPC_RecordChild0, // #0 = $g
/*916*/         OPC_MoveChild, 0,
/*918*/         OPC_SwitchOpcode /*4 cases */, 32,  TARGET_VAL(ISD::TargetGlobalAddress),// ->954
/*922*/           OPC_MoveParent,
/*923*/           OPC_MoveChild, 1,
/*925*/           OPC_CheckInteger, 0, 
/*927*/           OPC_MoveParent,
/*928*/           OPC_MoveParent,
/*929*/           OPC_RecordChild1, // #1 = $in
/*930*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->942
/*933*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tglobaladdr:i64):$g, 0:i64), i64:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tglobaladdr:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->953
/*944*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tglobaladdr:i32):$g, 0:i32), i32:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tglobaladdr:i32):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::TargetConstantPool),// ->989
/*957*/           OPC_MoveParent,
/*958*/           OPC_MoveChild, 1,
/*960*/           OPC_CheckInteger, 0, 
/*962*/           OPC_MoveParent,
/*963*/           OPC_MoveParent,
/*964*/           OPC_RecordChild1, // #1 = $in
/*965*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->977
/*968*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tconstpool:i64):$g, 0:i64), i64:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tconstpool:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->988
/*979*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tconstpool:i32):$g, 0:i32), i32:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tconstpool:i32):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::TargetJumpTable),// ->1024
/*992*/           OPC_MoveParent,
/*993*/           OPC_MoveChild, 1,
/*995*/           OPC_CheckInteger, 0, 
/*997*/           OPC_MoveParent,
/*998*/           OPC_MoveParent,
/*999*/           OPC_RecordChild1, // #1 = $in
/*1000*/          OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->1012
/*1003*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tjumptable:i64):$g, 0:i64), i64:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tjumptable:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->1023
/*1014*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tjumptable:i32):$g, 0:i32), i32:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tjumptable:i32):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::TargetBlockAddress),// ->1059
/*1027*/          OPC_MoveParent,
/*1028*/          OPC_MoveChild, 1,
/*1030*/          OPC_CheckInteger, 0, 
/*1032*/          OPC_MoveParent,
/*1033*/          OPC_MoveParent,
/*1034*/          OPC_RecordChild1, // #1 = $in
/*1035*/          OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->1047
/*1038*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tblockaddress:i64):$g, 0:i64), i64:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tblockaddress:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->1058
/*1049*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tblockaddress:i32):$g, 0:i32), i32:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tblockaddress:i32):$g)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*1061*/    /*Scope*/ 101|128,1/*229*/, /*->1292*/
/*1063*/      OPC_RecordChild0, // #0 = $rA
/*1064*/      OPC_Scope, 99, /*->1165*/ // 3 children in Scope
/*1066*/        OPC_RecordChild1, // #1 = $imm
/*1067*/        OPC_MoveChild, 1,
/*1069*/        OPC_SwitchOpcode /*2 cases */, 76,  TARGET_VAL(ISD::Constant),// ->1149
/*1073*/          OPC_Scope, 16, /*->1091*/ // 4 children in Scope
/*1075*/            OPC_CheckPredicate, 0, // Predicate_imm32SExt16
/*1077*/            OPC_MoveParent,
/*1078*/            OPC_CheckType, MVT::i32,
/*1080*/            OPC_EmitConvertToTarget, 1,
/*1082*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i32 i32:i32:$rA, (imm:i32)<<P:Predicate_imm32SExt16>>:$imm) - Complexity = 7
                    // Dst: (ADDI:i32 i32:i32:$rA, (imm:i32):$imm)
/*1091*/          /*Scope*/ 19, /*->1111*/
/*1092*/            OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*1094*/            OPC_MoveParent,
/*1095*/            OPC_CheckType, MVT::i32,
/*1097*/            OPC_EmitConvertToTarget, 1,
/*1099*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*1102*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (add:i32 i32:i32:$rA, (imm:i32)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm) - Complexity = 7
                    // Dst: (ADDIS:i32 i32:i32:$rA, (HI16:i32 (imm:i32):$imm))
/*1111*/          /*Scope*/ 16, /*->1128*/
/*1112*/            OPC_CheckPredicate, 2, // Predicate_imm64SExt16
/*1114*/            OPC_MoveParent,
/*1115*/            OPC_CheckType, MVT::i64,
/*1117*/            OPC_EmitConvertToTarget, 1,
/*1119*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i64 i64:i64:$rA, (imm:i64)<<P:Predicate_imm64SExt16>>:$imm) - Complexity = 7
                    // Dst: (ADDI8:i64 i64:i64:$rA, (imm:i64):$imm)
/*1128*/          /*Scope*/ 19, /*->1148*/
/*1129*/            OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*1131*/            OPC_MoveParent,
/*1132*/            OPC_CheckType, MVT::i64,
/*1134*/            OPC_EmitConvertToTarget, 1,
/*1136*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*1139*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (add:i64 i64:i64:$rA, (imm:i64)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm) - Complexity = 7
                    // Dst: (ADDIS8:i64 i64:i64:$rA, (HI16:i64 (imm:i64):$imm))
/*1148*/          0, /*End of Scope*/
                /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->1164
/*1152*/          OPC_MoveParent,
/*1153*/          OPC_CheckType, MVT::i64,
/*1155*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADD8TLS), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i64 i64:i64:$rA, (tglobaltlsaddr:i64):$rB) - Complexity = 6
                  // Dst: (ADD8TLS:i64 i64:i64:$rA, (tglobaltlsaddr:i64):$rB)
                0, // EndSwitchOpcode
/*1165*/      /*Scope*/ 18, /*->1184*/
/*1166*/        OPC_MoveChild, 0,
/*1168*/        OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*1171*/        OPC_MoveParent,
/*1172*/        OPC_RecordChild1, // #1 = $rA
/*1173*/        OPC_CheckType, MVT::i64,
/*1175*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADD8TLS), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (add:i64 (tglobaltlsaddr:i64):$rB, i64:i64:$rA) - Complexity = 6
                // Dst: (ADD8TLS:i64 i64:i64:$rA, (tglobaltlsaddr:i64):$rB)
/*1184*/      /*Scope*/ 106, /*->1291*/
/*1185*/        OPC_RecordChild1, // #1 = $imm
/*1186*/        OPC_Scope, 36, /*->1224*/ // 6 children in Scope
/*1188*/          OPC_MoveChild, 1,
/*1190*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1193*/          OPC_MoveParent,
/*1194*/          OPC_CheckType, MVT::i32,
/*1196*/          OPC_EmitConvertToTarget, 1,
/*1198*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*1201*/          OPC_EmitNode, TARGET_VAL(PPC::ADDI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*1210*/          OPC_EmitConvertToTarget, 1,
/*1212*/          OPC_EmitNodeXForm, 2, 5, // HA16
/*1215*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 6, 
                  // Src: (add:i32 i32:i32:$in, (imm:i32):$imm) - Complexity = 6
                  // Dst: (ADDIS:i32 (ADDI:i32 ?:i32:$in, (LO16:i32 (imm:i32):$imm)), (HA16:i32 (imm:i32):$imm))
/*1224*/        /*Scope*/ 11, /*->1236*/
/*1225*/          OPC_CheckType, MVT::i32,
/*1227*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADD4), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
                  // Dst: (ADD4:i32 i32:i32:$rA, i32:i32:$rB)
/*1236*/        /*Scope*/ 11, /*->1248*/
/*1237*/          OPC_CheckType, MVT::i64,
/*1239*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADD8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
                  // Dst: (ADD8:i64 i64:i64:$rA, i64:i64:$rB)
/*1248*/        /*Scope*/ 13, /*->1262*/
/*1249*/          OPC_CheckType, MVT::v16i8,
/*1251*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*1253*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUBM), 0,
                      1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                  // Src: (add:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 3
                  // Dst: (VADDUBM:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*1262*/        /*Scope*/ 13, /*->1276*/
/*1263*/          OPC_CheckType, MVT::v8i16,
/*1265*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*1267*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUHM), 0,
                      1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                  // Src: (add:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 3
                  // Dst: (VADDUHM:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*1276*/        /*Scope*/ 13, /*->1290*/
/*1277*/          OPC_CheckType, MVT::v4i32,
/*1279*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*1281*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUWM), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
                  // Dst: (VADDUWM:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*1290*/        0, /*End of Scope*/
/*1291*/      0, /*End of Scope*/
/*1292*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 117|128,6/*885*/,  TARGET_VAL(ISD::LOAD),// ->2182
/*1297*/    OPC_RecordMemRef,
/*1298*/    OPC_RecordNode,   // #0 = 'ld' chained node
/*1299*/    OPC_RecordChild1, // #1 = $src
/*1300*/    OPC_CheckPredicate, 3, // Predicate_unindexedload
/*1302*/    OPC_Scope, 19, /*->1323*/ // 19 children in Scope
/*1304*/      OPC_CheckPredicate, 4, // Predicate_zextload
/*1306*/      OPC_CheckPredicate, 5, // Predicate_zextloadi8
/*1308*/      OPC_CheckType, MVT::i32,
/*1310*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1313*/      OPC_EmitMergeInputChains1_0,
/*1314*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
              // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1323*/    /*Scope*/ 19, /*->1343*/
/*1324*/      OPC_CheckPredicate, 6, // Predicate_sextload
/*1326*/      OPC_CheckPredicate, 7, // Predicate_sextloadi16
/*1328*/      OPC_CheckType, MVT::i32,
/*1330*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1333*/      OPC_EmitMergeInputChains1_0,
/*1334*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHA), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
              // Dst: (LHA:i32 iaddr:iPTR:$src)
/*1343*/    /*Scope*/ 19, /*->1363*/
/*1344*/      OPC_CheckPredicate, 4, // Predicate_zextload
/*1346*/      OPC_CheckPredicate, 8, // Predicate_zextloadi16
/*1348*/      OPC_CheckType, MVT::i32,
/*1350*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1353*/      OPC_EmitMergeInputChains1_0,
/*1354*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
              // Dst: (LHZ:i32 iaddr:iPTR:$src)
/*1363*/    /*Scope*/ 17, /*->1381*/
/*1364*/      OPC_CheckPredicate, 9, // Predicate_load
/*1366*/      OPC_CheckType, MVT::i32,
/*1368*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1371*/      OPC_EmitMergeInputChains1_0,
/*1372*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWZ), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LWZ:i32 iaddr:iPTR:$src)
/*1381*/    /*Scope*/ 19, /*->1401*/
/*1382*/      OPC_CheckPredicate, 4, // Predicate_zextload
/*1384*/      OPC_CheckPredicate, 5, // Predicate_zextloadi8
/*1386*/      OPC_CheckType, MVT::i32,
/*1388*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1391*/      OPC_EmitMergeInputChains1_0,
/*1392*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
              // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1401*/    /*Scope*/ 19, /*->1421*/
/*1402*/      OPC_CheckPredicate, 6, // Predicate_sextload
/*1404*/      OPC_CheckPredicate, 7, // Predicate_sextloadi16
/*1406*/      OPC_CheckType, MVT::i32,
/*1408*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1411*/      OPC_EmitMergeInputChains1_0,
/*1412*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHAX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
              // Dst: (LHAX:i32 xaddr:iPTR:$src)
/*1421*/    /*Scope*/ 19, /*->1441*/
/*1422*/      OPC_CheckPredicate, 4, // Predicate_zextload
/*1424*/      OPC_CheckPredicate, 8, // Predicate_zextloadi16
/*1426*/      OPC_CheckType, MVT::i32,
/*1428*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1431*/      OPC_EmitMergeInputChains1_0,
/*1432*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
              // Dst: (LHZX:i32 xaddr:iPTR:$src)
/*1441*/    /*Scope*/ 17, /*->1459*/
/*1442*/      OPC_CheckPredicate, 9, // Predicate_load
/*1444*/      OPC_CheckType, MVT::i32,
/*1446*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1449*/      OPC_EmitMergeInputChains1_0,
/*1450*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWZX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LWZX:i32 xaddr:iPTR:$src)
/*1459*/    /*Scope*/ 36, /*->1496*/
/*1460*/      OPC_CheckPredicate, 4, // Predicate_zextload
/*1462*/      OPC_CheckPredicate, 10, // Predicate_zextloadi1
/*1464*/      OPC_CheckType, MVT::i32,
/*1466*/      OPC_Scope, 13, /*->1481*/ // 2 children in Scope
/*1468*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1471*/        OPC_EmitMergeInputChains1_0,
/*1472*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1481*/      /*Scope*/ 13, /*->1495*/
/*1482*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1485*/        OPC_EmitMergeInputChains1_0,
/*1486*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1495*/      0, /*End of Scope*/
/*1496*/    /*Scope*/ 105, /*->1602*/
/*1497*/      OPC_CheckPredicate, 11, // Predicate_extload
/*1499*/      OPC_CheckType, MVT::i32,
/*1501*/      OPC_Scope, 32, /*->1535*/ // 3 children in Scope
/*1503*/        OPC_CheckPredicate, 12, // Predicate_extloadi1
/*1505*/        OPC_Scope, 13, /*->1520*/ // 2 children in Scope
/*1507*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1510*/          OPC_EmitMergeInputChains1_0,
/*1511*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1520*/        /*Scope*/ 13, /*->1534*/
/*1521*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1524*/          OPC_EmitMergeInputChains1_0,
/*1525*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1534*/        0, /*End of Scope*/
/*1535*/      /*Scope*/ 32, /*->1568*/
/*1536*/        OPC_CheckPredicate, 13, // Predicate_extloadi8
/*1538*/        OPC_Scope, 13, /*->1553*/ // 2 children in Scope
/*1540*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1543*/          OPC_EmitMergeInputChains1_0,
/*1544*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1553*/        /*Scope*/ 13, /*->1567*/
/*1554*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1557*/          OPC_EmitMergeInputChains1_0,
/*1558*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1567*/        0, /*End of Scope*/
/*1568*/      /*Scope*/ 32, /*->1601*/
/*1569*/        OPC_CheckPredicate, 14, // Predicate_extloadi16
/*1571*/        OPC_Scope, 13, /*->1586*/ // 2 children in Scope
/*1573*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1576*/          OPC_EmitMergeInputChains1_0,
/*1577*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZ:i32 iaddr:iPTR:$src)
/*1586*/        /*Scope*/ 13, /*->1600*/
/*1587*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1590*/          OPC_EmitMergeInputChains1_0,
/*1591*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZX:i32 xaddr:iPTR:$src)
/*1600*/        0, /*End of Scope*/
/*1601*/      0, /*End of Scope*/
/*1602*/    /*Scope*/ 72, /*->1675*/
/*1603*/      OPC_CheckPredicate, 6, // Predicate_sextload
/*1605*/      OPC_CheckType, MVT::i64,
/*1607*/      OPC_Scope, 15, /*->1624*/ // 4 children in Scope
/*1609*/        OPC_CheckPredicate, 7, // Predicate_sextloadi16
/*1611*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1614*/        OPC_EmitMergeInputChains1_0,
/*1615*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHA8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                // Dst: (LHA8:i64 iaddr:iPTR:$src)
/*1624*/      /*Scope*/ 17, /*->1642*/
/*1625*/        OPC_CheckPredicate, 15, // Predicate_sextloadi32
/*1627*/        OPC_CheckPredicate, 16, // Predicate_aligned4sextloadi32
/*1629*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrImmX4:$src #2 #3
/*1632*/        OPC_EmitMergeInputChains1_0,
/*1633*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWA), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ixaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>><<P:Predicate_aligned4sextloadi32>> - Complexity = 13
                // Dst: (LWA:i64 ixaddr:iPTR:$src)
/*1642*/      /*Scope*/ 15, /*->1658*/
/*1643*/        OPC_CheckPredicate, 7, // Predicate_sextloadi16
/*1645*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1648*/        OPC_EmitMergeInputChains1_0,
/*1649*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHAX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                // Dst: (LHAX8:i64 xaddr:iPTR:$src)
/*1658*/      /*Scope*/ 15, /*->1674*/
/*1659*/        OPC_CheckPredicate, 15, // Predicate_sextloadi32
/*1661*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1664*/        OPC_EmitMergeInputChains1_0,
/*1665*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWAX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                // Dst: (LWAX:i64 xaddr:iPTR:$src)
/*1674*/      0, /*End of Scope*/
/*1675*/    /*Scope*/ 102, /*->1778*/
/*1676*/      OPC_CheckPredicate, 4, // Predicate_zextload
/*1678*/      OPC_CheckType, MVT::i64,
/*1680*/      OPC_Scope, 15, /*->1697*/ // 6 children in Scope
/*1682*/        OPC_CheckPredicate, 5, // Predicate_zextloadi8
/*1684*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1687*/        OPC_EmitMergeInputChains1_0,
/*1688*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1697*/      /*Scope*/ 15, /*->1713*/
/*1698*/        OPC_CheckPredicate, 8, // Predicate_zextloadi16
/*1700*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1703*/        OPC_EmitMergeInputChains1_0,
/*1704*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                // Dst: (LHZ8:i64 iaddr:iPTR:$src)
/*1713*/      /*Scope*/ 15, /*->1729*/
/*1714*/        OPC_CheckPredicate, 17, // Predicate_zextloadi32
/*1716*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1719*/        OPC_EmitMergeInputChains1_0,
/*1720*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                // Dst: (LWZ8:i64 iaddr:iPTR:$src)
/*1729*/      /*Scope*/ 15, /*->1745*/
/*1730*/        OPC_CheckPredicate, 5, // Predicate_zextloadi8
/*1732*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1735*/        OPC_EmitMergeInputChains1_0,
/*1736*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1745*/      /*Scope*/ 15, /*->1761*/
/*1746*/        OPC_CheckPredicate, 8, // Predicate_zextloadi16
/*1748*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1751*/        OPC_EmitMergeInputChains1_0,
/*1752*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                // Dst: (LHZX8:i64 xaddr:iPTR:$src)
/*1761*/      /*Scope*/ 15, /*->1777*/
/*1762*/        OPC_CheckPredicate, 17, // Predicate_zextloadi32
/*1764*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1767*/        OPC_EmitMergeInputChains1_0,
/*1768*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                // Dst: (LWZX8:i64 xaddr:iPTR:$src)
/*1777*/      0, /*End of Scope*/
/*1778*/    /*Scope*/ 36, /*->1815*/
/*1779*/      OPC_CheckPredicate, 9, // Predicate_load
/*1781*/      OPC_CheckType, MVT::i64,
/*1783*/      OPC_Scope, 15, /*->1800*/ // 2 children in Scope
/*1785*/        OPC_CheckPredicate, 18, // Predicate_aligned4load
/*1787*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrImmX4:$src #2 #3
/*1790*/        OPC_EmitMergeInputChains1_0,
/*1791*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LD), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ixaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned4load>> - Complexity = 13
                // Dst: (LD:i64 ixaddr:iPTR:$src)
/*1800*/      /*Scope*/ 13, /*->1814*/
/*1801*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1804*/        OPC_EmitMergeInputChains1_0,
/*1805*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LDX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDX:i64 xaddr:iPTR:$src)
/*1814*/      0, /*End of Scope*/
/*1815*/    /*Scope*/ 36, /*->1852*/
/*1816*/      OPC_CheckPredicate, 4, // Predicate_zextload
/*1818*/      OPC_CheckPredicate, 10, // Predicate_zextloadi1
/*1820*/      OPC_CheckType, MVT::i64,
/*1822*/      OPC_Scope, 13, /*->1837*/ // 2 children in Scope
/*1824*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1827*/        OPC_EmitMergeInputChains1_0,
/*1828*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1837*/      /*Scope*/ 13, /*->1851*/
/*1838*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1841*/        OPC_EmitMergeInputChains1_0,
/*1842*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1851*/      0, /*End of Scope*/
/*1852*/    /*Scope*/ 10|128,1/*138*/, /*->1992*/
/*1854*/      OPC_CheckPredicate, 11, // Predicate_extload
/*1856*/      OPC_CheckType, MVT::i64,
/*1858*/      OPC_Scope, 32, /*->1892*/ // 4 children in Scope
/*1860*/        OPC_CheckPredicate, 12, // Predicate_extloadi1
/*1862*/        OPC_Scope, 13, /*->1877*/ // 2 children in Scope
/*1864*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1867*/          OPC_EmitMergeInputChains1_0,
/*1868*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1877*/        /*Scope*/ 13, /*->1891*/
/*1878*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1881*/          OPC_EmitMergeInputChains1_0,
/*1882*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1891*/        0, /*End of Scope*/
/*1892*/      /*Scope*/ 32, /*->1925*/
/*1893*/        OPC_CheckPredicate, 13, // Predicate_extloadi8
/*1895*/        OPC_Scope, 13, /*->1910*/ // 2 children in Scope
/*1897*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1900*/          OPC_EmitMergeInputChains1_0,
/*1901*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1910*/        /*Scope*/ 13, /*->1924*/
/*1911*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1914*/          OPC_EmitMergeInputChains1_0,
/*1915*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1924*/        0, /*End of Scope*/
/*1925*/      /*Scope*/ 32, /*->1958*/
/*1926*/        OPC_CheckPredicate, 14, // Predicate_extloadi16
/*1928*/        OPC_Scope, 13, /*->1943*/ // 2 children in Scope
/*1930*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1933*/          OPC_EmitMergeInputChains1_0,
/*1934*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZ8:i64 iaddr:iPTR:$src)
/*1943*/        /*Scope*/ 13, /*->1957*/
/*1944*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1947*/          OPC_EmitMergeInputChains1_0,
/*1948*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZX8:i64 xaddr:iPTR:$src)
/*1957*/        0, /*End of Scope*/
/*1958*/      /*Scope*/ 32, /*->1991*/
/*1959*/        OPC_CheckPredicate, 19, // Predicate_extloadi32
/*1961*/        OPC_Scope, 13, /*->1976*/ // 2 children in Scope
/*1963*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1966*/          OPC_EmitMergeInputChains1_0,
/*1967*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LWZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LWZ8:i64 iaddr:iPTR:$src)
/*1976*/        /*Scope*/ 13, /*->1990*/
/*1977*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1980*/          OPC_EmitMergeInputChains1_0,
/*1981*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LWZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LWZX8:i64 xaddr:iPTR:$src)
/*1990*/        0, /*End of Scope*/
/*1991*/      0, /*End of Scope*/
/*1992*/    /*Scope*/ 21, /*->2014*/
/*1993*/      OPC_CheckPredicate, 6, // Predicate_sextload
/*1995*/      OPC_CheckPredicate, 15, // Predicate_sextloadi32
/*1997*/      OPC_CheckPredicate, 20, // Predicate_unaligned4sextloadi32
/*1999*/      OPC_CheckType, MVT::i64,
/*2001*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*2004*/      OPC_EmitMergeInputChains1_0,
/*2005*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWAX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i64 xoaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>><<P:Predicate_unaligned4sextloadi32>> - Complexity = 13
              // Dst: (LWAX:i64 xoaddr:iPTR:$src)
/*2014*/    /*Scope*/ 85, /*->2100*/
/*2015*/      OPC_CheckPredicate, 9, // Predicate_load
/*2017*/      OPC_SwitchType /*3 cases */, 15,  MVT::i64,// ->2035
/*2020*/        OPC_CheckPredicate, 21, // Predicate_unaligned4load
/*2022*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*2025*/        OPC_EmitMergeInputChains1_0,
/*2026*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LDX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xoaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_unaligned4load>> - Complexity = 13
                // Dst: (LDX:i64 xoaddr:iPTR:$src)
              /*SwitchType*/ 30,  MVT::f32,// ->2067
/*2037*/        OPC_Scope, 13, /*->2052*/ // 2 children in Scope
/*2039*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*2042*/          OPC_EmitMergeInputChains1_0,
/*2043*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFS), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFS:f32 iaddr:iPTR:$src)
/*2052*/        /*Scope*/ 13, /*->2066*/
/*2053*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*2056*/          OPC_EmitMergeInputChains1_0,
/*2057*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFSX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFSX:f32 xaddr:iPTR:$src)
/*2066*/        0, /*End of Scope*/
              /*SwitchType*/ 30,  MVT::f64,// ->2099
/*2069*/        OPC_Scope, 13, /*->2084*/ // 2 children in Scope
/*2071*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*2074*/          OPC_EmitMergeInputChains1_0,
/*2075*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFD), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFD:f64 iaddr:iPTR:$src)
/*2084*/        /*Scope*/ 13, /*->2098*/
/*2085*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*2088*/          OPC_EmitMergeInputChains1_0,
/*2089*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFDX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFDX:f64 xaddr:iPTR:$src)
/*2098*/        0, /*End of Scope*/
              0, // EndSwitchType
/*2100*/    /*Scope*/ 60, /*->2161*/
/*2101*/      OPC_CheckPredicate, 11, // Predicate_extload
/*2103*/      OPC_CheckPredicate, 22, // Predicate_extloadf32
/*2105*/      OPC_CheckType, MVT::f64,
/*2107*/      OPC_Scope, 25, /*->2134*/ // 2 children in Scope
/*2109*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*2112*/        OPC_EmitMergeInputChains1_0,
/*2113*/        OPC_EmitNode, TARGET_VAL(PPC::LFS), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3,  // Results = #4
/*2122*/        OPC_EmitInteger, MVT::i32, PPC::F8RCRegClassID,
/*2125*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 4, 5, 
                // Src: (ld:f64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:f64 (LFS:f32 iaddr:iPTR:$src), F8RC:i32)
/*2134*/      /*Scope*/ 25, /*->2160*/
/*2135*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*2138*/        OPC_EmitMergeInputChains1_0,
/*2139*/        OPC_EmitNode, TARGET_VAL(PPC::LFSX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3,  // Results = #4
/*2148*/        OPC_EmitInteger, MVT::i32, PPC::F8RCRegClassID,
/*2151*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 4, 5, 
                // Src: (ld:f64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:f64 (LFSX:f32 xaddr:iPTR:$src), F8RC:i32)
/*2160*/      0, /*End of Scope*/
/*2161*/    /*Scope*/ 19, /*->2181*/
/*2162*/      OPC_CheckPredicate, 9, // Predicate_load
/*2164*/      OPC_CheckType, MVT::v4i32,
/*2166*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*2168*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*2171*/      OPC_EmitMergeInputChains1_0,
/*2172*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:v4i32 xoaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LVX:v4i32 xoaddr:iPTR:$src)
/*2181*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 90|128,5/*730*/,  TARGET_VAL(ISD::STORE),// ->2916
/*2186*/    OPC_RecordMemRef,
/*2187*/    OPC_RecordNode,   // #0 = 'st' chained node
/*2188*/    OPC_RecordChild1, // #1 = $rS
/*2189*/    OPC_Scope, 103|128,1/*231*/, /*->2423*/ // 5 children in Scope
/*2192*/      OPC_CheckChild1Type, MVT::i32,
/*2194*/      OPC_RecordChild2, // #2 = $src
/*2195*/      OPC_Scope, 110, /*->2307*/ // 2 children in Scope
/*2197*/        OPC_CheckPredicate, 23, // Predicate_unindexedstore
/*2199*/        OPC_Scope, 36, /*->2237*/ // 4 children in Scope
/*2201*/          OPC_CheckPredicate, 24, // Predicate_truncstore
/*2203*/          OPC_Scope, 15, /*->2220*/ // 2 children in Scope
/*2205*/            OPC_CheckPredicate, 25, // Predicate_truncstorei8
/*2207*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2210*/            OPC_EmitMergeInputChains1_0,
/*2211*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STB), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i32:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STB i32:i32:$rS, iaddr:iPTR:$src)
/*2220*/          /*Scope*/ 15, /*->2236*/
/*2221*/            OPC_CheckPredicate, 26, // Predicate_truncstorei16
/*2223*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2226*/            OPC_EmitMergeInputChains1_0,
/*2227*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STH), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i32:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STH i32:i32:$rS, iaddr:iPTR:$src)
/*2236*/          0, /*End of Scope*/
/*2237*/        /*Scope*/ 15, /*->2253*/
/*2238*/          OPC_CheckPredicate, 27, // Predicate_store
/*2240*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2243*/          OPC_EmitMergeInputChains1_0,
/*2244*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STW), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st i32:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STW i32:i32:$rS, iaddr:iPTR:$src)
/*2253*/        /*Scope*/ 36, /*->2290*/
/*2254*/          OPC_CheckPredicate, 24, // Predicate_truncstore
/*2256*/          OPC_Scope, 15, /*->2273*/ // 2 children in Scope
/*2258*/            OPC_CheckPredicate, 25, // Predicate_truncstorei8
/*2260*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2263*/            OPC_EmitMergeInputChains1_0,
/*2264*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i32:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STBX i32:i32:$rS, xaddr:iPTR:$dst)
/*2273*/          /*Scope*/ 15, /*->2289*/
/*2274*/            OPC_CheckPredicate, 26, // Predicate_truncstorei16
/*2276*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2279*/            OPC_EmitMergeInputChains1_0,
/*2280*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i32:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STHX i32:i32:$rS, xaddr:iPTR:$dst)
/*2289*/          0, /*End of Scope*/
/*2290*/        /*Scope*/ 15, /*->2306*/
/*2291*/          OPC_CheckPredicate, 27, // Predicate_store
/*2293*/          OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2296*/          OPC_EmitMergeInputChains1_0,
/*2297*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STWX), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st i32:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STWX i32:i32:$rS, xaddr:iPTR:$dst)
/*2306*/        0, /*End of Scope*/
/*2307*/      /*Scope*/ 114, /*->2422*/
/*2308*/        OPC_RecordChild3, // #3 = $ptroff
/*2309*/        OPC_Scope, 40, /*->2351*/ // 4 children in Scope
/*2311*/          OPC_CheckPredicate, 28, // Predicate_itruncstore
/*2313*/          OPC_CheckPredicate, 29, // Predicate_pre_truncst
/*2315*/          OPC_Scope, 16, /*->2333*/ // 2 children in Scope
/*2317*/            OPC_CheckPredicate, 30, // Predicate_pre_truncsti8
/*2319*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2322*/            OPC_EmitMergeInputChains1_0,
/*2323*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBU), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR i32:i32:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 10
                    // Dst: (STBU:iPTR ?:i32:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2333*/          /*Scope*/ 16, /*->2350*/
/*2334*/            OPC_CheckPredicate, 31, // Predicate_pre_truncsti16
/*2336*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2339*/            OPC_EmitMergeInputChains1_0,
/*2340*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHU), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR i32:i32:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 10
                    // Dst: (STHU:iPTR ?:i32:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2350*/          0, /*End of Scope*/
/*2351*/        /*Scope*/ 18, /*->2370*/
/*2352*/          OPC_CheckPredicate, 32, // Predicate_istore
/*2354*/          OPC_CheckPredicate, 33, // Predicate_pre_store
/*2356*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2359*/          OPC_EmitMergeInputChains1_0,
/*2360*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STWU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR i32:i32:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STWU:iPTR ?:i32:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2370*/        /*Scope*/ 34, /*->2405*/
/*2371*/          OPC_CheckPredicate, 28, // Predicate_itruncstore
/*2373*/          OPC_CheckPredicate, 29, // Predicate_pre_truncst
/*2375*/          OPC_Scope, 13, /*->2390*/ // 2 children in Scope
/*2377*/            OPC_CheckPredicate, 30, // Predicate_pre_truncsti8
/*2379*/            OPC_EmitMergeInputChains1_0,
/*2380*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBUX), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (ist:iPTR i32:i32:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 4
                    // Dst: (STBUX:iPTR ?:i32:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2390*/          /*Scope*/ 13, /*->2404*/
/*2391*/            OPC_CheckPredicate, 31, // Predicate_pre_truncsti16
/*2393*/            OPC_EmitMergeInputChains1_0,
/*2394*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHUX), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (ist:iPTR i32:i32:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 4
                    // Dst: (STHUX:iPTR ?:i32:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2404*/          0, /*End of Scope*/
/*2405*/        /*Scope*/ 15, /*->2421*/
/*2406*/          OPC_CheckPredicate, 32, // Predicate_istore
/*2408*/          OPC_CheckPredicate, 33, // Predicate_pre_store
/*2410*/          OPC_EmitMergeInputChains1_0,
/*2411*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STWUX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (ist:iPTR i32:i32:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 4
                  // Dst: (STWUX:iPTR ?:i32:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2421*/        0, /*End of Scope*/
/*2422*/      0, /*End of Scope*/
/*2423*/    /*Scope*/ 75, /*->2499*/
/*2424*/      OPC_CheckChild1Type, MVT::f32,
/*2426*/      OPC_RecordChild2, // #2 = $dst
/*2427*/      OPC_Scope, 34, /*->2463*/ // 2 children in Scope
/*2429*/        OPC_CheckPredicate, 23, // Predicate_unindexedstore
/*2431*/        OPC_CheckPredicate, 27, // Predicate_store
/*2433*/        OPC_Scope, 13, /*->2448*/ // 2 children in Scope
/*2435*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$dst #3 #4
/*2438*/          OPC_EmitMergeInputChains1_0,
/*2439*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFS), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st f32:f32:$rS, iaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFS f32:f32:$rS, iaddr:iPTR:$dst)
/*2448*/        /*Scope*/ 13, /*->2462*/
/*2449*/          OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2452*/          OPC_EmitMergeInputChains1_0,
/*2453*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFSX), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st f32:f32:$frS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFSX f32:f32:$frS, xaddr:iPTR:$dst)
/*2462*/        0, /*End of Scope*/
/*2463*/      /*Scope*/ 34, /*->2498*/
/*2464*/        OPC_RecordChild3, // #3 = $ptroff
/*2465*/        OPC_CheckPredicate, 32, // Predicate_istore
/*2467*/        OPC_CheckPredicate, 33, // Predicate_pre_store
/*2469*/        OPC_Scope, 14, /*->2485*/ // 2 children in Scope
/*2471*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2474*/          OPC_EmitMergeInputChains1_0,
/*2475*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFSU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR f32:f32:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STFSU:iPTR ?:f32:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2485*/        /*Scope*/ 11, /*->2497*/
/*2486*/          OPC_EmitMergeInputChains1_0,
/*2487*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFSUX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (ist:iPTR f32:f32:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 4
                  // Dst: (STFSUX:iPTR ?:f32:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2497*/        0, /*End of Scope*/
/*2498*/      0, /*End of Scope*/
/*2499*/    /*Scope*/ 75, /*->2575*/
/*2500*/      OPC_CheckChild1Type, MVT::f64,
/*2502*/      OPC_RecordChild2, // #2 = $dst
/*2503*/      OPC_Scope, 34, /*->2539*/ // 2 children in Scope
/*2505*/        OPC_CheckPredicate, 23, // Predicate_unindexedstore
/*2507*/        OPC_CheckPredicate, 27, // Predicate_store
/*2509*/        OPC_Scope, 13, /*->2524*/ // 2 children in Scope
/*2511*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$dst #3 #4
/*2514*/          OPC_EmitMergeInputChains1_0,
/*2515*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFD), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st f64:f64:$rS, iaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFD f64:f64:$rS, iaddr:iPTR:$dst)
/*2524*/        /*Scope*/ 13, /*->2538*/
/*2525*/          OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2528*/          OPC_EmitMergeInputChains1_0,
/*2529*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFDX), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st f64:f64:$frS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFDX f64:f64:$frS, xaddr:iPTR:$dst)
/*2538*/        0, /*End of Scope*/
/*2539*/      /*Scope*/ 34, /*->2574*/
/*2540*/        OPC_RecordChild3, // #3 = $ptroff
/*2541*/        OPC_CheckPredicate, 32, // Predicate_istore
/*2543*/        OPC_CheckPredicate, 33, // Predicate_pre_store
/*2545*/        OPC_Scope, 14, /*->2561*/ // 2 children in Scope
/*2547*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2550*/          OPC_EmitMergeInputChains1_0,
/*2551*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFDU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR f64:f64:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STFDU:iPTR ?:f64:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2561*/        /*Scope*/ 11, /*->2573*/
/*2562*/          OPC_EmitMergeInputChains1_0,
/*2563*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFDUX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (ist:iPTR f64:f64:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 4
                  // Dst: (STFDUX:iPTR ?:f64:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2573*/        0, /*End of Scope*/
/*2574*/      0, /*End of Scope*/
/*2575*/    /*Scope*/ 59|128,2/*315*/, /*->2892*/
/*2577*/      OPC_CheckChild1Type, MVT::i64,
/*2579*/      OPC_RecordChild2, // #2 = $ptrreg
/*2580*/      OPC_Scope, 82, /*->2664*/ // 3 children in Scope
/*2582*/        OPC_RecordChild3, // #3 = $ptroff
/*2583*/        OPC_Scope, 57, /*->2642*/ // 2 children in Scope
/*2585*/          OPC_CheckPredicate, 28, // Predicate_itruncstore
/*2587*/          OPC_CheckPredicate, 29, // Predicate_pre_truncst
/*2589*/          OPC_Scope, 16, /*->2607*/ // 3 children in Scope
/*2591*/            OPC_CheckPredicate, 30, // Predicate_pre_truncsti8
/*2593*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2596*/            OPC_EmitMergeInputChains1_0,
/*2597*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBU8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 10
                    // Dst: (STBU8:iPTR ?:i64:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2607*/          /*Scope*/ 16, /*->2624*/
/*2608*/            OPC_CheckPredicate, 31, // Predicate_pre_truncsti16
/*2610*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2613*/            OPC_EmitMergeInputChains1_0,
/*2614*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHU8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 10
                    // Dst: (STHU8:iPTR ?:i64:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2624*/          /*Scope*/ 16, /*->2641*/
/*2625*/            OPC_CheckPredicate, 34, // Predicate_pre_truncsti32
/*2627*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2630*/            OPC_EmitMergeInputChains1_0,
/*2631*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STWU8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti32>> - Complexity = 10
                    // Dst: (STWU8:iPTR ?:i64:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2641*/          0, /*End of Scope*/
/*2642*/        /*Scope*/ 20, /*->2663*/
/*2643*/          OPC_CheckPredicate, 32, // Predicate_istore
/*2645*/          OPC_CheckPredicate, 33, // Predicate_pre_store
/*2647*/          OPC_CheckPredicate, 35, // Predicate_aligned4pre_store
/*2649*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2652*/          OPC_EmitMergeInputChains1_0,
/*2653*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STDU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>><<P:Predicate_aligned4pre_store>> - Complexity = 10
                  // Dst: (STDU:iPTR ?:i64:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2663*/        0, /*End of Scope*/
/*2664*/      /*Scope*/ 28|128,1/*156*/, /*->2822*/
/*2666*/        OPC_CheckPredicate, 23, // Predicate_unindexedstore
/*2668*/        OPC_Scope, 100, /*->2770*/ // 2 children in Scope
/*2670*/          OPC_CheckPredicate, 24, // Predicate_truncstore
/*2672*/          OPC_Scope, 15, /*->2689*/ // 6 children in Scope
/*2674*/            OPC_CheckPredicate, 25, // Predicate_truncstorei8
/*2676*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2679*/            OPC_EmitMergeInputChains1_0,
/*2680*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STB8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STB8 i64:i64:$rS, iaddr:iPTR:$src)
/*2689*/          /*Scope*/ 15, /*->2705*/
/*2690*/            OPC_CheckPredicate, 26, // Predicate_truncstorei16
/*2692*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2695*/            OPC_EmitMergeInputChains1_0,
/*2696*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STH8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STH8 i64:i64:$rS, iaddr:iPTR:$src)
/*2705*/          /*Scope*/ 15, /*->2721*/
/*2706*/            OPC_CheckPredicate, 36, // Predicate_truncstorei32
/*2708*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2711*/            OPC_EmitMergeInputChains1_0,
/*2712*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STW8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                    // Dst: (STW8 i64:i64:$rS, iaddr:iPTR:$src)
/*2721*/          /*Scope*/ 15, /*->2737*/
/*2722*/            OPC_CheckPredicate, 25, // Predicate_truncstorei8
/*2724*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2727*/            OPC_EmitMergeInputChains1_0,
/*2728*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBX8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STBX8 i64:i64:$rS, xaddr:iPTR:$dst)
/*2737*/          /*Scope*/ 15, /*->2753*/
/*2738*/            OPC_CheckPredicate, 26, // Predicate_truncstorei16
/*2740*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2743*/            OPC_EmitMergeInputChains1_0,
/*2744*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHX8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STHX8 i64:i64:$rS, xaddr:iPTR:$dst)
/*2753*/          /*Scope*/ 15, /*->2769*/
/*2754*/            OPC_CheckPredicate, 36, // Predicate_truncstorei32
/*2756*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2759*/            OPC_EmitMergeInputChains1_0,
/*2760*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STWX8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                    // Dst: (STWX8 i64:i64:$rS, xaddr:iPTR:$dst)
/*2769*/          0, /*End of Scope*/
/*2770*/        /*Scope*/ 50, /*->2821*/
/*2771*/          OPC_CheckPredicate, 27, // Predicate_store
/*2773*/          OPC_Scope, 15, /*->2790*/ // 3 children in Scope
/*2775*/            OPC_CheckPredicate, 37, // Predicate_aligned4store
/*2777*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectAddrImmX4:$dst #3 #4
/*2780*/            OPC_EmitMergeInputChains1_0,
/*2781*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STD), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, ixaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_aligned4store>> - Complexity = 13
                    // Dst: (STD i64:i64:$rS, ixaddr:iPTR:$dst)
/*2790*/          /*Scope*/ 13, /*->2804*/
/*2791*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2794*/            OPC_EmitMergeInputChains1_0,
/*2795*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STDX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STDX i64:i64:$rS, xaddr:iPTR:$dst)
/*2804*/          /*Scope*/ 15, /*->2820*/
/*2805*/            OPC_CheckPredicate, 38, // Predicate_unaligned4store
/*2807*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*2810*/            OPC_EmitMergeInputChains1_0,
/*2811*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STDX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, xoaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_unaligned4store>> - Complexity = 13
                    // Dst: (STDX ?:i64:$rS, xoaddr:iPTR:$dst)
/*2820*/          0, /*End of Scope*/
/*2821*/        0, /*End of Scope*/
/*2822*/      /*Scope*/ 68, /*->2891*/
/*2823*/        OPC_RecordChild3, // #3 = $ptroff
/*2824*/        OPC_Scope, 48, /*->2874*/ // 2 children in Scope
/*2826*/          OPC_CheckPredicate, 28, // Predicate_itruncstore
/*2828*/          OPC_CheckPredicate, 29, // Predicate_pre_truncst
/*2830*/          OPC_Scope, 13, /*->2845*/ // 3 children in Scope
/*2832*/            OPC_CheckPredicate, 30, // Predicate_pre_truncsti8
/*2834*/            OPC_EmitMergeInputChains1_0,
/*2835*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBUX8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 4
                    // Dst: (STBUX8:iPTR ?:i64:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2845*/          /*Scope*/ 13, /*->2859*/
/*2846*/            OPC_CheckPredicate, 31, // Predicate_pre_truncsti16
/*2848*/            OPC_EmitMergeInputChains1_0,
/*2849*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHUX8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 4
                    // Dst: (STHUX8:iPTR ?:i64:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2859*/          /*Scope*/ 13, /*->2873*/
/*2860*/            OPC_CheckPredicate, 34, // Predicate_pre_truncsti32
/*2862*/            OPC_EmitMergeInputChains1_0,
/*2863*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STWUX8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti32>> - Complexity = 4
                    // Dst: (STWUX8:iPTR ?:i64:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2873*/          0, /*End of Scope*/
/*2874*/        /*Scope*/ 15, /*->2890*/
/*2875*/          OPC_CheckPredicate, 32, // Predicate_istore
/*2877*/          OPC_CheckPredicate, 33, // Predicate_pre_store
/*2879*/          OPC_EmitMergeInputChains1_0,
/*2880*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STDUX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 4
                  // Dst: (STDUX:iPTR ?:i64:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2890*/        0, /*End of Scope*/
/*2891*/      0, /*End of Scope*/
/*2892*/    /*Scope*/ 22, /*->2915*/
/*2893*/      OPC_CheckChild1Type, MVT::v4i32,
/*2895*/      OPC_RecordChild2, // #2 = $dst
/*2896*/      OPC_CheckPredicate, 23, // Predicate_unindexedstore
/*2898*/      OPC_CheckPredicate, 27, // Predicate_store
/*2900*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*2902*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*2905*/      OPC_EmitMergeInputChains1_0,
/*2906*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STVX), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (st v4i32:v4i32:$rS, xoaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
              // Dst: (STVX ?:v4i32:$rS, xoaddr:iPTR:$dst)
/*2915*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->3002
/*2919*/    OPC_RecordMemRef,
/*2920*/    OPC_RecordNode,   // #0 = 'atomic_load_add' chained node
/*2921*/    OPC_RecordChild1, // #1 = $ptr
/*2922*/    OPC_RecordChild2, // #2 = $incr
/*2923*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->2982
/*2926*/      OPC_Scope, 17, /*->2945*/ // 3 children in Scope
/*2928*/        OPC_CheckPredicate, 39, // Predicate_atomic_load_add_8
/*2930*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2933*/        OPC_EmitMergeInputChains1_0,
/*2934*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_add_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_ADD_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*2945*/      /*Scope*/ 17, /*->2963*/
/*2946*/        OPC_CheckPredicate, 40, // Predicate_atomic_load_add_16
/*2948*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2951*/        OPC_EmitMergeInputChains1_0,
/*2952*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_add_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_ADD_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*2963*/      /*Scope*/ 17, /*->2981*/
/*2964*/        OPC_CheckPredicate, 41, // Predicate_atomic_load_add_32
/*2966*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2969*/        OPC_EmitMergeInputChains1_0,
/*2970*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_add_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_ADD_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*2981*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3001
/*2984*/      OPC_CheckPredicate, 42, // Predicate_atomic_load_add_64
/*2986*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2989*/      OPC_EmitMergeInputChains1_0,
/*2990*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_add:i64 xoaddr:iPTR:$ptr, i64:i64:$incr)<<P:Predicate_atomic_load_add_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_ADD_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_SUB),// ->3088
/*3005*/    OPC_RecordMemRef,
/*3006*/    OPC_RecordNode,   // #0 = 'atomic_load_sub' chained node
/*3007*/    OPC_RecordChild1, // #1 = $ptr
/*3008*/    OPC_RecordChild2, // #2 = $incr
/*3009*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3068
/*3012*/      OPC_Scope, 17, /*->3031*/ // 3 children in Scope
/*3014*/        OPC_CheckPredicate, 43, // Predicate_atomic_load_sub_8
/*3016*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3019*/        OPC_EmitMergeInputChains1_0,
/*3020*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_sub_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SUB_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3031*/      /*Scope*/ 17, /*->3049*/
/*3032*/        OPC_CheckPredicate, 44, // Predicate_atomic_load_sub_16
/*3034*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3037*/        OPC_EmitMergeInputChains1_0,
/*3038*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_sub_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SUB_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3049*/      /*Scope*/ 17, /*->3067*/
/*3050*/        OPC_CheckPredicate, 45, // Predicate_atomic_load_sub_32
/*3052*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3055*/        OPC_EmitMergeInputChains1_0,
/*3056*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_sub_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SUB_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3067*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3087
/*3070*/      OPC_CheckPredicate, 46, // Predicate_atomic_load_sub_64
/*3072*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3075*/      OPC_EmitMergeInputChains1_0,
/*3076*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_sub:i64 xoaddr:iPTR:$ptr, i64:i64:$incr)<<P:Predicate_atomic_load_sub_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_SUB_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_AND),// ->3174
/*3091*/    OPC_RecordMemRef,
/*3092*/    OPC_RecordNode,   // #0 = 'atomic_load_and' chained node
/*3093*/    OPC_RecordChild1, // #1 = $ptr
/*3094*/    OPC_RecordChild2, // #2 = $incr
/*3095*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3154
/*3098*/      OPC_Scope, 17, /*->3117*/ // 3 children in Scope
/*3100*/        OPC_CheckPredicate, 47, // Predicate_atomic_load_and_8
/*3102*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3105*/        OPC_EmitMergeInputChains1_0,
/*3106*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_and_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AND_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3117*/      /*Scope*/ 17, /*->3135*/
/*3118*/        OPC_CheckPredicate, 48, // Predicate_atomic_load_and_16
/*3120*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3123*/        OPC_EmitMergeInputChains1_0,
/*3124*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_and_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AND_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3135*/      /*Scope*/ 17, /*->3153*/
/*3136*/        OPC_CheckPredicate, 49, // Predicate_atomic_load_and_32
/*3138*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3141*/        OPC_EmitMergeInputChains1_0,
/*3142*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_and_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AND_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3153*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3173
/*3156*/      OPC_CheckPredicate, 50, // Predicate_atomic_load_and_64
/*3158*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3161*/      OPC_EmitMergeInputChains1_0,
/*3162*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_and:i64 xoaddr:iPTR:$ptr, i64:i64:$incr)<<P:Predicate_atomic_load_and_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_AND_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_OR),// ->3260
/*3177*/    OPC_RecordMemRef,
/*3178*/    OPC_RecordNode,   // #0 = 'atomic_load_or' chained node
/*3179*/    OPC_RecordChild1, // #1 = $ptr
/*3180*/    OPC_RecordChild2, // #2 = $incr
/*3181*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3240
/*3184*/      OPC_Scope, 17, /*->3203*/ // 3 children in Scope
/*3186*/        OPC_CheckPredicate, 51, // Predicate_atomic_load_or_8
/*3188*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3191*/        OPC_EmitMergeInputChains1_0,
/*3192*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_or_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OR_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3203*/      /*Scope*/ 17, /*->3221*/
/*3204*/        OPC_CheckPredicate, 52, // Predicate_atomic_load_or_16
/*3206*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3209*/        OPC_EmitMergeInputChains1_0,
/*3210*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_or_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OR_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3221*/      /*Scope*/ 17, /*->3239*/
/*3222*/        OPC_CheckPredicate, 53, // Predicate_atomic_load_or_32
/*3224*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3227*/        OPC_EmitMergeInputChains1_0,
/*3228*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_or_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OR_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3239*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3259
/*3242*/      OPC_CheckPredicate, 54, // Predicate_atomic_load_or_64
/*3244*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3247*/      OPC_EmitMergeInputChains1_0,
/*3248*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_or:i64 xoaddr:iPTR:$ptr, i64:i64:$incr)<<P:Predicate_atomic_load_or_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_OR_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_XOR),// ->3346
/*3263*/    OPC_RecordMemRef,
/*3264*/    OPC_RecordNode,   // #0 = 'atomic_load_xor' chained node
/*3265*/    OPC_RecordChild1, // #1 = $ptr
/*3266*/    OPC_RecordChild2, // #2 = $incr
/*3267*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3326
/*3270*/      OPC_Scope, 17, /*->3289*/ // 3 children in Scope
/*3272*/        OPC_CheckPredicate, 55, // Predicate_atomic_load_xor_8
/*3274*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3277*/        OPC_EmitMergeInputChains1_0,
/*3278*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_xor_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XOR_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3289*/      /*Scope*/ 17, /*->3307*/
/*3290*/        OPC_CheckPredicate, 56, // Predicate_atomic_load_xor_16
/*3292*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3295*/        OPC_EmitMergeInputChains1_0,
/*3296*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_xor_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XOR_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3307*/      /*Scope*/ 17, /*->3325*/
/*3308*/        OPC_CheckPredicate, 57, // Predicate_atomic_load_xor_32
/*3310*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3313*/        OPC_EmitMergeInputChains1_0,
/*3314*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_xor_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XOR_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3325*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3345
/*3328*/      OPC_CheckPredicate, 58, // Predicate_atomic_load_xor_64
/*3330*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3333*/      OPC_EmitMergeInputChains1_0,
/*3334*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_xor:i64 xoaddr:iPTR:$ptr, i64:i64:$incr)<<P:Predicate_atomic_load_xor_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_XOR_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_NAND),// ->3432
/*3349*/    OPC_RecordMemRef,
/*3350*/    OPC_RecordNode,   // #0 = 'atomic_load_nand' chained node
/*3351*/    OPC_RecordChild1, // #1 = $ptr
/*3352*/    OPC_RecordChild2, // #2 = $incr
/*3353*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3412
/*3356*/      OPC_Scope, 17, /*->3375*/ // 3 children in Scope
/*3358*/        OPC_CheckPredicate, 59, // Predicate_atomic_load_nand_8
/*3360*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3363*/        OPC_EmitMergeInputChains1_0,
/*3364*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_nand_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NAND_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3375*/      /*Scope*/ 17, /*->3393*/
/*3376*/        OPC_CheckPredicate, 60, // Predicate_atomic_load_nand_16
/*3378*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3381*/        OPC_EmitMergeInputChains1_0,
/*3382*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_nand_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NAND_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3393*/      /*Scope*/ 17, /*->3411*/
/*3394*/        OPC_CheckPredicate, 61, // Predicate_atomic_load_nand_32
/*3396*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3399*/        OPC_EmitMergeInputChains1_0,
/*3400*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_nand_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NAND_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3411*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3431
/*3414*/      OPC_CheckPredicate, 62, // Predicate_atomic_load_nand_64
/*3416*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3419*/      OPC_EmitMergeInputChains1_0,
/*3420*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_nand:i64 xoaddr:iPTR:$ptr, i64:i64:$incr)<<P:Predicate_atomic_load_nand_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_NAND_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 88,  TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->3523
/*3435*/    OPC_RecordMemRef,
/*3436*/    OPC_RecordNode,   // #0 = 'atomic_cmp_swap' chained node
/*3437*/    OPC_RecordChild1, // #1 = $ptr
/*3438*/    OPC_RecordChild2, // #2 = $old
/*3439*/    OPC_RecordChild3, // #3 = $new
/*3440*/    OPC_SwitchType /*2 cases */, 59,  MVT::i32,// ->3502
/*3443*/      OPC_Scope, 18, /*->3463*/ // 3 children in Scope
/*3445*/        OPC_CheckPredicate, 63, // Predicate_atomic_cmp_swap_8
/*3447*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3450*/        OPC_EmitMergeInputChains1_0,
/*3451*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
                // Src: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, i32:i32:$old, i32:i32:$new)<<P:Predicate_atomic_cmp_swap_8>> - Complexity = 13
                // Dst: (ATOMIC_CMP_SWAP_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$old, i32:i32:$new)
/*3463*/      /*Scope*/ 18, /*->3482*/
/*3464*/        OPC_CheckPredicate, 64, // Predicate_atomic_cmp_swap_16
/*3466*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3469*/        OPC_EmitMergeInputChains1_0,
/*3470*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
                // Src: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, i32:i32:$old, i32:i32:$new)<<P:Predicate_atomic_cmp_swap_16>> - Complexity = 13
                // Dst: (ATOMIC_CMP_SWAP_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$old, i32:i32:$new)
/*3482*/      /*Scope*/ 18, /*->3501*/
/*3483*/        OPC_CheckPredicate, 65, // Predicate_atomic_cmp_swap_32
/*3485*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3488*/        OPC_EmitMergeInputChains1_0,
/*3489*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
                // Src: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, i32:i32:$old, i32:i32:$new)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 13
                // Dst: (ATOMIC_CMP_SWAP_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$old, i32:i32:$new)
/*3501*/      0, /*End of Scope*/
            /*SwitchType*/ 18,  MVT::i64,// ->3522
/*3504*/      OPC_CheckPredicate, 66, // Predicate_atomic_cmp_swap_64
/*3506*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3509*/      OPC_EmitMergeInputChains1_0,
/*3510*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
              // Src: (atomic_cmp_swap:i64 xoaddr:iPTR:$ptr, i64:i64:$old, i64:i64:$new)<<P:Predicate_atomic_cmp_swap_64>> - Complexity = 13
              // Dst: (ATOMIC_CMP_SWAP_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$old, i64:i64:$new)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_SWAP),// ->3609
/*3526*/    OPC_RecordMemRef,
/*3527*/    OPC_RecordNode,   // #0 = 'atomic_swap' chained node
/*3528*/    OPC_RecordChild1, // #1 = $ptr
/*3529*/    OPC_RecordChild2, // #2 = $new
/*3530*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3589
/*3533*/      OPC_Scope, 17, /*->3552*/ // 3 children in Scope
/*3535*/        OPC_CheckPredicate, 67, // Predicate_atomic_swap_8
/*3537*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3540*/        OPC_EmitMergeInputChains1_0,
/*3541*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 xoaddr:iPTR:$ptr, i32:i32:$new)<<P:Predicate_atomic_swap_8>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$new)
/*3552*/      /*Scope*/ 17, /*->3570*/
/*3553*/        OPC_CheckPredicate, 68, // Predicate_atomic_swap_16
/*3555*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3558*/        OPC_EmitMergeInputChains1_0,
/*3559*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 xoaddr:iPTR:$ptr, i32:i32:$new)<<P:Predicate_atomic_swap_16>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$new)
/*3570*/      /*Scope*/ 17, /*->3588*/
/*3571*/        OPC_CheckPredicate, 69, // Predicate_atomic_swap_32
/*3573*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3576*/        OPC_EmitMergeInputChains1_0,
/*3577*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 xoaddr:iPTR:$ptr, i32:i32:$new)<<P:Predicate_atomic_swap_32>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$new)
/*3588*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3608
/*3591*/      OPC_CheckPredicate, 70, // Predicate_atomic_swap_64
/*3593*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3596*/      OPC_EmitMergeInputChains1_0,
/*3597*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_swap:i64 xoaddr:iPTR:$ptr, i64:i64:$new)<<P:Predicate_atomic_swap_64>> - Complexity = 13
              // Dst: (ATOMIC_SWAP_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$new)
            0, // EndSwitchType
          /*SwitchOpcode*/ 48,  TARGET_VAL(PPCISD::DYNALLOC),// ->3660
/*3612*/    OPC_RecordNode,   // #0 = 'PPCdynalloc' chained node
/*3613*/    OPC_RecordChild1, // #1 = $negsize
/*3614*/    OPC_SwitchType /*2 cases */, 20,  MVT::i32,// ->3637
/*3617*/      OPC_CheckChild1Type, MVT::i32,
/*3619*/      OPC_RecordChild2, // #2 = $fpsi
/*3620*/      OPC_CheckChild2Type, MVT::iPTR,
/*3622*/      OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$fpsi #3 #4
/*3625*/      OPC_EmitMergeInputChains1_0,
/*3626*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DYNALLOC), 0|OPFL_Chain,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCdynalloc:i32 i32:i32:$negsize, iaddr:iPTR:$fpsi) - Complexity = 12
              // Dst: (DYNALLOC:i32:i32 i32:i32:$negsize, iaddr:iPTR:$fpsi)
            /*SwitchType*/ 20,  MVT::i64,// ->3659
/*3639*/      OPC_CheckChild1Type, MVT::i64,
/*3641*/      OPC_RecordChild2, // #2 = $fpsi
/*3642*/      OPC_CheckChild2Type, MVT::iPTR,
/*3644*/      OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$fpsi #3 #4
/*3647*/      OPC_EmitMergeInputChains1_0,
/*3648*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DYNALLOC8), 0|OPFL_Chain,
                  2/*#VTs*/, MVT::i64, MVT::i64, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCdynalloc:i64 i64:i64:$negsize, iaddr:iPTR:$fpsi) - Complexity = 12
              // Dst: (DYNALLOC8:i64:i64 i64:i64:$negsize, iaddr:iPTR:$fpsi)
            0, // EndSwitchType
          /*SwitchOpcode*/ 34,  TARGET_VAL(PPCISD::LARX),// ->3697
/*3663*/    OPC_RecordNode,   // #0 = 'PPClarx' chained node
/*3664*/    OPC_RecordChild1, // #1 = $src
/*3665*/    OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->3681
/*3668*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3671*/      OPC_EmitMergeInputChains1_0,
/*3672*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWARX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (PPClarx:i32 xoaddr:iPTR:$src) - Complexity = 12
              // Dst: (LWARX:i32 xoaddr:iPTR:$src)
            /*SwitchType*/ 13,  MVT::i64,// ->3696
/*3683*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #2 #3
/*3686*/      OPC_EmitMergeInputChains1_0,
/*3687*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDARX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPClarx:i64 xoaddr:iPTR:$ptr) - Complexity = 12
              // Dst: (LDARX:i64 xoaddr:iPTR:$ptr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 63,  TARGET_VAL(PPCISD::LBRX),// ->3763
/*3700*/    OPC_RecordNode,   // #0 = 'PPClbrx' chained node
/*3701*/    OPC_RecordChild1, // #1 = $src
/*3702*/    OPC_MoveChild, 2,
/*3704*/    OPC_Scope, 18, /*->3724*/ // 3 children in Scope
/*3706*/      OPC_CheckValueType, MVT::i16,
/*3708*/      OPC_MoveParent,
/*3709*/      OPC_CheckType, MVT::i32,
/*3711*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3714*/      OPC_EmitMergeInputChains1_0,
/*3715*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHBRX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (PPClbrx:i32 xoaddr:iPTR:$src, i16:Other) - Complexity = 12
              // Dst: (LHBRX:i32 xoaddr:iPTR:$src)
/*3724*/    /*Scope*/ 18, /*->3743*/
/*3725*/      OPC_CheckValueType, MVT::i32,
/*3727*/      OPC_MoveParent,
/*3728*/      OPC_CheckType, MVT::i32,
/*3730*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3733*/      OPC_EmitMergeInputChains1_0,
/*3734*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWBRX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (PPClbrx:i32 xoaddr:iPTR:$src, i32:Other) - Complexity = 12
              // Dst: (LWBRX:i32 xoaddr:iPTR:$src)
/*3743*/    /*Scope*/ 18, /*->3762*/
/*3744*/      OPC_CheckValueType, MVT::i64,
/*3746*/      OPC_MoveParent,
/*3747*/      OPC_CheckType, MVT::i64,
/*3749*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3752*/      OPC_EmitMergeInputChains1_0,
/*3753*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDBRX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPClbrx:i64 xoaddr:iPTR:$src, i64:Other) - Complexity = 12
              // Dst: (LDBRX:i64 xoaddr:iPTR:$src)
/*3762*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 37,  TARGET_VAL(PPCISD::LOAD),// ->3803
/*3766*/    OPC_RecordNode,   // #0 = 'PPCload' chained node
/*3767*/    OPC_CaptureGlueInput,
/*3768*/    OPC_RecordChild1, // #1 = $src
/*3769*/    OPC_CheckChild1Type, MVT::iPTR,
/*3771*/    OPC_CheckType, MVT::i64,
/*3773*/    OPC_Scope, 13, /*->3788*/ // 2 children in Scope
/*3775*/      OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrImmX4:$src #2 #3
/*3778*/      OPC_EmitMergeInputChains1_0,
/*3779*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LD), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPCload:i64 ixaddr:iPTR:$src) - Complexity = 12
              // Dst: (LD:i64 ixaddr:iPTR:$src)
/*3788*/    /*Scope*/ 13, /*->3802*/
/*3789*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*3792*/      OPC_EmitMergeInputChains1_0,
/*3793*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDX), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPCload:i64 xaddr:iPTR:$src) - Complexity = 12
              // Dst: (LDX:i64 xaddr:iPTR:$src)
/*3802*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 92|128,4/*604*/,  TARGET_VAL(ISD::XOR),// ->4411
/*3807*/    OPC_Scope, 39|128,1/*167*/, /*->3977*/ // 8 children in Scope
/*3810*/      OPC_MoveChild, 0,
/*3812*/      OPC_SwitchOpcode /*3 cases */, 41,  TARGET_VAL(ISD::AND),// ->3857
/*3816*/        OPC_RecordChild0, // #0 = $rS
/*3817*/        OPC_RecordChild1, // #1 = $rB
/*3818*/        OPC_MoveParent,
/*3819*/        OPC_MoveChild, 1,
/*3821*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3832*/        OPC_MoveParent,
/*3833*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->3845
/*3836*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NAND), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 (and:i32 i32:i32:$rS, i32:i32:$rB), -1:i32) - Complexity = 11
                  // Dst: (NAND:i32 i32:i32:$rS, i32:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->3856
/*3847*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NAND8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 (and:i64 i64:i64:$rS, i64:i64:$rB), -1:i64) - Complexity = 11
                  // Dst: (NAND8:i64 i64:i64:$rS, i64:i64:$rB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 41,  TARGET_VAL(ISD::OR),// ->3901
/*3860*/        OPC_RecordChild0, // #0 = $rS
/*3861*/        OPC_RecordChild1, // #1 = $rB
/*3862*/        OPC_MoveParent,
/*3863*/        OPC_MoveChild, 1,
/*3865*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3876*/        OPC_MoveParent,
/*3877*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->3889
/*3880*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 (or:i32 i32:i32:$rS, i32:i32:$rB), -1:i32) - Complexity = 11
                  // Dst: (NOR:i32 i32:i32:$rS, i32:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->3900
/*3891*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NOR8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 (or:i64 i64:i64:$rS, i64:i64:$rB), -1:i64) - Complexity = 11
                  // Dst: (NOR8:i64 i64:i64:$rS, i64:i64:$rB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 72,  TARGET_VAL(ISD::XOR),// ->3976
/*3904*/        OPC_RecordChild0, // #0 = $rS
/*3905*/        OPC_Scope, 40, /*->3947*/ // 2 children in Scope
/*3907*/          OPC_RecordChild1, // #1 = $rB
/*3908*/          OPC_MoveParent,
/*3909*/          OPC_MoveChild, 1,
/*3911*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3922*/          OPC_MoveParent,
/*3923*/          OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->3935
/*3926*/            OPC_MorphNodeTo, TARGET_VAL(PPC::EQV), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i32 (xor:i32 i32:i32:$rS, i32:i32:$rB), -1:i32) - Complexity = 11
                    // Dst: (EQV:i32 i32:i32:$rS, i32:i32:$rB)
                  /*SwitchType*/ 9,  MVT::i64,// ->3946
/*3937*/            OPC_MorphNodeTo, TARGET_VAL(PPC::EQV8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i64 (xor:i64 i64:i64:$rS, i64:i64:$rB), -1:i64) - Complexity = 11
                    // Dst: (EQV8:i64 i64:i64:$rS, i64:i64:$rB)
                  0, // EndSwitchType
/*3947*/        /*Scope*/ 27, /*->3975*/
/*3948*/          OPC_MoveChild, 1,
/*3950*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3961*/          OPC_MoveParent,
/*3962*/          OPC_MoveParent,
/*3963*/          OPC_RecordChild1, // #1 = $rB
/*3964*/          OPC_CheckType, MVT::i32,
/*3966*/          OPC_MorphNodeTo, TARGET_VAL(PPC::EQV), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 (xor:i32 i32:i32:$rS, -1:i32), i32:i32:$rB) - Complexity = 11
                  // Dst: (EQV:i32 i32:i32:$rS, i32:i32:$rB)
/*3975*/        0, /*End of Scope*/
              0, // EndSwitchOpcode
/*3977*/    /*Scope*/ 33, /*->4011*/
/*3978*/      OPC_RecordChild0, // #0 = $rB
/*3979*/      OPC_MoveChild, 1,
/*3981*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*3984*/      OPC_RecordChild0, // #1 = $rS
/*3985*/      OPC_MoveChild, 1,
/*3987*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3998*/      OPC_MoveParent,
/*3999*/      OPC_MoveParent,
/*4000*/      OPC_CheckType, MVT::i32,
/*4002*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EQV), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (xor:i32 i32:i32:$rB, (xor:i32 i32:i32:$rS, -1:i32)) - Complexity = 11
              // Dst: (EQV:i32 i32:i32:$rS, i32:i32:$rB)
/*4011*/    /*Scope*/ 33, /*->4045*/
/*4012*/      OPC_MoveChild, 0,
/*4014*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4017*/      OPC_RecordChild0, // #0 = $rS
/*4018*/      OPC_MoveChild, 1,
/*4020*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4031*/      OPC_MoveParent,
/*4032*/      OPC_MoveParent,
/*4033*/      OPC_RecordChild1, // #1 = $rB
/*4034*/      OPC_CheckType, MVT::i64,
/*4036*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EQV8), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i64 (xor:i64 i64:i64:$rS, -1:i64), i64:i64:$rB) - Complexity = 11
              // Dst: (EQV8:i64 i64:i64:$rS, i64:i64:$rB)
/*4045*/    /*Scope*/ 33, /*->4079*/
/*4046*/      OPC_RecordChild0, // #0 = $rB
/*4047*/      OPC_MoveChild, 1,
/*4049*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4052*/      OPC_RecordChild0, // #1 = $rS
/*4053*/      OPC_MoveChild, 1,
/*4055*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4066*/      OPC_MoveParent,
/*4067*/      OPC_MoveParent,
/*4068*/      OPC_CheckType, MVT::i64,
/*4070*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EQV8), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
              // Src: (xor:i64 i64:i64:$rB, (xor:i64 i64:i64:$rS, -1:i64)) - Complexity = 11
              // Dst: (EQV8:i64 i64:i64:$rS, i64:i64:$rB)
/*4079*/    /*Scope*/ 74, /*->4154*/
/*4080*/      OPC_MoveChild, 0,
/*4082*/      OPC_SwitchOpcode /*2 cases */, 32,  TARGET_VAL(ISD::OR),// ->4118
/*4086*/        OPC_RecordChild0, // #0 = $vA
/*4087*/        OPC_RecordChild1, // #1 = $vB
/*4088*/        OPC_MoveParent,
/*4089*/        OPC_MoveChild, 1,
/*4091*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4094*/        OPC_MoveChild, 0,
/*4096*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4099*/        OPC_CheckPredicate, 71, // Predicate_immAllOnesV
/*4101*/        OPC_CheckType, MVT::v16i8,
/*4103*/        OPC_MoveParent,
/*4104*/        OPC_MoveParent,
/*4105*/        OPC_CheckType, MVT::v4i32,
/*4107*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4109*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:v4i32 (or:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB), (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)) - Complexity = 13
                // Dst: (VNOR:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
              /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::BITCAST),// ->4153
/*4121*/        OPC_MoveChild, 0,
/*4123*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4126*/        OPC_CheckPredicate, 71, // Predicate_immAllOnesV
/*4128*/        OPC_CheckType, MVT::v16i8,
/*4130*/        OPC_MoveParent,
/*4131*/        OPC_MoveParent,
/*4132*/        OPC_MoveChild, 1,
/*4134*/        OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*4137*/        OPC_RecordChild0, // #0 = $vA
/*4138*/        OPC_RecordChild1, // #1 = $vB
/*4139*/        OPC_MoveParent,
/*4140*/        OPC_CheckType, MVT::v4i32,
/*4142*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4144*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), (or:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)) - Complexity = 13
                // Dst: (VNOR:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
              0, // EndSwitchOpcode
/*4154*/    /*Scope*/ 30, /*->4185*/
/*4155*/      OPC_RecordChild0, // #0 = $vA
/*4156*/      OPC_MoveChild, 1,
/*4158*/      OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4161*/      OPC_MoveChild, 0,
/*4163*/      OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4166*/      OPC_CheckPredicate, 71, // Predicate_immAllOnesV
/*4168*/      OPC_CheckType, MVT::v16i8,
/*4170*/      OPC_MoveParent,
/*4171*/      OPC_MoveParent,
/*4172*/      OPC_CheckType, MVT::v4i32,
/*4174*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4176*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 0, 
              // Src: (xor:v4i32 v4i32:v4i32:$vA, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)) - Complexity = 10
              // Dst: (VNOR:v4i32 ?:v4i32:$vA, ?:v4i32:$vA)
/*4185*/    /*Scope*/ 30, /*->4216*/
/*4186*/      OPC_MoveChild, 0,
/*4188*/      OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4191*/      OPC_MoveChild, 0,
/*4193*/      OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4196*/      OPC_CheckPredicate, 71, // Predicate_immAllOnesV
/*4198*/      OPC_CheckType, MVT::v16i8,
/*4200*/      OPC_MoveParent,
/*4201*/      OPC_MoveParent,
/*4202*/      OPC_RecordChild1, // #0 = $vA
/*4203*/      OPC_CheckType, MVT::v4i32,
/*4205*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4207*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 0, 
              // Src: (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), v4i32:v4i32:$vA) - Complexity = 10
              // Dst: (VNOR:v4i32 ?:v4i32:$vA, ?:v4i32:$vA)
/*4216*/    /*Scope*/ 64|128,1/*192*/, /*->4410*/
/*4218*/      OPC_RecordChild0, // #0 = $in
/*4219*/      OPC_Scope, 25, /*->4246*/ // 2 children in Scope
/*4221*/        OPC_MoveChild, 1,
/*4223*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4234*/        OPC_MoveParent,
/*4235*/        OPC_CheckType, MVT::i32,
/*4237*/        OPC_MorphNodeTo, TARGET_VAL(PPC::NOR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                // Src: (xor:i32 i32:i32:$in, -1:i32) - Complexity = 8
                // Dst: (NOR:i32 ?:i32:$in, ?:i32:$in)
/*4246*/      /*Scope*/ 33|128,1/*161*/, /*->4409*/
/*4248*/        OPC_RecordChild1, // #1 = $src2
/*4249*/        OPC_Scope, 119, /*->4370*/ // 4 children in Scope
/*4251*/          OPC_MoveChild, 1,
/*4253*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4256*/          OPC_Scope, 19, /*->4277*/ // 5 children in Scope
/*4258*/            OPC_CheckPredicate, 72, // Predicate_immZExt16
/*4260*/            OPC_MoveParent,
/*4261*/            OPC_CheckType, MVT::i32,
/*4263*/            OPC_EmitConvertToTarget, 1,
/*4265*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4268*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORI), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i32 i32:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                    // Dst: (XORI:i32 i32:i32:$src1, (LO16:i32 (imm:i32):$src2))
/*4277*/          /*Scope*/ 19, /*->4297*/
/*4278*/            OPC_CheckPredicate, 73, // Predicate_imm16ShiftedZExt
/*4280*/            OPC_MoveParent,
/*4281*/            OPC_CheckType, MVT::i32,
/*4283*/            OPC_EmitConvertToTarget, 1,
/*4285*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*4288*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i32 i32:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                    // Dst: (XORIS:i32 i32:i32:$src1, (HI16:i32 (imm:i32):$src2))
/*4297*/          /*Scope*/ 19, /*->4317*/
/*4298*/            OPC_CheckPredicate, 72, // Predicate_immZExt16
/*4300*/            OPC_MoveParent,
/*4301*/            OPC_CheckType, MVT::i64,
/*4303*/            OPC_EmitConvertToTarget, 1,
/*4305*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4308*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORI8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i64 i64:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                    // Dst: (XORI8:i64 i64:i64:$src1, (LO16:i32 (imm:i64):$src2))
/*4317*/          /*Scope*/ 19, /*->4337*/
/*4318*/            OPC_CheckPredicate, 73, // Predicate_imm16ShiftedZExt
/*4320*/            OPC_MoveParent,
/*4321*/            OPC_CheckType, MVT::i64,
/*4323*/            OPC_EmitConvertToTarget, 1,
/*4325*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*4328*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i64 i64:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                    // Dst: (XORIS8:i64 i64:i64:$src1, (HI16:i32 (imm:i64):$src2))
/*4337*/          /*Scope*/ 31, /*->4369*/
/*4338*/            OPC_MoveParent,
/*4339*/            OPC_CheckType, MVT::i32,
/*4341*/            OPC_EmitConvertToTarget, 1,
/*4343*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4346*/            OPC_EmitNode, TARGET_VAL(PPC::XORI), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*4355*/            OPC_EmitConvertToTarget, 1,
/*4357*/            OPC_EmitNodeXForm, 0, 5, // HI16
/*4360*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 6, 
                    // Src: (xor:i32 i32:i32:$in, (imm:i32):$imm) - Complexity = 6
                    // Dst: (XORIS:i32 (XORI:i32 ?:i32:$in, (LO16:i32 (imm:i32):$imm)), (HI16:i32 (imm:i32):$imm))
/*4369*/          0, /*End of Scope*/
/*4370*/        /*Scope*/ 11, /*->4382*/
/*4371*/          OPC_CheckType, MVT::i32,
/*4373*/          OPC_MorphNodeTo, TARGET_VAL(PPC::XOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
                  // Dst: (XOR:i32 i32:i32:$rS, i32:i32:$rB)
/*4382*/        /*Scope*/ 11, /*->4394*/
/*4383*/          OPC_CheckType, MVT::i64,
/*4385*/          OPC_MorphNodeTo, TARGET_VAL(PPC::XOR8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 i64:i64:$rS, i64:i64:$rB) - Complexity = 3
                  // Dst: (XOR8:i64 i64:i64:$rS, i64:i64:$rB)
/*4394*/        /*Scope*/ 13, /*->4408*/
/*4395*/          OPC_CheckType, MVT::v4i32,
/*4397*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4399*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VXOR), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
                  // Dst: (VXOR:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*4408*/        0, /*End of Scope*/
/*4409*/      0, /*End of Scope*/
/*4410*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 37|128,3/*421*/,  TARGET_VAL(ISD::AND),// ->4836
/*4415*/    OPC_Scope, 46, /*->4463*/ // 5 children in Scope
/*4417*/      OPC_RecordChild0, // #0 = $rS
/*4418*/      OPC_MoveChild, 1,
/*4420*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4423*/      OPC_RecordChild0, // #1 = $rB
/*4424*/      OPC_MoveChild, 1,
/*4426*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4437*/      OPC_MoveParent,
/*4438*/      OPC_MoveParent,
/*4439*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4451
/*4442*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 i32:i32:$rS, (xor:i32 i32:i32:$rB, -1:i32)) - Complexity = 11
                // Dst: (ANDC:i32 i32:i32:$rS, i32:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->4462
/*4453*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 i64:i64:$rS, (xor:i64 i64:i64:$rB, -1:i64)) - Complexity = 11
                // Dst: (ANDC8:i64 i64:i64:$rS, i64:i64:$rB)
              0, // EndSwitchType
/*4463*/    /*Scope*/ 88, /*->4552*/
/*4464*/      OPC_MoveChild, 0,
/*4466*/      OPC_SwitchOpcode /*2 cases */, 41,  TARGET_VAL(ISD::XOR),// ->4511
/*4470*/        OPC_RecordChild0, // #0 = $rB
/*4471*/        OPC_MoveChild, 1,
/*4473*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4484*/        OPC_MoveParent,
/*4485*/        OPC_MoveParent,
/*4486*/        OPC_RecordChild1, // #1 = $rS
/*4487*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4499
/*4490*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (and:i32 (xor:i32 i32:i32:$rB, -1:i32), i32:i32:$rS) - Complexity = 11
                  // Dst: (ANDC:i32 i32:i32:$rS, i32:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->4510
/*4501*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (and:i64 (xor:i64 i64:i64:$rB, -1:i64), i64:i64:$rS) - Complexity = 11
                  // Dst: (ANDC8:i64 i64:i64:$rS, i64:i64:$rB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::ROTL),// ->4551
/*4514*/        OPC_RecordChild0, // #0 = $in
/*4515*/        OPC_RecordChild1, // #1 = $sh
/*4516*/        OPC_CheckChild1Type, MVT::i32,
/*4518*/        OPC_MoveParent,
/*4519*/        OPC_RecordChild1, // #2 = $imm
/*4520*/        OPC_MoveChild, 1,
/*4522*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4525*/        OPC_CheckPredicate, 74, // Predicate_maskimm32
/*4527*/        OPC_MoveParent,
/*4528*/        OPC_CheckType, MVT::i32,
/*4530*/        OPC_EmitConvertToTarget, 2,
/*4532*/        OPC_EmitNodeXForm, 3, 3, // MB
/*4535*/        OPC_EmitConvertToTarget, 2,
/*4537*/        OPC_EmitNodeXForm, 4, 5, // ME
/*4540*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWNM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 4, 6, 
                // Src: (and:i32 (rotl:i32 i32:i32:$in, i32:i32:$sh), (imm:i32)<<P:Predicate_maskimm32>>:$imm) - Complexity = 10
                // Dst: (RLWNM:i32 ?:i32:$in, ?:i32:$sh, (MB:i32 (imm:i32)<<P:Predicate_maskimm32>>:$imm), (ME:i32 (imm:i32)<<P:Predicate_maskimm32>>:$imm))
              0, // EndSwitchOpcode
/*4552*/    /*Scope*/ 72, /*->4625*/
/*4553*/      OPC_RecordChild0, // #0 = $vA
/*4554*/      OPC_MoveChild, 1,
/*4556*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4559*/      OPC_Scope, 31, /*->4592*/ // 2 children in Scope
/*4561*/        OPC_RecordChild0, // #1 = $vB
/*4562*/        OPC_MoveChild, 1,
/*4564*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4567*/        OPC_MoveChild, 0,
/*4569*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4572*/        OPC_CheckPredicate, 71, // Predicate_immAllOnesV
/*4574*/        OPC_CheckType, MVT::v16i8,
/*4576*/        OPC_MoveParent,
/*4577*/        OPC_MoveParent,
/*4578*/        OPC_MoveParent,
/*4579*/        OPC_CheckType, MVT::v4i32,
/*4581*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4583*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:v4i32 v4i32:v4i32:$vA, (xor:v4i32 v4i32:v4i32:$vB, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>))) - Complexity = 13
                // Dst: (VANDC:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*4592*/      /*Scope*/ 31, /*->4624*/
/*4593*/        OPC_MoveChild, 0,
/*4595*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4598*/        OPC_MoveChild, 0,
/*4600*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4603*/        OPC_CheckPredicate, 71, // Predicate_immAllOnesV
/*4605*/        OPC_CheckType, MVT::v16i8,
/*4607*/        OPC_MoveParent,
/*4608*/        OPC_MoveParent,
/*4609*/        OPC_RecordChild1, // #1 = $vB
/*4610*/        OPC_MoveParent,
/*4611*/        OPC_CheckType, MVT::v4i32,
/*4613*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4615*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:v4i32 v4i32:v4i32:$vA, (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), v4i32:v4i32:$vB)) - Complexity = 13
                // Dst: (VANDC:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*4624*/      0, /*End of Scope*/
/*4625*/    /*Scope*/ 73, /*->4699*/
/*4626*/      OPC_MoveChild, 0,
/*4628*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4631*/      OPC_Scope, 32, /*->4665*/ // 2 children in Scope
/*4633*/        OPC_RecordChild0, // #0 = $vB
/*4634*/        OPC_MoveChild, 1,
/*4636*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4639*/        OPC_MoveChild, 0,
/*4641*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4644*/        OPC_CheckPredicate, 71, // Predicate_immAllOnesV
/*4646*/        OPC_CheckType, MVT::v16i8,
/*4648*/        OPC_MoveParent,
/*4649*/        OPC_MoveParent,
/*4650*/        OPC_MoveParent,
/*4651*/        OPC_RecordChild1, // #1 = $vA
/*4652*/        OPC_CheckType, MVT::v4i32,
/*4654*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4656*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 0, 
                // Src: (and:v4i32 (xor:v4i32 v4i32:v4i32:$vB, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)), v4i32:v4i32:$vA) - Complexity = 13
                // Dst: (VANDC:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*4665*/      /*Scope*/ 32, /*->4698*/
/*4666*/        OPC_MoveChild, 0,
/*4668*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4671*/        OPC_MoveChild, 0,
/*4673*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4676*/        OPC_CheckPredicate, 71, // Predicate_immAllOnesV
/*4678*/        OPC_CheckType, MVT::v16i8,
/*4680*/        OPC_MoveParent,
/*4681*/        OPC_MoveParent,
/*4682*/        OPC_RecordChild1, // #0 = $vB
/*4683*/        OPC_MoveParent,
/*4684*/        OPC_RecordChild1, // #1 = $vA
/*4685*/        OPC_CheckType, MVT::v4i32,
/*4687*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4689*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 0, 
                // Src: (and:v4i32 (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), v4i32:v4i32:$vB), v4i32:v4i32:$vA) - Complexity = 13
                // Dst: (VANDC:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*4698*/      0, /*End of Scope*/
/*4699*/    /*Scope*/ 6|128,1/*134*/, /*->4835*/
/*4701*/      OPC_RecordChild0, // #0 = $src1
/*4702*/      OPC_RecordChild1, // #1 = $src2
/*4703*/      OPC_Scope, 91, /*->4796*/ // 4 children in Scope
/*4705*/        OPC_MoveChild, 1,
/*4707*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4710*/        OPC_Scope, 20, /*->4732*/ // 4 children in Scope
/*4712*/          OPC_CheckPredicate, 72, // Predicate_immZExt16
/*4714*/          OPC_MoveParent,
/*4715*/          OPC_CheckType, MVT::i32,
/*4717*/          OPC_EmitConvertToTarget, 1,
/*4719*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*4722*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDIo), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i32 i32:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                  // Dst: (ANDIo:i32:i32 i32:i32:$src1, (LO16:i32 (imm:i32):$src2))
/*4732*/        /*Scope*/ 20, /*->4753*/
/*4733*/          OPC_CheckPredicate, 73, // Predicate_imm16ShiftedZExt
/*4735*/          OPC_MoveParent,
/*4736*/          OPC_CheckType, MVT::i32,
/*4738*/          OPC_EmitConvertToTarget, 1,
/*4740*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*4743*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDISo), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i32 i32:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                  // Dst: (ANDISo:i32:i32 i32:i32:$src1, (HI16:i32 (imm:i32):$src2))
/*4753*/        /*Scope*/ 20, /*->4774*/
/*4754*/          OPC_CheckPredicate, 72, // Predicate_immZExt16
/*4756*/          OPC_MoveParent,
/*4757*/          OPC_CheckType, MVT::i64,
/*4759*/          OPC_EmitConvertToTarget, 1,
/*4761*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*4764*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDIo8), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 i64:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                  // Dst: (ANDIo8:i64:i32 i64:i64:$src1, (LO16:i32 (imm:i64):$src2))
/*4774*/        /*Scope*/ 20, /*->4795*/
/*4775*/          OPC_CheckPredicate, 73, // Predicate_imm16ShiftedZExt
/*4777*/          OPC_MoveParent,
/*4778*/          OPC_CheckType, MVT::i64,
/*4780*/          OPC_EmitConvertToTarget, 1,
/*4782*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*4785*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDISo8), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 i64:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                  // Dst: (ANDISo8:i64:i32 i64:i64:$src1, (HI16:i32 (imm:i64):$src2))
/*4795*/        0, /*End of Scope*/
/*4796*/      /*Scope*/ 11, /*->4808*/
/*4797*/        OPC_CheckType, MVT::i32,
/*4799*/        OPC_MorphNodeTo, TARGET_VAL(PPC::AND), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (AND:i32 i32:i32:$rS, i32:i32:$rB)
/*4808*/      /*Scope*/ 11, /*->4820*/
/*4809*/        OPC_CheckType, MVT::i64,
/*4811*/        OPC_MorphNodeTo, TARGET_VAL(PPC::AND8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 i64:i64:$rS, i64:i64:$rB) - Complexity = 3
                // Dst: (AND8:i64 i64:i64:$rS, i64:i64:$rB)
/*4820*/      /*Scope*/ 13, /*->4834*/
/*4821*/        OPC_CheckType, MVT::v4i32,
/*4823*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4825*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VAND), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
                // Dst: (VAND:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*4834*/      0, /*End of Scope*/
/*4835*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 4|128,2/*260*/,  TARGET_VAL(ISD::OR),// ->5100
/*4840*/    OPC_Scope, 46, /*->4888*/ // 3 children in Scope
/*4842*/      OPC_RecordChild0, // #0 = $rS
/*4843*/      OPC_MoveChild, 1,
/*4845*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4848*/      OPC_RecordChild0, // #1 = $rB
/*4849*/      OPC_MoveChild, 1,
/*4851*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4862*/      OPC_MoveParent,
/*4863*/      OPC_MoveParent,
/*4864*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4876
/*4867*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 i32:i32:$rS, (xor:i32 i32:i32:$rB, -1:i32)) - Complexity = 11
                // Dst: (ORC:i32 i32:i32:$rS, i32:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->4887
/*4878*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 i64:i64:$rS, (xor:i64 i64:i64:$rB, -1:i64)) - Complexity = 11
                // Dst: (ORC8:i64 i64:i64:$rS, i64:i64:$rB)
              0, // EndSwitchType
/*4888*/    /*Scope*/ 46, /*->4935*/
/*4889*/      OPC_MoveChild, 0,
/*4891*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4894*/      OPC_RecordChild0, // #0 = $rB
/*4895*/      OPC_MoveChild, 1,
/*4897*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4908*/      OPC_MoveParent,
/*4909*/      OPC_MoveParent,
/*4910*/      OPC_RecordChild1, // #1 = $rS
/*4911*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4923
/*4914*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (or:i32 (xor:i32 i32:i32:$rB, -1:i32), i32:i32:$rS) - Complexity = 11
                // Dst: (ORC:i32 i32:i32:$rS, i32:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->4934
/*4925*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (or:i64 (xor:i64 i64:i64:$rB, -1:i64), i64:i64:$rS) - Complexity = 11
                // Dst: (ORC8:i64 i64:i64:$rS, i64:i64:$rB)
              0, // EndSwitchType
/*4935*/    /*Scope*/ 34|128,1/*162*/, /*->5099*/
/*4937*/      OPC_RecordChild0, // #0 = $src1
/*4938*/      OPC_RecordChild1, // #1 = $src2
/*4939*/      OPC_Scope, 119, /*->5060*/ // 4 children in Scope
/*4941*/        OPC_MoveChild, 1,
/*4943*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4946*/        OPC_Scope, 19, /*->4967*/ // 5 children in Scope
/*4948*/          OPC_CheckPredicate, 72, // Predicate_immZExt16
/*4950*/          OPC_MoveParent,
/*4951*/          OPC_CheckType, MVT::i32,
/*4953*/          OPC_EmitConvertToTarget, 1,
/*4955*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*4958*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 i32:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                  // Dst: (ORI:i32 i32:i32:$src1, (LO16:i32 (imm:i32):$src2))
/*4967*/        /*Scope*/ 19, /*->4987*/
/*4968*/          OPC_CheckPredicate, 73, // Predicate_imm16ShiftedZExt
/*4970*/          OPC_MoveParent,
/*4971*/          OPC_CheckType, MVT::i32,
/*4973*/          OPC_EmitConvertToTarget, 1,
/*4975*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*4978*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 i32:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                  // Dst: (ORIS:i32 i32:i32:$src1, (HI16:i32 (imm:i32):$src2))
/*4987*/        /*Scope*/ 19, /*->5007*/
/*4988*/          OPC_CheckPredicate, 72, // Predicate_immZExt16
/*4990*/          OPC_MoveParent,
/*4991*/          OPC_CheckType, MVT::i64,
/*4993*/          OPC_EmitConvertToTarget, 1,
/*4995*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*4998*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORI8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 i64:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                  // Dst: (ORI8:i64 i64:i64:$src1, (LO16:i32 (imm:i64):$src2))
/*5007*/        /*Scope*/ 19, /*->5027*/
/*5008*/          OPC_CheckPredicate, 73, // Predicate_imm16ShiftedZExt
/*5010*/          OPC_MoveParent,
/*5011*/          OPC_CheckType, MVT::i64,
/*5013*/          OPC_EmitConvertToTarget, 1,
/*5015*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*5018*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORIS8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 i64:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                  // Dst: (ORIS8:i64 i64:i64:$src1, (HI16:i32 (imm:i64):$src2))
/*5027*/        /*Scope*/ 31, /*->5059*/
/*5028*/          OPC_MoveParent,
/*5029*/          OPC_CheckType, MVT::i32,
/*5031*/          OPC_EmitConvertToTarget, 1,
/*5033*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*5036*/          OPC_EmitNode, TARGET_VAL(PPC::ORI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*5045*/          OPC_EmitConvertToTarget, 1,
/*5047*/          OPC_EmitNodeXForm, 0, 5, // HI16
/*5050*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 6, 
                  // Src: (or:i32 i32:i32:$in, (imm:i32):$imm) - Complexity = 6
                  // Dst: (ORIS:i32 (ORI:i32 ?:i32:$in, (LO16:i32 (imm:i32):$imm)), (HI16:i32 (imm:i32):$imm))
/*5059*/        0, /*End of Scope*/
/*5060*/      /*Scope*/ 11, /*->5072*/
/*5061*/        OPC_CheckType, MVT::i32,
/*5063*/        OPC_MorphNodeTo, TARGET_VAL(PPC::OR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (OR:i32 i32:i32:$rS, i32:i32:$rB)
/*5072*/      /*Scope*/ 11, /*->5084*/
/*5073*/        OPC_CheckType, MVT::i64,
/*5075*/        OPC_MorphNodeTo, TARGET_VAL(PPC::OR8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 i64:i64:$rS, i64:i64:$rB) - Complexity = 3
                // Dst: (OR8:i64 i64:i64:$rS, i64:i64:$rB)
/*5084*/      /*Scope*/ 13, /*->5098*/
/*5085*/        OPC_CheckType, MVT::v4i32,
/*5087*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5089*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VOR), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
                // Dst: (VOR:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*5098*/      0, /*End of Scope*/
/*5099*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 30|128,1/*158*/,  TARGET_VAL(PPCISD::Hi),// ->5262
/*5104*/    OPC_RecordChild0, // #0 = $in
/*5105*/    OPC_MoveChild, 0,
/*5107*/    OPC_SwitchOpcode /*5 cases */, 28,  TARGET_VAL(ISD::TargetGlobalAddress),// ->5139
/*5111*/      OPC_MoveParent,
/*5112*/      OPC_MoveChild, 1,
/*5114*/      OPC_CheckInteger, 0, 
/*5116*/      OPC_MoveParent,
/*5117*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5128
/*5120*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tglobaladdr:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tglobaladdr:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5138
/*5130*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tglobaladdr:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetConstantPool),// ->5170
/*5142*/      OPC_MoveParent,
/*5143*/      OPC_MoveChild, 1,
/*5145*/      OPC_CheckInteger, 0, 
/*5147*/      OPC_MoveParent,
/*5148*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5159
/*5151*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tconstpool:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tconstpool:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5169
/*5161*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tconstpool:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetJumpTable),// ->5201
/*5173*/      OPC_MoveParent,
/*5174*/      OPC_MoveChild, 1,
/*5176*/      OPC_CheckInteger, 0, 
/*5178*/      OPC_MoveParent,
/*5179*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5190
/*5182*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tjumptable:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tjumptable:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5200
/*5192*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tjumptable:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetBlockAddress),// ->5232
/*5204*/      OPC_MoveParent,
/*5205*/      OPC_MoveChild, 1,
/*5207*/      OPC_CheckInteger, 0, 
/*5209*/      OPC_MoveParent,
/*5210*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5221
/*5213*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tblockaddress:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tblockaddress:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5231
/*5223*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tblockaddress:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->5261
/*5235*/      OPC_MoveParent,
/*5236*/      OPC_RecordChild1, // #1 = $in
/*5237*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5249
/*5240*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (PPChi:i32 (tglobaltlsaddr:i32):$g, i32:i32:$in) - Complexity = 6
                // Dst: (ADDIS:i32 ?:i32:$in, (tglobaltlsaddr:i32):$g)
              /*SwitchType*/ 9,  MVT::i64,// ->5260
/*5251*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (PPChi:i64 (tglobaltlsaddr:i64):$g, i64:i64:$in) - Complexity = 6
                // Dst: (ADDIS8:i64 ?:i64:$in, (tglobaltlsaddr:i64):$g)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 30|128,1/*158*/,  TARGET_VAL(PPCISD::Lo),// ->5424
/*5266*/    OPC_RecordChild0, // #0 = $in
/*5267*/    OPC_MoveChild, 0,
/*5269*/    OPC_SwitchOpcode /*5 cases */, 28,  TARGET_VAL(ISD::TargetGlobalAddress),// ->5301
/*5273*/      OPC_MoveParent,
/*5274*/      OPC_MoveChild, 1,
/*5276*/      OPC_CheckInteger, 0, 
/*5278*/      OPC_MoveParent,
/*5279*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5290
/*5282*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tglobaladdr:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tglobaladdr:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5300
/*5292*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tglobaladdr:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetConstantPool),// ->5332
/*5304*/      OPC_MoveParent,
/*5305*/      OPC_MoveChild, 1,
/*5307*/      OPC_CheckInteger, 0, 
/*5309*/      OPC_MoveParent,
/*5310*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5321
/*5313*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tconstpool:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tconstpool:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5331
/*5323*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tconstpool:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetJumpTable),// ->5363
/*5335*/      OPC_MoveParent,
/*5336*/      OPC_MoveChild, 1,
/*5338*/      OPC_CheckInteger, 0, 
/*5340*/      OPC_MoveParent,
/*5341*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5352
/*5344*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tjumptable:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tjumptable:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5362
/*5354*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tjumptable:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetBlockAddress),// ->5394
/*5366*/      OPC_MoveParent,
/*5367*/      OPC_MoveChild, 1,
/*5369*/      OPC_CheckInteger, 0, 
/*5371*/      OPC_MoveParent,
/*5372*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5383
/*5375*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tblockaddress:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tblockaddress:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5393
/*5385*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tblockaddress:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->5423
/*5397*/      OPC_MoveParent,
/*5398*/      OPC_RecordChild1, // #1 = $in
/*5399*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5411
/*5402*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (PPClo:i32 (tglobaltlsaddr:i32):$g, i32:i32:$in) - Complexity = 6
                // Dst: (ADDI:i32 ?:i32:$in, (tglobaltlsaddr:i32):$g)
              /*SwitchType*/ 9,  MVT::i64,// ->5422
/*5413*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (PPClo:i64 (tglobaltlsaddr:i64):$g, i64:i64:$in) - Complexity = 6
                // Dst: (ADDI8:i64 ?:i64:$in, (tglobaltlsaddr:i64):$g)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 15,  TARGET_VAL(PPCISD::LFIWAX),// ->5442
/*5427*/    OPC_RecordNode,   // #0 = 'PPClfiwax' chained node
/*5428*/    OPC_RecordChild1, // #1 = $src
/*5429*/    OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5432*/    OPC_EmitMergeInputChains1_0,
/*5433*/    OPC_MorphNodeTo, TARGET_VAL(PPC::LFIWAX), 0|OPFL_Chain,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
            // Src: (PPClfiwax:f64 xoaddr:iPTR:$src) - Complexity = 12
            // Dst: (LFIWAX:f64 xoaddr:iPTR:$src)
          /*SwitchOpcode*/ 15,  TARGET_VAL(PPCISD::LFIWZX),// ->5460
/*5445*/    OPC_RecordNode,   // #0 = 'PPClfiwzx' chained node
/*5446*/    OPC_RecordChild1, // #1 = $src
/*5447*/    OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5450*/    OPC_EmitMergeInputChains1_0,
/*5451*/    OPC_MorphNodeTo, TARGET_VAL(PPC::LFIWZX), 0|OPFL_Chain,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
            // Src: (PPClfiwzx:f64 xoaddr:iPTR:$src) - Complexity = 12
            // Dst: (LFIWZX:f64 xoaddr:iPTR:$src)
          /*SwitchOpcode*/ 125,  TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->5588
/*5463*/    OPC_RecordNode,   // #0 = 'intrinsic_w_chain' chained node
/*5464*/    OPC_MoveChild, 1,
/*5466*/    OPC_Scope, 20, /*->5488*/ // 6 children in Scope
/*5468*/      OPC_CheckInteger, 83|128,11/*1491*/, 
/*5471*/      OPC_MoveParent,
/*5472*/      OPC_RecordChild2, // #1 = $src
/*5473*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5475*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5478*/      OPC_EmitMergeInputChains1_0,
/*5479*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVEBX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v16i8 1491:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVEBX:v16i8 xoaddr:iPTR:$src)
/*5488*/    /*Scope*/ 20, /*->5509*/
/*5489*/      OPC_CheckInteger, 84|128,11/*1492*/, 
/*5492*/      OPC_MoveParent,
/*5493*/      OPC_RecordChild2, // #1 = $src
/*5494*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5496*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5499*/      OPC_EmitMergeInputChains1_0,
/*5500*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVEHX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v8i16 1492:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVEHX:v8i16 xoaddr:iPTR:$src)
/*5509*/    /*Scope*/ 20, /*->5530*/
/*5510*/      OPC_CheckInteger, 85|128,11/*1493*/, 
/*5513*/      OPC_MoveParent,
/*5514*/      OPC_RecordChild2, // #1 = $src
/*5515*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5517*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5520*/      OPC_EmitMergeInputChains1_0,
/*5521*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVEWX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v4i32 1493:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVEWX:v4i32 xoaddr:iPTR:$src)
/*5530*/    /*Scope*/ 20, /*->5551*/
/*5531*/      OPC_CheckInteger, 88|128,11/*1496*/, 
/*5534*/      OPC_MoveParent,
/*5535*/      OPC_RecordChild2, // #1 = $src
/*5536*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5538*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5541*/      OPC_EmitMergeInputChains1_0,
/*5542*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v4i32 1496:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVX:v4i32 xoaddr:iPTR:$src)
/*5551*/    /*Scope*/ 20, /*->5572*/
/*5552*/      OPC_CheckInteger, 89|128,11/*1497*/, 
/*5555*/      OPC_MoveParent,
/*5556*/      OPC_RecordChild2, // #1 = $src
/*5557*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5559*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5562*/      OPC_EmitMergeInputChains1_0,
/*5563*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVXL), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v4i32 1497:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVXL:v4i32 xoaddr:iPTR:$src)
/*5572*/    /*Scope*/ 14, /*->5587*/
/*5573*/      OPC_CheckInteger, 90|128,11/*1498*/, 
/*5576*/      OPC_MoveParent,
/*5577*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5579*/      OPC_EmitMergeInputChains1_0,
/*5580*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MFVSCR), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v8i16, 0/*#Ops*/, 
              // Src: (intrinsic_w_chain:v8i16 1498:iPTR) - Complexity = 8
              // Dst: (MFVSCR:v8i16)
/*5587*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 48|128,15/*1968*/,  TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->7560
/*5592*/    OPC_MoveChild, 0,
/*5594*/    OPC_Scope, 19, /*->5615*/ // 103 children in Scope
/*5596*/      OPC_CheckInteger, 86|128,11/*1494*/, 
/*5599*/      OPC_MoveParent,
/*5600*/      OPC_RecordChild1, // #0 = $src
/*5601*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5603*/      OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectAddrIdxOnly:$src #1 #2
/*5606*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVSL), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_wo_chain:v16i8 1494:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVSL:v16i8 xoaddr:iPTR:$src)
/*5615*/    /*Scope*/ 19, /*->5635*/
/*5616*/      OPC_CheckInteger, 87|128,11/*1495*/, 
/*5619*/      OPC_MoveParent,
/*5620*/      OPC_RecordChild1, // #0 = $src
/*5621*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5623*/      OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectAddrIdxOnly:$src #1 #2
/*5626*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVSR), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_wo_chain:v16i8 1495:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVSR:v16i8 xoaddr:iPTR:$src)
/*5635*/    /*Scope*/ 44, /*->5680*/
/*5636*/      OPC_CheckInteger, 11|128,12/*1547*/, 
/*5639*/      OPC_MoveParent,
/*5640*/      OPC_RecordChild1, // #0 = $vB
/*5641*/      OPC_Scope, 15, /*->5658*/ // 2 children in Scope
/*5643*/        OPC_MoveChild, 2,
/*5645*/        OPC_CheckInteger, 0, 
/*5647*/        OPC_MoveParent,
/*5648*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5650*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCTUXS_0), 0,
                    1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4i32 1547:iPTR, v4f32:v4f32:$vB, 0:i32) - Complexity = 13
                // Dst: (VCTUXS_0:v4i32 v4f32:v4f32:$vB)
/*5658*/      /*Scope*/ 20, /*->5679*/
/*5659*/        OPC_RecordChild2, // #1 = $UIMM
/*5660*/        OPC_MoveChild, 2,
/*5662*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5665*/        OPC_MoveParent,
/*5666*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5668*/        OPC_EmitConvertToTarget, 1,
/*5670*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCTUXS), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 0, 
                // Src: (intrinsic_wo_chain:v4i32 1547:iPTR, v4f32:v4f32:$vB, (imm:i32):$UIMM) - Complexity = 11
                // Dst: (VCTUXS:v4i32 (imm:i32):$UIMM, v4f32:v4f32:$vB)
/*5679*/      0, /*End of Scope*/
/*5680*/    /*Scope*/ 44, /*->5725*/
/*5681*/      OPC_CheckInteger, 10|128,12/*1546*/, 
/*5684*/      OPC_MoveParent,
/*5685*/      OPC_RecordChild1, // #0 = $vB
/*5686*/      OPC_Scope, 15, /*->5703*/ // 2 children in Scope
/*5688*/        OPC_MoveChild, 2,
/*5690*/        OPC_CheckInteger, 0, 
/*5692*/        OPC_MoveParent,
/*5693*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5695*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCTSXS_0), 0,
                    1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4i32 1546:iPTR, v4f32:v4f32:$vB, 0:i32) - Complexity = 13
                // Dst: (VCTSXS_0:v4i32 v4f32:v4f32:$vB)
/*5703*/      /*Scope*/ 20, /*->5724*/
/*5704*/        OPC_RecordChild2, // #1 = $UIMM
/*5705*/        OPC_MoveChild, 2,
/*5707*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5710*/        OPC_MoveParent,
/*5711*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5713*/        OPC_EmitConvertToTarget, 1,
/*5715*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCTSXS), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 0, 
                // Src: (intrinsic_wo_chain:v4i32 1546:iPTR, v4f32:v4f32:$vB, (imm:i32):$UIMM) - Complexity = 11
                // Dst: (VCTSXS:v4i32 (imm:i32):$UIMM, v4f32:v4f32:$vB)
/*5724*/      0, /*End of Scope*/
/*5725*/    /*Scope*/ 44, /*->5770*/
/*5726*/      OPC_CheckInteger, 111|128,11/*1519*/, 
/*5729*/      OPC_MoveParent,
/*5730*/      OPC_RecordChild1, // #0 = $vB
/*5731*/      OPC_Scope, 15, /*->5748*/ // 2 children in Scope
/*5733*/        OPC_MoveChild, 2,
/*5735*/        OPC_CheckInteger, 0, 
/*5737*/        OPC_MoveParent,
/*5738*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5740*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCFUX_0), 0,
                    1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4f32 1519:iPTR, v4i32:v4i32:$vB, 0:i32) - Complexity = 13
                // Dst: (VCFUX_0:v4f32 v4i32:v4i32:$vB)
/*5748*/      /*Scope*/ 20, /*->5769*/
/*5749*/        OPC_RecordChild2, // #1 = $UIMM
/*5750*/        OPC_MoveChild, 2,
/*5752*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5755*/        OPC_MoveParent,
/*5756*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5758*/        OPC_EmitConvertToTarget, 1,
/*5760*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCFUX), 0,
                    1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 2, 0, 
                // Src: (intrinsic_wo_chain:v4f32 1519:iPTR, v4i32:v4i32:$vB, (imm:i32):$UIMM) - Complexity = 11
                // Dst: (VCFUX:v4f32 (imm:i32):$UIMM, v4i32:v4i32:$vB)
/*5769*/      0, /*End of Scope*/
/*5770*/    /*Scope*/ 44, /*->5815*/
/*5771*/      OPC_CheckInteger, 110|128,11/*1518*/, 
/*5774*/      OPC_MoveParent,
/*5775*/      OPC_RecordChild1, // #0 = $vB
/*5776*/      OPC_Scope, 15, /*->5793*/ // 2 children in Scope
/*5778*/        OPC_MoveChild, 2,
/*5780*/        OPC_CheckInteger, 0, 
/*5782*/        OPC_MoveParent,
/*5783*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5785*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCFSX_0), 0,
                    1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4f32 1518:iPTR, v4i32:v4i32:$vB, 0:i32) - Complexity = 13
                // Dst: (VCFSX_0:v4f32 v4i32:v4i32:$vB)
/*5793*/      /*Scope*/ 20, /*->5814*/
/*5794*/        OPC_RecordChild2, // #1 = $UIMM
/*5795*/        OPC_MoveChild, 2,
/*5797*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5800*/        OPC_MoveParent,
/*5801*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5803*/        OPC_EmitConvertToTarget, 1,
/*5805*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCFSX), 0,
                    1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 2, 0, 
                // Src: (intrinsic_wo_chain:v4f32 1518:iPTR, v4i32:v4i32:$vB, (imm:i32):$UIMM) - Complexity = 11
                // Dst: (VCFSX:v4f32 (imm:i32):$UIMM, v4i32:v4i32:$vB)
/*5814*/      0, /*End of Scope*/
/*5815*/    /*Scope*/ 19, /*->5835*/
/*5816*/      OPC_CheckInteger, 22|128,12/*1558*/, 
/*5819*/      OPC_MoveParent,
/*5820*/      OPC_RecordChild1, // #0 = $vA
/*5821*/      OPC_RecordChild2, // #1 = $vB
/*5822*/      OPC_RecordChild3, // #2 = $vC
/*5823*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5825*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMHADDSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v8i16 1558:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v8i16:v8i16:$vC) - Complexity = 8
              // Dst: (VMHADDSHS:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v8i16:v8i16:$vC)
/*5835*/    /*Scope*/ 19, /*->5855*/
/*5836*/      OPC_CheckInteger, 23|128,12/*1559*/, 
/*5839*/      OPC_MoveParent,
/*5840*/      OPC_RecordChild1, // #0 = $vA
/*5841*/      OPC_RecordChild2, // #1 = $vB
/*5842*/      OPC_RecordChild3, // #2 = $vC
/*5843*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5845*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMHRADDSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v8i16 1559:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v8i16:v8i16:$vC) - Complexity = 8
              // Dst: (VMHRADDSHS:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v8i16:v8i16:$vC)
/*5855*/    /*Scope*/ 19, /*->5875*/
/*5856*/      OPC_CheckInteger, 31|128,12/*1567*/, 
/*5859*/      OPC_MoveParent,
/*5860*/      OPC_RecordChild1, // #0 = $vA
/*5861*/      OPC_RecordChild2, // #1 = $vB
/*5862*/      OPC_RecordChild3, // #2 = $vC
/*5863*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5865*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMLADDUHM), 0,
                  1/*#VTs*/, MVT::v8i16, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v8i16 1567:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v8i16:v8i16:$vC) - Complexity = 8
              // Dst: (VMLADDUHM:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v8i16:v8i16:$vC)
/*5875*/    /*Scope*/ 19, /*->5895*/
/*5876*/      OPC_CheckInteger, 47|128,12/*1583*/, 
/*5879*/      OPC_MoveParent,
/*5880*/      OPC_RecordChild1, // #0 = $vA
/*5881*/      OPC_RecordChild2, // #1 = $vB
/*5882*/      OPC_RecordChild3, // #2 = $vC
/*5883*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5885*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPERM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1583:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB, v16i8:v16i8:$vC) - Complexity = 8
              // Dst: (VPERM:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, v16i8:v16i8:$vC)
/*5895*/    /*Scope*/ 19, /*->5915*/
/*5896*/      OPC_CheckInteger, 64|128,12/*1600*/, 
/*5899*/      OPC_MoveParent,
/*5900*/      OPC_RecordChild1, // #0 = $vA
/*5901*/      OPC_RecordChild2, // #1 = $vB
/*5902*/      OPC_RecordChild3, // #2 = $vC
/*5903*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5905*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSEL), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1600:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VSEL:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, v4i32:v4i32:$vC)
/*5915*/    /*Scope*/ 17, /*->5933*/
/*5916*/      OPC_CheckInteger, 97|128,11/*1505*/, 
/*5919*/      OPC_MoveParent,
/*5920*/      OPC_RecordChild1, // #0 = $vA
/*5921*/      OPC_RecordChild2, // #1 = $vB
/*5922*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5924*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDCUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1505:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VADDCUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*5933*/    /*Scope*/ 17, /*->5951*/
/*5934*/      OPC_CheckInteger, 98|128,11/*1506*/, 
/*5937*/      OPC_MoveParent,
/*5938*/      OPC_RecordChild1, // #0 = $vA
/*5939*/      OPC_RecordChild2, // #1 = $vB
/*5940*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5942*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDSBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1506:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VADDSBS:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*5951*/    /*Scope*/ 17, /*->5969*/
/*5952*/      OPC_CheckInteger, 99|128,11/*1507*/, 
/*5955*/      OPC_MoveParent,
/*5956*/      OPC_RecordChild1, // #0 = $vA
/*5957*/      OPC_RecordChild2, // #1 = $vB
/*5958*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5960*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1507:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VADDSHS:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*5969*/    /*Scope*/ 17, /*->5987*/
/*5970*/      OPC_CheckInteger, 100|128,11/*1508*/, 
/*5973*/      OPC_MoveParent,
/*5974*/      OPC_RecordChild1, // #0 = $vA
/*5975*/      OPC_RecordChild2, // #1 = $vB
/*5976*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5978*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDSWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1508:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VADDSWS:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*5987*/    /*Scope*/ 17, /*->6005*/
/*5988*/      OPC_CheckInteger, 101|128,11/*1509*/, 
/*5991*/      OPC_MoveParent,
/*5992*/      OPC_RecordChild1, // #0 = $vA
/*5993*/      OPC_RecordChild2, // #1 = $vB
/*5994*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5996*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1509:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VADDUBS:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6005*/    /*Scope*/ 17, /*->6023*/
/*6006*/      OPC_CheckInteger, 102|128,11/*1510*/, 
/*6009*/      OPC_MoveParent,
/*6010*/      OPC_RecordChild1, // #0 = $vA
/*6011*/      OPC_RecordChild2, // #1 = $vB
/*6012*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6014*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1510:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VADDUHS:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6023*/    /*Scope*/ 17, /*->6041*/
/*6024*/      OPC_CheckInteger, 103|128,11/*1511*/, 
/*6027*/      OPC_MoveParent,
/*6028*/      OPC_RecordChild1, // #0 = $vA
/*6029*/      OPC_RecordChild2, // #1 = $vB
/*6030*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6032*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1511:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VADDUWS:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6041*/    /*Scope*/ 17, /*->6059*/
/*6042*/      OPC_CheckInteger, 104|128,11/*1512*/, 
/*6045*/      OPC_MoveParent,
/*6046*/      OPC_RecordChild1, // #0 = $vA
/*6047*/      OPC_RecordChild2, // #1 = $vB
/*6048*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6050*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1512:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VAVGSB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6059*/    /*Scope*/ 17, /*->6077*/
/*6060*/      OPC_CheckInteger, 105|128,11/*1513*/, 
/*6063*/      OPC_MoveParent,
/*6064*/      OPC_RecordChild1, // #0 = $vA
/*6065*/      OPC_RecordChild2, // #1 = $vB
/*6066*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6068*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1513:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VAVGSH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6077*/    /*Scope*/ 17, /*->6095*/
/*6078*/      OPC_CheckInteger, 106|128,11/*1514*/, 
/*6081*/      OPC_MoveParent,
/*6082*/      OPC_RecordChild1, // #0 = $vA
/*6083*/      OPC_RecordChild2, // #1 = $vB
/*6084*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6086*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1514:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VAVGSW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6095*/    /*Scope*/ 17, /*->6113*/
/*6096*/      OPC_CheckInteger, 107|128,11/*1515*/, 
/*6099*/      OPC_MoveParent,
/*6100*/      OPC_RecordChild1, // #0 = $vA
/*6101*/      OPC_RecordChild2, // #1 = $vB
/*6102*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6104*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1515:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VAVGUB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6113*/    /*Scope*/ 17, /*->6131*/
/*6114*/      OPC_CheckInteger, 108|128,11/*1516*/, 
/*6117*/      OPC_MoveParent,
/*6118*/      OPC_RecordChild1, // #0 = $vA
/*6119*/      OPC_RecordChild2, // #1 = $vB
/*6120*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6122*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1516:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VAVGUH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6131*/    /*Scope*/ 17, /*->6149*/
/*6132*/      OPC_CheckInteger, 109|128,11/*1517*/, 
/*6135*/      OPC_MoveParent,
/*6136*/      OPC_RecordChild1, // #0 = $vA
/*6137*/      OPC_RecordChild2, // #1 = $vB
/*6138*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6140*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1517:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VAVGUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6149*/    /*Scope*/ 17, /*->6167*/
/*6150*/      OPC_CheckInteger, 16|128,12/*1552*/, 
/*6153*/      OPC_MoveParent,
/*6154*/      OPC_RecordChild1, // #0 = $vA
/*6155*/      OPC_RecordChild2, // #1 = $vB
/*6156*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6158*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1552:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMAXSB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6167*/    /*Scope*/ 17, /*->6185*/
/*6168*/      OPC_CheckInteger, 17|128,12/*1553*/, 
/*6171*/      OPC_MoveParent,
/*6172*/      OPC_RecordChild1, // #0 = $vA
/*6173*/      OPC_RecordChild2, // #1 = $vB
/*6174*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6176*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1553:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMAXSH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6185*/    /*Scope*/ 17, /*->6203*/
/*6186*/      OPC_CheckInteger, 18|128,12/*1554*/, 
/*6189*/      OPC_MoveParent,
/*6190*/      OPC_RecordChild1, // #0 = $vA
/*6191*/      OPC_RecordChild2, // #1 = $vB
/*6192*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6194*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1554:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VMAXSW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6203*/    /*Scope*/ 17, /*->6221*/
/*6204*/      OPC_CheckInteger, 19|128,12/*1555*/, 
/*6207*/      OPC_MoveParent,
/*6208*/      OPC_RecordChild1, // #0 = $vA
/*6209*/      OPC_RecordChild2, // #1 = $vB
/*6210*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6212*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1555:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMAXUB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6221*/    /*Scope*/ 17, /*->6239*/
/*6222*/      OPC_CheckInteger, 20|128,12/*1556*/, 
/*6225*/      OPC_MoveParent,
/*6226*/      OPC_RecordChild1, // #0 = $vA
/*6227*/      OPC_RecordChild2, // #1 = $vB
/*6228*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6230*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1556:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMAXUH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6239*/    /*Scope*/ 17, /*->6257*/
/*6240*/      OPC_CheckInteger, 21|128,12/*1557*/, 
/*6243*/      OPC_MoveParent,
/*6244*/      OPC_RecordChild1, // #0 = $vA
/*6245*/      OPC_RecordChild2, // #1 = $vB
/*6246*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6248*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1557:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VMAXUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6257*/    /*Scope*/ 17, /*->6275*/
/*6258*/      OPC_CheckInteger, 25|128,12/*1561*/, 
/*6261*/      OPC_MoveParent,
/*6262*/      OPC_RecordChild1, // #0 = $vA
/*6263*/      OPC_RecordChild2, // #1 = $vB
/*6264*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6266*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1561:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMINSB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6275*/    /*Scope*/ 17, /*->6293*/
/*6276*/      OPC_CheckInteger, 26|128,12/*1562*/, 
/*6279*/      OPC_MoveParent,
/*6280*/      OPC_RecordChild1, // #0 = $vA
/*6281*/      OPC_RecordChild2, // #1 = $vB
/*6282*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6284*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1562:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMINSH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6293*/    /*Scope*/ 17, /*->6311*/
/*6294*/      OPC_CheckInteger, 27|128,12/*1563*/, 
/*6297*/      OPC_MoveParent,
/*6298*/      OPC_RecordChild1, // #0 = $vA
/*6299*/      OPC_RecordChild2, // #1 = $vB
/*6300*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6302*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1563:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VMINSW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6311*/    /*Scope*/ 17, /*->6329*/
/*6312*/      OPC_CheckInteger, 28|128,12/*1564*/, 
/*6315*/      OPC_MoveParent,
/*6316*/      OPC_RecordChild1, // #0 = $vA
/*6317*/      OPC_RecordChild2, // #1 = $vB
/*6318*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6320*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1564:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMINUB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6329*/    /*Scope*/ 17, /*->6347*/
/*6330*/      OPC_CheckInteger, 29|128,12/*1565*/, 
/*6333*/      OPC_MoveParent,
/*6334*/      OPC_RecordChild1, // #0 = $vA
/*6335*/      OPC_RecordChild2, // #1 = $vB
/*6336*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6338*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1565:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMINUH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6347*/    /*Scope*/ 17, /*->6365*/
/*6348*/      OPC_CheckInteger, 30|128,12/*1566*/, 
/*6351*/      OPC_MoveParent,
/*6352*/      OPC_RecordChild1, // #0 = $vA
/*6353*/      OPC_RecordChild2, // #1 = $vB
/*6354*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6356*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1566:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VMINUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6365*/    /*Scope*/ 19, /*->6385*/
/*6366*/      OPC_CheckInteger, 32|128,12/*1568*/, 
/*6369*/      OPC_MoveParent,
/*6370*/      OPC_RecordChild1, // #0 = $vA
/*6371*/      OPC_RecordChild2, // #1 = $vB
/*6372*/      OPC_RecordChild3, // #2 = $vC
/*6373*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6375*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMMBM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1568:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMMBM:v4i32 v16i8:v16i8:$vA, v16i8:v16i8:$vB, v4i32:v4i32:$vC)
/*6385*/    /*Scope*/ 19, /*->6405*/
/*6386*/      OPC_CheckInteger, 33|128,12/*1569*/, 
/*6389*/      OPC_MoveParent,
/*6390*/      OPC_RecordChild1, // #0 = $vA
/*6391*/      OPC_RecordChild2, // #1 = $vB
/*6392*/      OPC_RecordChild3, // #2 = $vC
/*6393*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6395*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMSHM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1569:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMSHM:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC)
/*6405*/    /*Scope*/ 19, /*->6425*/
/*6406*/      OPC_CheckInteger, 34|128,12/*1570*/, 
/*6409*/      OPC_MoveParent,
/*6410*/      OPC_RecordChild1, // #0 = $vA
/*6411*/      OPC_RecordChild2, // #1 = $vB
/*6412*/      OPC_RecordChild3, // #2 = $vC
/*6413*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6415*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMSHS), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1570:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMSHS:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC)
/*6425*/    /*Scope*/ 19, /*->6445*/
/*6426*/      OPC_CheckInteger, 35|128,12/*1571*/, 
/*6429*/      OPC_MoveParent,
/*6430*/      OPC_RecordChild1, // #0 = $vA
/*6431*/      OPC_RecordChild2, // #1 = $vB
/*6432*/      OPC_RecordChild3, // #2 = $vC
/*6433*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6435*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMUBM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1571:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMUBM:v4i32 v16i8:v16i8:$vA, v16i8:v16i8:$vB, v4i32:v4i32:$vC)
/*6445*/    /*Scope*/ 19, /*->6465*/
/*6446*/      OPC_CheckInteger, 36|128,12/*1572*/, 
/*6449*/      OPC_MoveParent,
/*6450*/      OPC_RecordChild1, // #0 = $vA
/*6451*/      OPC_RecordChild2, // #1 = $vB
/*6452*/      OPC_RecordChild3, // #2 = $vC
/*6453*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6455*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMUHM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1572:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMUHM:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC)
/*6465*/    /*Scope*/ 19, /*->6485*/
/*6466*/      OPC_CheckInteger, 37|128,12/*1573*/, 
/*6469*/      OPC_MoveParent,
/*6470*/      OPC_RecordChild1, // #0 = $vA
/*6471*/      OPC_RecordChild2, // #1 = $vB
/*6472*/      OPC_RecordChild3, // #2 = $vC
/*6473*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6475*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMUHS), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1573:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMUHS:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC)
/*6485*/    /*Scope*/ 17, /*->6503*/
/*6486*/      OPC_CheckInteger, 38|128,12/*1574*/, 
/*6489*/      OPC_MoveParent,
/*6490*/      OPC_RecordChild1, // #0 = $vA
/*6491*/      OPC_RecordChild2, // #1 = $vB
/*6492*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6494*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULESB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1574:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMULESB:v8i16 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6503*/    /*Scope*/ 17, /*->6521*/
/*6504*/      OPC_CheckInteger, 39|128,12/*1575*/, 
/*6507*/      OPC_MoveParent,
/*6508*/      OPC_RecordChild1, // #0 = $vA
/*6509*/      OPC_RecordChild2, // #1 = $vB
/*6510*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6512*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULESH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1575:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMULESH:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6521*/    /*Scope*/ 17, /*->6539*/
/*6522*/      OPC_CheckInteger, 40|128,12/*1576*/, 
/*6525*/      OPC_MoveParent,
/*6526*/      OPC_RecordChild1, // #0 = $vA
/*6527*/      OPC_RecordChild2, // #1 = $vB
/*6528*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6530*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULEUB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1576:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMULEUB:v8i16 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6539*/    /*Scope*/ 17, /*->6557*/
/*6540*/      OPC_CheckInteger, 41|128,12/*1577*/, 
/*6543*/      OPC_MoveParent,
/*6544*/      OPC_RecordChild1, // #0 = $vA
/*6545*/      OPC_RecordChild2, // #1 = $vB
/*6546*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6548*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULEUH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1577:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMULEUH:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6557*/    /*Scope*/ 17, /*->6575*/
/*6558*/      OPC_CheckInteger, 42|128,12/*1578*/, 
/*6561*/      OPC_MoveParent,
/*6562*/      OPC_RecordChild1, // #0 = $vA
/*6563*/      OPC_RecordChild2, // #1 = $vB
/*6564*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6566*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOSB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1578:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMULOSB:v8i16 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6575*/    /*Scope*/ 17, /*->6593*/
/*6576*/      OPC_CheckInteger, 43|128,12/*1579*/, 
/*6579*/      OPC_MoveParent,
/*6580*/      OPC_RecordChild1, // #0 = $vA
/*6581*/      OPC_RecordChild2, // #1 = $vB
/*6582*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6584*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOSH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1579:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMULOSH:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6593*/    /*Scope*/ 17, /*->6611*/
/*6594*/      OPC_CheckInteger, 44|128,12/*1580*/, 
/*6597*/      OPC_MoveParent,
/*6598*/      OPC_RecordChild1, // #0 = $vA
/*6599*/      OPC_RecordChild2, // #1 = $vB
/*6600*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6602*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOUB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1580:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMULOUB:v8i16 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6611*/    /*Scope*/ 17, /*->6629*/
/*6612*/      OPC_CheckInteger, 45|128,12/*1581*/, 
/*6615*/      OPC_MoveParent,
/*6616*/      OPC_RecordChild1, // #0 = $vA
/*6617*/      OPC_RecordChild2, // #1 = $vB
/*6618*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6620*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOUH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1581:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMULOUH:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6629*/    /*Scope*/ 17, /*->6647*/
/*6630*/      OPC_CheckInteger, 78|128,12/*1614*/, 
/*6633*/      OPC_MoveParent,
/*6634*/      OPC_RecordChild1, // #0 = $vA
/*6635*/      OPC_RecordChild2, // #1 = $vB
/*6636*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6638*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBCUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1614:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUBCUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6647*/    /*Scope*/ 17, /*->6665*/
/*6648*/      OPC_CheckInteger, 79|128,12/*1615*/, 
/*6651*/      OPC_MoveParent,
/*6652*/      OPC_RecordChild1, // #0 = $vA
/*6653*/      OPC_RecordChild2, // #1 = $vB
/*6654*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6656*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBSBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1615:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VSUBSBS:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6665*/    /*Scope*/ 17, /*->6683*/
/*6666*/      OPC_CheckInteger, 80|128,12/*1616*/, 
/*6669*/      OPC_MoveParent,
/*6670*/      OPC_RecordChild1, // #0 = $vA
/*6671*/      OPC_RecordChild2, // #1 = $vB
/*6672*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6674*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1616:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VSUBSHS:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6683*/    /*Scope*/ 17, /*->6701*/
/*6684*/      OPC_CheckInteger, 81|128,12/*1617*/, 
/*6687*/      OPC_MoveParent,
/*6688*/      OPC_RecordChild1, // #0 = $vA
/*6689*/      OPC_RecordChild2, // #1 = $vB
/*6690*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6692*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBSWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1617:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUBSWS:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6701*/    /*Scope*/ 17, /*->6719*/
/*6702*/      OPC_CheckInteger, 82|128,12/*1618*/, 
/*6705*/      OPC_MoveParent,
/*6706*/      OPC_RecordChild1, // #0 = $vA
/*6707*/      OPC_RecordChild2, // #1 = $vB
/*6708*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6710*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1618:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VSUBUBS:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6719*/    /*Scope*/ 17, /*->6737*/
/*6720*/      OPC_CheckInteger, 83|128,12/*1619*/, 
/*6723*/      OPC_MoveParent,
/*6724*/      OPC_RecordChild1, // #0 = $vA
/*6725*/      OPC_RecordChild2, // #1 = $vB
/*6726*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6728*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1619:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VSUBUHS:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6737*/    /*Scope*/ 17, /*->6755*/
/*6738*/      OPC_CheckInteger, 84|128,12/*1620*/, 
/*6741*/      OPC_MoveParent,
/*6742*/      OPC_RecordChild1, // #0 = $vA
/*6743*/      OPC_RecordChild2, // #1 = $vB
/*6744*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6746*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1620:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUBUWS:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6755*/    /*Scope*/ 17, /*->6773*/
/*6756*/      OPC_CheckInteger, 89|128,12/*1625*/, 
/*6759*/      OPC_MoveParent,
/*6760*/      OPC_RecordChild1, // #0 = $vA
/*6761*/      OPC_RecordChild2, // #1 = $vB
/*6762*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6764*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUMSWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1625:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUMSWS:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6773*/    /*Scope*/ 17, /*->6791*/
/*6774*/      OPC_CheckInteger, 85|128,12/*1621*/, 
/*6777*/      OPC_MoveParent,
/*6778*/      OPC_RecordChild1, // #0 = $vA
/*6779*/      OPC_RecordChild2, // #1 = $vB
/*6780*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6782*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM2SWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1621:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM2SWS:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6791*/    /*Scope*/ 17, /*->6809*/
/*6792*/      OPC_CheckInteger, 86|128,12/*1622*/, 
/*6795*/      OPC_MoveParent,
/*6796*/      OPC_RecordChild1, // #0 = $vA
/*6797*/      OPC_RecordChild2, // #1 = $vB
/*6798*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6800*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM4SBS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1622:iPTR, v16i8:v16i8:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM4SBS:v4i32 v16i8:v16i8:$vA, v4i32:v4i32:$vB)
/*6809*/    /*Scope*/ 17, /*->6827*/
/*6810*/      OPC_CheckInteger, 87|128,12/*1623*/, 
/*6813*/      OPC_MoveParent,
/*6814*/      OPC_RecordChild1, // #0 = $vA
/*6815*/      OPC_RecordChild2, // #1 = $vB
/*6816*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6818*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM4SHS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1623:iPTR, v8i16:v8i16:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM4SHS:v4i32 v8i16:v8i16:$vA, v4i32:v4i32:$vB)
/*6827*/    /*Scope*/ 17, /*->6845*/
/*6828*/      OPC_CheckInteger, 88|128,12/*1624*/, 
/*6831*/      OPC_MoveParent,
/*6832*/      OPC_RecordChild1, // #0 = $vA
/*6833*/      OPC_RecordChild2, // #1 = $vB
/*6834*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6836*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM4UBS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1624:iPTR, v16i8:v16i8:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM4UBS:v4i32 v16i8:v16i8:$vA, v4i32:v4i32:$vB)
/*6845*/    /*Scope*/ 17, /*->6863*/
/*6846*/      OPC_CheckInteger, 60|128,12/*1596*/, 
/*6849*/      OPC_MoveParent,
/*6850*/      OPC_RecordChild1, // #0 = $vA
/*6851*/      OPC_RecordChild2, // #1 = $vB
/*6852*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6854*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRLB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1596:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VRLB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6863*/    /*Scope*/ 17, /*->6881*/
/*6864*/      OPC_CheckInteger, 61|128,12/*1597*/, 
/*6867*/      OPC_MoveParent,
/*6868*/      OPC_RecordChild1, // #0 = $vA
/*6869*/      OPC_RecordChild2, // #1 = $vB
/*6870*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6872*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRLH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1597:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VRLH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6881*/    /*Scope*/ 17, /*->6899*/
/*6882*/      OPC_CheckInteger, 62|128,12/*1598*/, 
/*6885*/      OPC_MoveParent,
/*6886*/      OPC_RecordChild1, // #0 = $vA
/*6887*/      OPC_RecordChild2, // #1 = $vB
/*6888*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6890*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1598:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VRLW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6899*/    /*Scope*/ 17, /*->6917*/
/*6900*/      OPC_CheckInteger, 65|128,12/*1601*/, 
/*6903*/      OPC_MoveParent,
/*6904*/      OPC_RecordChild1, // #0 = $vA
/*6905*/      OPC_RecordChild2, // #1 = $vB
/*6906*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6908*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSL), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1601:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSL:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6917*/    /*Scope*/ 17, /*->6935*/
/*6918*/      OPC_CheckInteger, 68|128,12/*1604*/, 
/*6921*/      OPC_MoveParent,
/*6922*/      OPC_RecordChild1, // #0 = $vA
/*6923*/      OPC_RecordChild2, // #1 = $vB
/*6924*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6926*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLO), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1604:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSLO:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6935*/    /*Scope*/ 17, /*->6953*/
/*6936*/      OPC_CheckInteger, 66|128,12/*1602*/, 
/*6939*/      OPC_MoveParent,
/*6940*/      OPC_RecordChild1, // #0 = $vA
/*6941*/      OPC_RecordChild2, // #1 = $vB
/*6942*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6944*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1602:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VSLB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6953*/    /*Scope*/ 17, /*->6971*/
/*6954*/      OPC_CheckInteger, 67|128,12/*1603*/, 
/*6957*/      OPC_MoveParent,
/*6958*/      OPC_RecordChild1, // #0 = $vA
/*6959*/      OPC_RecordChild2, // #1 = $vB
/*6960*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6962*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1603:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VSLH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6971*/    /*Scope*/ 17, /*->6989*/
/*6972*/      OPC_CheckInteger, 69|128,12/*1605*/, 
/*6975*/      OPC_MoveParent,
/*6976*/      OPC_RecordChild1, // #0 = $vA
/*6977*/      OPC_RecordChild2, // #1 = $vB
/*6978*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6980*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1605:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSLW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6989*/    /*Scope*/ 17, /*->7007*/
/*6990*/      OPC_CheckInteger, 70|128,12/*1606*/, 
/*6993*/      OPC_MoveParent,
/*6994*/      OPC_RecordChild1, // #0 = $vA
/*6995*/      OPC_RecordChild2, // #1 = $vB
/*6996*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6998*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1606:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSR:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*7007*/    /*Scope*/ 17, /*->7025*/
/*7008*/      OPC_CheckInteger, 76|128,12/*1612*/, 
/*7011*/      OPC_MoveParent,
/*7012*/      OPC_RecordChild1, // #0 = $vA
/*7013*/      OPC_RecordChild2, // #1 = $vB
/*7014*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7016*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRO), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1612:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSRO:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*7025*/    /*Scope*/ 17, /*->7043*/
/*7026*/      OPC_CheckInteger, 71|128,12/*1607*/, 
/*7029*/      OPC_MoveParent,
/*7030*/      OPC_RecordChild1, // #0 = $vA
/*7031*/      OPC_RecordChild2, // #1 = $vB
/*7032*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7034*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1607:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VSRAB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*7043*/    /*Scope*/ 17, /*->7061*/
/*7044*/      OPC_CheckInteger, 72|128,12/*1608*/, 
/*7047*/      OPC_MoveParent,
/*7048*/      OPC_RecordChild1, // #0 = $vA
/*7049*/      OPC_RecordChild2, // #1 = $vB
/*7050*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7052*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1608:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VSRAH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*7061*/    /*Scope*/ 17, /*->7079*/
/*7062*/      OPC_CheckInteger, 73|128,12/*1609*/, 
/*7065*/      OPC_MoveParent,
/*7066*/      OPC_RecordChild1, // #0 = $vA
/*7067*/      OPC_RecordChild2, // #1 = $vB
/*7068*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7070*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1609:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSRAW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*7079*/    /*Scope*/ 17, /*->7097*/
/*7080*/      OPC_CheckInteger, 74|128,12/*1610*/, 
/*7083*/      OPC_MoveParent,
/*7084*/      OPC_RecordChild1, // #0 = $vA
/*7085*/      OPC_RecordChild2, // #1 = $vB
/*7086*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7088*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1610:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VSRB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*7097*/    /*Scope*/ 17, /*->7115*/
/*7098*/      OPC_CheckInteger, 75|128,12/*1611*/, 
/*7101*/      OPC_MoveParent,
/*7102*/      OPC_RecordChild1, // #0 = $vA
/*7103*/      OPC_RecordChild2, // #1 = $vB
/*7104*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7106*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1611:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VSRH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*7115*/    /*Scope*/ 17, /*->7133*/
/*7116*/      OPC_CheckInteger, 77|128,12/*1613*/, 
/*7119*/      OPC_MoveParent,
/*7120*/      OPC_RecordChild1, // #0 = $vA
/*7121*/      OPC_RecordChild2, // #1 = $vB
/*7122*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7124*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1613:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSRW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*7133*/    /*Scope*/ 17, /*->7151*/
/*7134*/      OPC_CheckInteger, 48|128,12/*1584*/, 
/*7137*/      OPC_MoveParent,
/*7138*/      OPC_RecordChild1, // #0 = $vA
/*7139*/      OPC_RecordChild2, // #1 = $vB
/*7140*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7142*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKPX), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1584:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VPKPX:v8i16 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*7151*/    /*Scope*/ 17, /*->7169*/
/*7152*/      OPC_CheckInteger, 49|128,12/*1585*/, 
/*7155*/      OPC_MoveParent,
/*7156*/      OPC_RecordChild1, // #0 = $vA
/*7157*/      OPC_RecordChild2, // #1 = $vB
/*7158*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7160*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSHSS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1585:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VPKSHSS:v16i8 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*7169*/    /*Scope*/ 17, /*->7187*/
/*7170*/      OPC_CheckInteger, 50|128,12/*1586*/, 
/*7173*/      OPC_MoveParent,
/*7174*/      OPC_RecordChild1, // #0 = $vA
/*7175*/      OPC_RecordChild2, // #1 = $vB
/*7176*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7178*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSHUS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1586:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VPKSHUS:v16i8 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*7187*/    /*Scope*/ 17, /*->7205*/
/*7188*/      OPC_CheckInteger, 51|128,12/*1587*/, 
/*7191*/      OPC_MoveParent,
/*7192*/      OPC_RecordChild1, // #0 = $vA
/*7193*/      OPC_RecordChild2, // #1 = $vB
/*7194*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7196*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSWSS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1587:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VPKSWSS:v16i8 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*7205*/    /*Scope*/ 17, /*->7223*/
/*7206*/      OPC_CheckInteger, 52|128,12/*1588*/, 
/*7209*/      OPC_MoveParent,
/*7210*/      OPC_RecordChild1, // #0 = $vA
/*7211*/      OPC_RecordChild2, // #1 = $vB
/*7212*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7214*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSWUS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1588:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VPKSWUS:v8i16 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*7223*/    /*Scope*/ 17, /*->7241*/
/*7224*/      OPC_CheckInteger, 53|128,12/*1589*/, 
/*7227*/      OPC_MoveParent,
/*7228*/      OPC_RecordChild1, // #0 = $vA
/*7229*/      OPC_RecordChild2, // #1 = $vB
/*7230*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7232*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUHUS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1589:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VPKUHUS:v16i8 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*7241*/    /*Scope*/ 17, /*->7259*/
/*7242*/      OPC_CheckInteger, 54|128,12/*1590*/, 
/*7245*/      OPC_MoveParent,
/*7246*/      OPC_RecordChild1, // #0 = $vA
/*7247*/      OPC_RecordChild2, // #1 = $vB
/*7248*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7250*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUWUS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1590:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VPKUWUS:v8i16 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*7259*/    /*Scope*/ 15, /*->7275*/
/*7260*/      OPC_CheckInteger, 90|128,12/*1626*/, 
/*7263*/      OPC_MoveParent,
/*7264*/      OPC_RecordChild1, // #0 = $vB
/*7265*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7267*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKHPX), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 1626:iPTR, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKHPX:v4i32 v8i16:v8i16:$vB)
/*7275*/    /*Scope*/ 15, /*->7291*/
/*7276*/      OPC_CheckInteger, 91|128,12/*1627*/, 
/*7279*/      OPC_MoveParent,
/*7280*/      OPC_RecordChild1, // #0 = $vB
/*7281*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7283*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKHSB), 0,
                  1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v8i16 1627:iPTR, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VUPKHSB:v8i16 v16i8:v16i8:$vB)
/*7291*/    /*Scope*/ 15, /*->7307*/
/*7292*/      OPC_CheckInteger, 92|128,12/*1628*/, 
/*7295*/      OPC_MoveParent,
/*7296*/      OPC_RecordChild1, // #0 = $vB
/*7297*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7299*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKHSH), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 1628:iPTR, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKHSH:v4i32 v8i16:v8i16:$vB)
/*7307*/    /*Scope*/ 15, /*->7323*/
/*7308*/      OPC_CheckInteger, 93|128,12/*1629*/, 
/*7311*/      OPC_MoveParent,
/*7312*/      OPC_RecordChild1, // #0 = $vB
/*7313*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7315*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKLPX), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 1629:iPTR, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKLPX:v4i32 v8i16:v8i16:$vB)
/*7323*/    /*Scope*/ 15, /*->7339*/
/*7324*/      OPC_CheckInteger, 94|128,12/*1630*/, 
/*7327*/      OPC_MoveParent,
/*7328*/      OPC_RecordChild1, // #0 = $vB
/*7329*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7331*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKLSB), 0,
                  1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v8i16 1630:iPTR, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VUPKLSB:v8i16 v16i8:v16i8:$vB)
/*7339*/    /*Scope*/ 15, /*->7355*/
/*7340*/      OPC_CheckInteger, 95|128,12/*1631*/, 
/*7343*/      OPC_MoveParent,
/*7344*/      OPC_RecordChild1, // #0 = $vB
/*7345*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7347*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKLSH), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 1631:iPTR, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKLSH:v4i32 v8i16:v8i16:$vB)
/*7355*/    /*Scope*/ 15, /*->7371*/
/*7356*/      OPC_CheckInteger, 12|128,12/*1548*/, 
/*7359*/      OPC_MoveParent,
/*7360*/      OPC_RecordChild1, // #0 = $vB
/*7361*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7363*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VEXPTEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1548:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VEXPTEFP:v4f32 v4f32:v4f32:$vB)
/*7371*/    /*Scope*/ 15, /*->7387*/
/*7372*/      OPC_CheckInteger, 13|128,12/*1549*/, 
/*7375*/      OPC_MoveParent,
/*7376*/      OPC_RecordChild1, // #0 = $vB
/*7377*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7379*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VLOGEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1549:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VLOGEFP:v4f32 v4f32:v4f32:$vB)
/*7387*/    /*Scope*/ 17, /*->7405*/
/*7388*/      OPC_CheckInteger, 15|128,12/*1551*/, 
/*7391*/      OPC_MoveParent,
/*7392*/      OPC_RecordChild1, // #0 = $vA
/*7393*/      OPC_RecordChild2, // #1 = $vB
/*7394*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7396*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4f32 1551:iPTR, v4f32:v4f32:$vA, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VMAXFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*7405*/    /*Scope*/ 17, /*->7423*/
/*7406*/      OPC_CheckInteger, 24|128,12/*1560*/, 
/*7409*/      OPC_MoveParent,
/*7410*/      OPC_RecordChild1, // #0 = $vA
/*7411*/      OPC_RecordChild2, // #1 = $vB
/*7412*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7414*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4f32 1560:iPTR, v4f32:v4f32:$vA, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VMINFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*7423*/    /*Scope*/ 15, /*->7439*/
/*7424*/      OPC_CheckInteger, 55|128,12/*1591*/, 
/*7427*/      OPC_MoveParent,
/*7428*/      OPC_RecordChild1, // #0 = $vB
/*7429*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7431*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VREFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1591:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VREFP:v4f32 v4f32:v4f32:$vB)
/*7439*/    /*Scope*/ 15, /*->7455*/
/*7440*/      OPC_CheckInteger, 56|128,12/*1592*/, 
/*7443*/      OPC_MoveParent,
/*7444*/      OPC_RecordChild1, // #0 = $vB
/*7445*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7447*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIM), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1592:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIM:v4f32 v4f32:v4f32:$vB)
/*7455*/    /*Scope*/ 15, /*->7471*/
/*7456*/      OPC_CheckInteger, 57|128,12/*1593*/, 
/*7459*/      OPC_MoveParent,
/*7460*/      OPC_RecordChild1, // #0 = $vB
/*7461*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7463*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIN), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1593:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIN:v4f32 v4f32:v4f32:$vB)
/*7471*/    /*Scope*/ 15, /*->7487*/
/*7472*/      OPC_CheckInteger, 58|128,12/*1594*/, 
/*7475*/      OPC_MoveParent,
/*7476*/      OPC_RecordChild1, // #0 = $vB
/*7477*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7479*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1594:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIP:v4f32 v4f32:v4f32:$vB)
/*7487*/    /*Scope*/ 15, /*->7503*/
/*7488*/      OPC_CheckInteger, 59|128,12/*1595*/, 
/*7491*/      OPC_MoveParent,
/*7492*/      OPC_RecordChild1, // #0 = $vB
/*7493*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7495*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIZ), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1595:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIZ:v4f32 v4f32:v4f32:$vB)
/*7503*/    /*Scope*/ 15, /*->7519*/
/*7504*/      OPC_CheckInteger, 63|128,12/*1599*/, 
/*7507*/      OPC_MoveParent,
/*7508*/      OPC_RecordChild1, // #0 = $vB
/*7509*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7511*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRSQRTEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1599:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VRSQRTEFP:v4f32 v4f32:v4f32:$vB)
/*7519*/    /*Scope*/ 19, /*->7539*/
/*7520*/      OPC_CheckInteger, 14|128,12/*1550*/, 
/*7523*/      OPC_MoveParent,
/*7524*/      OPC_RecordChild1, // #0 = $A
/*7525*/      OPC_RecordChild2, // #1 = $B
/*7526*/      OPC_RecordChild3, // #2 = $C
/*7527*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7529*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4f32 1550:iPTR, v4f32:v4f32:$A, v4f32:v4f32:$B, v4f32:v4f32:$C) - Complexity = 8
              // Dst: (VMADDFP:v4f32 ?:v4f32:$A, ?:v4f32:$B, ?:v4f32:$C)
/*7539*/    /*Scope*/ 19, /*->7559*/
/*7540*/      OPC_CheckInteger, 46|128,12/*1582*/, 
/*7543*/      OPC_MoveParent,
/*7544*/      OPC_RecordChild1, // #0 = $A
/*7545*/      OPC_RecordChild2, // #1 = $B
/*7546*/      OPC_RecordChild3, // #2 = $C
/*7547*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7549*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNMSUBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4f32 1582:iPTR, v4f32:v4f32:$A, v4f32:v4f32:$B, v4f32:v4f32:$C) - Complexity = 8
              // Dst: (VNMSUBFP:v4f32 ?:v4f32:$A, ?:v4f32:$B, ?:v4f32:$C)
/*7559*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 40,  TARGET_VAL(PPCISD::STCX),// ->7603
/*7563*/    OPC_RecordNode,   // #0 = 'PPCstcx' chained node
/*7564*/    OPC_RecordChild1, // #1 = $rS
/*7565*/    OPC_Scope, 17, /*->7584*/ // 2 children in Scope
/*7567*/      OPC_CheckChild1Type, MVT::i32,
/*7569*/      OPC_RecordChild2, // #2 = $dst
/*7570*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*7573*/      OPC_EmitMergeInputChains1_0,
/*7574*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STWCX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstcx i32:i32:$rS, xoaddr:iPTR:$dst) - Complexity = 12
              // Dst: (STWCX:i32 i32:i32:$rS, xoaddr:iPTR:$dst)
/*7584*/    /*Scope*/ 17, /*->7602*/
/*7585*/      OPC_CheckChild1Type, MVT::i64,
/*7587*/      OPC_RecordChild2, // #2 = $dst
/*7588*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*7591*/      OPC_EmitMergeInputChains1_0,
/*7592*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STDCX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstcx i64:i64:$rS, xoaddr:iPTR:$dst) - Complexity = 12
              // Dst: (STDCX:i32 i64:i64:$rS, xoaddr:iPTR:$dst)
/*7602*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 68,  TARGET_VAL(PPCISD::STBRX),// ->7674
/*7606*/    OPC_RecordNode,   // #0 = 'PPCstbrx' chained node
/*7607*/    OPC_RecordChild1, // #1 = $rS
/*7608*/    OPC_Scope, 41, /*->7651*/ // 2 children in Scope
/*7610*/      OPC_CheckChild1Type, MVT::i32,
/*7612*/      OPC_RecordChild2, // #2 = $dst
/*7613*/      OPC_MoveChild, 3,
/*7615*/      OPC_Scope, 16, /*->7633*/ // 2 children in Scope
/*7617*/        OPC_CheckValueType, MVT::i16,
/*7619*/        OPC_MoveParent,
/*7620*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*7623*/        OPC_EmitMergeInputChains1_0,
/*7624*/        OPC_MorphNodeTo, TARGET_VAL(PPC::STHBRX), 0|OPFL_Chain,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (PPCstbrx i32:i32:$rS, xoaddr:iPTR:$dst, i16:Other) - Complexity = 12
                // Dst: (STHBRX i32:i32:$rS, xoaddr:iPTR:$dst)
/*7633*/      /*Scope*/ 16, /*->7650*/
/*7634*/        OPC_CheckValueType, MVT::i32,
/*7636*/        OPC_MoveParent,
/*7637*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*7640*/        OPC_EmitMergeInputChains1_0,
/*7641*/        OPC_MorphNodeTo, TARGET_VAL(PPC::STWBRX), 0|OPFL_Chain,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (PPCstbrx i32:i32:$rS, xoaddr:iPTR:$dst, i32:Other) - Complexity = 12
                // Dst: (STWBRX i32:i32:$rS, xoaddr:iPTR:$dst)
/*7650*/      0, /*End of Scope*/
/*7651*/    /*Scope*/ 21, /*->7673*/
/*7652*/      OPC_CheckChild1Type, MVT::i64,
/*7654*/      OPC_RecordChild2, // #2 = $dst
/*7655*/      OPC_MoveChild, 3,
/*7657*/      OPC_CheckValueType, MVT::i64,
/*7659*/      OPC_MoveParent,
/*7660*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*7663*/      OPC_EmitMergeInputChains1_0,
/*7664*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STDBRX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstbrx i64:i64:$rS, xoaddr:iPTR:$dst, i64:Other) - Complexity = 12
              // Dst: (STDBRX i64:i64:$rS, xoaddr:iPTR:$dst)
/*7673*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(PPCISD::STFIWX),// ->7693
/*7677*/    OPC_RecordNode,   // #0 = 'PPCstfiwx' chained node
/*7678*/    OPC_RecordChild1, // #1 = $frS
/*7679*/    OPC_RecordChild2, // #2 = $dst
/*7680*/    OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*7683*/    OPC_EmitMergeInputChains1_0,
/*7684*/    OPC_MorphNodeTo, TARGET_VAL(PPC::STFIWX), 0|OPFL_Chain,
                0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
            // Src: (PPCstfiwx f64:f64:$frS, xoaddr:iPTR:$dst) - Complexity = 12
            // Dst: (STFIWX f64:f64:$frS, xoaddr:iPTR:$dst)
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::CALLSEQ_END),// ->7722
/*7696*/    OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*7697*/    OPC_CaptureGlueInput,
/*7698*/    OPC_RecordChild1, // #1 = $amt1
/*7699*/    OPC_MoveChild, 1,
/*7701*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*7704*/    OPC_MoveParent,
/*7705*/    OPC_RecordChild2, // #2 = $amt2
/*7706*/    OPC_MoveChild, 2,
/*7708*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*7711*/    OPC_MoveParent,
/*7712*/    OPC_EmitMergeInputChains1_0,
/*7713*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP:i32 (timm:i32):$amt1, (timm:i32):$amt2)
          /*SwitchOpcode*/ 70|128,1/*198*/,  TARGET_VAL(PPCISD::TC_RETURN),// ->7924
/*7726*/    OPC_RecordNode,   // #0 = 'PPCtc_return' chained node
/*7727*/    OPC_CaptureGlueInput,
/*7728*/    OPC_RecordChild1, // #1 = $func
/*7729*/    OPC_Scope, 21|128,1/*149*/, /*->7881*/ // 3 children in Scope
/*7732*/      OPC_MoveChild, 1,
/*7734*/      OPC_SwitchOpcode /*3 cases */, 48,  TARGET_VAL(ISD::Constant),// ->7786
/*7738*/        OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->7762
/*7741*/          OPC_MoveParent,
/*7742*/          OPC_RecordChild2, // #2 = $offset
/*7743*/          OPC_MoveChild, 2,
/*7745*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7748*/          OPC_MoveParent,
/*7749*/          OPC_EmitMergeInputChains1_0,
/*7750*/          OPC_EmitConvertToTarget, 1,
/*7752*/          OPC_EmitConvertToTarget, 2,
/*7754*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNai), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 3, 4, 
                  // Src: (PPCtc_return (imm:i32):$func, (imm:i32):$offset) - Complexity = 9
                  // Dst: (TCRETURNai (imm:i32):$func, (imm:i32):$offset)
                /*SwitchType*/ 21,  MVT::i64,// ->7785
/*7764*/          OPC_MoveParent,
/*7765*/          OPC_RecordChild2, // #2 = $offset
/*7766*/          OPC_MoveChild, 2,
/*7768*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7771*/          OPC_MoveParent,
/*7772*/          OPC_EmitMergeInputChains1_0,
/*7773*/          OPC_EmitConvertToTarget, 1,
/*7775*/          OPC_EmitConvertToTarget, 2,
/*7777*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNai8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 3, 4, 
                  // Src: (PPCtc_return (imm:i64):$func, (imm:i32):$offset) - Complexity = 9
                  // Dst: (TCRETURNai8 (imm:i64):$func, (imm:i32):$offset)
                0, // EndSwitchType
              /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::TargetGlobalAddress),// ->7833
/*7789*/        OPC_SwitchType /*2 cases */, 19,  MVT::i32,// ->7811
/*7792*/          OPC_MoveParent,
/*7793*/          OPC_RecordChild2, // #2 = $imm
/*7794*/          OPC_MoveChild, 2,
/*7796*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7799*/          OPC_MoveParent,
/*7800*/          OPC_EmitMergeInputChains1_0,
/*7801*/          OPC_EmitConvertToTarget, 2,
/*7803*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (tglobaladdr:i32):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi (tglobaladdr:i32):$dst, (imm:i32):$imm)
                /*SwitchType*/ 19,  MVT::i64,// ->7832
/*7813*/          OPC_MoveParent,
/*7814*/          OPC_RecordChild2, // #2 = $imm
/*7815*/          OPC_MoveChild, 2,
/*7817*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7820*/          OPC_MoveParent,
/*7821*/          OPC_EmitMergeInputChains1_0,
/*7822*/          OPC_EmitConvertToTarget, 2,
/*7824*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (tglobaladdr:i64):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi8 (tglobaladdr:i64):$dst, (imm:i32):$imm)
                0, // EndSwitchType
              /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::TargetExternalSymbol),// ->7880
/*7836*/        OPC_SwitchType /*2 cases */, 19,  MVT::i32,// ->7858
/*7839*/          OPC_MoveParent,
/*7840*/          OPC_RecordChild2, // #2 = $imm
/*7841*/          OPC_MoveChild, 2,
/*7843*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7846*/          OPC_MoveParent,
/*7847*/          OPC_EmitMergeInputChains1_0,
/*7848*/          OPC_EmitConvertToTarget, 2,
/*7850*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (texternalsym:i32):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi (texternalsym:i32):$dst, (imm:i32):$imm)
                /*SwitchType*/ 19,  MVT::i64,// ->7879
/*7860*/          OPC_MoveParent,
/*7861*/          OPC_RecordChild2, // #2 = $imm
/*7862*/          OPC_MoveChild, 2,
/*7864*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7867*/          OPC_MoveParent,
/*7868*/          OPC_EmitMergeInputChains1_0,
/*7869*/          OPC_EmitConvertToTarget, 2,
/*7871*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (texternalsym:i64):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi8 (texternalsym:i64):$dst, (imm:i32):$imm)
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*7881*/    /*Scope*/ 20, /*->7902*/
/*7882*/      OPC_CheckChild1Type, MVT::i32,
/*7884*/      OPC_RecordChild2, // #2 = $imm
/*7885*/      OPC_MoveChild, 2,
/*7887*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7890*/      OPC_MoveParent,
/*7891*/      OPC_EmitMergeInputChains1_0,
/*7892*/      OPC_EmitConvertToTarget, 2,
/*7894*/      OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (PPCtc_return CTRRC:i32:$dst, (imm:i32):$imm) - Complexity = 6
              // Dst: (TCRETURNri CTRRC:i32:$dst, (imm:i32):$imm)
/*7902*/    /*Scope*/ 20, /*->7923*/
/*7903*/      OPC_CheckChild1Type, MVT::i64,
/*7905*/      OPC_RecordChild2, // #2 = $imm
/*7906*/      OPC_MoveChild, 2,
/*7908*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7911*/      OPC_MoveParent,
/*7912*/      OPC_EmitMergeInputChains1_0,
/*7913*/      OPC_EmitConvertToTarget, 2,
/*7915*/      OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNri8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (PPCtc_return CTRRC8:i64:$dst, (imm:i32):$imm) - Complexity = 6
              // Dst: (TCRETURNri8 CTRRC8:i64:$dst, (imm:i32):$imm)
/*7923*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 24,  TARGET_VAL(ISD::ATOMIC_FENCE),// ->7951
/*7927*/    OPC_RecordNode,   // #0 = 'atomic_fence' chained node
/*7928*/    OPC_MoveChild, 1,
/*7930*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7933*/    OPC_MoveParent,
/*7934*/    OPC_MoveChild, 2,
/*7936*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7939*/    OPC_MoveParent,
/*7940*/    OPC_EmitMergeInputChains1_0,
/*7941*/    OPC_EmitInteger, MVT::i32, 0, 
/*7944*/    OPC_MorphNodeTo, TARGET_VAL(PPC::SYNC), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (atomic_fence (imm:iPTR), (imm:iPTR)) - Complexity = 9
            // Dst: (SYNC 0:i32)
          /*SwitchOpcode*/ 38,  TARGET_VAL(PPCISD::EH_SJLJ_SETJMP),// ->7992
/*7954*/    OPC_RecordNode,   // #0 = 'PPCeh_sjlj_setjmp' chained node
/*7955*/    OPC_RecordChild1, // #1 = $buf
/*7956*/    OPC_CheckType, MVT::i32,
/*7958*/    OPC_Scope, 15, /*->7975*/ // 2 children in Scope
/*7960*/      OPC_CheckPatternPredicate, 1, // (!PPCSubTarget.isPPC64())
/*7962*/      OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectAddr:$buf #2
/*7965*/      OPC_EmitMergeInputChains1_0,
/*7966*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EH_SjLj_SetJmp32), 0|OPFL_Chain,
                  2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (PPCeh_sjlj_setjmp:i32 addr:iPTR:$buf) - Complexity = 9
              // Dst: (EH_SjLj_SetJmp32:i32:i32 addr:iPTR:$buf)
/*7975*/    /*Scope*/ 15, /*->7991*/
/*7976*/      OPC_CheckPatternPredicate, 2, // (PPCSubTarget.isPPC64())
/*7978*/      OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectAddr:$buf #2
/*7981*/      OPC_EmitMergeInputChains1_0,
/*7982*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EH_SjLj_SetJmp64), 0|OPFL_Chain,
                  2/*#VTs*/, MVT::i32, MVT::i64, 1/*#Ops*/, 2, 
              // Src: (PPCeh_sjlj_setjmp:i32 addr:iPTR:$buf) - Complexity = 9
              // Dst: (EH_SjLj_SetJmp64:i32:i64 addr:iPTR:$buf)
/*7991*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 32,  TARGET_VAL(PPCISD::EH_SJLJ_LONGJMP),// ->8027
/*7995*/    OPC_RecordNode,   // #0 = 'PPCeh_sjlj_longjmp' chained node
/*7996*/    OPC_RecordChild1, // #1 = $buf
/*7997*/    OPC_Scope, 13, /*->8012*/ // 2 children in Scope
/*7999*/      OPC_CheckPatternPredicate, 1, // (!PPCSubTarget.isPPC64())
/*8001*/      OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectAddr:$buf #2
/*8004*/      OPC_EmitMergeInputChains1_0,
/*8005*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EH_SjLj_LongJmp32), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 2, 
              // Src: (PPCeh_sjlj_longjmp addr:iPTR:$buf) - Complexity = 9
              // Dst: (EH_SjLj_LongJmp32 addr:iPTR:$buf)
/*8012*/    /*Scope*/ 13, /*->8026*/
/*8013*/      OPC_CheckPatternPredicate, 2, // (PPCSubTarget.isPPC64())
/*8015*/      OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectAddr:$buf #2
/*8018*/      OPC_EmitMergeInputChains1_0,
/*8019*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EH_SjLj_LongJmp64), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 2, 
              // Src: (PPCeh_sjlj_longjmp addr:iPTR:$buf) - Complexity = 9
              // Dst: (EH_SjLj_LongJmp64 addr:iPTR:$buf)
/*8026*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 124,  TARGET_VAL(ISD::SUB),// ->8154
/*8030*/    OPC_Scope, 28, /*->8060*/ // 2 children in Scope
/*8032*/      OPC_MoveChild, 0,
/*8034*/      OPC_CheckInteger, 0, 
/*8036*/      OPC_MoveParent,
/*8037*/      OPC_RecordChild1, // #0 = $rA
/*8038*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->8049
/*8041*/        OPC_MorphNodeTo, TARGET_VAL(PPC::NEG), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sub:i32 0:i32, i32:i32:$rA) - Complexity = 8
                // Dst: (NEG:i32 i32:i32:$rA)
              /*SwitchType*/ 8,  MVT::i64,// ->8059
/*8051*/        OPC_MorphNodeTo, TARGET_VAL(PPC::NEG8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sub:i64 0:i64, i64:i64:$rA) - Complexity = 8
                // Dst: (NEG8:i64 i64:i64:$rA)
              0, // EndSwitchType
/*8060*/    /*Scope*/ 92, /*->8153*/
/*8061*/      OPC_RecordChild0, // #0 = $imm
/*8062*/      OPC_Scope, 23, /*->8087*/ // 2 children in Scope
/*8064*/        OPC_MoveChild, 0,
/*8066*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8069*/        OPC_CheckPredicate, 0, // Predicate_imm32SExt16
/*8071*/        OPC_MoveParent,
/*8072*/        OPC_RecordChild1, // #1 = $in
/*8073*/        OPC_CheckType, MVT::i32,
/*8075*/        OPC_EmitConvertToTarget, 0,
/*8077*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFIC), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (sub:i32 (imm:i32)<<P:Predicate_imm32SExt16>>:$imm, i32:i32:$in) - Complexity = 7
                // Dst: (SUBFIC:i32:i32 ?:i32:$in, (imm:i32):$imm)
/*8087*/      /*Scope*/ 64, /*->8152*/
/*8088*/        OPC_RecordChild1, // #1 = $rA
/*8089*/        OPC_SwitchType /*5 cases */, 9,  MVT::i32,// ->8101
/*8092*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBF), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (sub:i32 i32:i32:$rB, i32:i32:$rA) - Complexity = 3
                  // Dst: (SUBF:i32 i32:i32:$rA, i32:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->8112
/*8103*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBF8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (sub:i64 i64:i64:$rB, i64:i64:$rA) - Complexity = 3
                  // Dst: (SUBF8:i64 i64:i64:$rA, i64:i64:$rB)
                /*SwitchType*/ 11,  MVT::v16i8,// ->8125
/*8114*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8116*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUBM), 0,
                      1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 3
                  // Dst: (VSUBUBM:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
                /*SwitchType*/ 11,  MVT::v8i16,// ->8138
/*8127*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8129*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUHM), 0,
                      1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 3
                  // Dst: (VSUBUHM:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
                /*SwitchType*/ 11,  MVT::v4i32,// ->8151
/*8140*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8142*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUWM), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
                  // Dst: (VSUBUWM:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
                0, // EndSwitchType
/*8152*/      0, /*End of Scope*/
/*8153*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 102,  TARGET_VAL(ISD::ADDE),// ->8259
/*8157*/    OPC_CaptureGlueInput,
/*8158*/    OPC_RecordChild0, // #0 = $rA
/*8159*/    OPC_Scope, 69, /*->8230*/ // 2 children in Scope
/*8161*/      OPC_MoveChild, 1,
/*8163*/      OPC_Scope, 36, /*->8201*/ // 2 children in Scope
/*8165*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8176*/        OPC_MoveParent,
/*8177*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->8189
/*8180*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDME), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i32 i32:i32:$rA, -1:i32) - Complexity = 8
                  // Dst: (ADDME:i32:i32 i32:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->8200
/*8191*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDME8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i64 i64:i64:$rA, -1:i64) - Complexity = 8
                  // Dst: (ADDME8:i64:i32 i64:i64:$rA)
                0, // EndSwitchType
/*8201*/      /*Scope*/ 27, /*->8229*/
/*8202*/        OPC_CheckInteger, 0, 
/*8204*/        OPC_MoveParent,
/*8205*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->8217
/*8208*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDZE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i32 i32:i32:$rA, 0:i32) - Complexity = 8
                  // Dst: (ADDZE:i32:i32 i32:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->8228
/*8219*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDZE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i64 i64:i64:$rA, 0:i64) - Complexity = 8
                  // Dst: (ADDZE8:i64:i32 i64:i64:$rA)
                0, // EndSwitchType
/*8229*/      0, /*End of Scope*/
/*8230*/    /*Scope*/ 27, /*->8258*/
/*8231*/      OPC_RecordChild1, // #1 = $rB
/*8232*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->8245
/*8235*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
                // Dst: (ADDE:i32:i32 i32:i32:$rA, i32:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->8257
/*8247*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
                // Dst: (ADDE8:i64:i32 i64:i64:$rA, i64:i64:$rB)
              0, // EndSwitchType
/*8258*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 104,  TARGET_VAL(ISD::SUBE),// ->8366
/*8262*/    OPC_CaptureGlueInput,
/*8263*/    OPC_Scope, 71, /*->8336*/ // 2 children in Scope
/*8265*/      OPC_MoveChild, 0,
/*8267*/      OPC_Scope, 37, /*->8306*/ // 2 children in Scope
/*8269*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8280*/        OPC_MoveParent,
/*8281*/        OPC_RecordChild1, // #0 = $rA
/*8282*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->8294
/*8285*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFME), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i32 -1:i32, i32:i32:$rA) - Complexity = 8
                  // Dst: (SUBFME:i32:i32 i32:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->8305
/*8296*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFME8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i64 -1:i64, i64:i64:$rA) - Complexity = 8
                  // Dst: (SUBFME8:i64:i32 i64:i64:$rA)
                0, // EndSwitchType
/*8306*/      /*Scope*/ 28, /*->8335*/
/*8307*/        OPC_CheckInteger, 0, 
/*8309*/        OPC_MoveParent,
/*8310*/        OPC_RecordChild1, // #0 = $rA
/*8311*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->8323
/*8314*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFZE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i32 0:i32, i32:i32:$rA) - Complexity = 8
                  // Dst: (SUBFZE:i32:i32 i32:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->8334
/*8325*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFZE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i64 0:i64, i64:i64:$rA) - Complexity = 8
                  // Dst: (SUBFZE8:i64:i32 i64:i64:$rA)
                0, // EndSwitchType
/*8335*/      0, /*End of Scope*/
/*8336*/    /*Scope*/ 28, /*->8365*/
/*8337*/      OPC_RecordChild0, // #0 = $rB
/*8338*/      OPC_RecordChild1, // #1 = $rA
/*8339*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->8352
/*8342*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (sube:i32 i32:i32:$rB, i32:i32:$rA) - Complexity = 3
                // Dst: (SUBFE:i32:i32 i32:i32:$rA, i32:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->8364
/*8354*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (sube:i64 i64:i64:$rB, i64:i64:$rA) - Complexity = 3
                // Dst: (SUBFE8:i64:i32 i64:i64:$rA, i64:i64:$rB)
              0, // EndSwitchType
/*8365*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 74,  TARGET_VAL(ISD::ADDC),// ->8443
/*8369*/    OPC_RecordChild0, // #0 = $rA
/*8370*/    OPC_RecordChild1, // #1 = $imm
/*8371*/    OPC_Scope, 43, /*->8416*/ // 3 children in Scope
/*8373*/      OPC_MoveChild, 1,
/*8375*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8378*/      OPC_Scope, 17, /*->8397*/ // 2 children in Scope
/*8380*/        OPC_CheckPredicate, 0, // Predicate_imm32SExt16
/*8382*/        OPC_MoveParent,
/*8383*/        OPC_CheckType, MVT::i32,
/*8385*/        OPC_EmitConvertToTarget, 1,
/*8387*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIC), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i32 i32:i32:$rA, (imm:i32)<<P:Predicate_imm32SExt16>>:$imm) - Complexity = 7
                // Dst: (ADDIC:i32:i32 i32:i32:$rA, (imm:i32):$imm)
/*8397*/      /*Scope*/ 17, /*->8415*/
/*8398*/        OPC_CheckPredicate, 2, // Predicate_imm64SExt16
/*8400*/        OPC_MoveParent,
/*8401*/        OPC_CheckType, MVT::i64,
/*8403*/        OPC_EmitConvertToTarget, 1,
/*8405*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIC8), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i64 i64:i64:$rA, (imm:i64)<<P:Predicate_imm64SExt16>>:$imm) - Complexity = 7
                // Dst: (ADDIC8:i64:i32 i64:i64:$rA, (imm:i64):$imm)
/*8415*/      0, /*End of Scope*/
/*8416*/    /*Scope*/ 12, /*->8429*/
/*8417*/      OPC_CheckType, MVT::i32,
/*8419*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ADDC), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
              // Dst: (ADDC:i32:i32 i32:i32:$rA, i32:i32:$rB)
/*8429*/    /*Scope*/ 12, /*->8442*/
/*8430*/      OPC_CheckType, MVT::i64,
/*8432*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ADDC8), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
              // Dst: (ADDC8:i64:i32 i64:i64:$rA, i64:i64:$rB)
/*8442*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 70,  TARGET_VAL(ISD::MUL),// ->8516
/*8446*/    OPC_RecordChild0, // #0 = $rA
/*8447*/    OPC_RecordChild1, // #1 = $imm
/*8448*/    OPC_Scope, 41, /*->8491*/ // 3 children in Scope
/*8450*/      OPC_MoveChild, 1,
/*8452*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8455*/      OPC_Scope, 16, /*->8473*/ // 2 children in Scope
/*8457*/        OPC_CheckPredicate, 0, // Predicate_imm32SExt16
/*8459*/        OPC_MoveParent,
/*8460*/        OPC_CheckType, MVT::i32,
/*8462*/        OPC_EmitConvertToTarget, 1,
/*8464*/        OPC_MorphNodeTo, TARGET_VAL(PPC::MULLI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (mul:i32 i32:i32:$rA, (imm:i32)<<P:Predicate_imm32SExt16>>:$imm) - Complexity = 7
                // Dst: (MULLI:i32 i32:i32:$rA, (imm:i32):$imm)
/*8473*/      /*Scope*/ 16, /*->8490*/
/*8474*/        OPC_CheckPredicate, 2, // Predicate_imm64SExt16
/*8476*/        OPC_MoveParent,
/*8477*/        OPC_CheckType, MVT::i64,
/*8479*/        OPC_EmitConvertToTarget, 1,
/*8481*/        OPC_MorphNodeTo, TARGET_VAL(PPC::MULLI8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (mul:i64 i64:i64:$rA, (imm:i64)<<P:Predicate_imm64SExt16>>:$imm) - Complexity = 7
                // Dst: (MULLI8:i64 i64:i64:$rA, (imm:i64):$imm)
/*8490*/      0, /*End of Scope*/
/*8491*/    /*Scope*/ 11, /*->8503*/
/*8492*/      OPC_CheckType, MVT::i32,
/*8494*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULLW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
              // Dst: (MULLW:i32 i32:i32:$rA, i32:i32:$rB)
/*8503*/    /*Scope*/ 11, /*->8515*/
/*8504*/      OPC_CheckType, MVT::i64,
/*8506*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULLD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
              // Dst: (MULLD:i64 i64:i64:$rA, i64:i64:$rB)
/*8515*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 77,  TARGET_VAL(ISD::SUBC),// ->8596
/*8519*/    OPC_RecordChild0, // #0 = $imm
/*8520*/    OPC_Scope, 45, /*->8567*/ // 2 children in Scope
/*8522*/      OPC_MoveChild, 0,
/*8524*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8527*/      OPC_Scope, 18, /*->8547*/ // 2 children in Scope
/*8529*/        OPC_CheckPredicate, 0, // Predicate_imm32SExt16
/*8531*/        OPC_MoveParent,
/*8532*/        OPC_RecordChild1, // #1 = $rA
/*8533*/        OPC_CheckType, MVT::i32,
/*8535*/        OPC_EmitConvertToTarget, 0,
/*8537*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFIC), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (subc:i32 (imm:i32)<<P:Predicate_imm32SExt16>>:$imm, i32:i32:$rA) - Complexity = 7
                // Dst: (SUBFIC:i32:i32 i32:i32:$rA, (imm:i32):$imm)
/*8547*/      /*Scope*/ 18, /*->8566*/
/*8548*/        OPC_CheckPredicate, 2, // Predicate_imm64SExt16
/*8550*/        OPC_MoveParent,
/*8551*/        OPC_RecordChild1, // #1 = $rA
/*8552*/        OPC_CheckType, MVT::i64,
/*8554*/        OPC_EmitConvertToTarget, 0,
/*8556*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFIC8), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (subc:i64 (imm:i64)<<P:Predicate_imm64SExt16>>:$imm, i64:i64:$rA) - Complexity = 7
                // Dst: (SUBFIC8:i64:i32 i64:i64:$rA, (imm:i64):$imm)
/*8566*/      0, /*End of Scope*/
/*8567*/    /*Scope*/ 27, /*->8595*/
/*8568*/      OPC_RecordChild1, // #1 = $rA
/*8569*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->8582
/*8572*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFC), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (subc:i32 i32:i32:$rB, i32:i32:$rA) - Complexity = 3
                // Dst: (SUBFC:i32:i32 i32:i32:$rA, i32:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->8594
/*8584*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFC8), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (subc:i64 i64:i64:$rB, i64:i64:$rA) - Complexity = 3
                // Dst: (SUBFC8:i64:i32 i64:i64:$rA, i64:i64:$rB)
              0, // EndSwitchType
/*8595*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 120,  TARGET_VAL(ISD::SRA),// ->8719
/*8599*/    OPC_RecordChild0, // #0 = $rS
/*8600*/    OPC_RecordChild1, // #1 = $SH
/*8601*/    OPC_Scope, 38, /*->8641*/ // 5 children in Scope
/*8603*/      OPC_MoveChild, 1,
/*8605*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8608*/      OPC_CheckType, MVT::i32,
/*8610*/      OPC_MoveParent,
/*8611*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->8626
/*8614*/        OPC_EmitConvertToTarget, 1,
/*8616*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRAWI), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i32 i32:i32:$rS, (imm:i32):$SH) - Complexity = 6
                // Dst: (SRAWI:i32:i32 i32:i32:$rS, (imm:i32):$SH)
              /*SwitchType*/ 12,  MVT::i64,// ->8640
/*8628*/        OPC_EmitConvertToTarget, 1,
/*8630*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRADI), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i64 i64:i64:$rS, (imm:i32):$SH) - Complexity = 6
                // Dst: (SRADI:i64:i32 i64:i64:$rS, (imm:i32):$SH)
              0, // EndSwitchType
/*8641*/    /*Scope*/ 28, /*->8670*/
/*8642*/      OPC_CheckChild1Type, MVT::i32,
/*8644*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->8657
/*8647*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRAW), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (SRAW:i32:i32 ?:i32:$rS, ?:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->8669
/*8659*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRAD), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i64 i64:i64:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (SRAD:i64:i32 ?:i64:$rS, ?:i32:$rB)
              0, // EndSwitchType
/*8670*/    /*Scope*/ 15, /*->8686*/
/*8671*/      OPC_CheckChild1Type, MVT::v16i8,
/*8673*/      OPC_CheckType, MVT::v16i8,
/*8675*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8677*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (sra:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 3
              // Dst: (VSRAB:v16i8 ?:v16i8:$vA, ?:v16i8:$vB)
/*8686*/    /*Scope*/ 15, /*->8702*/
/*8687*/      OPC_CheckChild1Type, MVT::v8i16,
/*8689*/      OPC_CheckType, MVT::v8i16,
/*8691*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8693*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (sra:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 3
              // Dst: (VSRAH:v8i16 ?:v8i16:$vA, ?:v8i16:$vB)
/*8702*/    /*Scope*/ 15, /*->8718*/
/*8703*/      OPC_CheckChild1Type, MVT::v4i32,
/*8705*/      OPC_CheckType, MVT::v4i32,
/*8707*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8709*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (sra:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
              // Dst: (VSRAW:v4i32 ?:v4i32:$vA, ?:v4i32:$vB)
/*8718*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 4|128,1/*132*/,  TARGET_VAL(ISD::SHL),// ->8855
/*8723*/    OPC_RecordChild0, // #0 = $in
/*8724*/    OPC_RecordChild1, // #1 = $imm
/*8725*/    OPC_Scope, 52, /*->8779*/ // 5 children in Scope
/*8727*/      OPC_MoveChild, 1,
/*8729*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8732*/      OPC_CheckType, MVT::i32,
/*8734*/      OPC_MoveParent,
/*8735*/      OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->8759
/*8738*/        OPC_EmitConvertToTarget, 1,
/*8740*/        OPC_EmitInteger, MVT::i32, 0, 
/*8743*/        OPC_EmitConvertToTarget, 1,
/*8745*/        OPC_EmitNodeXForm, 5, 4, // SHL32
/*8748*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWINM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 2, 3, 5, 
                // Src: (shl:i32 i32:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLWINM:i32 ?:i32:$in, (imm:i32):$imm, 0:i32, (SHL32:i32 (imm:i32):$imm))
              /*SwitchType*/ 17,  MVT::i64,// ->8778
/*8761*/        OPC_EmitConvertToTarget, 1,
/*8763*/        OPC_EmitConvertToTarget, 1,
/*8765*/        OPC_EmitNodeXForm, 6, 3, // SHL64
/*8768*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICR), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 4, 
                // Src: (shl:i64 i64:i64:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLDICR:i64 ?:i64:$in, (imm:i32):$imm, (SHL64:i32 (imm:i32):$imm))
              0, // EndSwitchType
/*8779*/    /*Scope*/ 26, /*->8806*/
/*8780*/      OPC_CheckChild1Type, MVT::i32,
/*8782*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->8794
/*8785*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SLW), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (SLW:i32 ?:i32:$rS, ?:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->8805
/*8796*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SLD), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i64 i64:i64:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (SLD:i64 ?:i64:$rS, ?:i32:$rB)
              0, // EndSwitchType
/*8806*/    /*Scope*/ 15, /*->8822*/
/*8807*/      OPC_CheckChild1Type, MVT::v16i8,
/*8809*/      OPC_CheckType, MVT::v16i8,
/*8811*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8813*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (shl:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 3
              // Dst: (VSLB:v16i8 ?:v16i8:$vA, ?:v16i8:$vB)
/*8822*/    /*Scope*/ 15, /*->8838*/
/*8823*/      OPC_CheckChild1Type, MVT::v8i16,
/*8825*/      OPC_CheckType, MVT::v8i16,
/*8827*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8829*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (shl:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 3
              // Dst: (VSLH:v8i16 ?:v8i16:$vA, ?:v8i16:$vB)
/*8838*/    /*Scope*/ 15, /*->8854*/
/*8839*/      OPC_CheckChild1Type, MVT::v4i32,
/*8841*/      OPC_CheckType, MVT::v4i32,
/*8843*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8845*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (shl:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
              // Dst: (VSLW:v4i32 ?:v4i32:$vA, ?:v4i32:$vB)
/*8854*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 4|128,1/*132*/,  TARGET_VAL(ISD::SRL),// ->8991
/*8859*/    OPC_RecordChild0, // #0 = $in
/*8860*/    OPC_RecordChild1, // #1 = $imm
/*8861*/    OPC_Scope, 52, /*->8915*/ // 5 children in Scope
/*8863*/      OPC_MoveChild, 1,
/*8865*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8868*/      OPC_CheckType, MVT::i32,
/*8870*/      OPC_MoveParent,
/*8871*/      OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->8895
/*8874*/        OPC_EmitConvertToTarget, 1,
/*8876*/        OPC_EmitNodeXForm, 7, 2, // SRL32
/*8879*/        OPC_EmitConvertToTarget, 1,
/*8881*/        OPC_EmitInteger, MVT::i32, 31, 
/*8884*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWINM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (srl:i32 i32:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLWINM:i32 ?:i32:$in, (SRL32:i32 (imm:i32):$imm), (imm:i32):$imm, 31:i32)
              /*SwitchType*/ 17,  MVT::i64,// ->8914
/*8897*/        OPC_EmitConvertToTarget, 1,
/*8899*/        OPC_EmitNodeXForm, 8, 2, // SRL64
/*8902*/        OPC_EmitConvertToTarget, 1,
/*8904*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICL), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 3, 4, 
                // Src: (srl:i64 i64:i64:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLDICL:i64 ?:i64:$in, (SRL64:i32 (imm:i32):$imm), (imm:i32):$imm)
              0, // EndSwitchType
/*8915*/    /*Scope*/ 26, /*->8942*/
/*8916*/      OPC_CheckChild1Type, MVT::i32,
/*8918*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->8930
/*8921*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRW), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (SRW:i32 ?:i32:$rS, ?:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->8941
/*8932*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRD), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i64 i64:i64:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (SRD:i64 ?:i64:$rS, ?:i32:$rB)
              0, // EndSwitchType
/*8942*/    /*Scope*/ 15, /*->8958*/
/*8943*/      OPC_CheckChild1Type, MVT::v16i8,
/*8945*/      OPC_CheckType, MVT::v16i8,
/*8947*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8949*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (srl:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 3
              // Dst: (VSRB:v16i8 ?:v16i8:$vA, ?:v16i8:$vB)
/*8958*/    /*Scope*/ 15, /*->8974*/
/*8959*/      OPC_CheckChild1Type, MVT::v8i16,
/*8961*/      OPC_CheckType, MVT::v8i16,
/*8963*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8965*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (srl:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 3
              // Dst: (VSRH:v8i16 ?:v8i16:$vA, ?:v8i16:$vB)
/*8974*/    /*Scope*/ 15, /*->8990*/
/*8975*/      OPC_CheckChild1Type, MVT::v4i32,
/*8977*/      OPC_CheckType, MVT::v4i32,
/*8979*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8981*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (srl:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
              // Dst: (VSRW:v4i32 ?:v4i32:$vA, ?:v4i32:$vB)
/*8990*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 92,  TARGET_VAL(ISD::ROTL),// ->9086
/*8994*/    OPC_RecordChild0, // #0 = $in
/*8995*/    OPC_RecordChild1, // #1 = $imm
/*8996*/    OPC_Scope, 48, /*->9046*/ // 2 children in Scope
/*8998*/      OPC_MoveChild, 1,
/*9000*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9003*/      OPC_CheckType, MVT::i32,
/*9005*/      OPC_MoveParent,
/*9006*/      OPC_SwitchType /*2 cases */, 19,  MVT::i32,// ->9028
/*9009*/        OPC_EmitConvertToTarget, 1,
/*9011*/        OPC_EmitInteger, MVT::i32, 0, 
/*9014*/        OPC_EmitInteger, MVT::i32, 31, 
/*9017*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWINM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 2, 3, 4, 
                // Src: (rotl:i32 i32:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLWINM:i32 ?:i32:$in, (imm:i32):$imm, 0:i32, 31:i32)
              /*SwitchType*/ 15,  MVT::i64,// ->9045
/*9030*/        OPC_EmitConvertToTarget, 1,
/*9032*/        OPC_EmitInteger, MVT::i32, 0, 
/*9035*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICL), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
                // Src: (rotl:i64 i64:i64:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLDICL:i64 ?:i64:$in, (imm:i32):$imm, 0:i32)
              0, // EndSwitchType
/*9046*/    /*Scope*/ 38, /*->9085*/
/*9047*/      OPC_CheckChild1Type, MVT::i32,
/*9049*/      OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->9069
/*9052*/        OPC_EmitInteger, MVT::i32, 0, 
/*9055*/        OPC_EmitInteger, MVT::i32, 31, 
/*9058*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWNM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
                // Src: (rotl:i32 i32:i32:$in, i32:i32:$sh) - Complexity = 3
                // Dst: (RLWNM:i32 ?:i32:$in, ?:i32:$sh, 0:i32, 31:i32)
              /*SwitchType*/ 13,  MVT::i64,// ->9084
/*9071*/        OPC_EmitInteger, MVT::i32, 0, 
/*9074*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDCL), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (rotl:i64 i64:i64:$in, i32:i32:$sh) - Complexity = 3
                // Dst: (RLDCL:i64 ?:i64:$in, ?:i32:$sh, 0:i32)
              0, // EndSwitchType
/*9085*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 53,  TARGET_VAL(PPCISD::TOC_ENTRY),// ->9142
/*9089*/    OPC_RecordChild0, // #0 = $disp
/*9090*/    OPC_MoveChild, 0,
/*9092*/    OPC_SwitchOpcode /*3 cases */, 13,  TARGET_VAL(ISD::TargetGlobalAddress),// ->9109
/*9096*/      OPC_MoveParent,
/*9097*/      OPC_RecordChild1, // #1 = $reg
/*9098*/      OPC_CheckType, MVT::i64,
/*9100*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDtoc), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCtoc_entry:i64 (tglobaladdr:i64):$disp, i64:i64:$reg) - Complexity = 6
              // Dst: (LDtoc:i64 (tglobaladdr:i64):$disp, i64:i64:$reg)
            /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetJumpTable),// ->9125
/*9112*/      OPC_MoveParent,
/*9113*/      OPC_RecordChild1, // #1 = $reg
/*9114*/      OPC_CheckType, MVT::i64,
/*9116*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDtocJTI), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCtoc_entry:i64 (tjumptable:i64):$disp, i64:i64:$reg) - Complexity = 6
              // Dst: (LDtocJTI:i64 (tjumptable:i64):$disp, i64:i64:$reg)
            /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetConstantPool),// ->9141
/*9128*/      OPC_MoveParent,
/*9129*/      OPC_RecordChild1, // #1 = $reg
/*9130*/      OPC_CheckType, MVT::i64,
/*9132*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDtocCPT), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCtoc_entry:i64 (tconstpool:i64):$disp, i64:i64:$reg) - Complexity = 6
              // Dst: (LDtocCPT:i64 (tconstpool:i64):$disp, i64:i64:$reg)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDIS_TOC_HA),// ->9164
/*9145*/    OPC_RecordChild0, // #0 = $reg
/*9146*/    OPC_RecordChild1, // #1 = $disp
/*9147*/    OPC_MoveChild, 1,
/*9149*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*9152*/    OPC_MoveParent,
/*9153*/    OPC_CheckType, MVT::i64,
/*9155*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIStocHA), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddisTocHA:i64 i64:i64:$reg, (tglobaladdr:i64):$disp) - Complexity = 6
            // Dst: (ADDIStocHA:i64 i64:i64:$reg, (tglobaladdr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::LD_TOC_L),// ->9186
/*9167*/    OPC_RecordChild0, // #0 = $disp
/*9168*/    OPC_MoveChild, 0,
/*9170*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*9173*/    OPC_MoveParent,
/*9174*/    OPC_RecordChild1, // #1 = $reg
/*9175*/    OPC_CheckType, MVT::i64,
/*9177*/    OPC_MorphNodeTo, TARGET_VAL(PPC::LDtocL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCldTocL:i64 (tglobaladdr:i64):$disp, i64:i64:$reg) - Complexity = 6
            // Dst: (LDtocL:i64 (tglobaladdr:i64):$disp, i64:i64:$reg)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDI_TOC_L),// ->9208
/*9189*/    OPC_RecordChild0, // #0 = $reg
/*9190*/    OPC_RecordChild1, // #1 = $disp
/*9191*/    OPC_MoveChild, 1,
/*9193*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*9196*/    OPC_MoveParent,
/*9197*/    OPC_CheckType, MVT::i64,
/*9199*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDItocL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddiTocL:i64 i64:i64:$reg, (tglobaladdr:i64):$disp) - Complexity = 6
            // Dst: (ADDItocL:i64 i64:i64:$reg, (tglobaladdr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDIS_GOT_TPREL_HA),// ->9230
/*9211*/    OPC_RecordChild0, // #0 = $reg
/*9212*/    OPC_RecordChild1, // #1 = $disp
/*9213*/    OPC_MoveChild, 1,
/*9215*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9218*/    OPC_MoveParent,
/*9219*/    OPC_CheckType, MVT::i64,
/*9221*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDISgotTprelHA), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddisGotTprelHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDISgotTprelHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::LD_GOT_TPREL_L),// ->9252
/*9233*/    OPC_RecordChild0, // #0 = $disp
/*9234*/    OPC_MoveChild, 0,
/*9236*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9239*/    OPC_MoveParent,
/*9240*/    OPC_RecordChild1, // #1 = $reg
/*9241*/    OPC_CheckType, MVT::i64,
/*9243*/    OPC_MorphNodeTo, TARGET_VAL(PPC::LDgotTprelL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCldGotTprelL:i64 (tglobaltlsaddr:i64):$disp, i64:i64:$reg) - Complexity = 6
            // Dst: (LDgotTprelL:i64 (tglobaltlsaddr:i64):$disp, i64:i64:$reg)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADD_TLS),// ->9274
/*9255*/    OPC_RecordChild0, // #0 = $in
/*9256*/    OPC_RecordChild1, // #1 = $g
/*9257*/    OPC_MoveChild, 1,
/*9259*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9262*/    OPC_MoveParent,
/*9263*/    OPC_CheckType, MVT::i64,
/*9265*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADD8TLS), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddTls:i64 i64:i64:$in, (tglobaltlsaddr:i64):$g) - Complexity = 6
            // Dst: (ADD8TLS:i64 ?:i64:$in, (tglobaltlsaddr:i64):$g)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDIS_TLSGD_HA),// ->9296
/*9277*/    OPC_RecordChild0, // #0 = $reg
/*9278*/    OPC_RecordChild1, // #1 = $disp
/*9279*/    OPC_MoveChild, 1,
/*9281*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9284*/    OPC_MoveParent,
/*9285*/    OPC_CheckType, MVT::i64,
/*9287*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIStlsgdHA), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddisTlsgdHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDIStlsgdHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDI_TLSGD_L),// ->9318
/*9299*/    OPC_RecordChild0, // #0 = $reg
/*9300*/    OPC_RecordChild1, // #1 = $disp
/*9301*/    OPC_MoveChild, 1,
/*9303*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9306*/    OPC_MoveParent,
/*9307*/    OPC_CheckType, MVT::i64,
/*9309*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDItlsgdL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddiTlsgdL:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDItlsgdL:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::GET_TLS_ADDR),// ->9340
/*9321*/    OPC_RecordChild0, // #0 = $reg
/*9322*/    OPC_RecordChild1, // #1 = $sym
/*9323*/    OPC_MoveChild, 1,
/*9325*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9328*/    OPC_MoveParent,
/*9329*/    OPC_CheckType, MVT::i64,
/*9331*/    OPC_MorphNodeTo, TARGET_VAL(PPC::GETtlsADDR), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCgetTlsAddr:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$sym) - Complexity = 6
            // Dst: (GETtlsADDR:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$sym)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDIS_TLSLD_HA),// ->9362
/*9343*/    OPC_RecordChild0, // #0 = $reg
/*9344*/    OPC_RecordChild1, // #1 = $disp
/*9345*/    OPC_MoveChild, 1,
/*9347*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9350*/    OPC_MoveParent,
/*9351*/    OPC_CheckType, MVT::i64,
/*9353*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIStlsldHA), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddisTlsldHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDIStlsldHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDI_TLSLD_L),// ->9384
/*9365*/    OPC_RecordChild0, // #0 = $reg
/*9366*/    OPC_RecordChild1, // #1 = $disp
/*9367*/    OPC_MoveChild, 1,
/*9369*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9372*/    OPC_MoveParent,
/*9373*/    OPC_CheckType, MVT::i64,
/*9375*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDItlsldL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddiTlsldL:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDItlsldL:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::GET_TLSLD_ADDR),// ->9406
/*9387*/    OPC_RecordChild0, // #0 = $reg
/*9388*/    OPC_RecordChild1, // #1 = $sym
/*9389*/    OPC_MoveChild, 1,
/*9391*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9394*/    OPC_MoveParent,
/*9395*/    OPC_CheckType, MVT::i64,
/*9397*/    OPC_MorphNodeTo, TARGET_VAL(PPC::GETtlsldADDR), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCgetTlsldAddr:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$sym) - Complexity = 6
            // Dst: (GETtlsldADDR:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$sym)
          /*SwitchOpcode*/ 21,  TARGET_VAL(PPCISD::ADDIS_DTPREL_HA),// ->9430
/*9409*/    OPC_RecordNode,   // #0 = 'PPCaddisDtprelHA' chained node
/*9410*/    OPC_RecordChild1, // #1 = $reg
/*9411*/    OPC_RecordChild2, // #2 = $disp
/*9412*/    OPC_MoveChild, 2,
/*9414*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9417*/    OPC_MoveParent,
/*9418*/    OPC_CheckType, MVT::i64,
/*9420*/    OPC_EmitMergeInputChains1_0,
/*9421*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDISdtprelHA), 0|OPFL_Chain,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
            // Src: (PPCaddisDtprelHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDISdtprelHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDI_DTPREL_L),// ->9452
/*9433*/    OPC_RecordChild0, // #0 = $reg
/*9434*/    OPC_RecordChild1, // #1 = $disp
/*9435*/    OPC_MoveChild, 1,
/*9437*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9440*/    OPC_MoveParent,
/*9441*/    OPC_CheckType, MVT::i64,
/*9443*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIdtprelL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddiDtprelL:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDIdtprelL:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 97,  TARGET_VAL(ISD::Constant),// ->9552
/*9455*/    OPC_RecordNode,   // #0 = $imm
/*9456*/    OPC_SwitchType /*2 cases */, 59,  MVT::i32,// ->9518
/*9459*/      OPC_Scope, 12, /*->9473*/ // 3 children in Scope
/*9461*/        OPC_CheckPredicate, 0, // Predicate_imm32SExt16
/*9463*/        OPC_EmitConvertToTarget, 0,
/*9465*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (imm:i32)<<P:Predicate_imm32SExt16>>:$imm - Complexity = 4
                // Dst: (LI:i32 (imm:i32):$imm)
/*9473*/      /*Scope*/ 15, /*->9489*/
/*9474*/        OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*9476*/        OPC_EmitConvertToTarget, 0,
/*9478*/        OPC_EmitNodeXForm, 0, 1, // HI16
/*9481*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (imm:i32)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm - Complexity = 4
                // Dst: (LIS:i32 (HI16:i32 (imm:i32):$imm))
/*9489*/      /*Scope*/ 27, /*->9517*/
/*9490*/        OPC_EmitConvertToTarget, 0,
/*9492*/        OPC_EmitNodeXForm, 0, 1, // HI16
/*9495*/        OPC_EmitNode, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*9503*/        OPC_EmitConvertToTarget, 0,
/*9505*/        OPC_EmitNodeXForm, 1, 4, // LO16
/*9508*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 5, 
                // Src: (imm:i32):$imm - Complexity = 3
                // Dst: (ORI:i32 (LIS:i32 (HI16:i32 (imm:i32):$imm)), (LO16:i32 (imm:i32):$imm))
/*9517*/      0, /*End of Scope*/
            /*SwitchType*/ 31,  MVT::i64,// ->9551
/*9520*/      OPC_Scope, 12, /*->9534*/ // 2 children in Scope
/*9522*/        OPC_CheckPredicate, 2, // Predicate_imm64SExt16
/*9524*/        OPC_EmitConvertToTarget, 0,
/*9526*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (imm:i64)<<P:Predicate_imm64SExt16>>:$imm - Complexity = 4
                // Dst: (LI8:i64 (imm:i64):$imm)
/*9534*/      /*Scope*/ 15, /*->9550*/
/*9535*/        OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*9537*/        OPC_EmitConvertToTarget, 0,
/*9539*/        OPC_EmitNodeXForm, 0, 1, // HI16
/*9542*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm - Complexity = 4
                // Dst: (LIS8:i64 (HI16:i64 (imm:i64):$imm))
/*9550*/      0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 28,  TARGET_VAL(PPCISD::SHL),// ->9583
/*9555*/    OPC_RecordChild0, // #0 = $rS
/*9556*/    OPC_RecordChild1, // #1 = $rB
/*9557*/    OPC_CheckChild1Type, MVT::i32,
/*9559*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9571
/*9562*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SLW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCshl:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
              // Dst: (SLW:i32 i32:i32:$rS, i32:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->9582
/*9573*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SLD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCshl:i64 i64:i64:$rS, i32:i32:$rB) - Complexity = 3
              // Dst: (SLD:i64 i64:i64:$rS, i32:i32:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 28,  TARGET_VAL(PPCISD::SRL),// ->9614
/*9586*/    OPC_RecordChild0, // #0 = $rS
/*9587*/    OPC_RecordChild1, // #1 = $rB
/*9588*/    OPC_CheckChild1Type, MVT::i32,
/*9590*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9602
/*9593*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsrl:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
              // Dst: (SRW:i32 i32:i32:$rS, i32:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->9613
/*9604*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsrl:i64 i64:i64:$rS, i32:i32:$rB) - Complexity = 3
              // Dst: (SRD:i64 i64:i64:$rS, i32:i32:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 30,  TARGET_VAL(PPCISD::SRA),// ->9647
/*9617*/    OPC_RecordChild0, // #0 = $rS
/*9618*/    OPC_RecordChild1, // #1 = $rB
/*9619*/    OPC_CheckChild1Type, MVT::i32,
/*9621*/    OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->9634
/*9624*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRAW), 0,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsra:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
              // Dst: (SRAW:i32:i32 i32:i32:$rS, i32:i32:$rB)
            /*SwitchType*/ 10,  MVT::i64,// ->9646
/*9636*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRAD), 0,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsra:i64 i64:i64:$rS, i32:i32:$rB) - Complexity = 3
              // Dst: (SRAD:i64:i32 i64:i64:$rS, i32:i32:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::CTLZ),// ->9673
/*9650*/    OPC_RecordChild0, // #0 = $rS
/*9651*/    OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->9662
/*9654*/      OPC_MorphNodeTo, TARGET_VAL(PPC::CNTLZW), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (ctlz:i32 i32:i32:$rS) - Complexity = 3
              // Dst: (CNTLZW:i32 i32:i32:$rS)
            /*SwitchType*/ 8,  MVT::i64,// ->9672
/*9664*/      OPC_MorphNodeTo, TARGET_VAL(PPC::CNTLZD), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (ctlz:i64 i64:i64:$rS) - Complexity = 3
              // Dst: (CNTLZD:i64 i64:i64:$rS)
            0, // EndSwitchType
          /*SwitchOpcode*/ 69,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->9745
/*9676*/    OPC_RecordChild0, // #0 = $rS
/*9677*/    OPC_MoveChild, 1,
/*9679*/    OPC_Scope, 25, /*->9706*/ // 3 children in Scope
/*9681*/      OPC_CheckValueType, MVT::i8,
/*9683*/      OPC_MoveParent,
/*9684*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->9695
/*9687*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSB), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 i32:i32:$rS, i8:Other) - Complexity = 3
                // Dst: (EXTSB:i32 i32:i32:$rS)
              /*SwitchType*/ 8,  MVT::i64,// ->9705
/*9697*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSB8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 i64:i64:$rS, i8:Other) - Complexity = 3
                // Dst: (EXTSB8:i64 i64:i64:$rS)
              0, // EndSwitchType
/*9706*/    /*Scope*/ 25, /*->9732*/
/*9707*/      OPC_CheckValueType, MVT::i16,
/*9709*/      OPC_MoveParent,
/*9710*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->9721
/*9713*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSH), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 i32:i32:$rS, i16:Other) - Complexity = 3
                // Dst: (EXTSH:i32 i32:i32:$rS)
              /*SwitchType*/ 8,  MVT::i64,// ->9731
/*9723*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSH8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 i64:i64:$rS, i16:Other) - Complexity = 3
                // Dst: (EXTSH8:i64 i64:i64:$rS)
              0, // EndSwitchType
/*9732*/    /*Scope*/ 11, /*->9744*/
/*9733*/      OPC_CheckValueType, MVT::i32,
/*9735*/      OPC_MoveParent,
/*9736*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSW), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (sext_inreg:i64 i64:i64:$rS, i32:Other) - Complexity = 3
              // Dst: (EXTSW:i64 i64:i64:$rS)
/*9744*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::SDIV),// ->9774
/*9748*/    OPC_RecordChild0, // #0 = $rA
/*9749*/    OPC_RecordChild1, // #1 = $rB
/*9750*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9762
/*9753*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sdiv:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
              // Dst: (DIVW:i32 i32:i32:$rA, i32:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->9773
/*9764*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sdiv:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
              // Dst: (DIVD:i64 i64:i64:$rA, i64:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::UDIV),// ->9803
/*9777*/    OPC_RecordChild0, // #0 = $rA
/*9778*/    OPC_RecordChild1, // #1 = $rB
/*9779*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9791
/*9782*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVWU), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (udiv:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
              // Dst: (DIVWU:i32 i32:i32:$rA, i32:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->9802
/*9793*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVDU), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (udiv:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
              // Dst: (DIVDU:i64 i64:i64:$rA, i64:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::MULHS),// ->9832
/*9806*/    OPC_RecordChild0, // #0 = $rA
/*9807*/    OPC_RecordChild1, // #1 = $rB
/*9808*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9820
/*9811*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mulhs:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
              // Dst: (MULHW:i32 i32:i32:$rA, i32:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->9831
/*9822*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mulhs:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
              // Dst: (MULHD:i64 i64:i64:$rA, i64:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::MULHU),// ->9861
/*9835*/    OPC_RecordChild0, // #0 = $rA
/*9836*/    OPC_RecordChild1, // #1 = $rB
/*9837*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9849
/*9840*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHWU), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mulhu:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
              // Dst: (MULHWU:i32 i32:i32:$rA, i32:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->9860
/*9851*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHDU), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mulhu:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
              // Dst: (MULHDU:i64 i64:i64:$rA, i64:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::READCYCLECOUNTER),// ->9875
/*9864*/    OPC_RecordNode,   // #0 = 'readcyclecounter' chained node
/*9865*/    OPC_CheckType, MVT::i64,
/*9867*/    OPC_EmitMergeInputChains1_0,
/*9868*/    OPC_MorphNodeTo, TARGET_VAL(PPC::MFTB8), 0|OPFL_Chain,
                1/*#VTs*/, MVT::i64, 0/*#Ops*/, 
            // Src: (readcyclecounter:i64) - Complexity = 3
            // Dst: (MFTB8:i64)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::SIGN_EXTEND),// ->9891
/*9878*/    OPC_RecordChild0, // #0 = $rS
/*9879*/    OPC_CheckChild0Type, MVT::i32,
/*9881*/    OPC_CheckType, MVT::i64,
/*9883*/    OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSW_32_64), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (sext:i64 i32:i32:$rS) - Complexity = 3
            // Dst: (EXTSW_32_64:i64 i32:i32:$rS)
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::CTPOP),// ->9917
/*9894*/    OPC_RecordChild0, // #0 = $rS
/*9895*/    OPC_SwitchType /*2 cases */, 8,  MVT::i64,// ->9906
/*9898*/      OPC_MorphNodeTo, TARGET_VAL(PPC::POPCNTD), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (ctpop:i64 i64:i64:$rS) - Complexity = 3
              // Dst: (POPCNTD:i64 i64:i64:$rS)
            /*SwitchType*/ 8,  MVT::i32,// ->9916
/*9908*/      OPC_MorphNodeTo, TARGET_VAL(PPC::POPCNTW), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (ctpop:i32 i32:i32:$rS) - Complexity = 3
              // Dst: (POPCNTW:i32 i32:i32:$rS)
            0, // EndSwitchType
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::TRUNCATE),// ->9935
/*9920*/    OPC_RecordChild0, // #0 = $in
/*9921*/    OPC_CheckType, MVT::i32,
/*9923*/    OPC_EmitInteger, MVT::i32, PPC::sub_32,
/*9926*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (trunc:i32 i64:i64:$in) - Complexity = 3
            // Dst: (EXTRACT_SUBREG:i32 ?:i64:$in, sub_32:i32)
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::ANY_EXTEND),// ->9963
/*9938*/    OPC_RecordChild0, // #0 = $in
/*9939*/    OPC_CheckChild0Type, MVT::i32,
/*9941*/    OPC_CheckType, MVT::i64,
/*9943*/    OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                1/*#VTs*/, MVT::i64, 0/*#Ops*/,  // Results = #1
/*9950*/    OPC_EmitInteger, MVT::i32, PPC::sub_32,
/*9953*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
            // Src: (anyext:i64 i32:i32:$in) - Complexity = 3
            // Dst: (INSERT_SUBREG:i64 (IMPLICIT_DEF:i64), ?:i32:$in, sub_32:i32)
          /*SwitchOpcode*/ 41,  TARGET_VAL(ISD::ZERO_EXTEND),// ->10007
/*9966*/    OPC_RecordChild0, // #0 = $in
/*9967*/    OPC_CheckChild0Type, MVT::i32,
/*9969*/    OPC_CheckType, MVT::i64,
/*9971*/    OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                1/*#VTs*/, MVT::i64, 0/*#Ops*/,  // Results = #1
/*9978*/    OPC_EmitInteger, MVT::i32, PPC::sub_32,
/*9981*/    OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2,  // Results = #3
/*9991*/    OPC_EmitInteger, MVT::i32, 0, 
/*9994*/    OPC_EmitInteger, MVT::i32, 32, 
/*9997*/    OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICL), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 5, 
            // Src: (zext:i64 i32:i32:$in) - Complexity = 3
            // Dst: (RLDICL:i64 (INSERT_SUBREG:i64 (IMPLICIT_DEF:i64), ?:i32:$in, sub_32:i32), 0:i32, 32:i32)
          /*SwitchOpcode*/ 31|128,1/*159*/,  TARGET_VAL(ISD::FNEG),// ->10170
/*10011*/   OPC_Scope, 102, /*->10115*/ // 3 children in Scope
/*10013*/     OPC_MoveChild, 0,
/*10015*/     OPC_SwitchOpcode /*2 cases */, 68,  TARGET_VAL(ISD::FMA),// ->10087
/*10019*/       OPC_RecordChild0, // #0 = $FRA
/*10020*/       OPC_RecordChild1, // #1 = $FRC
/*10021*/       OPC_Scope, 34, /*->10057*/ // 2 children in Scope
/*10023*/         OPC_MoveChild, 2,
/*10025*/         OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*10028*/         OPC_RecordChild0, // #2 = $FRB
/*10029*/         OPC_MoveParent,
/*10030*/         OPC_MoveParent,
/*10031*/         OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->10044
/*10034*/           OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUB), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f64 (fma:f64 f64:f64:$FRA, f64:f64:$FRC, (fneg:f64 f64:f64:$FRB))) - Complexity = 9
                    // Dst: (FNMSUB:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB)
                  /*SwitchType*/ 10,  MVT::f32,// ->10056
/*10046*/           OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUBS), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f32 (fma:f32 f32:f32:$FRA, f32:f32:$FRC, (fneg:f32 f32:f32:$FRB))) - Complexity = 9
                    // Dst: (FNMSUBS:f32 f32:f32:$FRA, f32:f32:$FRC, f32:f32:$FRB)
                  0, // EndSwitchType
/*10057*/       /*Scope*/ 28, /*->10086*/
/*10058*/         OPC_RecordChild2, // #2 = $FRB
/*10059*/         OPC_MoveParent,
/*10060*/         OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->10073
/*10063*/           OPC_MorphNodeTo, TARGET_VAL(PPC::FNMADD), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f64 (fma:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB)) - Complexity = 6
                    // Dst: (FNMADD:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB)
                  /*SwitchType*/ 10,  MVT::f32,// ->10085
/*10075*/           OPC_MorphNodeTo, TARGET_VAL(PPC::FNMADDS), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f32 (fma:f32 f32:f32:$FRA, f32:f32:$FRC, f32:f32:$FRB)) - Complexity = 6
                    // Dst: (FNMADDS:f32 f32:f32:$FRA, f32:f32:$FRC, f32:f32:$FRB)
                  0, // EndSwitchType
/*10086*/       0, /*End of Scope*/
              /*SwitchOpcode*/ 24,  TARGET_VAL(ISD::FABS),// ->10114
/*10090*/       OPC_RecordChild0, // #0 = $frB
/*10091*/       OPC_MoveParent,
/*10092*/       OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->10103
/*10095*/         OPC_MorphNodeTo, TARGET_VAL(PPC::FNABSS), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                  // Src: (fneg:f32 (fabs:f32 f32:f32:$frB)) - Complexity = 6
                  // Dst: (FNABSS:f32 f32:f32:$frB)
                /*SwitchType*/ 8,  MVT::f64,// ->10113
/*10105*/         OPC_MorphNodeTo, TARGET_VAL(PPC::FNABSD), 0,
                      1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                  // Src: (fneg:f64 (fabs:f64 f64:f64:$frB)) - Complexity = 6
                  // Dst: (FNABSD:f64 f64:f64:$frB)
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*10115*/   /*Scope*/ 23, /*->10139*/
/*10116*/     OPC_RecordChild0, // #0 = $frB
/*10117*/     OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->10128
/*10120*/       OPC_MorphNodeTo, TARGET_VAL(PPC::FNEGS), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fneg:f32 f32:f32:$frB) - Complexity = 3
                // Dst: (FNEGS:f32 f32:f32:$frB)
              /*SwitchType*/ 8,  MVT::f64,// ->10138
/*10130*/       OPC_MorphNodeTo, TARGET_VAL(PPC::FNEGD), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 f64:f64:$frB) - Complexity = 3
                // Dst: (FNEGD:f64 f64:f64:$frB)
              0, // EndSwitchType
/*10139*/   /*Scope*/ 29, /*->10169*/
/*10140*/     OPC_MoveChild, 0,
/*10142*/     OPC_CheckOpcode, TARGET_VAL(ISD::FMA),
/*10145*/     OPC_RecordChild0, // #0 = $vA
/*10146*/     OPC_RecordChild1, // #1 = $vC
/*10147*/     OPC_MoveChild, 2,
/*10149*/     OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*10152*/     OPC_RecordChild0, // #2 = $vB
/*10153*/     OPC_MoveParent,
/*10154*/     OPC_MoveParent,
/*10155*/     OPC_CheckType, MVT::v4f32,
/*10157*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10159*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VNMSUBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (fneg:v4f32 (fma:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vC, (fneg:v4f32 v4f32:v4f32:$vB))) - Complexity = 9
              // Dst: (VNMSUBFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vC, v4f32:v4f32:$vB)
/*10169*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 44|128,1/*172*/,  TARGET_VAL(ISD::FMA),// ->10346
/*10174*/   OPC_Scope, 35, /*->10211*/ // 5 children in Scope
/*10176*/     OPC_RecordChild0, // #0 = $FRA
/*10177*/     OPC_RecordChild1, // #1 = $FRC
/*10178*/     OPC_MoveChild, 2,
/*10180*/     OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*10183*/     OPC_RecordChild0, // #2 = $FRB
/*10184*/     OPC_MoveParent,
/*10185*/     OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->10198
/*10188*/       OPC_MorphNodeTo, TARGET_VAL(PPC::FMSUB), 0,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fma:f64 f64:f64:$FRA, f64:f64:$FRC, (fneg:f64 f64:f64:$FRB)) - Complexity = 6
                // Dst: (FMSUB:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB)
              /*SwitchType*/ 10,  MVT::f32,// ->10210
/*10200*/       OPC_MorphNodeTo, TARGET_VAL(PPC::FMSUBS), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fma:f32 f32:f32:$FRA, f32:f32:$FRC, (fneg:f32 f32:f32:$FRB)) - Complexity = 6
                // Dst: (FMSUBS:f32 f32:f32:$FRA, f32:f32:$FRC, f32:f32:$FRB)
              0, // EndSwitchType
/*10211*/   /*Scope*/ 21, /*->10233*/
/*10212*/     OPC_MoveChild, 0,
/*10214*/     OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*10217*/     OPC_RecordChild0, // #0 = $A
/*10218*/     OPC_MoveParent,
/*10219*/     OPC_RecordChild1, // #1 = $C
/*10220*/     OPC_RecordChild2, // #2 = $B
/*10221*/     OPC_CheckType, MVT::f64,
/*10223*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUB), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (fma:f64 (fneg:f64 f64:f64:$A), f64:f64:$C, f64:f64:$B) - Complexity = 6
              // Dst: (FNMSUB:f64 ?:f64:$A, ?:f64:$C, ?:f64:$B)
/*10233*/   /*Scope*/ 21, /*->10255*/
/*10234*/     OPC_RecordChild0, // #0 = $A
/*10235*/     OPC_MoveChild, 1,
/*10237*/     OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*10240*/     OPC_RecordChild0, // #1 = $C
/*10241*/     OPC_MoveParent,
/*10242*/     OPC_RecordChild2, // #2 = $B
/*10243*/     OPC_CheckType, MVT::f64,
/*10245*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUB), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (fma:f64 f64:f64:$A, (fneg:f64 f64:f64:$C), f64:f64:$B) - Complexity = 6
              // Dst: (FNMSUB:f64 ?:f64:$A, ?:f64:$C, ?:f64:$B)
/*10255*/   /*Scope*/ 21, /*->10277*/
/*10256*/     OPC_MoveChild, 0,
/*10258*/     OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*10261*/     OPC_RecordChild0, // #0 = $A
/*10262*/     OPC_MoveParent,
/*10263*/     OPC_RecordChild1, // #1 = $C
/*10264*/     OPC_RecordChild2, // #2 = $B
/*10265*/     OPC_CheckType, MVT::f32,
/*10267*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUBS), 0,
                  1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (fma:f32 (fneg:f32 f32:f32:$A), f32:f32:$C, f32:f32:$B) - Complexity = 6
              // Dst: (FNMSUBS:f32 ?:f32:$A, ?:f32:$C, ?:f32:$B)
/*10277*/   /*Scope*/ 67, /*->10345*/
/*10278*/     OPC_RecordChild0, // #0 = $A
/*10279*/     OPC_Scope, 20, /*->10301*/ // 2 children in Scope
/*10281*/       OPC_MoveChild, 1,
/*10283*/       OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*10286*/       OPC_RecordChild0, // #1 = $C
/*10287*/       OPC_MoveParent,
/*10288*/       OPC_RecordChild2, // #2 = $B
/*10289*/       OPC_CheckType, MVT::f32,
/*10291*/       OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUBS), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fma:f32 f32:f32:$A, (fneg:f32 f32:f32:$C), f32:f32:$B) - Complexity = 6
                // Dst: (FNMSUBS:f32 ?:f32:$A, ?:f32:$C, ?:f32:$B)
/*10301*/     /*Scope*/ 42, /*->10344*/
/*10302*/       OPC_RecordChild1, // #1 = $FRC
/*10303*/       OPC_RecordChild2, // #2 = $FRB
/*10304*/       OPC_SwitchType /*3 cases */, 10,  MVT::f64,// ->10317
/*10307*/         OPC_MorphNodeTo, TARGET_VAL(PPC::FMADD), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fma:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB) - Complexity = 3
                  // Dst: (FMADD:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB)
                /*SwitchType*/ 10,  MVT::f32,// ->10329
/*10319*/         OPC_MorphNodeTo, TARGET_VAL(PPC::FMADDS), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fma:f32 f32:f32:$FRA, f32:f32:$FRC, f32:f32:$FRB) - Complexity = 3
                  // Dst: (FMADDS:f32 f32:f32:$FRA, f32:f32:$FRC, f32:f32:$FRB)
                /*SwitchType*/ 12,  MVT::v4f32,// ->10343
/*10331*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10333*/         OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                      1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fma:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vC, v4f32:v4f32:$vB) - Complexity = 3
                  // Dst: (VMADDFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vC, v4f32:v4f32:$vB)
                0, // EndSwitchType
/*10344*/     0, /*End of Scope*/
/*10345*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCTIWZ),// ->10360
/*10349*/   OPC_RecordChild0, // #0 = $frB
/*10350*/   OPC_CheckType, MVT::f64,
/*10352*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCTIWZ), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfctiwz:f64 f64:f64:$frB) - Complexity = 3
            // Dst: (FCTIWZ:f64 f64:f64:$frB)
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::FP_ROUND),// ->10372
/*10363*/   OPC_RecordChild0, // #0 = $frB
/*10364*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FRSP), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (fround:f32 f64:f64:$frB) - Complexity = 3
            // Dst: (FRSP:f32 f64:f64:$frB)
          /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::FNEARBYINT),// ->10410
/*10375*/   OPC_RecordChild0, // #0 = $frB
/*10376*/   OPC_SwitchType /*3 cases */, 8,  MVT::f64,// ->10387
/*10379*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRIND), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fnearbyint:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRIND:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->10397
/*10389*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRINS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fnearbyint:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRINS:f32 f32:f32:$frB)
            /*SwitchType*/ 10,  MVT::v4f32,// ->10409
/*10399*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10401*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIN), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (fnearbyint:v4f32 v4f32:v4f32:$vA) - Complexity = 3
              // Dst: (VRFIN:v4f32 ?:v4f32:$vA)
            0, // EndSwitchType
          /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::FCEIL),// ->10448
/*10413*/   OPC_RecordChild0, // #0 = $frB
/*10414*/   OPC_SwitchType /*3 cases */, 8,  MVT::f64,// ->10425
/*10417*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRIPD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fceil:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRIPD:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->10435
/*10427*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRIPS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fceil:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRIPS:f32 f32:f32:$frB)
            /*SwitchType*/ 10,  MVT::v4f32,// ->10447
/*10437*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10439*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (fceil:v4f32 v4f32:v4f32:$vA) - Complexity = 3
              // Dst: (VRFIP:v4f32 ?:v4f32:$vA)
            0, // EndSwitchType
          /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::FTRUNC),// ->10486
/*10451*/   OPC_RecordChild0, // #0 = $frB
/*10452*/   OPC_SwitchType /*3 cases */, 8,  MVT::f64,// ->10463
/*10455*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRIZD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (ftrunc:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRIZD:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->10473
/*10465*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRIZS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (ftrunc:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRIZS:f32 f32:f32:$frB)
            /*SwitchType*/ 10,  MVT::v4f32,// ->10485
/*10475*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10477*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIZ), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (ftrunc:v4f32 v4f32:v4f32:$vA) - Complexity = 3
              // Dst: (VRFIZ:v4f32 ?:v4f32:$vA)
            0, // EndSwitchType
          /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::FFLOOR),// ->10524
/*10489*/   OPC_RecordChild0, // #0 = $frB
/*10490*/   OPC_SwitchType /*3 cases */, 8,  MVT::f64,// ->10501
/*10493*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRIMD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (ffloor:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRIMD:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->10511
/*10503*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRIMS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (ffloor:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRIMS:f32 f32:f32:$frB)
            /*SwitchType*/ 10,  MVT::v4f32,// ->10523
/*10513*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10515*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIM), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (ffloor:v4f32 v4f32:v4f32:$vA) - Complexity = 3
              // Dst: (VRFIM:v4f32 ?:v4f32:$vA)
            0, // EndSwitchType
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::FSQRT),// ->10550
/*10527*/   OPC_RecordChild0, // #0 = $frB
/*10528*/   OPC_SwitchType /*2 cases */, 8,  MVT::f64,// ->10539
/*10531*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FSQRT), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FSQRT:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->10549
/*10541*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FSQRTS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FSQRTS:f32 f32:f32:$frB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::FABS),// ->10576
/*10553*/   OPC_RecordChild0, // #0 = $frB
/*10554*/   OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->10565
/*10557*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FABSS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FABSS:f32 f32:f32:$frB)
            /*SwitchType*/ 8,  MVT::f64,// ->10575
/*10567*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FABSD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fabs:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FABSD:f64 f64:f64:$frB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 35,  TARGET_VAL(PPCISD::FRE),// ->10614
/*10579*/   OPC_RecordChild0, // #0 = $frB
/*10580*/   OPC_SwitchType /*3 cases */, 8,  MVT::f64,// ->10591
/*10583*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRE), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (PPCfre:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRE:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->10601
/*10593*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRES), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (PPCfre:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRES:f32 f32:f32:$frB)
            /*SwitchType*/ 10,  MVT::v4f32,// ->10613
/*10603*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10605*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VREFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (PPCfre:v4f32 v4f32:v4f32:$A) - Complexity = 3
              // Dst: (VREFP:v4f32 ?:v4f32:$A)
            0, // EndSwitchType
          /*SwitchOpcode*/ 35,  TARGET_VAL(PPCISD::FRSQRTE),// ->10652
/*10617*/   OPC_RecordChild0, // #0 = $frB
/*10618*/   OPC_SwitchType /*3 cases */, 8,  MVT::f64,// ->10629
/*10621*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRSQRTE), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (PPCfrsqrte:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRSQRTE:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->10639
/*10631*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRSQRTES), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (PPCfrsqrte:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRSQRTES:f32 f32:f32:$frB)
            /*SwitchType*/ 10,  MVT::v4f32,// ->10651
/*10641*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10643*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VRSQRTEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (PPCfrsqrte:v4f32 v4f32:v4f32:$A) - Complexity = 3
              // Dst: (VRSQRTEFP:v4f32 ?:v4f32:$A)
            0, // EndSwitchType
          /*SwitchOpcode*/ 7,  TARGET_VAL(PPCISD::MFFS),// ->10662
/*10655*/   OPC_MorphNodeTo, TARGET_VAL(PPC::MFFS), 0,
                1/*#VTs*/, MVT::f64, 0/*#Ops*/, 
            // Src: (PPCmffs:f64) - Complexity = 3
            // Dst: (MFFS:f64)
          /*SwitchOpcode*/ 29,  TARGET_VAL(PPCISD::FSEL),// ->10694
/*10665*/   OPC_RecordChild0, // #0 = $FRA
/*10666*/   OPC_RecordChild1, // #1 = $FRC
/*10667*/   OPC_RecordChild2, // #2 = $FRB
/*10668*/   OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->10681
/*10671*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FSELD), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (PPCfsel:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB) - Complexity = 3
              // Dst: (FSELD:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB)
            /*SwitchType*/ 10,  MVT::f32,// ->10693
/*10683*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FSELS), 0,
                  1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (PPCfsel:f32 f64:f64:$FRA, f32:f32:$FRC, f32:f32:$FRB) - Complexity = 3
              // Dst: (FSELS:f32 f64:f64:$FRA, f32:f32:$FRC, f32:f32:$FRB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FADD),// ->10736
/*10697*/   OPC_RecordChild0, // #0 = $FRA
/*10698*/   OPC_RecordChild1, // #1 = $FRB
/*10699*/   OPC_SwitchType /*3 cases */, 9,  MVT::f64,// ->10711
/*10702*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FADD), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:f64 f64:f64:$FRA, f64:f64:$FRB) - Complexity = 3
              // Dst: (FADD:f64 f64:f64:$FRA, f64:f64:$FRB)
            /*SwitchType*/ 9,  MVT::f32,// ->10722
/*10713*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FADDS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:f32 f32:f32:$FRA, f32:f32:$FRB) - Complexity = 3
              // Dst: (FADDS:f32 f32:f32:$FRA, f32:f32:$FRB)
            /*SwitchType*/ 11,  MVT::v4f32,// ->10735
/*10724*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10726*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VADDFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB) - Complexity = 3
              // Dst: (VADDFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::FDIV),// ->10765
/*10739*/   OPC_RecordChild0, // #0 = $FRA
/*10740*/   OPC_RecordChild1, // #1 = $FRB
/*10741*/   OPC_SwitchType /*2 cases */, 9,  MVT::f64,// ->10753
/*10744*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FDIV), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f64 f64:f64:$FRA, f64:f64:$FRB) - Complexity = 3
              // Dst: (FDIV:f64 f64:f64:$FRA, f64:f64:$FRB)
            /*SwitchType*/ 9,  MVT::f32,// ->10764
/*10755*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FDIVS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f32 f32:f32:$FRA, f32:f32:$FRB) - Complexity = 3
              // Dst: (FDIVS:f32 f32:f32:$FRA, f32:f32:$FRB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 63,  TARGET_VAL(ISD::FMUL),// ->10831
/*10768*/   OPC_RecordChild0, // #0 = $FRA
/*10769*/   OPC_RecordChild1, // #1 = $FRC
/*10770*/   OPC_SwitchType /*3 cases */, 9,  MVT::f64,// ->10782
/*10773*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FMUL), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f64 f64:f64:$FRA, f64:f64:$FRC) - Complexity = 3
              // Dst: (FMUL:f64 f64:f64:$FRA, f64:f64:$FRC)
            /*SwitchType*/ 9,  MVT::f32,// ->10793
/*10784*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FMULS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f32 f32:f32:$FRA, f32:f32:$FRC) - Complexity = 3
              // Dst: (FMULS:f32 f32:f32:$FRA, f32:f32:$FRC)
            /*SwitchType*/ 35,  MVT::v4f32,// ->10830
/*10795*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10797*/     OPC_EmitNode, TARGET_VAL(PPC::V_SETALLONES), 0,
                  1/*#VTs*/, MVT::v16i8, 0/*#Ops*/,  // Results = #2
/*10804*/     OPC_EmitNode, TARGET_VAL(PPC::V_SETALLONES), 0,
                  1/*#VTs*/, MVT::v16i8, 0/*#Ops*/,  // Results = #3
/*10811*/     OPC_EmitNode, TARGET_VAL(PPC::VSLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*10820*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 4, 
              // Src: (fmul:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB) - Complexity = 3
              // Dst: (VMADDFP:v4f32 ?:v4f32:$vA, ?:v4f32:$vB, (VSLW:v4i32 (V_SETALLONES:v16i8), (V_SETALLONES:v16i8)))
            0, // EndSwitchType
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FSUB),// ->10873
/*10834*/   OPC_RecordChild0, // #0 = $FRA
/*10835*/   OPC_RecordChild1, // #1 = $FRB
/*10836*/   OPC_SwitchType /*3 cases */, 9,  MVT::f64,// ->10848
/*10839*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FSUB), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f64 f64:f64:$FRA, f64:f64:$FRB) - Complexity = 3
              // Dst: (FSUB:f64 f64:f64:$FRA, f64:f64:$FRB)
            /*SwitchType*/ 9,  MVT::f32,// ->10859
/*10850*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FSUBS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f32 f32:f32:$FRA, f32:f32:$FRB) - Complexity = 3
              // Dst: (FSUBS:f32 f32:f32:$FRA, f32:f32:$FRB)
            /*SwitchType*/ 11,  MVT::v4f32,// ->10872
/*10861*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10863*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB) - Complexity = 3
              // Dst: (VSUBFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::FP_EXTEND),// ->10889
/*10876*/   OPC_RecordChild0, // #0 = $src
/*10877*/   OPC_EmitInteger, MVT::i32, PPC::F8RCRegClassID,
/*10880*/   OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
            // Src: (fextend:f64 f32:f32:$src) - Complexity = 3
            // Dst: (COPY_TO_REGCLASS:f64 ?:f32:$src, F8RC:i32)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCFID),// ->10903
/*10892*/   OPC_RecordChild0, // #0 = $frB
/*10893*/   OPC_CheckType, MVT::f64,
/*10895*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCFID), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfcfid:f64 f64:f64:$frB) - Complexity = 3
            // Dst: (FCFID:f64 f64:f64:$frB)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCTIDZ),// ->10917
/*10906*/   OPC_RecordChild0, // #0 = $frB
/*10907*/   OPC_CheckType, MVT::f64,
/*10909*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCTIDZ), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfctidz:f64 f64:f64:$frB) - Complexity = 3
            // Dst: (FCTIDZ:f64 f64:f64:$frB)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCFIDU),// ->10931
/*10920*/   OPC_RecordChild0, // #0 = $frB
/*10921*/   OPC_CheckType, MVT::f64,
/*10923*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCFIDU), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfcfidu:f64 f64:f64:$frB) - Complexity = 3
            // Dst: (FCFIDU:f64 f64:f64:$frB)
          /*SwitchOpcode*/ 9,  TARGET_VAL(PPCISD::FCFIDS),// ->10943
/*10934*/   OPC_RecordChild0, // #0 = $frB
/*10935*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCFIDS), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (PPCfcfids:f32 f64:f64:$frB) - Complexity = 3
            // Dst: (FCFIDS:f32 f64:f64:$frB)
          /*SwitchOpcode*/ 9,  TARGET_VAL(PPCISD::FCFIDUS),// ->10955
/*10946*/   OPC_RecordChild0, // #0 = $frB
/*10947*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCFIDUS), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (PPCfcfidus:f32 f64:f64:$frB) - Complexity = 3
            // Dst: (FCFIDUS:f32 f64:f64:$frB)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCTIDUZ),// ->10969
/*10958*/   OPC_RecordChild0, // #0 = $frB
/*10959*/   OPC_CheckType, MVT::f64,
/*10961*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCTIDUZ), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfctiduz:f64 f64:f64:$frB) - Complexity = 3
            // Dst: (FCTIDUZ:f64 f64:f64:$frB)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCTIWUZ),// ->10983
/*10972*/   OPC_RecordChild0, // #0 = $frB
/*10973*/   OPC_CheckType, MVT::f64,
/*10975*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCTIWUZ), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfctiwuz:f64 f64:f64:$frB) - Complexity = 3
            // Dst: (FCTIWUZ:f64 f64:f64:$frB)
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::FRINT),// ->11009
/*10986*/   OPC_RecordChild0, // #0 = $frB
/*10987*/   OPC_SwitchType /*2 cases */, 8,  MVT::f64,// ->10998
/*10990*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRINDrint), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (frint:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRINDrint:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->11008
/*11000*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRINSrint), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (frint:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRINSrint:f32 f32:f32:$frB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 13,  TARGET_VAL(PPCISD::FADDRTZ),// ->11025
/*11012*/   OPC_RecordChild0, // #0 = $FRA
/*11013*/   OPC_RecordChild1, // #1 = $FRB
/*11014*/   OPC_CheckType, MVT::f64,
/*11016*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FADDrtz), 0,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCfaddrtz:f64 f64:f64:$FRA, f64:f64:$FRB) - Complexity = 3
            // Dst: (FADDrtz:f64 f64:f64:$FRA, f64:f64:$FRB)
          /*SwitchOpcode*/ 110|128,1/*238*/,  TARGET_VAL(PPCISD::VCMP),// ->11267
/*11029*/   OPC_RecordChild0, // #0 = $vA
/*11030*/   OPC_RecordChild1, // #1 = $vB
/*11031*/   OPC_MoveChild, 2,
/*11033*/   OPC_Scope, 16, /*->11051*/ // 13 children in Scope
/*11035*/     OPC_CheckInteger, 6, 
/*11037*/     OPC_MoveParent,
/*11038*/     OPC_CheckType, MVT::v16i8,
/*11040*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11042*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, 6:i32) - Complexity = 8
              // Dst: (VCMPEQUB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11051*/   /*Scope*/ 17, /*->11069*/
/*11052*/     OPC_CheckInteger, 6|128,6/*774*/, 
/*11055*/     OPC_MoveParent,
/*11056*/     OPC_CheckType, MVT::v16i8,
/*11058*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11060*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, 774:i32) - Complexity = 8
              // Dst: (VCMPGTSB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11069*/   /*Scope*/ 17, /*->11087*/
/*11070*/     OPC_CheckInteger, 6|128,4/*518*/, 
/*11073*/     OPC_MoveParent,
/*11074*/     OPC_CheckType, MVT::v16i8,
/*11076*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11078*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, 518:i32) - Complexity = 8
              // Dst: (VCMPGTUB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11087*/   /*Scope*/ 16, /*->11104*/
/*11088*/     OPC_CheckInteger, 70, 
/*11090*/     OPC_MoveParent,
/*11091*/     OPC_CheckType, MVT::v8i16,
/*11093*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11095*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, 70:i32) - Complexity = 8
              // Dst: (VCMPEQUH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*11104*/   /*Scope*/ 17, /*->11122*/
/*11105*/     OPC_CheckInteger, 70|128,6/*838*/, 
/*11108*/     OPC_MoveParent,
/*11109*/     OPC_CheckType, MVT::v8i16,
/*11111*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11113*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, 838:i32) - Complexity = 8
              // Dst: (VCMPGTSH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*11122*/   /*Scope*/ 17, /*->11140*/
/*11123*/     OPC_CheckInteger, 70|128,4/*582*/, 
/*11126*/     OPC_MoveParent,
/*11127*/     OPC_CheckType, MVT::v8i16,
/*11129*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11131*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, 582:i32) - Complexity = 8
              // Dst: (VCMPGTUH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*11140*/   /*Scope*/ 17, /*->11158*/
/*11141*/     OPC_CheckInteger, 6|128,1/*134*/, 
/*11144*/     OPC_MoveParent,
/*11145*/     OPC_CheckType, MVT::v4i32,
/*11147*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11149*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, 134:i32) - Complexity = 8
              // Dst: (VCMPEQUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*11158*/   /*Scope*/ 17, /*->11176*/
/*11159*/     OPC_CheckInteger, 6|128,7/*902*/, 
/*11162*/     OPC_MoveParent,
/*11163*/     OPC_CheckType, MVT::v4i32,
/*11165*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11167*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, 902:i32) - Complexity = 8
              // Dst: (VCMPGTSW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*11176*/   /*Scope*/ 17, /*->11194*/
/*11177*/     OPC_CheckInteger, 6|128,5/*646*/, 
/*11180*/     OPC_MoveParent,
/*11181*/     OPC_CheckType, MVT::v4i32,
/*11183*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11185*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, 646:i32) - Complexity = 8
              // Dst: (VCMPGTUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*11194*/   /*Scope*/ 17, /*->11212*/
/*11195*/     OPC_CheckInteger, 70|128,7/*966*/, 
/*11198*/     OPC_MoveParent,
/*11199*/     OPC_CheckType, MVT::v4f32,
/*11201*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11203*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 966:i32) - Complexity = 8
              // Dst: (VCMPBFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11212*/   /*Scope*/ 17, /*->11230*/
/*11213*/     OPC_CheckInteger, 70|128,1/*198*/, 
/*11216*/     OPC_MoveParent,
/*11217*/     OPC_CheckType, MVT::v4f32,
/*11219*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11221*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 198:i32) - Complexity = 8
              // Dst: (VCMPEQFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11230*/   /*Scope*/ 17, /*->11248*/
/*11231*/     OPC_CheckInteger, 70|128,3/*454*/, 
/*11234*/     OPC_MoveParent,
/*11235*/     OPC_CheckType, MVT::v4f32,
/*11237*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11239*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 454:i32) - Complexity = 8
              // Dst: (VCMPGEFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11248*/   /*Scope*/ 17, /*->11266*/
/*11249*/     OPC_CheckInteger, 70|128,5/*710*/, 
/*11252*/     OPC_MoveParent,
/*11253*/     OPC_CheckType, MVT::v4f32,
/*11255*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11257*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 710:i32) - Complexity = 8
              // Dst: (VCMPGTFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11266*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 123|128,1/*251*/,  TARGET_VAL(PPCISD::VCMPo),// ->11522
/*11271*/   OPC_RecordChild0, // #0 = $vA
/*11272*/   OPC_RecordChild1, // #1 = $vB
/*11273*/   OPC_MoveChild, 2,
/*11275*/   OPC_Scope, 17, /*->11294*/ // 13 children in Scope
/*11277*/     OPC_CheckInteger, 6, 
/*11279*/     OPC_MoveParent,
/*11280*/     OPC_CheckType, MVT::v16i8,
/*11282*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11284*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUBo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v16i8, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, 6:i32) - Complexity = 8
              // Dst: (VCMPEQUBo:v16i8:i32 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11294*/   /*Scope*/ 18, /*->11313*/
/*11295*/     OPC_CheckInteger, 6|128,6/*774*/, 
/*11298*/     OPC_MoveParent,
/*11299*/     OPC_CheckType, MVT::v16i8,
/*11301*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11303*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSBo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v16i8, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, 774:i32) - Complexity = 8
              // Dst: (VCMPGTSBo:v16i8:i32 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11313*/   /*Scope*/ 18, /*->11332*/
/*11314*/     OPC_CheckInteger, 6|128,4/*518*/, 
/*11317*/     OPC_MoveParent,
/*11318*/     OPC_CheckType, MVT::v16i8,
/*11320*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11322*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUBo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v16i8, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, 518:i32) - Complexity = 8
              // Dst: (VCMPGTUBo:v16i8:i32 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11332*/   /*Scope*/ 17, /*->11350*/
/*11333*/     OPC_CheckInteger, 70, 
/*11335*/     OPC_MoveParent,
/*11336*/     OPC_CheckType, MVT::v8i16,
/*11338*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11340*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUHo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v8i16, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, 70:i32) - Complexity = 8
              // Dst: (VCMPEQUHo:v8i16:i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*11350*/   /*Scope*/ 18, /*->11369*/
/*11351*/     OPC_CheckInteger, 70|128,6/*838*/, 
/*11354*/     OPC_MoveParent,
/*11355*/     OPC_CheckType, MVT::v8i16,
/*11357*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11359*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSHo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v8i16, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, 838:i32) - Complexity = 8
              // Dst: (VCMPGTSHo:v8i16:i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*11369*/   /*Scope*/ 18, /*->11388*/
/*11370*/     OPC_CheckInteger, 70|128,4/*582*/, 
/*11373*/     OPC_MoveParent,
/*11374*/     OPC_CheckType, MVT::v8i16,
/*11376*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11378*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUHo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v8i16, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, 582:i32) - Complexity = 8
              // Dst: (VCMPGTUHo:v8i16:i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*11388*/   /*Scope*/ 18, /*->11407*/
/*11389*/     OPC_CheckInteger, 6|128,1/*134*/, 
/*11392*/     OPC_MoveParent,
/*11393*/     OPC_CheckType, MVT::v4i32,
/*11395*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11397*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUWo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, 134:i32) - Complexity = 8
              // Dst: (VCMPEQUWo:v4i32:i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*11407*/   /*Scope*/ 18, /*->11426*/
/*11408*/     OPC_CheckInteger, 6|128,7/*902*/, 
/*11411*/     OPC_MoveParent,
/*11412*/     OPC_CheckType, MVT::v4i32,
/*11414*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11416*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSWo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, 902:i32) - Complexity = 8
              // Dst: (VCMPGTSWo:v4i32:i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*11426*/   /*Scope*/ 18, /*->11445*/
/*11427*/     OPC_CheckInteger, 6|128,5/*646*/, 
/*11430*/     OPC_MoveParent,
/*11431*/     OPC_CheckType, MVT::v4i32,
/*11433*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11435*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUWo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, 646:i32) - Complexity = 8
              // Dst: (VCMPGTUWo:v4i32:i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*11445*/   /*Scope*/ 18, /*->11464*/
/*11446*/     OPC_CheckInteger, 70|128,7/*966*/, 
/*11449*/     OPC_MoveParent,
/*11450*/     OPC_CheckType, MVT::v4f32,
/*11452*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11454*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPBFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 966:i32) - Complexity = 8
              // Dst: (VCMPBFPo:v4f32:i32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11464*/   /*Scope*/ 18, /*->11483*/
/*11465*/     OPC_CheckInteger, 70|128,1/*198*/, 
/*11468*/     OPC_MoveParent,
/*11469*/     OPC_CheckType, MVT::v4f32,
/*11471*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11473*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 198:i32) - Complexity = 8
              // Dst: (VCMPEQFPo:v4f32:i32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11483*/   /*Scope*/ 18, /*->11502*/
/*11484*/     OPC_CheckInteger, 70|128,3/*454*/, 
/*11487*/     OPC_MoveParent,
/*11488*/     OPC_CheckType, MVT::v4f32,
/*11490*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11492*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGEFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 454:i32) - Complexity = 8
              // Dst: (VCMPGEFPo:v4f32:i32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11502*/   /*Scope*/ 18, /*->11521*/
/*11503*/     OPC_CheckInteger, 70|128,5/*710*/, 
/*11506*/     OPC_MoveParent,
/*11507*/     OPC_CheckType, MVT::v4f32,
/*11509*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11511*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 710:i32) - Complexity = 8
              // Dst: (VCMPGTFPo:v4f32:i32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11521*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 94|128,2/*350*/,  TARGET_VAL(ISD::VECTOR_SHUFFLE),// ->11876
/*11526*/   OPC_Scope, 81, /*->11609*/ // 4 children in Scope
/*11528*/     OPC_RecordNode, // #0 = $UIMM
/*11529*/     OPC_RecordChild0, // #1 = $vB
/*11530*/     OPC_MoveChild, 1,
/*11532*/     OPC_CheckOpcode, TARGET_VAL(ISD::UNDEF),
/*11535*/     OPC_MoveParent,
/*11536*/     OPC_CheckType, MVT::v16i8,
/*11538*/     OPC_Scope, 16, /*->11556*/ // 4 children in Scope
/*11540*/       OPC_CheckPredicate, 75, // Predicate_vspltb_shuffle
/*11542*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11544*/       OPC_EmitNodeXForm, 9, 0, // VSPLTB_get_imm
/*11547*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vB, (undef:v16i8))<<P:Predicate_vspltb_shuffle>><<X:VSPLTB_get_imm>>:$UIMM - Complexity = 7
                // Dst: (VSPLTB:v16i8 (VSPLTB_get_imm:i32 (vector_shuffle:v16i8 v16i8:v16i8:$vB, (undef:v16i8)):$UIMM), v16i8:v16i8:$vB)
/*11556*/     /*Scope*/ 16, /*->11573*/
/*11557*/       OPC_CheckPredicate, 76, // Predicate_vsplth_shuffle
/*11559*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11561*/       OPC_EmitNodeXForm, 10, 0, // VSPLTH_get_imm
/*11564*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vB, (undef:v16i8))<<P:Predicate_vsplth_shuffle>><<X:VSPLTH_get_imm>>:$UIMM - Complexity = 7
                // Dst: (VSPLTH:v16i8 (VSPLTH_get_imm:i32 (vector_shuffle:v16i8 v16i8:v16i8:$vB, (undef:v16i8)):$UIMM), v16i8:v16i8:$vB)
/*11573*/     /*Scope*/ 16, /*->11590*/
/*11574*/       OPC_CheckPredicate, 77, // Predicate_vspltw_shuffle
/*11576*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11578*/       OPC_EmitNodeXForm, 11, 0, // VSPLTW_get_imm
/*11581*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vB, (undef:v16i8))<<P:Predicate_vspltw_shuffle>><<X:VSPLTW_get_imm>>:$UIMM - Complexity = 7
                // Dst: (VSPLTW:v16i8 (VSPLTW_get_imm:i32 (vector_shuffle:v16i8 v16i8:v16i8:$vB, (undef:v16i8)):$UIMM), v16i8:v16i8:$vB)
/*11590*/     /*Scope*/ 17, /*->11608*/
/*11591*/       OPC_CheckPredicate, 78, // Predicate_vsldoi_unary_shuffle
/*11593*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11595*/       OPC_EmitNodeXForm, 12, 0, // VSLDOI_unary_get_imm
/*11598*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSLDOI), 0,
                    1/*#VTs*/, MVT::v16i8, 3/*#Ops*/, 1, 1, 2, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vsldoi_unary_shuffle>><<X:VSLDOI_unary_get_imm>>:$in - Complexity = 7
                // Dst: (VSLDOI:v16i8 ?:v16i8:$vA, ?:v16i8:$vA, (VSLDOI_unary_get_imm:i32 ?:v16i8:$in))
/*11608*/     0, /*End of Scope*/
/*11609*/   /*Scope*/ 123, /*->11733*/
/*11610*/     OPC_RecordChild0, // #0 = $vA
/*11611*/     OPC_MoveChild, 1,
/*11613*/     OPC_CheckOpcode, TARGET_VAL(ISD::UNDEF),
/*11616*/     OPC_MoveParent,
/*11617*/     OPC_CheckType, MVT::v16i8,
/*11619*/     OPC_Scope, 13, /*->11634*/ // 8 children in Scope
/*11621*/       OPC_CheckPredicate, 79, // Predicate_vpkuwum_unary_shuffle
/*11623*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11625*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUWUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vpkuwum_unary_shuffle>> - Complexity = 7
                // Dst: (VPKUWUM:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11634*/     /*Scope*/ 13, /*->11648*/
/*11635*/       OPC_CheckPredicate, 80, // Predicate_vpkuhum_unary_shuffle
/*11637*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11639*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUHUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vpkuhum_unary_shuffle>> - Complexity = 7
                // Dst: (VPKUHUM:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11648*/     /*Scope*/ 13, /*->11662*/
/*11649*/       OPC_CheckPredicate, 81, // Predicate_vmrglb_unary_shuffle
/*11651*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11653*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrglb_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGLB:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11662*/     /*Scope*/ 13, /*->11676*/
/*11663*/       OPC_CheckPredicate, 82, // Predicate_vmrglh_unary_shuffle
/*11665*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11667*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrglh_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGLH:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11676*/     /*Scope*/ 13, /*->11690*/
/*11677*/       OPC_CheckPredicate, 83, // Predicate_vmrglw_unary_shuffle
/*11679*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11681*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrglw_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGLW:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11690*/     /*Scope*/ 13, /*->11704*/
/*11691*/       OPC_CheckPredicate, 84, // Predicate_vmrghb_unary_shuffle
/*11693*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11695*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrghb_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGHB:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11704*/     /*Scope*/ 13, /*->11718*/
/*11705*/       OPC_CheckPredicate, 85, // Predicate_vmrghh_unary_shuffle
/*11707*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11709*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrghh_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGHH:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11718*/     /*Scope*/ 13, /*->11732*/
/*11719*/       OPC_CheckPredicate, 86, // Predicate_vmrghw_unary_shuffle
/*11721*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11723*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrghw_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGHW:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11732*/     0, /*End of Scope*/
/*11733*/   /*Scope*/ 22, /*->11756*/
/*11734*/     OPC_RecordNode, // #0 = $SH
/*11735*/     OPC_RecordChild0, // #1 = $vA
/*11736*/     OPC_RecordChild1, // #2 = $vB
/*11737*/     OPC_CheckPredicate, 87, // Predicate_vsldoi_shuffle
/*11739*/     OPC_CheckType, MVT::v16i8,
/*11741*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11743*/     OPC_EmitNodeXForm, 13, 0, // VSLDOI_get_imm
/*11746*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSLDOI), 0,
                  1/*#VTs*/, MVT::v16i8, 3/*#Ops*/, 1, 2, 3, 
              // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vsldoi_shuffle>><<X:VSLDOI_get_imm>>:$SH - Complexity = 4
              // Dst: (VSLDOI:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, (VSLDOI_get_imm:i32 (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB):$SH))
/*11756*/   /*Scope*/ 118, /*->11875*/
/*11757*/     OPC_RecordChild0, // #0 = $vA
/*11758*/     OPC_RecordChild1, // #1 = $vB
/*11759*/     OPC_CheckType, MVT::v16i8,
/*11761*/     OPC_Scope, 13, /*->11776*/ // 8 children in Scope
/*11763*/       OPC_CheckPredicate, 88, // Predicate_vmrghb_shuffle
/*11765*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11767*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vmrghb_shuffle>> - Complexity = 4
                // Dst: (VMRGHB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11776*/     /*Scope*/ 13, /*->11790*/
/*11777*/       OPC_CheckPredicate, 89, // Predicate_vmrghh_shuffle
/*11779*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11781*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vmrghh_shuffle>> - Complexity = 4
                // Dst: (VMRGHH:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11790*/     /*Scope*/ 13, /*->11804*/
/*11791*/       OPC_CheckPredicate, 90, // Predicate_vmrghw_shuffle
/*11793*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11795*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vmrghw_shuffle>> - Complexity = 4
                // Dst: (VMRGHW:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11804*/     /*Scope*/ 13, /*->11818*/
/*11805*/       OPC_CheckPredicate, 91, // Predicate_vmrglb_shuffle
/*11807*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11809*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vmrglb_shuffle>> - Complexity = 4
                // Dst: (VMRGLB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11818*/     /*Scope*/ 13, /*->11832*/
/*11819*/       OPC_CheckPredicate, 92, // Predicate_vmrglh_shuffle
/*11821*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11823*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vmrglh_shuffle>> - Complexity = 4
                // Dst: (VMRGLH:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11832*/     /*Scope*/ 13, /*->11846*/
/*11833*/       OPC_CheckPredicate, 93, // Predicate_vmrglw_shuffle
/*11835*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11837*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vmrglw_shuffle>> - Complexity = 4
                // Dst: (VMRGLW:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11846*/     /*Scope*/ 13, /*->11860*/
/*11847*/       OPC_CheckPredicate, 94, // Predicate_vpkuhum_shuffle
/*11849*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11851*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUHUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vpkuhum_shuffle>> - Complexity = 4
                // Dst: (VPKUHUM:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11860*/     /*Scope*/ 13, /*->11874*/
/*11861*/       OPC_CheckPredicate, 95, // Predicate_vpkuwum_shuffle
/*11863*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11865*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUWUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vpkuwum_shuffle>> - Complexity = 4
                // Dst: (VPKUWUM:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11874*/     0, /*End of Scope*/
/*11875*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 17,  TARGET_VAL(ISD::CALLSEQ_START),// ->11896
/*11879*/   OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*11880*/   OPC_RecordChild1, // #1 = $amt
/*11881*/   OPC_MoveChild, 1,
/*11883*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*11886*/   OPC_MoveParent,
/*11887*/   OPC_EmitMergeInputChains1_0,
/*11888*/   OPC_MorphNodeTo, TARGET_VAL(PPC::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN:i32 (timm:i32):$amt)
          /*SwitchOpcode*/ 92,  TARGET_VAL(PPCISD::CALL),// ->11991
/*11899*/   OPC_RecordNode,   // #0 = 'PPCcall' chained node
/*11900*/   OPC_CaptureGlueInput,
/*11901*/   OPC_RecordChild1, // #1 = $func
/*11902*/   OPC_MoveChild, 1,
/*11904*/   OPC_SwitchOpcode /*3 cases */, 28,  TARGET_VAL(ISD::Constant),// ->11936
/*11908*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->11922
/*11911*/       OPC_MoveParent,
/*11912*/       OPC_EmitMergeInputChains1_0,
/*11913*/       OPC_EmitConvertToTarget, 1,
/*11915*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BLA), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (PPCcall (imm:i32):$func) - Complexity = 6
                // Dst: (BLA (imm:i32):$func)
              /*SwitchType*/ 11,  MVT::i64,// ->11935
/*11924*/       OPC_MoveParent,
/*11925*/       OPC_EmitMergeInputChains1_0,
/*11926*/       OPC_EmitConvertToTarget, 1,
/*11928*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BLA8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (PPCcall (imm:i64):$func) - Complexity = 6
                // Dst: (BLA8 (imm:i64):$func)
              0, // EndSwitchType
            /*SwitchOpcode*/ 24,  TARGET_VAL(ISD::TargetGlobalAddress),// ->11963
/*11939*/     OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->11951
/*11942*/       OPC_MoveParent,
/*11943*/       OPC_EmitMergeInputChains1_0,
/*11944*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (PPCcall (tglobaladdr:i32):$dst) - Complexity = 6
                // Dst: (BL (tglobaladdr:i32):$dst)
              /*SwitchType*/ 9,  MVT::i64,// ->11962
/*11953*/       OPC_MoveParent,
/*11954*/       OPC_EmitMergeInputChains1_0,
/*11955*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (PPCcall (tglobaladdr:i64):$dst) - Complexity = 6
                // Dst: (BL8 (tglobaladdr:i64):$dst)
              0, // EndSwitchType
            /*SwitchOpcode*/ 24,  TARGET_VAL(ISD::TargetExternalSymbol),// ->11990
/*11966*/     OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->11978
/*11969*/       OPC_MoveParent,
/*11970*/       OPC_EmitMergeInputChains1_0,
/*11971*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (PPCcall (texternalsym:i32):$dst) - Complexity = 6
                // Dst: (BL (texternalsym:i32):$dst)
              /*SwitchType*/ 9,  MVT::i64,// ->11989
/*11980*/       OPC_MoveParent,
/*11981*/       OPC_EmitMergeInputChains1_0,
/*11982*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (PPCcall (texternalsym:i64):$dst) - Complexity = 6
                // Dst: (BL8 (texternalsym:i64):$dst)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 20,  TARGET_VAL(PPCISD::SC),// ->12014
/*11994*/   OPC_RecordNode,   // #0 = 'PPCsc' chained node
/*11995*/   OPC_RecordChild1, // #1 = $lev
/*11996*/   OPC_MoveChild, 1,
/*11998*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12001*/   OPC_CheckType, MVT::i32,
/*12003*/   OPC_MoveParent,
/*12004*/   OPC_EmitMergeInputChains1_0,
/*12005*/   OPC_EmitConvertToTarget, 1,
/*12007*/   OPC_MorphNodeTo, TARGET_VAL(PPC::SC), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 2, 
            // Src: (PPCsc (imm:i32):$lev) - Complexity = 6
            // Dst: (SC (imm:i32):$lev)
          /*SwitchOpcode*/ 51,  TARGET_VAL(PPCISD::CALL_NOP),// ->12068
/*12017*/   OPC_RecordNode,   // #0 = 'PPCcall_nop' chained node
/*12018*/   OPC_CaptureGlueInput,
/*12019*/   OPC_RecordChild1, // #1 = $func
/*12020*/   OPC_MoveChild, 1,
/*12022*/   OPC_SwitchOpcode /*3 cases */, 13,  TARGET_VAL(ISD::Constant),// ->12039
/*12026*/     OPC_CheckType, MVT::i64,
/*12028*/     OPC_MoveParent,
/*12029*/     OPC_EmitMergeInputChains1_0,
/*12030*/     OPC_EmitConvertToTarget, 1,
/*12032*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BLA8_NOP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 2, 
              // Src: (PPCcall_nop (imm:i64):$func) - Complexity = 6
              // Dst: (BLA8_NOP (imm:i64):$func)
            /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetGlobalAddress),// ->12053
/*12042*/     OPC_CheckType, MVT::i64,
/*12044*/     OPC_MoveParent,
/*12045*/     OPC_EmitMergeInputChains1_0,
/*12046*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_NOP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (PPCcall_nop (tglobaladdr:i64):$dst) - Complexity = 6
              // Dst: (BL8_NOP (tglobaladdr:i64):$dst)
            /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetExternalSymbol),// ->12067
/*12056*/     OPC_CheckType, MVT::i64,
/*12058*/     OPC_MoveParent,
/*12059*/     OPC_EmitMergeInputChains1_0,
/*12060*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_NOP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (PPCcall_nop (texternalsym:i64):$dst) - Complexity = 6
              // Dst: (BL8_NOP (texternalsym:i64):$dst)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 5|128,1/*133*/,  TARGET_VAL(ISD::BUILD_VECTOR),// ->12205
/*12072*/   OPC_Scope, 54, /*->12128*/ // 3 children in Scope
/*12074*/     OPC_RecordNode, // #0 = $SIMM
/*12075*/     OPC_SwitchType /*3 cases */, 15,  MVT::v16i8,// ->12093
/*12078*/       OPC_CheckPredicate, 96, // Predicate_vecspltisb
/*12080*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12082*/       OPC_EmitNodeXForm, 14, 0, // VSPLTISB_get_imm
/*12085*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTISB), 0,
                    1/*#VTs*/, MVT::v16i8, 1/*#Ops*/, 1, 
                // Src: (build_vector:v16i8)<<P:Predicate_vecspltisb>><<X:VSPLTISB_get_imm>>:$SIMM - Complexity = 4
                // Dst: (VSPLTISB:v16i8 (VSPLTISB_get_imm:i32 (build_vector:v16i8):$SIMM))
              /*SwitchType*/ 15,  MVT::v8i16,// ->12110
/*12095*/       OPC_CheckPredicate, 97, // Predicate_vecspltish
/*12097*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12099*/       OPC_EmitNodeXForm, 15, 0, // VSPLTISH_get_imm
/*12102*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTISH), 0,
                    1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 1, 
                // Src: (build_vector:v8i16)<<P:Predicate_vecspltish>><<X:VSPLTISH_get_imm>>:$SIMM - Complexity = 4
                // Dst: (VSPLTISH:v8i16 (VSPLTISH_get_imm:i32 (build_vector:v8i16):$SIMM))
              /*SwitchType*/ 15,  MVT::v4i32,// ->12127
/*12112*/       OPC_CheckPredicate, 98, // Predicate_vecspltisw
/*12114*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12116*/       OPC_EmitNodeXForm, 16, 0, // VSPLTISW_get_imm
/*12119*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTISW), 0,
                    1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 1, 
                // Src: (build_vector:v4i32)<<P:Predicate_vecspltisw>><<X:VSPLTISW_get_imm>>:$SIMM - Complexity = 4
                // Dst: (VSPLTISW:v4i32 (VSPLTISW_get_imm:i32 (build_vector:v4i32):$SIMM))
              0, // EndSwitchType
/*12128*/   /*Scope*/ 37, /*->12166*/
/*12129*/     OPC_CheckPredicate, 99, // Predicate_immAllZerosV
/*12131*/     OPC_SwitchType /*3 cases */, 9,  MVT::v16i8,// ->12143
/*12134*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12136*/       OPC_MorphNodeTo, TARGET_VAL(PPC::V_SET0B), 0,
                    1/*#VTs*/, MVT::v16i8, 0/*#Ops*/, 
                // Src: (build_vector:v16i8)<<P:Predicate_immAllZerosV>> - Complexity = 4
                // Dst: (V_SET0B:v16i8)
              /*SwitchType*/ 9,  MVT::v8i16,// ->12154
/*12145*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12147*/       OPC_MorphNodeTo, TARGET_VAL(PPC::V_SET0H), 0,
                    1/*#VTs*/, MVT::v8i16, 0/*#Ops*/, 
                // Src: (build_vector:v8i16)<<P:Predicate_immAllZerosV>> - Complexity = 4
                // Dst: (V_SET0H:v8i16)
              /*SwitchType*/ 9,  MVT::v4i32,// ->12165
/*12156*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12158*/       OPC_MorphNodeTo, TARGET_VAL(PPC::V_SET0), 0,
                    1/*#VTs*/, MVT::v4i32, 0/*#Ops*/, 
                // Src: (build_vector:v4i32)<<P:Predicate_immAllZerosV>> - Complexity = 4
                // Dst: (V_SET0:v4i32)
              0, // EndSwitchType
/*12166*/   /*Scope*/ 37, /*->12204*/
/*12167*/     OPC_CheckPredicate, 71, // Predicate_immAllOnesV
/*12169*/     OPC_SwitchType /*3 cases */, 9,  MVT::v16i8,// ->12181
/*12172*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12174*/       OPC_MorphNodeTo, TARGET_VAL(PPC::V_SETALLONESB), 0,
                    1/*#VTs*/, MVT::v16i8, 0/*#Ops*/, 
                // Src: (build_vector:v16i8)<<P:Predicate_immAllOnesV>> - Complexity = 4
                // Dst: (V_SETALLONESB:v16i8)
              /*SwitchType*/ 9,  MVT::v8i16,// ->12192
/*12183*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12185*/       OPC_MorphNodeTo, TARGET_VAL(PPC::V_SETALLONESH), 0,
                    1/*#VTs*/, MVT::v8i16, 0/*#Ops*/, 
                // Src: (build_vector:v8i16)<<P:Predicate_immAllOnesV>> - Complexity = 4
                // Dst: (V_SETALLONESH:v8i16)
              /*SwitchType*/ 9,  MVT::v4i32,// ->12203
/*12194*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12196*/       OPC_MorphNodeTo, TARGET_VAL(PPC::V_SETALLONES), 0,
                    1/*#VTs*/, MVT::v4i32, 0/*#Ops*/, 
                // Src: (build_vector:v4i32)<<P:Predicate_immAllOnesV>> - Complexity = 4
                // Dst: (V_SETALLONES:v4i32)
              0, // EndSwitchType
/*12204*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 107,  TARGET_VAL(ISD::BITCAST),// ->12315
/*12208*/   OPC_RecordChild0, // #0 = $src
/*12209*/   OPC_Scope, 25, /*->12236*/ // 4 children in Scope
/*12211*/     OPC_CheckChild0Type, MVT::v8i16,
/*12213*/     OPC_SwitchType /*3 cases */, 5,  MVT::v16i8,// ->12221
/*12216*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12218*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v16i8 VRRC:v8i16:$src) - Complexity = 3
                // Dst: VRRC:v16i8:$src
              /*SwitchType*/ 5,  MVT::v4i32,// ->12228
/*12223*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12225*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VRRC:v8i16:$src) - Complexity = 3
                // Dst: VRRC:v4i32:$src
              /*SwitchType*/ 5,  MVT::v4f32,// ->12235
/*12230*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12232*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VRRC:v8i16:$src) - Complexity = 3
                // Dst: VRRC:v4f32:$src
              0, // EndSwitchType
/*12236*/   /*Scope*/ 25, /*->12262*/
/*12237*/     OPC_CheckChild0Type, MVT::v4i32,
/*12239*/     OPC_SwitchType /*3 cases */, 5,  MVT::v16i8,// ->12247
/*12242*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12244*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v16i8 VRRC:v4i32:$src) - Complexity = 3
                // Dst: VRRC:v16i8:$src
              /*SwitchType*/ 5,  MVT::v8i16,// ->12254
/*12249*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12251*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i16 VRRC:v4i32:$src) - Complexity = 3
                // Dst: VRRC:v8i16:$src
              /*SwitchType*/ 5,  MVT::v4f32,// ->12261
/*12256*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12258*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VRRC:v4i32:$src) - Complexity = 3
                // Dst: VRRC:v4f32:$src
              0, // EndSwitchType
/*12262*/   /*Scope*/ 25, /*->12288*/
/*12263*/     OPC_CheckChild0Type, MVT::v4f32,
/*12265*/     OPC_SwitchType /*3 cases */, 5,  MVT::v16i8,// ->12273
/*12268*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12270*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v16i8 VRRC:v4f32:$src) - Complexity = 3
                // Dst: VRRC:v16i8:$src
              /*SwitchType*/ 5,  MVT::v8i16,// ->12280
/*12275*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12277*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i16 VRRC:v4f32:$src) - Complexity = 3
                // Dst: VRRC:v8i16:$src
              /*SwitchType*/ 5,  MVT::v4i32,// ->12287
/*12282*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12284*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VRRC:v4f32:$src) - Complexity = 3
                // Dst: VRRC:v4i32:$src
              0, // EndSwitchType
/*12288*/   /*Scope*/ 25, /*->12314*/
/*12289*/     OPC_CheckChild0Type, MVT::v16i8,
/*12291*/     OPC_SwitchType /*3 cases */, 5,  MVT::v8i16,// ->12299
/*12294*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12296*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i16 VRRC:v16i8:$src) - Complexity = 3
                // Dst: VRRC:v8i16:$src
              /*SwitchType*/ 5,  MVT::v4i32,// ->12306
/*12301*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12303*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VRRC:v16i8:$src) - Complexity = 3
                // Dst: VRRC:v4i32:$src
              /*SwitchType*/ 5,  MVT::v4f32,// ->12313
/*12308*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12310*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VRRC:v16i8:$src) - Complexity = 3
                // Dst: VRRC:v4f32:$src
              0, // EndSwitchType
/*12314*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 9,  TARGET_VAL(PPCISD::RET_FLAG),// ->12327
/*12318*/   OPC_RecordNode,   // #0 = 'retflag' chained node
/*12319*/   OPC_CaptureGlueInput,
/*12320*/   OPC_EmitMergeInputChains1_0,
/*12321*/   OPC_MorphNodeTo, TARGET_VAL(PPC::BLR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (retflag) - Complexity = 3
            // Dst: (BLR)
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::BR),// ->12346
/*12330*/   OPC_RecordNode,   // #0 = 'br' chained node
/*12331*/   OPC_RecordChild1, // #1 = $dst
/*12332*/   OPC_MoveChild, 1,
/*12334*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*12337*/   OPC_MoveParent,
/*12338*/   OPC_EmitMergeInputChains1_0,
/*12339*/   OPC_MorphNodeTo, TARGET_VAL(PPC::B), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (br (bb:Other):$dst) - Complexity = 3
            // Dst: (B (bb:Other):$dst)
          /*SwitchOpcode*/ 24,  TARGET_VAL(PPCISD::BCTRL),// ->12373
/*12349*/   OPC_RecordNode,   // #0 = 'PPCbctrl' chained node
/*12350*/   OPC_CaptureGlueInput,
/*12351*/   OPC_Scope, 9, /*->12362*/ // 2 children in Scope
/*12353*/     OPC_CheckPatternPredicate, 1, // (!PPCSubTarget.isPPC64())
/*12355*/     OPC_EmitMergeInputChains1_0,
/*12356*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BCTRL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic0,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (PPCbctrl) - Complexity = 3
              // Dst: (BCTRL)
/*12362*/   /*Scope*/ 9, /*->12372*/
/*12363*/     OPC_CheckPatternPredicate, 2, // (PPCSubTarget.isPPC64())
/*12365*/     OPC_EmitMergeInputChains1_0,
/*12366*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BCTRL8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic0,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (PPCbctrl) - Complexity = 3
              // Dst: (BCTRL8)
/*12372*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 8,  TARGET_VAL(ISD::TRAP),// ->12384
/*12376*/   OPC_RecordNode,   // #0 = 'trap' chained node
/*12377*/   OPC_EmitMergeInputChains1_0,
/*12378*/   OPC_MorphNodeTo, TARGET_VAL(PPC::TRAP), 0|OPFL_Chain,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (trap) - Complexity = 3
            // Dst: (TRAP)
          /*SwitchOpcode*/ 10,  TARGET_VAL(PPCISD::CR6SET),// ->12397
/*12387*/   OPC_RecordNode,   // #0 = 'PPCcr6set' chained node
/*12388*/   OPC_CaptureGlueInput,
/*12389*/   OPC_EmitMergeInputChains1_0,
/*12390*/   OPC_MorphNodeTo, TARGET_VAL(PPC::CR6SET), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
            // Src: (PPCcr6set) - Complexity = 3
            // Dst: (CR6SET:i32)
          /*SwitchOpcode*/ 10,  TARGET_VAL(PPCISD::CR6UNSET),// ->12410
/*12400*/   OPC_RecordNode,   // #0 = 'PPCcr6unset' chained node
/*12401*/   OPC_CaptureGlueInput,
/*12402*/   OPC_EmitMergeInputChains1_0,
/*12403*/   OPC_MorphNodeTo, TARGET_VAL(PPC::CR6UNSET), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
            // Src: (PPCcr6unset) - Complexity = 3
            // Dst: (CR6UNSET:i32)
          /*SwitchOpcode*/ 29,  TARGET_VAL(PPCISD::MTCTR),// ->12442
/*12413*/   OPC_RecordNode,   // #0 = 'PPCmtctr' chained node
/*12414*/   OPC_CaptureGlueInput,
/*12415*/   OPC_RecordChild1, // #1 = $rS
/*12416*/   OPC_Scope, 11, /*->12429*/ // 2 children in Scope
/*12418*/     OPC_CheckChild1Type, MVT::i32,
/*12420*/     OPC_EmitMergeInputChains1_0,
/*12421*/     OPC_MorphNodeTo, TARGET_VAL(PPC::MTCTR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (PPCmtctr i32:i32:$rS) - Complexity = 3
              // Dst: (MTCTR:i32 i32:i32:$rS)
/*12429*/   /*Scope*/ 11, /*->12441*/
/*12430*/     OPC_CheckChild1Type, MVT::i64,
/*12432*/     OPC_EmitMergeInputChains1_0,
/*12433*/     OPC_MorphNodeTo, TARGET_VAL(PPC::MTCTR8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (PPCmtctr i64:i64:$rS) - Complexity = 3
              // Dst: (MTCTR8:i64 i64:i64:$rS)
/*12441*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 17,  TARGET_VAL(PPCISD::VPERM),// ->12462
/*12445*/   OPC_RecordChild0, // #0 = $vA
/*12446*/   OPC_RecordChild1, // #1 = $vB
/*12447*/   OPC_RecordChild2, // #2 = $vC
/*12448*/   OPC_CheckType, MVT::v16i8,
/*12450*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12452*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VPERM), 0,
                1/*#VTs*/, MVT::v16i8, 3/*#Ops*/, 0, 1, 2, 
            // Src: (PPCvperm:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, v16i8:v16i8:$vC) - Complexity = 3
            // Dst: (VPERM:v16i8 ?:v16i8:$vA, ?:v16i8:$vB, ?:v16i8:$vC)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::FP_TO_SINT),// ->12480
/*12465*/   OPC_RecordChild0, // #0 = $vA
/*12466*/   OPC_CheckChild0Type, MVT::v4f32,
/*12468*/   OPC_CheckType, MVT::v4i32,
/*12470*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12472*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VCTSXS_0), 0,
                1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
            // Src: (fp_to_sint:v4i32 v4f32:v4f32:$vA) - Complexity = 3
            // Dst: (VCTSXS_0:v4i32 ?:v4f32:$vA)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::FP_TO_UINT),// ->12498
/*12483*/   OPC_RecordChild0, // #0 = $vA
/*12484*/   OPC_CheckChild0Type, MVT::v4f32,
/*12486*/   OPC_CheckType, MVT::v4i32,
/*12488*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12490*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VCTUXS_0), 0,
                1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
            // Src: (fp_to_uint:v4i32 v4f32:v4f32:$vA) - Complexity = 3
            // Dst: (VCTUXS_0:v4i32 ?:v4f32:$vA)
          /*SwitchOpcode*/ 17,  TARGET_VAL(PPCISD::VMADDFP),// ->12518
/*12501*/   OPC_RecordChild0, // #0 = $A
/*12502*/   OPC_RecordChild1, // #1 = $B
/*12503*/   OPC_RecordChild2, // #2 = $C
/*12504*/   OPC_CheckType, MVT::v4f32,
/*12506*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12508*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
            // Src: (PPCvmaddfp:v4f32 v4f32:v4f32:$A, v4f32:v4f32:$B, v4f32:v4f32:$C) - Complexity = 3
            // Dst: (VMADDFP:v4f32 ?:v4f32:$A, ?:v4f32:$B, ?:v4f32:$C)
          /*SwitchOpcode*/ 17,  TARGET_VAL(PPCISD::VNMSUBFP),// ->12538
/*12521*/   OPC_RecordChild0, // #0 = $A
/*12522*/   OPC_RecordChild1, // #1 = $B
/*12523*/   OPC_RecordChild2, // #2 = $C
/*12524*/   OPC_CheckType, MVT::v4f32,
/*12526*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12528*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VNMSUBFP), 0,
                1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
            // Src: (PPCvnmsubfp:v4f32 v4f32:v4f32:$A, v4f32:v4f32:$B, v4f32:v4f32:$C) - Complexity = 3
            // Dst: (VNMSUBFP:v4f32 ?:v4f32:$A, ?:v4f32:$B, ?:v4f32:$C)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::SINT_TO_FP),// ->12556
/*12541*/   OPC_RecordChild0, // #0 = $vA
/*12542*/   OPC_CheckChild0Type, MVT::v4i32,
/*12544*/   OPC_CheckType, MVT::v4f32,
/*12546*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12548*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VCFSX_0), 0,
                1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
            // Src: (sint_to_fp:v4f32 v4i32:v4i32:$vA) - Complexity = 3
            // Dst: (VCFSX_0:v4f32 ?:v4i32:$vA)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::UINT_TO_FP),// ->12574
/*12559*/   OPC_RecordChild0, // #0 = $vA
/*12560*/   OPC_CheckChild0Type, MVT::v4i32,
/*12562*/   OPC_CheckType, MVT::v4f32,
/*12564*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12566*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VCFUX_0), 0,
                1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
            // Src: (uint_to_fp:v4f32 v4i32:v4i32:$vA) - Complexity = 3
            // Dst: (VCFUX_0:v4f32 ?:v4i32:$vA)
          /*SwitchOpcode*/ 13,  TARGET_VAL(PPCISD::LOAD_TOC),// ->12590
/*12577*/   OPC_RecordNode,   // #0 = 'PPCload_toc' chained node
/*12578*/   OPC_CaptureGlueInput,
/*12579*/   OPC_RecordChild1, // #1 = $reg
/*12580*/   OPC_CheckChild1Type, MVT::i64,
/*12582*/   OPC_EmitMergeInputChains1_0,
/*12583*/   OPC_MorphNodeTo, TARGET_VAL(PPC::LDinto_toc), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (PPCload_toc i64:i64:$reg) - Complexity = 3
            // Dst: (LDinto_toc i64:i64:$reg)
          /*SwitchOpcode*/ 9,  TARGET_VAL(PPCISD::TOC_RESTORE),// ->12602
/*12593*/   OPC_RecordNode,   // #0 = 'PPCtoc_restore' chained node
/*12594*/   OPC_CaptureGlueInput,
/*12595*/   OPC_EmitMergeInputChains1_0,
/*12596*/   OPC_MorphNodeTo, TARGET_VAL(PPC::LDtoc_restore), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (PPCtoc_restore) - Complexity = 3
            // Dst: (LDtoc_restore)
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 12604 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 118
  // #OPC_RecordNode                     = 46
  // #OPC_RecordChild                    = 537
  // #OPC_RecordMemRef                   = 11
  // #OPC_CaptureGlueInput               = 14
  // #OPC_MoveChild                      = 156
  // #OPC_MoveParent                     = 378
  // #OPC_CheckSame                      = 0
  // #OPC_CheckPatternPredicate          = 249
  // #OPC_CheckPredicate                 = 202
  // #OPC_CheckOpcode                    = 93
  // #OPC_SwitchOpcode                   = 16
  // #OPC_CheckType                      = 182
  // #OPC_SwitchType                     = 98
  // #OPC_CheckChildType                 = 57
  // #OPC_CheckInteger                   = 198
  // #OPC_CheckCondCode                  = 0
  // #OPC_CheckValueType                 = 9
  // #OPC_CheckComplexPat                = 150
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 27
  // #OPC_EmitStringInteger              = 6
  // #OPC_EmitRegister                   = 0
  // #OPC_EmitConvertToTarget            = 76
  // #OPC_EmitMergeInputChains           = 206
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 12
  // #OPC_EmitNodeXForm                  = 38
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 12
  // #OPC_MorphNodeTo                    = 649

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

virtual bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (PPCSubTarget.hasAltivec());
  case 1: return (!PPCSubTarget.isPPC64());
  case 2: return (PPCSubTarget.isPPC64());
  }
}

virtual bool CheckNodePredicate(SDNode *Node,
                                unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { // Predicate_imm32SExt16
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();

  // imm32SExt16 predicate - True if the i32 immediate fits in a 16-bit
  // sign extended field.  Used by instructions like 'addi'.
  return (int32_t)Imm == (short)Imm;

  }
  case 1: { // Predicate_imm16ShiftedSExt
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // imm16ShiftedSExt predicate - True if only bits in the top 16-bits of the
  // immediate are set.  Used by instructions like 'addis'.  Identical to 
  // imm16ShiftedZExt in 32-bit mode.
  if (N->getZExtValue() & 0xFFFF) return false;
  if (N->getValueType(0) == MVT::i32)
    return true;
  // For 64-bit, make sure it is sext right.
  return N->getZExtValue() == (uint64_t)(int)N->getZExtValue();

  }
  case 2: { // Predicate_imm64SExt16
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();

  // imm64SExt16 predicate - True if the i64 immediate fits in a 16-bit
  // sign extended field.  Used by instructions like 'addi'.
  return (int64_t)Imm == (short)Imm;

  }
  case 3: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 4: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 5: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 6: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 7: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 8: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 9: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 10: { // Predicate_zextloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 11: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 12: { // Predicate_extloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 13: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 14: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 15: { // Predicate_sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 16: { // Predicate_aligned4sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAlignment() >= 4;

  }
  case 17: { // Predicate_zextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 18: { // Predicate_aligned4load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAlignment() >= 4;

  }
  case 19: { // Predicate_extloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 20: { // Predicate_unaligned4sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAlignment() < 4;

  }
  case 21: { // Predicate_unaligned4load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAlignment() < 4;

  }
  case 22: { // Predicate_extloadf32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::f32;

  }
  case 23: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 24: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 25: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 26: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 27: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 28: { // Predicate_itruncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 29: { // Predicate_pre_truncst
    SDNode *N = Node;

  ISD::MemIndexedMode AM = cast<StoreSDNode>(N)->getAddressingMode();
  return AM == ISD::PRE_INC || AM == ISD::PRE_DEC;

  }
  case 30: { // Predicate_pre_truncsti8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 31: { // Predicate_pre_truncsti16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 32: { // Predicate_istore
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 33: { // Predicate_pre_store
    SDNode *N = Node;

  ISD::MemIndexedMode AM = cast<StoreSDNode>(N)->getAddressingMode();
  return AM == ISD::PRE_INC || AM == ISD::PRE_DEC;

  }
  case 34: { // Predicate_pre_truncsti32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 35: { // Predicate_aligned4pre_store
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAlignment() >= 4;

  }
  case 36: { // Predicate_truncstorei32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 37: { // Predicate_aligned4store
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAlignment() >= 4;

  }
  case 38: { // Predicate_unaligned4store
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAlignment() < 4;

  }
  case 39: { // Predicate_atomic_load_add_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 40: { // Predicate_atomic_load_add_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 41: { // Predicate_atomic_load_add_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 42: { // Predicate_atomic_load_add_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 43: { // Predicate_atomic_load_sub_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 44: { // Predicate_atomic_load_sub_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 45: { // Predicate_atomic_load_sub_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 46: { // Predicate_atomic_load_sub_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 47: { // Predicate_atomic_load_and_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 48: { // Predicate_atomic_load_and_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 49: { // Predicate_atomic_load_and_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 50: { // Predicate_atomic_load_and_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 51: { // Predicate_atomic_load_or_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 52: { // Predicate_atomic_load_or_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 53: { // Predicate_atomic_load_or_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 54: { // Predicate_atomic_load_or_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 55: { // Predicate_atomic_load_xor_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 56: { // Predicate_atomic_load_xor_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 57: { // Predicate_atomic_load_xor_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 58: { // Predicate_atomic_load_xor_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 59: { // Predicate_atomic_load_nand_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 60: { // Predicate_atomic_load_nand_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 61: { // Predicate_atomic_load_nand_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 62: { // Predicate_atomic_load_nand_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 63: { // Predicate_atomic_cmp_swap_8
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 64: { // Predicate_atomic_cmp_swap_16
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 65: { // Predicate_atomic_cmp_swap_32
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 66: { // Predicate_atomic_cmp_swap_64
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;

  }
  case 67: { // Predicate_atomic_swap_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 68: { // Predicate_atomic_swap_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 69: { // Predicate_atomic_swap_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 70: { // Predicate_atomic_swap_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 71: { // Predicate_immAllOnesV
    SDNode *N = Node;

  return ISD::isBuildVectorAllOnes(N);

  }
  case 72: { // Predicate_immZExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // immZExt16 predicate - True if the immediate fits in a 16-bit zero extended
  // field.  Used by instructions like 'ori'.
  return (uint64_t)N->getZExtValue() == (unsigned short)N->getZExtValue();

  }
  case 73: { // Predicate_imm16ShiftedZExt
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // imm16ShiftedZExt predicate - True if only bits in the top 16-bits of the
  // immediate are set.  Used by instructions like 'xoris'.
  return (N->getZExtValue() & ~uint64_t(0xFFFF0000)) == 0;

  }
  case 74: { // Predicate_maskimm32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // maskImm predicate - True if immediate is a run of ones.
  unsigned mb, me;
  if (N->getValueType(0) == MVT::i32)
    return isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  else
    return false;

  }
  case 75: { // Predicate_vspltb_shuffle
    SDNode *N = Node;

  return PPC::isSplatShuffleMask(cast<ShuffleVectorSDNode>(N), 1);

  }
  case 76: { // Predicate_vsplth_shuffle
    SDNode *N = Node;

  return PPC::isSplatShuffleMask(cast<ShuffleVectorSDNode>(N), 2);

  }
  case 77: { // Predicate_vspltw_shuffle
    SDNode *N = Node;

  return PPC::isSplatShuffleMask(cast<ShuffleVectorSDNode>(N), 4);

  }
  case 78: { // Predicate_vsldoi_unary_shuffle
    SDNode *N = Node;

  return PPC::isVSLDOIShuffleMask(N, true) != -1;

  }
  case 79: { // Predicate_vpkuwum_unary_shuffle
    SDNode *N = Node;

  return PPC::isVPKUWUMShuffleMask(cast<ShuffleVectorSDNode>(N), true);

  }
  case 80: { // Predicate_vpkuhum_unary_shuffle
    SDNode *N = Node;

  return PPC::isVPKUHUMShuffleMask(cast<ShuffleVectorSDNode>(N), true);

  }
  case 81: { // Predicate_vmrglb_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 1, true);

  }
  case 82: { // Predicate_vmrglh_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 2, true);

  }
  case 83: { // Predicate_vmrglw_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 4, true);

  }
  case 84: { // Predicate_vmrghb_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 1, true);

  }
  case 85: { // Predicate_vmrghh_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 2, true);

  }
  case 86: { // Predicate_vmrghw_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 4, true);

  }
  case 87: { // Predicate_vsldoi_shuffle
    SDNode *N = Node;

  return PPC::isVSLDOIShuffleMask(N, false) != -1;

  }
  case 88: { // Predicate_vmrghb_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 1, false);

  }
  case 89: { // Predicate_vmrghh_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 2, false);

  }
  case 90: { // Predicate_vmrghw_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 4, false);

  }
  case 91: { // Predicate_vmrglb_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 1, false);

  }
  case 92: { // Predicate_vmrglh_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 2, false);

  }
  case 93: { // Predicate_vmrglw_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 4, false);

  }
  case 94: { // Predicate_vpkuhum_shuffle
    SDNode *N = Node;

  return PPC::isVPKUHUMShuffleMask(cast<ShuffleVectorSDNode>(N), false);

  }
  case 95: { // Predicate_vpkuwum_shuffle
    SDNode *N = Node;

  return PPC::isVPKUWUMShuffleMask(cast<ShuffleVectorSDNode>(N), false);

  }
  case 96: { // Predicate_vecspltisb
    SDNode *N = Node;

  return PPC::get_VSPLTI_elt(N, 1, *CurDAG).getNode() != 0;

  }
  case 97: { // Predicate_vecspltish
    SDNode *N = Node;

  return PPC::get_VSPLTI_elt(N, 2, *CurDAG).getNode() != 0;

  }
  case 98: { // Predicate_vecspltisw
    SDNode *N = Node;

  return PPC::get_VSPLTI_elt(N, 4, *CurDAG).getNode() != 0;

  }
  case 99: { // Predicate_immAllZerosV
    SDNode *N = Node;

  return ISD::isBuildVectorAllZeros(N);

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
    return SelectAddrIdxOnly(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
    return SelectAddrImm(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 2:
    Result.resize(NextRes+2);
    return SelectAddrIdx(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 3:
    Result.resize(NextRes+2);
    return SelectAddrImmX4(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 4:
    Result.resize(NextRes+1);
    return SelectAddrImmOffs(N, Result[NextRes+0].first);
  case 5:
    Result.resize(NextRes+1);
    return SelectAddr(N, Result[NextRes+0].first);
  }
}

virtual SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // HI16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: shift the immediate value down into the low bits.
  return getI32Imm((unsigned)N->getZExtValue() >> 16);

  }
  case 1: {  // LO16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the low 16 bits.
  return getI32Imm((unsigned short)N->getZExtValue());

  }
  case 2: {  // HA16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: shift the immediate value down into the low bits.
  signed int Val = N->getZExtValue();
  return getI32Imm((Val - (signed short)Val) >> 16);

  }
  case 3: {  // MB
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the start bit of a mask
  unsigned mb = 0, me;
  (void)isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  return getI32Imm(mb);

  }
  case 4: {  // ME
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the end bit of a mask
  unsigned mb, me = 0;
  (void)isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  return getI32Imm(me);

  }
  case 5: {  // SHL32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 31 - imm
  return getI32Imm(31 - N->getZExtValue());

  }
  case 6: {  // SHL64
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 63 - imm
  return getI32Imm(63 - N->getZExtValue());

  }
  case 7: {  // SRL32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 32 - imm
  return N->getZExtValue() ? getI32Imm(32 - N->getZExtValue()) : getI32Imm(0);

  }
  case 8: {  // SRL64
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 64 - imm
  return N->getZExtValue() ? getI32Imm(64 - N->getZExtValue()) : getI32Imm(0);

  }
  case 9: {  // VSPLTB_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::getVSPLTImmediate(N, 1));

  }
  case 10: {  // VSPLTH_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::getVSPLTImmediate(N, 2));

  }
  case 11: {  // VSPLTW_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::getVSPLTImmediate(N, 4));

  }
  case 12: {  // VSLDOI_unary_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::isVSLDOIShuffleMask(N, true));

  }
  case 13: {  // VSLDOI_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::isVSLDOIShuffleMask(N, false));

  }
  case 14: {  // VSPLTISB_get_imm
    SDNode *N = V.getNode();

  return PPC::get_VSPLTI_elt(N, 1, *CurDAG);

  }
  case 15: {  // VSPLTISH_get_imm
    SDNode *N = V.getNode();

  return PPC::get_VSPLTI_elt(N, 2, *CurDAG);

  }
  case 16: {  // VSPLTISW_get_imm
    SDNode *N = V.getNode();

  return PPC::get_VSPLTI_elt(N, 4, *CurDAG);

  }
  }
}

