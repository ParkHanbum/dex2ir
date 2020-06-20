/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Calling Convention Implementation Fragment                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

static bool CC_AMDGPU(unsigned ValNo, MVT ValVT,
                      MVT LocVT, CCValAssign::LocInfo LocInfo,
                      ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool CC_AMDGPU_Kernel(unsigned ValNo, MVT ValVT,
                             MVT LocVT, CCValAssign::LocInfo LocInfo,
                             ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool CC_SI(unsigned ValNo, MVT ValVT,
                  MVT LocVT, CCValAssign::LocInfo LocInfo,
                  ISD::ArgFlagsTy ArgFlags, CCState &State);


static bool CC_AMDGPU(unsigned ValNo, MVT ValVT,
                      MVT LocVT, CCValAssign::LocInfo LocInfo,
                      ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (State.getTarget().getSubtarget<AMDGPUSubtarget>().getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS && State.getMachineFunction().getInfo<SIMachineFunctionInfo>()->ShaderType == ShaderType::COMPUTE) {
    if (!CC_AMDGPU_Kernel(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  if (State.getTarget().getSubtarget<AMDGPUSubtarget>().getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && State.getMachineFunction().getInfo<R600MachineFunctionInfo>()->ShaderType == ShaderType::COMPUTE) {
    if (!CC_AMDGPU_Kernel(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  if (State.getTarget().getSubtarget<AMDGPUSubtarget>().getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS) {
    if (!CC_SI(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  return true;  // CC didn't match.
}


static bool CC_AMDGPU_Kernel(unsigned ValNo, MVT ValVT,
                             MVT LocVT, CCValAssign::LocInfo LocInfo,
                             ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::v4i32 ||
      LocVT == MVT::v4f32) {
    unsigned Offset1 = State.AllocateStack(16, 16);
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset1, LocVT, LocInfo));
    return false;
  }

  if (LocVT == MVT::i64 ||
      LocVT == MVT::f64 ||
      LocVT == MVT::v2f32 ||
      LocVT == MVT::v2i32) {
    unsigned Offset2 = State.AllocateStack(8, 8);
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset2, LocVT, LocInfo));
    return false;
  }

  if (LocVT == MVT::i32 ||
      LocVT == MVT::f32) {
    unsigned Offset3 = State.AllocateStack(4, 4);
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset3, LocVT, LocInfo));
    return false;
  }

  if (LocVT == MVT::i16) {
    unsigned Offset4 = State.AllocateStack(2, 4);
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset4, LocVT, LocInfo));
    return false;
  }

  if (LocVT == MVT::i8) {
    unsigned Offset5 = State.AllocateStack(1, 4);
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset5, LocVT, LocInfo));
    return false;
  }

  return true;  // CC didn't match.
}


static bool CC_SI(unsigned ValNo, MVT ValVT,
                  MVT LocVT, CCValAssign::LocInfo LocInfo,
                  ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (ArgFlags.isInReg()) {
    if (LocVT == MVT::f32 ||
        LocVT == MVT::i32) {
      static const uint16_t RegList1[] = {
        AMDGPU::SGPR0, AMDGPU::SGPR1, AMDGPU::SGPR2, AMDGPU::SGPR3, AMDGPU::SGPR4, AMDGPU::SGPR5, AMDGPU::SGPR6, AMDGPU::SGPR7, AMDGPU::SGPR8, AMDGPU::SGPR9, AMDGPU::SGPR10, AMDGPU::SGPR11, AMDGPU::SGPR12, AMDGPU::SGPR13, AMDGPU::SGPR14, AMDGPU::SGPR15
      };
      if (unsigned Reg = State.AllocateReg(RegList1, 16)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  if (ArgFlags.isInReg()) {
    if (LocVT == MVT::i64) {
      static const uint16_t RegList2[] = {
        AMDGPU::SGPR0, AMDGPU::SGPR2, AMDGPU::SGPR4, AMDGPU::SGPR6, AMDGPU::SGPR8, AMDGPU::SGPR10, AMDGPU::SGPR12, AMDGPU::SGPR14
      };
      static const uint16_t RegList3[] = {
        AMDGPU::SGPR1, AMDGPU::SGPR3, AMDGPU::SGPR5, AMDGPU::SGPR7, AMDGPU::SGPR9, AMDGPU::SGPR11, AMDGPU::SGPR12, AMDGPU::SGPR15
      };
      if (unsigned Reg = State.AllocateReg(RegList2, RegList3, 8)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  if (!ArgFlags.isInReg()) {
    if (LocVT == MVT::f32 ||
        LocVT == MVT::i32) {
      static const uint16_t RegList4[] = {
        AMDGPU::VGPR0, AMDGPU::VGPR1, AMDGPU::VGPR2, AMDGPU::VGPR3, AMDGPU::VGPR4, AMDGPU::VGPR5, AMDGPU::VGPR6, AMDGPU::VGPR7, AMDGPU::VGPR8, AMDGPU::VGPR9, AMDGPU::VGPR10, AMDGPU::VGPR11, AMDGPU::VGPR12, AMDGPU::VGPR13, AMDGPU::VGPR14, AMDGPU::VGPR15, AMDGPU::VGPR16, AMDGPU::VGPR17, AMDGPU::VGPR18, AMDGPU::VGPR19, AMDGPU::VGPR20, AMDGPU::VGPR21, AMDGPU::VGPR22, AMDGPU::VGPR23, AMDGPU::VGPR24, AMDGPU::VGPR25, AMDGPU::VGPR26, AMDGPU::VGPR27, AMDGPU::VGPR28, AMDGPU::VGPR29, AMDGPU::VGPR30, AMDGPU::VGPR31
      };
      if (unsigned Reg = State.AllocateReg(RegList4, 32)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  return true;  // CC didn't match.
}
