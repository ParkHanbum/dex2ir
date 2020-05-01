LOCAL_PATH := $(call my-dir)

LLVM_ROOT_PATH := $(LOCAL_PATH)/../..


#===---------------------------------------------------------------===
# llvm-objdump command line tool
#===---------------------------------------------------------------===

llvm_objdump_SRC_FILES := \
  llvm-objdump.cpp \
  COFFDump.cpp \
  ELFDump.cpp \
  MachODump.cpp \

llvm_objdump_STATIC_LIBRARIES := \
  libLLVMDebugInfo \
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
  libLLVMObject \
  libLLVMMCParser \
  libLLVMMCAnalysis \
  libLLVMMC \
  libLLVMMCDisassembler \
  libLLVMBitReader \
  libLLVMCore \
  libLLVMAsmParser \
  libLLVMSupport \

include $(CLEAR_VARS)

LOCAL_MODULE := llvm-objdump
LOCAL_MODULE_TAGS := optional
LOCAL_MODULE_CLASS := EXECUTABLES
LOCAL_IS_HOST_MODULE := true

LOCAL_SRC_FILES := $(llvm_objdump_SRC_FILES)

LOCAL_STATIC_LIBRARIES := $(llvm_objdump_STATIC_LIBRARIES)

LOCAL_LDLIBS += -lpthread -lm -ldl

include $(LLVM_ROOT_PATH)/llvm.mk
include $(LLVM_HOST_BUILD_MK)
include $(LLVM_GEN_INTRINSICS_MK)
include $(BUILD_HOST_EXECUTABLE)
