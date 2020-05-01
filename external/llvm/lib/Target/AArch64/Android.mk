LOCAL_PATH := $(call my-dir)

aarch64_codegen_TBLGEN_TABLES := \
  AArch64GenRegisterInfo.inc \
  AArch64GenInstrInfo.inc \
  AArch64GenAsmWriter.inc \
  AArch64GenAsmWriter1.inc \
  AArch64GenDAGISel.inc \
  AArch64GenCallingConv.inc \
  AArch64GenAsmMatcher.inc \
  AArch64GenSubtargetInfo.inc \
  AArch64GenMCCodeEmitter.inc \
  AArch64GenFastISel.inc \
  AArch64GenDisassemblerTables.inc \
  AArch64GenMCPseudoLowering.inc \

aarch64_codegen_SRC_FILES := \
  AArch64A53Fix835769.cpp \
  AArch64A57FPLoadBalancing.cpp \
  AArch64AddressTypePromotion.cpp \
  AArch64AdvSIMDScalarPass.cpp \
  AArch64AsmPrinter.cpp \
  AArch64BranchRelaxation.cpp \
  AArch64CleanupLocalDynamicTLSPass.cpp \
  AArch64CollectLOH.cpp \
  AArch64ConditionalCompares.cpp \
  AArch64DeadRegisterDefinitionsPass.cpp \
  AArch64ExpandPseudoInsts.cpp \
  AArch64FastISel.cpp \
  AArch64FrameLowering.cpp \
  AArch64InstrInfo.cpp \
  AArch64ISelDAGToDAG.cpp \
  AArch64ISelLowering.cpp \
  AArch64LoadStoreOptimizer.cpp \
  AArch64MCInstLower.cpp \
  AArch64PromoteConstant.cpp \
  AArch64RegisterInfo.cpp \
  AArch64SelectionDAGInfo.cpp \
  AArch64StorePairSuppress.cpp \
  AArch64Subtarget.cpp \
  AArch64TargetMachine.cpp \
  AArch64TargetObjectFile.cpp \
  AArch64TargetTransformInfo.cpp

# For the host
# =====================================================
include $(CLEAR_VARS)
include $(CLEAR_TBLGEN_VARS)

LOCAL_MODULE:= libLLVMAArch64CodeGen
LOCAL_MODULE_TAGS := optional

LOCAL_SRC_FILES := $(aarch64_codegen_SRC_FILES)
LOCAL_C_INCLUDES := $(LOCAL_PATH)/MCTargetDesc
TBLGEN_TABLES := $(aarch64_codegen_TBLGEN_TABLES)

include $(LLVM_HOST_BUILD_MK)
include $(LLVM_TBLGEN_RULES_MK)
include $(LLVM_GEN_INTRINSICS_MK)
include $(BUILD_HOST_STATIC_LIBRARY)

# For the device only
# =====================================================
ifneq (true,$(DISABLE_LLVM_DEVICE_BUILDS))
include $(CLEAR_VARS)
include $(CLEAR_TBLGEN_VARS)

LOCAL_MODULE:= libLLVMAArch64CodeGen
LOCAL_MODULE_TAGS := optional

LOCAL_SRC_FILES := $(aarch64_codegen_SRC_FILES)
LOCAL_C_INCLUDES := $(LOCAL_PATH)/MCTargetDesc
TBLGEN_TABLES := $(aarch64_codegen_TBLGEN_TABLES)

include $(LLVM_DEVICE_BUILD_MK)
include $(LLVM_TBLGEN_RULES_MK)
include $(LLVM_GEN_INTRINSICS_MK)
include $(BUILD_STATIC_LIBRARY)
endif
