/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*DAG Instruction Selector for the XCore target                               *|
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
/*0*/     OPC_SwitchOpcode /*40 cases */, 98|128,1/*226*/,  TARGET_VAL(ISD::ADD),// ->231
/*5*/       OPC_Scope, 34, /*->41*/ // 5 children in Scope
/*7*/         OPC_MoveChild, 0,
/*9*/         OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*12*/        OPC_MoveChild, 0,
/*14*/        OPC_CheckInteger, 1, 
/*16*/        OPC_MoveParent,
/*17*/        OPC_RecordChild1, // #0 = $size
/*18*/        OPC_MoveParent,
/*19*/        OPC_MoveChild, 1,
/*21*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32*/        OPC_MoveParent,
/*33*/        OPC_MorphNodeTo, TARGET_VAL(XCore::MKMSK_2r), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (add:i32 (shl:i32 1:i32, GRRegs:i32:$size), -1:i32) - Complexity = 16
              // Dst: (MKMSK_2r:i32 GRRegs:i32:$size)
/*41*/      /*Scope*/ 39, /*->81*/
/*42*/        OPC_RecordChild0, // #0 = $addr
/*43*/        OPC_MoveChild, 1,
/*45*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*48*/        OPC_RecordChild0, // #1 = $offset
/*49*/        OPC_MoveChild, 1,
/*51*/        OPC_Scope, 13, /*->66*/ // 2 children in Scope
/*53*/          OPC_CheckInteger, 2, 
/*55*/          OPC_MoveParent,
/*56*/          OPC_MoveParent,
/*57*/          OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWF_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 2:i32)) - Complexity = 11
                // Dst: (LDAWF_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*66*/        /*Scope*/ 13, /*->80*/
/*67*/          OPC_CheckInteger, 1, 
/*69*/          OPC_MoveParent,
/*70*/          OPC_MoveParent,
/*71*/          OPC_MorphNodeTo, TARGET_VAL(XCore::LDA16F_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 1:i32)) - Complexity = 11
                // Dst: (LDA16F_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*80*/        0, /*End of Scope*/
/*81*/      /*Scope*/ 40, /*->122*/
/*82*/        OPC_MoveChild, 0,
/*84*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*87*/        OPC_RecordChild0, // #0 = $offset
/*88*/        OPC_MoveChild, 1,
/*90*/        OPC_Scope, 14, /*->106*/ // 2 children in Scope
/*92*/          OPC_CheckInteger, 2, 
/*94*/          OPC_MoveParent,
/*95*/          OPC_MoveParent,
/*96*/          OPC_RecordChild1, // #1 = $addr
/*97*/          OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWF_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (add:i32 (shl:i32 GRRegs:i32:$offset, 2:i32), GRRegs:i32:$addr) - Complexity = 11
                // Dst: (LDAWF_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*106*/       /*Scope*/ 14, /*->121*/
/*107*/         OPC_CheckInteger, 1, 
/*109*/         OPC_MoveParent,
/*110*/         OPC_MoveParent,
/*111*/         OPC_RecordChild1, // #1 = $addr
/*112*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LDA16F_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (add:i32 (shl:i32 GRRegs:i32:$offset, 1:i32), GRRegs:i32:$addr) - Complexity = 11
                // Dst: (LDA16F_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*121*/       0, /*End of Scope*/
/*122*/     /*Scope*/ 15, /*->138*/
/*123*/       OPC_RecordNode, // #0 = $addr
/*124*/       OPC_CheckType, MVT::i32,
/*126*/       OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectADDRspii:$addr #1 #2
/*129*/       OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWFI), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: ADDRspii:i32:$addr - Complexity = 9
              // Dst: (LDAWFI:i32 ADDRspii:i32:$addr)
/*138*/     /*Scope*/ 91, /*->230*/
/*139*/       OPC_RecordChild0, // #0 = $b
/*140*/       OPC_RecordChild1, // #1 = $c
/*141*/       OPC_Scope, 76, /*->219*/ // 2 children in Scope
/*143*/         OPC_MoveChild, 1,
/*145*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*148*/         OPC_Scope, 14, /*->164*/ // 4 children in Scope
/*150*/           OPC_CheckPredicate, 0, // Predicate_immUs
/*152*/           OPC_MoveParent,
/*153*/           OPC_EmitConvertToTarget, 1,
/*155*/           OPC_MorphNodeTo, TARGET_VAL(XCore::ADD_2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i32 GRRegs:i32:$b, (imm:i32)<<P:Predicate_immUs>>:$c) - Complexity = 7
                  // Dst: (ADD_2rus:i32 GRRegs:i32:$b, (imm:i32):$c)
/*164*/         /*Scope*/ 17, /*->182*/
/*165*/           OPC_CheckPredicate, 1, // Predicate_immUs4
/*167*/           OPC_MoveParent,
/*168*/           OPC_EmitConvertToTarget, 1,
/*170*/           OPC_EmitNodeXForm, 0, 2, // div4_xform
/*173*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWF_l2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i32 GRRegs:i32:$addr, (imm:i32)<<P:Predicate_immUs4>>:$offset) - Complexity = 7
                  // Dst: (LDAWF_l2rus:i32 GRRegs:i32:$addr, (div4_xform:i32 (imm:i32)<<P:Predicate_immUs4>>:$offset))
/*182*/         /*Scope*/ 17, /*->200*/
/*183*/           OPC_CheckPredicate, 2, // Predicate_immUsNeg
/*185*/           OPC_MoveParent,
/*186*/           OPC_EmitConvertToTarget, 1,
/*188*/           OPC_EmitNodeXForm, 1, 2, // neg_xform
/*191*/           OPC_MorphNodeTo, TARGET_VAL(XCore::SUB_2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i32 GRRegs:i32:$src1, (imm:i32)<<P:Predicate_immUsNeg>>:$src2) - Complexity = 7
                  // Dst: (SUB_2rus:i32 GRRegs:i32:$src1, (neg_xform:i32 (imm:i32)<<P:Predicate_immUsNeg>>:$src2))
/*200*/         /*Scope*/ 17, /*->218*/
/*201*/           OPC_CheckPredicate, 3, // Predicate_immUs4Neg
/*203*/           OPC_MoveParent,
/*204*/           OPC_EmitConvertToTarget, 1,
/*206*/           OPC_EmitNodeXForm, 2, 2, // div4neg_xform
/*209*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWB_l2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i32 GRRegs:i32:$src1, (imm:i32)<<P:Predicate_immUs4Neg>>:$src2) - Complexity = 7
                  // Dst: (LDAWB_l2rus:i32 GRRegs:i32:$src1, (div4neg_xform:i32 (imm:i32)<<P:Predicate_immUs4Neg>>:$src2))
/*218*/         0, /*End of Scope*/
/*219*/       /*Scope*/ 9, /*->229*/
/*220*/         OPC_MorphNodeTo, TARGET_VAL(XCore::ADD_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
                // Dst: (ADD_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*229*/       0, /*End of Scope*/
/*230*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 83|128,3/*467*/,  TARGET_VAL(ISD::LOAD),// ->702
/*235*/     OPC_RecordMemRef,
/*236*/     OPC_RecordNode,   // #0 = 'ld' chained node
/*237*/     OPC_Scope, 40|128,1/*168*/, /*->408*/ // 4 children in Scope
/*240*/       OPC_MoveChild, 1,
/*242*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*245*/       OPC_Scope, 79, /*->326*/ // 2 children in Scope
/*247*/         OPC_RecordChild0, // #1 = $addr
/*248*/         OPC_MoveChild, 1,
/*250*/         OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*253*/         OPC_RecordChild0, // #2 = $offset
/*254*/         OPC_MoveChild, 1,
/*256*/         OPC_Scope, 43, /*->301*/ // 2 children in Scope
/*258*/           OPC_CheckInteger, 1, 
/*260*/           OPC_MoveParent,
/*261*/           OPC_MoveParent,
/*262*/           OPC_CheckType, MVT::i32,
/*264*/           OPC_MoveParent,
/*265*/           OPC_CheckPredicate, 4, // Predicate_unindexedload
/*267*/           OPC_CheckType, MVT::i32,
/*269*/           OPC_Scope, 14, /*->285*/ // 2 children in Scope
/*271*/             OPC_CheckPredicate, 5, // Predicate_sextload
/*273*/             OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*275*/             OPC_EmitMergeInputChains1_0,
/*276*/             OPC_MorphNodeTo, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:i32 (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 1:i32)))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 15
                    // Dst: (LD16S_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*285*/           /*Scope*/ 14, /*->300*/
/*286*/             OPC_CheckPredicate, 7, // Predicate_extload
/*288*/             OPC_CheckPredicate, 8, // Predicate_extloadi16
/*290*/             OPC_EmitMergeInputChains1_0,
/*291*/             OPC_MorphNodeTo, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:i32 (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 1:i32)))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 15
                    // Dst: (LD16S_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*300*/           0, /*End of Scope*/
/*301*/         /*Scope*/ 23, /*->325*/
/*302*/           OPC_CheckInteger, 2, 
/*304*/           OPC_MoveParent,
/*305*/           OPC_MoveParent,
/*306*/           OPC_CheckType, MVT::i32,
/*308*/           OPC_MoveParent,
/*309*/           OPC_CheckPredicate, 4, // Predicate_unindexedload
/*311*/           OPC_CheckPredicate, 9, // Predicate_load
/*313*/           OPC_CheckType, MVT::i32,
/*315*/           OPC_EmitMergeInputChains1_0,
/*316*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LDW_3r), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:i32 (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 2:i32)))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 15
                  // Dst: (LDW_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*325*/         0, /*End of Scope*/
/*326*/       /*Scope*/ 80, /*->407*/
/*327*/         OPC_MoveChild, 0,
/*329*/         OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*332*/         OPC_RecordChild0, // #1 = $offset
/*333*/         OPC_MoveChild, 1,
/*335*/         OPC_Scope, 44, /*->381*/ // 2 children in Scope
/*337*/           OPC_CheckInteger, 1, 
/*339*/           OPC_MoveParent,
/*340*/           OPC_MoveParent,
/*341*/           OPC_RecordChild1, // #2 = $addr
/*342*/           OPC_CheckType, MVT::i32,
/*344*/           OPC_MoveParent,
/*345*/           OPC_CheckPredicate, 4, // Predicate_unindexedload
/*347*/           OPC_CheckType, MVT::i32,
/*349*/           OPC_Scope, 14, /*->365*/ // 2 children in Scope
/*351*/             OPC_CheckPredicate, 7, // Predicate_extload
/*353*/             OPC_CheckPredicate, 8, // Predicate_extloadi16
/*355*/             OPC_EmitMergeInputChains1_0,
/*356*/             OPC_MorphNodeTo, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
                    // Src: (ld:i32 (add:i32 (shl:i32 GRRegs:i32:$offset, 1:i32), GRRegs:i32:$addr))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 15
                    // Dst: (LD16S_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*365*/           /*Scope*/ 14, /*->380*/
/*366*/             OPC_CheckPredicate, 5, // Predicate_sextload
/*368*/             OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*370*/             OPC_EmitMergeInputChains1_0,
/*371*/             OPC_MorphNodeTo, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
                    // Src: (ld:i32 (add:i32 (shl:i32 GRRegs:i32:$offset, 1:i32), GRRegs:i32:$addr))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 15
                    // Dst: (LD16S_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*380*/           0, /*End of Scope*/
/*381*/         /*Scope*/ 24, /*->406*/
/*382*/           OPC_CheckInteger, 2, 
/*384*/           OPC_MoveParent,
/*385*/           OPC_MoveParent,
/*386*/           OPC_RecordChild1, // #2 = $addr
/*387*/           OPC_CheckType, MVT::i32,
/*389*/           OPC_MoveParent,
/*390*/           OPC_CheckPredicate, 4, // Predicate_unindexedload
/*392*/           OPC_CheckPredicate, 9, // Predicate_load
/*394*/           OPC_CheckType, MVT::i32,
/*396*/           OPC_EmitMergeInputChains1_0,
/*397*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LDW_3r), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
                  // Src: (ld:i32 (add:i32 (shl:i32 GRRegs:i32:$offset, 2:i32), GRRegs:i32:$addr))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 15
                  // Dst: (LDW_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*406*/         0, /*End of Scope*/
/*407*/       0, /*End of Scope*/
/*408*/     /*Scope*/ 22, /*->431*/
/*409*/       OPC_RecordChild1, // #1 = $addr
/*410*/       OPC_CheckChild1Type, MVT::i32,
/*412*/       OPC_CheckPredicate, 4, // Predicate_unindexedload
/*414*/       OPC_CheckPredicate, 9, // Predicate_load
/*416*/       OPC_CheckType, MVT::i32,
/*418*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRspii:$addr #2 #3
/*421*/       OPC_EmitMergeInputChains1_0,
/*422*/       OPC_MorphNodeTo, TARGET_VAL(XCore::LDWFI), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 ADDRspii:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LDWFI:i32 ADDRspii:i32:$addr)
/*431*/     /*Scope*/ 8|128,1/*136*/, /*->569*/
/*433*/       OPC_MoveChild, 1,
/*435*/       OPC_SwitchOpcode /*3 cases */, 77,  TARGET_VAL(ISD::ADD),// ->516
/*439*/         OPC_RecordChild0, // #1 = $addr
/*440*/         OPC_RecordChild1, // #2 = $offset
/*441*/         OPC_Scope, 32, /*->475*/ // 2 children in Scope
/*443*/           OPC_MoveChild, 1,
/*445*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*448*/           OPC_CheckPredicate, 1, // Predicate_immUs4
/*450*/           OPC_MoveParent,
/*451*/           OPC_CheckType, MVT::i32,
/*453*/           OPC_MoveParent,
/*454*/           OPC_CheckPredicate, 4, // Predicate_unindexedload
/*456*/           OPC_CheckPredicate, 9, // Predicate_load
/*458*/           OPC_CheckType, MVT::i32,
/*460*/           OPC_EmitMergeInputChains1_0,
/*461*/           OPC_EmitConvertToTarget, 2,
/*463*/           OPC_EmitNodeXForm, 0, 3, // div4_xform
/*466*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LDW_2rus), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4, 
                  // Src: (ld:i32 (add:i32 GRRegs:i32:$addr, (imm:i32)<<P:Predicate_immUs4>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 11
                  // Dst: (LDW_2rus:i32 GRRegs:i32:$addr, (div4_xform:i32 (imm:i32)<<P:Predicate_immUs4>>:$offset))
/*475*/         /*Scope*/ 39, /*->515*/
/*476*/           OPC_CheckType, MVT::i32,
/*478*/           OPC_MoveParent,
/*479*/           OPC_CheckPredicate, 4, // Predicate_unindexedload
/*481*/           OPC_CheckType, MVT::i32,
/*483*/           OPC_Scope, 14, /*->499*/ // 2 children in Scope
/*485*/             OPC_CheckPredicate, 10, // Predicate_zextload
/*487*/             OPC_CheckPredicate, 11, // Predicate_zextloadi8
/*489*/             OPC_EmitMergeInputChains1_0,
/*490*/             OPC_MorphNodeTo, TARGET_VAL(XCore::LD8U_3r), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:i32 (add:i32 GRRegs:i32:$addr, GRRegs:i32:$offset))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 7
                    // Dst: (LD8U_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*499*/           /*Scope*/ 14, /*->514*/
/*500*/             OPC_CheckPredicate, 7, // Predicate_extload
/*502*/             OPC_CheckPredicate, 12, // Predicate_extloadi8
/*504*/             OPC_EmitMergeInputChains1_0,
/*505*/             OPC_MorphNodeTo, TARGET_VAL(XCore::LD8U_3r), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:i32 (add:i32 GRRegs:i32:$addr, GRRegs:i32:$offset))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 7
                    // Dst: (LD8U_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*514*/           0, /*End of Scope*/
/*515*/         0, /*End of Scope*/
              /*SwitchOpcode*/ 23,  TARGET_VAL(XCoreISD::DPRelativeWrapper),// ->542
/*519*/         OPC_RecordChild0, // #1 = $b
/*520*/         OPC_MoveChild, 0,
/*522*/         OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*525*/         OPC_MoveParent,
/*526*/         OPC_MoveParent,
/*527*/         OPC_CheckPredicate, 4, // Predicate_unindexedload
/*529*/         OPC_CheckPredicate, 9, // Predicate_load
/*531*/         OPC_CheckType, MVT::i32,
/*533*/         OPC_EmitMergeInputChains1_0,
/*534*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LDWDP_lru6), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (ld:i32 (dprelwrapper:iPTR (tglobaladdr:iPTR):$b))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 10
                // Dst: (LDWDP_lru6:i32 (tglobaladdr:i32):$b)
              /*SwitchOpcode*/ 23,  TARGET_VAL(XCoreISD::CPRelativeWrapper),// ->568
