LOCAL_PATH := $(call my-dir)

LLVM_ROOT_PATH := $(LOCAL_PATH)/../..


#===---------------------------------------------------------------===
# opt command line tool
#===---------------------------------------------------------------===

llvm_opt_SRC_FILES := \
  AnalysisWrappers.cpp \
  BreakpointPrinter.cpp \
  GraphPrinters.cpp \
  NewPMDriver.cpp \
  Passes.cpp \
  PassPrinters.cpp \
  PrintSCC.cpp \
  opt.cpp \

llvm_opt_STATIC_LIBRARIES := \
  libLLVMIRReader \
  libLLVMBitReader \
  libLLVMBitWriter \
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
  libLLVMInstrumentation \
  libLLVMTransformObjCARC \
  libLLVMVectorize \
  libLLVMScalarOpts \
  libLLVMTransformUtils \
  libLLVMAnalysis \
  libLLVMipo \
  libLLVMipa \
  libLLVMInstCombine \
  libLLVMTransformUtils \
  libLLVMTarget \
  libLLVMMC \
  libLLVMMCParser \
  libLLVMObject \
  libLLVMCore \
  libLLVMAsmParser \
  libLLVMOption \
  libLLVMSupport \
  libLLVMMCDisassembler \

include $(CLEAR_VARS)

LOCAL_MODULE := opt
LOCAL_MODULE_TAGS := optional
LOCAL_MODULE_CLASS := EXECUTABLES
LOCAL_IS_HOST_MODULE := true

LOCAL_SRC_FILES := $(llvm_opt_SRC_FILES)
LOCAL_STATIC_LIBRARIES := $(llvm_opt_STATIC_LIBRARIES)
LOCAL_LDLIBS += -lpthread -lm -ldl

include $(LLVM_ROOT_PATH)/llvm.mk
include $(LLVM_HOST_BUILD_MK)
include $(LLVM_GEN_INTRINSICS_MK)
include $(BUILD_HOST_EXECUTABLE)
