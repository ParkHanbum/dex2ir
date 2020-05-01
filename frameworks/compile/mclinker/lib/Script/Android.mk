LOCAL_PATH:= $(call my-dir)

mcld_script_SRC_FILES := \
  AssertCmd.cpp \
  Assignment.cpp \
  BinaryOp.cpp \
  EntryCmd.cpp \
  FileToken.cpp \
  GroupCmd.cpp \
  InputSectDesc.cpp \
  InputToken.cpp \
  NameSpec.cpp \
  NullaryOp.cpp \
  Operand.cpp \
  Operator.cpp \
  OutputArchCmd.cpp \
  OutputCmd.cpp \
  OutputFormatCmd.cpp \
  OutputSectDesc.cpp \
  RpnEvaluator.cpp \
  RpnExpr.cpp \
  ScriptCommand.cpp \
  ScriptFile.cpp \
  ScriptReader.cpp \
  SearchDirCmd.cpp \
  SectionsCmd.cpp \
  ScriptScanner.ll \
  ScriptParser.yy \
  StrToken.cpp \
  StringList.cpp \
  TernaryOp.cpp \
  UnaryOp.cpp \
  WildcardPattern.cpp

# For the host
# =====================================================
include $(CLEAR_VARS)

LOCAL_SRC_FILES := $(mcld_script_SRC_FILES)
LOCAL_MODULE:= libmcldScript
LOCAL_C_INCLUDES := $(MCLD_ROOT_PATH)/include/mcld/Script
LOCAL_CFLAGS := -Wno-deprecated-register

LOCAL_MODULE_TAGS := optional

include $(MCLD_HOST_BUILD_MK)
include $(BUILD_HOST_STATIC_LIBRARY)

# For the device
# =====================================================
include $(CLEAR_VARS)

LOCAL_SRC_FILES := $(mcld_script_SRC_FILES)
LOCAL_MODULE:= libmcldScript
LOCAL_C_INCLUDES := $(MCLD_ROOT_PATH)/include/mcld/Script
LOCAL_CFLAGS := -Wno-deprecated-register

LOCAL_MODULE_TAGS := optional

include $(MCLD_DEVICE_BUILD_MK)
include $(BUILD_STATIC_LIBRARY)