/*545*/         OPC_RecordChild0, // #1 = $b
/*546*/         OPC_MoveChild, 0,
/*548*/         OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*551*/         OPC_MoveParent,
/*552*/         OPC_MoveParent,
/*553*/         OPC_CheckPredicate, 4, // Predicate_unindexedload
/*555*/         OPC_CheckPredicate, 9, // Predicate_load
/*557*/         OPC_CheckType, MVT::i32,
/*559*/         OPC_EmitMergeInputChains1_0,
/*560*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LDWCP_lru6), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (ld:i32 (cprelwrapper:iPTR (tglobaladdr:iPTR):$b))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 10
                // Dst: (LDWCP_lru6:i32 (tglobaladdr:i32):$b)
              0, // EndSwitchOpcode
/*569*/     /*Scope*/ 2|128,1/*130*/, /*->701*/
/*571*/       OPC_RecordChild1, // #1 = $addr
/*572*/       OPC_CheckChild1Type, MVT::i32,
/*574*/       OPC_CheckPredicate, 4, // Predicate_unindexedload
/*576*/       OPC_CheckType, MVT::i32,
/*578*/       OPC_Scope, 15, /*->595*/ // 4 children in Scope
/*580*/         OPC_CheckPredicate, 9, // Predicate_load
/*582*/         OPC_EmitMergeInputChains1_0,
/*583*/         OPC_EmitInteger, MVT::i32, 0, 
/*586*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LDW_2rus), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (ld:i32 GRRegs:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 4
                // Dst: (LDW_2rus:i32 GRRegs:i32:$addr, 0:i32)
/*595*/       /*Scope*/ 25, /*->621*/
/*596*/         OPC_CheckPredicate, 10, // Predicate_zextload
/*598*/         OPC_CheckPredicate, 11, // Predicate_zextloadi8
/*600*/         OPC_EmitMergeInputChains1_0,
/*601*/         OPC_EmitInteger, MVT::i32, 0, 
/*604*/         OPC_EmitNode, TARGET_VAL(XCore::LDC_ru6), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*612*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LD8U_3r), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (ld:i32 GRRegs:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 4
                // Dst: (LD8U_3r:i32 GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
/*621*/       /*Scope*/ 25, /*->647*/
/*622*/         OPC_CheckPredicate, 5, // Predicate_sextload
/*624*/         OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*626*/         OPC_EmitMergeInputChains1_0,
/*627*/         OPC_EmitInteger, MVT::i32, 0, 
/*630*/         OPC_EmitNode, TARGET_VAL(XCore::LDC_ru6), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*638*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (ld:i32 GRRegs:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 4
                // Dst: (LD16S_3r:i32 GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
/*647*/       /*Scope*/ 52, /*->700*/
/*648*/         OPC_CheckPredicate, 7, // Predicate_extload
/*650*/         OPC_Scope, 23, /*->675*/ // 2 children in Scope
/*652*/           OPC_CheckPredicate, 12, // Predicate_extloadi8
/*654*/           OPC_EmitMergeInputChains1_0,
/*655*/           OPC_EmitInteger, MVT::i32, 0, 
/*658*/           OPC_EmitNode, TARGET_VAL(XCore::LDC_ru6), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*666*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LD8U_3r), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                  // Src: (ld:i32 GRRegs:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 4
                  // Dst: (LD8U_3r:i32 GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
/*675*/         /*Scope*/ 23, /*->699*/
/*676*/           OPC_CheckPredicate, 8, // Predicate_extloadi16
/*678*/           OPC_EmitMergeInputChains1_0,
/*679*/           OPC_EmitInteger, MVT::i32, 0, 
/*682*/           OPC_EmitNode, TARGET_VAL(XCore::LDC_ru6), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*690*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                  // Src: (ld:i32 GRRegs:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 4
                  // Dst: (LD16S_3r:i32 GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
/*699*/         0, /*End of Scope*/
/*700*/       0, /*End of Scope*/
/*701*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 61|128,2/*317*/,  TARGET_VAL(ISD::STORE),// ->1023
/*706*/     OPC_RecordMemRef,
/*707*/     OPC_RecordNode,   // #0 = 'st' chained node
/*708*/     OPC_RecordChild1, // #1 = $val
/*709*/     OPC_CheckChild1Type, MVT::i32,
/*711*/     OPC_Scope, 124, /*->837*/ // 4 children in Scope
/*713*/       OPC_MoveChild, 2,
/*715*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*718*/       OPC_Scope, 57, /*->777*/ // 2 children in Scope
/*720*/         OPC_RecordChild0, // #2 = $addr
/*721*/         OPC_MoveChild, 1,
/*723*/         OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*726*/         OPC_RecordChild0, // #3 = $offset
/*727*/         OPC_MoveChild, 1,
/*729*/         OPC_Scope, 23, /*->754*/ // 2 children in Scope
/*731*/           OPC_CheckInteger, 1, 
/*733*/           OPC_MoveParent,
/*734*/           OPC_MoveParent,
/*735*/           OPC_CheckType, MVT::i32,
/*737*/           OPC_MoveParent,
/*738*/           OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*740*/           OPC_CheckPredicate, 14, // Predicate_truncstore
/*742*/           OPC_CheckPredicate, 15, // Predicate_truncstorei16
/*744*/           OPC_EmitMergeInputChains1_0,
/*745*/           OPC_MorphNodeTo, TARGET_VAL(XCore::ST16_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (st GRRegs:i32:$val, (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 1:i32)))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 15
                  // Dst: (ST16_l3r GRRegs:i32:$val, GRRegs:i32:$addr, GRRegs:i32:$offset)
/*754*/         /*Scope*/ 21, /*->776*/
/*755*/           OPC_CheckInteger, 2, 
/*757*/           OPC_MoveParent,
/*758*/           OPC_MoveParent,
/*759*/           OPC_CheckType, MVT::i32,
/*761*/           OPC_MoveParent,
/*762*/           OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*764*/           OPC_CheckPredicate, 16, // Predicate_store
/*766*/           OPC_EmitMergeInputChains1_0,
/*767*/           OPC_MorphNodeTo, TARGET_VAL(XCore::STW_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (st GRRegs:i32:$val, (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 2:i32)))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 15
                  // Dst: (STW_l3r GRRegs:i32:$val, GRRegs:i32:$addr, GRRegs:i32:$offset)
/*776*/         0, /*End of Scope*/
/*777*/       /*Scope*/ 58, /*->836*/
/*778*/         OPC_MoveChild, 0,
/*780*/         OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*783*/         OPC_RecordChild0, // #2 = $offset
/*784*/         OPC_MoveChild, 1,
/*786*/         OPC_Scope, 24, /*->812*/ // 2 children in Scope
/*788*/           OPC_CheckInteger, 1, 
/*790*/           OPC_MoveParent,
/*791*/           OPC_MoveParent,
/*792*/           OPC_RecordChild1, // #3 = $addr
/*793*/           OPC_CheckType, MVT::i32,
/*795*/           OPC_MoveParent,
/*796*/           OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*798*/           OPC_CheckPredicate, 14, // Predicate_truncstore
/*800*/           OPC_CheckPredicate, 15, // Predicate_truncstorei16
/*802*/           OPC_EmitMergeInputChains1_0,
/*803*/           OPC_MorphNodeTo, TARGET_VAL(XCore::ST16_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                  // Src: (st GRRegs:i32:$val, (add:i32 (shl:i32 GRRegs:i32:$offset, 1:i32), GRRegs:i32:$addr))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 15
                  // Dst: (ST16_l3r GRRegs:i32:$val, GRRegs:i32:$addr, GRRegs:i32:$offset)
/*812*/         /*Scope*/ 22, /*->835*/
/*813*/           OPC_CheckInteger, 2, 
/*815*/           OPC_MoveParent,
/*816*/           OPC_MoveParent,
/*817*/           OPC_RecordChild1, // #3 = $addr
/*818*/           OPC_CheckType, MVT::i32,
/*820*/           OPC_MoveParent,
/*821*/           OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*823*/           OPC_CheckPredicate, 16, // Predicate_store
/*825*/           OPC_EmitMergeInputChains1_0,
/*826*/           OPC_MorphNodeTo, TARGET_VAL(XCore::STW_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                  // Src: (st GRRegs:i32:$val, (add:i32 (shl:i32 GRRegs:i32:$offset, 2:i32), GRRegs:i32:$addr))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 15
                  // Dst: (STW_l3r GRRegs:i32:$val, GRRegs:i32:$addr, GRRegs:i32:$offset)
/*835*/         0, /*End of Scope*/
/*836*/       0, /*End of Scope*/
/*837*/     /*Scope*/ 20, /*->858*/
/*838*/       OPC_RecordChild2, // #2 = $addr
/*839*/       OPC_CheckChild2Type, MVT::i32,
/*841*/       OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*843*/       OPC_CheckPredicate, 16, // Predicate_store
/*845*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRspii:$addr #3 #4
/*848*/       OPC_EmitMergeInputChains1_0,
/*849*/       OPC_MorphNodeTo, TARGET_VAL(XCore::STWFI), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (st GRRegs:i32:$src, ADDRspii:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
              // Dst: (STWFI GRRegs:i32:$src, ADDRspii:i32:$addr)
/*858*/     /*Scope*/ 86, /*->945*/
/*859*/       OPC_MoveChild, 2,
/*861*/       OPC_SwitchOpcode /*2 cases */, 55,  TARGET_VAL(ISD::ADD),// ->920
/*865*/         OPC_RecordChild0, // #2 = $addr
/*866*/         OPC_RecordChild1, // #3 = $offset
/*867*/         OPC_Scope, 30, /*->899*/ // 2 children in Scope
/*869*/           OPC_MoveChild, 1,
/*871*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*874*/           OPC_CheckPredicate, 1, // Predicate_immUs4
/*876*/           OPC_MoveParent,
/*877*/           OPC_CheckType, MVT::i32,
/*879*/           OPC_MoveParent,
/*880*/           OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*882*/           OPC_CheckPredicate, 16, // Predicate_store
/*884*/           OPC_EmitMergeInputChains1_0,
/*885*/           OPC_EmitConvertToTarget, 3,
/*887*/           OPC_EmitNodeXForm, 0, 4, // div4_xform
/*890*/           OPC_MorphNodeTo, TARGET_VAL(XCore::STW_2rus), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 2, 5, 
                  // Src: (st GRRegs:i32:$val, (add:i32 GRRegs:i32:$addr, (imm:i32)<<P:Predicate_immUs4>>:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 11
                  // Dst: (STW_2rus GRRegs:i32:$val, GRRegs:i32:$addr, (div4_xform:i32 (imm:i32)<<P:Predicate_immUs4>>:$offset))
/*899*/         /*Scope*/ 19, /*->919*/
/*900*/           OPC_CheckType, MVT::i32,
/*902*/           OPC_MoveParent,
/*903*/           OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*905*/           OPC_CheckPredicate, 14, // Predicate_truncstore
/*907*/           OPC_CheckPredicate, 17, // Predicate_truncstorei8
/*909*/           OPC_EmitMergeInputChains1_0,
/*910*/           OPC_MorphNodeTo, TARGET_VAL(XCore::ST8_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (st GRRegs:i32:$val, (add:i32 GRRegs:i32:$addr, GRRegs:i32:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 7
                  // Dst: (ST8_l3r GRRegs:i32:$val, GRRegs:i32:$addr, GRRegs:i32:$offset)
/*919*/         0, /*End of Scope*/
              /*SwitchOpcode*/ 21,  TARGET_VAL(XCoreISD::DPRelativeWrapper),// ->944
/*923*/         OPC_RecordChild0, // #2 = $b
/*924*/         OPC_MoveChild, 0,
/*926*/         OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*929*/         OPC_MoveParent,
/*930*/         OPC_MoveParent,
/*931*/         OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*933*/         OPC_CheckPredicate, 16, // Predicate_store
/*935*/         OPC_EmitMergeInputChains1_0,
/*936*/         OPC_MorphNodeTo, TARGET_VAL(XCore::STWDP_lru6), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                // Src: (st RRegs:i32:$a, (dprelwrapper:iPTR (tglobaladdr:iPTR):$b))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 10
                // Dst: (STWDP_lru6 RRegs:i32:$a, (tglobaladdr:i32):$b)
              0, // EndSwitchOpcode
/*945*/     /*Scope*/ 76, /*->1022*/
/*946*/       OPC_RecordChild2, // #2 = $addr
/*947*/       OPC_CheckChild2Type, MVT::i32,
/*949*/       OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*951*/       OPC_Scope, 15, /*->968*/ // 2 children in Scope
/*953*/         OPC_CheckPredicate, 16, // Predicate_store
/*955*/         OPC_EmitMergeInputChains1_0,
/*956*/         OPC_EmitInteger, MVT::i32, 0, 
/*959*/         OPC_MorphNodeTo, TARGET_VAL(XCore::STW_2rus), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                // Src: (st GRRegs:i32:$val, GRRegs:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 4
                // Dst: (STW_2rus GRRegs:i32:$val, GRRegs:i32:$addr, 0:i32)
/*968*/       /*Scope*/ 52, /*->1021*/
/*969*/         OPC_CheckPredicate, 14, // Predicate_truncstore
/*971*/         OPC_Scope, 23, /*->996*/ // 2 children in Scope
/*973*/           OPC_CheckPredicate, 17, // Predicate_truncstorei8
/*975*/           OPC_EmitMergeInputChains1_0,
/*976*/           OPC_EmitInteger, MVT::i32, 0, 
/*979*/           OPC_EmitNode, TARGET_VAL(XCore::LDC_ru6), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*987*/           OPC_MorphNodeTo, TARGET_VAL(XCore::ST8_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 2, 4, 
                  // Src: (st GRRegs:i32:$val, GRRegs:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 4
                  // Dst: (ST8_l3r GRRegs:i32:$val, GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
/*996*/         /*Scope*/ 23, /*->1020*/
/*997*/           OPC_CheckPredicate, 15, // Predicate_truncstorei16
/*999*/           OPC_EmitMergeInputChains1_0,
/*1000*/          OPC_EmitInteger, MVT::i32, 0, 
/*1003*/          OPC_EmitNode, TARGET_VAL(XCore::LDC_ru6), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*1011*/          OPC_MorphNodeTo, TARGET_VAL(XCore::ST16_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 2, 4, 
                  // Src: (st GRRegs:i32:$val, GRRegs:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 4
                  // Dst: (ST16_l3r GRRegs:i32:$val, GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
/*1020*/        0, /*End of Scope*/
/*1021*/      0, /*End of Scope*/
/*1022*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 94,  TARGET_VAL(ISD::SRA),// ->1120
/*1026*/    OPC_Scope, 35, /*->1063*/ // 2 children in Scope
/*1028*/      OPC_MoveChild, 0,
/*1030*/      OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*1033*/      OPC_RecordChild0, // #0 = $src
/*1034*/      OPC_RecordChild1, // #1 = $imm
/*1035*/      OPC_MoveChild, 1,
/*1037*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1040*/      OPC_CheckPredicate, 18, // Predicate_immBpwSubBitp
/*1042*/      OPC_MoveParent,
/*1043*/      OPC_MoveParent,
/*1044*/      OPC_MoveChild, 1,
/*1046*/      OPC_CheckSame, 1,
/*1048*/      OPC_MoveParent,
/*1049*/      OPC_EmitConvertToTarget, 1,
/*1051*/      OPC_EmitNodeXForm, 3, 2, // bpwsub_xform
/*1054*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SEXT_rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
              // Src: (sra:i32 (shl:i32 GRRegs:i32:$src, (imm:i32)<<P:Predicate_immBpwSubBitp>>:$imm), (imm:i32)<<P:Predicate_immBpwSubBitp>>:$imm) - Complexity = 14
              // Dst: (SEXT_rus:i32 GRRegs:i32:$src, (bpwsub_xform:i32 (imm:i32)<<P:Predicate_immBpwSubBitp>>:$imm))
/*1063*/    /*Scope*/ 55, /*->1119*/
/*1064*/      OPC_RecordChild0, // #0 = $src
/*1065*/      OPC_Scope, 17, /*->1084*/ // 2 children in Scope
/*1067*/        OPC_MoveChild, 1,
/*1069*/        OPC_CheckInteger, 31, 
/*1071*/        OPC_MoveParent,
/*1072*/        OPC_EmitInteger, MVT::i32, 32, 
/*1075*/        OPC_MorphNodeTo, TARGET_VAL(XCore::ASHR_l2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i32 GRRegs:i32:$src, 31:i32) - Complexity = 8
                // Dst: (ASHR_l2rus:i32 GRRegs:i32:$src, 32:i32)
/*1084*/      /*Scope*/ 33, /*->1118*/
/*1085*/        OPC_RecordChild1, // #1 = $c
/*1086*/        OPC_Scope, 19, /*->1107*/ // 2 children in Scope
/*1088*/          OPC_MoveChild, 1,
/*1090*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1093*/          OPC_CheckPredicate, 19, // Predicate_immBitp
/*1095*/          OPC_MoveParent,
/*1096*/          OPC_EmitConvertToTarget, 1,
/*1098*/          OPC_MorphNodeTo, TARGET_VAL(XCore::ASHR_l2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (sra:i32 GRRegs:i32:$b, (imm:i32)<<P:Predicate_immBitp>>:$c) - Complexity = 7
                  // Dst: (ASHR_l2rus:i32 GRRegs:i32:$b, (imm:i32):$c)
/*1107*/        /*Scope*/ 9, /*->1117*/
/*1108*/          OPC_MorphNodeTo, TARGET_VAL(XCore::ASHR_l3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sra:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
                  // Dst: (ASHR_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*1117*/        0, /*End of Scope*/
/*1118*/      0, /*End of Scope*/
/*1119*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 0|128,5/*640*/,  TARGET_VAL(ISD::INTRINSIC_VOID),// ->1764
/*1124*/    OPC_RecordNode,   // #0 = 'intrinsic_void' chained node
/*1125*/    OPC_MoveChild, 1,
/*1127*/    OPC_Scope, 58, /*->1187*/ // 28 children in Scope
/*1129*/      OPC_CheckInteger, 22|128,19/*2454*/, 
/*1132*/      OPC_MoveParent,
/*1133*/      OPC_RecordChild2, // #1 = $a
/*1134*/      OPC_CheckChild2Type, MVT::i32,
/*1136*/      OPC_RecordChild3, // #2 = $b
/*1137*/      OPC_Scope, 37, /*->1176*/ // 2 children in Scope
/*1139*/        OPC_MoveChild, 3,
/*1141*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1144*/        OPC_Scope, 14, /*->1160*/ // 2 children in Scope
/*1146*/          OPC_CheckPredicate, 20, // Predicate_immU6
/*1148*/          OPC_MoveParent,
/*1149*/          OPC_EmitMergeInputChains1_0,
/*1150*/          OPC_EmitConvertToTarget, 2,
/*1152*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SETC_ru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (intrinsic_void 2454:iPTR, GRRegs:i32:$a, (imm:i32)<<P:Predicate_immU6>>:$b) - Complexity = 12
                  // Dst: (SETC_ru6 GRRegs:i32:$a, (imm:i32):$b)
/*1160*/        /*Scope*/ 14, /*->1175*/
/*1161*/          OPC_CheckPredicate, 21, // Predicate_immU16
/*1163*/          OPC_MoveParent,
/*1164*/          OPC_EmitMergeInputChains1_0,
/*1165*/          OPC_EmitConvertToTarget, 2,
/*1167*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SETC_lru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (intrinsic_void 2454:iPTR, GRRegs:i32:$a, (imm:i32)<<P:Predicate_immU16>>:$b) - Complexity = 12
                  // Dst: (SETC_lru6 GRRegs:i32:$a, (imm:i32):$b)
/*1175*/        0, /*End of Scope*/
/*1176*/      /*Scope*/ 9, /*->1186*/
/*1177*/        OPC_EmitMergeInputChains1_0,
/*1178*/        OPC_MorphNodeTo, TARGET_VAL(XCore::SETC_l2r), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 2454:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
                // Dst: (SETC_l2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1186*/      0, /*End of Scope*/
/*1187*/    /*Scope*/ 40, /*->1228*/
/*1188*/      OPC_CheckInteger, 30|128,19/*2462*/, 
/*1191*/      OPC_MoveParent,
/*1192*/      OPC_RecordChild2, // #1 = $a
/*1193*/      OPC_MoveChild, 2,
/*1195*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1198*/      OPC_Scope, 13, /*->1213*/ // 2 children in Scope
/*1200*/        OPC_CheckPredicate, 20, // Predicate_immU6
/*1202*/        OPC_MoveParent,
/*1203*/        OPC_EmitMergeInputChains1_0,
/*1204*/        OPC_EmitConvertToTarget, 1,
/*1206*/        OPC_MorphNodeTo, TARGET_VAL(XCore::SETSR_u6), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 2462:iPTR, (imm:i32)<<P:Predicate_immU6>>:$a) - Complexity = 12
                // Dst: (SETSR_u6 (imm:i32):$a)
/*1213*/      /*Scope*/ 13, /*->1227*/
/*1214*/        OPC_CheckPredicate, 21, // Predicate_immU16
/*1216*/        OPC_MoveParent,
/*1217*/        OPC_EmitMergeInputChains1_0,
/*1218*/        OPC_EmitConvertToTarget, 1,
/*1220*/        OPC_MorphNodeTo, TARGET_VAL(XCore::SETSR_lu6), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 2462:iPTR, (imm:i32)<<P:Predicate_immU16>>:$a) - Complexity = 12
                // Dst: (SETSR_lu6 (imm:i32):$a)
/*1227*/      0, /*End of Scope*/
/*1228*/    /*Scope*/ 40, /*->1269*/
/*1229*/      OPC_CheckInteger, 121|128,18/*2425*/, 
/*1232*/      OPC_MoveParent,
/*1233*/      OPC_RecordChild2, // #1 = $a
/*1234*/      OPC_MoveChild, 2,
/*1236*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1239*/      OPC_Scope, 13, /*->1254*/ // 2 children in Scope
/*1241*/        OPC_CheckPredicate, 20, // Predicate_immU6
/*1243*/        OPC_MoveParent,
/*1244*/        OPC_EmitMergeInputChains1_0,
/*1245*/        OPC_EmitConvertToTarget, 1,
/*1247*/        OPC_MorphNodeTo, TARGET_VAL(XCore::CLRSR_u6), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 2425:iPTR, (imm:i32)<<P:Predicate_immU6>>:$a) - Complexity = 12
                // Dst: (CLRSR_u6 (imm:i32):$a)
/*1254*/      /*Scope*/ 13, /*->1268*/
/*1255*/        OPC_CheckPredicate, 21, // Predicate_immU16
/*1257*/        OPC_MoveParent,
/*1258*/        OPC_EmitMergeInputChains1_0,
/*1259*/        OPC_EmitConvertToTarget, 1,
/*1261*/        OPC_MorphNodeTo, TARGET_VAL(XCore::CLRSR_lu6), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 2425:iPTR, (imm:i32)<<P:Predicate_immU16>>:$a) - Complexity = 12
                // Dst: (CLRSR_lu6 (imm:i32):$a)
/*1268*/      0, /*End of Scope*/
/*1269*/    /*Scope*/ 40, /*->1310*/
/*1270*/      OPC_CheckInteger, 18|128,19/*2450*/, 
/*1273*/      OPC_MoveParent,
/*1274*/      OPC_RecordChild2, // #1 = $r
/*1275*/      OPC_CheckChild2Type, MVT::i32,
/*1277*/      OPC_RecordChild3, // #2 = $val
/*1278*/      OPC_Scope, 19, /*->1299*/ // 2 children in Scope
/*1280*/        OPC_MoveChild, 3,
/*1282*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1285*/        OPC_CheckPredicate, 0, // Predicate_immUs
/*1287*/        OPC_MoveParent,
/*1288*/        OPC_EmitMergeInputChains1_0,
/*1289*/        OPC_EmitConvertToTarget, 2,
/*1291*/        OPC_MorphNodeTo, TARGET_VAL(XCore::OUTCT_rus), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_void 2450:iPTR, GRRegs:i32:$r, (imm:i32)<<P:Predicate_immUs>>:$val) - Complexity = 12
                // Dst: (OUTCT_rus GRRegs:i32:$r, (imm:i32):$val)
/*1299*/      /*Scope*/ 9, /*->1309*/
/*1300*/        OPC_EmitMergeInputChains1_0,
/*1301*/        OPC_MorphNodeTo, TARGET_VAL(XCore::OUTCT_2r), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 2450:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
                // Dst: (OUTCT_2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1309*/      0, /*End of Scope*/
/*1310*/    /*Scope*/ 40, /*->1351*/
/*1311*/      OPC_CheckInteger, 119|128,18/*2423*/, 
/*1314*/      OPC_MoveParent,
/*1315*/      OPC_RecordChild2, // #1 = $r
/*1316*/      OPC_CheckChild2Type, MVT::i32,
/*1318*/      OPC_RecordChild3, // #2 = $val
/*1319*/      OPC_Scope, 19, /*->1340*/ // 2 children in Scope
/*1321*/        OPC_MoveChild, 3,
/*1323*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1326*/        OPC_CheckPredicate, 0, // Predicate_immUs
/*1328*/        OPC_MoveParent,
/*1329*/        OPC_EmitMergeInputChains1_0,
/*1330*/        OPC_EmitConvertToTarget, 2,
/*1332*/        OPC_MorphNodeTo, TARGET_VAL(XCore::CHKCT_rus), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_void 2423:iPTR, GRRegs:i32:$r, (imm:i32)<<P:Predicate_immUs>>:$val) - Complexity = 12
                // Dst: (CHKCT_rus GRRegs:i32:$r, (imm:i32):$val)
/*1340*/      /*Scope*/ 9, /*->1350*/
/*1341*/        OPC_EmitMergeInputChains1_0,
/*1342*/        OPC_MorphNodeTo, TARGET_VAL(XCore::CHKCT_2r), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 2423:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
                // Dst: (CHKCT_2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1350*/      0, /*End of Scope*/
/*1351*/    /*Scope*/ 17, /*->1369*/
/*1352*/      OPC_CheckInteger, 28|128,19/*2460*/, 
/*1355*/      OPC_MoveParent,
/*1356*/      OPC_RecordChild2, // #1 = $r
/*1357*/      OPC_CheckChild2Type, MVT::i32,
/*1359*/      OPC_RecordChild3, // #2 = $val
/*1360*/      OPC_EmitMergeInputChains1_0,
/*1361*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETPT_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 2460:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
              // Dst: (SETPT_2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1369*/    /*Scope*/ 17, /*->1387*/
/*1370*/      OPC_CheckInteger, 20|128,19/*2452*/, 
/*1373*/      OPC_MoveParent,
/*1374*/      OPC_RecordChild2, // #1 = $r
/*1375*/      OPC_CheckChild2Type, MVT::i32,
/*1377*/      OPC_RecordChild3, // #2 = $val
/*1378*/      OPC_EmitMergeInputChains1_0,
/*1379*/      OPC_MorphNodeTo, TARGET_VAL(XCore::OUTT_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 2452:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
              // Dst: (OUTT_2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1387*/    /*Scope*/ 17, /*->1405*/
/*1388*/      OPC_CheckInteger, 17|128,19/*2449*/, 
/*1391*/      OPC_MoveParent,
/*1392*/      OPC_RecordChild2, // #1 = $r
/*1393*/      OPC_CheckChild2Type, MVT::i32,
/*1395*/      OPC_RecordChild3, // #2 = $val
/*1396*/      OPC_EmitMergeInputChains1_0,
/*1397*/      OPC_MorphNodeTo, TARGET_VAL(XCore::OUT_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 2449:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
              // Dst: (OUT_2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1405*/    /*Scope*/ 17, /*->1423*/
/*1406*/      OPC_CheckInteger, 24|128,19/*2456*/, 
/*1409*/      OPC_MoveParent,
/*1410*/      OPC_RecordChild2, // #1 = $r
/*1411*/      OPC_CheckChild2Type, MVT::i32,
/*1413*/      OPC_RecordChild3, // #2 = $val
/*1414*/      OPC_EmitMergeInputChains1_0,
/*1415*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETD_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 2456:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
              // Dst: (SETD_2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1423*/    /*Scope*/ 17, /*->1441*/
/*1424*/      OPC_CheckInteger, 27|128,19/*2459*/, 
/*1427*/      OPC_MoveParent,
/*1428*/      OPC_RecordChild2, // #1 = $src1
/*1429*/      OPC_CheckChild2Type, MVT::i32,
/*1431*/      OPC_RecordChild3, // #2 = $src2
/*1432*/      OPC_EmitMergeInputChains1_0,
/*1433*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETPSC_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 2459:iPTR, GRRegs:i32:$src1, GRRegs:i32:$src2) - Complexity = 8
              // Dst: (SETPSC_2r GRRegs:i32:$src1, GRRegs:i32:$src2)
/*1441*/    /*Scope*/ 19, /*->1461*/
/*1442*/      OPC_CheckInteger, 12|128,19/*2444*/, 
/*1445*/      OPC_MoveParent,
/*1446*/      OPC_RecordChild2, // #1 = $t
/*1447*/      OPC_CheckChild2Type, MVT::i32,
/*1449*/      OPC_RecordChild3, // #2 = $src
/*1450*/      OPC_CheckChild3Type, MVT::i32,
/*1452*/      OPC_EmitMergeInputChains1_0,
/*1453*/      OPC_MorphNodeTo, TARGET_VAL(XCore::INITSP_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 1, 
              // Src: (intrinsic_void 2444:iPTR, GRRegs:i32:$t, GRRegs:i32:$src) - Complexity = 8
              // Dst: (INITSP_2r GRRegs:i32:$src, GRRegs:i32:$t)
/*1461*/    /*Scope*/ 19, /*->1481*/
/*1462*/      OPC_CheckInteger, 11|128,19/*2443*/, 
/*1465*/      OPC_MoveParent,
/*1466*/      OPC_RecordChild2, // #1 = $t
/*1467*/      OPC_CheckChild2Type, MVT::i32,
/*1469*/      OPC_RecordChild3, // #2 = $src
/*1470*/      OPC_CheckChild3Type, MVT::i32,
/*1472*/      OPC_EmitMergeInputChains1_0,
/*1473*/      OPC_MorphNodeTo, TARGET_VAL(XCore::INITPC_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 1, 
              // Src: (intrinsic_void 2443:iPTR, GRRegs:i32:$t, GRRegs:i32:$src) - Complexity = 8
              // Dst: (INITPC_2r GRRegs:i32:$src, GRRegs:i32:$t)
/*1481*/    /*Scope*/ 19, /*->1501*/
/*1482*/      OPC_CheckInteger, 8|128,19/*2440*/, 
/*1485*/      OPC_MoveParent,
/*1486*/      OPC_RecordChild2, // #1 = $t
/*1487*/      OPC_CheckChild2Type, MVT::i32,
/*1489*/      OPC_RecordChild3, // #2 = $src
/*1490*/      OPC_CheckChild3Type, MVT::i32,
/*1492*/      OPC_EmitMergeInputChains1_0,
/*1493*/      OPC_MorphNodeTo, TARGET_VAL(XCore::INITCP_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 1, 
              // Src: (intrinsic_void 2440:iPTR, GRRegs:i32:$t, GRRegs:i32:$src) - Complexity = 8
              // Dst: (INITCP_2r GRRegs:i32:$src, GRRegs:i32:$t)
/*1501*/    /*Scope*/ 19, /*->1521*/
/*1502*/      OPC_CheckInteger, 9|128,19/*2441*/, 
/*1505*/      OPC_MoveParent,
/*1506*/      OPC_RecordChild2, // #1 = $t
/*1507*/      OPC_CheckChild2Type, MVT::i32,
/*1509*/      OPC_RecordChild3, // #2 = $src
/*1510*/      OPC_CheckChild3Type, MVT::i32,
/*1512*/      OPC_EmitMergeInputChains1_0,
/*1513*/      OPC_MorphNodeTo, TARGET_VAL(XCore::INITDP_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 1, 
              // Src: (intrinsic_void 2441:iPTR, GRRegs:i32:$t, GRRegs:i32:$src) - Complexity = 8
              // Dst: (INITDP_2r GRRegs:i32:$src, GRRegs:i32:$t)
/*1521*/    /*Scope*/ 17, /*->1539*/
/*1522*/      OPC_CheckInteger, 31|128,19/*2463*/, 
/*1525*/      OPC_MoveParent,
/*1526*/      OPC_RecordChild2, // #1 = $r
/*1527*/      OPC_CheckChild2Type, MVT::i32,
/*1529*/      OPC_RecordChild3, // #2 = $val
/*1530*/      OPC_EmitMergeInputChains1_0,
/*1531*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETTW_l2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 2463:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
              // Dst: (SETTW_l2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1539*/    /*Scope*/ 15, /*->1555*/
/*1540*/      OPC_CheckInteger, 26|128,19/*2458*/, 
/*1543*/      OPC_MoveParent,
/*1544*/      OPC_RecordChild2, // #1 = $src1
/*1545*/      OPC_RecordChild3, // #2 = $src2
/*1546*/      OPC_EmitMergeInputChains1_0,
/*1547*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETPS_l2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 2458:iPTR, GRRegs:i32:$src1, GRRegs:i32:$src2) - Complexity = 8
              // Dst: (SETPS_l2r GRRegs:i32:$src1, GRRegs:i32:$src2)
/*1555*/    /*Scope*/ 19, /*->1575*/
/*1556*/      OPC_CheckInteger, 10|128,19/*2442*/, 
/*1559*/      OPC_MoveParent,
/*1560*/      OPC_RecordChild2, // #1 = $t
/*1561*/      OPC_CheckChild2Type, MVT::i32,
/*1563*/      OPC_RecordChild3, // #2 = $src
/*1564*/      OPC_CheckChild3Type, MVT::i32,
/*1566*/      OPC_EmitMergeInputChains1_0,
/*1567*/      OPC_MorphNodeTo, TARGET_VAL(XCore::INITLR_l2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 1, 
              // Src: (intrinsic_void 2442:iPTR, GRRegs:i32:$t, GRRegs:i32:$src) - Complexity = 8
              // Dst: (INITLR_l2r GRRegs:i32:$src, GRRegs:i32:$t)
/*1575*/    /*Scope*/ 19, /*->1595*/
/*1576*/      OPC_CheckInteger, 23|128,19/*2455*/, 
/*1579*/      OPC_MoveParent,
/*1580*/      OPC_RecordChild2, // #1 = $src1
/*1581*/      OPC_CheckChild2Type, MVT::i32,
/*1583*/      OPC_RecordChild3, // #2 = $src2
/*1584*/      OPC_CheckChild3Type, MVT::i32,
/*1586*/      OPC_EmitMergeInputChains1_0,
/*1587*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETCLK_l2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 2455:iPTR, GRRegs:i32:$src1, GRRegs:i32:$src2) - Complexity = 8
              // Dst: (SETCLK_l2r GRRegs:i32:$src1, GRRegs:i32:$src2)
/*1595*/    /*Scope*/ 19, /*->1615*/
/*1596*/      OPC_CheckInteger, 29|128,19/*2461*/, 
/*1599*/      OPC_MoveParent,
/*1600*/      OPC_RecordChild2, // #1 = $src1
/*1601*/      OPC_CheckChild2Type, MVT::i32,
/*1603*/      OPC_RecordChild3, // #2 = $src2
/*1604*/      OPC_CheckChild3Type, MVT::i32,
/*1606*/      OPC_EmitMergeInputChains1_0,
/*1607*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETRDY_l2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 2461:iPTR, GRRegs:i32:$src1, GRRegs:i32:$src2) - Complexity = 8
              // Dst: (SETRDY_l2r GRRegs:i32:$src1, GRRegs:i32:$src2)
/*1615*/    /*Scope*/ 15, /*->1631*/
/*1616*/      OPC_CheckInteger, 16|128,19/*2448*/, 
/*1619*/      OPC_MoveParent,
/*1620*/      OPC_RecordChild2, // #1 = $a
/*1621*/      OPC_CheckChild2Type, MVT::i32,
/*1623*/      OPC_EmitMergeInputChains1_0,
/*1624*/      OPC_MorphNodeTo, TARGET_VAL(XCore::MSYNC_1r), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 2448:iPTR, GRRegs:i32:$a) - Complexity = 8
              // Dst: (MSYNC_1r GRRegs:i32:$a)
/*1631*/    /*Scope*/ 15, /*->1647*/
/*1632*/      OPC_CheckInteger, 15|128,19/*2447*/, 
/*1635*/      OPC_MoveParent,
/*1636*/      OPC_RecordChild2, // #1 = $a
/*1637*/      OPC_CheckChild2Type, MVT::i32,
/*1639*/      OPC_EmitMergeInputChains1_0,
/*1640*/      OPC_MorphNodeTo, TARGET_VAL(XCore::MJOIN_1r), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 2447:iPTR, GRRegs:i32:$a) - Complexity = 8
              // Dst: (MJOIN_1r GRRegs:i32:$a)
/*1647*/    /*Scope*/ 15, /*->1663*/
/*1648*/      OPC_CheckInteger, 35|128,19/*2467*/, 
/*1651*/      OPC_MoveParent,
/*1652*/      OPC_RecordChild2, // #1 = $a
/*1653*/      OPC_CheckChild2Type, MVT::i32,
/*1655*/      OPC_EmitMergeInputChains1_0,
/*1656*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SYNCR_1r), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 2467:iPTR, GRRegs:i32:$a) - Complexity = 8
              // Dst: (SYNCR_1r GRRegs:i32:$a)
/*1663*/    /*Scope*/ 15, /*->1679*/
/*1664*/      OPC_CheckInteger, 126|128,18/*2430*/, 
/*1667*/      OPC_MoveParent,
/*1668*/      OPC_RecordChild2, // #1 = $a
/*1669*/      OPC_CheckChild2Type, MVT::i32,
/*1671*/      OPC_EmitMergeInputChains1_0,
/*1672*/      OPC_MorphNodeTo, TARGET_VAL(XCore::FREER_1r), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 2430:iPTR, GRRegs:i32:$a) - Complexity = 8
              // Dst: (FREER_1r GRRegs:i32:$a)
/*1679*/    /*Scope*/ 21, /*->1701*/
/*1680*/      OPC_CheckInteger, 32|128,19/*2464*/, 
/*1683*/      OPC_MoveParent,
/*1684*/      OPC_RecordChild2, // #1 = $a
/*1685*/      OPC_CheckChild2Type, MVT::i32,
/*1687*/      OPC_RecordChild3, // #2 = physreg input R11
/*1688*/      OPC_CheckChild3Type, MVT::i32,
/*1690*/      OPC_EmitMergeInputChains1_0,
/*1691*/      OPC_EmitCopyToReg, 2, XCore::R11,
/*1694*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETV_1r), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 2464:iPTR, GRRegs:i32:$a, R11:i32) - Complexity = 8
              // Dst: (SETV_1r GRRegs:i32:$a)
/*1701*/    /*Scope*/ 21, /*->1723*/
/*1702*/      OPC_CheckInteger, 25|128,19/*2457*/, 
/*1705*/      OPC_MoveParent,
/*1706*/      OPC_RecordChild2, // #1 = $a
/*1707*/      OPC_CheckChild2Type, MVT::i32,
/*1709*/      OPC_RecordChild3, // #2 = physreg input R11
/*1710*/      OPC_CheckChild3Type, MVT::i32,
/*1712*/      OPC_EmitMergeInputChains1_0,
/*1713*/      OPC_EmitCopyToReg, 2, XCore::R11,
/*1716*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETEV_1r), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 2457:iPTR, GRRegs:i32:$a, R11:i32) - Complexity = 8
              // Dst: (SETEV_1r GRRegs:i32:$a)
/*1723*/    /*Scope*/ 15, /*->1739*/
/*1724*/      OPC_CheckInteger, 124|128,18/*2428*/, 
/*1727*/      OPC_MoveParent,
/*1728*/      OPC_RecordChild2, // #1 = $a
/*1729*/      OPC_CheckChild2Type, MVT::i32,
/*1731*/      OPC_EmitMergeInputChains1_0,
/*1732*/      OPC_MorphNodeTo, TARGET_VAL(XCore::EEU_1r), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 2428:iPTR, GRRegs:i32:$a) - Complexity = 8
              // Dst: (EEU_1r GRRegs:i32:$a)
/*1739*/    /*Scope*/ 11, /*->1751*/
/*1740*/      OPC_CheckInteger, 120|128,18/*2424*/, 
/*1743*/      OPC_MoveParent,
/*1744*/      OPC_EmitMergeInputChains1_0,
/*1745*/      OPC_MorphNodeTo, TARGET_VAL(XCore::CLRE_0R), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (intrinsic_void 2424:iPTR) - Complexity = 8
              // Dst: (CLRE_0R)
/*1751*/    /*Scope*/ 11, /*->1763*/
/*1752*/      OPC_CheckInteger, 34|128,19/*2466*/, 
/*1755*/      OPC_MoveParent,
/*1756*/      OPC_EmitMergeInputChains1_0,
/*1757*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SSYNC_0r), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (intrinsic_void 2466:iPTR) - Complexity = 8
              // Dst: (SSYNC_0r)
/*1763*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 126,  TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->1893
/*1767*/    OPC_MoveChild, 0,
/*1769*/    OPC_Scope, 38, /*->1809*/ // 5 children in Scope
/*1771*/      OPC_CheckInteger, 33|128,19/*2465*/, 
/*1774*/      OPC_MoveParent,
/*1775*/      OPC_RecordChild1, // #0 = $src1
/*1776*/      OPC_RecordChild2, // #1 = $src2
/*1777*/      OPC_Scope, 19, /*->1798*/ // 2 children in Scope
/*1779*/        OPC_MoveChild, 2,
/*1781*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1784*/        OPC_CheckPredicate, 19, // Predicate_immBitp
/*1786*/        OPC_MoveParent,
/*1787*/        OPC_EmitConvertToTarget, 1,
/*1789*/        OPC_MorphNodeTo, TARGET_VAL(XCore::SEXT_rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:i32 2465:iPTR, GRRegs:i32:$src1, (imm:i32)<<P:Predicate_immBitp>>:$src2) - Complexity = 12
                // Dst: (SEXT_rus:i32 GRRegs:i32:$src1, (imm:i32):$src2)
/*1798*/      /*Scope*/ 9, /*->1808*/
/*1799*/        OPC_MorphNodeTo, TARGET_VAL(XCore::SEXT_2r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:i32 2465:iPTR, GRRegs:i32:$src1, GRRegs:i32:$src2) - Complexity = 8
                // Dst: (SEXT_2r:i32 GRRegs:i32:$src1, GRRegs:i32:$src2)
/*1808*/      0, /*End of Scope*/
/*1809*/    /*Scope*/ 38, /*->1848*/
/*1810*/      OPC_CheckInteger, 39|128,19/*2471*/, 
/*1813*/      OPC_MoveParent,
/*1814*/      OPC_RecordChild1, // #0 = $src1
/*1815*/      OPC_RecordChild2, // #1 = $src2
/*1816*/      OPC_Scope, 19, /*->1837*/ // 2 children in Scope
/*1818*/        OPC_MoveChild, 2,
/*1820*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1823*/        OPC_CheckPredicate, 19, // Predicate_immBitp
/*1825*/        OPC_MoveParent,
/*1826*/        OPC_EmitConvertToTarget, 1,
/*1828*/        OPC_MorphNodeTo, TARGET_VAL(XCore::ZEXT_rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:i32 2471:iPTR, GRRegs:i32:$src1, (imm:i32)<<P:Predicate_immBitp>>:$src2) - Complexity = 12
                // Dst: (ZEXT_rus:i32 GRRegs:i32:$src1, (imm:i32):$src2)
/*1837*/      /*Scope*/ 9, /*->1847*/
/*1838*/        OPC_MorphNodeTo, TARGET_VAL(XCore::ZEXT_2r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:i32 2471:iPTR, GRRegs:i32:$src1, GRRegs:i32:$src2) - Complexity = 8
                // Dst: (ZEXT_2r:i32 GRRegs:i32:$src1, GRRegs:i32:$src2)
/*1847*/      0, /*End of Scope*/
/*1848*/    /*Scope*/ 17, /*->1866*/
/*1849*/      OPC_CheckInteger, 122|128,18/*2426*/, 
/*1852*/      OPC_MoveParent,
/*1853*/      OPC_RecordChild1, // #0 = $src1
/*1854*/      OPC_RecordChild2, // #1 = $src2
/*1855*/      OPC_RecordChild3, // #2 = $src3
/*1856*/      OPC_MorphNodeTo, TARGET_VAL(XCore::CRC_l3r), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 2426:iPTR, GRRegs:i32:$src1, GRRegs:i32:$src2, GRRegs:i32:$src3) - Complexity = 8
              // Dst: (CRC_l3r:i32 GRRegs:i32:$src1, GRRegs:i32:$src2, GRRegs:i32:$src3)
/*1866*/    /*Scope*/ 13, /*->1880*/
/*1867*/      OPC_CheckInteger, 117|128,18/*2421*/, 
/*1870*/      OPC_MoveParent,
/*1871*/      OPC_RecordChild1, // #0 = $src
/*1872*/      OPC_MorphNodeTo, TARGET_VAL(XCore::BITREV_l2r), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 2421:iPTR, GRRegs:i32:$src) - Complexity = 8
              // Dst: (BITREV_l2r:i32 GRRegs:i32:$src)
/*1880*/    /*Scope*/ 11, /*->1892*/
/*1881*/      OPC_CheckInteger, 1|128,19/*2433*/, 
/*1884*/      OPC_MoveParent,
/*1885*/      OPC_MorphNodeTo, TARGET_VAL(XCore::GETID_0R), 0,
                  1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
              // Src: (intrinsic_wo_chain:i32 2433:iPTR) - Complexity = 8
              // Dst: (GETID_0R:i32)
/*1892*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 10|128,2/*266*/,  TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->2163
/*1897*/    OPC_RecordNode,   // #0 = 'intrinsic_w_chain' chained node
/*1898*/    OPC_MoveChild, 1,
/*1900*/    OPC_Scope, 26, /*->1928*/ // 15 children in Scope
/*1902*/      OPC_CheckInteger, 3|128,19/*2435*/, 
/*1905*/      OPC_MoveParent,
/*1906*/      OPC_RecordChild2, // #1 = $type
/*1907*/      OPC_MoveChild, 2,
/*1909*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1912*/      OPC_CheckPredicate, 0, // Predicate_immUs
/*1914*/      OPC_MoveParent,
/*1915*/      OPC_CheckType, MVT::i32,
/*1917*/      OPC_EmitMergeInputChains1_0,
/*1918*/      OPC_EmitConvertToTarget, 1,
/*1920*/      OPC_MorphNodeTo, TARGET_VAL(XCore::GETR_rus), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (intrinsic_w_chain:i32 2435:iPTR, (imm:i32)<<P:Predicate_immUs>>:$type) - Complexity = 12
              // Dst: (GETR_rus:i32 (imm:i32):$type)
/*1928*/    /*Scope*/ 16, /*->1945*/
/*1929*/      OPC_CheckInteger, 5|128,19/*2437*/, 
/*1932*/      OPC_MoveParent,
/*1933*/      OPC_RecordChild2, // #1 = $r
/*1934*/      OPC_CheckChild2Type, MVT::i32,
/*1936*/      OPC_EmitMergeInputChains1_0,
/*1937*/      OPC_MorphNodeTo, TARGET_VAL(XCore::GETTS_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 2437:iPTR, GRRegs:i32:$r) - Complexity = 8
              // Dst: (GETTS_2r:i32 GRRegs:i32:$r)
/*1945*/    /*Scope*/ 18, /*->1964*/
/*1946*/      OPC_CheckInteger, 19|128,19/*2451*/, 
/*1949*/      OPC_MoveParent,
/*1950*/      OPC_RecordChild2, // #1 = $r
/*1951*/      OPC_CheckChild2Type, MVT::i32,
/*1953*/      OPC_RecordChild3, // #2 = $src
/*1954*/      OPC_EmitMergeInputChains1_0,
/*1955*/      OPC_MorphNodeTo, TARGET_VAL(XCore::OUTSHR_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (intrinsic_w_chain:i32 2451:iPTR, GRRegs:i32:$r, GRRegs:i32:$src) - Complexity = 8
              // Dst: (OUTSHR_2r:i32 GRRegs:i32:$src, GRRegs:i32:$r)
/*1964*/    /*Scope*/ 16, /*->1981*/
/*1965*/      OPC_CheckInteger, 7|128,19/*2439*/, 
/*1968*/      OPC_MoveParent,
/*1969*/      OPC_RecordChild2, // #1 = $r
/*1970*/      OPC_CheckChild2Type, MVT::i32,
/*1972*/      OPC_EmitMergeInputChains1_0,
/*1973*/      OPC_MorphNodeTo, TARGET_VAL(XCore::INCT_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 2439:iPTR, GRRegs:i32:$r) - Complexity = 8
              // Dst: (INCT_2r:i32 GRRegs:i32:$r)
/*1981*/    /*Scope*/ 16, /*->1998*/
/*1982*/      OPC_CheckInteger, 14|128,19/*2446*/, 
/*1985*/      OPC_MoveParent,
/*1986*/      OPC_RecordChild2, // #1 = $r
/*1987*/      OPC_CheckChild2Type, MVT::i32,
/*1989*/      OPC_EmitMergeInputChains1_0,
/*1990*/      OPC_MorphNodeTo, TARGET_VAL(XCore::INT_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 2446:iPTR, GRRegs:i32:$r) - Complexity = 8
              // Dst: (INT_2r:i32 GRRegs:i32:$r)
/*1998*/    /*Scope*/ 16, /*->2015*/
/*1999*/      OPC_CheckInteger, 6|128,19/*2438*/, 
/*2002*/      OPC_MoveParent,
/*2003*/      OPC_RecordChild2, // #1 = $r
/*2004*/      OPC_CheckChild2Type, MVT::i32,
/*2006*/      OPC_EmitMergeInputChains1_0,
/*2007*/      OPC_MorphNodeTo, TARGET_VAL(XCore::IN_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 2438:iPTR, GRRegs:i32:$r) - Complexity = 8
              // Dst: (IN_2r:i32 GRRegs:i32:$r)
/*2015*/    /*Scope*/ 18, /*->2034*/
/*2016*/      OPC_CheckInteger, 13|128,19/*2445*/, 
/*2019*/      OPC_MoveParent,
/*2020*/      OPC_RecordChild2, // #1 = $r
/*2021*/      OPC_CheckChild2Type, MVT::i32,
/*2023*/      OPC_RecordChild3, // #2 = $src
/*2024*/      OPC_EmitMergeInputChains1_0,
/*2025*/      OPC_MorphNodeTo, TARGET_VAL(XCore::INSHR_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (intrinsic_w_chain:i32 2445:iPTR, GRRegs:i32:$r, GRRegs:i32:$src) - Complexity = 8
              // Dst: (INSHR_2r:i32 GRRegs:i32:$src, GRRegs:i32:$r)
/*2034*/    /*Scope*/ 16, /*->2051*/
/*2035*/      OPC_CheckInteger, 36|128,19/*2468*/, 
/*2038*/      OPC_MoveParent,
/*2039*/      OPC_RecordChild2, // #1 = $src
/*2040*/      OPC_CheckChild2Type, MVT::i32,
/*2042*/      OPC_EmitMergeInputChains1_0,
/*2043*/      OPC_MorphNodeTo, TARGET_VAL(XCore::TESTCT_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 2468:iPTR, GRRegs:i32:$src) - Complexity = 8
              // Dst: (TESTCT_2r:i32 GRRegs:i32:$src)
/*2051*/    /*Scope*/ 16, /*->2068*/
/*2052*/      OPC_CheckInteger, 37|128,19/*2469*/, 
/*2055*/      OPC_MoveParent,
/*2056*/      OPC_RecordChild2, // #1 = $src
/*2057*/      OPC_CheckChild2Type, MVT::i32,
/*2059*/      OPC_EmitMergeInputChains1_0,
/*2060*/      OPC_MorphNodeTo, TARGET_VAL(XCore::TESTWCT_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 2469:iPTR, GRRegs:i32:$src) - Complexity = 8
              // Dst: (TESTWCT_2r:i32 GRRegs:i32:$src)
/*2068*/    /*Scope*/ 18, /*->2087*/
/*2069*/      OPC_CheckInteger, 4|128,19/*2436*/, 
/*2072*/      OPC_MoveParent,
/*2073*/      OPC_RecordChild2, // #1 = $r
/*2074*/      OPC_CheckChild2Type, MVT::i32,
/*2076*/      OPC_CheckType, MVT::i32,
/*2078*/      OPC_EmitMergeInputChains1_0,
/*2079*/      OPC_MorphNodeTo, TARGET_VAL(XCore::GETST_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 2436:iPTR, GRRegs:i32:$r) - Complexity = 8
              // Dst: (GETST_2r:i32 GRRegs:i32:$r)
/*2087*/    /*Scope*/ 16, /*->2104*/
/*2088*/      OPC_CheckInteger, 21|128,19/*2453*/, 
/*2091*/      OPC_MoveParent,
/*2092*/      OPC_RecordChild2, // #1 = $src
/*2093*/      OPC_CheckChild2Type, MVT::i32,
/*2095*/      OPC_EmitMergeInputChains1_0,
/*2096*/      OPC_MorphNodeTo, TARGET_VAL(XCore::PEEK_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 2453:iPTR, GRRegs:i32:$src) - Complexity = 8
              // Dst: (PEEK_2r:i32 GRRegs:i32:$src)
/*2104*/    /*Scope*/ 16, /*->2121*/
/*2105*/      OPC_CheckInteger, 125|128,18/*2429*/, 
/*2108*/      OPC_MoveParent,
/*2109*/      OPC_RecordChild2, // #1 = $src
/*2110*/      OPC_CheckChild2Type, MVT::i32,
/*2112*/      OPC_EmitMergeInputChains1_0,
/*2113*/      OPC_MorphNodeTo, TARGET_VAL(XCore::ENDIN_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 2429:iPTR, GRRegs:i32:$src) - Complexity = 8
              // Dst: (ENDIN_2r:i32 GRRegs:i32:$src)
/*2121*/    /*Scope*/ 14, /*->2136*/
/*2122*/      OPC_CheckInteger, 2|128,19/*2434*/, 
/*2125*/      OPC_MoveParent,
/*2126*/      OPC_RecordChild2, // #1 = $src
/*2127*/      OPC_EmitMergeInputChains1_0,
/*2128*/      OPC_MorphNodeTo, TARGET_VAL(XCore::GETPS_l2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 2434:iPTR, GRRegs:i32:$src) - Complexity = 8
              // Dst: (GETPS_l2r:i32 GRRegs:i32:$src)
/*2136*/    /*Scope*/ 12, /*->2149*/
/*2137*/      OPC_CheckInteger, 127|128,18/*2431*/, 
/*2140*/      OPC_MoveParent,
/*2141*/      OPC_EmitMergeInputChains1_0,
/*2142*/      OPC_MorphNodeTo, TARGET_VAL(XCore::GETED_0R), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
              // Src: (intrinsic_w_chain:i32 2431:iPTR) - Complexity = 8
              // Dst: (GETED_0R:i32)
/*2149*/    /*Scope*/ 12, /*->2162*/
/*2150*/      OPC_CheckInteger, 0|128,19/*2432*/, 
/*2153*/      OPC_MoveParent,
/*2154*/      OPC_EmitMergeInputChains1_0,
/*2155*/      OPC_MorphNodeTo, TARGET_VAL(XCore::GETET_0R), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
              // Src: (intrinsic_w_chain:i32 2432:iPTR) - Complexity = 8
              // Dst: (GETET_0R:i32)
/*2162*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 113,  TARGET_VAL(ISD::SUB),// ->2279
/*2166*/    OPC_Scope, 39, /*->2207*/ // 3 children in Scope
/*2168*/      OPC_RecordChild0, // #0 = $addr
/*2169*/      OPC_MoveChild, 1,
/*2171*/      OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*2174*/      OPC_RecordChild0, // #1 = $offset
/*2175*/      OPC_MoveChild, 1,
/*2177*/      OPC_Scope, 13, /*->2192*/ // 2 children in Scope
/*2179*/        OPC_CheckInteger, 2, 
/*2181*/        OPC_MoveParent,
/*2182*/        OPC_MoveParent,
/*2183*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWB_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sub:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 2:i32)) - Complexity = 11
                // Dst: (LDAWB_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*2192*/      /*Scope*/ 13, /*->2206*/
/*2193*/        OPC_CheckInteger, 1, 
/*2195*/        OPC_MoveParent,
/*2196*/        OPC_MoveParent,
/*2197*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LDA16B_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sub:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 1:i32)) - Complexity = 11
                // Dst: (LDA16B_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*2206*/      0, /*End of Scope*/
/*2207*/    /*Scope*/ 14, /*->2222*/
/*2208*/      OPC_MoveChild, 0,
/*2210*/      OPC_CheckInteger, 0, 
/*2212*/      OPC_MoveParent,
/*2213*/      OPC_RecordChild1, // #0 = $b
/*2214*/      OPC_MorphNodeTo, TARGET_VAL(XCore::NEG), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (sub:i32 0:i32, GRRegs:i32:$b) - Complexity = 8
              // Dst: (NEG:i32 GRRegs:i32:$b)
/*2222*/    /*Scope*/ 55, /*->2278*/
/*2223*/      OPC_RecordChild0, // #0 = $b
/*2224*/      OPC_RecordChild1, // #1 = $c
/*2225*/      OPC_Scope, 40, /*->2267*/ // 2 children in Scope
/*2227*/        OPC_MoveChild, 1,
/*2229*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2232*/        OPC_Scope, 14, /*->2248*/ // 2 children in Scope
/*2234*/          OPC_CheckPredicate, 0, // Predicate_immUs
/*2236*/          OPC_MoveParent,
/*2237*/          OPC_EmitConvertToTarget, 1,
/*2239*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SUB_2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (sub:i32 GRRegs:i32:$b, (imm:i32)<<P:Predicate_immUs>>:$c) - Complexity = 7
                  // Dst: (SUB_2rus:i32 GRRegs:i32:$b, (imm:i32):$c)
/*2248*/        /*Scope*/ 17, /*->2266*/
/*2249*/          OPC_CheckPredicate, 1, // Predicate_immUs4
/*2251*/          OPC_MoveParent,
/*2252*/          OPC_EmitConvertToTarget, 1,
/*2254*/          OPC_EmitNodeXForm, 0, 2, // div4_xform
/*2257*/          OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWB_l2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (sub:i32 GRRegs:i32:$addr, (imm:i32)<<P:Predicate_immUs4>>:$offset) - Complexity = 7
                  // Dst: (LDAWB_l2rus:i32 GRRegs:i32:$addr, (div4_xform:i32 (imm:i32)<<P:Predicate_immUs4>>:$offset))
/*2266*/        0, /*End of Scope*/
/*2267*/      /*Scope*/ 9, /*->2277*/
/*2268*/        OPC_MorphNodeTo, TARGET_VAL(XCore::SUB_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sub:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
                // Dst: (SUB_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*2277*/      0, /*End of Scope*/
/*2278*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 104,  TARGET_VAL(ISD::AND),// ->2386
/*2282*/    OPC_Scope, 31, /*->2315*/ // 3 children in Scope
/*2284*/      OPC_RecordChild0, // #0 = $src1
/*2285*/      OPC_MoveChild, 1,
/*2287*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2290*/      OPC_RecordChild0, // #1 = $src2
/*2291*/      OPC_MoveChild, 1,
/*2293*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2304*/      OPC_MoveParent,
/*2305*/      OPC_MoveParent,
/*2306*/      OPC_MorphNodeTo, TARGET_VAL(XCore::ANDNOT_2r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (and:i32 GRRegs:i32:$src1, (xor:i32 GRRegs:i32:$src2, -1:i32)) - Complexity = 11
              // Dst: (ANDNOT_2r:i32 GRRegs:i32:$src1, GRRegs:i32:$src2)
/*2315*/    /*Scope*/ 31, /*->2347*/
/*2316*/      OPC_MoveChild, 0,
/*2318*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2321*/      OPC_RecordChild0, // #0 = $src2
/*2322*/      OPC_MoveChild, 1,
/*2324*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2335*/      OPC_MoveParent,
/*2336*/      OPC_MoveParent,
/*2337*/      OPC_RecordChild1, // #1 = $src1
/*2338*/      OPC_MorphNodeTo, TARGET_VAL(XCore::ANDNOT_2r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (and:i32 (xor:i32 GRRegs:i32:$src2, -1:i32), GRRegs:i32:$src1) - Complexity = 11
              // Dst: (ANDNOT_2r:i32 GRRegs:i32:$src1, GRRegs:i32:$src2)
/*2347*/    /*Scope*/ 37, /*->2385*/
/*2348*/      OPC_RecordChild0, // #0 = $val
/*2349*/      OPC_RecordChild1, // #1 = $mask
/*2350*/      OPC_Scope, 22, /*->2374*/ // 2 children in Scope
/*2352*/        OPC_MoveChild, 1,
/*2354*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2357*/        OPC_CheckPredicate, 22, // Predicate_immMskBitp
/*2359*/        OPC_MoveParent,
/*2360*/        OPC_EmitConvertToTarget, 1,
/*2362*/        OPC_EmitNodeXForm, 4, 2, // msksize_xform
/*2365*/        OPC_MorphNodeTo, TARGET_VAL(XCore::ZEXT_rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (and:i32 GRRegs:i32:$val, (imm:i32)<<P:Predicate_immMskBitp>>:$mask) - Complexity = 7
                // Dst: (ZEXT_rus:i32 GRRegs:i32:$val, (msksize_xform:i32 (imm:i32)<<P:Predicate_immMskBitp>>:$mask))
/*2374*/      /*Scope*/ 9, /*->2384*/
/*2375*/        OPC_MorphNodeTo, TARGET_VAL(XCore::AND_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
                // Dst: (AND_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*2384*/      0, /*End of Scope*/
/*2385*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 40,  TARGET_VAL(ISD::BRIND),// ->2429
/*2389*/    OPC_RecordNode,   // #0 = 'brind' chained node
/*2390*/    OPC_Scope, 24, /*->2416*/ // 2 children in Scope
/*2392*/      OPC_MoveChild, 1,
/*2394*/      OPC_CheckOpcode, TARGET_VAL(ISD::INTRINSIC_W_CHAIN),
/*2397*/      OPC_RecordNode, // #1 = 'intrinsic_w_chain' chained node
/*2398*/      OPC_CheckFoldableChainNode,
/*2399*/      OPC_MoveChild, 1,
/*2401*/      OPC_CheckInteger, 38|128,19/*2470*/, 
/*2404*/      OPC_MoveParent,
/*2405*/      OPC_MoveParent,
/*2406*/      OPC_EmitMergeInputChains, 2, 0, 1, 
/*2410*/      OPC_MorphNodeTo, TARGET_VAL(XCore::WAITEU_0R), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (brind (intrinsic_w_chain:iPTR 2470:iPTR)) - Complexity = 11
              // Dst: (WAITEU_0R)
/*2416*/    /*Scope*/ 11, /*->2428*/
/*2417*/      OPC_RecordChild1, // #1 = $a
/*2418*/      OPC_CheckChild1Type, MVT::i32,
/*2420*/      OPC_EmitMergeInputChains1_0,
/*2421*/      OPC_MorphNodeTo, TARGET_VAL(XCore::BAU_1r), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (brind GRRegs:i32:$a) - Complexity = 3
              // Dst: (BAU_1r GRRegs:i32:$a)
/*2428*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 113|128,2/*369*/,  TARGET_VAL(ISD::BRCOND),// ->2802
/*2433*/    OPC_RecordNode,   // #0 = 'brcond' chained node
/*2434*/    OPC_Scope, 90|128,2/*346*/, /*->2783*/ // 2 children in Scope
/*2437*/      OPC_MoveChild, 1,
/*2439*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*2442*/      OPC_RecordChild0, // #1 = $lhs
/*2443*/      OPC_Scope, 6|128,1/*134*/, /*->2580*/ // 3 children in Scope
/*2446*/        OPC_MoveChild, 1,
/*2448*/        OPC_Scope, 82, /*->2532*/ // 2 children in Scope
/*2450*/          OPC_CheckInteger, 0, 
/*2452*/          OPC_MoveParent,
/*2453*/          OPC_MoveChild, 2,
/*2455*/          OPC_Scope, 20, /*->2477*/ // 3 children in Scope
/*2457*/            OPC_CheckCondCode, ISD::SETNE,
/*2459*/            OPC_MoveParent,
/*2460*/            OPC_MoveParent,
/*2461*/            OPC_RecordChild2, // #2 = $dst
/*2462*/            OPC_MoveChild, 2,
/*2464*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2467*/            OPC_MoveParent,
/*2468*/            OPC_EmitMergeInputChains1_0,
/*2469*/            OPC_MorphNodeTo, TARGET_VAL(XCore::BRFT_lru6), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETNE:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BRFT_lru6 GRRegs:i32:$lhs, (bb:Other):$dst)
/*2477*/          /*Scope*/ 20, /*->2498*/
/*2478*/            OPC_CheckCondCode, ISD::SETEQ,
/*2480*/            OPC_MoveParent,
/*2481*/            OPC_MoveParent,
/*2482*/            OPC_RecordChild2, // #2 = $dst
/*2483*/            OPC_MoveChild, 2,
/*2485*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2488*/            OPC_MoveParent,
/*2489*/            OPC_EmitMergeInputChains1_0,
/*2490*/            OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETEQ:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BRFF_lru6 GRRegs:i32:$lhs, (bb:Other):$dst)
/*2498*/          /*Scope*/ 32, /*->2531*/
/*2499*/            OPC_CheckCondCode, ISD::SETLT,
/*2501*/            OPC_MoveParent,
/*2502*/            OPC_MoveParent,
/*2503*/            OPC_RecordChild2, // #2 = $dst
/*2504*/            OPC_MoveChild, 2,
/*2506*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2509*/            OPC_MoveParent,
/*2510*/            OPC_EmitMergeInputChains1_0,
/*2511*/            OPC_EmitInteger, MVT::i32, 32, 
/*2514*/            OPC_EmitNode, TARGET_VAL(XCore::ASHR_l2rus), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3,  // Results = #4
/*2523*/            OPC_MorphNodeTo, TARGET_VAL(XCore::BRFT_lru6), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 4, 2, 
                    // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETLT:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BRFT_lru6 (ASHR_l2rus:i32 GRRegs:i32:$lhs, 32:i32), (bb:Other):$dst)
/*2531*/          0, /*End of Scope*/
/*2532*/        /*Scope*/ 46, /*->2579*/
/*2533*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2544*/          OPC_MoveParent,
/*2545*/          OPC_MoveChild, 2,
/*2547*/          OPC_CheckCondCode, ISD::SETGT,
/*2549*/          OPC_MoveParent,
/*2550*/          OPC_MoveParent,
/*2551*/          OPC_RecordChild2, // #2 = $dst
/*2552*/          OPC_MoveChild, 2,
/*2554*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2557*/          OPC_MoveParent,
/*2558*/          OPC_EmitMergeInputChains1_0,
/*2559*/          OPC_EmitInteger, MVT::i32, 32, 
/*2562*/          OPC_EmitNode, TARGET_VAL(XCore::ASHR_l2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3,  // Results = #4
/*2571*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 2, 
                  // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, -1:i32, SETGT:Other), (bb:Other):$dst) - Complexity = 11
                  // Dst: (BRFF_lru6 (ASHR_l2rus:i32 GRRegs:i32:$lhs, 32:i32), (bb:Other):$dst)
/*2579*/        0, /*End of Scope*/
/*2580*/      /*Scope*/ 42, /*->2623*/
/*2581*/        OPC_RecordChild1, // #2 = $rhs
/*2582*/        OPC_MoveChild, 1,
/*2584*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2587*/        OPC_CheckPredicate, 0, // Predicate_immUs
/*2589*/        OPC_MoveParent,
/*2590*/        OPC_MoveChild, 2,
/*2592*/        OPC_CheckCondCode, ISD::SETNE,
/*2594*/        OPC_MoveParent,
/*2595*/        OPC_MoveParent,
/*2596*/        OPC_RecordChild2, // #3 = $dst
/*2597*/        OPC_MoveChild, 2,
/*2599*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2602*/        OPC_MoveParent,
/*2603*/        OPC_EmitMergeInputChains1_0,
/*2604*/        OPC_EmitConvertToTarget, 2,
/*2606*/        OPC_EmitNode, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*2615*/        OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 5, 3, 
                // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs, SETNE:Other), (bb:Other):$dst) - Complexity = 10
                // Dst: (BRFF_lru6 (EQ_2rus:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs), (bb:Other):$dst)
/*2623*/      /*Scope*/ 29|128,1/*157*/, /*->2782*/
/*2625*/        OPC_CheckChild0Type, MVT::i32,
/*2627*/        OPC_RecordChild1, // #2 = $rhs
/*2628*/        OPC_MoveChild, 2,
/*2630*/        OPC_Scope, 29, /*->2661*/ // 5 children in Scope
/*2632*/          OPC_CheckCondCode, ISD::SETLE,
/*2634*/          OPC_MoveParent,
/*2635*/          OPC_MoveParent,
/*2636*/          OPC_RecordChild2, // #3 = $dst
/*2637*/          OPC_MoveChild, 2,
/*2639*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2642*/          OPC_MoveParent,
/*2643*/          OPC_EmitMergeInputChains1_0,
/*2644*/          OPC_EmitNode, TARGET_VAL(XCore::LSS_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*2653*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETLE:Other), (bb:Other):$dst) - Complexity = 6
                  // Dst: (BRFF_lru6 (LSS_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), (bb:Other):$dst)
/*2661*/        /*Scope*/ 29, /*->2691*/
/*2662*/          OPC_CheckCondCode, ISD::SETULE,
/*2664*/          OPC_MoveParent,
/*2665*/          OPC_MoveParent,
/*2666*/          OPC_RecordChild2, // #3 = $dst
/*2667*/          OPC_MoveChild, 2,
/*2669*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2672*/          OPC_MoveParent,
/*2673*/          OPC_EmitMergeInputChains1_0,
/*2674*/          OPC_EmitNode, TARGET_VAL(XCore::LSU_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*2683*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETULE:Other), (bb:Other):$dst) - Complexity = 6
                  // Dst: (BRFF_lru6 (LSU_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), (bb:Other):$dst)
/*2691*/        /*Scope*/ 29, /*->2721*/
/*2692*/          OPC_CheckCondCode, ISD::SETGE,
/*2694*/          OPC_MoveParent,
/*2695*/          OPC_MoveParent,
/*2696*/          OPC_RecordChild2, // #3 = $dst
/*2697*/          OPC_MoveChild, 2,
/*2699*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2702*/          OPC_MoveParent,
/*2703*/          OPC_EmitMergeInputChains1_0,
/*2704*/          OPC_EmitNode, TARGET_VAL(XCore::LSS_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*2713*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 6
                  // Dst: (BRFF_lru6 (LSS_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), (bb:Other):$dst)
/*2721*/        /*Scope*/ 29, /*->2751*/
/*2722*/          OPC_CheckCondCode, ISD::SETUGE,
/*2724*/          OPC_MoveParent,
/*2725*/          OPC_MoveParent,
/*2726*/          OPC_RecordChild2, // #3 = $dst
/*2727*/          OPC_MoveChild, 2,
/*2729*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2732*/          OPC_MoveParent,
/*2733*/          OPC_EmitMergeInputChains1_0,
/*2734*/          OPC_EmitNode, TARGET_VAL(XCore::LSU_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*2743*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 6
                  // Dst: (BRFF_lru6 (LSU_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), (bb:Other):$dst)
/*2751*/        /*Scope*/ 29, /*->2781*/
/*2752*/          OPC_CheckCondCode, ISD::SETNE,
/*2754*/          OPC_MoveParent,
/*2755*/          OPC_MoveParent,
/*2756*/          OPC_RecordChild2, // #3 = $dst
/*2757*/          OPC_MoveChild, 2,
/*2759*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2762*/          OPC_MoveParent,
/*2763*/          OPC_EmitMergeInputChains1_0,
/*2764*/          OPC_EmitNode, TARGET_VAL(XCore::EQ_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*2773*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETNE:Other), (bb:Other):$dst) - Complexity = 6
                  // Dst: (BRFF_lru6 (EQ_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), (bb:Other):$dst)
/*2781*/        0, /*End of Scope*/
/*2782*/      0, /*End of Scope*/
/*2783*/    /*Scope*/ 17, /*->2801*/
/*2784*/      OPC_RecordChild1, // #1 = $cond
/*2785*/      OPC_RecordChild2, // #2 = $addr
/*2786*/      OPC_MoveChild, 2,
/*2788*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2791*/      OPC_MoveParent,
/*2792*/      OPC_EmitMergeInputChains1_0,
/*2793*/      OPC_MorphNodeTo, TARGET_VAL(XCore::BRFT_lru6), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (brcond GRRegs:i32:$cond, (bb:Other):$addr) - Complexity = 3
              // Dst: (BRFT_lru6 GRRegs:i32:$cond, (bb:Other):$addr)
/*2801*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 89|128,2/*345*/,  TARGET_VAL(ISD::SELECT),// ->3151
/*2806*/    OPC_Scope, 69|128,2/*325*/, /*->3134*/ // 2 children in Scope
/*2809*/      OPC_MoveChild, 0,
/*2811*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*2814*/      OPC_RecordChild0, // #0 = $lhs
/*2815*/      OPC_Scope, 126, /*->2943*/ // 3 children in Scope
/*2817*/        OPC_MoveChild, 1,
/*2819*/        OPC_Scope, 76, /*->2897*/ // 2 children in Scope
/*2821*/          OPC_CheckInteger, 0, 
/*2823*/          OPC_MoveParent,
/*2824*/          OPC_MoveChild, 2,
/*2826*/          OPC_Scope, 18, /*->2846*/ // 3 children in Scope
/*2828*/            OPC_CheckCondCode, ISD::SETNE,
/*2830*/            OPC_MoveParent,
/*2831*/            OPC_MoveParent,
/*2832*/            OPC_RecordChild1, // #1 = $T
/*2833*/            OPC_RecordChild2, // #2 = $F
/*2834*/            OPC_CheckType, MVT::i32,
/*2836*/            OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETNE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 11
                    // Dst: (SELECT_CC:i32 GRRegs:i32:$lhs, GRRegs:i32:$T, GRRegs:i32:$F)
/*2846*/          /*Scope*/ 18, /*->2865*/
/*2847*/            OPC_CheckCondCode, ISD::SETEQ,
/*2849*/            OPC_MoveParent,
/*2850*/            OPC_MoveParent,
/*2851*/            OPC_RecordChild1, // #1 = $T
/*2852*/            OPC_RecordChild2, // #2 = $F
/*2853*/            OPC_CheckType, MVT::i32,
/*2855*/            OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 2, 1, 
                    // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETEQ:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 11
                    // Dst: (SELECT_CC:i32 GRRegs:i32:$lhs, GRRegs:i32:$F, GRRegs:i32:$T)
/*2865*/          /*Scope*/ 30, /*->2896*/
/*2866*/            OPC_CheckCondCode, ISD::SETLT,
/*2868*/            OPC_MoveParent,
/*2869*/            OPC_MoveParent,
/*2870*/            OPC_RecordChild1, // #1 = $T
/*2871*/            OPC_RecordChild2, // #2 = $F
/*2872*/            OPC_CheckType, MVT::i32,
/*2874*/            OPC_EmitInteger, MVT::i32, 32, 
/*2877*/            OPC_EmitNode, TARGET_VAL(XCore::ASHR_l2rus), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*2886*/            OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 1, 2, 
                    // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETLT:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 11
                    // Dst: (SELECT_CC:i32 (ASHR_l2rus:i32 GRRegs:i32:$lhs, 32:i32), GRRegs:i32:$T, GRRegs:i32:$F)
/*2896*/          0, /*End of Scope*/
/*2897*/        /*Scope*/ 44, /*->2942*/
/*2898*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2909*/          OPC_MoveParent,
/*2910*/          OPC_MoveChild, 2,
/*2912*/          OPC_CheckCondCode, ISD::SETGT,
/*2914*/          OPC_MoveParent,
/*2915*/          OPC_MoveParent,
/*2916*/          OPC_RecordChild1, // #1 = $T
/*2917*/          OPC_RecordChild2, // #2 = $F
/*2918*/          OPC_CheckType, MVT::i32,
/*2920*/          OPC_EmitInteger, MVT::i32, 32, 
/*2923*/          OPC_EmitNode, TARGET_VAL(XCore::ASHR_l2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*2932*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 2, 1, 
                  // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, -1:i32, SETGT:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 11
                  // Dst: (SELECT_CC:i32 (ASHR_l2rus:i32 GRRegs:i32:$lhs, 32:i32), GRRegs:i32:$F, GRRegs:i32:$T)
/*2942*/        0, /*End of Scope*/
/*2943*/      /*Scope*/ 40, /*->2984*/
/*2944*/        OPC_RecordChild1, // #1 = $rhs
/*2945*/        OPC_MoveChild, 1,
/*2947*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2950*/        OPC_CheckPredicate, 0, // Predicate_immUs
/*2952*/        OPC_MoveParent,
/*2953*/        OPC_MoveChild, 2,
/*2955*/        OPC_CheckCondCode, ISD::SETNE,
/*2957*/        OPC_MoveParent,
/*2958*/        OPC_MoveParent,
/*2959*/        OPC_RecordChild1, // #2 = $T
/*2960*/        OPC_RecordChild2, // #3 = $F
/*2961*/        OPC_CheckType, MVT::i32,
/*2963*/        OPC_EmitConvertToTarget, 1,
/*2965*/        OPC_EmitNode, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*2974*/        OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 5, 3, 2, 
                // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs, SETNE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 10
                // Dst: (SELECT_CC:i32 (EQ_2rus:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs), GRRegs:i32:$F, GRRegs:i32:$T)
/*2984*/      /*Scope*/ 19|128,1/*147*/, /*->3133*/
/*2986*/        OPC_CheckChild0Type, MVT::i32,
/*2988*/        OPC_RecordChild1, // #1 = $rhs
/*2989*/        OPC_MoveChild, 2,
/*2991*/        OPC_Scope, 27, /*->3020*/ // 5 children in Scope
/*2993*/          OPC_CheckCondCode, ISD::SETLE,
/*2995*/          OPC_MoveParent,
/*2996*/          OPC_MoveParent,
/*2997*/          OPC_RecordChild1, // #2 = $T
/*2998*/          OPC_RecordChild2, // #3 = $F
/*2999*/          OPC_CheckType, MVT::i32,
/*3001*/          OPC_EmitNode, TARGET_VAL(XCore::LSS_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*3010*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 3, 2, 
                  // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETLE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 6
                  // Dst: (SELECT_CC:i32 (LSS_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), GRRegs:i32:$F, GRRegs:i32:$T)
/*3020*/        /*Scope*/ 27, /*->3048*/
/*3021*/          OPC_CheckCondCode, ISD::SETULE,
/*3023*/          OPC_MoveParent,
/*3024*/          OPC_MoveParent,
/*3025*/          OPC_RecordChild1, // #2 = $T
/*3026*/          OPC_RecordChild2, // #3 = $F
/*3027*/          OPC_CheckType, MVT::i32,
/*3029*/          OPC_EmitNode, TARGET_VAL(XCore::LSU_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*3038*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 3, 2, 
                  // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETULE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 6
                  // Dst: (SELECT_CC:i32 (LSU_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), GRRegs:i32:$F, GRRegs:i32:$T)
/*3048*/        /*Scope*/ 27, /*->3076*/
/*3049*/          OPC_CheckCondCode, ISD::SETGE,
/*3051*/          OPC_MoveParent,
/*3052*/          OPC_MoveParent,
/*3053*/          OPC_RecordChild1, // #2 = $T
/*3054*/          OPC_RecordChild2, // #3 = $F
/*3055*/          OPC_CheckType, MVT::i32,
/*3057*/          OPC_EmitNode, TARGET_VAL(XCore::LSS_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*3066*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 3, 2, 
                  // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETGE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 6
                  // Dst: (SELECT_CC:i32 (LSS_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), GRRegs:i32:$F, GRRegs:i32:$T)
/*3076*/        /*Scope*/ 27, /*->3104*/
/*3077*/          OPC_CheckCondCode, ISD::SETUGE,
/*3079*/          OPC_MoveParent,
/*3080*/          OPC_MoveParent,
/*3081*/          OPC_RecordChild1, // #2 = $T
/*3082*/          OPC_RecordChild2, // #3 = $F
/*3083*/          OPC_CheckType, MVT::i32,
/*3085*/          OPC_EmitNode, TARGET_VAL(XCore::LSU_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*3094*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 3, 2, 
                  // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETUGE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 6
                  // Dst: (SELECT_CC:i32 (LSU_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), GRRegs:i32:$F, GRRegs:i32:$T)
/*3104*/        /*Scope*/ 27, /*->3132*/
/*3105*/          OPC_CheckCondCode, ISD::SETNE,
/*3107*/          OPC_MoveParent,
/*3108*/          OPC_MoveParent,
/*3109*/          OPC_RecordChild1, // #2 = $T
/*3110*/          OPC_RecordChild2, // #3 = $F
/*3111*/          OPC_CheckType, MVT::i32,
/*3113*/          OPC_EmitNode, TARGET_VAL(XCore::EQ_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*3122*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 3, 2, 
                  // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETNE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 6
                  // Dst: (SELECT_CC:i32 (EQ_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), GRRegs:i32:$F, GRRegs:i32:$T)
/*3132*/        0, /*End of Scope*/
/*3133*/      0, /*End of Scope*/
/*3134*/    /*Scope*/ 15, /*->3150*/
/*3135*/      OPC_RecordChild0, // #0 = $cond
/*3136*/      OPC_RecordChild1, // #1 = $T
/*3137*/      OPC_RecordChild2, // #2 = $F
/*3138*/      OPC_CheckType, MVT::i32,
/*3140*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (select:i32 GRRegs:i32:$cond, GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 3
              // Dst: (SELECT_CC:i32 GRRegs:i32:$cond, GRRegs:i32:$T, GRRegs:i32:$F)
/*3150*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::CALLSEQ_END),// ->3180
/*3154*/    OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*3155*/    OPC_CaptureGlueInput,
/*3156*/    OPC_RecordChild1, // #1 = $amt1
/*3157*/    OPC_MoveChild, 1,
/*3159*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*3162*/    OPC_MoveParent,
/*3163*/    OPC_RecordChild2, // #2 = $amt2
/*3164*/    OPC_MoveChild, 2,
/*3166*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*3169*/    OPC_MoveParent,
/*3170*/    OPC_EmitMergeInputChains1_0,
/*3171*/    OPC_MorphNodeTo, TARGET_VAL(XCore::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP:i32 (timm:i32):$amt1, (timm:i32):$amt2)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::FrameIndex),// ->3198
/*3183*/    OPC_RecordNode,   // #0 = $addr
/*3184*/    OPC_CheckType, MVT::i32,
/*3186*/    OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectADDRspii:$addr #1 #2
/*3189*/    OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWFI), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: ADDRspii:i32:$addr - Complexity = 9
            // Dst: (LDAWFI:i32 ADDRspii:i32:$addr)
          /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::XOR),// ->3238
/*3201*/    OPC_RecordChild0, // #0 = $b
/*3202*/    OPC_Scope, 22, /*->3226*/ // 2 children in Scope
/*3204*/      OPC_MoveChild, 1,
/*3206*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3217*/      OPC_MoveParent,
/*3218*/      OPC_MorphNodeTo, TARGET_VAL(XCore::NOT), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (xor:i32 GRRegs:i32:$b, -1:i32) - Complexity = 8
              // Dst: (NOT:i32 GRRegs:i32:$b)
/*3226*/    /*Scope*/ 10, /*->3237*/
/*3227*/      OPC_RecordChild1, // #1 = $c
/*3228*/      OPC_MorphNodeTo, TARGET_VAL(XCore::XOR_l3r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
              // Dst: (XOR_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*3237*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 67,  TARGET_VAL(ISD::MUL),// ->3308
/*3241*/    OPC_RecordChild0, // #0 = $src
/*3242*/    OPC_Scope, 52, /*->3296*/ // 2 children in Scope
/*3244*/      OPC_MoveChild, 1,
/*3246*/      OPC_Scope, 12, /*->3260*/ // 3 children in Scope
/*3248*/        OPC_CheckInteger, 3, 
/*3250*/        OPC_MoveParent,
/*3251*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LDA16F_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                // Src: (mul:i32 GRRegs:i32:$src, 3:i32) - Complexity = 8
                // Dst: (LDA16F_l3r:i32 GRRegs:i32:$src, GRRegs:i32:$src)
/*3260*/      /*Scope*/ 12, /*->3273*/
/*3261*/        OPC_CheckInteger, 5, 
/*3263*/        OPC_MoveParent,
/*3264*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWF_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                // Src: (mul:i32 GRRegs:i32:$src, 5:i32) - Complexity = 8
                // Dst: (LDAWF_l3r:i32 GRRegs:i32:$src, GRRegs:i32:$src)
/*3273*/      /*Scope*/ 21, /*->3295*/
/*3274*/        OPC_CheckInteger, 125|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551613*/, 
/*3285*/        OPC_MoveParent,
/*3286*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWB_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                // Src: (mul:i32 GRRegs:i32:$src, -3:i32) - Complexity = 8
                // Dst: (LDAWB_l3r:i32 GRRegs:i32:$src, GRRegs:i32:$src)
/*3295*/      0, /*End of Scope*/
/*3296*/    /*Scope*/ 10, /*->3307*/
/*3297*/      OPC_RecordChild1, // #1 = $c
/*3298*/      OPC_MorphNodeTo, TARGET_VAL(XCore::MUL_l3r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
              // Dst: (MUL_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*3307*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 46|128,2/*302*/,  TARGET_VAL(ISD::SETCC),// ->3614
/*3312*/    OPC_RecordChild0, // #0 = $lhs
/*3313*/    OPC_Scope, 43, /*->3358*/ // 3 children in Scope
/*3315*/      OPC_MoveChild, 1,
/*3317*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3328*/      OPC_MoveParent,
/*3329*/      OPC_MoveChild, 2,
/*3331*/      OPC_CheckCondCode, ISD::SETGT,
/*3333*/      OPC_MoveParent,
/*3334*/      OPC_EmitInteger, MVT::i32, 32, 
/*3337*/      OPC_EmitNode, TARGET_VAL(XCore::ASHR_l2rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*3346*/      OPC_EmitInteger, MVT::i32, 0, 
/*3349*/      OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (setcc:i32 GRRegs:i32:$lhs, -1:i32, SETGT:Other) - Complexity = 8
              // Dst: (EQ_2rus:i32 (ASHR_l2rus:i32 GRRegs:i32:$lhs, 32:i32), 0:i32)
/*3358*/    /*Scope*/ 55, /*->3414*/
/*3359*/      OPC_RecordChild1, // #1 = $rhs
/*3360*/      OPC_MoveChild, 1,
/*3362*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3365*/      OPC_CheckPredicate, 0, // Predicate_immUs
/*3367*/      OPC_MoveParent,
/*3368*/      OPC_MoveChild, 2,
/*3370*/      OPC_Scope, 14, /*->3386*/ // 2 children in Scope
/*3372*/        OPC_CheckCondCode, ISD::SETEQ,
/*3374*/        OPC_MoveParent,
/*3375*/        OPC_EmitConvertToTarget, 1,
/*3377*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs, SETEQ:Other) - Complexity = 7
                // Dst: (EQ_2rus:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs)
/*3386*/      /*Scope*/ 26, /*->3413*/
/*3387*/        OPC_CheckCondCode, ISD::SETNE,
/*3389*/        OPC_MoveParent,
/*3390*/        OPC_EmitConvertToTarget, 1,
/*3392*/        OPC_EmitNode, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*3401*/        OPC_EmitInteger, MVT::i32, 0, 
/*3404*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs, SETNE:Other) - Complexity = 7
                // Dst: (EQ_2rus:i32 (EQ_2rus:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs), 0:i32)
/*3413*/      0, /*End of Scope*/
/*3414*/    /*Scope*/ 69|128,1/*197*/, /*->3613*/
/*3416*/      OPC_CheckChild0Type, MVT::i32,
/*3418*/      OPC_RecordChild1, // #1 = $rhs
/*3419*/      OPC_MoveChild, 2,
/*3421*/      OPC_Scope, 12, /*->3435*/ // 10 children in Scope
/*3423*/        OPC_CheckCondCode, ISD::SETGT,
/*3425*/        OPC_MoveParent,
/*3426*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LSS_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETGT:Other) - Complexity = 3
                // Dst: (LSS_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs)
/*3435*/      /*Scope*/ 12, /*->3448*/
/*3436*/        OPC_CheckCondCode, ISD::SETUGT,
/*3438*/        OPC_MoveParent,
/*3439*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LSU_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETUGT:Other) - Complexity = 3
                // Dst: (LSU_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs)
/*3448*/      /*Scope*/ 12, /*->3461*/
/*3449*/        OPC_CheckCondCode, ISD::SETLT,
/*3451*/        OPC_MoveParent,
/*3452*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LSS_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETLT:Other) - Complexity = 3
                // Dst: (LSS_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs)
/*3461*/      /*Scope*/ 12, /*->3474*/
/*3462*/        OPC_CheckCondCode, ISD::SETULT,
/*3464*/        OPC_MoveParent,
/*3465*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LSU_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETULT:Other) - Complexity = 3
                // Dst: (LSU_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs)
/*3474*/      /*Scope*/ 12, /*->3487*/
/*3475*/        OPC_CheckCondCode, ISD::SETEQ,
/*3477*/        OPC_MoveParent,
/*3478*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETEQ:Other) - Complexity = 3
                // Dst: (EQ_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs)
/*3487*/      /*Scope*/ 24, /*->3512*/
/*3488*/        OPC_CheckCondCode, ISD::SETLE,
/*3490*/        OPC_MoveParent,
/*3491*/        OPC_EmitNode, TARGET_VAL(XCore::LSS_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*3500*/        OPC_EmitInteger, MVT::i32, 0, 
/*3503*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETLE:Other) - Complexity = 3
                // Dst: (EQ_2rus:i32 (LSS_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), 0:i32)
/*3512*/      /*Scope*/ 24, /*->3537*/
/*3513*/        OPC_CheckCondCode, ISD::SETULE,
/*3515*/        OPC_MoveParent,
/*3516*/        OPC_EmitNode, TARGET_VAL(XCore::LSU_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*3525*/        OPC_EmitInteger, MVT::i32, 0, 
/*3528*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETULE:Other) - Complexity = 3
                // Dst: (EQ_2rus:i32 (LSU_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), 0:i32)
/*3537*/      /*Scope*/ 24, /*->3562*/
/*3538*/        OPC_CheckCondCode, ISD::SETGE,
/*3540*/        OPC_MoveParent,
/*3541*/        OPC_EmitNode, TARGET_VAL(XCore::LSS_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*3550*/        OPC_EmitInteger, MVT::i32, 0, 
/*3553*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETGE:Other) - Complexity = 3
                // Dst: (EQ_2rus:i32 (LSS_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), 0:i32)
/*3562*/      /*Scope*/ 24, /*->3587*/
/*3563*/        OPC_CheckCondCode, ISD::SETUGE,
/*3565*/        OPC_MoveParent,
/*3566*/        OPC_EmitNode, TARGET_VAL(XCore::LSU_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*3575*/        OPC_EmitInteger, MVT::i32, 0, 
/*3578*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETUGE:Other) - Complexity = 3
                // Dst: (EQ_2rus:i32 (LSU_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), 0:i32)
/*3587*/      /*Scope*/ 24, /*->3612*/
/*3588*/        OPC_CheckCondCode, ISD::SETNE,
/*3590*/        OPC_MoveParent,
/*3591*/        OPC_EmitNode, TARGET_VAL(XCore::EQ_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*3600*/        OPC_EmitInteger, MVT::i32, 0, 
/*3603*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETNE:Other) - Complexity = 3
                // Dst: (EQ_2rus:i32 (EQ_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), 0:i32)
/*3612*/      0, /*End of Scope*/
/*3613*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 34,  TARGET_VAL(ISD::SHL),// ->3651
/*3617*/    OPC_RecordChild0, // #0 = $b
/*3618*/    OPC_RecordChild1, // #1 = $c
/*3619*/    OPC_Scope, 19, /*->3640*/ // 2 children in Scope
/*3621*/      OPC_MoveChild, 1,
/*3623*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3626*/      OPC_CheckPredicate, 19, // Predicate_immBitp
/*3628*/      OPC_MoveParent,
/*3629*/      OPC_EmitConvertToTarget, 1,
/*3631*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SHL_2rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (shl:i32 GRRegs:i32:$b, (imm:i32)<<P:Predicate_immBitp>>:$c) - Complexity = 7
              // Dst: (SHL_2rus:i32 GRRegs:i32:$b, (imm:i32):$c)
/*3640*/    /*Scope*/ 9, /*->3650*/
/*3641*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SHL_3r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (shl:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
              // Dst: (SHL_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*3650*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 34,  TARGET_VAL(ISD::SRL),// ->3688
/*3654*/    OPC_RecordChild0, // #0 = $b
/*3655*/    OPC_RecordChild1, // #1 = $c
/*3656*/    OPC_Scope, 19, /*->3677*/ // 2 children in Scope
/*3658*/      OPC_MoveChild, 1,
/*3660*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3663*/      OPC_CheckPredicate, 19, // Predicate_immBitp
/*3665*/      OPC_MoveParent,
/*3666*/      OPC_EmitConvertToTarget, 1,
/*3668*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SHR_2rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (srl:i32 GRRegs:i32:$b, (imm:i32)<<P:Predicate_immBitp>>:$c) - Complexity = 7
              // Dst: (SHR_2rus:i32 GRRegs:i32:$b, (imm:i32):$c)
/*3677*/    /*Scope*/ 9, /*->3687*/
/*3678*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SHR_3r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (srl:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
              // Dst: (SHR_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*3687*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(XCoreISD::STWSP),// ->3733
/*3691*/    OPC_RecordNode,   // #0 = 'XCoreStwsp' chained node
/*3692*/    OPC_RecordChild1, // #1 = $a
/*3693*/    OPC_CheckChild1Type, MVT::i32,
/*3695*/    OPC_RecordChild2, // #2 = $b
/*3696*/    OPC_MoveChild, 2,
/*3698*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3701*/    OPC_Scope, 14, /*->3717*/ // 2 children in Scope
/*3703*/      OPC_CheckPredicate, 20, // Predicate_immU6
/*3705*/      OPC_MoveParent,
/*3706*/      OPC_EmitMergeInputChains1_0,
/*3707*/      OPC_EmitConvertToTarget, 2,
/*3709*/      OPC_MorphNodeTo, TARGET_VAL(XCore::STWSP_ru6), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (XCoreStwsp RRegs:i32:$a, (imm:i32)<<P:Predicate_immU6>>:$b) - Complexity = 7
              // Dst: (STWSP_ru6 RRegs:i32:$a, (imm:i32):$b)
/*3717*/    /*Scope*/ 14, /*->3732*/
/*3718*/      OPC_CheckPredicate, 21, // Predicate_immU16
/*3720*/      OPC_MoveParent,
/*3721*/      OPC_EmitMergeInputChains1_0,
/*3722*/      OPC_EmitConvertToTarget, 2,
/*3724*/      OPC_MorphNodeTo, TARGET_VAL(XCore::STWSP_lru6), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (XCoreStwsp RRegs:i32:$a, (imm:i32)<<P:Predicate_immU16>>:$b) - Complexity = 7
              // Dst: (STWSP_lru6 RRegs:i32:$a, (imm:i32):$b)
/*3732*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(XCoreISD::RETSP),// ->3778
/*3736*/    OPC_RecordNode,   // #0 = 'XCoreRetsp' chained node
/*3737*/    OPC_CaptureGlueInput,
/*3738*/    OPC_RecordChild1, // #1 = $a
/*3739*/    OPC_MoveChild, 1,
/*3741*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3744*/    OPC_CheckType, MVT::i32,
/*3746*/    OPC_Scope, 14, /*->3762*/ // 2 children in Scope
/*3748*/      OPC_CheckPredicate, 20, // Predicate_immU6
/*3750*/      OPC_MoveParent,
/*3751*/      OPC_EmitMergeInputChains1_0,
/*3752*/      OPC_EmitConvertToTarget, 1,
/*3754*/      OPC_MorphNodeTo, TARGET_VAL(XCore::RETSP_u6), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (XCoreRetsp (imm:i32)<<P:Predicate_immU6>>:$a) - Complexity = 7
              // Dst: (RETSP_u6:i32 (imm:i32):$a)
/*3762*/    /*Scope*/ 14, /*->3777*/
/*3763*/      OPC_CheckPredicate, 21, // Predicate_immU16
/*3765*/      OPC_MoveParent,
/*3766*/      OPC_EmitMergeInputChains1_0,
/*3767*/      OPC_EmitConvertToTarget, 1,
/*3769*/      OPC_MorphNodeTo, TARGET_VAL(XCore::RETSP_lu6), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (XCoreRetsp (imm:i32)<<P:Predicate_immU16>>:$a) - Complexity = 7
              // Dst: (RETSP_lu6:i32 (imm:i32):$a)
/*3777*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 85,  TARGET_VAL(XCoreISD::BL),// ->3866
/*3781*/    OPC_RecordNode,   // #0 = 'XCoreBranchLink' chained node
/*3782*/    OPC_CaptureGlueInput,
/*3783*/    OPC_RecordChild1, // #1 = $a
/*3784*/    OPC_Scope, 67, /*->3853*/ // 2 children in Scope
/*3786*/      OPC_MoveChild, 1,
/*3788*/      OPC_SwitchOpcode /*3 cases */, 34,  TARGET_VAL(ISD::Constant),// ->3826
/*3792*/        OPC_CheckType, MVT::i32,
/*3794*/        OPC_Scope, 14, /*->3810*/ // 2 children in Scope
/*3796*/          OPC_CheckPredicate, 23, // Predicate_immU10
/*3798*/          OPC_MoveParent,
/*3799*/          OPC_EmitMergeInputChains1_0,
/*3800*/          OPC_EmitConvertToTarget, 1,
/*3802*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BLRF_u10), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                  // Src: (XCoreBranchLink (imm:i32)<<P:Predicate_immU10>>:$a) - Complexity = 7
                  // Dst: (BLRF_u10:i32 (imm:i32):$a)
/*3810*/        /*Scope*/ 14, /*->3825*/
/*3811*/          OPC_CheckPredicate, 24, // Predicate_immU20
/*3813*/          OPC_MoveParent,
/*3814*/          OPC_EmitMergeInputChains1_0,
/*3815*/          OPC_EmitConvertToTarget, 1,
/*3817*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BLRF_lu10), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                  // Src: (XCoreBranchLink (imm:i32)<<P:Predicate_immU20>>:$a) - Complexity = 7
                  // Dst: (BLRF_lu10:i32 (imm:i32):$a)
/*3825*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 10,  TARGET_VAL(ISD::TargetGlobalAddress),// ->3839
/*3829*/        OPC_MoveParent,
/*3830*/        OPC_EmitMergeInputChains1_0,
/*3831*/        OPC_MorphNodeTo, TARGET_VAL(XCore::BLRF_lu10), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (XCoreBranchLink (tglobaladdr:iPTR):$addr) - Complexity = 6
                // Dst: (BLRF_lu10:i32 (tglobaladdr:i32):$addr)
              /*SwitchOpcode*/ 10,  TARGET_VAL(ISD::TargetExternalSymbol),// ->3852
/*3842*/        OPC_MoveParent,
/*3843*/        OPC_EmitMergeInputChains1_0,
/*3844*/        OPC_MorphNodeTo, TARGET_VAL(XCore::BLRF_lu10), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (XCoreBranchLink (texternalsym:iPTR):$addr) - Complexity = 6
                // Dst: (BLRF_lu10:i32 (texternalsym:i32):$addr)
              0, // EndSwitchOpcode
/*3853*/    /*Scope*/ 11, /*->3865*/
/*3854*/      OPC_CheckChild1Type, MVT::i32,
/*3856*/      OPC_EmitMergeInputChains1_0,
/*3857*/      OPC_MorphNodeTo, TARGET_VAL(XCore::BLA_1r), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (XCoreBranchLink GRRegs:i32:$a) - Complexity = 3
              // Dst: (BLA_1r:i32 GRRegs:i32:$a)
/*3865*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 17,  TARGET_VAL(ISD::CALLSEQ_START),// ->3886
/*3869*/    OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*3870*/    OPC_RecordChild1, // #1 = $amt
/*3871*/    OPC_MoveChild, 1,
/*3873*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*3876*/    OPC_MoveParent,
/*3877*/    OPC_EmitMergeInputChains1_0,
/*3878*/    OPC_MorphNodeTo, TARGET_VAL(XCore::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN:i32 (timm:i32):$amt)
          /*SwitchOpcode*/ 17,  TARGET_VAL(XCoreISD::DPRelativeWrapper),// ->3906
/*3889*/    OPC_RecordChild0, // #0 = $b
/*3890*/    OPC_MoveChild, 0,
/*3892*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*3895*/    OPC_MoveParent,
/*3896*/    OPC_CheckType, MVT::i32,
/*3898*/    OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWDP_lru6), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
            // Src: (dprelwrapper:i32 (tglobaladdr:i32):$b) - Complexity = 6
            // Dst: (LDAWDP_lru6:i32 (tglobaladdr:i32):$b)
          /*SwitchOpcode*/ 17,  TARGET_VAL(XCoreISD::CPRelativeWrapper),// ->3926
/*3909*/    OPC_RecordChild0, // #0 = $a
/*3910*/    OPC_MoveChild, 0,
/*3912*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*3915*/    OPC_MoveParent,
/*3916*/    OPC_CheckType, MVT::i32,
/*3918*/    OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWCP_lu6), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
            // Src: (cprelwrapper:i32 (tglobaladdr:i32):$a) - Complexity = 6
            // Dst: (LDAWCP_lu6:i32 (tglobaladdr:i32):$a)
          /*SwitchOpcode*/ 45,  TARGET_VAL(XCoreISD::PCRelativeWrapper),// ->3974
/*3929*/    OPC_RecordChild0, // #0 = $a
/*3930*/    OPC_MoveChild, 0,
/*3932*/    OPC_SwitchOpcode /*2 cases */, 23,  TARGET_VAL(ISD::TargetGlobalAddress),// ->3959
/*3936*/      OPC_MoveParent,
/*3937*/      OPC_CheckType, MVT::i32,
/*3939*/      OPC_Scope, 8, /*->3949*/ // 2 children in Scope
/*3941*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LDAPF_lu10), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (pcrelwrapper:i32 (tglobaladdr:i32):$a) - Complexity = 6
                // Dst: (LDAPF_lu10:i32 (tglobaladdr:i32):$a)
/*3949*/      /*Scope*/ 8, /*->3958*/
/*3950*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LDAPB_lu10), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (pcrelwrapper:i32 (tglobaladdr:i32):$a) - Complexity = 6
                // Dst: (LDAPB_lu10:i32 (tglobaladdr:i32):$a)
/*3958*/      0, /*End of Scope*/
            /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetBlockAddress),// ->3973
/*3962*/      OPC_MoveParent,
/*3963*/      OPC_CheckType, MVT::i32,
/*3965*/      OPC_MorphNodeTo, TARGET_VAL(XCore::LDAPF_lu10_ba), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (pcrelwrapper:i32 (tblockaddress:i32):$a) - Complexity = 6
              // Dst: (LDAPF_lu10_ba:i32 (tblockaddress:i32):$a)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 18,  TARGET_VAL(XCoreISD::BR_JT),// ->3995
/*3977*/    OPC_RecordNode,   // #0 = 'XCoreBR_JT' chained node
/*3978*/    OPC_RecordChild1, // #1 = $t
/*3979*/    OPC_MoveChild, 1,
/*3981*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetJumpTable),
/*3984*/    OPC_MoveParent,
/*3985*/    OPC_RecordChild2, // #2 = $i
/*3986*/    OPC_EmitMergeInputChains1_0,
/*3987*/    OPC_MorphNodeTo, TARGET_VAL(XCore::BR_JT), 0|OPFL_Chain,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (XCoreBR_JT (tjumptable:i32):$t, GRRegs:i32:$i) - Complexity = 6
            // Dst: (BR_JT (tjumptable:i32):$t, GRRegs:i32:$i)
          /*SwitchOpcode*/ 18,  TARGET_VAL(XCoreISD::BR_JT32),// ->4016
/*3998*/    OPC_RecordNode,   // #0 = 'XCoreBR_JT32' chained node
/*3999*/    OPC_RecordChild1, // #1 = $t
/*4000*/    OPC_MoveChild, 1,
/*4002*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetJumpTable),
/*4005*/    OPC_MoveParent,
/*4006*/    OPC_RecordChild2, // #2 = $i
/*4007*/    OPC_EmitMergeInputChains1_0,
/*4008*/    OPC_MorphNodeTo, TARGET_VAL(XCore::BR_JT32), 0|OPFL_Chain,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (XCoreBR_JT32 (tjumptable:i32):$t, GRRegs:i32:$i) - Complexity = 6
            // Dst: (BR_JT32 (tjumptable:i32):$t, GRRegs:i32:$i)
          /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::Constant),// ->4048
/*4019*/    OPC_RecordNode,   // #0 = $b
/*4020*/    OPC_Scope, 12, /*->4034*/ // 2 children in Scope
/*4022*/      OPC_CheckPredicate, 20, // Predicate_immU6
/*4024*/      OPC_EmitConvertToTarget, 0,
/*4026*/      OPC_MorphNodeTo, TARGET_VAL(XCore::LDC_ru6), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (imm:i32)<<P:Predicate_immU6>>:$b - Complexity = 4
              // Dst: (LDC_ru6:i32 (imm:i32):$b)
/*4034*/    /*Scope*/ 12, /*->4047*/
/*4035*/      OPC_CheckPredicate, 21, // Predicate_immU16
/*4037*/      OPC_EmitConvertToTarget, 0,
/*4039*/      OPC_MorphNodeTo, TARGET_VAL(XCore::LDC_lru6), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (imm:i32)<<P:Predicate_immU16>>:$b - Complexity = 4
              // Dst: (LDC_lru6:i32 (imm:i32):$b)
/*4047*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::OR),// ->4062
/*4051*/    OPC_RecordChild0, // #0 = $b
/*4052*/    OPC_RecordChild1, // #1 = $c
/*4053*/    OPC_MorphNodeTo, TARGET_VAL(XCore::OR_3r), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (or:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
            // Dst: (OR_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::SDIV),// ->4076
/*4065*/    OPC_RecordChild0, // #0 = $b
/*4066*/    OPC_RecordChild1, // #1 = $c
/*4067*/    OPC_MorphNodeTo, TARGET_VAL(XCore::DIVS_l3r), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (sdiv:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
            // Dst: (DIVS_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::UDIV),// ->4090
/*4079*/    OPC_RecordChild0, // #0 = $b
/*4080*/    OPC_RecordChild1, // #1 = $c
/*4081*/    OPC_MorphNodeTo, TARGET_VAL(XCore::DIVU_l3r), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (udiv:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
            // Dst: (DIVU_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::SREM),// ->4104
/*4093*/    OPC_RecordChild0, // #0 = $b
/*4094*/    OPC_RecordChild1, // #1 = $c
/*4095*/    OPC_MorphNodeTo, TARGET_VAL(XCore::REMS_l3r), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (srem:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
            // Dst: (REMS_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::UREM),// ->4118
/*4107*/    OPC_RecordChild0, // #0 = $b
/*4108*/    OPC_RecordChild1, // #1 = $c
/*4109*/    OPC_MorphNodeTo, TARGET_VAL(XCore::REMU_l3r), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (urem:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
            // Dst: (REMU_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::BSWAP),// ->4130
/*4121*/    OPC_RecordChild0, // #0 = $src
/*4122*/    OPC_MorphNodeTo, TARGET_VAL(XCore::BYTEREV_l2r), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
            // Src: (bswap:i32 GRRegs:i32:$src) - Complexity = 3
            // Dst: (BYTEREV_l2r:i32 GRRegs:i32:$src)
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::CTLZ),// ->4142
/*4133*/    OPC_RecordChild0, // #0 = $src
/*4134*/    OPC_MorphNodeTo, TARGET_VAL(XCore::CLZ_l2r), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
            // Src: (ctlz:i32 GRRegs:i32:$src) - Complexity = 3
            // Dst: (CLZ_l2r:i32 GRRegs:i32:$src)
          /*SwitchOpcode*/ 53,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->4198
/*4145*/    OPC_RecordChild0, // #0 = $b
/*4146*/    OPC_MoveChild, 1,
/*4148*/    OPC_Scope, 15, /*->4165*/ // 3 children in Scope
/*4150*/      OPC_CheckValueType, MVT::i1,
/*4152*/      OPC_MoveParent,
/*4153*/      OPC_EmitInteger, MVT::i32, 1, 
/*4156*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SEXT_rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sext_inreg:i32 GRRegs:i32:$b, i1:Other) - Complexity = 3
              // Dst: (SEXT_rus:i32 GRRegs:i32:$b, 1:i32)
/*4165*/    /*Scope*/ 15, /*->4181*/
/*4166*/      OPC_CheckValueType, MVT::i8,
/*4168*/      OPC_MoveParent,
/*4169*/      OPC_EmitInteger, MVT::i32, 8, 
/*4172*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SEXT_rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sext_inreg:i32 GRRegs:i32:$b, i8:Other) - Complexity = 3
              // Dst: (SEXT_rus:i32 GRRegs:i32:$b, 8:i32)
/*4181*/    /*Scope*/ 15, /*->4197*/
/*4182*/      OPC_CheckValueType, MVT::i16,
/*4184*/      OPC_MoveParent,
/*4185*/      OPC_EmitInteger, MVT::i32, 16, 
/*4188*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SEXT_rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sext_inreg:i32 GRRegs:i32:$b, i16:Other) - Complexity = 3
              // Dst: (SEXT_rus:i32 GRRegs:i32:$b, 16:i32)
/*4197*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::BR),// ->4217
/*4201*/    OPC_RecordNode,   // #0 = 'br' chained node
/*4202*/    OPC_RecordChild1, // #1 = $addr
/*4203*/    OPC_MoveChild, 1,
/*4205*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*4208*/    OPC_MoveParent,
/*4209*/    OPC_EmitMergeInputChains1_0,
/*4210*/    OPC_MorphNodeTo, TARGET_VAL(XCore::BRFU_lu6), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (br (bb:Other):$addr) - Complexity = 3
            // Dst: (BRFU_lu6 (bb:Other):$addr)
          /*SwitchOpcode*/ 17,  TARGET_VAL(ISD::CTTZ),// ->4237
/*4220*/    OPC_RecordChild0, // #0 = $src
/*4221*/    OPC_EmitNode, TARGET_VAL(XCore::BITREV_l2r), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #1
/*4229*/    OPC_MorphNodeTo, TARGET_VAL(XCore::CLZ_l2r), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
            // Src: (cttz:i32 GRRegs:i32:$src) - Complexity = 3
            // Dst: (CLZ_l2r:i32 (BITREV_l2r:i32 GRRegs:i32:$src))
          /*SwitchOpcode*/ 20,  TARGET_VAL(ISD::TRAP),// ->4260
/*4240*/    OPC_RecordNode,   // #0 = 'trap' chained node
/*4241*/    OPC_EmitMergeInputChains1_0,
/*4242*/    OPC_EmitInteger, MVT::i32, 0, 
/*4245*/    OPC_EmitNode, TARGET_VAL(XCore::LDC_ru6), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*4253*/    OPC_MorphNodeTo, TARGET_VAL(XCore::ECALLF_1r), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 2, 
            // Src: (trap) - Complexity = 3
            // Dst: (ECALLF_1r (LDC_ru6:i32 0:i32))
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 4262 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 68
  // #OPC_RecordNode                     = 19
  // #OPC_RecordChild                    = 195
  // #OPC_RecordMemRef                   = 2
  // #OPC_CaptureGlueInput               = 3
  // #OPC_MoveChild                      = 99
  // #OPC_MoveParent                     = 228
  // #OPC_CheckSame                      = 1
  // #OPC_CheckPatternPredicate          = 0
  // #OPC_CheckPredicate                 = 95
  // #OPC_CheckOpcode                    = 60
  // #OPC_SwitchOpcode                   = 5
  // #OPC_CheckType                      = 43
  // #OPC_SwitchType                     = 0
  // #OPC_CheckChildType                 = 54
  // #OPC_CheckInteger                   = 78
  // #OPC_CheckCondCode                  = 33
  // #OPC_CheckValueType                 = 3
  // #OPC_CheckComplexPat                = 4
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 1
  // #OPC_EmitInteger                    = 25
  // #OPC_EmitStringInteger              = 0
  // #OPC_EmitRegister                   = 0
  // #OPC_EmitConvertToTarget            = 36
  // #OPC_EmitMergeInputChains           = 105
  // #OPC_EmitCopyToReg                  = 2
  // #OPC_EmitNode                       = 31
  // #OPC_EmitNodeXForm                  = 8
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 190

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

virtual bool CheckNodePredicate(SDNode *Node,
                                unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { // Predicate_immUs
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return (uint32_t)N->getZExtValue() <= 11;

  }
  case 1: { // Predicate_immUs4
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  uint32_t value = (uint32_t)N->getZExtValue();
  return value%4 == 0 && value/4 <= 11;

  }
  case 2: { // Predicate_immUsNeg
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return -((uint32_t)N->getZExtValue()) <= 11;

  }
  case 3: { // Predicate_immUs4Neg
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  uint32_t value = (uint32_t)N->getZExtValue();
  return (-value)%4 == 0 && (-value)/4 <= 11;

  }
  case 4: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 5: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 6: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 7: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 8: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 9: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 10: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 11: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 12: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 13: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 14: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 15: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 16: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 17: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 18: { // Predicate_immBpwSubBitp
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  uint32_t value = (uint32_t)N->getZExtValue();
  return (value >= 24 && value <= 31)
          || value == 16
          || value == 8
          || value == 0;

  }
  case 19: { // Predicate_immBitp
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  uint32_t value = (uint32_t)N->getZExtValue();
  return (value >= 1 && value <= 8)
          || value == 16
          || value == 24
          || value == 32;

  }
  case 20: { // Predicate_immU6
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return (uint32_t)N->getZExtValue() < (1 << 6);

  }
  case 21: { // Predicate_immU16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return (uint32_t)N->getZExtValue() < (1 << 16);

  }
  case 22: { // Predicate_immMskBitp
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return immMskBitp(N); 
  }
  case 23: { // Predicate_immU10
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return (uint32_t)N->getZExtValue() < (1 << 10);

  }
  case 24: { // Predicate_immU20
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return (uint32_t)N->getZExtValue() < (1 << 20);

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
    return SelectADDRspii(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}

virtual SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // div4_xform
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: imm/4
  assert(N->getZExtValue() % 4 == 0);
  return getI32Imm(N->getZExtValue()/4);

  }
  case 1: {  // neg_xform
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: -imm
  uint32_t value = N->getZExtValue();
  return getI32Imm(-value);

  }
  case 2: {  // div4neg_xform
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: -imm/4
  uint32_t value = N->getZExtValue();
  assert(-value % 4 == 0);
  return getI32Imm(-value/4);

  }
  case 3: {  // bpwsub_xform
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 32-imm
  uint32_t value = N->getZExtValue();
  return getI32Imm(32-value);

  }
  case 4: {  // msksize_xform
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the size of a mask
  assert(isMask_32(N->getZExtValue()));
  // look for the first non-zero bit
  return getI32Imm(32 - countLeadingZeros((uint32_t)N->getZExtValue()));

  }
  }
}

