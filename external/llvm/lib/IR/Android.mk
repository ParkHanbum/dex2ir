LOCAL_PATH:= $(call my-dir)

vmcore_SRC_FILES := \
  AsmWriter.cpp \
  Attributes.cpp \
  AutoUpgrade.cpp \
  BasicBlock.cpp \
  Comdat.cpp \
  ConstantFold.cpp \
  ConstantRange.cpp \
  Constants.cpp \
  Core.cpp \
  DataLayout.cpp \
  DebugInfo.cpp \
  DebugLoc.cpp \
  DiagnosticInfo.cpp \
  DiagnosticPrinter.cpp \
  DIBuilder.cpp \
  Dominators.cpp \
  Function.cpp \
  GCOV.cpp \
  GVMaterializer.cpp \
  Globals.cpp \
  IRBuilder.cpp \
  IRPrintingPasses.cpp \
  InlineAsm.cpp \
  Instruction.cpp \
  Instructions.cpp \
  IntrinsicInst.cpp \
  LLVMContext.cpp \
  LLVMContextImpl.cpp \
  LeakDetector.cpp \
  LegacyPassManager.cpp \
  Mangler.cpp \
  MDBuilder.cpp \
  Metadata.cpp \
  Module.cpp \
  Pass.cpp \
  PassManager.cpp \
  PassRegistry.cpp \
  Type.cpp \
  TypeFinder.cpp \
  Use.cpp \
  User.cpp \
  Value.cpp \
  ValueSymbolTable.cpp \
  ValueTypes.cpp \
  Verifier.cpp

# For the host
# =====================================================
include $(CLEAR_VARS)

REQUIRES_RTTI := 1

LOCAL_SRC_FILES := $(vmcore_SRC_FILES)

LOCAL_MODULE:= libLLVMCore

LOCAL_MODULE_TAGS := optional

include $(LLVM_HOST_BUILD_MK)
include $(LLVM_GEN_INTRINSICS_MK)
include $(BUILD_HOST_STATIC_LIBRARY)

# For the device
# =====================================================
include $(CLEAR_VARS)
ifneq (true,$(DISABLE_LLVM_DEVICE_BUILDS))

REQUIRES_RTTI := 1

LOCAL_SRC_FILES := $(vmcore_SRC_FILES)

LOCAL_MODULE:= libLLVMCore

LOCAL_MODULE_TAGS := optional

include $(LLVM_DEVICE_BUILD_MK)
include $(LLVM_GEN_INTRINSICS_MK)
include $(BUILD_STATIC_LIBRARY)
endif
