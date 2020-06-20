/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*"Fast" Instruction Selector for the ARM target                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


// FastEmit Immediate Predicate functions.
static bool Predicate_so_imm(int64_t Imm) {

    return ARM_AM::getSOImmVal(Imm) != -1;
  
}
static bool Predicate_imm0_7(int64_t Imm) {

  return Imm >= 0 && Imm < 8;

}
static bool Predicate_imm8_255(int64_t Imm) {

  return Imm >= 8 && Imm < 256;

}
static bool Predicate_imm0_255(int64_t Imm) {
 return Imm >= 0 && Imm < 256; 
}
static bool Predicate_t2_so_imm(int64_t Imm) {

    return ARM_AM::getT2SOImmVal(Imm) != -1;
  
}
static bool Predicate_imm0_4095(int64_t Imm) {

  return Imm >= 0 && Imm < 4096;

}
static bool Predicate_imm0_31(int64_t Imm) {

  return Imm >= 0 && Imm < 32;

}
static bool Predicate_VectorIndex32(int64_t Imm) {

  return ((uint64_t)Imm) < 2;

}


// FastEmit functions for ARMISD::CALL.

unsigned FastEmit_ARMISD_CALL_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  if ((!Subtarget->isThumb()) && (Subtarget->hasV5TOps())) {
    return FastEmitInst_r(ARM::BLX, &ARM::GPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_CALL_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ARMISD_CALL_MVT_i32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::CALL_NOLINK.

unsigned FastEmit_ARMISD_CALL_NOLINK_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  if ((!Subtarget->isThumb()) && (!Subtarget->hasV4TOps())) {
    return FastEmitInst_r(ARM::BMOVPCRX_CALL, &ARM::tGPRRegClass, Op0, Op0IsKill);
  }
  if ((!Subtarget->isThumb()) && (Subtarget->hasV4TOps())) {
    return FastEmitInst_r(ARM::BX_CALL, &ARM::tGPRRegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->isThumb()) && (Subtarget->isThumb1Only())) {
    return FastEmitInst_r(ARM::tBX_CALL, &ARM::tGPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_CALL_NOLINK_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ARMISD_CALL_NOLINK_MVT_i32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::CALL_PRED.

unsigned FastEmit_ARMISD_CALL_PRED_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  if ((!Subtarget->isThumb()) && (Subtarget->hasV5TOps())) {
    return FastEmitInst_r(ARM::BLX_pred, &ARM::GPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_CALL_PRED_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ARMISD_CALL_PRED_MVT_i32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::CMPFPw0.

unsigned FastEmit_ARMISD_CMPFPw0_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  if ((Subtarget->hasVFP2())) {
    return FastEmitInst_r(ARM::VCMPEZS, &ARM::SPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_CMPFPw0_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  if ((Subtarget->hasVFP2())) {
    return FastEmitInst_r(ARM::VCMPEZD, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_CMPFPw0_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ARMISD_CMPFPw0_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ARMISD_CMPFPw0_MVT_f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::FTOSI.

unsigned FastEmit_ARMISD_FTOSI_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasVFP2()) && (!Subtarget->useNEONForSinglePrecisionFP())) {
    return FastEmitInst_r(ARM::VTOSIZS, &ARM::SPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_FTOSI_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasVFP2())) {
    return FastEmitInst_r(ARM::VTOSIZD, &ARM::SPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_FTOSI_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ARMISD_FTOSI_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ARMISD_FTOSI_MVT_f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::FTOUI.

unsigned FastEmit_ARMISD_FTOUI_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasVFP2()) && (!Subtarget->useNEONForSinglePrecisionFP())) {
    return FastEmitInst_r(ARM::VTOUIZS, &ARM::SPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_FTOUI_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasVFP2())) {
    return FastEmitInst_r(ARM::VTOUIZD, &ARM::SPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_FTOUI_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ARMISD_FTOUI_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ARMISD_FTOUI_MVT_f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::RBIT.

unsigned FastEmit_ARMISD_RBIT_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((!Subtarget->isThumb()) && (Subtarget->hasV6T2Ops())) {
    return FastEmitInst_r(ARM::RBIT, &ARM::GPRRegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->isThumb2())) {
    return FastEmitInst_r(ARM::t2RBIT, &ARM::rGPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_RBIT_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ARMISD_RBIT_MVT_i32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::RRX.

unsigned FastEmit_ARMISD_RRX_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((!Subtarget->isThumb())) {
    return FastEmitInst_r(ARM::RRX, &ARM::GPRRegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->isThumb2())) {
    return FastEmitInst_r(ARM::t2RRX, &ARM::rGPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_RRX_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ARMISD_RRX_MVT_i32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::SITOF.

unsigned FastEmit_ARMISD_SITOF_MVT_f32_MVT_f32_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasVFP2()) && (!Subtarget->useNEONForSinglePrecisionFP())) {
    return FastEmitInst_r(ARM::VSITOS, &ARM::SPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_SITOF_MVT_f32_MVT_f64_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasVFP2())) {
    return FastEmitInst_r(ARM::VSITOD, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_SITOF_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::f32: return FastEmit_ARMISD_SITOF_MVT_f32_MVT_f32_r(Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ARMISD_SITOF_MVT_f32_MVT_f64_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_ARMISD_SITOF_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ARMISD_SITOF_MVT_f32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::SRA_FLAG.

unsigned FastEmit_ARMISD_SRA_FLAG_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((!Subtarget->isThumb())) {
    return FastEmitInst_r(ARM::MOVsra_flag, &ARM::GPRRegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->isThumb2())) {
    return FastEmitInst_r(ARM::t2MOVsra_flag, &ARM::rGPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_SRA_FLAG_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ARMISD_SRA_FLAG_MVT_i32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::SRL_FLAG.

unsigned FastEmit_ARMISD_SRL_FLAG_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((!Subtarget->isThumb())) {
    return FastEmitInst_r(ARM::MOVsrl_flag, &ARM::GPRRegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->isThumb2())) {
    return FastEmitInst_r(ARM::t2MOVsrl_flag, &ARM::rGPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_SRL_FLAG_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ARMISD_SRL_FLAG_MVT_i32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::TC_RETURN.

unsigned FastEmit_ARMISD_TC_RETURN_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  return FastEmitInst_r(ARM::TCRETURNri, &ARM::tcGPRRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARMISD_TC_RETURN_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ARMISD_TC_RETURN_MVT_i32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::UITOF.

unsigned FastEmit_ARMISD_UITOF_MVT_f32_MVT_f32_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasVFP2()) && (!Subtarget->useNEONForSinglePrecisionFP())) {
    return FastEmitInst_r(ARM::VUITOS, &ARM::SPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_UITOF_MVT_f32_MVT_f64_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasVFP2())) {
    return FastEmitInst_r(ARM::VUITOD, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_UITOF_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::f32: return FastEmit_ARMISD_UITOF_MVT_f32_MVT_f32_r(Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ARMISD_UITOF_MVT_f32_MVT_f64_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_ARMISD_UITOF_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ARMISD_UITOF_MVT_f32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VCEQZ.

unsigned FastEmit_ARMISD_VCEQZ_MVT_v8i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCEQzv8i8, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCEQZ_MVT_v16i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCEQzv16i8, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCEQZ_MVT_v4i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCEQzv4i16, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCEQZ_MVT_v8i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCEQzv8i16, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCEQZ_MVT_v2i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCEQzv2i32, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCEQZ_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCEQzv4i32, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCEQZ_MVT_v2f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCEQzv2f32, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCEQZ_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCEQzv4f32, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCEQZ_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARMISD_VCEQZ_MVT_v8i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v16i8: return FastEmit_ARMISD_VCEQZ_MVT_v16i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i16: return FastEmit_ARMISD_VCEQZ_MVT_v4i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v8i16: return FastEmit_ARMISD_VCEQZ_MVT_v8i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i32: return FastEmit_ARMISD_VCEQZ_MVT_v2i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i32: return FastEmit_ARMISD_VCEQZ_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f32: return FastEmit_ARMISD_VCEQZ_MVT_v2f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_ARMISD_VCEQZ_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VCGEZ.

unsigned FastEmit_ARMISD_VCGEZ_MVT_v8i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCGEzv8i8, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGEZ_MVT_v16i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCGEzv16i8, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGEZ_MVT_v4i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCGEzv4i16, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGEZ_MVT_v8i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCGEzv8i16, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGEZ_MVT_v2i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCGEzv2i32, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGEZ_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCGEzv4i32, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGEZ_MVT_v2f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCGEzv2f32, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGEZ_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCGEzv4f32, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGEZ_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARMISD_VCGEZ_MVT_v8i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v16i8: return FastEmit_ARMISD_VCGEZ_MVT_v16i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i16: return FastEmit_ARMISD_VCGEZ_MVT_v4i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v8i16: return FastEmit_ARMISD_VCGEZ_MVT_v8i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i32: return FastEmit_ARMISD_VCGEZ_MVT_v2i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i32: return FastEmit_ARMISD_VCGEZ_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f32: return FastEmit_ARMISD_VCGEZ_MVT_v2f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_ARMISD_VCGEZ_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VCGTZ.

unsigned FastEmit_ARMISD_VCGTZ_MVT_v8i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCGTzv8i8, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGTZ_MVT_v16i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCGTzv16i8, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGTZ_MVT_v4i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCGTzv4i16, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGTZ_MVT_v8i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCGTzv8i16, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGTZ_MVT_v2i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCGTzv2i32, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGTZ_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCGTzv4i32, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGTZ_MVT_v2f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCGTzv2f32, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGTZ_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCGTzv4f32, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGTZ_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARMISD_VCGTZ_MVT_v8i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v16i8: return FastEmit_ARMISD_VCGTZ_MVT_v16i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i16: return FastEmit_ARMISD_VCGTZ_MVT_v4i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v8i16: return FastEmit_ARMISD_VCGTZ_MVT_v8i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i32: return FastEmit_ARMISD_VCGTZ_MVT_v2i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i32: return FastEmit_ARMISD_VCGTZ_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f32: return FastEmit_ARMISD_VCGTZ_MVT_v2f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_ARMISD_VCGTZ_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VCLEZ.

unsigned FastEmit_ARMISD_VCLEZ_MVT_v8i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCLEzv8i8, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCLEZ_MVT_v16i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCLEzv16i8, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCLEZ_MVT_v4i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCLEzv4i16, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCLEZ_MVT_v8i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCLEzv8i16, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCLEZ_MVT_v2i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCLEzv2i32, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCLEZ_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCLEzv4i32, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCLEZ_MVT_v2f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCLEzv2f32, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCLEZ_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCLEzv4f32, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCLEZ_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARMISD_VCLEZ_MVT_v8i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v16i8: return FastEmit_ARMISD_VCLEZ_MVT_v16i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i16: return FastEmit_ARMISD_VCLEZ_MVT_v4i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v8i16: return FastEmit_ARMISD_VCLEZ_MVT_v8i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i32: return FastEmit_ARMISD_VCLEZ_MVT_v2i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i32: return FastEmit_ARMISD_VCLEZ_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f32: return FastEmit_ARMISD_VCLEZ_MVT_v2f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_ARMISD_VCLEZ_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VCLTZ.

unsigned FastEmit_ARMISD_VCLTZ_MVT_v8i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCLTzv8i8, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCLTZ_MVT_v16i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCLTzv16i8, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCLTZ_MVT_v4i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCLTzv4i16, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCLTZ_MVT_v8i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCLTzv8i16, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCLTZ_MVT_v2i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCLTzv2i32, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCLTZ_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCLTzv4i32, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCLTZ_MVT_v2f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCLTzv2f32, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCLTZ_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCLTzv4f32, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCLTZ_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARMISD_VCLTZ_MVT_v8i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v16i8: return FastEmit_ARMISD_VCLTZ_MVT_v16i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i16: return FastEmit_ARMISD_VCLTZ_MVT_v4i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v8i16: return FastEmit_ARMISD_VCLTZ_MVT_v8i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i32: return FastEmit_ARMISD_VCLTZ_MVT_v2i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i32: return FastEmit_ARMISD_VCLTZ_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f32: return FastEmit_ARMISD_VCLTZ_MVT_v2f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_ARMISD_VCLTZ_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VDUP.

unsigned FastEmit_ARMISD_VDUP_MVT_i32_MVT_v8i8_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VDUP8d, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VDUP_MVT_i32_MVT_v16i8_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VDUP8q, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VDUP_MVT_i32_MVT_v4i16_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VDUP16d, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VDUP_MVT_i32_MVT_v8i16_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VDUP16q, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VDUP_MVT_i32_MVT_v2i32_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasNEON()) && (!Subtarget->isSwift())) {
    return FastEmitInst_r(ARM::VDUP32d, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VDUP_MVT_i32_MVT_v4i32_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VDUP32q, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VDUP_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARMISD_VDUP_MVT_i32_MVT_v8i8_r(Op0, Op0IsKill);
  case MVT::v16i8: return FastEmit_ARMISD_VDUP_MVT_i32_MVT_v16i8_r(Op0, Op0IsKill);
  case MVT::v4i16: return FastEmit_ARMISD_VDUP_MVT_i32_MVT_v4i16_r(Op0, Op0IsKill);
  case MVT::v8i16: return FastEmit_ARMISD_VDUP_MVT_i32_MVT_v8i16_r(Op0, Op0IsKill);
  case MVT::v2i32: return FastEmit_ARMISD_VDUP_MVT_i32_MVT_v2i32_r(Op0, Op0IsKill);
  case MVT::v4i32: return FastEmit_ARMISD_VDUP_MVT_i32_MVT_v4i32_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_ARMISD_VDUP_MVT_f32_MVT_v2f32_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VDUPfdf, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VDUP_MVT_f32_MVT_v4f32_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VDUPfqf, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VDUP_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::v2f32: return FastEmit_ARMISD_VDUP_MVT_f32_MVT_v2f32_r(Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_ARMISD_VDUP_MVT_f32_MVT_v4f32_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_ARMISD_VDUP_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ARMISD_VDUP_MVT_i32_r(RetVT, Op0, Op0IsKill);
  case MVT::f32: return FastEmit_ARMISD_VDUP_MVT_f32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VREV16.

unsigned FastEmit_ARMISD_VREV16_MVT_v8i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VREV16d8, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VREV16_MVT_v16i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VREV16q8, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VREV16_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARMISD_VREV16_MVT_v8i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v16i8: return FastEmit_ARMISD_VREV16_MVT_v16i8_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VREV32.

unsigned FastEmit_ARMISD_VREV32_MVT_v8i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VREV32d8, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VREV32_MVT_v16i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VREV32q8, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VREV32_MVT_v4i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VREV32d16, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VREV32_MVT_v8i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VREV32q16, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VREV32_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARMISD_VREV32_MVT_v8i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v16i8: return FastEmit_ARMISD_VREV32_MVT_v16i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i16: return FastEmit_ARMISD_VREV32_MVT_v4i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v8i16: return FastEmit_ARMISD_VREV32_MVT_v8i16_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VREV64.

unsigned FastEmit_ARMISD_VREV64_MVT_v8i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VREV64d8, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VREV64_MVT_v16i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VREV64q8, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VREV64_MVT_v4i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VREV64d16, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VREV64_MVT_v8i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VREV64q16, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VREV64_MVT_v2i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VREV64d32, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VREV64_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VREV64q32, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VREV64_MVT_v2f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f32)
    return 0;
  return FastEmitInst_r(ARM::VREV64d32, &ARM::DPRRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARMISD_VREV64_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  return FastEmitInst_r(ARM::VREV64q32, &ARM::QPRRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ARMISD_VREV64_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARMISD_VREV64_MVT_v8i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v16i8: return FastEmit_ARMISD_VREV64_MVT_v16i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i16: return FastEmit_ARMISD_VREV64_MVT_v4i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v8i16: return FastEmit_ARMISD_VREV64_MVT_v8i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i32: return FastEmit_ARMISD_VREV64_MVT_v2i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i32: return FastEmit_ARMISD_VREV64_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f32: return FastEmit_ARMISD_VREV64_MVT_v2f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_ARMISD_VREV64_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::ANY_EXTEND.

unsigned FastEmit_ISD_ANY_EXTEND_MVT_v8i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  return FastEmitInst_r(ARM::VMOVLuv8i16, &ARM::QPRRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_ANY_EXTEND_MVT_v4i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  return FastEmitInst_r(ARM::VMOVLuv4i32, &ARM::QPRRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_ANY_EXTEND_MVT_v2i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  return FastEmitInst_r(ARM::VMOVLuv2i64, &ARM::QPRRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_ANY_EXTEND_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ISD_ANY_EXTEND_MVT_v8i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i16: return FastEmit_ISD_ANY_EXTEND_MVT_v4i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i32: return FastEmit_ISD_ANY_EXTEND_MVT_v2i32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::BITCAST.

unsigned FastEmit_ISD_BITCAST_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasVFP2()) && (Subtarget->isCortexA9() || !Subtarget->useNEONForSinglePrecisionFP())) {
    return FastEmitInst_r(ARM::VMOVSR, &ARM::SPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_BITCAST_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasVFP2())) {
    return FastEmitInst_r(ARM::VMOVRS, &ARM::GPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_BITCAST_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_BITCAST_MVT_i32_r(RetVT, Op0, Op0IsKill);
  case MVT::f32: return FastEmit_ISD_BITCAST_MVT_f32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::BRIND.

unsigned FastEmit_ISD_BRIND_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  if ((!Subtarget->isThumb()) && (!Subtarget->hasV4TOps())) {
    return FastEmitInst_r(ARM::MOVPCRX, &ARM::GPRRegClass, Op0, Op0IsKill);
  }
  if ((!Subtarget->isThumb()) && (Subtarget->hasV4TOps())) {
    return FastEmitInst_r(ARM::BX, &ARM::GPRRegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->isThumb())) {
    return FastEmitInst_r(ARM::tBRIND, &ARM::GPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_BRIND_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_BRIND_MVT_i32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::BSWAP.

unsigned FastEmit_ISD_BSWAP_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((!Subtarget->isThumb()) && (Subtarget->hasV6Ops())) {
    return FastEmitInst_r(ARM::REV, &ARM::GPRRegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->isThumb()) && (Subtarget->isThumb1Only()) && (Subtarget->hasV6Ops())) {
    return FastEmitInst_r(ARM::tREV, &ARM::tGPRRegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->isThumb2())) {
    return FastEmitInst_r(ARM::t2REV, &ARM::rGPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_BSWAP_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_BSWAP_MVT_i32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::CTLZ.

unsigned FastEmit_ISD_CTLZ_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((!Subtarget->isThumb()) && (Subtarget->hasV5TOps())) {
    return FastEmitInst_r(ARM::CLZ, &ARM::GPRRegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->isThumb2())) {
    return FastEmitInst_r(ARM::t2CLZ, &ARM::rGPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_CTLZ_MVT_v8i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCLZv8i8, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_CTLZ_MVT_v16i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCLZv16i8, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_CTLZ_MVT_v4i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCLZv4i16, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_CTLZ_MVT_v8i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCLZv8i16, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_CTLZ_MVT_v2i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCLZv2i32, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_CTLZ_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCLZv4i32, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_CTLZ_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_CTLZ_MVT_i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v8i8: return FastEmit_ISD_CTLZ_MVT_v8i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v16i8: return FastEmit_ISD_CTLZ_MVT_v16i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i16: return FastEmit_ISD_CTLZ_MVT_v4i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v8i16: return FastEmit_ISD_CTLZ_MVT_v8i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i32: return FastEmit_ISD_CTLZ_MVT_v2i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i32: return FastEmit_ISD_CTLZ_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::CTPOP.

unsigned FastEmit_ISD_CTPOP_MVT_v8i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCNTd, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_CTPOP_MVT_v16i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCNTq, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_CTPOP_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ISD_CTPOP_MVT_v8i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v16i8: return FastEmit_ISD_CTPOP_MVT_v16i8_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FABS.

unsigned FastEmit_ISD_FABS_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasVFP2()) && (!Subtarget->useNEONForSinglePrecisionFP())) {
    return FastEmitInst_r(ARM::VABSS, &ARM::SPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FABS_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((Subtarget->hasVFP2())) {
    return FastEmitInst_r(ARM::VABSD, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FABS_MVT_v2f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VABSfd, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FABS_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VABSfq, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FABS_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FABS_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_FABS_MVT_f64_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f32: return FastEmit_ISD_FABS_MVT_v2f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_ISD_FABS_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FNEG.

unsigned FastEmit_ISD_FNEG_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasVFP2()) && (!Subtarget->useNEONForSinglePrecisionFP())) {
    return FastEmitInst_r(ARM::VNEGS, &ARM::SPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FNEG_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((Subtarget->hasVFP2())) {
    return FastEmitInst_r(ARM::VNEGD, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FNEG_MVT_v2f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VNEGfd, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FNEG_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VNEGf32q, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FNEG_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FNEG_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_FNEG_MVT_f64_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f32: return FastEmit_ISD_FNEG_MVT_v2f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_ISD_FNEG_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FP_EXTEND.

unsigned FastEmit_ISD_FP_EXTEND_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((Subtarget->hasVFP2())) {
    return FastEmitInst_r(ARM::VCVTDS, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FP_EXTEND_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FP_EXTEND_MVT_f32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FP_ROUND.

unsigned FastEmit_ISD_FP_ROUND_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasVFP2())) {
    return FastEmitInst_r(ARM::VCVTSD, &ARM::SPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FP_ROUND_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f64: return FastEmit_ISD_FP_ROUND_MVT_f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FP_TO_SINT.

unsigned FastEmit_ISD_FP_TO_SINT_MVT_v2f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCVTf2sd, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FP_TO_SINT_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCVTf2sq, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FP_TO_SINT_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v2f32: return FastEmit_ISD_FP_TO_SINT_MVT_v2f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_ISD_FP_TO_SINT_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FP_TO_UINT.

unsigned FastEmit_ISD_FP_TO_UINT_MVT_v2f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCVTf2ud, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FP_TO_UINT_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCVTf2uq, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FP_TO_UINT_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v2f32: return FastEmit_ISD_FP_TO_UINT_MVT_v2f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_ISD_FP_TO_UINT_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FSQRT.

unsigned FastEmit_ISD_FSQRT_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasVFP2())) {
    return FastEmitInst_r(ARM::VSQRTS, &ARM::SPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FSQRT_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((Subtarget->hasVFP2())) {
    return FastEmitInst_r(ARM::VSQRTD, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FSQRT_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FSQRT_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_FSQRT_MVT_f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SIGN_EXTEND.

unsigned FastEmit_ISD_SIGN_EXTEND_MVT_v8i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VMOVLsv8i16, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SIGN_EXTEND_MVT_v4i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VMOVLsv4i32, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SIGN_EXTEND_MVT_v2i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VMOVLsv2i64, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SIGN_EXTEND_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ISD_SIGN_EXTEND_MVT_v8i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i16: return FastEmit_ISD_SIGN_EXTEND_MVT_v4i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i32: return FastEmit_ISD_SIGN_EXTEND_MVT_v2i32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SINT_TO_FP.

unsigned FastEmit_ISD_SINT_TO_FP_MVT_v2i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCVTs2fd, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SINT_TO_FP_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCVTs2fq, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SINT_TO_FP_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v2i32: return FastEmit_ISD_SINT_TO_FP_MVT_v2i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i32: return FastEmit_ISD_SINT_TO_FP_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::TRUNCATE.

unsigned FastEmit_ISD_TRUNCATE_MVT_v8i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VMOVNv8i8, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_TRUNCATE_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VMOVNv4i16, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_TRUNCATE_MVT_v2i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VMOVNv2i32, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_TRUNCATE_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i16: return FastEmit_ISD_TRUNCATE_MVT_v8i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i32: return FastEmit_ISD_TRUNCATE_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i64: return FastEmit_ISD_TRUNCATE_MVT_v2i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::UINT_TO_FP.

unsigned FastEmit_ISD_UINT_TO_FP_MVT_v2i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCVTu2fd, &ARM::DPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_UINT_TO_FP_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VCVTu2fq, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_UINT_TO_FP_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v2i32: return FastEmit_ISD_UINT_TO_FP_MVT_v2i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i32: return FastEmit_ISD_UINT_TO_FP_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::ZERO_EXTEND.

unsigned FastEmit_ISD_ZERO_EXTEND_MVT_v8i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VMOVLuv8i16, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ZERO_EXTEND_MVT_v4i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VMOVLuv4i32, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ZERO_EXTEND_MVT_v2i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_r(ARM::VMOVLuv2i64, &ARM::QPRRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ZERO_EXTEND_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ISD_ZERO_EXTEND_MVT_v8i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i16: return FastEmit_ISD_ZERO_EXTEND_MVT_v4i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i32: return FastEmit_ISD_ZERO_EXTEND_MVT_v2i32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_r(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill) {
  switch (Opcode) {
  case ARMISD::CALL: return FastEmit_ARMISD_CALL_r(VT, RetVT, Op0, Op0IsKill);
  case ARMISD::CALL_NOLINK: return FastEmit_ARMISD_CALL_NOLINK_r(VT, RetVT, Op0, Op0IsKill);
  case ARMISD::CALL_PRED: return FastEmit_ARMISD_CALL_PRED_r(VT, RetVT, Op0, Op0IsKill);
  case ARMISD::CMPFPw0: return FastEmit_ARMISD_CMPFPw0_r(VT, RetVT, Op0, Op0IsKill);
  case ARMISD::FTOSI: return FastEmit_ARMISD_FTOSI_r(VT, RetVT, Op0, Op0IsKill);
  case ARMISD::FTOUI: return FastEmit_ARMISD_FTOUI_r(VT, RetVT, Op0, Op0IsKill);
  case ARMISD::RBIT: return FastEmit_ARMISD_RBIT_r(VT, RetVT, Op0, Op0IsKill);
  case ARMISD::RRX: return FastEmit_ARMISD_RRX_r(VT, RetVT, Op0, Op0IsKill);
  case ARMISD::SITOF: return FastEmit_ARMISD_SITOF_r(VT, RetVT, Op0, Op0IsKill);
  case ARMISD::SRA_FLAG: return FastEmit_ARMISD_SRA_FLAG_r(VT, RetVT, Op0, Op0IsKill);
  case ARMISD::SRL_FLAG: return FastEmit_ARMISD_SRL_FLAG_r(VT, RetVT, Op0, Op0IsKill);
  case ARMISD::TC_RETURN: return FastEmit_ARMISD_TC_RETURN_r(VT, RetVT, Op0, Op0IsKill);
  case ARMISD::UITOF: return FastEmit_ARMISD_UITOF_r(VT, RetVT, Op0, Op0IsKill);
  case ARMISD::VCEQZ: return FastEmit_ARMISD_VCEQZ_r(VT, RetVT, Op0, Op0IsKill);
  case ARMISD::VCGEZ: return FastEmit_ARMISD_VCGEZ_r(VT, RetVT, Op0, Op0IsKill);
  case ARMISD::VCGTZ: return FastEmit_ARMISD_VCGTZ_r(VT, RetVT, Op0, Op0IsKill);
  case ARMISD::VCLEZ: return FastEmit_ARMISD_VCLEZ_r(VT, RetVT, Op0, Op0IsKill);
  case ARMISD::VCLTZ: return FastEmit_ARMISD_VCLTZ_r(VT, RetVT, Op0, Op0IsKill);
  case ARMISD::VDUP: return FastEmit_ARMISD_VDUP_r(VT, RetVT, Op0, Op0IsKill);
  case ARMISD::VREV16: return FastEmit_ARMISD_VREV16_r(VT, RetVT, Op0, Op0IsKill);
  case ARMISD::VREV32: return FastEmit_ARMISD_VREV32_r(VT, RetVT, Op0, Op0IsKill);
  case ARMISD::VREV64: return FastEmit_ARMISD_VREV64_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::ANY_EXTEND: return FastEmit_ISD_ANY_EXTEND_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::BITCAST: return FastEmit_ISD_BITCAST_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::BRIND: return FastEmit_ISD_BRIND_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::BSWAP: return FastEmit_ISD_BSWAP_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::CTLZ: return FastEmit_ISD_CTLZ_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::CTPOP: return FastEmit_ISD_CTPOP_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FABS: return FastEmit_ISD_FABS_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FNEG: return FastEmit_ISD_FNEG_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FP_EXTEND: return FastEmit_ISD_FP_EXTEND_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FP_ROUND: return FastEmit_ISD_FP_ROUND_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FP_TO_SINT: return FastEmit_ISD_FP_TO_SINT_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FP_TO_UINT: return FastEmit_ISD_FP_TO_UINT_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FSQRT: return FastEmit_ISD_FSQRT_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::SIGN_EXTEND: return FastEmit_ISD_SIGN_EXTEND_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::SINT_TO_FP: return FastEmit_ISD_SINT_TO_FP_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::TRUNCATE: return FastEmit_ISD_TRUNCATE_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::UINT_TO_FP: return FastEmit_ISD_UINT_TO_FP_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::ZERO_EXTEND: return FastEmit_ISD_ZERO_EXTEND_r(VT, RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::CMP.

unsigned FastEmit_ARMISD_CMP_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  if ((!Subtarget->isThumb())) {
    return FastEmitInst_rr(ARM::CMPrr, &ARM::GPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->isThumb()) && (Subtarget->isThumb1Only())) {
    return FastEmitInst_rr(ARM::tCMPr, &ARM::tGPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->isThumb2())) {
    return FastEmitInst_rr(ARM::t2CMPrr, &ARM::GPRnopcRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_CMP_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ARMISD_CMP_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::CMPFP.

unsigned FastEmit_ARMISD_CMPFP_MVT_f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  if ((Subtarget->hasVFP2())) {
    return FastEmitInst_rr(ARM::VCMPES, &ARM::SPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_CMPFP_MVT_f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  if ((Subtarget->hasVFP2())) {
    return FastEmitInst_rr(ARM::VCMPED, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_CMPFP_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ARMISD_CMPFP_MVT_f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f64: return FastEmit_ARMISD_CMPFP_MVT_f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::CMPZ.

unsigned FastEmit_ARMISD_CMPZ_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  if ((!Subtarget->isThumb())) {
    return FastEmitInst_rr(ARM::CMPrr, &ARM::GPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->isThumb()) && (Subtarget->isThumb1Only())) {
    return FastEmitInst_rr(ARM::tCMPr, &ARM::tGPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->isThumb2())) {
    return FastEmitInst_rr(ARM::t2CMPrr, &ARM::GPRnopcRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_CMPZ_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ARMISD_CMPZ_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::EH_SJLJ_LONGJMP.

unsigned FastEmit_ARMISD_EH_SJLJ_LONGJMP_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  if ((!Subtarget->isThumb()) && (Subtarget->isTargetIOS())) {
    return FastEmitInst_rr(ARM::Int_eh_sjlj_longjmp, &ARM::GPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->isThumb()) && (Subtarget->isTargetIOS())) {
    return FastEmitInst_rr(ARM::tInt_eh_sjlj_longjmp, &ARM::GPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_EH_SJLJ_LONGJMP_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ARMISD_EH_SJLJ_LONGJMP_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::EH_SJLJ_SETJMP.

unsigned FastEmit_ARMISD_EH_SJLJ_SETJMP_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((!Subtarget->isThumb()) && (!Subtarget->hasVFP2())) {
    return FastEmitInst_rr(ARM::Int_eh_sjlj_setjmp_nofp, &ARM::GPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((!Subtarget->isThumb()) && (Subtarget->hasVFP2())) {
    return FastEmitInst_rr(ARM::Int_eh_sjlj_setjmp, &ARM::GPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->isThumb()) && (Subtarget->isThumb1Only())) {
    return FastEmitInst_rr(ARM::tInt_eh_sjlj_setjmp, &ARM::tGPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->isThumb2()) && (!Subtarget->hasVFP2())) {
    return FastEmitInst_rr(ARM::t2Int_eh_sjlj_setjmp_nofp, &ARM::tGPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->isThumb2()) && (Subtarget->hasVFP2())) {
    return FastEmitInst_rr(ARM::t2Int_eh_sjlj_setjmp, &ARM::tGPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_EH_SJLJ_SETJMP_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ARMISD_EH_SJLJ_SETJMP_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VCEQ.

unsigned FastEmit_ARMISD_VCEQ_MVT_v8i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VCEQv8i8, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCEQ_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VCEQv16i8, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCEQ_MVT_v4i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VCEQv4i16, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCEQ_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VCEQv8i16, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCEQ_MVT_v2i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VCEQv2i32, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCEQ_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VCEQv4i32, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCEQ_MVT_v2f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VCEQfd, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCEQ_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VCEQfq, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCEQ_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARMISD_VCEQ_MVT_v8i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ARMISD_VCEQ_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i16: return FastEmit_ARMISD_VCEQ_MVT_v4i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ARMISD_VCEQ_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i32: return FastEmit_ARMISD_VCEQ_MVT_v2i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ARMISD_VCEQ_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f32: return FastEmit_ARMISD_VCEQ_MVT_v2f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f32: return FastEmit_ARMISD_VCEQ_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VCGE.

unsigned FastEmit_ARMISD_VCGE_MVT_v8i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VCGEsv8i8, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGE_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VCGEsv16i8, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGE_MVT_v4i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VCGEsv4i16, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGE_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VCGEsv8i16, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGE_MVT_v2i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VCGEsv2i32, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGE_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VCGEsv4i32, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGE_MVT_v2f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VCGEfd, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGE_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VCGEfq, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGE_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARMISD_VCGE_MVT_v8i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ARMISD_VCGE_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i16: return FastEmit_ARMISD_VCGE_MVT_v4i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ARMISD_VCGE_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i32: return FastEmit_ARMISD_VCGE_MVT_v2i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ARMISD_VCGE_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f32: return FastEmit_ARMISD_VCGE_MVT_v2f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f32: return FastEmit_ARMISD_VCGE_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VCGEU.

unsigned FastEmit_ARMISD_VCGEU_MVT_v8i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VCGEuv8i8, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGEU_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VCGEuv16i8, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGEU_MVT_v4i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VCGEuv4i16, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGEU_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VCGEuv8i16, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGEU_MVT_v2i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VCGEuv2i32, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGEU_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VCGEuv4i32, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGEU_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARMISD_VCGEU_MVT_v8i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ARMISD_VCGEU_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i16: return FastEmit_ARMISD_VCGEU_MVT_v4i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ARMISD_VCGEU_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i32: return FastEmit_ARMISD_VCGEU_MVT_v2i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ARMISD_VCGEU_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VCGT.

unsigned FastEmit_ARMISD_VCGT_MVT_v8i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VCGTsv8i8, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGT_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VCGTsv16i8, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGT_MVT_v4i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VCGTsv4i16, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGT_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VCGTsv8i16, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGT_MVT_v2i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VCGTsv2i32, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGT_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VCGTsv4i32, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGT_MVT_v2f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VCGTfd, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGT_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VCGTfq, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGT_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARMISD_VCGT_MVT_v8i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ARMISD_VCGT_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i16: return FastEmit_ARMISD_VCGT_MVT_v4i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ARMISD_VCGT_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i32: return FastEmit_ARMISD_VCGT_MVT_v2i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ARMISD_VCGT_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f32: return FastEmit_ARMISD_VCGT_MVT_v2f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f32: return FastEmit_ARMISD_VCGT_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VCGTU.

unsigned FastEmit_ARMISD_VCGTU_MVT_v8i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VCGTuv8i8, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGTU_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VCGTuv16i8, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGTU_MVT_v4i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VCGTuv4i16, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGTU_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VCGTuv8i16, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGTU_MVT_v2i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VCGTuv2i32, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGTU_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VCGTuv4i32, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VCGTU_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARMISD_VCGTU_MVT_v8i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ARMISD_VCGTU_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i16: return FastEmit_ARMISD_VCGTU_MVT_v4i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ARMISD_VCGTU_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i32: return FastEmit_ARMISD_VCGTU_MVT_v2i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ARMISD_VCGTU_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VMOVDRR.

unsigned FastEmit_ARMISD_VMOVDRR_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((Subtarget->hasVFP2())) {
    return FastEmitInst_rr(ARM::VMOVDRR, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VMOVDRR_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ARMISD_VMOVDRR_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VMULLs.

unsigned FastEmit_ARMISD_VMULLs_MVT_v8i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VMULLsv8i16, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VMULLs_MVT_v4i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VMULLsv4i32, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VMULLs_MVT_v2i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VMULLsv2i64, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VMULLs_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARMISD_VMULLs_MVT_v8i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i16: return FastEmit_ARMISD_VMULLs_MVT_v4i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i32: return FastEmit_ARMISD_VMULLs_MVT_v2i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VMULLu.

unsigned FastEmit_ARMISD_VMULLu_MVT_v8i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VMULLuv8i16, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VMULLu_MVT_v4i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VMULLuv4i32, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VMULLu_MVT_v2i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VMULLuv2i64, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VMULLu_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARMISD_VMULLu_MVT_v8i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i16: return FastEmit_ARMISD_VMULLu_MVT_v4i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i32: return FastEmit_ARMISD_VMULLu_MVT_v2i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VTST.

unsigned FastEmit_ARMISD_VTST_MVT_v8i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VTSTv8i8, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VTST_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VTSTv16i8, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VTST_MVT_v4i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VTSTv4i16, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VTST_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VTSTv8i16, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VTST_MVT_v2i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VTSTv2i32, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VTST_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VTSTv4i32, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VTST_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARMISD_VTST_MVT_v8i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ARMISD_VTST_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i16: return FastEmit_ARMISD_VTST_MVT_v4i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ARMISD_VTST_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i32: return FastEmit_ARMISD_VTST_MVT_v2i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ARMISD_VTST_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::ADD.

unsigned FastEmit_ISD_ADD_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((!Subtarget->isThumb())) {
    return FastEmitInst_rr(ARM::ADDrr, &ARM::GPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->isThumb()) && (Subtarget->isThumb1Only())) {
    return FastEmitInst_rr(ARM::tADDrr, &ARM::tGPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->isThumb2())) {
    return FastEmitInst_rr(ARM::t2ADDrr, &ARM::GPRnopcRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ADD_MVT_v8i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VADDv8i8, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ADD_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VADDv16i8, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ADD_MVT_v4i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VADDv4i16, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ADD_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VADDv8i16, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ADD_MVT_v2i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VADDv2i32, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ADD_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VADDv4i32, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ADD_MVT_v1i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v1i64)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VADDv1i64, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ADD_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VADDv2i64, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ADD_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_ADD_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i8: return FastEmit_ISD_ADD_MVT_v8i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ISD_ADD_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i16: return FastEmit_ISD_ADD_MVT_v4i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ISD_ADD_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i32: return FastEmit_ISD_ADD_MVT_v2i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_ADD_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v1i64: return FastEmit_ISD_ADD_MVT_v1i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ISD_ADD_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::ADDC.

unsigned FastEmit_ISD_ADDC_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->isThumb()) && (Subtarget->isThumb1Only())) {
    return FastEmitInst_rr(ARM::tADDrr, &ARM::tGPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ADDC_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_ADDC_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::ADDE.

unsigned FastEmit_ISD_ADDE_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->isThumb()) && (Subtarget->isThumb1Only())) {
    return FastEmitInst_rr(ARM::tADC, &ARM::tGPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ADDE_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_ADDE_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::AND.

unsigned FastEmit_ISD_AND_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((!Subtarget->isThumb())) {
    return FastEmitInst_rr(ARM::ANDrr, &ARM::GPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->isThumb()) && (Subtarget->isThumb1Only())) {
    return FastEmitInst_rr(ARM::tAND, &ARM::tGPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->isThumb2())) {
    return FastEmitInst_rr(ARM::t2ANDrr, &ARM::rGPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_AND_MVT_v2i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VANDd, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_AND_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VANDq, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_AND_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_AND_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i32: return FastEmit_ISD_AND_MVT_v2i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_AND_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FADD.

unsigned FastEmit_ISD_FADD_MVT_f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasVFP2()) && (!Subtarget->useNEONForSinglePrecisionFP())) {
    return FastEmitInst_rr(ARM::VADDS, &ARM::SPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FADD_MVT_f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((Subtarget->hasVFP2())) {
    return FastEmitInst_rr(ARM::VADDD, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FADD_MVT_v2f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VADDfd, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FADD_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VADDfq, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FADD_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FADD_MVT_f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f64: return FastEmit_ISD_FADD_MVT_f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f32: return FastEmit_ISD_FADD_MVT_v2f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f32: return FastEmit_ISD_FADD_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FDIV.

unsigned FastEmit_ISD_FDIV_MVT_f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasVFP2())) {
    return FastEmitInst_rr(ARM::VDIVS, &ARM::SPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FDIV_MVT_f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((Subtarget->hasVFP2())) {
    return FastEmitInst_rr(ARM::VDIVD, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FDIV_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FDIV_MVT_f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f64: return FastEmit_ISD_FDIV_MVT_f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FMUL.

unsigned FastEmit_ISD_FMUL_MVT_f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasVFP2()) && (!Subtarget->useNEONForSinglePrecisionFP())) {
    return FastEmitInst_rr(ARM::VMULS, &ARM::SPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FMUL_MVT_f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((Subtarget->hasVFP2())) {
    return FastEmitInst_rr(ARM::VMULD, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FMUL_MVT_v2f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VMULfd, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FMUL_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VMULfq, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FMUL_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FMUL_MVT_f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f64: return FastEmit_ISD_FMUL_MVT_f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f32: return FastEmit_ISD_FMUL_MVT_v2f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f32: return FastEmit_ISD_FMUL_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FSUB.

unsigned FastEmit_ISD_FSUB_MVT_f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasVFP2()) && (!Subtarget->useNEONForSinglePrecisionFP())) {
    return FastEmitInst_rr(ARM::VSUBS, &ARM::SPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FSUB_MVT_f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((Subtarget->hasVFP2())) {
    return FastEmitInst_rr(ARM::VSUBD, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FSUB_MVT_v2f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VSUBfd, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FSUB_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VSUBfq, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FSUB_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FSUB_MVT_f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f64: return FastEmit_ISD_FSUB_MVT_f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f32: return FastEmit_ISD_FSUB_MVT_v2f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f32: return FastEmit_ISD_FSUB_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::MUL.

unsigned FastEmit_ISD_MUL_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((!Subtarget->isThumb()) && (!Subtarget->hasV6Ops()) && (Subtarget->useMulOps())) {
    return FastEmitInst_rr(ARM::MULv5, &ARM::GPRnopcRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((!Subtarget->isThumb()) && (Subtarget->hasV6Ops())) {
    return FastEmitInst_rr(ARM::MUL, &ARM::GPRnopcRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->isThumb()) && (Subtarget->isThumb1Only())) {
    return FastEmitInst_rr(ARM::tMUL, &ARM::tGPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->isThumb2())) {
    return FastEmitInst_rr(ARM::t2MUL, &ARM::rGPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_MUL_MVT_v8i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VMULv8i8, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_MUL_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VMULv16i8, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_MUL_MVT_v4i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VMULv4i16, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_MUL_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VMULv8i16, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_MUL_MVT_v2i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VMULv2i32, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_MUL_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VMULv4i32, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_MUL_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_MUL_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i8: return FastEmit_ISD_MUL_MVT_v8i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ISD_MUL_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i16: return FastEmit_ISD_MUL_MVT_v4i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ISD_MUL_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i32: return FastEmit_ISD_MUL_MVT_v2i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_MUL_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::MULHS.

unsigned FastEmit_ISD_MULHS_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((!Subtarget->isThumb()) && (Subtarget->hasV6Ops())) {
    return FastEmitInst_rr(ARM::SMMUL, &ARM::GPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->isThumb2()) && (Subtarget->hasThumb2DSP())) {
    return FastEmitInst_rr(ARM::t2SMMUL, &ARM::rGPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_MULHS_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_MULHS_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::OR.

unsigned FastEmit_ISD_OR_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((!Subtarget->isThumb())) {
    return FastEmitInst_rr(ARM::ORRrr, &ARM::GPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->isThumb()) && (Subtarget->isThumb1Only())) {
    return FastEmitInst_rr(ARM::tORR, &ARM::tGPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->isThumb2())) {
    return FastEmitInst_rr(ARM::t2ORRrr, &ARM::rGPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_OR_MVT_v2i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VORRd, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_OR_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VORRq, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_OR_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_OR_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i32: return FastEmit_ISD_OR_MVT_v2i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_OR_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::ROTR.

unsigned FastEmit_ISD_ROTR_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->isThumb()) && (Subtarget->isThumb1Only())) {
    return FastEmitInst_rr(ARM::tROR, &ARM::tGPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->isThumb2())) {
    return FastEmitInst_rr(ARM::t2RORrr, &ARM::rGPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ROTR_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_ROTR_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SDIV.

unsigned FastEmit_ISD_SDIV_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((!Subtarget->isThumb()) && (Subtarget->hasDivideInARMMode())) {
    return FastEmitInst_rr(ARM::SDIV, &ARM::GPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasDivide()) && (Subtarget->isThumb2())) {
    return FastEmitInst_rr(ARM::t2SDIV, &ARM::rGPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SDIV_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SDIV_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SHL.

unsigned FastEmit_ISD_SHL_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->isThumb()) && (Subtarget->isThumb1Only())) {
    return FastEmitInst_rr(ARM::tLSLrr, &ARM::tGPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->isThumb2())) {
    return FastEmitInst_rr(ARM::t2LSLrr, &ARM::rGPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SHL_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SHL_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SRA.

unsigned FastEmit_ISD_SRA_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->isThumb()) && (Subtarget->isThumb1Only())) {
    return FastEmitInst_rr(ARM::tASRrr, &ARM::tGPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->isThumb2())) {
    return FastEmitInst_rr(ARM::t2ASRrr, &ARM::rGPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SRA_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SRA_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SRL.

unsigned FastEmit_ISD_SRL_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->isThumb()) && (Subtarget->isThumb1Only())) {
    return FastEmitInst_rr(ARM::tLSRrr, &ARM::tGPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->isThumb2())) {
    return FastEmitInst_rr(ARM::t2LSRrr, &ARM::rGPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SRL_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SRL_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SUB.

unsigned FastEmit_ISD_SUB_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((!Subtarget->isThumb())) {
    return FastEmitInst_rr(ARM::SUBrr, &ARM::GPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->isThumb()) && (Subtarget->isThumb1Only())) {
    return FastEmitInst_rr(ARM::tSUBrr, &ARM::tGPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->isThumb2())) {
    return FastEmitInst_rr(ARM::t2SUBrr, &ARM::GPRnopcRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SUB_MVT_v8i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VSUBv8i8, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SUB_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VSUBv16i8, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SUB_MVT_v4i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VSUBv4i16, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SUB_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VSUBv8i16, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SUB_MVT_v2i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VSUBv2i32, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SUB_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VSUBv4i32, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SUB_MVT_v1i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v1i64)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VSUBv1i64, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SUB_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VSUBv2i64, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SUB_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SUB_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i8: return FastEmit_ISD_SUB_MVT_v8i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ISD_SUB_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i16: return FastEmit_ISD_SUB_MVT_v4i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ISD_SUB_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i32: return FastEmit_ISD_SUB_MVT_v2i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_SUB_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v1i64: return FastEmit_ISD_SUB_MVT_v1i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ISD_SUB_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SUBC.

unsigned FastEmit_ISD_SUBC_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->isThumb()) && (Subtarget->isThumb1Only())) {
    return FastEmitInst_rr(ARM::tSUBrr, &ARM::tGPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SUBC_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SUBC_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SUBE.

unsigned FastEmit_ISD_SUBE_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->isThumb()) && (Subtarget->isThumb1Only())) {
    return FastEmitInst_rr(ARM::tSBC, &ARM::tGPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SUBE_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SUBE_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::UDIV.

unsigned FastEmit_ISD_UDIV_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((!Subtarget->isThumb()) && (Subtarget->hasDivideInARMMode())) {
    return FastEmitInst_rr(ARM::UDIV, &ARM::GPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasDivide()) && (Subtarget->isThumb2())) {
    return FastEmitInst_rr(ARM::t2UDIV, &ARM::rGPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_UDIV_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_UDIV_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::XOR.

unsigned FastEmit_ISD_XOR_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((!Subtarget->isThumb())) {
    return FastEmitInst_rr(ARM::EORrr, &ARM::GPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->isThumb()) && (Subtarget->isThumb1Only())) {
    return FastEmitInst_rr(ARM::tEOR, &ARM::tGPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->isThumb2())) {
    return FastEmitInst_rr(ARM::t2EORrr, &ARM::rGPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_XOR_MVT_v2i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VEORd, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_XOR_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rr(ARM::VEORq, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_XOR_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_XOR_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i32: return FastEmit_ISD_XOR_MVT_v2i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_XOR_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_rr(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (Opcode) {
  case ARMISD::CMP: return FastEmit_ARMISD_CMP_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ARMISD::CMPFP: return FastEmit_ARMISD_CMPFP_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ARMISD::CMPZ: return FastEmit_ARMISD_CMPZ_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ARMISD::EH_SJLJ_LONGJMP: return FastEmit_ARMISD_EH_SJLJ_LONGJMP_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ARMISD::EH_SJLJ_SETJMP: return FastEmit_ARMISD_EH_SJLJ_SETJMP_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ARMISD::VCEQ: return FastEmit_ARMISD_VCEQ_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ARMISD::VCGE: return FastEmit_ARMISD_VCGE_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ARMISD::VCGEU: return FastEmit_ARMISD_VCGEU_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ARMISD::VCGT: return FastEmit_ARMISD_VCGT_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ARMISD::VCGTU: return FastEmit_ARMISD_VCGTU_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ARMISD::VMOVDRR: return FastEmit_ARMISD_VMOVDRR_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ARMISD::VMULLs: return FastEmit_ARMISD_VMULLs_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ARMISD::VMULLu: return FastEmit_ARMISD_VMULLu_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ARMISD::VTST: return FastEmit_ARMISD_VTST_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::ADD: return FastEmit_ISD_ADD_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::ADDC: return FastEmit_ISD_ADDC_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::ADDE: return FastEmit_ISD_ADDE_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::AND: return FastEmit_ISD_AND_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::FADD: return FastEmit_ISD_FADD_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::FDIV: return FastEmit_ISD_FDIV_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::FMUL: return FastEmit_ISD_FMUL_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::FSUB: return FastEmit_ISD_FSUB_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::MUL: return FastEmit_ISD_MUL_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::MULHS: return FastEmit_ISD_MULHS_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::OR: return FastEmit_ISD_OR_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::ROTR: return FastEmit_ISD_ROTR_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::SDIV: return FastEmit_ISD_SDIV_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::SHL: return FastEmit_ISD_SHL_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::SRA: return FastEmit_ISD_SRA_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::SRL: return FastEmit_ISD_SRL_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::SUB: return FastEmit_ISD_SUB_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::SUBC: return FastEmit_ISD_SUBC_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::SUBE: return FastEmit_ISD_SUBE_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::UDIV: return FastEmit_ISD_UDIV_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::XOR: return FastEmit_ISD_XOR_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VBSL.

unsigned FastEmit_ARMISD_VBSL_MVT_v2i32_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rrr(ARM::VBSLd, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VBSL_MVT_v4i32_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rrr(ARM::VBSLq, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VBSL_rrr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v2i32: return FastEmit_ARMISD_VBSL_MVT_v2i32_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::v4i32: return FastEmit_ARMISD_VBSL_MVT_v4i32_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_rrr(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  switch (Opcode) {
  case ARMISD::VBSL: return FastEmit_ARMISD_VBSL_rrr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VEXT.

unsigned FastEmit_ARMISD_VEXT_MVT_v8i8_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rri(ARM::VEXTd8, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VEXT_MVT_v16i8_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rri(ARM::VEXTq8, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VEXT_MVT_v4i16_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rri(ARM::VEXTd16, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VEXT_MVT_v8i16_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rri(ARM::VEXTq16, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VEXT_MVT_v2i32_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rri(ARM::VEXTd32, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VEXT_MVT_v4i32_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rri(ARM::VEXTq32, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VEXT_MVT_v2i64_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rri(ARM::VEXTq64, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VEXT_MVT_v2f32_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v2f32)
    return 0;
  return FastEmitInst_rri(ARM::VEXTd32, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
}

unsigned FastEmit_ARMISD_VEXT_MVT_v4f32_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  return FastEmitInst_rri(ARM::VEXTq32, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
}

unsigned FastEmit_ARMISD_VEXT_rri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARMISD_VEXT_MVT_v8i8_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v16i8: return FastEmit_ARMISD_VEXT_MVT_v16i8_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v4i16: return FastEmit_ARMISD_VEXT_MVT_v4i16_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v8i16: return FastEmit_ARMISD_VEXT_MVT_v8i16_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v2i32: return FastEmit_ARMISD_VEXT_MVT_v2i32_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v4i32: return FastEmit_ARMISD_VEXT_MVT_v4i32_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v2i64: return FastEmit_ARMISD_VEXT_MVT_v2i64_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v2f32: return FastEmit_ARMISD_VEXT_MVT_v2f32_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v4f32: return FastEmit_ARMISD_VEXT_MVT_v4f32_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VSLI.

unsigned FastEmit_ARMISD_VSLI_MVT_v8i8_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rri(ARM::VSLIv8i8, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSLI_MVT_v16i8_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rri(ARM::VSLIv16i8, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSLI_MVT_v4i16_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rri(ARM::VSLIv4i16, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSLI_MVT_v8i16_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rri(ARM::VSLIv8i16, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSLI_MVT_v2i32_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rri(ARM::VSLIv2i32, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSLI_MVT_v4i32_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rri(ARM::VSLIv4i32, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSLI_MVT_v1i64_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v1i64)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rri(ARM::VSLIv1i64, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSLI_MVT_v2i64_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rri(ARM::VSLIv2i64, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSLI_rri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARMISD_VSLI_MVT_v8i8_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v16i8: return FastEmit_ARMISD_VSLI_MVT_v16i8_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v4i16: return FastEmit_ARMISD_VSLI_MVT_v4i16_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v8i16: return FastEmit_ARMISD_VSLI_MVT_v8i16_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v2i32: return FastEmit_ARMISD_VSLI_MVT_v2i32_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v4i32: return FastEmit_ARMISD_VSLI_MVT_v4i32_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v1i64: return FastEmit_ARMISD_VSLI_MVT_v1i64_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v2i64: return FastEmit_ARMISD_VSLI_MVT_v2i64_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VSRI.

unsigned FastEmit_ARMISD_VSRI_MVT_v8i8_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rri(ARM::VSRIv8i8, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSRI_MVT_v16i8_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rri(ARM::VSRIv16i8, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSRI_MVT_v4i16_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rri(ARM::VSRIv4i16, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSRI_MVT_v8i16_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rri(ARM::VSRIv8i16, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSRI_MVT_v2i32_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rri(ARM::VSRIv2i32, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSRI_MVT_v4i32_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rri(ARM::VSRIv4i32, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSRI_MVT_v1i64_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v1i64)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rri(ARM::VSRIv1i64, &ARM::DPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSRI_MVT_v2i64_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_rri(ARM::VSRIv2i64, &ARM::QPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSRI_rri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARMISD_VSRI_MVT_v8i8_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v16i8: return FastEmit_ARMISD_VSRI_MVT_v16i8_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v4i16: return FastEmit_ARMISD_VSRI_MVT_v4i16_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v8i16: return FastEmit_ARMISD_VSRI_MVT_v8i16_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v2i32: return FastEmit_ARMISD_VSRI_MVT_v2i32_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v4i32: return FastEmit_ARMISD_VSRI_MVT_v4i32_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v1i64: return FastEmit_ARMISD_VSRI_MVT_v1i64_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::v2i64: return FastEmit_ARMISD_VSRI_MVT_v2i64_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_rri(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  switch (Opcode) {
  case ARMISD::VEXT: return FastEmit_ARMISD_VEXT_rri(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case ARMISD::VSLI: return FastEmit_ARMISD_VSLI_rri(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case ARMISD::VSRI: return FastEmit_ARMISD_VSRI_rri(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::COPY_STRUCT_BYVAL.

unsigned FastEmit_ARMISD_COPY_STRUCT_BYVAL_MVT_i32_rrii(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2, uint64_t imm3) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  return FastEmitInst_rrii(ARM::COPY_STRUCT_BYVAL_I32, &ARM::GPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2, imm3);
}

unsigned FastEmit_ARMISD_COPY_STRUCT_BYVAL_rrii(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2, uint64_t imm3) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ARMISD_COPY_STRUCT_BYVAL_MVT_i32_rrii(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2, imm3);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_rrii(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2, uint64_t imm3) {
  switch (Opcode) {
  case ARMISD::COPY_STRUCT_BYVAL: return FastEmit_ARMISD_COPY_STRUCT_BYVAL_rrii(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2, imm3);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::PIC_ADD.

unsigned FastEmit_ARMISD_PIC_ADD_MVT_i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((!Subtarget->isThumb())) {
    return FastEmitInst_ri(ARM::PICADD, &ARM::GPRRegClass, Op0, Op0IsKill, imm1);
  }
  if ((Subtarget->isThumb())) {
    return FastEmitInst_ri(ARM::tPICADD, &ARM::GPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_PIC_ADD_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ARMISD_PIC_ADD_MVT_i32_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VDUPLANE.

unsigned FastEmit_ARMISD_VDUPLANE_MVT_v8i8_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VDUPLN8d, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VDUPLANE_MVT_v4i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VDUPLN16d, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VDUPLANE_MVT_v2i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VDUPLN32d, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VDUPLANE_MVT_v2f32_MVT_v2f32_ri(unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  return FastEmitInst_ri(ARM::VDUPLN32d, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ARMISD_VDUPLANE_MVT_v2f32_MVT_v4f32_ri(unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  return FastEmitInst_ri(ARM::VDUPLN32q, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ARMISD_VDUPLANE_MVT_v2f32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
switch (RetVT.SimpleTy) {
  case MVT::v2f32: return FastEmit_ARMISD_VDUPLANE_MVT_v2f32_MVT_v2f32_ri(Op0, Op0IsKill, imm1);
  case MVT::v4f32: return FastEmit_ARMISD_VDUPLANE_MVT_v2f32_MVT_v4f32_ri(Op0, Op0IsKill, imm1);
  default: return 0;
}
}

unsigned FastEmit_ARMISD_VDUPLANE_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARMISD_VDUPLANE_MVT_v8i8_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i16: return FastEmit_ARMISD_VDUPLANE_MVT_v4i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i32: return FastEmit_ARMISD_VDUPLANE_MVT_v2i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2f32: return FastEmit_ARMISD_VDUPLANE_MVT_v2f32_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VGETLANEs.

unsigned FastEmit_ARMISD_VGETLANEs_MVT_v8i8_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VGETLNs8, &ARM::GPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VGETLANEs_MVT_v4i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VGETLNs16, &ARM::GPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VGETLANEs_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARMISD_VGETLANEs_MVT_v8i8_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i16: return FastEmit_ARMISD_VGETLANEs_MVT_v4i16_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VGETLANEu.

unsigned FastEmit_ARMISD_VGETLANEu_MVT_v8i8_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VGETLNu8, &ARM::GPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VGETLANEu_MVT_v4i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VGETLNu16, &ARM::GPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VGETLANEu_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARMISD_VGETLANEu_MVT_v8i8_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i16: return FastEmit_ARMISD_VGETLANEu_MVT_v4i16_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VQRSHRNs.

unsigned FastEmit_ARMISD_VQRSHRNs_MVT_v8i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQRSHRNsv8i8, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQRSHRNs_MVT_v4i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQRSHRNsv4i16, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQRSHRNs_MVT_v2i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQRSHRNsv2i32, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQRSHRNs_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v8i16: return FastEmit_ARMISD_VQRSHRNs_MVT_v8i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i32: return FastEmit_ARMISD_VQRSHRNs_MVT_v4i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i64: return FastEmit_ARMISD_VQRSHRNs_MVT_v2i64_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VQRSHRNsu.

unsigned FastEmit_ARMISD_VQRSHRNsu_MVT_v8i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQRSHRUNv8i8, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQRSHRNsu_MVT_v4i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQRSHRUNv4i16, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQRSHRNsu_MVT_v2i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQRSHRUNv2i32, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQRSHRNsu_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v8i16: return FastEmit_ARMISD_VQRSHRNsu_MVT_v8i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i32: return FastEmit_ARMISD_VQRSHRNsu_MVT_v4i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i64: return FastEmit_ARMISD_VQRSHRNsu_MVT_v2i64_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VQRSHRNu.

unsigned FastEmit_ARMISD_VQRSHRNu_MVT_v8i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQRSHRNuv8i8, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQRSHRNu_MVT_v4i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQRSHRNuv4i16, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQRSHRNu_MVT_v2i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQRSHRNuv2i32, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQRSHRNu_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v8i16: return FastEmit_ARMISD_VQRSHRNu_MVT_v8i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i32: return FastEmit_ARMISD_VQRSHRNu_MVT_v4i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i64: return FastEmit_ARMISD_VQRSHRNu_MVT_v2i64_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VQSHLs.

unsigned FastEmit_ARMISD_VQSHLs_MVT_v8i8_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQSHLsiv8i8, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQSHLs_MVT_v16i8_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQSHLsiv16i8, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQSHLs_MVT_v4i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQSHLsiv4i16, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQSHLs_MVT_v8i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQSHLsiv8i16, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQSHLs_MVT_v2i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQSHLsiv2i32, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQSHLs_MVT_v4i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQSHLsiv4i32, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQSHLs_MVT_v1i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v1i64)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQSHLsiv1i64, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQSHLs_MVT_v2i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQSHLsiv2i64, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQSHLs_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARMISD_VQSHLs_MVT_v8i8_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v16i8: return FastEmit_ARMISD_VQSHLs_MVT_v16i8_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i16: return FastEmit_ARMISD_VQSHLs_MVT_v4i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v8i16: return FastEmit_ARMISD_VQSHLs_MVT_v8i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i32: return FastEmit_ARMISD_VQSHLs_MVT_v2i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i32: return FastEmit_ARMISD_VQSHLs_MVT_v4i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v1i64: return FastEmit_ARMISD_VQSHLs_MVT_v1i64_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i64: return FastEmit_ARMISD_VQSHLs_MVT_v2i64_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VQSHLsu.

unsigned FastEmit_ARMISD_VQSHLsu_MVT_v8i8_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQSHLsuv8i8, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQSHLsu_MVT_v16i8_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQSHLsuv16i8, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQSHLsu_MVT_v4i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQSHLsuv4i16, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQSHLsu_MVT_v8i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQSHLsuv8i16, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQSHLsu_MVT_v2i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQSHLsuv2i32, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQSHLsu_MVT_v4i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQSHLsuv4i32, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQSHLsu_MVT_v1i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v1i64)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQSHLsuv1i64, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQSHLsu_MVT_v2i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQSHLsuv2i64, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQSHLsu_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARMISD_VQSHLsu_MVT_v8i8_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v16i8: return FastEmit_ARMISD_VQSHLsu_MVT_v16i8_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i16: return FastEmit_ARMISD_VQSHLsu_MVT_v4i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v8i16: return FastEmit_ARMISD_VQSHLsu_MVT_v8i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i32: return FastEmit_ARMISD_VQSHLsu_MVT_v2i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i32: return FastEmit_ARMISD_VQSHLsu_MVT_v4i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v1i64: return FastEmit_ARMISD_VQSHLsu_MVT_v1i64_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i64: return FastEmit_ARMISD_VQSHLsu_MVT_v2i64_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VQSHLu.

unsigned FastEmit_ARMISD_VQSHLu_MVT_v8i8_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQSHLuiv8i8, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQSHLu_MVT_v16i8_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQSHLuiv16i8, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQSHLu_MVT_v4i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQSHLuiv4i16, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQSHLu_MVT_v8i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQSHLuiv8i16, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQSHLu_MVT_v2i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQSHLuiv2i32, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQSHLu_MVT_v4i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQSHLuiv4i32, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQSHLu_MVT_v1i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v1i64)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQSHLuiv1i64, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQSHLu_MVT_v2i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQSHLuiv2i64, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQSHLu_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARMISD_VQSHLu_MVT_v8i8_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v16i8: return FastEmit_ARMISD_VQSHLu_MVT_v16i8_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i16: return FastEmit_ARMISD_VQSHLu_MVT_v4i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v8i16: return FastEmit_ARMISD_VQSHLu_MVT_v8i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i32: return FastEmit_ARMISD_VQSHLu_MVT_v2i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i32: return FastEmit_ARMISD_VQSHLu_MVT_v4i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v1i64: return FastEmit_ARMISD_VQSHLu_MVT_v1i64_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i64: return FastEmit_ARMISD_VQSHLu_MVT_v2i64_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VQSHRNs.

unsigned FastEmit_ARMISD_VQSHRNs_MVT_v8i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQSHRNsv8i8, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQSHRNs_MVT_v4i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQSHRNsv4i16, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQSHRNs_MVT_v2i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQSHRNsv2i32, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQSHRNs_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v8i16: return FastEmit_ARMISD_VQSHRNs_MVT_v8i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i32: return FastEmit_ARMISD_VQSHRNs_MVT_v4i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i64: return FastEmit_ARMISD_VQSHRNs_MVT_v2i64_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VQSHRNsu.

unsigned FastEmit_ARMISD_VQSHRNsu_MVT_v8i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQSHRUNv8i8, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQSHRNsu_MVT_v4i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQSHRUNv4i16, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQSHRNsu_MVT_v2i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQSHRUNv2i32, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQSHRNsu_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v8i16: return FastEmit_ARMISD_VQSHRNsu_MVT_v8i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i32: return FastEmit_ARMISD_VQSHRNsu_MVT_v4i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i64: return FastEmit_ARMISD_VQSHRNsu_MVT_v2i64_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VQSHRNu.

unsigned FastEmit_ARMISD_VQSHRNu_MVT_v8i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQSHRNuv8i8, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQSHRNu_MVT_v4i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQSHRNuv4i16, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQSHRNu_MVT_v2i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VQSHRNuv2i32, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VQSHRNu_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v8i16: return FastEmit_ARMISD_VQSHRNu_MVT_v8i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i32: return FastEmit_ARMISD_VQSHRNu_MVT_v4i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i64: return FastEmit_ARMISD_VQSHRNu_MVT_v2i64_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VRSHRN.

unsigned FastEmit_ARMISD_VRSHRN_MVT_v8i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VRSHRNv8i8, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VRSHRN_MVT_v4i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VRSHRNv4i16, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VRSHRN_MVT_v2i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VRSHRNv2i32, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VRSHRN_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v8i16: return FastEmit_ARMISD_VRSHRN_MVT_v8i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i32: return FastEmit_ARMISD_VRSHRN_MVT_v4i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i64: return FastEmit_ARMISD_VRSHRN_MVT_v2i64_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VRSHRs.

unsigned FastEmit_ARMISD_VRSHRs_MVT_v8i8_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VRSHRsv8i8, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VRSHRs_MVT_v16i8_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VRSHRsv16i8, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VRSHRs_MVT_v4i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VRSHRsv4i16, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VRSHRs_MVT_v8i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VRSHRsv8i16, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VRSHRs_MVT_v2i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VRSHRsv2i32, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VRSHRs_MVT_v4i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VRSHRsv4i32, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VRSHRs_MVT_v1i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v1i64)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VRSHRsv1i64, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VRSHRs_MVT_v2i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VRSHRsv2i64, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VRSHRs_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARMISD_VRSHRs_MVT_v8i8_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v16i8: return FastEmit_ARMISD_VRSHRs_MVT_v16i8_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i16: return FastEmit_ARMISD_VRSHRs_MVT_v4i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v8i16: return FastEmit_ARMISD_VRSHRs_MVT_v8i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i32: return FastEmit_ARMISD_VRSHRs_MVT_v2i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i32: return FastEmit_ARMISD_VRSHRs_MVT_v4i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v1i64: return FastEmit_ARMISD_VRSHRs_MVT_v1i64_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i64: return FastEmit_ARMISD_VRSHRs_MVT_v2i64_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VRSHRu.

unsigned FastEmit_ARMISD_VRSHRu_MVT_v8i8_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VRSHRuv8i8, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VRSHRu_MVT_v16i8_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VRSHRuv16i8, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VRSHRu_MVT_v4i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VRSHRuv4i16, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VRSHRu_MVT_v8i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VRSHRuv8i16, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VRSHRu_MVT_v2i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VRSHRuv2i32, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VRSHRu_MVT_v4i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VRSHRuv4i32, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VRSHRu_MVT_v1i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v1i64)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VRSHRuv1i64, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VRSHRu_MVT_v2i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VRSHRuv2i64, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VRSHRu_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARMISD_VRSHRu_MVT_v8i8_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v16i8: return FastEmit_ARMISD_VRSHRu_MVT_v16i8_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i16: return FastEmit_ARMISD_VRSHRu_MVT_v4i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v8i16: return FastEmit_ARMISD_VRSHRu_MVT_v8i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i32: return FastEmit_ARMISD_VRSHRu_MVT_v2i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i32: return FastEmit_ARMISD_VRSHRu_MVT_v4i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v1i64: return FastEmit_ARMISD_VRSHRu_MVT_v1i64_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i64: return FastEmit_ARMISD_VRSHRu_MVT_v2i64_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VSHL.

unsigned FastEmit_ARMISD_VSHL_MVT_v8i8_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VSHLiv8i8, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSHL_MVT_v16i8_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VSHLiv16i8, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSHL_MVT_v4i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VSHLiv4i16, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSHL_MVT_v8i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VSHLiv8i16, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSHL_MVT_v2i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VSHLiv2i32, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSHL_MVT_v4i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VSHLiv4i32, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSHL_MVT_v1i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v1i64)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VSHLiv1i64, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSHL_MVT_v2i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VSHLiv2i64, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSHL_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARMISD_VSHL_MVT_v8i8_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v16i8: return FastEmit_ARMISD_VSHL_MVT_v16i8_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i16: return FastEmit_ARMISD_VSHL_MVT_v4i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v8i16: return FastEmit_ARMISD_VSHL_MVT_v8i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i32: return FastEmit_ARMISD_VSHL_MVT_v2i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i32: return FastEmit_ARMISD_VSHL_MVT_v4i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v1i64: return FastEmit_ARMISD_VSHL_MVT_v1i64_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i64: return FastEmit_ARMISD_VSHL_MVT_v2i64_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VSHLLi.

unsigned FastEmit_ARMISD_VSHLLi_MVT_v8i8_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VSHLLi8, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSHLLi_MVT_v4i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VSHLLi16, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSHLLi_MVT_v2i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VSHLLi32, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSHLLi_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARMISD_VSHLLi_MVT_v8i8_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i16: return FastEmit_ARMISD_VSHLLi_MVT_v4i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i32: return FastEmit_ARMISD_VSHLLi_MVT_v2i32_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VSHLLs.

unsigned FastEmit_ARMISD_VSHLLs_MVT_v8i8_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VSHLLsv8i16, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSHLLs_MVT_v4i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VSHLLsv4i32, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSHLLs_MVT_v2i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VSHLLsv2i64, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSHLLs_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARMISD_VSHLLs_MVT_v8i8_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i16: return FastEmit_ARMISD_VSHLLs_MVT_v4i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i32: return FastEmit_ARMISD_VSHLLs_MVT_v2i32_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VSHLLu.

unsigned FastEmit_ARMISD_VSHLLu_MVT_v8i8_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VSHLLuv8i16, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSHLLu_MVT_v4i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VSHLLuv4i32, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSHLLu_MVT_v2i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VSHLLuv2i64, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSHLLu_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARMISD_VSHLLu_MVT_v8i8_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i16: return FastEmit_ARMISD_VSHLLu_MVT_v4i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i32: return FastEmit_ARMISD_VSHLLu_MVT_v2i32_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VSHRN.

unsigned FastEmit_ARMISD_VSHRN_MVT_v8i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VSHRNv8i8, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSHRN_MVT_v4i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VSHRNv4i16, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSHRN_MVT_v2i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VSHRNv2i32, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSHRN_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v8i16: return FastEmit_ARMISD_VSHRN_MVT_v8i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i32: return FastEmit_ARMISD_VSHRN_MVT_v4i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i64: return FastEmit_ARMISD_VSHRN_MVT_v2i64_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VSHRs.

unsigned FastEmit_ARMISD_VSHRs_MVT_v8i8_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VSHRsv8i8, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSHRs_MVT_v16i8_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VSHRsv16i8, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSHRs_MVT_v4i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VSHRsv4i16, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSHRs_MVT_v8i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VSHRsv8i16, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSHRs_MVT_v2i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VSHRsv2i32, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSHRs_MVT_v4i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VSHRsv4i32, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSHRs_MVT_v1i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v1i64)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VSHRsv1i64, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSHRs_MVT_v2i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VSHRsv2i64, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSHRs_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARMISD_VSHRs_MVT_v8i8_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v16i8: return FastEmit_ARMISD_VSHRs_MVT_v16i8_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i16: return FastEmit_ARMISD_VSHRs_MVT_v4i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v8i16: return FastEmit_ARMISD_VSHRs_MVT_v8i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i32: return FastEmit_ARMISD_VSHRs_MVT_v2i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i32: return FastEmit_ARMISD_VSHRs_MVT_v4i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v1i64: return FastEmit_ARMISD_VSHRs_MVT_v1i64_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i64: return FastEmit_ARMISD_VSHRs_MVT_v2i64_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VSHRu.

unsigned FastEmit_ARMISD_VSHRu_MVT_v8i8_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VSHRuv8i8, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSHRu_MVT_v16i8_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VSHRuv16i8, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSHRu_MVT_v4i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VSHRuv4i16, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSHRu_MVT_v8i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VSHRuv8i16, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSHRu_MVT_v2i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VSHRuv2i32, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSHRu_MVT_v4i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VSHRuv4i32, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSHRu_MVT_v1i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v1i64)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VSHRuv1i64, &ARM::DPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSHRu_MVT_v2i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VSHRuv2i64, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VSHRu_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARMISD_VSHRu_MVT_v8i8_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v16i8: return FastEmit_ARMISD_VSHRu_MVT_v16i8_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i16: return FastEmit_ARMISD_VSHRu_MVT_v4i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v8i16: return FastEmit_ARMISD_VSHRu_MVT_v8i16_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i32: return FastEmit_ARMISD_VSHRu_MVT_v2i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i32: return FastEmit_ARMISD_VSHRu_MVT_v4i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v1i64: return FastEmit_ARMISD_VSHRu_MVT_v1i64_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i64: return FastEmit_ARMISD_VSHRu_MVT_v2i64_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::EXTRACT_VECTOR_ELT.

unsigned FastEmit_ISD_EXTRACT_VECTOR_ELT_MVT_v2i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasNEON()) && (!Subtarget->isSwift())) {
    return FastEmitInst_ri(ARM::VGETLNi32, &ARM::GPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ISD_EXTRACT_VECTOR_ELT_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v2i32: return FastEmit_ISD_EXTRACT_VECTOR_ELT_MVT_v2i32_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::SHL.

unsigned FastEmit_ISD_SHL_MVT_i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->isThumb()) && (Subtarget->isThumb1Only())) {
    return FastEmitInst_ri(ARM::tLSLri, &ARM::tGPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ISD_SHL_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SHL_MVT_i32_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_ri(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (VT == MVT::i32 && Predicate_so_imm(imm1))
    if (unsigned Reg = FastEmit_ri_Predicate_so_imm(VT, RetVT, Opcode, Op0, Op0IsKill, imm1))
      return Reg;

  if (VT == MVT::i32 && Predicate_imm0_7(imm1))
    if (unsigned Reg = FastEmit_ri_Predicate_imm0_7(VT, RetVT, Opcode, Op0, Op0IsKill, imm1))
      return Reg;

  if (VT == MVT::i32 && Predicate_imm8_255(imm1))
    if (unsigned Reg = FastEmit_ri_Predicate_imm8_255(VT, RetVT, Opcode, Op0, Op0IsKill, imm1))
      return Reg;

  if (VT == MVT::i32 && Predicate_imm0_255(imm1))
    if (unsigned Reg = FastEmit_ri_Predicate_imm0_255(VT, RetVT, Opcode, Op0, Op0IsKill, imm1))
      return Reg;

  if (VT == MVT::i32 && Predicate_t2_so_imm(imm1))
    if (unsigned Reg = FastEmit_ri_Predicate_t2_so_imm(VT, RetVT, Opcode, Op0, Op0IsKill, imm1))
      return Reg;

  if (VT == MVT::i32 && Predicate_imm0_4095(imm1))
    if (unsigned Reg = FastEmit_ri_Predicate_imm0_4095(VT, RetVT, Opcode, Op0, Op0IsKill, imm1))
      return Reg;

  if (VT == MVT::i32 && Predicate_imm0_31(imm1))
    if (unsigned Reg = FastEmit_ri_Predicate_imm0_31(VT, RetVT, Opcode, Op0, Op0IsKill, imm1))
      return Reg;

  if (VT == MVT::i32 && Predicate_VectorIndex32(imm1))
    if (unsigned Reg = FastEmit_ri_Predicate_VectorIndex32(VT, RetVT, Opcode, Op0, Op0IsKill, imm1))
      return Reg;

  switch (Opcode) {
  case ARMISD::PIC_ADD: return FastEmit_ARMISD_PIC_ADD_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case ARMISD::VDUPLANE: return FastEmit_ARMISD_VDUPLANE_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case ARMISD::VGETLANEs: return FastEmit_ARMISD_VGETLANEs_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case ARMISD::VGETLANEu: return FastEmit_ARMISD_VGETLANEu_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case ARMISD::VQRSHRNs: return FastEmit_ARMISD_VQRSHRNs_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case ARMISD::VQRSHRNsu: return FastEmit_ARMISD_VQRSHRNsu_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case ARMISD::VQRSHRNu: return FastEmit_ARMISD_VQRSHRNu_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case ARMISD::VQSHLs: return FastEmit_ARMISD_VQSHLs_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case ARMISD::VQSHLsu: return FastEmit_ARMISD_VQSHLsu_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case ARMISD::VQSHLu: return FastEmit_ARMISD_VQSHLu_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case ARMISD::VQSHRNs: return FastEmit_ARMISD_VQSHRNs_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case ARMISD::VQSHRNsu: return FastEmit_ARMISD_VQSHRNsu_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case ARMISD::VQSHRNu: return FastEmit_ARMISD_VQSHRNu_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case ARMISD::VRSHRN: return FastEmit_ARMISD_VRSHRN_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case ARMISD::VRSHRs: return FastEmit_ARMISD_VRSHRs_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case ARMISD::VRSHRu: return FastEmit_ARMISD_VRSHRu_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case ARMISD::VSHL: return FastEmit_ARMISD_VSHL_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case ARMISD::VSHLLi: return FastEmit_ARMISD_VSHLLi_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case ARMISD::VSHLLs: return FastEmit_ARMISD_VSHLLs_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case ARMISD::VSHLLu: return FastEmit_ARMISD_VSHLLu_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case ARMISD::VSHRN: return FastEmit_ARMISD_VSHRN_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case ARMISD::VSHRs: return FastEmit_ARMISD_VSHRs_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case ARMISD::VSHRu: return FastEmit_ARMISD_VSHRu_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::EXTRACT_VECTOR_ELT: return FastEmit_ISD_EXTRACT_VECTOR_ELT_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::SHL: return FastEmit_ISD_SHL_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::CMN.

unsigned FastEmit_ARMISD_CMN_MVT_i32_ri_Predicate_so_imm(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  if ((!Subtarget->isThumb())) {
    return FastEmitInst_ri(ARM::CMNri, &ARM::GPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_CMN_ri_Predicate_so_imm(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ARMISD_CMN_MVT_i32_ri_Predicate_so_imm(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::CMP.

unsigned FastEmit_ARMISD_CMP_MVT_i32_ri_Predicate_so_imm(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  if ((!Subtarget->isThumb())) {
    return FastEmitInst_ri(ARM::CMPri, &ARM::GPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_CMP_ri_Predicate_so_imm(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ARMISD_CMP_MVT_i32_ri_Predicate_so_imm(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::CMPZ.

unsigned FastEmit_ARMISD_CMPZ_MVT_i32_ri_Predicate_so_imm(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  if ((!Subtarget->isThumb())) {
    return FastEmitInst_ri(ARM::CMPri, &ARM::GPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_CMPZ_ri_Predicate_so_imm(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ARMISD_CMPZ_MVT_i32_ri_Predicate_so_imm(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::ADD.

unsigned FastEmit_ISD_ADD_MVT_i32_ri_Predicate_so_imm(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((!Subtarget->isThumb())) {
    return FastEmitInst_ri(ARM::ADDri, &ARM::GPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ISD_ADD_ri_Predicate_so_imm(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_ADD_MVT_i32_ri_Predicate_so_imm(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::AND.

unsigned FastEmit_ISD_AND_MVT_i32_ri_Predicate_so_imm(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((!Subtarget->isThumb())) {
    return FastEmitInst_ri(ARM::ANDri, &ARM::GPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ISD_AND_ri_Predicate_so_imm(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_AND_MVT_i32_ri_Predicate_so_imm(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::OR.

unsigned FastEmit_ISD_OR_MVT_i32_ri_Predicate_so_imm(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((!Subtarget->isThumb())) {
    return FastEmitInst_ri(ARM::ORRri, &ARM::GPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ISD_OR_ri_Predicate_so_imm(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_OR_MVT_i32_ri_Predicate_so_imm(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::SUB.

unsigned FastEmit_ISD_SUB_MVT_i32_ri_Predicate_so_imm(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((!Subtarget->isThumb())) {
    return FastEmitInst_ri(ARM::SUBri, &ARM::GPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ISD_SUB_ri_Predicate_so_imm(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SUB_MVT_i32_ri_Predicate_so_imm(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::XOR.

unsigned FastEmit_ISD_XOR_MVT_i32_ri_Predicate_so_imm(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((!Subtarget->isThumb())) {
    return FastEmitInst_ri(ARM::EORri, &ARM::GPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ISD_XOR_ri_Predicate_so_imm(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_XOR_MVT_i32_ri_Predicate_so_imm(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_ri_Predicate_so_imm(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (Opcode) {
  case ARMISD::CMN: return FastEmit_ARMISD_CMN_ri_Predicate_so_imm(VT, RetVT, Op0, Op0IsKill, imm1);
  case ARMISD::CMP: return FastEmit_ARMISD_CMP_ri_Predicate_so_imm(VT, RetVT, Op0, Op0IsKill, imm1);
  case ARMISD::CMPZ: return FastEmit_ARMISD_CMPZ_ri_Predicate_so_imm(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::ADD: return FastEmit_ISD_ADD_ri_Predicate_so_imm(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::AND: return FastEmit_ISD_AND_ri_Predicate_so_imm(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::OR: return FastEmit_ISD_OR_ri_Predicate_so_imm(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::SUB: return FastEmit_ISD_SUB_ri_Predicate_so_imm(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::XOR: return FastEmit_ISD_XOR_ri_Predicate_so_imm(VT, RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::ADD.

unsigned FastEmit_ISD_ADD_MVT_i32_ri_Predicate_imm0_7(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->isThumb()) && (Subtarget->isThumb1Only())) {
    return FastEmitInst_ri(ARM::tADDi3, &ARM::tGPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ISD_ADD_ri_Predicate_imm0_7(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_ADD_MVT_i32_ri_Predicate_imm0_7(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::ADDC.

unsigned FastEmit_ISD_ADDC_MVT_i32_ri_Predicate_imm0_7(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->isThumb()) && (Subtarget->isThumb1Only())) {
    return FastEmitInst_ri(ARM::tADDi3, &ARM::tGPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ISD_ADDC_ri_Predicate_imm0_7(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_ADDC_MVT_i32_ri_Predicate_imm0_7(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_ri_Predicate_imm0_7(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (Opcode) {
  case ISD::ADD: return FastEmit_ISD_ADD_ri_Predicate_imm0_7(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::ADDC: return FastEmit_ISD_ADDC_ri_Predicate_imm0_7(VT, RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::ADD.

unsigned FastEmit_ISD_ADD_MVT_i32_ri_Predicate_imm8_255(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->isThumb()) && (Subtarget->isThumb1Only())) {
    return FastEmitInst_ri(ARM::tADDi8, &ARM::tGPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ISD_ADD_ri_Predicate_imm8_255(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_ADD_MVT_i32_ri_Predicate_imm8_255(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::ADDC.

unsigned FastEmit_ISD_ADDC_MVT_i32_ri_Predicate_imm8_255(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->isThumb()) && (Subtarget->isThumb1Only())) {
    return FastEmitInst_ri(ARM::tADDi8, &ARM::tGPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ISD_ADDC_ri_Predicate_imm8_255(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_ADDC_MVT_i32_ri_Predicate_imm8_255(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_ri_Predicate_imm8_255(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (Opcode) {
  case ISD::ADD: return FastEmit_ISD_ADD_ri_Predicate_imm8_255(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::ADDC: return FastEmit_ISD_ADDC_ri_Predicate_imm8_255(VT, RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::CMP.

unsigned FastEmit_ARMISD_CMP_MVT_i32_ri_Predicate_imm0_255(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  if ((Subtarget->isThumb()) && (Subtarget->isThumb1Only())) {
    return FastEmitInst_ri(ARM::tCMPi8, &ARM::tGPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_CMP_ri_Predicate_imm0_255(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ARMISD_CMP_MVT_i32_ri_Predicate_imm0_255(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::CMPZ.

unsigned FastEmit_ARMISD_CMPZ_MVT_i32_ri_Predicate_imm0_255(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  if ((Subtarget->isThumb()) && (Subtarget->isThumb1Only())) {
    return FastEmitInst_ri(ARM::tCMPi8, &ARM::tGPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_CMPZ_ri_Predicate_imm0_255(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ARMISD_CMPZ_MVT_i32_ri_Predicate_imm0_255(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_ri_Predicate_imm0_255(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (Opcode) {
  case ARMISD::CMP: return FastEmit_ARMISD_CMP_ri_Predicate_imm0_255(VT, RetVT, Op0, Op0IsKill, imm1);
  case ARMISD::CMPZ: return FastEmit_ARMISD_CMPZ_ri_Predicate_imm0_255(VT, RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::CMP.

unsigned FastEmit_ARMISD_CMP_MVT_i32_ri_Predicate_t2_so_imm(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  if ((Subtarget->isThumb2())) {
    return FastEmitInst_ri(ARM::t2CMPri, &ARM::GPRnopcRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_CMP_ri_Predicate_t2_so_imm(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ARMISD_CMP_MVT_i32_ri_Predicate_t2_so_imm(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::CMPZ.

unsigned FastEmit_ARMISD_CMPZ_MVT_i32_ri_Predicate_t2_so_imm(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  if ((Subtarget->isThumb2())) {
    return FastEmitInst_ri(ARM::t2CMPri, &ARM::GPRnopcRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_CMPZ_ri_Predicate_t2_so_imm(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ARMISD_CMPZ_MVT_i32_ri_Predicate_t2_so_imm(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::ADD.

unsigned FastEmit_ISD_ADD_MVT_i32_ri_Predicate_t2_so_imm(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->isThumb2())) {
    return FastEmitInst_ri(ARM::t2ADDri, &ARM::GPRnopcRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ISD_ADD_ri_Predicate_t2_so_imm(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_ADD_MVT_i32_ri_Predicate_t2_so_imm(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::AND.

unsigned FastEmit_ISD_AND_MVT_i32_ri_Predicate_t2_so_imm(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->isThumb2())) {
    return FastEmitInst_ri(ARM::t2ANDri, &ARM::rGPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ISD_AND_ri_Predicate_t2_so_imm(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_AND_MVT_i32_ri_Predicate_t2_so_imm(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::OR.

unsigned FastEmit_ISD_OR_MVT_i32_ri_Predicate_t2_so_imm(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->isThumb2())) {
    return FastEmitInst_ri(ARM::t2ORRri, &ARM::rGPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ISD_OR_ri_Predicate_t2_so_imm(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_OR_MVT_i32_ri_Predicate_t2_so_imm(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::SUB.

unsigned FastEmit_ISD_SUB_MVT_i32_ri_Predicate_t2_so_imm(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->isThumb2())) {
    return FastEmitInst_ri(ARM::t2SUBri, &ARM::GPRnopcRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ISD_SUB_ri_Predicate_t2_so_imm(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SUB_MVT_i32_ri_Predicate_t2_so_imm(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::XOR.

unsigned FastEmit_ISD_XOR_MVT_i32_ri_Predicate_t2_so_imm(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->isThumb2())) {
    return FastEmitInst_ri(ARM::t2EORri, &ARM::rGPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ISD_XOR_ri_Predicate_t2_so_imm(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_XOR_MVT_i32_ri_Predicate_t2_so_imm(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_ri_Predicate_t2_so_imm(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (Opcode) {
  case ARMISD::CMP: return FastEmit_ARMISD_CMP_ri_Predicate_t2_so_imm(VT, RetVT, Op0, Op0IsKill, imm1);
  case ARMISD::CMPZ: return FastEmit_ARMISD_CMPZ_ri_Predicate_t2_so_imm(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::ADD: return FastEmit_ISD_ADD_ri_Predicate_t2_so_imm(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::AND: return FastEmit_ISD_AND_ri_Predicate_t2_so_imm(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::OR: return FastEmit_ISD_OR_ri_Predicate_t2_so_imm(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::SUB: return FastEmit_ISD_SUB_ri_Predicate_t2_so_imm(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::XOR: return FastEmit_ISD_XOR_ri_Predicate_t2_so_imm(VT, RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::ADD.

unsigned FastEmit_ISD_ADD_MVT_i32_ri_Predicate_imm0_4095(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->isThumb2())) {
    return FastEmitInst_ri(ARM::t2ADDri12, &ARM::GPRnopcRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ISD_ADD_ri_Predicate_imm0_4095(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_ADD_MVT_i32_ri_Predicate_imm0_4095(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::SUB.

unsigned FastEmit_ISD_SUB_MVT_i32_ri_Predicate_imm0_4095(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->isThumb2())) {
    return FastEmitInst_ri(ARM::t2SUBri12, &ARM::GPRnopcRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ISD_SUB_ri_Predicate_imm0_4095(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SUB_MVT_i32_ri_Predicate_imm0_4095(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_ri_Predicate_imm0_4095(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (Opcode) {
  case ISD::ADD: return FastEmit_ISD_ADD_ri_Predicate_imm0_4095(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::SUB: return FastEmit_ISD_SUB_ri_Predicate_imm0_4095(VT, RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::ROTR.

unsigned FastEmit_ISD_ROTR_MVT_i32_ri_Predicate_imm0_31(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->isThumb2())) {
    return FastEmitInst_ri(ARM::t2RORri, &ARM::rGPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ISD_ROTR_ri_Predicate_imm0_31(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_ROTR_MVT_i32_ri_Predicate_imm0_31(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::SHL.

unsigned FastEmit_ISD_SHL_MVT_i32_ri_Predicate_imm0_31(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->isThumb2())) {
    return FastEmitInst_ri(ARM::t2LSLri, &ARM::rGPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ISD_SHL_ri_Predicate_imm0_31(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SHL_MVT_i32_ri_Predicate_imm0_31(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_ri_Predicate_imm0_31(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (Opcode) {
  case ISD::ROTR: return FastEmit_ISD_ROTR_ri_Predicate_imm0_31(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::SHL: return FastEmit_ISD_SHL_ri_Predicate_imm0_31(VT, RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ARMISD::VDUPLANE.

unsigned FastEmit_ARMISD_VDUPLANE_MVT_v8i8_ri_Predicate_VectorIndex32(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VDUPLN8q, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VDUPLANE_MVT_v4i16_ri_Predicate_VectorIndex32(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VDUPLN16q, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VDUPLANE_MVT_v2i32_ri_Predicate_VectorIndex32(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasNEON())) {
    return FastEmitInst_ri(ARM::VDUPLN32q, &ARM::QPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ARMISD_VDUPLANE_ri_Predicate_VectorIndex32(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v8i8: return FastEmit_ARMISD_VDUPLANE_MVT_v8i8_ri_Predicate_VectorIndex32(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4i16: return FastEmit_ARMISD_VDUPLANE_MVT_v4i16_ri_Predicate_VectorIndex32(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i32: return FastEmit_ARMISD_VDUPLANE_MVT_v2i32_ri_Predicate_VectorIndex32(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_ri_Predicate_VectorIndex32(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (Opcode) {
  case ARMISD::VDUPLANE: return FastEmit_ARMISD_VDUPLANE_ri_Predicate_VectorIndex32(VT, RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::Constant.

unsigned FastEmit_ISD_Constant_MVT_i32_i(MVT RetVT, uint64_t imm0) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->isThumb()) && (Subtarget->hasV6T2Ops())) {
    return FastEmitInst_i(ARM::t2MOVi32imm, &ARM::rGPRRegClass, imm0);
  }
  return 0;
}

unsigned FastEmit_ISD_Constant_i(MVT VT, MVT RetVT, uint64_t imm0) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_Constant_MVT_i32_i(RetVT, imm0);
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

