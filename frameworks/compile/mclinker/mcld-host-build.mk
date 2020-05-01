include $(LLVM_HOST_BUILD_MK)

include external/libcxx/libcxx.mk

LOCAL_CFLAGS := \
  -include $(MCLD_ROOT_PATH)/include/mcld/Config/Config.h \
  $(LOCAL_CFLAGS)

LOCAL_CPPFLAGS := \
  $(LOCAL_CPPFLAGS) \
  -Wno-unused-private-field \
  -Wno-unused-const-variable \
  -Wall

ifeq ($(MCLD_ENABLE_ASSERTION),true)
  LOCAL_CPPFLAGS += \
    -D_DEBUG \
    -UNDEBUG
endif

LOCAL_CLANG := true

ifeq ($(HOST_OS),darwin)
LOCAL_CFLAGS += -DDARWIN_FLEX=1
endif

ifeq ($(HOST_OS),windows)
LOCAL_C_INCLUDES := \
  $(MCLD_ROOT_PATH)/include \
  $(LLVM_ROOT_PATH) \
  $(LLVM_ROOT_PATH)/include \
  $(LLVM_ROOT_PATH)/host/include \
  $(LOCAL_C_INCLUDES)
else
LOCAL_C_INCLUDES := \
  $(MCLD_ROOT_PATH)/include \
  $(LLVM_ROOT_PATH) \
  $(LLVM_ROOT_PATH)/include \
  $(LLVM_ROOT_PATH)/host/include \
  external/libcxx/include \
  $(LOCAL_C_INCLUDES)
endif

LOCAL_IS_HOST_MODULE := true
