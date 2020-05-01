LOCAL_PATH := $(call my-dir)

aarch64_asm_printer_TBLGEN_TABLES := \
  AArch64GenAsmWriter.inc \
  AArch64GenAsmWriter1.inc \
  AArch64GenRegisterInfo.inc \
  AArch64GenSubtargetInfo.inc \
  AArch64GenInstrInfo.inc

aarch64_asm_printer_SRC_FILES := \
  AArch64InstPrinter.cpp

# For the host
# =====================================================
include $(CLEAR_VARS)
include $(CLEAR_TBLGEN_VARS)

TBLGEN_TABLES := $(aarch64_asm_printer_TBLGEN_TABLES)

TBLGEN_TD_DIR := $(LOCAL_PATH)/..

LOCAL_SRC_FILES := $(aarch64_asm_printer_SRC_FILES)

LOCAL_MODULE:= libLLVMAArch64AsmPrinter

LOCAL_C_INCLUDES += \
    $(LOCAL_PATH)/..

LOCAL_MODULE_TAGS := optional

include $(LLVM_HOST_BUILD_MK)
include $(LLVM_TBLGEN_RULES_MK)
include $(BUILD_HOST_STATIC_LIBRARY)

# For the device only
# =====================================================
ifneq (true,$(DISABLE_LLVM_DEVICE_BUILDS))
include $(CLEAR_VARS)
include $(CLEAR_TBLGEN_VARS)

TBLGEN_TABLES := $(aarch64_asm_printer_TBLGEN_TABLES)

TBLGEN_TD_DIR := $(LOCAL_PATH)/..

LOCAL_SRC_FILES := $(aarch64_asm_printer_SRC_FILES)

LOCAL_C_INCLUDES+= \
    $(LOCAL_PATH)/..

LOCAL_MODULE:= libLLVMAArch64AsmPrinter

LOCAL_MODULE_TAGS := optional

include $(LLVM_DEVICE_BUILD_MK)
include $(LLVM_TBLGEN_RULES_MK)
include $(BUILD_STATIC_LIBRARY)
endif

