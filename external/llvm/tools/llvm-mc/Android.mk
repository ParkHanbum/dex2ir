LOCAL_PATH := $(call my-dir)

LLVM_ROOT_PATH := $(LOCAL_PATH)/../..


#===---------------------------------------------------------------===
# llvm-mc command line tool
#===---------------------------------------------------------------===

llvm_mc_SRC_FILES := \
  llvm-mc.cpp \
  Disassembler.cpp

llvm_mc_STATIC_LIBRARIES := \
  libLLVMARMAsmParser \
  libLLVMARMInfo \
  libLLVMARMDesc \
  libLLVMARMAsmPrinter \
  libLLVMARMDisassembler \
  libLLVMAArch64Info \
  libLLVMAArch64AsmParser \
  libLLVMAArch64Desc \
  libLLVMAArch64AsmPrinter \
  libLLVMAArch64Utils \
  libLLVMAArch64Disassembler \
  libLLVMMipsInfo \
  libLLVMMipsAsmParser \
  libLLVMMipsDesc \
  libLLVMMipsAsmPrinter \
  libLLVMMipsDisassembler \
  libLLVMX86Info \
  libLLVMX86Desc \
  libLLVMX86AsmParser \
  libLLVMX86AsmPrinter \
  libLLVMX86Utils \
  libLLVMX86Disassembler \
  libLLVMAsmPrinter \
  libLLVMTarget \
  libLLVMMC \
  libLLVMObject \
  libLLVMBitReader \
  libLLVMMCParser \
  libLLVMCore \
  libLLVMAsmParser \
  libLLVMSupport \
  libLLVMMCDisassembler \

include $(CLEAR_VARS)

LOCAL_MODULE := llvm-mc
LOCAL_MODULE_TAGS := optional
LOCAL_MODULE_CLASS := EXECUTABLES
LOCAL_IS_HOST_MODULE := true

LOCAL_SRC_FILES := $(llvm_mc_SRC_FILES)

LOCAL_STATIC_LIBRARIES := $(llvm_mc_STATIC_LIBRARIES)

LOCAL_LDLIBS += -lpthread -lm -ldl

include $(LLVM_ROOT_PATH)/llvm.mk
include $(LLVM_HOST_BUILD_MK)
include $(LLVM_GEN_INTRINSICS_MK)
include $(BUILD_HOST_EXECUTABLE)
