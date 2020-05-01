LOCAL_PATH := $(call my-dir)

LLVM_ROOT_PATH := $(LOCAL_PATH)/../..


#===---------------------------------------------------------------===
# lli command line tool
#===---------------------------------------------------------------===

lli_SRC_FILES := \
  lli.cpp \
  RemoteMemoryManager.cpp \
  RemoteTarget.cpp \
  RemoteTargetExternal.cpp \

lli_STATIC_LIBRARIES := \
  libLLVMIRReader \
  libLLVMBitReader \
  libLLVMARMCodeGen \
  libLLVMARMInfo \
  libLLVMARMDesc \
  libLLVMARMAsmPrinter \
  libLLVMARMAsmParser \
  libLLVMARMDisassembler \
  libLLVMAArch64CodeGen \
  libLLVMAArch64Info \
  libLLVMAArch64Desc \
  libLLVMAArch64AsmPrinter \
  libLLVMAArch64AsmParser \
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
  libLLVMJIT \
  libLLVMCodeGen \
  libLLVMInstrumentation \
  libLLVMExecutionEngine \
  libLLVMLinker \
  libLLVMInterpreter \
  libLLVMScalarOpts \
  libLLVMTransformUtils \
  libLLVMAnalysis \
  libLLVMTarget \
  libLLVMMC \
  libLLVMMCJIT \
  libLLVMRuntimeDyld \
  libLLVMMCParser \
  libLLVMObject \
  libLLVMCore \
  libLLVMAsmParser \
  libLLVMOption \
  libLLVMSupport \
  libLLVMMCDisassembler \

include $(CLEAR_VARS)

LOCAL_MODULE := lli
LOCAL_MODULE_TAGS := optional
LOCAL_MODULE_CLASS := EXECUTABLES
LOCAL_IS_HOST_MODULE := true

LOCAL_SRC_FILES := $(lli_SRC_FILES)

LOCAL_STATIC_LIBRARIES := $(lli_STATIC_LIBRARIES)

LOCAL_LDLIBS += -lpthread -lm -ldl

include $(LLVM_ROOT_PATH)/llvm.mk
include $(LLVM_HOST_BUILD_MK)
include $(LLVM_GEN_INTRINSICS_MK)
include $(BUILD_HOST_EXECUTABLE)
