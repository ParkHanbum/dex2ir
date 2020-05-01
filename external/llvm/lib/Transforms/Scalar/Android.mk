LOCAL_PATH:= $(call my-dir)

transforms_scalar_SRC_FILES := \
  ADCE.cpp \
  ConstantProp.cpp \
  ConstantHoisting.cpp \
  CorrelatedValuePropagation.cpp \
  DCE.cpp \
  DeadStoreElimination.cpp \
  EarlyCSE.cpp \
  GVN.cpp \
  IndVarSimplify.cpp \
  JumpThreading.cpp \
  LICM.cpp \
  LoadCombine.cpp \
  LoopDeletion.cpp \
  LoopIdiomRecognize.cpp \
  LoopInstSimplify.cpp \
  LoopRerollPass.cpp \
  LoopRotation.cpp \
  LoopStrengthReduce.cpp \
  LoopUnrollPass.cpp \
  LoopUnswitch.cpp \
  LowerAtomic.cpp \
  MemCpyOptimizer.cpp \
  PartiallyInlineLibCalls.cpp \
  Reassociate.cpp \
  Reg2Mem.cpp \
  SCCP.cpp \
  SROA.cpp \
  SampleProfile.cpp \
  Scalar.cpp \
  Scalarizer.cpp \
  ScalarReplAggregates.cpp \
  SeparateConstOffsetFromGEP.cpp \
  SimplifyCFGPass.cpp \
  Sink.cpp \
  StructurizeCFG.cpp \
  TailRecursionElimination.cpp

# For the host
# =====================================================
include $(CLEAR_VARS)

LOCAL_SRC_FILES :=	\
	$(transforms_scalar_SRC_FILES)

LOCAL_MODULE:= libLLVMScalarOpts

LOCAL_MODULE_TAGS := optional

include $(LLVM_HOST_BUILD_MK)
include $(LLVM_GEN_INTRINSICS_MK)
include $(BUILD_HOST_STATIC_LIBRARY)

# For the device
# =====================================================
ifneq (true,$(DISABLE_LLVM_DEVICE_BUILDS))
include $(CLEAR_VARS)

LOCAL_SRC_FILES := $(transforms_scalar_SRC_FILES)
LOCAL_MODULE:= libLLVMScalarOpts

LOCAL_MODULE_TAGS := optional

include $(LLVM_DEVICE_BUILD_MK)
include $(LLVM_GEN_INTRINSICS_MK)
include $(BUILD_STATIC_LIBRARY)
endif
