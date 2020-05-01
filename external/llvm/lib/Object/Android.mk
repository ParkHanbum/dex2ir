LOCAL_PATH := $(call my-dir)

object_SRC_FILES := \
  Archive.cpp \
  Binary.cpp \
  COFFObjectFile.cpp \
  COFFYAML.cpp \
  ELF.cpp \
  ELFObjectFile.cpp \
  ELFYAML.cpp \
  Error.cpp \
  IRObjectFile.cpp \
  MachOObjectFile.cpp \
  MachOUniversal.cpp \
  Object.cpp \
  ObjectFile.cpp \
  RecordStreamer.cpp \
  SymbolicFile.cpp

# For the host
# =====================================================
include $(CLEAR_VARS)
include $(CLEAR_TBLGEN_VARS)

LOCAL_MODULE:= libLLVMObject
LOCAL_MODULE_TAGS := optional

LOCAL_SRC_FILES := $(object_SRC_FILES)

include $(LLVM_HOST_BUILD_MK)
include $(LLVM_GEN_INTRINSICS_MK)
include $(BUILD_HOST_STATIC_LIBRARY)

# For the device only
# =====================================================
ifneq (true,$(DISABLE_LLVM_DEVICE_BUILDS))
include $(CLEAR_VARS)

LOCAL_MODULE:= libLLVMObject
LOCAL_MODULE_TAGS := optional

LOCAL_SRC_FILES := $(object_SRC_FILES)

include $(LLVM_DEVICE_BUILD_MK)
include $(LLVM_GEN_INTRINSICS_MK)
include $(BUILD_STATIC_LIBRARY)
endif
