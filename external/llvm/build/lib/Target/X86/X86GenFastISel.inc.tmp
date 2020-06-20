/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*"Fast" Instruction Selector for the X86 target                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


// FastEmit Immediate Predicate functions.
static bool Predicate_i64immSExt32(int64_t Imm) {
 return Imm == (int32_t)Imm; 
}


// FastEmit functions for ISD::ANY_EXTEND.

unsigned FastEmit_ISD_ANY_EXTEND_MVT_i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_r(X86::MOVZX32rr8, &X86::GR32RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_ANY_EXTEND_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i8: return FastEmit_ISD_ANY_EXTEND_MVT_i8_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::BITCAST.

unsigned FastEmit_ISD_BITCAST_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VMOVDI2SSrr, &X86::FR32RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::MOVDI2SSrr, &X86::FR32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_BITCAST_MVT_i64_MVT_f64_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VMOV64toSDrr, &X86::FR64RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::MOV64toSDrr, &X86::FR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_BITCAST_MVT_i64_MVT_x86mmx_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasMMX())) {
    return FastEmitInst_r(X86::MMX_MOVD64rrv164, &X86::VR64RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE2())) {
    return FastEmitInst_r(X86::MMX_MOVD64to64rr, &X86::VR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_BITCAST_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::f64: return FastEmit_ISD_BITCAST_MVT_i64_MVT_f64_r(Op0, Op0IsKill);
  case MVT::x86mmx: return FastEmit_ISD_BITCAST_MVT_i64_MVT_x86mmx_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_ISD_BITCAST_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VMOVSS2DIrr, &X86::GR32RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::MOVSS2DIrr, &X86::GR32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_BITCAST_MVT_f64_MVT_i64_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VMOVSDto64rr, &X86::GR64RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::MOVSDto64rr, &X86::GR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_BITCAST_MVT_f64_MVT_x86mmx_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasSSE2())) {
    return FastEmitInst_r(X86::MMX_MOVFR642Qrr, &X86::VR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_BITCAST_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::i64: return FastEmit_ISD_BITCAST_MVT_f64_MVT_i64_r(Op0, Op0IsKill);
  case MVT::x86mmx: return FastEmit_ISD_BITCAST_MVT_f64_MVT_x86mmx_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_ISD_BITCAST_MVT_x86mmx_MVT_i64_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasMMX())) {
    return FastEmitInst_r(X86::MMX_MOVD64from64rr, &X86::GR64RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE2())) {
    return FastEmitInst_r(X86::MMX_MOVD64from64rr, &X86::GR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_BITCAST_MVT_x86mmx_MVT_f64_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasSSE2())) {
    return FastEmitInst_r(X86::MMX_MOVQ2FR64rr, &X86::FR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_BITCAST_MVT_x86mmx_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::i64: return FastEmit_ISD_BITCAST_MVT_x86mmx_MVT_i64_r(Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_BITCAST_MVT_x86mmx_MVT_f64_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_ISD_BITCAST_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_BITCAST_MVT_i32_r(RetVT, Op0, Op0IsKill);
  case MVT::i64: return FastEmit_ISD_BITCAST_MVT_i64_r(RetVT, Op0, Op0IsKill);
  case MVT::f32: return FastEmit_ISD_BITCAST_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_BITCAST_MVT_f64_r(RetVT, Op0, Op0IsKill);
  case MVT::x86mmx: return FastEmit_ISD_BITCAST_MVT_x86mmx_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::BRIND.

unsigned FastEmit_ISD_BRIND_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  if ((!Subtarget->is64Bit())) {
    return FastEmitInst_r(X86::JMP32r, &X86::GR32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_BRIND_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  if ((Subtarget->is64Bit())) {
    return FastEmitInst_r(X86::JMP64r, &X86::GR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_BRIND_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_BRIND_MVT_i32_r(RetVT, Op0, Op0IsKill);
  case MVT::i64: return FastEmit_ISD_BRIND_MVT_i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::BSWAP.

unsigned FastEmit_ISD_BSWAP_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_r(X86::BSWAP32r, &X86::GR32RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_BSWAP_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_r(X86::BSWAP64r, &X86::GR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_BSWAP_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_BSWAP_MVT_i32_r(RetVT, Op0, Op0IsKill);
  case MVT::i64: return FastEmit_ISD_BSWAP_MVT_i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::CTLZ.

unsigned FastEmit_ISD_CTLZ_MVT_i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i16)
    return 0;
  if ((Subtarget->hasLZCNT())) {
    return FastEmitInst_r(X86::LZCNT16rr, &X86::GR16RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_CTLZ_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasLZCNT())) {
    return FastEmitInst_r(X86::LZCNT32rr, &X86::GR32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_CTLZ_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  if ((Subtarget->hasLZCNT())) {
    return FastEmitInst_r(X86::LZCNT64rr, &X86::GR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_CTLZ_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i16: return FastEmit_ISD_CTLZ_MVT_i16_r(RetVT, Op0, Op0IsKill);
  case MVT::i32: return FastEmit_ISD_CTLZ_MVT_i32_r(RetVT, Op0, Op0IsKill);
  case MVT::i64: return FastEmit_ISD_CTLZ_MVT_i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::CTPOP.

unsigned FastEmit_ISD_CTPOP_MVT_i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i16)
    return 0;
  if ((Subtarget->hasPOPCNT())) {
    return FastEmitInst_r(X86::POPCNT16rr, &X86::GR16RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_CTPOP_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasPOPCNT())) {
    return FastEmitInst_r(X86::POPCNT32rr, &X86::GR32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_CTPOP_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  if ((Subtarget->hasPOPCNT())) {
    return FastEmitInst_r(X86::POPCNT64rr, &X86::GR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_CTPOP_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i16: return FastEmit_ISD_CTPOP_MVT_i16_r(RetVT, Op0, Op0IsKill);
  case MVT::i32: return FastEmit_ISD_CTPOP_MVT_i32_r(RetVT, Op0, Op0IsKill);
  case MVT::i64: return FastEmit_ISD_CTPOP_MVT_i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::CTTZ.

unsigned FastEmit_ISD_CTTZ_MVT_i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i16)
    return 0;
  if ((Subtarget->hasBMI())) {
    return FastEmitInst_r(X86::TZCNT16rr, &X86::GR16RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_CTTZ_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasBMI())) {
    return FastEmitInst_r(X86::TZCNT32rr, &X86::GR32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_CTTZ_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  if ((Subtarget->hasBMI())) {
    return FastEmitInst_r(X86::TZCNT64rr, &X86::GR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_CTTZ_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i16: return FastEmit_ISD_CTTZ_MVT_i16_r(RetVT, Op0, Op0IsKill);
  case MVT::i32: return FastEmit_ISD_CTTZ_MVT_i32_r(RetVT, Op0, Op0IsKill);
  case MVT::i64: return FastEmit_ISD_CTTZ_MVT_i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::CTTZ_ZERO_UNDEF.

unsigned FastEmit_ISD_CTTZ_ZERO_UNDEF_MVT_i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i16)
    return 0;
  return FastEmitInst_r(X86::BSF16rr, &X86::GR16RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_CTTZ_ZERO_UNDEF_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_r(X86::BSF32rr, &X86::GR32RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_CTTZ_ZERO_UNDEF_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_r(X86::BSF64rr, &X86::GR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_CTTZ_ZERO_UNDEF_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i16: return FastEmit_ISD_CTTZ_ZERO_UNDEF_MVT_i16_r(RetVT, Op0, Op0IsKill);
  case MVT::i32: return FastEmit_ISD_CTTZ_ZERO_UNDEF_MVT_i32_r(RetVT, Op0, Op0IsKill);
  case MVT::i64: return FastEmit_ISD_CTTZ_ZERO_UNDEF_MVT_i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FABS.

unsigned FastEmit_ISD_FABS_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((!Subtarget->hasSSE1())) {
    return FastEmitInst_r(X86::ABS_Fp32, &X86::RFP32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FABS_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((!Subtarget->hasSSE2())) {
    return FastEmitInst_r(X86::ABS_Fp64, &X86::RFP64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FABS_MVT_f80_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f80)
    return 0;
  return FastEmitInst_r(X86::ABS_Fp80, &X86::RFP80RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FABS_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FABS_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_FABS_MVT_f64_r(RetVT, Op0, Op0IsKill);
  case MVT::f80: return FastEmit_ISD_FABS_MVT_f80_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FCOS.

unsigned FastEmit_ISD_FCOS_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((!Subtarget->hasSSE1())) {
    return FastEmitInst_r(X86::COS_Fp32, &X86::RFP32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FCOS_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((!Subtarget->hasSSE2())) {
    return FastEmitInst_r(X86::COS_Fp64, &X86::RFP64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FCOS_MVT_f80_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f80)
    return 0;
  return FastEmitInst_r(X86::COS_Fp80, &X86::RFP80RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FCOS_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FCOS_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_FCOS_MVT_f64_r(RetVT, Op0, Op0IsKill);
  case MVT::f80: return FastEmit_ISD_FCOS_MVT_f80_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FNEG.

unsigned FastEmit_ISD_FNEG_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((!Subtarget->hasSSE1())) {
    return FastEmitInst_r(X86::CHS_Fp32, &X86::RFP32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FNEG_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((!Subtarget->hasSSE2())) {
    return FastEmitInst_r(X86::CHS_Fp64, &X86::RFP64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FNEG_MVT_f80_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f80)
    return 0;
  return FastEmitInst_r(X86::CHS_Fp80, &X86::RFP80RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FNEG_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FNEG_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_FNEG_MVT_f64_r(RetVT, Op0, Op0IsKill);
  case MVT::f80: return FastEmit_ISD_FNEG_MVT_f80_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FP_EXTEND.

unsigned FastEmit_ISD_FP_EXTEND_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::CVTSS2SDrr, &X86::FR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FP_EXTEND_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VCVTPS2PDYrr, &X86::VR256RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FP_EXTEND_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FP_EXTEND_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_ISD_FP_EXTEND_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FP_ROUND.

unsigned FastEmit_ISD_FP_ROUND_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::CVTSD2SSrr, &X86::FR32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FP_ROUND_MVT_v4f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VCVTPD2PSYrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FP_ROUND_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f64: return FastEmit_ISD_FP_ROUND_MVT_f64_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f64: return FastEmit_ISD_FP_ROUND_MVT_v4f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FP_TO_SINT.

unsigned FastEmit_ISD_FP_TO_SINT_MVT_f32_MVT_i32_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VCVTTSS2SIrr, &X86::GR32RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::CVTTSS2SIrr, &X86::GR32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FP_TO_SINT_MVT_f32_MVT_i64_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VCVTTSS2SI64rr, &X86::GR64RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::CVTTSS2SI64rr, &X86::GR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FP_TO_SINT_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_FP_TO_SINT_MVT_f32_MVT_i32_r(Op0, Op0IsKill);
  case MVT::i64: return FastEmit_ISD_FP_TO_SINT_MVT_f32_MVT_i64_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_ISD_FP_TO_SINT_MVT_f64_MVT_i32_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VCVTTSD2SIrr, &X86::GR32RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::CVTTSD2SIrr, &X86::GR32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FP_TO_SINT_MVT_f64_MVT_i64_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VCVTTSD2SI64rr, &X86::GR64RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::CVTTSD2SI64rr, &X86::GR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FP_TO_SINT_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_FP_TO_SINT_MVT_f64_MVT_i32_r(Op0, Op0IsKill);
  case MVT::i64: return FastEmit_ISD_FP_TO_SINT_MVT_f64_MVT_i64_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_ISD_FP_TO_SINT_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VCVTTPS2DQrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::CVTTPS2DQrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FP_TO_SINT_MVT_v8f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VCVTTPS2DQYrr, &X86::VR256RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FP_TO_SINT_MVT_v4f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VCVTTPD2DQYrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FP_TO_SINT_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FP_TO_SINT_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_FP_TO_SINT_MVT_f64_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_ISD_FP_TO_SINT_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v8f32: return FastEmit_ISD_FP_TO_SINT_MVT_v8f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f64: return FastEmit_ISD_FP_TO_SINT_MVT_v4f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FSIN.

unsigned FastEmit_ISD_FSIN_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((!Subtarget->hasSSE1())) {
    return FastEmitInst_r(X86::SIN_Fp32, &X86::RFP32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FSIN_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((!Subtarget->hasSSE2())) {
    return FastEmitInst_r(X86::SIN_Fp64, &X86::RFP64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FSIN_MVT_f80_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f80)
    return 0;
  return FastEmitInst_r(X86::SIN_Fp80, &X86::RFP80RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FSIN_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FSIN_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_FSIN_MVT_f64_r(RetVT, Op0, Op0IsKill);
  case MVT::f80: return FastEmit_ISD_FSIN_MVT_f80_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FSQRT.

unsigned FastEmit_ISD_FSQRT_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((!Subtarget->hasSSE1())) {
    return FastEmitInst_r(X86::SQRT_Fp32, &X86::RFP32RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::SQRTSSr, &X86::FR32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FSQRT_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((!Subtarget->hasSSE2())) {
    return FastEmitInst_r(X86::SQRT_Fp64, &X86::RFP64RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::SQRTSDr, &X86::FR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FSQRT_MVT_f80_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f80)
    return 0;
  return FastEmitInst_r(X86::SQRT_Fp80, &X86::RFP80RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FSQRT_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VSQRTPSr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::SQRTPSr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FSQRT_MVT_v8f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VSQRTPSYr, &X86::VR256RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FSQRT_MVT_v2f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VSQRTPDr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::SQRTPDr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FSQRT_MVT_v4f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VSQRTPDYr, &X86::VR256RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FSQRT_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FSQRT_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_FSQRT_MVT_f64_r(RetVT, Op0, Op0IsKill);
  case MVT::f80: return FastEmit_ISD_FSQRT_MVT_f80_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_ISD_FSQRT_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v8f32: return FastEmit_ISD_FSQRT_MVT_v8f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f64: return FastEmit_ISD_FSQRT_MVT_v2f64_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f64: return FastEmit_ISD_FSQRT_MVT_v4f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SCALAR_TO_VECTOR.

unsigned FastEmit_ISD_SCALAR_TO_VECTOR_MVT_i32_MVT_v4i32_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VMOVDI2PDIrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::MOVDI2PDIrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SCALAR_TO_VECTOR_MVT_i32_MVT_x86mmx_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasMMX())) {
    return FastEmitInst_r(X86::MMX_MOVD64rr, &X86::VR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SCALAR_TO_VECTOR_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::v4i32: return FastEmit_ISD_SCALAR_TO_VECTOR_MVT_i32_MVT_v4i32_r(Op0, Op0IsKill);
  case MVT::x86mmx: return FastEmit_ISD_SCALAR_TO_VECTOR_MVT_i32_MVT_x86mmx_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_ISD_SCALAR_TO_VECTOR_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VMOV64toPQIrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::MOV64toPQIrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SCALAR_TO_VECTOR_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SCALAR_TO_VECTOR_MVT_i32_r(RetVT, Op0, Op0IsKill);
  case MVT::i64: return FastEmit_ISD_SCALAR_TO_VECTOR_MVT_i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SIGN_EXTEND.

unsigned FastEmit_ISD_SIGN_EXTEND_MVT_i8_MVT_i32_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_r(X86::MOVSX32rr8, &X86::GR32RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_SIGN_EXTEND_MVT_i8_MVT_i64_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_r(X86::MOVSX64rr8, &X86::GR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_SIGN_EXTEND_MVT_i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SIGN_EXTEND_MVT_i8_MVT_i32_r(Op0, Op0IsKill);
  case MVT::i64: return FastEmit_ISD_SIGN_EXTEND_MVT_i8_MVT_i64_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_ISD_SIGN_EXTEND_MVT_i16_MVT_i32_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_r(X86::MOVSX32rr16, &X86::GR32RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_SIGN_EXTEND_MVT_i16_MVT_i64_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_r(X86::MOVSX64rr16, &X86::GR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_SIGN_EXTEND_MVT_i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SIGN_EXTEND_MVT_i16_MVT_i32_r(Op0, Op0IsKill);
  case MVT::i64: return FastEmit_ISD_SIGN_EXTEND_MVT_i16_MVT_i64_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_ISD_SIGN_EXTEND_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_r(X86::MOVSX64rr32, &X86::GR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_SIGN_EXTEND_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i8: return FastEmit_ISD_SIGN_EXTEND_MVT_i8_r(RetVT, Op0, Op0IsKill);
  case MVT::i16: return FastEmit_ISD_SIGN_EXTEND_MVT_i16_r(RetVT, Op0, Op0IsKill);
  case MVT::i32: return FastEmit_ISD_SIGN_EXTEND_MVT_i32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SINT_TO_FP.

unsigned FastEmit_ISD_SINT_TO_FP_MVT_i32_MVT_f32_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::CVTSI2SSrr, &X86::FR32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SINT_TO_FP_MVT_i32_MVT_f64_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::CVTSI2SDrr, &X86::FR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SINT_TO_FP_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_SINT_TO_FP_MVT_i32_MVT_f32_r(Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_SINT_TO_FP_MVT_i32_MVT_f64_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_ISD_SINT_TO_FP_MVT_i64_MVT_f32_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::CVTSI2SS64rr, &X86::FR32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SINT_TO_FP_MVT_i64_MVT_f64_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::CVTSI2SD64rr, &X86::FR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SINT_TO_FP_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_SINT_TO_FP_MVT_i64_MVT_f32_r(Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_SINT_TO_FP_MVT_i64_MVT_f64_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_ISD_SINT_TO_FP_MVT_v4i32_MVT_v4f32_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VCVTDQ2PSrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::CVTDQ2PSrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SINT_TO_FP_MVT_v4i32_MVT_v4f64_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VCVTDQ2PDYrr, &X86::VR256RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SINT_TO_FP_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::v4f32: return FastEmit_ISD_SINT_TO_FP_MVT_v4i32_MVT_v4f32_r(Op0, Op0IsKill);
  case MVT::v4f64: return FastEmit_ISD_SINT_TO_FP_MVT_v4i32_MVT_v4f64_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_ISD_SINT_TO_FP_MVT_v8i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VCVTDQ2PSYrr, &X86::VR256RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SINT_TO_FP_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SINT_TO_FP_MVT_i32_r(RetVT, Op0, Op0IsKill);
  case MVT::i64: return FastEmit_ISD_SINT_TO_FP_MVT_i64_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i32: return FastEmit_ISD_SINT_TO_FP_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v8i32: return FastEmit_ISD_SINT_TO_FP_MVT_v8i32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::TRUNCATE.

unsigned FastEmit_ISD_TRUNCATE_MVT_i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i8)
    return 0;
  if ((Subtarget->is64Bit())) {
    return FastEmitInst_extractsubreg(RetVT, Op0, Op0IsKill, X86::sub_8bit);
  }
  return 0;
}

unsigned FastEmit_ISD_TRUNCATE_MVT_i32_MVT_i8_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->is64Bit())) {
    return FastEmitInst_extractsubreg(MVT::i8, Op0, Op0IsKill, X86::sub_8bit);
  }
  return 0;
}

unsigned FastEmit_ISD_TRUNCATE_MVT_i32_MVT_i16_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_extractsubreg(MVT::i16, Op0, Op0IsKill, X86::sub_16bit);
}

unsigned FastEmit_ISD_TRUNCATE_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::i8: return FastEmit_ISD_TRUNCATE_MVT_i32_MVT_i8_r(Op0, Op0IsKill);
  case MVT::i16: return FastEmit_ISD_TRUNCATE_MVT_i32_MVT_i16_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_ISD_TRUNCATE_MVT_i64_MVT_i8_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_extractsubreg(MVT::i8, Op0, Op0IsKill, X86::sub_8bit);
}

unsigned FastEmit_ISD_TRUNCATE_MVT_i64_MVT_i16_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_extractsubreg(MVT::i16, Op0, Op0IsKill, X86::sub_16bit);
}

unsigned FastEmit_ISD_TRUNCATE_MVT_i64_MVT_i32_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_extractsubreg(MVT::i32, Op0, Op0IsKill, X86::sub_32bit);
}

unsigned FastEmit_ISD_TRUNCATE_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::i8: return FastEmit_ISD_TRUNCATE_MVT_i64_MVT_i8_r(Op0, Op0IsKill);
  case MVT::i16: return FastEmit_ISD_TRUNCATE_MVT_i64_MVT_i16_r(Op0, Op0IsKill);
  case MVT::i32: return FastEmit_ISD_TRUNCATE_MVT_i64_MVT_i32_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_ISD_TRUNCATE_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i16: return FastEmit_ISD_TRUNCATE_MVT_i16_r(RetVT, Op0, Op0IsKill);
  case MVT::i32: return FastEmit_ISD_TRUNCATE_MVT_i32_r(RetVT, Op0, Op0IsKill);
  case MVT::i64: return FastEmit_ISD_TRUNCATE_MVT_i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::ZERO_EXTEND.

unsigned FastEmit_ISD_ZERO_EXTEND_MVT_i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_r(X86::MOVZX32rr8, &X86::GR32RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_ZERO_EXTEND_MVT_i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_r(X86::MOVZX32rr16, &X86::GR32RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_ZERO_EXTEND_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i8: return FastEmit_ISD_ZERO_EXTEND_MVT_i8_r(RetVT, Op0, Op0IsKill);
  case MVT::i16: return FastEmit_ISD_ZERO_EXTEND_MVT_i16_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::BLSI.

unsigned FastEmit_X86ISD_BLSI_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasBMI())) {
    return FastEmitInst_r(X86::BLSI32rr, &X86::GR32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_BLSI_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  if ((Subtarget->hasBMI())) {
    return FastEmitInst_r(X86::BLSI64rr, &X86::GR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_BLSI_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_X86ISD_BLSI_MVT_i32_r(RetVT, Op0, Op0IsKill);
  case MVT::i64: return FastEmit_X86ISD_BLSI_MVT_i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::BLSMSK.

unsigned FastEmit_X86ISD_BLSMSK_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasBMI())) {
    return FastEmitInst_r(X86::BLSMSK32rr, &X86::GR32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_BLSMSK_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  if ((Subtarget->hasBMI())) {
    return FastEmitInst_r(X86::BLSMSK64rr, &X86::GR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_BLSMSK_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_X86ISD_BLSMSK_MVT_i32_r(RetVT, Op0, Op0IsKill);
  case MVT::i64: return FastEmit_X86ISD_BLSMSK_MVT_i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::BLSR.

unsigned FastEmit_X86ISD_BLSR_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasBMI())) {
    return FastEmitInst_r(X86::BLSR32rr, &X86::GR32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_BLSR_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  if ((Subtarget->hasBMI())) {
    return FastEmitInst_r(X86::BLSR64rr, &X86::GR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_BLSR_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_X86ISD_BLSR_MVT_i32_r(RetVT, Op0, Op0IsKill);
  case MVT::i64: return FastEmit_X86ISD_BLSR_MVT_i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::CALL.

unsigned FastEmit_X86ISD_CALL_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  if ((!Subtarget->is64Bit())) {
    return FastEmitInst_r(X86::CALL32r, &X86::GR32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_CALL_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  if ((Subtarget->is64Bit())) {
    return FastEmitInst_r(X86::CALL64r, &X86::GR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_CALL_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_X86ISD_CALL_MVT_i32_r(RetVT, Op0, Op0IsKill);
  case MVT::i64: return FastEmit_X86ISD_CALL_MVT_i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::EH_RETURN.

unsigned FastEmit_X86ISD_EH_RETURN_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  return FastEmitInst_r(X86::EH_RETURN, &X86::GR32RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_X86ISD_EH_RETURN_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  return FastEmitInst_r(X86::EH_RETURN64, &X86::GR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_X86ISD_EH_RETURN_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_X86ISD_EH_RETURN_MVT_i32_r(RetVT, Op0, Op0IsKill);
  case MVT::i64: return FastEmit_X86ISD_EH_RETURN_MVT_i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::FRCP.

unsigned FastEmit_X86ISD_FRCP_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::RCPSSr, &X86::FR32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FRCP_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VRCPPSr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::RCPPSr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FRCP_MVT_v8f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VRCPPSYr, &X86::VR256RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FRCP_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_X86ISD_FRCP_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_X86ISD_FRCP_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v8f32: return FastEmit_X86ISD_FRCP_MVT_v8f32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::FRSQRT.

unsigned FastEmit_X86ISD_FRSQRT_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::RSQRTSSr, &X86::FR32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FRSQRT_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VRSQRTPSr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::RSQRTPSr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FRSQRT_MVT_v8f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VRSQRTPSYr, &X86::VR256RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FRSQRT_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_X86ISD_FRSQRT_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_X86ISD_FRSQRT_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v8f32: return FastEmit_X86ISD_FRSQRT_MVT_v8f32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::MMX_MOVD2W.

unsigned FastEmit_X86ISD_MMX_MOVD2W_MVT_x86mmx_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasMMX())) {
    return FastEmitInst_r(X86::MMX_MOVD64grr, &X86::GR32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_MMX_MOVD2W_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::x86mmx: return FastEmit_X86ISD_MMX_MOVD2W_MVT_x86mmx_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::MOVDDUP.

unsigned FastEmit_X86ISD_MOVDDUP_MVT_v4i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VMOVDDUPYrr, &X86::VR256RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_MOVDDUP_MVT_v4f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VMOVDDUPYrr, &X86::VR256RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_MOVDDUP_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v4i64: return FastEmit_X86ISD_MOVDDUP_MVT_v4i64_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f64: return FastEmit_X86ISD_MOVDDUP_MVT_v4f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::MOVDQ2Q.

unsigned FastEmit_X86ISD_MOVDQ2Q_MVT_v2i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::x86mmx)
    return 0;
  return FastEmitInst_r(X86::MMX_MOVDQ2Qrr, &X86::VR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_X86ISD_MOVDQ2Q_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v2i64: return FastEmit_X86ISD_MOVDQ2Q_MVT_v2i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::MOVSHDUP.

unsigned FastEmit_X86ISD_MOVSHDUP_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VMOVSHDUPrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE3() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::MOVSHDUPrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_MOVSHDUP_MVT_v8i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VMOVSHDUPYrr, &X86::VR256RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_MOVSHDUP_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VMOVSHDUPrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE3() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::MOVSHDUPrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_MOVSHDUP_MVT_v8f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VMOVSHDUPYrr, &X86::VR256RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_MOVSHDUP_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v4i32: return FastEmit_X86ISD_MOVSHDUP_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v8i32: return FastEmit_X86ISD_MOVSHDUP_MVT_v8i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_X86ISD_MOVSHDUP_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v8f32: return FastEmit_X86ISD_MOVSHDUP_MVT_v8f32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::MOVSLDUP.

unsigned FastEmit_X86ISD_MOVSLDUP_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VMOVSLDUPrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE3() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::MOVSLDUPrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_MOVSLDUP_MVT_v8i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VMOVSLDUPYrr, &X86::VR256RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_MOVSLDUP_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VMOVSLDUPrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE3() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::MOVSLDUPrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_MOVSLDUP_MVT_v8f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VMOVSLDUPYrr, &X86::VR256RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_MOVSLDUP_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v4i32: return FastEmit_X86ISD_MOVSLDUP_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v8i32: return FastEmit_X86ISD_MOVSLDUP_MVT_v8i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_X86ISD_MOVSLDUP_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v8f32: return FastEmit_X86ISD_MOVSLDUP_MVT_v8f32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::SEG_ALLOCA.

unsigned FastEmit_X86ISD_SEG_ALLOCA_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((!Subtarget->is64Bit())) {
    return FastEmitInst_r(X86::SEG_ALLOCA_32, &X86::GR32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_SEG_ALLOCA_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  if ((Subtarget->is64Bit())) {
    return FastEmitInst_r(X86::SEG_ALLOCA_64, &X86::GR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_SEG_ALLOCA_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_X86ISD_SEG_ALLOCA_MVT_i32_r(RetVT, Op0, Op0IsKill);
  case MVT::i64: return FastEmit_X86ISD_SEG_ALLOCA_MVT_i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::VBROADCAST.

unsigned FastEmit_X86ISD_VBROADCAST_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v16i32)
    return 0;
  return FastEmitInst_r(X86::VPBROADCASTDrZrr, &X86::VR512RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_X86ISD_VBROADCAST_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i64)
    return 0;
  return FastEmitInst_r(X86::VPBROADCASTQrZrr, &X86::VR512RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_X86ISD_VBROADCAST_MVT_v16i8_MVT_v16i8_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_r(X86::VPBROADCASTBrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VBROADCAST_MVT_v16i8_MVT_v32i8_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_r(X86::VPBROADCASTBYrr, &X86::VR256RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VBROADCAST_MVT_v16i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::v16i8: return FastEmit_X86ISD_VBROADCAST_MVT_v16i8_MVT_v16i8_r(Op0, Op0IsKill);
  case MVT::v32i8: return FastEmit_X86ISD_VBROADCAST_MVT_v16i8_MVT_v32i8_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_X86ISD_VBROADCAST_MVT_v8i16_MVT_v8i16_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_r(X86::VPBROADCASTWrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VBROADCAST_MVT_v8i16_MVT_v16i16_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_r(X86::VPBROADCASTWYrr, &X86::VR256RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VBROADCAST_MVT_v8i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::v8i16: return FastEmit_X86ISD_VBROADCAST_MVT_v8i16_MVT_v8i16_r(Op0, Op0IsKill);
  case MVT::v16i16: return FastEmit_X86ISD_VBROADCAST_MVT_v8i16_MVT_v16i16_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_X86ISD_VBROADCAST_MVT_v4i32_MVT_v4i32_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_r(X86::VPBROADCASTDrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VBROADCAST_MVT_v4i32_MVT_v8i32_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_r(X86::VPBROADCASTDYrr, &X86::VR256RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VBROADCAST_MVT_v4i32_MVT_v16i32_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX512())) {
    return FastEmitInst_r(X86::VPBROADCASTDZrr, &X86::VR512RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VBROADCAST_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::v4i32: return FastEmit_X86ISD_VBROADCAST_MVT_v4i32_MVT_v4i32_r(Op0, Op0IsKill);
  case MVT::v8i32: return FastEmit_X86ISD_VBROADCAST_MVT_v4i32_MVT_v8i32_r(Op0, Op0IsKill);
  case MVT::v16i32: return FastEmit_X86ISD_VBROADCAST_MVT_v4i32_MVT_v16i32_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_X86ISD_VBROADCAST_MVT_v2i64_MVT_v2i64_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_r(X86::VPBROADCASTQrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VBROADCAST_MVT_v2i64_MVT_v4i64_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_r(X86::VPBROADCASTQYrr, &X86::VR256RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VBROADCAST_MVT_v2i64_MVT_v8i64_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX512())) {
    return FastEmitInst_r(X86::VPBROADCASTQZrr, &X86::VR512RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VBROADCAST_MVT_v2i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::v2i64: return FastEmit_X86ISD_VBROADCAST_MVT_v2i64_MVT_v2i64_r(Op0, Op0IsKill);
  case MVT::v4i64: return FastEmit_X86ISD_VBROADCAST_MVT_v2i64_MVT_v4i64_r(Op0, Op0IsKill);
  case MVT::v8i64: return FastEmit_X86ISD_VBROADCAST_MVT_v2i64_MVT_v8i64_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_X86ISD_VBROADCAST_MVT_v4f32_MVT_v4f32_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_r(X86::VBROADCASTSSrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VBROADCAST_MVT_v4f32_MVT_v8f32_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_r(X86::VBROADCASTSSYrr, &X86::VR256RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VBROADCAST_MVT_v4f32_MVT_v16f32_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_r(X86::VBROADCASTSSZrr, &X86::VR512RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_X86ISD_VBROADCAST_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::v4f32: return FastEmit_X86ISD_VBROADCAST_MVT_v4f32_MVT_v4f32_r(Op0, Op0IsKill);
  case MVT::v8f32: return FastEmit_X86ISD_VBROADCAST_MVT_v4f32_MVT_v8f32_r(Op0, Op0IsKill);
  case MVT::v16f32: return FastEmit_X86ISD_VBROADCAST_MVT_v4f32_MVT_v16f32_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_X86ISD_VBROADCAST_MVT_v2f64_MVT_v2f64_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_r(X86::VPBROADCASTQrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VBROADCAST_MVT_v2f64_MVT_v4f64_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_r(X86::VBROADCASTSDYrr, &X86::VR256RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VBROADCAST_MVT_v2f64_MVT_v8f64_r(unsigned Op0, bool Op0IsKill) {
  return FastEmitInst_r(X86::VBROADCASTSDZrr, &X86::VR512RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_X86ISD_VBROADCAST_MVT_v2f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::v2f64: return FastEmit_X86ISD_VBROADCAST_MVT_v2f64_MVT_v2f64_r(Op0, Op0IsKill);
  case MVT::v4f64: return FastEmit_X86ISD_VBROADCAST_MVT_v2f64_MVT_v4f64_r(Op0, Op0IsKill);
  case MVT::v8f64: return FastEmit_X86ISD_VBROADCAST_MVT_v2f64_MVT_v8f64_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_X86ISD_VBROADCAST_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_X86ISD_VBROADCAST_MVT_i32_r(RetVT, Op0, Op0IsKill);
  case MVT::i64: return FastEmit_X86ISD_VBROADCAST_MVT_i64_r(RetVT, Op0, Op0IsKill);
  case MVT::v16i8: return FastEmit_X86ISD_VBROADCAST_MVT_v16i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v8i16: return FastEmit_X86ISD_VBROADCAST_MVT_v8i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i32: return FastEmit_X86ISD_VBROADCAST_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i64: return FastEmit_X86ISD_VBROADCAST_MVT_v2i64_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_X86ISD_VBROADCAST_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f64: return FastEmit_X86ISD_VBROADCAST_MVT_v2f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::VFPEXT.

unsigned FastEmit_X86ISD_VFPEXT_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VCVTPS2PDrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::CVTPS2PDrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VFPEXT_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v4f32: return FastEmit_X86ISD_VFPEXT_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::VFPROUND.

unsigned FastEmit_X86ISD_VFPROUND_MVT_v2f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VCVTPD2PSrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::CVTPD2PSrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VFPROUND_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v2f64: return FastEmit_X86ISD_VFPROUND_MVT_v2f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::VSEXT.

unsigned FastEmit_X86ISD_VSEXT_MVT_v16i8_MVT_v8i16_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VPMOVSXBWrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE41() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::PMOVSXBWrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSEXT_MVT_v16i8_MVT_v16i16_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_r(X86::VPMOVSXBWYrr, &X86::VR256RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSEXT_MVT_v16i8_MVT_v4i32_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VPMOVSXBDrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE41() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::PMOVSXBDrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSEXT_MVT_v16i8_MVT_v8i32_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_r(X86::VPMOVSXBDYrr, &X86::VR256RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSEXT_MVT_v16i8_MVT_v2i64_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VPMOVSXBQrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE41() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::PMOVSXBQrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSEXT_MVT_v16i8_MVT_v4i64_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_r(X86::VPMOVSXBQYrr, &X86::VR256RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSEXT_MVT_v16i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::v8i16: return FastEmit_X86ISD_VSEXT_MVT_v16i8_MVT_v8i16_r(Op0, Op0IsKill);
  case MVT::v16i16: return FastEmit_X86ISD_VSEXT_MVT_v16i8_MVT_v16i16_r(Op0, Op0IsKill);
  case MVT::v4i32: return FastEmit_X86ISD_VSEXT_MVT_v16i8_MVT_v4i32_r(Op0, Op0IsKill);
  case MVT::v8i32: return FastEmit_X86ISD_VSEXT_MVT_v16i8_MVT_v8i32_r(Op0, Op0IsKill);
  case MVT::v2i64: return FastEmit_X86ISD_VSEXT_MVT_v16i8_MVT_v2i64_r(Op0, Op0IsKill);
  case MVT::v4i64: return FastEmit_X86ISD_VSEXT_MVT_v16i8_MVT_v4i64_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_X86ISD_VSEXT_MVT_v8i16_MVT_v4i32_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VPMOVSXWDrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE41() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::PMOVSXWDrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSEXT_MVT_v8i16_MVT_v8i32_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_r(X86::VPMOVSXWDYrr, &X86::VR256RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSEXT_MVT_v8i16_MVT_v2i64_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VPMOVSXWQrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE41() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::PMOVSXWQrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSEXT_MVT_v8i16_MVT_v4i64_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_r(X86::VPMOVSXWQYrr, &X86::VR256RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSEXT_MVT_v8i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::v4i32: return FastEmit_X86ISD_VSEXT_MVT_v8i16_MVT_v4i32_r(Op0, Op0IsKill);
  case MVT::v8i32: return FastEmit_X86ISD_VSEXT_MVT_v8i16_MVT_v8i32_r(Op0, Op0IsKill);
  case MVT::v2i64: return FastEmit_X86ISD_VSEXT_MVT_v8i16_MVT_v2i64_r(Op0, Op0IsKill);
  case MVT::v4i64: return FastEmit_X86ISD_VSEXT_MVT_v8i16_MVT_v4i64_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_X86ISD_VSEXT_MVT_v4i32_MVT_v2i64_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VPMOVSXDQrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE41() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::PMOVSXDQrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSEXT_MVT_v4i32_MVT_v4i64_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_r(X86::VPMOVSXDQYrr, &X86::VR256RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSEXT_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::v2i64: return FastEmit_X86ISD_VSEXT_MVT_v4i32_MVT_v2i64_r(Op0, Op0IsKill);
  case MVT::v4i64: return FastEmit_X86ISD_VSEXT_MVT_v4i32_MVT_v4i64_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_X86ISD_VSEXT_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v16i8: return FastEmit_X86ISD_VSEXT_MVT_v16i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v8i16: return FastEmit_X86ISD_VSEXT_MVT_v8i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i32: return FastEmit_X86ISD_VSEXT_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::VSEXT_MOVL.

unsigned FastEmit_X86ISD_VSEXT_MOVL_MVT_v8i16_MVT_v4i32_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VPMOVSXWDrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE41() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::PMOVSXWDrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSEXT_MOVL_MVT_v8i16_MVT_v8i32_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_r(X86::VPMOVSXWDYrr, &X86::VR256RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSEXT_MOVL_MVT_v8i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::v4i32: return FastEmit_X86ISD_VSEXT_MOVL_MVT_v8i16_MVT_v4i32_r(Op0, Op0IsKill);
  case MVT::v8i32: return FastEmit_X86ISD_VSEXT_MOVL_MVT_v8i16_MVT_v8i32_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_X86ISD_VSEXT_MOVL_MVT_v4i32_MVT_v2i64_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VPMOVSXDQrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE41() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::PMOVSXDQrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSEXT_MOVL_MVT_v4i32_MVT_v4i64_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_r(X86::VPMOVSXDQYrr, &X86::VR256RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSEXT_MOVL_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::v2i64: return FastEmit_X86ISD_VSEXT_MOVL_MVT_v4i32_MVT_v2i64_r(Op0, Op0IsKill);
  case MVT::v4i64: return FastEmit_X86ISD_VSEXT_MOVL_MVT_v4i32_MVT_v4i64_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_X86ISD_VSEXT_MOVL_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i16: return FastEmit_X86ISD_VSEXT_MOVL_MVT_v8i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i32: return FastEmit_X86ISD_VSEXT_MOVL_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::VZEXT.

unsigned FastEmit_X86ISD_VZEXT_MVT_v16i8_MVT_v8i16_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VPMOVZXBWrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE41() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::PMOVZXBWrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VZEXT_MVT_v16i8_MVT_v16i16_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_r(X86::VPMOVZXBWYrr, &X86::VR256RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VZEXT_MVT_v16i8_MVT_v4i32_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VPMOVZXBDrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE41() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::PMOVZXBDrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VZEXT_MVT_v16i8_MVT_v8i32_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_r(X86::VPMOVZXBDYrr, &X86::VR256RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VZEXT_MVT_v16i8_MVT_v2i64_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VPMOVZXBQrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE41() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::PMOVZXBQrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VZEXT_MVT_v16i8_MVT_v4i64_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_r(X86::VPMOVZXBQYrr, &X86::VR256RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VZEXT_MVT_v16i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::v8i16: return FastEmit_X86ISD_VZEXT_MVT_v16i8_MVT_v8i16_r(Op0, Op0IsKill);
  case MVT::v16i16: return FastEmit_X86ISD_VZEXT_MVT_v16i8_MVT_v16i16_r(Op0, Op0IsKill);
  case MVT::v4i32: return FastEmit_X86ISD_VZEXT_MVT_v16i8_MVT_v4i32_r(Op0, Op0IsKill);
  case MVT::v8i32: return FastEmit_X86ISD_VZEXT_MVT_v16i8_MVT_v8i32_r(Op0, Op0IsKill);
  case MVT::v2i64: return FastEmit_X86ISD_VZEXT_MVT_v16i8_MVT_v2i64_r(Op0, Op0IsKill);
  case MVT::v4i64: return FastEmit_X86ISD_VZEXT_MVT_v16i8_MVT_v4i64_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_X86ISD_VZEXT_MVT_v8i16_MVT_v4i32_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VPMOVZXWDrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE41() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::PMOVZXWDrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VZEXT_MVT_v8i16_MVT_v8i32_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_r(X86::VPMOVZXWDYrr, &X86::VR256RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VZEXT_MVT_v8i16_MVT_v2i64_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VPMOVZXWQrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE41() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::PMOVZXWQrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VZEXT_MVT_v8i16_MVT_v4i64_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_r(X86::VPMOVZXWQYrr, &X86::VR256RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VZEXT_MVT_v8i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::v4i32: return FastEmit_X86ISD_VZEXT_MVT_v8i16_MVT_v4i32_r(Op0, Op0IsKill);
  case MVT::v8i32: return FastEmit_X86ISD_VZEXT_MVT_v8i16_MVT_v8i32_r(Op0, Op0IsKill);
  case MVT::v2i64: return FastEmit_X86ISD_VZEXT_MVT_v8i16_MVT_v2i64_r(Op0, Op0IsKill);
  case MVT::v4i64: return FastEmit_X86ISD_VZEXT_MVT_v8i16_MVT_v4i64_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_X86ISD_VZEXT_MVT_v4i32_MVT_v2i64_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VPMOVZXDQrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE41() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::PMOVZXDQrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VZEXT_MVT_v4i32_MVT_v4i64_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_r(X86::VPMOVZXDQYrr, &X86::VR256RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VZEXT_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::v2i64: return FastEmit_X86ISD_VZEXT_MVT_v4i32_MVT_v2i64_r(Op0, Op0IsKill);
  case MVT::v4i64: return FastEmit_X86ISD_VZEXT_MVT_v4i32_MVT_v4i64_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_X86ISD_VZEXT_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v16i8: return FastEmit_X86ISD_VZEXT_MVT_v16i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v8i16: return FastEmit_X86ISD_VZEXT_MVT_v8i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i32: return FastEmit_X86ISD_VZEXT_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::VZEXT_MOVL.

unsigned FastEmit_X86ISD_VZEXT_MOVL_MVT_v8i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i32)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_r(X86::VPMOVZXWDYrr, &X86::VR256RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VZEXT_MOVL_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i64)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_r(X86::VPMOVZXDQYrr, &X86::VR256RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VZEXT_MOVL_MVT_v2i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VMOVZPQILo2PQIrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::MOVZPQILo2PQIrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VZEXT_MOVL_MVT_v2f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::VMOVZPQILo2PQIrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_r(X86::MOVZPQILo2PQIrr, &X86::VR128RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VZEXT_MOVL_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i16: return FastEmit_X86ISD_VZEXT_MOVL_MVT_v8i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i32: return FastEmit_X86ISD_VZEXT_MOVL_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i64: return FastEmit_X86ISD_VZEXT_MOVL_MVT_v2i64_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f64: return FastEmit_X86ISD_VZEXT_MOVL_MVT_v2f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::WIN_FTOL.

unsigned FastEmit_X86ISD_WIN_FTOL_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  if ((!Subtarget->is64Bit())) {
    return FastEmitInst_r(X86::WIN_FTOL_32, &X86::RFP32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_WIN_FTOL_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  if ((!Subtarget->is64Bit())) {
    return FastEmitInst_r(X86::WIN_FTOL_64, &X86::RFP64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_WIN_FTOL_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_X86ISD_WIN_FTOL_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_X86ISD_WIN_FTOL_MVT_f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_r(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill) {
  switch (Opcode) {
  case ISD::ANY_EXTEND: return FastEmit_ISD_ANY_EXTEND_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::BITCAST: return FastEmit_ISD_BITCAST_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::BRIND: return FastEmit_ISD_BRIND_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::BSWAP: return FastEmit_ISD_BSWAP_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::CTLZ: return FastEmit_ISD_CTLZ_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::CTPOP: return FastEmit_ISD_CTPOP_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::CTTZ: return FastEmit_ISD_CTTZ_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::CTTZ_ZERO_UNDEF: return FastEmit_ISD_CTTZ_ZERO_UNDEF_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FABS: return FastEmit_ISD_FABS_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FCOS: return FastEmit_ISD_FCOS_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FNEG: return FastEmit_ISD_FNEG_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FP_EXTEND: return FastEmit_ISD_FP_EXTEND_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FP_ROUND: return FastEmit_ISD_FP_ROUND_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FP_TO_SINT: return FastEmit_ISD_FP_TO_SINT_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FSIN: return FastEmit_ISD_FSIN_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FSQRT: return FastEmit_ISD_FSQRT_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::SCALAR_TO_VECTOR: return FastEmit_ISD_SCALAR_TO_VECTOR_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::SIGN_EXTEND: return FastEmit_ISD_SIGN_EXTEND_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::SINT_TO_FP: return FastEmit_ISD_SINT_TO_FP_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::TRUNCATE: return FastEmit_ISD_TRUNCATE_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::ZERO_EXTEND: return FastEmit_ISD_ZERO_EXTEND_r(VT, RetVT, Op0, Op0IsKill);
  case X86ISD::BLSI: return FastEmit_X86ISD_BLSI_r(VT, RetVT, Op0, Op0IsKill);
  case X86ISD::BLSMSK: return FastEmit_X86ISD_BLSMSK_r(VT, RetVT, Op0, Op0IsKill);
  case X86ISD::BLSR: return FastEmit_X86ISD_BLSR_r(VT, RetVT, Op0, Op0IsKill);
  case X86ISD::CALL: return FastEmit_X86ISD_CALL_r(VT, RetVT, Op0, Op0IsKill);
  case X86ISD::EH_RETURN: return FastEmit_X86ISD_EH_RETURN_r(VT, RetVT, Op0, Op0IsKill);
  case X86ISD::FRCP: return FastEmit_X86ISD_FRCP_r(VT, RetVT, Op0, Op0IsKill);
  case X86ISD::FRSQRT: return FastEmit_X86ISD_FRSQRT_r(VT, RetVT, Op0, Op0IsKill);
  case X86ISD::MMX_MOVD2W: return FastEmit_X86ISD_MMX_MOVD2W_r(VT, RetVT, Op0, Op0IsKill);
  case X86ISD::MOVDDUP: return FastEmit_X86ISD_MOVDDUP_r(VT, RetVT, Op0, Op0IsKill);
  case X86ISD::MOVDQ2Q: return FastEmit_X86ISD_MOVDQ2Q_r(VT, RetVT, Op0, Op0IsKill);
  case X86ISD::MOVSHDUP: return FastEmit_X86ISD_MOVSHDUP_r(VT, RetVT, Op0, Op0IsKill);
  case X86ISD::MOVSLDUP: return FastEmit_X86ISD_MOVSLDUP_r(VT, RetVT, Op0, Op0IsKill);
  case X86ISD::SEG_ALLOCA: return FastEmit_X86ISD_SEG_ALLOCA_r(VT, RetVT, Op0, Op0IsKill);
  case X86ISD::VBROADCAST: return FastEmit_X86ISD_VBROADCAST_r(VT, RetVT, Op0, Op0IsKill);
  case X86ISD::VFPEXT: return FastEmit_X86ISD_VFPEXT_r(VT, RetVT, Op0, Op0IsKill);
  case X86ISD::VFPROUND: return FastEmit_X86ISD_VFPROUND_r(VT, RetVT, Op0, Op0IsKill);
  case X86ISD::VSEXT: return FastEmit_X86ISD_VSEXT_r(VT, RetVT, Op0, Op0IsKill);
  case X86ISD::VSEXT_MOVL: return FastEmit_X86ISD_VSEXT_MOVL_r(VT, RetVT, Op0, Op0IsKill);
  case X86ISD::VZEXT: return FastEmit_X86ISD_VZEXT_r(VT, RetVT, Op0, Op0IsKill);
  case X86ISD::VZEXT_MOVL: return FastEmit_X86ISD_VZEXT_MOVL_r(VT, RetVT, Op0, Op0IsKill);
  case X86ISD::WIN_FTOL: return FastEmit_X86ISD_WIN_FTOL_r(VT, RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::ADD.

unsigned FastEmit_ISD_ADD_MVT_i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i8)
    return 0;
  return FastEmitInst_rr(X86::ADD8rr, &X86::GR8RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_ADD_MVT_i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i16)
    return 0;
  return FastEmitInst_rr(X86::ADD16rr, &X86::GR16RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_ADD_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(X86::ADD32rr, &X86::GR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_ADD_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_rr(X86::ADD64rr, &X86::GR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_ADD_MVT_v16i1_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i1)
    return 0;
  if ((Subtarget->hasAVX512())) {
    return FastEmitInst_rr(X86::KADDWrr, &X86::VK16RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ADD_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPADDBrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PADDBrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ADD_MVT_v32i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v32i8)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPADDBYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ADD_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPADDWrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PADDWrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ADD_MVT_v16i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i16)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPADDWYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ADD_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPADDDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PADDDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ADD_MVT_v8i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i32)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPADDDYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ADD_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPADDQrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PADDQrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ADD_MVT_v4i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i64)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPADDQYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ADD_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i8: return FastEmit_ISD_ADD_MVT_i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i16: return FastEmit_ISD_ADD_MVT_i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i32: return FastEmit_ISD_ADD_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_ADD_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i1: return FastEmit_ISD_ADD_MVT_v16i1_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ISD_ADD_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v32i8: return FastEmit_ISD_ADD_MVT_v32i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ISD_ADD_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i16: return FastEmit_ISD_ADD_MVT_v16i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_ADD_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i32: return FastEmit_ISD_ADD_MVT_v8i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ISD_ADD_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i64: return FastEmit_ISD_ADD_MVT_v4i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::AND.

unsigned FastEmit_ISD_AND_MVT_i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i8)
    return 0;
  return FastEmitInst_rr(X86::AND8rr, &X86::GR8RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_AND_MVT_i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i16)
    return 0;
  return FastEmitInst_rr(X86::AND16rr, &X86::GR16RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_AND_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(X86::AND32rr, &X86::GR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_AND_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_rr(X86::AND64rr, &X86::GR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_AND_MVT_v16i1_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i1)
    return 0;
  if ((Subtarget->hasAVX512())) {
    return FastEmitInst_rr(X86::KANDWrr, &X86::VK16RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_AND_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPANDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::ANDPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PANDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_AND_MVT_v4i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VANDPSYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPANDYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_AND_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i8: return FastEmit_ISD_AND_MVT_i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i16: return FastEmit_ISD_AND_MVT_i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i32: return FastEmit_ISD_AND_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_AND_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i1: return FastEmit_ISD_AND_MVT_v16i1_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ISD_AND_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i64: return FastEmit_ISD_AND_MVT_v4i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FADD.

unsigned FastEmit_ISD_FADD_MVT_f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((!Subtarget->hasSSE1())) {
    return FastEmitInst_rr(X86::ADD_Fp32, &X86::RFP32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VADDSSrr, &X86::FR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::ADDSSrr, &X86::FR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FADD_MVT_f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((!Subtarget->hasSSE2())) {
    return FastEmitInst_rr(X86::ADD_Fp64, &X86::RFP64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VADDSDrr, &X86::FR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::ADDSDrr, &X86::FR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FADD_MVT_f80_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f80)
    return 0;
  return FastEmitInst_rr(X86::ADD_Fp80, &X86::RFP80RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_FADD_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VADDPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::ADDPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FADD_MVT_v8f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VADDPSYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FADD_MVT_v2f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VADDPDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::ADDPDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FADD_MVT_v4f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VADDPDYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FADD_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FADD_MVT_f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f64: return FastEmit_ISD_FADD_MVT_f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f80: return FastEmit_ISD_FADD_MVT_f80_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f32: return FastEmit_ISD_FADD_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8f32: return FastEmit_ISD_FADD_MVT_v8f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f64: return FastEmit_ISD_FADD_MVT_v2f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f64: return FastEmit_ISD_FADD_MVT_v4f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FDIV.

unsigned FastEmit_ISD_FDIV_MVT_f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((!Subtarget->hasSSE1())) {
    return FastEmitInst_rr(X86::DIV_Fp32, &X86::RFP32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VDIVSSrr, &X86::FR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::DIVSSrr, &X86::FR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FDIV_MVT_f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((!Subtarget->hasSSE2())) {
    return FastEmitInst_rr(X86::DIV_Fp64, &X86::RFP64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VDIVSDrr, &X86::FR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::DIVSDrr, &X86::FR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FDIV_MVT_f80_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f80)
    return 0;
  return FastEmitInst_rr(X86::DIV_Fp80, &X86::RFP80RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_FDIV_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VDIVPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::DIVPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FDIV_MVT_v8f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VDIVPSYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FDIV_MVT_v2f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VDIVPDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::DIVPDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FDIV_MVT_v4f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VDIVPDYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FDIV_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FDIV_MVT_f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f64: return FastEmit_ISD_FDIV_MVT_f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f80: return FastEmit_ISD_FDIV_MVT_f80_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f32: return FastEmit_ISD_FDIV_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8f32: return FastEmit_ISD_FDIV_MVT_v8f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f64: return FastEmit_ISD_FDIV_MVT_v2f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f64: return FastEmit_ISD_FDIV_MVT_v4f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FMUL.

unsigned FastEmit_ISD_FMUL_MVT_f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((!Subtarget->hasSSE1())) {
    return FastEmitInst_rr(X86::MUL_Fp32, &X86::RFP32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VMULSSrr, &X86::FR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::MULSSrr, &X86::FR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FMUL_MVT_f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((!Subtarget->hasSSE2())) {
    return FastEmitInst_rr(X86::MUL_Fp64, &X86::RFP64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VMULSDrr, &X86::FR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::MULSDrr, &X86::FR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FMUL_MVT_f80_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f80)
    return 0;
  return FastEmitInst_rr(X86::MUL_Fp80, &X86::RFP80RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_FMUL_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VMULPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::MULPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FMUL_MVT_v8f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VMULPSYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FMUL_MVT_v2f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VMULPDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::MULPDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FMUL_MVT_v4f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VMULPDYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FMUL_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FMUL_MVT_f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f64: return FastEmit_ISD_FMUL_MVT_f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f80: return FastEmit_ISD_FMUL_MVT_f80_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f32: return FastEmit_ISD_FMUL_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8f32: return FastEmit_ISD_FMUL_MVT_v8f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f64: return FastEmit_ISD_FMUL_MVT_v2f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f64: return FastEmit_ISD_FMUL_MVT_v4f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FSUB.

unsigned FastEmit_ISD_FSUB_MVT_f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((!Subtarget->hasSSE1())) {
    return FastEmitInst_rr(X86::SUB_Fp32, &X86::RFP32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VSUBSSrr, &X86::FR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::SUBSSrr, &X86::FR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FSUB_MVT_f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((!Subtarget->hasSSE2())) {
    return FastEmitInst_rr(X86::SUB_Fp64, &X86::RFP64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VSUBSDrr, &X86::FR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::SUBSDrr, &X86::FR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FSUB_MVT_f80_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f80)
    return 0;
  return FastEmitInst_rr(X86::SUB_Fp80, &X86::RFP80RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_FSUB_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VSUBPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::SUBPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FSUB_MVT_v8f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VSUBPSYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FSUB_MVT_v2f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VSUBPDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::SUBPDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FSUB_MVT_v4f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VSUBPDYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FSUB_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FSUB_MVT_f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f64: return FastEmit_ISD_FSUB_MVT_f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f80: return FastEmit_ISD_FSUB_MVT_f80_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f32: return FastEmit_ISD_FSUB_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8f32: return FastEmit_ISD_FSUB_MVT_v8f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f64: return FastEmit_ISD_FSUB_MVT_v2f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f64: return FastEmit_ISD_FSUB_MVT_v4f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::MUL.

unsigned FastEmit_ISD_MUL_MVT_i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i8)
    return 0;
  BuildMI(*FuncInfo.MBB, FuncInfo.InsertPt, DL, TII.get(TargetOpcode::COPY), X86::AL).addReg(Op0);
  return FastEmitInst_r(X86::MUL8r, &X86::GR8RegClass, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_MUL_MVT_i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i16)
    return 0;
  return FastEmitInst_rr(X86::IMUL16rr, &X86::GR16RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_MUL_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(X86::IMUL32rr, &X86::GR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_MUL_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_rr(X86::IMUL64rr, &X86::GR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_MUL_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPMULLWrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PMULLWrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_MUL_MVT_v16i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i16)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPMULLWYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_MUL_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPMULLDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE41() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PMULLDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_MUL_MVT_v8i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i32)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPMULLDYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_MUL_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i8: return FastEmit_ISD_MUL_MVT_i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i16: return FastEmit_ISD_MUL_MVT_i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i32: return FastEmit_ISD_MUL_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_MUL_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ISD_MUL_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i16: return FastEmit_ISD_MUL_MVT_v16i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_MUL_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i32: return FastEmit_ISD_MUL_MVT_v8i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::OR.

unsigned FastEmit_ISD_OR_MVT_i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i8)
    return 0;
  return FastEmitInst_rr(X86::OR8rr, &X86::GR8RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_OR_MVT_i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i16)
    return 0;
  return FastEmitInst_rr(X86::OR16rr, &X86::GR16RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_OR_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(X86::OR32rr, &X86::GR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_OR_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_rr(X86::OR64rr, &X86::GR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_OR_MVT_v16i1_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i1)
    return 0;
  if ((Subtarget->hasAVX512())) {
    return FastEmitInst_rr(X86::KORWrr, &X86::VK16RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_OR_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPORrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::ORPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PORrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_OR_MVT_v4i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VORPSYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPORYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_OR_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i8: return FastEmit_ISD_OR_MVT_i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i16: return FastEmit_ISD_OR_MVT_i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i32: return FastEmit_ISD_OR_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_OR_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i1: return FastEmit_ISD_OR_MVT_v16i1_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ISD_OR_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i64: return FastEmit_ISD_OR_MVT_v4i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::ROTL.

unsigned FastEmit_ISD_ROTL_MVT_i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i8)
    return 0;
  BuildMI(*FuncInfo.MBB, FuncInfo.InsertPt, DL, TII.get(TargetOpcode::COPY), X86::CL).addReg(Op1);
  return FastEmitInst_r(X86::ROL8rCL, &X86::GR8RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_ROTL_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i8: return FastEmit_ISD_ROTL_MVT_i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::ROTR.

unsigned FastEmit_ISD_ROTR_MVT_i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i8)
    return 0;
  BuildMI(*FuncInfo.MBB, FuncInfo.InsertPt, DL, TII.get(TargetOpcode::COPY), X86::CL).addReg(Op1);
  return FastEmitInst_r(X86::ROR8rCL, &X86::GR8RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_ROTR_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i8: return FastEmit_ISD_ROTR_MVT_i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SHL.

unsigned FastEmit_ISD_SHL_MVT_i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i8)
    return 0;
  BuildMI(*FuncInfo.MBB, FuncInfo.InsertPt, DL, TII.get(TargetOpcode::COPY), X86::CL).addReg(Op1);
  return FastEmitInst_r(X86::SHL8rCL, &X86::GR8RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_SHL_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPSLLVDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SHL_MVT_v8i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i32)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPSLLVDYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SHL_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPSLLVQrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SHL_MVT_v4i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i64)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPSLLVQYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SHL_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i8: return FastEmit_ISD_SHL_MVT_i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_SHL_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i32: return FastEmit_ISD_SHL_MVT_v8i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ISD_SHL_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i64: return FastEmit_ISD_SHL_MVT_v4i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SRA.

unsigned FastEmit_ISD_SRA_MVT_i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i8)
    return 0;
  BuildMI(*FuncInfo.MBB, FuncInfo.InsertPt, DL, TII.get(TargetOpcode::COPY), X86::CL).addReg(Op1);
  return FastEmitInst_r(X86::SAR8rCL, &X86::GR8RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_SRA_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPSRAVDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SRA_MVT_v8i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i32)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPSRAVDYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SRA_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i8: return FastEmit_ISD_SRA_MVT_i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_SRA_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i32: return FastEmit_ISD_SRA_MVT_v8i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SRL.

unsigned FastEmit_ISD_SRL_MVT_i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i8)
    return 0;
  BuildMI(*FuncInfo.MBB, FuncInfo.InsertPt, DL, TII.get(TargetOpcode::COPY), X86::CL).addReg(Op1);
  return FastEmitInst_r(X86::SHR8rCL, &X86::GR8RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_SRL_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPSRLVDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SRL_MVT_v8i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i32)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPSRLVDYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SRL_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPSRLVQrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SRL_MVT_v4i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i64)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPSRLVQYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SRL_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i8: return FastEmit_ISD_SRL_MVT_i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_SRL_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i32: return FastEmit_ISD_SRL_MVT_v8i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ISD_SRL_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i64: return FastEmit_ISD_SRL_MVT_v4i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SUB.

unsigned FastEmit_ISD_SUB_MVT_i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i8)
    return 0;
  return FastEmitInst_rr(X86::SUB8rr, &X86::GR8RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_SUB_MVT_i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i16)
    return 0;
  return FastEmitInst_rr(X86::SUB16rr, &X86::GR16RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_SUB_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(X86::SUB32rr, &X86::GR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_SUB_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_rr(X86::SUB64rr, &X86::GR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_SUB_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPSUBBrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PSUBBrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SUB_MVT_v32i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v32i8)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPSUBBYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SUB_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPSUBWrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PSUBWrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SUB_MVT_v16i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i16)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPSUBWYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SUB_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPSUBDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PSUBDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SUB_MVT_v8i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i32)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPSUBDYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SUB_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPSUBQrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PSUBQrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SUB_MVT_v4i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i64)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPSUBQYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SUB_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i8: return FastEmit_ISD_SUB_MVT_i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i16: return FastEmit_ISD_SUB_MVT_i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i32: return FastEmit_ISD_SUB_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_SUB_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ISD_SUB_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v32i8: return FastEmit_ISD_SUB_MVT_v32i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ISD_SUB_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i16: return FastEmit_ISD_SUB_MVT_v16i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_SUB_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i32: return FastEmit_ISD_SUB_MVT_v8i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ISD_SUB_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i64: return FastEmit_ISD_SUB_MVT_v4i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::XOR.

unsigned FastEmit_ISD_XOR_MVT_i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i8)
    return 0;
  return FastEmitInst_rr(X86::XOR8rr, &X86::GR8RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_XOR_MVT_i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i16)
    return 0;
  return FastEmitInst_rr(X86::XOR16rr, &X86::GR16RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_XOR_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(X86::XOR32rr, &X86::GR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_XOR_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_rr(X86::XOR64rr, &X86::GR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_XOR_MVT_v16i1_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i1)
    return 0;
  if ((Subtarget->hasAVX512())) {
    return FastEmitInst_rr(X86::KXORWrr, &X86::VK16RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_XOR_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPXORrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::XORPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PXORrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_XOR_MVT_v4i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VXORPSYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPXORYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_XOR_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i8: return FastEmit_ISD_XOR_MVT_i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i16: return FastEmit_ISD_XOR_MVT_i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i32: return FastEmit_ISD_XOR_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_XOR_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i1: return FastEmit_ISD_XOR_MVT_v16i1_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ISD_XOR_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i64: return FastEmit_ISD_XOR_MVT_v4i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::ANDNP.

unsigned FastEmit_X86ISD_ANDNP_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPANDNrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::ANDNPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PANDNrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_ANDNP_MVT_v4i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VANDNPSYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPANDNYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_ANDNP_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v2i64: return FastEmit_X86ISD_ANDNP_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i64: return FastEmit_X86ISD_ANDNP_MVT_v4i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::BT.

unsigned FastEmit_X86ISD_BT_MVT_i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(X86::BT16rr, &X86::GR16RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_X86ISD_BT_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(X86::BT32rr, &X86::GR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_X86ISD_BT_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(X86::BT64rr, &X86::GR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_X86ISD_BT_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i16: return FastEmit_X86ISD_BT_MVT_i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i32: return FastEmit_X86ISD_BT_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_X86ISD_BT_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::CMP.

unsigned FastEmit_X86ISD_CMP_MVT_i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(X86::CMP8rr, &X86::GR8RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_X86ISD_CMP_MVT_i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(X86::CMP16rr, &X86::GR16RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_X86ISD_CMP_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(X86::CMP32rr, &X86::GR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_X86ISD_CMP_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(X86::CMP64rr, &X86::GR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_X86ISD_CMP_MVT_f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((!Subtarget->hasSSE1())) {
    return FastEmitInst_rr(X86::UCOM_FpIr32, &X86::RFP32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VUCOMISSrr, &X86::FR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::UCOMISSrr, &X86::FR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_CMP_MVT_f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((!Subtarget->hasSSE2())) {
    return FastEmitInst_rr(X86::UCOM_FpIr64, &X86::RFP64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VUCOMISDrr, &X86::FR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::UCOMISDrr, &X86::FR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_CMP_MVT_f80_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(X86::UCOM_FpIr80, &X86::RFP80RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_X86ISD_CMP_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i8: return FastEmit_X86ISD_CMP_MVT_i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i16: return FastEmit_X86ISD_CMP_MVT_i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i32: return FastEmit_X86ISD_CMP_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_X86ISD_CMP_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f32: return FastEmit_X86ISD_CMP_MVT_f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f64: return FastEmit_X86ISD_CMP_MVT_f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f80: return FastEmit_X86ISD_CMP_MVT_f80_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::COMI.

unsigned FastEmit_X86ISD_COMI_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::Int_VCOMISSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::Int_COMISSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_COMI_MVT_v2f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::Int_VCOMISDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::Int_COMISDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_COMI_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v4f32: return FastEmit_X86ISD_COMI_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f64: return FastEmit_X86ISD_COMI_MVT_v2f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::FAND.

unsigned FastEmit_X86ISD_FAND_MVT_f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VFsANDPSrr, &X86::FR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::FsANDPSrr, &X86::FR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FAND_MVT_f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VFsANDPDrr, &X86::FR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::FsANDPDrr, &X86::FR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FAND_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_X86ISD_FAND_MVT_f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f64: return FastEmit_X86ISD_FAND_MVT_f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::FANDN.

unsigned FastEmit_X86ISD_FANDN_MVT_f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VFsANDNPSrr, &X86::FR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::FsANDNPSrr, &X86::FR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FANDN_MVT_f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VFsANDNPDrr, &X86::FR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::FsANDNPDrr, &X86::FR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FANDN_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_X86ISD_FANDN_MVT_f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f64: return FastEmit_X86ISD_FANDN_MVT_f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::FHADD.

unsigned FastEmit_X86ISD_FHADD_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VHADDPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE3() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::HADDPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FHADD_MVT_v8f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VHADDPSYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FHADD_MVT_v2f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VHADDPDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE3() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::HADDPDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FHADD_MVT_v4f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VHADDPDYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FHADD_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v4f32: return FastEmit_X86ISD_FHADD_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8f32: return FastEmit_X86ISD_FHADD_MVT_v8f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f64: return FastEmit_X86ISD_FHADD_MVT_v2f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f64: return FastEmit_X86ISD_FHADD_MVT_v4f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::FHSUB.

unsigned FastEmit_X86ISD_FHSUB_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VHSUBPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE3() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::HSUBPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FHSUB_MVT_v8f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VHSUBPSYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FHSUB_MVT_v2f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VHSUBPDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE3() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::HSUBPDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FHSUB_MVT_v4f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VHSUBPDYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FHSUB_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v4f32: return FastEmit_X86ISD_FHSUB_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8f32: return FastEmit_X86ISD_FHSUB_MVT_v8f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f64: return FastEmit_X86ISD_FHSUB_MVT_v2f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f64: return FastEmit_X86ISD_FHSUB_MVT_v4f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::FMAX.

unsigned FastEmit_X86ISD_FMAX_MVT_f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VMAXSSrr, &X86::FR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::MAXSSrr, &X86::FR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMAX_MVT_f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VMAXSDrr, &X86::FR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::MAXSDrr, &X86::FR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMAX_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VMAXPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::MAXPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMAX_MVT_v8f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VMAXPSYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMAX_MVT_v2f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VMAXPDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::MAXPDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMAX_MVT_v4f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VMAXPDYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMAX_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_X86ISD_FMAX_MVT_f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f64: return FastEmit_X86ISD_FMAX_MVT_f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f32: return FastEmit_X86ISD_FMAX_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8f32: return FastEmit_X86ISD_FMAX_MVT_v8f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f64: return FastEmit_X86ISD_FMAX_MVT_v2f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f64: return FastEmit_X86ISD_FMAX_MVT_v4f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::FMAXC.

unsigned FastEmit_X86ISD_FMAXC_MVT_f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VMAXCSSrr, &X86::FR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::MAXCSSrr, &X86::FR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMAXC_MVT_f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VMAXCSDrr, &X86::FR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::MAXCSDrr, &X86::FR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMAXC_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VMAXCPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::MAXCPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMAXC_MVT_v8f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VMAXCPSYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMAXC_MVT_v2f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VMAXCPDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::MAXCPDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMAXC_MVT_v4f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VMAXCPDYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMAXC_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_X86ISD_FMAXC_MVT_f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f64: return FastEmit_X86ISD_FMAXC_MVT_f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f32: return FastEmit_X86ISD_FMAXC_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8f32: return FastEmit_X86ISD_FMAXC_MVT_v8f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f64: return FastEmit_X86ISD_FMAXC_MVT_v2f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f64: return FastEmit_X86ISD_FMAXC_MVT_v4f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::FMIN.

unsigned FastEmit_X86ISD_FMIN_MVT_f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VMINSSrr, &X86::FR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::MINSSrr, &X86::FR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMIN_MVT_f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VMINSDrr, &X86::FR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::MINSDrr, &X86::FR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMIN_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VMINPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::MINPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMIN_MVT_v8f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VMINPSYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMIN_MVT_v2f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VMINPDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::MINPDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMIN_MVT_v4f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VMINPDYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMIN_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_X86ISD_FMIN_MVT_f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f64: return FastEmit_X86ISD_FMIN_MVT_f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f32: return FastEmit_X86ISD_FMIN_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8f32: return FastEmit_X86ISD_FMIN_MVT_v8f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f64: return FastEmit_X86ISD_FMIN_MVT_v2f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f64: return FastEmit_X86ISD_FMIN_MVT_v4f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::FMINC.

unsigned FastEmit_X86ISD_FMINC_MVT_f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VMINCSSrr, &X86::FR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::MINCSSrr, &X86::FR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMINC_MVT_f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VMINCSDrr, &X86::FR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::MINCSDrr, &X86::FR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMINC_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VMINCPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::MINCPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMINC_MVT_v8f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VMINCPSYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMINC_MVT_v2f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VMINCPDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::MINCPDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMINC_MVT_v4f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VMINCPDYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMINC_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_X86ISD_FMINC_MVT_f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f64: return FastEmit_X86ISD_FMINC_MVT_f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f32: return FastEmit_X86ISD_FMINC_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8f32: return FastEmit_X86ISD_FMINC_MVT_v8f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f64: return FastEmit_X86ISD_FMINC_MVT_v2f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f64: return FastEmit_X86ISD_FMINC_MVT_v4f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::FOR.

unsigned FastEmit_X86ISD_FOR_MVT_f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VFsORPSrr, &X86::FR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::FsORPSrr, &X86::FR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FOR_MVT_f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VFsORPDrr, &X86::FR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::FsORPDrr, &X86::FR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FOR_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_X86ISD_FOR_MVT_f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f64: return FastEmit_X86ISD_FOR_MVT_f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::FXOR.

unsigned FastEmit_X86ISD_FXOR_MVT_f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VFsXORPSrr, &X86::FR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::FsXORPSrr, &X86::FR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FXOR_MVT_f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VFsXORPDrr, &X86::FR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::FsXORPDrr, &X86::FR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FXOR_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_X86ISD_FXOR_MVT_f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f64: return FastEmit_X86ISD_FXOR_MVT_f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::HADD.

unsigned FastEmit_X86ISD_HADD_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPHADDWrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSSE3() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PHADDWrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_HADD_MVT_v16i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i16)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPHADDWYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_HADD_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPHADDDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSSE3() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PHADDDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_HADD_MVT_v8i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i32)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPHADDDYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_HADD_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i16: return FastEmit_X86ISD_HADD_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i16: return FastEmit_X86ISD_HADD_MVT_v16i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_X86ISD_HADD_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i32: return FastEmit_X86ISD_HADD_MVT_v8i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::HSUB.

unsigned FastEmit_X86ISD_HSUB_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPHSUBWrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSSE3() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PHSUBWrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_HSUB_MVT_v16i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i16)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPHSUBWYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_HSUB_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPHSUBDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSSE3() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PHSUBDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_HSUB_MVT_v8i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i32)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPHSUBDYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_HSUB_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i16: return FastEmit_X86ISD_HSUB_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i16: return FastEmit_X86ISD_HSUB_MVT_v16i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_X86ISD_HSUB_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i32: return FastEmit_X86ISD_HSUB_MVT_v8i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::KORTEST.

unsigned FastEmit_X86ISD_KORTEST_MVT_v16i1_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasAVX512())) {
    return FastEmitInst_rr(X86::KORTESTWrr, &X86::VK16RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_KORTEST_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v16i1: return FastEmit_X86ISD_KORTEST_MVT_v16i1_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::KTEST.

unsigned FastEmit_X86ISD_KTEST_MVT_v16i1_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasAVX512())) {
    return FastEmitInst_rr(X86::KTESTWrr, &X86::VK16RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_KTEST_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v16i1: return FastEmit_X86ISD_KTEST_MVT_v16i1_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::MOVHLPS.

unsigned FastEmit_X86ISD_MOVHLPS_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VMOVHLPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::MOVHLPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_MOVHLPS_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VMOVHLPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::MOVHLPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_MOVHLPS_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v4i32: return FastEmit_X86ISD_MOVHLPS_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f32: return FastEmit_X86ISD_MOVHLPS_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::MOVLHPS.

unsigned FastEmit_X86ISD_MOVLHPS_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VMOVLHPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::MOVLHPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_MOVLHPS_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VMOVLHPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::MOVLHPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_MOVLHPS_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VMOVLHPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::MOVLHPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_MOVLHPS_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v4i32: return FastEmit_X86ISD_MOVLHPS_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_X86ISD_MOVLHPS_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f32: return FastEmit_X86ISD_MOVLHPS_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::PCMPEQ.

unsigned FastEmit_X86ISD_PCMPEQ_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPCMPEQBrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PCMPEQBrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_PCMPEQ_MVT_v32i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v32i8)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPCMPEQBYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_PCMPEQ_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPCMPEQWrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PCMPEQWrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_PCMPEQ_MVT_v16i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i16)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPCMPEQWYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_PCMPEQ_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPCMPEQDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PCMPEQDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_PCMPEQ_MVT_v8i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i32)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPCMPEQDYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_PCMPEQ_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPCMPEQQrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE41() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PCMPEQQrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_PCMPEQ_MVT_v4i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i64)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPCMPEQQYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_PCMPEQ_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v16i8: return FastEmit_X86ISD_PCMPEQ_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v32i8: return FastEmit_X86ISD_PCMPEQ_MVT_v32i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_X86ISD_PCMPEQ_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i16: return FastEmit_X86ISD_PCMPEQ_MVT_v16i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_X86ISD_PCMPEQ_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i32: return FastEmit_X86ISD_PCMPEQ_MVT_v8i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_X86ISD_PCMPEQ_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i64: return FastEmit_X86ISD_PCMPEQ_MVT_v4i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::PCMPGT.

unsigned FastEmit_X86ISD_PCMPGT_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPCMPGTBrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PCMPGTBrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_PCMPGT_MVT_v32i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v32i8)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPCMPGTBYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_PCMPGT_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPCMPGTWrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PCMPGTWrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_PCMPGT_MVT_v16i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i16)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPCMPGTWYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_PCMPGT_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPCMPGTDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PCMPGTDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_PCMPGT_MVT_v8i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i32)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPCMPGTDYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_PCMPGT_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPCMPGTQrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE42() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PCMPGTQrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_PCMPGT_MVT_v4i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i64)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPCMPGTQYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_PCMPGT_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v16i8: return FastEmit_X86ISD_PCMPGT_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v32i8: return FastEmit_X86ISD_PCMPGT_MVT_v32i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_X86ISD_PCMPGT_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i16: return FastEmit_X86ISD_PCMPGT_MVT_v16i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_X86ISD_PCMPGT_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i32: return FastEmit_X86ISD_PCMPGT_MVT_v8i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_X86ISD_PCMPGT_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i64: return FastEmit_X86ISD_PCMPGT_MVT_v4i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::PMULUDQ.

unsigned FastEmit_X86ISD_PMULUDQ_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPMULUDQrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PMULUDQrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_PMULUDQ_MVT_v8i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i64)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPMULUDQYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_PMULUDQ_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v4i32: return FastEmit_X86ISD_PMULUDQ_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i32: return FastEmit_X86ISD_PMULUDQ_MVT_v8i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::PSHUFB.

unsigned FastEmit_X86ISD_PSHUFB_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPSHUFBrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSSE3() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PSHUFBrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_PSHUFB_MVT_v32i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v32i8)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPSHUFBYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_PSHUFB_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v16i8: return FastEmit_X86ISD_PSHUFB_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v32i8: return FastEmit_X86ISD_PSHUFB_MVT_v32i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::PSIGN.

unsigned FastEmit_X86ISD_PSIGN_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPSIGNBrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSSE3() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PSIGNBrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_PSIGN_MVT_v32i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v32i8)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPSIGNBYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_PSIGN_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPSIGNWrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSSE3() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PSIGNWrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_PSIGN_MVT_v16i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i16)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPSIGNWYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_PSIGN_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPSIGNDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSSE3() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PSIGNDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_PSIGN_MVT_v8i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i32)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPSIGNDYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_PSIGN_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v16i8: return FastEmit_X86ISD_PSIGN_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v32i8: return FastEmit_X86ISD_PSIGN_MVT_v32i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_X86ISD_PSIGN_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i16: return FastEmit_X86ISD_PSIGN_MVT_v16i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_X86ISD_PSIGN_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i32: return FastEmit_X86ISD_PSIGN_MVT_v8i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::PTEST.

unsigned FastEmit_X86ISD_PTEST_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPTESTrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE41() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PTESTrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_PTEST_MVT_v4i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPTESTYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_PTEST_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v2i64: return FastEmit_X86ISD_PTEST_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i64: return FastEmit_X86ISD_PTEST_MVT_v4i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::SMAX.

unsigned FastEmit_X86ISD_SMAX_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPMAXSBrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE41() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PMAXSBrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_SMAX_MVT_v32i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v32i8)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPMAXSBYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_SMAX_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPMAXSWrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PMAXSWrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_SMAX_MVT_v16i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i16)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPMAXSWYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_SMAX_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPMAXSDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE41() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PMAXSDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_SMAX_MVT_v8i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i32)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPMAXSDYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_SMAX_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v16i8: return FastEmit_X86ISD_SMAX_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v32i8: return FastEmit_X86ISD_SMAX_MVT_v32i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_X86ISD_SMAX_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i16: return FastEmit_X86ISD_SMAX_MVT_v16i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_X86ISD_SMAX_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i32: return FastEmit_X86ISD_SMAX_MVT_v8i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::SMIN.

unsigned FastEmit_X86ISD_SMIN_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPMINSBrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE41() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PMINSBrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_SMIN_MVT_v32i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v32i8)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPMINSBYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_SMIN_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPMINSWrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PMINSWrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_SMIN_MVT_v16i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i16)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPMINSWYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_SMIN_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPMINSDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE41() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PMINSDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_SMIN_MVT_v8i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i32)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPMINSDYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_SMIN_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v16i8: return FastEmit_X86ISD_SMIN_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v32i8: return FastEmit_X86ISD_SMIN_MVT_v32i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_X86ISD_SMIN_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i16: return FastEmit_X86ISD_SMIN_MVT_v16i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_X86ISD_SMIN_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i32: return FastEmit_X86ISD_SMIN_MVT_v8i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::SUBUS.

unsigned FastEmit_X86ISD_SUBUS_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPSUBUSBrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PSUBUSBrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_SUBUS_MVT_v32i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v32i8)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPSUBUSBYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_SUBUS_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPSUBUSWrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PSUBUSWrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_SUBUS_MVT_v16i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i16)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPSUBUSWYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_SUBUS_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v16i8: return FastEmit_X86ISD_SUBUS_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v32i8: return FastEmit_X86ISD_SUBUS_MVT_v32i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_X86ISD_SUBUS_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i16: return FastEmit_X86ISD_SUBUS_MVT_v16i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::TESTP.

unsigned FastEmit_X86ISD_TESTP_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VTESTPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_TESTP_MVT_v8f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VTESTPSYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_TESTP_MVT_v2f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VTESTPDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_TESTP_MVT_v4f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VTESTPDYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_TESTP_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v4f32: return FastEmit_X86ISD_TESTP_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8f32: return FastEmit_X86ISD_TESTP_MVT_v8f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f64: return FastEmit_X86ISD_TESTP_MVT_v2f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f64: return FastEmit_X86ISD_TESTP_MVT_v4f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::UCOMI.

unsigned FastEmit_X86ISD_UCOMI_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::Int_VUCOMISSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::Int_UCOMISSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UCOMI_MVT_v2f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::Int_VUCOMISDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::Int_UCOMISDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UCOMI_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v4f32: return FastEmit_X86ISD_UCOMI_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f64: return FastEmit_X86ISD_UCOMI_MVT_v2f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::UMAX.

unsigned FastEmit_X86ISD_UMAX_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPMAXUBrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PMAXUBrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UMAX_MVT_v32i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v32i8)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPMAXUBYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UMAX_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPMAXUWrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE41() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PMAXUWrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UMAX_MVT_v16i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i16)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPMAXUWYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UMAX_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPMAXUDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE41() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PMAXUDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UMAX_MVT_v8i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i32)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPMAXUDYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UMAX_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v16i8: return FastEmit_X86ISD_UMAX_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v32i8: return FastEmit_X86ISD_UMAX_MVT_v32i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_X86ISD_UMAX_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i16: return FastEmit_X86ISD_UMAX_MVT_v16i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_X86ISD_UMAX_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i32: return FastEmit_X86ISD_UMAX_MVT_v8i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::UMIN.

unsigned FastEmit_X86ISD_UMIN_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPMINUBrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PMINUBrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UMIN_MVT_v32i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v32i8)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPMINUBYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UMIN_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPMINUWrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE41() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PMINUWrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UMIN_MVT_v16i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i16)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPMINUWYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UMIN_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPMINUDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE41() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PMINUDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UMIN_MVT_v8i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i32)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPMINUDYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UMIN_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v16i8: return FastEmit_X86ISD_UMIN_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v32i8: return FastEmit_X86ISD_UMIN_MVT_v32i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_X86ISD_UMIN_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i16: return FastEmit_X86ISD_UMIN_MVT_v16i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_X86ISD_UMIN_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i32: return FastEmit_X86ISD_UMIN_MVT_v8i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::UNPCKH.

unsigned FastEmit_X86ISD_UNPCKH_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPUNPCKHBWrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PUNPCKHBWrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UNPCKH_MVT_v32i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v32i8)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPUNPCKHBWYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UNPCKH_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPUNPCKHWDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PUNPCKHWDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UNPCKH_MVT_v16i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i16)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPUNPCKHWDYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UNPCKH_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPUNPCKHDQrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PUNPCKHDQrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UNPCKH_MVT_v8i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i32)
    return 0;
  if ((Subtarget->hasAVX() && !Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VUNPCKHPSYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPUNPCKHDQYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UNPCKH_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPUNPCKHQDQrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PUNPCKHQDQrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UNPCKH_MVT_v4i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i64)
    return 0;
  if ((Subtarget->hasAVX() && !Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VUNPCKHPDYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPUNPCKHQDQYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UNPCKH_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VUNPCKHPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::UNPCKHPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UNPCKH_MVT_v8f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VUNPCKHPSYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UNPCKH_MVT_v2f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VUNPCKHPDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::UNPCKHPDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UNPCKH_MVT_v4f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VUNPCKHPDYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UNPCKH_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v16i8: return FastEmit_X86ISD_UNPCKH_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v32i8: return FastEmit_X86ISD_UNPCKH_MVT_v32i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_X86ISD_UNPCKH_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i16: return FastEmit_X86ISD_UNPCKH_MVT_v16i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_X86ISD_UNPCKH_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i32: return FastEmit_X86ISD_UNPCKH_MVT_v8i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_X86ISD_UNPCKH_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i64: return FastEmit_X86ISD_UNPCKH_MVT_v4i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f32: return FastEmit_X86ISD_UNPCKH_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8f32: return FastEmit_X86ISD_UNPCKH_MVT_v8f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f64: return FastEmit_X86ISD_UNPCKH_MVT_v2f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f64: return FastEmit_X86ISD_UNPCKH_MVT_v4f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::UNPCKL.

unsigned FastEmit_X86ISD_UNPCKL_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPUNPCKLBWrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PUNPCKLBWrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UNPCKL_MVT_v32i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v32i8)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPUNPCKLBWYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UNPCKL_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPUNPCKLWDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PUNPCKLWDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UNPCKL_MVT_v16i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i16)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPUNPCKLWDYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UNPCKL_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPUNPCKLDQrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PUNPCKLDQrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UNPCKL_MVT_v8i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i32)
    return 0;
  if ((Subtarget->hasAVX() && !Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VUNPCKLPSYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPUNPCKLDQYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UNPCKL_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPUNPCKLQDQrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PUNPCKLQDQrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UNPCKL_MVT_v4i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i64)
    return 0;
  if ((Subtarget->hasAVX() && !Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VUNPCKLPDYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPUNPCKLQDQYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UNPCKL_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VUNPCKLPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::UNPCKLPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UNPCKL_MVT_v8f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VUNPCKLPSYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UNPCKL_MVT_v2f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VUNPCKLPDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::UNPCKLPDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UNPCKL_MVT_v4f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VUNPCKLPDYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_UNPCKL_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v16i8: return FastEmit_X86ISD_UNPCKL_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v32i8: return FastEmit_X86ISD_UNPCKL_MVT_v32i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_X86ISD_UNPCKL_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i16: return FastEmit_X86ISD_UNPCKL_MVT_v16i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_X86ISD_UNPCKL_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i32: return FastEmit_X86ISD_UNPCKL_MVT_v8i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_X86ISD_UNPCKL_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i64: return FastEmit_X86ISD_UNPCKL_MVT_v4i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f32: return FastEmit_X86ISD_UNPCKL_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8f32: return FastEmit_X86ISD_UNPCKL_MVT_v8f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f64: return FastEmit_X86ISD_UNPCKL_MVT_v2f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f64: return FastEmit_X86ISD_UNPCKL_MVT_v4f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::VPERMV.

unsigned FastEmit_X86ISD_VPERMV_MVT_v8i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i32)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPERMDYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VPERMV_MVT_v8f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8f32)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rr(X86::VPERMPSYrr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VPERMV_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i32: return FastEmit_X86ISD_VPERMV_MVT_v8i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8f32: return FastEmit_X86ISD_VPERMV_MVT_v8f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::VSHL.

unsigned FastEmit_X86ISD_VSHL_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPSLLWrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PSLLWrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSHL_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPSLLDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PSLLDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSHL_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPSLLQrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PSLLQrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSHL_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i16: return FastEmit_X86ISD_VSHL_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_X86ISD_VSHL_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_X86ISD_VSHL_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::VSRA.

unsigned FastEmit_X86ISD_VSRA_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPSRAWrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PSRAWrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSRA_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPSRADrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PSRADrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSRA_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i16: return FastEmit_X86ISD_VSRA_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_X86ISD_VSRA_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::VSRL.

unsigned FastEmit_X86ISD_VSRL_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPSRLWrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PSRLWrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSRL_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPSRLDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PSRLDrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSRL_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::VPSRLQrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rr(X86::PSRLQrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSRL_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i16: return FastEmit_X86ISD_VSRL_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_X86ISD_VSRL_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_X86ISD_VSRL_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_rr(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (Opcode) {
  case ISD::ADD: return FastEmit_ISD_ADD_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::AND: return FastEmit_ISD_AND_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::FADD: return FastEmit_ISD_FADD_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::FDIV: return FastEmit_ISD_FDIV_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::FMUL: return FastEmit_ISD_FMUL_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::FSUB: return FastEmit_ISD_FSUB_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::MUL: return FastEmit_ISD_MUL_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::OR: return FastEmit_ISD_OR_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::ROTL: return FastEmit_ISD_ROTL_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::ROTR: return FastEmit_ISD_ROTR_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::SHL: return FastEmit_ISD_SHL_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::SRA: return FastEmit_ISD_SRA_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::SRL: return FastEmit_ISD_SRL_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::SUB: return FastEmit_ISD_SUB_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::XOR: return FastEmit_ISD_XOR_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::ANDNP: return FastEmit_X86ISD_ANDNP_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::BT: return FastEmit_X86ISD_BT_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::CMP: return FastEmit_X86ISD_CMP_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::COMI: return FastEmit_X86ISD_COMI_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::FAND: return FastEmit_X86ISD_FAND_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::FANDN: return FastEmit_X86ISD_FANDN_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::FHADD: return FastEmit_X86ISD_FHADD_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::FHSUB: return FastEmit_X86ISD_FHSUB_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::FMAX: return FastEmit_X86ISD_FMAX_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::FMAXC: return FastEmit_X86ISD_FMAXC_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::FMIN: return FastEmit_X86ISD_FMIN_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::FMINC: return FastEmit_X86ISD_FMINC_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::FOR: return FastEmit_X86ISD_FOR_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::FXOR: return FastEmit_X86ISD_FXOR_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::HADD: return FastEmit_X86ISD_HADD_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::HSUB: return FastEmit_X86ISD_HSUB_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::KORTEST: return FastEmit_X86ISD_KORTEST_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::KTEST: return FastEmit_X86ISD_KTEST_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::MOVHLPS: return FastEmit_X86ISD_MOVHLPS_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::MOVLHPS: return FastEmit_X86ISD_MOVLHPS_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::PCMPEQ: return FastEmit_X86ISD_PCMPEQ_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::PCMPGT: return FastEmit_X86ISD_PCMPGT_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::PMULUDQ: return FastEmit_X86ISD_PMULUDQ_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::PSHUFB: return FastEmit_X86ISD_PSHUFB_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::PSIGN: return FastEmit_X86ISD_PSIGN_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::PTEST: return FastEmit_X86ISD_PTEST_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::SMAX: return FastEmit_X86ISD_SMAX_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::SMIN: return FastEmit_X86ISD_SMIN_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::SUBUS: return FastEmit_X86ISD_SUBUS_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::TESTP: return FastEmit_X86ISD_TESTP_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::UCOMI: return FastEmit_X86ISD_UCOMI_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::UMAX: return FastEmit_X86ISD_UMAX_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::UMIN: return FastEmit_X86ISD_UMIN_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::UNPCKH: return FastEmit_X86ISD_UNPCKH_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::UNPCKL: return FastEmit_X86ISD_UNPCKL_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::VPERMV: return FastEmit_X86ISD_VPERMV_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::VSHL: return FastEmit_X86ISD_VSHL_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::VSRA: return FastEmit_X86ISD_VSRA_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case X86ISD::VSRL: return FastEmit_X86ISD_VSRL_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::FMADD.

unsigned FastEmit_X86ISD_FMADD_MVT_f32_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasFMA4())) {
    return FastEmitInst_rrr(X86::VFMADDSS4rr, &X86::FR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMADD_MVT_f64_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((Subtarget->hasFMA4())) {
    return FastEmitInst_rrr(X86::VFMADDSD4rr, &X86::FR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMADD_MVT_v4f32_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasFMA4())) {
    return FastEmitInst_rrr(X86::VFMADDPS4rr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMADD_MVT_v8f32_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v8f32)
    return 0;
  if ((Subtarget->hasFMA4())) {
    return FastEmitInst_rrr(X86::VFMADDPS4rrY, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMADD_MVT_v2f64_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  if ((Subtarget->hasFMA4())) {
    return FastEmitInst_rrr(X86::VFMADDPD4rr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMADD_MVT_v4f64_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v4f64)
    return 0;
  if ((Subtarget->hasFMA4())) {
    return FastEmitInst_rrr(X86::VFMADDPD4rrY, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMADD_rrr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_X86ISD_FMADD_MVT_f32_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::f64: return FastEmit_X86ISD_FMADD_MVT_f64_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::v4f32: return FastEmit_X86ISD_FMADD_MVT_v4f32_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::v8f32: return FastEmit_X86ISD_FMADD_MVT_v8f32_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::v2f64: return FastEmit_X86ISD_FMADD_MVT_v2f64_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::v4f64: return FastEmit_X86ISD_FMADD_MVT_v4f64_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::FMADDSUB.

unsigned FastEmit_X86ISD_FMADDSUB_MVT_v4f32_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasFMA4())) {
    return FastEmitInst_rrr(X86::VFMADDSUBPS4rr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMADDSUB_MVT_v8f32_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v8f32)
    return 0;
  if ((Subtarget->hasFMA4())) {
    return FastEmitInst_rrr(X86::VFMADDSUBPS4rrY, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMADDSUB_MVT_v2f64_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  if ((Subtarget->hasFMA4())) {
    return FastEmitInst_rrr(X86::VFMADDSUBPD4rr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMADDSUB_MVT_v4f64_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v4f64)
    return 0;
  if ((Subtarget->hasFMA4())) {
    return FastEmitInst_rrr(X86::VFMADDSUBPD4rrY, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMADDSUB_rrr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v4f32: return FastEmit_X86ISD_FMADDSUB_MVT_v4f32_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::v8f32: return FastEmit_X86ISD_FMADDSUB_MVT_v8f32_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::v2f64: return FastEmit_X86ISD_FMADDSUB_MVT_v2f64_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::v4f64: return FastEmit_X86ISD_FMADDSUB_MVT_v4f64_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::FMSUB.

unsigned FastEmit_X86ISD_FMSUB_MVT_f32_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasFMA4())) {
    return FastEmitInst_rrr(X86::VFMSUBSS4rr, &X86::FR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMSUB_MVT_f64_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((Subtarget->hasFMA4())) {
    return FastEmitInst_rrr(X86::VFMSUBSD4rr, &X86::FR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMSUB_MVT_v4f32_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasFMA4())) {
    return FastEmitInst_rrr(X86::VFMSUBPS4rr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMSUB_MVT_v8f32_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v8f32)
    return 0;
  if ((Subtarget->hasFMA4())) {
    return FastEmitInst_rrr(X86::VFMSUBPS4rrY, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMSUB_MVT_v2f64_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  if ((Subtarget->hasFMA4())) {
    return FastEmitInst_rrr(X86::VFMSUBPD4rr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMSUB_MVT_v4f64_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v4f64)
    return 0;
  if ((Subtarget->hasFMA4())) {
    return FastEmitInst_rrr(X86::VFMSUBPD4rrY, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMSUB_rrr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_X86ISD_FMSUB_MVT_f32_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::f64: return FastEmit_X86ISD_FMSUB_MVT_f64_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::v4f32: return FastEmit_X86ISD_FMSUB_MVT_v4f32_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::v8f32: return FastEmit_X86ISD_FMSUB_MVT_v8f32_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::v2f64: return FastEmit_X86ISD_FMSUB_MVT_v2f64_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::v4f64: return FastEmit_X86ISD_FMSUB_MVT_v4f64_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::FMSUBADD.

unsigned FastEmit_X86ISD_FMSUBADD_MVT_v4f32_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasFMA4())) {
    return FastEmitInst_rrr(X86::VFMSUBADDPS4rr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMSUBADD_MVT_v8f32_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v8f32)
    return 0;
  if ((Subtarget->hasFMA4())) {
    return FastEmitInst_rrr(X86::VFMSUBADDPS4rrY, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMSUBADD_MVT_v2f64_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  if ((Subtarget->hasFMA4())) {
    return FastEmitInst_rrr(X86::VFMSUBADDPD4rr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMSUBADD_MVT_v4f64_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v4f64)
    return 0;
  if ((Subtarget->hasFMA4())) {
    return FastEmitInst_rrr(X86::VFMSUBADDPD4rrY, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FMSUBADD_rrr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v4f32: return FastEmit_X86ISD_FMSUBADD_MVT_v4f32_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::v8f32: return FastEmit_X86ISD_FMSUBADD_MVT_v8f32_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::v2f64: return FastEmit_X86ISD_FMSUBADD_MVT_v2f64_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::v4f64: return FastEmit_X86ISD_FMSUBADD_MVT_v4f64_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::FNMADD.

unsigned FastEmit_X86ISD_FNMADD_MVT_f32_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasFMA4())) {
    return FastEmitInst_rrr(X86::VFNMADDSS4rr, &X86::FR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FNMADD_MVT_f64_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((Subtarget->hasFMA4())) {
    return FastEmitInst_rrr(X86::VFNMADDSD4rr, &X86::FR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FNMADD_MVT_v4f32_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasFMA4())) {
    return FastEmitInst_rrr(X86::VFNMADDPS4rr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FNMADD_MVT_v8f32_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v8f32)
    return 0;
  if ((Subtarget->hasFMA4())) {
    return FastEmitInst_rrr(X86::VFNMADDPS4rrY, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FNMADD_MVT_v2f64_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  if ((Subtarget->hasFMA4())) {
    return FastEmitInst_rrr(X86::VFNMADDPD4rr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FNMADD_MVT_v4f64_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v4f64)
    return 0;
  if ((Subtarget->hasFMA4())) {
    return FastEmitInst_rrr(X86::VFNMADDPD4rrY, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FNMADD_rrr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_X86ISD_FNMADD_MVT_f32_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::f64: return FastEmit_X86ISD_FNMADD_MVT_f64_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::v4f32: return FastEmit_X86ISD_FNMADD_MVT_v4f32_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::v8f32: return FastEmit_X86ISD_FNMADD_MVT_v8f32_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::v2f64: return FastEmit_X86ISD_FNMADD_MVT_v2f64_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::v4f64: return FastEmit_X86ISD_FNMADD_MVT_v4f64_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::FNMSUB.

unsigned FastEmit_X86ISD_FNMSUB_MVT_f32_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasFMA4())) {
    return FastEmitInst_rrr(X86::VFNMSUBSS4rr, &X86::FR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FNMSUB_MVT_f64_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((Subtarget->hasFMA4())) {
    return FastEmitInst_rrr(X86::VFNMSUBSD4rr, &X86::FR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FNMSUB_MVT_v4f32_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasFMA4())) {
    return FastEmitInst_rrr(X86::VFNMSUBPS4rr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FNMSUB_MVT_v8f32_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v8f32)
    return 0;
  if ((Subtarget->hasFMA4())) {
    return FastEmitInst_rrr(X86::VFNMSUBPS4rrY, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FNMSUB_MVT_v2f64_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  if ((Subtarget->hasFMA4())) {
    return FastEmitInst_rrr(X86::VFNMSUBPD4rr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FNMSUB_MVT_v4f64_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v4f64)
    return 0;
  if ((Subtarget->hasFMA4())) {
    return FastEmitInst_rrr(X86::VFNMSUBPD4rrY, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FNMSUB_rrr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_X86ISD_FNMSUB_MVT_f32_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::f64: return FastEmit_X86ISD_FNMSUB_MVT_f64_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::v4f32: return FastEmit_X86ISD_FNMSUB_MVT_v4f32_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::v8f32: return FastEmit_X86ISD_FNMSUB_MVT_v8f32_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::v2f64: return FastEmit_X86ISD_FNMSUB_MVT_v2f64_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::v4f64: return FastEmit_X86ISD_FNMSUB_MVT_v4f64_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_rrr(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  switch (Opcode) {
  case X86ISD::FMADD: return FastEmit_X86ISD_FMADD_rrr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case X86ISD::FMADDSUB: return FastEmit_X86ISD_FMADDSUB_rrr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case X86ISD::FMSUB: return FastEmit_X86ISD_FMSUB_rrr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case X86ISD::FMSUBADD: return FastEmit_X86ISD_FMSUBADD_rrr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case X86ISD::FNMADD: return FastEmit_X86ISD_FNMADD_rrr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case X86ISD::FNMSUB: return FastEmit_X86ISD_FNMSUB_rrr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::BLENDI.

unsigned FastEmit_X86ISD_BLENDI_MVT_v8i16_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rri(X86::VPBLENDWrri, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  if ((Subtarget->hasSSE41() && !Subtarget->hasAVX())) {
    return FastEmitInst_rri(X86::PBLENDWrri, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_X86ISD_BLENDI_MVT_v16i16_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v16i16)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rri(X86::VPBLENDWYrri, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_X86ISD_BLENDI_MVT_v4i32_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_rri(X86::VPBLENDDrri, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
}

unsigned FastEmit_X86ISD_BLENDI_MVT_v8i32_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v8i32)
    return 0;
  return FastEmitInst_rri(X86::VPBLENDDYrri, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
}

unsigned FastEmit_X86ISD_BLENDI_MVT_v4f32_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rri(X86::VBLENDPSrri, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  if ((Subtarget->hasSSE41() && !Subtarget->hasAVX())) {
    return FastEmitInst_rri(X86::BLENDPSrri, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_X86ISD_BLENDI_MVT_v8f32_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v8f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rri(X86::VBLENDPSYrri, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_X86ISD_BLENDI_MVT_v2f64_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rri(X86::VBLENDPDrri, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  if ((Subtarget->hasSSE41() && !Subtarget->hasAVX())) {
    return FastEmitInst_rri(X86::BLENDPDrri, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_X86ISD_BLENDI_MVT_v4f64_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v4f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rri(X86::VBLENDPDYrri, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_X86ISD_BLENDI_rri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  switch (VT.SimpleTy) {
  case MVT::v8i16: return FastEmit_X86ISD_BLENDI_MVT_v8i16_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v16i16: return FastEmit_X86ISD_BLENDI_MVT_v16i16_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v4i32: return FastEmit_X86ISD_BLENDI_MVT_v4i32_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v8i32: return FastEmit_X86ISD_BLENDI_MVT_v8i32_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v4f32: return FastEmit_X86ISD_BLENDI_MVT_v4f32_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v8f32: return FastEmit_X86ISD_BLENDI_MVT_v8f32_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v2f64: return FastEmit_X86ISD_BLENDI_MVT_v2f64_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v4f64: return FastEmit_X86ISD_BLENDI_MVT_v4f64_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::CMPP.

unsigned FastEmit_X86ISD_CMPP_MVT_v4f32_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rri(X86::VCMPPSrri, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rri(X86::CMPPSrri, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_X86ISD_CMPP_MVT_v8f32_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v8i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rri(X86::VCMPPSYrri, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_X86ISD_CMPP_MVT_v2f64_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rri(X86::VCMPPDrri, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rri(X86::CMPPDrri, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_X86ISD_CMPP_MVT_v4f64_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v4i64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rri(X86::VCMPPDYrri, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_X86ISD_CMPP_rri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  switch (VT.SimpleTy) {
  case MVT::v4f32: return FastEmit_X86ISD_CMPP_MVT_v4f32_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v8f32: return FastEmit_X86ISD_CMPP_MVT_v8f32_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v2f64: return FastEmit_X86ISD_CMPP_MVT_v2f64_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v4f64: return FastEmit_X86ISD_CMPP_MVT_v4f64_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::FSETCCsd.

unsigned FastEmit_X86ISD_FSETCCsd_MVT_f64_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rri(X86::VCMPSDrr, &X86::FR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rri(X86::CMPSDrr, &X86::FR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FSETCCsd_rri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  switch (VT.SimpleTy) {
  case MVT::f64: return FastEmit_X86ISD_FSETCCsd_MVT_f64_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::FSETCCss.

unsigned FastEmit_X86ISD_FSETCCss_MVT_f32_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rri(X86::VCMPSSrr, &X86::FR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rri(X86::CMPSSrr, &X86::FR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_X86ISD_FSETCCss_rri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_X86ISD_FSETCCss_MVT_f32_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::INSERTPS.

unsigned FastEmit_X86ISD_INSERTPS_MVT_v4f32_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rri(X86::VINSERTPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  if ((Subtarget->hasAVX512())) {
    return FastEmitInst_rri(X86::VINSERTPSzrr, &X86::VR128XRegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  if ((Subtarget->hasSSE41() && !Subtarget->hasAVX())) {
    return FastEmitInst_rri(X86::INSERTPSrr, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_X86ISD_INSERTPS_rri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  switch (VT.SimpleTy) {
  case MVT::v4f32: return FastEmit_X86ISD_INSERTPS_MVT_v4f32_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::SHLD.

unsigned FastEmit_X86ISD_SHLD_MVT_i16_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::i16)
    return 0;
  return FastEmitInst_rri(X86::SHLD16rri8, &X86::GR16RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
}

unsigned FastEmit_X86ISD_SHLD_MVT_i32_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rri(X86::SHLD32rri8, &X86::GR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
}

unsigned FastEmit_X86ISD_SHLD_MVT_i64_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_rri(X86::SHLD64rri8, &X86::GR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
}

unsigned FastEmit_X86ISD_SHLD_rri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  switch (VT.SimpleTy) {
  case MVT::i16: return FastEmit_X86ISD_SHLD_MVT_i16_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::i32: return FastEmit_X86ISD_SHLD_MVT_i32_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::i64: return FastEmit_X86ISD_SHLD_MVT_i64_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::SHRD.

unsigned FastEmit_X86ISD_SHRD_MVT_i16_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::i16)
    return 0;
  return FastEmitInst_rri(X86::SHRD16rri8, &X86::GR16RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
}

unsigned FastEmit_X86ISD_SHRD_MVT_i32_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rri(X86::SHRD32rri8, &X86::GR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
}

unsigned FastEmit_X86ISD_SHRD_MVT_i64_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_rri(X86::SHRD64rri8, &X86::GR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
}

unsigned FastEmit_X86ISD_SHRD_rri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  switch (VT.SimpleTy) {
  case MVT::i16: return FastEmit_X86ISD_SHRD_MVT_i16_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::i32: return FastEmit_X86ISD_SHRD_MVT_i32_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::i64: return FastEmit_X86ISD_SHRD_MVT_i64_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::SHUFP.

unsigned FastEmit_X86ISD_SHUFP_MVT_v4i32_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rri(X86::VSHUFPSrri, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rri(X86::SHUFPSrri, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_X86ISD_SHUFP_MVT_v8i32_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v8i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rri(X86::VSHUFPSYrri, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_X86ISD_SHUFP_MVT_v2i64_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rri(X86::VSHUFPDrri, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rri(X86::SHUFPDrri, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_X86ISD_SHUFP_MVT_v4i64_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v4i64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rri(X86::VSHUFPDYrri, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_X86ISD_SHUFP_MVT_v4f32_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rri(X86::VSHUFPSrri, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  if ((Subtarget->hasSSE1() && !Subtarget->hasAVX())) {
    return FastEmitInst_rri(X86::SHUFPSrri, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_X86ISD_SHUFP_MVT_v8f32_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v8f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rri(X86::VSHUFPSYrri, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_X86ISD_SHUFP_MVT_v2f64_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rri(X86::VSHUFPDrri, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_rri(X86::SHUFPDrri, &X86::VR128RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_X86ISD_SHUFP_MVT_v4f64_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v4f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rri(X86::VSHUFPDYrri, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_X86ISD_SHUFP_rri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  switch (VT.SimpleTy) {
  case MVT::v4i32: return FastEmit_X86ISD_SHUFP_MVT_v4i32_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v8i32: return FastEmit_X86ISD_SHUFP_MVT_v8i32_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v2i64: return FastEmit_X86ISD_SHUFP_MVT_v2i64_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v4i64: return FastEmit_X86ISD_SHUFP_MVT_v4i64_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v4f32: return FastEmit_X86ISD_SHUFP_MVT_v4f32_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v8f32: return FastEmit_X86ISD_SHUFP_MVT_v8f32_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v2f64: return FastEmit_X86ISD_SHUFP_MVT_v2f64_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v4f64: return FastEmit_X86ISD_SHUFP_MVT_v4f64_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::VPERM2X128.

unsigned FastEmit_X86ISD_VPERM2X128_MVT_v32i8_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v32i8)
    return 0;
  if ((Subtarget->hasAVX() && !Subtarget->hasAVX2())) {
    return FastEmitInst_rri(X86::VPERM2F128rr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rri(X86::VPERM2I128rr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VPERM2X128_MVT_v16i16_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v16i16)
    return 0;
  if ((Subtarget->hasAVX() && !Subtarget->hasAVX2())) {
    return FastEmitInst_rri(X86::VPERM2F128rr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rri(X86::VPERM2I128rr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VPERM2X128_MVT_v8i32_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v8i32)
    return 0;
  if ((Subtarget->hasAVX() && !Subtarget->hasAVX2())) {
    return FastEmitInst_rri(X86::VPERM2F128rr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rri(X86::VPERM2I128rr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VPERM2X128_MVT_v4i64_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v4i64)
    return 0;
  if ((Subtarget->hasAVX() && !Subtarget->hasAVX2())) {
    return FastEmitInst_rri(X86::VPERM2F128rr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_rri(X86::VPERM2I128rr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VPERM2X128_MVT_v8f32_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v8f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rri(X86::VPERM2F128rr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VPERM2X128_MVT_v4f64_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v4f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_rri(X86::VPERM2F128rr, &X86::VR256RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VPERM2X128_rri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  switch (VT.SimpleTy) {
  case MVT::v32i8: return FastEmit_X86ISD_VPERM2X128_MVT_v32i8_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v16i16: return FastEmit_X86ISD_VPERM2X128_MVT_v16i16_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v8i32: return FastEmit_X86ISD_VPERM2X128_MVT_v8i32_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v4i64: return FastEmit_X86ISD_VPERM2X128_MVT_v4i64_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v8f32: return FastEmit_X86ISD_VPERM2X128_MVT_v8f32_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v4f64: return FastEmit_X86ISD_VPERM2X128_MVT_v4f64_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_rri(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  switch (Opcode) {
  case X86ISD::BLENDI: return FastEmit_X86ISD_BLENDI_rri(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case X86ISD::CMPP: return FastEmit_X86ISD_CMPP_rri(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case X86ISD::FSETCCsd: return FastEmit_X86ISD_FSETCCsd_rri(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case X86ISD::FSETCCss: return FastEmit_X86ISD_FSETCCss_rri(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case X86ISD::INSERTPS: return FastEmit_X86ISD_INSERTPS_rri(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case X86ISD::SHLD: return FastEmit_X86ISD_SHLD_rri(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case X86ISD::SHRD: return FastEmit_X86ISD_SHRD_rri(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case X86ISD::SHUFP: return FastEmit_X86ISD_SHUFP_rri(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case X86ISD::VPERM2X128: return FastEmit_X86ISD_VPERM2X128_rri(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  default: return 0;
  }
}

// FastEmit functions for ISD::ADD.

unsigned FastEmit_ISD_ADD_MVT_i8_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i8)
    return 0;
  return FastEmitInst_ri(X86::ADD8ri, &X86::GR8RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_ADD_MVT_i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i16)
    return 0;
  return FastEmitInst_ri(X86::ADD16ri, &X86::GR16RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_ADD_MVT_i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_ri(X86::ADD32ri, &X86::GR32RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_ADD_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i8: return FastEmit_ISD_ADD_MVT_i8_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::i16: return FastEmit_ISD_ADD_MVT_i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::i32: return FastEmit_ISD_ADD_MVT_i32_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::AND.

unsigned FastEmit_ISD_AND_MVT_i8_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i8)
    return 0;
  return FastEmitInst_ri(X86::AND8ri, &X86::GR8RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_AND_MVT_i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i16)
    return 0;
  return FastEmitInst_ri(X86::AND16ri, &X86::GR16RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_AND_MVT_i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_ri(X86::AND32ri, &X86::GR32RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_AND_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i8: return FastEmit_ISD_AND_MVT_i8_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::i16: return FastEmit_ISD_AND_MVT_i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::i32: return FastEmit_ISD_AND_MVT_i32_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::EXTRACT_VECTOR_ELT.

unsigned FastEmit_ISD_EXTRACT_VECTOR_ELT_MVT_v4i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::VPEXTRDrr, &X86::GR32RegClass, Op0, Op0IsKill, imm1);
  }
  if ((Subtarget->hasSSE41() && !Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::PEXTRDrr, &X86::GR32RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ISD_EXTRACT_VECTOR_ELT_MVT_v2i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::VPEXTRQrr, &X86::GR64RegClass, Op0, Op0IsKill, imm1);
  }
  if ((Subtarget->hasSSE41() && !Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::PEXTRQrr, &X86::GR64RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ISD_EXTRACT_VECTOR_ELT_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v4i32: return FastEmit_ISD_EXTRACT_VECTOR_ELT_MVT_v4i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i64: return FastEmit_ISD_EXTRACT_VECTOR_ELT_MVT_v2i64_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::MUL.

unsigned FastEmit_ISD_MUL_MVT_i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i16)
    return 0;
  return FastEmitInst_ri(X86::IMUL16rri, &X86::GR16RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_MUL_MVT_i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_ri(X86::IMUL32rri, &X86::GR32RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_MUL_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i16: return FastEmit_ISD_MUL_MVT_i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::i32: return FastEmit_ISD_MUL_MVT_i32_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::OR.

unsigned FastEmit_ISD_OR_MVT_i8_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i8)
    return 0;
  return FastEmitInst_ri(X86::OR8ri, &X86::GR8RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_OR_MVT_i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i16)
    return 0;
  return FastEmitInst_ri(X86::OR16ri, &X86::GR16RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_OR_MVT_i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_ri(X86::OR32ri, &X86::GR32RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_OR_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i8: return FastEmit_ISD_OR_MVT_i8_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::i16: return FastEmit_ISD_OR_MVT_i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::i32: return FastEmit_ISD_OR_MVT_i32_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::ROTL.

unsigned FastEmit_ISD_ROTL_MVT_i8_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i8)
    return 0;
  return FastEmitInst_ri(X86::ROL8ri, &X86::GR8RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_ROTL_MVT_i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i16)
    return 0;
  return FastEmitInst_ri(X86::ROL16ri, &X86::GR16RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_ROTL_MVT_i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_ri(X86::ROL32ri, &X86::GR32RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_ROTL_MVT_i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_ri(X86::ROL64ri, &X86::GR64RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_ROTL_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i8: return FastEmit_ISD_ROTL_MVT_i8_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::i16: return FastEmit_ISD_ROTL_MVT_i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::i32: return FastEmit_ISD_ROTL_MVT_i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::i64: return FastEmit_ISD_ROTL_MVT_i64_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::ROTR.

unsigned FastEmit_ISD_ROTR_MVT_i8_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i8)
    return 0;
  return FastEmitInst_ri(X86::ROR8ri, &X86::GR8RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_ROTR_MVT_i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i16)
    return 0;
  return FastEmitInst_ri(X86::ROR16ri, &X86::GR16RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_ROTR_MVT_i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_ri(X86::ROR32ri, &X86::GR32RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_ROTR_MVT_i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_ri(X86::ROR64ri, &X86::GR64RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_ROTR_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i8: return FastEmit_ISD_ROTR_MVT_i8_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::i16: return FastEmit_ISD_ROTR_MVT_i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::i32: return FastEmit_ISD_ROTR_MVT_i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::i64: return FastEmit_ISD_ROTR_MVT_i64_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::SHL.

unsigned FastEmit_ISD_SHL_MVT_i8_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i8)
    return 0;
  return FastEmitInst_ri(X86::SHL8ri, &X86::GR8RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_SHL_MVT_i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i16)
    return 0;
  return FastEmitInst_ri(X86::SHL16ri, &X86::GR16RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_SHL_MVT_i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_ri(X86::SHL32ri, &X86::GR32RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_SHL_MVT_i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_ri(X86::SHL64ri, &X86::GR64RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_SHL_MVT_v16i1_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v16i1)
    return 0;
  if ((Subtarget->hasAVX512())) {
    return FastEmitInst_ri(X86::KSHIFTLWri, &X86::VK16RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ISD_SHL_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i8: return FastEmit_ISD_SHL_MVT_i8_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::i16: return FastEmit_ISD_SHL_MVT_i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::i32: return FastEmit_ISD_SHL_MVT_i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::i64: return FastEmit_ISD_SHL_MVT_i64_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v16i1: return FastEmit_ISD_SHL_MVT_v16i1_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::SRA.

unsigned FastEmit_ISD_SRA_MVT_i8_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i8)
    return 0;
  return FastEmitInst_ri(X86::SAR8ri, &X86::GR8RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_SRA_MVT_i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i16)
    return 0;
  return FastEmitInst_ri(X86::SAR16ri, &X86::GR16RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_SRA_MVT_i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_ri(X86::SAR32ri, &X86::GR32RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_SRA_MVT_i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_ri(X86::SAR64ri, &X86::GR64RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_SRA_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i8: return FastEmit_ISD_SRA_MVT_i8_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::i16: return FastEmit_ISD_SRA_MVT_i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::i32: return FastEmit_ISD_SRA_MVT_i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::i64: return FastEmit_ISD_SRA_MVT_i64_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::SRL.

unsigned FastEmit_ISD_SRL_MVT_i8_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i8)
    return 0;
  return FastEmitInst_ri(X86::SHR8ri, &X86::GR8RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_SRL_MVT_i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i16)
    return 0;
  return FastEmitInst_ri(X86::SHR16ri, &X86::GR16RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_SRL_MVT_i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_ri(X86::SHR32ri, &X86::GR32RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_SRL_MVT_i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_ri(X86::SHR64ri, &X86::GR64RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_SRL_MVT_v16i1_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v16i1)
    return 0;
  if ((Subtarget->hasAVX512())) {
    return FastEmitInst_ri(X86::KSHIFTRWri, &X86::VK16RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ISD_SRL_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i8: return FastEmit_ISD_SRL_MVT_i8_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::i16: return FastEmit_ISD_SRL_MVT_i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::i32: return FastEmit_ISD_SRL_MVT_i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::i64: return FastEmit_ISD_SRL_MVT_i64_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v16i1: return FastEmit_ISD_SRL_MVT_v16i1_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::SUB.

unsigned FastEmit_ISD_SUB_MVT_i8_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i8)
    return 0;
  return FastEmitInst_ri(X86::SUB8ri, &X86::GR8RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_SUB_MVT_i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i16)
    return 0;
  return FastEmitInst_ri(X86::SUB16ri, &X86::GR16RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_SUB_MVT_i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_ri(X86::SUB32ri, &X86::GR32RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_SUB_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i8: return FastEmit_ISD_SUB_MVT_i8_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::i16: return FastEmit_ISD_SUB_MVT_i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::i32: return FastEmit_ISD_SUB_MVT_i32_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::XOR.

unsigned FastEmit_ISD_XOR_MVT_i8_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i8)
    return 0;
  return FastEmitInst_ri(X86::XOR8ri, &X86::GR8RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_XOR_MVT_i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i16)
    return 0;
  return FastEmitInst_ri(X86::XOR16ri, &X86::GR16RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_XOR_MVT_i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_ri(X86::XOR32ri, &X86::GR32RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_XOR_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i8: return FastEmit_ISD_XOR_MVT_i8_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::i16: return FastEmit_ISD_XOR_MVT_i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::i32: return FastEmit_ISD_XOR_MVT_i32_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::CMP.

unsigned FastEmit_X86ISD_CMP_MVT_i8_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_ri(X86::CMP8ri, &X86::GR8RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_X86ISD_CMP_MVT_i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_ri(X86::CMP16ri, &X86::GR16RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_X86ISD_CMP_MVT_i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_ri(X86::CMP32ri, &X86::GR32RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_X86ISD_CMP_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i8: return FastEmit_X86ISD_CMP_MVT_i8_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::i16: return FastEmit_X86ISD_CMP_MVT_i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::i32: return FastEmit_X86ISD_CMP_MVT_i32_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::PEXTRB.

unsigned FastEmit_X86ISD_PEXTRB_MVT_v16i8_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::VPEXTRBrr, &X86::GR32RegClass, Op0, Op0IsKill, imm1);
  }
  if ((Subtarget->hasSSE41() && !Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::PEXTRBrr, &X86::GR32RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_X86ISD_PEXTRB_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v16i8: return FastEmit_X86ISD_PEXTRB_MVT_v16i8_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::PEXTRW.

unsigned FastEmit_X86ISD_PEXTRW_MVT_v8i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::VPEXTRWri, &X86::GR32RegClass, Op0, Op0IsKill, imm1);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::PEXTRWri, &X86::GR32RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_X86ISD_PEXTRW_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v8i16: return FastEmit_X86ISD_PEXTRW_MVT_v8i16_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::PSHUFD.

unsigned FastEmit_X86ISD_PSHUFD_MVT_v4i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::VPSHUFDri, &X86::VR128RegClass, Op0, Op0IsKill, imm1);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::PSHUFDri, &X86::VR128RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_X86ISD_PSHUFD_MVT_v8i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i32)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_ri(X86::VPSHUFDYri, &X86::VR256RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_X86ISD_PSHUFD_MVT_v4f32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::VPSHUFDri, &X86::VR128RegClass, Op0, Op0IsKill, imm1);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::PSHUFDri, &X86::VR128RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_X86ISD_PSHUFD_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v4i32: return FastEmit_X86ISD_PSHUFD_MVT_v4i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v8i32: return FastEmit_X86ISD_PSHUFD_MVT_v8i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4f32: return FastEmit_X86ISD_PSHUFD_MVT_v4f32_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::PSHUFHW.

unsigned FastEmit_X86ISD_PSHUFHW_MVT_v8i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::VPSHUFHWri, &X86::VR128RegClass, Op0, Op0IsKill, imm1);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::PSHUFHWri, &X86::VR128RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_X86ISD_PSHUFHW_MVT_v16i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v16i16)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_ri(X86::VPSHUFHWYri, &X86::VR256RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_X86ISD_PSHUFHW_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v8i16: return FastEmit_X86ISD_PSHUFHW_MVT_v8i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v16i16: return FastEmit_X86ISD_PSHUFHW_MVT_v16i16_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::PSHUFLW.

unsigned FastEmit_X86ISD_PSHUFLW_MVT_v8i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::VPSHUFLWri, &X86::VR128RegClass, Op0, Op0IsKill, imm1);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::PSHUFLWri, &X86::VR128RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_X86ISD_PSHUFLW_MVT_v16i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v16i16)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_ri(X86::VPSHUFLWYri, &X86::VR256RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_X86ISD_PSHUFLW_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v8i16: return FastEmit_X86ISD_PSHUFLW_MVT_v8i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v16i16: return FastEmit_X86ISD_PSHUFLW_MVT_v16i16_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::VPERMI.

unsigned FastEmit_X86ISD_VPERMI_MVT_v4i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i64)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_ri(X86::VPERMQYri, &X86::VR256RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VPERMI_MVT_v4f64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4f64)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_ri(X86::VPERMPDYri, &X86::VR256RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VPERMI_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v4i64: return FastEmit_X86ISD_VPERMI_MVT_v4i64_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4f64: return FastEmit_X86ISD_VPERMI_MVT_v4f64_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::VPERMILP.

unsigned FastEmit_X86ISD_VPERMILP_MVT_v8i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::VPERMILPSYri, &X86::VR256RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VPERMILP_MVT_v2i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::VPERMILPDri, &X86::VR128RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VPERMILP_MVT_v4i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::VPERMILPDYri, &X86::VR256RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VPERMILP_MVT_v4f32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::VPERMILPSri, &X86::VR128RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VPERMILP_MVT_v8f32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8f32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::VPERMILPSYri, &X86::VR256RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VPERMILP_MVT_v2f64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::VPERMILPDri, &X86::VR128RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VPERMILP_MVT_v4f64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4f64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::VPERMILPDYri, &X86::VR256RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VPERMILP_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v8i32: return FastEmit_X86ISD_VPERMILP_MVT_v8i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i64: return FastEmit_X86ISD_VPERMILP_MVT_v2i64_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i64: return FastEmit_X86ISD_VPERMILP_MVT_v4i64_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4f32: return FastEmit_X86ISD_VPERMILP_MVT_v4f32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v8f32: return FastEmit_X86ISD_VPERMILP_MVT_v8f32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2f64: return FastEmit_X86ISD_VPERMILP_MVT_v2f64_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4f64: return FastEmit_X86ISD_VPERMILP_MVT_v4f64_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::VSHLI.

unsigned FastEmit_X86ISD_VSHLI_MVT_v8i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::VPSLLWri, &X86::VR128RegClass, Op0, Op0IsKill, imm1);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::PSLLWri, &X86::VR128RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSHLI_MVT_v16i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v16i16)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_ri(X86::VPSLLWYri, &X86::VR256RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSHLI_MVT_v4i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::VPSLLDri, &X86::VR128RegClass, Op0, Op0IsKill, imm1);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::PSLLDri, &X86::VR128RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSHLI_MVT_v8i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i32)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_ri(X86::VPSLLDYri, &X86::VR256RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSHLI_MVT_v2i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::VPSLLQri, &X86::VR128RegClass, Op0, Op0IsKill, imm1);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::PSLLQri, &X86::VR128RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSHLI_MVT_v4i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i64)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_ri(X86::VPSLLQYri, &X86::VR256RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSHLI_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v8i16: return FastEmit_X86ISD_VSHLI_MVT_v8i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v16i16: return FastEmit_X86ISD_VSHLI_MVT_v16i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i32: return FastEmit_X86ISD_VSHLI_MVT_v4i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v8i32: return FastEmit_X86ISD_VSHLI_MVT_v8i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i64: return FastEmit_X86ISD_VSHLI_MVT_v2i64_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i64: return FastEmit_X86ISD_VSHLI_MVT_v4i64_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::VSRAI.

unsigned FastEmit_X86ISD_VSRAI_MVT_v8i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::VPSRAWri, &X86::VR128RegClass, Op0, Op0IsKill, imm1);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::PSRAWri, &X86::VR128RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSRAI_MVT_v16i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v16i16)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_ri(X86::VPSRAWYri, &X86::VR256RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSRAI_MVT_v4i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::VPSRADri, &X86::VR128RegClass, Op0, Op0IsKill, imm1);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::PSRADri, &X86::VR128RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSRAI_MVT_v8i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i32)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_ri(X86::VPSRADYri, &X86::VR256RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSRAI_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v8i16: return FastEmit_X86ISD_VSRAI_MVT_v8i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v16i16: return FastEmit_X86ISD_VSRAI_MVT_v16i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i32: return FastEmit_X86ISD_VSRAI_MVT_v4i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v8i32: return FastEmit_X86ISD_VSRAI_MVT_v8i32_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::VSRLI.

unsigned FastEmit_X86ISD_VSRLI_MVT_v8i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::VPSRLWri, &X86::VR128RegClass, Op0, Op0IsKill, imm1);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::PSRLWri, &X86::VR128RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSRLI_MVT_v16i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v16i16)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_ri(X86::VPSRLWYri, &X86::VR256RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSRLI_MVT_v4i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::VPSRLDri, &X86::VR128RegClass, Op0, Op0IsKill, imm1);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::PSRLDri, &X86::VR128RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSRLI_MVT_v8i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i32)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_ri(X86::VPSRLDYri, &X86::VR256RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSRLI_MVT_v2i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::VPSRLQri, &X86::VR128RegClass, Op0, Op0IsKill, imm1);
  }
  if ((Subtarget->hasSSE2() && !Subtarget->hasAVX())) {
    return FastEmitInst_ri(X86::PSRLQri, &X86::VR128RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSRLI_MVT_v4i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i64)
    return 0;
  if ((Subtarget->hasAVX2())) {
    return FastEmitInst_ri(X86::VPSRLQYri, &X86::VR256RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_X86ISD_VSRLI_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v8i16: return FastEmit_X86ISD_VSRLI_MVT_v8i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v16i16: return FastEmit_X86ISD_VSRLI_MVT_v16i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i32: return FastEmit_X86ISD_VSRLI_MVT_v4i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v8i32: return FastEmit_X86ISD_VSRLI_MVT_v8i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i64: return FastEmit_X86ISD_VSRLI_MVT_v2i64_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i64: return FastEmit_X86ISD_VSRLI_MVT_v4i64_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_ri(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (VT == MVT::i64 && Predicate_i64immSExt32(imm1))
    if (unsigned Reg = FastEmit_ri_Predicate_i64immSExt32(VT, RetVT, Opcode, Op0, Op0IsKill, imm1))
      return Reg;

  switch (Opcode) {
  case ISD::ADD: return FastEmit_ISD_ADD_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::AND: return FastEmit_ISD_AND_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::EXTRACT_VECTOR_ELT: return FastEmit_ISD_EXTRACT_VECTOR_ELT_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::MUL: return FastEmit_ISD_MUL_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::OR: return FastEmit_ISD_OR_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::ROTL: return FastEmit_ISD_ROTL_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::ROTR: return FastEmit_ISD_ROTR_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::SHL: return FastEmit_ISD_SHL_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::SRA: return FastEmit_ISD_SRA_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::SRL: return FastEmit_ISD_SRL_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::SUB: return FastEmit_ISD_SUB_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::XOR: return FastEmit_ISD_XOR_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case X86ISD::CMP: return FastEmit_X86ISD_CMP_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case X86ISD::PEXTRB: return FastEmit_X86ISD_PEXTRB_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case X86ISD::PEXTRW: return FastEmit_X86ISD_PEXTRW_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case X86ISD::PSHUFD: return FastEmit_X86ISD_PSHUFD_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case X86ISD::PSHUFHW: return FastEmit_X86ISD_PSHUFHW_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case X86ISD::PSHUFLW: return FastEmit_X86ISD_PSHUFLW_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case X86ISD::VPERMI: return FastEmit_X86ISD_VPERMI_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case X86ISD::VPERMILP: return FastEmit_X86ISD_VPERMILP_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case X86ISD::VSHLI: return FastEmit_X86ISD_VSHLI_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case X86ISD::VSRAI: return FastEmit_X86ISD_VSRAI_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case X86ISD::VSRLI: return FastEmit_X86ISD_VSRLI_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::VASTART_SAVE_XMM_REGS.

unsigned FastEmit_X86ISD_VASTART_SAVE_XMM_REGS_MVT_i8_rii(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  return FastEmitInst_rii(X86::VASTART_SAVE_XMM_REGS, &X86::GR8RegClass, Op0, Op0IsKill, imm1, imm2);
}

unsigned FastEmit_X86ISD_VASTART_SAVE_XMM_REGS_rii(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1, uint64_t imm2) {
  switch (VT.SimpleTy) {
  case MVT::i8: return FastEmit_X86ISD_VASTART_SAVE_XMM_REGS_MVT_i8_rii(RetVT, Op0, Op0IsKill, imm1, imm2);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_rii(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, uint64_t imm1, uint64_t imm2) {
  switch (Opcode) {
  case X86ISD::VASTART_SAVE_XMM_REGS: return FastEmit_X86ISD_VASTART_SAVE_XMM_REGS_rii(VT, RetVT, Op0, Op0IsKill, imm1, imm2);
  default: return 0;
  }
}

// FastEmit functions for ISD::ADD.

unsigned FastEmit_ISD_ADD_MVT_i64_ri_Predicate_i64immSExt32(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_ri(X86::ADD64ri32, &X86::GR64RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_ADD_ri_Predicate_i64immSExt32(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i64: return FastEmit_ISD_ADD_MVT_i64_ri_Predicate_i64immSExt32(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::AND.

unsigned FastEmit_ISD_AND_MVT_i64_ri_Predicate_i64immSExt32(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_ri(X86::AND64ri32, &X86::GR64RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_AND_ri_Predicate_i64immSExt32(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i64: return FastEmit_ISD_AND_MVT_i64_ri_Predicate_i64immSExt32(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::MUL.

unsigned FastEmit_ISD_MUL_MVT_i64_ri_Predicate_i64immSExt32(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_ri(X86::IMUL64rri32, &X86::GR64RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_MUL_ri_Predicate_i64immSExt32(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i64: return FastEmit_ISD_MUL_MVT_i64_ri_Predicate_i64immSExt32(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::OR.

unsigned FastEmit_ISD_OR_MVT_i64_ri_Predicate_i64immSExt32(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_ri(X86::OR64ri32, &X86::GR64RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_OR_ri_Predicate_i64immSExt32(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i64: return FastEmit_ISD_OR_MVT_i64_ri_Predicate_i64immSExt32(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::SUB.

unsigned FastEmit_ISD_SUB_MVT_i64_ri_Predicate_i64immSExt32(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_ri(X86::SUB64ri32, &X86::GR64RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_SUB_ri_Predicate_i64immSExt32(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i64: return FastEmit_ISD_SUB_MVT_i64_ri_Predicate_i64immSExt32(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::XOR.

unsigned FastEmit_ISD_XOR_MVT_i64_ri_Predicate_i64immSExt32(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_ri(X86::XOR64ri32, &X86::GR64RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_XOR_ri_Predicate_i64immSExt32(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i64: return FastEmit_ISD_XOR_MVT_i64_ri_Predicate_i64immSExt32(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for X86ISD::CMP.

unsigned FastEmit_X86ISD_CMP_MVT_i64_ri_Predicate_i64immSExt32(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_ri(X86::CMP64ri32, &X86::GR64RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_X86ISD_CMP_ri_Predicate_i64immSExt32(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i64: return FastEmit_X86ISD_CMP_MVT_i64_ri_Predicate_i64immSExt32(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_ri_Predicate_i64immSExt32(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (Opcode) {
  case ISD::ADD: return FastEmit_ISD_ADD_ri_Predicate_i64immSExt32(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::AND: return FastEmit_ISD_AND_ri_Predicate_i64immSExt32(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::MUL: return FastEmit_ISD_MUL_ri_Predicate_i64immSExt32(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::OR: return FastEmit_ISD_OR_ri_Predicate_i64immSExt32(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::SUB: return FastEmit_ISD_SUB_ri_Predicate_i64immSExt32(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::XOR: return FastEmit_ISD_XOR_ri_Predicate_i64immSExt32(VT, RetVT, Op0, Op0IsKill, imm1);
  case X86ISD::CMP: return FastEmit_X86ISD_CMP_ri_Predicate_i64immSExt32(VT, RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::Constant.

unsigned FastEmit_ISD_Constant_MVT_i8_i(MVT RetVT, uint64_t imm0) {
  if (RetVT.SimpleTy != MVT::i8)
    return 0;
  return FastEmitInst_i(X86::MOV8ri, &X86::GR8RegClass, imm0);
}

unsigned FastEmit_ISD_Constant_MVT_i16_i(MVT RetVT, uint64_t imm0) {
  if (RetVT.SimpleTy != MVT::i16)
    return 0;
  return FastEmitInst_i(X86::MOV16ri, &X86::GR16RegClass, imm0);
}

unsigned FastEmit_ISD_Constant_MVT_i32_i(MVT RetVT, uint64_t imm0) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_i(X86::MOV32ri, &X86::GR32RegClass, imm0);
}

unsigned FastEmit_ISD_Constant_MVT_i64_i(MVT RetVT, uint64_t imm0) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_i(X86::MOV64ri, &X86::GR64RegClass, imm0);
}

unsigned FastEmit_ISD_Constant_i(MVT VT, MVT RetVT, uint64_t imm0) {
  switch (VT.SimpleTy) {
  case MVT::i8: return FastEmit_ISD_Constant_MVT_i8_i(RetVT, imm0);
  case MVT::i16: return FastEmit_ISD_Constant_MVT_i16_i(RetVT, imm0);
  case MVT::i32: return FastEmit_ISD_Constant_MVT_i32_i(RetVT, imm0);
  case MVT::i64: return FastEmit_ISD_Constant_MVT_i64_i(RetVT, imm0);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_i(MVT VT, MVT RetVT, unsigned Opcode, uint64_t imm0) {
  switch (Opcode) {
  case ISD::Constant: return FastEmit_ISD_Constant_i(VT, RetVT, imm0);
  default: return 0;
  }
}

