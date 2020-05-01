LOCAL_PATH := $(call my-dir)

LLVM_ROOT_PATH := $(LOCAL_PATH)/../..


#===---------------------------------------------------------------===
# bugpoint command line tool
#===---------------------------------------------------------------===

bugpoint_SRC_FILES := \
  BugDriver.cpp       \
  CrashDebugger.cpp   \
  ExecutionDriver.cpp \
  ExtractFunction.cpp \
  FindBugs.cpp        \
  Miscompilation.cpp  \
  OptimizerDriver.cpp \
  ToolRunner.cpp      \
  bugpoint.cpp        \

bugpoint_STATIC_LIBRARIES := \
  libLLVMBitWriter \
  libLLVMCodeGen \
  libLLVMipo \
  libLLVMipa \
  libLLVMIRReader \
  libLLVMBitReader \
  libLLVMAsmParser \
  libLLVMInstCombine \
  libLLVMInstrumentation \
  libLLVMLinker \
  libLLVMTransformObjCARC \
  libLLVMScalarOpts \
  libLLVMAnalysis \
  libLLVMTarget \
  libLLVMCore \
  libLLVMMC \
  libLLVMTransformUtils \
  libLLVMVectorize \
  libLLVMSupport \

include $(CLEAR_VARS)

LOCAL_MODULE := bugpoint
LOCAL_MODULE_TAGS := optional
LOCAL_MODULE_CLASS := EXECUTABLES
LOCAL_IS_HOST_MODULE := true

LOCAL_SRC_FILES := $(bugpoint_SRC_FILES)

LOCAL_STATIC_LIBRARIES := $(bugpoint_STATIC_LIBRARIES)

LOCAL_LDLIBS += -lpthread -lm -ldl

include $(LLVM_ROOT_PATH)/llvm.mk
include $(LLVM_HOST_BUILD_MK)
include $(LLVM_GEN_INTRINSICS_MK)
include $(BUILD_HOST_EXECUTABLE)
