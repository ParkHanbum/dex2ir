/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Calling Convention Implementation Fragment                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

static bool CC_A64_APCS(unsigned ValNo, MVT ValVT,
                        MVT LocVT, CCValAssign::LocInfo LocInfo,
                        ISD::ArgFlagsTy ArgFlags, CCState &State);


static bool CC_A64_APCS(unsigned ValNo, MVT ValVT,
                        MVT LocVT, CCValAssign::LocInfo LocInfo,
                        ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (ArgFlags.isSRet()) {
    if (unsigned Reg = State.AllocateReg(AArch64::X8)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (ArgFlags.isByVal()) {
    State.HandleByVal(ValNo, ValVT, LocVT, LocInfo, 8, 8, ArgFlags);
    return false;
  }

  if (LocVT == MVT::v2i8) {
    LocVT = MVT::f16;
    LocInfo = CCValAssign::BCvt;
  }

  if (LocVT == MVT::v4i8 ||
      LocVT == MVT::v2i16) {
    LocVT = MVT::f32;
    LocInfo = CCValAssign::BCvt;
  }

  if (LocVT == MVT::v8i8 ||
      LocVT == MVT::v4i16 ||
      LocVT == MVT::v2i32 ||
      LocVT == MVT::v2f32 ||
      LocVT == MVT::v1i64) {
    LocVT = MVT::f64;
    LocInfo = CCValAssign::BCvt;
  }

  if (LocVT == MVT::v16i8 ||
      LocVT == MVT::v8i16 ||
      LocVT == MVT::v4i32 ||
      LocVT == MVT::v2i64 ||
      LocVT == MVT::v4f32 ||
      LocVT == MVT::v2f64) {
    LocVT = MVT::f128;
    LocInfo = CCValAssign::BCvt;
  }

  if (LocVT == MVT::f16) {
    static const uint16_t RegList1[] = {
      AArch64::B0, AArch64::B1, AArch64::B2, AArch64::B3, AArch64::B4, AArch64::B5, AArch64::B6, AArch64::B7
    };
    if (unsigned Reg = State.AllocateReg(RegList1, 8)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::f32) {
    static const uint16_t RegList2[] = {
      AArch64::S0, AArch64::S1, AArch64::S2, AArch64::S3, AArch64::S4, AArch64::S5, AArch64::S6, AArch64::S7
    };
    if (unsigned Reg = State.AllocateReg(RegList2, 8)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::f64) {
    static const uint16_t RegList3[] = {
      AArch64::D0, AArch64::D1, AArch64::D2, AArch64::D3, AArch64::D4, AArch64::D5, AArch64::D6, AArch64::D7
    };
    if (unsigned Reg = State.AllocateReg(RegList3, 8)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::f128) {
    static const uint16_t RegList4[] = {
      AArch64::Q0, AArch64::Q1, AArch64::Q2, AArch64::Q3, AArch64::Q4, AArch64::Q5, AArch64::Q6, AArch64::Q7
    };
    if (unsigned Reg = State.AllocateReg(RegList4, 8)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::f16 ||
      LocVT == MVT::f32) {
    LocVT = MVT::f64;
    if (ArgFlags.isSExt())
        LocInfo = CCValAssign::SExt;
    else if (ArgFlags.isZExt())
        LocInfo = CCValAssign::ZExt;
    else
        LocInfo = CCValAssign::AExt;
  }

  if (LocVT == MVT::f64) {
    unsigned Offset5 = State.AllocateStack(8, 8);
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset5, LocVT, LocInfo));
    return false;
  }

  if (LocVT == MVT::f128) {
    unsigned Offset6 = State.AllocateStack(16, 16);
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset6, LocVT, LocInfo));
    return false;
  }

  if (LocVT == MVT::i64) {
    if (ArgFlags.isSplit()) {
      static const uint16_t RegList7[] = {
        AArch64::X0, AArch64::X2, AArch64::X4, AArch64::X6
      };
      static const uint16_t RegList8[] = {
        AArch64::X0, AArch64::X1, AArch64::X3, AArch64::X5
      };
      if (unsigned Reg = State.AllocateReg(RegList7, RegList8, 4)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  if (LocVT == MVT::i8 ||
      LocVT == MVT::i16 ||
      LocVT == MVT::i32) {
    LocVT = MVT::i64;
    if (ArgFlags.isSExt())
        LocInfo = CCValAssign::SExt;
    else if (ArgFlags.isZExt())
        LocInfo = CCValAssign::ZExt;
    else
        LocInfo = CCValAssign::AExt;
  }

  if (LocVT == MVT::i64) {
    static const uint16_t RegList9[] = {
      AArch64::X0, AArch64::X1, AArch64::X2, AArch64::X3, AArch64::X4, AArch64::X5, AArch64::X6, AArch64::X7
    };
    if (unsigned Reg = State.AllocateReg(RegList9, 8)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (CC_AArch64NoMoreRegs(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
    return false;

  if (LocVT == MVT::i64) {
    if (ArgFlags.isSplit()) {
      unsigned Offset10 = State.AllocateStack(8, 16);
      State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset10, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::i64) {
    unsigned Offset11 = State.AllocateStack(8, 8);
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset11, LocVT, LocInfo));
    return false;
  }

  return true;  // CC didn't match.
}
