include $(LLVM_DEVICE_BUILD_MK)

# The three inline options together reduce libbcc.so almost 1MB.
# We move them from global build/core/combo/TARGET_linux-arm.mk
# to here.
LOCAL_CFLAGS := \
  -DANDROID_TARGET_BUILD \
  -finline-functions \
  -include $(MCLD_ROOT_PATH)/include/mcld/Config/Config.h \
  $(LOCAL_CFLAGS)

LOCAL_CPPFLAGS := \
  $(LOCAL_CPPFLAGS) \
  -Wall \
  -Wno-unused-parameter \
  -Wno-unused-private-field \
  -Wno-unused-const-variable \
  -Werror

ifeq ($(MCLD_ENABLE_ASSERTION),true)
  LOCAL_CPPFLAGS += \
    -D_DEBUG \
    -UNDEBUG
endif

ifeq ($(HOST_OS),darwin)
LOCAL_CFLAGS += -DDARWIN_FLEX=1
endif

# Make sure bionic is first so we can include system headers.
LOCAL_C_INCLUDES := \
  bionic \
  external/libcxx/include \
  external/libcxxabi/include \
  $(MCLD_ROOT_PATH)/include \
  $(LLVM_ROOT_PATH) \
  $(LLVM_ROOT_PATH)/include \
  $(LLVM_ROOT_PATH)/device/include \
  $(LOCAL_C_INCLUDES)
