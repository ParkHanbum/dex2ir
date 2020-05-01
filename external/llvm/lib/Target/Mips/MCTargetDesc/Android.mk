LOCAL_PATH := $(call my-dir)

mips_mc_desc_TBLGEN_TABLES := \
  MipsGenRegisterInfo.inc \
  MipsGenInstrInfo.inc \
  MipsGenMCCodeEmitter.inc \
  MipsGenSubtargetInfo.inc

mips_mc_desc_SRC_FILES := \
  MipsABIFlagsSection.cpp \
  MipsAsmBackend.cpp \
  MipsELFObjectWriter.cpp \
  MipsELFStreamer.cpp \
  MipsMCAsmInfo.cpp \
  MipsMCCodeEmitter.cpp \
  MipsMCExpr.cpp \
  MipsMCTargetDesc.cpp \
  MipsNaClELFStreamer.cpp \
  MipsTargetStreamer.cpp

# For the host
# =====================================================
include $(CLEAR_VARS)
include $(CLEAR_TBLGEN_VARS)

LOCAL_MODULE:= libLLVMMipsDesc
LOCAL_MODULE_TAGS := optional

LOCAL_SRC_FILES := $(mips_mc_desc_SRC_FILES)
LOCAL_C_INCLUDES := $(LOCAL_PATH)/..

TBLGEN_TD_DIR := $(LOCAL_PATH)/..
TBLGEN_TABLES := $(mips_mc_desc_TBLGEN_TABLES)

include $(LLVM_HOST_BUILD_MK)
include $(LLVM_TBLGEN_RULES_MK)
include $(LLVM_GEN_INTRINSICS_MK)
include $(BUILD_HOST_STATIC_LIBRARY)

# For the device only
# =====================================================
ifneq (true,$(DISABLE_LLVM_DEVICE_BUILDS))
include $(CLEAR_VARS)
include $(CLEAR_TBLGEN_VARS)

LOCAL_MODULE:= libLLVMMipsDesc
LOCAL_MODULE_TAGS := optional

LOCAL_SRC_FILES := $(mips_mc_desc_SRC_FILES)
LOCAL_C_INCLUDES := $(LOCAL_PATH)/..

TBLGEN_TD_DIR := $(LOCAL_PATH)/..
TBLGEN_TABLES := $(mips_mc_desc_TBLGEN_TABLES)

include $(LLVM_DEVICE_BUILD_MK)
include $(LLVM_TBLGEN_RULES_MK)
include $(LLVM_GEN_INTRINSICS_MK)
include $(BUILD_STATIC_LIBRARY)
endif
