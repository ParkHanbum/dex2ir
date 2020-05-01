# Copyright (C) 2014 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

include $(CLEAR_VARS)

ifeq ($(vg_build_second_arch),true)
LOCAL_MULTILIB := 32
LOCAL_ARM_MODE := arm
vg_local_arch := $(TARGET_2ND_ARCH)
else
LOCAL_MULTILIB := first
LOCAL_ARM_MODE := arm64
vg_local_arch  := $(TARGET_ARCH)
endif

LOCAL_MODULE := $(vg_local_module)-$(vg_local_arch)-linux

LOCAL_SRC_FILES := $(vg_local_src_files)

LOCAL_C_INCLUDES := $(common_includes) $(vg_local_c_includes)

LOCAL_CFLAGS := $(vg_local_cflags)
LOCAL_CFLAGS_$(TARGET_ARCH) := $(vg_local_arch_cflags)
LOCAL_CFLAGS_$(TARGET_2ND_ARCH) := $(vg_local_2nd_arch_cflags)

LOCAL_ASFLAGS := $(common_cflags)
LOCAL_ASFLAGS_$(TARGET_ARCH) := $(vg_local_arch_cflags)
LOCAL_ASFLAGS_$(TARGET_2ND_ARCH) := $(vg_local_2nd_arch_cflags)


LOCAL_LDFLAGS := $(vg_local_ldflags)

LOCAL_MODULE_CLASS := $(vg_local_module_class)

LOCAL_STATIC_LIBRARIES := \
    $(foreach l,$(vg_local_static_libraries),$l-$(vg_local_arch)-linux)
LOCAL_WHOLE_STATIC_LIBRARIES := \
    $(foreach l,$(vg_local_whole_static_libraries),$l-$(vg_local_arch)-linux)

ifeq ($(vg_local_target),EXECUTABLE)
  LOCAL_FORCE_STATIC_EXECUTABLE := true
endif

ifneq ($(vg_local_target),STATIC_LIBRARY)
  LOCAL_MODULE_PATH=$(PRODUCT_OUT)$(vg_module_path)
endif

ifeq ($(vg_local_without_system_shared_libraries),true)
  LOCAL_SYSTEM_SHARED_LIBRARIES :=
endif

ifeq ($(vg_local_no_crt),true)
  LOCAL_NO_CRT := true
endif

include $(BUILD_$(vg_local_target))

