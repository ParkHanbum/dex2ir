/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*"Fast" Instruction Selector for the PPC target                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


// FastEmit Immediate Predicate functions.
static bool Predicate_imm32SExt16(int64_t Imm) {

  // imm32SExt16 predicate - True if the i32 immediate fits in a 16-bit
  // sign extended field.  Used by instructions like 'addi'.
  return (int32_t)Imm == (short)Imm;

}
static bool Predicate_imm64SExt16(int64_t Imm) {

  // imm64SExt16 predicate - True if the i64 immediate fits in a 16-bit
  // sign extended field.  Used by instructions like 'addi'.
  return (int64_t)Imm == (short)Imm;

}


// FastEmit functions for ISD::READCYCLECOUNTER.

unsigned FastEmit_ISD_READCYCLECOUNTER_MVT_i64_(MVT RetVT) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_(PPC::MFTB8, &PPC::G8RCRegClass);
}

unsigned FastEmit_ISD_READCYCLECOUNTER_(MVT VT, MVT RetVT) {
  switch (VT.SimpleTy) {
  case MVT::i64: return FastEmit_ISD_READCYCLECOUNTER_MVT_i64_(RetVT);
  default: return 0;
  }
}

// FastEmit functions for PPCISD::MFFS.

unsigned FastEmit_PPCISD_MFFS_MVT_f64_(MVT RetVT) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_(PPC::MFFS, &PPC::F8RCRegClass);
}

