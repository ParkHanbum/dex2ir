LOCAL_PATH := $(call my-dir)

LLVM_ROOT_PATH := $(LOCAL_PATH)/../..


#===---------------------------------------------------------------===
# macho-dump command line tool
#===---------------------------------------------------------------===

macho_dump_SRC_FILES := \
  macho-dump.cpp

macho_dump_STATIC_LIBRARIES := \
  libLLVMObject                \
  libLLVMMC                    \
  libLLVMMCParser              \
  libLLVMBitReader             \
  libLLVMCore                  \
  libLLVMSupport               \

include $(CLEAR_VARS)

LOCAL_MODULE := macho-dump
LOCAL_MODULE_TAGS := optional
LOCAL_MODULE_CLASS := EXECUTABLES
LOCAL_IS_HOST_MODULE := true

LOCAL_SRC_FILES := $(macho_dump_SRC_FILES)

LOCAL_STATIC_LIBRARIES := $(macho_dump_STATIC_LIBRARIES)

LOCAL_LDLIBS += -lpthread -lm -ldl

include $(LLVM_ROOT_PATH)/llvm.mk
include $(LLVM_HOST_BUILD_MK)
include $(LLVM_GEN_INTRINSICS_MK)
include $(BUILD_HOST_EXECUTABLE)
