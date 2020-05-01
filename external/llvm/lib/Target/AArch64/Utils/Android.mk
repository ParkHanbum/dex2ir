LOCAL_PATH := $(call my-dir)

aarch64_utils_TBLGEN_TABLES := \
  AArch64GenRegisterInfo.inc \
  AArch64GenInstrInfo.inc \
  AArch64GenSubtargetInfo.inc

aarch64_utils_SRC_FILES := \
  AArch64BaseInfo.cpp

# For the device
# =====================================================
ifneq (true,$(DISABLE_LLVM_DEVICE_BUILDS))
include $(CLEAR_VARS)

LOCAL_SRC_FILES := $(aarch64_utils_SRC_FILES)

LOCAL_C_INCLUDES += $(LOCAL_PATH)/..

LOCAL_MODULE:= libLLVMAArch64Utils

LOCAL_MODULE_TAGS := optional

TBLGEN_TD_DIR := $(LOCAL_PATH)/..
TBLGEN_TABLES := $(aarch64_utils_TBLGEN_TABLES)

include $(LLVM_DEVICE_BUILD_MK)
include $(LLVM_TBLGEN_RULES_MK)
include $(LLVM_GEN_INTRINSICS_MK)
include $(BUILD_STATIC_LIBRARY)
endif

# For the host
# =====================================================
include $(CLEAR_VARS)

LOCAL_SRC_FILES := $(aarch64_utils_SRC_FILES)

LOCAL_C_INCLUDES += $(LOCAL_PATH)/..

LOCAL_MODULE:= libLLVMAArch64Utils

LOCAL_MODULE_TAGS := optional

TBLGEN_TD_DIR := $(LOCAL_PATH)/..
TBLGEN_TABLES := $(aarch64_utils_TBLGEN_TABLES)

include $(LLVM_HOST_BUILD_MK)
include $(LLVM_TBLGEN_RULES_MK)
include $(LLVM_GEN_INTRINSICS_MK)
include $(BUILD_HOST_STATIC_LIBRARY)