unsigned FastEmit_PPCISD_MFFS_(MVT VT, MVT RetVT) {
  switch (VT.SimpleTy) {
  case MVT::f64: return FastEmit_PPCISD_MFFS_MVT_f64_(RetVT);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_(MVT VT, MVT RetVT, unsigned Opcode) {
  switch (Opcode) {
  case ISD::READCYCLECOUNTER: return FastEmit_ISD_READCYCLECOUNTER_(VT, RetVT);
  case PPCISD::MFFS: return FastEmit_PPCISD_MFFS_(VT, RetVT);
  default: return 0;
  }
}

// FastEmit functions for ISD::CTLZ.

unsigned FastEmit_ISD_CTLZ_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_r(PPC::CNTLZW, &PPC::GPRCRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_CTLZ_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_r(PPC::CNTLZD, &PPC::G8RCRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_CTLZ_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_CTLZ_MVT_i32_r(RetVT, Op0, Op0IsKill);
  case MVT::i64: return FastEmit_ISD_CTLZ_MVT_i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::CTPOP.

unsigned FastEmit_ISD_CTPOP_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_r(PPC::POPCNTW, &PPC::GPRCRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_CTPOP_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_r(PPC::POPCNTD, &PPC::G8RCRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_CTPOP_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_CTPOP_MVT_i32_r(RetVT, Op0, Op0IsKill);
  case MVT::i64: return FastEmit_ISD_CTPOP_MVT_i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FABS.

unsigned FastEmit_ISD_FABS_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  return FastEmitInst_r(PPC::FABSS, &PPC::F4RCRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FABS_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_r(PPC::FABSD, &PPC::F8RCRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FABS_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FABS_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_FABS_MVT_f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FCEIL.

unsigned FastEmit_ISD_FCEIL_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  return FastEmitInst_r(PPC::FRIPS, &PPC::F4RCRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FCEIL_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_r(PPC::FRIPD, &PPC::F8RCRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FCEIL_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((PPCSubTarget.hasAltivec())) {
    return FastEmitInst_r(PPC::VRFIP, &PPC::VRRCRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FCEIL_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FCEIL_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_FCEIL_MVT_f64_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_ISD_FCEIL_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FFLOOR.

unsigned FastEmit_ISD_FFLOOR_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  return FastEmitInst_r(PPC::FRIMS, &PPC::F4RCRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FFLOOR_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_r(PPC::FRIMD, &PPC::F8RCRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FFLOOR_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((PPCSubTarget.hasAltivec())) {
    return FastEmitInst_r(PPC::VRFIM, &PPC::VRRCRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FFLOOR_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FFLOOR_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_FFLOOR_MVT_f64_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_ISD_FFLOOR_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FNEARBYINT.

unsigned FastEmit_ISD_FNEARBYINT_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  return FastEmitInst_r(PPC::FRINS, &PPC::F4RCRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FNEARBYINT_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_r(PPC::FRIND, &PPC::F8RCRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FNEARBYINT_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((PPCSubTarget.hasAltivec())) {
    return FastEmitInst_r(PPC::VRFIN, &PPC::VRRCRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FNEARBYINT_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FNEARBYINT_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_FNEARBYINT_MVT_f64_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_ISD_FNEARBYINT_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FNEG.

unsigned FastEmit_ISD_FNEG_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  return FastEmitInst_r(PPC::FNEGS, &PPC::F4RCRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FNEG_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_r(PPC::FNEGD, &PPC::F8RCRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FNEG_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FNEG_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_FNEG_MVT_f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FP_ROUND.

unsigned FastEmit_ISD_FP_ROUND_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  return FastEmitInst_r(PPC::FRSP, &PPC::F4RCRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FP_ROUND_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f64: return FastEmit_ISD_FP_ROUND_MVT_f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FP_TO_SINT.

unsigned FastEmit_ISD_FP_TO_SINT_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((PPCSubTarget.hasAltivec())) {
    return FastEmitInst_r(PPC::VCTSXS_0, &PPC::VRRCRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FP_TO_SINT_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v4f32: return FastEmit_ISD_FP_TO_SINT_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FP_TO_UINT.

unsigned FastEmit_ISD_FP_TO_UINT_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((PPCSubTarget.hasAltivec())) {
    return FastEmitInst_r(PPC::VCTUXS_0, &PPC::VRRCRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FP_TO_UINT_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v4f32: return FastEmit_ISD_FP_TO_UINT_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FRINT.

unsigned FastEmit_ISD_FRINT_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  return FastEmitInst_r(PPC::FRINSrint, &PPC::F4RCRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FRINT_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_r(PPC::FRINDrint, &PPC::F8RCRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FRINT_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FRINT_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_FRINT_MVT_f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FSQRT.

unsigned FastEmit_ISD_FSQRT_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  return FastEmitInst_r(PPC::FSQRTS, &PPC::F4RCRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FSQRT_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_r(PPC::FSQRT, &PPC::F8RCRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FSQRT_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FSQRT_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_FSQRT_MVT_f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FTRUNC.

unsigned FastEmit_ISD_FTRUNC_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  return FastEmitInst_r(PPC::FRIZS, &PPC::F4RCRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FTRUNC_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_r(PPC::FRIZD, &PPC::F8RCRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_FTRUNC_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((PPCSubTarget.hasAltivec())) {
    return FastEmitInst_r(PPC::VRFIZ, &PPC::VRRCRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FTRUNC_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FTRUNC_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_FTRUNC_MVT_f64_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_ISD_FTRUNC_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SIGN_EXTEND.

unsigned FastEmit_ISD_SIGN_EXTEND_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_r(PPC::EXTSW_32_64, &PPC::G8RCRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_SIGN_EXTEND_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SIGN_EXTEND_MVT_i32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SINT_TO_FP.

unsigned FastEmit_ISD_SINT_TO_FP_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((PPCSubTarget.hasAltivec())) {
    return FastEmitInst_r(PPC::VCFSX_0, &PPC::VRRCRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SINT_TO_FP_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v4i32: return FastEmit_ISD_SINT_TO_FP_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::UINT_TO_FP.

unsigned FastEmit_ISD_UINT_TO_FP_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((PPCSubTarget.hasAltivec())) {
    return FastEmitInst_r(PPC::VCFUX_0, &PPC::VRRCRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_UINT_TO_FP_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v4i32: return FastEmit_ISD_UINT_TO_FP_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for PPCISD::FCFID.

unsigned FastEmit_PPCISD_FCFID_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_r(PPC::FCFID, &PPC::F8RCRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_PPCISD_FCFID_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f64: return FastEmit_PPCISD_FCFID_MVT_f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for PPCISD::FCFIDS.

unsigned FastEmit_PPCISD_FCFIDS_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  return FastEmitInst_r(PPC::FCFIDS, &PPC::F4RCRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_PPCISD_FCFIDS_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f64: return FastEmit_PPCISD_FCFIDS_MVT_f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for PPCISD::FCFIDU.

unsigned FastEmit_PPCISD_FCFIDU_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_r(PPC::FCFIDU, &PPC::F8RCRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_PPCISD_FCFIDU_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f64: return FastEmit_PPCISD_FCFIDU_MVT_f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for PPCISD::FCFIDUS.

unsigned FastEmit_PPCISD_FCFIDUS_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  return FastEmitInst_r(PPC::FCFIDUS, &PPC::F4RCRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_PPCISD_FCFIDUS_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f64: return FastEmit_PPCISD_FCFIDUS_MVT_f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for PPCISD::FCTIDUZ.

unsigned FastEmit_PPCISD_FCTIDUZ_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_r(PPC::FCTIDUZ, &PPC::F8RCRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_PPCISD_FCTIDUZ_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f64: return FastEmit_PPCISD_FCTIDUZ_MVT_f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for PPCISD::FCTIDZ.

unsigned FastEmit_PPCISD_FCTIDZ_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_r(PPC::FCTIDZ, &PPC::F8RCRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_PPCISD_FCTIDZ_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f64: return FastEmit_PPCISD_FCTIDZ_MVT_f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for PPCISD::FCTIWUZ.

unsigned FastEmit_PPCISD_FCTIWUZ_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_r(PPC::FCTIWUZ, &PPC::F8RCRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_PPCISD_FCTIWUZ_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f64: return FastEmit_PPCISD_FCTIWUZ_MVT_f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for PPCISD::FCTIWZ.

unsigned FastEmit_PPCISD_FCTIWZ_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_r(PPC::FCTIWZ, &PPC::F8RCRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_PPCISD_FCTIWZ_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f64: return FastEmit_PPCISD_FCTIWZ_MVT_f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for PPCISD::FRE.

unsigned FastEmit_PPCISD_FRE_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  return FastEmitInst_r(PPC::FRES, &PPC::F4RCRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_PPCISD_FRE_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_r(PPC::FRE, &PPC::F8RCRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_PPCISD_FRE_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((PPCSubTarget.hasAltivec())) {
    return FastEmitInst_r(PPC::VREFP, &PPC::VRRCRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_PPCISD_FRE_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_PPCISD_FRE_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_PPCISD_FRE_MVT_f64_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_PPCISD_FRE_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for PPCISD::FRSQRTE.

unsigned FastEmit_PPCISD_FRSQRTE_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  return FastEmitInst_r(PPC::FRSQRTES, &PPC::F4RCRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_PPCISD_FRSQRTE_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_r(PPC::FRSQRTE, &PPC::F8RCRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_PPCISD_FRSQRTE_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((PPCSubTarget.hasAltivec())) {
    return FastEmitInst_r(PPC::VRSQRTEFP, &PPC::VRRCRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_PPCISD_FRSQRTE_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_PPCISD_FRSQRTE_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_PPCISD_FRSQRTE_MVT_f64_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_PPCISD_FRSQRTE_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for PPCISD::LOAD_TOC.

unsigned FastEmit_PPCISD_LOAD_TOC_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  return FastEmitInst_r(PPC::LDinto_toc, &PPC::G8RCRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_PPCISD_LOAD_TOC_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i64: return FastEmit_PPCISD_LOAD_TOC_MVT_i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for PPCISD::MTCTR.

unsigned FastEmit_PPCISD_MTCTR_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  return FastEmitInst_r(PPC::MTCTR, &PPC::GPRCRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_PPCISD_MTCTR_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  return FastEmitInst_r(PPC::MTCTR8, &PPC::G8RCRegClass, Op0, Op0IsKill);
}

unsigned FastEmit_PPCISD_MTCTR_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_PPCISD_MTCTR_MVT_i32_r(RetVT, Op0, Op0IsKill);
  case MVT::i64: return FastEmit_PPCISD_MTCTR_MVT_i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_r(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill) {
  switch (Opcode) {
  case ISD::CTLZ: return FastEmit_ISD_CTLZ_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::CTPOP: return FastEmit_ISD_CTPOP_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FABS: return FastEmit_ISD_FABS_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FCEIL: return FastEmit_ISD_FCEIL_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FFLOOR: return FastEmit_ISD_FFLOOR_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FNEARBYINT: return FastEmit_ISD_FNEARBYINT_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FNEG: return FastEmit_ISD_FNEG_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FP_ROUND: return FastEmit_ISD_FP_ROUND_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FP_TO_SINT: return FastEmit_ISD_FP_TO_SINT_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FP_TO_UINT: return FastEmit_ISD_FP_TO_UINT_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FRINT: return FastEmit_ISD_FRINT_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FSQRT: return FastEmit_ISD_FSQRT_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FTRUNC: return FastEmit_ISD_FTRUNC_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::SIGN_EXTEND: return FastEmit_ISD_SIGN_EXTEND_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::SINT_TO_FP: return FastEmit_ISD_SINT_TO_FP_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::UINT_TO_FP: return FastEmit_ISD_UINT_TO_FP_r(VT, RetVT, Op0, Op0IsKill);
  case PPCISD::FCFID: return FastEmit_PPCISD_FCFID_r(VT, RetVT, Op0, Op0IsKill);
  case PPCISD::FCFIDS: return FastEmit_PPCISD_FCFIDS_r(VT, RetVT, Op0, Op0IsKill);
  case PPCISD::FCFIDU: return FastEmit_PPCISD_FCFIDU_r(VT, RetVT, Op0, Op0IsKill);
  case PPCISD::FCFIDUS: return FastEmit_PPCISD_FCFIDUS_r(VT, RetVT, Op0, Op0IsKill);
  case PPCISD::FCTIDUZ: return FastEmit_PPCISD_FCTIDUZ_r(VT, RetVT, Op0, Op0IsKill);
  case PPCISD::FCTIDZ: return FastEmit_PPCISD_FCTIDZ_r(VT, RetVT, Op0, Op0IsKill);
  case PPCISD::FCTIWUZ: return FastEmit_PPCISD_FCTIWUZ_r(VT, RetVT, Op0, Op0IsKill);
  case PPCISD::FCTIWZ: return FastEmit_PPCISD_FCTIWZ_r(VT, RetVT, Op0, Op0IsKill);
  case PPCISD::FRE: return FastEmit_PPCISD_FRE_r(VT, RetVT, Op0, Op0IsKill);
  case PPCISD::FRSQRTE: return FastEmit_PPCISD_FRSQRTE_r(VT, RetVT, Op0, Op0IsKill);
  case PPCISD::LOAD_TOC: return FastEmit_PPCISD_LOAD_TOC_r(VT, RetVT, Op0, Op0IsKill);
  case PPCISD::MTCTR: return FastEmit_PPCISD_MTCTR_r(VT, RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::ADD.

unsigned FastEmit_ISD_ADD_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(PPC::ADD4, &PPC::GPRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_ADD_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_rr(PPC::ADD8, &PPC::G8RCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_ADD_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((PPCSubTarget.hasAltivec())) {
    return FastEmitInst_rr(PPC::VADDUBM, &PPC::VRRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ADD_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((PPCSubTarget.hasAltivec())) {
    return FastEmitInst_rr(PPC::VADDUHM, &PPC::VRRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ADD_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((PPCSubTarget.hasAltivec())) {
    return FastEmitInst_rr(PPC::VADDUWM, &PPC::VRRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ADD_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_ADD_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_ADD_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ISD_ADD_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ISD_ADD_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_ADD_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::ADDC.

unsigned FastEmit_ISD_ADDC_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(PPC::ADDC, &PPC::GPRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_ADDC_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_rr(PPC::ADDC8, &PPC::G8RCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_ADDC_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_ADDC_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_ADDC_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::ADDE.

unsigned FastEmit_ISD_ADDE_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(PPC::ADDE, &PPC::GPRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_ADDE_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_rr(PPC::ADDE8, &PPC::G8RCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_ADDE_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_ADDE_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_ADDE_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::AND.

unsigned FastEmit_ISD_AND_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(PPC::AND, &PPC::GPRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_AND_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_rr(PPC::AND8, &PPC::G8RCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_AND_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((PPCSubTarget.hasAltivec())) {
    return FastEmitInst_rr(PPC::VAND, &PPC::VRRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_AND_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_AND_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_AND_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_AND_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FADD.

unsigned FastEmit_ISD_FADD_MVT_f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  return FastEmitInst_rr(PPC::FADDS, &PPC::F4RCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_FADD_MVT_f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_rr(PPC::FADD, &PPC::F8RCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_FADD_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((PPCSubTarget.hasAltivec())) {
    return FastEmitInst_rr(PPC::VADDFP, &PPC::VRRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FADD_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FADD_MVT_f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f64: return FastEmit_ISD_FADD_MVT_f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f32: return FastEmit_ISD_FADD_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FDIV.

unsigned FastEmit_ISD_FDIV_MVT_f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  return FastEmitInst_rr(PPC::FDIVS, &PPC::F4RCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_FDIV_MVT_f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_rr(PPC::FDIV, &PPC::F8RCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
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
  return FastEmitInst_rr(PPC::FMULS, &PPC::F4RCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_FMUL_MVT_f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_rr(PPC::FMUL, &PPC::F8RCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_FMUL_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FMUL_MVT_f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f64: return FastEmit_ISD_FMUL_MVT_f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FSUB.

unsigned FastEmit_ISD_FSUB_MVT_f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  return FastEmitInst_rr(PPC::FSUBS, &PPC::F4RCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_FSUB_MVT_f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_rr(PPC::FSUB, &PPC::F8RCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_FSUB_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((PPCSubTarget.hasAltivec())) {
    return FastEmitInst_rr(PPC::VSUBFP, &PPC::VRRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FSUB_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FSUB_MVT_f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f64: return FastEmit_ISD_FSUB_MVT_f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f32: return FastEmit_ISD_FSUB_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::MUL.

unsigned FastEmit_ISD_MUL_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(PPC::MULLW, &PPC::GPRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_MUL_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_rr(PPC::MULLD, &PPC::G8RCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_MUL_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_MUL_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_MUL_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::MULHS.

unsigned FastEmit_ISD_MULHS_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(PPC::MULHW, &PPC::GPRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_MULHS_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_rr(PPC::MULHD, &PPC::G8RCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_MULHS_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_MULHS_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_MULHS_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::MULHU.

unsigned FastEmit_ISD_MULHU_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(PPC::MULHWU, &PPC::GPRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_MULHU_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_rr(PPC::MULHDU, &PPC::G8RCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_MULHU_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_MULHU_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_MULHU_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::OR.

unsigned FastEmit_ISD_OR_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(PPC::OR, &PPC::GPRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_OR_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_rr(PPC::OR8, &PPC::G8RCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_OR_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((PPCSubTarget.hasAltivec())) {
    return FastEmitInst_rr(PPC::VOR, &PPC::VRRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_OR_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_OR_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_OR_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_OR_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SDIV.

unsigned FastEmit_ISD_SDIV_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(PPC::DIVW, &PPC::GPRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_SDIV_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_rr(PPC::DIVD, &PPC::G8RCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_SDIV_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SDIV_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_SDIV_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SHL.

unsigned FastEmit_ISD_SHL_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(PPC::SLW, &PPC::GPRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_SHL_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((PPCSubTarget.hasAltivec())) {
    return FastEmitInst_rr(PPC::VSLB, &PPC::VRRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SHL_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((PPCSubTarget.hasAltivec())) {
    return FastEmitInst_rr(PPC::VSLH, &PPC::VRRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SHL_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((PPCSubTarget.hasAltivec())) {
    return FastEmitInst_rr(PPC::VSLW, &PPC::VRRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SHL_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SHL_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ISD_SHL_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ISD_SHL_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_SHL_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SRA.

unsigned FastEmit_ISD_SRA_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(PPC::SRAW, &PPC::GPRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_SRA_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((PPCSubTarget.hasAltivec())) {
    return FastEmitInst_rr(PPC::VSRAB, &PPC::VRRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SRA_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((PPCSubTarget.hasAltivec())) {
    return FastEmitInst_rr(PPC::VSRAH, &PPC::VRRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SRA_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((PPCSubTarget.hasAltivec())) {
    return FastEmitInst_rr(PPC::VSRAW, &PPC::VRRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SRA_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SRA_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ISD_SRA_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ISD_SRA_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_SRA_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SRL.

unsigned FastEmit_ISD_SRL_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(PPC::SRW, &PPC::GPRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_SRL_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((PPCSubTarget.hasAltivec())) {
    return FastEmitInst_rr(PPC::VSRB, &PPC::VRRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SRL_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((PPCSubTarget.hasAltivec())) {
    return FastEmitInst_rr(PPC::VSRH, &PPC::VRRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SRL_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((PPCSubTarget.hasAltivec())) {
    return FastEmitInst_rr(PPC::VSRW, &PPC::VRRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SRL_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SRL_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ISD_SRL_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ISD_SRL_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_SRL_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SUB.

unsigned FastEmit_ISD_SUB_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((PPCSubTarget.hasAltivec())) {
    return FastEmitInst_rr(PPC::VSUBUBM, &PPC::VRRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SUB_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((PPCSubTarget.hasAltivec())) {
    return FastEmitInst_rr(PPC::VSUBUHM, &PPC::VRRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SUB_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((PPCSubTarget.hasAltivec())) {
    return FastEmitInst_rr(PPC::VSUBUWM, &PPC::VRRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SUB_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v16i8: return FastEmit_ISD_SUB_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ISD_SUB_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_SUB_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::UDIV.

unsigned FastEmit_ISD_UDIV_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(PPC::DIVWU, &PPC::GPRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_UDIV_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_rr(PPC::DIVDU, &PPC::G8RCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_UDIV_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_UDIV_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_UDIV_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::XOR.

unsigned FastEmit_ISD_XOR_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(PPC::XOR, &PPC::GPRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_XOR_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_rr(PPC::XOR8, &PPC::G8RCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_ISD_XOR_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((PPCSubTarget.hasAltivec())) {
    return FastEmitInst_rr(PPC::VXOR, &PPC::VRRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_XOR_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_XOR_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_XOR_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_XOR_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for PPCISD::FADDRTZ.

unsigned FastEmit_PPCISD_FADDRTZ_MVT_f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_rr(PPC::FADDrtz, &PPC::F8RCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_PPCISD_FADDRTZ_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f64: return FastEmit_PPCISD_FADDRTZ_MVT_f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for PPCISD::SHL.

unsigned FastEmit_PPCISD_SHL_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(PPC::SLW, &PPC::GPRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_PPCISD_SHL_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_PPCISD_SHL_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for PPCISD::SRA.

unsigned FastEmit_PPCISD_SRA_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(PPC::SRAW, &PPC::GPRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_PPCISD_SRA_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_PPCISD_SRA_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for PPCISD::SRL.

unsigned FastEmit_PPCISD_SRL_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_rr(PPC::SRW, &PPC::GPRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_PPCISD_SRL_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_PPCISD_SRL_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_rr(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (Opcode) {
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
  case ISD::MULHU: return FastEmit_ISD_MULHU_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::OR: return FastEmit_ISD_OR_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::SDIV: return FastEmit_ISD_SDIV_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::SHL: return FastEmit_ISD_SHL_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::SRA: return FastEmit_ISD_SRA_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::SRL: return FastEmit_ISD_SRL_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::SUB: return FastEmit_ISD_SUB_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::UDIV: return FastEmit_ISD_UDIV_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::XOR: return FastEmit_ISD_XOR_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case PPCISD::FADDRTZ: return FastEmit_PPCISD_FADDRTZ_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case PPCISD::SHL: return FastEmit_PPCISD_SHL_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case PPCISD::SRA: return FastEmit_PPCISD_SRA_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case PPCISD::SRL: return FastEmit_PPCISD_SRL_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FMA.

unsigned FastEmit_ISD_FMA_MVT_f32_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  return FastEmitInst_rrr(PPC::FMADDS, &PPC::F4RCRegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
}

unsigned FastEmit_ISD_FMA_MVT_f64_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_rrr(PPC::FMADD, &PPC::F8RCRegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
}

unsigned FastEmit_ISD_FMA_MVT_v4f32_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((PPCSubTarget.hasAltivec())) {
    return FastEmitInst_rrr(PPC::VMADDFP, &PPC::VRRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FMA_rrr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FMA_MVT_f32_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::f64: return FastEmit_ISD_FMA_MVT_f64_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::v4f32: return FastEmit_ISD_FMA_MVT_v4f32_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  default: return 0;
  }
}

// FastEmit functions for PPCISD::FSEL.

unsigned FastEmit_PPCISD_FSEL_MVT_f64_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  return FastEmitInst_rrr(PPC::FSELD, &PPC::F8RCRegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
}

unsigned FastEmit_PPCISD_FSEL_rrr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f64: return FastEmit_PPCISD_FSEL_MVT_f64_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  default: return 0;
  }
}

// FastEmit functions for PPCISD::VMADDFP.

unsigned FastEmit_PPCISD_VMADDFP_MVT_v4f32_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((PPCSubTarget.hasAltivec())) {
    return FastEmitInst_rrr(PPC::VMADDFP, &PPC::VRRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_PPCISD_VMADDFP_rrr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v4f32: return FastEmit_PPCISD_VMADDFP_MVT_v4f32_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  default: return 0;
  }
}

// FastEmit functions for PPCISD::VNMSUBFP.

unsigned FastEmit_PPCISD_VNMSUBFP_MVT_v4f32_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((PPCSubTarget.hasAltivec())) {
    return FastEmitInst_rrr(PPC::VNMSUBFP, &PPC::VRRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_PPCISD_VNMSUBFP_rrr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v4f32: return FastEmit_PPCISD_VNMSUBFP_MVT_v4f32_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  default: return 0;
  }
}

// FastEmit functions for PPCISD::VPERM.

unsigned FastEmit_PPCISD_VPERM_MVT_v16i8_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((PPCSubTarget.hasAltivec())) {
    return FastEmitInst_rrr(PPC::VPERM, &PPC::VRRCRegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_PPCISD_VPERM_rrr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v16i8: return FastEmit_PPCISD_VPERM_MVT_v16i8_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_rrr(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  switch (Opcode) {
  case ISD::FMA: return FastEmit_ISD_FMA_rrr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case PPCISD::FSEL: return FastEmit_PPCISD_FSEL_rrr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case PPCISD::VMADDFP: return FastEmit_PPCISD_VMADDFP_rrr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case PPCISD::VNMSUBFP: return FastEmit_PPCISD_VNMSUBFP_rrr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case PPCISD::VPERM: return FastEmit_PPCISD_VPERM_rrr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SRA.

unsigned FastEmit_ISD_SRA_MVT_i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_ri(PPC::SRAWI, &PPC::GPRCRegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_SRA_MVT_i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_ri(PPC::SRADI, &PPC::G8RCRegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_SRA_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SRA_MVT_i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::i64: return FastEmit_ISD_SRA_MVT_i64_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for PPCISD::TC_RETURN.

unsigned FastEmit_PPCISD_TC_RETURN_MVT_i32_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  return FastEmitInst_ri(PPC::TCRETURNri, &PPC::CTRRCRegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_PPCISD_TC_RETURN_MVT_i64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  return FastEmitInst_ri(PPC::TCRETURNri8, &PPC::CTRRC8RegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_PPCISD_TC_RETURN_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_PPCISD_TC_RETURN_MVT_i32_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::i64: return FastEmit_PPCISD_TC_RETURN_MVT_i64_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_ri(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (VT == MVT::i32 && Predicate_imm32SExt16(imm1))
    if (unsigned Reg = FastEmit_ri_Predicate_imm32SExt16(VT, RetVT, Opcode, Op0, Op0IsKill, imm1))
      return Reg;

  if (VT == MVT::i64 && Predicate_imm64SExt16(imm1))
    if (unsigned Reg = FastEmit_ri_Predicate_imm64SExt16(VT, RetVT, Opcode, Op0, Op0IsKill, imm1))
      return Reg;

  switch (Opcode) {
  case ISD::SRA: return FastEmit_ISD_SRA_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case PPCISD::TC_RETURN: return FastEmit_PPCISD_TC_RETURN_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::ADD.

unsigned FastEmit_ISD_ADD_MVT_i32_ri_Predicate_imm32SExt16(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_ri(PPC::ADDI, &PPC::GPRCRegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_ADD_ri_Predicate_imm32SExt16(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_ADD_MVT_i32_ri_Predicate_imm32SExt16(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::ADDC.

unsigned FastEmit_ISD_ADDC_MVT_i32_ri_Predicate_imm32SExt16(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_ri(PPC::ADDIC, &PPC::GPRCRegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_ADDC_ri_Predicate_imm32SExt16(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_ADDC_MVT_i32_ri_Predicate_imm32SExt16(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::MUL.

unsigned FastEmit_ISD_MUL_MVT_i32_ri_Predicate_imm32SExt16(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_ri(PPC::MULLI, &PPC::GPRCRegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_MUL_ri_Predicate_imm32SExt16(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_MUL_MVT_i32_ri_Predicate_imm32SExt16(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_ri_Predicate_imm32SExt16(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (Opcode) {
  case ISD::ADD: return FastEmit_ISD_ADD_ri_Predicate_imm32SExt16(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::ADDC: return FastEmit_ISD_ADDC_ri_Predicate_imm32SExt16(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::MUL: return FastEmit_ISD_MUL_ri_Predicate_imm32SExt16(VT, RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::ADD.

unsigned FastEmit_ISD_ADD_MVT_i64_ri_Predicate_imm64SExt16(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_ri(PPC::ADDI8, &PPC::G8RCRegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_ADD_ri_Predicate_imm64SExt16(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i64: return FastEmit_ISD_ADD_MVT_i64_ri_Predicate_imm64SExt16(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::ADDC.

unsigned FastEmit_ISD_ADDC_MVT_i64_ri_Predicate_imm64SExt16(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_ri(PPC::ADDIC8, &PPC::G8RCRegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_ADDC_ri_Predicate_imm64SExt16(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i64: return FastEmit_ISD_ADDC_MVT_i64_ri_Predicate_imm64SExt16(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::MUL.

unsigned FastEmit_ISD_MUL_MVT_i64_ri_Predicate_imm64SExt16(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  return FastEmitInst_ri(PPC::MULLI8, &PPC::G8RCRegClass, Op0, Op0IsKill, imm1);
}

unsigned FastEmit_ISD_MUL_ri_Predicate_imm64SExt16(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i64: return FastEmit_ISD_MUL_MVT_i64_ri_Predicate_imm64SExt16(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_ri_Predicate_imm64SExt16(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (Opcode) {
  case ISD::ADD: return FastEmit_ISD_ADD_ri_Predicate_imm64SExt16(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::ADDC: return FastEmit_ISD_ADDC_ri_Predicate_imm64SExt16(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::MUL: return FastEmit_ISD_MUL_ri_Predicate_imm64SExt16(VT, RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

