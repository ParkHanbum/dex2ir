LOCAL_PATH:= $(call my-dir)

mc_analysis_SRC_FILES := \
  MCAtom.cpp \
  MCFunction.cpp \
  MCModule.cpp \
  MCModuleYAML.cpp \
  MCObjectDisassembler.cpp \
  MCObjectSymbolizer.cpp

# For the host
# =====================================================
include $(CLEAR_VARS)

LOCAL_SRC_FILES := $(mc_analysis_SRC_FILES)

LOCAL_MODULE:= libLLVMMCAnalysis

LOCAL_MODULE_TAGS := optional

include $(LLVM_HOST_BUILD_MK)
include $(BUILD_HOST_STATIC_LIBRARY)

# For the device
# =====================================================
include $(CLEAR_VARS)
ifneq (true,$(DISABLE_LLVM_DEVICE_BUILDS))

LOCAL_SRC_FILES := $(mc_analysis_SRC_FILES)

LOCAL_MODULE:= libLLVMMCAnalysis

LOCAL_MODULE_TAGS := optional

include $(LLVM_DEVICE_BUILD_MK)
include $(BUILD_STATIC_LIBRARY)
endif
