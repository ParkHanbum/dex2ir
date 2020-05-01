#
# Copyright (C) 2014 The Android Open Source Project
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
#  * Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
#  * Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in
#    the documentation and/or other materials provided with the
#    distribution.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
# FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
# COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
# BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
# OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
# AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
# OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
# OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
# SUCH DAMAGE.
#
#
# Copyright (c) 2014 ARM Ltd
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
# 3. The name of the company may not be used to endorse or promote
#    products derived from this software without specific prior written
#    permission.
#
# THIS SOFTWARE IS PROVIDED BY ARM LTD ``AS IS'' AND ANY EXPRESS OR IMPLIED
# WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
# MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
# IN NO EVENT SHALL ARM LTD BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
# SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
# TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
# PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
# LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
# NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
# SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

LOCAL_PATH:= $(call my-dir)

vixl_include_files := $(LOCAL_PATH)/src/ \

vixl_src_files := \
	src/a64/assembler-a64.cc \
	src/a64/cpu-a64.cc \
	src/a64/debugger-a64.cc \
	src/a64/decoder-a64.cc \
	src/a64/disasm-a64.cc \
	src/a64/instructions-a64.cc \
	src/a64/instrument-a64.cc \
	src/a64/macro-assembler-a64.cc \
	src/a64/simulator-a64.cc \
	src/utils-vixl.cc

vixl_test_files := \
	test/cctest.cc \
	test/test-utils-a64.cc \
	test/test-assembler-a64.cc \
	test/test-simulator-a64.cc \
	test/test-disasm-a64.cc \
	test/test-fuzz-a64.cc

include $(CLEAR_VARS)
LOCAL_CPP_EXTENSION := .cc
LOCAL_CPPFLAGS := -O2 -Wall -Wextra -DUSE_SIMULATOR
LOCAL_CPPFLAGS_arm64 := -UUSE_SIMULATOR
LOCAL_C_INCLUDES := $(vixl_include_files)
LOCAL_SRC_FILES :=  $(vixl_src_files)
LOCAL_SHARED_LIBRARIES := liblog
LOCAL_MODULE_TAGS := optional
LOCAL_MODULE := libvixl
LOCAL_ADDITIONAL_DEPENDENCIES := $(LOCAL_PATH)/Android.mk
include external/libcxx/libcxx.mk
include $(BUILD_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_CPP_EXTENSION := .cc
LOCAL_CPPFLAGS := -O2 -Wall -Wextra -DDEBUG=1  -DUSE_SIMULATOR
LOCAL_CPPFLAGS_arm64 := -UUSE_SIMULATOR
LOCAL_C_INCLUDES := $(vixl_include_files)
LOCAL_SRC_FILES :=  $(vixl_src_files)
LOCAL_SHARED_LIBRARIES := liblog
LOCAL_MODULE_TAGS := optional
LOCAL_MODULE := libvixlg
LOCAL_ADDITIONAL_DEPENDENCIES := $(LOCAL_PATH)/Android.mk
include external/libcxx/libcxx.mk
include $(BUILD_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_CLANG := true
LOCAL_CPP_EXTENSION := .cc
LOCAL_CPPFLAGS := -O2 -Wall -Wextra -DUSE_SIMULATOR
LOCAL_C_INCLUDES := $(vixl_include_files)
LOCAL_SRC_FILES :=  $(vixl_src_files)
LOCAL_STATIC_LIBRARIES := liblog
LOCAL_MODULE_TAGS := optional
LOCAL_MODULE := libvixl
LOCAL_ADDITIONAL_DEPENDENCIES := $(LOCAL_PATH)/Android.mk
LOCAL_MULTILIB := both
include external/libcxx/libcxx.mk
include $(BUILD_HOST_STATIC_LIBRARY)

# cctest_vixl: VIXL native tests (to run all tests execute ./cctest_vixl --run_all)
#
# We only support 64bit host builds of cctest.
include $(CLEAR_VARS)
LOCAL_CLANG := true
LOCAL_CPP_EXTENSION := .cc
LOCAL_CPPFLAGS := -O2 -Wall -Wextra -DUSE_SIMULATOR -DDEBUG=1 -UNDEBUG
LOCAL_C_INCLUDES := $(vixl_include_files)
LOCAL_SRC_FILES :=  $(vixl_test_files) $(vixl_src_files)
LOCAL_MODULE_TAGS := optional
LOCAL_MODULE_HOST_ARCH := x86_64
LOCAL_FORCE_STATIC_EXECUTABLE := true
LOCAL_MODULE := cctest_vixl
LOCAL_ADDITIONAL_DEPENDENCIES := $(LOCAL_PATH)/Android.mk
include external/libcxx/libcxx.mk
include $(BUILD_HOST_EXECUTABLE)

.PHONY: run-vixl-tests
run-vixl-tests: cctest_vixl
	$(HOST_OUT)/bin/cctest_vixl --run_all
	@echo vixl tests PASSED
