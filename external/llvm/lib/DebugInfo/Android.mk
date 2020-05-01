LOCAL_PATH:= $(call my-dir)

debuginfo_SRC_FILES := \
  DIContext.cpp \
  DWARFAbbreviationDeclaration.cpp \
  DWARFCompileUnit.cpp \
  DWARFContext.cpp \
  DWARFDebugAbbrev.cpp \
  DWARFDebugArangeSet.cpp \
  DWARFDebugAranges.cpp \
  DWARFDebugFrame.cpp \
  DWARFDebugInfoEntry.cpp \
  DWARFDebugLine.cpp \
  DWARFDebugLoc.cpp \
  DWARFDebugRangeList.cpp \
  DWARFFormValue.cpp \
  DWARFTypeUnit.cpp \
  DWARFUnit.cpp \

# For the host
# =====================================================
include $(CLEAR_VARS)

REQUIRES_RTTI := 1

LOCAL_SRC_FILES := $(debuginfo_SRC_FILES)

LOCAL_MODULE:= libLLVMDebugInfo

LOCAL_MODULE_TAGS := optional

include $(LLVM_HOST_BUILD_MK)
include $(LLVM_GEN_INTRINSICS_MK)
include $(BUILD_HOST_STATIC_LIBRARY)

# For the device
# =====================================================
ifneq (true,$(DISABLE_LLVM_DEVICE_BUILDS))
include $(CLEAR_VARS)

REQUIRES_RTTI := 1

LOCAL_SRC_FILES := $(debuginfo_SRC_FILES)

LOCAL_MODULE:= libLLVMDebugInfo

LOCAL_MODULE_TAGS := optional

include $(LLVM_DEVICE_BUILD_MK)
include $(LLVM_GEN_INTRINSICS_MK)
include $(BUILD_STATIC_LIBRARY)
endif
