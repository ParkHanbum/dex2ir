#
# Copyright (C) 2011 The Android Open Source Project
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
#

ifndef ANDROID_COMMON_MK
ANDROID_COMMON_MK = true

# These can be overridden via the environment or by editing to
# enable/disable certain build configuration.
#
# For example, to disable everything but the host debug build you use:
#
# (export ART_BUILD_TARGET_NDEBUG=false && export ART_BUILD_TARGET_DEBUG=false && export ART_BUILD_HOST_NDEBUG=false && ...)
#
# Beware that tests may use the non-debug build for performance, notable 055-enum-performance
#
ART_BUILD_TARGET_NDEBUG ?= true
ART_BUILD_TARGET_DEBUG ?= true
ART_BUILD_HOST_NDEBUG ?= $(WITH_HOST_DALVIK)
ART_BUILD_HOST_DEBUG ?= $(WITH_HOST_DALVIK)

ART_HOST_ARCH := x86_64
HOST_ARCH := x86
BUILD_HOST_64bit := true


ifeq ($(ART_BUILD_TARGET_NDEBUG),false)
$(info Disabling ART_BUILD_TARGET_NDEBUG)
endif
ifeq ($(ART_BUILD_TARGET_DEBUG),false)
$(info Disabling ART_BUILD_TARGET_DEBUG)
endif
ifeq ($(ART_BUILD_HOST_NDEBUG),false)
$(info Disabling ART_BUILD_HOST_NDEBUG)
endif
ifeq ($(ART_BUILD_HOST_DEBUG),false)
$(info Disabling ART_BUILD_HOST_DEBUG)
endif

#
# Used to enable smart mode
#
ART_SMALL_MODE := false
ifneq ($(wildcard art/SMALL_ART),)
$(info Enabling ART_SMALL_MODE because of existence of art/SMALL_ART)
ART_SMALL_MODE := true
endif
ifeq ($(WITH_ART_SMALL_MODE), true)
ART_SMALL_MODE := true
endif

#
# Used to enable SEA mode
#
#ART_SEA_IR_MODE := true

#
# Used to enable portable mode
#
ART_USE_PORTABLE_COMPILER := true

#
# Used to enable optimizing compiler
#
ART_USE_OPTIMIZING_COMPILER := false

#
# Used to change the default GC. Valid values are CMS, SS, GSS. The default is CMS.
#
ART_DEFAULT_GC_TYPE ?= CMS
ART_DEFAULT_GC_TYPE_CFLAGS := -DART_DEFAULT_GC_TYPE_IS_$(ART_DEFAULT_GC_TYPE)

LLVM_ROOT_PATH := external/llvm
# Don't fail a dalvik minimal host build.
-include $(LLVM_ROOT_PATH)/llvm.mk

# Clang build support.
# Target builds use GCC by default.
ART_TARGET_CLANG := false
ART_HOST_CLANG := false
ifneq ($(WITHOUT_HOST_CLANG),true)
  # By default, host builds use clang for better warnings.
  ART_HOST_CLANG := true
endif

# enable ART_TARGET_CLANG for ARM64
ifneq (,$(filter $(TARGET_ARCH),arm64))
ART_TARGET_CLANG := true
endif

# directory used for dalvik-cache on device
ART_DALVIK_CACHE_DIR := /data/dalvik-cache

# directory used for gtests on device
ART_BASE_NATIVETEST_DIR := /data/nativetest/art
ART_BASE_NATIVETEST_OUT := $(TARGET_OUT_DATA_NATIVE_TESTS)/art

# directory used for tests on device
ART_BASE_TEST_DIR := /data/art-test
ART_BASE_TEST_OUT := $(TARGET_OUT_DATA)/art-test

