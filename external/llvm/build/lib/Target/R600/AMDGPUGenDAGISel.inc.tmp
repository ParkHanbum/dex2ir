/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*DAG Instruction Selector for the AMDGPU target                              *|
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
/*0*/     OPC_SwitchOpcode /*66 cases */, 120|128,9/*1272*/,  TARGET_VAL(ISD::INTRINSIC_VOID),// ->1277
/*5*/       OPC_RecordNode,   // #0 = 'intrinsic_void' chained node
/*6*/       OPC_MoveChild, 1,
/*8*/       OPC_Scope, 80, /*->90*/ // 10 children in Scope
/*10*/        OPC_CheckInteger, 51|128,20/*2611*/, 
/*13*/        OPC_MoveParent,
/*14*/        OPC_RecordChild2, // #1 = $en
/*15*/        OPC_MoveChild, 2,
/*17*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*20*/        OPC_MoveParent,
/*21*/        OPC_RecordChild3, // #2 = $vm
/*22*/        OPC_MoveChild, 3,
/*24*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*27*/        OPC_MoveParent,
/*28*/        OPC_RecordChild4, // #3 = $done
/*29*/        OPC_MoveChild, 4,
/*31*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*34*/        OPC_MoveParent,
/*35*/        OPC_RecordChild5, // #4 = $tgt
/*36*/        OPC_MoveChild, 5,
/*38*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*41*/        OPC_MoveParent,
/*42*/        OPC_RecordChild6, // #5 = $compr
/*43*/        OPC_MoveChild, 6,
/*45*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*48*/        OPC_MoveParent,
/*49*/        OPC_RecordChild7, // #6 = $src0
/*50*/        OPC_MoveChild, 8,
/*52*/        OPC_RecordNode, // #7 = $src1
/*53*/        OPC_MoveParent,
/*54*/        OPC_MoveChild, 9,
/*56*/        OPC_RecordNode, // #8 = $src2
/*57*/        OPC_MoveParent,
/*58*/        OPC_MoveChild, 10,
/*60*/        OPC_RecordNode, // #9 = $src3
/*61*/        OPC_MoveParent,
/*62*/        OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*64*/        OPC_EmitMergeInputChains1_0,
/*65*/        OPC_EmitConvertToTarget, 1,
/*67*/        OPC_EmitConvertToTarget, 4,
/*69*/        OPC_EmitConvertToTarget, 5,
/*71*/        OPC_EmitConvertToTarget, 3,
/*73*/        OPC_EmitConvertToTarget, 2,
/*75*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EXP), 0|OPFL_Chain,
                  0/*#VTs*/, 9/*#Ops*/, 10, 11, 12, 13, 14, 6, 7, 8, 9, 
              // Src: (intrinsic_void 2611:iPTR, (imm:i32):$en, (imm:i32):$vm, (imm:i32):$done, (imm:i32):$tgt, (imm:i32):$compr, f32:f32:$src0, f32:f32:$src1, f32:f32:$src2, f32:f32:$src3) - Complexity = 23
              // Dst: (EXP (imm:i32):$en, (imm:i32):$tgt, (imm:i32):$compr, (imm:i32):$done, (imm:i32):$vm, ?:f32:$src0, ?:f32:$src1, ?:f32:$src2, ?:f32:$src3)
/*90*/      /*Scope*/ 84|128,2/*340*/, /*->432*/
/*92*/        OPC_CheckInteger, 37|128,20/*2597*/, 
/*95*/        OPC_MoveParent,
/*96*/        OPC_RecordChild2, // #1 = $src
/*97*/        OPC_RecordChild3, // #2 = $arraybase
/*98*/        OPC_MoveChild, 3,
/*100*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*103*/       OPC_MoveParent,
/*104*/       OPC_MoveChild, 4,
/*106*/       OPC_Scope, 80, /*->188*/ // 4 children in Scope
/*108*/         OPC_CheckInteger, 0, 
/*110*/         OPC_MoveParent,
/*111*/         OPC_RecordChild5, // #3 = $mask
/*112*/         OPC_MoveChild, 5,
/*114*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*117*/         OPC_MoveParent,
/*118*/         OPC_Scope, 33, /*->153*/ // 2 children in Scope
/*120*/           OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*122*/           OPC_EmitMergeInputChains1_0,
/*123*/           OPC_EmitInteger, MVT::i32, 0, 
/*126*/           OPC_EmitConvertToTarget, 2,
/*128*/           OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*132*/           OPC_EmitConvertToTarget, 3,
/*134*/           OPC_EmitInteger, MVT::i32, 32, 
/*137*/           OPC_EmitInteger, MVT::i32, 0, 
/*140*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_ExportBuf), 0|OPFL_Chain,
                      0/*#VTs*/, 7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 2597:iPTR, R600_Reg128:v4f32:$src, (imm:i32):$arraybase, 0:i32, (imm:i32):$mask) - Complexity = 19
                  // Dst: (R600_ExportBuf R600_Reg128:v4f32:$src, 0:i32, (imm:i32):$arraybase, 4095:i32, (imm:i32):$mask, 32:i32, 0:i32)
/*153*/         /*Scope*/ 33, /*->187*/
/*154*/           OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*156*/           OPC_EmitMergeInputChains1_0,
/*157*/           OPC_EmitInteger, MVT::i32, 0, 
/*160*/           OPC_EmitConvertToTarget, 2,
/*162*/           OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*166*/           OPC_EmitConvertToTarget, 3,
/*168*/           OPC_EmitInteger, MVT::i32, 64, 
/*171*/           OPC_EmitInteger, MVT::i32, 0, 
/*174*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EG_ExportBuf), 0|OPFL_Chain,
                      0/*#VTs*/, 7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 2597:iPTR, R600_Reg128:v4f32:$src, (imm:i32):$arraybase, 0:i32, (imm:i32):$mask) - Complexity = 19
                  // Dst: (EG_ExportBuf R600_Reg128:v4f32:$src, 0:i32, (imm:i32):$arraybase, 4095:i32, (imm:i32):$mask, 64:i32, 0:i32)
/*187*/         0, /*End of Scope*/
/*188*/       /*Scope*/ 80, /*->269*/
/*189*/         OPC_CheckInteger, 1, 
/*191*/         OPC_MoveParent,
/*192*/         OPC_RecordChild5, // #3 = $mask
/*193*/         OPC_MoveChild, 5,
/*195*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*198*/         OPC_MoveParent,
/*199*/         OPC_Scope, 33, /*->234*/ // 2 children in Scope
/*201*/           OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*203*/           OPC_EmitMergeInputChains1_0,
/*204*/           OPC_EmitInteger, MVT::i32, 0, 
/*207*/           OPC_EmitConvertToTarget, 2,
/*209*/           OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*213*/           OPC_EmitConvertToTarget, 3,
/*215*/           OPC_EmitInteger, MVT::i32, 33, 
/*218*/           OPC_EmitInteger, MVT::i32, 0, 
/*221*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_ExportBuf), 0|OPFL_Chain,
                      0/*#VTs*/, 7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 2597:iPTR, R600_Reg128:v4f32:$src, (imm:i32):$arraybase, 1:i32, (imm:i32):$mask) - Complexity = 19
                  // Dst: (R600_ExportBuf R600_Reg128:v4f32:$src, 0:i32, (imm:i32):$arraybase, 4095:i32, (imm:i32):$mask, 33:i32, 0:i32)
/*234*/         /*Scope*/ 33, /*->268*/
/*235*/           OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*237*/           OPC_EmitMergeInputChains1_0,
/*238*/           OPC_EmitInteger, MVT::i32, 0, 
/*241*/           OPC_EmitConvertToTarget, 2,
/*243*/           OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*247*/           OPC_EmitConvertToTarget, 3,
/*249*/           OPC_EmitInteger, MVT::i32, 65, 
/*252*/           OPC_EmitInteger, MVT::i32, 0, 
/*255*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EG_ExportBuf), 0|OPFL_Chain,
                      0/*#VTs*/, 7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 2597:iPTR, R600_Reg128:v4f32:$src, (imm:i32):$arraybase, 1:i32, (imm:i32):$mask) - Complexity = 19
                  // Dst: (EG_ExportBuf R600_Reg128:v4f32:$src, 0:i32, (imm:i32):$arraybase, 4095:i32, (imm:i32):$mask, 65:i32, 0:i32)
/*268*/         0, /*End of Scope*/
/*269*/       /*Scope*/ 80, /*->350*/
/*270*/         OPC_CheckInteger, 2, 
/*272*/         OPC_MoveParent,
/*273*/         OPC_RecordChild5, // #3 = $mask
/*274*/         OPC_MoveChild, 5,
/*276*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*279*/         OPC_MoveParent,
/*280*/         OPC_Scope, 33, /*->315*/ // 2 children in Scope
/*282*/           OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*284*/           OPC_EmitMergeInputChains1_0,
/*285*/           OPC_EmitInteger, MVT::i32, 0, 
/*288*/           OPC_EmitConvertToTarget, 2,
/*290*/           OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*294*/           OPC_EmitConvertToTarget, 3,
/*296*/           OPC_EmitInteger, MVT::i32, 34, 
/*299*/           OPC_EmitInteger, MVT::i32, 0, 
/*302*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_ExportBuf), 0|OPFL_Chain,
                      0/*#VTs*/, 7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 2597:iPTR, R600_Reg128:v4f32:$src, (imm:i32):$arraybase, 2:i32, (imm:i32):$mask) - Complexity = 19
                  // Dst: (R600_ExportBuf R600_Reg128:v4f32:$src, 0:i32, (imm:i32):$arraybase, 4095:i32, (imm:i32):$mask, 34:i32, 0:i32)
/*315*/         /*Scope*/ 33, /*->349*/
/*316*/           OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*318*/           OPC_EmitMergeInputChains1_0,
/*319*/           OPC_EmitInteger, MVT::i32, 0, 
/*322*/           OPC_EmitConvertToTarget, 2,
/*324*/           OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*328*/           OPC_EmitConvertToTarget, 3,
/*330*/           OPC_EmitInteger, MVT::i32, 66, 
/*333*/           OPC_EmitInteger, MVT::i32, 0, 
/*336*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EG_ExportBuf), 0|OPFL_Chain,
                      0/*#VTs*/, 7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 2597:iPTR, R600_Reg128:v4f32:$src, (imm:i32):$arraybase, 2:i32, (imm:i32):$mask) - Complexity = 19
                  // Dst: (EG_ExportBuf R600_Reg128:v4f32:$src, 0:i32, (imm:i32):$arraybase, 4095:i32, (imm:i32):$mask, 66:i32, 0:i32)
/*349*/         0, /*End of Scope*/
/*350*/       /*Scope*/ 80, /*->431*/
/*351*/         OPC_CheckInteger, 3, 
/*353*/         OPC_MoveParent,
/*354*/         OPC_RecordChild5, // #3 = $mask
/*355*/         OPC_MoveChild, 5,
/*357*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*360*/         OPC_MoveParent,
/*361*/         OPC_Scope, 33, /*->396*/ // 2 children in Scope
/*363*/           OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*365*/           OPC_EmitMergeInputChains1_0,
/*366*/           OPC_EmitInteger, MVT::i32, 0, 
/*369*/           OPC_EmitConvertToTarget, 2,
/*371*/           OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*375*/           OPC_EmitConvertToTarget, 3,
/*377*/           OPC_EmitInteger, MVT::i32, 35, 
/*380*/           OPC_EmitInteger, MVT::i32, 0, 
/*383*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_ExportBuf), 0|OPFL_Chain,
                      0/*#VTs*/, 7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 2597:iPTR, R600_Reg128:v4f32:$src, (imm:i32):$arraybase, 3:i32, (imm:i32):$mask) - Complexity = 19
                  // Dst: (R600_ExportBuf R600_Reg128:v4f32:$src, 0:i32, (imm:i32):$arraybase, 4095:i32, (imm:i32):$mask, 35:i32, 0:i32)
/*396*/         /*Scope*/ 33, /*->430*/
/*397*/           OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*399*/           OPC_EmitMergeInputChains1_0,
/*400*/           OPC_EmitInteger, MVT::i32, 0, 
/*403*/           OPC_EmitConvertToTarget, 2,
/*405*/           OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*409*/           OPC_EmitConvertToTarget, 3,
/*411*/           OPC_EmitInteger, MVT::i32, 67, 
/*414*/           OPC_EmitInteger, MVT::i32, 0, 
/*417*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EG_ExportBuf), 0|OPFL_Chain,
                      0/*#VTs*/, 7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 2597:iPTR, R600_Reg128:v4f32:$src, (imm:i32):$arraybase, 3:i32, (imm:i32):$mask) - Complexity = 19
                  // Dst: (EG_ExportBuf R600_Reg128:v4f32:$src, 0:i32, (imm:i32):$arraybase, 4095:i32, (imm:i32):$mask, 67:i32, 0:i32)
/*430*/         0, /*End of Scope*/
/*431*/       0, /*End of Scope*/
/*432*/     /*Scope*/ 94|128,1/*222*/, /*->656*/
/*434*/       OPC_CheckInteger, 34|128,20/*2594*/, 
/*437*/       OPC_MoveParent,
/*438*/       OPC_Scope, 107, /*->547*/ // 2 children in Scope
/*440*/         OPC_MoveChild, 2,
/*442*/         OPC_CheckInteger, 1, 
/*444*/         OPC_MoveParent,
/*445*/         OPC_Scope, 49, /*->496*/ // 2 children in Scope
/*447*/           OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*449*/           OPC_EmitMergeInputChains1_0,
/*450*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #1
/*457*/           OPC_EmitInteger, MVT::i32, 1, 
/*460*/           OPC_EmitInteger, MVT::i32, 60, 
/*463*/           OPC_EmitInteger, MVT::i32, 7, 
/*466*/           OPC_EmitInteger, MVT::i32, 7, 
/*469*/           OPC_EmitInteger, MVT::i32, 7, 
/*472*/           OPC_EmitInteger, MVT::i32, 7, 
/*475*/           OPC_EmitInteger, MVT::i32, 39, 
/*478*/           OPC_EmitInteger, MVT::i32, 0, 
/*481*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_ExportSwz), 0|OPFL_Chain,
                      0/*#VTs*/, 9/*#Ops*/, 1, 2, 3, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 2594:iPTR, 1:i32) - Complexity = 13
                  // Dst: (R600_ExportSwz (IMPLICIT_DEF:v4f32), 1:i32, 60:i32, 7:i32, 7:i32, 7:i32, 7:i32, 39:i32, 0:i32)
/*496*/         /*Scope*/ 49, /*->546*/
/*497*/           OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*499*/           OPC_EmitMergeInputChains1_0,
/*500*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #1
/*507*/           OPC_EmitInteger, MVT::i32, 1, 
/*510*/           OPC_EmitInteger, MVT::i32, 60, 
/*513*/           OPC_EmitInteger, MVT::i32, 7, 
/*516*/           OPC_EmitInteger, MVT::i32, 7, 
/*519*/           OPC_EmitInteger, MVT::i32, 7, 
/*522*/           OPC_EmitInteger, MVT::i32, 7, 
/*525*/           OPC_EmitInteger, MVT::i32, 83, 
/*528*/           OPC_EmitInteger, MVT::i32, 0, 
/*531*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EG_ExportSwz), 0|OPFL_Chain,
                      0/*#VTs*/, 9/*#Ops*/, 1, 2, 3, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 2594:iPTR, 1:i32) - Complexity = 13
                  // Dst: (EG_ExportSwz (IMPLICIT_DEF:v4f32), 1:i32, 60:i32, 7:i32, 7:i32, 7:i32, 7:i32, 83:i32, 0:i32)
/*546*/         0, /*End of Scope*/
/*547*/       /*Scope*/ 107, /*->655*/
/*548*/         OPC_RecordChild2, // #1 = $type
/*549*/         OPC_MoveChild, 2,
/*551*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*554*/         OPC_MoveParent,
/*555*/         OPC_Scope, 48, /*->605*/ // 2 children in Scope
/*557*/           OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*559*/           OPC_EmitMergeInputChains1_0,
/*560*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #2
/*567*/           OPC_EmitConvertToTarget, 1,
/*569*/           OPC_EmitInteger, MVT::i32, 0, 
/*572*/           OPC_EmitInteger, MVT::i32, 7, 
/*575*/           OPC_EmitInteger, MVT::i32, 7, 
/*578*/           OPC_EmitInteger, MVT::i32, 7, 
/*581*/           OPC_EmitInteger, MVT::i32, 7, 
/*584*/           OPC_EmitInteger, MVT::i32, 39, 
/*587*/           OPC_EmitInteger, MVT::i32, 0, 
/*590*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_ExportSwz), 0|OPFL_Chain,
                      0/*#VTs*/, 9/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 10, 
                  // Src: (intrinsic_void 2594:iPTR, (imm:i32):$type) - Complexity = 11
                  // Dst: (R600_ExportSwz (IMPLICIT_DEF:v4f32), (imm:i32):$type, 0:i32, 7:i32, 7:i32, 7:i32, 7:i32, 39:i32, 0:i32)
/*605*/         /*Scope*/ 48, /*->654*/
/*606*/           OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*608*/           OPC_EmitMergeInputChains1_0,
/*609*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #2
/*616*/           OPC_EmitConvertToTarget, 1,
/*618*/           OPC_EmitInteger, MVT::i32, 0, 
/*621*/           OPC_EmitInteger, MVT::i32, 7, 
/*624*/           OPC_EmitInteger, MVT::i32, 7, 
/*627*/           OPC_EmitInteger, MVT::i32, 7, 
/*630*/           OPC_EmitInteger, MVT::i32, 7, 
/*633*/           OPC_EmitInteger, MVT::i32, 83, 
/*636*/           OPC_EmitInteger, MVT::i32, 0, 
/*639*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EG_ExportSwz), 0|OPFL_Chain,
                      0/*#VTs*/, 9/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 10, 
                  // Src: (intrinsic_void 2594:iPTR, (imm:i32):$type) - Complexity = 11
                  // Dst: (EG_ExportSwz (IMPLICIT_DEF:v4f32), (imm:i32):$type, 0:i32, 7:i32, 7:i32, 7:i32, 7:i32, 83:i32, 0:i32)
/*654*/         0, /*End of Scope*/
/*655*/       0, /*End of Scope*/
/*656*/     /*Scope*/ 26, /*->683*/
/*657*/       OPC_CheckInteger, 41|128,19/*2473*/, 
/*660*/       OPC_MoveParent,
/*661*/       OPC_Scope, 9, /*->672*/ // 2 children in Scope
/*663*/         OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*665*/         OPC_EmitMergeInputChains1_0,
/*666*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::GROUP_BARRIER), 0|OPFL_Chain,
                    0/*#VTs*/, 0/*#Ops*/, 
                // Src: (intrinsic_void 2473:iPTR) - Complexity = 8
                // Dst: (GROUP_BARRIER)
/*672*/       /*Scope*/ 9, /*->682*/
/*673*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*675*/         OPC_EmitMergeInputChains1_0,
/*676*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_BARRIER), 0|OPFL_Chain,
                    0/*#VTs*/, 0/*#Ops*/, 
                // Src: (intrinsic_void 2473:iPTR) - Complexity = 8
                // Dst: (S_BARRIER)
/*682*/       0, /*End of Scope*/
/*683*/     /*Scope*/ 23, /*->707*/
/*684*/       OPC_CheckInteger, 58|128,20/*2618*/, 
/*687*/       OPC_MoveParent,
/*688*/       OPC_RecordChild2, // #1 = $saved
/*689*/       OPC_RecordChild3, // #2 = $target
/*690*/       OPC_MoveChild, 3,
/*692*/       OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*695*/       OPC_MoveParent,
/*696*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*698*/       OPC_EmitMergeInputChains1_0,
/*699*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_LOOP), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 2618:iPTR, i64:i64:$saved, (bb:Other):$target) - Complexity = 8
              // Dst: (SI_LOOP i64:i64:$saved, (bb:Other):$target)
/*707*/     /*Scope*/ 15, /*->723*/
/*708*/       OPC_CheckInteger, 50|128,20/*2610*/, 
/*711*/       OPC_MoveParent,
/*712*/       OPC_RecordChild2, // #1 = $saved
/*713*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*715*/       OPC_EmitMergeInputChains1_0,
/*716*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_END_CF), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 2610:iPTR, i64:i64:$saved) - Complexity = 8
              // Dst: (SI_END_CF i64:i64:$saved)
/*723*/     /*Scope*/ 3|128,1/*131*/, /*->856*/
/*725*/       OPC_CheckInteger, 50|128,19/*2482*/, 
/*728*/       OPC_MoveParent,
/*729*/       OPC_RecordChild2, // #1 = $src
/*730*/       OPC_Scope, 10, /*->742*/ // 2 children in Scope
/*732*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*734*/         OPC_EmitMergeInputChains1_0,
/*735*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_KILL), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (intrinsic_void 2482:iPTR, f32:f32:$src) - Complexity = 8
                // Dst: (SI_KILL f32:f32:$src)
/*742*/       /*Scope*/ 112, /*->855*/
/*743*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*745*/         OPC_EmitMergeInputChains1_0,
/*746*/         OPC_EmitInteger, MVT::i32, 0, 
/*749*/         OPC_EmitInteger, MVT::i32, 0, 
/*752*/         OPC_EmitInteger, MVT::i32, 1, 
/*755*/         OPC_EmitInteger, MVT::i32, 0, 
/*758*/         OPC_EmitInteger, MVT::i32, 0, 
/*761*/         OPC_EmitInteger, MVT::i32, 0, 
/*764*/         OPC_EmitRegister, MVT::f32, AMDGPU::ZERO,
/*767*/         OPC_EmitInteger, MVT::i32, 0, 
/*770*/         OPC_EmitInteger, MVT::i32, 0, 
/*773*/         OPC_EmitInteger, MVT::i32, 0, 
/*776*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*788*/         OPC_EmitInteger, MVT::i32, 0, 
/*791*/         OPC_EmitInteger, MVT::i32, 0, 
/*794*/         OPC_EmitInteger, MVT::i32, 0, 
/*797*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*809*/         OPC_EmitInteger, MVT::i32, 1, 
/*812*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*815*/         OPC_EmitInteger, MVT::i32, 0, 
/*818*/         OPC_EmitInteger, MVT::i32, 0, 
/*821*/         OPC_EmitNode, TARGET_VAL(AMDGPU::KILLGT), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 1, 13, 14, 15, 16, 17, 18, 19, 20,  // Results = #21
/*848*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MASK_WRITE), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 21, 
                // Src: (intrinsic_void 2482:iPTR, f32:f32:$src0) - Complexity = 8
                // Dst: (MASK_WRITE (KILLGT:i32 ZERO:f32, ?:f32:$src0))
/*855*/       0, /*End of Scope*/
/*856*/     /*Scope*/ 20|128,1/*148*/, /*->1006*/
/*858*/       OPC_CheckInteger, 51|128,19/*2483*/, 
/*861*/       OPC_MoveParent,
/*862*/       OPC_Scope, 25, /*->889*/ // 2 children in Scope
/*864*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*866*/         OPC_EmitMergeInputChains1_0,
/*867*/         OPC_EmitInteger, MVT::i32, 0|128,0|128,0|128,124|128,11/*3212836864*/, 
/*874*/         OPC_EmitNode, TARGET_VAL(AMDGPU::V_MOV_B32_e32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*882*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_KILL), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 2483:iPTR) - Complexity = 8
                // Dst: (SI_KILL (V_MOV_B32_e32:i32 3212836864:i32))
/*889*/       /*Scope*/ 115, /*->1005*/
/*890*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*892*/         OPC_EmitMergeInputChains1_0,
/*893*/         OPC_EmitInteger, MVT::i32, 0, 
/*896*/         OPC_EmitInteger, MVT::i32, 0, 
/*899*/         OPC_EmitInteger, MVT::i32, 1, 
/*902*/         OPC_EmitInteger, MVT::i32, 0, 
/*905*/         OPC_EmitInteger, MVT::i32, 0, 
/*908*/         OPC_EmitInteger, MVT::i32, 0, 
/*911*/         OPC_EmitRegister, MVT::f32, AMDGPU::ONE,
/*914*/         OPC_EmitInteger, MVT::i32, 0, 
/*917*/         OPC_EmitInteger, MVT::i32, 0, 
/*920*/         OPC_EmitInteger, MVT::i32, 0, 
/*923*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*935*/         OPC_EmitRegister, MVT::f32, AMDGPU::ZERO,
/*938*/         OPC_EmitInteger, MVT::i32, 0, 
/*941*/         OPC_EmitInteger, MVT::i32, 0, 
/*944*/         OPC_EmitInteger, MVT::i32, 0, 
/*947*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*959*/         OPC_EmitInteger, MVT::i32, 1, 
/*962*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*965*/         OPC_EmitInteger, MVT::i32, 0, 
/*968*/         OPC_EmitInteger, MVT::i32, 0, 
/*971*/         OPC_EmitNode, TARGET_VAL(AMDGPU::KILLGT), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,  // Results = #21
/*998*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MASK_WRITE), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 21, 
                // Src: (intrinsic_void 2483:iPTR) - Complexity = 8
                // Dst: (MASK_WRITE (KILLGT:i32 ONE:f32, ZERO:f32))
/*1005*/      0, /*End of Scope*/
/*1006*/    /*Scope*/ 5|128,1/*133*/, /*->1141*/
/*1008*/      OPC_CheckInteger, 35|128,20/*2595*/, 
/*1011*/      OPC_MoveParent,
/*1012*/      OPC_RecordChild2, // #1 = $reg
/*1013*/      OPC_Scope, 62, /*->1077*/ // 2 children in Scope
/*1015*/        OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*1017*/        OPC_EmitMergeInputChains1_0,
/*1018*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #2
/*1025*/        OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*1028*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 2, 1, 3,  // Results = #4
/*1038*/        OPC_EmitInteger, MVT::i32, 0, 
/*1041*/        OPC_EmitInteger, MVT::i32, 61, 
/*1044*/        OPC_EmitInteger, MVT::i32, 0, 
/*1047*/        OPC_EmitInteger, MVT::i32, 7, 
/*1050*/        OPC_EmitInteger, MVT::i32, 7, 
/*1053*/        OPC_EmitInteger, MVT::i32, 7, 
/*1056*/        OPC_EmitInteger, MVT::i32, 39, 
/*1059*/        OPC_EmitInteger, MVT::i32, 0, 
/*1062*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_ExportSwz), 0|OPFL_Chain,
                    0/*#VTs*/, 9/*#Ops*/, 4, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (intrinsic_void 2595:iPTR, R600_Reg32:f32:$reg) - Complexity = 8
                // Dst: (R600_ExportSwz (INSERT_SUBREG:v4f32 (IMPLICIT_DEF:v4f32), R600_Reg32:f32:$reg, sub0:i32), 0:i32, 61:i32, 0:i32, 7:i32, 7:i32, 7:i32, 39:i32, 0:i32)
/*1077*/      /*Scope*/ 62, /*->1140*/
/*1078*/        OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*1080*/        OPC_EmitMergeInputChains1_0,
/*1081*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #2
/*1088*/        OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*1091*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 2, 1, 3,  // Results = #4
/*1101*/        OPC_EmitInteger, MVT::i32, 0, 
/*1104*/        OPC_EmitInteger, MVT::i32, 61, 
/*1107*/        OPC_EmitInteger, MVT::i32, 0, 
/*1110*/        OPC_EmitInteger, MVT::i32, 7, 
/*1113*/        OPC_EmitInteger, MVT::i32, 7, 
/*1116*/        OPC_EmitInteger, MVT::i32, 7, 
/*1119*/        OPC_EmitInteger, MVT::i32, 83, 
/*1122*/        OPC_EmitInteger, MVT::i32, 0, 
/*1125*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EG_ExportSwz), 0|OPFL_Chain,
                    0/*#VTs*/, 9/*#Ops*/, 4, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (intrinsic_void 2595:iPTR, R600_Reg32:f32:$reg) - Complexity = 8
                // Dst: (EG_ExportSwz (INSERT_SUBREG:v4f32 (IMPLICIT_DEF:v4f32), R600_Reg32:f32:$reg, sub0:i32), 0:i32, 61:i32, 0:i32, 7:i32, 7:i32, 7:i32, 83:i32, 0:i32)
/*1140*/      0, /*End of Scope*/
/*1141*/    /*Scope*/ 5|128,1/*133*/, /*->1276*/
/*1143*/      OPC_CheckInteger, 36|128,20/*2596*/, 
/*1146*/      OPC_MoveParent,
/*1147*/      OPC_RecordChild2, // #1 = $reg
/*1148*/      OPC_Scope, 62, /*->1212*/ // 2 children in Scope
/*1150*/        OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*1152*/        OPC_EmitMergeInputChains1_0,
/*1153*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #2
/*1160*/        OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*1163*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 2, 1, 3,  // Results = #4
/*1173*/        OPC_EmitInteger, MVT::i32, 0, 
/*1176*/        OPC_EmitInteger, MVT::i32, 61, 
/*1179*/        OPC_EmitInteger, MVT::i32, 7, 
/*1182*/        OPC_EmitInteger, MVT::i32, 0, 
/*1185*/        OPC_EmitInteger, MVT::i32, 7, 
/*1188*/        OPC_EmitInteger, MVT::i32, 7, 
/*1191*/        OPC_EmitInteger, MVT::i32, 39, 
/*1194*/        OPC_EmitInteger, MVT::i32, 0, 
/*1197*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_ExportSwz), 0|OPFL_Chain,
                    0/*#VTs*/, 9/*#Ops*/, 4, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (intrinsic_void 2596:iPTR, R600_Reg32:f32:$reg) - Complexity = 8
                // Dst: (R600_ExportSwz (INSERT_SUBREG:v4f32 (IMPLICIT_DEF:v4f32), R600_Reg32:f32:$reg, sub0:i32), 0:i32, 61:i32, 7:i32, 0:i32, 7:i32, 7:i32, 39:i32, 0:i32)
/*1212*/      /*Scope*/ 62, /*->1275*/
/*1213*/        OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*1215*/        OPC_EmitMergeInputChains1_0,
/*1216*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #2
/*1223*/        OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*1226*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 2, 1, 3,  // Results = #4
/*1236*/        OPC_EmitInteger, MVT::i32, 0, 
/*1239*/        OPC_EmitInteger, MVT::i32, 61, 
/*1242*/        OPC_EmitInteger, MVT::i32, 7, 
/*1245*/        OPC_EmitInteger, MVT::i32, 0, 
/*1248*/        OPC_EmitInteger, MVT::i32, 7, 
/*1251*/        OPC_EmitInteger, MVT::i32, 7, 
/*1254*/        OPC_EmitInteger, MVT::i32, 83, 
/*1257*/        OPC_EmitInteger, MVT::i32, 0, 
/*1260*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EG_ExportSwz), 0|OPFL_Chain,
                    0/*#VTs*/, 9/*#Ops*/, 4, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (intrinsic_void 2596:iPTR, R600_Reg32:f32:$reg) - Complexity = 8
                // Dst: (EG_ExportSwz (INSERT_SUBREG:v4f32 (IMPLICIT_DEF:v4f32), R600_Reg32:f32:$reg, sub0:i32), 0:i32, 61:i32, 7:i32, 0:i32, 7:i32, 7:i32, 83:i32, 0:i32)
/*1275*/      0, /*End of Scope*/
/*1276*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 6|128,1/*134*/,  TARGET_VAL(AMDGPUISD::EXPORT),// ->1415
/*1281*/    OPC_RecordNode,   // #0 = 'EXPORT' chained node
/*1282*/    OPC_RecordChild1, // #1 = $src
/*1283*/    OPC_CheckChild1Type, MVT::v4f32,
/*1285*/    OPC_RecordChild2, // #2 = $base
/*1286*/    OPC_MoveChild, 2,
/*1288*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1291*/    OPC_CheckType, MVT::i32,
/*1293*/    OPC_MoveParent,
/*1294*/    OPC_RecordChild3, // #3 = $type
/*1295*/    OPC_MoveChild, 3,
/*1297*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1300*/    OPC_CheckType, MVT::i32,
/*1302*/    OPC_MoveParent,
/*1303*/    OPC_RecordChild4, // #4 = $swz_x
/*1304*/    OPC_MoveChild, 4,
/*1306*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1309*/    OPC_CheckType, MVT::i32,
/*1311*/    OPC_MoveParent,
/*1312*/    OPC_RecordChild5, // #5 = $swz_y
/*1313*/    OPC_MoveChild, 5,
/*1315*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1318*/    OPC_CheckType, MVT::i32,
/*1320*/    OPC_MoveParent,
/*1321*/    OPC_RecordChild6, // #6 = $swz_z
/*1322*/    OPC_MoveChild, 6,
/*1324*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1327*/    OPC_CheckType, MVT::i32,
/*1329*/    OPC_MoveParent,
/*1330*/    OPC_RecordChild7, // #7 = $swz_w
/*1331*/    OPC_MoveChild, 7,
/*1333*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1336*/    OPC_CheckType, MVT::i32,
/*1338*/    OPC_MoveParent,
/*1339*/    OPC_Scope, 36, /*->1377*/ // 2 children in Scope
/*1341*/      OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*1343*/      OPC_EmitMergeInputChains1_0,
/*1344*/      OPC_EmitConvertToTarget, 3,
/*1346*/      OPC_EmitConvertToTarget, 2,
/*1348*/      OPC_EmitConvertToTarget, 4,
/*1350*/      OPC_EmitConvertToTarget, 5,
/*1352*/      OPC_EmitConvertToTarget, 6,
/*1354*/      OPC_EmitConvertToTarget, 7,
/*1356*/      OPC_EmitInteger, MVT::i32, 39, 
/*1359*/      OPC_EmitInteger, MVT::i32, 0, 
/*1362*/      OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_ExportSwz), 0|OPFL_Chain,
                  0/*#VTs*/, 9/*#Ops*/, 1, 8, 9, 10, 11, 12, 13, 14, 15, 
              // Src: (EXPORT R600_Reg128:v4f32:$src, (imm:i32):$base, (imm:i32):$type, (imm:i32):$swz_x, (imm:i32):$swz_y, (imm:i32):$swz_z, (imm:i32):$swz_w) - Complexity = 21
              // Dst: (R600_ExportSwz R600_Reg128:v4f32:$src, (imm:i32):$type, (imm:i32):$base, (imm:i32):$swz_x, (imm:i32):$swz_y, (imm:i32):$swz_z, (imm:i32):$swz_w, 39:i32, 0:i32)
/*1377*/    /*Scope*/ 36, /*->1414*/
/*1378*/      OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*1380*/      OPC_EmitMergeInputChains1_0,
/*1381*/      OPC_EmitConvertToTarget, 3,
/*1383*/      OPC_EmitConvertToTarget, 2,
/*1385*/      OPC_EmitConvertToTarget, 4,
/*1387*/      OPC_EmitConvertToTarget, 5,
/*1389*/      OPC_EmitConvertToTarget, 6,
/*1391*/      OPC_EmitConvertToTarget, 7,
/*1393*/      OPC_EmitInteger, MVT::i32, 83, 
/*1396*/      OPC_EmitInteger, MVT::i32, 0, 
/*1399*/      OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EG_ExportSwz), 0|OPFL_Chain,
                  0/*#VTs*/, 9/*#Ops*/, 1, 8, 9, 10, 11, 12, 13, 14, 15, 
              // Src: (EXPORT R600_Reg128:v4f32:$src, (imm:i32):$base, (imm:i32):$type, (imm:i32):$swz_x, (imm:i32):$swz_y, (imm:i32):$swz_z, (imm:i32):$swz_w) - Complexity = 21
              // Dst: (EG_ExportSwz R600_Reg128:v4f32:$src, (imm:i32):$type, (imm:i32):$base, (imm:i32):$swz_x, (imm:i32):$swz_y, (imm:i32):$swz_z, (imm:i32):$swz_w, 83:i32, 0:i32)
/*1414*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 96|128,5/*736*/,  TARGET_VAL(ISD::ADD),// ->2155
/*1419*/    OPC_Scope, 40|128,2/*296*/, /*->1718*/ // 2 children in Scope
/*1422*/      OPC_MoveChild, 0,
/*1424*/      OPC_CheckOpcode, TARGET_VAL(ISD::MUL),
/*1427*/      OPC_RecordChild0, // #0 = $src0
/*1428*/      OPC_RecordChild1, // #1 = $src1
/*1429*/      OPC_MoveParent,
/*1430*/      OPC_RecordChild1, // #2 = $src2
/*1431*/      OPC_CheckType, MVT::i32,
/*1433*/      OPC_Scope, 105, /*->1540*/ // 3 children in Scope
/*1435*/        OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*1437*/        OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectU24:$src0 #3
/*1440*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectU24:$src1 #4
/*1443*/        OPC_EmitInteger, MVT::i32, 0, 
/*1446*/        OPC_EmitInteger, MVT::i32, 0, 
/*1449*/        OPC_EmitInteger, MVT::i32, 0, 
/*1452*/        OPC_EmitInteger, MVT::i32, 0, 
/*1455*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1467*/        OPC_EmitInteger, MVT::i32, 0, 
/*1470*/        OPC_EmitInteger, MVT::i32, 0, 
/*1473*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1485*/        OPC_EmitInteger, MVT::i32, 0, 
/*1488*/        OPC_EmitInteger, MVT::i32, 0, 
/*1491*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1503*/        OPC_EmitInteger, MVT::i32, 1, 
/*1506*/        OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*1509*/        OPC_EmitInteger, MVT::i32, 0, 
/*1512*/        OPC_EmitInteger, MVT::i32, 0, 
/*1515*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULADD_UINT24_eg), 0,
                    1/*#VTs*/, MVT::i32, 18/*#Ops*/, 5, 6, 3, 7, 8, 9, 4, 10, 11, 12, 2, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (add:i32 (mul:i32 U24:i32:$src0, U24:i32:$src1), i32:i32:$src2) - Complexity = 18
                // Dst: (MULADD_UINT24_eg:i32 U24:i32:$src0, U24:i32:$src1, i32:i32:$src2)
/*1540*/      /*Scope*/ 105, /*->1646*/
/*1541*/        OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*1543*/        OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectI24:$src0 #3
/*1546*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectI24:$src1 #4
/*1549*/        OPC_EmitInteger, MVT::i32, 0, 
/*1552*/        OPC_EmitInteger, MVT::i32, 0, 
/*1555*/        OPC_EmitInteger, MVT::i32, 0, 
/*1558*/        OPC_EmitInteger, MVT::i32, 0, 
/*1561*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1573*/        OPC_EmitInteger, MVT::i32, 0, 
/*1576*/        OPC_EmitInteger, MVT::i32, 0, 
/*1579*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1591*/        OPC_EmitInteger, MVT::i32, 0, 
/*1594*/        OPC_EmitInteger, MVT::i32, 0, 
/*1597*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1609*/        OPC_EmitInteger, MVT::i32, 1, 
/*1612*/        OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*1615*/        OPC_EmitInteger, MVT::i32, 0, 
/*1618*/        OPC_EmitInteger, MVT::i32, 0, 
/*1621*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULADD_INT24_cm), 0,
                    1/*#VTs*/, MVT::i32, 18/*#Ops*/, 5, 6, 3, 7, 8, 9, 4, 10, 11, 12, 2, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (add:i32 (mul:i32 I24:i32:$src0, I24:i32:$src1), i32:i32:$src2) - Complexity = 18
                // Dst: (MULADD_INT24_cm:i32 I24:i32:$src0, I24:i32:$src1, i32:i32:$src2)
/*1646*/      /*Scope*/ 70, /*->1717*/
/*1647*/        OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*1649*/        OPC_Scope, 32, /*->1683*/ // 2 children in Scope
/*1651*/          OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectI24:$src0 #3
/*1654*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectI24:$src1 #4
/*1657*/          OPC_EmitInteger, MVT::i32, 0, 
/*1660*/          OPC_EmitInteger, MVT::i32, 0, 
/*1663*/          OPC_EmitInteger, MVT::i32, 0, 
/*1666*/          OPC_EmitInteger, MVT::i32, 0, 
/*1669*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MAD_I32_I24), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 4, 2, 5, 6, 7, 8, 
                  // Src: (add:i32 (mul:i32 I24:i32:$src0, I24:i32:$src1), i32:i32:$src2) - Complexity = 18
                  // Dst: (V_MAD_I32_I24:i32 I24:i32:$src0, I24:i32:$src1, i32:i32:$src2)
/*1683*/        /*Scope*/ 32, /*->1716*/
/*1684*/          OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectU24:$src0 #3
/*1687*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectU24:$src1 #4
/*1690*/          OPC_EmitInteger, MVT::i32, 0, 
/*1693*/          OPC_EmitInteger, MVT::i32, 0, 
/*1696*/          OPC_EmitInteger, MVT::i32, 0, 
/*1699*/          OPC_EmitInteger, MVT::i32, 0, 
/*1702*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MAD_U32_U24), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 4, 2, 5, 6, 7, 8, 
                  // Src: (add:i32 (mul:i32 U24:i32:$src0, U24:i32:$src1), i32:i32:$src2) - Complexity = 18
                  // Dst: (V_MAD_U32_U24:i32 U24:i32:$src0, U24:i32:$src1, i32:i32:$src2)
/*1716*/        0, /*End of Scope*/
/*1717*/      0, /*End of Scope*/
/*1718*/    /*Scope*/ 50|128,3/*434*/, /*->2154*/
/*1720*/      OPC_RecordChild0, // #0 = $src2
/*1721*/      OPC_Scope, 39|128,2/*295*/, /*->2019*/ // 2 children in Scope
/*1724*/        OPC_MoveChild, 1,
/*1726*/        OPC_CheckOpcode, TARGET_VAL(ISD::MUL),
/*1729*/        OPC_RecordChild0, // #1 = $src0
/*1730*/        OPC_RecordChild1, // #2 = $src1
/*1731*/        OPC_MoveParent,
/*1732*/        OPC_CheckType, MVT::i32,
/*1734*/        OPC_Scope, 105, /*->1841*/ // 3 children in Scope
/*1736*/          OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*1738*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectU24:$src0 #3
/*1741*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectU24:$src1 #4
/*1744*/          OPC_EmitInteger, MVT::i32, 0, 
/*1747*/          OPC_EmitInteger, MVT::i32, 0, 
/*1750*/          OPC_EmitInteger, MVT::i32, 0, 
/*1753*/          OPC_EmitInteger, MVT::i32, 0, 
/*1756*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1768*/          OPC_EmitInteger, MVT::i32, 0, 
/*1771*/          OPC_EmitInteger, MVT::i32, 0, 
/*1774*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1786*/          OPC_EmitInteger, MVT::i32, 0, 
/*1789*/          OPC_EmitInteger, MVT::i32, 0, 
/*1792*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1804*/          OPC_EmitInteger, MVT::i32, 1, 
/*1807*/          OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*1810*/          OPC_EmitInteger, MVT::i32, 0, 
/*1813*/          OPC_EmitInteger, MVT::i32, 0, 
/*1816*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULADD_UINT24_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 5, 6, 3, 7, 8, 9, 4, 10, 11, 12, 0, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (add:i32 i32:i32:$src2, (mul:i32 U24:i32:$src0, U24:i32:$src1)) - Complexity = 18
                  // Dst: (MULADD_UINT24_eg:i32 U24:i32:$src0, U24:i32:$src1, i32:i32:$src2)
/*1841*/        /*Scope*/ 105, /*->1947*/
/*1842*/          OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*1844*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectI24:$src0 #3
/*1847*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectI24:$src1 #4
/*1850*/          OPC_EmitInteger, MVT::i32, 0, 
/*1853*/          OPC_EmitInteger, MVT::i32, 0, 
/*1856*/          OPC_EmitInteger, MVT::i32, 0, 
/*1859*/          OPC_EmitInteger, MVT::i32, 0, 
/*1862*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1874*/          OPC_EmitInteger, MVT::i32, 0, 
/*1877*/          OPC_EmitInteger, MVT::i32, 0, 
/*1880*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1892*/          OPC_EmitInteger, MVT::i32, 0, 
/*1895*/          OPC_EmitInteger, MVT::i32, 0, 
/*1898*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1910*/          OPC_EmitInteger, MVT::i32, 1, 
/*1913*/          OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*1916*/          OPC_EmitInteger, MVT::i32, 0, 
/*1919*/          OPC_EmitInteger, MVT::i32, 0, 
/*1922*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULADD_INT24_cm), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 5, 6, 3, 7, 8, 9, 4, 10, 11, 12, 0, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (add:i32 i32:i32:$src2, (mul:i32 I24:i32:$src0, I24:i32:$src1)) - Complexity = 18
                  // Dst: (MULADD_INT24_cm:i32 I24:i32:$src0, I24:i32:$src1, i32:i32:$src2)
/*1947*/        /*Scope*/ 70, /*->2018*/
/*1948*/          OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*1950*/          OPC_Scope, 32, /*->1984*/ // 2 children in Scope
/*1952*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectI24:$src0 #3
/*1955*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectI24:$src1 #4
/*1958*/            OPC_EmitInteger, MVT::i32, 0, 
/*1961*/            OPC_EmitInteger, MVT::i32, 0, 
/*1964*/            OPC_EmitInteger, MVT::i32, 0, 
/*1967*/            OPC_EmitInteger, MVT::i32, 0, 
/*1970*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MAD_I32_I24), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 4, 0, 5, 6, 7, 8, 
                    // Src: (add:i32 i32:i32:$src2, (mul:i32 I24:i32:$src0, I24:i32:$src1)) - Complexity = 18
                    // Dst: (V_MAD_I32_I24:i32 I24:i32:$src0, I24:i32:$src1, i32:i32:$src2)
/*1984*/          /*Scope*/ 32, /*->2017*/
/*1985*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectU24:$src0 #3
/*1988*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectU24:$src1 #4
/*1991*/            OPC_EmitInteger, MVT::i32, 0, 
/*1994*/            OPC_EmitInteger, MVT::i32, 0, 
/*1997*/            OPC_EmitInteger, MVT::i32, 0, 
/*2000*/            OPC_EmitInteger, MVT::i32, 0, 
/*2003*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MAD_U32_U24), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 4, 0, 5, 6, 7, 8, 
                    // Src: (add:i32 i32:i32:$src2, (mul:i32 U24:i32:$src0, U24:i32:$src1)) - Complexity = 18
                    // Dst: (V_MAD_U32_U24:i32 U24:i32:$src0, U24:i32:$src1, i32:i32:$src2)
/*2017*/          0, /*End of Scope*/
/*2018*/        0, /*End of Scope*/
/*2019*/      /*Scope*/ 4|128,1/*132*/, /*->2153*/
/*2021*/        OPC_RecordChild1, // #1 = $src1
/*2022*/        OPC_CheckType, MVT::i32,
/*2024*/        OPC_Scope, 101, /*->2127*/ // 2 children in Scope
/*2026*/          OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*2028*/          OPC_EmitInteger, MVT::i32, 0, 
/*2031*/          OPC_EmitInteger, MVT::i32, 0, 
/*2034*/          OPC_EmitInteger, MVT::i32, 1, 
/*2037*/          OPC_EmitInteger, MVT::i32, 0, 
/*2040*/          OPC_EmitInteger, MVT::i32, 0, 
/*2043*/          OPC_EmitInteger, MVT::i32, 0, 
/*2046*/          OPC_EmitInteger, MVT::i32, 0, 
/*2049*/          OPC_EmitInteger, MVT::i32, 0, 
/*2052*/          OPC_EmitInteger, MVT::i32, 0, 
/*2055*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2067*/          OPC_EmitInteger, MVT::i32, 0, 
/*2070*/          OPC_EmitInteger, MVT::i32, 0, 
/*2073*/          OPC_EmitInteger, MVT::i32, 0, 
/*2076*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2088*/          OPC_EmitInteger, MVT::i32, 1, 
/*2091*/          OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*2094*/          OPC_EmitInteger, MVT::i32, 0, 
/*2097*/          OPC_EmitInteger, MVT::i32, 0, 
/*2100*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::ADD_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (add:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
                  // Dst: (ADD_INT:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*2127*/        /*Scope*/ 24, /*->2152*/
/*2128*/          OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*2130*/          OPC_Scope, 9, /*->2141*/ // 2 children in Scope
/*2132*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ADD_I32_e32), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 VSrc_32:i32:$src0, VReg_32:i32:$src1) - Complexity = 3
                    // Dst: (V_ADD_I32_e32:i32 VSrc_32:i32:$src0, VReg_32:i32:$src1)
/*2141*/          /*Scope*/ 9, /*->2151*/
/*2142*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ADD_I32_e32), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 VReg_32:i32:$src1, VSrc_32:i32:$src0) - Complexity = 3
                    // Dst: (V_ADD_I32_e32:i32 VSrc_32:i32:$src0, VReg_32:i32:$src1)
/*2151*/          0, /*End of Scope*/
/*2152*/        0, /*End of Scope*/
/*2153*/      0, /*End of Scope*/
/*2154*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 35|128,45/*5795*/,  TARGET_VAL(ISD::OR),// ->7954
/*2159*/    OPC_Scope, 22|128,44/*5654*/, /*->7816*/ // 2 children in Scope
/*2162*/      OPC_MoveChild, 0,
/*2164*/      OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*2167*/      OPC_Scope, 72|128,3/*456*/, /*->2626*/ // 8 children in Scope
/*2170*/        OPC_RecordChild0, // #0 = $y
/*2171*/        OPC_Scope, 89|128,2/*345*/, /*->2519*/ // 2 children in Scope
/*2174*/          OPC_RecordChild1, // #1 = $x
/*2175*/          OPC_MoveParent,
/*2176*/          OPC_MoveChild, 1,
/*2178*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*2181*/          OPC_Scope, 32|128,1/*160*/, /*->2344*/ // 4 children in Scope
/*2184*/            OPC_RecordChild0, // #2 = $z
/*2185*/            OPC_MoveChild, 1,
/*2187*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2190*/            OPC_MoveChild, 0,
/*2192*/            OPC_CheckSame, 1,
/*2194*/            OPC_MoveParent,
/*2195*/            OPC_MoveChild, 1,
/*2197*/            OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2208*/            OPC_MoveParent,
/*2209*/            OPC_MoveParent,
/*2210*/            OPC_MoveParent,
/*2211*/            OPC_CheckType, MVT::i32,
/*2213*/            OPC_Scope, 99, /*->2314*/ // 2 children in Scope
/*2215*/              OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*2217*/              OPC_EmitInteger, MVT::i32, 0, 
/*2220*/              OPC_EmitInteger, MVT::i32, 0, 
/*2223*/              OPC_EmitInteger, MVT::i32, 0, 
/*2226*/              OPC_EmitInteger, MVT::i32, 0, 
/*2229*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2241*/              OPC_EmitInteger, MVT::i32, 0, 
/*2244*/              OPC_EmitInteger, MVT::i32, 0, 
/*2247*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2259*/              OPC_EmitInteger, MVT::i32, 0, 
/*2262*/              OPC_EmitInteger, MVT::i32, 0, 
/*2265*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2277*/              OPC_EmitInteger, MVT::i32, 1, 
/*2280*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*2283*/              OPC_EmitInteger, MVT::i32, 0, 
/*2286*/              OPC_EmitInteger, MVT::i32, 0, 
/*2289*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 0, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (or:i32 (and:i32 i32:i32:$y, i32:i32:$x), (and:i32 i32:i32:$z, (xor:i32 i32:i32:$x, -1:i32))) - Complexity = 17
                      // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*2314*/            /*Scope*/ 28, /*->2343*/
/*2315*/              OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*2317*/              OPC_EmitInteger, MVT::i32, 0, 
/*2320*/              OPC_EmitInteger, MVT::i32, 0, 
/*2323*/              OPC_EmitInteger, MVT::i32, 0, 
/*2326*/              OPC_EmitInteger, MVT::i32, 0, 
/*2329*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 1, 0, 2, 3, 4, 5, 6, 
                      // Src: (or:i32 (and:i32 i32:i32:$y, i32:i32:$x), (and:i32 i32:i32:$z, (xor:i32 i32:i32:$x, -1:i32))) - Complexity = 17
                      // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*2343*/            0, /*End of Scope*/
/*2344*/          /*Scope*/ 57, /*->2402*/
/*2345*/            OPC_MoveChild, 0,
/*2347*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2350*/            OPC_MoveChild, 0,
/*2352*/            OPC_CheckSame, 1,
/*2354*/            OPC_MoveParent,
/*2355*/            OPC_MoveChild, 1,
/*2357*/            OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2368*/            OPC_MoveParent,
/*2369*/            OPC_MoveParent,
/*2370*/            OPC_RecordChild1, // #2 = $z
/*2371*/            OPC_MoveParent,
/*2372*/            OPC_CheckType, MVT::i32,
/*2374*/            OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*2376*/            OPC_EmitInteger, MVT::i32, 0, 
/*2379*/            OPC_EmitInteger, MVT::i32, 0, 
/*2382*/            OPC_EmitInteger, MVT::i32, 0, 
/*2385*/            OPC_EmitInteger, MVT::i32, 0, 
/*2388*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 1, 0, 2, 3, 4, 5, 6, 
                    // Src: (or:i32 (and:i32 i32:i32:$y, i32:i32:$x), (and:i32 (xor:i32 i32:i32:$x, -1:i32), i32:i32:$z)) - Complexity = 17
                    // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*2402*/          /*Scope*/ 57, /*->2460*/
/*2403*/            OPC_RecordChild0, // #2 = $z
/*2404*/            OPC_MoveChild, 1,
/*2406*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2409*/            OPC_MoveChild, 0,
/*2411*/            OPC_CheckSame, 0,
/*2413*/            OPC_MoveParent,
/*2414*/            OPC_MoveChild, 1,
/*2416*/            OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2427*/            OPC_MoveParent,
/*2428*/            OPC_MoveParent,
/*2429*/            OPC_MoveParent,
/*2430*/            OPC_CheckType, MVT::i32,
/*2432*/            OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*2434*/            OPC_EmitInteger, MVT::i32, 0, 
/*2437*/            OPC_EmitInteger, MVT::i32, 0, 
/*2440*/            OPC_EmitInteger, MVT::i32, 0, 
/*2443*/            OPC_EmitInteger, MVT::i32, 0, 
/*2446*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
                    // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$y), (and:i32 i32:i32:$z, (xor:i32 i32:i32:$x, -1:i32))) - Complexity = 17
                    // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*2460*/          /*Scope*/ 57, /*->2518*/
/*2461*/            OPC_MoveChild, 0,
/*2463*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2466*/            OPC_MoveChild, 0,
/*2468*/            OPC_CheckSame, 0,
/*2470*/            OPC_MoveParent,
/*2471*/            OPC_MoveChild, 1,
/*2473*/            OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2484*/            OPC_MoveParent,
/*2485*/            OPC_MoveParent,
/*2486*/            OPC_RecordChild1, // #2 = $z
/*2487*/            OPC_MoveParent,
/*2488*/            OPC_CheckType, MVT::i32,
/*2490*/            OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*2492*/            OPC_EmitInteger, MVT::i32, 0, 
/*2495*/            OPC_EmitInteger, MVT::i32, 0, 
/*2498*/            OPC_EmitInteger, MVT::i32, 0, 
/*2501*/            OPC_EmitInteger, MVT::i32, 0, 
/*2504*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
                    // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$y), (and:i32 (xor:i32 i32:i32:$x, -1:i32), i32:i32:$z)) - Complexity = 17
                    // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*2518*/          0, /*End of Scope*/
/*2519*/        /*Scope*/ 105, /*->2625*/
/*2520*/          OPC_MoveChild, 1,
/*2522*/          OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2525*/          OPC_RecordChild0, // #1 = $x
/*2526*/          OPC_MoveChild, 1,
/*2528*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2539*/          OPC_MoveParent,
/*2540*/          OPC_MoveParent,
/*2541*/          OPC_MoveParent,
/*2542*/          OPC_MoveChild, 1,
/*2544*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*2547*/          OPC_Scope, 37, /*->2586*/ // 2 children in Scope
/*2549*/            OPC_RecordChild0, // #2 = $y
/*2550*/            OPC_MoveChild, 1,
/*2552*/            OPC_CheckSame, 1,
/*2554*/            OPC_MoveParent,
/*2555*/            OPC_MoveParent,
/*2556*/            OPC_CheckType, MVT::i32,
/*2558*/            OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*2560*/            OPC_EmitInteger, MVT::i32, 0, 
/*2563*/            OPC_EmitInteger, MVT::i32, 0, 
/*2566*/            OPC_EmitInteger, MVT::i32, 0, 
/*2569*/            OPC_EmitInteger, MVT::i32, 0, 
/*2572*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 1, 2, 0, 3, 4, 5, 6, 
                    // Src: (or:i32 (and:i32 i32:i32:$z, (xor:i32 i32:i32:$x, -1:i32)), (and:i32 i32:i32:$y, i32:i32:$x)) - Complexity = 17
                    // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*2586*/          /*Scope*/ 37, /*->2624*/
/*2587*/            OPC_MoveChild, 0,
/*2589*/            OPC_CheckSame, 1,
/*2591*/            OPC_MoveParent,
/*2592*/            OPC_RecordChild1, // #2 = $y
/*2593*/            OPC_MoveParent,
/*2594*/            OPC_CheckType, MVT::i32,
/*2596*/            OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*2598*/            OPC_EmitInteger, MVT::i32, 0, 
/*2601*/            OPC_EmitInteger, MVT::i32, 0, 
/*2604*/            OPC_EmitInteger, MVT::i32, 0, 
/*2607*/            OPC_EmitInteger, MVT::i32, 0, 
/*2610*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 1, 2, 0, 3, 4, 5, 6, 
                    // Src: (or:i32 (and:i32 i32:i32:$z, (xor:i32 i32:i32:$x, -1:i32)), (and:i32 i32:i32:$x, i32:i32:$y)) - Complexity = 17
                    // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*2624*/          0, /*End of Scope*/
/*2625*/        0, /*End of Scope*/
/*2626*/      /*Scope*/ 106, /*->2733*/
/*2627*/        OPC_MoveChild, 0,
/*2629*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2632*/        OPC_RecordChild0, // #0 = $x
/*2633*/        OPC_MoveChild, 1,
/*2635*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2646*/        OPC_MoveParent,
/*2647*/        OPC_MoveParent,
/*2648*/        OPC_RecordChild1, // #1 = $z
/*2649*/        OPC_MoveParent,
/*2650*/        OPC_MoveChild, 1,
/*2652*/        OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*2655*/        OPC_Scope, 37, /*->2694*/ // 2 children in Scope
/*2657*/          OPC_RecordChild0, // #2 = $y
/*2658*/          OPC_MoveChild, 1,
/*2660*/          OPC_CheckSame, 0,
/*2662*/          OPC_MoveParent,
/*2663*/          OPC_MoveParent,
/*2664*/          OPC_CheckType, MVT::i32,
/*2666*/          OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*2668*/          OPC_EmitInteger, MVT::i32, 0, 
/*2671*/          OPC_EmitInteger, MVT::i32, 0, 
/*2674*/          OPC_EmitInteger, MVT::i32, 0, 
/*2677*/          OPC_EmitInteger, MVT::i32, 0, 
/*2680*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 2, 1, 3, 4, 5, 6, 
                  // Src: (or:i32 (and:i32 (xor:i32 i32:i32:$x, -1:i32), i32:i32:$z), (and:i32 i32:i32:$y, i32:i32:$x)) - Complexity = 17
                  // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*2694*/        /*Scope*/ 37, /*->2732*/
/*2695*/          OPC_MoveChild, 0,
/*2697*/          OPC_CheckSame, 0,
/*2699*/          OPC_MoveParent,
/*2700*/          OPC_RecordChild1, // #2 = $y
/*2701*/          OPC_MoveParent,
/*2702*/          OPC_CheckType, MVT::i32,
/*2704*/          OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*2706*/          OPC_EmitInteger, MVT::i32, 0, 
/*2709*/          OPC_EmitInteger, MVT::i32, 0, 
/*2712*/          OPC_EmitInteger, MVT::i32, 0, 
/*2715*/          OPC_EmitInteger, MVT::i32, 0, 
/*2718*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 2, 1, 3, 4, 5, 6, 
                  // Src: (or:i32 (and:i32 (xor:i32 i32:i32:$x, -1:i32), i32:i32:$z), (and:i32 i32:i32:$x, i32:i32:$y)) - Complexity = 17
                  // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*2732*/        0, /*End of Scope*/
/*2733*/      /*Scope*/ 13|128,5/*653*/, /*->3388*/
/*2735*/        OPC_RecordChild0, // #0 = $y
/*2736*/        OPC_Scope, 15|128,3/*399*/, /*->3138*/ // 2 children in Scope
/*2739*/          OPC_RecordChild1, // #1 = $x
/*2740*/          OPC_MoveParent,
/*2741*/          OPC_MoveChild, 1,
/*2743*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*2746*/          OPC_Scope, 0|128,1/*128*/, /*->2877*/ // 3 children in Scope
/*2749*/            OPC_MoveChild, 0,
/*2751*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2754*/            OPC_MoveChild, 0,
/*2756*/            OPC_CheckSame, 1,
/*2758*/            OPC_MoveParent,
/*2759*/            OPC_MoveChild, 1,
/*2761*/            OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2772*/            OPC_MoveParent,
/*2773*/            OPC_MoveParent,
/*2774*/            OPC_RecordChild1, // #2 = $z
/*2775*/            OPC_MoveParent,
/*2776*/            OPC_CheckType, MVT::i32,
/*2778*/            OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*2780*/            OPC_EmitInteger, MVT::i32, 0, 
/*2783*/            OPC_EmitInteger, MVT::i32, 0, 
/*2786*/            OPC_EmitInteger, MVT::i32, 0, 
/*2789*/            OPC_EmitInteger, MVT::i32, 0, 
/*2792*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2804*/            OPC_EmitInteger, MVT::i32, 0, 
/*2807*/            OPC_EmitInteger, MVT::i32, 0, 
/*2810*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2822*/            OPC_EmitInteger, MVT::i32, 0, 
/*2825*/            OPC_EmitInteger, MVT::i32, 0, 
/*2828*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2840*/            OPC_EmitInteger, MVT::i32, 1, 
/*2843*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*2846*/            OPC_EmitInteger, MVT::i32, 0, 
/*2849*/            OPC_EmitInteger, MVT::i32, 0, 
/*2852*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 0, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (or:i32 (and:i32 i32:i32:$y, i32:i32:$x), (and:i32 (xor:i32 i32:i32:$x, -1:i32), i32:i32:$z)) - Complexity = 17
                    // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*2877*/          /*Scope*/ 0|128,1/*128*/, /*->3007*/
/*2879*/            OPC_RecordChild0, // #2 = $z
/*2880*/            OPC_MoveChild, 1,
/*2882*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2885*/            OPC_MoveChild, 0,
/*2887*/            OPC_CheckSame, 0,
/*2889*/            OPC_MoveParent,
/*2890*/            OPC_MoveChild, 1,
/*2892*/            OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2903*/            OPC_MoveParent,
/*2904*/            OPC_MoveParent,
/*2905*/            OPC_MoveParent,
/*2906*/            OPC_CheckType, MVT::i32,
/*2908*/            OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*2910*/            OPC_EmitInteger, MVT::i32, 0, 
/*2913*/            OPC_EmitInteger, MVT::i32, 0, 
/*2916*/            OPC_EmitInteger, MVT::i32, 0, 
/*2919*/            OPC_EmitInteger, MVT::i32, 0, 
/*2922*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2934*/            OPC_EmitInteger, MVT::i32, 0, 
/*2937*/            OPC_EmitInteger, MVT::i32, 0, 
/*2940*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2952*/            OPC_EmitInteger, MVT::i32, 0, 
/*2955*/            OPC_EmitInteger, MVT::i32, 0, 
/*2958*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2970*/            OPC_EmitInteger, MVT::i32, 1, 
/*2973*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*2976*/            OPC_EmitInteger, MVT::i32, 0, 
/*2979*/            OPC_EmitInteger, MVT::i32, 0, 
/*2982*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$y), (and:i32 i32:i32:$z, (xor:i32 i32:i32:$x, -1:i32))) - Complexity = 17
                    // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*3007*/          /*Scope*/ 0|128,1/*128*/, /*->3137*/
/*3009*/            OPC_MoveChild, 0,
/*3011*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*3014*/            OPC_MoveChild, 0,
/*3016*/            OPC_CheckSame, 0,
/*3018*/            OPC_MoveParent,
/*3019*/            OPC_MoveChild, 1,
/*3021*/            OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3032*/            OPC_MoveParent,
/*3033*/            OPC_MoveParent,
/*3034*/            OPC_RecordChild1, // #2 = $z
/*3035*/            OPC_MoveParent,
/*3036*/            OPC_CheckType, MVT::i32,
/*3038*/            OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*3040*/            OPC_EmitInteger, MVT::i32, 0, 
/*3043*/            OPC_EmitInteger, MVT::i32, 0, 
/*3046*/            OPC_EmitInteger, MVT::i32, 0, 
/*3049*/            OPC_EmitInteger, MVT::i32, 0, 
/*3052*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3064*/            OPC_EmitInteger, MVT::i32, 0, 
/*3067*/            OPC_EmitInteger, MVT::i32, 0, 
/*3070*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3082*/            OPC_EmitInteger, MVT::i32, 0, 
/*3085*/            OPC_EmitInteger, MVT::i32, 0, 
/*3088*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3100*/            OPC_EmitInteger, MVT::i32, 1, 
/*3103*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*3106*/            OPC_EmitInteger, MVT::i32, 0, 
/*3109*/            OPC_EmitInteger, MVT::i32, 0, 
/*3112*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$y), (and:i32 (xor:i32 i32:i32:$x, -1:i32), i32:i32:$z)) - Complexity = 17
                    // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*3137*/          0, /*End of Scope*/
/*3138*/        /*Scope*/ 119|128,1/*247*/, /*->3387*/
/*3140*/          OPC_MoveChild, 1,
/*3142*/          OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*3145*/          OPC_RecordChild0, // #1 = $x
/*3146*/          OPC_MoveChild, 1,
/*3148*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3159*/          OPC_MoveParent,
/*3160*/          OPC_MoveParent,
/*3161*/          OPC_MoveParent,
/*3162*/          OPC_MoveChild, 1,
/*3164*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*3167*/          OPC_Scope, 108, /*->3277*/ // 2 children in Scope
/*3169*/            OPC_RecordChild0, // #2 = $y
/*3170*/            OPC_MoveChild, 1,
/*3172*/            OPC_CheckSame, 1,
/*3174*/            OPC_MoveParent,
/*3175*/            OPC_MoveParent,
/*3176*/            OPC_CheckType, MVT::i32,
/*3178*/            OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*3180*/            OPC_EmitInteger, MVT::i32, 0, 
/*3183*/            OPC_EmitInteger, MVT::i32, 0, 
/*3186*/            OPC_EmitInteger, MVT::i32, 0, 
/*3189*/            OPC_EmitInteger, MVT::i32, 0, 
/*3192*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3204*/            OPC_EmitInteger, MVT::i32, 0, 
/*3207*/            OPC_EmitInteger, MVT::i32, 0, 
/*3210*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3222*/            OPC_EmitInteger, MVT::i32, 0, 
/*3225*/            OPC_EmitInteger, MVT::i32, 0, 
/*3228*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3240*/            OPC_EmitInteger, MVT::i32, 1, 
/*3243*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*3246*/            OPC_EmitInteger, MVT::i32, 0, 
/*3249*/            OPC_EmitInteger, MVT::i32, 0, 
/*3252*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (or:i32 (and:i32 i32:i32:$z, (xor:i32 i32:i32:$x, -1:i32)), (and:i32 i32:i32:$y, i32:i32:$x)) - Complexity = 17
                    // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*3277*/          /*Scope*/ 108, /*->3386*/
/*3278*/            OPC_MoveChild, 0,
/*3280*/            OPC_CheckSame, 1,
/*3282*/            OPC_MoveParent,
/*3283*/            OPC_RecordChild1, // #2 = $y
/*3284*/            OPC_MoveParent,
/*3285*/            OPC_CheckType, MVT::i32,
/*3287*/            OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*3289*/            OPC_EmitInteger, MVT::i32, 0, 
/*3292*/            OPC_EmitInteger, MVT::i32, 0, 
/*3295*/            OPC_EmitInteger, MVT::i32, 0, 
/*3298*/            OPC_EmitInteger, MVT::i32, 0, 
/*3301*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3313*/            OPC_EmitInteger, MVT::i32, 0, 
/*3316*/            OPC_EmitInteger, MVT::i32, 0, 
/*3319*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3331*/            OPC_EmitInteger, MVT::i32, 0, 
/*3334*/            OPC_EmitInteger, MVT::i32, 0, 
/*3337*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3349*/            OPC_EmitInteger, MVT::i32, 1, 
/*3352*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*3355*/            OPC_EmitInteger, MVT::i32, 0, 
/*3358*/            OPC_EmitInteger, MVT::i32, 0, 
/*3361*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (or:i32 (and:i32 i32:i32:$z, (xor:i32 i32:i32:$x, -1:i32)), (and:i32 i32:i32:$x, i32:i32:$y)) - Complexity = 17
                    // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*3386*/          0, /*End of Scope*/
/*3387*/        0, /*End of Scope*/
/*3388*/      /*Scope*/ 120|128,1/*248*/, /*->3638*/
/*3390*/        OPC_MoveChild, 0,
/*3392*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*3395*/        OPC_RecordChild0, // #0 = $x
/*3396*/        OPC_MoveChild, 1,
/*3398*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3409*/        OPC_MoveParent,
/*3410*/        OPC_MoveParent,
/*3411*/        OPC_RecordChild1, // #1 = $z
/*3412*/        OPC_MoveParent,
/*3413*/        OPC_MoveChild, 1,
/*3415*/        OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*3418*/        OPC_Scope, 108, /*->3528*/ // 2 children in Scope
/*3420*/          OPC_RecordChild0, // #2 = $y
/*3421*/          OPC_MoveChild, 1,
/*3423*/          OPC_CheckSame, 0,
/*3425*/          OPC_MoveParent,
/*3426*/          OPC_MoveParent,
/*3427*/          OPC_CheckType, MVT::i32,
/*3429*/          OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*3431*/          OPC_EmitInteger, MVT::i32, 0, 
/*3434*/          OPC_EmitInteger, MVT::i32, 0, 
/*3437*/          OPC_EmitInteger, MVT::i32, 0, 
/*3440*/          OPC_EmitInteger, MVT::i32, 0, 
/*3443*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3455*/          OPC_EmitInteger, MVT::i32, 0, 
/*3458*/          OPC_EmitInteger, MVT::i32, 0, 
/*3461*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3473*/          OPC_EmitInteger, MVT::i32, 0, 
/*3476*/          OPC_EmitInteger, MVT::i32, 0, 
/*3479*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3491*/          OPC_EmitInteger, MVT::i32, 1, 
/*3494*/          OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*3497*/          OPC_EmitInteger, MVT::i32, 0, 
/*3500*/          OPC_EmitInteger, MVT::i32, 0, 
/*3503*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 2, 8, 9, 10, 1, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (or:i32 (and:i32 (xor:i32 i32:i32:$x, -1:i32), i32:i32:$z), (and:i32 i32:i32:$y, i32:i32:$x)) - Complexity = 17
                  // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*3528*/        /*Scope*/ 108, /*->3637*/
/*3529*/          OPC_MoveChild, 0,
/*3531*/          OPC_CheckSame, 0,
/*3533*/          OPC_MoveParent,
/*3534*/          OPC_RecordChild1, // #2 = $y
/*3535*/          OPC_MoveParent,
/*3536*/          OPC_CheckType, MVT::i32,
/*3538*/          OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*3540*/          OPC_EmitInteger, MVT::i32, 0, 
/*3543*/          OPC_EmitInteger, MVT::i32, 0, 
/*3546*/          OPC_EmitInteger, MVT::i32, 0, 
/*3549*/          OPC_EmitInteger, MVT::i32, 0, 
/*3552*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3564*/          OPC_EmitInteger, MVT::i32, 0, 
/*3567*/          OPC_EmitInteger, MVT::i32, 0, 
/*3570*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3582*/          OPC_EmitInteger, MVT::i32, 0, 
/*3585*/          OPC_EmitInteger, MVT::i32, 0, 
/*3588*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3600*/          OPC_EmitInteger, MVT::i32, 1, 
/*3603*/          OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*3606*/          OPC_EmitInteger, MVT::i32, 0, 
/*3609*/          OPC_EmitInteger, MVT::i32, 0, 
/*3612*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 2, 8, 9, 10, 1, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (or:i32 (and:i32 (xor:i32 i32:i32:$x, -1:i32), i32:i32:$z), (and:i32 i32:i32:$x, i32:i32:$y)) - Complexity = 17
                  // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*3637*/        0, /*End of Scope*/
/*3638*/      /*Scope*/ 103|128,6/*871*/, /*->4511*/
/*3640*/        OPC_RecordChild0, // #0 = $x
/*3641*/        OPC_Scope, 20|128,5/*660*/, /*->4304*/ // 2 children in Scope
/*3644*/          OPC_RecordChild1, // #1 = $z
/*3645*/          OPC_MoveParent,
/*3646*/          OPC_MoveChild, 1,
/*3648*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*3651*/          OPC_Scope, 58|128,2/*314*/, /*->3968*/ // 4 children in Scope
/*3654*/            OPC_RecordChild0, // #2 = $y
/*3655*/            OPC_MoveChild, 1,
/*3657*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*3660*/            OPC_MoveChild, 0,
/*3662*/            OPC_Scope, 124|128,1/*252*/, /*->3917*/ // 2 children in Scope
/*3665*/              OPC_CheckSame, 0,
/*3667*/              OPC_MoveParent,
/*3668*/              OPC_MoveChild, 1,
/*3670*/              OPC_CheckSame, 1,
/*3672*/              OPC_MoveParent,
/*3673*/              OPC_MoveParent,
/*3674*/              OPC_MoveParent,
/*3675*/              OPC_CheckType, MVT::i32,
/*3677*/              OPC_Scope, 70|128,1/*198*/, /*->3878*/ // 2 children in Scope
/*3680*/                OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*3682*/                OPC_EmitInteger, MVT::i32, 0, 
/*3685*/                OPC_EmitInteger, MVT::i32, 0, 
/*3688*/                OPC_EmitInteger, MVT::i32, 0, 
/*3691*/                OPC_EmitInteger, MVT::i32, 0, 
/*3694*/                OPC_EmitInteger, MVT::i32, 1, 
/*3697*/                OPC_EmitInteger, MVT::i32, 0, 
/*3700*/                OPC_EmitInteger, MVT::i32, 0, 
/*3703*/                OPC_EmitInteger, MVT::i32, 0, 
/*3706*/                OPC_EmitInteger, MVT::i32, 0, 
/*3709*/                OPC_EmitInteger, MVT::i32, 0, 
/*3712*/                OPC_EmitInteger, MVT::i32, 0, 
/*3715*/                OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3727*/                OPC_EmitInteger, MVT::i32, 0, 
/*3730*/                OPC_EmitInteger, MVT::i32, 0, 
/*3733*/                OPC_EmitInteger, MVT::i32, 0, 
/*3736*/                OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3748*/                OPC_EmitInteger, MVT::i32, 1, 
/*3751*/                OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*3754*/                OPC_EmitInteger, MVT::i32, 0, 
/*3757*/                OPC_EmitInteger, MVT::i32, 0, 
/*3760*/                OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                            1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*3787*/                OPC_EmitInteger, MVT::i32, 0, 
/*3790*/                OPC_EmitInteger, MVT::i32, 0, 
/*3793*/                OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3805*/                OPC_EmitInteger, MVT::i32, 0, 
/*3808*/                OPC_EmitInteger, MVT::i32, 0, 
/*3811*/                OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3823*/                OPC_EmitInteger, MVT::i32, 0, 
/*3826*/                OPC_EmitInteger, MVT::i32, 0, 
/*3829*/                OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3841*/                OPC_EmitInteger, MVT::i32, 1, 
/*3844*/                OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*3847*/                OPC_EmitInteger, MVT::i32, 0, 
/*3850*/                OPC_EmitInteger, MVT::i32, 0, 
/*3853*/                OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                            1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$z), (and:i32 i32:i32:$y, (or:i32 i32:i32:$x, i32:i32:$z))) - Complexity = 12
                        // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*3878*/              /*Scope*/ 37, /*->3916*/
/*3879*/                OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*3881*/                OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*3890*/                OPC_EmitInteger, MVT::i32, 0, 
/*3893*/                OPC_EmitInteger, MVT::i32, 0, 
/*3896*/                OPC_EmitInteger, MVT::i32, 0, 
/*3899*/                OPC_EmitInteger, MVT::i32, 0, 
/*3902*/                OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                            1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 1, 2, 4, 5, 6, 7, 
                        // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$z), (and:i32 i32:i32:$y, (or:i32 i32:i32:$x, i32:i32:$z))) - Complexity = 12
                        // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*3916*/              0, /*End of Scope*/
/*3917*/            /*Scope*/ 49, /*->3967*/
/*3918*/              OPC_CheckSame, 1,
/*3920*/              OPC_MoveParent,
/*3921*/              OPC_MoveChild, 1,
/*3923*/              OPC_CheckSame, 0,
/*3925*/              OPC_MoveParent,
/*3926*/              OPC_MoveParent,
/*3927*/              OPC_MoveParent,
/*3928*/              OPC_CheckType, MVT::i32,
/*3930*/              OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*3932*/              OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*3941*/              OPC_EmitInteger, MVT::i32, 0, 
/*3944*/              OPC_EmitInteger, MVT::i32, 0, 
/*3947*/              OPC_EmitInteger, MVT::i32, 0, 
/*3950*/              OPC_EmitInteger, MVT::i32, 0, 
/*3953*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 1, 2, 4, 5, 6, 7, 
                      // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$z), (and:i32 i32:i32:$y, (or:i32 i32:i32:$z, i32:i32:$x))) - Complexity = 12
                      // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*3967*/            0, /*End of Scope*/
/*3968*/          /*Scope*/ 111, /*->4080*/
/*3969*/            OPC_MoveChild, 0,
/*3971*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*3974*/            OPC_MoveChild, 0,
/*3976*/            OPC_Scope, 50, /*->4028*/ // 2 children in Scope
/*3978*/              OPC_CheckSame, 0,
/*3980*/              OPC_MoveParent,
/*3981*/              OPC_MoveChild, 1,
/*3983*/              OPC_CheckSame, 1,
/*3985*/              OPC_MoveParent,
/*3986*/              OPC_MoveParent,
/*3987*/              OPC_RecordChild1, // #2 = $y
/*3988*/              OPC_MoveParent,
/*3989*/              OPC_CheckType, MVT::i32,
/*3991*/              OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*3993*/              OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*4002*/              OPC_EmitInteger, MVT::i32, 0, 
/*4005*/              OPC_EmitInteger, MVT::i32, 0, 
/*4008*/              OPC_EmitInteger, MVT::i32, 0, 
/*4011*/              OPC_EmitInteger, MVT::i32, 0, 
/*4014*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 1, 2, 4, 5, 6, 7, 
                      // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$z), (and:i32 (or:i32 i32:i32:$x, i32:i32:$z), i32:i32:$y)) - Complexity = 12
                      // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4028*/            /*Scope*/ 50, /*->4079*/
/*4029*/              OPC_CheckSame, 1,
/*4031*/              OPC_MoveParent,
/*4032*/              OPC_MoveChild, 1,
/*4034*/              OPC_CheckSame, 0,
/*4036*/              OPC_MoveParent,
/*4037*/              OPC_MoveParent,
/*4038*/              OPC_RecordChild1, // #2 = $y
/*4039*/              OPC_MoveParent,
/*4040*/              OPC_CheckType, MVT::i32,
/*4042*/              OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*4044*/              OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*4053*/              OPC_EmitInteger, MVT::i32, 0, 
/*4056*/              OPC_EmitInteger, MVT::i32, 0, 
/*4059*/              OPC_EmitInteger, MVT::i32, 0, 
/*4062*/              OPC_EmitInteger, MVT::i32, 0, 
/*4065*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 1, 2, 4, 5, 6, 7, 
                      // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$z), (and:i32 (or:i32 i32:i32:$z, i32:i32:$x), i32:i32:$y)) - Complexity = 12
                      // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4079*/            0, /*End of Scope*/
/*4080*/          /*Scope*/ 110, /*->4191*/
/*4081*/            OPC_RecordChild0, // #2 = $y
/*4082*/            OPC_MoveChild, 1,
/*4084*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*4087*/            OPC_MoveChild, 0,
/*4089*/            OPC_Scope, 49, /*->4140*/ // 2 children in Scope
/*4091*/              OPC_CheckSame, 1,
/*4093*/              OPC_MoveParent,
/*4094*/              OPC_MoveChild, 1,
/*4096*/              OPC_CheckSame, 0,
/*4098*/              OPC_MoveParent,
/*4099*/              OPC_MoveParent,
/*4100*/              OPC_MoveParent,
/*4101*/              OPC_CheckType, MVT::i32,
/*4103*/              OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*4105*/              OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4114*/              OPC_EmitInteger, MVT::i32, 0, 
/*4117*/              OPC_EmitInteger, MVT::i32, 0, 
/*4120*/              OPC_EmitInteger, MVT::i32, 0, 
/*4123*/              OPC_EmitInteger, MVT::i32, 0, 
/*4126*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 0, 2, 4, 5, 6, 7, 
                      // Src: (or:i32 (and:i32 i32:i32:$z, i32:i32:$x), (and:i32 i32:i32:$y, (or:i32 i32:i32:$x, i32:i32:$z))) - Complexity = 12
                      // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4140*/            /*Scope*/ 49, /*->4190*/
/*4141*/              OPC_CheckSame, 0,
/*4143*/              OPC_MoveParent,
/*4144*/              OPC_MoveChild, 1,
/*4146*/              OPC_CheckSame, 1,
/*4148*/              OPC_MoveParent,
/*4149*/              OPC_MoveParent,
/*4150*/              OPC_MoveParent,
/*4151*/              OPC_CheckType, MVT::i32,
/*4153*/              OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*4155*/              OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4164*/              OPC_EmitInteger, MVT::i32, 0, 
/*4167*/              OPC_EmitInteger, MVT::i32, 0, 
/*4170*/              OPC_EmitInteger, MVT::i32, 0, 
/*4173*/              OPC_EmitInteger, MVT::i32, 0, 
/*4176*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 0, 2, 4, 5, 6, 7, 
                      // Src: (or:i32 (and:i32 i32:i32:$z, i32:i32:$x), (and:i32 i32:i32:$y, (or:i32 i32:i32:$z, i32:i32:$x))) - Complexity = 12
                      // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4190*/            0, /*End of Scope*/
/*4191*/          /*Scope*/ 111, /*->4303*/
/*4192*/            OPC_MoveChild, 0,
/*4194*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*4197*/            OPC_MoveChild, 0,
/*4199*/            OPC_Scope, 50, /*->4251*/ // 2 children in Scope
/*4201*/              OPC_CheckSame, 1,
/*4203*/              OPC_MoveParent,
/*4204*/              OPC_MoveChild, 1,
/*4206*/              OPC_CheckSame, 0,
/*4208*/              OPC_MoveParent,
/*4209*/              OPC_MoveParent,
/*4210*/              OPC_RecordChild1, // #2 = $y
/*4211*/              OPC_MoveParent,
/*4212*/              OPC_CheckType, MVT::i32,
/*4214*/              OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*4216*/              OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4225*/              OPC_EmitInteger, MVT::i32, 0, 
/*4228*/              OPC_EmitInteger, MVT::i32, 0, 
/*4231*/              OPC_EmitInteger, MVT::i32, 0, 
/*4234*/              OPC_EmitInteger, MVT::i32, 0, 
/*4237*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 0, 2, 4, 5, 6, 7, 
                      // Src: (or:i32 (and:i32 i32:i32:$z, i32:i32:$x), (and:i32 (or:i32 i32:i32:$x, i32:i32:$z), i32:i32:$y)) - Complexity = 12
                      // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4251*/            /*Scope*/ 50, /*->4302*/
/*4252*/              OPC_CheckSame, 0,
/*4254*/              OPC_MoveParent,
/*4255*/              OPC_MoveChild, 1,
/*4257*/              OPC_CheckSame, 1,
/*4259*/              OPC_MoveParent,
/*4260*/              OPC_MoveParent,
/*4261*/              OPC_RecordChild1, // #2 = $y
/*4262*/              OPC_MoveParent,
/*4263*/              OPC_CheckType, MVT::i32,
/*4265*/              OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*4267*/              OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4276*/              OPC_EmitInteger, MVT::i32, 0, 
/*4279*/              OPC_EmitInteger, MVT::i32, 0, 
/*4282*/              OPC_EmitInteger, MVT::i32, 0, 
/*4285*/              OPC_EmitInteger, MVT::i32, 0, 
/*4288*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 0, 2, 4, 5, 6, 7, 
                      // Src: (or:i32 (and:i32 i32:i32:$z, i32:i32:$x), (and:i32 (or:i32 i32:i32:$z, i32:i32:$x), i32:i32:$y)) - Complexity = 12
                      // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4302*/            0, /*End of Scope*/
/*4303*/          0, /*End of Scope*/
/*4304*/        /*Scope*/ 76|128,1/*204*/, /*->4510*/
/*4306*/          OPC_MoveChild, 1,
/*4308*/          OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*4311*/          OPC_RecordChild0, // #1 = $x
/*4312*/          OPC_RecordChild1, // #2 = $z
/*4313*/          OPC_MoveParent,
/*4314*/          OPC_MoveParent,
/*4315*/          OPC_MoveChild, 1,
/*4317*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*4320*/          OPC_MoveChild, 0,
/*4322*/          OPC_Scope, 48, /*->4372*/ // 3 children in Scope
/*4324*/            OPC_CheckSame, 1,
/*4326*/            OPC_MoveParent,
/*4327*/            OPC_MoveChild, 1,
/*4329*/            OPC_CheckSame, 2,
/*4331*/            OPC_MoveParent,
/*4332*/            OPC_MoveParent,
/*4333*/            OPC_CheckType, MVT::i32,
/*4335*/            OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*4337*/            OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #3
/*4346*/            OPC_EmitInteger, MVT::i32, 0, 
/*4349*/            OPC_EmitInteger, MVT::i32, 0, 
/*4352*/            OPC_EmitInteger, MVT::i32, 0, 
/*4355*/            OPC_EmitInteger, MVT::i32, 0, 
/*4358*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 2, 0, 4, 5, 6, 7, 
                    // Src: (or:i32 (and:i32 i32:i32:$y, (or:i32 i32:i32:$x, i32:i32:$z)), (and:i32 i32:i32:$x, i32:i32:$z)) - Complexity = 12
                    // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4372*/          /*Scope*/ 87, /*->4460*/
/*4373*/            OPC_CheckSame, 2,
/*4375*/            OPC_MoveParent,
/*4376*/            OPC_MoveChild, 1,
/*4378*/            OPC_CheckSame, 1,
/*4380*/            OPC_MoveParent,
/*4381*/            OPC_MoveParent,
/*4382*/            OPC_CheckType, MVT::i32,
/*4384*/            OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*4386*/            OPC_Scope, 35, /*->4423*/ // 2 children in Scope
/*4388*/              OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #3
/*4397*/              OPC_EmitInteger, MVT::i32, 0, 
/*4400*/              OPC_EmitInteger, MVT::i32, 0, 
/*4403*/              OPC_EmitInteger, MVT::i32, 0, 
/*4406*/              OPC_EmitInteger, MVT::i32, 0, 
/*4409*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 2, 0, 4, 5, 6, 7, 
                      // Src: (or:i32 (and:i32 i32:i32:$y, (or:i32 i32:i32:$x, i32:i32:$z)), (and:i32 i32:i32:$z, i32:i32:$x)) - Complexity = 12
                      // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4423*/            /*Scope*/ 35, /*->4459*/
/*4424*/              OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 0,  // Results = #3
/*4433*/              OPC_EmitInteger, MVT::i32, 0, 
/*4436*/              OPC_EmitInteger, MVT::i32, 0, 
/*4439*/              OPC_EmitInteger, MVT::i32, 0, 
/*4442*/              OPC_EmitInteger, MVT::i32, 0, 
/*4445*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 1, 0, 4, 5, 6, 7, 
                      // Src: (or:i32 (and:i32 i32:i32:$y, (or:i32 i32:i32:$z, i32:i32:$x)), (and:i32 i32:i32:$x, i32:i32:$z)) - Complexity = 12
                      // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4459*/            0, /*End of Scope*/
/*4460*/          /*Scope*/ 48, /*->4509*/
/*4461*/            OPC_CheckSame, 1,
/*4463*/            OPC_MoveParent,
/*4464*/            OPC_MoveChild, 1,
/*4466*/            OPC_CheckSame, 2,
/*4468*/            OPC_MoveParent,
/*4469*/            OPC_MoveParent,
/*4470*/            OPC_CheckType, MVT::i32,
/*4472*/            OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*4474*/            OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 0,  // Results = #3
/*4483*/            OPC_EmitInteger, MVT::i32, 0, 
/*4486*/            OPC_EmitInteger, MVT::i32, 0, 
/*4489*/            OPC_EmitInteger, MVT::i32, 0, 
/*4492*/            OPC_EmitInteger, MVT::i32, 0, 
/*4495*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 1, 0, 4, 5, 6, 7, 
                    // Src: (or:i32 (and:i32 i32:i32:$y, (or:i32 i32:i32:$z, i32:i32:$x)), (and:i32 i32:i32:$z, i32:i32:$x)) - Complexity = 12
                    // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4509*/          0, /*End of Scope*/
/*4510*/        0, /*End of Scope*/
/*4511*/      /*Scope*/ 77|128,1/*205*/, /*->4718*/
/*4513*/        OPC_MoveChild, 0,
/*4515*/        OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*4518*/        OPC_RecordChild0, // #0 = $x
/*4519*/        OPC_RecordChild1, // #1 = $z
/*4520*/        OPC_MoveParent,
/*4521*/        OPC_RecordChild1, // #2 = $y
/*4522*/        OPC_MoveParent,
/*4523*/        OPC_MoveChild, 1,
/*4525*/        OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*4528*/        OPC_MoveChild, 0,
/*4530*/        OPC_Scope, 48, /*->4580*/ // 3 children in Scope
/*4532*/          OPC_CheckSame, 0,
/*4534*/          OPC_MoveParent,
/*4535*/          OPC_MoveChild, 1,
/*4537*/          OPC_CheckSame, 1,
/*4539*/          OPC_MoveParent,
/*4540*/          OPC_MoveParent,
/*4541*/          OPC_CheckType, MVT::i32,
/*4543*/          OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*4545*/          OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*4554*/          OPC_EmitInteger, MVT::i32, 0, 
/*4557*/          OPC_EmitInteger, MVT::i32, 0, 
/*4560*/          OPC_EmitInteger, MVT::i32, 0, 
/*4563*/          OPC_EmitInteger, MVT::i32, 0, 
/*4566*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 1, 2, 4, 5, 6, 7, 
                  // Src: (or:i32 (and:i32 (or:i32 i32:i32:$x, i32:i32:$z), i32:i32:$y), (and:i32 i32:i32:$x, i32:i32:$z)) - Complexity = 12
                  // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4580*/        /*Scope*/ 87, /*->4668*/
/*4581*/          OPC_CheckSame, 1,
/*4583*/          OPC_MoveParent,
/*4584*/          OPC_MoveChild, 1,
/*4586*/          OPC_CheckSame, 0,
/*4588*/          OPC_MoveParent,
/*4589*/          OPC_MoveParent,
/*4590*/          OPC_CheckType, MVT::i32,
/*4592*/          OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*4594*/          OPC_Scope, 35, /*->4631*/ // 2 children in Scope
/*4596*/            OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*4605*/            OPC_EmitInteger, MVT::i32, 0, 
/*4608*/            OPC_EmitInteger, MVT::i32, 0, 
/*4611*/            OPC_EmitInteger, MVT::i32, 0, 
/*4614*/            OPC_EmitInteger, MVT::i32, 0, 
/*4617*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 1, 2, 4, 5, 6, 7, 
                    // Src: (or:i32 (and:i32 (or:i32 i32:i32:$x, i32:i32:$z), i32:i32:$y), (and:i32 i32:i32:$z, i32:i32:$x)) - Complexity = 12
                    // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4631*/          /*Scope*/ 35, /*->4667*/
/*4632*/            OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4641*/            OPC_EmitInteger, MVT::i32, 0, 
/*4644*/            OPC_EmitInteger, MVT::i32, 0, 
/*4647*/            OPC_EmitInteger, MVT::i32, 0, 
/*4650*/            OPC_EmitInteger, MVT::i32, 0, 
/*4653*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 0, 2, 4, 5, 6, 7, 
                    // Src: (or:i32 (and:i32 (or:i32 i32:i32:$z, i32:i32:$x), i32:i32:$y), (and:i32 i32:i32:$x, i32:i32:$z)) - Complexity = 12
                    // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4667*/          0, /*End of Scope*/
/*4668*/        /*Scope*/ 48, /*->4717*/
/*4669*/          OPC_CheckSame, 0,
/*4671*/          OPC_MoveParent,
/*4672*/          OPC_MoveChild, 1,
/*4674*/          OPC_CheckSame, 1,
/*4676*/          OPC_MoveParent,
/*4677*/          OPC_MoveParent,
/*4678*/          OPC_CheckType, MVT::i32,
/*4680*/          OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*4682*/          OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4691*/          OPC_EmitInteger, MVT::i32, 0, 
/*4694*/          OPC_EmitInteger, MVT::i32, 0, 
/*4697*/          OPC_EmitInteger, MVT::i32, 0, 
/*4700*/          OPC_EmitInteger, MVT::i32, 0, 
/*4703*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 0, 2, 4, 5, 6, 7, 
                  // Src: (or:i32 (and:i32 (or:i32 i32:i32:$z, i32:i32:$x), i32:i32:$y), (and:i32 i32:i32:$z, i32:i32:$x)) - Complexity = 12
                  // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4717*/        0, /*End of Scope*/
/*4718*/      /*Scope*/ 15|128,18/*2319*/, /*->7039*/
/*4720*/        OPC_RecordChild0, // #0 = $x
/*4721*/        OPC_Scope, 3|128,12/*1539*/, /*->6263*/ // 2 children in Scope
/*4724*/          OPC_RecordChild1, // #1 = $z
/*4725*/          OPC_MoveParent,
/*4726*/          OPC_MoveChild, 1,
/*4728*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*4731*/          OPC_Scope, 90|128,1/*218*/, /*->4952*/ // 4 children in Scope
/*4734*/            OPC_RecordChild0, // #2 = $y
/*4735*/            OPC_MoveChild, 1,
/*4737*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*4740*/            OPC_MoveChild, 0,
/*4742*/            OPC_CheckSame, 1,
/*4744*/            OPC_MoveParent,
/*4745*/            OPC_MoveChild, 1,
/*4747*/            OPC_CheckSame, 0,
/*4749*/            OPC_MoveParent,
/*4750*/            OPC_MoveParent,
/*4751*/            OPC_MoveParent,
/*4752*/            OPC_CheckType, MVT::i32,
/*4754*/            OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*4756*/            OPC_EmitInteger, MVT::i32, 0, 
/*4759*/            OPC_EmitInteger, MVT::i32, 0, 
/*4762*/            OPC_EmitInteger, MVT::i32, 0, 
/*4765*/            OPC_EmitInteger, MVT::i32, 0, 
/*4768*/            OPC_EmitInteger, MVT::i32, 1, 
/*4771*/            OPC_EmitInteger, MVT::i32, 0, 
/*4774*/            OPC_EmitInteger, MVT::i32, 0, 
/*4777*/            OPC_EmitInteger, MVT::i32, 0, 
/*4780*/            OPC_EmitInteger, MVT::i32, 0, 
/*4783*/            OPC_EmitInteger, MVT::i32, 0, 
/*4786*/            OPC_EmitInteger, MVT::i32, 0, 
/*4789*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4801*/            OPC_EmitInteger, MVT::i32, 0, 
/*4804*/            OPC_EmitInteger, MVT::i32, 0, 
/*4807*/            OPC_EmitInteger, MVT::i32, 0, 
/*4810*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4822*/            OPC_EmitInteger, MVT::i32, 1, 
/*4825*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*4828*/            OPC_EmitInteger, MVT::i32, 0, 
/*4831*/            OPC_EmitInteger, MVT::i32, 0, 
/*4834*/            OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                        1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*4861*/            OPC_EmitInteger, MVT::i32, 0, 
/*4864*/            OPC_EmitInteger, MVT::i32, 0, 
/*4867*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4879*/            OPC_EmitInteger, MVT::i32, 0, 
/*4882*/            OPC_EmitInteger, MVT::i32, 0, 
/*4885*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4897*/            OPC_EmitInteger, MVT::i32, 0, 
/*4900*/            OPC_EmitInteger, MVT::i32, 0, 
/*4903*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4915*/            OPC_EmitInteger, MVT::i32, 1, 
/*4918*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*4921*/            OPC_EmitInteger, MVT::i32, 0, 
/*4924*/            OPC_EmitInteger, MVT::i32, 0, 
/*4927*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                    // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$z), (and:i32 i32:i32:$y, (or:i32 i32:i32:$z, i32:i32:$x))) - Complexity = 12
                    // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4952*/          /*Scope*/ 51|128,3/*435*/, /*->5389*/
/*4954*/            OPC_MoveChild, 0,
/*4956*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*4959*/            OPC_MoveChild, 0,
/*4961*/            OPC_Scope, 83|128,1/*211*/, /*->5175*/ // 2 children in Scope
/*4964*/              OPC_CheckSame, 0,
/*4966*/              OPC_MoveParent,
/*4967*/              OPC_MoveChild, 1,
/*4969*/              OPC_CheckSame, 1,
/*4971*/              OPC_MoveParent,
/*4972*/              OPC_MoveParent,
/*4973*/              OPC_RecordChild1, // #2 = $y
/*4974*/              OPC_MoveParent,
/*4975*/              OPC_CheckType, MVT::i32,
/*4977*/              OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*4979*/              OPC_EmitInteger, MVT::i32, 0, 
/*4982*/              OPC_EmitInteger, MVT::i32, 0, 
/*4985*/              OPC_EmitInteger, MVT::i32, 0, 
/*4988*/              OPC_EmitInteger, MVT::i32, 0, 
/*4991*/              OPC_EmitInteger, MVT::i32, 1, 
/*4994*/              OPC_EmitInteger, MVT::i32, 0, 
/*4997*/              OPC_EmitInteger, MVT::i32, 0, 
/*5000*/              OPC_EmitInteger, MVT::i32, 0, 
/*5003*/              OPC_EmitInteger, MVT::i32, 0, 
/*5006*/              OPC_EmitInteger, MVT::i32, 0, 
/*5009*/              OPC_EmitInteger, MVT::i32, 0, 
/*5012*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5024*/              OPC_EmitInteger, MVT::i32, 0, 
/*5027*/              OPC_EmitInteger, MVT::i32, 0, 
/*5030*/              OPC_EmitInteger, MVT::i32, 0, 
/*5033*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5045*/              OPC_EmitInteger, MVT::i32, 1, 
/*5048*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*5051*/              OPC_EmitInteger, MVT::i32, 0, 
/*5054*/              OPC_EmitInteger, MVT::i32, 0, 
/*5057*/              OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*5084*/              OPC_EmitInteger, MVT::i32, 0, 
/*5087*/              OPC_EmitInteger, MVT::i32, 0, 
/*5090*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5102*/              OPC_EmitInteger, MVT::i32, 0, 
/*5105*/              OPC_EmitInteger, MVT::i32, 0, 
/*5108*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5120*/              OPC_EmitInteger, MVT::i32, 0, 
/*5123*/              OPC_EmitInteger, MVT::i32, 0, 
/*5126*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5138*/              OPC_EmitInteger, MVT::i32, 1, 
/*5141*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*5144*/              OPC_EmitInteger, MVT::i32, 0, 
/*5147*/              OPC_EmitInteger, MVT::i32, 0, 
/*5150*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$z), (and:i32 (or:i32 i32:i32:$x, i32:i32:$z), i32:i32:$y)) - Complexity = 12
                      // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*5175*/            /*Scope*/ 83|128,1/*211*/, /*->5388*/
/*5177*/              OPC_CheckSame, 1,
/*5179*/              OPC_MoveParent,
/*5180*/              OPC_MoveChild, 1,
/*5182*/              OPC_CheckSame, 0,
/*5184*/              OPC_MoveParent,
/*5185*/              OPC_MoveParent,
/*5186*/              OPC_RecordChild1, // #2 = $y
/*5187*/              OPC_MoveParent,
/*5188*/              OPC_CheckType, MVT::i32,
/*5190*/              OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*5192*/              OPC_EmitInteger, MVT::i32, 0, 
/*5195*/              OPC_EmitInteger, MVT::i32, 0, 
/*5198*/              OPC_EmitInteger, MVT::i32, 0, 
/*5201*/              OPC_EmitInteger, MVT::i32, 0, 
/*5204*/              OPC_EmitInteger, MVT::i32, 1, 
/*5207*/              OPC_EmitInteger, MVT::i32, 0, 
/*5210*/              OPC_EmitInteger, MVT::i32, 0, 
/*5213*/              OPC_EmitInteger, MVT::i32, 0, 
/*5216*/              OPC_EmitInteger, MVT::i32, 0, 
/*5219*/              OPC_EmitInteger, MVT::i32, 0, 
/*5222*/              OPC_EmitInteger, MVT::i32, 0, 
/*5225*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5237*/              OPC_EmitInteger, MVT::i32, 0, 
/*5240*/              OPC_EmitInteger, MVT::i32, 0, 
/*5243*/              OPC_EmitInteger, MVT::i32, 0, 
/*5246*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5258*/              OPC_EmitInteger, MVT::i32, 1, 
/*5261*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*5264*/              OPC_EmitInteger, MVT::i32, 0, 
/*5267*/              OPC_EmitInteger, MVT::i32, 0, 
/*5270*/              OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*5297*/              OPC_EmitInteger, MVT::i32, 0, 
/*5300*/              OPC_EmitInteger, MVT::i32, 0, 
/*5303*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5315*/              OPC_EmitInteger, MVT::i32, 0, 
/*5318*/              OPC_EmitInteger, MVT::i32, 0, 
/*5321*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5333*/              OPC_EmitInteger, MVT::i32, 0, 
/*5336*/              OPC_EmitInteger, MVT::i32, 0, 
/*5339*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5351*/              OPC_EmitInteger, MVT::i32, 1, 
/*5354*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*5357*/              OPC_EmitInteger, MVT::i32, 0, 
/*5360*/              OPC_EmitInteger, MVT::i32, 0, 
/*5363*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$z), (and:i32 (or:i32 i32:i32:$z, i32:i32:$x), i32:i32:$y)) - Complexity = 12
                      // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*5388*/            0, /*End of Scope*/
/*5389*/          /*Scope*/ 50|128,3/*434*/, /*->5825*/
/*5391*/            OPC_RecordChild0, // #2 = $y
/*5392*/            OPC_MoveChild, 1,
/*5394*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*5397*/            OPC_MoveChild, 0,
/*5399*/            OPC_Scope, 82|128,1/*210*/, /*->5612*/ // 2 children in Scope
/*5402*/              OPC_CheckSame, 1,
/*5404*/              OPC_MoveParent,
/*5405*/              OPC_MoveChild, 1,
/*5407*/              OPC_CheckSame, 0,
/*5409*/              OPC_MoveParent,
/*5410*/              OPC_MoveParent,
/*5411*/              OPC_MoveParent,
/*5412*/              OPC_CheckType, MVT::i32,
/*5414*/              OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*5416*/              OPC_EmitInteger, MVT::i32, 0, 
/*5419*/              OPC_EmitInteger, MVT::i32, 0, 
/*5422*/              OPC_EmitInteger, MVT::i32, 0, 
/*5425*/              OPC_EmitInteger, MVT::i32, 0, 
/*5428*/              OPC_EmitInteger, MVT::i32, 1, 
/*5431*/              OPC_EmitInteger, MVT::i32, 0, 
/*5434*/              OPC_EmitInteger, MVT::i32, 0, 
/*5437*/              OPC_EmitInteger, MVT::i32, 0, 
/*5440*/              OPC_EmitInteger, MVT::i32, 0, 
/*5443*/              OPC_EmitInteger, MVT::i32, 0, 
/*5446*/              OPC_EmitInteger, MVT::i32, 0, 
/*5449*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5461*/              OPC_EmitInteger, MVT::i32, 0, 
/*5464*/              OPC_EmitInteger, MVT::i32, 0, 
/*5467*/              OPC_EmitInteger, MVT::i32, 0, 
/*5470*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5482*/              OPC_EmitInteger, MVT::i32, 1, 
/*5485*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*5488*/              OPC_EmitInteger, MVT::i32, 0, 
/*5491*/              OPC_EmitInteger, MVT::i32, 0, 
/*5494*/              OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*5521*/              OPC_EmitInteger, MVT::i32, 0, 
/*5524*/              OPC_EmitInteger, MVT::i32, 0, 
/*5527*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5539*/              OPC_EmitInteger, MVT::i32, 0, 
/*5542*/              OPC_EmitInteger, MVT::i32, 0, 
/*5545*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5557*/              OPC_EmitInteger, MVT::i32, 0, 
/*5560*/              OPC_EmitInteger, MVT::i32, 0, 
/*5563*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5575*/              OPC_EmitInteger, MVT::i32, 1, 
/*5578*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*5581*/              OPC_EmitInteger, MVT::i32, 0, 
/*5584*/              OPC_EmitInteger, MVT::i32, 0, 
/*5587*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:i32 (and:i32 i32:i32:$z, i32:i32:$x), (and:i32 i32:i32:$y, (or:i32 i32:i32:$x, i32:i32:$z))) - Complexity = 12
                      // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*5612*/            /*Scope*/ 82|128,1/*210*/, /*->5824*/
/*5614*/              OPC_CheckSame, 0,
/*5616*/              OPC_MoveParent,
/*5617*/              OPC_MoveChild, 1,
/*5619*/              OPC_CheckSame, 1,
/*5621*/              OPC_MoveParent,
/*5622*/              OPC_MoveParent,
/*5623*/              OPC_MoveParent,
/*5624*/              OPC_CheckType, MVT::i32,
/*5626*/              OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*5628*/              OPC_EmitInteger, MVT::i32, 0, 
/*5631*/              OPC_EmitInteger, MVT::i32, 0, 
/*5634*/              OPC_EmitInteger, MVT::i32, 0, 
/*5637*/              OPC_EmitInteger, MVT::i32, 0, 
/*5640*/              OPC_EmitInteger, MVT::i32, 1, 
/*5643*/              OPC_EmitInteger, MVT::i32, 0, 
/*5646*/              OPC_EmitInteger, MVT::i32, 0, 
/*5649*/              OPC_EmitInteger, MVT::i32, 0, 
/*5652*/              OPC_EmitInteger, MVT::i32, 0, 
/*5655*/              OPC_EmitInteger, MVT::i32, 0, 
/*5658*/              OPC_EmitInteger, MVT::i32, 0, 
/*5661*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5673*/              OPC_EmitInteger, MVT::i32, 0, 
/*5676*/              OPC_EmitInteger, MVT::i32, 0, 
/*5679*/              OPC_EmitInteger, MVT::i32, 0, 
/*5682*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5694*/              OPC_EmitInteger, MVT::i32, 1, 
/*5697*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*5700*/              OPC_EmitInteger, MVT::i32, 0, 
/*5703*/              OPC_EmitInteger, MVT::i32, 0, 
/*5706*/              OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*5733*/              OPC_EmitInteger, MVT::i32, 0, 
/*5736*/              OPC_EmitInteger, MVT::i32, 0, 
/*5739*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5751*/              OPC_EmitInteger, MVT::i32, 0, 
/*5754*/              OPC_EmitInteger, MVT::i32, 0, 
/*5757*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5769*/              OPC_EmitInteger, MVT::i32, 0, 
/*5772*/              OPC_EmitInteger, MVT::i32, 0, 
/*5775*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5787*/              OPC_EmitInteger, MVT::i32, 1, 
/*5790*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*5793*/              OPC_EmitInteger, MVT::i32, 0, 
/*5796*/              OPC_EmitInteger, MVT::i32, 0, 
/*5799*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:i32 (and:i32 i32:i32:$z, i32:i32:$x), (and:i32 i32:i32:$y, (or:i32 i32:i32:$z, i32:i32:$x))) - Complexity = 12
                      // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*5824*/            0, /*End of Scope*/
/*5825*/          /*Scope*/ 51|128,3/*435*/, /*->6262*/
/*5827*/            OPC_MoveChild, 0,
/*5829*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*5832*/            OPC_MoveChild, 0,
/*5834*/            OPC_Scope, 83|128,1/*211*/, /*->6048*/ // 2 children in Scope
/*5837*/              OPC_CheckSame, 1,
/*5839*/              OPC_MoveParent,
/*5840*/              OPC_MoveChild, 1,
/*5842*/              OPC_CheckSame, 0,
/*5844*/              OPC_MoveParent,
/*5845*/              OPC_MoveParent,
/*5846*/              OPC_RecordChild1, // #2 = $y
/*5847*/              OPC_MoveParent,
/*5848*/              OPC_CheckType, MVT::i32,
/*5850*/              OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*5852*/              OPC_EmitInteger, MVT::i32, 0, 
/*5855*/              OPC_EmitInteger, MVT::i32, 0, 
/*5858*/              OPC_EmitInteger, MVT::i32, 0, 
/*5861*/              OPC_EmitInteger, MVT::i32, 0, 
/*5864*/              OPC_EmitInteger, MVT::i32, 1, 
/*5867*/              OPC_EmitInteger, MVT::i32, 0, 
/*5870*/              OPC_EmitInteger, MVT::i32, 0, 
/*5873*/              OPC_EmitInteger, MVT::i32, 0, 
/*5876*/              OPC_EmitInteger, MVT::i32, 0, 
/*5879*/              OPC_EmitInteger, MVT::i32, 0, 
/*5882*/              OPC_EmitInteger, MVT::i32, 0, 
/*5885*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5897*/              OPC_EmitInteger, MVT::i32, 0, 
/*5900*/              OPC_EmitInteger, MVT::i32, 0, 
/*5903*/              OPC_EmitInteger, MVT::i32, 0, 
/*5906*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5918*/              OPC_EmitInteger, MVT::i32, 1, 
/*5921*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*5924*/              OPC_EmitInteger, MVT::i32, 0, 
/*5927*/              OPC_EmitInteger, MVT::i32, 0, 
/*5930*/              OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*5957*/              OPC_EmitInteger, MVT::i32, 0, 
/*5960*/              OPC_EmitInteger, MVT::i32, 0, 
/*5963*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5975*/              OPC_EmitInteger, MVT::i32, 0, 
/*5978*/              OPC_EmitInteger, MVT::i32, 0, 
/*5981*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5993*/              OPC_EmitInteger, MVT::i32, 0, 
/*5996*/              OPC_EmitInteger, MVT::i32, 0, 
/*5999*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6011*/              OPC_EmitInteger, MVT::i32, 1, 
/*6014*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*6017*/              OPC_EmitInteger, MVT::i32, 0, 
/*6020*/              OPC_EmitInteger, MVT::i32, 0, 
/*6023*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:i32 (and:i32 i32:i32:$z, i32:i32:$x), (and:i32 (or:i32 i32:i32:$x, i32:i32:$z), i32:i32:$y)) - Complexity = 12
                      // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*6048*/            /*Scope*/ 83|128,1/*211*/, /*->6261*/
/*6050*/              OPC_CheckSame, 0,
/*6052*/              OPC_MoveParent,
/*6053*/              OPC_MoveChild, 1,
/*6055*/              OPC_CheckSame, 1,
/*6057*/              OPC_MoveParent,
/*6058*/              OPC_MoveParent,
/*6059*/              OPC_RecordChild1, // #2 = $y
/*6060*/              OPC_MoveParent,
/*6061*/              OPC_CheckType, MVT::i32,
/*6063*/              OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*6065*/              OPC_EmitInteger, MVT::i32, 0, 
/*6068*/              OPC_EmitInteger, MVT::i32, 0, 
/*6071*/              OPC_EmitInteger, MVT::i32, 0, 
/*6074*/              OPC_EmitInteger, MVT::i32, 0, 
/*6077*/              OPC_EmitInteger, MVT::i32, 1, 
/*6080*/              OPC_EmitInteger, MVT::i32, 0, 
/*6083*/              OPC_EmitInteger, MVT::i32, 0, 
/*6086*/              OPC_EmitInteger, MVT::i32, 0, 
/*6089*/              OPC_EmitInteger, MVT::i32, 0, 
/*6092*/              OPC_EmitInteger, MVT::i32, 0, 
/*6095*/              OPC_EmitInteger, MVT::i32, 0, 
/*6098*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6110*/              OPC_EmitInteger, MVT::i32, 0, 
/*6113*/              OPC_EmitInteger, MVT::i32, 0, 
/*6116*/              OPC_EmitInteger, MVT::i32, 0, 
/*6119*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6131*/              OPC_EmitInteger, MVT::i32, 1, 
/*6134*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*6137*/              OPC_EmitInteger, MVT::i32, 0, 
/*6140*/              OPC_EmitInteger, MVT::i32, 0, 
/*6143*/              OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*6170*/              OPC_EmitInteger, MVT::i32, 0, 
/*6173*/              OPC_EmitInteger, MVT::i32, 0, 
/*6176*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6188*/              OPC_EmitInteger, MVT::i32, 0, 
/*6191*/              OPC_EmitInteger, MVT::i32, 0, 
/*6194*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6206*/              OPC_EmitInteger, MVT::i32, 0, 
/*6209*/              OPC_EmitInteger, MVT::i32, 0, 
/*6212*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6224*/              OPC_EmitInteger, MVT::i32, 1, 
/*6227*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*6230*/              OPC_EmitInteger, MVT::i32, 0, 
/*6233*/              OPC_EmitInteger, MVT::i32, 0, 
/*6236*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:i32 (and:i32 i32:i32:$z, i32:i32:$x), (and:i32 (or:i32 i32:i32:$z, i32:i32:$x), i32:i32:$y)) - Complexity = 12
                      // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*6261*/            0, /*End of Scope*/
/*6262*/          0, /*End of Scope*/
/*6263*/        /*Scope*/ 5|128,6/*773*/, /*->7038*/
/*6265*/          OPC_MoveChild, 1,
/*6267*/          OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*6270*/          OPC_RecordChild0, // #1 = $x
/*6271*/          OPC_RecordChild1, // #2 = $z
/*6272*/          OPC_MoveParent,
/*6273*/          OPC_MoveParent,
/*6274*/          OPC_MoveChild, 1,
/*6276*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*6279*/          OPC_MoveChild, 0,
/*6281*/          OPC_Scope, 81|128,1/*209*/, /*->6493*/ // 3 children in Scope
/*6284*/            OPC_CheckSame, 1,
/*6286*/            OPC_MoveParent,
/*6287*/            OPC_MoveChild, 1,
/*6289*/            OPC_CheckSame, 2,
/*6291*/            OPC_MoveParent,
/*6292*/            OPC_MoveParent,
/*6293*/            OPC_CheckType, MVT::i32,
/*6295*/            OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*6297*/            OPC_EmitInteger, MVT::i32, 0, 
/*6300*/            OPC_EmitInteger, MVT::i32, 0, 
/*6303*/            OPC_EmitInteger, MVT::i32, 0, 
/*6306*/            OPC_EmitInteger, MVT::i32, 0, 
/*6309*/            OPC_EmitInteger, MVT::i32, 1, 
/*6312*/            OPC_EmitInteger, MVT::i32, 0, 
/*6315*/            OPC_EmitInteger, MVT::i32, 0, 
/*6318*/            OPC_EmitInteger, MVT::i32, 0, 
/*6321*/            OPC_EmitInteger, MVT::i32, 0, 
/*6324*/            OPC_EmitInteger, MVT::i32, 0, 
/*6327*/            OPC_EmitInteger, MVT::i32, 0, 
/*6330*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6342*/            OPC_EmitInteger, MVT::i32, 0, 
/*6345*/            OPC_EmitInteger, MVT::i32, 0, 
/*6348*/            OPC_EmitInteger, MVT::i32, 0, 
/*6351*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6363*/            OPC_EmitInteger, MVT::i32, 1, 
/*6366*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*6369*/            OPC_EmitInteger, MVT::i32, 0, 
/*6372*/            OPC_EmitInteger, MVT::i32, 0, 
/*6375*/            OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                        1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*6402*/            OPC_EmitInteger, MVT::i32, 0, 
/*6405*/            OPC_EmitInteger, MVT::i32, 0, 
/*6408*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6420*/            OPC_EmitInteger, MVT::i32, 0, 
/*6423*/            OPC_EmitInteger, MVT::i32, 0, 
/*6426*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6438*/            OPC_EmitInteger, MVT::i32, 0, 
/*6441*/            OPC_EmitInteger, MVT::i32, 0, 
/*6444*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6456*/            OPC_EmitInteger, MVT::i32, 1, 
/*6459*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*6462*/            OPC_EmitInteger, MVT::i32, 0, 
/*6465*/            OPC_EmitInteger, MVT::i32, 0, 
/*6468*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 2, 27, 28, 29, 0, 30, 31, 32, 33, 34, 35, 36, 
                    // Src: (or:i32 (and:i32 i32:i32:$y, (or:i32 i32:i32:$x, i32:i32:$z)), (and:i32 i32:i32:$x, i32:i32:$z)) - Complexity = 12
                    // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*6493*/          /*Scope*/ 75|128,2/*331*/, /*->6826*/
/*6495*/            OPC_CheckSame, 2,
/*6497*/            OPC_MoveParent,
/*6498*/            OPC_MoveChild, 1,
/*6500*/            OPC_CheckSame, 1,
/*6502*/            OPC_MoveParent,
/*6503*/            OPC_MoveParent,
/*6504*/            OPC_CheckType, MVT::i32,
/*6506*/            OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*6508*/            OPC_EmitInteger, MVT::i32, 0, 
/*6511*/            OPC_EmitInteger, MVT::i32, 0, 
/*6514*/            OPC_EmitInteger, MVT::i32, 0, 
/*6517*/            OPC_EmitInteger, MVT::i32, 0, 
/*6520*/            OPC_EmitInteger, MVT::i32, 1, 
/*6523*/            OPC_EmitInteger, MVT::i32, 0, 
/*6526*/            OPC_EmitInteger, MVT::i32, 0, 
/*6529*/            OPC_EmitInteger, MVT::i32, 0, 
/*6532*/            OPC_EmitInteger, MVT::i32, 0, 
/*6535*/            OPC_EmitInteger, MVT::i32, 0, 
/*6538*/            OPC_EmitInteger, MVT::i32, 0, 
/*6541*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6553*/            OPC_EmitInteger, MVT::i32, 0, 
/*6556*/            OPC_EmitInteger, MVT::i32, 0, 
/*6559*/            OPC_EmitInteger, MVT::i32, 0, 
/*6562*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6574*/            OPC_EmitInteger, MVT::i32, 1, 
/*6577*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*6580*/            OPC_EmitInteger, MVT::i32, 0, 
/*6583*/            OPC_EmitInteger, MVT::i32, 0, 
/*6586*/            OPC_Scope, 118, /*->6706*/ // 2 children in Scope
/*6588*/              OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*6615*/              OPC_EmitInteger, MVT::i32, 0, 
/*6618*/              OPC_EmitInteger, MVT::i32, 0, 
/*6621*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6633*/              OPC_EmitInteger, MVT::i32, 0, 
/*6636*/              OPC_EmitInteger, MVT::i32, 0, 
/*6639*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6651*/              OPC_EmitInteger, MVT::i32, 0, 
/*6654*/              OPC_EmitInteger, MVT::i32, 0, 
/*6657*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6669*/              OPC_EmitInteger, MVT::i32, 1, 
/*6672*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*6675*/              OPC_EmitInteger, MVT::i32, 0, 
/*6678*/              OPC_EmitInteger, MVT::i32, 0, 
/*6681*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 2, 27, 28, 29, 0, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:i32 (and:i32 i32:i32:$y, (or:i32 i32:i32:$x, i32:i32:$z)), (and:i32 i32:i32:$z, i32:i32:$x)) - Complexity = 12
                      // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*6706*/            /*Scope*/ 118, /*->6825*/
/*6707*/              OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 2, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*6734*/              OPC_EmitInteger, MVT::i32, 0, 
/*6737*/              OPC_EmitInteger, MVT::i32, 0, 
/*6740*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6752*/              OPC_EmitInteger, MVT::i32, 0, 
/*6755*/              OPC_EmitInteger, MVT::i32, 0, 
/*6758*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6770*/              OPC_EmitInteger, MVT::i32, 0, 
/*6773*/              OPC_EmitInteger, MVT::i32, 0, 
/*6776*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6788*/              OPC_EmitInteger, MVT::i32, 1, 
/*6791*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*6794*/              OPC_EmitInteger, MVT::i32, 0, 
/*6797*/              OPC_EmitInteger, MVT::i32, 0, 
/*6800*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 0, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:i32 (and:i32 i32:i32:$y, (or:i32 i32:i32:$z, i32:i32:$x)), (and:i32 i32:i32:$x, i32:i32:$z)) - Complexity = 12
                      // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*6825*/            0, /*End of Scope*/
/*6826*/          /*Scope*/ 81|128,1/*209*/, /*->7037*/
/*6828*/            OPC_CheckSame, 1,
/*6830*/            OPC_MoveParent,
/*6831*/            OPC_MoveChild, 1,
/*6833*/            OPC_CheckSame, 2,
/*6835*/            OPC_MoveParent,
/*6836*/            OPC_MoveParent,
/*6837*/            OPC_CheckType, MVT::i32,
/*6839*/            OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*6841*/            OPC_EmitInteger, MVT::i32, 0, 
/*6844*/            OPC_EmitInteger, MVT::i32, 0, 
/*6847*/            OPC_EmitInteger, MVT::i32, 0, 
/*6850*/            OPC_EmitInteger, MVT::i32, 0, 
/*6853*/            OPC_EmitInteger, MVT::i32, 1, 
/*6856*/            OPC_EmitInteger, MVT::i32, 0, 
/*6859*/            OPC_EmitInteger, MVT::i32, 0, 
/*6862*/            OPC_EmitInteger, MVT::i32, 0, 
/*6865*/            OPC_EmitInteger, MVT::i32, 0, 
/*6868*/            OPC_EmitInteger, MVT::i32, 0, 
/*6871*/            OPC_EmitInteger, MVT::i32, 0, 
/*6874*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6886*/            OPC_EmitInteger, MVT::i32, 0, 
/*6889*/            OPC_EmitInteger, MVT::i32, 0, 
/*6892*/            OPC_EmitInteger, MVT::i32, 0, 
/*6895*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6907*/            OPC_EmitInteger, MVT::i32, 1, 
/*6910*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*6913*/            OPC_EmitInteger, MVT::i32, 0, 
/*6916*/            OPC_EmitInteger, MVT::i32, 0, 
/*6919*/            OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                        1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 2, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*6946*/            OPC_EmitInteger, MVT::i32, 0, 
/*6949*/            OPC_EmitInteger, MVT::i32, 0, 
/*6952*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6964*/            OPC_EmitInteger, MVT::i32, 0, 
/*6967*/            OPC_EmitInteger, MVT::i32, 0, 
/*6970*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6982*/            OPC_EmitInteger, MVT::i32, 0, 
/*6985*/            OPC_EmitInteger, MVT::i32, 0, 
/*6988*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7000*/            OPC_EmitInteger, MVT::i32, 1, 
/*7003*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*7006*/            OPC_EmitInteger, MVT::i32, 0, 
/*7009*/            OPC_EmitInteger, MVT::i32, 0, 
/*7012*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 0, 30, 31, 32, 33, 34, 35, 36, 
                    // Src: (or:i32 (and:i32 i32:i32:$y, (or:i32 i32:i32:$z, i32:i32:$x)), (and:i32 i32:i32:$z, i32:i32:$x)) - Complexity = 12
                    // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*7037*/          0, /*End of Scope*/
/*7038*/        0, /*End of Scope*/
/*7039*/      /*Scope*/ 6|128,6/*774*/, /*->7815*/
/*7041*/        OPC_MoveChild, 0,
/*7043*/        OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*7046*/        OPC_RecordChild0, // #0 = $x
/*7047*/        OPC_RecordChild1, // #1 = $z
/*7048*/        OPC_MoveParent,
/*7049*/        OPC_RecordChild1, // #2 = $y
/*7050*/        OPC_MoveParent,
/*7051*/        OPC_MoveChild, 1,
/*7053*/        OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*7056*/        OPC_MoveChild, 0,
/*7058*/        OPC_Scope, 81|128,1/*209*/, /*->7270*/ // 3 children in Scope
/*7061*/          OPC_CheckSame, 0,
/*7063*/          OPC_MoveParent,
/*7064*/          OPC_MoveChild, 1,
/*7066*/          OPC_CheckSame, 1,
/*7068*/          OPC_MoveParent,
/*7069*/          OPC_MoveParent,
/*7070*/          OPC_CheckType, MVT::i32,
/*7072*/          OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*7074*/          OPC_EmitInteger, MVT::i32, 0, 
/*7077*/          OPC_EmitInteger, MVT::i32, 0, 
/*7080*/          OPC_EmitInteger, MVT::i32, 0, 
/*7083*/          OPC_EmitInteger, MVT::i32, 0, 
/*7086*/          OPC_EmitInteger, MVT::i32, 1, 
/*7089*/          OPC_EmitInteger, MVT::i32, 0, 
/*7092*/          OPC_EmitInteger, MVT::i32, 0, 
/*7095*/          OPC_EmitInteger, MVT::i32, 0, 
/*7098*/          OPC_EmitInteger, MVT::i32, 0, 
/*7101*/          OPC_EmitInteger, MVT::i32, 0, 
/*7104*/          OPC_EmitInteger, MVT::i32, 0, 
/*7107*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7119*/          OPC_EmitInteger, MVT::i32, 0, 
/*7122*/          OPC_EmitInteger, MVT::i32, 0, 
/*7125*/          OPC_EmitInteger, MVT::i32, 0, 
/*7128*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7140*/          OPC_EmitInteger, MVT::i32, 1, 
/*7143*/          OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*7146*/          OPC_EmitInteger, MVT::i32, 0, 
/*7149*/          OPC_EmitInteger, MVT::i32, 0, 
/*7152*/          OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*7179*/          OPC_EmitInteger, MVT::i32, 0, 
/*7182*/          OPC_EmitInteger, MVT::i32, 0, 
/*7185*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7197*/          OPC_EmitInteger, MVT::i32, 0, 
/*7200*/          OPC_EmitInteger, MVT::i32, 0, 
/*7203*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7215*/          OPC_EmitInteger, MVT::i32, 0, 
/*7218*/          OPC_EmitInteger, MVT::i32, 0, 
/*7221*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7233*/          OPC_EmitInteger, MVT::i32, 1, 
/*7236*/          OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*7239*/          OPC_EmitInteger, MVT::i32, 0, 
/*7242*/          OPC_EmitInteger, MVT::i32, 0, 
/*7245*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                  // Src: (or:i32 (and:i32 (or:i32 i32:i32:$x, i32:i32:$z), i32:i32:$y), (and:i32 i32:i32:$x, i32:i32:$z)) - Complexity = 12
                  // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*7270*/        /*Scope*/ 75|128,2/*331*/, /*->7603*/
/*7272*/          OPC_CheckSame, 1,
/*7274*/          OPC_MoveParent,
/*7275*/          OPC_MoveChild, 1,
/*7277*/          OPC_CheckSame, 0,
/*7279*/          OPC_MoveParent,
/*7280*/          OPC_MoveParent,
/*7281*/          OPC_CheckType, MVT::i32,
/*7283*/          OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*7285*/          OPC_EmitInteger, MVT::i32, 0, 
/*7288*/          OPC_EmitInteger, MVT::i32, 0, 
/*7291*/          OPC_EmitInteger, MVT::i32, 0, 
/*7294*/          OPC_EmitInteger, MVT::i32, 0, 
/*7297*/          OPC_EmitInteger, MVT::i32, 1, 
/*7300*/          OPC_EmitInteger, MVT::i32, 0, 
/*7303*/          OPC_EmitInteger, MVT::i32, 0, 
/*7306*/          OPC_EmitInteger, MVT::i32, 0, 
/*7309*/          OPC_EmitInteger, MVT::i32, 0, 
/*7312*/          OPC_EmitInteger, MVT::i32, 0, 
/*7315*/          OPC_EmitInteger, MVT::i32, 0, 
/*7318*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7330*/          OPC_EmitInteger, MVT::i32, 0, 
/*7333*/          OPC_EmitInteger, MVT::i32, 0, 
/*7336*/          OPC_EmitInteger, MVT::i32, 0, 
/*7339*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7351*/          OPC_EmitInteger, MVT::i32, 1, 
/*7354*/          OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*7357*/          OPC_EmitInteger, MVT::i32, 0, 
/*7360*/          OPC_EmitInteger, MVT::i32, 0, 
/*7363*/          OPC_Scope, 118, /*->7483*/ // 2 children in Scope
/*7365*/            OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                        1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*7392*/            OPC_EmitInteger, MVT::i32, 0, 
/*7395*/            OPC_EmitInteger, MVT::i32, 0, 
/*7398*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7410*/            OPC_EmitInteger, MVT::i32, 0, 
/*7413*/            OPC_EmitInteger, MVT::i32, 0, 
/*7416*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7428*/            OPC_EmitInteger, MVT::i32, 0, 
/*7431*/            OPC_EmitInteger, MVT::i32, 0, 
/*7434*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7446*/            OPC_EmitInteger, MVT::i32, 1, 
/*7449*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*7452*/            OPC_EmitInteger, MVT::i32, 0, 
/*7455*/            OPC_EmitInteger, MVT::i32, 0, 
/*7458*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                    // Src: (or:i32 (and:i32 (or:i32 i32:i32:$x, i32:i32:$z), i32:i32:$y), (and:i32 i32:i32:$z, i32:i32:$x)) - Complexity = 12
                    // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*7483*/          /*Scope*/ 118, /*->7602*/
/*7484*/            OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                        1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*7511*/            OPC_EmitInteger, MVT::i32, 0, 
/*7514*/            OPC_EmitInteger, MVT::i32, 0, 
/*7517*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7529*/            OPC_EmitInteger, MVT::i32, 0, 
/*7532*/            OPC_EmitInteger, MVT::i32, 0, 
/*7535*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7547*/            OPC_EmitInteger, MVT::i32, 0, 
/*7550*/            OPC_EmitInteger, MVT::i32, 0, 
/*7553*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7565*/            OPC_EmitInteger, MVT::i32, 1, 
/*7568*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*7571*/            OPC_EmitInteger, MVT::i32, 0, 
/*7574*/            OPC_EmitInteger, MVT::i32, 0, 
/*7577*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                    // Src: (or:i32 (and:i32 (or:i32 i32:i32:$z, i32:i32:$x), i32:i32:$y), (and:i32 i32:i32:$x, i32:i32:$z)) - Complexity = 12
                    // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*7602*/          0, /*End of Scope*/
/*7603*/        /*Scope*/ 81|128,1/*209*/, /*->7814*/
/*7605*/          OPC_CheckSame, 0,
/*7607*/          OPC_MoveParent,
/*7608*/          OPC_MoveChild, 1,
/*7610*/          OPC_CheckSame, 1,
/*7612*/          OPC_MoveParent,
/*7613*/          OPC_MoveParent,
/*7614*/          OPC_CheckType, MVT::i32,
/*7616*/          OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*7618*/          OPC_EmitInteger, MVT::i32, 0, 
/*7621*/          OPC_EmitInteger, MVT::i32, 0, 
/*7624*/          OPC_EmitInteger, MVT::i32, 0, 
/*7627*/          OPC_EmitInteger, MVT::i32, 0, 
/*7630*/          OPC_EmitInteger, MVT::i32, 1, 
/*7633*/          OPC_EmitInteger, MVT::i32, 0, 
/*7636*/          OPC_EmitInteger, MVT::i32, 0, 
/*7639*/          OPC_EmitInteger, MVT::i32, 0, 
/*7642*/          OPC_EmitInteger, MVT::i32, 0, 
/*7645*/          OPC_EmitInteger, MVT::i32, 0, 
/*7648*/          OPC_EmitInteger, MVT::i32, 0, 
/*7651*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7663*/          OPC_EmitInteger, MVT::i32, 0, 
/*7666*/          OPC_EmitInteger, MVT::i32, 0, 
/*7669*/          OPC_EmitInteger, MVT::i32, 0, 
/*7672*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7684*/          OPC_EmitInteger, MVT::i32, 1, 
/*7687*/          OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*7690*/          OPC_EmitInteger, MVT::i32, 0, 
/*7693*/          OPC_EmitInteger, MVT::i32, 0, 
/*7696*/          OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*7723*/          OPC_EmitInteger, MVT::i32, 0, 
/*7726*/          OPC_EmitInteger, MVT::i32, 0, 
/*7729*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7741*/          OPC_EmitInteger, MVT::i32, 0, 
/*7744*/          OPC_EmitInteger, MVT::i32, 0, 
/*7747*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7759*/          OPC_EmitInteger, MVT::i32, 0, 
/*7762*/          OPC_EmitInteger, MVT::i32, 0, 
/*7765*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7777*/          OPC_EmitInteger, MVT::i32, 1, 
/*7780*/          OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*7783*/          OPC_EmitInteger, MVT::i32, 0, 
/*7786*/          OPC_EmitInteger, MVT::i32, 0, 
/*7789*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                  // Src: (or:i32 (and:i32 (or:i32 i32:i32:$z, i32:i32:$x), i32:i32:$y), (and:i32 i32:i32:$z, i32:i32:$x)) - Complexity = 12
                  // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*7814*/        0, /*End of Scope*/
/*7815*/      0, /*End of Scope*/
/*7816*/    /*Scope*/ 7|128,1/*135*/, /*->7953*/
/*7818*/      OPC_RecordChild0, // #0 = $src0
/*7819*/      OPC_RecordChild1, // #1 = $src1
/*7820*/      OPC_SwitchType /*2 cases */, 116,  MVT::i32,// ->7939
/*7823*/        OPC_Scope, 101, /*->7926*/ // 2 children in Scope
/*7825*/          OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*7827*/          OPC_EmitInteger, MVT::i32, 0, 
/*7830*/          OPC_EmitInteger, MVT::i32, 0, 
/*7833*/          OPC_EmitInteger, MVT::i32, 1, 
/*7836*/          OPC_EmitInteger, MVT::i32, 0, 
/*7839*/          OPC_EmitInteger, MVT::i32, 0, 
/*7842*/          OPC_EmitInteger, MVT::i32, 0, 
/*7845*/          OPC_EmitInteger, MVT::i32, 0, 
/*7848*/          OPC_EmitInteger, MVT::i32, 0, 
/*7851*/          OPC_EmitInteger, MVT::i32, 0, 
/*7854*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7866*/          OPC_EmitInteger, MVT::i32, 0, 
/*7869*/          OPC_EmitInteger, MVT::i32, 0, 
/*7872*/          OPC_EmitInteger, MVT::i32, 0, 
/*7875*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7887*/          OPC_EmitInteger, MVT::i32, 1, 
/*7890*/          OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*7893*/          OPC_EmitInteger, MVT::i32, 0, 
/*7896*/          OPC_EmitInteger, MVT::i32, 0, 
/*7899*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::OR_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (or:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
                  // Dst: (OR_INT:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*7926*/        /*Scope*/ 11, /*->7938*/
/*7927*/          OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*7929*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_OR_B32_e32), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (or:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
                  // Dst: (V_OR_B32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*7938*/        0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i1,// ->7952
/*7941*/        OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*7943*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_OR_B64), 0,
                    1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
                // Src: (or:i1 i1:i1:$src0, i1:i1:$src1) - Complexity = 3
                // Dst: (S_OR_B64:i1 ?:i1:$src0, ?:i1:$src1)
              0, // EndSwitchType
/*7953*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 85|128,4/*597*/,  TARGET_VAL(ISD::MUL),// ->8555
/*7958*/    OPC_RecordChild0, // #0 = $src0
/*7959*/    OPC_RecordChild1, // #1 = $src1
/*7960*/    OPC_CheckType, MVT::i32,
/*7962*/    OPC_Scope, 107, /*->8071*/ // 7 children in Scope
/*7964*/      OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*7966*/      OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectU24:$src0 #2
/*7969*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectU24:$src1 #3
/*7972*/      OPC_EmitInteger, MVT::i32, 0, 
/*7975*/      OPC_EmitInteger, MVT::i32, 0, 
/*7978*/      OPC_EmitInteger, MVT::i32, 1, 
/*7981*/      OPC_EmitInteger, MVT::i32, 0, 
/*7984*/      OPC_EmitInteger, MVT::i32, 0, 
/*7987*/      OPC_EmitInteger, MVT::i32, 0, 
/*7990*/      OPC_EmitInteger, MVT::i32, 0, 
/*7993*/      OPC_EmitInteger, MVT::i32, 0, 
/*7996*/      OPC_EmitInteger, MVT::i32, 0, 
/*7999*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8011*/      OPC_EmitInteger, MVT::i32, 0, 
/*8014*/      OPC_EmitInteger, MVT::i32, 0, 
/*8017*/      OPC_EmitInteger, MVT::i32, 0, 
/*8020*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8032*/      OPC_EmitInteger, MVT::i32, 1, 
/*8035*/      OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*8038*/      OPC_EmitInteger, MVT::i32, 0, 
/*8041*/      OPC_EmitInteger, MVT::i32, 0, 
/*8044*/      OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL_UINT24_eg), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 4, 5, 6, 7, 8, 9, 2, 10, 11, 12, 13, 3, 14, 15, 16, 17, 18, 19, 20, 21, 
              // Src: (mul:i32 U24:i32:$src0, U24:i32:$src1) - Complexity = 15
              // Dst: (MUL_UINT24_eg:i32 U24:i32:$src0, U24:i32:$src1)
/*8071*/    /*Scope*/ 107, /*->8179*/
/*8072*/      OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*8074*/      OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectI24:$src0 #2
/*8077*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectI24:$src1 #3
/*8080*/      OPC_EmitInteger, MVT::i32, 0, 
/*8083*/      OPC_EmitInteger, MVT::i32, 0, 
/*8086*/      OPC_EmitInteger, MVT::i32, 1, 
/*8089*/      OPC_EmitInteger, MVT::i32, 0, 
/*8092*/      OPC_EmitInteger, MVT::i32, 0, 
/*8095*/      OPC_EmitInteger, MVT::i32, 0, 
/*8098*/      OPC_EmitInteger, MVT::i32, 0, 
/*8101*/      OPC_EmitInteger, MVT::i32, 0, 
/*8104*/      OPC_EmitInteger, MVT::i32, 0, 
/*8107*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8119*/      OPC_EmitInteger, MVT::i32, 0, 
/*8122*/      OPC_EmitInteger, MVT::i32, 0, 
/*8125*/      OPC_EmitInteger, MVT::i32, 0, 
/*8128*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8140*/      OPC_EmitInteger, MVT::i32, 1, 
/*8143*/      OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*8146*/      OPC_EmitInteger, MVT::i32, 0, 
/*8149*/      OPC_EmitInteger, MVT::i32, 0, 
/*8152*/      OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL_INT24_cm), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 4, 5, 6, 7, 8, 9, 2, 10, 11, 12, 13, 3, 14, 15, 16, 17, 18, 19, 20, 21, 
              // Src: (mul:i32 I24:i32:$src0, I24:i32:$src1) - Complexity = 15
              // Dst: (MUL_INT24_cm:i32 I24:i32:$src0, I24:i32:$src1)
/*8179*/    /*Scope*/ 36, /*->8216*/
/*8180*/      OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*8182*/      OPC_Scope, 15, /*->8199*/ // 2 children in Scope
/*8184*/        OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectI24:$src0 #2
/*8187*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectI24:$src1 #3
/*8190*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_I32_I24_e32), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (mul:i32 I24:i32:$src0, I24:i32:$src1) - Complexity = 15
                // Dst: (V_MUL_I32_I24_e32:i32 I24:i32:$src0, I24:i32:$src1)
/*8199*/      /*Scope*/ 15, /*->8215*/
/*8200*/        OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectU24:$src0 #2
/*8203*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectU24:$src1 #3
/*8206*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_U32_U24_e32), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (mul:i32 U24:i32:$src0, U24:i32:$src1) - Complexity = 15
                // Dst: (V_MUL_U32_U24_e32:i32 U24:i32:$src0, U24:i32:$src1)
/*8215*/      0, /*End of Scope*/
/*8216*/    /*Scope*/ 101, /*->8318*/
/*8217*/      OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*8219*/      OPC_EmitInteger, MVT::i32, 0, 
/*8222*/      OPC_EmitInteger, MVT::i32, 0, 
/*8225*/      OPC_EmitInteger, MVT::i32, 1, 
/*8228*/      OPC_EmitInteger, MVT::i32, 0, 
/*8231*/      OPC_EmitInteger, MVT::i32, 0, 
/*8234*/      OPC_EmitInteger, MVT::i32, 0, 
/*8237*/      OPC_EmitInteger, MVT::i32, 0, 
/*8240*/      OPC_EmitInteger, MVT::i32, 0, 
/*8243*/      OPC_EmitInteger, MVT::i32, 0, 
/*8246*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8258*/      OPC_EmitInteger, MVT::i32, 0, 
/*8261*/      OPC_EmitInteger, MVT::i32, 0, 
/*8264*/      OPC_EmitInteger, MVT::i32, 0, 
/*8267*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8279*/      OPC_EmitInteger, MVT::i32, 1, 
/*8282*/      OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*8285*/      OPC_EmitInteger, MVT::i32, 0, 
/*8288*/      OPC_EmitInteger, MVT::i32, 0, 
/*8291*/      OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULLO_INT_r600), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (mul:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MULLO_INT_r600:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*8318*/    /*Scope*/ 101, /*->8420*/
/*8319*/      OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*8321*/      OPC_EmitInteger, MVT::i32, 0, 
/*8324*/      OPC_EmitInteger, MVT::i32, 0, 
/*8327*/      OPC_EmitInteger, MVT::i32, 1, 
/*8330*/      OPC_EmitInteger, MVT::i32, 0, 
/*8333*/      OPC_EmitInteger, MVT::i32, 0, 
/*8336*/      OPC_EmitInteger, MVT::i32, 0, 
/*8339*/      OPC_EmitInteger, MVT::i32, 0, 
/*8342*/      OPC_EmitInteger, MVT::i32, 0, 
/*8345*/      OPC_EmitInteger, MVT::i32, 0, 
/*8348*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8360*/      OPC_EmitInteger, MVT::i32, 0, 
/*8363*/      OPC_EmitInteger, MVT::i32, 0, 
/*8366*/      OPC_EmitInteger, MVT::i32, 0, 
/*8369*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8381*/      OPC_EmitInteger, MVT::i32, 1, 
/*8384*/      OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*8387*/      OPC_EmitInteger, MVT::i32, 0, 
/*8390*/      OPC_EmitInteger, MVT::i32, 0, 
/*8393*/      OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULLO_INT_eg), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (mul:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MULLO_INT_eg:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*8420*/    /*Scope*/ 101, /*->8522*/
/*8421*/      OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*8423*/      OPC_EmitInteger, MVT::i32, 0, 
/*8426*/      OPC_EmitInteger, MVT::i32, 0, 
/*8429*/      OPC_EmitInteger, MVT::i32, 1, 
/*8432*/      OPC_EmitInteger, MVT::i32, 0, 
/*8435*/      OPC_EmitInteger, MVT::i32, 0, 
/*8438*/      OPC_EmitInteger, MVT::i32, 0, 
/*8441*/      OPC_EmitInteger, MVT::i32, 0, 
/*8444*/      OPC_EmitInteger, MVT::i32, 0, 
/*8447*/      OPC_EmitInteger, MVT::i32, 0, 
/*8450*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8462*/      OPC_EmitInteger, MVT::i32, 0, 
/*8465*/      OPC_EmitInteger, MVT::i32, 0, 
/*8468*/      OPC_EmitInteger, MVT::i32, 0, 
/*8471*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8483*/      OPC_EmitInteger, MVT::i32, 1, 
/*8486*/      OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*8489*/      OPC_EmitInteger, MVT::i32, 0, 
/*8492*/      OPC_EmitInteger, MVT::i32, 0, 
/*8495*/      OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULLO_INT_cm), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (mul:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MULLO_INT_cm:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*8522*/    /*Scope*/ 31, /*->8554*/
/*8523*/      OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*8525*/      OPC_EmitInteger, MVT::i32, 0, 
/*8528*/      OPC_EmitInteger, MVT::i32, 0, 
/*8531*/      OPC_EmitInteger, MVT::i32, 0, 
/*8534*/      OPC_EmitInteger, MVT::i32, 0, 
/*8537*/      OPC_EmitInteger, MVT::i32, 0, 
/*8540*/      OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_LO_I32), 0,
                  1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
              // Src: (mul:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_MUL_LO_I32:i32 ?:i32:$src0, ?:i32:$src1, 0:i32)
/*8554*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 29,  TARGET_VAL(AMDGPUISD::REGISTER_LOAD),// ->8587
/*8558*/    OPC_RecordNode,   // #0 = 'AMDGPUregister_load' chained node
/*8559*/    OPC_RecordChild1, // #1 = $addr
/*8560*/    OPC_RecordChild2, // #2 = $chan
/*8561*/    OPC_MoveChild, 2,
/*8563*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*8566*/    OPC_CheckType, MVT::i32,
/*8568*/    OPC_MoveParent,
/*8569*/    OPC_CheckType, MVT::i32,
/*8571*/    OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*8573*/    OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRIndirect:$addr #3 #4
/*8576*/    OPC_EmitMergeInputChains1_0,
/*8577*/    OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_RegisterLoad), 0|OPFL_Chain,
                1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
            // Src: (AMDGPUregister_load:i32 ADDRIndirect:iPTR:$addr, (timm:i32):$chan) - Complexity = 15
            // Dst: (R600_RegisterLoad:i32 ADDRIndirect:iPTR:$addr, (timm:i32):$chan)
          /*SwitchOpcode*/ 30,  TARGET_VAL(AMDGPUISD::REGISTER_STORE),// ->8620
/*8590*/    OPC_RecordNode,   // #0 = 'AMDGPUregister_store' chained node
/*8591*/    OPC_RecordChild1, // #1 = $val
/*8592*/    OPC_CheckChild1Type, MVT::i32,
/*8594*/    OPC_RecordChild2, // #2 = $addr
/*8595*/    OPC_RecordChild3, // #3 = $chan
/*8596*/    OPC_MoveChild, 3,
/*8598*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*8601*/    OPC_CheckType, MVT::i32,
/*8603*/    OPC_MoveParent,
/*8604*/    OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*8606*/    OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRIndirect:$addr #4 #5
/*8609*/    OPC_EmitMergeInputChains1_0,
/*8610*/    OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_RegisterStore), 0|OPFL_Chain,
                0/*#VTs*/, 4/*#Ops*/, 1, 4, 5, 3, 
            // Src: (AMDGPUregister_store i32:i32:$val, ADDRIndirect:iPTR:$addr, (timm:i32):$chan) - Complexity = 15
            // Dst: (R600_RegisterStore i32:i32:$val, ADDRIndirect:iPTR:$addr, (timm:i32):$chan)
          /*SwitchOpcode*/ 26|128,2/*282*/,  TARGET_VAL(ISD::AND),// ->8906
/*8624*/    OPC_Scope, 0|128,1/*128*/, /*->8755*/ // 2 children in Scope
/*8627*/      OPC_MoveChild, 0,
/*8629*/      OPC_CheckOpcode, TARGET_VAL(ISD::SRL),
/*8632*/      OPC_RecordChild0, // #0 = $x
/*8633*/      OPC_RecordChild1, // #1 = $y
/*8634*/      OPC_MoveChild, 1,
/*8636*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8639*/      OPC_CheckPredicate, 0, // Predicate_legalshift32
/*8641*/      OPC_CheckType, MVT::i32,
/*8643*/      OPC_MoveParent,
/*8644*/      OPC_MoveParent,
/*8645*/      OPC_RecordChild1, // #2 = $z
/*8646*/      OPC_MoveChild, 1,
/*8648*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8651*/      OPC_CheckPredicate, 1, // Predicate_bfemask
/*8653*/      OPC_MoveParent,
/*8654*/      OPC_CheckType, MVT::i32,
/*8656*/      OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*8658*/      OPC_EmitInteger, MVT::i32, 0, 
/*8661*/      OPC_EmitInteger, MVT::i32, 0, 
/*8664*/      OPC_EmitInteger, MVT::i32, 0, 
/*8667*/      OPC_EmitInteger, MVT::i32, 0, 
/*8670*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8682*/      OPC_EmitInteger, MVT::i32, 0, 
/*8685*/      OPC_EmitInteger, MVT::i32, 0, 
/*8688*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8700*/      OPC_EmitInteger, MVT::i32, 0, 
/*8703*/      OPC_EmitInteger, MVT::i32, 0, 
/*8706*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8718*/      OPC_EmitInteger, MVT::i32, 1, 
/*8721*/      OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*8724*/      OPC_EmitInteger, MVT::i32, 0, 
/*8727*/      OPC_EmitInteger, MVT::i32, 0, 
/*8730*/      OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFE_UINT_eg), 0,
                  1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
              // Src: (and:i32 (srl:i32 i32:i32:$x, (imm:i32)<<P:Predicate_legalshift32>>:$y), (imm:i32)<<P:Predicate_bfemask>><<X:anonymous.val.351>>:$z) - Complexity = 14
              // Dst: (BFE_UINT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*8755*/    /*Scope*/ 20|128,1/*148*/, /*->8905*/
/*8757*/      OPC_RecordChild0, // #0 = $src0
/*8758*/      OPC_RecordChild1, // #1 = $src1
/*8759*/      OPC_SwitchType /*3 cases */, 116,  MVT::i32,// ->8878
/*8762*/        OPC_Scope, 101, /*->8865*/ // 2 children in Scope
/*8764*/          OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*8766*/          OPC_EmitInteger, MVT::i32, 0, 
/*8769*/          OPC_EmitInteger, MVT::i32, 0, 
/*8772*/          OPC_EmitInteger, MVT::i32, 1, 
/*8775*/          OPC_EmitInteger, MVT::i32, 0, 
/*8778*/          OPC_EmitInteger, MVT::i32, 0, 
/*8781*/          OPC_EmitInteger, MVT::i32, 0, 
/*8784*/          OPC_EmitInteger, MVT::i32, 0, 
/*8787*/          OPC_EmitInteger, MVT::i32, 0, 
/*8790*/          OPC_EmitInteger, MVT::i32, 0, 
/*8793*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8805*/          OPC_EmitInteger, MVT::i32, 0, 
/*8808*/          OPC_EmitInteger, MVT::i32, 0, 
/*8811*/          OPC_EmitInteger, MVT::i32, 0, 
/*8814*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8826*/          OPC_EmitInteger, MVT::i32, 1, 
/*8829*/          OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*8832*/          OPC_EmitInteger, MVT::i32, 0, 
/*8835*/          OPC_EmitInteger, MVT::i32, 0, 
/*8838*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::AND_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (and:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
                  // Dst: (AND_INT:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*8865*/        /*Scope*/ 11, /*->8877*/
/*8866*/          OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*8868*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_AND_B32_e32), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
                  // Dst: (V_AND_B32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*8877*/        0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->8891
/*8880*/        OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*8882*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_AND_B64), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 i64:i64:$src0, i64:i64:$src1) - Complexity = 3
                // Dst: (S_AND_B64:i64 i64:i64:$src0, i64:i64:$src1)
              /*SwitchType*/ 11,  MVT::i1,// ->8904
/*8893*/        OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*8895*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_AND_B64), 0,
                    1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
                // Src: (and:i1 i1:i1:$src0, i1:i1:$src1) - Complexity = 3
                // Dst: (S_AND_B64:i1 ?:i1:$src0, ?:i1:$src1)
              0, // EndSwitchType
/*8905*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 90|128,33/*4314*/,  TARGET_VAL(ISD::SELECT_CC),// ->13224
/*8910*/    OPC_RecordChild0, // #0 = $src0
/*8911*/    OPC_Scope, 125|128,18/*2429*/, /*->11343*/ // 2 children in Scope
/*8914*/      OPC_CheckChild0Type, MVT::f32,
/*8916*/      OPC_Scope, 110|128,13/*1774*/, /*->10693*/ // 2 children in Scope
/*8919*/        OPC_RecordChild1, // #1 = $src1
/*8920*/        OPC_MoveChild, 2,
/*8922*/        OPC_Scope, 116|128,6/*884*/, /*->9809*/ // 2 children in Scope
/*8925*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8936*/          OPC_MoveParent,
/*8937*/          OPC_MoveChild, 3,
/*8939*/          OPC_CheckInteger, 0, 
/*8941*/          OPC_MoveParent,
/*8942*/          OPC_MoveChild, 4,
/*8944*/          OPC_Scope, 7|128,5/*647*/, /*->9594*/ // 3 children in Scope
/*8947*/            OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/*8950*/            OPC_Scope, 106, /*->9058*/ // 6 children in Scope
/*8952*/              OPC_CheckPredicate, 2, // Predicate_COND_EQ
/*8954*/              OPC_MoveParent,
/*8955*/              OPC_CheckType, MVT::i32,
/*8957*/              OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*8959*/              OPC_EmitInteger, MVT::i32, 0, 
/*8962*/              OPC_EmitInteger, MVT::i32, 0, 
/*8965*/              OPC_EmitInteger, MVT::i32, 1, 
/*8968*/              OPC_EmitInteger, MVT::i32, 0, 
/*8971*/              OPC_EmitInteger, MVT::i32, 0, 
/*8974*/              OPC_EmitInteger, MVT::i32, 0, 
/*8977*/              OPC_EmitInteger, MVT::i32, 0, 
/*8980*/              OPC_EmitInteger, MVT::i32, 0, 
/*8983*/              OPC_EmitInteger, MVT::i32, 0, 
/*8986*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8998*/              OPC_EmitInteger, MVT::i32, 0, 
/*9001*/              OPC_EmitInteger, MVT::i32, 0, 
/*9004*/              OPC_EmitInteger, MVT::i32, 0, 
/*9007*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9019*/              OPC_EmitInteger, MVT::i32, 1, 
/*9022*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*9025*/              OPC_EmitInteger, MVT::i32, 0, 
/*9028*/              OPC_EmitInteger, MVT::i32, 0, 
/*9031*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETE_DX10), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:i32 f32:f32:$src0, f32:f32:$src1, -1:i32, 0:i32, (cond:Other)<<P:Predicate_COND_EQ>>) - Complexity = 13
                      // Dst: (SETE_DX10:i32 f32:f32:$src0, f32:f32:$src1)
/*9058*/            /*Scope*/ 106, /*->9165*/
/*9059*/              OPC_CheckPredicate, 3, // Predicate_COND_GT
/*9061*/              OPC_MoveParent,
/*9062*/              OPC_CheckType, MVT::i32,
/*9064*/              OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*9066*/              OPC_EmitInteger, MVT::i32, 0, 
/*9069*/              OPC_EmitInteger, MVT::i32, 0, 
/*9072*/              OPC_EmitInteger, MVT::i32, 1, 
/*9075*/              OPC_EmitInteger, MVT::i32, 0, 
/*9078*/              OPC_EmitInteger, MVT::i32, 0, 
/*9081*/              OPC_EmitInteger, MVT::i32, 0, 
/*9084*/              OPC_EmitInteger, MVT::i32, 0, 
/*9087*/              OPC_EmitInteger, MVT::i32, 0, 
/*9090*/              OPC_EmitInteger, MVT::i32, 0, 
/*9093*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9105*/              OPC_EmitInteger, MVT::i32, 0, 
/*9108*/              OPC_EmitInteger, MVT::i32, 0, 
/*9111*/              OPC_EmitInteger, MVT::i32, 0, 
/*9114*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9126*/              OPC_EmitInteger, MVT::i32, 1, 
/*9129*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*9132*/              OPC_EmitInteger, MVT::i32, 0, 
/*9135*/              OPC_EmitInteger, MVT::i32, 0, 
/*9138*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGT_DX10), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:i32 f32:f32:$src0, f32:f32:$src1, -1:i32, 0:i32, (cond:Other)<<P:Predicate_COND_GT>>) - Complexity = 13
                      // Dst: (SETGT_DX10:i32 f32:f32:$src0, f32:f32:$src1)
/*9165*/            /*Scope*/ 106, /*->9272*/
/*9166*/              OPC_CheckPredicate, 4, // Predicate_COND_GE
/*9168*/              OPC_MoveParent,
/*9169*/              OPC_CheckType, MVT::i32,
/*9171*/              OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*9173*/              OPC_EmitInteger, MVT::i32, 0, 
/*9176*/              OPC_EmitInteger, MVT::i32, 0, 
/*9179*/              OPC_EmitInteger, MVT::i32, 1, 
/*9182*/              OPC_EmitInteger, MVT::i32, 0, 
/*9185*/              OPC_EmitInteger, MVT::i32, 0, 
/*9188*/              OPC_EmitInteger, MVT::i32, 0, 
/*9191*/              OPC_EmitInteger, MVT::i32, 0, 
/*9194*/              OPC_EmitInteger, MVT::i32, 0, 
/*9197*/              OPC_EmitInteger, MVT::i32, 0, 
/*9200*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9212*/              OPC_EmitInteger, MVT::i32, 0, 
/*9215*/              OPC_EmitInteger, MVT::i32, 0, 
/*9218*/              OPC_EmitInteger, MVT::i32, 0, 
/*9221*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9233*/              OPC_EmitInteger, MVT::i32, 1, 
/*9236*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*9239*/              OPC_EmitInteger, MVT::i32, 0, 
/*9242*/              OPC_EmitInteger, MVT::i32, 0, 
/*9245*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGE_DX10), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:i32 f32:f32:$src0, f32:f32:$src1, -1:i32, 0:i32, (cond:Other)<<P:Predicate_COND_GE>>) - Complexity = 13
                      // Dst: (SETGE_DX10:i32 f32:f32:$src0, f32:f32:$src1)
/*9272*/            /*Scope*/ 106, /*->9379*/
/*9273*/              OPC_CheckPredicate, 5, // Predicate_COND_NE
/*9275*/              OPC_MoveParent,
/*9276*/              OPC_CheckType, MVT::i32,
/*9278*/              OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*9280*/              OPC_EmitInteger, MVT::i32, 0, 
/*9283*/              OPC_EmitInteger, MVT::i32, 0, 
/*9286*/              OPC_EmitInteger, MVT::i32, 1, 
/*9289*/              OPC_EmitInteger, MVT::i32, 0, 
/*9292*/              OPC_EmitInteger, MVT::i32, 0, 
/*9295*/              OPC_EmitInteger, MVT::i32, 0, 
/*9298*/              OPC_EmitInteger, MVT::i32, 0, 
/*9301*/              OPC_EmitInteger, MVT::i32, 0, 
/*9304*/              OPC_EmitInteger, MVT::i32, 0, 
/*9307*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9319*/              OPC_EmitInteger, MVT::i32, 0, 
/*9322*/              OPC_EmitInteger, MVT::i32, 0, 
/*9325*/              OPC_EmitInteger, MVT::i32, 0, 
/*9328*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9340*/              OPC_EmitInteger, MVT::i32, 1, 
/*9343*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*9346*/              OPC_EmitInteger, MVT::i32, 0, 
/*9349*/              OPC_EmitInteger, MVT::i32, 0, 
/*9352*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETNE_DX10), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:i32 f32:f32:$src0, f32:f32:$src1, -1:i32, 0:i32, (cond:Other)<<P:Predicate_COND_NE>>) - Complexity = 13
                      // Dst: (SETNE_DX10:i32 f32:f32:$src0, f32:f32:$src1)
/*9379*/            /*Scope*/ 106, /*->9486*/
/*9380*/              OPC_CheckPredicate, 6, // Predicate_COND_LT
/*9382*/              OPC_MoveParent,
/*9383*/              OPC_CheckType, MVT::i32,
/*9385*/              OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*9387*/              OPC_EmitInteger, MVT::i32, 0, 
/*9390*/              OPC_EmitInteger, MVT::i32, 0, 
/*9393*/              OPC_EmitInteger, MVT::i32, 1, 
/*9396*/              OPC_EmitInteger, MVT::i32, 0, 
/*9399*/              OPC_EmitInteger, MVT::i32, 0, 
/*9402*/              OPC_EmitInteger, MVT::i32, 0, 
/*9405*/              OPC_EmitInteger, MVT::i32, 0, 
/*9408*/              OPC_EmitInteger, MVT::i32, 0, 
/*9411*/              OPC_EmitInteger, MVT::i32, 0, 
/*9414*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9426*/              OPC_EmitInteger, MVT::i32, 0, 
/*9429*/              OPC_EmitInteger, MVT::i32, 0, 
/*9432*/              OPC_EmitInteger, MVT::i32, 0, 
/*9435*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9447*/              OPC_EmitInteger, MVT::i32, 1, 
/*9450*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*9453*/              OPC_EmitInteger, MVT::i32, 0, 
/*9456*/              OPC_EmitInteger, MVT::i32, 0, 
/*9459*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGT_DX10), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 1, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:i32 f32:f32:$src0, f32:f32:$src1, -1:i32, 0:i32, (cond:Other)<<P:Predicate_COND_LT>>) - Complexity = 13
                      // Dst: (SETGT_DX10:i32 ?:f32:$src1, ?:f32:$src0)
/*9486*/            /*Scope*/ 106, /*->9593*/
/*9487*/              OPC_CheckPredicate, 7, // Predicate_COND_LE
/*9489*/              OPC_MoveParent,
/*9490*/              OPC_CheckType, MVT::i32,
/*9492*/              OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*9494*/              OPC_EmitInteger, MVT::i32, 0, 
/*9497*/              OPC_EmitInteger, MVT::i32, 0, 
/*9500*/              OPC_EmitInteger, MVT::i32, 1, 
/*9503*/              OPC_EmitInteger, MVT::i32, 0, 
/*9506*/              OPC_EmitInteger, MVT::i32, 0, 
/*9509*/              OPC_EmitInteger, MVT::i32, 0, 
/*9512*/              OPC_EmitInteger, MVT::i32, 0, 
/*9515*/              OPC_EmitInteger, MVT::i32, 0, 
/*9518*/              OPC_EmitInteger, MVT::i32, 0, 
/*9521*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9533*/              OPC_EmitInteger, MVT::i32, 0, 
/*9536*/              OPC_EmitInteger, MVT::i32, 0, 
/*9539*/              OPC_EmitInteger, MVT::i32, 0, 
/*9542*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9554*/              OPC_EmitInteger, MVT::i32, 1, 
/*9557*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*9560*/              OPC_EmitInteger, MVT::i32, 0, 
/*9563*/              OPC_EmitInteger, MVT::i32, 0, 
/*9566*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGE_DX10), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 1, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:i32 f32:f32:$src0, f32:f32:$src1, -1:i32, 0:i32, (cond:Other)<<P:Predicate_COND_LE>>) - Complexity = 13
                      // Dst: (SETGE_DX10:i32 ?:f32:$src1, ?:f32:$src0)
/*9593*/            0, /*End of Scope*/
/*9594*/          /*Scope*/ 106, /*->9701*/
/*9595*/            OPC_CheckCondCode, ISD::SETO,
/*9597*/            OPC_MoveParent,
/*9598*/            OPC_CheckType, MVT::i32,
/*9600*/            OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*9602*/            OPC_EmitInteger, MVT::i32, 0, 
/*9605*/            OPC_EmitInteger, MVT::i32, 0, 
/*9608*/            OPC_EmitInteger, MVT::i32, 1, 
/*9611*/            OPC_EmitInteger, MVT::i32, 0, 
/*9614*/            OPC_EmitInteger, MVT::i32, 0, 
/*9617*/            OPC_EmitInteger, MVT::i32, 0, 
/*9620*/            OPC_EmitInteger, MVT::i32, 0, 
/*9623*/            OPC_EmitInteger, MVT::i32, 0, 
/*9626*/            OPC_EmitInteger, MVT::i32, 0, 
/*9629*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9641*/            OPC_EmitInteger, MVT::i32, 0, 
/*9644*/            OPC_EmitInteger, MVT::i32, 0, 
/*9647*/            OPC_EmitInteger, MVT::i32, 0, 
/*9650*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9662*/            OPC_EmitInteger, MVT::i32, 1, 
/*9665*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*9668*/            OPC_EmitInteger, MVT::i32, 0, 
/*9671*/            OPC_EmitInteger, MVT::i32, 0, 
/*9674*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETE_DX10), 0,
                        1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:i32 f32:f32:$src0, f32:f32:$src1, -1:i32, 0:i32, SETO:Other) - Complexity = 13
                    // Dst: (SETE_DX10:i32 ?:f32:$src0, ?:f32:$src1)
/*9701*/          /*Scope*/ 106, /*->9808*/
/*9702*/            OPC_CheckCondCode, ISD::SETUO,
/*9704*/            OPC_MoveParent,
/*9705*/            OPC_CheckType, MVT::i32,
/*9707*/            OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*9709*/            OPC_EmitInteger, MVT::i32, 0, 
/*9712*/            OPC_EmitInteger, MVT::i32, 0, 
/*9715*/            OPC_EmitInteger, MVT::i32, 1, 
/*9718*/            OPC_EmitInteger, MVT::i32, 0, 
/*9721*/            OPC_EmitInteger, MVT::i32, 0, 
/*9724*/            OPC_EmitInteger, MVT::i32, 0, 
/*9727*/            OPC_EmitInteger, MVT::i32, 0, 
/*9730*/            OPC_EmitInteger, MVT::i32, 0, 
/*9733*/            OPC_EmitInteger, MVT::i32, 0, 
/*9736*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9748*/            OPC_EmitInteger, MVT::i32, 0, 
/*9751*/            OPC_EmitInteger, MVT::i32, 0, 
/*9754*/            OPC_EmitInteger, MVT::i32, 0, 
/*9757*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9769*/            OPC_EmitInteger, MVT::i32, 1, 
/*9772*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*9775*/            OPC_EmitInteger, MVT::i32, 0, 
/*9778*/            OPC_EmitInteger, MVT::i32, 0, 
/*9781*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETNE_DX10), 0,
                        1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:i32 f32:f32:$src0, f32:f32:$src1, -1:i32, 0:i32, SETUO:Other) - Complexity = 13
                    // Dst: (SETNE_DX10:i32 ?:f32:$src0, ?:f32:$src1)
/*9808*/          0, /*End of Scope*/
/*9809*/        /*Scope*/ 113|128,6/*881*/, /*->10692*/
/*9811*/          OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*9814*/          OPC_CheckPredicate, 8, // Predicate_FP_ONE
/*9816*/          OPC_MoveParent,
/*9817*/          OPC_MoveChild, 3,
/*9819*/          OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*9822*/          OPC_CheckPredicate, 9, // Predicate_FP_ZERO
/*9824*/          OPC_MoveParent,
/*9825*/          OPC_MoveChild, 4,
/*9827*/          OPC_Scope, 7|128,5/*647*/, /*->10477*/ // 3 children in Scope
/*9830*/            OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/*9833*/            OPC_Scope, 106, /*->9941*/ // 6 children in Scope
/*9835*/              OPC_CheckPredicate, 2, // Predicate_COND_EQ
/*9837*/              OPC_MoveParent,
/*9838*/              OPC_CheckType, MVT::f32,
/*9840*/              OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*9842*/              OPC_EmitInteger, MVT::i32, 0, 
/*9845*/              OPC_EmitInteger, MVT::i32, 0, 
/*9848*/              OPC_EmitInteger, MVT::i32, 1, 
/*9851*/              OPC_EmitInteger, MVT::i32, 0, 
/*9854*/              OPC_EmitInteger, MVT::i32, 0, 
/*9857*/              OPC_EmitInteger, MVT::i32, 0, 
/*9860*/              OPC_EmitInteger, MVT::i32, 0, 
/*9863*/              OPC_EmitInteger, MVT::i32, 0, 
/*9866*/              OPC_EmitInteger, MVT::i32, 0, 
/*9869*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9881*/              OPC_EmitInteger, MVT::i32, 0, 
/*9884*/              OPC_EmitInteger, MVT::i32, 0, 
/*9887*/              OPC_EmitInteger, MVT::i32, 0, 
/*9890*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9902*/              OPC_EmitInteger, MVT::i32, 1, 
/*9905*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*9908*/              OPC_EmitInteger, MVT::i32, 0, 
/*9911*/              OPC_EmitInteger, MVT::i32, 0, 
/*9914*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETE), 0,
                          1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:f32 f32:f32:$src0, f32:f32:$src1, (fpimm:f32)<<P:Predicate_FP_ONE>>, (fpimm:f32)<<P:Predicate_FP_ZERO>>, (cond:Other)<<P:Predicate_COND_EQ>>) - Complexity = 11
                      // Dst: (SETE:f32 f32:f32:$src0, f32:f32:$src1)
/*9941*/            /*Scope*/ 106, /*->10048*/
/*9942*/              OPC_CheckPredicate, 3, // Predicate_COND_GT
/*9944*/              OPC_MoveParent,
/*9945*/              OPC_CheckType, MVT::f32,
/*9947*/              OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*9949*/              OPC_EmitInteger, MVT::i32, 0, 
/*9952*/              OPC_EmitInteger, MVT::i32, 0, 
/*9955*/              OPC_EmitInteger, MVT::i32, 1, 
/*9958*/              OPC_EmitInteger, MVT::i32, 0, 
/*9961*/              OPC_EmitInteger, MVT::i32, 0, 
/*9964*/              OPC_EmitInteger, MVT::i32, 0, 
/*9967*/              OPC_EmitInteger, MVT::i32, 0, 
/*9970*/              OPC_EmitInteger, MVT::i32, 0, 
/*9973*/              OPC_EmitInteger, MVT::i32, 0, 
/*9976*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9988*/              OPC_EmitInteger, MVT::i32, 0, 
/*9991*/              OPC_EmitInteger, MVT::i32, 0, 
/*9994*/              OPC_EmitInteger, MVT::i32, 0, 
/*9997*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10009*/             OPC_EmitInteger, MVT::i32, 1, 
/*10012*/             OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*10015*/             OPC_EmitInteger, MVT::i32, 0, 
/*10018*/             OPC_EmitInteger, MVT::i32, 0, 
/*10021*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SGT), 0,
                          1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:f32 f32:f32:$src0, f32:f32:$src1, (fpimm:f32)<<P:Predicate_FP_ONE>>, (fpimm:f32)<<P:Predicate_FP_ZERO>>, (cond:Other)<<P:Predicate_COND_GT>>) - Complexity = 11
                      // Dst: (SGT:f32 f32:f32:$src0, f32:f32:$src1)
/*10048*/           /*Scope*/ 106, /*->10155*/
/*10049*/             OPC_CheckPredicate, 4, // Predicate_COND_GE
/*10051*/             OPC_MoveParent,
/*10052*/             OPC_CheckType, MVT::f32,
/*10054*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*10056*/             OPC_EmitInteger, MVT::i32, 0, 
/*10059*/             OPC_EmitInteger, MVT::i32, 0, 
/*10062*/             OPC_EmitInteger, MVT::i32, 1, 
/*10065*/             OPC_EmitInteger, MVT::i32, 0, 
/*10068*/             OPC_EmitInteger, MVT::i32, 0, 
/*10071*/             OPC_EmitInteger, MVT::i32, 0, 
/*10074*/             OPC_EmitInteger, MVT::i32, 0, 
/*10077*/             OPC_EmitInteger, MVT::i32, 0, 
/*10080*/             OPC_EmitInteger, MVT::i32, 0, 
/*10083*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10095*/             OPC_EmitInteger, MVT::i32, 0, 
/*10098*/             OPC_EmitInteger, MVT::i32, 0, 
/*10101*/             OPC_EmitInteger, MVT::i32, 0, 
/*10104*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10116*/             OPC_EmitInteger, MVT::i32, 1, 
/*10119*/             OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*10122*/             OPC_EmitInteger, MVT::i32, 0, 
/*10125*/             OPC_EmitInteger, MVT::i32, 0, 
/*10128*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SGE), 0,
                          1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:f32 f32:f32:$src0, f32:f32:$src1, (fpimm:f32)<<P:Predicate_FP_ONE>>, (fpimm:f32)<<P:Predicate_FP_ZERO>>, (cond:Other)<<P:Predicate_COND_GE>>) - Complexity = 11
                      // Dst: (SGE:f32 f32:f32:$src0, f32:f32:$src1)
/*10155*/           /*Scope*/ 106, /*->10262*/
/*10156*/             OPC_CheckPredicate, 5, // Predicate_COND_NE
/*10158*/             OPC_MoveParent,
/*10159*/             OPC_CheckType, MVT::f32,
/*10161*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*10163*/             OPC_EmitInteger, MVT::i32, 0, 
/*10166*/             OPC_EmitInteger, MVT::i32, 0, 
/*10169*/             OPC_EmitInteger, MVT::i32, 1, 
/*10172*/             OPC_EmitInteger, MVT::i32, 0, 
/*10175*/             OPC_EmitInteger, MVT::i32, 0, 
/*10178*/             OPC_EmitInteger, MVT::i32, 0, 
/*10181*/             OPC_EmitInteger, MVT::i32, 0, 
/*10184*/             OPC_EmitInteger, MVT::i32, 0, 
/*10187*/             OPC_EmitInteger, MVT::i32, 0, 
/*10190*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10202*/             OPC_EmitInteger, MVT::i32, 0, 
/*10205*/             OPC_EmitInteger, MVT::i32, 0, 
/*10208*/             OPC_EmitInteger, MVT::i32, 0, 
/*10211*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10223*/             OPC_EmitInteger, MVT::i32, 1, 
/*10226*/             OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*10229*/             OPC_EmitInteger, MVT::i32, 0, 
/*10232*/             OPC_EmitInteger, MVT::i32, 0, 
/*10235*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SNE), 0,
                          1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:f32 f32:f32:$src0, f32:f32:$src1, (fpimm:f32)<<P:Predicate_FP_ONE>>, (fpimm:f32)<<P:Predicate_FP_ZERO>>, (cond:Other)<<P:Predicate_COND_NE>>) - Complexity = 11
                      // Dst: (SNE:f32 f32:f32:$src0, f32:f32:$src1)
/*10262*/           /*Scope*/ 106, /*->10369*/
/*10263*/             OPC_CheckPredicate, 6, // Predicate_COND_LT
/*10265*/             OPC_MoveParent,
/*10266*/             OPC_CheckType, MVT::f32,
/*10268*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*10270*/             OPC_EmitInteger, MVT::i32, 0, 
/*10273*/             OPC_EmitInteger, MVT::i32, 0, 
/*10276*/             OPC_EmitInteger, MVT::i32, 1, 
/*10279*/             OPC_EmitInteger, MVT::i32, 0, 
/*10282*/             OPC_EmitInteger, MVT::i32, 0, 
/*10285*/             OPC_EmitInteger, MVT::i32, 0, 
/*10288*/             OPC_EmitInteger, MVT::i32, 0, 
/*10291*/             OPC_EmitInteger, MVT::i32, 0, 
/*10294*/             OPC_EmitInteger, MVT::i32, 0, 
/*10297*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10309*/             OPC_EmitInteger, MVT::i32, 0, 
/*10312*/             OPC_EmitInteger, MVT::i32, 0, 
/*10315*/             OPC_EmitInteger, MVT::i32, 0, 
/*10318*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10330*/             OPC_EmitInteger, MVT::i32, 1, 
/*10333*/             OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*10336*/             OPC_EmitInteger, MVT::i32, 0, 
/*10339*/             OPC_EmitInteger, MVT::i32, 0, 
/*10342*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SGT), 0,
                          1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 1, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:f32 f32:f32:$src0, f32:f32:$src1, (fpimm:f32)<<P:Predicate_FP_ONE>>, (fpimm:f32)<<P:Predicate_FP_ZERO>>, (cond:Other)<<P:Predicate_COND_LT>>) - Complexity = 11
                      // Dst: (SGT:f32 ?:f32:$src1, ?:f32:$src0)
/*10369*/           /*Scope*/ 106, /*->10476*/
/*10370*/             OPC_CheckPredicate, 7, // Predicate_COND_LE
/*10372*/             OPC_MoveParent,
/*10373*/             OPC_CheckType, MVT::f32,
/*10375*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*10377*/             OPC_EmitInteger, MVT::i32, 0, 
/*10380*/             OPC_EmitInteger, MVT::i32, 0, 
/*10383*/             OPC_EmitInteger, MVT::i32, 1, 
/*10386*/             OPC_EmitInteger, MVT::i32, 0, 
/*10389*/             OPC_EmitInteger, MVT::i32, 0, 
/*10392*/             OPC_EmitInteger, MVT::i32, 0, 
/*10395*/             OPC_EmitInteger, MVT::i32, 0, 
/*10398*/             OPC_EmitInteger, MVT::i32, 0, 
/*10401*/             OPC_EmitInteger, MVT::i32, 0, 
/*10404*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10416*/             OPC_EmitInteger, MVT::i32, 0, 
/*10419*/             OPC_EmitInteger, MVT::i32, 0, 
/*10422*/             OPC_EmitInteger, MVT::i32, 0, 
/*10425*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10437*/             OPC_EmitInteger, MVT::i32, 1, 
/*10440*/             OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*10443*/             OPC_EmitInteger, MVT::i32, 0, 
/*10446*/             OPC_EmitInteger, MVT::i32, 0, 
/*10449*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SGE), 0,
                          1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 1, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:f32 f32:f32:$src0, f32:f32:$src1, (fpimm:f32)<<P:Predicate_FP_ONE>>, (fpimm:f32)<<P:Predicate_FP_ZERO>>, (cond:Other)<<P:Predicate_COND_LE>>) - Complexity = 11
                      // Dst: (SGE:f32 ?:f32:$src1, ?:f32:$src0)
/*10476*/           0, /*End of Scope*/
/*10477*/         /*Scope*/ 106, /*->10584*/
/*10478*/           OPC_CheckCondCode, ISD::SETO,
/*10480*/           OPC_MoveParent,
/*10481*/           OPC_CheckType, MVT::f32,
/*10483*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*10485*/           OPC_EmitInteger, MVT::i32, 0, 
/*10488*/           OPC_EmitInteger, MVT::i32, 0, 
/*10491*/           OPC_EmitInteger, MVT::i32, 1, 
/*10494*/           OPC_EmitInteger, MVT::i32, 0, 
/*10497*/           OPC_EmitInteger, MVT::i32, 0, 
/*10500*/           OPC_EmitInteger, MVT::i32, 0, 
/*10503*/           OPC_EmitInteger, MVT::i32, 0, 
/*10506*/           OPC_EmitInteger, MVT::i32, 0, 
/*10509*/           OPC_EmitInteger, MVT::i32, 0, 
/*10512*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10524*/           OPC_EmitInteger, MVT::i32, 0, 
/*10527*/           OPC_EmitInteger, MVT::i32, 0, 
/*10530*/           OPC_EmitInteger, MVT::i32, 0, 
/*10533*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10545*/           OPC_EmitInteger, MVT::i32, 1, 
/*10548*/           OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*10551*/           OPC_EmitInteger, MVT::i32, 0, 
/*10554*/           OPC_EmitInteger, MVT::i32, 0, 
/*10557*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETE), 0,
                        1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:f32 f32:f32:$src0, f32:f32:$src1, (fpimm:f32)<<P:Predicate_FP_ONE>>, (fpimm:f32)<<P:Predicate_FP_ZERO>>, SETO:Other) - Complexity = 11
                    // Dst: (SETE:f32 ?:f32:$src0, ?:f32:$src1)
/*10584*/         /*Scope*/ 106, /*->10691*/
/*10585*/           OPC_CheckCondCode, ISD::SETUO,
/*10587*/           OPC_MoveParent,
/*10588*/           OPC_CheckType, MVT::f32,
/*10590*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*10592*/           OPC_EmitInteger, MVT::i32, 0, 
/*10595*/           OPC_EmitInteger, MVT::i32, 0, 
/*10598*/           OPC_EmitInteger, MVT::i32, 1, 
/*10601*/           OPC_EmitInteger, MVT::i32, 0, 
/*10604*/           OPC_EmitInteger, MVT::i32, 0, 
/*10607*/           OPC_EmitInteger, MVT::i32, 0, 
/*10610*/           OPC_EmitInteger, MVT::i32, 0, 
/*10613*/           OPC_EmitInteger, MVT::i32, 0, 
/*10616*/           OPC_EmitInteger, MVT::i32, 0, 
/*10619*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10631*/           OPC_EmitInteger, MVT::i32, 0, 
/*10634*/           OPC_EmitInteger, MVT::i32, 0, 
/*10637*/           OPC_EmitInteger, MVT::i32, 0, 
/*10640*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10652*/           OPC_EmitInteger, MVT::i32, 1, 
/*10655*/           OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*10658*/           OPC_EmitInteger, MVT::i32, 0, 
/*10661*/           OPC_EmitInteger, MVT::i32, 0, 
/*10664*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SNE), 0,
                        1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:f32 f32:f32:$src0, f32:f32:$src1, (fpimm:f32)<<P:Predicate_FP_ONE>>, (fpimm:f32)<<P:Predicate_FP_ZERO>>, SETUO:Other) - Complexity = 11
                    // Dst: (SNE:f32 ?:f32:$src0, ?:f32:$src1)
/*10691*/         0, /*End of Scope*/
/*10692*/       0, /*End of Scope*/
/*10693*/     /*Scope*/ 7|128,5/*647*/, /*->11342*/
/*10695*/       OPC_MoveChild, 1,
/*10697*/       OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*10700*/       OPC_CheckPredicate, 9, // Predicate_FP_ZERO
/*10702*/       OPC_MoveParent,
/*10703*/       OPC_RecordChild2, // #1 = $src1
/*10704*/       OPC_RecordChild3, // #2 = $src2
/*10705*/       OPC_MoveChild, 4,
/*10707*/       OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/*10710*/       OPC_Scope, 104, /*->10816*/ // 6 children in Scope
/*10712*/         OPC_CheckPredicate, 2, // Predicate_COND_EQ
/*10714*/         OPC_MoveParent,
/*10715*/         OPC_CheckType, MVT::f32,
/*10717*/         OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*10719*/         OPC_EmitInteger, MVT::i32, 0, 
/*10722*/         OPC_EmitInteger, MVT::i32, 0, 
/*10725*/         OPC_EmitInteger, MVT::i32, 0, 
/*10728*/         OPC_EmitInteger, MVT::i32, 0, 
/*10731*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10743*/         OPC_EmitInteger, MVT::i32, 0, 
/*10746*/         OPC_EmitInteger, MVT::i32, 0, 
/*10749*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10761*/         OPC_EmitInteger, MVT::i32, 0, 
/*10764*/         OPC_EmitInteger, MVT::i32, 0, 
/*10767*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10779*/         OPC_EmitInteger, MVT::i32, 1, 
/*10782*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*10785*/         OPC_EmitInteger, MVT::i32, 0, 
/*10788*/         OPC_EmitInteger, MVT::i32, 0, 
/*10791*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDE_r600), 0,
                      1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (selectcc:f32 f32:f32:$src0, (fpimm:f32)<<P:Predicate_FP_ZERO>>, f32:f32:$src1, f32:f32:$src2, (cond:Other)<<P:Predicate_COND_EQ>>) - Complexity = 7
                  // Dst: (CNDE_r600:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*10816*/       /*Scope*/ 104, /*->10921*/
/*10817*/         OPC_CheckPredicate, 3, // Predicate_COND_GT
/*10819*/         OPC_MoveParent,
/*10820*/         OPC_CheckType, MVT::f32,
/*10822*/         OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*10824*/         OPC_EmitInteger, MVT::i32, 0, 
/*10827*/         OPC_EmitInteger, MVT::i32, 0, 
/*10830*/         OPC_EmitInteger, MVT::i32, 0, 
/*10833*/         OPC_EmitInteger, MVT::i32, 0, 
/*10836*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10848*/         OPC_EmitInteger, MVT::i32, 0, 
/*10851*/         OPC_EmitInteger, MVT::i32, 0, 
/*10854*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10866*/         OPC_EmitInteger, MVT::i32, 0, 
/*10869*/         OPC_EmitInteger, MVT::i32, 0, 
/*10872*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10884*/         OPC_EmitInteger, MVT::i32, 1, 
/*10887*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*10890*/         OPC_EmitInteger, MVT::i32, 0, 
/*10893*/         OPC_EmitInteger, MVT::i32, 0, 
/*10896*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDGT_r600), 0,
                      1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (selectcc:f32 f32:f32:$src0, (fpimm:f32)<<P:Predicate_FP_ZERO>>, f32:f32:$src1, f32:f32:$src2, (cond:Other)<<P:Predicate_COND_GT>>) - Complexity = 7
                  // Dst: (CNDGT_r600:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*10921*/       /*Scope*/ 104, /*->11026*/
/*10922*/         OPC_CheckPredicate, 4, // Predicate_COND_GE
/*10924*/         OPC_MoveParent,
/*10925*/         OPC_CheckType, MVT::f32,
/*10927*/         OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*10929*/         OPC_EmitInteger, MVT::i32, 0, 
/*10932*/         OPC_EmitInteger, MVT::i32, 0, 
/*10935*/         OPC_EmitInteger, MVT::i32, 0, 
/*10938*/         OPC_EmitInteger, MVT::i32, 0, 
/*10941*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10953*/         OPC_EmitInteger, MVT::i32, 0, 
/*10956*/         OPC_EmitInteger, MVT::i32, 0, 
/*10959*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10971*/         OPC_EmitInteger, MVT::i32, 0, 
/*10974*/         OPC_EmitInteger, MVT::i32, 0, 
/*10977*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10989*/         OPC_EmitInteger, MVT::i32, 1, 
/*10992*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*10995*/         OPC_EmitInteger, MVT::i32, 0, 
/*10998*/         OPC_EmitInteger, MVT::i32, 0, 
/*11001*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDGE_r600), 0,
                      1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (selectcc:f32 f32:f32:$src0, (fpimm:f32)<<P:Predicate_FP_ZERO>>, f32:f32:$src1, f32:f32:$src2, (cond:Other)<<P:Predicate_COND_GE>>) - Complexity = 7
                  // Dst: (CNDGE_r600:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*11026*/       /*Scope*/ 104, /*->11131*/
/*11027*/         OPC_CheckPredicate, 2, // Predicate_COND_EQ
/*11029*/         OPC_MoveParent,
/*11030*/         OPC_CheckType, MVT::f32,
/*11032*/         OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*11034*/         OPC_EmitInteger, MVT::i32, 0, 
/*11037*/         OPC_EmitInteger, MVT::i32, 0, 
/*11040*/         OPC_EmitInteger, MVT::i32, 0, 
/*11043*/         OPC_EmitInteger, MVT::i32, 0, 
/*11046*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11058*/         OPC_EmitInteger, MVT::i32, 0, 
/*11061*/         OPC_EmitInteger, MVT::i32, 0, 
/*11064*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11076*/         OPC_EmitInteger, MVT::i32, 0, 
/*11079*/         OPC_EmitInteger, MVT::i32, 0, 
/*11082*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11094*/         OPC_EmitInteger, MVT::i32, 1, 
/*11097*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*11100*/         OPC_EmitInteger, MVT::i32, 0, 
/*11103*/         OPC_EmitInteger, MVT::i32, 0, 
/*11106*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDE_eg), 0,
                      1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (selectcc:f32 f32:f32:$src0, (fpimm:f32)<<P:Predicate_FP_ZERO>>, f32:f32:$src1, f32:f32:$src2, (cond:Other)<<P:Predicate_COND_EQ>>) - Complexity = 7
                  // Dst: (CNDE_eg:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*11131*/       /*Scope*/ 104, /*->11236*/
/*11132*/         OPC_CheckPredicate, 3, // Predicate_COND_GT
/*11134*/         OPC_MoveParent,
/*11135*/         OPC_CheckType, MVT::f32,
/*11137*/         OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*11139*/         OPC_EmitInteger, MVT::i32, 0, 
/*11142*/         OPC_EmitInteger, MVT::i32, 0, 
/*11145*/         OPC_EmitInteger, MVT::i32, 0, 
/*11148*/         OPC_EmitInteger, MVT::i32, 0, 
/*11151*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11163*/         OPC_EmitInteger, MVT::i32, 0, 
/*11166*/         OPC_EmitInteger, MVT::i32, 0, 
/*11169*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11181*/         OPC_EmitInteger, MVT::i32, 0, 
/*11184*/         OPC_EmitInteger, MVT::i32, 0, 
/*11187*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11199*/         OPC_EmitInteger, MVT::i32, 1, 
/*11202*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*11205*/         OPC_EmitInteger, MVT::i32, 0, 
/*11208*/         OPC_EmitInteger, MVT::i32, 0, 
/*11211*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDGT_eg), 0,
                      1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (selectcc:f32 f32:f32:$src0, (fpimm:f32)<<P:Predicate_FP_ZERO>>, f32:f32:$src1, f32:f32:$src2, (cond:Other)<<P:Predicate_COND_GT>>) - Complexity = 7
                  // Dst: (CNDGT_eg:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*11236*/       /*Scope*/ 104, /*->11341*/
/*11237*/         OPC_CheckPredicate, 4, // Predicate_COND_GE
/*11239*/         OPC_MoveParent,
/*11240*/         OPC_CheckType, MVT::f32,
/*11242*/         OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*11244*/         OPC_EmitInteger, MVT::i32, 0, 
/*11247*/         OPC_EmitInteger, MVT::i32, 0, 
/*11250*/         OPC_EmitInteger, MVT::i32, 0, 
/*11253*/         OPC_EmitInteger, MVT::i32, 0, 
/*11256*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11268*/         OPC_EmitInteger, MVT::i32, 0, 
/*11271*/         OPC_EmitInteger, MVT::i32, 0, 
/*11274*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11286*/         OPC_EmitInteger, MVT::i32, 0, 
/*11289*/         OPC_EmitInteger, MVT::i32, 0, 
/*11292*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11304*/         OPC_EmitInteger, MVT::i32, 1, 
/*11307*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*11310*/         OPC_EmitInteger, MVT::i32, 0, 
/*11313*/         OPC_EmitInteger, MVT::i32, 0, 
/*11316*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDGE_eg), 0,
                      1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (selectcc:f32 f32:f32:$src0, (fpimm:f32)<<P:Predicate_FP_ZERO>>, f32:f32:$src1, f32:f32:$src2, (cond:Other)<<P:Predicate_COND_GE>>) - Complexity = 7
                  // Dst: (CNDGE_eg:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*11341*/       0, /*End of Scope*/
/*11342*/     0, /*End of Scope*/
/*11343*/   /*Scope*/ 86|128,14/*1878*/, /*->13223*/
/*11345*/     OPC_CheckChild0Type, MVT::i32,
/*11347*/     OPC_Scope, 70|128,8/*1094*/, /*->12444*/ // 2 children in Scope
/*11350*/       OPC_RecordChild1, // #1 = $src1
/*11351*/       OPC_MoveChild, 2,
/*11353*/       OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11364*/       OPC_MoveParent,
/*11365*/       OPC_MoveChild, 3,
/*11367*/       OPC_CheckInteger, 0, 
/*11369*/       OPC_MoveParent,
/*11370*/       OPC_MoveChild, 4,
/*11372*/       OPC_Scope, 106, /*->11480*/ // 10 children in Scope
/*11374*/         OPC_CheckCondCode, ISD::SETEQ,
/*11376*/         OPC_MoveParent,
/*11377*/         OPC_CheckType, MVT::i32,
/*11379*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*11381*/         OPC_EmitInteger, MVT::i32, 0, 
/*11384*/         OPC_EmitInteger, MVT::i32, 0, 
/*11387*/         OPC_EmitInteger, MVT::i32, 1, 
/*11390*/         OPC_EmitInteger, MVT::i32, 0, 
/*11393*/         OPC_EmitInteger, MVT::i32, 0, 
/*11396*/         OPC_EmitInteger, MVT::i32, 0, 
/*11399*/         OPC_EmitInteger, MVT::i32, 0, 
/*11402*/         OPC_EmitInteger, MVT::i32, 0, 
/*11405*/         OPC_EmitInteger, MVT::i32, 0, 
/*11408*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11420*/         OPC_EmitInteger, MVT::i32, 0, 
/*11423*/         OPC_EmitInteger, MVT::i32, 0, 
/*11426*/         OPC_EmitInteger, MVT::i32, 0, 
/*11429*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11441*/         OPC_EmitInteger, MVT::i32, 1, 
/*11444*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*11447*/         OPC_EmitInteger, MVT::i32, 0, 
/*11450*/         OPC_EmitInteger, MVT::i32, 0, 
/*11453*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETE_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETEQ:Other) - Complexity = 13
                  // Dst: (SETE_INT:i32 i32:i32:$src0, i32:i32:$src1)
/*11480*/       /*Scope*/ 106, /*->11587*/
/*11481*/         OPC_CheckCondCode, ISD::SETGT,
/*11483*/         OPC_MoveParent,
/*11484*/         OPC_CheckType, MVT::i32,
/*11486*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*11488*/         OPC_EmitInteger, MVT::i32, 0, 
/*11491*/         OPC_EmitInteger, MVT::i32, 0, 
/*11494*/         OPC_EmitInteger, MVT::i32, 1, 
/*11497*/         OPC_EmitInteger, MVT::i32, 0, 
/*11500*/         OPC_EmitInteger, MVT::i32, 0, 
/*11503*/         OPC_EmitInteger, MVT::i32, 0, 
/*11506*/         OPC_EmitInteger, MVT::i32, 0, 
/*11509*/         OPC_EmitInteger, MVT::i32, 0, 
/*11512*/         OPC_EmitInteger, MVT::i32, 0, 
/*11515*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11527*/         OPC_EmitInteger, MVT::i32, 0, 
/*11530*/         OPC_EmitInteger, MVT::i32, 0, 
/*11533*/         OPC_EmitInteger, MVT::i32, 0, 
/*11536*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11548*/         OPC_EmitInteger, MVT::i32, 1, 
/*11551*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*11554*/         OPC_EmitInteger, MVT::i32, 0, 
/*11557*/         OPC_EmitInteger, MVT::i32, 0, 
/*11560*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGT_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETGT:Other) - Complexity = 13
                  // Dst: (SETGT_INT:i32 i32:i32:$src0, i32:i32:$src1)
/*11587*/       /*Scope*/ 106, /*->11694*/
/*11588*/         OPC_CheckCondCode, ISD::SETGE,
/*11590*/         OPC_MoveParent,
/*11591*/         OPC_CheckType, MVT::i32,
/*11593*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*11595*/         OPC_EmitInteger, MVT::i32, 0, 
/*11598*/         OPC_EmitInteger, MVT::i32, 0, 
/*11601*/         OPC_EmitInteger, MVT::i32, 1, 
/*11604*/         OPC_EmitInteger, MVT::i32, 0, 
/*11607*/         OPC_EmitInteger, MVT::i32, 0, 
/*11610*/         OPC_EmitInteger, MVT::i32, 0, 
/*11613*/         OPC_EmitInteger, MVT::i32, 0, 
/*11616*/         OPC_EmitInteger, MVT::i32, 0, 
/*11619*/         OPC_EmitInteger, MVT::i32, 0, 
/*11622*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11634*/         OPC_EmitInteger, MVT::i32, 0, 
/*11637*/         OPC_EmitInteger, MVT::i32, 0, 
/*11640*/         OPC_EmitInteger, MVT::i32, 0, 
/*11643*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11655*/         OPC_EmitInteger, MVT::i32, 1, 
/*11658*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*11661*/         OPC_EmitInteger, MVT::i32, 0, 
/*11664*/         OPC_EmitInteger, MVT::i32, 0, 
/*11667*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGE_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETGE:Other) - Complexity = 13
                  // Dst: (SETGE_INT:i32 i32:i32:$src0, i32:i32:$src1)
/*11694*/       /*Scope*/ 106, /*->11801*/
/*11695*/         OPC_CheckCondCode, ISD::SETNE,
/*11697*/         OPC_MoveParent,
/*11698*/         OPC_CheckType, MVT::i32,
/*11700*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*11702*/         OPC_EmitInteger, MVT::i32, 0, 
/*11705*/         OPC_EmitInteger, MVT::i32, 0, 
/*11708*/         OPC_EmitInteger, MVT::i32, 1, 
/*11711*/         OPC_EmitInteger, MVT::i32, 0, 
/*11714*/         OPC_EmitInteger, MVT::i32, 0, 
/*11717*/         OPC_EmitInteger, MVT::i32, 0, 
/*11720*/         OPC_EmitInteger, MVT::i32, 0, 
/*11723*/         OPC_EmitInteger, MVT::i32, 0, 
/*11726*/         OPC_EmitInteger, MVT::i32, 0, 
/*11729*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11741*/         OPC_EmitInteger, MVT::i32, 0, 
/*11744*/         OPC_EmitInteger, MVT::i32, 0, 
/*11747*/         OPC_EmitInteger, MVT::i32, 0, 
/*11750*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11762*/         OPC_EmitInteger, MVT::i32, 1, 
/*11765*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*11768*/         OPC_EmitInteger, MVT::i32, 0, 
/*11771*/         OPC_EmitInteger, MVT::i32, 0, 
/*11774*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETNE_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETNE:Other) - Complexity = 13
                  // Dst: (SETNE_INT:i32 i32:i32:$src0, i32:i32:$src1)
/*11801*/       /*Scope*/ 106, /*->11908*/
/*11802*/         OPC_CheckCondCode, ISD::SETUGT,
/*11804*/         OPC_MoveParent,
/*11805*/         OPC_CheckType, MVT::i32,
/*11807*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*11809*/         OPC_EmitInteger, MVT::i32, 0, 
/*11812*/         OPC_EmitInteger, MVT::i32, 0, 
/*11815*/         OPC_EmitInteger, MVT::i32, 1, 
/*11818*/         OPC_EmitInteger, MVT::i32, 0, 
/*11821*/         OPC_EmitInteger, MVT::i32, 0, 
/*11824*/         OPC_EmitInteger, MVT::i32, 0, 
/*11827*/         OPC_EmitInteger, MVT::i32, 0, 
/*11830*/         OPC_EmitInteger, MVT::i32, 0, 
/*11833*/         OPC_EmitInteger, MVT::i32, 0, 
/*11836*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11848*/         OPC_EmitInteger, MVT::i32, 0, 
/*11851*/         OPC_EmitInteger, MVT::i32, 0, 
/*11854*/         OPC_EmitInteger, MVT::i32, 0, 
/*11857*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11869*/         OPC_EmitInteger, MVT::i32, 1, 
/*11872*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*11875*/         OPC_EmitInteger, MVT::i32, 0, 
/*11878*/         OPC_EmitInteger, MVT::i32, 0, 
/*11881*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGT_UINT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETUGT:Other) - Complexity = 13
                  // Dst: (SETGT_UINT:i32 i32:i32:$src0, i32:i32:$src1)
/*11908*/       /*Scope*/ 106, /*->12015*/
/*11909*/         OPC_CheckCondCode, ISD::SETUGE,
/*11911*/         OPC_MoveParent,
/*11912*/         OPC_CheckType, MVT::i32,
/*11914*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*11916*/         OPC_EmitInteger, MVT::i32, 0, 
/*11919*/         OPC_EmitInteger, MVT::i32, 0, 
/*11922*/         OPC_EmitInteger, MVT::i32, 1, 
/*11925*/         OPC_EmitInteger, MVT::i32, 0, 
/*11928*/         OPC_EmitInteger, MVT::i32, 0, 
/*11931*/         OPC_EmitInteger, MVT::i32, 0, 
/*11934*/         OPC_EmitInteger, MVT::i32, 0, 
/*11937*/         OPC_EmitInteger, MVT::i32, 0, 
/*11940*/         OPC_EmitInteger, MVT::i32, 0, 
/*11943*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11955*/         OPC_EmitInteger, MVT::i32, 0, 
/*11958*/         OPC_EmitInteger, MVT::i32, 0, 
/*11961*/         OPC_EmitInteger, MVT::i32, 0, 
/*11964*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11976*/         OPC_EmitInteger, MVT::i32, 1, 
/*11979*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*11982*/         OPC_EmitInteger, MVT::i32, 0, 
/*11985*/         OPC_EmitInteger, MVT::i32, 0, 
/*11988*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGE_UINT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETUGE:Other) - Complexity = 13
                  // Dst: (SETGE_UINT:i32 i32:i32:$src0, i32:i32:$src1)
/*12015*/       /*Scope*/ 106, /*->12122*/
/*12016*/         OPC_CheckCondCode, ISD::SETLT,
/*12018*/         OPC_MoveParent,
/*12019*/         OPC_CheckType, MVT::i32,
/*12021*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*12023*/         OPC_EmitInteger, MVT::i32, 0, 
/*12026*/         OPC_EmitInteger, MVT::i32, 0, 
/*12029*/         OPC_EmitInteger, MVT::i32, 1, 
/*12032*/         OPC_EmitInteger, MVT::i32, 0, 
/*12035*/         OPC_EmitInteger, MVT::i32, 0, 
/*12038*/         OPC_EmitInteger, MVT::i32, 0, 
/*12041*/         OPC_EmitInteger, MVT::i32, 0, 
/*12044*/         OPC_EmitInteger, MVT::i32, 0, 
/*12047*/         OPC_EmitInteger, MVT::i32, 0, 
/*12050*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12062*/         OPC_EmitInteger, MVT::i32, 0, 
/*12065*/         OPC_EmitInteger, MVT::i32, 0, 
/*12068*/         OPC_EmitInteger, MVT::i32, 0, 
/*12071*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12083*/         OPC_EmitInteger, MVT::i32, 1, 
/*12086*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*12089*/         OPC_EmitInteger, MVT::i32, 0, 
/*12092*/         OPC_EmitInteger, MVT::i32, 0, 
/*12095*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGT_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 1, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETLT:Other) - Complexity = 13
                  // Dst: (SETGT_INT:i32 ?:i32:$src1, ?:i32:$src0)
/*12122*/       /*Scope*/ 106, /*->12229*/
/*12123*/         OPC_CheckCondCode, ISD::SETLE,
/*12125*/         OPC_MoveParent,
/*12126*/         OPC_CheckType, MVT::i32,
/*12128*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*12130*/         OPC_EmitInteger, MVT::i32, 0, 
/*12133*/         OPC_EmitInteger, MVT::i32, 0, 
/*12136*/         OPC_EmitInteger, MVT::i32, 1, 
/*12139*/         OPC_EmitInteger, MVT::i32, 0, 
/*12142*/         OPC_EmitInteger, MVT::i32, 0, 
/*12145*/         OPC_EmitInteger, MVT::i32, 0, 
/*12148*/         OPC_EmitInteger, MVT::i32, 0, 
/*12151*/         OPC_EmitInteger, MVT::i32, 0, 
/*12154*/         OPC_EmitInteger, MVT::i32, 0, 
/*12157*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12169*/         OPC_EmitInteger, MVT::i32, 0, 
/*12172*/         OPC_EmitInteger, MVT::i32, 0, 
/*12175*/         OPC_EmitInteger, MVT::i32, 0, 
/*12178*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12190*/         OPC_EmitInteger, MVT::i32, 1, 
/*12193*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*12196*/         OPC_EmitInteger, MVT::i32, 0, 
/*12199*/         OPC_EmitInteger, MVT::i32, 0, 
/*12202*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGE_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 1, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETLE:Other) - Complexity = 13
                  // Dst: (SETGE_INT:i32 ?:i32:$src1, ?:i32:$src0)
/*12229*/       /*Scope*/ 106, /*->12336*/
/*12230*/         OPC_CheckCondCode, ISD::SETULT,
/*12232*/         OPC_MoveParent,
/*12233*/         OPC_CheckType, MVT::i32,
/*12235*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*12237*/         OPC_EmitInteger, MVT::i32, 0, 
/*12240*/         OPC_EmitInteger, MVT::i32, 0, 
/*12243*/         OPC_EmitInteger, MVT::i32, 1, 
/*12246*/         OPC_EmitInteger, MVT::i32, 0, 
/*12249*/         OPC_EmitInteger, MVT::i32, 0, 
/*12252*/         OPC_EmitInteger, MVT::i32, 0, 
/*12255*/         OPC_EmitInteger, MVT::i32, 0, 
/*12258*/         OPC_EmitInteger, MVT::i32, 0, 
/*12261*/         OPC_EmitInteger, MVT::i32, 0, 
/*12264*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12276*/         OPC_EmitInteger, MVT::i32, 0, 
/*12279*/         OPC_EmitInteger, MVT::i32, 0, 
/*12282*/         OPC_EmitInteger, MVT::i32, 0, 
/*12285*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12297*/         OPC_EmitInteger, MVT::i32, 1, 
/*12300*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*12303*/         OPC_EmitInteger, MVT::i32, 0, 
/*12306*/         OPC_EmitInteger, MVT::i32, 0, 
/*12309*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGT_UINT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 1, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETULT:Other) - Complexity = 13
                  // Dst: (SETGT_UINT:i32 ?:i32:$src1, ?:i32:$src0)
/*12336*/       /*Scope*/ 106, /*->12443*/
/*12337*/         OPC_CheckCondCode, ISD::SETULE,
/*12339*/         OPC_MoveParent,
/*12340*/         OPC_CheckType, MVT::i32,
/*12342*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*12344*/         OPC_EmitInteger, MVT::i32, 0, 
/*12347*/         OPC_EmitInteger, MVT::i32, 0, 
/*12350*/         OPC_EmitInteger, MVT::i32, 1, 
/*12353*/         OPC_EmitInteger, MVT::i32, 0, 
/*12356*/         OPC_EmitInteger, MVT::i32, 0, 
/*12359*/         OPC_EmitInteger, MVT::i32, 0, 
/*12362*/         OPC_EmitInteger, MVT::i32, 0, 
/*12365*/         OPC_EmitInteger, MVT::i32, 0, 
/*12368*/         OPC_EmitInteger, MVT::i32, 0, 
/*12371*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12383*/         OPC_EmitInteger, MVT::i32, 0, 
/*12386*/         OPC_EmitInteger, MVT::i32, 0, 
/*12389*/         OPC_EmitInteger, MVT::i32, 0, 
/*12392*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12404*/         OPC_EmitInteger, MVT::i32, 1, 
/*12407*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*12410*/         OPC_EmitInteger, MVT::i32, 0, 
/*12413*/         OPC_EmitInteger, MVT::i32, 0, 
/*12416*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGE_UINT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 1, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETULE:Other) - Complexity = 13
                  // Dst: (SETGE_UINT:i32 ?:i32:$src1, ?:i32:$src0)
/*12443*/       0, /*End of Scope*/
/*12444*/     /*Scope*/ 8|128,6/*776*/, /*->13222*/
/*12446*/       OPC_MoveChild, 1,
/*12448*/       OPC_Scope, 6|128,5/*646*/, /*->13097*/ // 2 children in Scope
/*12451*/         OPC_CheckInteger, 0, 
/*12453*/         OPC_MoveParent,
/*12454*/         OPC_RecordChild2, // #1 = $src1
/*12455*/         OPC_RecordChild3, // #2 = $src2
/*12456*/         OPC_MoveChild, 4,
/*12458*/         OPC_Scope, 64|128,2/*320*/, /*->12781*/ // 4 children in Scope
/*12461*/           OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/*12464*/           OPC_Scope, 104, /*->12570*/ // 3 children in Scope
/*12466*/             OPC_CheckPredicate, 2, // Predicate_COND_EQ
/*12468*/             OPC_MoveParent,
/*12469*/             OPC_CheckType, MVT::i32,
/*12471*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*12473*/             OPC_EmitInteger, MVT::i32, 0, 
/*12476*/             OPC_EmitInteger, MVT::i32, 0, 
/*12479*/             OPC_EmitInteger, MVT::i32, 0, 
/*12482*/             OPC_EmitInteger, MVT::i32, 0, 
/*12485*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12497*/             OPC_EmitInteger, MVT::i32, 0, 
/*12500*/             OPC_EmitInteger, MVT::i32, 0, 
/*12503*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12515*/             OPC_EmitInteger, MVT::i32, 0, 
/*12518*/             OPC_EmitInteger, MVT::i32, 0, 
/*12521*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12533*/             OPC_EmitInteger, MVT::i32, 1, 
/*12536*/             OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*12539*/             OPC_EmitInteger, MVT::i32, 0, 
/*12542*/             OPC_EmitInteger, MVT::i32, 0, 
/*12545*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDE_INT), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (selectcc:i32 i32:i32:$src0, 0:i32, i32:i32:$src1, i32:i32:$src2, (cond:Other)<<P:Predicate_COND_EQ>>) - Complexity = 8
                      // Dst: (CNDE_INT:i32 i32:i32:$src0, i32:i32:$src1, i32:i32:$src2)
/*12570*/           /*Scope*/ 104, /*->12675*/
/*12571*/             OPC_CheckPredicate, 4, // Predicate_COND_GE
/*12573*/             OPC_MoveParent,
/*12574*/             OPC_CheckType, MVT::i32,
/*12576*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*12578*/             OPC_EmitInteger, MVT::i32, 0, 
/*12581*/             OPC_EmitInteger, MVT::i32, 0, 
/*12584*/             OPC_EmitInteger, MVT::i32, 0, 
/*12587*/             OPC_EmitInteger, MVT::i32, 0, 
/*12590*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12602*/             OPC_EmitInteger, MVT::i32, 0, 
/*12605*/             OPC_EmitInteger, MVT::i32, 0, 
/*12608*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12620*/             OPC_EmitInteger, MVT::i32, 0, 
/*12623*/             OPC_EmitInteger, MVT::i32, 0, 
/*12626*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12638*/             OPC_EmitInteger, MVT::i32, 1, 
/*12641*/             OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*12644*/             OPC_EmitInteger, MVT::i32, 0, 
/*12647*/             OPC_EmitInteger, MVT::i32, 0, 
/*12650*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDGE_INT), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (selectcc:i32 i32:i32:$src0, 0:i32, i32:i32:$src1, i32:i32:$src2, (cond:Other)<<P:Predicate_COND_GE>>) - Complexity = 8
                      // Dst: (CNDGE_INT:i32 i32:i32:$src0, i32:i32:$src1, i32:i32:$src2)
/*12675*/           /*Scope*/ 104, /*->12780*/
/*12676*/             OPC_CheckPredicate, 3, // Predicate_COND_GT
/*12678*/             OPC_MoveParent,
/*12679*/             OPC_CheckType, MVT::i32,
/*12681*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*12683*/             OPC_EmitInteger, MVT::i32, 0, 
/*12686*/             OPC_EmitInteger, MVT::i32, 0, 
/*12689*/             OPC_EmitInteger, MVT::i32, 0, 
/*12692*/             OPC_EmitInteger, MVT::i32, 0, 
/*12695*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12707*/             OPC_EmitInteger, MVT::i32, 0, 
/*12710*/             OPC_EmitInteger, MVT::i32, 0, 
/*12713*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12725*/             OPC_EmitInteger, MVT::i32, 0, 
/*12728*/             OPC_EmitInteger, MVT::i32, 0, 
/*12731*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12743*/             OPC_EmitInteger, MVT::i32, 1, 
/*12746*/             OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*12749*/             OPC_EmitInteger, MVT::i32, 0, 
/*12752*/             OPC_EmitInteger, MVT::i32, 0, 
/*12755*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDGT_INT), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (selectcc:i32 i32:i32:$src0, 0:i32, i32:i32:$src1, i32:i32:$src2, (cond:Other)<<P:Predicate_COND_GT>>) - Complexity = 8
                      // Dst: (CNDGT_INT:i32 i32:i32:$src0, i32:i32:$src1, i32:i32:$src2)
/*12780*/           0, /*End of Scope*/
/*12781*/         /*Scope*/ 104, /*->12886*/
/*12782*/           OPC_CheckCondCode, ISD::SETEQ,
/*12784*/           OPC_MoveParent,
/*12785*/           OPC_CheckType, MVT::f32,
/*12787*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*12789*/           OPC_EmitInteger, MVT::i32, 0, 
/*12792*/           OPC_EmitInteger, MVT::i32, 0, 
/*12795*/           OPC_EmitInteger, MVT::i32, 0, 
/*12798*/           OPC_EmitInteger, MVT::i32, 0, 
/*12801*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12813*/           OPC_EmitInteger, MVT::i32, 0, 
/*12816*/           OPC_EmitInteger, MVT::i32, 0, 
/*12819*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12831*/           OPC_EmitInteger, MVT::i32, 0, 
/*12834*/           OPC_EmitInteger, MVT::i32, 0, 
/*12837*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12849*/           OPC_EmitInteger, MVT::i32, 1, 
/*12852*/           OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*12855*/           OPC_EmitInteger, MVT::i32, 0, 
/*12858*/           OPC_EmitInteger, MVT::i32, 0, 
/*12861*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDE_INT), 0,
                        1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:f32 i32:i32:$src0, 0:i32, f32:f32:$src1, f32:f32:$src2, SETEQ:Other) - Complexity = 8
                    // Dst: (CNDE_INT:f32 ?:i32:$src0, ?:f32:$src1, ?:f32:$src2)
/*12886*/         /*Scope*/ 104, /*->12991*/
/*12887*/           OPC_CheckCondCode, ISD::SETGT,
/*12889*/           OPC_MoveParent,
/*12890*/           OPC_CheckType, MVT::f32,
/*12892*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*12894*/           OPC_EmitInteger, MVT::i32, 0, 
/*12897*/           OPC_EmitInteger, MVT::i32, 0, 
/*12900*/           OPC_EmitInteger, MVT::i32, 0, 
/*12903*/           OPC_EmitInteger, MVT::i32, 0, 
/*12906*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12918*/           OPC_EmitInteger, MVT::i32, 0, 
/*12921*/           OPC_EmitInteger, MVT::i32, 0, 
/*12924*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12936*/           OPC_EmitInteger, MVT::i32, 0, 
/*12939*/           OPC_EmitInteger, MVT::i32, 0, 
/*12942*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12954*/           OPC_EmitInteger, MVT::i32, 1, 
/*12957*/           OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*12960*/           OPC_EmitInteger, MVT::i32, 0, 
/*12963*/           OPC_EmitInteger, MVT::i32, 0, 
/*12966*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDGT_INT), 0,
                        1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:f32 i32:i32:$src0, 0:i32, f32:f32:$src1, f32:f32:$src2, SETGT:Other) - Complexity = 8
                    // Dst: (CNDGT_INT:f32 ?:i32:$src0, ?:f32:$src1, ?:f32:$src2)
/*12991*/         /*Scope*/ 104, /*->13096*/
/*12992*/           OPC_CheckCondCode, ISD::SETGE,
/*12994*/           OPC_MoveParent,
/*12995*/           OPC_CheckType, MVT::f32,
/*12997*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*12999*/           OPC_EmitInteger, MVT::i32, 0, 
/*13002*/           OPC_EmitInteger, MVT::i32, 0, 
/*13005*/           OPC_EmitInteger, MVT::i32, 0, 
/*13008*/           OPC_EmitInteger, MVT::i32, 0, 
/*13011*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13023*/           OPC_EmitInteger, MVT::i32, 0, 
/*13026*/           OPC_EmitInteger, MVT::i32, 0, 
/*13029*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13041*/           OPC_EmitInteger, MVT::i32, 0, 
/*13044*/           OPC_EmitInteger, MVT::i32, 0, 
/*13047*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13059*/           OPC_EmitInteger, MVT::i32, 1, 
/*13062*/           OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*13065*/           OPC_EmitInteger, MVT::i32, 0, 
/*13068*/           OPC_EmitInteger, MVT::i32, 0, 
/*13071*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDGE_INT), 0,
                        1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:f32 i32:i32:$src0, 0:i32, f32:f32:$src1, f32:f32:$src2, SETGE:Other) - Complexity = 8
                    // Dst: (CNDGE_INT:f32 ?:i32:$src0, ?:f32:$src1, ?:f32:$src2)
/*13096*/         0, /*End of Scope*/
/*13097*/       /*Scope*/ 123, /*->13221*/
/*13098*/         OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13109*/         OPC_MoveParent,
/*13110*/         OPC_RecordChild2, // #1 = $src1
/*13111*/         OPC_RecordChild3, // #2 = $src2
/*13112*/         OPC_MoveChild, 4,
/*13114*/         OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/*13117*/         OPC_CheckPredicate, 3, // Predicate_COND_GT
/*13119*/         OPC_MoveParent,
/*13120*/         OPC_CheckType, MVT::i32,
/*13122*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*13124*/         OPC_EmitInteger, MVT::i32, 0, 
/*13127*/         OPC_EmitInteger, MVT::i32, 0, 
/*13130*/         OPC_EmitInteger, MVT::i32, 0, 
/*13133*/         OPC_EmitInteger, MVT::i32, 0, 
/*13136*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13148*/         OPC_EmitInteger, MVT::i32, 0, 
/*13151*/         OPC_EmitInteger, MVT::i32, 0, 
/*13154*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13166*/         OPC_EmitInteger, MVT::i32, 0, 
/*13169*/         OPC_EmitInteger, MVT::i32, 0, 
/*13172*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13184*/         OPC_EmitInteger, MVT::i32, 1, 
/*13187*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*13190*/         OPC_EmitInteger, MVT::i32, 0, 
/*13193*/         OPC_EmitInteger, MVT::i32, 0, 
/*13196*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDGE_INT), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (selectcc:i32 i32:i32:$src0, -1:i32, i32:i32:$src1, i32:i32:$src2, (cond:Other)<<P:Predicate_COND_GT>>) - Complexity = 8
                  // Dst: (CNDGE_INT:i32 ?:i32:$src0, ?:i32:$src1, ?:i32:$src2)
/*13221*/       0, /*End of Scope*/
/*13222*/     0, /*End of Scope*/
/*13223*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 127|128,17/*2303*/,  TARGET_VAL(ISD::LOAD),// ->15531
/*13228*/   OPC_RecordMemRef,
/*13229*/   OPC_RecordNode,   // #0 = 'ld' chained node
/*13230*/   OPC_Scope, 13|128,2/*269*/, /*->13502*/ // 7 children in Scope
/*13233*/     OPC_RecordChild1, // #1 = $src_gpr
/*13234*/     OPC_CheckChild1Type, MVT::i32,
/*13236*/     OPC_CheckPredicate, 10, // Predicate_unindexedload
/*13238*/     OPC_CheckType, MVT::i32,
/*13240*/     OPC_Scope, 44, /*->13286*/ // 8 children in Scope
/*13242*/       OPC_CheckPredicate, 11, // Predicate_az_extload
/*13244*/       OPC_Scope, 19, /*->13265*/ // 2 children in Scope
/*13246*/         OPC_CheckPredicate, 12, // Predicate_az_extloadi8
/*13248*/         OPC_CheckPredicate, 13, // Predicate_load_param_exti8
/*13250*/         OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*13252*/         OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*13255*/         OPC_EmitMergeInputChains1_0,
/*13256*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_PARAM_8_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_load_param_exti8>> - Complexity = 13
                  // Dst: (VTX_READ_PARAM_8_eg:i32 ADDRVTX_READ:i32:$src_gpr)
/*13265*/       /*Scope*/ 19, /*->13285*/
/*13266*/         OPC_CheckPredicate, 14, // Predicate_az_extloadi16
/*13268*/         OPC_CheckPredicate, 15, // Predicate_load_param_exti16
/*13270*/         OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*13272*/         OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*13275*/         OPC_EmitMergeInputChains1_0,
/*13276*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_PARAM_16_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_load_param_exti16>> - Complexity = 13
                  // Dst: (VTX_READ_PARAM_16_eg:i32 ADDRVTX_READ:i32:$src_gpr)
/*13285*/       0, /*End of Scope*/
/*13286*/     /*Scope*/ 19, /*->13306*/
/*13287*/       OPC_CheckPredicate, 16, // Predicate_load
/*13289*/       OPC_CheckPredicate, 17, // Predicate_load_param
/*13291*/       OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*13293*/       OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*13296*/       OPC_EmitMergeInputChains1_0,
/*13297*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_PARAM_32_eg), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_param>> - Complexity = 13
                // Dst: (VTX_READ_PARAM_32_eg:i32 ADDRVTX_READ:i32:$src_gpr)
/*13306*/     /*Scope*/ 44, /*->13351*/
/*13307*/       OPC_CheckPredicate, 11, // Predicate_az_extload
/*13309*/       OPC_Scope, 19, /*->13330*/ // 2 children in Scope
/*13311*/         OPC_CheckPredicate, 12, // Predicate_az_extloadi8
/*13313*/         OPC_CheckPredicate, 18, // Predicate_az_extloadi8_global
/*13315*/         OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*13317*/         OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*13320*/         OPC_EmitMergeInputChains1_0,
/*13321*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_GLOBAL_8_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_az_extloadi8_global>> - Complexity = 13
                  // Dst: (VTX_READ_GLOBAL_8_eg:i32 ADDRVTX_READ:i32:$src_gpr)
/*13330*/       /*Scope*/ 19, /*->13350*/
/*13331*/         OPC_CheckPredicate, 14, // Predicate_az_extloadi16
/*13333*/         OPC_CheckPredicate, 19, // Predicate_az_extloadi16_global
/*13335*/         OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*13337*/         OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*13340*/         OPC_EmitMergeInputChains1_0,
/*13341*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_GLOBAL_16_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_az_extloadi16_global>> - Complexity = 13
                  // Dst: (VTX_READ_GLOBAL_16_eg:i32 ADDRVTX_READ:i32:$src_gpr)
/*13350*/       0, /*End of Scope*/
/*13351*/     /*Scope*/ 19, /*->13371*/
/*13352*/       OPC_CheckPredicate, 16, // Predicate_load
/*13354*/       OPC_CheckPredicate, 20, // Predicate_global_load
/*13356*/       OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*13358*/       OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*13361*/       OPC_EmitMergeInputChains1_0,
/*13362*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_GLOBAL_32_eg), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 13
                // Dst: (VTX_READ_GLOBAL_32_eg:i32 ADDRVTX_READ:i32:$src_gpr)
/*13371*/     /*Scope*/ 44, /*->13416*/
/*13372*/       OPC_CheckPredicate, 11, // Predicate_az_extload
/*13374*/       OPC_Scope, 19, /*->13395*/ // 2 children in Scope
/*13376*/         OPC_CheckPredicate, 12, // Predicate_az_extloadi8
/*13378*/         OPC_CheckPredicate, 13, // Predicate_load_param_exti8
/*13380*/         OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*13382*/         OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*13385*/         OPC_EmitMergeInputChains1_0,
/*13386*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_PARAM_8_cm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_load_param_exti8>> - Complexity = 13
                  // Dst: (VTX_READ_PARAM_8_cm:i32 ADDRVTX_READ:i32:$src_gpr)
/*13395*/       /*Scope*/ 19, /*->13415*/
/*13396*/         OPC_CheckPredicate, 14, // Predicate_az_extloadi16
/*13398*/         OPC_CheckPredicate, 15, // Predicate_load_param_exti16
/*13400*/         OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*13402*/         OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*13405*/         OPC_EmitMergeInputChains1_0,
/*13406*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_PARAM_16_cm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_load_param_exti16>> - Complexity = 13
                  // Dst: (VTX_READ_PARAM_16_cm:i32 ADDRVTX_READ:i32:$src_gpr)
/*13415*/       0, /*End of Scope*/
/*13416*/     /*Scope*/ 19, /*->13436*/
/*13417*/       OPC_CheckPredicate, 16, // Predicate_load
/*13419*/       OPC_CheckPredicate, 17, // Predicate_load_param
/*13421*/       OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*13423*/       OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*13426*/       OPC_EmitMergeInputChains1_0,
/*13427*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_PARAM_32_cm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_param>> - Complexity = 13
                // Dst: (VTX_READ_PARAM_32_cm:i32 ADDRVTX_READ:i32:$src_gpr)
/*13436*/     /*Scope*/ 44, /*->13481*/
/*13437*/       OPC_CheckPredicate, 11, // Predicate_az_extload
/*13439*/       OPC_Scope, 19, /*->13460*/ // 2 children in Scope
/*13441*/         OPC_CheckPredicate, 12, // Predicate_az_extloadi8
/*13443*/         OPC_CheckPredicate, 18, // Predicate_az_extloadi8_global
/*13445*/         OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*13447*/         OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*13450*/         OPC_EmitMergeInputChains1_0,
/*13451*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_GLOBAL_8_cm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_az_extloadi8_global>> - Complexity = 13
                  // Dst: (VTX_READ_GLOBAL_8_cm:i32 ADDRVTX_READ:i32:$src_gpr)
/*13460*/       /*Scope*/ 19, /*->13480*/
/*13461*/         OPC_CheckPredicate, 14, // Predicate_az_extloadi16
/*13463*/         OPC_CheckPredicate, 19, // Predicate_az_extloadi16_global
/*13465*/         OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*13467*/         OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*13470*/         OPC_EmitMergeInputChains1_0,
/*13471*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_GLOBAL_16_cm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_az_extloadi16_global>> - Complexity = 13
                  // Dst: (VTX_READ_GLOBAL_16_cm:i32 ADDRVTX_READ:i32:$src_gpr)
/*13480*/       0, /*End of Scope*/
/*13481*/     /*Scope*/ 19, /*->13501*/
/*13482*/       OPC_CheckPredicate, 16, // Predicate_load
/*13484*/       OPC_CheckPredicate, 20, // Predicate_global_load
/*13486*/       OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*13488*/       OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*13491*/       OPC_EmitMergeInputChains1_0,
/*13492*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_GLOBAL_32_cm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 13
                // Dst: (VTX_READ_GLOBAL_32_cm:i32 ADDRVTX_READ:i32:$src_gpr)
/*13501*/     0, /*End of Scope*/
/*13502*/   /*Scope*/ 62|128,6/*830*/, /*->14334*/
/*13504*/     OPC_MoveChild, 1,
/*13506*/     OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*13509*/     OPC_RecordChild0, // #1 = $sbase
/*13510*/     OPC_RecordChild1, // #2 = $offset
/*13511*/     OPC_Scope, 118|128,2/*374*/, /*->13888*/ // 2 children in Scope
/*13514*/       OPC_MoveChild, 1,
/*13516*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13519*/       OPC_Scope, 50, /*->13571*/ // 3 children in Scope
/*13521*/         OPC_CheckPredicate, 21, // Predicate_IMM8bitDWORD
/*13523*/         OPC_MoveParent,
/*13524*/         OPC_MoveParent,
/*13525*/         OPC_CheckPredicate, 10, // Predicate_unindexedload
/*13527*/         OPC_CheckPredicate, 16, // Predicate_load
/*13529*/         OPC_CheckPredicate, 22, // Predicate_constant_load
/*13531*/         OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->13551
/*13534*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13536*/           OPC_EmitMergeInputChains1_0,
/*13537*/           OPC_EmitConvertToTarget, 2,
/*13539*/           OPC_EmitNodeXForm, 0, 3, // anonymous.val.378
/*13542*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORD_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4, 
                    // Src: (ld:i32 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32)<<P:Predicate_IMM8bitDWORD>><<X:anonymous.val.378>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 11
                    // Dst: (S_LOAD_DWORD_IMM:i32 ?:i64:$sbase, (anonymous.val.378:i32 (imm:i32)<<P:Predicate_IMM8bitDWORD>>:$offset))
                  /*SwitchType*/ 17,  MVT::i64,// ->13570
/*13553*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13555*/           OPC_EmitMergeInputChains1_0,
/*13556*/           OPC_EmitConvertToTarget, 2,
/*13558*/           OPC_EmitNodeXForm, 0, 3, // anonymous.val.378
/*13561*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX2_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 4, 
                    // Src: (ld:i64 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32)<<P:Predicate_IMM8bitDWORD>><<X:anonymous.val.378>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 11
                    // Dst: (S_LOAD_DWORDX2_IMM:i64 ?:i64:$sbase, (anonymous.val.378:i32 (imm:i32)<<P:Predicate_IMM8bitDWORD>>:$offset))
                  0, // EndSwitchType
/*13571*/       /*Scope*/ 127|128,1/*255*/, /*->13828*/
/*13573*/         OPC_CheckPredicate, 23, // Predicate_IMM12bit
/*13575*/         OPC_MoveParent,
/*13576*/         OPC_CheckType, MVT::i64,
/*13578*/         OPC_MoveParent,
/*13579*/         OPC_CheckPredicate, 10, // Predicate_unindexedload
/*13581*/         OPC_Scope, 35, /*->13618*/ // 6 children in Scope
/*13583*/           OPC_CheckPredicate, 24, // Predicate_sextload
/*13585*/           OPC_CheckPredicate, 25, // Predicate_sextloadi8
/*13587*/           OPC_CheckPredicate, 26, // Predicate_sextloadi8_global
/*13589*/           OPC_CheckType, MVT::i32,
/*13591*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13593*/           OPC_EmitMergeInputChains1_0,
/*13594*/           OPC_EmitInteger, MVT::i64, 0, 
/*13597*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*13605*/           OPC_EmitNodeXForm, 1, 2, // as_i16imm
/*13608*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_SBYTE_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 1, 5, 
                    // Src: (ld:i32 (add:i64 i64:i64:$ptr, (imm:i64)<<P:Predicate_IMM12bit>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>><<P:Predicate_sextloadi8_global>> - Complexity = 11
                    // Dst: (BUFFER_LOAD_SBYTE_ADDR64:i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, (as_i16imm:i16 ?:i64:$offset))
/*13618*/         /*Scope*/ 35, /*->13654*/
/*13619*/           OPC_CheckPredicate, 11, // Predicate_az_extload
/*13621*/           OPC_CheckPredicate, 12, // Predicate_az_extloadi8
/*13623*/           OPC_CheckPredicate, 18, // Predicate_az_extloadi8_global
/*13625*/           OPC_CheckType, MVT::i32,
/*13627*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13629*/           OPC_EmitMergeInputChains1_0,
/*13630*/           OPC_EmitInteger, MVT::i64, 0, 
/*13633*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*13641*/           OPC_EmitNodeXForm, 1, 2, // as_i16imm
/*13644*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_UBYTE_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 1, 5, 
                    // Src: (ld:i32 (add:i64 i64:i64:$ptr, (imm:i64)<<P:Predicate_IMM12bit>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_az_extloadi8_global>> - Complexity = 11
                    // Dst: (BUFFER_LOAD_UBYTE_ADDR64:i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, (as_i16imm:i16 ?:i64:$offset))
/*13654*/         /*Scope*/ 35, /*->13690*/
/*13655*/           OPC_CheckPredicate, 24, // Predicate_sextload
/*13657*/           OPC_CheckPredicate, 27, // Predicate_sextloadi16
/*13659*/           OPC_CheckPredicate, 28, // Predicate_sextloadi16_global
/*13661*/           OPC_CheckType, MVT::i32,
/*13663*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13665*/           OPC_EmitMergeInputChains1_0,
/*13666*/           OPC_EmitInteger, MVT::i64, 0, 
/*13669*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*13677*/           OPC_EmitNodeXForm, 1, 2, // as_i16imm
/*13680*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_SSHORT_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 1, 5, 
                    // Src: (ld:i32 (add:i64 i64:i64:$ptr, (imm:i64)<<P:Predicate_IMM12bit>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_sextloadi16_global>> - Complexity = 11
                    // Dst: (BUFFER_LOAD_SSHORT_ADDR64:i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, (as_i16imm:i16 ?:i64:$offset))
/*13690*/         /*Scope*/ 35, /*->13726*/
/*13691*/           OPC_CheckPredicate, 11, // Predicate_az_extload
/*13693*/           OPC_CheckPredicate, 14, // Predicate_az_extloadi16
/*13695*/           OPC_CheckPredicate, 19, // Predicate_az_extloadi16_global
/*13697*/           OPC_CheckType, MVT::i32,
/*13699*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13701*/           OPC_EmitMergeInputChains1_0,
/*13702*/           OPC_EmitInteger, MVT::i64, 0, 
/*13705*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*13713*/           OPC_EmitNodeXForm, 1, 2, // as_i16imm
/*13716*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_USHORT_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 1, 5, 
                    // Src: (ld:i32 (add:i64 i64:i64:$ptr, (imm:i64)<<P:Predicate_IMM12bit>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_az_extloadi16_global>> - Complexity = 11
                    // Dst: (BUFFER_LOAD_USHORT_ADDR64:i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, (as_i16imm:i16 ?:i64:$offset))
/*13726*/         /*Scope*/ 64, /*->13791*/
/*13727*/           OPC_CheckPredicate, 16, // Predicate_load
/*13729*/           OPC_CheckPredicate, 20, // Predicate_global_load
/*13731*/           OPC_SwitchType /*2 cases */, 27,  MVT::i32,// ->13761
/*13734*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13736*/             OPC_EmitMergeInputChains1_0,
/*13737*/             OPC_EmitInteger, MVT::i64, 0, 
/*13740*/             OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                          1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*13748*/             OPC_EmitNodeXForm, 1, 2, // as_i16imm
/*13751*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORD_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 1, 5, 
                      // Src: (ld:i32 (add:i64 i64:i64:$ptr, (imm:i64)<<P:Predicate_IMM12bit>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 11
                      // Dst: (BUFFER_LOAD_DWORD_ADDR64:i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, (as_i16imm:i16 ?:i64:$offset))
                    /*SwitchType*/ 27,  MVT::i64,// ->13790
/*13763*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13765*/             OPC_EmitMergeInputChains1_0,
/*13766*/             OPC_EmitInteger, MVT::i64, 0, 
/*13769*/             OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                          1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*13777*/             OPC_EmitNodeXForm, 1, 2, // as_i16imm
/*13780*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX2_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 4, 1, 5, 
                      // Src: (ld:i64 (add:i64 i64:i64:$ptr, (imm:i64)<<P:Predicate_IMM12bit>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 11
                      // Dst: (BUFFER_LOAD_DWORDX2_ADDR64:i64 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, (as_i16imm:i16 ?:i64:$offset))
                    0, // EndSwitchType
/*13791*/         /*Scope*/ 35, /*->13827*/
/*13792*/           OPC_CheckPredicate, 11, // Predicate_az_extload
/*13794*/           OPC_CheckPredicate, 29, // Predicate_az_extloadi32
/*13796*/           OPC_CheckPredicate, 30, // Predicate_az_extloadi32_global
/*13798*/           OPC_CheckType, MVT::i64,
/*13800*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13802*/           OPC_EmitMergeInputChains1_0,
/*13803*/           OPC_EmitInteger, MVT::i64, 0, 
/*13806*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*13814*/           OPC_EmitNodeXForm, 1, 2, // as_i16imm
/*13817*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX2_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 3/*#Ops*/, 4, 1, 5, 
                    // Src: (ld:i64 (add:i64 i64:i64:$ptr, (imm:i64)<<P:Predicate_IMM12bit>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi32>><<P:Predicate_az_extloadi32_global>> - Complexity = 11
                    // Dst: (BUFFER_LOAD_DWORDX2_ADDR64:i64 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, (as_i16imm:i16 ?:i64:$offset))
/*13827*/         0, /*End of Scope*/
/*13828*/       /*Scope*/ 58, /*->13887*/
/*13829*/         OPC_MoveParent,
/*13830*/         OPC_MoveParent,
/*13831*/         OPC_CheckPredicate, 10, // Predicate_unindexedload
/*13833*/         OPC_CheckPredicate, 16, // Predicate_load
/*13835*/         OPC_CheckPredicate, 22, // Predicate_constant_load
/*13837*/         OPC_SwitchType /*2 cases */, 22,  MVT::i32,// ->13862
/*13840*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13842*/           OPC_EmitMergeInputChains1_0,
/*13843*/           OPC_EmitConvertToTarget, 2,
/*13845*/           OPC_EmitNode, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*13853*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORD_SGPR), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4, 
                    // Src: (ld:i32 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32):$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 10
                    // Dst: (S_LOAD_DWORD_SGPR:i32 ?:i64:$sbase, (S_MOV_B32:i32 (imm:i32):$offset))
                  /*SwitchType*/ 22,  MVT::i64,// ->13886
/*13864*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13866*/           OPC_EmitMergeInputChains1_0,
/*13867*/           OPC_EmitConvertToTarget, 2,
/*13869*/           OPC_EmitNode, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*13877*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX2_SGPR), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 4, 
                    // Src: (ld:i64 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32):$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 10
                    // Dst: (S_LOAD_DWORDX2_SGPR:i64 ?:i64:$sbase, (S_MOV_B32:i32 (imm:i32):$offset))
                  0, // EndSwitchType
/*13887*/       0, /*End of Scope*/
/*13888*/     /*Scope*/ 59|128,3/*443*/, /*->14333*/
/*13890*/       OPC_CheckType, MVT::i64,
/*13892*/       OPC_MoveParent,
/*13893*/       OPC_CheckPredicate, 10, // Predicate_unindexedload
/*13895*/       OPC_Scope, 62, /*->13959*/ // 6 children in Scope
/*13897*/         OPC_CheckPredicate, 24, // Predicate_sextload
/*13899*/         OPC_CheckPredicate, 25, // Predicate_sextloadi8
/*13901*/         OPC_CheckType, MVT::i32,
/*13903*/         OPC_Scope, 26, /*->13931*/ // 2 children in Scope
/*13905*/           OPC_CheckPredicate, 26, // Predicate_sextloadi8_global
/*13907*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13909*/           OPC_EmitMergeInputChains1_0,
/*13910*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*13918*/           OPC_EmitInteger, MVT::i16, 0, 
/*13921*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_SBYTE_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>><<P:Predicate_sextloadi8_global>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_SBYTE_ADDR64:i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*13931*/         /*Scope*/ 26, /*->13958*/
/*13932*/           OPC_CheckPredicate, 31, // Predicate_sextloadi8_constant
/*13934*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13936*/           OPC_EmitMergeInputChains1_0,
/*13937*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*13945*/           OPC_EmitInteger, MVT::i16, 0, 
/*13948*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_SBYTE_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>><<P:Predicate_sextloadi8_constant>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_SBYTE_ADDR64:i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*13958*/         0, /*End of Scope*/
/*13959*/       /*Scope*/ 62, /*->14022*/
/*13960*/         OPC_CheckPredicate, 11, // Predicate_az_extload
/*13962*/         OPC_CheckPredicate, 12, // Predicate_az_extloadi8
/*13964*/         OPC_CheckType, MVT::i32,
/*13966*/         OPC_Scope, 26, /*->13994*/ // 2 children in Scope
/*13968*/           OPC_CheckPredicate, 18, // Predicate_az_extloadi8_global
/*13970*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13972*/           OPC_EmitMergeInputChains1_0,
/*13973*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*13981*/           OPC_EmitInteger, MVT::i16, 0, 
/*13984*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_UBYTE_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_az_extloadi8_global>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_UBYTE_ADDR64:i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*13994*/         /*Scope*/ 26, /*->14021*/
/*13995*/           OPC_CheckPredicate, 32, // Predicate_az_extloadi8_constant
/*13997*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13999*/           OPC_EmitMergeInputChains1_0,
/*14000*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*14008*/           OPC_EmitInteger, MVT::i16, 0, 
/*14011*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_UBYTE_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_az_extloadi8_constant>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_UBYTE_ADDR64:i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*14021*/         0, /*End of Scope*/
/*14022*/       /*Scope*/ 62, /*->14085*/
/*14023*/         OPC_CheckPredicate, 24, // Predicate_sextload
/*14025*/         OPC_CheckPredicate, 27, // Predicate_sextloadi16
/*14027*/         OPC_CheckType, MVT::i32,
/*14029*/         OPC_Scope, 26, /*->14057*/ // 2 children in Scope
/*14031*/           OPC_CheckPredicate, 28, // Predicate_sextloadi16_global
/*14033*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14035*/           OPC_EmitMergeInputChains1_0,
/*14036*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*14044*/           OPC_EmitInteger, MVT::i16, 0, 
/*14047*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_SSHORT_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_sextloadi16_global>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_SSHORT_ADDR64:i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*14057*/         /*Scope*/ 26, /*->14084*/
/*14058*/           OPC_CheckPredicate, 33, // Predicate_sextloadi16_constant
/*14060*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14062*/           OPC_EmitMergeInputChains1_0,
/*14063*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*14071*/           OPC_EmitInteger, MVT::i16, 0, 
/*14074*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_SSHORT_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_sextloadi16_constant>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_SSHORT_ADDR64:i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*14084*/         0, /*End of Scope*/
/*14085*/       /*Scope*/ 62, /*->14148*/
/*14086*/         OPC_CheckPredicate, 11, // Predicate_az_extload
/*14088*/         OPC_CheckPredicate, 14, // Predicate_az_extloadi16
/*14090*/         OPC_CheckType, MVT::i32,
/*14092*/         OPC_Scope, 26, /*->14120*/ // 2 children in Scope
/*14094*/           OPC_CheckPredicate, 19, // Predicate_az_extloadi16_global
/*14096*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14098*/           OPC_EmitMergeInputChains1_0,
/*14099*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*14107*/           OPC_EmitInteger, MVT::i16, 0, 
/*14110*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_USHORT_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_az_extloadi16_global>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_USHORT_ADDR64:i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*14120*/         /*Scope*/ 26, /*->14147*/
/*14121*/           OPC_CheckPredicate, 34, // Predicate_az_extloadi16_constant
/*14123*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14125*/           OPC_EmitMergeInputChains1_0,
/*14126*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*14134*/           OPC_EmitInteger, MVT::i16, 0, 
/*14137*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_USHORT_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_az_extloadi16_constant>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_USHORT_ADDR64:i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*14147*/         0, /*End of Scope*/
/*14148*/       /*Scope*/ 120, /*->14269*/
/*14149*/         OPC_CheckPredicate, 16, // Predicate_load
/*14151*/         OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->14210
/*14154*/           OPC_Scope, 26, /*->14182*/ // 2 children in Scope
/*14156*/             OPC_CheckPredicate, 20, // Predicate_global_load
/*14158*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14160*/             OPC_EmitMergeInputChains1_0,
/*14161*/             OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                          1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*14169*/             OPC_EmitInteger, MVT::i16, 0, 
/*14172*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORD_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 4, 
                      // Src: (ld:i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 7
                      // Dst: (BUFFER_LOAD_DWORD_ADDR64:i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*14182*/           /*Scope*/ 26, /*->14209*/
/*14183*/             OPC_CheckPredicate, 22, // Predicate_constant_load
/*14185*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14187*/             OPC_EmitMergeInputChains1_0,
/*14188*/             OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                          1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*14196*/             OPC_EmitInteger, MVT::i16, 0, 
/*14199*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORD_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 4, 
                      // Src: (ld:i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 7
                      // Dst: (BUFFER_LOAD_DWORD_ADDR64:i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*14209*/           0, /*End of Scope*/
                  /*SwitchType*/ 56,  MVT::i64,// ->14268
/*14212*/           OPC_Scope, 26, /*->14240*/ // 2 children in Scope
/*14214*/             OPC_CheckPredicate, 20, // Predicate_global_load
/*14216*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14218*/             OPC_EmitMergeInputChains1_0,
/*14219*/             OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                          1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*14227*/             OPC_EmitInteger, MVT::i16, 0, 
/*14230*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX2_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 2, 4, 
                      // Src: (ld:i64 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 7
                      // Dst: (BUFFER_LOAD_DWORDX2_ADDR64:i64 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*14240*/           /*Scope*/ 26, /*->14267*/
/*14241*/             OPC_CheckPredicate, 22, // Predicate_constant_load
/*14243*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14245*/             OPC_EmitMergeInputChains1_0,
/*14246*/             OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                          1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*14254*/             OPC_EmitInteger, MVT::i16, 0, 
/*14257*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX2_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 2, 4, 
                      // Src: (ld:i64 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 7
                      // Dst: (BUFFER_LOAD_DWORDX2_ADDR64:i64 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*14267*/           0, /*End of Scope*/
                  0, // EndSwitchType
/*14269*/       /*Scope*/ 62, /*->14332*/
/*14270*/         OPC_CheckPredicate, 11, // Predicate_az_extload
/*14272*/         OPC_CheckPredicate, 29, // Predicate_az_extloadi32
/*14274*/         OPC_CheckType, MVT::i64,
/*14276*/         OPC_Scope, 26, /*->14304*/ // 2 children in Scope
/*14278*/           OPC_CheckPredicate, 30, // Predicate_az_extloadi32_global
/*14280*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14282*/           OPC_EmitMergeInputChains1_0,
/*14283*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*14291*/           OPC_EmitInteger, MVT::i16, 0, 
/*14294*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX2_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:i64 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi32>><<P:Predicate_az_extloadi32_global>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_DWORDX2_ADDR64:i64 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*14304*/         /*Scope*/ 26, /*->14331*/
/*14305*/           OPC_CheckPredicate, 35, // Predicate_az_extloadi32_constant
/*14307*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14309*/           OPC_EmitMergeInputChains1_0,
/*14310*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*14318*/           OPC_EmitInteger, MVT::i16, 0, 
/*14321*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX2_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:i64 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi32>><<P:Predicate_az_extloadi32_constant>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_DWORDX2_ADDR64:i64 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*14331*/         0, /*End of Scope*/
/*14332*/       0, /*End of Scope*/
/*14333*/     0, /*End of Scope*/
/*14334*/   /*Scope*/ 33|128,3/*417*/, /*->14753*/
/*14336*/     OPC_RecordChild1, // #1 = $sbase
/*14337*/     OPC_Scope, 105|128,2/*361*/, /*->14701*/ // 2 children in Scope
/*14340*/       OPC_CheckChild1Type, MVT::i64,
/*14342*/       OPC_CheckPredicate, 10, // Predicate_unindexedload
/*14344*/       OPC_Scope, 109, /*->14455*/ // 7 children in Scope
/*14346*/         OPC_CheckPredicate, 16, // Predicate_load
/*14348*/         OPC_Scope, 38, /*->14388*/ // 2 children in Scope
/*14350*/           OPC_CheckPredicate, 22, // Predicate_constant_load
/*14352*/           OPC_SwitchType /*2 cases */, 15,  MVT::i32,// ->14370
/*14355*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14357*/             OPC_EmitMergeInputChains1_0,
/*14358*/             OPC_EmitInteger, MVT::i32, 0, 
/*14361*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORD_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                      // Src: (ld:i32 i64:i64:$sbase)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 4
                      // Dst: (S_LOAD_DWORD_IMM:i32 ?:i64:$sbase, 0:i32)
                    /*SwitchType*/ 15,  MVT::i64,// ->14387
/*14372*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14374*/             OPC_EmitMergeInputChains1_0,
/*14375*/             OPC_EmitInteger, MVT::i32, 0, 
/*14378*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX2_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                      // Src: (ld:i64 i64:i64:$sbase)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 4
                      // Dst: (S_LOAD_DWORDX2_IMM:i64 ?:i64:$sbase, 0:i32)
                    0, // EndSwitchType
/*14388*/         /*Scope*/ 65, /*->14454*/
/*14389*/           OPC_CheckPredicate, 36, // Predicate_local_load
/*14391*/           OPC_CheckType, MVT::i32,
/*14393*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14395*/           OPC_EmitMergeInputChains1_0,
/*14396*/           OPC_EmitInteger, MVT::i1, 0, 
/*14399*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*14402*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3,  // Results = #4
/*14411*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*14414*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 5,  // Results = #6
/*14423*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*14426*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 7,  // Results = #8
/*14435*/           OPC_EmitInteger, MVT::i8, 0, 
/*14438*/           OPC_EmitInteger, MVT::i8, 0, 
/*14441*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::DS_READ_B32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 6/*#Ops*/, 2, 4, 6, 8, 9, 10, 
                    // Src: (ld:i32 i64:i64:$src0)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_local_load>> - Complexity = 4
                    // Dst: (DS_READ_B32:i32 0:i1, (EXTRACT_SUBREG:i32 ?:i64:$src0, sub0:i32), (EXTRACT_SUBREG:i32 ?:i64:$src0, sub0:i32), (EXTRACT_SUBREG:i32 ?:i64:$src0, sub0:i32), 0:i8, 0:i8)
/*14454*/         0, /*End of Scope*/
/*14455*/       /*Scope*/ 35, /*->14491*/
/*14456*/         OPC_CheckPredicate, 24, // Predicate_sextload
/*14458*/         OPC_CheckPredicate, 25, // Predicate_sextloadi8
/*14460*/         OPC_CheckPredicate, 26, // Predicate_sextloadi8_global
/*14462*/         OPC_CheckType, MVT::i32,
/*14464*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14466*/         OPC_EmitMergeInputChains1_0,
/*14467*/         OPC_EmitInteger, MVT::i64, 0, 
/*14470*/         OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #3
/*14478*/         OPC_EmitInteger, MVT::i16, 0, 
/*14481*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_SBYTE_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (ld:i32 i64:i64:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>><<P:Predicate_sextloadi8_global>> - Complexity = 4
                  // Dst: (BUFFER_LOAD_SBYTE_ADDR64:i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
/*14491*/       /*Scope*/ 35, /*->14527*/
/*14492*/         OPC_CheckPredicate, 11, // Predicate_az_extload
/*14494*/         OPC_CheckPredicate, 12, // Predicate_az_extloadi8
/*14496*/         OPC_CheckPredicate, 18, // Predicate_az_extloadi8_global
/*14498*/         OPC_CheckType, MVT::i32,
/*14500*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14502*/         OPC_EmitMergeInputChains1_0,
/*14503*/         OPC_EmitInteger, MVT::i64, 0, 
/*14506*/         OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #3
/*14514*/         OPC_EmitInteger, MVT::i16, 0, 
/*14517*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_UBYTE_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (ld:i32 i64:i64:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_az_extloadi8_global>> - Complexity = 4
                  // Dst: (BUFFER_LOAD_UBYTE_ADDR64:i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
/*14527*/       /*Scope*/ 35, /*->14563*/
/*14528*/         OPC_CheckPredicate, 24, // Predicate_sextload
/*14530*/         OPC_CheckPredicate, 27, // Predicate_sextloadi16
/*14532*/         OPC_CheckPredicate, 28, // Predicate_sextloadi16_global
/*14534*/         OPC_CheckType, MVT::i32,
/*14536*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14538*/         OPC_EmitMergeInputChains1_0,
/*14539*/         OPC_EmitInteger, MVT::i64, 0, 
/*14542*/         OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #3
/*14550*/         OPC_EmitInteger, MVT::i16, 0, 
/*14553*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_SSHORT_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (ld:i32 i64:i64:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_sextloadi16_global>> - Complexity = 4
                  // Dst: (BUFFER_LOAD_SSHORT_ADDR64:i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
/*14563*/       /*Scope*/ 35, /*->14599*/
/*14564*/         OPC_CheckPredicate, 11, // Predicate_az_extload
/*14566*/         OPC_CheckPredicate, 14, // Predicate_az_extloadi16
/*14568*/         OPC_CheckPredicate, 19, // Predicate_az_extloadi16_global
/*14570*/         OPC_CheckType, MVT::i32,
/*14572*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14574*/         OPC_EmitMergeInputChains1_0,
/*14575*/         OPC_EmitInteger, MVT::i64, 0, 
/*14578*/         OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #3
/*14586*/         OPC_EmitInteger, MVT::i16, 0, 
/*14589*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_USHORT_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (ld:i32 i64:i64:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_az_extloadi16_global>> - Complexity = 4
                  // Dst: (BUFFER_LOAD_USHORT_ADDR64:i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
/*14599*/       /*Scope*/ 64, /*->14664*/
/*14600*/         OPC_CheckPredicate, 16, // Predicate_load
/*14602*/         OPC_CheckPredicate, 20, // Predicate_global_load
/*14604*/         OPC_SwitchType /*2 cases */, 27,  MVT::i32,// ->14634
/*14607*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14609*/           OPC_EmitMergeInputChains1_0,
/*14610*/           OPC_EmitInteger, MVT::i64, 0, 
/*14613*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #3
/*14621*/           OPC_EmitInteger, MVT::i16, 0, 
/*14624*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORD_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                    // Src: (ld:i32 i64:i64:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 4
                    // Dst: (BUFFER_LOAD_DWORD_ADDR64:i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
                  /*SwitchType*/ 27,  MVT::i64,// ->14663
/*14636*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14638*/           OPC_EmitMergeInputChains1_0,
/*14639*/           OPC_EmitInteger, MVT::i64, 0, 
/*14642*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #3
/*14650*/           OPC_EmitInteger, MVT::i16, 0, 
/*14653*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX2_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 1, 4, 
                    // Src: (ld:i64 i64:i64:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 4
                    // Dst: (BUFFER_LOAD_DWORDX2_ADDR64:i64 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
                  0, // EndSwitchType
/*14664*/       /*Scope*/ 35, /*->14700*/
/*14665*/         OPC_CheckPredicate, 11, // Predicate_az_extload
/*14667*/         OPC_CheckPredicate, 29, // Predicate_az_extloadi32
/*14669*/         OPC_CheckPredicate, 30, // Predicate_az_extloadi32_global
/*14671*/         OPC_CheckType, MVT::i64,
/*14673*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14675*/         OPC_EmitMergeInputChains1_0,
/*14676*/         OPC_EmitInteger, MVT::i64, 0, 
/*14679*/         OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #3
/*14687*/         OPC_EmitInteger, MVT::i16, 0, 
/*14690*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX2_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (ld:i64 i64:i64:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi32>><<P:Predicate_az_extloadi32_global>> - Complexity = 4
                  // Dst: (BUFFER_LOAD_DWORDX2_ADDR64:i64 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
/*14700*/       0, /*End of Scope*/
/*14701*/     /*Scope*/ 50, /*->14752*/
/*14702*/       OPC_CheckChild1Type, MVT::i32,
/*14704*/       OPC_CheckPredicate, 10, // Predicate_unindexedload
/*14706*/       OPC_CheckPredicate, 16, // Predicate_load
/*14708*/       OPC_CheckPredicate, 36, // Predicate_local_load
/*14710*/       OPC_CheckType, MVT::i32,
/*14712*/       OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*14714*/       OPC_EmitMergeInputChains1_0,
/*14715*/       OPC_EmitInteger, MVT::i32, 0, 
/*14718*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*14730*/       OPC_EmitInteger, MVT::i32, 1, 
/*14733*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*14736*/       OPC_EmitInteger, MVT::i32, 0, 
/*14739*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LDS_READ_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 2, 3, 4, 5, 6, 
                // Src: (ld:i32 R600_Reg32:i32:$src0)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_local_load>> - Complexity = 4
                // Dst: (LDS_READ_RET:i32 R600_Reg32:i32:$src0)
/*14752*/     0, /*End of Scope*/
/*14753*/   /*Scope*/ 77, /*->14831*/
/*14754*/     OPC_MoveChild, 1,
/*14756*/     OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*14759*/     OPC_RecordChild0, // #1 = $sbase
/*14760*/     OPC_RecordChild1, // #2 = $offset
/*14761*/     OPC_MoveChild, 1,
/*14763*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14766*/     OPC_Scope, 29, /*->14797*/ // 2 children in Scope
/*14768*/       OPC_CheckPredicate, 21, // Predicate_IMM8bitDWORD
/*14770*/       OPC_MoveParent,
/*14771*/       OPC_MoveParent,
/*14772*/       OPC_CheckPredicate, 10, // Predicate_unindexedload
/*14774*/       OPC_CheckPredicate, 16, // Predicate_load
/*14776*/       OPC_CheckPredicate, 22, // Predicate_constant_load
/*14778*/       OPC_CheckType, MVT::f32,
/*14780*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14782*/       OPC_EmitMergeInputChains1_0,
/*14783*/       OPC_EmitConvertToTarget, 2,
/*14785*/       OPC_EmitNodeXForm, 0, 3, // anonymous.val.378
/*14788*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORD_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 4, 
                // Src: (ld:f32 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32)<<P:Predicate_IMM8bitDWORD>><<X:anonymous.val.378>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 11
                // Dst: (S_LOAD_DWORD_IMM:f32 ?:i64:$sbase, (anonymous.val.378:i32 (imm:i32)<<P:Predicate_IMM8bitDWORD>>:$offset))
/*14797*/     /*Scope*/ 32, /*->14830*/
/*14798*/       OPC_MoveParent,
/*14799*/       OPC_MoveParent,
/*14800*/       OPC_CheckPredicate, 10, // Predicate_unindexedload
/*14802*/       OPC_CheckPredicate, 16, // Predicate_load
/*14804*/       OPC_CheckPredicate, 22, // Predicate_constant_load
/*14806*/       OPC_CheckType, MVT::f32,
/*14808*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14810*/       OPC_EmitMergeInputChains1_0,
/*14811*/       OPC_EmitConvertToTarget, 2,
/*14813*/       OPC_EmitNode, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*14821*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORD_SGPR), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 4, 
                // Src: (ld:f32 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32):$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 10
                // Dst: (S_LOAD_DWORD_SGPR:f32 ?:i64:$sbase, (S_MOV_B32:i32 (imm:i32):$offset))
/*14830*/     0, /*End of Scope*/
/*14831*/   /*Scope*/ 67|128,1/*195*/, /*->15028*/
/*14833*/     OPC_RecordChild1, // #1 = $sbase
/*14834*/     OPC_Scope, 25, /*->14861*/ // 2 children in Scope
/*14836*/       OPC_CheckChild1Type, MVT::i64,
/*14838*/       OPC_CheckPredicate, 10, // Predicate_unindexedload
/*14840*/       OPC_CheckPredicate, 16, // Predicate_load
/*14842*/       OPC_CheckPredicate, 22, // Predicate_constant_load
/*14844*/       OPC_CheckType, MVT::f32,
/*14846*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14848*/       OPC_EmitMergeInputChains1_0,
/*14849*/       OPC_EmitInteger, MVT::i32, 0, 
/*14852*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORD_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 2, 
                // Src: (ld:f32 i64:i64:$sbase)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 4
                // Dst: (S_LOAD_DWORD_IMM:f32 ?:i64:$sbase, 0:i32)
/*14861*/     /*Scope*/ 36|128,1/*164*/, /*->15027*/
/*14863*/       OPC_CheckChild1Type, MVT::i32,
/*14865*/       OPC_CheckPredicate, 10, // Predicate_unindexedload
/*14867*/       OPC_CheckPredicate, 16, // Predicate_load
/*14869*/       OPC_Scope, 38, /*->14909*/ // 4 children in Scope
/*14871*/         OPC_CheckPredicate, 17, // Predicate_load_param
/*14873*/         OPC_SwitchType /*2 cases */, 15,  MVT::v2i32,// ->14891
/*14876*/           OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*14878*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*14881*/           OPC_EmitMergeInputChains1_0,
/*14882*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_PARAM_64_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v2i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:v2i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_param>> - Complexity = 13
                    // Dst: (VTX_READ_PARAM_64_eg:v2i32 ADDRVTX_READ:i32:$src_gpr)
                  /*SwitchType*/ 15,  MVT::v4i32,// ->14908
/*14893*/           OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*14895*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*14898*/           OPC_EmitMergeInputChains1_0,
/*14899*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_PARAM_128_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:v4i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_param>> - Complexity = 13
                    // Dst: (VTX_READ_PARAM_128_eg:v4i32 ADDRVTX_READ:i32:$src_gpr)
                  0, // EndSwitchType
/*14909*/       /*Scope*/ 38, /*->14948*/
/*14910*/         OPC_CheckPredicate, 20, // Predicate_global_load
/*14912*/         OPC_SwitchType /*2 cases */, 15,  MVT::v2i32,// ->14930
/*14915*/           OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*14917*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*14920*/           OPC_EmitMergeInputChains1_0,
/*14921*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_GLOBAL_64_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v2i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:v2i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 13
                    // Dst: (VTX_READ_GLOBAL_64_eg:v2i32 ADDRVTX_READ:i32:$src_gpr)
                  /*SwitchType*/ 15,  MVT::v4i32,// ->14947
/*14932*/           OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*14934*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*14937*/           OPC_EmitMergeInputChains1_0,
/*14938*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_GLOBAL_128_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:v4i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 13
                    // Dst: (VTX_READ_GLOBAL_128_eg:v4i32 ADDRVTX_READ:i32:$src_gpr)
                  0, // EndSwitchType
/*14948*/       /*Scope*/ 38, /*->14987*/
/*14949*/         OPC_CheckPredicate, 17, // Predicate_load_param
/*14951*/         OPC_SwitchType /*2 cases */, 15,  MVT::v2i32,// ->14969
/*14954*/           OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*14956*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*14959*/           OPC_EmitMergeInputChains1_0,
/*14960*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_PARAM_64_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v2i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:v2i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_param>> - Complexity = 13
                    // Dst: (VTX_READ_PARAM_64_cm:v2i32 ADDRVTX_READ:i32:$src_gpr)
                  /*SwitchType*/ 15,  MVT::v4i32,// ->14986
/*14971*/           OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*14973*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*14976*/           OPC_EmitMergeInputChains1_0,
/*14977*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_PARAM_128_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:v4i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_param>> - Complexity = 13
                    // Dst: (VTX_READ_PARAM_128_cm:v4i32 ADDRVTX_READ:i32:$src_gpr)
                  0, // EndSwitchType
/*14987*/       /*Scope*/ 38, /*->15026*/
/*14988*/         OPC_CheckPredicate, 20, // Predicate_global_load
/*14990*/         OPC_SwitchType /*2 cases */, 15,  MVT::v2i32,// ->15008
/*14993*/           OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*14995*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*14998*/           OPC_EmitMergeInputChains1_0,
/*14999*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_GLOBAL_64_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v2i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:v2i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 13
                    // Dst: (VTX_READ_GLOBAL_64_cm:v2i32 ADDRVTX_READ:i32:$src_gpr)
                  /*SwitchType*/ 15,  MVT::v4i32,// ->15025
/*15010*/           OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*15012*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*15015*/           OPC_EmitMergeInputChains1_0,
/*15016*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_GLOBAL_128_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:v4i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 13
                    // Dst: (VTX_READ_GLOBAL_128_cm:v4i32 ADDRVTX_READ:i32:$src_gpr)
                  0, // EndSwitchType
/*15026*/       0, /*End of Scope*/
/*15027*/     0, /*End of Scope*/
/*15028*/   /*Scope*/ 114|128,2/*370*/, /*->15400*/
/*15030*/     OPC_MoveChild, 1,
/*15032*/     OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*15035*/     OPC_RecordChild0, // #1 = $sbase
/*15036*/     OPC_RecordChild1, // #2 = $offset
/*15037*/     OPC_Scope, 105|128,1/*233*/, /*->15273*/ // 2 children in Scope
/*15040*/       OPC_MoveChild, 1,
/*15042*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15045*/       OPC_Scope, 69, /*->15116*/ // 3 children in Scope
/*15047*/         OPC_CheckPredicate, 21, // Predicate_IMM8bitDWORD
/*15049*/         OPC_MoveParent,
/*15050*/         OPC_MoveParent,
/*15051*/         OPC_CheckPredicate, 10, // Predicate_unindexedload
/*15053*/         OPC_CheckPredicate, 16, // Predicate_load
/*15055*/         OPC_CheckPredicate, 22, // Predicate_constant_load
/*15057*/         OPC_SwitchType /*3 cases */, 17,  MVT::v2i32,// ->15077
/*15060*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15062*/           OPC_EmitMergeInputChains1_0,
/*15063*/           OPC_EmitConvertToTarget, 2,
/*15065*/           OPC_EmitNodeXForm, 0, 3, // anonymous.val.378
/*15068*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX2_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v2i32, 2/*#Ops*/, 1, 4, 
                    // Src: (ld:v2i32 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32)<<P:Predicate_IMM8bitDWORD>><<X:anonymous.val.378>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 11
                    // Dst: (S_LOAD_DWORDX2_IMM:v2i32 ?:i64:$sbase, (anonymous.val.378:i32 (imm:i32)<<P:Predicate_IMM8bitDWORD>>:$offset))
                  /*SwitchType*/ 17,  MVT::v16i8,// ->15096
/*15079*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15081*/           OPC_EmitMergeInputChains1_0,
/*15082*/           OPC_EmitConvertToTarget, 2,
/*15084*/           OPC_EmitNodeXForm, 0, 3, // anonymous.val.378
/*15087*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX4_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 1, 4, 
                    // Src: (ld:v16i8 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32)<<P:Predicate_IMM8bitDWORD>><<X:anonymous.val.378>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 11
                    // Dst: (S_LOAD_DWORDX4_IMM:v16i8 ?:i64:$sbase, (anonymous.val.378:i32 (imm:i32)<<P:Predicate_IMM8bitDWORD>>:$offset))
                  /*SwitchType*/ 17,  MVT::v32i8,// ->15115
/*15098*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15100*/           OPC_EmitMergeInputChains1_0,
/*15101*/           OPC_EmitConvertToTarget, 2,
/*15103*/           OPC_EmitNodeXForm, 0, 3, // anonymous.val.378
/*15106*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX8_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v32i8, 2/*#Ops*/, 1, 4, 
                    // Src: (ld:v32i8 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32)<<P:Predicate_IMM8bitDWORD>><<X:anonymous.val.378>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 11
                    // Dst: (S_LOAD_DWORDX8_IMM:v32i8 ?:i64:$sbase, (anonymous.val.378:i32 (imm:i32)<<P:Predicate_IMM8bitDWORD>>:$offset))
                  0, // EndSwitchType
/*15116*/       /*Scope*/ 72, /*->15189*/
/*15117*/         OPC_CheckPredicate, 23, // Predicate_IMM12bit
/*15119*/         OPC_MoveParent,
/*15120*/         OPC_CheckType, MVT::i64,
/*15122*/         OPC_MoveParent,
/*15123*/         OPC_CheckPredicate, 10, // Predicate_unindexedload
/*15125*/         OPC_CheckPredicate, 16, // Predicate_load
/*15127*/         OPC_CheckPredicate, 20, // Predicate_global_load
/*15129*/         OPC_SwitchType /*2 cases */, 27,  MVT::v2i32,// ->15159
/*15132*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15134*/           OPC_EmitMergeInputChains1_0,
/*15135*/           OPC_EmitInteger, MVT::i64, 0, 
/*15138*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*15146*/           OPC_EmitNodeXForm, 1, 2, // as_i16imm
/*15149*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX2_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 4, 1, 5, 
                    // Src: (ld:v2i32 (add:i64 i64:i64:$ptr, (imm:i64)<<P:Predicate_IMM12bit>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 11
                    // Dst: (BUFFER_LOAD_DWORDX2_ADDR64:v2i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, (as_i16imm:i16 ?:i64:$offset))
                  /*SwitchType*/ 27,  MVT::v4i32,// ->15188
/*15161*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15163*/           OPC_EmitMergeInputChains1_0,
/*15164*/           OPC_EmitInteger, MVT::i64, 0, 
/*15167*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*15175*/           OPC_EmitNodeXForm, 1, 2, // as_i16imm
/*15178*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX4_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 4, 1, 5, 
                    // Src: (ld:v4i32 (add:i64 i64:i64:$ptr, (imm:i64)<<P:Predicate_IMM12bit>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 11
                    // Dst: (BUFFER_LOAD_DWORDX4_ADDR64:v4i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, (as_i16imm:i16 ?:i64:$offset))
                  0, // EndSwitchType
/*15189*/       /*Scope*/ 82, /*->15272*/
/*15190*/         OPC_MoveParent,
/*15191*/         OPC_MoveParent,
/*15192*/         OPC_CheckPredicate, 10, // Predicate_unindexedload
/*15194*/         OPC_CheckPredicate, 16, // Predicate_load
/*15196*/         OPC_CheckPredicate, 22, // Predicate_constant_load
/*15198*/         OPC_SwitchType /*3 cases */, 22,  MVT::v2i32,// ->15223
/*15201*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15203*/           OPC_EmitMergeInputChains1_0,
/*15204*/           OPC_EmitConvertToTarget, 2,
/*15206*/           OPC_EmitNode, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*15214*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX2_SGPR), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v2i32, 2/*#Ops*/, 1, 4, 
                    // Src: (ld:v2i32 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32):$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 10
                    // Dst: (S_LOAD_DWORDX2_SGPR:v2i32 ?:i64:$sbase, (S_MOV_B32:i32 (imm:i32):$offset))
                  /*SwitchType*/ 22,  MVT::v16i8,// ->15247
/*15225*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15227*/           OPC_EmitMergeInputChains1_0,
/*15228*/           OPC_EmitConvertToTarget, 2,
/*15230*/           OPC_EmitNode, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*15238*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX4_SGPR), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 1, 4, 
                    // Src: (ld:v16i8 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32):$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 10
                    // Dst: (S_LOAD_DWORDX4_SGPR:v16i8 ?:i64:$sbase, (S_MOV_B32:i32 (imm:i32):$offset))
                  /*SwitchType*/ 22,  MVT::v32i8,// ->15271
/*15249*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15251*/           OPC_EmitMergeInputChains1_0,
/*15252*/           OPC_EmitConvertToTarget, 2,
/*15254*/           OPC_EmitNode, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*15262*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX8_SGPR), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v32i8, 2/*#Ops*/, 1, 4, 
                    // Src: (ld:v32i8 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32):$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 10
                    // Dst: (S_LOAD_DWORDX8_SGPR:v32i8 ?:i64:$sbase, (S_MOV_B32:i32 (imm:i32):$offset))
                  0, // EndSwitchType
/*15272*/       0, /*End of Scope*/
/*15273*/     /*Scope*/ 125, /*->15399*/
/*15274*/       OPC_CheckType, MVT::i64,
/*15276*/       OPC_MoveParent,
/*15277*/       OPC_CheckPredicate, 10, // Predicate_unindexedload
/*15279*/       OPC_CheckPredicate, 16, // Predicate_load
/*15281*/       OPC_SwitchType /*2 cases */, 56,  MVT::v2i32,// ->15340
/*15284*/         OPC_Scope, 26, /*->15312*/ // 2 children in Scope
/*15286*/           OPC_CheckPredicate, 20, // Predicate_global_load
/*15288*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15290*/           OPC_EmitMergeInputChains1_0,
/*15291*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*15299*/           OPC_EmitInteger, MVT::i16, 0, 
/*15302*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX2_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:v2i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_DWORDX2_ADDR64:v2i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*15312*/         /*Scope*/ 26, /*->15339*/
/*15313*/           OPC_CheckPredicate, 22, // Predicate_constant_load
/*15315*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15317*/           OPC_EmitMergeInputChains1_0,
/*15318*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*15326*/           OPC_EmitInteger, MVT::i16, 0, 
/*15329*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX2_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:v2i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_DWORDX2_ADDR64:v2i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*15339*/         0, /*End of Scope*/
                /*SwitchType*/ 56,  MVT::v4i32,// ->15398
/*15342*/         OPC_Scope, 26, /*->15370*/ // 2 children in Scope
/*15344*/           OPC_CheckPredicate, 20, // Predicate_global_load
/*15346*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15348*/           OPC_EmitMergeInputChains1_0,
/*15349*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*15357*/           OPC_EmitInteger, MVT::i16, 0, 
/*15360*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX4_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:v4i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_DWORDX4_ADDR64:v4i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*15370*/         /*Scope*/ 26, /*->15397*/
/*15371*/           OPC_CheckPredicate, 22, // Predicate_constant_load
/*15373*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15375*/           OPC_EmitMergeInputChains1_0,
/*15376*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*15384*/           OPC_EmitInteger, MVT::i16, 0, 
/*15387*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX4_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:v4i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_DWORDX4_ADDR64:v4i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*15397*/         0, /*End of Scope*/
                0, // EndSwitchType
/*15399*/     0, /*End of Scope*/
/*15400*/   /*Scope*/ 0|128,1/*128*/, /*->15530*/
/*15402*/     OPC_RecordChild1, // #1 = $sbase
/*15403*/     OPC_CheckChild1Type, MVT::i64,
/*15405*/     OPC_CheckPredicate, 10, // Predicate_unindexedload
/*15407*/     OPC_CheckPredicate, 16, // Predicate_load
/*15409*/     OPC_Scope, 55, /*->15466*/ // 2 children in Scope
/*15411*/       OPC_CheckPredicate, 22, // Predicate_constant_load
/*15413*/       OPC_SwitchType /*3 cases */, 15,  MVT::v2i32,// ->15431
/*15416*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15418*/         OPC_EmitMergeInputChains1_0,
/*15419*/         OPC_EmitInteger, MVT::i32, 0, 
/*15422*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX2_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::v2i32, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:v2i32 i64:i64:$sbase)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 4
                  // Dst: (S_LOAD_DWORDX2_IMM:v2i32 ?:i64:$sbase, 0:i32)
                /*SwitchType*/ 15,  MVT::v16i8,// ->15448
/*15433*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15435*/         OPC_EmitMergeInputChains1_0,
/*15436*/         OPC_EmitInteger, MVT::i32, 0, 
/*15439*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX4_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:v16i8 i64:i64:$sbase)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 4
                  // Dst: (S_LOAD_DWORDX4_IMM:v16i8 ?:i64:$sbase, 0:i32)
                /*SwitchType*/ 15,  MVT::v32i8,// ->15465
/*15450*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15452*/         OPC_EmitMergeInputChains1_0,
/*15453*/         OPC_EmitInteger, MVT::i32, 0, 
/*15456*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX8_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::v32i8, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:v32i8 i64:i64:$sbase)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 4
                  // Dst: (S_LOAD_DWORDX8_IMM:v32i8 ?:i64:$sbase, 0:i32)
                0, // EndSwitchType
/*15466*/     /*Scope*/ 62, /*->15529*/
/*15467*/       OPC_CheckPredicate, 20, // Predicate_global_load
/*15469*/       OPC_SwitchType /*2 cases */, 27,  MVT::v2i32,// ->15499
/*15472*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15474*/         OPC_EmitMergeInputChains1_0,
/*15475*/         OPC_EmitInteger, MVT::i64, 0, 
/*15478*/         OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #3
/*15486*/         OPC_EmitInteger, MVT::i16, 0, 
/*15489*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX2_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (ld:v2i32 i64:i64:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 4
                  // Dst: (BUFFER_LOAD_DWORDX2_ADDR64:v2i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
                /*SwitchType*/ 27,  MVT::v4i32,// ->15528
/*15501*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15503*/         OPC_EmitMergeInputChains1_0,
/*15504*/         OPC_EmitInteger, MVT::i64, 0, 
/*15507*/         OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #3
/*15515*/         OPC_EmitInteger, MVT::i16, 0, 
/*15518*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX4_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (ld:v4i32 i64:i64:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 4
                  // Dst: (BUFFER_LOAD_DWORDX4_ADDR64:v4i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
                0, // EndSwitchType
/*15529*/     0, /*End of Scope*/
/*15530*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 86|128,11/*1494*/,  TARGET_VAL(ISD::XOR),// ->17029
/*15535*/   OPC_Scope, 32|128,2/*288*/, /*->15826*/ // 5 children in Scope
/*15538*/     OPC_RecordChild0, // #0 = $z
/*15539*/     OPC_MoveChild, 1,
/*15541*/     OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*15544*/     OPC_Scope, 62|128,1/*190*/, /*->15737*/ // 2 children in Scope
/*15547*/       OPC_RecordChild0, // #1 = $x
/*15548*/       OPC_MoveChild, 1,
/*15550*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*15553*/       OPC_Scope, 13|128,1/*141*/, /*->15697*/ // 2 children in Scope
/*15556*/         OPC_RecordChild0, // #2 = $y
/*15557*/         OPC_MoveChild, 1,
/*15559*/         OPC_CheckSame, 0,
/*15561*/         OPC_MoveParent,
/*15562*/         OPC_MoveParent,
/*15563*/         OPC_MoveParent,
/*15564*/         OPC_CheckType, MVT::i32,
/*15566*/         OPC_Scope, 99, /*->15667*/ // 2 children in Scope
/*15568*/           OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*15570*/           OPC_EmitInteger, MVT::i32, 0, 
/*15573*/           OPC_EmitInteger, MVT::i32, 0, 
/*15576*/           OPC_EmitInteger, MVT::i32, 0, 
/*15579*/           OPC_EmitInteger, MVT::i32, 0, 
/*15582*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*15594*/           OPC_EmitInteger, MVT::i32, 0, 
/*15597*/           OPC_EmitInteger, MVT::i32, 0, 
/*15600*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*15612*/           OPC_EmitInteger, MVT::i32, 0, 
/*15615*/           OPC_EmitInteger, MVT::i32, 0, 
/*15618*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*15630*/           OPC_EmitInteger, MVT::i32, 1, 
/*15633*/           OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*15636*/           OPC_EmitInteger, MVT::i32, 0, 
/*15639*/           OPC_EmitInteger, MVT::i32, 0, 
/*15642*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (xor:i32 i32:i32:$z, (and:i32 i32:i32:$x, (xor:i32 i32:i32:$y, i32:i32:$z))) - Complexity = 9
                    // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*15667*/         /*Scope*/ 28, /*->15696*/
/*15668*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15670*/           OPC_EmitInteger, MVT::i32, 0, 
/*15673*/           OPC_EmitInteger, MVT::i32, 0, 
/*15676*/           OPC_EmitInteger, MVT::i32, 0, 
/*15679*/           OPC_EmitInteger, MVT::i32, 0, 
/*15682*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 1, 2, 0, 3, 4, 5, 6, 
                    // Src: (xor:i32 i32:i32:$z, (and:i32 i32:i32:$x, (xor:i32 i32:i32:$y, i32:i32:$z))) - Complexity = 9
                    // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*15696*/         0, /*End of Scope*/
/*15697*/       /*Scope*/ 38, /*->15736*/
/*15698*/         OPC_MoveChild, 0,
/*15700*/         OPC_CheckSame, 0,
/*15702*/         OPC_MoveParent,
/*15703*/         OPC_RecordChild1, // #2 = $y
/*15704*/         OPC_MoveParent,
/*15705*/         OPC_MoveParent,
/*15706*/         OPC_CheckType, MVT::i32,
/*15708*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15710*/         OPC_EmitInteger, MVT::i32, 0, 
/*15713*/         OPC_EmitInteger, MVT::i32, 0, 
/*15716*/         OPC_EmitInteger, MVT::i32, 0, 
/*15719*/         OPC_EmitInteger, MVT::i32, 0, 
/*15722*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 1, 2, 0, 3, 4, 5, 6, 
                  // Src: (xor:i32 i32:i32:$z, (and:i32 i32:i32:$x, (xor:i32 i32:i32:$z, i32:i32:$y))) - Complexity = 9
                  // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*15736*/       0, /*End of Scope*/
/*15737*/     /*Scope*/ 87, /*->15825*/
/*15738*/       OPC_MoveChild, 0,
/*15740*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*15743*/       OPC_Scope, 39, /*->15784*/ // 2 children in Scope
/*15745*/         OPC_RecordChild0, // #1 = $y
/*15746*/         OPC_MoveChild, 1,
/*15748*/         OPC_CheckSame, 0,
/*15750*/         OPC_MoveParent,
/*15751*/         OPC_MoveParent,
/*15752*/         OPC_RecordChild1, // #2 = $x
/*15753*/         OPC_MoveParent,
/*15754*/         OPC_CheckType, MVT::i32,
/*15756*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15758*/         OPC_EmitInteger, MVT::i32, 0, 
/*15761*/         OPC_EmitInteger, MVT::i32, 0, 
/*15764*/         OPC_EmitInteger, MVT::i32, 0, 
/*15767*/         OPC_EmitInteger, MVT::i32, 0, 
/*15770*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 2, 1, 0, 3, 4, 5, 6, 
                  // Src: (xor:i32 i32:i32:$z, (and:i32 (xor:i32 i32:i32:$y, i32:i32:$z), i32:i32:$x)) - Complexity = 9
                  // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*15784*/       /*Scope*/ 39, /*->15824*/
/*15785*/         OPC_MoveChild, 0,
/*15787*/         OPC_CheckSame, 0,
/*15789*/         OPC_MoveParent,
/*15790*/         OPC_RecordChild1, // #1 = $y
/*15791*/         OPC_MoveParent,
/*15792*/         OPC_RecordChild1, // #2 = $x
/*15793*/         OPC_MoveParent,
/*15794*/         OPC_CheckType, MVT::i32,
/*15796*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15798*/         OPC_EmitInteger, MVT::i32, 0, 
/*15801*/         OPC_EmitInteger, MVT::i32, 0, 
/*15804*/         OPC_EmitInteger, MVT::i32, 0, 
/*15807*/         OPC_EmitInteger, MVT::i32, 0, 
/*15810*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 2, 1, 0, 3, 4, 5, 6, 
                  // Src: (xor:i32 i32:i32:$z, (and:i32 (xor:i32 i32:i32:$z, i32:i32:$y), i32:i32:$x)) - Complexity = 9
                  // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*15824*/       0, /*End of Scope*/
/*15825*/     0, /*End of Scope*/
/*15826*/   /*Scope*/ 45|128,1/*173*/, /*->16001*/
/*15828*/     OPC_MoveChild, 0,
/*15830*/     OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*15833*/     OPC_Scope, 82, /*->15917*/ // 2 children in Scope
/*15835*/       OPC_RecordChild0, // #0 = $x
/*15836*/       OPC_MoveChild, 1,
/*15838*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*15841*/       OPC_RecordChild0, // #1 = $y
/*15842*/       OPC_RecordChild1, // #2 = $z
/*15843*/       OPC_MoveParent,
/*15844*/       OPC_MoveParent,
/*15845*/       OPC_MoveChild, 1,
/*15847*/       OPC_Scope, 33, /*->15882*/ // 2 children in Scope
/*15849*/         OPC_CheckSame, 2,
/*15851*/         OPC_MoveParent,
/*15852*/         OPC_CheckType, MVT::i32,
/*15854*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15856*/         OPC_EmitInteger, MVT::i32, 0, 
/*15859*/         OPC_EmitInteger, MVT::i32, 0, 
/*15862*/         OPC_EmitInteger, MVT::i32, 0, 
/*15865*/         OPC_EmitInteger, MVT::i32, 0, 
/*15868*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
                  // Src: (xor:i32 (and:i32 i32:i32:$x, (xor:i32 i32:i32:$y, i32:i32:$z)), i32:i32:$z) - Complexity = 9
                  // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*15882*/       /*Scope*/ 33, /*->15916*/
/*15883*/         OPC_CheckSame, 1,
/*15885*/         OPC_MoveParent,
/*15886*/         OPC_CheckType, MVT::i32,
/*15888*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15890*/         OPC_EmitInteger, MVT::i32, 0, 
/*15893*/         OPC_EmitInteger, MVT::i32, 0, 
/*15896*/         OPC_EmitInteger, MVT::i32, 0, 
/*15899*/         OPC_EmitInteger, MVT::i32, 0, 
/*15902*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 2, 1, 3, 4, 5, 6, 
                  // Src: (xor:i32 (and:i32 i32:i32:$x, (xor:i32 i32:i32:$z, i32:i32:$y)), i32:i32:$z) - Complexity = 9
                  // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*15916*/       0, /*End of Scope*/
/*15917*/     /*Scope*/ 82, /*->16000*/
/*15918*/       OPC_MoveChild, 0,
/*15920*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*15923*/       OPC_RecordChild0, // #0 = $y
/*15924*/       OPC_RecordChild1, // #1 = $z
/*15925*/       OPC_MoveParent,
/*15926*/       OPC_RecordChild1, // #2 = $x
/*15927*/       OPC_MoveParent,
/*15928*/       OPC_MoveChild, 1,
/*15930*/       OPC_Scope, 33, /*->15965*/ // 2 children in Scope
/*15932*/         OPC_CheckSame, 1,
/*15934*/         OPC_MoveParent,
/*15935*/         OPC_CheckType, MVT::i32,
/*15937*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15939*/         OPC_EmitInteger, MVT::i32, 0, 
/*15942*/         OPC_EmitInteger, MVT::i32, 0, 
/*15945*/         OPC_EmitInteger, MVT::i32, 0, 
/*15948*/         OPC_EmitInteger, MVT::i32, 0, 
/*15951*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 2, 0, 1, 3, 4, 5, 6, 
                  // Src: (xor:i32 (and:i32 (xor:i32 i32:i32:$y, i32:i32:$z), i32:i32:$x), i32:i32:$z) - Complexity = 9
                  // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*15965*/       /*Scope*/ 33, /*->15999*/
/*15966*/         OPC_CheckSame, 0,
/*15968*/         OPC_MoveParent,
/*15969*/         OPC_CheckType, MVT::i32,
/*15971*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15973*/         OPC_EmitInteger, MVT::i32, 0, 
/*15976*/         OPC_EmitInteger, MVT::i32, 0, 
/*15979*/         OPC_EmitInteger, MVT::i32, 0, 
/*15982*/         OPC_EmitInteger, MVT::i32, 0, 
/*15985*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 2, 1, 0, 3, 4, 5, 6, 
                  // Src: (xor:i32 (and:i32 (xor:i32 i32:i32:$z, i32:i32:$y), i32:i32:$x), i32:i32:$z) - Complexity = 9
                  // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*15999*/       0, /*End of Scope*/
/*16000*/     0, /*End of Scope*/
/*16001*/   /*Scope*/ 99|128,2/*355*/, /*->16358*/
/*16003*/     OPC_RecordChild0, // #0 = $z
/*16004*/     OPC_MoveChild, 1,
/*16006*/     OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*16009*/     OPC_Scope, 115, /*->16126*/ // 2 children in Scope
/*16011*/       OPC_RecordChild0, // #1 = $x
/*16012*/       OPC_MoveChild, 1,
/*16014*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*16017*/       OPC_MoveChild, 0,
/*16019*/       OPC_CheckSame, 0,
/*16021*/       OPC_MoveParent,
/*16022*/       OPC_RecordChild1, // #2 = $y
/*16023*/       OPC_MoveParent,
/*16024*/       OPC_MoveParent,
/*16025*/       OPC_CheckType, MVT::i32,
/*16027*/       OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*16029*/       OPC_EmitInteger, MVT::i32, 0, 
/*16032*/       OPC_EmitInteger, MVT::i32, 0, 
/*16035*/       OPC_EmitInteger, MVT::i32, 0, 
/*16038*/       OPC_EmitInteger, MVT::i32, 0, 
/*16041*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16053*/       OPC_EmitInteger, MVT::i32, 0, 
/*16056*/       OPC_EmitInteger, MVT::i32, 0, 
/*16059*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16071*/       OPC_EmitInteger, MVT::i32, 0, 
/*16074*/       OPC_EmitInteger, MVT::i32, 0, 
/*16077*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16089*/       OPC_EmitInteger, MVT::i32, 1, 
/*16092*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*16095*/       OPC_EmitInteger, MVT::i32, 0, 
/*16098*/       OPC_EmitInteger, MVT::i32, 0, 
/*16101*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                    1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                // Src: (xor:i32 i32:i32:$z, (and:i32 i32:i32:$x, (xor:i32 i32:i32:$z, i32:i32:$y))) - Complexity = 9
                // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*16126*/     /*Scope*/ 101|128,1/*229*/, /*->16357*/
/*16128*/       OPC_MoveChild, 0,
/*16130*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*16133*/       OPC_Scope, 110, /*->16245*/ // 2 children in Scope
/*16135*/         OPC_RecordChild0, // #1 = $y
/*16136*/         OPC_MoveChild, 1,
/*16138*/         OPC_CheckSame, 0,
/*16140*/         OPC_MoveParent,
/*16141*/         OPC_MoveParent,
/*16142*/         OPC_RecordChild1, // #2 = $x
/*16143*/         OPC_MoveParent,
/*16144*/         OPC_CheckType, MVT::i32,
/*16146*/         OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*16148*/         OPC_EmitInteger, MVT::i32, 0, 
/*16151*/         OPC_EmitInteger, MVT::i32, 0, 
/*16154*/         OPC_EmitInteger, MVT::i32, 0, 
/*16157*/         OPC_EmitInteger, MVT::i32, 0, 
/*16160*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16172*/         OPC_EmitInteger, MVT::i32, 0, 
/*16175*/         OPC_EmitInteger, MVT::i32, 0, 
/*16178*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16190*/         OPC_EmitInteger, MVT::i32, 0, 
/*16193*/         OPC_EmitInteger, MVT::i32, 0, 
/*16196*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16208*/         OPC_EmitInteger, MVT::i32, 1, 
/*16211*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*16214*/         OPC_EmitInteger, MVT::i32, 0, 
/*16217*/         OPC_EmitInteger, MVT::i32, 0, 
/*16220*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 2, 5, 6, 7, 1, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (xor:i32 i32:i32:$z, (and:i32 (xor:i32 i32:i32:$y, i32:i32:$z), i32:i32:$x)) - Complexity = 9
                  // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*16245*/       /*Scope*/ 110, /*->16356*/
/*16246*/         OPC_MoveChild, 0,
/*16248*/         OPC_CheckSame, 0,
/*16250*/         OPC_MoveParent,
/*16251*/         OPC_RecordChild1, // #1 = $y
/*16252*/         OPC_MoveParent,
/*16253*/         OPC_RecordChild1, // #2 = $x
/*16254*/         OPC_MoveParent,
/*16255*/         OPC_CheckType, MVT::i32,
/*16257*/         OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*16259*/         OPC_EmitInteger, MVT::i32, 0, 
/*16262*/         OPC_EmitInteger, MVT::i32, 0, 
/*16265*/         OPC_EmitInteger, MVT::i32, 0, 
/*16268*/         OPC_EmitInteger, MVT::i32, 0, 
/*16271*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16283*/         OPC_EmitInteger, MVT::i32, 0, 
/*16286*/         OPC_EmitInteger, MVT::i32, 0, 
/*16289*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16301*/         OPC_EmitInteger, MVT::i32, 0, 
/*16304*/         OPC_EmitInteger, MVT::i32, 0, 
/*16307*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16319*/         OPC_EmitInteger, MVT::i32, 1, 
/*16322*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*16325*/         OPC_EmitInteger, MVT::i32, 0, 
/*16328*/         OPC_EmitInteger, MVT::i32, 0, 
/*16331*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 2, 5, 6, 7, 1, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (xor:i32 i32:i32:$z, (and:i32 (xor:i32 i32:i32:$z, i32:i32:$y), i32:i32:$x)) - Complexity = 9
                  // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*16356*/       0, /*End of Scope*/
/*16357*/     0, /*End of Scope*/
/*16358*/   /*Scope*/ 75|128,3/*459*/, /*->16819*/
/*16360*/     OPC_MoveChild, 0,
/*16362*/     OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*16365*/     OPC_Scope, 96|128,1/*224*/, /*->16592*/ // 2 children in Scope
/*16368*/       OPC_RecordChild0, // #0 = $x
/*16369*/       OPC_MoveChild, 1,
/*16371*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*16374*/       OPC_RecordChild0, // #1 = $y
/*16375*/       OPC_RecordChild1, // #2 = $z
/*16376*/       OPC_MoveParent,
/*16377*/       OPC_MoveParent,
/*16378*/       OPC_MoveChild, 1,
/*16380*/       OPC_Scope, 104, /*->16486*/ // 2 children in Scope
/*16382*/         OPC_CheckSame, 2,
/*16384*/         OPC_MoveParent,
/*16385*/         OPC_CheckType, MVT::i32,
/*16387*/         OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*16389*/         OPC_EmitInteger, MVT::i32, 0, 
/*16392*/         OPC_EmitInteger, MVT::i32, 0, 
/*16395*/         OPC_EmitInteger, MVT::i32, 0, 
/*16398*/         OPC_EmitInteger, MVT::i32, 0, 
/*16401*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16413*/         OPC_EmitInteger, MVT::i32, 0, 
/*16416*/         OPC_EmitInteger, MVT::i32, 0, 
/*16419*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16431*/         OPC_EmitInteger, MVT::i32, 0, 
/*16434*/         OPC_EmitInteger, MVT::i32, 0, 
/*16437*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16449*/         OPC_EmitInteger, MVT::i32, 1, 
/*16452*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*16455*/         OPC_EmitInteger, MVT::i32, 0, 
/*16458*/         OPC_EmitInteger, MVT::i32, 0, 
/*16461*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (xor:i32 (and:i32 i32:i32:$x, (xor:i32 i32:i32:$y, i32:i32:$z)), i32:i32:$z) - Complexity = 9
                  // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*16486*/       /*Scope*/ 104, /*->16591*/
/*16487*/         OPC_CheckSame, 1,
/*16489*/         OPC_MoveParent,
/*16490*/         OPC_CheckType, MVT::i32,
/*16492*/         OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*16494*/         OPC_EmitInteger, MVT::i32, 0, 
/*16497*/         OPC_EmitInteger, MVT::i32, 0, 
/*16500*/         OPC_EmitInteger, MVT::i32, 0, 
/*16503*/         OPC_EmitInteger, MVT::i32, 0, 
/*16506*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16518*/         OPC_EmitInteger, MVT::i32, 0, 
/*16521*/         OPC_EmitInteger, MVT::i32, 0, 
/*16524*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16536*/         OPC_EmitInteger, MVT::i32, 0, 
/*16539*/         OPC_EmitInteger, MVT::i32, 0, 
/*16542*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16554*/         OPC_EmitInteger, MVT::i32, 1, 
/*16557*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*16560*/         OPC_EmitInteger, MVT::i32, 0, 
/*16563*/         OPC_EmitInteger, MVT::i32, 0, 
/*16566*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 2, 8, 9, 10, 1, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (xor:i32 (and:i32 i32:i32:$x, (xor:i32 i32:i32:$z, i32:i32:$y)), i32:i32:$z) - Complexity = 9
                  // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*16591*/       0, /*End of Scope*/
/*16592*/     /*Scope*/ 96|128,1/*224*/, /*->16818*/
/*16594*/       OPC_MoveChild, 0,
/*16596*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*16599*/       OPC_RecordChild0, // #0 = $y
/*16600*/       OPC_RecordChild1, // #1 = $z
/*16601*/       OPC_MoveParent,
/*16602*/       OPC_RecordChild1, // #2 = $x
/*16603*/       OPC_MoveParent,
/*16604*/       OPC_MoveChild, 1,
/*16606*/       OPC_Scope, 104, /*->16712*/ // 2 children in Scope
/*16608*/         OPC_CheckSame, 1,
/*16610*/         OPC_MoveParent,
/*16611*/         OPC_CheckType, MVT::i32,
/*16613*/         OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*16615*/         OPC_EmitInteger, MVT::i32, 0, 
/*16618*/         OPC_EmitInteger, MVT::i32, 0, 
/*16621*/         OPC_EmitInteger, MVT::i32, 0, 
/*16624*/         OPC_EmitInteger, MVT::i32, 0, 
/*16627*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16639*/         OPC_EmitInteger, MVT::i32, 0, 
/*16642*/         OPC_EmitInteger, MVT::i32, 0, 
/*16645*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16657*/         OPC_EmitInteger, MVT::i32, 0, 
/*16660*/         OPC_EmitInteger, MVT::i32, 0, 
/*16663*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16675*/         OPC_EmitInteger, MVT::i32, 1, 
/*16678*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*16681*/         OPC_EmitInteger, MVT::i32, 0, 
/*16684*/         OPC_EmitInteger, MVT::i32, 0, 
/*16687*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 2, 5, 6, 7, 0, 8, 9, 10, 1, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (xor:i32 (and:i32 (xor:i32 i32:i32:$y, i32:i32:$z), i32:i32:$x), i32:i32:$z) - Complexity = 9
                  // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*16712*/       /*Scope*/ 104, /*->16817*/
/*16713*/         OPC_CheckSame, 0,
/*16715*/         OPC_MoveParent,
/*16716*/         OPC_CheckType, MVT::i32,
/*16718*/         OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*16720*/         OPC_EmitInteger, MVT::i32, 0, 
/*16723*/         OPC_EmitInteger, MVT::i32, 0, 
/*16726*/         OPC_EmitInteger, MVT::i32, 0, 
/*16729*/         OPC_EmitInteger, MVT::i32, 0, 
/*16732*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16744*/         OPC_EmitInteger, MVT::i32, 0, 
/*16747*/         OPC_EmitInteger, MVT::i32, 0, 
/*16750*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16762*/         OPC_EmitInteger, MVT::i32, 0, 
/*16765*/         OPC_EmitInteger, MVT::i32, 0, 
/*16768*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16780*/         OPC_EmitInteger, MVT::i32, 1, 
/*16783*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*16786*/         OPC_EmitInteger, MVT::i32, 0, 
/*16789*/         OPC_EmitInteger, MVT::i32, 0, 
/*16792*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 2, 5, 6, 7, 1, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (xor:i32 (and:i32 (xor:i32 i32:i32:$z, i32:i32:$y), i32:i32:$x), i32:i32:$z) - Complexity = 9
                  // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*16817*/       0, /*End of Scope*/
/*16818*/     0, /*End of Scope*/
/*16819*/   /*Scope*/ 79|128,1/*207*/, /*->17028*/
/*16821*/     OPC_RecordChild0, // #0 = $src0
/*16822*/     OPC_Scope, 83, /*->16907*/ // 2 children in Scope
/*16824*/       OPC_MoveChild, 1,
/*16826*/       OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16837*/       OPC_MoveParent,
/*16838*/       OPC_CheckType, MVT::i32,
/*16840*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*16842*/       OPC_EmitInteger, MVT::i32, 1, 
/*16845*/       OPC_EmitInteger, MVT::i32, 0, 
/*16848*/       OPC_EmitInteger, MVT::i32, 0, 
/*16851*/       OPC_EmitInteger, MVT::i32, 0, 
/*16854*/       OPC_EmitInteger, MVT::i32, 0, 
/*16857*/       OPC_EmitInteger, MVT::i32, 0, 
/*16860*/       OPC_EmitInteger, MVT::i32, 0, 
/*16863*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16875*/       OPC_EmitInteger, MVT::i32, 1, 
/*16878*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*16881*/       OPC_EmitInteger, MVT::i32, 0, 
/*16884*/       OPC_EmitInteger, MVT::i32, 0, 
/*16887*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::NOT_INT), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (xor:i32 R600_Reg32:i32:$src0, -1:i32) - Complexity = 8
                // Dst: (NOT_INT:i32 R600_Reg32:i32:$src0)
/*16907*/     /*Scope*/ 119, /*->17027*/
/*16908*/       OPC_RecordChild1, // #1 = $src1
/*16909*/       OPC_CheckType, MVT::i32,
/*16911*/       OPC_Scope, 101, /*->17014*/ // 2 children in Scope
/*16913*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*16915*/         OPC_EmitInteger, MVT::i32, 0, 
/*16918*/         OPC_EmitInteger, MVT::i32, 0, 
/*16921*/         OPC_EmitInteger, MVT::i32, 1, 
/*16924*/         OPC_EmitInteger, MVT::i32, 0, 
/*16927*/         OPC_EmitInteger, MVT::i32, 0, 
/*16930*/         OPC_EmitInteger, MVT::i32, 0, 
/*16933*/         OPC_EmitInteger, MVT::i32, 0, 
/*16936*/         OPC_EmitInteger, MVT::i32, 0, 
/*16939*/         OPC_EmitInteger, MVT::i32, 0, 
/*16942*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16954*/         OPC_EmitInteger, MVT::i32, 0, 
/*16957*/         OPC_EmitInteger, MVT::i32, 0, 
/*16960*/         OPC_EmitInteger, MVT::i32, 0, 
/*16963*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16975*/         OPC_EmitInteger, MVT::i32, 1, 
/*16978*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*16981*/         OPC_EmitInteger, MVT::i32, 0, 
/*16984*/         OPC_EmitInteger, MVT::i32, 0, 
/*16987*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::XOR_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (xor:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
                  // Dst: (XOR_INT:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*17014*/       /*Scope*/ 11, /*->17026*/
/*17015*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*17017*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
                  // Dst: (V_XOR_B32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*17026*/       0, /*End of Scope*/
/*17027*/     0, /*End of Scope*/
/*17028*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 50,  TARGET_VAL(AMDGPUISD::CONST_ADDRESS),// ->17082
/*17032*/   OPC_RecordChild0, // #0 = $src
/*17033*/   OPC_CheckChild0Type, MVT::i32,
/*17035*/   OPC_Scope, 15, /*->17052*/ // 2 children in Scope
/*17037*/     OPC_CheckType, MVT::i32,
/*17039*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*17041*/     OPC_CheckComplexPat, /*CP*/4, /*#*/0, // SelectGlobalValueConstantOffset:$src #1
/*17044*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CONST_COPY), 0|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (CONST_ADDRESS:i32 ADDRGA_CONST_OFFSET:i32:$src) - Complexity = 9
              // Dst: (CONST_COPY:i32 ADDRGA_CONST_OFFSET:i32:$src)
/*17052*/   /*Scope*/ 28, /*->17081*/
/*17053*/     OPC_RecordChild1, // #1 = $BUFFER_ID
/*17054*/     OPC_MoveChild, 1,
/*17056*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17059*/     OPC_CheckType, MVT::i32,
/*17061*/     OPC_MoveParent,
/*17062*/     OPC_CheckType, MVT::v4i32,
/*17064*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*17066*/     OPC_CheckComplexPat, /*CP*/5, /*#*/0, // SelectGlobalValueVariableOffset:$ptr #2 #3
/*17069*/     OPC_EmitConvertToTarget, 1,
/*17071*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_VTX_CONSTBUF), 0|OPFL_Variadic2,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 2, 3, 4, 
              // Src: (CONST_ADDRESS:v4i32 ADDRGA_VAR_OFFSET:i32:$ptr, (imm:i32):$BUFFER_ID) - Complexity = 15
              // Dst: (TEX_VTX_CONSTBUF:v4i32 ADDRGA_VAR_OFFSET:i32:$ptr, (imm:i32):$BUFFER_ID)
/*17081*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 12|128,51/*6540*/,  TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->23626
/*17086*/   OPC_MoveChild, 0,
/*17088*/   OPC_Scope, 114, /*->17204*/ // 24 children in Scope
/*17090*/     OPC_CheckInteger, 85|128,19/*2517*/, 
/*17093*/     OPC_MoveParent,
/*17094*/     OPC_RecordChild1, // #0 = $src0
/*17095*/     OPC_CheckChild1Type, MVT::i32,
/*17097*/     OPC_RecordChild2, // #1 = $src1
/*17098*/     OPC_CheckChild2Type, MVT::i32,
/*17100*/     OPC_RecordChild3, // #2 = $src2
/*17101*/     OPC_CheckChild3Type, MVT::i32,
/*17103*/     OPC_CheckType, MVT::i32,
/*17105*/     OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*17107*/     OPC_EmitInteger, MVT::i32, 0, 
/*17110*/     OPC_EmitInteger, MVT::i32, 0, 
/*17113*/     OPC_EmitInteger, MVT::i32, 0, 
/*17116*/     OPC_EmitInteger, MVT::i32, 0, 
/*17119*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*17131*/     OPC_EmitInteger, MVT::i32, 0, 
/*17134*/     OPC_EmitInteger, MVT::i32, 0, 
/*17137*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*17149*/     OPC_EmitInteger, MVT::i32, 0, 
/*17152*/     OPC_EmitInteger, MVT::i32, 0, 
/*17155*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*17167*/     OPC_EmitInteger, MVT::i32, 1, 
/*17170*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*17173*/     OPC_EmitInteger, MVT::i32, 0, 
/*17176*/     OPC_EmitInteger, MVT::i32, 0, 
/*17179*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFE_UINT_eg), 0,
                  1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
              // Src: (intrinsic_wo_chain:i32 2517:iPTR, i32:i32:$src0, i32:i32:$src1, i32:i32:$src2) - Complexity = 8
              // Dst: (BFE_UINT_eg:i32 i32:i32:$src0, i32:i32:$src1, i32:i32:$src2)
/*17204*/   /*Scope*/ 17, /*->17222*/
/*17205*/     OPC_CheckInteger, 59|128,20/*2619*/, 
/*17208*/     OPC_MoveParent,
/*17209*/     OPC_RecordChild1, // #0 = $src0
/*17210*/     OPC_RecordChild2, // #1 = $src1
/*17211*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*17213*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CVT_PKRTZ_F16_F32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 2619:iPTR, f32:f32:$src0, f32:f32:$src1) - Complexity = 8
              // Dst: (V_CVT_PKRTZ_F16_F32_e32:i32 f32:f32:$src0, f32:f32:$src1)
/*17222*/   /*Scope*/ 57, /*->17280*/
/*17223*/     OPC_CheckInteger, 65|128,20/*2625*/, 
/*17226*/     OPC_MoveParent,
/*17227*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*17229*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*17236*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*17243*/     OPC_EmitInteger, MVT::i32, 0, 
/*17246*/     OPC_EmitInteger, MVT::i32, 0, 
/*17249*/     OPC_EmitInteger, MVT::i32, 0, 
/*17252*/     OPC_EmitInteger, MVT::i32, 0, 
/*17255*/     OPC_EmitInteger, MVT::i32, 0, 
/*17258*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_MBCNT_LO_U32_B32_e64), 0,
                  1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 2, 3, 4, 5, 6,  // Results = #7
/*17271*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MBCNT_HI_U32_B32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 7, 
              // Src: (intrinsic_wo_chain:i32 2625:iPTR) - Complexity = 8
              // Dst: (V_MBCNT_HI_U32_B32_e32:i32 4294967295:i32, (V_MBCNT_LO_U32_B32_e64:i32 4294967295:i32, 0:i32, 0:i32, 0:i32, 0:i32, 0:i32))
/*17280*/   /*Scope*/ 73, /*->17354*/
/*17281*/     OPC_CheckInteger, 93|128,19/*2525*/, 
/*17284*/     OPC_MoveParent,
/*17285*/     OPC_RecordChild1, // #0 = $src
/*17286*/     OPC_CheckChild1Type, MVT::f32,
/*17288*/     OPC_MoveChild, 2,
/*17290*/     OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*17293*/     OPC_CheckPredicate, 9, // Predicate_FP_ZERO
/*17295*/     OPC_CheckType, MVT::f32,
/*17297*/     OPC_MoveParent,
/*17298*/     OPC_MoveChild, 3,
/*17300*/     OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*17303*/     OPC_CheckPredicate, 8, // Predicate_FP_ONE
/*17305*/     OPC_CheckType, MVT::f32,
/*17307*/     OPC_MoveParent,
/*17308*/     OPC_CheckType, MVT::f32,
/*17310*/     OPC_Scope, 30, /*->17342*/ // 2 children in Scope
/*17312*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*17314*/       OPC_EmitInteger, MVT::i32, 0, 
/*17317*/       OPC_EmitInteger, MVT::i32, 0, 
/*17320*/       OPC_EmitInteger, MVT::i32, 1, 
/*17323*/       OPC_EmitInteger, MVT::i32, 0, 
/*17326*/       OPC_EmitInteger, MVT::i32, 0, 
/*17329*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ADD_F32_e64), 0,
                    1/*#VTs*/, MVT::f32, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (intrinsic_wo_chain:f32 2525:iPTR, f32:f32:$src, (fpimm:f32)<<P:Predicate_FP_ZERO>>, (fpimm:f32)<<P:Predicate_FP_ONE>>) - Complexity = 16
                // Dst: (V_ADD_F32_e64:f32 ?:f32:$src, 0:i32, 0:i32, 1:i32, 0:i32, 0:i32)
/*17342*/     /*Scope*/ 10, /*->17353*/
/*17343*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*17345*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CLAMP_R600), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:f32 2525:iPTR, f32:f32:$src0, (fpimm:f32)<<P:Predicate_FP_ZERO>>, (fpimm:f32)<<P:Predicate_FP_ONE>>) - Complexity = 16
                // Dst: (CLAMP_R600:f32 f32:f32:$src0)
/*17353*/     0, /*End of Scope*/
/*17354*/   /*Scope*/ 39, /*->17394*/
/*17355*/     OPC_CheckInteger, 52|128,20/*2612*/, 
/*17358*/     OPC_MoveParent,
/*17359*/     OPC_RecordChild1, // #0 = $attr_chan
/*17360*/     OPC_MoveChild, 1,
/*17362*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17365*/     OPC_MoveParent,
/*17366*/     OPC_RecordChild2, // #1 = $attr
/*17367*/     OPC_MoveChild, 2,
/*17369*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17372*/     OPC_MoveParent,
/*17373*/     OPC_RecordChild3, // #2 = $params
/*17374*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*17376*/     OPC_EmitInteger, MVT::i32, 2, 
/*17379*/     OPC_EmitConvertToTarget, 0,
/*17381*/     OPC_EmitConvertToTarget, 1,
/*17383*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_INTERP_MOV_F32), 0,
                  1/*#VTs*/, MVT::f32, 4/*#Ops*/, 3, 4, 5, 2, 
              // Src: (intrinsic_wo_chain:f32 2612:iPTR, (imm:i32):$attr_chan, (imm:i32):$attr, i32:i32:$params) - Complexity = 14
              // Dst: (V_INTERP_MOV_F32:f32 2:i32, (imm:i32):$attr_chan, (imm:i32):$attr, ?:i32:$params)
/*17394*/   /*Scope*/ 77, /*->17472*/
/*17395*/     OPC_CheckInteger, 53|128,20/*2613*/, 
/*17398*/     OPC_MoveParent,
/*17399*/     OPC_RecordChild1, // #0 = $attr_chan
/*17400*/     OPC_MoveChild, 1,
/*17402*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17405*/     OPC_MoveParent,
/*17406*/     OPC_RecordChild2, // #1 = $attr
/*17407*/     OPC_MoveChild, 2,
/*17409*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17412*/     OPC_MoveParent,
/*17413*/     OPC_RecordChild3, // #2 = $params
/*17414*/     OPC_RecordChild4, // #3 = $ij
/*17415*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*17417*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*17420*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*17429*/     OPC_EmitConvertToTarget, 0,
/*17431*/     OPC_EmitConvertToTarget, 1,
/*17433*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_INTERP_P1_F32), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 5, 6, 7, 2,  // Results = #8
/*17444*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*17447*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 9,  // Results = #10
/*17456*/     OPC_EmitConvertToTarget, 0,
/*17458*/     OPC_EmitConvertToTarget, 1,
/*17460*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_INTERP_P2_F32), 0,
                  1/*#VTs*/, MVT::f32, 5/*#Ops*/, 8, 10, 11, 12, 2, 
              // Src: (intrinsic_wo_chain:f32 2613:iPTR, (imm:i32):$attr_chan, (imm:i32):$attr, M0Reg:i32:$params, v2i32:v2i32:$ij) - Complexity = 14
              // Dst: (V_INTERP_P2_F32:f32 (V_INTERP_P1_F32:i32 (EXTRACT_SUBREG:i32 v2i32:v2i32:$ij, sub0:i32), (imm:i32):$attr_chan, (imm:i32):$attr, i32:i32:$params), (EXTRACT_SUBREG:i32 ?:v2i32:$ij, sub1:i32), (imm:i32):$attr_chan, (imm:i32):$attr, ?:i32:$params)
/*17472*/   /*Scope*/ 71, /*->17544*/
/*17473*/     OPC_CheckInteger, 57|128,20/*2617*/, 
/*17476*/     OPC_MoveParent,
/*17477*/     OPC_RecordChild1, // #0 = $sbase
/*17478*/     OPC_RecordChild2, // #1 = $offset
/*17479*/     OPC_Scope, 50, /*->17531*/ // 2 children in Scope
/*17481*/       OPC_MoveChild, 2,
/*17483*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17486*/       OPC_Scope, 19, /*->17507*/ // 2 children in Scope
/*17488*/         OPC_CheckPredicate, 21, // Predicate_IMM8bitDWORD
/*17490*/         OPC_MoveParent,
/*17491*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*17493*/         OPC_EmitConvertToTarget, 1,
/*17495*/         OPC_EmitNodeXForm, 0, 2, // anonymous.val.378
/*17498*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_BUFFER_LOAD_DWORD_IMM), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 3, 
                  // Src: (intrinsic_wo_chain:f32 2617:iPTR, v16i8:v16i8:$sbase, (imm:i32)<<P:Predicate_IMM8bitDWORD>><<X:anonymous.val.378>>:$offset) - Complexity = 12
                  // Dst: (S_BUFFER_LOAD_DWORD_IMM:f32 ?:v16i8:$sbase, (anonymous.val.378:i32 (imm:i32)<<P:Predicate_IMM8bitDWORD>>:$offset))
/*17507*/       /*Scope*/ 22, /*->17530*/
/*17508*/         OPC_MoveParent,
/*17509*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*17511*/         OPC_EmitConvertToTarget, 1,
/*17513*/         OPC_EmitNode, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*17521*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_BUFFER_LOAD_DWORD_SGPR), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 3, 
                  // Src: (intrinsic_wo_chain:f32 2617:iPTR, v16i8:v16i8:$sbase, (imm:i32):$offset) - Complexity = 11
                  // Dst: (S_BUFFER_LOAD_DWORD_SGPR:f32 ?:v16i8:$sbase, (S_MOV_B32:i32 (imm:i32):$offset))
/*17530*/       0, /*End of Scope*/
/*17531*/     /*Scope*/ 11, /*->17543*/
/*17532*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*17534*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORD_OFFEN), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:f32 2617:iPTR, v16i8:v16i8:$sbase, i32:i32:$voff) - Complexity = 8
                // Dst: (BUFFER_LOAD_DWORD_OFFEN:f32 ?:v16i8:$sbase, ?:i32:$voff)
/*17543*/     0, /*End of Scope*/
/*17544*/   /*Scope*/ 23, /*->17568*/
/*17545*/     OPC_CheckInteger, 52|128,19/*2484*/, 
/*17548*/     OPC_MoveParent,
/*17549*/     OPC_RecordChild1, // #0 = $src
/*17550*/     OPC_MoveChild, 1,
/*17552*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17555*/     OPC_MoveParent,
/*17556*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*17558*/     OPC_EmitConvertToTarget, 0,
/*17560*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LOAD_CONST), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_wo_chain:f32 2484:iPTR, (imm:i32):$src) - Complexity = 11
              // Dst: (LOAD_CONST:f32 (imm:i32):$src)
/*17568*/   /*Scope*/ 122, /*->17691*/
/*17569*/     OPC_CheckInteger, 55|128,19/*2487*/, 
/*17572*/     OPC_MoveParent,
/*17573*/     OPC_RecordChild1, // #0 = $src0
/*17574*/     OPC_RecordChild2, // #1 = $src1
/*17575*/     OPC_Scope, 101, /*->17678*/ // 2 children in Scope
/*17577*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*17579*/       OPC_EmitInteger, MVT::i32, 0, 
/*17582*/       OPC_EmitInteger, MVT::i32, 0, 
/*17585*/       OPC_EmitInteger, MVT::i32, 1, 
/*17588*/       OPC_EmitInteger, MVT::i32, 0, 
/*17591*/       OPC_EmitInteger, MVT::i32, 0, 
/*17594*/       OPC_EmitInteger, MVT::i32, 0, 
/*17597*/       OPC_EmitInteger, MVT::i32, 0, 
/*17600*/       OPC_EmitInteger, MVT::i32, 0, 
/*17603*/       OPC_EmitInteger, MVT::i32, 0, 
/*17606*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*17618*/       OPC_EmitInteger, MVT::i32, 0, 
/*17621*/       OPC_EmitInteger, MVT::i32, 0, 
/*17624*/       OPC_EmitInteger, MVT::i32, 0, 
/*17627*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*17639*/       OPC_EmitInteger, MVT::i32, 1, 
/*17642*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*17645*/       OPC_EmitInteger, MVT::i32, 0, 
/*17648*/       OPC_EmitInteger, MVT::i32, 0, 
/*17651*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL), 0,
                    1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (intrinsic_wo_chain:f32 2487:iPTR, R600_Reg32:f32:$src0, R600_Reg32:f32:$src1) - Complexity = 8
                // Dst: (MUL:f32 R600_Reg32:f32:$src0, R600_Reg32:f32:$src1)
/*17678*/     /*Scope*/ 11, /*->17690*/
/*17679*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*17681*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_LEGACY_F32_e32), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:f32 2487:iPTR, f32:f32:$src0, f32:f32:$src1) - Complexity = 8
                // Dst: (V_MUL_LEGACY_F32_e32:f32 f32:f32:$src0, f32:f32:$src1)
/*17690*/     0, /*End of Scope*/
/*17691*/   /*Scope*/ 86, /*->17778*/
/*17692*/     OPC_CheckInteger, 69|128,19/*2501*/, 
/*17695*/     OPC_MoveParent,
/*17696*/     OPC_RecordChild1, // #0 = $src0
/*17697*/     OPC_Scope, 67, /*->17766*/ // 2 children in Scope
/*17699*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*17701*/       OPC_EmitInteger, MVT::i32, 1, 
/*17704*/       OPC_EmitInteger, MVT::i32, 0, 
/*17707*/       OPC_EmitInteger, MVT::i32, 0, 
/*17710*/       OPC_EmitInteger, MVT::i32, 0, 
/*17713*/       OPC_EmitInteger, MVT::i32, 0, 
/*17716*/       OPC_EmitInteger, MVT::i32, 0, 
/*17719*/       OPC_EmitInteger, MVT::i32, 0, 
/*17722*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*17734*/       OPC_EmitInteger, MVT::i32, 1, 
/*17737*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*17740*/       OPC_EmitInteger, MVT::i32, 0, 
/*17743*/       OPC_EmitInteger, MVT::i32, 0, 
/*17746*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TRUNC), 0,
                    1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (intrinsic_wo_chain:f32 2501:iPTR, R600_Reg32:f32:$src0) - Complexity = 8
                // Dst: (TRUNC:f32 R600_Reg32:f32:$src0)
/*17766*/     /*Scope*/ 10, /*->17777*/
/*17767*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*17769*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_TRUNC_F32_e32), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:f32 2501:iPTR, f32:f32:$src0) - Complexity = 8
                // Dst: (V_TRUNC_F32_e32:f32 f32:f32:$src0)
/*17777*/     0, /*End of Scope*/
/*17778*/   /*Scope*/ 94|128,1/*222*/, /*->18002*/
/*17780*/     OPC_CheckInteger, 60|128,19/*2492*/, 
/*17783*/     OPC_MoveParent,
/*17784*/     OPC_RecordChild1, // #0 = $src0
/*17785*/     OPC_Scope, 67, /*->17854*/ // 4 children in Scope
/*17787*/       OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*17789*/       OPC_EmitInteger, MVT::i32, 1, 
/*17792*/       OPC_EmitInteger, MVT::i32, 0, 
/*17795*/       OPC_EmitInteger, MVT::i32, 0, 
/*17798*/       OPC_EmitInteger, MVT::i32, 0, 
/*17801*/       OPC_EmitInteger, MVT::i32, 0, 
/*17804*/       OPC_EmitInteger, MVT::i32, 0, 
/*17807*/       OPC_EmitInteger, MVT::i32, 0, 
/*17810*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*17822*/       OPC_EmitInteger, MVT::i32, 1, 
/*17825*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*17828*/       OPC_EmitInteger, MVT::i32, 0, 
/*17831*/       OPC_EmitInteger, MVT::i32, 0, 
/*17834*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RECIPSQRT_CLAMPED_r600), 0,
                    1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (intrinsic_wo_chain:f32 2492:iPTR, R600_Reg32:f32:$src0) - Complexity = 8
                // Dst: (RECIPSQRT_CLAMPED_r600:f32 R600_Reg32:f32:$src0)
/*17854*/     /*Scope*/ 67, /*->17922*/
/*17855*/       OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*17857*/       OPC_EmitInteger, MVT::i32, 1, 
/*17860*/       OPC_EmitInteger, MVT::i32, 0, 
/*17863*/       OPC_EmitInteger, MVT::i32, 0, 
/*17866*/       OPC_EmitInteger, MVT::i32, 0, 
/*17869*/       OPC_EmitInteger, MVT::i32, 0, 
/*17872*/       OPC_EmitInteger, MVT::i32, 0, 
/*17875*/       OPC_EmitInteger, MVT::i32, 0, 
/*17878*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*17890*/       OPC_EmitInteger, MVT::i32, 1, 
/*17893*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*17896*/       OPC_EmitInteger, MVT::i32, 0, 
/*17899*/       OPC_EmitInteger, MVT::i32, 0, 
/*17902*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RECIPSQRT_CLAMPED_eg), 0,
                    1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (intrinsic_wo_chain:f32 2492:iPTR, R600_Reg32:f32:$src0) - Complexity = 8
                // Dst: (RECIPSQRT_CLAMPED_eg:f32 R600_Reg32:f32:$src0)
/*17922*/     /*Scope*/ 67, /*->17990*/
/*17923*/       OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*17925*/       OPC_EmitInteger, MVT::i32, 1, 
/*17928*/       OPC_EmitInteger, MVT::i32, 0, 
/*17931*/       OPC_EmitInteger, MVT::i32, 0, 
/*17934*/       OPC_EmitInteger, MVT::i32, 0, 
/*17937*/       OPC_EmitInteger, MVT::i32, 0, 
/*17940*/       OPC_EmitInteger, MVT::i32, 0, 
/*17943*/       OPC_EmitInteger, MVT::i32, 0, 
/*17946*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*17958*/       OPC_EmitInteger, MVT::i32, 1, 
/*17961*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*17964*/       OPC_EmitInteger, MVT::i32, 0, 
/*17967*/       OPC_EmitInteger, MVT::i32, 0, 
/*17970*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RECIPSQRT_CLAMPED_cm), 0,
                    1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (intrinsic_wo_chain:f32 2492:iPTR, R600_Reg32:f32:$src0) - Complexity = 8
                // Dst: (RECIPSQRT_CLAMPED_cm:f32 R600_Reg32:f32:$src0)
/*17990*/     /*Scope*/ 10, /*->18001*/
/*17991*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*17993*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_RSQ_LEGACY_F32_e32), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:f32 2492:iPTR, f32:f32:$src0) - Complexity = 8
                // Dst: (V_RSQ_LEGACY_F32_e32:f32 f32:f32:$src0)
/*18001*/     0, /*End of Scope*/
/*18002*/   /*Scope*/ 20|128,4/*532*/, /*->18536*/
/*18004*/     OPC_CheckInteger, 46|128,19/*2478*/, 
/*18007*/     OPC_MoveParent,
/*18008*/     OPC_RecordChild1, // #0 = $src0
/*18009*/     OPC_RecordChild2, // #1 = $src1
/*18010*/     OPC_Scope, 38|128,1/*166*/, /*->18179*/ // 4 children in Scope
/*18013*/       OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*18015*/       OPC_EmitInteger, MVT::i32, 0, 
/*18018*/       OPC_EmitInteger, MVT::i32, 0, 
/*18021*/       OPC_EmitInteger, MVT::i32, 1, 
/*18024*/       OPC_EmitInteger, MVT::i32, 0, 
/*18027*/       OPC_EmitInteger, MVT::i32, 0, 
/*18030*/       OPC_EmitInteger, MVT::i32, 0, 
/*18033*/       OPC_EmitInteger, MVT::i32, 0, 
/*18036*/       OPC_EmitInteger, MVT::i32, 0, 
/*18039*/       OPC_EmitInteger, MVT::i32, 0, 
/*18042*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18054*/       OPC_EmitInteger, MVT::i32, 1, 
/*18057*/       OPC_EmitInteger, MVT::i32, 0, 
/*18060*/       OPC_EmitInteger, MVT::i32, 0, 
/*18063*/       OPC_EmitInteger, MVT::i32, 0, 
/*18066*/       OPC_EmitInteger, MVT::i32, 0, 
/*18069*/       OPC_EmitInteger, MVT::i32, 0, 
/*18072*/       OPC_EmitInteger, MVT::i32, 0, 
/*18075*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18087*/       OPC_EmitInteger, MVT::i32, 1, 
/*18090*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*18093*/       OPC_EmitInteger, MVT::i32, 0, 
/*18096*/       OPC_EmitInteger, MVT::i32, 0, 
/*18099*/       OPC_EmitNode, TARGET_VAL(AMDGPU::RECIP_IEEE_r600), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 12, 13, 14, 15, 1, 16, 17, 18, 19, 20, 21, 22, 23,  // Results = #24
/*18119*/       OPC_EmitInteger, MVT::i32, 0, 
/*18122*/       OPC_EmitInteger, MVT::i32, 0, 
/*18125*/       OPC_EmitInteger, MVT::i32, 0, 
/*18128*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18140*/       OPC_EmitInteger, MVT::i32, 1, 
/*18143*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*18146*/       OPC_EmitInteger, MVT::i32, 0, 
/*18149*/       OPC_EmitInteger, MVT::i32, 0, 
/*18152*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                    1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
                // Src: (intrinsic_wo_chain:f32 2478:iPTR, f32:f32:$src0, f32:f32:$src1) - Complexity = 8
                // Dst: (MUL_IEEE:f32 ?:f32:$src0, (RECIP_IEEE_r600:i32 ?:f32:$src1))
/*18179*/     /*Scope*/ 38|128,1/*166*/, /*->18347*/
/*18181*/       OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*18183*/       OPC_EmitInteger, MVT::i32, 0, 
/*18186*/       OPC_EmitInteger, MVT::i32, 0, 
/*18189*/       OPC_EmitInteger, MVT::i32, 1, 
/*18192*/       OPC_EmitInteger, MVT::i32, 0, 
/*18195*/       OPC_EmitInteger, MVT::i32, 0, 
/*18198*/       OPC_EmitInteger, MVT::i32, 0, 
/*18201*/       OPC_EmitInteger, MVT::i32, 0, 
/*18204*/       OPC_EmitInteger, MVT::i32, 0, 
/*18207*/       OPC_EmitInteger, MVT::i32, 0, 
/*18210*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18222*/       OPC_EmitInteger, MVT::i32, 1, 
/*18225*/       OPC_EmitInteger, MVT::i32, 0, 
/*18228*/       OPC_EmitInteger, MVT::i32, 0, 
/*18231*/       OPC_EmitInteger, MVT::i32, 0, 
/*18234*/       OPC_EmitInteger, MVT::i32, 0, 
/*18237*/       OPC_EmitInteger, MVT::i32, 0, 
/*18240*/       OPC_EmitInteger, MVT::i32, 0, 
/*18243*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18255*/       OPC_EmitInteger, MVT::i32, 1, 
/*18258*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*18261*/       OPC_EmitInteger, MVT::i32, 0, 
/*18264*/       OPC_EmitInteger, MVT::i32, 0, 
/*18267*/       OPC_EmitNode, TARGET_VAL(AMDGPU::RECIP_IEEE_eg), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 12, 13, 14, 15, 1, 16, 17, 18, 19, 20, 21, 22, 23,  // Results = #24
/*18287*/       OPC_EmitInteger, MVT::i32, 0, 
/*18290*/       OPC_EmitInteger, MVT::i32, 0, 
/*18293*/       OPC_EmitInteger, MVT::i32, 0, 
/*18296*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18308*/       OPC_EmitInteger, MVT::i32, 1, 
/*18311*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*18314*/       OPC_EmitInteger, MVT::i32, 0, 
/*18317*/       OPC_EmitInteger, MVT::i32, 0, 
/*18320*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                    1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
                // Src: (intrinsic_wo_chain:f32 2478:iPTR, f32:f32:$src0, f32:f32:$src1) - Complexity = 8
                // Dst: (MUL_IEEE:f32 ?:f32:$src0, (RECIP_IEEE_eg:i32 ?:f32:$src1))
/*18347*/     /*Scope*/ 38|128,1/*166*/, /*->18515*/
/*18349*/       OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*18351*/       OPC_EmitInteger, MVT::i32, 0, 
/*18354*/       OPC_EmitInteger, MVT::i32, 0, 
/*18357*/       OPC_EmitInteger, MVT::i32, 1, 
/*18360*/       OPC_EmitInteger, MVT::i32, 0, 
/*18363*/       OPC_EmitInteger, MVT::i32, 0, 
/*18366*/       OPC_EmitInteger, MVT::i32, 0, 
/*18369*/       OPC_EmitInteger, MVT::i32, 0, 
/*18372*/       OPC_EmitInteger, MVT::i32, 0, 
/*18375*/       OPC_EmitInteger, MVT::i32, 0, 
/*18378*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18390*/       OPC_EmitInteger, MVT::i32, 1, 
/*18393*/       OPC_EmitInteger, MVT::i32, 0, 
/*18396*/       OPC_EmitInteger, MVT::i32, 0, 
/*18399*/       OPC_EmitInteger, MVT::i32, 0, 
/*18402*/       OPC_EmitInteger, MVT::i32, 0, 
/*18405*/       OPC_EmitInteger, MVT::i32, 0, 
/*18408*/       OPC_EmitInteger, MVT::i32, 0, 
/*18411*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18423*/       OPC_EmitInteger, MVT::i32, 1, 
/*18426*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*18429*/       OPC_EmitInteger, MVT::i32, 0, 
/*18432*/       OPC_EmitInteger, MVT::i32, 0, 
/*18435*/       OPC_EmitNode, TARGET_VAL(AMDGPU::RECIP_IEEE_cm), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 12, 13, 14, 15, 1, 16, 17, 18, 19, 20, 21, 22, 23,  // Results = #24
/*18455*/       OPC_EmitInteger, MVT::i32, 0, 
/*18458*/       OPC_EmitInteger, MVT::i32, 0, 
/*18461*/       OPC_EmitInteger, MVT::i32, 0, 
/*18464*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18476*/       OPC_EmitInteger, MVT::i32, 1, 
/*18479*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*18482*/       OPC_EmitInteger, MVT::i32, 0, 
/*18485*/       OPC_EmitInteger, MVT::i32, 0, 
/*18488*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                    1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
                // Src: (intrinsic_wo_chain:f32 2478:iPTR, f32:f32:$src0, f32:f32:$src1) - Complexity = 8
                // Dst: (MUL_IEEE:f32 ?:f32:$src0, (RECIP_IEEE_cm:i32 ?:f32:$src1))
/*18515*/     /*Scope*/ 19, /*->18535*/
/*18516*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*18518*/       OPC_EmitNode, TARGET_VAL(AMDGPU::V_RCP_LEGACY_F32_e32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*18526*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_LEGACY_F32_e32), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:f32 2478:iPTR, f32:f32:$src0, f32:f32:$src1) - Complexity = 8
                // Dst: (V_MUL_LEGACY_F32_e32:f32 ?:f32:$src0, (V_RCP_LEGACY_F32_e32:i32 ?:f32:$src1))
/*18535*/     0, /*End of Scope*/
/*18536*/   /*Scope*/ 63, /*->18600*/
/*18537*/     OPC_CheckInteger, 42|128,19/*2474*/, 
/*18540*/     OPC_MoveParent,
/*18541*/     OPC_RecordChild1, // #0 = $src0
/*18542*/     OPC_RecordChild2, // #1 = $src1
/*18543*/     OPC_RecordChild3, // #2 = $src2
/*18544*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*18546*/     OPC_EmitInteger, MVT::i32, 0, 
/*18549*/     OPC_EmitInteger, MVT::i32, 0, 
/*18552*/     OPC_EmitInteger, MVT::i32, 0, 
/*18555*/     OPC_EmitInteger, MVT::i32, 0, 
/*18558*/     OPC_EmitInteger, MVT::i32, 0, 
/*18561*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_CMP_GT_F32_e64), 0,
                  1/*#VTs*/, MVT::i1, 6/*#Ops*/, 3, 0, 4, 5, 6, 7,  // Results = #8
/*18574*/     OPC_EmitInteger, MVT::i32, 0, 
/*18577*/     OPC_EmitInteger, MVT::i32, 0, 
/*18580*/     OPC_EmitInteger, MVT::i32, 0, 
/*18583*/     OPC_EmitInteger, MVT::i32, 0, 
/*18586*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CNDMASK_B32_e64), 0,
                  1/*#VTs*/, MVT::f32, 7/*#Ops*/, 2, 1, 8, 9, 10, 11, 12, 
              // Src: (intrinsic_wo_chain:f32 2474:iPTR, f32:f32:$src0, f32:f32:$src1, f32:f32:$src2) - Complexity = 8
              // Dst: (V_CNDMASK_B32_e64:f32 ?:f32:$src2, ?:f32:$src1, (V_CMP_GT_F32_e64:i1 0:i32, ?:f32:$src0))
/*18600*/   /*Scope*/ 35|128,5/*675*/, /*->19277*/
/*18602*/     OPC_CheckInteger, 67|128,20/*2627*/, 
/*18605*/     OPC_MoveParent,
/*18606*/     OPC_RecordChild1, // #0 = $src_x
/*18607*/     OPC_RecordChild2, // #1 = $src_y
/*18608*/     OPC_RecordChild3, // #2 = $src_w
/*18609*/     OPC_Scope, 75|128,2/*331*/, /*->18943*/ // 2 children in Scope
/*18612*/       OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*18614*/       OPC_EmitInteger, MVT::i32, 1, 
/*18617*/       OPC_EmitInteger, MVT::i32, 0, 
/*18620*/       OPC_EmitInteger, MVT::i32, 0, 
/*18623*/       OPC_EmitInteger, MVT::i32, 0, 
/*18626*/       OPC_EmitInteger, MVT::i32, 0, 
/*18629*/       OPC_EmitInteger, MVT::i32, 0, 
/*18632*/       OPC_EmitInteger, MVT::i32, 1, 
/*18635*/       OPC_EmitInteger, MVT::i32, 0, 
/*18638*/       OPC_EmitInteger, MVT::i32, 0, 
/*18641*/       OPC_EmitInteger, MVT::i32, 0, 
/*18644*/       OPC_EmitInteger, MVT::i32, 0, 
/*18647*/       OPC_EmitInteger, MVT::i32, 0, 
/*18650*/       OPC_EmitInteger, MVT::i32, 1, 
/*18653*/       OPC_EmitInteger, MVT::i32, 0, 
/*18656*/       OPC_EmitInteger, MVT::i32, 0, 
/*18659*/       OPC_EmitInteger, MVT::i32, 0, 
/*18662*/       OPC_EmitInteger, MVT::i32, 0, 
/*18665*/       OPC_EmitInteger, MVT::i32, 0, 
/*18668*/       OPC_EmitInteger, MVT::i32, 0, 
/*18671*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18683*/       OPC_EmitRegister, MVT::f32, AMDGPU::ZERO,
/*18686*/       OPC_EmitInteger, MVT::i32, 0, 
/*18689*/       OPC_EmitInteger, MVT::i32, 0, 
/*18692*/       OPC_EmitInteger, MVT::i32, 0, 
/*18695*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18707*/       OPC_EmitInteger, MVT::i32, 1, 
/*18710*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*18713*/       OPC_EmitInteger, MVT::i32, 0, 
/*18716*/       OPC_EmitInteger, MVT::i32, 0, 
/*18719*/       OPC_EmitNode, TARGET_VAL(AMDGPU::MAX), 0,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 13, 14, 15, 16, 17, 18, 1, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,  // Results = #32
/*18746*/       OPC_EmitInteger, MVT::i32, 0, 
/*18749*/       OPC_EmitInteger, MVT::i32, 0, 
/*18752*/       OPC_EmitInteger, MVT::i32, 0, 
/*18755*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18767*/       OPC_EmitInteger, MVT::i32, 1, 
/*18770*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*18773*/       OPC_EmitInteger, MVT::i32, 0, 
/*18776*/       OPC_EmitInteger, MVT::i32, 0, 
/*18779*/       OPC_EmitNode, TARGET_VAL(AMDGPU::LOG_CLAMPED_r600), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 9, 10, 11, 12, 32, 33, 34, 35, 36, 37, 38, 39, 40,  // Results = #41
/*18799*/       OPC_EmitInteger, MVT::i32, 0, 
/*18802*/       OPC_EmitInteger, MVT::i32, 0, 
/*18805*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18817*/       OPC_EmitInteger, MVT::i32, 0, 
/*18820*/       OPC_EmitInteger, MVT::i32, 0, 
/*18823*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18835*/       OPC_EmitInteger, MVT::i32, 0, 
/*18838*/       OPC_EmitInteger, MVT::i32, 0, 
/*18841*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18853*/       OPC_EmitInteger, MVT::i32, 1, 
/*18856*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*18859*/       OPC_EmitInteger, MVT::i32, 0, 
/*18862*/       OPC_EmitInteger, MVT::i32, 0, 
/*18865*/       OPC_EmitNode, TARGET_VAL(AMDGPU::MUL_LIT_r600), 0,
                    1/*#VTs*/, MVT::i32, 18/*#Ops*/, 7, 8, 41, 42, 43, 44, 2, 45, 46, 47, 0, 48, 49, 50, 51, 52, 53, 54,  // Results = #55
/*18890*/       OPC_EmitInteger, MVT::i32, 0, 
/*18893*/       OPC_EmitInteger, MVT::i32, 0, 
/*18896*/       OPC_EmitInteger, MVT::i32, 0, 
/*18899*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18911*/       OPC_EmitInteger, MVT::i32, 1, 
/*18914*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*18917*/       OPC_EmitInteger, MVT::i32, 0, 
/*18920*/       OPC_EmitInteger, MVT::i32, 0, 
/*18923*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EXP_IEEE_r600), 0,
                    1/*#VTs*/, MVT::f32, 13/*#Ops*/, 3, 4, 5, 6, 55, 56, 57, 58, 59, 60, 61, 62, 63, 
                // Src: (intrinsic_wo_chain:f32 2627:iPTR, f32:f32:$src_x, f32:f32:$src_y, f32:f32:$src_w) - Complexity = 8
                // Dst: (EXP_IEEE_r600:f32 (MUL_LIT_r600:i32 (LOG_CLAMPED_r600:i32 (MAX:i32 ?:f32:$src_y, ZERO:f32)), ?:f32:$src_w, ?:f32:$src_x))
/*18943*/     /*Scope*/ 75|128,2/*331*/, /*->19276*/
/*18945*/       OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*18947*/       OPC_EmitInteger, MVT::i32, 1, 
/*18950*/       OPC_EmitInteger, MVT::i32, 0, 
/*18953*/       OPC_EmitInteger, MVT::i32, 0, 
/*18956*/       OPC_EmitInteger, MVT::i32, 0, 
/*18959*/       OPC_EmitInteger, MVT::i32, 0, 
/*18962*/       OPC_EmitInteger, MVT::i32, 0, 
/*18965*/       OPC_EmitInteger, MVT::i32, 1, 
/*18968*/       OPC_EmitInteger, MVT::i32, 0, 
/*18971*/       OPC_EmitInteger, MVT::i32, 0, 
/*18974*/       OPC_EmitInteger, MVT::i32, 0, 
/*18977*/       OPC_EmitInteger, MVT::i32, 0, 
/*18980*/       OPC_EmitInteger, MVT::i32, 0, 
/*18983*/       OPC_EmitInteger, MVT::i32, 1, 
/*18986*/       OPC_EmitInteger, MVT::i32, 0, 
/*18989*/       OPC_EmitInteger, MVT::i32, 0, 
/*18992*/       OPC_EmitInteger, MVT::i32, 0, 
/*18995*/       OPC_EmitInteger, MVT::i32, 0, 
/*18998*/       OPC_EmitInteger, MVT::i32, 0, 
/*19001*/       OPC_EmitInteger, MVT::i32, 0, 
/*19004*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*19016*/       OPC_EmitRegister, MVT::f32, AMDGPU::ZERO,
/*19019*/       OPC_EmitInteger, MVT::i32, 0, 
/*19022*/       OPC_EmitInteger, MVT::i32, 0, 
/*19025*/       OPC_EmitInteger, MVT::i32, 0, 
/*19028*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*19040*/       OPC_EmitInteger, MVT::i32, 1, 
/*19043*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*19046*/       OPC_EmitInteger, MVT::i32, 0, 
/*19049*/       OPC_EmitInteger, MVT::i32, 0, 
/*19052*/       OPC_EmitNode, TARGET_VAL(AMDGPU::MAX), 0,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 13, 14, 15, 16, 17, 18, 1, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,  // Results = #32
/*19079*/       OPC_EmitInteger, MVT::i32, 0, 
/*19082*/       OPC_EmitInteger, MVT::i32, 0, 
/*19085*/       OPC_EmitInteger, MVT::i32, 0, 
/*19088*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*19100*/       OPC_EmitInteger, MVT::i32, 1, 
/*19103*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*19106*/       OPC_EmitInteger, MVT::i32, 0, 
/*19109*/       OPC_EmitInteger, MVT::i32, 0, 
/*19112*/       OPC_EmitNode, TARGET_VAL(AMDGPU::LOG_CLAMPED_eg), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 9, 10, 11, 12, 32, 33, 34, 35, 36, 37, 38, 39, 40,  // Results = #41
/*19132*/       OPC_EmitInteger, MVT::i32, 0, 
/*19135*/       OPC_EmitInteger, MVT::i32, 0, 
/*19138*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*19150*/       OPC_EmitInteger, MVT::i32, 0, 
/*19153*/       OPC_EmitInteger, MVT::i32, 0, 
/*19156*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*19168*/       OPC_EmitInteger, MVT::i32, 0, 
/*19171*/       OPC_EmitInteger, MVT::i32, 0, 
/*19174*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*19186*/       OPC_EmitInteger, MVT::i32, 1, 
/*19189*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*19192*/       OPC_EmitInteger, MVT::i32, 0, 
/*19195*/       OPC_EmitInteger, MVT::i32, 0, 
/*19198*/       OPC_EmitNode, TARGET_VAL(AMDGPU::MUL_LIT_eg), 0,
                    1/*#VTs*/, MVT::i32, 18/*#Ops*/, 7, 8, 41, 42, 43, 44, 2, 45, 46, 47, 0, 48, 49, 50, 51, 52, 53, 54,  // Results = #55
/*19223*/       OPC_EmitInteger, MVT::i32, 0, 
/*19226*/       OPC_EmitInteger, MVT::i32, 0, 
/*19229*/       OPC_EmitInteger, MVT::i32, 0, 
/*19232*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*19244*/       OPC_EmitInteger, MVT::i32, 1, 
/*19247*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*19250*/       OPC_EmitInteger, MVT::i32, 0, 
/*19253*/       OPC_EmitInteger, MVT::i32, 0, 
/*19256*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EXP_IEEE_eg), 0,
                    1/*#VTs*/, MVT::f32, 13/*#Ops*/, 3, 4, 5, 6, 55, 56, 57, 58, 59, 60, 61, 62, 63, 
                // Src: (intrinsic_wo_chain:f32 2627:iPTR, f32:f32:$src_x, f32:f32:$src_y, f32:f32:$src_w) - Complexity = 8
                // Dst: (EXP_IEEE_eg:f32 (MUL_LIT_eg:i32 (LOG_CLAMPED_eg:i32 (MAX:i32 ?:f32:$src_y, ZERO:f32)), ?:f32:$src_w, ?:f32:$src_x))
/*19276*/     0, /*End of Scope*/
/*19277*/   /*Scope*/ 85|128,1/*213*/, /*->19492*/
/*19279*/     OPC_CheckInteger, 56|128,20/*2616*/, 
/*19282*/     OPC_MoveParent,
/*19283*/     OPC_RecordChild1, // #0 = $addr
/*19284*/     OPC_Scope, 102, /*->19388*/ // 2 children in Scope
/*19286*/       OPC_CheckChild1Type, MVT::v2i32,
/*19288*/       OPC_RecordChild2, // #1 = $rsrc
/*19289*/       OPC_MoveChild, 3,
/*19291*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19294*/       OPC_Scope, 46, /*->19342*/ // 2 children in Scope
/*19296*/         OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*19298*/         OPC_MoveParent,
/*19299*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*19301*/         OPC_EmitInteger, MVT::i32, 15, 
/*19304*/         OPC_EmitInteger, MVT::i1, 0, 
/*19307*/         OPC_EmitInteger, MVT::i1, 0, 
/*19310*/         OPC_EmitInteger, MVT::i1, 1, 
/*19313*/         OPC_EmitInteger, MVT::i1, 0, 
/*19316*/         OPC_EmitInteger, MVT::i1, 0, 
/*19319*/         OPC_EmitInteger, MVT::i1, 0, 
/*19322*/         OPC_EmitInteger, MVT::i1, 0, 
/*19325*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_LOAD_MIP), 0,
                      1/*#VTs*/, MVT::v4i32, 10/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 
                  // Src: (intrinsic_wo_chain:v4i32 2616:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_LOAD_MIP:v4i32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc)
/*19342*/       /*Scope*/ 44, /*->19387*/
/*19343*/         OPC_MoveParent,
/*19344*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*19346*/         OPC_EmitInteger, MVT::i32, 15, 
/*19349*/         OPC_EmitInteger, MVT::i1, 0, 
/*19352*/         OPC_EmitInteger, MVT::i1, 0, 
/*19355*/         OPC_EmitInteger, MVT::i1, 0, 
/*19358*/         OPC_EmitInteger, MVT::i1, 0, 
/*19361*/         OPC_EmitInteger, MVT::i1, 0, 
/*19364*/         OPC_EmitInteger, MVT::i1, 0, 
/*19367*/         OPC_EmitInteger, MVT::i1, 0, 
/*19370*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_LOAD_MIP), 0,
                      1/*#VTs*/, MVT::v4i32, 10/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 
                  // Src: (intrinsic_wo_chain:v4i32 2616:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, (imm:i32)) - Complexity = 11
                  // Dst: (IMAGE_LOAD_MIP:v4i32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc)
/*19387*/       0, /*End of Scope*/
/*19388*/     /*Scope*/ 102, /*->19491*/
/*19389*/       OPC_CheckChild1Type, MVT::v4i32,
/*19391*/       OPC_RecordChild2, // #1 = $rsrc
/*19392*/       OPC_MoveChild, 3,
/*19394*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19397*/       OPC_Scope, 46, /*->19445*/ // 2 children in Scope
/*19399*/         OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*19401*/         OPC_MoveParent,
/*19402*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*19404*/         OPC_EmitInteger, MVT::i32, 15, 
/*19407*/         OPC_EmitInteger, MVT::i1, 0, 
/*19410*/         OPC_EmitInteger, MVT::i1, 0, 
/*19413*/         OPC_EmitInteger, MVT::i1, 1, 
/*19416*/         OPC_EmitInteger, MVT::i1, 0, 
/*19419*/         OPC_EmitInteger, MVT::i1, 0, 
/*19422*/         OPC_EmitInteger, MVT::i1, 0, 
/*19425*/         OPC_EmitInteger, MVT::i1, 0, 
/*19428*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_LOAD_MIP), 0,
                      1/*#VTs*/, MVT::v4i32, 10/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 
                  // Src: (intrinsic_wo_chain:v4i32 2616:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_LOAD_MIP:v4i32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc)
/*19445*/       /*Scope*/ 44, /*->19490*/
/*19446*/         OPC_MoveParent,
/*19447*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*19449*/         OPC_EmitInteger, MVT::i32, 15, 
/*19452*/         OPC_EmitInteger, MVT::i1, 0, 
/*19455*/         OPC_EmitInteger, MVT::i1, 0, 
/*19458*/         OPC_EmitInteger, MVT::i1, 0, 
/*19461*/         OPC_EmitInteger, MVT::i1, 0, 
/*19464*/         OPC_EmitInteger, MVT::i1, 0, 
/*19467*/         OPC_EmitInteger, MVT::i1, 0, 
/*19470*/         OPC_EmitInteger, MVT::i1, 0, 
/*19473*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_LOAD_MIP), 0,
                      1/*#VTs*/, MVT::v4i32, 10/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 
                  // Src: (intrinsic_wo_chain:v4i32 2616:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, (imm:i32)) - Complexity = 11
                  // Dst: (IMAGE_LOAD_MIP:v4i32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc)
/*19490*/       0, /*End of Scope*/
/*19491*/     0, /*End of Scope*/
/*19492*/   /*Scope*/ 121, /*->19614*/
/*19493*/     OPC_CheckInteger, 60|128,20/*2620*/, 
/*19496*/     OPC_MoveParent,
/*19497*/     OPC_RecordChild1, // #0 = $mipid
/*19498*/     OPC_RecordChild2, // #1 = $rsrc
/*19499*/     OPC_MoveChild, 3,
/*19501*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19504*/     OPC_Scope, 54, /*->19560*/ // 2 children in Scope
/*19506*/       OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*19508*/       OPC_MoveParent,
/*19509*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*19511*/       OPC_EmitInteger, MVT::i32, 15, 
/*19514*/       OPC_EmitInteger, MVT::i1, 0, 
/*19517*/       OPC_EmitInteger, MVT::i1, 0, 
/*19520*/       OPC_EmitInteger, MVT::i1, 1, 
/*19523*/       OPC_EmitInteger, MVT::i1, 0, 
/*19526*/       OPC_EmitInteger, MVT::i1, 0, 
/*19529*/       OPC_EmitInteger, MVT::i1, 0, 
/*19532*/       OPC_EmitInteger, MVT::i1, 0, 
/*19535*/       OPC_EmitNode, TARGET_VAL(AMDGPU::V_MOV_B32_e32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #10
/*19543*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_GET_RESINFO), 0,
                    1/*#VTs*/, MVT::v4i32, 10/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 
                // Src: (intrinsic_wo_chain:v4i32 2620:iPTR, i32:i32:$mipid, v32i8:v32i8:$rsrc, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                // Dst: (IMAGE_GET_RESINFO:v4i32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, (V_MOV_B32_e32:i32 ?:i32:$mipid), ?:v32i8:$rsrc)
/*19560*/     /*Scope*/ 52, /*->19613*/
/*19561*/       OPC_MoveParent,
/*19562*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*19564*/       OPC_EmitInteger, MVT::i32, 15, 
/*19567*/       OPC_EmitInteger, MVT::i1, 0, 
/*19570*/       OPC_EmitInteger, MVT::i1, 0, 
/*19573*/       OPC_EmitInteger, MVT::i1, 0, 
/*19576*/       OPC_EmitInteger, MVT::i1, 0, 
/*19579*/       OPC_EmitInteger, MVT::i1, 0, 
/*19582*/       OPC_EmitInteger, MVT::i1, 0, 
/*19585*/       OPC_EmitInteger, MVT::i1, 0, 
/*19588*/       OPC_EmitNode, TARGET_VAL(AMDGPU::V_MOV_B32_e32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #10
/*19596*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_GET_RESINFO), 0,
                    1/*#VTs*/, MVT::v4i32, 10/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 
                // Src: (intrinsic_wo_chain:v4i32 2620:iPTR, i32:i32:$mipid, v32i8:v32i8:$rsrc, (imm:i32)) - Complexity = 11
                // Dst: (IMAGE_GET_RESINFO:v4i32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, (V_MOV_B32_e32:i32 ?:i32:$mipid), ?:v32i8:$rsrc)
/*19613*/     0, /*End of Scope*/
/*19614*/   /*Scope*/ 29, /*->19644*/
/*19615*/     OPC_CheckInteger, 33|128,20/*2593*/, 
/*19618*/     OPC_MoveParent,
/*19619*/     OPC_RecordChild1, // #0 = $ptr
/*19620*/     OPC_RecordChild2, // #1 = $BUFFER_ID
/*19621*/     OPC_MoveChild, 2,
/*19623*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19626*/     OPC_MoveParent,
/*19627*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*19629*/     OPC_CheckComplexPat, /*CP*/5, /*#*/0, // SelectGlobalValueVariableOffset:$ptr #2 #3
/*19632*/     OPC_EmitConvertToTarget, 1,
/*19634*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_VTX_TEXBUF), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 2, 3, 4, 
              // Src: (intrinsic_wo_chain:v4f32 2593:iPTR, ADDRGA_VAR_OFFSET:i32:$ptr, (imm:i32):$BUFFER_ID) - Complexity = 20
              // Dst: (TEX_VTX_TEXBUF:v4f32 ADDRGA_VAR_OFFSET:i32:$ptr, (imm:i32):$BUFFER_ID)
/*19644*/   /*Scope*/ 77, /*->19722*/
/*19645*/     OPC_CheckInteger, 71|128,19/*2503*/, 
/*19648*/     OPC_MoveParent,
/*19649*/     OPC_RecordChild1, // #0 = $src0
/*19650*/     OPC_RecordChild2, // #1 = $src1
/*19651*/     OPC_RecordChild3, // #2 = $src2
/*19652*/     OPC_RecordChild4, // #3 = $resourceId
/*19653*/     OPC_MoveChild, 4,
/*19655*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19658*/     OPC_MoveParent,
/*19659*/     OPC_RecordChild5, // #4 = $samplerId
/*19660*/     OPC_MoveChild, 5,
/*19662*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19665*/     OPC_MoveParent,
/*19666*/     OPC_RecordChild6, // #5 = $textureTarget
/*19667*/     OPC_MoveChild, 6,
/*19669*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19672*/     OPC_Scope, 24, /*->19698*/ // 2 children in Scope
/*19674*/       OPC_CheckPredicate, 38, // Predicate_TEX_SHADOW
/*19676*/       OPC_MoveParent,
/*19677*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*19679*/       OPC_EmitConvertToTarget, 3,
/*19681*/       OPC_EmitConvertToTarget, 4,
/*19683*/       OPC_EmitConvertToTarget, 5,
/*19685*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TXD_SHADOW), 0,
                    1/*#VTs*/, MVT::v4f32, 6/*#Ops*/, 0, 1, 2, 6, 7, 8, 
                // Src: (intrinsic_wo_chain:v4f32 2503:iPTR, v4f32:v4f32:$src0, v4f32:v4f32:$src1, v4f32:v4f32:$src2, (imm:i32):$resourceId, (imm:i32):$samplerId, (imm:i32)<<P:Predicate_TEX_SHADOW>>:$textureTarget) - Complexity = 18
                // Dst: (TXD_SHADOW:v4f32 v4f32:v4f32:$src0, v4f32:v4f32:$src1, v4f32:v4f32:$src2, (imm:i32):$resourceId, (imm:i32):$samplerId, (imm:i32):$textureTarget)
/*19698*/     /*Scope*/ 22, /*->19721*/
/*19699*/       OPC_MoveParent,
/*19700*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*19702*/       OPC_EmitConvertToTarget, 3,
/*19704*/       OPC_EmitConvertToTarget, 4,
/*19706*/       OPC_EmitConvertToTarget, 5,
/*19708*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TXD), 0,
                    1/*#VTs*/, MVT::v4f32, 6/*#Ops*/, 0, 1, 2, 6, 7, 8, 
                // Src: (intrinsic_wo_chain:v4f32 2503:iPTR, v4f32:v4f32:$src0, v4f32:v4f32:$src1, v4f32:v4f32:$src2, (imm:i32):$resourceId, (imm:i32):$samplerId, (imm:i32):$textureTarget) - Complexity = 17
                // Dst: (TXD:v4f32 v4f32:v4f32:$src0, v4f32:v4f32:$src1, v4f32:v4f32:$src2, (imm:i32):$resourceId, (imm:i32):$samplerId, (imm:i32):$textureTarget)
/*19721*/     0, /*End of Scope*/
/*19722*/   /*Scope*/ 29, /*->19752*/
/*19723*/     OPC_CheckInteger, 66|128,20/*2626*/, 
/*19726*/     OPC_MoveParent,
/*19727*/     OPC_RecordChild1, // #0 = $tlst
/*19728*/     OPC_RecordChild2, // #1 = $attr_offset
/*19729*/     OPC_MoveChild, 2,
/*19731*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19734*/     OPC_CheckPredicate, 23, // Predicate_IMM12bit
/*19736*/     OPC_MoveParent,
/*19737*/     OPC_RecordChild3, // #2 = $buf_idx_vgpr
/*19738*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*19740*/     OPC_EmitConvertToTarget, 1,
/*19742*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_FORMAT_XYZW_IDXEN), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 2, 3, 
              // Src: (intrinsic_wo_chain:v4f32 2626:iPTR, v16i8:v16i8:$tlst, (imm:i16)<<P:Predicate_IMM12bit>>:$attr_offset, i32:i32:$buf_idx_vgpr) - Complexity = 12
              // Dst: (BUFFER_LOAD_FORMAT_XYZW_IDXEN:v4f32 ?:v16i8:$tlst, ?:i32:$buf_idx_vgpr, (imm:i16):$attr_offset)
/*19752*/   /*Scope*/ 42|128,8/*1066*/, /*->20820*/
/*19754*/     OPC_CheckInteger, 61|128,20/*2621*/, 
/*19757*/     OPC_MoveParent,
/*19758*/     OPC_RecordChild1, // #0 = $addr
/*19759*/     OPC_Scope, 121|128,1/*249*/, /*->20011*/ // 5 children in Scope
/*19762*/       OPC_CheckChild1Type, MVT::v2i32,
/*19764*/       OPC_RecordChild2, // #1 = $rsrc
/*19765*/       OPC_RecordChild3, // #2 = $sampler
/*19766*/       OPC_MoveChild, 4,
/*19768*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19771*/       OPC_Scope, 47, /*->19820*/ // 5 children in Scope
/*19773*/         OPC_CheckPredicate, 39, // Predicate_TEX_RECT
/*19775*/         OPC_MoveParent,
/*19776*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*19778*/         OPC_EmitInteger, MVT::i32, 15, 
/*19781*/         OPC_EmitInteger, MVT::i1, 1, 
/*19784*/         OPC_EmitInteger, MVT::i1, 0, 
/*19787*/         OPC_EmitInteger, MVT::i1, 0, 
/*19790*/         OPC_EmitInteger, MVT::i1, 0, 
/*19793*/         OPC_EmitInteger, MVT::i1, 0, 
/*19796*/         OPC_EmitInteger, MVT::i1, 0, 
/*19799*/         OPC_EmitInteger, MVT::i1, 0, 
/*19802*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2621:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_RECT>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE:v4f32 15:i32, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*19820*/       /*Scope*/ 47, /*->19868*/
/*19821*/         OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*19823*/         OPC_MoveParent,
/*19824*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*19826*/         OPC_EmitInteger, MVT::i32, 15, 
/*19829*/         OPC_EmitInteger, MVT::i1, 0, 
/*19832*/         OPC_EmitInteger, MVT::i1, 0, 
/*19835*/         OPC_EmitInteger, MVT::i1, 1, 
/*19838*/         OPC_EmitInteger, MVT::i1, 0, 
/*19841*/         OPC_EmitInteger, MVT::i1, 0, 
/*19844*/         OPC_EmitInteger, MVT::i1, 0, 
/*19847*/         OPC_EmitInteger, MVT::i1, 0, 
/*19850*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2621:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*19868*/       /*Scope*/ 47, /*->19916*/
/*19869*/         OPC_CheckPredicate, 38, // Predicate_TEX_SHADOW
/*19871*/         OPC_MoveParent,
/*19872*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*19874*/         OPC_EmitInteger, MVT::i32, 15, 
/*19877*/         OPC_EmitInteger, MVT::i1, 0, 
/*19880*/         OPC_EmitInteger, MVT::i1, 0, 
/*19883*/         OPC_EmitInteger, MVT::i1, 0, 
/*19886*/         OPC_EmitInteger, MVT::i1, 0, 
/*19889*/         OPC_EmitInteger, MVT::i1, 0, 
/*19892*/         OPC_EmitInteger, MVT::i1, 0, 
/*19895*/         OPC_EmitInteger, MVT::i1, 0, 
/*19898*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2621:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*19916*/       /*Scope*/ 47, /*->19964*/
/*19917*/         OPC_CheckPredicate, 40, // Predicate_TEX_SHADOW_ARRAY
/*19919*/         OPC_MoveParent,
/*19920*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*19922*/         OPC_EmitInteger, MVT::i32, 15, 
/*19925*/         OPC_EmitInteger, MVT::i1, 0, 
/*19928*/         OPC_EmitInteger, MVT::i1, 0, 
/*19931*/         OPC_EmitInteger, MVT::i1, 1, 
/*19934*/         OPC_EmitInteger, MVT::i1, 0, 
/*19937*/         OPC_EmitInteger, MVT::i1, 0, 
/*19940*/         OPC_EmitInteger, MVT::i1, 0, 
/*19943*/         OPC_EmitInteger, MVT::i1, 0, 
/*19946*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2621:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*19964*/       /*Scope*/ 45, /*->20010*/
/*19965*/         OPC_MoveParent,
/*19966*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*19968*/         OPC_EmitInteger, MVT::i32, 15, 
/*19971*/         OPC_EmitInteger, MVT::i1, 0, 
/*19974*/         OPC_EmitInteger, MVT::i1, 0, 
/*19977*/         OPC_EmitInteger, MVT::i1, 0, 
/*19980*/         OPC_EmitInteger, MVT::i1, 0, 
/*19983*/         OPC_EmitInteger, MVT::i1, 0, 
/*19986*/         OPC_EmitInteger, MVT::i1, 0, 
/*19989*/         OPC_EmitInteger, MVT::i1, 0, 
/*19992*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2621:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)) - Complexity = 11
                  // Dst: (IMAGE_SAMPLE:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*20010*/       0, /*End of Scope*/
/*20011*/     /*Scope*/ 121|128,1/*249*/, /*->20262*/
/*20013*/       OPC_CheckChild1Type, MVT::v4i32,
/*20015*/       OPC_RecordChild2, // #1 = $rsrc
/*20016*/       OPC_RecordChild3, // #2 = $sampler
/*20017*/       OPC_MoveChild, 4,
/*20019*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*20022*/       OPC_Scope, 47, /*->20071*/ // 5 children in Scope
/*20024*/         OPC_CheckPredicate, 39, // Predicate_TEX_RECT
/*20026*/         OPC_MoveParent,
/*20027*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20029*/         OPC_EmitInteger, MVT::i32, 15, 
/*20032*/         OPC_EmitInteger, MVT::i1, 1, 
/*20035*/         OPC_EmitInteger, MVT::i1, 0, 
/*20038*/         OPC_EmitInteger, MVT::i1, 0, 
/*20041*/         OPC_EmitInteger, MVT::i1, 0, 
/*20044*/         OPC_EmitInteger, MVT::i1, 0, 
/*20047*/         OPC_EmitInteger, MVT::i1, 0, 
/*20050*/         OPC_EmitInteger, MVT::i1, 0, 
/*20053*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2621:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_RECT>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE:v4f32 15:i32, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*20071*/       /*Scope*/ 47, /*->20119*/
/*20072*/         OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*20074*/         OPC_MoveParent,
/*20075*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20077*/         OPC_EmitInteger, MVT::i32, 15, 
/*20080*/         OPC_EmitInteger, MVT::i1, 0, 
/*20083*/         OPC_EmitInteger, MVT::i1, 0, 
/*20086*/         OPC_EmitInteger, MVT::i1, 1, 
/*20089*/         OPC_EmitInteger, MVT::i1, 0, 
/*20092*/         OPC_EmitInteger, MVT::i1, 0, 
/*20095*/         OPC_EmitInteger, MVT::i1, 0, 
/*20098*/         OPC_EmitInteger, MVT::i1, 0, 
/*20101*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2621:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*20119*/       /*Scope*/ 47, /*->20167*/
/*20120*/         OPC_CheckPredicate, 38, // Predicate_TEX_SHADOW
/*20122*/         OPC_MoveParent,
/*20123*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20125*/         OPC_EmitInteger, MVT::i32, 15, 
/*20128*/         OPC_EmitInteger, MVT::i1, 0, 
/*20131*/         OPC_EmitInteger, MVT::i1, 0, 
/*20134*/         OPC_EmitInteger, MVT::i1, 0, 
/*20137*/         OPC_EmitInteger, MVT::i1, 0, 
/*20140*/         OPC_EmitInteger, MVT::i1, 0, 
/*20143*/         OPC_EmitInteger, MVT::i1, 0, 
/*20146*/         OPC_EmitInteger, MVT::i1, 0, 
/*20149*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2621:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*20167*/       /*Scope*/ 47, /*->20215*/
/*20168*/         OPC_CheckPredicate, 40, // Predicate_TEX_SHADOW_ARRAY
/*20170*/         OPC_MoveParent,
/*20171*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20173*/         OPC_EmitInteger, MVT::i32, 15, 
/*20176*/         OPC_EmitInteger, MVT::i1, 0, 
/*20179*/         OPC_EmitInteger, MVT::i1, 0, 
/*20182*/         OPC_EmitInteger, MVT::i1, 1, 
/*20185*/         OPC_EmitInteger, MVT::i1, 0, 
/*20188*/         OPC_EmitInteger, MVT::i1, 0, 
/*20191*/         OPC_EmitInteger, MVT::i1, 0, 
/*20194*/         OPC_EmitInteger, MVT::i1, 0, 
/*20197*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2621:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*20215*/       /*Scope*/ 45, /*->20261*/
/*20216*/         OPC_MoveParent,
/*20217*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20219*/         OPC_EmitInteger, MVT::i32, 15, 
/*20222*/         OPC_EmitInteger, MVT::i1, 0, 
/*20225*/         OPC_EmitInteger, MVT::i1, 0, 
/*20228*/         OPC_EmitInteger, MVT::i1, 0, 
/*20231*/         OPC_EmitInteger, MVT::i1, 0, 
/*20234*/         OPC_EmitInteger, MVT::i1, 0, 
/*20237*/         OPC_EmitInteger, MVT::i1, 0, 
/*20240*/         OPC_EmitInteger, MVT::i1, 0, 
/*20243*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2621:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)) - Complexity = 11
                  // Dst: (IMAGE_SAMPLE:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*20261*/       0, /*End of Scope*/
/*20262*/     /*Scope*/ 121|128,1/*249*/, /*->20513*/
/*20264*/       OPC_CheckChild1Type, MVT::v8i32,
/*20266*/       OPC_RecordChild2, // #1 = $rsrc
/*20267*/       OPC_RecordChild3, // #2 = $sampler
/*20268*/       OPC_MoveChild, 4,
/*20270*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*20273*/       OPC_Scope, 47, /*->20322*/ // 5 children in Scope
/*20275*/         OPC_CheckPredicate, 39, // Predicate_TEX_RECT
/*20277*/         OPC_MoveParent,
/*20278*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20280*/         OPC_EmitInteger, MVT::i32, 15, 
/*20283*/         OPC_EmitInteger, MVT::i1, 1, 
/*20286*/         OPC_EmitInteger, MVT::i1, 0, 
/*20289*/         OPC_EmitInteger, MVT::i1, 0, 
/*20292*/         OPC_EmitInteger, MVT::i1, 0, 
/*20295*/         OPC_EmitInteger, MVT::i1, 0, 
/*20298*/         OPC_EmitInteger, MVT::i1, 0, 
/*20301*/         OPC_EmitInteger, MVT::i1, 0, 
/*20304*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2621:iPTR, v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_RECT>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE:v4f32 15:i32, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*20322*/       /*Scope*/ 47, /*->20370*/
/*20323*/         OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*20325*/         OPC_MoveParent,
/*20326*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20328*/         OPC_EmitInteger, MVT::i32, 15, 
/*20331*/         OPC_EmitInteger, MVT::i1, 0, 
/*20334*/         OPC_EmitInteger, MVT::i1, 0, 
/*20337*/         OPC_EmitInteger, MVT::i1, 1, 
/*20340*/         OPC_EmitInteger, MVT::i1, 0, 
/*20343*/         OPC_EmitInteger, MVT::i1, 0, 
/*20346*/         OPC_EmitInteger, MVT::i1, 0, 
/*20349*/         OPC_EmitInteger, MVT::i1, 0, 
/*20352*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2621:iPTR, v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*20370*/       /*Scope*/ 47, /*->20418*/
/*20371*/         OPC_CheckPredicate, 38, // Predicate_TEX_SHADOW
/*20373*/         OPC_MoveParent,
/*20374*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20376*/         OPC_EmitInteger, MVT::i32, 15, 
/*20379*/         OPC_EmitInteger, MVT::i1, 0, 
/*20382*/         OPC_EmitInteger, MVT::i1, 0, 
/*20385*/         OPC_EmitInteger, MVT::i1, 0, 
/*20388*/         OPC_EmitInteger, MVT::i1, 0, 
/*20391*/         OPC_EmitInteger, MVT::i1, 0, 
/*20394*/         OPC_EmitInteger, MVT::i1, 0, 
/*20397*/         OPC_EmitInteger, MVT::i1, 0, 
/*20400*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2621:iPTR, v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*20418*/       /*Scope*/ 47, /*->20466*/
/*20419*/         OPC_CheckPredicate, 40, // Predicate_TEX_SHADOW_ARRAY
/*20421*/         OPC_MoveParent,
/*20422*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20424*/         OPC_EmitInteger, MVT::i32, 15, 
/*20427*/         OPC_EmitInteger, MVT::i1, 0, 
/*20430*/         OPC_EmitInteger, MVT::i1, 0, 
/*20433*/         OPC_EmitInteger, MVT::i1, 1, 
/*20436*/         OPC_EmitInteger, MVT::i1, 0, 
/*20439*/         OPC_EmitInteger, MVT::i1, 0, 
/*20442*/         OPC_EmitInteger, MVT::i1, 0, 
/*20445*/         OPC_EmitInteger, MVT::i1, 0, 
/*20448*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2621:iPTR, v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*20466*/       /*Scope*/ 45, /*->20512*/
/*20467*/         OPC_MoveParent,
/*20468*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20470*/         OPC_EmitInteger, MVT::i32, 15, 
/*20473*/         OPC_EmitInteger, MVT::i1, 0, 
/*20476*/         OPC_EmitInteger, MVT::i1, 0, 
/*20479*/         OPC_EmitInteger, MVT::i1, 0, 
/*20482*/         OPC_EmitInteger, MVT::i1, 0, 
/*20485*/         OPC_EmitInteger, MVT::i1, 0, 
/*20488*/         OPC_EmitInteger, MVT::i1, 0, 
/*20491*/         OPC_EmitInteger, MVT::i1, 0, 
/*20494*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2621:iPTR, v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)) - Complexity = 11
                  // Dst: (IMAGE_SAMPLE:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*20512*/       0, /*End of Scope*/
/*20513*/     /*Scope*/ 121|128,1/*249*/, /*->20764*/
/*20515*/       OPC_CheckChild1Type, MVT::v16i32,
/*20517*/       OPC_RecordChild2, // #1 = $rsrc
/*20518*/       OPC_RecordChild3, // #2 = $sampler
/*20519*/       OPC_MoveChild, 4,
/*20521*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*20524*/       OPC_Scope, 47, /*->20573*/ // 5 children in Scope
/*20526*/         OPC_CheckPredicate, 39, // Predicate_TEX_RECT
/*20528*/         OPC_MoveParent,
/*20529*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20531*/         OPC_EmitInteger, MVT::i32, 15, 
/*20534*/         OPC_EmitInteger, MVT::i1, 1, 
/*20537*/         OPC_EmitInteger, MVT::i1, 0, 
/*20540*/         OPC_EmitInteger, MVT::i1, 0, 
/*20543*/         OPC_EmitInteger, MVT::i1, 0, 
/*20546*/         OPC_EmitInteger, MVT::i1, 0, 
/*20549*/         OPC_EmitInteger, MVT::i1, 0, 
/*20552*/         OPC_EmitInteger, MVT::i1, 0, 
/*20555*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2621:iPTR, v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_RECT>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE:v4f32 15:i32, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*20573*/       /*Scope*/ 47, /*->20621*/
/*20574*/         OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*20576*/         OPC_MoveParent,
/*20577*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20579*/         OPC_EmitInteger, MVT::i32, 15, 
/*20582*/         OPC_EmitInteger, MVT::i1, 0, 
/*20585*/         OPC_EmitInteger, MVT::i1, 0, 
/*20588*/         OPC_EmitInteger, MVT::i1, 1, 
/*20591*/         OPC_EmitInteger, MVT::i1, 0, 
/*20594*/         OPC_EmitInteger, MVT::i1, 0, 
/*20597*/         OPC_EmitInteger, MVT::i1, 0, 
/*20600*/         OPC_EmitInteger, MVT::i1, 0, 
/*20603*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2621:iPTR, v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*20621*/       /*Scope*/ 47, /*->20669*/
/*20622*/         OPC_CheckPredicate, 38, // Predicate_TEX_SHADOW
/*20624*/         OPC_MoveParent,
/*20625*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20627*/         OPC_EmitInteger, MVT::i32, 15, 
/*20630*/         OPC_EmitInteger, MVT::i1, 0, 
/*20633*/         OPC_EmitInteger, MVT::i1, 0, 
/*20636*/         OPC_EmitInteger, MVT::i1, 0, 
/*20639*/         OPC_EmitInteger, MVT::i1, 0, 
/*20642*/         OPC_EmitInteger, MVT::i1, 0, 
/*20645*/         OPC_EmitInteger, MVT::i1, 0, 
/*20648*/         OPC_EmitInteger, MVT::i1, 0, 
/*20651*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2621:iPTR, v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*20669*/       /*Scope*/ 47, /*->20717*/
/*20670*/         OPC_CheckPredicate, 40, // Predicate_TEX_SHADOW_ARRAY
/*20672*/         OPC_MoveParent,
/*20673*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20675*/         OPC_EmitInteger, MVT::i32, 15, 
/*20678*/         OPC_EmitInteger, MVT::i1, 0, 
/*20681*/         OPC_EmitInteger, MVT::i1, 0, 
/*20684*/         OPC_EmitInteger, MVT::i1, 1, 
/*20687*/         OPC_EmitInteger, MVT::i1, 0, 
/*20690*/         OPC_EmitInteger, MVT::i1, 0, 
/*20693*/         OPC_EmitInteger, MVT::i1, 0, 
/*20696*/         OPC_EmitInteger, MVT::i1, 0, 
/*20699*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2621:iPTR, v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*20717*/       /*Scope*/ 45, /*->20763*/
/*20718*/         OPC_MoveParent,
/*20719*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20721*/         OPC_EmitInteger, MVT::i32, 15, 
/*20724*/         OPC_EmitInteger, MVT::i1, 0, 
/*20727*/         OPC_EmitInteger, MVT::i1, 0, 
/*20730*/         OPC_EmitInteger, MVT::i1, 0, 
/*20733*/         OPC_EmitInteger, MVT::i1, 0, 
/*20736*/         OPC_EmitInteger, MVT::i1, 0, 
/*20739*/         OPC_EmitInteger, MVT::i1, 0, 
/*20742*/         OPC_EmitInteger, MVT::i1, 0, 
/*20745*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2621:iPTR, v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)) - Complexity = 11
                  // Dst: (IMAGE_SAMPLE:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*20763*/       0, /*End of Scope*/
/*20764*/     /*Scope*/ 54, /*->20819*/
/*20765*/       OPC_CheckChild1Type, MVT::v1i32,
/*20767*/       OPC_RecordChild2, // #1 = $rsrc
/*20768*/       OPC_RecordChild3, // #2 = $sampler
/*20769*/       OPC_MoveChild, 4,
/*20771*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*20774*/       OPC_MoveParent,
/*20775*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20777*/       OPC_EmitInteger, MVT::i32, 15, 
/*20780*/       OPC_EmitInteger, MVT::i1, 0, 
/*20783*/       OPC_EmitInteger, MVT::i1, 0, 
/*20786*/       OPC_EmitInteger, MVT::i1, 0, 
/*20789*/       OPC_EmitInteger, MVT::i1, 0, 
/*20792*/       OPC_EmitInteger, MVT::i1, 0, 
/*20795*/       OPC_EmitInteger, MVT::i1, 0, 
/*20798*/       OPC_EmitInteger, MVT::i1, 0, 
/*20801*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (intrinsic_wo_chain:v4f32 2621:iPTR, v1i32:v1i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)) - Complexity = 11
                // Dst: (IMAGE_SAMPLE:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v1i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*20819*/     0, /*End of Scope*/
/*20820*/   /*Scope*/ 51|128,6/*819*/, /*->21641*/
/*20822*/     OPC_CheckInteger, 64|128,20/*2624*/, 
/*20825*/     OPC_MoveParent,
/*20826*/     OPC_RecordChild1, // #0 = $addr
/*20827*/     OPC_Scope, 73|128,1/*201*/, /*->21031*/ // 4 children in Scope
/*20830*/       OPC_CheckChild1Type, MVT::v2i32,
/*20832*/       OPC_RecordChild2, // #1 = $rsrc
/*20833*/       OPC_RecordChild3, // #2 = $sampler
/*20834*/       OPC_MoveChild, 4,
/*20836*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*20839*/       OPC_Scope, 47, /*->20888*/ // 4 children in Scope
/*20841*/         OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*20843*/         OPC_MoveParent,
/*20844*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20846*/         OPC_EmitInteger, MVT::i32, 15, 
/*20849*/         OPC_EmitInteger, MVT::i1, 0, 
/*20852*/         OPC_EmitInteger, MVT::i1, 0, 
/*20855*/         OPC_EmitInteger, MVT::i1, 1, 
/*20858*/         OPC_EmitInteger, MVT::i1, 0, 
/*20861*/         OPC_EmitInteger, MVT::i1, 0, 
/*20864*/         OPC_EmitInteger, MVT::i1, 0, 
/*20867*/         OPC_EmitInteger, MVT::i1, 0, 
/*20870*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_L), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2624:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_L:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*20888*/       /*Scope*/ 47, /*->20936*/
/*20889*/         OPC_CheckPredicate, 38, // Predicate_TEX_SHADOW
/*20891*/         OPC_MoveParent,
/*20892*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20894*/         OPC_EmitInteger, MVT::i32, 15, 
/*20897*/         OPC_EmitInteger, MVT::i1, 0, 
/*20900*/         OPC_EmitInteger, MVT::i1, 0, 
/*20903*/         OPC_EmitInteger, MVT::i1, 0, 
/*20906*/         OPC_EmitInteger, MVT::i1, 0, 
/*20909*/         OPC_EmitInteger, MVT::i1, 0, 
/*20912*/         OPC_EmitInteger, MVT::i1, 0, 
/*20915*/         OPC_EmitInteger, MVT::i1, 0, 
/*20918*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_L), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2624:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_L:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*20936*/       /*Scope*/ 47, /*->20984*/
/*20937*/         OPC_CheckPredicate, 40, // Predicate_TEX_SHADOW_ARRAY
/*20939*/         OPC_MoveParent,
/*20940*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20942*/         OPC_EmitInteger, MVT::i32, 15, 
/*20945*/         OPC_EmitInteger, MVT::i1, 0, 
/*20948*/         OPC_EmitInteger, MVT::i1, 0, 
/*20951*/         OPC_EmitInteger, MVT::i1, 1, 
/*20954*/         OPC_EmitInteger, MVT::i1, 0, 
/*20957*/         OPC_EmitInteger, MVT::i1, 0, 
/*20960*/         OPC_EmitInteger, MVT::i1, 0, 
/*20963*/         OPC_EmitInteger, MVT::i1, 0, 
/*20966*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_L), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2624:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_L:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*20984*/       /*Scope*/ 45, /*->21030*/
/*20985*/         OPC_MoveParent,
/*20986*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20988*/         OPC_EmitInteger, MVT::i32, 15, 
/*20991*/         OPC_EmitInteger, MVT::i1, 0, 
/*20994*/         OPC_EmitInteger, MVT::i1, 0, 
/*20997*/         OPC_EmitInteger, MVT::i1, 0, 
/*21000*/         OPC_EmitInteger, MVT::i1, 0, 
/*21003*/         OPC_EmitInteger, MVT::i1, 0, 
/*21006*/         OPC_EmitInteger, MVT::i1, 0, 
/*21009*/         OPC_EmitInteger, MVT::i1, 0, 
/*21012*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_L), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2624:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)) - Complexity = 11
                  // Dst: (IMAGE_SAMPLE_L:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*21030*/       0, /*End of Scope*/
/*21031*/     /*Scope*/ 73|128,1/*201*/, /*->21234*/
/*21033*/       OPC_CheckChild1Type, MVT::v4i32,
/*21035*/       OPC_RecordChild2, // #1 = $rsrc
/*21036*/       OPC_RecordChild3, // #2 = $sampler
/*21037*/       OPC_MoveChild, 4,
/*21039*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*21042*/       OPC_Scope, 47, /*->21091*/ // 4 children in Scope
/*21044*/         OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*21046*/         OPC_MoveParent,
/*21047*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21049*/         OPC_EmitInteger, MVT::i32, 15, 
/*21052*/         OPC_EmitInteger, MVT::i1, 0, 
/*21055*/         OPC_EmitInteger, MVT::i1, 0, 
/*21058*/         OPC_EmitInteger, MVT::i1, 1, 
/*21061*/         OPC_EmitInteger, MVT::i1, 0, 
/*21064*/         OPC_EmitInteger, MVT::i1, 0, 
/*21067*/         OPC_EmitInteger, MVT::i1, 0, 
/*21070*/         OPC_EmitInteger, MVT::i1, 0, 
/*21073*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_L), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2624:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_L:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*21091*/       /*Scope*/ 47, /*->21139*/
/*21092*/         OPC_CheckPredicate, 38, // Predicate_TEX_SHADOW
/*21094*/         OPC_MoveParent,
/*21095*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21097*/         OPC_EmitInteger, MVT::i32, 15, 
/*21100*/         OPC_EmitInteger, MVT::i1, 0, 
/*21103*/         OPC_EmitInteger, MVT::i1, 0, 
/*21106*/         OPC_EmitInteger, MVT::i1, 0, 
/*21109*/         OPC_EmitInteger, MVT::i1, 0, 
/*21112*/         OPC_EmitInteger, MVT::i1, 0, 
/*21115*/         OPC_EmitInteger, MVT::i1, 0, 
/*21118*/         OPC_EmitInteger, MVT::i1, 0, 
/*21121*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_L), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2624:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_L:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*21139*/       /*Scope*/ 47, /*->21187*/
/*21140*/         OPC_CheckPredicate, 40, // Predicate_TEX_SHADOW_ARRAY
/*21142*/         OPC_MoveParent,
/*21143*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21145*/         OPC_EmitInteger, MVT::i32, 15, 
/*21148*/         OPC_EmitInteger, MVT::i1, 0, 
/*21151*/         OPC_EmitInteger, MVT::i1, 0, 
/*21154*/         OPC_EmitInteger, MVT::i1, 1, 
/*21157*/         OPC_EmitInteger, MVT::i1, 0, 
/*21160*/         OPC_EmitInteger, MVT::i1, 0, 
/*21163*/         OPC_EmitInteger, MVT::i1, 0, 
/*21166*/         OPC_EmitInteger, MVT::i1, 0, 
/*21169*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_L), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2624:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_L:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*21187*/       /*Scope*/ 45, /*->21233*/
/*21188*/         OPC_MoveParent,
/*21189*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21191*/         OPC_EmitInteger, MVT::i32, 15, 
/*21194*/         OPC_EmitInteger, MVT::i1, 0, 
/*21197*/         OPC_EmitInteger, MVT::i1, 0, 
/*21200*/         OPC_EmitInteger, MVT::i1, 0, 
/*21203*/         OPC_EmitInteger, MVT::i1, 0, 
/*21206*/         OPC_EmitInteger, MVT::i1, 0, 
/*21209*/         OPC_EmitInteger, MVT::i1, 0, 
/*21212*/         OPC_EmitInteger, MVT::i1, 0, 
/*21215*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_L), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2624:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)) - Complexity = 11
                  // Dst: (IMAGE_SAMPLE_L:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*21233*/       0, /*End of Scope*/
/*21234*/     /*Scope*/ 73|128,1/*201*/, /*->21437*/
/*21236*/       OPC_CheckChild1Type, MVT::v8i32,
/*21238*/       OPC_RecordChild2, // #1 = $rsrc
/*21239*/       OPC_RecordChild3, // #2 = $sampler
/*21240*/       OPC_MoveChild, 4,
/*21242*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*21245*/       OPC_Scope, 47, /*->21294*/ // 4 children in Scope
/*21247*/         OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*21249*/         OPC_MoveParent,
/*21250*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21252*/         OPC_EmitInteger, MVT::i32, 15, 
/*21255*/         OPC_EmitInteger, MVT::i1, 0, 
/*21258*/         OPC_EmitInteger, MVT::i1, 0, 
/*21261*/         OPC_EmitInteger, MVT::i1, 1, 
/*21264*/         OPC_EmitInteger, MVT::i1, 0, 
/*21267*/         OPC_EmitInteger, MVT::i1, 0, 
/*21270*/         OPC_EmitInteger, MVT::i1, 0, 
/*21273*/         OPC_EmitInteger, MVT::i1, 0, 
/*21276*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_L), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2624:iPTR, v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_L:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*21294*/       /*Scope*/ 47, /*->21342*/
/*21295*/         OPC_CheckPredicate, 38, // Predicate_TEX_SHADOW
/*21297*/         OPC_MoveParent,
/*21298*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21300*/         OPC_EmitInteger, MVT::i32, 15, 
/*21303*/         OPC_EmitInteger, MVT::i1, 0, 
/*21306*/         OPC_EmitInteger, MVT::i1, 0, 
/*21309*/         OPC_EmitInteger, MVT::i1, 0, 
/*21312*/         OPC_EmitInteger, MVT::i1, 0, 
/*21315*/         OPC_EmitInteger, MVT::i1, 0, 
/*21318*/         OPC_EmitInteger, MVT::i1, 0, 
/*21321*/         OPC_EmitInteger, MVT::i1, 0, 
/*21324*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_L), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2624:iPTR, v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_L:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*21342*/       /*Scope*/ 47, /*->21390*/
/*21343*/         OPC_CheckPredicate, 40, // Predicate_TEX_SHADOW_ARRAY
/*21345*/         OPC_MoveParent,
/*21346*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21348*/         OPC_EmitInteger, MVT::i32, 15, 
/*21351*/         OPC_EmitInteger, MVT::i1, 0, 
/*21354*/         OPC_EmitInteger, MVT::i1, 0, 
/*21357*/         OPC_EmitInteger, MVT::i1, 1, 
/*21360*/         OPC_EmitInteger, MVT::i1, 0, 
/*21363*/         OPC_EmitInteger, MVT::i1, 0, 
/*21366*/         OPC_EmitInteger, MVT::i1, 0, 
/*21369*/         OPC_EmitInteger, MVT::i1, 0, 
/*21372*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_L), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2624:iPTR, v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_L:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*21390*/       /*Scope*/ 45, /*->21436*/
/*21391*/         OPC_MoveParent,
/*21392*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21394*/         OPC_EmitInteger, MVT::i32, 15, 
/*21397*/         OPC_EmitInteger, MVT::i1, 0, 
/*21400*/         OPC_EmitInteger, MVT::i1, 0, 
/*21403*/         OPC_EmitInteger, MVT::i1, 0, 
/*21406*/         OPC_EmitInteger, MVT::i1, 0, 
/*21409*/         OPC_EmitInteger, MVT::i1, 0, 
/*21412*/         OPC_EmitInteger, MVT::i1, 0, 
/*21415*/         OPC_EmitInteger, MVT::i1, 0, 
/*21418*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_L), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2624:iPTR, v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)) - Complexity = 11
                  // Dst: (IMAGE_SAMPLE_L:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*21436*/       0, /*End of Scope*/
/*21437*/     /*Scope*/ 73|128,1/*201*/, /*->21640*/
/*21439*/       OPC_CheckChild1Type, MVT::v16i32,
/*21441*/       OPC_RecordChild2, // #1 = $rsrc
/*21442*/       OPC_RecordChild3, // #2 = $sampler
/*21443*/       OPC_MoveChild, 4,
/*21445*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*21448*/       OPC_Scope, 47, /*->21497*/ // 4 children in Scope
/*21450*/         OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*21452*/         OPC_MoveParent,
/*21453*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21455*/         OPC_EmitInteger, MVT::i32, 15, 
/*21458*/         OPC_EmitInteger, MVT::i1, 0, 
/*21461*/         OPC_EmitInteger, MVT::i1, 0, 
/*21464*/         OPC_EmitInteger, MVT::i1, 1, 
/*21467*/         OPC_EmitInteger, MVT::i1, 0, 
/*21470*/         OPC_EmitInteger, MVT::i1, 0, 
/*21473*/         OPC_EmitInteger, MVT::i1, 0, 
/*21476*/         OPC_EmitInteger, MVT::i1, 0, 
/*21479*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_L), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2624:iPTR, v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_L:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*21497*/       /*Scope*/ 47, /*->21545*/
/*21498*/         OPC_CheckPredicate, 38, // Predicate_TEX_SHADOW
/*21500*/         OPC_MoveParent,
/*21501*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21503*/         OPC_EmitInteger, MVT::i32, 15, 
/*21506*/         OPC_EmitInteger, MVT::i1, 0, 
/*21509*/         OPC_EmitInteger, MVT::i1, 0, 
/*21512*/         OPC_EmitInteger, MVT::i1, 0, 
/*21515*/         OPC_EmitInteger, MVT::i1, 0, 
/*21518*/         OPC_EmitInteger, MVT::i1, 0, 
/*21521*/         OPC_EmitInteger, MVT::i1, 0, 
/*21524*/         OPC_EmitInteger, MVT::i1, 0, 
/*21527*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_L), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2624:iPTR, v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_L:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*21545*/       /*Scope*/ 47, /*->21593*/
/*21546*/         OPC_CheckPredicate, 40, // Predicate_TEX_SHADOW_ARRAY
/*21548*/         OPC_MoveParent,
/*21549*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21551*/         OPC_EmitInteger, MVT::i32, 15, 
/*21554*/         OPC_EmitInteger, MVT::i1, 0, 
/*21557*/         OPC_EmitInteger, MVT::i1, 0, 
/*21560*/         OPC_EmitInteger, MVT::i1, 1, 
/*21563*/         OPC_EmitInteger, MVT::i1, 0, 
/*21566*/         OPC_EmitInteger, MVT::i1, 0, 
/*21569*/         OPC_EmitInteger, MVT::i1, 0, 
/*21572*/         OPC_EmitInteger, MVT::i1, 0, 
/*21575*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_L), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2624:iPTR, v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_L:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*21593*/       /*Scope*/ 45, /*->21639*/
/*21594*/         OPC_MoveParent,
/*21595*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21597*/         OPC_EmitInteger, MVT::i32, 15, 
/*21600*/         OPC_EmitInteger, MVT::i1, 0, 
/*21603*/         OPC_EmitInteger, MVT::i1, 0, 
/*21606*/         OPC_EmitInteger, MVT::i1, 0, 
/*21609*/         OPC_EmitInteger, MVT::i1, 0, 
/*21612*/         OPC_EmitInteger, MVT::i1, 0, 
/*21615*/         OPC_EmitInteger, MVT::i1, 0, 
/*21618*/         OPC_EmitInteger, MVT::i1, 0, 
/*21621*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_L), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2624:iPTR, v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)) - Complexity = 11
                  // Dst: (IMAGE_SAMPLE_L:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*21639*/       0, /*End of Scope*/
/*21640*/     0, /*End of Scope*/
/*21641*/   /*Scope*/ 51|128,6/*819*/, /*->22462*/
/*21643*/     OPC_CheckInteger, 62|128,20/*2622*/, 
/*21646*/     OPC_MoveParent,
/*21647*/     OPC_RecordChild1, // #0 = $addr
/*21648*/     OPC_Scope, 73|128,1/*201*/, /*->21852*/ // 4 children in Scope
/*21651*/       OPC_CheckChild1Type, MVT::v2i32,
/*21653*/       OPC_RecordChild2, // #1 = $rsrc
/*21654*/       OPC_RecordChild3, // #2 = $sampler
/*21655*/       OPC_MoveChild, 4,
/*21657*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*21660*/       OPC_Scope, 47, /*->21709*/ // 4 children in Scope
/*21662*/         OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*21664*/         OPC_MoveParent,
/*21665*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21667*/         OPC_EmitInteger, MVT::i32, 15, 
/*21670*/         OPC_EmitInteger, MVT::i1, 0, 
/*21673*/         OPC_EmitInteger, MVT::i1, 0, 
/*21676*/         OPC_EmitInteger, MVT::i1, 1, 
/*21679*/         OPC_EmitInteger, MVT::i1, 0, 
/*21682*/         OPC_EmitInteger, MVT::i1, 0, 
/*21685*/         OPC_EmitInteger, MVT::i1, 0, 
/*21688*/         OPC_EmitInteger, MVT::i1, 0, 
/*21691*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_B), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2622:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_B:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*21709*/       /*Scope*/ 47, /*->21757*/
/*21710*/         OPC_CheckPredicate, 38, // Predicate_TEX_SHADOW
/*21712*/         OPC_MoveParent,
/*21713*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21715*/         OPC_EmitInteger, MVT::i32, 15, 
/*21718*/         OPC_EmitInteger, MVT::i1, 0, 
/*21721*/         OPC_EmitInteger, MVT::i1, 0, 
/*21724*/         OPC_EmitInteger, MVT::i1, 0, 
/*21727*/         OPC_EmitInteger, MVT::i1, 0, 
/*21730*/         OPC_EmitInteger, MVT::i1, 0, 
/*21733*/         OPC_EmitInteger, MVT::i1, 0, 
/*21736*/         OPC_EmitInteger, MVT::i1, 0, 
/*21739*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_B), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2622:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_B:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*21757*/       /*Scope*/ 47, /*->21805*/
/*21758*/         OPC_CheckPredicate, 40, // Predicate_TEX_SHADOW_ARRAY
/*21760*/         OPC_MoveParent,
/*21761*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21763*/         OPC_EmitInteger, MVT::i32, 15, 
/*21766*/         OPC_EmitInteger, MVT::i1, 0, 
/*21769*/         OPC_EmitInteger, MVT::i1, 0, 
/*21772*/         OPC_EmitInteger, MVT::i1, 1, 
/*21775*/         OPC_EmitInteger, MVT::i1, 0, 
/*21778*/         OPC_EmitInteger, MVT::i1, 0, 
/*21781*/         OPC_EmitInteger, MVT::i1, 0, 
/*21784*/         OPC_EmitInteger, MVT::i1, 0, 
/*21787*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_B), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2622:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_B:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*21805*/       /*Scope*/ 45, /*->21851*/
/*21806*/         OPC_MoveParent,
/*21807*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21809*/         OPC_EmitInteger, MVT::i32, 15, 
/*21812*/         OPC_EmitInteger, MVT::i1, 0, 
/*21815*/         OPC_EmitInteger, MVT::i1, 0, 
/*21818*/         OPC_EmitInteger, MVT::i1, 0, 
/*21821*/         OPC_EmitInteger, MVT::i1, 0, 
/*21824*/         OPC_EmitInteger, MVT::i1, 0, 
/*21827*/         OPC_EmitInteger, MVT::i1, 0, 
/*21830*/         OPC_EmitInteger, MVT::i1, 0, 
/*21833*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_B), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2622:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)) - Complexity = 11
                  // Dst: (IMAGE_SAMPLE_B:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*21851*/       0, /*End of Scope*/
/*21852*/     /*Scope*/ 73|128,1/*201*/, /*->22055*/
/*21854*/       OPC_CheckChild1Type, MVT::v4i32,
/*21856*/       OPC_RecordChild2, // #1 = $rsrc
/*21857*/       OPC_RecordChild3, // #2 = $sampler
/*21858*/       OPC_MoveChild, 4,
/*21860*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*21863*/       OPC_Scope, 47, /*->21912*/ // 4 children in Scope
/*21865*/         OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*21867*/         OPC_MoveParent,
/*21868*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21870*/         OPC_EmitInteger, MVT::i32, 15, 
/*21873*/         OPC_EmitInteger, MVT::i1, 0, 
/*21876*/         OPC_EmitInteger, MVT::i1, 0, 
/*21879*/         OPC_EmitInteger, MVT::i1, 1, 
/*21882*/         OPC_EmitInteger, MVT::i1, 0, 
/*21885*/         OPC_EmitInteger, MVT::i1, 0, 
/*21888*/         OPC_EmitInteger, MVT::i1, 0, 
/*21891*/         OPC_EmitInteger, MVT::i1, 0, 
/*21894*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_B), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2622:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_B:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*21912*/       /*Scope*/ 47, /*->21960*/
/*21913*/         OPC_CheckPredicate, 38, // Predicate_TEX_SHADOW
/*21915*/         OPC_MoveParent,
/*21916*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21918*/         OPC_EmitInteger, MVT::i32, 15, 
/*21921*/         OPC_EmitInteger, MVT::i1, 0, 
/*21924*/         OPC_EmitInteger, MVT::i1, 0, 
/*21927*/         OPC_EmitInteger, MVT::i1, 0, 
/*21930*/         OPC_EmitInteger, MVT::i1, 0, 
/*21933*/         OPC_EmitInteger, MVT::i1, 0, 
/*21936*/         OPC_EmitInteger, MVT::i1, 0, 
/*21939*/         OPC_EmitInteger, MVT::i1, 0, 
/*21942*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_B), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2622:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_B:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*21960*/       /*Scope*/ 47, /*->22008*/
/*21961*/         OPC_CheckPredicate, 40, // Predicate_TEX_SHADOW_ARRAY
/*21963*/         OPC_MoveParent,
/*21964*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21966*/         OPC_EmitInteger, MVT::i32, 15, 
/*21969*/         OPC_EmitInteger, MVT::i1, 0, 
/*21972*/         OPC_EmitInteger, MVT::i1, 0, 
/*21975*/         OPC_EmitInteger, MVT::i1, 1, 
/*21978*/         OPC_EmitInteger, MVT::i1, 0, 
/*21981*/         OPC_EmitInteger, MVT::i1, 0, 
/*21984*/         OPC_EmitInteger, MVT::i1, 0, 
/*21987*/         OPC_EmitInteger, MVT::i1, 0, 
/*21990*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_B), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2622:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_B:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*22008*/       /*Scope*/ 45, /*->22054*/
/*22009*/         OPC_MoveParent,
/*22010*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22012*/         OPC_EmitInteger, MVT::i32, 15, 
/*22015*/         OPC_EmitInteger, MVT::i1, 0, 
/*22018*/         OPC_EmitInteger, MVT::i1, 0, 
/*22021*/         OPC_EmitInteger, MVT::i1, 0, 
/*22024*/         OPC_EmitInteger, MVT::i1, 0, 
/*22027*/         OPC_EmitInteger, MVT::i1, 0, 
/*22030*/         OPC_EmitInteger, MVT::i1, 0, 
/*22033*/         OPC_EmitInteger, MVT::i1, 0, 
/*22036*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_B), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2622:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)) - Complexity = 11
                  // Dst: (IMAGE_SAMPLE_B:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*22054*/       0, /*End of Scope*/
/*22055*/     /*Scope*/ 73|128,1/*201*/, /*->22258*/
/*22057*/       OPC_CheckChild1Type, MVT::v8i32,
/*22059*/       OPC_RecordChild2, // #1 = $rsrc
/*22060*/       OPC_RecordChild3, // #2 = $sampler
/*22061*/       OPC_MoveChild, 4,
/*22063*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*22066*/       OPC_Scope, 47, /*->22115*/ // 4 children in Scope
/*22068*/         OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*22070*/         OPC_MoveParent,
/*22071*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22073*/         OPC_EmitInteger, MVT::i32, 15, 
/*22076*/         OPC_EmitInteger, MVT::i1, 0, 
/*22079*/         OPC_EmitInteger, MVT::i1, 0, 
/*22082*/         OPC_EmitInteger, MVT::i1, 1, 
/*22085*/         OPC_EmitInteger, MVT::i1, 0, 
/*22088*/         OPC_EmitInteger, MVT::i1, 0, 
/*22091*/         OPC_EmitInteger, MVT::i1, 0, 
/*22094*/         OPC_EmitInteger, MVT::i1, 0, 
/*22097*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_B), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2622:iPTR, v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_B:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*22115*/       /*Scope*/ 47, /*->22163*/
/*22116*/         OPC_CheckPredicate, 38, // Predicate_TEX_SHADOW
/*22118*/         OPC_MoveParent,
/*22119*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22121*/         OPC_EmitInteger, MVT::i32, 15, 
/*22124*/         OPC_EmitInteger, MVT::i1, 0, 
/*22127*/         OPC_EmitInteger, MVT::i1, 0, 
/*22130*/         OPC_EmitInteger, MVT::i1, 0, 
/*22133*/         OPC_EmitInteger, MVT::i1, 0, 
/*22136*/         OPC_EmitInteger, MVT::i1, 0, 
/*22139*/         OPC_EmitInteger, MVT::i1, 0, 
/*22142*/         OPC_EmitInteger, MVT::i1, 0, 
/*22145*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_B), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2622:iPTR, v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_B:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*22163*/       /*Scope*/ 47, /*->22211*/
/*22164*/         OPC_CheckPredicate, 40, // Predicate_TEX_SHADOW_ARRAY
/*22166*/         OPC_MoveParent,
/*22167*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22169*/         OPC_EmitInteger, MVT::i32, 15, 
/*22172*/         OPC_EmitInteger, MVT::i1, 0, 
/*22175*/         OPC_EmitInteger, MVT::i1, 0, 
/*22178*/         OPC_EmitInteger, MVT::i1, 1, 
/*22181*/         OPC_EmitInteger, MVT::i1, 0, 
/*22184*/         OPC_EmitInteger, MVT::i1, 0, 
/*22187*/         OPC_EmitInteger, MVT::i1, 0, 
/*22190*/         OPC_EmitInteger, MVT::i1, 0, 
/*22193*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_B), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2622:iPTR, v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_B:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*22211*/       /*Scope*/ 45, /*->22257*/
/*22212*/         OPC_MoveParent,
/*22213*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22215*/         OPC_EmitInteger, MVT::i32, 15, 
/*22218*/         OPC_EmitInteger, MVT::i1, 0, 
/*22221*/         OPC_EmitInteger, MVT::i1, 0, 
/*22224*/         OPC_EmitInteger, MVT::i1, 0, 
/*22227*/         OPC_EmitInteger, MVT::i1, 0, 
/*22230*/         OPC_EmitInteger, MVT::i1, 0, 
/*22233*/         OPC_EmitInteger, MVT::i1, 0, 
/*22236*/         OPC_EmitInteger, MVT::i1, 0, 
/*22239*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_B), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2622:iPTR, v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)) - Complexity = 11
                  // Dst: (IMAGE_SAMPLE_B:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*22257*/       0, /*End of Scope*/
/*22258*/     /*Scope*/ 73|128,1/*201*/, /*->22461*/
/*22260*/       OPC_CheckChild1Type, MVT::v16i32,
/*22262*/       OPC_RecordChild2, // #1 = $rsrc
/*22263*/       OPC_RecordChild3, // #2 = $sampler
/*22264*/       OPC_MoveChild, 4,
/*22266*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*22269*/       OPC_Scope, 47, /*->22318*/ // 4 children in Scope
/*22271*/         OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*22273*/         OPC_MoveParent,
/*22274*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22276*/         OPC_EmitInteger, MVT::i32, 15, 
/*22279*/         OPC_EmitInteger, MVT::i1, 0, 
/*22282*/         OPC_EmitInteger, MVT::i1, 0, 
/*22285*/         OPC_EmitInteger, MVT::i1, 1, 
/*22288*/         OPC_EmitInteger, MVT::i1, 0, 
/*22291*/         OPC_EmitInteger, MVT::i1, 0, 
/*22294*/         OPC_EmitInteger, MVT::i1, 0, 
/*22297*/         OPC_EmitInteger, MVT::i1, 0, 
/*22300*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_B), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2622:iPTR, v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_B:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*22318*/       /*Scope*/ 47, /*->22366*/
/*22319*/         OPC_CheckPredicate, 38, // Predicate_TEX_SHADOW
/*22321*/         OPC_MoveParent,
/*22322*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22324*/         OPC_EmitInteger, MVT::i32, 15, 
/*22327*/         OPC_EmitInteger, MVT::i1, 0, 
/*22330*/         OPC_EmitInteger, MVT::i1, 0, 
/*22333*/         OPC_EmitInteger, MVT::i1, 0, 
/*22336*/         OPC_EmitInteger, MVT::i1, 0, 
/*22339*/         OPC_EmitInteger, MVT::i1, 0, 
/*22342*/         OPC_EmitInteger, MVT::i1, 0, 
/*22345*/         OPC_EmitInteger, MVT::i1, 0, 
/*22348*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_B), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2622:iPTR, v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_B:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*22366*/       /*Scope*/ 47, /*->22414*/
/*22367*/         OPC_CheckPredicate, 40, // Predicate_TEX_SHADOW_ARRAY
/*22369*/         OPC_MoveParent,
/*22370*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22372*/         OPC_EmitInteger, MVT::i32, 15, 
/*22375*/         OPC_EmitInteger, MVT::i1, 0, 
/*22378*/         OPC_EmitInteger, MVT::i1, 0, 
/*22381*/         OPC_EmitInteger, MVT::i1, 1, 
/*22384*/         OPC_EmitInteger, MVT::i1, 0, 
/*22387*/         OPC_EmitInteger, MVT::i1, 0, 
/*22390*/         OPC_EmitInteger, MVT::i1, 0, 
/*22393*/         OPC_EmitInteger, MVT::i1, 0, 
/*22396*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_B), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2622:iPTR, v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_B:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*22414*/       /*Scope*/ 45, /*->22460*/
/*22415*/         OPC_MoveParent,
/*22416*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22418*/         OPC_EmitInteger, MVT::i32, 15, 
/*22421*/         OPC_EmitInteger, MVT::i1, 0, 
/*22424*/         OPC_EmitInteger, MVT::i1, 0, 
/*22427*/         OPC_EmitInteger, MVT::i1, 0, 
/*22430*/         OPC_EmitInteger, MVT::i1, 0, 
/*22433*/         OPC_EmitInteger, MVT::i1, 0, 
/*22436*/         OPC_EmitInteger, MVT::i1, 0, 
/*22439*/         OPC_EmitInteger, MVT::i1, 0, 
/*22442*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_B), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2622:iPTR, v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)) - Complexity = 11
                  // Dst: (IMAGE_SAMPLE_B:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*22460*/       0, /*End of Scope*/
/*22461*/     0, /*End of Scope*/
/*22462*/   /*Scope*/ 51|128,6/*819*/, /*->23283*/
/*22464*/     OPC_CheckInteger, 63|128,20/*2623*/, 
/*22467*/     OPC_MoveParent,
/*22468*/     OPC_RecordChild1, // #0 = $addr
/*22469*/     OPC_Scope, 73|128,1/*201*/, /*->22673*/ // 4 children in Scope
/*22472*/       OPC_CheckChild1Type, MVT::v2i32,
/*22474*/       OPC_RecordChild2, // #1 = $rsrc
/*22475*/       OPC_RecordChild3, // #2 = $sampler
/*22476*/       OPC_MoveChild, 4,
/*22478*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*22481*/       OPC_Scope, 47, /*->22530*/ // 4 children in Scope
/*22483*/         OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*22485*/         OPC_MoveParent,
/*22486*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22488*/         OPC_EmitInteger, MVT::i32, 15, 
/*22491*/         OPC_EmitInteger, MVT::i1, 0, 
/*22494*/         OPC_EmitInteger, MVT::i1, 0, 
/*22497*/         OPC_EmitInteger, MVT::i1, 1, 
/*22500*/         OPC_EmitInteger, MVT::i1, 0, 
/*22503*/         OPC_EmitInteger, MVT::i1, 0, 
/*22506*/         OPC_EmitInteger, MVT::i1, 0, 
/*22509*/         OPC_EmitInteger, MVT::i1, 0, 
/*22512*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_D), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2623:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_D:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*22530*/       /*Scope*/ 47, /*->22578*/
/*22531*/         OPC_CheckPredicate, 38, // Predicate_TEX_SHADOW
/*22533*/         OPC_MoveParent,
/*22534*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22536*/         OPC_EmitInteger, MVT::i32, 15, 
/*22539*/         OPC_EmitInteger, MVT::i1, 0, 
/*22542*/         OPC_EmitInteger, MVT::i1, 0, 
/*22545*/         OPC_EmitInteger, MVT::i1, 0, 
/*22548*/         OPC_EmitInteger, MVT::i1, 0, 
/*22551*/         OPC_EmitInteger, MVT::i1, 0, 
/*22554*/         OPC_EmitInteger, MVT::i1, 0, 
/*22557*/         OPC_EmitInteger, MVT::i1, 0, 
/*22560*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_D), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2623:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_D:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*22578*/       /*Scope*/ 47, /*->22626*/
/*22579*/         OPC_CheckPredicate, 40, // Predicate_TEX_SHADOW_ARRAY
/*22581*/         OPC_MoveParent,
/*22582*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22584*/         OPC_EmitInteger, MVT::i32, 15, 
/*22587*/         OPC_EmitInteger, MVT::i1, 0, 
/*22590*/         OPC_EmitInteger, MVT::i1, 0, 
/*22593*/         OPC_EmitInteger, MVT::i1, 1, 
/*22596*/         OPC_EmitInteger, MVT::i1, 0, 
/*22599*/         OPC_EmitInteger, MVT::i1, 0, 
/*22602*/         OPC_EmitInteger, MVT::i1, 0, 
/*22605*/         OPC_EmitInteger, MVT::i1, 0, 
/*22608*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_D), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2623:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_D:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*22626*/       /*Scope*/ 45, /*->22672*/
/*22627*/         OPC_MoveParent,
/*22628*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22630*/         OPC_EmitInteger, MVT::i32, 15, 
/*22633*/         OPC_EmitInteger, MVT::i1, 0, 
/*22636*/         OPC_EmitInteger, MVT::i1, 0, 
/*22639*/         OPC_EmitInteger, MVT::i1, 0, 
/*22642*/         OPC_EmitInteger, MVT::i1, 0, 
/*22645*/         OPC_EmitInteger, MVT::i1, 0, 
/*22648*/         OPC_EmitInteger, MVT::i1, 0, 
/*22651*/         OPC_EmitInteger, MVT::i1, 0, 
/*22654*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_D), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2623:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)) - Complexity = 11
                  // Dst: (IMAGE_SAMPLE_D:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*22672*/       0, /*End of Scope*/
/*22673*/     /*Scope*/ 73|128,1/*201*/, /*->22876*/
/*22675*/       OPC_CheckChild1Type, MVT::v4i32,
/*22677*/       OPC_RecordChild2, // #1 = $rsrc
/*22678*/       OPC_RecordChild3, // #2 = $sampler
/*22679*/       OPC_MoveChild, 4,
/*22681*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*22684*/       OPC_Scope, 47, /*->22733*/ // 4 children in Scope
/*22686*/         OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*22688*/         OPC_MoveParent,
/*22689*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22691*/         OPC_EmitInteger, MVT::i32, 15, 
/*22694*/         OPC_EmitInteger, MVT::i1, 0, 
/*22697*/         OPC_EmitInteger, MVT::i1, 0, 
/*22700*/         OPC_EmitInteger, MVT::i1, 1, 
/*22703*/         OPC_EmitInteger, MVT::i1, 0, 
/*22706*/         OPC_EmitInteger, MVT::i1, 0, 
/*22709*/         OPC_EmitInteger, MVT::i1, 0, 
/*22712*/         OPC_EmitInteger, MVT::i1, 0, 
/*22715*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_D), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2623:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_D:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*22733*/       /*Scope*/ 47, /*->22781*/
/*22734*/         OPC_CheckPredicate, 38, // Predicate_TEX_SHADOW
/*22736*/         OPC_MoveParent,
/*22737*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22739*/         OPC_EmitInteger, MVT::i32, 15, 
/*22742*/         OPC_EmitInteger, MVT::i1, 0, 
/*22745*/         OPC_EmitInteger, MVT::i1, 0, 
/*22748*/         OPC_EmitInteger, MVT::i1, 0, 
/*22751*/         OPC_EmitInteger, MVT::i1, 0, 
/*22754*/         OPC_EmitInteger, MVT::i1, 0, 
/*22757*/         OPC_EmitInteger, MVT::i1, 0, 
/*22760*/         OPC_EmitInteger, MVT::i1, 0, 
/*22763*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_D), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2623:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_D:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*22781*/       /*Scope*/ 47, /*->22829*/
/*22782*/         OPC_CheckPredicate, 40, // Predicate_TEX_SHADOW_ARRAY
/*22784*/         OPC_MoveParent,
/*22785*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22787*/         OPC_EmitInteger, MVT::i32, 15, 
/*22790*/         OPC_EmitInteger, MVT::i1, 0, 
/*22793*/         OPC_EmitInteger, MVT::i1, 0, 
/*22796*/         OPC_EmitInteger, MVT::i1, 1, 
/*22799*/         OPC_EmitInteger, MVT::i1, 0, 
/*22802*/         OPC_EmitInteger, MVT::i1, 0, 
/*22805*/         OPC_EmitInteger, MVT::i1, 0, 
/*22808*/         OPC_EmitInteger, MVT::i1, 0, 
/*22811*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_D), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2623:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_D:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*22829*/       /*Scope*/ 45, /*->22875*/
/*22830*/         OPC_MoveParent,
/*22831*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22833*/         OPC_EmitInteger, MVT::i32, 15, 
/*22836*/         OPC_EmitInteger, MVT::i1, 0, 
/*22839*/         OPC_EmitInteger, MVT::i1, 0, 
/*22842*/         OPC_EmitInteger, MVT::i1, 0, 
/*22845*/         OPC_EmitInteger, MVT::i1, 0, 
/*22848*/         OPC_EmitInteger, MVT::i1, 0, 
/*22851*/         OPC_EmitInteger, MVT::i1, 0, 
/*22854*/         OPC_EmitInteger, MVT::i1, 0, 
/*22857*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_D), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2623:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)) - Complexity = 11
                  // Dst: (IMAGE_SAMPLE_D:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*22875*/       0, /*End of Scope*/
/*22876*/     /*Scope*/ 73|128,1/*201*/, /*->23079*/
/*22878*/       OPC_CheckChild1Type, MVT::v8i32,
/*22880*/       OPC_RecordChild2, // #1 = $rsrc
/*22881*/       OPC_RecordChild3, // #2 = $sampler
/*22882*/       OPC_MoveChild, 4,
/*22884*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*22887*/       OPC_Scope, 47, /*->22936*/ // 4 children in Scope
/*22889*/         OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*22891*/         OPC_MoveParent,
/*22892*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22894*/         OPC_EmitInteger, MVT::i32, 15, 
/*22897*/         OPC_EmitInteger, MVT::i1, 0, 
/*22900*/         OPC_EmitInteger, MVT::i1, 0, 
/*22903*/         OPC_EmitInteger, MVT::i1, 1, 
/*22906*/         OPC_EmitInteger, MVT::i1, 0, 
/*22909*/         OPC_EmitInteger, MVT::i1, 0, 
/*22912*/         OPC_EmitInteger, MVT::i1, 0, 
/*22915*/         OPC_EmitInteger, MVT::i1, 0, 
/*22918*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_D), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2623:iPTR, v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_D:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*22936*/       /*Scope*/ 47, /*->22984*/
/*22937*/         OPC_CheckPredicate, 38, // Predicate_TEX_SHADOW
/*22939*/         OPC_MoveParent,
/*22940*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22942*/         OPC_EmitInteger, MVT::i32, 15, 
/*22945*/         OPC_EmitInteger, MVT::i1, 0, 
/*22948*/         OPC_EmitInteger, MVT::i1, 0, 
/*22951*/         OPC_EmitInteger, MVT::i1, 0, 
/*22954*/         OPC_EmitInteger, MVT::i1, 0, 
/*22957*/         OPC_EmitInteger, MVT::i1, 0, 
/*22960*/         OPC_EmitInteger, MVT::i1, 0, 
/*22963*/         OPC_EmitInteger, MVT::i1, 0, 
/*22966*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_D), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2623:iPTR, v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_D:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*22984*/       /*Scope*/ 47, /*->23032*/
/*22985*/         OPC_CheckPredicate, 40, // Predicate_TEX_SHADOW_ARRAY
/*22987*/         OPC_MoveParent,
/*22988*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22990*/         OPC_EmitInteger, MVT::i32, 15, 
/*22993*/         OPC_EmitInteger, MVT::i1, 0, 
/*22996*/         OPC_EmitInteger, MVT::i1, 0, 
/*22999*/         OPC_EmitInteger, MVT::i1, 1, 
/*23002*/         OPC_EmitInteger, MVT::i1, 0, 
/*23005*/         OPC_EmitInteger, MVT::i1, 0, 
/*23008*/         OPC_EmitInteger, MVT::i1, 0, 
/*23011*/         OPC_EmitInteger, MVT::i1, 0, 
/*23014*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_D), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2623:iPTR, v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_D:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*23032*/       /*Scope*/ 45, /*->23078*/
/*23033*/         OPC_MoveParent,
/*23034*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23036*/         OPC_EmitInteger, MVT::i32, 15, 
/*23039*/         OPC_EmitInteger, MVT::i1, 0, 
/*23042*/         OPC_EmitInteger, MVT::i1, 0, 
/*23045*/         OPC_EmitInteger, MVT::i1, 0, 
/*23048*/         OPC_EmitInteger, MVT::i1, 0, 
/*23051*/         OPC_EmitInteger, MVT::i1, 0, 
/*23054*/         OPC_EmitInteger, MVT::i1, 0, 
/*23057*/         OPC_EmitInteger, MVT::i1, 0, 
/*23060*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_D), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2623:iPTR, v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)) - Complexity = 11
                  // Dst: (IMAGE_SAMPLE_D:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*23078*/       0, /*End of Scope*/
/*23079*/     /*Scope*/ 73|128,1/*201*/, /*->23282*/
/*23081*/       OPC_CheckChild1Type, MVT::v16i32,
/*23083*/       OPC_RecordChild2, // #1 = $rsrc
/*23084*/       OPC_RecordChild3, // #2 = $sampler
/*23085*/       OPC_MoveChild, 4,
/*23087*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*23090*/       OPC_Scope, 47, /*->23139*/ // 4 children in Scope
/*23092*/         OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*23094*/         OPC_MoveParent,
/*23095*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23097*/         OPC_EmitInteger, MVT::i32, 15, 
/*23100*/         OPC_EmitInteger, MVT::i1, 0, 
/*23103*/         OPC_EmitInteger, MVT::i1, 0, 
/*23106*/         OPC_EmitInteger, MVT::i1, 1, 
/*23109*/         OPC_EmitInteger, MVT::i1, 0, 
/*23112*/         OPC_EmitInteger, MVT::i1, 0, 
/*23115*/         OPC_EmitInteger, MVT::i1, 0, 
/*23118*/         OPC_EmitInteger, MVT::i1, 0, 
/*23121*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_D), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2623:iPTR, v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_D:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*23139*/       /*Scope*/ 47, /*->23187*/
/*23140*/         OPC_CheckPredicate, 38, // Predicate_TEX_SHADOW
/*23142*/         OPC_MoveParent,
/*23143*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23145*/         OPC_EmitInteger, MVT::i32, 15, 
/*23148*/         OPC_EmitInteger, MVT::i1, 0, 
/*23151*/         OPC_EmitInteger, MVT::i1, 0, 
/*23154*/         OPC_EmitInteger, MVT::i1, 0, 
/*23157*/         OPC_EmitInteger, MVT::i1, 0, 
/*23160*/         OPC_EmitInteger, MVT::i1, 0, 
/*23163*/         OPC_EmitInteger, MVT::i1, 0, 
/*23166*/         OPC_EmitInteger, MVT::i1, 0, 
/*23169*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_D), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2623:iPTR, v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_D:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*23187*/       /*Scope*/ 47, /*->23235*/
/*23188*/         OPC_CheckPredicate, 40, // Predicate_TEX_SHADOW_ARRAY
/*23190*/         OPC_MoveParent,
/*23191*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23193*/         OPC_EmitInteger, MVT::i32, 15, 
/*23196*/         OPC_EmitInteger, MVT::i1, 0, 
/*23199*/         OPC_EmitInteger, MVT::i1, 0, 
/*23202*/         OPC_EmitInteger, MVT::i1, 1, 
/*23205*/         OPC_EmitInteger, MVT::i1, 0, 
/*23208*/         OPC_EmitInteger, MVT::i1, 0, 
/*23211*/         OPC_EmitInteger, MVT::i1, 0, 
/*23214*/         OPC_EmitInteger, MVT::i1, 0, 
/*23217*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_D), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2623:iPTR, v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_SAMPLE_C_D:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*23235*/       /*Scope*/ 45, /*->23281*/
/*23236*/         OPC_MoveParent,
/*23237*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23239*/         OPC_EmitInteger, MVT::i32, 15, 
/*23242*/         OPC_EmitInteger, MVT::i1, 0, 
/*23245*/         OPC_EmitInteger, MVT::i1, 0, 
/*23248*/         OPC_EmitInteger, MVT::i1, 0, 
/*23251*/         OPC_EmitInteger, MVT::i1, 0, 
/*23254*/         OPC_EmitInteger, MVT::i1, 0, 
/*23257*/         OPC_EmitInteger, MVT::i1, 0, 
/*23260*/         OPC_EmitInteger, MVT::i1, 0, 
/*23263*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_D), 0,
                      1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                  // Src: (intrinsic_wo_chain:v4f32 2623:iPTR, v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, v16i8:v16i8:$sampler, (imm:i32)) - Complexity = 11
                  // Dst: (IMAGE_SAMPLE_D:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:v16i8:$sampler)
/*23281*/       0, /*End of Scope*/
/*23282*/     0, /*End of Scope*/
/*23283*/   /*Scope*/ 84|128,2/*340*/, /*->23625*/
/*23285*/     OPC_CheckInteger, 43|128,19/*2475*/, 
/*23288*/     OPC_MoveParent,
/*23289*/     OPC_RecordChild1, // #0 = $src0
/*23290*/     OPC_Scope, 10, /*->23302*/ // 3 children in Scope
/*23292*/       OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*23294*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CUBE_r600_pseudo), 0,
                    1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4f32 2475:iPTR, v4f32:v4f32:$src0) - Complexity = 8
                // Dst: (CUBE_r600_pseudo:v4f32 v4f32:v4f32:$src0)
/*23302*/     /*Scope*/ 10, /*->23313*/
/*23303*/       OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*23305*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CUBE_eg_pseudo), 0,
                    1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4f32 2475:iPTR, v4f32:v4f32:$src0) - Complexity = 8
                // Dst: (CUBE_eg_pseudo:v4f32 v4f32:v4f32:$src0)
/*23313*/     /*Scope*/ 53|128,2/*309*/, /*->23624*/
/*23315*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23317*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #1
/*23324*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*23327*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*23336*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*23339*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*23348*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*23351*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 6,  // Results = #7
/*23360*/       OPC_EmitInteger, MVT::i32, 0, 
/*23363*/       OPC_EmitInteger, MVT::i32, 0, 
/*23366*/       OPC_EmitInteger, MVT::i32, 0, 
/*23369*/       OPC_EmitInteger, MVT::i32, 0, 
/*23372*/       OPC_EmitNode, TARGET_VAL(AMDGPU::V_CUBETC_F32), 0,
                    1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 5, 7, 8, 9, 10, 11,  // Results = #12
/*23386*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*23389*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 1, 12, 13,  // Results = #14
/*23399*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*23402*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 15,  // Results = #16
/*23411*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*23414*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 17,  // Results = #18
/*23423*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*23426*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 19,  // Results = #20
/*23435*/       OPC_EmitInteger, MVT::i32, 0, 
/*23438*/       OPC_EmitInteger, MVT::i32, 0, 
/*23441*/       OPC_EmitInteger, MVT::i32, 0, 
/*23444*/       OPC_EmitInteger, MVT::i32, 0, 
/*23447*/       OPC_EmitNode, TARGET_VAL(AMDGPU::V_CUBESC_F32), 0,
                    1/*#VTs*/, MVT::i32, 7/*#Ops*/, 16, 18, 20, 21, 22, 23, 24,  // Results = #25
/*23461*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*23464*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 14, 25, 26,  // Results = #27
/*23474*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*23477*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 28,  // Results = #29
/*23486*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*23489*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 30,  // Results = #31
/*23498*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*23501*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 32,  // Results = #33
/*23510*/       OPC_EmitInteger, MVT::i32, 0, 
/*23513*/       OPC_EmitInteger, MVT::i32, 0, 
/*23516*/       OPC_EmitInteger, MVT::i32, 0, 
/*23519*/       OPC_EmitInteger, MVT::i32, 0, 
/*23522*/       OPC_EmitNode, TARGET_VAL(AMDGPU::V_CUBEMA_F32), 0,
                    1/*#VTs*/, MVT::i32, 7/*#Ops*/, 29, 31, 33, 34, 35, 36, 37,  // Results = #38
/*23536*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*23539*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 27, 38, 39,  // Results = #40
/*23549*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*23552*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 41,  // Results = #42
/*23561*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*23564*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 43,  // Results = #44
/*23573*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*23576*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 45,  // Results = #46
/*23585*/       OPC_EmitInteger, MVT::i32, 0, 
/*23588*/       OPC_EmitInteger, MVT::i32, 0, 
/*23591*/       OPC_EmitInteger, MVT::i32, 0, 
/*23594*/       OPC_EmitInteger, MVT::i32, 0, 
/*23597*/       OPC_EmitNode, TARGET_VAL(AMDGPU::V_CUBEID_F32), 0,
                    1/*#VTs*/, MVT::i32, 7/*#Ops*/, 42, 44, 46, 47, 48, 49, 50,  // Results = #51
/*23611*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*23614*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 40, 51, 52, 
                // Src: (intrinsic_wo_chain:v4f32 2475:iPTR, v4f32:v4f32:$src) - Complexity = 8
                // Dst: (INSERT_SUBREG:v4f32 (INSERT_SUBREG:v4f32 (INSERT_SUBREG:v4f32 (INSERT_SUBREG:v4f32 (IMPLICIT_DEF:v4f32), (V_CUBETC_F32:i32 (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub0:i32), (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub1:i32), (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub2:i32)), sub0:i32), (V_CUBESC_F32:i32 (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub0:i32), (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub1:i32), (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub2:i32)), sub1:i32), (V_CUBEMA_F32:i32 (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub0:i32), (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub1:i32), (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub2:i32)), sub2:i32), (V_CUBEID_F32:i32 (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub0:i32), (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub1:i32), (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub2:i32)), sub3:i32)
/*23624*/     0, /*End of Scope*/
/*23625*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 18|128,14/*1810*/,  TARGET_VAL(ISD::EXTRACT_VECTOR_ELT),// ->25440
/*23630*/   OPC_RecordChild0, // #0 = $src
/*23631*/   OPC_Scope, 30|128,1/*158*/, /*->23792*/ // 8 children in Scope
/*23634*/     OPC_CheckChild0Type, MVT::v4i32,
/*23636*/     OPC_MoveChild, 1,
/*23638*/     OPC_Scope, 37, /*->23677*/ // 4 children in Scope
/*23640*/       OPC_CheckInteger, 0, 
/*23642*/       OPC_MoveParent,
/*23643*/       OPC_CheckType, MVT::i32,
/*23645*/       OPC_Scope, 14, /*->23661*/ // 2 children in Scope
/*23647*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*23649*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*23652*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v4i32:v4i32:$src, 0:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v4i32:$src, sub0:i32)
/*23661*/       /*Scope*/ 14, /*->23676*/
/*23662*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23664*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*23667*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v4i32:v4i32:$src, 0:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v4i32:$src, sub0:i32)
/*23676*/       0, /*End of Scope*/
/*23677*/     /*Scope*/ 37, /*->23715*/
/*23678*/       OPC_CheckInteger, 1, 
/*23680*/       OPC_MoveParent,
/*23681*/       OPC_CheckType, MVT::i32,
/*23683*/       OPC_Scope, 14, /*->23699*/ // 2 children in Scope
/*23685*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*23687*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*23690*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v4i32:v4i32:$src, 1:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v4i32:$src, sub1:i32)
/*23699*/       /*Scope*/ 14, /*->23714*/
/*23700*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23702*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*23705*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v4i32:v4i32:$src, 1:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v4i32:$src, sub1:i32)
/*23714*/       0, /*End of Scope*/
/*23715*/     /*Scope*/ 37, /*->23753*/
/*23716*/       OPC_CheckInteger, 2, 
/*23718*/       OPC_MoveParent,
/*23719*/       OPC_CheckType, MVT::i32,
/*23721*/       OPC_Scope, 14, /*->23737*/ // 2 children in Scope
/*23723*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*23725*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*23728*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v4i32:v4i32:$src, 2:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v4i32:$src, sub2:i32)
/*23737*/       /*Scope*/ 14, /*->23752*/
/*23738*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23740*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*23743*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v4i32:v4i32:$src, 2:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v4i32:$src, sub2:i32)
/*23752*/       0, /*End of Scope*/
/*23753*/     /*Scope*/ 37, /*->23791*/
/*23754*/       OPC_CheckInteger, 3, 
/*23756*/       OPC_MoveParent,
/*23757*/       OPC_CheckType, MVT::i32,
/*23759*/       OPC_Scope, 14, /*->23775*/ // 2 children in Scope
/*23761*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*23763*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*23766*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v4i32:v4i32:$src, 3:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v4i32:$src, sub3:i32)
/*23775*/       /*Scope*/ 14, /*->23790*/
/*23776*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23778*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*23781*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v4i32:v4i32:$src, 3:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v4i32:$src, sub3:i32)
/*23790*/       0, /*End of Scope*/
/*23791*/     0, /*End of Scope*/
/*23792*/   /*Scope*/ 102, /*->23895*/
/*23793*/     OPC_CheckChild0Type, MVT::v2i32,
/*23795*/     OPC_MoveChild, 1,
/*23797*/     OPC_Scope, 37, /*->23836*/ // 3 children in Scope
/*23799*/       OPC_CheckInteger, 0, 
/*23801*/       OPC_MoveParent,
/*23802*/       OPC_CheckType, MVT::i32,
/*23804*/       OPC_Scope, 14, /*->23820*/ // 2 children in Scope
/*23806*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*23808*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*23811*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v2i32:v2i32:$src, 0:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v2i32:$src, sub0:i32)
/*23820*/       /*Scope*/ 14, /*->23835*/
/*23821*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23823*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*23826*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v2i32:v2i32:$src, 0:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v2i32:$src, sub0:i32)
/*23835*/       0, /*End of Scope*/
/*23836*/     /*Scope*/ 37, /*->23874*/
/*23837*/       OPC_CheckInteger, 1, 
/*23839*/       OPC_MoveParent,
/*23840*/       OPC_CheckType, MVT::i32,
/*23842*/       OPC_Scope, 14, /*->23858*/ // 2 children in Scope
/*23844*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*23846*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*23849*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v2i32:v2i32:$src, 1:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v2i32:$src, sub1:i32)
/*23858*/       /*Scope*/ 14, /*->23873*/
/*23859*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23861*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*23864*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v2i32:v2i32:$src, 1:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v2i32:$src, sub1:i32)
/*23873*/       0, /*End of Scope*/
/*23874*/     /*Scope*/ 19, /*->23894*/
/*23875*/       OPC_CheckInteger, 2, 
/*23877*/       OPC_MoveParent,
/*23878*/       OPC_CheckType, MVT::i32,
/*23880*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23882*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*23885*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v2i32:v2i32:$src, 2:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v2i32:$src, sub2:i32)
/*23894*/     0, /*End of Scope*/
/*23895*/   /*Scope*/ 38|128,1/*166*/, /*->24063*/
/*23897*/     OPC_CheckChild0Type, MVT::v8i32,
/*23899*/     OPC_MoveChild, 1,
/*23901*/     OPC_Scope, 19, /*->23922*/ // 8 children in Scope
/*23903*/       OPC_CheckInteger, 0, 
/*23905*/       OPC_MoveParent,
/*23906*/       OPC_CheckType, MVT::i32,
/*23908*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23910*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*23913*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v8i32:v8i32:$src, 0:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v8i32:$src, sub0:i32)
/*23922*/     /*Scope*/ 19, /*->23942*/
/*23923*/       OPC_CheckInteger, 1, 
/*23925*/       OPC_MoveParent,
/*23926*/       OPC_CheckType, MVT::i32,
/*23928*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23930*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*23933*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v8i32:v8i32:$src, 1:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v8i32:$src, sub1:i32)
/*23942*/     /*Scope*/ 19, /*->23962*/
/*23943*/       OPC_CheckInteger, 2, 
/*23945*/       OPC_MoveParent,
/*23946*/       OPC_CheckType, MVT::i32,
/*23948*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23950*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*23953*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v8i32:v8i32:$src, 2:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v8i32:$src, sub2:i32)
/*23962*/     /*Scope*/ 19, /*->23982*/
/*23963*/       OPC_CheckInteger, 3, 
/*23965*/       OPC_MoveParent,
/*23966*/       OPC_CheckType, MVT::i32,
/*23968*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23970*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*23973*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v8i32:v8i32:$src, 3:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v8i32:$src, sub3:i32)
/*23982*/     /*Scope*/ 19, /*->24002*/
/*23983*/       OPC_CheckInteger, 4, 
/*23985*/       OPC_MoveParent,
/*23986*/       OPC_CheckType, MVT::i32,
/*23988*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23990*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*23993*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v8i32:v8i32:$src, 4:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v8i32:$src, sub4:i32)
/*24002*/     /*Scope*/ 19, /*->24022*/
/*24003*/       OPC_CheckInteger, 5, 
/*24005*/       OPC_MoveParent,
/*24006*/       OPC_CheckType, MVT::i32,
/*24008*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24010*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*24013*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v8i32:v8i32:$src, 5:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v8i32:$src, sub5:i32)
/*24022*/     /*Scope*/ 19, /*->24042*/
/*24023*/       OPC_CheckInteger, 6, 
/*24025*/       OPC_MoveParent,
/*24026*/       OPC_CheckType, MVT::i32,
/*24028*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24030*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*24033*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v8i32:v8i32:$src, 6:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v8i32:$src, sub6:i32)
/*24042*/     /*Scope*/ 19, /*->24062*/
/*24043*/       OPC_CheckInteger, 7, 
/*24045*/       OPC_MoveParent,
/*24046*/       OPC_CheckType, MVT::i32,
/*24048*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24050*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*24053*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v8i32:v8i32:$src, 7:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v8i32:$src, sub7:i32)
/*24062*/     0, /*End of Scope*/
/*24063*/   /*Scope*/ 70|128,2/*326*/, /*->24391*/
/*24065*/     OPC_CheckChild0Type, MVT::v16i32,
/*24067*/     OPC_MoveChild, 1,
/*24069*/     OPC_Scope, 19, /*->24090*/ // 16 children in Scope
/*24071*/       OPC_CheckInteger, 0, 
/*24073*/       OPC_MoveParent,
/*24074*/       OPC_CheckType, MVT::i32,
/*24076*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24078*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*24081*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 0:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub0:i32)
/*24090*/     /*Scope*/ 19, /*->24110*/
/*24091*/       OPC_CheckInteger, 1, 
/*24093*/       OPC_MoveParent,
/*24094*/       OPC_CheckType, MVT::i32,
/*24096*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24098*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*24101*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 1:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub1:i32)
/*24110*/     /*Scope*/ 19, /*->24130*/
/*24111*/       OPC_CheckInteger, 2, 
/*24113*/       OPC_MoveParent,
/*24114*/       OPC_CheckType, MVT::i32,
/*24116*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24118*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*24121*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 2:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub2:i32)
/*24130*/     /*Scope*/ 19, /*->24150*/
/*24131*/       OPC_CheckInteger, 3, 
/*24133*/       OPC_MoveParent,
/*24134*/       OPC_CheckType, MVT::i32,
/*24136*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24138*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*24141*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 3:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub3:i32)
/*24150*/     /*Scope*/ 19, /*->24170*/
/*24151*/       OPC_CheckInteger, 4, 
/*24153*/       OPC_MoveParent,
/*24154*/       OPC_CheckType, MVT::i32,
/*24156*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24158*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*24161*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 4:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub4:i32)
/*24170*/     /*Scope*/ 19, /*->24190*/
/*24171*/       OPC_CheckInteger, 5, 
/*24173*/       OPC_MoveParent,
/*24174*/       OPC_CheckType, MVT::i32,
/*24176*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24178*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*24181*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 5:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub5:i32)
/*24190*/     /*Scope*/ 19, /*->24210*/
/*24191*/       OPC_CheckInteger, 6, 
/*24193*/       OPC_MoveParent,
/*24194*/       OPC_CheckType, MVT::i32,
/*24196*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24198*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*24201*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 6:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub6:i32)
/*24210*/     /*Scope*/ 19, /*->24230*/
/*24211*/       OPC_CheckInteger, 7, 
/*24213*/       OPC_MoveParent,
/*24214*/       OPC_CheckType, MVT::i32,
/*24216*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24218*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*24221*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 7:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub7:i32)
/*24230*/     /*Scope*/ 19, /*->24250*/
/*24231*/       OPC_CheckInteger, 8, 
/*24233*/       OPC_MoveParent,
/*24234*/       OPC_CheckType, MVT::i32,
/*24236*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24238*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub8,
/*24241*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 8:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub8:i32)
/*24250*/     /*Scope*/ 19, /*->24270*/
/*24251*/       OPC_CheckInteger, 9, 
/*24253*/       OPC_MoveParent,
/*24254*/       OPC_CheckType, MVT::i32,
/*24256*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24258*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub9,
/*24261*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 9:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub9:i32)
/*24270*/     /*Scope*/ 19, /*->24290*/
/*24271*/       OPC_CheckInteger, 10, 
/*24273*/       OPC_MoveParent,
/*24274*/       OPC_CheckType, MVT::i32,
/*24276*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24278*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub10,
/*24281*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 10:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub10:i32)
/*24290*/     /*Scope*/ 19, /*->24310*/
/*24291*/       OPC_CheckInteger, 11, 
/*24293*/       OPC_MoveParent,
/*24294*/       OPC_CheckType, MVT::i32,
/*24296*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24298*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub11,
/*24301*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 11:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub11:i32)
/*24310*/     /*Scope*/ 19, /*->24330*/
/*24311*/       OPC_CheckInteger, 12, 
/*24313*/       OPC_MoveParent,
/*24314*/       OPC_CheckType, MVT::i32,
/*24316*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24318*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub12,
/*24321*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 12:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub12:i32)
/*24330*/     /*Scope*/ 19, /*->24350*/
/*24331*/       OPC_CheckInteger, 13, 
/*24333*/       OPC_MoveParent,
/*24334*/       OPC_CheckType, MVT::i32,
/*24336*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24338*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub13,
/*24341*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 13:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub13:i32)
/*24350*/     /*Scope*/ 19, /*->24370*/
/*24351*/       OPC_CheckInteger, 14, 
/*24353*/       OPC_MoveParent,
/*24354*/       OPC_CheckType, MVT::i32,
/*24356*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24358*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub14,
/*24361*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 14:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub14:i32)
/*24370*/     /*Scope*/ 19, /*->24390*/
/*24371*/       OPC_CheckInteger, 15, 
/*24373*/       OPC_MoveParent,
/*24374*/       OPC_CheckType, MVT::i32,
/*24376*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24378*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub15,
/*24381*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 15:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub15:i32)
/*24390*/     0, /*End of Scope*/
/*24391*/   /*Scope*/ 46|128,1/*174*/, /*->24567*/
/*24393*/     OPC_CheckChild0Type, MVT::v2f32,
/*24395*/     OPC_Scope, 11|128,1/*139*/, /*->24537*/ // 2 children in Scope
/*24398*/       OPC_MoveChild, 1,
/*24400*/       OPC_Scope, 38, /*->24440*/ // 4 children in Scope
/*24402*/         OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*24405*/         OPC_RecordChild0, // #1 = $idx
/*24406*/         OPC_RecordChild1, // #2 = $off
/*24407*/         OPC_MoveChild, 1,
/*24409*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*24412*/         OPC_MoveParent,
/*24413*/         OPC_CheckType, MVT::i32,
/*24415*/         OPC_MoveParent,
/*24416*/         OPC_CheckType, MVT::f32,
/*24418*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24420*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #3
/*24427*/         OPC_EmitConvertToTarget, 2,
/*24429*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_SRC), 0,
                      1/*#VTs*/, MVT::f32, 4/*#Ops*/, 3, 0, 1, 4, 
                  // Src: (vector_extract:f32 v2f32:v2f32:$vec, (add:i32 i32:i32:$idx, (imm:i32):$off)) - Complexity = 9
                  // Dst: (SI_INDIRECT_SRC:f32 (IMPLICIT_DEF:i1), ?:v2f32:$vec, ?:i32:$idx, (imm:i32):$off)
/*24440*/       /*Scope*/ 37, /*->24478*/
/*24441*/         OPC_CheckInteger, 0, 
/*24443*/         OPC_MoveParent,
/*24444*/         OPC_CheckType, MVT::f32,
/*24446*/         OPC_Scope, 14, /*->24462*/ // 2 children in Scope
/*24448*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*24450*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*24453*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (vector_extract:f32 v2f32:v2f32:$src, 0:iPTR) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:f32 ?:v2f32:$src, sub0:i32)
/*24462*/         /*Scope*/ 14, /*->24477*/
/*24463*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24465*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*24468*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (vector_extract:f32 v2f32:v2f32:$src, 0:iPTR) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:f32 ?:v2f32:$src, sub0:i32)
/*24477*/         0, /*End of Scope*/
/*24478*/       /*Scope*/ 37, /*->24516*/
/*24479*/         OPC_CheckInteger, 1, 
/*24481*/         OPC_MoveParent,
/*24482*/         OPC_CheckType, MVT::f32,
/*24484*/         OPC_Scope, 14, /*->24500*/ // 2 children in Scope
/*24486*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*24488*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*24491*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (vector_extract:f32 v2f32:v2f32:$src, 1:iPTR) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:f32 ?:v2f32:$src, sub1:i32)
/*24500*/         /*Scope*/ 14, /*->24515*/
/*24501*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24503*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*24506*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (vector_extract:f32 v2f32:v2f32:$src, 1:iPTR) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:f32 ?:v2f32:$src, sub1:i32)
/*24515*/         0, /*End of Scope*/
/*24516*/       /*Scope*/ 19, /*->24536*/
/*24517*/         OPC_CheckInteger, 2, 
/*24519*/         OPC_MoveParent,
/*24520*/         OPC_CheckType, MVT::f32,
/*24522*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24524*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*24527*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v2f32:v2f32:$src, 2:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v2f32:$src, sub2:i32)
/*24536*/       0, /*End of Scope*/
/*24537*/     /*Scope*/ 28, /*->24566*/
/*24538*/       OPC_RecordChild1, // #1 = $idx
/*24539*/       OPC_CheckChild1Type, MVT::i32,
/*24541*/       OPC_CheckType, MVT::f32,
/*24543*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24545*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #2
/*24552*/       OPC_EmitInteger, MVT::i32, 0, 
/*24555*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_SRC), 0,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 0, 1, 3, 
                // Src: (vector_extract:f32 v2f32:v2f32:$vec, i32:i32:$idx) - Complexity = 3
                // Dst: (SI_INDIRECT_SRC:f32 (IMPLICIT_DEF:i1), ?:v2f32:$vec, ?:i32:$idx, 0:i32)
/*24566*/     0, /*End of Scope*/
/*24567*/   /*Scope*/ 102|128,1/*230*/, /*->24799*/
/*24569*/     OPC_CheckChild0Type, MVT::v4f32,
/*24571*/     OPC_Scope, 67|128,1/*195*/, /*->24769*/ // 2 children in Scope
/*24574*/       OPC_MoveChild, 1,
/*24576*/       OPC_Scope, 38, /*->24616*/ // 5 children in Scope
/*24578*/         OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*24581*/         OPC_RecordChild0, // #1 = $idx
/*24582*/         OPC_RecordChild1, // #2 = $off
/*24583*/         OPC_MoveChild, 1,
/*24585*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*24588*/         OPC_MoveParent,
/*24589*/         OPC_CheckType, MVT::i32,
/*24591*/         OPC_MoveParent,
/*24592*/         OPC_CheckType, MVT::f32,
/*24594*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24596*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #3
/*24603*/         OPC_EmitConvertToTarget, 2,
/*24605*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_SRC), 0,
                      1/*#VTs*/, MVT::f32, 4/*#Ops*/, 3, 0, 1, 4, 
                  // Src: (vector_extract:f32 v4f32:v4f32:$vec, (add:i32 i32:i32:$idx, (imm:i32):$off)) - Complexity = 9
                  // Dst: (SI_INDIRECT_SRC:f32 (IMPLICIT_DEF:i1), ?:v4f32:$vec, ?:i32:$idx, (imm:i32):$off)
/*24616*/       /*Scope*/ 37, /*->24654*/
/*24617*/         OPC_CheckInteger, 0, 
/*24619*/         OPC_MoveParent,
/*24620*/         OPC_CheckType, MVT::f32,
/*24622*/         OPC_Scope, 14, /*->24638*/ // 2 children in Scope
/*24624*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*24626*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*24629*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (vector_extract:f32 v4f32:v4f32:$src, 0:iPTR) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:f32 ?:v4f32:$src, sub0:i32)
/*24638*/         /*Scope*/ 14, /*->24653*/
/*24639*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24641*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*24644*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (vector_extract:f32 v4f32:v4f32:$src, 0:iPTR) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:f32 ?:v4f32:$src, sub0:i32)
/*24653*/         0, /*End of Scope*/
/*24654*/       /*Scope*/ 37, /*->24692*/
/*24655*/         OPC_CheckInteger, 1, 
/*24657*/         OPC_MoveParent,
/*24658*/         OPC_CheckType, MVT::f32,
/*24660*/         OPC_Scope, 14, /*->24676*/ // 2 children in Scope
/*24662*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*24664*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*24667*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (vector_extract:f32 v4f32:v4f32:$src, 1:iPTR) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:f32 ?:v4f32:$src, sub1:i32)
/*24676*/         /*Scope*/ 14, /*->24691*/
/*24677*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24679*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*24682*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (vector_extract:f32 v4f32:v4f32:$src, 1:iPTR) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:f32 ?:v4f32:$src, sub1:i32)
/*24691*/         0, /*End of Scope*/
/*24692*/       /*Scope*/ 37, /*->24730*/
/*24693*/         OPC_CheckInteger, 2, 
/*24695*/         OPC_MoveParent,
/*24696*/         OPC_CheckType, MVT::f32,
/*24698*/         OPC_Scope, 14, /*->24714*/ // 2 children in Scope
/*24700*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*24702*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*24705*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (vector_extract:f32 v4f32:v4f32:$src, 2:iPTR) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:f32 ?:v4f32:$src, sub2:i32)
/*24714*/         /*Scope*/ 14, /*->24729*/
/*24715*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24717*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*24720*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (vector_extract:f32 v4f32:v4f32:$src, 2:iPTR) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:f32 ?:v4f32:$src, sub2:i32)
/*24729*/         0, /*End of Scope*/
/*24730*/       /*Scope*/ 37, /*->24768*/
/*24731*/         OPC_CheckInteger, 3, 
/*24733*/         OPC_MoveParent,
/*24734*/         OPC_CheckType, MVT::f32,
/*24736*/         OPC_Scope, 14, /*->24752*/ // 2 children in Scope
/*24738*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*24740*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*24743*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (vector_extract:f32 v4f32:v4f32:$src, 3:iPTR) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:f32 ?:v4f32:$src, sub3:i32)
/*24752*/         /*Scope*/ 14, /*->24767*/
/*24753*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24755*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*24758*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (vector_extract:f32 v4f32:v4f32:$src, 3:iPTR) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:f32 ?:v4f32:$src, sub3:i32)
/*24767*/         0, /*End of Scope*/
/*24768*/       0, /*End of Scope*/
/*24769*/     /*Scope*/ 28, /*->24798*/
/*24770*/       OPC_RecordChild1, // #1 = $idx
/*24771*/       OPC_CheckChild1Type, MVT::i32,
/*24773*/       OPC_CheckType, MVT::f32,
/*24775*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24777*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #2
/*24784*/       OPC_EmitInteger, MVT::i32, 0, 
/*24787*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_SRC), 0,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 0, 1, 3, 
                // Src: (vector_extract:f32 v4f32:v4f32:$vec, i32:i32:$idx) - Complexity = 3
                // Dst: (SI_INDIRECT_SRC:f32 (IMPLICIT_DEF:i1), ?:v4f32:$vec, ?:i32:$idx, 0:i32)
/*24798*/     0, /*End of Scope*/
/*24799*/   /*Scope*/ 110|128,1/*238*/, /*->25039*/
/*24801*/     OPC_CheckChild0Type, MVT::v8f32,
/*24803*/     OPC_Scope, 75|128,1/*203*/, /*->25009*/ // 2 children in Scope
/*24806*/       OPC_MoveChild, 1,
/*24808*/       OPC_Scope, 38, /*->24848*/ // 9 children in Scope
/*24810*/         OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*24813*/         OPC_RecordChild0, // #1 = $idx
/*24814*/         OPC_RecordChild1, // #2 = $off
/*24815*/         OPC_MoveChild, 1,
/*24817*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*24820*/         OPC_MoveParent,
/*24821*/         OPC_CheckType, MVT::i32,
/*24823*/         OPC_MoveParent,
/*24824*/         OPC_CheckType, MVT::f32,
/*24826*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24828*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #3
/*24835*/         OPC_EmitConvertToTarget, 2,
/*24837*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_SRC), 0,
                      1/*#VTs*/, MVT::f32, 4/*#Ops*/, 3, 0, 1, 4, 
                  // Src: (vector_extract:f32 v8f32:v8f32:$vec, (add:i32 i32:i32:$idx, (imm:i32):$off)) - Complexity = 9
                  // Dst: (SI_INDIRECT_SRC:f32 (IMPLICIT_DEF:i1), ?:v8f32:$vec, ?:i32:$idx, (imm:i32):$off)
/*24848*/       /*Scope*/ 19, /*->24868*/
/*24849*/         OPC_CheckInteger, 0, 
/*24851*/         OPC_MoveParent,
/*24852*/         OPC_CheckType, MVT::f32,
/*24854*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24856*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*24859*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v8f32:v8f32:$src, 0:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v8f32:$src, sub0:i32)
/*24868*/       /*Scope*/ 19, /*->24888*/
/*24869*/         OPC_CheckInteger, 1, 
/*24871*/         OPC_MoveParent,
/*24872*/         OPC_CheckType, MVT::f32,
/*24874*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24876*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*24879*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v8f32:v8f32:$src, 1:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v8f32:$src, sub1:i32)
/*24888*/       /*Scope*/ 19, /*->24908*/
/*24889*/         OPC_CheckInteger, 2, 
/*24891*/         OPC_MoveParent,
/*24892*/         OPC_CheckType, MVT::f32,
/*24894*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24896*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*24899*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v8f32:v8f32:$src, 2:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v8f32:$src, sub2:i32)
/*24908*/       /*Scope*/ 19, /*->24928*/
/*24909*/         OPC_CheckInteger, 3, 
/*24911*/         OPC_MoveParent,
/*24912*/         OPC_CheckType, MVT::f32,
/*24914*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24916*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*24919*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v8f32:v8f32:$src, 3:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v8f32:$src, sub3:i32)
/*24928*/       /*Scope*/ 19, /*->24948*/
/*24929*/         OPC_CheckInteger, 4, 
/*24931*/         OPC_MoveParent,
/*24932*/         OPC_CheckType, MVT::f32,
/*24934*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24936*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*24939*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v8f32:v8f32:$src, 4:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v8f32:$src, sub4:i32)
/*24948*/       /*Scope*/ 19, /*->24968*/
/*24949*/         OPC_CheckInteger, 5, 
/*24951*/         OPC_MoveParent,
/*24952*/         OPC_CheckType, MVT::f32,
/*24954*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24956*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*24959*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v8f32:v8f32:$src, 5:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v8f32:$src, sub5:i32)
/*24968*/       /*Scope*/ 19, /*->24988*/
/*24969*/         OPC_CheckInteger, 6, 
/*24971*/         OPC_MoveParent,
/*24972*/         OPC_CheckType, MVT::f32,
/*24974*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24976*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*24979*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v8f32:v8f32:$src, 6:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v8f32:$src, sub6:i32)
/*24988*/       /*Scope*/ 19, /*->25008*/
/*24989*/         OPC_CheckInteger, 7, 
/*24991*/         OPC_MoveParent,
/*24992*/         OPC_CheckType, MVT::f32,
/*24994*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24996*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*24999*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v8f32:v8f32:$src, 7:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v8f32:$src, sub7:i32)
/*25008*/       0, /*End of Scope*/
/*25009*/     /*Scope*/ 28, /*->25038*/
/*25010*/       OPC_RecordChild1, // #1 = $idx
/*25011*/       OPC_CheckChild1Type, MVT::i32,
/*25013*/       OPC_CheckType, MVT::f32,
/*25015*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25017*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #2
/*25024*/       OPC_EmitInteger, MVT::i32, 0, 
/*25027*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_SRC), 0,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 0, 1, 3, 
                // Src: (vector_extract:f32 v8f32:v8f32:$vec, i32:i32:$idx) - Complexity = 3
                // Dst: (SI_INDIRECT_SRC:f32 (IMPLICIT_DEF:i1), ?:v8f32:$vec, ?:i32:$idx, 0:i32)
/*25038*/     0, /*End of Scope*/
/*25039*/   /*Scope*/ 14|128,3/*398*/, /*->25439*/
/*25041*/     OPC_CheckChild0Type, MVT::v16f32,
/*25043*/     OPC_Scope, 107|128,2/*363*/, /*->25409*/ // 2 children in Scope
/*25046*/       OPC_MoveChild, 1,
/*25048*/       OPC_Scope, 38, /*->25088*/ // 17 children in Scope
/*25050*/         OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*25053*/         OPC_RecordChild0, // #1 = $idx
/*25054*/         OPC_RecordChild1, // #2 = $off
/*25055*/         OPC_MoveChild, 1,
/*25057*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*25060*/         OPC_MoveParent,
/*25061*/         OPC_CheckType, MVT::i32,
/*25063*/         OPC_MoveParent,
/*25064*/         OPC_CheckType, MVT::f32,
/*25066*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25068*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #3
/*25075*/         OPC_EmitConvertToTarget, 2,
/*25077*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_SRC), 0,
                      1/*#VTs*/, MVT::f32, 4/*#Ops*/, 3, 0, 1, 4, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$vec, (add:i32 i32:i32:$idx, (imm:i32):$off)) - Complexity = 9
                  // Dst: (SI_INDIRECT_SRC:f32 (IMPLICIT_DEF:i1), ?:v16f32:$vec, ?:i32:$idx, (imm:i32):$off)
/*25088*/       /*Scope*/ 19, /*->25108*/
/*25089*/         OPC_CheckInteger, 0, 
/*25091*/         OPC_MoveParent,
/*25092*/         OPC_CheckType, MVT::f32,
/*25094*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25096*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*25099*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 0:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub0:i32)
/*25108*/       /*Scope*/ 19, /*->25128*/
/*25109*/         OPC_CheckInteger, 1, 
/*25111*/         OPC_MoveParent,
/*25112*/         OPC_CheckType, MVT::f32,
/*25114*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25116*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*25119*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 1:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub1:i32)
/*25128*/       /*Scope*/ 19, /*->25148*/
/*25129*/         OPC_CheckInteger, 2, 
/*25131*/         OPC_MoveParent,
/*25132*/         OPC_CheckType, MVT::f32,
/*25134*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25136*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*25139*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 2:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub2:i32)
/*25148*/       /*Scope*/ 19, /*->25168*/
/*25149*/         OPC_CheckInteger, 3, 
/*25151*/         OPC_MoveParent,
/*25152*/         OPC_CheckType, MVT::f32,
/*25154*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25156*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*25159*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 3:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub3:i32)
/*25168*/       /*Scope*/ 19, /*->25188*/
/*25169*/         OPC_CheckInteger, 4, 
/*25171*/         OPC_MoveParent,
/*25172*/         OPC_CheckType, MVT::f32,
/*25174*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25176*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*25179*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 4:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub4:i32)
/*25188*/       /*Scope*/ 19, /*->25208*/
/*25189*/         OPC_CheckInteger, 5, 
/*25191*/         OPC_MoveParent,
/*25192*/         OPC_CheckType, MVT::f32,
/*25194*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25196*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*25199*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 5:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub5:i32)
/*25208*/       /*Scope*/ 19, /*->25228*/
/*25209*/         OPC_CheckInteger, 6, 
/*25211*/         OPC_MoveParent,
/*25212*/         OPC_CheckType, MVT::f32,
/*25214*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25216*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*25219*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 6:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub6:i32)
/*25228*/       /*Scope*/ 19, /*->25248*/
/*25229*/         OPC_CheckInteger, 7, 
/*25231*/         OPC_MoveParent,
/*25232*/         OPC_CheckType, MVT::f32,
/*25234*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25236*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*25239*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 7:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub7:i32)
/*25248*/       /*Scope*/ 19, /*->25268*/
/*25249*/         OPC_CheckInteger, 8, 
/*25251*/         OPC_MoveParent,
/*25252*/         OPC_CheckType, MVT::f32,
/*25254*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25256*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub8,
/*25259*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 8:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub8:i32)
/*25268*/       /*Scope*/ 19, /*->25288*/
/*25269*/         OPC_CheckInteger, 9, 
/*25271*/         OPC_MoveParent,
/*25272*/         OPC_CheckType, MVT::f32,
/*25274*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25276*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub9,
/*25279*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 9:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub9:i32)
/*25288*/       /*Scope*/ 19, /*->25308*/
/*25289*/         OPC_CheckInteger, 10, 
/*25291*/         OPC_MoveParent,
/*25292*/         OPC_CheckType, MVT::f32,
/*25294*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25296*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub10,
/*25299*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 10:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub10:i32)
/*25308*/       /*Scope*/ 19, /*->25328*/
/*25309*/         OPC_CheckInteger, 11, 
/*25311*/         OPC_MoveParent,
/*25312*/         OPC_CheckType, MVT::f32,
/*25314*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25316*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub11,
/*25319*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 11:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub11:i32)
/*25328*/       /*Scope*/ 19, /*->25348*/
/*25329*/         OPC_CheckInteger, 12, 
/*25331*/         OPC_MoveParent,
/*25332*/         OPC_CheckType, MVT::f32,
/*25334*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25336*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub12,
/*25339*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 12:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub12:i32)
/*25348*/       /*Scope*/ 19, /*->25368*/
/*25349*/         OPC_CheckInteger, 13, 
/*25351*/         OPC_MoveParent,
/*25352*/         OPC_CheckType, MVT::f32,
/*25354*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25356*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub13,
/*25359*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 13:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub13:i32)
/*25368*/       /*Scope*/ 19, /*->25388*/
/*25369*/         OPC_CheckInteger, 14, 
/*25371*/         OPC_MoveParent,
/*25372*/         OPC_CheckType, MVT::f32,
/*25374*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25376*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub14,
/*25379*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 14:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub14:i32)
/*25388*/       /*Scope*/ 19, /*->25408*/
/*25389*/         OPC_CheckInteger, 15, 
/*25391*/         OPC_MoveParent,
/*25392*/         OPC_CheckType, MVT::f32,
/*25394*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25396*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub15,
/*25399*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 15:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub15:i32)
/*25408*/       0, /*End of Scope*/
/*25409*/     /*Scope*/ 28, /*->25438*/
/*25410*/       OPC_RecordChild1, // #1 = $idx
/*25411*/       OPC_CheckChild1Type, MVT::i32,
/*25413*/       OPC_CheckType, MVT::f32,
/*25415*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25417*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #2
/*25424*/       OPC_EmitInteger, MVT::i32, 0, 
/*25427*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_SRC), 0,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 0, 1, 3, 
                // Src: (vector_extract:f32 v16f32:v16f32:$vec, i32:i32:$idx) - Complexity = 3
                // Dst: (SI_INDIRECT_SRC:f32 (IMPLICIT_DEF:i1), ?:v16f32:$vec, ?:i32:$idx, 0:i32)
/*25438*/     0, /*End of Scope*/
/*25439*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 110,  TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->25553
/*25443*/   OPC_RecordNode,   // #0 = 'intrinsic_w_chain' chained node
/*25444*/   OPC_MoveChild, 1,
/*25446*/   OPC_Scope, 24, /*->25472*/ // 5 children in Scope
/*25448*/     OPC_CheckInteger, 54|128,20/*2614*/, 
/*25451*/     OPC_MoveParent,
/*25452*/     OPC_RecordChild2, // #1 = $vcc
/*25453*/     OPC_RecordChild3, // #2 = $target
/*25454*/     OPC_MoveChild, 3,
/*25456*/     OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*25459*/     OPC_MoveParent,
/*25460*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25462*/     OPC_EmitMergeInputChains1_0,
/*25463*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_IF), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i64 2614:iPTR, i1:i1:$vcc, (bb:Other):$target) - Complexity = 8
              // Dst: (SI_IF:i64 i1:i1:$vcc, (bb:Other):$target)
/*25472*/   /*Scope*/ 24, /*->25497*/
/*25473*/     OPC_CheckInteger, 48|128,20/*2608*/, 
/*25476*/     OPC_MoveParent,
/*25477*/     OPC_RecordChild2, // #1 = $src
/*25478*/     OPC_RecordChild3, // #2 = $target
/*25479*/     OPC_MoveChild, 3,
/*25481*/     OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*25484*/     OPC_MoveParent,
/*25485*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25487*/     OPC_EmitMergeInputChains1_0,
/*25488*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_ELSE), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i64 2608:iPTR, i64:i64:$src, (bb:Other):$target) - Complexity = 8
              // Dst: (SI_ELSE:i64 i64:i64:$src, (bb:Other):$target)
/*25497*/   /*Scope*/ 16, /*->25514*/
/*25498*/     OPC_CheckInteger, 47|128,20/*2607*/, 
/*25501*/     OPC_MoveParent,
/*25502*/     OPC_RecordChild2, // #1 = $src
/*25503*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25505*/     OPC_EmitMergeInputChains1_0,
/*25506*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_BREAK), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i64 2607:iPTR, i64:i64:$src) - Complexity = 8
              // Dst: (SI_BREAK:i64 i64:i64:$src)
/*25514*/   /*Scope*/ 18, /*->25533*/
/*25515*/     OPC_CheckInteger, 55|128,20/*2615*/, 
/*25518*/     OPC_MoveParent,
/*25519*/     OPC_RecordChild2, // #1 = $vcc
/*25520*/     OPC_RecordChild3, // #2 = $src
/*25521*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25523*/     OPC_EmitMergeInputChains1_0,
/*25524*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_IF_BREAK), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i64 2615:iPTR, i1:i1:$vcc, i64:i64:$src) - Complexity = 8
              // Dst: (SI_IF_BREAK:i64 i1:i1:$vcc, i64:i64:$src)
/*25533*/   /*Scope*/ 18, /*->25552*/
/*25534*/     OPC_CheckInteger, 49|128,20/*2609*/, 
/*25537*/     OPC_MoveParent,
/*25538*/     OPC_RecordChild2, // #1 = $src0
/*25539*/     OPC_RecordChild3, // #2 = $src1
/*25540*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25542*/     OPC_EmitMergeInputChains1_0,
/*25543*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_ELSE_BREAK), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i64 2609:iPTR, i64:i64:$src0, i64:i64:$src1) - Complexity = 8
              // Dst: (SI_ELSE_BREAK:i64 i64:i64:$src0, i64:i64:$src1)
/*25552*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 0|128,1/*128*/,  TARGET_VAL(ISD::Constant),// ->25685
/*25557*/   OPC_RecordNode,   // #0 = $imm
/*25558*/   OPC_SwitchType /*3 cases */, 79,  MVT::i64,// ->25640
/*25561*/     OPC_Scope, 14, /*->25577*/ // 2 children in Scope
/*25563*/       OPC_CheckPredicate, 41, // Predicate_anonymous.val.379
/*25565*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25567*/       OPC_EmitConvertToTarget, 0,
/*25569*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_MOV_B64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (imm:i64)<<P:Predicate_anonymous.val.379>>:$imm - Complexity = 4
                // Dst: (S_MOV_B64:i64 (imm:i64)<<P:Predicate_anonymous.val.380>>:$imm)
/*25577*/     /*Scope*/ 61, /*->25639*/
/*25578*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25580*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::i64, 0/*#Ops*/,  // Results = #1
/*25587*/       OPC_EmitConvertToTarget, 0,
/*25589*/       OPC_EmitNodeXForm, 2, 2, // LO32
/*25592*/       OPC_EmitNode, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*25600*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*25603*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 4, 5,  // Results = #6
/*25613*/       OPC_EmitConvertToTarget, 0,
/*25615*/       OPC_EmitNodeXForm, 3, 7, // HI32
/*25618*/       OPC_EmitNode, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 8,  // Results = #9
/*25626*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*25629*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 6, 9, 10, 
                // Src: (imm:i64):$imm - Complexity = 3
                // Dst: (INSERT_SUBREG:i64 (INSERT_SUBREG:i64 (IMPLICIT_DEF:i64), (S_MOV_B32:i32 (LO32:i32 (imm:i64):$imm)), sub0:i32), (S_MOV_B32:i32 (HI32:i32 (imm:i64):$imm)), sub1:i32)
/*25639*/     0, /*End of Scope*/
            /*SwitchType*/ 28,  MVT::i32,// ->25670
/*25642*/     OPC_Scope, 12, /*->25656*/ // 2 children in Scope
/*25644*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25646*/       OPC_EmitConvertToTarget, 0,
/*25648*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MOV_B32_e32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (imm:i32):$imm - Complexity = 3
                // Dst: (V_MOV_B32_e32:i32 (imm:i32):$imm)
/*25656*/     /*Scope*/ 12, /*->25669*/
/*25657*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*25659*/       OPC_EmitConvertToTarget, 0,
/*25661*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MOV_IMM_I32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (imm:i32):$val - Complexity = 3
                // Dst: (MOV_IMM_I32:i32 (imm:i32):$val)
/*25669*/     0, /*End of Scope*/
            /*SwitchType*/ 12,  MVT::i1,// ->25684
/*25672*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25674*/     OPC_EmitConvertToTarget, 0,
/*25676*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_MOV_B64), 0,
                  1/*#VTs*/, MVT::i1, 1/*#Ops*/, 1, 
              // Src: (imm:i1):$imm - Complexity = 3
              // Dst: (S_MOV_B64:i1 (imm:i1):$imm)
            0, // EndSwitchType
          /*SwitchOpcode*/ 15|128,1/*143*/,  TARGET_VAL(ISD::BITCAST),// ->25832
/*25689*/   OPC_RecordChild0, // #0 = $src0
/*25690*/   OPC_SwitchType /*8 cases */, 23,  MVT::i32,// ->25716
/*25693*/     OPC_CheckChild0Type, MVT::f32,
/*25695*/     OPC_Scope, 5, /*->25702*/ // 2 children in Scope
/*25697*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*25699*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:i32 R600_Reg32:f32:$src0) - Complexity = 3
                // Dst: R600_Reg32:i32:$src0
/*25702*/     /*Scope*/ 12, /*->25715*/
/*25703*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25705*/       OPC_Scope, 3, /*->25710*/ // 2 children in Scope
/*25707*/         OPC_CompleteMatch, 1, 0, 
                  // Src: (bitconvert:i32 SReg_32:f32:$src0) - Complexity = 3
                  // Dst: SReg_32:i32:$src0
/*25710*/       /*Scope*/ 3, /*->25714*/
/*25711*/         OPC_CompleteMatch, 1, 0, 
                  // Src: (bitconvert:i32 VReg_32:f32:$src0) - Complexity = 3
                  // Dst: VReg_32:i32:$src0
/*25714*/       0, /*End of Scope*/
/*25715*/     0, /*End of Scope*/
            /*SwitchType*/ 7,  MVT::i64,// ->25725
/*25718*/     OPC_CheckChild0Type, MVT::f64,
/*25720*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25722*/     OPC_CompleteMatch, 1, 0, 
              // Src: (bitconvert:i64 VReg_64:f64:$src0) - Complexity = 3
              // Dst: VReg_64:i64:$src0
            /*SwitchType*/ 23,  MVT::f32,// ->25750
/*25727*/     OPC_CheckChild0Type, MVT::i32,
/*25729*/     OPC_Scope, 5, /*->25736*/ // 2 children in Scope
/*25731*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*25733*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:f32 R600_Reg32:i32:$src0) - Complexity = 3
                // Dst: R600_Reg32:f32:$src0
/*25736*/     /*Scope*/ 12, /*->25749*/
/*25737*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25739*/       OPC_Scope, 3, /*->25744*/ // 2 children in Scope
/*25741*/         OPC_CompleteMatch, 1, 0, 
                  // Src: (bitconvert:f32 SReg_32:i32:$src0) - Complexity = 3
                  // Dst: SReg_32:f32:$src0
/*25744*/       /*Scope*/ 3, /*->25748*/
/*25745*/         OPC_CompleteMatch, 1, 0, 
                  // Src: (bitconvert:f32 VReg_32:i32:$src0) - Complexity = 3
                  // Dst: VReg_32:f32:$src0
/*25748*/       0, /*End of Scope*/
/*25749*/     0, /*End of Scope*/
            /*SwitchType*/ 7,  MVT::f64,// ->25759
/*25752*/     OPC_CheckChild0Type, MVT::i64,
/*25754*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25756*/     OPC_CompleteMatch, 1, 0, 
              // Src: (bitconvert:f64 VReg_64:i64:$src0) - Complexity = 3
              // Dst: VReg_64:f64:$src0
            /*SwitchType*/ 16,  MVT::v2i32,// ->25777
/*25761*/     OPC_CheckChild0Type, MVT::v2f32,
/*25763*/     OPC_Scope, 5, /*->25770*/ // 2 children in Scope
/*25765*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*25767*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v2i32 R600_Reg64:v2f32:$src0) - Complexity = 3
                // Dst: R600_Reg64:v2i32:$src0
/*25770*/     /*Scope*/ 5, /*->25776*/
/*25771*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25773*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v2i32 VReg_64:v2f32:$src0) - Complexity = 3
                // Dst: VReg_64:v2i32:$src0
/*25776*/     0, /*End of Scope*/
            /*SwitchType*/ 16,  MVT::v4i32,// ->25795
/*25779*/     OPC_CheckChild0Type, MVT::v4f32,
/*25781*/     OPC_Scope, 5, /*->25788*/ // 2 children in Scope
/*25783*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*25785*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 R600_Reg128:v4f32:$src0) - Complexity = 3
                // Dst: R600_Reg128:v4i32:$src0
/*25788*/     /*Scope*/ 5, /*->25794*/
/*25789*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25791*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VReg_128:v4f32:$src0) - Complexity = 3
                // Dst: VReg_128:v4i32:$src0
/*25794*/     0, /*End of Scope*/
            /*SwitchType*/ 16,  MVT::v2f32,// ->25813
/*25797*/     OPC_CheckChild0Type, MVT::v2i32,
/*25799*/     OPC_Scope, 5, /*->25806*/ // 2 children in Scope
/*25801*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*25803*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v2f32 R600_Reg64:v2i32:$src0) - Complexity = 3
                // Dst: R600_Reg64:v2f32:$src0
/*25806*/     /*Scope*/ 5, /*->25812*/
/*25807*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25809*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v2f32 VReg_64:v2i32:$src0) - Complexity = 3
                // Dst: VReg_64:v2f32:$src0
/*25812*/     0, /*End of Scope*/
            /*SwitchType*/ 16,  MVT::v4f32,// ->25831
/*25815*/     OPC_CheckChild0Type, MVT::v4i32,
/*25817*/     OPC_Scope, 5, /*->25824*/ // 2 children in Scope
/*25819*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*25821*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 R600_Reg128:v4i32:$src0) - Complexity = 3
                // Dst: R600_Reg128:v4f32:$src0
/*25824*/     /*Scope*/ 5, /*->25830*/
/*25825*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25827*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VReg_128:v4i32:$src0) - Complexity = 3
                // Dst: VReg_128:v4f32:$src0
/*25830*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 8,  TARGET_VAL(AMDGPUISD::DWORDADDR),// ->25843
/*25835*/   OPC_RecordChild0, // #0 = $addr
/*25836*/   OPC_CheckType, MVT::i32,
/*25838*/   OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*25840*/   OPC_CompleteMatch, 1, 0, 
            // Src: (AMDGPUdwordaddr:i32 R600_Reg32:i32:$addr) - Complexity = 3
            // Dst: R600_Reg32:i32:$addr
          /*SwitchOpcode*/ 120,  TARGET_VAL(ISD::SUB),// ->25966
/*25846*/   OPC_RecordChild0, // #0 = $src0
/*25847*/   OPC_RecordChild1, // #1 = $src1
/*25848*/   OPC_CheckType, MVT::i32,
/*25850*/   OPC_Scope, 101, /*->25953*/ // 2 children in Scope
/*25852*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*25854*/     OPC_EmitInteger, MVT::i32, 0, 
/*25857*/     OPC_EmitInteger, MVT::i32, 0, 
/*25860*/     OPC_EmitInteger, MVT::i32, 1, 
/*25863*/     OPC_EmitInteger, MVT::i32, 0, 
/*25866*/     OPC_EmitInteger, MVT::i32, 0, 
/*25869*/     OPC_EmitInteger, MVT::i32, 0, 
/*25872*/     OPC_EmitInteger, MVT::i32, 0, 
/*25875*/     OPC_EmitInteger, MVT::i32, 0, 
/*25878*/     OPC_EmitInteger, MVT::i32, 0, 
/*25881*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25893*/     OPC_EmitInteger, MVT::i32, 0, 
/*25896*/     OPC_EmitInteger, MVT::i32, 0, 
/*25899*/     OPC_EmitInteger, MVT::i32, 0, 
/*25902*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25914*/     OPC_EmitInteger, MVT::i32, 1, 
/*25917*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*25920*/     OPC_EmitInteger, MVT::i32, 0, 
/*25923*/     OPC_EmitInteger, MVT::i32, 0, 
/*25926*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SUB_INT), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (sub:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (SUB_INT:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*25953*/   /*Scope*/ 11, /*->25965*/
/*25954*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25956*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_SUB_I32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sub:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_SUB_I32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*25965*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 120,  TARGET_VAL(AMDGPUISD::SMAX),// ->26089
/*25969*/   OPC_RecordChild0, // #0 = $src0
/*25970*/   OPC_RecordChild1, // #1 = $src1
/*25971*/   OPC_CheckType, MVT::i32,
/*25973*/   OPC_Scope, 101, /*->26076*/ // 2 children in Scope
/*25975*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*25977*/     OPC_EmitInteger, MVT::i32, 0, 
/*25980*/     OPC_EmitInteger, MVT::i32, 0, 
/*25983*/     OPC_EmitInteger, MVT::i32, 1, 
/*25986*/     OPC_EmitInteger, MVT::i32, 0, 
/*25989*/     OPC_EmitInteger, MVT::i32, 0, 
/*25992*/     OPC_EmitInteger, MVT::i32, 0, 
/*25995*/     OPC_EmitInteger, MVT::i32, 0, 
/*25998*/     OPC_EmitInteger, MVT::i32, 0, 
/*26001*/     OPC_EmitInteger, MVT::i32, 0, 
/*26004*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26016*/     OPC_EmitInteger, MVT::i32, 0, 
/*26019*/     OPC_EmitInteger, MVT::i32, 0, 
/*26022*/     OPC_EmitInteger, MVT::i32, 0, 
/*26025*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26037*/     OPC_EmitInteger, MVT::i32, 1, 
/*26040*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*26043*/     OPC_EmitInteger, MVT::i32, 0, 
/*26046*/     OPC_EmitInteger, MVT::i32, 0, 
/*26049*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MAX_INT), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUsmax:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MAX_INT:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*26076*/   /*Scope*/ 11, /*->26088*/
/*26077*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*26079*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MAX_I32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (AMDGPUsmax:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_MAX_I32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*26088*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 120,  TARGET_VAL(AMDGPUISD::SMIN),// ->26212
/*26092*/   OPC_RecordChild0, // #0 = $src0
/*26093*/   OPC_RecordChild1, // #1 = $src1
/*26094*/   OPC_CheckType, MVT::i32,
/*26096*/   OPC_Scope, 101, /*->26199*/ // 2 children in Scope
/*26098*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*26100*/     OPC_EmitInteger, MVT::i32, 0, 
/*26103*/     OPC_EmitInteger, MVT::i32, 0, 
/*26106*/     OPC_EmitInteger, MVT::i32, 1, 
/*26109*/     OPC_EmitInteger, MVT::i32, 0, 
/*26112*/     OPC_EmitInteger, MVT::i32, 0, 
/*26115*/     OPC_EmitInteger, MVT::i32, 0, 
/*26118*/     OPC_EmitInteger, MVT::i32, 0, 
/*26121*/     OPC_EmitInteger, MVT::i32, 0, 
/*26124*/     OPC_EmitInteger, MVT::i32, 0, 
/*26127*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26139*/     OPC_EmitInteger, MVT::i32, 0, 
/*26142*/     OPC_EmitInteger, MVT::i32, 0, 
/*26145*/     OPC_EmitInteger, MVT::i32, 0, 
/*26148*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26160*/     OPC_EmitInteger, MVT::i32, 1, 
/*26163*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*26166*/     OPC_EmitInteger, MVT::i32, 0, 
/*26169*/     OPC_EmitInteger, MVT::i32, 0, 
/*26172*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MIN_INT), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUsmin:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MIN_INT:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*26199*/   /*Scope*/ 11, /*->26211*/
/*26200*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*26202*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MIN_I32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (AMDGPUsmin:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_MIN_I32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*26211*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 120,  TARGET_VAL(AMDGPUISD::UMAX),// ->26335
/*26215*/   OPC_RecordChild0, // #0 = $src0
/*26216*/   OPC_RecordChild1, // #1 = $src1
/*26217*/   OPC_CheckType, MVT::i32,
/*26219*/   OPC_Scope, 101, /*->26322*/ // 2 children in Scope
/*26221*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*26223*/     OPC_EmitInteger, MVT::i32, 0, 
/*26226*/     OPC_EmitInteger, MVT::i32, 0, 
/*26229*/     OPC_EmitInteger, MVT::i32, 1, 
/*26232*/     OPC_EmitInteger, MVT::i32, 0, 
/*26235*/     OPC_EmitInteger, MVT::i32, 0, 
/*26238*/     OPC_EmitInteger, MVT::i32, 0, 
/*26241*/     OPC_EmitInteger, MVT::i32, 0, 
/*26244*/     OPC_EmitInteger, MVT::i32, 0, 
/*26247*/     OPC_EmitInteger, MVT::i32, 0, 
/*26250*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26262*/     OPC_EmitInteger, MVT::i32, 0, 
/*26265*/     OPC_EmitInteger, MVT::i32, 0, 
/*26268*/     OPC_EmitInteger, MVT::i32, 0, 
/*26271*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26283*/     OPC_EmitInteger, MVT::i32, 1, 
/*26286*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*26289*/     OPC_EmitInteger, MVT::i32, 0, 
/*26292*/     OPC_EmitInteger, MVT::i32, 0, 
/*26295*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MAX_UINT), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUumax:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MAX_UINT:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*26322*/   /*Scope*/ 11, /*->26334*/
/*26323*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*26325*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MAX_U32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (AMDGPUumax:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_MAX_U32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*26334*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 120,  TARGET_VAL(AMDGPUISD::UMIN),// ->26458
/*26338*/   OPC_RecordChild0, // #0 = $src0
/*26339*/   OPC_RecordChild1, // #1 = $src1
/*26340*/   OPC_CheckType, MVT::i32,
/*26342*/   OPC_Scope, 101, /*->26445*/ // 2 children in Scope
/*26344*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*26346*/     OPC_EmitInteger, MVT::i32, 0, 
/*26349*/     OPC_EmitInteger, MVT::i32, 0, 
/*26352*/     OPC_EmitInteger, MVT::i32, 1, 
/*26355*/     OPC_EmitInteger, MVT::i32, 0, 
/*26358*/     OPC_EmitInteger, MVT::i32, 0, 
/*26361*/     OPC_EmitInteger, MVT::i32, 0, 
/*26364*/     OPC_EmitInteger, MVT::i32, 0, 
/*26367*/     OPC_EmitInteger, MVT::i32, 0, 
/*26370*/     OPC_EmitInteger, MVT::i32, 0, 
/*26373*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26385*/     OPC_EmitInteger, MVT::i32, 0, 
/*26388*/     OPC_EmitInteger, MVT::i32, 0, 
/*26391*/     OPC_EmitInteger, MVT::i32, 0, 
/*26394*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26406*/     OPC_EmitInteger, MVT::i32, 1, 
/*26409*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*26412*/     OPC_EmitInteger, MVT::i32, 0, 
/*26415*/     OPC_EmitInteger, MVT::i32, 0, 
/*26418*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MIN_UINT), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUumin:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MIN_UINT:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*26445*/   /*Scope*/ 11, /*->26457*/
/*26446*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*26448*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MIN_U32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (AMDGPUumin:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_MIN_U32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*26457*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 92|128,1/*220*/,  TARGET_VAL(ISD::FP_TO_SINT),// ->26682
/*26462*/   OPC_RecordChild0, // #0 = $src0
/*26463*/   OPC_CheckChild0Type, MVT::f32,
/*26465*/   OPC_CheckType, MVT::i32,
/*26467*/   OPC_Scope, 67, /*->26536*/ // 3 children in Scope
/*26469*/     OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*26471*/     OPC_EmitInteger, MVT::i32, 1, 
/*26474*/     OPC_EmitInteger, MVT::i32, 0, 
/*26477*/     OPC_EmitInteger, MVT::i32, 0, 
/*26480*/     OPC_EmitInteger, MVT::i32, 0, 
/*26483*/     OPC_EmitInteger, MVT::i32, 0, 
/*26486*/     OPC_EmitInteger, MVT::i32, 0, 
/*26489*/     OPC_EmitInteger, MVT::i32, 0, 
/*26492*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26504*/     OPC_EmitInteger, MVT::i32, 1, 
/*26507*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*26510*/     OPC_EmitInteger, MVT::i32, 0, 
/*26513*/     OPC_EmitInteger, MVT::i32, 0, 
/*26516*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::FLT_TO_INT_r600), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (fp_to_sint:i32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (FLT_TO_INT_r600:i32 R600_Reg32:f32:$src0)
/*26536*/   /*Scope*/ 10, /*->26547*/
/*26537*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*26539*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CVT_I32_F32_e32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (fp_to_sint:i32 f32:f32:$src0) - Complexity = 3
              // Dst: (V_CVT_I32_F32_e32:i32 f32:f32:$src0)
/*26547*/   /*Scope*/ 4|128,1/*132*/, /*->26681*/
/*26549*/     OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*26551*/     OPC_EmitInteger, MVT::i32, 1, 
/*26554*/     OPC_EmitInteger, MVT::i32, 0, 
/*26557*/     OPC_EmitInteger, MVT::i32, 0, 
/*26560*/     OPC_EmitInteger, MVT::i32, 0, 
/*26563*/     OPC_EmitInteger, MVT::i32, 1, 
/*26566*/     OPC_EmitInteger, MVT::i32, 0, 
/*26569*/     OPC_EmitInteger, MVT::i32, 0, 
/*26572*/     OPC_EmitInteger, MVT::i32, 0, 
/*26575*/     OPC_EmitInteger, MVT::i32, 0, 
/*26578*/     OPC_EmitInteger, MVT::i32, 0, 
/*26581*/     OPC_EmitInteger, MVT::i32, 0, 
/*26584*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26596*/     OPC_EmitInteger, MVT::i32, 1, 
/*26599*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*26602*/     OPC_EmitInteger, MVT::i32, 0, 
/*26605*/     OPC_EmitInteger, MVT::i32, 0, 
/*26608*/     OPC_EmitNode, TARGET_VAL(AMDGPU::TRUNC), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 5, 6, 7, 8, 0, 9, 10, 11, 12, 13, 14, 15, 16,  // Results = #17
/*26628*/     OPC_EmitInteger, MVT::i32, 0, 
/*26631*/     OPC_EmitInteger, MVT::i32, 0, 
/*26634*/     OPC_EmitInteger, MVT::i32, 0, 
/*26637*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26649*/     OPC_EmitInteger, MVT::i32, 1, 
/*26652*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*26655*/     OPC_EmitInteger, MVT::i32, 0, 
/*26658*/     OPC_EmitInteger, MVT::i32, 0, 
/*26661*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::FLT_TO_INT_eg), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 17, 18, 19, 20, 21, 22, 23, 24, 25, 
              // Src: (fp_to_sint:i32 f32:f32:$src0) - Complexity = 3
              // Dst: (FLT_TO_INT_eg:i32 (TRUNC:i32 ?:f32:$src0))
/*26681*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 81|128,1/*209*/,  TARGET_VAL(ISD::FP_TO_UINT),// ->26895
/*26686*/   OPC_RecordChild0, // #0 = $src0
/*26687*/   OPC_CheckChild0Type, MVT::f32,
/*26689*/   OPC_CheckType, MVT::i32,
/*26691*/   OPC_Scope, 67, /*->26760*/ // 2 children in Scope
/*26693*/     OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*26695*/     OPC_EmitInteger, MVT::i32, 1, 
/*26698*/     OPC_EmitInteger, MVT::i32, 0, 
/*26701*/     OPC_EmitInteger, MVT::i32, 0, 
/*26704*/     OPC_EmitInteger, MVT::i32, 0, 
/*26707*/     OPC_EmitInteger, MVT::i32, 0, 
/*26710*/     OPC_EmitInteger, MVT::i32, 0, 
/*26713*/     OPC_EmitInteger, MVT::i32, 0, 
/*26716*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26728*/     OPC_EmitInteger, MVT::i32, 1, 
/*26731*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*26734*/     OPC_EmitInteger, MVT::i32, 0, 
/*26737*/     OPC_EmitInteger, MVT::i32, 0, 
/*26740*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::FLT_TO_UINT_r600), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (fp_to_uint:i32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (FLT_TO_UINT_r600:i32 R600_Reg32:f32:$src0)
/*26760*/   /*Scope*/ 4|128,1/*132*/, /*->26894*/
/*26762*/     OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*26764*/     OPC_EmitInteger, MVT::i32, 1, 
/*26767*/     OPC_EmitInteger, MVT::i32, 0, 
/*26770*/     OPC_EmitInteger, MVT::i32, 0, 
/*26773*/     OPC_EmitInteger, MVT::i32, 0, 
/*26776*/     OPC_EmitInteger, MVT::i32, 1, 
/*26779*/     OPC_EmitInteger, MVT::i32, 0, 
/*26782*/     OPC_EmitInteger, MVT::i32, 0, 
/*26785*/     OPC_EmitInteger, MVT::i32, 0, 
/*26788*/     OPC_EmitInteger, MVT::i32, 0, 
/*26791*/     OPC_EmitInteger, MVT::i32, 0, 
/*26794*/     OPC_EmitInteger, MVT::i32, 0, 
/*26797*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26809*/     OPC_EmitInteger, MVT::i32, 1, 
/*26812*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*26815*/     OPC_EmitInteger, MVT::i32, 0, 
/*26818*/     OPC_EmitInteger, MVT::i32, 0, 
/*26821*/     OPC_EmitNode, TARGET_VAL(AMDGPU::TRUNC), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 5, 6, 7, 8, 0, 9, 10, 11, 12, 13, 14, 15, 16,  // Results = #17
/*26841*/     OPC_EmitInteger, MVT::i32, 0, 
/*26844*/     OPC_EmitInteger, MVT::i32, 0, 
/*26847*/     OPC_EmitInteger, MVT::i32, 0, 
/*26850*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26862*/     OPC_EmitInteger, MVT::i32, 1, 
/*26865*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*26868*/     OPC_EmitInteger, MVT::i32, 0, 
/*26871*/     OPC_EmitInteger, MVT::i32, 0, 
/*26874*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::FLT_TO_UINT_eg), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 17, 18, 19, 20, 21, 22, 23, 24, 25, 
              // Src: (fp_to_uint:i32 f32:f32:$src0) - Complexity = 3
              // Dst: (FLT_TO_UINT_eg:i32 (TRUNC:i32 ?:f32:$src0))
/*26894*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 112|128,1/*240*/,  TARGET_VAL(ISD::SRA),// ->27139
/*26899*/   OPC_RecordChild0, // #0 = $src0
/*26900*/   OPC_RecordChild1, // #1 = $src1
/*26901*/   OPC_CheckChild1Type, MVT::i32,
/*26903*/   OPC_SwitchType /*2 cases */, 90|128,1/*218*/,  MVT::i32,// ->27125
/*26907*/     OPC_Scope, 101, /*->27010*/ // 3 children in Scope
/*26909*/       OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*26911*/       OPC_EmitInteger, MVT::i32, 0, 
/*26914*/       OPC_EmitInteger, MVT::i32, 0, 
/*26917*/       OPC_EmitInteger, MVT::i32, 1, 
/*26920*/       OPC_EmitInteger, MVT::i32, 0, 
/*26923*/       OPC_EmitInteger, MVT::i32, 0, 
/*26926*/       OPC_EmitInteger, MVT::i32, 0, 
/*26929*/       OPC_EmitInteger, MVT::i32, 0, 
/*26932*/       OPC_EmitInteger, MVT::i32, 0, 
/*26935*/       OPC_EmitInteger, MVT::i32, 0, 
/*26938*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26950*/       OPC_EmitInteger, MVT::i32, 0, 
/*26953*/       OPC_EmitInteger, MVT::i32, 0, 
/*26956*/       OPC_EmitInteger, MVT::i32, 0, 
/*26959*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26971*/       OPC_EmitInteger, MVT::i32, 1, 
/*26974*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*26977*/       OPC_EmitInteger, MVT::i32, 0, 
/*26980*/       OPC_EmitInteger, MVT::i32, 0, 
/*26983*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::ASHR_r600), 0,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (sra:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
                // Dst: (ASHR_r600:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*27010*/     /*Scope*/ 101, /*->27112*/
/*27011*/       OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*27013*/       OPC_EmitInteger, MVT::i32, 0, 
/*27016*/       OPC_EmitInteger, MVT::i32, 0, 
/*27019*/       OPC_EmitInteger, MVT::i32, 1, 
/*27022*/       OPC_EmitInteger, MVT::i32, 0, 
/*27025*/       OPC_EmitInteger, MVT::i32, 0, 
/*27028*/       OPC_EmitInteger, MVT::i32, 0, 
/*27031*/       OPC_EmitInteger, MVT::i32, 0, 
/*27034*/       OPC_EmitInteger, MVT::i32, 0, 
/*27037*/       OPC_EmitInteger, MVT::i32, 0, 
/*27040*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27052*/       OPC_EmitInteger, MVT::i32, 0, 
/*27055*/       OPC_EmitInteger, MVT::i32, 0, 
/*27058*/       OPC_EmitInteger, MVT::i32, 0, 
/*27061*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27073*/       OPC_EmitInteger, MVT::i32, 1, 
/*27076*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*27079*/       OPC_EmitInteger, MVT::i32, 0, 
/*27082*/       OPC_EmitInteger, MVT::i32, 0, 
/*27085*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::ASHR_eg), 0,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (sra:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
                // Dst: (ASHR_eg:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*27112*/     /*Scope*/ 11, /*->27124*/
/*27113*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*27115*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ASHR_I32_e32), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
                // Dst: (V_ASHR_I32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*27124*/     0, /*End of Scope*/
            /*SwitchType*/ 11,  MVT::i64,// ->27138
/*27127*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*27129*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ASHR_I64), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sra:i64 i64:i64:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_ASHR_I64:i64 i64:i64:$src0, i32:i32:$src1)
            0, // EndSwitchType
          /*SwitchOpcode*/ 112|128,1/*240*/,  TARGET_VAL(ISD::SRL),// ->27383
/*27143*/   OPC_RecordChild0, // #0 = $src0
/*27144*/   OPC_RecordChild1, // #1 = $src1
/*27145*/   OPC_CheckChild1Type, MVT::i32,
/*27147*/   OPC_SwitchType /*2 cases */, 90|128,1/*218*/,  MVT::i32,// ->27369
/*27151*/     OPC_Scope, 101, /*->27254*/ // 3 children in Scope
/*27153*/       OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*27155*/       OPC_EmitInteger, MVT::i32, 0, 
/*27158*/       OPC_EmitInteger, MVT::i32, 0, 
/*27161*/       OPC_EmitInteger, MVT::i32, 1, 
/*27164*/       OPC_EmitInteger, MVT::i32, 0, 
/*27167*/       OPC_EmitInteger, MVT::i32, 0, 
/*27170*/       OPC_EmitInteger, MVT::i32, 0, 
/*27173*/       OPC_EmitInteger, MVT::i32, 0, 
/*27176*/       OPC_EmitInteger, MVT::i32, 0, 
/*27179*/       OPC_EmitInteger, MVT::i32, 0, 
/*27182*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27194*/       OPC_EmitInteger, MVT::i32, 0, 
/*27197*/       OPC_EmitInteger, MVT::i32, 0, 
/*27200*/       OPC_EmitInteger, MVT::i32, 0, 
/*27203*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27215*/       OPC_EmitInteger, MVT::i32, 1, 
/*27218*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*27221*/       OPC_EmitInteger, MVT::i32, 0, 
/*27224*/       OPC_EmitInteger, MVT::i32, 0, 
/*27227*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LSHR_r600), 0,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (srl:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
                // Dst: (LSHR_r600:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*27254*/     /*Scope*/ 101, /*->27356*/
/*27255*/       OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*27257*/       OPC_EmitInteger, MVT::i32, 0, 
/*27260*/       OPC_EmitInteger, MVT::i32, 0, 
/*27263*/       OPC_EmitInteger, MVT::i32, 1, 
/*27266*/       OPC_EmitInteger, MVT::i32, 0, 
/*27269*/       OPC_EmitInteger, MVT::i32, 0, 
/*27272*/       OPC_EmitInteger, MVT::i32, 0, 
/*27275*/       OPC_EmitInteger, MVT::i32, 0, 
/*27278*/       OPC_EmitInteger, MVT::i32, 0, 
/*27281*/       OPC_EmitInteger, MVT::i32, 0, 
/*27284*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27296*/       OPC_EmitInteger, MVT::i32, 0, 
/*27299*/       OPC_EmitInteger, MVT::i32, 0, 
/*27302*/       OPC_EmitInteger, MVT::i32, 0, 
/*27305*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27317*/       OPC_EmitInteger, MVT::i32, 1, 
/*27320*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*27323*/       OPC_EmitInteger, MVT::i32, 0, 
/*27326*/       OPC_EmitInteger, MVT::i32, 0, 
/*27329*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LSHR_eg), 0,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (srl:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
                // Dst: (LSHR_eg:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*27356*/     /*Scope*/ 11, /*->27368*/
/*27357*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*27359*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_LSHR_B32_e32), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
                // Dst: (V_LSHR_B32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*27368*/     0, /*End of Scope*/
            /*SwitchType*/ 11,  MVT::i64,// ->27382
/*27371*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*27373*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_LSHR_B64), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (srl:i64 i64:i64:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_LSHR_B64:i64 i64:i64:$src0, i32:i32:$src1)
            0, // EndSwitchType
          /*SwitchOpcode*/ 112|128,1/*240*/,  TARGET_VAL(ISD::SHL),// ->27627
/*27387*/   OPC_RecordChild0, // #0 = $src0
/*27388*/   OPC_RecordChild1, // #1 = $src1
/*27389*/   OPC_CheckChild1Type, MVT::i32,
/*27391*/   OPC_SwitchType /*2 cases */, 90|128,1/*218*/,  MVT::i32,// ->27613
/*27395*/     OPC_Scope, 101, /*->27498*/ // 3 children in Scope
/*27397*/       OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*27399*/       OPC_EmitInteger, MVT::i32, 0, 
/*27402*/       OPC_EmitInteger, MVT::i32, 0, 
/*27405*/       OPC_EmitInteger, MVT::i32, 1, 
/*27408*/       OPC_EmitInteger, MVT::i32, 0, 
/*27411*/       OPC_EmitInteger, MVT::i32, 0, 
/*27414*/       OPC_EmitInteger, MVT::i32, 0, 
/*27417*/       OPC_EmitInteger, MVT::i32, 0, 
/*27420*/       OPC_EmitInteger, MVT::i32, 0, 
/*27423*/       OPC_EmitInteger, MVT::i32, 0, 
/*27426*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27438*/       OPC_EmitInteger, MVT::i32, 0, 
/*27441*/       OPC_EmitInteger, MVT::i32, 0, 
/*27444*/       OPC_EmitInteger, MVT::i32, 0, 
/*27447*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27459*/       OPC_EmitInteger, MVT::i32, 1, 
/*27462*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*27465*/       OPC_EmitInteger, MVT::i32, 0, 
/*27468*/       OPC_EmitInteger, MVT::i32, 0, 
/*27471*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LSHL_r600), 0,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (shl:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
                // Dst: (LSHL_r600:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*27498*/     /*Scope*/ 101, /*->27600*/
/*27499*/       OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*27501*/       OPC_EmitInteger, MVT::i32, 0, 
/*27504*/       OPC_EmitInteger, MVT::i32, 0, 
/*27507*/       OPC_EmitInteger, MVT::i32, 1, 
/*27510*/       OPC_EmitInteger, MVT::i32, 0, 
/*27513*/       OPC_EmitInteger, MVT::i32, 0, 
/*27516*/       OPC_EmitInteger, MVT::i32, 0, 
/*27519*/       OPC_EmitInteger, MVT::i32, 0, 
/*27522*/       OPC_EmitInteger, MVT::i32, 0, 
/*27525*/       OPC_EmitInteger, MVT::i32, 0, 
/*27528*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27540*/       OPC_EmitInteger, MVT::i32, 0, 
/*27543*/       OPC_EmitInteger, MVT::i32, 0, 
/*27546*/       OPC_EmitInteger, MVT::i32, 0, 
/*27549*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27561*/       OPC_EmitInteger, MVT::i32, 1, 
/*27564*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*27567*/       OPC_EmitInteger, MVT::i32, 0, 
/*27570*/       OPC_EmitInteger, MVT::i32, 0, 
/*27573*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LSHL_eg), 0,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (shl:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
                // Dst: (LSHL_eg:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*27600*/     /*Scope*/ 11, /*->27612*/
/*27601*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*27603*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_LSHL_B32_e32), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
                // Dst: (V_LSHL_B32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*27612*/     0, /*End of Scope*/
            /*SwitchType*/ 11,  MVT::i64,// ->27626
/*27615*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*27617*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_LSHL_B64), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (shl:i64 i64:i64:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_LSHL_B64:i64 i64:i64:$src0, i32:i32:$src1)
            0, // EndSwitchType
          /*SwitchOpcode*/ 88|128,2/*344*/,  TARGET_VAL(ISD::MULHS),// ->27975
/*27631*/   OPC_RecordChild0, // #0 = $src0
/*27632*/   OPC_RecordChild1, // #1 = $src1
/*27633*/   OPC_CheckType, MVT::i32,
/*27635*/   OPC_Scope, 101, /*->27738*/ // 4 children in Scope
/*27637*/     OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*27639*/     OPC_EmitInteger, MVT::i32, 0, 
/*27642*/     OPC_EmitInteger, MVT::i32, 0, 
/*27645*/     OPC_EmitInteger, MVT::i32, 1, 
/*27648*/     OPC_EmitInteger, MVT::i32, 0, 
/*27651*/     OPC_EmitInteger, MVT::i32, 0, 
/*27654*/     OPC_EmitInteger, MVT::i32, 0, 
/*27657*/     OPC_EmitInteger, MVT::i32, 0, 
/*27660*/     OPC_EmitInteger, MVT::i32, 0, 
/*27663*/     OPC_EmitInteger, MVT::i32, 0, 
/*27666*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27678*/     OPC_EmitInteger, MVT::i32, 0, 
/*27681*/     OPC_EmitInteger, MVT::i32, 0, 
/*27684*/     OPC_EmitInteger, MVT::i32, 0, 
/*27687*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27699*/     OPC_EmitInteger, MVT::i32, 1, 
/*27702*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*27705*/     OPC_EmitInteger, MVT::i32, 0, 
/*27708*/     OPC_EmitInteger, MVT::i32, 0, 
/*27711*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULHI_INT_r600), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (mulhs:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MULHI_INT_r600:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*27738*/   /*Scope*/ 101, /*->27840*/
/*27739*/     OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*27741*/     OPC_EmitInteger, MVT::i32, 0, 
/*27744*/     OPC_EmitInteger, MVT::i32, 0, 
/*27747*/     OPC_EmitInteger, MVT::i32, 1, 
/*27750*/     OPC_EmitInteger, MVT::i32, 0, 
/*27753*/     OPC_EmitInteger, MVT::i32, 0, 
/*27756*/     OPC_EmitInteger, MVT::i32, 0, 
/*27759*/     OPC_EmitInteger, MVT::i32, 0, 
/*27762*/     OPC_EmitInteger, MVT::i32, 0, 
/*27765*/     OPC_EmitInteger, MVT::i32, 0, 
/*27768*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27780*/     OPC_EmitInteger, MVT::i32, 0, 
/*27783*/     OPC_EmitInteger, MVT::i32, 0, 
/*27786*/     OPC_EmitInteger, MVT::i32, 0, 
/*27789*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27801*/     OPC_EmitInteger, MVT::i32, 1, 
/*27804*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*27807*/     OPC_EmitInteger, MVT::i32, 0, 
/*27810*/     OPC_EmitInteger, MVT::i32, 0, 
/*27813*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULHI_INT_eg), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (mulhs:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MULHI_INT_eg:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*27840*/   /*Scope*/ 101, /*->27942*/
/*27841*/     OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*27843*/     OPC_EmitInteger, MVT::i32, 0, 
/*27846*/     OPC_EmitInteger, MVT::i32, 0, 
/*27849*/     OPC_EmitInteger, MVT::i32, 1, 
/*27852*/     OPC_EmitInteger, MVT::i32, 0, 
/*27855*/     OPC_EmitInteger, MVT::i32, 0, 
/*27858*/     OPC_EmitInteger, MVT::i32, 0, 
/*27861*/     OPC_EmitInteger, MVT::i32, 0, 
/*27864*/     OPC_EmitInteger, MVT::i32, 0, 
/*27867*/     OPC_EmitInteger, MVT::i32, 0, 
/*27870*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27882*/     OPC_EmitInteger, MVT::i32, 0, 
/*27885*/     OPC_EmitInteger, MVT::i32, 0, 
/*27888*/     OPC_EmitInteger, MVT::i32, 0, 
/*27891*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27903*/     OPC_EmitInteger, MVT::i32, 1, 
/*27906*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*27909*/     OPC_EmitInteger, MVT::i32, 0, 
/*27912*/     OPC_EmitInteger, MVT::i32, 0, 
/*27915*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULHI_INT_cm), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (mulhs:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MULHI_INT_cm:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*27942*/   /*Scope*/ 31, /*->27974*/
/*27943*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*27945*/     OPC_EmitInteger, MVT::i32, 0, 
/*27948*/     OPC_EmitInteger, MVT::i32, 0, 
/*27951*/     OPC_EmitInteger, MVT::i32, 0, 
/*27954*/     OPC_EmitInteger, MVT::i32, 0, 
/*27957*/     OPC_EmitInteger, MVT::i32, 0, 
/*27960*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_HI_I32), 0,
                  1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
              // Src: (mulhs:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_MUL_HI_I32:i32 ?:i32:$src0, ?:i32:$src1, 0:i32)
/*27974*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 88|128,2/*344*/,  TARGET_VAL(ISD::MULHU),// ->28323
/*27979*/   OPC_RecordChild0, // #0 = $src0
/*27980*/   OPC_RecordChild1, // #1 = $src1
/*27981*/   OPC_CheckType, MVT::i32,
/*27983*/   OPC_Scope, 101, /*->28086*/ // 4 children in Scope
/*27985*/     OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*27987*/     OPC_EmitInteger, MVT::i32, 0, 
/*27990*/     OPC_EmitInteger, MVT::i32, 0, 
/*27993*/     OPC_EmitInteger, MVT::i32, 1, 
/*27996*/     OPC_EmitInteger, MVT::i32, 0, 
/*27999*/     OPC_EmitInteger, MVT::i32, 0, 
/*28002*/     OPC_EmitInteger, MVT::i32, 0, 
/*28005*/     OPC_EmitInteger, MVT::i32, 0, 
/*28008*/     OPC_EmitInteger, MVT::i32, 0, 
/*28011*/     OPC_EmitInteger, MVT::i32, 0, 
/*28014*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28026*/     OPC_EmitInteger, MVT::i32, 0, 
/*28029*/     OPC_EmitInteger, MVT::i32, 0, 
/*28032*/     OPC_EmitInteger, MVT::i32, 0, 
/*28035*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28047*/     OPC_EmitInteger, MVT::i32, 1, 
/*28050*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*28053*/     OPC_EmitInteger, MVT::i32, 0, 
/*28056*/     OPC_EmitInteger, MVT::i32, 0, 
/*28059*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULHI_UINT_r600), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (mulhu:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MULHI_UINT_r600:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*28086*/   /*Scope*/ 101, /*->28188*/
/*28087*/     OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*28089*/     OPC_EmitInteger, MVT::i32, 0, 
/*28092*/     OPC_EmitInteger, MVT::i32, 0, 
/*28095*/     OPC_EmitInteger, MVT::i32, 1, 
/*28098*/     OPC_EmitInteger, MVT::i32, 0, 
/*28101*/     OPC_EmitInteger, MVT::i32, 0, 
/*28104*/     OPC_EmitInteger, MVT::i32, 0, 
/*28107*/     OPC_EmitInteger, MVT::i32, 0, 
/*28110*/     OPC_EmitInteger, MVT::i32, 0, 
/*28113*/     OPC_EmitInteger, MVT::i32, 0, 
/*28116*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28128*/     OPC_EmitInteger, MVT::i32, 0, 
/*28131*/     OPC_EmitInteger, MVT::i32, 0, 
/*28134*/     OPC_EmitInteger, MVT::i32, 0, 
/*28137*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28149*/     OPC_EmitInteger, MVT::i32, 1, 
/*28152*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*28155*/     OPC_EmitInteger, MVT::i32, 0, 
/*28158*/     OPC_EmitInteger, MVT::i32, 0, 
/*28161*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULHI_UINT_eg), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (mulhu:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MULHI_UINT_eg:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*28188*/   /*Scope*/ 101, /*->28290*/
/*28189*/     OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*28191*/     OPC_EmitInteger, MVT::i32, 0, 
/*28194*/     OPC_EmitInteger, MVT::i32, 0, 
/*28197*/     OPC_EmitInteger, MVT::i32, 1, 
/*28200*/     OPC_EmitInteger, MVT::i32, 0, 
/*28203*/     OPC_EmitInteger, MVT::i32, 0, 
/*28206*/     OPC_EmitInteger, MVT::i32, 0, 
/*28209*/     OPC_EmitInteger, MVT::i32, 0, 
/*28212*/     OPC_EmitInteger, MVT::i32, 0, 
/*28215*/     OPC_EmitInteger, MVT::i32, 0, 
/*28218*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28230*/     OPC_EmitInteger, MVT::i32, 0, 
/*28233*/     OPC_EmitInteger, MVT::i32, 0, 
/*28236*/     OPC_EmitInteger, MVT::i32, 0, 
/*28239*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28251*/     OPC_EmitInteger, MVT::i32, 1, 
/*28254*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*28257*/     OPC_EmitInteger, MVT::i32, 0, 
/*28260*/     OPC_EmitInteger, MVT::i32, 0, 
/*28263*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULHI_UINT_cm), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (mulhu:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MULHI_UINT_cm:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*28290*/   /*Scope*/ 31, /*->28322*/
/*28291*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*28293*/     OPC_EmitInteger, MVT::i32, 0, 
/*28296*/     OPC_EmitInteger, MVT::i32, 0, 
/*28299*/     OPC_EmitInteger, MVT::i32, 0, 
/*28302*/     OPC_EmitInteger, MVT::i32, 0, 
/*28305*/     OPC_EmitInteger, MVT::i32, 0, 
/*28308*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_HI_U32), 0,
                  1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
              // Src: (mulhu:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_MUL_HI_U32:i32 ?:i32:$src0, ?:i32:$src1, 0:i32)
/*28322*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 113|128,3/*497*/,  TARGET_VAL(AMDGPUISD::URECIP),// ->28824
/*28327*/   OPC_RecordChild0, // #0 = $src0
/*28328*/   OPC_CheckType, MVT::i32,
/*28330*/   OPC_Scope, 67, /*->28399*/ // 4 children in Scope
/*28332*/     OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*28334*/     OPC_EmitInteger, MVT::i32, 1, 
/*28337*/     OPC_EmitInteger, MVT::i32, 0, 
/*28340*/     OPC_EmitInteger, MVT::i32, 0, 
/*28343*/     OPC_EmitInteger, MVT::i32, 0, 
/*28346*/     OPC_EmitInteger, MVT::i32, 0, 
/*28349*/     OPC_EmitInteger, MVT::i32, 0, 
/*28352*/     OPC_EmitInteger, MVT::i32, 0, 
/*28355*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28367*/     OPC_EmitInteger, MVT::i32, 1, 
/*28370*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*28373*/     OPC_EmitInteger, MVT::i32, 0, 
/*28376*/     OPC_EmitInteger, MVT::i32, 0, 
/*28379*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RECIP_UINT_r600), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (AMDGPUurecip:i32 R600_Reg32:i32:$src0) - Complexity = 3
              // Dst: (RECIP_UINT_r600:i32 R600_Reg32:i32:$src0)
/*28399*/   /*Scope*/ 67, /*->28467*/
/*28400*/     OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*28402*/     OPC_EmitInteger, MVT::i32, 1, 
/*28405*/     OPC_EmitInteger, MVT::i32, 0, 
/*28408*/     OPC_EmitInteger, MVT::i32, 0, 
/*28411*/     OPC_EmitInteger, MVT::i32, 0, 
/*28414*/     OPC_EmitInteger, MVT::i32, 0, 
/*28417*/     OPC_EmitInteger, MVT::i32, 0, 
/*28420*/     OPC_EmitInteger, MVT::i32, 0, 
/*28423*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28435*/     OPC_EmitInteger, MVT::i32, 1, 
/*28438*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*28441*/     OPC_EmitInteger, MVT::i32, 0, 
/*28444*/     OPC_EmitInteger, MVT::i32, 0, 
/*28447*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RECIP_UINT_eg), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (AMDGPUurecip:i32 R600_Reg32:i32:$src0) - Complexity = 3
              // Dst: (RECIP_UINT_eg:i32 R600_Reg32:i32:$src0)
/*28467*/   /*Scope*/ 42, /*->28510*/
/*28468*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*28470*/     OPC_EmitInteger, MVT::i32, 0|128,0|128,0|128,124|128,4/*1333788672*/, 
/*28477*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_CVT_F32_U32_e32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #2
/*28485*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_RCP_IFLAG_F32_e32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*28493*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_MUL_F32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3,  // Results = #4
/*28502*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CVT_U32_F32_e32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 4, 
              // Src: (AMDGPUurecip:i32 i32:i32:$src0) - Complexity = 3
              // Dst: (V_CVT_U32_F32_e32:i32 (V_MUL_F32_e32:i32 1333788672:i32, (V_RCP_IFLAG_F32_e32:i32 (V_CVT_F32_U32_e32:i32 ?:i32:$src0))))
/*28510*/   /*Scope*/ 55|128,2/*311*/, /*->28823*/
/*28512*/     OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*28514*/     OPC_EmitInteger, MVT::i32, 1, 
/*28517*/     OPC_EmitInteger, MVT::i32, 0, 
/*28520*/     OPC_EmitInteger, MVT::i32, 0, 
/*28523*/     OPC_EmitInteger, MVT::i32, 0, 
/*28526*/     OPC_EmitInteger, MVT::i32, 0, 
/*28529*/     OPC_EmitInteger, MVT::i32, 0, 
/*28532*/     OPC_EmitInteger, MVT::i32, 1, 
/*28535*/     OPC_EmitInteger, MVT::i32, 0, 
/*28538*/     OPC_EmitInteger, MVT::i32, 0, 
/*28541*/     OPC_EmitInteger, MVT::i32, 0, 
/*28544*/     OPC_EmitInteger, MVT::i32, 1, 
/*28547*/     OPC_EmitInteger, MVT::i32, 0, 
/*28550*/     OPC_EmitInteger, MVT::i32, 0, 
/*28553*/     OPC_EmitInteger, MVT::i32, 0, 
/*28556*/     OPC_EmitInteger, MVT::i32, 1, 
/*28559*/     OPC_EmitInteger, MVT::i32, 0, 
/*28562*/     OPC_EmitInteger, MVT::i32, 0, 
/*28565*/     OPC_EmitInteger, MVT::i32, 0, 
/*28568*/     OPC_EmitInteger, MVT::i32, 0, 
/*28571*/     OPC_EmitInteger, MVT::i32, 0, 
/*28574*/     OPC_EmitInteger, MVT::i32, 0, 
/*28577*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28589*/     OPC_EmitInteger, MVT::i32, 1, 
/*28592*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*28595*/     OPC_EmitInteger, MVT::i32, 0, 
/*28598*/     OPC_EmitInteger, MVT::i32, 0, 
/*28601*/     OPC_EmitNode, TARGET_VAL(AMDGPU::UINT_TO_FLT_eg), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 15, 16, 17, 18, 0, 19, 20, 21, 22, 23, 24, 25, 26,  // Results = #27
/*28621*/     OPC_EmitInteger, MVT::i32, 0, 
/*28624*/     OPC_EmitInteger, MVT::i32, 0, 
/*28627*/     OPC_EmitInteger, MVT::i32, 0, 
/*28630*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28642*/     OPC_EmitInteger, MVT::i32, 1, 
/*28645*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*28648*/     OPC_EmitInteger, MVT::i32, 0, 
/*28651*/     OPC_EmitInteger, MVT::i32, 0, 
/*28654*/     OPC_EmitNode, TARGET_VAL(AMDGPU::RECIP_IEEE_cm), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 11, 12, 13, 14, 27, 28, 29, 30, 31, 32, 33, 34, 35,  // Results = #36
/*28674*/     OPC_EmitInteger, MVT::i32, 0, 
/*28677*/     OPC_EmitInteger, MVT::i32, 0, 
/*28680*/     OPC_EmitInteger, MVT::i32, 0, 
/*28683*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28695*/     OPC_EmitInteger, MVT::i32, 0|128,0|128,0|128,124|128,4/*1333788672*/, 
/*28702*/     OPC_EmitNode, TARGET_VAL(AMDGPU::MOV_IMM_I32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 41,  // Results = #42
/*28710*/     OPC_EmitInteger, MVT::i32, 0, 
/*28713*/     OPC_EmitInteger, MVT::i32, 0, 
/*28716*/     OPC_EmitInteger, MVT::i32, 0, 
/*28719*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28731*/     OPC_EmitInteger, MVT::i32, 1, 
/*28734*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*28737*/     OPC_EmitInteger, MVT::i32, 0, 
/*28740*/     OPC_EmitInteger, MVT::i32, 0, 
/*28743*/     OPC_EmitNode, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 36, 37, 38, 39, 40, 42, 43, 44, 45, 46, 47, 48, 49, 50,  // Results = #51
/*28770*/     OPC_EmitInteger, MVT::i32, 0, 
/*28773*/     OPC_EmitInteger, MVT::i32, 0, 
/*28776*/     OPC_EmitInteger, MVT::i32, 0, 
/*28779*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28791*/     OPC_EmitInteger, MVT::i32, 1, 
/*28794*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*28797*/     OPC_EmitInteger, MVT::i32, 0, 
/*28800*/     OPC_EmitInteger, MVT::i32, 0, 
/*28803*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::FLT_TO_UINT_eg), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 51, 52, 53, 54, 55, 56, 57, 58, 59, 
              // Src: (AMDGPUurecip:i32 i32:i32:$src0) - Complexity = 3
              // Dst: (FLT_TO_UINT_eg:i32 (MUL_IEEE:i32 (RECIP_IEEE_cm:i32 (UINT_TO_FLT_eg:i32 ?:i32:$src0)), (MOV_IMM_I32:i32 1333788672:i32)))
/*28823*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 9|128,1/*137*/,  TARGET_VAL(ISD::ROTR),// ->28965
/*28828*/   OPC_RecordChild0, // #0 = $src0
/*28829*/   OPC_RecordChild1, // #1 = $src1
/*28830*/   OPC_CheckChild1Type, MVT::i32,
/*28832*/   OPC_CheckType, MVT::i32,
/*28834*/   OPC_Scope, 99, /*->28935*/ // 2 children in Scope
/*28836*/     OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*28838*/     OPC_EmitInteger, MVT::i32, 0, 
/*28841*/     OPC_EmitInteger, MVT::i32, 0, 
/*28844*/     OPC_EmitInteger, MVT::i32, 0, 
/*28847*/     OPC_EmitInteger, MVT::i32, 0, 
/*28850*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28862*/     OPC_EmitInteger, MVT::i32, 0, 
/*28865*/     OPC_EmitInteger, MVT::i32, 0, 
/*28868*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28880*/     OPC_EmitInteger, MVT::i32, 0, 
/*28883*/     OPC_EmitInteger, MVT::i32, 0, 
/*28886*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28898*/     OPC_EmitInteger, MVT::i32, 1, 
/*28901*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*28904*/     OPC_EmitInteger, MVT::i32, 0, 
/*28907*/     OPC_EmitInteger, MVT::i32, 0, 
/*28910*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BIT_ALIGN_INT_eg), 0,
                  1/*#VTs*/, MVT::i32, 18/*#Ops*/, 2, 3, 0, 4, 5, 6, 0, 7, 8, 9, 1, 10, 11, 12, 13, 14, 15, 16, 
              // Src: (rotr:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (BIT_ALIGN_INT_eg:i32 ?:i32:$src0, ?:i32:$src0, ?:i32:$src1)
/*28935*/   /*Scope*/ 28, /*->28964*/
/*28936*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*28938*/     OPC_EmitInteger, MVT::i32, 0, 
/*28941*/     OPC_EmitInteger, MVT::i32, 0, 
/*28944*/     OPC_EmitInteger, MVT::i32, 0, 
/*28947*/     OPC_EmitInteger, MVT::i32, 0, 
/*28950*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ALIGNBIT_B32), 0,
                  1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 0, 1, 2, 3, 4, 5, 
              // Src: (rotr:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_ALIGNBIT_B32:i32 ?:i32:$src0, ?:i32:$src0, ?:i32:$src1)
/*28964*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 96|128,5/*736*/,  TARGET_VAL(ISD::SETCC),// ->29705
/*28969*/   OPC_RecordChild0, // #0 = $src0
/*28970*/   OPC_Scope, 55|128,2/*311*/, /*->29284*/ // 3 children in Scope
/*28973*/     OPC_CheckChild0Type, MVT::f32,
/*28975*/     OPC_RecordChild1, // #1 = $src1
/*28976*/     OPC_MoveChild, 2,
/*28978*/     OPC_Scope, 108|128,1/*236*/, /*->29217*/ // 3 children in Scope
/*28981*/       OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/*28984*/       OPC_Scope, 32, /*->29018*/ // 7 children in Scope
/*28986*/         OPC_CheckPredicate, 6, // Predicate_COND_LT
/*28988*/         OPC_MoveParent,
/*28989*/         OPC_CheckType, MVT::i1,
/*28991*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*28993*/         OPC_EmitInteger, MVT::i32, 0, 
/*28996*/         OPC_EmitInteger, MVT::i32, 0, 
/*28999*/         OPC_EmitInteger, MVT::i32, 0, 
/*29002*/         OPC_EmitInteger, MVT::i32, 0, 
/*29005*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_LT_F32_e64), 0,
                      1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                  // Src: (setcc:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1, (cond:Other)<<P:Predicate_COND_LT>>) - Complexity = 3
                  // Dst: (V_CMP_LT_F32_e64:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1)
/*29018*/       /*Scope*/ 32, /*->29051*/
/*29019*/         OPC_CheckPredicate, 2, // Predicate_COND_EQ
/*29021*/         OPC_MoveParent,
/*29022*/         OPC_CheckType, MVT::i1,
/*29024*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29026*/         OPC_EmitInteger, MVT::i32, 0, 
/*29029*/         OPC_EmitInteger, MVT::i32, 0, 
/*29032*/         OPC_EmitInteger, MVT::i32, 0, 
/*29035*/         OPC_EmitInteger, MVT::i32, 0, 
/*29038*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_EQ_F32_e64), 0,
                      1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                  // Src: (setcc:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1, (cond:Other)<<P:Predicate_COND_EQ>>) - Complexity = 3
                  // Dst: (V_CMP_EQ_F32_e64:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1)
/*29051*/       /*Scope*/ 32, /*->29084*/
/*29052*/         OPC_CheckPredicate, 7, // Predicate_COND_LE
/*29054*/         OPC_MoveParent,
/*29055*/         OPC_CheckType, MVT::i1,
/*29057*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29059*/         OPC_EmitInteger, MVT::i32, 0, 
/*29062*/         OPC_EmitInteger, MVT::i32, 0, 
/*29065*/         OPC_EmitInteger, MVT::i32, 0, 
/*29068*/         OPC_EmitInteger, MVT::i32, 0, 
/*29071*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_LE_F32_e64), 0,
                      1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                  // Src: (setcc:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1, (cond:Other)<<P:Predicate_COND_LE>>) - Complexity = 3
                  // Dst: (V_CMP_LE_F32_e64:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1)
/*29084*/       /*Scope*/ 32, /*->29117*/
/*29085*/         OPC_CheckPredicate, 3, // Predicate_COND_GT
/*29087*/         OPC_MoveParent,
/*29088*/         OPC_CheckType, MVT::i1,
/*29090*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29092*/         OPC_EmitInteger, MVT::i32, 0, 
/*29095*/         OPC_EmitInteger, MVT::i32, 0, 
/*29098*/         OPC_EmitInteger, MVT::i32, 0, 
/*29101*/         OPC_EmitInteger, MVT::i32, 0, 
/*29104*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_GT_F32_e64), 0,
                      1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                  // Src: (setcc:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1, (cond:Other)<<P:Predicate_COND_GT>>) - Complexity = 3
                  // Dst: (V_CMP_GT_F32_e64:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1)
/*29117*/       /*Scope*/ 32, /*->29150*/
/*29118*/         OPC_CheckPredicate, 5, // Predicate_COND_NE
/*29120*/         OPC_MoveParent,
/*29121*/         OPC_CheckType, MVT::i1,
/*29123*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29125*/         OPC_EmitInteger, MVT::i32, 0, 
/*29128*/         OPC_EmitInteger, MVT::i32, 0, 
/*29131*/         OPC_EmitInteger, MVT::i32, 0, 
/*29134*/         OPC_EmitInteger, MVT::i32, 0, 
/*29137*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_LG_F32_e64), 0,
                      1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                  // Src: (setcc:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1, (cond:Other)<<P:Predicate_COND_NE>>) - Complexity = 3
                  // Dst: (V_CMP_LG_F32_e64:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1)
/*29150*/       /*Scope*/ 32, /*->29183*/
/*29151*/         OPC_CheckPredicate, 4, // Predicate_COND_GE
/*29153*/         OPC_MoveParent,
/*29154*/         OPC_CheckType, MVT::i1,
/*29156*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29158*/         OPC_EmitInteger, MVT::i32, 0, 
/*29161*/         OPC_EmitInteger, MVT::i32, 0, 
/*29164*/         OPC_EmitInteger, MVT::i32, 0, 
/*29167*/         OPC_EmitInteger, MVT::i32, 0, 
/*29170*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_GE_F32_e64), 0,
                      1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                  // Src: (setcc:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1, (cond:Other)<<P:Predicate_COND_GE>>) - Complexity = 3
                  // Dst: (V_CMP_GE_F32_e64:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1)
/*29183*/       /*Scope*/ 32, /*->29216*/
/*29184*/         OPC_CheckPredicate, 5, // Predicate_COND_NE
/*29186*/         OPC_MoveParent,
/*29187*/         OPC_CheckType, MVT::i1,
/*29189*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29191*/         OPC_EmitInteger, MVT::i32, 0, 
/*29194*/         OPC_EmitInteger, MVT::i32, 0, 
/*29197*/         OPC_EmitInteger, MVT::i32, 0, 
/*29200*/         OPC_EmitInteger, MVT::i32, 0, 
/*29203*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_NEQ_F32_e64), 0,
                      1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                  // Src: (setcc:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1, (cond:Other)<<P:Predicate_COND_NE>>) - Complexity = 3
                  // Dst: (V_CMP_NEQ_F32_e64:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1)
/*29216*/       0, /*End of Scope*/
/*29217*/     /*Scope*/ 32, /*->29250*/
/*29218*/       OPC_CheckCondCode, ISD::SETO,
/*29220*/       OPC_MoveParent,
/*29221*/       OPC_CheckType, MVT::i1,
/*29223*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29225*/       OPC_EmitInteger, MVT::i32, 0, 
/*29228*/       OPC_EmitInteger, MVT::i32, 0, 
/*29231*/       OPC_EmitInteger, MVT::i32, 0, 
/*29234*/       OPC_EmitInteger, MVT::i32, 0, 
/*29237*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_O_F32_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 f32:f32:$src0, f32:f32:$src1, SETO:Other) - Complexity = 3
                // Dst: (V_CMP_O_F32_e64:i1 ?:f32:$src0, ?:f32:$src1)
/*29250*/     /*Scope*/ 32, /*->29283*/
/*29251*/       OPC_CheckCondCode, ISD::SETUO,
/*29253*/       OPC_MoveParent,
/*29254*/       OPC_CheckType, MVT::i1,
/*29256*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29258*/       OPC_EmitInteger, MVT::i32, 0, 
/*29261*/       OPC_EmitInteger, MVT::i32, 0, 
/*29264*/       OPC_EmitInteger, MVT::i32, 0, 
/*29267*/       OPC_EmitInteger, MVT::i32, 0, 
/*29270*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_U_F32_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 f32:f32:$src0, f32:f32:$src1, SETUO:Other) - Complexity = 3
                // Dst: (V_CMP_U_F32_e64:i1 ?:f32:$src0, ?:f32:$src1)
/*29283*/     0, /*End of Scope*/
/*29284*/   /*Scope*/ 80|128,1/*208*/, /*->29494*/
/*29286*/     OPC_CheckChild0Type, MVT::f64,
/*29288*/     OPC_RecordChild1, // #1 = $src1
/*29289*/     OPC_MoveChild, 2,
/*29291*/     OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/*29294*/     OPC_Scope, 32, /*->29328*/ // 6 children in Scope
/*29296*/       OPC_CheckPredicate, 6, // Predicate_COND_LT
/*29298*/       OPC_MoveParent,
/*29299*/       OPC_CheckType, MVT::i1,
/*29301*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29303*/       OPC_EmitInteger, MVT::i32, 0, 
/*29306*/       OPC_EmitInteger, MVT::i32, 0, 
/*29309*/       OPC_EmitInteger, MVT::i32, 0, 
/*29312*/       OPC_EmitInteger, MVT::i32, 0, 
/*29315*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_LT_F64_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_64:f64:$src0, VSrc_64:f64:$src1, (cond:Other)<<P:Predicate_COND_LT>>) - Complexity = 3
                // Dst: (V_CMP_LT_F64_e64:i1 VSrc_64:f64:$src0, VSrc_64:f64:$src1)
/*29328*/     /*Scope*/ 32, /*->29361*/
/*29329*/       OPC_CheckPredicate, 2, // Predicate_COND_EQ
/*29331*/       OPC_MoveParent,
/*29332*/       OPC_CheckType, MVT::i1,
/*29334*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29336*/       OPC_EmitInteger, MVT::i32, 0, 
/*29339*/       OPC_EmitInteger, MVT::i32, 0, 
/*29342*/       OPC_EmitInteger, MVT::i32, 0, 
/*29345*/       OPC_EmitInteger, MVT::i32, 0, 
/*29348*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_EQ_F64_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_64:f64:$src0, VSrc_64:f64:$src1, (cond:Other)<<P:Predicate_COND_EQ>>) - Complexity = 3
                // Dst: (V_CMP_EQ_F64_e64:i1 VSrc_64:f64:$src0, VSrc_64:f64:$src1)
/*29361*/     /*Scope*/ 32, /*->29394*/
/*29362*/       OPC_CheckPredicate, 7, // Predicate_COND_LE
/*29364*/       OPC_MoveParent,
/*29365*/       OPC_CheckType, MVT::i1,
/*29367*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29369*/       OPC_EmitInteger, MVT::i32, 0, 
/*29372*/       OPC_EmitInteger, MVT::i32, 0, 
/*29375*/       OPC_EmitInteger, MVT::i32, 0, 
/*29378*/       OPC_EmitInteger, MVT::i32, 0, 
/*29381*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_LE_F64_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_64:f64:$src0, VSrc_64:f64:$src1, (cond:Other)<<P:Predicate_COND_LE>>) - Complexity = 3
                // Dst: (V_CMP_LE_F64_e64:i1 VSrc_64:f64:$src0, VSrc_64:f64:$src1)
/*29394*/     /*Scope*/ 32, /*->29427*/
/*29395*/       OPC_CheckPredicate, 3, // Predicate_COND_GT
/*29397*/       OPC_MoveParent,
/*29398*/       OPC_CheckType, MVT::i1,
/*29400*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29402*/       OPC_EmitInteger, MVT::i32, 0, 
/*29405*/       OPC_EmitInteger, MVT::i32, 0, 
/*29408*/       OPC_EmitInteger, MVT::i32, 0, 
/*29411*/       OPC_EmitInteger, MVT::i32, 0, 
/*29414*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_GT_F64_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_64:f64:$src0, VSrc_64:f64:$src1, (cond:Other)<<P:Predicate_COND_GT>>) - Complexity = 3
                // Dst: (V_CMP_GT_F64_e64:i1 VSrc_64:f64:$src0, VSrc_64:f64:$src1)
/*29427*/     /*Scope*/ 32, /*->29460*/
/*29428*/       OPC_CheckPredicate, 4, // Predicate_COND_GE
/*29430*/       OPC_MoveParent,
/*29431*/       OPC_CheckType, MVT::i1,
/*29433*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29435*/       OPC_EmitInteger, MVT::i32, 0, 
/*29438*/       OPC_EmitInteger, MVT::i32, 0, 
/*29441*/       OPC_EmitInteger, MVT::i32, 0, 
/*29444*/       OPC_EmitInteger, MVT::i32, 0, 
/*29447*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_GE_F64_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_64:f64:$src0, VSrc_64:f64:$src1, (cond:Other)<<P:Predicate_COND_GE>>) - Complexity = 3
                // Dst: (V_CMP_GE_F64_e64:i1 VSrc_64:f64:$src0, VSrc_64:f64:$src1)
/*29460*/     /*Scope*/ 32, /*->29493*/
/*29461*/       OPC_CheckPredicate, 5, // Predicate_COND_NE
/*29463*/       OPC_MoveParent,
/*29464*/       OPC_CheckType, MVT::i1,
/*29466*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29468*/       OPC_EmitInteger, MVT::i32, 0, 
/*29471*/       OPC_EmitInteger, MVT::i32, 0, 
/*29474*/       OPC_EmitInteger, MVT::i32, 0, 
/*29477*/       OPC_EmitInteger, MVT::i32, 0, 
/*29480*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_NEQ_F64_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_64:f64:$src0, VSrc_64:f64:$src1, (cond:Other)<<P:Predicate_COND_NE>>) - Complexity = 3
                // Dst: (V_CMP_NEQ_F64_e64:i1 VSrc_64:f64:$src0, VSrc_64:f64:$src1)
/*29493*/     0, /*End of Scope*/
/*29494*/   /*Scope*/ 80|128,1/*208*/, /*->29704*/
/*29496*/     OPC_CheckChild0Type, MVT::i32,
/*29498*/     OPC_RecordChild1, // #1 = $src1
/*29499*/     OPC_MoveChild, 2,
/*29501*/     OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/*29504*/     OPC_Scope, 32, /*->29538*/ // 6 children in Scope
/*29506*/       OPC_CheckPredicate, 6, // Predicate_COND_LT
/*29508*/       OPC_MoveParent,
/*29509*/       OPC_CheckType, MVT::i1,
/*29511*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29513*/       OPC_EmitInteger, MVT::i32, 0, 
/*29516*/       OPC_EmitInteger, MVT::i32, 0, 
/*29519*/       OPC_EmitInteger, MVT::i32, 0, 
/*29522*/       OPC_EmitInteger, MVT::i32, 0, 
/*29525*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_LT_I32_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1, (cond:Other)<<P:Predicate_COND_LT>>) - Complexity = 3
                // Dst: (V_CMP_LT_I32_e64:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1)
/*29538*/     /*Scope*/ 32, /*->29571*/
/*29539*/       OPC_CheckPredicate, 2, // Predicate_COND_EQ
/*29541*/       OPC_MoveParent,
/*29542*/       OPC_CheckType, MVT::i1,
/*29544*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29546*/       OPC_EmitInteger, MVT::i32, 0, 
/*29549*/       OPC_EmitInteger, MVT::i32, 0, 
/*29552*/       OPC_EmitInteger, MVT::i32, 0, 
/*29555*/       OPC_EmitInteger, MVT::i32, 0, 
/*29558*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_EQ_I32_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1, (cond:Other)<<P:Predicate_COND_EQ>>) - Complexity = 3
                // Dst: (V_CMP_EQ_I32_e64:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1)
/*29571*/     /*Scope*/ 32, /*->29604*/
/*29572*/       OPC_CheckPredicate, 7, // Predicate_COND_LE
/*29574*/       OPC_MoveParent,
/*29575*/       OPC_CheckType, MVT::i1,
/*29577*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29579*/       OPC_EmitInteger, MVT::i32, 0, 
/*29582*/       OPC_EmitInteger, MVT::i32, 0, 
/*29585*/       OPC_EmitInteger, MVT::i32, 0, 
/*29588*/       OPC_EmitInteger, MVT::i32, 0, 
/*29591*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_LE_I32_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1, (cond:Other)<<P:Predicate_COND_LE>>) - Complexity = 3
                // Dst: (V_CMP_LE_I32_e64:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1)
/*29604*/     /*Scope*/ 32, /*->29637*/
/*29605*/       OPC_CheckPredicate, 3, // Predicate_COND_GT
/*29607*/       OPC_MoveParent,
/*29608*/       OPC_CheckType, MVT::i1,
/*29610*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29612*/       OPC_EmitInteger, MVT::i32, 0, 
/*29615*/       OPC_EmitInteger, MVT::i32, 0, 
/*29618*/       OPC_EmitInteger, MVT::i32, 0, 
/*29621*/       OPC_EmitInteger, MVT::i32, 0, 
/*29624*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_GT_I32_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1, (cond:Other)<<P:Predicate_COND_GT>>) - Complexity = 3
                // Dst: (V_CMP_GT_I32_e64:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1)
/*29637*/     /*Scope*/ 32, /*->29670*/
/*29638*/       OPC_CheckPredicate, 5, // Predicate_COND_NE
/*29640*/       OPC_MoveParent,
/*29641*/       OPC_CheckType, MVT::i1,
/*29643*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29645*/       OPC_EmitInteger, MVT::i32, 0, 
/*29648*/       OPC_EmitInteger, MVT::i32, 0, 
/*29651*/       OPC_EmitInteger, MVT::i32, 0, 
/*29654*/       OPC_EmitInteger, MVT::i32, 0, 
/*29657*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_NE_I32_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1, (cond:Other)<<P:Predicate_COND_NE>>) - Complexity = 3
                // Dst: (V_CMP_NE_I32_e64:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1)
/*29670*/     /*Scope*/ 32, /*->29703*/
/*29671*/       OPC_CheckPredicate, 4, // Predicate_COND_GE
/*29673*/       OPC_MoveParent,
/*29674*/       OPC_CheckType, MVT::i1,
/*29676*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29678*/       OPC_EmitInteger, MVT::i32, 0, 
/*29681*/       OPC_EmitInteger, MVT::i32, 0, 
/*29684*/       OPC_EmitInteger, MVT::i32, 0, 
/*29687*/       OPC_EmitInteger, MVT::i32, 0, 
/*29690*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_GE_I32_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1, (cond:Other)<<P:Predicate_COND_GE>>) - Complexity = 3
                // Dst: (V_CMP_GE_I32_e64:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1)
/*29703*/     0, /*End of Scope*/
/*29704*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 77|128,1/*205*/,  TARGET_VAL(ISD::SELECT),// ->29914
/*29709*/   OPC_RecordChild0, // #0 = $src2
/*29710*/   OPC_CheckChild0Type, MVT::i1,
/*29712*/   OPC_RecordChild1, // #1 = $src1
/*29713*/   OPC_RecordChild2, // #2 = $src0
/*29714*/   OPC_SwitchType /*3 cases */, 28,  MVT::i32,// ->29745
/*29717*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29719*/     OPC_EmitInteger, MVT::i32, 0, 
/*29722*/     OPC_EmitInteger, MVT::i32, 0, 
/*29725*/     OPC_EmitInteger, MVT::i32, 0, 
/*29728*/     OPC_EmitInteger, MVT::i32, 0, 
/*29731*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CNDMASK_B32_e64), 0,
                  1/*#VTs*/, MVT::i32, 7/*#Ops*/, 2, 1, 0, 3, 4, 5, 6, 
              // Src: (select:i32 i1:i1:$src2, i32:i32:$src1, i32:i32:$src0) - Complexity = 3
              // Dst: (V_CNDMASK_B32_e64:i32 i32:i32:$src0, i32:i32:$src1, i1:i1:$src2)
            /*SwitchType*/ 28,  MVT::f32,// ->29775
/*29747*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29749*/     OPC_EmitInteger, MVT::i32, 0, 
/*29752*/     OPC_EmitInteger, MVT::i32, 0, 
/*29755*/     OPC_EmitInteger, MVT::i32, 0, 
/*29758*/     OPC_EmitInteger, MVT::i32, 0, 
/*29761*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CNDMASK_B32_e64), 0,
                  1/*#VTs*/, MVT::f32, 7/*#Ops*/, 2, 1, 0, 3, 4, 5, 6, 
              // Src: (select:f32 i1:i1:$src2, f32:f32:$src1, f32:f32:$src0) - Complexity = 3
              // Dst: (V_CNDMASK_B32_e64:f32 ?:f32:$src0, ?:f32:$src1, ?:i1:$src2)
            /*SwitchType*/ 7|128,1/*135*/,  MVT::f64,// ->29913
/*29778*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29780*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                  1/*#VTs*/, MVT::f64, 0/*#Ops*/,  // Results = #3
/*29787*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*29790*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4,  // Results = #5
/*29799*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*29802*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 6,  // Results = #7
/*29811*/     OPC_EmitInteger, MVT::i32, 0, 
/*29814*/     OPC_EmitInteger, MVT::i32, 0, 
/*29817*/     OPC_EmitInteger, MVT::i32, 0, 
/*29820*/     OPC_EmitInteger, MVT::i32, 0, 
/*29823*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_CNDMASK_B32_e64), 0,
                  1/*#VTs*/, MVT::i32, 7/*#Ops*/, 5, 7, 0, 8, 9, 10, 11,  // Results = #12
/*29837*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*29840*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 3, 12, 13,  // Results = #14
/*29850*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*29853*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 15,  // Results = #16
/*29862*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*29865*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 17,  // Results = #18
/*29874*/     OPC_EmitInteger, MVT::i32, 0, 
/*29877*/     OPC_EmitInteger, MVT::i32, 0, 
/*29880*/     OPC_EmitInteger, MVT::i32, 0, 
/*29883*/     OPC_EmitInteger, MVT::i32, 0, 
/*29886*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_CNDMASK_B32_e64), 0,
                  1/*#VTs*/, MVT::i32, 7/*#Ops*/, 16, 18, 0, 19, 20, 21, 22,  // Results = #23
/*29900*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*29903*/     OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 14, 23, 24, 
              // Src: (select:f64 i1:i1:$src2, f64:f64:$src1, f64:f64:$src0) - Complexity = 3
              // Dst: (INSERT_SUBREG:f64 (INSERT_SUBREG:f64 (IMPLICIT_DEF:f64), (V_CNDMASK_B32_e64:i32 (EXTRACT_SUBREG:i32 ?:f64:$src0, sub0:i32), (EXTRACT_SUBREG:i32 ?:f64:$src1, sub0:i32), ?:i1:$src2), sub0:i32), (V_CNDMASK_B32_e64:i32 (EXTRACT_SUBREG:i32 ?:f64:$src0, sub1:i32), (EXTRACT_SUBREG:i32 ?:f64:$src1, sub1:i32), ?:i1:$src2), sub1:i32)
            0, // EndSwitchType
          /*SwitchOpcode*/ 48,  TARGET_VAL(ISD::SIGN_EXTEND),// ->29965
/*29917*/   OPC_RecordChild0, // #0 = $src0
/*29918*/   OPC_CheckChild0Type, MVT::i1,
/*29920*/   OPC_CheckType, MVT::i32,
/*29922*/   OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29924*/   OPC_EmitInteger, MVT::i32, 0, 
/*29927*/   OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29939*/   OPC_EmitInteger, MVT::i32, 0, 
/*29942*/   OPC_EmitInteger, MVT::i32, 0, 
/*29945*/   OPC_EmitInteger, MVT::i32, 0, 
/*29948*/   OPC_EmitInteger, MVT::i32, 0, 
/*29951*/   OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CNDMASK_B32_e64), 0,
                1/*#VTs*/, MVT::i32, 7/*#Ops*/, 1, 2, 0, 3, 4, 5, 6, 
            // Src: (sext:i32 i1:i1:$src0) - Complexity = 3
            // Dst: (V_CNDMASK_B32_e64:i32 0:i32, -1:i32, ?:i1:$src0)
          /*SwitchOpcode*/ 55|128,6/*823*/,  TARGET_VAL(ISD::FDIV),// ->30792
/*29969*/   OPC_Scope, 115|128,1/*243*/, /*->30215*/ // 2 children in Scope
/*29972*/     OPC_MoveChild, 0,
/*29974*/     OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*29977*/     OPC_CheckPredicate, 8, // Predicate_FP_ONE
/*29979*/     OPC_MoveParent,
/*29980*/     OPC_RecordChild1, // #0 = $src0
/*29981*/     OPC_SwitchType /*2 cases */, 89|128,1/*217*/,  MVT::f32,// ->30202
/*29985*/       OPC_Scope, 67, /*->30054*/ // 4 children in Scope
/*29987*/         OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*29989*/         OPC_EmitInteger, MVT::i32, 1, 
/*29992*/         OPC_EmitInteger, MVT::i32, 0, 
/*29995*/         OPC_EmitInteger, MVT::i32, 0, 
/*29998*/         OPC_EmitInteger, MVT::i32, 0, 
/*30001*/         OPC_EmitInteger, MVT::i32, 0, 
/*30004*/         OPC_EmitInteger, MVT::i32, 0, 
/*30007*/         OPC_EmitInteger, MVT::i32, 0, 
/*30010*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30022*/         OPC_EmitInteger, MVT::i32, 1, 
/*30025*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*30028*/         OPC_EmitInteger, MVT::i32, 0, 
/*30031*/         OPC_EmitInteger, MVT::i32, 0, 
/*30034*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RECIP_IEEE_r600), 0,
                      1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (fdiv:f32 (fpimm:f32)<<P:Predicate_FP_ONE>>, f32:f32:$src0) - Complexity = 7
                  // Dst: (RECIP_IEEE_r600:f32 f32:f32:$src0)
/*30054*/       /*Scope*/ 67, /*->30122*/
/*30055*/         OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*30057*/         OPC_EmitInteger, MVT::i32, 1, 
/*30060*/         OPC_EmitInteger, MVT::i32, 0, 
/*30063*/         OPC_EmitInteger, MVT::i32, 0, 
/*30066*/         OPC_EmitInteger, MVT::i32, 0, 
/*30069*/         OPC_EmitInteger, MVT::i32, 0, 
/*30072*/         OPC_EmitInteger, MVT::i32, 0, 
/*30075*/         OPC_EmitInteger, MVT::i32, 0, 
/*30078*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30090*/         OPC_EmitInteger, MVT::i32, 1, 
/*30093*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*30096*/         OPC_EmitInteger, MVT::i32, 0, 
/*30099*/         OPC_EmitInteger, MVT::i32, 0, 
/*30102*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RECIP_IEEE_eg), 0,
                      1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (fdiv:f32 (fpimm:f32)<<P:Predicate_FP_ONE>>, f32:f32:$src0) - Complexity = 7
                  // Dst: (RECIP_IEEE_eg:f32 f32:f32:$src0)
/*30122*/       /*Scope*/ 67, /*->30190*/
/*30123*/         OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*30125*/         OPC_EmitInteger, MVT::i32, 1, 
/*30128*/         OPC_EmitInteger, MVT::i32, 0, 
/*30131*/         OPC_EmitInteger, MVT::i32, 0, 
/*30134*/         OPC_EmitInteger, MVT::i32, 0, 
/*30137*/         OPC_EmitInteger, MVT::i32, 0, 
/*30140*/         OPC_EmitInteger, MVT::i32, 0, 
/*30143*/         OPC_EmitInteger, MVT::i32, 0, 
/*30146*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30158*/         OPC_EmitInteger, MVT::i32, 1, 
/*30161*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*30164*/         OPC_EmitInteger, MVT::i32, 0, 
/*30167*/         OPC_EmitInteger, MVT::i32, 0, 
/*30170*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RECIP_IEEE_cm), 0,
                      1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (fdiv:f32 (fpimm:f32)<<P:Predicate_FP_ONE>>, f32:f32:$src0) - Complexity = 7
                  // Dst: (RECIP_IEEE_cm:f32 f32:f32:$src0)
/*30190*/       /*Scope*/ 10, /*->30201*/
/*30191*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*30193*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_RCP_F32_e32), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                  // Src: (fdiv:f32 (fpimm:f32)<<P:Predicate_FP_ONE>>, f32:f32:$src0) - Complexity = 7
                  // Dst: (V_RCP_F32_e32:f32 f32:f32:$src0)
/*30201*/       0, /*End of Scope*/
              /*SwitchType*/ 10,  MVT::f64,// ->30214
/*30204*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*30206*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_RCP_F64_e32), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fdiv:f64 (fpimm:f64)<<P:Predicate_FP_ONE>>, f64:f64:$src0) - Complexity = 7
                // Dst: (V_RCP_F64_e32:f64 f64:f64:$src0)
              0, // EndSwitchType
/*30215*/   /*Scope*/ 62|128,4/*574*/, /*->30791*/
/*30217*/     OPC_RecordChild0, // #0 = $src0
/*30218*/     OPC_RecordChild1, // #1 = $src1
/*30219*/     OPC_SwitchType /*2 cases */, 14|128,4/*526*/,  MVT::f32,// ->30749
/*30223*/       OPC_Scope, 38|128,1/*166*/, /*->30392*/ // 4 children in Scope
/*30226*/         OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*30228*/         OPC_EmitInteger, MVT::i32, 0, 
/*30231*/         OPC_EmitInteger, MVT::i32, 0, 
/*30234*/         OPC_EmitInteger, MVT::i32, 1, 
/*30237*/         OPC_EmitInteger, MVT::i32, 0, 
/*30240*/         OPC_EmitInteger, MVT::i32, 0, 
/*30243*/         OPC_EmitInteger, MVT::i32, 0, 
/*30246*/         OPC_EmitInteger, MVT::i32, 0, 
/*30249*/         OPC_EmitInteger, MVT::i32, 0, 
/*30252*/         OPC_EmitInteger, MVT::i32, 0, 
/*30255*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30267*/         OPC_EmitInteger, MVT::i32, 1, 
/*30270*/         OPC_EmitInteger, MVT::i32, 0, 
/*30273*/         OPC_EmitInteger, MVT::i32, 0, 
/*30276*/         OPC_EmitInteger, MVT::i32, 0, 
/*30279*/         OPC_EmitInteger, MVT::i32, 0, 
/*30282*/         OPC_EmitInteger, MVT::i32, 0, 
/*30285*/         OPC_EmitInteger, MVT::i32, 0, 
/*30288*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30300*/         OPC_EmitInteger, MVT::i32, 1, 
/*30303*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*30306*/         OPC_EmitInteger, MVT::i32, 0, 
/*30309*/         OPC_EmitInteger, MVT::i32, 0, 
/*30312*/         OPC_EmitNode, TARGET_VAL(AMDGPU::RECIP_IEEE_r600), 0,
                      1/*#VTs*/, MVT::i32, 13/*#Ops*/, 12, 13, 14, 15, 1, 16, 17, 18, 19, 20, 21, 22, 23,  // Results = #24
/*30332*/         OPC_EmitInteger, MVT::i32, 0, 
/*30335*/         OPC_EmitInteger, MVT::i32, 0, 
/*30338*/         OPC_EmitInteger, MVT::i32, 0, 
/*30341*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30353*/         OPC_EmitInteger, MVT::i32, 1, 
/*30356*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*30359*/         OPC_EmitInteger, MVT::i32, 0, 
/*30362*/         OPC_EmitInteger, MVT::i32, 0, 
/*30365*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                      1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
                  // Src: (fdiv:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
                  // Dst: (MUL_IEEE:f32 ?:f32:$src0, (RECIP_IEEE_r600:i32 ?:f32:$src1))
/*30392*/       /*Scope*/ 38|128,1/*166*/, /*->30560*/
/*30394*/         OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*30396*/         OPC_EmitInteger, MVT::i32, 0, 
/*30399*/         OPC_EmitInteger, MVT::i32, 0, 
/*30402*/         OPC_EmitInteger, MVT::i32, 1, 
/*30405*/         OPC_EmitInteger, MVT::i32, 0, 
/*30408*/         OPC_EmitInteger, MVT::i32, 0, 
/*30411*/         OPC_EmitInteger, MVT::i32, 0, 
/*30414*/         OPC_EmitInteger, MVT::i32, 0, 
/*30417*/         OPC_EmitInteger, MVT::i32, 0, 
/*30420*/         OPC_EmitInteger, MVT::i32, 0, 
/*30423*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30435*/         OPC_EmitInteger, MVT::i32, 1, 
/*30438*/         OPC_EmitInteger, MVT::i32, 0, 
/*30441*/         OPC_EmitInteger, MVT::i32, 0, 
/*30444*/         OPC_EmitInteger, MVT::i32, 0, 
/*30447*/         OPC_EmitInteger, MVT::i32, 0, 
/*30450*/         OPC_EmitInteger, MVT::i32, 0, 
/*30453*/         OPC_EmitInteger, MVT::i32, 0, 
/*30456*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30468*/         OPC_EmitInteger, MVT::i32, 1, 
/*30471*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*30474*/         OPC_EmitInteger, MVT::i32, 0, 
/*30477*/         OPC_EmitInteger, MVT::i32, 0, 
/*30480*/         OPC_EmitNode, TARGET_VAL(AMDGPU::RECIP_IEEE_eg), 0,
                      1/*#VTs*/, MVT::i32, 13/*#Ops*/, 12, 13, 14, 15, 1, 16, 17, 18, 19, 20, 21, 22, 23,  // Results = #24
/*30500*/         OPC_EmitInteger, MVT::i32, 0, 
/*30503*/         OPC_EmitInteger, MVT::i32, 0, 
/*30506*/         OPC_EmitInteger, MVT::i32, 0, 
/*30509*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30521*/         OPC_EmitInteger, MVT::i32, 1, 
/*30524*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*30527*/         OPC_EmitInteger, MVT::i32, 0, 
/*30530*/         OPC_EmitInteger, MVT::i32, 0, 
/*30533*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                      1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
                  // Src: (fdiv:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
                  // Dst: (MUL_IEEE:f32 ?:f32:$src0, (RECIP_IEEE_eg:i32 ?:f32:$src1))
/*30560*/       /*Scope*/ 38|128,1/*166*/, /*->30728*/
/*30562*/         OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*30564*/         OPC_EmitInteger, MVT::i32, 0, 
/*30567*/         OPC_EmitInteger, MVT::i32, 0, 
/*30570*/         OPC_EmitInteger, MVT::i32, 1, 
/*30573*/         OPC_EmitInteger, MVT::i32, 0, 
/*30576*/         OPC_EmitInteger, MVT::i32, 0, 
/*30579*/         OPC_EmitInteger, MVT::i32, 0, 
/*30582*/         OPC_EmitInteger, MVT::i32, 0, 
/*30585*/         OPC_EmitInteger, MVT::i32, 0, 
/*30588*/         OPC_EmitInteger, MVT::i32, 0, 
/*30591*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30603*/         OPC_EmitInteger, MVT::i32, 1, 
/*30606*/         OPC_EmitInteger, MVT::i32, 0, 
/*30609*/         OPC_EmitInteger, MVT::i32, 0, 
/*30612*/         OPC_EmitInteger, MVT::i32, 0, 
/*30615*/         OPC_EmitInteger, MVT::i32, 0, 
/*30618*/         OPC_EmitInteger, MVT::i32, 0, 
/*30621*/         OPC_EmitInteger, MVT::i32, 0, 
/*30624*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30636*/         OPC_EmitInteger, MVT::i32, 1, 
/*30639*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*30642*/         OPC_EmitInteger, MVT::i32, 0, 
/*30645*/         OPC_EmitInteger, MVT::i32, 0, 
/*30648*/         OPC_EmitNode, TARGET_VAL(AMDGPU::RECIP_IEEE_cm), 0,
                      1/*#VTs*/, MVT::i32, 13/*#Ops*/, 12, 13, 14, 15, 1, 16, 17, 18, 19, 20, 21, 22, 23,  // Results = #24
/*30668*/         OPC_EmitInteger, MVT::i32, 0, 
/*30671*/         OPC_EmitInteger, MVT::i32, 0, 
/*30674*/         OPC_EmitInteger, MVT::i32, 0, 
/*30677*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30689*/         OPC_EmitInteger, MVT::i32, 1, 
/*30692*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*30695*/         OPC_EmitInteger, MVT::i32, 0, 
/*30698*/         OPC_EmitInteger, MVT::i32, 0, 
/*30701*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                      1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
                  // Src: (fdiv:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
                  // Dst: (MUL_IEEE:f32 ?:f32:$src0, (RECIP_IEEE_cm:i32 ?:f32:$src1))
/*30728*/       /*Scope*/ 19, /*->30748*/
/*30729*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*30731*/         OPC_EmitNode, TARGET_VAL(AMDGPU::V_RCP_F32_e32), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*30739*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_F32_e32), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 2, 
                  // Src: (fdiv:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
                  // Dst: (V_MUL_F32_e32:f32 ?:f32:$src0, (V_RCP_F32_e32:i32 ?:f32:$src1))
/*30748*/       0, /*End of Scope*/
              /*SwitchType*/ 39,  MVT::f64,// ->30790
/*30751*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*30753*/       OPC_EmitNode, TARGET_VAL(AMDGPU::V_RCP_F64_e32), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1,  // Results = #2
/*30761*/       OPC_EmitInteger, MVT::i64, 0, 
/*30764*/       OPC_EmitInteger, MVT::i32, 0, 
/*30767*/       OPC_EmitInteger, MVT::i32, 0, 
/*30770*/       OPC_EmitInteger, MVT::i32, 0, 
/*30773*/       OPC_EmitInteger, MVT::i32, 0, 
/*30776*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_F64), 0,
                    1/*#VTs*/, MVT::f64, 7/*#Ops*/, 0, 2, 3, 4, 5, 6, 7, 
                // Src: (fdiv:f64 f64:f64:$src0, f64:f64:$src1) - Complexity = 3
                // Dst: (V_MUL_F64:f64 ?:f64:$src0, (V_RCP_F64_e32:i64 ?:f64:$src1), 0:i64)
              0, // EndSwitchType
/*30791*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 10|128,5/*650*/,  TARGET_VAL(ISD::FADD),// ->31446
/*30796*/   OPC_Scope, 114|128,1/*242*/, /*->31041*/ // 2 children in Scope
/*30799*/     OPC_MoveChild, 0,
/*30801*/     OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*30804*/     OPC_RecordChild0, // #0 = $src0
/*30805*/     OPC_RecordChild1, // #1 = $src1
/*30806*/     OPC_MoveParent,
/*30807*/     OPC_RecordChild1, // #2 = $src2
/*30808*/     OPC_CheckType, MVT::f32,
/*30810*/     OPC_Scope, 99, /*->30911*/ // 3 children in Scope
/*30812*/       OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*30814*/       OPC_EmitInteger, MVT::i32, 0, 
/*30817*/       OPC_EmitInteger, MVT::i32, 0, 
/*30820*/       OPC_EmitInteger, MVT::i32, 0, 
/*30823*/       OPC_EmitInteger, MVT::i32, 0, 
/*30826*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30838*/       OPC_EmitInteger, MVT::i32, 0, 
/*30841*/       OPC_EmitInteger, MVT::i32, 0, 
/*30844*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30856*/       OPC_EmitInteger, MVT::i32, 0, 
/*30859*/       OPC_EmitInteger, MVT::i32, 0, 
/*30862*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30874*/       OPC_EmitInteger, MVT::i32, 1, 
/*30877*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*30880*/       OPC_EmitInteger, MVT::i32, 0, 
/*30883*/       OPC_EmitInteger, MVT::i32, 0, 
/*30886*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULADD_IEEE_r600), 0,
                    1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                // Src: (fadd:f32 (fmul:f32 f32:f32:$src0, f32:f32:$src1), f32:f32:$src2) - Complexity = 6
                // Dst: (MULADD_IEEE_r600:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*30911*/     /*Scope*/ 99, /*->31011*/
/*30912*/       OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*30914*/       OPC_EmitInteger, MVT::i32, 0, 
/*30917*/       OPC_EmitInteger, MVT::i32, 0, 
/*30920*/       OPC_EmitInteger, MVT::i32, 0, 
/*30923*/       OPC_EmitInteger, MVT::i32, 0, 
/*30926*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30938*/       OPC_EmitInteger, MVT::i32, 0, 
/*30941*/       OPC_EmitInteger, MVT::i32, 0, 
/*30944*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30956*/       OPC_EmitInteger, MVT::i32, 0, 
/*30959*/       OPC_EmitInteger, MVT::i32, 0, 
/*30962*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30974*/       OPC_EmitInteger, MVT::i32, 1, 
/*30977*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*30980*/       OPC_EmitInteger, MVT::i32, 0, 
/*30983*/       OPC_EmitInteger, MVT::i32, 0, 
/*30986*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULADD_IEEE_eg), 0,
                    1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                // Src: (fadd:f32 (fmul:f32 f32:f32:$src0, f32:f32:$src1), f32:f32:$src2) - Complexity = 6
                // Dst: (MULADD_IEEE_eg:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*31011*/     /*Scope*/ 28, /*->31040*/
/*31012*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*31014*/       OPC_EmitInteger, MVT::i32, 0, 
/*31017*/       OPC_EmitInteger, MVT::i32, 0, 
/*31020*/       OPC_EmitInteger, MVT::i32, 0, 
/*31023*/       OPC_EmitInteger, MVT::i32, 0, 
/*31026*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MAD_F32), 0,
                    1/*#VTs*/, MVT::f32, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
                // Src: (fadd:f32 (fmul:f32 f32:f32:$src0, f32:f32:$src1), f32:f32:$src2) - Complexity = 6
                // Dst: (V_MAD_F32:f32 ?:f32:$src0, ?:f32:$src1, ?:f32:$src2)
/*31040*/     0, /*End of Scope*/
/*31041*/   /*Scope*/ 18|128,3/*402*/, /*->31445*/
/*31043*/     OPC_RecordChild0, // #0 = $src2
/*31044*/     OPC_Scope, 113|128,1/*241*/, /*->31288*/ // 2 children in Scope
/*31047*/       OPC_MoveChild, 1,
/*31049*/       OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*31052*/       OPC_RecordChild0, // #1 = $src0
/*31053*/       OPC_RecordChild1, // #2 = $src1
/*31054*/       OPC_MoveParent,
/*31055*/       OPC_CheckType, MVT::f32,
/*31057*/       OPC_Scope, 99, /*->31158*/ // 3 children in Scope
/*31059*/         OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*31061*/         OPC_EmitInteger, MVT::i32, 0, 
/*31064*/         OPC_EmitInteger, MVT::i32, 0, 
/*31067*/         OPC_EmitInteger, MVT::i32, 0, 
/*31070*/         OPC_EmitInteger, MVT::i32, 0, 
/*31073*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31085*/         OPC_EmitInteger, MVT::i32, 0, 
/*31088*/         OPC_EmitInteger, MVT::i32, 0, 
/*31091*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31103*/         OPC_EmitInteger, MVT::i32, 0, 
/*31106*/         OPC_EmitInteger, MVT::i32, 0, 
/*31109*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31121*/         OPC_EmitInteger, MVT::i32, 1, 
/*31124*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*31127*/         OPC_EmitInteger, MVT::i32, 0, 
/*31130*/         OPC_EmitInteger, MVT::i32, 0, 
/*31133*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULADD_IEEE_r600), 0,
                      1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (fadd:f32 f32:f32:$src2, (fmul:f32 f32:f32:$src0, f32:f32:$src1)) - Complexity = 6
                  // Dst: (MULADD_IEEE_r600:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*31158*/       /*Scope*/ 99, /*->31258*/
/*31159*/         OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*31161*/         OPC_EmitInteger, MVT::i32, 0, 
/*31164*/         OPC_EmitInteger, MVT::i32, 0, 
/*31167*/         OPC_EmitInteger, MVT::i32, 0, 
/*31170*/         OPC_EmitInteger, MVT::i32, 0, 
/*31173*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31185*/         OPC_EmitInteger, MVT::i32, 0, 
/*31188*/         OPC_EmitInteger, MVT::i32, 0, 
/*31191*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31203*/         OPC_EmitInteger, MVT::i32, 0, 
/*31206*/         OPC_EmitInteger, MVT::i32, 0, 
/*31209*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31221*/         OPC_EmitInteger, MVT::i32, 1, 
/*31224*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*31227*/         OPC_EmitInteger, MVT::i32, 0, 
/*31230*/         OPC_EmitInteger, MVT::i32, 0, 
/*31233*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULADD_IEEE_eg), 0,
                      1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (fadd:f32 f32:f32:$src2, (fmul:f32 f32:f32:$src0, f32:f32:$src1)) - Complexity = 6
                  // Dst: (MULADD_IEEE_eg:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*31258*/       /*Scope*/ 28, /*->31287*/
/*31259*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*31261*/         OPC_EmitInteger, MVT::i32, 0, 
/*31264*/         OPC_EmitInteger, MVT::i32, 0, 
/*31267*/         OPC_EmitInteger, MVT::i32, 0, 
/*31270*/         OPC_EmitInteger, MVT::i32, 0, 
/*31273*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MAD_F32), 0,
                      1/*#VTs*/, MVT::f32, 7/*#Ops*/, 1, 2, 0, 3, 4, 5, 6, 
                  // Src: (fadd:f32 f32:f32:$src2, (fmul:f32 f32:f32:$src0, f32:f32:$src1)) - Complexity = 6
                  // Dst: (V_MAD_F32:f32 ?:f32:$src0, ?:f32:$src1, ?:f32:$src2)
/*31287*/       0, /*End of Scope*/
/*31288*/     /*Scope*/ 26|128,1/*154*/, /*->31444*/
/*31290*/       OPC_RecordChild1, // #1 = $src1
/*31291*/       OPC_SwitchType /*2 cases */, 116,  MVT::f32,// ->31410
/*31294*/         OPC_Scope, 101, /*->31397*/ // 2 children in Scope
/*31296*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*31298*/           OPC_EmitInteger, MVT::i32, 0, 
/*31301*/           OPC_EmitInteger, MVT::i32, 0, 
/*31304*/           OPC_EmitInteger, MVT::i32, 1, 
/*31307*/           OPC_EmitInteger, MVT::i32, 0, 
/*31310*/           OPC_EmitInteger, MVT::i32, 0, 
/*31313*/           OPC_EmitInteger, MVT::i32, 0, 
/*31316*/           OPC_EmitInteger, MVT::i32, 0, 
/*31319*/           OPC_EmitInteger, MVT::i32, 0, 
/*31322*/           OPC_EmitInteger, MVT::i32, 0, 
/*31325*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31337*/           OPC_EmitInteger, MVT::i32, 0, 
/*31340*/           OPC_EmitInteger, MVT::i32, 0, 
/*31343*/           OPC_EmitInteger, MVT::i32, 0, 
/*31346*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31358*/           OPC_EmitInteger, MVT::i32, 1, 
/*31361*/           OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*31364*/           OPC_EmitInteger, MVT::i32, 0, 
/*31367*/           OPC_EmitInteger, MVT::i32, 0, 
/*31370*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::ADD), 0,
                        1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (fadd:f32 R600_Reg32:f32:$src0, R600_Reg32:f32:$src1) - Complexity = 3
                    // Dst: (ADD:f32 R600_Reg32:f32:$src0, R600_Reg32:f32:$src1)
/*31397*/         /*Scope*/ 11, /*->31409*/
/*31398*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*31400*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ADD_F32_e32), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (fadd:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
                    // Dst: (V_ADD_F32_e32:f32 f32:f32:$src0, f32:f32:$src1)
/*31409*/         0, /*End of Scope*/
                /*SwitchType*/ 31,  MVT::f64,// ->31443
/*31412*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*31414*/         OPC_EmitInteger, MVT::i64, 0, 
/*31417*/         OPC_EmitInteger, MVT::i32, 0, 
/*31420*/         OPC_EmitInteger, MVT::i32, 0, 
/*31423*/         OPC_EmitInteger, MVT::i32, 0, 
/*31426*/         OPC_EmitInteger, MVT::i32, 0, 
/*31429*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ADD_F64), 0,
                      1/*#VTs*/, MVT::f64, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
                  // Src: (fadd:f64 f64:f64:$src0, f64:f64:$src1) - Complexity = 3
                  // Dst: (V_ADD_F64:f64 ?:f64:$src0, ?:f64:$src1, 0:i64)
                0, // EndSwitchType
/*31444*/     0, /*End of Scope*/
/*31445*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 27|128,1/*155*/,  TARGET_VAL(ISD::FMUL),// ->31605
/*31450*/   OPC_RecordChild0, // #0 = $src0
/*31451*/   OPC_RecordChild1, // #1 = $src1
/*31452*/   OPC_SwitchType /*2 cases */, 116,  MVT::f32,// ->31571
/*31455*/     OPC_Scope, 101, /*->31558*/ // 2 children in Scope
/*31457*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*31459*/       OPC_EmitInteger, MVT::i32, 0, 
/*31462*/       OPC_EmitInteger, MVT::i32, 0, 
/*31465*/       OPC_EmitInteger, MVT::i32, 1, 
/*31468*/       OPC_EmitInteger, MVT::i32, 0, 
/*31471*/       OPC_EmitInteger, MVT::i32, 0, 
/*31474*/       OPC_EmitInteger, MVT::i32, 0, 
/*31477*/       OPC_EmitInteger, MVT::i32, 0, 
/*31480*/       OPC_EmitInteger, MVT::i32, 0, 
/*31483*/       OPC_EmitInteger, MVT::i32, 0, 
/*31486*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31498*/       OPC_EmitInteger, MVT::i32, 0, 
/*31501*/       OPC_EmitInteger, MVT::i32, 0, 
/*31504*/       OPC_EmitInteger, MVT::i32, 0, 
/*31507*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31519*/       OPC_EmitInteger, MVT::i32, 1, 
/*31522*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*31525*/       OPC_EmitInteger, MVT::i32, 0, 
/*31528*/       OPC_EmitInteger, MVT::i32, 0, 
/*31531*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                    1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (fmul:f32 R600_Reg32:f32:$src0, R600_Reg32:f32:$src1) - Complexity = 3
                // Dst: (MUL_IEEE:f32 R600_Reg32:f32:$src0, R600_Reg32:f32:$src1)
/*31558*/     /*Scope*/ 11, /*->31570*/
/*31559*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*31561*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_F32_e32), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
                // Dst: (V_MUL_F32_e32:f32 f32:f32:$src0, f32:f32:$src1)
/*31570*/     0, /*End of Scope*/
            /*SwitchType*/ 31,  MVT::f64,// ->31604
/*31573*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*31575*/     OPC_EmitInteger, MVT::i64, 0, 
/*31578*/     OPC_EmitInteger, MVT::i32, 0, 
/*31581*/     OPC_EmitInteger, MVT::i32, 0, 
/*31584*/     OPC_EmitInteger, MVT::i32, 0, 
/*31587*/     OPC_EmitInteger, MVT::i32, 0, 
/*31590*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_F64), 0,
                  1/*#VTs*/, MVT::f64, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
              // Src: (fmul:f64 f64:f64:$src0, f64:f64:$src1) - Complexity = 3
              // Dst: (V_MUL_F64:f64 ?:f64:$src0, ?:f64:$src1, 0:i64)
            0, // EndSwitchType
          /*SwitchOpcode*/ 120,  TARGET_VAL(AMDGPUISD::FMAX),// ->31728
/*31608*/   OPC_RecordChild0, // #0 = $src0
/*31609*/   OPC_RecordChild1, // #1 = $src1
/*31610*/   OPC_CheckType, MVT::f32,
/*31612*/   OPC_Scope, 101, /*->31715*/ // 2 children in Scope
/*31614*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*31616*/     OPC_EmitInteger, MVT::i32, 0, 
/*31619*/     OPC_EmitInteger, MVT::i32, 0, 
/*31622*/     OPC_EmitInteger, MVT::i32, 1, 
/*31625*/     OPC_EmitInteger, MVT::i32, 0, 
/*31628*/     OPC_EmitInteger, MVT::i32, 0, 
/*31631*/     OPC_EmitInteger, MVT::i32, 0, 
/*31634*/     OPC_EmitInteger, MVT::i32, 0, 
/*31637*/     OPC_EmitInteger, MVT::i32, 0, 
/*31640*/     OPC_EmitInteger, MVT::i32, 0, 
/*31643*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31655*/     OPC_EmitInteger, MVT::i32, 0, 
/*31658*/     OPC_EmitInteger, MVT::i32, 0, 
/*31661*/     OPC_EmitInteger, MVT::i32, 0, 
/*31664*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31676*/     OPC_EmitInteger, MVT::i32, 1, 
/*31679*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*31682*/     OPC_EmitInteger, MVT::i32, 0, 
/*31685*/     OPC_EmitInteger, MVT::i32, 0, 
/*31688*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MAX), 0,
                  1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUfmax:f32 R600_Reg32:f32:$src0, R600_Reg32:f32:$src1) - Complexity = 3
              // Dst: (MAX:f32 R600_Reg32:f32:$src0, R600_Reg32:f32:$src1)
/*31715*/   /*Scope*/ 11, /*->31727*/
/*31716*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*31718*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MAX_LEGACY_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (AMDGPUfmax:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
              // Dst: (V_MAX_LEGACY_F32_e32:f32 f32:f32:$src0, f32:f32:$src1)
/*31727*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 120,  TARGET_VAL(AMDGPUISD::FMIN),// ->31851
/*31731*/   OPC_RecordChild0, // #0 = $src0
/*31732*/   OPC_RecordChild1, // #1 = $src1
/*31733*/   OPC_CheckType, MVT::f32,
/*31735*/   OPC_Scope, 101, /*->31838*/ // 2 children in Scope
/*31737*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*31739*/     OPC_EmitInteger, MVT::i32, 0, 
/*31742*/     OPC_EmitInteger, MVT::i32, 0, 
/*31745*/     OPC_EmitInteger, MVT::i32, 1, 
/*31748*/     OPC_EmitInteger, MVT::i32, 0, 
/*31751*/     OPC_EmitInteger, MVT::i32, 0, 
/*31754*/     OPC_EmitInteger, MVT::i32, 0, 
/*31757*/     OPC_EmitInteger, MVT::i32, 0, 
/*31760*/     OPC_EmitInteger, MVT::i32, 0, 
/*31763*/     OPC_EmitInteger, MVT::i32, 0, 
/*31766*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31778*/     OPC_EmitInteger, MVT::i32, 0, 
/*31781*/     OPC_EmitInteger, MVT::i32, 0, 
/*31784*/     OPC_EmitInteger, MVT::i32, 0, 
/*31787*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31799*/     OPC_EmitInteger, MVT::i32, 1, 
/*31802*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*31805*/     OPC_EmitInteger, MVT::i32, 0, 
/*31808*/     OPC_EmitInteger, MVT::i32, 0, 
/*31811*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MIN), 0,
                  1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUfmin:f32 R600_Reg32:f32:$src0, R600_Reg32:f32:$src1) - Complexity = 3
              // Dst: (MIN:f32 R600_Reg32:f32:$src0, R600_Reg32:f32:$src1)
/*31838*/   /*Scope*/ 11, /*->31850*/
/*31839*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*31841*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MIN_LEGACY_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (AMDGPUfmin:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
              // Dst: (V_MIN_LEGACY_F32_e32:f32 f32:f32:$src0, f32:f32:$src1)
/*31850*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 84,  TARGET_VAL(AMDGPUISD::FRACT),// ->31938
/*31854*/   OPC_RecordChild0, // #0 = $src0
/*31855*/   OPC_CheckType, MVT::f32,
/*31857*/   OPC_Scope, 67, /*->31926*/ // 2 children in Scope
/*31859*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*31861*/     OPC_EmitInteger, MVT::i32, 1, 
/*31864*/     OPC_EmitInteger, MVT::i32, 0, 
/*31867*/     OPC_EmitInteger, MVT::i32, 0, 
/*31870*/     OPC_EmitInteger, MVT::i32, 0, 
/*31873*/     OPC_EmitInteger, MVT::i32, 0, 
/*31876*/     OPC_EmitInteger, MVT::i32, 0, 
/*31879*/     OPC_EmitInteger, MVT::i32, 0, 
/*31882*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31894*/     OPC_EmitInteger, MVT::i32, 1, 
/*31897*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*31900*/     OPC_EmitInteger, MVT::i32, 0, 
/*31903*/     OPC_EmitInteger, MVT::i32, 0, 
/*31906*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::FRACT), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (AMDGPUfract:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (FRACT:f32 R600_Reg32:f32:$src0)
/*31926*/   /*Scope*/ 10, /*->31937*/
/*31927*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*31929*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_FRACT_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (AMDGPUfract:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (V_FRACT_F32_e32:f32 f32:f32:$src0)
/*31937*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 84,  TARGET_VAL(ISD::FCEIL),// ->32025
/*31941*/   OPC_RecordChild0, // #0 = $src0
/*31942*/   OPC_CheckType, MVT::f32,
/*31944*/   OPC_Scope, 67, /*->32013*/ // 2 children in Scope
/*31946*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*31948*/     OPC_EmitInteger, MVT::i32, 1, 
/*31951*/     OPC_EmitInteger, MVT::i32, 0, 
/*31954*/     OPC_EmitInteger, MVT::i32, 0, 
/*31957*/     OPC_EmitInteger, MVT::i32, 0, 
/*31960*/     OPC_EmitInteger, MVT::i32, 0, 
/*31963*/     OPC_EmitInteger, MVT::i32, 0, 
/*31966*/     OPC_EmitInteger, MVT::i32, 0, 
/*31969*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31981*/     OPC_EmitInteger, MVT::i32, 1, 
/*31984*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*31987*/     OPC_EmitInteger, MVT::i32, 0, 
/*31990*/     OPC_EmitInteger, MVT::i32, 0, 
/*31993*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CEIL), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (fceil:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (CEIL:f32 R600_Reg32:f32:$src0)
/*32013*/   /*Scope*/ 10, /*->32024*/
/*32014*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*32016*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CEIL_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fceil:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (V_CEIL_F32_e32:f32 f32:f32:$src0)
/*32024*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 84,  TARGET_VAL(ISD::FRINT),// ->32112
/*32028*/   OPC_RecordChild0, // #0 = $src0
/*32029*/   OPC_CheckType, MVT::f32,
/*32031*/   OPC_Scope, 67, /*->32100*/ // 2 children in Scope
/*32033*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*32035*/     OPC_EmitInteger, MVT::i32, 1, 
/*32038*/     OPC_EmitInteger, MVT::i32, 0, 
/*32041*/     OPC_EmitInteger, MVT::i32, 0, 
/*32044*/     OPC_EmitInteger, MVT::i32, 0, 
/*32047*/     OPC_EmitInteger, MVT::i32, 0, 
/*32050*/     OPC_EmitInteger, MVT::i32, 0, 
/*32053*/     OPC_EmitInteger, MVT::i32, 0, 
/*32056*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32068*/     OPC_EmitInteger, MVT::i32, 1, 
/*32071*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*32074*/     OPC_EmitInteger, MVT::i32, 0, 
/*32077*/     OPC_EmitInteger, MVT::i32, 0, 
/*32080*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RNDNE), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (frint:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (RNDNE:f32 R600_Reg32:f32:$src0)
/*32100*/   /*Scope*/ 10, /*->32111*/
/*32101*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*32103*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_RNDNE_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (frint:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (V_RNDNE_F32_e32:f32 f32:f32:$src0)
/*32111*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 84,  TARGET_VAL(ISD::FFLOOR),// ->32199
/*32115*/   OPC_RecordChild0, // #0 = $src0
/*32116*/   OPC_CheckType, MVT::f32,
/*32118*/   OPC_Scope, 67, /*->32187*/ // 2 children in Scope
/*32120*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*32122*/     OPC_EmitInteger, MVT::i32, 1, 
/*32125*/     OPC_EmitInteger, MVT::i32, 0, 
/*32128*/     OPC_EmitInteger, MVT::i32, 0, 
/*32131*/     OPC_EmitInteger, MVT::i32, 0, 
/*32134*/     OPC_EmitInteger, MVT::i32, 0, 
/*32137*/     OPC_EmitInteger, MVT::i32, 0, 
/*32140*/     OPC_EmitInteger, MVT::i32, 0, 
/*32143*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32155*/     OPC_EmitInteger, MVT::i32, 1, 
/*32158*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*32161*/     OPC_EmitInteger, MVT::i32, 0, 
/*32164*/     OPC_EmitInteger, MVT::i32, 0, 
/*32167*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::FLOOR), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (ffloor:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (FLOOR:f32 R600_Reg32:f32:$src0)
/*32187*/   /*Scope*/ 10, /*->32198*/
/*32188*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*32190*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_FLOOR_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (ffloor:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (V_FLOOR_F32_e32:f32 f32:f32:$src0)
/*32198*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 91|128,2/*347*/,  TARGET_VAL(AMDGPUISD::DOT4),// ->32550
/*32203*/   OPC_RecordChild0, // #0 = $src0_X
/*32204*/   OPC_RecordChild1, // #1 = $src1_X
/*32205*/   OPC_RecordChild2, // #2 = $src0_Y
/*32206*/   OPC_RecordChild3, // #3 = $src1_Y
/*32207*/   OPC_RecordChild4, // #4 = $src0_Z
/*32208*/   OPC_RecordChild5, // #5 = $src1_Z
/*32209*/   OPC_RecordChild6, // #6 = $src0_W
/*32210*/   OPC_RecordChild7, // #7 = $src1_W
/*32211*/   OPC_CheckType, MVT::f32,
/*32213*/   OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*32215*/   OPC_EmitInteger, MVT::i32, 0, 
/*32218*/   OPC_EmitInteger, MVT::i32, 0, 
/*32221*/   OPC_EmitInteger, MVT::i32, 1, 
/*32224*/   OPC_EmitInteger, MVT::i32, 0, 
/*32227*/   OPC_EmitInteger, MVT::i32, 0, 
/*32230*/   OPC_EmitInteger, MVT::i32, 0, 
/*32233*/   OPC_EmitInteger, MVT::i32, 0, 
/*32236*/   OPC_EmitInteger, MVT::i32, 0, 
/*32239*/   OPC_EmitInteger, MVT::i32, 0, 
/*32242*/   OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32254*/   OPC_EmitInteger, MVT::i32, 0, 
/*32257*/   OPC_EmitInteger, MVT::i32, 0, 
/*32260*/   OPC_EmitInteger, MVT::i32, 0, 
/*32263*/   OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32275*/   OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*32278*/   OPC_EmitInteger, MVT::i32, 0, 
/*32281*/   OPC_EmitInteger, MVT::i32, 0, 
/*32284*/   OPC_EmitInteger, MVT::i32, 1, 
/*32287*/   OPC_EmitInteger, MVT::i32, 0, 
/*32290*/   OPC_EmitInteger, MVT::i32, 0, 
/*32293*/   OPC_EmitInteger, MVT::i32, 0, 
/*32296*/   OPC_EmitInteger, MVT::i32, 0, 
/*32299*/   OPC_EmitInteger, MVT::i32, 0, 
/*32302*/   OPC_EmitInteger, MVT::i32, 0, 
/*32305*/   OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32317*/   OPC_EmitInteger, MVT::i32, 0, 
/*32320*/   OPC_EmitInteger, MVT::i32, 0, 
/*32323*/   OPC_EmitInteger, MVT::i32, 0, 
/*32326*/   OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32338*/   OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*32341*/   OPC_EmitInteger, MVT::i32, 0, 
/*32344*/   OPC_EmitInteger, MVT::i32, 0, 
/*32347*/   OPC_EmitInteger, MVT::i32, 1, 
/*32350*/   OPC_EmitInteger, MVT::i32, 0, 
/*32353*/   OPC_EmitInteger, MVT::i32, 0, 
/*32356*/   OPC_EmitInteger, MVT::i32, 0, 
/*32359*/   OPC_EmitInteger, MVT::i32, 0, 
/*32362*/   OPC_EmitInteger, MVT::i32, 0, 
/*32365*/   OPC_EmitInteger, MVT::i32, 0, 
/*32368*/   OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32380*/   OPC_EmitInteger, MVT::i32, 0, 
/*32383*/   OPC_EmitInteger, MVT::i32, 0, 
/*32386*/   OPC_EmitInteger, MVT::i32, 0, 
/*32389*/   OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32401*/   OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*32404*/   OPC_EmitInteger, MVT::i32, 0, 
/*32407*/   OPC_EmitInteger, MVT::i32, 0, 
/*32410*/   OPC_EmitInteger, MVT::i32, 1, 
/*32413*/   OPC_EmitInteger, MVT::i32, 0, 
/*32416*/   OPC_EmitInteger, MVT::i32, 0, 
/*32419*/   OPC_EmitInteger, MVT::i32, 0, 
/*32422*/   OPC_EmitInteger, MVT::i32, 0, 
/*32425*/   OPC_EmitInteger, MVT::i32, 0, 
/*32428*/   OPC_EmitInteger, MVT::i32, 0, 
/*32431*/   OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32443*/   OPC_EmitInteger, MVT::i32, 0, 
/*32446*/   OPC_EmitInteger, MVT::i32, 0, 
/*32449*/   OPC_EmitInteger, MVT::i32, 0, 
/*32452*/   OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32464*/   OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*32467*/   OPC_EmitInteger, MVT::i32, 0, 
/*32470*/   OPC_EmitInteger, MVT::i32, 0, 
/*32473*/   OPC_MorphNodeTo, TARGET_VAL(AMDGPU::DOT_4), 0,
                1/*#VTs*/, MVT::f32, 70/*#Ops*/, 8, 9, 10, 11, 12, 13, 0, 14, 15, 16, 17, 1, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 2, 29, 30, 31, 32, 3, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 4, 44, 45, 46, 47, 5, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 6, 59, 60, 61, 62, 7, 63, 64, 65, 66, 67, 68, 69, 
            // Src: (DOT4:f32 R600_TReg32_X:f32:$src0_X, R600_TReg32_X:f32:$src1_X, R600_TReg32_Y:f32:$src0_Y, R600_TReg32_Y:f32:$src1_Y, R600_TReg32_Z:f32:$src0_Z, R600_TReg32_Z:f32:$src1_Z, R600_TReg32_W:f32:$src0_W, R600_TReg32_W:f32:$src1_W) - Complexity = 3
            // Dst: (DOT_4:f32 R600_TReg32_X:f32:$src0_X, R600_TReg32_X:f32:$src1_X, R600_TReg32_Y:f32:$src0_Y, R600_TReg32_Y:f32:$src1_Y, R600_TReg32_Z:f32:$src0_Z, R600_TReg32_Z:f32:$src1_Z, R600_TReg32_W:f32:$src0_W, R600_TReg32_W:f32:$src1_W)
          /*SwitchOpcode*/ 92|128,1/*220*/,  TARGET_VAL(ISD::FEXP2),// ->32774
/*32554*/   OPC_RecordChild0, // #0 = $src0
/*32555*/   OPC_CheckType, MVT::f32,
/*32557*/   OPC_Scope, 67, /*->32626*/ // 4 children in Scope
/*32559*/     OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*32561*/     OPC_EmitInteger, MVT::i32, 1, 
/*32564*/     OPC_EmitInteger, MVT::i32, 0, 
/*32567*/     OPC_EmitInteger, MVT::i32, 0, 
/*32570*/     OPC_EmitInteger, MVT::i32, 0, 
/*32573*/     OPC_EmitInteger, MVT::i32, 0, 
/*32576*/     OPC_EmitInteger, MVT::i32, 0, 
/*32579*/     OPC_EmitInteger, MVT::i32, 0, 
/*32582*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32594*/     OPC_EmitInteger, MVT::i32, 1, 
/*32597*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*32600*/     OPC_EmitInteger, MVT::i32, 0, 
/*32603*/     OPC_EmitInteger, MVT::i32, 0, 
/*32606*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EXP_IEEE_r600), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (fexp2:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (EXP_IEEE_r600:f32 R600_Reg32:f32:$src0)
/*32626*/   /*Scope*/ 67, /*->32694*/
/*32627*/     OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*32629*/     OPC_EmitInteger, MVT::i32, 1, 
/*32632*/     OPC_EmitInteger, MVT::i32, 0, 
/*32635*/     OPC_EmitInteger, MVT::i32, 0, 
/*32638*/     OPC_EmitInteger, MVT::i32, 0, 
/*32641*/     OPC_EmitInteger, MVT::i32, 0, 
/*32644*/     OPC_EmitInteger, MVT::i32, 0, 
/*32647*/     OPC_EmitInteger, MVT::i32, 0, 
/*32650*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32662*/     OPC_EmitInteger, MVT::i32, 1, 
/*32665*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*32668*/     OPC_EmitInteger, MVT::i32, 0, 
/*32671*/     OPC_EmitInteger, MVT::i32, 0, 
/*32674*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EXP_IEEE_eg), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (fexp2:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (EXP_IEEE_eg:f32 R600_Reg32:f32:$src0)
/*32694*/   /*Scope*/ 67, /*->32762*/
/*32695*/     OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*32697*/     OPC_EmitInteger, MVT::i32, 1, 
/*32700*/     OPC_EmitInteger, MVT::i32, 0, 
/*32703*/     OPC_EmitInteger, MVT::i32, 0, 
/*32706*/     OPC_EmitInteger, MVT::i32, 0, 
/*32709*/     OPC_EmitInteger, MVT::i32, 0, 
/*32712*/     OPC_EmitInteger, MVT::i32, 0, 
/*32715*/     OPC_EmitInteger, MVT::i32, 0, 
/*32718*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32730*/     OPC_EmitInteger, MVT::i32, 1, 
/*32733*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*32736*/     OPC_EmitInteger, MVT::i32, 0, 
/*32739*/     OPC_EmitInteger, MVT::i32, 0, 
/*32742*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EXP_IEEE_cm), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (fexp2:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (EXP_IEEE_cm:f32 R600_Reg32:f32:$src0)
/*32762*/   /*Scope*/ 10, /*->32773*/
/*32763*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*32765*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_EXP_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fexp2:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (V_EXP_F32_e32:f32 f32:f32:$src0)
/*32773*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 92|128,1/*220*/,  TARGET_VAL(ISD::FLOG2),// ->32998
/*32778*/   OPC_RecordChild0, // #0 = $src0
/*32779*/   OPC_CheckType, MVT::f32,
/*32781*/   OPC_Scope, 67, /*->32850*/ // 4 children in Scope
/*32783*/     OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*32785*/     OPC_EmitInteger, MVT::i32, 1, 
/*32788*/     OPC_EmitInteger, MVT::i32, 0, 
/*32791*/     OPC_EmitInteger, MVT::i32, 0, 
/*32794*/     OPC_EmitInteger, MVT::i32, 0, 
/*32797*/     OPC_EmitInteger, MVT::i32, 0, 
/*32800*/     OPC_EmitInteger, MVT::i32, 0, 
/*32803*/     OPC_EmitInteger, MVT::i32, 0, 
/*32806*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32818*/     OPC_EmitInteger, MVT::i32, 1, 
/*32821*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*32824*/     OPC_EmitInteger, MVT::i32, 0, 
/*32827*/     OPC_EmitInteger, MVT::i32, 0, 
/*32830*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LOG_IEEE_r600), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (flog2:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (LOG_IEEE_r600:f32 R600_Reg32:f32:$src0)
/*32850*/   /*Scope*/ 67, /*->32918*/
/*32851*/     OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*32853*/     OPC_EmitInteger, MVT::i32, 1, 
/*32856*/     OPC_EmitInteger, MVT::i32, 0, 
/*32859*/     OPC_EmitInteger, MVT::i32, 0, 
/*32862*/     OPC_EmitInteger, MVT::i32, 0, 
/*32865*/     OPC_EmitInteger, MVT::i32, 0, 
/*32868*/     OPC_EmitInteger, MVT::i32, 0, 
/*32871*/     OPC_EmitInteger, MVT::i32, 0, 
/*32874*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32886*/     OPC_EmitInteger, MVT::i32, 1, 
/*32889*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*32892*/     OPC_EmitInteger, MVT::i32, 0, 
/*32895*/     OPC_EmitInteger, MVT::i32, 0, 
/*32898*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LOG_IEEE_eg), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (flog2:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (LOG_IEEE_eg:f32 R600_Reg32:f32:$src0)
/*32918*/   /*Scope*/ 67, /*->32986*/
/*32919*/     OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*32921*/     OPC_EmitInteger, MVT::i32, 1, 
/*32924*/     OPC_EmitInteger, MVT::i32, 0, 
/*32927*/     OPC_EmitInteger, MVT::i32, 0, 
/*32930*/     OPC_EmitInteger, MVT::i32, 0, 
/*32933*/     OPC_EmitInteger, MVT::i32, 0, 
/*32936*/     OPC_EmitInteger, MVT::i32, 0, 
/*32939*/     OPC_EmitInteger, MVT::i32, 0, 
/*32942*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32954*/     OPC_EmitInteger, MVT::i32, 1, 
/*32957*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*32960*/     OPC_EmitInteger, MVT::i32, 0, 
/*32963*/     OPC_EmitInteger, MVT::i32, 0, 
/*32966*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LOG_IEEE_cm), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (flog2:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (LOG_IEEE_cm:f32 R600_Reg32:f32:$src0)
/*32986*/   /*Scope*/ 10, /*->32997*/
/*32987*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*32989*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_LOG_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (flog2:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (V_LOG_F32_e32:f32 f32:f32:$src0)
/*32997*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 26|128,1/*154*/,  TARGET_VAL(ISD::SINT_TO_FP),// ->33156
/*33002*/   OPC_RecordChild0, // #0 = $src0
/*33003*/   OPC_CheckChild0Type, MVT::i32,
/*33005*/   OPC_CheckType, MVT::f32,
/*33007*/   OPC_Scope, 67, /*->33076*/ // 3 children in Scope
/*33009*/     OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*33011*/     OPC_EmitInteger, MVT::i32, 1, 
/*33014*/     OPC_EmitInteger, MVT::i32, 0, 
/*33017*/     OPC_EmitInteger, MVT::i32, 0, 
/*33020*/     OPC_EmitInteger, MVT::i32, 0, 
/*33023*/     OPC_EmitInteger, MVT::i32, 0, 
/*33026*/     OPC_EmitInteger, MVT::i32, 0, 
/*33029*/     OPC_EmitInteger, MVT::i32, 0, 
/*33032*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*33044*/     OPC_EmitInteger, MVT::i32, 1, 
/*33047*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*33050*/     OPC_EmitInteger, MVT::i32, 0, 
/*33053*/     OPC_EmitInteger, MVT::i32, 0, 
/*33056*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::INT_TO_FLT_r600), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (sint_to_fp:f32 R600_Reg32:i32:$src0) - Complexity = 3
              // Dst: (INT_TO_FLT_r600:f32 R600_Reg32:i32:$src0)
/*33076*/   /*Scope*/ 67, /*->33144*/
/*33077*/     OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*33079*/     OPC_EmitInteger, MVT::i32, 1, 
/*33082*/     OPC_EmitInteger, MVT::i32, 0, 
/*33085*/     OPC_EmitInteger, MVT::i32, 0, 
/*33088*/     OPC_EmitInteger, MVT::i32, 0, 
/*33091*/     OPC_EmitInteger, MVT::i32, 0, 
/*33094*/     OPC_EmitInteger, MVT::i32, 0, 
/*33097*/     OPC_EmitInteger, MVT::i32, 0, 
/*33100*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*33112*/     OPC_EmitInteger, MVT::i32, 1, 
/*33115*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*33118*/     OPC_EmitInteger, MVT::i32, 0, 
/*33121*/     OPC_EmitInteger, MVT::i32, 0, 
/*33124*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::INT_TO_FLT_eg), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (sint_to_fp:f32 R600_Reg32:i32:$src0) - Complexity = 3
              // Dst: (INT_TO_FLT_eg:f32 R600_Reg32:i32:$src0)
/*33144*/   /*Scope*/ 10, /*->33155*/
/*33145*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33147*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CVT_F32_I32_e32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (sint_to_fp:f32 i32:i32:$src0) - Complexity = 3
              // Dst: (V_CVT_F32_I32_e32:f32 i32:i32:$src0)
/*33155*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 26|128,1/*154*/,  TARGET_VAL(ISD::UINT_TO_FP),// ->33314
/*33160*/   OPC_RecordChild0, // #0 = $src0
/*33161*/   OPC_CheckChild0Type, MVT::i32,
/*33163*/   OPC_CheckType, MVT::f32,
/*33165*/   OPC_Scope, 67, /*->33234*/ // 3 children in Scope
/*33167*/     OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*33169*/     OPC_EmitInteger, MVT::i32, 1, 
/*33172*/     OPC_EmitInteger, MVT::i32, 0, 
/*33175*/     OPC_EmitInteger, MVT::i32, 0, 
/*33178*/     OPC_EmitInteger, MVT::i32, 0, 
/*33181*/     OPC_EmitInteger, MVT::i32, 0, 
/*33184*/     OPC_EmitInteger, MVT::i32, 0, 
/*33187*/     OPC_EmitInteger, MVT::i32, 0, 
/*33190*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*33202*/     OPC_EmitInteger, MVT::i32, 1, 
/*33205*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*33208*/     OPC_EmitInteger, MVT::i32, 0, 
/*33211*/     OPC_EmitInteger, MVT::i32, 0, 
/*33214*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::UINT_TO_FLT_r600), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (uint_to_fp:f32 R600_Reg32:i32:$src0) - Complexity = 3
              // Dst: (UINT_TO_FLT_r600:f32 R600_Reg32:i32:$src0)
/*33234*/   /*Scope*/ 67, /*->33302*/
/*33235*/     OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*33237*/     OPC_EmitInteger, MVT::i32, 1, 
/*33240*/     OPC_EmitInteger, MVT::i32, 0, 
/*33243*/     OPC_EmitInteger, MVT::i32, 0, 
/*33246*/     OPC_EmitInteger, MVT::i32, 0, 
/*33249*/     OPC_EmitInteger, MVT::i32, 0, 
/*33252*/     OPC_EmitInteger, MVT::i32, 0, 
/*33255*/     OPC_EmitInteger, MVT::i32, 0, 
/*33258*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*33270*/     OPC_EmitInteger, MVT::i32, 1, 
/*33273*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*33276*/     OPC_EmitInteger, MVT::i32, 0, 
/*33279*/     OPC_EmitInteger, MVT::i32, 0, 
/*33282*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::UINT_TO_FLT_eg), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (uint_to_fp:f32 R600_Reg32:i32:$src0) - Complexity = 3
              // Dst: (UINT_TO_FLT_eg:f32 R600_Reg32:i32:$src0)
/*33302*/   /*Scope*/ 10, /*->33313*/
/*33303*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33305*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CVT_F32_U32_e32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (uint_to_fp:f32 i32:i32:$src0) - Complexity = 3
              // Dst: (V_CVT_F32_U32_e32:f32 i32:i32:$src0)
/*33313*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 23|128,2/*279*/,  TARGET_VAL(AMDGPUISD::SIN_HW),// ->33597
/*33318*/   OPC_RecordChild0, // #0 = $src0
/*33319*/   OPC_CheckChild0Type, MVT::f32,
/*33321*/   OPC_CheckType, MVT::f32,
/*33323*/   OPC_Scope, 67, /*->33392*/ // 4 children in Scope
/*33325*/     OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*33327*/     OPC_EmitInteger, MVT::i32, 1, 
/*33330*/     OPC_EmitInteger, MVT::i32, 0, 
/*33333*/     OPC_EmitInteger, MVT::i32, 0, 
/*33336*/     OPC_EmitInteger, MVT::i32, 0, 
/*33339*/     OPC_EmitInteger, MVT::i32, 0, 
/*33342*/     OPC_EmitInteger, MVT::i32, 0, 
/*33345*/     OPC_EmitInteger, MVT::i32, 0, 
/*33348*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*33360*/     OPC_EmitInteger, MVT::i32, 1, 
/*33363*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*33366*/     OPC_EmitInteger, MVT::i32, 0, 
/*33369*/     OPC_EmitInteger, MVT::i32, 0, 
/*33372*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SIN_r600), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (SIN_HW:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (SIN_r600:f32 f32:f32:$src0)
/*33392*/   /*Scope*/ 67, /*->33460*/
/*33393*/     OPC_CheckPatternPredicate, 6, // (Subtarget.getGeneration() == AMDGPUSubtarget::R700)
/*33395*/     OPC_EmitInteger, MVT::i32, 1, 
/*33398*/     OPC_EmitInteger, MVT::i32, 0, 
/*33401*/     OPC_EmitInteger, MVT::i32, 0, 
/*33404*/     OPC_EmitInteger, MVT::i32, 0, 
/*33407*/     OPC_EmitInteger, MVT::i32, 0, 
/*33410*/     OPC_EmitInteger, MVT::i32, 0, 
/*33413*/     OPC_EmitInteger, MVT::i32, 0, 
/*33416*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*33428*/     OPC_EmitInteger, MVT::i32, 1, 
/*33431*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*33434*/     OPC_EmitInteger, MVT::i32, 0, 
/*33437*/     OPC_EmitInteger, MVT::i32, 0, 
/*33440*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SIN_r700), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (SIN_HW:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (SIN_r700:f32 f32:f32:$src0)
/*33460*/   /*Scope*/ 67, /*->33528*/
/*33461*/     OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*33463*/     OPC_EmitInteger, MVT::i32, 1, 
/*33466*/     OPC_EmitInteger, MVT::i32, 0, 
/*33469*/     OPC_EmitInteger, MVT::i32, 0, 
/*33472*/     OPC_EmitInteger, MVT::i32, 0, 
/*33475*/     OPC_EmitInteger, MVT::i32, 0, 
/*33478*/     OPC_EmitInteger, MVT::i32, 0, 
/*33481*/     OPC_EmitInteger, MVT::i32, 0, 
/*33484*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*33496*/     OPC_EmitInteger, MVT::i32, 1, 
/*33499*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*33502*/     OPC_EmitInteger, MVT::i32, 0, 
/*33505*/     OPC_EmitInteger, MVT::i32, 0, 
/*33508*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SIN_eg), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (SIN_HW:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (SIN_eg:f32 f32:f32:$src0)
/*33528*/   /*Scope*/ 67, /*->33596*/
/*33529*/     OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*33531*/     OPC_EmitInteger, MVT::i32, 1, 
/*33534*/     OPC_EmitInteger, MVT::i32, 0, 
/*33537*/     OPC_EmitInteger, MVT::i32, 0, 
/*33540*/     OPC_EmitInteger, MVT::i32, 0, 
/*33543*/     OPC_EmitInteger, MVT::i32, 0, 
/*33546*/     OPC_EmitInteger, MVT::i32, 0, 
/*33549*/     OPC_EmitInteger, MVT::i32, 0, 
/*33552*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*33564*/     OPC_EmitInteger, MVT::i32, 1, 
/*33567*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*33570*/     OPC_EmitInteger, MVT::i32, 0, 
/*33573*/     OPC_EmitInteger, MVT::i32, 0, 
/*33576*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SIN_cm), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (SIN_HW:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (SIN_cm:f32 f32:f32:$src0)
/*33596*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 23|128,2/*279*/,  TARGET_VAL(AMDGPUISD::COS_HW),// ->33880
/*33601*/   OPC_RecordChild0, // #0 = $src0
/*33602*/   OPC_CheckChild0Type, MVT::f32,
/*33604*/   OPC_CheckType, MVT::f32,
/*33606*/   OPC_Scope, 67, /*->33675*/ // 4 children in Scope
/*33608*/     OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*33610*/     OPC_EmitInteger, MVT::i32, 1, 
/*33613*/     OPC_EmitInteger, MVT::i32, 0, 
/*33616*/     OPC_EmitInteger, MVT::i32, 0, 
/*33619*/     OPC_EmitInteger, MVT::i32, 0, 
/*33622*/     OPC_EmitInteger, MVT::i32, 0, 
/*33625*/     OPC_EmitInteger, MVT::i32, 0, 
/*33628*/     OPC_EmitInteger, MVT::i32, 0, 
/*33631*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*33643*/     OPC_EmitInteger, MVT::i32, 1, 
/*33646*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*33649*/     OPC_EmitInteger, MVT::i32, 0, 
/*33652*/     OPC_EmitInteger, MVT::i32, 0, 
/*33655*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::COS_r600), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (COS_HW:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (COS_r600:f32 f32:f32:$src0)
/*33675*/   /*Scope*/ 67, /*->33743*/
/*33676*/     OPC_CheckPatternPredicate, 6, // (Subtarget.getGeneration() == AMDGPUSubtarget::R700)
/*33678*/     OPC_EmitInteger, MVT::i32, 1, 
/*33681*/     OPC_EmitInteger, MVT::i32, 0, 
/*33684*/     OPC_EmitInteger, MVT::i32, 0, 
/*33687*/     OPC_EmitInteger, MVT::i32, 0, 
/*33690*/     OPC_EmitInteger, MVT::i32, 0, 
/*33693*/     OPC_EmitInteger, MVT::i32, 0, 
/*33696*/     OPC_EmitInteger, MVT::i32, 0, 
/*33699*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*33711*/     OPC_EmitInteger, MVT::i32, 1, 
/*33714*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*33717*/     OPC_EmitInteger, MVT::i32, 0, 
/*33720*/     OPC_EmitInteger, MVT::i32, 0, 
/*33723*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::COS_r700), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (COS_HW:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (COS_r700:f32 f32:f32:$src0)
/*33743*/   /*Scope*/ 67, /*->33811*/
/*33744*/     OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*33746*/     OPC_EmitInteger, MVT::i32, 1, 
/*33749*/     OPC_EmitInteger, MVT::i32, 0, 
/*33752*/     OPC_EmitInteger, MVT::i32, 0, 
/*33755*/     OPC_EmitInteger, MVT::i32, 0, 
/*33758*/     OPC_EmitInteger, MVT::i32, 0, 
/*33761*/     OPC_EmitInteger, MVT::i32, 0, 
/*33764*/     OPC_EmitInteger, MVT::i32, 0, 
/*33767*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*33779*/     OPC_EmitInteger, MVT::i32, 1, 
/*33782*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*33785*/     OPC_EmitInteger, MVT::i32, 0, 
/*33788*/     OPC_EmitInteger, MVT::i32, 0, 
/*33791*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::COS_eg), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (COS_HW:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (COS_eg:f32 f32:f32:$src0)
/*33811*/   /*Scope*/ 67, /*->33879*/
/*33812*/     OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*33814*/     OPC_EmitInteger, MVT::i32, 1, 
/*33817*/     OPC_EmitInteger, MVT::i32, 0, 
/*33820*/     OPC_EmitInteger, MVT::i32, 0, 
/*33823*/     OPC_EmitInteger, MVT::i32, 0, 
/*33826*/     OPC_EmitInteger, MVT::i32, 0, 
/*33829*/     OPC_EmitInteger, MVT::i32, 0, 
/*33832*/     OPC_EmitInteger, MVT::i32, 0, 
/*33835*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*33847*/     OPC_EmitInteger, MVT::i32, 1, 
/*33850*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*33853*/     OPC_EmitInteger, MVT::i32, 0, 
/*33856*/     OPC_EmitInteger, MVT::i32, 0, 
/*33859*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::COS_cm), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (COS_HW:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (COS_cm:f32 f32:f32:$src0)
/*33879*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 23|128,4/*535*/,  TARGET_VAL(ISD::FSQRT),// ->34419
/*33884*/   OPC_RecordChild0, // #0 = $src0
/*33885*/   OPC_SwitchType /*2 cases */, 5|128,4/*517*/,  MVT::f32,// ->34406
/*33889*/     OPC_Scope, 10, /*->33901*/ // 4 children in Scope
/*33891*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33893*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_SQRT_F32_e32), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f32 f32:f32:$src0) - Complexity = 3
                // Dst: (V_SQRT_F32_e32:f32 f32:f32:$src0)
/*33901*/     /*Scope*/ 38|128,1/*166*/, /*->34069*/
/*33903*/       OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*33905*/       OPC_EmitInteger, MVT::i32, 0, 
/*33908*/       OPC_EmitInteger, MVT::i32, 0, 
/*33911*/       OPC_EmitInteger, MVT::i32, 1, 
/*33914*/       OPC_EmitInteger, MVT::i32, 0, 
/*33917*/       OPC_EmitInteger, MVT::i32, 0, 
/*33920*/       OPC_EmitInteger, MVT::i32, 0, 
/*33923*/       OPC_EmitInteger, MVT::i32, 0, 
/*33926*/       OPC_EmitInteger, MVT::i32, 0, 
/*33929*/       OPC_EmitInteger, MVT::i32, 0, 
/*33932*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*33944*/       OPC_EmitInteger, MVT::i32, 1, 
/*33947*/       OPC_EmitInteger, MVT::i32, 0, 
/*33950*/       OPC_EmitInteger, MVT::i32, 0, 
/*33953*/       OPC_EmitInteger, MVT::i32, 0, 
/*33956*/       OPC_EmitInteger, MVT::i32, 0, 
/*33959*/       OPC_EmitInteger, MVT::i32, 0, 
/*33962*/       OPC_EmitInteger, MVT::i32, 0, 
/*33965*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*33977*/       OPC_EmitInteger, MVT::i32, 1, 
/*33980*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*33983*/       OPC_EmitInteger, MVT::i32, 0, 
/*33986*/       OPC_EmitInteger, MVT::i32, 0, 
/*33989*/       OPC_EmitNode, TARGET_VAL(AMDGPU::RECIPSQRT_CLAMPED_r600), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*34009*/       OPC_EmitInteger, MVT::i32, 0, 
/*34012*/       OPC_EmitInteger, MVT::i32, 0, 
/*34015*/       OPC_EmitInteger, MVT::i32, 0, 
/*34018*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*34030*/       OPC_EmitInteger, MVT::i32, 1, 
/*34033*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*34036*/       OPC_EmitInteger, MVT::i32, 0, 
/*34039*/       OPC_EmitInteger, MVT::i32, 0, 
/*34042*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL), 0,
                    1/*#VTs*/, MVT::f32, 20/*#Ops*/, 1, 2, 3, 4, 5, 6, 0, 7, 8, 9, 10, 23, 24, 25, 26, 27, 28, 29, 30, 31, 
                // Src: (fsqrt:f32 f32:f32:$src) - Complexity = 3
                // Dst: (MUL:f32 ?:f32:$src, (RECIPSQRT_CLAMPED_r600:i32 ?:f32:$src))
/*34069*/     /*Scope*/ 38|128,1/*166*/, /*->34237*/
/*34071*/       OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*34073*/       OPC_EmitInteger, MVT::i32, 0, 
/*34076*/       OPC_EmitInteger, MVT::i32, 0, 
/*34079*/       OPC_EmitInteger, MVT::i32, 1, 
/*34082*/       OPC_EmitInteger, MVT::i32, 0, 
/*34085*/       OPC_EmitInteger, MVT::i32, 0, 
/*34088*/       OPC_EmitInteger, MVT::i32, 0, 
/*34091*/       OPC_EmitInteger, MVT::i32, 0, 
/*34094*/       OPC_EmitInteger, MVT::i32, 0, 
/*34097*/       OPC_EmitInteger, MVT::i32, 0, 
/*34100*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*34112*/       OPC_EmitInteger, MVT::i32, 1, 
/*34115*/       OPC_EmitInteger, MVT::i32, 0, 
/*34118*/       OPC_EmitInteger, MVT::i32, 0, 
/*34121*/       OPC_EmitInteger, MVT::i32, 0, 
/*34124*/       OPC_EmitInteger, MVT::i32, 0, 
/*34127*/       OPC_EmitInteger, MVT::i32, 0, 
/*34130*/       OPC_EmitInteger, MVT::i32, 0, 
/*34133*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*34145*/       OPC_EmitInteger, MVT::i32, 1, 
/*34148*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*34151*/       OPC_EmitInteger, MVT::i32, 0, 
/*34154*/       OPC_EmitInteger, MVT::i32, 0, 
/*34157*/       OPC_EmitNode, TARGET_VAL(AMDGPU::RECIPSQRT_CLAMPED_eg), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*34177*/       OPC_EmitInteger, MVT::i32, 0, 
/*34180*/       OPC_EmitInteger, MVT::i32, 0, 
/*34183*/       OPC_EmitInteger, MVT::i32, 0, 
/*34186*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*34198*/       OPC_EmitInteger, MVT::i32, 1, 
/*34201*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*34204*/       OPC_EmitInteger, MVT::i32, 0, 
/*34207*/       OPC_EmitInteger, MVT::i32, 0, 
/*34210*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL), 0,
                    1/*#VTs*/, MVT::f32, 20/*#Ops*/, 1, 2, 3, 4, 5, 6, 0, 7, 8, 9, 10, 23, 24, 25, 26, 27, 28, 29, 30, 31, 
                // Src: (fsqrt:f32 f32:f32:$src) - Complexity = 3
                // Dst: (MUL:f32 ?:f32:$src, (RECIPSQRT_CLAMPED_eg:i32 ?:f32:$src))
/*34237*/     /*Scope*/ 38|128,1/*166*/, /*->34405*/
/*34239*/       OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*34241*/       OPC_EmitInteger, MVT::i32, 0, 
/*34244*/       OPC_EmitInteger, MVT::i32, 0, 
/*34247*/       OPC_EmitInteger, MVT::i32, 1, 
/*34250*/       OPC_EmitInteger, MVT::i32, 0, 
/*34253*/       OPC_EmitInteger, MVT::i32, 0, 
/*34256*/       OPC_EmitInteger, MVT::i32, 0, 
/*34259*/       OPC_EmitInteger, MVT::i32, 0, 
/*34262*/       OPC_EmitInteger, MVT::i32, 0, 
/*34265*/       OPC_EmitInteger, MVT::i32, 0, 
/*34268*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*34280*/       OPC_EmitInteger, MVT::i32, 1, 
/*34283*/       OPC_EmitInteger, MVT::i32, 0, 
/*34286*/       OPC_EmitInteger, MVT::i32, 0, 
/*34289*/       OPC_EmitInteger, MVT::i32, 0, 
/*34292*/       OPC_EmitInteger, MVT::i32, 0, 
/*34295*/       OPC_EmitInteger, MVT::i32, 0, 
/*34298*/       OPC_EmitInteger, MVT::i32, 0, 
/*34301*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*34313*/       OPC_EmitInteger, MVT::i32, 1, 
/*34316*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*34319*/       OPC_EmitInteger, MVT::i32, 0, 
/*34322*/       OPC_EmitInteger, MVT::i32, 0, 
/*34325*/       OPC_EmitNode, TARGET_VAL(AMDGPU::RECIPSQRT_CLAMPED_cm), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*34345*/       OPC_EmitInteger, MVT::i32, 0, 
/*34348*/       OPC_EmitInteger, MVT::i32, 0, 
/*34351*/       OPC_EmitInteger, MVT::i32, 0, 
/*34354*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*34366*/       OPC_EmitInteger, MVT::i32, 1, 
/*34369*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*34372*/       OPC_EmitInteger, MVT::i32, 0, 
/*34375*/       OPC_EmitInteger, MVT::i32, 0, 
/*34378*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL), 0,
                    1/*#VTs*/, MVT::f32, 20/*#Ops*/, 1, 2, 3, 4, 5, 6, 0, 7, 8, 9, 10, 23, 24, 25, 26, 27, 28, 29, 30, 31, 
                // Src: (fsqrt:f32 f32:f32:$src) - Complexity = 3
                // Dst: (MUL:f32 R600_Reg32:f32:$src, (RECIPSQRT_CLAMPED_cm:i32 ?:f32:$src))
/*34405*/     0, /*End of Scope*/
            /*SwitchType*/ 10,  MVT::f64,// ->34418
/*34408*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34410*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_SQRT_F64_e32), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f64 f64:f64:$src0) - Complexity = 3
              // Dst: (V_SQRT_F64_e32:f64 f64:f64:$src0)
            0, // EndSwitchType
          /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::FSUB),// ->34452
/*34422*/   OPC_RecordChild0, // #0 = $src0
/*34423*/   OPC_RecordChild1, // #1 = $src1
/*34424*/   OPC_SwitchType /*2 cases */, 11,  MVT::f32,// ->34438
/*34427*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34429*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_SUB_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
              // Dst: (V_SUB_F32_e32:f32 f32:f32:$src0, f32:f32:$src1)
            /*SwitchType*/ 11,  MVT::f64,// ->34451
/*34440*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34442*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_SUB_F64), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f64 f64:f64:$src0, f64:f64:$src1) - Complexity = 3
              // Dst: (V_SUB_F64:f64 ?:f64:$src0, ?:f64:$src1)
            0, // EndSwitchType
          /*SwitchOpcode*/ 47,  TARGET_VAL(ISD::FABS),// ->34502
/*34455*/   OPC_RecordChild0, // #0 = $src
/*34456*/   OPC_CheckType, MVT::f32,
/*34458*/   OPC_Scope, 30, /*->34490*/ // 2 children in Scope
/*34460*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34462*/     OPC_EmitInteger, MVT::i32, 0, 
/*34465*/     OPC_EmitInteger, MVT::i32, 1, 
/*34468*/     OPC_EmitInteger, MVT::i32, 0, 
/*34471*/     OPC_EmitInteger, MVT::i32, 0, 
/*34474*/     OPC_EmitInteger, MVT::i32, 0, 
/*34477*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ADD_F32_e64), 0,
                  1/*#VTs*/, MVT::f32, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
              // Src: (fabs:f32 f32:f32:$src) - Complexity = 3
              // Dst: (V_ADD_F32_e64:f32 ?:f32:$src, 0:i32, 1:i32, 0:i32, 0:i32, 0:i32)
/*34490*/   /*Scope*/ 10, /*->34501*/
/*34491*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*34493*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::FABS_R600), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (FABS_R600:f32 f32:f32:$src0)
/*34501*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 47,  TARGET_VAL(ISD::FNEG),// ->34552
/*34505*/   OPC_RecordChild0, // #0 = $src
/*34506*/   OPC_CheckType, MVT::f32,
/*34508*/   OPC_Scope, 30, /*->34540*/ // 2 children in Scope
/*34510*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34512*/     OPC_EmitInteger, MVT::i32, 0, 
/*34515*/     OPC_EmitInteger, MVT::i32, 0, 
/*34518*/     OPC_EmitInteger, MVT::i32, 0, 
/*34521*/     OPC_EmitInteger, MVT::i32, 0, 
/*34524*/     OPC_EmitInteger, MVT::i32, 1, 
/*34527*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ADD_F32_e64), 0,
                  1/*#VTs*/, MVT::f32, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
              // Src: (fneg:f32 f32:f32:$src) - Complexity = 3
              // Dst: (V_ADD_F32_e64:f32 ?:f32:$src, 0:i32, 0:i32, 0:i32, 0:i32, 1:i32)
/*34540*/   /*Scope*/ 10, /*->34551*/
/*34541*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*34543*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::FNEG_R600), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fneg:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (FNEG_R600:f32 f32:f32:$src0)
/*34551*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 96,  TARGET_VAL(ISD::ConstantFP),// ->34651
/*34555*/   OPC_RecordNode,   // #0 = $imm
/*34556*/   OPC_SwitchType /*2 cases */, 28,  MVT::f32,// ->34587
/*34559*/     OPC_Scope, 12, /*->34573*/ // 2 children in Scope
/*34561*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34563*/       OPC_EmitConvertToTarget, 0,
/*34565*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MOV_B32_e32), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 1, 
                // Src: (fpimm:f32):$imm - Complexity = 3
                // Dst: (V_MOV_B32_e32:f32 (fpimm:f32):$imm)
/*34573*/     /*Scope*/ 12, /*->34586*/
/*34574*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*34576*/       OPC_EmitConvertToTarget, 0,
/*34578*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MOV_IMM_F32), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 1, 
                // Src: (fpimm:f32):$val - Complexity = 3
                // Dst: (MOV_IMM_F32:f32 (fpimm:f32):$val)
/*34586*/     0, /*End of Scope*/
            /*SwitchType*/ 61,  MVT::f64,// ->34650
/*34589*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34591*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                  1/*#VTs*/, MVT::f64, 0/*#Ops*/,  // Results = #1
/*34598*/     OPC_EmitConvertToTarget, 0,
/*34600*/     OPC_EmitNodeXForm, 4, 2, // LO32f
/*34603*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_MOV_B32_e32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*34611*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*34614*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 4, 5,  // Results = #6
/*34624*/     OPC_EmitConvertToTarget, 0,
/*34626*/     OPC_EmitNodeXForm, 5, 7, // HI32f
/*34629*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_MOV_B32_e32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 8,  // Results = #9
/*34637*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*34640*/     OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 6, 9, 10, 
              // Src: (fpimm:f64):$imm - Complexity = 3
              // Dst: (INSERT_SUBREG:f64 (INSERT_SUBREG:f64 (IMPLICIT_DEF:f64), (V_MOV_B32_e32:i32 (LO32f:f32 (fpimm:f64):$imm)), sub0:i32), (V_MOV_B32_e32:i32 (HI32f:f32 (fpimm:f64):$imm)), sub1:i32)
            0, // EndSwitchType
          /*SwitchOpcode*/ 93|128,5/*733*/,  TARGET_VAL(ISD::FPOW),// ->35388
/*34655*/   OPC_RecordChild0, // #0 = $src0
/*34656*/   OPC_RecordChild1, // #1 = $src1
/*34657*/   OPC_CheckType, MVT::f32,
/*34659*/   OPC_Scope, 103|128,1/*231*/, /*->34893*/ // 4 children in Scope
/*34662*/     OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*34664*/     OPC_EmitInteger, MVT::i32, 1, 
/*34667*/     OPC_EmitInteger, MVT::i32, 0, 
/*34670*/     OPC_EmitInteger, MVT::i32, 0, 
/*34673*/     OPC_EmitInteger, MVT::i32, 0, 
/*34676*/     OPC_EmitInteger, MVT::i32, 0, 
/*34679*/     OPC_EmitInteger, MVT::i32, 0, 
/*34682*/     OPC_EmitInteger, MVT::i32, 1, 
/*34685*/     OPC_EmitInteger, MVT::i32, 0, 
/*34688*/     OPC_EmitInteger, MVT::i32, 0, 
/*34691*/     OPC_EmitInteger, MVT::i32, 0, 
/*34694*/     OPC_EmitInteger, MVT::i32, 0, 
/*34697*/     OPC_EmitInteger, MVT::i32, 0, 
/*34700*/     OPC_EmitInteger, MVT::i32, 0, 
/*34703*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*34715*/     OPC_EmitInteger, MVT::i32, 1, 
/*34718*/     OPC_EmitInteger, MVT::i32, 0, 
/*34721*/     OPC_EmitInteger, MVT::i32, 0, 
/*34724*/     OPC_EmitInteger, MVT::i32, 0, 
/*34727*/     OPC_EmitInteger, MVT::i32, 0, 
/*34730*/     OPC_EmitInteger, MVT::i32, 0, 
/*34733*/     OPC_EmitInteger, MVT::i32, 0, 
/*34736*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*34748*/     OPC_EmitInteger, MVT::i32, 1, 
/*34751*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*34754*/     OPC_EmitInteger, MVT::i32, 0, 
/*34757*/     OPC_EmitInteger, MVT::i32, 0, 
/*34760*/     OPC_EmitNode, TARGET_VAL(AMDGPU::LOG_IEEE_r600), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 16, 17, 18, 19, 0, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/*34780*/     OPC_EmitInteger, MVT::i32, 0, 
/*34783*/     OPC_EmitInteger, MVT::i32, 0, 
/*34786*/     OPC_EmitInteger, MVT::i32, 0, 
/*34789*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*34801*/     OPC_EmitInteger, MVT::i32, 1, 
/*34804*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*34807*/     OPC_EmitInteger, MVT::i32, 0, 
/*34810*/     OPC_EmitInteger, MVT::i32, 0, 
/*34813*/     OPC_EmitNode, TARGET_VAL(AMDGPU::MUL), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 1, 12, 13, 14, 15, 28, 29, 30, 31, 32, 33, 34, 35, 36,  // Results = #37
/*34840*/     OPC_EmitInteger, MVT::i32, 0, 
/*34843*/     OPC_EmitInteger, MVT::i32, 0, 
/*34846*/     OPC_EmitInteger, MVT::i32, 0, 
/*34849*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*34861*/     OPC_EmitInteger, MVT::i32, 1, 
/*34864*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*34867*/     OPC_EmitInteger, MVT::i32, 0, 
/*34870*/     OPC_EmitInteger, MVT::i32, 0, 
/*34873*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EXP_IEEE_r600), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 2, 3, 4, 5, 37, 38, 39, 40, 41, 42, 43, 44, 45, 
              // Src: (fpow:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
              // Dst: (EXP_IEEE_r600:f32 (MUL:i32 f32:f32:$src1, (LOG_IEEE_r600:i32 f32:f32:$src0)))
/*34893*/   /*Scope*/ 103|128,1/*231*/, /*->35126*/
/*34895*/     OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*34897*/     OPC_EmitInteger, MVT::i32, 1, 
/*34900*/     OPC_EmitInteger, MVT::i32, 0, 
/*34903*/     OPC_EmitInteger, MVT::i32, 0, 
/*34906*/     OPC_EmitInteger, MVT::i32, 0, 
/*34909*/     OPC_EmitInteger, MVT::i32, 0, 
/*34912*/     OPC_EmitInteger, MVT::i32, 0, 
/*34915*/     OPC_EmitInteger, MVT::i32, 1, 
/*34918*/     OPC_EmitInteger, MVT::i32, 0, 
/*34921*/     OPC_EmitInteger, MVT::i32, 0, 
/*34924*/     OPC_EmitInteger, MVT::i32, 0, 
/*34927*/     OPC_EmitInteger, MVT::i32, 0, 
/*34930*/     OPC_EmitInteger, MVT::i32, 0, 
/*34933*/     OPC_EmitInteger, MVT::i32, 0, 
/*34936*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*34948*/     OPC_EmitInteger, MVT::i32, 1, 
/*34951*/     OPC_EmitInteger, MVT::i32, 0, 
/*34954*/     OPC_EmitInteger, MVT::i32, 0, 
/*34957*/     OPC_EmitInteger, MVT::i32, 0, 
/*34960*/     OPC_EmitInteger, MVT::i32, 0, 
/*34963*/     OPC_EmitInteger, MVT::i32, 0, 
/*34966*/     OPC_EmitInteger, MVT::i32, 0, 
/*34969*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*34981*/     OPC_EmitInteger, MVT::i32, 1, 
/*34984*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*34987*/     OPC_EmitInteger, MVT::i32, 0, 
/*34990*/     OPC_EmitInteger, MVT::i32, 0, 
/*34993*/     OPC_EmitNode, TARGET_VAL(AMDGPU::LOG_IEEE_eg), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 16, 17, 18, 19, 0, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/*35013*/     OPC_EmitInteger, MVT::i32, 0, 
/*35016*/     OPC_EmitInteger, MVT::i32, 0, 
/*35019*/     OPC_EmitInteger, MVT::i32, 0, 
/*35022*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*35034*/     OPC_EmitInteger, MVT::i32, 1, 
/*35037*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*35040*/     OPC_EmitInteger, MVT::i32, 0, 
/*35043*/     OPC_EmitInteger, MVT::i32, 0, 
/*35046*/     OPC_EmitNode, TARGET_VAL(AMDGPU::MUL), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 1, 12, 13, 14, 15, 28, 29, 30, 31, 32, 33, 34, 35, 36,  // Results = #37
/*35073*/     OPC_EmitInteger, MVT::i32, 0, 
/*35076*/     OPC_EmitInteger, MVT::i32, 0, 
/*35079*/     OPC_EmitInteger, MVT::i32, 0, 
/*35082*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*35094*/     OPC_EmitInteger, MVT::i32, 1, 
/*35097*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*35100*/     OPC_EmitInteger, MVT::i32, 0, 
/*35103*/     OPC_EmitInteger, MVT::i32, 0, 
/*35106*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EXP_IEEE_eg), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 2, 3, 4, 5, 37, 38, 39, 40, 41, 42, 43, 44, 45, 
              // Src: (fpow:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
              // Dst: (EXP_IEEE_eg:f32 (MUL:i32 f32:f32:$src1, (LOG_IEEE_eg:i32 f32:f32:$src0)))
/*35126*/   /*Scope*/ 103|128,1/*231*/, /*->35359*/
/*35128*/     OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*35130*/     OPC_EmitInteger, MVT::i32, 1, 
/*35133*/     OPC_EmitInteger, MVT::i32, 0, 
/*35136*/     OPC_EmitInteger, MVT::i32, 0, 
/*35139*/     OPC_EmitInteger, MVT::i32, 0, 
/*35142*/     OPC_EmitInteger, MVT::i32, 0, 
/*35145*/     OPC_EmitInteger, MVT::i32, 0, 
/*35148*/     OPC_EmitInteger, MVT::i32, 1, 
/*35151*/     OPC_EmitInteger, MVT::i32, 0, 
/*35154*/     OPC_EmitInteger, MVT::i32, 0, 
/*35157*/     OPC_EmitInteger, MVT::i32, 0, 
/*35160*/     OPC_EmitInteger, MVT::i32, 0, 
/*35163*/     OPC_EmitInteger, MVT::i32, 0, 
/*35166*/     OPC_EmitInteger, MVT::i32, 0, 
/*35169*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*35181*/     OPC_EmitInteger, MVT::i32, 1, 
/*35184*/     OPC_EmitInteger, MVT::i32, 0, 
/*35187*/     OPC_EmitInteger, MVT::i32, 0, 
/*35190*/     OPC_EmitInteger, MVT::i32, 0, 
/*35193*/     OPC_EmitInteger, MVT::i32, 0, 
/*35196*/     OPC_EmitInteger, MVT::i32, 0, 
/*35199*/     OPC_EmitInteger, MVT::i32, 0, 
/*35202*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*35214*/     OPC_EmitInteger, MVT::i32, 1, 
/*35217*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*35220*/     OPC_EmitInteger, MVT::i32, 0, 
/*35223*/     OPC_EmitInteger, MVT::i32, 0, 
/*35226*/     OPC_EmitNode, TARGET_VAL(AMDGPU::LOG_IEEE_cm), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 16, 17, 18, 19, 0, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/*35246*/     OPC_EmitInteger, MVT::i32, 0, 
/*35249*/     OPC_EmitInteger, MVT::i32, 0, 
/*35252*/     OPC_EmitInteger, MVT::i32, 0, 
/*35255*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*35267*/     OPC_EmitInteger, MVT::i32, 1, 
/*35270*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*35273*/     OPC_EmitInteger, MVT::i32, 0, 
/*35276*/     OPC_EmitInteger, MVT::i32, 0, 
/*35279*/     OPC_EmitNode, TARGET_VAL(AMDGPU::MUL), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 1, 12, 13, 14, 15, 28, 29, 30, 31, 32, 33, 34, 35, 36,  // Results = #37
/*35306*/     OPC_EmitInteger, MVT::i32, 0, 
/*35309*/     OPC_EmitInteger, MVT::i32, 0, 
/*35312*/     OPC_EmitInteger, MVT::i32, 0, 
/*35315*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*35327*/     OPC_EmitInteger, MVT::i32, 1, 
/*35330*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*35333*/     OPC_EmitInteger, MVT::i32, 0, 
/*35336*/     OPC_EmitInteger, MVT::i32, 0, 
/*35339*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EXP_IEEE_cm), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 2, 3, 4, 5, 37, 38, 39, 40, 41, 42, 43, 44, 45, 
              // Src: (fpow:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
              // Dst: (EXP_IEEE_cm:f32 (MUL:i32 f32:f32:$src1, (LOG_IEEE_cm:i32 f32:f32:$src0)))
/*35359*/   /*Scope*/ 27, /*->35387*/
/*35360*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*35362*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_LOG_F32_e32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #2
/*35370*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_MUL_LEGACY_F32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*35379*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_EXP_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 3, 
              // Src: (fpow:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
              // Dst: (V_EXP_F32_e32:f32 (V_MUL_LEGACY_F32_e32:i32 f32:f32:$src1, (V_LOG_F32_e32:i32 f32:f32:$src0)))
/*35387*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::FCOS),// ->35428
/*35391*/   OPC_RecordChild0, // #0 = $src0
/*35392*/   OPC_CheckType, MVT::f32,
/*35394*/   OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*35396*/   OPC_EmitInteger, MVT::i32, 3|128,115|128,11|128,113|128,3/*1042479491*/, 
/*35403*/   OPC_EmitNode, TARGET_VAL(AMDGPU::V_MOV_B32_e32), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*35411*/   OPC_EmitNode, TARGET_VAL(AMDGPU::V_MUL_F32_e32), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*35420*/   OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_COS_F32_e32), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 3, 
            // Src: (fcos:f32 f32:f32:$src0) - Complexity = 3
            // Dst: (V_COS_F32_e32:f32 (V_MUL_F32_e32:i32 ?:f32:$src0, (V_MOV_B32_e32:i32 1042479491:i32)))
          /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::FSIN),// ->35468
/*35431*/   OPC_RecordChild0, // #0 = $src0
/*35432*/   OPC_CheckType, MVT::f32,
/*35434*/   OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*35436*/   OPC_EmitInteger, MVT::i32, 3|128,115|128,11|128,113|128,3/*1042479491*/, 
/*35443*/   OPC_EmitNode, TARGET_VAL(AMDGPU::V_MOV_B32_e32), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*35451*/   OPC_EmitNode, TARGET_VAL(AMDGPU::V_MUL_F32_e32), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*35460*/   OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_SIN_F32_e32), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 3, 
            // Src: (fsin:f32 f32:f32:$src0) - Complexity = 3
            // Dst: (V_SIN_F32_e32:f32 (V_MUL_F32_e32:i32 ?:f32:$src0, (V_MOV_B32_e32:i32 1042479491:i32)))
          /*SwitchOpcode*/ 29|128,13/*1693*/,  TARGET_VAL(ISD::INSERT_VECTOR_ELT),// ->37165
/*35472*/   OPC_RecordChild0, // #0 = $vec
/*35473*/   OPC_RecordChild1, // #1 = $elem
/*35474*/   OPC_Scope, 87|128,5/*727*/, /*->36204*/ // 2 children in Scope
/*35477*/     OPC_CheckChild1Type, MVT::i32,
/*35479*/     OPC_MoveChild, 2,
/*35481*/     OPC_Scope, 111, /*->35594*/ // 16 children in Scope
/*35483*/       OPC_CheckInteger, 0, 
/*35485*/       OPC_MoveParent,
/*35486*/       OPC_SwitchType /*4 cases */, 34,  MVT::v4i32,// ->35523
/*35489*/         OPC_Scope, 15, /*->35506*/ // 2 children in Scope
/*35491*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*35493*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*35496*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4i32 v4i32:v4i32:$vec, i32:i32:$elem, 0:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4i32 ?:v4i32:$vec, ?:i32:$elem, sub0:i32)
/*35506*/         /*Scope*/ 15, /*->35522*/
/*35507*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*35509*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*35512*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4i32 v4i32:v4i32:$vec, i32:i32:$elem, 0:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4i32 ?:v4i32:$vec, ?:i32:$elem, sub0:i32)
/*35522*/         0, /*End of Scope*/
                /*SwitchType*/ 34,  MVT::v2i32,// ->35559
/*35525*/         OPC_Scope, 15, /*->35542*/ // 2 children in Scope
/*35527*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*35529*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*35532*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v2i32 v2i32:v2i32:$vec, i32:i32:$elem, 0:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v2i32 ?:v2i32:$vec, ?:i32:$elem, sub0:i32)
/*35542*/         /*Scope*/ 15, /*->35558*/
/*35543*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*35545*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*35548*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v2i32 v2i32:v2i32:$vec, i32:i32:$elem, 0:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v2i32 ?:v2i32:$vec, ?:i32:$elem, sub0:i32)
/*35558*/         0, /*End of Scope*/
                /*SwitchType*/ 15,  MVT::v8i32,// ->35576
/*35561*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*35563*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*35566*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8i32 v8i32:v8i32:$vec, i32:i32:$elem, 0:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8i32 ?:v8i32:$vec, ?:i32:$elem, sub0:i32)
                /*SwitchType*/ 15,  MVT::v16i32,// ->35593
/*35578*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*35580*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*35583*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 0:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub0:i32)
                0, // EndSwitchType
/*35594*/     /*Scope*/ 111, /*->35706*/
/*35595*/       OPC_CheckInteger, 1, 
/*35597*/       OPC_MoveParent,
/*35598*/       OPC_SwitchType /*4 cases */, 34,  MVT::v4i32,// ->35635
/*35601*/         OPC_Scope, 15, /*->35618*/ // 2 children in Scope
/*35603*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*35605*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*35608*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4i32 v4i32:v4i32:$vec, i32:i32:$elem, 1:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4i32 ?:v4i32:$vec, ?:i32:$elem, sub1:i32)
/*35618*/         /*Scope*/ 15, /*->35634*/
/*35619*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*35621*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*35624*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4i32 v4i32:v4i32:$vec, i32:i32:$elem, 1:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4i32 ?:v4i32:$vec, ?:i32:$elem, sub1:i32)
/*35634*/         0, /*End of Scope*/
                /*SwitchType*/ 34,  MVT::v2i32,// ->35671
/*35637*/         OPC_Scope, 15, /*->35654*/ // 2 children in Scope
/*35639*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*35641*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*35644*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v2i32 v2i32:v2i32:$vec, i32:i32:$elem, 1:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v2i32 ?:v2i32:$vec, ?:i32:$elem, sub1:i32)
/*35654*/         /*Scope*/ 15, /*->35670*/
/*35655*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*35657*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*35660*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v2i32 v2i32:v2i32:$vec, i32:i32:$elem, 1:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v2i32 ?:v2i32:$vec, ?:i32:$elem, sub1:i32)
/*35670*/         0, /*End of Scope*/
                /*SwitchType*/ 15,  MVT::v8i32,// ->35688
/*35673*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*35675*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*35678*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8i32 v8i32:v8i32:$vec, i32:i32:$elem, 1:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8i32 ?:v8i32:$vec, ?:i32:$elem, sub1:i32)
                /*SwitchType*/ 15,  MVT::v16i32,// ->35705
/*35690*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*35692*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*35695*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 1:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub1:i32)
                0, // EndSwitchType
/*35706*/     /*Scope*/ 92, /*->35799*/
/*35707*/       OPC_CheckInteger, 2, 
/*35709*/       OPC_MoveParent,
/*35710*/       OPC_SwitchType /*4 cases */, 34,  MVT::v4i32,// ->35747
/*35713*/         OPC_Scope, 15, /*->35730*/ // 2 children in Scope
/*35715*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*35717*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*35720*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4i32 v4i32:v4i32:$vec, i32:i32:$elem, 2:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4i32 ?:v4i32:$vec, ?:i32:$elem, sub2:i32)
/*35730*/         /*Scope*/ 15, /*->35746*/
/*35731*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*35733*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*35736*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4i32 v4i32:v4i32:$vec, i32:i32:$elem, 2:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4i32 ?:v4i32:$vec, ?:i32:$elem, sub2:i32)
/*35746*/         0, /*End of Scope*/
                /*SwitchType*/ 15,  MVT::v2i32,// ->35764
/*35749*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*35751*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*35754*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v2i32 v2i32:v2i32:$vec, i32:i32:$elem, 2:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v2i32 ?:v2i32:$vec, ?:i32:$elem, sub2:i32)
                /*SwitchType*/ 15,  MVT::v8i32,// ->35781
/*35766*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*35768*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*35771*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8i32 v8i32:v8i32:$vec, i32:i32:$elem, 2:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8i32 ?:v8i32:$vec, ?:i32:$elem, sub2:i32)
                /*SwitchType*/ 15,  MVT::v16i32,// ->35798
/*35783*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*35785*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*35788*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 2:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub2:i32)
                0, // EndSwitchType
/*35799*/     /*Scope*/ 75, /*->35875*/
/*35800*/       OPC_CheckInteger, 3, 
/*35802*/       OPC_MoveParent,
/*35803*/       OPC_SwitchType /*3 cases */, 34,  MVT::v4i32,// ->35840
/*35806*/         OPC_Scope, 15, /*->35823*/ // 2 children in Scope
/*35808*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*35810*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*35813*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4i32 v4i32:v4i32:$vec, i32:i32:$elem, 3:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4i32 ?:v4i32:$vec, ?:i32:$elem, sub3:i32)
/*35823*/         /*Scope*/ 15, /*->35839*/
/*35824*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*35826*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*35829*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4i32 v4i32:v4i32:$vec, i32:i32:$elem, 3:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4i32 ?:v4i32:$vec, ?:i32:$elem, sub3:i32)
/*35839*/         0, /*End of Scope*/
                /*SwitchType*/ 15,  MVT::v8i32,// ->35857
/*35842*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*35844*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*35847*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8i32 v8i32:v8i32:$vec, i32:i32:$elem, 3:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8i32 ?:v8i32:$vec, ?:i32:$elem, sub3:i32)
                /*SwitchType*/ 15,  MVT::v16i32,// ->35874
/*35859*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*35861*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*35864*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 3:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub3:i32)
                0, // EndSwitchType
/*35875*/     /*Scope*/ 39, /*->35915*/
/*35876*/       OPC_CheckInteger, 4, 
/*35878*/       OPC_MoveParent,
/*35879*/       OPC_SwitchType /*2 cases */, 15,  MVT::v8i32,// ->35897
/*35882*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*35884*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*35887*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8i32 v8i32:v8i32:$vec, i32:i32:$elem, 4:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8i32 ?:v8i32:$vec, ?:i32:$elem, sub4:i32)
                /*SwitchType*/ 15,  MVT::v16i32,// ->35914
/*35899*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*35901*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*35904*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 4:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub4:i32)
                0, // EndSwitchType
/*35915*/     /*Scope*/ 39, /*->35955*/
/*35916*/       OPC_CheckInteger, 5, 
/*35918*/       OPC_MoveParent,
/*35919*/       OPC_SwitchType /*2 cases */, 15,  MVT::v8i32,// ->35937
/*35922*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*35924*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*35927*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8i32 v8i32:v8i32:$vec, i32:i32:$elem, 5:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8i32 ?:v8i32:$vec, ?:i32:$elem, sub5:i32)
                /*SwitchType*/ 15,  MVT::v16i32,// ->35954
/*35939*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*35941*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*35944*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 5:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub5:i32)
                0, // EndSwitchType
/*35955*/     /*Scope*/ 39, /*->35995*/
/*35956*/       OPC_CheckInteger, 6, 
/*35958*/       OPC_MoveParent,
/*35959*/       OPC_SwitchType /*2 cases */, 15,  MVT::v8i32,// ->35977
/*35962*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*35964*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*35967*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8i32 v8i32:v8i32:$vec, i32:i32:$elem, 6:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8i32 ?:v8i32:$vec, ?:i32:$elem, sub6:i32)
                /*SwitchType*/ 15,  MVT::v16i32,// ->35994
/*35979*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*35981*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*35984*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 6:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub6:i32)
                0, // EndSwitchType
/*35995*/     /*Scope*/ 39, /*->36035*/
/*35996*/       OPC_CheckInteger, 7, 
/*35998*/       OPC_MoveParent,
/*35999*/       OPC_SwitchType /*2 cases */, 15,  MVT::v8i32,// ->36017
/*36002*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36004*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*36007*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8i32 v8i32:v8i32:$vec, i32:i32:$elem, 7:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8i32 ?:v8i32:$vec, ?:i32:$elem, sub7:i32)
                /*SwitchType*/ 15,  MVT::v16i32,// ->36034
/*36019*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36021*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*36024*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 7:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub7:i32)
                0, // EndSwitchType
/*36035*/     /*Scope*/ 20, /*->36056*/
/*36036*/       OPC_CheckInteger, 8, 
/*36038*/       OPC_MoveParent,
/*36039*/       OPC_CheckType, MVT::v16i32,
/*36041*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36043*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub8,
/*36046*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 8:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub8:i32)
/*36056*/     /*Scope*/ 20, /*->36077*/
/*36057*/       OPC_CheckInteger, 9, 
/*36059*/       OPC_MoveParent,
/*36060*/       OPC_CheckType, MVT::v16i32,
/*36062*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36064*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub9,
/*36067*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 9:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub9:i32)
/*36077*/     /*Scope*/ 20, /*->36098*/
/*36078*/       OPC_CheckInteger, 10, 
/*36080*/       OPC_MoveParent,
/*36081*/       OPC_CheckType, MVT::v16i32,
/*36083*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36085*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub10,
/*36088*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 10:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub10:i32)
/*36098*/     /*Scope*/ 20, /*->36119*/
/*36099*/       OPC_CheckInteger, 11, 
/*36101*/       OPC_MoveParent,
/*36102*/       OPC_CheckType, MVT::v16i32,
/*36104*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36106*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub11,
/*36109*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 11:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub11:i32)
/*36119*/     /*Scope*/ 20, /*->36140*/
/*36120*/       OPC_CheckInteger, 12, 
/*36122*/       OPC_MoveParent,
/*36123*/       OPC_CheckType, MVT::v16i32,
/*36125*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36127*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub12,
/*36130*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 12:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub12:i32)
/*36140*/     /*Scope*/ 20, /*->36161*/
/*36141*/       OPC_CheckInteger, 13, 
/*36143*/       OPC_MoveParent,
/*36144*/       OPC_CheckType, MVT::v16i32,
/*36146*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36148*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub13,
/*36151*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 13:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub13:i32)
/*36161*/     /*Scope*/ 20, /*->36182*/
/*36162*/       OPC_CheckInteger, 14, 
/*36164*/       OPC_MoveParent,
/*36165*/       OPC_CheckType, MVT::v16i32,
/*36167*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36169*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub14,
/*36172*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 14:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub14:i32)
/*36182*/     /*Scope*/ 20, /*->36203*/
/*36183*/       OPC_CheckInteger, 15, 
/*36185*/       OPC_MoveParent,
/*36186*/       OPC_CheckType, MVT::v16i32,
/*36188*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36190*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub15,
/*36193*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 15:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub15:i32)
/*36203*/     0, /*End of Scope*/
/*36204*/   /*Scope*/ 62|128,7/*958*/, /*->37164*/
/*36206*/     OPC_CheckChild1Type, MVT::f32,
/*36208*/     OPC_Scope, 74|128,6/*842*/, /*->37053*/ // 2 children in Scope
/*36211*/       OPC_MoveChild, 2,
/*36213*/       OPC_Scope, 116, /*->36331*/ // 17 children in Scope
/*36215*/         OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*36218*/         OPC_RecordChild0, // #2 = $idx
/*36219*/         OPC_RecordChild1, // #3 = $off
/*36220*/         OPC_MoveChild, 1,
/*36222*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36225*/         OPC_MoveParent,
/*36226*/         OPC_CheckType, MVT::i32,
/*36228*/         OPC_MoveParent,
/*36229*/         OPC_SwitchType /*4 cases */, 23,  MVT::v2f32,// ->36255
/*36232*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36234*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                        1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #4
/*36241*/           OPC_EmitConvertToTarget, 3,
/*36243*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_DST_V2), 0,
                        1/*#VTs*/, MVT::v2f32, 5/*#Ops*/, 4, 0, 2, 5, 1, 
                    // Src: (vector_insert:v2f32 v2f32:v2f32:$vec, f32:f32:$val, (add:i32 i32:i32:$idx, (imm:i32):$off)) - Complexity = 9
                    // Dst: (SI_INDIRECT_DST_V2:v2f32 (IMPLICIT_DEF:i1), ?:v2f32:$vec, ?:i32:$idx, (imm:i32):$off, ?:f32:$val)
                  /*SwitchType*/ 23,  MVT::v4f32,// ->36280
/*36257*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36259*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                        1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #4
/*36266*/           OPC_EmitConvertToTarget, 3,
/*36268*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_DST_V4), 0,
                        1/*#VTs*/, MVT::v4f32, 5/*#Ops*/, 4, 0, 2, 5, 1, 
                    // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$val, (add:i32 i32:i32:$idx, (imm:i32):$off)) - Complexity = 9
                    // Dst: (SI_INDIRECT_DST_V4:v4f32 (IMPLICIT_DEF:i1), ?:v4f32:$vec, ?:i32:$idx, (imm:i32):$off, ?:f32:$val)
                  /*SwitchType*/ 23,  MVT::v8f32,// ->36305
/*36282*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36284*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                        1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #4
/*36291*/           OPC_EmitConvertToTarget, 3,
/*36293*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_DST_V8), 0,
                        1/*#VTs*/, MVT::v8f32, 5/*#Ops*/, 4, 0, 2, 5, 1, 
                    // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$val, (add:i32 i32:i32:$idx, (imm:i32):$off)) - Complexity = 9
                    // Dst: (SI_INDIRECT_DST_V8:v8f32 (IMPLICIT_DEF:i1), ?:v8f32:$vec, ?:i32:$idx, (imm:i32):$off, ?:f32:$val)
                  /*SwitchType*/ 23,  MVT::v16f32,// ->36330
/*36307*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36309*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                        1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #4
/*36316*/           OPC_EmitConvertToTarget, 3,
/*36318*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_DST_V16), 0,
                        1/*#VTs*/, MVT::v16f32, 5/*#Ops*/, 4, 0, 2, 5, 1, 
                    // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$val, (add:i32 i32:i32:$idx, (imm:i32):$off)) - Complexity = 9
                    // Dst: (SI_INDIRECT_DST_V16:v16f32 (IMPLICIT_DEF:i1), ?:v16f32:$vec, ?:i32:$idx, (imm:i32):$off, ?:f32:$val)
                  0, // EndSwitchType
/*36331*/       /*Scope*/ 111, /*->36443*/
/*36332*/         OPC_CheckInteger, 0, 
/*36334*/         OPC_MoveParent,
/*36335*/         OPC_SwitchType /*4 cases */, 34,  MVT::v4f32,// ->36372
/*36338*/           OPC_Scope, 15, /*->36355*/ // 2 children in Scope
/*36340*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*36342*/             OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*36345*/             OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                          1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$elem, 0:iPTR) - Complexity = 8
                      // Dst: (INSERT_SUBREG:v4f32 ?:v4f32:$vec, ?:f32:$elem, sub0:i32)
/*36355*/           /*Scope*/ 15, /*->36371*/
/*36356*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36358*/             OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*36361*/             OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                          1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$elem, 0:iPTR) - Complexity = 8
                      // Dst: (INSERT_SUBREG:v4f32 ?:v4f32:$vec, ?:f32:$elem, sub0:i32)
/*36371*/           0, /*End of Scope*/
                  /*SwitchType*/ 34,  MVT::v2f32,// ->36408
/*36374*/           OPC_Scope, 15, /*->36391*/ // 2 children in Scope
/*36376*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*36378*/             OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*36381*/             OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                          1/*#VTs*/, MVT::v2f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (vector_insert:v2f32 v2f32:v2f32:$vec, f32:f32:$elem, 0:iPTR) - Complexity = 8
                      // Dst: (INSERT_SUBREG:v2f32 ?:v2f32:$vec, ?:f32:$elem, sub0:i32)
/*36391*/           /*Scope*/ 15, /*->36407*/
/*36392*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36394*/             OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*36397*/             OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                          1/*#VTs*/, MVT::v2f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (vector_insert:v2f32 v2f32:v2f32:$vec, f32:f32:$elem, 0:iPTR) - Complexity = 8
                      // Dst: (INSERT_SUBREG:v2f32 ?:v2f32:$vec, ?:f32:$elem, sub0:i32)
/*36407*/           0, /*End of Scope*/
                  /*SwitchType*/ 15,  MVT::v8f32,// ->36425
/*36410*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36412*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*36415*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$elem, 0:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v8f32 ?:v8f32:$vec, ?:f32:$elem, sub0:i32)
                  /*SwitchType*/ 15,  MVT::v16f32,// ->36442
/*36427*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36429*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*36432*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 0:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub0:i32)
                  0, // EndSwitchType
/*36443*/       /*Scope*/ 111, /*->36555*/
/*36444*/         OPC_CheckInteger, 1, 
/*36446*/         OPC_MoveParent,
/*36447*/         OPC_SwitchType /*4 cases */, 34,  MVT::v4f32,// ->36484
/*36450*/           OPC_Scope, 15, /*->36467*/ // 2 children in Scope
/*36452*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*36454*/             OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*36457*/             OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                          1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$elem, 1:iPTR) - Complexity = 8
                      // Dst: (INSERT_SUBREG:v4f32 ?:v4f32:$vec, ?:f32:$elem, sub1:i32)
/*36467*/           /*Scope*/ 15, /*->36483*/
/*36468*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36470*/             OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*36473*/             OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                          1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$elem, 1:iPTR) - Complexity = 8
                      // Dst: (INSERT_SUBREG:v4f32 ?:v4f32:$vec, ?:f32:$elem, sub1:i32)
/*36483*/           0, /*End of Scope*/
                  /*SwitchType*/ 34,  MVT::v2f32,// ->36520
/*36486*/           OPC_Scope, 15, /*->36503*/ // 2 children in Scope
/*36488*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*36490*/             OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*36493*/             OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                          1/*#VTs*/, MVT::v2f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (vector_insert:v2f32 v2f32:v2f32:$vec, f32:f32:$elem, 1:iPTR) - Complexity = 8
                      // Dst: (INSERT_SUBREG:v2f32 ?:v2f32:$vec, ?:f32:$elem, sub1:i32)
/*36503*/           /*Scope*/ 15, /*->36519*/
/*36504*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36506*/             OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*36509*/             OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                          1/*#VTs*/, MVT::v2f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (vector_insert:v2f32 v2f32:v2f32:$vec, f32:f32:$elem, 1:iPTR) - Complexity = 8
                      // Dst: (INSERT_SUBREG:v2f32 ?:v2f32:$vec, ?:f32:$elem, sub1:i32)
/*36519*/           0, /*End of Scope*/
                  /*SwitchType*/ 15,  MVT::v8f32,// ->36537
/*36522*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36524*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*36527*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$elem, 1:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v8f32 ?:v8f32:$vec, ?:f32:$elem, sub1:i32)
                  /*SwitchType*/ 15,  MVT::v16f32,// ->36554
/*36539*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36541*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*36544*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 1:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub1:i32)
                  0, // EndSwitchType
/*36555*/       /*Scope*/ 92, /*->36648*/
/*36556*/         OPC_CheckInteger, 2, 
/*36558*/         OPC_MoveParent,
/*36559*/         OPC_SwitchType /*4 cases */, 34,  MVT::v4f32,// ->36596
/*36562*/           OPC_Scope, 15, /*->36579*/ // 2 children in Scope
/*36564*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*36566*/             OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*36569*/             OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                          1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$elem, 2:iPTR) - Complexity = 8
                      // Dst: (INSERT_SUBREG:v4f32 ?:v4f32:$vec, ?:f32:$elem, sub2:i32)
/*36579*/           /*Scope*/ 15, /*->36595*/
/*36580*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36582*/             OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*36585*/             OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                          1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$elem, 2:iPTR) - Complexity = 8
                      // Dst: (INSERT_SUBREG:v4f32 ?:v4f32:$vec, ?:f32:$elem, sub2:i32)
/*36595*/           0, /*End of Scope*/
                  /*SwitchType*/ 15,  MVT::v2f32,// ->36613
/*36598*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36600*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*36603*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v2f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v2f32 v2f32:v2f32:$vec, f32:f32:$elem, 2:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v2f32 ?:v2f32:$vec, ?:f32:$elem, sub2:i32)
                  /*SwitchType*/ 15,  MVT::v8f32,// ->36630
/*36615*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36617*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*36620*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$elem, 2:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v8f32 ?:v8f32:$vec, ?:f32:$elem, sub2:i32)
                  /*SwitchType*/ 15,  MVT::v16f32,// ->36647
/*36632*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36634*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*36637*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 2:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub2:i32)
                  0, // EndSwitchType
/*36648*/       /*Scope*/ 75, /*->36724*/
/*36649*/         OPC_CheckInteger, 3, 
/*36651*/         OPC_MoveParent,
/*36652*/         OPC_SwitchType /*3 cases */, 34,  MVT::v4f32,// ->36689
/*36655*/           OPC_Scope, 15, /*->36672*/ // 2 children in Scope
/*36657*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*36659*/             OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*36662*/             OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                          1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$elem, 3:iPTR) - Complexity = 8
                      // Dst: (INSERT_SUBREG:v4f32 ?:v4f32:$vec, ?:f32:$elem, sub3:i32)
/*36672*/           /*Scope*/ 15, /*->36688*/
/*36673*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36675*/             OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*36678*/             OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                          1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$elem, 3:iPTR) - Complexity = 8
                      // Dst: (INSERT_SUBREG:v4f32 ?:v4f32:$vec, ?:f32:$elem, sub3:i32)
/*36688*/           0, /*End of Scope*/
                  /*SwitchType*/ 15,  MVT::v8f32,// ->36706
/*36691*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36693*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*36696*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$elem, 3:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v8f32 ?:v8f32:$vec, ?:f32:$elem, sub3:i32)
                  /*SwitchType*/ 15,  MVT::v16f32,// ->36723
/*36708*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36710*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*36713*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 3:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub3:i32)
                  0, // EndSwitchType
/*36724*/       /*Scope*/ 39, /*->36764*/
/*36725*/         OPC_CheckInteger, 4, 
/*36727*/         OPC_MoveParent,
/*36728*/         OPC_SwitchType /*2 cases */, 15,  MVT::v8f32,// ->36746
/*36731*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36733*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*36736*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$elem, 4:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v8f32 ?:v8f32:$vec, ?:f32:$elem, sub4:i32)
                  /*SwitchType*/ 15,  MVT::v16f32,// ->36763
/*36748*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36750*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*36753*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 4:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub4:i32)
                  0, // EndSwitchType
/*36764*/       /*Scope*/ 39, /*->36804*/
/*36765*/         OPC_CheckInteger, 5, 
/*36767*/         OPC_MoveParent,
/*36768*/         OPC_SwitchType /*2 cases */, 15,  MVT::v8f32,// ->36786
/*36771*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36773*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*36776*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$elem, 5:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v8f32 ?:v8f32:$vec, ?:f32:$elem, sub5:i32)
                  /*SwitchType*/ 15,  MVT::v16f32,// ->36803
/*36788*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36790*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*36793*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 5:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub5:i32)
                  0, // EndSwitchType
/*36804*/       /*Scope*/ 39, /*->36844*/
/*36805*/         OPC_CheckInteger, 6, 
/*36807*/         OPC_MoveParent,
/*36808*/         OPC_SwitchType /*2 cases */, 15,  MVT::v8f32,// ->36826
/*36811*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36813*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*36816*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$elem, 6:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v8f32 ?:v8f32:$vec, ?:f32:$elem, sub6:i32)
                  /*SwitchType*/ 15,  MVT::v16f32,// ->36843
/*36828*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36830*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*36833*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 6:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub6:i32)
                  0, // EndSwitchType
/*36844*/       /*Scope*/ 39, /*->36884*/
/*36845*/         OPC_CheckInteger, 7, 
/*36847*/         OPC_MoveParent,
/*36848*/         OPC_SwitchType /*2 cases */, 15,  MVT::v8f32,// ->36866
/*36851*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36853*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*36856*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$elem, 7:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v8f32 ?:v8f32:$vec, ?:f32:$elem, sub7:i32)
                  /*SwitchType*/ 15,  MVT::v16f32,// ->36883
/*36868*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36870*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*36873*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 7:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub7:i32)
                  0, // EndSwitchType
/*36884*/       /*Scope*/ 20, /*->36905*/
/*36885*/         OPC_CheckInteger, 8, 
/*36887*/         OPC_MoveParent,
/*36888*/         OPC_CheckType, MVT::v16f32,
/*36890*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36892*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub8,
/*36895*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 8:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub8:i32)
/*36905*/       /*Scope*/ 20, /*->36926*/
/*36906*/         OPC_CheckInteger, 9, 
/*36908*/         OPC_MoveParent,
/*36909*/         OPC_CheckType, MVT::v16f32,
/*36911*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36913*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub9,
/*36916*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 9:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub9:i32)
/*36926*/       /*Scope*/ 20, /*->36947*/
/*36927*/         OPC_CheckInteger, 10, 
/*36929*/         OPC_MoveParent,
/*36930*/         OPC_CheckType, MVT::v16f32,
/*36932*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36934*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub10,
/*36937*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 10:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub10:i32)
/*36947*/       /*Scope*/ 20, /*->36968*/
/*36948*/         OPC_CheckInteger, 11, 
/*36950*/         OPC_MoveParent,
/*36951*/         OPC_CheckType, MVT::v16f32,
/*36953*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36955*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub11,
/*36958*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 11:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub11:i32)
/*36968*/       /*Scope*/ 20, /*->36989*/
/*36969*/         OPC_CheckInteger, 12, 
/*36971*/         OPC_MoveParent,
/*36972*/         OPC_CheckType, MVT::v16f32,
/*36974*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36976*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub12,
/*36979*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 12:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub12:i32)
/*36989*/       /*Scope*/ 20, /*->37010*/
/*36990*/         OPC_CheckInteger, 13, 
/*36992*/         OPC_MoveParent,
/*36993*/         OPC_CheckType, MVT::v16f32,
/*36995*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*36997*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub13,
/*37000*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 13:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub13:i32)
/*37010*/       /*Scope*/ 20, /*->37031*/
/*37011*/         OPC_CheckInteger, 14, 
/*37013*/         OPC_MoveParent,
/*37014*/         OPC_CheckType, MVT::v16f32,
/*37016*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37018*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub14,
/*37021*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 14:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub14:i32)
/*37031*/       /*Scope*/ 20, /*->37052*/
/*37032*/         OPC_CheckInteger, 15, 
/*37034*/         OPC_MoveParent,
/*37035*/         OPC_CheckType, MVT::v16f32,
/*37037*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37039*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub15,
/*37042*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 15:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub15:i32)
/*37052*/       0, /*End of Scope*/
/*37053*/     /*Scope*/ 109, /*->37163*/
/*37054*/       OPC_RecordChild2, // #2 = $idx
/*37055*/       OPC_CheckChild2Type, MVT::i32,
/*37057*/       OPC_SwitchType /*4 cases */, 24,  MVT::v2f32,// ->37084
/*37060*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37062*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #3
/*37069*/         OPC_EmitInteger, MVT::i32, 0, 
/*37072*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_DST_V2), 0,
                      1/*#VTs*/, MVT::v2f32, 5/*#Ops*/, 3, 0, 2, 4, 1, 
                  // Src: (vector_insert:v2f32 v2f32:v2f32:$vec, f32:f32:$val, i32:i32:$idx) - Complexity = 3
                  // Dst: (SI_INDIRECT_DST_V2:v2f32 (IMPLICIT_DEF:i1), ?:v2f32:$vec, ?:i32:$idx, 0:i32, ?:f32:$val)
                /*SwitchType*/ 24,  MVT::v4f32,// ->37110
/*37086*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37088*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #3
/*37095*/         OPC_EmitInteger, MVT::i32, 0, 
/*37098*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_DST_V4), 0,
                      1/*#VTs*/, MVT::v4f32, 5/*#Ops*/, 3, 0, 2, 4, 1, 
                  // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$val, i32:i32:$idx) - Complexity = 3
                  // Dst: (SI_INDIRECT_DST_V4:v4f32 (IMPLICIT_DEF:i1), ?:v4f32:$vec, ?:i32:$idx, 0:i32, ?:f32:$val)
                /*SwitchType*/ 24,  MVT::v8f32,// ->37136
/*37112*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37114*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #3
/*37121*/         OPC_EmitInteger, MVT::i32, 0, 
/*37124*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_DST_V8), 0,
                      1/*#VTs*/, MVT::v8f32, 5/*#Ops*/, 3, 0, 2, 4, 1, 
                  // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$val, i32:i32:$idx) - Complexity = 3
                  // Dst: (SI_INDIRECT_DST_V8:v8f32 (IMPLICIT_DEF:i1), ?:v8f32:$vec, ?:i32:$idx, 0:i32, ?:f32:$val)
                /*SwitchType*/ 24,  MVT::v16f32,// ->37162
/*37138*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37140*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #3
/*37147*/         OPC_EmitInteger, MVT::i32, 0, 
/*37150*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_DST_V16), 0,
                      1/*#VTs*/, MVT::v16f32, 5/*#Ops*/, 3, 0, 2, 4, 1, 
                  // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$val, i32:i32:$idx) - Complexity = 3
                  // Dst: (SI_INDIRECT_DST_V16:v16f32 (IMPLICIT_DEF:i1), ?:v16f32:$vec, ?:i32:$idx, 0:i32, ?:f32:$val)
                0, // EndSwitchType
/*37163*/     0, /*End of Scope*/
/*37164*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 87|128,9/*1239*/,  TARGET_VAL(ISD::BUILD_VECTOR),// ->38408
/*37169*/   OPC_RecordChild0, // #0 = $src
/*37170*/   OPC_Scope, 117|128,4/*629*/, /*->37802*/ // 2 children in Scope
/*37173*/     OPC_CheckChild0Type, MVT::i32,
/*37175*/     OPC_Scope, 16, /*->37193*/ // 5 children in Scope
/*37177*/       OPC_CheckType, MVT::v1i32,
/*37179*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37181*/       OPC_EmitInteger, MVT::i32, AMDGPU::VReg_32RegClassID,
/*37184*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v1i32, 2/*#Ops*/, 0, 1, 
                // Src: (build_vector:v1i32 i32:i32:$src) - Complexity = 3
                // Dst: (COPY_TO_REGCLASS:v1i32 ?:i32:$src, VReg_32:i32)
/*37193*/     /*Scope*/ 40, /*->37234*/
/*37194*/       OPC_CheckType, MVT::v2i32,
/*37196*/       OPC_RecordChild1, // #1 = $sub1
/*37197*/       OPC_CheckChild1Type, MVT::i32,
/*37199*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37201*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::v2i32, 0/*#Ops*/,  // Results = #2
/*37208*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*37211*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 2, 0, 3,  // Results = #4
/*37221*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*37224*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 4, 1, 5, 
                // Src: (build_vector:v2i32 i32:i32:$sub0, i32:i32:$sub1) - Complexity = 3
                // Dst: (INSERT_SUBREG:v2i32 (INSERT_SUBREG:v2i32 (IMPLICIT_DEF:v2i32), ?:i32:$sub0, sub0:i32), ?:i32:$sub1, sub1:i32)
/*37234*/     /*Scope*/ 9|128,1/*137*/, /*->37373*/
/*37236*/       OPC_CheckType, MVT::v4i32,
/*37238*/       OPC_RecordChild1, // #1 = $y
/*37239*/       OPC_CheckChild1Type, MVT::i32,
/*37241*/       OPC_RecordChild2, // #2 = $z
/*37242*/       OPC_CheckChild2Type, MVT::i32,
/*37244*/       OPC_RecordChild3, // #3 = $w
/*37245*/       OPC_CheckChild3Type, MVT::i32,
/*37247*/       OPC_Scope, 61, /*->37310*/ // 2 children in Scope
/*37249*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*37251*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::v4i32, 0/*#Ops*/,  // Results = #4
/*37258*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*37261*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 4, 0, 5,  // Results = #6
/*37271*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*37274*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 6, 1, 7,  // Results = #8
/*37284*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*37287*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 8, 2, 9,  // Results = #10
/*37297*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*37300*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 10, 3, 11, 
                  // Src: (build_vector:v4i32 i32:i32:$x, i32:i32:$y, i32:i32:$z, i32:i32:$w) - Complexity = 3
                  // Dst: (INSERT_SUBREG:v4i32 (INSERT_SUBREG:v4i32 (INSERT_SUBREG:v4i32 (INSERT_SUBREG:v4i32 (IMPLICIT_DEF:v4i32), ?:i32:$x, sub0:i32), ?:i32:$y, sub1:i32), ?:i32:$z, sub2:i32), ?:i32:$w, sub3:i32)
/*37310*/       /*Scope*/ 61, /*->37372*/
/*37311*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37313*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::v4i32, 0/*#Ops*/,  // Results = #4
/*37320*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*37323*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 4, 0, 5,  // Results = #6
/*37333*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*37336*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 6, 1, 7,  // Results = #8
/*37346*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*37349*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 8, 2, 9,  // Results = #10
/*37359*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*37362*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 10, 3, 11, 
                  // Src: (build_vector:v4i32 i32:i32:$x, i32:i32:$y, i32:i32:$z, i32:i32:$w) - Complexity = 3
                  // Dst: (INSERT_SUBREG:v4i32 (INSERT_SUBREG:v4i32 (INSERT_SUBREG:v4i32 (INSERT_SUBREG:v4i32 (IMPLICIT_DEF:v4i32), ?:i32:$x, sub0:i32), ?:i32:$y, sub1:i32), ?:i32:$z, sub2:i32), ?:i32:$w, sub3:i32)
/*37372*/       0, /*End of Scope*/
/*37373*/     /*Scope*/ 8|128,1/*136*/, /*->37511*/
/*37375*/       OPC_CheckType, MVT::v8i32,
/*37377*/       OPC_RecordChild1, // #1 = $sub1
/*37378*/       OPC_CheckChild1Type, MVT::i32,
/*37380*/       OPC_RecordChild2, // #2 = $sub2
/*37381*/       OPC_CheckChild2Type, MVT::i32,
/*37383*/       OPC_RecordChild3, // #3 = $sub3
/*37384*/       OPC_CheckChild3Type, MVT::i32,
/*37386*/       OPC_RecordChild4, // #4 = $sub4
/*37387*/       OPC_CheckChild4Type, MVT::i32,
/*37389*/       OPC_RecordChild5, // #5 = $sub5
/*37390*/       OPC_CheckChild5Type, MVT::i32,
/*37392*/       OPC_RecordChild6, // #6 = $sub6
/*37393*/       OPC_CheckChild6Type, MVT::i32,
/*37395*/       OPC_RecordChild7, // #7 = $sub7
/*37396*/       OPC_CheckChild7Type, MVT::i32,
/*37398*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37400*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::v8i32, 0/*#Ops*/,  // Results = #8
/*37407*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*37410*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 8, 0, 9,  // Results = #10
/*37420*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*37423*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 10, 1, 11,  // Results = #12
/*37433*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*37436*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 12, 2, 13,  // Results = #14
/*37446*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*37449*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 14, 3, 15,  // Results = #16
/*37459*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*37462*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 16, 4, 17,  // Results = #18
/*37472*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*37475*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 18, 5, 19,  // Results = #20
/*37485*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*37488*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 20, 6, 21,  // Results = #22
/*37498*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*37501*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 22, 7, 23, 
                // Src: (build_vector:v8i32 i32:i32:$sub0, i32:i32:$sub1, i32:i32:$sub2, i32:i32:$sub3, i32:i32:$sub4, i32:i32:$sub5, i32:i32:$sub6, i32:i32:$sub7) - Complexity = 3
                // Dst: (INSERT_SUBREG:v8i32 (INSERT_SUBREG:v8i32 (INSERT_SUBREG:v8i32 (INSERT_SUBREG:v8i32 (INSERT_SUBREG:v8i32 (INSERT_SUBREG:v8i32 (INSERT_SUBREG:v8i32 (INSERT_SUBREG:v8i32 (IMPLICIT_DEF:v8i32), ?:i32:$sub0, sub0:i32), ?:i32:$sub1, sub1:i32), ?:i32:$sub2, sub2:i32), ?:i32:$sub3, sub3:i32), ?:i32:$sub4, sub4:i32), ?:i32:$sub5, sub5:i32), ?:i32:$sub6, sub6:i32), ?:i32:$sub7, sub7:i32)
/*37511*/     /*Scope*/ 32|128,2/*288*/, /*->37801*/
/*37513*/       OPC_RecordChild1, // #1 = $sub1
/*37514*/       OPC_CheckChild1Type, MVT::i32,
/*37516*/       OPC_RecordChild2, // #2 = $sub2
/*37517*/       OPC_CheckChild2Type, MVT::i32,
/*37519*/       OPC_RecordChild3, // #3 = $sub3
/*37520*/       OPC_CheckChild3Type, MVT::i32,
/*37522*/       OPC_RecordChild4, // #4 = $sub4
/*37523*/       OPC_CheckChild4Type, MVT::i32,
/*37525*/       OPC_RecordChild5, // #5 = $sub5
/*37526*/       OPC_CheckChild5Type, MVT::i32,
/*37528*/       OPC_RecordChild6, // #6 = $sub6
/*37529*/       OPC_CheckChild6Type, MVT::i32,
/*37531*/       OPC_RecordChild7, // #7 = $sub7
/*37532*/       OPC_CheckChild7Type, MVT::i32,
/*37534*/       OPC_MoveChild, 8,
/*37536*/       OPC_RecordNode, // #8 = $sub8
/*37537*/       OPC_CheckType, MVT::i32,
/*37539*/       OPC_MoveParent,
/*37540*/       OPC_MoveChild, 9,
/*37542*/       OPC_RecordNode, // #9 = $sub9
/*37543*/       OPC_CheckType, MVT::i32,
/*37545*/       OPC_MoveParent,
/*37546*/       OPC_MoveChild, 10,
/*37548*/       OPC_RecordNode, // #10 = $sub10
/*37549*/       OPC_CheckType, MVT::i32,
/*37551*/       OPC_MoveParent,
/*37552*/       OPC_MoveChild, 11,
/*37554*/       OPC_RecordNode, // #11 = $sub11
/*37555*/       OPC_CheckType, MVT::i32,
/*37557*/       OPC_MoveParent,
/*37558*/       OPC_MoveChild, 12,
/*37560*/       OPC_RecordNode, // #12 = $sub12
/*37561*/       OPC_CheckType, MVT::i32,
/*37563*/       OPC_MoveParent,
/*37564*/       OPC_MoveChild, 13,
/*37566*/       OPC_RecordNode, // #13 = $sub13
/*37567*/       OPC_CheckType, MVT::i32,
/*37569*/       OPC_MoveParent,
/*37570*/       OPC_MoveChild, 14,
/*37572*/       OPC_RecordNode, // #14 = $sub14
/*37573*/       OPC_CheckType, MVT::i32,
/*37575*/       OPC_MoveParent,
/*37576*/       OPC_MoveChild, 15,
/*37578*/       OPC_RecordNode, // #15 = $sub15
/*37579*/       OPC_CheckType, MVT::i32,
/*37581*/       OPC_MoveParent,
/*37582*/       OPC_CheckType, MVT::v16i32,
/*37584*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37586*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::v16i32, 0/*#Ops*/,  // Results = #16
/*37593*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*37596*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 16, 0, 17,  // Results = #18
/*37606*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*37609*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 18, 1, 19,  // Results = #20
/*37619*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*37622*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 20, 2, 21,  // Results = #22
/*37632*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*37635*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 22, 3, 23,  // Results = #24
/*37645*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*37648*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 24, 4, 25,  // Results = #26
/*37658*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*37661*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 26, 5, 27,  // Results = #28
/*37671*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*37674*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 28, 6, 29,  // Results = #30
/*37684*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*37687*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 30, 7, 31,  // Results = #32
/*37697*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub8,
/*37700*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 32, 8, 33,  // Results = #34
/*37710*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub9,
/*37713*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 34, 9, 35,  // Results = #36
/*37723*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub10,
/*37726*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 36, 10, 37,  // Results = #38
/*37736*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub11,
/*37739*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 38, 11, 39,  // Results = #40
/*37749*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub12,
/*37752*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 40, 12, 41,  // Results = #42
/*37762*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub13,
/*37765*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 42, 13, 43,  // Results = #44
/*37775*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub14,
/*37778*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 44, 14, 45,  // Results = #46
/*37788*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub15,
/*37791*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 46, 15, 47, 
                // Src: (build_vector:v16i32 i32:i32:$sub0, i32:i32:$sub1, i32:i32:$sub2, i32:i32:$sub3, i32:i32:$sub4, i32:i32:$sub5, i32:i32:$sub6, i32:i32:$sub7, i32:i32:$sub8, i32:i32:$sub9, i32:i32:$sub10, i32:i32:$sub11, i32:i32:$sub12, i32:i32:$sub13, i32:i32:$sub14, i32:i32:$sub15) - Complexity = 3
                // Dst: (INSERT_SUBREG:v16i32 (INSERT_SUBREG:v16i32 (INSERT_SUBREG:v16i32 (INSERT_SUBREG:v16i32 (INSERT_SUBREG:v16i32 (INSERT_SUBREG:v16i32 (INSERT_SUBREG:v16i32 (INSERT_SUBREG:v16i32 (INSERT_SUBREG:v16i32 (INSERT_SUBREG:v16i32 (INSERT_SUBREG:v16i32 (INSERT_SUBREG:v16i32 (INSERT_SUBREG:v16i32 (INSERT_SUBREG:v16i32 (INSERT_SUBREG:v16i32 (INSERT_SUBREG:v16i32 (IMPLICIT_DEF:v16i32), ?:i32:$sub0, sub0:i32), ?:i32:$sub1, sub1:i32), ?:i32:$sub2, sub2:i32), ?:i32:$sub3, sub3:i32), ?:i32:$sub4, sub4:i32), ?:i32:$sub5, sub5:i32), ?:i32:$sub6, sub6:i32), ?:i32:$sub7, sub7:i32), ?:i32:$sub8, sub8:i32), ?:i32:$sub9, sub9:i32), ?:i32:$sub10, sub10:i32), ?:i32:$sub11, sub11:i32), ?:i32:$sub12, sub12:i32), ?:i32:$sub13, sub13:i32), ?:i32:$sub14, sub14:i32), ?:i32:$sub15, sub15:i32)
/*37801*/     0, /*End of Scope*/
/*37802*/   /*Scope*/ 91|128,4/*603*/, /*->38407*/
/*37804*/     OPC_CheckChild0Type, MVT::f32,
/*37806*/     OPC_RecordChild1, // #1 = $sub1
/*37807*/     OPC_CheckChild1Type, MVT::f32,
/*37809*/     OPC_Scope, 37, /*->37848*/ // 4 children in Scope
/*37811*/       OPC_CheckType, MVT::v2f32,
/*37813*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37815*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::v2f32, 0/*#Ops*/,  // Results = #2
/*37822*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*37825*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v2f32, 3/*#Ops*/, 2, 0, 3,  // Results = #4
/*37835*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*37838*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v2f32, 3/*#Ops*/, 4, 1, 5, 
                // Src: (build_vector:v2f32 f32:f32:$sub0, f32:f32:$sub1) - Complexity = 3
                // Dst: (INSERT_SUBREG:v2f32 (INSERT_SUBREG:v2f32 (IMPLICIT_DEF:v2f32), ?:f32:$sub0, sub0:i32), ?:f32:$sub1, sub1:i32)
/*37848*/     /*Scope*/ 6|128,1/*134*/, /*->37984*/
/*37850*/       OPC_CheckType, MVT::v4f32,
/*37852*/       OPC_RecordChild2, // #2 = $z
/*37853*/       OPC_CheckChild2Type, MVT::f32,
/*37855*/       OPC_RecordChild3, // #3 = $w
/*37856*/       OPC_CheckChild3Type, MVT::f32,
/*37858*/       OPC_Scope, 61, /*->37921*/ // 2 children in Scope
/*37860*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*37862*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #4
/*37869*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*37872*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 4, 0, 5,  // Results = #6
/*37882*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*37885*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 6, 1, 7,  // Results = #8
/*37895*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*37898*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 8, 2, 9,  // Results = #10
/*37908*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*37911*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 10, 3, 11, 
                  // Src: (build_vector:v4f32 f32:f32:$x, f32:f32:$y, f32:f32:$z, f32:f32:$w) - Complexity = 3
                  // Dst: (INSERT_SUBREG:v4f32 (INSERT_SUBREG:v4f32 (INSERT_SUBREG:v4f32 (INSERT_SUBREG:v4f32 (IMPLICIT_DEF:v4f32), ?:f32:$x, sub0:i32), ?:f32:$y, sub1:i32), ?:f32:$z, sub2:i32), ?:f32:$w, sub3:i32)
/*37921*/       /*Scope*/ 61, /*->37983*/
/*37922*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37924*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #4
/*37931*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*37934*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 4, 0, 5,  // Results = #6
/*37944*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*37947*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 6, 1, 7,  // Results = #8
/*37957*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*37960*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 8, 2, 9,  // Results = #10
/*37970*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*37973*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 10, 3, 11, 
                  // Src: (build_vector:v4f32 f32:f32:$x, f32:f32:$y, f32:f32:$z, f32:f32:$w) - Complexity = 3
                  // Dst: (INSERT_SUBREG:v4f32 (INSERT_SUBREG:v4f32 (INSERT_SUBREG:v4f32 (INSERT_SUBREG:v4f32 (IMPLICIT_DEF:v4f32), ?:f32:$x, sub0:i32), ?:f32:$y, sub1:i32), ?:f32:$z, sub2:i32), ?:f32:$w, sub3:i32)
/*37983*/       0, /*End of Scope*/
/*37984*/     /*Scope*/ 5|128,1/*133*/, /*->38119*/
/*37986*/       OPC_CheckType, MVT::v8f32,
/*37988*/       OPC_RecordChild2, // #2 = $sub2
/*37989*/       OPC_CheckChild2Type, MVT::f32,
/*37991*/       OPC_RecordChild3, // #3 = $sub3
/*37992*/       OPC_CheckChild3Type, MVT::f32,
/*37994*/       OPC_RecordChild4, // #4 = $sub4
/*37995*/       OPC_CheckChild4Type, MVT::f32,
/*37997*/       OPC_RecordChild5, // #5 = $sub5
/*37998*/       OPC_CheckChild5Type, MVT::f32,
/*38000*/       OPC_RecordChild6, // #6 = $sub6
/*38001*/       OPC_CheckChild6Type, MVT::f32,
/*38003*/       OPC_RecordChild7, // #7 = $sub7
/*38004*/       OPC_CheckChild7Type, MVT::f32,
/*38006*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38008*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::v8f32, 0/*#Ops*/,  // Results = #8
/*38015*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*38018*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 8, 0, 9,  // Results = #10
/*38028*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*38031*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 10, 1, 11,  // Results = #12
/*38041*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*38044*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 12, 2, 13,  // Results = #14
/*38054*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*38057*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 14, 3, 15,  // Results = #16
/*38067*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*38070*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 16, 4, 17,  // Results = #18
/*38080*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*38083*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 18, 5, 19,  // Results = #20
/*38093*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*38096*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 20, 6, 21,  // Results = #22
/*38106*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*38109*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 22, 7, 23, 
                // Src: (build_vector:v8f32 f32:f32:$sub0, f32:f32:$sub1, f32:f32:$sub2, f32:f32:$sub3, f32:f32:$sub4, f32:f32:$sub5, f32:f32:$sub6, f32:f32:$sub7) - Complexity = 3
                // Dst: (INSERT_SUBREG:v8f32 (INSERT_SUBREG:v8f32 (INSERT_SUBREG:v8f32 (INSERT_SUBREG:v8f32 (INSERT_SUBREG:v8f32 (INSERT_SUBREG:v8f32 (INSERT_SUBREG:v8f32 (INSERT_SUBREG:v8f32 (IMPLICIT_DEF:v8f32), ?:f32:$sub0, sub0:i32), ?:f32:$sub1, sub1:i32), ?:f32:$sub2, sub2:i32), ?:f32:$sub3, sub3:i32), ?:f32:$sub4, sub4:i32), ?:f32:$sub5, sub5:i32), ?:f32:$sub6, sub6:i32), ?:f32:$sub7, sub7:i32)
/*38119*/     /*Scope*/ 29|128,2/*285*/, /*->38406*/
/*38121*/       OPC_RecordChild2, // #2 = $sub2
/*38122*/       OPC_CheckChild2Type, MVT::f32,
/*38124*/       OPC_RecordChild3, // #3 = $sub3
/*38125*/       OPC_CheckChild3Type, MVT::f32,
/*38127*/       OPC_RecordChild4, // #4 = $sub4
/*38128*/       OPC_CheckChild4Type, MVT::f32,
/*38130*/       OPC_RecordChild5, // #5 = $sub5
/*38131*/       OPC_CheckChild5Type, MVT::f32,
/*38133*/       OPC_RecordChild6, // #6 = $sub6
/*38134*/       OPC_CheckChild6Type, MVT::f32,
/*38136*/       OPC_RecordChild7, // #7 = $sub7
/*38137*/       OPC_CheckChild7Type, MVT::f32,
/*38139*/       OPC_MoveChild, 8,
/*38141*/       OPC_RecordNode, // #8 = $sub8
/*38142*/       OPC_CheckType, MVT::f32,
/*38144*/       OPC_MoveParent,
/*38145*/       OPC_MoveChild, 9,
/*38147*/       OPC_RecordNode, // #9 = $sub9
/*38148*/       OPC_CheckType, MVT::f32,
/*38150*/       OPC_MoveParent,
/*38151*/       OPC_MoveChild, 10,
/*38153*/       OPC_RecordNode, // #10 = $sub10
/*38154*/       OPC_CheckType, MVT::f32,
/*38156*/       OPC_MoveParent,
/*38157*/       OPC_MoveChild, 11,
/*38159*/       OPC_RecordNode, // #11 = $sub11
/*38160*/       OPC_CheckType, MVT::f32,
/*38162*/       OPC_MoveParent,
/*38163*/       OPC_MoveChild, 12,
/*38165*/       OPC_RecordNode, // #12 = $sub12
/*38166*/       OPC_CheckType, MVT::f32,
/*38168*/       OPC_MoveParent,
/*38169*/       OPC_MoveChild, 13,
/*38171*/       OPC_RecordNode, // #13 = $sub13
/*38172*/       OPC_CheckType, MVT::f32,
/*38174*/       OPC_MoveParent,
/*38175*/       OPC_MoveChild, 14,
/*38177*/       OPC_RecordNode, // #14 = $sub14
/*38178*/       OPC_CheckType, MVT::f32,
/*38180*/       OPC_MoveParent,
/*38181*/       OPC_MoveChild, 15,
/*38183*/       OPC_RecordNode, // #15 = $sub15
/*38184*/       OPC_CheckType, MVT::f32,
/*38186*/       OPC_MoveParent,
/*38187*/       OPC_CheckType, MVT::v16f32,
/*38189*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38191*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::v16f32, 0/*#Ops*/,  // Results = #16
/*38198*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*38201*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 16, 0, 17,  // Results = #18
/*38211*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*38214*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 18, 1, 19,  // Results = #20
/*38224*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*38227*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 20, 2, 21,  // Results = #22
/*38237*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*38240*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 22, 3, 23,  // Results = #24
/*38250*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*38253*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 24, 4, 25,  // Results = #26
/*38263*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*38266*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 26, 5, 27,  // Results = #28
/*38276*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*38279*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 28, 6, 29,  // Results = #30
/*38289*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*38292*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 30, 7, 31,  // Results = #32
/*38302*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub8,
/*38305*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 32, 8, 33,  // Results = #34
/*38315*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub9,
/*38318*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 34, 9, 35,  // Results = #36
/*38328*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub10,
/*38331*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 36, 10, 37,  // Results = #38
/*38341*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub11,
/*38344*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 38, 11, 39,  // Results = #40
/*38354*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub12,
/*38357*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 40, 12, 41,  // Results = #42
/*38367*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub13,
/*38370*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 42, 13, 43,  // Results = #44
/*38380*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub14,
/*38383*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 44, 14, 45,  // Results = #46
/*38393*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub15,
/*38396*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 46, 15, 47, 
                // Src: (build_vector:v16f32 f32:f32:$sub0, f32:f32:$sub1, f32:f32:$sub2, f32:f32:$sub3, f32:f32:$sub4, f32:f32:$sub5, f32:f32:$sub6, f32:f32:$sub7, f32:f32:$sub8, f32:f32:$sub9, f32:f32:$sub10, f32:f32:$sub11, f32:f32:$sub12, f32:f32:$sub13, f32:f32:$sub14, f32:f32:$sub15) - Complexity = 3
                // Dst: (INSERT_SUBREG:v16f32 (INSERT_SUBREG:v16f32 (INSERT_SUBREG:v16f32 (INSERT_SUBREG:v16f32 (INSERT_SUBREG:v16f32 (INSERT_SUBREG:v16f32 (INSERT_SUBREG:v16f32 (INSERT_SUBREG:v16f32 (INSERT_SUBREG:v16f32 (INSERT_SUBREG:v16f32 (INSERT_SUBREG:v16f32 (INSERT_SUBREG:v16f32 (INSERT_SUBREG:v16f32 (INSERT_SUBREG:v16f32 (INSERT_SUBREG:v16f32 (INSERT_SUBREG:v16f32 (IMPLICIT_DEF:v16f32), ?:f32:$sub0, sub0:i32), ?:f32:$sub1, sub1:i32), ?:f32:$sub2, sub2:i32), ?:f32:$sub3, sub3:i32), ?:f32:$sub4, sub4:i32), ?:f32:$sub5, sub5:i32), ?:f32:$sub6, sub6:i32), ?:f32:$sub7, sub7:i32), ?:f32:$sub8, sub8:i32), ?:f32:$sub9, sub9:i32), ?:f32:$sub10, sub10:i32), ?:f32:$sub11, sub11:i32), ?:f32:$sub12, sub12:i32), ?:f32:$sub13, sub13:i32), ?:f32:$sub14, sub14:i32), ?:f32:$sub15, sub15:i32)
/*38406*/     0, /*End of Scope*/
/*38407*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 70|128,17/*2246*/,  TARGET_VAL(AMDGPUISD::TEXTURE_FETCH),// ->40658
/*38412*/   OPC_MoveChild, 0,
/*38414*/   OPC_CheckType, MVT::i32,
/*38416*/   OPC_Scope, 94|128,1/*222*/, /*->38641*/ // 10 children in Scope
/*38419*/     OPC_CheckInteger, 0, 
/*38421*/     OPC_MoveParent,
/*38422*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*38423*/     OPC_CheckChild1Type, MVT::v4f32,
/*38425*/     OPC_RecordChild2, // #1 = $srcx
/*38426*/     OPC_MoveChild, 2,
/*38428*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38431*/     OPC_CheckType, MVT::i32,
/*38433*/     OPC_MoveParent,
/*38434*/     OPC_RecordChild3, // #2 = $srcy
/*38435*/     OPC_MoveChild, 3,
/*38437*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38440*/     OPC_CheckType, MVT::i32,
/*38442*/     OPC_MoveParent,
/*38443*/     OPC_RecordChild4, // #3 = $srcz
/*38444*/     OPC_MoveChild, 4,
/*38446*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38449*/     OPC_CheckType, MVT::i32,
/*38451*/     OPC_MoveParent,
/*38452*/     OPC_RecordChild5, // #4 = $srcw
/*38453*/     OPC_MoveChild, 5,
/*38455*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38458*/     OPC_CheckType, MVT::i32,
/*38460*/     OPC_MoveParent,
/*38461*/     OPC_RecordChild6, // #5 = $offsetx
/*38462*/     OPC_MoveChild, 6,
/*38464*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38467*/     OPC_CheckType, MVT::i32,
/*38469*/     OPC_MoveParent,
/*38470*/     OPC_RecordChild7, // #6 = $offsety
/*38471*/     OPC_MoveChild, 7,
/*38473*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38476*/     OPC_CheckType, MVT::i32,
/*38478*/     OPC_MoveParent,
/*38479*/     OPC_MoveChild, 8,
/*38481*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38484*/     OPC_RecordNode, // #7 = $offsetz
/*38485*/     OPC_CheckType, MVT::i32,
/*38487*/     OPC_MoveParent,
/*38488*/     OPC_MoveChild, 9,
/*38490*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38493*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*38494*/     OPC_CheckType, MVT::i32,
/*38496*/     OPC_MoveParent,
/*38497*/     OPC_MoveChild, 10,
/*38499*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38502*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*38503*/     OPC_CheckType, MVT::i32,
/*38505*/     OPC_MoveParent,
/*38506*/     OPC_MoveChild, 11,
/*38508*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38511*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*38512*/     OPC_CheckType, MVT::i32,
/*38514*/     OPC_MoveParent,
/*38515*/     OPC_MoveChild, 12,
/*38517*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38520*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*38521*/     OPC_CheckType, MVT::i32,
/*38523*/     OPC_MoveParent,
/*38524*/     OPC_MoveChild, 13,
/*38526*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38529*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*38530*/     OPC_CheckType, MVT::i32,
/*38532*/     OPC_MoveParent,
/*38533*/     OPC_MoveChild, 14,
/*38535*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38538*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*38539*/     OPC_CheckType, MVT::i32,
/*38541*/     OPC_MoveParent,
/*38542*/     OPC_MoveChild, 15,
/*38544*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38547*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*38548*/     OPC_CheckType, MVT::i32,
/*38550*/     OPC_MoveParent,
/*38551*/     OPC_MoveChild, 16,
/*38553*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38556*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*38557*/     OPC_CheckType, MVT::i32,
/*38559*/     OPC_MoveParent,
/*38560*/     OPC_MoveChild, 17,
/*38562*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38565*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*38566*/     OPC_CheckType, MVT::i32,
/*38568*/     OPC_MoveParent,
/*38569*/     OPC_MoveChild, 18,
/*38571*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38574*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*38575*/     OPC_CheckType, MVT::i32,
/*38577*/     OPC_MoveParent,
/*38578*/     OPC_CheckType, MVT::v4f32,
/*38580*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*38582*/     OPC_EmitConvertToTarget, 1,
/*38584*/     OPC_EmitConvertToTarget, 2,
/*38586*/     OPC_EmitConvertToTarget, 3,
/*38588*/     OPC_EmitConvertToTarget, 4,
/*38590*/     OPC_EmitConvertToTarget, 5,
/*38592*/     OPC_EmitConvertToTarget, 6,
/*38594*/     OPC_EmitConvertToTarget, 7,
/*38596*/     OPC_EmitConvertToTarget, 8,
/*38598*/     OPC_EmitConvertToTarget, 9,
/*38600*/     OPC_EmitConvertToTarget, 10,
/*38602*/     OPC_EmitConvertToTarget, 11,
/*38604*/     OPC_EmitConvertToTarget, 12,
/*38606*/     OPC_EmitConvertToTarget, 13,
/*38608*/     OPC_EmitConvertToTarget, 14,
/*38610*/     OPC_EmitConvertToTarget, 15,
/*38612*/     OPC_EmitConvertToTarget, 16,
/*38614*/     OPC_EmitConvertToTarget, 17,
/*38616*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_SAMPLE), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 0:i32, v4f32:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_SAMPLE:v4f32 R600_Reg128:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*38641*/   /*Scope*/ 94|128,1/*222*/, /*->38865*/
/*38643*/     OPC_CheckInteger, 1, 
/*38645*/     OPC_MoveParent,
/*38646*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*38647*/     OPC_CheckChild1Type, MVT::v4f32,
/*38649*/     OPC_RecordChild2, // #1 = $srcx
/*38650*/     OPC_MoveChild, 2,
/*38652*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38655*/     OPC_CheckType, MVT::i32,
/*38657*/     OPC_MoveParent,
/*38658*/     OPC_RecordChild3, // #2 = $srcy
/*38659*/     OPC_MoveChild, 3,
/*38661*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38664*/     OPC_CheckType, MVT::i32,
/*38666*/     OPC_MoveParent,
/*38667*/     OPC_RecordChild4, // #3 = $srcz
/*38668*/     OPC_MoveChild, 4,
/*38670*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38673*/     OPC_CheckType, MVT::i32,
/*38675*/     OPC_MoveParent,
/*38676*/     OPC_RecordChild5, // #4 = $srcw
/*38677*/     OPC_MoveChild, 5,
/*38679*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38682*/     OPC_CheckType, MVT::i32,
/*38684*/     OPC_MoveParent,
/*38685*/     OPC_RecordChild6, // #5 = $offsetx
/*38686*/     OPC_MoveChild, 6,
/*38688*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38691*/     OPC_CheckType, MVT::i32,
/*38693*/     OPC_MoveParent,
/*38694*/     OPC_RecordChild7, // #6 = $offsety
/*38695*/     OPC_MoveChild, 7,
/*38697*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38700*/     OPC_CheckType, MVT::i32,
/*38702*/     OPC_MoveParent,
/*38703*/     OPC_MoveChild, 8,
/*38705*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38708*/     OPC_RecordNode, // #7 = $offsetz
/*38709*/     OPC_CheckType, MVT::i32,
/*38711*/     OPC_MoveParent,
/*38712*/     OPC_MoveChild, 9,
/*38714*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38717*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*38718*/     OPC_CheckType, MVT::i32,
/*38720*/     OPC_MoveParent,
/*38721*/     OPC_MoveChild, 10,
/*38723*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38726*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*38727*/     OPC_CheckType, MVT::i32,
/*38729*/     OPC_MoveParent,
/*38730*/     OPC_MoveChild, 11,
/*38732*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38735*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*38736*/     OPC_CheckType, MVT::i32,
/*38738*/     OPC_MoveParent,
/*38739*/     OPC_MoveChild, 12,
/*38741*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38744*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*38745*/     OPC_CheckType, MVT::i32,
/*38747*/     OPC_MoveParent,
/*38748*/     OPC_MoveChild, 13,
/*38750*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38753*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*38754*/     OPC_CheckType, MVT::i32,
/*38756*/     OPC_MoveParent,
/*38757*/     OPC_MoveChild, 14,
/*38759*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38762*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*38763*/     OPC_CheckType, MVT::i32,
/*38765*/     OPC_MoveParent,
/*38766*/     OPC_MoveChild, 15,
/*38768*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38771*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*38772*/     OPC_CheckType, MVT::i32,
/*38774*/     OPC_MoveParent,
/*38775*/     OPC_MoveChild, 16,
/*38777*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38780*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*38781*/     OPC_CheckType, MVT::i32,
/*38783*/     OPC_MoveParent,
/*38784*/     OPC_MoveChild, 17,
/*38786*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38789*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*38790*/     OPC_CheckType, MVT::i32,
/*38792*/     OPC_MoveParent,
/*38793*/     OPC_MoveChild, 18,
/*38795*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38798*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*38799*/     OPC_CheckType, MVT::i32,
/*38801*/     OPC_MoveParent,
/*38802*/     OPC_CheckType, MVT::v4f32,
/*38804*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*38806*/     OPC_EmitConvertToTarget, 1,
/*38808*/     OPC_EmitConvertToTarget, 2,
/*38810*/     OPC_EmitConvertToTarget, 3,
/*38812*/     OPC_EmitConvertToTarget, 4,
/*38814*/     OPC_EmitConvertToTarget, 5,
/*38816*/     OPC_EmitConvertToTarget, 6,
/*38818*/     OPC_EmitConvertToTarget, 7,
/*38820*/     OPC_EmitConvertToTarget, 8,
/*38822*/     OPC_EmitConvertToTarget, 9,
/*38824*/     OPC_EmitConvertToTarget, 10,
/*38826*/     OPC_EmitConvertToTarget, 11,
/*38828*/     OPC_EmitConvertToTarget, 12,
/*38830*/     OPC_EmitConvertToTarget, 13,
/*38832*/     OPC_EmitConvertToTarget, 14,
/*38834*/     OPC_EmitConvertToTarget, 15,
/*38836*/     OPC_EmitConvertToTarget, 16,
/*38838*/     OPC_EmitConvertToTarget, 17,
/*38840*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_SAMPLE_C), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 1:i32, v4f32:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_SAMPLE_C:v4f32 R600_Reg128:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*38865*/   /*Scope*/ 94|128,1/*222*/, /*->39089*/
/*38867*/     OPC_CheckInteger, 2, 
/*38869*/     OPC_MoveParent,
/*38870*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*38871*/     OPC_CheckChild1Type, MVT::v4f32,
/*38873*/     OPC_RecordChild2, // #1 = $srcx
/*38874*/     OPC_MoveChild, 2,
/*38876*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38879*/     OPC_CheckType, MVT::i32,
/*38881*/     OPC_MoveParent,
/*38882*/     OPC_RecordChild3, // #2 = $srcy
/*38883*/     OPC_MoveChild, 3,
/*38885*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38888*/     OPC_CheckType, MVT::i32,
/*38890*/     OPC_MoveParent,
/*38891*/     OPC_RecordChild4, // #3 = $srcz
/*38892*/     OPC_MoveChild, 4,
/*38894*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38897*/     OPC_CheckType, MVT::i32,
/*38899*/     OPC_MoveParent,
/*38900*/     OPC_RecordChild5, // #4 = $srcw
/*38901*/     OPC_MoveChild, 5,
/*38903*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38906*/     OPC_CheckType, MVT::i32,
/*38908*/     OPC_MoveParent,
/*38909*/     OPC_RecordChild6, // #5 = $offsetx
/*38910*/     OPC_MoveChild, 6,
/*38912*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38915*/     OPC_CheckType, MVT::i32,
/*38917*/     OPC_MoveParent,
/*38918*/     OPC_RecordChild7, // #6 = $offsety
/*38919*/     OPC_MoveChild, 7,
/*38921*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38924*/     OPC_CheckType, MVT::i32,
/*38926*/     OPC_MoveParent,
/*38927*/     OPC_MoveChild, 8,
/*38929*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38932*/     OPC_RecordNode, // #7 = $offsetz
/*38933*/     OPC_CheckType, MVT::i32,
/*38935*/     OPC_MoveParent,
/*38936*/     OPC_MoveChild, 9,
/*38938*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38941*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*38942*/     OPC_CheckType, MVT::i32,
/*38944*/     OPC_MoveParent,
/*38945*/     OPC_MoveChild, 10,
/*38947*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38950*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*38951*/     OPC_CheckType, MVT::i32,
/*38953*/     OPC_MoveParent,
/*38954*/     OPC_MoveChild, 11,
/*38956*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38959*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*38960*/     OPC_CheckType, MVT::i32,
/*38962*/     OPC_MoveParent,
/*38963*/     OPC_MoveChild, 12,
/*38965*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38968*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*38969*/     OPC_CheckType, MVT::i32,
/*38971*/     OPC_MoveParent,
/*38972*/     OPC_MoveChild, 13,
/*38974*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38977*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*38978*/     OPC_CheckType, MVT::i32,
/*38980*/     OPC_MoveParent,
/*38981*/     OPC_MoveChild, 14,
/*38983*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38986*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*38987*/     OPC_CheckType, MVT::i32,
/*38989*/     OPC_MoveParent,
/*38990*/     OPC_MoveChild, 15,
/*38992*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38995*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*38996*/     OPC_CheckType, MVT::i32,
/*38998*/     OPC_MoveParent,
/*38999*/     OPC_MoveChild, 16,
/*39001*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39004*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*39005*/     OPC_CheckType, MVT::i32,
/*39007*/     OPC_MoveParent,
/*39008*/     OPC_MoveChild, 17,
/*39010*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39013*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*39014*/     OPC_CheckType, MVT::i32,
/*39016*/     OPC_MoveParent,
/*39017*/     OPC_MoveChild, 18,
/*39019*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39022*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*39023*/     OPC_CheckType, MVT::i32,
/*39025*/     OPC_MoveParent,
/*39026*/     OPC_CheckType, MVT::v4f32,
/*39028*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*39030*/     OPC_EmitConvertToTarget, 1,
/*39032*/     OPC_EmitConvertToTarget, 2,
/*39034*/     OPC_EmitConvertToTarget, 3,
/*39036*/     OPC_EmitConvertToTarget, 4,
/*39038*/     OPC_EmitConvertToTarget, 5,
/*39040*/     OPC_EmitConvertToTarget, 6,
/*39042*/     OPC_EmitConvertToTarget, 7,
/*39044*/     OPC_EmitConvertToTarget, 8,
/*39046*/     OPC_EmitConvertToTarget, 9,
/*39048*/     OPC_EmitConvertToTarget, 10,
/*39050*/     OPC_EmitConvertToTarget, 11,
/*39052*/     OPC_EmitConvertToTarget, 12,
/*39054*/     OPC_EmitConvertToTarget, 13,
/*39056*/     OPC_EmitConvertToTarget, 14,
/*39058*/     OPC_EmitConvertToTarget, 15,
/*39060*/     OPC_EmitConvertToTarget, 16,
/*39062*/     OPC_EmitConvertToTarget, 17,
/*39064*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_SAMPLE_L), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 2:i32, v4f32:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_SAMPLE_L:v4f32 R600_Reg128:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*39089*/   /*Scope*/ 94|128,1/*222*/, /*->39313*/
/*39091*/     OPC_CheckInteger, 3, 
/*39093*/     OPC_MoveParent,
/*39094*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*39095*/     OPC_CheckChild1Type, MVT::v4f32,
/*39097*/     OPC_RecordChild2, // #1 = $srcx
/*39098*/     OPC_MoveChild, 2,
/*39100*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39103*/     OPC_CheckType, MVT::i32,
/*39105*/     OPC_MoveParent,
/*39106*/     OPC_RecordChild3, // #2 = $srcy
/*39107*/     OPC_MoveChild, 3,
/*39109*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39112*/     OPC_CheckType, MVT::i32,
/*39114*/     OPC_MoveParent,
/*39115*/     OPC_RecordChild4, // #3 = $srcz
/*39116*/     OPC_MoveChild, 4,
/*39118*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39121*/     OPC_CheckType, MVT::i32,
/*39123*/     OPC_MoveParent,
/*39124*/     OPC_RecordChild5, // #4 = $srcw
/*39125*/     OPC_MoveChild, 5,
/*39127*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39130*/     OPC_CheckType, MVT::i32,
/*39132*/     OPC_MoveParent,
/*39133*/     OPC_RecordChild6, // #5 = $offsetx
/*39134*/     OPC_MoveChild, 6,
/*39136*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39139*/     OPC_CheckType, MVT::i32,
/*39141*/     OPC_MoveParent,
/*39142*/     OPC_RecordChild7, // #6 = $offsety
/*39143*/     OPC_MoveChild, 7,
/*39145*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39148*/     OPC_CheckType, MVT::i32,
/*39150*/     OPC_MoveParent,
/*39151*/     OPC_MoveChild, 8,
/*39153*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39156*/     OPC_RecordNode, // #7 = $offsetz
/*39157*/     OPC_CheckType, MVT::i32,
/*39159*/     OPC_MoveParent,
/*39160*/     OPC_MoveChild, 9,
/*39162*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39165*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*39166*/     OPC_CheckType, MVT::i32,
/*39168*/     OPC_MoveParent,
/*39169*/     OPC_MoveChild, 10,
/*39171*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39174*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*39175*/     OPC_CheckType, MVT::i32,
/*39177*/     OPC_MoveParent,
/*39178*/     OPC_MoveChild, 11,
/*39180*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39183*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*39184*/     OPC_CheckType, MVT::i32,
/*39186*/     OPC_MoveParent,
/*39187*/     OPC_MoveChild, 12,
/*39189*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39192*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*39193*/     OPC_CheckType, MVT::i32,
/*39195*/     OPC_MoveParent,
/*39196*/     OPC_MoveChild, 13,
/*39198*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39201*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*39202*/     OPC_CheckType, MVT::i32,
/*39204*/     OPC_MoveParent,
/*39205*/     OPC_MoveChild, 14,
/*39207*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39210*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*39211*/     OPC_CheckType, MVT::i32,
/*39213*/     OPC_MoveParent,
/*39214*/     OPC_MoveChild, 15,
/*39216*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39219*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*39220*/     OPC_CheckType, MVT::i32,
/*39222*/     OPC_MoveParent,
/*39223*/     OPC_MoveChild, 16,
/*39225*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39228*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*39229*/     OPC_CheckType, MVT::i32,
/*39231*/     OPC_MoveParent,
/*39232*/     OPC_MoveChild, 17,
/*39234*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39237*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*39238*/     OPC_CheckType, MVT::i32,
/*39240*/     OPC_MoveParent,
/*39241*/     OPC_MoveChild, 18,
/*39243*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39246*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*39247*/     OPC_CheckType, MVT::i32,
/*39249*/     OPC_MoveParent,
/*39250*/     OPC_CheckType, MVT::v4f32,
/*39252*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*39254*/     OPC_EmitConvertToTarget, 1,
/*39256*/     OPC_EmitConvertToTarget, 2,
/*39258*/     OPC_EmitConvertToTarget, 3,
/*39260*/     OPC_EmitConvertToTarget, 4,
/*39262*/     OPC_EmitConvertToTarget, 5,
/*39264*/     OPC_EmitConvertToTarget, 6,
/*39266*/     OPC_EmitConvertToTarget, 7,
/*39268*/     OPC_EmitConvertToTarget, 8,
/*39270*/     OPC_EmitConvertToTarget, 9,
/*39272*/     OPC_EmitConvertToTarget, 10,
/*39274*/     OPC_EmitConvertToTarget, 11,
/*39276*/     OPC_EmitConvertToTarget, 12,
/*39278*/     OPC_EmitConvertToTarget, 13,
/*39280*/     OPC_EmitConvertToTarget, 14,
/*39282*/     OPC_EmitConvertToTarget, 15,
/*39284*/     OPC_EmitConvertToTarget, 16,
/*39286*/     OPC_EmitConvertToTarget, 17,
/*39288*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_SAMPLE_C_L), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 3:i32, v4f32:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_SAMPLE_C_L:v4f32 R600_Reg128:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*39313*/   /*Scope*/ 94|128,1/*222*/, /*->39537*/
/*39315*/     OPC_CheckInteger, 4, 
/*39317*/     OPC_MoveParent,
/*39318*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*39319*/     OPC_CheckChild1Type, MVT::v4f32,
/*39321*/     OPC_RecordChild2, // #1 = $srcx
/*39322*/     OPC_MoveChild, 2,
/*39324*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39327*/     OPC_CheckType, MVT::i32,
/*39329*/     OPC_MoveParent,
/*39330*/     OPC_RecordChild3, // #2 = $srcy
/*39331*/     OPC_MoveChild, 3,
/*39333*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39336*/     OPC_CheckType, MVT::i32,
/*39338*/     OPC_MoveParent,
/*39339*/     OPC_RecordChild4, // #3 = $srcz
/*39340*/     OPC_MoveChild, 4,
/*39342*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39345*/     OPC_CheckType, MVT::i32,
/*39347*/     OPC_MoveParent,
/*39348*/     OPC_RecordChild5, // #4 = $srcw
/*39349*/     OPC_MoveChild, 5,
/*39351*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39354*/     OPC_CheckType, MVT::i32,
/*39356*/     OPC_MoveParent,
/*39357*/     OPC_RecordChild6, // #5 = $offsetx
/*39358*/     OPC_MoveChild, 6,
/*39360*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39363*/     OPC_CheckType, MVT::i32,
/*39365*/     OPC_MoveParent,
/*39366*/     OPC_RecordChild7, // #6 = $offsety
/*39367*/     OPC_MoveChild, 7,
/*39369*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39372*/     OPC_CheckType, MVT::i32,
/*39374*/     OPC_MoveParent,
/*39375*/     OPC_MoveChild, 8,
/*39377*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39380*/     OPC_RecordNode, // #7 = $offsetz
/*39381*/     OPC_CheckType, MVT::i32,
/*39383*/     OPC_MoveParent,
/*39384*/     OPC_MoveChild, 9,
/*39386*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39389*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*39390*/     OPC_CheckType, MVT::i32,
/*39392*/     OPC_MoveParent,
/*39393*/     OPC_MoveChild, 10,
/*39395*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39398*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*39399*/     OPC_CheckType, MVT::i32,
/*39401*/     OPC_MoveParent,
/*39402*/     OPC_MoveChild, 11,
/*39404*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39407*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*39408*/     OPC_CheckType, MVT::i32,
/*39410*/     OPC_MoveParent,
/*39411*/     OPC_MoveChild, 12,
/*39413*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39416*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*39417*/     OPC_CheckType, MVT::i32,
/*39419*/     OPC_MoveParent,
/*39420*/     OPC_MoveChild, 13,
/*39422*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39425*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*39426*/     OPC_CheckType, MVT::i32,
/*39428*/     OPC_MoveParent,
/*39429*/     OPC_MoveChild, 14,
/*39431*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39434*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*39435*/     OPC_CheckType, MVT::i32,
/*39437*/     OPC_MoveParent,
/*39438*/     OPC_MoveChild, 15,
/*39440*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39443*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*39444*/     OPC_CheckType, MVT::i32,
/*39446*/     OPC_MoveParent,
/*39447*/     OPC_MoveChild, 16,
/*39449*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39452*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*39453*/     OPC_CheckType, MVT::i32,
/*39455*/     OPC_MoveParent,
/*39456*/     OPC_MoveChild, 17,
/*39458*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39461*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*39462*/     OPC_CheckType, MVT::i32,
/*39464*/     OPC_MoveParent,
/*39465*/     OPC_MoveChild, 18,
/*39467*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39470*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*39471*/     OPC_CheckType, MVT::i32,
/*39473*/     OPC_MoveParent,
/*39474*/     OPC_CheckType, MVT::v4f32,
/*39476*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*39478*/     OPC_EmitConvertToTarget, 1,
/*39480*/     OPC_EmitConvertToTarget, 2,
/*39482*/     OPC_EmitConvertToTarget, 3,
/*39484*/     OPC_EmitConvertToTarget, 4,
/*39486*/     OPC_EmitConvertToTarget, 5,
/*39488*/     OPC_EmitConvertToTarget, 6,
/*39490*/     OPC_EmitConvertToTarget, 7,
/*39492*/     OPC_EmitConvertToTarget, 8,
/*39494*/     OPC_EmitConvertToTarget, 9,
/*39496*/     OPC_EmitConvertToTarget, 10,
/*39498*/     OPC_EmitConvertToTarget, 11,
/*39500*/     OPC_EmitConvertToTarget, 12,
/*39502*/     OPC_EmitConvertToTarget, 13,
/*39504*/     OPC_EmitConvertToTarget, 14,
/*39506*/     OPC_EmitConvertToTarget, 15,
/*39508*/     OPC_EmitConvertToTarget, 16,
/*39510*/     OPC_EmitConvertToTarget, 17,
/*39512*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_SAMPLE_LB), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 4:i32, v4f32:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_SAMPLE_LB:v4f32 R600_Reg128:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*39537*/   /*Scope*/ 94|128,1/*222*/, /*->39761*/
/*39539*/     OPC_CheckInteger, 5, 
/*39541*/     OPC_MoveParent,
/*39542*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*39543*/     OPC_CheckChild1Type, MVT::v4f32,
/*39545*/     OPC_RecordChild2, // #1 = $srcx
/*39546*/     OPC_MoveChild, 2,
/*39548*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39551*/     OPC_CheckType, MVT::i32,
/*39553*/     OPC_MoveParent,
/*39554*/     OPC_RecordChild3, // #2 = $srcy
/*39555*/     OPC_MoveChild, 3,
/*39557*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39560*/     OPC_CheckType, MVT::i32,
/*39562*/     OPC_MoveParent,
/*39563*/     OPC_RecordChild4, // #3 = $srcz
/*39564*/     OPC_MoveChild, 4,
/*39566*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39569*/     OPC_CheckType, MVT::i32,
/*39571*/     OPC_MoveParent,
/*39572*/     OPC_RecordChild5, // #4 = $srcw
/*39573*/     OPC_MoveChild, 5,
/*39575*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39578*/     OPC_CheckType, MVT::i32,
/*39580*/     OPC_MoveParent,
/*39581*/     OPC_RecordChild6, // #5 = $offsetx
/*39582*/     OPC_MoveChild, 6,
/*39584*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39587*/     OPC_CheckType, MVT::i32,
/*39589*/     OPC_MoveParent,
/*39590*/     OPC_RecordChild7, // #6 = $offsety
/*39591*/     OPC_MoveChild, 7,
/*39593*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39596*/     OPC_CheckType, MVT::i32,
/*39598*/     OPC_MoveParent,
/*39599*/     OPC_MoveChild, 8,
/*39601*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39604*/     OPC_RecordNode, // #7 = $offsetz
/*39605*/     OPC_CheckType, MVT::i32,
/*39607*/     OPC_MoveParent,
/*39608*/     OPC_MoveChild, 9,
/*39610*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39613*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*39614*/     OPC_CheckType, MVT::i32,
/*39616*/     OPC_MoveParent,
/*39617*/     OPC_MoveChild, 10,
/*39619*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39622*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*39623*/     OPC_CheckType, MVT::i32,
/*39625*/     OPC_MoveParent,
/*39626*/     OPC_MoveChild, 11,
/*39628*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39631*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*39632*/     OPC_CheckType, MVT::i32,
/*39634*/     OPC_MoveParent,
/*39635*/     OPC_MoveChild, 12,
/*39637*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39640*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*39641*/     OPC_CheckType, MVT::i32,
/*39643*/     OPC_MoveParent,
/*39644*/     OPC_MoveChild, 13,
/*39646*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39649*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*39650*/     OPC_CheckType, MVT::i32,
/*39652*/     OPC_MoveParent,
/*39653*/     OPC_MoveChild, 14,
/*39655*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39658*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*39659*/     OPC_CheckType, MVT::i32,
/*39661*/     OPC_MoveParent,
/*39662*/     OPC_MoveChild, 15,
/*39664*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39667*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*39668*/     OPC_CheckType, MVT::i32,
/*39670*/     OPC_MoveParent,
/*39671*/     OPC_MoveChild, 16,
/*39673*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39676*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*39677*/     OPC_CheckType, MVT::i32,
/*39679*/     OPC_MoveParent,
/*39680*/     OPC_MoveChild, 17,
/*39682*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39685*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*39686*/     OPC_CheckType, MVT::i32,
/*39688*/     OPC_MoveParent,
/*39689*/     OPC_MoveChild, 18,
/*39691*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39694*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*39695*/     OPC_CheckType, MVT::i32,
/*39697*/     OPC_MoveParent,
/*39698*/     OPC_CheckType, MVT::v4f32,
/*39700*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*39702*/     OPC_EmitConvertToTarget, 1,
/*39704*/     OPC_EmitConvertToTarget, 2,
/*39706*/     OPC_EmitConvertToTarget, 3,
/*39708*/     OPC_EmitConvertToTarget, 4,
/*39710*/     OPC_EmitConvertToTarget, 5,
/*39712*/     OPC_EmitConvertToTarget, 6,
/*39714*/     OPC_EmitConvertToTarget, 7,
/*39716*/     OPC_EmitConvertToTarget, 8,
/*39718*/     OPC_EmitConvertToTarget, 9,
/*39720*/     OPC_EmitConvertToTarget, 10,
/*39722*/     OPC_EmitConvertToTarget, 11,
/*39724*/     OPC_EmitConvertToTarget, 12,
/*39726*/     OPC_EmitConvertToTarget, 13,
/*39728*/     OPC_EmitConvertToTarget, 14,
/*39730*/     OPC_EmitConvertToTarget, 15,
/*39732*/     OPC_EmitConvertToTarget, 16,
/*39734*/     OPC_EmitConvertToTarget, 17,
/*39736*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_SAMPLE_C_LB), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 5:i32, v4f32:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_SAMPLE_C_LB:v4f32 R600_Reg128:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*39761*/   /*Scope*/ 94|128,1/*222*/, /*->39985*/
/*39763*/     OPC_CheckInteger, 6, 
/*39765*/     OPC_MoveParent,
/*39766*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*39767*/     OPC_CheckChild1Type, MVT::v4i32,
/*39769*/     OPC_RecordChild2, // #1 = $srcx
/*39770*/     OPC_MoveChild, 2,
/*39772*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39775*/     OPC_CheckType, MVT::i32,
/*39777*/     OPC_MoveParent,
/*39778*/     OPC_RecordChild3, // #2 = $srcy
/*39779*/     OPC_MoveChild, 3,
/*39781*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39784*/     OPC_CheckType, MVT::i32,
/*39786*/     OPC_MoveParent,
/*39787*/     OPC_RecordChild4, // #3 = $srcz
/*39788*/     OPC_MoveChild, 4,
/*39790*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39793*/     OPC_CheckType, MVT::i32,
/*39795*/     OPC_MoveParent,
/*39796*/     OPC_RecordChild5, // #4 = $srcw
/*39797*/     OPC_MoveChild, 5,
/*39799*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39802*/     OPC_CheckType, MVT::i32,
/*39804*/     OPC_MoveParent,
/*39805*/     OPC_RecordChild6, // #5 = $offsetx
/*39806*/     OPC_MoveChild, 6,
/*39808*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39811*/     OPC_CheckType, MVT::i32,
/*39813*/     OPC_MoveParent,
/*39814*/     OPC_RecordChild7, // #6 = $offsety
/*39815*/     OPC_MoveChild, 7,
/*39817*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39820*/     OPC_CheckType, MVT::i32,
/*39822*/     OPC_MoveParent,
/*39823*/     OPC_MoveChild, 8,
/*39825*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39828*/     OPC_RecordNode, // #7 = $offsetz
/*39829*/     OPC_CheckType, MVT::i32,
/*39831*/     OPC_MoveParent,
/*39832*/     OPC_MoveChild, 9,
/*39834*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39837*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*39838*/     OPC_CheckType, MVT::i32,
/*39840*/     OPC_MoveParent,
/*39841*/     OPC_MoveChild, 10,
/*39843*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39846*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*39847*/     OPC_CheckType, MVT::i32,
/*39849*/     OPC_MoveParent,
/*39850*/     OPC_MoveChild, 11,
/*39852*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39855*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*39856*/     OPC_CheckType, MVT::i32,
/*39858*/     OPC_MoveParent,
/*39859*/     OPC_MoveChild, 12,
/*39861*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39864*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*39865*/     OPC_CheckType, MVT::i32,
/*39867*/     OPC_MoveParent,
/*39868*/     OPC_MoveChild, 13,
/*39870*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39873*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*39874*/     OPC_CheckType, MVT::i32,
/*39876*/     OPC_MoveParent,
/*39877*/     OPC_MoveChild, 14,
/*39879*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39882*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*39883*/     OPC_CheckType, MVT::i32,
/*39885*/     OPC_MoveParent,
/*39886*/     OPC_MoveChild, 15,
/*39888*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39891*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*39892*/     OPC_CheckType, MVT::i32,
/*39894*/     OPC_MoveParent,
/*39895*/     OPC_MoveChild, 16,
/*39897*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39900*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*39901*/     OPC_CheckType, MVT::i32,
/*39903*/     OPC_MoveParent,
/*39904*/     OPC_MoveChild, 17,
/*39906*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39909*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*39910*/     OPC_CheckType, MVT::i32,
/*39912*/     OPC_MoveParent,
/*39913*/     OPC_MoveChild, 18,
/*39915*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39918*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*39919*/     OPC_CheckType, MVT::i32,
/*39921*/     OPC_MoveParent,
/*39922*/     OPC_CheckType, MVT::v4f32,
/*39924*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*39926*/     OPC_EmitConvertToTarget, 1,
/*39928*/     OPC_EmitConvertToTarget, 2,
/*39930*/     OPC_EmitConvertToTarget, 3,
/*39932*/     OPC_EmitConvertToTarget, 4,
/*39934*/     OPC_EmitConvertToTarget, 5,
/*39936*/     OPC_EmitConvertToTarget, 6,
/*39938*/     OPC_EmitConvertToTarget, 7,
/*39940*/     OPC_EmitConvertToTarget, 8,
/*39942*/     OPC_EmitConvertToTarget, 9,
/*39944*/     OPC_EmitConvertToTarget, 10,
/*39946*/     OPC_EmitConvertToTarget, 11,
/*39948*/     OPC_EmitConvertToTarget, 12,
/*39950*/     OPC_EmitConvertToTarget, 13,
/*39952*/     OPC_EmitConvertToTarget, 14,
/*39954*/     OPC_EmitConvertToTarget, 15,
/*39956*/     OPC_EmitConvertToTarget, 16,
/*39958*/     OPC_EmitConvertToTarget, 17,
/*39960*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_LD), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 6:i32, v4i32:v4i32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_LD:v4f32 R600_Reg128:v4i32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*39985*/   /*Scope*/ 94|128,1/*222*/, /*->40209*/
/*39987*/     OPC_CheckInteger, 7, 
/*39989*/     OPC_MoveParent,
/*39990*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*39991*/     OPC_CheckChild1Type, MVT::v4i32,
/*39993*/     OPC_RecordChild2, // #1 = $srcx
/*39994*/     OPC_MoveChild, 2,
/*39996*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39999*/     OPC_CheckType, MVT::i32,
/*40001*/     OPC_MoveParent,
/*40002*/     OPC_RecordChild3, // #2 = $srcy
/*40003*/     OPC_MoveChild, 3,
/*40005*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40008*/     OPC_CheckType, MVT::i32,
/*40010*/     OPC_MoveParent,
/*40011*/     OPC_RecordChild4, // #3 = $srcz
/*40012*/     OPC_MoveChild, 4,
/*40014*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40017*/     OPC_CheckType, MVT::i32,
/*40019*/     OPC_MoveParent,
/*40020*/     OPC_RecordChild5, // #4 = $srcw
/*40021*/     OPC_MoveChild, 5,
/*40023*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40026*/     OPC_CheckType, MVT::i32,
/*40028*/     OPC_MoveParent,
/*40029*/     OPC_RecordChild6, // #5 = $offsetx
/*40030*/     OPC_MoveChild, 6,
/*40032*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40035*/     OPC_CheckType, MVT::i32,
/*40037*/     OPC_MoveParent,
/*40038*/     OPC_RecordChild7, // #6 = $offsety
/*40039*/     OPC_MoveChild, 7,
/*40041*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40044*/     OPC_CheckType, MVT::i32,
/*40046*/     OPC_MoveParent,
/*40047*/     OPC_MoveChild, 8,
/*40049*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40052*/     OPC_RecordNode, // #7 = $offsetz
/*40053*/     OPC_CheckType, MVT::i32,
/*40055*/     OPC_MoveParent,
/*40056*/     OPC_MoveChild, 9,
/*40058*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40061*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*40062*/     OPC_CheckType, MVT::i32,
/*40064*/     OPC_MoveParent,
/*40065*/     OPC_MoveChild, 10,
/*40067*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40070*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*40071*/     OPC_CheckType, MVT::i32,
/*40073*/     OPC_MoveParent,
/*40074*/     OPC_MoveChild, 11,
/*40076*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40079*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*40080*/     OPC_CheckType, MVT::i32,
/*40082*/     OPC_MoveParent,
/*40083*/     OPC_MoveChild, 12,
/*40085*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40088*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*40089*/     OPC_CheckType, MVT::i32,
/*40091*/     OPC_MoveParent,
/*40092*/     OPC_MoveChild, 13,
/*40094*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40097*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*40098*/     OPC_CheckType, MVT::i32,
/*40100*/     OPC_MoveParent,
/*40101*/     OPC_MoveChild, 14,
/*40103*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40106*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*40107*/     OPC_CheckType, MVT::i32,
/*40109*/     OPC_MoveParent,
/*40110*/     OPC_MoveChild, 15,
/*40112*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40115*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*40116*/     OPC_CheckType, MVT::i32,
/*40118*/     OPC_MoveParent,
/*40119*/     OPC_MoveChild, 16,
/*40121*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40124*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*40125*/     OPC_CheckType, MVT::i32,
/*40127*/     OPC_MoveParent,
/*40128*/     OPC_MoveChild, 17,
/*40130*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40133*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*40134*/     OPC_CheckType, MVT::i32,
/*40136*/     OPC_MoveParent,
/*40137*/     OPC_MoveChild, 18,
/*40139*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40142*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*40143*/     OPC_CheckType, MVT::i32,
/*40145*/     OPC_MoveParent,
/*40146*/     OPC_CheckType, MVT::v4f32,
/*40148*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*40150*/     OPC_EmitConvertToTarget, 1,
/*40152*/     OPC_EmitConvertToTarget, 2,
/*40154*/     OPC_EmitConvertToTarget, 3,
/*40156*/     OPC_EmitConvertToTarget, 4,
/*40158*/     OPC_EmitConvertToTarget, 5,
/*40160*/     OPC_EmitConvertToTarget, 6,
/*40162*/     OPC_EmitConvertToTarget, 7,
/*40164*/     OPC_EmitConvertToTarget, 8,
/*40166*/     OPC_EmitConvertToTarget, 9,
/*40168*/     OPC_EmitConvertToTarget, 10,
/*40170*/     OPC_EmitConvertToTarget, 11,
/*40172*/     OPC_EmitConvertToTarget, 12,
/*40174*/     OPC_EmitConvertToTarget, 13,
/*40176*/     OPC_EmitConvertToTarget, 14,
/*40178*/     OPC_EmitConvertToTarget, 15,
/*40180*/     OPC_EmitConvertToTarget, 16,
/*40182*/     OPC_EmitConvertToTarget, 17,
/*40184*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_GET_TEXTURE_RESINFO), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 7:i32, v4i32:v4i32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_GET_TEXTURE_RESINFO:v4f32 R600_Reg128:v4i32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*40209*/   /*Scope*/ 94|128,1/*222*/, /*->40433*/
/*40211*/     OPC_CheckInteger, 8, 
/*40213*/     OPC_MoveParent,
/*40214*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*40215*/     OPC_CheckChild1Type, MVT::v4f32,
/*40217*/     OPC_RecordChild2, // #1 = $srcx
/*40218*/     OPC_MoveChild, 2,
/*40220*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40223*/     OPC_CheckType, MVT::i32,
/*40225*/     OPC_MoveParent,
/*40226*/     OPC_RecordChild3, // #2 = $srcy
/*40227*/     OPC_MoveChild, 3,
/*40229*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40232*/     OPC_CheckType, MVT::i32,
/*40234*/     OPC_MoveParent,
/*40235*/     OPC_RecordChild4, // #3 = $srcz
/*40236*/     OPC_MoveChild, 4,
/*40238*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40241*/     OPC_CheckType, MVT::i32,
/*40243*/     OPC_MoveParent,
/*40244*/     OPC_RecordChild5, // #4 = $srcw
/*40245*/     OPC_MoveChild, 5,
/*40247*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40250*/     OPC_CheckType, MVT::i32,
/*40252*/     OPC_MoveParent,
/*40253*/     OPC_RecordChild6, // #5 = $offsetx
/*40254*/     OPC_MoveChild, 6,
/*40256*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40259*/     OPC_CheckType, MVT::i32,
/*40261*/     OPC_MoveParent,
/*40262*/     OPC_RecordChild7, // #6 = $offsety
/*40263*/     OPC_MoveChild, 7,
/*40265*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40268*/     OPC_CheckType, MVT::i32,
/*40270*/     OPC_MoveParent,
/*40271*/     OPC_MoveChild, 8,
/*40273*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40276*/     OPC_RecordNode, // #7 = $offsetz
/*40277*/     OPC_CheckType, MVT::i32,
/*40279*/     OPC_MoveParent,
/*40280*/     OPC_MoveChild, 9,
/*40282*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40285*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*40286*/     OPC_CheckType, MVT::i32,
/*40288*/     OPC_MoveParent,
/*40289*/     OPC_MoveChild, 10,
/*40291*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40294*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*40295*/     OPC_CheckType, MVT::i32,
/*40297*/     OPC_MoveParent,
/*40298*/     OPC_MoveChild, 11,
/*40300*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40303*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*40304*/     OPC_CheckType, MVT::i32,
/*40306*/     OPC_MoveParent,
/*40307*/     OPC_MoveChild, 12,
/*40309*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40312*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*40313*/     OPC_CheckType, MVT::i32,
/*40315*/     OPC_MoveParent,
/*40316*/     OPC_MoveChild, 13,
/*40318*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40321*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*40322*/     OPC_CheckType, MVT::i32,
/*40324*/     OPC_MoveParent,
/*40325*/     OPC_MoveChild, 14,
/*40327*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40330*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*40331*/     OPC_CheckType, MVT::i32,
/*40333*/     OPC_MoveParent,
/*40334*/     OPC_MoveChild, 15,
/*40336*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40339*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*40340*/     OPC_CheckType, MVT::i32,
/*40342*/     OPC_MoveParent,
/*40343*/     OPC_MoveChild, 16,
/*40345*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40348*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*40349*/     OPC_CheckType, MVT::i32,
/*40351*/     OPC_MoveParent,
/*40352*/     OPC_MoveChild, 17,
/*40354*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40357*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*40358*/     OPC_CheckType, MVT::i32,
/*40360*/     OPC_MoveParent,
/*40361*/     OPC_MoveChild, 18,
/*40363*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40366*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*40367*/     OPC_CheckType, MVT::i32,
/*40369*/     OPC_MoveParent,
/*40370*/     OPC_CheckType, MVT::v4f32,
/*40372*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*40374*/     OPC_EmitConvertToTarget, 1,
/*40376*/     OPC_EmitConvertToTarget, 2,
/*40378*/     OPC_EmitConvertToTarget, 3,
/*40380*/     OPC_EmitConvertToTarget, 4,
/*40382*/     OPC_EmitConvertToTarget, 5,
/*40384*/     OPC_EmitConvertToTarget, 6,
/*40386*/     OPC_EmitConvertToTarget, 7,
/*40388*/     OPC_EmitConvertToTarget, 8,
/*40390*/     OPC_EmitConvertToTarget, 9,
/*40392*/     OPC_EmitConvertToTarget, 10,
/*40394*/     OPC_EmitConvertToTarget, 11,
/*40396*/     OPC_EmitConvertToTarget, 12,
/*40398*/     OPC_EmitConvertToTarget, 13,
/*40400*/     OPC_EmitConvertToTarget, 14,
/*40402*/     OPC_EmitConvertToTarget, 15,
/*40404*/     OPC_EmitConvertToTarget, 16,
/*40406*/     OPC_EmitConvertToTarget, 17,
/*40408*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_GET_GRADIENTS_H), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 8:i32, v4f32:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_GET_GRADIENTS_H:v4f32 R600_Reg128:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*40433*/   /*Scope*/ 94|128,1/*222*/, /*->40657*/
/*40435*/     OPC_CheckInteger, 9, 
/*40437*/     OPC_MoveParent,
/*40438*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*40439*/     OPC_CheckChild1Type, MVT::v4f32,
/*40441*/     OPC_RecordChild2, // #1 = $srcx
/*40442*/     OPC_MoveChild, 2,
/*40444*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40447*/     OPC_CheckType, MVT::i32,
/*40449*/     OPC_MoveParent,
/*40450*/     OPC_RecordChild3, // #2 = $srcy
/*40451*/     OPC_MoveChild, 3,
/*40453*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40456*/     OPC_CheckType, MVT::i32,
/*40458*/     OPC_MoveParent,
/*40459*/     OPC_RecordChild4, // #3 = $srcz
/*40460*/     OPC_MoveChild, 4,
/*40462*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40465*/     OPC_CheckType, MVT::i32,
/*40467*/     OPC_MoveParent,
/*40468*/     OPC_RecordChild5, // #4 = $srcw
/*40469*/     OPC_MoveChild, 5,
/*40471*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40474*/     OPC_CheckType, MVT::i32,
/*40476*/     OPC_MoveParent,
/*40477*/     OPC_RecordChild6, // #5 = $offsetx
/*40478*/     OPC_MoveChild, 6,
/*40480*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40483*/     OPC_CheckType, MVT::i32,
/*40485*/     OPC_MoveParent,
/*40486*/     OPC_RecordChild7, // #6 = $offsety
/*40487*/     OPC_MoveChild, 7,
/*40489*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40492*/     OPC_CheckType, MVT::i32,
/*40494*/     OPC_MoveParent,
/*40495*/     OPC_MoveChild, 8,
/*40497*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40500*/     OPC_RecordNode, // #7 = $offsetz
/*40501*/     OPC_CheckType, MVT::i32,
/*40503*/     OPC_MoveParent,
/*40504*/     OPC_MoveChild, 9,
/*40506*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40509*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*40510*/     OPC_CheckType, MVT::i32,
/*40512*/     OPC_MoveParent,
/*40513*/     OPC_MoveChild, 10,
/*40515*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40518*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*40519*/     OPC_CheckType, MVT::i32,
/*40521*/     OPC_MoveParent,
/*40522*/     OPC_MoveChild, 11,
/*40524*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40527*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*40528*/     OPC_CheckType, MVT::i32,
/*40530*/     OPC_MoveParent,
/*40531*/     OPC_MoveChild, 12,
/*40533*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40536*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*40537*/     OPC_CheckType, MVT::i32,
/*40539*/     OPC_MoveParent,
/*40540*/     OPC_MoveChild, 13,
/*40542*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40545*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*40546*/     OPC_CheckType, MVT::i32,
/*40548*/     OPC_MoveParent,
/*40549*/     OPC_MoveChild, 14,
/*40551*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40554*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*40555*/     OPC_CheckType, MVT::i32,
/*40557*/     OPC_MoveParent,
/*40558*/     OPC_MoveChild, 15,
/*40560*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40563*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*40564*/     OPC_CheckType, MVT::i32,
/*40566*/     OPC_MoveParent,
/*40567*/     OPC_MoveChild, 16,
/*40569*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40572*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*40573*/     OPC_CheckType, MVT::i32,
/*40575*/     OPC_MoveParent,
/*40576*/     OPC_MoveChild, 17,
/*40578*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40581*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*40582*/     OPC_CheckType, MVT::i32,
/*40584*/     OPC_MoveParent,
/*40585*/     OPC_MoveChild, 18,
/*40587*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40590*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*40591*/     OPC_CheckType, MVT::i32,
/*40593*/     OPC_MoveParent,
/*40594*/     OPC_CheckType, MVT::v4f32,
/*40596*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*40598*/     OPC_EmitConvertToTarget, 1,
/*40600*/     OPC_EmitConvertToTarget, 2,
/*40602*/     OPC_EmitConvertToTarget, 3,
/*40604*/     OPC_EmitConvertToTarget, 4,
/*40606*/     OPC_EmitConvertToTarget, 5,
/*40608*/     OPC_EmitConvertToTarget, 6,
/*40610*/     OPC_EmitConvertToTarget, 7,
/*40612*/     OPC_EmitConvertToTarget, 8,
/*40614*/     OPC_EmitConvertToTarget, 9,
/*40616*/     OPC_EmitConvertToTarget, 10,
/*40618*/     OPC_EmitConvertToTarget, 11,
/*40620*/     OPC_EmitConvertToTarget, 12,
/*40622*/     OPC_EmitConvertToTarget, 13,
/*40624*/     OPC_EmitConvertToTarget, 14,
/*40626*/     OPC_EmitConvertToTarget, 15,
/*40628*/     OPC_EmitConvertToTarget, 16,
/*40630*/     OPC_EmitConvertToTarget, 17,
/*40632*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_GET_GRADIENTS_V), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 9:i32, v4f32:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_GET_GRADIENTS_V:v4f32 R600_Reg128:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*40657*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 43|128,4/*555*/,  TARGET_VAL(ISD::STORE),// ->41217
/*40662*/   OPC_RecordMemRef,
/*40663*/   OPC_RecordNode,   // #0 = 'st' chained node
/*40664*/   OPC_RecordChild1, // #1 = $value
/*40665*/   OPC_Scope, 102|128,1/*230*/, /*->40898*/ // 4 children in Scope
/*40668*/     OPC_CheckChild1Type, MVT::i32,
/*40670*/     OPC_Scope, 40, /*->40712*/ // 2 children in Scope
/*40672*/       OPC_MoveChild, 2,
/*40674*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*40677*/       OPC_RecordChild0, // #2 = $ptr
/*40678*/       OPC_RecordChild1, // #3 = $offset
/*40679*/       OPC_CheckType, MVT::i64,
/*40681*/       OPC_MoveParent,
/*40682*/       OPC_CheckPredicate, 42, // Predicate_unindexedstore
/*40684*/       OPC_CheckPredicate, 43, // Predicate_store
/*40686*/       OPC_CheckPredicate, 44, // Predicate_global_store
/*40688*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40690*/       OPC_EmitMergeInputChains1_0,
/*40691*/       OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #4
/*40699*/       OPC_EmitInteger, MVT::i16, 0, 
/*40702*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_STORE_DWORD), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 4/*#Ops*/, 1, 4, 3, 5, 
                // Src: (st i32:i32:$value, (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 7
                // Dst: (BUFFER_STORE_DWORD ?:i32:$value, (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*40712*/     /*Scope*/ 55|128,1/*183*/, /*->40897*/
/*40714*/       OPC_RecordChild2, // #2 = $src0
/*40715*/       OPC_Scope, 101, /*->40818*/ // 2 children in Scope
/*40717*/         OPC_CheckChild2Type, MVT::i32,
/*40719*/         OPC_CheckPredicate, 42, // Predicate_unindexedstore
/*40721*/         OPC_CheckPredicate, 43, // Predicate_store
/*40723*/         OPC_Scope, 59, /*->40784*/ // 2 children in Scope
/*40725*/           OPC_CheckPredicate, 45, // Predicate_local_store
/*40727*/           OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*40729*/           OPC_EmitMergeInputChains1_0,
/*40730*/           OPC_EmitInteger, MVT::i32, 0, 
/*40733*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*40745*/           OPC_EmitInteger, MVT::i32, 0, 
/*40748*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*40760*/           OPC_EmitInteger, MVT::i32, 1, 
/*40763*/           OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*40766*/           OPC_EmitInteger, MVT::i32, 0, 
/*40769*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LDS_WRITE), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 9/*#Ops*/, 2, 3, 4, 1, 5, 6, 7, 8, 9, 
                    // Src: (st R600_Reg32:i32:$src1, R600_Reg32:i32:$src0)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_local_store>> - Complexity = 4
                    // Dst: (LDS_WRITE R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*40784*/         /*Scope*/ 32, /*->40817*/
/*40785*/           OPC_CheckPredicate, 44, // Predicate_global_store
/*40787*/           OPC_Scope, 11, /*->40800*/ // 2 children in Scope
/*40789*/             OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*40791*/             OPC_EmitMergeInputChains1_0,
/*40792*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RAT_STORE_DWORD32_cm), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                      // Src: (st i32:i32:$rw_gpr, i32:i32:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 4
                      // Dst: (RAT_STORE_DWORD32_cm i32:i32:$rw_gpr, i32:i32:$index_gpr)
/*40800*/           /*Scope*/ 15, /*->40816*/
/*40801*/             OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*40803*/             OPC_EmitMergeInputChains1_0,
/*40804*/             OPC_EmitInteger, MVT::i32, 0, 
/*40807*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RAT_WRITE_CACHELESS_32_eg), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (st i32:i32:$rw_gpr, i32:i32:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 4
                      // Dst: (RAT_WRITE_CACHELESS_32_eg i32:i32:$rw_gpr, i32:i32:$index_gpr)
/*40816*/           0, /*End of Scope*/
/*40817*/         0, /*End of Scope*/
/*40818*/       /*Scope*/ 77, /*->40896*/
/*40819*/         OPC_CheckChild2Type, MVT::i64,
/*40821*/         OPC_CheckPredicate, 42, // Predicate_unindexedstore
/*40823*/         OPC_CheckPredicate, 43, // Predicate_store
/*40825*/         OPC_Scope, 38, /*->40865*/ // 2 children in Scope
/*40827*/           OPC_CheckPredicate, 45, // Predicate_local_store
/*40829*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40831*/           OPC_EmitMergeInputChains1_0,
/*40832*/           OPC_EmitInteger, MVT::i1, 0, 
/*40835*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*40838*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4,  // Results = #5
/*40847*/           OPC_EmitInteger, MVT::i8, 0, 
/*40850*/           OPC_EmitInteger, MVT::i8, 0, 
/*40853*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::DS_WRITE_B32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 6/*#Ops*/, 3, 5, 1, 1, 6, 7, 
                    // Src: (st i32:i32:$src1, i64:i64:$src0)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_local_store>> - Complexity = 4
                    // Dst: (DS_WRITE_B32 0:i1, (EXTRACT_SUBREG:i32 ?:i64:$src0, sub0:i32), ?:i32:$src1, ?:i32:$src1, 0:i8, 0:i8)
/*40865*/         /*Scope*/ 29, /*->40895*/
/*40866*/           OPC_CheckPredicate, 44, // Predicate_global_store
/*40868*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40870*/           OPC_EmitMergeInputChains1_0,
/*40871*/           OPC_EmitInteger, MVT::i64, 0, 
/*40874*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*40882*/           OPC_EmitInteger, MVT::i16, 0, 
/*40885*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_STORE_DWORD), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 4, 2, 5, 
                    // Src: (st i32:i32:$value, i64:i64:$ptr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 4
                    // Dst: (BUFFER_STORE_DWORD ?:i32:$value, (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
/*40895*/         0, /*End of Scope*/
/*40896*/       0, /*End of Scope*/
/*40897*/     0, /*End of Scope*/
/*40898*/   /*Scope*/ 82, /*->40981*/
/*40899*/     OPC_CheckChild1Type, MVT::i64,
/*40901*/     OPC_Scope, 40, /*->40943*/ // 2 children in Scope
/*40903*/       OPC_MoveChild, 2,
/*40905*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*40908*/       OPC_RecordChild0, // #2 = $ptr
/*40909*/       OPC_RecordChild1, // #3 = $offset
/*40910*/       OPC_CheckType, MVT::i64,
/*40912*/       OPC_MoveParent,
/*40913*/       OPC_CheckPredicate, 42, // Predicate_unindexedstore
/*40915*/       OPC_CheckPredicate, 43, // Predicate_store
/*40917*/       OPC_CheckPredicate, 44, // Predicate_global_store
/*40919*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40921*/       OPC_EmitMergeInputChains1_0,
/*40922*/       OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #4
/*40930*/       OPC_EmitInteger, MVT::i16, 0, 
/*40933*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_STORE_DWORDX2), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 4/*#Ops*/, 1, 4, 3, 5, 
                // Src: (st i64:i64:$value, (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 7
                // Dst: (BUFFER_STORE_DWORDX2 ?:i64:$value, (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*40943*/     /*Scope*/ 36, /*->40980*/
/*40944*/       OPC_RecordChild2, // #2 = $ptr
/*40945*/       OPC_CheckChild2Type, MVT::i64,
/*40947*/       OPC_CheckPredicate, 42, // Predicate_unindexedstore
/*40949*/       OPC_CheckPredicate, 43, // Predicate_store
/*40951*/       OPC_CheckPredicate, 44, // Predicate_global_store
/*40953*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40955*/       OPC_EmitMergeInputChains1_0,
/*40956*/       OPC_EmitInteger, MVT::i64, 0, 
/*40959*/       OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*40967*/       OPC_EmitInteger, MVT::i16, 0, 
/*40970*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_STORE_DWORDX2), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 4/*#Ops*/, 1, 4, 2, 5, 
                // Src: (st i64:i64:$value, i64:i64:$ptr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 4
                // Dst: (BUFFER_STORE_DWORDX2 ?:i64:$value, (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
/*40980*/     0, /*End of Scope*/
/*40981*/   /*Scope*/ 124, /*->41106*/
/*40982*/     OPC_CheckChild1Type, MVT::v2i32,
/*40984*/     OPC_Scope, 40, /*->41026*/ // 2 children in Scope
/*40986*/       OPC_MoveChild, 2,
/*40988*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*40991*/       OPC_RecordChild0, // #2 = $ptr
/*40992*/       OPC_RecordChild1, // #3 = $offset
/*40993*/       OPC_CheckType, MVT::i64,
/*40995*/       OPC_MoveParent,
/*40996*/       OPC_CheckPredicate, 42, // Predicate_unindexedstore
/*40998*/       OPC_CheckPredicate, 43, // Predicate_store
/*41000*/       OPC_CheckPredicate, 44, // Predicate_global_store
/*41002*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*41004*/       OPC_EmitMergeInputChains1_0,
/*41005*/       OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #4
/*41013*/       OPC_EmitInteger, MVT::i16, 0, 
/*41016*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_STORE_DWORDX2), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 4/*#Ops*/, 1, 4, 3, 5, 
                // Src: (st v2i32:v2i32:$value, (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 7
                // Dst: (BUFFER_STORE_DWORDX2 ?:v2i32:$value, (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*41026*/     /*Scope*/ 78, /*->41105*/
/*41027*/       OPC_RecordChild2, // #2 = $index_gpr
/*41028*/       OPC_Scope, 38, /*->41068*/ // 2 children in Scope
/*41030*/         OPC_CheckChild2Type, MVT::i32,
/*41032*/         OPC_CheckPredicate, 42, // Predicate_unindexedstore
/*41034*/         OPC_CheckPredicate, 43, // Predicate_store
/*41036*/         OPC_CheckPredicate, 44, // Predicate_global_store
/*41038*/         OPC_Scope, 11, /*->41051*/ // 2 children in Scope
/*41040*/           OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*41042*/           OPC_EmitMergeInputChains1_0,
/*41043*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RAT_STORE_DWORD64_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (st v2i32:v2i32:$rw_gpr, i32:i32:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 4
                    // Dst: (RAT_STORE_DWORD64_cm v2i32:v2i32:$rw_gpr, i32:i32:$index_gpr)
/*41051*/         /*Scope*/ 15, /*->41067*/
/*41052*/           OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*41054*/           OPC_EmitMergeInputChains1_0,
/*41055*/           OPC_EmitInteger, MVT::i32, 0, 
/*41058*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RAT_WRITE_CACHELESS_64_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (st v2i32:v2i32:$rw_gpr, i32:i32:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 4
                    // Dst: (RAT_WRITE_CACHELESS_64_eg v2i32:v2i32:$rw_gpr, i32:i32:$index_gpr)
/*41067*/         0, /*End of Scope*/
/*41068*/       /*Scope*/ 35, /*->41104*/
/*41069*/         OPC_CheckChild2Type, MVT::i64,
/*41071*/         OPC_CheckPredicate, 42, // Predicate_unindexedstore
/*41073*/         OPC_CheckPredicate, 43, // Predicate_store
/*41075*/         OPC_CheckPredicate, 44, // Predicate_global_store
/*41077*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*41079*/         OPC_EmitMergeInputChains1_0,
/*41080*/         OPC_EmitInteger, MVT::i64, 0, 
/*41083*/         OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*41091*/         OPC_EmitInteger, MVT::i16, 0, 
/*41094*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_STORE_DWORDX2), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 4, 2, 5, 
                  // Src: (st v2i32:v2i32:$value, i64:i64:$ptr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 4
                  // Dst: (BUFFER_STORE_DWORDX2 ?:v2i32:$value, (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
/*41104*/       0, /*End of Scope*/
/*41105*/     0, /*End of Scope*/
/*41106*/   /*Scope*/ 109, /*->41216*/
/*41107*/     OPC_CheckChild1Type, MVT::v4i32,
/*41109*/     OPC_Scope, 40, /*->41151*/ // 2 children in Scope
/*41111*/       OPC_MoveChild, 2,
/*41113*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*41116*/       OPC_RecordChild0, // #2 = $ptr
/*41117*/       OPC_RecordChild1, // #3 = $offset
/*41118*/       OPC_CheckType, MVT::i64,
/*41120*/       OPC_MoveParent,
/*41121*/       OPC_CheckPredicate, 42, // Predicate_unindexedstore
/*41123*/       OPC_CheckPredicate, 43, // Predicate_store
/*41125*/       OPC_CheckPredicate, 44, // Predicate_global_store
/*41127*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*41129*/       OPC_EmitMergeInputChains1_0,
/*41130*/       OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #4
/*41138*/       OPC_EmitInteger, MVT::i16, 0, 
/*41141*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_STORE_DWORDX4), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 4/*#Ops*/, 1, 4, 3, 5, 
                // Src: (st v4i32:v4i32:$value, (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 7
                // Dst: (BUFFER_STORE_DWORDX4 ?:v4i32:$value, (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*41151*/     /*Scope*/ 63, /*->41215*/
/*41152*/       OPC_RecordChild2, // #2 = $index_gpr
/*41153*/       OPC_Scope, 23, /*->41178*/ // 2 children in Scope
/*41155*/         OPC_CheckChild2Type, MVT::i32,
/*41157*/         OPC_CheckPredicate, 42, // Predicate_unindexedstore
/*41159*/         OPC_CheckPredicate, 43, // Predicate_store
/*41161*/         OPC_CheckPredicate, 44, // Predicate_global_store
/*41163*/         OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*41165*/         OPC_EmitMergeInputChains1_0,
/*41166*/         OPC_EmitInteger, MVT::i32, 0, 
/*41169*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RAT_WRITE_CACHELESS_128_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (st v4i32:v4i32:$rw_gpr, i32:i32:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 4
                  // Dst: (RAT_WRITE_CACHELESS_128_eg v4i32:v4i32:$rw_gpr, i32:i32:$index_gpr)
/*41178*/       /*Scope*/ 35, /*->41214*/
/*41179*/         OPC_CheckChild2Type, MVT::i64,
/*41181*/         OPC_CheckPredicate, 42, // Predicate_unindexedstore
/*41183*/         OPC_CheckPredicate, 43, // Predicate_store
/*41185*/         OPC_CheckPredicate, 44, // Predicate_global_store
/*41187*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*41189*/         OPC_EmitMergeInputChains1_0,
/*41190*/         OPC_EmitInteger, MVT::i64, 0, 
/*41193*/         OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*41201*/         OPC_EmitInteger, MVT::i16, 0, 
/*41204*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_STORE_DWORDX4), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 4, 2, 5, 
                  // Src: (st v4i32:v4i32:$value, i64:i64:$ptr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 4
                  // Dst: (BUFFER_STORE_DWORDX4 ?:v4i32:$value, (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
/*41214*/       0, /*End of Scope*/
/*41215*/     0, /*End of Scope*/
/*41216*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 24,  TARGET_VAL(AMDGPUISD::RET_FLAG),// ->41244
/*41220*/   OPC_RecordNode,   // #0 = 'IL_retflag' chained node
/*41221*/   OPC_CaptureGlueInput,
/*41222*/   OPC_Scope, 9, /*->41233*/ // 2 children in Scope
/*41224*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*41226*/     OPC_EmitMergeInputChains1_0,
/*41227*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_ENDPGM), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (IL_retflag) - Complexity = 3
              // Dst: (S_ENDPGM)
/*41233*/   /*Scope*/ 9, /*->41243*/
/*41234*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*41236*/     OPC_EmitMergeInputChains1_0,
/*41237*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RETURN), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (IL_retflag) - Complexity = 3
              // Dst: (RETURN)
/*41243*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::BR),// ->41279
/*41247*/   OPC_RecordNode,   // #0 = 'br' chained node
/*41248*/   OPC_RecordChild1, // #1 = $target
/*41249*/   OPC_MoveChild, 1,
/*41251*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*41254*/   OPC_MoveParent,
/*41255*/   OPC_Scope, 10, /*->41267*/ // 2 children in Scope
/*41257*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*41259*/     OPC_EmitMergeInputChains1_0,
/*41260*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_BRANCH), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$target) - Complexity = 3
              // Dst: (S_BRANCH (bb:Other):$target)
/*41267*/   /*Scope*/ 10, /*->41278*/
/*41268*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*41270*/     OPC_EmitMergeInputChains1_0,
/*41271*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BRANCH), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$target) - Complexity = 3
              // Dst: (BRANCH (bb:Other):$target)
/*41278*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 39,  TARGET_VAL(AMDGPUISD::BRANCH_COND),// ->41321
/*41282*/   OPC_RecordNode,   // #0 = 'IL_brcond' chained node
/*41283*/   OPC_RecordChild1, // #1 = $target
/*41284*/   OPC_MoveChild, 1,
/*41286*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*41289*/   OPC_MoveParent,
/*41290*/   OPC_RecordChild2, // #2 = $src0
/*41291*/   OPC_Scope, 13, /*->41306*/ // 2 children in Scope
/*41293*/     OPC_CheckChild2Type, MVT::i32,
/*41295*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*41297*/     OPC_EmitMergeInputChains1_0,
/*41298*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BRANCH_COND_i32), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (IL_brcond (bb:Other):$target, GPRI32:i32:$src0) - Complexity = 3
              // Dst: (BRANCH_COND_i32 (bb:Other):$target, GPRI32:i32:$src0)
/*41306*/   /*Scope*/ 13, /*->41320*/
/*41307*/     OPC_CheckChild2Type, MVT::f32,
/*41309*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*41311*/     OPC_EmitMergeInputChains1_0,
/*41312*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BRANCH_COND_f32), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (IL_brcond (bb:Other):$target, GPRF32:f32:$src0) - Complexity = 3
              // Dst: (BRANCH_COND_f32 (bb:Other):$target, GPRF32:f32:$src0)
/*41320*/   0, /*End of Scope*/
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 41323 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 269
  // #OPC_RecordNode                     = 141
  // #OPC_RecordChild                    = 456
  // #OPC_RecordMemRef                   = 2
  // #OPC_CaptureGlueInput               = 1
  // #OPC_MoveChild                      = 427
  // #OPC_MoveParent                     = 763
  // #OPC_CheckSame                      = 84
  // #OPC_CheckPatternPredicate          = 714
  // #OPC_CheckPredicate                 = 285
  // #OPC_CheckOpcode                    = 315
  // #OPC_SwitchOpcode                   = 1
  // #OPC_CheckType                      = 500
  // #OPC_SwitchType                     = 49
  // #OPC_CheckChildType                 = 130
  // #OPC_CheckInteger                   = 166
  // #OPC_CheckCondCode                  = 19
  // #OPC_CheckValueType                 = 0
  // #OPC_CheckComplexPat                = 49
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 4155
  // #OPC_EmitStringInteger              = 253
  // #OPC_EmitRegister                   = 217
  // #OPC_EmitConvertToTarget            = 253
  // #OPC_EmitMergeInputChains           = 131
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 268
  // #OPC_EmitNodeXForm                  = 20
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 17
  // #OPC_MorphNodeTo                    = 707

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

virtual bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS);
  case 1: return (Subtarget.getGeneration() <= AMDGPUSubtarget::R700);
  case 2: return (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS);
  case 3: return (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS);
  case 4: return (Subtarget.hasCaymanISA());
  case 5: return (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA());
  case 6: return (Subtarget.getGeneration() == AMDGPUSubtarget::R700);
  }
}

virtual bool CheckNodePredicate(SDNode *Node,
                                unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { // Predicate_legalshift32
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return Imm >=0 && Imm < 32;
  }
  case 1: { // Predicate_bfemask
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
return isMask_32(N->getZExtValue());
  }
  case 2: { // Predicate_COND_EQ
    CondCodeSDNode*N = cast<CondCodeSDNode>(Node);
switch(N->get()){{default: return false;
                     case ISD::SETOEQ: case ISD::SETUEQ:
                     case ISD::SETEQ: return true;}}
  }
  case 3: { // Predicate_COND_GT
    CondCodeSDNode*N = cast<CondCodeSDNode>(Node);
switch(N->get()){{default: return false;
                     case ISD::SETOGT: case ISD::SETUGT:
                     case ISD::SETGT: return true;}}
  }
  case 4: { // Predicate_COND_GE
    CondCodeSDNode*N = cast<CondCodeSDNode>(Node);
switch(N->get()){{default: return false;
                     case ISD::SETOGE: case ISD::SETUGE:
                     case ISD::SETGE: return true;}}
  }
  case 5: { // Predicate_COND_NE
    CondCodeSDNode*N = cast<CondCodeSDNode>(Node);
switch(N->get()){{default: return false;
                     case ISD::SETONE: case ISD::SETUNE:
                     case ISD::SETNE: return true;}}
  }
  case 6: { // Predicate_COND_LT
    CondCodeSDNode*N = cast<CondCodeSDNode>(Node);
switch(N->get()){{default: return false;
                     case ISD::SETOLT: case ISD::SETULT:
                     case ISD::SETLT: return true;}}
  }
  case 7: { // Predicate_COND_LE
    CondCodeSDNode*N = cast<CondCodeSDNode>(Node);
switch(N->get()){{default: return false;
                     case ISD::SETOLE: case ISD::SETULE:
                     case ISD::SETLE: return true;}}
  }
  case 8: { // Predicate_FP_ONE
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);
return N->isExactlyValue(1.0);
  }
  case 9: { // Predicate_FP_ZERO
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);
return N->getValueAPF().isZero();
  }
  case 10: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 11: { // Predicate_az_extload
    SDNode *N = Node;

  LoadSDNode *L = cast<LoadSDNode>(N);
  return L->getExtensionType() == ISD::ZEXTLOAD ||
         L->getExtensionType() == ISD::EXTLOAD;

  }
  case 12: { // Predicate_az_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 13: { // Predicate_load_param_exti8
    SDNode *N = Node;
 return isConstantLoad(dyn_cast<LoadSDNode>(N), 0); 
  }
  case 14: { // Predicate_az_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 15: { // Predicate_load_param_exti16
    SDNode *N = Node;
 return isConstantLoad(dyn_cast<LoadSDNode>(N), 0); 
  }
  case 16: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 17: { // Predicate_load_param
    SDNode *N = Node;
 return isConstantLoad(dyn_cast<LoadSDNode>(N), 0); 
  }
  case 18: { // Predicate_az_extloadi8_global
    SDNode *N = Node;

    return isGlobalLoad(dyn_cast<LoadSDNode>(N));

  }
  case 19: { // Predicate_az_extloadi16_global
    SDNode *N = Node;

    return isGlobalLoad(dyn_cast<LoadSDNode>(N));

  }
  case 20: { // Predicate_global_load
    SDNode *N = Node;

    return isGlobalLoad(dyn_cast<LoadSDNode>(N));

  }
  case 21: { // Predicate_IMM8bitDWORD
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();

    return (Imm & ~0x3FC) == 0;
  
  }
  case 22: { // Predicate_constant_load
    SDNode *N = Node;

    return isConstantLoad(dyn_cast<LoadSDNode>(N), -1);

  }
  case 23: { // Predicate_IMM12bit
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
return isUInt<12>(N->getZExtValue());
  }
  case 24: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 25: { // Predicate_sextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 26: { // Predicate_sextloadi8_global
    SDNode *N = Node;

    return isGlobalLoad(dyn_cast<LoadSDNode>(N));

  }
  case 27: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 28: { // Predicate_sextloadi16_global
    SDNode *N = Node;

    return isGlobalLoad(dyn_cast<LoadSDNode>(N));

  }
  case 29: { // Predicate_az_extloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 30: { // Predicate_az_extloadi32_global
    SDNode *N = Node;

  return isGlobalLoad(dyn_cast<LoadSDNode>(N));

  }
  case 31: { // Predicate_sextloadi8_constant
    SDNode *N = Node;

    return isConstantLoad(dyn_cast<LoadSDNode>(N), -1);

  }
  case 32: { // Predicate_az_extloadi8_constant
    SDNode *N = Node;

    return isConstantLoad(dyn_cast<LoadSDNode>(N), -1);

  }
  case 33: { // Predicate_sextloadi16_constant
    SDNode *N = Node;

    return isConstantLoad(dyn_cast<LoadSDNode>(N), -1);

  }
  case 34: { // Predicate_az_extloadi16_constant
    SDNode *N = Node;

    return isConstantLoad(dyn_cast<LoadSDNode>(N), -1);

  }
  case 35: { // Predicate_az_extloadi32_constant
    SDNode *N = Node;

  return isConstantLoad(dyn_cast<LoadSDNode>(N), -1);

  }
  case 36: { // Predicate_local_load
    SDNode *N = Node;

    return isLocalLoad(dyn_cast<LoadSDNode>(N));

  }
  case 37: { // Predicate_TEX_ARRAY
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
uint32_t TType = (uint32_t)N->getZExtValue();
    return TType == 9 || TType == 10 || TType == 15 || TType == 16;
  
  }
  case 38: { // Predicate_TEX_SHADOW
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
uint32_t TType = (uint32_t)N->getZExtValue();
    return (TType >= 6 && TType <= 8) || (TType >= 11 && TType <= 13);
  
  }
  case 39: { // Predicate_TEX_RECT
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
uint32_t TType = (uint32_t)N->getZExtValue();
    return TType == 5;
  
  }
  case 40: { // Predicate_TEX_SHADOW_ARRAY
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
uint32_t TType = (uint32_t)N->getZExtValue();
    return TType == 11 || TType == 12 || TType == 17;
  
  }
  case 41: { // Predicate_anonymous.val.379
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return
    (*(const SITargetLowering *)getTargetLowering()).analyzeImmediate(N) == 0;

  }
  case 42: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 43: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 44: { // Predicate_global_store
    SDNode *N = Node;

        return isGlobalStore(dyn_cast<StoreSDNode>(N));

  }
  case 45: { // Predicate_local_store
    SDNode *N = Node;

    return isLocalStore(dyn_cast<StoreSDNode>(N));

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
    Result.resize(NextRes+1);
    return SelectU24(N, Result[NextRes+0].first);
  case 1:
    Result.resize(NextRes+1);
    return SelectI24(N, Result[NextRes+0].first);
  case 2:
    Result.resize(NextRes+2);
    return SelectADDRIndirect(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 3:
    Result.resize(NextRes+2);
    return SelectADDRVTX_READ(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 4:
    Result.resize(NextRes+1);
    return SelectGlobalValueConstantOffset(N, Result[NextRes+0].first);
  case 5:
    Result.resize(NextRes+2);
    return SelectGlobalValueVariableOffset(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}

virtual SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // anonymous.val.378
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

    return CurDAG->getTargetConstant(
      N->getZExtValue() >> 2, MVT::i32);
  
  }
  case 1: {  // as_i16imm
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(N->getSExtValue(), MVT::i16);

  }
  case 2: {  // LO32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(N->getZExtValue() & 0xffffffff, MVT::i32);

  }
  case 3: {  // HI32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(N->getZExtValue() >> 32, MVT::i32);

  }
  case 4: {  // LO32f
    ConstantFPSDNode *N = cast<ConstantFPSDNode>(V.getNode());

  APInt V = N->getValueAPF().bitcastToAPInt().trunc(32);
  return CurDAG->getTargetConstantFP(APFloat(APFloat::IEEEsingle, V), MVT::f32);

  }
  case 5: {  // HI32f
    ConstantFPSDNode *N = cast<ConstantFPSDNode>(V.getNode());

  APInt V = N->getValueAPF().bitcastToAPInt().lshr(32).trunc(32);
  return CurDAG->getTargetConstantFP(APFloat(APFloat::IEEEsingle, V), MVT::f32);

  }
  }
}

