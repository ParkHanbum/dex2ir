LOCAL_PATH := $(call my-dir)

LLVM_ROOT_PATH := $(LOCAL_PATH)/../..


#===---------------------------------------------------------------===
# llvm-mcmarkup command line tool
#===---------------------------------------------------------------===

llvm_mcmarkup_SRC_FILES := \
  llvm-mcmarkup.cpp

llvm_mcmarkup_STATIC_LIBRARIES := \
  libLLVMCore \
  libLLVMSupport \

include $(CLEAR_VARS)

LOCAL_MODULE := llvm-mcmarkup
LOCAL_MODULE_TAGS := optional
LOCAL_MODULE_CLASS := EXECUTABLES
LOCAL_IS_HOST_MODULE := true

LOCAL_SRC_FILES := $(llvm_mcmarkup_SRC_FILES)

LOCAL_STATIC_LIBRARIES := $(llvm_mcmarkup_STATIC_LIBRARIES)

LOCAL_LDLIBS += -lpthread -lm -ldl

include $(LLVM_ROOT_PATH)/llvm.mk
include $(LLVM_HOST_BUILD_MK)
include $(LLVM_GEN_INTRINSICS_MK)
include $(BUILD_HOST_EXECUTABLE)