# Primary vs. secondary
2ND_TARGET_ARCH := $(TARGET_2ND_ARCH)
ART_PHONY_TEST_TARGET_SUFFIX :=
2ND_ART_PHONY_TEST_TARGET_SUFFIX :=
ART_TARGET_BINARY_SUFFIX :=
2ND_ART_TARGET_BINARY_SUFFIX :=
ifdef TARGET_2ND_ARCH
  art_test_primary_suffix :=
  art_test_secondary_suffix :=
  ifneq ($(filter %64,$(TARGET_ARCH)),)
    art_test_primary_suffix := 64
    ART_PHONY_TEST_TARGET_SUFFIX := 64
    2ND_ART_PHONY_TEST_TARGET_SUFFIX := 32
    ART_TARGET_BINARY_SUFFIX := 64
  else
    # TODO: ???
    $(error Do not know what to do with this multi-target configuration!)
  endif
  # Primary with primary suffix
  ART_NATIVETEST_DIR := $(ART_BASE_NATIVETEST_DIR)$(art_test_primary_suffix)
  ART_NATIVETEST_OUT := $(ART_BASE_NATIVETEST_OUT)$(art_test_primary_suffix)
  ART_TEST_DIR := $(ART_BASE_TEST_DIR)$(art_test_primary_suffix)
  ART_TEST_OUT := $(ART_BASE_TEST_OUT)$(art_test_primary_suffix)
  # Secondary with 2ND_ prefix and secondary suffix
  2ND_ART_NATIVETEST_DIR := $(ART_BASE_NATIVETEST_DIR)$(art_test_secondary_suffix)
  2ND_ART_NATIVETEST_OUT := $(ART_BASE_NATIVETEST_OUT)$(art_test_secondary_suffix)
  2ND_ART_TEST_DIR := $(ART_BASE_TEST_DIR)$(art_test_secondary_suffix)
  2ND_ART_TEST_OUT := $(ART_BASE_TEST_OUT)$(art_test_secondary_suffix)
else
  ART_NATIVETEST_DIR := $(ART_BASE_NATIVETEST_DIR)
  ART_NATIVETEST_OUT := $(ART_BASE_NATIVETEST_OUT)
  ART_TEST_DIR := $(ART_BASE_TEST_DIR)
  ART_TEST_OUT := $(ART_BASE_TEST_OUT)
  # No secondary
endif

ART_CPP_EXTENSION := .cc

ART_HOST_SHLIB_EXTENSION := $(HOST_SHLIB_SUFFIX)
ART_HOST_SHLIB_EXTENSION ?= .so

ART_C_INCLUDES := \
	external/gtest/include \
	external/valgrind/main/include \
	external/valgrind/main \
	external/vixl/src \
	external/zlib \
	frameworks/compile/mclinker/include

ART_HOST_CFLAGS := $(art_cflags) -DART_BASE_ADDRESS=$(LIBART_IMG_HOST_BASE_ADDRESS)
ART_HOST_CFLAGS += $(ART_DEFAULT_GC_TYPE_CFLAGS)

ART_TARGET_CFLAGS := $(art_cflags) -DART_TARGET -DART_BASE_ADDRESS=$(LIBART_IMG_TARGET_BASE_ADDRESS)
ART_TARGET_CFLAGS += $(ART_DEFAULT_GC_TYPE_CFLAGS)

# To use oprofile_android --callgraph, uncomment this and recompile with "mmm art -B -j16"
# ART_TARGET_CFLAGS += -fno-omit-frame-pointer -marm -mapcs

# Addition CPU specific CFLAGS.
ifeq ($(TARGET_ARCH),arm)
  ifneq ($(filter cortex-a15, $(TARGET_CPU_VARIANT)),)
    # Fake a ARM feature for LPAE support.
    ART_TARGET_CFLAGS += -D__ARM_FEATURE_LPAE=1
  endif
endif

ART_HOST_NON_DEBUG_CFLAGS := $(art_non_debug_cflags)
ART_TARGET_NON_DEBUG_CFLAGS := $(art_non_debug_cflags)

# TODO: move -fkeep-inline-functions to art_debug_cflags when target gcc > 4.4 (and -lsupc++)
ART_HOST_DEBUG_CFLAGS := $(art_debug_cflags) -fkeep-inline-functions
ART_HOST_DEBUG_LDLIBS := -lsupc++

ifneq ($(HOST_OS),linux)
  # Some Mac OS pthread header files are broken with -fkeep-inline-functions.
  ART_HOST_DEBUG_CFLAGS := $(filter-out -fkeep-inline-functions,$(ART_HOST_DEBUG_CFLAGS))
  # Mac OS doesn't have libsupc++.
  ART_HOST_DEBUG_LDLIBS := $(filter-out -lsupc++,$(ART_HOST_DEBUG_LDLIBS))
endif

ART_TARGET_DEBUG_CFLAGS := $(art_debug_cflags)

ART_BUILD_TARGET := false
ART_BUILD_HOST := false
ART_BUILD_NDEBUG := false
ART_BUILD_DEBUG := false

endif # ANDROID_COMMON_MK
