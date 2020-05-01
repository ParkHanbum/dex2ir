LOCAL_PATH := $(call my-dir)

aarch64_mc_desc_TBLGEN_TABLES := \
  AArch64GenRegisterInfo.inc \
  AArch64GenInstrInfo.inc \
  AArch64GenMCCodeEmitter.inc \
  AArch64GenSubtargetInfo.inc

aarch64_mc_desc_SRC_FILES := \
  AArch64AsmBackend.cpp \
  AArch64ELFObjectWriter.cpp \
  AArch64ELFStreamer.cpp \
  AArch64MachObjectWriter.cpp \
  AArch64MCAsmInfo.cpp \
  AArch64MCCodeEmitter.cpp \
  AArch64MCExpr.cpp \
  AArch64MCTargetDesc.cpp \
  AArch64TargetStreamer.cpp

# For the host
# =====================================================
include $(CLEAR_VARS)
include $(CLEAR_TBLGEN_VARS)


LOCAL_MODULE:= libLLVMAArch64Desc
LOCAL_MODULE_TAGS := optional

LOCAL_SRC_FILES := $(aarch64_mc_desc_SRC_FILES)
LOCAL_C_INCLUDES := $(LOCAL_PATH)/..

TBLGEN_TD_DIR := $(LOCAL_PATH)/..
TBLGEN_TABLES := $(aarch64_mc_desc_TBLGEN_TABLES)

include $(LLVM_HOST_BUILD_MK)
include $(LLVM_TBLGEN_RULES_MK)
include $(LLVM_GEN_INTRINSICS_MK)
include $(BUILD_HOST_STATIC_LIBRARY)

# For the device only
# =====================================================
ifneq (true,$(DISABLE_LLVM_DEVICE_BUILDS))
include $(CLEAR_VARS)
include $(CLEAR_TBLGEN_VARS)

LOCAL_MODULE:= libLLVMAArch64Desc
LOCAL_MODULE_TAGS := optional

LOCAL_SRC_FILES := $(aarch64_mc_desc_SRC_FILES)
LOCAL_C_INCLUDES := $(LOCAL_PATH)/..

TBLGEN_TD_DIR := $(LOCAL_PATH)/..
TBLGEN_TABLES := $(aarch64_mc_desc_TBLGEN_TABLES)

include $(LLVM_DEVICE_BUILD_MK)
include $(LLVM_TBLGEN_RULES_MK)
include $(LLVM_GEN_INTRINSICS_MK)
include $(BUILD_STATIC_LIBRARY)
endif
