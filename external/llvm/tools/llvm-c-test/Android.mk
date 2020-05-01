LOCAL_PATH := $(call my-dir)

LLVM_ROOT_PATH := $(LOCAL_PATH)/../..


#===---------------------------------------------------------------===
# llvm-c-test command line tool
#===---------------------------------------------------------------===

llvm_c_test_SRC_FILES := \
  calc.c                 \
  disassemble.c          \
  helpers.c              \
  include-all.c          \
  main.c                 \
  module.c               \
  object.c               \
  targets.c              \

llvm_c_test_STATIC_LIBRARIES := \
  libLLVMBitReader \
  libLLVMARMCodeGen \
  libLLVMARMInfo \
  libLLVMARMDesc \
  libLLVMARMAsmPrinter \
  libLLVMARMDisassembler \
  libLLVMAArch64CodeGen \
  libLLVMAArch64Info \
  libLLVMAArch64Desc \
  libLLVMAArch64AsmPrinter \
  libLLVMAArch64Utils \
  libLLVMAArch64Disassembler \
  libLLVMMipsCodeGen \
  libLLVMMipsInfo \
  libLLVMMipsDesc \
  libLLVMMipsAsmPrinter \
  libLLVMMipsDisassembler \
  libLLVMX86CodeGen \
  libLLVMX86Info \
  libLLVMX86Desc \
  libLLVMX86AsmPrinter \
  libLLVMX86Utils \
  libLLVMX86Disassembler \
  libLLVMAsmPrinter \
  libLLVMSelectionDAG \
  libLLVMCodeGen \
  libLLVMScalarOpts \
  libLLVMTransformUtils \
  libLLVMAnalysis \
  libLLVMTarget \
  libLLVMMC \
  libLLVMObject \
  libLLVMMCParser \
  libLLVMCore \
  libLLVMAsmParser \
  libLLVMOption \
  libLLVMSupport \
  libLLVMMCDisassembler \

include $(CLEAR_VARS)

LOCAL_MODULE := llvm-c-test
LOCAL_MODULE_TAGS := optional
LOCAL_MODULE_CLASS := EXECUTABLES
LOCAL_IS_HOST_MODULE := true

LOCAL_SRC_FILES := $(llvm_c_test_SRC_FILES)

LOCAL_STATIC_LIBRARIES := $(llvm_c_test_STATIC_LIBRARIES)

LOCAL_LDLIBS += -lpthread -lm -ldl

include $(LLVM_ROOT_PATH)/llvm.mk
include $(LLVM_HOST_BUILD_MK)
include $(LLVM_GEN_INTRINSICS_MK)
include $(BUILD_HOST_EXECUTABLE)
