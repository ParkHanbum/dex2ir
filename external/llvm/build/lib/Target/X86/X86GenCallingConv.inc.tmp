/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Calling Convention Implementation Fragment                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

static bool CC_Intel_OCL_BI(unsigned ValNo, MVT ValVT,
                            MVT LocVT, CCValAssign::LocInfo LocInfo,
                            ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool CC_X86(unsigned ValNo, MVT ValVT,
                   MVT LocVT, CCValAssign::LocInfo LocInfo,
                   ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool CC_X86_32(unsigned ValNo, MVT ValVT,
                      MVT LocVT, CCValAssign::LocInfo LocInfo,
                      ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool CC_X86_32_C(unsigned ValNo, MVT ValVT,
                        MVT LocVT, CCValAssign::LocInfo LocInfo,
                        ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool CC_X86_32_Common(unsigned ValNo, MVT ValVT,
                             MVT LocVT, CCValAssign::LocInfo LocInfo,
                             ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool CC_X86_32_FastCC(unsigned ValNo, MVT ValVT,
                             MVT LocVT, CCValAssign::LocInfo LocInfo,
                             ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool CC_X86_32_FastCall(unsigned ValNo, MVT ValVT,
                               MVT LocVT, CCValAssign::LocInfo LocInfo,
                               ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool CC_X86_32_GHC(unsigned ValNo, MVT ValVT,
                          MVT LocVT, CCValAssign::LocInfo LocInfo,
                          ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool CC_X86_32_HiPE(unsigned ValNo, MVT ValVT,
                           MVT LocVT, CCValAssign::LocInfo LocInfo,
                           ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool CC_X86_32_ThisCall(unsigned ValNo, MVT ValVT,
                               MVT LocVT, CCValAssign::LocInfo LocInfo,
                               ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool CC_X86_64(unsigned ValNo, MVT ValVT,
                      MVT LocVT, CCValAssign::LocInfo LocInfo,
                      ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool CC_X86_64_C(unsigned ValNo, MVT ValVT,
                        MVT LocVT, CCValAssign::LocInfo LocInfo,
                        ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool CC_X86_64_GHC(unsigned ValNo, MVT ValVT,
                          MVT LocVT, CCValAssign::LocInfo LocInfo,
                          ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool CC_X86_64_HiPE(unsigned ValNo, MVT ValVT,
                           MVT LocVT, CCValAssign::LocInfo LocInfo,
                           ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool CC_X86_Win64_C(unsigned ValNo, MVT ValVT,
                           MVT LocVT, CCValAssign::LocInfo LocInfo,
                           ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool RetCC_Intel_OCL_BI(unsigned ValNo, MVT ValVT,
                               MVT LocVT, CCValAssign::LocInfo LocInfo,
                               ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool RetCC_X86(unsigned ValNo, MVT ValVT,
                      MVT LocVT, CCValAssign::LocInfo LocInfo,
                      ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool RetCC_X86Common(unsigned ValNo, MVT ValVT,
                            MVT LocVT, CCValAssign::LocInfo LocInfo,
                            ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool RetCC_X86_32(unsigned ValNo, MVT ValVT,
                         MVT LocVT, CCValAssign::LocInfo LocInfo,
                         ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool RetCC_X86_32_C(unsigned ValNo, MVT ValVT,
                           MVT LocVT, CCValAssign::LocInfo LocInfo,
                           ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool RetCC_X86_32_Fast(unsigned ValNo, MVT ValVT,
                              MVT LocVT, CCValAssign::LocInfo LocInfo,
                              ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool RetCC_X86_32_HiPE(unsigned ValNo, MVT ValVT,
                              MVT LocVT, CCValAssign::LocInfo LocInfo,
                              ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool RetCC_X86_64(unsigned ValNo, MVT ValVT,
                         MVT LocVT, CCValAssign::LocInfo LocInfo,
                         ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool RetCC_X86_64_C(unsigned ValNo, MVT ValVT,
                           MVT LocVT, CCValAssign::LocInfo LocInfo,
                           ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool RetCC_X86_64_HiPE(unsigned ValNo, MVT ValVT,
                              MVT LocVT, CCValAssign::LocInfo LocInfo,
                              ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool RetCC_X86_Win64_C(unsigned ValNo, MVT ValVT,
                              MVT LocVT, CCValAssign::LocInfo LocInfo,
                              ISD::ArgFlagsTy ArgFlags, CCState &State);


static bool CC_Intel_OCL_BI(unsigned ValNo, MVT ValVT,
                            MVT LocVT, CCValAssign::LocInfo LocInfo,
                            ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::i32) {
    if (State.getTarget().getSubtarget<X86Subtarget>().isTargetWin64()) {
      static const uint16_t RegList1[] = {
        X86::ECX, X86::EDX, X86::R8D, X86::R9D
      };
      if (unsigned Reg = State.AllocateReg(RegList1, 4)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  if (LocVT == MVT::i64) {
    if (State.getTarget().getSubtarget<X86Subtarget>().isTargetWin64()) {
      static const uint16_t RegList2[] = {
        X86::RCX, X86::RDX, X86::R8, X86::R9
      };
      if (unsigned Reg = State.AllocateReg(RegList2, 4)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  if (LocVT == MVT::i32) {
    if (State.getTarget().getSubtarget<X86Subtarget>().is64Bit()) {
      static const uint16_t RegList3[] = {
        X86::EDI, X86::ESI, X86::EDX, X86::ECX
      };
      if (unsigned Reg = State.AllocateReg(RegList3, 4)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  if (LocVT == MVT::i64) {
    if (State.getTarget().getSubtarget<X86Subtarget>().is64Bit()) {
      static const uint16_t RegList4[] = {
        X86::RDI, X86::RSI, X86::RDX, X86::RCX
      };
      if (unsigned Reg = State.AllocateReg(RegList4, 4)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  if (LocVT == MVT::i32) {
    unsigned Offset5 = State.AllocateStack(4, 4);
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset5, LocVT, LocInfo));
    return false;
  }

  if (LocVT == MVT::f32 ||
      LocVT == MVT::f64 ||
      LocVT == MVT::v4i32 ||
      LocVT == MVT::v2i64 ||
      LocVT == MVT::v4f32 ||
      LocVT == MVT::v2f64) {
    static const uint16_t RegList6[] = {
      X86::XMM0, X86::XMM1, X86::XMM2, X86::XMM3
    };
    if (unsigned Reg = State.AllocateReg(RegList6, 4)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::v8f32 ||
      LocVT == MVT::v4f64 ||
      LocVT == MVT::v8i32 ||
      LocVT == MVT::v4i64) {
    static const uint16_t RegList7[] = {
      X86::YMM0, X86::YMM1, X86::YMM2, X86::YMM3
    };
    if (unsigned Reg = State.AllocateReg(RegList7, 4)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::v16f32 ||
      LocVT == MVT::v8f64 ||
      LocVT == MVT::v16i32 ||
      LocVT == MVT::v8i64) {
    static const uint16_t RegList8[] = {
      X86::ZMM0, X86::ZMM1, X86::ZMM2, X86::ZMM3
    };
    if (unsigned Reg = State.AllocateReg(RegList8, 4)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (State.getTarget().getSubtarget<X86Subtarget>().isTargetWin64()) {
    if (!CC_X86_Win64_C(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  if (State.getTarget().getSubtarget<X86Subtarget>().is64Bit()) {
    if (!CC_X86_64_C(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  if (!CC_X86_32_C(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
    return false;

  return true;  // CC didn't match.
}


static bool CC_X86(unsigned ValNo, MVT ValVT,
                   MVT LocVT, CCValAssign::LocInfo LocInfo,
                   ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (State.getCallingConv() == CallingConv::Intel_OCL_BI) {
    if (!CC_Intel_OCL_BI(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  if (State.getTarget().getSubtarget<X86Subtarget>().is64Bit()) {
    if (!CC_X86_64(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  if (!CC_X86_32(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
    return false;

  return true;  // CC didn't match.
}


static bool CC_X86_32(unsigned ValNo, MVT ValVT,
                      MVT LocVT, CCValAssign::LocInfo LocInfo,
                      ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (State.getCallingConv() == CallingConv::X86_FastCall) {
    if (!CC_X86_32_FastCall(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  if (State.getCallingConv() == CallingConv::X86_ThisCall) {
    if (!CC_X86_32_ThisCall(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  if (State.getCallingConv() == CallingConv::Fast) {
    if (!CC_X86_32_FastCC(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  if (State.getCallingConv() == CallingConv::GHC) {
    if (!CC_X86_32_GHC(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  if (State.getCallingConv() == CallingConv::HiPE) {
    if (!CC_X86_32_HiPE(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  if (!CC_X86_32_C(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
    return false;

  return true;  // CC didn't match.
}


static bool CC_X86_32_C(unsigned ValNo, MVT ValVT,
                        MVT LocVT, CCValAssign::LocInfo LocInfo,
                        ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::i8 ||
      LocVT == MVT::i16) {
    LocVT = MVT::i32;
    if (ArgFlags.isSExt())
        LocInfo = CCValAssign::SExt;
    else if (ArgFlags.isZExt())
        LocInfo = CCValAssign::ZExt;
    else
        LocInfo = CCValAssign::AExt;
  }

  if (ArgFlags.isNest()) {
    if (unsigned Reg = State.AllocateReg(X86::ECX)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (!State.isVarArg()) {
    if (ArgFlags.isInReg()) {
      if (LocVT == MVT::i32) {
        static const uint16_t RegList1[] = {
          X86::EAX, X86::EDX, X86::ECX
        };
        if (unsigned Reg = State.AllocateReg(RegList1, 3)) {
          State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
          return false;
        }
      }
    }
  }

  if (!CC_X86_32_Common(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
    return false;

  return true;  // CC didn't match.
}


static bool CC_X86_32_Common(unsigned ValNo, MVT ValVT,
                             MVT LocVT, CCValAssign::LocInfo LocInfo,
                             ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (ArgFlags.isByVal()) {
    State.HandleByVal(ValNo, ValVT, LocVT, LocInfo, 4, 4, ArgFlags);
    return false;
  }

  if (!State.isVarArg()) {
    if (ArgFlags.isInReg()) {
      if (LocVT == MVT::f32 ||
          LocVT == MVT::f64) {
        if (State.getTarget().getSubtarget<X86Subtarget>().hasSSE2()) {
          static const uint16_t RegList1[] = {
            X86::XMM0, X86::XMM1, X86::XMM2
          };
          if (unsigned Reg = State.AllocateReg(RegList1, 3)) {
            State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
            return false;
          }
        }
      }
    }
  }

  if (!State.isVarArg()) {
    if (LocVT == MVT::x86mmx) {
      static const uint16_t RegList2[] = {
        X86::MM0, X86::MM1, X86::MM2
      };
      if (unsigned Reg = State.AllocateReg(RegList2, 3)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  if (LocVT == MVT::i32 ||
      LocVT == MVT::f32) {
    unsigned Offset3 = State.AllocateStack(4, 4);
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset3, LocVT, LocInfo));
    return false;
  }

  if (LocVT == MVT::f64) {
    unsigned Offset4 = State.AllocateStack(8, 4);
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset4, LocVT, LocInfo));
    return false;
  }

  if (LocVT == MVT::f80) {
    unsigned Offset5 = State.AllocateStack(
      State.getTarget().getDataLayout()->getTypeAllocSize(EVT(LocVT).getTypeForEVT(State.getContext())), 4);
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset5, LocVT, LocInfo));
    return false;
  }

  if (!State.isVarArg()) {
    if (LocVT == MVT::v16i8 ||
        LocVT == MVT::v8i16 ||
        LocVT == MVT::v4i32 ||
        LocVT == MVT::v2i64 ||
        LocVT == MVT::v4f32 ||
        LocVT == MVT::v2f64) {
      static const uint16_t RegList6[] = {
        X86::XMM0, X86::XMM1, X86::XMM2, X86::XMM3
      };
      if (unsigned Reg = State.AllocateReg(RegList6, 4)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  if (!State.isVarArg()) {
    if (LocVT == MVT::v32i8 ||
        LocVT == MVT::v16i16 ||
        LocVT == MVT::v8i32 ||
        LocVT == MVT::v4i64 ||
        LocVT == MVT::v8f32 ||
        LocVT == MVT::v4f64) {
      if (State.getTarget().getSubtarget<X86Subtarget>().hasFp256()) {
        static const uint16_t RegList7[] = {
          X86::YMM0, X86::YMM1, X86::YMM2, X86::YMM3
        };
        if (unsigned Reg = State.AllocateReg(RegList7, 4)) {
          State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
          return false;
        }
      }
    }
  }

  if (LocVT == MVT::v16i8 ||
      LocVT == MVT::v8i16 ||
      LocVT == MVT::v4i32 ||
      LocVT == MVT::v2i64 ||
      LocVT == MVT::v4f32 ||
      LocVT == MVT::v2f64) {
    unsigned Offset8 = State.AllocateStack(16, 16);
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset8, LocVT, LocInfo));
    return false;
  }

  if (LocVT == MVT::v32i8 ||
      LocVT == MVT::v16i16 ||
      LocVT == MVT::v8i32 ||
      LocVT == MVT::v4i64 ||
      LocVT == MVT::v8f32 ||
      LocVT == MVT::v4f64) {
    unsigned Offset9 = State.AllocateStack(32, 32);
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset9, LocVT, LocInfo));
    return false;
  }

  if (LocVT == MVT::x86mmx) {
    unsigned Offset10 = State.AllocateStack(8, 4);
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset10, LocVT, LocInfo));
    return false;
  }

  return true;  // CC didn't match.
}


static bool CC_X86_32_FastCC(unsigned ValNo, MVT ValVT,
                             MVT LocVT, CCValAssign::LocInfo LocInfo,
                             ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (ArgFlags.isByVal()) {
    State.HandleByVal(ValNo, ValVT, LocVT, LocInfo, 4, 4, ArgFlags);
    return false;
  }

  if (LocVT == MVT::i8 ||
      LocVT == MVT::i16) {
    LocVT = MVT::i32;
    if (ArgFlags.isSExt())
        LocInfo = CCValAssign::SExt;
    else if (ArgFlags.isZExt())
        LocInfo = CCValAssign::ZExt;
    else
        LocInfo = CCValAssign::AExt;
  }

  if (ArgFlags.isNest()) {
    if (unsigned Reg = State.AllocateReg(X86::EAX)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::i32) {
    static const uint16_t RegList1[] = {
      X86::ECX, X86::EDX
    };
    if (unsigned Reg = State.AllocateReg(RegList1, 2)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (!State.isVarArg()) {
    if (LocVT == MVT::f32 ||
        LocVT == MVT::f64) {
      if (State.getTarget().getSubtarget<X86Subtarget>().hasSSE2()) {
        static const uint16_t RegList2[] = {
          X86::XMM0, X86::XMM1, X86::XMM2
        };
        if (unsigned Reg = State.AllocateReg(RegList2, 3)) {
          State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
          return false;
        }
      }
    }
  }

  if (LocVT == MVT::f64) {
    unsigned Offset3 = State.AllocateStack(8, 8);
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset3, LocVT, LocInfo));
    return false;
  }

  if (!CC_X86_32_Common(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
    return false;

  return true;  // CC didn't match.
}


static bool CC_X86_32_FastCall(unsigned ValNo, MVT ValVT,
                               MVT LocVT, CCValAssign::LocInfo LocInfo,
                               ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::i8 ||
      LocVT == MVT::i16) {
    LocVT = MVT::i32;
    if (ArgFlags.isSExt())
        LocInfo = CCValAssign::SExt;
    else if (ArgFlags.isZExt())
        LocInfo = CCValAssign::ZExt;
    else
        LocInfo = CCValAssign::AExt;
  }

  if (ArgFlags.isNest()) {
    if (unsigned Reg = State.AllocateReg(X86::EAX)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (ArgFlags.isInReg()) {
    if (LocVT == MVT::i32) {
      static const uint16_t RegList1[] = {
        X86::ECX, X86::EDX
      };
      if (unsigned Reg = State.AllocateReg(RegList1, 2)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  if (!CC_X86_32_Common(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
    return false;

  return true;  // CC didn't match.
}


static bool CC_X86_32_GHC(unsigned ValNo, MVT ValVT,
                          MVT LocVT, CCValAssign::LocInfo LocInfo,
                          ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::i8 ||
      LocVT == MVT::i16) {
    LocVT = MVT::i32;
    if (ArgFlags.isSExt())
        LocInfo = CCValAssign::SExt;
    else if (ArgFlags.isZExt())
        LocInfo = CCValAssign::ZExt;
    else
        LocInfo = CCValAssign::AExt;
  }

  if (LocVT == MVT::i32) {
    static const uint16_t RegList1[] = {
      X86::EBX, X86::EBP, X86::EDI, X86::ESI
    };
    if (unsigned Reg = State.AllocateReg(RegList1, 4)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  return true;  // CC didn't match.
}


static bool CC_X86_32_HiPE(unsigned ValNo, MVT ValVT,
                           MVT LocVT, CCValAssign::LocInfo LocInfo,
                           ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::i8 ||
      LocVT == MVT::i16) {
    LocVT = MVT::i32;
    if (ArgFlags.isSExt())
        LocInfo = CCValAssign::SExt;
    else if (ArgFlags.isZExt())
        LocInfo = CCValAssign::ZExt;
    else
        LocInfo = CCValAssign::AExt;
  }

  if (LocVT == MVT::i32) {
    static const uint16_t RegList1[] = {
      X86::ESI, X86::EBP, X86::EAX, X86::EDX, X86::ECX
    };
    if (unsigned Reg = State.AllocateReg(RegList1, 5)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::i32 ||
      LocVT == MVT::f32) {
    unsigned Offset2 = State.AllocateStack(4, 4);
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset2, LocVT, LocInfo));
    return false;
  }

  return true;  // CC didn't match.
}


static bool CC_X86_32_ThisCall(unsigned ValNo, MVT ValVT,
                               MVT LocVT, CCValAssign::LocInfo LocInfo,
                               ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::i8 ||
      LocVT == MVT::i16) {
    LocVT = MVT::i32;
    if (ArgFlags.isSExt())
        LocInfo = CCValAssign::SExt;
    else if (ArgFlags.isZExt())
        LocInfo = CCValAssign::ZExt;
    else
        LocInfo = CCValAssign::AExt;
  }

  if (ArgFlags.isSRet()) {
    unsigned Offset1 = State.AllocateStack(4, 4);
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset1, LocVT, LocInfo));
    return false;
  }

  if (LocVT == MVT::i32) {
    if (unsigned Reg = State.AllocateReg(X86::ECX)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (!CC_X86_32_Common(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
    return false;

  return true;  // CC didn't match.
}


static bool CC_X86_64(unsigned ValNo, MVT ValVT,
                      MVT LocVT, CCValAssign::LocInfo LocInfo,
                      ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (State.getCallingConv() == CallingConv::GHC) {
    if (!CC_X86_64_GHC(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  if (State.getCallingConv() == CallingConv::HiPE) {
    if (!CC_X86_64_HiPE(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  if (State.getCallingConv() == CallingConv::X86_64_Win64) {
    if (!CC_X86_Win64_C(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  if (State.getCallingConv() == CallingConv::X86_64_SysV) {
    if (!CC_X86_64_C(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  if (State.getTarget().getSubtarget<X86Subtarget>().isTargetWin64()) {
    if (!CC_X86_Win64_C(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  if (!CC_X86_64_C(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
    return false;

  return true;  // CC didn't match.
}


static bool CC_X86_64_C(unsigned ValNo, MVT ValVT,
                        MVT LocVT, CCValAssign::LocInfo LocInfo,
                        ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (ArgFlags.isByVal()) {
    State.HandleByVal(ValNo, ValVT, LocVT, LocInfo, 8, 8, ArgFlags);
    return false;
  }

  if (LocVT == MVT::i8 ||
      LocVT == MVT::i16) {
    LocVT = MVT::i32;
    if (ArgFlags.isSExt())
        LocInfo = CCValAssign::SExt;
    else if (ArgFlags.isZExt())
        LocInfo = CCValAssign::ZExt;
    else
        LocInfo = CCValAssign::AExt;
  }

  if (ArgFlags.isNest()) {
    if (unsigned Reg = State.AllocateReg(X86::R10)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::i32) {
    static const uint16_t RegList1[] = {
      X86::EDI, X86::ESI, X86::EDX, X86::ECX, X86::R8D, X86::R9D
    };
    if (unsigned Reg = State.AllocateReg(RegList1, 6)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::i64) {
    static const uint16_t RegList2[] = {
      X86::RDI, X86::RSI, X86::RDX, X86::RCX, X86::R8, X86::R9
    };
    if (unsigned Reg = State.AllocateReg(RegList2, 6)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::x86mmx) {
    if (State.getTarget().getSubtarget<X86Subtarget>().isTargetDarwin()) {
      if (State.getTarget().getSubtarget<X86Subtarget>().hasSSE2()) {
        LocVT = MVT::v2i64;
        if (ArgFlags.isSExt())
                LocInfo = CCValAssign::SExt;
        else if (ArgFlags.isZExt())
                LocInfo = CCValAssign::ZExt;
        else
                LocInfo = CCValAssign::AExt;
      }
    }
  }

  if (LocVT == MVT::f32 ||
      LocVT == MVT::f64 ||
      LocVT == MVT::v16i8 ||
      LocVT == MVT::v8i16 ||
      LocVT == MVT::v4i32 ||
      LocVT == MVT::v2i64 ||
      LocVT == MVT::v4f32 ||
      LocVT == MVT::v2f64) {
    if (State.getTarget().getSubtarget<X86Subtarget>().hasSSE1()) {
      static const uint16_t RegList3[] = {
        X86::XMM0, X86::XMM1, X86::XMM2, X86::XMM3, X86::XMM4, X86::XMM5, X86::XMM6, X86::XMM7
      };
      if (unsigned Reg = State.AllocateReg(RegList3, 8)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  if (!State.isVarArg()) {
    if (LocVT == MVT::v32i8 ||
        LocVT == MVT::v16i16 ||
        LocVT == MVT::v8i32 ||
        LocVT == MVT::v4i64 ||
        LocVT == MVT::v8f32 ||
        LocVT == MVT::v4f64) {
      if (State.getTarget().getSubtarget<X86Subtarget>().hasFp256()) {
        static const uint16_t RegList4[] = {
          X86::YMM0, X86::YMM1, X86::YMM2, X86::YMM3, X86::YMM4, X86::YMM5, X86::YMM6, X86::YMM7
        };
        if (unsigned Reg = State.AllocateReg(RegList4, 8)) {
          State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
          return false;
        }
      }
    }
  }

  if (!State.isVarArg()) {
    if (LocVT == MVT::v16i32 ||
        LocVT == MVT::v8i64 ||
        LocVT == MVT::v16f32 ||
        LocVT == MVT::v8f64) {
      if (State.getTarget().getSubtarget<X86Subtarget>().hasAVX512()) {
        static const uint16_t RegList5[] = {
          X86::ZMM0, X86::ZMM1, X86::ZMM2, X86::ZMM3, X86::ZMM4, X86::ZMM5, X86::ZMM6, X86::ZMM7
        };
        if (unsigned Reg = State.AllocateReg(RegList5, 8)) {
          State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
          return false;
        }
      }
    }
  }

  if (LocVT == MVT::i32 ||
      LocVT == MVT::i64 ||
      LocVT == MVT::f32 ||
      LocVT == MVT::f64) {
    unsigned Offset6 = State.AllocateStack(8, 8);
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset6, LocVT, LocInfo));
    return false;
  }

  if (LocVT == MVT::f80) {
    unsigned Offset7 = State.AllocateStack(
      State.getTarget().getDataLayout()->getTypeAllocSize(EVT(LocVT).getTypeForEVT(State.getContext())), 
      State.getTarget().getDataLayout()->getABITypeAlignment(EVT(LocVT).getTypeForEVT(State.getContext())));
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset7, LocVT, LocInfo));
    return false;
  }

  if (LocVT == MVT::v16i8 ||
      LocVT == MVT::v8i16 ||
      LocVT == MVT::v4i32 ||
      LocVT == MVT::v2i64 ||
      LocVT == MVT::v4f32 ||
      LocVT == MVT::v2f64) {
    unsigned Offset8 = State.AllocateStack(16, 16);
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset8, LocVT, LocInfo));
    return false;
  }

  if (LocVT == MVT::v32i8 ||
      LocVT == MVT::v16i16 ||
      LocVT == MVT::v8i32 ||
      LocVT == MVT::v4i64 ||
      LocVT == MVT::v8f32 ||
      LocVT == MVT::v4f64) {
    unsigned Offset9 = State.AllocateStack(32, 32);
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset9, LocVT, LocInfo));
    return false;
  }

  if (LocVT == MVT::v16i32 ||
      LocVT == MVT::v8i64 ||
      LocVT == MVT::v16f32 ||
      LocVT == MVT::v8f64) {
    unsigned Offset10 = State.AllocateStack(64, 64);
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset10, LocVT, LocInfo));
    return false;
  }

  return true;  // CC didn't match.
}


static bool CC_X86_64_GHC(unsigned ValNo, MVT ValVT,
                          MVT LocVT, CCValAssign::LocInfo LocInfo,
                          ISD::ArgFlagsTy ArgFlags, CCState &State) {

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
    static const uint16_t RegList1[] = {
      X86::R13, X86::RBP, X86::R12, X86::RBX, X86::R14, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R15
    };
    if (unsigned Reg = State.AllocateReg(RegList1, 10)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::f32 ||
      LocVT == MVT::f64 ||
      LocVT == MVT::v16i8 ||
      LocVT == MVT::v8i16 ||
      LocVT == MVT::v4i32 ||
      LocVT == MVT::v2i64 ||
      LocVT == MVT::v4f32 ||
      LocVT == MVT::v2f64) {
    if (State.getTarget().getSubtarget<X86Subtarget>().hasSSE1()) {
      static const uint16_t RegList2[] = {
        X86::XMM1, X86::XMM2, X86::XMM3, X86::XMM4, X86::XMM5, X86::XMM6
      };
      if (unsigned Reg = State.AllocateReg(RegList2, 6)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  return true;  // CC didn't match.
}


static bool CC_X86_64_HiPE(unsigned ValNo, MVT ValVT,
                           MVT LocVT, CCValAssign::LocInfo LocInfo,
                           ISD::ArgFlagsTy ArgFlags, CCState &State) {

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
    static const uint16_t RegList1[] = {
      X86::R15, X86::RBP, X86::RSI, X86::RDX, X86::RCX, X86::R8
    };
    if (unsigned Reg = State.AllocateReg(RegList1, 6)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::i32 ||
      LocVT == MVT::i64 ||
      LocVT == MVT::f32 ||
      LocVT == MVT::f64) {
    unsigned Offset2 = State.AllocateStack(8, 8);
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset2, LocVT, LocInfo));
    return false;
  }

  return true;  // CC didn't match.
}


static bool CC_X86_Win64_C(unsigned ValNo, MVT ValVT,
                           MVT LocVT, CCValAssign::LocInfo LocInfo,
                           ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::i8 ||
      LocVT == MVT::i16) {
    LocVT = MVT::i32;
    if (ArgFlags.isSExt())
        LocInfo = CCValAssign::SExt;
    else if (ArgFlags.isZExt())
        LocInfo = CCValAssign::ZExt;
    else
        LocInfo = CCValAssign::AExt;
  }

  if (ArgFlags.isNest()) {
    if (unsigned Reg = State.AllocateReg(X86::R10)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::v16i8 ||
      LocVT == MVT::v8i16 ||
      LocVT == MVT::v4i32 ||
      LocVT == MVT::v2i64 ||
      LocVT == MVT::v4f32 ||
      LocVT == MVT::v2f64) {
    LocVT = MVT::i64;
    LocInfo = CCValAssign::Indirect;
  }

  if (LocVT == MVT::v32i8 ||
      LocVT == MVT::v16i16 ||
      LocVT == MVT::v8i32 ||
      LocVT == MVT::v4i64 ||
      LocVT == MVT::v8f32 ||
      LocVT == MVT::v4f64) {
    LocVT = MVT::i64;
    LocInfo = CCValAssign::Indirect;
  }

  if (LocVT == MVT::v16i32 ||
      LocVT == MVT::v16f32 ||
      LocVT == MVT::v8f64 ||
      LocVT == MVT::v8i64) {
    LocVT = MVT::i64;
    LocInfo = CCValAssign::Indirect;
  }

  if (LocVT == MVT::x86mmx) {
    LocVT = MVT::i64;
    LocInfo = CCValAssign::BCvt;
  }

  if (LocVT == MVT::i32) {
    static const uint16_t RegList1[] = {
      X86::ECX, X86::EDX, X86::R8D, X86::R9D
    };
    static const uint16_t RegList2[] = {
      X86::XMM0, X86::XMM1, X86::XMM2, X86::XMM3
    };
    if (unsigned Reg = State.AllocateReg(RegList1, RegList2, 4)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (State.getCallingConv() == CallingConv::X86_ThisCall) {
    if (ArgFlags.isSRet()) {
      if (LocVT == MVT::i64) {
        static const uint16_t RegList3[] = {
          X86::RDX, X86::R8, X86::R9
        };
        static const uint16_t RegList4[] = {
          X86::XMM1, X86::XMM2, X86::XMM3
        };
        if (unsigned Reg = State.AllocateReg(RegList3, RegList4, 3)) {
          State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
          return false;
        }
      }
    }
  }

  if (LocVT == MVT::i64) {
    static const uint16_t RegList5[] = {
      X86::RCX, X86::RDX, X86::R8, X86::R9
    };
    static const uint16_t RegList6[] = {
      X86::XMM0, X86::XMM1, X86::XMM2, X86::XMM3
    };
    if (unsigned Reg = State.AllocateReg(RegList5, RegList6, 4)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::f32 ||
      LocVT == MVT::f64 ||
      LocVT == MVT::v16i8 ||
      LocVT == MVT::v8i16 ||
      LocVT == MVT::v4i32 ||
      LocVT == MVT::v2i64 ||
      LocVT == MVT::v4f32 ||
      LocVT == MVT::v2f64) {
    static const uint16_t RegList7[] = {
      X86::XMM0, X86::XMM1, X86::XMM2, X86::XMM3
    };
    static const uint16_t RegList8[] = {
      X86::RCX, X86::RDX, X86::R8, X86::R9
    };
    if (unsigned Reg = State.AllocateReg(RegList7, RegList8, 4)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::i32 ||
      LocVT == MVT::i64 ||
      LocVT == MVT::f32 ||
      LocVT == MVT::f64) {
    unsigned Offset9 = State.AllocateStack(8, 8);
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset9, LocVT, LocInfo));
    return false;
  }

  if (LocVT == MVT::f80) {
    unsigned Offset10 = State.AllocateStack(
      State.getTarget().getDataLayout()->getTypeAllocSize(EVT(LocVT).getTypeForEVT(State.getContext())), 
      State.getTarget().getDataLayout()->getABITypeAlignment(EVT(LocVT).getTypeForEVT(State.getContext())));
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset10, LocVT, LocInfo));
    return false;
  }

  return true;  // CC didn't match.
}


static bool RetCC_Intel_OCL_BI(unsigned ValNo, MVT ValVT,
                               MVT LocVT, CCValAssign::LocInfo LocInfo,
                               ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::f32 ||
      LocVT == MVT::f64 ||
      LocVT == MVT::v4i32 ||
      LocVT == MVT::v2i64 ||
      LocVT == MVT::v4f32 ||
      LocVT == MVT::v2f64) {
    static const uint16_t RegList1[] = {
      X86::XMM0, X86::XMM1, X86::XMM2, X86::XMM3
    };
    if (unsigned Reg = State.AllocateReg(RegList1, 4)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::v8f32 ||
      LocVT == MVT::v4f64 ||
      LocVT == MVT::v8i32 ||
      LocVT == MVT::v4i64) {
    static const uint16_t RegList2[] = {
      X86::YMM0, X86::YMM1, X86::YMM2, X86::YMM3
    };
    if (unsigned Reg = State.AllocateReg(RegList2, 4)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::v16f32 ||
      LocVT == MVT::v8f64 ||
      LocVT == MVT::v16i32 ||
      LocVT == MVT::v8i64) {
    static const uint16_t RegList3[] = {
      X86::ZMM0, X86::ZMM1, X86::ZMM2, X86::ZMM3
    };
    if (unsigned Reg = State.AllocateReg(RegList3, 4)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (!RetCC_X86Common(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
    return false;

  return true;  // CC didn't match.
}


static bool RetCC_X86(unsigned ValNo, MVT ValVT,
                      MVT LocVT, CCValAssign::LocInfo LocInfo,
                      ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (State.getCallingConv() == CallingConv::Intel_OCL_BI) {
    if (!RetCC_Intel_OCL_BI(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  if (State.getTarget().getSubtarget<X86Subtarget>().is64Bit()) {
    if (!RetCC_X86_64(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  if (!RetCC_X86_32(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
    return false;

  return true;  // CC didn't match.
}


static bool RetCC_X86Common(unsigned ValNo, MVT ValVT,
                            MVT LocVT, CCValAssign::LocInfo LocInfo,
                            ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::i8) {
    static const uint16_t RegList1[] = {
      X86::AL, X86::DL, X86::CL
    };
    if (unsigned Reg = State.AllocateReg(RegList1, 3)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::i16) {
    static const uint16_t RegList2[] = {
      X86::AX, X86::DX, X86::CX
    };
    if (unsigned Reg = State.AllocateReg(RegList2, 3)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::i32) {
    static const uint16_t RegList3[] = {
      X86::EAX, X86::EDX, X86::ECX
    };
    if (unsigned Reg = State.AllocateReg(RegList3, 3)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::i64) {
    static const uint16_t RegList4[] = {
      X86::RAX, X86::RDX, X86::RCX
    };
    if (unsigned Reg = State.AllocateReg(RegList4, 3)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::v16i8 ||
      LocVT == MVT::v8i16 ||
      LocVT == MVT::v4i32 ||
      LocVT == MVT::v2i64 ||
      LocVT == MVT::v4f32 ||
      LocVT == MVT::v2f64) {
    static const uint16_t RegList5[] = {
      X86::XMM0, X86::XMM1, X86::XMM2, X86::XMM3
    };
    if (unsigned Reg = State.AllocateReg(RegList5, 4)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::v32i8 ||
      LocVT == MVT::v16i16 ||
      LocVT == MVT::v8i32 ||
      LocVT == MVT::v4i64 ||
      LocVT == MVT::v8f32 ||
      LocVT == MVT::v4f64) {
    static const uint16_t RegList6[] = {
      X86::YMM0, X86::YMM1, X86::YMM2, X86::YMM3
    };
    if (unsigned Reg = State.AllocateReg(RegList6, 4)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::v16i32 ||
      LocVT == MVT::v8i64 ||
      LocVT == MVT::v16f32 ||
      LocVT == MVT::v8f64) {
    static const uint16_t RegList7[] = {
      X86::ZMM0, X86::ZMM1, X86::ZMM2, X86::ZMM3
    };
    if (unsigned Reg = State.AllocateReg(RegList7, 4)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::x86mmx) {
    if (unsigned Reg = State.AllocateReg(X86::MM0)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::f80) {
    static const uint16_t RegList8[] = {
      X86::ST0, X86::ST1
    };
    if (unsigned Reg = State.AllocateReg(RegList8, 2)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  return true;  // CC didn't match.
}


static bool RetCC_X86_32(unsigned ValNo, MVT ValVT,
                         MVT LocVT, CCValAssign::LocInfo LocInfo,
                         ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (State.getCallingConv() == CallingConv::Fast) {
    if (!RetCC_X86_32_Fast(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  if (State.getCallingConv() == CallingConv::HiPE) {
    if (!RetCC_X86_32_HiPE(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  if (!RetCC_X86_32_C(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
    return false;

  return true;  // CC didn't match.
}


static bool RetCC_X86_32_C(unsigned ValNo, MVT ValVT,
                           MVT LocVT, CCValAssign::LocInfo LocInfo,
                           ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (ArgFlags.isInReg()) {
    if (State.getTarget().getSubtarget<X86Subtarget>().hasSSE2()) {
      if (LocVT == MVT::f32 ||
          LocVT == MVT::f64) {
        static const uint16_t RegList1[] = {
          X86::XMM0, X86::XMM1, X86::XMM2
        };
        if (unsigned Reg = State.AllocateReg(RegList1, 3)) {
          State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
          return false;
        }
      }
    }
  }

  if (LocVT == MVT::f32 ||
      LocVT == MVT::f64) {
    static const uint16_t RegList2[] = {
      X86::ST0, X86::ST1
    };
    if (unsigned Reg = State.AllocateReg(RegList2, 2)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (!RetCC_X86Common(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
    return false;

  return true;  // CC didn't match.
}


static bool RetCC_X86_32_Fast(unsigned ValNo, MVT ValVT,
                              MVT LocVT, CCValAssign::LocInfo LocInfo,
                              ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::f32) {
    if (State.getTarget().getSubtarget<X86Subtarget>().hasSSE2()) {
      static const uint16_t RegList1[] = {
        X86::XMM0, X86::XMM1, X86::XMM2
      };
      if (unsigned Reg = State.AllocateReg(RegList1, 3)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  if (LocVT == MVT::f64) {
    if (State.getTarget().getSubtarget<X86Subtarget>().hasSSE2()) {
      static const uint16_t RegList2[] = {
        X86::XMM0, X86::XMM1, X86::XMM2
      };
      if (unsigned Reg = State.AllocateReg(RegList2, 3)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  if (LocVT == MVT::i8) {
    static const uint16_t RegList3[] = {
      X86::AL, X86::DL, X86::CL
    };
    if (unsigned Reg = State.AllocateReg(RegList3, 3)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::i16) {
    static const uint16_t RegList4[] = {
      X86::AX, X86::DX, X86::CX
    };
    if (unsigned Reg = State.AllocateReg(RegList4, 3)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::i32) {
    static const uint16_t RegList5[] = {
      X86::EAX, X86::EDX, X86::ECX
    };
    if (unsigned Reg = State.AllocateReg(RegList5, 3)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (!RetCC_X86Common(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
    return false;

  return true;  // CC didn't match.
}


static bool RetCC_X86_32_HiPE(unsigned ValNo, MVT ValVT,
                              MVT LocVT, CCValAssign::LocInfo LocInfo,
                              ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::i8 ||
      LocVT == MVT::i16) {
    LocVT = MVT::i32;
    if (ArgFlags.isSExt())
        LocInfo = CCValAssign::SExt;
    else if (ArgFlags.isZExt())
        LocInfo = CCValAssign::ZExt;
    else
        LocInfo = CCValAssign::AExt;
  }

  if (LocVT == MVT::i32) {
    static const uint16_t RegList1[] = {
      X86::ESI, X86::EBP, X86::EAX, X86::EDX
    };
    if (unsigned Reg = State.AllocateReg(RegList1, 4)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  return true;  // CC didn't match.
}


static bool RetCC_X86_64(unsigned ValNo, MVT ValVT,
                         MVT LocVT, CCValAssign::LocInfo LocInfo,
                         ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (State.getCallingConv() == CallingConv::HiPE) {
    if (!RetCC_X86_64_HiPE(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  if (State.getCallingConv() == CallingConv::X86_64_Win64) {
    if (!RetCC_X86_Win64_C(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  if (State.getCallingConv() == CallingConv::X86_64_SysV) {
    if (!RetCC_X86_64_C(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  if (State.getTarget().getSubtarget<X86Subtarget>().isTargetWin64()) {
    if (!RetCC_X86_Win64_C(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  if (!RetCC_X86_64_C(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
    return false;

  return true;  // CC didn't match.
}


static bool RetCC_X86_64_C(unsigned ValNo, MVT ValVT,
                           MVT LocVT, CCValAssign::LocInfo LocInfo,
                           ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::f32) {
    static const uint16_t RegList1[] = {
      X86::XMM0, X86::XMM1
    };
    if (unsigned Reg = State.AllocateReg(RegList1, 2)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::f64) {
    static const uint16_t RegList2[] = {
      X86::XMM0, X86::XMM1
    };
    if (unsigned Reg = State.AllocateReg(RegList2, 2)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::x86mmx) {
    static const uint16_t RegList3[] = {
      X86::XMM0, X86::XMM1
    };
    if (unsigned Reg = State.AllocateReg(RegList3, 2)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (!RetCC_X86Common(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
    return false;

  return true;  // CC didn't match.
}


static bool RetCC_X86_64_HiPE(unsigned ValNo, MVT ValVT,
                              MVT LocVT, CCValAssign::LocInfo LocInfo,
                              ISD::ArgFlagsTy ArgFlags, CCState &State) {

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
    static const uint16_t RegList1[] = {
      X86::R15, X86::RBP, X86::RAX, X86::RDX
    };
    if (unsigned Reg = State.AllocateReg(RegList1, 4)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  return true;  // CC didn't match.
}


static bool RetCC_X86_Win64_C(unsigned ValNo, MVT ValVT,
                              MVT LocVT, CCValAssign::LocInfo LocInfo,
                              ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::x86mmx) {
    LocVT = MVT::i64;
    LocInfo = CCValAssign::BCvt;
  }

  if (!RetCC_X86_64_C(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
    return false;

  return true;  // CC didn't match.
}
