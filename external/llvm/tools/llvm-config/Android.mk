LOCAL_PATH := $(call my-dir)

LLVM_ROOT_PATH := $(LOCAL_PATH)/../..

#===---------------------------------------------------------------===
# llvm-config command line tool
#===---------------------------------------------------------------===

include $(CLEAR_VARS)

llvm_config_SRC_FILES := \
  llvm-config.cpp

llvm_config_STATIC_LIBRARIES := \
  libLLVMCore \
  libLLVMSupport

LOCAL_MODULE := llvm-config
LOCAL_MODULE_TAGS := optional
LOCAL_MODULE_CLASS := EXECUTABLES
LOCAL_IS_HOST_MODULE := true

# Create BuildVariables.inc dynamically from BuildVariables.inc.in
generated_sources := $(call local-generated-sources-dir)
GEN := $(addprefix $(generated_sources)/, \
            BuildVariables.inc \
        )

$(GEN) : PRIVATE_PATH := $(LOCAL_PATH)
$(GEN) : PRIVATE_CUSTOM_TOOL = sed -e 's/@ANDROID_BUILD_TOP@/$(subst /,\/,$(ANDROID_BUILD_TOP))/' < $< > $@
$(GEN) : $(LOCAL_PATH)/BuildVariables.inc.in
$(GEN): $(generated_sources)/%.inc : $(LOCAL_PATH)/%.inc.in
	$(transform-generated-source)

LOCAL_GENERATED_SOURCES += $(GEN)

LOCAL_C_INCLUDES := $(generated_sources)

LOCAL_SRC_FILES := $(llvm_config_SRC_FILES)
LOCAL_STATIC_LIBRARIES := $(llvm_config_STATIC_LIBRARIES)

LOCAL_LDLIBS += -lpthread -lm -ldl
LOCAL_ADDITIONAL_DEPENDENCIES := \
  $(LOCAL_PATH)/Android.mk \
  $(LOCAL_GENERATED_SOURCES)

include $(LLVM_ROOT_PATH)/llvm.mk
include $(LLVM_HOST_BUILD_MK)
include $(BUILD_HOST_EXECUTABLE)
