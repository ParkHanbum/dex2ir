LOCAL_PATH := $(call my-dir)

LLVM_ROOT_PATH := $(LOCAL_PATH)/../..


#===---------------------------------------------------------------===
# llvm-lto command line tool
#===---------------------------------------------------------------===

llvm_lto_SRC_FILES := \
  llvm-lto.cpp

llvm_lto_STATIC_LIBRARIES := \
  libLLVMARMCodeGen \
  libLLVMARMInfo \
  libLLVMARMDesc \
  libLLVMARMAsmPrinter \
  libLLVMARMAsmParser \
  libLLVMARMDisassembler \
  libLLVMAArch64CodeGen \
  libLLVMAArch64Info \
  libLLVMAArch64AsmParser \
  libLLVMAArch64AsmPrinter \
  libLLVMAArch64Desc \
  libLLVMAArch64Utils \
  libLLVMAArch64Disassembler \
  libLLVMMipsCodeGen \
  libLLVMMipsInfo \
  libLLVMMipsDesc \
  libLLVMMipsAsmPrinter \
  libLLVMMipsAsmParser \
  libLLVMMipsDisassembler \
  libLLVMX86CodeGen \
  libLLVMX86Info \
  libLLVMX86Desc \
  libLLVMX86AsmPrinter \
  libLLVMX86AsmParser \
  libLLVMX86Utils \
  libLLVMX86Disassembler \
  libLLVMAsmPrinter \
  libLLVMSelectionDAG \
  libLLVMCodeGen \
  libLLVMTarget \
  libLLVMLTO \
  libLLVMBitReader \
  libLLVMBitWriter \
  libLLVMLinker \
  libLLVMipo \
  libLLVMTransformObjCARC \
  libLLVMScalarOpts \
  libLLVMInstCombine \
  libLLVMVectorize \
  libLLVMTransformUtils \
  libLLVMAnalysis \
  libLLVMipa \
  libLLVMMC \
  libLLVMMCParser \
  libLLVMMCDisassembler \
  libLLVMObject \
  libLLVMCore \
  libLLVMAsmParser \
  libLLVMOption \
  libLLVMSupport \

include $(CLEAR_VARS)

LOCAL_MODULE := llvm-lto
LOCAL_MODULE_TAGS := optional
LOCAL_MODULE_CLASS := EXECUTABLES
LOCAL_IS_HOST_MODULE := true

LOCAL_SRC_FILES := $(llvm_lto_SRC_FILES)

LOCAL_STATIC_LIBRARIES := $(llvm_lto_STATIC_LIBRARIES)

LOCAL_LDLIBS += -lpthread -lm -ldl

include $(LLVM_ROOT_PATH)/llvm.mk
include $(LLVM_HOST_BUILD_MK)
include $(LLVM_GEN_INTRINSICS_MK)
include $(BUILD_HOST_EXECUTABLE)
